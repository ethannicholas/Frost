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
typedef frost$collections$Iterator* (*$fn260)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn264)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn598)(frost$core$Object*);
typedef frost$core$String* (*$fn710)(frost$core$Object*);
typedef frost$core$Bit (*$fn786)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn795)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn820)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1336)(frost$core$Object*);
typedef frost$core$String* (*$fn1520)(frost$core$Object*);
typedef frost$core$Object* (*$fn2132)(frost$core$String*);
typedef frost$core$Object* (*$fn2134)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn2138)(frost$core$Object*);
typedef frost$core$String* (*$fn2145)(frost$core$Object*);
typedef frost$core$Object* (*$fn2211)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn2213)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2217)(frost$core$Object*);
typedef frost$core$String* (*$fn2225)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2546)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2599)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 612931044334107490, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 116, -8142968872510394027, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s903 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2064 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2585 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -286058843379027293, NULL };

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
frost$core$String$UTF8List* $tmp255 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp255, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp255)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
return ((frost$collections$ListView*) $tmp255);

}
frost$collections$Iterator* frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT(frost$core$String* param0) {

// line 467
frost$core$String$UTF16Iterator* $tmp256 = (frost$core$String$UTF16Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF16Iterator$class);
frost$core$String$UTF16Iterator$init$frost$core$String($tmp256, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp256)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
return ((frost$collections$Iterator*) $tmp256);

}
frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(frost$core$String* param0) {

// line 475
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
frost$core$Bit local1;
frost$core$Int64 local2;
frost$core$Bit local3;
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
if ($tmp423) goto block6; else goto block7;
block6:;
frost$core$Char8** $tmp424 = &param0->data;
frost$core$Char8* $tmp425 = *$tmp424;
frost$core$Int64 $tmp426 = *(&local0);
int64_t $tmp427 = $tmp426.value;
frost$core$Char8 $tmp428 = $tmp425[$tmp427];
frost$core$Bit $tmp429 = frost$core$Char8$isWhitespace$R$frost$core$Bit($tmp428);
*(&local1) = $tmp429;
goto block8;
block7:;
*(&local1) = $tmp422;
goto block8;
block8:;
frost$core$Bit $tmp430 = *(&local1);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block4; else goto block5;
block4:;
// line 530
frost$core$Int64 $tmp432 = *(&local0);
frost$core$Int64 $tmp433 = (frost$core$Int64) {1};
int64_t $tmp434 = $tmp432.value;
int64_t $tmp435 = $tmp433.value;
int64_t $tmp436 = $tmp434 + $tmp435;
frost$core$Int64 $tmp437 = (frost$core$Int64) {$tmp436};
*(&local0) = $tmp437;
goto block3;
block5:;
// line 533
frost$core$Int64* $tmp438 = &param0->_length;
frost$core$Int64 $tmp439 = *$tmp438;
frost$core$Int64 $tmp440 = (frost$core$Int64) {1};
int64_t $tmp441 = $tmp439.value;
int64_t $tmp442 = $tmp440.value;
int64_t $tmp443 = $tmp441 - $tmp442;
frost$core$Int64 $tmp444 = (frost$core$Int64) {$tmp443};
*(&local2) = $tmp444;
// line 534
goto block9;
block9:;
frost$core$Int64 $tmp445 = *(&local2);
frost$core$Int64 $tmp446 = *(&local0);
int64_t $tmp447 = $tmp445.value;
int64_t $tmp448 = $tmp446.value;
bool $tmp449 = $tmp447 >= $tmp448;
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp449};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block12; else goto block13;
block12:;
frost$core$Char8** $tmp452 = &param0->data;
frost$core$Char8* $tmp453 = *$tmp452;
frost$core$Int64 $tmp454 = *(&local2);
int64_t $tmp455 = $tmp454.value;
frost$core$Char8 $tmp456 = $tmp453[$tmp455];
frost$core$Bit $tmp457 = frost$core$Char8$isWhitespace$R$frost$core$Bit($tmp456);
*(&local3) = $tmp457;
goto block14;
block13:;
*(&local3) = $tmp450;
goto block14;
block14:;
frost$core$Bit $tmp458 = *(&local3);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block10; else goto block11;
block10:;
// line 535
frost$core$Int64 $tmp460 = *(&local2);
frost$core$Int64 $tmp461 = (frost$core$Int64) {1};
int64_t $tmp462 = $tmp460.value;
int64_t $tmp463 = $tmp461.value;
int64_t $tmp464 = $tmp462 - $tmp463;
frost$core$Int64 $tmp465 = (frost$core$Int64) {$tmp464};
*(&local2) = $tmp465;
goto block9;
block11:;
// line 538
frost$core$Int64 $tmp466 = *(&local0);
frost$core$String$Index $tmp467 = frost$core$String$Index$init$frost$core$Int64($tmp466);
frost$core$Int64 $tmp468 = *(&local2);
frost$core$String$Index $tmp469 = frost$core$String$Index$init$frost$core$Int64($tmp468);
frost$core$Bit $tmp470 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$String$Index$GT $tmp471 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp467, $tmp469, $tmp470);
frost$core$String* $tmp472 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp471);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
return $tmp472;

}
frost$core$String* frost$core$String$$ADD$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$Char8* local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 545
frost$core$Int64* $tmp473 = &param0->_length;
frost$core$Int64 $tmp474 = *$tmp473;
frost$core$Int64* $tmp475 = &param1->_length;
frost$core$Int64 $tmp476 = *$tmp475;
int64_t $tmp477 = $tmp474.value;
int64_t $tmp478 = $tmp476.value;
int64_t $tmp479 = $tmp477 + $tmp478;
frost$core$Int64 $tmp480 = (frost$core$Int64) {$tmp479};
int64_t $tmp481 = $tmp480.value;
frost$core$Char8* $tmp482 = ((frost$core$Char8*) frostAlloc($tmp481 * 1));
*(&local0) = $tmp482;
// line 546
frost$core$Int64 $tmp483 = (frost$core$Int64) {0};
frost$core$Int64* $tmp484 = &param0->_length;
frost$core$Int64 $tmp485 = *$tmp484;
frost$core$Bit $tmp486 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp487 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp483, $tmp485, $tmp486);
frost$core$Int64 $tmp488 = $tmp487.min;
*(&local1) = $tmp488;
frost$core$Int64 $tmp489 = $tmp487.max;
frost$core$Bit $tmp490 = $tmp487.inclusive;
bool $tmp491 = $tmp490.value;
frost$core$Int64 $tmp492 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp493 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp492);
if ($tmp491) goto block4; else goto block5;
block4:;
int64_t $tmp494 = $tmp488.value;
int64_t $tmp495 = $tmp489.value;
bool $tmp496 = $tmp494 <= $tmp495;
frost$core$Bit $tmp497 = (frost$core$Bit) {$tmp496};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block1; else goto block2;
block5:;
int64_t $tmp499 = $tmp488.value;
int64_t $tmp500 = $tmp489.value;
bool $tmp501 = $tmp499 < $tmp500;
frost$core$Bit $tmp502 = (frost$core$Bit) {$tmp501};
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block1; else goto block2;
block1:;
// line 547
frost$core$Char8* $tmp504 = *(&local0);
frost$core$Int64 $tmp505 = *(&local1);
frost$core$Char8** $tmp506 = &param0->data;
frost$core$Char8* $tmp507 = *$tmp506;
frost$core$Int64 $tmp508 = *(&local1);
int64_t $tmp509 = $tmp508.value;
frost$core$Char8 $tmp510 = $tmp507[$tmp509];
int64_t $tmp511 = $tmp505.value;
$tmp504[$tmp511] = $tmp510;
goto block3;
block3:;
frost$core$Int64 $tmp512 = *(&local1);
int64_t $tmp513 = $tmp489.value;
int64_t $tmp514 = $tmp512.value;
int64_t $tmp515 = $tmp513 - $tmp514;
frost$core$Int64 $tmp516 = (frost$core$Int64) {$tmp515};
frost$core$UInt64 $tmp517 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp516);
if ($tmp491) goto block7; else goto block8;
block7:;
uint64_t $tmp518 = $tmp517.value;
uint64_t $tmp519 = $tmp493.value;
bool $tmp520 = $tmp518 >= $tmp519;
frost$core$Bit $tmp521 = (frost$core$Bit) {$tmp520};
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block6; else goto block2;
block8:;
uint64_t $tmp523 = $tmp517.value;
uint64_t $tmp524 = $tmp493.value;
bool $tmp525 = $tmp523 > $tmp524;
frost$core$Bit $tmp526 = (frost$core$Bit) {$tmp525};
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block6; else goto block2;
block6:;
int64_t $tmp528 = $tmp512.value;
int64_t $tmp529 = $tmp492.value;
int64_t $tmp530 = $tmp528 + $tmp529;
frost$core$Int64 $tmp531 = (frost$core$Int64) {$tmp530};
*(&local1) = $tmp531;
goto block1;
block2:;
// line 549
frost$core$Int64 $tmp532 = (frost$core$Int64) {0};
frost$core$Int64* $tmp533 = &param1->_length;
frost$core$Int64 $tmp534 = *$tmp533;
frost$core$Bit $tmp535 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp536 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp532, $tmp534, $tmp535);
frost$core$Int64 $tmp537 = $tmp536.min;
*(&local2) = $tmp537;
frost$core$Int64 $tmp538 = $tmp536.max;
frost$core$Bit $tmp539 = $tmp536.inclusive;
bool $tmp540 = $tmp539.value;
frost$core$Int64 $tmp541 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp542 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp541);
if ($tmp540) goto block12; else goto block13;
block12:;
int64_t $tmp543 = $tmp537.value;
int64_t $tmp544 = $tmp538.value;
bool $tmp545 = $tmp543 <= $tmp544;
frost$core$Bit $tmp546 = (frost$core$Bit) {$tmp545};
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block9; else goto block10;
block13:;
int64_t $tmp548 = $tmp537.value;
int64_t $tmp549 = $tmp538.value;
bool $tmp550 = $tmp548 < $tmp549;
frost$core$Bit $tmp551 = (frost$core$Bit) {$tmp550};
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block9; else goto block10;
block9:;
// line 550
frost$core$Char8* $tmp553 = *(&local0);
frost$core$Int64* $tmp554 = &param0->_length;
frost$core$Int64 $tmp555 = *$tmp554;
frost$core$Int64 $tmp556 = *(&local2);
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557 + $tmp558;
frost$core$Int64 $tmp560 = (frost$core$Int64) {$tmp559};
frost$core$Char8** $tmp561 = &param1->data;
frost$core$Char8* $tmp562 = *$tmp561;
frost$core$Int64 $tmp563 = *(&local2);
int64_t $tmp564 = $tmp563.value;
frost$core$Char8 $tmp565 = $tmp562[$tmp564];
int64_t $tmp566 = $tmp560.value;
$tmp553[$tmp566] = $tmp565;
goto block11;
block11:;
frost$core$Int64 $tmp567 = *(&local2);
int64_t $tmp568 = $tmp538.value;
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568 - $tmp569;
frost$core$Int64 $tmp571 = (frost$core$Int64) {$tmp570};
frost$core$UInt64 $tmp572 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp571);
if ($tmp540) goto block15; else goto block16;
block15:;
uint64_t $tmp573 = $tmp572.value;
uint64_t $tmp574 = $tmp542.value;
bool $tmp575 = $tmp573 >= $tmp574;
frost$core$Bit $tmp576 = (frost$core$Bit) {$tmp575};
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block14; else goto block10;
block16:;
uint64_t $tmp578 = $tmp572.value;
uint64_t $tmp579 = $tmp542.value;
bool $tmp580 = $tmp578 > $tmp579;
frost$core$Bit $tmp581 = (frost$core$Bit) {$tmp580};
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block14; else goto block10;
block14:;
int64_t $tmp583 = $tmp567.value;
int64_t $tmp584 = $tmp541.value;
int64_t $tmp585 = $tmp583 + $tmp584;
frost$core$Int64 $tmp586 = (frost$core$Int64) {$tmp585};
*(&local2) = $tmp586;
goto block9;
block10:;
// line 552
frost$core$String* $tmp587 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp588 = *(&local0);
frost$core$Int64* $tmp589 = &param0->_length;
frost$core$Int64 $tmp590 = *$tmp589;
frost$core$Int64* $tmp591 = &param1->_length;
frost$core$Int64 $tmp592 = *$tmp591;
int64_t $tmp593 = $tmp590.value;
int64_t $tmp594 = $tmp592.value;
int64_t $tmp595 = $tmp593 + $tmp594;
frost$core$Int64 $tmp596 = (frost$core$Int64) {$tmp595};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp587, $tmp588, $tmp596);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
return $tmp587;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$R$frost$core$String(frost$core$String* param0, frost$core$Object* param1) {

// line 560
$fn598 $tmp597 = ($fn598) param1->$class->vtable[0];
frost$core$String* $tmp599 = $tmp597(param1);
frost$core$String* $tmp600 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp599);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
return $tmp600;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp601 = (frost$core$Int64) {0};
int64_t $tmp602 = param1.value;
int64_t $tmp603 = $tmp601.value;
bool $tmp604 = $tmp602 >= $tmp603;
frost$core$Bit $tmp605 = (frost$core$Bit) {$tmp604};
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp607 = (frost$core$Int64) {567};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s608, $tmp607, &$s609);
abort(); // unreachable
block1:;
// line 568
frost$core$MutableString* $tmp610 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp610);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$core$MutableString* $tmp611 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local0) = $tmp610;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// line 569
frost$core$Int64 $tmp612 = (frost$core$Int64) {0};
frost$core$Bit $tmp613 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp614 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp612, param1, $tmp613);
frost$core$Int64 $tmp615 = $tmp614.min;
*(&local1) = $tmp615;
frost$core$Int64 $tmp616 = $tmp614.max;
frost$core$Bit $tmp617 = $tmp614.inclusive;
bool $tmp618 = $tmp617.value;
frost$core$Int64 $tmp619 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp620 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp619);
if ($tmp618) goto block6; else goto block7;
block6:;
int64_t $tmp621 = $tmp615.value;
int64_t $tmp622 = $tmp616.value;
bool $tmp623 = $tmp621 <= $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block3; else goto block4;
block7:;
int64_t $tmp626 = $tmp615.value;
int64_t $tmp627 = $tmp616.value;
bool $tmp628 = $tmp626 < $tmp627;
frost$core$Bit $tmp629 = (frost$core$Bit) {$tmp628};
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block3; else goto block4;
block3:;
// line 570
frost$core$MutableString* $tmp631 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp631, param0);
goto block5;
block5:;
frost$core$Int64 $tmp632 = *(&local1);
int64_t $tmp633 = $tmp616.value;
int64_t $tmp634 = $tmp632.value;
int64_t $tmp635 = $tmp633 - $tmp634;
frost$core$Int64 $tmp636 = (frost$core$Int64) {$tmp635};
frost$core$UInt64 $tmp637 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp636);
if ($tmp618) goto block9; else goto block10;
block9:;
uint64_t $tmp638 = $tmp637.value;
uint64_t $tmp639 = $tmp620.value;
bool $tmp640 = $tmp638 >= $tmp639;
frost$core$Bit $tmp641 = (frost$core$Bit) {$tmp640};
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block8; else goto block4;
block10:;
uint64_t $tmp643 = $tmp637.value;
uint64_t $tmp644 = $tmp620.value;
bool $tmp645 = $tmp643 > $tmp644;
frost$core$Bit $tmp646 = (frost$core$Bit) {$tmp645};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block8; else goto block4;
block8:;
int64_t $tmp648 = $tmp632.value;
int64_t $tmp649 = $tmp619.value;
int64_t $tmp650 = $tmp648 + $tmp649;
frost$core$Int64 $tmp651 = (frost$core$Int64) {$tmp650};
*(&local1) = $tmp651;
goto block3;
block4:;
// line 572
frost$core$MutableString* $tmp652 = *(&local0);
frost$core$String* $tmp653 = frost$core$MutableString$finish$R$frost$core$String($tmp652);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$MutableString* $tmp654 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp653;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int64$frost$core$String$R$frost$core$String(frost$core$Int64 param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp655 = (frost$core$Int64) {0};
int64_t $tmp656 = param0.value;
int64_t $tmp657 = $tmp655.value;
bool $tmp658 = $tmp656 >= $tmp657;
frost$core$Bit $tmp659 = (frost$core$Bit) {$tmp658};
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp661 = (frost$core$Int64) {580};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s662, $tmp661, &$s663);
abort(); // unreachable
block1:;
// line 581
frost$core$MutableString* $tmp664 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp664);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
frost$core$MutableString* $tmp665 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local0) = $tmp664;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
// line 582
frost$core$Int64 $tmp666 = (frost$core$Int64) {0};
frost$core$Bit $tmp667 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp668 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp666, param0, $tmp667);
frost$core$Int64 $tmp669 = $tmp668.min;
*(&local1) = $tmp669;
frost$core$Int64 $tmp670 = $tmp668.max;
frost$core$Bit $tmp671 = $tmp668.inclusive;
bool $tmp672 = $tmp671.value;
frost$core$Int64 $tmp673 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp674 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp673);
if ($tmp672) goto block6; else goto block7;
block6:;
int64_t $tmp675 = $tmp669.value;
int64_t $tmp676 = $tmp670.value;
bool $tmp677 = $tmp675 <= $tmp676;
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677};
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block3; else goto block4;
block7:;
int64_t $tmp680 = $tmp669.value;
int64_t $tmp681 = $tmp670.value;
bool $tmp682 = $tmp680 < $tmp681;
frost$core$Bit $tmp683 = (frost$core$Bit) {$tmp682};
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block3; else goto block4;
block3:;
// line 583
frost$core$MutableString* $tmp685 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp685, param1);
goto block5;
block5:;
frost$core$Int64 $tmp686 = *(&local1);
int64_t $tmp687 = $tmp670.value;
int64_t $tmp688 = $tmp686.value;
int64_t $tmp689 = $tmp687 - $tmp688;
frost$core$Int64 $tmp690 = (frost$core$Int64) {$tmp689};
frost$core$UInt64 $tmp691 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp690);
if ($tmp672) goto block9; else goto block10;
block9:;
uint64_t $tmp692 = $tmp691.value;
uint64_t $tmp693 = $tmp674.value;
bool $tmp694 = $tmp692 >= $tmp693;
frost$core$Bit $tmp695 = (frost$core$Bit) {$tmp694};
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block8; else goto block4;
block10:;
uint64_t $tmp697 = $tmp691.value;
uint64_t $tmp698 = $tmp674.value;
bool $tmp699 = $tmp697 > $tmp698;
frost$core$Bit $tmp700 = (frost$core$Bit) {$tmp699};
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block8; else goto block4;
block8:;
int64_t $tmp702 = $tmp686.value;
int64_t $tmp703 = $tmp673.value;
int64_t $tmp704 = $tmp702 + $tmp703;
frost$core$Int64 $tmp705 = (frost$core$Int64) {$tmp704};
*(&local1) = $tmp705;
goto block3;
block4:;
// line 585
frost$core$MutableString* $tmp706 = *(&local0);
frost$core$String* $tmp707 = frost$core$MutableString$finish$R$frost$core$String($tmp706);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$core$MutableString* $tmp708 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp707;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(frost$core$Object* param0, frost$core$String* param1) {

// line 594
$fn710 $tmp709 = ($fn710) param0->$class->vtable[0];
frost$core$String* $tmp711 = $tmp709(param0);
frost$core$String* $tmp712 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp711, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
return $tmp712;

}
frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 607
frost$core$Int64* $tmp713 = &param0->_length;
frost$core$Int64 $tmp714 = *$tmp713;
frost$core$Int64* $tmp715 = &param1->_length;
frost$core$Int64 $tmp716 = *$tmp715;
int64_t $tmp717 = $tmp714.value;
int64_t $tmp718 = $tmp716.value;
bool $tmp719 = $tmp717 != $tmp718;
frost$core$Bit $tmp720 = (frost$core$Bit) {$tmp719};
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block1; else goto block2;
block1:;
// line 608
frost$core$Bit $tmp722 = frost$core$Bit$init$builtin_bit(false);
return $tmp722;
block2:;
// line 610
frost$core$Int64 $tmp723 = (frost$core$Int64) {0};
frost$core$Int64* $tmp724 = &param0->_length;
frost$core$Int64 $tmp725 = *$tmp724;
frost$core$Bit $tmp726 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp727 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp723, $tmp725, $tmp726);
frost$core$Int64 $tmp728 = $tmp727.min;
*(&local0) = $tmp728;
frost$core$Int64 $tmp729 = $tmp727.max;
frost$core$Bit $tmp730 = $tmp727.inclusive;
bool $tmp731 = $tmp730.value;
frost$core$Int64 $tmp732 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp733 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp732);
if ($tmp731) goto block6; else goto block7;
block6:;
int64_t $tmp734 = $tmp728.value;
int64_t $tmp735 = $tmp729.value;
bool $tmp736 = $tmp734 <= $tmp735;
frost$core$Bit $tmp737 = (frost$core$Bit) {$tmp736};
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block3; else goto block4;
block7:;
int64_t $tmp739 = $tmp728.value;
int64_t $tmp740 = $tmp729.value;
bool $tmp741 = $tmp739 < $tmp740;
frost$core$Bit $tmp742 = (frost$core$Bit) {$tmp741};
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block3; else goto block4;
block3:;
// line 611
frost$core$Char8** $tmp744 = &param0->data;
frost$core$Char8* $tmp745 = *$tmp744;
frost$core$Int64 $tmp746 = *(&local0);
int64_t $tmp747 = $tmp746.value;
frost$core$Char8 $tmp748 = $tmp745[$tmp747];
frost$core$Char8** $tmp749 = &param1->data;
frost$core$Char8* $tmp750 = *$tmp749;
frost$core$Int64 $tmp751 = *(&local0);
int64_t $tmp752 = $tmp751.value;
frost$core$Char8 $tmp753 = $tmp750[$tmp752];
frost$core$Bit $tmp754 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp748, $tmp753);
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block8; else goto block9;
block8:;
// line 612
frost$core$Bit $tmp756 = frost$core$Bit$init$builtin_bit(false);
return $tmp756;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp757 = *(&local0);
int64_t $tmp758 = $tmp729.value;
int64_t $tmp759 = $tmp757.value;
int64_t $tmp760 = $tmp758 - $tmp759;
frost$core$Int64 $tmp761 = (frost$core$Int64) {$tmp760};
frost$core$UInt64 $tmp762 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp761);
if ($tmp731) goto block11; else goto block12;
block11:;
uint64_t $tmp763 = $tmp762.value;
uint64_t $tmp764 = $tmp733.value;
bool $tmp765 = $tmp763 >= $tmp764;
frost$core$Bit $tmp766 = (frost$core$Bit) {$tmp765};
bool $tmp767 = $tmp766.value;
if ($tmp767) goto block10; else goto block4;
block12:;
uint64_t $tmp768 = $tmp762.value;
uint64_t $tmp769 = $tmp733.value;
bool $tmp770 = $tmp768 > $tmp769;
frost$core$Bit $tmp771 = (frost$core$Bit) {$tmp770};
bool $tmp772 = $tmp771.value;
if ($tmp772) goto block10; else goto block4;
block10:;
int64_t $tmp773 = $tmp757.value;
int64_t $tmp774 = $tmp732.value;
int64_t $tmp775 = $tmp773 + $tmp774;
frost$core$Int64 $tmp776 = (frost$core$Int64) {$tmp775};
*(&local0) = $tmp776;
goto block3;
block4:;
// line 615
frost$core$Bit $tmp777 = frost$core$Bit$init$builtin_bit(true);
return $tmp777;

}
frost$core$Bit frost$core$String$$GT$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$Bit local2;
frost$core$Char32 local3;
frost$core$Char32 local4;
// line 626
frost$core$String$Index $tmp778 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp778;
// line 627
frost$core$String$Index $tmp779 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local1) = $tmp779;
// line 628
goto block1;
block1:;
frost$core$String$Index $tmp780 = *(&local0);
frost$core$String$Index$wrapper* $tmp781;
$tmp781 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp781->value = $tmp780;
frost$core$String$Index $tmp782 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp783;
$tmp783 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp783->value = $tmp782;
ITable* $tmp784 = ((frost$core$Comparable*) $tmp781)->$class->itable;
while ($tmp784->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp784 = $tmp784->next;
}
$fn786 $tmp785 = $tmp784->methods[1];
frost$core$Bit $tmp787 = $tmp785(((frost$core$Comparable*) $tmp781), ((frost$core$Comparable*) $tmp783));
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block4; else goto block5;
block4:;
frost$core$String$Index $tmp789 = *(&local1);
frost$core$String$Index$wrapper* $tmp790;
$tmp790 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp790->value = $tmp789;
frost$core$String$Index $tmp791 = frost$core$String$get_end$R$frost$core$String$Index(param1);
frost$core$String$Index$wrapper* $tmp792;
$tmp792 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp792->value = $tmp791;
ITable* $tmp793 = ((frost$core$Comparable*) $tmp790)->$class->itable;
while ($tmp793->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp793 = $tmp793->next;
}
$fn795 $tmp794 = $tmp793->methods[1];
frost$core$Bit $tmp796 = $tmp794(((frost$core$Comparable*) $tmp790), ((frost$core$Comparable*) $tmp792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp792)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp790)));
*(&local2) = $tmp796;
goto block6;
block5:;
*(&local2) = $tmp787;
goto block6;
block6:;
frost$core$Bit $tmp797 = *(&local2);
bool $tmp798 = $tmp797.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp783)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp781)));
if ($tmp798) goto block2; else goto block3;
block2:;
// line 629
frost$core$String$Index $tmp799 = *(&local0);
frost$core$Char32 $tmp800 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp799);
*(&local3) = $tmp800;
// line 630
frost$core$String$Index $tmp801 = *(&local1);
frost$core$Char32 $tmp802 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp801);
*(&local4) = $tmp802;
// line 631
frost$core$Char32 $tmp803 = *(&local3);
frost$core$Char32 $tmp804 = *(&local4);
frost$core$Bit $tmp805 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp803, $tmp804);
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block7; else goto block8;
block7:;
// line 632
frost$core$String$Index $tmp807 = *(&local0);
frost$core$String$Index $tmp808 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp807);
*(&local0) = $tmp808;
// line 633
frost$core$String$Index $tmp809 = *(&local1);
frost$core$String$Index $tmp810 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp809);
*(&local1) = $tmp810;
// line 634
goto block1;
block8:;
// line 636
frost$core$Char32 $tmp811 = *(&local3);
frost$core$Char32 $tmp812 = *(&local4);
frost$core$Bit $tmp813 = frost$core$Char32$$GT$frost$core$Char32$R$frost$core$Bit($tmp811, $tmp812);
return $tmp813;
block3:;
// line 638
frost$core$String$Index $tmp814 = *(&local0);
frost$core$String$Index$wrapper* $tmp815;
$tmp815 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp815->value = $tmp814;
frost$core$String$Index $tmp816 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp817;
$tmp817 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp817->value = $tmp816;
ITable* $tmp818 = ((frost$core$Equatable*) $tmp815)->$class->itable;
while ($tmp818->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp818 = $tmp818->next;
}
$fn820 $tmp819 = $tmp818->methods[1];
frost$core$Bit $tmp821 = $tmp819(((frost$core$Equatable*) $tmp815), ((frost$core$Equatable*) $tmp817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp817)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp815)));
return $tmp821;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// line 645
frost$core$Int64 $tmp822 = param1.value;
*(&local0) = $tmp822;
// line 646
frost$core$Char8** $tmp823 = &param0->data;
frost$core$Char8* $tmp824 = *$tmp823;
frost$core$Int64 $tmp825 = *(&local0);
int64_t $tmp826 = $tmp825.value;
frost$core$Char8 $tmp827 = $tmp824[$tmp826];
*(&local1) = $tmp827;
// line 647
frost$core$Char8 $tmp828 = *(&local1);
frost$core$Int32 $tmp829 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp828);
*(&local2) = $tmp829;
// line 648
frost$core$Char8 $tmp830 = *(&local1);
uint8_t $tmp831 = $tmp830.value;
int64_t $tmp832 = ((int64_t) $tmp831) & 255;
bool $tmp833 = $tmp832 < 192;
frost$core$Bit $tmp834 = frost$core$Bit$init$builtin_bit($tmp833);
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block1; else goto block2;
block1:;
// line 649
frost$core$Int32 $tmp836 = *(&local2);
frost$core$Char32 $tmp837 = frost$core$Char32$init$frost$core$Int32($tmp836);
return $tmp837;
block2:;
// line 651
frost$core$Char8 $tmp838 = *(&local1);
uint8_t $tmp839 = $tmp838.value;
int64_t $tmp840 = ((int64_t) $tmp839) & 255;
bool $tmp841 = $tmp840 < 224;
frost$core$Bit $tmp842 = frost$core$Bit$init$builtin_bit($tmp841);
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block3; else goto block4;
block3:;
// line 652
frost$core$Int64 $tmp844 = *(&local0);
frost$core$Int64 $tmp845 = (frost$core$Int64) {1};
int64_t $tmp846 = $tmp844.value;
int64_t $tmp847 = $tmp845.value;
int64_t $tmp848 = $tmp846 + $tmp847;
frost$core$Int64 $tmp849 = (frost$core$Int64) {$tmp848};
frost$core$Int64* $tmp850 = &param0->_length;
frost$core$Int64 $tmp851 = *$tmp850;
int64_t $tmp852 = $tmp849.value;
int64_t $tmp853 = $tmp851.value;
bool $tmp854 = $tmp852 < $tmp853;
frost$core$Bit $tmp855 = (frost$core$Bit) {$tmp854};
bool $tmp856 = $tmp855.value;
if ($tmp856) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp857 = (frost$core$Int64) {652};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s858, $tmp857);
abort(); // unreachable
block5:;
// line 653
frost$core$Int32 $tmp859 = *(&local2);
frost$core$Int32 $tmp860 = (frost$core$Int32) {31};
frost$core$Int32 $tmp861 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp859, $tmp860);
frost$core$Int32 $tmp862 = (frost$core$Int32) {6};
frost$core$Int32 $tmp863 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp861, $tmp862);
frost$core$Char8** $tmp864 = &param0->data;
frost$core$Char8* $tmp865 = *$tmp864;
frost$core$Int64 $tmp866 = *(&local0);
frost$core$Int64 $tmp867 = (frost$core$Int64) {1};
int64_t $tmp868 = $tmp866.value;
int64_t $tmp869 = $tmp867.value;
int64_t $tmp870 = $tmp868 + $tmp869;
frost$core$Int64 $tmp871 = (frost$core$Int64) {$tmp870};
int64_t $tmp872 = $tmp871.value;
frost$core$Char8 $tmp873 = $tmp865[$tmp872];
frost$core$Int32 $tmp874 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp873);
frost$core$Int32 $tmp875 = (frost$core$Int32) {63};
frost$core$Int32 $tmp876 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp874, $tmp875);
int32_t $tmp877 = $tmp863.value;
int32_t $tmp878 = $tmp876.value;
int32_t $tmp879 = $tmp877 + $tmp878;
frost$core$Int32 $tmp880 = (frost$core$Int32) {$tmp879};
*(&local2) = $tmp880;
// line 654
frost$core$Int32 $tmp881 = *(&local2);
frost$core$Char32 $tmp882 = frost$core$Char32$init$frost$core$Int32($tmp881);
return $tmp882;
block4:;
// line 656
frost$core$Char8 $tmp883 = *(&local1);
uint8_t $tmp884 = $tmp883.value;
int64_t $tmp885 = ((int64_t) $tmp884) & 255;
bool $tmp886 = $tmp885 < 240;
frost$core$Bit $tmp887 = frost$core$Bit$init$builtin_bit($tmp886);
bool $tmp888 = $tmp887.value;
if ($tmp888) goto block7; else goto block8;
block7:;
// line 657
frost$core$Int64 $tmp889 = *(&local0);
frost$core$Int64 $tmp890 = (frost$core$Int64) {2};
int64_t $tmp891 = $tmp889.value;
int64_t $tmp892 = $tmp890.value;
int64_t $tmp893 = $tmp891 + $tmp892;
frost$core$Int64 $tmp894 = (frost$core$Int64) {$tmp893};
frost$core$Int64* $tmp895 = &param0->_length;
frost$core$Int64 $tmp896 = *$tmp895;
int64_t $tmp897 = $tmp894.value;
int64_t $tmp898 = $tmp896.value;
bool $tmp899 = $tmp897 < $tmp898;
frost$core$Bit $tmp900 = (frost$core$Bit) {$tmp899};
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp902 = (frost$core$Int64) {657};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s903, $tmp902);
abort(); // unreachable
block9:;
// line 658
frost$core$Int32 $tmp904 = *(&local2);
frost$core$Int32 $tmp905 = (frost$core$Int32) {15};
frost$core$Int32 $tmp906 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp904, $tmp905);
frost$core$Int32 $tmp907 = (frost$core$Int32) {12};
frost$core$Int32 $tmp908 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp906, $tmp907);
frost$core$Char8** $tmp909 = &param0->data;
frost$core$Char8* $tmp910 = *$tmp909;
frost$core$Int64 $tmp911 = *(&local0);
frost$core$Int64 $tmp912 = (frost$core$Int64) {1};
int64_t $tmp913 = $tmp911.value;
int64_t $tmp914 = $tmp912.value;
int64_t $tmp915 = $tmp913 + $tmp914;
frost$core$Int64 $tmp916 = (frost$core$Int64) {$tmp915};
int64_t $tmp917 = $tmp916.value;
frost$core$Char8 $tmp918 = $tmp910[$tmp917];
frost$core$Int32 $tmp919 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp918);
frost$core$Int32 $tmp920 = (frost$core$Int32) {63};
frost$core$Int32 $tmp921 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp919, $tmp920);
frost$core$Int32 $tmp922 = (frost$core$Int32) {6};
frost$core$Int32 $tmp923 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp921, $tmp922);
int32_t $tmp924 = $tmp908.value;
int32_t $tmp925 = $tmp923.value;
int32_t $tmp926 = $tmp924 + $tmp925;
frost$core$Int32 $tmp927 = (frost$core$Int32) {$tmp926};
frost$core$Char8** $tmp928 = &param0->data;
frost$core$Char8* $tmp929 = *$tmp928;
frost$core$Int64 $tmp930 = *(&local0);
frost$core$Int64 $tmp931 = (frost$core$Int64) {2};
int64_t $tmp932 = $tmp930.value;
int64_t $tmp933 = $tmp931.value;
int64_t $tmp934 = $tmp932 + $tmp933;
frost$core$Int64 $tmp935 = (frost$core$Int64) {$tmp934};
int64_t $tmp936 = $tmp935.value;
frost$core$Char8 $tmp937 = $tmp929[$tmp936];
frost$core$Int32 $tmp938 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp937);
frost$core$Int32 $tmp939 = (frost$core$Int32) {63};
frost$core$Int32 $tmp940 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp938, $tmp939);
int32_t $tmp941 = $tmp927.value;
int32_t $tmp942 = $tmp940.value;
int32_t $tmp943 = $tmp941 + $tmp942;
frost$core$Int32 $tmp944 = (frost$core$Int32) {$tmp943};
*(&local2) = $tmp944;
// line 660
frost$core$Int32 $tmp945 = *(&local2);
frost$core$Char32 $tmp946 = frost$core$Char32$init$frost$core$Int32($tmp945);
return $tmp946;
block8:;
// line 662
frost$core$Int64 $tmp947 = *(&local0);
frost$core$Int64 $tmp948 = (frost$core$Int64) {3};
int64_t $tmp949 = $tmp947.value;
int64_t $tmp950 = $tmp948.value;
int64_t $tmp951 = $tmp949 + $tmp950;
frost$core$Int64 $tmp952 = (frost$core$Int64) {$tmp951};
frost$core$Int64* $tmp953 = &param0->_length;
frost$core$Int64 $tmp954 = *$tmp953;
int64_t $tmp955 = $tmp952.value;
int64_t $tmp956 = $tmp954.value;
bool $tmp957 = $tmp955 < $tmp956;
frost$core$Bit $tmp958 = (frost$core$Bit) {$tmp957};
bool $tmp959 = $tmp958.value;
if ($tmp959) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp960 = (frost$core$Int64) {662};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s961, $tmp960);
abort(); // unreachable
block11:;
// line 663
frost$core$Int32 $tmp962 = *(&local2);
frost$core$Int32 $tmp963 = (frost$core$Int32) {7};
frost$core$Int32 $tmp964 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp962, $tmp963);
frost$core$Int32 $tmp965 = (frost$core$Int32) {18};
frost$core$Int32 $tmp966 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp964, $tmp965);
frost$core$Char8** $tmp967 = &param0->data;
frost$core$Char8* $tmp968 = *$tmp967;
frost$core$Int64 $tmp969 = *(&local0);
frost$core$Int64 $tmp970 = (frost$core$Int64) {1};
int64_t $tmp971 = $tmp969.value;
int64_t $tmp972 = $tmp970.value;
int64_t $tmp973 = $tmp971 + $tmp972;
frost$core$Int64 $tmp974 = (frost$core$Int64) {$tmp973};
int64_t $tmp975 = $tmp974.value;
frost$core$Char8 $tmp976 = $tmp968[$tmp975];
frost$core$Int32 $tmp977 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp976);
frost$core$Int32 $tmp978 = (frost$core$Int32) {63};
frost$core$Int32 $tmp979 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp977, $tmp978);
frost$core$Int32 $tmp980 = (frost$core$Int32) {12};
frost$core$Int32 $tmp981 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp979, $tmp980);
int32_t $tmp982 = $tmp966.value;
int32_t $tmp983 = $tmp981.value;
int32_t $tmp984 = $tmp982 + $tmp983;
frost$core$Int32 $tmp985 = (frost$core$Int32) {$tmp984};
frost$core$Char8** $tmp986 = &param0->data;
frost$core$Char8* $tmp987 = *$tmp986;
frost$core$Int64 $tmp988 = *(&local0);
frost$core$Int64 $tmp989 = (frost$core$Int64) {2};
int64_t $tmp990 = $tmp988.value;
int64_t $tmp991 = $tmp989.value;
int64_t $tmp992 = $tmp990 + $tmp991;
frost$core$Int64 $tmp993 = (frost$core$Int64) {$tmp992};
int64_t $tmp994 = $tmp993.value;
frost$core$Char8 $tmp995 = $tmp987[$tmp994];
frost$core$Int32 $tmp996 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp995);
frost$core$Int32 $tmp997 = (frost$core$Int32) {63};
frost$core$Int32 $tmp998 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp996, $tmp997);
frost$core$Int32 $tmp999 = (frost$core$Int32) {6};
frost$core$Int32 $tmp1000 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp998, $tmp999);
int32_t $tmp1001 = $tmp985.value;
int32_t $tmp1002 = $tmp1000.value;
int32_t $tmp1003 = $tmp1001 + $tmp1002;
frost$core$Int32 $tmp1004 = (frost$core$Int32) {$tmp1003};
frost$core$Char8** $tmp1005 = &param0->data;
frost$core$Char8* $tmp1006 = *$tmp1005;
frost$core$Int64 $tmp1007 = *(&local0);
frost$core$Int64 $tmp1008 = (frost$core$Int64) {3};
int64_t $tmp1009 = $tmp1007.value;
int64_t $tmp1010 = $tmp1008.value;
int64_t $tmp1011 = $tmp1009 + $tmp1010;
frost$core$Int64 $tmp1012 = (frost$core$Int64) {$tmp1011};
int64_t $tmp1013 = $tmp1012.value;
frost$core$Char8 $tmp1014 = $tmp1006[$tmp1013];
frost$core$Int32 $tmp1015 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1014);
frost$core$Int32 $tmp1016 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1017 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1015, $tmp1016);
int32_t $tmp1018 = $tmp1004.value;
int32_t $tmp1019 = $tmp1017.value;
int32_t $tmp1020 = $tmp1018 + $tmp1019;
frost$core$Int32 $tmp1021 = (frost$core$Int32) {$tmp1020};
*(&local2) = $tmp1021;
// line 666
frost$core$Int32 $tmp1022 = *(&local2);
frost$core$Char32 $tmp1023 = frost$core$Char32$init$frost$core$Int32($tmp1022);
return $tmp1023;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32(frost$core$String* param0, frost$core$Int64 param1) {

// line 675
frost$core$String$Index $tmp1024 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$String$Index $tmp1025 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1024, param1);
frost$core$Char32 $tmp1026 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp1025);
return $tmp1026;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
// line 688
frost$core$String$Index $tmp1027 = param1.max;
frost$core$Int64 $tmp1028 = $tmp1027.value;
frost$core$String$Index $tmp1029 = param1.min;
frost$core$Int64 $tmp1030 = $tmp1029.value;
int64_t $tmp1031 = $tmp1028.value;
int64_t $tmp1032 = $tmp1030.value;
int64_t $tmp1033 = $tmp1031 - $tmp1032;
frost$core$Int64 $tmp1034 = (frost$core$Int64) {$tmp1033};
*(&local0) = $tmp1034;
// line 689
frost$core$Bit $tmp1035 = param1.inclusive;
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block1; else goto block2;
block1:;
// line 690
frost$core$Int64 $tmp1037 = *(&local0);
frost$core$Int64 $tmp1038 = (frost$core$Int64) {1};
int64_t $tmp1039 = $tmp1037.value;
int64_t $tmp1040 = $tmp1038.value;
int64_t $tmp1041 = $tmp1039 + $tmp1040;
frost$core$Int64 $tmp1042 = (frost$core$Int64) {$tmp1041};
*(&local0) = $tmp1042;
goto block2;
block2:;
// line 692
frost$core$String* $tmp1043 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8** $tmp1044 = &param0->data;
frost$core$Char8* $tmp1045 = *$tmp1044;
frost$core$String$Index $tmp1046 = param1.min;
frost$core$Int64 $tmp1047 = $tmp1046.value;
int64_t $tmp1048 = $tmp1047.value;
frost$core$Char8* $tmp1049 = $tmp1045 + $tmp1048;
frost$core$Int64 $tmp1050 = *(&local0);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$frost$core$String($tmp1043, $tmp1049, $tmp1050, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
return $tmp1043;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$Bit local1;
frost$core$String$Index local2;
// line 708
// line 709
frost$core$String$Index$nullable $tmp1051 = param1.min;
frost$core$Bit $tmp1052 = frost$core$Bit$init$builtin_bit($tmp1051.nonnull);
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block1; else goto block3;
block1:;
// line 710
frost$core$String$Index$nullable $tmp1054 = param1.min;
*(&local0) = ((frost$core$String$Index) $tmp1054.value);
goto block2;
block3:;
// line 1
// line 713
frost$core$String$Index $tmp1055 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1055;
goto block2;
block2:;
// line 716
frost$core$Bit $tmp1056 = param1.inclusive;
*(&local1) = $tmp1056;
// line 717
// line 718
frost$core$String$Index$nullable $tmp1057 = param1.max;
frost$core$Bit $tmp1058 = frost$core$Bit$init$builtin_bit($tmp1057.nonnull);
bool $tmp1059 = $tmp1058.value;
if ($tmp1059) goto block4; else goto block6;
block4:;
// line 719
frost$core$String$Index$nullable $tmp1060 = param1.max;
*(&local2) = ((frost$core$String$Index) $tmp1060.value);
goto block5;
block6:;
// line 1
// line 722
frost$core$String$Index $tmp1061 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1061;
// line 723
frost$core$Bit $tmp1062 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1062;
goto block5;
block5:;
// line 725
frost$core$String$Index $tmp1063 = *(&local0);
frost$core$String$Index $tmp1064 = *(&local2);
frost$core$Bit $tmp1065 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1066 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1063, $tmp1064, $tmp1065);
frost$core$String* $tmp1067 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1066);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
return $tmp1067;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
frost$core$Char8 local3;
// line 733
frost$core$String$Index $tmp1068 = param1.min;
frost$core$Int64 $tmp1069 = $tmp1068.value;
*(&local0) = $tmp1069;
// line 734
frost$core$MutableString* $tmp1070 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1070);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
frost$core$MutableString* $tmp1071 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local1) = $tmp1070;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
// line 735
frost$core$String$Index $tmp1072 = param1.max;
frost$core$Int64 $tmp1073 = $tmp1072.value;
*(&local2) = $tmp1073;
// line 736
frost$core$Bit $tmp1074 = param1.inclusive;
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block1; else goto block2;
block1:;
// line 737
frost$core$Int64 $tmp1076 = *(&local2);
frost$core$Int64 $tmp1077 = (frost$core$Int64) {1};
int64_t $tmp1078 = $tmp1076.value;
int64_t $tmp1079 = $tmp1077.value;
int64_t $tmp1080 = $tmp1078 + $tmp1079;
frost$core$Int64 $tmp1081 = (frost$core$Int64) {$tmp1080};
*(&local2) = $tmp1081;
goto block2;
block2:;
// line 739
goto block3;
block3:;
frost$core$Int64 $tmp1082 = *(&local0);
frost$core$Int64 $tmp1083 = *(&local2);
int64_t $tmp1084 = $tmp1082.value;
int64_t $tmp1085 = $tmp1083.value;
bool $tmp1086 = $tmp1084 < $tmp1085;
frost$core$Bit $tmp1087 = (frost$core$Bit) {$tmp1086};
bool $tmp1088 = $tmp1087.value;
if ($tmp1088) goto block4; else goto block5;
block4:;
// line 740
frost$core$Char8** $tmp1089 = &param0->data;
frost$core$Char8* $tmp1090 = *$tmp1089;
frost$core$Int64 $tmp1091 = *(&local0);
int64_t $tmp1092 = $tmp1091.value;
frost$core$Char8 $tmp1093 = $tmp1090[$tmp1092];
*(&local3) = $tmp1093;
// line 741
frost$core$MutableString* $tmp1094 = *(&local1);
frost$core$Char8 $tmp1095 = *(&local3);
frost$core$MutableString$append$frost$core$Char8($tmp1094, $tmp1095);
// line 742
frost$core$Int64 $tmp1096 = *(&local0);
frost$core$Int64 $tmp1097 = (frost$core$Int64) {1};
int64_t $tmp1098 = $tmp1096.value;
int64_t $tmp1099 = $tmp1097.value;
int64_t $tmp1100 = $tmp1098 + $tmp1099;
frost$core$Int64 $tmp1101 = (frost$core$Int64) {$tmp1100};
*(&local0) = $tmp1101;
// line 743
frost$core$Char8 $tmp1102 = *(&local3);
uint8_t $tmp1103 = $tmp1102.value;
int64_t $tmp1104 = ((int64_t) $tmp1103) & 255;
bool $tmp1105 = $tmp1104 >= 192;
frost$core$Bit $tmp1106 = frost$core$Bit$init$builtin_bit($tmp1105);
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block6; else goto block7;
block6:;
// line 744
frost$core$MutableString* $tmp1108 = *(&local1);
frost$core$Char8** $tmp1109 = &param0->data;
frost$core$Char8* $tmp1110 = *$tmp1109;
frost$core$Int64 $tmp1111 = *(&local0);
int64_t $tmp1112 = $tmp1111.value;
frost$core$Char8 $tmp1113 = $tmp1110[$tmp1112];
frost$core$MutableString$append$frost$core$Char8($tmp1108, $tmp1113);
// line 745
frost$core$Int64 $tmp1114 = *(&local0);
frost$core$Int64 $tmp1115 = (frost$core$Int64) {1};
int64_t $tmp1116 = $tmp1114.value;
int64_t $tmp1117 = $tmp1115.value;
int64_t $tmp1118 = $tmp1116 + $tmp1117;
frost$core$Int64 $tmp1119 = (frost$core$Int64) {$tmp1118};
*(&local0) = $tmp1119;
goto block7;
block7:;
// line 747
frost$core$Char8 $tmp1120 = *(&local3);
uint8_t $tmp1121 = $tmp1120.value;
int64_t $tmp1122 = ((int64_t) $tmp1121) & 255;
bool $tmp1123 = $tmp1122 >= 224;
frost$core$Bit $tmp1124 = frost$core$Bit$init$builtin_bit($tmp1123);
bool $tmp1125 = $tmp1124.value;
if ($tmp1125) goto block8; else goto block9;
block8:;
// line 748
frost$core$MutableString* $tmp1126 = *(&local1);
frost$core$Char8** $tmp1127 = &param0->data;
frost$core$Char8* $tmp1128 = *$tmp1127;
frost$core$Int64 $tmp1129 = *(&local0);
int64_t $tmp1130 = $tmp1129.value;
frost$core$Char8 $tmp1131 = $tmp1128[$tmp1130];
frost$core$MutableString$append$frost$core$Char8($tmp1126, $tmp1131);
// line 749
frost$core$Int64 $tmp1132 = *(&local0);
frost$core$Int64 $tmp1133 = (frost$core$Int64) {1};
int64_t $tmp1134 = $tmp1132.value;
int64_t $tmp1135 = $tmp1133.value;
int64_t $tmp1136 = $tmp1134 + $tmp1135;
frost$core$Int64 $tmp1137 = (frost$core$Int64) {$tmp1136};
*(&local0) = $tmp1137;
goto block9;
block9:;
// line 751
frost$core$Char8 $tmp1138 = *(&local3);
uint8_t $tmp1139 = $tmp1138.value;
int64_t $tmp1140 = ((int64_t) $tmp1139) & 255;
bool $tmp1141 = $tmp1140 >= 240;
frost$core$Bit $tmp1142 = frost$core$Bit$init$builtin_bit($tmp1141);
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block10; else goto block11;
block10:;
// line 752
frost$core$MutableString* $tmp1144 = *(&local1);
frost$core$Char8** $tmp1145 = &param0->data;
frost$core$Char8* $tmp1146 = *$tmp1145;
frost$core$Int64 $tmp1147 = *(&local0);
int64_t $tmp1148 = $tmp1147.value;
frost$core$Char8 $tmp1149 = $tmp1146[$tmp1148];
frost$core$MutableString$append$frost$core$Char8($tmp1144, $tmp1149);
// line 753
frost$core$Int64 $tmp1150 = *(&local0);
frost$core$Int64 $tmp1151 = (frost$core$Int64) {1};
int64_t $tmp1152 = $tmp1150.value;
int64_t $tmp1153 = $tmp1151.value;
int64_t $tmp1154 = $tmp1152 + $tmp1153;
frost$core$Int64 $tmp1155 = (frost$core$Int64) {$tmp1154};
*(&local0) = $tmp1155;
goto block11;
block11:;
goto block3;
block5:;
// line 756
frost$core$MutableString* $tmp1156 = *(&local1);
frost$core$String* $tmp1157 = frost$core$MutableString$finish$R$frost$core$String($tmp1156);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$core$MutableString* $tmp1158 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp1157;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$Bit local1;
frost$core$String$Index local2;
// line 767
frost$core$Int64* $tmp1159 = &param0->_length;
frost$core$Int64 $tmp1160 = *$tmp1159;
frost$core$Int64 $tmp1161 = (frost$core$Int64) {0};
frost$core$Bit $tmp1162 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1160, $tmp1161);
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block1; else goto block2;
block1:;
// line 768
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1164));
return &$s1165;
block2:;
// line 770
// line 771
frost$core$String$Index$nullable $tmp1166 = param1.min;
frost$core$Bit $tmp1167 = frost$core$Bit$init$builtin_bit($tmp1166.nonnull);
bool $tmp1168 = $tmp1167.value;
if ($tmp1168) goto block3; else goto block5;
block3:;
// line 772
frost$core$String$Index$nullable $tmp1169 = param1.min;
*(&local0) = ((frost$core$String$Index) $tmp1169.value);
goto block4;
block5:;
// line 1
// line 775
frost$core$String$Index $tmp1170 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1170;
goto block4;
block4:;
// line 778
frost$core$Bit $tmp1171 = param1.inclusive;
*(&local1) = $tmp1171;
// line 779
// line 780
frost$core$String$Index$nullable $tmp1172 = param1.max;
frost$core$Bit $tmp1173 = frost$core$Bit$init$builtin_bit($tmp1172.nonnull);
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block6; else goto block8;
block6:;
// line 781
frost$core$String$Index$nullable $tmp1175 = param1.max;
*(&local2) = ((frost$core$String$Index) $tmp1175.value);
goto block7;
block8:;
// line 1
// line 784
frost$core$String$Index $tmp1176 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1176;
// line 785
frost$core$Bit $tmp1177 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1177;
goto block7;
block7:;
// line 787
frost$core$String$Index $tmp1178 = *(&local0);
frost$core$String$Index $tmp1179 = *(&local2);
frost$core$Bit $tmp1180 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1181 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1178, $tmp1179, $tmp1180);
frost$core$String* $tmp1182 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1181);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
return $tmp1182;

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
frost$core$Int64* $tmp1183 = &param0->_length;
frost$core$Int64 $tmp1184 = *$tmp1183;
frost$core$Int64 $tmp1185 = (frost$core$Int64) {0};
frost$core$Bit $tmp1186 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1184, $tmp1185);
bool $tmp1187 = $tmp1186.value;
if ($tmp1187) goto block1; else goto block2;
block1:;
// line 804
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1188));
return &$s1189;
block2:;
// line 806
frost$core$Int64 $tmp1190 = param1.step;
*(&local0) = $tmp1190;
// line 808
// line 809
frost$core$String$Index$nullable $tmp1191 = param1.start;
frost$core$Bit $tmp1192 = frost$core$Bit$init$builtin_bit($tmp1191.nonnull);
bool $tmp1193 = $tmp1192.value;
if ($tmp1193) goto block3; else goto block5;
block3:;
// line 810
frost$core$String$Index$nullable $tmp1194 = param1.start;
frost$core$Int64 $tmp1195 = ((frost$core$String$Index) $tmp1194.value).value;
*(&local1) = $tmp1195;
goto block4;
block5:;
// line 812
frost$core$Int64 $tmp1196 = *(&local0);
frost$core$Int64 $tmp1197 = (frost$core$Int64) {0};
int64_t $tmp1198 = $tmp1196.value;
int64_t $tmp1199 = $tmp1197.value;
bool $tmp1200 = $tmp1198 > $tmp1199;
frost$core$Bit $tmp1201 = (frost$core$Bit) {$tmp1200};
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block6; else goto block8;
block6:;
// line 813
frost$core$String$Index $tmp1203 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1204 = $tmp1203.value;
*(&local1) = $tmp1204;
goto block7;
block8:;
// line 1
// line 816
frost$core$String$Index $tmp1205 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index $tmp1206 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1205);
frost$core$Int64 $tmp1207 = $tmp1206.value;
*(&local1) = $tmp1207;
goto block7;
block7:;
goto block4;
block4:;
// line 819
// line 820
frost$core$String$Index$nullable $tmp1208 = param1.end;
frost$core$Bit $tmp1209 = frost$core$Bit$init$builtin_bit($tmp1208.nonnull);
bool $tmp1210 = $tmp1209.value;
if ($tmp1210) goto block9; else goto block11;
block9:;
// line 821
frost$core$String$Index$nullable $tmp1211 = param1.end;
frost$core$Int64 $tmp1212 = ((frost$core$String$Index) $tmp1211.value).value;
*(&local2) = $tmp1212;
goto block10;
block11:;
// line 823
frost$core$Int64 $tmp1213 = *(&local0);
frost$core$Int64 $tmp1214 = (frost$core$Int64) {0};
int64_t $tmp1215 = $tmp1213.value;
int64_t $tmp1216 = $tmp1214.value;
bool $tmp1217 = $tmp1215 > $tmp1216;
frost$core$Bit $tmp1218 = (frost$core$Bit) {$tmp1217};
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block12; else goto block14;
block12:;
// line 824
frost$core$String$Index $tmp1220 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1221 = $tmp1220.value;
*(&local2) = $tmp1221;
goto block13;
block14:;
// line 1
// line 827
frost$core$String$Index $tmp1222 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1223 = $tmp1222.value;
*(&local2) = $tmp1223;
goto block13;
block13:;
goto block10;
block10:;
// line 830
frost$core$MutableString* $tmp1224 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1224);
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
frost$core$MutableString* $tmp1225 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
*(&local3) = $tmp1224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
// line 831
frost$core$Int64 $tmp1226 = param1.step;
frost$core$Int64 $tmp1227 = (frost$core$Int64) {0};
int64_t $tmp1228 = $tmp1226.value;
int64_t $tmp1229 = $tmp1227.value;
bool $tmp1230 = $tmp1228 > $tmp1229;
frost$core$Bit $tmp1231 = (frost$core$Bit) {$tmp1230};
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block15; else goto block17;
block15:;
// line 832
goto block18;
block18:;
frost$core$Int64 $tmp1233 = *(&local1);
frost$core$Int64 $tmp1234 = *(&local2);
int64_t $tmp1235 = $tmp1233.value;
int64_t $tmp1236 = $tmp1234.value;
bool $tmp1237 = $tmp1235 < $tmp1236;
frost$core$Bit $tmp1238 = (frost$core$Bit) {$tmp1237};
bool $tmp1239 = $tmp1238.value;
if ($tmp1239) goto block19; else goto block20;
block19:;
// line 833
frost$core$Char8** $tmp1240 = &param0->data;
frost$core$Char8* $tmp1241 = *$tmp1240;
frost$core$Int64 $tmp1242 = *(&local1);
int64_t $tmp1243 = $tmp1242.value;
frost$core$Char8 $tmp1244 = $tmp1241[$tmp1243];
*(&local4) = $tmp1244;
// line 834
frost$core$MutableString* $tmp1245 = *(&local3);
frost$core$Char8 $tmp1246 = *(&local4);
frost$core$MutableString$append$frost$core$Char8($tmp1245, $tmp1246);
// line 835
frost$core$Int64 $tmp1247 = *(&local1);
frost$core$Int64 $tmp1248 = (frost$core$Int64) {1};
int64_t $tmp1249 = $tmp1247.value;
int64_t $tmp1250 = $tmp1248.value;
int64_t $tmp1251 = $tmp1249 + $tmp1250;
frost$core$Int64 $tmp1252 = (frost$core$Int64) {$tmp1251};
*(&local1) = $tmp1252;
// line 836
frost$core$Char8 $tmp1253 = *(&local4);
uint8_t $tmp1254 = $tmp1253.value;
int64_t $tmp1255 = ((int64_t) $tmp1254) & 255;
bool $tmp1256 = $tmp1255 >= 192;
frost$core$Bit $tmp1257 = frost$core$Bit$init$builtin_bit($tmp1256);
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block21; else goto block22;
block21:;
// line 837
frost$core$MutableString* $tmp1259 = *(&local3);
frost$core$Char8** $tmp1260 = &param0->data;
frost$core$Char8* $tmp1261 = *$tmp1260;
frost$core$Int64 $tmp1262 = *(&local1);
int64_t $tmp1263 = $tmp1262.value;
frost$core$Char8 $tmp1264 = $tmp1261[$tmp1263];
frost$core$MutableString$append$frost$core$Char8($tmp1259, $tmp1264);
// line 838
frost$core$Int64 $tmp1265 = *(&local1);
frost$core$Int64 $tmp1266 = (frost$core$Int64) {1};
int64_t $tmp1267 = $tmp1265.value;
int64_t $tmp1268 = $tmp1266.value;
int64_t $tmp1269 = $tmp1267 + $tmp1268;
frost$core$Int64 $tmp1270 = (frost$core$Int64) {$tmp1269};
*(&local1) = $tmp1270;
goto block22;
block22:;
// line 840
frost$core$Char8 $tmp1271 = *(&local4);
uint8_t $tmp1272 = $tmp1271.value;
int64_t $tmp1273 = ((int64_t) $tmp1272) & 255;
bool $tmp1274 = $tmp1273 >= 224;
frost$core$Bit $tmp1275 = frost$core$Bit$init$builtin_bit($tmp1274);
bool $tmp1276 = $tmp1275.value;
if ($tmp1276) goto block23; else goto block24;
block23:;
// line 841
frost$core$MutableString* $tmp1277 = *(&local3);
frost$core$Char8** $tmp1278 = &param0->data;
frost$core$Char8* $tmp1279 = *$tmp1278;
frost$core$Int64 $tmp1280 = *(&local1);
int64_t $tmp1281 = $tmp1280.value;
frost$core$Char8 $tmp1282 = $tmp1279[$tmp1281];
frost$core$MutableString$append$frost$core$Char8($tmp1277, $tmp1282);
// line 842
frost$core$Int64 $tmp1283 = *(&local1);
frost$core$Int64 $tmp1284 = (frost$core$Int64) {1};
int64_t $tmp1285 = $tmp1283.value;
int64_t $tmp1286 = $tmp1284.value;
int64_t $tmp1287 = $tmp1285 + $tmp1286;
frost$core$Int64 $tmp1288 = (frost$core$Int64) {$tmp1287};
*(&local1) = $tmp1288;
goto block24;
block24:;
// line 844
frost$core$Char8 $tmp1289 = *(&local4);
uint8_t $tmp1290 = $tmp1289.value;
int64_t $tmp1291 = ((int64_t) $tmp1290) & 255;
bool $tmp1292 = $tmp1291 >= 240;
frost$core$Bit $tmp1293 = frost$core$Bit$init$builtin_bit($tmp1292);
bool $tmp1294 = $tmp1293.value;
if ($tmp1294) goto block25; else goto block26;
block25:;
// line 845
frost$core$MutableString* $tmp1295 = *(&local3);
frost$core$Char8** $tmp1296 = &param0->data;
frost$core$Char8* $tmp1297 = *$tmp1296;
frost$core$Int64 $tmp1298 = *(&local1);
int64_t $tmp1299 = $tmp1298.value;
frost$core$Char8 $tmp1300 = $tmp1297[$tmp1299];
frost$core$MutableString$append$frost$core$Char8($tmp1295, $tmp1300);
// line 846
frost$core$Int64 $tmp1301 = *(&local1);
frost$core$Int64 $tmp1302 = (frost$core$Int64) {1};
int64_t $tmp1303 = $tmp1301.value;
int64_t $tmp1304 = $tmp1302.value;
int64_t $tmp1305 = $tmp1303 + $tmp1304;
frost$core$Int64 $tmp1306 = (frost$core$Int64) {$tmp1305};
*(&local1) = $tmp1306;
goto block26;
block26:;
// line 848
frost$core$Int64 $tmp1307 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1308 = *(&local0);
frost$core$Bit $tmp1309 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1310 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1307, $tmp1308, $tmp1309);
frost$core$Int64 $tmp1311 = $tmp1310.min;
*(&local5) = $tmp1311;
frost$core$Int64 $tmp1312 = $tmp1310.max;
frost$core$Bit $tmp1313 = $tmp1310.inclusive;
bool $tmp1314 = $tmp1313.value;
frost$core$Int64 $tmp1315 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1316 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1315);
if ($tmp1314) goto block30; else goto block31;
block30:;
int64_t $tmp1317 = $tmp1311.value;
int64_t $tmp1318 = $tmp1312.value;
bool $tmp1319 = $tmp1317 <= $tmp1318;
frost$core$Bit $tmp1320 = (frost$core$Bit) {$tmp1319};
bool $tmp1321 = $tmp1320.value;
if ($tmp1321) goto block27; else goto block28;
block31:;
int64_t $tmp1322 = $tmp1311.value;
int64_t $tmp1323 = $tmp1312.value;
bool $tmp1324 = $tmp1322 < $tmp1323;
frost$core$Bit $tmp1325 = (frost$core$Bit) {$tmp1324};
bool $tmp1326 = $tmp1325.value;
if ($tmp1326) goto block27; else goto block28;
block27:;
// line 849
frost$core$Int64 $tmp1327 = *(&local1);
frost$core$Int64 $tmp1328 = *(&local2);
int64_t $tmp1329 = $tmp1327.value;
int64_t $tmp1330 = $tmp1328.value;
bool $tmp1331 = $tmp1329 >= $tmp1330;
frost$core$Bit $tmp1332 = (frost$core$Bit) {$tmp1331};
bool $tmp1333 = $tmp1332.value;
if ($tmp1333) goto block32; else goto block33;
block32:;
// line 850
frost$core$MutableString* $tmp1334 = *(&local3);
$fn1336 $tmp1335 = ($fn1336) ((frost$core$Object*) $tmp1334)->$class->vtable[0];
frost$core$String* $tmp1337 = $tmp1335(((frost$core$Object*) $tmp1334));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$MutableString* $tmp1338 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1337;
block33:;
// line 852
frost$core$Int64 $tmp1339 = *(&local1);
frost$core$String$Index $tmp1340 = frost$core$String$Index$init$frost$core$Int64($tmp1339);
frost$core$String$Index $tmp1341 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1340);
frost$core$Int64 $tmp1342 = $tmp1341.value;
*(&local1) = $tmp1342;
goto block29;
block29:;
frost$core$Int64 $tmp1343 = *(&local5);
int64_t $tmp1344 = $tmp1312.value;
int64_t $tmp1345 = $tmp1343.value;
int64_t $tmp1346 = $tmp1344 - $tmp1345;
frost$core$Int64 $tmp1347 = (frost$core$Int64) {$tmp1346};
frost$core$UInt64 $tmp1348 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1347);
if ($tmp1314) goto block35; else goto block36;
block35:;
uint64_t $tmp1349 = $tmp1348.value;
uint64_t $tmp1350 = $tmp1316.value;
bool $tmp1351 = $tmp1349 >= $tmp1350;
frost$core$Bit $tmp1352 = (frost$core$Bit) {$tmp1351};
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block34; else goto block28;
block36:;
uint64_t $tmp1354 = $tmp1348.value;
uint64_t $tmp1355 = $tmp1316.value;
bool $tmp1356 = $tmp1354 > $tmp1355;
frost$core$Bit $tmp1357 = (frost$core$Bit) {$tmp1356};
bool $tmp1358 = $tmp1357.value;
if ($tmp1358) goto block34; else goto block28;
block34:;
int64_t $tmp1359 = $tmp1343.value;
int64_t $tmp1360 = $tmp1315.value;
int64_t $tmp1361 = $tmp1359 + $tmp1360;
frost$core$Int64 $tmp1362 = (frost$core$Int64) {$tmp1361};
*(&local5) = $tmp1362;
goto block27;
block28:;
goto block18;
block20:;
goto block16;
block17:;
// line 1
// line 857
frost$core$Int64 $tmp1363 = param1.step;
frost$core$Int64 $tmp1364 = (frost$core$Int64) {0};
int64_t $tmp1365 = $tmp1363.value;
int64_t $tmp1366 = $tmp1364.value;
bool $tmp1367 = $tmp1365 < $tmp1366;
frost$core$Bit $tmp1368 = (frost$core$Bit) {$tmp1367};
bool $tmp1369 = $tmp1368.value;
if ($tmp1369) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp1370 = (frost$core$Int64) {857};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1371, $tmp1370);
abort(); // unreachable
block37:;
// line 858
goto block39;
block39:;
frost$core$Int64 $tmp1372 = *(&local1);
frost$core$Int64 $tmp1373 = *(&local2);
int64_t $tmp1374 = $tmp1372.value;
int64_t $tmp1375 = $tmp1373.value;
bool $tmp1376 = $tmp1374 > $tmp1375;
frost$core$Bit $tmp1377 = (frost$core$Bit) {$tmp1376};
bool $tmp1378 = $tmp1377.value;
if ($tmp1378) goto block40; else goto block41;
block40:;
// line 859
frost$core$Char8** $tmp1379 = &param0->data;
frost$core$Char8* $tmp1380 = *$tmp1379;
frost$core$Int64 $tmp1381 = *(&local1);
int64_t $tmp1382 = $tmp1381.value;
frost$core$Char8 $tmp1383 = $tmp1380[$tmp1382];
*(&local6) = $tmp1383;
// line 860
frost$core$MutableString* $tmp1384 = *(&local3);
frost$core$Char8 $tmp1385 = *(&local6);
frost$core$MutableString$append$frost$core$Char8($tmp1384, $tmp1385);
// line 861
frost$core$Int64 $tmp1386 = *(&local1);
*(&local7) = $tmp1386;
// line 862
frost$core$Int64 $tmp1387 = *(&local1);
frost$core$Int64 $tmp1388 = (frost$core$Int64) {1};
int64_t $tmp1389 = $tmp1387.value;
int64_t $tmp1390 = $tmp1388.value;
int64_t $tmp1391 = $tmp1389 + $tmp1390;
frost$core$Int64 $tmp1392 = (frost$core$Int64) {$tmp1391};
*(&local1) = $tmp1392;
// line 863
frost$core$Char8 $tmp1393 = *(&local6);
uint8_t $tmp1394 = $tmp1393.value;
int64_t $tmp1395 = ((int64_t) $tmp1394) & 255;
bool $tmp1396 = $tmp1395 >= 192;
frost$core$Bit $tmp1397 = frost$core$Bit$init$builtin_bit($tmp1396);
bool $tmp1398 = $tmp1397.value;
if ($tmp1398) goto block42; else goto block43;
block42:;
// line 864
frost$core$MutableString* $tmp1399 = *(&local3);
frost$core$Char8** $tmp1400 = &param0->data;
frost$core$Char8* $tmp1401 = *$tmp1400;
frost$core$Int64 $tmp1402 = *(&local1);
int64_t $tmp1403 = $tmp1402.value;
frost$core$Char8 $tmp1404 = $tmp1401[$tmp1403];
frost$core$MutableString$append$frost$core$Char8($tmp1399, $tmp1404);
// line 865
frost$core$Int64 $tmp1405 = *(&local1);
frost$core$Int64 $tmp1406 = (frost$core$Int64) {1};
int64_t $tmp1407 = $tmp1405.value;
int64_t $tmp1408 = $tmp1406.value;
int64_t $tmp1409 = $tmp1407 + $tmp1408;
frost$core$Int64 $tmp1410 = (frost$core$Int64) {$tmp1409};
*(&local1) = $tmp1410;
goto block43;
block43:;
// line 867
frost$core$Char8 $tmp1411 = *(&local6);
uint8_t $tmp1412 = $tmp1411.value;
int64_t $tmp1413 = ((int64_t) $tmp1412) & 255;
bool $tmp1414 = $tmp1413 >= 224;
frost$core$Bit $tmp1415 = frost$core$Bit$init$builtin_bit($tmp1414);
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block44; else goto block45;
block44:;
// line 868
frost$core$MutableString* $tmp1417 = *(&local3);
frost$core$Char8** $tmp1418 = &param0->data;
frost$core$Char8* $tmp1419 = *$tmp1418;
frost$core$Int64 $tmp1420 = *(&local1);
int64_t $tmp1421 = $tmp1420.value;
frost$core$Char8 $tmp1422 = $tmp1419[$tmp1421];
frost$core$MutableString$append$frost$core$Char8($tmp1417, $tmp1422);
// line 869
frost$core$Int64 $tmp1423 = *(&local1);
frost$core$Int64 $tmp1424 = (frost$core$Int64) {1};
int64_t $tmp1425 = $tmp1423.value;
int64_t $tmp1426 = $tmp1424.value;
int64_t $tmp1427 = $tmp1425 + $tmp1426;
frost$core$Int64 $tmp1428 = (frost$core$Int64) {$tmp1427};
*(&local1) = $tmp1428;
goto block45;
block45:;
// line 871
frost$core$Char8 $tmp1429 = *(&local6);
uint8_t $tmp1430 = $tmp1429.value;
int64_t $tmp1431 = ((int64_t) $tmp1430) & 255;
bool $tmp1432 = $tmp1431 >= 240;
frost$core$Bit $tmp1433 = frost$core$Bit$init$builtin_bit($tmp1432);
bool $tmp1434 = $tmp1433.value;
if ($tmp1434) goto block46; else goto block47;
block46:;
// line 872
frost$core$MutableString* $tmp1435 = *(&local3);
frost$core$Char8** $tmp1436 = &param0->data;
frost$core$Char8* $tmp1437 = *$tmp1436;
frost$core$Int64 $tmp1438 = *(&local1);
int64_t $tmp1439 = $tmp1438.value;
frost$core$Char8 $tmp1440 = $tmp1437[$tmp1439];
frost$core$MutableString$append$frost$core$Char8($tmp1435, $tmp1440);
goto block47;
block47:;
// line 874
frost$core$Int64 $tmp1441 = *(&local7);
frost$core$Int64 $tmp1442 = (frost$core$Int64) {1};
int64_t $tmp1443 = $tmp1441.value;
int64_t $tmp1444 = $tmp1442.value;
int64_t $tmp1445 = $tmp1443 - $tmp1444;
frost$core$Int64 $tmp1446 = (frost$core$Int64) {$tmp1445};
*(&local1) = $tmp1446;
// line 875
goto block48;
block48:;
frost$core$Char8** $tmp1447 = &param0->data;
frost$core$Char8* $tmp1448 = *$tmp1447;
frost$core$Int64 $tmp1449 = *(&local1);
int64_t $tmp1450 = $tmp1449.value;
frost$core$Char8 $tmp1451 = $tmp1448[$tmp1450];
uint8_t $tmp1452 = $tmp1451.value;
int64_t $tmp1453 = ((int64_t) $tmp1452) & 255;
bool $tmp1454 = $tmp1453 >= 128;
frost$core$Char8** $tmp1455 = &param0->data;
frost$core$Char8* $tmp1456 = *$tmp1455;
frost$core$Int64 $tmp1457 = *(&local1);
int64_t $tmp1458 = $tmp1457.value;
frost$core$Char8 $tmp1459 = $tmp1456[$tmp1458];
uint8_t $tmp1460 = $tmp1459.value;
int64_t $tmp1461 = ((int64_t) $tmp1460) & 255;
bool $tmp1462 = $tmp1461 < 192;
bool $tmp1463 = $tmp1454 & $tmp1462;
frost$core$Bit $tmp1464 = frost$core$Bit$init$builtin_bit($tmp1463);
bool $tmp1465 = $tmp1464.value;
if ($tmp1465) goto block49; else goto block50;
block49:;
// line 876
frost$core$Int64 $tmp1466 = *(&local1);
frost$core$Int64 $tmp1467 = (frost$core$Int64) {1};
int64_t $tmp1468 = $tmp1466.value;
int64_t $tmp1469 = $tmp1467.value;
int64_t $tmp1470 = $tmp1468 - $tmp1469;
frost$core$Int64 $tmp1471 = (frost$core$Int64) {$tmp1470};
*(&local1) = $tmp1471;
goto block48;
block50:;
// line 878
frost$core$Int64 $tmp1472 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64 $tmp1473 = *(&local0);
frost$core$Int64 $tmp1474 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1475 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1476 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1472, $tmp1473, $tmp1474, $tmp1475);
frost$core$Int64 $tmp1477 = $tmp1476.start;
*(&local8) = $tmp1477;
frost$core$Int64 $tmp1478 = $tmp1476.end;
frost$core$Int64 $tmp1479 = $tmp1476.step;
frost$core$UInt64 $tmp1480 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1479);
frost$core$Int64 $tmp1481 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1479);
frost$core$UInt64 $tmp1482 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1481);
frost$core$Bit $tmp1483 = $tmp1476.inclusive;
bool $tmp1484 = $tmp1483.value;
frost$core$Int64 $tmp1485 = (frost$core$Int64) {0};
int64_t $tmp1486 = $tmp1479.value;
int64_t $tmp1487 = $tmp1485.value;
bool $tmp1488 = $tmp1486 >= $tmp1487;
frost$core$Bit $tmp1489 = (frost$core$Bit) {$tmp1488};
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block54; else goto block55;
block54:;
if ($tmp1484) goto block56; else goto block57;
block56:;
int64_t $tmp1491 = $tmp1477.value;
int64_t $tmp1492 = $tmp1478.value;
bool $tmp1493 = $tmp1491 <= $tmp1492;
frost$core$Bit $tmp1494 = (frost$core$Bit) {$tmp1493};
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block51; else goto block52;
block57:;
int64_t $tmp1496 = $tmp1477.value;
int64_t $tmp1497 = $tmp1478.value;
bool $tmp1498 = $tmp1496 < $tmp1497;
frost$core$Bit $tmp1499 = (frost$core$Bit) {$tmp1498};
bool $tmp1500 = $tmp1499.value;
if ($tmp1500) goto block51; else goto block52;
block55:;
if ($tmp1484) goto block58; else goto block59;
block58:;
int64_t $tmp1501 = $tmp1477.value;
int64_t $tmp1502 = $tmp1478.value;
bool $tmp1503 = $tmp1501 >= $tmp1502;
frost$core$Bit $tmp1504 = (frost$core$Bit) {$tmp1503};
bool $tmp1505 = $tmp1504.value;
if ($tmp1505) goto block51; else goto block52;
block59:;
int64_t $tmp1506 = $tmp1477.value;
int64_t $tmp1507 = $tmp1478.value;
bool $tmp1508 = $tmp1506 > $tmp1507;
frost$core$Bit $tmp1509 = (frost$core$Bit) {$tmp1508};
bool $tmp1510 = $tmp1509.value;
if ($tmp1510) goto block51; else goto block52;
block51:;
// line 879
frost$core$Int64 $tmp1511 = *(&local1);
frost$core$Int64 $tmp1512 = *(&local2);
int64_t $tmp1513 = $tmp1511.value;
int64_t $tmp1514 = $tmp1512.value;
bool $tmp1515 = $tmp1513 <= $tmp1514;
frost$core$Bit $tmp1516 = (frost$core$Bit) {$tmp1515};
bool $tmp1517 = $tmp1516.value;
if ($tmp1517) goto block60; else goto block61;
block60:;
// line 880
frost$core$MutableString* $tmp1518 = *(&local3);
$fn1520 $tmp1519 = ($fn1520) ((frost$core$Object*) $tmp1518)->$class->vtable[0];
frost$core$String* $tmp1521 = $tmp1519(((frost$core$Object*) $tmp1518));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
frost$core$MutableString* $tmp1522 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1521;
block61:;
// line 882
frost$core$Int64 $tmp1523 = *(&local1);
frost$core$String$Index $tmp1524 = frost$core$String$Index$init$frost$core$Int64($tmp1523);
frost$core$String$Index $tmp1525 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1524);
frost$core$Int64 $tmp1526 = $tmp1525.value;
*(&local1) = $tmp1526;
goto block53;
block53:;
frost$core$Int64 $tmp1527 = *(&local8);
if ($tmp1490) goto block63; else goto block64;
block63:;
int64_t $tmp1528 = $tmp1478.value;
int64_t $tmp1529 = $tmp1527.value;
int64_t $tmp1530 = $tmp1528 - $tmp1529;
frost$core$Int64 $tmp1531 = (frost$core$Int64) {$tmp1530};
frost$core$UInt64 $tmp1532 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1531);
if ($tmp1484) goto block65; else goto block66;
block65:;
uint64_t $tmp1533 = $tmp1532.value;
uint64_t $tmp1534 = $tmp1480.value;
bool $tmp1535 = $tmp1533 >= $tmp1534;
frost$core$Bit $tmp1536 = (frost$core$Bit) {$tmp1535};
bool $tmp1537 = $tmp1536.value;
if ($tmp1537) goto block62; else goto block52;
block66:;
uint64_t $tmp1538 = $tmp1532.value;
uint64_t $tmp1539 = $tmp1480.value;
bool $tmp1540 = $tmp1538 > $tmp1539;
frost$core$Bit $tmp1541 = (frost$core$Bit) {$tmp1540};
bool $tmp1542 = $tmp1541.value;
if ($tmp1542) goto block62; else goto block52;
block64:;
int64_t $tmp1543 = $tmp1527.value;
int64_t $tmp1544 = $tmp1478.value;
int64_t $tmp1545 = $tmp1543 - $tmp1544;
frost$core$Int64 $tmp1546 = (frost$core$Int64) {$tmp1545};
frost$core$UInt64 $tmp1547 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1546);
if ($tmp1484) goto block67; else goto block68;
block67:;
uint64_t $tmp1548 = $tmp1547.value;
uint64_t $tmp1549 = $tmp1482.value;
bool $tmp1550 = $tmp1548 >= $tmp1549;
frost$core$Bit $tmp1551 = (frost$core$Bit) {$tmp1550};
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block62; else goto block52;
block68:;
uint64_t $tmp1553 = $tmp1547.value;
uint64_t $tmp1554 = $tmp1482.value;
bool $tmp1555 = $tmp1553 > $tmp1554;
frost$core$Bit $tmp1556 = (frost$core$Bit) {$tmp1555};
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block62; else goto block52;
block62:;
int64_t $tmp1558 = $tmp1527.value;
int64_t $tmp1559 = $tmp1479.value;
int64_t $tmp1560 = $tmp1558 + $tmp1559;
frost$core$Int64 $tmp1561 = (frost$core$Int64) {$tmp1560};
*(&local8) = $tmp1561;
goto block51;
block52:;
goto block39;
block41:;
goto block16;
block16:;
// line 886
frost$core$Bit $tmp1562 = param1.inclusive;
bool $tmp1563 = $tmp1562.value;
if ($tmp1563) goto block72; else goto block73;
block73:;
frost$core$String$Index$nullable $tmp1564 = param1.end;
frost$core$Bit $tmp1565 = frost$core$Bit$init$builtin_bit(!$tmp1564.nonnull);
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block72; else goto block70;
block72:;
frost$core$Int64 $tmp1567 = *(&local1);
frost$core$Int64 $tmp1568 = *(&local2);
frost$core$Bit $tmp1569 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1567, $tmp1568);
bool $tmp1570 = $tmp1569.value;
if ($tmp1570) goto block71; else goto block70;
block71:;
frost$core$Int64 $tmp1571 = *(&local2);
frost$core$Int64* $tmp1572 = &param0->_length;
frost$core$Int64 $tmp1573 = *$tmp1572;
int64_t $tmp1574 = $tmp1571.value;
int64_t $tmp1575 = $tmp1573.value;
bool $tmp1576 = $tmp1574 < $tmp1575;
frost$core$Bit $tmp1577 = (frost$core$Bit) {$tmp1576};
bool $tmp1578 = $tmp1577.value;
if ($tmp1578) goto block69; else goto block70;
block69:;
// line 887
frost$core$Char8** $tmp1579 = &param0->data;
frost$core$Char8* $tmp1580 = *$tmp1579;
frost$core$Int64 $tmp1581 = *(&local1);
int64_t $tmp1582 = $tmp1581.value;
frost$core$Char8 $tmp1583 = $tmp1580[$tmp1582];
*(&local9) = $tmp1583;
// line 888
frost$core$MutableString* $tmp1584 = *(&local3);
frost$core$Char8 $tmp1585 = *(&local9);
frost$core$MutableString$append$frost$core$Char8($tmp1584, $tmp1585);
// line 889
frost$core$Int64 $tmp1586 = *(&local1);
frost$core$Int64 $tmp1587 = (frost$core$Int64) {1};
int64_t $tmp1588 = $tmp1586.value;
int64_t $tmp1589 = $tmp1587.value;
int64_t $tmp1590 = $tmp1588 + $tmp1589;
frost$core$Int64 $tmp1591 = (frost$core$Int64) {$tmp1590};
*(&local1) = $tmp1591;
// line 890
frost$core$Char8 $tmp1592 = *(&local9);
uint8_t $tmp1593 = $tmp1592.value;
int64_t $tmp1594 = ((int64_t) $tmp1593) & 255;
bool $tmp1595 = $tmp1594 >= 192;
frost$core$Bit $tmp1596 = frost$core$Bit$init$builtin_bit($tmp1595);
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block74; else goto block75;
block74:;
// line 891
frost$core$MutableString* $tmp1598 = *(&local3);
frost$core$Char8** $tmp1599 = &param0->data;
frost$core$Char8* $tmp1600 = *$tmp1599;
frost$core$Int64 $tmp1601 = *(&local1);
int64_t $tmp1602 = $tmp1601.value;
frost$core$Char8 $tmp1603 = $tmp1600[$tmp1602];
frost$core$MutableString$append$frost$core$Char8($tmp1598, $tmp1603);
// line 892
frost$core$Int64 $tmp1604 = *(&local1);
frost$core$Int64 $tmp1605 = (frost$core$Int64) {1};
int64_t $tmp1606 = $tmp1604.value;
int64_t $tmp1607 = $tmp1605.value;
int64_t $tmp1608 = $tmp1606 + $tmp1607;
frost$core$Int64 $tmp1609 = (frost$core$Int64) {$tmp1608};
*(&local1) = $tmp1609;
goto block75;
block75:;
// line 894
frost$core$Char8 $tmp1610 = *(&local9);
uint8_t $tmp1611 = $tmp1610.value;
int64_t $tmp1612 = ((int64_t) $tmp1611) & 255;
bool $tmp1613 = $tmp1612 >= 224;
frost$core$Bit $tmp1614 = frost$core$Bit$init$builtin_bit($tmp1613);
bool $tmp1615 = $tmp1614.value;
if ($tmp1615) goto block76; else goto block77;
block76:;
// line 895
frost$core$MutableString* $tmp1616 = *(&local3);
frost$core$Char8** $tmp1617 = &param0->data;
frost$core$Char8* $tmp1618 = *$tmp1617;
frost$core$Int64 $tmp1619 = *(&local1);
int64_t $tmp1620 = $tmp1619.value;
frost$core$Char8 $tmp1621 = $tmp1618[$tmp1620];
frost$core$MutableString$append$frost$core$Char8($tmp1616, $tmp1621);
// line 896
frost$core$Int64 $tmp1622 = *(&local1);
frost$core$Int64 $tmp1623 = (frost$core$Int64) {1};
int64_t $tmp1624 = $tmp1622.value;
int64_t $tmp1625 = $tmp1623.value;
int64_t $tmp1626 = $tmp1624 + $tmp1625;
frost$core$Int64 $tmp1627 = (frost$core$Int64) {$tmp1626};
*(&local1) = $tmp1627;
goto block77;
block77:;
// line 898
frost$core$Char8 $tmp1628 = *(&local9);
uint8_t $tmp1629 = $tmp1628.value;
int64_t $tmp1630 = ((int64_t) $tmp1629) & 255;
bool $tmp1631 = $tmp1630 >= 240;
frost$core$Bit $tmp1632 = frost$core$Bit$init$builtin_bit($tmp1631);
bool $tmp1633 = $tmp1632.value;
if ($tmp1633) goto block78; else goto block79;
block78:;
// line 899
frost$core$MutableString* $tmp1634 = *(&local3);
frost$core$Char8** $tmp1635 = &param0->data;
frost$core$Char8* $tmp1636 = *$tmp1635;
frost$core$Int64 $tmp1637 = *(&local1);
int64_t $tmp1638 = $tmp1637.value;
frost$core$Char8 $tmp1639 = $tmp1636[$tmp1638];
frost$core$MutableString$append$frost$core$Char8($tmp1634, $tmp1639);
goto block79;
block79:;
goto block70;
block70:;
// line 902
frost$core$MutableString* $tmp1640 = *(&local3);
frost$core$String* $tmp1641 = frost$core$MutableString$finish$R$frost$core$String($tmp1640);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
frost$core$MutableString* $tmp1642 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1641;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 911
// line 912
frost$core$Int64$nullable $tmp1643 = param1.min;
frost$core$Bit $tmp1644 = frost$core$Bit$init$builtin_bit($tmp1643.nonnull);
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block1; else goto block3;
block1:;
// line 913
frost$core$String$Index $tmp1646 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1647 = param1.min;
frost$core$String$Index $tmp1648 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1646, ((frost$core$Int64) $tmp1647.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1648, true });
goto block2;
block3:;
// line 1
// line 916
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 918
// line 919
frost$core$Int64$nullable $tmp1649 = param1.max;
frost$core$Bit $tmp1650 = frost$core$Bit$init$builtin_bit($tmp1649.nonnull);
bool $tmp1651 = $tmp1650.value;
if ($tmp1651) goto block4; else goto block6;
block4:;
// line 920
frost$core$String$Index $tmp1652 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1653 = param1.max;
frost$core$String$Index $tmp1654 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1652, ((frost$core$Int64) $tmp1653.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1654, true });
goto block5;
block6:;
// line 1
// line 923
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 925
frost$core$String$Index$nullable $tmp1655 = *(&local0);
frost$core$String$Index$nullable $tmp1656 = *(&local1);
frost$core$Bit $tmp1657 = param1.inclusive;
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1658 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit($tmp1655, $tmp1656, $tmp1657);
frost$core$String* $tmp1659 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp1658);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
return $tmp1659;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 934
// line 935
frost$core$Int64$nullable $tmp1660 = param1.start;
frost$core$Bit $tmp1661 = frost$core$Bit$init$builtin_bit($tmp1660.nonnull);
bool $tmp1662 = $tmp1661.value;
if ($tmp1662) goto block1; else goto block3;
block1:;
// line 936
frost$core$String$Index $tmp1663 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1664 = param1.start;
frost$core$String$Index $tmp1665 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1663, ((frost$core$Int64) $tmp1664.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1665, true });
goto block2;
block3:;
// line 1
// line 939
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 941
// line 942
frost$core$Int64$nullable $tmp1666 = param1.end;
frost$core$Bit $tmp1667 = frost$core$Bit$init$builtin_bit($tmp1666.nonnull);
bool $tmp1668 = $tmp1667.value;
if ($tmp1668) goto block4; else goto block6;
block4:;
// line 943
frost$core$String$Index $tmp1669 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1670 = param1.end;
frost$core$String$Index $tmp1671 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1669, ((frost$core$Int64) $tmp1670.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1671, true });
goto block5;
block6:;
// line 1
// line 946
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 948
frost$core$String$Index$nullable $tmp1672 = *(&local0);
frost$core$String$Index$nullable $tmp1673 = *(&local1);
frost$core$Int64 $tmp1674 = param1.step;
frost$core$Bit $tmp1675 = param1.inclusive;
frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT $tmp1676 = frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Int64$frost$core$Bit($tmp1672, $tmp1673, $tmp1674, $tmp1675);
frost$core$String* $tmp1677 = frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String(param0, $tmp1676);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
return $tmp1677;

}
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(frost$core$String* param0, frost$core$Char8 param1) {

frost$core$Int64 local0;
// line 955
frost$core$Int64 $tmp1678 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1679 = &param0->_length;
frost$core$Int64 $tmp1680 = *$tmp1679;
frost$core$Bit $tmp1681 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1682 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1678, $tmp1680, $tmp1681);
frost$core$Int64 $tmp1683 = $tmp1682.min;
*(&local0) = $tmp1683;
frost$core$Int64 $tmp1684 = $tmp1682.max;
frost$core$Bit $tmp1685 = $tmp1682.inclusive;
bool $tmp1686 = $tmp1685.value;
frost$core$Int64 $tmp1687 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1688 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1687);
if ($tmp1686) goto block4; else goto block5;
block4:;
int64_t $tmp1689 = $tmp1683.value;
int64_t $tmp1690 = $tmp1684.value;
bool $tmp1691 = $tmp1689 <= $tmp1690;
frost$core$Bit $tmp1692 = (frost$core$Bit) {$tmp1691};
bool $tmp1693 = $tmp1692.value;
if ($tmp1693) goto block1; else goto block2;
block5:;
int64_t $tmp1694 = $tmp1683.value;
int64_t $tmp1695 = $tmp1684.value;
bool $tmp1696 = $tmp1694 < $tmp1695;
frost$core$Bit $tmp1697 = (frost$core$Bit) {$tmp1696};
bool $tmp1698 = $tmp1697.value;
if ($tmp1698) goto block1; else goto block2;
block1:;
// line 956
frost$core$Char8** $tmp1699 = &param0->data;
frost$core$Char8* $tmp1700 = *$tmp1699;
frost$core$Int64 $tmp1701 = *(&local0);
int64_t $tmp1702 = $tmp1701.value;
frost$core$Char8 $tmp1703 = $tmp1700[$tmp1702];
frost$core$Bit $tmp1704 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp1703, param1);
bool $tmp1705 = $tmp1704.value;
if ($tmp1705) goto block6; else goto block7;
block6:;
// line 957
frost$core$Bit $tmp1706 = frost$core$Bit$init$builtin_bit(true);
return $tmp1706;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp1707 = *(&local0);
int64_t $tmp1708 = $tmp1684.value;
int64_t $tmp1709 = $tmp1707.value;
int64_t $tmp1710 = $tmp1708 - $tmp1709;
frost$core$Int64 $tmp1711 = (frost$core$Int64) {$tmp1710};
frost$core$UInt64 $tmp1712 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1711);
if ($tmp1686) goto block9; else goto block10;
block9:;
uint64_t $tmp1713 = $tmp1712.value;
uint64_t $tmp1714 = $tmp1688.value;
bool $tmp1715 = $tmp1713 >= $tmp1714;
frost$core$Bit $tmp1716 = (frost$core$Bit) {$tmp1715};
bool $tmp1717 = $tmp1716.value;
if ($tmp1717) goto block8; else goto block2;
block10:;
uint64_t $tmp1718 = $tmp1712.value;
uint64_t $tmp1719 = $tmp1688.value;
bool $tmp1720 = $tmp1718 > $tmp1719;
frost$core$Bit $tmp1721 = (frost$core$Bit) {$tmp1720};
bool $tmp1722 = $tmp1721.value;
if ($tmp1722) goto block8; else goto block2;
block8:;
int64_t $tmp1723 = $tmp1707.value;
int64_t $tmp1724 = $tmp1687.value;
int64_t $tmp1725 = $tmp1723 + $tmp1724;
frost$core$Int64 $tmp1726 = (frost$core$Int64) {$tmp1725};
*(&local0) = $tmp1726;
goto block1;
block2:;
// line 960
frost$core$Bit $tmp1727 = frost$core$Bit$init$builtin_bit(false);
return $tmp1727;

}
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

