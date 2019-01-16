#include "panda/core/String.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char32.h"
#include "panda/core/UInt8.h"
#include "panda/core/String/UTF8List.h"
#include "panda/core/String/UTF16Iterator.h"
#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/Int32.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/String/Index.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Matcher.h"
#include "panda/collections/Array.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/String/MatchIterator.h"
#include "panda/core/String/RegexMatchIterator.h"
#include "panda/core/Real64.h"

__attribute__((weak)) panda$core$String* panda$core$String$format$panda$core$String$R$panda$core$String$shim(panda$core$String* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$String$format$panda$core$String$R$panda$core$String(p0, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$String$get_hash$R$panda$core$Int64$shim(panda$core$String* p0) {
    panda$core$Int64 result = panda$core$String$get_hash$R$panda$core$Int64(p0);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p0, ((panda$core$String*) p1));

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$String$get_iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim(panda$core$String* p0) {
    panda$collections$Iterator* result = panda$core$String$get_iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$String$convert$R$panda$core$String$shim(panda$core$String* p0) {
    panda$core$String* result = panda$core$String$convert$R$panda$core$String(p0);

    return result;
}
__attribute__((weak)) void panda$core$String$cleanup$shim(panda$core$String* p0) {
    panda$core$String$cleanup(p0);

}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$String$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$String$_panda$core$Formattable, { panda$core$String$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$_panda$collections$Key, { panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$get_iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim} };

static panda$core$String $s1;
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String$shim, panda$core$String$cleanup$shim, panda$core$String$format$panda$core$String$R$panda$core$String$shim, panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$get_utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$get_iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$get_length$R$panda$core$Int64, panda$core$String$get_byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$get_trimmed$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$get_start$R$panda$core$String$Index, panda$core$String$get_end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$convert$R$panda$core$Real64$Q, panda$core$String$get_hash$R$panda$core$Int64$shim} };

typedef panda$core$Int64 (*$fn20)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn55)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn87)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn91)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn96)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn181)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn185)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn190)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn271)(panda$collections$Iterable*);
typedef panda$core$Int64 (*$fn275)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn609)(panda$core$Object*);
typedef panda$core$String* (*$fn721)(panda$core$Object*);
typedef panda$core$Object* (*$fn2178)(panda$core$String*);
typedef panda$core$Object* (*$fn2180)(panda$core$Object*, panda$core$String*);
typedef panda$core$String* (*$fn2184)(panda$core$Object*);
typedef panda$core$Object* (*$fn2255)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2257)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2261)(panda$core$Object*);
typedef panda$core$Int64 (*$fn2588)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2652)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x66\x6f\x72\x6d\x61\x74\x28\x66\x6d\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, 4839268531851362231, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 8838008024670810340, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 116, 8869514823175806901, NULL };
static panda$core$String $s825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s2117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s2609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -4469378539822486423, NULL };

