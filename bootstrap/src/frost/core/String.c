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
typedef frost$core$Object* (*$fn2175)(frost$core$String*);
typedef frost$core$Object* (*$fn2177)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn2181)(frost$core$Object*);
typedef frost$core$Object* (*$fn2252)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn2254)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2258)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2585)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2649)(frost$collections$CollectionView*);

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
static frost$core$String $s1022 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1023 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1033 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s1655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1656 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s1671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1672 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s1682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s1844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1989 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1990 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2065 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2066 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s2092 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s2288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2344 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -286058843379027293, NULL };

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
frost$core$Char8* $tmp490 = ((frost$core$Char8*) frostAlloc($tmp489 * 1));
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
frost$core$Bit $tmp1019 = frost$core$Bit$init$builtin_bit($tmp1018.nonnull);
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1021 = (frost$core$Int64) {687};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1022, $tmp1021, &$s1023);
abort(); // unreachable
block4:;
*(&local0) = ((frost$core$String$Index) $tmp1018.value);
goto block2;
block3:;
// line 1
// line 690
frost$core$String$Index $tmp1024 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1024;
goto block2;
block2:;
// line 693
frost$core$Bit $tmp1025 = param1.inclusive;
*(&local1) = $tmp1025;
// line 694
// line 695
frost$core$String$Index$nullable $tmp1026 = param1.max;
frost$core$Bit $tmp1027 = frost$core$Bit$init$builtin_bit($tmp1026.nonnull);
bool $tmp1028 = $tmp1027.value;
if ($tmp1028) goto block6; else goto block8;
block6:;
// line 696
frost$core$String$Index$nullable $tmp1029 = param1.max;
frost$core$Bit $tmp1030 = frost$core$Bit$init$builtin_bit($tmp1029.nonnull);
bool $tmp1031 = $tmp1030.value;
if ($tmp1031) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1032 = (frost$core$Int64) {696};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1033, $tmp1032, &$s1034);
abort(); // unreachable
block9:;
*(&local2) = ((frost$core$String$Index) $tmp1029.value);
goto block7;
block8:;
// line 1
// line 699
frost$core$String$Index $tmp1035 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1035;
// line 700
frost$core$Bit $tmp1036 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1036;
goto block7;
block7:;
// line 702
frost$core$String$Index $tmp1037 = *(&local0);
frost$core$String$Index $tmp1038 = *(&local2);
frost$core$Bit $tmp1039 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1040 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1037, $tmp1038, $tmp1039);
frost$core$String* $tmp1041 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1040);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
// unreffing REF($59:frost.core.String)
return $tmp1041;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
frost$core$Char8 local3;
// line 710
frost$core$String$Index $tmp1042 = param1.min;
frost$core$Int64 $tmp1043 = $tmp1042.value;
*(&local0) = $tmp1043;
// line 711
frost$core$MutableString* $tmp1044 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1044);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
frost$core$MutableString* $tmp1045 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local1) = $tmp1044;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
// unreffing REF($5:frost.core.MutableString)
// line 712
frost$core$String$Index $tmp1046 = param1.max;
frost$core$Int64 $tmp1047 = $tmp1046.value;
*(&local2) = $tmp1047;
// line 713
frost$core$Bit $tmp1048 = param1.inclusive;
bool $tmp1049 = $tmp1048.value;
if ($tmp1049) goto block1; else goto block2;
block1:;
// line 714
frost$core$Int64 $tmp1050 = *(&local2);
frost$core$Int64 $tmp1051 = (frost$core$Int64) {1};
int64_t $tmp1052 = $tmp1050.value;
int64_t $tmp1053 = $tmp1051.value;
int64_t $tmp1054 = $tmp1052 + $tmp1053;
frost$core$Int64 $tmp1055 = (frost$core$Int64) {$tmp1054};
*(&local2) = $tmp1055;
goto block2;
block2:;
// line 716
goto block3;
block3:;
frost$core$Int64 $tmp1056 = *(&local0);
frost$core$Int64 $tmp1057 = *(&local2);
int64_t $tmp1058 = $tmp1056.value;
int64_t $tmp1059 = $tmp1057.value;
bool $tmp1060 = $tmp1058 < $tmp1059;
frost$core$Bit $tmp1061 = (frost$core$Bit) {$tmp1060};
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block4; else goto block5;
block4:;
// line 717
frost$core$Char8** $tmp1063 = &param0->data;
frost$core$Char8* $tmp1064 = *$tmp1063;
frost$core$Int64 $tmp1065 = *(&local0);
int64_t $tmp1066 = $tmp1065.value;
frost$core$Char8 $tmp1067 = $tmp1064[$tmp1066];
*(&local3) = $tmp1067;
// line 718
frost$core$MutableString* $tmp1068 = *(&local1);
frost$core$Char8 $tmp1069 = *(&local3);
frost$core$MutableString$append$frost$core$Char8($tmp1068, $tmp1069);
// line 719
frost$core$Int64 $tmp1070 = *(&local0);
frost$core$Int64 $tmp1071 = (frost$core$Int64) {1};
int64_t $tmp1072 = $tmp1070.value;
int64_t $tmp1073 = $tmp1071.value;
int64_t $tmp1074 = $tmp1072 + $tmp1073;
frost$core$Int64 $tmp1075 = (frost$core$Int64) {$tmp1074};
*(&local0) = $tmp1075;
// line 720
frost$core$Char8 $tmp1076 = *(&local3);
uint8_t $tmp1077 = $tmp1076.value;
int64_t $tmp1078 = ((int64_t) $tmp1077) & 255;
bool $tmp1079 = $tmp1078 >= 192;
frost$core$Bit $tmp1080 = frost$core$Bit$init$builtin_bit($tmp1079);
bool $tmp1081 = $tmp1080.value;
if ($tmp1081) goto block6; else goto block7;
block6:;
// line 721
frost$core$MutableString* $tmp1082 = *(&local1);
frost$core$Char8** $tmp1083 = &param0->data;
frost$core$Char8* $tmp1084 = *$tmp1083;
frost$core$Int64 $tmp1085 = *(&local0);
int64_t $tmp1086 = $tmp1085.value;
frost$core$Char8 $tmp1087 = $tmp1084[$tmp1086];
frost$core$MutableString$append$frost$core$Char8($tmp1082, $tmp1087);
// line 722
frost$core$Int64 $tmp1088 = *(&local0);
frost$core$Int64 $tmp1089 = (frost$core$Int64) {1};
int64_t $tmp1090 = $tmp1088.value;
int64_t $tmp1091 = $tmp1089.value;
int64_t $tmp1092 = $tmp1090 + $tmp1091;
frost$core$Int64 $tmp1093 = (frost$core$Int64) {$tmp1092};
*(&local0) = $tmp1093;
goto block7;
block7:;
// line 724
frost$core$Char8 $tmp1094 = *(&local3);
uint8_t $tmp1095 = $tmp1094.value;
int64_t $tmp1096 = ((int64_t) $tmp1095) & 255;
bool $tmp1097 = $tmp1096 >= 224;
frost$core$Bit $tmp1098 = frost$core$Bit$init$builtin_bit($tmp1097);
bool $tmp1099 = $tmp1098.value;
if ($tmp1099) goto block8; else goto block9;
block8:;
// line 725
frost$core$MutableString* $tmp1100 = *(&local1);
frost$core$Char8** $tmp1101 = &param0->data;
frost$core$Char8* $tmp1102 = *$tmp1101;
frost$core$Int64 $tmp1103 = *(&local0);
int64_t $tmp1104 = $tmp1103.value;
frost$core$Char8 $tmp1105 = $tmp1102[$tmp1104];
frost$core$MutableString$append$frost$core$Char8($tmp1100, $tmp1105);
// line 726
frost$core$Int64 $tmp1106 = *(&local0);
frost$core$Int64 $tmp1107 = (frost$core$Int64) {1};
int64_t $tmp1108 = $tmp1106.value;
int64_t $tmp1109 = $tmp1107.value;
int64_t $tmp1110 = $tmp1108 + $tmp1109;
frost$core$Int64 $tmp1111 = (frost$core$Int64) {$tmp1110};
*(&local0) = $tmp1111;
goto block9;
block9:;
// line 728
frost$core$Char8 $tmp1112 = *(&local3);
uint8_t $tmp1113 = $tmp1112.value;
int64_t $tmp1114 = ((int64_t) $tmp1113) & 255;
bool $tmp1115 = $tmp1114 >= 240;
frost$core$Bit $tmp1116 = frost$core$Bit$init$builtin_bit($tmp1115);
bool $tmp1117 = $tmp1116.value;
if ($tmp1117) goto block10; else goto block11;
block10:;
// line 729
frost$core$MutableString* $tmp1118 = *(&local1);
frost$core$Char8** $tmp1119 = &param0->data;
frost$core$Char8* $tmp1120 = *$tmp1119;
frost$core$Int64 $tmp1121 = *(&local0);
int64_t $tmp1122 = $tmp1121.value;
frost$core$Char8 $tmp1123 = $tmp1120[$tmp1122];
frost$core$MutableString$append$frost$core$Char8($tmp1118, $tmp1123);
// line 730
frost$core$Int64 $tmp1124 = *(&local0);
frost$core$Int64 $tmp1125 = (frost$core$Int64) {1};
int64_t $tmp1126 = $tmp1124.value;
int64_t $tmp1127 = $tmp1125.value;
int64_t $tmp1128 = $tmp1126 + $tmp1127;
frost$core$Int64 $tmp1129 = (frost$core$Int64) {$tmp1128};
*(&local0) = $tmp1129;
goto block11;
block11:;
goto block3;
block5:;
// line 733
frost$core$MutableString* $tmp1130 = *(&local1);
frost$core$String* $tmp1131 = frost$core$MutableString$finish$R$frost$core$String($tmp1130);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
// unreffing REF($144:frost.core.String)
frost$core$MutableString* $tmp1132 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// unreffing result
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp1131;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$Bit local1;
frost$core$String$Index local2;
// line 744
frost$core$Int64* $tmp1133 = &param0->_length;
frost$core$Int64 $tmp1134 = *$tmp1133;
frost$core$Int64 $tmp1135 = (frost$core$Int64) {0};
frost$core$Bit $tmp1136 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1134, $tmp1135);
bool $tmp1137 = $tmp1136.value;
if ($tmp1137) goto block1; else goto block2;
block1:;
// line 745
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1138));
return &$s1139;
block2:;
// line 747
// line 748
frost$core$String$Index$nullable $tmp1140 = param1.min;
frost$core$Bit $tmp1141 = frost$core$Bit$init$builtin_bit($tmp1140.nonnull);
bool $tmp1142 = $tmp1141.value;
if ($tmp1142) goto block3; else goto block5;
block3:;
// line 749
frost$core$String$Index$nullable $tmp1143 = param1.min;
frost$core$Bit $tmp1144 = frost$core$Bit$init$builtin_bit($tmp1143.nonnull);
bool $tmp1145 = $tmp1144.value;
if ($tmp1145) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp1146 = (frost$core$Int64) {749};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1147, $tmp1146, &$s1148);
abort(); // unreachable
block6:;
*(&local0) = ((frost$core$String$Index) $tmp1143.value);
goto block4;
block5:;
// line 1
// line 752
frost$core$String$Index $tmp1149 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1149;
goto block4;
block4:;
// line 755
frost$core$Bit $tmp1150 = param1.inclusive;
*(&local1) = $tmp1150;
// line 756
// line 757
frost$core$String$Index$nullable $tmp1151 = param1.max;
frost$core$Bit $tmp1152 = frost$core$Bit$init$builtin_bit($tmp1151.nonnull);
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block8; else goto block10;
block8:;
// line 758
frost$core$String$Index$nullable $tmp1154 = param1.max;
frost$core$Bit $tmp1155 = frost$core$Bit$init$builtin_bit($tmp1154.nonnull);
bool $tmp1156 = $tmp1155.value;
if ($tmp1156) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1157 = (frost$core$Int64) {758};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1158, $tmp1157, &$s1159);
abort(); // unreachable
block11:;
*(&local2) = ((frost$core$String$Index) $tmp1154.value);
goto block9;
block10:;
// line 1
// line 761
frost$core$String$Index $tmp1160 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1160;
// line 762
frost$core$Bit $tmp1161 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1161;
goto block9;
block9:;
// line 764
frost$core$String$Index $tmp1162 = *(&local0);
frost$core$String$Index $tmp1163 = *(&local2);
frost$core$Bit $tmp1164 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1165 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1162, $tmp1163, $tmp1164);
frost$core$String* $tmp1166 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1165);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
// unreffing REF($70:frost.core.String)
return $tmp1166;

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
frost$core$Int64* $tmp1167 = &param0->_length;
frost$core$Int64 $tmp1168 = *$tmp1167;
frost$core$Int64 $tmp1169 = (frost$core$Int64) {0};
frost$core$Bit $tmp1170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1168, $tmp1169);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block1; else goto block2;
block1:;
// line 781
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1172));
return &$s1173;
block2:;
// line 783
frost$core$Int64 $tmp1174 = param1.step;
*(&local0) = $tmp1174;
// line 785
// line 786
frost$core$String$Index$nullable $tmp1175 = param1.start;
frost$core$Bit $tmp1176 = frost$core$Bit$init$builtin_bit($tmp1175.nonnull);
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block3; else goto block5;
block3:;
// line 787
frost$core$String$Index$nullable $tmp1178 = param1.start;
frost$core$Bit $tmp1179 = frost$core$Bit$init$builtin_bit($tmp1178.nonnull);
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp1181 = (frost$core$Int64) {787};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1182, $tmp1181, &$s1183);
abort(); // unreachable
block6:;
frost$core$Int64 $tmp1184 = ((frost$core$String$Index) $tmp1178.value).value;
*(&local1) = $tmp1184;
goto block4;
block5:;
// line 789
frost$core$Int64 $tmp1185 = *(&local0);
frost$core$Int64 $tmp1186 = (frost$core$Int64) {0};
int64_t $tmp1187 = $tmp1185.value;
int64_t $tmp1188 = $tmp1186.value;
bool $tmp1189 = $tmp1187 > $tmp1188;
frost$core$Bit $tmp1190 = (frost$core$Bit) {$tmp1189};
bool $tmp1191 = $tmp1190.value;
if ($tmp1191) goto block8; else goto block10;
block8:;
// line 790
frost$core$String$Index $tmp1192 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1193 = $tmp1192.value;
*(&local1) = $tmp1193;
goto block9;
block10:;
// line 1
// line 793
frost$core$String$Index $tmp1194 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index $tmp1195 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1194);
frost$core$Int64 $tmp1196 = $tmp1195.value;
*(&local1) = $tmp1196;
goto block9;
block9:;
goto block4;
block4:;
// line 796
// line 797
frost$core$String$Index$nullable $tmp1197 = param1.end;
frost$core$Bit $tmp1198 = frost$core$Bit$init$builtin_bit($tmp1197.nonnull);
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block11; else goto block13;
block11:;
// line 798
frost$core$String$Index$nullable $tmp1200 = param1.end;
frost$core$Bit $tmp1201 = frost$core$Bit$init$builtin_bit($tmp1200.nonnull);
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1203 = (frost$core$Int64) {798};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1204, $tmp1203, &$s1205);
abort(); // unreachable
block14:;
frost$core$Int64 $tmp1206 = ((frost$core$String$Index) $tmp1200.value).value;
*(&local2) = $tmp1206;
goto block12;
block13:;
// line 800
frost$core$Int64 $tmp1207 = *(&local0);
frost$core$Int64 $tmp1208 = (frost$core$Int64) {0};
int64_t $tmp1209 = $tmp1207.value;
int64_t $tmp1210 = $tmp1208.value;
bool $tmp1211 = $tmp1209 > $tmp1210;
frost$core$Bit $tmp1212 = (frost$core$Bit) {$tmp1211};
bool $tmp1213 = $tmp1212.value;
if ($tmp1213) goto block16; else goto block18;
block16:;
// line 801
frost$core$String$Index $tmp1214 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1215 = $tmp1214.value;
*(&local2) = $tmp1215;
goto block17;
block18:;
// line 1
// line 804
frost$core$String$Index $tmp1216 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1217 = $tmp1216.value;
*(&local2) = $tmp1217;
goto block17;
block17:;
goto block12;
block12:;
// line 807
frost$core$MutableString* $tmp1218 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1218);
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
frost$core$MutableString* $tmp1219 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
*(&local3) = $tmp1218;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
// unreffing REF($98:frost.core.MutableString)
// line 808
frost$core$Int64 $tmp1220 = param1.step;
frost$core$Int64 $tmp1221 = (frost$core$Int64) {0};
int64_t $tmp1222 = $tmp1220.value;
int64_t $tmp1223 = $tmp1221.value;
bool $tmp1224 = $tmp1222 > $tmp1223;
frost$core$Bit $tmp1225 = (frost$core$Bit) {$tmp1224};
bool $tmp1226 = $tmp1225.value;
if ($tmp1226) goto block19; else goto block21;
block19:;
// line 809
goto block22;
block22:;
frost$core$Int64 $tmp1227 = *(&local1);
frost$core$Int64 $tmp1228 = *(&local2);
int64_t $tmp1229 = $tmp1227.value;
int64_t $tmp1230 = $tmp1228.value;
bool $tmp1231 = $tmp1229 < $tmp1230;
frost$core$Bit $tmp1232 = (frost$core$Bit) {$tmp1231};
bool $tmp1233 = $tmp1232.value;
if ($tmp1233) goto block23; else goto block24;
block23:;
// line 810
frost$core$Char8** $tmp1234 = &param0->data;
frost$core$Char8* $tmp1235 = *$tmp1234;
frost$core$Int64 $tmp1236 = *(&local1);
int64_t $tmp1237 = $tmp1236.value;
frost$core$Char8 $tmp1238 = $tmp1235[$tmp1237];
*(&local4) = $tmp1238;
// line 811
frost$core$MutableString* $tmp1239 = *(&local3);
frost$core$Char8 $tmp1240 = *(&local4);
frost$core$MutableString$append$frost$core$Char8($tmp1239, $tmp1240);
// line 812
frost$core$Int64 $tmp1241 = *(&local1);
frost$core$Int64 $tmp1242 = (frost$core$Int64) {1};
int64_t $tmp1243 = $tmp1241.value;
int64_t $tmp1244 = $tmp1242.value;
int64_t $tmp1245 = $tmp1243 + $tmp1244;
frost$core$Int64 $tmp1246 = (frost$core$Int64) {$tmp1245};
*(&local1) = $tmp1246;
// line 813
frost$core$Char8 $tmp1247 = *(&local4);
uint8_t $tmp1248 = $tmp1247.value;
int64_t $tmp1249 = ((int64_t) $tmp1248) & 255;
bool $tmp1250 = $tmp1249 >= 192;
frost$core$Bit $tmp1251 = frost$core$Bit$init$builtin_bit($tmp1250);
bool $tmp1252 = $tmp1251.value;
if ($tmp1252) goto block25; else goto block26;
block25:;
// line 814
frost$core$MutableString* $tmp1253 = *(&local3);
frost$core$Char8** $tmp1254 = &param0->data;
frost$core$Char8* $tmp1255 = *$tmp1254;
frost$core$Int64 $tmp1256 = *(&local1);
int64_t $tmp1257 = $tmp1256.value;
frost$core$Char8 $tmp1258 = $tmp1255[$tmp1257];
frost$core$MutableString$append$frost$core$Char8($tmp1253, $tmp1258);
// line 815
frost$core$Int64 $tmp1259 = *(&local1);
frost$core$Int64 $tmp1260 = (frost$core$Int64) {1};
int64_t $tmp1261 = $tmp1259.value;
int64_t $tmp1262 = $tmp1260.value;
int64_t $tmp1263 = $tmp1261 + $tmp1262;
frost$core$Int64 $tmp1264 = (frost$core$Int64) {$tmp1263};
*(&local1) = $tmp1264;
goto block26;
block26:;
// line 817
frost$core$Char8 $tmp1265 = *(&local4);
uint8_t $tmp1266 = $tmp1265.value;
int64_t $tmp1267 = ((int64_t) $tmp1266) & 255;
bool $tmp1268 = $tmp1267 >= 224;
frost$core$Bit $tmp1269 = frost$core$Bit$init$builtin_bit($tmp1268);
bool $tmp1270 = $tmp1269.value;
if ($tmp1270) goto block27; else goto block28;
block27:;
// line 818
frost$core$MutableString* $tmp1271 = *(&local3);
frost$core$Char8** $tmp1272 = &param0->data;
frost$core$Char8* $tmp1273 = *$tmp1272;
frost$core$Int64 $tmp1274 = *(&local1);
int64_t $tmp1275 = $tmp1274.value;
frost$core$Char8 $tmp1276 = $tmp1273[$tmp1275];
frost$core$MutableString$append$frost$core$Char8($tmp1271, $tmp1276);
// line 819
frost$core$Int64 $tmp1277 = *(&local1);
frost$core$Int64 $tmp1278 = (frost$core$Int64) {1};
int64_t $tmp1279 = $tmp1277.value;
int64_t $tmp1280 = $tmp1278.value;
int64_t $tmp1281 = $tmp1279 + $tmp1280;
frost$core$Int64 $tmp1282 = (frost$core$Int64) {$tmp1281};
*(&local1) = $tmp1282;
goto block28;
block28:;
// line 821
frost$core$Char8 $tmp1283 = *(&local4);
uint8_t $tmp1284 = $tmp1283.value;
int64_t $tmp1285 = ((int64_t) $tmp1284) & 255;
bool $tmp1286 = $tmp1285 >= 240;
frost$core$Bit $tmp1287 = frost$core$Bit$init$builtin_bit($tmp1286);
bool $tmp1288 = $tmp1287.value;
if ($tmp1288) goto block29; else goto block30;
block29:;
// line 822
frost$core$MutableString* $tmp1289 = *(&local3);
frost$core$Char8** $tmp1290 = &param0->data;
frost$core$Char8* $tmp1291 = *$tmp1290;
frost$core$Int64 $tmp1292 = *(&local1);
int64_t $tmp1293 = $tmp1292.value;
frost$core$Char8 $tmp1294 = $tmp1291[$tmp1293];
frost$core$MutableString$append$frost$core$Char8($tmp1289, $tmp1294);
// line 823
frost$core$Int64 $tmp1295 = *(&local1);
frost$core$Int64 $tmp1296 = (frost$core$Int64) {1};
int64_t $tmp1297 = $tmp1295.value;
int64_t $tmp1298 = $tmp1296.value;
int64_t $tmp1299 = $tmp1297 + $tmp1298;
frost$core$Int64 $tmp1300 = (frost$core$Int64) {$tmp1299};
*(&local1) = $tmp1300;
goto block30;
block30:;
// line 825
frost$core$Int64 $tmp1301 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1302 = *(&local0);
frost$core$Bit $tmp1303 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1304 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1301, $tmp1302, $tmp1303);
frost$core$Int64 $tmp1305 = $tmp1304.min;
*(&local5) = $tmp1305;
frost$core$Int64 $tmp1306 = $tmp1304.max;
frost$core$Bit $tmp1307 = $tmp1304.inclusive;
bool $tmp1308 = $tmp1307.value;
frost$core$Int64 $tmp1309 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1310 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1309);
if ($tmp1308) goto block34; else goto block35;
block34:;
int64_t $tmp1311 = $tmp1305.value;
int64_t $tmp1312 = $tmp1306.value;
bool $tmp1313 = $tmp1311 <= $tmp1312;
frost$core$Bit $tmp1314 = (frost$core$Bit) {$tmp1313};
bool $tmp1315 = $tmp1314.value;
if ($tmp1315) goto block31; else goto block32;
block35:;
int64_t $tmp1316 = $tmp1305.value;
int64_t $tmp1317 = $tmp1306.value;
bool $tmp1318 = $tmp1316 < $tmp1317;
frost$core$Bit $tmp1319 = (frost$core$Bit) {$tmp1318};
bool $tmp1320 = $tmp1319.value;
if ($tmp1320) goto block31; else goto block32;
block31:;
// line 826
frost$core$Int64 $tmp1321 = *(&local1);
frost$core$Int64 $tmp1322 = *(&local2);
int64_t $tmp1323 = $tmp1321.value;
int64_t $tmp1324 = $tmp1322.value;
bool $tmp1325 = $tmp1323 >= $tmp1324;
frost$core$Bit $tmp1326 = (frost$core$Bit) {$tmp1325};
bool $tmp1327 = $tmp1326.value;
if ($tmp1327) goto block36; else goto block37;
block36:;
// line 827
frost$core$MutableString* $tmp1328 = *(&local3);
frost$core$String* $tmp1329 = frost$core$MutableString$convert$R$frost$core$String($tmp1328);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
// unreffing REF($262:frost.core.String)
frost$core$MutableString* $tmp1330 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
// unreffing result
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1329;
block37:;
// line 829
frost$core$Int64 $tmp1331 = *(&local1);
frost$core$String$Index $tmp1332 = frost$core$String$Index$init$frost$core$Int64($tmp1331);
frost$core$String$Index $tmp1333 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1332);
frost$core$Int64 $tmp1334 = $tmp1333.value;
*(&local1) = $tmp1334;
goto block33;
block33:;
frost$core$Int64 $tmp1335 = *(&local5);
int64_t $tmp1336 = $tmp1306.value;
int64_t $tmp1337 = $tmp1335.value;
int64_t $tmp1338 = $tmp1336 - $tmp1337;
frost$core$Int64 $tmp1339 = (frost$core$Int64) {$tmp1338};
frost$core$UInt64 $tmp1340 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1339);
if ($tmp1308) goto block39; else goto block40;
block39:;
uint64_t $tmp1341 = $tmp1340.value;
uint64_t $tmp1342 = $tmp1310.value;
bool $tmp1343 = $tmp1341 >= $tmp1342;
frost$core$Bit $tmp1344 = (frost$core$Bit) {$tmp1343};
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block38; else goto block32;
block40:;
uint64_t $tmp1346 = $tmp1340.value;
uint64_t $tmp1347 = $tmp1310.value;
bool $tmp1348 = $tmp1346 > $tmp1347;
frost$core$Bit $tmp1349 = (frost$core$Bit) {$tmp1348};
bool $tmp1350 = $tmp1349.value;
if ($tmp1350) goto block38; else goto block32;
block38:;
int64_t $tmp1351 = $tmp1335.value;
int64_t $tmp1352 = $tmp1309.value;
int64_t $tmp1353 = $tmp1351 + $tmp1352;
frost$core$Int64 $tmp1354 = (frost$core$Int64) {$tmp1353};
*(&local5) = $tmp1354;
goto block31;
block32:;
goto block22;
block24:;
goto block20;
block21:;
// line 1
// line 834
frost$core$Int64 $tmp1355 = param1.step;
frost$core$Int64 $tmp1356 = (frost$core$Int64) {0};
int64_t $tmp1357 = $tmp1355.value;
int64_t $tmp1358 = $tmp1356.value;
bool $tmp1359 = $tmp1357 < $tmp1358;
frost$core$Bit $tmp1360 = (frost$core$Bit) {$tmp1359};
bool $tmp1361 = $tmp1360.value;
if ($tmp1361) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp1362 = (frost$core$Int64) {834};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1363, $tmp1362);
abort(); // unreachable
block41:;
// line 835
goto block43;
block43:;
frost$core$Int64 $tmp1364 = *(&local1);
frost$core$Int64 $tmp1365 = *(&local2);
int64_t $tmp1366 = $tmp1364.value;
int64_t $tmp1367 = $tmp1365.value;
bool $tmp1368 = $tmp1366 > $tmp1367;
frost$core$Bit $tmp1369 = (frost$core$Bit) {$tmp1368};
bool $tmp1370 = $tmp1369.value;
if ($tmp1370) goto block44; else goto block45;
block44:;
// line 836
frost$core$Char8** $tmp1371 = &param0->data;
frost$core$Char8* $tmp1372 = *$tmp1371;
frost$core$Int64 $tmp1373 = *(&local1);
int64_t $tmp1374 = $tmp1373.value;
frost$core$Char8 $tmp1375 = $tmp1372[$tmp1374];
*(&local6) = $tmp1375;
// line 837
frost$core$MutableString* $tmp1376 = *(&local3);
frost$core$Char8 $tmp1377 = *(&local6);
frost$core$MutableString$append$frost$core$Char8($tmp1376, $tmp1377);
// line 838
frost$core$Int64 $tmp1378 = *(&local1);
*(&local7) = $tmp1378;
// line 839
frost$core$Int64 $tmp1379 = *(&local1);
frost$core$Int64 $tmp1380 = (frost$core$Int64) {1};
int64_t $tmp1381 = $tmp1379.value;
int64_t $tmp1382 = $tmp1380.value;
int64_t $tmp1383 = $tmp1381 + $tmp1382;
frost$core$Int64 $tmp1384 = (frost$core$Int64) {$tmp1383};
*(&local1) = $tmp1384;
// line 840
frost$core$Char8 $tmp1385 = *(&local6);
uint8_t $tmp1386 = $tmp1385.value;
int64_t $tmp1387 = ((int64_t) $tmp1386) & 255;
bool $tmp1388 = $tmp1387 >= 192;
frost$core$Bit $tmp1389 = frost$core$Bit$init$builtin_bit($tmp1388);
bool $tmp1390 = $tmp1389.value;
if ($tmp1390) goto block46; else goto block47;
block46:;
// line 841
frost$core$MutableString* $tmp1391 = *(&local3);
frost$core$Char8** $tmp1392 = &param0->data;
frost$core$Char8* $tmp1393 = *$tmp1392;
frost$core$Int64 $tmp1394 = *(&local1);
int64_t $tmp1395 = $tmp1394.value;
frost$core$Char8 $tmp1396 = $tmp1393[$tmp1395];
frost$core$MutableString$append$frost$core$Char8($tmp1391, $tmp1396);
// line 842
frost$core$Int64 $tmp1397 = *(&local1);
frost$core$Int64 $tmp1398 = (frost$core$Int64) {1};
int64_t $tmp1399 = $tmp1397.value;
int64_t $tmp1400 = $tmp1398.value;
int64_t $tmp1401 = $tmp1399 + $tmp1400;
frost$core$Int64 $tmp1402 = (frost$core$Int64) {$tmp1401};
*(&local1) = $tmp1402;
goto block47;
block47:;
// line 844
frost$core$Char8 $tmp1403 = *(&local6);
uint8_t $tmp1404 = $tmp1403.value;
int64_t $tmp1405 = ((int64_t) $tmp1404) & 255;
bool $tmp1406 = $tmp1405 >= 224;
frost$core$Bit $tmp1407 = frost$core$Bit$init$builtin_bit($tmp1406);
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block48; else goto block49;
block48:;
// line 845
frost$core$MutableString* $tmp1409 = *(&local3);
frost$core$Char8** $tmp1410 = &param0->data;
frost$core$Char8* $tmp1411 = *$tmp1410;
frost$core$Int64 $tmp1412 = *(&local1);
int64_t $tmp1413 = $tmp1412.value;
frost$core$Char8 $tmp1414 = $tmp1411[$tmp1413];
frost$core$MutableString$append$frost$core$Char8($tmp1409, $tmp1414);
// line 846
frost$core$Int64 $tmp1415 = *(&local1);
frost$core$Int64 $tmp1416 = (frost$core$Int64) {1};
int64_t $tmp1417 = $tmp1415.value;
int64_t $tmp1418 = $tmp1416.value;
int64_t $tmp1419 = $tmp1417 + $tmp1418;
frost$core$Int64 $tmp1420 = (frost$core$Int64) {$tmp1419};
*(&local1) = $tmp1420;
goto block49;
block49:;
// line 848
frost$core$Char8 $tmp1421 = *(&local6);
uint8_t $tmp1422 = $tmp1421.value;
int64_t $tmp1423 = ((int64_t) $tmp1422) & 255;
bool $tmp1424 = $tmp1423 >= 240;
frost$core$Bit $tmp1425 = frost$core$Bit$init$builtin_bit($tmp1424);
bool $tmp1426 = $tmp1425.value;
if ($tmp1426) goto block50; else goto block51;
block50:;
// line 849
frost$core$MutableString* $tmp1427 = *(&local3);
frost$core$Char8** $tmp1428 = &param0->data;
frost$core$Char8* $tmp1429 = *$tmp1428;
frost$core$Int64 $tmp1430 = *(&local1);
int64_t $tmp1431 = $tmp1430.value;
frost$core$Char8 $tmp1432 = $tmp1429[$tmp1431];
frost$core$MutableString$append$frost$core$Char8($tmp1427, $tmp1432);
goto block51;
block51:;
// line 851
frost$core$Int64 $tmp1433 = *(&local7);
frost$core$Int64 $tmp1434 = (frost$core$Int64) {1};
int64_t $tmp1435 = $tmp1433.value;
int64_t $tmp1436 = $tmp1434.value;
int64_t $tmp1437 = $tmp1435 - $tmp1436;
frost$core$Int64 $tmp1438 = (frost$core$Int64) {$tmp1437};
*(&local1) = $tmp1438;
// line 852
goto block52;
block52:;
frost$core$Char8** $tmp1439 = &param0->data;
frost$core$Char8* $tmp1440 = *$tmp1439;
frost$core$Int64 $tmp1441 = *(&local1);
int64_t $tmp1442 = $tmp1441.value;
frost$core$Char8 $tmp1443 = $tmp1440[$tmp1442];
uint8_t $tmp1444 = $tmp1443.value;
int64_t $tmp1445 = ((int64_t) $tmp1444) & 255;
bool $tmp1446 = $tmp1445 >= 128;
frost$core$Char8** $tmp1447 = &param0->data;
frost$core$Char8* $tmp1448 = *$tmp1447;
frost$core$Int64 $tmp1449 = *(&local1);
int64_t $tmp1450 = $tmp1449.value;
frost$core$Char8 $tmp1451 = $tmp1448[$tmp1450];
uint8_t $tmp1452 = $tmp1451.value;
int64_t $tmp1453 = ((int64_t) $tmp1452) & 255;
bool $tmp1454 = $tmp1453 < 192;
bool $tmp1455 = $tmp1446 & $tmp1454;
frost$core$Bit $tmp1456 = frost$core$Bit$init$builtin_bit($tmp1455);
bool $tmp1457 = $tmp1456.value;
if ($tmp1457) goto block53; else goto block54;
block53:;
// line 853
frost$core$Int64 $tmp1458 = *(&local1);
frost$core$Int64 $tmp1459 = (frost$core$Int64) {1};
int64_t $tmp1460 = $tmp1458.value;
int64_t $tmp1461 = $tmp1459.value;
int64_t $tmp1462 = $tmp1460 - $tmp1461;
frost$core$Int64 $tmp1463 = (frost$core$Int64) {$tmp1462};
*(&local1) = $tmp1463;
goto block52;
block54:;
// line 855
frost$core$Int64 $tmp1464 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64 $tmp1465 = *(&local0);
frost$core$Int64 $tmp1466 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1467 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1468 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1464, $tmp1465, $tmp1466, $tmp1467);
frost$core$Int64 $tmp1469 = $tmp1468.start;
*(&local8) = $tmp1469;
frost$core$Int64 $tmp1470 = $tmp1468.end;
frost$core$Int64 $tmp1471 = $tmp1468.step;
frost$core$UInt64 $tmp1472 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1471);
frost$core$Int64 $tmp1473 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1471);
frost$core$UInt64 $tmp1474 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1473);
frost$core$Bit $tmp1475 = $tmp1468.inclusive;
bool $tmp1476 = $tmp1475.value;
frost$core$Int64 $tmp1477 = (frost$core$Int64) {0};
int64_t $tmp1478 = $tmp1471.value;
int64_t $tmp1479 = $tmp1477.value;
bool $tmp1480 = $tmp1478 >= $tmp1479;
frost$core$Bit $tmp1481 = (frost$core$Bit) {$tmp1480};
bool $tmp1482 = $tmp1481.value;
if ($tmp1482) goto block58; else goto block59;
block58:;
if ($tmp1476) goto block60; else goto block61;
block60:;
int64_t $tmp1483 = $tmp1469.value;
int64_t $tmp1484 = $tmp1470.value;
bool $tmp1485 = $tmp1483 <= $tmp1484;
frost$core$Bit $tmp1486 = (frost$core$Bit) {$tmp1485};
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block55; else goto block56;
block61:;
int64_t $tmp1488 = $tmp1469.value;
int64_t $tmp1489 = $tmp1470.value;
bool $tmp1490 = $tmp1488 < $tmp1489;
frost$core$Bit $tmp1491 = (frost$core$Bit) {$tmp1490};
bool $tmp1492 = $tmp1491.value;
if ($tmp1492) goto block55; else goto block56;
block59:;
if ($tmp1476) goto block62; else goto block63;
block62:;
int64_t $tmp1493 = $tmp1469.value;
int64_t $tmp1494 = $tmp1470.value;
bool $tmp1495 = $tmp1493 >= $tmp1494;
frost$core$Bit $tmp1496 = (frost$core$Bit) {$tmp1495};
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block55; else goto block56;
block63:;
int64_t $tmp1498 = $tmp1469.value;
int64_t $tmp1499 = $tmp1470.value;
bool $tmp1500 = $tmp1498 > $tmp1499;
frost$core$Bit $tmp1501 = (frost$core$Bit) {$tmp1500};
bool $tmp1502 = $tmp1501.value;
if ($tmp1502) goto block55; else goto block56;
block55:;
// line 856
frost$core$Int64 $tmp1503 = *(&local1);
frost$core$Int64 $tmp1504 = *(&local2);
int64_t $tmp1505 = $tmp1503.value;
int64_t $tmp1506 = $tmp1504.value;
bool $tmp1507 = $tmp1505 <= $tmp1506;
frost$core$Bit $tmp1508 = (frost$core$Bit) {$tmp1507};
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block64; else goto block65;
block64:;
// line 857
frost$core$MutableString* $tmp1510 = *(&local3);
frost$core$String* $tmp1511 = frost$core$MutableString$convert$R$frost$core$String($tmp1510);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
// unreffing REF($523:frost.core.String)
frost$core$MutableString* $tmp1512 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
// unreffing result
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1511;
block65:;
// line 859
frost$core$Int64 $tmp1513 = *(&local1);
frost$core$String$Index $tmp1514 = frost$core$String$Index$init$frost$core$Int64($tmp1513);
frost$core$String$Index $tmp1515 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1514);
frost$core$Int64 $tmp1516 = $tmp1515.value;
*(&local1) = $tmp1516;
goto block57;
block57:;
frost$core$Int64 $tmp1517 = *(&local8);
if ($tmp1482) goto block67; else goto block68;
block67:;
int64_t $tmp1518 = $tmp1470.value;
int64_t $tmp1519 = $tmp1517.value;
int64_t $tmp1520 = $tmp1518 - $tmp1519;
frost$core$Int64 $tmp1521 = (frost$core$Int64) {$tmp1520};
frost$core$UInt64 $tmp1522 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1521);
if ($tmp1476) goto block69; else goto block70;
block69:;
uint64_t $tmp1523 = $tmp1522.value;
uint64_t $tmp1524 = $tmp1472.value;
bool $tmp1525 = $tmp1523 >= $tmp1524;
frost$core$Bit $tmp1526 = (frost$core$Bit) {$tmp1525};
bool $tmp1527 = $tmp1526.value;
if ($tmp1527) goto block66; else goto block56;
block70:;
uint64_t $tmp1528 = $tmp1522.value;
uint64_t $tmp1529 = $tmp1472.value;
bool $tmp1530 = $tmp1528 > $tmp1529;
frost$core$Bit $tmp1531 = (frost$core$Bit) {$tmp1530};
bool $tmp1532 = $tmp1531.value;
if ($tmp1532) goto block66; else goto block56;
block68:;
int64_t $tmp1533 = $tmp1517.value;
int64_t $tmp1534 = $tmp1470.value;
int64_t $tmp1535 = $tmp1533 - $tmp1534;
frost$core$Int64 $tmp1536 = (frost$core$Int64) {$tmp1535};
frost$core$UInt64 $tmp1537 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1536);
if ($tmp1476) goto block71; else goto block72;
block71:;
uint64_t $tmp1538 = $tmp1537.value;
uint64_t $tmp1539 = $tmp1474.value;
bool $tmp1540 = $tmp1538 >= $tmp1539;
frost$core$Bit $tmp1541 = (frost$core$Bit) {$tmp1540};
bool $tmp1542 = $tmp1541.value;
if ($tmp1542) goto block66; else goto block56;
block72:;
uint64_t $tmp1543 = $tmp1537.value;
uint64_t $tmp1544 = $tmp1474.value;
bool $tmp1545 = $tmp1543 > $tmp1544;
frost$core$Bit $tmp1546 = (frost$core$Bit) {$tmp1545};
bool $tmp1547 = $tmp1546.value;
if ($tmp1547) goto block66; else goto block56;
block66:;
int64_t $tmp1548 = $tmp1517.value;
int64_t $tmp1549 = $tmp1471.value;
int64_t $tmp1550 = $tmp1548 + $tmp1549;
frost$core$Int64 $tmp1551 = (frost$core$Int64) {$tmp1550};
*(&local8) = $tmp1551;
goto block55;
block56:;
goto block43;
block45:;
goto block20;
block20:;
// line 863
frost$core$Bit $tmp1552 = param1.inclusive;
bool $tmp1553 = $tmp1552.value;
if ($tmp1553) goto block75; else goto block76;
block75:;
*(&local11) = $tmp1552;
goto block77;
block76:;
frost$core$String$Index$nullable $tmp1554 = param1.end;
frost$core$Bit $tmp1555 = frost$core$Bit$init$builtin_bit(!$tmp1554.nonnull);
*(&local11) = $tmp1555;
goto block77;
block77:;
frost$core$Bit $tmp1556 = *(&local11);
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block78; else goto block79;
block78:;
frost$core$Int64 $tmp1558 = *(&local1);
frost$core$Int64 $tmp1559 = *(&local2);
frost$core$Bit $tmp1560 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1558, $tmp1559);
*(&local10) = $tmp1560;
goto block80;
block79:;
*(&local10) = $tmp1556;
goto block80;
block80:;
frost$core$Bit $tmp1561 = *(&local10);
bool $tmp1562 = $tmp1561.value;
if ($tmp1562) goto block81; else goto block82;
block81:;
frost$core$Int64 $tmp1563 = *(&local2);
frost$core$Int64* $tmp1564 = &param0->_length;
frost$core$Int64 $tmp1565 = *$tmp1564;
int64_t $tmp1566 = $tmp1563.value;
int64_t $tmp1567 = $tmp1565.value;
bool $tmp1568 = $tmp1566 < $tmp1567;
frost$core$Bit $tmp1569 = (frost$core$Bit) {$tmp1568};
*(&local9) = $tmp1569;
goto block83;
block82:;
*(&local9) = $tmp1561;
goto block83;
block83:;
frost$core$Bit $tmp1570 = *(&local9);
bool $tmp1571 = $tmp1570.value;
if ($tmp1571) goto block73; else goto block74;
block73:;
// line 864
frost$core$Char8** $tmp1572 = &param0->data;
frost$core$Char8* $tmp1573 = *$tmp1572;
frost$core$Int64 $tmp1574 = *(&local1);
int64_t $tmp1575 = $tmp1574.value;
frost$core$Char8 $tmp1576 = $tmp1573[$tmp1575];
*(&local12) = $tmp1576;
// line 865
frost$core$MutableString* $tmp1577 = *(&local3);
frost$core$Char8 $tmp1578 = *(&local12);
frost$core$MutableString$append$frost$core$Char8($tmp1577, $tmp1578);
// line 866
frost$core$Int64 $tmp1579 = *(&local1);
frost$core$Int64 $tmp1580 = (frost$core$Int64) {1};
int64_t $tmp1581 = $tmp1579.value;
int64_t $tmp1582 = $tmp1580.value;
int64_t $tmp1583 = $tmp1581 + $tmp1582;
frost$core$Int64 $tmp1584 = (frost$core$Int64) {$tmp1583};
*(&local1) = $tmp1584;
// line 867
frost$core$Char8 $tmp1585 = *(&local12);
uint8_t $tmp1586 = $tmp1585.value;
int64_t $tmp1587 = ((int64_t) $tmp1586) & 255;
bool $tmp1588 = $tmp1587 >= 192;
frost$core$Bit $tmp1589 = frost$core$Bit$init$builtin_bit($tmp1588);
bool $tmp1590 = $tmp1589.value;
if ($tmp1590) goto block84; else goto block85;
block84:;
// line 868
frost$core$MutableString* $tmp1591 = *(&local3);
frost$core$Char8** $tmp1592 = &param0->data;
frost$core$Char8* $tmp1593 = *$tmp1592;
frost$core$Int64 $tmp1594 = *(&local1);
int64_t $tmp1595 = $tmp1594.value;
frost$core$Char8 $tmp1596 = $tmp1593[$tmp1595];
frost$core$MutableString$append$frost$core$Char8($tmp1591, $tmp1596);
// line 869
frost$core$Int64 $tmp1597 = *(&local1);
frost$core$Int64 $tmp1598 = (frost$core$Int64) {1};
int64_t $tmp1599 = $tmp1597.value;
int64_t $tmp1600 = $tmp1598.value;
int64_t $tmp1601 = $tmp1599 + $tmp1600;
frost$core$Int64 $tmp1602 = (frost$core$Int64) {$tmp1601};
*(&local1) = $tmp1602;
goto block85;
block85:;
// line 871
frost$core$Char8 $tmp1603 = *(&local12);
uint8_t $tmp1604 = $tmp1603.value;
int64_t $tmp1605 = ((int64_t) $tmp1604) & 255;
bool $tmp1606 = $tmp1605 >= 224;
frost$core$Bit $tmp1607 = frost$core$Bit$init$builtin_bit($tmp1606);
bool $tmp1608 = $tmp1607.value;
if ($tmp1608) goto block86; else goto block87;
block86:;
// line 872
frost$core$MutableString* $tmp1609 = *(&local3);
frost$core$Char8** $tmp1610 = &param0->data;
frost$core$Char8* $tmp1611 = *$tmp1610;
frost$core$Int64 $tmp1612 = *(&local1);
int64_t $tmp1613 = $tmp1612.value;
frost$core$Char8 $tmp1614 = $tmp1611[$tmp1613];
frost$core$MutableString$append$frost$core$Char8($tmp1609, $tmp1614);
// line 873
frost$core$Int64 $tmp1615 = *(&local1);
frost$core$Int64 $tmp1616 = (frost$core$Int64) {1};
int64_t $tmp1617 = $tmp1615.value;
int64_t $tmp1618 = $tmp1616.value;
int64_t $tmp1619 = $tmp1617 + $tmp1618;
frost$core$Int64 $tmp1620 = (frost$core$Int64) {$tmp1619};
*(&local1) = $tmp1620;
goto block87;
block87:;
// line 875
frost$core$Char8 $tmp1621 = *(&local12);
uint8_t $tmp1622 = $tmp1621.value;
int64_t $tmp1623 = ((int64_t) $tmp1622) & 255;
bool $tmp1624 = $tmp1623 >= 240;
frost$core$Bit $tmp1625 = frost$core$Bit$init$builtin_bit($tmp1624);
bool $tmp1626 = $tmp1625.value;
if ($tmp1626) goto block88; else goto block89;
block88:;
// line 876
frost$core$MutableString* $tmp1627 = *(&local3);
frost$core$Char8** $tmp1628 = &param0->data;
frost$core$Char8* $tmp1629 = *$tmp1628;
frost$core$Int64 $tmp1630 = *(&local1);
int64_t $tmp1631 = $tmp1630.value;
frost$core$Char8 $tmp1632 = $tmp1629[$tmp1631];
frost$core$MutableString$append$frost$core$Char8($tmp1627, $tmp1632);
goto block89;
block89:;
goto block74;
block74:;
// line 879
frost$core$MutableString* $tmp1633 = *(&local3);
frost$core$String* $tmp1634 = frost$core$MutableString$finish$R$frost$core$String($tmp1633);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
// unreffing REF($718:frost.core.String)
frost$core$MutableString* $tmp1635 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
// unreffing result
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1634;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 888
// line 889
frost$core$Int64$nullable $tmp1636 = param1.min;
frost$core$Bit $tmp1637 = frost$core$Bit$init$builtin_bit($tmp1636.nonnull);
bool $tmp1638 = $tmp1637.value;
if ($tmp1638) goto block1; else goto block3;
block1:;
// line 890
frost$core$String$Index $tmp1639 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1640 = param1.min;
frost$core$Bit $tmp1641 = frost$core$Bit$init$builtin_bit($tmp1640.nonnull);
bool $tmp1642 = $tmp1641.value;
if ($tmp1642) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1643 = (frost$core$Int64) {890};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1644, $tmp1643, &$s1645);
abort(); // unreachable
block4:;
frost$core$String$Index $tmp1646 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1639, ((frost$core$Int64) $tmp1640.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1646, true });
goto block2;
block3:;
// line 1
// line 893
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 895
// line 896
frost$core$Int64$nullable $tmp1647 = param1.max;
frost$core$Bit $tmp1648 = frost$core$Bit$init$builtin_bit($tmp1647.nonnull);
bool $tmp1649 = $tmp1648.value;
if ($tmp1649) goto block6; else goto block8;
block6:;
// line 897
frost$core$String$Index $tmp1650 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1651 = param1.max;
frost$core$Bit $tmp1652 = frost$core$Bit$init$builtin_bit($tmp1651.nonnull);
bool $tmp1653 = $tmp1652.value;
if ($tmp1653) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1654 = (frost$core$Int64) {897};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1655, $tmp1654, &$s1656);
abort(); // unreachable
block9:;
frost$core$String$Index $tmp1657 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1650, ((frost$core$Int64) $tmp1651.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1657, true });
goto block7;
block8:;
// line 1
// line 900
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block7;
block7:;
// line 902
frost$core$String$Index$nullable $tmp1658 = *(&local0);
frost$core$String$Index$nullable $tmp1659 = *(&local1);
frost$core$Bit $tmp1660 = param1.inclusive;
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1661 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit($tmp1658, $tmp1659, $tmp1660);
frost$core$String* $tmp1662 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp1661);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
// unreffing REF($57:frost.core.String)
return $tmp1662;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 911
// line 912
frost$core$Int64$nullable $tmp1663 = param1.start;
frost$core$Bit $tmp1664 = frost$core$Bit$init$builtin_bit($tmp1663.nonnull);
bool $tmp1665 = $tmp1664.value;
if ($tmp1665) goto block1; else goto block3;
block1:;
// line 913
frost$core$String$Index $tmp1666 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1667 = param1.start;
frost$core$Bit $tmp1668 = frost$core$Bit$init$builtin_bit($tmp1667.nonnull);
bool $tmp1669 = $tmp1668.value;
if ($tmp1669) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1670 = (frost$core$Int64) {913};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1671, $tmp1670, &$s1672);
abort(); // unreachable
block4:;
frost$core$String$Index $tmp1673 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1666, ((frost$core$Int64) $tmp1667.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1673, true });
goto block2;
block3:;
// line 1
// line 916
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 918
// line 919
frost$core$Int64$nullable $tmp1674 = param1.end;
frost$core$Bit $tmp1675 = frost$core$Bit$init$builtin_bit($tmp1674.nonnull);
bool $tmp1676 = $tmp1675.value;
if ($tmp1676) goto block6; else goto block8;
block6:;
// line 920
frost$core$String$Index $tmp1677 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1678 = param1.end;
frost$core$Bit $tmp1679 = frost$core$Bit$init$builtin_bit($tmp1678.nonnull);
bool $tmp1680 = $tmp1679.value;
if ($tmp1680) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1681 = (frost$core$Int64) {920};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1682, $tmp1681, &$s1683);
abort(); // unreachable
block9:;
frost$core$String$Index $tmp1684 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1677, ((frost$core$Int64) $tmp1678.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1684, true });
goto block7;
block8:;
// line 1
// line 923
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block7;
block7:;
// line 925
frost$core$String$Index$nullable $tmp1685 = *(&local0);
frost$core$String$Index$nullable $tmp1686 = *(&local1);
frost$core$Int64 $tmp1687 = param1.step;
frost$core$Bit $tmp1688 = param1.inclusive;
frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT $tmp1689 = frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Int64$frost$core$Bit($tmp1685, $tmp1686, $tmp1687, $tmp1688);
frost$core$String* $tmp1690 = frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String(param0, $tmp1689);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
// unreffing REF($58:frost.core.String)
return $tmp1690;

}
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(frost$core$String* param0, frost$core$Char8 param1) {

frost$core$Int64 local0;
// line 932
frost$core$Int64 $tmp1691 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1692 = &param0->_length;
frost$core$Int64 $tmp1693 = *$tmp1692;
frost$core$Bit $tmp1694 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1695 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1691, $tmp1693, $tmp1694);
frost$core$Int64 $tmp1696 = $tmp1695.min;
*(&local0) = $tmp1696;
frost$core$Int64 $tmp1697 = $tmp1695.max;
frost$core$Bit $tmp1698 = $tmp1695.inclusive;
bool $tmp1699 = $tmp1698.value;
frost$core$Int64 $tmp1700 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1701 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1700);
if ($tmp1699) goto block4; else goto block5;
block4:;
int64_t $tmp1702 = $tmp1696.value;
int64_t $tmp1703 = $tmp1697.value;
bool $tmp1704 = $tmp1702 <= $tmp1703;
frost$core$Bit $tmp1705 = (frost$core$Bit) {$tmp1704};
bool $tmp1706 = $tmp1705.value;
if ($tmp1706) goto block1; else goto block2;
block5:;
int64_t $tmp1707 = $tmp1696.value;
int64_t $tmp1708 = $tmp1697.value;
bool $tmp1709 = $tmp1707 < $tmp1708;
frost$core$Bit $tmp1710 = (frost$core$Bit) {$tmp1709};
bool $tmp1711 = $tmp1710.value;
if ($tmp1711) goto block1; else goto block2;
block1:;
// line 933
frost$core$Char8** $tmp1712 = &param0->data;
frost$core$Char8* $tmp1713 = *$tmp1712;
frost$core$Int64 $tmp1714 = *(&local0);
int64_t $tmp1715 = $tmp1714.value;
frost$core$Char8 $tmp1716 = $tmp1713[$tmp1715];
frost$core$Bit $tmp1717 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp1716, param1);
bool $tmp1718 = $tmp1717.value;
if ($tmp1718) goto block6; else goto block7;
block6:;
// line 934
frost$core$Bit $tmp1719 = frost$core$Bit$init$builtin_bit(true);
return $tmp1719;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp1720 = *(&local0);
int64_t $tmp1721 = $tmp1697.value;
int64_t $tmp1722 = $tmp1720.value;
int64_t $tmp1723 = $tmp1721 - $tmp1722;
frost$core$Int64 $tmp1724 = (frost$core$Int64) {$tmp1723};
frost$core$UInt64 $tmp1725 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1724);
if ($tmp1699) goto block9; else goto block10;
block9:;
uint64_t $tmp1726 = $tmp1725.value;
uint64_t $tmp1727 = $tmp1701.value;
bool $tmp1728 = $tmp1726 >= $tmp1727;
frost$core$Bit $tmp1729 = (frost$core$Bit) {$tmp1728};
bool $tmp1730 = $tmp1729.value;
if ($tmp1730) goto block8; else goto block2;
block10:;
uint64_t $tmp1731 = $tmp1725.value;
uint64_t $tmp1732 = $tmp1701.value;
bool $tmp1733 = $tmp1731 > $tmp1732;
frost$core$Bit $tmp1734 = (frost$core$Bit) {$tmp1733};
bool $tmp1735 = $tmp1734.value;
if ($tmp1735) goto block8; else goto block2;
block8:;
int64_t $tmp1736 = $tmp1720.value;
int64_t $tmp1737 = $tmp1700.value;
int64_t $tmp1738 = $tmp1736 + $tmp1737;
frost$core$Int64 $tmp1739 = (frost$core$Int64) {$tmp1738};
*(&local0) = $tmp1739;
goto block1;
block2:;
// line 937
frost$core$Bit $tmp1740 = frost$core$Bit$init$builtin_bit(false);
return $tmp1740;

}
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