// line 967
frost$core$String$Index$nullable $tmp1728 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(param0, param1);
frost$core$Bit $tmp1729 = frost$core$Bit$init$builtin_bit($tmp1728.nonnull);
return $tmp1729;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 978
frost$core$String$Index $tmp1730 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1731 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1730);
return $tmp1731;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 990
frost$core$Int64* $tmp1732 = &param0->_length;
frost$core$Int64 $tmp1733 = *$tmp1732;
frost$core$Int64* $tmp1734 = &param1->_length;
frost$core$Int64 $tmp1735 = *$tmp1734;
int64_t $tmp1736 = $tmp1733.value;
int64_t $tmp1737 = $tmp1735.value;
bool $tmp1738 = $tmp1736 < $tmp1737;
frost$core$Bit $tmp1739 = (frost$core$Bit) {$tmp1738};
bool $tmp1740 = $tmp1739.value;
if ($tmp1740) goto block1; else goto block2;
block1:;
// line 991
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 993
frost$core$Int64 $tmp1741 = param2.value;
frost$core$Int64* $tmp1742 = &param0->_length;
frost$core$Int64 $tmp1743 = *$tmp1742;
frost$core$Int64* $tmp1744 = &param1->_length;
frost$core$Int64 $tmp1745 = *$tmp1744;
int64_t $tmp1746 = $tmp1743.value;
int64_t $tmp1747 = $tmp1745.value;
int64_t $tmp1748 = $tmp1746 - $tmp1747;
frost$core$Int64 $tmp1749 = (frost$core$Int64) {$tmp1748};
frost$core$Bit $tmp1750 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp1751 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1741, $tmp1749, $tmp1750);
frost$core$Int64 $tmp1752 = $tmp1751.min;
*(&local0) = $tmp1752;
frost$core$Int64 $tmp1753 = $tmp1751.max;
frost$core$Bit $tmp1754 = $tmp1751.inclusive;
bool $tmp1755 = $tmp1754.value;
frost$core$Int64 $tmp1756 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1757 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1756);
if ($tmp1755) goto block6; else goto block7;
block6:;
int64_t $tmp1758 = $tmp1752.value;
int64_t $tmp1759 = $tmp1753.value;
bool $tmp1760 = $tmp1758 <= $tmp1759;
frost$core$Bit $tmp1761 = (frost$core$Bit) {$tmp1760};
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block3; else goto block4;
block7:;
int64_t $tmp1763 = $tmp1752.value;
int64_t $tmp1764 = $tmp1753.value;
bool $tmp1765 = $tmp1763 < $tmp1764;
frost$core$Bit $tmp1766 = (frost$core$Bit) {$tmp1765};
bool $tmp1767 = $tmp1766.value;
if ($tmp1767) goto block3; else goto block4;
block3:;
// line 994
frost$core$Int64 $tmp1768 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1769 = &param1->_length;
frost$core$Int64 $tmp1770 = *$tmp1769;
frost$core$Bit $tmp1771 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1772 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1768, $tmp1770, $tmp1771);
frost$core$Int64 $tmp1773 = $tmp1772.min;
*(&local1) = $tmp1773;
frost$core$Int64 $tmp1774 = $tmp1772.max;
frost$core$Bit $tmp1775 = $tmp1772.inclusive;
bool $tmp1776 = $tmp1775.value;
frost$core$Int64 $tmp1777 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1778 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1777);
if ($tmp1776) goto block11; else goto block12;
block11:;
int64_t $tmp1779 = $tmp1773.value;
int64_t $tmp1780 = $tmp1774.value;
bool $tmp1781 = $tmp1779 <= $tmp1780;
frost$core$Bit $tmp1782 = (frost$core$Bit) {$tmp1781};
bool $tmp1783 = $tmp1782.value;
if ($tmp1783) goto block8; else goto block9;
block12:;
int64_t $tmp1784 = $tmp1773.value;
int64_t $tmp1785 = $tmp1774.value;
bool $tmp1786 = $tmp1784 < $tmp1785;
frost$core$Bit $tmp1787 = (frost$core$Bit) {$tmp1786};
bool $tmp1788 = $tmp1787.value;
if ($tmp1788) goto block8; else goto block9;
block8:;
// line 995
frost$core$Char8** $tmp1789 = &param0->data;
frost$core$Char8* $tmp1790 = *$tmp1789;
frost$core$Int64 $tmp1791 = *(&local0);
frost$core$Int64 $tmp1792 = *(&local1);
int64_t $tmp1793 = $tmp1791.value;
int64_t $tmp1794 = $tmp1792.value;
int64_t $tmp1795 = $tmp1793 + $tmp1794;
frost$core$Int64 $tmp1796 = (frost$core$Int64) {$tmp1795};
int64_t $tmp1797 = $tmp1796.value;
frost$core$Char8 $tmp1798 = $tmp1790[$tmp1797];
frost$core$Char8** $tmp1799 = &param1->data;
frost$core$Char8* $tmp1800 = *$tmp1799;
frost$core$Int64 $tmp1801 = *(&local1);
int64_t $tmp1802 = $tmp1801.value;
frost$core$Char8 $tmp1803 = $tmp1800[$tmp1802];
frost$core$Bit $tmp1804 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1798, $tmp1803);
bool $tmp1805 = $tmp1804.value;
if ($tmp1805) goto block13; else goto block14;
block13:;
// line 996
goto block5;
block14:;
goto block10;
block10:;
frost$core$Int64 $tmp1806 = *(&local1);
int64_t $tmp1807 = $tmp1774.value;
int64_t $tmp1808 = $tmp1806.value;
int64_t $tmp1809 = $tmp1807 - $tmp1808;
frost$core$Int64 $tmp1810 = (frost$core$Int64) {$tmp1809};
frost$core$UInt64 $tmp1811 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1810);
if ($tmp1776) goto block16; else goto block17;
block16:;
uint64_t $tmp1812 = $tmp1811.value;
uint64_t $tmp1813 = $tmp1778.value;
bool $tmp1814 = $tmp1812 >= $tmp1813;
frost$core$Bit $tmp1815 = (frost$core$Bit) {$tmp1814};
bool $tmp1816 = $tmp1815.value;
if ($tmp1816) goto block15; else goto block9;
block17:;
uint64_t $tmp1817 = $tmp1811.value;
uint64_t $tmp1818 = $tmp1778.value;
bool $tmp1819 = $tmp1817 > $tmp1818;
frost$core$Bit $tmp1820 = (frost$core$Bit) {$tmp1819};
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block15; else goto block9;
block15:;
int64_t $tmp1822 = $tmp1806.value;
int64_t $tmp1823 = $tmp1777.value;
int64_t $tmp1824 = $tmp1822 + $tmp1823;
frost$core$Int64 $tmp1825 = (frost$core$Int64) {$tmp1824};
*(&local1) = $tmp1825;
goto block8;
block9:;
// line 999
frost$core$Int64 $tmp1826 = *(&local0);
frost$core$String$Index $tmp1827 = frost$core$String$Index$init$frost$core$Int64($tmp1826);
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp1827, true }).value), true });
block5:;
frost$core$Int64 $tmp1828 = *(&local0);
int64_t $tmp1829 = $tmp1753.value;
int64_t $tmp1830 = $tmp1828.value;
int64_t $tmp1831 = $tmp1829 - $tmp1830;
frost$core$Int64 $tmp1832 = (frost$core$Int64) {$tmp1831};
frost$core$UInt64 $tmp1833 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1832);
if ($tmp1755) goto block19; else goto block20;
block19:;
uint64_t $tmp1834 = $tmp1833.value;
uint64_t $tmp1835 = $tmp1757.value;
bool $tmp1836 = $tmp1834 >= $tmp1835;
frost$core$Bit $tmp1837 = (frost$core$Bit) {$tmp1836};
bool $tmp1838 = $tmp1837.value;
if ($tmp1838) goto block18; else goto block4;
block20:;
uint64_t $tmp1839 = $tmp1833.value;
uint64_t $tmp1840 = $tmp1757.value;
bool $tmp1841 = $tmp1839 > $tmp1840;
frost$core$Bit $tmp1842 = (frost$core$Bit) {$tmp1841};
bool $tmp1843 = $tmp1842.value;
if ($tmp1843) goto block18; else goto block4;
block18:;
int64_t $tmp1844 = $tmp1828.value;
int64_t $tmp1845 = $tmp1756.value;
int64_t $tmp1846 = $tmp1844 + $tmp1845;
frost$core$Int64 $tmp1847 = (frost$core$Int64) {$tmp1846};
*(&local0) = $tmp1847;
goto block3;
block4:;
// line 1001
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 1012
frost$core$String$Index $tmp1848 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1849 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1848);
return $tmp1849;

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1024
frost$core$Int64* $tmp1850 = &param0->_length;
frost$core$Int64 $tmp1851 = *$tmp1850;
frost$core$Int64* $tmp1852 = &param1->_length;
frost$core$Int64 $tmp1853 = *$tmp1852;
int64_t $tmp1854 = $tmp1851.value;
int64_t $tmp1855 = $tmp1853.value;
bool $tmp1856 = $tmp1854 < $tmp1855;
frost$core$Bit $tmp1857 = (frost$core$Bit) {$tmp1856};
bool $tmp1858 = $tmp1857.value;
if ($tmp1858) goto block1; else goto block2;
block1:;
// line 1025
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 1027
frost$core$Int64 $tmp1859 = param2.value;
frost$core$Int64* $tmp1860 = &param0->_length;
frost$core$Int64 $tmp1861 = *$tmp1860;
frost$core$Int64* $tmp1862 = &param1->_length;
frost$core$Int64 $tmp1863 = *$tmp1862;
int64_t $tmp1864 = $tmp1861.value;
int64_t $tmp1865 = $tmp1863.value;
int64_t $tmp1866 = $tmp1864 - $tmp1865;
frost$core$Int64 $tmp1867 = (frost$core$Int64) {$tmp1866};
frost$core$Int64 $tmp1868 = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64($tmp1859, $tmp1867);
*(&local0) = $tmp1868;
// line 1028
frost$core$Int64 $tmp1869 = *(&local0);
frost$core$Int64 $tmp1870 = (frost$core$Int64) {0};
frost$core$Int64 $tmp1871 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1872 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1873 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1869, $tmp1870, $tmp1871, $tmp1872);
frost$core$Int64 $tmp1874 = $tmp1873.start;
*(&local1) = $tmp1874;
frost$core$Int64 $tmp1875 = $tmp1873.end;
frost$core$Int64 $tmp1876 = $tmp1873.step;
frost$core$UInt64 $tmp1877 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1876);
frost$core$Int64 $tmp1878 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1876);
frost$core$UInt64 $tmp1879 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1878);
frost$core$Bit $tmp1880 = $tmp1873.inclusive;
bool $tmp1881 = $tmp1880.value;
frost$core$Int64 $tmp1882 = (frost$core$Int64) {0};
int64_t $tmp1883 = $tmp1876.value;
int64_t $tmp1884 = $tmp1882.value;
bool $tmp1885 = $tmp1883 >= $tmp1884;
frost$core$Bit $tmp1886 = (frost$core$Bit) {$tmp1885};
bool $tmp1887 = $tmp1886.value;
if ($tmp1887) goto block6; else goto block7;
block6:;
if ($tmp1881) goto block8; else goto block9;
block8:;
int64_t $tmp1888 = $tmp1874.value;
int64_t $tmp1889 = $tmp1875.value;
bool $tmp1890 = $tmp1888 <= $tmp1889;
frost$core$Bit $tmp1891 = (frost$core$Bit) {$tmp1890};
bool $tmp1892 = $tmp1891.value;
if ($tmp1892) goto block3; else goto block4;
block9:;
int64_t $tmp1893 = $tmp1874.value;
int64_t $tmp1894 = $tmp1875.value;
bool $tmp1895 = $tmp1893 < $tmp1894;
frost$core$Bit $tmp1896 = (frost$core$Bit) {$tmp1895};
bool $tmp1897 = $tmp1896.value;
if ($tmp1897) goto block3; else goto block4;
block7:;
if ($tmp1881) goto block10; else goto block11;
block10:;
int64_t $tmp1898 = $tmp1874.value;
int64_t $tmp1899 = $tmp1875.value;
bool $tmp1900 = $tmp1898 >= $tmp1899;
frost$core$Bit $tmp1901 = (frost$core$Bit) {$tmp1900};
bool $tmp1902 = $tmp1901.value;
if ($tmp1902) goto block3; else goto block4;
block11:;
int64_t $tmp1903 = $tmp1874.value;
int64_t $tmp1904 = $tmp1875.value;
bool $tmp1905 = $tmp1903 > $tmp1904;
frost$core$Bit $tmp1906 = (frost$core$Bit) {$tmp1905};
bool $tmp1907 = $tmp1906.value;
if ($tmp1907) goto block3; else goto block4;
block3:;
// line 1029
frost$core$Int64 $tmp1908 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1909 = &param1->_length;
frost$core$Int64 $tmp1910 = *$tmp1909;
frost$core$Bit $tmp1911 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1912 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1908, $tmp1910, $tmp1911);
frost$core$Int64 $tmp1913 = $tmp1912.min;
*(&local2) = $tmp1913;
frost$core$Int64 $tmp1914 = $tmp1912.max;
frost$core$Bit $tmp1915 = $tmp1912.inclusive;
bool $tmp1916 = $tmp1915.value;
frost$core$Int64 $tmp1917 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1918 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1917);
if ($tmp1916) goto block15; else goto block16;
block15:;
int64_t $tmp1919 = $tmp1913.value;
int64_t $tmp1920 = $tmp1914.value;
bool $tmp1921 = $tmp1919 <= $tmp1920;
frost$core$Bit $tmp1922 = (frost$core$Bit) {$tmp1921};
bool $tmp1923 = $tmp1922.value;
if ($tmp1923) goto block12; else goto block13;
block16:;
int64_t $tmp1924 = $tmp1913.value;
int64_t $tmp1925 = $tmp1914.value;
bool $tmp1926 = $tmp1924 < $tmp1925;
frost$core$Bit $tmp1927 = (frost$core$Bit) {$tmp1926};
bool $tmp1928 = $tmp1927.value;
if ($tmp1928) goto block12; else goto block13;
block12:;
// line 1030
frost$core$Char8** $tmp1929 = &param0->data;
frost$core$Char8* $tmp1930 = *$tmp1929;
frost$core$Int64 $tmp1931 = *(&local1);
frost$core$Int64 $tmp1932 = *(&local2);
int64_t $tmp1933 = $tmp1931.value;
int64_t $tmp1934 = $tmp1932.value;
int64_t $tmp1935 = $tmp1933 + $tmp1934;
frost$core$Int64 $tmp1936 = (frost$core$Int64) {$tmp1935};
int64_t $tmp1937 = $tmp1936.value;
frost$core$Char8 $tmp1938 = $tmp1930[$tmp1937];
frost$core$Char8** $tmp1939 = &param1->data;
frost$core$Char8* $tmp1940 = *$tmp1939;
frost$core$Int64 $tmp1941 = *(&local2);
int64_t $tmp1942 = $tmp1941.value;
frost$core$Char8 $tmp1943 = $tmp1940[$tmp1942];
frost$core$Bit $tmp1944 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1938, $tmp1943);
bool $tmp1945 = $tmp1944.value;
if ($tmp1945) goto block17; else goto block18;
block17:;
// line 1031
goto block5;
block18:;
goto block14;
block14:;
frost$core$Int64 $tmp1946 = *(&local2);
int64_t $tmp1947 = $tmp1914.value;
int64_t $tmp1948 = $tmp1946.value;
int64_t $tmp1949 = $tmp1947 - $tmp1948;
frost$core$Int64 $tmp1950 = (frost$core$Int64) {$tmp1949};
frost$core$UInt64 $tmp1951 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1950);
if ($tmp1916) goto block20; else goto block21;
block20:;
uint64_t $tmp1952 = $tmp1951.value;
uint64_t $tmp1953 = $tmp1918.value;
bool $tmp1954 = $tmp1952 >= $tmp1953;
frost$core$Bit $tmp1955 = (frost$core$Bit) {$tmp1954};
bool $tmp1956 = $tmp1955.value;
if ($tmp1956) goto block19; else goto block13;
block21:;
uint64_t $tmp1957 = $tmp1951.value;
uint64_t $tmp1958 = $tmp1918.value;
bool $tmp1959 = $tmp1957 > $tmp1958;
frost$core$Bit $tmp1960 = (frost$core$Bit) {$tmp1959};
bool $tmp1961 = $tmp1960.value;
if ($tmp1961) goto block19; else goto block13;
block19:;
int64_t $tmp1962 = $tmp1946.value;
int64_t $tmp1963 = $tmp1917.value;
int64_t $tmp1964 = $tmp1962 + $tmp1963;
frost$core$Int64 $tmp1965 = (frost$core$Int64) {$tmp1964};
*(&local2) = $tmp1965;
goto block12;
block13:;
// line 1034
frost$core$Int64 $tmp1966 = *(&local1);
frost$core$String$Index $tmp1967 = frost$core$String$Index$init$frost$core$Int64($tmp1966);
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp1967, true }).value), true });
block5:;
frost$core$Int64 $tmp1968 = *(&local1);
if ($tmp1887) goto block23; else goto block24;
block23:;
int64_t $tmp1969 = $tmp1875.value;
int64_t $tmp1970 = $tmp1968.value;
int64_t $tmp1971 = $tmp1969 - $tmp1970;
frost$core$Int64 $tmp1972 = (frost$core$Int64) {$tmp1971};
frost$core$UInt64 $tmp1973 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1972);
if ($tmp1881) goto block25; else goto block26;
block25:;
uint64_t $tmp1974 = $tmp1973.value;
uint64_t $tmp1975 = $tmp1877.value;
bool $tmp1976 = $tmp1974 >= $tmp1975;
frost$core$Bit $tmp1977 = (frost$core$Bit) {$tmp1976};
bool $tmp1978 = $tmp1977.value;
if ($tmp1978) goto block22; else goto block4;
block26:;
uint64_t $tmp1979 = $tmp1973.value;
uint64_t $tmp1980 = $tmp1877.value;
bool $tmp1981 = $tmp1979 > $tmp1980;
frost$core$Bit $tmp1982 = (frost$core$Bit) {$tmp1981};
bool $tmp1983 = $tmp1982.value;
if ($tmp1983) goto block22; else goto block4;
block24:;
int64_t $tmp1984 = $tmp1968.value;
int64_t $tmp1985 = $tmp1875.value;
int64_t $tmp1986 = $tmp1984 - $tmp1985;
frost$core$Int64 $tmp1987 = (frost$core$Int64) {$tmp1986};
frost$core$UInt64 $tmp1988 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1987);
if ($tmp1881) goto block27; else goto block28;
block27:;
uint64_t $tmp1989 = $tmp1988.value;
uint64_t $tmp1990 = $tmp1879.value;
bool $tmp1991 = $tmp1989 >= $tmp1990;
frost$core$Bit $tmp1992 = (frost$core$Bit) {$tmp1991};
bool $tmp1993 = $tmp1992.value;
if ($tmp1993) goto block22; else goto block4;
block28:;
uint64_t $tmp1994 = $tmp1988.value;
uint64_t $tmp1995 = $tmp1879.value;
bool $tmp1996 = $tmp1994 > $tmp1995;
frost$core$Bit $tmp1997 = (frost$core$Bit) {$tmp1996};
bool $tmp1998 = $tmp1997.value;
if ($tmp1998) goto block22; else goto block4;
block22:;
int64_t $tmp1999 = $tmp1968.value;
int64_t $tmp2000 = $tmp1876.value;
int64_t $tmp2001 = $tmp1999 + $tmp2000;
frost$core$Int64 $tmp2002 = (frost$core$Int64) {$tmp2001};
*(&local1) = $tmp2002;
goto block3;
block4:;
// line 1036
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1047
frost$core$Matcher* $tmp2003 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2004;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2004, $tmp2003);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
return $tmp2004;

}
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1058
frost$core$Matcher* $tmp2005 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2006 = frost$core$Matcher$find$R$frost$core$Bit($tmp2005);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
return $tmp2006;

}
frost$collections$ListView* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q(frost$core$String* param0, frost$core$RegularExpression* param1) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
// line 1072
frost$core$Matcher* $tmp2007 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
frost$core$Matcher* $tmp2008 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
*(&local0) = $tmp2007;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
// line 1073
frost$core$Matcher* $tmp2009 = *(&local0);
frost$core$Bit $tmp2010;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2010, $tmp2009);
bool $tmp2011 = $tmp2010.value;
if ($tmp2011) goto block1; else goto block2;
block1:;
// line 1074
frost$collections$Array* $tmp2012 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2012);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
frost$collections$Array* $tmp2013 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
*(&local1) = $tmp2012;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
// line 1075
frost$core$Int64 $tmp2014 = (frost$core$Int64) {1};
frost$core$Matcher* $tmp2015 = *(&local0);
frost$core$Int64 $tmp2016;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2016, $tmp2015);
frost$core$Bit $tmp2017 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2018 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2014, $tmp2016, $tmp2017);
frost$core$Int64 $tmp2019 = $tmp2018.min;
*(&local2) = $tmp2019;
frost$core$Int64 $tmp2020 = $tmp2018.max;
frost$core$Bit $tmp2021 = $tmp2018.inclusive;
bool $tmp2022 = $tmp2021.value;
frost$core$Int64 $tmp2023 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2024 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2023);
if ($tmp2022) goto block6; else goto block7;
block6:;
int64_t $tmp2025 = $tmp2019.value;
int64_t $tmp2026 = $tmp2020.value;
bool $tmp2027 = $tmp2025 <= $tmp2026;
frost$core$Bit $tmp2028 = (frost$core$Bit) {$tmp2027};
bool $tmp2029 = $tmp2028.value;
if ($tmp2029) goto block3; else goto block4;
block7:;
int64_t $tmp2030 = $tmp2019.value;
int64_t $tmp2031 = $tmp2020.value;
bool $tmp2032 = $tmp2030 < $tmp2031;
frost$core$Bit $tmp2033 = (frost$core$Bit) {$tmp2032};
bool $tmp2034 = $tmp2033.value;
if ($tmp2034) goto block3; else goto block4;
block3:;
// line 1076
frost$collections$Array* $tmp2035 = *(&local1);
frost$core$Matcher* $tmp2036 = *(&local0);
frost$core$Int64 $tmp2037 = *(&local2);
frost$core$String* $tmp2038 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2036, $tmp2037);
frost$collections$Array$add$frost$collections$Array$T($tmp2035, ((frost$core$Object*) $tmp2038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
goto block5;
block5:;
frost$core$Int64 $tmp2039 = *(&local2);
int64_t $tmp2040 = $tmp2020.value;
int64_t $tmp2041 = $tmp2039.value;
int64_t $tmp2042 = $tmp2040 - $tmp2041;
frost$core$Int64 $tmp2043 = (frost$core$Int64) {$tmp2042};
frost$core$UInt64 $tmp2044 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2043);
if ($tmp2022) goto block9; else goto block10;
block9:;
uint64_t $tmp2045 = $tmp2044.value;
uint64_t $tmp2046 = $tmp2024.value;
bool $tmp2047 = $tmp2045 >= $tmp2046;
frost$core$Bit $tmp2048 = (frost$core$Bit) {$tmp2047};
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block8; else goto block4;
block10:;
uint64_t $tmp2050 = $tmp2044.value;
uint64_t $tmp2051 = $tmp2024.value;
bool $tmp2052 = $tmp2050 > $tmp2051;
frost$core$Bit $tmp2053 = (frost$core$Bit) {$tmp2052};
bool $tmp2054 = $tmp2053.value;
if ($tmp2054) goto block8; else goto block4;
block8:;
int64_t $tmp2055 = $tmp2039.value;
int64_t $tmp2056 = $tmp2023.value;
int64_t $tmp2057 = $tmp2055 + $tmp2056;
frost$core$Int64 $tmp2058 = (frost$core$Int64) {$tmp2057};
*(&local2) = $tmp2058;
goto block3;
block4:;
// line 1078
frost$collections$Array* $tmp2059 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2059)));
frost$collections$Array* $tmp2060 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp2061 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) $tmp2059);
block2:;
// line 1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp2062 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) NULL);

}
frost$core$String* frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
// line 1091
frost$core$Bit $tmp2063 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s2064);
bool $tmp2065 = $tmp2063.value;
if ($tmp2065) goto block1; else goto block2;
block1:;
// line 1092
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1094
frost$core$MutableString* $tmp2066 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2066);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
frost$core$MutableString* $tmp2067 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
*(&local0) = $tmp2066;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
// line 1095
frost$core$String$Index $tmp2068 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2068;
// line 1096
goto block3;
block3:;
// line 1097
frost$core$String$Index $tmp2069 = *(&local1);
frost$core$String$Index$nullable $tmp2070 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2069);
*(&local2) = $tmp2070;
// line 1098
frost$core$String$Index$nullable $tmp2071 = *(&local2);
frost$core$Bit $tmp2072 = frost$core$Bit$init$builtin_bit(!$tmp2071.nonnull);
bool $tmp2073 = $tmp2072.value;
if ($tmp2073) goto block5; else goto block6;
block5:;
// line 1099
frost$core$MutableString* $tmp2074 = *(&local0);
frost$core$String$Index $tmp2075 = *(&local1);
frost$core$Bit $tmp2076 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2077 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2075, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2076);
frost$core$String* $tmp2078 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2077);
frost$core$MutableString$append$frost$core$String($tmp2074, $tmp2078);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
// line 1100
goto block4;
block6:;
// line 1102
frost$core$MutableString* $tmp2079 = *(&local0);
frost$core$String$Index $tmp2080 = *(&local1);
frost$core$String$Index$nullable $tmp2081 = *(&local2);
frost$core$Bit $tmp2082 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2083 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2080, ((frost$core$String$Index) $tmp2081.value), $tmp2082);
frost$core$String* $tmp2084 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2083);
frost$core$MutableString$append$frost$core$String($tmp2079, $tmp2084);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
// line 1103
frost$core$MutableString* $tmp2085 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp2085, param2);
// line 1104
frost$core$String$Index$nullable $tmp2086 = *(&local2);
frost$core$Int64 $tmp2087 = ((frost$core$String$Index) $tmp2086.value).value;
frost$core$Int64* $tmp2088 = &param1->_length;
frost$core$Int64 $tmp2089 = *$tmp2088;
int64_t $tmp2090 = $tmp2087.value;
int64_t $tmp2091 = $tmp2089.value;
int64_t $tmp2092 = $tmp2090 + $tmp2091;
frost$core$Int64 $tmp2093 = (frost$core$Int64) {$tmp2092};
frost$core$String$Index $tmp2094 = frost$core$String$Index$init$frost$core$Int64($tmp2093);
*(&local1) = $tmp2094;
goto block3;
block4:;
// line 1106
frost$core$MutableString* $tmp2095 = *(&local0);
frost$core$String* $tmp2096 = frost$core$MutableString$finish$R$frost$core$String($tmp2095);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
frost$core$MutableString* $tmp2097 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2096;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

