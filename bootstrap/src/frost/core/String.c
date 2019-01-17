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

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$String$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$String$_frost$core$Formattable, { frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$String$class_type frost$core$String$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$core$String$_frost$core$Comparable, { frost$core$String$convert$R$frost$core$String$shim, frost$core$String$cleanup$shim, frost$core$String$format$frost$core$String$R$frost$core$String$shim, frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT, frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT, frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim, frost$core$String$get_length$R$frost$core$Int64, frost$core$String$get_byteLength$R$frost$core$Int64, frost$core$String$startsWith$frost$core$String$R$frost$core$Bit, frost$core$String$endsWith$frost$core$String$R$frost$core$Bit, frost$core$String$get_trimmed$R$frost$core$String, frost$core$String$$ADD$frost$core$String$R$frost$core$String, frost$core$String$$ADD$frost$core$Object$R$frost$core$String, frost$core$String$$MUL$frost$core$Int64$R$frost$core$String, frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32, frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String, frost$core$String$contains$frost$core$Char8$R$frost$core$Bit, frost$core$String$contains$frost$core$String$R$frost$core$Bit, frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q, frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$get_start$R$frost$core$String$Index, frost$core$String$get_end$R$frost$core$String$Index, frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index, frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String, frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$convert$R$frost$core$Int64$Q, frost$core$String$convert$R$frost$core$UInt64$Q, frost$core$String$convert$R$frost$core$Real64$Q, frost$core$String$get_hash$R$frost$core$Int64$shim} };

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
typedef frost$core$Bit (*$fn794)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn803)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn828)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn2219)(frost$core$String*);
typedef frost$core$Object* (*$fn2221)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn2225)(frost$core$Object*);
typedef frost$core$Object* (*$fn2296)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn2298)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2302)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2629)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2693)(frost$collections$CollectionView*);

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
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s969 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1066 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1067 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1077 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1078 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s1407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1688 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s1699 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1700 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s1715 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1716 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s1726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1727 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s1888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1889 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2033 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s2136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s2332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2388 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2650 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2651 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2660 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s2678 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2679 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -286058843379027293, NULL };

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
frost$core$Bit frost$core$String$$GT$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$Bit local2;
frost$core$Char32 local3;
frost$core$Char32 local4;
// line 626
frost$core$String$Index $tmp786 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp786;
// line 627
frost$core$String$Index $tmp787 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local1) = $tmp787;
// line 628
goto block1;
block1:;
frost$core$String$Index $tmp788 = *(&local0);
frost$core$String$Index$wrapper* $tmp789;
$tmp789 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp789->value = $tmp788;
frost$core$String$Index $tmp790 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp791;
$tmp791 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp791->value = $tmp790;
ITable* $tmp792 = ((frost$core$Comparable*) $tmp789)->$class->itable;
while ($tmp792->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp792 = $tmp792->next;
}
$fn794 $tmp793 = $tmp792->methods[1];
frost$core$Bit $tmp795 = $tmp793(((frost$core$Comparable*) $tmp789), ((frost$core$Comparable*) $tmp791));
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block4; else goto block5;
block4:;
frost$core$String$Index $tmp797 = *(&local1);
frost$core$String$Index$wrapper* $tmp798;
$tmp798 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp798->value = $tmp797;
frost$core$String$Index $tmp799 = frost$core$String$get_end$R$frost$core$String$Index(param1);
frost$core$String$Index$wrapper* $tmp800;
$tmp800 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp800->value = $tmp799;
ITable* $tmp801 = ((frost$core$Comparable*) $tmp798)->$class->itable;
while ($tmp801->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp801 = $tmp801->next;
}
$fn803 $tmp802 = $tmp801->methods[1];
frost$core$Bit $tmp804 = $tmp802(((frost$core$Comparable*) $tmp798), ((frost$core$Comparable*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp800)));
// unreffing REF($21:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp798)));
// unreffing REF($18:frost.core.Comparable<frost.core.String.Index>)
*(&local2) = $tmp804;
goto block6;
block5:;
*(&local2) = $tmp795;
goto block6;
block6:;
frost$core$Bit $tmp805 = *(&local2);
bool $tmp806 = $tmp805.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp791)));
// unreffing REF($12:frost.core.Comparable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp789)));
// unreffing REF($9:frost.core.Comparable<frost.core.String.Index>)
if ($tmp806) goto block2; else goto block3;
block2:;
// line 629
frost$core$String$Index $tmp807 = *(&local0);
frost$core$Char32 $tmp808 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp807);
*(&local3) = $tmp808;
// line 630
frost$core$String$Index $tmp809 = *(&local1);
frost$core$Char32 $tmp810 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp809);
*(&local4) = $tmp810;
// line 631
frost$core$Char32 $tmp811 = *(&local3);
frost$core$Char32 $tmp812 = *(&local4);
frost$core$Bit $tmp813 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp811, $tmp812);
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block7; else goto block8;
block7:;
// line 632
frost$core$String$Index $tmp815 = *(&local0);
frost$core$String$Index $tmp816 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp815);
*(&local0) = $tmp816;
// line 633
frost$core$String$Index $tmp817 = *(&local1);
frost$core$String$Index $tmp818 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp817);
*(&local1) = $tmp818;
// line 634
goto block1;
block8:;
// line 636
frost$core$Char32 $tmp819 = *(&local3);
frost$core$Char32 $tmp820 = *(&local4);
frost$core$Bit $tmp821 = frost$core$Char32$$GT$frost$core$Char32$R$frost$core$Bit($tmp819, $tmp820);
return $tmp821;
block3:;
// line 638
frost$core$String$Index $tmp822 = *(&local0);
frost$core$String$Index$wrapper* $tmp823;
$tmp823 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp823->value = $tmp822;
frost$core$String$Index $tmp824 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp825;
$tmp825 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp825->value = $tmp824;
ITable* $tmp826 = ((frost$core$Equatable*) $tmp823)->$class->itable;
while ($tmp826->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp826 = $tmp826->next;
}
$fn828 $tmp827 = $tmp826->methods[1];
frost$core$Bit $tmp829 = $tmp827(((frost$core$Equatable*) $tmp823), ((frost$core$Equatable*) $tmp825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp825)));
// unreffing REF($77:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp823)));
// unreffing REF($74:frost.core.Equatable<frost.core.String.Index>)
return $tmp829;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// line 645
frost$core$Int64 $tmp830 = param1.value;
*(&local0) = $tmp830;
// line 646
frost$core$Char8** $tmp831 = &param0->data;
frost$core$Char8* $tmp832 = *$tmp831;
frost$core$Int64 $tmp833 = *(&local0);
int64_t $tmp834 = $tmp833.value;
frost$core$Char8 $tmp835 = $tmp832[$tmp834];
*(&local1) = $tmp835;
// line 647
frost$core$Char8 $tmp836 = *(&local1);
frost$core$Int32 $tmp837 = frost$core$Char8$convert$R$frost$core$Int32($tmp836);
*(&local2) = $tmp837;
// line 648
frost$core$Char8 $tmp838 = *(&local1);
uint8_t $tmp839 = $tmp838.value;
int64_t $tmp840 = ((int64_t) $tmp839) & 255;
bool $tmp841 = $tmp840 < 192;
frost$core$Bit $tmp842 = frost$core$Bit$init$builtin_bit($tmp841);
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block1; else goto block2;
block1:;
// line 649
frost$core$Int32 $tmp844 = *(&local2);
frost$core$Char32 $tmp845 = frost$core$Char32$init$frost$core$Int32($tmp844);
return $tmp845;
block2:;
// line 651
frost$core$Char8 $tmp846 = *(&local1);
uint8_t $tmp847 = $tmp846.value;
int64_t $tmp848 = ((int64_t) $tmp847) & 255;
bool $tmp849 = $tmp848 < 224;
frost$core$Bit $tmp850 = frost$core$Bit$init$builtin_bit($tmp849);
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block3; else goto block4;
block3:;
// line 652
frost$core$Int64 $tmp852 = *(&local0);
frost$core$Int64 $tmp853 = (frost$core$Int64) {1};
int64_t $tmp854 = $tmp852.value;
int64_t $tmp855 = $tmp853.value;
int64_t $tmp856 = $tmp854 + $tmp855;
frost$core$Int64 $tmp857 = (frost$core$Int64) {$tmp856};
frost$core$Int64* $tmp858 = &param0->_length;
frost$core$Int64 $tmp859 = *$tmp858;
int64_t $tmp860 = $tmp857.value;
int64_t $tmp861 = $tmp859.value;
bool $tmp862 = $tmp860 < $tmp861;
frost$core$Bit $tmp863 = (frost$core$Bit) {$tmp862};
bool $tmp864 = $tmp863.value;
if ($tmp864) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp865 = (frost$core$Int64) {652};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s866, $tmp865);
abort(); // unreachable
block5:;
// line 653
frost$core$Int32 $tmp867 = *(&local2);
frost$core$Int32 $tmp868 = (frost$core$Int32) {31};
frost$core$Int32 $tmp869 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp867, $tmp868);
frost$core$Int32 $tmp870 = (frost$core$Int32) {6};
frost$core$Int32 $tmp871 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp869, $tmp870);
frost$core$Char8** $tmp872 = &param0->data;
frost$core$Char8* $tmp873 = *$tmp872;
frost$core$Int64 $tmp874 = *(&local0);
frost$core$Int64 $tmp875 = (frost$core$Int64) {1};
int64_t $tmp876 = $tmp874.value;
int64_t $tmp877 = $tmp875.value;
int64_t $tmp878 = $tmp876 + $tmp877;
frost$core$Int64 $tmp879 = (frost$core$Int64) {$tmp878};
int64_t $tmp880 = $tmp879.value;
frost$core$Char8 $tmp881 = $tmp873[$tmp880];
frost$core$Int32 $tmp882 = frost$core$Char8$convert$R$frost$core$Int32($tmp881);
frost$core$Int32 $tmp883 = (frost$core$Int32) {63};
frost$core$Int32 $tmp884 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp882, $tmp883);
int32_t $tmp885 = $tmp871.value;
int32_t $tmp886 = $tmp884.value;
int32_t $tmp887 = $tmp885 + $tmp886;
frost$core$Int32 $tmp888 = (frost$core$Int32) {$tmp887};
*(&local2) = $tmp888;
// line 654
frost$core$Int32 $tmp889 = *(&local2);
frost$core$Char32 $tmp890 = frost$core$Char32$init$frost$core$Int32($tmp889);
return $tmp890;
block4:;
// line 656
frost$core$Char8 $tmp891 = *(&local1);
uint8_t $tmp892 = $tmp891.value;
int64_t $tmp893 = ((int64_t) $tmp892) & 255;
bool $tmp894 = $tmp893 < 240;
frost$core$Bit $tmp895 = frost$core$Bit$init$builtin_bit($tmp894);
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block7; else goto block8;
block7:;
// line 657
frost$core$Int64 $tmp897 = *(&local0);
frost$core$Int64 $tmp898 = (frost$core$Int64) {2};
int64_t $tmp899 = $tmp897.value;
int64_t $tmp900 = $tmp898.value;
int64_t $tmp901 = $tmp899 + $tmp900;
frost$core$Int64 $tmp902 = (frost$core$Int64) {$tmp901};
frost$core$Int64* $tmp903 = &param0->_length;
frost$core$Int64 $tmp904 = *$tmp903;
int64_t $tmp905 = $tmp902.value;
int64_t $tmp906 = $tmp904.value;
bool $tmp907 = $tmp905 < $tmp906;
frost$core$Bit $tmp908 = (frost$core$Bit) {$tmp907};
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp910 = (frost$core$Int64) {657};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s911, $tmp910);
abort(); // unreachable
block9:;
// line 658
frost$core$Int32 $tmp912 = *(&local2);
frost$core$Int32 $tmp913 = (frost$core$Int32) {15};
frost$core$Int32 $tmp914 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp912, $tmp913);
frost$core$Int32 $tmp915 = (frost$core$Int32) {12};
frost$core$Int32 $tmp916 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp914, $tmp915);
frost$core$Char8** $tmp917 = &param0->data;
frost$core$Char8* $tmp918 = *$tmp917;
frost$core$Int64 $tmp919 = *(&local0);
frost$core$Int64 $tmp920 = (frost$core$Int64) {1};
int64_t $tmp921 = $tmp919.value;
int64_t $tmp922 = $tmp920.value;
int64_t $tmp923 = $tmp921 + $tmp922;
frost$core$Int64 $tmp924 = (frost$core$Int64) {$tmp923};
int64_t $tmp925 = $tmp924.value;
frost$core$Char8 $tmp926 = $tmp918[$tmp925];
frost$core$Int32 $tmp927 = frost$core$Char8$convert$R$frost$core$Int32($tmp926);
frost$core$Int32 $tmp928 = (frost$core$Int32) {63};
frost$core$Int32 $tmp929 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp927, $tmp928);
frost$core$Int32 $tmp930 = (frost$core$Int32) {6};
frost$core$Int32 $tmp931 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp929, $tmp930);
int32_t $tmp932 = $tmp916.value;
int32_t $tmp933 = $tmp931.value;
int32_t $tmp934 = $tmp932 + $tmp933;
frost$core$Int32 $tmp935 = (frost$core$Int32) {$tmp934};
frost$core$Char8** $tmp936 = &param0->data;
frost$core$Char8* $tmp937 = *$tmp936;
frost$core$Int64 $tmp938 = *(&local0);
frost$core$Int64 $tmp939 = (frost$core$Int64) {2};
int64_t $tmp940 = $tmp938.value;
int64_t $tmp941 = $tmp939.value;
int64_t $tmp942 = $tmp940 + $tmp941;
frost$core$Int64 $tmp943 = (frost$core$Int64) {$tmp942};
int64_t $tmp944 = $tmp943.value;
frost$core$Char8 $tmp945 = $tmp937[$tmp944];
frost$core$Int32 $tmp946 = frost$core$Char8$convert$R$frost$core$Int32($tmp945);
frost$core$Int32 $tmp947 = (frost$core$Int32) {63};
frost$core$Int32 $tmp948 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp946, $tmp947);
int32_t $tmp949 = $tmp935.value;
int32_t $tmp950 = $tmp948.value;
int32_t $tmp951 = $tmp949 + $tmp950;
frost$core$Int32 $tmp952 = (frost$core$Int32) {$tmp951};
*(&local2) = $tmp952;
// line 660
frost$core$Int32 $tmp953 = *(&local2);
frost$core$Char32 $tmp954 = frost$core$Char32$init$frost$core$Int32($tmp953);
return $tmp954;
block8:;
// line 662
frost$core$Int64 $tmp955 = *(&local0);
frost$core$Int64 $tmp956 = (frost$core$Int64) {3};
int64_t $tmp957 = $tmp955.value;
int64_t $tmp958 = $tmp956.value;
int64_t $tmp959 = $tmp957 + $tmp958;
frost$core$Int64 $tmp960 = (frost$core$Int64) {$tmp959};
frost$core$Int64* $tmp961 = &param0->_length;
frost$core$Int64 $tmp962 = *$tmp961;
int64_t $tmp963 = $tmp960.value;
int64_t $tmp964 = $tmp962.value;
bool $tmp965 = $tmp963 < $tmp964;
frost$core$Bit $tmp966 = (frost$core$Bit) {$tmp965};
bool $tmp967 = $tmp966.value;
if ($tmp967) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp968 = (frost$core$Int64) {662};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s969, $tmp968);
abort(); // unreachable
block11:;
// line 663
frost$core$Int32 $tmp970 = *(&local2);
frost$core$Int32 $tmp971 = (frost$core$Int32) {7};
frost$core$Int32 $tmp972 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp970, $tmp971);
frost$core$Int32 $tmp973 = (frost$core$Int32) {18};
frost$core$Int32 $tmp974 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp972, $tmp973);
frost$core$Char8** $tmp975 = &param0->data;
frost$core$Char8* $tmp976 = *$tmp975;
frost$core$Int64 $tmp977 = *(&local0);
frost$core$Int64 $tmp978 = (frost$core$Int64) {1};
int64_t $tmp979 = $tmp977.value;
int64_t $tmp980 = $tmp978.value;
int64_t $tmp981 = $tmp979 + $tmp980;
frost$core$Int64 $tmp982 = (frost$core$Int64) {$tmp981};
int64_t $tmp983 = $tmp982.value;
frost$core$Char8 $tmp984 = $tmp976[$tmp983];
frost$core$Int32 $tmp985 = frost$core$Char8$convert$R$frost$core$Int32($tmp984);
frost$core$Int32 $tmp986 = (frost$core$Int32) {63};
frost$core$Int32 $tmp987 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp985, $tmp986);
frost$core$Int32 $tmp988 = (frost$core$Int32) {12};
frost$core$Int32 $tmp989 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp987, $tmp988);
int32_t $tmp990 = $tmp974.value;
int32_t $tmp991 = $tmp989.value;
int32_t $tmp992 = $tmp990 + $tmp991;
frost$core$Int32 $tmp993 = (frost$core$Int32) {$tmp992};
frost$core$Char8** $tmp994 = &param0->data;
frost$core$Char8* $tmp995 = *$tmp994;
frost$core$Int64 $tmp996 = *(&local0);
frost$core$Int64 $tmp997 = (frost$core$Int64) {2};
int64_t $tmp998 = $tmp996.value;
int64_t $tmp999 = $tmp997.value;
int64_t $tmp1000 = $tmp998 + $tmp999;
frost$core$Int64 $tmp1001 = (frost$core$Int64) {$tmp1000};
int64_t $tmp1002 = $tmp1001.value;
frost$core$Char8 $tmp1003 = $tmp995[$tmp1002];
frost$core$Int32 $tmp1004 = frost$core$Char8$convert$R$frost$core$Int32($tmp1003);
frost$core$Int32 $tmp1005 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1006 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1004, $tmp1005);
frost$core$Int32 $tmp1007 = (frost$core$Int32) {6};
frost$core$Int32 $tmp1008 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1006, $tmp1007);
int32_t $tmp1009 = $tmp993.value;
int32_t $tmp1010 = $tmp1008.value;
int32_t $tmp1011 = $tmp1009 + $tmp1010;
frost$core$Int32 $tmp1012 = (frost$core$Int32) {$tmp1011};
frost$core$Char8** $tmp1013 = &param0->data;
frost$core$Char8* $tmp1014 = *$tmp1013;
frost$core$Int64 $tmp1015 = *(&local0);
frost$core$Int64 $tmp1016 = (frost$core$Int64) {3};
int64_t $tmp1017 = $tmp1015.value;
int64_t $tmp1018 = $tmp1016.value;
int64_t $tmp1019 = $tmp1017 + $tmp1018;
frost$core$Int64 $tmp1020 = (frost$core$Int64) {$tmp1019};
int64_t $tmp1021 = $tmp1020.value;
frost$core$Char8 $tmp1022 = $tmp1014[$tmp1021];
frost$core$Int32 $tmp1023 = frost$core$Char8$convert$R$frost$core$Int32($tmp1022);
frost$core$Int32 $tmp1024 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1025 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1023, $tmp1024);
int32_t $tmp1026 = $tmp1012.value;
int32_t $tmp1027 = $tmp1025.value;
int32_t $tmp1028 = $tmp1026 + $tmp1027;
frost$core$Int32 $tmp1029 = (frost$core$Int32) {$tmp1028};
*(&local2) = $tmp1029;
// line 666
frost$core$Int32 $tmp1030 = *(&local2);
frost$core$Char32 $tmp1031 = frost$core$Char32$init$frost$core$Int32($tmp1030);
return $tmp1031;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32(frost$core$String* param0, frost$core$Int64 param1) {

// line 675
frost$core$String$Index $tmp1032 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$String$Index $tmp1033 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1032, param1);
frost$core$Char32 $tmp1034 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp1033);
return $tmp1034;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
// line 688
frost$core$String$Index $tmp1035 = param1.max;
frost$core$Int64 $tmp1036 = $tmp1035.value;
frost$core$String$Index $tmp1037 = param1.min;
frost$core$Int64 $tmp1038 = $tmp1037.value;
int64_t $tmp1039 = $tmp1036.value;
int64_t $tmp1040 = $tmp1038.value;
int64_t $tmp1041 = $tmp1039 - $tmp1040;
frost$core$Int64 $tmp1042 = (frost$core$Int64) {$tmp1041};
*(&local0) = $tmp1042;
// line 689
frost$core$Bit $tmp1043 = param1.inclusive;
bool $tmp1044 = $tmp1043.value;
if ($tmp1044) goto block1; else goto block2;
block1:;
// line 690
frost$core$Int64 $tmp1045 = *(&local0);
frost$core$Int64 $tmp1046 = (frost$core$Int64) {1};
int64_t $tmp1047 = $tmp1045.value;
int64_t $tmp1048 = $tmp1046.value;
int64_t $tmp1049 = $tmp1047 + $tmp1048;
frost$core$Int64 $tmp1050 = (frost$core$Int64) {$tmp1049};
*(&local0) = $tmp1050;
goto block2;
block2:;
// line 692
frost$core$String* $tmp1051 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8** $tmp1052 = &param0->data;
frost$core$Char8* $tmp1053 = *$tmp1052;
frost$core$String$Index $tmp1054 = param1.min;
frost$core$Int64 $tmp1055 = $tmp1054.value;
int64_t $tmp1056 = $tmp1055.value;
frost$core$Char8* $tmp1057 = $tmp1053 + $tmp1056;
frost$core$Int64 $tmp1058 = *(&local0);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$frost$core$String($tmp1051, $tmp1057, $tmp1058, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
// unreffing REF($24:frost.core.String)
return $tmp1051;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$Bit local1;
frost$core$String$Index local2;
// line 708
// line 709
frost$core$String$Index$nullable $tmp1059 = param1.min;
frost$core$Bit $tmp1060 = frost$core$Bit$init$builtin_bit($tmp1059.nonnull);
bool $tmp1061 = $tmp1060.value;
if ($tmp1061) goto block1; else goto block3;
block1:;
// line 710
frost$core$String$Index$nullable $tmp1062 = param1.min;
frost$core$Bit $tmp1063 = frost$core$Bit$init$builtin_bit($tmp1062.nonnull);
bool $tmp1064 = $tmp1063.value;
if ($tmp1064) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1065 = (frost$core$Int64) {710};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1066, $tmp1065, &$s1067);
abort(); // unreachable
block4:;
*(&local0) = ((frost$core$String$Index) $tmp1062.value);
goto block2;
block3:;
// line 1
// line 713
frost$core$String$Index $tmp1068 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1068;
goto block2;
block2:;
// line 716
frost$core$Bit $tmp1069 = param1.inclusive;
*(&local1) = $tmp1069;
// line 717
// line 718
frost$core$String$Index$nullable $tmp1070 = param1.max;
frost$core$Bit $tmp1071 = frost$core$Bit$init$builtin_bit($tmp1070.nonnull);
bool $tmp1072 = $tmp1071.value;
if ($tmp1072) goto block6; else goto block8;
block6:;
// line 719
frost$core$String$Index$nullable $tmp1073 = param1.max;
frost$core$Bit $tmp1074 = frost$core$Bit$init$builtin_bit($tmp1073.nonnull);
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1076 = (frost$core$Int64) {719};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1077, $tmp1076, &$s1078);
abort(); // unreachable
block9:;
*(&local2) = ((frost$core$String$Index) $tmp1073.value);
goto block7;
block8:;
// line 1
// line 722
frost$core$String$Index $tmp1079 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1079;
// line 723
frost$core$Bit $tmp1080 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1080;
goto block7;
block7:;
// line 725
frost$core$String$Index $tmp1081 = *(&local0);
frost$core$String$Index $tmp1082 = *(&local2);
frost$core$Bit $tmp1083 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1084 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1081, $tmp1082, $tmp1083);
frost$core$String* $tmp1085 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1084);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
// unreffing REF($59:frost.core.String)
return $tmp1085;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
frost$core$Char8 local3;
// line 733
frost$core$String$Index $tmp1086 = param1.min;
frost$core$Int64 $tmp1087 = $tmp1086.value;
*(&local0) = $tmp1087;
// line 734
frost$core$MutableString* $tmp1088 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1088);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
frost$core$MutableString* $tmp1089 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local1) = $tmp1088;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
// unreffing REF($5:frost.core.MutableString)
// line 735
frost$core$String$Index $tmp1090 = param1.max;
frost$core$Int64 $tmp1091 = $tmp1090.value;
*(&local2) = $tmp1091;
// line 736
frost$core$Bit $tmp1092 = param1.inclusive;
bool $tmp1093 = $tmp1092.value;
if ($tmp1093) goto block1; else goto block2;
block1:;
// line 737
frost$core$Int64 $tmp1094 = *(&local2);
frost$core$Int64 $tmp1095 = (frost$core$Int64) {1};
int64_t $tmp1096 = $tmp1094.value;
int64_t $tmp1097 = $tmp1095.value;
int64_t $tmp1098 = $tmp1096 + $tmp1097;
frost$core$Int64 $tmp1099 = (frost$core$Int64) {$tmp1098};
*(&local2) = $tmp1099;
goto block2;
block2:;
// line 739
goto block3;
block3:;
frost$core$Int64 $tmp1100 = *(&local0);
frost$core$Int64 $tmp1101 = *(&local2);
int64_t $tmp1102 = $tmp1100.value;
int64_t $tmp1103 = $tmp1101.value;
bool $tmp1104 = $tmp1102 < $tmp1103;
frost$core$Bit $tmp1105 = (frost$core$Bit) {$tmp1104};
bool $tmp1106 = $tmp1105.value;
if ($tmp1106) goto block4; else goto block5;
block4:;
// line 740
frost$core$Char8** $tmp1107 = &param0->data;
frost$core$Char8* $tmp1108 = *$tmp1107;
frost$core$Int64 $tmp1109 = *(&local0);
int64_t $tmp1110 = $tmp1109.value;
frost$core$Char8 $tmp1111 = $tmp1108[$tmp1110];
*(&local3) = $tmp1111;
// line 741
frost$core$MutableString* $tmp1112 = *(&local1);
frost$core$Char8 $tmp1113 = *(&local3);
frost$core$MutableString$append$frost$core$Char8($tmp1112, $tmp1113);
// line 742
frost$core$Int64 $tmp1114 = *(&local0);
frost$core$Int64 $tmp1115 = (frost$core$Int64) {1};
int64_t $tmp1116 = $tmp1114.value;
int64_t $tmp1117 = $tmp1115.value;
int64_t $tmp1118 = $tmp1116 + $tmp1117;
frost$core$Int64 $tmp1119 = (frost$core$Int64) {$tmp1118};
*(&local0) = $tmp1119;
// line 743
frost$core$Char8 $tmp1120 = *(&local3);
uint8_t $tmp1121 = $tmp1120.value;
int64_t $tmp1122 = ((int64_t) $tmp1121) & 255;
bool $tmp1123 = $tmp1122 >= 192;
frost$core$Bit $tmp1124 = frost$core$Bit$init$builtin_bit($tmp1123);
bool $tmp1125 = $tmp1124.value;
if ($tmp1125) goto block6; else goto block7;
block6:;
// line 744
frost$core$MutableString* $tmp1126 = *(&local1);
frost$core$Char8** $tmp1127 = &param0->data;
frost$core$Char8* $tmp1128 = *$tmp1127;
frost$core$Int64 $tmp1129 = *(&local0);
int64_t $tmp1130 = $tmp1129.value;
frost$core$Char8 $tmp1131 = $tmp1128[$tmp1130];
frost$core$MutableString$append$frost$core$Char8($tmp1126, $tmp1131);
// line 745
frost$core$Int64 $tmp1132 = *(&local0);
frost$core$Int64 $tmp1133 = (frost$core$Int64) {1};
int64_t $tmp1134 = $tmp1132.value;
int64_t $tmp1135 = $tmp1133.value;
int64_t $tmp1136 = $tmp1134 + $tmp1135;
frost$core$Int64 $tmp1137 = (frost$core$Int64) {$tmp1136};
*(&local0) = $tmp1137;
goto block7;
block7:;
// line 747
frost$core$Char8 $tmp1138 = *(&local3);
uint8_t $tmp1139 = $tmp1138.value;
int64_t $tmp1140 = ((int64_t) $tmp1139) & 255;
bool $tmp1141 = $tmp1140 >= 224;
frost$core$Bit $tmp1142 = frost$core$Bit$init$builtin_bit($tmp1141);
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block8; else goto block9;
block8:;
// line 748
frost$core$MutableString* $tmp1144 = *(&local1);
frost$core$Char8** $tmp1145 = &param0->data;
frost$core$Char8* $tmp1146 = *$tmp1145;
frost$core$Int64 $tmp1147 = *(&local0);
int64_t $tmp1148 = $tmp1147.value;
frost$core$Char8 $tmp1149 = $tmp1146[$tmp1148];
frost$core$MutableString$append$frost$core$Char8($tmp1144, $tmp1149);
// line 749
frost$core$Int64 $tmp1150 = *(&local0);
frost$core$Int64 $tmp1151 = (frost$core$Int64) {1};
int64_t $tmp1152 = $tmp1150.value;
int64_t $tmp1153 = $tmp1151.value;
int64_t $tmp1154 = $tmp1152 + $tmp1153;
frost$core$Int64 $tmp1155 = (frost$core$Int64) {$tmp1154};
*(&local0) = $tmp1155;
goto block9;
block9:;
// line 751
frost$core$Char8 $tmp1156 = *(&local3);
uint8_t $tmp1157 = $tmp1156.value;
int64_t $tmp1158 = ((int64_t) $tmp1157) & 255;
bool $tmp1159 = $tmp1158 >= 240;
frost$core$Bit $tmp1160 = frost$core$Bit$init$builtin_bit($tmp1159);
bool $tmp1161 = $tmp1160.value;
if ($tmp1161) goto block10; else goto block11;
block10:;
// line 752
frost$core$MutableString* $tmp1162 = *(&local1);
frost$core$Char8** $tmp1163 = &param0->data;
frost$core$Char8* $tmp1164 = *$tmp1163;
frost$core$Int64 $tmp1165 = *(&local0);
int64_t $tmp1166 = $tmp1165.value;
frost$core$Char8 $tmp1167 = $tmp1164[$tmp1166];
frost$core$MutableString$append$frost$core$Char8($tmp1162, $tmp1167);
// line 753
frost$core$Int64 $tmp1168 = *(&local0);
frost$core$Int64 $tmp1169 = (frost$core$Int64) {1};
int64_t $tmp1170 = $tmp1168.value;
int64_t $tmp1171 = $tmp1169.value;
int64_t $tmp1172 = $tmp1170 + $tmp1171;
frost$core$Int64 $tmp1173 = (frost$core$Int64) {$tmp1172};
*(&local0) = $tmp1173;
goto block11;
block11:;
goto block3;
block5:;
// line 756
frost$core$MutableString* $tmp1174 = *(&local1);
frost$core$String* $tmp1175 = frost$core$MutableString$finish$R$frost$core$String($tmp1174);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
// unreffing REF($144:frost.core.String)
frost$core$MutableString* $tmp1176 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
// unreffing result
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp1175;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$Bit local1;
frost$core$String$Index local2;
// line 767
frost$core$Int64* $tmp1177 = &param0->_length;
frost$core$Int64 $tmp1178 = *$tmp1177;
frost$core$Int64 $tmp1179 = (frost$core$Int64) {0};
frost$core$Bit $tmp1180 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1178, $tmp1179);
bool $tmp1181 = $tmp1180.value;
if ($tmp1181) goto block1; else goto block2;
block1:;
// line 768
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1182));
return &$s1183;
block2:;
// line 770
// line 771
frost$core$String$Index$nullable $tmp1184 = param1.min;
frost$core$Bit $tmp1185 = frost$core$Bit$init$builtin_bit($tmp1184.nonnull);
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block3; else goto block5;
block3:;
// line 772
frost$core$String$Index$nullable $tmp1187 = param1.min;
frost$core$Bit $tmp1188 = frost$core$Bit$init$builtin_bit($tmp1187.nonnull);
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp1190 = (frost$core$Int64) {772};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1191, $tmp1190, &$s1192);
abort(); // unreachable
block6:;
*(&local0) = ((frost$core$String$Index) $tmp1187.value);
goto block4;
block5:;
// line 1
// line 775
frost$core$String$Index $tmp1193 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1193;
goto block4;
block4:;
// line 778
frost$core$Bit $tmp1194 = param1.inclusive;
*(&local1) = $tmp1194;
// line 779
// line 780
frost$core$String$Index$nullable $tmp1195 = param1.max;
frost$core$Bit $tmp1196 = frost$core$Bit$init$builtin_bit($tmp1195.nonnull);
bool $tmp1197 = $tmp1196.value;
if ($tmp1197) goto block8; else goto block10;
block8:;
// line 781
frost$core$String$Index$nullable $tmp1198 = param1.max;
frost$core$Bit $tmp1199 = frost$core$Bit$init$builtin_bit($tmp1198.nonnull);
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1201 = (frost$core$Int64) {781};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1202, $tmp1201, &$s1203);
abort(); // unreachable
block11:;
*(&local2) = ((frost$core$String$Index) $tmp1198.value);
goto block9;
block10:;
// line 1
// line 784
frost$core$String$Index $tmp1204 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1204;
// line 785
frost$core$Bit $tmp1205 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1205;
goto block9;
block9:;
// line 787
frost$core$String$Index $tmp1206 = *(&local0);
frost$core$String$Index $tmp1207 = *(&local2);
frost$core$Bit $tmp1208 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1209 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1206, $tmp1207, $tmp1208);
frost$core$String* $tmp1210 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1209);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
// unreffing REF($70:frost.core.String)
return $tmp1210;

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
// line 803
frost$core$Int64* $tmp1211 = &param0->_length;
frost$core$Int64 $tmp1212 = *$tmp1211;
frost$core$Int64 $tmp1213 = (frost$core$Int64) {0};
frost$core$Bit $tmp1214 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1212, $tmp1213);
bool $tmp1215 = $tmp1214.value;
if ($tmp1215) goto block1; else goto block2;
block1:;
// line 804
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1216));
return &$s1217;
block2:;
// line 806
frost$core$Int64 $tmp1218 = param1.step;
*(&local0) = $tmp1218;
// line 808
// line 809
frost$core$String$Index$nullable $tmp1219 = param1.start;
frost$core$Bit $tmp1220 = frost$core$Bit$init$builtin_bit($tmp1219.nonnull);
bool $tmp1221 = $tmp1220.value;
if ($tmp1221) goto block3; else goto block5;
block3:;
// line 810
frost$core$String$Index$nullable $tmp1222 = param1.start;
frost$core$Bit $tmp1223 = frost$core$Bit$init$builtin_bit($tmp1222.nonnull);
bool $tmp1224 = $tmp1223.value;
if ($tmp1224) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp1225 = (frost$core$Int64) {810};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1226, $tmp1225, &$s1227);
abort(); // unreachable
block6:;
frost$core$Int64 $tmp1228 = ((frost$core$String$Index) $tmp1222.value).value;
*(&local1) = $tmp1228;
goto block4;
block5:;
// line 812
frost$core$Int64 $tmp1229 = *(&local0);
frost$core$Int64 $tmp1230 = (frost$core$Int64) {0};
int64_t $tmp1231 = $tmp1229.value;
int64_t $tmp1232 = $tmp1230.value;
bool $tmp1233 = $tmp1231 > $tmp1232;
frost$core$Bit $tmp1234 = (frost$core$Bit) {$tmp1233};
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block8; else goto block10;
block8:;
// line 813
frost$core$String$Index $tmp1236 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1237 = $tmp1236.value;
*(&local1) = $tmp1237;
goto block9;
block10:;
// line 1
// line 816
frost$core$String$Index $tmp1238 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index $tmp1239 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1238);
frost$core$Int64 $tmp1240 = $tmp1239.value;
*(&local1) = $tmp1240;
goto block9;
block9:;
goto block4;
block4:;
// line 819
// line 820
frost$core$String$Index$nullable $tmp1241 = param1.end;
frost$core$Bit $tmp1242 = frost$core$Bit$init$builtin_bit($tmp1241.nonnull);
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block11; else goto block13;
block11:;
// line 821
frost$core$String$Index$nullable $tmp1244 = param1.end;
frost$core$Bit $tmp1245 = frost$core$Bit$init$builtin_bit($tmp1244.nonnull);
bool $tmp1246 = $tmp1245.value;
if ($tmp1246) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1247 = (frost$core$Int64) {821};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1248, $tmp1247, &$s1249);
abort(); // unreachable
block14:;
frost$core$Int64 $tmp1250 = ((frost$core$String$Index) $tmp1244.value).value;
*(&local2) = $tmp1250;
goto block12;
block13:;
// line 823
frost$core$Int64 $tmp1251 = *(&local0);
frost$core$Int64 $tmp1252 = (frost$core$Int64) {0};
int64_t $tmp1253 = $tmp1251.value;
int64_t $tmp1254 = $tmp1252.value;
bool $tmp1255 = $tmp1253 > $tmp1254;
frost$core$Bit $tmp1256 = (frost$core$Bit) {$tmp1255};
bool $tmp1257 = $tmp1256.value;
if ($tmp1257) goto block16; else goto block18;
block16:;
// line 824
frost$core$String$Index $tmp1258 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1259 = $tmp1258.value;
*(&local2) = $tmp1259;
goto block17;
block18:;
// line 1
// line 827
frost$core$String$Index $tmp1260 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1261 = $tmp1260.value;
*(&local2) = $tmp1261;
goto block17;
block17:;
goto block12;
block12:;
// line 830
frost$core$MutableString* $tmp1262 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1262);
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$MutableString* $tmp1263 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local3) = $tmp1262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
// unreffing REF($98:frost.core.MutableString)
// line 831
frost$core$Int64 $tmp1264 = param1.step;
frost$core$Int64 $tmp1265 = (frost$core$Int64) {0};
int64_t $tmp1266 = $tmp1264.value;
int64_t $tmp1267 = $tmp1265.value;
bool $tmp1268 = $tmp1266 > $tmp1267;
frost$core$Bit $tmp1269 = (frost$core$Bit) {$tmp1268};
bool $tmp1270 = $tmp1269.value;
if ($tmp1270) goto block19; else goto block21;
block19:;
// line 832
goto block22;
block22:;
frost$core$Int64 $tmp1271 = *(&local1);
frost$core$Int64 $tmp1272 = *(&local2);
int64_t $tmp1273 = $tmp1271.value;
int64_t $tmp1274 = $tmp1272.value;
bool $tmp1275 = $tmp1273 < $tmp1274;
frost$core$Bit $tmp1276 = (frost$core$Bit) {$tmp1275};
bool $tmp1277 = $tmp1276.value;
if ($tmp1277) goto block23; else goto block24;
block23:;
// line 833
frost$core$Char8** $tmp1278 = &param0->data;
frost$core$Char8* $tmp1279 = *$tmp1278;
frost$core$Int64 $tmp1280 = *(&local1);
int64_t $tmp1281 = $tmp1280.value;
frost$core$Char8 $tmp1282 = $tmp1279[$tmp1281];
*(&local4) = $tmp1282;
// line 834
frost$core$MutableString* $tmp1283 = *(&local3);
frost$core$Char8 $tmp1284 = *(&local4);
frost$core$MutableString$append$frost$core$Char8($tmp1283, $tmp1284);
// line 835
frost$core$Int64 $tmp1285 = *(&local1);
frost$core$Int64 $tmp1286 = (frost$core$Int64) {1};
int64_t $tmp1287 = $tmp1285.value;
int64_t $tmp1288 = $tmp1286.value;
int64_t $tmp1289 = $tmp1287 + $tmp1288;
frost$core$Int64 $tmp1290 = (frost$core$Int64) {$tmp1289};
*(&local1) = $tmp1290;
// line 836
frost$core$Char8 $tmp1291 = *(&local4);
uint8_t $tmp1292 = $tmp1291.value;
int64_t $tmp1293 = ((int64_t) $tmp1292) & 255;
bool $tmp1294 = $tmp1293 >= 192;
frost$core$Bit $tmp1295 = frost$core$Bit$init$builtin_bit($tmp1294);
bool $tmp1296 = $tmp1295.value;
if ($tmp1296) goto block25; else goto block26;
block25:;
// line 837
frost$core$MutableString* $tmp1297 = *(&local3);
frost$core$Char8** $tmp1298 = &param0->data;
frost$core$Char8* $tmp1299 = *$tmp1298;
frost$core$Int64 $tmp1300 = *(&local1);
int64_t $tmp1301 = $tmp1300.value;
frost$core$Char8 $tmp1302 = $tmp1299[$tmp1301];
frost$core$MutableString$append$frost$core$Char8($tmp1297, $tmp1302);
// line 838
frost$core$Int64 $tmp1303 = *(&local1);
frost$core$Int64 $tmp1304 = (frost$core$Int64) {1};
int64_t $tmp1305 = $tmp1303.value;
int64_t $tmp1306 = $tmp1304.value;
int64_t $tmp1307 = $tmp1305 + $tmp1306;
frost$core$Int64 $tmp1308 = (frost$core$Int64) {$tmp1307};
*(&local1) = $tmp1308;
goto block26;
block26:;
// line 840
frost$core$Char8 $tmp1309 = *(&local4);
uint8_t $tmp1310 = $tmp1309.value;
int64_t $tmp1311 = ((int64_t) $tmp1310) & 255;
bool $tmp1312 = $tmp1311 >= 224;
frost$core$Bit $tmp1313 = frost$core$Bit$init$builtin_bit($tmp1312);
bool $tmp1314 = $tmp1313.value;
if ($tmp1314) goto block27; else goto block28;
block27:;
// line 841
frost$core$MutableString* $tmp1315 = *(&local3);
frost$core$Char8** $tmp1316 = &param0->data;
frost$core$Char8* $tmp1317 = *$tmp1316;
frost$core$Int64 $tmp1318 = *(&local1);
int64_t $tmp1319 = $tmp1318.value;
frost$core$Char8 $tmp1320 = $tmp1317[$tmp1319];
frost$core$MutableString$append$frost$core$Char8($tmp1315, $tmp1320);
// line 842
frost$core$Int64 $tmp1321 = *(&local1);
frost$core$Int64 $tmp1322 = (frost$core$Int64) {1};
int64_t $tmp1323 = $tmp1321.value;
int64_t $tmp1324 = $tmp1322.value;
int64_t $tmp1325 = $tmp1323 + $tmp1324;
frost$core$Int64 $tmp1326 = (frost$core$Int64) {$tmp1325};
*(&local1) = $tmp1326;
goto block28;
block28:;
// line 844
frost$core$Char8 $tmp1327 = *(&local4);
uint8_t $tmp1328 = $tmp1327.value;
int64_t $tmp1329 = ((int64_t) $tmp1328) & 255;
bool $tmp1330 = $tmp1329 >= 240;
frost$core$Bit $tmp1331 = frost$core$Bit$init$builtin_bit($tmp1330);
bool $tmp1332 = $tmp1331.value;
if ($tmp1332) goto block29; else goto block30;
block29:;
// line 845
frost$core$MutableString* $tmp1333 = *(&local3);
frost$core$Char8** $tmp1334 = &param0->data;
frost$core$Char8* $tmp1335 = *$tmp1334;
frost$core$Int64 $tmp1336 = *(&local1);
int64_t $tmp1337 = $tmp1336.value;
frost$core$Char8 $tmp1338 = $tmp1335[$tmp1337];
frost$core$MutableString$append$frost$core$Char8($tmp1333, $tmp1338);
// line 846
frost$core$Int64 $tmp1339 = *(&local1);
frost$core$Int64 $tmp1340 = (frost$core$Int64) {1};
int64_t $tmp1341 = $tmp1339.value;
int64_t $tmp1342 = $tmp1340.value;
int64_t $tmp1343 = $tmp1341 + $tmp1342;
frost$core$Int64 $tmp1344 = (frost$core$Int64) {$tmp1343};
*(&local1) = $tmp1344;
goto block30;
block30:;
// line 848
frost$core$Int64 $tmp1345 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1346 = *(&local0);
frost$core$Bit $tmp1347 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1348 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1345, $tmp1346, $tmp1347);
frost$core$Int64 $tmp1349 = $tmp1348.min;
*(&local5) = $tmp1349;
frost$core$Int64 $tmp1350 = $tmp1348.max;
frost$core$Bit $tmp1351 = $tmp1348.inclusive;
bool $tmp1352 = $tmp1351.value;
frost$core$Int64 $tmp1353 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1354 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1353);
if ($tmp1352) goto block34; else goto block35;
block34:;
int64_t $tmp1355 = $tmp1349.value;
int64_t $tmp1356 = $tmp1350.value;
bool $tmp1357 = $tmp1355 <= $tmp1356;
frost$core$Bit $tmp1358 = (frost$core$Bit) {$tmp1357};
bool $tmp1359 = $tmp1358.value;
if ($tmp1359) goto block31; else goto block32;
block35:;
int64_t $tmp1360 = $tmp1349.value;
int64_t $tmp1361 = $tmp1350.value;
bool $tmp1362 = $tmp1360 < $tmp1361;
frost$core$Bit $tmp1363 = (frost$core$Bit) {$tmp1362};
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block31; else goto block32;
block31:;
// line 849
frost$core$Int64 $tmp1365 = *(&local1);
frost$core$Int64 $tmp1366 = *(&local2);
int64_t $tmp1367 = $tmp1365.value;
int64_t $tmp1368 = $tmp1366.value;
bool $tmp1369 = $tmp1367 >= $tmp1368;
frost$core$Bit $tmp1370 = (frost$core$Bit) {$tmp1369};
bool $tmp1371 = $tmp1370.value;
if ($tmp1371) goto block36; else goto block37;
block36:;
// line 850
frost$core$MutableString* $tmp1372 = *(&local3);
frost$core$String* $tmp1373 = frost$core$MutableString$convert$R$frost$core$String($tmp1372);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
// unreffing REF($262:frost.core.String)
frost$core$MutableString* $tmp1374 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
// unreffing result
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1373;
block37:;
// line 852
frost$core$Int64 $tmp1375 = *(&local1);
frost$core$String$Index $tmp1376 = frost$core$String$Index$init$frost$core$Int64($tmp1375);
frost$core$String$Index $tmp1377 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1376);
frost$core$Int64 $tmp1378 = $tmp1377.value;
*(&local1) = $tmp1378;
goto block33;
block33:;
frost$core$Int64 $tmp1379 = *(&local5);
int64_t $tmp1380 = $tmp1350.value;
int64_t $tmp1381 = $tmp1379.value;
int64_t $tmp1382 = $tmp1380 - $tmp1381;
frost$core$Int64 $tmp1383 = (frost$core$Int64) {$tmp1382};
frost$core$UInt64 $tmp1384 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1383);
if ($tmp1352) goto block39; else goto block40;
block39:;
uint64_t $tmp1385 = $tmp1384.value;
uint64_t $tmp1386 = $tmp1354.value;
bool $tmp1387 = $tmp1385 >= $tmp1386;
frost$core$Bit $tmp1388 = (frost$core$Bit) {$tmp1387};
bool $tmp1389 = $tmp1388.value;
if ($tmp1389) goto block38; else goto block32;
block40:;
uint64_t $tmp1390 = $tmp1384.value;
uint64_t $tmp1391 = $tmp1354.value;
bool $tmp1392 = $tmp1390 > $tmp1391;
frost$core$Bit $tmp1393 = (frost$core$Bit) {$tmp1392};
bool $tmp1394 = $tmp1393.value;
if ($tmp1394) goto block38; else goto block32;
block38:;
int64_t $tmp1395 = $tmp1379.value;
int64_t $tmp1396 = $tmp1353.value;
int64_t $tmp1397 = $tmp1395 + $tmp1396;
frost$core$Int64 $tmp1398 = (frost$core$Int64) {$tmp1397};
*(&local5) = $tmp1398;
goto block31;
block32:;
goto block22;
block24:;
goto block20;
block21:;
// line 1
// line 857
frost$core$Int64 $tmp1399 = param1.step;
frost$core$Int64 $tmp1400 = (frost$core$Int64) {0};
int64_t $tmp1401 = $tmp1399.value;
int64_t $tmp1402 = $tmp1400.value;
bool $tmp1403 = $tmp1401 < $tmp1402;
frost$core$Bit $tmp1404 = (frost$core$Bit) {$tmp1403};
bool $tmp1405 = $tmp1404.value;
if ($tmp1405) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp1406 = (frost$core$Int64) {857};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1407, $tmp1406);
abort(); // unreachable
block41:;
// line 858
goto block43;
block43:;
frost$core$Int64 $tmp1408 = *(&local1);
frost$core$Int64 $tmp1409 = *(&local2);
int64_t $tmp1410 = $tmp1408.value;
int64_t $tmp1411 = $tmp1409.value;
bool $tmp1412 = $tmp1410 > $tmp1411;
frost$core$Bit $tmp1413 = (frost$core$Bit) {$tmp1412};
bool $tmp1414 = $tmp1413.value;
if ($tmp1414) goto block44; else goto block45;
block44:;
// line 859
frost$core$Char8** $tmp1415 = &param0->data;
frost$core$Char8* $tmp1416 = *$tmp1415;
frost$core$Int64 $tmp1417 = *(&local1);
int64_t $tmp1418 = $tmp1417.value;
frost$core$Char8 $tmp1419 = $tmp1416[$tmp1418];
*(&local6) = $tmp1419;
// line 860
frost$core$MutableString* $tmp1420 = *(&local3);
frost$core$Char8 $tmp1421 = *(&local6);
frost$core$MutableString$append$frost$core$Char8($tmp1420, $tmp1421);
// line 861
frost$core$Int64 $tmp1422 = *(&local1);
*(&local7) = $tmp1422;
// line 862
frost$core$Int64 $tmp1423 = *(&local1);
frost$core$Int64 $tmp1424 = (frost$core$Int64) {1};
int64_t $tmp1425 = $tmp1423.value;
int64_t $tmp1426 = $tmp1424.value;
int64_t $tmp1427 = $tmp1425 + $tmp1426;
frost$core$Int64 $tmp1428 = (frost$core$Int64) {$tmp1427};
*(&local1) = $tmp1428;
// line 863
frost$core$Char8 $tmp1429 = *(&local6);
uint8_t $tmp1430 = $tmp1429.value;
int64_t $tmp1431 = ((int64_t) $tmp1430) & 255;
bool $tmp1432 = $tmp1431 >= 192;
frost$core$Bit $tmp1433 = frost$core$Bit$init$builtin_bit($tmp1432);
bool $tmp1434 = $tmp1433.value;
if ($tmp1434) goto block46; else goto block47;
block46:;
// line 864
frost$core$MutableString* $tmp1435 = *(&local3);
frost$core$Char8** $tmp1436 = &param0->data;
frost$core$Char8* $tmp1437 = *$tmp1436;
frost$core$Int64 $tmp1438 = *(&local1);
int64_t $tmp1439 = $tmp1438.value;
frost$core$Char8 $tmp1440 = $tmp1437[$tmp1439];
frost$core$MutableString$append$frost$core$Char8($tmp1435, $tmp1440);
// line 865
frost$core$Int64 $tmp1441 = *(&local1);
frost$core$Int64 $tmp1442 = (frost$core$Int64) {1};
int64_t $tmp1443 = $tmp1441.value;
int64_t $tmp1444 = $tmp1442.value;
int64_t $tmp1445 = $tmp1443 + $tmp1444;
frost$core$Int64 $tmp1446 = (frost$core$Int64) {$tmp1445};
*(&local1) = $tmp1446;
goto block47;
block47:;
// line 867
frost$core$Char8 $tmp1447 = *(&local6);
uint8_t $tmp1448 = $tmp1447.value;
int64_t $tmp1449 = ((int64_t) $tmp1448) & 255;
bool $tmp1450 = $tmp1449 >= 224;
frost$core$Bit $tmp1451 = frost$core$Bit$init$builtin_bit($tmp1450);
bool $tmp1452 = $tmp1451.value;
if ($tmp1452) goto block48; else goto block49;
block48:;
// line 868
frost$core$MutableString* $tmp1453 = *(&local3);
frost$core$Char8** $tmp1454 = &param0->data;
frost$core$Char8* $tmp1455 = *$tmp1454;
frost$core$Int64 $tmp1456 = *(&local1);
int64_t $tmp1457 = $tmp1456.value;
frost$core$Char8 $tmp1458 = $tmp1455[$tmp1457];
frost$core$MutableString$append$frost$core$Char8($tmp1453, $tmp1458);
// line 869
frost$core$Int64 $tmp1459 = *(&local1);
frost$core$Int64 $tmp1460 = (frost$core$Int64) {1};
int64_t $tmp1461 = $tmp1459.value;
int64_t $tmp1462 = $tmp1460.value;
int64_t $tmp1463 = $tmp1461 + $tmp1462;
frost$core$Int64 $tmp1464 = (frost$core$Int64) {$tmp1463};
*(&local1) = $tmp1464;
goto block49;
block49:;
// line 871
frost$core$Char8 $tmp1465 = *(&local6);
uint8_t $tmp1466 = $tmp1465.value;
int64_t $tmp1467 = ((int64_t) $tmp1466) & 255;
bool $tmp1468 = $tmp1467 >= 240;
frost$core$Bit $tmp1469 = frost$core$Bit$init$builtin_bit($tmp1468);
bool $tmp1470 = $tmp1469.value;
if ($tmp1470) goto block50; else goto block51;
block50:;
// line 872
frost$core$MutableString* $tmp1471 = *(&local3);
frost$core$Char8** $tmp1472 = &param0->data;
frost$core$Char8* $tmp1473 = *$tmp1472;
frost$core$Int64 $tmp1474 = *(&local1);
int64_t $tmp1475 = $tmp1474.value;
frost$core$Char8 $tmp1476 = $tmp1473[$tmp1475];
frost$core$MutableString$append$frost$core$Char8($tmp1471, $tmp1476);
goto block51;
block51:;
// line 874
frost$core$Int64 $tmp1477 = *(&local7);
frost$core$Int64 $tmp1478 = (frost$core$Int64) {1};
int64_t $tmp1479 = $tmp1477.value;
int64_t $tmp1480 = $tmp1478.value;
int64_t $tmp1481 = $tmp1479 - $tmp1480;
frost$core$Int64 $tmp1482 = (frost$core$Int64) {$tmp1481};
*(&local1) = $tmp1482;
// line 875
goto block52;
block52:;
frost$core$Char8** $tmp1483 = &param0->data;
frost$core$Char8* $tmp1484 = *$tmp1483;
frost$core$Int64 $tmp1485 = *(&local1);
int64_t $tmp1486 = $tmp1485.value;
frost$core$Char8 $tmp1487 = $tmp1484[$tmp1486];
uint8_t $tmp1488 = $tmp1487.value;
int64_t $tmp1489 = ((int64_t) $tmp1488) & 255;
bool $tmp1490 = $tmp1489 >= 128;
frost$core$Char8** $tmp1491 = &param0->data;
frost$core$Char8* $tmp1492 = *$tmp1491;
frost$core$Int64 $tmp1493 = *(&local1);
int64_t $tmp1494 = $tmp1493.value;
frost$core$Char8 $tmp1495 = $tmp1492[$tmp1494];
uint8_t $tmp1496 = $tmp1495.value;
int64_t $tmp1497 = ((int64_t) $tmp1496) & 255;
bool $tmp1498 = $tmp1497 < 192;
bool $tmp1499 = $tmp1490 & $tmp1498;
frost$core$Bit $tmp1500 = frost$core$Bit$init$builtin_bit($tmp1499);
bool $tmp1501 = $tmp1500.value;
if ($tmp1501) goto block53; else goto block54;
block53:;
// line 876
frost$core$Int64 $tmp1502 = *(&local1);
frost$core$Int64 $tmp1503 = (frost$core$Int64) {1};
int64_t $tmp1504 = $tmp1502.value;
int64_t $tmp1505 = $tmp1503.value;
int64_t $tmp1506 = $tmp1504 - $tmp1505;
frost$core$Int64 $tmp1507 = (frost$core$Int64) {$tmp1506};
*(&local1) = $tmp1507;
goto block52;
block54:;
// line 878
frost$core$Int64 $tmp1508 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64 $tmp1509 = *(&local0);
frost$core$Int64 $tmp1510 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1511 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1512 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1508, $tmp1509, $tmp1510, $tmp1511);
frost$core$Int64 $tmp1513 = $tmp1512.start;
*(&local8) = $tmp1513;
frost$core$Int64 $tmp1514 = $tmp1512.end;
frost$core$Int64 $tmp1515 = $tmp1512.step;
frost$core$UInt64 $tmp1516 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1515);
frost$core$Int64 $tmp1517 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1515);
frost$core$UInt64 $tmp1518 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1517);
frost$core$Bit $tmp1519 = $tmp1512.inclusive;
bool $tmp1520 = $tmp1519.value;
frost$core$Int64 $tmp1521 = (frost$core$Int64) {0};
int64_t $tmp1522 = $tmp1515.value;
int64_t $tmp1523 = $tmp1521.value;
bool $tmp1524 = $tmp1522 >= $tmp1523;
frost$core$Bit $tmp1525 = (frost$core$Bit) {$tmp1524};
bool $tmp1526 = $tmp1525.value;
if ($tmp1526) goto block58; else goto block59;
block58:;
if ($tmp1520) goto block60; else goto block61;
block60:;
int64_t $tmp1527 = $tmp1513.value;
int64_t $tmp1528 = $tmp1514.value;
bool $tmp1529 = $tmp1527 <= $tmp1528;
frost$core$Bit $tmp1530 = (frost$core$Bit) {$tmp1529};
bool $tmp1531 = $tmp1530.value;
if ($tmp1531) goto block55; else goto block56;
block61:;
int64_t $tmp1532 = $tmp1513.value;
int64_t $tmp1533 = $tmp1514.value;
bool $tmp1534 = $tmp1532 < $tmp1533;
frost$core$Bit $tmp1535 = (frost$core$Bit) {$tmp1534};
bool $tmp1536 = $tmp1535.value;
if ($tmp1536) goto block55; else goto block56;
block59:;
if ($tmp1520) goto block62; else goto block63;
block62:;
int64_t $tmp1537 = $tmp1513.value;
int64_t $tmp1538 = $tmp1514.value;
bool $tmp1539 = $tmp1537 >= $tmp1538;
frost$core$Bit $tmp1540 = (frost$core$Bit) {$tmp1539};
bool $tmp1541 = $tmp1540.value;
if ($tmp1541) goto block55; else goto block56;
block63:;
int64_t $tmp1542 = $tmp1513.value;
int64_t $tmp1543 = $tmp1514.value;
bool $tmp1544 = $tmp1542 > $tmp1543;
frost$core$Bit $tmp1545 = (frost$core$Bit) {$tmp1544};
bool $tmp1546 = $tmp1545.value;
if ($tmp1546) goto block55; else goto block56;
block55:;
// line 879
frost$core$Int64 $tmp1547 = *(&local1);
frost$core$Int64 $tmp1548 = *(&local2);
int64_t $tmp1549 = $tmp1547.value;
int64_t $tmp1550 = $tmp1548.value;
bool $tmp1551 = $tmp1549 <= $tmp1550;
frost$core$Bit $tmp1552 = (frost$core$Bit) {$tmp1551};
bool $tmp1553 = $tmp1552.value;
if ($tmp1553) goto block64; else goto block65;
block64:;
// line 880
frost$core$MutableString* $tmp1554 = *(&local3);
frost$core$String* $tmp1555 = frost$core$MutableString$convert$R$frost$core$String($tmp1554);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
// unreffing REF($523:frost.core.String)
frost$core$MutableString* $tmp1556 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
// unreffing result
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1555;
block65:;
// line 882
frost$core$Int64 $tmp1557 = *(&local1);
frost$core$String$Index $tmp1558 = frost$core$String$Index$init$frost$core$Int64($tmp1557);
frost$core$String$Index $tmp1559 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1558);
frost$core$Int64 $tmp1560 = $tmp1559.value;
*(&local1) = $tmp1560;
goto block57;
block57:;
frost$core$Int64 $tmp1561 = *(&local8);
if ($tmp1526) goto block67; else goto block68;
block67:;
int64_t $tmp1562 = $tmp1514.value;
int64_t $tmp1563 = $tmp1561.value;
int64_t $tmp1564 = $tmp1562 - $tmp1563;
frost$core$Int64 $tmp1565 = (frost$core$Int64) {$tmp1564};
frost$core$UInt64 $tmp1566 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1565);
if ($tmp1520) goto block69; else goto block70;
block69:;
uint64_t $tmp1567 = $tmp1566.value;
uint64_t $tmp1568 = $tmp1516.value;
bool $tmp1569 = $tmp1567 >= $tmp1568;
frost$core$Bit $tmp1570 = (frost$core$Bit) {$tmp1569};
bool $tmp1571 = $tmp1570.value;
if ($tmp1571) goto block66; else goto block56;
block70:;
uint64_t $tmp1572 = $tmp1566.value;
uint64_t $tmp1573 = $tmp1516.value;
bool $tmp1574 = $tmp1572 > $tmp1573;
frost$core$Bit $tmp1575 = (frost$core$Bit) {$tmp1574};
bool $tmp1576 = $tmp1575.value;
if ($tmp1576) goto block66; else goto block56;
block68:;
int64_t $tmp1577 = $tmp1561.value;
int64_t $tmp1578 = $tmp1514.value;
int64_t $tmp1579 = $tmp1577 - $tmp1578;
frost$core$Int64 $tmp1580 = (frost$core$Int64) {$tmp1579};
frost$core$UInt64 $tmp1581 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1580);
if ($tmp1520) goto block71; else goto block72;
block71:;
uint64_t $tmp1582 = $tmp1581.value;
uint64_t $tmp1583 = $tmp1518.value;
bool $tmp1584 = $tmp1582 >= $tmp1583;
frost$core$Bit $tmp1585 = (frost$core$Bit) {$tmp1584};
bool $tmp1586 = $tmp1585.value;
if ($tmp1586) goto block66; else goto block56;
block72:;
uint64_t $tmp1587 = $tmp1581.value;
uint64_t $tmp1588 = $tmp1518.value;
bool $tmp1589 = $tmp1587 > $tmp1588;
frost$core$Bit $tmp1590 = (frost$core$Bit) {$tmp1589};
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block66; else goto block56;
block66:;
int64_t $tmp1592 = $tmp1561.value;
int64_t $tmp1593 = $tmp1515.value;
int64_t $tmp1594 = $tmp1592 + $tmp1593;
frost$core$Int64 $tmp1595 = (frost$core$Int64) {$tmp1594};
*(&local8) = $tmp1595;
goto block55;
block56:;
goto block43;
block45:;
goto block20;
block20:;
// line 886
frost$core$Bit $tmp1596 = param1.inclusive;
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block75; else goto block76;
block75:;
*(&local11) = $tmp1596;
goto block77;
block76:;
frost$core$String$Index$nullable $tmp1598 = param1.end;
frost$core$Bit $tmp1599 = frost$core$Bit$init$builtin_bit(!$tmp1598.nonnull);
*(&local11) = $tmp1599;
goto block77;
block77:;
frost$core$Bit $tmp1600 = *(&local11);
bool $tmp1601 = $tmp1600.value;
if ($tmp1601) goto block78; else goto block79;
block78:;
frost$core$Int64 $tmp1602 = *(&local1);
frost$core$Int64 $tmp1603 = *(&local2);
frost$core$Bit $tmp1604 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1602, $tmp1603);
*(&local10) = $tmp1604;
goto block80;
block79:;
*(&local10) = $tmp1600;
goto block80;
block80:;
frost$core$Bit $tmp1605 = *(&local10);
bool $tmp1606 = $tmp1605.value;
if ($tmp1606) goto block81; else goto block82;
block81:;
frost$core$Int64 $tmp1607 = *(&local2);
frost$core$Int64* $tmp1608 = &param0->_length;
frost$core$Int64 $tmp1609 = *$tmp1608;
int64_t $tmp1610 = $tmp1607.value;
int64_t $tmp1611 = $tmp1609.value;
bool $tmp1612 = $tmp1610 < $tmp1611;
frost$core$Bit $tmp1613 = (frost$core$Bit) {$tmp1612};
*(&local9) = $tmp1613;
goto block83;
block82:;
*(&local9) = $tmp1605;
goto block83;
block83:;
frost$core$Bit $tmp1614 = *(&local9);
bool $tmp1615 = $tmp1614.value;
if ($tmp1615) goto block73; else goto block74;
block73:;
// line 887
frost$core$Char8** $tmp1616 = &param0->data;
frost$core$Char8* $tmp1617 = *$tmp1616;
frost$core$Int64 $tmp1618 = *(&local1);
int64_t $tmp1619 = $tmp1618.value;
frost$core$Char8 $tmp1620 = $tmp1617[$tmp1619];
*(&local12) = $tmp1620;
// line 888
frost$core$MutableString* $tmp1621 = *(&local3);
frost$core$Char8 $tmp1622 = *(&local12);
frost$core$MutableString$append$frost$core$Char8($tmp1621, $tmp1622);
// line 889
frost$core$Int64 $tmp1623 = *(&local1);
frost$core$Int64 $tmp1624 = (frost$core$Int64) {1};
int64_t $tmp1625 = $tmp1623.value;
int64_t $tmp1626 = $tmp1624.value;
int64_t $tmp1627 = $tmp1625 + $tmp1626;
frost$core$Int64 $tmp1628 = (frost$core$Int64) {$tmp1627};
*(&local1) = $tmp1628;
// line 890
frost$core$Char8 $tmp1629 = *(&local12);
uint8_t $tmp1630 = $tmp1629.value;
int64_t $tmp1631 = ((int64_t) $tmp1630) & 255;
bool $tmp1632 = $tmp1631 >= 192;
frost$core$Bit $tmp1633 = frost$core$Bit$init$builtin_bit($tmp1632);
bool $tmp1634 = $tmp1633.value;
if ($tmp1634) goto block84; else goto block85;
block84:;
// line 891
frost$core$MutableString* $tmp1635 = *(&local3);
frost$core$Char8** $tmp1636 = &param0->data;
frost$core$Char8* $tmp1637 = *$tmp1636;
frost$core$Int64 $tmp1638 = *(&local1);
int64_t $tmp1639 = $tmp1638.value;
frost$core$Char8 $tmp1640 = $tmp1637[$tmp1639];
frost$core$MutableString$append$frost$core$Char8($tmp1635, $tmp1640);
// line 892
frost$core$Int64 $tmp1641 = *(&local1);
frost$core$Int64 $tmp1642 = (frost$core$Int64) {1};
int64_t $tmp1643 = $tmp1641.value;
int64_t $tmp1644 = $tmp1642.value;
int64_t $tmp1645 = $tmp1643 + $tmp1644;
frost$core$Int64 $tmp1646 = (frost$core$Int64) {$tmp1645};
*(&local1) = $tmp1646;
goto block85;
block85:;
// line 894
frost$core$Char8 $tmp1647 = *(&local12);
uint8_t $tmp1648 = $tmp1647.value;
int64_t $tmp1649 = ((int64_t) $tmp1648) & 255;
bool $tmp1650 = $tmp1649 >= 224;
frost$core$Bit $tmp1651 = frost$core$Bit$init$builtin_bit($tmp1650);
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block86; else goto block87;
block86:;
// line 895
frost$core$MutableString* $tmp1653 = *(&local3);
frost$core$Char8** $tmp1654 = &param0->data;
frost$core$Char8* $tmp1655 = *$tmp1654;
frost$core$Int64 $tmp1656 = *(&local1);
int64_t $tmp1657 = $tmp1656.value;
frost$core$Char8 $tmp1658 = $tmp1655[$tmp1657];
frost$core$MutableString$append$frost$core$Char8($tmp1653, $tmp1658);
// line 896
frost$core$Int64 $tmp1659 = *(&local1);
frost$core$Int64 $tmp1660 = (frost$core$Int64) {1};
int64_t $tmp1661 = $tmp1659.value;
int64_t $tmp1662 = $tmp1660.value;
int64_t $tmp1663 = $tmp1661 + $tmp1662;
frost$core$Int64 $tmp1664 = (frost$core$Int64) {$tmp1663};
*(&local1) = $tmp1664;
goto block87;
block87:;
// line 898
frost$core$Char8 $tmp1665 = *(&local12);
uint8_t $tmp1666 = $tmp1665.value;
int64_t $tmp1667 = ((int64_t) $tmp1666) & 255;
bool $tmp1668 = $tmp1667 >= 240;
frost$core$Bit $tmp1669 = frost$core$Bit$init$builtin_bit($tmp1668);
bool $tmp1670 = $tmp1669.value;
if ($tmp1670) goto block88; else goto block89;
block88:;
// line 899
frost$core$MutableString* $tmp1671 = *(&local3);
frost$core$Char8** $tmp1672 = &param0->data;
frost$core$Char8* $tmp1673 = *$tmp1672;
frost$core$Int64 $tmp1674 = *(&local1);
int64_t $tmp1675 = $tmp1674.value;
frost$core$Char8 $tmp1676 = $tmp1673[$tmp1675];
frost$core$MutableString$append$frost$core$Char8($tmp1671, $tmp1676);
goto block89;
block89:;
goto block74;
block74:;
// line 902
frost$core$MutableString* $tmp1677 = *(&local3);
frost$core$String* $tmp1678 = frost$core$MutableString$finish$R$frost$core$String($tmp1677);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
// unreffing REF($718:frost.core.String)
frost$core$MutableString* $tmp1679 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
// unreffing result
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1678;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 911
// line 912
frost$core$Int64$nullable $tmp1680 = param1.min;
frost$core$Bit $tmp1681 = frost$core$Bit$init$builtin_bit($tmp1680.nonnull);
bool $tmp1682 = $tmp1681.value;
if ($tmp1682) goto block1; else goto block3;
block1:;
// line 913
frost$core$String$Index $tmp1683 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1684 = param1.min;
frost$core$Bit $tmp1685 = frost$core$Bit$init$builtin_bit($tmp1684.nonnull);
bool $tmp1686 = $tmp1685.value;
if ($tmp1686) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1687 = (frost$core$Int64) {913};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1688, $tmp1687, &$s1689);
abort(); // unreachable
block4:;
frost$core$String$Index $tmp1690 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1683, ((frost$core$Int64) $tmp1684.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1690, true });
goto block2;
block3:;
// line 1
// line 916
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 918
// line 919
frost$core$Int64$nullable $tmp1691 = param1.max;
frost$core$Bit $tmp1692 = frost$core$Bit$init$builtin_bit($tmp1691.nonnull);
bool $tmp1693 = $tmp1692.value;
if ($tmp1693) goto block6; else goto block8;
block6:;
// line 920
frost$core$String$Index $tmp1694 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1695 = param1.max;
frost$core$Bit $tmp1696 = frost$core$Bit$init$builtin_bit($tmp1695.nonnull);
bool $tmp1697 = $tmp1696.value;
if ($tmp1697) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1698 = (frost$core$Int64) {920};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1699, $tmp1698, &$s1700);
abort(); // unreachable
block9:;
frost$core$String$Index $tmp1701 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1694, ((frost$core$Int64) $tmp1695.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1701, true });
goto block7;
block8:;
// line 1
// line 923
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block7;
block7:;
// line 925
frost$core$String$Index$nullable $tmp1702 = *(&local0);
frost$core$String$Index$nullable $tmp1703 = *(&local1);
frost$core$Bit $tmp1704 = param1.inclusive;
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1705 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit($tmp1702, $tmp1703, $tmp1704);
frost$core$String* $tmp1706 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp1705);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
// unreffing REF($57:frost.core.String)
return $tmp1706;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 934
// line 935
frost$core$Int64$nullable $tmp1707 = param1.start;
frost$core$Bit $tmp1708 = frost$core$Bit$init$builtin_bit($tmp1707.nonnull);
bool $tmp1709 = $tmp1708.value;
if ($tmp1709) goto block1; else goto block3;
block1:;
// line 936
frost$core$String$Index $tmp1710 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1711 = param1.start;
frost$core$Bit $tmp1712 = frost$core$Bit$init$builtin_bit($tmp1711.nonnull);
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1714 = (frost$core$Int64) {936};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1715, $tmp1714, &$s1716);
abort(); // unreachable
block4:;
frost$core$String$Index $tmp1717 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1710, ((frost$core$Int64) $tmp1711.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1717, true });
goto block2;
block3:;
// line 1
// line 939
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 941
// line 942
frost$core$Int64$nullable $tmp1718 = param1.end;
frost$core$Bit $tmp1719 = frost$core$Bit$init$builtin_bit($tmp1718.nonnull);
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block6; else goto block8;
block6:;
// line 943
frost$core$String$Index $tmp1721 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1722 = param1.end;
frost$core$Bit $tmp1723 = frost$core$Bit$init$builtin_bit($tmp1722.nonnull);
bool $tmp1724 = $tmp1723.value;
if ($tmp1724) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1725 = (frost$core$Int64) {943};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1726, $tmp1725, &$s1727);
abort(); // unreachable
block9:;
frost$core$String$Index $tmp1728 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1721, ((frost$core$Int64) $tmp1722.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1728, true });
goto block7;
block8:;
// line 1
// line 946
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block7;
block7:;
// line 948
frost$core$String$Index$nullable $tmp1729 = *(&local0);
frost$core$String$Index$nullable $tmp1730 = *(&local1);
frost$core$Int64 $tmp1731 = param1.step;
frost$core$Bit $tmp1732 = param1.inclusive;
frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT $tmp1733 = frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Int64$frost$core$Bit($tmp1729, $tmp1730, $tmp1731, $tmp1732);
frost$core$String* $tmp1734 = frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String(param0, $tmp1733);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
// unreffing REF($58:frost.core.String)
return $tmp1734;

}
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(frost$core$String* param0, frost$core$Char8 param1) {

frost$core$Int64 local0;
// line 955
frost$core$Int64 $tmp1735 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1736 = &param0->_length;
frost$core$Int64 $tmp1737 = *$tmp1736;
frost$core$Bit $tmp1738 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1739 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1735, $tmp1737, $tmp1738);
frost$core$Int64 $tmp1740 = $tmp1739.min;
*(&local0) = $tmp1740;
frost$core$Int64 $tmp1741 = $tmp1739.max;
frost$core$Bit $tmp1742 = $tmp1739.inclusive;
bool $tmp1743 = $tmp1742.value;
frost$core$Int64 $tmp1744 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1745 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1744);
if ($tmp1743) goto block4; else goto block5;
block4:;
int64_t $tmp1746 = $tmp1740.value;
int64_t $tmp1747 = $tmp1741.value;
bool $tmp1748 = $tmp1746 <= $tmp1747;
frost$core$Bit $tmp1749 = (frost$core$Bit) {$tmp1748};
bool $tmp1750 = $tmp1749.value;
if ($tmp1750) goto block1; else goto block2;
block5:;
int64_t $tmp1751 = $tmp1740.value;
int64_t $tmp1752 = $tmp1741.value;
bool $tmp1753 = $tmp1751 < $tmp1752;
frost$core$Bit $tmp1754 = (frost$core$Bit) {$tmp1753};
bool $tmp1755 = $tmp1754.value;
if ($tmp1755) goto block1; else goto block2;
block1:;
// line 956
frost$core$Char8** $tmp1756 = &param0->data;
frost$core$Char8* $tmp1757 = *$tmp1756;
frost$core$Int64 $tmp1758 = *(&local0);
int64_t $tmp1759 = $tmp1758.value;
frost$core$Char8 $tmp1760 = $tmp1757[$tmp1759];
frost$core$Bit $tmp1761 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp1760, param1);
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block6; else goto block7;
block6:;
// line 957
frost$core$Bit $tmp1763 = frost$core$Bit$init$builtin_bit(true);
return $tmp1763;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp1764 = *(&local0);
int64_t $tmp1765 = $tmp1741.value;
int64_t $tmp1766 = $tmp1764.value;
int64_t $tmp1767 = $tmp1765 - $tmp1766;
frost$core$Int64 $tmp1768 = (frost$core$Int64) {$tmp1767};
frost$core$UInt64 $tmp1769 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1768);
if ($tmp1743) goto block9; else goto block10;
block9:;
uint64_t $tmp1770 = $tmp1769.value;
uint64_t $tmp1771 = $tmp1745.value;
bool $tmp1772 = $tmp1770 >= $tmp1771;
frost$core$Bit $tmp1773 = (frost$core$Bit) {$tmp1772};
bool $tmp1774 = $tmp1773.value;
if ($tmp1774) goto block8; else goto block2;
block10:;
uint64_t $tmp1775 = $tmp1769.value;
uint64_t $tmp1776 = $tmp1745.value;
bool $tmp1777 = $tmp1775 > $tmp1776;
frost$core$Bit $tmp1778 = (frost$core$Bit) {$tmp1777};
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block8; else goto block2;
block8:;
int64_t $tmp1780 = $tmp1764.value;
int64_t $tmp1781 = $tmp1744.value;
int64_t $tmp1782 = $tmp1780 + $tmp1781;
frost$core$Int64 $tmp1783 = (frost$core$Int64) {$tmp1782};
*(&local0) = $tmp1783;
goto block1;
block2:;
// line 960
frost$core$Bit $tmp1784 = frost$core$Bit$init$builtin_bit(false);
return $tmp1784;

}
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

