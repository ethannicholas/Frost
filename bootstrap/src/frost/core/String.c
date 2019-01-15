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
__attribute__((weak)) frost$core$String* frost$core$String$convert$R$frost$core$String$shim(frost$core$String* p0) {
    frost$core$String* result = frost$core$String$convert$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$core$String$cleanup$shim(frost$core$String* p0) {
    frost$core$String$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$String$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$String$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$String$_frost$collections$Key, { frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$String$_frost$core$Equatable, { frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$String$_frost$collections$Iterable, { frost$core$String$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s1;
frost$core$String$class_type frost$core$String$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$core$String$_frost$core$Formattable, { frost$core$String$convert$R$frost$core$String$shim, frost$core$String$cleanup$shim, frost$core$String$format$frost$core$String$R$frost$core$String$shim, frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT, frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT, frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim, frost$core$String$get_length$R$frost$core$Int64, frost$core$String$get_byteLength$R$frost$core$Int64, frost$core$String$startsWith$frost$core$String$R$frost$core$Bit, frost$core$String$endsWith$frost$core$String$R$frost$core$Bit, frost$core$String$get_trimmed$R$frost$core$String, frost$core$String$$ADD$frost$core$String$R$frost$core$String, frost$core$String$$ADD$frost$core$Object$R$frost$core$String, frost$core$String$$MUL$frost$core$Int64$R$frost$core$String, frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32, frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String, frost$core$String$contains$frost$core$Char8$R$frost$core$Bit, frost$core$String$contains$frost$core$String$R$frost$core$Bit, frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q, frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$get_start$R$frost$core$String$Index, frost$core$String$get_end$R$frost$core$String$Index, frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index, frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String, frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$convert$R$frost$core$Int64$Q, frost$core$String$convert$R$frost$core$UInt64$Q, frost$core$String$convert$R$frost$core$Real64$Q, frost$core$String$get_hash$R$frost$core$Int64$shim} };

typedef frost$core$Int64 (*$fn20)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn55)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn87)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn96)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn178)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn182)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn187)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn268)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn272)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn606)(frost$core$Object*);
typedef frost$core$String* (*$fn718)(frost$core$Object*);
typedef frost$core$Object* (*$fn2095)(frost$core$String*);
typedef frost$core$Object* (*$fn2097)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn2101)(frost$core$Object*);
typedef frost$core$Object* (*$fn2172)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn2174)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2178)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2505)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2559)(frost$collections$CollectionView*);

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
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x66\x6f\x72\x6d\x61\x74\x28\x66\x6d\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, 626278591670755349, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 612931044334107490, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 116, -8142968872510394027, NULL };
static frost$core$String $s822 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s867 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s925 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2027 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2544 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2545 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -286058843379027293, NULL };

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
frost$core$Char8* $tmp26 = ((frost$core$Char8*) frostZAlloc($tmp25 * 1));
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
frost$core$UInt64 $tmp38 = frost$core$Int64$convert$R$frost$core$UInt64($tmp37);
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
// unreffing REF($50:frost.collections.ListView.T)
goto block3;
block3:;
frost$core$Int64 $tmp58 = *(&local0);
int64_t $tmp59 = $tmp34.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 - $tmp60;
frost$core$Int64 $tmp62 = (frost$core$Int64) {$tmp61};
frost$core$UInt64 $tmp63 = frost$core$Int64$convert$R$frost$core$UInt64($tmp62);
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
// unreffing REF($5:frost.core.MutableString)
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
// unreffing REF($31:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// unreffing REF($21:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 377
frost$core$MutableString* $tmp100 = *(&local0);
frost$core$Int64* $tmp101 = &$tmp100->_length;
frost$core$Int64 $tmp102 = *$tmp101;
int64_t $tmp103 = $tmp102.value;
frost$core$Char8* $tmp104 = ((frost$core$Char8*) frostZAlloc($tmp103 * 1));
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
frost$core$UInt64 $tmp117 = frost$core$Int64$convert$R$frost$core$UInt64($tmp116);
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
frost$core$UInt64 $tmp143 = frost$core$Int64$convert$R$frost$core$UInt64($tmp142);
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
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return;

}
frost$core$String* frost$core$String$convert$R$frost$core$String(frost$core$String* param0) {

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
// unreffing REF($12:frost.core.MutableString)
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
frost$core$UInt8 $tmp221 = frost$core$Char8$convert$R$frost$core$UInt8($tmp220);
frost$core$UInt8 $tmp222 = (frost$core$UInt8) {32};
uint8_t $tmp223 = $tmp221.value;
uint8_t $tmp224 = $tmp222.value;
bool $tmp225 = $tmp223 >= $tmp224;
frost$core$Bit $tmp226 = (frost$core$Bit) {$tmp225};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block22; else goto block23;
block22:;
frost$core$Char8 $tmp228 = *(&local1);
frost$core$UInt8 $tmp229 = frost$core$Char8$convert$R$frost$core$UInt8($tmp228);
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
// unreffing REF($39:frost.collections.Iterator.T)
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
// unreffing REF($29:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing REF($25:frost.collections.ListView<frost.core.Char8>)
// line 437
frost$core$MutableString* $tmp241 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp241, &$s242);
// line 438
frost$core$MutableString* $tmp243 = *(&local0);
frost$core$String* $tmp244 = frost$core$MutableString$finish$R$frost$core$String($tmp243);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing REF($139:frost.core.String)
frost$core$MutableString* $tmp245 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing result
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
goto block1;
block1:;
frost$core$Bit $tmp250 = frost$core$Bit$init$builtin_bit(false);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp252 = (frost$core$Int64) {402};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s253, $tmp252, &$s254);
abort(); // unreachable
block28:;
abort(); // unreachable

}
void frost$core$String$cleanup(frost$core$String* param0) {

// line 449
frost$core$String** $tmp255 = &param0->owner;
frost$core$String* $tmp256 = *$tmp255;
frost$core$Bit $tmp257 = frost$core$Bit$init$builtin_bit($tmp256 == NULL);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block1; else goto block2;
block1:;
// line 450
frost$core$Char8** $tmp259 = &param0->data;
frost$core$Char8* $tmp260 = *$tmp259;
frostFree($tmp260);
goto block2;
block2:;
// line 448
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp261 = &param0->owner;
frost$core$String* $tmp262 = *$tmp261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
return;

}
frost$collections$ListView* frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(frost$core$String* param0) {

// line 458
frost$core$String$UTF8List* $tmp263 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp263, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp263)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing REF($1:frost.core.String.UTF8List)
return ((frost$collections$ListView*) $tmp263);

}
frost$collections$Iterator* frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT(frost$core$String* param0) {

// line 467
frost$core$String$UTF16Iterator* $tmp264 = (frost$core$String$UTF16Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF16Iterator$class);
frost$core$String$UTF16Iterator$init$frost$core$String($tmp264, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp264)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing REF($1:frost.core.String.UTF16Iterator)
return ((frost$collections$Iterator*) $tmp264);

}
frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(frost$core$String* param0) {

// line 475
frost$core$String$UTF32Iterator* $tmp265 = (frost$core$String$UTF32Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF32Iterator$class);
frost$core$String$UTF32Iterator$init$frost$core$String($tmp265, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp265)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing REF($1:frost.core.String.UTF32Iterator)
return ((frost$collections$Iterator*) $tmp265);

}
frost$core$Int64 frost$core$String$get_length$R$frost$core$Int64(frost$core$String* param0) {

// line 485
ITable* $tmp266 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp266->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp266 = $tmp266->next;
}
$fn268 $tmp267 = $tmp266->methods[0];
frost$collections$Iterator* $tmp269 = $tmp267(((frost$collections$Iterable*) param0));
ITable* $tmp270 = $tmp269->$class->itable;
while ($tmp270->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[2];
frost$core$Int64 $tmp273 = $tmp271($tmp269);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing REF($3:frost.collections.Iterator<frost.collections.Iterable.T>)
return $tmp273;

}
frost$core$Int64 frost$core$String$get_byteLength$R$frost$core$Int64(frost$core$String* param0) {

// line 492
frost$core$Int64* $tmp274 = &param0->_length;
frost$core$Int64 $tmp275 = *$tmp274;
return $tmp275;

}
frost$core$Bit frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 496
frost$core$Int64* $tmp276 = &param0->_length;
frost$core$Int64 $tmp277 = *$tmp276;
frost$core$Int64* $tmp278 = &param1->_length;
frost$core$Int64 $tmp279 = *$tmp278;
int64_t $tmp280 = $tmp277.value;
int64_t $tmp281 = $tmp279.value;
bool $tmp282 = $tmp280 < $tmp281;
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block1; else goto block2;
block1:;
// line 497
frost$core$Bit $tmp285 = frost$core$Bit$init$builtin_bit(false);
return $tmp285;
block2:;
// line 499
frost$core$Int64 $tmp286 = (frost$core$Int64) {0};
frost$core$Int64* $tmp287 = &param1->_length;
frost$core$Int64 $tmp288 = *$tmp287;
frost$core$Bit $tmp289 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp290 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp286, $tmp288, $tmp289);
frost$core$Int64 $tmp291 = $tmp290.min;
*(&local0) = $tmp291;
frost$core$Int64 $tmp292 = $tmp290.max;
frost$core$Bit $tmp293 = $tmp290.inclusive;
bool $tmp294 = $tmp293.value;
frost$core$Int64 $tmp295 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp296 = frost$core$Int64$convert$R$frost$core$UInt64($tmp295);
if ($tmp294) goto block6; else goto block7;
block6:;
int64_t $tmp297 = $tmp291.value;
int64_t $tmp298 = $tmp292.value;
bool $tmp299 = $tmp297 <= $tmp298;
frost$core$Bit $tmp300 = (frost$core$Bit) {$tmp299};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block3; else goto block4;
block7:;
int64_t $tmp302 = $tmp291.value;
int64_t $tmp303 = $tmp292.value;
bool $tmp304 = $tmp302 < $tmp303;
frost$core$Bit $tmp305 = (frost$core$Bit) {$tmp304};
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block3; else goto block4;
block3:;
// line 500
frost$core$Char8** $tmp307 = &param0->data;
frost$core$Char8* $tmp308 = *$tmp307;
frost$core$Int64 $tmp309 = *(&local0);
int64_t $tmp310 = $tmp309.value;
frost$core$Char8 $tmp311 = $tmp308[$tmp310];
frost$core$Char8** $tmp312 = &param1->data;
frost$core$Char8* $tmp313 = *$tmp312;
frost$core$Int64 $tmp314 = *(&local0);
int64_t $tmp315 = $tmp314.value;
frost$core$Char8 $tmp316 = $tmp313[$tmp315];
frost$core$Bit $tmp317 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp311, $tmp316);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block8; else goto block9;
block8:;
// line 501
frost$core$Bit $tmp319 = frost$core$Bit$init$builtin_bit(false);
return $tmp319;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp320 = *(&local0);
int64_t $tmp321 = $tmp292.value;
int64_t $tmp322 = $tmp320.value;
int64_t $tmp323 = $tmp321 - $tmp322;
frost$core$Int64 $tmp324 = (frost$core$Int64) {$tmp323};
frost$core$UInt64 $tmp325 = frost$core$Int64$convert$R$frost$core$UInt64($tmp324);
if ($tmp294) goto block11; else goto block12;
block11:;
uint64_t $tmp326 = $tmp325.value;
uint64_t $tmp327 = $tmp296.value;
bool $tmp328 = $tmp326 >= $tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block10; else goto block4;
block12:;
uint64_t $tmp331 = $tmp325.value;
uint64_t $tmp332 = $tmp296.value;
bool $tmp333 = $tmp331 > $tmp332;
frost$core$Bit $tmp334 = (frost$core$Bit) {$tmp333};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block10; else goto block4;
block10:;
int64_t $tmp336 = $tmp320.value;
int64_t $tmp337 = $tmp295.value;
int64_t $tmp338 = $tmp336 + $tmp337;
frost$core$Int64 $tmp339 = (frost$core$Int64) {$tmp338};
*(&local0) = $tmp339;
goto block3;
block4:;
// line 504
frost$core$Bit $tmp340 = frost$core$Bit$init$builtin_bit(true);
return $tmp340;

}
frost$core$Bit frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 508
frost$core$Int64* $tmp341 = &param0->_length;
frost$core$Int64 $tmp342 = *$tmp341;
frost$core$Int64* $tmp343 = &param1->_length;
frost$core$Int64 $tmp344 = *$tmp343;
int64_t $tmp345 = $tmp342.value;
int64_t $tmp346 = $tmp344.value;
bool $tmp347 = $tmp345 < $tmp346;
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp347};
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block1; else goto block2;
block1:;
// line 509
frost$core$Bit $tmp350 = frost$core$Bit$init$builtin_bit(false);
return $tmp350;
block2:;
// line 511
frost$core$Int64 $tmp351 = (frost$core$Int64) {0};
frost$core$Int64* $tmp352 = &param1->_length;
frost$core$Int64 $tmp353 = *$tmp352;
frost$core$Bit $tmp354 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp355 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp351, $tmp353, $tmp354);
frost$core$Int64 $tmp356 = $tmp355.min;
*(&local0) = $tmp356;
frost$core$Int64 $tmp357 = $tmp355.max;
frost$core$Bit $tmp358 = $tmp355.inclusive;
bool $tmp359 = $tmp358.value;
frost$core$Int64 $tmp360 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp361 = frost$core$Int64$convert$R$frost$core$UInt64($tmp360);
if ($tmp359) goto block6; else goto block7;
block6:;
int64_t $tmp362 = $tmp356.value;
int64_t $tmp363 = $tmp357.value;
bool $tmp364 = $tmp362 <= $tmp363;
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364};
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block3; else goto block4;
block7:;
int64_t $tmp367 = $tmp356.value;
int64_t $tmp368 = $tmp357.value;
bool $tmp369 = $tmp367 < $tmp368;
frost$core$Bit $tmp370 = (frost$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block3; else goto block4;
block3:;
// line 512
frost$core$Char8** $tmp372 = &param0->data;
frost$core$Char8* $tmp373 = *$tmp372;
frost$core$Int64* $tmp374 = &param0->_length;
frost$core$Int64 $tmp375 = *$tmp374;
frost$core$Int64* $tmp376 = &param1->_length;
frost$core$Int64 $tmp377 = *$tmp376;
int64_t $tmp378 = $tmp375.value;
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378 - $tmp379;
frost$core$Int64 $tmp381 = (frost$core$Int64) {$tmp380};
frost$core$Int64 $tmp382 = *(&local0);
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382.value;
int64_t $tmp385 = $tmp383 + $tmp384;
frost$core$Int64 $tmp386 = (frost$core$Int64) {$tmp385};
int64_t $tmp387 = $tmp386.value;
frost$core$Char8 $tmp388 = $tmp373[$tmp387];
frost$core$Char8** $tmp389 = &param1->data;
frost$core$Char8* $tmp390 = *$tmp389;
frost$core$Int64 $tmp391 = *(&local0);
int64_t $tmp392 = $tmp391.value;
frost$core$Char8 $tmp393 = $tmp390[$tmp392];
frost$core$Bit $tmp394 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp388, $tmp393);
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block8; else goto block9;
block8:;
// line 513
frost$core$Bit $tmp396 = frost$core$Bit$init$builtin_bit(false);
return $tmp396;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp397 = *(&local0);
int64_t $tmp398 = $tmp357.value;
int64_t $tmp399 = $tmp397.value;
int64_t $tmp400 = $tmp398 - $tmp399;
frost$core$Int64 $tmp401 = (frost$core$Int64) {$tmp400};
frost$core$UInt64 $tmp402 = frost$core$Int64$convert$R$frost$core$UInt64($tmp401);
if ($tmp359) goto block11; else goto block12;
block11:;
uint64_t $tmp403 = $tmp402.value;
uint64_t $tmp404 = $tmp361.value;
bool $tmp405 = $tmp403 >= $tmp404;
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp405};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block10; else goto block4;
block12:;
uint64_t $tmp408 = $tmp402.value;
uint64_t $tmp409 = $tmp361.value;
bool $tmp410 = $tmp408 > $tmp409;
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block10; else goto block4;
block10:;
int64_t $tmp413 = $tmp397.value;
int64_t $tmp414 = $tmp360.value;
int64_t $tmp415 = $tmp413 + $tmp414;
frost$core$Int64 $tmp416 = (frost$core$Int64) {$tmp415};
*(&local0) = $tmp416;
goto block3;
block4:;
// line 516
frost$core$Bit $tmp417 = frost$core$Bit$init$builtin_bit(true);
return $tmp417;

}
frost$core$String* frost$core$String$get_trimmed$R$frost$core$String(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Bit local1;
frost$core$Int64 local2;
frost$core$Bit local3;
// line 525
frost$core$Int64* $tmp418 = &param0->_length;
frost$core$Int64 $tmp419 = *$tmp418;
frost$core$Int64 $tmp420 = (frost$core$Int64) {0};
frost$core$Bit $tmp421 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp419, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block1; else goto block2;
block1:;
// line 526
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 528
frost$core$Int64 $tmp423 = (frost$core$Int64) {0};
*(&local0) = $tmp423;
// line 529
goto block3;
block3:;
frost$core$Int64 $tmp424 = *(&local0);
frost$core$Int64* $tmp425 = &param0->_length;
frost$core$Int64 $tmp426 = *$tmp425;
int64_t $tmp427 = $tmp424.value;
int64_t $tmp428 = $tmp426.value;
bool $tmp429 = $tmp427 < $tmp428;
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block6; else goto block7;
block6:;
frost$core$Char8** $tmp432 = &param0->data;
frost$core$Char8* $tmp433 = *$tmp432;
frost$core$Int64 $tmp434 = *(&local0);
int64_t $tmp435 = $tmp434.value;
frost$core$Char8 $tmp436 = $tmp433[$tmp435];
frost$core$Bit $tmp437 = frost$core$Char8$isWhitespace$R$frost$core$Bit($tmp436);
*(&local1) = $tmp437;
goto block8;
block7:;
*(&local1) = $tmp430;
goto block8;
block8:;
frost$core$Bit $tmp438 = *(&local1);
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block4; else goto block5;
block4:;
// line 530
frost$core$Int64 $tmp440 = *(&local0);
frost$core$Int64 $tmp441 = (frost$core$Int64) {1};
int64_t $tmp442 = $tmp440.value;
int64_t $tmp443 = $tmp441.value;
int64_t $tmp444 = $tmp442 + $tmp443;
frost$core$Int64 $tmp445 = (frost$core$Int64) {$tmp444};
*(&local0) = $tmp445;
goto block3;
block5:;
// line 533
frost$core$Int64* $tmp446 = &param0->_length;
frost$core$Int64 $tmp447 = *$tmp446;
frost$core$Int64 $tmp448 = (frost$core$Int64) {1};
int64_t $tmp449 = $tmp447.value;
int64_t $tmp450 = $tmp448.value;
int64_t $tmp451 = $tmp449 - $tmp450;
frost$core$Int64 $tmp452 = (frost$core$Int64) {$tmp451};
*(&local2) = $tmp452;
// line 534
goto block9;
block9:;
frost$core$Int64 $tmp453 = *(&local2);
frost$core$Int64 $tmp454 = *(&local0);
int64_t $tmp455 = $tmp453.value;
int64_t $tmp456 = $tmp454.value;
bool $tmp457 = $tmp455 >= $tmp456;
frost$core$Bit $tmp458 = (frost$core$Bit) {$tmp457};
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block12; else goto block13;
block12:;
frost$core$Char8** $tmp460 = &param0->data;
frost$core$Char8* $tmp461 = *$tmp460;
frost$core$Int64 $tmp462 = *(&local2);
int64_t $tmp463 = $tmp462.value;
frost$core$Char8 $tmp464 = $tmp461[$tmp463];
frost$core$Bit $tmp465 = frost$core$Char8$isWhitespace$R$frost$core$Bit($tmp464);
*(&local3) = $tmp465;
goto block14;
block13:;
*(&local3) = $tmp458;
goto block14;
block14:;
frost$core$Bit $tmp466 = *(&local3);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block10; else goto block11;
block10:;
// line 535
frost$core$Int64 $tmp468 = *(&local2);
frost$core$Int64 $tmp469 = (frost$core$Int64) {1};
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469.value;
int64_t $tmp472 = $tmp470 - $tmp471;
frost$core$Int64 $tmp473 = (frost$core$Int64) {$tmp472};
*(&local2) = $tmp473;
goto block9;
block11:;
// line 538
frost$core$Int64 $tmp474 = *(&local0);
frost$core$String$Index $tmp475 = frost$core$String$Index$init$frost$core$Int64($tmp474);
frost$core$Int64 $tmp476 = *(&local2);
frost$core$String$Index $tmp477 = frost$core$String$Index$init$frost$core$Int64($tmp476);
frost$core$Bit $tmp478 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$String$Index$GT $tmp479 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp475, $tmp477, $tmp478);
frost$core$String* $tmp480 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp479);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// unreffing REF($95:frost.core.String)
return $tmp480;

}
frost$core$String* frost$core$String$$ADD$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$Char8* local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 545
frost$core$Int64* $tmp481 = &param0->_length;
frost$core$Int64 $tmp482 = *$tmp481;
frost$core$Int64* $tmp483 = &param1->_length;
frost$core$Int64 $tmp484 = *$tmp483;
int64_t $tmp485 = $tmp482.value;
int64_t $tmp486 = $tmp484.value;
int64_t $tmp487 = $tmp485 + $tmp486;
frost$core$Int64 $tmp488 = (frost$core$Int64) {$tmp487};
int64_t $tmp489 = $tmp488.value;
frost$core$Char8* $tmp490 = ((frost$core$Char8*) frostZAlloc($tmp489 * 1));
*(&local0) = $tmp490;
// line 546
frost$core$Int64 $tmp491 = (frost$core$Int64) {0};
frost$core$Int64* $tmp492 = &param0->_length;
frost$core$Int64 $tmp493 = *$tmp492;
frost$core$Bit $tmp494 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp495 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp491, $tmp493, $tmp494);
frost$core$Int64 $tmp496 = $tmp495.min;
*(&local1) = $tmp496;
frost$core$Int64 $tmp497 = $tmp495.max;
frost$core$Bit $tmp498 = $tmp495.inclusive;
bool $tmp499 = $tmp498.value;
frost$core$Int64 $tmp500 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp501 = frost$core$Int64$convert$R$frost$core$UInt64($tmp500);
if ($tmp499) goto block4; else goto block5;
block4:;
int64_t $tmp502 = $tmp496.value;
int64_t $tmp503 = $tmp497.value;
bool $tmp504 = $tmp502 <= $tmp503;
frost$core$Bit $tmp505 = (frost$core$Bit) {$tmp504};
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block1; else goto block2;
block5:;
int64_t $tmp507 = $tmp496.value;
int64_t $tmp508 = $tmp497.value;
bool $tmp509 = $tmp507 < $tmp508;
frost$core$Bit $tmp510 = (frost$core$Bit) {$tmp509};
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block1; else goto block2;
block1:;
// line 547
frost$core$Char8* $tmp512 = *(&local0);
frost$core$Int64 $tmp513 = *(&local1);
frost$core$Char8** $tmp514 = &param0->data;
frost$core$Char8* $tmp515 = *$tmp514;
frost$core$Int64 $tmp516 = *(&local1);
int64_t $tmp517 = $tmp516.value;
frost$core$Char8 $tmp518 = $tmp515[$tmp517];
int64_t $tmp519 = $tmp513.value;
$tmp512[$tmp519] = $tmp518;
goto block3;
block3:;
frost$core$Int64 $tmp520 = *(&local1);
int64_t $tmp521 = $tmp497.value;
int64_t $tmp522 = $tmp520.value;
int64_t $tmp523 = $tmp521 - $tmp522;
frost$core$Int64 $tmp524 = (frost$core$Int64) {$tmp523};
frost$core$UInt64 $tmp525 = frost$core$Int64$convert$R$frost$core$UInt64($tmp524);
if ($tmp499) goto block7; else goto block8;
block7:;
uint64_t $tmp526 = $tmp525.value;
uint64_t $tmp527 = $tmp501.value;
bool $tmp528 = $tmp526 >= $tmp527;
frost$core$Bit $tmp529 = (frost$core$Bit) {$tmp528};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block6; else goto block2;
block8:;
uint64_t $tmp531 = $tmp525.value;
uint64_t $tmp532 = $tmp501.value;
bool $tmp533 = $tmp531 > $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block6; else goto block2;
block6:;
int64_t $tmp536 = $tmp520.value;
int64_t $tmp537 = $tmp500.value;
int64_t $tmp538 = $tmp536 + $tmp537;
frost$core$Int64 $tmp539 = (frost$core$Int64) {$tmp538};
*(&local1) = $tmp539;
goto block1;
block2:;
// line 549
frost$core$Int64 $tmp540 = (frost$core$Int64) {0};
frost$core$Int64* $tmp541 = &param1->_length;
frost$core$Int64 $tmp542 = *$tmp541;
frost$core$Bit $tmp543 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp544 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp540, $tmp542, $tmp543);
frost$core$Int64 $tmp545 = $tmp544.min;
*(&local2) = $tmp545;
frost$core$Int64 $tmp546 = $tmp544.max;
frost$core$Bit $tmp547 = $tmp544.inclusive;
bool $tmp548 = $tmp547.value;
frost$core$Int64 $tmp549 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp550 = frost$core$Int64$convert$R$frost$core$UInt64($tmp549);
if ($tmp548) goto block12; else goto block13;
block12:;
int64_t $tmp551 = $tmp545.value;
int64_t $tmp552 = $tmp546.value;
bool $tmp553 = $tmp551 <= $tmp552;
frost$core$Bit $tmp554 = (frost$core$Bit) {$tmp553};
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block9; else goto block10;
block13:;
int64_t $tmp556 = $tmp545.value;
int64_t $tmp557 = $tmp546.value;
bool $tmp558 = $tmp556 < $tmp557;
frost$core$Bit $tmp559 = (frost$core$Bit) {$tmp558};
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block9; else goto block10;
block9:;
// line 550
frost$core$Char8* $tmp561 = *(&local0);
frost$core$Int64* $tmp562 = &param0->_length;
frost$core$Int64 $tmp563 = *$tmp562;
frost$core$Int64 $tmp564 = *(&local2);
int64_t $tmp565 = $tmp563.value;
int64_t $tmp566 = $tmp564.value;
int64_t $tmp567 = $tmp565 + $tmp566;
frost$core$Int64 $tmp568 = (frost$core$Int64) {$tmp567};
frost$core$Char8** $tmp569 = &param1->data;
frost$core$Char8* $tmp570 = *$tmp569;
frost$core$Int64 $tmp571 = *(&local2);
int64_t $tmp572 = $tmp571.value;
frost$core$Char8 $tmp573 = $tmp570[$tmp572];
int64_t $tmp574 = $tmp568.value;
$tmp561[$tmp574] = $tmp573;
goto block11;
block11:;
frost$core$Int64 $tmp575 = *(&local2);
int64_t $tmp576 = $tmp546.value;
int64_t $tmp577 = $tmp575.value;
int64_t $tmp578 = $tmp576 - $tmp577;
frost$core$Int64 $tmp579 = (frost$core$Int64) {$tmp578};
frost$core$UInt64 $tmp580 = frost$core$Int64$convert$R$frost$core$UInt64($tmp579);
if ($tmp548) goto block15; else goto block16;
block15:;
uint64_t $tmp581 = $tmp580.value;
uint64_t $tmp582 = $tmp550.value;
bool $tmp583 = $tmp581 >= $tmp582;
frost$core$Bit $tmp584 = (frost$core$Bit) {$tmp583};
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block14; else goto block10;
block16:;
uint64_t $tmp586 = $tmp580.value;
uint64_t $tmp587 = $tmp550.value;
bool $tmp588 = $tmp586 > $tmp587;
frost$core$Bit $tmp589 = (frost$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block14; else goto block10;
block14:;
int64_t $tmp591 = $tmp575.value;
int64_t $tmp592 = $tmp549.value;
int64_t $tmp593 = $tmp591 + $tmp592;
frost$core$Int64 $tmp594 = (frost$core$Int64) {$tmp593};
*(&local2) = $tmp594;
goto block9;
block10:;
// line 552
frost$core$String* $tmp595 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp596 = *(&local0);
frost$core$Int64* $tmp597 = &param0->_length;
frost$core$Int64 $tmp598 = *$tmp597;
frost$core$Int64* $tmp599 = &param1->_length;
frost$core$Int64 $tmp600 = *$tmp599;
int64_t $tmp601 = $tmp598.value;
int64_t $tmp602 = $tmp600.value;
int64_t $tmp603 = $tmp601 + $tmp602;
frost$core$Int64 $tmp604 = (frost$core$Int64) {$tmp603};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp595, $tmp596, $tmp604);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// unreffing REF($143:frost.core.String)
return $tmp595;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$R$frost$core$String(frost$core$String* param0, frost$core$Object* param1) {

// line 560
$fn606 $tmp605 = ($fn606) param1->$class->vtable[0];
frost$core$String* $tmp607 = $tmp605(param1);
frost$core$String* $tmp608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp607);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
// unreffing REF($2:frost.core.String)
return $tmp608;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp609 = (frost$core$Int64) {0};
int64_t $tmp610 = param1.value;
int64_t $tmp611 = $tmp609.value;
bool $tmp612 = $tmp610 >= $tmp611;
frost$core$Bit $tmp613 = (frost$core$Bit) {$tmp612};
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp615 = (frost$core$Int64) {567};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s616, $tmp615, &$s617);
abort(); // unreachable
block1:;
// line 568
frost$core$MutableString* $tmp618 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp618);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$MutableString* $tmp619 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local0) = $tmp618;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
// unreffing REF($11:frost.core.MutableString)
// line 569
frost$core$Int64 $tmp620 = (frost$core$Int64) {0};
frost$core$Bit $tmp621 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp622 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp620, param1, $tmp621);
frost$core$Int64 $tmp623 = $tmp622.min;
*(&local1) = $tmp623;
frost$core$Int64 $tmp624 = $tmp622.max;
frost$core$Bit $tmp625 = $tmp622.inclusive;
bool $tmp626 = $tmp625.value;
frost$core$Int64 $tmp627 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp628 = frost$core$Int64$convert$R$frost$core$UInt64($tmp627);
if ($tmp626) goto block6; else goto block7;
block6:;
int64_t $tmp629 = $tmp623.value;
int64_t $tmp630 = $tmp624.value;
bool $tmp631 = $tmp629 <= $tmp630;
frost$core$Bit $tmp632 = (frost$core$Bit) {$tmp631};
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block3; else goto block4;
block7:;
int64_t $tmp634 = $tmp623.value;
int64_t $tmp635 = $tmp624.value;
bool $tmp636 = $tmp634 < $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block3; else goto block4;
block3:;
// line 570
frost$core$MutableString* $tmp639 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp639, param0);
goto block5;
block5:;
frost$core$Int64 $tmp640 = *(&local1);
int64_t $tmp641 = $tmp624.value;
int64_t $tmp642 = $tmp640.value;
int64_t $tmp643 = $tmp641 - $tmp642;
frost$core$Int64 $tmp644 = (frost$core$Int64) {$tmp643};
frost$core$UInt64 $tmp645 = frost$core$Int64$convert$R$frost$core$UInt64($tmp644);
if ($tmp626) goto block9; else goto block10;
block9:;
uint64_t $tmp646 = $tmp645.value;
uint64_t $tmp647 = $tmp628.value;
bool $tmp648 = $tmp646 >= $tmp647;
frost$core$Bit $tmp649 = (frost$core$Bit) {$tmp648};
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block8; else goto block4;
block10:;
uint64_t $tmp651 = $tmp645.value;
uint64_t $tmp652 = $tmp628.value;
bool $tmp653 = $tmp651 > $tmp652;
frost$core$Bit $tmp654 = (frost$core$Bit) {$tmp653};
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block8; else goto block4;
block8:;
int64_t $tmp656 = $tmp640.value;
int64_t $tmp657 = $tmp627.value;
int64_t $tmp658 = $tmp656 + $tmp657;
frost$core$Int64 $tmp659 = (frost$core$Int64) {$tmp658};
*(&local1) = $tmp659;
goto block3;
block4:;
// line 572
frost$core$MutableString* $tmp660 = *(&local0);
frost$core$String* $tmp661 = frost$core$MutableString$finish$R$frost$core$String($tmp660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
// unreffing REF($78:frost.core.String)
frost$core$MutableString* $tmp662 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp661;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int64$frost$core$String$R$frost$core$String(frost$core$Int64 param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp663 = (frost$core$Int64) {0};
int64_t $tmp664 = param0.value;
int64_t $tmp665 = $tmp663.value;
bool $tmp666 = $tmp664 >= $tmp665;
frost$core$Bit $tmp667 = (frost$core$Bit) {$tmp666};
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp669 = (frost$core$Int64) {580};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s670, $tmp669, &$s671);
abort(); // unreachable
block1:;
// line 581
frost$core$MutableString* $tmp672 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp672);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
frost$core$MutableString* $tmp673 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local0) = $tmp672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
// unreffing REF($11:frost.core.MutableString)
// line 582
frost$core$Int64 $tmp674 = (frost$core$Int64) {0};
frost$core$Bit $tmp675 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp676 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp674, param0, $tmp675);
frost$core$Int64 $tmp677 = $tmp676.min;
*(&local1) = $tmp677;
frost$core$Int64 $tmp678 = $tmp676.max;
frost$core$Bit $tmp679 = $tmp676.inclusive;
bool $tmp680 = $tmp679.value;
frost$core$Int64 $tmp681 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp682 = frost$core$Int64$convert$R$frost$core$UInt64($tmp681);
if ($tmp680) goto block6; else goto block7;
block6:;
int64_t $tmp683 = $tmp677.value;
int64_t $tmp684 = $tmp678.value;
bool $tmp685 = $tmp683 <= $tmp684;
frost$core$Bit $tmp686 = (frost$core$Bit) {$tmp685};
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block3; else goto block4;
block7:;
int64_t $tmp688 = $tmp677.value;
int64_t $tmp689 = $tmp678.value;
bool $tmp690 = $tmp688 < $tmp689;
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block3; else goto block4;
block3:;
// line 583
frost$core$MutableString* $tmp693 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp693, param1);
goto block5;
block5:;
frost$core$Int64 $tmp694 = *(&local1);
int64_t $tmp695 = $tmp678.value;
int64_t $tmp696 = $tmp694.value;
int64_t $tmp697 = $tmp695 - $tmp696;
frost$core$Int64 $tmp698 = (frost$core$Int64) {$tmp697};
frost$core$UInt64 $tmp699 = frost$core$Int64$convert$R$frost$core$UInt64($tmp698);
if ($tmp680) goto block9; else goto block10;
block9:;
uint64_t $tmp700 = $tmp699.value;
uint64_t $tmp701 = $tmp682.value;
bool $tmp702 = $tmp700 >= $tmp701;
frost$core$Bit $tmp703 = (frost$core$Bit) {$tmp702};
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block8; else goto block4;
block10:;
uint64_t $tmp705 = $tmp699.value;
uint64_t $tmp706 = $tmp682.value;
bool $tmp707 = $tmp705 > $tmp706;
frost$core$Bit $tmp708 = (frost$core$Bit) {$tmp707};
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block8; else goto block4;
block8:;
int64_t $tmp710 = $tmp694.value;
int64_t $tmp711 = $tmp681.value;
int64_t $tmp712 = $tmp710 + $tmp711;
frost$core$Int64 $tmp713 = (frost$core$Int64) {$tmp712};
*(&local1) = $tmp713;
goto block3;
block4:;
// line 585
frost$core$MutableString* $tmp714 = *(&local0);
frost$core$String* $tmp715 = frost$core$MutableString$finish$R$frost$core$String($tmp714);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// unreffing REF($78:frost.core.String)
frost$core$MutableString* $tmp716 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp715;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(frost$core$Object* param0, frost$core$String* param1) {

// line 594
$fn718 $tmp717 = ($fn718) param0->$class->vtable[0];
frost$core$String* $tmp719 = $tmp717(param0);
frost$core$String* $tmp720 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp719, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
// unreffing REF($2:frost.core.String)
return $tmp720;

}
frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 607
frost$core$Int64* $tmp721 = &param0->_length;
frost$core$Int64 $tmp722 = *$tmp721;
frost$core$Int64* $tmp723 = &param1->_length;
frost$core$Int64 $tmp724 = *$tmp723;
int64_t $tmp725 = $tmp722.value;
int64_t $tmp726 = $tmp724.value;
bool $tmp727 = $tmp725 != $tmp726;
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block1; else goto block2;
block1:;
// line 608
frost$core$Bit $tmp730 = frost$core$Bit$init$builtin_bit(false);
return $tmp730;
block2:;
// line 610
frost$core$Int64 $tmp731 = (frost$core$Int64) {0};
frost$core$Int64* $tmp732 = &param0->_length;
frost$core$Int64 $tmp733 = *$tmp732;
frost$core$Bit $tmp734 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp735 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp731, $tmp733, $tmp734);
frost$core$Int64 $tmp736 = $tmp735.min;
*(&local0) = $tmp736;
frost$core$Int64 $tmp737 = $tmp735.max;
frost$core$Bit $tmp738 = $tmp735.inclusive;
bool $tmp739 = $tmp738.value;
frost$core$Int64 $tmp740 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp741 = frost$core$Int64$convert$R$frost$core$UInt64($tmp740);
if ($tmp739) goto block6; else goto block7;
block6:;
int64_t $tmp742 = $tmp736.value;
int64_t $tmp743 = $tmp737.value;
bool $tmp744 = $tmp742 <= $tmp743;
frost$core$Bit $tmp745 = (frost$core$Bit) {$tmp744};
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block3; else goto block4;
block7:;
int64_t $tmp747 = $tmp736.value;
int64_t $tmp748 = $tmp737.value;
bool $tmp749 = $tmp747 < $tmp748;
frost$core$Bit $tmp750 = (frost$core$Bit) {$tmp749};
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block3; else goto block4;
block3:;
// line 611
frost$core$Char8** $tmp752 = &param0->data;
frost$core$Char8* $tmp753 = *$tmp752;
frost$core$Int64 $tmp754 = *(&local0);
int64_t $tmp755 = $tmp754.value;
frost$core$Char8 $tmp756 = $tmp753[$tmp755];
frost$core$Char8** $tmp757 = &param1->data;
frost$core$Char8* $tmp758 = *$tmp757;
frost$core$Int64 $tmp759 = *(&local0);
int64_t $tmp760 = $tmp759.value;
frost$core$Char8 $tmp761 = $tmp758[$tmp760];
frost$core$Bit $tmp762 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp756, $tmp761);
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block8; else goto block9;
block8:;
// line 612
frost$core$Bit $tmp764 = frost$core$Bit$init$builtin_bit(false);
return $tmp764;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp765 = *(&local0);
int64_t $tmp766 = $tmp737.value;
int64_t $tmp767 = $tmp765.value;
int64_t $tmp768 = $tmp766 - $tmp767;
frost$core$Int64 $tmp769 = (frost$core$Int64) {$tmp768};
frost$core$UInt64 $tmp770 = frost$core$Int64$convert$R$frost$core$UInt64($tmp769);
if ($tmp739) goto block11; else goto block12;
block11:;
uint64_t $tmp771 = $tmp770.value;
uint64_t $tmp772 = $tmp741.value;
bool $tmp773 = $tmp771 >= $tmp772;
frost$core$Bit $tmp774 = (frost$core$Bit) {$tmp773};
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block10; else goto block4;
block12:;
uint64_t $tmp776 = $tmp770.value;
uint64_t $tmp777 = $tmp741.value;
bool $tmp778 = $tmp776 > $tmp777;
frost$core$Bit $tmp779 = (frost$core$Bit) {$tmp778};
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block10; else goto block4;
block10:;
int64_t $tmp781 = $tmp765.value;
int64_t $tmp782 = $tmp740.value;
int64_t $tmp783 = $tmp781 + $tmp782;
frost$core$Int64 $tmp784 = (frost$core$Int64) {$tmp783};
*(&local0) = $tmp784;
goto block3;
block4:;
// line 615
frost$core$Bit $tmp785 = frost$core$Bit$init$builtin_bit(true);
return $tmp785;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// line 622
frost$core$Int64 $tmp786 = param1.value;
*(&local0) = $tmp786;
// line 623
frost$core$Char8** $tmp787 = &param0->data;
frost$core$Char8* $tmp788 = *$tmp787;
frost$core$Int64 $tmp789 = *(&local0);
int64_t $tmp790 = $tmp789.value;
frost$core$Char8 $tmp791 = $tmp788[$tmp790];
*(&local1) = $tmp791;
// line 624
frost$core$Char8 $tmp792 = *(&local1);
frost$core$Int32 $tmp793 = frost$core$Char8$convert$R$frost$core$Int32($tmp792);
*(&local2) = $tmp793;
// line 625
frost$core$Char8 $tmp794 = *(&local1);
uint8_t $tmp795 = $tmp794.value;
int64_t $tmp796 = ((int64_t) $tmp795) & 255;
bool $tmp797 = $tmp796 < 192;
frost$core$Bit $tmp798 = frost$core$Bit$init$builtin_bit($tmp797);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block1; else goto block2;
block1:;
// line 626
frost$core$Int32 $tmp800 = *(&local2);
frost$core$Char32 $tmp801 = frost$core$Char32$init$frost$core$Int32($tmp800);
return $tmp801;
block2:;
// line 628
frost$core$Char8 $tmp802 = *(&local1);
uint8_t $tmp803 = $tmp802.value;
int64_t $tmp804 = ((int64_t) $tmp803) & 255;
bool $tmp805 = $tmp804 < 224;
frost$core$Bit $tmp806 = frost$core$Bit$init$builtin_bit($tmp805);
bool $tmp807 = $tmp806.value;
if ($tmp807) goto block3; else goto block4;
block3:;
// line 629
frost$core$Int64 $tmp808 = *(&local0);
frost$core$Int64 $tmp809 = (frost$core$Int64) {1};
int64_t $tmp810 = $tmp808.value;
int64_t $tmp811 = $tmp809.value;
int64_t $tmp812 = $tmp810 + $tmp811;
frost$core$Int64 $tmp813 = (frost$core$Int64) {$tmp812};
frost$core$Int64* $tmp814 = &param0->_length;
frost$core$Int64 $tmp815 = *$tmp814;
int64_t $tmp816 = $tmp813.value;
int64_t $tmp817 = $tmp815.value;
bool $tmp818 = $tmp816 < $tmp817;
frost$core$Bit $tmp819 = (frost$core$Bit) {$tmp818};
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp821 = (frost$core$Int64) {629};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s822, $tmp821);
abort(); // unreachable
block5:;
// line 630
frost$core$Int32 $tmp823 = *(&local2);
frost$core$Int32 $tmp824 = (frost$core$Int32) {31};
frost$core$Int32 $tmp825 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp823, $tmp824);
frost$core$Int32 $tmp826 = (frost$core$Int32) {6};
frost$core$Int32 $tmp827 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp825, $tmp826);
frost$core$Char8** $tmp828 = &param0->data;
frost$core$Char8* $tmp829 = *$tmp828;
frost$core$Int64 $tmp830 = *(&local0);
frost$core$Int64 $tmp831 = (frost$core$Int64) {1};
int64_t $tmp832 = $tmp830.value;
int64_t $tmp833 = $tmp831.value;
int64_t $tmp834 = $tmp832 + $tmp833;
frost$core$Int64 $tmp835 = (frost$core$Int64) {$tmp834};
int64_t $tmp836 = $tmp835.value;
frost$core$Char8 $tmp837 = $tmp829[$tmp836];
frost$core$Int32 $tmp838 = frost$core$Char8$convert$R$frost$core$Int32($tmp837);
frost$core$Int32 $tmp839 = (frost$core$Int32) {63};
frost$core$Int32 $tmp840 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp838, $tmp839);
int32_t $tmp841 = $tmp827.value;
int32_t $tmp842 = $tmp840.value;
int32_t $tmp843 = $tmp841 + $tmp842;
frost$core$Int32 $tmp844 = (frost$core$Int32) {$tmp843};
*(&local2) = $tmp844;
// line 631
frost$core$Int32 $tmp845 = *(&local2);
frost$core$Char32 $tmp846 = frost$core$Char32$init$frost$core$Int32($tmp845);
return $tmp846;
block4:;
// line 633
frost$core$Char8 $tmp847 = *(&local1);
uint8_t $tmp848 = $tmp847.value;
int64_t $tmp849 = ((int64_t) $tmp848) & 255;
bool $tmp850 = $tmp849 < 240;
frost$core$Bit $tmp851 = frost$core$Bit$init$builtin_bit($tmp850);
bool $tmp852 = $tmp851.value;
if ($tmp852) goto block7; else goto block8;
block7:;
// line 634
frost$core$Int64 $tmp853 = *(&local0);
frost$core$Int64 $tmp854 = (frost$core$Int64) {2};
int64_t $tmp855 = $tmp853.value;
int64_t $tmp856 = $tmp854.value;
int64_t $tmp857 = $tmp855 + $tmp856;
frost$core$Int64 $tmp858 = (frost$core$Int64) {$tmp857};
frost$core$Int64* $tmp859 = &param0->_length;
frost$core$Int64 $tmp860 = *$tmp859;
int64_t $tmp861 = $tmp858.value;
int64_t $tmp862 = $tmp860.value;
bool $tmp863 = $tmp861 < $tmp862;
frost$core$Bit $tmp864 = (frost$core$Bit) {$tmp863};
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp866 = (frost$core$Int64) {634};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s867, $tmp866);
abort(); // unreachable
block9:;
// line 635
frost$core$Int32 $tmp868 = *(&local2);
frost$core$Int32 $tmp869 = (frost$core$Int32) {15};
frost$core$Int32 $tmp870 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp868, $tmp869);
frost$core$Int32 $tmp871 = (frost$core$Int32) {12};
frost$core$Int32 $tmp872 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp870, $tmp871);
frost$core$Char8** $tmp873 = &param0->data;
frost$core$Char8* $tmp874 = *$tmp873;
frost$core$Int64 $tmp875 = *(&local0);
frost$core$Int64 $tmp876 = (frost$core$Int64) {1};
int64_t $tmp877 = $tmp875.value;
int64_t $tmp878 = $tmp876.value;
int64_t $tmp879 = $tmp877 + $tmp878;
frost$core$Int64 $tmp880 = (frost$core$Int64) {$tmp879};
int64_t $tmp881 = $tmp880.value;
frost$core$Char8 $tmp882 = $tmp874[$tmp881];
frost$core$Int32 $tmp883 = frost$core$Char8$convert$R$frost$core$Int32($tmp882);
frost$core$Int32 $tmp884 = (frost$core$Int32) {63};
frost$core$Int32 $tmp885 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp883, $tmp884);
frost$core$Int32 $tmp886 = (frost$core$Int32) {6};
frost$core$Int32 $tmp887 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp885, $tmp886);
int32_t $tmp888 = $tmp872.value;
int32_t $tmp889 = $tmp887.value;
int32_t $tmp890 = $tmp888 + $tmp889;
frost$core$Int32 $tmp891 = (frost$core$Int32) {$tmp890};
frost$core$Char8** $tmp892 = &param0->data;
frost$core$Char8* $tmp893 = *$tmp892;
frost$core$Int64 $tmp894 = *(&local0);
frost$core$Int64 $tmp895 = (frost$core$Int64) {2};
int64_t $tmp896 = $tmp894.value;
int64_t $tmp897 = $tmp895.value;
int64_t $tmp898 = $tmp896 + $tmp897;
frost$core$Int64 $tmp899 = (frost$core$Int64) {$tmp898};
int64_t $tmp900 = $tmp899.value;
frost$core$Char8 $tmp901 = $tmp893[$tmp900];
frost$core$Int32 $tmp902 = frost$core$Char8$convert$R$frost$core$Int32($tmp901);
frost$core$Int32 $tmp903 = (frost$core$Int32) {63};
frost$core$Int32 $tmp904 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp902, $tmp903);
int32_t $tmp905 = $tmp891.value;
int32_t $tmp906 = $tmp904.value;
int32_t $tmp907 = $tmp905 + $tmp906;
frost$core$Int32 $tmp908 = (frost$core$Int32) {$tmp907};
*(&local2) = $tmp908;
// line 637
frost$core$Int32 $tmp909 = *(&local2);
frost$core$Char32 $tmp910 = frost$core$Char32$init$frost$core$Int32($tmp909);
return $tmp910;
block8:;
// line 639
frost$core$Int64 $tmp911 = *(&local0);
frost$core$Int64 $tmp912 = (frost$core$Int64) {3};
int64_t $tmp913 = $tmp911.value;
int64_t $tmp914 = $tmp912.value;
int64_t $tmp915 = $tmp913 + $tmp914;
frost$core$Int64 $tmp916 = (frost$core$Int64) {$tmp915};
frost$core$Int64* $tmp917 = &param0->_length;
frost$core$Int64 $tmp918 = *$tmp917;
int64_t $tmp919 = $tmp916.value;
int64_t $tmp920 = $tmp918.value;
bool $tmp921 = $tmp919 < $tmp920;
frost$core$Bit $tmp922 = (frost$core$Bit) {$tmp921};
bool $tmp923 = $tmp922.value;
if ($tmp923) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp924 = (frost$core$Int64) {639};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s925, $tmp924);
abort(); // unreachable
block11:;
// line 640
frost$core$Int32 $tmp926 = *(&local2);
frost$core$Int32 $tmp927 = (frost$core$Int32) {7};
frost$core$Int32 $tmp928 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp926, $tmp927);
frost$core$Int32 $tmp929 = (frost$core$Int32) {18};
frost$core$Int32 $tmp930 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp928, $tmp929);
frost$core$Char8** $tmp931 = &param0->data;
frost$core$Char8* $tmp932 = *$tmp931;
frost$core$Int64 $tmp933 = *(&local0);
frost$core$Int64 $tmp934 = (frost$core$Int64) {1};
int64_t $tmp935 = $tmp933.value;
int64_t $tmp936 = $tmp934.value;
int64_t $tmp937 = $tmp935 + $tmp936;
frost$core$Int64 $tmp938 = (frost$core$Int64) {$tmp937};
int64_t $tmp939 = $tmp938.value;
frost$core$Char8 $tmp940 = $tmp932[$tmp939];
frost$core$Int32 $tmp941 = frost$core$Char8$convert$R$frost$core$Int32($tmp940);
frost$core$Int32 $tmp942 = (frost$core$Int32) {63};
frost$core$Int32 $tmp943 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp941, $tmp942);
frost$core$Int32 $tmp944 = (frost$core$Int32) {12};
frost$core$Int32 $tmp945 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp943, $tmp944);
int32_t $tmp946 = $tmp930.value;
int32_t $tmp947 = $tmp945.value;
int32_t $tmp948 = $tmp946 + $tmp947;
frost$core$Int32 $tmp949 = (frost$core$Int32) {$tmp948};
frost$core$Char8** $tmp950 = &param0->data;
frost$core$Char8* $tmp951 = *$tmp950;
frost$core$Int64 $tmp952 = *(&local0);
frost$core$Int64 $tmp953 = (frost$core$Int64) {2};
int64_t $tmp954 = $tmp952.value;
int64_t $tmp955 = $tmp953.value;
int64_t $tmp956 = $tmp954 + $tmp955;
frost$core$Int64 $tmp957 = (frost$core$Int64) {$tmp956};
int64_t $tmp958 = $tmp957.value;
frost$core$Char8 $tmp959 = $tmp951[$tmp958];
frost$core$Int32 $tmp960 = frost$core$Char8$convert$R$frost$core$Int32($tmp959);
frost$core$Int32 $tmp961 = (frost$core$Int32) {63};
frost$core$Int32 $tmp962 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp960, $tmp961);
frost$core$Int32 $tmp963 = (frost$core$Int32) {6};
frost$core$Int32 $tmp964 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp962, $tmp963);
int32_t $tmp965 = $tmp949.value;
int32_t $tmp966 = $tmp964.value;
int32_t $tmp967 = $tmp965 + $tmp966;
frost$core$Int32 $tmp968 = (frost$core$Int32) {$tmp967};
frost$core$Char8** $tmp969 = &param0->data;
frost$core$Char8* $tmp970 = *$tmp969;
frost$core$Int64 $tmp971 = *(&local0);
frost$core$Int64 $tmp972 = (frost$core$Int64) {3};
int64_t $tmp973 = $tmp971.value;
int64_t $tmp974 = $tmp972.value;
int64_t $tmp975 = $tmp973 + $tmp974;
frost$core$Int64 $tmp976 = (frost$core$Int64) {$tmp975};
int64_t $tmp977 = $tmp976.value;
frost$core$Char8 $tmp978 = $tmp970[$tmp977];
frost$core$Int32 $tmp979 = frost$core$Char8$convert$R$frost$core$Int32($tmp978);
frost$core$Int32 $tmp980 = (frost$core$Int32) {63};
frost$core$Int32 $tmp981 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp979, $tmp980);
int32_t $tmp982 = $tmp968.value;
int32_t $tmp983 = $tmp981.value;
int32_t $tmp984 = $tmp982 + $tmp983;
frost$core$Int32 $tmp985 = (frost$core$Int32) {$tmp984};
*(&local2) = $tmp985;
// line 643
frost$core$Int32 $tmp986 = *(&local2);
frost$core$Char32 $tmp987 = frost$core$Char32$init$frost$core$Int32($tmp986);
return $tmp987;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32(frost$core$String* param0, frost$core$Int64 param1) {

// line 652
frost$core$String$Index $tmp988 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$String$Index $tmp989 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp988, param1);
frost$core$Char32 $tmp990 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp989);
return $tmp990;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
// line 665
frost$core$String$Index $tmp991 = param1.max;
frost$core$Int64 $tmp992 = $tmp991.value;
frost$core$String$Index $tmp993 = param1.min;
frost$core$Int64 $tmp994 = $tmp993.value;
int64_t $tmp995 = $tmp992.value;
int64_t $tmp996 = $tmp994.value;
int64_t $tmp997 = $tmp995 - $tmp996;
frost$core$Int64 $tmp998 = (frost$core$Int64) {$tmp997};
*(&local0) = $tmp998;
// line 666
frost$core$Bit $tmp999 = param1.inclusive;
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block1; else goto block2;
block1:;
// line 667
frost$core$Int64 $tmp1001 = *(&local0);
frost$core$Int64 $tmp1002 = (frost$core$Int64) {1};
int64_t $tmp1003 = $tmp1001.value;
int64_t $tmp1004 = $tmp1002.value;
int64_t $tmp1005 = $tmp1003 + $tmp1004;
frost$core$Int64 $tmp1006 = (frost$core$Int64) {$tmp1005};
*(&local0) = $tmp1006;
goto block2;
block2:;
// line 669
frost$core$String* $tmp1007 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8** $tmp1008 = &param0->data;
frost$core$Char8* $tmp1009 = *$tmp1008;
frost$core$String$Index $tmp1010 = param1.min;
frost$core$Int64 $tmp1011 = $tmp1010.value;
int64_t $tmp1012 = $tmp1011.value;
frost$core$Char8* $tmp1013 = $tmp1009 + $tmp1012;
frost$core$Int64 $tmp1014 = *(&local0);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$frost$core$String($tmp1007, $tmp1013, $tmp1014, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
// unreffing REF($24:frost.core.String)
return $tmp1007;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$Bit local1;
frost$core$String$Index local2;
// line 685
// line 686
frost$core$String$Index$nullable $tmp1015 = param1.min;
frost$core$Bit $tmp1016 = frost$core$Bit$init$builtin_bit($tmp1015.nonnull);
bool $tmp1017 = $tmp1016.value;
if ($tmp1017) goto block1; else goto block3;
block1:;
// line 687
frost$core$String$Index$nullable $tmp1018 = param1.min;
*(&local0) = ((frost$core$String$Index) $tmp1018.value);
goto block2;
block3:;
// line 1
// line 690
frost$core$String$Index $tmp1019 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1019;
goto block2;
block2:;
// line 693
frost$core$Bit $tmp1020 = param1.inclusive;
*(&local1) = $tmp1020;
// line 694
// line 695
frost$core$String$Index$nullable $tmp1021 = param1.max;
frost$core$Bit $tmp1022 = frost$core$Bit$init$builtin_bit($tmp1021.nonnull);
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block4; else goto block6;
block4:;
// line 696
frost$core$String$Index$nullable $tmp1024 = param1.max;
*(&local2) = ((frost$core$String$Index) $tmp1024.value);
goto block5;
block6:;
// line 1
// line 699
frost$core$String$Index $tmp1025 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1025;
// line 700
frost$core$Bit $tmp1026 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1026;
goto block5;
block5:;
// line 702
frost$core$String$Index $tmp1027 = *(&local0);
frost$core$String$Index $tmp1028 = *(&local2);
frost$core$Bit $tmp1029 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1030 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1027, $tmp1028, $tmp1029);
frost$core$String* $tmp1031 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1030);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
// unreffing REF($45:frost.core.String)
return $tmp1031;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
frost$core$Char8 local3;
// line 710
frost$core$String$Index $tmp1032 = param1.min;
frost$core$Int64 $tmp1033 = $tmp1032.value;
*(&local0) = $tmp1033;
// line 711
frost$core$MutableString* $tmp1034 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1034);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
frost$core$MutableString* $tmp1035 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
*(&local1) = $tmp1034;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
// unreffing REF($5:frost.core.MutableString)
// line 712
frost$core$String$Index $tmp1036 = param1.max;
frost$core$Int64 $tmp1037 = $tmp1036.value;
*(&local2) = $tmp1037;
// line 713
frost$core$Bit $tmp1038 = param1.inclusive;
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block1; else goto block2;
block1:;
// line 714
frost$core$Int64 $tmp1040 = *(&local2);
frost$core$Int64 $tmp1041 = (frost$core$Int64) {1};
int64_t $tmp1042 = $tmp1040.value;
int64_t $tmp1043 = $tmp1041.value;
int64_t $tmp1044 = $tmp1042 + $tmp1043;
frost$core$Int64 $tmp1045 = (frost$core$Int64) {$tmp1044};
*(&local2) = $tmp1045;
goto block2;
block2:;
// line 716
goto block3;
block3:;
frost$core$Int64 $tmp1046 = *(&local0);
frost$core$Int64 $tmp1047 = *(&local2);
int64_t $tmp1048 = $tmp1046.value;
int64_t $tmp1049 = $tmp1047.value;
bool $tmp1050 = $tmp1048 < $tmp1049;
frost$core$Bit $tmp1051 = (frost$core$Bit) {$tmp1050};
bool $tmp1052 = $tmp1051.value;
if ($tmp1052) goto block4; else goto block5;
block4:;
// line 717
frost$core$Char8** $tmp1053 = &param0->data;
frost$core$Char8* $tmp1054 = *$tmp1053;
frost$core$Int64 $tmp1055 = *(&local0);
int64_t $tmp1056 = $tmp1055.value;
frost$core$Char8 $tmp1057 = $tmp1054[$tmp1056];
*(&local3) = $tmp1057;
// line 718
frost$core$MutableString* $tmp1058 = *(&local1);
frost$core$Char8 $tmp1059 = *(&local3);
frost$core$MutableString$append$frost$core$Char8($tmp1058, $tmp1059);
// line 719
frost$core$Int64 $tmp1060 = *(&local0);
frost$core$Int64 $tmp1061 = (frost$core$Int64) {1};
int64_t $tmp1062 = $tmp1060.value;
int64_t $tmp1063 = $tmp1061.value;
int64_t $tmp1064 = $tmp1062 + $tmp1063;
frost$core$Int64 $tmp1065 = (frost$core$Int64) {$tmp1064};
*(&local0) = $tmp1065;
// line 720
frost$core$Char8 $tmp1066 = *(&local3);
uint8_t $tmp1067 = $tmp1066.value;
int64_t $tmp1068 = ((int64_t) $tmp1067) & 255;
bool $tmp1069 = $tmp1068 >= 192;
frost$core$Bit $tmp1070 = frost$core$Bit$init$builtin_bit($tmp1069);
bool $tmp1071 = $tmp1070.value;
if ($tmp1071) goto block6; else goto block7;
block6:;
// line 721
frost$core$MutableString* $tmp1072 = *(&local1);
frost$core$Char8** $tmp1073 = &param0->data;
frost$core$Char8* $tmp1074 = *$tmp1073;
frost$core$Int64 $tmp1075 = *(&local0);
int64_t $tmp1076 = $tmp1075.value;
frost$core$Char8 $tmp1077 = $tmp1074[$tmp1076];
frost$core$MutableString$append$frost$core$Char8($tmp1072, $tmp1077);
// line 722
frost$core$Int64 $tmp1078 = *(&local0);
frost$core$Int64 $tmp1079 = (frost$core$Int64) {1};
int64_t $tmp1080 = $tmp1078.value;
int64_t $tmp1081 = $tmp1079.value;
int64_t $tmp1082 = $tmp1080 + $tmp1081;
frost$core$Int64 $tmp1083 = (frost$core$Int64) {$tmp1082};
*(&local0) = $tmp1083;
goto block7;
block7:;
// line 724
frost$core$Char8 $tmp1084 = *(&local3);
uint8_t $tmp1085 = $tmp1084.value;
int64_t $tmp1086 = ((int64_t) $tmp1085) & 255;
bool $tmp1087 = $tmp1086 >= 224;
frost$core$Bit $tmp1088 = frost$core$Bit$init$builtin_bit($tmp1087);
bool $tmp1089 = $tmp1088.value;
if ($tmp1089) goto block8; else goto block9;
block8:;
// line 725
frost$core$MutableString* $tmp1090 = *(&local1);
frost$core$Char8** $tmp1091 = &param0->data;
frost$core$Char8* $tmp1092 = *$tmp1091;
frost$core$Int64 $tmp1093 = *(&local0);
int64_t $tmp1094 = $tmp1093.value;
frost$core$Char8 $tmp1095 = $tmp1092[$tmp1094];
frost$core$MutableString$append$frost$core$Char8($tmp1090, $tmp1095);
// line 726
frost$core$Int64 $tmp1096 = *(&local0);
frost$core$Int64 $tmp1097 = (frost$core$Int64) {1};
int64_t $tmp1098 = $tmp1096.value;
int64_t $tmp1099 = $tmp1097.value;
int64_t $tmp1100 = $tmp1098 + $tmp1099;
frost$core$Int64 $tmp1101 = (frost$core$Int64) {$tmp1100};
*(&local0) = $tmp1101;
goto block9;
block9:;
// line 728
frost$core$Char8 $tmp1102 = *(&local3);
uint8_t $tmp1103 = $tmp1102.value;
int64_t $tmp1104 = ((int64_t) $tmp1103) & 255;
bool $tmp1105 = $tmp1104 >= 240;
frost$core$Bit $tmp1106 = frost$core$Bit$init$builtin_bit($tmp1105);
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block10; else goto block11;
block10:;
// line 729
frost$core$MutableString* $tmp1108 = *(&local1);
frost$core$Char8** $tmp1109 = &param0->data;
frost$core$Char8* $tmp1110 = *$tmp1109;
frost$core$Int64 $tmp1111 = *(&local0);
int64_t $tmp1112 = $tmp1111.value;
frost$core$Char8 $tmp1113 = $tmp1110[$tmp1112];
frost$core$MutableString$append$frost$core$Char8($tmp1108, $tmp1113);
// line 730
frost$core$Int64 $tmp1114 = *(&local0);
frost$core$Int64 $tmp1115 = (frost$core$Int64) {1};
int64_t $tmp1116 = $tmp1114.value;
int64_t $tmp1117 = $tmp1115.value;
int64_t $tmp1118 = $tmp1116 + $tmp1117;
frost$core$Int64 $tmp1119 = (frost$core$Int64) {$tmp1118};
*(&local0) = $tmp1119;
goto block11;
block11:;
goto block3;
block5:;
// line 733
frost$core$MutableString* $tmp1120 = *(&local1);
frost$core$String* $tmp1121 = frost$core$MutableString$finish$R$frost$core$String($tmp1120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
// unreffing REF($144:frost.core.String)
frost$core$MutableString* $tmp1122 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
// unreffing result
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp1121;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$Bit local1;
frost$core$String$Index local2;
// line 744
frost$core$Int64* $tmp1123 = &param0->_length;
frost$core$Int64 $tmp1124 = *$tmp1123;
frost$core$Int64 $tmp1125 = (frost$core$Int64) {0};
frost$core$Bit $tmp1126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1124, $tmp1125);
bool $tmp1127 = $tmp1126.value;
if ($tmp1127) goto block1; else goto block2;
block1:;
// line 745
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1128));
return &$s1129;
block2:;
// line 747
// line 748
frost$core$String$Index$nullable $tmp1130 = param1.min;
frost$core$Bit $tmp1131 = frost$core$Bit$init$builtin_bit($tmp1130.nonnull);
bool $tmp1132 = $tmp1131.value;
if ($tmp1132) goto block3; else goto block5;
block3:;
// line 749
frost$core$String$Index$nullable $tmp1133 = param1.min;
*(&local0) = ((frost$core$String$Index) $tmp1133.value);
goto block4;
block5:;
// line 1
// line 752
frost$core$String$Index $tmp1134 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1134;
goto block4;
block4:;
// line 755
frost$core$Bit $tmp1135 = param1.inclusive;
*(&local1) = $tmp1135;
// line 756
// line 757
frost$core$String$Index$nullable $tmp1136 = param1.max;
frost$core$Bit $tmp1137 = frost$core$Bit$init$builtin_bit($tmp1136.nonnull);
bool $tmp1138 = $tmp1137.value;
if ($tmp1138) goto block6; else goto block8;
block6:;
// line 758
frost$core$String$Index$nullable $tmp1139 = param1.max;
*(&local2) = ((frost$core$String$Index) $tmp1139.value);
goto block7;
block8:;
// line 1
// line 761
frost$core$String$Index $tmp1140 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1140;
// line 762
frost$core$Bit $tmp1141 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1141;
goto block7;
block7:;
// line 764
frost$core$String$Index $tmp1142 = *(&local0);
frost$core$String$Index $tmp1143 = *(&local2);
frost$core$Bit $tmp1144 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1145 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1142, $tmp1143, $tmp1144);
frost$core$String* $tmp1146 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1145);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
// unreffing REF($56:frost.core.String)
return $tmp1146;

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
// line 780
frost$core$Int64* $tmp1147 = &param0->_length;
frost$core$Int64 $tmp1148 = *$tmp1147;
frost$core$Int64 $tmp1149 = (frost$core$Int64) {0};
frost$core$Bit $tmp1150 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1148, $tmp1149);
bool $tmp1151 = $tmp1150.value;
if ($tmp1151) goto block1; else goto block2;
block1:;
// line 781
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1152));
return &$s1153;
block2:;
// line 783
frost$core$Int64 $tmp1154 = param1.step;
*(&local0) = $tmp1154;
// line 785
// line 786
frost$core$String$Index$nullable $tmp1155 = param1.start;
frost$core$Bit $tmp1156 = frost$core$Bit$init$builtin_bit($tmp1155.nonnull);
bool $tmp1157 = $tmp1156.value;
if ($tmp1157) goto block3; else goto block5;
block3:;
// line 787
frost$core$String$Index$nullable $tmp1158 = param1.start;
frost$core$Int64 $tmp1159 = ((frost$core$String$Index) $tmp1158.value).value;
*(&local1) = $tmp1159;
goto block4;
block5:;
// line 789
frost$core$Int64 $tmp1160 = *(&local0);
frost$core$Int64 $tmp1161 = (frost$core$Int64) {0};
int64_t $tmp1162 = $tmp1160.value;
int64_t $tmp1163 = $tmp1161.value;
bool $tmp1164 = $tmp1162 > $tmp1163;
frost$core$Bit $tmp1165 = (frost$core$Bit) {$tmp1164};
bool $tmp1166 = $tmp1165.value;
if ($tmp1166) goto block6; else goto block8;
block6:;
// line 790
frost$core$String$Index $tmp1167 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1168 = $tmp1167.value;
*(&local1) = $tmp1168;
goto block7;
block8:;
// line 1
// line 793
frost$core$String$Index $tmp1169 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index $tmp1170 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1169);
frost$core$Int64 $tmp1171 = $tmp1170.value;
*(&local1) = $tmp1171;
goto block7;
block7:;
goto block4;
block4:;
// line 796
// line 797
frost$core$String$Index$nullable $tmp1172 = param1.end;
frost$core$Bit $tmp1173 = frost$core$Bit$init$builtin_bit($tmp1172.nonnull);
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block9; else goto block11;
block9:;
// line 798
frost$core$String$Index$nullable $tmp1175 = param1.end;
frost$core$Int64 $tmp1176 = ((frost$core$String$Index) $tmp1175.value).value;
*(&local2) = $tmp1176;
goto block10;
block11:;
// line 800
frost$core$Int64 $tmp1177 = *(&local0);
frost$core$Int64 $tmp1178 = (frost$core$Int64) {0};
int64_t $tmp1179 = $tmp1177.value;
int64_t $tmp1180 = $tmp1178.value;
bool $tmp1181 = $tmp1179 > $tmp1180;
frost$core$Bit $tmp1182 = (frost$core$Bit) {$tmp1181};
bool $tmp1183 = $tmp1182.value;
if ($tmp1183) goto block12; else goto block14;
block12:;
// line 801
frost$core$String$Index $tmp1184 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1185 = $tmp1184.value;
*(&local2) = $tmp1185;
goto block13;
block14:;
// line 1
// line 804
frost$core$String$Index $tmp1186 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1187 = $tmp1186.value;
*(&local2) = $tmp1187;
goto block13;
block13:;
goto block10;
block10:;
// line 807
frost$core$MutableString* $tmp1188 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1188);
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
frost$core$MutableString* $tmp1189 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
*(&local3) = $tmp1188;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
// unreffing REF($84:frost.core.MutableString)
// line 808
frost$core$Int64 $tmp1190 = param1.step;
frost$core$Int64 $tmp1191 = (frost$core$Int64) {0};
int64_t $tmp1192 = $tmp1190.value;
int64_t $tmp1193 = $tmp1191.value;
bool $tmp1194 = $tmp1192 > $tmp1193;
frost$core$Bit $tmp1195 = (frost$core$Bit) {$tmp1194};
bool $tmp1196 = $tmp1195.value;
if ($tmp1196) goto block15; else goto block17;
block15:;
// line 809
goto block18;
block18:;
frost$core$Int64 $tmp1197 = *(&local1);
frost$core$Int64 $tmp1198 = *(&local2);
int64_t $tmp1199 = $tmp1197.value;
int64_t $tmp1200 = $tmp1198.value;
bool $tmp1201 = $tmp1199 < $tmp1200;
frost$core$Bit $tmp1202 = (frost$core$Bit) {$tmp1201};
bool $tmp1203 = $tmp1202.value;
if ($tmp1203) goto block19; else goto block20;
block19:;
// line 810
frost$core$Char8** $tmp1204 = &param0->data;
frost$core$Char8* $tmp1205 = *$tmp1204;
frost$core$Int64 $tmp1206 = *(&local1);
int64_t $tmp1207 = $tmp1206.value;
frost$core$Char8 $tmp1208 = $tmp1205[$tmp1207];
*(&local4) = $tmp1208;
// line 811
frost$core$MutableString* $tmp1209 = *(&local3);
frost$core$Char8 $tmp1210 = *(&local4);
frost$core$MutableString$append$frost$core$Char8($tmp1209, $tmp1210);
// line 812
frost$core$Int64 $tmp1211 = *(&local1);
frost$core$Int64 $tmp1212 = (frost$core$Int64) {1};
int64_t $tmp1213 = $tmp1211.value;
int64_t $tmp1214 = $tmp1212.value;
int64_t $tmp1215 = $tmp1213 + $tmp1214;
frost$core$Int64 $tmp1216 = (frost$core$Int64) {$tmp1215};
*(&local1) = $tmp1216;
// line 813
frost$core$Char8 $tmp1217 = *(&local4);
uint8_t $tmp1218 = $tmp1217.value;
int64_t $tmp1219 = ((int64_t) $tmp1218) & 255;
bool $tmp1220 = $tmp1219 >= 192;
frost$core$Bit $tmp1221 = frost$core$Bit$init$builtin_bit($tmp1220);
bool $tmp1222 = $tmp1221.value;
if ($tmp1222) goto block21; else goto block22;
block21:;
// line 814
frost$core$MutableString* $tmp1223 = *(&local3);
frost$core$Char8** $tmp1224 = &param0->data;
frost$core$Char8* $tmp1225 = *$tmp1224;
frost$core$Int64 $tmp1226 = *(&local1);
int64_t $tmp1227 = $tmp1226.value;
frost$core$Char8 $tmp1228 = $tmp1225[$tmp1227];
frost$core$MutableString$append$frost$core$Char8($tmp1223, $tmp1228);
// line 815
frost$core$Int64 $tmp1229 = *(&local1);
frost$core$Int64 $tmp1230 = (frost$core$Int64) {1};
int64_t $tmp1231 = $tmp1229.value;
int64_t $tmp1232 = $tmp1230.value;
int64_t $tmp1233 = $tmp1231 + $tmp1232;
frost$core$Int64 $tmp1234 = (frost$core$Int64) {$tmp1233};
*(&local1) = $tmp1234;
goto block22;
block22:;
// line 817
frost$core$Char8 $tmp1235 = *(&local4);
uint8_t $tmp1236 = $tmp1235.value;
int64_t $tmp1237 = ((int64_t) $tmp1236) & 255;
bool $tmp1238 = $tmp1237 >= 224;
frost$core$Bit $tmp1239 = frost$core$Bit$init$builtin_bit($tmp1238);
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block23; else goto block24;
block23:;
// line 818
frost$core$MutableString* $tmp1241 = *(&local3);
frost$core$Char8** $tmp1242 = &param0->data;
frost$core$Char8* $tmp1243 = *$tmp1242;
frost$core$Int64 $tmp1244 = *(&local1);
int64_t $tmp1245 = $tmp1244.value;
frost$core$Char8 $tmp1246 = $tmp1243[$tmp1245];
frost$core$MutableString$append$frost$core$Char8($tmp1241, $tmp1246);
// line 819
frost$core$Int64 $tmp1247 = *(&local1);
frost$core$Int64 $tmp1248 = (frost$core$Int64) {1};
int64_t $tmp1249 = $tmp1247.value;
int64_t $tmp1250 = $tmp1248.value;
int64_t $tmp1251 = $tmp1249 + $tmp1250;
frost$core$Int64 $tmp1252 = (frost$core$Int64) {$tmp1251};
*(&local1) = $tmp1252;
goto block24;
block24:;
// line 821
frost$core$Char8 $tmp1253 = *(&local4);
uint8_t $tmp1254 = $tmp1253.value;
int64_t $tmp1255 = ((int64_t) $tmp1254) & 255;
bool $tmp1256 = $tmp1255 >= 240;
frost$core$Bit $tmp1257 = frost$core$Bit$init$builtin_bit($tmp1256);
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block25; else goto block26;
block25:;
// line 822
frost$core$MutableString* $tmp1259 = *(&local3);
frost$core$Char8** $tmp1260 = &param0->data;
frost$core$Char8* $tmp1261 = *$tmp1260;
frost$core$Int64 $tmp1262 = *(&local1);
int64_t $tmp1263 = $tmp1262.value;
frost$core$Char8 $tmp1264 = $tmp1261[$tmp1263];
frost$core$MutableString$append$frost$core$Char8($tmp1259, $tmp1264);
// line 823
frost$core$Int64 $tmp1265 = *(&local1);
frost$core$Int64 $tmp1266 = (frost$core$Int64) {1};
int64_t $tmp1267 = $tmp1265.value;
int64_t $tmp1268 = $tmp1266.value;
int64_t $tmp1269 = $tmp1267 + $tmp1268;
frost$core$Int64 $tmp1270 = (frost$core$Int64) {$tmp1269};
*(&local1) = $tmp1270;
goto block26;
block26:;
// line 825
frost$core$Int64 $tmp1271 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1272 = *(&local0);
frost$core$Bit $tmp1273 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1274 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1271, $tmp1272, $tmp1273);
frost$core$Int64 $tmp1275 = $tmp1274.min;
*(&local5) = $tmp1275;
frost$core$Int64 $tmp1276 = $tmp1274.max;
frost$core$Bit $tmp1277 = $tmp1274.inclusive;
bool $tmp1278 = $tmp1277.value;
frost$core$Int64 $tmp1279 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1280 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1279);
if ($tmp1278) goto block30; else goto block31;
block30:;
int64_t $tmp1281 = $tmp1275.value;
int64_t $tmp1282 = $tmp1276.value;
bool $tmp1283 = $tmp1281 <= $tmp1282;
frost$core$Bit $tmp1284 = (frost$core$Bit) {$tmp1283};
bool $tmp1285 = $tmp1284.value;
if ($tmp1285) goto block27; else goto block28;
block31:;
int64_t $tmp1286 = $tmp1275.value;
int64_t $tmp1287 = $tmp1276.value;
bool $tmp1288 = $tmp1286 < $tmp1287;
frost$core$Bit $tmp1289 = (frost$core$Bit) {$tmp1288};
bool $tmp1290 = $tmp1289.value;
if ($tmp1290) goto block27; else goto block28;
block27:;
// line 826
frost$core$Int64 $tmp1291 = *(&local1);
frost$core$Int64 $tmp1292 = *(&local2);
int64_t $tmp1293 = $tmp1291.value;
int64_t $tmp1294 = $tmp1292.value;
bool $tmp1295 = $tmp1293 >= $tmp1294;
frost$core$Bit $tmp1296 = (frost$core$Bit) {$tmp1295};
bool $tmp1297 = $tmp1296.value;
if ($tmp1297) goto block32; else goto block33;
block32:;
// line 827
frost$core$MutableString* $tmp1298 = *(&local3);
frost$core$String* $tmp1299 = frost$core$MutableString$convert$R$frost$core$String($tmp1298);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// unreffing REF($248:frost.core.String)
frost$core$MutableString* $tmp1300 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
// unreffing result
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1299;
block33:;
// line 829
frost$core$Int64 $tmp1301 = *(&local1);
frost$core$String$Index $tmp1302 = frost$core$String$Index$init$frost$core$Int64($tmp1301);
frost$core$String$Index $tmp1303 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1302);
frost$core$Int64 $tmp1304 = $tmp1303.value;
*(&local1) = $tmp1304;
goto block29;
block29:;
frost$core$Int64 $tmp1305 = *(&local5);
int64_t $tmp1306 = $tmp1276.value;
int64_t $tmp1307 = $tmp1305.value;
int64_t $tmp1308 = $tmp1306 - $tmp1307;
frost$core$Int64 $tmp1309 = (frost$core$Int64) {$tmp1308};
frost$core$UInt64 $tmp1310 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1309);
if ($tmp1278) goto block35; else goto block36;
block35:;
uint64_t $tmp1311 = $tmp1310.value;
uint64_t $tmp1312 = $tmp1280.value;
bool $tmp1313 = $tmp1311 >= $tmp1312;
frost$core$Bit $tmp1314 = (frost$core$Bit) {$tmp1313};
bool $tmp1315 = $tmp1314.value;
if ($tmp1315) goto block34; else goto block28;
block36:;
uint64_t $tmp1316 = $tmp1310.value;
uint64_t $tmp1317 = $tmp1280.value;
bool $tmp1318 = $tmp1316 > $tmp1317;
frost$core$Bit $tmp1319 = (frost$core$Bit) {$tmp1318};
bool $tmp1320 = $tmp1319.value;
if ($tmp1320) goto block34; else goto block28;
block34:;
int64_t $tmp1321 = $tmp1305.value;
int64_t $tmp1322 = $tmp1279.value;
int64_t $tmp1323 = $tmp1321 + $tmp1322;
frost$core$Int64 $tmp1324 = (frost$core$Int64) {$tmp1323};
*(&local5) = $tmp1324;
goto block27;
block28:;
goto block18;
block20:;
goto block16;
block17:;
// line 1
// line 834
frost$core$Int64 $tmp1325 = param1.step;
frost$core$Int64 $tmp1326 = (frost$core$Int64) {0};
int64_t $tmp1327 = $tmp1325.value;
int64_t $tmp1328 = $tmp1326.value;
bool $tmp1329 = $tmp1327 < $tmp1328;
frost$core$Bit $tmp1330 = (frost$core$Bit) {$tmp1329};
bool $tmp1331 = $tmp1330.value;
if ($tmp1331) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp1332 = (frost$core$Int64) {834};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1333, $tmp1332);
abort(); // unreachable
block37:;
// line 835
goto block39;
block39:;
frost$core$Int64 $tmp1334 = *(&local1);
frost$core$Int64 $tmp1335 = *(&local2);
int64_t $tmp1336 = $tmp1334.value;
int64_t $tmp1337 = $tmp1335.value;
bool $tmp1338 = $tmp1336 > $tmp1337;
frost$core$Bit $tmp1339 = (frost$core$Bit) {$tmp1338};
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block40; else goto block41;
block40:;
// line 836
frost$core$Char8** $tmp1341 = &param0->data;
frost$core$Char8* $tmp1342 = *$tmp1341;
frost$core$Int64 $tmp1343 = *(&local1);
int64_t $tmp1344 = $tmp1343.value;
frost$core$Char8 $tmp1345 = $tmp1342[$tmp1344];
*(&local6) = $tmp1345;
// line 837
frost$core$MutableString* $tmp1346 = *(&local3);
frost$core$Char8 $tmp1347 = *(&local6);
frost$core$MutableString$append$frost$core$Char8($tmp1346, $tmp1347);
// line 838
frost$core$Int64 $tmp1348 = *(&local1);
*(&local7) = $tmp1348;
// line 839
frost$core$Int64 $tmp1349 = *(&local1);
frost$core$Int64 $tmp1350 = (frost$core$Int64) {1};
int64_t $tmp1351 = $tmp1349.value;
int64_t $tmp1352 = $tmp1350.value;
int64_t $tmp1353 = $tmp1351 + $tmp1352;
frost$core$Int64 $tmp1354 = (frost$core$Int64) {$tmp1353};
*(&local1) = $tmp1354;
// line 840
frost$core$Char8 $tmp1355 = *(&local6);
uint8_t $tmp1356 = $tmp1355.value;
int64_t $tmp1357 = ((int64_t) $tmp1356) & 255;
bool $tmp1358 = $tmp1357 >= 192;
frost$core$Bit $tmp1359 = frost$core$Bit$init$builtin_bit($tmp1358);
bool $tmp1360 = $tmp1359.value;
if ($tmp1360) goto block42; else goto block43;
block42:;
// line 841
frost$core$MutableString* $tmp1361 = *(&local3);
frost$core$Char8** $tmp1362 = &param0->data;
frost$core$Char8* $tmp1363 = *$tmp1362;
frost$core$Int64 $tmp1364 = *(&local1);
int64_t $tmp1365 = $tmp1364.value;
frost$core$Char8 $tmp1366 = $tmp1363[$tmp1365];
frost$core$MutableString$append$frost$core$Char8($tmp1361, $tmp1366);
// line 842
frost$core$Int64 $tmp1367 = *(&local1);
frost$core$Int64 $tmp1368 = (frost$core$Int64) {1};
int64_t $tmp1369 = $tmp1367.value;
int64_t $tmp1370 = $tmp1368.value;
int64_t $tmp1371 = $tmp1369 + $tmp1370;
frost$core$Int64 $tmp1372 = (frost$core$Int64) {$tmp1371};
*(&local1) = $tmp1372;
goto block43;
block43:;
// line 844
frost$core$Char8 $tmp1373 = *(&local6);
uint8_t $tmp1374 = $tmp1373.value;
int64_t $tmp1375 = ((int64_t) $tmp1374) & 255;
bool $tmp1376 = $tmp1375 >= 224;
frost$core$Bit $tmp1377 = frost$core$Bit$init$builtin_bit($tmp1376);
bool $tmp1378 = $tmp1377.value;
if ($tmp1378) goto block44; else goto block45;
block44:;
// line 845
frost$core$MutableString* $tmp1379 = *(&local3);
frost$core$Char8** $tmp1380 = &param0->data;
frost$core$Char8* $tmp1381 = *$tmp1380;
frost$core$Int64 $tmp1382 = *(&local1);
int64_t $tmp1383 = $tmp1382.value;
frost$core$Char8 $tmp1384 = $tmp1381[$tmp1383];
frost$core$MutableString$append$frost$core$Char8($tmp1379, $tmp1384);
// line 846
frost$core$Int64 $tmp1385 = *(&local1);
frost$core$Int64 $tmp1386 = (frost$core$Int64) {1};
int64_t $tmp1387 = $tmp1385.value;
int64_t $tmp1388 = $tmp1386.value;
int64_t $tmp1389 = $tmp1387 + $tmp1388;
frost$core$Int64 $tmp1390 = (frost$core$Int64) {$tmp1389};
*(&local1) = $tmp1390;
goto block45;
block45:;
// line 848
frost$core$Char8 $tmp1391 = *(&local6);
uint8_t $tmp1392 = $tmp1391.value;
int64_t $tmp1393 = ((int64_t) $tmp1392) & 255;
bool $tmp1394 = $tmp1393 >= 240;
frost$core$Bit $tmp1395 = frost$core$Bit$init$builtin_bit($tmp1394);
bool $tmp1396 = $tmp1395.value;
if ($tmp1396) goto block46; else goto block47;
block46:;
// line 849
frost$core$MutableString* $tmp1397 = *(&local3);
frost$core$Char8** $tmp1398 = &param0->data;
frost$core$Char8* $tmp1399 = *$tmp1398;
frost$core$Int64 $tmp1400 = *(&local1);
int64_t $tmp1401 = $tmp1400.value;
frost$core$Char8 $tmp1402 = $tmp1399[$tmp1401];
frost$core$MutableString$append$frost$core$Char8($tmp1397, $tmp1402);
goto block47;
block47:;
// line 851
frost$core$Int64 $tmp1403 = *(&local7);
frost$core$Int64 $tmp1404 = (frost$core$Int64) {1};
int64_t $tmp1405 = $tmp1403.value;
int64_t $tmp1406 = $tmp1404.value;
int64_t $tmp1407 = $tmp1405 - $tmp1406;
frost$core$Int64 $tmp1408 = (frost$core$Int64) {$tmp1407};
*(&local1) = $tmp1408;
// line 852
goto block48;
block48:;
frost$core$Char8** $tmp1409 = &param0->data;
frost$core$Char8* $tmp1410 = *$tmp1409;
frost$core$Int64 $tmp1411 = *(&local1);
int64_t $tmp1412 = $tmp1411.value;
frost$core$Char8 $tmp1413 = $tmp1410[$tmp1412];
uint8_t $tmp1414 = $tmp1413.value;
int64_t $tmp1415 = ((int64_t) $tmp1414) & 255;
bool $tmp1416 = $tmp1415 >= 128;
frost$core$Char8** $tmp1417 = &param0->data;
frost$core$Char8* $tmp1418 = *$tmp1417;
frost$core$Int64 $tmp1419 = *(&local1);
int64_t $tmp1420 = $tmp1419.value;
frost$core$Char8 $tmp1421 = $tmp1418[$tmp1420];
uint8_t $tmp1422 = $tmp1421.value;
int64_t $tmp1423 = ((int64_t) $tmp1422) & 255;
bool $tmp1424 = $tmp1423 < 192;
bool $tmp1425 = $tmp1416 & $tmp1424;
frost$core$Bit $tmp1426 = frost$core$Bit$init$builtin_bit($tmp1425);
bool $tmp1427 = $tmp1426.value;
if ($tmp1427) goto block49; else goto block50;
block49:;
// line 853
frost$core$Int64 $tmp1428 = *(&local1);
frost$core$Int64 $tmp1429 = (frost$core$Int64) {1};
int64_t $tmp1430 = $tmp1428.value;
int64_t $tmp1431 = $tmp1429.value;
int64_t $tmp1432 = $tmp1430 - $tmp1431;
frost$core$Int64 $tmp1433 = (frost$core$Int64) {$tmp1432};
*(&local1) = $tmp1433;
goto block48;
block50:;
// line 855
frost$core$Int64 $tmp1434 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64 $tmp1435 = *(&local0);
frost$core$Int64 $tmp1436 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1437 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1438 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1434, $tmp1435, $tmp1436, $tmp1437);
frost$core$Int64 $tmp1439 = $tmp1438.start;
*(&local8) = $tmp1439;
frost$core$Int64 $tmp1440 = $tmp1438.end;
frost$core$Int64 $tmp1441 = $tmp1438.step;
frost$core$UInt64 $tmp1442 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1441);
frost$core$Int64 $tmp1443 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1441);
frost$core$UInt64 $tmp1444 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1443);
frost$core$Bit $tmp1445 = $tmp1438.inclusive;
bool $tmp1446 = $tmp1445.value;
frost$core$Int64 $tmp1447 = (frost$core$Int64) {0};
int64_t $tmp1448 = $tmp1441.value;
int64_t $tmp1449 = $tmp1447.value;
bool $tmp1450 = $tmp1448 >= $tmp1449;
frost$core$Bit $tmp1451 = (frost$core$Bit) {$tmp1450};
bool $tmp1452 = $tmp1451.value;
if ($tmp1452) goto block54; else goto block55;
block54:;
if ($tmp1446) goto block56; else goto block57;
block56:;
int64_t $tmp1453 = $tmp1439.value;
int64_t $tmp1454 = $tmp1440.value;
bool $tmp1455 = $tmp1453 <= $tmp1454;
frost$core$Bit $tmp1456 = (frost$core$Bit) {$tmp1455};
bool $tmp1457 = $tmp1456.value;
if ($tmp1457) goto block51; else goto block52;
block57:;
int64_t $tmp1458 = $tmp1439.value;
int64_t $tmp1459 = $tmp1440.value;
bool $tmp1460 = $tmp1458 < $tmp1459;
frost$core$Bit $tmp1461 = (frost$core$Bit) {$tmp1460};
bool $tmp1462 = $tmp1461.value;
if ($tmp1462) goto block51; else goto block52;
block55:;
if ($tmp1446) goto block58; else goto block59;
block58:;
int64_t $tmp1463 = $tmp1439.value;
int64_t $tmp1464 = $tmp1440.value;
bool $tmp1465 = $tmp1463 >= $tmp1464;
frost$core$Bit $tmp1466 = (frost$core$Bit) {$tmp1465};
bool $tmp1467 = $tmp1466.value;
if ($tmp1467) goto block51; else goto block52;
block59:;
int64_t $tmp1468 = $tmp1439.value;
int64_t $tmp1469 = $tmp1440.value;
bool $tmp1470 = $tmp1468 > $tmp1469;
frost$core$Bit $tmp1471 = (frost$core$Bit) {$tmp1470};
bool $tmp1472 = $tmp1471.value;
if ($tmp1472) goto block51; else goto block52;
block51:;
// line 856
frost$core$Int64 $tmp1473 = *(&local1);
frost$core$Int64 $tmp1474 = *(&local2);
int64_t $tmp1475 = $tmp1473.value;
int64_t $tmp1476 = $tmp1474.value;
bool $tmp1477 = $tmp1475 <= $tmp1476;
frost$core$Bit $tmp1478 = (frost$core$Bit) {$tmp1477};
bool $tmp1479 = $tmp1478.value;
if ($tmp1479) goto block60; else goto block61;
block60:;
// line 857
frost$core$MutableString* $tmp1480 = *(&local3);
frost$core$String* $tmp1481 = frost$core$MutableString$convert$R$frost$core$String($tmp1480);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
// unreffing REF($509:frost.core.String)
frost$core$MutableString* $tmp1482 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
// unreffing result
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1481;
block61:;
// line 859
frost$core$Int64 $tmp1483 = *(&local1);
frost$core$String$Index $tmp1484 = frost$core$String$Index$init$frost$core$Int64($tmp1483);
frost$core$String$Index $tmp1485 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1484);
frost$core$Int64 $tmp1486 = $tmp1485.value;
*(&local1) = $tmp1486;
goto block53;
block53:;
frost$core$Int64 $tmp1487 = *(&local8);
if ($tmp1452) goto block63; else goto block64;
block63:;
int64_t $tmp1488 = $tmp1440.value;
int64_t $tmp1489 = $tmp1487.value;
int64_t $tmp1490 = $tmp1488 - $tmp1489;
frost$core$Int64 $tmp1491 = (frost$core$Int64) {$tmp1490};
frost$core$UInt64 $tmp1492 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1491);
if ($tmp1446) goto block65; else goto block66;
block65:;
uint64_t $tmp1493 = $tmp1492.value;
uint64_t $tmp1494 = $tmp1442.value;
bool $tmp1495 = $tmp1493 >= $tmp1494;
frost$core$Bit $tmp1496 = (frost$core$Bit) {$tmp1495};
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block62; else goto block52;
block66:;
uint64_t $tmp1498 = $tmp1492.value;
uint64_t $tmp1499 = $tmp1442.value;
bool $tmp1500 = $tmp1498 > $tmp1499;
frost$core$Bit $tmp1501 = (frost$core$Bit) {$tmp1500};
bool $tmp1502 = $tmp1501.value;
if ($tmp1502) goto block62; else goto block52;
block64:;
int64_t $tmp1503 = $tmp1487.value;
int64_t $tmp1504 = $tmp1440.value;
int64_t $tmp1505 = $tmp1503 - $tmp1504;
frost$core$Int64 $tmp1506 = (frost$core$Int64) {$tmp1505};
frost$core$UInt64 $tmp1507 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1506);
if ($tmp1446) goto block67; else goto block68;
block67:;
uint64_t $tmp1508 = $tmp1507.value;
uint64_t $tmp1509 = $tmp1444.value;
bool $tmp1510 = $tmp1508 >= $tmp1509;
frost$core$Bit $tmp1511 = (frost$core$Bit) {$tmp1510};
bool $tmp1512 = $tmp1511.value;
if ($tmp1512) goto block62; else goto block52;
block68:;
uint64_t $tmp1513 = $tmp1507.value;
uint64_t $tmp1514 = $tmp1444.value;
bool $tmp1515 = $tmp1513 > $tmp1514;
frost$core$Bit $tmp1516 = (frost$core$Bit) {$tmp1515};
bool $tmp1517 = $tmp1516.value;
if ($tmp1517) goto block62; else goto block52;
block62:;
int64_t $tmp1518 = $tmp1487.value;
int64_t $tmp1519 = $tmp1441.value;
int64_t $tmp1520 = $tmp1518 + $tmp1519;
frost$core$Int64 $tmp1521 = (frost$core$Int64) {$tmp1520};
*(&local8) = $tmp1521;
goto block51;
block52:;
goto block39;
block41:;
goto block16;
block16:;
// line 863
frost$core$Bit $tmp1522 = param1.inclusive;
bool $tmp1523 = $tmp1522.value;
if ($tmp1523) goto block71; else goto block72;
block71:;
*(&local11) = $tmp1522;
goto block73;
block72:;
frost$core$String$Index$nullable $tmp1524 = param1.end;
frost$core$Bit $tmp1525 = frost$core$Bit$init$builtin_bit(!$tmp1524.nonnull);
*(&local11) = $tmp1525;
goto block73;
block73:;
frost$core$Bit $tmp1526 = *(&local11);
bool $tmp1527 = $tmp1526.value;
if ($tmp1527) goto block74; else goto block75;
block74:;
frost$core$Int64 $tmp1528 = *(&local1);
frost$core$Int64 $tmp1529 = *(&local2);
frost$core$Bit $tmp1530 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1528, $tmp1529);
*(&local10) = $tmp1530;
goto block76;
block75:;
*(&local10) = $tmp1526;
goto block76;
block76:;
frost$core$Bit $tmp1531 = *(&local10);
bool $tmp1532 = $tmp1531.value;
if ($tmp1532) goto block77; else goto block78;
block77:;
frost$core$Int64 $tmp1533 = *(&local2);
frost$core$Int64* $tmp1534 = &param0->_length;
frost$core$Int64 $tmp1535 = *$tmp1534;
int64_t $tmp1536 = $tmp1533.value;
int64_t $tmp1537 = $tmp1535.value;
bool $tmp1538 = $tmp1536 < $tmp1537;
frost$core$Bit $tmp1539 = (frost$core$Bit) {$tmp1538};
*(&local9) = $tmp1539;
goto block79;
block78:;
*(&local9) = $tmp1531;
goto block79;
block79:;
frost$core$Bit $tmp1540 = *(&local9);
bool $tmp1541 = $tmp1540.value;
if ($tmp1541) goto block69; else goto block70;
block69:;
// line 864
frost$core$Char8** $tmp1542 = &param0->data;
frost$core$Char8* $tmp1543 = *$tmp1542;
frost$core$Int64 $tmp1544 = *(&local1);
int64_t $tmp1545 = $tmp1544.value;
frost$core$Char8 $tmp1546 = $tmp1543[$tmp1545];
*(&local12) = $tmp1546;
// line 865
frost$core$MutableString* $tmp1547 = *(&local3);
frost$core$Char8 $tmp1548 = *(&local12);
frost$core$MutableString$append$frost$core$Char8($tmp1547, $tmp1548);
// line 866
frost$core$Int64 $tmp1549 = *(&local1);
frost$core$Int64 $tmp1550 = (frost$core$Int64) {1};
int64_t $tmp1551 = $tmp1549.value;
int64_t $tmp1552 = $tmp1550.value;
int64_t $tmp1553 = $tmp1551 + $tmp1552;
frost$core$Int64 $tmp1554 = (frost$core$Int64) {$tmp1553};
*(&local1) = $tmp1554;
// line 867
frost$core$Char8 $tmp1555 = *(&local12);
uint8_t $tmp1556 = $tmp1555.value;
int64_t $tmp1557 = ((int64_t) $tmp1556) & 255;
bool $tmp1558 = $tmp1557 >= 192;
frost$core$Bit $tmp1559 = frost$core$Bit$init$builtin_bit($tmp1558);
bool $tmp1560 = $tmp1559.value;
if ($tmp1560) goto block80; else goto block81;
block80:;
// line 868
frost$core$MutableString* $tmp1561 = *(&local3);
frost$core$Char8** $tmp1562 = &param0->data;
frost$core$Char8* $tmp1563 = *$tmp1562;
frost$core$Int64 $tmp1564 = *(&local1);
int64_t $tmp1565 = $tmp1564.value;
frost$core$Char8 $tmp1566 = $tmp1563[$tmp1565];
frost$core$MutableString$append$frost$core$Char8($tmp1561, $tmp1566);
// line 869
frost$core$Int64 $tmp1567 = *(&local1);
frost$core$Int64 $tmp1568 = (frost$core$Int64) {1};
int64_t $tmp1569 = $tmp1567.value;
int64_t $tmp1570 = $tmp1568.value;
int64_t $tmp1571 = $tmp1569 + $tmp1570;
frost$core$Int64 $tmp1572 = (frost$core$Int64) {$tmp1571};
*(&local1) = $tmp1572;
goto block81;
block81:;
// line 871
frost$core$Char8 $tmp1573 = *(&local12);
uint8_t $tmp1574 = $tmp1573.value;
int64_t $tmp1575 = ((int64_t) $tmp1574) & 255;
bool $tmp1576 = $tmp1575 >= 224;
frost$core$Bit $tmp1577 = frost$core$Bit$init$builtin_bit($tmp1576);
bool $tmp1578 = $tmp1577.value;
if ($tmp1578) goto block82; else goto block83;
block82:;
// line 872
frost$core$MutableString* $tmp1579 = *(&local3);
frost$core$Char8** $tmp1580 = &param0->data;
frost$core$Char8* $tmp1581 = *$tmp1580;
frost$core$Int64 $tmp1582 = *(&local1);
int64_t $tmp1583 = $tmp1582.value;
frost$core$Char8 $tmp1584 = $tmp1581[$tmp1583];
frost$core$MutableString$append$frost$core$Char8($tmp1579, $tmp1584);
// line 873
frost$core$Int64 $tmp1585 = *(&local1);
frost$core$Int64 $tmp1586 = (frost$core$Int64) {1};
int64_t $tmp1587 = $tmp1585.value;
int64_t $tmp1588 = $tmp1586.value;
int64_t $tmp1589 = $tmp1587 + $tmp1588;
frost$core$Int64 $tmp1590 = (frost$core$Int64) {$tmp1589};
*(&local1) = $tmp1590;
goto block83;
block83:;
// line 875
frost$core$Char8 $tmp1591 = *(&local12);
uint8_t $tmp1592 = $tmp1591.value;
int64_t $tmp1593 = ((int64_t) $tmp1592) & 255;
bool $tmp1594 = $tmp1593 >= 240;
frost$core$Bit $tmp1595 = frost$core$Bit$init$builtin_bit($tmp1594);
bool $tmp1596 = $tmp1595.value;
if ($tmp1596) goto block84; else goto block85;
block84:;
// line 876
frost$core$MutableString* $tmp1597 = *(&local3);
frost$core$Char8** $tmp1598 = &param0->data;
frost$core$Char8* $tmp1599 = *$tmp1598;
frost$core$Int64 $tmp1600 = *(&local1);
int64_t $tmp1601 = $tmp1600.value;
frost$core$Char8 $tmp1602 = $tmp1599[$tmp1601];
frost$core$MutableString$append$frost$core$Char8($tmp1597, $tmp1602);
goto block85;
block85:;
goto block70;
block70:;
// line 879
frost$core$MutableString* $tmp1603 = *(&local3);
frost$core$String* $tmp1604 = frost$core$MutableString$finish$R$frost$core$String($tmp1603);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
// unreffing REF($704:frost.core.String)
frost$core$MutableString* $tmp1605 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
// unreffing result
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1604;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 888
// line 889
frost$core$Int64$nullable $tmp1606 = param1.min;
frost$core$Bit $tmp1607 = frost$core$Bit$init$builtin_bit($tmp1606.nonnull);
bool $tmp1608 = $tmp1607.value;
if ($tmp1608) goto block1; else goto block3;
block1:;
// line 890
frost$core$String$Index $tmp1609 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1610 = param1.min;
frost$core$String$Index $tmp1611 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1609, ((frost$core$Int64) $tmp1610.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1611, true });
goto block2;
block3:;
// line 1
// line 893
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 895
// line 896
frost$core$Int64$nullable $tmp1612 = param1.max;
frost$core$Bit $tmp1613 = frost$core$Bit$init$builtin_bit($tmp1612.nonnull);
bool $tmp1614 = $tmp1613.value;
if ($tmp1614) goto block4; else goto block6;
block4:;
// line 897
frost$core$String$Index $tmp1615 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1616 = param1.max;
frost$core$String$Index $tmp1617 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1615, ((frost$core$Int64) $tmp1616.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1617, true });
goto block5;
block6:;
// line 1
// line 900
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 902
frost$core$String$Index$nullable $tmp1618 = *(&local0);
frost$core$String$Index$nullable $tmp1619 = *(&local1);
frost$core$Bit $tmp1620 = param1.inclusive;
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1621 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit($tmp1618, $tmp1619, $tmp1620);
frost$core$String* $tmp1622 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp1621);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
// unreffing REF($43:frost.core.String)
return $tmp1622;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 911
// line 912
frost$core$Int64$nullable $tmp1623 = param1.start;
frost$core$Bit $tmp1624 = frost$core$Bit$init$builtin_bit($tmp1623.nonnull);
bool $tmp1625 = $tmp1624.value;
if ($tmp1625) goto block1; else goto block3;
block1:;
// line 913
frost$core$String$Index $tmp1626 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1627 = param1.start;
frost$core$String$Index $tmp1628 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1626, ((frost$core$Int64) $tmp1627.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1628, true });
goto block2;
block3:;
// line 1
// line 916
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 918
// line 919
frost$core$Int64$nullable $tmp1629 = param1.end;
frost$core$Bit $tmp1630 = frost$core$Bit$init$builtin_bit($tmp1629.nonnull);
bool $tmp1631 = $tmp1630.value;
if ($tmp1631) goto block4; else goto block6;
block4:;
// line 920
frost$core$String$Index $tmp1632 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1633 = param1.end;
frost$core$String$Index $tmp1634 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1632, ((frost$core$Int64) $tmp1633.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1634, true });
goto block5;
block6:;
// line 1
// line 923
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 925
frost$core$String$Index$nullable $tmp1635 = *(&local0);
frost$core$String$Index$nullable $tmp1636 = *(&local1);
frost$core$Int64 $tmp1637 = param1.step;
frost$core$Bit $tmp1638 = param1.inclusive;
frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT $tmp1639 = frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Int64$frost$core$Bit($tmp1635, $tmp1636, $tmp1637, $tmp1638);
frost$core$String* $tmp1640 = frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String(param0, $tmp1639);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
// unreffing REF($44:frost.core.String)
return $tmp1640;

}
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(frost$core$String* param0, frost$core$Char8 param1) {

frost$core$Int64 local0;
// line 932
frost$core$Int64 $tmp1641 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1642 = &param0->_length;
frost$core$Int64 $tmp1643 = *$tmp1642;
frost$core$Bit $tmp1644 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1645 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1641, $tmp1643, $tmp1644);
frost$core$Int64 $tmp1646 = $tmp1645.min;
*(&local0) = $tmp1646;
frost$core$Int64 $tmp1647 = $tmp1645.max;
frost$core$Bit $tmp1648 = $tmp1645.inclusive;
bool $tmp1649 = $tmp1648.value;
frost$core$Int64 $tmp1650 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1651 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1650);
if ($tmp1649) goto block4; else goto block5;
block4:;
int64_t $tmp1652 = $tmp1646.value;
int64_t $tmp1653 = $tmp1647.value;
bool $tmp1654 = $tmp1652 <= $tmp1653;
frost$core$Bit $tmp1655 = (frost$core$Bit) {$tmp1654};
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block1; else goto block2;
block5:;
int64_t $tmp1657 = $tmp1646.value;
int64_t $tmp1658 = $tmp1647.value;
bool $tmp1659 = $tmp1657 < $tmp1658;
frost$core$Bit $tmp1660 = (frost$core$Bit) {$tmp1659};
bool $tmp1661 = $tmp1660.value;
if ($tmp1661) goto block1; else goto block2;
block1:;
// line 933
frost$core$Char8** $tmp1662 = &param0->data;
frost$core$Char8* $tmp1663 = *$tmp1662;
frost$core$Int64 $tmp1664 = *(&local0);
int64_t $tmp1665 = $tmp1664.value;
frost$core$Char8 $tmp1666 = $tmp1663[$tmp1665];
frost$core$Bit $tmp1667 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp1666, param1);
bool $tmp1668 = $tmp1667.value;
if ($tmp1668) goto block6; else goto block7;
block6:;
// line 934
frost$core$Bit $tmp1669 = frost$core$Bit$init$builtin_bit(true);
return $tmp1669;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp1670 = *(&local0);
int64_t $tmp1671 = $tmp1647.value;
int64_t $tmp1672 = $tmp1670.value;
int64_t $tmp1673 = $tmp1671 - $tmp1672;
frost$core$Int64 $tmp1674 = (frost$core$Int64) {$tmp1673};
frost$core$UInt64 $tmp1675 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1674);
if ($tmp1649) goto block9; else goto block10;
block9:;
uint64_t $tmp1676 = $tmp1675.value;
uint64_t $tmp1677 = $tmp1651.value;
bool $tmp1678 = $tmp1676 >= $tmp1677;
frost$core$Bit $tmp1679 = (frost$core$Bit) {$tmp1678};
bool $tmp1680 = $tmp1679.value;
if ($tmp1680) goto block8; else goto block2;
block10:;
uint64_t $tmp1681 = $tmp1675.value;
uint64_t $tmp1682 = $tmp1651.value;
bool $tmp1683 = $tmp1681 > $tmp1682;
frost$core$Bit $tmp1684 = (frost$core$Bit) {$tmp1683};
bool $tmp1685 = $tmp1684.value;
if ($tmp1685) goto block8; else goto block2;
block8:;
int64_t $tmp1686 = $tmp1670.value;
int64_t $tmp1687 = $tmp1650.value;
int64_t $tmp1688 = $tmp1686 + $tmp1687;
frost$core$Int64 $tmp1689 = (frost$core$Int64) {$tmp1688};
*(&local0) = $tmp1689;
goto block1;
block2:;
// line 937
frost$core$Bit $tmp1690 = frost$core$Bit$init$builtin_bit(false);
return $tmp1690;

}
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

