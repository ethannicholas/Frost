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
frost$core$String$class_type frost$core$String$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$core$String$_frost$core$Comparable, { frost$core$String$get_asString$R$frost$core$String$shim, frost$core$String$cleanup$shim, frost$core$String$format$frost$core$String$R$frost$core$String$shim, frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT, frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT, frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim, frost$core$String$get_length$R$frost$core$Int64, frost$core$String$get_byteLength$R$frost$core$Int64, frost$core$String$startsWith$frost$core$String$R$frost$core$Bit, frost$core$String$endsWith$frost$core$String$R$frost$core$Bit, frost$core$String$get_trimmed$R$frost$core$String, frost$core$String$$ADD$frost$core$String$R$frost$core$String, frost$core$String$$ADD$frost$core$Object$R$frost$core$String, frost$core$String$$MUL$frost$core$Int64$R$frost$core$String, frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32, frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String, frost$core$String$contains$frost$core$Char8$R$frost$core$Bit, frost$core$String$contains$frost$core$String$R$frost$core$Bit, frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q, frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$get_start$R$frost$core$String$Index, frost$core$String$get_end$R$frost$core$String$Index, frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index, frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String, frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$get_asInt64$R$frost$core$Int64$Q, frost$core$String$get_asUInt64$R$frost$core$UInt64$Q, frost$core$String$get_asReal64$R$frost$core$Real64$Q, frost$core$String$get_hash$R$frost$core$Int64$shim} };

