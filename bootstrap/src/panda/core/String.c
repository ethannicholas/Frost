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
#include "panda/core/UInt8.h"
#include "panda/core/String/UTF8List.h"
#include "panda/core/String/UTF16Iterator.h"
#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/Char32.h"
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
__attribute__((weak)) panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim(panda$core$String* p0) {
    panda$collections$Iterator* result = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(p0);

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

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim} };

static panda$core$String $s1;
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String$shim, panda$core$String$cleanup$shim, panda$core$String$format$panda$core$String$R$panda$core$String$shim, panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$get_utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$get_length$R$panda$core$Int64, panda$core$String$get_byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$get_trimmed$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$get_start$R$panda$core$String$Index, panda$core$String$get_end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$convert$R$panda$core$Real64$Q, panda$core$String$get_hash$R$panda$core$Int64$shim} };

typedef panda$core$Int64 (*$fn20)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn55)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn93)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn97)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn102)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn184)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn518)(panda$core$Object*);
typedef panda$core$String* (*$fn630)(panda$core$Object*);
typedef panda$core$Object* (*$fn2007)(panda$core$String*);
typedef panda$core$Object* (*$fn2009)(panda$core$Object*, panda$core$String*);
typedef panda$core$String* (*$fn2013)(panda$core$Object*);
typedef panda$core$Object* (*$fn2084)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2086)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2090)(panda$core$Object*);
typedef panda$core$Int64 (*$fn2417)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2471)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x66\x6f\x72\x6d\x61\x74\x28\x66\x6d\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, 4839268531851362231, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 8838008024670810340, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 116, 8869514823175806901, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -4469378539822486423, NULL };

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
panda$core$String** $tmp6 = &param0->owner;
panda$core$String* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
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
panda$core$String** $tmp13 = &param0->owner;
panda$core$String* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
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
panda$core$Char8* $tmp26 = ((panda$core$Char8*) pandaZAlloc($tmp25 * 1));
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
panda$core$String** $tmp78 = &param0->owner;
panda$core$String* $tmp79 = *$tmp78;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String** $tmp80 = &param0->owner;
*$tmp80 = ((panda$core$String*) NULL);
return;

}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* param0) {

// line 377
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;

}
panda$core$String* panda$core$String$format$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Char8 local1;
panda$core$Bit local2;
// line 390
panda$core$Bit $tmp81 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s82);
bool $tmp83 = $tmp81.value;
if ($tmp83) goto block2; else goto block3;
block2:;
// line 392
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block3:;
panda$core$Bit $tmp84 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s85);
bool $tmp86 = $tmp84.value;
if ($tmp86) goto block4; else goto block5;
block4:;
// line 395
panda$core$MutableString* $tmp87 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp87, &$s88);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp89 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
*(&local0) = $tmp87;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// line 396
panda$collections$ListView* $tmp90 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(param0);
ITable* $tmp91 = ((panda$collections$Iterable*) $tmp90)->$class->itable;
while ($tmp91->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
panda$collections$Iterator* $tmp94 = $tmp92(((panda$collections$Iterable*) $tmp90));
goto block6;
block6:;
ITable* $tmp95 = $tmp94->$class->itable;
while ($tmp95->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
panda$core$Bit $tmp98 = $tmp96($tmp94);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block8; else goto block7;
block7:;
ITable* $tmp100 = $tmp94->$class->itable;
while ($tmp100->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[1];
panda$core$Object* $tmp103 = $tmp101($tmp94);
panda$core$Panda$unref$panda$core$Object$Q($tmp103);
*(&local1) = ((panda$core$Char8$wrapper*) $tmp103)->value;
// line 397
panda$core$Char8 $tmp104 = *(&local1);
panda$core$UInt8 $tmp105 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp106 = panda$core$Char8$init$panda$core$UInt8($tmp105);
panda$core$Bit $tmp107 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp104, $tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block10; else goto block11;
block10:;
// line 399
panda$core$MutableString* $tmp109 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp109, &$s110);
goto block9;
block11:;
panda$core$UInt8 $tmp111 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp112 = panda$core$Char8$init$panda$core$UInt8($tmp111);
panda$core$Bit $tmp113 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp104, $tmp112);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block12; else goto block13;
block12:;
// line 402
panda$core$MutableString* $tmp115 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp115, &$s116);
goto block9;
block13:;
panda$core$UInt8 $tmp117 = (panda$core$UInt8) {10};
panda$core$Char8 $tmp118 = panda$core$Char8$init$panda$core$UInt8($tmp117);
panda$core$Bit $tmp119 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp104, $tmp118);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block14; else goto block15;
block14:;
// line 405
panda$core$MutableString* $tmp121 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp121, &$s122);
goto block9;
block15:;
panda$core$UInt8 $tmp123 = (panda$core$UInt8) {13};
panda$core$Char8 $tmp124 = panda$core$Char8$init$panda$core$UInt8($tmp123);
panda$core$Bit $tmp125 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp104, $tmp124);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block16; else goto block17;
block16:;
// line 408
panda$core$MutableString* $tmp127 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp127, &$s128);
goto block9;
block17:;
panda$core$UInt8 $tmp129 = (panda$core$UInt8) {9};
panda$core$Char8 $tmp130 = panda$core$Char8$init$panda$core$UInt8($tmp129);
panda$core$Bit $tmp131 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp104, $tmp130);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block18; else goto block19;
block18:;
// line 411
panda$core$MutableString* $tmp133 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp133, &$s134);
goto block9;
block19:;
// line 414
panda$core$Char8 $tmp135 = *(&local1);
panda$core$UInt8 $tmp136 = panda$core$Char8$convert$R$panda$core$UInt8($tmp135);
panda$core$UInt8 $tmp137 = (panda$core$UInt8) {32};
uint8_t $tmp138 = $tmp136.value;
uint8_t $tmp139 = $tmp137.value;
bool $tmp140 = $tmp138 >= $tmp139;
panda$core$Bit $tmp141 = (panda$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block20; else goto block21;
block20:;
panda$core$Char8 $tmp143 = *(&local1);
panda$core$UInt8 $tmp144 = panda$core$Char8$convert$R$panda$core$UInt8($tmp143);
panda$core$UInt8 $tmp145 = (panda$core$UInt8) {126};
uint8_t $tmp146 = $tmp144.value;
uint8_t $tmp147 = $tmp145.value;
bool $tmp148 = $tmp146 <= $tmp147;
panda$core$Bit $tmp149 = (panda$core$Bit) {$tmp148};
*(&local2) = $tmp149;
goto block22;
block21:;
*(&local2) = $tmp141;
goto block22;
block22:;
panda$core$Bit $tmp150 = *(&local2);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block23; else goto block25;
block23:;
// line 415
panda$core$MutableString* $tmp152 = *(&local0);
panda$core$Char8 $tmp153 = *(&local1);
panda$core$MutableString$append$panda$core$Char8($tmp152, $tmp153);
goto block24;
block25:;
// line 1
// line 419
panda$core$MutableString* $tmp154 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp154, &$s155);
goto block24;
block24:;
goto block9;
block9:;
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// line 424
panda$core$MutableString* $tmp156 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp156, &$s157);
// line 425
panda$core$MutableString* $tmp158 = *(&local0);
panda$core$String* $tmp159 = panda$core$MutableString$finish$R$panda$core$String($tmp158);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
panda$core$MutableString* $tmp160 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp159;
block5:;
// line 428
panda$core$Bit $tmp161 = panda$core$Bit$init$builtin_bit(false);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp163 = (panda$core$Int64) {428};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s164, $tmp163);
abort(); // unreachable
block26:;
goto block1;
block1:;
panda$core$Bit $tmp165 = panda$core$Bit$init$builtin_bit(false);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp167 = (panda$core$Int64) {389};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s168, $tmp167, &$s169);
abort(); // unreachable
block28:;
abort(); // unreachable

}
void panda$core$String$cleanup(panda$core$String* param0) {

// line 436
panda$core$String** $tmp170 = &param0->owner;
panda$core$String* $tmp171 = *$tmp170;
panda$core$Bit $tmp172 = panda$core$Bit$init$builtin_bit($tmp171 == NULL);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block1; else goto block2;
block1:;
// line 437
panda$core$Char8** $tmp174 = &param0->data;
panda$core$Char8* $tmp175 = *$tmp174;
pandaFree($tmp175);
goto block2;
block2:;
panda$core$String** $tmp176 = &param0->owner;
panda$core$String* $tmp177 = *$tmp176;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
return;

}
panda$collections$ListView* panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* param0) {

// line 445
panda$core$String$UTF8List* $tmp178 = (panda$core$String$UTF8List*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$UTF8List$class);
panda$core$String$UTF8List$init$panda$core$String($tmp178, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp178)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
return ((panda$collections$ListView*) $tmp178);

}
panda$collections$Iterator* panda$core$String$get_utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* param0) {

// line 454
panda$core$String$UTF16Iterator* $tmp179 = (panda$core$String$UTF16Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF16Iterator$class);
panda$core$String$UTF16Iterator$init$panda$core$String($tmp179, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp179)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
return ((panda$collections$Iterator*) $tmp179);

}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* param0) {

// line 462
panda$core$String$UTF32Iterator* $tmp180 = (panda$core$String$UTF32Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF32Iterator$class);
panda$core$String$UTF32Iterator$init$panda$core$String($tmp180, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp180)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
return ((panda$collections$Iterator*) $tmp180);

}
panda$core$Int64 panda$core$String$get_length$R$panda$core$Int64(panda$core$String* param0) {

// line 472
panda$collections$Iterator* $tmp181 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(param0);
ITable* $tmp182 = $tmp181->$class->itable;
while ($tmp182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[2];
panda$core$Int64 $tmp185 = $tmp183($tmp181);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
return $tmp185;

}
panda$core$Int64 panda$core$String$get_byteLength$R$panda$core$Int64(panda$core$String* param0) {

// line 479
panda$core$Int64* $tmp186 = &param0->_length;
panda$core$Int64 $tmp187 = *$tmp186;
return $tmp187;

}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 483
panda$core$Int64* $tmp188 = &param0->_length;
panda$core$Int64 $tmp189 = *$tmp188;
panda$core$Int64* $tmp190 = &param1->_length;
panda$core$Int64 $tmp191 = *$tmp190;
int64_t $tmp192 = $tmp189.value;
int64_t $tmp193 = $tmp191.value;
bool $tmp194 = $tmp192 < $tmp193;
panda$core$Bit $tmp195 = (panda$core$Bit) {$tmp194};
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block1; else goto block2;
block1:;
// line 484
panda$core$Bit $tmp197 = panda$core$Bit$init$builtin_bit(false);
return $tmp197;
block2:;
// line 486
panda$core$Int64 $tmp198 = (panda$core$Int64) {0};
panda$core$Int64* $tmp199 = &param1->_length;
panda$core$Int64 $tmp200 = *$tmp199;
panda$core$Bit $tmp201 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp202 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp198, $tmp200, $tmp201);
panda$core$Int64 $tmp203 = $tmp202.min;
*(&local0) = $tmp203;
panda$core$Int64 $tmp204 = $tmp202.max;
panda$core$Bit $tmp205 = $tmp202.inclusive;
bool $tmp206 = $tmp205.value;
panda$core$Int64 $tmp207 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp208 = panda$core$Int64$convert$R$panda$core$UInt64($tmp207);
if ($tmp206) goto block6; else goto block7;
block6:;
int64_t $tmp209 = $tmp203.value;
int64_t $tmp210 = $tmp204.value;
bool $tmp211 = $tmp209 <= $tmp210;
panda$core$Bit $tmp212 = (panda$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block3; else goto block4;
block7:;
int64_t $tmp214 = $tmp203.value;
int64_t $tmp215 = $tmp204.value;
bool $tmp216 = $tmp214 < $tmp215;
panda$core$Bit $tmp217 = (panda$core$Bit) {$tmp216};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block3; else goto block4;
block3:;
// line 487
panda$core$Char8** $tmp219 = &param0->data;
panda$core$Char8* $tmp220 = *$tmp219;
panda$core$Int64 $tmp221 = *(&local0);
int64_t $tmp222 = $tmp221.value;
panda$core$Char8 $tmp223 = $tmp220[$tmp222];
panda$core$Char8** $tmp224 = &param1->data;
panda$core$Char8* $tmp225 = *$tmp224;
panda$core$Int64 $tmp226 = *(&local0);
int64_t $tmp227 = $tmp226.value;
panda$core$Char8 $tmp228 = $tmp225[$tmp227];
panda$core$Bit $tmp229 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp223, $tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block8; else goto block9;
block8:;
// line 488
panda$core$Bit $tmp231 = panda$core$Bit$init$builtin_bit(false);
return $tmp231;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp232 = *(&local0);
int64_t $tmp233 = $tmp204.value;
int64_t $tmp234 = $tmp232.value;
int64_t $tmp235 = $tmp233 - $tmp234;
panda$core$Int64 $tmp236 = (panda$core$Int64) {$tmp235};
panda$core$UInt64 $tmp237 = panda$core$Int64$convert$R$panda$core$UInt64($tmp236);
if ($tmp206) goto block11; else goto block12;
block11:;
uint64_t $tmp238 = $tmp237.value;
uint64_t $tmp239 = $tmp208.value;
bool $tmp240 = $tmp238 >= $tmp239;
panda$core$Bit $tmp241 = (panda$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block10; else goto block4;
block12:;
uint64_t $tmp243 = $tmp237.value;
uint64_t $tmp244 = $tmp208.value;
bool $tmp245 = $tmp243 > $tmp244;
panda$core$Bit $tmp246 = (panda$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block10; else goto block4;
block10:;
int64_t $tmp248 = $tmp232.value;
int64_t $tmp249 = $tmp207.value;
int64_t $tmp250 = $tmp248 + $tmp249;
panda$core$Int64 $tmp251 = (panda$core$Int64) {$tmp250};
*(&local0) = $tmp251;
goto block3;
block4:;
// line 491
panda$core$Bit $tmp252 = panda$core$Bit$init$builtin_bit(true);
return $tmp252;

}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 495
panda$core$Int64* $tmp253 = &param0->_length;
panda$core$Int64 $tmp254 = *$tmp253;
panda$core$Int64* $tmp255 = &param1->_length;
panda$core$Int64 $tmp256 = *$tmp255;
int64_t $tmp257 = $tmp254.value;
int64_t $tmp258 = $tmp256.value;
bool $tmp259 = $tmp257 < $tmp258;
panda$core$Bit $tmp260 = (panda$core$Bit) {$tmp259};
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block1; else goto block2;
block1:;
// line 496
panda$core$Bit $tmp262 = panda$core$Bit$init$builtin_bit(false);
return $tmp262;
block2:;
// line 498
panda$core$Int64 $tmp263 = (panda$core$Int64) {0};
panda$core$Int64* $tmp264 = &param1->_length;
panda$core$Int64 $tmp265 = *$tmp264;
panda$core$Bit $tmp266 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp267 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp263, $tmp265, $tmp266);
panda$core$Int64 $tmp268 = $tmp267.min;
*(&local0) = $tmp268;
panda$core$Int64 $tmp269 = $tmp267.max;
panda$core$Bit $tmp270 = $tmp267.inclusive;
bool $tmp271 = $tmp270.value;
panda$core$Int64 $tmp272 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp273 = panda$core$Int64$convert$R$panda$core$UInt64($tmp272);
if ($tmp271) goto block6; else goto block7;
block6:;
int64_t $tmp274 = $tmp268.value;
int64_t $tmp275 = $tmp269.value;
bool $tmp276 = $tmp274 <= $tmp275;
panda$core$Bit $tmp277 = (panda$core$Bit) {$tmp276};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block3; else goto block4;
block7:;
int64_t $tmp279 = $tmp268.value;
int64_t $tmp280 = $tmp269.value;
bool $tmp281 = $tmp279 < $tmp280;
panda$core$Bit $tmp282 = (panda$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block3; else goto block4;
block3:;
// line 499
panda$core$Char8** $tmp284 = &param0->data;
panda$core$Char8* $tmp285 = *$tmp284;
panda$core$Int64* $tmp286 = &param0->_length;
panda$core$Int64 $tmp287 = *$tmp286;
panda$core$Int64* $tmp288 = &param1->_length;
panda$core$Int64 $tmp289 = *$tmp288;
int64_t $tmp290 = $tmp287.value;
int64_t $tmp291 = $tmp289.value;
int64_t $tmp292 = $tmp290 - $tmp291;
panda$core$Int64 $tmp293 = (panda$core$Int64) {$tmp292};
panda$core$Int64 $tmp294 = *(&local0);
int64_t $tmp295 = $tmp293.value;
int64_t $tmp296 = $tmp294.value;
int64_t $tmp297 = $tmp295 + $tmp296;
panda$core$Int64 $tmp298 = (panda$core$Int64) {$tmp297};
int64_t $tmp299 = $tmp298.value;
panda$core$Char8 $tmp300 = $tmp285[$tmp299];
panda$core$Char8** $tmp301 = &param1->data;
panda$core$Char8* $tmp302 = *$tmp301;
panda$core$Int64 $tmp303 = *(&local0);
int64_t $tmp304 = $tmp303.value;
panda$core$Char8 $tmp305 = $tmp302[$tmp304];
panda$core$Bit $tmp306 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp300, $tmp305);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block8; else goto block9;
block8:;
// line 500
panda$core$Bit $tmp308 = panda$core$Bit$init$builtin_bit(false);
return $tmp308;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp309 = *(&local0);
int64_t $tmp310 = $tmp269.value;
int64_t $tmp311 = $tmp309.value;
int64_t $tmp312 = $tmp310 - $tmp311;
panda$core$Int64 $tmp313 = (panda$core$Int64) {$tmp312};
panda$core$UInt64 $tmp314 = panda$core$Int64$convert$R$panda$core$UInt64($tmp313);
if ($tmp271) goto block11; else goto block12;
block11:;
uint64_t $tmp315 = $tmp314.value;
uint64_t $tmp316 = $tmp273.value;
bool $tmp317 = $tmp315 >= $tmp316;
panda$core$Bit $tmp318 = (panda$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block10; else goto block4;
block12:;
uint64_t $tmp320 = $tmp314.value;
uint64_t $tmp321 = $tmp273.value;
bool $tmp322 = $tmp320 > $tmp321;
panda$core$Bit $tmp323 = (panda$core$Bit) {$tmp322};
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block10; else goto block4;
block10:;
int64_t $tmp325 = $tmp309.value;
int64_t $tmp326 = $tmp272.value;
int64_t $tmp327 = $tmp325 + $tmp326;
panda$core$Int64 $tmp328 = (panda$core$Int64) {$tmp327};
*(&local0) = $tmp328;
goto block3;
block4:;
// line 503
panda$core$Bit $tmp329 = panda$core$Bit$init$builtin_bit(true);
return $tmp329;

}
panda$core$String* panda$core$String$get_trimmed$R$panda$core$String(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Bit local1;
panda$core$Int64 local2;
panda$core$Bit local3;
// line 512
panda$core$Int64* $tmp330 = &param0->_length;
panda$core$Int64 $tmp331 = *$tmp330;
panda$core$Int64 $tmp332 = (panda$core$Int64) {0};
panda$core$Bit $tmp333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp331, $tmp332);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block1; else goto block2;
block1:;
// line 513
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 515
panda$core$Int64 $tmp335 = (panda$core$Int64) {0};
*(&local0) = $tmp335;
// line 516
goto block3;
block3:;
panda$core$Int64 $tmp336 = *(&local0);
panda$core$Int64* $tmp337 = &param0->_length;
panda$core$Int64 $tmp338 = *$tmp337;
int64_t $tmp339 = $tmp336.value;
int64_t $tmp340 = $tmp338.value;
bool $tmp341 = $tmp339 < $tmp340;
panda$core$Bit $tmp342 = (panda$core$Bit) {$tmp341};
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block6; else goto block7;
block6:;
panda$core$Char8** $tmp344 = &param0->data;
panda$core$Char8* $tmp345 = *$tmp344;
panda$core$Int64 $tmp346 = *(&local0);
int64_t $tmp347 = $tmp346.value;
panda$core$Char8 $tmp348 = $tmp345[$tmp347];
panda$core$Bit $tmp349 = panda$core$Char8$isWhitespace$R$panda$core$Bit($tmp348);
*(&local1) = $tmp349;
goto block8;
block7:;
*(&local1) = $tmp342;
goto block8;
block8:;
panda$core$Bit $tmp350 = *(&local1);
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block4; else goto block5;
block4:;
// line 517
panda$core$Int64 $tmp352 = *(&local0);
panda$core$Int64 $tmp353 = (panda$core$Int64) {1};
int64_t $tmp354 = $tmp352.value;
int64_t $tmp355 = $tmp353.value;
int64_t $tmp356 = $tmp354 + $tmp355;
panda$core$Int64 $tmp357 = (panda$core$Int64) {$tmp356};
*(&local0) = $tmp357;
goto block3;
block5:;
// line 520
panda$core$Int64* $tmp358 = &param0->_length;
panda$core$Int64 $tmp359 = *$tmp358;
panda$core$Int64 $tmp360 = (panda$core$Int64) {1};
int64_t $tmp361 = $tmp359.value;
int64_t $tmp362 = $tmp360.value;
int64_t $tmp363 = $tmp361 - $tmp362;
panda$core$Int64 $tmp364 = (panda$core$Int64) {$tmp363};
*(&local2) = $tmp364;
// line 521
goto block9;
block9:;
panda$core$Int64 $tmp365 = *(&local2);
panda$core$Int64 $tmp366 = *(&local0);
int64_t $tmp367 = $tmp365.value;
int64_t $tmp368 = $tmp366.value;
bool $tmp369 = $tmp367 >= $tmp368;
panda$core$Bit $tmp370 = (panda$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block12; else goto block13;
block12:;
panda$core$Char8** $tmp372 = &param0->data;
panda$core$Char8* $tmp373 = *$tmp372;
panda$core$Int64 $tmp374 = *(&local2);
int64_t $tmp375 = $tmp374.value;
panda$core$Char8 $tmp376 = $tmp373[$tmp375];
panda$core$Bit $tmp377 = panda$core$Char8$isWhitespace$R$panda$core$Bit($tmp376);
*(&local3) = $tmp377;
goto block14;
block13:;
*(&local3) = $tmp370;
goto block14;
block14:;
panda$core$Bit $tmp378 = *(&local3);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block10; else goto block11;
block10:;
// line 522
panda$core$Int64 $tmp380 = *(&local2);
panda$core$Int64 $tmp381 = (panda$core$Int64) {1};
int64_t $tmp382 = $tmp380.value;
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382 - $tmp383;
panda$core$Int64 $tmp385 = (panda$core$Int64) {$tmp384};
*(&local2) = $tmp385;
goto block9;
block11:;
// line 525
panda$core$Int64 $tmp386 = *(&local0);
panda$core$String$Index $tmp387 = panda$core$String$Index$init$panda$core$Int64($tmp386);
panda$core$Int64 $tmp388 = *(&local2);
panda$core$String$Index $tmp389 = panda$core$String$Index$init$panda$core$Int64($tmp388);
panda$core$Bit $tmp390 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$String$Index$GT $tmp391 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp387, $tmp389, $tmp390);
panda$core$String* $tmp392 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp391);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
return $tmp392;

}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1) {

panda$core$Char8* local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 532
panda$core$Int64* $tmp393 = &param0->_length;
panda$core$Int64 $tmp394 = *$tmp393;
panda$core$Int64* $tmp395 = &param1->_length;
panda$core$Int64 $tmp396 = *$tmp395;
int64_t $tmp397 = $tmp394.value;
int64_t $tmp398 = $tmp396.value;
int64_t $tmp399 = $tmp397 + $tmp398;
panda$core$Int64 $tmp400 = (panda$core$Int64) {$tmp399};
int64_t $tmp401 = $tmp400.value;
panda$core$Char8* $tmp402 = ((panda$core$Char8*) pandaZAlloc($tmp401 * 1));
*(&local0) = $tmp402;
// line 533
panda$core$Int64 $tmp403 = (panda$core$Int64) {0};
panda$core$Int64* $tmp404 = &param0->_length;
panda$core$Int64 $tmp405 = *$tmp404;
panda$core$Bit $tmp406 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp407 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp403, $tmp405, $tmp406);
panda$core$Int64 $tmp408 = $tmp407.min;
*(&local1) = $tmp408;
panda$core$Int64 $tmp409 = $tmp407.max;
panda$core$Bit $tmp410 = $tmp407.inclusive;
bool $tmp411 = $tmp410.value;
panda$core$Int64 $tmp412 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp413 = panda$core$Int64$convert$R$panda$core$UInt64($tmp412);
if ($tmp411) goto block4; else goto block5;
block4:;
int64_t $tmp414 = $tmp408.value;
int64_t $tmp415 = $tmp409.value;
bool $tmp416 = $tmp414 <= $tmp415;
panda$core$Bit $tmp417 = (panda$core$Bit) {$tmp416};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block1; else goto block2;
block5:;
int64_t $tmp419 = $tmp408.value;
int64_t $tmp420 = $tmp409.value;
bool $tmp421 = $tmp419 < $tmp420;
panda$core$Bit $tmp422 = (panda$core$Bit) {$tmp421};
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block1; else goto block2;
block1:;
// line 534
panda$core$Char8* $tmp424 = *(&local0);
panda$core$Int64 $tmp425 = *(&local1);
panda$core$Char8** $tmp426 = &param0->data;
panda$core$Char8* $tmp427 = *$tmp426;
panda$core$Int64 $tmp428 = *(&local1);
int64_t $tmp429 = $tmp428.value;
panda$core$Char8 $tmp430 = $tmp427[$tmp429];
int64_t $tmp431 = $tmp425.value;
$tmp424[$tmp431] = $tmp430;
goto block3;
block3:;
panda$core$Int64 $tmp432 = *(&local1);
int64_t $tmp433 = $tmp409.value;
int64_t $tmp434 = $tmp432.value;
int64_t $tmp435 = $tmp433 - $tmp434;
panda$core$Int64 $tmp436 = (panda$core$Int64) {$tmp435};
panda$core$UInt64 $tmp437 = panda$core$Int64$convert$R$panda$core$UInt64($tmp436);
if ($tmp411) goto block7; else goto block8;
block7:;
uint64_t $tmp438 = $tmp437.value;
uint64_t $tmp439 = $tmp413.value;
bool $tmp440 = $tmp438 >= $tmp439;
panda$core$Bit $tmp441 = (panda$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block6; else goto block2;
block8:;
uint64_t $tmp443 = $tmp437.value;
uint64_t $tmp444 = $tmp413.value;
bool $tmp445 = $tmp443 > $tmp444;
panda$core$Bit $tmp446 = (panda$core$Bit) {$tmp445};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block6; else goto block2;
block6:;
int64_t $tmp448 = $tmp432.value;
int64_t $tmp449 = $tmp412.value;
int64_t $tmp450 = $tmp448 + $tmp449;
panda$core$Int64 $tmp451 = (panda$core$Int64) {$tmp450};
*(&local1) = $tmp451;
goto block1;
block2:;
// line 536
panda$core$Int64 $tmp452 = (panda$core$Int64) {0};
panda$core$Int64* $tmp453 = &param1->_length;
panda$core$Int64 $tmp454 = *$tmp453;
panda$core$Bit $tmp455 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp456 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp452, $tmp454, $tmp455);
panda$core$Int64 $tmp457 = $tmp456.min;
*(&local2) = $tmp457;
panda$core$Int64 $tmp458 = $tmp456.max;
panda$core$Bit $tmp459 = $tmp456.inclusive;
bool $tmp460 = $tmp459.value;
panda$core$Int64 $tmp461 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp462 = panda$core$Int64$convert$R$panda$core$UInt64($tmp461);
if ($tmp460) goto block12; else goto block13;
block12:;
int64_t $tmp463 = $tmp457.value;
int64_t $tmp464 = $tmp458.value;
bool $tmp465 = $tmp463 <= $tmp464;
panda$core$Bit $tmp466 = (panda$core$Bit) {$tmp465};
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block9; else goto block10;
block13:;
int64_t $tmp468 = $tmp457.value;
int64_t $tmp469 = $tmp458.value;
bool $tmp470 = $tmp468 < $tmp469;
panda$core$Bit $tmp471 = (panda$core$Bit) {$tmp470};
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block9; else goto block10;
block9:;
// line 537
panda$core$Char8* $tmp473 = *(&local0);
panda$core$Int64* $tmp474 = &param0->_length;
panda$core$Int64 $tmp475 = *$tmp474;
panda$core$Int64 $tmp476 = *(&local2);
int64_t $tmp477 = $tmp475.value;
int64_t $tmp478 = $tmp476.value;
int64_t $tmp479 = $tmp477 + $tmp478;
panda$core$Int64 $tmp480 = (panda$core$Int64) {$tmp479};
panda$core$Char8** $tmp481 = &param1->data;
panda$core$Char8* $tmp482 = *$tmp481;
panda$core$Int64 $tmp483 = *(&local2);
int64_t $tmp484 = $tmp483.value;
panda$core$Char8 $tmp485 = $tmp482[$tmp484];
int64_t $tmp486 = $tmp480.value;
$tmp473[$tmp486] = $tmp485;
goto block11;
block11:;
panda$core$Int64 $tmp487 = *(&local2);
int64_t $tmp488 = $tmp458.value;
int64_t $tmp489 = $tmp487.value;
int64_t $tmp490 = $tmp488 - $tmp489;
panda$core$Int64 $tmp491 = (panda$core$Int64) {$tmp490};
panda$core$UInt64 $tmp492 = panda$core$Int64$convert$R$panda$core$UInt64($tmp491);
if ($tmp460) goto block15; else goto block16;
block15:;
uint64_t $tmp493 = $tmp492.value;
uint64_t $tmp494 = $tmp462.value;
bool $tmp495 = $tmp493 >= $tmp494;
panda$core$Bit $tmp496 = (panda$core$Bit) {$tmp495};
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block14; else goto block10;
block16:;
uint64_t $tmp498 = $tmp492.value;
uint64_t $tmp499 = $tmp462.value;
bool $tmp500 = $tmp498 > $tmp499;
panda$core$Bit $tmp501 = (panda$core$Bit) {$tmp500};
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block14; else goto block10;
block14:;
int64_t $tmp503 = $tmp487.value;
int64_t $tmp504 = $tmp461.value;
int64_t $tmp505 = $tmp503 + $tmp504;
panda$core$Int64 $tmp506 = (panda$core$Int64) {$tmp505};
*(&local2) = $tmp506;
goto block9;
block10:;
// line 539
panda$core$String* $tmp507 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp508 = *(&local0);
panda$core$Int64* $tmp509 = &param0->_length;
panda$core$Int64 $tmp510 = *$tmp509;
panda$core$Int64* $tmp511 = &param1->_length;
panda$core$Int64 $tmp512 = *$tmp511;
int64_t $tmp513 = $tmp510.value;
int64_t $tmp514 = $tmp512.value;
int64_t $tmp515 = $tmp513 + $tmp514;
panda$core$Int64 $tmp516 = (panda$core$Int64) {$tmp515};
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp507, $tmp508, $tmp516);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
return $tmp507;

}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* param0, panda$core$Object* param1) {

// line 547
$fn518 $tmp517 = ($fn518) param1->$class->vtable[0];
panda$core$String* $tmp519 = $tmp517(param1);
panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(param0, $tmp519);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
return $tmp520;

}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 $tmp521 = (panda$core$Int64) {0};
int64_t $tmp522 = param1.value;
int64_t $tmp523 = $tmp521.value;
bool $tmp524 = $tmp522 >= $tmp523;
panda$core$Bit $tmp525 = (panda$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp527 = (panda$core$Int64) {554};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s528, $tmp527, &$s529);
abort(); // unreachable
block1:;
// line 555
panda$core$MutableString* $tmp530 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp530);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp531 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
*(&local0) = $tmp530;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
// line 556
panda$core$Int64 $tmp532 = (panda$core$Int64) {0};
panda$core$Bit $tmp533 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp534 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp532, param1, $tmp533);
panda$core$Int64 $tmp535 = $tmp534.min;
*(&local1) = $tmp535;
panda$core$Int64 $tmp536 = $tmp534.max;
panda$core$Bit $tmp537 = $tmp534.inclusive;
bool $tmp538 = $tmp537.value;
panda$core$Int64 $tmp539 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp540 = panda$core$Int64$convert$R$panda$core$UInt64($tmp539);
if ($tmp538) goto block6; else goto block7;
block6:;
int64_t $tmp541 = $tmp535.value;
int64_t $tmp542 = $tmp536.value;
bool $tmp543 = $tmp541 <= $tmp542;
panda$core$Bit $tmp544 = (panda$core$Bit) {$tmp543};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block3; else goto block4;
block7:;
int64_t $tmp546 = $tmp535.value;
int64_t $tmp547 = $tmp536.value;
bool $tmp548 = $tmp546 < $tmp547;
panda$core$Bit $tmp549 = (panda$core$Bit) {$tmp548};
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block3; else goto block4;
block3:;
// line 557
panda$core$MutableString* $tmp551 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp551, param0);
goto block5;
block5:;
panda$core$Int64 $tmp552 = *(&local1);
int64_t $tmp553 = $tmp536.value;
int64_t $tmp554 = $tmp552.value;
int64_t $tmp555 = $tmp553 - $tmp554;
panda$core$Int64 $tmp556 = (panda$core$Int64) {$tmp555};
panda$core$UInt64 $tmp557 = panda$core$Int64$convert$R$panda$core$UInt64($tmp556);
if ($tmp538) goto block9; else goto block10;
block9:;
uint64_t $tmp558 = $tmp557.value;
uint64_t $tmp559 = $tmp540.value;
bool $tmp560 = $tmp558 >= $tmp559;
panda$core$Bit $tmp561 = (panda$core$Bit) {$tmp560};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block8; else goto block4;
block10:;
uint64_t $tmp563 = $tmp557.value;
uint64_t $tmp564 = $tmp540.value;
bool $tmp565 = $tmp563 > $tmp564;
panda$core$Bit $tmp566 = (panda$core$Bit) {$tmp565};
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block8; else goto block4;
block8:;
int64_t $tmp568 = $tmp552.value;
int64_t $tmp569 = $tmp539.value;
int64_t $tmp570 = $tmp568 + $tmp569;
panda$core$Int64 $tmp571 = (panda$core$Int64) {$tmp570};
*(&local1) = $tmp571;
goto block3;
block4:;
// line 559
panda$core$MutableString* $tmp572 = *(&local0);
panda$core$String* $tmp573 = panda$core$MutableString$finish$R$panda$core$String($tmp572);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
panda$core$MutableString* $tmp574 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp573;

}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$panda$core$String$R$panda$core$String(panda$core$Int64 param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 $tmp575 = (panda$core$Int64) {0};
int64_t $tmp576 = param0.value;
int64_t $tmp577 = $tmp575.value;
bool $tmp578 = $tmp576 >= $tmp577;
panda$core$Bit $tmp579 = (panda$core$Bit) {$tmp578};
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp581 = (panda$core$Int64) {567};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s582, $tmp581, &$s583);
abort(); // unreachable
block1:;
// line 568
panda$core$MutableString* $tmp584 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp584);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp585 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
*(&local0) = $tmp584;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// line 569
panda$core$Int64 $tmp586 = (panda$core$Int64) {0};
panda$core$Bit $tmp587 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp588 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp586, param0, $tmp587);
panda$core$Int64 $tmp589 = $tmp588.min;
*(&local1) = $tmp589;
panda$core$Int64 $tmp590 = $tmp588.max;
panda$core$Bit $tmp591 = $tmp588.inclusive;
bool $tmp592 = $tmp591.value;
panda$core$Int64 $tmp593 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp594 = panda$core$Int64$convert$R$panda$core$UInt64($tmp593);
if ($tmp592) goto block6; else goto block7;
block6:;
int64_t $tmp595 = $tmp589.value;
int64_t $tmp596 = $tmp590.value;
bool $tmp597 = $tmp595 <= $tmp596;
panda$core$Bit $tmp598 = (panda$core$Bit) {$tmp597};
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block3; else goto block4;
block7:;
int64_t $tmp600 = $tmp589.value;
int64_t $tmp601 = $tmp590.value;
bool $tmp602 = $tmp600 < $tmp601;
panda$core$Bit $tmp603 = (panda$core$Bit) {$tmp602};
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block3; else goto block4;
block3:;
// line 570
panda$core$MutableString* $tmp605 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp605, param1);
goto block5;
block5:;
panda$core$Int64 $tmp606 = *(&local1);
int64_t $tmp607 = $tmp590.value;
int64_t $tmp608 = $tmp606.value;
int64_t $tmp609 = $tmp607 - $tmp608;
panda$core$Int64 $tmp610 = (panda$core$Int64) {$tmp609};
panda$core$UInt64 $tmp611 = panda$core$Int64$convert$R$panda$core$UInt64($tmp610);
if ($tmp592) goto block9; else goto block10;
block9:;
uint64_t $tmp612 = $tmp611.value;
uint64_t $tmp613 = $tmp594.value;
bool $tmp614 = $tmp612 >= $tmp613;
panda$core$Bit $tmp615 = (panda$core$Bit) {$tmp614};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block8; else goto block4;
block10:;
uint64_t $tmp617 = $tmp611.value;
uint64_t $tmp618 = $tmp594.value;
bool $tmp619 = $tmp617 > $tmp618;
panda$core$Bit $tmp620 = (panda$core$Bit) {$tmp619};
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block8; else goto block4;
block8:;
int64_t $tmp622 = $tmp606.value;
int64_t $tmp623 = $tmp593.value;
int64_t $tmp624 = $tmp622 + $tmp623;
panda$core$Int64 $tmp625 = (panda$core$Int64) {$tmp624};
*(&local1) = $tmp625;
goto block3;
block4:;
// line 572
panda$core$MutableString* $tmp626 = *(&local0);
panda$core$String* $tmp627 = panda$core$MutableString$finish$R$panda$core$String($tmp626);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
panda$core$MutableString* $tmp628 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp627;

}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* param0, panda$core$String* param1) {

// line 581
$fn630 $tmp629 = ($fn630) param0->$class->vtable[0];
panda$core$String* $tmp631 = $tmp629(param0);
panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp631, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
return $tmp632;

}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