// line 1120
frost$core$Bit $tmp2098 = frost$core$Bit$init$builtin_bit(true);
frost$core$String* $tmp2099 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param0, param1, param2, $tmp2098);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
return $tmp2099;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// line 1125
frost$core$MutableString* $tmp2100 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2100);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
frost$core$MutableString* $tmp2101 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
*(&local0) = $tmp2100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
// line 1126
frost$core$Matcher* $tmp2102 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
frost$core$Matcher* $tmp2103 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
*(&local1) = $tmp2102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
// line 1127
goto block1;
block1:;
frost$core$Matcher* $tmp2104 = *(&local1);
frost$core$Bit $tmp2105 = frost$core$Matcher$find$R$frost$core$Bit($tmp2104);
bool $tmp2106 = $tmp2105.value;
if ($tmp2106) goto block2; else goto block3;
block2:;
// line 1128
frost$core$Matcher* $tmp2107 = *(&local1);
frost$core$MutableString* $tmp2108 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2107, $tmp2108, param2, param3);
goto block1;
block3:;
// line 1130
frost$core$Matcher* $tmp2109 = *(&local1);
frost$core$MutableString* $tmp2110 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2109, $tmp2110);
// line 1131
frost$core$MutableString* $tmp2111 = *(&local0);
frost$core$String* $tmp2112 = frost$core$MutableString$finish$R$frost$core$String($tmp2111);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
frost$core$Matcher* $tmp2113 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2112;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 1152
frost$core$MutableString* $tmp2115 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2115);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
frost$core$MutableString* $tmp2116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
*(&local0) = $tmp2115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
// line 1153
frost$core$Matcher* $tmp2117 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$core$Matcher* $tmp2118 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
*(&local1) = $tmp2117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
// line 1154
goto block1;
block1:;
frost$core$Matcher* $tmp2119 = *(&local1);
frost$core$Bit $tmp2120 = frost$core$Matcher$find$R$frost$core$Bit($tmp2119);
bool $tmp2121 = $tmp2120.value;
if ($tmp2121) goto block2; else goto block3;
block2:;
// line 1155
frost$core$Matcher* $tmp2122 = *(&local1);
frost$core$MutableString* $tmp2123 = *(&local0);
frost$core$Matcher* $tmp2124 = *(&local1);
frost$core$Int64 $tmp2125 = (frost$core$Int64) {0};
frost$core$String* $tmp2126 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2124, $tmp2125);
frost$core$Int8** $tmp2127 = &param2->pointer;
frost$core$Int8* $tmp2128 = *$tmp2127;
frost$core$Object** $tmp2129 = &param2->target;
frost$core$Object* $tmp2130 = *$tmp2129;
bool $tmp2131 = $tmp2130 != ((frost$core$Object*) NULL);
if ($tmp2131) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp2133 = (($fn2132) $tmp2128)($tmp2126);
*(&local2) = $tmp2133;
goto block6;
block4:;
frost$core$Object* $tmp2135 = (($fn2134) $tmp2128)($tmp2130, $tmp2126);
*(&local2) = $tmp2135;
goto block6;
block6:;
frost$core$Object* $tmp2136 = *(&local2);
$fn2138 $tmp2137 = ($fn2138) $tmp2136->$class->vtable[0];
frost$core$String* $tmp2139 = $tmp2137($tmp2136);
frost$core$Bit $tmp2140 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2122, $tmp2123, $tmp2139, $tmp2140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
frost$core$Frost$unref$frost$core$Object$Q($tmp2136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
goto block1;
block3:;
// line 1157
frost$core$Matcher* $tmp2141 = *(&local1);
frost$core$MutableString* $tmp2142 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2141, $tmp2142);
// line 1158
frost$core$MutableString* $tmp2143 = *(&local0);
$fn2145 $tmp2144 = ($fn2145) ((frost$core$Object*) $tmp2143)->$class->vtable[0];
frost$core$String* $tmp2146 = $tmp2144(((frost$core$Object*) $tmp2143));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
frost$core$Matcher* $tmp2147 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2148 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2146;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
frost$core$Object* local4 = NULL;
// line 1172
frost$core$MutableString* $tmp2149 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2149);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$core$MutableString* $tmp2150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
*(&local0) = $tmp2149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
// line 1173
frost$core$Matcher* $tmp2151 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
frost$core$Matcher* $tmp2152 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
*(&local1) = $tmp2151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
// line 1174
goto block1;
block1:;
frost$core$Matcher* $tmp2153 = *(&local1);
frost$core$Bit $tmp2154 = frost$core$Matcher$find$R$frost$core$Bit($tmp2153);
bool $tmp2155 = $tmp2154.value;
if ($tmp2155) goto block2; else goto block3;
block2:;
// line 1175
frost$collections$Array* $tmp2156 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2156);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
frost$collections$Array* $tmp2157 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
*(&local2) = $tmp2156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
// line 1176
frost$core$Int64 $tmp2158 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp2159 = *(&local1);
frost$core$Int64 $tmp2160;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2160, $tmp2159);
frost$core$Bit $tmp2161 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2162 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2158, $tmp2160, $tmp2161);
frost$core$Int64 $tmp2163 = $tmp2162.min;
*(&local3) = $tmp2163;
frost$core$Int64 $tmp2164 = $tmp2162.max;
frost$core$Bit $tmp2165 = $tmp2162.inclusive;
bool $tmp2166 = $tmp2165.value;
frost$core$Int64 $tmp2167 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2168 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2167);
if ($tmp2166) goto block7; else goto block8;
block7:;
int64_t $tmp2169 = $tmp2163.value;
int64_t $tmp2170 = $tmp2164.value;
bool $tmp2171 = $tmp2169 <= $tmp2170;
frost$core$Bit $tmp2172 = (frost$core$Bit) {$tmp2171};
bool $tmp2173 = $tmp2172.value;
if ($tmp2173) goto block4; else goto block5;
block8:;
int64_t $tmp2174 = $tmp2163.value;
int64_t $tmp2175 = $tmp2164.value;
bool $tmp2176 = $tmp2174 < $tmp2175;
frost$core$Bit $tmp2177 = (frost$core$Bit) {$tmp2176};
bool $tmp2178 = $tmp2177.value;
if ($tmp2178) goto block4; else goto block5;
block4:;
// line 1177
frost$collections$Array* $tmp2179 = *(&local2);
frost$core$Matcher* $tmp2180 = *(&local1);
frost$core$Int64 $tmp2181 = *(&local3);
frost$core$String* $tmp2182 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2180, $tmp2181);
frost$collections$Array$add$frost$collections$Array$T($tmp2179, ((frost$core$Object*) $tmp2182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
goto block6;
block6:;
frost$core$Int64 $tmp2183 = *(&local3);
int64_t $tmp2184 = $tmp2164.value;
int64_t $tmp2185 = $tmp2183.value;
int64_t $tmp2186 = $tmp2184 - $tmp2185;
frost$core$Int64 $tmp2187 = (frost$core$Int64) {$tmp2186};
frost$core$UInt64 $tmp2188 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2187);
if ($tmp2166) goto block10; else goto block11;
block10:;
uint64_t $tmp2189 = $tmp2188.value;
uint64_t $tmp2190 = $tmp2168.value;
bool $tmp2191 = $tmp2189 >= $tmp2190;
frost$core$Bit $tmp2192 = (frost$core$Bit) {$tmp2191};
bool $tmp2193 = $tmp2192.value;
if ($tmp2193) goto block9; else goto block5;
block11:;
uint64_t $tmp2194 = $tmp2188.value;
uint64_t $tmp2195 = $tmp2168.value;
bool $tmp2196 = $tmp2194 > $tmp2195;
frost$core$Bit $tmp2197 = (frost$core$Bit) {$tmp2196};
bool $tmp2198 = $tmp2197.value;
if ($tmp2198) goto block9; else goto block5;
block9:;
int64_t $tmp2199 = $tmp2183.value;
int64_t $tmp2200 = $tmp2167.value;
int64_t $tmp2201 = $tmp2199 + $tmp2200;
frost$core$Int64 $tmp2202 = (frost$core$Int64) {$tmp2201};
*(&local3) = $tmp2202;
goto block4;
block5:;
// line 1179
frost$core$Matcher* $tmp2203 = *(&local1);
frost$core$MutableString* $tmp2204 = *(&local0);
frost$collections$Array* $tmp2205 = *(&local2);
frost$core$Int8** $tmp2206 = &param2->pointer;
frost$core$Int8* $tmp2207 = *$tmp2206;
frost$core$Object** $tmp2208 = &param2->target;
frost$core$Object* $tmp2209 = *$tmp2208;
bool $tmp2210 = $tmp2209 != ((frost$core$Object*) NULL);
if ($tmp2210) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp2212 = (($fn2211) $tmp2207)(((frost$collections$ListView*) $tmp2205));
*(&local4) = $tmp2212;
goto block14;
block12:;
frost$core$Object* $tmp2214 = (($fn2213) $tmp2207)($tmp2209, ((frost$collections$ListView*) $tmp2205));
*(&local4) = $tmp2214;
goto block14;
block14:;
frost$core$Object* $tmp2215 = *(&local4);
$fn2217 $tmp2216 = ($fn2217) $tmp2215->$class->vtable[0];
frost$core$String* $tmp2218 = $tmp2216($tmp2215);
frost$core$Bit $tmp2219 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2203, $tmp2204, $tmp2218, $tmp2219);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
frost$core$Frost$unref$frost$core$Object$Q($tmp2215);
frost$collections$Array* $tmp2220 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
*(&local2) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// line 1181
frost$core$Matcher* $tmp2221 = *(&local1);
frost$core$MutableString* $tmp2222 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2221, $tmp2222);
// line 1182
frost$core$MutableString* $tmp2223 = *(&local0);
$fn2225 $tmp2224 = ($fn2225) ((frost$core$Object*) $tmp2223)->$class->vtable[0];
frost$core$String* $tmp2226 = $tmp2224(((frost$core$Object*) $tmp2223));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
frost$core$Matcher* $tmp2227 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2228 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2226;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1186
frost$core$Bit $tmp2229 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2230 = frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(param0, param1, $tmp2229);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
return $tmp2230;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Bit param2) {

// line 1190
frost$core$String$MatchIterator* $tmp2231 = (frost$core$String$MatchIterator*) frostObjectAlloc(46, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp2231, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2231)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
return ((frost$collections$Iterator*) $tmp2231);

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1194
frost$core$Bit $tmp2232 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2233 = frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(param0, param1, $tmp2232);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
return $tmp2233;

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Bit param2) {

// line 1198
frost$core$String$RegexMatchIterator* $tmp2234 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(34, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit($tmp2234, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2234)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
return ((frost$collections$Iterator*) $tmp2234);

}
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(frost$core$String* param0) {

// line 1205
frost$core$Int64 $tmp2235 = (frost$core$Int64) {0};
frost$core$String$Index $tmp2236 = frost$core$String$Index$init$frost$core$Int64($tmp2235);
return $tmp2236;

}
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(frost$core$String* param0) {

// line 1212
frost$core$Int64* $tmp2237 = &param0->_length;
frost$core$Int64 $tmp2238 = *$tmp2237;
frost$core$String$Index $tmp2239 = frost$core$String$Index$init$frost$core$Int64($tmp2238);
return $tmp2239;

}
frost$core$String$Index frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

int64_t local0;
// line 1222
frost$core$Int64 $tmp2240 = param1.value;
frost$core$Int64* $tmp2241 = &param0->_length;
frost$core$Int64 $tmp2242 = *$tmp2241;
int64_t $tmp2243 = $tmp2240.value;
int64_t $tmp2244 = $tmp2242.value;
bool $tmp2245 = $tmp2243 < $tmp2244;
frost$core$Bit $tmp2246 = (frost$core$Bit) {$tmp2245};
bool $tmp2247 = $tmp2246.value;
if ($tmp2247) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2248 = (frost$core$Int64) {1222};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2249, $tmp2248);
abort(); // unreachable
block1:;
// line 1223
frost$core$Char8** $tmp2250 = &param0->data;
frost$core$Char8* $tmp2251 = *$tmp2250;
frost$core$Int64 $tmp2252 = param1.value;
int64_t $tmp2253 = $tmp2252.value;
frost$core$Char8 $tmp2254 = $tmp2251[$tmp2253];
uint8_t $tmp2255 = $tmp2254.value;
int64_t $tmp2256 = ((int64_t) $tmp2255) & 255;
*(&local0) = $tmp2256;
// line 1224
int64_t $tmp2257 = *(&local0);
bool $tmp2258 = $tmp2257 >= 240;
frost$core$Bit $tmp2259 = frost$core$Bit$init$builtin_bit($tmp2258);
bool $tmp2260 = $tmp2259.value;
if ($tmp2260) goto block3; else goto block4;
block3:;
// line 1225
frost$core$Int64 $tmp2261 = param1.value;
frost$core$Int64 $tmp2262 = (frost$core$Int64) {4};
int64_t $tmp2263 = $tmp2261.value;
int64_t $tmp2264 = $tmp2262.value;
int64_t $tmp2265 = $tmp2263 + $tmp2264;
frost$core$Int64 $tmp2266 = (frost$core$Int64) {$tmp2265};
frost$core$String$Index $tmp2267 = frost$core$String$Index$init$frost$core$Int64($tmp2266);
return $tmp2267;
block4:;
// line 1227
int64_t $tmp2268 = *(&local0);
bool $tmp2269 = $tmp2268 >= 224;
frost$core$Bit $tmp2270 = frost$core$Bit$init$builtin_bit($tmp2269);
bool $tmp2271 = $tmp2270.value;
if ($tmp2271) goto block5; else goto block6;
block5:;
// line 1228
frost$core$Int64 $tmp2272 = param1.value;
frost$core$Int64 $tmp2273 = (frost$core$Int64) {3};
int64_t $tmp2274 = $tmp2272.value;
int64_t $tmp2275 = $tmp2273.value;
int64_t $tmp2276 = $tmp2274 + $tmp2275;
frost$core$Int64 $tmp2277 = (frost$core$Int64) {$tmp2276};
frost$core$String$Index $tmp2278 = frost$core$String$Index$init$frost$core$Int64($tmp2277);
return $tmp2278;
block6:;
// line 1230
int64_t $tmp2279 = *(&local0);
bool $tmp2280 = $tmp2279 >= 192;
frost$core$Bit $tmp2281 = frost$core$Bit$init$builtin_bit($tmp2280);
bool $tmp2282 = $tmp2281.value;
if ($tmp2282) goto block7; else goto block8;
block7:;
// line 1231
frost$core$Int64 $tmp2283 = param1.value;
frost$core$Int64 $tmp2284 = (frost$core$Int64) {2};
int64_t $tmp2285 = $tmp2283.value;
int64_t $tmp2286 = $tmp2284.value;
int64_t $tmp2287 = $tmp2285 + $tmp2286;
frost$core$Int64 $tmp2288 = (frost$core$Int64) {$tmp2287};
frost$core$String$Index $tmp2289 = frost$core$String$Index$init$frost$core$Int64($tmp2288);
return $tmp2289;
block8:;
// line 1233
frost$core$Int64 $tmp2290 = param1.value;
frost$core$Int64 $tmp2291 = (frost$core$Int64) {1};
int64_t $tmp2292 = $tmp2290.value;
int64_t $tmp2293 = $tmp2291.value;
int64_t $tmp2294 = $tmp2292 + $tmp2293;
frost$core$Int64 $tmp2295 = (frost$core$Int64) {$tmp2294};
frost$core$String$Index $tmp2296 = frost$core$String$Index$init$frost$core$Int64($tmp2295);
return $tmp2296;

}
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
// line 1243
frost$core$Int64 $tmp2297 = param1.value;
frost$core$Int64 $tmp2298 = (frost$core$Int64) {0};
int64_t $tmp2299 = $tmp2297.value;
int64_t $tmp2300 = $tmp2298.value;
bool $tmp2301 = $tmp2299 > $tmp2300;
frost$core$Bit $tmp2302 = (frost$core$Bit) {$tmp2301};
bool $tmp2303 = $tmp2302.value;
if ($tmp2303) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2304 = (frost$core$Int64) {1243};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2305, $tmp2304);
abort(); // unreachable
block1:;
// line 1244
frost$core$Int64 $tmp2306 = param1.value;
frost$core$Int64 $tmp2307 = (frost$core$Int64) {1};
int64_t $tmp2308 = $tmp2306.value;
int64_t $tmp2309 = $tmp2307.value;
int64_t $tmp2310 = $tmp2308 - $tmp2309;
frost$core$Int64 $tmp2311 = (frost$core$Int64) {$tmp2310};
*(&local0) = $tmp2311;
// line 1245
goto block3;
block3:;
frost$core$Char8** $tmp2312 = &param0->data;
frost$core$Char8* $tmp2313 = *$tmp2312;
frost$core$Int64 $tmp2314 = *(&local0);
int64_t $tmp2315 = $tmp2314.value;
frost$core$Char8 $tmp2316 = $tmp2313[$tmp2315];
uint8_t $tmp2317 = $tmp2316.value;
int64_t $tmp2318 = ((int64_t) $tmp2317) & 255;
bool $tmp2319 = $tmp2318 >= 128;
frost$core$Char8** $tmp2320 = &param0->data;
frost$core$Char8* $tmp2321 = *$tmp2320;
frost$core$Int64 $tmp2322 = *(&local0);
int64_t $tmp2323 = $tmp2322.value;
frost$core$Char8 $tmp2324 = $tmp2321[$tmp2323];
uint8_t $tmp2325 = $tmp2324.value;
int64_t $tmp2326 = ((int64_t) $tmp2325) & 255;
bool $tmp2327 = $tmp2326 < 192;
bool $tmp2328 = $tmp2319 & $tmp2327;
frost$core$Bit $tmp2329 = frost$core$Bit$init$builtin_bit($tmp2328);
bool $tmp2330 = $tmp2329.value;
if ($tmp2330) goto block4; else goto block5;
block4:;
// line 1247
frost$core$Int64 $tmp2331 = *(&local0);
frost$core$Int64 $tmp2332 = (frost$core$Int64) {1};
int64_t $tmp2333 = $tmp2331.value;
int64_t $tmp2334 = $tmp2332.value;
int64_t $tmp2335 = $tmp2333 - $tmp2334;
frost$core$Int64 $tmp2336 = (frost$core$Int64) {$tmp2335};
*(&local0) = $tmp2336;
goto block3;
block5:;
// line 1249
frost$core$Int64 $tmp2337 = *(&local0);
frost$core$String$Index $tmp2338 = frost$core$String$Index$init$frost$core$Int64($tmp2337);
return $tmp2338;

}
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1, frost$core$Int64 param2) {

frost$core$String$Index local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1259
*(&local0) = param1;
// line 1260
frost$core$Int64 $tmp2339 = (frost$core$Int64) {0};
int64_t $tmp2340 = param2.value;
int64_t $tmp2341 = $tmp2339.value;
bool $tmp2342 = $tmp2340 > $tmp2341;
frost$core$Bit $tmp2343 = (frost$core$Bit) {$tmp2342};
bool $tmp2344 = $tmp2343.value;
if ($tmp2344) goto block1; else goto block3;
block1:;
// line 1261
frost$core$Int64 $tmp2345 = (frost$core$Int64) {0};
frost$core$Bit $tmp2346 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2347 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2345, param2, $tmp2346);
frost$core$Int64 $tmp2348 = $tmp2347.min;
*(&local1) = $tmp2348;
frost$core$Int64 $tmp2349 = $tmp2347.max;
frost$core$Bit $tmp2350 = $tmp2347.inclusive;
bool $tmp2351 = $tmp2350.value;
frost$core$Int64 $tmp2352 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2353 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2352);
if ($tmp2351) goto block7; else goto block8;
block7:;
int64_t $tmp2354 = $tmp2348.value;
int64_t $tmp2355 = $tmp2349.value;
bool $tmp2356 = $tmp2354 <= $tmp2355;
frost$core$Bit $tmp2357 = (frost$core$Bit) {$tmp2356};
bool $tmp2358 = $tmp2357.value;
if ($tmp2358) goto block4; else goto block5;
block8:;
int64_t $tmp2359 = $tmp2348.value;
int64_t $tmp2360 = $tmp2349.value;
bool $tmp2361 = $tmp2359 < $tmp2360;
frost$core$Bit $tmp2362 = (frost$core$Bit) {$tmp2361};
bool $tmp2363 = $tmp2362.value;
if ($tmp2363) goto block4; else goto block5;
block4:;
// line 1262
frost$core$String$Index $tmp2364 = *(&local0);
frost$core$String$Index $tmp2365 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2364);
*(&local0) = $tmp2365;
goto block6;
block6:;
frost$core$Int64 $tmp2366 = *(&local1);
int64_t $tmp2367 = $tmp2349.value;
int64_t $tmp2368 = $tmp2366.value;
int64_t $tmp2369 = $tmp2367 - $tmp2368;
frost$core$Int64 $tmp2370 = (frost$core$Int64) {$tmp2369};
frost$core$UInt64 $tmp2371 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2370);
if ($tmp2351) goto block10; else goto block11;
block10:;
uint64_t $tmp2372 = $tmp2371.value;
uint64_t $tmp2373 = $tmp2353.value;
bool $tmp2374 = $tmp2372 >= $tmp2373;
frost$core$Bit $tmp2375 = (frost$core$Bit) {$tmp2374};
bool $tmp2376 = $tmp2375.value;
if ($tmp2376) goto block9; else goto block5;
block11:;
uint64_t $tmp2377 = $tmp2371.value;
uint64_t $tmp2378 = $tmp2353.value;
bool $tmp2379 = $tmp2377 > $tmp2378;
frost$core$Bit $tmp2380 = (frost$core$Bit) {$tmp2379};
bool $tmp2381 = $tmp2380.value;
if ($tmp2381) goto block9; else goto block5;
block9:;
int64_t $tmp2382 = $tmp2366.value;
int64_t $tmp2383 = $tmp2352.value;
int64_t $tmp2384 = $tmp2382 + $tmp2383;
frost$core$Int64 $tmp2385 = (frost$core$Int64) {$tmp2384};
*(&local1) = $tmp2385;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 1266
frost$core$Int64 $tmp2386 = (frost$core$Int64) {0};
frost$core$Int64 $tmp2387 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp2388 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp2389 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2386, param2, $tmp2387, $tmp2388);
frost$core$Int64 $tmp2390 = $tmp2389.start;
*(&local2) = $tmp2390;
frost$core$Int64 $tmp2391 = $tmp2389.end;
frost$core$Int64 $tmp2392 = $tmp2389.step;
frost$core$UInt64 $tmp2393 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2392);
frost$core$Int64 $tmp2394 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2392);
frost$core$UInt64 $tmp2395 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2394);
frost$core$Bit $tmp2396 = $tmp2389.inclusive;
bool $tmp2397 = $tmp2396.value;
frost$core$Int64 $tmp2398 = (frost$core$Int64) {0};
int64_t $tmp2399 = $tmp2392.value;
int64_t $tmp2400 = $tmp2398.value;
bool $tmp2401 = $tmp2399 >= $tmp2400;
frost$core$Bit $tmp2402 = (frost$core$Bit) {$tmp2401};
bool $tmp2403 = $tmp2402.value;
if ($tmp2403) goto block15; else goto block16;
block15:;
if ($tmp2397) goto block17; else goto block18;
block17:;
int64_t $tmp2404 = $tmp2390.value;
int64_t $tmp2405 = $tmp2391.value;
bool $tmp2406 = $tmp2404 <= $tmp2405;
frost$core$Bit $tmp2407 = (frost$core$Bit) {$tmp2406};
bool $tmp2408 = $tmp2407.value;
if ($tmp2408) goto block12; else goto block13;
block18:;
int64_t $tmp2409 = $tmp2390.value;
int64_t $tmp2410 = $tmp2391.value;
bool $tmp2411 = $tmp2409 < $tmp2410;
frost$core$Bit $tmp2412 = (frost$core$Bit) {$tmp2411};
bool $tmp2413 = $tmp2412.value;
if ($tmp2413) goto block12; else goto block13;
block16:;
if ($tmp2397) goto block19; else goto block20;
block19:;
int64_t $tmp2414 = $tmp2390.value;
int64_t $tmp2415 = $tmp2391.value;
bool $tmp2416 = $tmp2414 >= $tmp2415;
frost$core$Bit $tmp2417 = (frost$core$Bit) {$tmp2416};
bool $tmp2418 = $tmp2417.value;
if ($tmp2418) goto block12; else goto block13;
block20:;
int64_t $tmp2419 = $tmp2390.value;
int64_t $tmp2420 = $tmp2391.value;
bool $tmp2421 = $tmp2419 > $tmp2420;
frost$core$Bit $tmp2422 = (frost$core$Bit) {$tmp2421};
bool $tmp2423 = $tmp2422.value;
if ($tmp2423) goto block12; else goto block13;
block12:;
// line 1267
frost$core$String$Index $tmp2424 = *(&local0);
frost$core$String$Index $tmp2425 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2424);
*(&local0) = $tmp2425;
goto block14;
block14:;
frost$core$Int64 $tmp2426 = *(&local2);
if ($tmp2403) goto block22; else goto block23;
block22:;
int64_t $tmp2427 = $tmp2391.value;
int64_t $tmp2428 = $tmp2426.value;
int64_t $tmp2429 = $tmp2427 - $tmp2428;
frost$core$Int64 $tmp2430 = (frost$core$Int64) {$tmp2429};
frost$core$UInt64 $tmp2431 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2430);
if ($tmp2397) goto block24; else goto block25;
block24:;
uint64_t $tmp2432 = $tmp2431.value;
uint64_t $tmp2433 = $tmp2393.value;
bool $tmp2434 = $tmp2432 >= $tmp2433;
frost$core$Bit $tmp2435 = (frost$core$Bit) {$tmp2434};
bool $tmp2436 = $tmp2435.value;
if ($tmp2436) goto block21; else goto block13;
block25:;
uint64_t $tmp2437 = $tmp2431.value;
uint64_t $tmp2438 = $tmp2393.value;
bool $tmp2439 = $tmp2437 > $tmp2438;
frost$core$Bit $tmp2440 = (frost$core$Bit) {$tmp2439};
bool $tmp2441 = $tmp2440.value;
if ($tmp2441) goto block21; else goto block13;
block23:;
int64_t $tmp2442 = $tmp2426.value;
int64_t $tmp2443 = $tmp2391.value;
int64_t $tmp2444 = $tmp2442 - $tmp2443;
frost$core$Int64 $tmp2445 = (frost$core$Int64) {$tmp2444};
frost$core$UInt64 $tmp2446 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2445);
if ($tmp2397) goto block26; else goto block27;
block26:;
uint64_t $tmp2447 = $tmp2446.value;
uint64_t $tmp2448 = $tmp2395.value;
bool $tmp2449 = $tmp2447 >= $tmp2448;
frost$core$Bit $tmp2450 = (frost$core$Bit) {$tmp2449};
bool $tmp2451 = $tmp2450.value;
if ($tmp2451) goto block21; else goto block13;
block27:;
uint64_t $tmp2452 = $tmp2446.value;
uint64_t $tmp2453 = $tmp2395.value;
bool $tmp2454 = $tmp2452 > $tmp2453;
frost$core$Bit $tmp2455 = (frost$core$Bit) {$tmp2454};
bool $tmp2456 = $tmp2455.value;
if ($tmp2456) goto block21; else goto block13;
block21:;
int64_t $tmp2457 = $tmp2426.value;
int64_t $tmp2458 = $tmp2392.value;
int64_t $tmp2459 = $tmp2457 + $tmp2458;
frost$core$Int64 $tmp2460 = (frost$core$Int64) {$tmp2459};
*(&local2) = $tmp2460;
goto block12;
block13:;
goto block2;
block2:;
// line 1270
frost$core$String$Index $tmp2461 = *(&local0);
return $tmp2461;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1283
frost$core$Int32 $tmp2462 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2463 = frost$core$Char32$init$frost$core$Int32($tmp2462);
frost$core$String* $tmp2464 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2463);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
return $tmp2464;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1297
frost$core$Int64 $tmp2465 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2466 = $tmp2465.value;
int64_t $tmp2467 = param1.value;
bool $tmp2468 = $tmp2466 >= $tmp2467;
frost$core$Bit $tmp2469 = (frost$core$Bit) {$tmp2468};
bool $tmp2470 = $tmp2469.value;
if ($tmp2470) goto block1; else goto block2;
block1:;
// line 1298
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1300
frost$core$Int64 $tmp2471 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2472 = param1.value;
int64_t $tmp2473 = $tmp2471.value;
int64_t $tmp2474 = $tmp2472 - $tmp2473;
frost$core$Int64 $tmp2475 = (frost$core$Int64) {$tmp2474};
frost$core$String* $tmp2476 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2475);
frost$core$String* $tmp2477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp2476);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
return $tmp2477;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1313
frost$core$Int32 $tmp2478 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2479 = frost$core$Char32$init$frost$core$Int32($tmp2478);
frost$core$String* $tmp2480 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2479);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
return $tmp2480;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1327
frost$core$Int64 $tmp2481 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2482 = $tmp2481.value;
int64_t $tmp2483 = param1.value;
bool $tmp2484 = $tmp2482 >= $tmp2483;
frost$core$Bit $tmp2485 = (frost$core$Bit) {$tmp2484};
bool $tmp2486 = $tmp2485.value;
if ($tmp2486) goto block1; else goto block2;
block1:;
// line 1328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1330
frost$core$Int64 $tmp2487 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2488 = param1.value;
int64_t $tmp2489 = $tmp2487.value;
int64_t $tmp2490 = $tmp2488 - $tmp2489;
frost$core$Int64 $tmp2491 = (frost$core$Int64) {$tmp2490};
frost$core$String* $tmp2492 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2491);
frost$core$String* $tmp2493 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2492, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
return $tmp2493;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1345
frost$core$Int32 $tmp2494 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2495 = frost$core$Char32$init$frost$core$Int32($tmp2494);
frost$core$String* $tmp2496 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2495);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
return $tmp2496;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1361
frost$core$Int64 $tmp2497 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2498 = $tmp2497.value;
int64_t $tmp2499 = param1.value;
bool $tmp2500 = $tmp2498 >= $tmp2499;
frost$core$Bit $tmp2501 = (frost$core$Bit) {$tmp2500};
bool $tmp2502 = $tmp2501.value;
if ($tmp2502) goto block1; else goto block2;
block1:;
// line 1362
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1364
frost$core$Int64 $tmp2503 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2504 = param1.value;
int64_t $tmp2505 = $tmp2503.value;
int64_t $tmp2506 = $tmp2504 - $tmp2505;
frost$core$Int64 $tmp2507 = (frost$core$Int64) {$tmp2506};
*(&local0) = $tmp2507;
// line 1365
frost$core$Int64 $tmp2508 = *(&local0);
frost$core$Int64 $tmp2509 = (frost$core$Int64) {2};
int64_t $tmp2510 = $tmp2508.value;
int64_t $tmp2511 = $tmp2509.value;
int64_t $tmp2512 = $tmp2510 / $tmp2511;
frost$core$Int64 $tmp2513 = (frost$core$Int64) {$tmp2512};
*(&local1) = $tmp2513;
// line 1366
frost$core$Int64 $tmp2514 = *(&local0);
frost$core$Int64 $tmp2515 = *(&local1);
int64_t $tmp2516 = $tmp2514.value;
int64_t $tmp2517 = $tmp2515.value;
int64_t $tmp2518 = $tmp2516 - $tmp2517;
frost$core$Int64 $tmp2519 = (frost$core$Int64) {$tmp2518};
*(&local2) = $tmp2519;
// line 1367
frost$core$Int64 $tmp2520 = *(&local1);
frost$core$String* $tmp2521 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2520);
frost$core$String* $tmp2522 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2521, param0);
frost$core$Int64 $tmp2523 = *(&local2);
frost$core$String* $tmp2524 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2523);
frost$core$String* $tmp2525 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2522, $tmp2524);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
return $tmp2525;

}
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1378
frost$core$Int64 $tmp2526 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2527 = frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2526);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
return $tmp2527;

}
frost$collections$Array* frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
// line 1391
frost$collections$Array* $tmp2528 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2528);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
frost$collections$Array* $tmp2529 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
*(&local0) = $tmp2528;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
// line 1392
frost$core$String$Index $tmp2530 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2530;
// line 1393
goto block1;
block1:;
// line 1394
// line 1395
frost$core$Int64* $tmp2531 = &param1->_length;
frost$core$Int64 $tmp2532 = *$tmp2531;
frost$core$Int64 $tmp2533 = (frost$core$Int64) {0};
frost$core$Bit $tmp2534 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2532, $tmp2533);
bool $tmp2535 = $tmp2534.value;
if ($tmp2535) goto block3; else goto block5;
block3:;
// line 1396
frost$core$String$Index $tmp2536 = *(&local1);
frost$core$String$Index $tmp2537 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2536);
*(&local2) = ((frost$core$String$Index$nullable) { $tmp2537, true });
goto block4;
block5:;
// line 1
// line 1399
frost$core$String$Index $tmp2538 = *(&local1);
frost$core$String$Index$nullable $tmp2539 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2538);
*(&local2) = $tmp2539;
goto block4;
block4:;
// line 1401
frost$core$String$Index$nullable $tmp2540 = *(&local2);
frost$core$Bit $tmp2541 = frost$core$Bit$init$builtin_bit(!$tmp2540.nonnull);
bool $tmp2542 = $tmp2541.value;
if ($tmp2542) goto block6; else goto block8;
block8:;
frost$collections$Array* $tmp2543 = *(&local0);
ITable* $tmp2544 = ((frost$collections$CollectionView*) $tmp2543)->$class->itable;
while ($tmp2544->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2544 = $tmp2544->next;
}
$fn2546 $tmp2545 = $tmp2544->methods[0];
frost$core$Int64 $tmp2547 = $tmp2545(((frost$collections$CollectionView*) $tmp2543));
frost$core$Int64 $tmp2548 = (frost$core$Int64) {1};
int64_t $tmp2549 = param2.value;
int64_t $tmp2550 = $tmp2548.value;
int64_t $tmp2551 = $tmp2549 - $tmp2550;
frost$core$Int64 $tmp2552 = (frost$core$Int64) {$tmp2551};
frost$core$Bit $tmp2553 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2547, $tmp2552);
bool $tmp2554 = $tmp2553.value;
if ($tmp2554) goto block6; else goto block7;
block6:;
// line 1402
frost$collections$Array* $tmp2555 = *(&local0);
frost$core$String$Index $tmp2556 = *(&local1);
frost$core$Bit $tmp2557 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2558 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2556, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2557);
frost$core$String* $tmp2559 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2558);
frost$collections$Array$add$frost$collections$Array$T($tmp2555, ((frost$core$Object*) $tmp2559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
// line 1403
goto block2;
block7:;
// line 1405
frost$collections$Array* $tmp2560 = *(&local0);
frost$core$String$Index $tmp2561 = *(&local1);
frost$core$String$Index$nullable $tmp2562 = *(&local2);
frost$core$Bit $tmp2563 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2564 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2561, ((frost$core$String$Index) $tmp2562.value), $tmp2563);
frost$core$String* $tmp2565 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2564);
frost$collections$Array$add$frost$collections$Array$T($tmp2560, ((frost$core$Object*) $tmp2565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
// line 1406
frost$core$String$Index$nullable $tmp2566 = *(&local2);
frost$core$Int64 $tmp2567 = ((frost$core$String$Index) $tmp2566.value).value;
frost$core$Int64* $tmp2568 = &param1->_length;
frost$core$Int64 $tmp2569 = *$tmp2568;
int64_t $tmp2570 = $tmp2567.value;
int64_t $tmp2571 = $tmp2569.value;
int64_t $tmp2572 = $tmp2570 + $tmp2571;
frost$core$Int64 $tmp2573 = (frost$core$Int64) {$tmp2572};
frost$core$String$Index $tmp2574 = frost$core$String$Index$init$frost$core$Int64($tmp2573);
*(&local1) = $tmp2574;
goto block1;
block2:;
// line 1408
frost$collections$Array* $tmp2575 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
frost$collections$Array* $tmp2576 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2575;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$String$Index local2;
frost$core$Bit local3;
frost$core$String$Index local4;
frost$core$Int64 $tmp2577 = (frost$core$Int64) {0};
int64_t $tmp2578 = param2.value;
int64_t $tmp2579 = $tmp2577.value;
bool $tmp2580 = $tmp2578 > $tmp2579;
frost$core$Bit $tmp2581 = (frost$core$Bit) {$tmp2580};
bool $tmp2582 = $tmp2581.value;
if ($tmp2582) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2583 = (frost$core$Int64) {1422};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2584, $tmp2583, &$s2585);
abort(); // unreachable
block1:;
// line 1423
frost$collections$Array* $tmp2586 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2586);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
frost$collections$Array* $tmp2587 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
*(&local0) = $tmp2586;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
// line 1424
frost$core$Matcher* $tmp2588 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
frost$core$Matcher* $tmp2589 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
*(&local1) = $tmp2588;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
// line 1425
frost$core$String$Index $tmp2590 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp2590;
// line 1426
goto block3;
block3:;
// line 1427
frost$core$Matcher* $tmp2591 = *(&local1);
frost$core$Bit $tmp2592 = frost$core$Matcher$find$R$frost$core$Bit($tmp2591);
*(&local3) = $tmp2592;
// line 1428
frost$core$Bit $tmp2593 = *(&local3);
frost$core$Bit $tmp2594 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2593);
bool $tmp2595 = $tmp2594.value;
if ($tmp2595) goto block5; else goto block7;
block7:;
frost$collections$Array* $tmp2596 = *(&local0);
ITable* $tmp2597 = ((frost$collections$CollectionView*) $tmp2596)->$class->itable;
while ($tmp2597->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2597 = $tmp2597->next;
}
$fn2599 $tmp2598 = $tmp2597->methods[0];
frost$core$Int64 $tmp2600 = $tmp2598(((frost$collections$CollectionView*) $tmp2596));
frost$core$Int64 $tmp2601 = (frost$core$Int64) {1};
int64_t $tmp2602 = param2.value;
int64_t $tmp2603 = $tmp2601.value;
int64_t $tmp2604 = $tmp2602 - $tmp2603;
frost$core$Int64 $tmp2605 = (frost$core$Int64) {$tmp2604};
frost$core$Bit $tmp2606 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2600, $tmp2605);
bool $tmp2607 = $tmp2606.value;
if ($tmp2607) goto block5; else goto block6;
block5:;
// line 1429
frost$collections$Array* $tmp2608 = *(&local0);
frost$core$String$Index $tmp2609 = *(&local2);
frost$core$Bit $tmp2610 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2611 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2609, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2610);
frost$core$String* $tmp2612 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2611);
frost$collections$Array$add$frost$collections$Array$T($tmp2608, ((frost$core$Object*) $tmp2612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
// line 1430
goto block4;
block6:;
// line 1432
frost$core$Matcher* $tmp2613 = *(&local1);
frost$core$String$Index $tmp2614;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp2614, $tmp2613);
*(&local4) = $tmp2614;
// line 1433
frost$collections$Array* $tmp2615 = *(&local0);
frost$core$String$Index $tmp2616 = *(&local2);
frost$core$String$Index $tmp2617 = *(&local4);
frost$core$Bit $tmp2618 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2619 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2616, $tmp2617, $tmp2618);
frost$core$String* $tmp2620 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2619);
frost$collections$Array$add$frost$collections$Array$T($tmp2615, ((frost$core$Object*) $tmp2620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
// line 1434
frost$core$String$Index $tmp2621 = *(&local4);
frost$core$Int64 $tmp2622 = $tmp2621.value;
frost$core$Matcher* $tmp2623 = *(&local1);
frost$core$String$Index $tmp2624;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp2624, $tmp2623);
frost$core$Int64 $tmp2625 = $tmp2624.value;
frost$core$Int64 $tmp2626 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp2622, $tmp2625);
frost$core$String$Index $tmp2627 = frost$core$String$Index$init$frost$core$Int64($tmp2626);
*(&local2) = $tmp2627;
goto block3;
block4:;
// line 1436
frost$collections$Array* $tmp2628 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
frost$core$Matcher* $tmp2629 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$collections$Array* $tmp2630 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2628;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1449
frost$core$Int64 $tmp2631 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2632 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
return $tmp2632;

}
frost$core$Int64$nullable frost$core$String$get_asInt64$R$frost$core$Int64$Q(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
// line 1461
frost$core$Int64* $tmp2633 = &param0->_length;
frost$core$Int64 $tmp2634 = *$tmp2633;
frost$core$Int64 $tmp2635 = (frost$core$Int64) {0};
frost$core$Bit $tmp2636 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2634, $tmp2635);
bool $tmp2637 = $tmp2636.value;
if ($tmp2637) goto block1; else goto block2;
block1:;
// line 1462
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 1464
frost$core$Int64 $tmp2638 = (frost$core$Int64) {0};
*(&local0) = $tmp2638;
// line 1465
// line 1466
frost$core$Char8** $tmp2639 = &param0->data;
frost$core$Char8* $tmp2640 = *$tmp2639;
frost$core$Int64 $tmp2641 = (frost$core$Int64) {0};
int64_t $tmp2642 = $tmp2641.value;
frost$core$Char8 $tmp2643 = $tmp2640[$tmp2642];
frost$core$UInt8 $tmp2644 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2645 = frost$core$Char8$init$frost$core$UInt8($tmp2644);
frost$core$Bit $tmp2646 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2643, $tmp2645);
bool $tmp2647 = $tmp2646.value;
if ($tmp2647) goto block3; else goto block5;
block3:;
// line 1467
frost$core$Int64 $tmp2648 = (frost$core$Int64) {1};
*(&local1) = $tmp2648;
goto block4;
block5:;
// line 1
// line 1470
frost$core$Int64 $tmp2649 = (frost$core$Int64) {0};
*(&local1) = $tmp2649;
goto block4;
block4:;
// line 1472
frost$core$Int64 $tmp2650 = *(&local1);
frost$core$Int64* $tmp2651 = &param0->_length;
frost$core$Int64 $tmp2652 = *$tmp2651;
frost$core$Bit $tmp2653 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2654 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2650, $tmp2652, $tmp2653);
frost$core$Int64 $tmp2655 = $tmp2654.min;
*(&local2) = $tmp2655;
frost$core$Int64 $tmp2656 = $tmp2654.max;
frost$core$Bit $tmp2657 = $tmp2654.inclusive;
bool $tmp2658 = $tmp2657.value;
frost$core$Int64 $tmp2659 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2660 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2659);
if ($tmp2658) goto block9; else goto block10;
block9:;
int64_t $tmp2661 = $tmp2655.value;
int64_t $tmp2662 = $tmp2656.value;
bool $tmp2663 = $tmp2661 <= $tmp2662;
frost$core$Bit $tmp2664 = (frost$core$Bit) {$tmp2663};
bool $tmp2665 = $tmp2664.value;
if ($tmp2665) goto block6; else goto block7;
block10:;
int64_t $tmp2666 = $tmp2655.value;
int64_t $tmp2667 = $tmp2656.value;
bool $tmp2668 = $tmp2666 < $tmp2667;
frost$core$Bit $tmp2669 = (frost$core$Bit) {$tmp2668};
bool $tmp2670 = $tmp2669.value;
if ($tmp2670) goto block6; else goto block7;
block6:;
// line 1473
frost$core$Char8** $tmp2671 = &param0->data;
frost$core$Char8* $tmp2672 = *$tmp2671;
frost$core$Int64 $tmp2673 = *(&local2);
int64_t $tmp2674 = $tmp2673.value;
frost$core$Char8 $tmp2675 = $tmp2672[$tmp2674];
uint8_t $tmp2676 = $tmp2675.value;
frost$core$Int64 $tmp2677 = (frost$core$Int64) {((int64_t) $tmp2676)};
frost$core$Int64 $tmp2678 = (frost$core$Int64) {48};
int64_t $tmp2679 = $tmp2677.value;
int64_t $tmp2680 = $tmp2678.value;
int64_t $tmp2681 = $tmp2679 - $tmp2680;
frost$core$Int64 $tmp2682 = (frost$core$Int64) {$tmp2681};
*(&local3) = $tmp2682;
// line 1474
frost$core$Int64 $tmp2683 = *(&local3);
frost$core$Int64 $tmp2684 = (frost$core$Int64) {0};
int64_t $tmp2685 = $tmp2683.value;
int64_t $tmp2686 = $tmp2684.value;
bool $tmp2687 = $tmp2685 < $tmp2686;
frost$core$Bit $tmp2688 = (frost$core$Bit) {$tmp2687};
bool $tmp2689 = $tmp2688.value;
if ($tmp2689) goto block11; else goto block13;
block13:;
frost$core$Int64 $tmp2690 = *(&local3);
frost$core$Int64 $tmp2691 = (frost$core$Int64) {9};
int64_t $tmp2692 = $tmp2690.value;
int64_t $tmp2693 = $tmp2691.value;
bool $tmp2694 = $tmp2692 > $tmp2693;
frost$core$Bit $tmp2695 = (frost$core$Bit) {$tmp2694};
bool $tmp2696 = $tmp2695.value;
if ($tmp2696) goto block11; else goto block12;
block11:;
// line 1475
return ((frost$core$Int64$nullable) { .nonnull = false });
block12:;
// line 1477
frost$core$Int64 $tmp2697 = *(&local0);
frost$core$Int64 $tmp2698 = (frost$core$Int64) {10};
int64_t $tmp2699 = $tmp2697.value;
int64_t $tmp2700 = $tmp2698.value;
int64_t $tmp2701 = $tmp2699 * $tmp2700;
frost$core$Int64 $tmp2702 = (frost$core$Int64) {$tmp2701};
frost$core$Int64 $tmp2703 = *(&local3);
int64_t $tmp2704 = $tmp2702.value;
int64_t $tmp2705 = $tmp2703.value;
int64_t $tmp2706 = $tmp2704 + $tmp2705;
frost$core$Int64 $tmp2707 = (frost$core$Int64) {$tmp2706};
*(&local0) = $tmp2707;
goto block8;
block8:;
frost$core$Int64 $tmp2708 = *(&local2);
int64_t $tmp2709 = $tmp2656.value;
int64_t $tmp2710 = $tmp2708.value;
int64_t $tmp2711 = $tmp2709 - $tmp2710;
frost$core$Int64 $tmp2712 = (frost$core$Int64) {$tmp2711};
frost$core$UInt64 $tmp2713 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2712);
if ($tmp2658) goto block15; else goto block16;
block15:;
uint64_t $tmp2714 = $tmp2713.value;
uint64_t $tmp2715 = $tmp2660.value;
bool $tmp2716 = $tmp2714 >= $tmp2715;
frost$core$Bit $tmp2717 = (frost$core$Bit) {$tmp2716};
bool $tmp2718 = $tmp2717.value;
if ($tmp2718) goto block14; else goto block7;
block16:;
uint64_t $tmp2719 = $tmp2713.value;
uint64_t $tmp2720 = $tmp2660.value;
bool $tmp2721 = $tmp2719 > $tmp2720;
frost$core$Bit $tmp2722 = (frost$core$Bit) {$tmp2721};
bool $tmp2723 = $tmp2722.value;
if ($tmp2723) goto block14; else goto block7;
block14:;
int64_t $tmp2724 = $tmp2708.value;
int64_t $tmp2725 = $tmp2659.value;
int64_t $tmp2726 = $tmp2724 + $tmp2725;
frost$core$Int64 $tmp2727 = (frost$core$Int64) {$tmp2726};
*(&local2) = $tmp2727;
goto block6;
block7:;
// line 1479
frost$core$Char8** $tmp2728 = &param0->data;
frost$core$Char8* $tmp2729 = *$tmp2728;
frost$core$Int64 $tmp2730 = (frost$core$Int64) {0};
int64_t $tmp2731 = $tmp2730.value;
frost$core$Char8 $tmp2732 = $tmp2729[$tmp2731];
frost$core$UInt8 $tmp2733 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2734 = frost$core$Char8$init$frost$core$UInt8($tmp2733);
frost$core$Bit $tmp2735 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2732, $tmp2734);
bool $tmp2736 = $tmp2735.value;
if ($tmp2736) goto block17; else goto block18;
block17:;
// line 1480
frost$core$Int64 $tmp2737 = *(&local0);
frost$core$Int64 $tmp2738 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2737);
*(&local0) = $tmp2738;
goto block18;
block18:;
// line 1482
frost$core$Int64 $tmp2739 = *(&local0);
return ((frost$core$Int64$nullable) { $tmp2739, true });

}
frost$core$UInt64$nullable frost$core$String$get_asUInt64$R$frost$core$UInt64$Q(frost$core$String* param0) {

frost$core$UInt64 local0;
frost$core$Int64 local1;
frost$core$UInt64 local2;
// line 1493
frost$core$Int64* $tmp2740 = &param0->_length;
frost$core$Int64 $tmp2741 = *$tmp2740;
frost$core$Int64 $tmp2742 = (frost$core$Int64) {0};
frost$core$Bit $tmp2743 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2741, $tmp2742);
bool $tmp2744 = $tmp2743.value;
if ($tmp2744) goto block1; else goto block2;
block1:;
// line 1494
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 1496
frost$core$UInt64 $tmp2745 = (frost$core$UInt64) {0};
*(&local0) = $tmp2745;
// line 1497
frost$core$Int64 $tmp2746 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2747 = &param0->_length;
frost$core$Int64 $tmp2748 = *$tmp2747;
frost$core$Bit $tmp2749 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2750 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2746, $tmp2748, $tmp2749);
frost$core$Int64 $tmp2751 = $tmp2750.min;
*(&local1) = $tmp2751;
frost$core$Int64 $tmp2752 = $tmp2750.max;
frost$core$Bit $tmp2753 = $tmp2750.inclusive;
bool $tmp2754 = $tmp2753.value;
frost$core$Int64 $tmp2755 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2756 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2755);
if ($tmp2754) goto block6; else goto block7;
block6:;
int64_t $tmp2757 = $tmp2751.value;
int64_t $tmp2758 = $tmp2752.value;
bool $tmp2759 = $tmp2757 <= $tmp2758;
frost$core$Bit $tmp2760 = (frost$core$Bit) {$tmp2759};
bool $tmp2761 = $tmp2760.value;
if ($tmp2761) goto block3; else goto block4;
block7:;
int64_t $tmp2762 = $tmp2751.value;
int64_t $tmp2763 = $tmp2752.value;
bool $tmp2764 = $tmp2762 < $tmp2763;
frost$core$Bit $tmp2765 = (frost$core$Bit) {$tmp2764};
bool $tmp2766 = $tmp2765.value;
if ($tmp2766) goto block3; else goto block4;
block3:;
// line 1498
frost$core$Char8** $tmp2767 = &param0->data;
frost$core$Char8* $tmp2768 = *$tmp2767;
frost$core$Int64 $tmp2769 = *(&local1);
int64_t $tmp2770 = $tmp2769.value;
frost$core$Char8 $tmp2771 = $tmp2768[$tmp2770];
uint8_t $tmp2772 = $tmp2771.value;
frost$core$UInt64 $tmp2773 = (frost$core$UInt64) {((uint64_t) $tmp2772)};
frost$core$UInt64 $tmp2774 = (frost$core$UInt64) {48};
uint64_t $tmp2775 = $tmp2773.value;
uint64_t $tmp2776 = $tmp2774.value;
uint64_t $tmp2777 = $tmp2775 - $tmp2776;
frost$core$UInt64 $tmp2778 = (frost$core$UInt64) {$tmp2777};
*(&local2) = $tmp2778;
// line 1499
frost$core$UInt64 $tmp2779 = *(&local2);
frost$core$UInt64 $tmp2780 = (frost$core$UInt64) {0};
uint64_t $tmp2781 = $tmp2779.value;
uint64_t $tmp2782 = $tmp2780.value;
bool $tmp2783 = $tmp2781 < $tmp2782;
frost$core$Bit $tmp2784 = (frost$core$Bit) {$tmp2783};
bool $tmp2785 = $tmp2784.value;
if ($tmp2785) goto block8; else goto block10;
block10:;
frost$core$UInt64 $tmp2786 = *(&local2);
frost$core$UInt64 $tmp2787 = (frost$core$UInt64) {9};
uint64_t $tmp2788 = $tmp2786.value;
uint64_t $tmp2789 = $tmp2787.value;
bool $tmp2790 = $tmp2788 > $tmp2789;
frost$core$Bit $tmp2791 = (frost$core$Bit) {$tmp2790};
bool $tmp2792 = $tmp2791.value;
if ($tmp2792) goto block8; else goto block9;
block8:;
// line 1500
return ((frost$core$UInt64$nullable) { .nonnull = false });
block9:;
// line 1502
frost$core$UInt64 $tmp2793 = *(&local0);
frost$core$UInt64 $tmp2794 = (frost$core$UInt64) {10};
uint64_t $tmp2795 = $tmp2793.value;
uint64_t $tmp2796 = $tmp2794.value;
uint64_t $tmp2797 = $tmp2795 * $tmp2796;
frost$core$UInt64 $tmp2798 = (frost$core$UInt64) {$tmp2797};
frost$core$UInt64 $tmp2799 = *(&local2);
uint64_t $tmp2800 = $tmp2798.value;
uint64_t $tmp2801 = $tmp2799.value;
uint64_t $tmp2802 = $tmp2800 + $tmp2801;
frost$core$UInt64 $tmp2803 = (frost$core$UInt64) {$tmp2802};
*(&local0) = $tmp2803;
goto block5;
block5:;
frost$core$Int64 $tmp2804 = *(&local1);
int64_t $tmp2805 = $tmp2752.value;
int64_t $tmp2806 = $tmp2804.value;
int64_t $tmp2807 = $tmp2805 - $tmp2806;
frost$core$Int64 $tmp2808 = (frost$core$Int64) {$tmp2807};
frost$core$UInt64 $tmp2809 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2808);
if ($tmp2754) goto block12; else goto block13;
block12:;
uint64_t $tmp2810 = $tmp2809.value;
uint64_t $tmp2811 = $tmp2756.value;
bool $tmp2812 = $tmp2810 >= $tmp2811;
frost$core$Bit $tmp2813 = (frost$core$Bit) {$tmp2812};
bool $tmp2814 = $tmp2813.value;
if ($tmp2814) goto block11; else goto block4;
block13:;
uint64_t $tmp2815 = $tmp2809.value;
uint64_t $tmp2816 = $tmp2756.value;
bool $tmp2817 = $tmp2815 > $tmp2816;
frost$core$Bit $tmp2818 = (frost$core$Bit) {$tmp2817};
bool $tmp2819 = $tmp2818.value;
if ($tmp2819) goto block11; else goto block4;
block11:;
int64_t $tmp2820 = $tmp2804.value;
int64_t $tmp2821 = $tmp2755.value;
int64_t $tmp2822 = $tmp2820 + $tmp2821;
frost$core$Int64 $tmp2823 = (frost$core$Int64) {$tmp2822};
*(&local1) = $tmp2823;
goto block3;
block4:;
// line 1504
frost$core$UInt64 $tmp2824 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp2824, true });

}
frost$core$Real64$nullable frost$core$String$get_asReal64$R$frost$core$Real64$Q(frost$core$String* param0) {

// line 1515
frost$core$Real64 $tmp2825;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp2825, param0);
return ((frost$core$Real64$nullable) { $tmp2825, true });

}
frost$core$Int64 frost$core$String$get_hash$R$frost$core$Int64(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 1523
frost$core$Int64 $tmp2826 = (frost$core$Int64) {1};
*(&local0) = $tmp2826;
// line 1524
frost$core$Int64 $tmp2827 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2828 = &param0->_length;
frost$core$Int64 $tmp2829 = *$tmp2828;
frost$core$Bit $tmp2830 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2831 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2827, $tmp2829, $tmp2830);
frost$core$Int64 $tmp2832 = $tmp2831.min;
*(&local1) = $tmp2832;
frost$core$Int64 $tmp2833 = $tmp2831.max;
frost$core$Bit $tmp2834 = $tmp2831.inclusive;
bool $tmp2835 = $tmp2834.value;
frost$core$Int64 $tmp2836 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2837 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2836);
if ($tmp2835) goto block4; else goto block5;
block4:;
int64_t $tmp2838 = $tmp2832.value;
int64_t $tmp2839 = $tmp2833.value;
bool $tmp2840 = $tmp2838 <= $tmp2839;
frost$core$Bit $tmp2841 = (frost$core$Bit) {$tmp2840};
bool $tmp2842 = $tmp2841.value;
if ($tmp2842) goto block1; else goto block2;
block5:;
int64_t $tmp2843 = $tmp2832.value;
int64_t $tmp2844 = $tmp2833.value;
bool $tmp2845 = $tmp2843 < $tmp2844;
frost$core$Bit $tmp2846 = (frost$core$Bit) {$tmp2845};
bool $tmp2847 = $tmp2846.value;
if ($tmp2847) goto block1; else goto block2;
block1:;
// line 1525
frost$core$Int64 $tmp2848 = *(&local0);
frost$core$Int64 $tmp2849 = (frost$core$Int64) {101};
int64_t $tmp2850 = $tmp2848.value;
int64_t $tmp2851 = $tmp2849.value;
int64_t $tmp2852 = $tmp2850 * $tmp2851;
frost$core$Int64 $tmp2853 = (frost$core$Int64) {$tmp2852};
frost$core$Char8** $tmp2854 = &param0->data;
frost$core$Char8* $tmp2855 = *$tmp2854;
frost$core$Int64 $tmp2856 = *(&local1);
int64_t $tmp2857 = $tmp2856.value;
frost$core$Char8 $tmp2858 = $tmp2855[$tmp2857];
uint8_t $tmp2859 = $tmp2858.value;
frost$core$Int64 $tmp2860 = (frost$core$Int64) {((int64_t) $tmp2859)};
int64_t $tmp2861 = $tmp2853.value;
int64_t $tmp2862 = $tmp2860.value;
int64_t $tmp2863 = $tmp2861 + $tmp2862;
frost$core$Int64 $tmp2864 = (frost$core$Int64) {$tmp2863};
*(&local0) = $tmp2864;
goto block3;
block3:;
frost$core$Int64 $tmp2865 = *(&local1);
int64_t $tmp2866 = $tmp2833.value;
int64_t $tmp2867 = $tmp2865.value;
int64_t $tmp2868 = $tmp2866 - $tmp2867;
frost$core$Int64 $tmp2869 = (frost$core$Int64) {$tmp2868};
frost$core$UInt64 $tmp2870 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2869);
if ($tmp2835) goto block7; else goto block8;
block7:;
uint64_t $tmp2871 = $tmp2870.value;
uint64_t $tmp2872 = $tmp2837.value;
bool $tmp2873 = $tmp2871 >= $tmp2872;
frost$core$Bit $tmp2874 = (frost$core$Bit) {$tmp2873};
bool $tmp2875 = $tmp2874.value;
if ($tmp2875) goto block6; else goto block2;
block8:;
uint64_t $tmp2876 = $tmp2870.value;
uint64_t $tmp2877 = $tmp2837.value;
bool $tmp2878 = $tmp2876 > $tmp2877;
frost$core$Bit $tmp2879 = (frost$core$Bit) {$tmp2878};
bool $tmp2880 = $tmp2879.value;
if ($tmp2880) goto block6; else goto block2;
block6:;
int64_t $tmp2881 = $tmp2865.value;
int64_t $tmp2882 = $tmp2836.value;
int64_t $tmp2883 = $tmp2881 + $tmp2882;
frost$core$Int64 $tmp2884 = (frost$core$Int64) {$tmp2883};
*(&local1) = $tmp2884;
goto block1;
block2:;
// line 1536
frost$core$Int64 $tmp2885 = *(&local0);
return $tmp2885;

}