typedef frost$core$Int64 (*$fn20)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn55)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn87)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn96)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn178)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn182)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn187)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn260)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn264)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn596)(frost$core$Object*);
typedef frost$core$String* (*$fn708)(frost$core$Object*);
typedef frost$core$Bit (*$fn784)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn793)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn817)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1333)(frost$core$Object*);
typedef frost$core$String* (*$fn1518)(frost$core$Object*);
typedef frost$core$Object* (*$fn2130)(frost$core$String*);
typedef frost$core$Object* (*$fn2132)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn2136)(frost$core$Object*);
typedef frost$core$String* (*$fn2143)(frost$core$Object*);
typedef frost$core$Object* (*$fn2209)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn2211)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2215)(frost$core$Object*);
typedef frost$core$String* (*$fn2223)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2545)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2598)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s606 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 612931044334107490, NULL };
static frost$core$String $s660 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 116, -8142968872510394027, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s900 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2062 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -286058843379027293, NULL };

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
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
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
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
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
if ($tmp227) goto block23; else goto block22;
block23:;
frost$core$Char8 $tmp228 = *(&local1);
frost$core$UInt8 $tmp229 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8($tmp228);
frost$core$UInt8 $tmp230 = (frost$core$UInt8) {126};
uint8_t $tmp231 = $tmp229.value;
uint8_t $tmp232 = $tmp230.value;
bool $tmp233 = $tmp231 <= $tmp232;
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block20; else goto block22;
block20:;
// line 428
frost$core$MutableString* $tmp236 = *(&local0);
frost$core$Char8 $tmp237 = *(&local1);
frost$core$MutableString$append$frost$core$Char8($tmp236, $tmp237);
goto block21;
block22:;
// line 1
// line 432
frost$core$MutableString* $tmp238 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp238, &$s239);
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
frost$core$MutableString* $tmp240 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp240, &$s241);
// line 438
frost$core$MutableString* $tmp242 = *(&local0);
frost$core$String* $tmp243 = frost$core$MutableString$finish$R$frost$core$String($tmp242);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$MutableString* $tmp244 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp243;
block5:;
// line 441
frost$core$Int64 $tmp245 = (frost$core$Int64) {441};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s246, $tmp245);
abort(); // unreachable
block1:;
goto block24;
block24:;

}
void frost$core$String$cleanup(frost$core$String* param0) {

// line 449
frost$core$String** $tmp247 = &param0->owner;
frost$core$String* $tmp248 = *$tmp247;
frost$core$Bit $tmp249 = frost$core$Bit$init$builtin_bit($tmp248 == NULL);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block1; else goto block2;
block1:;
// line 450
frost$core$Char8** $tmp251 = &param0->data;
frost$core$Char8* $tmp252 = *$tmp251;
frostFree($tmp252);
goto block2;
block2:;
// line 448
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp253 = &param0->owner;
frost$core$String* $tmp254 = *$tmp253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
return;

}
frost$collections$ListView* frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(frost$core$String* param0) {

// line 458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp255 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp255, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp255)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
return ((frost$collections$ListView*) $tmp255);

}
frost$collections$Iterator* frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT(frost$core$String* param0) {

// line 467
FROST_ASSERT(32 == sizeof(frost$core$String$UTF16Iterator));
frost$core$String$UTF16Iterator* $tmp256 = (frost$core$String$UTF16Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF16Iterator$class);
frost$core$String$UTF16Iterator$init$frost$core$String($tmp256, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp256)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
return ((frost$collections$Iterator*) $tmp256);

}
frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(frost$core$String* param0) {

// line 475
FROST_ASSERT(32 == sizeof(frost$core$String$UTF32Iterator));
frost$core$String$UTF32Iterator* $tmp257 = (frost$core$String$UTF32Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF32Iterator$class);
frost$core$String$UTF32Iterator$init$frost$core$String($tmp257, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp257)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
return ((frost$collections$Iterator*) $tmp257);

}
frost$core$Int64 frost$core$String$get_length$R$frost$core$Int64(frost$core$String* param0) {

// line 485
ITable* $tmp258 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp258->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp258 = $tmp258->next;
}
$fn260 $tmp259 = $tmp258->methods[0];
frost$collections$Iterator* $tmp261 = $tmp259(((frost$collections$Iterable*) param0));
ITable* $tmp262 = $tmp261->$class->itable;
while ($tmp262->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp262 = $tmp262->next;
}
$fn264 $tmp263 = $tmp262->methods[2];
frost$core$Int64 $tmp265 = $tmp263($tmp261);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
return $tmp265;

}
frost$core$Int64 frost$core$String$get_byteLength$R$frost$core$Int64(frost$core$String* param0) {

// line 492
frost$core$Int64* $tmp266 = &param0->_length;
frost$core$Int64 $tmp267 = *$tmp266;
return $tmp267;

}
frost$core$Bit frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 496
frost$core$Int64* $tmp268 = &param0->_length;
frost$core$Int64 $tmp269 = *$tmp268;
frost$core$Int64* $tmp270 = &param1->_length;
frost$core$Int64 $tmp271 = *$tmp270;
int64_t $tmp272 = $tmp269.value;
int64_t $tmp273 = $tmp271.value;
bool $tmp274 = $tmp272 < $tmp273;
frost$core$Bit $tmp275 = (frost$core$Bit) {$tmp274};
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block1; else goto block2;
block1:;
// line 497
frost$core$Bit $tmp277 = frost$core$Bit$init$builtin_bit(false);
return $tmp277;
block2:;
// line 499
frost$core$Int64 $tmp278 = (frost$core$Int64) {0};
frost$core$Int64* $tmp279 = &param1->_length;
frost$core$Int64 $tmp280 = *$tmp279;
frost$core$Bit $tmp281 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp282 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp278, $tmp280, $tmp281);
frost$core$Int64 $tmp283 = $tmp282.min;
*(&local0) = $tmp283;
frost$core$Int64 $tmp284 = $tmp282.max;
frost$core$Bit $tmp285 = $tmp282.inclusive;
bool $tmp286 = $tmp285.value;
frost$core$Int64 $tmp287 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp288 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp287);
if ($tmp286) goto block6; else goto block7;
block6:;
int64_t $tmp289 = $tmp283.value;
int64_t $tmp290 = $tmp284.value;
bool $tmp291 = $tmp289 <= $tmp290;
frost$core$Bit $tmp292 = (frost$core$Bit) {$tmp291};
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block3; else goto block4;
block7:;
int64_t $tmp294 = $tmp283.value;
int64_t $tmp295 = $tmp284.value;
bool $tmp296 = $tmp294 < $tmp295;
frost$core$Bit $tmp297 = (frost$core$Bit) {$tmp296};
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block3; else goto block4;
block3:;
// line 500
frost$core$Char8** $tmp299 = &param0->data;
frost$core$Char8* $tmp300 = *$tmp299;
frost$core$Int64 $tmp301 = *(&local0);
int64_t $tmp302 = $tmp301.value;
frost$core$Char8 $tmp303 = $tmp300[$tmp302];
frost$core$Char8** $tmp304 = &param1->data;
frost$core$Char8* $tmp305 = *$tmp304;
frost$core$Int64 $tmp306 = *(&local0);
int64_t $tmp307 = $tmp306.value;
frost$core$Char8 $tmp308 = $tmp305[$tmp307];
frost$core$Bit $tmp309 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp303, $tmp308);
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block8; else goto block9;
block8:;
// line 501
frost$core$Bit $tmp311 = frost$core$Bit$init$builtin_bit(false);
return $tmp311;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp312 = *(&local0);
int64_t $tmp313 = $tmp284.value;
int64_t $tmp314 = $tmp312.value;
int64_t $tmp315 = $tmp313 - $tmp314;
frost$core$Int64 $tmp316 = (frost$core$Int64) {$tmp315};
frost$core$UInt64 $tmp317 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp316);
if ($tmp286) goto block11; else goto block12;
block11:;
uint64_t $tmp318 = $tmp317.value;
uint64_t $tmp319 = $tmp288.value;
bool $tmp320 = $tmp318 >= $tmp319;
frost$core$Bit $tmp321 = (frost$core$Bit) {$tmp320};
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block10; else goto block4;
block12:;
uint64_t $tmp323 = $tmp317.value;
uint64_t $tmp324 = $tmp288.value;
bool $tmp325 = $tmp323 > $tmp324;
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp325};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block10; else goto block4;
block10:;
int64_t $tmp328 = $tmp312.value;
int64_t $tmp329 = $tmp287.value;
int64_t $tmp330 = $tmp328 + $tmp329;
frost$core$Int64 $tmp331 = (frost$core$Int64) {$tmp330};
*(&local0) = $tmp331;
goto block3;
block4:;
// line 504
frost$core$Bit $tmp332 = frost$core$Bit$init$builtin_bit(true);
return $tmp332;

}
frost$core$Bit frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 508
frost$core$Int64* $tmp333 = &param0->_length;
frost$core$Int64 $tmp334 = *$tmp333;
frost$core$Int64* $tmp335 = &param1->_length;
frost$core$Int64 $tmp336 = *$tmp335;
int64_t $tmp337 = $tmp334.value;
int64_t $tmp338 = $tmp336.value;
bool $tmp339 = $tmp337 < $tmp338;
frost$core$Bit $tmp340 = (frost$core$Bit) {$tmp339};
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block1; else goto block2;
block1:;
// line 509
frost$core$Bit $tmp342 = frost$core$Bit$init$builtin_bit(false);
return $tmp342;
block2:;
// line 511
frost$core$Int64 $tmp343 = (frost$core$Int64) {0};
frost$core$Int64* $tmp344 = &param1->_length;
frost$core$Int64 $tmp345 = *$tmp344;
frost$core$Bit $tmp346 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp347 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp343, $tmp345, $tmp346);
frost$core$Int64 $tmp348 = $tmp347.min;
*(&local0) = $tmp348;
frost$core$Int64 $tmp349 = $tmp347.max;
frost$core$Bit $tmp350 = $tmp347.inclusive;
bool $tmp351 = $tmp350.value;
frost$core$Int64 $tmp352 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp353 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp352);
if ($tmp351) goto block6; else goto block7;
block6:;
int64_t $tmp354 = $tmp348.value;
int64_t $tmp355 = $tmp349.value;
bool $tmp356 = $tmp354 <= $tmp355;
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp356};
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block3; else goto block4;
block7:;
int64_t $tmp359 = $tmp348.value;
int64_t $tmp360 = $tmp349.value;
bool $tmp361 = $tmp359 < $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block3; else goto block4;
block3:;
// line 512
frost$core$Char8** $tmp364 = &param0->data;
frost$core$Char8* $tmp365 = *$tmp364;
frost$core$Int64* $tmp366 = &param0->_length;
frost$core$Int64 $tmp367 = *$tmp366;
frost$core$Int64* $tmp368 = &param1->_length;
frost$core$Int64 $tmp369 = *$tmp368;
int64_t $tmp370 = $tmp367.value;
int64_t $tmp371 = $tmp369.value;
int64_t $tmp372 = $tmp370 - $tmp371;
frost$core$Int64 $tmp373 = (frost$core$Int64) {$tmp372};
frost$core$Int64 $tmp374 = *(&local0);
int64_t $tmp375 = $tmp373.value;
int64_t $tmp376 = $tmp374.value;
int64_t $tmp377 = $tmp375 + $tmp376;
frost$core$Int64 $tmp378 = (frost$core$Int64) {$tmp377};
int64_t $tmp379 = $tmp378.value;
frost$core$Char8 $tmp380 = $tmp365[$tmp379];
frost$core$Char8** $tmp381 = &param1->data;
frost$core$Char8* $tmp382 = *$tmp381;
frost$core$Int64 $tmp383 = *(&local0);
int64_t $tmp384 = $tmp383.value;
frost$core$Char8 $tmp385 = $tmp382[$tmp384];
frost$core$Bit $tmp386 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp380, $tmp385);
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block8; else goto block9;
block8:;
// line 513
frost$core$Bit $tmp388 = frost$core$Bit$init$builtin_bit(false);
return $tmp388;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp389 = *(&local0);
int64_t $tmp390 = $tmp349.value;
int64_t $tmp391 = $tmp389.value;
int64_t $tmp392 = $tmp390 - $tmp391;
frost$core$Int64 $tmp393 = (frost$core$Int64) {$tmp392};
frost$core$UInt64 $tmp394 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp393);
if ($tmp351) goto block11; else goto block12;
block11:;
uint64_t $tmp395 = $tmp394.value;
uint64_t $tmp396 = $tmp353.value;
bool $tmp397 = $tmp395 >= $tmp396;
frost$core$Bit $tmp398 = (frost$core$Bit) {$tmp397};
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block10; else goto block4;
block12:;
uint64_t $tmp400 = $tmp394.value;
uint64_t $tmp401 = $tmp353.value;
bool $tmp402 = $tmp400 > $tmp401;
frost$core$Bit $tmp403 = (frost$core$Bit) {$tmp402};
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block10; else goto block4;
block10:;
int64_t $tmp405 = $tmp389.value;
int64_t $tmp406 = $tmp352.value;
int64_t $tmp407 = $tmp405 + $tmp406;
frost$core$Int64 $tmp408 = (frost$core$Int64) {$tmp407};
*(&local0) = $tmp408;
goto block3;
block4:;
// line 516
frost$core$Bit $tmp409 = frost$core$Bit$init$builtin_bit(true);
return $tmp409;

}
frost$core$String* frost$core$String$get_trimmed$R$frost$core$String(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 525
frost$core$Int64* $tmp410 = &param0->_length;
frost$core$Int64 $tmp411 = *$tmp410;
frost$core$Int64 $tmp412 = (frost$core$Int64) {0};
frost$core$Bit $tmp413 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp411, $tmp412);
bool $tmp414 = $tmp413.value;
if ($tmp414) goto block1; else goto block2;
block1:;
// line 526
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 528
frost$core$Int64 $tmp415 = (frost$core$Int64) {0};
*(&local0) = $tmp415;
// line 529
goto block3;
block3:;
frost$core$Int64 $tmp416 = *(&local0);
frost$core$Int64* $tmp417 = &param0->_length;
frost$core$Int64 $tmp418 = *$tmp417;
int64_t $tmp419 = $tmp416.value;
int64_t $tmp420 = $tmp418.value;
bool $tmp421 = $tmp419 < $tmp420;
frost$core$Bit $tmp422 = (frost$core$Bit) {$tmp421};
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block6; else goto block5;
block6:;
frost$core$Char8** $tmp424 = &param0->data;
frost$core$Char8* $tmp425 = *$tmp424;
frost$core$Int64 $tmp426 = *(&local0);
int64_t $tmp427 = $tmp426.value;
frost$core$Char8 $tmp428 = $tmp425[$tmp427];
frost$core$Bit $tmp429 = frost$core$Char8$isWhitespace$R$frost$core$Bit($tmp428);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block4; else goto block5;
block4:;
// line 530
frost$core$Int64 $tmp431 = *(&local0);
frost$core$Int64 $tmp432 = (frost$core$Int64) {1};
int64_t $tmp433 = $tmp431.value;
int64_t $tmp434 = $tmp432.value;
int64_t $tmp435 = $tmp433 + $tmp434;
frost$core$Int64 $tmp436 = (frost$core$Int64) {$tmp435};
*(&local0) = $tmp436;
goto block3;
block5:;
// line 533
frost$core$Int64* $tmp437 = &param0->_length;
frost$core$Int64 $tmp438 = *$tmp437;
frost$core$Int64 $tmp439 = (frost$core$Int64) {1};
int64_t $tmp440 = $tmp438.value;
int64_t $tmp441 = $tmp439.value;
int64_t $tmp442 = $tmp440 - $tmp441;
frost$core$Int64 $tmp443 = (frost$core$Int64) {$tmp442};
*(&local1) = $tmp443;
// line 534
goto block7;
block7:;
frost$core$Int64 $tmp444 = *(&local1);
frost$core$Int64 $tmp445 = *(&local0);
int64_t $tmp446 = $tmp444.value;
int64_t $tmp447 = $tmp445.value;
bool $tmp448 = $tmp446 >= $tmp447;
frost$core$Bit $tmp449 = (frost$core$Bit) {$tmp448};
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block10; else goto block9;
block10:;
frost$core$Char8** $tmp451 = &param0->data;
frost$core$Char8* $tmp452 = *$tmp451;
frost$core$Int64 $tmp453 = *(&local1);
int64_t $tmp454 = $tmp453.value;
frost$core$Char8 $tmp455 = $tmp452[$tmp454];
frost$core$Bit $tmp456 = frost$core$Char8$isWhitespace$R$frost$core$Bit($tmp455);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block8; else goto block9;
block8:;
// line 535
frost$core$Int64 $tmp458 = *(&local1);
frost$core$Int64 $tmp459 = (frost$core$Int64) {1};
int64_t $tmp460 = $tmp458.value;
int64_t $tmp461 = $tmp459.value;
int64_t $tmp462 = $tmp460 - $tmp461;
frost$core$Int64 $tmp463 = (frost$core$Int64) {$tmp462};
*(&local1) = $tmp463;
goto block7;
block9:;
// line 538
frost$core$Int64 $tmp464 = *(&local0);
frost$core$String$Index $tmp465 = frost$core$String$Index$init$frost$core$Int64($tmp464);
frost$core$Int64 $tmp466 = *(&local1);
frost$core$String$Index $tmp467 = frost$core$String$Index$init$frost$core$Int64($tmp466);
frost$core$Bit $tmp468 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$String$Index$GT $tmp469 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp465, $tmp467, $tmp468);
frost$core$String* $tmp470 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp469);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
return $tmp470;

}
frost$core$String* frost$core$String$$ADD$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$Char8* local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 545
frost$core$Int64* $tmp471 = &param0->_length;
frost$core$Int64 $tmp472 = *$tmp471;
frost$core$Int64* $tmp473 = &param1->_length;
frost$core$Int64 $tmp474 = *$tmp473;
int64_t $tmp475 = $tmp472.value;
int64_t $tmp476 = $tmp474.value;
int64_t $tmp477 = $tmp475 + $tmp476;
frost$core$Int64 $tmp478 = (frost$core$Int64) {$tmp477};
int64_t $tmp479 = $tmp478.value;
frost$core$Char8* $tmp480 = ((frost$core$Char8*) frostAlloc($tmp479 * 1));
*(&local0) = $tmp480;
// line 546
frost$core$Int64 $tmp481 = (frost$core$Int64) {0};
frost$core$Int64* $tmp482 = &param0->_length;
frost$core$Int64 $tmp483 = *$tmp482;
frost$core$Bit $tmp484 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp485 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp481, $tmp483, $tmp484);
frost$core$Int64 $tmp486 = $tmp485.min;
*(&local1) = $tmp486;
frost$core$Int64 $tmp487 = $tmp485.max;
frost$core$Bit $tmp488 = $tmp485.inclusive;
bool $tmp489 = $tmp488.value;
frost$core$Int64 $tmp490 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp491 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp490);
if ($tmp489) goto block4; else goto block5;
block4:;
int64_t $tmp492 = $tmp486.value;
int64_t $tmp493 = $tmp487.value;
bool $tmp494 = $tmp492 <= $tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block1; else goto block2;
block5:;
int64_t $tmp497 = $tmp486.value;
int64_t $tmp498 = $tmp487.value;
bool $tmp499 = $tmp497 < $tmp498;
frost$core$Bit $tmp500 = (frost$core$Bit) {$tmp499};
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block1; else goto block2;
block1:;
// line 547
frost$core$Char8* $tmp502 = *(&local0);
frost$core$Int64 $tmp503 = *(&local1);
frost$core$Char8** $tmp504 = &param0->data;
frost$core$Char8* $tmp505 = *$tmp504;
frost$core$Int64 $tmp506 = *(&local1);
int64_t $tmp507 = $tmp506.value;
frost$core$Char8 $tmp508 = $tmp505[$tmp507];
int64_t $tmp509 = $tmp503.value;
$tmp502[$tmp509] = $tmp508;
goto block3;
block3:;
frost$core$Int64 $tmp510 = *(&local1);
int64_t $tmp511 = $tmp487.value;
int64_t $tmp512 = $tmp510.value;
int64_t $tmp513 = $tmp511 - $tmp512;
frost$core$Int64 $tmp514 = (frost$core$Int64) {$tmp513};
frost$core$UInt64 $tmp515 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp514);
if ($tmp489) goto block7; else goto block8;
block7:;
uint64_t $tmp516 = $tmp515.value;
uint64_t $tmp517 = $tmp491.value;
bool $tmp518 = $tmp516 >= $tmp517;
frost$core$Bit $tmp519 = (frost$core$Bit) {$tmp518};
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block6; else goto block2;
block8:;
uint64_t $tmp521 = $tmp515.value;
uint64_t $tmp522 = $tmp491.value;
bool $tmp523 = $tmp521 > $tmp522;
frost$core$Bit $tmp524 = (frost$core$Bit) {$tmp523};
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block6; else goto block2;
block6:;
int64_t $tmp526 = $tmp510.value;
int64_t $tmp527 = $tmp490.value;
int64_t $tmp528 = $tmp526 + $tmp527;
frost$core$Int64 $tmp529 = (frost$core$Int64) {$tmp528};
*(&local1) = $tmp529;
goto block1;
block2:;
// line 549
frost$core$Int64 $tmp530 = (frost$core$Int64) {0};
frost$core$Int64* $tmp531 = &param1->_length;
frost$core$Int64 $tmp532 = *$tmp531;
frost$core$Bit $tmp533 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp534 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp530, $tmp532, $tmp533);
frost$core$Int64 $tmp535 = $tmp534.min;
*(&local2) = $tmp535;
frost$core$Int64 $tmp536 = $tmp534.max;
frost$core$Bit $tmp537 = $tmp534.inclusive;
bool $tmp538 = $tmp537.value;
frost$core$Int64 $tmp539 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp540 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp539);
if ($tmp538) goto block12; else goto block13;
block12:;
int64_t $tmp541 = $tmp535.value;
int64_t $tmp542 = $tmp536.value;
bool $tmp543 = $tmp541 <= $tmp542;
frost$core$Bit $tmp544 = (frost$core$Bit) {$tmp543};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block9; else goto block10;
block13:;
int64_t $tmp546 = $tmp535.value;
int64_t $tmp547 = $tmp536.value;
bool $tmp548 = $tmp546 < $tmp547;
frost$core$Bit $tmp549 = (frost$core$Bit) {$tmp548};
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block9; else goto block10;
block9:;
// line 550
frost$core$Char8* $tmp551 = *(&local0);
frost$core$Int64* $tmp552 = &param0->_length;
frost$core$Int64 $tmp553 = *$tmp552;
frost$core$Int64 $tmp554 = *(&local2);
int64_t $tmp555 = $tmp553.value;
int64_t $tmp556 = $tmp554.value;
int64_t $tmp557 = $tmp555 + $tmp556;
frost$core$Int64 $tmp558 = (frost$core$Int64) {$tmp557};
frost$core$Char8** $tmp559 = &param1->data;
frost$core$Char8* $tmp560 = *$tmp559;
frost$core$Int64 $tmp561 = *(&local2);
int64_t $tmp562 = $tmp561.value;
frost$core$Char8 $tmp563 = $tmp560[$tmp562];
int64_t $tmp564 = $tmp558.value;
$tmp551[$tmp564] = $tmp563;
goto block11;
block11:;
frost$core$Int64 $tmp565 = *(&local2);
int64_t $tmp566 = $tmp536.value;
int64_t $tmp567 = $tmp565.value;
int64_t $tmp568 = $tmp566 - $tmp567;
frost$core$Int64 $tmp569 = (frost$core$Int64) {$tmp568};
frost$core$UInt64 $tmp570 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp569);
if ($tmp538) goto block15; else goto block16;
block15:;
uint64_t $tmp571 = $tmp570.value;
uint64_t $tmp572 = $tmp540.value;
bool $tmp573 = $tmp571 >= $tmp572;
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573};
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block14; else goto block10;
block16:;
uint64_t $tmp576 = $tmp570.value;
uint64_t $tmp577 = $tmp540.value;
bool $tmp578 = $tmp576 > $tmp577;
frost$core$Bit $tmp579 = (frost$core$Bit) {$tmp578};
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block14; else goto block10;
block14:;
int64_t $tmp581 = $tmp565.value;
int64_t $tmp582 = $tmp539.value;
int64_t $tmp583 = $tmp581 + $tmp582;
frost$core$Int64 $tmp584 = (frost$core$Int64) {$tmp583};
*(&local2) = $tmp584;
goto block9;
block10:;
// line 552
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp585 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp586 = *(&local0);
frost$core$Int64* $tmp587 = &param0->_length;
frost$core$Int64 $tmp588 = *$tmp587;
frost$core$Int64* $tmp589 = &param1->_length;
frost$core$Int64 $tmp590 = *$tmp589;
int64_t $tmp591 = $tmp588.value;
int64_t $tmp592 = $tmp590.value;
int64_t $tmp593 = $tmp591 + $tmp592;
frost$core$Int64 $tmp594 = (frost$core$Int64) {$tmp593};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp585, $tmp586, $tmp594);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
return $tmp585;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$R$frost$core$String(frost$core$String* param0, frost$core$Object* param1) {

// line 560
$fn596 $tmp595 = ($fn596) param1->$class->vtable[0];
frost$core$String* $tmp597 = $tmp595(param1);
frost$core$String* $tmp598 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp597);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
return $tmp598;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp599 = (frost$core$Int64) {0};
int64_t $tmp600 = param1.value;
int64_t $tmp601 = $tmp599.value;
bool $tmp602 = $tmp600 >= $tmp601;
frost$core$Bit $tmp603 = (frost$core$Bit) {$tmp602};
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp605 = (frost$core$Int64) {567};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s606, $tmp605, &$s607);
abort(); // unreachable
block1:;
// line 568
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp608 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp608);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$MutableString* $tmp609 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local0) = $tmp608;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// line 569
frost$core$Int64 $tmp610 = (frost$core$Int64) {0};
frost$core$Bit $tmp611 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp612 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp610, param1, $tmp611);
frost$core$Int64 $tmp613 = $tmp612.min;
*(&local1) = $tmp613;
frost$core$Int64 $tmp614 = $tmp612.max;
frost$core$Bit $tmp615 = $tmp612.inclusive;
bool $tmp616 = $tmp615.value;
frost$core$Int64 $tmp617 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp618 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp617);
if ($tmp616) goto block6; else goto block7;
block6:;
int64_t $tmp619 = $tmp613.value;
int64_t $tmp620 = $tmp614.value;
bool $tmp621 = $tmp619 <= $tmp620;
frost$core$Bit $tmp622 = (frost$core$Bit) {$tmp621};
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block3; else goto block4;
block7:;
int64_t $tmp624 = $tmp613.value;
int64_t $tmp625 = $tmp614.value;
bool $tmp626 = $tmp624 < $tmp625;
frost$core$Bit $tmp627 = (frost$core$Bit) {$tmp626};
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block3; else goto block4;
block3:;
// line 570
frost$core$MutableString* $tmp629 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp629, param0);
goto block5;
block5:;
frost$core$Int64 $tmp630 = *(&local1);
int64_t $tmp631 = $tmp614.value;
int64_t $tmp632 = $tmp630.value;
int64_t $tmp633 = $tmp631 - $tmp632;
frost$core$Int64 $tmp634 = (frost$core$Int64) {$tmp633};
frost$core$UInt64 $tmp635 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp634);
if ($tmp616) goto block9; else goto block10;
block9:;
uint64_t $tmp636 = $tmp635.value;
uint64_t $tmp637 = $tmp618.value;
bool $tmp638 = $tmp636 >= $tmp637;
frost$core$Bit $tmp639 = (frost$core$Bit) {$tmp638};
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block8; else goto block4;
block10:;
uint64_t $tmp641 = $tmp635.value;
uint64_t $tmp642 = $tmp618.value;
bool $tmp643 = $tmp641 > $tmp642;
frost$core$Bit $tmp644 = (frost$core$Bit) {$tmp643};
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block8; else goto block4;
block8:;
int64_t $tmp646 = $tmp630.value;
int64_t $tmp647 = $tmp617.value;
int64_t $tmp648 = $tmp646 + $tmp647;
frost$core$Int64 $tmp649 = (frost$core$Int64) {$tmp648};
*(&local1) = $tmp649;
goto block3;
block4:;
// line 572
frost$core$MutableString* $tmp650 = *(&local0);
frost$core$String* $tmp651 = frost$core$MutableString$finish$R$frost$core$String($tmp650);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$core$MutableString* $tmp652 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp651;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int64$frost$core$String$R$frost$core$String(frost$core$Int64 param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp653 = (frost$core$Int64) {0};
int64_t $tmp654 = param0.value;
int64_t $tmp655 = $tmp653.value;
bool $tmp656 = $tmp654 >= $tmp655;
frost$core$Bit $tmp657 = (frost$core$Bit) {$tmp656};
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp659 = (frost$core$Int64) {580};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s660, $tmp659, &$s661);
abort(); // unreachable
block1:;
// line 581
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp662 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp662);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$MutableString* $tmp663 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local0) = $tmp662;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// line 582
frost$core$Int64 $tmp664 = (frost$core$Int64) {0};
frost$core$Bit $tmp665 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp666 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp664, param0, $tmp665);
frost$core$Int64 $tmp667 = $tmp666.min;
*(&local1) = $tmp667;
frost$core$Int64 $tmp668 = $tmp666.max;
frost$core$Bit $tmp669 = $tmp666.inclusive;
bool $tmp670 = $tmp669.value;
frost$core$Int64 $tmp671 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp672 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp671);
if ($tmp670) goto block6; else goto block7;
block6:;
int64_t $tmp673 = $tmp667.value;
int64_t $tmp674 = $tmp668.value;
bool $tmp675 = $tmp673 <= $tmp674;
frost$core$Bit $tmp676 = (frost$core$Bit) {$tmp675};
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block3; else goto block4;
block7:;
int64_t $tmp678 = $tmp667.value;
int64_t $tmp679 = $tmp668.value;
bool $tmp680 = $tmp678 < $tmp679;
frost$core$Bit $tmp681 = (frost$core$Bit) {$tmp680};
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block3; else goto block4;
block3:;
// line 583
frost$core$MutableString* $tmp683 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp683, param1);
goto block5;
block5:;
frost$core$Int64 $tmp684 = *(&local1);
int64_t $tmp685 = $tmp668.value;
int64_t $tmp686 = $tmp684.value;
int64_t $tmp687 = $tmp685 - $tmp686;
frost$core$Int64 $tmp688 = (frost$core$Int64) {$tmp687};
frost$core$UInt64 $tmp689 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp688);
if ($tmp670) goto block9; else goto block10;
block9:;
uint64_t $tmp690 = $tmp689.value;
uint64_t $tmp691 = $tmp672.value;
bool $tmp692 = $tmp690 >= $tmp691;
frost$core$Bit $tmp693 = (frost$core$Bit) {$tmp692};
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block8; else goto block4;
block10:;
uint64_t $tmp695 = $tmp689.value;
uint64_t $tmp696 = $tmp672.value;
bool $tmp697 = $tmp695 > $tmp696;
frost$core$Bit $tmp698 = (frost$core$Bit) {$tmp697};
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block8; else goto block4;
block8:;
int64_t $tmp700 = $tmp684.value;
int64_t $tmp701 = $tmp671.value;
int64_t $tmp702 = $tmp700 + $tmp701;
frost$core$Int64 $tmp703 = (frost$core$Int64) {$tmp702};
*(&local1) = $tmp703;
goto block3;
block4:;
// line 585
frost$core$MutableString* $tmp704 = *(&local0);
frost$core$String* $tmp705 = frost$core$MutableString$finish$R$frost$core$String($tmp704);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$MutableString* $tmp706 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp705;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(frost$core$Object* param0, frost$core$String* param1) {

// line 594
$fn708 $tmp707 = ($fn708) param0->$class->vtable[0];
frost$core$String* $tmp709 = $tmp707(param0);
frost$core$String* $tmp710 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp709, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
return $tmp710;

}
frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 607
frost$core$Int64* $tmp711 = &param0->_length;
frost$core$Int64 $tmp712 = *$tmp711;
frost$core$Int64* $tmp713 = &param1->_length;
frost$core$Int64 $tmp714 = *$tmp713;
int64_t $tmp715 = $tmp712.value;
int64_t $tmp716 = $tmp714.value;
bool $tmp717 = $tmp715 != $tmp716;
frost$core$Bit $tmp718 = (frost$core$Bit) {$tmp717};
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block1; else goto block2;
block1:;
// line 608
frost$core$Bit $tmp720 = frost$core$Bit$init$builtin_bit(false);
return $tmp720;
block2:;
// line 610
frost$core$Int64 $tmp721 = (frost$core$Int64) {0};
frost$core$Int64* $tmp722 = &param0->_length;
frost$core$Int64 $tmp723 = *$tmp722;
frost$core$Bit $tmp724 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp725 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp721, $tmp723, $tmp724);
frost$core$Int64 $tmp726 = $tmp725.min;
*(&local0) = $tmp726;
frost$core$Int64 $tmp727 = $tmp725.max;
frost$core$Bit $tmp728 = $tmp725.inclusive;
bool $tmp729 = $tmp728.value;
frost$core$Int64 $tmp730 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp731 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp730);
if ($tmp729) goto block6; else goto block7;
block6:;
int64_t $tmp732 = $tmp726.value;
int64_t $tmp733 = $tmp727.value;
bool $tmp734 = $tmp732 <= $tmp733;
frost$core$Bit $tmp735 = (frost$core$Bit) {$tmp734};
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block3; else goto block4;
block7:;
int64_t $tmp737 = $tmp726.value;
int64_t $tmp738 = $tmp727.value;
bool $tmp739 = $tmp737 < $tmp738;
frost$core$Bit $tmp740 = (frost$core$Bit) {$tmp739};
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block3; else goto block4;
block3:;
// line 611
frost$core$Char8** $tmp742 = &param0->data;
frost$core$Char8* $tmp743 = *$tmp742;
frost$core$Int64 $tmp744 = *(&local0);
int64_t $tmp745 = $tmp744.value;
frost$core$Char8 $tmp746 = $tmp743[$tmp745];
frost$core$Char8** $tmp747 = &param1->data;
frost$core$Char8* $tmp748 = *$tmp747;
frost$core$Int64 $tmp749 = *(&local0);
int64_t $tmp750 = $tmp749.value;
frost$core$Char8 $tmp751 = $tmp748[$tmp750];
frost$core$Bit $tmp752 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp746, $tmp751);
bool $tmp753 = $tmp752.value;
if ($tmp753) goto block8; else goto block9;
block8:;
// line 612
frost$core$Bit $tmp754 = frost$core$Bit$init$builtin_bit(false);
return $tmp754;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp755 = *(&local0);
int64_t $tmp756 = $tmp727.value;
int64_t $tmp757 = $tmp755.value;
int64_t $tmp758 = $tmp756 - $tmp757;
frost$core$Int64 $tmp759 = (frost$core$Int64) {$tmp758};
frost$core$UInt64 $tmp760 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp759);
if ($tmp729) goto block11; else goto block12;
block11:;
uint64_t $tmp761 = $tmp760.value;
uint64_t $tmp762 = $tmp731.value;
bool $tmp763 = $tmp761 >= $tmp762;
frost$core$Bit $tmp764 = (frost$core$Bit) {$tmp763};
bool $tmp765 = $tmp764.value;
if ($tmp765) goto block10; else goto block4;
block12:;
uint64_t $tmp766 = $tmp760.value;
uint64_t $tmp767 = $tmp731.value;
bool $tmp768 = $tmp766 > $tmp767;
frost$core$Bit $tmp769 = (frost$core$Bit) {$tmp768};
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block10; else goto block4;
block10:;
int64_t $tmp771 = $tmp755.value;
int64_t $tmp772 = $tmp730.value;
int64_t $tmp773 = $tmp771 + $tmp772;
frost$core$Int64 $tmp774 = (frost$core$Int64) {$tmp773};
*(&local0) = $tmp774;
goto block3;
block4:;
// line 615
frost$core$Bit $tmp775 = frost$core$Bit$init$builtin_bit(true);
return $tmp775;

}
frost$core$Bit frost$core$String$$GT$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$Char32 local2;
frost$core$Char32 local3;
// line 626
frost$core$String$Index $tmp776 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp776;
// line 627
frost$core$String$Index $tmp777 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local1) = $tmp777;
// line 628
goto block1;
block1:;
frost$core$String$Index $tmp778 = *(&local0);
frost$core$String$Index$wrapper* $tmp779;
$tmp779 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp779->value = $tmp778;
frost$core$String$Index $tmp780 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp781;
$tmp781 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp781->value = $tmp780;
ITable* $tmp782 = ((frost$core$Comparable*) $tmp779)->$class->itable;
while ($tmp782->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp782 = $tmp782->next;
}
$fn784 $tmp783 = $tmp782->methods[1];
frost$core$Bit $tmp785 = $tmp783(((frost$core$Comparable*) $tmp779), ((frost$core$Comparable*) $tmp781));
bool $tmp786 = $tmp785.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp781)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp779)));
if ($tmp786) goto block4; else goto block3;
block4:;
frost$core$String$Index $tmp787 = *(&local1);
frost$core$String$Index$wrapper* $tmp788;
$tmp788 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp788->value = $tmp787;
frost$core$String$Index $tmp789 = frost$core$String$get_end$R$frost$core$String$Index(param1);
frost$core$String$Index$wrapper* $tmp790;
$tmp790 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp790->value = $tmp789;
ITable* $tmp791 = ((frost$core$Comparable*) $tmp788)->$class->itable;
while ($tmp791->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp791 = $tmp791->next;
}
$fn793 $tmp792 = $tmp791->methods[1];
frost$core$Bit $tmp794 = $tmp792(((frost$core$Comparable*) $tmp788), ((frost$core$Comparable*) $tmp790));
bool $tmp795 = $tmp794.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp790)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp788)));
if ($tmp795) goto block2; else goto block3;
block2:;
// line 629
frost$core$String$Index $tmp796 = *(&local0);
frost$core$Char32 $tmp797 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp796);
*(&local2) = $tmp797;
// line 630
frost$core$String$Index $tmp798 = *(&local1);
frost$core$Char32 $tmp799 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp798);
*(&local3) = $tmp799;
// line 631
frost$core$Char32 $tmp800 = *(&local2);
frost$core$Char32 $tmp801 = *(&local3);
frost$core$Bit $tmp802 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp800, $tmp801);
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block5; else goto block6;
block5:;
// line 632
frost$core$String$Index $tmp804 = *(&local0);
frost$core$String$Index $tmp805 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp804);
*(&local0) = $tmp805;
// line 633
frost$core$String$Index $tmp806 = *(&local1);
frost$core$String$Index $tmp807 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp806);
*(&local1) = $tmp807;
// line 634
goto block1;
block6:;
// line 636
frost$core$Char32 $tmp808 = *(&local2);
frost$core$Char32 $tmp809 = *(&local3);
frost$core$Bit $tmp810 = frost$core$Char32$$GT$frost$core$Char32$R$frost$core$Bit($tmp808, $tmp809);
return $tmp810;
block3:;
// line 638
frost$core$String$Index $tmp811 = *(&local0);
frost$core$String$Index$wrapper* $tmp812;
$tmp812 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp812->value = $tmp811;
frost$core$String$Index $tmp813 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp814;
$tmp814 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp814->value = $tmp813;
ITable* $tmp815 = ((frost$core$Equatable*) $tmp812)->$class->itable;
while ($tmp815->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp815 = $tmp815->next;
}
$fn817 $tmp816 = $tmp815->methods[1];
frost$core$Bit $tmp818 = $tmp816(((frost$core$Equatable*) $tmp812), ((frost$core$Equatable*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp814)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp812)));
return $tmp818;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// line 645
frost$core$Int64 $tmp819 = param1.value;
*(&local0) = $tmp819;
// line 646
frost$core$Char8** $tmp820 = &param0->data;
frost$core$Char8* $tmp821 = *$tmp820;
frost$core$Int64 $tmp822 = *(&local0);
int64_t $tmp823 = $tmp822.value;
frost$core$Char8 $tmp824 = $tmp821[$tmp823];
*(&local1) = $tmp824;
// line 647
frost$core$Char8 $tmp825 = *(&local1);
frost$core$Int32 $tmp826 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp825);
*(&local2) = $tmp826;
// line 648
frost$core$Char8 $tmp827 = *(&local1);
uint8_t $tmp828 = $tmp827.value;
int64_t $tmp829 = ((int64_t) $tmp828) & 255;
bool $tmp830 = $tmp829 < 192;
frost$core$Bit $tmp831 = frost$core$Bit$init$builtin_bit($tmp830);
bool $tmp832 = $tmp831.value;
if ($tmp832) goto block1; else goto block2;
block1:;
// line 649
frost$core$Int32 $tmp833 = *(&local2);
frost$core$Char32 $tmp834 = frost$core$Char32$init$frost$core$Int32($tmp833);
return $tmp834;
block2:;
// line 651
frost$core$Char8 $tmp835 = *(&local1);
uint8_t $tmp836 = $tmp835.value;
int64_t $tmp837 = ((int64_t) $tmp836) & 255;
bool $tmp838 = $tmp837 < 224;
frost$core$Bit $tmp839 = frost$core$Bit$init$builtin_bit($tmp838);
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block3; else goto block4;
block3:;
// line 652
frost$core$Int64 $tmp841 = *(&local0);
frost$core$Int64 $tmp842 = (frost$core$Int64) {1};
int64_t $tmp843 = $tmp841.value;
int64_t $tmp844 = $tmp842.value;
int64_t $tmp845 = $tmp843 + $tmp844;
frost$core$Int64 $tmp846 = (frost$core$Int64) {$tmp845};
frost$core$Int64* $tmp847 = &param0->_length;
frost$core$Int64 $tmp848 = *$tmp847;
int64_t $tmp849 = $tmp846.value;
int64_t $tmp850 = $tmp848.value;
bool $tmp851 = $tmp849 < $tmp850;
frost$core$Bit $tmp852 = (frost$core$Bit) {$tmp851};
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp854 = (frost$core$Int64) {652};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s855, $tmp854);
abort(); // unreachable
block5:;
// line 653
frost$core$Int32 $tmp856 = *(&local2);
frost$core$Int32 $tmp857 = (frost$core$Int32) {31};
frost$core$Int32 $tmp858 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp856, $tmp857);
frost$core$Int32 $tmp859 = (frost$core$Int32) {6};
frost$core$Int32 $tmp860 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp858, $tmp859);
frost$core$Char8** $tmp861 = &param0->data;
frost$core$Char8* $tmp862 = *$tmp861;
frost$core$Int64 $tmp863 = *(&local0);
frost$core$Int64 $tmp864 = (frost$core$Int64) {1};
int64_t $tmp865 = $tmp863.value;
int64_t $tmp866 = $tmp864.value;
int64_t $tmp867 = $tmp865 + $tmp866;
frost$core$Int64 $tmp868 = (frost$core$Int64) {$tmp867};
int64_t $tmp869 = $tmp868.value;
frost$core$Char8 $tmp870 = $tmp862[$tmp869];
frost$core$Int32 $tmp871 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp870);
frost$core$Int32 $tmp872 = (frost$core$Int32) {63};
frost$core$Int32 $tmp873 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp871, $tmp872);
int32_t $tmp874 = $tmp860.value;
int32_t $tmp875 = $tmp873.value;
int32_t $tmp876 = $tmp874 + $tmp875;
frost$core$Int32 $tmp877 = (frost$core$Int32) {$tmp876};
*(&local2) = $tmp877;
// line 654
frost$core$Int32 $tmp878 = *(&local2);
frost$core$Char32 $tmp879 = frost$core$Char32$init$frost$core$Int32($tmp878);
return $tmp879;
block4:;
// line 656
frost$core$Char8 $tmp880 = *(&local1);
uint8_t $tmp881 = $tmp880.value;
int64_t $tmp882 = ((int64_t) $tmp881) & 255;
bool $tmp883 = $tmp882 < 240;
frost$core$Bit $tmp884 = frost$core$Bit$init$builtin_bit($tmp883);
bool $tmp885 = $tmp884.value;
if ($tmp885) goto block7; else goto block8;
block7:;
// line 657
frost$core$Int64 $tmp886 = *(&local0);
frost$core$Int64 $tmp887 = (frost$core$Int64) {2};
int64_t $tmp888 = $tmp886.value;
int64_t $tmp889 = $tmp887.value;
int64_t $tmp890 = $tmp888 + $tmp889;
frost$core$Int64 $tmp891 = (frost$core$Int64) {$tmp890};
frost$core$Int64* $tmp892 = &param0->_length;
frost$core$Int64 $tmp893 = *$tmp892;
int64_t $tmp894 = $tmp891.value;
int64_t $tmp895 = $tmp893.value;
bool $tmp896 = $tmp894 < $tmp895;
frost$core$Bit $tmp897 = (frost$core$Bit) {$tmp896};
bool $tmp898 = $tmp897.value;
if ($tmp898) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp899 = (frost$core$Int64) {657};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s900, $tmp899);
abort(); // unreachable
block9:;
// line 658
frost$core$Int32 $tmp901 = *(&local2);
frost$core$Int32 $tmp902 = (frost$core$Int32) {15};
frost$core$Int32 $tmp903 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp901, $tmp902);
frost$core$Int32 $tmp904 = (frost$core$Int32) {12};
frost$core$Int32 $tmp905 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp903, $tmp904);
frost$core$Char8** $tmp906 = &param0->data;
frost$core$Char8* $tmp907 = *$tmp906;
frost$core$Int64 $tmp908 = *(&local0);
frost$core$Int64 $tmp909 = (frost$core$Int64) {1};
int64_t $tmp910 = $tmp908.value;
int64_t $tmp911 = $tmp909.value;
int64_t $tmp912 = $tmp910 + $tmp911;
frost$core$Int64 $tmp913 = (frost$core$Int64) {$tmp912};
int64_t $tmp914 = $tmp913.value;
frost$core$Char8 $tmp915 = $tmp907[$tmp914];
frost$core$Int32 $tmp916 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp915);
frost$core$Int32 $tmp917 = (frost$core$Int32) {63};
frost$core$Int32 $tmp918 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp916, $tmp917);
frost$core$Int32 $tmp919 = (frost$core$Int32) {6};
frost$core$Int32 $tmp920 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp918, $tmp919);
int32_t $tmp921 = $tmp905.value;
int32_t $tmp922 = $tmp920.value;
int32_t $tmp923 = $tmp921 + $tmp922;
frost$core$Int32 $tmp924 = (frost$core$Int32) {$tmp923};
frost$core$Char8** $tmp925 = &param0->data;
frost$core$Char8* $tmp926 = *$tmp925;
frost$core$Int64 $tmp927 = *(&local0);
frost$core$Int64 $tmp928 = (frost$core$Int64) {2};
int64_t $tmp929 = $tmp927.value;
int64_t $tmp930 = $tmp928.value;
int64_t $tmp931 = $tmp929 + $tmp930;
frost$core$Int64 $tmp932 = (frost$core$Int64) {$tmp931};
int64_t $tmp933 = $tmp932.value;
frost$core$Char8 $tmp934 = $tmp926[$tmp933];
frost$core$Int32 $tmp935 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp934);
frost$core$Int32 $tmp936 = (frost$core$Int32) {63};
frost$core$Int32 $tmp937 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp935, $tmp936);
int32_t $tmp938 = $tmp924.value;
int32_t $tmp939 = $tmp937.value;
int32_t $tmp940 = $tmp938 + $tmp939;
frost$core$Int32 $tmp941 = (frost$core$Int32) {$tmp940};
*(&local2) = $tmp941;
// line 660
frost$core$Int32 $tmp942 = *(&local2);
frost$core$Char32 $tmp943 = frost$core$Char32$init$frost$core$Int32($tmp942);
return $tmp943;
block8:;
// line 662
frost$core$Int64 $tmp944 = *(&local0);
frost$core$Int64 $tmp945 = (frost$core$Int64) {3};
int64_t $tmp946 = $tmp944.value;
int64_t $tmp947 = $tmp945.value;
int64_t $tmp948 = $tmp946 + $tmp947;
frost$core$Int64 $tmp949 = (frost$core$Int64) {$tmp948};
frost$core$Int64* $tmp950 = &param0->_length;
frost$core$Int64 $tmp951 = *$tmp950;
int64_t $tmp952 = $tmp949.value;
int64_t $tmp953 = $tmp951.value;
bool $tmp954 = $tmp952 < $tmp953;
frost$core$Bit $tmp955 = (frost$core$Bit) {$tmp954};
bool $tmp956 = $tmp955.value;
if ($tmp956) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp957 = (frost$core$Int64) {662};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s958, $tmp957);
abort(); // unreachable
block11:;
// line 663
frost$core$Int32 $tmp959 = *(&local2);
frost$core$Int32 $tmp960 = (frost$core$Int32) {7};
frost$core$Int32 $tmp961 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp959, $tmp960);
frost$core$Int32 $tmp962 = (frost$core$Int32) {18};
frost$core$Int32 $tmp963 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp961, $tmp962);
frost$core$Char8** $tmp964 = &param0->data;
frost$core$Char8* $tmp965 = *$tmp964;
frost$core$Int64 $tmp966 = *(&local0);
frost$core$Int64 $tmp967 = (frost$core$Int64) {1};
int64_t $tmp968 = $tmp966.value;
int64_t $tmp969 = $tmp967.value;
int64_t $tmp970 = $tmp968 + $tmp969;
frost$core$Int64 $tmp971 = (frost$core$Int64) {$tmp970};
int64_t $tmp972 = $tmp971.value;
frost$core$Char8 $tmp973 = $tmp965[$tmp972];
frost$core$Int32 $tmp974 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp973);
frost$core$Int32 $tmp975 = (frost$core$Int32) {63};
frost$core$Int32 $tmp976 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp974, $tmp975);
frost$core$Int32 $tmp977 = (frost$core$Int32) {12};
frost$core$Int32 $tmp978 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp976, $tmp977);
int32_t $tmp979 = $tmp963.value;
int32_t $tmp980 = $tmp978.value;
int32_t $tmp981 = $tmp979 + $tmp980;
frost$core$Int32 $tmp982 = (frost$core$Int32) {$tmp981};
frost$core$Char8** $tmp983 = &param0->data;
frost$core$Char8* $tmp984 = *$tmp983;
frost$core$Int64 $tmp985 = *(&local0);
frost$core$Int64 $tmp986 = (frost$core$Int64) {2};
int64_t $tmp987 = $tmp985.value;
int64_t $tmp988 = $tmp986.value;
int64_t $tmp989 = $tmp987 + $tmp988;
frost$core$Int64 $tmp990 = (frost$core$Int64) {$tmp989};
int64_t $tmp991 = $tmp990.value;
frost$core$Char8 $tmp992 = $tmp984[$tmp991];
frost$core$Int32 $tmp993 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp992);
frost$core$Int32 $tmp994 = (frost$core$Int32) {63};
frost$core$Int32 $tmp995 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp993, $tmp994);
frost$core$Int32 $tmp996 = (frost$core$Int32) {6};
frost$core$Int32 $tmp997 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp995, $tmp996);
int32_t $tmp998 = $tmp982.value;
int32_t $tmp999 = $tmp997.value;
int32_t $tmp1000 = $tmp998 + $tmp999;
frost$core$Int32 $tmp1001 = (frost$core$Int32) {$tmp1000};
frost$core$Char8** $tmp1002 = &param0->data;
frost$core$Char8* $tmp1003 = *$tmp1002;
frost$core$Int64 $tmp1004 = *(&local0);
frost$core$Int64 $tmp1005 = (frost$core$Int64) {3};
int64_t $tmp1006 = $tmp1004.value;
int64_t $tmp1007 = $tmp1005.value;
int64_t $tmp1008 = $tmp1006 + $tmp1007;
frost$core$Int64 $tmp1009 = (frost$core$Int64) {$tmp1008};
int64_t $tmp1010 = $tmp1009.value;
frost$core$Char8 $tmp1011 = $tmp1003[$tmp1010];
frost$core$Int32 $tmp1012 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1011);
frost$core$Int32 $tmp1013 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1014 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1012, $tmp1013);
int32_t $tmp1015 = $tmp1001.value;
int32_t $tmp1016 = $tmp1014.value;
int32_t $tmp1017 = $tmp1015 + $tmp1016;
frost$core$Int32 $tmp1018 = (frost$core$Int32) {$tmp1017};
*(&local2) = $tmp1018;
// line 666
frost$core$Int32 $tmp1019 = *(&local2);
frost$core$Char32 $tmp1020 = frost$core$Char32$init$frost$core$Int32($tmp1019);
return $tmp1020;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32(frost$core$String* param0, frost$core$Int64 param1) {

// line 675
frost$core$String$Index $tmp1021 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$String$Index $tmp1022 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1021, param1);
frost$core$Char32 $tmp1023 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp1022);
return $tmp1023;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
// line 688
frost$core$String$Index $tmp1024 = param1.max;
frost$core$Int64 $tmp1025 = $tmp1024.value;
frost$core$String$Index $tmp1026 = param1.min;
frost$core$Int64 $tmp1027 = $tmp1026.value;
int64_t $tmp1028 = $tmp1025.value;
int64_t $tmp1029 = $tmp1027.value;
int64_t $tmp1030 = $tmp1028 - $tmp1029;
frost$core$Int64 $tmp1031 = (frost$core$Int64) {$tmp1030};
*(&local0) = $tmp1031;
// line 689
frost$core$Bit $tmp1032 = param1.inclusive;
bool $tmp1033 = $tmp1032.value;
if ($tmp1033) goto block1; else goto block2;
block1:;
// line 690
frost$core$Int64 $tmp1034 = *(&local0);
frost$core$Int64 $tmp1035 = (frost$core$Int64) {1};
int64_t $tmp1036 = $tmp1034.value;
int64_t $tmp1037 = $tmp1035.value;
int64_t $tmp1038 = $tmp1036 + $tmp1037;
frost$core$Int64 $tmp1039 = (frost$core$Int64) {$tmp1038};
*(&local0) = $tmp1039;
goto block2;
block2:;
// line 692
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp1040 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8** $tmp1041 = &param0->data;
frost$core$Char8* $tmp1042 = *$tmp1041;
frost$core$String$Index $tmp1043 = param1.min;
frost$core$Int64 $tmp1044 = $tmp1043.value;
int64_t $tmp1045 = $tmp1044.value;
frost$core$Char8* $tmp1046 = $tmp1042 + $tmp1045;
frost$core$Int64 $tmp1047 = *(&local0);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$frost$core$String($tmp1040, $tmp1046, $tmp1047, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
return $tmp1040;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$Bit local1;
frost$core$String$Index local2;
// line 708
// line 709
frost$core$String$Index$nullable $tmp1048 = param1.min;
frost$core$Bit $tmp1049 = frost$core$Bit$init$builtin_bit($tmp1048.nonnull);
bool $tmp1050 = $tmp1049.value;
if ($tmp1050) goto block1; else goto block3;
block1:;
// line 710
frost$core$String$Index$nullable $tmp1051 = param1.min;
*(&local0) = ((frost$core$String$Index) $tmp1051.value);
goto block2;
block3:;
// line 1
// line 713
frost$core$String$Index $tmp1052 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1052;
goto block2;
block2:;
// line 716
frost$core$Bit $tmp1053 = param1.inclusive;
*(&local1) = $tmp1053;
// line 717
// line 718
frost$core$String$Index$nullable $tmp1054 = param1.max;
frost$core$Bit $tmp1055 = frost$core$Bit$init$builtin_bit($tmp1054.nonnull);
bool $tmp1056 = $tmp1055.value;
if ($tmp1056) goto block4; else goto block6;
block4:;
// line 719
frost$core$String$Index$nullable $tmp1057 = param1.max;
*(&local2) = ((frost$core$String$Index) $tmp1057.value);
goto block5;
block6:;
// line 1
// line 722
frost$core$String$Index $tmp1058 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1058;
// line 723
frost$core$Bit $tmp1059 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1059;
goto block5;
block5:;
// line 725
frost$core$String$Index $tmp1060 = *(&local0);
frost$core$String$Index $tmp1061 = *(&local2);
frost$core$Bit $tmp1062 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1063 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1060, $tmp1061, $tmp1062);
frost$core$String* $tmp1064 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1063);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
return $tmp1064;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
frost$core$Char8 local3;
// line 733
frost$core$String$Index $tmp1065 = param1.min;
frost$core$Int64 $tmp1066 = $tmp1065.value;
*(&local0) = $tmp1066;
// line 734
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1067 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1067);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
frost$core$MutableString* $tmp1068 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local1) = $tmp1067;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
// line 735
frost$core$String$Index $tmp1069 = param1.max;
frost$core$Int64 $tmp1070 = $tmp1069.value;
*(&local2) = $tmp1070;
// line 736
frost$core$Bit $tmp1071 = param1.inclusive;
bool $tmp1072 = $tmp1071.value;
if ($tmp1072) goto block1; else goto block2;
block1:;
// line 737
frost$core$Int64 $tmp1073 = *(&local2);
frost$core$Int64 $tmp1074 = (frost$core$Int64) {1};
int64_t $tmp1075 = $tmp1073.value;
int64_t $tmp1076 = $tmp1074.value;
int64_t $tmp1077 = $tmp1075 + $tmp1076;
frost$core$Int64 $tmp1078 = (frost$core$Int64) {$tmp1077};
*(&local2) = $tmp1078;
goto block2;
block2:;
// line 739
goto block3;
block3:;
frost$core$Int64 $tmp1079 = *(&local0);
frost$core$Int64 $tmp1080 = *(&local2);
int64_t $tmp1081 = $tmp1079.value;
int64_t $tmp1082 = $tmp1080.value;
bool $tmp1083 = $tmp1081 < $tmp1082;
frost$core$Bit $tmp1084 = (frost$core$Bit) {$tmp1083};
bool $tmp1085 = $tmp1084.value;
if ($tmp1085) goto block4; else goto block5;
block4:;
// line 740
frost$core$Char8** $tmp1086 = &param0->data;
frost$core$Char8* $tmp1087 = *$tmp1086;
frost$core$Int64 $tmp1088 = *(&local0);
int64_t $tmp1089 = $tmp1088.value;
frost$core$Char8 $tmp1090 = $tmp1087[$tmp1089];
*(&local3) = $tmp1090;
// line 741
frost$core$MutableString* $tmp1091 = *(&local1);
frost$core$Char8 $tmp1092 = *(&local3);
frost$core$MutableString$append$frost$core$Char8($tmp1091, $tmp1092);
// line 742
frost$core$Int64 $tmp1093 = *(&local0);
frost$core$Int64 $tmp1094 = (frost$core$Int64) {1};
int64_t $tmp1095 = $tmp1093.value;
int64_t $tmp1096 = $tmp1094.value;
int64_t $tmp1097 = $tmp1095 + $tmp1096;
frost$core$Int64 $tmp1098 = (frost$core$Int64) {$tmp1097};
*(&local0) = $tmp1098;
// line 743
frost$core$Char8 $tmp1099 = *(&local3);
uint8_t $tmp1100 = $tmp1099.value;
int64_t $tmp1101 = ((int64_t) $tmp1100) & 255;
bool $tmp1102 = $tmp1101 >= 192;
frost$core$Bit $tmp1103 = frost$core$Bit$init$builtin_bit($tmp1102);
bool $tmp1104 = $tmp1103.value;
if ($tmp1104) goto block6; else goto block7;
block6:;
// line 744
frost$core$MutableString* $tmp1105 = *(&local1);
frost$core$Char8** $tmp1106 = &param0->data;
frost$core$Char8* $tmp1107 = *$tmp1106;
frost$core$Int64 $tmp1108 = *(&local0);
int64_t $tmp1109 = $tmp1108.value;
frost$core$Char8 $tmp1110 = $tmp1107[$tmp1109];
frost$core$MutableString$append$frost$core$Char8($tmp1105, $tmp1110);
// line 745
frost$core$Int64 $tmp1111 = *(&local0);
frost$core$Int64 $tmp1112 = (frost$core$Int64) {1};
int64_t $tmp1113 = $tmp1111.value;
int64_t $tmp1114 = $tmp1112.value;
int64_t $tmp1115 = $tmp1113 + $tmp1114;
frost$core$Int64 $tmp1116 = (frost$core$Int64) {$tmp1115};
*(&local0) = $tmp1116;
goto block7;
block7:;
// line 747
frost$core$Char8 $tmp1117 = *(&local3);
uint8_t $tmp1118 = $tmp1117.value;
int64_t $tmp1119 = ((int64_t) $tmp1118) & 255;
bool $tmp1120 = $tmp1119 >= 224;
frost$core$Bit $tmp1121 = frost$core$Bit$init$builtin_bit($tmp1120);
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block8; else goto block9;
block8:;
// line 748
frost$core$MutableString* $tmp1123 = *(&local1);
frost$core$Char8** $tmp1124 = &param0->data;
frost$core$Char8* $tmp1125 = *$tmp1124;
frost$core$Int64 $tmp1126 = *(&local0);
int64_t $tmp1127 = $tmp1126.value;
frost$core$Char8 $tmp1128 = $tmp1125[$tmp1127];
frost$core$MutableString$append$frost$core$Char8($tmp1123, $tmp1128);
// line 749
frost$core$Int64 $tmp1129 = *(&local0);
frost$core$Int64 $tmp1130 = (frost$core$Int64) {1};
int64_t $tmp1131 = $tmp1129.value;
int64_t $tmp1132 = $tmp1130.value;
int64_t $tmp1133 = $tmp1131 + $tmp1132;
frost$core$Int64 $tmp1134 = (frost$core$Int64) {$tmp1133};
*(&local0) = $tmp1134;
goto block9;
block9:;
// line 751
frost$core$Char8 $tmp1135 = *(&local3);
uint8_t $tmp1136 = $tmp1135.value;
int64_t $tmp1137 = ((int64_t) $tmp1136) & 255;
bool $tmp1138 = $tmp1137 >= 240;
frost$core$Bit $tmp1139 = frost$core$Bit$init$builtin_bit($tmp1138);
bool $tmp1140 = $tmp1139.value;
if ($tmp1140) goto block10; else goto block11;
block10:;
// line 752
frost$core$MutableString* $tmp1141 = *(&local1);
frost$core$Char8** $tmp1142 = &param0->data;
frost$core$Char8* $tmp1143 = *$tmp1142;
frost$core$Int64 $tmp1144 = *(&local0);
int64_t $tmp1145 = $tmp1144.value;
frost$core$Char8 $tmp1146 = $tmp1143[$tmp1145];
frost$core$MutableString$append$frost$core$Char8($tmp1141, $tmp1146);
// line 753
frost$core$Int64 $tmp1147 = *(&local0);
frost$core$Int64 $tmp1148 = (frost$core$Int64) {1};
int64_t $tmp1149 = $tmp1147.value;
int64_t $tmp1150 = $tmp1148.value;
int64_t $tmp1151 = $tmp1149 + $tmp1150;
frost$core$Int64 $tmp1152 = (frost$core$Int64) {$tmp1151};
*(&local0) = $tmp1152;
goto block11;
block11:;
goto block3;
block5:;
// line 756
frost$core$MutableString* $tmp1153 = *(&local1);
frost$core$String* $tmp1154 = frost$core$MutableString$finish$R$frost$core$String($tmp1153);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
frost$core$MutableString* $tmp1155 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp1154;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$Bit local1;
frost$core$String$Index local2;
// line 767
frost$core$Int64* $tmp1156 = &param0->_length;
frost$core$Int64 $tmp1157 = *$tmp1156;
frost$core$Int64 $tmp1158 = (frost$core$Int64) {0};
frost$core$Bit $tmp1159 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1157, $tmp1158);
bool $tmp1160 = $tmp1159.value;
if ($tmp1160) goto block1; else goto block2;
block1:;
// line 768
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1161));
return &$s1162;
block2:;
// line 770
// line 771
frost$core$String$Index$nullable $tmp1163 = param1.min;
frost$core$Bit $tmp1164 = frost$core$Bit$init$builtin_bit($tmp1163.nonnull);
bool $tmp1165 = $tmp1164.value;
if ($tmp1165) goto block3; else goto block5;
block3:;
// line 772
frost$core$String$Index$nullable $tmp1166 = param1.min;
*(&local0) = ((frost$core$String$Index) $tmp1166.value);
goto block4;
block5:;
// line 1
// line 775
frost$core$String$Index $tmp1167 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1167;
goto block4;
block4:;
// line 778
frost$core$Bit $tmp1168 = param1.inclusive;
*(&local1) = $tmp1168;
// line 779
// line 780
frost$core$String$Index$nullable $tmp1169 = param1.max;
frost$core$Bit $tmp1170 = frost$core$Bit$init$builtin_bit($tmp1169.nonnull);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block6; else goto block8;
block6:;
// line 781
frost$core$String$Index$nullable $tmp1172 = param1.max;
*(&local2) = ((frost$core$String$Index) $tmp1172.value);
goto block7;
block8:;
// line 1
// line 784
frost$core$String$Index $tmp1173 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1173;
// line 785
frost$core$Bit $tmp1174 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1174;
goto block7;
block7:;
// line 787
frost$core$String$Index $tmp1175 = *(&local0);
frost$core$String$Index $tmp1176 = *(&local2);
frost$core$Bit $tmp1177 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1178 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1175, $tmp1176, $tmp1177);
frost$core$String* $tmp1179 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1178);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
return $tmp1179;

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
frost$core$Char8 local9;
// line 803
frost$core$Int64* $tmp1180 = &param0->_length;
frost$core$Int64 $tmp1181 = *$tmp1180;
frost$core$Int64 $tmp1182 = (frost$core$Int64) {0};
frost$core$Bit $tmp1183 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1181, $tmp1182);
bool $tmp1184 = $tmp1183.value;
if ($tmp1184) goto block1; else goto block2;
block1:;
// line 804
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1185));
return &$s1186;
block2:;
// line 806
frost$core$Int64 $tmp1187 = param1.step;
*(&local0) = $tmp1187;
// line 808
// line 809
frost$core$String$Index$nullable $tmp1188 = param1.start;
frost$core$Bit $tmp1189 = frost$core$Bit$init$builtin_bit($tmp1188.nonnull);
bool $tmp1190 = $tmp1189.value;
if ($tmp1190) goto block3; else goto block5;
block3:;
// line 810
frost$core$String$Index$nullable $tmp1191 = param1.start;
frost$core$Int64 $tmp1192 = ((frost$core$String$Index) $tmp1191.value).value;
*(&local1) = $tmp1192;
goto block4;
block5:;
// line 812
frost$core$Int64 $tmp1193 = *(&local0);
frost$core$Int64 $tmp1194 = (frost$core$Int64) {0};
int64_t $tmp1195 = $tmp1193.value;
int64_t $tmp1196 = $tmp1194.value;
bool $tmp1197 = $tmp1195 > $tmp1196;
frost$core$Bit $tmp1198 = (frost$core$Bit) {$tmp1197};
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block6; else goto block8;
block6:;
// line 813
frost$core$String$Index $tmp1200 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1201 = $tmp1200.value;
*(&local1) = $tmp1201;
goto block7;
block8:;
// line 1
// line 816
frost$core$String$Index $tmp1202 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index $tmp1203 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1202);
frost$core$Int64 $tmp1204 = $tmp1203.value;
*(&local1) = $tmp1204;
goto block7;
block7:;
goto block4;
block4:;
// line 819
// line 820
frost$core$String$Index$nullable $tmp1205 = param1.end;
frost$core$Bit $tmp1206 = frost$core$Bit$init$builtin_bit($tmp1205.nonnull);
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block9; else goto block11;
block9:;
// line 821
frost$core$String$Index$nullable $tmp1208 = param1.end;
frost$core$Int64 $tmp1209 = ((frost$core$String$Index) $tmp1208.value).value;
*(&local2) = $tmp1209;
goto block10;
block11:;
// line 823
frost$core$Int64 $tmp1210 = *(&local0);
frost$core$Int64 $tmp1211 = (frost$core$Int64) {0};
int64_t $tmp1212 = $tmp1210.value;
int64_t $tmp1213 = $tmp1211.value;
bool $tmp1214 = $tmp1212 > $tmp1213;
frost$core$Bit $tmp1215 = (frost$core$Bit) {$tmp1214};
bool $tmp1216 = $tmp1215.value;
if ($tmp1216) goto block12; else goto block14;
block12:;
// line 824
frost$core$String$Index $tmp1217 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1218 = $tmp1217.value;
*(&local2) = $tmp1218;
goto block13;
block14:;
// line 1
// line 827
frost$core$String$Index $tmp1219 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1220 = $tmp1219.value;
*(&local2) = $tmp1220;
goto block13;
block13:;
goto block10;
block10:;
// line 830
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1221 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1221);
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$MutableString* $tmp1222 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local3) = $tmp1221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
// line 831
frost$core$Int64 $tmp1223 = param1.step;
frost$core$Int64 $tmp1224 = (frost$core$Int64) {0};
int64_t $tmp1225 = $tmp1223.value;
int64_t $tmp1226 = $tmp1224.value;
bool $tmp1227 = $tmp1225 > $tmp1226;
frost$core$Bit $tmp1228 = (frost$core$Bit) {$tmp1227};
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block15; else goto block17;
block15:;
// line 832
goto block18;
block18:;
frost$core$Int64 $tmp1230 = *(&local1);
frost$core$Int64 $tmp1231 = *(&local2);
int64_t $tmp1232 = $tmp1230.value;
int64_t $tmp1233 = $tmp1231.value;
bool $tmp1234 = $tmp1232 < $tmp1233;
frost$core$Bit $tmp1235 = (frost$core$Bit) {$tmp1234};
bool $tmp1236 = $tmp1235.value;
if ($tmp1236) goto block19; else goto block20;
block19:;
// line 833
frost$core$Char8** $tmp1237 = &param0->data;
frost$core$Char8* $tmp1238 = *$tmp1237;
frost$core$Int64 $tmp1239 = *(&local1);
int64_t $tmp1240 = $tmp1239.value;
frost$core$Char8 $tmp1241 = $tmp1238[$tmp1240];
*(&local4) = $tmp1241;
// line 834
frost$core$MutableString* $tmp1242 = *(&local3);
frost$core$Char8 $tmp1243 = *(&local4);
frost$core$MutableString$append$frost$core$Char8($tmp1242, $tmp1243);
// line 835
frost$core$Int64 $tmp1244 = *(&local1);
frost$core$Int64 $tmp1245 = (frost$core$Int64) {1};
int64_t $tmp1246 = $tmp1244.value;
int64_t $tmp1247 = $tmp1245.value;
int64_t $tmp1248 = $tmp1246 + $tmp1247;
frost$core$Int64 $tmp1249 = (frost$core$Int64) {$tmp1248};
*(&local1) = $tmp1249;
// line 836
frost$core$Char8 $tmp1250 = *(&local4);
uint8_t $tmp1251 = $tmp1250.value;
int64_t $tmp1252 = ((int64_t) $tmp1251) & 255;
bool $tmp1253 = $tmp1252 >= 192;
frost$core$Bit $tmp1254 = frost$core$Bit$init$builtin_bit($tmp1253);
bool $tmp1255 = $tmp1254.value;
if ($tmp1255) goto block21; else goto block22;
block21:;
// line 837
frost$core$MutableString* $tmp1256 = *(&local3);
frost$core$Char8** $tmp1257 = &param0->data;
frost$core$Char8* $tmp1258 = *$tmp1257;
frost$core$Int64 $tmp1259 = *(&local1);
int64_t $tmp1260 = $tmp1259.value;
frost$core$Char8 $tmp1261 = $tmp1258[$tmp1260];
frost$core$MutableString$append$frost$core$Char8($tmp1256, $tmp1261);
// line 838
frost$core$Int64 $tmp1262 = *(&local1);
frost$core$Int64 $tmp1263 = (frost$core$Int64) {1};
int64_t $tmp1264 = $tmp1262.value;
int64_t $tmp1265 = $tmp1263.value;
int64_t $tmp1266 = $tmp1264 + $tmp1265;
frost$core$Int64 $tmp1267 = (frost$core$Int64) {$tmp1266};
*(&local1) = $tmp1267;
goto block22;
block22:;
// line 840
frost$core$Char8 $tmp1268 = *(&local4);
uint8_t $tmp1269 = $tmp1268.value;
int64_t $tmp1270 = ((int64_t) $tmp1269) & 255;
bool $tmp1271 = $tmp1270 >= 224;
frost$core$Bit $tmp1272 = frost$core$Bit$init$builtin_bit($tmp1271);
bool $tmp1273 = $tmp1272.value;
if ($tmp1273) goto block23; else goto block24;
block23:;
// line 841
frost$core$MutableString* $tmp1274 = *(&local3);
frost$core$Char8** $tmp1275 = &param0->data;
frost$core$Char8* $tmp1276 = *$tmp1275;
frost$core$Int64 $tmp1277 = *(&local1);
int64_t $tmp1278 = $tmp1277.value;
frost$core$Char8 $tmp1279 = $tmp1276[$tmp1278];
frost$core$MutableString$append$frost$core$Char8($tmp1274, $tmp1279);
// line 842
frost$core$Int64 $tmp1280 = *(&local1);
frost$core$Int64 $tmp1281 = (frost$core$Int64) {1};
int64_t $tmp1282 = $tmp1280.value;
int64_t $tmp1283 = $tmp1281.value;
int64_t $tmp1284 = $tmp1282 + $tmp1283;
frost$core$Int64 $tmp1285 = (frost$core$Int64) {$tmp1284};
*(&local1) = $tmp1285;
goto block24;
block24:;
// line 844
frost$core$Char8 $tmp1286 = *(&local4);
uint8_t $tmp1287 = $tmp1286.value;
int64_t $tmp1288 = ((int64_t) $tmp1287) & 255;
bool $tmp1289 = $tmp1288 >= 240;
frost$core$Bit $tmp1290 = frost$core$Bit$init$builtin_bit($tmp1289);
bool $tmp1291 = $tmp1290.value;
if ($tmp1291) goto block25; else goto block26;
block25:;
// line 845
frost$core$MutableString* $tmp1292 = *(&local3);
frost$core$Char8** $tmp1293 = &param0->data;
frost$core$Char8* $tmp1294 = *$tmp1293;
frost$core$Int64 $tmp1295 = *(&local1);
int64_t $tmp1296 = $tmp1295.value;
frost$core$Char8 $tmp1297 = $tmp1294[$tmp1296];
frost$core$MutableString$append$frost$core$Char8($tmp1292, $tmp1297);
// line 846
frost$core$Int64 $tmp1298 = *(&local1);
frost$core$Int64 $tmp1299 = (frost$core$Int64) {1};
int64_t $tmp1300 = $tmp1298.value;
int64_t $tmp1301 = $tmp1299.value;
int64_t $tmp1302 = $tmp1300 + $tmp1301;
frost$core$Int64 $tmp1303 = (frost$core$Int64) {$tmp1302};
*(&local1) = $tmp1303;
goto block26;
block26:;
// line 848
frost$core$Int64 $tmp1304 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1305 = *(&local0);
frost$core$Bit $tmp1306 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1307 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1304, $tmp1305, $tmp1306);
frost$core$Int64 $tmp1308 = $tmp1307.min;
*(&local5) = $tmp1308;
frost$core$Int64 $tmp1309 = $tmp1307.max;
frost$core$Bit $tmp1310 = $tmp1307.inclusive;
bool $tmp1311 = $tmp1310.value;
frost$core$Int64 $tmp1312 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1313 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1312);
if ($tmp1311) goto block30; else goto block31;
block30:;
int64_t $tmp1314 = $tmp1308.value;
int64_t $tmp1315 = $tmp1309.value;
bool $tmp1316 = $tmp1314 <= $tmp1315;
frost$core$Bit $tmp1317 = (frost$core$Bit) {$tmp1316};
bool $tmp1318 = $tmp1317.value;
if ($tmp1318) goto block27; else goto block28;
block31:;
int64_t $tmp1319 = $tmp1308.value;
int64_t $tmp1320 = $tmp1309.value;
bool $tmp1321 = $tmp1319 < $tmp1320;
frost$core$Bit $tmp1322 = (frost$core$Bit) {$tmp1321};
bool $tmp1323 = $tmp1322.value;
if ($tmp1323) goto block27; else goto block28;
block27:;
// line 849
frost$core$Int64 $tmp1324 = *(&local1);
frost$core$Int64 $tmp1325 = *(&local2);
int64_t $tmp1326 = $tmp1324.value;
int64_t $tmp1327 = $tmp1325.value;
bool $tmp1328 = $tmp1326 >= $tmp1327;
frost$core$Bit $tmp1329 = (frost$core$Bit) {$tmp1328};
bool $tmp1330 = $tmp1329.value;
if ($tmp1330) goto block32; else goto block33;
block32:;
// line 850
frost$core$MutableString* $tmp1331 = *(&local3);
$fn1333 $tmp1332 = ($fn1333) ((frost$core$Object*) $tmp1331)->$class->vtable[0];
frost$core$String* $tmp1334 = $tmp1332(((frost$core$Object*) $tmp1331));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$core$MutableString* $tmp1335 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1334;
block33:;
// line 852
frost$core$Int64 $tmp1336 = *(&local1);
frost$core$String$Index $tmp1337 = frost$core$String$Index$init$frost$core$Int64($tmp1336);
frost$core$String$Index $tmp1338 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1337);
frost$core$Int64 $tmp1339 = $tmp1338.value;
*(&local1) = $tmp1339;
goto block29;
block29:;
frost$core$Int64 $tmp1340 = *(&local5);
int64_t $tmp1341 = $tmp1309.value;
int64_t $tmp1342 = $tmp1340.value;
int64_t $tmp1343 = $tmp1341 - $tmp1342;
frost$core$Int64 $tmp1344 = (frost$core$Int64) {$tmp1343};
frost$core$UInt64 $tmp1345 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1344);
if ($tmp1311) goto block35; else goto block36;
block35:;
uint64_t $tmp1346 = $tmp1345.value;
uint64_t $tmp1347 = $tmp1313.value;
bool $tmp1348 = $tmp1346 >= $tmp1347;
frost$core$Bit $tmp1349 = (frost$core$Bit) {$tmp1348};
bool $tmp1350 = $tmp1349.value;
if ($tmp1350) goto block34; else goto block28;
block36:;
uint64_t $tmp1351 = $tmp1345.value;
uint64_t $tmp1352 = $tmp1313.value;
bool $tmp1353 = $tmp1351 > $tmp1352;
frost$core$Bit $tmp1354 = (frost$core$Bit) {$tmp1353};
bool $tmp1355 = $tmp1354.value;
if ($tmp1355) goto block34; else goto block28;
block34:;
int64_t $tmp1356 = $tmp1340.value;
int64_t $tmp1357 = $tmp1312.value;
int64_t $tmp1358 = $tmp1356 + $tmp1357;
frost$core$Int64 $tmp1359 = (frost$core$Int64) {$tmp1358};
*(&local5) = $tmp1359;
goto block27;
block28:;
goto block18;
block20:;
goto block16;
block17:;
// line 1
// line 857
frost$core$Int64 $tmp1360 = param1.step;
frost$core$Int64 $tmp1361 = (frost$core$Int64) {0};
int64_t $tmp1362 = $tmp1360.value;
int64_t $tmp1363 = $tmp1361.value;
bool $tmp1364 = $tmp1362 < $tmp1363;
frost$core$Bit $tmp1365 = (frost$core$Bit) {$tmp1364};
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp1367 = (frost$core$Int64) {857};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1368, $tmp1367);
abort(); // unreachable
block37:;
// line 858
goto block39;
block39:;
frost$core$Int64 $tmp1369 = *(&local1);
frost$core$Int64 $tmp1370 = *(&local2);
int64_t $tmp1371 = $tmp1369.value;
int64_t $tmp1372 = $tmp1370.value;
bool $tmp1373 = $tmp1371 > $tmp1372;
frost$core$Bit $tmp1374 = (frost$core$Bit) {$tmp1373};
bool $tmp1375 = $tmp1374.value;
if ($tmp1375) goto block40; else goto block41;
block40:;
// line 859
frost$core$Char8** $tmp1376 = &param0->data;
frost$core$Char8* $tmp1377 = *$tmp1376;
frost$core$Int64 $tmp1378 = *(&local1);
int64_t $tmp1379 = $tmp1378.value;
frost$core$Char8 $tmp1380 = $tmp1377[$tmp1379];
*(&local6) = $tmp1380;
// line 860
frost$core$MutableString* $tmp1381 = *(&local3);
frost$core$Char8 $tmp1382 = *(&local6);
frost$core$MutableString$append$frost$core$Char8($tmp1381, $tmp1382);
// line 861
frost$core$Int64 $tmp1383 = *(&local1);
*(&local7) = $tmp1383;
// line 862
frost$core$Int64 $tmp1384 = *(&local1);
frost$core$Int64 $tmp1385 = (frost$core$Int64) {1};
int64_t $tmp1386 = $tmp1384.value;
int64_t $tmp1387 = $tmp1385.value;
int64_t $tmp1388 = $tmp1386 + $tmp1387;
frost$core$Int64 $tmp1389 = (frost$core$Int64) {$tmp1388};
*(&local1) = $tmp1389;
// line 863
frost$core$Char8 $tmp1390 = *(&local6);
uint8_t $tmp1391 = $tmp1390.value;
int64_t $tmp1392 = ((int64_t) $tmp1391) & 255;
bool $tmp1393 = $tmp1392 >= 192;
frost$core$Bit $tmp1394 = frost$core$Bit$init$builtin_bit($tmp1393);
bool $tmp1395 = $tmp1394.value;
if ($tmp1395) goto block42; else goto block43;
block42:;
// line 864
frost$core$MutableString* $tmp1396 = *(&local3);
frost$core$Char8** $tmp1397 = &param0->data;
frost$core$Char8* $tmp1398 = *$tmp1397;
frost$core$Int64 $tmp1399 = *(&local1);
int64_t $tmp1400 = $tmp1399.value;
frost$core$Char8 $tmp1401 = $tmp1398[$tmp1400];
frost$core$MutableString$append$frost$core$Char8($tmp1396, $tmp1401);
// line 865
frost$core$Int64 $tmp1402 = *(&local1);
frost$core$Int64 $tmp1403 = (frost$core$Int64) {1};
int64_t $tmp1404 = $tmp1402.value;
int64_t $tmp1405 = $tmp1403.value;
int64_t $tmp1406 = $tmp1404 + $tmp1405;
frost$core$Int64 $tmp1407 = (frost$core$Int64) {$tmp1406};
*(&local1) = $tmp1407;
goto block43;
block43:;
// line 867
frost$core$Char8 $tmp1408 = *(&local6);
uint8_t $tmp1409 = $tmp1408.value;
int64_t $tmp1410 = ((int64_t) $tmp1409) & 255;
bool $tmp1411 = $tmp1410 >= 224;
frost$core$Bit $tmp1412 = frost$core$Bit$init$builtin_bit($tmp1411);
bool $tmp1413 = $tmp1412.value;
if ($tmp1413) goto block44; else goto block45;
block44:;
// line 868
frost$core$MutableString* $tmp1414 = *(&local3);
frost$core$Char8** $tmp1415 = &param0->data;
frost$core$Char8* $tmp1416 = *$tmp1415;
frost$core$Int64 $tmp1417 = *(&local1);
int64_t $tmp1418 = $tmp1417.value;
frost$core$Char8 $tmp1419 = $tmp1416[$tmp1418];
frost$core$MutableString$append$frost$core$Char8($tmp1414, $tmp1419);
// line 869
frost$core$Int64 $tmp1420 = *(&local1);
frost$core$Int64 $tmp1421 = (frost$core$Int64) {1};
int64_t $tmp1422 = $tmp1420.value;
int64_t $tmp1423 = $tmp1421.value;
int64_t $tmp1424 = $tmp1422 + $tmp1423;
frost$core$Int64 $tmp1425 = (frost$core$Int64) {$tmp1424};
*(&local1) = $tmp1425;
goto block45;
block45:;
// line 871
frost$core$Char8 $tmp1426 = *(&local6);
uint8_t $tmp1427 = $tmp1426.value;
int64_t $tmp1428 = ((int64_t) $tmp1427) & 255;
bool $tmp1429 = $tmp1428 >= 240;
frost$core$Bit $tmp1430 = frost$core$Bit$init$builtin_bit($tmp1429);
bool $tmp1431 = $tmp1430.value;
if ($tmp1431) goto block46; else goto block47;
block46:;
// line 872
frost$core$MutableString* $tmp1432 = *(&local3);
frost$core$Char8** $tmp1433 = &param0->data;
frost$core$Char8* $tmp1434 = *$tmp1433;
frost$core$Int64 $tmp1435 = *(&local1);
int64_t $tmp1436 = $tmp1435.value;
frost$core$Char8 $tmp1437 = $tmp1434[$tmp1436];
frost$core$MutableString$append$frost$core$Char8($tmp1432, $tmp1437);
goto block47;
block47:;
// line 874
frost$core$Int64 $tmp1438 = *(&local7);
frost$core$Int64 $tmp1439 = (frost$core$Int64) {1};
int64_t $tmp1440 = $tmp1438.value;
int64_t $tmp1441 = $tmp1439.value;
int64_t $tmp1442 = $tmp1440 - $tmp1441;
frost$core$Int64 $tmp1443 = (frost$core$Int64) {$tmp1442};
*(&local1) = $tmp1443;
// line 875
goto block48;
block48:;
frost$core$Char8** $tmp1444 = &param0->data;
frost$core$Char8* $tmp1445 = *$tmp1444;
frost$core$Int64 $tmp1446 = *(&local1);
int64_t $tmp1447 = $tmp1446.value;
frost$core$Char8 $tmp1448 = $tmp1445[$tmp1447];
uint8_t $tmp1449 = $tmp1448.value;
int64_t $tmp1450 = ((int64_t) $tmp1449) & 255;
bool $tmp1451 = $tmp1450 >= 128;
frost$core$Bit $tmp1452 = frost$core$Bit$init$builtin_bit($tmp1451);
bool $tmp1453 = $tmp1452.value;
if ($tmp1453) goto block51; else goto block50;
block51:;
frost$core$Char8** $tmp1454 = &param0->data;
frost$core$Char8* $tmp1455 = *$tmp1454;
frost$core$Int64 $tmp1456 = *(&local1);
int64_t $tmp1457 = $tmp1456.value;
frost$core$Char8 $tmp1458 = $tmp1455[$tmp1457];
uint8_t $tmp1459 = $tmp1458.value;
int64_t $tmp1460 = ((int64_t) $tmp1459) & 255;
bool $tmp1461 = $tmp1460 < 192;
frost$core$Bit $tmp1462 = frost$core$Bit$init$builtin_bit($tmp1461);
bool $tmp1463 = $tmp1462.value;
if ($tmp1463) goto block49; else goto block50;
block49:;
// line 876
frost$core$Int64 $tmp1464 = *(&local1);
frost$core$Int64 $tmp1465 = (frost$core$Int64) {1};
int64_t $tmp1466 = $tmp1464.value;
int64_t $tmp1467 = $tmp1465.value;
int64_t $tmp1468 = $tmp1466 - $tmp1467;
frost$core$Int64 $tmp1469 = (frost$core$Int64) {$tmp1468};
*(&local1) = $tmp1469;
goto block48;
block50:;
// line 878
frost$core$Int64 $tmp1470 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64 $tmp1471 = *(&local0);
frost$core$Int64 $tmp1472 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1473 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1474 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1470, $tmp1471, $tmp1472, $tmp1473);
frost$core$Int64 $tmp1475 = $tmp1474.start;
*(&local8) = $tmp1475;
frost$core$Int64 $tmp1476 = $tmp1474.end;
frost$core$Int64 $tmp1477 = $tmp1474.step;
frost$core$UInt64 $tmp1478 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1477);
frost$core$Int64 $tmp1479 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1477);
frost$core$UInt64 $tmp1480 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1479);
frost$core$Bit $tmp1481 = $tmp1474.inclusive;
bool $tmp1482 = $tmp1481.value;
frost$core$Int64 $tmp1483 = (frost$core$Int64) {0};
int64_t $tmp1484 = $tmp1477.value;
int64_t $tmp1485 = $tmp1483.value;
bool $tmp1486 = $tmp1484 >= $tmp1485;
frost$core$Bit $tmp1487 = (frost$core$Bit) {$tmp1486};
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block55; else goto block56;
block55:;
if ($tmp1482) goto block57; else goto block58;
block57:;
int64_t $tmp1489 = $tmp1475.value;
int64_t $tmp1490 = $tmp1476.value;
bool $tmp1491 = $tmp1489 <= $tmp1490;
frost$core$Bit $tmp1492 = (frost$core$Bit) {$tmp1491};
bool $tmp1493 = $tmp1492.value;
if ($tmp1493) goto block52; else goto block53;
block58:;
int64_t $tmp1494 = $tmp1475.value;
int64_t $tmp1495 = $tmp1476.value;
bool $tmp1496 = $tmp1494 < $tmp1495;
frost$core$Bit $tmp1497 = (frost$core$Bit) {$tmp1496};
bool $tmp1498 = $tmp1497.value;
if ($tmp1498) goto block52; else goto block53;
block56:;
if ($tmp1482) goto block59; else goto block60;
block59:;
int64_t $tmp1499 = $tmp1475.value;
int64_t $tmp1500 = $tmp1476.value;
bool $tmp1501 = $tmp1499 >= $tmp1500;
frost$core$Bit $tmp1502 = (frost$core$Bit) {$tmp1501};
bool $tmp1503 = $tmp1502.value;
if ($tmp1503) goto block52; else goto block53;
block60:;
int64_t $tmp1504 = $tmp1475.value;
int64_t $tmp1505 = $tmp1476.value;
bool $tmp1506 = $tmp1504 > $tmp1505;
frost$core$Bit $tmp1507 = (frost$core$Bit) {$tmp1506};
bool $tmp1508 = $tmp1507.value;
if ($tmp1508) goto block52; else goto block53;
block52:;
// line 879
frost$core$Int64 $tmp1509 = *(&local1);
frost$core$Int64 $tmp1510 = *(&local2);
int64_t $tmp1511 = $tmp1509.value;
int64_t $tmp1512 = $tmp1510.value;
bool $tmp1513 = $tmp1511 <= $tmp1512;
frost$core$Bit $tmp1514 = (frost$core$Bit) {$tmp1513};
bool $tmp1515 = $tmp1514.value;
if ($tmp1515) goto block61; else goto block62;
block61:;
// line 880
frost$core$MutableString* $tmp1516 = *(&local3);
$fn1518 $tmp1517 = ($fn1518) ((frost$core$Object*) $tmp1516)->$class->vtable[0];
frost$core$String* $tmp1519 = $tmp1517(((frost$core$Object*) $tmp1516));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
frost$core$MutableString* $tmp1520 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1519;
block62:;
// line 882
frost$core$Int64 $tmp1521 = *(&local1);
frost$core$String$Index $tmp1522 = frost$core$String$Index$init$frost$core$Int64($tmp1521);
frost$core$String$Index $tmp1523 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1522);
frost$core$Int64 $tmp1524 = $tmp1523.value;
*(&local1) = $tmp1524;
goto block54;
block54:;
frost$core$Int64 $tmp1525 = *(&local8);
if ($tmp1488) goto block64; else goto block65;
block64:;
int64_t $tmp1526 = $tmp1476.value;
int64_t $tmp1527 = $tmp1525.value;
int64_t $tmp1528 = $tmp1526 - $tmp1527;
frost$core$Int64 $tmp1529 = (frost$core$Int64) {$tmp1528};
frost$core$UInt64 $tmp1530 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1529);
if ($tmp1482) goto block66; else goto block67;
block66:;
uint64_t $tmp1531 = $tmp1530.value;
uint64_t $tmp1532 = $tmp1478.value;
bool $tmp1533 = $tmp1531 >= $tmp1532;
frost$core$Bit $tmp1534 = (frost$core$Bit) {$tmp1533};
bool $tmp1535 = $tmp1534.value;
if ($tmp1535) goto block63; else goto block53;
block67:;
uint64_t $tmp1536 = $tmp1530.value;
uint64_t $tmp1537 = $tmp1478.value;
bool $tmp1538 = $tmp1536 > $tmp1537;
frost$core$Bit $tmp1539 = (frost$core$Bit) {$tmp1538};
bool $tmp1540 = $tmp1539.value;
if ($tmp1540) goto block63; else goto block53;
block65:;
int64_t $tmp1541 = $tmp1525.value;
int64_t $tmp1542 = $tmp1476.value;
int64_t $tmp1543 = $tmp1541 - $tmp1542;
frost$core$Int64 $tmp1544 = (frost$core$Int64) {$tmp1543};
frost$core$UInt64 $tmp1545 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1544);
if ($tmp1482) goto block68; else goto block69;
block68:;
uint64_t $tmp1546 = $tmp1545.value;
uint64_t $tmp1547 = $tmp1480.value;
bool $tmp1548 = $tmp1546 >= $tmp1547;
frost$core$Bit $tmp1549 = (frost$core$Bit) {$tmp1548};
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block63; else goto block53;
block69:;
uint64_t $tmp1551 = $tmp1545.value;
uint64_t $tmp1552 = $tmp1480.value;
bool $tmp1553 = $tmp1551 > $tmp1552;
frost$core$Bit $tmp1554 = (frost$core$Bit) {$tmp1553};
bool $tmp1555 = $tmp1554.value;
if ($tmp1555) goto block63; else goto block53;
block63:;
int64_t $tmp1556 = $tmp1525.value;
int64_t $tmp1557 = $tmp1477.value;
int64_t $tmp1558 = $tmp1556 + $tmp1557;
frost$core$Int64 $tmp1559 = (frost$core$Int64) {$tmp1558};
*(&local8) = $tmp1559;
goto block52;
block53:;
goto block39;
block41:;
goto block16;
block16:;
// line 886
frost$core$Bit $tmp1560 = param1.inclusive;
bool $tmp1561 = $tmp1560.value;
if ($tmp1561) goto block73; else goto block74;
block74:;
frost$core$String$Index$nullable $tmp1562 = param1.end;
frost$core$Bit $tmp1563 = frost$core$Bit$init$builtin_bit(!$tmp1562.nonnull);
bool $tmp1564 = $tmp1563.value;
if ($tmp1564) goto block73; else goto block71;
block73:;
frost$core$Int64 $tmp1565 = *(&local1);
frost$core$Int64 $tmp1566 = *(&local2);
frost$core$Bit $tmp1567 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1565, $tmp1566);
bool $tmp1568 = $tmp1567.value;
if ($tmp1568) goto block72; else goto block71;
block72:;
frost$core$Int64 $tmp1569 = *(&local2);
frost$core$Int64* $tmp1570 = &param0->_length;
frost$core$Int64 $tmp1571 = *$tmp1570;
int64_t $tmp1572 = $tmp1569.value;
int64_t $tmp1573 = $tmp1571.value;
bool $tmp1574 = $tmp1572 < $tmp1573;
frost$core$Bit $tmp1575 = (frost$core$Bit) {$tmp1574};
bool $tmp1576 = $tmp1575.value;
if ($tmp1576) goto block70; else goto block71;
block70:;
// line 887
frost$core$Char8** $tmp1577 = &param0->data;
frost$core$Char8* $tmp1578 = *$tmp1577;
frost$core$Int64 $tmp1579 = *(&local1);
int64_t $tmp1580 = $tmp1579.value;
frost$core$Char8 $tmp1581 = $tmp1578[$tmp1580];
*(&local9) = $tmp1581;
// line 888
frost$core$MutableString* $tmp1582 = *(&local3);
frost$core$Char8 $tmp1583 = *(&local9);
frost$core$MutableString$append$frost$core$Char8($tmp1582, $tmp1583);
// line 889
frost$core$Int64 $tmp1584 = *(&local1);
frost$core$Int64 $tmp1585 = (frost$core$Int64) {1};
int64_t $tmp1586 = $tmp1584.value;
int64_t $tmp1587 = $tmp1585.value;
int64_t $tmp1588 = $tmp1586 + $tmp1587;
frost$core$Int64 $tmp1589 = (frost$core$Int64) {$tmp1588};
*(&local1) = $tmp1589;
// line 890
frost$core$Char8 $tmp1590 = *(&local9);
uint8_t $tmp1591 = $tmp1590.value;
int64_t $tmp1592 = ((int64_t) $tmp1591) & 255;
bool $tmp1593 = $tmp1592 >= 192;
frost$core$Bit $tmp1594 = frost$core$Bit$init$builtin_bit($tmp1593);
bool $tmp1595 = $tmp1594.value;
if ($tmp1595) goto block75; else goto block76;
block75:;
// line 891
frost$core$MutableString* $tmp1596 = *(&local3);
frost$core$Char8** $tmp1597 = &param0->data;
frost$core$Char8* $tmp1598 = *$tmp1597;
frost$core$Int64 $tmp1599 = *(&local1);
int64_t $tmp1600 = $tmp1599.value;
frost$core$Char8 $tmp1601 = $tmp1598[$tmp1600];
frost$core$MutableString$append$frost$core$Char8($tmp1596, $tmp1601);
// line 892
frost$core$Int64 $tmp1602 = *(&local1);
frost$core$Int64 $tmp1603 = (frost$core$Int64) {1};
int64_t $tmp1604 = $tmp1602.value;
int64_t $tmp1605 = $tmp1603.value;
int64_t $tmp1606 = $tmp1604 + $tmp1605;
frost$core$Int64 $tmp1607 = (frost$core$Int64) {$tmp1606};
*(&local1) = $tmp1607;
goto block76;
block76:;
// line 894
frost$core$Char8 $tmp1608 = *(&local9);
uint8_t $tmp1609 = $tmp1608.value;
int64_t $tmp1610 = ((int64_t) $tmp1609) & 255;
bool $tmp1611 = $tmp1610 >= 224;
frost$core$Bit $tmp1612 = frost$core$Bit$init$builtin_bit($tmp1611);
bool $tmp1613 = $tmp1612.value;
if ($tmp1613) goto block77; else goto block78;
block77:;
// line 895
frost$core$MutableString* $tmp1614 = *(&local3);
frost$core$Char8** $tmp1615 = &param0->data;
frost$core$Char8* $tmp1616 = *$tmp1615;
frost$core$Int64 $tmp1617 = *(&local1);
int64_t $tmp1618 = $tmp1617.value;
frost$core$Char8 $tmp1619 = $tmp1616[$tmp1618];
frost$core$MutableString$append$frost$core$Char8($tmp1614, $tmp1619);
// line 896
frost$core$Int64 $tmp1620 = *(&local1);
frost$core$Int64 $tmp1621 = (frost$core$Int64) {1};
int64_t $tmp1622 = $tmp1620.value;
int64_t $tmp1623 = $tmp1621.value;
int64_t $tmp1624 = $tmp1622 + $tmp1623;
frost$core$Int64 $tmp1625 = (frost$core$Int64) {$tmp1624};
*(&local1) = $tmp1625;
goto block78;
block78:;
// line 898
frost$core$Char8 $tmp1626 = *(&local9);
uint8_t $tmp1627 = $tmp1626.value;
int64_t $tmp1628 = ((int64_t) $tmp1627) & 255;
bool $tmp1629 = $tmp1628 >= 240;
frost$core$Bit $tmp1630 = frost$core$Bit$init$builtin_bit($tmp1629);
bool $tmp1631 = $tmp1630.value;
if ($tmp1631) goto block79; else goto block80;
block79:;
// line 899
frost$core$MutableString* $tmp1632 = *(&local3);
frost$core$Char8** $tmp1633 = &param0->data;
frost$core$Char8* $tmp1634 = *$tmp1633;
frost$core$Int64 $tmp1635 = *(&local1);
int64_t $tmp1636 = $tmp1635.value;
frost$core$Char8 $tmp1637 = $tmp1634[$tmp1636];
frost$core$MutableString$append$frost$core$Char8($tmp1632, $tmp1637);
goto block80;
block80:;
goto block71;
block71:;
// line 902
frost$core$MutableString* $tmp1638 = *(&local3);
frost$core$String* $tmp1639 = frost$core$MutableString$finish$R$frost$core$String($tmp1638);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
frost$core$MutableString* $tmp1640 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1639;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 911
// line 912
frost$core$Int64$nullable $tmp1641 = param1.min;
frost$core$Bit $tmp1642 = frost$core$Bit$init$builtin_bit($tmp1641.nonnull);
bool $tmp1643 = $tmp1642.value;
if ($tmp1643) goto block1; else goto block3;
block1:;
// line 913
frost$core$String$Index $tmp1644 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1645 = param1.min;
frost$core$String$Index $tmp1646 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1644, ((frost$core$Int64) $tmp1645.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1646, true });
goto block2;
block3:;
// line 1
// line 916
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 918
// line 919
frost$core$Int64$nullable $tmp1647 = param1.max;
frost$core$Bit $tmp1648 = frost$core$Bit$init$builtin_bit($tmp1647.nonnull);
bool $tmp1649 = $tmp1648.value;
if ($tmp1649) goto block4; else goto block6;
block4:;
// line 920
frost$core$String$Index $tmp1650 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1651 = param1.max;
frost$core$String$Index $tmp1652 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1650, ((frost$core$Int64) $tmp1651.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1652, true });
goto block5;
block6:;
// line 1
// line 923
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 925
frost$core$String$Index$nullable $tmp1653 = *(&local0);
frost$core$String$Index$nullable $tmp1654 = *(&local1);
frost$core$Bit $tmp1655 = param1.inclusive;
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1656 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit($tmp1653, $tmp1654, $tmp1655);
frost$core$String* $tmp1657 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp1656);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
return $tmp1657;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 934
// line 935
frost$core$Int64$nullable $tmp1658 = param1.start;
frost$core$Bit $tmp1659 = frost$core$Bit$init$builtin_bit($tmp1658.nonnull);
bool $tmp1660 = $tmp1659.value;
if ($tmp1660) goto block1; else goto block3;
block1:;
// line 936
frost$core$String$Index $tmp1661 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1662 = param1.start;
frost$core$String$Index $tmp1663 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1661, ((frost$core$Int64) $tmp1662.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1663, true });
goto block2;
block3:;
// line 1
// line 939
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 941
// line 942
frost$core$Int64$nullable $tmp1664 = param1.end;
frost$core$Bit $tmp1665 = frost$core$Bit$init$builtin_bit($tmp1664.nonnull);
bool $tmp1666 = $tmp1665.value;
if ($tmp1666) goto block4; else goto block6;
block4:;
// line 943
frost$core$String$Index $tmp1667 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1668 = param1.end;
frost$core$String$Index $tmp1669 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1667, ((frost$core$Int64) $tmp1668.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1669, true });
goto block5;
block6:;
// line 1
// line 946
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 948
frost$core$String$Index$nullable $tmp1670 = *(&local0);
frost$core$String$Index$nullable $tmp1671 = *(&local1);
frost$core$Int64 $tmp1672 = param1.step;
frost$core$Bit $tmp1673 = param1.inclusive;
frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT $tmp1674 = frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Int64$frost$core$Bit($tmp1670, $tmp1671, $tmp1672, $tmp1673);
frost$core$String* $tmp1675 = frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String(param0, $tmp1674);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
return $tmp1675;

}
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(frost$core$String* param0, frost$core$Char8 param1) {

frost$core$Int64 local0;
// line 955
frost$core$Int64 $tmp1676 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1677 = &param0->_length;
frost$core$Int64 $tmp1678 = *$tmp1677;
frost$core$Bit $tmp1679 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1680 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1676, $tmp1678, $tmp1679);
frost$core$Int64 $tmp1681 = $tmp1680.min;
*(&local0) = $tmp1681;
frost$core$Int64 $tmp1682 = $tmp1680.max;
frost$core$Bit $tmp1683 = $tmp1680.inclusive;
bool $tmp1684 = $tmp1683.value;
frost$core$Int64 $tmp1685 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1686 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1685);
if ($tmp1684) goto block4; else goto block5;
block4:;
int64_t $tmp1687 = $tmp1681.value;
int64_t $tmp1688 = $tmp1682.value;
bool $tmp1689 = $tmp1687 <= $tmp1688;
frost$core$Bit $tmp1690 = (frost$core$Bit) {$tmp1689};
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block1; else goto block2;
block5:;
int64_t $tmp1692 = $tmp1681.value;
int64_t $tmp1693 = $tmp1682.value;
bool $tmp1694 = $tmp1692 < $tmp1693;
frost$core$Bit $tmp1695 = (frost$core$Bit) {$tmp1694};
bool $tmp1696 = $tmp1695.value;
if ($tmp1696) goto block1; else goto block2;
block1:;
// line 956
frost$core$Char8** $tmp1697 = &param0->data;
frost$core$Char8* $tmp1698 = *$tmp1697;
frost$core$Int64 $tmp1699 = *(&local0);
int64_t $tmp1700 = $tmp1699.value;
frost$core$Char8 $tmp1701 = $tmp1698[$tmp1700];
frost$core$Bit $tmp1702 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp1701, param1);
bool $tmp1703 = $tmp1702.value;
if ($tmp1703) goto block6; else goto block7;
block6:;
// line 957
frost$core$Bit $tmp1704 = frost$core$Bit$init$builtin_bit(true);
return $tmp1704;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp1705 = *(&local0);
int64_t $tmp1706 = $tmp1682.value;
int64_t $tmp1707 = $tmp1705.value;
int64_t $tmp1708 = $tmp1706 - $tmp1707;
frost$core$Int64 $tmp1709 = (frost$core$Int64) {$tmp1708};
frost$core$UInt64 $tmp1710 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1709);
if ($tmp1684) goto block9; else goto block10;
block9:;
uint64_t $tmp1711 = $tmp1710.value;
uint64_t $tmp1712 = $tmp1686.value;
bool $tmp1713 = $tmp1711 >= $tmp1712;
frost$core$Bit $tmp1714 = (frost$core$Bit) {$tmp1713};
bool $tmp1715 = $tmp1714.value;
if ($tmp1715) goto block8; else goto block2;
block10:;
uint64_t $tmp1716 = $tmp1710.value;
uint64_t $tmp1717 = $tmp1686.value;
bool $tmp1718 = $tmp1716 > $tmp1717;
frost$core$Bit $tmp1719 = (frost$core$Bit) {$tmp1718};
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block8; else goto block2;
block8:;
int64_t $tmp1721 = $tmp1705.value;
int64_t $tmp1722 = $tmp1685.value;
int64_t $tmp1723 = $tmp1721 + $tmp1722;
frost$core$Int64 $tmp1724 = (frost$core$Int64) {$tmp1723};
*(&local0) = $tmp1724;
goto block1;
block2:;
// line 960
frost$core$Bit $tmp1725 = frost$core$Bit$init$builtin_bit(false);
return $tmp1725;

}
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