// line 944
frost$core$String$Index$nullable $tmp1691 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(param0, param1);
frost$core$Bit $tmp1692 = frost$core$Bit$init$builtin_bit($tmp1691.nonnull);
return $tmp1692;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 955
frost$core$String$Index $tmp1693 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1694 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1693);
return $tmp1694;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 967
frost$core$Int64* $tmp1695 = &param0->_length;
frost$core$Int64 $tmp1696 = *$tmp1695;
frost$core$Int64* $tmp1697 = &param1->_length;
frost$core$Int64 $tmp1698 = *$tmp1697;
int64_t $tmp1699 = $tmp1696.value;
int64_t $tmp1700 = $tmp1698.value;
bool $tmp1701 = $tmp1699 < $tmp1700;
frost$core$Bit $tmp1702 = (frost$core$Bit) {$tmp1701};
bool $tmp1703 = $tmp1702.value;
if ($tmp1703) goto block1; else goto block2;
block1:;
// line 968
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 970
frost$core$Int64 $tmp1704 = param2.value;
frost$core$Int64* $tmp1705 = &param0->_length;
frost$core$Int64 $tmp1706 = *$tmp1705;
frost$core$Int64* $tmp1707 = &param1->_length;
frost$core$Int64 $tmp1708 = *$tmp1707;
int64_t $tmp1709 = $tmp1706.value;
int64_t $tmp1710 = $tmp1708.value;
int64_t $tmp1711 = $tmp1709 - $tmp1710;
frost$core$Int64 $tmp1712 = (frost$core$Int64) {$tmp1711};
frost$core$Bit $tmp1713 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp1714 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1704, $tmp1712, $tmp1713);
frost$core$Int64 $tmp1715 = $tmp1714.min;
*(&local0) = $tmp1715;
frost$core$Int64 $tmp1716 = $tmp1714.max;
frost$core$Bit $tmp1717 = $tmp1714.inclusive;
bool $tmp1718 = $tmp1717.value;
frost$core$Int64 $tmp1719 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1720 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1719);
if ($tmp1718) goto block6; else goto block7;
block6:;
int64_t $tmp1721 = $tmp1715.value;
int64_t $tmp1722 = $tmp1716.value;
bool $tmp1723 = $tmp1721 <= $tmp1722;
frost$core$Bit $tmp1724 = (frost$core$Bit) {$tmp1723};
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block3; else goto block4;
block7:;
int64_t $tmp1726 = $tmp1715.value;
int64_t $tmp1727 = $tmp1716.value;
bool $tmp1728 = $tmp1726 < $tmp1727;
frost$core$Bit $tmp1729 = (frost$core$Bit) {$tmp1728};
bool $tmp1730 = $tmp1729.value;
if ($tmp1730) goto block3; else goto block4;
block3:;
// line 971
frost$core$Int64 $tmp1731 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1732 = &param1->_length;
frost$core$Int64 $tmp1733 = *$tmp1732;
frost$core$Bit $tmp1734 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1735 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1731, $tmp1733, $tmp1734);
frost$core$Int64 $tmp1736 = $tmp1735.min;
*(&local1) = $tmp1736;
frost$core$Int64 $tmp1737 = $tmp1735.max;
frost$core$Bit $tmp1738 = $tmp1735.inclusive;
bool $tmp1739 = $tmp1738.value;
frost$core$Int64 $tmp1740 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1741 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1740);
if ($tmp1739) goto block11; else goto block12;
block11:;
int64_t $tmp1742 = $tmp1736.value;
int64_t $tmp1743 = $tmp1737.value;
bool $tmp1744 = $tmp1742 <= $tmp1743;
frost$core$Bit $tmp1745 = (frost$core$Bit) {$tmp1744};
bool $tmp1746 = $tmp1745.value;
if ($tmp1746) goto block8; else goto block9;
block12:;
int64_t $tmp1747 = $tmp1736.value;
int64_t $tmp1748 = $tmp1737.value;
bool $tmp1749 = $tmp1747 < $tmp1748;
frost$core$Bit $tmp1750 = (frost$core$Bit) {$tmp1749};
bool $tmp1751 = $tmp1750.value;
if ($tmp1751) goto block8; else goto block9;
block8:;
// line 972
frost$core$Char8** $tmp1752 = &param0->data;
frost$core$Char8* $tmp1753 = *$tmp1752;
frost$core$Int64 $tmp1754 = *(&local0);
frost$core$Int64 $tmp1755 = *(&local1);
int64_t $tmp1756 = $tmp1754.value;
int64_t $tmp1757 = $tmp1755.value;
int64_t $tmp1758 = $tmp1756 + $tmp1757;
frost$core$Int64 $tmp1759 = (frost$core$Int64) {$tmp1758};
int64_t $tmp1760 = $tmp1759.value;
frost$core$Char8 $tmp1761 = $tmp1753[$tmp1760];
frost$core$Char8** $tmp1762 = &param1->data;
frost$core$Char8* $tmp1763 = *$tmp1762;
frost$core$Int64 $tmp1764 = *(&local1);
int64_t $tmp1765 = $tmp1764.value;
frost$core$Char8 $tmp1766 = $tmp1763[$tmp1765];
frost$core$Bit $tmp1767 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1761, $tmp1766);
bool $tmp1768 = $tmp1767.value;
if ($tmp1768) goto block13; else goto block14;
block13:;
// line 973
goto block5;
block14:;
goto block10;
block10:;
frost$core$Int64 $tmp1769 = *(&local1);
int64_t $tmp1770 = $tmp1737.value;
int64_t $tmp1771 = $tmp1769.value;
int64_t $tmp1772 = $tmp1770 - $tmp1771;
frost$core$Int64 $tmp1773 = (frost$core$Int64) {$tmp1772};
frost$core$UInt64 $tmp1774 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1773);
if ($tmp1739) goto block16; else goto block17;
block16:;
uint64_t $tmp1775 = $tmp1774.value;
uint64_t $tmp1776 = $tmp1741.value;
bool $tmp1777 = $tmp1775 >= $tmp1776;
frost$core$Bit $tmp1778 = (frost$core$Bit) {$tmp1777};
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block15; else goto block9;
block17:;
uint64_t $tmp1780 = $tmp1774.value;
uint64_t $tmp1781 = $tmp1741.value;
bool $tmp1782 = $tmp1780 > $tmp1781;
frost$core$Bit $tmp1783 = (frost$core$Bit) {$tmp1782};
bool $tmp1784 = $tmp1783.value;
if ($tmp1784) goto block15; else goto block9;
block15:;
int64_t $tmp1785 = $tmp1769.value;
int64_t $tmp1786 = $tmp1740.value;
int64_t $tmp1787 = $tmp1785 + $tmp1786;
frost$core$Int64 $tmp1788 = (frost$core$Int64) {$tmp1787};
*(&local1) = $tmp1788;
goto block8;
block9:;
// line 976
frost$core$Int64 $tmp1789 = *(&local0);
frost$core$String$Index $tmp1790 = frost$core$String$Index$init$frost$core$Int64($tmp1789);
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp1790, true }).value), true });
block5:;
frost$core$Int64 $tmp1791 = *(&local0);
int64_t $tmp1792 = $tmp1716.value;
int64_t $tmp1793 = $tmp1791.value;
int64_t $tmp1794 = $tmp1792 - $tmp1793;
frost$core$Int64 $tmp1795 = (frost$core$Int64) {$tmp1794};
frost$core$UInt64 $tmp1796 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1795);
if ($tmp1718) goto block19; else goto block20;
block19:;
uint64_t $tmp1797 = $tmp1796.value;
uint64_t $tmp1798 = $tmp1720.value;
bool $tmp1799 = $tmp1797 >= $tmp1798;
frost$core$Bit $tmp1800 = (frost$core$Bit) {$tmp1799};
bool $tmp1801 = $tmp1800.value;
if ($tmp1801) goto block18; else goto block4;
block20:;
uint64_t $tmp1802 = $tmp1796.value;
uint64_t $tmp1803 = $tmp1720.value;
bool $tmp1804 = $tmp1802 > $tmp1803;
frost$core$Bit $tmp1805 = (frost$core$Bit) {$tmp1804};
bool $tmp1806 = $tmp1805.value;
if ($tmp1806) goto block18; else goto block4;
block18:;
int64_t $tmp1807 = $tmp1791.value;
int64_t $tmp1808 = $tmp1719.value;
int64_t $tmp1809 = $tmp1807 + $tmp1808;
frost$core$Int64 $tmp1810 = (frost$core$Int64) {$tmp1809};
*(&local0) = $tmp1810;
goto block3;
block4:;
// line 978
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 989
frost$core$String$Index $tmp1811 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1812 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1811);
return $tmp1812;

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1001
frost$core$Int64* $tmp1813 = &param0->_length;
frost$core$Int64 $tmp1814 = *$tmp1813;
frost$core$Int64* $tmp1815 = &param1->_length;
frost$core$Int64 $tmp1816 = *$tmp1815;
int64_t $tmp1817 = $tmp1814.value;
int64_t $tmp1818 = $tmp1816.value;
bool $tmp1819 = $tmp1817 < $tmp1818;
frost$core$Bit $tmp1820 = (frost$core$Bit) {$tmp1819};
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block1; else goto block2;
block1:;
// line 1002
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 1004
frost$core$Int64 $tmp1822 = param2.value;
frost$core$Int64* $tmp1823 = &param0->_length;
frost$core$Int64 $tmp1824 = *$tmp1823;
frost$core$Int64* $tmp1825 = &param1->_length;
frost$core$Int64 $tmp1826 = *$tmp1825;
int64_t $tmp1827 = $tmp1824.value;
int64_t $tmp1828 = $tmp1826.value;
int64_t $tmp1829 = $tmp1827 - $tmp1828;
frost$core$Int64 $tmp1830 = (frost$core$Int64) {$tmp1829};
frost$core$Int64 $tmp1831 = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64($tmp1822, $tmp1830);
*(&local0) = $tmp1831;
// line 1005
frost$core$Int64 $tmp1832 = *(&local0);
frost$core$Int64 $tmp1833 = (frost$core$Int64) {0};
frost$core$Int64 $tmp1834 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1835 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1836 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1832, $tmp1833, $tmp1834, $tmp1835);
frost$core$Int64 $tmp1837 = $tmp1836.start;
*(&local1) = $tmp1837;
frost$core$Int64 $tmp1838 = $tmp1836.end;
frost$core$Int64 $tmp1839 = $tmp1836.step;
frost$core$UInt64 $tmp1840 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1839);
frost$core$Int64 $tmp1841 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1839);
frost$core$UInt64 $tmp1842 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1841);
frost$core$Bit $tmp1843 = $tmp1836.inclusive;
bool $tmp1844 = $tmp1843.value;
frost$core$Int64 $tmp1845 = (frost$core$Int64) {0};
int64_t $tmp1846 = $tmp1839.value;
int64_t $tmp1847 = $tmp1845.value;
bool $tmp1848 = $tmp1846 >= $tmp1847;
frost$core$Bit $tmp1849 = (frost$core$Bit) {$tmp1848};
bool $tmp1850 = $tmp1849.value;
if ($tmp1850) goto block6; else goto block7;
block6:;
if ($tmp1844) goto block8; else goto block9;
block8:;
int64_t $tmp1851 = $tmp1837.value;
int64_t $tmp1852 = $tmp1838.value;
bool $tmp1853 = $tmp1851 <= $tmp1852;
frost$core$Bit $tmp1854 = (frost$core$Bit) {$tmp1853};
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block3; else goto block4;
block9:;
int64_t $tmp1856 = $tmp1837.value;
int64_t $tmp1857 = $tmp1838.value;
bool $tmp1858 = $tmp1856 < $tmp1857;
frost$core$Bit $tmp1859 = (frost$core$Bit) {$tmp1858};
bool $tmp1860 = $tmp1859.value;
if ($tmp1860) goto block3; else goto block4;
block7:;
if ($tmp1844) goto block10; else goto block11;
block10:;
int64_t $tmp1861 = $tmp1837.value;
int64_t $tmp1862 = $tmp1838.value;
bool $tmp1863 = $tmp1861 >= $tmp1862;
frost$core$Bit $tmp1864 = (frost$core$Bit) {$tmp1863};
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block3; else goto block4;
block11:;
int64_t $tmp1866 = $tmp1837.value;
int64_t $tmp1867 = $tmp1838.value;
bool $tmp1868 = $tmp1866 > $tmp1867;
frost$core$Bit $tmp1869 = (frost$core$Bit) {$tmp1868};
bool $tmp1870 = $tmp1869.value;
if ($tmp1870) goto block3; else goto block4;
block3:;
// line 1006
frost$core$Int64 $tmp1871 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1872 = &param1->_length;
frost$core$Int64 $tmp1873 = *$tmp1872;
frost$core$Bit $tmp1874 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1875 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1871, $tmp1873, $tmp1874);
frost$core$Int64 $tmp1876 = $tmp1875.min;
*(&local2) = $tmp1876;
frost$core$Int64 $tmp1877 = $tmp1875.max;
frost$core$Bit $tmp1878 = $tmp1875.inclusive;
bool $tmp1879 = $tmp1878.value;
frost$core$Int64 $tmp1880 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1881 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1880);
if ($tmp1879) goto block15; else goto block16;
block15:;
int64_t $tmp1882 = $tmp1876.value;
int64_t $tmp1883 = $tmp1877.value;
bool $tmp1884 = $tmp1882 <= $tmp1883;
frost$core$Bit $tmp1885 = (frost$core$Bit) {$tmp1884};
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block12; else goto block13;
block16:;
int64_t $tmp1887 = $tmp1876.value;
int64_t $tmp1888 = $tmp1877.value;
bool $tmp1889 = $tmp1887 < $tmp1888;
frost$core$Bit $tmp1890 = (frost$core$Bit) {$tmp1889};
bool $tmp1891 = $tmp1890.value;
if ($tmp1891) goto block12; else goto block13;
block12:;
// line 1007
frost$core$Char8** $tmp1892 = &param0->data;
frost$core$Char8* $tmp1893 = *$tmp1892;
frost$core$Int64 $tmp1894 = *(&local1);
frost$core$Int64 $tmp1895 = *(&local2);
int64_t $tmp1896 = $tmp1894.value;
int64_t $tmp1897 = $tmp1895.value;
int64_t $tmp1898 = $tmp1896 + $tmp1897;
frost$core$Int64 $tmp1899 = (frost$core$Int64) {$tmp1898};
int64_t $tmp1900 = $tmp1899.value;
frost$core$Char8 $tmp1901 = $tmp1893[$tmp1900];
frost$core$Char8** $tmp1902 = &param1->data;
frost$core$Char8* $tmp1903 = *$tmp1902;
frost$core$Int64 $tmp1904 = *(&local2);
int64_t $tmp1905 = $tmp1904.value;
frost$core$Char8 $tmp1906 = $tmp1903[$tmp1905];
frost$core$Bit $tmp1907 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1901, $tmp1906);
bool $tmp1908 = $tmp1907.value;
if ($tmp1908) goto block17; else goto block18;
block17:;
// line 1008
goto block5;
block18:;
goto block14;
block14:;
frost$core$Int64 $tmp1909 = *(&local2);
int64_t $tmp1910 = $tmp1877.value;
int64_t $tmp1911 = $tmp1909.value;
int64_t $tmp1912 = $tmp1910 - $tmp1911;
frost$core$Int64 $tmp1913 = (frost$core$Int64) {$tmp1912};
frost$core$UInt64 $tmp1914 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1913);
if ($tmp1879) goto block20; else goto block21;
block20:;
uint64_t $tmp1915 = $tmp1914.value;
uint64_t $tmp1916 = $tmp1881.value;
bool $tmp1917 = $tmp1915 >= $tmp1916;
frost$core$Bit $tmp1918 = (frost$core$Bit) {$tmp1917};
bool $tmp1919 = $tmp1918.value;
if ($tmp1919) goto block19; else goto block13;
block21:;
uint64_t $tmp1920 = $tmp1914.value;
uint64_t $tmp1921 = $tmp1881.value;
bool $tmp1922 = $tmp1920 > $tmp1921;
frost$core$Bit $tmp1923 = (frost$core$Bit) {$tmp1922};
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block19; else goto block13;
block19:;
int64_t $tmp1925 = $tmp1909.value;
int64_t $tmp1926 = $tmp1880.value;
int64_t $tmp1927 = $tmp1925 + $tmp1926;
frost$core$Int64 $tmp1928 = (frost$core$Int64) {$tmp1927};
*(&local2) = $tmp1928;
goto block12;
block13:;
// line 1011
frost$core$Int64 $tmp1929 = *(&local1);
frost$core$String$Index $tmp1930 = frost$core$String$Index$init$frost$core$Int64($tmp1929);
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp1930, true }).value), true });
block5:;
frost$core$Int64 $tmp1931 = *(&local1);
if ($tmp1850) goto block23; else goto block24;
block23:;
int64_t $tmp1932 = $tmp1838.value;
int64_t $tmp1933 = $tmp1931.value;
int64_t $tmp1934 = $tmp1932 - $tmp1933;
frost$core$Int64 $tmp1935 = (frost$core$Int64) {$tmp1934};
frost$core$UInt64 $tmp1936 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1935);
if ($tmp1844) goto block25; else goto block26;
block25:;
uint64_t $tmp1937 = $tmp1936.value;
uint64_t $tmp1938 = $tmp1840.value;
bool $tmp1939 = $tmp1937 >= $tmp1938;
frost$core$Bit $tmp1940 = (frost$core$Bit) {$tmp1939};
bool $tmp1941 = $tmp1940.value;
if ($tmp1941) goto block22; else goto block4;
block26:;
uint64_t $tmp1942 = $tmp1936.value;
uint64_t $tmp1943 = $tmp1840.value;
bool $tmp1944 = $tmp1942 > $tmp1943;
frost$core$Bit $tmp1945 = (frost$core$Bit) {$tmp1944};
bool $tmp1946 = $tmp1945.value;
if ($tmp1946) goto block22; else goto block4;
block24:;
int64_t $tmp1947 = $tmp1931.value;
int64_t $tmp1948 = $tmp1838.value;
int64_t $tmp1949 = $tmp1947 - $tmp1948;
frost$core$Int64 $tmp1950 = (frost$core$Int64) {$tmp1949};
frost$core$UInt64 $tmp1951 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1950);
if ($tmp1844) goto block27; else goto block28;
block27:;
uint64_t $tmp1952 = $tmp1951.value;
uint64_t $tmp1953 = $tmp1842.value;
bool $tmp1954 = $tmp1952 >= $tmp1953;
frost$core$Bit $tmp1955 = (frost$core$Bit) {$tmp1954};
bool $tmp1956 = $tmp1955.value;
if ($tmp1956) goto block22; else goto block4;
block28:;
uint64_t $tmp1957 = $tmp1951.value;
uint64_t $tmp1958 = $tmp1842.value;
bool $tmp1959 = $tmp1957 > $tmp1958;
frost$core$Bit $tmp1960 = (frost$core$Bit) {$tmp1959};
bool $tmp1961 = $tmp1960.value;
if ($tmp1961) goto block22; else goto block4;
block22:;
int64_t $tmp1962 = $tmp1931.value;
int64_t $tmp1963 = $tmp1839.value;
int64_t $tmp1964 = $tmp1962 + $tmp1963;
frost$core$Int64 $tmp1965 = (frost$core$Int64) {$tmp1964};
*(&local1) = $tmp1965;
goto block3;
block4:;
// line 1013
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1024
frost$core$Matcher* $tmp1966 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp1967;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp1967, $tmp1966);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
// unreffing REF($1:frost.core.Matcher)
return $tmp1967;

}
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1035
frost$core$Matcher* $tmp1968 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp1969 = frost$core$Matcher$find$R$frost$core$Bit($tmp1968);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
// unreffing REF($1:frost.core.Matcher)
return $tmp1969;

}
frost$collections$ListView* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q(frost$core$String* param0, frost$core$RegularExpression* param1) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
// line 1049
frost$core$Matcher* $tmp1970 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
frost$core$Matcher* $tmp1971 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
*(&local0) = $tmp1970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
// unreffing REF($1:frost.core.Matcher)
// line 1050
frost$core$Matcher* $tmp1972 = *(&local0);
frost$core$Bit $tmp1973;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp1973, $tmp1972);
bool $tmp1974 = $tmp1973.value;
if ($tmp1974) goto block1; else goto block2;
block1:;
// line 1051
frost$collections$Array* $tmp1975 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1975);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
frost$collections$Array* $tmp1976 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
*(&local1) = $tmp1975;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
// unreffing REF($18:frost.collections.Array<frost.core.String>)
// line 1052
frost$core$Int64 $tmp1977 = (frost$core$Int64) {1};
frost$core$Matcher* $tmp1978 = *(&local0);
frost$core$Int64 $tmp1979;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp1979, $tmp1978);
frost$core$Bit $tmp1980 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1981 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1977, $tmp1979, $tmp1980);
frost$core$Int64 $tmp1982 = $tmp1981.min;
*(&local2) = $tmp1982;
frost$core$Int64 $tmp1983 = $tmp1981.max;
frost$core$Bit $tmp1984 = $tmp1981.inclusive;
bool $tmp1985 = $tmp1984.value;
frost$core$Int64 $tmp1986 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1987 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1986);
if ($tmp1985) goto block6; else goto block7;
block6:;
int64_t $tmp1988 = $tmp1982.value;
int64_t $tmp1989 = $tmp1983.value;
bool $tmp1990 = $tmp1988 <= $tmp1989;
frost$core$Bit $tmp1991 = (frost$core$Bit) {$tmp1990};
bool $tmp1992 = $tmp1991.value;
if ($tmp1992) goto block3; else goto block4;
block7:;
int64_t $tmp1993 = $tmp1982.value;
int64_t $tmp1994 = $tmp1983.value;
bool $tmp1995 = $tmp1993 < $tmp1994;
frost$core$Bit $tmp1996 = (frost$core$Bit) {$tmp1995};
bool $tmp1997 = $tmp1996.value;
if ($tmp1997) goto block3; else goto block4;
block3:;
// line 1053
frost$collections$Array* $tmp1998 = *(&local1);
frost$core$Matcher* $tmp1999 = *(&local0);
frost$core$Int64 $tmp2000 = *(&local2);
frost$core$String* $tmp2001 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp1999, $tmp2000);
frost$collections$Array$add$frost$collections$Array$T($tmp1998, ((frost$core$Object*) $tmp2001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
// unreffing REF($62:frost.core.String?)
goto block5;
block5:;
frost$core$Int64 $tmp2002 = *(&local2);
int64_t $tmp2003 = $tmp1983.value;
int64_t $tmp2004 = $tmp2002.value;
int64_t $tmp2005 = $tmp2003 - $tmp2004;
frost$core$Int64 $tmp2006 = (frost$core$Int64) {$tmp2005};
frost$core$UInt64 $tmp2007 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2006);
if ($tmp1985) goto block9; else goto block10;
block9:;
uint64_t $tmp2008 = $tmp2007.value;
uint64_t $tmp2009 = $tmp1987.value;
bool $tmp2010 = $tmp2008 >= $tmp2009;
frost$core$Bit $tmp2011 = (frost$core$Bit) {$tmp2010};
bool $tmp2012 = $tmp2011.value;
if ($tmp2012) goto block8; else goto block4;
block10:;
uint64_t $tmp2013 = $tmp2007.value;
uint64_t $tmp2014 = $tmp1987.value;
bool $tmp2015 = $tmp2013 > $tmp2014;
frost$core$Bit $tmp2016 = (frost$core$Bit) {$tmp2015};
bool $tmp2017 = $tmp2016.value;
if ($tmp2017) goto block8; else goto block4;
block8:;
int64_t $tmp2018 = $tmp2002.value;
int64_t $tmp2019 = $tmp1986.value;
int64_t $tmp2020 = $tmp2018 + $tmp2019;
frost$core$Int64 $tmp2021 = (frost$core$Int64) {$tmp2020};
*(&local2) = $tmp2021;
goto block3;
block4:;
// line 1055
frost$collections$Array* $tmp2022 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2022)));
frost$collections$Array* $tmp2023 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp2024 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
// unreffing matcher
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) $tmp2022);
block2:;
// line 1057
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp2025 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2025));
// unreffing matcher
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) NULL);

}
frost$core$String* frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
// line 1068
frost$core$Bit $tmp2026 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s2027);
bool $tmp2028 = $tmp2026.value;
if ($tmp2028) goto block1; else goto block2;
block1:;
// line 1069
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1071
frost$core$MutableString* $tmp2029 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2029);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
frost$core$MutableString* $tmp2030 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
*(&local0) = $tmp2029;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
// unreffing REF($9:frost.core.MutableString)
// line 1072
frost$core$String$Index $tmp2031 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2031;
// line 1073
goto block3;
block3:;
// line 1074
frost$core$String$Index $tmp2032 = *(&local1);
frost$core$String$Index$nullable $tmp2033 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2032);
*(&local2) = $tmp2033;
// line 1075
frost$core$String$Index$nullable $tmp2034 = *(&local2);
frost$core$Bit $tmp2035 = frost$core$Bit$init$builtin_bit(!$tmp2034.nonnull);
bool $tmp2036 = $tmp2035.value;
if ($tmp2036) goto block5; else goto block6;
block5:;
// line 1076
frost$core$MutableString* $tmp2037 = *(&local0);
frost$core$String$Index $tmp2038 = *(&local1);
frost$core$Bit $tmp2039 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2040 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2038, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2039);
frost$core$String* $tmp2041 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2040);
frost$core$MutableString$append$frost$core$String($tmp2037, $tmp2041);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
// unreffing REF($42:frost.core.String)
// line 1077
goto block4;
block6:;
// line 1079
frost$core$MutableString* $tmp2042 = *(&local0);
frost$core$String$Index $tmp2043 = *(&local1);
frost$core$String$Index$nullable $tmp2044 = *(&local2);
frost$core$Bit $tmp2045 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2046 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2043, ((frost$core$String$Index) $tmp2044.value), $tmp2045);
frost$core$String* $tmp2047 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2046);
frost$core$MutableString$append$frost$core$String($tmp2042, $tmp2047);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
// unreffing REF($56:frost.core.String)
// line 1080
frost$core$MutableString* $tmp2048 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp2048, param2);
// line 1081
frost$core$String$Index$nullable $tmp2049 = *(&local2);
frost$core$Int64 $tmp2050 = ((frost$core$String$Index) $tmp2049.value).value;
frost$core$Int64* $tmp2051 = &param1->_length;
frost$core$Int64 $tmp2052 = *$tmp2051;
int64_t $tmp2053 = $tmp2050.value;
int64_t $tmp2054 = $tmp2052.value;
int64_t $tmp2055 = $tmp2053 + $tmp2054;
frost$core$Int64 $tmp2056 = (frost$core$Int64) {$tmp2055};
frost$core$String$Index $tmp2057 = frost$core$String$Index$init$frost$core$Int64($tmp2056);
*(&local1) = $tmp2057;
goto block3;
block4:;
// line 1083
frost$core$MutableString* $tmp2058 = *(&local0);
frost$core$String* $tmp2059 = frost$core$MutableString$finish$R$frost$core$String($tmp2058);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
// unreffing REF($79:frost.core.String)
frost$core$MutableString* $tmp2060 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2059;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