// line 944
frost$core$String$Index$nullable $tmp1741 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(param0, param1);
frost$core$Bit $tmp1742 = frost$core$Bit$init$builtin_bit($tmp1741.nonnull);
return $tmp1742;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 955
frost$core$String$Index $tmp1743 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1744 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1743);
return $tmp1744;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 967
frost$core$Int64* $tmp1745 = &param0->_length;
frost$core$Int64 $tmp1746 = *$tmp1745;
frost$core$Int64* $tmp1747 = &param1->_length;
frost$core$Int64 $tmp1748 = *$tmp1747;
int64_t $tmp1749 = $tmp1746.value;
int64_t $tmp1750 = $tmp1748.value;
bool $tmp1751 = $tmp1749 < $tmp1750;
frost$core$Bit $tmp1752 = (frost$core$Bit) {$tmp1751};
bool $tmp1753 = $tmp1752.value;
if ($tmp1753) goto block1; else goto block2;
block1:;
// line 968
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 970
frost$core$Int64 $tmp1754 = param2.value;
frost$core$Int64* $tmp1755 = &param0->_length;
frost$core$Int64 $tmp1756 = *$tmp1755;
frost$core$Int64* $tmp1757 = &param1->_length;
frost$core$Int64 $tmp1758 = *$tmp1757;
int64_t $tmp1759 = $tmp1756.value;
int64_t $tmp1760 = $tmp1758.value;
int64_t $tmp1761 = $tmp1759 - $tmp1760;
frost$core$Int64 $tmp1762 = (frost$core$Int64) {$tmp1761};
frost$core$Bit $tmp1763 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp1764 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1754, $tmp1762, $tmp1763);
frost$core$Int64 $tmp1765 = $tmp1764.min;
*(&local0) = $tmp1765;
frost$core$Int64 $tmp1766 = $tmp1764.max;
frost$core$Bit $tmp1767 = $tmp1764.inclusive;
bool $tmp1768 = $tmp1767.value;
frost$core$Int64 $tmp1769 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1770 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1769);
if ($tmp1768) goto block6; else goto block7;
block6:;
int64_t $tmp1771 = $tmp1765.value;
int64_t $tmp1772 = $tmp1766.value;
bool $tmp1773 = $tmp1771 <= $tmp1772;
frost$core$Bit $tmp1774 = (frost$core$Bit) {$tmp1773};
bool $tmp1775 = $tmp1774.value;
if ($tmp1775) goto block3; else goto block4;
block7:;
int64_t $tmp1776 = $tmp1765.value;
int64_t $tmp1777 = $tmp1766.value;
bool $tmp1778 = $tmp1776 < $tmp1777;
frost$core$Bit $tmp1779 = (frost$core$Bit) {$tmp1778};
bool $tmp1780 = $tmp1779.value;
if ($tmp1780) goto block3; else goto block4;
block3:;
// line 971
frost$core$Int64 $tmp1781 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1782 = &param1->_length;
frost$core$Int64 $tmp1783 = *$tmp1782;
frost$core$Bit $tmp1784 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1785 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1781, $tmp1783, $tmp1784);
frost$core$Int64 $tmp1786 = $tmp1785.min;
*(&local1) = $tmp1786;
frost$core$Int64 $tmp1787 = $tmp1785.max;
frost$core$Bit $tmp1788 = $tmp1785.inclusive;
bool $tmp1789 = $tmp1788.value;
frost$core$Int64 $tmp1790 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1791 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1790);
if ($tmp1789) goto block11; else goto block12;
block11:;
int64_t $tmp1792 = $tmp1786.value;
int64_t $tmp1793 = $tmp1787.value;
bool $tmp1794 = $tmp1792 <= $tmp1793;
frost$core$Bit $tmp1795 = (frost$core$Bit) {$tmp1794};
bool $tmp1796 = $tmp1795.value;
if ($tmp1796) goto block8; else goto block9;
block12:;
int64_t $tmp1797 = $tmp1786.value;
int64_t $tmp1798 = $tmp1787.value;
bool $tmp1799 = $tmp1797 < $tmp1798;
frost$core$Bit $tmp1800 = (frost$core$Bit) {$tmp1799};
bool $tmp1801 = $tmp1800.value;
if ($tmp1801) goto block8; else goto block9;
block8:;
// line 972
frost$core$Char8** $tmp1802 = &param0->data;
frost$core$Char8* $tmp1803 = *$tmp1802;
frost$core$Int64 $tmp1804 = *(&local0);
frost$core$Int64 $tmp1805 = *(&local1);
int64_t $tmp1806 = $tmp1804.value;
int64_t $tmp1807 = $tmp1805.value;
int64_t $tmp1808 = $tmp1806 + $tmp1807;
frost$core$Int64 $tmp1809 = (frost$core$Int64) {$tmp1808};
int64_t $tmp1810 = $tmp1809.value;
frost$core$Char8 $tmp1811 = $tmp1803[$tmp1810];
frost$core$Char8** $tmp1812 = &param1->data;
frost$core$Char8* $tmp1813 = *$tmp1812;
frost$core$Int64 $tmp1814 = *(&local1);
int64_t $tmp1815 = $tmp1814.value;
frost$core$Char8 $tmp1816 = $tmp1813[$tmp1815];
frost$core$Bit $tmp1817 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1811, $tmp1816);
bool $tmp1818 = $tmp1817.value;
if ($tmp1818) goto block13; else goto block14;
block13:;
// line 973
goto block5;
block14:;
goto block10;
block10:;
frost$core$Int64 $tmp1819 = *(&local1);
int64_t $tmp1820 = $tmp1787.value;
int64_t $tmp1821 = $tmp1819.value;
int64_t $tmp1822 = $tmp1820 - $tmp1821;
frost$core$Int64 $tmp1823 = (frost$core$Int64) {$tmp1822};
frost$core$UInt64 $tmp1824 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1823);
if ($tmp1789) goto block16; else goto block17;
block16:;
uint64_t $tmp1825 = $tmp1824.value;
uint64_t $tmp1826 = $tmp1791.value;
bool $tmp1827 = $tmp1825 >= $tmp1826;
frost$core$Bit $tmp1828 = (frost$core$Bit) {$tmp1827};
bool $tmp1829 = $tmp1828.value;
if ($tmp1829) goto block15; else goto block9;
block17:;
uint64_t $tmp1830 = $tmp1824.value;
uint64_t $tmp1831 = $tmp1791.value;
bool $tmp1832 = $tmp1830 > $tmp1831;
frost$core$Bit $tmp1833 = (frost$core$Bit) {$tmp1832};
bool $tmp1834 = $tmp1833.value;
if ($tmp1834) goto block15; else goto block9;
block15:;
int64_t $tmp1835 = $tmp1819.value;
int64_t $tmp1836 = $tmp1790.value;
int64_t $tmp1837 = $tmp1835 + $tmp1836;
frost$core$Int64 $tmp1838 = (frost$core$Int64) {$tmp1837};
*(&local1) = $tmp1838;
goto block8;
block9:;
// line 976
frost$core$Int64 $tmp1839 = *(&local0);
frost$core$String$Index $tmp1840 = frost$core$String$Index$init$frost$core$Int64($tmp1839);
frost$core$Bit $tmp1841 = frost$core$Bit$init$builtin_bit(((frost$core$String$Index$nullable) { $tmp1840, true }).nonnull);
bool $tmp1842 = $tmp1841.value;
if ($tmp1842) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1843 = (frost$core$Int64) {1};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1844, $tmp1843, &$s1845);
abort(); // unreachable
block18:;
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp1840, true }).value), true });
block5:;
frost$core$Int64 $tmp1846 = *(&local0);
int64_t $tmp1847 = $tmp1766.value;
int64_t $tmp1848 = $tmp1846.value;
int64_t $tmp1849 = $tmp1847 - $tmp1848;
frost$core$Int64 $tmp1850 = (frost$core$Int64) {$tmp1849};
frost$core$UInt64 $tmp1851 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1850);
if ($tmp1768) goto block21; else goto block22;
block21:;
uint64_t $tmp1852 = $tmp1851.value;
uint64_t $tmp1853 = $tmp1770.value;
bool $tmp1854 = $tmp1852 >= $tmp1853;
frost$core$Bit $tmp1855 = (frost$core$Bit) {$tmp1854};
bool $tmp1856 = $tmp1855.value;
if ($tmp1856) goto block20; else goto block4;
block22:;
uint64_t $tmp1857 = $tmp1851.value;
uint64_t $tmp1858 = $tmp1770.value;
bool $tmp1859 = $tmp1857 > $tmp1858;
frost$core$Bit $tmp1860 = (frost$core$Bit) {$tmp1859};
bool $tmp1861 = $tmp1860.value;
if ($tmp1861) goto block20; else goto block4;
block20:;
int64_t $tmp1862 = $tmp1846.value;
int64_t $tmp1863 = $tmp1769.value;
int64_t $tmp1864 = $tmp1862 + $tmp1863;
frost$core$Int64 $tmp1865 = (frost$core$Int64) {$tmp1864};
*(&local0) = $tmp1865;
goto block3;
block4:;
// line 978
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 989
frost$core$String$Index $tmp1866 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1867 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1866);
return $tmp1867;

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1001
frost$core$Int64* $tmp1868 = &param0->_length;
frost$core$Int64 $tmp1869 = *$tmp1868;
frost$core$Int64* $tmp1870 = &param1->_length;
frost$core$Int64 $tmp1871 = *$tmp1870;
int64_t $tmp1872 = $tmp1869.value;
int64_t $tmp1873 = $tmp1871.value;
bool $tmp1874 = $tmp1872 < $tmp1873;
frost$core$Bit $tmp1875 = (frost$core$Bit) {$tmp1874};
bool $tmp1876 = $tmp1875.value;
if ($tmp1876) goto block1; else goto block2;
block1:;
// line 1002
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 1004
frost$core$Int64 $tmp1877 = param2.value;
frost$core$Int64* $tmp1878 = &param0->_length;
frost$core$Int64 $tmp1879 = *$tmp1878;
frost$core$Int64* $tmp1880 = &param1->_length;
frost$core$Int64 $tmp1881 = *$tmp1880;
int64_t $tmp1882 = $tmp1879.value;
int64_t $tmp1883 = $tmp1881.value;
int64_t $tmp1884 = $tmp1882 - $tmp1883;
frost$core$Int64 $tmp1885 = (frost$core$Int64) {$tmp1884};
frost$core$Int64 $tmp1886 = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64($tmp1877, $tmp1885);
*(&local0) = $tmp1886;
// line 1005
frost$core$Int64 $tmp1887 = *(&local0);
frost$core$Int64 $tmp1888 = (frost$core$Int64) {0};
frost$core$Int64 $tmp1889 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1890 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1891 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1887, $tmp1888, $tmp1889, $tmp1890);
frost$core$Int64 $tmp1892 = $tmp1891.start;
*(&local1) = $tmp1892;
frost$core$Int64 $tmp1893 = $tmp1891.end;
frost$core$Int64 $tmp1894 = $tmp1891.step;
frost$core$UInt64 $tmp1895 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1894);
frost$core$Int64 $tmp1896 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1894);
frost$core$UInt64 $tmp1897 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1896);
frost$core$Bit $tmp1898 = $tmp1891.inclusive;
bool $tmp1899 = $tmp1898.value;
frost$core$Int64 $tmp1900 = (frost$core$Int64) {0};
int64_t $tmp1901 = $tmp1894.value;
int64_t $tmp1902 = $tmp1900.value;
bool $tmp1903 = $tmp1901 >= $tmp1902;
frost$core$Bit $tmp1904 = (frost$core$Bit) {$tmp1903};
bool $tmp1905 = $tmp1904.value;
if ($tmp1905) goto block6; else goto block7;
block6:;
if ($tmp1899) goto block8; else goto block9;
block8:;
int64_t $tmp1906 = $tmp1892.value;
int64_t $tmp1907 = $tmp1893.value;
bool $tmp1908 = $tmp1906 <= $tmp1907;
frost$core$Bit $tmp1909 = (frost$core$Bit) {$tmp1908};
bool $tmp1910 = $tmp1909.value;
if ($tmp1910) goto block3; else goto block4;
block9:;
int64_t $tmp1911 = $tmp1892.value;
int64_t $tmp1912 = $tmp1893.value;
bool $tmp1913 = $tmp1911 < $tmp1912;
frost$core$Bit $tmp1914 = (frost$core$Bit) {$tmp1913};
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block3; else goto block4;
block7:;
if ($tmp1899) goto block10; else goto block11;
block10:;
int64_t $tmp1916 = $tmp1892.value;
int64_t $tmp1917 = $tmp1893.value;
bool $tmp1918 = $tmp1916 >= $tmp1917;
frost$core$Bit $tmp1919 = (frost$core$Bit) {$tmp1918};
bool $tmp1920 = $tmp1919.value;
if ($tmp1920) goto block3; else goto block4;
block11:;
int64_t $tmp1921 = $tmp1892.value;
int64_t $tmp1922 = $tmp1893.value;
bool $tmp1923 = $tmp1921 > $tmp1922;
frost$core$Bit $tmp1924 = (frost$core$Bit) {$tmp1923};
bool $tmp1925 = $tmp1924.value;
if ($tmp1925) goto block3; else goto block4;
block3:;
// line 1006
frost$core$Int64 $tmp1926 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1927 = &param1->_length;
frost$core$Int64 $tmp1928 = *$tmp1927;
frost$core$Bit $tmp1929 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1930 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1926, $tmp1928, $tmp1929);
frost$core$Int64 $tmp1931 = $tmp1930.min;
*(&local2) = $tmp1931;
frost$core$Int64 $tmp1932 = $tmp1930.max;
frost$core$Bit $tmp1933 = $tmp1930.inclusive;
bool $tmp1934 = $tmp1933.value;
frost$core$Int64 $tmp1935 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1936 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1935);
if ($tmp1934) goto block15; else goto block16;
block15:;
int64_t $tmp1937 = $tmp1931.value;
int64_t $tmp1938 = $tmp1932.value;
bool $tmp1939 = $tmp1937 <= $tmp1938;
frost$core$Bit $tmp1940 = (frost$core$Bit) {$tmp1939};
bool $tmp1941 = $tmp1940.value;
if ($tmp1941) goto block12; else goto block13;
block16:;
int64_t $tmp1942 = $tmp1931.value;
int64_t $tmp1943 = $tmp1932.value;
bool $tmp1944 = $tmp1942 < $tmp1943;
frost$core$Bit $tmp1945 = (frost$core$Bit) {$tmp1944};
bool $tmp1946 = $tmp1945.value;
if ($tmp1946) goto block12; else goto block13;
block12:;
// line 1007
frost$core$Char8** $tmp1947 = &param0->data;
frost$core$Char8* $tmp1948 = *$tmp1947;
frost$core$Int64 $tmp1949 = *(&local1);
frost$core$Int64 $tmp1950 = *(&local2);
int64_t $tmp1951 = $tmp1949.value;
int64_t $tmp1952 = $tmp1950.value;
int64_t $tmp1953 = $tmp1951 + $tmp1952;
frost$core$Int64 $tmp1954 = (frost$core$Int64) {$tmp1953};
int64_t $tmp1955 = $tmp1954.value;
frost$core$Char8 $tmp1956 = $tmp1948[$tmp1955];
frost$core$Char8** $tmp1957 = &param1->data;
frost$core$Char8* $tmp1958 = *$tmp1957;
frost$core$Int64 $tmp1959 = *(&local2);
int64_t $tmp1960 = $tmp1959.value;
frost$core$Char8 $tmp1961 = $tmp1958[$tmp1960];
frost$core$Bit $tmp1962 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1956, $tmp1961);
bool $tmp1963 = $tmp1962.value;
if ($tmp1963) goto block17; else goto block18;
block17:;
// line 1008
goto block5;
block18:;
goto block14;
block14:;
frost$core$Int64 $tmp1964 = *(&local2);
int64_t $tmp1965 = $tmp1932.value;
int64_t $tmp1966 = $tmp1964.value;
int64_t $tmp1967 = $tmp1965 - $tmp1966;
frost$core$Int64 $tmp1968 = (frost$core$Int64) {$tmp1967};
frost$core$UInt64 $tmp1969 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1968);
if ($tmp1934) goto block20; else goto block21;
block20:;
uint64_t $tmp1970 = $tmp1969.value;
uint64_t $tmp1971 = $tmp1936.value;
bool $tmp1972 = $tmp1970 >= $tmp1971;
frost$core$Bit $tmp1973 = (frost$core$Bit) {$tmp1972};
bool $tmp1974 = $tmp1973.value;
if ($tmp1974) goto block19; else goto block13;
block21:;
uint64_t $tmp1975 = $tmp1969.value;
uint64_t $tmp1976 = $tmp1936.value;
bool $tmp1977 = $tmp1975 > $tmp1976;
frost$core$Bit $tmp1978 = (frost$core$Bit) {$tmp1977};
bool $tmp1979 = $tmp1978.value;
if ($tmp1979) goto block19; else goto block13;
block19:;
int64_t $tmp1980 = $tmp1964.value;
int64_t $tmp1981 = $tmp1935.value;
int64_t $tmp1982 = $tmp1980 + $tmp1981;
frost$core$Int64 $tmp1983 = (frost$core$Int64) {$tmp1982};
*(&local2) = $tmp1983;
goto block12;
block13:;
// line 1011
frost$core$Int64 $tmp1984 = *(&local1);
frost$core$String$Index $tmp1985 = frost$core$String$Index$init$frost$core$Int64($tmp1984);
frost$core$Bit $tmp1986 = frost$core$Bit$init$builtin_bit(((frost$core$String$Index$nullable) { $tmp1985, true }).nonnull);
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp1988 = (frost$core$Int64) {1};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1989, $tmp1988, &$s1990);
abort(); // unreachable
block22:;
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp1985, true }).value), true });
block5:;
frost$core$Int64 $tmp1991 = *(&local1);
if ($tmp1905) goto block25; else goto block26;
block25:;
int64_t $tmp1992 = $tmp1893.value;
int64_t $tmp1993 = $tmp1991.value;
int64_t $tmp1994 = $tmp1992 - $tmp1993;
frost$core$Int64 $tmp1995 = (frost$core$Int64) {$tmp1994};
frost$core$UInt64 $tmp1996 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1995);
if ($tmp1899) goto block27; else goto block28;
block27:;
uint64_t $tmp1997 = $tmp1996.value;
uint64_t $tmp1998 = $tmp1895.value;
bool $tmp1999 = $tmp1997 >= $tmp1998;
frost$core$Bit $tmp2000 = (frost$core$Bit) {$tmp1999};
bool $tmp2001 = $tmp2000.value;
if ($tmp2001) goto block24; else goto block4;
block28:;
uint64_t $tmp2002 = $tmp1996.value;
uint64_t $tmp2003 = $tmp1895.value;
bool $tmp2004 = $tmp2002 > $tmp2003;
frost$core$Bit $tmp2005 = (frost$core$Bit) {$tmp2004};
bool $tmp2006 = $tmp2005.value;
if ($tmp2006) goto block24; else goto block4;
block26:;
int64_t $tmp2007 = $tmp1991.value;
int64_t $tmp2008 = $tmp1893.value;
int64_t $tmp2009 = $tmp2007 - $tmp2008;
frost$core$Int64 $tmp2010 = (frost$core$Int64) {$tmp2009};
frost$core$UInt64 $tmp2011 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2010);
if ($tmp1899) goto block29; else goto block30;
block29:;
uint64_t $tmp2012 = $tmp2011.value;
uint64_t $tmp2013 = $tmp1897.value;
bool $tmp2014 = $tmp2012 >= $tmp2013;
frost$core$Bit $tmp2015 = (frost$core$Bit) {$tmp2014};
bool $tmp2016 = $tmp2015.value;
if ($tmp2016) goto block24; else goto block4;
block30:;
uint64_t $tmp2017 = $tmp2011.value;
uint64_t $tmp2018 = $tmp1897.value;
bool $tmp2019 = $tmp2017 > $tmp2018;
frost$core$Bit $tmp2020 = (frost$core$Bit) {$tmp2019};
bool $tmp2021 = $tmp2020.value;
if ($tmp2021) goto block24; else goto block4;
block24:;
int64_t $tmp2022 = $tmp1991.value;
int64_t $tmp2023 = $tmp1894.value;
int64_t $tmp2024 = $tmp2022 + $tmp2023;
frost$core$Int64 $tmp2025 = (frost$core$Int64) {$tmp2024};
*(&local1) = $tmp2025;
goto block3;
block4:;
// line 1013
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1024
frost$core$Matcher* $tmp2026 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2027;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2027, $tmp2026);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
// unreffing REF($1:frost.core.Matcher)
return $tmp2027;

}
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1035
frost$core$Matcher* $tmp2028 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2029 = frost$core$Matcher$find$R$frost$core$Bit($tmp2028);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2028));
// unreffing REF($1:frost.core.Matcher)
return $tmp2029;

}
frost$collections$ListView* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q(frost$core$String* param0, frost$core$RegularExpression* param1) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
// line 1049
frost$core$Matcher* $tmp2030 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
frost$core$Matcher* $tmp2031 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local0) = $tmp2030;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
// unreffing REF($1:frost.core.Matcher)
// line 1050
frost$core$Matcher* $tmp2032 = *(&local0);
frost$core$Bit $tmp2033;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2033, $tmp2032);
bool $tmp2034 = $tmp2033.value;
if ($tmp2034) goto block1; else goto block2;
block1:;
// line 1051
frost$collections$Array* $tmp2035 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2035);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
frost$collections$Array* $tmp2036 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
*(&local1) = $tmp2035;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
// unreffing REF($18:frost.collections.Array<frost.core.String>)
// line 1052
frost$core$Int64 $tmp2037 = (frost$core$Int64) {1};
frost$core$Matcher* $tmp2038 = *(&local0);
frost$core$Int64 $tmp2039;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2039, $tmp2038);
frost$core$Bit $tmp2040 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2041 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2037, $tmp2039, $tmp2040);
frost$core$Int64 $tmp2042 = $tmp2041.min;
*(&local2) = $tmp2042;
frost$core$Int64 $tmp2043 = $tmp2041.max;
frost$core$Bit $tmp2044 = $tmp2041.inclusive;
bool $tmp2045 = $tmp2044.value;
frost$core$Int64 $tmp2046 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2047 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2046);
if ($tmp2045) goto block6; else goto block7;
block6:;
int64_t $tmp2048 = $tmp2042.value;
int64_t $tmp2049 = $tmp2043.value;
bool $tmp2050 = $tmp2048 <= $tmp2049;
frost$core$Bit $tmp2051 = (frost$core$Bit) {$tmp2050};
bool $tmp2052 = $tmp2051.value;
if ($tmp2052) goto block3; else goto block4;
block7:;
int64_t $tmp2053 = $tmp2042.value;
int64_t $tmp2054 = $tmp2043.value;
bool $tmp2055 = $tmp2053 < $tmp2054;
frost$core$Bit $tmp2056 = (frost$core$Bit) {$tmp2055};
bool $tmp2057 = $tmp2056.value;
if ($tmp2057) goto block3; else goto block4;
block3:;
// line 1053
frost$collections$Array* $tmp2058 = *(&local1);
frost$core$Matcher* $tmp2059 = *(&local0);
frost$core$Int64 $tmp2060 = *(&local2);
frost$core$String* $tmp2061 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2059, $tmp2060);
frost$core$Bit $tmp2062 = frost$core$Bit$init$builtin_bit($tmp2061 != NULL);
bool $tmp2063 = $tmp2062.value;
if ($tmp2063) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp2064 = (frost$core$Int64) {1053};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2065, $tmp2064, &$s2066);
abort(); // unreachable
block8:;
frost$collections$Array$add$frost$collections$Array$T($tmp2058, ((frost$core$Object*) $tmp2061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
// unreffing REF($62:frost.core.String?)
goto block5;
block5:;
frost$core$Int64 $tmp2067 = *(&local2);
int64_t $tmp2068 = $tmp2043.value;
int64_t $tmp2069 = $tmp2067.value;
int64_t $tmp2070 = $tmp2068 - $tmp2069;
frost$core$Int64 $tmp2071 = (frost$core$Int64) {$tmp2070};
frost$core$UInt64 $tmp2072 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2071);
if ($tmp2045) goto block11; else goto block12;
block11:;
uint64_t $tmp2073 = $tmp2072.value;
uint64_t $tmp2074 = $tmp2047.value;
bool $tmp2075 = $tmp2073 >= $tmp2074;
frost$core$Bit $tmp2076 = (frost$core$Bit) {$tmp2075};
bool $tmp2077 = $tmp2076.value;
if ($tmp2077) goto block10; else goto block4;
block12:;
uint64_t $tmp2078 = $tmp2072.value;
uint64_t $tmp2079 = $tmp2047.value;
bool $tmp2080 = $tmp2078 > $tmp2079;
frost$core$Bit $tmp2081 = (frost$core$Bit) {$tmp2080};
bool $tmp2082 = $tmp2081.value;
if ($tmp2082) goto block10; else goto block4;
block10:;
int64_t $tmp2083 = $tmp2067.value;
int64_t $tmp2084 = $tmp2046.value;
int64_t $tmp2085 = $tmp2083 + $tmp2084;
frost$core$Int64 $tmp2086 = (frost$core$Int64) {$tmp2085};
*(&local2) = $tmp2086;
goto block3;
block4:;
// line 1055
frost$collections$Array* $tmp2087 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2087)));
frost$collections$Array* $tmp2088 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp2089 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2089));
// unreffing matcher
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) $tmp2087);
block2:;
// line 1057
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp2090 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
// unreffing matcher
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) NULL);

}
frost$core$String* frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
// line 1068
frost$core$Bit $tmp2091 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s2092);
bool $tmp2093 = $tmp2091.value;
if ($tmp2093) goto block1; else goto block2;
block1:;
// line 1069
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1071
frost$core$MutableString* $tmp2094 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2094);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
frost$core$MutableString* $tmp2095 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
*(&local0) = $tmp2094;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
// unreffing REF($9:frost.core.MutableString)
// line 1072
frost$core$String$Index $tmp2096 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2096;
// line 1073
goto block3;
block3:;
// line 1074
frost$core$String$Index $tmp2097 = *(&local1);
frost$core$String$Index$nullable $tmp2098 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2097);
*(&local2) = $tmp2098;
// line 1075
frost$core$String$Index$nullable $tmp2099 = *(&local2);
frost$core$Bit $tmp2100 = frost$core$Bit$init$builtin_bit(!$tmp2099.nonnull);
bool $tmp2101 = $tmp2100.value;
if ($tmp2101) goto block5; else goto block6;
block5:;
// line 1076
frost$core$MutableString* $tmp2102 = *(&local0);
frost$core$String$Index $tmp2103 = *(&local1);
frost$core$Bit $tmp2104 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2105 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2103, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2104);
frost$core$String* $tmp2106 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2105);
frost$core$MutableString$append$frost$core$String($tmp2102, $tmp2106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
// unreffing REF($42:frost.core.String)
// line 1077
goto block4;
block6:;
// line 1079
frost$core$MutableString* $tmp2107 = *(&local0);
frost$core$String$Index $tmp2108 = *(&local1);
frost$core$String$Index$nullable $tmp2109 = *(&local2);
frost$core$Bit $tmp2110 = frost$core$Bit$init$builtin_bit($tmp2109.nonnull);
bool $tmp2111 = $tmp2110.value;
if ($tmp2111) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp2112 = (frost$core$Int64) {1079};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2113, $tmp2112, &$s2114);
abort(); // unreachable
block7:;
frost$core$Bit $tmp2115 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2116 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2108, ((frost$core$String$Index) $tmp2109.value), $tmp2115);
frost$core$String* $tmp2117 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2116);
frost$core$MutableString$append$frost$core$String($tmp2107, $tmp2117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
// unreffing REF($63:frost.core.String)
// line 1080
frost$core$MutableString* $tmp2118 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp2118, param2);
// line 1081
frost$core$String$Index$nullable $tmp2119 = *(&local2);
frost$core$Bit $tmp2120 = frost$core$Bit$init$builtin_bit($tmp2119.nonnull);
bool $tmp2121 = $tmp2120.value;
if ($tmp2121) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp2122 = (frost$core$Int64) {1081};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2123, $tmp2122, &$s2124);
abort(); // unreachable
block9:;
frost$core$Int64 $tmp2125 = ((frost$core$String$Index) $tmp2119.value).value;
frost$core$Int64* $tmp2126 = &param1->_length;
frost$core$Int64 $tmp2127 = *$tmp2126;
int64_t $tmp2128 = $tmp2125.value;
int64_t $tmp2129 = $tmp2127.value;
int64_t $tmp2130 = $tmp2128 + $tmp2129;
frost$core$Int64 $tmp2131 = (frost$core$Int64) {$tmp2130};
frost$core$String$Index $tmp2132 = frost$core$String$Index$init$frost$core$Int64($tmp2131);
*(&local1) = $tmp2132;
goto block3;
block4:;
// line 1083
frost$core$MutableString* $tmp2133 = *(&local0);
frost$core$String* $tmp2134 = frost$core$MutableString$finish$R$frost$core$String($tmp2133);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
// unreffing REF($93:frost.core.String)
frost$core$MutableString* $tmp2135 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2134;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