// line 967
frost$core$String$Index$nullable $tmp1726 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(param0, param1);
frost$core$Bit $tmp1727 = frost$core$Bit$init$builtin_bit($tmp1726.nonnull);
return $tmp1727;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 978
frost$core$String$Index $tmp1728 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1729 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1728);
return $tmp1729;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 990
frost$core$Int64* $tmp1730 = &param0->_length;
frost$core$Int64 $tmp1731 = *$tmp1730;
frost$core$Int64* $tmp1732 = &param1->_length;
frost$core$Int64 $tmp1733 = *$tmp1732;
int64_t $tmp1734 = $tmp1731.value;
int64_t $tmp1735 = $tmp1733.value;
bool $tmp1736 = $tmp1734 < $tmp1735;
frost$core$Bit $tmp1737 = (frost$core$Bit) {$tmp1736};
bool $tmp1738 = $tmp1737.value;
if ($tmp1738) goto block1; else goto block2;
block1:;
// line 991
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 993
frost$core$Int64 $tmp1739 = param2.value;
frost$core$Int64* $tmp1740 = &param0->_length;
frost$core$Int64 $tmp1741 = *$tmp1740;
frost$core$Int64* $tmp1742 = &param1->_length;
frost$core$Int64 $tmp1743 = *$tmp1742;
int64_t $tmp1744 = $tmp1741.value;
int64_t $tmp1745 = $tmp1743.value;
int64_t $tmp1746 = $tmp1744 - $tmp1745;
frost$core$Int64 $tmp1747 = (frost$core$Int64) {$tmp1746};
frost$core$Bit $tmp1748 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp1749 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1739, $tmp1747, $tmp1748);
frost$core$Int64 $tmp1750 = $tmp1749.min;
*(&local0) = $tmp1750;
frost$core$Int64 $tmp1751 = $tmp1749.max;
frost$core$Bit $tmp1752 = $tmp1749.inclusive;
bool $tmp1753 = $tmp1752.value;
frost$core$Int64 $tmp1754 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1755 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1754);
if ($tmp1753) goto block6; else goto block7;
block6:;
int64_t $tmp1756 = $tmp1750.value;
int64_t $tmp1757 = $tmp1751.value;
bool $tmp1758 = $tmp1756 <= $tmp1757;
frost$core$Bit $tmp1759 = (frost$core$Bit) {$tmp1758};
bool $tmp1760 = $tmp1759.value;
if ($tmp1760) goto block3; else goto block4;
block7:;
int64_t $tmp1761 = $tmp1750.value;
int64_t $tmp1762 = $tmp1751.value;
bool $tmp1763 = $tmp1761 < $tmp1762;
frost$core$Bit $tmp1764 = (frost$core$Bit) {$tmp1763};
bool $tmp1765 = $tmp1764.value;
if ($tmp1765) goto block3; else goto block4;
block3:;
// line 994
frost$core$Int64 $tmp1766 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1767 = &param1->_length;
frost$core$Int64 $tmp1768 = *$tmp1767;
frost$core$Bit $tmp1769 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1770 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1766, $tmp1768, $tmp1769);
frost$core$Int64 $tmp1771 = $tmp1770.min;
*(&local1) = $tmp1771;
frost$core$Int64 $tmp1772 = $tmp1770.max;
frost$core$Bit $tmp1773 = $tmp1770.inclusive;
bool $tmp1774 = $tmp1773.value;
frost$core$Int64 $tmp1775 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1776 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1775);
if ($tmp1774) goto block11; else goto block12;
block11:;
int64_t $tmp1777 = $tmp1771.value;
int64_t $tmp1778 = $tmp1772.value;
bool $tmp1779 = $tmp1777 <= $tmp1778;
frost$core$Bit $tmp1780 = (frost$core$Bit) {$tmp1779};
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block8; else goto block9;
block12:;
int64_t $tmp1782 = $tmp1771.value;
int64_t $tmp1783 = $tmp1772.value;
bool $tmp1784 = $tmp1782 < $tmp1783;
frost$core$Bit $tmp1785 = (frost$core$Bit) {$tmp1784};
bool $tmp1786 = $tmp1785.value;
if ($tmp1786) goto block8; else goto block9;
block8:;
// line 995
frost$core$Char8** $tmp1787 = &param0->data;
frost$core$Char8* $tmp1788 = *$tmp1787;
frost$core$Int64 $tmp1789 = *(&local0);
frost$core$Int64 $tmp1790 = *(&local1);
int64_t $tmp1791 = $tmp1789.value;
int64_t $tmp1792 = $tmp1790.value;
int64_t $tmp1793 = $tmp1791 + $tmp1792;
frost$core$Int64 $tmp1794 = (frost$core$Int64) {$tmp1793};
int64_t $tmp1795 = $tmp1794.value;
frost$core$Char8 $tmp1796 = $tmp1788[$tmp1795];
frost$core$Char8** $tmp1797 = &param1->data;
frost$core$Char8* $tmp1798 = *$tmp1797;
frost$core$Int64 $tmp1799 = *(&local1);
int64_t $tmp1800 = $tmp1799.value;
frost$core$Char8 $tmp1801 = $tmp1798[$tmp1800];
frost$core$Bit $tmp1802 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1796, $tmp1801);
bool $tmp1803 = $tmp1802.value;
if ($tmp1803) goto block13; else goto block14;
block13:;
// line 996
goto block5;
block14:;
goto block10;
block10:;
frost$core$Int64 $tmp1804 = *(&local1);
int64_t $tmp1805 = $tmp1772.value;
int64_t $tmp1806 = $tmp1804.value;
int64_t $tmp1807 = $tmp1805 - $tmp1806;
frost$core$Int64 $tmp1808 = (frost$core$Int64) {$tmp1807};
frost$core$UInt64 $tmp1809 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1808);
if ($tmp1774) goto block16; else goto block17;
block16:;
uint64_t $tmp1810 = $tmp1809.value;
uint64_t $tmp1811 = $tmp1776.value;
bool $tmp1812 = $tmp1810 >= $tmp1811;
frost$core$Bit $tmp1813 = (frost$core$Bit) {$tmp1812};
bool $tmp1814 = $tmp1813.value;
if ($tmp1814) goto block15; else goto block9;
block17:;
uint64_t $tmp1815 = $tmp1809.value;
uint64_t $tmp1816 = $tmp1776.value;
bool $tmp1817 = $tmp1815 > $tmp1816;
frost$core$Bit $tmp1818 = (frost$core$Bit) {$tmp1817};
bool $tmp1819 = $tmp1818.value;
if ($tmp1819) goto block15; else goto block9;
block15:;
int64_t $tmp1820 = $tmp1804.value;
int64_t $tmp1821 = $tmp1775.value;
int64_t $tmp1822 = $tmp1820 + $tmp1821;
frost$core$Int64 $tmp1823 = (frost$core$Int64) {$tmp1822};
*(&local1) = $tmp1823;
goto block8;
block9:;
// line 999
frost$core$Int64 $tmp1824 = *(&local0);
frost$core$String$Index $tmp1825 = frost$core$String$Index$init$frost$core$Int64($tmp1824);
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp1825, true }).value), true });
block5:;
frost$core$Int64 $tmp1826 = *(&local0);
int64_t $tmp1827 = $tmp1751.value;
int64_t $tmp1828 = $tmp1826.value;
int64_t $tmp1829 = $tmp1827 - $tmp1828;
frost$core$Int64 $tmp1830 = (frost$core$Int64) {$tmp1829};
frost$core$UInt64 $tmp1831 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1830);
if ($tmp1753) goto block19; else goto block20;
block19:;
uint64_t $tmp1832 = $tmp1831.value;
uint64_t $tmp1833 = $tmp1755.value;
bool $tmp1834 = $tmp1832 >= $tmp1833;
frost$core$Bit $tmp1835 = (frost$core$Bit) {$tmp1834};
bool $tmp1836 = $tmp1835.value;
if ($tmp1836) goto block18; else goto block4;
block20:;
uint64_t $tmp1837 = $tmp1831.value;
uint64_t $tmp1838 = $tmp1755.value;
bool $tmp1839 = $tmp1837 > $tmp1838;
frost$core$Bit $tmp1840 = (frost$core$Bit) {$tmp1839};
bool $tmp1841 = $tmp1840.value;
if ($tmp1841) goto block18; else goto block4;
block18:;
int64_t $tmp1842 = $tmp1826.value;
int64_t $tmp1843 = $tmp1754.value;
int64_t $tmp1844 = $tmp1842 + $tmp1843;
frost$core$Int64 $tmp1845 = (frost$core$Int64) {$tmp1844};
*(&local0) = $tmp1845;
goto block3;
block4:;
// line 1001
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 1012
frost$core$String$Index $tmp1846 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1847 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1846);
return $tmp1847;

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1024
frost$core$Int64* $tmp1848 = &param0->_length;
frost$core$Int64 $tmp1849 = *$tmp1848;
frost$core$Int64* $tmp1850 = &param1->_length;
frost$core$Int64 $tmp1851 = *$tmp1850;
int64_t $tmp1852 = $tmp1849.value;
int64_t $tmp1853 = $tmp1851.value;
bool $tmp1854 = $tmp1852 < $tmp1853;
frost$core$Bit $tmp1855 = (frost$core$Bit) {$tmp1854};
bool $tmp1856 = $tmp1855.value;
if ($tmp1856) goto block1; else goto block2;
block1:;
// line 1025
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 1027
frost$core$Int64 $tmp1857 = param2.value;
frost$core$Int64* $tmp1858 = &param0->_length;
frost$core$Int64 $tmp1859 = *$tmp1858;
frost$core$Int64* $tmp1860 = &param1->_length;
frost$core$Int64 $tmp1861 = *$tmp1860;
int64_t $tmp1862 = $tmp1859.value;
int64_t $tmp1863 = $tmp1861.value;
int64_t $tmp1864 = $tmp1862 - $tmp1863;
frost$core$Int64 $tmp1865 = (frost$core$Int64) {$tmp1864};
frost$core$Int64 $tmp1866 = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64($tmp1857, $tmp1865);
*(&local0) = $tmp1866;
// line 1028
frost$core$Int64 $tmp1867 = *(&local0);
frost$core$Int64 $tmp1868 = (frost$core$Int64) {0};
frost$core$Int64 $tmp1869 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1870 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1871 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1867, $tmp1868, $tmp1869, $tmp1870);
frost$core$Int64 $tmp1872 = $tmp1871.start;
*(&local1) = $tmp1872;
frost$core$Int64 $tmp1873 = $tmp1871.end;
frost$core$Int64 $tmp1874 = $tmp1871.step;
frost$core$UInt64 $tmp1875 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1874);
frost$core$Int64 $tmp1876 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1874);
frost$core$UInt64 $tmp1877 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1876);
frost$core$Bit $tmp1878 = $tmp1871.inclusive;
bool $tmp1879 = $tmp1878.value;
frost$core$Int64 $tmp1880 = (frost$core$Int64) {0};
int64_t $tmp1881 = $tmp1874.value;
int64_t $tmp1882 = $tmp1880.value;
bool $tmp1883 = $tmp1881 >= $tmp1882;
frost$core$Bit $tmp1884 = (frost$core$Bit) {$tmp1883};
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block6; else goto block7;
block6:;
if ($tmp1879) goto block8; else goto block9;
block8:;
int64_t $tmp1886 = $tmp1872.value;
int64_t $tmp1887 = $tmp1873.value;
bool $tmp1888 = $tmp1886 <= $tmp1887;
frost$core$Bit $tmp1889 = (frost$core$Bit) {$tmp1888};
bool $tmp1890 = $tmp1889.value;
if ($tmp1890) goto block3; else goto block4;
block9:;
int64_t $tmp1891 = $tmp1872.value;
int64_t $tmp1892 = $tmp1873.value;
bool $tmp1893 = $tmp1891 < $tmp1892;
frost$core$Bit $tmp1894 = (frost$core$Bit) {$tmp1893};
bool $tmp1895 = $tmp1894.value;
if ($tmp1895) goto block3; else goto block4;
block7:;
if ($tmp1879) goto block10; else goto block11;
block10:;
int64_t $tmp1896 = $tmp1872.value;
int64_t $tmp1897 = $tmp1873.value;
bool $tmp1898 = $tmp1896 >= $tmp1897;
frost$core$Bit $tmp1899 = (frost$core$Bit) {$tmp1898};
bool $tmp1900 = $tmp1899.value;
if ($tmp1900) goto block3; else goto block4;
block11:;
int64_t $tmp1901 = $tmp1872.value;
int64_t $tmp1902 = $tmp1873.value;
bool $tmp1903 = $tmp1901 > $tmp1902;
frost$core$Bit $tmp1904 = (frost$core$Bit) {$tmp1903};
bool $tmp1905 = $tmp1904.value;
if ($tmp1905) goto block3; else goto block4;
block3:;
// line 1029
frost$core$Int64 $tmp1906 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1907 = &param1->_length;
frost$core$Int64 $tmp1908 = *$tmp1907;
frost$core$Bit $tmp1909 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1910 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1906, $tmp1908, $tmp1909);
frost$core$Int64 $tmp1911 = $tmp1910.min;
*(&local2) = $tmp1911;
frost$core$Int64 $tmp1912 = $tmp1910.max;
frost$core$Bit $tmp1913 = $tmp1910.inclusive;
bool $tmp1914 = $tmp1913.value;
frost$core$Int64 $tmp1915 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1916 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1915);
if ($tmp1914) goto block15; else goto block16;
block15:;
int64_t $tmp1917 = $tmp1911.value;
int64_t $tmp1918 = $tmp1912.value;
bool $tmp1919 = $tmp1917 <= $tmp1918;
frost$core$Bit $tmp1920 = (frost$core$Bit) {$tmp1919};
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block12; else goto block13;
block16:;
int64_t $tmp1922 = $tmp1911.value;
int64_t $tmp1923 = $tmp1912.value;
bool $tmp1924 = $tmp1922 < $tmp1923;
frost$core$Bit $tmp1925 = (frost$core$Bit) {$tmp1924};
bool $tmp1926 = $tmp1925.value;
if ($tmp1926) goto block12; else goto block13;
block12:;
// line 1030
frost$core$Char8** $tmp1927 = &param0->data;
frost$core$Char8* $tmp1928 = *$tmp1927;
frost$core$Int64 $tmp1929 = *(&local1);
frost$core$Int64 $tmp1930 = *(&local2);
int64_t $tmp1931 = $tmp1929.value;
int64_t $tmp1932 = $tmp1930.value;
int64_t $tmp1933 = $tmp1931 + $tmp1932;
frost$core$Int64 $tmp1934 = (frost$core$Int64) {$tmp1933};
int64_t $tmp1935 = $tmp1934.value;
frost$core$Char8 $tmp1936 = $tmp1928[$tmp1935];
frost$core$Char8** $tmp1937 = &param1->data;
frost$core$Char8* $tmp1938 = *$tmp1937;
frost$core$Int64 $tmp1939 = *(&local2);
int64_t $tmp1940 = $tmp1939.value;
frost$core$Char8 $tmp1941 = $tmp1938[$tmp1940];
frost$core$Bit $tmp1942 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1936, $tmp1941);
bool $tmp1943 = $tmp1942.value;
if ($tmp1943) goto block17; else goto block18;
block17:;
// line 1031
goto block5;
block18:;
goto block14;
block14:;
frost$core$Int64 $tmp1944 = *(&local2);
int64_t $tmp1945 = $tmp1912.value;
int64_t $tmp1946 = $tmp1944.value;
int64_t $tmp1947 = $tmp1945 - $tmp1946;
frost$core$Int64 $tmp1948 = (frost$core$Int64) {$tmp1947};
frost$core$UInt64 $tmp1949 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1948);
if ($tmp1914) goto block20; else goto block21;
block20:;
uint64_t $tmp1950 = $tmp1949.value;
uint64_t $tmp1951 = $tmp1916.value;
bool $tmp1952 = $tmp1950 >= $tmp1951;
frost$core$Bit $tmp1953 = (frost$core$Bit) {$tmp1952};
bool $tmp1954 = $tmp1953.value;
if ($tmp1954) goto block19; else goto block13;
block21:;
uint64_t $tmp1955 = $tmp1949.value;
uint64_t $tmp1956 = $tmp1916.value;
bool $tmp1957 = $tmp1955 > $tmp1956;
frost$core$Bit $tmp1958 = (frost$core$Bit) {$tmp1957};
bool $tmp1959 = $tmp1958.value;
if ($tmp1959) goto block19; else goto block13;
block19:;
int64_t $tmp1960 = $tmp1944.value;
int64_t $tmp1961 = $tmp1915.value;
int64_t $tmp1962 = $tmp1960 + $tmp1961;
frost$core$Int64 $tmp1963 = (frost$core$Int64) {$tmp1962};
*(&local2) = $tmp1963;
goto block12;
block13:;
// line 1034
frost$core$Int64 $tmp1964 = *(&local1);
frost$core$String$Index $tmp1965 = frost$core$String$Index$init$frost$core$Int64($tmp1964);
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp1965, true }).value), true });
block5:;
frost$core$Int64 $tmp1966 = *(&local1);
if ($tmp1885) goto block23; else goto block24;
block23:;
int64_t $tmp1967 = $tmp1873.value;
int64_t $tmp1968 = $tmp1966.value;
int64_t $tmp1969 = $tmp1967 - $tmp1968;
frost$core$Int64 $tmp1970 = (frost$core$Int64) {$tmp1969};
frost$core$UInt64 $tmp1971 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1970);
if ($tmp1879) goto block25; else goto block26;
block25:;
uint64_t $tmp1972 = $tmp1971.value;
uint64_t $tmp1973 = $tmp1875.value;
bool $tmp1974 = $tmp1972 >= $tmp1973;
frost$core$Bit $tmp1975 = (frost$core$Bit) {$tmp1974};
bool $tmp1976 = $tmp1975.value;
if ($tmp1976) goto block22; else goto block4;
block26:;
uint64_t $tmp1977 = $tmp1971.value;
uint64_t $tmp1978 = $tmp1875.value;
bool $tmp1979 = $tmp1977 > $tmp1978;
frost$core$Bit $tmp1980 = (frost$core$Bit) {$tmp1979};
bool $tmp1981 = $tmp1980.value;
if ($tmp1981) goto block22; else goto block4;
block24:;
int64_t $tmp1982 = $tmp1966.value;
int64_t $tmp1983 = $tmp1873.value;
int64_t $tmp1984 = $tmp1982 - $tmp1983;
frost$core$Int64 $tmp1985 = (frost$core$Int64) {$tmp1984};
frost$core$UInt64 $tmp1986 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1985);
if ($tmp1879) goto block27; else goto block28;
block27:;
uint64_t $tmp1987 = $tmp1986.value;
uint64_t $tmp1988 = $tmp1877.value;
bool $tmp1989 = $tmp1987 >= $tmp1988;
frost$core$Bit $tmp1990 = (frost$core$Bit) {$tmp1989};
bool $tmp1991 = $tmp1990.value;
if ($tmp1991) goto block22; else goto block4;
block28:;
uint64_t $tmp1992 = $tmp1986.value;
uint64_t $tmp1993 = $tmp1877.value;
bool $tmp1994 = $tmp1992 > $tmp1993;
frost$core$Bit $tmp1995 = (frost$core$Bit) {$tmp1994};
bool $tmp1996 = $tmp1995.value;
if ($tmp1996) goto block22; else goto block4;
block22:;
int64_t $tmp1997 = $tmp1966.value;
int64_t $tmp1998 = $tmp1874.value;
int64_t $tmp1999 = $tmp1997 + $tmp1998;
frost$core$Int64 $tmp2000 = (frost$core$Int64) {$tmp1999};
*(&local1) = $tmp2000;
goto block3;
block4:;
// line 1036
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1047
frost$core$Matcher* $tmp2001 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2002;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2002, $tmp2001);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
return $tmp2002;

}
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1058
frost$core$Matcher* $tmp2003 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2004 = frost$core$Matcher$find$R$frost$core$Bit($tmp2003);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
return $tmp2004;

}
frost$collections$ListView* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q(frost$core$String* param0, frost$core$RegularExpression* param1) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
// line 1072
frost$core$Matcher* $tmp2005 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
frost$core$Matcher* $tmp2006 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
*(&local0) = $tmp2005;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
// line 1073
frost$core$Matcher* $tmp2007 = *(&local0);
frost$core$Bit $tmp2008;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2008, $tmp2007);
bool $tmp2009 = $tmp2008.value;
if ($tmp2009) goto block1; else goto block2;
block1:;
// line 1074
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2010 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2010);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
frost$collections$Array* $tmp2011 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
*(&local1) = $tmp2010;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
// line 1075
frost$core$Int64 $tmp2012 = (frost$core$Int64) {1};
frost$core$Matcher* $tmp2013 = *(&local0);
frost$core$Int64 $tmp2014;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2014, $tmp2013);
frost$core$Bit $tmp2015 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2016 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2012, $tmp2014, $tmp2015);
frost$core$Int64 $tmp2017 = $tmp2016.min;
*(&local2) = $tmp2017;
frost$core$Int64 $tmp2018 = $tmp2016.max;
frost$core$Bit $tmp2019 = $tmp2016.inclusive;
bool $tmp2020 = $tmp2019.value;
frost$core$Int64 $tmp2021 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2022 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2021);
if ($tmp2020) goto block6; else goto block7;
block6:;
int64_t $tmp2023 = $tmp2017.value;
int64_t $tmp2024 = $tmp2018.value;
bool $tmp2025 = $tmp2023 <= $tmp2024;
frost$core$Bit $tmp2026 = (frost$core$Bit) {$tmp2025};
bool $tmp2027 = $tmp2026.value;
if ($tmp2027) goto block3; else goto block4;
block7:;
int64_t $tmp2028 = $tmp2017.value;
int64_t $tmp2029 = $tmp2018.value;
bool $tmp2030 = $tmp2028 < $tmp2029;
frost$core$Bit $tmp2031 = (frost$core$Bit) {$tmp2030};
bool $tmp2032 = $tmp2031.value;
if ($tmp2032) goto block3; else goto block4;
block3:;
// line 1076
frost$collections$Array* $tmp2033 = *(&local1);
frost$core$Matcher* $tmp2034 = *(&local0);
frost$core$Int64 $tmp2035 = *(&local2);
frost$core$String* $tmp2036 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2034, $tmp2035);
frost$collections$Array$add$frost$collections$Array$T($tmp2033, ((frost$core$Object*) $tmp2036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
goto block5;
block5:;
frost$core$Int64 $tmp2037 = *(&local2);
int64_t $tmp2038 = $tmp2018.value;
int64_t $tmp2039 = $tmp2037.value;
int64_t $tmp2040 = $tmp2038 - $tmp2039;
frost$core$Int64 $tmp2041 = (frost$core$Int64) {$tmp2040};
frost$core$UInt64 $tmp2042 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2041);
if ($tmp2020) goto block9; else goto block10;
block9:;
uint64_t $tmp2043 = $tmp2042.value;
uint64_t $tmp2044 = $tmp2022.value;
bool $tmp2045 = $tmp2043 >= $tmp2044;
frost$core$Bit $tmp2046 = (frost$core$Bit) {$tmp2045};
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block8; else goto block4;
block10:;
uint64_t $tmp2048 = $tmp2042.value;
uint64_t $tmp2049 = $tmp2022.value;
bool $tmp2050 = $tmp2048 > $tmp2049;
frost$core$Bit $tmp2051 = (frost$core$Bit) {$tmp2050};
bool $tmp2052 = $tmp2051.value;
if ($tmp2052) goto block8; else goto block4;
block8:;
int64_t $tmp2053 = $tmp2037.value;
int64_t $tmp2054 = $tmp2021.value;
int64_t $tmp2055 = $tmp2053 + $tmp2054;
frost$core$Int64 $tmp2056 = (frost$core$Int64) {$tmp2055};
*(&local2) = $tmp2056;
goto block3;
block4:;
// line 1078
frost$collections$Array* $tmp2057 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2057)));
frost$collections$Array* $tmp2058 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp2059 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) $tmp2057);
block2:;
// line 1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp2060 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) NULL);

}
frost$core$String* frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
// line 1091
frost$core$Bit $tmp2061 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s2062);
bool $tmp2063 = $tmp2061.value;
if ($tmp2063) goto block1; else goto block2;
block1:;
// line 1092
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1094
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2064 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2064);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
frost$core$MutableString* $tmp2065 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local0) = $tmp2064;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
// line 1095
frost$core$String$Index $tmp2066 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2066;
// line 1096
goto block3;
block3:;
// line 1097
frost$core$String$Index $tmp2067 = *(&local1);
frost$core$String$Index$nullable $tmp2068 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2067);
*(&local2) = $tmp2068;
// line 1098
frost$core$String$Index$nullable $tmp2069 = *(&local2);
frost$core$Bit $tmp2070 = frost$core$Bit$init$builtin_bit(!$tmp2069.nonnull);
bool $tmp2071 = $tmp2070.value;
if ($tmp2071) goto block5; else goto block6;
block5:;
// line 1099
frost$core$MutableString* $tmp2072 = *(&local0);
frost$core$String$Index $tmp2073 = *(&local1);
frost$core$Bit $tmp2074 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2075 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2073, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2074);
frost$core$String* $tmp2076 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2075);
frost$core$MutableString$append$frost$core$String($tmp2072, $tmp2076);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
// line 1100
goto block4;
block6:;
// line 1102
frost$core$MutableString* $tmp2077 = *(&local0);
frost$core$String$Index $tmp2078 = *(&local1);
frost$core$String$Index$nullable $tmp2079 = *(&local2);
frost$core$Bit $tmp2080 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2081 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2078, ((frost$core$String$Index) $tmp2079.value), $tmp2080);
frost$core$String* $tmp2082 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2081);
frost$core$MutableString$append$frost$core$String($tmp2077, $tmp2082);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
// line 1103
frost$core$MutableString* $tmp2083 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp2083, param2);
// line 1104
frost$core$String$Index$nullable $tmp2084 = *(&local2);
frost$core$Int64 $tmp2085 = ((frost$core$String$Index) $tmp2084.value).value;
frost$core$Int64* $tmp2086 = &param1->_length;
frost$core$Int64 $tmp2087 = *$tmp2086;
int64_t $tmp2088 = $tmp2085.value;
int64_t $tmp2089 = $tmp2087.value;
int64_t $tmp2090 = $tmp2088 + $tmp2089;
frost$core$Int64 $tmp2091 = (frost$core$Int64) {$tmp2090};
frost$core$String$Index $tmp2092 = frost$core$String$Index$init$frost$core$Int64($tmp2091);
*(&local1) = $tmp2092;
goto block3;
block4:;
// line 1106
frost$core$MutableString* $tmp2093 = *(&local0);
frost$core$String* $tmp2094 = frost$core$MutableString$finish$R$frost$core$String($tmp2093);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$MutableString* $tmp2095 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2094;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