panda$core$Int64 local0;
// line 594
panda$core$Int64* $tmp633 = &param0->_length;
panda$core$Int64 $tmp634 = *$tmp633;
panda$core$Int64* $tmp635 = &param1->_length;
panda$core$Int64 $tmp636 = *$tmp635;
int64_t $tmp637 = $tmp634.value;
int64_t $tmp638 = $tmp636.value;
bool $tmp639 = $tmp637 != $tmp638;
panda$core$Bit $tmp640 = (panda$core$Bit) {$tmp639};
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block1; else goto block2;
block1:;
// line 595
panda$core$Bit $tmp642 = panda$core$Bit$init$builtin_bit(false);
return $tmp642;
block2:;
// line 597
panda$core$Int64 $tmp643 = (panda$core$Int64) {0};
panda$core$Int64* $tmp644 = &param0->_length;
panda$core$Int64 $tmp645 = *$tmp644;
panda$core$Bit $tmp646 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp647 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp643, $tmp645, $tmp646);
panda$core$Int64 $tmp648 = $tmp647.min;
*(&local0) = $tmp648;
panda$core$Int64 $tmp649 = $tmp647.max;
panda$core$Bit $tmp650 = $tmp647.inclusive;
bool $tmp651 = $tmp650.value;
panda$core$Int64 $tmp652 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp653 = panda$core$Int64$convert$R$panda$core$UInt64($tmp652);
if ($tmp651) goto block6; else goto block7;
block6:;
int64_t $tmp654 = $tmp648.value;
int64_t $tmp655 = $tmp649.value;
bool $tmp656 = $tmp654 <= $tmp655;
panda$core$Bit $tmp657 = (panda$core$Bit) {$tmp656};
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block3; else goto block4;
block7:;
int64_t $tmp659 = $tmp648.value;
int64_t $tmp660 = $tmp649.value;
bool $tmp661 = $tmp659 < $tmp660;
panda$core$Bit $tmp662 = (panda$core$Bit) {$tmp661};
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block3; else goto block4;
block3:;
// line 598
panda$core$Char8** $tmp664 = &param0->data;
panda$core$Char8* $tmp665 = *$tmp664;
panda$core$Int64 $tmp666 = *(&local0);
int64_t $tmp667 = $tmp666.value;
panda$core$Char8 $tmp668 = $tmp665[$tmp667];
panda$core$Char8** $tmp669 = &param1->data;
panda$core$Char8* $tmp670 = *$tmp669;
panda$core$Int64 $tmp671 = *(&local0);
int64_t $tmp672 = $tmp671.value;
panda$core$Char8 $tmp673 = $tmp670[$tmp672];
panda$core$Bit $tmp674 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp668, $tmp673);
bool $tmp675 = $tmp674.value;
if ($tmp675) goto block8; else goto block9;
block8:;
// line 599
panda$core$Bit $tmp676 = panda$core$Bit$init$builtin_bit(false);
return $tmp676;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp677 = *(&local0);
int64_t $tmp678 = $tmp649.value;
int64_t $tmp679 = $tmp677.value;
int64_t $tmp680 = $tmp678 - $tmp679;
panda$core$Int64 $tmp681 = (panda$core$Int64) {$tmp680};
panda$core$UInt64 $tmp682 = panda$core$Int64$convert$R$panda$core$UInt64($tmp681);
if ($tmp651) goto block11; else goto block12;
block11:;
uint64_t $tmp683 = $tmp682.value;
uint64_t $tmp684 = $tmp653.value;
bool $tmp685 = $tmp683 >= $tmp684;
panda$core$Bit $tmp686 = (panda$core$Bit) {$tmp685};
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block10; else goto block4;
block12:;
uint64_t $tmp688 = $tmp682.value;
uint64_t $tmp689 = $tmp653.value;
bool $tmp690 = $tmp688 > $tmp689;
panda$core$Bit $tmp691 = (panda$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block10; else goto block4;
block10:;
int64_t $tmp693 = $tmp677.value;
int64_t $tmp694 = $tmp652.value;
int64_t $tmp695 = $tmp693 + $tmp694;
panda$core$Int64 $tmp696 = (panda$core$Int64) {$tmp695};
*(&local0) = $tmp696;
goto block3;
block4:;
// line 602
panda$core$Bit $tmp697 = panda$core$Bit$init$builtin_bit(true);
return $tmp697;

}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* param0, panda$core$String$Index param1) {

panda$core$Int64 local0;
panda$core$Char8 local1;
panda$core$Int32 local2;
// line 609
panda$core$Int64 $tmp698 = param1.value;
*(&local0) = $tmp698;
// line 610
panda$core$Char8** $tmp699 = &param0->data;
panda$core$Char8* $tmp700 = *$tmp699;
panda$core$Int64 $tmp701 = *(&local0);
int64_t $tmp702 = $tmp701.value;
panda$core$Char8 $tmp703 = $tmp700[$tmp702];
*(&local1) = $tmp703;
// line 611
panda$core$Char8 $tmp704 = *(&local1);
panda$core$Int32 $tmp705 = panda$core$Char8$convert$R$panda$core$Int32($tmp704);
*(&local2) = $tmp705;
// line 612
panda$core$Char8 $tmp706 = *(&local1);
uint8_t $tmp707 = $tmp706.value;
int64_t $tmp708 = ((int64_t) $tmp707) & 255;
bool $tmp709 = $tmp708 < 192;
panda$core$Bit $tmp710 = panda$core$Bit$init$builtin_bit($tmp709);
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block1; else goto block2;
block1:;
// line 613
panda$core$Int32 $tmp712 = *(&local2);
panda$core$Char32 $tmp713 = panda$core$Char32$init$panda$core$Int32($tmp712);
return $tmp713;
block2:;
// line 615
panda$core$Char8 $tmp714 = *(&local1);
uint8_t $tmp715 = $tmp714.value;
int64_t $tmp716 = ((int64_t) $tmp715) & 255;
bool $tmp717 = $tmp716 < 224;
panda$core$Bit $tmp718 = panda$core$Bit$init$builtin_bit($tmp717);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block3; else goto block4;
block3:;
// line 616
panda$core$Int64 $tmp720 = *(&local0);
panda$core$Int64 $tmp721 = (panda$core$Int64) {1};
int64_t $tmp722 = $tmp720.value;
int64_t $tmp723 = $tmp721.value;
int64_t $tmp724 = $tmp722 + $tmp723;
panda$core$Int64 $tmp725 = (panda$core$Int64) {$tmp724};
panda$core$Int64* $tmp726 = &param0->_length;
panda$core$Int64 $tmp727 = *$tmp726;
int64_t $tmp728 = $tmp725.value;
int64_t $tmp729 = $tmp727.value;
bool $tmp730 = $tmp728 < $tmp729;
panda$core$Bit $tmp731 = (panda$core$Bit) {$tmp730};
bool $tmp732 = $tmp731.value;
if ($tmp732) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp733 = (panda$core$Int64) {616};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s734, $tmp733);
abort(); // unreachable
block5:;
// line 617
panda$core$Int32 $tmp735 = *(&local2);
panda$core$Int32 $tmp736 = (panda$core$Int32) {31};
panda$core$Int32 $tmp737 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp735, $tmp736);
panda$core$Int32 $tmp738 = (panda$core$Int32) {6};
panda$core$Int32 $tmp739 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp737, $tmp738);
panda$core$Char8** $tmp740 = &param0->data;
panda$core$Char8* $tmp741 = *$tmp740;
panda$core$Int64 $tmp742 = *(&local0);
panda$core$Int64 $tmp743 = (panda$core$Int64) {1};
int64_t $tmp744 = $tmp742.value;
int64_t $tmp745 = $tmp743.value;
int64_t $tmp746 = $tmp744 + $tmp745;
panda$core$Int64 $tmp747 = (panda$core$Int64) {$tmp746};
int64_t $tmp748 = $tmp747.value;
panda$core$Char8 $tmp749 = $tmp741[$tmp748];
panda$core$Int32 $tmp750 = panda$core$Char8$convert$R$panda$core$Int32($tmp749);
panda$core$Int32 $tmp751 = (panda$core$Int32) {63};
panda$core$Int32 $tmp752 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp750, $tmp751);
int32_t $tmp753 = $tmp739.value;
int32_t $tmp754 = $tmp752.value;
int32_t $tmp755 = $tmp753 + $tmp754;
panda$core$Int32 $tmp756 = (panda$core$Int32) {$tmp755};
*(&local2) = $tmp756;
// line 618
panda$core$Int32 $tmp757 = *(&local2);
panda$core$Char32 $tmp758 = panda$core$Char32$init$panda$core$Int32($tmp757);
return $tmp758;
block4:;
// line 620
panda$core$Char8 $tmp759 = *(&local1);
uint8_t $tmp760 = $tmp759.value;
int64_t $tmp761 = ((int64_t) $tmp760) & 255;
bool $tmp762 = $tmp761 < 240;
panda$core$Bit $tmp763 = panda$core$Bit$init$builtin_bit($tmp762);
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block7; else goto block8;
block7:;
// line 621
panda$core$Int64 $tmp765 = *(&local0);
panda$core$Int64 $tmp766 = (panda$core$Int64) {2};
int64_t $tmp767 = $tmp765.value;
int64_t $tmp768 = $tmp766.value;
int64_t $tmp769 = $tmp767 + $tmp768;
panda$core$Int64 $tmp770 = (panda$core$Int64) {$tmp769};
panda$core$Int64* $tmp771 = &param0->_length;
panda$core$Int64 $tmp772 = *$tmp771;
int64_t $tmp773 = $tmp770.value;
int64_t $tmp774 = $tmp772.value;
bool $tmp775 = $tmp773 < $tmp774;
panda$core$Bit $tmp776 = (panda$core$Bit) {$tmp775};
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp778 = (panda$core$Int64) {621};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s779, $tmp778);
abort(); // unreachable
block9:;
// line 622
panda$core$Int32 $tmp780 = *(&local2);
panda$core$Int32 $tmp781 = (panda$core$Int32) {15};
panda$core$Int32 $tmp782 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp780, $tmp781);
panda$core$Int32 $tmp783 = (panda$core$Int32) {12};
panda$core$Int32 $tmp784 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp782, $tmp783);
panda$core$Char8** $tmp785 = &param0->data;
panda$core$Char8* $tmp786 = *$tmp785;
panda$core$Int64 $tmp787 = *(&local0);
panda$core$Int64 $tmp788 = (panda$core$Int64) {1};
int64_t $tmp789 = $tmp787.value;
int64_t $tmp790 = $tmp788.value;
int64_t $tmp791 = $tmp789 + $tmp790;
panda$core$Int64 $tmp792 = (panda$core$Int64) {$tmp791};
int64_t $tmp793 = $tmp792.value;
panda$core$Char8 $tmp794 = $tmp786[$tmp793];
panda$core$Int32 $tmp795 = panda$core$Char8$convert$R$panda$core$Int32($tmp794);
panda$core$Int32 $tmp796 = (panda$core$Int32) {63};
panda$core$Int32 $tmp797 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp795, $tmp796);
panda$core$Int32 $tmp798 = (panda$core$Int32) {6};
panda$core$Int32 $tmp799 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp797, $tmp798);
int32_t $tmp800 = $tmp784.value;
int32_t $tmp801 = $tmp799.value;
int32_t $tmp802 = $tmp800 + $tmp801;
panda$core$Int32 $tmp803 = (panda$core$Int32) {$tmp802};
panda$core$Char8** $tmp804 = &param0->data;
panda$core$Char8* $tmp805 = *$tmp804;
panda$core$Int64 $tmp806 = *(&local0);
panda$core$Int64 $tmp807 = (panda$core$Int64) {2};
int64_t $tmp808 = $tmp806.value;
int64_t $tmp809 = $tmp807.value;
int64_t $tmp810 = $tmp808 + $tmp809;
panda$core$Int64 $tmp811 = (panda$core$Int64) {$tmp810};
int64_t $tmp812 = $tmp811.value;
panda$core$Char8 $tmp813 = $tmp805[$tmp812];
panda$core$Int32 $tmp814 = panda$core$Char8$convert$R$panda$core$Int32($tmp813);
panda$core$Int32 $tmp815 = (panda$core$Int32) {63};
panda$core$Int32 $tmp816 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp814, $tmp815);
int32_t $tmp817 = $tmp803.value;
int32_t $tmp818 = $tmp816.value;
int32_t $tmp819 = $tmp817 + $tmp818;
panda$core$Int32 $tmp820 = (panda$core$Int32) {$tmp819};
*(&local2) = $tmp820;
// line 624
panda$core$Int32 $tmp821 = *(&local2);
panda$core$Char32 $tmp822 = panda$core$Char32$init$panda$core$Int32($tmp821);
return $tmp822;
block8:;
// line 626
panda$core$Int64 $tmp823 = *(&local0);
panda$core$Int64 $tmp824 = (panda$core$Int64) {3};
int64_t $tmp825 = $tmp823.value;
int64_t $tmp826 = $tmp824.value;
int64_t $tmp827 = $tmp825 + $tmp826;
panda$core$Int64 $tmp828 = (panda$core$Int64) {$tmp827};
panda$core$Int64* $tmp829 = &param0->_length;
panda$core$Int64 $tmp830 = *$tmp829;
int64_t $tmp831 = $tmp828.value;
int64_t $tmp832 = $tmp830.value;
bool $tmp833 = $tmp831 < $tmp832;
panda$core$Bit $tmp834 = (panda$core$Bit) {$tmp833};
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp836 = (panda$core$Int64) {626};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s837, $tmp836);
abort(); // unreachable
block11:;
// line 627
panda$core$Int32 $tmp838 = *(&local2);
panda$core$Int32 $tmp839 = (panda$core$Int32) {7};
panda$core$Int32 $tmp840 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp838, $tmp839);
panda$core$Int32 $tmp841 = (panda$core$Int32) {18};
panda$core$Int32 $tmp842 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp840, $tmp841);
panda$core$Char8** $tmp843 = &param0->data;
panda$core$Char8* $tmp844 = *$tmp843;
panda$core$Int64 $tmp845 = *(&local0);
panda$core$Int64 $tmp846 = (panda$core$Int64) {1};
int64_t $tmp847 = $tmp845.value;
int64_t $tmp848 = $tmp846.value;
int64_t $tmp849 = $tmp847 + $tmp848;
panda$core$Int64 $tmp850 = (panda$core$Int64) {$tmp849};
int64_t $tmp851 = $tmp850.value;
panda$core$Char8 $tmp852 = $tmp844[$tmp851];
panda$core$Int32 $tmp853 = panda$core$Char8$convert$R$panda$core$Int32($tmp852);
panda$core$Int32 $tmp854 = (panda$core$Int32) {63};
panda$core$Int32 $tmp855 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp853, $tmp854);
panda$core$Int32 $tmp856 = (panda$core$Int32) {12};
panda$core$Int32 $tmp857 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp855, $tmp856);
int32_t $tmp858 = $tmp842.value;
int32_t $tmp859 = $tmp857.value;
int32_t $tmp860 = $tmp858 + $tmp859;
panda$core$Int32 $tmp861 = (panda$core$Int32) {$tmp860};
panda$core$Char8** $tmp862 = &param0->data;
panda$core$Char8* $tmp863 = *$tmp862;
panda$core$Int64 $tmp864 = *(&local0);
panda$core$Int64 $tmp865 = (panda$core$Int64) {2};
int64_t $tmp866 = $tmp864.value;
int64_t $tmp867 = $tmp865.value;
int64_t $tmp868 = $tmp866 + $tmp867;
panda$core$Int64 $tmp869 = (panda$core$Int64) {$tmp868};
int64_t $tmp870 = $tmp869.value;
panda$core$Char8 $tmp871 = $tmp863[$tmp870];
panda$core$Int32 $tmp872 = panda$core$Char8$convert$R$panda$core$Int32($tmp871);
panda$core$Int32 $tmp873 = (panda$core$Int32) {63};
panda$core$Int32 $tmp874 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp872, $tmp873);
panda$core$Int32 $tmp875 = (panda$core$Int32) {6};
panda$core$Int32 $tmp876 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp874, $tmp875);
int32_t $tmp877 = $tmp861.value;
int32_t $tmp878 = $tmp876.value;
int32_t $tmp879 = $tmp877 + $tmp878;
panda$core$Int32 $tmp880 = (panda$core$Int32) {$tmp879};
panda$core$Char8** $tmp881 = &param0->data;
panda$core$Char8* $tmp882 = *$tmp881;
panda$core$Int64 $tmp883 = *(&local0);
panda$core$Int64 $tmp884 = (panda$core$Int64) {3};
int64_t $tmp885 = $tmp883.value;
int64_t $tmp886 = $tmp884.value;
int64_t $tmp887 = $tmp885 + $tmp886;
panda$core$Int64 $tmp888 = (panda$core$Int64) {$tmp887};
int64_t $tmp889 = $tmp888.value;
panda$core$Char8 $tmp890 = $tmp882[$tmp889];
panda$core$Int32 $tmp891 = panda$core$Char8$convert$R$panda$core$Int32($tmp890);
panda$core$Int32 $tmp892 = (panda$core$Int32) {63};
panda$core$Int32 $tmp893 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp891, $tmp892);
int32_t $tmp894 = $tmp880.value;
int32_t $tmp895 = $tmp893.value;
int32_t $tmp896 = $tmp894 + $tmp895;
panda$core$Int32 $tmp897 = (panda$core$Int32) {$tmp896};
*(&local2) = $tmp897;
// line 630
panda$core$Int32 $tmp898 = *(&local2);
panda$core$Char32 $tmp899 = panda$core$Char32$init$panda$core$Int32($tmp898);
return $tmp899;

}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* param0, panda$core$Int64 param1) {

// line 639
panda$core$String$Index $tmp900 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$String$Index $tmp901 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp900, param1);
panda$core$Char32 $tmp902 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(param0, $tmp901);
return $tmp902;

}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$GT param1) {

panda$core$Int64 local0;
// line 652
panda$core$String$Index $tmp903 = param1.max;
panda$core$Int64 $tmp904 = $tmp903.value;
panda$core$String$Index $tmp905 = param1.min;
panda$core$Int64 $tmp906 = $tmp905.value;
int64_t $tmp907 = $tmp904.value;
int64_t $tmp908 = $tmp906.value;
int64_t $tmp909 = $tmp907 - $tmp908;
panda$core$Int64 $tmp910 = (panda$core$Int64) {$tmp909};
*(&local0) = $tmp910;
// line 653
panda$core$Bit $tmp911 = param1.inclusive;
bool $tmp912 = $tmp911.value;
if ($tmp912) goto block1; else goto block2;
block1:;
// line 654
panda$core$Int64 $tmp913 = *(&local0);
panda$core$Int64 $tmp914 = (panda$core$Int64) {1};
int64_t $tmp915 = $tmp913.value;
int64_t $tmp916 = $tmp914.value;
int64_t $tmp917 = $tmp915 + $tmp916;
panda$core$Int64 $tmp918 = (panda$core$Int64) {$tmp917};
*(&local0) = $tmp918;
goto block2;
block2:;
// line 656
panda$core$String* $tmp919 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8** $tmp920 = &param0->data;
panda$core$Char8* $tmp921 = *$tmp920;
panda$core$String$Index $tmp922 = param1.min;
panda$core$Int64 $tmp923 = $tmp922.value;
int64_t $tmp924 = $tmp923.value;
panda$core$Char8* $tmp925 = $tmp921 + $tmp924;
panda$core$Int64 $tmp926 = *(&local0);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp919, $tmp925, $tmp926, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp919));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp919));
return $tmp919;

}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$Q$GT param1) {

panda$core$String$Index local0;
panda$core$Bit local1;
panda$core$String$Index local2;
// line 672
// line 673
panda$core$String$Index$nullable $tmp927 = param1.min;
panda$core$Bit $tmp928 = panda$core$Bit$init$builtin_bit($tmp927.nonnull);
bool $tmp929 = $tmp928.value;
if ($tmp929) goto block1; else goto block3;
block1:;
// line 674
panda$core$String$Index$nullable $tmp930 = param1.min;
*(&local0) = ((panda$core$String$Index) $tmp930.value);
goto block2;
block3:;
// line 1
// line 677
panda$core$String$Index $tmp931 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local0) = $tmp931;
goto block2;
block2:;
// line 680
panda$core$Bit $tmp932 = param1.inclusive;
*(&local1) = $tmp932;
// line 681
// line 682
panda$core$String$Index$nullable $tmp933 = param1.max;
panda$core$Bit $tmp934 = panda$core$Bit$init$builtin_bit($tmp933.nonnull);
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block4; else goto block6;
block4:;
// line 683
panda$core$String$Index$nullable $tmp936 = param1.max;
*(&local2) = ((panda$core$String$Index) $tmp936.value);
goto block5;
block6:;
// line 1
// line 686
panda$core$String$Index $tmp937 = panda$core$String$get_end$R$panda$core$String$Index(param0);
*(&local2) = $tmp937;
// line 687
panda$core$Bit $tmp938 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp938;
goto block5;
block5:;
// line 689
panda$core$String$Index $tmp939 = *(&local0);
panda$core$String$Index $tmp940 = *(&local2);
panda$core$Bit $tmp941 = *(&local1);
panda$core$Range$LTpanda$core$String$Index$GT $tmp942 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp939, $tmp940, $tmp941);
panda$core$String* $tmp943 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp942);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
return $tmp943;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$GT param1) {

panda$core$Int64 local0;
panda$core$MutableString* local1 = NULL;
panda$core$Int64 local2;
panda$core$Char8 local3;
// line 697
panda$core$String$Index $tmp944 = param1.min;
panda$core$Int64 $tmp945 = $tmp944.value;
*(&local0) = $tmp945;
// line 698
panda$core$MutableString* $tmp946 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp946);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp947 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
*(&local1) = $tmp946;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
// line 699
panda$core$String$Index $tmp948 = param1.max;
panda$core$Int64 $tmp949 = $tmp948.value;
*(&local2) = $tmp949;
// line 700
panda$core$Bit $tmp950 = param1.inclusive;
bool $tmp951 = $tmp950.value;
if ($tmp951) goto block1; else goto block2;
block1:;
// line 701
panda$core$Int64 $tmp952 = *(&local2);
panda$core$Int64 $tmp953 = (panda$core$Int64) {1};
int64_t $tmp954 = $tmp952.value;
int64_t $tmp955 = $tmp953.value;
int64_t $tmp956 = $tmp954 + $tmp955;
panda$core$Int64 $tmp957 = (panda$core$Int64) {$tmp956};
*(&local2) = $tmp957;
goto block2;
block2:;
// line 703
goto block3;
block3:;
panda$core$Int64 $tmp958 = *(&local0);
panda$core$Int64 $tmp959 = *(&local2);
int64_t $tmp960 = $tmp958.value;
int64_t $tmp961 = $tmp959.value;
bool $tmp962 = $tmp960 < $tmp961;
panda$core$Bit $tmp963 = (panda$core$Bit) {$tmp962};
bool $tmp964 = $tmp963.value;
if ($tmp964) goto block4; else goto block5;
block4:;
// line 704
panda$core$Char8** $tmp965 = &param0->data;
panda$core$Char8* $tmp966 = *$tmp965;
panda$core$Int64 $tmp967 = *(&local0);
int64_t $tmp968 = $tmp967.value;
panda$core$Char8 $tmp969 = $tmp966[$tmp968];
*(&local3) = $tmp969;
// line 705
panda$core$MutableString* $tmp970 = *(&local1);
panda$core$Char8 $tmp971 = *(&local3);
panda$core$MutableString$append$panda$core$Char8($tmp970, $tmp971);
// line 706
panda$core$Int64 $tmp972 = *(&local0);
panda$core$Int64 $tmp973 = (panda$core$Int64) {1};
int64_t $tmp974 = $tmp972.value;
int64_t $tmp975 = $tmp973.value;
int64_t $tmp976 = $tmp974 + $tmp975;
panda$core$Int64 $tmp977 = (panda$core$Int64) {$tmp976};
*(&local0) = $tmp977;
// line 707
panda$core$Char8 $tmp978 = *(&local3);
uint8_t $tmp979 = $tmp978.value;
int64_t $tmp980 = ((int64_t) $tmp979) & 255;
bool $tmp981 = $tmp980 >= 192;
panda$core$Bit $tmp982 = panda$core$Bit$init$builtin_bit($tmp981);
bool $tmp983 = $tmp982.value;
if ($tmp983) goto block6; else goto block7;
block6:;
// line 708
panda$core$MutableString* $tmp984 = *(&local1);
panda$core$Char8** $tmp985 = &param0->data;
panda$core$Char8* $tmp986 = *$tmp985;
panda$core$Int64 $tmp987 = *(&local0);
int64_t $tmp988 = $tmp987.value;
panda$core$Char8 $tmp989 = $tmp986[$tmp988];
panda$core$MutableString$append$panda$core$Char8($tmp984, $tmp989);
// line 709
panda$core$Int64 $tmp990 = *(&local0);
panda$core$Int64 $tmp991 = (panda$core$Int64) {1};
int64_t $tmp992 = $tmp990.value;
int64_t $tmp993 = $tmp991.value;
int64_t $tmp994 = $tmp992 + $tmp993;
panda$core$Int64 $tmp995 = (panda$core$Int64) {$tmp994};
*(&local0) = $tmp995;
goto block7;
block7:;
// line 711
panda$core$Char8 $tmp996 = *(&local3);
uint8_t $tmp997 = $tmp996.value;
int64_t $tmp998 = ((int64_t) $tmp997) & 255;
bool $tmp999 = $tmp998 >= 224;
panda$core$Bit $tmp1000 = panda$core$Bit$init$builtin_bit($tmp999);
bool $tmp1001 = $tmp1000.value;
if ($tmp1001) goto block8; else goto block9;
block8:;
// line 712
panda$core$MutableString* $tmp1002 = *(&local1);
panda$core$Char8** $tmp1003 = &param0->data;
panda$core$Char8* $tmp1004 = *$tmp1003;
panda$core$Int64 $tmp1005 = *(&local0);
int64_t $tmp1006 = $tmp1005.value;
panda$core$Char8 $tmp1007 = $tmp1004[$tmp1006];
panda$core$MutableString$append$panda$core$Char8($tmp1002, $tmp1007);
// line 713
panda$core$Int64 $tmp1008 = *(&local0);
panda$core$Int64 $tmp1009 = (panda$core$Int64) {1};
int64_t $tmp1010 = $tmp1008.value;
int64_t $tmp1011 = $tmp1009.value;
int64_t $tmp1012 = $tmp1010 + $tmp1011;
panda$core$Int64 $tmp1013 = (panda$core$Int64) {$tmp1012};
*(&local0) = $tmp1013;
goto block9;
block9:;
// line 715
panda$core$Char8 $tmp1014 = *(&local3);
uint8_t $tmp1015 = $tmp1014.value;
int64_t $tmp1016 = ((int64_t) $tmp1015) & 255;
bool $tmp1017 = $tmp1016 >= 240;
panda$core$Bit $tmp1018 = panda$core$Bit$init$builtin_bit($tmp1017);
bool $tmp1019 = $tmp1018.value;
if ($tmp1019) goto block10; else goto block11;
block10:;
// line 716
panda$core$MutableString* $tmp1020 = *(&local1);
panda$core$Char8** $tmp1021 = &param0->data;
panda$core$Char8* $tmp1022 = *$tmp1021;
panda$core$Int64 $tmp1023 = *(&local0);
int64_t $tmp1024 = $tmp1023.value;
panda$core$Char8 $tmp1025 = $tmp1022[$tmp1024];
panda$core$MutableString$append$panda$core$Char8($tmp1020, $tmp1025);
// line 717
panda$core$Int64 $tmp1026 = *(&local0);
panda$core$Int64 $tmp1027 = (panda$core$Int64) {1};
int64_t $tmp1028 = $tmp1026.value;
int64_t $tmp1029 = $tmp1027.value;
int64_t $tmp1030 = $tmp1028 + $tmp1029;
panda$core$Int64 $tmp1031 = (panda$core$Int64) {$tmp1030};
*(&local0) = $tmp1031;
goto block11;
block11:;
goto block3;
block5:;
// line 720
panda$core$MutableString* $tmp1032 = *(&local1);
panda$core$String* $tmp1033 = panda$core$MutableString$finish$R$panda$core$String($tmp1032);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1033));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1033));
panda$core$MutableString* $tmp1034 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp1033;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$String$Index$Q$GT param1) {

panda$core$String$Index local0;
panda$core$Bit local1;
panda$core$String$Index local2;
// line 731
panda$core$Int64* $tmp1035 = &param0->_length;
panda$core$Int64 $tmp1036 = *$tmp1035;
panda$core$Int64 $tmp1037 = (panda$core$Int64) {0};
panda$core$Bit $tmp1038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1036, $tmp1037);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block1; else goto block2;
block1:;
// line 732
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1040));
return &$s1041;
block2:;
// line 734
// line 735
panda$core$String$Index$nullable $tmp1042 = param1.min;
panda$core$Bit $tmp1043 = panda$core$Bit$init$builtin_bit($tmp1042.nonnull);
bool $tmp1044 = $tmp1043.value;
if ($tmp1044) goto block3; else goto block5;
block3:;
// line 736
panda$core$String$Index$nullable $tmp1045 = param1.min;
*(&local0) = ((panda$core$String$Index) $tmp1045.value);
goto block4;
block5:;
// line 1
// line 739
panda$core$String$Index $tmp1046 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local0) = $tmp1046;
goto block4;
block4:;
// line 742
panda$core$Bit $tmp1047 = param1.inclusive;
*(&local1) = $tmp1047;
// line 743
// line 744
panda$core$String$Index$nullable $tmp1048 = param1.max;
panda$core$Bit $tmp1049 = panda$core$Bit$init$builtin_bit($tmp1048.nonnull);
bool $tmp1050 = $tmp1049.value;
if ($tmp1050) goto block6; else goto block8;
block6:;
// line 745
panda$core$String$Index$nullable $tmp1051 = param1.max;
*(&local2) = ((panda$core$String$Index) $tmp1051.value);
goto block7;
block8:;
// line 1
// line 748
panda$core$String$Index $tmp1052 = panda$core$String$get_end$R$panda$core$String$Index(param0);
*(&local2) = $tmp1052;
// line 749
panda$core$Bit $tmp1053 = panda$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1053;
goto block7;
block7:;
// line 751
panda$core$String$Index $tmp1054 = *(&local0);
panda$core$String$Index $tmp1055 = *(&local2);
panda$core$Bit $tmp1056 = *(&local1);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1057 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1054, $tmp1055, $tmp1056);
panda$core$String* $tmp1058 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp1057);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1058));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1058));
return $tmp1058;

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
// line 767
panda$core$Int64* $tmp1059 = &param0->_length;
panda$core$Int64 $tmp1060 = *$tmp1059;
panda$core$Int64 $tmp1061 = (panda$core$Int64) {0};
panda$core$Bit $tmp1062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1060, $tmp1061);
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block1; else goto block2;
block1:;
// line 768
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1064));
return &$s1065;
block2:;
// line 770
panda$core$Int64 $tmp1066 = param1.step;
*(&local0) = $tmp1066;
// line 772
// line 773
panda$core$String$Index$nullable $tmp1067 = param1.start;
panda$core$Bit $tmp1068 = panda$core$Bit$init$builtin_bit($tmp1067.nonnull);
bool $tmp1069 = $tmp1068.value;
if ($tmp1069) goto block3; else goto block5;
block3:;
// line 774
panda$core$String$Index$nullable $tmp1070 = param1.start;
panda$core$Int64 $tmp1071 = ((panda$core$String$Index) $tmp1070.value).value;
*(&local1) = $tmp1071;
goto block4;
block5:;
// line 776
panda$core$Int64 $tmp1072 = *(&local0);
panda$core$Int64 $tmp1073 = (panda$core$Int64) {0};
int64_t $tmp1074 = $tmp1072.value;
int64_t $tmp1075 = $tmp1073.value;
bool $tmp1076 = $tmp1074 > $tmp1075;
panda$core$Bit $tmp1077 = (panda$core$Bit) {$tmp1076};
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block6; else goto block8;
block6:;
// line 777
panda$core$String$Index $tmp1079 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1080 = $tmp1079.value;
*(&local1) = $tmp1080;
goto block7;
block8:;
// line 1
// line 780
panda$core$String$Index $tmp1081 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index $tmp1082 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1081);
panda$core$Int64 $tmp1083 = $tmp1082.value;
*(&local1) = $tmp1083;
goto block7;
block7:;
goto block4;
block4:;
// line 783
// line 784
panda$core$String$Index$nullable $tmp1084 = param1.end;
panda$core$Bit $tmp1085 = panda$core$Bit$init$builtin_bit($tmp1084.nonnull);
bool $tmp1086 = $tmp1085.value;
if ($tmp1086) goto block9; else goto block11;
block9:;
// line 785
panda$core$String$Index$nullable $tmp1087 = param1.end;
panda$core$Int64 $tmp1088 = ((panda$core$String$Index) $tmp1087.value).value;
*(&local2) = $tmp1088;
goto block10;
block11:;
// line 787
panda$core$Int64 $tmp1089 = *(&local0);
panda$core$Int64 $tmp1090 = (panda$core$Int64) {0};
int64_t $tmp1091 = $tmp1089.value;
int64_t $tmp1092 = $tmp1090.value;
bool $tmp1093 = $tmp1091 > $tmp1092;
panda$core$Bit $tmp1094 = (panda$core$Bit) {$tmp1093};
bool $tmp1095 = $tmp1094.value;
if ($tmp1095) goto block12; else goto block14;
block12:;
// line 788
panda$core$String$Index $tmp1096 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1097 = $tmp1096.value;
*(&local2) = $tmp1097;
goto block13;
block14:;
// line 1
// line 791
panda$core$String$Index $tmp1098 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64 $tmp1099 = $tmp1098.value;
*(&local2) = $tmp1099;
goto block13;
block13:;
goto block10;
block10:;
// line 794
panda$core$MutableString* $tmp1100 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1100);
*(&local3) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1101 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1101));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
*(&local3) = $tmp1100;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
// line 795
panda$core$Int64 $tmp1102 = param1.step;
panda$core$Int64 $tmp1103 = (panda$core$Int64) {0};
int64_t $tmp1104 = $tmp1102.value;
int64_t $tmp1105 = $tmp1103.value;
bool $tmp1106 = $tmp1104 > $tmp1105;
panda$core$Bit $tmp1107 = (panda$core$Bit) {$tmp1106};
bool $tmp1108 = $tmp1107.value;
if ($tmp1108) goto block15; else goto block17;
block15:;
// line 796
goto block18;
block18:;
panda$core$Int64 $tmp1109 = *(&local1);
panda$core$Int64 $tmp1110 = *(&local2);
int64_t $tmp1111 = $tmp1109.value;
int64_t $tmp1112 = $tmp1110.value;
bool $tmp1113 = $tmp1111 < $tmp1112;
panda$core$Bit $tmp1114 = (panda$core$Bit) {$tmp1113};
bool $tmp1115 = $tmp1114.value;
if ($tmp1115) goto block19; else goto block20;
block19:;
// line 797
panda$core$Char8** $tmp1116 = &param0->data;
panda$core$Char8* $tmp1117 = *$tmp1116;
panda$core$Int64 $tmp1118 = *(&local1);
int64_t $tmp1119 = $tmp1118.value;
panda$core$Char8 $tmp1120 = $tmp1117[$tmp1119];
*(&local4) = $tmp1120;
// line 798
panda$core$MutableString* $tmp1121 = *(&local3);
panda$core$Char8 $tmp1122 = *(&local4);
panda$core$MutableString$append$panda$core$Char8($tmp1121, $tmp1122);
// line 799
panda$core$Int64 $tmp1123 = *(&local1);
panda$core$Int64 $tmp1124 = (panda$core$Int64) {1};
int64_t $tmp1125 = $tmp1123.value;
int64_t $tmp1126 = $tmp1124.value;
int64_t $tmp1127 = $tmp1125 + $tmp1126;
panda$core$Int64 $tmp1128 = (panda$core$Int64) {$tmp1127};
*(&local1) = $tmp1128;
// line 800
panda$core$Char8 $tmp1129 = *(&local4);
uint8_t $tmp1130 = $tmp1129.value;
int64_t $tmp1131 = ((int64_t) $tmp1130) & 255;
bool $tmp1132 = $tmp1131 >= 192;
panda$core$Bit $tmp1133 = panda$core$Bit$init$builtin_bit($tmp1132);
bool $tmp1134 = $tmp1133.value;
if ($tmp1134) goto block21; else goto block22;
block21:;
// line 801
panda$core$MutableString* $tmp1135 = *(&local3);
panda$core$Char8** $tmp1136 = &param0->data;
panda$core$Char8* $tmp1137 = *$tmp1136;
panda$core$Int64 $tmp1138 = *(&local1);
int64_t $tmp1139 = $tmp1138.value;
panda$core$Char8 $tmp1140 = $tmp1137[$tmp1139];
panda$core$MutableString$append$panda$core$Char8($tmp1135, $tmp1140);
// line 802
panda$core$Int64 $tmp1141 = *(&local1);
panda$core$Int64 $tmp1142 = (panda$core$Int64) {1};
int64_t $tmp1143 = $tmp1141.value;
int64_t $tmp1144 = $tmp1142.value;
int64_t $tmp1145 = $tmp1143 + $tmp1144;
panda$core$Int64 $tmp1146 = (panda$core$Int64) {$tmp1145};
*(&local1) = $tmp1146;
goto block22;
block22:;
// line 804
panda$core$Char8 $tmp1147 = *(&local4);
uint8_t $tmp1148 = $tmp1147.value;
int64_t $tmp1149 = ((int64_t) $tmp1148) & 255;
bool $tmp1150 = $tmp1149 >= 224;
panda$core$Bit $tmp1151 = panda$core$Bit$init$builtin_bit($tmp1150);
bool $tmp1152 = $tmp1151.value;
if ($tmp1152) goto block23; else goto block24;
block23:;
// line 805
panda$core$MutableString* $tmp1153 = *(&local3);
panda$core$Char8** $tmp1154 = &param0->data;
panda$core$Char8* $tmp1155 = *$tmp1154;
panda$core$Int64 $tmp1156 = *(&local1);
int64_t $tmp1157 = $tmp1156.value;
panda$core$Char8 $tmp1158 = $tmp1155[$tmp1157];
panda$core$MutableString$append$panda$core$Char8($tmp1153, $tmp1158);
// line 806
panda$core$Int64 $tmp1159 = *(&local1);
panda$core$Int64 $tmp1160 = (panda$core$Int64) {1};
int64_t $tmp1161 = $tmp1159.value;
int64_t $tmp1162 = $tmp1160.value;
int64_t $tmp1163 = $tmp1161 + $tmp1162;
panda$core$Int64 $tmp1164 = (panda$core$Int64) {$tmp1163};
*(&local1) = $tmp1164;
goto block24;
block24:;
// line 808
panda$core$Char8 $tmp1165 = *(&local4);
uint8_t $tmp1166 = $tmp1165.value;
int64_t $tmp1167 = ((int64_t) $tmp1166) & 255;
bool $tmp1168 = $tmp1167 >= 240;
panda$core$Bit $tmp1169 = panda$core$Bit$init$builtin_bit($tmp1168);
bool $tmp1170 = $tmp1169.value;
if ($tmp1170) goto block25; else goto block26;
block25:;
// line 809
panda$core$MutableString* $tmp1171 = *(&local3);
panda$core$Char8** $tmp1172 = &param0->data;
panda$core$Char8* $tmp1173 = *$tmp1172;
panda$core$Int64 $tmp1174 = *(&local1);
int64_t $tmp1175 = $tmp1174.value;
panda$core$Char8 $tmp1176 = $tmp1173[$tmp1175];
panda$core$MutableString$append$panda$core$Char8($tmp1171, $tmp1176);
// line 810
panda$core$Int64 $tmp1177 = *(&local1);
panda$core$Int64 $tmp1178 = (panda$core$Int64) {1};
int64_t $tmp1179 = $tmp1177.value;
int64_t $tmp1180 = $tmp1178.value;
int64_t $tmp1181 = $tmp1179 + $tmp1180;
panda$core$Int64 $tmp1182 = (panda$core$Int64) {$tmp1181};
*(&local1) = $tmp1182;
goto block26;
block26:;
// line 812
panda$core$Int64 $tmp1183 = (panda$core$Int64) {1};
panda$core$Int64 $tmp1184 = *(&local0);
panda$core$Bit $tmp1185 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1186 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1183, $tmp1184, $tmp1185);
panda$core$Int64 $tmp1187 = $tmp1186.min;
*(&local5) = $tmp1187;
panda$core$Int64 $tmp1188 = $tmp1186.max;
panda$core$Bit $tmp1189 = $tmp1186.inclusive;
bool $tmp1190 = $tmp1189.value;
panda$core$Int64 $tmp1191 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1192 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1191);
if ($tmp1190) goto block30; else goto block31;
block30:;
int64_t $tmp1193 = $tmp1187.value;
int64_t $tmp1194 = $tmp1188.value;
bool $tmp1195 = $tmp1193 <= $tmp1194;
panda$core$Bit $tmp1196 = (panda$core$Bit) {$tmp1195};
bool $tmp1197 = $tmp1196.value;
if ($tmp1197) goto block27; else goto block28;
block31:;
int64_t $tmp1198 = $tmp1187.value;
int64_t $tmp1199 = $tmp1188.value;
bool $tmp1200 = $tmp1198 < $tmp1199;
panda$core$Bit $tmp1201 = (panda$core$Bit) {$tmp1200};
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block27; else goto block28;
block27:;
// line 813
panda$core$Int64 $tmp1203 = *(&local1);
panda$core$Int64 $tmp1204 = *(&local2);
int64_t $tmp1205 = $tmp1203.value;
int64_t $tmp1206 = $tmp1204.value;
bool $tmp1207 = $tmp1205 >= $tmp1206;
panda$core$Bit $tmp1208 = (panda$core$Bit) {$tmp1207};
bool $tmp1209 = $tmp1208.value;
if ($tmp1209) goto block32; else goto block33;
block32:;
// line 814
panda$core$MutableString* $tmp1210 = *(&local3);
panda$core$String* $tmp1211 = panda$core$MutableString$convert$R$panda$core$String($tmp1210);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1211));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1211));
panda$core$MutableString* $tmp1212 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1212));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1211;
block33:;
// line 816
panda$core$Int64 $tmp1213 = *(&local1);
panda$core$String$Index $tmp1214 = panda$core$String$Index$init$panda$core$Int64($tmp1213);
panda$core$String$Index $tmp1215 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1214);
panda$core$Int64 $tmp1216 = $tmp1215.value;
*(&local1) = $tmp1216;
goto block29;
block29:;
panda$core$Int64 $tmp1217 = *(&local5);
int64_t $tmp1218 = $tmp1188.value;
int64_t $tmp1219 = $tmp1217.value;
int64_t $tmp1220 = $tmp1218 - $tmp1219;
panda$core$Int64 $tmp1221 = (panda$core$Int64) {$tmp1220};
panda$core$UInt64 $tmp1222 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1221);
if ($tmp1190) goto block35; else goto block36;
block35:;
uint64_t $tmp1223 = $tmp1222.value;
uint64_t $tmp1224 = $tmp1192.value;
bool $tmp1225 = $tmp1223 >= $tmp1224;
panda$core$Bit $tmp1226 = (panda$core$Bit) {$tmp1225};
bool $tmp1227 = $tmp1226.value;
if ($tmp1227) goto block34; else goto block28;
block36:;
uint64_t $tmp1228 = $tmp1222.value;
uint64_t $tmp1229 = $tmp1192.value;
bool $tmp1230 = $tmp1228 > $tmp1229;
panda$core$Bit $tmp1231 = (panda$core$Bit) {$tmp1230};
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block34; else goto block28;
block34:;
int64_t $tmp1233 = $tmp1217.value;
int64_t $tmp1234 = $tmp1191.value;
int64_t $tmp1235 = $tmp1233 + $tmp1234;
panda$core$Int64 $tmp1236 = (panda$core$Int64) {$tmp1235};
*(&local5) = $tmp1236;
goto block27;
block28:;
goto block18;
block20:;
goto block16;
block17:;
// line 1
// line 821
panda$core$Int64 $tmp1237 = param1.step;
panda$core$Int64 $tmp1238 = (panda$core$Int64) {0};
int64_t $tmp1239 = $tmp1237.value;
int64_t $tmp1240 = $tmp1238.value;
bool $tmp1241 = $tmp1239 < $tmp1240;
panda$core$Bit $tmp1242 = (panda$core$Bit) {$tmp1241};
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp1244 = (panda$core$Int64) {821};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1245, $tmp1244);
abort(); // unreachable
block37:;
// line 822
goto block39;
block39:;
panda$core$Int64 $tmp1246 = *(&local1);
panda$core$Int64 $tmp1247 = *(&local2);
int64_t $tmp1248 = $tmp1246.value;
int64_t $tmp1249 = $tmp1247.value;
bool $tmp1250 = $tmp1248 > $tmp1249;
panda$core$Bit $tmp1251 = (panda$core$Bit) {$tmp1250};
bool $tmp1252 = $tmp1251.value;
if ($tmp1252) goto block40; else goto block41;
block40:;
// line 823
panda$core$Char8** $tmp1253 = &param0->data;
panda$core$Char8* $tmp1254 = *$tmp1253;
panda$core$Int64 $tmp1255 = *(&local1);
int64_t $tmp1256 = $tmp1255.value;
panda$core$Char8 $tmp1257 = $tmp1254[$tmp1256];
*(&local6) = $tmp1257;
// line 824
panda$core$MutableString* $tmp1258 = *(&local3);
panda$core$Char8 $tmp1259 = *(&local6);
panda$core$MutableString$append$panda$core$Char8($tmp1258, $tmp1259);
// line 825
panda$core$Int64 $tmp1260 = *(&local1);
*(&local7) = $tmp1260;
// line 826
panda$core$Int64 $tmp1261 = *(&local1);
panda$core$Int64 $tmp1262 = (panda$core$Int64) {1};
int64_t $tmp1263 = $tmp1261.value;
int64_t $tmp1264 = $tmp1262.value;
int64_t $tmp1265 = $tmp1263 + $tmp1264;
panda$core$Int64 $tmp1266 = (panda$core$Int64) {$tmp1265};
*(&local1) = $tmp1266;
// line 827
panda$core$Char8 $tmp1267 = *(&local6);
uint8_t $tmp1268 = $tmp1267.value;
int64_t $tmp1269 = ((int64_t) $tmp1268) & 255;
bool $tmp1270 = $tmp1269 >= 192;
panda$core$Bit $tmp1271 = panda$core$Bit$init$builtin_bit($tmp1270);
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block42; else goto block43;
block42:;
// line 828
panda$core$MutableString* $tmp1273 = *(&local3);
panda$core$Char8** $tmp1274 = &param0->data;
panda$core$Char8* $tmp1275 = *$tmp1274;
panda$core$Int64 $tmp1276 = *(&local1);
int64_t $tmp1277 = $tmp1276.value;
panda$core$Char8 $tmp1278 = $tmp1275[$tmp1277];
panda$core$MutableString$append$panda$core$Char8($tmp1273, $tmp1278);
// line 829
panda$core$Int64 $tmp1279 = *(&local1);
panda$core$Int64 $tmp1280 = (panda$core$Int64) {1};
int64_t $tmp1281 = $tmp1279.value;
int64_t $tmp1282 = $tmp1280.value;
int64_t $tmp1283 = $tmp1281 + $tmp1282;
panda$core$Int64 $tmp1284 = (panda$core$Int64) {$tmp1283};
*(&local1) = $tmp1284;
goto block43;
block43:;
// line 831
panda$core$Char8 $tmp1285 = *(&local6);
uint8_t $tmp1286 = $tmp1285.value;
int64_t $tmp1287 = ((int64_t) $tmp1286) & 255;
bool $tmp1288 = $tmp1287 >= 224;
panda$core$Bit $tmp1289 = panda$core$Bit$init$builtin_bit($tmp1288);
bool $tmp1290 = $tmp1289.value;
if ($tmp1290) goto block44; else goto block45;
block44:;
// line 832
panda$core$MutableString* $tmp1291 = *(&local3);
panda$core$Char8** $tmp1292 = &param0->data;
panda$core$Char8* $tmp1293 = *$tmp1292;
panda$core$Int64 $tmp1294 = *(&local1);
int64_t $tmp1295 = $tmp1294.value;
panda$core$Char8 $tmp1296 = $tmp1293[$tmp1295];
panda$core$MutableString$append$panda$core$Char8($tmp1291, $tmp1296);
// line 833
panda$core$Int64 $tmp1297 = *(&local1);
panda$core$Int64 $tmp1298 = (panda$core$Int64) {1};
int64_t $tmp1299 = $tmp1297.value;
int64_t $tmp1300 = $tmp1298.value;
int64_t $tmp1301 = $tmp1299 + $tmp1300;
panda$core$Int64 $tmp1302 = (panda$core$Int64) {$tmp1301};
*(&local1) = $tmp1302;
goto block45;
block45:;
// line 835
panda$core$Char8 $tmp1303 = *(&local6);
uint8_t $tmp1304 = $tmp1303.value;
int64_t $tmp1305 = ((int64_t) $tmp1304) & 255;
bool $tmp1306 = $tmp1305 >= 240;
panda$core$Bit $tmp1307 = panda$core$Bit$init$builtin_bit($tmp1306);
bool $tmp1308 = $tmp1307.value;
if ($tmp1308) goto block46; else goto block47;
block46:;
// line 836
panda$core$MutableString* $tmp1309 = *(&local3);
panda$core$Char8** $tmp1310 = &param0->data;
panda$core$Char8* $tmp1311 = *$tmp1310;
panda$core$Int64 $tmp1312 = *(&local1);
int64_t $tmp1313 = $tmp1312.value;
panda$core$Char8 $tmp1314 = $tmp1311[$tmp1313];
panda$core$MutableString$append$panda$core$Char8($tmp1309, $tmp1314);
goto block47;
block47:;
// line 838
panda$core$Int64 $tmp1315 = *(&local7);
panda$core$Int64 $tmp1316 = (panda$core$Int64) {1};
int64_t $tmp1317 = $tmp1315.value;
int64_t $tmp1318 = $tmp1316.value;
int64_t $tmp1319 = $tmp1317 - $tmp1318;
panda$core$Int64 $tmp1320 = (panda$core$Int64) {$tmp1319};
*(&local1) = $tmp1320;
// line 839
goto block48;
block48:;
panda$core$Char8** $tmp1321 = &param0->data;
panda$core$Char8* $tmp1322 = *$tmp1321;
panda$core$Int64 $tmp1323 = *(&local1);
int64_t $tmp1324 = $tmp1323.value;
panda$core$Char8 $tmp1325 = $tmp1322[$tmp1324];
uint8_t $tmp1326 = $tmp1325.value;
int64_t $tmp1327 = ((int64_t) $tmp1326) & 255;
bool $tmp1328 = $tmp1327 >= 128;
panda$core$Char8** $tmp1329 = &param0->data;
panda$core$Char8* $tmp1330 = *$tmp1329;
panda$core$Int64 $tmp1331 = *(&local1);
int64_t $tmp1332 = $tmp1331.value;
panda$core$Char8 $tmp1333 = $tmp1330[$tmp1332];
uint8_t $tmp1334 = $tmp1333.value;
int64_t $tmp1335 = ((int64_t) $tmp1334) & 255;
bool $tmp1336 = $tmp1335 < 192;
bool $tmp1337 = $tmp1328 & $tmp1336;
panda$core$Bit $tmp1338 = panda$core$Bit$init$builtin_bit($tmp1337);
bool $tmp1339 = $tmp1338.value;
if ($tmp1339) goto block49; else goto block50;
block49:;
// line 840
panda$core$Int64 $tmp1340 = *(&local1);
panda$core$Int64 $tmp1341 = (panda$core$Int64) {1};
int64_t $tmp1342 = $tmp1340.value;
int64_t $tmp1343 = $tmp1341.value;
int64_t $tmp1344 = $tmp1342 - $tmp1343;
panda$core$Int64 $tmp1345 = (panda$core$Int64) {$tmp1344};
*(&local1) = $tmp1345;
goto block48;
block50:;
// line 842
panda$core$Int64 $tmp1346 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp1347 = *(&local0);
panda$core$Int64 $tmp1348 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp1349 = panda$core$Bit$init$builtin_bit(false);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1350 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1346, $tmp1347, $tmp1348, $tmp1349);
panda$core$Int64 $tmp1351 = $tmp1350.start;
*(&local8) = $tmp1351;
panda$core$Int64 $tmp1352 = $tmp1350.end;
panda$core$Int64 $tmp1353 = $tmp1350.step;
panda$core$UInt64 $tmp1354 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1353);
panda$core$Int64 $tmp1355 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1353);
panda$core$UInt64 $tmp1356 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1355);
panda$core$Bit $tmp1357 = $tmp1350.inclusive;
bool $tmp1358 = $tmp1357.value;
panda$core$Int64 $tmp1359 = (panda$core$Int64) {0};
int64_t $tmp1360 = $tmp1353.value;
int64_t $tmp1361 = $tmp1359.value;
bool $tmp1362 = $tmp1360 >= $tmp1361;
panda$core$Bit $tmp1363 = (panda$core$Bit) {$tmp1362};
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block54; else goto block55;
block54:;
if ($tmp1358) goto block56; else goto block57;
block56:;
int64_t $tmp1365 = $tmp1351.value;
int64_t $tmp1366 = $tmp1352.value;
bool $tmp1367 = $tmp1365 <= $tmp1366;
panda$core$Bit $tmp1368 = (panda$core$Bit) {$tmp1367};
bool $tmp1369 = $tmp1368.value;
if ($tmp1369) goto block51; else goto block52;
block57:;
int64_t $tmp1370 = $tmp1351.value;
int64_t $tmp1371 = $tmp1352.value;
bool $tmp1372 = $tmp1370 < $tmp1371;
panda$core$Bit $tmp1373 = (panda$core$Bit) {$tmp1372};
bool $tmp1374 = $tmp1373.value;
if ($tmp1374) goto block51; else goto block52;
block55:;
if ($tmp1358) goto block58; else goto block59;
block58:;
int64_t $tmp1375 = $tmp1351.value;
int64_t $tmp1376 = $tmp1352.value;
bool $tmp1377 = $tmp1375 >= $tmp1376;
panda$core$Bit $tmp1378 = (panda$core$Bit) {$tmp1377};
bool $tmp1379 = $tmp1378.value;
if ($tmp1379) goto block51; else goto block52;
block59:;
int64_t $tmp1380 = $tmp1351.value;
int64_t $tmp1381 = $tmp1352.value;
bool $tmp1382 = $tmp1380 > $tmp1381;
panda$core$Bit $tmp1383 = (panda$core$Bit) {$tmp1382};
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block51; else goto block52;
block51:;
// line 843
panda$core$Int64 $tmp1385 = *(&local1);
panda$core$Int64 $tmp1386 = *(&local2);
int64_t $tmp1387 = $tmp1385.value;
int64_t $tmp1388 = $tmp1386.value;
bool $tmp1389 = $tmp1387 <= $tmp1388;
panda$core$Bit $tmp1390 = (panda$core$Bit) {$tmp1389};
bool $tmp1391 = $tmp1390.value;
if ($tmp1391) goto block60; else goto block61;
block60:;
// line 844
panda$core$MutableString* $tmp1392 = *(&local3);
panda$core$String* $tmp1393 = panda$core$MutableString$convert$R$panda$core$String($tmp1392);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
panda$core$MutableString* $tmp1394 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1393;
block61:;
// line 846
panda$core$Int64 $tmp1395 = *(&local1);
panda$core$String$Index $tmp1396 = panda$core$String$Index$init$panda$core$Int64($tmp1395);
panda$core$String$Index $tmp1397 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp1396);
panda$core$Int64 $tmp1398 = $tmp1397.value;
*(&local1) = $tmp1398;
goto block53;
block53:;
panda$core$Int64 $tmp1399 = *(&local8);
if ($tmp1364) goto block63; else goto block64;
block63:;
int64_t $tmp1400 = $tmp1352.value;
int64_t $tmp1401 = $tmp1399.value;
int64_t $tmp1402 = $tmp1400 - $tmp1401;
panda$core$Int64 $tmp1403 = (panda$core$Int64) {$tmp1402};
panda$core$UInt64 $tmp1404 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1403);
if ($tmp1358) goto block65; else goto block66;
block65:;
uint64_t $tmp1405 = $tmp1404.value;
uint64_t $tmp1406 = $tmp1354.value;
bool $tmp1407 = $tmp1405 >= $tmp1406;
panda$core$Bit $tmp1408 = (panda$core$Bit) {$tmp1407};
bool $tmp1409 = $tmp1408.value;
if ($tmp1409) goto block62; else goto block52;
block66:;
uint64_t $tmp1410 = $tmp1404.value;
uint64_t $tmp1411 = $tmp1354.value;
bool $tmp1412 = $tmp1410 > $tmp1411;
panda$core$Bit $tmp1413 = (panda$core$Bit) {$tmp1412};
bool $tmp1414 = $tmp1413.value;
if ($tmp1414) goto block62; else goto block52;
block64:;
int64_t $tmp1415 = $tmp1399.value;
int64_t $tmp1416 = $tmp1352.value;
int64_t $tmp1417 = $tmp1415 - $tmp1416;
panda$core$Int64 $tmp1418 = (panda$core$Int64) {$tmp1417};
panda$core$UInt64 $tmp1419 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1418);
if ($tmp1358) goto block67; else goto block68;
block67:;
uint64_t $tmp1420 = $tmp1419.value;
uint64_t $tmp1421 = $tmp1356.value;
bool $tmp1422 = $tmp1420 >= $tmp1421;
panda$core$Bit $tmp1423 = (panda$core$Bit) {$tmp1422};
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block62; else goto block52;
block68:;
uint64_t $tmp1425 = $tmp1419.value;
uint64_t $tmp1426 = $tmp1356.value;
bool $tmp1427 = $tmp1425 > $tmp1426;
panda$core$Bit $tmp1428 = (panda$core$Bit) {$tmp1427};
bool $tmp1429 = $tmp1428.value;
if ($tmp1429) goto block62; else goto block52;
block62:;
int64_t $tmp1430 = $tmp1399.value;
int64_t $tmp1431 = $tmp1353.value;
int64_t $tmp1432 = $tmp1430 + $tmp1431;
panda$core$Int64 $tmp1433 = (panda$core$Int64) {$tmp1432};
*(&local8) = $tmp1433;
goto block51;
block52:;
goto block39;
block41:;
goto block16;
block16:;
// line 850
panda$core$Bit $tmp1434 = param1.inclusive;
bool $tmp1435 = $tmp1434.value;
if ($tmp1435) goto block69; else goto block70;
block69:;
*(&local11) = $tmp1434;
goto block71;
block70:;
panda$core$String$Index$nullable $tmp1436 = param1.end;
panda$core$Bit $tmp1437 = panda$core$Bit$init$builtin_bit(!$tmp1436.nonnull);
*(&local11) = $tmp1437;
goto block71;
block71:;
panda$core$Bit $tmp1438 = *(&local11);
bool $tmp1439 = $tmp1438.value;
if ($tmp1439) goto block72; else goto block73;
block72:;
panda$core$Int64 $tmp1440 = *(&local1);
panda$core$Int64 $tmp1441 = *(&local2);
panda$core$Bit $tmp1442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1440, $tmp1441);
*(&local10) = $tmp1442;
goto block74;
block73:;
*(&local10) = $tmp1438;
goto block74;
block74:;
panda$core$Bit $tmp1443 = *(&local10);
bool $tmp1444 = $tmp1443.value;
if ($tmp1444) goto block75; else goto block76;
block75:;
panda$core$Int64 $tmp1445 = *(&local2);
panda$core$Int64* $tmp1446 = &param0->_length;
panda$core$Int64 $tmp1447 = *$tmp1446;
int64_t $tmp1448 = $tmp1445.value;
int64_t $tmp1449 = $tmp1447.value;
bool $tmp1450 = $tmp1448 < $tmp1449;
panda$core$Bit $tmp1451 = (panda$core$Bit) {$tmp1450};
*(&local9) = $tmp1451;
goto block77;
block76:;
*(&local9) = $tmp1443;
goto block77;
block77:;
panda$core$Bit $tmp1452 = *(&local9);
bool $tmp1453 = $tmp1452.value;
if ($tmp1453) goto block78; else goto block79;
block78:;
// line 851
panda$core$Char8** $tmp1454 = &param0->data;
panda$core$Char8* $tmp1455 = *$tmp1454;
panda$core$Int64 $tmp1456 = *(&local1);
int64_t $tmp1457 = $tmp1456.value;
panda$core$Char8 $tmp1458 = $tmp1455[$tmp1457];
*(&local12) = $tmp1458;
// line 852
panda$core$MutableString* $tmp1459 = *(&local3);
panda$core$Char8 $tmp1460 = *(&local12);
panda$core$MutableString$append$panda$core$Char8($tmp1459, $tmp1460);
// line 853
panda$core$Int64 $tmp1461 = *(&local1);
panda$core$Int64 $tmp1462 = (panda$core$Int64) {1};
int64_t $tmp1463 = $tmp1461.value;
int64_t $tmp1464 = $tmp1462.value;
int64_t $tmp1465 = $tmp1463 + $tmp1464;
panda$core$Int64 $tmp1466 = (panda$core$Int64) {$tmp1465};
*(&local1) = $tmp1466;
// line 854
panda$core$Char8 $tmp1467 = *(&local12);
uint8_t $tmp1468 = $tmp1467.value;
int64_t $tmp1469 = ((int64_t) $tmp1468) & 255;
bool $tmp1470 = $tmp1469 >= 192;
panda$core$Bit $tmp1471 = panda$core$Bit$init$builtin_bit($tmp1470);
bool $tmp1472 = $tmp1471.value;
if ($tmp1472) goto block80; else goto block81;
block80:;
// line 855
panda$core$MutableString* $tmp1473 = *(&local3);
panda$core$Char8** $tmp1474 = &param0->data;
panda$core$Char8* $tmp1475 = *$tmp1474;
panda$core$Int64 $tmp1476 = *(&local1);
int64_t $tmp1477 = $tmp1476.value;
panda$core$Char8 $tmp1478 = $tmp1475[$tmp1477];
panda$core$MutableString$append$panda$core$Char8($tmp1473, $tmp1478);
// line 856
panda$core$Int64 $tmp1479 = *(&local1);
panda$core$Int64 $tmp1480 = (panda$core$Int64) {1};
int64_t $tmp1481 = $tmp1479.value;
int64_t $tmp1482 = $tmp1480.value;
int64_t $tmp1483 = $tmp1481 + $tmp1482;
panda$core$Int64 $tmp1484 = (panda$core$Int64) {$tmp1483};
*(&local1) = $tmp1484;
goto block81;
block81:;
// line 858
panda$core$Char8 $tmp1485 = *(&local12);
uint8_t $tmp1486 = $tmp1485.value;
int64_t $tmp1487 = ((int64_t) $tmp1486) & 255;
bool $tmp1488 = $tmp1487 >= 224;
panda$core$Bit $tmp1489 = panda$core$Bit$init$builtin_bit($tmp1488);
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block82; else goto block83;
block82:;
// line 859
panda$core$MutableString* $tmp1491 = *(&local3);
panda$core$Char8** $tmp1492 = &param0->data;
panda$core$Char8* $tmp1493 = *$tmp1492;
panda$core$Int64 $tmp1494 = *(&local1);
int64_t $tmp1495 = $tmp1494.value;
panda$core$Char8 $tmp1496 = $tmp1493[$tmp1495];
panda$core$MutableString$append$panda$core$Char8($tmp1491, $tmp1496);
// line 860
panda$core$Int64 $tmp1497 = *(&local1);
panda$core$Int64 $tmp1498 = (panda$core$Int64) {1};
int64_t $tmp1499 = $tmp1497.value;
int64_t $tmp1500 = $tmp1498.value;
int64_t $tmp1501 = $tmp1499 + $tmp1500;
panda$core$Int64 $tmp1502 = (panda$core$Int64) {$tmp1501};
*(&local1) = $tmp1502;
goto block83;
block83:;
// line 862
panda$core$Char8 $tmp1503 = *(&local12);
uint8_t $tmp1504 = $tmp1503.value;
int64_t $tmp1505 = ((int64_t) $tmp1504) & 255;
bool $tmp1506 = $tmp1505 >= 240;
panda$core$Bit $tmp1507 = panda$core$Bit$init$builtin_bit($tmp1506);
bool $tmp1508 = $tmp1507.value;
if ($tmp1508) goto block84; else goto block85;
block84:;
// line 863
panda$core$MutableString* $tmp1509 = *(&local3);
panda$core$Char8** $tmp1510 = &param0->data;
panda$core$Char8* $tmp1511 = *$tmp1510;
panda$core$Int64 $tmp1512 = *(&local1);
int64_t $tmp1513 = $tmp1512.value;
panda$core$Char8 $tmp1514 = $tmp1511[$tmp1513];
panda$core$MutableString$append$panda$core$Char8($tmp1509, $tmp1514);
goto block85;
block85:;
goto block79;
block79:;
// line 866
panda$core$MutableString* $tmp1515 = *(&local3);
panda$core$String* $tmp1516 = panda$core$MutableString$finish$R$panda$core$String($tmp1515);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1516));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1516));
panda$core$MutableString* $tmp1517 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1517));
// unreffing result
*(&local3) = ((panda$core$MutableString*) NULL);
return $tmp1516;

}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* param0, panda$core$Range$LTpanda$core$Int64$Q$GT param1) {

panda$core$String$Index$nullable local0;
panda$core$String$Index$nullable local1;
// line 875
// line 876
panda$core$Int64$nullable $tmp1518 = param1.min;
panda$core$Bit $tmp1519 = panda$core$Bit$init$builtin_bit($tmp1518.nonnull);
bool $tmp1520 = $tmp1519.value;
if ($tmp1520) goto block1; else goto block3;
block1:;
// line 877
panda$core$String$Index $tmp1521 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1522 = param1.min;
panda$core$String$Index $tmp1523 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1521, ((panda$core$Int64) $tmp1522.value));
*(&local0) = ((panda$core$String$Index$nullable) { $tmp1523, true });
goto block2;
block3:;
// line 1
// line 880
*(&local0) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 882
// line 883
panda$core$Int64$nullable $tmp1524 = param1.max;
panda$core$Bit $tmp1525 = panda$core$Bit$init$builtin_bit($tmp1524.nonnull);
bool $tmp1526 = $tmp1525.value;
if ($tmp1526) goto block4; else goto block6;
block4:;
// line 884
panda$core$String$Index $tmp1527 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1528 = param1.max;
panda$core$String$Index $tmp1529 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1527, ((panda$core$Int64) $tmp1528.value));
*(&local1) = ((panda$core$String$Index$nullable) { $tmp1529, true });
goto block5;
block6:;
// line 1
// line 887
*(&local1) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 889
panda$core$String$Index$nullable $tmp1530 = *(&local0);
panda$core$String$Index$nullable $tmp1531 = *(&local1);
panda$core$Bit $tmp1532 = param1.inclusive;
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1533 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit($tmp1530, $tmp1531, $tmp1532);
panda$core$String* $tmp1534 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp1533);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1534));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1534));
return $tmp1534;

}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* param0, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param1) {

panda$core$String$Index$nullable local0;
panda$core$String$Index$nullable local1;
// line 898
// line 899
panda$core$Int64$nullable $tmp1535 = param1.start;
panda$core$Bit $tmp1536 = panda$core$Bit$init$builtin_bit($tmp1535.nonnull);
bool $tmp1537 = $tmp1536.value;
if ($tmp1537) goto block1; else goto block3;
block1:;
// line 900
panda$core$String$Index $tmp1538 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1539 = param1.start;
panda$core$String$Index $tmp1540 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1538, ((panda$core$Int64) $tmp1539.value));
*(&local0) = ((panda$core$String$Index$nullable) { $tmp1540, true });
goto block2;
block3:;
// line 1
// line 903
*(&local0) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 905
// line 906
panda$core$Int64$nullable $tmp1541 = param1.end;
panda$core$Bit $tmp1542 = panda$core$Bit$init$builtin_bit($tmp1541.nonnull);
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block4; else goto block6;
block4:;
// line 907
panda$core$String$Index $tmp1544 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$Int64$nullable $tmp1545 = param1.end;
panda$core$String$Index $tmp1546 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(param0, $tmp1544, ((panda$core$Int64) $tmp1545.value));
*(&local1) = ((panda$core$String$Index$nullable) { $tmp1546, true });
goto block5;
block6:;
// line 1
// line 910
*(&local1) = ((panda$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 912
panda$core$String$Index$nullable $tmp1547 = *(&local0);
panda$core$String$Index$nullable $tmp1548 = *(&local1);
panda$core$Int64 $tmp1549 = param1.step;
panda$core$Bit $tmp1550 = param1.inclusive;
panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp1551 = panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit($tmp1547, $tmp1548, $tmp1549, $tmp1550);
panda$core$String* $tmp1552 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(param0, $tmp1551);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1552));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1552));
return $tmp1552;

}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* param0, panda$core$Char8 param1) {

panda$core$Int64 local0;
// line 919
panda$core$Int64 $tmp1553 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1554 = &param0->_length;
panda$core$Int64 $tmp1555 = *$tmp1554;
panda$core$Bit $tmp1556 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1557 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1553, $tmp1555, $tmp1556);
panda$core$Int64 $tmp1558 = $tmp1557.min;
*(&local0) = $tmp1558;
panda$core$Int64 $tmp1559 = $tmp1557.max;
panda$core$Bit $tmp1560 = $tmp1557.inclusive;
bool $tmp1561 = $tmp1560.value;
panda$core$Int64 $tmp1562 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1563 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1562);
if ($tmp1561) goto block4; else goto block5;
block4:;
int64_t $tmp1564 = $tmp1558.value;
int64_t $tmp1565 = $tmp1559.value;
bool $tmp1566 = $tmp1564 <= $tmp1565;
panda$core$Bit $tmp1567 = (panda$core$Bit) {$tmp1566};
bool $tmp1568 = $tmp1567.value;
if ($tmp1568) goto block1; else goto block2;
block5:;
int64_t $tmp1569 = $tmp1558.value;
int64_t $tmp1570 = $tmp1559.value;
bool $tmp1571 = $tmp1569 < $tmp1570;
panda$core$Bit $tmp1572 = (panda$core$Bit) {$tmp1571};
bool $tmp1573 = $tmp1572.value;
if ($tmp1573) goto block1; else goto block2;
block1:;
// line 920
panda$core$Char8** $tmp1574 = &param0->data;
panda$core$Char8* $tmp1575 = *$tmp1574;
panda$core$Int64 $tmp1576 = *(&local0);
int64_t $tmp1577 = $tmp1576.value;
panda$core$Char8 $tmp1578 = $tmp1575[$tmp1577];
panda$core$Bit $tmp1579 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp1578, param1);
bool $tmp1580 = $tmp1579.value;
if ($tmp1580) goto block6; else goto block7;
block6:;
// line 921
panda$core$Bit $tmp1581 = panda$core$Bit$init$builtin_bit(true);
return $tmp1581;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp1582 = *(&local0);
int64_t $tmp1583 = $tmp1559.value;
int64_t $tmp1584 = $tmp1582.value;
int64_t $tmp1585 = $tmp1583 - $tmp1584;
panda$core$Int64 $tmp1586 = (panda$core$Int64) {$tmp1585};
panda$core$UInt64 $tmp1587 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1586);
if ($tmp1561) goto block9; else goto block10;
block9:;
uint64_t $tmp1588 = $tmp1587.value;
uint64_t $tmp1589 = $tmp1563.value;
bool $tmp1590 = $tmp1588 >= $tmp1589;
panda$core$Bit $tmp1591 = (panda$core$Bit) {$tmp1590};
bool $tmp1592 = $tmp1591.value;
if ($tmp1592) goto block8; else goto block2;
block10:;
uint64_t $tmp1593 = $tmp1587.value;
uint64_t $tmp1594 = $tmp1563.value;
bool $tmp1595 = $tmp1593 > $tmp1594;
panda$core$Bit $tmp1596 = (panda$core$Bit) {$tmp1595};
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block8; else goto block2;
block8:;
int64_t $tmp1598 = $tmp1582.value;
int64_t $tmp1599 = $tmp1562.value;
int64_t $tmp1600 = $tmp1598 + $tmp1599;
panda$core$Int64 $tmp1601 = (panda$core$Int64) {$tmp1600};
*(&local0) = $tmp1601;
goto block1;
block2:;
// line 924
panda$core$Bit $tmp1602 = panda$core$Bit$init$builtin_bit(false);
return $tmp1602;

}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* param0, panda$core$String* param1) {

// line 931
panda$core$String$Index$nullable $tmp1603 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(param0, param1);
panda$core$Bit $tmp1604 = panda$core$Bit$init$builtin_bit($tmp1603.nonnull);
return $tmp1604;

}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1) {

// line 942
panda$core$String$Index $tmp1605 = panda$core$String$get_start$R$panda$core$String$Index(param0);
panda$core$String$Index$nullable $tmp1606 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp1605);
return $tmp1606;

}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1, panda$core$String$Index param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 954
panda$core$Int64* $tmp1607 = &param0->_length;
panda$core$Int64 $tmp1608 = *$tmp1607;
panda$core$Int64* $tmp1609 = &param1->_length;
panda$core$Int64 $tmp1610 = *$tmp1609;
int64_t $tmp1611 = $tmp1608.value;
int64_t $tmp1612 = $tmp1610.value;
bool $tmp1613 = $tmp1611 < $tmp1612;
panda$core$Bit $tmp1614 = (panda$core$Bit) {$tmp1613};
bool $tmp1615 = $tmp1614.value;
if ($tmp1615) goto block1; else goto block2;
block1:;
// line 955
return ((panda$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 957
panda$core$Int64 $tmp1616 = param2.value;
panda$core$Int64* $tmp1617 = &param0->_length;
panda$core$Int64 $tmp1618 = *$tmp1617;
panda$core$Int64* $tmp1619 = &param1->_length;
panda$core$Int64 $tmp1620 = *$tmp1619;
int64_t $tmp1621 = $tmp1618.value;
int64_t $tmp1622 = $tmp1620.value;
int64_t $tmp1623 = $tmp1621 - $tmp1622;
panda$core$Int64 $tmp1624 = (panda$core$Int64) {$tmp1623};
panda$core$Bit $tmp1625 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$Int64$GT $tmp1626 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1616, $tmp1624, $tmp1625);
panda$core$Int64 $tmp1627 = $tmp1626.min;
*(&local0) = $tmp1627;
panda$core$Int64 $tmp1628 = $tmp1626.max;
panda$core$Bit $tmp1629 = $tmp1626.inclusive;
bool $tmp1630 = $tmp1629.value;
panda$core$Int64 $tmp1631 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1632 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1631);
if ($tmp1630) goto block6; else goto block7;
block6:;
int64_t $tmp1633 = $tmp1627.value;
int64_t $tmp1634 = $tmp1628.value;
bool $tmp1635 = $tmp1633 <= $tmp1634;
panda$core$Bit $tmp1636 = (panda$core$Bit) {$tmp1635};
bool $tmp1637 = $tmp1636.value;
if ($tmp1637) goto block3; else goto block4;
block7:;
int64_t $tmp1638 = $tmp1627.value;
int64_t $tmp1639 = $tmp1628.value;
bool $tmp1640 = $tmp1638 < $tmp1639;
panda$core$Bit $tmp1641 = (panda$core$Bit) {$tmp1640};
bool $tmp1642 = $tmp1641.value;
if ($tmp1642) goto block3; else goto block4;
block3:;
// line 958
panda$core$Int64 $tmp1643 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1644 = &param1->_length;
panda$core$Int64 $tmp1645 = *$tmp1644;
panda$core$Bit $tmp1646 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1647 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1643, $tmp1645, $tmp1646);
panda$core$Int64 $tmp1648 = $tmp1647.min;
*(&local1) = $tmp1648;
panda$core$Int64 $tmp1649 = $tmp1647.max;
panda$core$Bit $tmp1650 = $tmp1647.inclusive;
bool $tmp1651 = $tmp1650.value;
panda$core$Int64 $tmp1652 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1653 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1652);
if ($tmp1651) goto block11; else goto block12;
block11:;
int64_t $tmp1654 = $tmp1648.value;
int64_t $tmp1655 = $tmp1649.value;
bool $tmp1656 = $tmp1654 <= $tmp1655;
panda$core$Bit $tmp1657 = (panda$core$Bit) {$tmp1656};
bool $tmp1658 = $tmp1657.value;
if ($tmp1658) goto block8; else goto block9;
block12:;
int64_t $tmp1659 = $tmp1648.value;
int64_t $tmp1660 = $tmp1649.value;
bool $tmp1661 = $tmp1659 < $tmp1660;
panda$core$Bit $tmp1662 = (panda$core$Bit) {$tmp1661};
bool $tmp1663 = $tmp1662.value;
if ($tmp1663) goto block8; else goto block9;
block8:;
// line 959
panda$core$Char8** $tmp1664 = &param0->data;
panda$core$Char8* $tmp1665 = *$tmp1664;
panda$core$Int64 $tmp1666 = *(&local0);
panda$core$Int64 $tmp1667 = *(&local1);
int64_t $tmp1668 = $tmp1666.value;
int64_t $tmp1669 = $tmp1667.value;
int64_t $tmp1670 = $tmp1668 + $tmp1669;
panda$core$Int64 $tmp1671 = (panda$core$Int64) {$tmp1670};
int64_t $tmp1672 = $tmp1671.value;
panda$core$Char8 $tmp1673 = $tmp1665[$tmp1672];
panda$core$Char8** $tmp1674 = &param1->data;
panda$core$Char8* $tmp1675 = *$tmp1674;
panda$core$Int64 $tmp1676 = *(&local1);
int64_t $tmp1677 = $tmp1676.value;
panda$core$Char8 $tmp1678 = $tmp1675[$tmp1677];
panda$core$Bit $tmp1679 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp1673, $tmp1678);
bool $tmp1680 = $tmp1679.value;
if ($tmp1680) goto block13; else goto block14;
block13:;
// line 960
goto block5;
block14:;
goto block10;
block10:;
panda$core$Int64 $tmp1681 = *(&local1);
int64_t $tmp1682 = $tmp1649.value;
int64_t $tmp1683 = $tmp1681.value;
int64_t $tmp1684 = $tmp1682 - $tmp1683;
panda$core$Int64 $tmp1685 = (panda$core$Int64) {$tmp1684};
panda$core$UInt64 $tmp1686 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1685);
if ($tmp1651) goto block16; else goto block17;
block16:;
uint64_t $tmp1687 = $tmp1686.value;
uint64_t $tmp1688 = $tmp1653.value;
bool $tmp1689 = $tmp1687 >= $tmp1688;
panda$core$Bit $tmp1690 = (panda$core$Bit) {$tmp1689};
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block15; else goto block9;
block17:;
uint64_t $tmp1692 = $tmp1686.value;
uint64_t $tmp1693 = $tmp1653.value;
bool $tmp1694 = $tmp1692 > $tmp1693;
panda$core$Bit $tmp1695 = (panda$core$Bit) {$tmp1694};
bool $tmp1696 = $tmp1695.value;
if ($tmp1696) goto block15; else goto block9;
block15:;
int64_t $tmp1697 = $tmp1681.value;
int64_t $tmp1698 = $tmp1652.value;
int64_t $tmp1699 = $tmp1697 + $tmp1698;
panda$core$Int64 $tmp1700 = (panda$core$Int64) {$tmp1699};
*(&local1) = $tmp1700;
goto block8;
block9:;
// line 963
panda$core$Int64 $tmp1701 = *(&local0);
panda$core$String$Index $tmp1702 = panda$core$String$Index$init$panda$core$Int64($tmp1701);
return ((panda$core$String$Index$nullable) { ((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp1702, true }).value), true });
block5:;
panda$core$Int64 $tmp1703 = *(&local0);
int64_t $tmp1704 = $tmp1628.value;
int64_t $tmp1705 = $tmp1703.value;
int64_t $tmp1706 = $tmp1704 - $tmp1705;
panda$core$Int64 $tmp1707 = (panda$core$Int64) {$tmp1706};
panda$core$UInt64 $tmp1708 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1707);
if ($tmp1630) goto block19; else goto block20;
block19:;
uint64_t $tmp1709 = $tmp1708.value;
uint64_t $tmp1710 = $tmp1632.value;
bool $tmp1711 = $tmp1709 >= $tmp1710;
panda$core$Bit $tmp1712 = (panda$core$Bit) {$tmp1711};
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block18; else goto block4;
block20:;
uint64_t $tmp1714 = $tmp1708.value;
uint64_t $tmp1715 = $tmp1632.value;
bool $tmp1716 = $tmp1714 > $tmp1715;
panda$core$Bit $tmp1717 = (panda$core$Bit) {$tmp1716};
bool $tmp1718 = $tmp1717.value;
if ($tmp1718) goto block18; else goto block4;
block18:;
int64_t $tmp1719 = $tmp1703.value;
int64_t $tmp1720 = $tmp1631.value;
int64_t $tmp1721 = $tmp1719 + $tmp1720;
panda$core$Int64 $tmp1722 = (panda$core$Int64) {$tmp1721};
*(&local0) = $tmp1722;
goto block3;
block4:;
// line 965
return ((panda$core$String$Index$nullable) { .nonnull = false });

}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1) {

// line 976
panda$core$String$Index $tmp1723 = panda$core$String$get_end$R$panda$core$String$Index(param0);
panda$core$String$Index$nullable $tmp1724 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp1723);
return $tmp1724;

}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* param0, panda$core$String* param1, panda$core$String$Index param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 988
panda$core$Int64* $tmp1725 = &param0->_length;
panda$core$Int64 $tmp1726 = *$tmp1725;
panda$core$Int64* $tmp1727 = &param1->_length;
panda$core$Int64 $tmp1728 = *$tmp1727;
int64_t $tmp1729 = $tmp1726.value;
int64_t $tmp1730 = $tmp1728.value;
bool $tmp1731 = $tmp1729 < $tmp1730;
panda$core$Bit $tmp1732 = (panda$core$Bit) {$tmp1731};
bool $tmp1733 = $tmp1732.value;
if ($tmp1733) goto block1; else goto block2;
block1:;
// line 989
return ((panda$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 991
panda$core$Int64 $tmp1734 = param2.value;
panda$core$Int64* $tmp1735 = &param0->_length;
panda$core$Int64 $tmp1736 = *$tmp1735;
panda$core$Int64* $tmp1737 = &param1->_length;
panda$core$Int64 $tmp1738 = *$tmp1737;
int64_t $tmp1739 = $tmp1736.value;
int64_t $tmp1740 = $tmp1738.value;
int64_t $tmp1741 = $tmp1739 - $tmp1740;
panda$core$Int64 $tmp1742 = (panda$core$Int64) {$tmp1741};
panda$core$Int64 $tmp1743 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp1734, $tmp1742);
*(&local0) = $tmp1743;
// line 992
panda$core$Int64 $tmp1744 = *(&local0);
panda$core$Int64 $tmp1745 = (panda$core$Int64) {0};
panda$core$Int64 $tmp1746 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp1747 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1748 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1744, $tmp1745, $tmp1746, $tmp1747);
panda$core$Int64 $tmp1749 = $tmp1748.start;
*(&local1) = $tmp1749;
panda$core$Int64 $tmp1750 = $tmp1748.end;
panda$core$Int64 $tmp1751 = $tmp1748.step;
panda$core$UInt64 $tmp1752 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1751);
panda$core$Int64 $tmp1753 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1751);
panda$core$UInt64 $tmp1754 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1753);
panda$core$Bit $tmp1755 = $tmp1748.inclusive;
bool $tmp1756 = $tmp1755.value;
panda$core$Int64 $tmp1757 = (panda$core$Int64) {0};
int64_t $tmp1758 = $tmp1751.value;
int64_t $tmp1759 = $tmp1757.value;
bool $tmp1760 = $tmp1758 >= $tmp1759;
panda$core$Bit $tmp1761 = (panda$core$Bit) {$tmp1760};
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block6; else goto block7;
block6:;
if ($tmp1756) goto block8; else goto block9;
block8:;
int64_t $tmp1763 = $tmp1749.value;
int64_t $tmp1764 = $tmp1750.value;
bool $tmp1765 = $tmp1763 <= $tmp1764;
panda$core$Bit $tmp1766 = (panda$core$Bit) {$tmp1765};
bool $tmp1767 = $tmp1766.value;
if ($tmp1767) goto block3; else goto block4;
block9:;
int64_t $tmp1768 = $tmp1749.value;
int64_t $tmp1769 = $tmp1750.value;
bool $tmp1770 = $tmp1768 < $tmp1769;
panda$core$Bit $tmp1771 = (panda$core$Bit) {$tmp1770};
bool $tmp1772 = $tmp1771.value;
if ($tmp1772) goto block3; else goto block4;
block7:;
if ($tmp1756) goto block10; else goto block11;
block10:;
int64_t $tmp1773 = $tmp1749.value;
int64_t $tmp1774 = $tmp1750.value;
bool $tmp1775 = $tmp1773 >= $tmp1774;
panda$core$Bit $tmp1776 = (panda$core$Bit) {$tmp1775};
bool $tmp1777 = $tmp1776.value;
if ($tmp1777) goto block3; else goto block4;
block11:;
int64_t $tmp1778 = $tmp1749.value;
int64_t $tmp1779 = $tmp1750.value;
bool $tmp1780 = $tmp1778 > $tmp1779;
panda$core$Bit $tmp1781 = (panda$core$Bit) {$tmp1780};
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block3; else goto block4;
block3:;
// line 993
panda$core$Int64 $tmp1783 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1784 = &param1->_length;
panda$core$Int64 $tmp1785 = *$tmp1784;
panda$core$Bit $tmp1786 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1787 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1783, $tmp1785, $tmp1786);
panda$core$Int64 $tmp1788 = $tmp1787.min;
*(&local2) = $tmp1788;
panda$core$Int64 $tmp1789 = $tmp1787.max;
panda$core$Bit $tmp1790 = $tmp1787.inclusive;
bool $tmp1791 = $tmp1790.value;
panda$core$Int64 $tmp1792 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1793 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1792);
if ($tmp1791) goto block15; else goto block16;
block15:;
int64_t $tmp1794 = $tmp1788.value;
int64_t $tmp1795 = $tmp1789.value;
bool $tmp1796 = $tmp1794 <= $tmp1795;
panda$core$Bit $tmp1797 = (panda$core$Bit) {$tmp1796};
bool $tmp1798 = $tmp1797.value;
if ($tmp1798) goto block12; else goto block13;
block16:;
int64_t $tmp1799 = $tmp1788.value;
int64_t $tmp1800 = $tmp1789.value;
bool $tmp1801 = $tmp1799 < $tmp1800;
panda$core$Bit $tmp1802 = (panda$core$Bit) {$tmp1801};
bool $tmp1803 = $tmp1802.value;
if ($tmp1803) goto block12; else goto block13;
block12:;
// line 994
panda$core$Char8** $tmp1804 = &param0->data;
panda$core$Char8* $tmp1805 = *$tmp1804;
panda$core$Int64 $tmp1806 = *(&local1);
panda$core$Int64 $tmp1807 = *(&local2);
int64_t $tmp1808 = $tmp1806.value;
int64_t $tmp1809 = $tmp1807.value;
int64_t $tmp1810 = $tmp1808 + $tmp1809;
panda$core$Int64 $tmp1811 = (panda$core$Int64) {$tmp1810};
int64_t $tmp1812 = $tmp1811.value;
panda$core$Char8 $tmp1813 = $tmp1805[$tmp1812];
panda$core$Char8** $tmp1814 = &param1->data;
panda$core$Char8* $tmp1815 = *$tmp1814;
panda$core$Int64 $tmp1816 = *(&local2);
int64_t $tmp1817 = $tmp1816.value;
panda$core$Char8 $tmp1818 = $tmp1815[$tmp1817];
panda$core$Bit $tmp1819 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit($tmp1813, $tmp1818);
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block17; else goto block18;
block17:;
// line 995
goto block5;
block18:;
goto block14;
block14:;
panda$core$Int64 $tmp1821 = *(&local2);
int64_t $tmp1822 = $tmp1789.value;
int64_t $tmp1823 = $tmp1821.value;
int64_t $tmp1824 = $tmp1822 - $tmp1823;
panda$core$Int64 $tmp1825 = (panda$core$Int64) {$tmp1824};
panda$core$UInt64 $tmp1826 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1825);
if ($tmp1791) goto block20; else goto block21;
block20:;
uint64_t $tmp1827 = $tmp1826.value;
uint64_t $tmp1828 = $tmp1793.value;
bool $tmp1829 = $tmp1827 >= $tmp1828;
panda$core$Bit $tmp1830 = (panda$core$Bit) {$tmp1829};
bool $tmp1831 = $tmp1830.value;
if ($tmp1831) goto block19; else goto block13;
block21:;
uint64_t $tmp1832 = $tmp1826.value;
uint64_t $tmp1833 = $tmp1793.value;
bool $tmp1834 = $tmp1832 > $tmp1833;
panda$core$Bit $tmp1835 = (panda$core$Bit) {$tmp1834};
bool $tmp1836 = $tmp1835.value;
if ($tmp1836) goto block19; else goto block13;
block19:;
int64_t $tmp1837 = $tmp1821.value;
int64_t $tmp1838 = $tmp1792.value;
int64_t $tmp1839 = $tmp1837 + $tmp1838;
panda$core$Int64 $tmp1840 = (panda$core$Int64) {$tmp1839};
*(&local2) = $tmp1840;
goto block12;
block13:;
// line 998
panda$core$Int64 $tmp1841 = *(&local1);
panda$core$String$Index $tmp1842 = panda$core$String$Index$init$panda$core$Int64($tmp1841);
return ((panda$core$String$Index$nullable) { ((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp1842, true }).value), true });
block5:;
panda$core$Int64 $tmp1843 = *(&local1);
if ($tmp1762) goto block23; else goto block24;
block23:;
int64_t $tmp1844 = $tmp1750.value;
int64_t $tmp1845 = $tmp1843.value;
int64_t $tmp1846 = $tmp1844 - $tmp1845;
panda$core$Int64 $tmp1847 = (panda$core$Int64) {$tmp1846};
panda$core$UInt64 $tmp1848 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1847);
if ($tmp1756) goto block25; else goto block26;
block25:;
uint64_t $tmp1849 = $tmp1848.value;
uint64_t $tmp1850 = $tmp1752.value;
bool $tmp1851 = $tmp1849 >= $tmp1850;
panda$core$Bit $tmp1852 = (panda$core$Bit) {$tmp1851};
bool $tmp1853 = $tmp1852.value;
if ($tmp1853) goto block22; else goto block4;
block26:;
uint64_t $tmp1854 = $tmp1848.value;
uint64_t $tmp1855 = $tmp1752.value;
bool $tmp1856 = $tmp1854 > $tmp1855;
panda$core$Bit $tmp1857 = (panda$core$Bit) {$tmp1856};
bool $tmp1858 = $tmp1857.value;
if ($tmp1858) goto block22; else goto block4;
block24:;
int64_t $tmp1859 = $tmp1843.value;
int64_t $tmp1860 = $tmp1750.value;
int64_t $tmp1861 = $tmp1859 - $tmp1860;
panda$core$Int64 $tmp1862 = (panda$core$Int64) {$tmp1861};
panda$core$UInt64 $tmp1863 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1862);
if ($tmp1756) goto block27; else goto block28;
block27:;
uint64_t $tmp1864 = $tmp1863.value;
uint64_t $tmp1865 = $tmp1754.value;
bool $tmp1866 = $tmp1864 >= $tmp1865;
panda$core$Bit $tmp1867 = (panda$core$Bit) {$tmp1866};
bool $tmp1868 = $tmp1867.value;
if ($tmp1868) goto block22; else goto block4;
block28:;
uint64_t $tmp1869 = $tmp1863.value;
uint64_t $tmp1870 = $tmp1754.value;
bool $tmp1871 = $tmp1869 > $tmp1870;
panda$core$Bit $tmp1872 = (panda$core$Bit) {$tmp1871};
bool $tmp1873 = $tmp1872.value;
if ($tmp1873) goto block22; else goto block4;
block22:;
int64_t $tmp1874 = $tmp1843.value;
int64_t $tmp1875 = $tmp1751.value;
int64_t $tmp1876 = $tmp1874 + $tmp1875;
panda$core$Int64 $tmp1877 = (panda$core$Int64) {$tmp1876};
*(&local1) = $tmp1877;
goto block3;
block4:;
// line 1000
return ((panda$core$String$Index$nullable) { .nonnull = false });

}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1011
panda$core$Matcher* $tmp1878 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
panda$core$Bit $tmp1879;
panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1879, $tmp1878);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1878));
return $tmp1879;

}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1022
panda$core$Matcher* $tmp1880 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
panda$core$Bit $tmp1881 = panda$core$Matcher$find$R$panda$core$Bit($tmp1880);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1880));
return $tmp1881;

}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* param0, panda$core$RegularExpression* param1) {

panda$core$Matcher* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$core$Int64 local2;
// line 1036
panda$core$Matcher* $tmp1882 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local0) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp1883 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1883));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1882));
*(&local0) = $tmp1882;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1882));
// line 1037
panda$core$Matcher* $tmp1884 = *(&local0);
panda$core$Bit $tmp1885;
panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1885, $tmp1884);
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block1; else goto block2;
block1:;
// line 1038
panda$collections$Array* $tmp1887 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1887);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1888 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1888));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1887));
*(&local1) = $tmp1887;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1887));
// line 1039
panda$core$Int64 $tmp1889 = (panda$core$Int64) {1};
panda$core$Matcher* $tmp1890 = *(&local0);
panda$core$Int64 $tmp1891;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1891, $tmp1890);
panda$core$Bit $tmp1892 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1893 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1889, $tmp1891, $tmp1892);
panda$core$Int64 $tmp1894 = $tmp1893.min;
*(&local2) = $tmp1894;
panda$core$Int64 $tmp1895 = $tmp1893.max;
panda$core$Bit $tmp1896 = $tmp1893.inclusive;
bool $tmp1897 = $tmp1896.value;
panda$core$Int64 $tmp1898 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1899 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1898);
if ($tmp1897) goto block6; else goto block7;
block6:;
int64_t $tmp1900 = $tmp1894.value;
int64_t $tmp1901 = $tmp1895.value;
bool $tmp1902 = $tmp1900 <= $tmp1901;
panda$core$Bit $tmp1903 = (panda$core$Bit) {$tmp1902};
bool $tmp1904 = $tmp1903.value;
if ($tmp1904) goto block3; else goto block4;
block7:;
int64_t $tmp1905 = $tmp1894.value;
int64_t $tmp1906 = $tmp1895.value;
bool $tmp1907 = $tmp1905 < $tmp1906;
panda$core$Bit $tmp1908 = (panda$core$Bit) {$tmp1907};
bool $tmp1909 = $tmp1908.value;
if ($tmp1909) goto block3; else goto block4;
block3:;
// line 1040
panda$collections$Array* $tmp1910 = *(&local1);
panda$core$Matcher* $tmp1911 = *(&local0);
panda$core$Int64 $tmp1912 = *(&local2);
panda$core$String* $tmp1913 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp1911, $tmp1912);
panda$collections$Array$add$panda$collections$Array$T($tmp1910, ((panda$core$Object*) $tmp1913));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1913));
goto block5;
block5:;
panda$core$Int64 $tmp1914 = *(&local2);
int64_t $tmp1915 = $tmp1895.value;
int64_t $tmp1916 = $tmp1914.value;
int64_t $tmp1917 = $tmp1915 - $tmp1916;
panda$core$Int64 $tmp1918 = (panda$core$Int64) {$tmp1917};
panda$core$UInt64 $tmp1919 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1918);
if ($tmp1897) goto block9; else goto block10;
block9:;
uint64_t $tmp1920 = $tmp1919.value;
uint64_t $tmp1921 = $tmp1899.value;
bool $tmp1922 = $tmp1920 >= $tmp1921;
panda$core$Bit $tmp1923 = (panda$core$Bit) {$tmp1922};
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block8; else goto block4;
block10:;
uint64_t $tmp1925 = $tmp1919.value;
uint64_t $tmp1926 = $tmp1899.value;
bool $tmp1927 = $tmp1925 > $tmp1926;
panda$core$Bit $tmp1928 = (panda$core$Bit) {$tmp1927};
bool $tmp1929 = $tmp1928.value;
if ($tmp1929) goto block8; else goto block4;
block8:;
int64_t $tmp1930 = $tmp1914.value;
int64_t $tmp1931 = $tmp1898.value;
int64_t $tmp1932 = $tmp1930 + $tmp1931;
panda$core$Int64 $tmp1933 = (panda$core$Int64) {$tmp1932};
*(&local2) = $tmp1933;
goto block3;
block4:;
// line 1042
panda$collections$Array* $tmp1934 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp1934)));
panda$collections$Array* $tmp1935 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1935));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Matcher* $tmp1936 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1936));
// unreffing matcher
*(&local0) = ((panda$core$Matcher*) NULL);
return ((panda$collections$ListView*) $tmp1934);
block2:;
// line 1044
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) NULL)));
panda$core$Matcher* $tmp1937 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1937));
// unreffing matcher
*(&local0) = ((panda$core$Matcher*) NULL);
return ((panda$collections$ListView*) NULL);

}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$String* param1, panda$core$String* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$String$Index local1;
panda$core$String$Index$nullable local2;
// line 1055
panda$core$Bit $tmp1938 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param1, &$s1939);
bool $tmp1940 = $tmp1938.value;
if ($tmp1940) goto block1; else goto block2;
block1:;
// line 1056
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1058
panda$core$MutableString* $tmp1941 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1941);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1942 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1942));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1941));
*(&local0) = $tmp1941;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1941));
// line 1059
panda$core$String$Index $tmp1943 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local1) = $tmp1943;
// line 1060
goto block3;
block3:;
// line 1061
panda$core$String$Index $tmp1944 = *(&local1);
panda$core$String$Index$nullable $tmp1945 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp1944);
*(&local2) = $tmp1945;
// line 1062
panda$core$String$Index$nullable $tmp1946 = *(&local2);
panda$core$Bit $tmp1947 = panda$core$Bit$init$builtin_bit(!$tmp1946.nonnull);
bool $tmp1948 = $tmp1947.value;
if ($tmp1948) goto block5; else goto block6;
block5:;
// line 1063
panda$core$MutableString* $tmp1949 = *(&local0);
panda$core$String$Index $tmp1950 = *(&local1);
panda$core$Bit $tmp1951 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1952 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp1950, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1951);
panda$core$String* $tmp1953 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp1952);
panda$core$MutableString$append$panda$core$String($tmp1949, $tmp1953);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
// line 1064
goto block4;
block6:;
// line 1066
panda$core$MutableString* $tmp1954 = *(&local0);
panda$core$String$Index $tmp1955 = *(&local1);
panda$core$String$Index$nullable $tmp1956 = *(&local2);
panda$core$Bit $tmp1957 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1958 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1955, ((panda$core$String$Index) $tmp1956.value), $tmp1957);
panda$core$String* $tmp1959 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp1958);
panda$core$MutableString$append$panda$core$String($tmp1954, $tmp1959);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1959));
// line 1067
panda$core$MutableString* $tmp1960 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp1960, param2);
// line 1068
panda$core$String$Index$nullable $tmp1961 = *(&local2);
panda$core$Int64 $tmp1962 = ((panda$core$String$Index) $tmp1961.value).value;
panda$core$Int64* $tmp1963 = &param1->_length;
panda$core$Int64 $tmp1964 = *$tmp1963;
int64_t $tmp1965 = $tmp1962.value;
int64_t $tmp1966 = $tmp1964.value;
int64_t $tmp1967 = $tmp1965 + $tmp1966;
panda$core$Int64 $tmp1968 = (panda$core$Int64) {$tmp1967};
panda$core$String$Index $tmp1969 = panda$core$String$Index$init$panda$core$Int64($tmp1968);
*(&local1) = $tmp1969;
goto block3;
block4:;
// line 1070
panda$core$MutableString* $tmp1970 = *(&local0);
panda$core$String* $tmp1971 = panda$core$MutableString$finish$R$panda$core$String($tmp1970);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1971));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1971));
panda$core$MutableString* $tmp1972 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp1971;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$String* param2) {

// line 1084
panda$core$Bit $tmp1973 = panda$core$Bit$init$builtin_bit(true);
panda$core$String* $tmp1974 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(param0, param1, param2, $tmp1973);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1974));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1974));
return $tmp1974;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$String* param2, panda$core$Bit param3) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
// line 1089
panda$core$MutableString* $tmp1975 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1975);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1976 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1976));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
*(&local0) = $tmp1975;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
// line 1090
panda$core$Matcher* $tmp1977 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp1978 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1978));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1977));
*(&local1) = $tmp1977;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1977));
// line 1091
goto block1;
block1:;
panda$core$Matcher* $tmp1979 = *(&local1);
panda$core$Bit $tmp1980 = panda$core$Matcher$find$R$panda$core$Bit($tmp1979);
bool $tmp1981 = $tmp1980.value;
if ($tmp1981) goto block2; else goto block3;
block2:;
// line 1092
panda$core$Matcher* $tmp1982 = *(&local1);
panda$core$MutableString* $tmp1983 = *(&local0);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp1982, $tmp1983, param2, param3);
goto block1;
block3:;
// line 1094
panda$core$Matcher* $tmp1984 = *(&local1);
panda$core$MutableString* $tmp1985 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp1984, $tmp1985);
// line 1095
panda$core$MutableString* $tmp1986 = *(&local0);
panda$core$String* $tmp1987 = panda$core$MutableString$finish$R$panda$core$String($tmp1986);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1987));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1987));
panda$core$Matcher* $tmp1988 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1988));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp1989 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1989));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp1987;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$MutableMethod* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$core$Object* local2 = NULL;
// line 1116
panda$core$MutableString* $tmp1990 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1990);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1991 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1991));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1990));
*(&local0) = $tmp1990;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1990));
// line 1117
panda$core$Matcher* $tmp1992 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp1993 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1992));
*(&local1) = $tmp1992;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1992));
// line 1118
goto block1;
block1:;
panda$core$Matcher* $tmp1994 = *(&local1);
panda$core$Bit $tmp1995 = panda$core$Matcher$find$R$panda$core$Bit($tmp1994);
bool $tmp1996 = $tmp1995.value;
if ($tmp1996) goto block2; else goto block3;
block2:;
// line 1119
panda$core$Matcher* $tmp1997 = *(&local1);
panda$core$MutableString* $tmp1998 = *(&local0);
panda$core$Matcher* $tmp1999 = *(&local1);
panda$core$Int64 $tmp2000 = (panda$core$Int64) {0};
panda$core$String* $tmp2001 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp1999, $tmp2000);
panda$core$Int8** $tmp2002 = &param2->pointer;
panda$core$Int8* $tmp2003 = *$tmp2002;
panda$core$Object** $tmp2004 = &param2->target;
panda$core$Object* $tmp2005 = *$tmp2004;
bool $tmp2006 = $tmp2005 != ((panda$core$Object*) NULL);
if ($tmp2006) goto block4; else goto block5;
block5:;
panda$core$Object* $tmp2008 = (($fn2007) $tmp2003)($tmp2001);
*(&local2) = $tmp2008;
goto block6;
block4:;
panda$core$Object* $tmp2010 = (($fn2009) $tmp2003)($tmp2005, $tmp2001);
*(&local2) = $tmp2010;
goto block6;
block6:;
panda$core$Object* $tmp2011 = *(&local2);
$fn2013 $tmp2012 = ($fn2013) $tmp2011->$class->vtable[0];
panda$core$String* $tmp2014 = $tmp2012($tmp2011);
panda$core$Bit $tmp2015 = panda$core$Bit$init$builtin_bit(false);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp1997, $tmp1998, $tmp2014, $tmp2015);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2001));
panda$core$Panda$unref$panda$core$Object$Q($tmp2011);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2014));
goto block1;
block3:;
// line 1121
panda$core$Matcher* $tmp2016 = *(&local1);
panda$core$MutableString* $tmp2017 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp2016, $tmp2017);
// line 1122
panda$core$MutableString* $tmp2018 = *(&local0);
panda$core$String* $tmp2019 = panda$core$MutableString$convert$R$panda$core$String($tmp2018);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2019));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2019));
panda$core$Matcher* $tmp2020 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2020));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp2021 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2021));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2019;

}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$MutableMethod* param2) {

panda$core$MutableString* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$Int64 local3;
panda$core$Object* local4 = NULL;
// line 1136
panda$core$MutableString* $tmp2022 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2022);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp2023 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2023));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2022));
*(&local0) = $tmp2022;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2022));
// line 1137
panda$core$Matcher* $tmp2024 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp2025 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2025));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2024));
*(&local1) = $tmp2024;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2024));
// line 1138
goto block1;
block1:;
panda$core$Matcher* $tmp2026 = *(&local1);
panda$core$Bit $tmp2027 = panda$core$Matcher$find$R$panda$core$Bit($tmp2026);
bool $tmp2028 = $tmp2027.value;
if ($tmp2028) goto block2; else goto block3;
block2:;
// line 1139
panda$collections$Array* $tmp2029 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2029);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2030 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2030));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
*(&local2) = $tmp2029;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
// line 1140
panda$core$Int64 $tmp2031 = (panda$core$Int64) {0};
panda$core$Matcher* $tmp2032 = *(&local1);
panda$core$Int64 $tmp2033;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp2033, $tmp2032);
panda$core$Bit $tmp2034 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2035 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2031, $tmp2033, $tmp2034);
panda$core$Int64 $tmp2036 = $tmp2035.min;
*(&local3) = $tmp2036;
panda$core$Int64 $tmp2037 = $tmp2035.max;
panda$core$Bit $tmp2038 = $tmp2035.inclusive;
bool $tmp2039 = $tmp2038.value;
panda$core$Int64 $tmp2040 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2041 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2040);
if ($tmp2039) goto block7; else goto block8;
block7:;
int64_t $tmp2042 = $tmp2036.value;
int64_t $tmp2043 = $tmp2037.value;
bool $tmp2044 = $tmp2042 <= $tmp2043;
panda$core$Bit $tmp2045 = (panda$core$Bit) {$tmp2044};
bool $tmp2046 = $tmp2045.value;
if ($tmp2046) goto block4; else goto block5;
block8:;
int64_t $tmp2047 = $tmp2036.value;
int64_t $tmp2048 = $tmp2037.value;
bool $tmp2049 = $tmp2047 < $tmp2048;
panda$core$Bit $tmp2050 = (panda$core$Bit) {$tmp2049};
bool $tmp2051 = $tmp2050.value;
if ($tmp2051) goto block4; else goto block5;
block4:;
// line 1141
panda$collections$Array* $tmp2052 = *(&local2);
panda$core$Matcher* $tmp2053 = *(&local1);
panda$core$Int64 $tmp2054 = *(&local3);
panda$core$String* $tmp2055 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q($tmp2053, $tmp2054);
panda$collections$Array$add$panda$collections$Array$T($tmp2052, ((panda$core$Object*) $tmp2055));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2055));
goto block6;
block6:;
panda$core$Int64 $tmp2056 = *(&local3);
int64_t $tmp2057 = $tmp2037.value;
int64_t $tmp2058 = $tmp2056.value;
int64_t $tmp2059 = $tmp2057 - $tmp2058;
panda$core$Int64 $tmp2060 = (panda$core$Int64) {$tmp2059};
panda$core$UInt64 $tmp2061 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2060);
if ($tmp2039) goto block10; else goto block11;
block10:;
uint64_t $tmp2062 = $tmp2061.value;
uint64_t $tmp2063 = $tmp2041.value;
bool $tmp2064 = $tmp2062 >= $tmp2063;
panda$core$Bit $tmp2065 = (panda$core$Bit) {$tmp2064};
bool $tmp2066 = $tmp2065.value;
if ($tmp2066) goto block9; else goto block5;
block11:;
uint64_t $tmp2067 = $tmp2061.value;
uint64_t $tmp2068 = $tmp2041.value;
bool $tmp2069 = $tmp2067 > $tmp2068;
panda$core$Bit $tmp2070 = (panda$core$Bit) {$tmp2069};
bool $tmp2071 = $tmp2070.value;
if ($tmp2071) goto block9; else goto block5;
block9:;
int64_t $tmp2072 = $tmp2056.value;
int64_t $tmp2073 = $tmp2040.value;
int64_t $tmp2074 = $tmp2072 + $tmp2073;
panda$core$Int64 $tmp2075 = (panda$core$Int64) {$tmp2074};
*(&local3) = $tmp2075;
goto block4;
block5:;
// line 1143
panda$core$Matcher* $tmp2076 = *(&local1);
panda$core$MutableString* $tmp2077 = *(&local0);
panda$collections$Array* $tmp2078 = *(&local2);
panda$core$Int8** $tmp2079 = &param2->pointer;
panda$core$Int8* $tmp2080 = *$tmp2079;
panda$core$Object** $tmp2081 = &param2->target;
panda$core$Object* $tmp2082 = *$tmp2081;
bool $tmp2083 = $tmp2082 != ((panda$core$Object*) NULL);
if ($tmp2083) goto block12; else goto block13;
block13:;
panda$core$Object* $tmp2085 = (($fn2084) $tmp2080)(((panda$collections$ListView*) $tmp2078));
*(&local4) = $tmp2085;
goto block14;
block12:;
panda$core$Object* $tmp2087 = (($fn2086) $tmp2080)($tmp2082, ((panda$collections$ListView*) $tmp2078));
*(&local4) = $tmp2087;
goto block14;
block14:;
panda$core$Object* $tmp2088 = *(&local4);
$fn2090 $tmp2089 = ($fn2090) $tmp2088->$class->vtable[0];
panda$core$String* $tmp2091 = $tmp2089($tmp2088);
panda$core$Bit $tmp2092 = panda$core$Bit$init$builtin_bit(false);
panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit($tmp2076, $tmp2077, $tmp2091, $tmp2092);
panda$core$Panda$unref$panda$core$Object$Q($tmp2088);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2091));
panda$collections$Array* $tmp2093 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2093));
// unreffing groups
*(&local2) = ((panda$collections$Array*) NULL);
goto block1;
block3:;
// line 1145
panda$core$Matcher* $tmp2094 = *(&local1);
panda$core$MutableString* $tmp2095 = *(&local0);
panda$core$Matcher$appendTail$panda$core$MutableString($tmp2094, $tmp2095);
// line 1146
panda$core$MutableString* $tmp2096 = *(&local0);
panda$core$String* $tmp2097 = panda$core$MutableString$convert$R$panda$core$String($tmp2096);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
panda$core$Matcher* $tmp2098 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$MutableString* $tmp2099 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2099));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp2097;

}
panda$collections$Iterator* panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* param0, panda$core$String* param1) {

// line 1150
panda$core$Bit $tmp2100 = panda$core$Bit$init$builtin_bit(false);
panda$collections$Iterator* $tmp2101 = panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(param0, param1, $tmp2100);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2101));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2101));
return $tmp2101;

}
panda$collections$Iterator* panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* param0, panda$core$String* param1, panda$core$Bit param2) {

// line 1154
panda$core$String$MatchIterator* $tmp2102 = (panda$core$String$MatchIterator*) pandaObjectAlloc(46, (panda$core$Class*) &panda$core$String$MatchIterator$class);
panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit($tmp2102, param0, param1, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp2102)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2102));
return ((panda$collections$Iterator*) $tmp2102);

}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1158
panda$core$Bit $tmp2103 = panda$core$Bit$init$builtin_bit(false);
panda$collections$Iterator* $tmp2104 = panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(param0, param1, $tmp2103);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
return $tmp2104;

}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$Bit param2) {

// line 1162
panda$core$String$RegexMatchIterator* $tmp2105 = (panda$core$String$RegexMatchIterator*) pandaObjectAlloc(34, (panda$core$Class*) &panda$core$String$RegexMatchIterator$class);
panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit($tmp2105, param0, param1, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp2105)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2105));
return ((panda$collections$Iterator*) $tmp2105);

}
panda$core$String$Index panda$core$String$get_start$R$panda$core$String$Index(panda$core$String* param0) {

// line 1169
panda$core$Int64 $tmp2106 = (panda$core$Int64) {0};
panda$core$String$Index $tmp2107 = panda$core$String$Index$init$panda$core$Int64($tmp2106);
return $tmp2107;

}
panda$core$String$Index panda$core$String$get_end$R$panda$core$String$Index(panda$core$String* param0) {

// line 1176
panda$core$Int64* $tmp2108 = &param0->_length;
panda$core$Int64 $tmp2109 = *$tmp2108;
panda$core$String$Index $tmp2110 = panda$core$String$Index$init$panda$core$Int64($tmp2109);
return $tmp2110;

}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1) {

int64_t local0;
// line 1186
panda$core$Int64 $tmp2111 = param1.value;
panda$core$Int64* $tmp2112 = &param0->_length;
panda$core$Int64 $tmp2113 = *$tmp2112;
int64_t $tmp2114 = $tmp2111.value;
int64_t $tmp2115 = $tmp2113.value;
bool $tmp2116 = $tmp2114 < $tmp2115;
panda$core$Bit $tmp2117 = (panda$core$Bit) {$tmp2116};
bool $tmp2118 = $tmp2117.value;
if ($tmp2118) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2119 = (panda$core$Int64) {1186};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2120, $tmp2119);
abort(); // unreachable
block1:;
// line 1187
panda$core$Char8** $tmp2121 = &param0->data;
panda$core$Char8* $tmp2122 = *$tmp2121;
panda$core$Int64 $tmp2123 = param1.value;
int64_t $tmp2124 = $tmp2123.value;
panda$core$Char8 $tmp2125 = $tmp2122[$tmp2124];
uint8_t $tmp2126 = $tmp2125.value;
int64_t $tmp2127 = ((int64_t) $tmp2126) & 255;
*(&local0) = $tmp2127;
// line 1188
int64_t $tmp2128 = *(&local0);
bool $tmp2129 = $tmp2128 >= 240;
panda$core$Bit $tmp2130 = panda$core$Bit$init$builtin_bit($tmp2129);
bool $tmp2131 = $tmp2130.value;
if ($tmp2131) goto block3; else goto block4;
block3:;
// line 1189
panda$core$Int64 $tmp2132 = param1.value;
panda$core$Int64 $tmp2133 = (panda$core$Int64) {4};
int64_t $tmp2134 = $tmp2132.value;
int64_t $tmp2135 = $tmp2133.value;
int64_t $tmp2136 = $tmp2134 + $tmp2135;
panda$core$Int64 $tmp2137 = (panda$core$Int64) {$tmp2136};
panda$core$String$Index $tmp2138 = panda$core$String$Index$init$panda$core$Int64($tmp2137);
return $tmp2138;
block4:;
// line 1191
int64_t $tmp2139 = *(&local0);
bool $tmp2140 = $tmp2139 >= 224;
panda$core$Bit $tmp2141 = panda$core$Bit$init$builtin_bit($tmp2140);
bool $tmp2142 = $tmp2141.value;
if ($tmp2142) goto block5; else goto block6;
block5:;
// line 1192
panda$core$Int64 $tmp2143 = param1.value;
panda$core$Int64 $tmp2144 = (panda$core$Int64) {3};
int64_t $tmp2145 = $tmp2143.value;
int64_t $tmp2146 = $tmp2144.value;
int64_t $tmp2147 = $tmp2145 + $tmp2146;
panda$core$Int64 $tmp2148 = (panda$core$Int64) {$tmp2147};
panda$core$String$Index $tmp2149 = panda$core$String$Index$init$panda$core$Int64($tmp2148);
return $tmp2149;
block6:;
// line 1194
int64_t $tmp2150 = *(&local0);
bool $tmp2151 = $tmp2150 >= 192;
panda$core$Bit $tmp2152 = panda$core$Bit$init$builtin_bit($tmp2151);
bool $tmp2153 = $tmp2152.value;
if ($tmp2153) goto block7; else goto block8;
block7:;
// line 1195
panda$core$Int64 $tmp2154 = param1.value;
panda$core$Int64 $tmp2155 = (panda$core$Int64) {2};
int64_t $tmp2156 = $tmp2154.value;
int64_t $tmp2157 = $tmp2155.value;
int64_t $tmp2158 = $tmp2156 + $tmp2157;
panda$core$Int64 $tmp2159 = (panda$core$Int64) {$tmp2158};
panda$core$String$Index $tmp2160 = panda$core$String$Index$init$panda$core$Int64($tmp2159);
return $tmp2160;
block8:;
// line 1197
panda$core$Int64 $tmp2161 = param1.value;
panda$core$Int64 $tmp2162 = (panda$core$Int64) {1};
int64_t $tmp2163 = $tmp2161.value;
int64_t $tmp2164 = $tmp2162.value;
int64_t $tmp2165 = $tmp2163 + $tmp2164;
panda$core$Int64 $tmp2166 = (panda$core$Int64) {$tmp2165};
panda$core$String$Index $tmp2167 = panda$core$String$Index$init$panda$core$Int64($tmp2166);
return $tmp2167;

}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1) {

panda$core$Int64 local0;
// line 1207
panda$core$Int64 $tmp2168 = param1.value;
panda$core$Int64 $tmp2169 = (panda$core$Int64) {0};
int64_t $tmp2170 = $tmp2168.value;
int64_t $tmp2171 = $tmp2169.value;
bool $tmp2172 = $tmp2170 > $tmp2171;
panda$core$Bit $tmp2173 = (panda$core$Bit) {$tmp2172};
bool $tmp2174 = $tmp2173.value;
if ($tmp2174) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2175 = (panda$core$Int64) {1207};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2176, $tmp2175);
abort(); // unreachable
block1:;
// line 1208
panda$core$Int64 $tmp2177 = param1.value;
panda$core$Int64 $tmp2178 = (panda$core$Int64) {1};
int64_t $tmp2179 = $tmp2177.value;
int64_t $tmp2180 = $tmp2178.value;
int64_t $tmp2181 = $tmp2179 - $tmp2180;
panda$core$Int64 $tmp2182 = (panda$core$Int64) {$tmp2181};
*(&local0) = $tmp2182;
// line 1209
goto block3;
block3:;
panda$core$Char8** $tmp2183 = &param0->data;
panda$core$Char8* $tmp2184 = *$tmp2183;
panda$core$Int64 $tmp2185 = *(&local0);
int64_t $tmp2186 = $tmp2185.value;
panda$core$Char8 $tmp2187 = $tmp2184[$tmp2186];
uint8_t $tmp2188 = $tmp2187.value;
int64_t $tmp2189 = ((int64_t) $tmp2188) & 255;
bool $tmp2190 = $tmp2189 >= 128;
panda$core$Char8** $tmp2191 = &param0->data;
panda$core$Char8* $tmp2192 = *$tmp2191;
panda$core$Int64 $tmp2193 = *(&local0);
int64_t $tmp2194 = $tmp2193.value;
panda$core$Char8 $tmp2195 = $tmp2192[$tmp2194];
uint8_t $tmp2196 = $tmp2195.value;
int64_t $tmp2197 = ((int64_t) $tmp2196) & 255;
bool $tmp2198 = $tmp2197 < 192;
bool $tmp2199 = $tmp2190 & $tmp2198;
panda$core$Bit $tmp2200 = panda$core$Bit$init$builtin_bit($tmp2199);
bool $tmp2201 = $tmp2200.value;
if ($tmp2201) goto block4; else goto block5;
block4:;
// line 1211
panda$core$Int64 $tmp2202 = *(&local0);
panda$core$Int64 $tmp2203 = (panda$core$Int64) {1};
int64_t $tmp2204 = $tmp2202.value;
int64_t $tmp2205 = $tmp2203.value;
int64_t $tmp2206 = $tmp2204 - $tmp2205;
panda$core$Int64 $tmp2207 = (panda$core$Int64) {$tmp2206};
*(&local0) = $tmp2207;
goto block3;
block5:;
// line 1213
panda$core$Int64 $tmp2208 = *(&local0);
panda$core$String$Index $tmp2209 = panda$core$String$Index$init$panda$core$Int64($tmp2208);
return $tmp2209;

}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* param0, panda$core$String$Index param1, panda$core$Int64 param2) {

panda$core$String$Index local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 1223
*(&local0) = param1;
// line 1224
panda$core$Int64 $tmp2210 = (panda$core$Int64) {0};
int64_t $tmp2211 = param2.value;
int64_t $tmp2212 = $tmp2210.value;
bool $tmp2213 = $tmp2211 > $tmp2212;
panda$core$Bit $tmp2214 = (panda$core$Bit) {$tmp2213};
bool $tmp2215 = $tmp2214.value;
if ($tmp2215) goto block1; else goto block3;
block1:;
// line 1225
panda$core$Int64 $tmp2216 = (panda$core$Int64) {0};
panda$core$Bit $tmp2217 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2218 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2216, param2, $tmp2217);
panda$core$Int64 $tmp2219 = $tmp2218.min;
*(&local1) = $tmp2219;
panda$core$Int64 $tmp2220 = $tmp2218.max;
panda$core$Bit $tmp2221 = $tmp2218.inclusive;
bool $tmp2222 = $tmp2221.value;
panda$core$Int64 $tmp2223 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2224 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2223);
if ($tmp2222) goto block7; else goto block8;
block7:;
int64_t $tmp2225 = $tmp2219.value;
int64_t $tmp2226 = $tmp2220.value;
bool $tmp2227 = $tmp2225 <= $tmp2226;
panda$core$Bit $tmp2228 = (panda$core$Bit) {$tmp2227};
bool $tmp2229 = $tmp2228.value;
if ($tmp2229) goto block4; else goto block5;
block8:;
int64_t $tmp2230 = $tmp2219.value;
int64_t $tmp2231 = $tmp2220.value;
bool $tmp2232 = $tmp2230 < $tmp2231;
panda$core$Bit $tmp2233 = (panda$core$Bit) {$tmp2232};
bool $tmp2234 = $tmp2233.value;
if ($tmp2234) goto block4; else goto block5;
block4:;
// line 1226
panda$core$String$Index $tmp2235 = *(&local0);
panda$core$String$Index $tmp2236 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2235);
*(&local0) = $tmp2236;
goto block6;
block6:;
panda$core$Int64 $tmp2237 = *(&local1);
int64_t $tmp2238 = $tmp2220.value;
int64_t $tmp2239 = $tmp2237.value;
int64_t $tmp2240 = $tmp2238 - $tmp2239;
panda$core$Int64 $tmp2241 = (panda$core$Int64) {$tmp2240};
panda$core$UInt64 $tmp2242 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2241);
if ($tmp2222) goto block10; else goto block11;
block10:;
uint64_t $tmp2243 = $tmp2242.value;
uint64_t $tmp2244 = $tmp2224.value;
bool $tmp2245 = $tmp2243 >= $tmp2244;
panda$core$Bit $tmp2246 = (panda$core$Bit) {$tmp2245};
bool $tmp2247 = $tmp2246.value;
if ($tmp2247) goto block9; else goto block5;
block11:;
uint64_t $tmp2248 = $tmp2242.value;
uint64_t $tmp2249 = $tmp2224.value;
bool $tmp2250 = $tmp2248 > $tmp2249;
panda$core$Bit $tmp2251 = (panda$core$Bit) {$tmp2250};
bool $tmp2252 = $tmp2251.value;
if ($tmp2252) goto block9; else goto block5;
block9:;
int64_t $tmp2253 = $tmp2237.value;
int64_t $tmp2254 = $tmp2223.value;
int64_t $tmp2255 = $tmp2253 + $tmp2254;
panda$core$Int64 $tmp2256 = (panda$core$Int64) {$tmp2255};
*(&local1) = $tmp2256;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 1230
panda$core$Int64 $tmp2257 = (panda$core$Int64) {0};
panda$core$Int64 $tmp2258 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp2259 = panda$core$Bit$init$builtin_bit(false);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp2260 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2257, param2, $tmp2258, $tmp2259);
panda$core$Int64 $tmp2261 = $tmp2260.start;
*(&local2) = $tmp2261;
panda$core$Int64 $tmp2262 = $tmp2260.end;
panda$core$Int64 $tmp2263 = $tmp2260.step;
panda$core$UInt64 $tmp2264 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2263);
panda$core$Int64 $tmp2265 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp2263);
panda$core$UInt64 $tmp2266 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2265);
panda$core$Bit $tmp2267 = $tmp2260.inclusive;
bool $tmp2268 = $tmp2267.value;
panda$core$Int64 $tmp2269 = (panda$core$Int64) {0};
int64_t $tmp2270 = $tmp2263.value;
int64_t $tmp2271 = $tmp2269.value;
bool $tmp2272 = $tmp2270 >= $tmp2271;
panda$core$Bit $tmp2273 = (panda$core$Bit) {$tmp2272};
bool $tmp2274 = $tmp2273.value;
if ($tmp2274) goto block15; else goto block16;
block15:;
if ($tmp2268) goto block17; else goto block18;
block17:;
int64_t $tmp2275 = $tmp2261.value;
int64_t $tmp2276 = $tmp2262.value;
bool $tmp2277 = $tmp2275 <= $tmp2276;
panda$core$Bit $tmp2278 = (panda$core$Bit) {$tmp2277};
bool $tmp2279 = $tmp2278.value;
if ($tmp2279) goto block12; else goto block13;
block18:;
int64_t $tmp2280 = $tmp2261.value;
int64_t $tmp2281 = $tmp2262.value;
bool $tmp2282 = $tmp2280 < $tmp2281;
panda$core$Bit $tmp2283 = (panda$core$Bit) {$tmp2282};
bool $tmp2284 = $tmp2283.value;
if ($tmp2284) goto block12; else goto block13;
block16:;
if ($tmp2268) goto block19; else goto block20;
block19:;
int64_t $tmp2285 = $tmp2261.value;
int64_t $tmp2286 = $tmp2262.value;
bool $tmp2287 = $tmp2285 >= $tmp2286;
panda$core$Bit $tmp2288 = (panda$core$Bit) {$tmp2287};
bool $tmp2289 = $tmp2288.value;
if ($tmp2289) goto block12; else goto block13;
block20:;
int64_t $tmp2290 = $tmp2261.value;
int64_t $tmp2291 = $tmp2262.value;
bool $tmp2292 = $tmp2290 > $tmp2291;
panda$core$Bit $tmp2293 = (panda$core$Bit) {$tmp2292};
bool $tmp2294 = $tmp2293.value;
if ($tmp2294) goto block12; else goto block13;
block12:;
// line 1231
panda$core$String$Index $tmp2295 = *(&local0);
panda$core$String$Index $tmp2296 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2295);
*(&local0) = $tmp2296;
goto block14;
block14:;
panda$core$Int64 $tmp2297 = *(&local2);
if ($tmp2274) goto block22; else goto block23;
block22:;
int64_t $tmp2298 = $tmp2262.value;
int64_t $tmp2299 = $tmp2297.value;
int64_t $tmp2300 = $tmp2298 - $tmp2299;
panda$core$Int64 $tmp2301 = (panda$core$Int64) {$tmp2300};
panda$core$UInt64 $tmp2302 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2301);
if ($tmp2268) goto block24; else goto block25;
block24:;
uint64_t $tmp2303 = $tmp2302.value;
uint64_t $tmp2304 = $tmp2264.value;
bool $tmp2305 = $tmp2303 >= $tmp2304;
panda$core$Bit $tmp2306 = (panda$core$Bit) {$tmp2305};
bool $tmp2307 = $tmp2306.value;
if ($tmp2307) goto block21; else goto block13;
block25:;
uint64_t $tmp2308 = $tmp2302.value;
uint64_t $tmp2309 = $tmp2264.value;
bool $tmp2310 = $tmp2308 > $tmp2309;
panda$core$Bit $tmp2311 = (panda$core$Bit) {$tmp2310};
bool $tmp2312 = $tmp2311.value;
if ($tmp2312) goto block21; else goto block13;
block23:;
int64_t $tmp2313 = $tmp2297.value;
int64_t $tmp2314 = $tmp2262.value;
int64_t $tmp2315 = $tmp2313 - $tmp2314;
panda$core$Int64 $tmp2316 = (panda$core$Int64) {$tmp2315};
panda$core$UInt64 $tmp2317 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2316);
if ($tmp2268) goto block26; else goto block27;
block26:;
uint64_t $tmp2318 = $tmp2317.value;
uint64_t $tmp2319 = $tmp2266.value;
bool $tmp2320 = $tmp2318 >= $tmp2319;
panda$core$Bit $tmp2321 = (panda$core$Bit) {$tmp2320};
bool $tmp2322 = $tmp2321.value;
if ($tmp2322) goto block21; else goto block13;
block27:;
uint64_t $tmp2323 = $tmp2317.value;
uint64_t $tmp2324 = $tmp2266.value;
bool $tmp2325 = $tmp2323 > $tmp2324;
panda$core$Bit $tmp2326 = (panda$core$Bit) {$tmp2325};
bool $tmp2327 = $tmp2326.value;
if ($tmp2327) goto block21; else goto block13;
block21:;
int64_t $tmp2328 = $tmp2297.value;
int64_t $tmp2329 = $tmp2263.value;
int64_t $tmp2330 = $tmp2328 + $tmp2329;
panda$core$Int64 $tmp2331 = (panda$core$Int64) {$tmp2330};
*(&local2) = $tmp2331;
goto block12;
block13:;
goto block2;
block2:;
// line 1234
panda$core$String$Index $tmp2332 = *(&local0);
return $tmp2332;

}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1247
panda$core$Int32 $tmp2333 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2334 = panda$core$Char32$init$panda$core$Int32($tmp2333);
panda$core$String* $tmp2335 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2334);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2335));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2335));
return $tmp2335;

}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