void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$String* param0, panda$core$Char8* param1, panda$core$Int64 param2) {

// line 328
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->dummy;
*$tmp3 = $tmp2;
// line 351
panda$core$Char8** $tmp4 = &param0->data;
*$tmp4 = param1;
// line 352
panda$core$Int64* $tmp5 = &param0->_length;
*$tmp5 = param2;
// line 353
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String** $tmp6 = &param0->owner;
panda$core$String* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$String** $tmp8 = &param0->owner;
*$tmp8 = ((panda$core$String*) NULL);
return;

}
void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String(panda$core$String* param0, panda$core$Char8* param1, panda$core$Int64 param2, panda$core$String* param3) {

// line 328
panda$core$Int64 $tmp9 = (panda$core$Int64) {0};
panda$core$Int64* $tmp10 = &param0->dummy;
*$tmp10 = $tmp9;
// line 358
panda$core$Char8** $tmp11 = &param0->data;
*$tmp11 = param1;
// line 359
panda$core$Int64* $tmp12 = &param0->_length;
*$tmp12 = param2;
// line 360
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp13 = &param0->owner;
panda$core$String* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$String** $tmp15 = &param0->owner;
*$tmp15 = param3;
return;

}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* param0, panda$collections$ListView* param1) {

panda$core$Int64 local0;
// line 328
panda$core$Int64 $tmp16 = (panda$core$Int64) {0};
panda$core$Int64* $tmp17 = &param0->dummy;
*$tmp17 = $tmp16;
// line 364
ITable* $tmp18 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp18->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
$fn20 $tmp19 = $tmp18->methods[0];
panda$core$Int64 $tmp21 = $tmp19(((panda$collections$CollectionView*) param1));
panda$core$Int64* $tmp22 = &param0->_length;
*$tmp22 = $tmp21;
// line 365
panda$core$Int64* $tmp23 = &param0->_length;
panda$core$Int64 $tmp24 = *$tmp23;
int64_t $tmp25 = $tmp24.value;
panda$core$Char8* $tmp26 = ((panda$core$Char8*) frostAlloc($tmp25 * 1));
panda$core$Char8** $tmp27 = &param0->data;
*$tmp27 = $tmp26;
// line 366
panda$core$Int64 $tmp28 = (panda$core$Int64) {0};
panda$core$Int64* $tmp29 = &param0->_length;
panda$core$Int64 $tmp30 = *$tmp29;
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp32 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp28, $tmp30, $tmp31);
panda$core$Int64 $tmp33 = $tmp32.min;
*(&local0) = $tmp33;
panda$core$Int64 $tmp34 = $tmp32.max;
panda$core$Bit $tmp35 = $tmp32.inclusive;
bool $tmp36 = $tmp35.value;
panda$core$Int64 $tmp37 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp38 = panda$core$Int64$convert$R$panda$core$UInt64($tmp37);
if ($tmp36) goto block4; else goto block5;
block4:;
int64_t $tmp39 = $tmp33.value;
int64_t $tmp40 = $tmp34.value;
bool $tmp41 = $tmp39 <= $tmp40;
panda$core$Bit $tmp42 = (panda$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block5:;
int64_t $tmp44 = $tmp33.value;
int64_t $tmp45 = $tmp34.value;
bool $tmp46 = $tmp44 < $tmp45;
panda$core$Bit $tmp47 = (panda$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block1; else goto block2;
block1:;
// line 367
panda$core$Char8** $tmp49 = &param0->data;
panda$core$Char8* $tmp50 = *$tmp49;
panda$core$Int64 $tmp51 = *(&local0);
panda$core$Int64 $tmp52 = *(&local0);
ITable* $tmp53 = param1->$class->itable;
while ($tmp53->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[0];
panda$core$Object* $tmp56 = $tmp54(param1, $tmp52);
int64_t $tmp57 = $tmp51.value;
$tmp50[$tmp57] = ((panda$core$Char8$wrapper*) $tmp56)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp56);
// unreffing REF($50:panda.collections.ListView.T)
goto block3;
block3:;
panda$core$Int64 $tmp58 = *(&local0);
int64_t $tmp59 = $tmp34.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 - $tmp60;
panda$core$Int64 $tmp62 = (panda$core$Int64) {$tmp61};
panda$core$UInt64 $tmp63 = panda$core$Int64$convert$R$panda$core$UInt64($tmp62);
if ($tmp36) goto block7; else goto block8;
block7:;
uint64_t $tmp64 = $tmp63.value;
uint64_t $tmp65 = $tmp38.value;
bool $tmp66 = $tmp64 >= $tmp65;
panda$core$Bit $tmp67 = (panda$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block6; else goto block2;
block8:;
uint64_t $tmp69 = $tmp63.value;
uint64_t $tmp70 = $tmp38.value;
bool $tmp71 = $tmp69 > $tmp70;
panda$core$Bit $tmp72 = (panda$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block6; else goto block2;
block6:;
int64_t $tmp74 = $tmp58.value;
int64_t $tmp75 = $tmp37.value;
int64_t $tmp76 = $tmp74 + $tmp75;
panda$core$Int64 $tmp77 = (panda$core$Int64) {$tmp76};
*(&local0) = $tmp77;
goto block1;
block2:;
// line 369
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String** $tmp78 = &param0->owner;
panda$core$String* $tmp79 = *$tmp78;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$String** $tmp80 = &param0->owner;
*$tmp80 = ((panda$core$String*) NULL);
return;

}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char32$GT(panda$core$String* param0, panda$collections$ListView* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Char32 local1;
panda$core$Int64 local2;
// line 328
panda$core$Int64 $tmp81 = (panda$core$Int64) {0};
panda$core$Int64* $tmp82 = &param0->dummy;
*$tmp82 = $tmp81;
// line 373
panda$core$MutableString* $tmp83 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp83);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
panda$core$MutableString* $tmp84 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
*(&local0) = $tmp83;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing REF($5:panda.core.MutableString)
// line 374
ITable* $tmp85 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp85->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[0];
panda$collections$Iterator* $tmp88 = $tmp86(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp89 = $tmp88->$class->itable;
while ($tmp89->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
panda$core$Bit $tmp92 = $tmp90($tmp88);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block3; else goto block2;
block2:;
ITable* $tmp94 = $tmp88->$class->itable;
while ($tmp94->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[1];
panda$core$Object* $tmp97 = $tmp95($tmp88);
*(&local1) = ((panda$core$Char32$wrapper*) $tmp97)->value;
// line 375
panda$core$MutableString* $tmp98 = *(&local0);
panda$core$Char32 $tmp99 = *(&local1);
panda$core$MutableString$append$panda$core$Char32($tmp98, $tmp99);
panda$core$Panda$unref$panda$core$Object$Q($tmp97);
// unreffing REF($31:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
// unreffing REF($21:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 377
panda$core$MutableString* $tmp100 = *(&local0);
panda$core$Int64* $tmp101 = &$tmp100->_length;
panda$core$Int64 $tmp102 = *$tmp101;
int64_t $tmp103 = $tmp102.value;
panda$core$Char8* $tmp104 = ((panda$core$Char8*) frostAlloc($tmp103 * 1));
panda$core$Char8** $tmp105 = &param0->data;
*$tmp105 = $tmp104;
// line 378
panda$core$Int64 $tmp106 = (panda$core$Int64) {0};
panda$core$MutableString* $tmp107 = *(&local0);
panda$core$Int64* $tmp108 = &$tmp107->_length;
panda$core$Int64 $tmp109 = *$tmp108;
panda$core$Bit $tmp110 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp111 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp106, $tmp109, $tmp110);
panda$core$Int64 $tmp112 = $tmp111.min;
*(&local2) = $tmp112;
panda$core$Int64 $tmp113 = $tmp111.max;
panda$core$Bit $tmp114 = $tmp111.inclusive;
bool $tmp115 = $tmp114.value;
panda$core$Int64 $tmp116 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp117 = panda$core$Int64$convert$R$panda$core$UInt64($tmp116);
if ($tmp115) goto block7; else goto block8;
block7:;
int64_t $tmp118 = $tmp112.value;
int64_t $tmp119 = $tmp113.value;
bool $tmp120 = $tmp118 <= $tmp119;
panda$core$Bit $tmp121 = (panda$core$Bit) {$tmp120};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block4; else goto block5;
block8:;
int64_t $tmp123 = $tmp112.value;
int64_t $tmp124 = $tmp113.value;
bool $tmp125 = $tmp123 < $tmp124;
panda$core$Bit $tmp126 = (panda$core$Bit) {$tmp125};
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block4; else goto block5;
block4:;
// line 379
panda$core$Char8** $tmp128 = &param0->data;
panda$core$Char8* $tmp129 = *$tmp128;
panda$core$Int64 $tmp130 = *(&local2);
panda$core$MutableString* $tmp131 = *(&local0);
panda$core$Char8** $tmp132 = &$tmp131->data;
panda$core$Char8* $tmp133 = *$tmp132;
panda$core$Int64 $tmp134 = *(&local2);
int64_t $tmp135 = $tmp134.value;
panda$core$Char8 $tmp136 = $tmp133[$tmp135];
int64_t $tmp137 = $tmp130.value;
$tmp129[$tmp137] = $tmp136;
goto block6;
block6:;
panda$core$Int64 $tmp138 = *(&local2);
int64_t $tmp139 = $tmp113.value;
int64_t $tmp140 = $tmp138.value;
int64_t $tmp141 = $tmp139 - $tmp140;
panda$core$Int64 $tmp142 = (panda$core$Int64) {$tmp141};
panda$core$UInt64 $tmp143 = panda$core$Int64$convert$R$panda$core$UInt64($tmp142);
if ($tmp115) goto block10; else goto block11;
block10:;
uint64_t $tmp144 = $tmp143.value;
uint64_t $tmp145 = $tmp117.value;
bool $tmp146 = $tmp144 >= $tmp145;
panda$core$Bit $tmp147 = (panda$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block9; else goto block5;
block11:;
uint64_t $tmp149 = $tmp143.value;
uint64_t $tmp150 = $tmp117.value;
bool $tmp151 = $tmp149 > $tmp150;
panda$core$Bit $tmp152 = (panda$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block9; else goto block5;
block9:;
int64_t $tmp154 = $tmp138.value;
int64_t $tmp155 = $tmp116.value;
int64_t $tmp156 = $tmp154 + $tmp155;
panda$core$Int64 $tmp157 = (panda$core$Int64) {$tmp156};
*(&local2) = $tmp157;
goto block4;
block5:;
// line 381
panda$core$MutableString* $tmp158 = *(&local0);
panda$core$Int64* $tmp159 = &$tmp158->_length;
panda$core$Int64 $tmp160 = *$tmp159;
panda$core$Int64* $tmp161 = &param0->_length;
*$tmp161 = $tmp160;
// line 382
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String** $tmp162 = &param0->owner;
panda$core$String* $tmp163 = *$tmp162;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
panda$core$String** $tmp164 = &param0->owner;
*$tmp164 = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp165 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return;

}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* param0) {

// line 390
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;

}
panda$core$String* panda$core$String$format$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Char8 local1;
panda$core$Bit local2;
// line 403
panda$core$Bit $tmp166 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s167);
bool $tmp168 = $tmp166.value;
if ($tmp168) goto block2; else goto block3;
block2:;
// line 405
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block3:;
panda$core$Bit $tmp169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s170);
bool $tmp171 = $tmp169.value;
if ($tmp171) goto block4; else goto block5;
block5:;
panda$core$Bit $tmp172 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s173);
bool $tmp174 = $tmp172.value;
if ($tmp174) goto block4; else goto block6;
block4:;
// line 408
panda$core$MutableString* $tmp175 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp175, &$s176);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
panda$core$MutableString* $tmp177 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
*(&local0) = $tmp175;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing REF($15:panda.core.MutableString)
// line 409
panda$collections$ListView* $tmp178 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(param0);
ITable* $tmp179 = ((panda$collections$Iterable*) $tmp178)->$class->itable;
while ($tmp179->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp179 = $tmp179->next;
}
$fn181 $tmp180 = $tmp179->methods[0];
panda$collections$Iterator* $tmp182 = $tmp180(((panda$collections$Iterable*) $tmp178));
goto block7;
block7:;
ITable* $tmp183 = $tmp182->$class->itable;
while ($tmp183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp183 = $tmp183->next;
}
$fn185 $tmp184 = $tmp183->methods[0];
panda$core$Bit $tmp186 = $tmp184($tmp182);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block9; else goto block8;
block8:;
ITable* $tmp188 = $tmp182->$class->itable;
while ($tmp188->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp188 = $tmp188->next;
}
$fn190 $tmp189 = $tmp188->methods[1];
panda$core$Object* $tmp191 = $tmp189($tmp182);
*(&local1) = ((panda$core$Char8$wrapper*) $tmp191)->value;
// line 410
panda$core$Char8 $tmp192 = *(&local1);
panda$core$UInt8 $tmp193 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp194 = panda$core$Char8$init$panda$core$UInt8($tmp193);
panda$core$Bit $tmp195 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp192, $tmp194);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block11; else goto block12;
block11:;
// line 412
panda$core$MutableString* $tmp197 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp197, &$s198);
goto block10;
block12:;
panda$core$UInt8 $tmp199 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp200 = panda$core$Char8$init$panda$core$UInt8($tmp199);
panda$core$Bit $tmp201 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp192, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block13; else goto block14;
block13:;
// line 415
panda$core$MutableString* $tmp203 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp203, &$s204);
goto block10;
block14:;
panda$core$UInt8 $tmp205 = (panda$core$UInt8) {10};
panda$core$Char8 $tmp206 = panda$core$Char8$init$panda$core$UInt8($tmp205);
panda$core$Bit $tmp207 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp192, $tmp206);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block15; else goto block16;
block15:;
// line 418
panda$core$MutableString* $tmp209 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp209, &$s210);
goto block10;
block16:;
panda$core$UInt8 $tmp211 = (panda$core$UInt8) {13};
panda$core$Char8 $tmp212 = panda$core$Char8$init$panda$core$UInt8($tmp211);
panda$core$Bit $tmp213 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp192, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block17; else goto block18;
block17:;
// line 421
panda$core$MutableString* $tmp215 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp215, &$s216);
goto block10;
block18:;
panda$core$UInt8 $tmp217 = (panda$core$UInt8) {9};
panda$core$Char8 $tmp218 = panda$core$Char8$init$panda$core$UInt8($tmp217);
panda$core$Bit $tmp219 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp192, $tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block19; else goto block20;
block19:;
// line 424
panda$core$MutableString* $tmp221 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp221, &$s222);
goto block10;
block20:;
// line 427
panda$core$Char8 $tmp223 = *(&local1);
panda$core$UInt8 $tmp224 = panda$core$Char8$convert$R$panda$core$UInt8($tmp223);
panda$core$UInt8 $tmp225 = (panda$core$UInt8) {32};
uint8_t $tmp226 = $tmp224.value;
uint8_t $tmp227 = $tmp225.value;
bool $tmp228 = $tmp226 >= $tmp227;
panda$core$Bit $tmp229 = (panda$core$Bit) {$tmp228};
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block23; else goto block24;
block23:;
panda$core$Char8 $tmp231 = *(&local1);
panda$core$UInt8 $tmp232 = panda$core$Char8$convert$R$panda$core$UInt8($tmp231);
panda$core$UInt8 $tmp233 = (panda$core$UInt8) {126};
uint8_t $tmp234 = $tmp232.value;
uint8_t $tmp235 = $tmp233.value;
bool $tmp236 = $tmp234 <= $tmp235;
panda$core$Bit $tmp237 = (panda$core$Bit) {$tmp236};
*(&local2) = $tmp237;
goto block25;
block24:;
*(&local2) = $tmp229;
goto block25;
block25:;
panda$core$Bit $tmp238 = *(&local2);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block21; else goto block26;
block21:;
// line 428
panda$core$MutableString* $tmp240 = *(&local0);
panda$core$Char8 $tmp241 = *(&local1);
panda$core$MutableString$append$panda$core$Char8($tmp240, $tmp241);
goto block22;
block26:;
// line 1
// line 432
panda$core$MutableString* $tmp242 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp242, &$s243);
goto block22;
block22:;
goto block10;
block10:;
panda$core$Panda$unref$panda$core$Object$Q($tmp191);
// unreffing REF($42:panda.collections.Iterator.T)
goto block7;
block9:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
// unreffing REF($32:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing REF($28:panda.collections.ListView<panda.core.Char8>)
// line 437
panda$core$MutableString* $tmp244 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp244, &$s245);
// line 438
panda$core$MutableString* $tmp246 = *(&local0);
panda$core$String* $tmp247 = panda$core$MutableString$finish$R$panda$core$String($tmp246);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// unreffing REF($142:panda.core.String)
panda$core$MutableString* $tmp248 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp247;
block6:;
// line 441
panda$core$Bit $tmp249 = panda$core$Bit$init$builtin_bit(false);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp251 = (panda$core$Int64) {441};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s252, $tmp251);
abort(); // unreachable
block27:;
goto block1;
block1:;
panda$core$Bit $tmp253 = panda$core$Bit$init$builtin_bit(false);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block29; else goto block30;
block30:;
panda$core$Int64 $tmp255 = (panda$core$Int64) {402};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s256, $tmp255, &$s257);
abort(); // unreachable
block29:;
abort(); // unreachable

}
void panda$core$String$cleanup(panda$core$String* param0) {

// line 449
panda$core$String** $tmp258 = &param0->owner;
panda$core$String* $tmp259 = *$tmp258;
panda$core$Bit $tmp260 = panda$core$Bit$init$builtin_bit($tmp259 == NULL);
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block1; else goto block2;
block1:;
// line 450
panda$core$Char8** $tmp262 = &param0->data;
panda$core$Char8* $tmp263 = *$tmp262;
frostFree($tmp263);
goto block2;
block2:;
// line 448
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$core$String** $tmp264 = &param0->owner;
panda$core$String* $tmp265 = *$tmp264;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
return;

}
panda$collections$ListView* panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* param0) {

// line 458
panda$core$String$UTF8List* $tmp266 = (panda$core$String$UTF8List*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$UTF8List$class);
panda$core$String$UTF8List$init$panda$core$String($tmp266, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp266)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing REF($1:panda.core.String.UTF8List)
return ((panda$collections$ListView*) $tmp266);

}
panda$collections$Iterator* panda$core$String$get_utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* param0) {

// line 467
panda$core$String$UTF16Iterator* $tmp267 = (panda$core$String$UTF16Iterator*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF16Iterator$class);
panda$core$String$UTF16Iterator$init$panda$core$String($tmp267, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp267)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing REF($1:panda.core.String.UTF16Iterator)
return ((panda$collections$Iterator*) $tmp267);

}
panda$collections$Iterator* panda$core$String$get_iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* param0) {

// line 475
panda$core$String$UTF32Iterator* $tmp268 = (panda$core$String$UTF32Iterator*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF32Iterator$class);
panda$core$String$UTF32Iterator$init$panda$core$String($tmp268, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp268)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing REF($1:panda.core.String.UTF32Iterator)
return ((panda$collections$Iterator*) $tmp268);

}
panda$core$Int64 panda$core$String$get_length$R$panda$core$Int64(panda$core$String* param0) {

// line 485
ITable* $tmp269 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp269->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp269 = $tmp269->next;
}
$fn271 $tmp270 = $tmp269->methods[0];
panda$collections$Iterator* $tmp272 = $tmp270(((panda$collections$Iterable*) param0));
ITable* $tmp273 = $tmp272->$class->itable;
while ($tmp273->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp273 = $tmp273->next;
}
$fn275 $tmp274 = $tmp273->methods[2];
panda$core$Int64 $tmp276 = $tmp274($tmp272);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
// unreffing REF($3:panda.collections.Iterator<panda.collections.Iterable.T>)
return $tmp276;

}
panda$core$Int64 panda$core$String$get_byteLength$R$panda$core$Int64(panda$core$String* param0) {

// line 492
panda$core$Int64* $tmp277 = &param0->_length;
panda$core$Int64 $tmp278 = *$tmp277;
return $tmp278;

}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 496
panda$core$Int64* $tmp279 = &param0->_length;
panda$core$Int64 $tmp280 = *$tmp279;
panda$core$Int64* $tmp281 = &param1->_length;
panda$core$Int64 $tmp282 = *$tmp281;
int64_t $tmp283 = $tmp280.value;
int64_t $tmp284 = $tmp282.value;
bool $tmp285 = $tmp283 < $tmp284;
panda$core$Bit $tmp286 = (panda$core$Bit) {$tmp285};
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block1; else goto block2;
block1:;
// line 497
panda$core$Bit $tmp288 = panda$core$Bit$init$builtin_bit(false);
return $tmp288;
block2:;
// line 499
panda$core$Int64 $tmp289 = (panda$core$Int64) {0};
panda$core$Int64* $tmp290 = &param1->_length;
panda$core$Int64 $tmp291 = *$tmp290;
panda$core$Bit $tmp292 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp293 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp289, $tmp291, $tmp292);
panda$core$Int64 $tmp294 = $tmp293.min;
*(&local0) = $tmp294;
panda$core$Int64 $tmp295 = $tmp293.max;
panda$core$Bit $tmp296 = $tmp293.inclusive;
bool $tmp297 = $tmp296.value;
panda$core$Int64 $tmp298 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp299 = panda$core$Int64$convert$R$panda$core$UInt64($tmp298);
if ($tmp297) goto block6; else goto block7;
block6:;
int64_t $tmp300 = $tmp294.value;
int64_t $tmp301 = $tmp295.value;
bool $tmp302 = $tmp300 <= $tmp301;
panda$core$Bit $tmp303 = (panda$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block3; else goto block4;
block7:;
int64_t $tmp305 = $tmp294.value;
int64_t $tmp306 = $tmp295.value;
bool $tmp307 = $tmp305 < $tmp306;
panda$core$Bit $tmp308 = (panda$core$Bit) {$tmp307};
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block3; else goto block4;
block3:;
// line 500
panda$core$Char8** $tmp310 = &param0->data;
panda$core$Char8* $tmp311 = *$tmp310;
panda$core$Int64 $tmp312 = *(&local0);
int64_t $tmp313 = $tmp312.value;
panda$core$Char8 $tmp314 = $tmp311[$tmp313];
panda$core$Char8** $tmp315 = &param1->data;
panda$core$Char8* $tmp316 = *$tmp315;
panda$core$Int64 $tmp317 = *(&local0);
int64_t $tmp318 = $tmp317.value;
panda$core$Char8 $tmp319 = $tmp316[$tmp318];
panda$core$Bit $tmp320 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp314, $tmp319);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block8; else goto block9;
block8:;
// line 501
panda$core$Bit $tmp322 = panda$core$Bit$init$builtin_bit(false);
return $tmp322;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp323 = *(&local0);
int64_t $tmp324 = $tmp295.value;
int64_t $tmp325 = $tmp323.value;
int64_t $tmp326 = $tmp324 - $tmp325;
panda$core$Int64 $tmp327 = (panda$core$Int64) {$tmp326};
panda$core$UInt64 $tmp328 = panda$core$Int64$convert$R$panda$core$UInt64($tmp327);
if ($tmp297) goto block11; else goto block12;
block11:;
uint64_t $tmp329 = $tmp328.value;
uint64_t $tmp330 = $tmp299.value;
bool $tmp331 = $tmp329 >= $tmp330;
panda$core$Bit $tmp332 = (panda$core$Bit) {$tmp331};
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block10; else goto block4;
block12:;
uint64_t $tmp334 = $tmp328.value;
uint64_t $tmp335 = $tmp299.value;
bool $tmp336 = $tmp334 > $tmp335;
panda$core$Bit $tmp337 = (panda$core$Bit) {$tmp336};
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block10; else goto block4;
block10:;
int64_t $tmp339 = $tmp323.value;
int64_t $tmp340 = $tmp298.value;
int64_t $tmp341 = $tmp339 + $tmp340;
panda$core$Int64 $tmp342 = (panda$core$Int64) {$tmp341};
*(&local0) = $tmp342;
goto block3;
block4:;
// line 504
panda$core$Bit $tmp343 = panda$core$Bit$init$builtin_bit(true);
return $tmp343;

}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 508
panda$core$Int64* $tmp344 = &param0->_length;
panda$core$Int64 $tmp345 = *$tmp344;
panda$core$Int64* $tmp346 = &param1->_length;
panda$core$Int64 $tmp347 = *$tmp346;
int64_t $tmp348 = $tmp345.value;
int64_t $tmp349 = $tmp347.value;
bool $tmp350 = $tmp348 < $tmp349;
panda$core$Bit $tmp351 = (panda$core$Bit) {$tmp350};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block1; else goto block2;
block1:;
// line 509
panda$core$Bit $tmp353 = panda$core$Bit$init$builtin_bit(false);
return $tmp353;
block2:;
// line 511
panda$core$Int64 $tmp354 = (panda$core$Int64) {0};
panda$core$Int64* $tmp355 = &param1->_length;
panda$core$Int64 $tmp356 = *$tmp355;
panda$core$Bit $tmp357 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp358 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp354, $tmp356, $tmp357);
panda$core$Int64 $tmp359 = $tmp358.min;
*(&local0) = $tmp359;
panda$core$Int64 $tmp360 = $tmp358.max;
panda$core$Bit $tmp361 = $tmp358.inclusive;
bool $tmp362 = $tmp361.value;
panda$core$Int64 $tmp363 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp364 = panda$core$Int64$convert$R$panda$core$UInt64($tmp363);
if ($tmp362) goto block6; else goto block7;
block6:;
int64_t $tmp365 = $tmp359.value;
int64_t $tmp366 = $tmp360.value;
bool $tmp367 = $tmp365 <= $tmp366;
panda$core$Bit $tmp368 = (panda$core$Bit) {$tmp367};
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block3; else goto block4;
block7:;
int64_t $tmp370 = $tmp359.value;
int64_t $tmp371 = $tmp360.value;
bool $tmp372 = $tmp370 < $tmp371;
panda$core$Bit $tmp373 = (panda$core$Bit) {$tmp372};
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block3; else goto block4;
block3:;
// line 512
panda$core$Char8** $tmp375 = &param0->data;
panda$core$Char8* $tmp376 = *$tmp375;
panda$core$Int64* $tmp377 = &param0->_length;
panda$core$Int64 $tmp378 = *$tmp377;
panda$core$Int64* $tmp379 = &param1->_length;
panda$core$Int64 $tmp380 = *$tmp379;
int64_t $tmp381 = $tmp378.value;
int64_t $tmp382 = $tmp380.value;
int64_t $tmp383 = $tmp381 - $tmp382;
panda$core$Int64 $tmp384 = (panda$core$Int64) {$tmp383};
panda$core$Int64 $tmp385 = *(&local0);
int64_t $tmp386 = $tmp384.value;
int64_t $tmp387 = $tmp385.value;
int64_t $tmp388 = $tmp386 + $tmp387;
panda$core$Int64 $tmp389 = (panda$core$Int64) {$tmp388};
int64_t $tmp390 = $tmp389.value;
panda$core$Char8 $tmp391 = $tmp376[$tmp390];
panda$core$Char8** $tmp392 = &param1->data;
panda$core$Char8* $tmp393 = *$tmp392;
panda$core$Int64 $tmp394 = *(&local0);
int64_t $tmp395 = $tmp394.value;
panda$core$Char8 $tmp396 = $tmp393[$tmp395];
panda$core$Bit $tmp397 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp391, $tmp396);
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block8; else goto block9;
block8:;
// line 513
panda$core$Bit $tmp399 = panda$core$Bit$init$builtin_bit(false);
return $tmp399;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp400 = *(&local0);
int64_t $tmp401 = $tmp360.value;
int64_t $tmp402 = $tmp400.value;
int64_t $tmp403 = $tmp401 - $tmp402;
panda$core$Int64 $tmp404 = (panda$core$Int64) {$tmp403};
panda$core$UInt64 $tmp405 = panda$core$Int64$convert$R$panda$core$UInt64($tmp404);
if ($tmp362) goto block11; else goto block12;
block11:;
uint64_t $tmp406 = $tmp405.value;
uint64_t $tmp407 = $tmp364.value;
bool $tmp408 = $tmp406 >= $tmp407;
panda$core$Bit $tmp409 = (panda$core$Bit) {$tmp408};
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block10; else goto block4;
block12:;
uint64_t $tmp411 = $tmp405.value;
uint64_t $tmp412 = $tmp364.value;
bool $tmp413 = $tmp411 > $tmp412;
panda$core$Bit $tmp414 = (panda$core$Bit) {$tmp413};
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block10; else goto block4;
block10:;
int64_t $tmp416 = $tmp400.value;
int64_t $tmp417 = $tmp363.value;
int64_t $tmp418 = $tmp416 + $tmp417;
panda$core$Int64 $tmp419 = (panda$core$Int64) {$tmp418};
*(&local0) = $tmp419;
goto block3;
block4:;
// line 516
panda$core$Bit $tmp420 = panda$core$Bit$init$builtin_bit(true);
return $tmp420;

}
panda$core$String* panda$core$String$get_trimmed$R$panda$core$String(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Bit local1;
panda$core$Int64 local2;
panda$core$Bit local3;
// line 525
panda$core$Int64* $tmp421 = &param0->_length;
panda$core$Int64 $tmp422 = *$tmp421;
panda$core$Int64 $tmp423 = (panda$core$Int64) {0};
panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp422, $tmp423);
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block1; else goto block2;
block1:;
// line 526
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 528
panda$core$Int64 $tmp426 = (panda$core$Int64) {0};
*(&local0) = $tmp426;
// line 529
goto block3;
block3:;
panda$core$Int64 $tmp427 = *(&local0);
panda$core$Int64* $tmp428 = &param0->_length;
panda$core$Int64 $tmp429 = *$tmp428;
int64_t $tmp430 = $tmp427.value;
int64_t $tmp431 = $tmp429.value;
bool $tmp432 = $tmp430 < $tmp431;
panda$core$Bit $tmp433 = (panda$core$Bit) {$tmp432};
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block6; else goto block7;
block6:;
panda$core$Char8** $tmp435 = &param0->data;
panda$core$Char8* $tmp436 = *$tmp435;
panda$core$Int64 $tmp437 = *(&local0);
int64_t $tmp438 = $tmp437.value;
panda$core$Char8 $tmp439 = $tmp436[$tmp438];
panda$core$Bit $tmp440 = panda$core$Char8$isWhitespace$R$panda$core$Bit($tmp439);
*(&local1) = $tmp440;
goto block8;
block7:;
*(&local1) = $tmp433;
goto block8;
block8:;
panda$core$Bit $tmp441 = *(&local1);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block4; else goto block5;
block4:;
// line 530
panda$core$Int64 $tmp443 = *(&local0);
panda$core$Int64 $tmp444 = (panda$core$Int64) {1};
int64_t $tmp445 = $tmp443.value;
int64_t $tmp446 = $tmp444.value;
int64_t $tmp447 = $tmp445 + $tmp446;
panda$core$Int64 $tmp448 = (panda$core$Int64) {$tmp447};
*(&local0) = $tmp448;
goto block3;
block5:;
// line 533
panda$core$Int64* $tmp449 = &param0->_length;
panda$core$Int64 $tmp450 = *$tmp449;
panda$core$Int64 $tmp451 = (panda$core$Int64) {1};
int64_t $tmp452 = $tmp450.value;
int64_t $tmp453 = $tmp451.value;
int64_t $tmp454 = $tmp452 - $tmp453;
panda$core$Int64 $tmp455 = (panda$core$Int64) {$tmp454};
*(&local2) = $tmp455;
// line 534
goto block9;
block9:;
panda$core$Int64 $tmp456 = *(&local2);
panda$core$Int64 $tmp457 = *(&local0);
int64_t $tmp458 = $tmp456.value;
int64_t $tmp459 = $tmp457.value;
bool $tmp460 = $tmp458 >= $tmp459;
panda$core$Bit $tmp461 = (panda$core$Bit) {$tmp460};
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block12; else goto block13;
block12:;
panda$core$Char8** $tmp463 = &param0->data;
panda$core$Char8* $tmp464 = *$tmp463;
panda$core$Int64 $tmp465 = *(&local2);
int64_t $tmp466 = $tmp465.value;
panda$core$Char8 $tmp467 = $tmp464[$tmp466];
panda$core$Bit $tmp468 = panda$core$Char8$isWhitespace$R$panda$core$Bit($tmp467);
*(&local3) = $tmp468;
goto block14;
block13:;
*(&local3) = $tmp461;
goto block14;
block14:;
panda$core$Bit $tmp469 = *(&local3);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block10; else goto block11;
block10:;
// line 535
panda$core$Int64 $tmp471 = *(&local2);
panda$core$Int64 $tmp472 = (panda$core$Int64) {1};
int64_t $tmp473 = $tmp471.value;
int64_t $tmp474 = $tmp472.value;
int64_t $tmp475 = $tmp473 - $tmp474;
panda$core$Int64 $tmp476 = (panda$core$Int64) {$tmp475};
*(&local2) = $tmp476;
goto block9;
block11:;
// line 538
panda$core$Int64 $tmp477 = *(&local0);
panda$core$String$Index $tmp478 = panda$core$String$Index$init$panda$core$Int64($tmp477);
panda$core$Int64 $tmp479 = *(&local2);
panda$core$String$Index $tmp480 = panda$core$String$Index$init$panda$core$Int64($tmp479);
panda$core$Bit $tmp481 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$String$Index$GT $tmp482 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp478, $tmp480, $tmp481);
panda$core$String* $tmp483 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp482);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
// unreffing REF($95:panda.core.String)
return $tmp483;

}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1) {

panda$core$Char8* local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 545
panda$core$Int64* $tmp484 = &param0->_length;
panda$core$Int64 $tmp485 = *$tmp484;
panda$core$Int64* $tmp486 = &param1->_length;
panda$core$Int64 $tmp487 = *$tmp486;
int64_t $tmp488 = $tmp485.value;
int64_t $tmp489 = $tmp487.value;
int64_t $tmp490 = $tmp488 + $tmp489;
panda$core$Int64 $tmp491 = (panda$core$Int64) {$tmp490};
int64_t $tmp492 = $tmp491.value;
panda$core$Char8* $tmp493 = ((panda$core$Char8*) frostAlloc($tmp492 * 1));
*(&local0) = $tmp493;
// line 546
panda$core$Int64 $tmp494 = (panda$core$Int64) {0};
panda$core$Int64* $tmp495 = &param0->_length;
panda$core$Int64 $tmp496 = *$tmp495;
panda$core$Bit $tmp497 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp498 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp494, $tmp496, $tmp497);
panda$core$Int64 $tmp499 = $tmp498.min;
*(&local1) = $tmp499;
panda$core$Int64 $tmp500 = $tmp498.max;
panda$core$Bit $tmp501 = $tmp498.inclusive;
bool $tmp502 = $tmp501.value;
panda$core$Int64 $tmp503 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp504 = panda$core$Int64$convert$R$panda$core$UInt64($tmp503);
if ($tmp502) goto block4; else goto block5;
block4:;
int64_t $tmp505 = $tmp499.value;
int64_t $tmp506 = $tmp500.value;
bool $tmp507 = $tmp505 <= $tmp506;
panda$core$Bit $tmp508 = (panda$core$Bit) {$tmp507};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block1; else goto block2;
block5:;
int64_t $tmp510 = $tmp499.value;
int64_t $tmp511 = $tmp500.value;
bool $tmp512 = $tmp510 < $tmp511;
panda$core$Bit $tmp513 = (panda$core$Bit) {$tmp512};
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block1; else goto block2;
block1:;
// line 547
panda$core$Char8* $tmp515 = *(&local0);
panda$core$Int64 $tmp516 = *(&local1);
panda$core$Char8** $tmp517 = &param0->data;
panda$core$Char8* $tmp518 = *$tmp517;
panda$core$Int64 $tmp519 = *(&local1);
int64_t $tmp520 = $tmp519.value;
panda$core$Char8 $tmp521 = $tmp518[$tmp520];
int64_t $tmp522 = $tmp516.value;
$tmp515[$tmp522] = $tmp521;
goto block3;
block3:;
panda$core$Int64 $tmp523 = *(&local1);
int64_t $tmp524 = $tmp500.value;
int64_t $tmp525 = $tmp523.value;
int64_t $tmp526 = $tmp524 - $tmp525;
panda$core$Int64 $tmp527 = (panda$core$Int64) {$tmp526};
panda$core$UInt64 $tmp528 = panda$core$Int64$convert$R$panda$core$UInt64($tmp527);
if ($tmp502) goto block7; else goto block8;
block7:;
uint64_t $tmp529 = $tmp528.value;
uint64_t $tmp530 = $tmp504.value;
bool $tmp531 = $tmp529 >= $tmp530;
panda$core$Bit $tmp532 = (panda$core$Bit) {$tmp531};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block6; else goto block2;
block8:;
uint64_t $tmp534 = $tmp528.value;
uint64_t $tmp535 = $tmp504.value;
bool $tmp536 = $tmp534 > $tmp535;
panda$core$Bit $tmp537 = (panda$core$Bit) {$tmp536};
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block6; else goto block2;
block6:;
int64_t $tmp539 = $tmp523.value;
int64_t $tmp540 = $tmp503.value;
int64_t $tmp541 = $tmp539 + $tmp540;
panda$core$Int64 $tmp542 = (panda$core$Int64) {$tmp541};
*(&local1) = $tmp542;
goto block1;
block2:;
// line 549
panda$core$Int64 $tmp543 = (panda$core$Int64) {0};
panda$core$Int64* $tmp544 = &param1->_length;
panda$core$Int64 $tmp545 = *$tmp544;
panda$core$Bit $tmp546 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp547 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp543, $tmp545, $tmp546);
panda$core$Int64 $tmp548 = $tmp547.min;
*(&local2) = $tmp548;
panda$core$Int64 $tmp549 = $tmp547.max;
panda$core$Bit $tmp550 = $tmp547.inclusive;
bool $tmp551 = $tmp550.value;
panda$core$Int64 $tmp552 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp553 = panda$core$Int64$convert$R$panda$core$UInt64($tmp552);
if ($tmp551) goto block12; else goto block13;
block12:;
int64_t $tmp554 = $tmp548.value;
int64_t $tmp555 = $tmp549.value;
bool $tmp556 = $tmp554 <= $tmp555;
panda$core$Bit $tmp557 = (panda$core$Bit) {$tmp556};
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block9; else goto block10;
block13:;
int64_t $tmp559 = $tmp548.value;
int64_t $tmp560 = $tmp549.value;
bool $tmp561 = $tmp559 < $tmp560;
panda$core$Bit $tmp562 = (panda$core$Bit) {$tmp561};
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block9; else goto block10;
block9:;
// line 550
panda$core$Char8* $tmp564 = *(&local0);
panda$core$Int64* $tmp565 = &param0->_length;
panda$core$Int64 $tmp566 = *$tmp565;
panda$core$Int64 $tmp567 = *(&local2);
int64_t $tmp568 = $tmp566.value;
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568 + $tmp569;
panda$core$Int64 $tmp571 = (panda$core$Int64) {$tmp570};
panda$core$Char8** $tmp572 = &param1->data;
panda$core$Char8* $tmp573 = *$tmp572;
panda$core$Int64 $tmp574 = *(&local2);
int64_t $tmp575 = $tmp574.value;
panda$core$Char8 $tmp576 = $tmp573[$tmp575];
int64_t $tmp577 = $tmp571.value;
$tmp564[$tmp577] = $tmp576;
goto block11;
block11:;
panda$core$Int64 $tmp578 = *(&local2);
int64_t $tmp579 = $tmp549.value;
int64_t $tmp580 = $tmp578.value;
int64_t $tmp581 = $tmp579 - $tmp580;
panda$core$Int64 $tmp582 = (panda$core$Int64) {$tmp581};
panda$core$UInt64 $tmp583 = panda$core$Int64$convert$R$panda$core$UInt64($tmp582);
if ($tmp551) goto block15; else goto block16;
block15:;
uint64_t $tmp584 = $tmp583.value;
uint64_t $tmp585 = $tmp553.value;
bool $tmp586 = $tmp584 >= $tmp585;
panda$core$Bit $tmp587 = (panda$core$Bit) {$tmp586};
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block14; else goto block10;
block16:;
uint64_t $tmp589 = $tmp583.value;
uint64_t $tmp590 = $tmp553.value;
bool $tmp591 = $tmp589 > $tmp590;
panda$core$Bit $tmp592 = (panda$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block14; else goto block10;
block14:;
int64_t $tmp594 = $tmp578.value;
int64_t $tmp595 = $tmp552.value;
int64_t $tmp596 = $tmp594 + $tmp595;
panda$core$Int64 $tmp597 = (panda$core$Int64) {$tmp596};
*(&local2) = $tmp597;
goto block9;
block10:;
// line 552
panda$core$String* $tmp598 = (panda$core$String*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp599 = *(&local0);
panda$core$Int64* $tmp600 = &param0->_length;
panda$core$Int64 $tmp601 = *$tmp600;
panda$core$Int64* $tmp602 = &param1->_length;
panda$core$Int64 $tmp603 = *$tmp602;
int64_t $tmp604 = $tmp601.value;
int64_t $tmp605 = $tmp603.value;
int64_t $tmp606 = $tmp604 + $tmp605;
panda$core$Int64 $tmp607 = (panda$core$Int64) {$tmp606};
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp598, $tmp599, $tmp607);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
// unreffing REF($143:panda.core.String)
return $tmp598;

}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* param0, panda$core$Object* param1) {

// line 560
$fn609 $tmp608 = ($fn609) param1->$class->vtable[0];
panda$core$String* $tmp610 = $tmp608(param1);
panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(param0, $tmp610);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
// unreffing REF($2:panda.core.String)
return $tmp611;

}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 $tmp612 = (panda$core$Int64) {0};
int64_t $tmp613 = param1.value;
int64_t $tmp614 = $tmp612.value;
bool $tmp615 = $tmp613 >= $tmp614;
panda$core$Bit $tmp616 = (panda$core$Bit) {$tmp615};
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp618 = (panda$core$Int64) {567};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s619, $tmp618, &$s620);
abort(); // unreachable
block1:;
// line 568
panda$core$MutableString* $tmp621 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp621);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
panda$core$MutableString* $tmp622 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
*(&local0) = $tmp621;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
// unreffing REF($11:panda.core.MutableString)
// line 569
panda$core$Int64 $tmp623 = (panda$core$Int64) {0};
panda$core$Bit $tmp624 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp625 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp623, param1, $tmp624);
panda$core$Int64 $tmp626 = $tmp625.min;
*(&local1) = $tmp626;
panda$core$Int64 $tmp627 = $tmp625.max;
panda$core$Bit $tmp628 = $tmp625.inclusive;
bool $tmp629 = $tmp628.value;
panda$core$Int64 $tmp630 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp631 = panda$core$Int64$convert$R$panda$core$UInt64($tmp630);
if ($tmp629) goto block6; else goto block7;
block6:;
int64_t $tmp632 = $tmp626.value;
int64_t $tmp633 = $tmp627.value;
bool $tmp634 = $tmp632 <= $tmp633;
panda$core$Bit $tmp635 = (panda$core$Bit) {$tmp634};
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block3; else goto block4;
block7:;
int64_t $tmp637 = $tmp626.value;
int64_t $tmp638 = $tmp627.value;
bool $tmp639 = $tmp637 < $tmp638;
panda$core$Bit $tmp640 = (panda$core$Bit) {$tmp639};
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block3; else goto block4;
block3:;
// line 570
panda$core$MutableString* $tmp642 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp642, param0);
goto block5;
block5:;
panda$core$Int64 $tmp643 = *(&local1);
int64_t $tmp644 = $tmp627.value;
int64_t $tmp645 = $tmp643.value;
int64_t $tmp646 = $tmp644 - $tmp645;
panda$core$Int64 $tmp647 = (panda$core$Int64) {$tmp646};
panda$core$UInt64 $tmp648 = panda$core$Int64$convert$R$panda$core$UInt64($tmp647);
if ($tmp629) goto block9; else goto block10;
block9:;
uint64_t $tmp649 = $tmp648.value;
uint64_t $tmp650 = $tmp631.value;
bool $tmp651 = $tmp649 >= $tmp650;
panda$core$Bit $tmp652 = (panda$core$Bit) {$tmp651};
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block8; else goto block4;
block10:;
uint64_t $tmp654 = $tmp648.value;
uint64_t $tmp655 = $tmp631.value;
bool $tmp656 = $tmp654 > $tmp655;
panda$core$Bit $tmp657 = (panda$core$Bit) {$tmp656};
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block8; else goto block4;
block8:;
int64_t $tmp659 = $tmp643.value;
int64_t $tmp660 = $tmp630.value;
int64_t $tmp661 = $tmp659 + $tmp660;
panda$core$Int64 $tmp662 = (panda$core$Int64) {$tmp661};
*(&local1) = $tmp662;
goto block3;
block4:;
// line 572
panda$core$MutableString* $tmp663 = *(&local0);
panda$core$String* $tmp664 = panda$core$MutableString$finish$R$panda$core$String($tmp663);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
// unreffing REF($78:panda.core.String)
panda$core$MutableString* $tmp665 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp664;

}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$panda$core$String$R$panda$core$String(panda$core$Int64 param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 $tmp666 = (panda$core$Int64) {0};
int64_t $tmp667 = param0.value;
int64_t $tmp668 = $tmp666.value;
bool $tmp669 = $tmp667 >= $tmp668;
panda$core$Bit $tmp670 = (panda$core$Bit) {$tmp669};
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp672 = (panda$core$Int64) {580};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s673, $tmp672, &$s674);
abort(); // unreachable
block1:;
// line 581
panda$core$MutableString* $tmp675 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp675);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
panda$core$MutableString* $tmp676 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
*(&local0) = $tmp675;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
// unreffing REF($11:panda.core.MutableString)
// line 582
panda$core$Int64 $tmp677 = (panda$core$Int64) {0};
panda$core$Bit $tmp678 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp679 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp677, param0, $tmp678);
panda$core$Int64 $tmp680 = $tmp679.min;
*(&local1) = $tmp680;
panda$core$Int64 $tmp681 = $tmp679.max;
panda$core$Bit $tmp682 = $tmp679.inclusive;
bool $tmp683 = $tmp682.value;
panda$core$Int64 $tmp684 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp685 = panda$core$Int64$convert$R$panda$core$UInt64($tmp684);
if ($tmp683) goto block6; else goto block7;
block6:;
int64_t $tmp686 = $tmp680.value;
int64_t $tmp687 = $tmp681.value;
bool $tmp688 = $tmp686 <= $tmp687;
panda$core$Bit $tmp689 = (panda$core$Bit) {$tmp688};
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block3; else goto block4;
block7:;
int64_t $tmp691 = $tmp680.value;
int64_t $tmp692 = $tmp681.value;
bool $tmp693 = $tmp691 < $tmp692;
panda$core$Bit $tmp694 = (panda$core$Bit) {$tmp693};
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block3; else goto block4;
block3:;
// line 583
panda$core$MutableString* $tmp696 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp696, param1);
goto block5;
block5:;
panda$core$Int64 $tmp697 = *(&local1);
int64_t $tmp698 = $tmp681.value;
int64_t $tmp699 = $tmp697.value;
int64_t $tmp700 = $tmp698 - $tmp699;
panda$core$Int64 $tmp701 = (panda$core$Int64) {$tmp700};
panda$core$UInt64 $tmp702 = panda$core$Int64$convert$R$panda$core$UInt64($tmp701);
if ($tmp683) goto block9; else goto block10;
block9:;
uint64_t $tmp703 = $tmp702.value;
uint64_t $tmp704 = $tmp685.value;
bool $tmp705 = $tmp703 >= $tmp704;
panda$core$Bit $tmp706 = (panda$core$Bit) {$tmp705};
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block8; else goto block4;
block10:;
uint64_t $tmp708 = $tmp702.value;
uint64_t $tmp709 = $tmp685.value;
bool $tmp710 = $tmp708 > $tmp709;
panda$core$Bit $tmp711 = (panda$core$Bit) {$tmp710};
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block8; else goto block4;
block8:;
int64_t $tmp713 = $tmp697.value;
int64_t $tmp714 = $tmp684.value;
int64_t $tmp715 = $tmp713 + $tmp714;
panda$core$Int64 $tmp716 = (panda$core$Int64) {$tmp715};
*(&local1) = $tmp716;
goto block3;
block4:;
// line 585
panda$core$MutableString* $tmp717 = *(&local0);
panda$core$String* $tmp718 = panda$core$MutableString$finish$R$panda$core$String($tmp717);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp718));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp718));
// unreffing REF($78:panda.core.String)
panda$core$MutableString* $tmp719 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp718;

}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* param0, panda$core$String* param1) {

// line 594
$fn721 $tmp720 = ($fn721) param0->$class->vtable[0];
panda$core$String* $tmp722 = $tmp720(param0);
panda$core$String* $tmp723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp722, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp722));
// unreffing REF($2:panda.core.String)
return $tmp723;

}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 607
panda$core$Int64* $tmp724 = &param0->_length;
panda$core$Int64 $tmp725 = *$tmp724;
panda$core$Int64* $tmp726 = &param1->_length;
panda$core$Int64 $tmp727 = *$tmp726;
int64_t $tmp728 = $tmp725.value;
int64_t $tmp729 = $tmp727.value;
bool $tmp730 = $tmp728 != $tmp729;
panda$core$Bit $tmp731 = (panda$core$Bit) {$tmp730};
bool $tmp732 = $tmp731.value;
if ($tmp732) goto block1; else goto block2;
block1:;
// line 608
panda$core$Bit $tmp733 = panda$core$Bit$init$builtin_bit(false);
return $tmp733;
block2:;
// line 610
panda$core$Int64 $tmp734 = (panda$core$Int64) {0};
panda$core$Int64* $tmp735 = &param0->_length;
panda$core$Int64 $tmp736 = *$tmp735;
panda$core$Bit $tmp737 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp738 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp734, $tmp736, $tmp737);
panda$core$Int64 $tmp739 = $tmp738.min;
*(&local0) = $tmp739;
panda$core$Int64 $tmp740 = $tmp738.max;
panda$core$Bit $tmp741 = $tmp738.inclusive;
bool $tmp742 = $tmp741.value;
panda$core$Int64 $tmp743 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp744 = panda$core$Int64$convert$R$panda$core$UInt64($tmp743);
if ($tmp742) goto block6; else goto block7;
block6:;
int64_t $tmp745 = $tmp739.value;
int64_t $tmp746 = $tmp740.value;
bool $tmp747 = $tmp745 <= $tmp746;
panda$core$Bit $tmp748 = (panda$core$Bit) {$tmp747};
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block3; else goto block4;
block7:;
int64_t $tmp750 = $tmp739.value;
int64_t $tmp751 = $tmp740.value;
bool $tmp752 = $tmp750 < $tmp751;
panda$core$Bit $tmp753 = (panda$core$Bit) {$tmp752};
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block3; else goto block4;
block3:;
// line 611
panda$core$Char8** $tmp755 = &param0->data;
panda$core$Char8* $tmp756 = *$tmp755;
panda$core$Int64 $tmp757 = *(&local0);
int64_t $tmp758 = $tmp757.value;
panda$core$Char8 $tmp759 = $tmp756[$tmp758];
panda$core$Char8** $tmp760 = &param1->data;
panda$core$Char8* $tmp761 = *$tmp760;
panda$core$Int64 $tmp762 = *(&local0);
int64_t $tmp763 = $tmp762.value;
panda$core$Char8 $tmp764 = $tmp761[$tmp763];
panda$core$Bit $tmp765 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp759, $tmp764);
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block8; else goto block9;
block8:;
// line 612
panda$core$Bit $tmp767 = panda$core$Bit$init$builtin_bit(false);
return $tmp767;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp768 = *(&local0);
int64_t $tmp769 = $tmp740.value;
int64_t $tmp770 = $tmp768.value;
int64_t $tmp771 = $tmp769 - $tmp770;
panda$core$Int64 $tmp772 = (panda$core$Int64) {$tmp771};
panda$core$UInt64 $tmp773 = panda$core$Int64$convert$R$panda$core$UInt64($tmp772);
if ($tmp742) goto block11; else goto block12;
block11:;
uint64_t $tmp774 = $tmp773.value;
uint64_t $tmp775 = $tmp744.value;
bool $tmp776 = $tmp774 >= $tmp775;
panda$core$Bit $tmp777 = (panda$core$Bit) {$tmp776};
bool $tmp778 = $tmp777.value;
if ($tmp778) goto block10; else goto block4;
block12:;
uint64_t $tmp779 = $tmp773.value;
uint64_t $tmp780 = $tmp744.value;
bool $tmp781 = $tmp779 > $tmp780;
panda$core$Bit $tmp782 = (panda$core$Bit) {$tmp781};
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block10; else goto block4;
block10:;
int64_t $tmp784 = $tmp768.value;
int64_t $tmp785 = $tmp743.value;
int64_t $tmp786 = $tmp784 + $tmp785;
panda$core$Int64 $tmp787 = (panda$core$Int64) {$tmp786};
*(&local0) = $tmp787;
goto block3;
block4:;
// line 615
panda$core$Bit $tmp788 = panda$core$Bit$init$builtin_bit(true);
return $tmp788;

}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* param0, panda$core$String$Index param1) {

panda$core$Int64 local0;
panda$core$Char8 local1;
panda$core$Int32 local2;
// line 622
panda$core$Int64 $tmp789 = param1.value;
*(&local0) = $tmp789;
// line 623
panda$core$Char8** $tmp790 = &param0->data;
panda$core$Char8* $tmp791 = *$tmp790;
panda$core$Int64 $tmp792 = *(&local0);
int64_t $tmp793 = $tmp792.value;
panda$core$Char8 $tmp794 = $tmp791[$tmp793];
*(&local1) = $tmp794;
// line 624
panda$core$Char8 $tmp795 = *(&local1);
panda$core$Int32 $tmp796 = panda$core$Char8$convert$R$panda$core$Int32($tmp795);
*(&local2) = $tmp796;
// line 625
panda$core$Char8 $tmp797 = *(&local1);
uint8_t $tmp798 = $tmp797.value;
int64_t $tmp799 = ((int64_t) $tmp798) & 255;
bool $tmp800 = $tmp799 < 192;
panda$core$Bit $tmp801 = panda$core$Bit$init$builtin_bit($tmp800);
bool $tmp802 = $tmp801.value;
if ($tmp802) goto block1; else goto block2;
block1:;
// line 626
panda$core$Int32 $tmp803 = *(&local2);
panda$core$Char32 $tmp804 = panda$core$Char32$init$panda$core$Int32($tmp803);
return $tmp804;
block2:;
// line 628
panda$core$Char8 $tmp805 = *(&local1);
uint8_t $tmp806 = $tmp805.value;
int64_t $tmp807 = ((int64_t) $tmp806) & 255;
bool $tmp808 = $tmp807 < 224;
panda$core$Bit $tmp809 = panda$core$Bit$init$builtin_bit($tmp808);
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block3; else goto block4;
block3:;
// line 629
panda$core$Int64 $tmp811 = *(&local0);
panda$core$Int64 $tmp812 = (panda$core$Int64) {1};
int64_t $tmp813 = $tmp811.value;
int64_t $tmp814 = $tmp812.value;
int64_t $tmp815 = $tmp813 + $tmp814;
panda$core$Int64 $tmp816 = (panda$core$Int64) {$tmp815};
panda$core$Int64* $tmp817 = &param0->_length;
panda$core$Int64 $tmp818 = *$tmp817;
int64_t $tmp819 = $tmp816.value;
int64_t $tmp820 = $tmp818.value;
bool $tmp821 = $tmp819 < $tmp820;
panda$core$Bit $tmp822 = (panda$core$Bit) {$tmp821};
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp824 = (panda$core$Int64) {629};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s825, $tmp824);
abort(); // unreachable
block5:;
// line 630
panda$core$Int32 $tmp826 = *(&local2);
panda$core$Int32 $tmp827 = (panda$core$Int32) {31};
panda$core$Int32 $tmp828 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp826, $tmp827);
panda$core$Int32 $tmp829 = (panda$core$Int32) {6};
panda$core$Int32 $tmp830 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp828, $tmp829);
panda$core$Char8** $tmp831 = &param0->data;
panda$core$Char8* $tmp832 = *$tmp831;
panda$core$Int64 $tmp833 = *(&local0);
panda$core$Int64 $tmp834 = (panda$core$Int64) {1};
int64_t $tmp835 = $tmp833.value;
int64_t $tmp836 = $tmp834.value;
int64_t $tmp837 = $tmp835 + $tmp836;
panda$core$Int64 $tmp838 = (panda$core$Int64) {$tmp837};
int64_t $tmp839 = $tmp838.value;
panda$core$Char8 $tmp840 = $tmp832[$tmp839];
panda$core$Int32 $tmp841 = panda$core$Char8$convert$R$panda$core$Int32($tmp840);
panda$core$Int32 $tmp842 = (panda$core$Int32) {63};
panda$core$Int32 $tmp843 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp841, $tmp842);
int32_t $tmp844 = $tmp830.value;
int32_t $tmp845 = $tmp843.value;
int32_t $tmp846 = $tmp844 + $tmp845;
panda$core$Int32 $tmp847 = (panda$core$Int32) {$tmp846};
*(&local2) = $tmp847;
// line 631
panda$core$Int32 $tmp848 = *(&local2);
panda$core$Char32 $tmp849 = panda$core$Char32$init$panda$core$Int32($tmp848);
return $tmp849;
block4:;
// line 633
panda$core$Char8 $tmp850 = *(&local1);
uint8_t $tmp851 = $tmp850.value;
int64_t $tmp852 = ((int64_t) $tmp851) & 255;
bool $tmp853 = $tmp852 < 240;
panda$core$Bit $tmp854 = panda$core$Bit$init$builtin_bit($tmp853);
bool $tmp855 = $tmp854.value;
if ($tmp855) goto block7; else goto block8;
block7:;
// line 634
panda$core$Int64 $tmp856 = *(&local0);
panda$core$Int64 $tmp857 = (panda$core$Int64) {2};
int64_t $tmp858 = $tmp856.value;
int64_t $tmp859 = $tmp857.value;
int64_t $tmp860 = $tmp858 + $tmp859;
panda$core$Int64 $tmp861 = (panda$core$Int64) {$tmp860};
panda$core$Int64* $tmp862 = &param0->_length;
panda$core$Int64 $tmp863 = *$tmp862;
int64_t $tmp864 = $tmp861.value;
int64_t $tmp865 = $tmp863.value;
bool $tmp866 = $tmp864 < $tmp865;
panda$core$Bit $tmp867 = (panda$core$Bit) {$tmp866};
bool $tmp868 = $tmp867.value;
if ($tmp868) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp869 = (panda$core$Int64) {634};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s870, $tmp869);
abort(); // unreachable
block9:;
// line 635
panda$core$Int32 $tmp871 = *(&local2);
panda$core$Int32 $tmp872 = (panda$core$Int32) {15};
panda$core$Int32 $tmp873 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp871, $tmp872);
panda$core$Int32 $tmp874 = (panda$core$Int32) {12};
panda$core$Int32 $tmp875 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp873, $tmp874);
panda$core$Char8** $tmp876 = &param0->data;
panda$core$Char8* $tmp877 = *$tmp876;
panda$core$Int64 $tmp878 = *(&local0);
panda$core$Int64 $tmp879 = (panda$core$Int64) {1};
int64_t $tmp880 = $tmp878.value;
int64_t $tmp881 = $tmp879.value;
int64_t $tmp882 = $tmp880 + $tmp881;
panda$core$Int64 $tmp883 = (panda$core$Int64) {$tmp882};
int64_t $tmp884 = $tmp883.value;
panda$core$Char8 $tmp885 = $tmp877[$tmp884];
panda$core$Int32 $tmp886 = panda$core$Char8$convert$R$panda$core$Int32($tmp885);
panda$core$Int32 $tmp887 = (panda$core$Int32) {63};
panda$core$Int32 $tmp888 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp886, $tmp887);
panda$core$Int32 $tmp889 = (panda$core$Int32) {6};
panda$core$Int32 $tmp890 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp888, $tmp889);
int32_t $tmp891 = $tmp875.value;
int32_t $tmp892 = $tmp890.value;
int32_t $tmp893 = $tmp891 + $tmp892;
panda$core$Int32 $tmp894 = (panda$core$Int32) {$tmp893};
panda$core$Char8** $tmp895 = &param0->data;
panda$core$Char8* $tmp896 = *$tmp895;
panda$core$Int64 $tmp897 = *(&local0);
panda$core$Int64 $tmp898 = (panda$core$Int64) {2};
int64_t $tmp899 = $tmp897.value;
int64_t $tmp900 = $tmp898.value;
int64_t $tmp901 = $tmp899 + $tmp900;
panda$core$Int64 $tmp902 = (panda$core$Int64) {$tmp901};
int64_t $tmp903 = $tmp902.value;
panda$core$Char8 $tmp904 = $tmp896[$tmp903];
panda$core$Int32 $tmp905 = panda$core$Char8$convert$R$panda$core$Int32($tmp904);
panda$core$Int32 $tmp906 = (panda$core$Int32) {63};
panda$core$Int32 $tmp907 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp905, $tmp906);
int32_t $tmp908 = $tmp894.value;
int32_t $tmp909 = $tmp907.value;
int32_t $tmp910 = $tmp908 + $tmp909;
panda$core$Int32 $tmp911 = (panda$core$Int32) {$tmp910};
*(&local2) = $tmp911;
// line 637
panda$core$Int32 $tmp912 = *(&local2);
panda$core$Char32 $tmp913 = panda$core$Char32$init$panda$core$Int32($tmp912);
return $tmp913;
block8:;
// line 639
panda$core$Int64 $tmp914 = *(&local0);
panda$core$Int64 $tmp915 = (panda$core$Int64) {3};
int64_t $tmp916 = $tmp914.value;
int64_t $tmp917 = $tmp915.value;
int64_t $tmp918 = $tmp916 + $tmp917;
panda$core$Int64 $tmp919 = (panda$core$Int64) {$tmp918};
panda$core$Int64* $tmp920 = &param0->_length;
panda$core$Int64 $tmp921 = *$tmp920;
int64_t $tmp922 = $tmp919.value;
int64_t $tmp923 = $tmp921.value;
bool $tmp924 = $tmp922 < $tmp923;
panda$core$Bit $tmp925 = (panda$core$Bit) {$tmp924};
bool $tmp926 = $tmp925.value;
if ($tmp926) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp927 = (panda$core$Int64) {639};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s928, $tmp927);
abort(); // unreachable
block11:;
// line 640
panda$core$Int32 $tmp929 = *(&local2);
panda$core$Int32 $tmp930 = (panda$core$Int32) {7};
panda$core$Int32 $tmp931 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp929, $tmp930);
panda$core$Int32 $tmp932 = (panda$core$Int32) {18};
panda$core$Int32 $tmp933 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp931, $tmp932);
panda$core$Char8** $tmp934 = &param0->data;
panda$core$Char8* $tmp935 = *$tmp934;
panda$core$Int64 $tmp936 = *(&local0);
panda$core$Int64 $tmp937 = (panda$core$Int64) {1};
int64_t $tmp938 = $tmp936.value;
int64_t $tmp939 = $tmp937.value;
int64_t $tmp940 = $tmp938 + $tmp939;
panda$core$Int64 $tmp941 = (panda$core$Int64) {$tmp940};
int64_t $tmp942 = $tmp941.value;
panda$core$Char8 $tmp943 = $tmp935[$tmp942];
panda$core$Int32 $tmp944 = panda$core$Char8$convert$R$panda$core$Int32($tmp943);
panda$core$Int32 $tmp945 = (panda$core$Int32) {63};
panda$core$Int32 $tmp946 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp944, $tmp945);
panda$core$Int32 $tmp947 = (panda$core$Int32) {12};
panda$core$Int32 $tmp948 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp946, $tmp947);
int32_t $tmp949 = $tmp933.value;
int32_t $tmp950 = $tmp948.value;
int32_t $tmp951 = $tmp949 + $tmp950;
panda$core$Int32 $tmp952 = (panda$core$Int32) {$tmp951};
panda$core$Char8** $tmp953 = &param0->data;
panda$core$Char8* $tmp954 = *$tmp953;
panda$core$Int64 $tmp955 = *(&local0);
panda$core$Int64 $tmp956 = (panda$core$Int64) {2};
int64_t $tmp957 = $tmp955.value;
int64_t $tmp958 = $tmp956.value;
int64_t $tmp959 = $tmp957 + $tmp958;
panda$core$Int64 $tmp960 = (panda$core$Int64) {$tmp959};
int64_t $tmp961 = $tmp960.value;
panda$core$Char8 $tmp962 = $tmp954[$tmp961];
panda$core$Int32 $tmp963 = panda$core$Char8$convert$R$panda$core$Int32($tmp962);
panda$core$Int32 $tmp964 = (panda$core$Int32) {63};
panda$core$Int32 $tmp965 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp963, $tmp964);
panda$core$Int32 $tmp966 = (panda$core$Int32) {6};
panda$core$Int32 $tmp967 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp965, $tmp966);
int32_t $tmp968 = $tmp952.value;
int32_t $tmp969 = $tmp967.value;
int32_t $tmp970 = $tmp968 + $tmp969;
panda$core$Int32 $tmp971 = (panda$core$Int32) {$tmp970};
panda$core$Char8** $tmp972 = &param0->data;
panda$core$Char8* $tmp973 = *$tmp972;
panda$core$Int64 $tmp974 = *(&local0);
panda$core$Int64 $tmp975 = (panda$core$Int64) {3};
int64_t $tmp976 = $tmp974.value;
int64_t $tmp977 = $tmp975.value;
int64_t $tmp978 = $tmp976 + $tmp977;
panda$core$Int64 $tmp979 = (panda$core$Int64) {$tmp978};
int64_t $tmp980 = $tmp979.value;
panda$core$Char8 $tmp981 = $tmp973[$tmp980];
panda$core$Int32 $tmp982 = panda$core$Char8$convert$R$panda$core$Int32($tmp981);
panda$core$Int32 $tmp983 = (panda$core$Int32) {63};
panda$core$Int32 $tmp984 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp982, $tmp983);
int32_t $tmp985 = $tmp971.value;
int32_t $tmp986 = $tmp984.value;
int32_t $tmp987 = $tmp985 + $tmp986;
panda$core$Int32 $tmp988 = (panda$core$Int32) {$tmp987};
*(&local2) = $tmp988;
// line 643
panda$core$Int32 $tmp989 = *(&local2);
panda$core$Char32 $tmp990 = panda$core$Char32$init$panda$core$Int32($tmp989);
return $tmp990;

}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* param0, panda$core$Int64 param1) {

// line 652
panda$core$String$Index $tmp991 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$String$Index $tmp992 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp991, param1);
panda$core$Char32 $tmp993 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, $tmp992);
return $tmp993;

}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$GT param1) {

panda$core$Int64 local0;
// line 665
panda$core$String$Index $tmp994 = param1.max;
panda$core$Int64 $tmp995 = $tmp994.value;
panda$core$String$Index $tmp996 = param1.min;
panda$core$Int64 $tmp997 = $tmp996.value;
int64_t $tmp998 = $tmp995.value;
int64_t $tmp999 = $tmp997.value;
int64_t $tmp1000 = $tmp998 - $tmp999;
panda$core$Int64 $tmp1001 = (panda$core$Int64) {$tmp1000};
*(&local0) = $tmp1001;
// line 666
panda$core$Bit $tmp1002 = param1.inclusive;
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block1; else goto block2;
block1:;
// line 667
panda$core$Int64 $tmp1004 = *(&local0);
panda$core$Int64 $tmp1005 = (panda$core$Int64) {1};
int64_t $tmp1006 = $tmp1004.value;
int64_t $tmp1007 = $tmp1005.value;
int64_t $tmp1008 = $tmp1006 + $tmp1007;
panda$core$Int64 $tmp1009 = (panda$core$Int64) {$tmp1008};
*(&local0) = $tmp1009;
goto block2;
block2:;
// line 669
panda$core$String* $tmp1010 = (panda$core$String*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8** $tmp1011 = &param0->data;
panda$core$Char8* $tmp1012 = *$tmp1011;
panda$core$String$Index $tmp1013 = param1.min;
panda$core$Int64 $tmp1014 = $tmp1013.value;
int64_t $tmp1015 = $tmp1014.value;
panda$core$Char8* $tmp1016 = $tmp1012 + $tmp1015;
panda$core$Int64 $tmp1017 = *(&local0);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp1010, $tmp1016, $tmp1017, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1010));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1010));
// unreffing REF($24:panda.core.String)
return $tmp1010;

}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$Q$GT param1) {

panda$core$String$Index local0;
panda$core$Bit local1;
panda$core$String$Index local2;
// line 685
// line 686
panda$core$String$Index$nullable $tmp1018 = param1.min;
panda$core$Bit $tmp1019 = panda$core$Bit$init$builtin_bit($tmp1018.nonnull);
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block1; else goto block3;
block1:;
// line 687
panda$core$String$Index$nullable $tmp1021 = param1.min;
panda$core$Bit $tmp1022 = panda$core$Bit$init$builtin_bit($tmp1021.nonnull);
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1024 = (panda$core$Int64) {687};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1025, $tmp1024, &$s1026);
abort(); // unreachable
block4:;
*(&local0) = ((panda$core$String$Index) $tmp1021.value);
goto block2;
block3:;
// line 1
// line 690
panda$core$String$Index $tmp1027 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local0) = $tmp1027;
goto block2;
block2:;
// line 693
panda$core$Bit $tmp1028 = param1.inclusive;
*(&local1) = $tmp1028;
// line 694
// line 695
panda$core$String$Index$nullable $tmp1029 = param1.max;
panda$core$Bit $tmp1030 = panda$core$Bit$init$builtin_bit($tmp1029.nonnull);
bool $tmp1031 = $tmp1030.value;
if ($tmp1031) goto block6; else goto block8;
block6:;
// line 696
panda$core$String$Index$nullable $tmp1032 = param1.max;
panda$core$Bit $tmp1033 = panda$core$Bit$init$builtin_bit($tmp1032.nonnull);
bool $tmp1034 = $tmp1033.value;
if ($tmp1034) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp1035 = (panda$core$Int64) {696};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1036, $tmp1035, &$s1037);
abort(); // unreachable
block9:;
*(&local2) = ((panda$core$String$Index) $tmp1032.value);
goto block7;
block8:;
// line 1
// line 699
panda$core$String$Index $tmp1038 = panda$core$String$get_end$R$panda$core$String$Index(param0);
*(&local2) = $tmp1038;
// line 700
panda$core$Bit $tmp1039 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1039;
goto block7;
block7:;
// line 702
panda$core$String$Index $tmp1040 = *(&local0);
panda$core$String$Index $tmp1041 = *(&local2);
panda$core$Bit $tmp1042 = *(&local1);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1043 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1040, $tmp1041, $tmp1042);
panda$core$String* $tmp1044 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp1043);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1044));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1044));
// unreffing REF($59:panda.core.String)
return $tmp1044;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$GT param1) {

panda$core$Int64 local0;
panda$core$MutableString* local1 = NULL;
panda$core$Int64 local2;
panda$core$Char8 local3;
// line 710
panda$core$String$Index $tmp1045 = param1.min;
panda$core$Int64 $tmp1046 = $tmp1045.value;
*(&local0) = $tmp1046;
// line 711
panda$core$MutableString* $tmp1047 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1047);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
panda$core$MutableString* $tmp1048 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
*(&local1) = $tmp1047;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
// unreffing REF($5:panda.core.MutableString)
// line 712
panda$core$String$Index $tmp1049 = param1.max;
panda$core$Int64 $tmp1050 = $tmp1049.value;
*(&local2) = $tmp1050;
// line 713
panda$core$Bit $tmp1051 = param1.inclusive;
bool $tmp1052 = $tmp1051.value;
if ($tmp1052) goto block1; else goto block2;
block1:;
// line 714
panda$core$Int64 $tmp1053 = *(&local2);
panda$core$Int64 $tmp1054 = (panda$core$Int64) {1};
int64_t $tmp1055 = $tmp1053.value;
int64_t $tmp1056 = $tmp1054.value;
int64_t $tmp1057 = $tmp1055 + $tmp1056;
panda$core$Int64 $tmp1058 = (panda$core$Int64) {$tmp1057};
*(&local2) = $tmp1058;
goto block2;
block2:;
// line 716
goto block3;
block3:;
panda$core$Int64 $tmp1059 = *(&local0);
panda$core$Int64 $tmp1060 = *(&local2);
int64_t $tmp1061 = $tmp1059.value;
int64_t $tmp1062 = $tmp1060.value;
bool $tmp1063 = $tmp1061 < $tmp1062;
panda$core$Bit $tmp1064 = (panda$core$Bit) {$tmp1063};
bool $tmp1065 = $tmp1064.value;
if ($tmp1065) goto block4; else goto block5;
block4:;
// line 717
panda$core$Char8** $tmp1066 = &param0->data;
panda$core$Char8* $tmp1067 = *$tmp1066;
panda$core$Int64 $tmp1068 = *(&local0);
int64_t $tmp1069 = $tmp1068.value;
panda$core$Char8 $tmp1070 = $tmp1067[$tmp1069];
*(&local3) = $tmp1070;
// line 718
panda$core$MutableString* $tmp1071 = *(&local1);
panda$core$Char8 $tmp1072 = *(&local3);
panda$core$MutableString$append$panda$core$Char8($tmp1071, $tmp1072);
// line 719
panda$core$Int64 $tmp1073 = *(&local0);
panda$core$Int64 $tmp1074 = (panda$core$Int64) {1};
int64_t $tmp1075 = $tmp1073.value;
int64_t $tmp1076 = $tmp1074.value;
int64_t $tmp1077 = $tmp1075 + $tmp1076;
panda$core$Int64 $tmp1078 = (panda$core$Int64) {$tmp1077};
*(&local0) = $tmp1078;
// line 720
panda$core$Char8 $tmp1079 = *(&local3);
uint8_t $tmp1080 = $tmp1079.value;
int64_t $tmp1081 = ((int64_t) $tmp1080) & 255;
bool $tmp1082 = $tmp1081 >= 192;
panda$core$Bit $tmp1083 = panda$core$Bit$init$builtin_bit($tmp1082);
bool $tmp1084 = $tmp1083.value;
if ($tmp1084) goto block6; else goto block7;
block6:;
// line 721
panda$core$MutableString* $tmp1085 = *(&local1);
panda$core$Char8** $tmp1086 = &param0->data;
panda$core$Char8* $tmp1087 = *$tmp1086;
panda$core$Int64 $tmp1088 = *(&local0);
int64_t $tmp1089 = $tmp1088.value;
panda$core$Char8 $tmp1090 = $tmp1087[$tmp1089];
panda$core$MutableString$append$panda$core$Char8($tmp1085, $tmp1090);
// line 722
panda$core$Int64 $tmp1091 = *(&local0);
panda$core$Int64 $tmp1092 = (panda$core$Int64) {1};
int64_t $tmp1093 = $tmp1091.value;
int64_t $tmp1094 = $tmp1092.value;
int64_t $tmp1095 = $tmp1093 + $tmp1094;
panda$core$Int64 $tmp1096 = (panda$core$Int64) {$tmp1095};
*(&local0) = $tmp1096;
goto block7;
block7:;
// line 724
panda$core$Char8 $tmp1097 = *(&local3);
uint8_t $tmp1098 = $tmp1097.value;
int64_t $tmp1099 = ((int64_t) $tmp1098) & 255;
bool $tmp1100 = $tmp1099 >= 224;
panda$core$Bit $tmp1101 = panda$core$Bit$init$builtin_bit($tmp1100);
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block8; else goto block9;
block8:;
// line 725
panda$core$MutableString* $tmp1103 = *(&local1);
panda$core$Char8** $tmp1104 = &param0->data;
panda$core$Char8* $tmp1105 = *$tmp1104;
panda$core$Int64 $tmp1106 = *(&local0);
int64_t $tmp1107 = $tmp1106.value;
panda$core$Char8 $tmp1108 = $tmp1105[$tmp1107];
panda$core$MutableString$append$panda$core$Char8($tmp1103, $tmp1108);
// line 726
panda$core$Int64 $tmp1109 = *(&local0);
panda$core$Int64 $tmp1110 = (panda$core$Int64) {1};
int64_t $tmp1111 = $tmp1109.value;
int64_t $tmp1112 = $tmp1110.value;
int64_t $tmp1113 = $tmp1111 + $tmp1112;
panda$core$Int64 $tmp1114 = (panda$core$Int64) {$tmp1113};
*(&local0) = $tmp1114;
goto block9;
block9:;
// line 728
panda$core$Char8 $tmp1115 = *(&local3);
uint8_t $tmp1116 = $tmp1115.value;
int64_t $tmp1117 = ((int64_t) $tmp1116) & 255;
bool $tmp1118 = $tmp1117 >= 240;
panda$core$Bit $tmp1119 = panda$core$Bit$init$builtin_bit($tmp1118);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block10; else goto block11;
block10:;
// line 729
panda$core$MutableString* $tmp1121 = *(&local1);
panda$core$Char8** $tmp1122 = &param0->data;
panda$core$Char8* $tmp1123 = *$tmp1122;
panda$core$Int64 $tmp1124 = *(&local0);
int64_t $tmp1125 = $tmp1124.value;
panda$core$Char8 $tmp1126 = $tmp1123[$tmp1125];
panda$core$MutableString$append$panda$core$Char8($tmp1121, $tmp1126);
// line 730
panda$core$Int64 $tmp1127 = *(&local0);
panda$core$Int64 $tmp1128 = (panda$core$Int64) {1};
int64_t $tmp1129 = $tmp1127.value;
int64_t $tmp1130 = $tmp1128.value;
int64_t $tmp1131 = $tmp1129 + $tmp1130;
panda$core$Int64 $tmp1132 = (panda$core$Int64) {$tmp1131};
*(&local0) = $tmp1132;
goto block11;
block11:;
goto block3;
block5:;
// line 733
panda$core$MutableString* $tmp1133 = *(&local1);
panda$core$String* $tmp1134 = panda$core$MutableString$finish$R$panda$core$String($tmp1133);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
// unreffing REF($144:panda.core.String)
panda$core$MutableString* $tmp1135 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp1134;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$Q$GT param1) {

panda$core$String$Index local0;
panda$core$Bit local1;
panda$core$String$Index local2;
// line 744
panda$core$Int64* $tmp1136 = &param0->_length;
panda$core$Int64 $tmp1137 = *$tmp1136;
panda$core$Int64 $tmp1138 = (panda$core$Int64) {0};
panda$core$Bit $tmp1139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1137, $tmp1138);
bool $tmp1140 = $tmp1139.value;
if ($tmp1140) goto block1; else goto block2;
block1:;
// line 745
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1141));
return &$s1142;
block2:;
// line 747
// line 748
panda$core$String$Index$nullable $tmp1143 = param1.min;
panda$core$Bit $tmp1144 = panda$core$Bit$init$builtin_bit($tmp1143.nonnull);
bool $tmp1145 = $tmp1144.value;
if ($tmp1145) goto block3; else goto block5;
block3:;
// line 749
panda$core$String$Index$nullable $tmp1146 = param1.min;
panda$core$Bit $tmp1147 = panda$core$Bit$init$builtin_bit($tmp1146.nonnull);
bool $tmp1148 = $tmp1147.value;
if ($tmp1148) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp1149 = (panda$core$Int64) {749};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1150, $tmp1149, &$s1151);
abort(); // unreachable
block6:;
*(&local0) = ((panda$core$String$Index) $tmp1146.value);
goto block4;
block5:;
// line 1
// line 752
panda$core$String$Index $tmp1152 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local0) = $tmp1152;
goto block4;
block4:;
// line 755
panda$core$Bit $tmp1153 = param1.inclusive;
*(&local1) = $tmp1153;
// line 756
// line 757
panda$core$String$Index$nullable $tmp1154 = param1.max;
panda$core$Bit $tmp1155 = panda$core$Bit$init$builtin_bit($tmp1154.nonnull);
bool $tmp1156 = $tmp1155.value;
if ($tmp1156) goto block8; else goto block10;
block8:;
// line 758
panda$core$String$Index$nullable $tmp1157 = param1.max;
panda$core$Bit $tmp1158 = panda$core$Bit$init$builtin_bit($tmp1157.nonnull);
bool $tmp1159 = $tmp1158.value;
if ($tmp1159) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp1160 = (panda$core$Int64) {758};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1161, $tmp1160, &$s1162);
abort(); // unreachable
block11:;
*(&local2) = ((panda$core$String$Index) $tmp1157.value);
goto block9;
block10:;
// line 1
// line 761
panda$core$String$Index $tmp1163 = panda$core$String$get_end$R$panda$core$String$Index(param0);
*(&local2) = $tmp1163;
// line 762
panda$core$Bit $tmp1164 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1164;
goto block9;
block9:;
// line 764
panda$core$String$Index $tmp1165 = *(&local0);
panda$core$String$Index $tmp1166 = *(&local2);
panda$core$Bit $tmp1167 = *(&local1);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1168 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1165, $tmp1166, $tmp1167);
panda$core$String* $tmp1169 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp1168);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
// unreffing REF($70:panda.core.String)
return $tmp1169;

}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* param0, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$core$MutableString* local3 = NULL;
panda$core$Char8 local4;
panda$core$Int64 local5;
panda$core$Char8 local6;
panda$core$Int64 local7;
panda$core$Int64 local8;
panda$core$Bit local9;
panda$core$Bit local10;
panda$core$Bit local11;
panda$core$Char8 local12;
// line 780
panda$core$Int64* $tmp1170 = &param0->_length;
panda$core$Int64 $tmp1171 = *$tmp1170;
panda$core$Int64 $tmp1172 = (panda$core$Int64) {0};
panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1171, $tmp1172);
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block1; else goto block2;
block1:;
// line 781
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1175));
return &$s1176;
block2:;
// line 783
panda$core$Int64 $tmp1177 = param1.step;
*(&local0) = $tmp1177;
// line 785
// line 786
panda$core$String$Index$nullable $tmp1178 = param1.start;
panda$core$Bit $tmp1179 = panda$core$Bit$init$builtin_bit($tmp1178.nonnull);
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block3; else goto block5;
block3:;
// line 787
panda$core$String$Index$nullable $tmp1181 = param1.start;
panda$core$Bit $tmp1182 = panda$core$Bit$init$builtin_bit($tmp1181.nonnull);
bool $tmp1183 = $tmp1182.value;
if ($tmp1183) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp1184 = (panda$core$Int64) {787};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1185, $tmp1184, &$s1186);
abort(); // unreachable
block6:;
panda$core$Int64 $tmp1187 = ((panda$core$String$Index) $tmp1181.value).value;
*(&local1) = $tmp1187;
goto block4;
block5:;
// line 789
panda$core$Int64 $tmp1188 = *(&local0);
panda$core$Int64 $tmp1189 = (panda$core$Int64) {0};
int64_t $tmp1190 = $tmp1188.value;
int64_t $tmp1191 = $tmp1189.value;
bool $tmp1192 = $tmp1190 > $tmp1191;
panda$core$Bit $tmp1193 = (panda$core$Bit) {$tmp1192};
bool $tmp1194 = $tmp1193.value;
if ($tmp1194) goto block8; else goto block10;
block8:;
// line 790
panda$core$String$Index $tmp1195 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1196 = $tmp1195.value;
*(&local1) = $tmp1196;
goto block9;
block10:;
// line 1
// line 793
panda$core$String$Index $tmp1197 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index $tmp1198 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1197);
panda$core$Int64 $tmp1199 = $tmp1198.value;
*(&local1) = $tmp1199;
goto block9;
block9:;
goto block4;
block4:;
// line 796
// line 797
panda$core$String$Index$nullable $tmp1200 = param1.end;
panda$core$Bit $tmp1201 = panda$core$Bit$init$builtin_bit($tmp1200.nonnull);
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block11; else goto block13;
block11:;
// line 798
panda$core$String$Index$nullable $tmp1203 = param1.end;
panda$core$Bit $tmp1204 = panda$core$Bit$init$builtin_bit($tmp1203.nonnull);
bool $tmp1205 = $tmp1204.value;
if ($tmp1205) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp1206 = (panda$core$Int64) {798};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1207, $tmp1206, &$s1208);
abort(); // unreachable
block14:;
panda$core$Int64 $tmp1209 = ((panda$core$String$Index) $tmp1203.value).value;
*(&local2) = $tmp1209;
goto block12;
block13:;
// line 800
panda$core$Int64 $tmp1210 = *(&local0);
panda$core$Int64 $tmp1211 = (panda$core$Int64) {0};
int64_t $tmp1212 = $tmp1210.value;
int64_t $tmp1213 = $tmp1211.value;
bool $tmp1214 = $tmp1212 > $tmp1213;
panda$core$Bit $tmp1215 = (panda$core$Bit) {$tmp1214};
bool $tmp1216 = $tmp1215.value;
if ($tmp1216) goto block16; else goto block18;
block16:;
// line 801
panda$core$String$Index $tmp1217 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1218 = $tmp1217.value;
*(&local2) = $tmp1218;
goto block17;
block18:;
// line 1
// line 804
panda$core$String$Index $tmp1219 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1220 = $tmp1219.value;
*(&local2) = $tmp1220;
goto block17;
block17:;
goto block12;
block12:;
// line 807
panda$core$MutableString* $tmp1221 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1221);
*(&local3) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1221));
panda$core$MutableString* $tmp1222 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1222));
*(&local3) = $tmp1221;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1221));
// unreffing REF($98:panda.core.MutableString)
// line 808
panda$core$Int64 $tmp1223 = param1.step;
panda$core$Int64 $tmp1224 = (panda$core$Int64) {0};
int64_t $tmp1225 = $tmp1223.value;
int64_t $tmp1226 = $tmp1224.value;
bool $tmp1227 = $tmp1225 > $tmp1226;
panda$core$Bit $tmp1228 = (panda$core$Bit) {$tmp1227};
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block19; else goto block21;
block19:;
// line 809
goto block22;
block22:;
panda$core$Int64 $tmp1230 = *(&local1);
panda$core$Int64 $tmp1231 = *(&local2);
int64_t $tmp1232 = $tmp1230.value;
int64_t $tmp1233 = $tmp1231.value;
bool $tmp1234 = $tmp1232 < $tmp1233;
panda$core$Bit $tmp1235 = (panda$core$Bit) {$tmp1234};
bool $tmp1236 = $tmp1235.value;
if ($tmp1236) goto block23; else goto block24;
block23:;
// line 810
panda$core$Char8** $tmp1237 = &param0->data;
panda$core$Char8* $tmp1238 = *$tmp1237;
panda$core$Int64 $tmp1239 = *(&local1);
int64_t $tmp1240 = $tmp1239.value;
panda$core$Char8 $tmp1241 = $tmp1238[$tmp1240];
*(&local4) = $tmp1241;
// line 811
panda$core$MutableString* $tmp1242 = *(&local3);
panda$core$Char8 $tmp1243 = *(&local4);
panda$core$MutableString$append$panda$core$Char8($tmp1242, $tmp1243);
// line 812
panda$core$Int64 $tmp1244 = *(&local1);
panda$core$Int64 $tmp1245 = (panda$core$Int64) {1};
int64_t $tmp1246 = $tmp1244.value;
int64_t $tmp1247 = $tmp1245.value;
int64_t $tmp1248 = $tmp1246 + $tmp1247;
panda$core$Int64 $tmp1249 = (panda$core$Int64) {$tmp1248};
*(&local1) = $tmp1249;
// line 813
panda$core$Char8 $tmp1250 = *(&local4);
uint8_t $tmp1251 = $tmp1250.value;
int64_t $tmp1252 = ((int64_t) $tmp1251) & 255;
bool $tmp1253 = $tmp1252 >= 192;
panda$core$Bit $tmp1254 = panda$core$Bit$init$builtin_bit($tmp1253);
bool $tmp1255 = $tmp1254.value;
if ($tmp1255) goto block25; else goto block26;
block25:;
// line 814
panda$core$MutableString* $tmp1256 = *(&local3);
panda$core$Char8** $tmp1257 = &param0->data;
panda$core$Char8* $tmp1258 = *$tmp1257;
panda$core$Int64 $tmp1259 = *(&local1);
int64_t $tmp1260 = $tmp1259.value;
panda$core$Char8 $tmp1261 = $tmp1258[$tmp1260];
panda$core$MutableString$append$panda$core$Char8($tmp1256, $tmp1261);
// line 815
panda$core$Int64 $tmp1262 = *(&local1);
panda$core$Int64 $tmp1263 = (panda$core$Int64) {1};
int64_t $tmp1264 = $tmp1262.value;
int64_t $tmp1265 = $tmp1263.value;
int64_t $tmp1266 = $tmp1264 + $tmp1265;
panda$core$Int64 $tmp1267 = (panda$core$Int64) {$tmp1266};
*(&local1) = $tmp1267;
goto block26;
block26:;
// line 817
panda$core$Char8 $tmp1268 = *(&local4);
uint8_t $tmp1269 = $tmp1268.value;
int64_t $tmp1270 = ((int64_t) $tmp1269) & 255;
bool $tmp1271 = $tmp1270 >= 224;
panda$core$Bit $tmp1272 = panda$core$Bit$init$builtin_bit($tmp1271);
bool $tmp1273 = $tmp1272.value;
if ($tmp1273) goto block27; else goto block28;
block27:;
// line 818
panda$core$MutableString* $tmp1274 = *(&local3);
panda$core$Char8** $tmp1275 = &param0->data;
panda$core$Char8* $tmp1276 = *$tmp1275;
panda$core$Int64 $tmp1277 = *(&local1);
int64_t $tmp1278 = $tmp1277.value;
panda$core$Char8 $tmp1279 = $tmp1276[$tmp1278];
panda$core$MutableString$append$panda$core$Char8($tmp1274, $tmp1279);
// line 819
panda$core$Int64 $tmp1280 = *(&local1);
panda$core$Int64 $tmp1281 = (panda$core$Int64) {1};
int64_t $tmp1282 = $tmp1280.value;
int64_t $tmp1283 = $tmp1281.value;
int64_t $tmp1284 = $tmp1282 + $tmp1283;
panda$core$Int64 $tmp1285 = (panda$core$Int64) {$tmp1284};
*(&local1) = $tmp1285;
goto block28;
block28:;
// line 821
panda$core$Char8 $tmp1286 = *(&local4);
uint8_t $tmp1287 = $tmp1286.value;
int64_t $tmp1288 = ((int64_t) $tmp1287) & 255;
bool $tmp1289 = $tmp1288 >= 240;
panda$core$Bit $tmp1290 = panda$core$Bit$init$builtin_bit($tmp1289);
bool $tmp1291 = $tmp1290.value;
if ($tmp1291) goto block29; else goto block30;
block29:;
// line 822
panda$core$MutableString* $tmp1292 = *(&local3);
panda$core$Char8** $tmp1293 = &param0->data;
panda$core$Char8* $tmp1294 = *$tmp1293;
panda$core$Int64 $tmp1295 = *(&local1);
int64_t $tmp1296 = $tmp1295.value;
panda$core$Char8 $tmp1297 = $tmp1294[$tmp1296];
panda$core$MutableString$append$panda$core$Char8($tmp1292, $tmp1297);
// line 823
panda$core$Int64 $tmp1298 = *(&local1);
panda$core$Int64 $tmp1299 = (panda$core$Int64) {1};
int64_t $tmp1300 = $tmp1298.value;
int64_t $tmp1301 = $tmp1299.value;
int64_t $tmp1302 = $tmp1300 + $tmp1301;
panda$core$Int64 $tmp1303 = (panda$core$Int64) {$tmp1302};
*(&local1) = $tmp1303;
goto block30;
block30:;
// line 825
panda$core$Int64 $tmp1304 = (panda$core$Int64) {1};
panda$core$Int64 $tmp1305 = *(&local0);
panda$core$Bit $tmp1306 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1307 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1304, $tmp1305, $tmp1306);
panda$core$Int64 $tmp1308 = $tmp1307.min;
*(&local5) = $tmp1308;
panda$core$Int64 $tmp1309 = $tmp1307.max;
panda$core$Bit $tmp1310 = $tmp1307.inclusive;
bool $tmp1311 = $tmp1310.value;
panda$core$Int64 $tmp1312 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1313 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1312);
if ($tmp1311) goto block34; else goto block35;
block34:;
int64_t $tmp1314 = $tmp1308.value;
int64_t $tmp1315 = $tmp1309.value;
bool $tmp1316 = $tmp1314 <= $tmp1315;
panda$core$Bit $tmp1317 = (panda$core$Bit) {$tmp1316};
bool $tmp1318 = $tmp1317.value;
if ($tmp1318) goto block31; else goto block32;
block35:;
int64_t $tmp1319 = $tmp1308.value;
int64_t $tmp1320 = $tmp1309.value;
bool $tmp1321 = $tmp1319 < $tmp1320;
panda$core$Bit $tmp1322 = (panda$core$Bit) {$tmp1321};
bool $tmp1323 = $tmp1322.value;
if ($tmp1323) goto block31; else goto block32;
block31:;
// line 826
panda$core$Int64 $tmp1324 = *(&local1);
panda$core$Int64 $tmp1325 = *(&local2);
int64_t $tmp1326 = $tmp1324.value;
int64_t $tmp1327 = $tmp1325.value;
bool $tmp1328 = $tmp1326 >= $tmp1327;
panda$core$Bit $tmp1329 = (panda$core$Bit) {$tmp1328};
bool $tmp1330 = $tmp1329.value;
if ($tmp1330) goto block36; else goto block37;
block36:;
// line 827
panda$core$MutableString* $tmp1331 = *(&local3);
panda$core$String* $tmp1332 = panda$core$MutableString$convert$R$panda$core$String($tmp1331);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
// unreffing REF($262:panda.core.String)
panda$core$MutableString* $tmp1333 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1333));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1332;
block37:;
// line 829
panda$core$Int64 $tmp1334 = *(&local1);
panda$core$String$Index $tmp1335 = panda$core$String$Index$init$panda$core$Int64($tmp1334);
panda$core$String$Index $tmp1336 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1335);
panda$core$Int64 $tmp1337 = $tmp1336.value;
*(&local1) = $tmp1337;
goto block33;
block33:;
panda$core$Int64 $tmp1338 = *(&local5);
int64_t $tmp1339 = $tmp1309.value;
int64_t $tmp1340 = $tmp1338.value;
int64_t $tmp1341 = $tmp1339 - $tmp1340;
panda$core$Int64 $tmp1342 = (panda$core$Int64) {$tmp1341};
panda$core$UInt64 $tmp1343 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1342);
if ($tmp1311) goto block39; else goto block40;
block39:;
uint64_t $tmp1344 = $tmp1343.value;
uint64_t $tmp1345 = $tmp1313.value;
bool $tmp1346 = $tmp1344 >= $tmp1345;
panda$core$Bit $tmp1347 = (panda$core$Bit) {$tmp1346};
bool $tmp1348 = $tmp1347.value;
if ($tmp1348) goto block38; else goto block32;
block40:;
uint64_t $tmp1349 = $tmp1343.value;
uint64_t $tmp1350 = $tmp1313.value;
bool $tmp1351 = $tmp1349 > $tmp1350;
panda$core$Bit $tmp1352 = (panda$core$Bit) {$tmp1351};
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block38; else goto block32;
block38:;
int64_t $tmp1354 = $tmp1338.value;
int64_t $tmp1355 = $tmp1312.value;
int64_t $tmp1356 = $tmp1354 + $tmp1355;
panda$core$Int64 $tmp1357 = (panda$core$Int64) {$tmp1356};
*(&local5) = $tmp1357;
goto block31;
block32:;
goto block22;
block24:;
goto block20;
block21:;
// line 1
// line 834
panda$core$Int64 $tmp1358 = param1.step;
panda$core$Int64 $tmp1359 = (panda$core$Int64) {0};
int64_t $tmp1360 = $tmp1358.value;
int64_t $tmp1361 = $tmp1359.value;
bool $tmp1362 = $tmp1360 < $tmp1361;
panda$core$Bit $tmp1363 = (panda$core$Bit) {$tmp1362};
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block41; else goto block42;
block42:;
panda$core$Int64 $tmp1365 = (panda$core$Int64) {834};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1366, $tmp1365);
abort(); // unreachable
block41:;
// line 835
goto block43;
block43:;
panda$core$Int64 $tmp1367 = *(&local1);
panda$core$Int64 $tmp1368 = *(&local2);
int64_t $tmp1369 = $tmp1367.value;
int64_t $tmp1370 = $tmp1368.value;
bool $tmp1371 = $tmp1369 > $tmp1370;
panda$core$Bit $tmp1372 = (panda$core$Bit) {$tmp1371};
bool $tmp1373 = $tmp1372.value;
if ($tmp1373) goto block44; else goto block45;
block44:;
// line 836
panda$core$Char8** $tmp1374 = &param0->data;
panda$core$Char8* $tmp1375 = *$tmp1374;
panda$core$Int64 $tmp1376 = *(&local1);
int64_t $tmp1377 = $tmp1376.value;
panda$core$Char8 $tmp1378 = $tmp1375[$tmp1377];
*(&local6) = $tmp1378;
// line 837
panda$core$MutableString* $tmp1379 = *(&local3);
panda$core$Char8 $tmp1380 = *(&local6);
panda$core$MutableString$append$panda$core$Char8($tmp1379, $tmp1380);
// line 838
panda$core$Int64 $tmp1381 = *(&local1);
*(&local7) = $tmp1381;
// line 839
panda$core$Int64 $tmp1382 = *(&local1);
panda$core$Int64 $tmp1383 = (panda$core$Int64) {1};
int64_t $tmp1384 = $tmp1382.value;
int64_t $tmp1385 = $tmp1383.value;
int64_t $tmp1386 = $tmp1384 + $tmp1385;
panda$core$Int64 $tmp1387 = (panda$core$Int64) {$tmp1386};
*(&local1) = $tmp1387;
// line 840
panda$core$Char8 $tmp1388 = *(&local6);
uint8_t $tmp1389 = $tmp1388.value;
int64_t $tmp1390 = ((int64_t) $tmp1389) & 255;
bool $tmp1391 = $tmp1390 >= 192;
panda$core$Bit $tmp1392 = panda$core$Bit$init$builtin_bit($tmp1391);
bool $tmp1393 = $tmp1392.value;
if ($tmp1393) goto block46; else goto block47;
block46:;
// line 841
panda$core$MutableString* $tmp1394 = *(&local3);
panda$core$Char8** $tmp1395 = &param0->data;
panda$core$Char8* $tmp1396 = *$tmp1395;
panda$core$Int64 $tmp1397 = *(&local1);
int64_t $tmp1398 = $tmp1397.value;
panda$core$Char8 $tmp1399 = $tmp1396[$tmp1398];
panda$core$MutableString$append$panda$core$Char8($tmp1394, $tmp1399);
// line 842
panda$core$Int64 $tmp1400 = *(&local1);
panda$core$Int64 $tmp1401 = (panda$core$Int64) {1};
int64_t $tmp1402 = $tmp1400.value;
int64_t $tmp1403 = $tmp1401.value;
int64_t $tmp1404 = $tmp1402 + $tmp1403;
panda$core$Int64 $tmp1405 = (panda$core$Int64) {$tmp1404};
*(&local1) = $tmp1405;
goto block47;
block47:;
// line 844
panda$core$Char8 $tmp1406 = *(&local6);
uint8_t $tmp1407 = $tmp1406.value;
int64_t $tmp1408 = ((int64_t) $tmp1407) & 255;
bool $tmp1409 = $tmp1408 >= 224;
panda$core$Bit $tmp1410 = panda$core$Bit$init$builtin_bit($tmp1409);
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block48; else goto block49;
block48:;
// line 845
panda$core$MutableString* $tmp1412 = *(&local3);
panda$core$Char8** $tmp1413 = &param0->data;
panda$core$Char8* $tmp1414 = *$tmp1413;
panda$core$Int64 $tmp1415 = *(&local1);
int64_t $tmp1416 = $tmp1415.value;
panda$core$Char8 $tmp1417 = $tmp1414[$tmp1416];
panda$core$MutableString$append$panda$core$Char8($tmp1412, $tmp1417);
// line 846
panda$core$Int64 $tmp1418 = *(&local1);
panda$core$Int64 $tmp1419 = (panda$core$Int64) {1};
int64_t $tmp1420 = $tmp1418.value;
int64_t $tmp1421 = $tmp1419.value;
int64_t $tmp1422 = $tmp1420 + $tmp1421;
panda$core$Int64 $tmp1423 = (panda$core$Int64) {$tmp1422};
*(&local1) = $tmp1423;
goto block49;
block49:;
// line 848
panda$core$Char8 $tmp1424 = *(&local6);
uint8_t $tmp1425 = $tmp1424.value;
int64_t $tmp1426 = ((int64_t) $tmp1425) & 255;
bool $tmp1427 = $tmp1426 >= 240;
panda$core$Bit $tmp1428 = panda$core$Bit$init$builtin_bit($tmp1427);
bool $tmp1429 = $tmp1428.value;
if ($tmp1429) goto block50; else goto block51;
block50:;
// line 849
panda$core$MutableString* $tmp1430 = *(&local3);
panda$core$Char8** $tmp1431 = &param0->data;
panda$core$Char8* $tmp1432 = *$tmp1431;
panda$core$Int64 $tmp1433 = *(&local1);
int64_t $tmp1434 = $tmp1433.value;
panda$core$Char8 $tmp1435 = $tmp1432[$tmp1434];
panda$core$MutableString$append$panda$core$Char8($tmp1430, $tmp1435);
goto block51;
block51:;
// line 851
panda$core$Int64 $tmp1436 = *(&local7);
panda$core$Int64 $tmp1437 = (panda$core$Int64) {1};
int64_t $tmp1438 = $tmp1436.value;
int64_t $tmp1439 = $tmp1437.value;
int64_t $tmp1440 = $tmp1438 - $tmp1439;
panda$core$Int64 $tmp1441 = (panda$core$Int64) {$tmp1440};
*(&local1) = $tmp1441;
// line 852
goto block52;
block52:;
panda$core$Char8** $tmp1442 = &param0->data;
panda$core$Char8* $tmp1443 = *$tmp1442;
panda$core$Int64 $tmp1444 = *(&local1);
int64_t $tmp1445 = $tmp1444.value;
panda$core$Char8 $tmp1446 = $tmp1443[$tmp1445];
uint8_t $tmp1447 = $tmp1446.value;
int64_t $tmp1448 = ((int64_t) $tmp1447) & 255;
bool $tmp1449 = $tmp1448 >= 128;
panda$core$Char8** $tmp1450 = &param0->data;
panda$core$Char8* $tmp1451 = *$tmp1450;
panda$core$Int64 $tmp1452 = *(&local1);
int64_t $tmp1453 = $tmp1452.value;
panda$core$Char8 $tmp1454 = $tmp1451[$tmp1453];
uint8_t $tmp1455 = $tmp1454.value;
int64_t $tmp1456 = ((int64_t) $tmp1455) & 255;
bool $tmp1457 = $tmp1456 < 192;
bool $tmp1458 = $tmp1449 & $tmp1457;
panda$core$Bit $tmp1459 = panda$core$Bit$init$builtin_bit($tmp1458);
bool $tmp1460 = $tmp1459.value;
if ($tmp1460) goto block53; else goto block54;
block53:;
// line 853
panda$core$Int64 $tmp1461 = *(&local1);
panda$core$Int64 $tmp1462 = (panda$core$Int64) {1};
int64_t $tmp1463 = $tmp1461.value;
int64_t $tmp1464 = $tmp1462.value;
int64_t $tmp1465 = $tmp1463 - $tmp1464;
panda$core$Int64 $tmp1466 = (panda$core$Int64) {$tmp1465};
*(&local1) = $tmp1466;
goto block52;
block54:;
// line 855
panda$core$Int64 $tmp1467 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp1468 = *(&local0);
panda$core$Int64 $tmp1469 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp1470 = panda$core$Bit$init$builtin_bit(false);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1471 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1467, $tmp1468, $tmp1469, $tmp1470);
panda$core$Int64 $tmp1472 = $tmp1471.start;
*(&local8) = $tmp1472;
panda$core$Int64 $tmp1473 = $tmp1471.end;
panda$core$Int64 $tmp1474 = $tmp1471.step;
panda$core$UInt64 $tmp1475 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1474);
panda$core$Int64 $tmp1476 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1474);
panda$core$UInt64 $tmp1477 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1476);
panda$core$Bit $tmp1478 = $tmp1471.inclusive;
bool $tmp1479 = $tmp1478.value;
panda$core$Int64 $tmp1480 = (panda$core$Int64) {0};
int64_t $tmp1481 = $tmp1474.value;
int64_t $tmp1482 = $tmp1480.value;
bool $tmp1483 = $tmp1481 >= $tmp1482;
panda$core$Bit $tmp1484 = (panda$core$Bit) {$tmp1483};
bool $tmp1485 = $tmp1484.value;
if ($tmp1485) goto block58; else goto block59;
block58:;
if ($tmp1479) goto block60; else goto block61;
block60:;
int64_t $tmp1486 = $tmp1472.value;
int64_t $tmp1487 = $tmp1473.value;
bool $tmp1488 = $tmp1486 <= $tmp1487;
panda$core$Bit $tmp1489 = (panda$core$Bit) {$tmp1488};
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block55; else goto block56;
block61:;
int64_t $tmp1491 = $tmp1472.value;
int64_t $tmp1492 = $tmp1473.value;
bool $tmp1493 = $tmp1491 < $tmp1492;
panda$core$Bit $tmp1494 = (panda$core$Bit) {$tmp1493};
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block55; else goto block56;
block59:;
if ($tmp1479) goto block62; else goto block63;
block62:;
int64_t $tmp1496 = $tmp1472.value;
int64_t $tmp1497 = $tmp1473.value;
bool $tmp1498 = $tmp1496 >= $tmp1497;
panda$core$Bit $tmp1499 = (panda$core$Bit) {$tmp1498};
bool $tmp1500 = $tmp1499.value;
if ($tmp1500) goto block55; else goto block56;
block63:;
int64_t $tmp1501 = $tmp1472.value;
int64_t $tmp1502 = $tmp1473.value;
bool $tmp1503 = $tmp1501 > $tmp1502;
panda$core$Bit $tmp1504 = (panda$core$Bit) {$tmp1503};
bool $tmp1505 = $tmp1504.value;
if ($tmp1505) goto block55; else goto block56;
block55:;
// line 856
panda$core$Int64 $tmp1506 = *(&local1);
panda$core$Int64 $tmp1507 = *(&local2);
int64_t $tmp1508 = $tmp1506.value;
int64_t $tmp1509 = $tmp1507.value;
bool $tmp1510 = $tmp1508 <= $tmp1509;
panda$core$Bit $tmp1511 = (panda$core$Bit) {$tmp1510};
bool $tmp1512 = $tmp1511.value;
if ($tmp1512) goto block64; else goto block65;
block64:;
// line 857
panda$core$MutableString* $tmp1513 = *(&local3);
panda$core$String* $tmp1514 = panda$core$MutableString$convert$R$panda$core$String($tmp1513);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
// unreffing REF($523:panda.core.String)
panda$core$MutableString* $tmp1515 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1515));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1514;
block65:;
// line 859
panda$core$Int64 $tmp1516 = *(&local1);
panda$core$String$Index $tmp1517 = panda$core$String$Index$init$panda$core$Int64($tmp1516);
panda$core$String$Index $tmp1518 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1517);
panda$core$Int64 $tmp1519 = $tmp1518.value;
*(&local1) = $tmp1519;
goto block57;
block57:;
panda$core$Int64 $tmp1520 = *(&local8);
if ($tmp1485) goto block67; else goto block68;
block67:;
int64_t $tmp1521 = $tmp1473.value;
int64_t $tmp1522 = $tmp1520.value;
int64_t $tmp1523 = $tmp1521 - $tmp1522;
panda$core$Int64 $tmp1524 = (panda$core$Int64) {$tmp1523};
panda$core$UInt64 $tmp1525 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1524);
if ($tmp1479) goto block69; else goto block70;
block69:;
uint64_t $tmp1526 = $tmp1525.value;
uint64_t $tmp1527 = $tmp1475.value;
bool $tmp1528 = $tmp1526 >= $tmp1527;
panda$core$Bit $tmp1529 = (panda$core$Bit) {$tmp1528};
bool $tmp1530 = $tmp1529.value;
if ($tmp1530) goto block66; else goto block56;
block70:;
uint64_t $tmp1531 = $tmp1525.value;
uint64_t $tmp1532 = $tmp1475.value;
bool $tmp1533 = $tmp1531 > $tmp1532;
panda$core$Bit $tmp1534 = (panda$core$Bit) {$tmp1533};
bool $tmp1535 = $tmp1534.value;
if ($tmp1535) goto block66; else goto block56;
block68:;
int64_t $tmp1536 = $tmp1520.value;
int64_t $tmp1537 = $tmp1473.value;
int64_t $tmp1538 = $tmp1536 - $tmp1537;
panda$core$Int64 $tmp1539 = (panda$core$Int64) {$tmp1538};
panda$core$UInt64 $tmp1540 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1539);
if ($tmp1479) goto block71; else goto block72;
block71:;
uint64_t $tmp1541 = $tmp1540.value;
uint64_t $tmp1542 = $tmp1477.value;
bool $tmp1543 = $tmp1541 >= $tmp1542;
panda$core$Bit $tmp1544 = (panda$core$Bit) {$tmp1543};
bool $tmp1545 = $tmp1544.value;
if ($tmp1545) goto block66; else goto block56;
block72:;
uint64_t $tmp1546 = $tmp1540.value;
uint64_t $tmp1547 = $tmp1477.value;
bool $tmp1548 = $tmp1546 > $tmp1547;
panda$core$Bit $tmp1549 = (panda$core$Bit) {$tmp1548};
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block66; else goto block56;
block66:;
int64_t $tmp1551 = $tmp1520.value;
int64_t $tmp1552 = $tmp1474.value;
int64_t $tmp1553 = $tmp1551 + $tmp1552;
panda$core$Int64 $tmp1554 = (panda$core$Int64) {$tmp1553};
*(&local8) = $tmp1554;
goto block55;
block56:;
goto block43;
block45:;
goto block20;
block20:;
// line 863
panda$core$Bit $tmp1555 = param1.inclusive;
bool $tmp1556 = $tmp1555.value;
if ($tmp1556) goto block75; else goto block76;
block75:;
*(&local11) = $tmp1555;
goto block77;
block76:;
panda$core$String$Index$nullable $tmp1557 = param1.end;
panda$core$Bit $tmp1558 = panda$core$Bit$init$builtin_bit(!$tmp1557.nonnull);
*(&local11) = $tmp1558;
goto block77;
block77:;
panda$core$Bit $tmp1559 = *(&local11);
bool $tmp1560 = $tmp1559.value;
if ($tmp1560) goto block78; else goto block79;
block78:;
panda$core$Int64 $tmp1561 = *(&local1);
panda$core$Int64 $tmp1562 = *(&local2);
panda$core$Bit $tmp1563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1561, $tmp1562);
*(&local10) = $tmp1563;
goto block80;
block79:;
*(&local10) = $tmp1559;
goto block80;
block80:;
panda$core$Bit $tmp1564 = *(&local10);
bool $tmp1565 = $tmp1564.value;
if ($tmp1565) goto block81; else goto block82;
block81:;
panda$core$Int64 $tmp1566 = *(&local2);
panda$core$Int64* $tmp1567 = &param0->_length;
panda$core$Int64 $tmp1568 = *$tmp1567;
int64_t $tmp1569 = $tmp1566.value;
int64_t $tmp1570 = $tmp1568.value;
bool $tmp1571 = $tmp1569 < $tmp1570;
panda$core$Bit $tmp1572 = (panda$core$Bit) {$tmp1571};
*(&local9) = $tmp1572;
goto block83;
block82:;
*(&local9) = $tmp1564;
goto block83;
block83:;
panda$core$Bit $tmp1573 = *(&local9);
bool $tmp1574 = $tmp1573.value;
if ($tmp1574) goto block73; else goto block74;
block73:;
// line 864
panda$core$Char8** $tmp1575 = &param0->data;
panda$core$Char8* $tmp1576 = *$tmp1575;
panda$core$Int64 $tmp1577 = *(&local1);
int64_t $tmp1578 = $tmp1577.value;
panda$core$Char8 $tmp1579 = $tmp1576[$tmp1578];
*(&local12) = $tmp1579;
// line 865
panda$core$MutableString* $tmp1580 = *(&local3);
panda$core$Char8 $tmp1581 = *(&local12);
panda$core$MutableString$append$panda$core$Char8($tmp1580, $tmp1581);
// line 866
panda$core$Int64 $tmp1582 = *(&local1);
panda$core$Int64 $tmp1583 = (panda$core$Int64) {1};
int64_t $tmp1584 = $tmp1582.value;
int64_t $tmp1585 = $tmp1583.value;
int64_t $tmp1586 = $tmp1584 + $tmp1585;
panda$core$Int64 $tmp1587 = (panda$core$Int64) {$tmp1586};
*(&local1) = $tmp1587;
// line 867
panda$core$Char8 $tmp1588 = *(&local12);
uint8_t $tmp1589 = $tmp1588.value;
int64_t $tmp1590 = ((int64_t) $tmp1589) & 255;
bool $tmp1591 = $tmp1590 >= 192;
panda$core$Bit $tmp1592 = panda$core$Bit$init$builtin_bit($tmp1591);
bool $tmp1593 = $tmp1592.value;
if ($tmp1593) goto block84; else goto block85;
block84:;
// line 868
panda$core$MutableString* $tmp1594 = *(&local3);
panda$core$Char8** $tmp1595 = &param0->data;
panda$core$Char8* $tmp1596 = *$tmp1595;
panda$core$Int64 $tmp1597 = *(&local1);
int64_t $tmp1598 = $tmp1597.value;
panda$core$Char8 $tmp1599 = $tmp1596[$tmp1598];
panda$core$MutableString$append$panda$core$Char8($tmp1594, $tmp1599);
// line 869
panda$core$Int64 $tmp1600 = *(&local1);
panda$core$Int64 $tmp1601 = (panda$core$Int64) {1};
int64_t $tmp1602 = $tmp1600.value;
int64_t $tmp1603 = $tmp1601.value;
int64_t $tmp1604 = $tmp1602 + $tmp1603;
panda$core$Int64 $tmp1605 = (panda$core$Int64) {$tmp1604};
*(&local1) = $tmp1605;
goto block85;
block85:;
// line 871
panda$core$Char8 $tmp1606 = *(&local12);
uint8_t $tmp1607 = $tmp1606.value;
int64_t $tmp1608 = ((int64_t) $tmp1607) & 255;
bool $tmp1609 = $tmp1608 >= 224;
panda$core$Bit $tmp1610 = panda$core$Bit$init$builtin_bit($tmp1609);
bool $tmp1611 = $tmp1610.value;
if ($tmp1611) goto block86; else goto block87;
block86:;
// line 872
panda$core$MutableString* $tmp1612 = *(&local3);
panda$core$Char8** $tmp1613 = &param0->data;
panda$core$Char8* $tmp1614 = *$tmp1613;
panda$core$Int64 $tmp1615 = *(&local1);
int64_t $tmp1616 = $tmp1615.value;
panda$core$Char8 $tmp1617 = $tmp1614[$tmp1616];
panda$core$MutableString$append$panda$core$Char8($tmp1612, $tmp1617);
// line 873
panda$core$Int64 $tmp1618 = *(&local1);
panda$core$Int64 $tmp1619 = (panda$core$Int64) {1};
int64_t $tmp1620 = $tmp1618.value;
int64_t $tmp1621 = $tmp1619.value;
int64_t $tmp1622 = $tmp1620 + $tmp1621;
panda$core$Int64 $tmp1623 = (panda$core$Int64) {$tmp1622};
*(&local1) = $tmp1623;
goto block87;
block87:;
// line 875
panda$core$Char8 $tmp1624 = *(&local12);
uint8_t $tmp1625 = $tmp1624.value;
int64_t $tmp1626 = ((int64_t) $tmp1625) & 255;
bool $tmp1627 = $tmp1626 >= 240;
panda$core$Bit $tmp1628 = panda$core$Bit$init$builtin_bit($tmp1627);
bool $tmp1629 = $tmp1628.value;
if ($tmp1629) goto block88; else goto block89;
block88:;
// line 876
panda$core$MutableString* $tmp1630 = *(&local3);
panda$core$Char8** $tmp1631 = &param0->data;
panda$core$Char8* $tmp1632 = *$tmp1631;
panda$core$Int64 $tmp1633 = *(&local1);
int64_t $tmp1634 = $tmp1633.value;
panda$core$Char8 $tmp1635 = $tmp1632[$tmp1634];
panda$core$MutableString$append$panda$core$Char8($tmp1630, $tmp1635);
goto block89;
block89:;
goto block74;
block74:;
// line 879
panda$core$MutableString* $tmp1636 = *(&local3);
panda$core$String* $tmp1637 = panda$core$MutableString$finish$R$panda$core$String($tmp1636);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1637));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1637));
// unreffing REF($718:panda.core.String)
panda$core$MutableString* $tmp1638 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1638));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1637;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$Int64$Q$GT param1) {

panda$core$String$Index$nullable local0;
panda$core$String$Index$nullable local1;
// line 888
// line 889
panda$core$Int64$nullable $tmp1639 = param1.min;
panda$core$Bit $tmp1640 = panda$core$Bit$init$builtin_bit($tmp1639.nonnull);
bool $tmp1641 = $tmp1640.value;
if ($tmp1641) goto block1; else goto block3;
block1:;
// line 890
panda$core$String$Index $tmp1642 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1643 = param1.min;
panda$core$Bit $tmp1644 = panda$core$Bit$init$builtin_bit($tmp1643.nonnull);
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1646 = (panda$core$Int64) {890};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1647, $tmp1646, &$s1648);
abort(); // unreachable
block4:;
panda$core$String$Index $tmp1649 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1642, ((panda$core$Int64) $tmp1643.value));
*(&local0) = ((panda$core$String$Index$nullable) { $tmp1649, true });
goto block2;
block3:;
// line 1
// line 893
*(&local0) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 895
// line 896
panda$core$Int64$nullable $tmp1650 = param1.max;
panda$core$Bit $tmp1651 = panda$core$Bit$init$builtin_bit($tmp1650.nonnull);
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block6; else goto block8;
block6:;
// line 897
panda$core$String$Index $tmp1653 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1654 = param1.max;
panda$core$Bit $tmp1655 = panda$core$Bit$init$builtin_bit($tmp1654.nonnull);
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp1657 = (panda$core$Int64) {897};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1658, $tmp1657, &$s1659);
abort(); // unreachable
block9:;
panda$core$String$Index $tmp1660 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1653, ((panda$core$Int64) $tmp1654.value));
*(&local1) = ((panda$core$String$Index$nullable) { $tmp1660, true });
goto block7;
block8:;
// line 1
// line 900
*(&local1) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block7;
block7:;
// line 902
panda$core$String$Index$nullable $tmp1661 = *(&local0);
panda$core$String$Index$nullable $tmp1662 = *(&local1);
panda$core$Bit $tmp1663 = param1.inclusive;
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1664 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit($tmp1661, $tmp1662, $tmp1663);
panda$core$String* $tmp1665 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp1664);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1665));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1665));
// unreffing REF($57:panda.core.String)
return $tmp1665;

}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* param0, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param1) {

panda$core$String$Index$nullable local0;
panda$core$String$Index$nullable local1;
// line 911
// line 912
panda$core$Int64$nullable $tmp1666 = param1.start;
panda$core$Bit $tmp1667 = panda$core$Bit$init$builtin_bit($tmp1666.nonnull);
bool $tmp1668 = $tmp1667.value;
if ($tmp1668) goto block1; else goto block3;
block1:;
// line 913
panda$core$String$Index $tmp1669 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1670 = param1.start;
panda$core$Bit $tmp1671 = panda$core$Bit$init$builtin_bit($tmp1670.nonnull);
bool $tmp1672 = $tmp1671.value;
if ($tmp1672) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1673 = (panda$core$Int64) {913};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1674, $tmp1673, &$s1675);
abort(); // unreachable
block4:;
panda$core$String$Index $tmp1676 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1669, ((panda$core$Int64) $tmp1670.value));
*(&local0) = ((panda$core$String$Index$nullable) { $tmp1676, true });
goto block2;
block3:;
// line 1
// line 916
*(&local0) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 918
// line 919
panda$core$Int64$nullable $tmp1677 = param1.end;
panda$core$Bit $tmp1678 = panda$core$Bit$init$builtin_bit($tmp1677.nonnull);
bool $tmp1679 = $tmp1678.value;
if ($tmp1679) goto block6; else goto block8;
block6:;
// line 920
panda$core$String$Index $tmp1680 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1681 = param1.end;
panda$core$Bit $tmp1682 = panda$core$Bit$init$builtin_bit($tmp1681.nonnull);
bool $tmp1683 = $tmp1682.value;
if ($tmp1683) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp1684 = (panda$core$Int64) {920};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1685, $tmp1684, &$s1686);
abort(); // unreachable
block9:;
panda$core$String$Index $tmp1687 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1680, ((panda$core$Int64) $tmp1681.value));
*(&local1) = ((panda$core$String$Index$nullable) { $tmp1687, true });
goto block7;
block8:;
// line 1
// line 923
*(&local1) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block7;
block7:;
// line 925
panda$core$String$Index$nullable $tmp1688 = *(&local0);
panda$core$String$Index$nullable $tmp1689 = *(&local1);
panda$core$Int64 $tmp1690 = param1.step;
panda$core$Bit $tmp1691 = param1.inclusive;
panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp1692 = panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit($tmp1688, $tmp1689, $tmp1690, $tmp1691);
panda$core$String* $tmp1693 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(param0, $tmp1692);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1693));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1693));
// unreffing REF($58:panda.core.String)
return $tmp1693;

}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* param0, panda$core$Char8 param1) {

panda$core$Int64 local0;
// line 932
panda$core$Int64 $tmp1694 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1695 = &param0->_length;
panda$core$Int64 $tmp1696 = *$tmp1695;
panda$core$Bit $tmp1697 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1698 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1694, $tmp1696, $tmp1697);
panda$core$Int64 $tmp1699 = $tmp1698.min;
*(&local0) = $tmp1699;
panda$core$Int64 $tmp1700 = $tmp1698.max;
panda$core$Bit $tmp1701 = $tmp1698.inclusive;
bool $tmp1702 = $tmp1701.value;
panda$core$Int64 $tmp1703 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1704 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1703);
if ($tmp1702) goto block4; else goto block5;
block4:;
int64_t $tmp1705 = $tmp1699.value;
int64_t $tmp1706 = $tmp1700.value;
bool $tmp1707 = $tmp1705 <= $tmp1706;
panda$core$Bit $tmp1708 = (panda$core$Bit) {$tmp1707};
bool $tmp1709 = $tmp1708.value;
if ($tmp1709) goto block1; else goto block2;
block5:;
int64_t $tmp1710 = $tmp1699.value;
int64_t $tmp1711 = $tmp1700.value;
bool $tmp1712 = $tmp1710 < $tmp1711;
panda$core$Bit $tmp1713 = (panda$core$Bit) {$tmp1712};
bool $tmp1714 = $tmp1713.value;
if ($tmp1714) goto block1; else goto block2;
block1:;
// line 933
panda$core$Char8** $tmp1715 = &param0->data;
panda$core$Char8* $tmp1716 = *$tmp1715;
panda$core$Int64 $tmp1717 = *(&local0);
int64_t $tmp1718 = $tmp1717.value;
panda$core$Char8 $tmp1719 = $tmp1716[$tmp1718];
panda$core$Bit $tmp1720 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp1719, param1);
bool $tmp1721 = $tmp1720.value;
if ($tmp1721) goto block6; else goto block7;
block6:;
// line 934
panda$core$Bit $tmp1722 = panda$core$Bit$init$builtin_bit(true);
return $tmp1722;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp1723 = *(&local0);
int64_t $tmp1724 = $tmp1700.value;
int64_t $tmp1725 = $tmp1723.value;
int64_t $tmp1726 = $tmp1724 - $tmp1725;
panda$core$Int64 $tmp1727 = (panda$core$Int64) {$tmp1726};
panda$core$UInt64 $tmp1728 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1727);
if ($tmp1702) goto block9; else goto block10;
block9:;
uint64_t $tmp1729 = $tmp1728.value;
uint64_t $tmp1730 = $tmp1704.value;
bool $tmp1731 = $tmp1729 >= $tmp1730;
panda$core$Bit $tmp1732 = (panda$core$Bit) {$tmp1731};
bool $tmp1733 = $tmp1732.value;
if ($tmp1733) goto block8; else goto block2;
block10:;
uint64_t $tmp1734 = $tmp1728.value;
uint64_t $tmp1735 = $tmp1704.value;
bool $tmp1736 = $tmp1734 > $tmp1735;
panda$core$Bit $tmp1737 = (panda$core$Bit) {$tmp1736};
bool $tmp1738 = $tmp1737.value;
if ($tmp1738) goto block8; else goto block2;
block8:;
int64_t $tmp1739 = $tmp1723.value;
int64_t $tmp1740 = $tmp1703.value;
int64_t $tmp1741 = $tmp1739 + $tmp1740;
panda$core$Int64 $tmp1742 = (panda$core$Int64) {$tmp1741};
*(&local0) = $tmp1742;
goto block1;
block2:;
// line 937
panda$core$Bit $tmp1743 = panda$core$Bit$init$builtin_bit(false);
return $tmp1743;

}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