// line 1120
frost$core$Bit $tmp2096 = frost$core$Bit$init$builtin_bit(true);
frost$core$String* $tmp2097 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param0, param1, param2, $tmp2096);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
return $tmp2097;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// line 1125
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2098 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2098);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
frost$core$MutableString* $tmp2099 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
*(&local0) = $tmp2098;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
// line 1126
frost$core$Matcher* $tmp2100 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
frost$core$Matcher* $tmp2101 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
*(&local1) = $tmp2100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
// line 1127
goto block1;
block1:;
frost$core$Matcher* $tmp2102 = *(&local1);
frost$core$Bit $tmp2103 = frost$core$Matcher$find$R$frost$core$Bit($tmp2102);
bool $tmp2104 = $tmp2103.value;
if ($tmp2104) goto block2; else goto block3;
block2:;
// line 1128
frost$core$Matcher* $tmp2105 = *(&local1);
frost$core$MutableString* $tmp2106 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2105, $tmp2106, param2, param3);
goto block1;
block3:;
// line 1130
frost$core$Matcher* $tmp2107 = *(&local1);
frost$core$MutableString* $tmp2108 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2107, $tmp2108);
// line 1131
frost$core$MutableString* $tmp2109 = *(&local0);
frost$core$String* $tmp2110 = frost$core$MutableString$finish$R$frost$core$String($tmp2109);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
frost$core$Matcher* $tmp2111 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2112 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2110;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 1152
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2113 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2113);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
frost$core$MutableString* $tmp2114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
*(&local0) = $tmp2113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
// line 1153
frost$core$Matcher* $tmp2115 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
frost$core$Matcher* $tmp2116 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
*(&local1) = $tmp2115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
// line 1154
goto block1;
block1:;
frost$core$Matcher* $tmp2117 = *(&local1);
frost$core$Bit $tmp2118 = frost$core$Matcher$find$R$frost$core$Bit($tmp2117);
bool $tmp2119 = $tmp2118.value;
if ($tmp2119) goto block2; else goto block3;
block2:;
// line 1155
frost$core$Matcher* $tmp2120 = *(&local1);
frost$core$MutableString* $tmp2121 = *(&local0);
frost$core$Matcher* $tmp2122 = *(&local1);
frost$core$Int64 $tmp2123 = (frost$core$Int64) {0};
frost$core$String* $tmp2124 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2122, $tmp2123);
frost$core$Int8** $tmp2125 = &param2->pointer;
frost$core$Int8* $tmp2126 = *$tmp2125;
frost$core$Object** $tmp2127 = &param2->target;
frost$core$Object* $tmp2128 = *$tmp2127;
bool $tmp2129 = $tmp2128 != ((frost$core$Object*) NULL);
if ($tmp2129) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp2131 = (($fn2130) $tmp2126)($tmp2124);
*(&local2) = $tmp2131;
goto block6;
block4:;
frost$core$Object* $tmp2133 = (($fn2132) $tmp2126)($tmp2128, $tmp2124);
*(&local2) = $tmp2133;
goto block6;
block6:;
frost$core$Object* $tmp2134 = *(&local2);
$fn2136 $tmp2135 = ($fn2136) $tmp2134->$class->vtable[0];
frost$core$String* $tmp2137 = $tmp2135($tmp2134);
frost$core$Bit $tmp2138 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2120, $tmp2121, $tmp2137, $tmp2138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
frost$core$Frost$unref$frost$core$Object$Q($tmp2134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
goto block1;
block3:;
// line 1157
frost$core$Matcher* $tmp2139 = *(&local1);
frost$core$MutableString* $tmp2140 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2139, $tmp2140);
// line 1158
frost$core$MutableString* $tmp2141 = *(&local0);
$fn2143 $tmp2142 = ($fn2143) ((frost$core$Object*) $tmp2141)->$class->vtable[0];
frost$core$String* $tmp2144 = $tmp2142(((frost$core$Object*) $tmp2141));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2144));
frost$core$Matcher* $tmp2145 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2146 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2144;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
frost$core$Object* local4 = NULL;
// line 1172
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2147 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2147);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
frost$core$MutableString* $tmp2148 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
*(&local0) = $tmp2147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
// line 1173
frost$core$Matcher* $tmp2149 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$core$Matcher* $tmp2150 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
*(&local1) = $tmp2149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
// line 1174
goto block1;
block1:;
frost$core$Matcher* $tmp2151 = *(&local1);
frost$core$Bit $tmp2152 = frost$core$Matcher$find$R$frost$core$Bit($tmp2151);
bool $tmp2153 = $tmp2152.value;
if ($tmp2153) goto block2; else goto block3;
block2:;
// line 1175
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2154 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2154);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
frost$collections$Array* $tmp2155 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
*(&local2) = $tmp2154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
// line 1176
frost$core$Int64 $tmp2156 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp2157 = *(&local1);
frost$core$Int64 $tmp2158;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2158, $tmp2157);
frost$core$Bit $tmp2159 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2160 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2156, $tmp2158, $tmp2159);
frost$core$Int64 $tmp2161 = $tmp2160.min;
*(&local3) = $tmp2161;
frost$core$Int64 $tmp2162 = $tmp2160.max;
frost$core$Bit $tmp2163 = $tmp2160.inclusive;
bool $tmp2164 = $tmp2163.value;
frost$core$Int64 $tmp2165 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2166 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2165);
if ($tmp2164) goto block7; else goto block8;
block7:;
int64_t $tmp2167 = $tmp2161.value;
int64_t $tmp2168 = $tmp2162.value;
bool $tmp2169 = $tmp2167 <= $tmp2168;
frost$core$Bit $tmp2170 = (frost$core$Bit) {$tmp2169};
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block4; else goto block5;
block8:;
int64_t $tmp2172 = $tmp2161.value;
int64_t $tmp2173 = $tmp2162.value;
bool $tmp2174 = $tmp2172 < $tmp2173;
frost$core$Bit $tmp2175 = (frost$core$Bit) {$tmp2174};
bool $tmp2176 = $tmp2175.value;
if ($tmp2176) goto block4; else goto block5;
block4:;
// line 1177
frost$collections$Array* $tmp2177 = *(&local2);
frost$core$Matcher* $tmp2178 = *(&local1);
frost$core$Int64 $tmp2179 = *(&local3);
frost$core$String* $tmp2180 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2178, $tmp2179);
frost$collections$Array$add$frost$collections$Array$T($tmp2177, ((frost$core$Object*) $tmp2180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
goto block6;
block6:;
frost$core$Int64 $tmp2181 = *(&local3);
int64_t $tmp2182 = $tmp2162.value;
int64_t $tmp2183 = $tmp2181.value;
int64_t $tmp2184 = $tmp2182 - $tmp2183;
frost$core$Int64 $tmp2185 = (frost$core$Int64) {$tmp2184};
frost$core$UInt64 $tmp2186 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2185);
if ($tmp2164) goto block10; else goto block11;
block10:;
uint64_t $tmp2187 = $tmp2186.value;
uint64_t $tmp2188 = $tmp2166.value;
bool $tmp2189 = $tmp2187 >= $tmp2188;
frost$core$Bit $tmp2190 = (frost$core$Bit) {$tmp2189};
bool $tmp2191 = $tmp2190.value;
if ($tmp2191) goto block9; else goto block5;
block11:;
uint64_t $tmp2192 = $tmp2186.value;
uint64_t $tmp2193 = $tmp2166.value;
bool $tmp2194 = $tmp2192 > $tmp2193;
frost$core$Bit $tmp2195 = (frost$core$Bit) {$tmp2194};
bool $tmp2196 = $tmp2195.value;
if ($tmp2196) goto block9; else goto block5;
block9:;
int64_t $tmp2197 = $tmp2181.value;
int64_t $tmp2198 = $tmp2165.value;
int64_t $tmp2199 = $tmp2197 + $tmp2198;
frost$core$Int64 $tmp2200 = (frost$core$Int64) {$tmp2199};
*(&local3) = $tmp2200;
goto block4;
block5:;
// line 1179
frost$core$Matcher* $tmp2201 = *(&local1);
frost$core$MutableString* $tmp2202 = *(&local0);
frost$collections$Array* $tmp2203 = *(&local2);
frost$core$Int8** $tmp2204 = &param2->pointer;
frost$core$Int8* $tmp2205 = *$tmp2204;
frost$core$Object** $tmp2206 = &param2->target;
frost$core$Object* $tmp2207 = *$tmp2206;
bool $tmp2208 = $tmp2207 != ((frost$core$Object*) NULL);
if ($tmp2208) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp2210 = (($fn2209) $tmp2205)(((frost$collections$ListView*) $tmp2203));
*(&local4) = $tmp2210;
goto block14;
block12:;
frost$core$Object* $tmp2212 = (($fn2211) $tmp2205)($tmp2207, ((frost$collections$ListView*) $tmp2203));
*(&local4) = $tmp2212;
goto block14;
block14:;
frost$core$Object* $tmp2213 = *(&local4);
$fn2215 $tmp2214 = ($fn2215) $tmp2213->$class->vtable[0];
frost$core$String* $tmp2216 = $tmp2214($tmp2213);
frost$core$Bit $tmp2217 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2201, $tmp2202, $tmp2216, $tmp2217);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
frost$core$Frost$unref$frost$core$Object$Q($tmp2213);
frost$collections$Array* $tmp2218 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
*(&local2) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// line 1181
frost$core$Matcher* $tmp2219 = *(&local1);
frost$core$MutableString* $tmp2220 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2219, $tmp2220);
// line 1182
frost$core$MutableString* $tmp2221 = *(&local0);
$fn2223 $tmp2222 = ($fn2223) ((frost$core$Object*) $tmp2221)->$class->vtable[0];
frost$core$String* $tmp2224 = $tmp2222(((frost$core$Object*) $tmp2221));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
frost$core$Matcher* $tmp2225 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2226 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2224;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1186
frost$core$Bit $tmp2227 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2228 = frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(param0, param1, $tmp2227);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
return $tmp2228;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Bit param2) {

// line 1190
FROST_ASSERT(48 == sizeof(frost$core$String$MatchIterator));
frost$core$String$MatchIterator* $tmp2229 = (frost$core$String$MatchIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp2229, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2229)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
return ((frost$collections$Iterator*) $tmp2229);

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1194
frost$core$Bit $tmp2230 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2231 = frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(param0, param1, $tmp2230);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
return $tmp2231;

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Bit param2) {

// line 1198
FROST_ASSERT(40 == sizeof(frost$core$String$RegexMatchIterator));
frost$core$String$RegexMatchIterator* $tmp2232 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit($tmp2232, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2232)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
return ((frost$collections$Iterator*) $tmp2232);

}
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(frost$core$String* param0) {

// line 1205
frost$core$Int64 $tmp2233 = (frost$core$Int64) {0};
frost$core$String$Index $tmp2234 = frost$core$String$Index$init$frost$core$Int64($tmp2233);
return $tmp2234;

}
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(frost$core$String* param0) {

// line 1212
frost$core$Int64* $tmp2235 = &param0->_length;
frost$core$Int64 $tmp2236 = *$tmp2235;
frost$core$String$Index $tmp2237 = frost$core$String$Index$init$frost$core$Int64($tmp2236);
return $tmp2237;

}
frost$core$String$Index frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