// line 967
frost$core$String$Index$nullable $tmp1785 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(param0, param1);
frost$core$Bit $tmp1786 = frost$core$Bit$init$builtin_bit($tmp1785.nonnull);
return $tmp1786;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 978
frost$core$String$Index $tmp1787 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1788 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1787);
return $tmp1788;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 990
frost$core$Int64* $tmp1789 = &param0->_length;
frost$core$Int64 $tmp1790 = *$tmp1789;
frost$core$Int64* $tmp1791 = &param1->_length;
frost$core$Int64 $tmp1792 = *$tmp1791;
int64_t $tmp1793 = $tmp1790.value;
int64_t $tmp1794 = $tmp1792.value;
bool $tmp1795 = $tmp1793 < $tmp1794;
frost$core$Bit $tmp1796 = (frost$core$Bit) {$tmp1795};
bool $tmp1797 = $tmp1796.value;
if ($tmp1797) goto block1; else goto block2;
block1:;
// line 991
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 993
frost$core$Int64 $tmp1798 = param2.value;
frost$core$Int64* $tmp1799 = &param0->_length;
frost$core$Int64 $tmp1800 = *$tmp1799;
frost$core$Int64* $tmp1801 = &param1->_length;
frost$core$Int64 $tmp1802 = *$tmp1801;
int64_t $tmp1803 = $tmp1800.value;
int64_t $tmp1804 = $tmp1802.value;
int64_t $tmp1805 = $tmp1803 - $tmp1804;
frost$core$Int64 $tmp1806 = (frost$core$Int64) {$tmp1805};
frost$core$Bit $tmp1807 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp1808 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1798, $tmp1806, $tmp1807);
frost$core$Int64 $tmp1809 = $tmp1808.min;
*(&local0) = $tmp1809;
frost$core$Int64 $tmp1810 = $tmp1808.max;
frost$core$Bit $tmp1811 = $tmp1808.inclusive;
bool $tmp1812 = $tmp1811.value;
frost$core$Int64 $tmp1813 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1814 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1813);
if ($tmp1812) goto block6; else goto block7;
block6:;
int64_t $tmp1815 = $tmp1809.value;
int64_t $tmp1816 = $tmp1810.value;
bool $tmp1817 = $tmp1815 <= $tmp1816;
frost$core$Bit $tmp1818 = (frost$core$Bit) {$tmp1817};
bool $tmp1819 = $tmp1818.value;
if ($tmp1819) goto block3; else goto block4;
block7:;
int64_t $tmp1820 = $tmp1809.value;
int64_t $tmp1821 = $tmp1810.value;
bool $tmp1822 = $tmp1820 < $tmp1821;
frost$core$Bit $tmp1823 = (frost$core$Bit) {$tmp1822};
bool $tmp1824 = $tmp1823.value;
if ($tmp1824) goto block3; else goto block4;
block3:;
// line 994
frost$core$Int64 $tmp1825 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1826 = &param1->_length;
frost$core$Int64 $tmp1827 = *$tmp1826;
frost$core$Bit $tmp1828 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1829 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1825, $tmp1827, $tmp1828);
frost$core$Int64 $tmp1830 = $tmp1829.min;
*(&local1) = $tmp1830;
frost$core$Int64 $tmp1831 = $tmp1829.max;
frost$core$Bit $tmp1832 = $tmp1829.inclusive;
bool $tmp1833 = $tmp1832.value;
frost$core$Int64 $tmp1834 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1835 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1834);
if ($tmp1833) goto block11; else goto block12;
block11:;
int64_t $tmp1836 = $tmp1830.value;
int64_t $tmp1837 = $tmp1831.value;
bool $tmp1838 = $tmp1836 <= $tmp1837;
frost$core$Bit $tmp1839 = (frost$core$Bit) {$tmp1838};
bool $tmp1840 = $tmp1839.value;
if ($tmp1840) goto block8; else goto block9;
block12:;
int64_t $tmp1841 = $tmp1830.value;
int64_t $tmp1842 = $tmp1831.value;
bool $tmp1843 = $tmp1841 < $tmp1842;
frost$core$Bit $tmp1844 = (frost$core$Bit) {$tmp1843};
bool $tmp1845 = $tmp1844.value;
if ($tmp1845) goto block8; else goto block9;
block8:;
// line 995
frost$core$Char8** $tmp1846 = &param0->data;
frost$core$Char8* $tmp1847 = *$tmp1846;
frost$core$Int64 $tmp1848 = *(&local0);
frost$core$Int64 $tmp1849 = *(&local1);
int64_t $tmp1850 = $tmp1848.value;
int64_t $tmp1851 = $tmp1849.value;
int64_t $tmp1852 = $tmp1850 + $tmp1851;
frost$core$Int64 $tmp1853 = (frost$core$Int64) {$tmp1852};
int64_t $tmp1854 = $tmp1853.value;
frost$core$Char8 $tmp1855 = $tmp1847[$tmp1854];
frost$core$Char8** $tmp1856 = &param1->data;
frost$core$Char8* $tmp1857 = *$tmp1856;
frost$core$Int64 $tmp1858 = *(&local1);
int64_t $tmp1859 = $tmp1858.value;
frost$core$Char8 $tmp1860 = $tmp1857[$tmp1859];
frost$core$Bit $tmp1861 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1855, $tmp1860);
bool $tmp1862 = $tmp1861.value;
if ($tmp1862) goto block13; else goto block14;
block13:;
// line 996
goto block5;
block14:;
goto block10;
block10:;
frost$core$Int64 $tmp1863 = *(&local1);
int64_t $tmp1864 = $tmp1831.value;
int64_t $tmp1865 = $tmp1863.value;
int64_t $tmp1866 = $tmp1864 - $tmp1865;
frost$core$Int64 $tmp1867 = (frost$core$Int64) {$tmp1866};
frost$core$UInt64 $tmp1868 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1867);
if ($tmp1833) goto block16; else goto block17;
block16:;
uint64_t $tmp1869 = $tmp1868.value;
uint64_t $tmp1870 = $tmp1835.value;
bool $tmp1871 = $tmp1869 >= $tmp1870;
frost$core$Bit $tmp1872 = (frost$core$Bit) {$tmp1871};
bool $tmp1873 = $tmp1872.value;
if ($tmp1873) goto block15; else goto block9;
block17:;
uint64_t $tmp1874 = $tmp1868.value;
uint64_t $tmp1875 = $tmp1835.value;
bool $tmp1876 = $tmp1874 > $tmp1875;
frost$core$Bit $tmp1877 = (frost$core$Bit) {$tmp1876};
bool $tmp1878 = $tmp1877.value;
if ($tmp1878) goto block15; else goto block9;
block15:;
int64_t $tmp1879 = $tmp1863.value;
int64_t $tmp1880 = $tmp1834.value;
int64_t $tmp1881 = $tmp1879 + $tmp1880;
frost$core$Int64 $tmp1882 = (frost$core$Int64) {$tmp1881};
*(&local1) = $tmp1882;
goto block8;
block9:;
// line 999
frost$core$Int64 $tmp1883 = *(&local0);
frost$core$String$Index $tmp1884 = frost$core$String$Index$init$frost$core$Int64($tmp1883);
frost$core$Bit $tmp1885 = frost$core$Bit$init$builtin_bit(((frost$core$String$Index$nullable) { $tmp1884, true }).nonnull);
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1887 = (frost$core$Int64) {1};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1888, $tmp1887, &$s1889);
abort(); // unreachable
block18:;
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp1884, true }).value), true });
block5:;
frost$core$Int64 $tmp1890 = *(&local0);
int64_t $tmp1891 = $tmp1810.value;
int64_t $tmp1892 = $tmp1890.value;
int64_t $tmp1893 = $tmp1891 - $tmp1892;
frost$core$Int64 $tmp1894 = (frost$core$Int64) {$tmp1893};
frost$core$UInt64 $tmp1895 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1894);
if ($tmp1812) goto block21; else goto block22;
block21:;
uint64_t $tmp1896 = $tmp1895.value;
uint64_t $tmp1897 = $tmp1814.value;
bool $tmp1898 = $tmp1896 >= $tmp1897;
frost$core$Bit $tmp1899 = (frost$core$Bit) {$tmp1898};
bool $tmp1900 = $tmp1899.value;
if ($tmp1900) goto block20; else goto block4;
block22:;
uint64_t $tmp1901 = $tmp1895.value;
uint64_t $tmp1902 = $tmp1814.value;
bool $tmp1903 = $tmp1901 > $tmp1902;
frost$core$Bit $tmp1904 = (frost$core$Bit) {$tmp1903};
bool $tmp1905 = $tmp1904.value;
if ($tmp1905) goto block20; else goto block4;
block20:;
int64_t $tmp1906 = $tmp1890.value;
int64_t $tmp1907 = $tmp1813.value;
int64_t $tmp1908 = $tmp1906 + $tmp1907;
frost$core$Int64 $tmp1909 = (frost$core$Int64) {$tmp1908};
*(&local0) = $tmp1909;
goto block3;
block4:;
// line 1001
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 1012
frost$core$String$Index $tmp1910 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1911 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1910);
return $tmp1911;

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1024
frost$core$Int64* $tmp1912 = &param0->_length;
frost$core$Int64 $tmp1913 = *$tmp1912;
frost$core$Int64* $tmp1914 = &param1->_length;
frost$core$Int64 $tmp1915 = *$tmp1914;
int64_t $tmp1916 = $tmp1913.value;
int64_t $tmp1917 = $tmp1915.value;
bool $tmp1918 = $tmp1916 < $tmp1917;
frost$core$Bit $tmp1919 = (frost$core$Bit) {$tmp1918};
bool $tmp1920 = $tmp1919.value;
if ($tmp1920) goto block1; else goto block2;
block1:;
// line 1025
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 1027
frost$core$Int64 $tmp1921 = param2.value;
frost$core$Int64* $tmp1922 = &param0->_length;
frost$core$Int64 $tmp1923 = *$tmp1922;
frost$core$Int64* $tmp1924 = &param1->_length;
frost$core$Int64 $tmp1925 = *$tmp1924;
int64_t $tmp1926 = $tmp1923.value;
int64_t $tmp1927 = $tmp1925.value;
int64_t $tmp1928 = $tmp1926 - $tmp1927;
frost$core$Int64 $tmp1929 = (frost$core$Int64) {$tmp1928};
frost$core$Int64 $tmp1930 = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64($tmp1921, $tmp1929);
*(&local0) = $tmp1930;
// line 1028
frost$core$Int64 $tmp1931 = *(&local0);
frost$core$Int64 $tmp1932 = (frost$core$Int64) {0};
frost$core$Int64 $tmp1933 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1934 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1935 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1931, $tmp1932, $tmp1933, $tmp1934);
frost$core$Int64 $tmp1936 = $tmp1935.start;
*(&local1) = $tmp1936;
frost$core$Int64 $tmp1937 = $tmp1935.end;
frost$core$Int64 $tmp1938 = $tmp1935.step;
frost$core$UInt64 $tmp1939 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1938);
frost$core$Int64 $tmp1940 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1938);
frost$core$UInt64 $tmp1941 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1940);
frost$core$Bit $tmp1942 = $tmp1935.inclusive;
bool $tmp1943 = $tmp1942.value;
frost$core$Int64 $tmp1944 = (frost$core$Int64) {0};
int64_t $tmp1945 = $tmp1938.value;
int64_t $tmp1946 = $tmp1944.value;
bool $tmp1947 = $tmp1945 >= $tmp1946;
frost$core$Bit $tmp1948 = (frost$core$Bit) {$tmp1947};
bool $tmp1949 = $tmp1948.value;
if ($tmp1949) goto block6; else goto block7;
block6:;
if ($tmp1943) goto block8; else goto block9;
block8:;
int64_t $tmp1950 = $tmp1936.value;
int64_t $tmp1951 = $tmp1937.value;
bool $tmp1952 = $tmp1950 <= $tmp1951;
frost$core$Bit $tmp1953 = (frost$core$Bit) {$tmp1952};
bool $tmp1954 = $tmp1953.value;
if ($tmp1954) goto block3; else goto block4;
block9:;
int64_t $tmp1955 = $tmp1936.value;
int64_t $tmp1956 = $tmp1937.value;
bool $tmp1957 = $tmp1955 < $tmp1956;
frost$core$Bit $tmp1958 = (frost$core$Bit) {$tmp1957};
bool $tmp1959 = $tmp1958.value;
if ($tmp1959) goto block3; else goto block4;
block7:;
if ($tmp1943) goto block10; else goto block11;
block10:;
int64_t $tmp1960 = $tmp1936.value;
int64_t $tmp1961 = $tmp1937.value;
bool $tmp1962 = $tmp1960 >= $tmp1961;
frost$core$Bit $tmp1963 = (frost$core$Bit) {$tmp1962};
bool $tmp1964 = $tmp1963.value;
if ($tmp1964) goto block3; else goto block4;
block11:;
int64_t $tmp1965 = $tmp1936.value;
int64_t $tmp1966 = $tmp1937.value;
bool $tmp1967 = $tmp1965 > $tmp1966;
frost$core$Bit $tmp1968 = (frost$core$Bit) {$tmp1967};
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block3; else goto block4;
block3:;
// line 1029
frost$core$Int64 $tmp1970 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1971 = &param1->_length;
frost$core$Int64 $tmp1972 = *$tmp1971;
frost$core$Bit $tmp1973 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1974 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1970, $tmp1972, $tmp1973);
frost$core$Int64 $tmp1975 = $tmp1974.min;
*(&local2) = $tmp1975;
frost$core$Int64 $tmp1976 = $tmp1974.max;
frost$core$Bit $tmp1977 = $tmp1974.inclusive;
bool $tmp1978 = $tmp1977.value;
frost$core$Int64 $tmp1979 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1980 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1979);
if ($tmp1978) goto block15; else goto block16;
block15:;
int64_t $tmp1981 = $tmp1975.value;
int64_t $tmp1982 = $tmp1976.value;
bool $tmp1983 = $tmp1981 <= $tmp1982;
frost$core$Bit $tmp1984 = (frost$core$Bit) {$tmp1983};
bool $tmp1985 = $tmp1984.value;
if ($tmp1985) goto block12; else goto block13;
block16:;
int64_t $tmp1986 = $tmp1975.value;
int64_t $tmp1987 = $tmp1976.value;
bool $tmp1988 = $tmp1986 < $tmp1987;
frost$core$Bit $tmp1989 = (frost$core$Bit) {$tmp1988};
bool $tmp1990 = $tmp1989.value;
if ($tmp1990) goto block12; else goto block13;
block12:;
// line 1030
frost$core$Char8** $tmp1991 = &param0->data;
frost$core$Char8* $tmp1992 = *$tmp1991;
frost$core$Int64 $tmp1993 = *(&local1);
frost$core$Int64 $tmp1994 = *(&local2);
int64_t $tmp1995 = $tmp1993.value;
int64_t $tmp1996 = $tmp1994.value;
int64_t $tmp1997 = $tmp1995 + $tmp1996;
frost$core$Int64 $tmp1998 = (frost$core$Int64) {$tmp1997};
int64_t $tmp1999 = $tmp1998.value;
frost$core$Char8 $tmp2000 = $tmp1992[$tmp1999];
frost$core$Char8** $tmp2001 = &param1->data;
frost$core$Char8* $tmp2002 = *$tmp2001;
frost$core$Int64 $tmp2003 = *(&local2);
int64_t $tmp2004 = $tmp2003.value;
frost$core$Char8 $tmp2005 = $tmp2002[$tmp2004];
frost$core$Bit $tmp2006 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp2000, $tmp2005);
bool $tmp2007 = $tmp2006.value;
if ($tmp2007) goto block17; else goto block18;
block17:;
// line 1031
goto block5;
block18:;
goto block14;
block14:;
frost$core$Int64 $tmp2008 = *(&local2);
int64_t $tmp2009 = $tmp1976.value;
int64_t $tmp2010 = $tmp2008.value;
int64_t $tmp2011 = $tmp2009 - $tmp2010;
frost$core$Int64 $tmp2012 = (frost$core$Int64) {$tmp2011};
frost$core$UInt64 $tmp2013 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2012);
if ($tmp1978) goto block20; else goto block21;
block20:;
uint64_t $tmp2014 = $tmp2013.value;
uint64_t $tmp2015 = $tmp1980.value;
bool $tmp2016 = $tmp2014 >= $tmp2015;
frost$core$Bit $tmp2017 = (frost$core$Bit) {$tmp2016};
bool $tmp2018 = $tmp2017.value;
if ($tmp2018) goto block19; else goto block13;
block21:;
uint64_t $tmp2019 = $tmp2013.value;
uint64_t $tmp2020 = $tmp1980.value;
bool $tmp2021 = $tmp2019 > $tmp2020;
frost$core$Bit $tmp2022 = (frost$core$Bit) {$tmp2021};
bool $tmp2023 = $tmp2022.value;
if ($tmp2023) goto block19; else goto block13;
block19:;
int64_t $tmp2024 = $tmp2008.value;
int64_t $tmp2025 = $tmp1979.value;
int64_t $tmp2026 = $tmp2024 + $tmp2025;
frost$core$Int64 $tmp2027 = (frost$core$Int64) {$tmp2026};
*(&local2) = $tmp2027;
goto block12;
block13:;
// line 1034
frost$core$Int64 $tmp2028 = *(&local1);
frost$core$String$Index $tmp2029 = frost$core$String$Index$init$frost$core$Int64($tmp2028);
frost$core$Bit $tmp2030 = frost$core$Bit$init$builtin_bit(((frost$core$String$Index$nullable) { $tmp2029, true }).nonnull);
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2032 = (frost$core$Int64) {1};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2033, $tmp2032, &$s2034);
abort(); // unreachable
block22:;
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp2029, true }).value), true });
block5:;
frost$core$Int64 $tmp2035 = *(&local1);
if ($tmp1949) goto block25; else goto block26;
block25:;
int64_t $tmp2036 = $tmp1937.value;
int64_t $tmp2037 = $tmp2035.value;
int64_t $tmp2038 = $tmp2036 - $tmp2037;
frost$core$Int64 $tmp2039 = (frost$core$Int64) {$tmp2038};
frost$core$UInt64 $tmp2040 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2039);
if ($tmp1943) goto block27; else goto block28;
block27:;
uint64_t $tmp2041 = $tmp2040.value;
uint64_t $tmp2042 = $tmp1939.value;
bool $tmp2043 = $tmp2041 >= $tmp2042;
frost$core$Bit $tmp2044 = (frost$core$Bit) {$tmp2043};
bool $tmp2045 = $tmp2044.value;
if ($tmp2045) goto block24; else goto block4;
block28:;
uint64_t $tmp2046 = $tmp2040.value;
uint64_t $tmp2047 = $tmp1939.value;
bool $tmp2048 = $tmp2046 > $tmp2047;
frost$core$Bit $tmp2049 = (frost$core$Bit) {$tmp2048};
bool $tmp2050 = $tmp2049.value;
if ($tmp2050) goto block24; else goto block4;
block26:;
int64_t $tmp2051 = $tmp2035.value;
int64_t $tmp2052 = $tmp1937.value;
int64_t $tmp2053 = $tmp2051 - $tmp2052;
frost$core$Int64 $tmp2054 = (frost$core$Int64) {$tmp2053};
frost$core$UInt64 $tmp2055 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2054);
if ($tmp1943) goto block29; else goto block30;
block29:;
uint64_t $tmp2056 = $tmp2055.value;
uint64_t $tmp2057 = $tmp1941.value;
bool $tmp2058 = $tmp2056 >= $tmp2057;
frost$core$Bit $tmp2059 = (frost$core$Bit) {$tmp2058};
bool $tmp2060 = $tmp2059.value;
if ($tmp2060) goto block24; else goto block4;
block30:;
uint64_t $tmp2061 = $tmp2055.value;
uint64_t $tmp2062 = $tmp1941.value;
bool $tmp2063 = $tmp2061 > $tmp2062;
frost$core$Bit $tmp2064 = (frost$core$Bit) {$tmp2063};
bool $tmp2065 = $tmp2064.value;
if ($tmp2065) goto block24; else goto block4;
block24:;
int64_t $tmp2066 = $tmp2035.value;
int64_t $tmp2067 = $tmp1938.value;
int64_t $tmp2068 = $tmp2066 + $tmp2067;
frost$core$Int64 $tmp2069 = (frost$core$Int64) {$tmp2068};
*(&local1) = $tmp2069;
goto block3;
block4:;
// line 1036
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1047
frost$core$Matcher* $tmp2070 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2071;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2071, $tmp2070);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
// unreffing REF($1:frost.core.Matcher)
return $tmp2071;

}
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1058
frost$core$Matcher* $tmp2072 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2073 = frost$core$Matcher$find$R$frost$core$Bit($tmp2072);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
// unreffing REF($1:frost.core.Matcher)
return $tmp2073;

}
frost$collections$ListView* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q(frost$core$String* param0, frost$core$RegularExpression* param1) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
// line 1072
frost$core$Matcher* $tmp2074 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
frost$core$Matcher* $tmp2075 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
*(&local0) = $tmp2074;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
// unreffing REF($1:frost.core.Matcher)
// line 1073
frost$core$Matcher* $tmp2076 = *(&local0);
frost$core$Bit $tmp2077;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2077, $tmp2076);
bool $tmp2078 = $tmp2077.value;
if ($tmp2078) goto block1; else goto block2;
block1:;
// line 1074
frost$collections$Array* $tmp2079 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2079);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
frost$collections$Array* $tmp2080 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
*(&local1) = $tmp2079;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
// unreffing REF($18:frost.collections.Array<frost.core.String>)
// line 1075
frost$core$Int64 $tmp2081 = (frost$core$Int64) {1};
frost$core$Matcher* $tmp2082 = *(&local0);
frost$core$Int64 $tmp2083;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2083, $tmp2082);
frost$core$Bit $tmp2084 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2085 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2081, $tmp2083, $tmp2084);
frost$core$Int64 $tmp2086 = $tmp2085.min;
*(&local2) = $tmp2086;
frost$core$Int64 $tmp2087 = $tmp2085.max;
frost$core$Bit $tmp2088 = $tmp2085.inclusive;
bool $tmp2089 = $tmp2088.value;
frost$core$Int64 $tmp2090 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2091 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2090);
if ($tmp2089) goto block6; else goto block7;
block6:;
int64_t $tmp2092 = $tmp2086.value;
int64_t $tmp2093 = $tmp2087.value;
bool $tmp2094 = $tmp2092 <= $tmp2093;
frost$core$Bit $tmp2095 = (frost$core$Bit) {$tmp2094};
bool $tmp2096 = $tmp2095.value;
if ($tmp2096) goto block3; else goto block4;
block7:;
int64_t $tmp2097 = $tmp2086.value;
int64_t $tmp2098 = $tmp2087.value;
bool $tmp2099 = $tmp2097 < $tmp2098;
frost$core$Bit $tmp2100 = (frost$core$Bit) {$tmp2099};
bool $tmp2101 = $tmp2100.value;
if ($tmp2101) goto block3; else goto block4;
block3:;
// line 1076
frost$collections$Array* $tmp2102 = *(&local1);
frost$core$Matcher* $tmp2103 = *(&local0);
frost$core$Int64 $tmp2104 = *(&local2);
frost$core$String* $tmp2105 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2103, $tmp2104);
frost$core$Bit $tmp2106 = frost$core$Bit$init$builtin_bit($tmp2105 != NULL);
bool $tmp2107 = $tmp2106.value;
if ($tmp2107) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp2108 = (frost$core$Int64) {1076};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2109, $tmp2108, &$s2110);
abort(); // unreachable
block8:;
frost$collections$Array$add$frost$collections$Array$T($tmp2102, ((frost$core$Object*) $tmp2105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
// unreffing REF($62:frost.core.String?)
goto block5;
block5:;
frost$core$Int64 $tmp2111 = *(&local2);
int64_t $tmp2112 = $tmp2087.value;
int64_t $tmp2113 = $tmp2111.value;
int64_t $tmp2114 = $tmp2112 - $tmp2113;
frost$core$Int64 $tmp2115 = (frost$core$Int64) {$tmp2114};
frost$core$UInt64 $tmp2116 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2115);
if ($tmp2089) goto block11; else goto block12;
block11:;
uint64_t $tmp2117 = $tmp2116.value;
uint64_t $tmp2118 = $tmp2091.value;
bool $tmp2119 = $tmp2117 >= $tmp2118;
frost$core$Bit $tmp2120 = (frost$core$Bit) {$tmp2119};
bool $tmp2121 = $tmp2120.value;
if ($tmp2121) goto block10; else goto block4;
block12:;
uint64_t $tmp2122 = $tmp2116.value;
uint64_t $tmp2123 = $tmp2091.value;
bool $tmp2124 = $tmp2122 > $tmp2123;
frost$core$Bit $tmp2125 = (frost$core$Bit) {$tmp2124};
bool $tmp2126 = $tmp2125.value;
if ($tmp2126) goto block10; else goto block4;
block10:;
int64_t $tmp2127 = $tmp2111.value;
int64_t $tmp2128 = $tmp2090.value;
int64_t $tmp2129 = $tmp2127 + $tmp2128;
frost$core$Int64 $tmp2130 = (frost$core$Int64) {$tmp2129};
*(&local2) = $tmp2130;
goto block3;
block4:;
// line 1078
frost$collections$Array* $tmp2131 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2131)));
frost$collections$Array* $tmp2132 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp2133 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
// unreffing matcher
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) $tmp2131);
block2:;
// line 1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp2134 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
// unreffing matcher
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) NULL);

}
frost$core$String* frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
// line 1091
frost$core$Bit $tmp2135 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s2136);
bool $tmp2137 = $tmp2135.value;
if ($tmp2137) goto block1; else goto block2;
block1:;
// line 1092
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1094
frost$core$MutableString* $tmp2138 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2138);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
frost$core$MutableString* $tmp2139 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
*(&local0) = $tmp2138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
// unreffing REF($9:frost.core.MutableString)
// line 1095
frost$core$String$Index $tmp2140 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2140;
// line 1096
goto block3;
block3:;
// line 1097
frost$core$String$Index $tmp2141 = *(&local1);
frost$core$String$Index$nullable $tmp2142 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2141);
*(&local2) = $tmp2142;
// line 1098
frost$core$String$Index$nullable $tmp2143 = *(&local2);
frost$core$Bit $tmp2144 = frost$core$Bit$init$builtin_bit(!$tmp2143.nonnull);
bool $tmp2145 = $tmp2144.value;
if ($tmp2145) goto block5; else goto block6;
block5:;
// line 1099
frost$core$MutableString* $tmp2146 = *(&local0);
frost$core$String$Index $tmp2147 = *(&local1);
frost$core$Bit $tmp2148 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2149 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2147, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2148);
frost$core$String* $tmp2150 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2149);
frost$core$MutableString$append$frost$core$String($tmp2146, $tmp2150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
// unreffing REF($42:frost.core.String)
// line 1100
goto block4;
block6:;
// line 1102
frost$core$MutableString* $tmp2151 = *(&local0);
frost$core$String$Index $tmp2152 = *(&local1);
frost$core$String$Index$nullable $tmp2153 = *(&local2);
frost$core$Bit $tmp2154 = frost$core$Bit$init$builtin_bit($tmp2153.nonnull);
bool $tmp2155 = $tmp2154.value;
if ($tmp2155) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp2156 = (frost$core$Int64) {1102};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2157, $tmp2156, &$s2158);
abort(); // unreachable
block7:;
frost$core$Bit $tmp2159 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2160 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2152, ((frost$core$String$Index) $tmp2153.value), $tmp2159);
frost$core$String* $tmp2161 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2160);
frost$core$MutableString$append$frost$core$String($tmp2151, $tmp2161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
// unreffing REF($63:frost.core.String)
// line 1103
frost$core$MutableString* $tmp2162 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp2162, param2);
// line 1104
frost$core$String$Index$nullable $tmp2163 = *(&local2);
frost$core$Bit $tmp2164 = frost$core$Bit$init$builtin_bit($tmp2163.nonnull);
bool $tmp2165 = $tmp2164.value;
if ($tmp2165) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp2166 = (frost$core$Int64) {1104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2167, $tmp2166, &$s2168);
abort(); // unreachable
block9:;
frost$core$Int64 $tmp2169 = ((frost$core$String$Index) $tmp2163.value).value;
frost$core$Int64* $tmp2170 = &param1->_length;
frost$core$Int64 $tmp2171 = *$tmp2170;
int64_t $tmp2172 = $tmp2169.value;
int64_t $tmp2173 = $tmp2171.value;
int64_t $tmp2174 = $tmp2172 + $tmp2173;
frost$core$Int64 $tmp2175 = (frost$core$Int64) {$tmp2174};
frost$core$String$Index $tmp2176 = frost$core$String$Index$init$frost$core$Int64($tmp2175);
*(&local1) = $tmp2176;
goto block3;
block4:;
// line 1106
frost$core$MutableString* $tmp2177 = *(&local0);
frost$core$String* $tmp2178 = frost$core$MutableString$finish$R$frost$core$String($tmp2177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
// unreffing REF($93:frost.core.String)
frost$core$MutableString* $tmp2179 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2178;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

// line 1120
frost$core$Bit $tmp2180 = frost$core$Bit$init$builtin_bit(true);
frost$core$String* $tmp2181 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param0, param1, param2, $tmp2180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
// unreffing REF($2:frost.core.String)
return $tmp2181;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// line 1125
frost$core$MutableString* $tmp2182 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2182);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
frost$core$MutableString* $tmp2183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
*(&local0) = $tmp2182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
// unreffing REF($1:frost.core.MutableString)
// line 1126
frost$core$Matcher* $tmp2184 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
frost$core$Matcher* $tmp2185 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
*(&local1) = $tmp2184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
// unreffing REF($14:frost.core.Matcher)
// line 1127
goto block1;
block1:;
frost$core$Matcher* $tmp2186 = *(&local1);
frost$core$Bit $tmp2187 = frost$core$Matcher$find$R$frost$core$Bit($tmp2186);
bool $tmp2188 = $tmp2187.value;
if ($tmp2188) goto block2; else goto block3;
block2:;
// line 1128
frost$core$Matcher* $tmp2189 = *(&local1);
frost$core$MutableString* $tmp2190 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2189, $tmp2190, param2, param3);
goto block1;
block3:;
// line 1130
frost$core$Matcher* $tmp2191 = *(&local1);
frost$core$MutableString* $tmp2192 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2191, $tmp2192);
// line 1131
frost$core$MutableString* $tmp2193 = *(&local0);
frost$core$String* $tmp2194 = frost$core$MutableString$finish$R$frost$core$String($tmp2193);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
// unreffing REF($42:frost.core.String)
frost$core$Matcher* $tmp2195 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2196 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2194;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 1152
frost$core$MutableString* $tmp2197 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2197);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
frost$core$MutableString* $tmp2198 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
*(&local0) = $tmp2197;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
// unreffing REF($1:frost.core.MutableString)
// line 1153
frost$core$Matcher* $tmp2199 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
frost$core$Matcher* $tmp2200 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
*(&local1) = $tmp2199;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
// unreffing REF($14:frost.core.Matcher)
// line 1154
goto block1;
block1:;
frost$core$Matcher* $tmp2201 = *(&local1);
frost$core$Bit $tmp2202 = frost$core$Matcher$find$R$frost$core$Bit($tmp2201);
bool $tmp2203 = $tmp2202.value;
if ($tmp2203) goto block2; else goto block3;
block2:;
// line 1155
frost$core$Matcher* $tmp2204 = *(&local1);
frost$core$MutableString* $tmp2205 = *(&local0);
frost$core$Matcher* $tmp2206 = *(&local1);
frost$core$Int64 $tmp2207 = (frost$core$Int64) {0};
frost$core$String* $tmp2208 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2206, $tmp2207);
frost$core$Bit $tmp2209 = frost$core$Bit$init$builtin_bit($tmp2208 != NULL);
bool $tmp2210 = $tmp2209.value;
if ($tmp2210) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2211 = (frost$core$Int64) {1155};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2212, $tmp2211, &$s2213);
abort(); // unreachable
block4:;
frost$core$Int8** $tmp2214 = &param2->pointer;
frost$core$Int8* $tmp2215 = *$tmp2214;
frost$core$Object** $tmp2216 = &param2->target;
frost$core$Object* $tmp2217 = *$tmp2216;
bool $tmp2218 = $tmp2217 != ((frost$core$Object*) NULL);
if ($tmp2218) goto block6; else goto block7;
block7:;
frost$core$Object* $tmp2220 = (($fn2219) $tmp2215)($tmp2208);
*(&local2) = $tmp2220;
goto block8;
block6:;
frost$core$Object* $tmp2222 = (($fn2221) $tmp2215)($tmp2217, $tmp2208);
*(&local2) = $tmp2222;
goto block8;
block8:;
frost$core$Object* $tmp2223 = *(&local2);
$fn2225 $tmp2224 = ($fn2225) $tmp2223->$class->vtable[0];
frost$core$String* $tmp2226 = $tmp2224($tmp2223);
frost$core$Bit $tmp2227 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2204, $tmp2205, $tmp2226, $tmp2227);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
// unreffing REF($62:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2223);
// unreffing REF($60:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
// unreffing REF($36:frost.core.String?)
goto block1;
block3:;
// line 1157
frost$core$Matcher* $tmp2228 = *(&local1);
frost$core$MutableString* $tmp2229 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2228, $tmp2229);
// line 1158
frost$core$MutableString* $tmp2230 = *(&local0);
frost$core$String* $tmp2231 = frost$core$MutableString$convert$R$frost$core$String($tmp2230);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
// unreffing REF($81:frost.core.String)
frost$core$Matcher* $tmp2232 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2233 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2231;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
frost$core$Object* local4 = NULL;
// line 1172
frost$core$MutableString* $tmp2234 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2234);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
frost$core$MutableString* $tmp2235 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
*(&local0) = $tmp2234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
// unreffing REF($1:frost.core.MutableString)
// line 1173
frost$core$Matcher* $tmp2236 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
frost$core$Matcher* $tmp2237 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
*(&local1) = $tmp2236;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
// unreffing REF($14:frost.core.Matcher)
// line 1174
goto block1;
block1:;
frost$core$Matcher* $tmp2238 = *(&local1);
frost$core$Bit $tmp2239 = frost$core$Matcher$find$R$frost$core$Bit($tmp2238);
bool $tmp2240 = $tmp2239.value;
if ($tmp2240) goto block2; else goto block3;
block2:;
// line 1175
frost$collections$Array* $tmp2241 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2241);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
frost$collections$Array* $tmp2242 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
*(&local2) = $tmp2241;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
// unreffing REF($32:frost.collections.Array<frost.core.String?>)
// line 1176
frost$core$Int64 $tmp2243 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp2244 = *(&local1);
frost$core$Int64 $tmp2245;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2245, $tmp2244);
frost$core$Bit $tmp2246 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2247 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2243, $tmp2245, $tmp2246);
frost$core$Int64 $tmp2248 = $tmp2247.min;
*(&local3) = $tmp2248;
frost$core$Int64 $tmp2249 = $tmp2247.max;
frost$core$Bit $tmp2250 = $tmp2247.inclusive;
bool $tmp2251 = $tmp2250.value;
frost$core$Int64 $tmp2252 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2253 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2252);
if ($tmp2251) goto block7; else goto block8;
block7:;
int64_t $tmp2254 = $tmp2248.value;
int64_t $tmp2255 = $tmp2249.value;
bool $tmp2256 = $tmp2254 <= $tmp2255;
frost$core$Bit $tmp2257 = (frost$core$Bit) {$tmp2256};
bool $tmp2258 = $tmp2257.value;
if ($tmp2258) goto block4; else goto block5;
block8:;
int64_t $tmp2259 = $tmp2248.value;
int64_t $tmp2260 = $tmp2249.value;
bool $tmp2261 = $tmp2259 < $tmp2260;
frost$core$Bit $tmp2262 = (frost$core$Bit) {$tmp2261};
bool $tmp2263 = $tmp2262.value;
if ($tmp2263) goto block4; else goto block5;
block4:;
// line 1177
frost$collections$Array* $tmp2264 = *(&local2);
frost$core$Matcher* $tmp2265 = *(&local1);
frost$core$Int64 $tmp2266 = *(&local3);
frost$core$String* $tmp2267 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2265, $tmp2266);
frost$collections$Array$add$frost$collections$Array$T($tmp2264, ((frost$core$Object*) $tmp2267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
// unreffing REF($76:frost.core.String?)
goto block6;
block6:;
frost$core$Int64 $tmp2268 = *(&local3);
int64_t $tmp2269 = $tmp2249.value;
int64_t $tmp2270 = $tmp2268.value;
int64_t $tmp2271 = $tmp2269 - $tmp2270;
frost$core$Int64 $tmp2272 = (frost$core$Int64) {$tmp2271};
frost$core$UInt64 $tmp2273 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2272);
if ($tmp2251) goto block10; else goto block11;
block10:;
uint64_t $tmp2274 = $tmp2273.value;
uint64_t $tmp2275 = $tmp2253.value;
bool $tmp2276 = $tmp2274 >= $tmp2275;
frost$core$Bit $tmp2277 = (frost$core$Bit) {$tmp2276};
bool $tmp2278 = $tmp2277.value;
if ($tmp2278) goto block9; else goto block5;
block11:;
uint64_t $tmp2279 = $tmp2273.value;
uint64_t $tmp2280 = $tmp2253.value;
bool $tmp2281 = $tmp2279 > $tmp2280;
frost$core$Bit $tmp2282 = (frost$core$Bit) {$tmp2281};
bool $tmp2283 = $tmp2282.value;
if ($tmp2283) goto block9; else goto block5;
block9:;
int64_t $tmp2284 = $tmp2268.value;
int64_t $tmp2285 = $tmp2252.value;
int64_t $tmp2286 = $tmp2284 + $tmp2285;
frost$core$Int64 $tmp2287 = (frost$core$Int64) {$tmp2286};
*(&local3) = $tmp2287;
goto block4;
block5:;
// line 1179
frost$core$Matcher* $tmp2288 = *(&local1);
frost$core$MutableString* $tmp2289 = *(&local0);
frost$collections$Array* $tmp2290 = *(&local2);
frost$core$Int8** $tmp2291 = &param2->pointer;
frost$core$Int8* $tmp2292 = *$tmp2291;
frost$core$Object** $tmp2293 = &param2->target;
frost$core$Object* $tmp2294 = *$tmp2293;
bool $tmp2295 = $tmp2294 != ((frost$core$Object*) NULL);
if ($tmp2295) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp2297 = (($fn2296) $tmp2292)(((frost$collections$ListView*) $tmp2290));
*(&local4) = $tmp2297;
goto block14;
block12:;
frost$core$Object* $tmp2299 = (($fn2298) $tmp2292)($tmp2294, ((frost$collections$ListView*) $tmp2290));
*(&local4) = $tmp2299;
goto block14;
block14:;
frost$core$Object* $tmp2300 = *(&local4);
$fn2302 $tmp2301 = ($fn2302) $tmp2300->$class->vtable[0];
frost$core$String* $tmp2303 = $tmp2301($tmp2300);
frost$core$Bit $tmp2304 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2288, $tmp2289, $tmp2303, $tmp2304);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
// unreffing REF($130:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2300);
// unreffing REF($128:frost.core.Object)
frost$collections$Array* $tmp2305 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
// unreffing groups
*(&local2) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// line 1181
frost$core$Matcher* $tmp2306 = *(&local1);
frost$core$MutableString* $tmp2307 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2306, $tmp2307);
// line 1182
frost$core$MutableString* $tmp2308 = *(&local0);
frost$core$String* $tmp2309 = frost$core$MutableString$convert$R$frost$core$String($tmp2308);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
// unreffing REF($151:frost.core.String)
frost$core$Matcher* $tmp2310 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2311 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2309;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1186
frost$core$Bit $tmp2312 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2313 = frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(param0, param1, $tmp2312);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
// unreffing REF($2:frost.collections.Iterator<frost.core.String.Index>)
return $tmp2313;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Bit param2) {

// line 1190
frost$core$String$MatchIterator* $tmp2314 = (frost$core$String$MatchIterator*) frostObjectAlloc(46, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp2314, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2314)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
// unreffing REF($1:frost.core.String.MatchIterator)
return ((frost$collections$Iterator*) $tmp2314);

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1194
frost$core$Bit $tmp2315 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2316 = frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(param0, param1, $tmp2315);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
// unreffing REF($2:frost.collections.Iterator<frost.core.String.Match>)
return $tmp2316;

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Bit param2) {

// line 1198
frost$core$String$RegexMatchIterator* $tmp2317 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(34, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit($tmp2317, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2317)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
// unreffing REF($1:frost.core.String.RegexMatchIterator)
return ((frost$collections$Iterator*) $tmp2317);

}
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(frost$core$String* param0) {

// line 1205
frost$core$Int64 $tmp2318 = (frost$core$Int64) {0};
frost$core$String$Index $tmp2319 = frost$core$String$Index$init$frost$core$Int64($tmp2318);
return $tmp2319;

}
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(frost$core$String* param0) {

// line 1212
frost$core$Int64* $tmp2320 = &param0->_length;
frost$core$Int64 $tmp2321 = *$tmp2320;
frost$core$String$Index $tmp2322 = frost$core$String$Index$init$frost$core$Int64($tmp2321);
return $tmp2322;

}
frost$core$String$Index frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

int64_t local0;
// line 1222
frost$core$Int64 $tmp2323 = param1.value;
frost$core$Int64* $tmp2324 = &param0->_length;
frost$core$Int64 $tmp2325 = *$tmp2324;
int64_t $tmp2326 = $tmp2323.value;
int64_t $tmp2327 = $tmp2325.value;
bool $tmp2328 = $tmp2326 < $tmp2327;
frost$core$Bit $tmp2329 = (frost$core$Bit) {$tmp2328};
bool $tmp2330 = $tmp2329.value;
if ($tmp2330) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2331 = (frost$core$Int64) {1222};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2332, $tmp2331);
abort(); // unreachable
block1:;
// line 1223
frost$core$Char8** $tmp2333 = &param0->data;
frost$core$Char8* $tmp2334 = *$tmp2333;
frost$core$Int64 $tmp2335 = param1.value;
int64_t $tmp2336 = $tmp2335.value;
frost$core$Char8 $tmp2337 = $tmp2334[$tmp2336];
uint8_t $tmp2338 = $tmp2337.value;
int64_t $tmp2339 = ((int64_t) $tmp2338) & 255;
*(&local0) = $tmp2339;
// line 1224
int64_t $tmp2340 = *(&local0);
bool $tmp2341 = $tmp2340 >= 240;
frost$core$Bit $tmp2342 = frost$core$Bit$init$builtin_bit($tmp2341);
bool $tmp2343 = $tmp2342.value;
if ($tmp2343) goto block3; else goto block4;
block3:;
// line 1225
frost$core$Int64 $tmp2344 = param1.value;
frost$core$Int64 $tmp2345 = (frost$core$Int64) {4};
int64_t $tmp2346 = $tmp2344.value;
int64_t $tmp2347 = $tmp2345.value;
int64_t $tmp2348 = $tmp2346 + $tmp2347;
frost$core$Int64 $tmp2349 = (frost$core$Int64) {$tmp2348};
frost$core$String$Index $tmp2350 = frost$core$String$Index$init$frost$core$Int64($tmp2349);
return $tmp2350;
block4:;
// line 1227
int64_t $tmp2351 = *(&local0);
bool $tmp2352 = $tmp2351 >= 224;
frost$core$Bit $tmp2353 = frost$core$Bit$init$builtin_bit($tmp2352);
bool $tmp2354 = $tmp2353.value;
if ($tmp2354) goto block5; else goto block6;
block5:;
// line 1228
frost$core$Int64 $tmp2355 = param1.value;
frost$core$Int64 $tmp2356 = (frost$core$Int64) {3};
int64_t $tmp2357 = $tmp2355.value;
int64_t $tmp2358 = $tmp2356.value;
int64_t $tmp2359 = $tmp2357 + $tmp2358;
frost$core$Int64 $tmp2360 = (frost$core$Int64) {$tmp2359};
frost$core$String$Index $tmp2361 = frost$core$String$Index$init$frost$core$Int64($tmp2360);
return $tmp2361;
block6:;
// line 1230
int64_t $tmp2362 = *(&local0);
bool $tmp2363 = $tmp2362 >= 192;
frost$core$Bit $tmp2364 = frost$core$Bit$init$builtin_bit($tmp2363);
bool $tmp2365 = $tmp2364.value;
if ($tmp2365) goto block7; else goto block8;
block7:;
// line 1231
frost$core$Int64 $tmp2366 = param1.value;
frost$core$Int64 $tmp2367 = (frost$core$Int64) {2};
int64_t $tmp2368 = $tmp2366.value;
int64_t $tmp2369 = $tmp2367.value;
int64_t $tmp2370 = $tmp2368 + $tmp2369;
frost$core$Int64 $tmp2371 = (frost$core$Int64) {$tmp2370};
frost$core$String$Index $tmp2372 = frost$core$String$Index$init$frost$core$Int64($tmp2371);
return $tmp2372;
block8:;
// line 1233
frost$core$Int64 $tmp2373 = param1.value;
frost$core$Int64 $tmp2374 = (frost$core$Int64) {1};
int64_t $tmp2375 = $tmp2373.value;
int64_t $tmp2376 = $tmp2374.value;
int64_t $tmp2377 = $tmp2375 + $tmp2376;
frost$core$Int64 $tmp2378 = (frost$core$Int64) {$tmp2377};
frost$core$String$Index $tmp2379 = frost$core$String$Index$init$frost$core$Int64($tmp2378);
return $tmp2379;

}
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
// line 1243
frost$core$Int64 $tmp2380 = param1.value;
frost$core$Int64 $tmp2381 = (frost$core$Int64) {0};
int64_t $tmp2382 = $tmp2380.value;
int64_t $tmp2383 = $tmp2381.value;
bool $tmp2384 = $tmp2382 > $tmp2383;
frost$core$Bit $tmp2385 = (frost$core$Bit) {$tmp2384};
bool $tmp2386 = $tmp2385.value;
if ($tmp2386) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2387 = (frost$core$Int64) {1243};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2388, $tmp2387);
abort(); // unreachable
block1:;
// line 1244
frost$core$Int64 $tmp2389 = param1.value;
frost$core$Int64 $tmp2390 = (frost$core$Int64) {1};
int64_t $tmp2391 = $tmp2389.value;
int64_t $tmp2392 = $tmp2390.value;
int64_t $tmp2393 = $tmp2391 - $tmp2392;
frost$core$Int64 $tmp2394 = (frost$core$Int64) {$tmp2393};
*(&local0) = $tmp2394;
// line 1245
goto block3;
block3:;
frost$core$Char8** $tmp2395 = &param0->data;
frost$core$Char8* $tmp2396 = *$tmp2395;
frost$core$Int64 $tmp2397 = *(&local0);
int64_t $tmp2398 = $tmp2397.value;
frost$core$Char8 $tmp2399 = $tmp2396[$tmp2398];
uint8_t $tmp2400 = $tmp2399.value;
int64_t $tmp2401 = ((int64_t) $tmp2400) & 255;
bool $tmp2402 = $tmp2401 >= 128;
frost$core$Char8** $tmp2403 = &param0->data;
frost$core$Char8* $tmp2404 = *$tmp2403;
frost$core$Int64 $tmp2405 = *(&local0);
int64_t $tmp2406 = $tmp2405.value;
frost$core$Char8 $tmp2407 = $tmp2404[$tmp2406];
uint8_t $tmp2408 = $tmp2407.value;
int64_t $tmp2409 = ((int64_t) $tmp2408) & 255;
bool $tmp2410 = $tmp2409 < 192;
bool $tmp2411 = $tmp2402 & $tmp2410;
frost$core$Bit $tmp2412 = frost$core$Bit$init$builtin_bit($tmp2411);
bool $tmp2413 = $tmp2412.value;
if ($tmp2413) goto block4; else goto block5;
block4:;
// line 1247
frost$core$Int64 $tmp2414 = *(&local0);
frost$core$Int64 $tmp2415 = (frost$core$Int64) {1};
int64_t $tmp2416 = $tmp2414.value;
int64_t $tmp2417 = $tmp2415.value;
int64_t $tmp2418 = $tmp2416 - $tmp2417;
frost$core$Int64 $tmp2419 = (frost$core$Int64) {$tmp2418};
*(&local0) = $tmp2419;
goto block3;
block5:;
// line 1249
frost$core$Int64 $tmp2420 = *(&local0);
frost$core$String$Index $tmp2421 = frost$core$String$Index$init$frost$core$Int64($tmp2420);
return $tmp2421;

}
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1, frost$core$Int64 param2) {

frost$core$String$Index local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1259
*(&local0) = param1;
// line 1260
frost$core$Int64 $tmp2422 = (frost$core$Int64) {0};
int64_t $tmp2423 = param2.value;
int64_t $tmp2424 = $tmp2422.value;
bool $tmp2425 = $tmp2423 > $tmp2424;
frost$core$Bit $tmp2426 = (frost$core$Bit) {$tmp2425};
bool $tmp2427 = $tmp2426.value;
if ($tmp2427) goto block1; else goto block3;
block1:;
// line 1261
frost$core$Int64 $tmp2428 = (frost$core$Int64) {0};
frost$core$Bit $tmp2429 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2430 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2428, param2, $tmp2429);
frost$core$Int64 $tmp2431 = $tmp2430.min;
*(&local1) = $tmp2431;
frost$core$Int64 $tmp2432 = $tmp2430.max;
frost$core$Bit $tmp2433 = $tmp2430.inclusive;
bool $tmp2434 = $tmp2433.value;
frost$core$Int64 $tmp2435 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2436 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2435);
if ($tmp2434) goto block7; else goto block8;
block7:;
int64_t $tmp2437 = $tmp2431.value;
int64_t $tmp2438 = $tmp2432.value;
bool $tmp2439 = $tmp2437 <= $tmp2438;
frost$core$Bit $tmp2440 = (frost$core$Bit) {$tmp2439};
bool $tmp2441 = $tmp2440.value;
if ($tmp2441) goto block4; else goto block5;
block8:;
int64_t $tmp2442 = $tmp2431.value;
int64_t $tmp2443 = $tmp2432.value;
bool $tmp2444 = $tmp2442 < $tmp2443;
frost$core$Bit $tmp2445 = (frost$core$Bit) {$tmp2444};
bool $tmp2446 = $tmp2445.value;
if ($tmp2446) goto block4; else goto block5;
block4:;
// line 1262
frost$core$String$Index $tmp2447 = *(&local0);
frost$core$String$Index $tmp2448 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2447);
*(&local0) = $tmp2448;
goto block6;
block6:;
frost$core$Int64 $tmp2449 = *(&local1);
int64_t $tmp2450 = $tmp2432.value;
int64_t $tmp2451 = $tmp2449.value;
int64_t $tmp2452 = $tmp2450 - $tmp2451;
frost$core$Int64 $tmp2453 = (frost$core$Int64) {$tmp2452};
frost$core$UInt64 $tmp2454 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2453);
if ($tmp2434) goto block10; else goto block11;
block10:;
uint64_t $tmp2455 = $tmp2454.value;
uint64_t $tmp2456 = $tmp2436.value;
bool $tmp2457 = $tmp2455 >= $tmp2456;
frost$core$Bit $tmp2458 = (frost$core$Bit) {$tmp2457};
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block9; else goto block5;
block11:;
uint64_t $tmp2460 = $tmp2454.value;
uint64_t $tmp2461 = $tmp2436.value;
bool $tmp2462 = $tmp2460 > $tmp2461;
frost$core$Bit $tmp2463 = (frost$core$Bit) {$tmp2462};
bool $tmp2464 = $tmp2463.value;
if ($tmp2464) goto block9; else goto block5;
block9:;
int64_t $tmp2465 = $tmp2449.value;
int64_t $tmp2466 = $tmp2435.value;
int64_t $tmp2467 = $tmp2465 + $tmp2466;
frost$core$Int64 $tmp2468 = (frost$core$Int64) {$tmp2467};
*(&local1) = $tmp2468;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 1266
frost$core$Int64 $tmp2469 = (frost$core$Int64) {0};
frost$core$Int64 $tmp2470 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp2471 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp2472 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2469, param2, $tmp2470, $tmp2471);
frost$core$Int64 $tmp2473 = $tmp2472.start;
*(&local2) = $tmp2473;
frost$core$Int64 $tmp2474 = $tmp2472.end;
frost$core$Int64 $tmp2475 = $tmp2472.step;
frost$core$UInt64 $tmp2476 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2475);
frost$core$Int64 $tmp2477 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2475);
frost$core$UInt64 $tmp2478 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2477);
frost$core$Bit $tmp2479 = $tmp2472.inclusive;
bool $tmp2480 = $tmp2479.value;
frost$core$Int64 $tmp2481 = (frost$core$Int64) {0};
int64_t $tmp2482 = $tmp2475.value;
int64_t $tmp2483 = $tmp2481.value;
bool $tmp2484 = $tmp2482 >= $tmp2483;
frost$core$Bit $tmp2485 = (frost$core$Bit) {$tmp2484};
bool $tmp2486 = $tmp2485.value;
if ($tmp2486) goto block15; else goto block16;
block15:;
if ($tmp2480) goto block17; else goto block18;
block17:;
int64_t $tmp2487 = $tmp2473.value;
int64_t $tmp2488 = $tmp2474.value;
bool $tmp2489 = $tmp2487 <= $tmp2488;
frost$core$Bit $tmp2490 = (frost$core$Bit) {$tmp2489};
bool $tmp2491 = $tmp2490.value;
if ($tmp2491) goto block12; else goto block13;
block18:;
int64_t $tmp2492 = $tmp2473.value;
int64_t $tmp2493 = $tmp2474.value;
bool $tmp2494 = $tmp2492 < $tmp2493;
frost$core$Bit $tmp2495 = (frost$core$Bit) {$tmp2494};
bool $tmp2496 = $tmp2495.value;
if ($tmp2496) goto block12; else goto block13;
block16:;
if ($tmp2480) goto block19; else goto block20;
block19:;
int64_t $tmp2497 = $tmp2473.value;
int64_t $tmp2498 = $tmp2474.value;
bool $tmp2499 = $tmp2497 >= $tmp2498;
frost$core$Bit $tmp2500 = (frost$core$Bit) {$tmp2499};
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block12; else goto block13;
block20:;
int64_t $tmp2502 = $tmp2473.value;
int64_t $tmp2503 = $tmp2474.value;
bool $tmp2504 = $tmp2502 > $tmp2503;
frost$core$Bit $tmp2505 = (frost$core$Bit) {$tmp2504};
bool $tmp2506 = $tmp2505.value;
if ($tmp2506) goto block12; else goto block13;
block12:;
// line 1267
frost$core$String$Index $tmp2507 = *(&local0);
frost$core$String$Index $tmp2508 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2507);
*(&local0) = $tmp2508;
goto block14;
block14:;
frost$core$Int64 $tmp2509 = *(&local2);
if ($tmp2486) goto block22; else goto block23;
block22:;
int64_t $tmp2510 = $tmp2474.value;
int64_t $tmp2511 = $tmp2509.value;
int64_t $tmp2512 = $tmp2510 - $tmp2511;
frost$core$Int64 $tmp2513 = (frost$core$Int64) {$tmp2512};
frost$core$UInt64 $tmp2514 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2513);
if ($tmp2480) goto block24; else goto block25;
block24:;
uint64_t $tmp2515 = $tmp2514.value;
uint64_t $tmp2516 = $tmp2476.value;
bool $tmp2517 = $tmp2515 >= $tmp2516;
frost$core$Bit $tmp2518 = (frost$core$Bit) {$tmp2517};
bool $tmp2519 = $tmp2518.value;
if ($tmp2519) goto block21; else goto block13;
block25:;
uint64_t $tmp2520 = $tmp2514.value;
uint64_t $tmp2521 = $tmp2476.value;
bool $tmp2522 = $tmp2520 > $tmp2521;
frost$core$Bit $tmp2523 = (frost$core$Bit) {$tmp2522};
bool $tmp2524 = $tmp2523.value;
if ($tmp2524) goto block21; else goto block13;
block23:;
int64_t $tmp2525 = $tmp2509.value;
int64_t $tmp2526 = $tmp2474.value;
int64_t $tmp2527 = $tmp2525 - $tmp2526;
frost$core$Int64 $tmp2528 = (frost$core$Int64) {$tmp2527};
frost$core$UInt64 $tmp2529 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2528);
if ($tmp2480) goto block26; else goto block27;
block26:;
uint64_t $tmp2530 = $tmp2529.value;
uint64_t $tmp2531 = $tmp2478.value;
bool $tmp2532 = $tmp2530 >= $tmp2531;
frost$core$Bit $tmp2533 = (frost$core$Bit) {$tmp2532};
bool $tmp2534 = $tmp2533.value;
if ($tmp2534) goto block21; else goto block13;
block27:;
uint64_t $tmp2535 = $tmp2529.value;
uint64_t $tmp2536 = $tmp2478.value;
bool $tmp2537 = $tmp2535 > $tmp2536;
frost$core$Bit $tmp2538 = (frost$core$Bit) {$tmp2537};
bool $tmp2539 = $tmp2538.value;
if ($tmp2539) goto block21; else goto block13;
block21:;
int64_t $tmp2540 = $tmp2509.value;
int64_t $tmp2541 = $tmp2475.value;
int64_t $tmp2542 = $tmp2540 + $tmp2541;
frost$core$Int64 $tmp2543 = (frost$core$Int64) {$tmp2542};
*(&local2) = $tmp2543;
goto block12;
block13:;
goto block2;
block2:;
// line 1270
frost$core$String$Index $tmp2544 = *(&local0);
return $tmp2544;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1283
frost$core$Int32 $tmp2545 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2546 = frost$core$Char32$init$frost$core$Int32($tmp2545);
frost$core$String* $tmp2547 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2546);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
// unreffing REF($3:frost.core.String)
return $tmp2547;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1297
frost$core$Int64 $tmp2548 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2549 = $tmp2548.value;
int64_t $tmp2550 = param1.value;
bool $tmp2551 = $tmp2549 >= $tmp2550;
frost$core$Bit $tmp2552 = (frost$core$Bit) {$tmp2551};
bool $tmp2553 = $tmp2552.value;
if ($tmp2553) goto block1; else goto block2;
block1:;
// line 1298
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1300
frost$core$Int64 $tmp2554 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2555 = param1.value;
int64_t $tmp2556 = $tmp2554.value;
int64_t $tmp2557 = $tmp2555 - $tmp2556;
frost$core$Int64 $tmp2558 = (frost$core$Int64) {$tmp2557};
frost$core$String* $tmp2559 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2558);
frost$core$String* $tmp2560 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp2559);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
// unreffing REF($18:frost.core.String)
return $tmp2560;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1313
frost$core$Int32 $tmp2561 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2562 = frost$core$Char32$init$frost$core$Int32($tmp2561);
frost$core$String* $tmp2563 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2562);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
// unreffing REF($3:frost.core.String)
return $tmp2563;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1327
frost$core$Int64 $tmp2564 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2565 = $tmp2564.value;
int64_t $tmp2566 = param1.value;
bool $tmp2567 = $tmp2565 >= $tmp2566;
frost$core$Bit $tmp2568 = (frost$core$Bit) {$tmp2567};
bool $tmp2569 = $tmp2568.value;
if ($tmp2569) goto block1; else goto block2;
block1:;
// line 1328
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1330
frost$core$Int64 $tmp2570 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2571 = param1.value;
int64_t $tmp2572 = $tmp2570.value;
int64_t $tmp2573 = $tmp2571 - $tmp2572;
frost$core$Int64 $tmp2574 = (frost$core$Int64) {$tmp2573};
frost$core$String* $tmp2575 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2574);
frost$core$String* $tmp2576 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2575, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
// unreffing REF($18:frost.core.String)
return $tmp2576;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1345
frost$core$Int32 $tmp2577 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2578 = frost$core$Char32$init$frost$core$Int32($tmp2577);
frost$core$String* $tmp2579 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2578);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
// unreffing REF($3:frost.core.String)
return $tmp2579;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1361
frost$core$Int64 $tmp2580 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2581 = $tmp2580.value;
int64_t $tmp2582 = param1.value;
bool $tmp2583 = $tmp2581 >= $tmp2582;
frost$core$Bit $tmp2584 = (frost$core$Bit) {$tmp2583};
bool $tmp2585 = $tmp2584.value;
if ($tmp2585) goto block1; else goto block2;
block1:;
// line 1362
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1364
frost$core$Int64 $tmp2586 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2587 = param1.value;
int64_t $tmp2588 = $tmp2586.value;
int64_t $tmp2589 = $tmp2587 - $tmp2588;
frost$core$Int64 $tmp2590 = (frost$core$Int64) {$tmp2589};
*(&local0) = $tmp2590;
// line 1365
frost$core$Int64 $tmp2591 = *(&local0);
frost$core$Int64 $tmp2592 = (frost$core$Int64) {2};
int64_t $tmp2593 = $tmp2591.value;
int64_t $tmp2594 = $tmp2592.value;
int64_t $tmp2595 = $tmp2593 / $tmp2594;
frost$core$Int64 $tmp2596 = (frost$core$Int64) {$tmp2595};
*(&local1) = $tmp2596;
// line 1366
frost$core$Int64 $tmp2597 = *(&local0);
frost$core$Int64 $tmp2598 = *(&local1);
int64_t $tmp2599 = $tmp2597.value;
int64_t $tmp2600 = $tmp2598.value;
int64_t $tmp2601 = $tmp2599 - $tmp2600;
frost$core$Int64 $tmp2602 = (frost$core$Int64) {$tmp2601};
*(&local2) = $tmp2602;
// line 1367
frost$core$Int64 $tmp2603 = *(&local1);
frost$core$String* $tmp2604 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2603);
frost$core$String* $tmp2605 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2604, param0);
frost$core$Int64 $tmp2606 = *(&local2);
frost$core$String* $tmp2607 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2606);
frost$core$String* $tmp2608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2605, $tmp2607);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
// unreffing REF($41:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
// unreffing REF($40:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
// unreffing REF($38:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
// unreffing REF($37:frost.core.String)
return $tmp2608;

}
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1378
frost$core$Int64 $tmp2609 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2610 = frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
// unreffing REF($2:frost.collections.Array<frost.core.String>)
return $tmp2610;

}
frost$collections$Array* frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
frost$core$Bit local3;
// line 1391
frost$collections$Array* $tmp2611 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2611);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
frost$collections$Array* $tmp2612 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
*(&local0) = $tmp2611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 1392
frost$core$String$Index $tmp2613 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2613;
// line 1393
goto block1;
block1:;
// line 1394
// line 1395
frost$core$Int64* $tmp2614 = &param1->_length;
frost$core$Int64 $tmp2615 = *$tmp2614;
frost$core$Int64 $tmp2616 = (frost$core$Int64) {0};
frost$core$Bit $tmp2617 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2615, $tmp2616);
bool $tmp2618 = $tmp2617.value;
if ($tmp2618) goto block3; else goto block5;
block3:;
// line 1396
frost$core$String$Index $tmp2619 = *(&local1);
frost$core$String$Index $tmp2620 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2619);
*(&local2) = ((frost$core$String$Index$nullable) { $tmp2620, true });
goto block4;
block5:;
// line 1
// line 1399
frost$core$String$Index $tmp2621 = *(&local1);
frost$core$String$Index$nullable $tmp2622 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2621);
*(&local2) = $tmp2622;
goto block4;
block4:;
// line 1401
frost$core$String$Index$nullable $tmp2623 = *(&local2);
frost$core$Bit $tmp2624 = frost$core$Bit$init$builtin_bit(!$tmp2623.nonnull);
bool $tmp2625 = $tmp2624.value;
if ($tmp2625) goto block8; else goto block9;
block8:;
*(&local3) = $tmp2624;
goto block10;
block9:;
frost$collections$Array* $tmp2626 = *(&local0);
ITable* $tmp2627 = ((frost$collections$CollectionView*) $tmp2626)->$class->itable;
while ($tmp2627->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2627 = $tmp2627->next;
}
$fn2629 $tmp2628 = $tmp2627->methods[0];
frost$core$Int64 $tmp2630 = $tmp2628(((frost$collections$CollectionView*) $tmp2626));
frost$core$Int64 $tmp2631 = (frost$core$Int64) {1};
int64_t $tmp2632 = param2.value;
int64_t $tmp2633 = $tmp2631.value;
int64_t $tmp2634 = $tmp2632 - $tmp2633;
frost$core$Int64 $tmp2635 = (frost$core$Int64) {$tmp2634};
frost$core$Bit $tmp2636 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2630, $tmp2635);
*(&local3) = $tmp2636;
goto block10;
block10:;
frost$core$Bit $tmp2637 = *(&local3);
bool $tmp2638 = $tmp2637.value;
if ($tmp2638) goto block6; else goto block7;
block6:;
// line 1402
frost$collections$Array* $tmp2639 = *(&local0);
frost$core$String$Index $tmp2640 = *(&local1);
frost$core$Bit $tmp2641 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2642 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2640, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2641);
frost$core$String* $tmp2643 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2642);
frost$collections$Array$add$frost$collections$Array$T($tmp2639, ((frost$core$Object*) $tmp2643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
// unreffing REF($69:frost.core.String)
// line 1403
goto block2;
block7:;
// line 1405
frost$collections$Array* $tmp2644 = *(&local0);
frost$core$String$Index $tmp2645 = *(&local1);
frost$core$String$Index$nullable $tmp2646 = *(&local2);
frost$core$Bit $tmp2647 = frost$core$Bit$init$builtin_bit($tmp2646.nonnull);
bool $tmp2648 = $tmp2647.value;
if ($tmp2648) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2649 = (frost$core$Int64) {1405};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2650, $tmp2649, &$s2651);
abort(); // unreachable
block11:;
frost$core$Bit $tmp2652 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2653 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2645, ((frost$core$String$Index) $tmp2646.value), $tmp2652);
frost$core$String* $tmp2654 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2653);
frost$collections$Array$add$frost$collections$Array$T($tmp2644, ((frost$core$Object*) $tmp2654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
// unreffing REF($92:frost.core.String)
// line 1406
frost$core$String$Index$nullable $tmp2655 = *(&local2);
frost$core$Bit $tmp2656 = frost$core$Bit$init$builtin_bit($tmp2655.nonnull);
bool $tmp2657 = $tmp2656.value;
if ($tmp2657) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp2658 = (frost$core$Int64) {1406};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2659, $tmp2658, &$s2660);
abort(); // unreachable
block13:;
frost$core$Int64 $tmp2661 = ((frost$core$String$Index) $tmp2655.value).value;
frost$core$Int64* $tmp2662 = &param1->_length;
frost$core$Int64 $tmp2663 = *$tmp2662;
int64_t $tmp2664 = $tmp2661.value;
int64_t $tmp2665 = $tmp2663.value;
int64_t $tmp2666 = $tmp2664 + $tmp2665;
frost$core$Int64 $tmp2667 = (frost$core$Int64) {$tmp2666};
frost$core$String$Index $tmp2668 = frost$core$String$Index$init$frost$core$Int64($tmp2667);
*(&local1) = $tmp2668;
goto block1;
block2:;
// line 1408
frost$collections$Array* $tmp2669 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
frost$collections$Array* $tmp2670 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2669;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$String$Index local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$String$Index local5;
frost$core$Int64 $tmp2671 = (frost$core$Int64) {0};
int64_t $tmp2672 = param2.value;
int64_t $tmp2673 = $tmp2671.value;
bool $tmp2674 = $tmp2672 > $tmp2673;
frost$core$Bit $tmp2675 = (frost$core$Bit) {$tmp2674};
bool $tmp2676 = $tmp2675.value;
if ($tmp2676) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2677 = (frost$core$Int64) {1422};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2678, $tmp2677, &$s2679);
abort(); // unreachable
block1:;
// line 1423
frost$collections$Array* $tmp2680 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2680);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
frost$collections$Array* $tmp2681 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
*(&local0) = $tmp2680;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
// unreffing REF($11:frost.collections.Array<frost.core.String>)
// line 1424
frost$core$Matcher* $tmp2682 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
frost$core$Matcher* $tmp2683 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
*(&local1) = $tmp2682;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
// unreffing REF($25:frost.core.Matcher)
// line 1425
frost$core$String$Index $tmp2684 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp2684;
// line 1426
goto block3;
block3:;
// line 1427
frost$core$Matcher* $tmp2685 = *(&local1);
frost$core$Bit $tmp2686 = frost$core$Matcher$find$R$frost$core$Bit($tmp2685);
*(&local3) = $tmp2686;
// line 1428
frost$core$Bit $tmp2687 = *(&local3);
frost$core$Bit $tmp2688 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2687);
bool $tmp2689 = $tmp2688.value;
if ($tmp2689) goto block7; else goto block8;
block7:;
*(&local4) = $tmp2688;
goto block9;
block8:;
frost$collections$Array* $tmp2690 = *(&local0);
ITable* $tmp2691 = ((frost$collections$CollectionView*) $tmp2690)->$class->itable;
while ($tmp2691->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2691 = $tmp2691->next;
}
$fn2693 $tmp2692 = $tmp2691->methods[0];
frost$core$Int64 $tmp2694 = $tmp2692(((frost$collections$CollectionView*) $tmp2690));
frost$core$Int64 $tmp2695 = (frost$core$Int64) {1};
int64_t $tmp2696 = param2.value;
int64_t $tmp2697 = $tmp2695.value;
int64_t $tmp2698 = $tmp2696 - $tmp2697;
frost$core$Int64 $tmp2699 = (frost$core$Int64) {$tmp2698};
frost$core$Bit $tmp2700 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2694, $tmp2699);
*(&local4) = $tmp2700;
goto block9;
block9:;
frost$core$Bit $tmp2701 = *(&local4);
bool $tmp2702 = $tmp2701.value;
if ($tmp2702) goto block5; else goto block6;
block5:;
// line 1429
frost$collections$Array* $tmp2703 = *(&local0);
frost$core$String$Index $tmp2704 = *(&local2);
frost$core$Bit $tmp2705 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2706 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2704, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2705);
frost$core$String* $tmp2707 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2706);
frost$collections$Array$add$frost$collections$Array$T($tmp2703, ((frost$core$Object*) $tmp2707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
// unreffing REF($74:frost.core.String)
// line 1430
goto block4;
block6:;
// line 1432
frost$core$Matcher* $tmp2708 = *(&local1);
frost$core$String$Index $tmp2709;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp2709, $tmp2708);
*(&local5) = $tmp2709;
// line 1433
frost$collections$Array* $tmp2710 = *(&local0);
frost$core$String$Index $tmp2711 = *(&local2);
frost$core$String$Index $tmp2712 = *(&local5);
frost$core$Bit $tmp2713 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2714 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2711, $tmp2712, $tmp2713);
frost$core$String* $tmp2715 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2714);
frost$collections$Array$add$frost$collections$Array$T($tmp2710, ((frost$core$Object*) $tmp2715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
// unreffing REF($93:frost.core.String)
// line 1434
frost$core$String$Index $tmp2716 = *(&local5);
frost$core$Int64 $tmp2717 = $tmp2716.value;
frost$core$Matcher* $tmp2718 = *(&local1);
frost$core$String$Index $tmp2719;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp2719, $tmp2718);
frost$core$Int64 $tmp2720 = $tmp2719.value;
frost$core$Int64 $tmp2721 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp2717, $tmp2720);
frost$core$String$Index $tmp2722 = frost$core$String$Index$init$frost$core$Int64($tmp2721);
*(&local2) = $tmp2722;
goto block3;
block4:;
// line 1436
frost$collections$Array* $tmp2723 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
frost$core$Matcher* $tmp2724 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
// unreffing matcher
*(&local1) = ((frost$core$Matcher*) NULL);
frost$collections$Array* $tmp2725 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2723;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1449
frost$core$Int64 $tmp2726 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2727 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2726);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
// unreffing REF($2:frost.collections.Array<frost.core.String>)
return $tmp2727;

}
frost$core$Int64$nullable frost$core$String$convert$R$frost$core$Int64$Q(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Bit local4;
// line 1460
frost$core$Int64* $tmp2728 = &param0->_length;
frost$core$Int64 $tmp2729 = *$tmp2728;
frost$core$Int64 $tmp2730 = (frost$core$Int64) {0};
frost$core$Bit $tmp2731 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2729, $tmp2730);
bool $tmp2732 = $tmp2731.value;
if ($tmp2732) goto block1; else goto block2;
block1:;
// line 1461
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 1463
frost$core$Int64 $tmp2733 = (frost$core$Int64) {0};
*(&local0) = $tmp2733;
// line 1464
// line 1465
frost$core$Char8** $tmp2734 = &param0->data;
frost$core$Char8* $tmp2735 = *$tmp2734;
frost$core$Int64 $tmp2736 = (frost$core$Int64) {0};
int64_t $tmp2737 = $tmp2736.value;
frost$core$Char8 $tmp2738 = $tmp2735[$tmp2737];
frost$core$UInt8 $tmp2739 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2740 = frost$core$Char8$init$frost$core$UInt8($tmp2739);
frost$core$Bit $tmp2741 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2738, $tmp2740);
bool $tmp2742 = $tmp2741.value;
if ($tmp2742) goto block3; else goto block5;
block3:;
// line 1466
frost$core$Int64 $tmp2743 = (frost$core$Int64) {1};
*(&local1) = $tmp2743;
goto block4;
block5:;
// line 1
// line 1469
frost$core$Int64 $tmp2744 = (frost$core$Int64) {0};
*(&local1) = $tmp2744;
goto block4;
block4:;
// line 1471
frost$core$Int64 $tmp2745 = *(&local1);
frost$core$Int64* $tmp2746 = &param0->_length;
frost$core$Int64 $tmp2747 = *$tmp2746;
frost$core$Bit $tmp2748 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2749 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2745, $tmp2747, $tmp2748);
frost$core$Int64 $tmp2750 = $tmp2749.min;
*(&local2) = $tmp2750;
frost$core$Int64 $tmp2751 = $tmp2749.max;
frost$core$Bit $tmp2752 = $tmp2749.inclusive;
bool $tmp2753 = $tmp2752.value;
frost$core$Int64 $tmp2754 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2755 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2754);
if ($tmp2753) goto block9; else goto block10;
block9:;
int64_t $tmp2756 = $tmp2750.value;
int64_t $tmp2757 = $tmp2751.value;
bool $tmp2758 = $tmp2756 <= $tmp2757;
frost$core$Bit $tmp2759 = (frost$core$Bit) {$tmp2758};
bool $tmp2760 = $tmp2759.value;
if ($tmp2760) goto block6; else goto block7;
block10:;
int64_t $tmp2761 = $tmp2750.value;
int64_t $tmp2762 = $tmp2751.value;
bool $tmp2763 = $tmp2761 < $tmp2762;
frost$core$Bit $tmp2764 = (frost$core$Bit) {$tmp2763};
bool $tmp2765 = $tmp2764.value;
if ($tmp2765) goto block6; else goto block7;
block6:;
// line 1472
frost$core$Char8** $tmp2766 = &param0->data;
frost$core$Char8* $tmp2767 = *$tmp2766;
frost$core$Int64 $tmp2768 = *(&local2);
int64_t $tmp2769 = $tmp2768.value;
frost$core$Char8 $tmp2770 = $tmp2767[$tmp2769];
uint8_t $tmp2771 = $tmp2770.value;
frost$core$Int64 $tmp2772 = (frost$core$Int64) {((int64_t) $tmp2771)};
frost$core$Int64 $tmp2773 = (frost$core$Int64) {48};
int64_t $tmp2774 = $tmp2772.value;
int64_t $tmp2775 = $tmp2773.value;
int64_t $tmp2776 = $tmp2774 - $tmp2775;
frost$core$Int64 $tmp2777 = (frost$core$Int64) {$tmp2776};
*(&local3) = $tmp2777;
// line 1473
frost$core$Int64 $tmp2778 = *(&local3);
frost$core$Int64 $tmp2779 = (frost$core$Int64) {0};
int64_t $tmp2780 = $tmp2778.value;
int64_t $tmp2781 = $tmp2779.value;
bool $tmp2782 = $tmp2780 < $tmp2781;
frost$core$Bit $tmp2783 = (frost$core$Bit) {$tmp2782};
bool $tmp2784 = $tmp2783.value;
if ($tmp2784) goto block13; else goto block14;
block13:;
*(&local4) = $tmp2783;
goto block15;
block14:;
frost$core$Int64 $tmp2785 = *(&local3);
frost$core$Int64 $tmp2786 = (frost$core$Int64) {9};
int64_t $tmp2787 = $tmp2785.value;
int64_t $tmp2788 = $tmp2786.value;
bool $tmp2789 = $tmp2787 > $tmp2788;
frost$core$Bit $tmp2790 = (frost$core$Bit) {$tmp2789};
*(&local4) = $tmp2790;
goto block15;
block15:;
frost$core$Bit $tmp2791 = *(&local4);
bool $tmp2792 = $tmp2791.value;
if ($tmp2792) goto block11; else goto block12;
block11:;
// line 1474
return ((frost$core$Int64$nullable) { .nonnull = false });
block12:;
// line 1476
frost$core$Int64 $tmp2793 = *(&local0);
frost$core$Int64 $tmp2794 = (frost$core$Int64) {10};
int64_t $tmp2795 = $tmp2793.value;
int64_t $tmp2796 = $tmp2794.value;
int64_t $tmp2797 = $tmp2795 * $tmp2796;
frost$core$Int64 $tmp2798 = (frost$core$Int64) {$tmp2797};
frost$core$Int64 $tmp2799 = *(&local3);
int64_t $tmp2800 = $tmp2798.value;
int64_t $tmp2801 = $tmp2799.value;
int64_t $tmp2802 = $tmp2800 + $tmp2801;
frost$core$Int64 $tmp2803 = (frost$core$Int64) {$tmp2802};
*(&local0) = $tmp2803;
goto block8;
block8:;
frost$core$Int64 $tmp2804 = *(&local2);
int64_t $tmp2805 = $tmp2751.value;
int64_t $tmp2806 = $tmp2804.value;
int64_t $tmp2807 = $tmp2805 - $tmp2806;
frost$core$Int64 $tmp2808 = (frost$core$Int64) {$tmp2807};
frost$core$UInt64 $tmp2809 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2808);
if ($tmp2753) goto block17; else goto block18;
block17:;
uint64_t $tmp2810 = $tmp2809.value;
uint64_t $tmp2811 = $tmp2755.value;
bool $tmp2812 = $tmp2810 >= $tmp2811;
frost$core$Bit $tmp2813 = (frost$core$Bit) {$tmp2812};
bool $tmp2814 = $tmp2813.value;
if ($tmp2814) goto block16; else goto block7;
block18:;
uint64_t $tmp2815 = $tmp2809.value;
uint64_t $tmp2816 = $tmp2755.value;
bool $tmp2817 = $tmp2815 > $tmp2816;
frost$core$Bit $tmp2818 = (frost$core$Bit) {$tmp2817};
bool $tmp2819 = $tmp2818.value;
if ($tmp2819) goto block16; else goto block7;
block16:;
int64_t $tmp2820 = $tmp2804.value;
int64_t $tmp2821 = $tmp2754.value;
int64_t $tmp2822 = $tmp2820 + $tmp2821;
frost$core$Int64 $tmp2823 = (frost$core$Int64) {$tmp2822};
*(&local2) = $tmp2823;
goto block6;
block7:;
// line 1478
frost$core$Char8** $tmp2824 = &param0->data;
frost$core$Char8* $tmp2825 = *$tmp2824;
frost$core$Int64 $tmp2826 = (frost$core$Int64) {0};
int64_t $tmp2827 = $tmp2826.value;
frost$core$Char8 $tmp2828 = $tmp2825[$tmp2827];
frost$core$UInt8 $tmp2829 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2830 = frost$core$Char8$init$frost$core$UInt8($tmp2829);
frost$core$Bit $tmp2831 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2828, $tmp2830);
bool $tmp2832 = $tmp2831.value;
if ($tmp2832) goto block19; else goto block20;
block19:;
// line 1479
frost$core$Int64 $tmp2833 = *(&local0);
frost$core$Int64 $tmp2834 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2833);
*(&local0) = $tmp2834;
goto block20;
block20:;
// line 1481
frost$core$Int64 $tmp2835 = *(&local0);
return ((frost$core$Int64$nullable) { $tmp2835, true });

}
frost$core$UInt64$nullable frost$core$String$convert$R$frost$core$UInt64$Q(frost$core$String* param0) {

frost$core$UInt64 local0;
frost$core$Int64 local1;
frost$core$UInt64 local2;
frost$core$Bit local3;
// line 1491
frost$core$Int64* $tmp2836 = &param0->_length;
frost$core$Int64 $tmp2837 = *$tmp2836;
frost$core$Int64 $tmp2838 = (frost$core$Int64) {0};
frost$core$Bit $tmp2839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2837, $tmp2838);
bool $tmp2840 = $tmp2839.value;
if ($tmp2840) goto block1; else goto block2;
block1:;
// line 1492
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 1494
frost$core$UInt64 $tmp2841 = (frost$core$UInt64) {0};
*(&local0) = $tmp2841;
// line 1495
frost$core$Int64 $tmp2842 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2843 = &param0->_length;
frost$core$Int64 $tmp2844 = *$tmp2843;
frost$core$Bit $tmp2845 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2846 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2842, $tmp2844, $tmp2845);
frost$core$Int64 $tmp2847 = $tmp2846.min;
*(&local1) = $tmp2847;
frost$core$Int64 $tmp2848 = $tmp2846.max;
frost$core$Bit $tmp2849 = $tmp2846.inclusive;
bool $tmp2850 = $tmp2849.value;
frost$core$Int64 $tmp2851 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2852 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2851);
if ($tmp2850) goto block6; else goto block7;
block6:;
int64_t $tmp2853 = $tmp2847.value;
int64_t $tmp2854 = $tmp2848.value;
bool $tmp2855 = $tmp2853 <= $tmp2854;
frost$core$Bit $tmp2856 = (frost$core$Bit) {$tmp2855};
bool $tmp2857 = $tmp2856.value;
if ($tmp2857) goto block3; else goto block4;
block7:;
int64_t $tmp2858 = $tmp2847.value;
int64_t $tmp2859 = $tmp2848.value;
bool $tmp2860 = $tmp2858 < $tmp2859;
frost$core$Bit $tmp2861 = (frost$core$Bit) {$tmp2860};
bool $tmp2862 = $tmp2861.value;
if ($tmp2862) goto block3; else goto block4;
block3:;
// line 1496
frost$core$Char8** $tmp2863 = &param0->data;
frost$core$Char8* $tmp2864 = *$tmp2863;
frost$core$Int64 $tmp2865 = *(&local1);
int64_t $tmp2866 = $tmp2865.value;
frost$core$Char8 $tmp2867 = $tmp2864[$tmp2866];
uint8_t $tmp2868 = $tmp2867.value;
frost$core$UInt64 $tmp2869 = (frost$core$UInt64) {((uint64_t) $tmp2868)};
frost$core$UInt64 $tmp2870 = (frost$core$UInt64) {48};
uint64_t $tmp2871 = $tmp2869.value;
uint64_t $tmp2872 = $tmp2870.value;
uint64_t $tmp2873 = $tmp2871 - $tmp2872;
frost$core$UInt64 $tmp2874 = (frost$core$UInt64) {$tmp2873};
*(&local2) = $tmp2874;
// line 1497
frost$core$UInt64 $tmp2875 = *(&local2);
frost$core$UInt64 $tmp2876 = (frost$core$UInt64) {0};
uint64_t $tmp2877 = $tmp2875.value;
uint64_t $tmp2878 = $tmp2876.value;
bool $tmp2879 = $tmp2877 < $tmp2878;
frost$core$Bit $tmp2880 = (frost$core$Bit) {$tmp2879};
bool $tmp2881 = $tmp2880.value;
if ($tmp2881) goto block10; else goto block11;
block10:;
*(&local3) = $tmp2880;
goto block12;
block11:;
frost$core$UInt64 $tmp2882 = *(&local2);
frost$core$UInt64 $tmp2883 = (frost$core$UInt64) {9};
uint64_t $tmp2884 = $tmp2882.value;
uint64_t $tmp2885 = $tmp2883.value;
bool $tmp2886 = $tmp2884 > $tmp2885;
frost$core$Bit $tmp2887 = (frost$core$Bit) {$tmp2886};
*(&local3) = $tmp2887;
goto block12;
block12:;
frost$core$Bit $tmp2888 = *(&local3);
bool $tmp2889 = $tmp2888.value;
if ($tmp2889) goto block8; else goto block9;
block8:;
// line 1498
return ((frost$core$UInt64$nullable) { .nonnull = false });
block9:;
// line 1500
frost$core$UInt64 $tmp2890 = *(&local0);
frost$core$UInt64 $tmp2891 = (frost$core$UInt64) {10};
uint64_t $tmp2892 = $tmp2890.value;
uint64_t $tmp2893 = $tmp2891.value;
uint64_t $tmp2894 = $tmp2892 * $tmp2893;
frost$core$UInt64 $tmp2895 = (frost$core$UInt64) {$tmp2894};
frost$core$UInt64 $tmp2896 = *(&local2);
uint64_t $tmp2897 = $tmp2895.value;
uint64_t $tmp2898 = $tmp2896.value;
uint64_t $tmp2899 = $tmp2897 + $tmp2898;
frost$core$UInt64 $tmp2900 = (frost$core$UInt64) {$tmp2899};
*(&local0) = $tmp2900;
goto block5;
block5:;
frost$core$Int64 $tmp2901 = *(&local1);
int64_t $tmp2902 = $tmp2848.value;
int64_t $tmp2903 = $tmp2901.value;
int64_t $tmp2904 = $tmp2902 - $tmp2903;
frost$core$Int64 $tmp2905 = (frost$core$Int64) {$tmp2904};
frost$core$UInt64 $tmp2906 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2905);
if ($tmp2850) goto block14; else goto block15;
block14:;
uint64_t $tmp2907 = $tmp2906.value;
uint64_t $tmp2908 = $tmp2852.value;
bool $tmp2909 = $tmp2907 >= $tmp2908;
frost$core$Bit $tmp2910 = (frost$core$Bit) {$tmp2909};
bool $tmp2911 = $tmp2910.value;
if ($tmp2911) goto block13; else goto block4;
block15:;
uint64_t $tmp2912 = $tmp2906.value;
uint64_t $tmp2913 = $tmp2852.value;
bool $tmp2914 = $tmp2912 > $tmp2913;
frost$core$Bit $tmp2915 = (frost$core$Bit) {$tmp2914};
bool $tmp2916 = $tmp2915.value;
if ($tmp2916) goto block13; else goto block4;
block13:;
int64_t $tmp2917 = $tmp2901.value;
int64_t $tmp2918 = $tmp2851.value;
int64_t $tmp2919 = $tmp2917 + $tmp2918;
frost$core$Int64 $tmp2920 = (frost$core$Int64) {$tmp2919};
*(&local1) = $tmp2920;
goto block3;
block4:;
// line 1502
frost$core$UInt64 $tmp2921 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp2921, true });

}
frost$core$Real64$nullable frost$core$String$convert$R$frost$core$Real64$Q(frost$core$String* param0) {

// line 1512
frost$core$Real64 $tmp2922;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp2922, param0);
return ((frost$core$Real64$nullable) { $tmp2922, true });

}
frost$core$Int64 frost$core$String$get_hash$R$frost$core$Int64(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 1520
frost$core$Int64 $tmp2923 = (frost$core$Int64) {1};
*(&local0) = $tmp2923;
// line 1521
frost$core$Int64 $tmp2924 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2925 = &param0->_length;
frost$core$Int64 $tmp2926 = *$tmp2925;
frost$core$Bit $tmp2927 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2928 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2924, $tmp2926, $tmp2927);
frost$core$Int64 $tmp2929 = $tmp2928.min;
*(&local1) = $tmp2929;
frost$core$Int64 $tmp2930 = $tmp2928.max;
frost$core$Bit $tmp2931 = $tmp2928.inclusive;
bool $tmp2932 = $tmp2931.value;
frost$core$Int64 $tmp2933 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2934 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2933);
if ($tmp2932) goto block4; else goto block5;
block4:;
int64_t $tmp2935 = $tmp2929.value;
int64_t $tmp2936 = $tmp2930.value;
bool $tmp2937 = $tmp2935 <= $tmp2936;
frost$core$Bit $tmp2938 = (frost$core$Bit) {$tmp2937};
bool $tmp2939 = $tmp2938.value;
if ($tmp2939) goto block1; else goto block2;
block5:;
int64_t $tmp2940 = $tmp2929.value;
int64_t $tmp2941 = $tmp2930.value;
bool $tmp2942 = $tmp2940 < $tmp2941;
frost$core$Bit $tmp2943 = (frost$core$Bit) {$tmp2942};
bool $tmp2944 = $tmp2943.value;
if ($tmp2944) goto block1; else goto block2;
block1:;
// line 1522
frost$core$Int64 $tmp2945 = *(&local0);
frost$core$Int64 $tmp2946 = (frost$core$Int64) {101};
int64_t $tmp2947 = $tmp2945.value;
int64_t $tmp2948 = $tmp2946.value;
int64_t $tmp2949 = $tmp2947 * $tmp2948;
frost$core$Int64 $tmp2950 = (frost$core$Int64) {$tmp2949};
frost$core$Char8** $tmp2951 = &param0->data;
frost$core$Char8* $tmp2952 = *$tmp2951;
frost$core$Int64 $tmp2953 = *(&local1);
int64_t $tmp2954 = $tmp2953.value;
frost$core$Char8 $tmp2955 = $tmp2952[$tmp2954];
uint8_t $tmp2956 = $tmp2955.value;
frost$core$Int64 $tmp2957 = (frost$core$Int64) {((int64_t) $tmp2956)};
int64_t $tmp2958 = $tmp2950.value;
int64_t $tmp2959 = $tmp2957.value;
int64_t $tmp2960 = $tmp2958 + $tmp2959;
frost$core$Int64 $tmp2961 = (frost$core$Int64) {$tmp2960};
*(&local0) = $tmp2961;
goto block3;
block3:;
frost$core$Int64 $tmp2962 = *(&local1);
int64_t $tmp2963 = $tmp2930.value;
int64_t $tmp2964 = $tmp2962.value;
int64_t $tmp2965 = $tmp2963 - $tmp2964;
frost$core$Int64 $tmp2966 = (frost$core$Int64) {$tmp2965};
frost$core$UInt64 $tmp2967 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2966);
if ($tmp2932) goto block7; else goto block8;
block7:;
uint64_t $tmp2968 = $tmp2967.value;
uint64_t $tmp2969 = $tmp2934.value;
bool $tmp2970 = $tmp2968 >= $tmp2969;
frost$core$Bit $tmp2971 = (frost$core$Bit) {$tmp2970};
bool $tmp2972 = $tmp2971.value;
if ($tmp2972) goto block6; else goto block2;
block8:;
uint64_t $tmp2973 = $tmp2967.value;
uint64_t $tmp2974 = $tmp2934.value;
bool $tmp2975 = $tmp2973 > $tmp2974;
frost$core$Bit $tmp2976 = (frost$core$Bit) {$tmp2975};
bool $tmp2977 = $tmp2976.value;
if ($tmp2977) goto block6; else goto block2;
block6:;
int64_t $tmp2978 = $tmp2962.value;
int64_t $tmp2979 = $tmp2933.value;
int64_t $tmp2980 = $tmp2978 + $tmp2979;
frost$core$Int64 $tmp2981 = (frost$core$Int64) {$tmp2980};
*(&local1) = $tmp2981;
goto block1;
block2:;
// line 1533
frost$core$Int64 $tmp2982 = *(&local0);
return $tmp2982;

}