// line 1097
frost$core$Bit $tmp2061 = frost$core$Bit$init$builtin_bit(true);
frost$core$String* $tmp2062 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param0, param1, param2, $tmp2061);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
// unreffing REF($2:frost.core.String)
return $tmp2062;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// line 1102
frost$core$MutableString* $tmp2063 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2063);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
frost$core$MutableString* $tmp2064 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
*(&local0) = $tmp2063;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
// unreffing REF($1:frost.core.MutableString)
// line 1103
frost$core$Matcher* $tmp2065 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
frost$core$Matcher* $tmp2066 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
*(&local1) = $tmp2065;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
// unreffing REF($14:frost.core.Matcher)
// line 1104
goto block1;
block1:;
frost$core$Matcher* $tmp2067 = *(&local1);
frost$core$Bit $tmp2068 = frost$core$Matcher$find$R$frost$core$Bit($tmp2067);
bool $tmp2069 = $tmp2068.value;
if ($tmp2069) goto block2; else goto block3;
block2:;
// line 1105
frost$core$Matcher* $tmp2070 = *(&local1);
frost$core$MutableString* $tmp2071 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2070, $tmp2071, param2, param3);
goto block1;
block3:;
// line 1107
frost$core$Matcher* $tmp2072 = *(&local1);
frost$core$MutableString* $tmp2073 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2072, $tmp2073);
// line 1108
frost$core$MutableString* $tmp2074 = *(&local0);
frost$core$String* $tmp2075 = frost$core$MutableString$finish$R$frost$core$String($tmp2074);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
// unreffing REF($42:frost.core.String)
frost$core$Matcher* $tmp2076 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2077 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2075;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 1129
frost$core$MutableString* $tmp2078 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2078);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
frost$core$MutableString* $tmp2079 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
*(&local0) = $tmp2078;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
// unreffing REF($1:frost.core.MutableString)
// line 1130
frost$core$Matcher* $tmp2080 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
frost$core$Matcher* $tmp2081 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
*(&local1) = $tmp2080;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
// unreffing REF($14:frost.core.Matcher)
// line 1131
goto block1;
block1:;
frost$core$Matcher* $tmp2082 = *(&local1);
frost$core$Bit $tmp2083 = frost$core$Matcher$find$R$frost$core$Bit($tmp2082);
bool $tmp2084 = $tmp2083.value;
if ($tmp2084) goto block2; else goto block3;
block2:;
// line 1132
frost$core$Matcher* $tmp2085 = *(&local1);
frost$core$MutableString* $tmp2086 = *(&local0);
frost$core$Matcher* $tmp2087 = *(&local1);
frost$core$Int64 $tmp2088 = (frost$core$Int64) {0};
frost$core$String* $tmp2089 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2087, $tmp2088);
frost$core$Int8** $tmp2090 = &param2->pointer;
frost$core$Int8* $tmp2091 = *$tmp2090;
frost$core$Object** $tmp2092 = &param2->target;
frost$core$Object* $tmp2093 = *$tmp2092;
bool $tmp2094 = $tmp2093 != ((frost$core$Object*) NULL);
if ($tmp2094) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp2096 = (($fn2095) $tmp2091)($tmp2089);
*(&local2) = $tmp2096;
goto block6;
block4:;
frost$core$Object* $tmp2098 = (($fn2097) $tmp2091)($tmp2093, $tmp2089);
*(&local2) = $tmp2098;
goto block6;
block6:;
frost$core$Object* $tmp2099 = *(&local2);
$fn2101 $tmp2100 = ($fn2101) $tmp2099->$class->vtable[0];
frost$core$String* $tmp2102 = $tmp2100($tmp2099);
frost$core$Bit $tmp2103 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2085, $tmp2086, $tmp2102, $tmp2103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
// unreffing REF($55:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2099);
// unreffing REF($53:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2089));
// unreffing REF($36:frost.core.String?)
goto block1;
block3:;
// line 1134
frost$core$Matcher* $tmp2104 = *(&local1);
frost$core$MutableString* $tmp2105 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2104, $tmp2105);
// line 1135
frost$core$MutableString* $tmp2106 = *(&local0);
frost$core$String* $tmp2107 = frost$core$MutableString$convert$R$frost$core$String($tmp2106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
// unreffing REF($74:frost.core.String)
frost$core$Matcher* $tmp2108 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2107;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
frost$core$Object* local4 = NULL;
// line 1149
frost$core$MutableString* $tmp2110 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2110);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
frost$core$MutableString* $tmp2111 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
*(&local0) = $tmp2110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
// unreffing REF($1:frost.core.MutableString)
// line 1150
frost$core$Matcher* $tmp2112 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
frost$core$Matcher* $tmp2113 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
*(&local1) = $tmp2112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
// unreffing REF($14:frost.core.Matcher)
// line 1151
goto block1;
block1:;
frost$core$Matcher* $tmp2114 = *(&local1);
frost$core$Bit $tmp2115 = frost$core$Matcher$find$R$frost$core$Bit($tmp2114);
bool $tmp2116 = $tmp2115.value;
if ($tmp2116) goto block2; else goto block3;
block2:;
// line 1152
frost$collections$Array* $tmp2117 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2117);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$collections$Array* $tmp2118 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
*(&local2) = $tmp2117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
// unreffing REF($32:frost.collections.Array<frost.core.String?>)
// line 1153
frost$core$Int64 $tmp2119 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp2120 = *(&local1);
frost$core$Int64 $tmp2121;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2121, $tmp2120);
frost$core$Bit $tmp2122 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2123 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2119, $tmp2121, $tmp2122);
frost$core$Int64 $tmp2124 = $tmp2123.min;
*(&local3) = $tmp2124;
frost$core$Int64 $tmp2125 = $tmp2123.max;
frost$core$Bit $tmp2126 = $tmp2123.inclusive;
bool $tmp2127 = $tmp2126.value;
frost$core$Int64 $tmp2128 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2129 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2128);
if ($tmp2127) goto block7; else goto block8;
block7:;
int64_t $tmp2130 = $tmp2124.value;
int64_t $tmp2131 = $tmp2125.value;
bool $tmp2132 = $tmp2130 <= $tmp2131;
frost$core$Bit $tmp2133 = (frost$core$Bit) {$tmp2132};
bool $tmp2134 = $tmp2133.value;
if ($tmp2134) goto block4; else goto block5;
block8:;
int64_t $tmp2135 = $tmp2124.value;
int64_t $tmp2136 = $tmp2125.value;
bool $tmp2137 = $tmp2135 < $tmp2136;
frost$core$Bit $tmp2138 = (frost$core$Bit) {$tmp2137};
bool $tmp2139 = $tmp2138.value;
if ($tmp2139) goto block4; else goto block5;
block4:;
// line 1154
frost$collections$Array* $tmp2140 = *(&local2);
frost$core$Matcher* $tmp2141 = *(&local1);
frost$core$Int64 $tmp2142 = *(&local3);
frost$core$String* $tmp2143 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2141, $tmp2142);
frost$collections$Array$add$frost$collections$Array$T($tmp2140, ((frost$core$Object*) $tmp2143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
// unreffing REF($76:frost.core.String?)
goto block6;
block6:;
frost$core$Int64 $tmp2144 = *(&local3);
int64_t $tmp2145 = $tmp2125.value;
int64_t $tmp2146 = $tmp2144.value;
int64_t $tmp2147 = $tmp2145 - $tmp2146;
frost$core$Int64 $tmp2148 = (frost$core$Int64) {$tmp2147};
frost$core$UInt64 $tmp2149 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2148);
if ($tmp2127) goto block10; else goto block11;
block10:;
uint64_t $tmp2150 = $tmp2149.value;
uint64_t $tmp2151 = $tmp2129.value;
bool $tmp2152 = $tmp2150 >= $tmp2151;
frost$core$Bit $tmp2153 = (frost$core$Bit) {$tmp2152};
bool $tmp2154 = $tmp2153.value;
if ($tmp2154) goto block9; else goto block5;
block11:;
uint64_t $tmp2155 = $tmp2149.value;
uint64_t $tmp2156 = $tmp2129.value;
bool $tmp2157 = $tmp2155 > $tmp2156;
frost$core$Bit $tmp2158 = (frost$core$Bit) {$tmp2157};
bool $tmp2159 = $tmp2158.value;
if ($tmp2159) goto block9; else goto block5;
block9:;
int64_t $tmp2160 = $tmp2144.value;
int64_t $tmp2161 = $tmp2128.value;
int64_t $tmp2162 = $tmp2160 + $tmp2161;
frost$core$Int64 $tmp2163 = (frost$core$Int64) {$tmp2162};
*(&local3) = $tmp2163;
goto block4;
block5:;
// line 1156
frost$core$Matcher* $tmp2164 = *(&local1);
frost$core$MutableString* $tmp2165 = *(&local0);
frost$collections$Array* $tmp2166 = *(&local2);
frost$core$Int8** $tmp2167 = &param2->pointer;
frost$core$Int8* $tmp2168 = *$tmp2167;
frost$core$Object** $tmp2169 = &param2->target;
frost$core$Object* $tmp2170 = *$tmp2169;
bool $tmp2171 = $tmp2170 != ((frost$core$Object*) NULL);
if ($tmp2171) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp2173 = (($fn2172) $tmp2168)(((frost$collections$ListView*) $tmp2166));
*(&local4) = $tmp2173;
goto block14;
block12:;
frost$core$Object* $tmp2175 = (($fn2174) $tmp2168)($tmp2170, ((frost$collections$ListView*) $tmp2166));
*(&local4) = $tmp2175;
goto block14;
block14:;
frost$core$Object* $tmp2176 = *(&local4);
$fn2178 $tmp2177 = ($fn2178) $tmp2176->$class->vtable[0];
frost$core$String* $tmp2179 = $tmp2177($tmp2176);
frost$core$Bit $tmp2180 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2164, $tmp2165, $tmp2179, $tmp2180);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
// unreffing REF($130:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2176);
// unreffing REF($128:frost.core.Object)
frost$collections$Array* $tmp2181 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
// unreffing groups
*(&local2) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// line 1158
frost$core$Matcher* $tmp2182 = *(&local1);
frost$core$MutableString* $tmp2183 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2182, $tmp2183);
// line 1159
frost$core$MutableString* $tmp2184 = *(&local0);
frost$core$String* $tmp2185 = frost$core$MutableString$convert$R$frost$core$String($tmp2184);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
// unreffing REF($151:frost.core.String)
frost$core$Matcher* $tmp2186 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2185;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1163
frost$core$Bit $tmp2188 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2189 = frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(param0, param1, $tmp2188);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
// unreffing REF($2:frost.collections.Iterator<frost.core.String.Index>)
return $tmp2189;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Bit param2) {

// line 1167
frost$core$String$MatchIterator* $tmp2190 = (frost$core$String$MatchIterator*) frostObjectAlloc(46, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp2190, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2190)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
// unreffing REF($1:frost.core.String.MatchIterator)
return ((frost$collections$Iterator*) $tmp2190);

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1171
frost$core$Bit $tmp2191 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2192 = frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(param0, param1, $tmp2191);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
// unreffing REF($2:frost.collections.Iterator<frost.core.String.Match>)
return $tmp2192;

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Bit param2) {

// line 1175
frost$core$String$RegexMatchIterator* $tmp2193 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(34, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit($tmp2193, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2193)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
// unreffing REF($1:frost.core.String.RegexMatchIterator)
return ((frost$collections$Iterator*) $tmp2193);

}
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(frost$core$String* param0) {

// line 1182
frost$core$Int64 $tmp2194 = (frost$core$Int64) {0};
frost$core$String$Index $tmp2195 = frost$core$String$Index$init$frost$core$Int64($tmp2194);
return $tmp2195;

}
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(frost$core$String* param0) {

// line 1189
frost$core$Int64* $tmp2196 = &param0->_length;
frost$core$Int64 $tmp2197 = *$tmp2196;
frost$core$String$Index $tmp2198 = frost$core$String$Index$init$frost$core$Int64($tmp2197);
return $tmp2198;

}
frost$core$String$Index frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

int64_t local0;
// line 1199
frost$core$Int64 $tmp2199 = param1.value;
frost$core$Int64* $tmp2200 = &param0->_length;
frost$core$Int64 $tmp2201 = *$tmp2200;
int64_t $tmp2202 = $tmp2199.value;
int64_t $tmp2203 = $tmp2201.value;
bool $tmp2204 = $tmp2202 < $tmp2203;
frost$core$Bit $tmp2205 = (frost$core$Bit) {$tmp2204};
bool $tmp2206 = $tmp2205.value;
if ($tmp2206) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2207 = (frost$core$Int64) {1199};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2208, $tmp2207);
abort(); // unreachable
block1:;
// line 1200
frost$core$Char8** $tmp2209 = &param0->data;
frost$core$Char8* $tmp2210 = *$tmp2209;
frost$core$Int64 $tmp2211 = param1.value;
int64_t $tmp2212 = $tmp2211.value;
frost$core$Char8 $tmp2213 = $tmp2210[$tmp2212];
uint8_t $tmp2214 = $tmp2213.value;
int64_t $tmp2215 = ((int64_t) $tmp2214) & 255;
*(&local0) = $tmp2215;
// line 1201
int64_t $tmp2216 = *(&local0);
bool $tmp2217 = $tmp2216 >= 240;
frost$core$Bit $tmp2218 = frost$core$Bit$init$builtin_bit($tmp2217);
bool $tmp2219 = $tmp2218.value;
if ($tmp2219) goto block3; else goto block4;
block3:;
// line 1202
frost$core$Int64 $tmp2220 = param1.value;
frost$core$Int64 $tmp2221 = (frost$core$Int64) {4};
int64_t $tmp2222 = $tmp2220.value;
int64_t $tmp2223 = $tmp2221.value;
int64_t $tmp2224 = $tmp2222 + $tmp2223;
frost$core$Int64 $tmp2225 = (frost$core$Int64) {$tmp2224};
frost$core$String$Index $tmp2226 = frost$core$String$Index$init$frost$core$Int64($tmp2225);
return $tmp2226;
block4:;
// line 1204
int64_t $tmp2227 = *(&local0);
bool $tmp2228 = $tmp2227 >= 224;
frost$core$Bit $tmp2229 = frost$core$Bit$init$builtin_bit($tmp2228);
bool $tmp2230 = $tmp2229.value;
if ($tmp2230) goto block5; else goto block6;
block5:;
// line 1205
frost$core$Int64 $tmp2231 = param1.value;
frost$core$Int64 $tmp2232 = (frost$core$Int64) {3};
int64_t $tmp2233 = $tmp2231.value;
int64_t $tmp2234 = $tmp2232.value;
int64_t $tmp2235 = $tmp2233 + $tmp2234;
frost$core$Int64 $tmp2236 = (frost$core$Int64) {$tmp2235};
frost$core$String$Index $tmp2237 = frost$core$String$Index$init$frost$core$Int64($tmp2236);
return $tmp2237;
block6:;
// line 1207
int64_t $tmp2238 = *(&local0);
bool $tmp2239 = $tmp2238 >= 192;
frost$core$Bit $tmp2240 = frost$core$Bit$init$builtin_bit($tmp2239);
bool $tmp2241 = $tmp2240.value;
if ($tmp2241) goto block7; else goto block8;
block7:;
// line 1208
frost$core$Int64 $tmp2242 = param1.value;
frost$core$Int64 $tmp2243 = (frost$core$Int64) {2};
int64_t $tmp2244 = $tmp2242.value;
int64_t $tmp2245 = $tmp2243.value;
int64_t $tmp2246 = $tmp2244 + $tmp2245;
frost$core$Int64 $tmp2247 = (frost$core$Int64) {$tmp2246};
frost$core$String$Index $tmp2248 = frost$core$String$Index$init$frost$core$Int64($tmp2247);
return $tmp2248;
block8:;
// line 1210
frost$core$Int64 $tmp2249 = param1.value;
frost$core$Int64 $tmp2250 = (frost$core$Int64) {1};
int64_t $tmp2251 = $tmp2249.value;
int64_t $tmp2252 = $tmp2250.value;
int64_t $tmp2253 = $tmp2251 + $tmp2252;
frost$core$Int64 $tmp2254 = (frost$core$Int64) {$tmp2253};
frost$core$String$Index $tmp2255 = frost$core$String$Index$init$frost$core$Int64($tmp2254);
return $tmp2255;

}
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
// line 1220
frost$core$Int64 $tmp2256 = param1.value;
frost$core$Int64 $tmp2257 = (frost$core$Int64) {0};
int64_t $tmp2258 = $tmp2256.value;
int64_t $tmp2259 = $tmp2257.value;
bool $tmp2260 = $tmp2258 > $tmp2259;
frost$core$Bit $tmp2261 = (frost$core$Bit) {$tmp2260};
bool $tmp2262 = $tmp2261.value;
if ($tmp2262) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2263 = (frost$core$Int64) {1220};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2264, $tmp2263);
abort(); // unreachable
block1:;
// line 1221
frost$core$Int64 $tmp2265 = param1.value;
frost$core$Int64 $tmp2266 = (frost$core$Int64) {1};
int64_t $tmp2267 = $tmp2265.value;
int64_t $tmp2268 = $tmp2266.value;
int64_t $tmp2269 = $tmp2267 - $tmp2268;
frost$core$Int64 $tmp2270 = (frost$core$Int64) {$tmp2269};
*(&local0) = $tmp2270;
// line 1222
goto block3;
block3:;
frost$core$Char8** $tmp2271 = &param0->data;
frost$core$Char8* $tmp2272 = *$tmp2271;
frost$core$Int64 $tmp2273 = *(&local0);
int64_t $tmp2274 = $tmp2273.value;
frost$core$Char8 $tmp2275 = $tmp2272[$tmp2274];
uint8_t $tmp2276 = $tmp2275.value;
int64_t $tmp2277 = ((int64_t) $tmp2276) & 255;
bool $tmp2278 = $tmp2277 >= 128;
frost$core$Char8** $tmp2279 = &param0->data;
frost$core$Char8* $tmp2280 = *$tmp2279;
frost$core$Int64 $tmp2281 = *(&local0);
int64_t $tmp2282 = $tmp2281.value;
frost$core$Char8 $tmp2283 = $tmp2280[$tmp2282];
uint8_t $tmp2284 = $tmp2283.value;
int64_t $tmp2285 = ((int64_t) $tmp2284) & 255;
bool $tmp2286 = $tmp2285 < 192;
bool $tmp2287 = $tmp2278 & $tmp2286;
frost$core$Bit $tmp2288 = frost$core$Bit$init$builtin_bit($tmp2287);
bool $tmp2289 = $tmp2288.value;
if ($tmp2289) goto block4; else goto block5;
block4:;
// line 1224
frost$core$Int64 $tmp2290 = *(&local0);
frost$core$Int64 $tmp2291 = (frost$core$Int64) {1};
int64_t $tmp2292 = $tmp2290.value;
int64_t $tmp2293 = $tmp2291.value;
int64_t $tmp2294 = $tmp2292 - $tmp2293;
frost$core$Int64 $tmp2295 = (frost$core$Int64) {$tmp2294};
*(&local0) = $tmp2295;
goto block3;
block5:;
// line 1226
frost$core$Int64 $tmp2296 = *(&local0);
frost$core$String$Index $tmp2297 = frost$core$String$Index$init$frost$core$Int64($tmp2296);
return $tmp2297;

}
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1, frost$core$Int64 param2) {

frost$core$String$Index local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1236
*(&local0) = param1;
// line 1237
frost$core$Int64 $tmp2298 = (frost$core$Int64) {0};
int64_t $tmp2299 = param2.value;
int64_t $tmp2300 = $tmp2298.value;
bool $tmp2301 = $tmp2299 > $tmp2300;
frost$core$Bit $tmp2302 = (frost$core$Bit) {$tmp2301};
bool $tmp2303 = $tmp2302.value;
if ($tmp2303) goto block1; else goto block3;
block1:;
// line 1238
frost$core$Int64 $tmp2304 = (frost$core$Int64) {0};
frost$core$Bit $tmp2305 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2306 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2304, param2, $tmp2305);
frost$core$Int64 $tmp2307 = $tmp2306.min;
*(&local1) = $tmp2307;
frost$core$Int64 $tmp2308 = $tmp2306.max;
frost$core$Bit $tmp2309 = $tmp2306.inclusive;
bool $tmp2310 = $tmp2309.value;
frost$core$Int64 $tmp2311 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2312 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2311);
if ($tmp2310) goto block7; else goto block8;
block7:;
int64_t $tmp2313 = $tmp2307.value;
int64_t $tmp2314 = $tmp2308.value;
bool $tmp2315 = $tmp2313 <= $tmp2314;
frost$core$Bit $tmp2316 = (frost$core$Bit) {$tmp2315};
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block4; else goto block5;
block8:;
int64_t $tmp2318 = $tmp2307.value;
int64_t $tmp2319 = $tmp2308.value;
bool $tmp2320 = $tmp2318 < $tmp2319;
frost$core$Bit $tmp2321 = (frost$core$Bit) {$tmp2320};
bool $tmp2322 = $tmp2321.value;
if ($tmp2322) goto block4; else goto block5;
block4:;
// line 1239
frost$core$String$Index $tmp2323 = *(&local0);
frost$core$String$Index $tmp2324 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2323);
*(&local0) = $tmp2324;
goto block6;
block6:;
frost$core$Int64 $tmp2325 = *(&local1);
int64_t $tmp2326 = $tmp2308.value;
int64_t $tmp2327 = $tmp2325.value;
int64_t $tmp2328 = $tmp2326 - $tmp2327;
frost$core$Int64 $tmp2329 = (frost$core$Int64) {$tmp2328};
frost$core$UInt64 $tmp2330 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2329);
if ($tmp2310) goto block10; else goto block11;
block10:;
uint64_t $tmp2331 = $tmp2330.value;
uint64_t $tmp2332 = $tmp2312.value;
bool $tmp2333 = $tmp2331 >= $tmp2332;
frost$core$Bit $tmp2334 = (frost$core$Bit) {$tmp2333};
bool $tmp2335 = $tmp2334.value;
if ($tmp2335) goto block9; else goto block5;
block11:;
uint64_t $tmp2336 = $tmp2330.value;
uint64_t $tmp2337 = $tmp2312.value;
bool $tmp2338 = $tmp2336 > $tmp2337;
frost$core$Bit $tmp2339 = (frost$core$Bit) {$tmp2338};
bool $tmp2340 = $tmp2339.value;
if ($tmp2340) goto block9; else goto block5;
block9:;
int64_t $tmp2341 = $tmp2325.value;
int64_t $tmp2342 = $tmp2311.value;
int64_t $tmp2343 = $tmp2341 + $tmp2342;
frost$core$Int64 $tmp2344 = (frost$core$Int64) {$tmp2343};
*(&local1) = $tmp2344;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 1243
frost$core$Int64 $tmp2345 = (frost$core$Int64) {0};
frost$core$Int64 $tmp2346 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp2347 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp2348 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2345, param2, $tmp2346, $tmp2347);
frost$core$Int64 $tmp2349 = $tmp2348.start;
*(&local2) = $tmp2349;
frost$core$Int64 $tmp2350 = $tmp2348.end;
frost$core$Int64 $tmp2351 = $tmp2348.step;
frost$core$UInt64 $tmp2352 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2351);
frost$core$Int64 $tmp2353 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2351);
frost$core$UInt64 $tmp2354 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2353);
frost$core$Bit $tmp2355 = $tmp2348.inclusive;
bool $tmp2356 = $tmp2355.value;
frost$core$Int64 $tmp2357 = (frost$core$Int64) {0};
int64_t $tmp2358 = $tmp2351.value;
int64_t $tmp2359 = $tmp2357.value;
bool $tmp2360 = $tmp2358 >= $tmp2359;
frost$core$Bit $tmp2361 = (frost$core$Bit) {$tmp2360};
bool $tmp2362 = $tmp2361.value;
if ($tmp2362) goto block15; else goto block16;
block15:;
if ($tmp2356) goto block17; else goto block18;
block17:;
int64_t $tmp2363 = $tmp2349.value;
int64_t $tmp2364 = $tmp2350.value;
bool $tmp2365 = $tmp2363 <= $tmp2364;
frost$core$Bit $tmp2366 = (frost$core$Bit) {$tmp2365};
bool $tmp2367 = $tmp2366.value;
if ($tmp2367) goto block12; else goto block13;
block18:;
int64_t $tmp2368 = $tmp2349.value;
int64_t $tmp2369 = $tmp2350.value;
bool $tmp2370 = $tmp2368 < $tmp2369;
frost$core$Bit $tmp2371 = (frost$core$Bit) {$tmp2370};
bool $tmp2372 = $tmp2371.value;
if ($tmp2372) goto block12; else goto block13;
block16:;
if ($tmp2356) goto block19; else goto block20;
block19:;
int64_t $tmp2373 = $tmp2349.value;
int64_t $tmp2374 = $tmp2350.value;
bool $tmp2375 = $tmp2373 >= $tmp2374;
frost$core$Bit $tmp2376 = (frost$core$Bit) {$tmp2375};
bool $tmp2377 = $tmp2376.value;
if ($tmp2377) goto block12; else goto block13;
block20:;
int64_t $tmp2378 = $tmp2349.value;
int64_t $tmp2379 = $tmp2350.value;
bool $tmp2380 = $tmp2378 > $tmp2379;
frost$core$Bit $tmp2381 = (frost$core$Bit) {$tmp2380};
bool $tmp2382 = $tmp2381.value;
if ($tmp2382) goto block12; else goto block13;
block12:;
// line 1244
frost$core$String$Index $tmp2383 = *(&local0);
frost$core$String$Index $tmp2384 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2383);
*(&local0) = $tmp2384;
goto block14;
block14:;
frost$core$Int64 $tmp2385 = *(&local2);
if ($tmp2362) goto block22; else goto block23;
block22:;
int64_t $tmp2386 = $tmp2350.value;
int64_t $tmp2387 = $tmp2385.value;
int64_t $tmp2388 = $tmp2386 - $tmp2387;
frost$core$Int64 $tmp2389 = (frost$core$Int64) {$tmp2388};
frost$core$UInt64 $tmp2390 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2389);
if ($tmp2356) goto block24; else goto block25;
block24:;
uint64_t $tmp2391 = $tmp2390.value;
uint64_t $tmp2392 = $tmp2352.value;
bool $tmp2393 = $tmp2391 >= $tmp2392;
frost$core$Bit $tmp2394 = (frost$core$Bit) {$tmp2393};
bool $tmp2395 = $tmp2394.value;
if ($tmp2395) goto block21; else goto block13;
block25:;
uint64_t $tmp2396 = $tmp2390.value;
uint64_t $tmp2397 = $tmp2352.value;
bool $tmp2398 = $tmp2396 > $tmp2397;
frost$core$Bit $tmp2399 = (frost$core$Bit) {$tmp2398};
bool $tmp2400 = $tmp2399.value;
if ($tmp2400) goto block21; else goto block13;
block23:;
int64_t $tmp2401 = $tmp2385.value;
int64_t $tmp2402 = $tmp2350.value;
int64_t $tmp2403 = $tmp2401 - $tmp2402;
frost$core$Int64 $tmp2404 = (frost$core$Int64) {$tmp2403};
frost$core$UInt64 $tmp2405 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2404);
if ($tmp2356) goto block26; else goto block27;
block26:;
uint64_t $tmp2406 = $tmp2405.value;
uint64_t $tmp2407 = $tmp2354.value;
bool $tmp2408 = $tmp2406 >= $tmp2407;
frost$core$Bit $tmp2409 = (frost$core$Bit) {$tmp2408};
bool $tmp2410 = $tmp2409.value;
if ($tmp2410) goto block21; else goto block13;
block27:;
uint64_t $tmp2411 = $tmp2405.value;
uint64_t $tmp2412 = $tmp2354.value;
bool $tmp2413 = $tmp2411 > $tmp2412;
frost$core$Bit $tmp2414 = (frost$core$Bit) {$tmp2413};
bool $tmp2415 = $tmp2414.value;
if ($tmp2415) goto block21; else goto block13;
block21:;
int64_t $tmp2416 = $tmp2385.value;
int64_t $tmp2417 = $tmp2351.value;
int64_t $tmp2418 = $tmp2416 + $tmp2417;
frost$core$Int64 $tmp2419 = (frost$core$Int64) {$tmp2418};
*(&local2) = $tmp2419;
goto block12;
block13:;
goto block2;
block2:;
// line 1247
frost$core$String$Index $tmp2420 = *(&local0);
return $tmp2420;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1260
frost$core$Int32 $tmp2421 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2422 = frost$core$Char32$init$frost$core$Int32($tmp2421);
frost$core$String* $tmp2423 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2422);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
// unreffing REF($3:frost.core.String)
return $tmp2423;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1274
frost$core$Int64 $tmp2424 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2425 = $tmp2424.value;
int64_t $tmp2426 = param1.value;
bool $tmp2427 = $tmp2425 >= $tmp2426;
frost$core$Bit $tmp2428 = (frost$core$Bit) {$tmp2427};
bool $tmp2429 = $tmp2428.value;
if ($tmp2429) goto block1; else goto block2;
block1:;
// line 1275
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1277
frost$core$Int64 $tmp2430 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2431 = param1.value;
int64_t $tmp2432 = $tmp2430.value;
int64_t $tmp2433 = $tmp2431 - $tmp2432;
frost$core$Int64 $tmp2434 = (frost$core$Int64) {$tmp2433};
frost$core$String* $tmp2435 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2434);
frost$core$String* $tmp2436 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp2435);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
// unreffing REF($18:frost.core.String)
return $tmp2436;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1290
frost$core$Int32 $tmp2437 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2438 = frost$core$Char32$init$frost$core$Int32($tmp2437);
frost$core$String* $tmp2439 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2438);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
// unreffing REF($3:frost.core.String)
return $tmp2439;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1304
frost$core$Int64 $tmp2440 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2441 = $tmp2440.value;
int64_t $tmp2442 = param1.value;
bool $tmp2443 = $tmp2441 >= $tmp2442;
frost$core$Bit $tmp2444 = (frost$core$Bit) {$tmp2443};
bool $tmp2445 = $tmp2444.value;
if ($tmp2445) goto block1; else goto block2;
block1:;
// line 1305
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1307
frost$core$Int64 $tmp2446 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2447 = param1.value;
int64_t $tmp2448 = $tmp2446.value;
int64_t $tmp2449 = $tmp2447 - $tmp2448;
frost$core$Int64 $tmp2450 = (frost$core$Int64) {$tmp2449};
frost$core$String* $tmp2451 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2450);
frost$core$String* $tmp2452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2451, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
// unreffing REF($18:frost.core.String)
return $tmp2452;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1322
frost$core$Int32 $tmp2453 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2454 = frost$core$Char32$init$frost$core$Int32($tmp2453);
frost$core$String* $tmp2455 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2454);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
// unreffing REF($3:frost.core.String)
return $tmp2455;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1338
frost$core$Int64 $tmp2456 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2457 = $tmp2456.value;
int64_t $tmp2458 = param1.value;
bool $tmp2459 = $tmp2457 >= $tmp2458;
frost$core$Bit $tmp2460 = (frost$core$Bit) {$tmp2459};
bool $tmp2461 = $tmp2460.value;
if ($tmp2461) goto block1; else goto block2;
block1:;
// line 1339
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1341
frost$core$Int64 $tmp2462 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2463 = param1.value;
int64_t $tmp2464 = $tmp2462.value;
int64_t $tmp2465 = $tmp2463 - $tmp2464;
frost$core$Int64 $tmp2466 = (frost$core$Int64) {$tmp2465};
*(&local0) = $tmp2466;
// line 1342
frost$core$Int64 $tmp2467 = *(&local0);
frost$core$Int64 $tmp2468 = (frost$core$Int64) {2};
int64_t $tmp2469 = $tmp2467.value;
int64_t $tmp2470 = $tmp2468.value;
int64_t $tmp2471 = $tmp2469 / $tmp2470;
frost$core$Int64 $tmp2472 = (frost$core$Int64) {$tmp2471};
*(&local1) = $tmp2472;
// line 1343
frost$core$Int64 $tmp2473 = *(&local0);
frost$core$Int64 $tmp2474 = *(&local1);
int64_t $tmp2475 = $tmp2473.value;
int64_t $tmp2476 = $tmp2474.value;
int64_t $tmp2477 = $tmp2475 - $tmp2476;
frost$core$Int64 $tmp2478 = (frost$core$Int64) {$tmp2477};
*(&local2) = $tmp2478;
// line 1344
frost$core$Int64 $tmp2479 = *(&local1);
frost$core$String* $tmp2480 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2479);
frost$core$String* $tmp2481 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2480, param0);
frost$core$Int64 $tmp2482 = *(&local2);
frost$core$String* $tmp2483 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2482);
frost$core$String* $tmp2484 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2481, $tmp2483);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
// unreffing REF($41:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
// unreffing REF($40:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
// unreffing REF($38:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
// unreffing REF($37:frost.core.String)
return $tmp2484;

}
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1355
frost$core$Int64 $tmp2485 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2486 = frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2485);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
// unreffing REF($2:frost.collections.Array<frost.core.String>)
return $tmp2486;

}
frost$collections$Array* frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
frost$core$Bit local3;
// line 1368
frost$collections$Array* $tmp2487 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2487);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
frost$collections$Array* $tmp2488 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2488));
*(&local0) = $tmp2487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 1369
frost$core$String$Index $tmp2489 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2489;
// line 1370
goto block1;
block1:;
// line 1371
// line 1372
frost$core$Int64* $tmp2490 = &param1->_length;
frost$core$Int64 $tmp2491 = *$tmp2490;
frost$core$Int64 $tmp2492 = (frost$core$Int64) {0};
frost$core$Bit $tmp2493 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2491, $tmp2492);
bool $tmp2494 = $tmp2493.value;
if ($tmp2494) goto block3; else goto block5;
block3:;
// line 1373
frost$core$String$Index $tmp2495 = *(&local1);
frost$core$String$Index $tmp2496 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2495);
*(&local2) = ((frost$core$String$Index$nullable) { $tmp2496, true });
goto block4;
block5:;
// line 1
// line 1376
frost$core$String$Index $tmp2497 = *(&local1);
frost$core$String$Index$nullable $tmp2498 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2497);
*(&local2) = $tmp2498;
goto block4;
block4:;
// line 1378
frost$core$String$Index$nullable $tmp2499 = *(&local2);
frost$core$Bit $tmp2500 = frost$core$Bit$init$builtin_bit(!$tmp2499.nonnull);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block8; else goto block9;
block8:;
*(&local3) = $tmp2500;
goto block10;
block9:;
frost$collections$Array* $tmp2502 = *(&local0);
ITable* $tmp2503 = ((frost$collections$CollectionView*) $tmp2502)->$class->itable;
while ($tmp2503->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2503 = $tmp2503->next;
}
$fn2505 $tmp2504 = $tmp2503->methods[0];
frost$core$Int64 $tmp2506 = $tmp2504(((frost$collections$CollectionView*) $tmp2502));
frost$core$Int64 $tmp2507 = (frost$core$Int64) {1};
int64_t $tmp2508 = param2.value;
int64_t $tmp2509 = $tmp2507.value;
int64_t $tmp2510 = $tmp2508 - $tmp2509;
frost$core$Int64 $tmp2511 = (frost$core$Int64) {$tmp2510};
frost$core$Bit $tmp2512 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2506, $tmp2511);
*(&local3) = $tmp2512;
goto block10;
block10:;
frost$core$Bit $tmp2513 = *(&local3);
bool $tmp2514 = $tmp2513.value;
if ($tmp2514) goto block6; else goto block7;
block6:;
// line 1379
frost$collections$Array* $tmp2515 = *(&local0);
frost$core$String$Index $tmp2516 = *(&local1);
frost$core$Bit $tmp2517 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2518 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2516, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2517);
frost$core$String* $tmp2519 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2518);
frost$collections$Array$add$frost$collections$Array$T($tmp2515, ((frost$core$Object*) $tmp2519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
// unreffing REF($69:frost.core.String)
// line 1380
goto block2;
block7:;
// line 1382
frost$collections$Array* $tmp2520 = *(&local0);
frost$core$String$Index $tmp2521 = *(&local1);
frost$core$String$Index$nullable $tmp2522 = *(&local2);
frost$core$Bit $tmp2523 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2524 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2521, ((frost$core$String$Index) $tmp2522.value), $tmp2523);
frost$core$String* $tmp2525 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2524);
frost$collections$Array$add$frost$collections$Array$T($tmp2520, ((frost$core$Object*) $tmp2525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
// unreffing REF($85:frost.core.String)
// line 1383
frost$core$String$Index$nullable $tmp2526 = *(&local2);
frost$core$Int64 $tmp2527 = ((frost$core$String$Index) $tmp2526.value).value;
frost$core$Int64* $tmp2528 = &param1->_length;
frost$core$Int64 $tmp2529 = *$tmp2528;
int64_t $tmp2530 = $tmp2527.value;
int64_t $tmp2531 = $tmp2529.value;
int64_t $tmp2532 = $tmp2530 + $tmp2531;
frost$core$Int64 $tmp2533 = (frost$core$Int64) {$tmp2532};
frost$core$String$Index $tmp2534 = frost$core$String$Index$init$frost$core$Int64($tmp2533);
*(&local1) = $tmp2534;
goto block1;
block2:;
// line 1385
frost$collections$Array* $tmp2535 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
frost$collections$Array* $tmp2536 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2535;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$String$Index local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$String$Index local5;
frost$core$Int64 $tmp2537 = (frost$core$Int64) {0};
int64_t $tmp2538 = param2.value;
int64_t $tmp2539 = $tmp2537.value;
bool $tmp2540 = $tmp2538 > $tmp2539;
frost$core$Bit $tmp2541 = (frost$core$Bit) {$tmp2540};
bool $tmp2542 = $tmp2541.value;
if ($tmp2542) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2543 = (frost$core$Int64) {1399};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2544, $tmp2543, &$s2545);
abort(); // unreachable
block1:;
// line 1400
frost$collections$Array* $tmp2546 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2546);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
frost$collections$Array* $tmp2547 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
*(&local0) = $tmp2546;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
// unreffing REF($11:frost.collections.Array<frost.core.String>)
// line 1401
frost$core$Matcher* $tmp2548 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
frost$core$Matcher* $tmp2549 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
*(&local1) = $tmp2548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
// unreffing REF($25:frost.core.Matcher)
// line 1402
frost$core$String$Index $tmp2550 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp2550;
// line 1403
goto block3;
block3:;
// line 1404
frost$core$Matcher* $tmp2551 = *(&local1);
frost$core$Bit $tmp2552 = frost$core$Matcher$find$R$frost$core$Bit($tmp2551);
*(&local3) = $tmp2552;
// line 1405
frost$core$Bit $tmp2553 = *(&local3);
frost$core$Bit $tmp2554 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2553);
bool $tmp2555 = $tmp2554.value;
if ($tmp2555) goto block7; else goto block8;
block7:;
*(&local4) = $tmp2554;
goto block9;
block8:;
frost$collections$Array* $tmp2556 = *(&local0);
ITable* $tmp2557 = ((frost$collections$CollectionView*) $tmp2556)->$class->itable;
while ($tmp2557->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2557 = $tmp2557->next;
}
$fn2559 $tmp2558 = $tmp2557->methods[0];
frost$core$Int64 $tmp2560 = $tmp2558(((frost$collections$CollectionView*) $tmp2556));
frost$core$Int64 $tmp2561 = (frost$core$Int64) {1};
int64_t $tmp2562 = param2.value;
int64_t $tmp2563 = $tmp2561.value;
int64_t $tmp2564 = $tmp2562 - $tmp2563;
frost$core$Int64 $tmp2565 = (frost$core$Int64) {$tmp2564};
frost$core$Bit $tmp2566 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2560, $tmp2565);
*(&local4) = $tmp2566;
goto block9;
block9:;
frost$core$Bit $tmp2567 = *(&local4);
bool $tmp2568 = $tmp2567.value;
if ($tmp2568) goto block5; else goto block6;
block5:;
// line 1406
frost$collections$Array* $tmp2569 = *(&local0);
frost$core$String$Index $tmp2570 = *(&local2);
frost$core$Bit $tmp2571 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2572 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2570, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2571);
frost$core$String* $tmp2573 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2572);
frost$collections$Array$add$frost$collections$Array$T($tmp2569, ((frost$core$Object*) $tmp2573));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
// unreffing REF($74:frost.core.String)
// line 1407
goto block4;
block6:;
// line 1409
frost$core$Matcher* $tmp2574 = *(&local1);
frost$core$String$Index $tmp2575;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp2575, $tmp2574);
*(&local5) = $tmp2575;
// line 1410
frost$collections$Array* $tmp2576 = *(&local0);
frost$core$String$Index $tmp2577 = *(&local2);
frost$core$String$Index $tmp2578 = *(&local5);
frost$core$Bit $tmp2579 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2580 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2577, $tmp2578, $tmp2579);
frost$core$String* $tmp2581 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2580);
frost$collections$Array$add$frost$collections$Array$T($tmp2576, ((frost$core$Object*) $tmp2581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
// unreffing REF($93:frost.core.String)
// line 1411
frost$core$String$Index $tmp2582 = *(&local5);
frost$core$Int64 $tmp2583 = $tmp2582.value;
frost$core$Matcher* $tmp2584 = *(&local1);
frost$core$String$Index $tmp2585;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp2585, $tmp2584);
frost$core$Int64 $tmp2586 = $tmp2585.value;
frost$core$Int64 $tmp2587 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp2583, $tmp2586);
frost$core$String$Index $tmp2588 = frost$core$String$Index$init$frost$core$Int64($tmp2587);
*(&local2) = $tmp2588;
goto block3;
block4:;
// line 1413
frost$collections$Array* $tmp2589 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
frost$core$Matcher* $tmp2590 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$collections$Array* $tmp2591 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2589;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1426
frost$core$Int64 $tmp2592 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2593 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2592);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
// unreffing REF($2:frost.collections.Array<frost.core.String>)
return $tmp2593;

}
frost$core$Int64$nullable frost$core$String$convert$R$frost$core$Int64$Q(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Bit local4;
// line 1437
frost$core$Int64* $tmp2594 = &param0->_length;
frost$core$Int64 $tmp2595 = *$tmp2594;
frost$core$Int64 $tmp2596 = (frost$core$Int64) {0};
frost$core$Bit $tmp2597 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2595, $tmp2596);
bool $tmp2598 = $tmp2597.value;
if ($tmp2598) goto block1; else goto block2;
block1:;
// line 1438
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 1440
frost$core$Int64 $tmp2599 = (frost$core$Int64) {0};
*(&local0) = $tmp2599;
// line 1441
// line 1442
frost$core$Char8** $tmp2600 = &param0->data;
frost$core$Char8* $tmp2601 = *$tmp2600;
frost$core$Int64 $tmp2602 = (frost$core$Int64) {0};
int64_t $tmp2603 = $tmp2602.value;
frost$core$Char8 $tmp2604 = $tmp2601[$tmp2603];
frost$core$UInt8 $tmp2605 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2606 = frost$core$Char8$init$frost$core$UInt8($tmp2605);
frost$core$Bit $tmp2607 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2604, $tmp2606);
bool $tmp2608 = $tmp2607.value;
if ($tmp2608) goto block3; else goto block5;
block3:;
// line 1443
frost$core$Int64 $tmp2609 = (frost$core$Int64) {1};
*(&local1) = $tmp2609;
goto block4;
block5:;
// line 1
// line 1446
frost$core$Int64 $tmp2610 = (frost$core$Int64) {0};
*(&local1) = $tmp2610;
goto block4;
block4:;
// line 1448
frost$core$Int64 $tmp2611 = *(&local1);
frost$core$Int64* $tmp2612 = &param0->_length;
frost$core$Int64 $tmp2613 = *$tmp2612;
frost$core$Bit $tmp2614 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2615 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2611, $tmp2613, $tmp2614);
frost$core$Int64 $tmp2616 = $tmp2615.min;
*(&local2) = $tmp2616;
frost$core$Int64 $tmp2617 = $tmp2615.max;
frost$core$Bit $tmp2618 = $tmp2615.inclusive;
bool $tmp2619 = $tmp2618.value;
frost$core$Int64 $tmp2620 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2621 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2620);
if ($tmp2619) goto block9; else goto block10;
block9:;
int64_t $tmp2622 = $tmp2616.value;
int64_t $tmp2623 = $tmp2617.value;
bool $tmp2624 = $tmp2622 <= $tmp2623;
frost$core$Bit $tmp2625 = (frost$core$Bit) {$tmp2624};
bool $tmp2626 = $tmp2625.value;
if ($tmp2626) goto block6; else goto block7;
block10:;
int64_t $tmp2627 = $tmp2616.value;
int64_t $tmp2628 = $tmp2617.value;
bool $tmp2629 = $tmp2627 < $tmp2628;
frost$core$Bit $tmp2630 = (frost$core$Bit) {$tmp2629};
bool $tmp2631 = $tmp2630.value;
if ($tmp2631) goto block6; else goto block7;
block6:;
// line 1449
frost$core$Char8** $tmp2632 = &param0->data;
frost$core$Char8* $tmp2633 = *$tmp2632;
frost$core$Int64 $tmp2634 = *(&local2);
int64_t $tmp2635 = $tmp2634.value;
frost$core$Char8 $tmp2636 = $tmp2633[$tmp2635];
uint8_t $tmp2637 = $tmp2636.value;
frost$core$Int64 $tmp2638 = (frost$core$Int64) {((int64_t) $tmp2637)};
frost$core$Int64 $tmp2639 = (frost$core$Int64) {48};
int64_t $tmp2640 = $tmp2638.value;
int64_t $tmp2641 = $tmp2639.value;
int64_t $tmp2642 = $tmp2640 - $tmp2641;
frost$core$Int64 $tmp2643 = (frost$core$Int64) {$tmp2642};
*(&local3) = $tmp2643;
// line 1450
frost$core$Int64 $tmp2644 = *(&local3);
frost$core$Int64 $tmp2645 = (frost$core$Int64) {0};
int64_t $tmp2646 = $tmp2644.value;
int64_t $tmp2647 = $tmp2645.value;
bool $tmp2648 = $tmp2646 < $tmp2647;
frost$core$Bit $tmp2649 = (frost$core$Bit) {$tmp2648};
bool $tmp2650 = $tmp2649.value;
if ($tmp2650) goto block13; else goto block14;
block13:;
*(&local4) = $tmp2649;
goto block15;
block14:;
frost$core$Int64 $tmp2651 = *(&local3);
frost$core$Int64 $tmp2652 = (frost$core$Int64) {9};
int64_t $tmp2653 = $tmp2651.value;
int64_t $tmp2654 = $tmp2652.value;
bool $tmp2655 = $tmp2653 > $tmp2654;
frost$core$Bit $tmp2656 = (frost$core$Bit) {$tmp2655};
*(&local4) = $tmp2656;
goto block15;
block15:;
frost$core$Bit $tmp2657 = *(&local4);
bool $tmp2658 = $tmp2657.value;
if ($tmp2658) goto block11; else goto block12;
block11:;
// line 1451
return ((frost$core$Int64$nullable) { .nonnull = false });
block12:;
// line 1453
frost$core$Int64 $tmp2659 = *(&local0);
frost$core$Int64 $tmp2660 = (frost$core$Int64) {10};
int64_t $tmp2661 = $tmp2659.value;
int64_t $tmp2662 = $tmp2660.value;
int64_t $tmp2663 = $tmp2661 * $tmp2662;
frost$core$Int64 $tmp2664 = (frost$core$Int64) {$tmp2663};
frost$core$Int64 $tmp2665 = *(&local3);
int64_t $tmp2666 = $tmp2664.value;
int64_t $tmp2667 = $tmp2665.value;
int64_t $tmp2668 = $tmp2666 + $tmp2667;
frost$core$Int64 $tmp2669 = (frost$core$Int64) {$tmp2668};
*(&local0) = $tmp2669;
goto block8;
block8:;
frost$core$Int64 $tmp2670 = *(&local2);
int64_t $tmp2671 = $tmp2617.value;
int64_t $tmp2672 = $tmp2670.value;
int64_t $tmp2673 = $tmp2671 - $tmp2672;
frost$core$Int64 $tmp2674 = (frost$core$Int64) {$tmp2673};
frost$core$UInt64 $tmp2675 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2674);
if ($tmp2619) goto block17; else goto block18;
block17:;
uint64_t $tmp2676 = $tmp2675.value;
uint64_t $tmp2677 = $tmp2621.value;
bool $tmp2678 = $tmp2676 >= $tmp2677;
frost$core$Bit $tmp2679 = (frost$core$Bit) {$tmp2678};
bool $tmp2680 = $tmp2679.value;
if ($tmp2680) goto block16; else goto block7;
block18:;
uint64_t $tmp2681 = $tmp2675.value;
uint64_t $tmp2682 = $tmp2621.value;
bool $tmp2683 = $tmp2681 > $tmp2682;
frost$core$Bit $tmp2684 = (frost$core$Bit) {$tmp2683};
bool $tmp2685 = $tmp2684.value;
if ($tmp2685) goto block16; else goto block7;
block16:;
int64_t $tmp2686 = $tmp2670.value;
int64_t $tmp2687 = $tmp2620.value;
int64_t $tmp2688 = $tmp2686 + $tmp2687;
frost$core$Int64 $tmp2689 = (frost$core$Int64) {$tmp2688};
*(&local2) = $tmp2689;
goto block6;
block7:;
// line 1455
frost$core$Char8** $tmp2690 = &param0->data;
frost$core$Char8* $tmp2691 = *$tmp2690;
frost$core$Int64 $tmp2692 = (frost$core$Int64) {0};
int64_t $tmp2693 = $tmp2692.value;
frost$core$Char8 $tmp2694 = $tmp2691[$tmp2693];
frost$core$UInt8 $tmp2695 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2696 = frost$core$Char8$init$frost$core$UInt8($tmp2695);
frost$core$Bit $tmp2697 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2694, $tmp2696);
bool $tmp2698 = $tmp2697.value;
if ($tmp2698) goto block19; else goto block20;
block19:;
// line 1456
frost$core$Int64 $tmp2699 = *(&local0);
frost$core$Int64 $tmp2700 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2699);
*(&local0) = $tmp2700;
goto block20;
block20:;
// line 1458
frost$core$Int64 $tmp2701 = *(&local0);
return ((frost$core$Int64$nullable) { $tmp2701, true });

}
frost$core$UInt64$nullable frost$core$String$convert$R$frost$core$UInt64$Q(frost$core$String* param0) {

frost$core$UInt64 local0;
frost$core$Int64 local1;
frost$core$UInt64 local2;
frost$core$Bit local3;
// line 1468
frost$core$Int64* $tmp2702 = &param0->_length;
frost$core$Int64 $tmp2703 = *$tmp2702;
frost$core$Int64 $tmp2704 = (frost$core$Int64) {0};
frost$core$Bit $tmp2705 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2703, $tmp2704);
bool $tmp2706 = $tmp2705.value;
if ($tmp2706) goto block1; else goto block2;
block1:;
// line 1469
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 1471
frost$core$UInt64 $tmp2707 = (frost$core$UInt64) {0};
*(&local0) = $tmp2707;
// line 1472
frost$core$Int64 $tmp2708 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2709 = &param0->_length;
frost$core$Int64 $tmp2710 = *$tmp2709;
frost$core$Bit $tmp2711 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2712 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2708, $tmp2710, $tmp2711);
frost$core$Int64 $tmp2713 = $tmp2712.min;
*(&local1) = $tmp2713;
frost$core$Int64 $tmp2714 = $tmp2712.max;
frost$core$Bit $tmp2715 = $tmp2712.inclusive;
bool $tmp2716 = $tmp2715.value;
frost$core$Int64 $tmp2717 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2718 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2717);
if ($tmp2716) goto block6; else goto block7;
block6:;
int64_t $tmp2719 = $tmp2713.value;
int64_t $tmp2720 = $tmp2714.value;
bool $tmp2721 = $tmp2719 <= $tmp2720;
frost$core$Bit $tmp2722 = (frost$core$Bit) {$tmp2721};
bool $tmp2723 = $tmp2722.value;
if ($tmp2723) goto block3; else goto block4;
block7:;
int64_t $tmp2724 = $tmp2713.value;
int64_t $tmp2725 = $tmp2714.value;
bool $tmp2726 = $tmp2724 < $tmp2725;
frost$core$Bit $tmp2727 = (frost$core$Bit) {$tmp2726};
bool $tmp2728 = $tmp2727.value;
if ($tmp2728) goto block3; else goto block4;
block3:;
// line 1473
frost$core$Char8** $tmp2729 = &param0->data;
frost$core$Char8* $tmp2730 = *$tmp2729;
frost$core$Int64 $tmp2731 = *(&local1);
int64_t $tmp2732 = $tmp2731.value;
frost$core$Char8 $tmp2733 = $tmp2730[$tmp2732];
uint8_t $tmp2734 = $tmp2733.value;
frost$core$UInt64 $tmp2735 = (frost$core$UInt64) {((uint64_t) $tmp2734)};
frost$core$UInt64 $tmp2736 = (frost$core$UInt64) {48};
uint64_t $tmp2737 = $tmp2735.value;
uint64_t $tmp2738 = $tmp2736.value;
uint64_t $tmp2739 = $tmp2737 - $tmp2738;
frost$core$UInt64 $tmp2740 = (frost$core$UInt64) {$tmp2739};
*(&local2) = $tmp2740;
// line 1474
frost$core$UInt64 $tmp2741 = *(&local2);
frost$core$UInt64 $tmp2742 = (frost$core$UInt64) {0};
uint64_t $tmp2743 = $tmp2741.value;
uint64_t $tmp2744 = $tmp2742.value;
bool $tmp2745 = $tmp2743 < $tmp2744;
frost$core$Bit $tmp2746 = (frost$core$Bit) {$tmp2745};
bool $tmp2747 = $tmp2746.value;
if ($tmp2747) goto block10; else goto block11;
block10:;
*(&local3) = $tmp2746;
goto block12;
block11:;
frost$core$UInt64 $tmp2748 = *(&local2);
frost$core$UInt64 $tmp2749 = (frost$core$UInt64) {9};
uint64_t $tmp2750 = $tmp2748.value;
uint64_t $tmp2751 = $tmp2749.value;
bool $tmp2752 = $tmp2750 > $tmp2751;
frost$core$Bit $tmp2753 = (frost$core$Bit) {$tmp2752};
*(&local3) = $tmp2753;
goto block12;
block12:;
frost$core$Bit $tmp2754 = *(&local3);
bool $tmp2755 = $tmp2754.value;
if ($tmp2755) goto block8; else goto block9;
block8:;
// line 1475
return ((frost$core$UInt64$nullable) { .nonnull = false });
block9:;
// line 1477
frost$core$UInt64 $tmp2756 = *(&local0);
frost$core$UInt64 $tmp2757 = (frost$core$UInt64) {10};
uint64_t $tmp2758 = $tmp2756.value;
uint64_t $tmp2759 = $tmp2757.value;
uint64_t $tmp2760 = $tmp2758 * $tmp2759;
frost$core$UInt64 $tmp2761 = (frost$core$UInt64) {$tmp2760};
frost$core$UInt64 $tmp2762 = *(&local2);
uint64_t $tmp2763 = $tmp2761.value;
uint64_t $tmp2764 = $tmp2762.value;
uint64_t $tmp2765 = $tmp2763 + $tmp2764;
frost$core$UInt64 $tmp2766 = (frost$core$UInt64) {$tmp2765};
*(&local0) = $tmp2766;
goto block5;
block5:;
frost$core$Int64 $tmp2767 = *(&local1);
int64_t $tmp2768 = $tmp2714.value;
int64_t $tmp2769 = $tmp2767.value;
int64_t $tmp2770 = $tmp2768 - $tmp2769;
frost$core$Int64 $tmp2771 = (frost$core$Int64) {$tmp2770};
frost$core$UInt64 $tmp2772 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2771);
if ($tmp2716) goto block14; else goto block15;
block14:;
uint64_t $tmp2773 = $tmp2772.value;
uint64_t $tmp2774 = $tmp2718.value;
bool $tmp2775 = $tmp2773 >= $tmp2774;
frost$core$Bit $tmp2776 = (frost$core$Bit) {$tmp2775};
bool $tmp2777 = $tmp2776.value;
if ($tmp2777) goto block13; else goto block4;
block15:;
uint64_t $tmp2778 = $tmp2772.value;
uint64_t $tmp2779 = $tmp2718.value;
bool $tmp2780 = $tmp2778 > $tmp2779;
frost$core$Bit $tmp2781 = (frost$core$Bit) {$tmp2780};
bool $tmp2782 = $tmp2781.value;
if ($tmp2782) goto block13; else goto block4;
block13:;
int64_t $tmp2783 = $tmp2767.value;
int64_t $tmp2784 = $tmp2717.value;
int64_t $tmp2785 = $tmp2783 + $tmp2784;
frost$core$Int64 $tmp2786 = (frost$core$Int64) {$tmp2785};
*(&local1) = $tmp2786;
goto block3;
block4:;
// line 1479
frost$core$UInt64 $tmp2787 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp2787, true });

}
frost$core$Real64$nullable frost$core$String$convert$R$frost$core$Real64$Q(frost$core$String* param0) {

// line 1489
frost$core$Real64 $tmp2788;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp2788, param0);
return ((frost$core$Real64$nullable) { $tmp2788, true });

}
frost$core$Int64 frost$core$String$get_hash$R$frost$core$Int64(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 1497
frost$core$Int64 $tmp2789 = (frost$core$Int64) {1};
*(&local0) = $tmp2789;
// line 1498
frost$core$Int64 $tmp2790 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2791 = &param0->_length;
frost$core$Int64 $tmp2792 = *$tmp2791;
frost$core$Bit $tmp2793 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2794 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2790, $tmp2792, $tmp2793);
frost$core$Int64 $tmp2795 = $tmp2794.min;
*(&local1) = $tmp2795;
frost$core$Int64 $tmp2796 = $tmp2794.max;
frost$core$Bit $tmp2797 = $tmp2794.inclusive;
bool $tmp2798 = $tmp2797.value;
frost$core$Int64 $tmp2799 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2800 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2799);
if ($tmp2798) goto block4; else goto block5;
block4:;
int64_t $tmp2801 = $tmp2795.value;
int64_t $tmp2802 = $tmp2796.value;
bool $tmp2803 = $tmp2801 <= $tmp2802;
frost$core$Bit $tmp2804 = (frost$core$Bit) {$tmp2803};
bool $tmp2805 = $tmp2804.value;
if ($tmp2805) goto block1; else goto block2;
block5:;
int64_t $tmp2806 = $tmp2795.value;
int64_t $tmp2807 = $tmp2796.value;
bool $tmp2808 = $tmp2806 < $tmp2807;
frost$core$Bit $tmp2809 = (frost$core$Bit) {$tmp2808};
bool $tmp2810 = $tmp2809.value;
if ($tmp2810) goto block1; else goto block2;
block1:;
// line 1499
frost$core$Int64 $tmp2811 = *(&local0);
frost$core$Int64 $tmp2812 = (frost$core$Int64) {101};
int64_t $tmp2813 = $tmp2811.value;
int64_t $tmp2814 = $tmp2812.value;
int64_t $tmp2815 = $tmp2813 * $tmp2814;
frost$core$Int64 $tmp2816 = (frost$core$Int64) {$tmp2815};
frost$core$Char8** $tmp2817 = &param0->data;
frost$core$Char8* $tmp2818 = *$tmp2817;
frost$core$Int64 $tmp2819 = *(&local1);
int64_t $tmp2820 = $tmp2819.value;
frost$core$Char8 $tmp2821 = $tmp2818[$tmp2820];
uint8_t $tmp2822 = $tmp2821.value;
frost$core$Int64 $tmp2823 = (frost$core$Int64) {((int64_t) $tmp2822)};
int64_t $tmp2824 = $tmp2816.value;
int64_t $tmp2825 = $tmp2823.value;
int64_t $tmp2826 = $tmp2824 + $tmp2825;
frost$core$Int64 $tmp2827 = (frost$core$Int64) {$tmp2826};
*(&local0) = $tmp2827;
goto block3;
block3:;
frost$core$Int64 $tmp2828 = *(&local1);
int64_t $tmp2829 = $tmp2796.value;
int64_t $tmp2830 = $tmp2828.value;
int64_t $tmp2831 = $tmp2829 - $tmp2830;
frost$core$Int64 $tmp2832 = (frost$core$Int64) {$tmp2831};
frost$core$UInt64 $tmp2833 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2832);
if ($tmp2798) goto block7; else goto block8;
block7:;
uint64_t $tmp2834 = $tmp2833.value;
uint64_t $tmp2835 = $tmp2800.value;
bool $tmp2836 = $tmp2834 >= $tmp2835;
frost$core$Bit $tmp2837 = (frost$core$Bit) {$tmp2836};
bool $tmp2838 = $tmp2837.value;
if ($tmp2838) goto block6; else goto block2;
block8:;
uint64_t $tmp2839 = $tmp2833.value;
uint64_t $tmp2840 = $tmp2800.value;
bool $tmp2841 = $tmp2839 > $tmp2840;
frost$core$Bit $tmp2842 = (frost$core$Bit) {$tmp2841};
bool $tmp2843 = $tmp2842.value;
if ($tmp2843) goto block6; else goto block2;
block6:;
int64_t $tmp2844 = $tmp2828.value;
int64_t $tmp2845 = $tmp2799.value;
int64_t $tmp2846 = $tmp2844 + $tmp2845;
frost$core$Int64 $tmp2847 = (frost$core$Int64) {$tmp2846};
*(&local1) = $tmp2847;
goto block1;
block2:;
// line 1510
frost$core$Int64 $tmp2848 = *(&local0);
return $tmp2848;

}