int64_t local0;
// line 1222
frost$core$Int64 $tmp2238 = param1.value;
frost$core$Int64* $tmp2239 = &param0->_length;
frost$core$Int64 $tmp2240 = *$tmp2239;
int64_t $tmp2241 = $tmp2238.value;
int64_t $tmp2242 = $tmp2240.value;
bool $tmp2243 = $tmp2241 < $tmp2242;
frost$core$Bit $tmp2244 = (frost$core$Bit) {$tmp2243};
bool $tmp2245 = $tmp2244.value;
if ($tmp2245) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2246 = (frost$core$Int64) {1222};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2247, $tmp2246);
abort(); // unreachable
block1:;
// line 1223
frost$core$Char8** $tmp2248 = &param0->data;
frost$core$Char8* $tmp2249 = *$tmp2248;
frost$core$Int64 $tmp2250 = param1.value;
int64_t $tmp2251 = $tmp2250.value;
frost$core$Char8 $tmp2252 = $tmp2249[$tmp2251];
uint8_t $tmp2253 = $tmp2252.value;
int64_t $tmp2254 = ((int64_t) $tmp2253) & 255;
*(&local0) = $tmp2254;
// line 1224
int64_t $tmp2255 = *(&local0);
bool $tmp2256 = $tmp2255 >= 240;
frost$core$Bit $tmp2257 = frost$core$Bit$init$builtin_bit($tmp2256);
bool $tmp2258 = $tmp2257.value;
if ($tmp2258) goto block3; else goto block4;
block3:;
// line 1225
frost$core$Int64 $tmp2259 = param1.value;
frost$core$Int64 $tmp2260 = (frost$core$Int64) {4};
int64_t $tmp2261 = $tmp2259.value;
int64_t $tmp2262 = $tmp2260.value;
int64_t $tmp2263 = $tmp2261 + $tmp2262;
frost$core$Int64 $tmp2264 = (frost$core$Int64) {$tmp2263};
frost$core$String$Index $tmp2265 = frost$core$String$Index$init$frost$core$Int64($tmp2264);
return $tmp2265;
block4:;
// line 1227
int64_t $tmp2266 = *(&local0);
bool $tmp2267 = $tmp2266 >= 224;
frost$core$Bit $tmp2268 = frost$core$Bit$init$builtin_bit($tmp2267);
bool $tmp2269 = $tmp2268.value;
if ($tmp2269) goto block5; else goto block6;
block5:;
// line 1228
frost$core$Int64 $tmp2270 = param1.value;
frost$core$Int64 $tmp2271 = (frost$core$Int64) {3};
int64_t $tmp2272 = $tmp2270.value;
int64_t $tmp2273 = $tmp2271.value;
int64_t $tmp2274 = $tmp2272 + $tmp2273;
frost$core$Int64 $tmp2275 = (frost$core$Int64) {$tmp2274};
frost$core$String$Index $tmp2276 = frost$core$String$Index$init$frost$core$Int64($tmp2275);
return $tmp2276;
block6:;
// line 1230
int64_t $tmp2277 = *(&local0);
bool $tmp2278 = $tmp2277 >= 192;
frost$core$Bit $tmp2279 = frost$core$Bit$init$builtin_bit($tmp2278);
bool $tmp2280 = $tmp2279.value;
if ($tmp2280) goto block7; else goto block8;
block7:;
// line 1231
frost$core$Int64 $tmp2281 = param1.value;
frost$core$Int64 $tmp2282 = (frost$core$Int64) {2};
int64_t $tmp2283 = $tmp2281.value;
int64_t $tmp2284 = $tmp2282.value;
int64_t $tmp2285 = $tmp2283 + $tmp2284;
frost$core$Int64 $tmp2286 = (frost$core$Int64) {$tmp2285};
frost$core$String$Index $tmp2287 = frost$core$String$Index$init$frost$core$Int64($tmp2286);
return $tmp2287;
block8:;
// line 1233
frost$core$Int64 $tmp2288 = param1.value;
frost$core$Int64 $tmp2289 = (frost$core$Int64) {1};
int64_t $tmp2290 = $tmp2288.value;
int64_t $tmp2291 = $tmp2289.value;
int64_t $tmp2292 = $tmp2290 + $tmp2291;
frost$core$Int64 $tmp2293 = (frost$core$Int64) {$tmp2292};
frost$core$String$Index $tmp2294 = frost$core$String$Index$init$frost$core$Int64($tmp2293);
return $tmp2294;

}
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
// line 1243
frost$core$Int64 $tmp2295 = param1.value;
frost$core$Int64 $tmp2296 = (frost$core$Int64) {0};
int64_t $tmp2297 = $tmp2295.value;
int64_t $tmp2298 = $tmp2296.value;
bool $tmp2299 = $tmp2297 > $tmp2298;
frost$core$Bit $tmp2300 = (frost$core$Bit) {$tmp2299};
bool $tmp2301 = $tmp2300.value;
if ($tmp2301) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2302 = (frost$core$Int64) {1243};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2303, $tmp2302);
abort(); // unreachable
block1:;
// line 1244
frost$core$Int64 $tmp2304 = param1.value;
frost$core$Int64 $tmp2305 = (frost$core$Int64) {1};
int64_t $tmp2306 = $tmp2304.value;
int64_t $tmp2307 = $tmp2305.value;
int64_t $tmp2308 = $tmp2306 - $tmp2307;
frost$core$Int64 $tmp2309 = (frost$core$Int64) {$tmp2308};
*(&local0) = $tmp2309;
// line 1245
goto block3;
block3:;
frost$core$Char8** $tmp2310 = &param0->data;
frost$core$Char8* $tmp2311 = *$tmp2310;
frost$core$Int64 $tmp2312 = *(&local0);
int64_t $tmp2313 = $tmp2312.value;
frost$core$Char8 $tmp2314 = $tmp2311[$tmp2313];
uint8_t $tmp2315 = $tmp2314.value;
int64_t $tmp2316 = ((int64_t) $tmp2315) & 255;
bool $tmp2317 = $tmp2316 >= 128;
frost$core$Bit $tmp2318 = frost$core$Bit$init$builtin_bit($tmp2317);
bool $tmp2319 = $tmp2318.value;
if ($tmp2319) goto block6; else goto block5;
block6:;
frost$core$Char8** $tmp2320 = &param0->data;
frost$core$Char8* $tmp2321 = *$tmp2320;
frost$core$Int64 $tmp2322 = *(&local0);
int64_t $tmp2323 = $tmp2322.value;
frost$core$Char8 $tmp2324 = $tmp2321[$tmp2323];
uint8_t $tmp2325 = $tmp2324.value;
int64_t $tmp2326 = ((int64_t) $tmp2325) & 255;
bool $tmp2327 = $tmp2326 < 192;
frost$core$Bit $tmp2328 = frost$core$Bit$init$builtin_bit($tmp2327);
bool $tmp2329 = $tmp2328.value;
if ($tmp2329) goto block4; else goto block5;
block4:;
// line 1247
frost$core$Int64 $tmp2330 = *(&local0);
frost$core$Int64 $tmp2331 = (frost$core$Int64) {1};
int64_t $tmp2332 = $tmp2330.value;
int64_t $tmp2333 = $tmp2331.value;
int64_t $tmp2334 = $tmp2332 - $tmp2333;
frost$core$Int64 $tmp2335 = (frost$core$Int64) {$tmp2334};
*(&local0) = $tmp2335;
goto block3;
block5:;
// line 1249
frost$core$Int64 $tmp2336 = *(&local0);
frost$core$String$Index $tmp2337 = frost$core$String$Index$init$frost$core$Int64($tmp2336);
return $tmp2337;

}
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1, frost$core$Int64 param2) {

frost$core$String$Index local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1259
*(&local0) = param1;
// line 1260
frost$core$Int64 $tmp2338 = (frost$core$Int64) {0};
int64_t $tmp2339 = param2.value;
int64_t $tmp2340 = $tmp2338.value;
bool $tmp2341 = $tmp2339 > $tmp2340;
frost$core$Bit $tmp2342 = (frost$core$Bit) {$tmp2341};
bool $tmp2343 = $tmp2342.value;
if ($tmp2343) goto block1; else goto block3;
block1:;
// line 1261
frost$core$Int64 $tmp2344 = (frost$core$Int64) {0};
frost$core$Bit $tmp2345 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2346 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2344, param2, $tmp2345);
frost$core$Int64 $tmp2347 = $tmp2346.min;
*(&local1) = $tmp2347;
frost$core$Int64 $tmp2348 = $tmp2346.max;
frost$core$Bit $tmp2349 = $tmp2346.inclusive;
bool $tmp2350 = $tmp2349.value;
frost$core$Int64 $tmp2351 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2352 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2351);
if ($tmp2350) goto block7; else goto block8;
block7:;
int64_t $tmp2353 = $tmp2347.value;
int64_t $tmp2354 = $tmp2348.value;
bool $tmp2355 = $tmp2353 <= $tmp2354;
frost$core$Bit $tmp2356 = (frost$core$Bit) {$tmp2355};
bool $tmp2357 = $tmp2356.value;
if ($tmp2357) goto block4; else goto block5;
block8:;
int64_t $tmp2358 = $tmp2347.value;
int64_t $tmp2359 = $tmp2348.value;
bool $tmp2360 = $tmp2358 < $tmp2359;
frost$core$Bit $tmp2361 = (frost$core$Bit) {$tmp2360};
bool $tmp2362 = $tmp2361.value;
if ($tmp2362) goto block4; else goto block5;
block4:;
// line 1262
frost$core$String$Index $tmp2363 = *(&local0);
frost$core$String$Index $tmp2364 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2363);
*(&local0) = $tmp2364;
goto block6;
block6:;
frost$core$Int64 $tmp2365 = *(&local1);
int64_t $tmp2366 = $tmp2348.value;
int64_t $tmp2367 = $tmp2365.value;
int64_t $tmp2368 = $tmp2366 - $tmp2367;
frost$core$Int64 $tmp2369 = (frost$core$Int64) {$tmp2368};
frost$core$UInt64 $tmp2370 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2369);
if ($tmp2350) goto block10; else goto block11;
block10:;
uint64_t $tmp2371 = $tmp2370.value;
uint64_t $tmp2372 = $tmp2352.value;
bool $tmp2373 = $tmp2371 >= $tmp2372;
frost$core$Bit $tmp2374 = (frost$core$Bit) {$tmp2373};
bool $tmp2375 = $tmp2374.value;
if ($tmp2375) goto block9; else goto block5;
block11:;
uint64_t $tmp2376 = $tmp2370.value;
uint64_t $tmp2377 = $tmp2352.value;
bool $tmp2378 = $tmp2376 > $tmp2377;
frost$core$Bit $tmp2379 = (frost$core$Bit) {$tmp2378};
bool $tmp2380 = $tmp2379.value;
if ($tmp2380) goto block9; else goto block5;
block9:;
int64_t $tmp2381 = $tmp2365.value;
int64_t $tmp2382 = $tmp2351.value;
int64_t $tmp2383 = $tmp2381 + $tmp2382;
frost$core$Int64 $tmp2384 = (frost$core$Int64) {$tmp2383};
*(&local1) = $tmp2384;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 1266
frost$core$Int64 $tmp2385 = (frost$core$Int64) {0};
frost$core$Int64 $tmp2386 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp2387 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp2388 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2385, param2, $tmp2386, $tmp2387);
frost$core$Int64 $tmp2389 = $tmp2388.start;
*(&local2) = $tmp2389;
frost$core$Int64 $tmp2390 = $tmp2388.end;
frost$core$Int64 $tmp2391 = $tmp2388.step;
frost$core$UInt64 $tmp2392 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2391);
frost$core$Int64 $tmp2393 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2391);
frost$core$UInt64 $tmp2394 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2393);
frost$core$Bit $tmp2395 = $tmp2388.inclusive;
bool $tmp2396 = $tmp2395.value;
frost$core$Int64 $tmp2397 = (frost$core$Int64) {0};
int64_t $tmp2398 = $tmp2391.value;
int64_t $tmp2399 = $tmp2397.value;
bool $tmp2400 = $tmp2398 >= $tmp2399;
frost$core$Bit $tmp2401 = (frost$core$Bit) {$tmp2400};
bool $tmp2402 = $tmp2401.value;
if ($tmp2402) goto block15; else goto block16;
block15:;
if ($tmp2396) goto block17; else goto block18;
block17:;
int64_t $tmp2403 = $tmp2389.value;
int64_t $tmp2404 = $tmp2390.value;
bool $tmp2405 = $tmp2403 <= $tmp2404;
frost$core$Bit $tmp2406 = (frost$core$Bit) {$tmp2405};
bool $tmp2407 = $tmp2406.value;
if ($tmp2407) goto block12; else goto block13;
block18:;
int64_t $tmp2408 = $tmp2389.value;
int64_t $tmp2409 = $tmp2390.value;
bool $tmp2410 = $tmp2408 < $tmp2409;
frost$core$Bit $tmp2411 = (frost$core$Bit) {$tmp2410};
bool $tmp2412 = $tmp2411.value;
if ($tmp2412) goto block12; else goto block13;
block16:;
if ($tmp2396) goto block19; else goto block20;
block19:;
int64_t $tmp2413 = $tmp2389.value;
int64_t $tmp2414 = $tmp2390.value;
bool $tmp2415 = $tmp2413 >= $tmp2414;
frost$core$Bit $tmp2416 = (frost$core$Bit) {$tmp2415};
bool $tmp2417 = $tmp2416.value;
if ($tmp2417) goto block12; else goto block13;
block20:;
int64_t $tmp2418 = $tmp2389.value;
int64_t $tmp2419 = $tmp2390.value;
bool $tmp2420 = $tmp2418 > $tmp2419;
frost$core$Bit $tmp2421 = (frost$core$Bit) {$tmp2420};
bool $tmp2422 = $tmp2421.value;
if ($tmp2422) goto block12; else goto block13;
block12:;
// line 1267
frost$core$String$Index $tmp2423 = *(&local0);
frost$core$String$Index $tmp2424 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2423);
*(&local0) = $tmp2424;
goto block14;
block14:;
frost$core$Int64 $tmp2425 = *(&local2);
if ($tmp2402) goto block22; else goto block23;
block22:;
int64_t $tmp2426 = $tmp2390.value;
int64_t $tmp2427 = $tmp2425.value;
int64_t $tmp2428 = $tmp2426 - $tmp2427;
frost$core$Int64 $tmp2429 = (frost$core$Int64) {$tmp2428};
frost$core$UInt64 $tmp2430 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2429);
if ($tmp2396) goto block24; else goto block25;
block24:;
uint64_t $tmp2431 = $tmp2430.value;
uint64_t $tmp2432 = $tmp2392.value;
bool $tmp2433 = $tmp2431 >= $tmp2432;
frost$core$Bit $tmp2434 = (frost$core$Bit) {$tmp2433};
bool $tmp2435 = $tmp2434.value;
if ($tmp2435) goto block21; else goto block13;
block25:;
uint64_t $tmp2436 = $tmp2430.value;
uint64_t $tmp2437 = $tmp2392.value;
bool $tmp2438 = $tmp2436 > $tmp2437;
frost$core$Bit $tmp2439 = (frost$core$Bit) {$tmp2438};
bool $tmp2440 = $tmp2439.value;
if ($tmp2440) goto block21; else goto block13;
block23:;
int64_t $tmp2441 = $tmp2425.value;
int64_t $tmp2442 = $tmp2390.value;
int64_t $tmp2443 = $tmp2441 - $tmp2442;
frost$core$Int64 $tmp2444 = (frost$core$Int64) {$tmp2443};
frost$core$UInt64 $tmp2445 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2444);
if ($tmp2396) goto block26; else goto block27;
block26:;
uint64_t $tmp2446 = $tmp2445.value;
uint64_t $tmp2447 = $tmp2394.value;
bool $tmp2448 = $tmp2446 >= $tmp2447;
frost$core$Bit $tmp2449 = (frost$core$Bit) {$tmp2448};
bool $tmp2450 = $tmp2449.value;
if ($tmp2450) goto block21; else goto block13;
block27:;
uint64_t $tmp2451 = $tmp2445.value;
uint64_t $tmp2452 = $tmp2394.value;
bool $tmp2453 = $tmp2451 > $tmp2452;
frost$core$Bit $tmp2454 = (frost$core$Bit) {$tmp2453};
bool $tmp2455 = $tmp2454.value;
if ($tmp2455) goto block21; else goto block13;
block21:;
int64_t $tmp2456 = $tmp2425.value;
int64_t $tmp2457 = $tmp2391.value;
int64_t $tmp2458 = $tmp2456 + $tmp2457;
frost$core$Int64 $tmp2459 = (frost$core$Int64) {$tmp2458};
*(&local2) = $tmp2459;
goto block12;
block13:;
goto block2;
block2:;
// line 1270
frost$core$String$Index $tmp2460 = *(&local0);
return $tmp2460;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1283
frost$core$Int32 $tmp2461 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2462 = frost$core$Char32$init$frost$core$Int32($tmp2461);
frost$core$String* $tmp2463 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2462);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
return $tmp2463;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1297
frost$core$Int64 $tmp2464 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2465 = $tmp2464.value;
int64_t $tmp2466 = param1.value;
bool $tmp2467 = $tmp2465 >= $tmp2466;
frost$core$Bit $tmp2468 = (frost$core$Bit) {$tmp2467};
bool $tmp2469 = $tmp2468.value;
if ($tmp2469) goto block1; else goto block2;
block1:;
// line 1298
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1300
frost$core$Int64 $tmp2470 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2471 = param1.value;
int64_t $tmp2472 = $tmp2470.value;
int64_t $tmp2473 = $tmp2471 - $tmp2472;
frost$core$Int64 $tmp2474 = (frost$core$Int64) {$tmp2473};
frost$core$String* $tmp2475 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2474);
frost$core$String* $tmp2476 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp2475);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
return $tmp2476;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1313
frost$core$Int32 $tmp2477 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2478 = frost$core$Char32$init$frost$core$Int32($tmp2477);
frost$core$String* $tmp2479 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2478);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2479));
return $tmp2479;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1327
frost$core$Int64 $tmp2480 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2481 = $tmp2480.value;
int64_t $tmp2482 = param1.value;
bool $tmp2483 = $tmp2481 >= $tmp2482;
frost$core$Bit $tmp2484 = (frost$core$Bit) {$tmp2483};
bool $tmp2485 = $tmp2484.value;
if ($tmp2485) goto block1; else goto block2;
block1:;
// line 1328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1330
frost$core$Int64 $tmp2486 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2487 = param1.value;
int64_t $tmp2488 = $tmp2486.value;
int64_t $tmp2489 = $tmp2487 - $tmp2488;
frost$core$Int64 $tmp2490 = (frost$core$Int64) {$tmp2489};
frost$core$String* $tmp2491 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2490);
frost$core$String* $tmp2492 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2491, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2491));
return $tmp2492;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1345
frost$core$Int32 $tmp2493 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2494 = frost$core$Char32$init$frost$core$Int32($tmp2493);
frost$core$String* $tmp2495 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2494);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
return $tmp2495;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1361
frost$core$Int64 $tmp2496 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2497 = $tmp2496.value;
int64_t $tmp2498 = param1.value;
bool $tmp2499 = $tmp2497 >= $tmp2498;
frost$core$Bit $tmp2500 = (frost$core$Bit) {$tmp2499};
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block1; else goto block2;
block1:;
// line 1362
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1364
frost$core$Int64 $tmp2502 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2503 = param1.value;
int64_t $tmp2504 = $tmp2502.value;
int64_t $tmp2505 = $tmp2503 - $tmp2504;
frost$core$Int64 $tmp2506 = (frost$core$Int64) {$tmp2505};
*(&local0) = $tmp2506;
// line 1365
frost$core$Int64 $tmp2507 = *(&local0);
frost$core$Int64 $tmp2508 = (frost$core$Int64) {2};
int64_t $tmp2509 = $tmp2507.value;
int64_t $tmp2510 = $tmp2508.value;
int64_t $tmp2511 = $tmp2509 / $tmp2510;
frost$core$Int64 $tmp2512 = (frost$core$Int64) {$tmp2511};
*(&local1) = $tmp2512;
// line 1366
frost$core$Int64 $tmp2513 = *(&local0);
frost$core$Int64 $tmp2514 = *(&local1);
int64_t $tmp2515 = $tmp2513.value;
int64_t $tmp2516 = $tmp2514.value;
int64_t $tmp2517 = $tmp2515 - $tmp2516;
frost$core$Int64 $tmp2518 = (frost$core$Int64) {$tmp2517};
*(&local2) = $tmp2518;
// line 1367
frost$core$Int64 $tmp2519 = *(&local1);
frost$core$String* $tmp2520 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2519);
frost$core$String* $tmp2521 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2520, param0);
frost$core$Int64 $tmp2522 = *(&local2);
frost$core$String* $tmp2523 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2522);
frost$core$String* $tmp2524 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2521, $tmp2523);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
return $tmp2524;

}
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1378
frost$core$Int64 $tmp2525 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2526 = frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2525);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
return $tmp2526;

}
frost$collections$Array* frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
// line 1391
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2527 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2527);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
frost$collections$Array* $tmp2528 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
*(&local0) = $tmp2527;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
// line 1392
frost$core$String$Index $tmp2529 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2529;
// line 1393
goto block1;
block1:;
// line 1394
// line 1395
frost$core$Int64* $tmp2530 = &param1->_length;
frost$core$Int64 $tmp2531 = *$tmp2530;
frost$core$Int64 $tmp2532 = (frost$core$Int64) {0};
frost$core$Bit $tmp2533 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2531, $tmp2532);
bool $tmp2534 = $tmp2533.value;
if ($tmp2534) goto block3; else goto block5;
block3:;
// line 1396
frost$core$String$Index $tmp2535 = *(&local1);
frost$core$String$Index $tmp2536 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2535);
*(&local2) = ((frost$core$String$Index$nullable) { $tmp2536, true });
goto block4;
block5:;
// line 1
// line 1399
frost$core$String$Index $tmp2537 = *(&local1);
frost$core$String$Index$nullable $tmp2538 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2537);
*(&local2) = $tmp2538;
goto block4;
block4:;
// line 1401
frost$core$String$Index$nullable $tmp2539 = *(&local2);
frost$core$Bit $tmp2540 = frost$core$Bit$init$builtin_bit(!$tmp2539.nonnull);
bool $tmp2541 = $tmp2540.value;
if ($tmp2541) goto block6; else goto block8;
block8:;
frost$collections$Array* $tmp2542 = *(&local0);
ITable* $tmp2543 = ((frost$collections$CollectionView*) $tmp2542)->$class->itable;
while ($tmp2543->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2543 = $tmp2543->next;
}
$fn2545 $tmp2544 = $tmp2543->methods[0];
frost$core$Int64 $tmp2546 = $tmp2544(((frost$collections$CollectionView*) $tmp2542));
frost$core$Int64 $tmp2547 = (frost$core$Int64) {1};
int64_t $tmp2548 = param2.value;
int64_t $tmp2549 = $tmp2547.value;
int64_t $tmp2550 = $tmp2548 - $tmp2549;
frost$core$Int64 $tmp2551 = (frost$core$Int64) {$tmp2550};
frost$core$Bit $tmp2552 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2546, $tmp2551);
bool $tmp2553 = $tmp2552.value;
if ($tmp2553) goto block6; else goto block7;
block6:;
// line 1402
frost$collections$Array* $tmp2554 = *(&local0);
frost$core$String$Index $tmp2555 = *(&local1);
frost$core$Bit $tmp2556 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2557 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2555, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2556);
frost$core$String* $tmp2558 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2557);
frost$collections$Array$add$frost$collections$Array$T($tmp2554, ((frost$core$Object*) $tmp2558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
// line 1403
goto block2;
block7:;
// line 1405
frost$collections$Array* $tmp2559 = *(&local0);
frost$core$String$Index $tmp2560 = *(&local1);
frost$core$String$Index$nullable $tmp2561 = *(&local2);
frost$core$Bit $tmp2562 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2563 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2560, ((frost$core$String$Index) $tmp2561.value), $tmp2562);
frost$core$String* $tmp2564 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2563);
frost$collections$Array$add$frost$collections$Array$T($tmp2559, ((frost$core$Object*) $tmp2564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
// line 1406
frost$core$String$Index$nullable $tmp2565 = *(&local2);
frost$core$Int64 $tmp2566 = ((frost$core$String$Index) $tmp2565.value).value;
frost$core$Int64* $tmp2567 = &param1->_length;
frost$core$Int64 $tmp2568 = *$tmp2567;
int64_t $tmp2569 = $tmp2566.value;
int64_t $tmp2570 = $tmp2568.value;
int64_t $tmp2571 = $tmp2569 + $tmp2570;
frost$core$Int64 $tmp2572 = (frost$core$Int64) {$tmp2571};
frost$core$String$Index $tmp2573 = frost$core$String$Index$init$frost$core$Int64($tmp2572);
*(&local1) = $tmp2573;
goto block1;
block2:;
// line 1408
frost$collections$Array* $tmp2574 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2574));
frost$collections$Array* $tmp2575 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2574;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$String$Index local2;
frost$core$Bit local3;
frost$core$String$Index local4;
frost$core$Int64 $tmp2576 = (frost$core$Int64) {0};
int64_t $tmp2577 = param2.value;
int64_t $tmp2578 = $tmp2576.value;
bool $tmp2579 = $tmp2577 > $tmp2578;
frost$core$Bit $tmp2580 = (frost$core$Bit) {$tmp2579};
bool $tmp2581 = $tmp2580.value;
if ($tmp2581) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2582 = (frost$core$Int64) {1422};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2583, $tmp2582, &$s2584);
abort(); // unreachable
block1:;
// line 1423
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2585 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2585);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
frost$collections$Array* $tmp2586 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
*(&local0) = $tmp2585;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
// line 1424
frost$core$Matcher* $tmp2587 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
frost$core$Matcher* $tmp2588 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
*(&local1) = $tmp2587;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
// line 1425
frost$core$String$Index $tmp2589 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp2589;
// line 1426
goto block3;
block3:;
// line 1427
frost$core$Matcher* $tmp2590 = *(&local1);
frost$core$Bit $tmp2591 = frost$core$Matcher$find$R$frost$core$Bit($tmp2590);
*(&local3) = $tmp2591;
// line 1428
frost$core$Bit $tmp2592 = *(&local3);
frost$core$Bit $tmp2593 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2592);
bool $tmp2594 = $tmp2593.value;
if ($tmp2594) goto block5; else goto block7;
block7:;
frost$collections$Array* $tmp2595 = *(&local0);
ITable* $tmp2596 = ((frost$collections$CollectionView*) $tmp2595)->$class->itable;
while ($tmp2596->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2596 = $tmp2596->next;
}
$fn2598 $tmp2597 = $tmp2596->methods[0];
frost$core$Int64 $tmp2599 = $tmp2597(((frost$collections$CollectionView*) $tmp2595));
frost$core$Int64 $tmp2600 = (frost$core$Int64) {1};
int64_t $tmp2601 = param2.value;
int64_t $tmp2602 = $tmp2600.value;
int64_t $tmp2603 = $tmp2601 - $tmp2602;
frost$core$Int64 $tmp2604 = (frost$core$Int64) {$tmp2603};
frost$core$Bit $tmp2605 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2599, $tmp2604);
bool $tmp2606 = $tmp2605.value;
if ($tmp2606) goto block5; else goto block6;
block5:;
// line 1429
frost$collections$Array* $tmp2607 = *(&local0);
frost$core$String$Index $tmp2608 = *(&local2);
frost$core$Bit $tmp2609 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2610 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2608, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2609);
frost$core$String* $tmp2611 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2610);
frost$collections$Array$add$frost$collections$Array$T($tmp2607, ((frost$core$Object*) $tmp2611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
// line 1430
goto block4;
block6:;
// line 1432
frost$core$Matcher* $tmp2612 = *(&local1);
frost$core$String$Index $tmp2613;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp2613, $tmp2612);
*(&local4) = $tmp2613;
// line 1433
frost$collections$Array* $tmp2614 = *(&local0);
frost$core$String$Index $tmp2615 = *(&local2);
frost$core$String$Index $tmp2616 = *(&local4);
frost$core$Bit $tmp2617 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2618 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2615, $tmp2616, $tmp2617);
frost$core$String* $tmp2619 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2618);
frost$collections$Array$add$frost$collections$Array$T($tmp2614, ((frost$core$Object*) $tmp2619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
// line 1434
frost$core$String$Index $tmp2620 = *(&local4);
frost$core$Int64 $tmp2621 = $tmp2620.value;
frost$core$Matcher* $tmp2622 = *(&local1);
frost$core$String$Index $tmp2623;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp2623, $tmp2622);
frost$core$Int64 $tmp2624 = $tmp2623.value;
frost$core$Int64 $tmp2625 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp2621, $tmp2624);
frost$core$String$Index $tmp2626 = frost$core$String$Index$init$frost$core$Int64($tmp2625);
*(&local2) = $tmp2626;
goto block3;
block4:;
// line 1436
frost$collections$Array* $tmp2627 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
frost$core$Matcher* $tmp2628 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$collections$Array* $tmp2629 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2627;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1449
frost$core$Int64 $tmp2630 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2631 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2630);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
return $tmp2631;

}
frost$core$Int64$nullable frost$core$String$get_asInt64$R$frost$core$Int64$Q(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
// line 1461
frost$core$Int64* $tmp2632 = &param0->_length;
frost$core$Int64 $tmp2633 = *$tmp2632;
frost$core$Int64 $tmp2634 = (frost$core$Int64) {0};
frost$core$Bit $tmp2635 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2633, $tmp2634);
bool $tmp2636 = $tmp2635.value;
if ($tmp2636) goto block1; else goto block2;
block1:;
// line 1462
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 1464
frost$core$Int64 $tmp2637 = (frost$core$Int64) {0};
*(&local0) = $tmp2637;
// line 1465
// line 1466
frost$core$Char8** $tmp2638 = &param0->data;
frost$core$Char8* $tmp2639 = *$tmp2638;
frost$core$Int64 $tmp2640 = (frost$core$Int64) {0};
int64_t $tmp2641 = $tmp2640.value;
frost$core$Char8 $tmp2642 = $tmp2639[$tmp2641];
frost$core$UInt8 $tmp2643 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2644 = frost$core$Char8$init$frost$core$UInt8($tmp2643);
frost$core$Bit $tmp2645 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2642, $tmp2644);
bool $tmp2646 = $tmp2645.value;
if ($tmp2646) goto block3; else goto block5;
block3:;
// line 1467
frost$core$Int64 $tmp2647 = (frost$core$Int64) {1};
*(&local1) = $tmp2647;
goto block4;
block5:;
// line 1
// line 1470
frost$core$Int64 $tmp2648 = (frost$core$Int64) {0};
*(&local1) = $tmp2648;
goto block4;
block4:;
// line 1472
frost$core$Int64 $tmp2649 = *(&local1);
frost$core$Int64* $tmp2650 = &param0->_length;
frost$core$Int64 $tmp2651 = *$tmp2650;
frost$core$Bit $tmp2652 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2653 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2649, $tmp2651, $tmp2652);
frost$core$Int64 $tmp2654 = $tmp2653.min;
*(&local2) = $tmp2654;
frost$core$Int64 $tmp2655 = $tmp2653.max;
frost$core$Bit $tmp2656 = $tmp2653.inclusive;
bool $tmp2657 = $tmp2656.value;
frost$core$Int64 $tmp2658 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2659 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2658);
if ($tmp2657) goto block9; else goto block10;
block9:;
int64_t $tmp2660 = $tmp2654.value;
int64_t $tmp2661 = $tmp2655.value;
bool $tmp2662 = $tmp2660 <= $tmp2661;
frost$core$Bit $tmp2663 = (frost$core$Bit) {$tmp2662};
bool $tmp2664 = $tmp2663.value;
if ($tmp2664) goto block6; else goto block7;
block10:;
int64_t $tmp2665 = $tmp2654.value;
int64_t $tmp2666 = $tmp2655.value;
bool $tmp2667 = $tmp2665 < $tmp2666;
frost$core$Bit $tmp2668 = (frost$core$Bit) {$tmp2667};
bool $tmp2669 = $tmp2668.value;
if ($tmp2669) goto block6; else goto block7;
block6:;
// line 1473
frost$core$Char8** $tmp2670 = &param0->data;
frost$core$Char8* $tmp2671 = *$tmp2670;
frost$core$Int64 $tmp2672 = *(&local2);
int64_t $tmp2673 = $tmp2672.value;
frost$core$Char8 $tmp2674 = $tmp2671[$tmp2673];
uint8_t $tmp2675 = $tmp2674.value;
frost$core$Int64 $tmp2676 = (frost$core$Int64) {((int64_t) $tmp2675)};
frost$core$Int64 $tmp2677 = (frost$core$Int64) {48};
int64_t $tmp2678 = $tmp2676.value;
int64_t $tmp2679 = $tmp2677.value;
int64_t $tmp2680 = $tmp2678 - $tmp2679;
frost$core$Int64 $tmp2681 = (frost$core$Int64) {$tmp2680};
*(&local3) = $tmp2681;
// line 1474
frost$core$Int64 $tmp2682 = *(&local3);
frost$core$Int64 $tmp2683 = (frost$core$Int64) {0};
int64_t $tmp2684 = $tmp2682.value;
int64_t $tmp2685 = $tmp2683.value;
bool $tmp2686 = $tmp2684 < $tmp2685;
frost$core$Bit $tmp2687 = (frost$core$Bit) {$tmp2686};
bool $tmp2688 = $tmp2687.value;
if ($tmp2688) goto block11; else goto block13;
block13:;
frost$core$Int64 $tmp2689 = *(&local3);
frost$core$Int64 $tmp2690 = (frost$core$Int64) {9};
int64_t $tmp2691 = $tmp2689.value;
int64_t $tmp2692 = $tmp2690.value;
bool $tmp2693 = $tmp2691 > $tmp2692;
frost$core$Bit $tmp2694 = (frost$core$Bit) {$tmp2693};
bool $tmp2695 = $tmp2694.value;
if ($tmp2695) goto block11; else goto block12;
block11:;
// line 1475
return ((frost$core$Int64$nullable) { .nonnull = false });
block12:;
// line 1477
frost$core$Int64 $tmp2696 = *(&local0);
frost$core$Int64 $tmp2697 = (frost$core$Int64) {10};
int64_t $tmp2698 = $tmp2696.value;
int64_t $tmp2699 = $tmp2697.value;
int64_t $tmp2700 = $tmp2698 * $tmp2699;
frost$core$Int64 $tmp2701 = (frost$core$Int64) {$tmp2700};
frost$core$Int64 $tmp2702 = *(&local3);
int64_t $tmp2703 = $tmp2701.value;
int64_t $tmp2704 = $tmp2702.value;
int64_t $tmp2705 = $tmp2703 + $tmp2704;
frost$core$Int64 $tmp2706 = (frost$core$Int64) {$tmp2705};
*(&local0) = $tmp2706;
goto block8;
block8:;
frost$core$Int64 $tmp2707 = *(&local2);
int64_t $tmp2708 = $tmp2655.value;
int64_t $tmp2709 = $tmp2707.value;
int64_t $tmp2710 = $tmp2708 - $tmp2709;
frost$core$Int64 $tmp2711 = (frost$core$Int64) {$tmp2710};
frost$core$UInt64 $tmp2712 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2711);
if ($tmp2657) goto block15; else goto block16;
block15:;
uint64_t $tmp2713 = $tmp2712.value;
uint64_t $tmp2714 = $tmp2659.value;
bool $tmp2715 = $tmp2713 >= $tmp2714;
frost$core$Bit $tmp2716 = (frost$core$Bit) {$tmp2715};
bool $tmp2717 = $tmp2716.value;
if ($tmp2717) goto block14; else goto block7;
block16:;
uint64_t $tmp2718 = $tmp2712.value;
uint64_t $tmp2719 = $tmp2659.value;
bool $tmp2720 = $tmp2718 > $tmp2719;
frost$core$Bit $tmp2721 = (frost$core$Bit) {$tmp2720};
bool $tmp2722 = $tmp2721.value;
if ($tmp2722) goto block14; else goto block7;
block14:;
int64_t $tmp2723 = $tmp2707.value;
int64_t $tmp2724 = $tmp2658.value;
int64_t $tmp2725 = $tmp2723 + $tmp2724;
frost$core$Int64 $tmp2726 = (frost$core$Int64) {$tmp2725};
*(&local2) = $tmp2726;
goto block6;
block7:;
// line 1479
frost$core$Char8** $tmp2727 = &param0->data;
frost$core$Char8* $tmp2728 = *$tmp2727;
frost$core$Int64 $tmp2729 = (frost$core$Int64) {0};
int64_t $tmp2730 = $tmp2729.value;
frost$core$Char8 $tmp2731 = $tmp2728[$tmp2730];
frost$core$UInt8 $tmp2732 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2733 = frost$core$Char8$init$frost$core$UInt8($tmp2732);
frost$core$Bit $tmp2734 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2731, $tmp2733);
bool $tmp2735 = $tmp2734.value;
if ($tmp2735) goto block17; else goto block18;
block17:;
// line 1480
frost$core$Int64 $tmp2736 = *(&local0);
frost$core$Int64 $tmp2737 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2736);
*(&local0) = $tmp2737;
goto block18;
block18:;
// line 1482
frost$core$Int64 $tmp2738 = *(&local0);
return ((frost$core$Int64$nullable) { $tmp2738, true });

}
frost$core$UInt64$nullable frost$core$String$get_asUInt64$R$frost$core$UInt64$Q(frost$core$String* param0) {

frost$core$UInt64 local0;
frost$core$Int64 local1;
frost$core$UInt64 local2;
// line 1493
frost$core$Int64* $tmp2739 = &param0->_length;
frost$core$Int64 $tmp2740 = *$tmp2739;
frost$core$Int64 $tmp2741 = (frost$core$Int64) {0};
frost$core$Bit $tmp2742 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2740, $tmp2741);
bool $tmp2743 = $tmp2742.value;
if ($tmp2743) goto block1; else goto block2;
block1:;
// line 1494
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 1496
frost$core$UInt64 $tmp2744 = (frost$core$UInt64) {0};
*(&local0) = $tmp2744;
// line 1497
frost$core$Int64 $tmp2745 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2746 = &param0->_length;
frost$core$Int64 $tmp2747 = *$tmp2746;
frost$core$Bit $tmp2748 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2749 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2745, $tmp2747, $tmp2748);
frost$core$Int64 $tmp2750 = $tmp2749.min;
*(&local1) = $tmp2750;
frost$core$Int64 $tmp2751 = $tmp2749.max;
frost$core$Bit $tmp2752 = $tmp2749.inclusive;
bool $tmp2753 = $tmp2752.value;
frost$core$Int64 $tmp2754 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2755 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2754);
if ($tmp2753) goto block6; else goto block7;
block6:;
int64_t $tmp2756 = $tmp2750.value;
int64_t $tmp2757 = $tmp2751.value;
bool $tmp2758 = $tmp2756 <= $tmp2757;
frost$core$Bit $tmp2759 = (frost$core$Bit) {$tmp2758};
bool $tmp2760 = $tmp2759.value;
if ($tmp2760) goto block3; else goto block4;
block7:;
int64_t $tmp2761 = $tmp2750.value;
int64_t $tmp2762 = $tmp2751.value;
bool $tmp2763 = $tmp2761 < $tmp2762;
frost$core$Bit $tmp2764 = (frost$core$Bit) {$tmp2763};
bool $tmp2765 = $tmp2764.value;
if ($tmp2765) goto block3; else goto block4;
block3:;
// line 1498
frost$core$Char8** $tmp2766 = &param0->data;
frost$core$Char8* $tmp2767 = *$tmp2766;
frost$core$Int64 $tmp2768 = *(&local1);
int64_t $tmp2769 = $tmp2768.value;
frost$core$Char8 $tmp2770 = $tmp2767[$tmp2769];
uint8_t $tmp2771 = $tmp2770.value;
frost$core$UInt64 $tmp2772 = (frost$core$UInt64) {((uint64_t) $tmp2771)};
frost$core$UInt64 $tmp2773 = (frost$core$UInt64) {48};
uint64_t $tmp2774 = $tmp2772.value;
uint64_t $tmp2775 = $tmp2773.value;
uint64_t $tmp2776 = $tmp2774 - $tmp2775;
frost$core$UInt64 $tmp2777 = (frost$core$UInt64) {$tmp2776};
*(&local2) = $tmp2777;
// line 1499
frost$core$UInt64 $tmp2778 = *(&local2);
frost$core$UInt64 $tmp2779 = (frost$core$UInt64) {0};
uint64_t $tmp2780 = $tmp2778.value;
uint64_t $tmp2781 = $tmp2779.value;
bool $tmp2782 = $tmp2780 < $tmp2781;
frost$core$Bit $tmp2783 = (frost$core$Bit) {$tmp2782};
bool $tmp2784 = $tmp2783.value;
if ($tmp2784) goto block8; else goto block10;
block10:;
frost$core$UInt64 $tmp2785 = *(&local2);
frost$core$UInt64 $tmp2786 = (frost$core$UInt64) {9};
uint64_t $tmp2787 = $tmp2785.value;
uint64_t $tmp2788 = $tmp2786.value;
bool $tmp2789 = $tmp2787 > $tmp2788;
frost$core$Bit $tmp2790 = (frost$core$Bit) {$tmp2789};
bool $tmp2791 = $tmp2790.value;
if ($tmp2791) goto block8; else goto block9;
block8:;
// line 1500
return ((frost$core$UInt64$nullable) { .nonnull = false });
block9:;
// line 1502
frost$core$UInt64 $tmp2792 = *(&local0);
frost$core$UInt64 $tmp2793 = (frost$core$UInt64) {10};
uint64_t $tmp2794 = $tmp2792.value;
uint64_t $tmp2795 = $tmp2793.value;
uint64_t $tmp2796 = $tmp2794 * $tmp2795;
frost$core$UInt64 $tmp2797 = (frost$core$UInt64) {$tmp2796};
frost$core$UInt64 $tmp2798 = *(&local2);
uint64_t $tmp2799 = $tmp2797.value;
uint64_t $tmp2800 = $tmp2798.value;
uint64_t $tmp2801 = $tmp2799 + $tmp2800;
frost$core$UInt64 $tmp2802 = (frost$core$UInt64) {$tmp2801};
*(&local0) = $tmp2802;
goto block5;
block5:;
frost$core$Int64 $tmp2803 = *(&local1);
int64_t $tmp2804 = $tmp2751.value;
int64_t $tmp2805 = $tmp2803.value;
int64_t $tmp2806 = $tmp2804 - $tmp2805;
frost$core$Int64 $tmp2807 = (frost$core$Int64) {$tmp2806};
frost$core$UInt64 $tmp2808 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2807);
if ($tmp2753) goto block12; else goto block13;
block12:;
uint64_t $tmp2809 = $tmp2808.value;
uint64_t $tmp2810 = $tmp2755.value;
bool $tmp2811 = $tmp2809 >= $tmp2810;
frost$core$Bit $tmp2812 = (frost$core$Bit) {$tmp2811};
bool $tmp2813 = $tmp2812.value;
if ($tmp2813) goto block11; else goto block4;
block13:;
uint64_t $tmp2814 = $tmp2808.value;
uint64_t $tmp2815 = $tmp2755.value;
bool $tmp2816 = $tmp2814 > $tmp2815;
frost$core$Bit $tmp2817 = (frost$core$Bit) {$tmp2816};
bool $tmp2818 = $tmp2817.value;
if ($tmp2818) goto block11; else goto block4;
block11:;
int64_t $tmp2819 = $tmp2803.value;
int64_t $tmp2820 = $tmp2754.value;
int64_t $tmp2821 = $tmp2819 + $tmp2820;
frost$core$Int64 $tmp2822 = (frost$core$Int64) {$tmp2821};
*(&local1) = $tmp2822;
goto block3;
block4:;
// line 1504
frost$core$UInt64 $tmp2823 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp2823, true });

}
frost$core$Real64$nullable frost$core$String$get_asReal64$R$frost$core$Real64$Q(frost$core$String* param0) {

// line 1515
frost$core$Real64 $tmp2824;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp2824, param0);
return ((frost$core$Real64$nullable) { $tmp2824, true });

}
frost$core$Int64 frost$core$String$get_hash$R$frost$core$Int64(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 1523
frost$core$Int64 $tmp2825 = (frost$core$Int64) {1};
*(&local0) = $tmp2825;
// line 1524
frost$core$Int64 $tmp2826 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2827 = &param0->_length;
frost$core$Int64 $tmp2828 = *$tmp2827;
frost$core$Bit $tmp2829 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2830 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2826, $tmp2828, $tmp2829);
frost$core$Int64 $tmp2831 = $tmp2830.min;
*(&local1) = $tmp2831;
frost$core$Int64 $tmp2832 = $tmp2830.max;
frost$core$Bit $tmp2833 = $tmp2830.inclusive;
bool $tmp2834 = $tmp2833.value;
frost$core$Int64 $tmp2835 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2836 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2835);
if ($tmp2834) goto block4; else goto block5;
block4:;
int64_t $tmp2837 = $tmp2831.value;
int64_t $tmp2838 = $tmp2832.value;
bool $tmp2839 = $tmp2837 <= $tmp2838;
frost$core$Bit $tmp2840 = (frost$core$Bit) {$tmp2839};
bool $tmp2841 = $tmp2840.value;
if ($tmp2841) goto block1; else goto block2;
block5:;
int64_t $tmp2842 = $tmp2831.value;
int64_t $tmp2843 = $tmp2832.value;
bool $tmp2844 = $tmp2842 < $tmp2843;
frost$core$Bit $tmp2845 = (frost$core$Bit) {$tmp2844};
bool $tmp2846 = $tmp2845.value;
if ($tmp2846) goto block1; else goto block2;
block1:;
// line 1525
frost$core$Int64 $tmp2847 = *(&local0);
frost$core$Int64 $tmp2848 = (frost$core$Int64) {101};
int64_t $tmp2849 = $tmp2847.value;
int64_t $tmp2850 = $tmp2848.value;
int64_t $tmp2851 = $tmp2849 * $tmp2850;
frost$core$Int64 $tmp2852 = (frost$core$Int64) {$tmp2851};
frost$core$Char8** $tmp2853 = &param0->data;
frost$core$Char8* $tmp2854 = *$tmp2853;
frost$core$Int64 $tmp2855 = *(&local1);
int64_t $tmp2856 = $tmp2855.value;
frost$core$Char8 $tmp2857 = $tmp2854[$tmp2856];
uint8_t $tmp2858 = $tmp2857.value;
frost$core$Int64 $tmp2859 = (frost$core$Int64) {((int64_t) $tmp2858)};
int64_t $tmp2860 = $tmp2852.value;
int64_t $tmp2861 = $tmp2859.value;
int64_t $tmp2862 = $tmp2860 + $tmp2861;
frost$core$Int64 $tmp2863 = (frost$core$Int64) {$tmp2862};
*(&local0) = $tmp2863;
goto block3;
block3:;
frost$core$Int64 $tmp2864 = *(&local1);
int64_t $tmp2865 = $tmp2832.value;
int64_t $tmp2866 = $tmp2864.value;
int64_t $tmp2867 = $tmp2865 - $tmp2866;
frost$core$Int64 $tmp2868 = (frost$core$Int64) {$tmp2867};
frost$core$UInt64 $tmp2869 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2868);
if ($tmp2834) goto block7; else goto block8;
block7:;
uint64_t $tmp2870 = $tmp2869.value;
uint64_t $tmp2871 = $tmp2836.value;
bool $tmp2872 = $tmp2870 >= $tmp2871;
frost$core$Bit $tmp2873 = (frost$core$Bit) {$tmp2872};
bool $tmp2874 = $tmp2873.value;
if ($tmp2874) goto block6; else goto block2;
block8:;
uint64_t $tmp2875 = $tmp2869.value;
uint64_t $tmp2876 = $tmp2836.value;
bool $tmp2877 = $tmp2875 > $tmp2876;
frost$core$Bit $tmp2878 = (frost$core$Bit) {$tmp2877};
bool $tmp2879 = $tmp2878.value;
if ($tmp2879) goto block6; else goto block2;
block6:;
int64_t $tmp2880 = $tmp2864.value;
int64_t $tmp2881 = $tmp2835.value;
int64_t $tmp2882 = $tmp2880 + $tmp2881;
frost$core$Int64 $tmp2883 = (frost$core$Int64) {$tmp2882};
*(&local1) = $tmp2883;
goto block1;
block2:;
// line 1536
frost$core$Int64 $tmp2884 = *(&local0);
return $tmp2884;

}