// line 1097
frost$core$Bit $tmp2136 = frost$core$Bit$init$builtin_bit(true);
frost$core$String* $tmp2137 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param0, param1, param2, $tmp2136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
// unreffing REF($2:frost.core.String)
return $tmp2137;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// line 1102
frost$core$MutableString* $tmp2138 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2138);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
frost$core$MutableString* $tmp2139 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
*(&local0) = $tmp2138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
// unreffing REF($1:frost.core.MutableString)
// line 1103
frost$core$Matcher* $tmp2140 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
frost$core$Matcher* $tmp2141 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
*(&local1) = $tmp2140;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
// unreffing REF($14:frost.core.Matcher)
// line 1104
goto block1;
block1:;
frost$core$Matcher* $tmp2142 = *(&local1);
frost$core$Bit $tmp2143 = frost$core$Matcher$find$R$frost$core$Bit($tmp2142);
bool $tmp2144 = $tmp2143.value;
if ($tmp2144) goto block2; else goto block3;
block2:;
// line 1105
frost$core$Matcher* $tmp2145 = *(&local1);
frost$core$MutableString* $tmp2146 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2145, $tmp2146, param2, param3);
goto block1;
block3:;
// line 1107
frost$core$Matcher* $tmp2147 = *(&local1);
frost$core$MutableString* $tmp2148 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2147, $tmp2148);
// line 1108
frost$core$MutableString* $tmp2149 = *(&local0);
frost$core$String* $tmp2150 = frost$core$MutableString$finish$R$frost$core$String($tmp2149);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
// unreffing REF($42:frost.core.String)
frost$core$Matcher* $tmp2151 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2152 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2150;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 1129
frost$core$MutableString* $tmp2153 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2153);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
frost$core$MutableString* $tmp2154 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
*(&local0) = $tmp2153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
// unreffing REF($1:frost.core.MutableString)
// line 1130
frost$core$Matcher* $tmp2155 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
frost$core$Matcher* $tmp2156 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
*(&local1) = $tmp2155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
// unreffing REF($14:frost.core.Matcher)
// line 1131
goto block1;
block1:;
frost$core$Matcher* $tmp2157 = *(&local1);
frost$core$Bit $tmp2158 = frost$core$Matcher$find$R$frost$core$Bit($tmp2157);
bool $tmp2159 = $tmp2158.value;
if ($tmp2159) goto block2; else goto block3;
block2:;
// line 1132
frost$core$Matcher* $tmp2160 = *(&local1);
frost$core$MutableString* $tmp2161 = *(&local0);
frost$core$Matcher* $tmp2162 = *(&local1);
frost$core$Int64 $tmp2163 = (frost$core$Int64) {0};
frost$core$String* $tmp2164 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2162, $tmp2163);
frost$core$Bit $tmp2165 = frost$core$Bit$init$builtin_bit($tmp2164 != NULL);
bool $tmp2166 = $tmp2165.value;
if ($tmp2166) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2167 = (frost$core$Int64) {1132};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2168, $tmp2167, &$s2169);
abort(); // unreachable
block4:;
frost$core$Int8** $tmp2170 = &param2->pointer;
frost$core$Int8* $tmp2171 = *$tmp2170;
frost$core$Object** $tmp2172 = &param2->target;
frost$core$Object* $tmp2173 = *$tmp2172;
bool $tmp2174 = $tmp2173 != ((frost$core$Object*) NULL);
if ($tmp2174) goto block6; else goto block7;
block7:;
frost$core$Object* $tmp2176 = (($fn2175) $tmp2171)($tmp2164);
*(&local2) = $tmp2176;
goto block8;
block6:;
frost$core$Object* $tmp2178 = (($fn2177) $tmp2171)($tmp2173, $tmp2164);
*(&local2) = $tmp2178;
goto block8;
block8:;
frost$core$Object* $tmp2179 = *(&local2);
$fn2181 $tmp2180 = ($fn2181) $tmp2179->$class->vtable[0];
frost$core$String* $tmp2182 = $tmp2180($tmp2179);
frost$core$Bit $tmp2183 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2160, $tmp2161, $tmp2182, $tmp2183);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
// unreffing REF($62:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2179);
// unreffing REF($60:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
// unreffing REF($36:frost.core.String?)
goto block1;
block3:;
// line 1134
frost$core$Matcher* $tmp2184 = *(&local1);
frost$core$MutableString* $tmp2185 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2184, $tmp2185);
// line 1135
frost$core$MutableString* $tmp2186 = *(&local0);
frost$core$String* $tmp2187 = frost$core$MutableString$convert$R$frost$core$String($tmp2186);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
// unreffing REF($81:frost.core.String)
frost$core$Matcher* $tmp2188 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2187;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
frost$core$Object* local4 = NULL;
// line 1149
frost$core$MutableString* $tmp2190 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2190);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
frost$core$MutableString* $tmp2191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
*(&local0) = $tmp2190;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
// unreffing REF($1:frost.core.MutableString)
// line 1150
frost$core$Matcher* $tmp2192 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
frost$core$Matcher* $tmp2193 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
*(&local1) = $tmp2192;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
// unreffing REF($14:frost.core.Matcher)
// line 1151
goto block1;
block1:;
frost$core$Matcher* $tmp2194 = *(&local1);
frost$core$Bit $tmp2195 = frost$core$Matcher$find$R$frost$core$Bit($tmp2194);
bool $tmp2196 = $tmp2195.value;
if ($tmp2196) goto block2; else goto block3;
block2:;
// line 1152
frost$collections$Array* $tmp2197 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2197);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
frost$collections$Array* $tmp2198 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
*(&local2) = $tmp2197;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
// unreffing REF($32:frost.collections.Array<frost.core.String?>)
// line 1153
frost$core$Int64 $tmp2199 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp2200 = *(&local1);
frost$core$Int64 $tmp2201;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2201, $tmp2200);
frost$core$Bit $tmp2202 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2203 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2199, $tmp2201, $tmp2202);
frost$core$Int64 $tmp2204 = $tmp2203.min;
*(&local3) = $tmp2204;
frost$core$Int64 $tmp2205 = $tmp2203.max;
frost$core$Bit $tmp2206 = $tmp2203.inclusive;
bool $tmp2207 = $tmp2206.value;
frost$core$Int64 $tmp2208 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2209 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2208);
if ($tmp2207) goto block7; else goto block8;
block7:;
int64_t $tmp2210 = $tmp2204.value;
int64_t $tmp2211 = $tmp2205.value;
bool $tmp2212 = $tmp2210 <= $tmp2211;
frost$core$Bit $tmp2213 = (frost$core$Bit) {$tmp2212};
bool $tmp2214 = $tmp2213.value;
if ($tmp2214) goto block4; else goto block5;
block8:;
int64_t $tmp2215 = $tmp2204.value;
int64_t $tmp2216 = $tmp2205.value;
bool $tmp2217 = $tmp2215 < $tmp2216;
frost$core$Bit $tmp2218 = (frost$core$Bit) {$tmp2217};
bool $tmp2219 = $tmp2218.value;
if ($tmp2219) goto block4; else goto block5;
block4:;
// line 1154
frost$collections$Array* $tmp2220 = *(&local2);
frost$core$Matcher* $tmp2221 = *(&local1);
frost$core$Int64 $tmp2222 = *(&local3);
frost$core$String* $tmp2223 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2221, $tmp2222);
frost$collections$Array$add$frost$collections$Array$T($tmp2220, ((frost$core$Object*) $tmp2223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
// unreffing REF($76:frost.core.String?)
goto block6;
block6:;
frost$core$Int64 $tmp2224 = *(&local3);
int64_t $tmp2225 = $tmp2205.value;
int64_t $tmp2226 = $tmp2224.value;
int64_t $tmp2227 = $tmp2225 - $tmp2226;
frost$core$Int64 $tmp2228 = (frost$core$Int64) {$tmp2227};
frost$core$UInt64 $tmp2229 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2228);
if ($tmp2207) goto block10; else goto block11;
block10:;
uint64_t $tmp2230 = $tmp2229.value;
uint64_t $tmp2231 = $tmp2209.value;
bool $tmp2232 = $tmp2230 >= $tmp2231;
frost$core$Bit $tmp2233 = (frost$core$Bit) {$tmp2232};
bool $tmp2234 = $tmp2233.value;
if ($tmp2234) goto block9; else goto block5;
block11:;
uint64_t $tmp2235 = $tmp2229.value;
uint64_t $tmp2236 = $tmp2209.value;
bool $tmp2237 = $tmp2235 > $tmp2236;
frost$core$Bit $tmp2238 = (frost$core$Bit) {$tmp2237};
bool $tmp2239 = $tmp2238.value;
if ($tmp2239) goto block9; else goto block5;
block9:;
int64_t $tmp2240 = $tmp2224.value;
int64_t $tmp2241 = $tmp2208.value;
int64_t $tmp2242 = $tmp2240 + $tmp2241;
frost$core$Int64 $tmp2243 = (frost$core$Int64) {$tmp2242};
*(&local3) = $tmp2243;
goto block4;
block5:;
// line 1156
frost$core$Matcher* $tmp2244 = *(&local1);
frost$core$MutableString* $tmp2245 = *(&local0);
frost$collections$Array* $tmp2246 = *(&local2);
frost$core$Int8** $tmp2247 = &param2->pointer;
frost$core$Int8* $tmp2248 = *$tmp2247;
frost$core$Object** $tmp2249 = &param2->target;
frost$core$Object* $tmp2250 = *$tmp2249;
bool $tmp2251 = $tmp2250 != ((frost$core$Object*) NULL);
if ($tmp2251) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp2253 = (($fn2252) $tmp2248)(((frost$collections$ListView*) $tmp2246));
*(&local4) = $tmp2253;
goto block14;
block12:;
frost$core$Object* $tmp2255 = (($fn2254) $tmp2248)($tmp2250, ((frost$collections$ListView*) $tmp2246));
*(&local4) = $tmp2255;
goto block14;
block14:;
frost$core$Object* $tmp2256 = *(&local4);
$fn2258 $tmp2257 = ($fn2258) $tmp2256->$class->vtable[0];
frost$core$String* $tmp2259 = $tmp2257($tmp2256);
frost$core$Bit $tmp2260 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2244, $tmp2245, $tmp2259, $tmp2260);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
// unreffing REF($130:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2256);
// unreffing REF($128:frost.core.Object)
frost$collections$Array* $tmp2261 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
// unreffing groups
*(&local2) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// line 1158
frost$core$Matcher* $tmp2262 = *(&local1);
frost$core$MutableString* $tmp2263 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2262, $tmp2263);
// line 1159
frost$core$MutableString* $tmp2264 = *(&local0);
frost$core$String* $tmp2265 = frost$core$MutableString$convert$R$frost$core$String($tmp2264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
// unreffing REF($151:frost.core.String)
frost$core$Matcher* $tmp2266 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2267 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2265;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1163
frost$core$Bit $tmp2268 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2269 = frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(param0, param1, $tmp2268);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
// unreffing REF($2:frost.collections.Iterator<frost.core.String.Index>)
return $tmp2269;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Bit param2) {

// line 1167
frost$core$String$MatchIterator* $tmp2270 = (frost$core$String$MatchIterator*) frostObjectAlloc(46, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp2270, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2270)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
// unreffing REF($1:frost.core.String.MatchIterator)
return ((frost$collections$Iterator*) $tmp2270);

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1171
frost$core$Bit $tmp2271 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2272 = frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(param0, param1, $tmp2271);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
// unreffing REF($2:frost.collections.Iterator<frost.core.String.Match>)
return $tmp2272;

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Bit param2) {

// line 1175
frost$core$String$RegexMatchIterator* $tmp2273 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(34, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit($tmp2273, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2273)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
// unreffing REF($1:frost.core.String.RegexMatchIterator)
return ((frost$collections$Iterator*) $tmp2273);

}
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(frost$core$String* param0) {

// line 1182
frost$core$Int64 $tmp2274 = (frost$core$Int64) {0};
frost$core$String$Index $tmp2275 = frost$core$String$Index$init$frost$core$Int64($tmp2274);
return $tmp2275;

}
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(frost$core$String* param0) {

// line 1189
frost$core$Int64* $tmp2276 = &param0->_length;
frost$core$Int64 $tmp2277 = *$tmp2276;
frost$core$String$Index $tmp2278 = frost$core$String$Index$init$frost$core$Int64($tmp2277);
return $tmp2278;

}
frost$core$String$Index frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

int64_t local0;
// line 1199
frost$core$Int64 $tmp2279 = param1.value;
frost$core$Int64* $tmp2280 = &param0->_length;
frost$core$Int64 $tmp2281 = *$tmp2280;
int64_t $tmp2282 = $tmp2279.value;
int64_t $tmp2283 = $tmp2281.value;
bool $tmp2284 = $tmp2282 < $tmp2283;
frost$core$Bit $tmp2285 = (frost$core$Bit) {$tmp2284};
bool $tmp2286 = $tmp2285.value;
if ($tmp2286) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2287 = (frost$core$Int64) {1199};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2288, $tmp2287);
abort(); // unreachable
block1:;
// line 1200
frost$core$Char8** $tmp2289 = &param0->data;
frost$core$Char8* $tmp2290 = *$tmp2289;
frost$core$Int64 $tmp2291 = param1.value;
int64_t $tmp2292 = $tmp2291.value;
frost$core$Char8 $tmp2293 = $tmp2290[$tmp2292];
uint8_t $tmp2294 = $tmp2293.value;
int64_t $tmp2295 = ((int64_t) $tmp2294) & 255;
*(&local0) = $tmp2295;
// line 1201
int64_t $tmp2296 = *(&local0);
bool $tmp2297 = $tmp2296 >= 240;
frost$core$Bit $tmp2298 = frost$core$Bit$init$builtin_bit($tmp2297);
bool $tmp2299 = $tmp2298.value;
if ($tmp2299) goto block3; else goto block4;
block3:;
// line 1202
frost$core$Int64 $tmp2300 = param1.value;
frost$core$Int64 $tmp2301 = (frost$core$Int64) {4};
int64_t $tmp2302 = $tmp2300.value;
int64_t $tmp2303 = $tmp2301.value;
int64_t $tmp2304 = $tmp2302 + $tmp2303;
frost$core$Int64 $tmp2305 = (frost$core$Int64) {$tmp2304};
frost$core$String$Index $tmp2306 = frost$core$String$Index$init$frost$core$Int64($tmp2305);
return $tmp2306;
block4:;
// line 1204
int64_t $tmp2307 = *(&local0);
bool $tmp2308 = $tmp2307 >= 224;
frost$core$Bit $tmp2309 = frost$core$Bit$init$builtin_bit($tmp2308);
bool $tmp2310 = $tmp2309.value;
if ($tmp2310) goto block5; else goto block6;
block5:;
// line 1205
frost$core$Int64 $tmp2311 = param1.value;
frost$core$Int64 $tmp2312 = (frost$core$Int64) {3};
int64_t $tmp2313 = $tmp2311.value;
int64_t $tmp2314 = $tmp2312.value;
int64_t $tmp2315 = $tmp2313 + $tmp2314;
frost$core$Int64 $tmp2316 = (frost$core$Int64) {$tmp2315};
frost$core$String$Index $tmp2317 = frost$core$String$Index$init$frost$core$Int64($tmp2316);
return $tmp2317;
block6:;
// line 1207
int64_t $tmp2318 = *(&local0);
bool $tmp2319 = $tmp2318 >= 192;
frost$core$Bit $tmp2320 = frost$core$Bit$init$builtin_bit($tmp2319);
bool $tmp2321 = $tmp2320.value;
if ($tmp2321) goto block7; else goto block8;
block7:;
// line 1208
frost$core$Int64 $tmp2322 = param1.value;
frost$core$Int64 $tmp2323 = (frost$core$Int64) {2};
int64_t $tmp2324 = $tmp2322.value;
int64_t $tmp2325 = $tmp2323.value;
int64_t $tmp2326 = $tmp2324 + $tmp2325;
frost$core$Int64 $tmp2327 = (frost$core$Int64) {$tmp2326};
frost$core$String$Index $tmp2328 = frost$core$String$Index$init$frost$core$Int64($tmp2327);
return $tmp2328;
block8:;
// line 1210
frost$core$Int64 $tmp2329 = param1.value;
frost$core$Int64 $tmp2330 = (frost$core$Int64) {1};
int64_t $tmp2331 = $tmp2329.value;
int64_t $tmp2332 = $tmp2330.value;
int64_t $tmp2333 = $tmp2331 + $tmp2332;
frost$core$Int64 $tmp2334 = (frost$core$Int64) {$tmp2333};
frost$core$String$Index $tmp2335 = frost$core$String$Index$init$frost$core$Int64($tmp2334);
return $tmp2335;

}
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
// line 1220
frost$core$Int64 $tmp2336 = param1.value;
frost$core$Int64 $tmp2337 = (frost$core$Int64) {0};
int64_t $tmp2338 = $tmp2336.value;
int64_t $tmp2339 = $tmp2337.value;
bool $tmp2340 = $tmp2338 > $tmp2339;
frost$core$Bit $tmp2341 = (frost$core$Bit) {$tmp2340};
bool $tmp2342 = $tmp2341.value;
if ($tmp2342) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2343 = (frost$core$Int64) {1220};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2344, $tmp2343);
abort(); // unreachable
block1:;
// line 1221
frost$core$Int64 $tmp2345 = param1.value;
frost$core$Int64 $tmp2346 = (frost$core$Int64) {1};
int64_t $tmp2347 = $tmp2345.value;
int64_t $tmp2348 = $tmp2346.value;
int64_t $tmp2349 = $tmp2347 - $tmp2348;
frost$core$Int64 $tmp2350 = (frost$core$Int64) {$tmp2349};
*(&local0) = $tmp2350;
// line 1222
goto block3;
block3:;
frost$core$Char8** $tmp2351 = &param0->data;
frost$core$Char8* $tmp2352 = *$tmp2351;
frost$core$Int64 $tmp2353 = *(&local0);
int64_t $tmp2354 = $tmp2353.value;
frost$core$Char8 $tmp2355 = $tmp2352[$tmp2354];
uint8_t $tmp2356 = $tmp2355.value;
int64_t $tmp2357 = ((int64_t) $tmp2356) & 255;
bool $tmp2358 = $tmp2357 >= 128;
frost$core$Char8** $tmp2359 = &param0->data;
frost$core$Char8* $tmp2360 = *$tmp2359;
frost$core$Int64 $tmp2361 = *(&local0);
int64_t $tmp2362 = $tmp2361.value;
frost$core$Char8 $tmp2363 = $tmp2360[$tmp2362];
uint8_t $tmp2364 = $tmp2363.value;
int64_t $tmp2365 = ((int64_t) $tmp2364) & 255;
bool $tmp2366 = $tmp2365 < 192;
bool $tmp2367 = $tmp2358 & $tmp2366;
frost$core$Bit $tmp2368 = frost$core$Bit$init$builtin_bit($tmp2367);
bool $tmp2369 = $tmp2368.value;
if ($tmp2369) goto block4; else goto block5;
block4:;
// line 1224
frost$core$Int64 $tmp2370 = *(&local0);
frost$core$Int64 $tmp2371 = (frost$core$Int64) {1};
int64_t $tmp2372 = $tmp2370.value;
int64_t $tmp2373 = $tmp2371.value;
int64_t $tmp2374 = $tmp2372 - $tmp2373;
frost$core$Int64 $tmp2375 = (frost$core$Int64) {$tmp2374};
*(&local0) = $tmp2375;
goto block3;
block5:;
// line 1226
frost$core$Int64 $tmp2376 = *(&local0);
frost$core$String$Index $tmp2377 = frost$core$String$Index$init$frost$core$Int64($tmp2376);
return $tmp2377;

}
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1, frost$core$Int64 param2) {

frost$core$String$Index local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1236
*(&local0) = param1;
// line 1237
frost$core$Int64 $tmp2378 = (frost$core$Int64) {0};
int64_t $tmp2379 = param2.value;
int64_t $tmp2380 = $tmp2378.value;
bool $tmp2381 = $tmp2379 > $tmp2380;
frost$core$Bit $tmp2382 = (frost$core$Bit) {$tmp2381};
bool $tmp2383 = $tmp2382.value;
if ($tmp2383) goto block1; else goto block3;
block1:;
// line 1238
frost$core$Int64 $tmp2384 = (frost$core$Int64) {0};
frost$core$Bit $tmp2385 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2386 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2384, param2, $tmp2385);
frost$core$Int64 $tmp2387 = $tmp2386.min;
*(&local1) = $tmp2387;
frost$core$Int64 $tmp2388 = $tmp2386.max;
frost$core$Bit $tmp2389 = $tmp2386.inclusive;
bool $tmp2390 = $tmp2389.value;
frost$core$Int64 $tmp2391 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2392 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2391);
if ($tmp2390) goto block7; else goto block8;
block7:;
int64_t $tmp2393 = $tmp2387.value;
int64_t $tmp2394 = $tmp2388.value;
bool $tmp2395 = $tmp2393 <= $tmp2394;
frost$core$Bit $tmp2396 = (frost$core$Bit) {$tmp2395};
bool $tmp2397 = $tmp2396.value;
if ($tmp2397) goto block4; else goto block5;
block8:;
int64_t $tmp2398 = $tmp2387.value;
int64_t $tmp2399 = $tmp2388.value;
bool $tmp2400 = $tmp2398 < $tmp2399;
frost$core$Bit $tmp2401 = (frost$core$Bit) {$tmp2400};
bool $tmp2402 = $tmp2401.value;
if ($tmp2402) goto block4; else goto block5;
block4:;
// line 1239
frost$core$String$Index $tmp2403 = *(&local0);
frost$core$String$Index $tmp2404 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2403);
*(&local0) = $tmp2404;
goto block6;
block6:;
frost$core$Int64 $tmp2405 = *(&local1);
int64_t $tmp2406 = $tmp2388.value;
int64_t $tmp2407 = $tmp2405.value;
int64_t $tmp2408 = $tmp2406 - $tmp2407;
frost$core$Int64 $tmp2409 = (frost$core$Int64) {$tmp2408};
frost$core$UInt64 $tmp2410 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2409);
if ($tmp2390) goto block10; else goto block11;
block10:;
uint64_t $tmp2411 = $tmp2410.value;
uint64_t $tmp2412 = $tmp2392.value;
bool $tmp2413 = $tmp2411 >= $tmp2412;
frost$core$Bit $tmp2414 = (frost$core$Bit) {$tmp2413};
bool $tmp2415 = $tmp2414.value;
if ($tmp2415) goto block9; else goto block5;
block11:;
uint64_t $tmp2416 = $tmp2410.value;
uint64_t $tmp2417 = $tmp2392.value;
bool $tmp2418 = $tmp2416 > $tmp2417;
frost$core$Bit $tmp2419 = (frost$core$Bit) {$tmp2418};
bool $tmp2420 = $tmp2419.value;
if ($tmp2420) goto block9; else goto block5;
block9:;
int64_t $tmp2421 = $tmp2405.value;
int64_t $tmp2422 = $tmp2391.value;
int64_t $tmp2423 = $tmp2421 + $tmp2422;
frost$core$Int64 $tmp2424 = (frost$core$Int64) {$tmp2423};
*(&local1) = $tmp2424;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 1243
frost$core$Int64 $tmp2425 = (frost$core$Int64) {0};
frost$core$Int64 $tmp2426 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp2427 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp2428 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2425, param2, $tmp2426, $tmp2427);
frost$core$Int64 $tmp2429 = $tmp2428.start;
*(&local2) = $tmp2429;
frost$core$Int64 $tmp2430 = $tmp2428.end;
frost$core$Int64 $tmp2431 = $tmp2428.step;
frost$core$UInt64 $tmp2432 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2431);
frost$core$Int64 $tmp2433 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2431);
frost$core$UInt64 $tmp2434 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2433);
frost$core$Bit $tmp2435 = $tmp2428.inclusive;
bool $tmp2436 = $tmp2435.value;
frost$core$Int64 $tmp2437 = (frost$core$Int64) {0};
int64_t $tmp2438 = $tmp2431.value;
int64_t $tmp2439 = $tmp2437.value;
bool $tmp2440 = $tmp2438 >= $tmp2439;
frost$core$Bit $tmp2441 = (frost$core$Bit) {$tmp2440};
bool $tmp2442 = $tmp2441.value;
if ($tmp2442) goto block15; else goto block16;
block15:;
if ($tmp2436) goto block17; else goto block18;
block17:;
int64_t $tmp2443 = $tmp2429.value;
int64_t $tmp2444 = $tmp2430.value;
bool $tmp2445 = $tmp2443 <= $tmp2444;
frost$core$Bit $tmp2446 = (frost$core$Bit) {$tmp2445};
bool $tmp2447 = $tmp2446.value;
if ($tmp2447) goto block12; else goto block13;
block18:;
int64_t $tmp2448 = $tmp2429.value;
int64_t $tmp2449 = $tmp2430.value;
bool $tmp2450 = $tmp2448 < $tmp2449;
frost$core$Bit $tmp2451 = (frost$core$Bit) {$tmp2450};
bool $tmp2452 = $tmp2451.value;
if ($tmp2452) goto block12; else goto block13;
block16:;
if ($tmp2436) goto block19; else goto block20;
block19:;
int64_t $tmp2453 = $tmp2429.value;
int64_t $tmp2454 = $tmp2430.value;
bool $tmp2455 = $tmp2453 >= $tmp2454;
frost$core$Bit $tmp2456 = (frost$core$Bit) {$tmp2455};
bool $tmp2457 = $tmp2456.value;
if ($tmp2457) goto block12; else goto block13;
block20:;
int64_t $tmp2458 = $tmp2429.value;
int64_t $tmp2459 = $tmp2430.value;
bool $tmp2460 = $tmp2458 > $tmp2459;
frost$core$Bit $tmp2461 = (frost$core$Bit) {$tmp2460};
bool $tmp2462 = $tmp2461.value;
if ($tmp2462) goto block12; else goto block13;
block12:;
// line 1244
frost$core$String$Index $tmp2463 = *(&local0);
frost$core$String$Index $tmp2464 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2463);
*(&local0) = $tmp2464;
goto block14;
block14:;
frost$core$Int64 $tmp2465 = *(&local2);
if ($tmp2442) goto block22; else goto block23;
block22:;
int64_t $tmp2466 = $tmp2430.value;
int64_t $tmp2467 = $tmp2465.value;
int64_t $tmp2468 = $tmp2466 - $tmp2467;
frost$core$Int64 $tmp2469 = (frost$core$Int64) {$tmp2468};
frost$core$UInt64 $tmp2470 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2469);
if ($tmp2436) goto block24; else goto block25;
block24:;
uint64_t $tmp2471 = $tmp2470.value;
uint64_t $tmp2472 = $tmp2432.value;
bool $tmp2473 = $tmp2471 >= $tmp2472;
frost$core$Bit $tmp2474 = (frost$core$Bit) {$tmp2473};
bool $tmp2475 = $tmp2474.value;
if ($tmp2475) goto block21; else goto block13;
block25:;
uint64_t $tmp2476 = $tmp2470.value;
uint64_t $tmp2477 = $tmp2432.value;
bool $tmp2478 = $tmp2476 > $tmp2477;
frost$core$Bit $tmp2479 = (frost$core$Bit) {$tmp2478};
bool $tmp2480 = $tmp2479.value;
if ($tmp2480) goto block21; else goto block13;
block23:;
int64_t $tmp2481 = $tmp2465.value;
int64_t $tmp2482 = $tmp2430.value;
int64_t $tmp2483 = $tmp2481 - $tmp2482;
frost$core$Int64 $tmp2484 = (frost$core$Int64) {$tmp2483};
frost$core$UInt64 $tmp2485 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2484);
if ($tmp2436) goto block26; else goto block27;
block26:;
uint64_t $tmp2486 = $tmp2485.value;
uint64_t $tmp2487 = $tmp2434.value;
bool $tmp2488 = $tmp2486 >= $tmp2487;
frost$core$Bit $tmp2489 = (frost$core$Bit) {$tmp2488};
bool $tmp2490 = $tmp2489.value;
if ($tmp2490) goto block21; else goto block13;
block27:;
uint64_t $tmp2491 = $tmp2485.value;
uint64_t $tmp2492 = $tmp2434.value;
bool $tmp2493 = $tmp2491 > $tmp2492;
frost$core$Bit $tmp2494 = (frost$core$Bit) {$tmp2493};
bool $tmp2495 = $tmp2494.value;
if ($tmp2495) goto block21; else goto block13;
block21:;
int64_t $tmp2496 = $tmp2465.value;
int64_t $tmp2497 = $tmp2431.value;
int64_t $tmp2498 = $tmp2496 + $tmp2497;
frost$core$Int64 $tmp2499 = (frost$core$Int64) {$tmp2498};
*(&local2) = $tmp2499;
goto block12;
block13:;
goto block2;
block2:;
// line 1247
frost$core$String$Index $tmp2500 = *(&local0);
return $tmp2500;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1260
frost$core$Int32 $tmp2501 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2502 = frost$core$Char32$init$frost$core$Int32($tmp2501);
frost$core$String* $tmp2503 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2502);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
// unreffing REF($3:frost.core.String)
return $tmp2503;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1274
frost$core$Int64 $tmp2504 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2505 = $tmp2504.value;
int64_t $tmp2506 = param1.value;
bool $tmp2507 = $tmp2505 >= $tmp2506;
frost$core$Bit $tmp2508 = (frost$core$Bit) {$tmp2507};
bool $tmp2509 = $tmp2508.value;
if ($tmp2509) goto block1; else goto block2;
block1:;
// line 1275
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1277
frost$core$Int64 $tmp2510 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2511 = param1.value;
int64_t $tmp2512 = $tmp2510.value;
int64_t $tmp2513 = $tmp2511 - $tmp2512;
frost$core$Int64 $tmp2514 = (frost$core$Int64) {$tmp2513};
frost$core$String* $tmp2515 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2514);
frost$core$String* $tmp2516 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp2515);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
// unreffing REF($18:frost.core.String)
return $tmp2516;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1290
frost$core$Int32 $tmp2517 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2518 = frost$core$Char32$init$frost$core$Int32($tmp2517);
frost$core$String* $tmp2519 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2518);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
// unreffing REF($3:frost.core.String)
return $tmp2519;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1304
frost$core$Int64 $tmp2520 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2521 = $tmp2520.value;
int64_t $tmp2522 = param1.value;
bool $tmp2523 = $tmp2521 >= $tmp2522;
frost$core$Bit $tmp2524 = (frost$core$Bit) {$tmp2523};
bool $tmp2525 = $tmp2524.value;
if ($tmp2525) goto block1; else goto block2;
block1:;
// line 1305
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1307
frost$core$Int64 $tmp2526 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2527 = param1.value;
int64_t $tmp2528 = $tmp2526.value;
int64_t $tmp2529 = $tmp2527 - $tmp2528;
frost$core$Int64 $tmp2530 = (frost$core$Int64) {$tmp2529};
frost$core$String* $tmp2531 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2530);
frost$core$String* $tmp2532 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2531, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
// unreffing REF($18:frost.core.String)
return $tmp2532;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1322
frost$core$Int32 $tmp2533 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2534 = frost$core$Char32$init$frost$core$Int32($tmp2533);
frost$core$String* $tmp2535 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2534);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
// unreffing REF($3:frost.core.String)
return $tmp2535;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1338
frost$core$Int64 $tmp2536 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2537 = $tmp2536.value;
int64_t $tmp2538 = param1.value;
bool $tmp2539 = $tmp2537 >= $tmp2538;
frost$core$Bit $tmp2540 = (frost$core$Bit) {$tmp2539};
bool $tmp2541 = $tmp2540.value;
if ($tmp2541) goto block1; else goto block2;
block1:;
// line 1339
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1341
frost$core$Int64 $tmp2542 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2543 = param1.value;
int64_t $tmp2544 = $tmp2542.value;
int64_t $tmp2545 = $tmp2543 - $tmp2544;
frost$core$Int64 $tmp2546 = (frost$core$Int64) {$tmp2545};
*(&local0) = $tmp2546;
// line 1342
frost$core$Int64 $tmp2547 = *(&local0);
frost$core$Int64 $tmp2548 = (frost$core$Int64) {2};
int64_t $tmp2549 = $tmp2547.value;
int64_t $tmp2550 = $tmp2548.value;
int64_t $tmp2551 = $tmp2549 / $tmp2550;
frost$core$Int64 $tmp2552 = (frost$core$Int64) {$tmp2551};
*(&local1) = $tmp2552;
// line 1343
frost$core$Int64 $tmp2553 = *(&local0);
frost$core$Int64 $tmp2554 = *(&local1);
int64_t $tmp2555 = $tmp2553.value;
int64_t $tmp2556 = $tmp2554.value;
int64_t $tmp2557 = $tmp2555 - $tmp2556;
frost$core$Int64 $tmp2558 = (frost$core$Int64) {$tmp2557};
*(&local2) = $tmp2558;
// line 1344
frost$core$Int64 $tmp2559 = *(&local1);
frost$core$String* $tmp2560 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2559);
frost$core$String* $tmp2561 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2560, param0);
frost$core$Int64 $tmp2562 = *(&local2);
frost$core$String* $tmp2563 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2562);
frost$core$String* $tmp2564 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2561, $tmp2563);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
// unreffing REF($41:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
// unreffing REF($40:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
// unreffing REF($38:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
// unreffing REF($37:frost.core.String)
return $tmp2564;

}
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1355
frost$core$Int64 $tmp2565 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2566 = frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2565);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
// unreffing REF($2:frost.collections.Array<frost.core.String>)
return $tmp2566;

}
frost$collections$Array* frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
frost$core$Bit local3;
// line 1368
frost$collections$Array* $tmp2567 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2567);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
frost$collections$Array* $tmp2568 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
*(&local0) = $tmp2567;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 1369
frost$core$String$Index $tmp2569 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2569;
// line 1370
goto block1;
block1:;
// line 1371
// line 1372
frost$core$Int64* $tmp2570 = &param1->_length;
frost$core$Int64 $tmp2571 = *$tmp2570;
frost$core$Int64 $tmp2572 = (frost$core$Int64) {0};
frost$core$Bit $tmp2573 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2571, $tmp2572);
bool $tmp2574 = $tmp2573.value;
if ($tmp2574) goto block3; else goto block5;
block3:;
// line 1373
frost$core$String$Index $tmp2575 = *(&local1);
frost$core$String$Index $tmp2576 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2575);
*(&local2) = ((frost$core$String$Index$nullable) { $tmp2576, true });
goto block4;
block5:;
// line 1
// line 1376
frost$core$String$Index $tmp2577 = *(&local1);
frost$core$String$Index$nullable $tmp2578 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2577);
*(&local2) = $tmp2578;
goto block4;
block4:;
// line 1378
frost$core$String$Index$nullable $tmp2579 = *(&local2);
frost$core$Bit $tmp2580 = frost$core$Bit$init$builtin_bit(!$tmp2579.nonnull);
bool $tmp2581 = $tmp2580.value;
if ($tmp2581) goto block8; else goto block9;
block8:;
*(&local3) = $tmp2580;
goto block10;
block9:;
frost$collections$Array* $tmp2582 = *(&local0);
ITable* $tmp2583 = ((frost$collections$CollectionView*) $tmp2582)->$class->itable;
while ($tmp2583->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2583 = $tmp2583->next;
}
$fn2585 $tmp2584 = $tmp2583->methods[0];
frost$core$Int64 $tmp2586 = $tmp2584(((frost$collections$CollectionView*) $tmp2582));
frost$core$Int64 $tmp2587 = (frost$core$Int64) {1};
int64_t $tmp2588 = param2.value;
int64_t $tmp2589 = $tmp2587.value;
int64_t $tmp2590 = $tmp2588 - $tmp2589;
frost$core$Int64 $tmp2591 = (frost$core$Int64) {$tmp2590};
frost$core$Bit $tmp2592 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2586, $tmp2591);
*(&local3) = $tmp2592;
goto block10;
block10:;
frost$core$Bit $tmp2593 = *(&local3);
bool $tmp2594 = $tmp2593.value;
if ($tmp2594) goto block6; else goto block7;
block6:;
// line 1379
frost$collections$Array* $tmp2595 = *(&local0);
frost$core$String$Index $tmp2596 = *(&local1);
frost$core$Bit $tmp2597 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2598 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2596, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2597);
frost$core$String* $tmp2599 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2598);
frost$collections$Array$add$frost$collections$Array$T($tmp2595, ((frost$core$Object*) $tmp2599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2599));
// unreffing REF($69:frost.core.String)
// line 1380
goto block2;
block7:;
// line 1382
frost$collections$Array* $tmp2600 = *(&local0);
frost$core$String$Index $tmp2601 = *(&local1);
frost$core$String$Index$nullable $tmp2602 = *(&local2);
frost$core$Bit $tmp2603 = frost$core$Bit$init$builtin_bit($tmp2602.nonnull);
bool $tmp2604 = $tmp2603.value;
if ($tmp2604) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2605 = (frost$core$Int64) {1382};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2606, $tmp2605, &$s2607);
abort(); // unreachable
block11:;
frost$core$Bit $tmp2608 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2609 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2601, ((frost$core$String$Index) $tmp2602.value), $tmp2608);
frost$core$String* $tmp2610 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2609);
frost$collections$Array$add$frost$collections$Array$T($tmp2600, ((frost$core$Object*) $tmp2610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
// unreffing REF($92:frost.core.String)
// line 1383
frost$core$String$Index$nullable $tmp2611 = *(&local2);
frost$core$Bit $tmp2612 = frost$core$Bit$init$builtin_bit($tmp2611.nonnull);
bool $tmp2613 = $tmp2612.value;
if ($tmp2613) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp2614 = (frost$core$Int64) {1383};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2615, $tmp2614, &$s2616);
abort(); // unreachable
block13:;
frost$core$Int64 $tmp2617 = ((frost$core$String$Index) $tmp2611.value).value;
frost$core$Int64* $tmp2618 = &param1->_length;
frost$core$Int64 $tmp2619 = *$tmp2618;
int64_t $tmp2620 = $tmp2617.value;
int64_t $tmp2621 = $tmp2619.value;
int64_t $tmp2622 = $tmp2620 + $tmp2621;
frost$core$Int64 $tmp2623 = (frost$core$Int64) {$tmp2622};
frost$core$String$Index $tmp2624 = frost$core$String$Index$init$frost$core$Int64($tmp2623);
*(&local1) = $tmp2624;
goto block1;
block2:;
// line 1385
frost$collections$Array* $tmp2625 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
frost$collections$Array* $tmp2626 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2625;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$String$Index local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$String$Index local5;
frost$core$Int64 $tmp2627 = (frost$core$Int64) {0};
int64_t $tmp2628 = param2.value;
int64_t $tmp2629 = $tmp2627.value;
bool $tmp2630 = $tmp2628 > $tmp2629;
frost$core$Bit $tmp2631 = (frost$core$Bit) {$tmp2630};
bool $tmp2632 = $tmp2631.value;
if ($tmp2632) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2633 = (frost$core$Int64) {1399};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2634, $tmp2633, &$s2635);
abort(); // unreachable
block1:;
// line 1400
frost$collections$Array* $tmp2636 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2636);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
frost$collections$Array* $tmp2637 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
*(&local0) = $tmp2636;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
// unreffing REF($11:frost.collections.Array<frost.core.String>)
// line 1401
frost$core$Matcher* $tmp2638 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
frost$core$Matcher* $tmp2639 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
*(&local1) = $tmp2638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
// unreffing REF($25:frost.core.Matcher)
// line 1402
frost$core$String$Index $tmp2640 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp2640;
// line 1403
goto block3;
block3:;
// line 1404
frost$core$Matcher* $tmp2641 = *(&local1);
frost$core$Bit $tmp2642 = frost$core$Matcher$find$R$frost$core$Bit($tmp2641);
*(&local3) = $tmp2642;
// line 1405
frost$core$Bit $tmp2643 = *(&local3);
frost$core$Bit $tmp2644 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2643);
bool $tmp2645 = $tmp2644.value;
if ($tmp2645) goto block7; else goto block8;
block7:;
*(&local4) = $tmp2644;
goto block9;
block8:;
frost$collections$Array* $tmp2646 = *(&local0);
ITable* $tmp2647 = ((frost$collections$CollectionView*) $tmp2646)->$class->itable;
while ($tmp2647->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2647 = $tmp2647->next;
}
$fn2649 $tmp2648 = $tmp2647->methods[0];
frost$core$Int64 $tmp2650 = $tmp2648(((frost$collections$CollectionView*) $tmp2646));
frost$core$Int64 $tmp2651 = (frost$core$Int64) {1};
int64_t $tmp2652 = param2.value;
int64_t $tmp2653 = $tmp2651.value;
int64_t $tmp2654 = $tmp2652 - $tmp2653;
frost$core$Int64 $tmp2655 = (frost$core$Int64) {$tmp2654};
frost$core$Bit $tmp2656 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2650, $tmp2655);
*(&local4) = $tmp2656;
goto block9;
block9:;
frost$core$Bit $tmp2657 = *(&local4);
bool $tmp2658 = $tmp2657.value;
if ($tmp2658) goto block5; else goto block6;
block5:;
// line 1406
frost$collections$Array* $tmp2659 = *(&local0);
frost$core$String$Index $tmp2660 = *(&local2);
frost$core$Bit $tmp2661 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2662 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2660, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2661);
frost$core$String* $tmp2663 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2662);
frost$collections$Array$add$frost$collections$Array$T($tmp2659, ((frost$core$Object*) $tmp2663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
// unreffing REF($74:frost.core.String)
// line 1407
goto block4;
block6:;
// line 1409
frost$core$Matcher* $tmp2664 = *(&local1);
frost$core$String$Index $tmp2665;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp2665, $tmp2664);
*(&local5) = $tmp2665;
// line 1410
frost$collections$Array* $tmp2666 = *(&local0);
frost$core$String$Index $tmp2667 = *(&local2);
frost$core$String$Index $tmp2668 = *(&local5);
frost$core$Bit $tmp2669 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2670 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2667, $tmp2668, $tmp2669);
frost$core$String* $tmp2671 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2670);
frost$collections$Array$add$frost$collections$Array$T($tmp2666, ((frost$core$Object*) $tmp2671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
// unreffing REF($93:frost.core.String)
// line 1411
frost$core$String$Index $tmp2672 = *(&local5);
frost$core$Int64 $tmp2673 = $tmp2672.value;
frost$core$Matcher* $tmp2674 = *(&local1);
frost$core$String$Index $tmp2675;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp2675, $tmp2674);
frost$core$Int64 $tmp2676 = $tmp2675.value;
frost$core$Int64 $tmp2677 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp2673, $tmp2676);
frost$core$String$Index $tmp2678 = frost$core$String$Index$init$frost$core$Int64($tmp2677);
*(&local2) = $tmp2678;
goto block3;
block4:;
// line 1413
frost$collections$Array* $tmp2679 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
frost$core$Matcher* $tmp2680 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$collections$Array* $tmp2681 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2679;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1426
frost$core$Int64 $tmp2682 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2683 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2682);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
// unreffing REF($2:frost.collections.Array<frost.core.String>)
return $tmp2683;

}
frost$core$Int64$nullable frost$core$String$convert$R$frost$core$Int64$Q(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Bit local4;
// line 1437
frost$core$Int64* $tmp2684 = &param0->_length;
frost$core$Int64 $tmp2685 = *$tmp2684;
frost$core$Int64 $tmp2686 = (frost$core$Int64) {0};
frost$core$Bit $tmp2687 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2685, $tmp2686);
bool $tmp2688 = $tmp2687.value;
if ($tmp2688) goto block1; else goto block2;
block1:;
// line 1438
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 1440
frost$core$Int64 $tmp2689 = (frost$core$Int64) {0};
*(&local0) = $tmp2689;
// line 1441
// line 1442
frost$core$Char8** $tmp2690 = &param0->data;
frost$core$Char8* $tmp2691 = *$tmp2690;
frost$core$Int64 $tmp2692 = (frost$core$Int64) {0};
int64_t $tmp2693 = $tmp2692.value;
frost$core$Char8 $tmp2694 = $tmp2691[$tmp2693];
frost$core$UInt8 $tmp2695 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2696 = frost$core$Char8$init$frost$core$UInt8($tmp2695);
frost$core$Bit $tmp2697 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2694, $tmp2696);
bool $tmp2698 = $tmp2697.value;
if ($tmp2698) goto block3; else goto block5;
block3:;
// line 1443
frost$core$Int64 $tmp2699 = (frost$core$Int64) {1};
*(&local1) = $tmp2699;
goto block4;
block5:;
// line 1
// line 1446
frost$core$Int64 $tmp2700 = (frost$core$Int64) {0};
*(&local1) = $tmp2700;
goto block4;
block4:;
// line 1448
frost$core$Int64 $tmp2701 = *(&local1);
frost$core$Int64* $tmp2702 = &param0->_length;
frost$core$Int64 $tmp2703 = *$tmp2702;
frost$core$Bit $tmp2704 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2705 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2701, $tmp2703, $tmp2704);
frost$core$Int64 $tmp2706 = $tmp2705.min;
*(&local2) = $tmp2706;
frost$core$Int64 $tmp2707 = $tmp2705.max;
frost$core$Bit $tmp2708 = $tmp2705.inclusive;
bool $tmp2709 = $tmp2708.value;
frost$core$Int64 $tmp2710 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2711 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2710);
if ($tmp2709) goto block9; else goto block10;
block9:;
int64_t $tmp2712 = $tmp2706.value;
int64_t $tmp2713 = $tmp2707.value;
bool $tmp2714 = $tmp2712 <= $tmp2713;
frost$core$Bit $tmp2715 = (frost$core$Bit) {$tmp2714};
bool $tmp2716 = $tmp2715.value;
if ($tmp2716) goto block6; else goto block7;
block10:;
int64_t $tmp2717 = $tmp2706.value;
int64_t $tmp2718 = $tmp2707.value;
bool $tmp2719 = $tmp2717 < $tmp2718;
frost$core$Bit $tmp2720 = (frost$core$Bit) {$tmp2719};
bool $tmp2721 = $tmp2720.value;
if ($tmp2721) goto block6; else goto block7;
block6:;
// line 1449
frost$core$Char8** $tmp2722 = &param0->data;
frost$core$Char8* $tmp2723 = *$tmp2722;
frost$core$Int64 $tmp2724 = *(&local2);
int64_t $tmp2725 = $tmp2724.value;
frost$core$Char8 $tmp2726 = $tmp2723[$tmp2725];
uint8_t $tmp2727 = $tmp2726.value;
frost$core$Int64 $tmp2728 = (frost$core$Int64) {((int64_t) $tmp2727)};
frost$core$Int64 $tmp2729 = (frost$core$Int64) {48};
int64_t $tmp2730 = $tmp2728.value;
int64_t $tmp2731 = $tmp2729.value;
int64_t $tmp2732 = $tmp2730 - $tmp2731;
frost$core$Int64 $tmp2733 = (frost$core$Int64) {$tmp2732};
*(&local3) = $tmp2733;
// line 1450
frost$core$Int64 $tmp2734 = *(&local3);
frost$core$Int64 $tmp2735 = (frost$core$Int64) {0};
int64_t $tmp2736 = $tmp2734.value;
int64_t $tmp2737 = $tmp2735.value;
bool $tmp2738 = $tmp2736 < $tmp2737;
frost$core$Bit $tmp2739 = (frost$core$Bit) {$tmp2738};
bool $tmp2740 = $tmp2739.value;
if ($tmp2740) goto block13; else goto block14;
block13:;
*(&local4) = $tmp2739;
goto block15;
block14:;
frost$core$Int64 $tmp2741 = *(&local3);
frost$core$Int64 $tmp2742 = (frost$core$Int64) {9};
int64_t $tmp2743 = $tmp2741.value;
int64_t $tmp2744 = $tmp2742.value;
bool $tmp2745 = $tmp2743 > $tmp2744;
frost$core$Bit $tmp2746 = (frost$core$Bit) {$tmp2745};
*(&local4) = $tmp2746;
goto block15;
block15:;
frost$core$Bit $tmp2747 = *(&local4);
bool $tmp2748 = $tmp2747.value;
if ($tmp2748) goto block11; else goto block12;
block11:;
// line 1451
return ((frost$core$Int64$nullable) { .nonnull = false });
block12:;
// line 1453
frost$core$Int64 $tmp2749 = *(&local0);
frost$core$Int64 $tmp2750 = (frost$core$Int64) {10};
int64_t $tmp2751 = $tmp2749.value;
int64_t $tmp2752 = $tmp2750.value;
int64_t $tmp2753 = $tmp2751 * $tmp2752;
frost$core$Int64 $tmp2754 = (frost$core$Int64) {$tmp2753};
frost$core$Int64 $tmp2755 = *(&local3);
int64_t $tmp2756 = $tmp2754.value;
int64_t $tmp2757 = $tmp2755.value;
int64_t $tmp2758 = $tmp2756 + $tmp2757;
frost$core$Int64 $tmp2759 = (frost$core$Int64) {$tmp2758};
*(&local0) = $tmp2759;
goto block8;
block8:;
frost$core$Int64 $tmp2760 = *(&local2);
int64_t $tmp2761 = $tmp2707.value;
int64_t $tmp2762 = $tmp2760.value;
int64_t $tmp2763 = $tmp2761 - $tmp2762;
frost$core$Int64 $tmp2764 = (frost$core$Int64) {$tmp2763};
frost$core$UInt64 $tmp2765 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2764);
if ($tmp2709) goto block17; else goto block18;
block17:;
uint64_t $tmp2766 = $tmp2765.value;
uint64_t $tmp2767 = $tmp2711.value;
bool $tmp2768 = $tmp2766 >= $tmp2767;
frost$core$Bit $tmp2769 = (frost$core$Bit) {$tmp2768};
bool $tmp2770 = $tmp2769.value;
if ($tmp2770) goto block16; else goto block7;
block18:;
uint64_t $tmp2771 = $tmp2765.value;
uint64_t $tmp2772 = $tmp2711.value;
bool $tmp2773 = $tmp2771 > $tmp2772;
frost$core$Bit $tmp2774 = (frost$core$Bit) {$tmp2773};
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block16; else goto block7;
block16:;
int64_t $tmp2776 = $tmp2760.value;
int64_t $tmp2777 = $tmp2710.value;
int64_t $tmp2778 = $tmp2776 + $tmp2777;
frost$core$Int64 $tmp2779 = (frost$core$Int64) {$tmp2778};
*(&local2) = $tmp2779;
goto block6;
block7:;
// line 1455
frost$core$Char8** $tmp2780 = &param0->data;
frost$core$Char8* $tmp2781 = *$tmp2780;
frost$core$Int64 $tmp2782 = (frost$core$Int64) {0};
int64_t $tmp2783 = $tmp2782.value;
frost$core$Char8 $tmp2784 = $tmp2781[$tmp2783];
frost$core$UInt8 $tmp2785 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2786 = frost$core$Char8$init$frost$core$UInt8($tmp2785);
frost$core$Bit $tmp2787 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2784, $tmp2786);
bool $tmp2788 = $tmp2787.value;
if ($tmp2788) goto block19; else goto block20;
block19:;
// line 1456
frost$core$Int64 $tmp2789 = *(&local0);
frost$core$Int64 $tmp2790 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2789);
*(&local0) = $tmp2790;
goto block20;
block20:;
// line 1458
frost$core$Int64 $tmp2791 = *(&local0);
return ((frost$core$Int64$nullable) { $tmp2791, true });

}
frost$core$UInt64$nullable frost$core$String$convert$R$frost$core$UInt64$Q(frost$core$String* param0) {

frost$core$UInt64 local0;
frost$core$Int64 local1;
frost$core$UInt64 local2;
frost$core$Bit local3;
// line 1468
frost$core$Int64* $tmp2792 = &param0->_length;
frost$core$Int64 $tmp2793 = *$tmp2792;
frost$core$Int64 $tmp2794 = (frost$core$Int64) {0};
frost$core$Bit $tmp2795 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2793, $tmp2794);
bool $tmp2796 = $tmp2795.value;
if ($tmp2796) goto block1; else goto block2;
block1:;
// line 1469
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 1471
frost$core$UInt64 $tmp2797 = (frost$core$UInt64) {0};
*(&local0) = $tmp2797;
// line 1472
frost$core$Int64 $tmp2798 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2799 = &param0->_length;
frost$core$Int64 $tmp2800 = *$tmp2799;
frost$core$Bit $tmp2801 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2802 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2798, $tmp2800, $tmp2801);
frost$core$Int64 $tmp2803 = $tmp2802.min;
*(&local1) = $tmp2803;
frost$core$Int64 $tmp2804 = $tmp2802.max;
frost$core$Bit $tmp2805 = $tmp2802.inclusive;
bool $tmp2806 = $tmp2805.value;
frost$core$Int64 $tmp2807 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2808 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2807);
if ($tmp2806) goto block6; else goto block7;
block6:;
int64_t $tmp2809 = $tmp2803.value;
int64_t $tmp2810 = $tmp2804.value;
bool $tmp2811 = $tmp2809 <= $tmp2810;
frost$core$Bit $tmp2812 = (frost$core$Bit) {$tmp2811};
bool $tmp2813 = $tmp2812.value;
if ($tmp2813) goto block3; else goto block4;
block7:;
int64_t $tmp2814 = $tmp2803.value;
int64_t $tmp2815 = $tmp2804.value;
bool $tmp2816 = $tmp2814 < $tmp2815;
frost$core$Bit $tmp2817 = (frost$core$Bit) {$tmp2816};
bool $tmp2818 = $tmp2817.value;
if ($tmp2818) goto block3; else goto block4;
block3:;
// line 1473
frost$core$Char8** $tmp2819 = &param0->data;
frost$core$Char8* $tmp2820 = *$tmp2819;
frost$core$Int64 $tmp2821 = *(&local1);
int64_t $tmp2822 = $tmp2821.value;
frost$core$Char8 $tmp2823 = $tmp2820[$tmp2822];
uint8_t $tmp2824 = $tmp2823.value;
frost$core$UInt64 $tmp2825 = (frost$core$UInt64) {((uint64_t) $tmp2824)};
frost$core$UInt64 $tmp2826 = (frost$core$UInt64) {48};
uint64_t $tmp2827 = $tmp2825.value;
uint64_t $tmp2828 = $tmp2826.value;
uint64_t $tmp2829 = $tmp2827 - $tmp2828;
frost$core$UInt64 $tmp2830 = (frost$core$UInt64) {$tmp2829};
*(&local2) = $tmp2830;
// line 1474
frost$core$UInt64 $tmp2831 = *(&local2);
frost$core$UInt64 $tmp2832 = (frost$core$UInt64) {0};
uint64_t $tmp2833 = $tmp2831.value;
uint64_t $tmp2834 = $tmp2832.value;
bool $tmp2835 = $tmp2833 < $tmp2834;
frost$core$Bit $tmp2836 = (frost$core$Bit) {$tmp2835};
bool $tmp2837 = $tmp2836.value;
if ($tmp2837) goto block10; else goto block11;
block10:;
*(&local3) = $tmp2836;
goto block12;
block11:;
frost$core$UInt64 $tmp2838 = *(&local2);
frost$core$UInt64 $tmp2839 = (frost$core$UInt64) {9};
uint64_t $tmp2840 = $tmp2838.value;
uint64_t $tmp2841 = $tmp2839.value;
bool $tmp2842 = $tmp2840 > $tmp2841;
frost$core$Bit $tmp2843 = (frost$core$Bit) {$tmp2842};
*(&local3) = $tmp2843;
goto block12;
block12:;
frost$core$Bit $tmp2844 = *(&local3);
bool $tmp2845 = $tmp2844.value;
if ($tmp2845) goto block8; else goto block9;
block8:;
// line 1475
return ((frost$core$UInt64$nullable) { .nonnull = false });
block9:;
// line 1477
frost$core$UInt64 $tmp2846 = *(&local0);
frost$core$UInt64 $tmp2847 = (frost$core$UInt64) {10};
uint64_t $tmp2848 = $tmp2846.value;
uint64_t $tmp2849 = $tmp2847.value;
uint64_t $tmp2850 = $tmp2848 * $tmp2849;
frost$core$UInt64 $tmp2851 = (frost$core$UInt64) {$tmp2850};
frost$core$UInt64 $tmp2852 = *(&local2);
uint64_t $tmp2853 = $tmp2851.value;
uint64_t $tmp2854 = $tmp2852.value;
uint64_t $tmp2855 = $tmp2853 + $tmp2854;
frost$core$UInt64 $tmp2856 = (frost$core$UInt64) {$tmp2855};
*(&local0) = $tmp2856;
goto block5;
block5:;
frost$core$Int64 $tmp2857 = *(&local1);
int64_t $tmp2858 = $tmp2804.value;
int64_t $tmp2859 = $tmp2857.value;
int64_t $tmp2860 = $tmp2858 - $tmp2859;
frost$core$Int64 $tmp2861 = (frost$core$Int64) {$tmp2860};
frost$core$UInt64 $tmp2862 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2861);
if ($tmp2806) goto block14; else goto block15;
block14:;
uint64_t $tmp2863 = $tmp2862.value;
uint64_t $tmp2864 = $tmp2808.value;
bool $tmp2865 = $tmp2863 >= $tmp2864;
frost$core$Bit $tmp2866 = (frost$core$Bit) {$tmp2865};
bool $tmp2867 = $tmp2866.value;
if ($tmp2867) goto block13; else goto block4;
block15:;
uint64_t $tmp2868 = $tmp2862.value;
uint64_t $tmp2869 = $tmp2808.value;
bool $tmp2870 = $tmp2868 > $tmp2869;
frost$core$Bit $tmp2871 = (frost$core$Bit) {$tmp2870};
bool $tmp2872 = $tmp2871.value;
if ($tmp2872) goto block13; else goto block4;
block13:;
int64_t $tmp2873 = $tmp2857.value;
int64_t $tmp2874 = $tmp2807.value;
int64_t $tmp2875 = $tmp2873 + $tmp2874;
frost$core$Int64 $tmp2876 = (frost$core$Int64) {$tmp2875};
*(&local1) = $tmp2876;
goto block3;
block4:;
// line 1479
frost$core$UInt64 $tmp2877 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp2877, true });

}
frost$core$Real64$nullable frost$core$String$convert$R$frost$core$Real64$Q(frost$core$String* param0) {

// line 1489
frost$core$Real64 $tmp2878;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp2878, param0);
return ((frost$core$Real64$nullable) { $tmp2878, true });

}
frost$core$Int64 frost$core$String$get_hash$R$frost$core$Int64(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 1497
frost$core$Int64 $tmp2879 = (frost$core$Int64) {1};
*(&local0) = $tmp2879;
// line 1498
frost$core$Int64 $tmp2880 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2881 = &param0->_length;
frost$core$Int64 $tmp2882 = *$tmp2881;
frost$core$Bit $tmp2883 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2884 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2880, $tmp2882, $tmp2883);
frost$core$Int64 $tmp2885 = $tmp2884.min;
*(&local1) = $tmp2885;
frost$core$Int64 $tmp2886 = $tmp2884.max;
frost$core$Bit $tmp2887 = $tmp2884.inclusive;
bool $tmp2888 = $tmp2887.value;
frost$core$Int64 $tmp2889 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2890 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2889);
if ($tmp2888) goto block4; else goto block5;
block4:;
int64_t $tmp2891 = $tmp2885.value;
int64_t $tmp2892 = $tmp2886.value;
bool $tmp2893 = $tmp2891 <= $tmp2892;
frost$core$Bit $tmp2894 = (frost$core$Bit) {$tmp2893};
bool $tmp2895 = $tmp2894.value;
if ($tmp2895) goto block1; else goto block2;
block5:;
int64_t $tmp2896 = $tmp2885.value;
int64_t $tmp2897 = $tmp2886.value;
bool $tmp2898 = $tmp2896 < $tmp2897;
frost$core$Bit $tmp2899 = (frost$core$Bit) {$tmp2898};
bool $tmp2900 = $tmp2899.value;
if ($tmp2900) goto block1; else goto block2;
block1:;
// line 1499
frost$core$Int64 $tmp2901 = *(&local0);
frost$core$Int64 $tmp2902 = (frost$core$Int64) {101};
int64_t $tmp2903 = $tmp2901.value;
int64_t $tmp2904 = $tmp2902.value;
int64_t $tmp2905 = $tmp2903 * $tmp2904;
frost$core$Int64 $tmp2906 = (frost$core$Int64) {$tmp2905};
frost$core$Char8** $tmp2907 = &param0->data;
frost$core$Char8* $tmp2908 = *$tmp2907;
frost$core$Int64 $tmp2909 = *(&local1);
int64_t $tmp2910 = $tmp2909.value;
frost$core$Char8 $tmp2911 = $tmp2908[$tmp2910];
uint8_t $tmp2912 = $tmp2911.value;
frost$core$Int64 $tmp2913 = (frost$core$Int64) {((int64_t) $tmp2912)};
int64_t $tmp2914 = $tmp2906.value;
int64_t $tmp2915 = $tmp2913.value;
int64_t $tmp2916 = $tmp2914 + $tmp2915;
frost$core$Int64 $tmp2917 = (frost$core$Int64) {$tmp2916};
*(&local0) = $tmp2917;
goto block3;
block3:;
frost$core$Int64 $tmp2918 = *(&local1);
int64_t $tmp2919 = $tmp2886.value;
int64_t $tmp2920 = $tmp2918.value;
int64_t $tmp2921 = $tmp2919 - $tmp2920;
frost$core$Int64 $tmp2922 = (frost$core$Int64) {$tmp2921};
frost$core$UInt64 $tmp2923 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2922);
if ($tmp2888) goto block7; else goto block8;
block7:;
uint64_t $tmp2924 = $tmp2923.value;
uint64_t $tmp2925 = $tmp2890.value;
bool $tmp2926 = $tmp2924 >= $tmp2925;
frost$core$Bit $tmp2927 = (frost$core$Bit) {$tmp2926};
bool $tmp2928 = $tmp2927.value;
if ($tmp2928) goto block6; else goto block2;
block8:;
uint64_t $tmp2929 = $tmp2923.value;
uint64_t $tmp2930 = $tmp2890.value;
bool $tmp2931 = $tmp2929 > $tmp2930;
frost$core$Bit $tmp2932 = (frost$core$Bit) {$tmp2931};
bool $tmp2933 = $tmp2932.value;
if ($tmp2933) goto block6; else goto block2;
block6:;
int64_t $tmp2934 = $tmp2918.value;
int64_t $tmp2935 = $tmp2889.value;
int64_t $tmp2936 = $tmp2934 + $tmp2935;
frost$core$Int64 $tmp2937 = (frost$core$Int64) {$tmp2936};
*(&local1) = $tmp2937;
goto block1;
block2:;
// line 1510
frost$core$Int64 $tmp2938 = *(&local0);
return $tmp2938;

}