// line 1261
panda$core$Int64 $tmp2336 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2337 = $tmp2336.value;
int64_t $tmp2338 = param1.value;
bool $tmp2339 = $tmp2337 >= $tmp2338;
panda$core$Bit $tmp2340 = (panda$core$Bit) {$tmp2339};
bool $tmp2341 = $tmp2340.value;
if ($tmp2341) goto block1; else goto block2;
block1:;
// line 1262
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1264
panda$core$Int64 $tmp2342 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2343 = param1.value;
int64_t $tmp2344 = $tmp2342.value;
int64_t $tmp2345 = $tmp2343 - $tmp2344;
panda$core$Int64 $tmp2346 = (panda$core$Int64) {$tmp2345};
panda$core$String* $tmp2347 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2346);
panda$core$String* $tmp2348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(param0, $tmp2347);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2348));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2347));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2348));
return $tmp2348;

}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1277
panda$core$Int32 $tmp2349 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2350 = panda$core$Char32$init$panda$core$Int32($tmp2349);
panda$core$String* $tmp2351 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2350);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2351));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2351));
return $tmp2351;

}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

// line 1291
panda$core$Int64 $tmp2352 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2353 = $tmp2352.value;
int64_t $tmp2354 = param1.value;
bool $tmp2355 = $tmp2353 >= $tmp2354;
panda$core$Bit $tmp2356 = (panda$core$Bit) {$tmp2355};
bool $tmp2357 = $tmp2356.value;
if ($tmp2357) goto block1; else goto block2;
block1:;
// line 1292
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1294
panda$core$Int64 $tmp2358 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2359 = param1.value;
int64_t $tmp2360 = $tmp2358.value;
int64_t $tmp2361 = $tmp2359 - $tmp2360;
panda$core$Int64 $tmp2362 = (panda$core$Int64) {$tmp2361};
panda$core$String* $tmp2363 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2362);
panda$core$String* $tmp2364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2363, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2363));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
return $tmp2364;

}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1) {

// line 1309
panda$core$Int32 $tmp2365 = (panda$core$Int32) {32};
panda$core$Char32 $tmp2366 = panda$core$Char32$init$panda$core$Int32($tmp2365);
panda$core$String* $tmp2367 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(param0, param1, $tmp2366);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2367));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2367));
return $tmp2367;

}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* param0, panda$core$Int64 param1, panda$core$Char32 param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
// line 1325
panda$core$Int64 $tmp2368 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2369 = $tmp2368.value;
int64_t $tmp2370 = param1.value;
bool $tmp2371 = $tmp2369 >= $tmp2370;
panda$core$Bit $tmp2372 = (panda$core$Bit) {$tmp2371};
bool $tmp2373 = $tmp2372.value;
if ($tmp2373) goto block1; else goto block2;
block1:;
// line 1326
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 1328
panda$core$Int64 $tmp2374 = panda$core$String$get_length$R$panda$core$Int64(param0);
int64_t $tmp2375 = param1.value;
int64_t $tmp2376 = $tmp2374.value;
int64_t $tmp2377 = $tmp2375 - $tmp2376;
panda$core$Int64 $tmp2378 = (panda$core$Int64) {$tmp2377};
*(&local0) = $tmp2378;
// line 1329
panda$core$Int64 $tmp2379 = *(&local0);
panda$core$Int64 $tmp2380 = (panda$core$Int64) {2};
int64_t $tmp2381 = $tmp2379.value;
int64_t $tmp2382 = $tmp2380.value;
int64_t $tmp2383 = $tmp2381 / $tmp2382;
panda$core$Int64 $tmp2384 = (panda$core$Int64) {$tmp2383};
*(&local1) = $tmp2384;
// line 1330
panda$core$Int64 $tmp2385 = *(&local0);
panda$core$Int64 $tmp2386 = *(&local1);
int64_t $tmp2387 = $tmp2385.value;
int64_t $tmp2388 = $tmp2386.value;
int64_t $tmp2389 = $tmp2387 - $tmp2388;
panda$core$Int64 $tmp2390 = (panda$core$Int64) {$tmp2389};
*(&local2) = $tmp2390;
// line 1331
panda$core$Int64 $tmp2391 = *(&local1);
panda$core$String* $tmp2392 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2391);
panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2392, param0);
panda$core$Int64 $tmp2394 = *(&local2);
panda$core$String* $tmp2395 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(param2, $tmp2394);
panda$core$String* $tmp2396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2393, $tmp2395);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2392));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2395));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
return $tmp2396;

}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$String* param1) {

// line 1342
panda$core$Int64 $tmp2397 = (panda$core$Int64) {9223372036854775807};
panda$collections$Array* $tmp2398 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(param0, param1, $tmp2397);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
return $tmp2398;

}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$String* param1, panda$core$Int64 param2) {

panda$collections$Array* local0 = NULL;
panda$core$String$Index local1;
panda$core$String$Index$nullable local2;
panda$core$Bit local3;
// line 1355
panda$collections$Array* $tmp2399 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2399);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2400 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2400));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2399));
*(&local0) = $tmp2399;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2399));
// line 1356
panda$core$String$Index $tmp2401 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local1) = $tmp2401;
// line 1357
goto block1;
block1:;
// line 1358
// line 1359
panda$core$Int64* $tmp2402 = &param1->_length;
panda$core$Int64 $tmp2403 = *$tmp2402;
panda$core$Int64 $tmp2404 = (panda$core$Int64) {0};
panda$core$Bit $tmp2405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2403, $tmp2404);
bool $tmp2406 = $tmp2405.value;
if ($tmp2406) goto block3; else goto block5;
block3:;
// line 1360
panda$core$String$Index $tmp2407 = *(&local1);
panda$core$String$Index $tmp2408 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(param0, $tmp2407);
*(&local2) = ((panda$core$String$Index$nullable) { $tmp2408, true });
goto block4;
block5:;
// line 1
// line 1363
panda$core$String$Index $tmp2409 = *(&local1);
panda$core$String$Index$nullable $tmp2410 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(param0, param1, $tmp2409);
*(&local2) = $tmp2410;
goto block4;
block4:;
// line 1365
panda$core$String$Index$nullable $tmp2411 = *(&local2);
panda$core$Bit $tmp2412 = panda$core$Bit$init$builtin_bit(!$tmp2411.nonnull);
bool $tmp2413 = $tmp2412.value;
if ($tmp2413) goto block6; else goto block7;
block6:;
*(&local3) = $tmp2412;
goto block8;
block7:;
panda$collections$Array* $tmp2414 = *(&local0);
ITable* $tmp2415 = ((panda$collections$CollectionView*) $tmp2414)->$class->itable;
while ($tmp2415->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2415 = $tmp2415->next;
}
$fn2417 $tmp2416 = $tmp2415->methods[0];
panda$core$Int64 $tmp2418 = $tmp2416(((panda$collections$CollectionView*) $tmp2414));
panda$core$Int64 $tmp2419 = (panda$core$Int64) {1};
int64_t $tmp2420 = param2.value;
int64_t $tmp2421 = $tmp2419.value;
int64_t $tmp2422 = $tmp2420 - $tmp2421;
panda$core$Int64 $tmp2423 = (panda$core$Int64) {$tmp2422};
panda$core$Bit $tmp2424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2418, $tmp2423);
*(&local3) = $tmp2424;
goto block8;
block8:;
panda$core$Bit $tmp2425 = *(&local3);
bool $tmp2426 = $tmp2425.value;
if ($tmp2426) goto block9; else goto block10;
block9:;
// line 1366
panda$collections$Array* $tmp2427 = *(&local0);
panda$core$String$Index $tmp2428 = *(&local1);
panda$core$Bit $tmp2429 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2430 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2428, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2429);
panda$core$String* $tmp2431 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp2430);
panda$collections$Array$add$panda$collections$Array$T($tmp2427, ((panda$core$Object*) $tmp2431));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
// line 1367
goto block2;
block10:;
// line 1369
panda$collections$Array* $tmp2432 = *(&local0);
panda$core$String$Index $tmp2433 = *(&local1);
panda$core$String$Index$nullable $tmp2434 = *(&local2);
panda$core$Bit $tmp2435 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp2436 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp2433, ((panda$core$String$Index) $tmp2434.value), $tmp2435);
panda$core$String* $tmp2437 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp2436);
panda$collections$Array$add$panda$collections$Array$T($tmp2432, ((panda$core$Object*) $tmp2437));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2437));
// line 1370
panda$core$String$Index$nullable $tmp2438 = *(&local2);
panda$core$Int64 $tmp2439 = ((panda$core$String$Index) $tmp2438.value).value;
panda$core$Int64* $tmp2440 = &param1->_length;
panda$core$Int64 $tmp2441 = *$tmp2440;
int64_t $tmp2442 = $tmp2439.value;
int64_t $tmp2443 = $tmp2441.value;
int64_t $tmp2444 = $tmp2442 + $tmp2443;
panda$core$Int64 $tmp2445 = (panda$core$Int64) {$tmp2444};
panda$core$String$Index $tmp2446 = panda$core$String$Index$init$panda$core$Int64($tmp2445);
*(&local1) = $tmp2446;
goto block1;
block2:;
// line 1372
panda$collections$Array* $tmp2447 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2447));
panda$collections$Array* $tmp2448 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2448));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp2447;

}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$RegularExpression* param1, panda$core$Int64 param2) {

panda$collections$Array* local0 = NULL;
panda$core$Matcher* local1 = NULL;
panda$core$String$Index local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$String$Index local5;
panda$core$Int64 $tmp2449 = (panda$core$Int64) {0};
int64_t $tmp2450 = param2.value;
int64_t $tmp2451 = $tmp2449.value;
bool $tmp2452 = $tmp2450 > $tmp2451;
panda$core$Bit $tmp2453 = (panda$core$Bit) {$tmp2452};
bool $tmp2454 = $tmp2453.value;
if ($tmp2454) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2455 = (panda$core$Int64) {1386};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2456, $tmp2455, &$s2457);
abort(); // unreachable
block1:;
// line 1387
panda$collections$Array* $tmp2458 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2458);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2459 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2459));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2458));
*(&local0) = $tmp2458;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2458));
// line 1388
panda$core$Matcher* $tmp2460 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(param1, param0);
*(&local1) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp2461 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2461));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2460));
*(&local1) = $tmp2460;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2460));
// line 1389
panda$core$String$Index $tmp2462 = panda$core$String$get_start$R$panda$core$String$Index(param0);
*(&local2) = $tmp2462;
// line 1390
goto block3;
block3:;
// line 1391
panda$core$Matcher* $tmp2463 = *(&local1);
panda$core$Bit $tmp2464 = panda$core$Matcher$find$R$panda$core$Bit($tmp2463);
*(&local3) = $tmp2464;
// line 1392
panda$core$Bit $tmp2465 = *(&local3);
panda$core$Bit $tmp2466 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2465);
bool $tmp2467 = $tmp2466.value;
if ($tmp2467) goto block5; else goto block6;
block5:;
*(&local4) = $tmp2466;
goto block7;
block6:;
panda$collections$Array* $tmp2468 = *(&local0);
ITable* $tmp2469 = ((panda$collections$CollectionView*) $tmp2468)->$class->itable;
while ($tmp2469->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2469 = $tmp2469->next;
}
$fn2471 $tmp2470 = $tmp2469->methods[0];
panda$core$Int64 $tmp2472 = $tmp2470(((panda$collections$CollectionView*) $tmp2468));
panda$core$Int64 $tmp2473 = (panda$core$Int64) {1};
int64_t $tmp2474 = param2.value;
int64_t $tmp2475 = $tmp2473.value;
int64_t $tmp2476 = $tmp2474 - $tmp2475;
panda$core$Int64 $tmp2477 = (panda$core$Int64) {$tmp2476};
panda$core$Bit $tmp2478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2472, $tmp2477);
*(&local4) = $tmp2478;
goto block7;
block7:;
panda$core$Bit $tmp2479 = *(&local4);
bool $tmp2480 = $tmp2479.value;
if ($tmp2480) goto block8; else goto block9;
block8:;
// line 1393
panda$collections$Array* $tmp2481 = *(&local0);
panda$core$String$Index $tmp2482 = *(&local2);
panda$core$Bit $tmp2483 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2484 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2482, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2483);
panda$core$String* $tmp2485 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(param0, $tmp2484);
panda$collections$Array$add$panda$collections$Array$T($tmp2481, ((panda$core$Object*) $tmp2485));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2485));
// line 1394
goto block4;
block9:;
// line 1396
panda$core$Matcher* $tmp2486 = *(&local1);
panda$core$String$Index $tmp2487;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp2487, $tmp2486);
*(&local5) = $tmp2487;
// line 1397
panda$collections$Array* $tmp2488 = *(&local0);
panda$core$String$Index $tmp2489 = *(&local2);
panda$core$String$Index $tmp2490 = *(&local5);
panda$core$Bit $tmp2491 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp2492 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp2489, $tmp2490, $tmp2491);
panda$core$String* $tmp2493 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param0, $tmp2492);
panda$collections$Array$add$panda$collections$Array$T($tmp2488, ((panda$core$Object*) $tmp2493));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2493));
// line 1398
panda$core$String$Index $tmp2494 = *(&local5);
panda$core$Int64 $tmp2495 = $tmp2494.value;
panda$core$Matcher* $tmp2496 = *(&local1);
panda$core$String$Index $tmp2497;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp2497, $tmp2496);
panda$core$Int64 $tmp2498 = $tmp2497.value;
panda$core$Int64 $tmp2499 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp2495, $tmp2498);
panda$core$String$Index $tmp2500 = panda$core$String$Index$init$panda$core$Int64($tmp2499);
*(&local2) = $tmp2500;
goto block3;
block4:;
// line 1400
panda$collections$Array* $tmp2501 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2501));
panda$core$Matcher* $tmp2502 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2502));
// unreffing matcher
*(&local1) = ((panda$core$Matcher*) NULL);
panda$collections$Array* $tmp2503 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2503));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp2501;

}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* param0, panda$core$RegularExpression* param1) {

// line 1413
panda$core$Int64 $tmp2504 = (panda$core$Int64) {9223372036854775807};
panda$collections$Array* $tmp2505 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(param0, param1, $tmp2504);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2505));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2505));
return $tmp2505;

}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Bit local4;
// line 1424
panda$core$Int64* $tmp2506 = &param0->_length;
panda$core$Int64 $tmp2507 = *$tmp2506;
panda$core$Int64 $tmp2508 = (panda$core$Int64) {0};
panda$core$Bit $tmp2509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2507, $tmp2508);
bool $tmp2510 = $tmp2509.value;
if ($tmp2510) goto block1; else goto block2;
block1:;
// line 1425
return ((panda$core$Int64$nullable) { .nonnull = false });
block2:;
// line 1427
panda$core$Int64 $tmp2511 = (panda$core$Int64) {0};
*(&local0) = $tmp2511;
// line 1428
// line 1429
panda$core$Char8** $tmp2512 = &param0->data;
panda$core$Char8* $tmp2513 = *$tmp2512;
panda$core$Int64 $tmp2514 = (panda$core$Int64) {0};
int64_t $tmp2515 = $tmp2514.value;
panda$core$Char8 $tmp2516 = $tmp2513[$tmp2515];
panda$core$UInt8 $tmp2517 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp2518 = panda$core$Char8$init$panda$core$UInt8($tmp2517);
panda$core$Bit $tmp2519 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp2516, $tmp2518);
bool $tmp2520 = $tmp2519.value;
if ($tmp2520) goto block3; else goto block5;
block3:;
// line 1430
panda$core$Int64 $tmp2521 = (panda$core$Int64) {1};
*(&local1) = $tmp2521;
goto block4;
block5:;
// line 1
// line 1433
panda$core$Int64 $tmp2522 = (panda$core$Int64) {0};
*(&local1) = $tmp2522;
goto block4;
block4:;
// line 1435
panda$core$Int64 $tmp2523 = *(&local1);
panda$core$Int64* $tmp2524 = &param0->_length;
panda$core$Int64 $tmp2525 = *$tmp2524;
panda$core$Bit $tmp2526 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2527 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2523, $tmp2525, $tmp2526);
panda$core$Int64 $tmp2528 = $tmp2527.min;
*(&local2) = $tmp2528;
panda$core$Int64 $tmp2529 = $tmp2527.max;
panda$core$Bit $tmp2530 = $tmp2527.inclusive;
bool $tmp2531 = $tmp2530.value;
panda$core$Int64 $tmp2532 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2533 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2532);
if ($tmp2531) goto block9; else goto block10;
block9:;
int64_t $tmp2534 = $tmp2528.value;
int64_t $tmp2535 = $tmp2529.value;
bool $tmp2536 = $tmp2534 <= $tmp2535;
panda$core$Bit $tmp2537 = (panda$core$Bit) {$tmp2536};
bool $tmp2538 = $tmp2537.value;
if ($tmp2538) goto block6; else goto block7;
block10:;
int64_t $tmp2539 = $tmp2528.value;
int64_t $tmp2540 = $tmp2529.value;
bool $tmp2541 = $tmp2539 < $tmp2540;
panda$core$Bit $tmp2542 = (panda$core$Bit) {$tmp2541};
bool $tmp2543 = $tmp2542.value;
if ($tmp2543) goto block6; else goto block7;
block6:;
// line 1436
panda$core$Char8** $tmp2544 = &param0->data;
panda$core$Char8* $tmp2545 = *$tmp2544;
panda$core$Int64 $tmp2546 = *(&local2);
int64_t $tmp2547 = $tmp2546.value;
panda$core$Char8 $tmp2548 = $tmp2545[$tmp2547];
uint8_t $tmp2549 = $tmp2548.value;
panda$core$Int64 $tmp2550 = (panda$core$Int64) {((int64_t) $tmp2549)};
panda$core$Int64 $tmp2551 = (panda$core$Int64) {48};
int64_t $tmp2552 = $tmp2550.value;
int64_t $tmp2553 = $tmp2551.value;
int64_t $tmp2554 = $tmp2552 - $tmp2553;
panda$core$Int64 $tmp2555 = (panda$core$Int64) {$tmp2554};
*(&local3) = $tmp2555;
// line 1437
panda$core$Int64 $tmp2556 = *(&local3);
panda$core$Int64 $tmp2557 = (panda$core$Int64) {0};
int64_t $tmp2558 = $tmp2556.value;
int64_t $tmp2559 = $tmp2557.value;
bool $tmp2560 = $tmp2558 < $tmp2559;
panda$core$Bit $tmp2561 = (panda$core$Bit) {$tmp2560};
bool $tmp2562 = $tmp2561.value;
if ($tmp2562) goto block11; else goto block12;
block11:;
*(&local4) = $tmp2561;
goto block13;
block12:;
panda$core$Int64 $tmp2563 = *(&local3);
panda$core$Int64 $tmp2564 = (panda$core$Int64) {9};
int64_t $tmp2565 = $tmp2563.value;
int64_t $tmp2566 = $tmp2564.value;
bool $tmp2567 = $tmp2565 > $tmp2566;
panda$core$Bit $tmp2568 = (panda$core$Bit) {$tmp2567};
*(&local4) = $tmp2568;
goto block13;
block13:;
panda$core$Bit $tmp2569 = *(&local4);
bool $tmp2570 = $tmp2569.value;
if ($tmp2570) goto block14; else goto block15;
block14:;
// line 1438
return ((panda$core$Int64$nullable) { .nonnull = false });
block15:;
// line 1440
panda$core$Int64 $tmp2571 = *(&local0);
panda$core$Int64 $tmp2572 = (panda$core$Int64) {10};
int64_t $tmp2573 = $tmp2571.value;
int64_t $tmp2574 = $tmp2572.value;
int64_t $tmp2575 = $tmp2573 * $tmp2574;
panda$core$Int64 $tmp2576 = (panda$core$Int64) {$tmp2575};
panda$core$Int64 $tmp2577 = *(&local3);
int64_t $tmp2578 = $tmp2576.value;
int64_t $tmp2579 = $tmp2577.value;
int64_t $tmp2580 = $tmp2578 + $tmp2579;
panda$core$Int64 $tmp2581 = (panda$core$Int64) {$tmp2580};
*(&local0) = $tmp2581;
goto block8;
block8:;
panda$core$Int64 $tmp2582 = *(&local2);
int64_t $tmp2583 = $tmp2529.value;
int64_t $tmp2584 = $tmp2582.value;
int64_t $tmp2585 = $tmp2583 - $tmp2584;
panda$core$Int64 $tmp2586 = (panda$core$Int64) {$tmp2585};
panda$core$UInt64 $tmp2587 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2586);
if ($tmp2531) goto block17; else goto block18;
block17:;
uint64_t $tmp2588 = $tmp2587.value;
uint64_t $tmp2589 = $tmp2533.value;
bool $tmp2590 = $tmp2588 >= $tmp2589;
panda$core$Bit $tmp2591 = (panda$core$Bit) {$tmp2590};
bool $tmp2592 = $tmp2591.value;
if ($tmp2592) goto block16; else goto block7;
block18:;
uint64_t $tmp2593 = $tmp2587.value;
uint64_t $tmp2594 = $tmp2533.value;
bool $tmp2595 = $tmp2593 > $tmp2594;
panda$core$Bit $tmp2596 = (panda$core$Bit) {$tmp2595};
bool $tmp2597 = $tmp2596.value;
if ($tmp2597) goto block16; else goto block7;
block16:;
int64_t $tmp2598 = $tmp2582.value;
int64_t $tmp2599 = $tmp2532.value;
int64_t $tmp2600 = $tmp2598 + $tmp2599;
panda$core$Int64 $tmp2601 = (panda$core$Int64) {$tmp2600};
*(&local2) = $tmp2601;
goto block6;
block7:;
// line 1442
panda$core$Char8** $tmp2602 = &param0->data;
panda$core$Char8* $tmp2603 = *$tmp2602;
panda$core$Int64 $tmp2604 = (panda$core$Int64) {0};
int64_t $tmp2605 = $tmp2604.value;
panda$core$Char8 $tmp2606 = $tmp2603[$tmp2605];
panda$core$UInt8 $tmp2607 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp2608 = panda$core$Char8$init$panda$core$UInt8($tmp2607);
panda$core$Bit $tmp2609 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp2606, $tmp2608);
bool $tmp2610 = $tmp2609.value;
if ($tmp2610) goto block19; else goto block20;
block19:;
// line 1443
panda$core$Int64 $tmp2611 = *(&local0);
panda$core$Int64 $tmp2612 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp2611);
*(&local0) = $tmp2612;
goto block20;
block20:;
// line 1445
panda$core$Int64 $tmp2613 = *(&local0);
return ((panda$core$Int64$nullable) { $tmp2613, true });

}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* param0) {

panda$core$UInt64 local0;
panda$core$Int64 local1;
panda$core$UInt64 local2;
panda$core$Bit local3;
// line 1455
panda$core$Int64* $tmp2614 = &param0->_length;
panda$core$Int64 $tmp2615 = *$tmp2614;
panda$core$Int64 $tmp2616 = (panda$core$Int64) {0};
panda$core$Bit $tmp2617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2615, $tmp2616);
bool $tmp2618 = $tmp2617.value;
if ($tmp2618) goto block1; else goto block2;
block1:;
// line 1456
return ((panda$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 1458
panda$core$UInt64 $tmp2619 = (panda$core$UInt64) {0};
*(&local0) = $tmp2619;
// line 1459
panda$core$Int64 $tmp2620 = (panda$core$Int64) {0};
panda$core$Int64* $tmp2621 = &param0->_length;
panda$core$Int64 $tmp2622 = *$tmp2621;
panda$core$Bit $tmp2623 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2624 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2620, $tmp2622, $tmp2623);
panda$core$Int64 $tmp2625 = $tmp2624.min;
*(&local1) = $tmp2625;
panda$core$Int64 $tmp2626 = $tmp2624.max;
panda$core$Bit $tmp2627 = $tmp2624.inclusive;
bool $tmp2628 = $tmp2627.value;
panda$core$Int64 $tmp2629 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2630 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2629);
if ($tmp2628) goto block6; else goto block7;
block6:;
int64_t $tmp2631 = $tmp2625.value;
int64_t $tmp2632 = $tmp2626.value;
bool $tmp2633 = $tmp2631 <= $tmp2632;
panda$core$Bit $tmp2634 = (panda$core$Bit) {$tmp2633};
bool $tmp2635 = $tmp2634.value;
if ($tmp2635) goto block3; else goto block4;
block7:;
int64_t $tmp2636 = $tmp2625.value;
int64_t $tmp2637 = $tmp2626.value;
bool $tmp2638 = $tmp2636 < $tmp2637;
panda$core$Bit $tmp2639 = (panda$core$Bit) {$tmp2638};
bool $tmp2640 = $tmp2639.value;
if ($tmp2640) goto block3; else goto block4;
block3:;
// line 1460
panda$core$Char8** $tmp2641 = &param0->data;
panda$core$Char8* $tmp2642 = *$tmp2641;
panda$core$Int64 $tmp2643 = *(&local1);
int64_t $tmp2644 = $tmp2643.value;
panda$core$Char8 $tmp2645 = $tmp2642[$tmp2644];
uint8_t $tmp2646 = $tmp2645.value;
panda$core$UInt64 $tmp2647 = (panda$core$UInt64) {((uint64_t) $tmp2646)};
panda$core$UInt64 $tmp2648 = (panda$core$UInt64) {48};
uint64_t $tmp2649 = $tmp2647.value;
uint64_t $tmp2650 = $tmp2648.value;
uint64_t $tmp2651 = $tmp2649 - $tmp2650;
panda$core$UInt64 $tmp2652 = (panda$core$UInt64) {$tmp2651};
*(&local2) = $tmp2652;
// line 1461
panda$core$UInt64 $tmp2653 = *(&local2);
panda$core$UInt64 $tmp2654 = (panda$core$UInt64) {0};
uint64_t $tmp2655 = $tmp2653.value;
uint64_t $tmp2656 = $tmp2654.value;
bool $tmp2657 = $tmp2655 < $tmp2656;
panda$core$Bit $tmp2658 = (panda$core$Bit) {$tmp2657};
bool $tmp2659 = $tmp2658.value;
if ($tmp2659) goto block8; else goto block9;
block8:;
*(&local3) = $tmp2658;
goto block10;
block9:;
panda$core$UInt64 $tmp2660 = *(&local2);
panda$core$UInt64 $tmp2661 = (panda$core$UInt64) {9};
uint64_t $tmp2662 = $tmp2660.value;
uint64_t $tmp2663 = $tmp2661.value;
bool $tmp2664 = $tmp2662 > $tmp2663;
panda$core$Bit $tmp2665 = (panda$core$Bit) {$tmp2664};
*(&local3) = $tmp2665;
goto block10;
block10:;
panda$core$Bit $tmp2666 = *(&local3);
bool $tmp2667 = $tmp2666.value;
if ($tmp2667) goto block11; else goto block12;
block11:;
// line 1462
return ((panda$core$UInt64$nullable) { .nonnull = false });
block12:;
// line 1464
panda$core$UInt64 $tmp2668 = *(&local0);
panda$core$UInt64 $tmp2669 = (panda$core$UInt64) {10};
uint64_t $tmp2670 = $tmp2668.value;
uint64_t $tmp2671 = $tmp2669.value;
uint64_t $tmp2672 = $tmp2670 * $tmp2671;
panda$core$UInt64 $tmp2673 = (panda$core$UInt64) {$tmp2672};
panda$core$UInt64 $tmp2674 = *(&local2);
uint64_t $tmp2675 = $tmp2673.value;
uint64_t $tmp2676 = $tmp2674.value;
uint64_t $tmp2677 = $tmp2675 + $tmp2676;
panda$core$UInt64 $tmp2678 = (panda$core$UInt64) {$tmp2677};
*(&local0) = $tmp2678;
goto block5;
block5:;
panda$core$Int64 $tmp2679 = *(&local1);
int64_t $tmp2680 = $tmp2626.value;
int64_t $tmp2681 = $tmp2679.value;
int64_t $tmp2682 = $tmp2680 - $tmp2681;
panda$core$Int64 $tmp2683 = (panda$core$Int64) {$tmp2682};
panda$core$UInt64 $tmp2684 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2683);
if ($tmp2628) goto block14; else goto block15;
block14:;
uint64_t $tmp2685 = $tmp2684.value;
uint64_t $tmp2686 = $tmp2630.value;
bool $tmp2687 = $tmp2685 >= $tmp2686;
panda$core$Bit $tmp2688 = (panda$core$Bit) {$tmp2687};
bool $tmp2689 = $tmp2688.value;
if ($tmp2689) goto block13; else goto block4;
block15:;
uint64_t $tmp2690 = $tmp2684.value;
uint64_t $tmp2691 = $tmp2630.value;
bool $tmp2692 = $tmp2690 > $tmp2691;
panda$core$Bit $tmp2693 = (panda$core$Bit) {$tmp2692};
bool $tmp2694 = $tmp2693.value;
if ($tmp2694) goto block13; else goto block4;
block13:;
int64_t $tmp2695 = $tmp2679.value;
int64_t $tmp2696 = $tmp2629.value;
int64_t $tmp2697 = $tmp2695 + $tmp2696;
panda$core$Int64 $tmp2698 = (panda$core$Int64) {$tmp2697};
*(&local1) = $tmp2698;
goto block3;
block4:;
// line 1466
panda$core$UInt64 $tmp2699 = *(&local0);
return ((panda$core$UInt64$nullable) { $tmp2699, true });

}
panda$core$Real64$nullable panda$core$String$convert$R$panda$core$Real64$Q(panda$core$String* param0) {

// line 1476
panda$core$Real64 $tmp2700;
panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(&$tmp2700, param0);
return ((panda$core$Real64$nullable) { $tmp2700, true });

}
panda$core$Int64 panda$core$String$get_hash$R$panda$core$Int64(panda$core$String* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 1484
panda$core$Int64 $tmp2701 = (panda$core$Int64) {1};
*(&local0) = $tmp2701;
// line 1485
panda$core$Int64 $tmp2702 = (panda$core$Int64) {0};
panda$core$Int64* $tmp2703 = &param0->_length;
panda$core$Int64 $tmp2704 = *$tmp2703;
panda$core$Bit $tmp2705 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2706 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2702, $tmp2704, $tmp2705);
panda$core$Int64 $tmp2707 = $tmp2706.min;
*(&local1) = $tmp2707;
panda$core$Int64 $tmp2708 = $tmp2706.max;
panda$core$Bit $tmp2709 = $tmp2706.inclusive;
bool $tmp2710 = $tmp2709.value;
panda$core$Int64 $tmp2711 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2712 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2711);
if ($tmp2710) goto block4; else goto block5;
block4:;
int64_t $tmp2713 = $tmp2707.value;
int64_t $tmp2714 = $tmp2708.value;
bool $tmp2715 = $tmp2713 <= $tmp2714;
panda$core$Bit $tmp2716 = (panda$core$Bit) {$tmp2715};
bool $tmp2717 = $tmp2716.value;
if ($tmp2717) goto block1; else goto block2;
block5:;
int64_t $tmp2718 = $tmp2707.value;
int64_t $tmp2719 = $tmp2708.value;
bool $tmp2720 = $tmp2718 < $tmp2719;
panda$core$Bit $tmp2721 = (panda$core$Bit) {$tmp2720};
bool $tmp2722 = $tmp2721.value;
if ($tmp2722) goto block1; else goto block2;
block1:;
// line 1486
panda$core$Int64 $tmp2723 = *(&local0);
panda$core$Int64 $tmp2724 = (panda$core$Int64) {101};
int64_t $tmp2725 = $tmp2723.value;
int64_t $tmp2726 = $tmp2724.value;
int64_t $tmp2727 = $tmp2725 * $tmp2726;
panda$core$Int64 $tmp2728 = (panda$core$Int64) {$tmp2727};
panda$core$Char8** $tmp2729 = &param0->data;
panda$core$Char8* $tmp2730 = *$tmp2729;
panda$core$Int64 $tmp2731 = *(&local1);
int64_t $tmp2732 = $tmp2731.value;
panda$core$Char8 $tmp2733 = $tmp2730[$tmp2732];
uint8_t $tmp2734 = $tmp2733.value;
panda$core$Int64 $tmp2735 = (panda$core$Int64) {((int64_t) $tmp2734)};
int64_t $tmp2736 = $tmp2728.value;
int64_t $tmp2737 = $tmp2735.value;
int64_t $tmp2738 = $tmp2736 + $tmp2737;
panda$core$Int64 $tmp2739 = (panda$core$Int64) {$tmp2738};
*(&local0) = $tmp2739;
goto block3;
block3:;
panda$core$Int64 $tmp2740 = *(&local1);
int64_t $tmp2741 = $tmp2708.value;
int64_t $tmp2742 = $tmp2740.value;
int64_t $tmp2743 = $tmp2741 - $tmp2742;
panda$core$Int64 $tmp2744 = (panda$core$Int64) {$tmp2743};
panda$core$UInt64 $tmp2745 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2744);
if ($tmp2710) goto block7; else goto block8;
block7:;
uint64_t $tmp2746 = $tmp2745.value;
uint64_t $tmp2747 = $tmp2712.value;
bool $tmp2748 = $tmp2746 >= $tmp2747;
panda$core$Bit $tmp2749 = (panda$core$Bit) {$tmp2748};
bool $tmp2750 = $tmp2749.value;
if ($tmp2750) goto block6; else goto block2;
block8:;
uint64_t $tmp2751 = $tmp2745.value;
uint64_t $tmp2752 = $tmp2712.value;
bool $tmp2753 = $tmp2751 > $tmp2752;
panda$core$Bit $tmp2754 = (panda$core$Bit) {$tmp2753};
bool $tmp2755 = $tmp2754.value;
if ($tmp2755) goto block6; else goto block2;
block6:;
int64_t $tmp2756 = $tmp2740.value;
int64_t $tmp2757 = $tmp2711.value;
int64_t $tmp2758 = $tmp2756 + $tmp2757;
panda$core$Int64 $tmp2759 = (panda$core$Int64) {$tmp2758};
*(&local1) = $tmp2759;
goto block1;
block2:;
// line 1497
panda$core$Int64 $tmp2760 = *(&local0);
return $tmp2760;

}