// line 944
panda$core$String$Index$nullable $tmp1744 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(param0, param1);
panda$core$Bit $tmp1745 = panda$core$Bit$init$builtin_bit($tmp1744.nonnull);
return $tmp1745;

}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1) {

// line 955
panda$core$String$Index $tmp1746 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$String$Index$nullable $tmp1747 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp1746);
return $tmp1747;

}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1, panda$core$String$Index param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 967
panda$core$Int64* $tmp1748 = &param0->_length;
panda$core$Int64 $tmp1749 = *$tmp1748;
panda$core$Int64* $tmp1750 = &param1->_length;
panda$core$Int64 $tmp1751 = *$tmp1750;
int64_t $tmp1752 = $tmp1749.value;
int64_t $tmp1753 = $tmp1751.value;
bool $tmp1754 = $tmp1752 < $tmp1753;
panda$core$Bit $tmp1755 = (panda$core$Bit) {$tmp1754};
bool $tmp1756 = $tmp1755.value;
if ($tmp1756) goto block1; else goto block2;
block1:;
// line 968
return ((panda$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 970
panda$core$Int64 $tmp1757 = param2.value;
panda$core$Int64* $tmp1758 = &param0->_length;
panda$core$Int64 $tmp1759 = *$tmp1758;
panda$core$Int64* $tmp1760 = &param1->_length;
panda$core$Int64 $tmp1761 = *$tmp1760;
int64_t $tmp1762 = $tmp1759.value;
int64_t $tmp1763 = $tmp1761.value;
int64_t $tmp1764 = $tmp1762 - $tmp1763;
panda$core$Int64 $tmp1765 = (panda$core$Int64) {$tmp1764};
panda$core$Bit $tmp1766 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$Int64$GT $tmp1767 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1757, $tmp1765, $tmp1766);
panda$core$Int64 $tmp1768 = $tmp1767.min;
*(&local0) = $tmp1768;
panda$core$Int64 $tmp1769 = $tmp1767.max;
panda$core$Bit $tmp1770 = $tmp1767.inclusive;
bool $tmp1771 = $tmp1770.value;
panda$core$Int64 $tmp1772 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1773 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1772);
if ($tmp1771) goto block6; else goto block7;
block6:;
int64_t $tmp1774 = $tmp1768.value;
int64_t $tmp1775 = $tmp1769.value;
bool $tmp1776 = $tmp1774 <= $tmp1775;
panda$core$Bit $tmp1777 = (panda$core$Bit) {$tmp1776};
bool $tmp1778 = $tmp1777.value;
if ($tmp1778) goto block3; else goto block4;
block7:;
int64_t $tmp1779 = $tmp1768.value;
int64_t $tmp1780 = $tmp1769.value;
bool $tmp1781 = $tmp1779 < $tmp1780;
panda$core$Bit $tmp1782 = (panda$core$Bit) {$tmp1781};
bool $tmp1783 = $tmp1782.value;
if ($tmp1783) goto block3; else goto block4;
block3:;
// line 971
panda$core$Int64 $tmp1784 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1785 = &param1->_length;
panda$core$Int64 $tmp1786 = *$tmp1785;
panda$core$Bit $tmp1787 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1788 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1784, $tmp1786, $tmp1787);
panda$core$Int64 $tmp1789 = $tmp1788.min;
*(&local1) = $tmp1789;
panda$core$Int64 $tmp1790 = $tmp1788.max;
panda$core$Bit $tmp1791 = $tmp1788.inclusive;
bool $tmp1792 = $tmp1791.value;
panda$core$Int64 $tmp1793 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1794 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1793);
if ($tmp1792) goto block11; else goto block12;
block11:;
int64_t $tmp1795 = $tmp1789.value;
int64_t $tmp1796 = $tmp1790.value;
bool $tmp1797 = $tmp1795 <= $tmp1796;
panda$core$Bit $tmp1798 = (panda$core$Bit) {$tmp1797};
bool $tmp1799 = $tmp1798.value;
if ($tmp1799) goto block8; else goto block9;
block12:;
int64_t $tmp1800 = $tmp1789.value;
int64_t $tmp1801 = $tmp1790.value;
bool $tmp1802 = $tmp1800 < $tmp1801;
panda$core$Bit $tmp1803 = (panda$core$Bit) {$tmp1802};
bool $tmp1804 = $tmp1803.value;
if ($tmp1804) goto block8; else goto block9;
block8:;
// line 972
panda$core$Char8** $tmp1805 = &param0->data;
panda$core$Char8* $tmp1806 = *$tmp1805;
panda$core$Int64 $tmp1807 = *(&local0);
panda$core$Int64 $tmp1808 = *(&local1);
int64_t $tmp1809 = $tmp1807.value;
int64_t $tmp1810 = $tmp1808.value;
int64_t $tmp1811 = $tmp1809 + $tmp1810;
panda$core$Int64 $tmp1812 = (panda$core$Int64) {$tmp1811};
int64_t $tmp1813 = $tmp1812.value;
panda$core$Char8 $tmp1814 = $tmp1806[$tmp1813];
panda$core$Char8** $tmp1815 = &param1->data;
panda$core$Char8* $tmp1816 = *$tmp1815;
panda$core$Int64 $tmp1817 = *(&local1);
int64_t $tmp1818 = $tmp1817.value;
panda$core$Char8 $tmp1819 = $tmp1816[$tmp1818];
panda$core$Bit $tmp1820 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp1814, $tmp1819);
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block13; else goto block14;
block13:;
// line 973
goto block5;
block14:;
goto block10;
block10:;
panda$core$Int64 $tmp1822 = *(&local1);
int64_t $tmp1823 = $tmp1790.value;
int64_t $tmp1824 = $tmp1822.value;
int64_t $tmp1825 = $tmp1823 - $tmp1824;
panda$core$Int64 $tmp1826 = (panda$core$Int64) {$tmp1825};
panda$core$UInt64 $tmp1827 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1826);
if ($tmp1792) goto block16; else goto block17;
block16:;
uint64_t $tmp1828 = $tmp1827.value;
uint64_t $tmp1829 = $tmp1794.value;
bool $tmp1830 = $tmp1828 >= $tmp1829;
panda$core$Bit $tmp1831 = (panda$core$Bit) {$tmp1830};
bool $tmp1832 = $tmp1831.value;
if ($tmp1832) goto block15; else goto block9;
block17:;
uint64_t $tmp1833 = $tmp1827.value;
uint64_t $tmp1834 = $tmp1794.value;
bool $tmp1835 = $tmp1833 > $tmp1834;
panda$core$Bit $tmp1836 = (panda$core$Bit) {$tmp1835};
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block15; else goto block9;
block15:;
int64_t $tmp1838 = $tmp1822.value;
int64_t $tmp1839 = $tmp1793.value;
int64_t $tmp1840 = $tmp1838 + $tmp1839;
panda$core$Int64 $tmp1841 = (panda$core$Int64) {$tmp1840};
*(&local1) = $tmp1841;
goto block8;
block9:;
// line 976
panda$core$Int64 $tmp1842 = *(&local0);
panda$core$String$Index $tmp1843 = panda$core$String$Index$init$panda$core$Int64($tmp1842);
panda$core$Bit $tmp1844 = panda$core$Bit$init$builtin_bit(((panda$core$String$Index$nullable) { $tmp1843, true }).nonnull);
bool $tmp1845 = $tmp1844.value;
if ($tmp1845) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp1846 = (panda$core$Int64) {1};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1847, $tmp1846, &$s1848);
abort(); // unreachable
block18:;
return ((panda$core$String$Index$nullable) { ((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp1843, true }).value), true });
block5:;
panda$core$Int64 $tmp1849 = *(&local0);
int64_t $tmp1850 = $tmp1769.value;
int64_t $tmp1851 = $tmp1849.value;
int64_t $tmp1852 = $tmp1850 - $tmp1851;
panda$core$Int64 $tmp1853 = (panda$core$Int64) {$tmp1852};
panda$core$UInt64 $tmp1854 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1853);
if ($tmp1771) goto block21; else goto block22;
block21:;
uint64_t $tmp1855 = $tmp1854.value;
uint64_t $tmp1856 = $tmp1773.value;
bool $tmp1857 = $tmp1855 >= $tmp1856;
panda$core$Bit $tmp1858 = (panda$core$Bit) {$tmp1857};
bool $tmp1859 = $tmp1858.value;
if ($tmp1859) goto block20; else goto block4;
block22:;
uint64_t $tmp1860 = $tmp1854.value;
uint64_t $tmp1861 = $tmp1773.value;
bool $tmp1862 = $tmp1860 > $tmp1861;
panda$core$Bit $tmp1863 = (panda$core$Bit) {$tmp1862};
bool $tmp1864 = $tmp1863.value;
if ($tmp1864) goto block20; else goto block4;
block20:;
int64_t $tmp1865 = $tmp1849.value;
int64_t $tmp1866 = $tmp1772.value;
int64_t $tmp1867 = $tmp1865 + $tmp1866;
panda$core$Int64 $tmp1868 = (panda$core$Int64) {$tmp1867};
*(&local0) = $tmp1868;
goto block3;
block4:;
// line 978
return ((panda$core$String$Index$nullable) { .nonnull = false });

}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1) {

// line 989
panda$core$String$Index $tmp1869 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index$nullable $tmp1870 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp1869);
return $tmp1870;

}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1, panda$core$String$Index param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 1001
panda$core$Int64* $tmp1871 = &param0->_length;
panda$core$Int64 $tmp1872 = *$tmp1871;
panda$core$Int64* $tmp1873 = &param1->_length;
panda$core$Int64 $tmp1874 = *$tmp1873;
int64_t $tmp1875 = $tmp1872.value;
int64_t $tmp1876 = $tmp1874.value;
bool $tmp1877 = $tmp1875 < $tmp1876;
panda$core$Bit $tmp1878 = (panda$core$Bit) {$tmp1877};
bool $tmp1879 = $tmp1878.value;
if ($tmp1879) goto block1; else goto block2;
block1:;
// line 1002
return ((panda$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 1004
panda$core$Int64 $tmp1880 = param2.value;
panda$core$Int64* $tmp1881 = &param0->_length;
panda$core$Int64 $tmp1882 = *$tmp1881;
panda$core$Int64* $tmp1883 = &param1->_length;
panda$core$Int64 $tmp1884 = *$tmp1883;
int64_t $tmp1885 = $tmp1882.value;
int64_t $tmp1886 = $tmp1884.value;
int64_t $tmp1887 = $tmp1885 - $tmp1886;
panda$core$Int64 $tmp1888 = (panda$core$Int64) {$tmp1887};
panda$core$Int64 $tmp1889 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp1880, $tmp1888);
*(&local0) = $tmp1889;
// line 1005
panda$core$Int64 $tmp1890 = *(&local0);
panda$core$Int64 $tmp1891 = (panda$core$Int64) {0};
panda$core$Int64 $tmp1892 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp1893 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1894 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1890, $tmp1891, $tmp1892, $tmp1893);
panda$core$Int64 $tmp1895 = $tmp1894.start;
*(&local1) = $tmp1895;
panda$core$Int64 $tmp1896 = $tmp1894.end;
panda$core$Int64 $tmp1897 = $tmp1894.step;
panda$core$UInt64 $tmp1898 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1897);
panda$core$Int64 $tmp1899 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1897);
panda$core$UInt64 $tmp1900 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1899);
panda$core$Bit $tmp1901 = $tmp1894.inclusive;
bool $tmp1902 = $tmp1901.value;
panda$core$Int64 $tmp1903 = (panda$core$Int64) {0};
int64_t $tmp1904 = $tmp1897.value;
int64_t $tmp1905 = $tmp1903.value;
bool $tmp1906 = $tmp1904 >= $tmp1905;
panda$core$Bit $tmp1907 = (panda$core$Bit) {$tmp1906};
bool $tmp1908 = $tmp1907.value;
if ($tmp1908) goto block6; else goto block7;
block6:;
if ($tmp1902) goto block8; else goto block9;
block8:;
int64_t $tmp1909 = $tmp1895.value;
int64_t $tmp1910 = $tmp1896.value;
bool $tmp1911 = $tmp1909 <= $tmp1910;
panda$core$Bit $tmp1912 = (panda$core$Bit) {$tmp1911};
bool $tmp1913 = $tmp1912.value;
if ($tmp1913) goto block3; else goto block4;
block9:;
int64_t $tmp1914 = $tmp1895.value;
int64_t $tmp1915 = $tmp1896.value;
bool $tmp1916 = $tmp1914 < $tmp1915;
panda$core$Bit $tmp1917 = (panda$core$Bit) {$tmp1916};
bool $tmp1918 = $tmp1917.value;
if ($tmp1918) goto block3; else goto block4;
block7:;
if ($tmp1902) goto block10; else goto block11;
block10:;
int64_t $tmp1919 = $tmp1895.value;
int64_t $tmp1920 = $tmp1896.value;
bool $tmp1921 = $tmp1919 >= $tmp1920;
panda$core$Bit $tmp1922 = (panda$core$Bit) {$tmp1921};
bool $tmp1923 = $tmp1922.value;
if ($tmp1923) goto block3; else goto block4;
block11:;
int64_t $tmp1924 = $tmp1895.value;
int64_t $tmp1925 = $tmp1896.value;
bool $tmp1926 = $tmp1924 > $tmp1925;
panda$core$Bit $tmp1927 = (panda$core$Bit) {$tmp1926};
bool $tmp1928 = $tmp1927.value;
if ($tmp1928) goto block3; else goto block4;
block3:;
// line 1006
panda$core$Int64 $tmp1929 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1930 = &param1->_length;
panda$core$Int64 $tmp1931 = *$tmp1930;
panda$core$Bit $tmp1932 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1933 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1929, $tmp1931, $tmp1932);
panda$core$Int64 $tmp1934 = $tmp1933.min;
*(&local2) = $tmp1934;
panda$core$Int64 $tmp1935 = $tmp1933.max;
panda$core$Bit $tmp1936 = $tmp1933.inclusive;
bool $tmp1937 = $tmp1936.value;
panda$core$Int64 $tmp1938 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1939 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1938);
if ($tmp1937) goto block15; else goto block16;
block15:;
int64_t $tmp1940 = $tmp1934.value;
int64_t $tmp1941 = $tmp1935.value;
bool $tmp1942 = $tmp1940 <= $tmp1941;
panda$core$Bit $tmp1943 = (panda$core$Bit) {$tmp1942};
bool $tmp1944 = $tmp1943.value;
if ($tmp1944) goto block12; else goto block13;
block16:;
int64_t $tmp1945 = $tmp1934.value;
int64_t $tmp1946 = $tmp1935.value;
bool $tmp1947 = $tmp1945 < $tmp1946;
panda$core$Bit $tmp1948 = (panda$core$Bit) {$tmp1947};
bool $tmp1949 = $tmp1948.value;
if ($tmp1949) goto block12; else goto block13;
block12:;
// line 1007
panda$core$Char8** $tmp1950 = &param0->data;
panda$core$Char8* $tmp1951 = *$tmp1950;
panda$core$Int64 $tmp1952 = *(&local1);
panda$core$Int64 $tmp1953 = *(&local2);
int64_t $tmp1954 = $tmp1952.value;
int64_t $tmp1955 = $tmp1953.value;
int64_t $tmp1956 = $tmp1954 + $tmp1955;
panda$core$Int64 $tmp1957 = (panda$core$Int64) {$tmp1956};
int64_t $tmp1958 = $tmp1957.value;
panda$core$Char8 $tmp1959 = $tmp1951[$tmp1958];
panda$core$Char8** $tmp1960 = &param1->data;
panda$core$Char8* $tmp1961 = *$tmp1960;
panda$core$Int64 $tmp1962 = *(&local2);
int64_t $tmp1963 = $tmp1962.value;
panda$core$Char8 $tmp1964 = $tmp1961[$tmp1963];
panda$core$Bit $tmp1965 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp1959, $tmp1964);
bool $tmp1966 = $tmp1965.value;
if ($tmp1966) goto block17; else goto block18;
block17:;
// line 1008
goto block5;
block18:;
goto block14;
block14:;
panda$core$Int64 $tmp1967 = *(&local2);
int64_t $tmp1968 = $tmp1935.value;
int64_t $tmp1969 = $tmp1967.value;
int64_t $tmp1970 = $tmp1968 - $tmp1969;
panda$core$Int64 $tmp1971 = (panda$core$Int64) {$tmp1970};
panda$core$UInt64 $tmp1972 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1971);
if ($tmp1937) goto block20; else goto block21;
block20:;
uint64_t $tmp1973 = $tmp1972.value;
uint64_t $tmp1974 = $tmp1939.value;
bool $tmp1975 = $tmp1973 >= $tmp1974;
panda$core$Bit $tmp1976 = (panda$core$Bit) {$tmp1975};
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block19; else goto block13;
block21:;
uint64_t $tmp1978 = $tmp1972.value;
uint64_t $tmp1979 = $tmp1939.value;
bool $tmp1980 = $tmp1978 > $tmp1979;
panda$core$Bit $tmp1981 = (panda$core$Bit) {$tmp1980};
bool $tmp1982 = $tmp1981.value;
if ($tmp1982) goto block19; else goto block13;
block19:;
int64_t $tmp1983 = $tmp1967.value;
int64_t $tmp1984 = $tmp1938.value;
int64_t $tmp1985 = $tmp1983 + $tmp1984;
panda$core$Int64 $tmp1986 = (panda$core$Int64) {$tmp1985};
*(&local2) = $tmp1986;
goto block12;
block13:;
// line 1011
panda$core$Int64 $tmp1987 = *(&local1);
panda$core$String$Index $tmp1988 = panda$core$String$Index$init$panda$core$Int64($tmp1987);
panda$core$Bit $tmp1989 = panda$core$Bit$init$builtin_bit(((panda$core$String$Index$nullable) { $tmp1988, true }).nonnull);
bool $tmp1990 = $tmp1989.value;
if ($tmp1990) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp1991 = (panda$core$Int64) {1};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1992, $tmp1991, &$s1993);
abort(); // unreachable
block22:;
return ((panda$core$String$Index$nullable) { ((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp1988, true }).value), true });
block5:;
panda$core$Int64 $tmp1994 = *(&local1);
if ($tmp1908) goto block25; else goto block26;
block25:;
int64_t $tmp1995 = $tmp1896.value;
int64_t $tmp1996 = $tmp1994.value;
int64_t $tmp1997 = $tmp1995 - $tmp1996;
panda$core$Int64 $tmp1998 = (panda$core$Int64) {$tmp1997};
panda$core$UInt64 $tmp1999 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1998);
if ($tmp1902) goto block27; else goto block28;
block27:;
uint64_t $tmp2000 = $tmp1999.value;
uint64_t $tmp2001 = $tmp1898.value;
bool $tmp2002 = $tmp2000 >= $tmp2001;
panda$core$Bit $tmp2003 = (panda$core$Bit) {$tmp2002};
bool $tmp2004 = $tmp2003.value;
if ($tmp2004) goto block24; else goto block4;
block28:;
uint64_t $tmp2005 = $tmp1999.value;
uint64_t $tmp2006 = $tmp1898.value;
bool $tmp2007 = $tmp2005 > $tmp2006;
panda$core$Bit $tmp2008 = (panda$core$Bit) {$tmp2007};
bool $tmp2009 = $tmp2008.value;
if ($tmp2009) goto block24; else goto block4;
block26:;
int64_t $tmp2010 = $tmp1994.value;
int64_t $tmp2011 = $tmp1896.value;
int64_t $tmp2012 = $tmp2010 - $tmp2011;
panda$core$Int64 $tmp2013 = (panda$core$Int64) {$tmp2012};
panda$core$UInt64 $tmp2014 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2013);
if ($tmp1902) goto block29; else goto block30;
block29:;
uint64_t $tmp2015 = $tmp2014.value;
uint64_t $tmp2016 = $tmp1900.value;
bool $tmp2017 = $tmp2015 >= $tmp2016;
panda$core$Bit $tmp2018 = (panda$core$Bit) {$tmp2017};
bool $tmp2019 = $tmp2018.value;
if ($tmp2019) goto block24; else goto block4;
block30:;
uint64_t $tmp2020 = $tmp2014.value;
uint64_t $tmp2021 = $tmp1900.value;
bool $tmp2022 = $tmp2020 > $tmp2021;
panda$core$Bit $tmp2023 = (panda$core$Bit) {$tmp2022};
bool $tmp2024 = $tmp2023.value;
if ($tmp2024) goto block24; else goto block4;
block24:;
int64_t $tmp2025 = $tmp1994.value;
int64_t $tmp2026 = $tmp1897.value;
int64_t $tmp2027 = $tmp2025 + $tmp2026;
panda$core$Int64 $tmp2028 = (panda$core$Int64) {$tmp2027};
*(&local1) = $tmp2028;
goto block3;
block4:;
// line 1013
return ((panda$core$String$Index$nullable) { .nonnull = false });

}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1024
panda$core$Matcher* $tmp2029 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
panda$core$Bit $tmp2030;
panda$core$Matcher$matches$R$panda$core$Bit(&$tmp2030, $tmp2029);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
// unreffing REF($1:panda.core.Matcher)
return $tmp2030;

}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1035
panda$core$Matcher* $tmp2031 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
panda$core$Bit $tmp2032 = panda$core$Matcher$find$R$panda$core$Bit($tmp2031);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2031));
// unreffing REF($1:panda.core.Matcher)
return $tmp2032;

}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* param0, panda$core$RegularExpression* param1) {

panda$core$Matcher* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$core$Int64 local2;
// line 1049
panda$core$Matcher* $tmp2033 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local0) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2033));
panda$core$Matcher* $tmp2034 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2034));
*(&local0) = $tmp2033;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2033));
// unreffing REF($1:panda.core.Matcher)
// line 1050
panda$core$Matcher* $tmp2035 = *(&local0);
panda$core$Bit $tmp2036;
panda$core$Matcher$matches$R$panda$core$Bit(&$tmp2036, $tmp2035);
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block1; else goto block2;
block1:;
// line 1051
panda$collections$Array* $tmp2038 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2038);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2038));
panda$collections$Array* $tmp2039 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2039));
*(&local1) = $tmp2038;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2038));
// unreffing REF($18:panda.collections.Array<panda.core.String>)
// line 1052
panda$core$Int64 $tmp2040 = (panda$core$Int64) {1};
panda$core$Matcher* $tmp2041 = *(&local0);
panda$core$Int64 $tmp2042;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp2042, $tmp2041);
panda$core$Bit $tmp2043 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2044 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2040, $tmp2042, $tmp2043);
panda$core$Int64 $tmp2045 = $tmp2044.min;
*(&local2) = $tmp2045;
panda$core$Int64 $tmp2046 = $tmp2044.max;
panda$core$Bit $tmp2047 = $tmp2044.inclusive;
bool $tmp2048 = $tmp2047.value;
panda$core$Int64 $tmp2049 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2050 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2049);
if ($tmp2048) goto block6; else goto block7;
block6:;
int64_t $tmp2051 = $tmp2045.value;
int64_t $tmp2052 = $tmp2046.value;
bool $tmp2053 = $tmp2051 <= $tmp2052;
panda$core$Bit $tmp2054 = (panda$core$Bit) {$tmp2053};
bool $tmp2055 = $tmp2054.value;
if ($tmp2055) goto block3; else goto block4;
block7:;
int64_t $tmp2056 = $tmp2045.value;
int64_t $tmp2057 = $tmp2046.value;
bool $tmp2058 = $tmp2056 < $tmp2057;
panda$core$Bit $tmp2059 = (panda$core$Bit) {$tmp2058};
bool $tmp2060 = $tmp2059.value;
if ($tmp2060) goto block3; else goto block4;
block3:;
// line 1053
panda$collections$Array* $tmp2061 = *(&local1);
panda$core$Matcher* $tmp2062 = *(&local0);
panda$core$Int64 $tmp2063 = *(&local2);
panda$core$String* $tmp2064 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp2062, $tmp2063);
panda$core$Bit $tmp2065 = panda$core$Bit$init$builtin_bit($tmp2064 != NULL);
bool $tmp2066 = $tmp2065.value;
if ($tmp2066) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp2067 = (panda$core$Int64) {1053};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2068, $tmp2067, &$s2069);
abort(); // unreachable
block8:;
panda$collections$Array$add$panda$collections$Array$T($tmp2061, ((panda$core$Object*) $tmp2064));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2064));
// unreffing REF($62:panda.core.String?)
goto block5;
block5:;
panda$core$Int64 $tmp2070 = *(&local2);
int64_t $tmp2071 = $tmp2046.value;
int64_t $tmp2072 = $tmp2070.value;
int64_t $tmp2073 = $tmp2071 - $tmp2072;
panda$core$Int64 $tmp2074 = (panda$core$Int64) {$tmp2073};
panda$core$UInt64 $tmp2075 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2074);
if ($tmp2048) goto block11; else goto block12;
block11:;
uint64_t $tmp2076 = $tmp2075.value;
uint64_t $tmp2077 = $tmp2050.value;
bool $tmp2078 = $tmp2076 >= $tmp2077;
panda$core$Bit $tmp2079 = (panda$core$Bit) {$tmp2078};
bool $tmp2080 = $tmp2079.value;
if ($tmp2080) goto block10; else goto block4;
block12:;
uint64_t $tmp2081 = $tmp2075.value;
uint64_t $tmp2082 = $tmp2050.value;
bool $tmp2083 = $tmp2081 > $tmp2082;
panda$core$Bit $tmp2084 = (panda$core$Bit) {$tmp2083};
bool $tmp2085 = $tmp2084.value;
if ($tmp2085) goto block10; else goto block4;
block10:;
int64_t $tmp2086 = $tmp2070.value;
int64_t $tmp2087 = $tmp2049.value;
int64_t $tmp2088 = $tmp2086 + $tmp2087;
panda$core$Int64 $tmp2089 = (panda$core$Int64) {$tmp2088};
*(&local2) = $tmp2089;
goto block3;
block4:;
// line 1055
panda$collections$Array* $tmp2090 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp2090)));
panda$collections$Array* $tmp2091 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2091));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Matcher* $tmp2092 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2092));
// unreffing matcher
*(&local0) = ((panda$core$Matcher*) NULL);
return ((panda$collections$ListView*) $tmp2090);
block2:;
// line 1057
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) NULL)));
panda$core$Matcher* $tmp2093 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2093));
// unreffing matcher
*(&local0) = ((panda$core$Matcher*) NULL);
return ((panda$collections$ListView*) NULL);

}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1, panda$core$String* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$String$Index local1;
panda$core$String$Index$nullable local2;
// line 1068
panda$core$Bit $tmp2094 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s2095);
bool $tmp2096 = $tmp2094.value;
if ($tmp2096) goto block1; else goto block2;
block1:;
// line 1069
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1071
panda$core$MutableString* $tmp2097 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2097);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
panda$core$MutableString* $tmp2098 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
*(&local0) = $tmp2097;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
// unreffing REF($9:panda.core.MutableString)
// line 1072
panda$core$String$Index $tmp2099 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local1) = $tmp2099;
// line 1073
goto block3;
block3:;
// line 1074
panda$core$String$Index $tmp2100 = *(&local1);
panda$core$String$Index$nullable $tmp2101 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp2100);
*(&local2) = $tmp2101;
// line 1075
panda$core$String$Index$nullable $tmp2102 = *(&local2);
panda$core$Bit $tmp2103 = panda$core$Bit$init$builtin_bit(!$tmp2102.nonnull);
bool $tmp2104 = $tmp2103.value;
if ($tmp2104) goto block5; else goto block6;
block5:;
// line 1076
panda$core$MutableString* $tmp2105 = *(&local0);
panda$core$String$Index $tmp2106 = *(&local1);
panda$core$Bit $tmp2107 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2108 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2106, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2107);
panda$core$String* $tmp2109 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp2108);
panda$core$MutableString$append$panda$core$String($tmp2105, $tmp2109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
// unreffing REF($42:panda.core.String)
// line 1077
goto block4;
block6:;
// line 1079
panda$core$MutableString* $tmp2110 = *(&local0);
panda$core$String$Index $tmp2111 = *(&local1);
panda$core$String$Index$nullable $tmp2112 = *(&local2);
panda$core$Bit $tmp2113 = panda$core$Bit$init$builtin_bit($tmp2112.nonnull);
bool $tmp2114 = $tmp2113.value;
if ($tmp2114) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp2115 = (panda$core$Int64) {1079};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2116, $tmp2115, &$s2117);
abort(); // unreachable
block7:;
panda$core$Bit $tmp2118 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp2119 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp2111, ((panda$core$String$Index) $tmp2112.value), $tmp2118);
panda$core$String* $tmp2120 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp2119);
panda$core$MutableString$append$panda$core$String($tmp2110, $tmp2120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2120));
// unreffing REF($63:panda.core.String)
// line 1080
panda$core$MutableString* $tmp2121 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp2121, param2);
// line 1081
panda$core$String$Index$nullable $tmp2122 = *(&local2);
panda$core$Bit $tmp2123 = panda$core$Bit$init$builtin_bit($tmp2122.nonnull);
bool $tmp2124 = $tmp2123.value;
if ($tmp2124) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp2125 = (panda$core$Int64) {1081};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2126, $tmp2125, &$s2127);
abort(); // unreachable
block9:;
panda$core$Int64 $tmp2128 = ((panda$core$String$Index) $tmp2122.value).value;
panda$core$Int64* $tmp2129 = &param1->_length;
panda$core$Int64 $tmp2130 = *$tmp2129;
int64_t $tmp2131 = $tmp2128.value;
int64_t $tmp2132 = $tmp2130.value;
int64_t $tmp2133 = $tmp2131 + $tmp2132;
panda$core$Int64 $tmp2134 = (panda$core$Int64) {$tmp2133};
panda$core$String$Index $tmp2135 = panda$core$String$Index$init$panda$core$Int64($tmp2134);
*(&local1) = $tmp2135;
goto block3;
block4:;
// line 1083
panda$core$MutableString* $tmp2136 = *(&local0);
panda$core$String* $tmp2137 = panda$core$MutableString$finish$R$panda$core$String($tmp2136);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2137));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2137));
// unreffing REF($93:panda.core.String)
panda$core$MutableString* $tmp2138 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2138));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2137;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$String* param2) {

// line 1097
panda$core$Bit $tmp2139 = panda$core$Bit$init$builtin_bit(true);
panda$core$String* $tmp2140 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(param0, param1, param2, $tmp2139);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
// unreffing REF($2:panda.core.String)
return $tmp2140;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$String* param2, panda$core$Bit param3) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
// line 1102
panda$core$MutableString* $tmp2141 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2141);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2141));
panda$core$MutableString* $tmp2142 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2142));
*(&local0) = $tmp2141;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2141));
// unreffing REF($1:panda.core.MutableString)
// line 1103
panda$core$Matcher* $tmp2143 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2143));
panda$core$Matcher* $tmp2144 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2144));
*(&local1) = $tmp2143;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2143));
// unreffing REF($14:panda.core.Matcher)
// line 1104
goto block1;
block1:;
panda$core$Matcher* $tmp2145 = *(&local1);
panda$core$Bit $tmp2146 = panda$core$Matcher$find$R$panda$core$Bit($tmp2145);
bool $tmp2147 = $tmp2146.value;
if ($tmp2147) goto block2; else goto block3;
block2:;
// line 1105
panda$core$Matcher* $tmp2148 = *(&local1);
panda$core$MutableString* $tmp2149 = *(&local0);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp2148, $tmp2149, param2, param3);
goto block1;
block3:;
// line 1107
panda$core$Matcher* $tmp2150 = *(&local1);
panda$core$MutableString* $tmp2151 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp2150, $tmp2151);
// line 1108
panda$core$MutableString* $tmp2152 = *(&local0);
panda$core$String* $tmp2153 = panda$core$MutableString$finish$R$panda$core$String($tmp2152);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2153));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2153));
// unreffing REF($42:panda.core.String)
panda$core$Matcher* $tmp2154 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2154));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp2155 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2155));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2153;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$MutableMethod* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$core$Object* local2 = NULL;
// line 1129
panda$core$MutableString* $tmp2156 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2156);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2156));
panda$core$MutableString* $tmp2157 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2157));
*(&local0) = $tmp2156;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2156));
// unreffing REF($1:panda.core.MutableString)
// line 1130
panda$core$Matcher* $tmp2158 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2158));
panda$core$Matcher* $tmp2159 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
*(&local1) = $tmp2158;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2158));
// unreffing REF($14:panda.core.Matcher)
// line 1131
goto block1;
block1:;
panda$core$Matcher* $tmp2160 = *(&local1);
panda$core$Bit $tmp2161 = panda$core$Matcher$find$R$panda$core$Bit($tmp2160);
bool $tmp2162 = $tmp2161.value;
if ($tmp2162) goto block2; else goto block3;
block2:;
// line 1132
panda$core$Matcher* $tmp2163 = *(&local1);
panda$core$MutableString* $tmp2164 = *(&local0);
panda$core$Matcher* $tmp2165 = *(&local1);
panda$core$Int64 $tmp2166 = (panda$core$Int64) {0};
panda$core$String* $tmp2167 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp2165, $tmp2166);
panda$core$Bit $tmp2168 = panda$core$Bit$init$builtin_bit($tmp2167 != NULL);
bool $tmp2169 = $tmp2168.value;
if ($tmp2169) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp2170 = (panda$core$Int64) {1132};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2171, $tmp2170, &$s2172);
abort(); // unreachable
block4:;
panda$core$Int8** $tmp2173 = &param2->pointer;
panda$core$Int8* $tmp2174 = *$tmp2173;
panda$core$Object** $tmp2175 = &param2->target;
panda$core$Object* $tmp2176 = *$tmp2175;
bool $tmp2177 = $tmp2176 != ((panda$core$Object*) NULL);
if ($tmp2177) goto block6; else goto block7;
block7:;
panda$core$Object* $tmp2179 = (($fn2178) $tmp2174)($tmp2167);
*(&local2) = $tmp2179;
goto block8;
block6:;
panda$core$Object* $tmp2181 = (($fn2180) $tmp2174)($tmp2176, $tmp2167);
*(&local2) = $tmp2181;
goto block8;
block8:;
panda$core$Object* $tmp2182 = *(&local2);
$fn2184 $tmp2183 = ($fn2184) $tmp2182->$class->vtable[0];
panda$core$String* $tmp2185 = $tmp2183($tmp2182);
panda$core$Bit $tmp2186 = panda$core$Bit$init$builtin_bit(false);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp2163, $tmp2164, $tmp2185, $tmp2186);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
// unreffing REF($62:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2182);
// unreffing REF($60:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2167));
// unreffing REF($36:panda.core.String?)
goto block1;
block3:;
// line 1134
panda$core$Matcher* $tmp2187 = *(&local1);
panda$core$MutableString* $tmp2188 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp2187, $tmp2188);
// line 1135
panda$core$MutableString* $tmp2189 = *(&local0);
panda$core$String* $tmp2190 = panda$core$MutableString$convert$R$panda$core$String($tmp2189);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2190));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2190));
// unreffing REF($81:panda.core.String)
panda$core$Matcher* $tmp2191 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2191));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp2192 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2192));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2190;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$MutableMethod* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$Int64 local3;
panda$core$Object* local4 = NULL;
// line 1149
panda$core$MutableString* $tmp2193 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2193);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2193));
panda$core$MutableString* $tmp2194 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2194));
*(&local0) = $tmp2193;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2193));
// unreffing REF($1:panda.core.MutableString)
// line 1150
panda$core$Matcher* $tmp2195 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2195));
panda$core$Matcher* $tmp2196 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2196));
*(&local1) = $tmp2195;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2195));
// unreffing REF($14:panda.core.Matcher)
// line 1151
goto block1;
block1:;
panda$core$Matcher* $tmp2197 = *(&local1);
panda$core$Bit $tmp2198 = panda$core$Matcher$find$R$panda$core$Bit($tmp2197);
bool $tmp2199 = $tmp2198.value;
if ($tmp2199) goto block2; else goto block3;
block2:;
// line 1152
panda$collections$Array* $tmp2200 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2200);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2200));
panda$collections$Array* $tmp2201 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2201));
*(&local2) = $tmp2200;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2200));
// unreffing REF($32:panda.collections.Array<panda.core.String?>)
// line 1153
panda$core$Int64 $tmp2202 = (panda$core$Int64) {0};
panda$core$Matcher* $tmp2203 = *(&local1);
panda$core$Int64 $tmp2204;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp2204, $tmp2203);
panda$core$Bit $tmp2205 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2206 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2202, $tmp2204, $tmp2205);
panda$core$Int64 $tmp2207 = $tmp2206.min;
*(&local3) = $tmp2207;
panda$core$Int64 $tmp2208 = $tmp2206.max;
panda$core$Bit $tmp2209 = $tmp2206.inclusive;
bool $tmp2210 = $tmp2209.value;
panda$core$Int64 $tmp2211 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2212 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2211);
if ($tmp2210) goto block7; else goto block8;
block7:;
int64_t $tmp2213 = $tmp2207.value;
int64_t $tmp2214 = $tmp2208.value;
bool $tmp2215 = $tmp2213 <= $tmp2214;
panda$core$Bit $tmp2216 = (panda$core$Bit) {$tmp2215};
bool $tmp2217 = $tmp2216.value;
if ($tmp2217) goto block4; else goto block5;
block8:;
int64_t $tmp2218 = $tmp2207.value;
int64_t $tmp2219 = $tmp2208.value;
bool $tmp2220 = $tmp2218 < $tmp2219;
panda$core$Bit $tmp2221 = (panda$core$Bit) {$tmp2220};
bool $tmp2222 = $tmp2221.value;
if ($tmp2222) goto block4; else goto block5;
block4:;
// line 1154
panda$collections$Array* $tmp2223 = *(&local2);
panda$core$Matcher* $tmp2224 = *(&local1);
panda$core$Int64 $tmp2225 = *(&local3);
panda$core$String* $tmp2226 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp2224, $tmp2225);
panda$collections$Array$add$panda$collections$Array$T($tmp2223, ((panda$core$Object*) $tmp2226));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2226));
// unreffing REF($76:panda.core.String?)
goto block6;
block6:;
panda$core$Int64 $tmp2227 = *(&local3);
int64_t $tmp2228 = $tmp2208.value;
int64_t $tmp2229 = $tmp2227.value;
int64_t $tmp2230 = $tmp2228 - $tmp2229;
panda$core$Int64 $tmp2231 = (panda$core$Int64) {$tmp2230};
panda$core$UInt64 $tmp2232 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2231);
if ($tmp2210) goto block10; else goto block11;
block10:;
uint64_t $tmp2233 = $tmp2232.value;
uint64_t $tmp2234 = $tmp2212.value;
bool $tmp2235 = $tmp2233 >= $tmp2234;
panda$core$Bit $tmp2236 = (panda$core$Bit) {$tmp2235};
bool $tmp2237 = $tmp2236.value;
if ($tmp2237) goto block9; else goto block5;
block11:;
uint64_t $tmp2238 = $tmp2232.value;
uint64_t $tmp2239 = $tmp2212.value;
bool $tmp2240 = $tmp2238 > $tmp2239;
panda$core$Bit $tmp2241 = (panda$core$Bit) {$tmp2240};
bool $tmp2242 = $tmp2241.value;
if ($tmp2242) goto block9; else goto block5;
block9:;
int64_t $tmp2243 = $tmp2227.value;
int64_t $tmp2244 = $tmp2211.value;
int64_t $tmp2245 = $tmp2243 + $tmp2244;
panda$core$Int64 $tmp2246 = (panda$core$Int64) {$tmp2245};
*(&local3) = $tmp2246;
goto block4;
block5:;
// line 1156
panda$core$Matcher* $tmp2247 = *(&local1);
panda$core$MutableString* $tmp2248 = *(&local0);
panda$collections$Array* $tmp2249 = *(&local2);
panda$core$Int8** $tmp2250 = &param2->pointer;
panda$core$Int8* $tmp2251 = *$tmp2250;
panda$core$Object** $tmp2252 = &param2->target;
panda$core$Object* $tmp2253 = *$tmp2252;
bool $tmp2254 = $tmp2253 != ((panda$core$Object*) NULL);
if ($tmp2254) goto block12; else goto block13;
block13:;
panda$core$Object* $tmp2256 = (($fn2255) $tmp2251)(((panda$collections$ListView*) $tmp2249));
*(&local4) = $tmp2256;
goto block14;
block12:;
panda$core$Object* $tmp2258 = (($fn2257) $tmp2251)($tmp2253, ((panda$collections$ListView*) $tmp2249));
*(&local4) = $tmp2258;
goto block14;
block14:;
panda$core$Object* $tmp2259 = *(&local4);
$fn2261 $tmp2260 = ($fn2261) $tmp2259->$class->vtable[0];
panda$core$String* $tmp2262 = $tmp2260($tmp2259);
panda$core$Bit $tmp2263 = panda$core$Bit$init$builtin_bit(false);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp2247, $tmp2248, $tmp2262, $tmp2263);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2262));
// unreffing REF($130:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2259);
// unreffing REF($128:panda.core.Object)
panda$collections$Array* $tmp2264 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2264));
// unreffing groups
*(&local2) = ((panda$collections$Array*) NULL);
goto block1;
block3:;
// line 1158
panda$core$Matcher* $tmp2265 = *(&local1);
panda$core$MutableString* $tmp2266 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp2265, $tmp2266);
// line 1159
panda$core$MutableString* $tmp2267 = *(&local0);
panda$core$String* $tmp2268 = panda$core$MutableString$convert$R$panda$core$String($tmp2267);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2268));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2268));
// unreffing REF($151:panda.core.String)
panda$core$Matcher* $tmp2269 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2269));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp2270 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2270));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2268;

}
panda$collections$Iterator* panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* param0, panda$core$String* param1) {

// line 1163
panda$core$Bit $tmp2271 = panda$core$Bit$init$builtin_bit(false);
panda$collections$Iterator* $tmp2272 = panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(param0, param1, $tmp2271);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2272));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2272));
// unreffing REF($2:panda.collections.Iterator<panda.core.String.Index>)
return $tmp2272;

}
panda$collections$Iterator* panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* param0, panda$core$String* param1, panda$core$Bit param2) {

// line 1167
panda$core$String$MatchIterator* $tmp2273 = (panda$core$String$MatchIterator*) frostObjectAlloc(46, (panda$core$Class*) &panda$core$String$MatchIterator$class);
panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit($tmp2273, param0, param1, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp2273)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2273));
// unreffing REF($1:panda.core.String.MatchIterator)
return ((panda$collections$Iterator*) $tmp2273);

}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1171
panda$core$Bit $tmp2274 = panda$core$Bit$init$builtin_bit(false);
panda$collections$Iterator* $tmp2275 = panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(param0, param1, $tmp2274);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2275));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2275));
// unreffing REF($2:panda.collections.Iterator<panda.core.String.Match>)
return $tmp2275;

}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$Bit param2) {

// line 1175
panda$core$String$RegexMatchIterator* $tmp2276 = (panda$core$String$RegexMatchIterator*) frostObjectAlloc(34, (panda$core$Class*) &panda$core$String$RegexMatchIterator$class);
panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit($tmp2276, param0, param1, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp2276)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
// unreffing REF($1:panda.core.String.RegexMatchIterator)
return ((panda$collections$Iterator*) $tmp2276);

}
panda$core$String$Index panda$core$String$get_start$R$panda$core$String$Index(panda$core$String* param0) {

// line 1182
panda$core$Int64 $tmp2277 = (panda$core$Int64) {0};
panda$core$String$Index $tmp2278 = panda$core$String$Index$init$panda$core$Int64($tmp2277);
return $tmp2278;

}
panda$core$String$Index panda$core$String$get_end$R$panda$core$String$Index(panda$core$String* param0) {

// line 1189
panda$core$Int64* $tmp2279 = &param0->_length;
panda$core$Int64 $tmp2280 = *$tmp2279;
panda$core$String$Index $tmp2281 = panda$core$String$Index$init$panda$core$Int64($tmp2280);
return $tmp2281;

}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1) {

int64_t local0;
// line 1199
panda$core$Int64 $tmp2282 = param1.value;
panda$core$Int64* $tmp2283 = &param0->_length;
panda$core$Int64 $tmp2284 = *$tmp2283;
int64_t $tmp2285 = $tmp2282.value;
int64_t $tmp2286 = $tmp2284.value;
bool $tmp2287 = $tmp2285 < $tmp2286;
panda$core$Bit $tmp2288 = (panda$core$Bit) {$tmp2287};
bool $tmp2289 = $tmp2288.value;
if ($tmp2289) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2290 = (panda$core$Int64) {1199};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2291, $tmp2290);
abort(); // unreachable
block1:;
// line 1200
panda$core$Char8** $tmp2292 = &param0->data;
panda$core$Char8* $tmp2293 = *$tmp2292;
panda$core$Int64 $tmp2294 = param1.value;
int64_t $tmp2295 = $tmp2294.value;
panda$core$Char8 $tmp2296 = $tmp2293[$tmp2295];
uint8_t $tmp2297 = $tmp2296.value;
int64_t $tmp2298 = ((int64_t) $tmp2297) & 255;
*(&local0) = $tmp2298;
// line 1201
int64_t $tmp2299 = *(&local0);
bool $tmp2300 = $tmp2299 >= 240;
panda$core$Bit $tmp2301 = panda$core$Bit$init$builtin_bit($tmp2300);
bool $tmp2302 = $tmp2301.value;
if ($tmp2302) goto block3; else goto block4;
block3:;
// line 1202
panda$core$Int64 $tmp2303 = param1.value;
panda$core$Int64 $tmp2304 = (panda$core$Int64) {4};
int64_t $tmp2305 = $tmp2303.value;
int64_t $tmp2306 = $tmp2304.value;
int64_t $tmp2307 = $tmp2305 + $tmp2306;
panda$core$Int64 $tmp2308 = (panda$core$Int64) {$tmp2307};
panda$core$String$Index $tmp2309 = panda$core$String$Index$init$panda$core$Int64($tmp2308);
return $tmp2309;
block4:;
// line 1204
int64_t $tmp2310 = *(&local0);
bool $tmp2311 = $tmp2310 >= 224;
panda$core$Bit $tmp2312 = panda$core$Bit$init$builtin_bit($tmp2311);
bool $tmp2313 = $tmp2312.value;
if ($tmp2313) goto block5; else goto block6;
block5:;
// line 1205
panda$core$Int64 $tmp2314 = param1.value;
panda$core$Int64 $tmp2315 = (panda$core$Int64) {3};
int64_t $tmp2316 = $tmp2314.value;
int64_t $tmp2317 = $tmp2315.value;
int64_t $tmp2318 = $tmp2316 + $tmp2317;
panda$core$Int64 $tmp2319 = (panda$core$Int64) {$tmp2318};
panda$core$String$Index $tmp2320 = panda$core$String$Index$init$panda$core$Int64($tmp2319);
return $tmp2320;
block6:;
// line 1207
int64_t $tmp2321 = *(&local0);
bool $tmp2322 = $tmp2321 >= 192;
panda$core$Bit $tmp2323 = panda$core$Bit$init$builtin_bit($tmp2322);
bool $tmp2324 = $tmp2323.value;
if ($tmp2324) goto block7; else goto block8;
block7:;
// line 1208
panda$core$Int64 $tmp2325 = param1.value;
panda$core$Int64 $tmp2326 = (panda$core$Int64) {2};
int64_t $tmp2327 = $tmp2325.value;
int64_t $tmp2328 = $tmp2326.value;
int64_t $tmp2329 = $tmp2327 + $tmp2328;
panda$core$Int64 $tmp2330 = (panda$core$Int64) {$tmp2329};
panda$core$String$Index $tmp2331 = panda$core$String$Index$init$panda$core$Int64($tmp2330);
return $tmp2331;
block8:;
// line 1210
panda$core$Int64 $tmp2332 = param1.value;
panda$core$Int64 $tmp2333 = (panda$core$Int64) {1};
int64_t $tmp2334 = $tmp2332.value;
int64_t $tmp2335 = $tmp2333.value;
int64_t $tmp2336 = $tmp2334 + $tmp2335;
panda$core$Int64 $tmp2337 = (panda$core$Int64) {$tmp2336};
panda$core$String$Index $tmp2338 = panda$core$String$Index$init$panda$core$Int64($tmp2337);
return $tmp2338;

}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1) {

panda$core$Int64 local0;
// line 1220
panda$core$Int64 $tmp2339 = param1.value;
panda$core$Int64 $tmp2340 = (panda$core$Int64) {0};
int64_t $tmp2341 = $tmp2339.value;
int64_t $tmp2342 = $tmp2340.value;
bool $tmp2343 = $tmp2341 > $tmp2342;
panda$core$Bit $tmp2344 = (panda$core$Bit) {$tmp2343};
bool $tmp2345 = $tmp2344.value;
if ($tmp2345) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2346 = (panda$core$Int64) {1220};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2347, $tmp2346);
abort(); // unreachable
block1:;
// line 1221
panda$core$Int64 $tmp2348 = param1.value;
panda$core$Int64 $tmp2349 = (panda$core$Int64) {1};
int64_t $tmp2350 = $tmp2348.value;
int64_t $tmp2351 = $tmp2349.value;
int64_t $tmp2352 = $tmp2350 - $tmp2351;
panda$core$Int64 $tmp2353 = (panda$core$Int64) {$tmp2352};
*(&local0) = $tmp2353;
// line 1222
goto block3;
block3:;
panda$core$Char8** $tmp2354 = &param0->data;
panda$core$Char8* $tmp2355 = *$tmp2354;
panda$core$Int64 $tmp2356 = *(&local0);
int64_t $tmp2357 = $tmp2356.value;
panda$core$Char8 $tmp2358 = $tmp2355[$tmp2357];
uint8_t $tmp2359 = $tmp2358.value;
int64_t $tmp2360 = ((int64_t) $tmp2359) & 255;
bool $tmp2361 = $tmp2360 >= 128;
panda$core$Char8** $tmp2362 = &param0->data;
panda$core$Char8* $tmp2363 = *$tmp2362;
panda$core$Int64 $tmp2364 = *(&local0);
int64_t $tmp2365 = $tmp2364.value;
panda$core$Char8 $tmp2366 = $tmp2363[$tmp2365];
uint8_t $tmp2367 = $tmp2366.value;
int64_t $tmp2368 = ((int64_t) $tmp2367) & 255;
bool $tmp2369 = $tmp2368 < 192;
bool $tmp2370 = $tmp2361 & $tmp2369;
panda$core$Bit $tmp2371 = panda$core$Bit$init$builtin_bit($tmp2370);
bool $tmp2372 = $tmp2371.value;
if ($tmp2372) goto block4; else goto block5;
block4:;
// line 1224
panda$core$Int64 $tmp2373 = *(&local0);
panda$core$Int64 $tmp2374 = (panda$core$Int64) {1};
int64_t $tmp2375 = $tmp2373.value;
int64_t $tmp2376 = $tmp2374.value;
int64_t $tmp2377 = $tmp2375 - $tmp2376;
panda$core$Int64 $tmp2378 = (panda$core$Int64) {$tmp2377};
*(&local0) = $tmp2378;
goto block3;
block5:;
// line 1226
panda$core$Int64 $tmp2379 = *(&local0);
panda$core$String$Index $tmp2380 = panda$core$String$Index$init$panda$core$Int64($tmp2379);
return $tmp2380;

}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1, panda$core$Int64 param2) {

panda$core$String$Index local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 1236
*(&local0) = param1;
// line 1237
panda$core$Int64 $tmp2381 = (panda$core$Int64) {0};
int64_t $tmp2382 = param2.value;
int64_t $tmp2383 = $tmp2381.value;
bool $tmp2384 = $tmp2382 > $tmp2383;
panda$core$Bit $tmp2385 = (panda$core$Bit) {$tmp2384};
bool $tmp2386 = $tmp2385.value;
if ($tmp2386) goto block1; else goto block3;
block1:;
// line 1238
panda$core$Int64 $tmp2387 = (panda$core$Int64) {0};
panda$core$Bit $tmp2388 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2389 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2387, param2, $tmp2388);
panda$core$Int64 $tmp2390 = $tmp2389.min;
*(&local1) = $tmp2390;
panda$core$Int64 $tmp2391 = $tmp2389.max;
panda$core$Bit $tmp2392 = $tmp2389.inclusive;
bool $tmp2393 = $tmp2392.value;
panda$core$Int64 $tmp2394 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2395 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2394);
if ($tmp2393) goto block7; else goto block8;
block7:;
int64_t $tmp2396 = $tmp2390.value;
int64_t $tmp2397 = $tmp2391.value;
bool $tmp2398 = $tmp2396 <= $tmp2397;
panda$core$Bit $tmp2399 = (panda$core$Bit) {$tmp2398};
bool $tmp2400 = $tmp2399.value;
if ($tmp2400) goto block4; else goto block5;
block8:;
int64_t $tmp2401 = $tmp2390.value;
int64_t $tmp2402 = $tmp2391.value;
bool $tmp2403 = $tmp2401 < $tmp2402;
panda$core$Bit $tmp2404 = (panda$core$Bit) {$tmp2403};
bool $tmp2405 = $tmp2404.value;
if ($tmp2405) goto block4; else goto block5;
block4:;
// line 1239
panda$core$String$Index $tmp2406 = *(&local0);
panda$core$String$Index $tmp2407 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2406);
*(&local0) = $tmp2407;
goto block6;
block6:;
panda$core$Int64 $tmp2408 = *(&local1);
int64_t $tmp2409 = $tmp2391.value;
int64_t $tmp2410 = $tmp2408.value;
int64_t $tmp2411 = $tmp2409 - $tmp2410;
panda$core$Int64 $tmp2412 = (panda$core$Int64) {$tmp2411};
panda$core$UInt64 $tmp2413 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2412);
if ($tmp2393) goto block10; else goto block11;
block10:;
uint64_t $tmp2414 = $tmp2413.value;
uint64_t $tmp2415 = $tmp2395.value;
bool $tmp2416 = $tmp2414 >= $tmp2415;
panda$core$Bit $tmp2417 = (panda$core$Bit) {$tmp2416};
bool $tmp2418 = $tmp2417.value;
if ($tmp2418) goto block9; else goto block5;
block11:;
uint64_t $tmp2419 = $tmp2413.value;
uint64_t $tmp2420 = $tmp2395.value;
bool $tmp2421 = $tmp2419 > $tmp2420;
panda$core$Bit $tmp2422 = (panda$core$Bit) {$tmp2421};
bool $tmp2423 = $tmp2422.value;
if ($tmp2423) goto block9; else goto block5;
block9:;
int64_t $tmp2424 = $tmp2408.value;
int64_t $tmp2425 = $tmp2394.value;
int64_t $tmp2426 = $tmp2424 + $tmp2425;
panda$core$Int64 $tmp2427 = (panda$core$Int64) {$tmp2426};
*(&local1) = $tmp2427;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 1243
panda$core$Int64 $tmp2428 = (panda$core$Int64) {0};
panda$core$Int64 $tmp2429 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp2430 = panda$core$Bit$init$builtin_bit(false);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp2431 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2428, param2, $tmp2429, $tmp2430);
panda$core$Int64 $tmp2432 = $tmp2431.start;
*(&local2) = $tmp2432;
panda$core$Int64 $tmp2433 = $tmp2431.end;
panda$core$Int64 $tmp2434 = $tmp2431.step;
panda$core$UInt64 $tmp2435 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2434);
panda$core$Int64 $tmp2436 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp2434);
panda$core$UInt64 $tmp2437 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2436);
panda$core$Bit $tmp2438 = $tmp2431.inclusive;
bool $tmp2439 = $tmp2438.value;
panda$core$Int64 $tmp2440 = (panda$core$Int64) {0};
int64_t $tmp2441 = $tmp2434.value;
int64_t $tmp2442 = $tmp2440.value;
bool $tmp2443 = $tmp2441 >= $tmp2442;
panda$core$Bit $tmp2444 = (panda$core$Bit) {$tmp2443};
bool $tmp2445 = $tmp2444.value;
if ($tmp2445) goto block15; else goto block16;
block15:;
if ($tmp2439) goto block17; else goto block18;
block17:;
int64_t $tmp2446 = $tmp2432.value;
int64_t $tmp2447 = $tmp2433.value;
bool $tmp2448 = $tmp2446 <= $tmp2447;
panda$core$Bit $tmp2449 = (panda$core$Bit) {$tmp2448};
bool $tmp2450 = $tmp2449.value;
if ($tmp2450) goto block12; else goto block13;
block18:;
int64_t $tmp2451 = $tmp2432.value;
int64_t $tmp2452 = $tmp2433.value;
bool $tmp2453 = $tmp2451 < $tmp2452;
panda$core$Bit $tmp2454 = (panda$core$Bit) {$tmp2453};
bool $tmp2455 = $tmp2454.value;
if ($tmp2455) goto block12; else goto block13;
block16:;
if ($tmp2439) goto block19; else goto block20;
block19:;
int64_t $tmp2456 = $tmp2432.value;
int64_t $tmp2457 = $tmp2433.value;
bool $tmp2458 = $tmp2456 >= $tmp2457;
panda$core$Bit $tmp2459 = (panda$core$Bit) {$tmp2458};
bool $tmp2460 = $tmp2459.value;
if ($tmp2460) goto block12; else goto block13;
block20:;
int64_t $tmp2461 = $tmp2432.value;
int64_t $tmp2462 = $tmp2433.value;
bool $tmp2463 = $tmp2461 > $tmp2462;
panda$core$Bit $tmp2464 = (panda$core$Bit) {$tmp2463};
bool $tmp2465 = $tmp2464.value;
if ($tmp2465) goto block12; else goto block13;
block12:;
// line 1244
panda$core$String$Index $tmp2466 = *(&local0);
panda$core$String$Index $tmp2467 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2466);
*(&local0) = $tmp2467;
goto block14;
block14:;
panda$core$Int64 $tmp2468 = *(&local2);
if ($tmp2445) goto block22; else goto block23;
block22:;
int64_t $tmp2469 = $tmp2433.value;
int64_t $tmp2470 = $tmp2468.value;
int64_t $tmp2471 = $tmp2469 - $tmp2470;
panda$core$Int64 $tmp2472 = (panda$core$Int64) {$tmp2471};
panda$core$UInt64 $tmp2473 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2472);
if ($tmp2439) goto block24; else goto block25;
block24:;
uint64_t $tmp2474 = $tmp2473.value;
uint64_t $tmp2475 = $tmp2435.value;
bool $tmp2476 = $tmp2474 >= $tmp2475;
panda$core$Bit $tmp2477 = (panda$core$Bit) {$tmp2476};
bool $tmp2478 = $tmp2477.value;
if ($tmp2478) goto block21; else goto block13;
block25:;
uint64_t $tmp2479 = $tmp2473.value;
uint64_t $tmp2480 = $tmp2435.value;
bool $tmp2481 = $tmp2479 > $tmp2480;
panda$core$Bit $tmp2482 = (panda$core$Bit) {$tmp2481};
bool $tmp2483 = $tmp2482.value;
if ($tmp2483) goto block21; else goto block13;
block23:;
int64_t $tmp2484 = $tmp2468.value;
int64_t $tmp2485 = $tmp2433.value;
int64_t $tmp2486 = $tmp2484 - $tmp2485;
panda$core$Int64 $tmp2487 = (panda$core$Int64) {$tmp2486};
panda$core$UInt64 $tmp2488 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2487);
if ($tmp2439) goto block26; else goto block27;
block26:;
uint64_t $tmp2489 = $tmp2488.value;
uint64_t $tmp2490 = $tmp2437.value;
bool $tmp2491 = $tmp2489 >= $tmp2490;
panda$core$Bit $tmp2492 = (panda$core$Bit) {$tmp2491};
bool $tmp2493 = $tmp2492.value;
if ($tmp2493) goto block21; else goto block13;
block27:;
uint64_t $tmp2494 = $tmp2488.value;
uint64_t $tmp2495 = $tmp2437.value;
bool $tmp2496 = $tmp2494 > $tmp2495;
panda$core$Bit $tmp2497 = (panda$core$Bit) {$tmp2496};
bool $tmp2498 = $tmp2497.value;
if ($tmp2498) goto block21; else goto block13;
block21:;
int64_t $tmp2499 = $tmp2468.value;
int64_t $tmp2500 = $tmp2434.value;
int64_t $tmp2501 = $tmp2499 + $tmp2500;
panda$core$Int64 $tmp2502 = (panda$core$Int64) {$tmp2501};
*(&local2) = $tmp2502;
goto block12;
block13:;
goto block2;
block2:;
// line 1247
panda$core$String$Index $tmp2503 = *(&local0);
return $tmp2503;

}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1260
panda$core$Int32 $tmp2504 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2505 = panda$core$Char32$init$panda$core$Int32($tmp2504);
panda$core$String* $tmp2506 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2505);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2506));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2506));
// unreffing REF($3:panda.core.String)
return $tmp2506;

}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

// line 1274
panda$core$Int64 $tmp2507 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2508 = $tmp2507.value;
int64_t $tmp2509 = param1.value;
bool $tmp2510 = $tmp2508 >= $tmp2509;
panda$core$Bit $tmp2511 = (panda$core$Bit) {$tmp2510};
bool $tmp2512 = $tmp2511.value;
if ($tmp2512) goto block1; else goto block2;
block1:;
// line 1275
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1277
panda$core$Int64 $tmp2513 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2514 = param1.value;
int64_t $tmp2515 = $tmp2513.value;
int64_t $tmp2516 = $tmp2514 - $tmp2515;
panda$core$Int64 $tmp2517 = (panda$core$Int64) {$tmp2516};
panda$core$String* $tmp2518 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2517);
panda$core$String* $tmp2519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(param0, $tmp2518);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2519));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2519));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
// unreffing REF($18:panda.core.String)
return $tmp2519;

}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1290
panda$core$Int32 $tmp2520 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2521 = panda$core$Char32$init$panda$core$Int32($tmp2520);
panda$core$String* $tmp2522 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2521);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2522));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2522));
// unreffing REF($3:panda.core.String)
return $tmp2522;

}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

// line 1304
panda$core$Int64 $tmp2523 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2524 = $tmp2523.value;
int64_t $tmp2525 = param1.value;
bool $tmp2526 = $tmp2524 >= $tmp2525;
panda$core$Bit $tmp2527 = (panda$core$Bit) {$tmp2526};
bool $tmp2528 = $tmp2527.value;
if ($tmp2528) goto block1; else goto block2;
block1:;
// line 1305
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1307
panda$core$Int64 $tmp2529 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2530 = param1.value;
int64_t $tmp2531 = $tmp2529.value;
int64_t $tmp2532 = $tmp2530 - $tmp2531;
panda$core$Int64 $tmp2533 = (panda$core$Int64) {$tmp2532};
panda$core$String* $tmp2534 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2533);
panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
// unreffing REF($18:panda.core.String)
return $tmp2535;

}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1322
panda$core$Int32 $tmp2536 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2537 = panda$core$Char32$init$panda$core$Int32($tmp2536);
panda$core$String* $tmp2538 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2537);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2538));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2538));
// unreffing REF($3:panda.core.String)
return $tmp2538;

}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 1338
panda$core$Int64 $tmp2539 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2540 = $tmp2539.value;
int64_t $tmp2541 = param1.value;
bool $tmp2542 = $tmp2540 >= $tmp2541;
panda$core$Bit $tmp2543 = (panda$core$Bit) {$tmp2542};
bool $tmp2544 = $tmp2543.value;
if ($tmp2544) goto block1; else goto block2;
block1:;
// line 1339
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1341
panda$core$Int64 $tmp2545 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2546 = param1.value;
int64_t $tmp2547 = $tmp2545.value;
int64_t $tmp2548 = $tmp2546 - $tmp2547;
panda$core$Int64 $tmp2549 = (panda$core$Int64) {$tmp2548};
*(&local0) = $tmp2549;
// line 1342
panda$core$Int64 $tmp2550 = *(&local0);
panda$core$Int64 $tmp2551 = (panda$core$Int64) {2};
int64_t $tmp2552 = $tmp2550.value;
int64_t $tmp2553 = $tmp2551.value;
int64_t $tmp2554 = $tmp2552 / $tmp2553;
panda$core$Int64 $tmp2555 = (panda$core$Int64) {$tmp2554};
*(&local1) = $tmp2555;
// line 1343
panda$core$Int64 $tmp2556 = *(&local0);
panda$core$Int64 $tmp2557 = *(&local1);
int64_t $tmp2558 = $tmp2556.value;
int64_t $tmp2559 = $tmp2557.value;
int64_t $tmp2560 = $tmp2558 - $tmp2559;
panda$core$Int64 $tmp2561 = (panda$core$Int64) {$tmp2560};
*(&local2) = $tmp2561;
// line 1344
panda$core$Int64 $tmp2562 = *(&local1);
panda$core$String* $tmp2563 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2562);
panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, param0);
panda$core$Int64 $tmp2565 = *(&local2);
panda$core$String* $tmp2566 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2565);
panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2564, $tmp2566);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2567));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2567));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2566));
// unreffing REF($40:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2564));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2563));
// unreffing REF($37:panda.core.String)
return $tmp2567;

}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$String* param1) {

// line 1355
panda$core$Int64 $tmp2568 = (panda$core$Int64) {9223372036854775807};
panda$collections$Array* $tmp2569 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(param0, param1, $tmp2568);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
// unreffing REF($2:panda.collections.Array<panda.core.String>)
return $tmp2569;

}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$String* param1, panda$core$Int64 param2) {

panda$collections$Array* local0 = NULL;
panda$core$String$Index local1;
panda$core$String$Index$nullable local2;
panda$core$Bit local3;
// line 1368
panda$collections$Array* $tmp2570 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2570);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2570));
panda$collections$Array* $tmp2571 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2571));
*(&local0) = $tmp2570;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2570));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
// line 1369
panda$core$String$Index $tmp2572 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local1) = $tmp2572;
// line 1370
goto block1;
block1:;
// line 1371
// line 1372
panda$core$Int64* $tmp2573 = &param1->_length;
panda$core$Int64 $tmp2574 = *$tmp2573;
panda$core$Int64 $tmp2575 = (panda$core$Int64) {0};
panda$core$Bit $tmp2576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2574, $tmp2575);
bool $tmp2577 = $tmp2576.value;
if ($tmp2577) goto block3; else goto block5;
block3:;
// line 1373
panda$core$String$Index $tmp2578 = *(&local1);
panda$core$String$Index $tmp2579 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2578);
*(&local2) = ((panda$core$String$Index$nullable) { $tmp2579, true });
goto block4;
block5:;
// line 1
// line 1376
panda$core$String$Index $tmp2580 = *(&local1);
panda$core$String$Index$nullable $tmp2581 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp2580);
*(&local2) = $tmp2581;
goto block4;
block4:;
// line 1378
panda$core$String$Index$nullable $tmp2582 = *(&local2);
panda$core$Bit $tmp2583 = panda$core$Bit$init$builtin_bit(!$tmp2582.nonnull);
bool $tmp2584 = $tmp2583.value;
if ($tmp2584) goto block8; else goto block9;
block8:;
*(&local3) = $tmp2583;
goto block10;
block9:;
panda$collections$Array* $tmp2585 = *(&local0);
ITable* $tmp2586 = ((panda$collections$CollectionView*) $tmp2585)->$class->itable;
while ($tmp2586->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2586 = $tmp2586->next;
}
$fn2588 $tmp2587 = $tmp2586->methods[0];
panda$core$Int64 $tmp2589 = $tmp2587(((panda$collections$CollectionView*) $tmp2585));
panda$core$Int64 $tmp2590 = (panda$core$Int64) {1};
int64_t $tmp2591 = param2.value;
int64_t $tmp2592 = $tmp2590.value;
int64_t $tmp2593 = $tmp2591 - $tmp2592;
panda$core$Int64 $tmp2594 = (panda$core$Int64) {$tmp2593};
panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2589, $tmp2594);
*(&local3) = $tmp2595;
goto block10;
block10:;
panda$core$Bit $tmp2596 = *(&local3);
bool $tmp2597 = $tmp2596.value;
if ($tmp2597) goto block6; else goto block7;
block6:;
// line 1379
panda$collections$Array* $tmp2598 = *(&local0);
panda$core$String$Index $tmp2599 = *(&local1);
panda$core$Bit $tmp2600 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2601 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2599, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2600);
panda$core$String* $tmp2602 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp2601);
panda$collections$Array$add$panda$collections$Array$T($tmp2598, ((panda$core$Object*) $tmp2602));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2602));
// unreffing REF($69:panda.core.String)
// line 1380
goto block2;
block7:;
// line 1382
panda$collections$Array* $tmp2603 = *(&local0);
panda$core$String$Index $tmp2604 = *(&local1);
panda$core$String$Index$nullable $tmp2605 = *(&local2);
panda$core$Bit $tmp2606 = panda$core$Bit$init$builtin_bit($tmp2605.nonnull);
bool $tmp2607 = $tmp2606.value;
if ($tmp2607) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp2608 = (panda$core$Int64) {1382};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2609, $tmp2608, &$s2610);
abort(); // unreachable
block11:;
panda$core$Bit $tmp2611 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp2612 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp2604, ((panda$core$String$Index) $tmp2605.value), $tmp2611);
panda$core$String* $tmp2613 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp2612);
panda$collections$Array$add$panda$collections$Array$T($tmp2603, ((panda$core$Object*) $tmp2613));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2613));
// unreffing REF($92:panda.core.String)
// line 1383
panda$core$String$Index$nullable $tmp2614 = *(&local2);
panda$core$Bit $tmp2615 = panda$core$Bit$init$builtin_bit($tmp2614.nonnull);
bool $tmp2616 = $tmp2615.value;
if ($tmp2616) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp2617 = (panda$core$Int64) {1383};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2618, $tmp2617, &$s2619);
abort(); // unreachable
block13:;
panda$core$Int64 $tmp2620 = ((panda$core$String$Index) $tmp2614.value).value;
panda$core$Int64* $tmp2621 = &param1->_length;
panda$core$Int64 $tmp2622 = *$tmp2621;
int64_t $tmp2623 = $tmp2620.value;
int64_t $tmp2624 = $tmp2622.value;
int64_t $tmp2625 = $tmp2623 + $tmp2624;
panda$core$Int64 $tmp2626 = (panda$core$Int64) {$tmp2625};
panda$core$String$Index $tmp2627 = panda$core$String$Index$init$panda$core$Int64($tmp2626);
*(&local1) = $tmp2627;
goto block1;
block2:;
// line 1385
panda$collections$Array* $tmp2628 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2628));
panda$collections$Array* $tmp2629 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp2628;

}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$Int64 param2) {

panda$collections$Array* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$core$String$Index local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$String$Index local5;
panda$core$Int64 $tmp2630 = (panda$core$Int64) {0};
int64_t $tmp2631 = param2.value;
int64_t $tmp2632 = $tmp2630.value;
bool $tmp2633 = $tmp2631 > $tmp2632;
panda$core$Bit $tmp2634 = (panda$core$Bit) {$tmp2633};
bool $tmp2635 = $tmp2634.value;
if ($tmp2635) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2636 = (panda$core$Int64) {1399};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2637, $tmp2636, &$s2638);
abort(); // unreachable
block1:;
// line 1400
panda$collections$Array* $tmp2639 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2639);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2639));
panda$collections$Array* $tmp2640 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2640));
*(&local0) = $tmp2639;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2639));
// unreffing REF($11:panda.collections.Array<panda.core.String>)
// line 1401
panda$core$Matcher* $tmp2641 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2641));
panda$core$Matcher* $tmp2642 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2642));
*(&local1) = $tmp2641;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2641));
// unreffing REF($25:panda.core.Matcher)
// line 1402
panda$core$String$Index $tmp2643 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local2) = $tmp2643;
// line 1403
goto block3;
block3:;
// line 1404
panda$core$Matcher* $tmp2644 = *(&local1);
panda$core$Bit $tmp2645 = panda$core$Matcher$find$R$panda$core$Bit($tmp2644);
*(&local3) = $tmp2645;
// line 1405
panda$core$Bit $tmp2646 = *(&local3);
panda$core$Bit $tmp2647 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2646);
bool $tmp2648 = $tmp2647.value;
if ($tmp2648) goto block7; else goto block8;
block7:;
*(&local4) = $tmp2647;
goto block9;
block8:;
panda$collections$Array* $tmp2649 = *(&local0);
ITable* $tmp2650 = ((panda$collections$CollectionView*) $tmp2649)->$class->itable;
while ($tmp2650->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2650 = $tmp2650->next;
}
$fn2652 $tmp2651 = $tmp2650->methods[0];
panda$core$Int64 $tmp2653 = $tmp2651(((panda$collections$CollectionView*) $tmp2649));
panda$core$Int64 $tmp2654 = (panda$core$Int64) {1};
int64_t $tmp2655 = param2.value;
int64_t $tmp2656 = $tmp2654.value;
int64_t $tmp2657 = $tmp2655 - $tmp2656;
panda$core$Int64 $tmp2658 = (panda$core$Int64) {$tmp2657};
panda$core$Bit $tmp2659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2653, $tmp2658);
*(&local4) = $tmp2659;
goto block9;
block9:;
panda$core$Bit $tmp2660 = *(&local4);
bool $tmp2661 = $tmp2660.value;
if ($tmp2661) goto block5; else goto block6;
block5:;
// line 1406
panda$collections$Array* $tmp2662 = *(&local0);
panda$core$String$Index $tmp2663 = *(&local2);
panda$core$Bit $tmp2664 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2665 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2663, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2664);
panda$core$String* $tmp2666 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp2665);
panda$collections$Array$add$panda$collections$Array$T($tmp2662, ((panda$core$Object*) $tmp2666));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2666));
// unreffing REF($74:panda.core.String)
// line 1407
goto block4;
block6:;
// line 1409
panda$core$Matcher* $tmp2667 = *(&local1);
panda$core$String$Index $tmp2668;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp2668, $tmp2667);
*(&local5) = $tmp2668;
// line 1410
panda$collections$Array* $tmp2669 = *(&local0);
panda$core$String$Index $tmp2670 = *(&local2);
panda$core$String$Index $tmp2671 = *(&local5);
panda$core$Bit $tmp2672 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp2673 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp2670, $tmp2671, $tmp2672);
panda$core$String* $tmp2674 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp2673);
panda$collections$Array$add$panda$collections$Array$T($tmp2669, ((panda$core$Object*) $tmp2674));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2674));
// unreffing REF($93:panda.core.String)
// line 1411
panda$core$String$Index $tmp2675 = *(&local5);
panda$core$Int64 $tmp2676 = $tmp2675.value;
panda$core$Matcher* $tmp2677 = *(&local1);
panda$core$String$Index $tmp2678;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp2678, $tmp2677);
panda$core$Int64 $tmp2679 = $tmp2678.value;
panda$core$Int64 $tmp2680 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp2676, $tmp2679);
panda$core$String$Index $tmp2681 = panda$core$String$Index$init$panda$core$Int64($tmp2680);
*(&local2) = $tmp2681;
goto block3;
block4:;
// line 1413
panda$collections$Array* $tmp2682 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2682));
panda$core$Matcher* $tmp2683 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2683));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$collections$Array* $tmp2684 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2684));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp2682;

}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1426
panda$core$Int64 $tmp2685 = (panda$core$Int64) {9223372036854775807};
panda$collections$Array* $tmp2686 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(param0, param1, $tmp2685);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2686));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2686));
// unreffing REF($2:panda.collections.Array<panda.core.String>)
return $tmp2686;

}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Bit local4;
// line 1437
panda$core$Int64* $tmp2687 = &param0->_length;
panda$core$Int64 $tmp2688 = *$tmp2687;
panda$core$Int64 $tmp2689 = (panda$core$Int64) {0};
panda$core$Bit $tmp2690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2688, $tmp2689);
bool $tmp2691 = $tmp2690.value;
if ($tmp2691) goto block1; else goto block2;
block1:;
// line 1438
return ((panda$core$Int64$nullable) { .nonnull = false });
block2:;
// line 1440
panda$core$Int64 $tmp2692 = (panda$core$Int64) {0};
*(&local0) = $tmp2692;
// line 1441
// line 1442
panda$core$Char8** $tmp2693 = &param0->data;
panda$core$Char8* $tmp2694 = *$tmp2693;
panda$core$Int64 $tmp2695 = (panda$core$Int64) {0};
int64_t $tmp2696 = $tmp2695.value;
panda$core$Char8 $tmp2697 = $tmp2694[$tmp2696];
panda$core$UInt8 $tmp2698 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp2699 = panda$core$Char8$init$panda$core$UInt8($tmp2698);
panda$core$Bit $tmp2700 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp2697, $tmp2699);
bool $tmp2701 = $tmp2700.value;
if ($tmp2701) goto block3; else goto block5;
block3:;
// line 1443
panda$core$Int64 $tmp2702 = (panda$core$Int64) {1};
*(&local1) = $tmp2702;
goto block4;
block5:;
// line 1
// line 1446
panda$core$Int64 $tmp2703 = (panda$core$Int64) {0};
*(&local1) = $tmp2703;
goto block4;
block4:;
// line 1448
panda$core$Int64 $tmp2704 = *(&local1);
panda$core$Int64* $tmp2705 = &param0->_length;
panda$core$Int64 $tmp2706 = *$tmp2705;
panda$core$Bit $tmp2707 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2708 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2704, $tmp2706, $tmp2707);
panda$core$Int64 $tmp2709 = $tmp2708.min;
*(&local2) = $tmp2709;
panda$core$Int64 $tmp2710 = $tmp2708.max;
panda$core$Bit $tmp2711 = $tmp2708.inclusive;
bool $tmp2712 = $tmp2711.value;
panda$core$Int64 $tmp2713 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2714 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2713);
if ($tmp2712) goto block9; else goto block10;
block9:;
int64_t $tmp2715 = $tmp2709.value;
int64_t $tmp2716 = $tmp2710.value;
bool $tmp2717 = $tmp2715 <= $tmp2716;
panda$core$Bit $tmp2718 = (panda$core$Bit) {$tmp2717};
bool $tmp2719 = $tmp2718.value;
if ($tmp2719) goto block6; else goto block7;
block10:;
int64_t $tmp2720 = $tmp2709.value;
int64_t $tmp2721 = $tmp2710.value;
bool $tmp2722 = $tmp2720 < $tmp2721;
panda$core$Bit $tmp2723 = (panda$core$Bit) {$tmp2722};
bool $tmp2724 = $tmp2723.value;
if ($tmp2724) goto block6; else goto block7;
block6:;
// line 1449
panda$core$Char8** $tmp2725 = &param0->data;
panda$core$Char8* $tmp2726 = *$tmp2725;
panda$core$Int64 $tmp2727 = *(&local2);
int64_t $tmp2728 = $tmp2727.value;
panda$core$Char8 $tmp2729 = $tmp2726[$tmp2728];
uint8_t $tmp2730 = $tmp2729.value;
panda$core$Int64 $tmp2731 = (panda$core$Int64) {((int64_t) $tmp2730)};
panda$core$Int64 $tmp2732 = (panda$core$Int64) {48};
int64_t $tmp2733 = $tmp2731.value;
int64_t $tmp2734 = $tmp2732.value;
int64_t $tmp2735 = $tmp2733 - $tmp2734;
panda$core$Int64 $tmp2736 = (panda$core$Int64) {$tmp2735};
*(&local3) = $tmp2736;
// line 1450
panda$core$Int64 $tmp2737 = *(&local3);
panda$core$Int64 $tmp2738 = (panda$core$Int64) {0};
int64_t $tmp2739 = $tmp2737.value;
int64_t $tmp2740 = $tmp2738.value;
bool $tmp2741 = $tmp2739 < $tmp2740;
panda$core$Bit $tmp2742 = (panda$core$Bit) {$tmp2741};
bool $tmp2743 = $tmp2742.value;
if ($tmp2743) goto block13; else goto block14;
block13:;
*(&local4) = $tmp2742;
goto block15;
block14:;
panda$core$Int64 $tmp2744 = *(&local3);
panda$core$Int64 $tmp2745 = (panda$core$Int64) {9};
int64_t $tmp2746 = $tmp2744.value;
int64_t $tmp2747 = $tmp2745.value;
bool $tmp2748 = $tmp2746 > $tmp2747;
panda$core$Bit $tmp2749 = (panda$core$Bit) {$tmp2748};
*(&local4) = $tmp2749;
goto block15;
block15:;
panda$core$Bit $tmp2750 = *(&local4);
bool $tmp2751 = $tmp2750.value;
if ($tmp2751) goto block11; else goto block12;
block11:;
// line 1451
return ((panda$core$Int64$nullable) { .nonnull = false });
block12:;
// line 1453
panda$core$Int64 $tmp2752 = *(&local0);
panda$core$Int64 $tmp2753 = (panda$core$Int64) {10};
int64_t $tmp2754 = $tmp2752.value;
int64_t $tmp2755 = $tmp2753.value;
int64_t $tmp2756 = $tmp2754 * $tmp2755;
panda$core$Int64 $tmp2757 = (panda$core$Int64) {$tmp2756};
panda$core$Int64 $tmp2758 = *(&local3);
int64_t $tmp2759 = $tmp2757.value;
int64_t $tmp2760 = $tmp2758.value;
int64_t $tmp2761 = $tmp2759 + $tmp2760;
panda$core$Int64 $tmp2762 = (panda$core$Int64) {$tmp2761};
*(&local0) = $tmp2762;
goto block8;
block8:;
panda$core$Int64 $tmp2763 = *(&local2);
int64_t $tmp2764 = $tmp2710.value;
int64_t $tmp2765 = $tmp2763.value;
int64_t $tmp2766 = $tmp2764 - $tmp2765;
panda$core$Int64 $tmp2767 = (panda$core$Int64) {$tmp2766};
panda$core$UInt64 $tmp2768 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2767);
if ($tmp2712) goto block17; else goto block18;
block17:;
uint64_t $tmp2769 = $tmp2768.value;
uint64_t $tmp2770 = $tmp2714.value;
bool $tmp2771 = $tmp2769 >= $tmp2770;
panda$core$Bit $tmp2772 = (panda$core$Bit) {$tmp2771};
bool $tmp2773 = $tmp2772.value;
if ($tmp2773) goto block16; else goto block7;
block18:;
uint64_t $tmp2774 = $tmp2768.value;
uint64_t $tmp2775 = $tmp2714.value;
bool $tmp2776 = $tmp2774 > $tmp2775;
panda$core$Bit $tmp2777 = (panda$core$Bit) {$tmp2776};
bool $tmp2778 = $tmp2777.value;
if ($tmp2778) goto block16; else goto block7;
block16:;
int64_t $tmp2779 = $tmp2763.value;
int64_t $tmp2780 = $tmp2713.value;
int64_t $tmp2781 = $tmp2779 + $tmp2780;
panda$core$Int64 $tmp2782 = (panda$core$Int64) {$tmp2781};
*(&local2) = $tmp2782;
goto block6;
block7:;
// line 1455
panda$core$Char8** $tmp2783 = &param0->data;
panda$core$Char8* $tmp2784 = *$tmp2783;
panda$core$Int64 $tmp2785 = (panda$core$Int64) {0};
int64_t $tmp2786 = $tmp2785.value;
panda$core$Char8 $tmp2787 = $tmp2784[$tmp2786];
panda$core$UInt8 $tmp2788 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp2789 = panda$core$Char8$init$panda$core$UInt8($tmp2788);
panda$core$Bit $tmp2790 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp2787, $tmp2789);
bool $tmp2791 = $tmp2790.value;
if ($tmp2791) goto block19; else goto block20;
block19:;
// line 1456
panda$core$Int64 $tmp2792 = *(&local0);
panda$core$Int64 $tmp2793 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp2792);
*(&local0) = $tmp2793;
goto block20;
block20:;
// line 1458
panda$core$Int64 $tmp2794 = *(&local0);
return ((panda$core$Int64$nullable) { $tmp2794, true });

}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* param0) {

panda$core$UInt64 local0;
panda$core$Int64 local1;
panda$core$UInt64 local2;
panda$core$Bit local3;
// line 1468
panda$core$Int64* $tmp2795 = &param0->_length;
panda$core$Int64 $tmp2796 = *$tmp2795;
panda$core$Int64 $tmp2797 = (panda$core$Int64) {0};
panda$core$Bit $tmp2798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2796, $tmp2797);
bool $tmp2799 = $tmp2798.value;
if ($tmp2799) goto block1; else goto block2;
block1:;
// line 1469
return ((panda$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 1471
panda$core$UInt64 $tmp2800 = (panda$core$UInt64) {0};
*(&local0) = $tmp2800;
// line 1472
panda$core$Int64 $tmp2801 = (panda$core$Int64) {0};
panda$core$Int64* $tmp2802 = &param0->_length;
panda$core$Int64 $tmp2803 = *$tmp2802;
panda$core$Bit $tmp2804 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2805 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2801, $tmp2803, $tmp2804);
panda$core$Int64 $tmp2806 = $tmp2805.min;
*(&local1) = $tmp2806;
panda$core$Int64 $tmp2807 = $tmp2805.max;
panda$core$Bit $tmp2808 = $tmp2805.inclusive;
bool $tmp2809 = $tmp2808.value;
panda$core$Int64 $tmp2810 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2811 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2810);
if ($tmp2809) goto block6; else goto block7;
block6:;
int64_t $tmp2812 = $tmp2806.value;
int64_t $tmp2813 = $tmp2807.value;
bool $tmp2814 = $tmp2812 <= $tmp2813;
panda$core$Bit $tmp2815 = (panda$core$Bit) {$tmp2814};
bool $tmp2816 = $tmp2815.value;
if ($tmp2816) goto block3; else goto block4;
block7:;
int64_t $tmp2817 = $tmp2806.value;
int64_t $tmp2818 = $tmp2807.value;
bool $tmp2819 = $tmp2817 < $tmp2818;
panda$core$Bit $tmp2820 = (panda$core$Bit) {$tmp2819};
bool $tmp2821 = $tmp2820.value;
if ($tmp2821) goto block3; else goto block4;
block3:;
// line 1473
panda$core$Char8** $tmp2822 = &param0->data;
panda$core$Char8* $tmp2823 = *$tmp2822;
panda$core$Int64 $tmp2824 = *(&local1);
int64_t $tmp2825 = $tmp2824.value;
panda$core$Char8 $tmp2826 = $tmp2823[$tmp2825];
uint8_t $tmp2827 = $tmp2826.value;
panda$core$UInt64 $tmp2828 = (panda$core$UInt64) {((uint64_t) $tmp2827)};
panda$core$UInt64 $tmp2829 = (panda$core$UInt64) {48};
uint64_t $tmp2830 = $tmp2828.value;
uint64_t $tmp2831 = $tmp2829.value;
uint64_t $tmp2832 = $tmp2830 - $tmp2831;
panda$core$UInt64 $tmp2833 = (panda$core$UInt64) {$tmp2832};
*(&local2) = $tmp2833;
// line 1474
panda$core$UInt64 $tmp2834 = *(&local2);
panda$core$UInt64 $tmp2835 = (panda$core$UInt64) {0};
uint64_t $tmp2836 = $tmp2834.value;
uint64_t $tmp2837 = $tmp2835.value;
bool $tmp2838 = $tmp2836 < $tmp2837;
panda$core$Bit $tmp2839 = (panda$core$Bit) {$tmp2838};
bool $tmp2840 = $tmp2839.value;
if ($tmp2840) goto block10; else goto block11;
block10:;
*(&local3) = $tmp2839;
goto block12;
block11:;
panda$core$UInt64 $tmp2841 = *(&local2);
panda$core$UInt64 $tmp2842 = (panda$core$UInt64) {9};
uint64_t $tmp2843 = $tmp2841.value;
uint64_t $tmp2844 = $tmp2842.value;
bool $tmp2845 = $tmp2843 > $tmp2844;
panda$core$Bit $tmp2846 = (panda$core$Bit) {$tmp2845};
*(&local3) = $tmp2846;
goto block12;
block12:;
panda$core$Bit $tmp2847 = *(&local3);
bool $tmp2848 = $tmp2847.value;
if ($tmp2848) goto block8; else goto block9;
block8:;
// line 1475
return ((panda$core$UInt64$nullable) { .nonnull = false });
block9:;
// line 1477
panda$core$UInt64 $tmp2849 = *(&local0);
panda$core$UInt64 $tmp2850 = (panda$core$UInt64) {10};
uint64_t $tmp2851 = $tmp2849.value;
uint64_t $tmp2852 = $tmp2850.value;
uint64_t $tmp2853 = $tmp2851 * $tmp2852;
panda$core$UInt64 $tmp2854 = (panda$core$UInt64) {$tmp2853};
panda$core$UInt64 $tmp2855 = *(&local2);
uint64_t $tmp2856 = $tmp2854.value;
uint64_t $tmp2857 = $tmp2855.value;
uint64_t $tmp2858 = $tmp2856 + $tmp2857;
panda$core$UInt64 $tmp2859 = (panda$core$UInt64) {$tmp2858};
*(&local0) = $tmp2859;
goto block5;
block5:;
panda$core$Int64 $tmp2860 = *(&local1);
int64_t $tmp2861 = $tmp2807.value;
int64_t $tmp2862 = $tmp2860.value;
int64_t $tmp2863 = $tmp2861 - $tmp2862;
panda$core$Int64 $tmp2864 = (panda$core$Int64) {$tmp2863};
panda$core$UInt64 $tmp2865 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2864);
if ($tmp2809) goto block14; else goto block15;
block14:;
uint64_t $tmp2866 = $tmp2865.value;
uint64_t $tmp2867 = $tmp2811.value;
bool $tmp2868 = $tmp2866 >= $tmp2867;
panda$core$Bit $tmp2869 = (panda$core$Bit) {$tmp2868};
bool $tmp2870 = $tmp2869.value;
if ($tmp2870) goto block13; else goto block4;
block15:;
uint64_t $tmp2871 = $tmp2865.value;
uint64_t $tmp2872 = $tmp2811.value;
bool $tmp2873 = $tmp2871 > $tmp2872;
panda$core$Bit $tmp2874 = (panda$core$Bit) {$tmp2873};
bool $tmp2875 = $tmp2874.value;
if ($tmp2875) goto block13; else goto block4;
block13:;
int64_t $tmp2876 = $tmp2860.value;
int64_t $tmp2877 = $tmp2810.value;
int64_t $tmp2878 = $tmp2876 + $tmp2877;
panda$core$Int64 $tmp2879 = (panda$core$Int64) {$tmp2878};
*(&local1) = $tmp2879;
goto block3;
block4:;
// line 1479
panda$core$UInt64 $tmp2880 = *(&local0);
return ((panda$core$UInt64$nullable) { $tmp2880, true });

}
panda$core$Real64$nullable panda$core$String$convert$R$panda$core$Real64$Q(panda$core$String* param0) {

// line 1489
panda$core$Real64 $tmp2881;
panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(&$tmp2881, param0);
return ((panda$core$Real64$nullable) { $tmp2881, true });

}
panda$core$Int64 panda$core$String$get_hash$R$panda$core$Int64(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 1497
panda$core$Int64 $tmp2882 = (panda$core$Int64) {1};
*(&local0) = $tmp2882;
// line 1498
panda$core$Int64 $tmp2883 = (panda$core$Int64) {0};
panda$core$Int64* $tmp2884 = &param0->_length;
panda$core$Int64 $tmp2885 = *$tmp2884;
panda$core$Bit $tmp2886 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2887 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2883, $tmp2885, $tmp2886);
panda$core$Int64 $tmp2888 = $tmp2887.min;
*(&local1) = $tmp2888;
panda$core$Int64 $tmp2889 = $tmp2887.max;
panda$core$Bit $tmp2890 = $tmp2887.inclusive;
bool $tmp2891 = $tmp2890.value;
panda$core$Int64 $tmp2892 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2893 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2892);
if ($tmp2891) goto block4; else goto block5;
block4:;
int64_t $tmp2894 = $tmp2888.value;
int64_t $tmp2895 = $tmp2889.value;
bool $tmp2896 = $tmp2894 <= $tmp2895;
panda$core$Bit $tmp2897 = (panda$core$Bit) {$tmp2896};
bool $tmp2898 = $tmp2897.value;
if ($tmp2898) goto block1; else goto block2;
block5:;
int64_t $tmp2899 = $tmp2888.value;
int64_t $tmp2900 = $tmp2889.value;
bool $tmp2901 = $tmp2899 < $tmp2900;
panda$core$Bit $tmp2902 = (panda$core$Bit) {$tmp2901};
bool $tmp2903 = $tmp2902.value;
if ($tmp2903) goto block1; else goto block2;
block1:;
// line 1499
panda$core$Int64 $tmp2904 = *(&local0);
panda$core$Int64 $tmp2905 = (panda$core$Int64) {101};
int64_t $tmp2906 = $tmp2904.value;
int64_t $tmp2907 = $tmp2905.value;
int64_t $tmp2908 = $tmp2906 * $tmp2907;
panda$core$Int64 $tmp2909 = (panda$core$Int64) {$tmp2908};
panda$core$Char8** $tmp2910 = &param0->data;
panda$core$Char8* $tmp2911 = *$tmp2910;
panda$core$Int64 $tmp2912 = *(&local1);
int64_t $tmp2913 = $tmp2912.value;
panda$core$Char8 $tmp2914 = $tmp2911[$tmp2913];
uint8_t $tmp2915 = $tmp2914.value;
panda$core$Int64 $tmp2916 = (panda$core$Int64) {((int64_t) $tmp2915)};
int64_t $tmp2917 = $tmp2909.value;
int64_t $tmp2918 = $tmp2916.value;
int64_t $tmp2919 = $tmp2917 + $tmp2918;
panda$core$Int64 $tmp2920 = (panda$core$Int64) {$tmp2919};
*(&local0) = $tmp2920;
goto block3;
block3:;
panda$core$Int64 $tmp2921 = *(&local1);
int64_t $tmp2922 = $tmp2889.value;
int64_t $tmp2923 = $tmp2921.value;
int64_t $tmp2924 = $tmp2922 - $tmp2923;
panda$core$Int64 $tmp2925 = (panda$core$Int64) {$tmp2924};
panda$core$UInt64 $tmp2926 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2925);
if ($tmp2891) goto block7; else goto block8;
block7:;
uint64_t $tmp2927 = $tmp2926.value;
uint64_t $tmp2928 = $tmp2893.value;
bool $tmp2929 = $tmp2927 >= $tmp2928;
panda$core$Bit $tmp2930 = (panda$core$Bit) {$tmp2929};
bool $tmp2931 = $tmp2930.value;
if ($tmp2931) goto block6; else goto block2;
block8:;
uint64_t $tmp2932 = $tmp2926.value;
uint64_t $tmp2933 = $tmp2893.value;
bool $tmp2934 = $tmp2932 > $tmp2933;
panda$core$Bit $tmp2935 = (panda$core$Bit) {$tmp2934};
bool $tmp2936 = $tmp2935.value;
if ($tmp2936) goto block6; else goto block2;
block6:;
int64_t $tmp2937 = $tmp2921.value;
int64_t $tmp2938 = $tmp2892.value;
int64_t $tmp2939 = $tmp2937 + $tmp2938;
panda$core$Int64 $tmp2940 = (panda$core$Int64) {$tmp2939};
*(&local1) = $tmp2940;
goto block1;
block2:;
// line 1510
panda$core$Int64 $tmp2941 = *(&local0);
return $tmp2941;

}

