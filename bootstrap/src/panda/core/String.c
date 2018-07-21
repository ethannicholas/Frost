#include "panda/core/String.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/String/UTF8List.h"
#include "panda/core/String/UTF16Iterator.h"
#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/String/Index.h"
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
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
__attribute__((weak)) panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p0, ((panda$core$String*) p1));

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim(panda$core$String* p0) {
    panda$collections$Iterator* result = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$String$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$String$_panda$core$Formattable, { panda$core$String$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$_panda$collections$Key, { panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim} };

static panda$core$String $s1;
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$format$panda$core$String$R$panda$core$String, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$convert$R$panda$core$Real64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn11)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn32)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn76)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn83)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn90)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn167)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn331)(panda$core$Object*);
typedef panda$core$String* (*$fn431)(panda$core$Object*);
typedef panda$core$Object* (*$fn1182)(panda$core$Object*, panda$core$String*);
typedef panda$core$Object* (*$fn1183)(panda$core$String*);
typedef panda$core$String* (*$fn1184)(panda$core$Object*);
typedef panda$core$Object* (*$fn1248)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1249)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1250)(panda$core$Object*);
typedef panda$core$Int64 (*$fn1504)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1557)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 8838008024670810340, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 116, 8869514823175806901, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -4469378539822486423, NULL };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length) {
    panda$core$Int64 $tmp2;
    panda$core$String* $tmp3;
    panda$core$String* $tmp4;
    self->owner = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->_hash = $tmp2;
    self->data = p_data;
    self->_length = p_length;
    {
        $tmp3 = self->owner;
        $tmp4 = NULL;
        self->owner = $tmp4;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    }
}
void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length, panda$core$String* p_owner) {
    panda$core$Int64 $tmp5;
    panda$core$String* $tmp6;
    panda$core$String* $tmp7;
    self->owner = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp5, 0);
    self->_hash = $tmp5;
    self->data = p_data;
    self->_length = p_length;
    {
        $tmp6 = self->owner;
        $tmp7 = p_owner;
        self->owner = $tmp7;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
    }
}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self, panda$collections$ListView* p_chars) {
    panda$core$Int64 $tmp8;
    panda$core$Range$LTpanda$core$Int64$GT $tmp13;
    panda$core$Int64 $tmp14;
    panda$core$Bit $tmp15;
    panda$core$Object* $tmp29;
    panda$core$String* $tmp40;
    panda$core$String* $tmp41;
    self->owner = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp8, 0);
    self->_hash = $tmp8;
    ITable* $tmp9 = ((panda$collections$CollectionView*) p_chars)->$class->itable;
    while ($tmp9->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp9 = $tmp9->next;
    }
    $fn11 $tmp10 = $tmp9->methods[0];
    panda$core$Int64 $tmp12 = $tmp10(((panda$collections$CollectionView*) p_chars));
    self->_length = $tmp12;
    self->data = ((panda$core$Char8*) pandaZAlloc(self->_length.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp14, 0);
    panda$core$Bit$init$builtin_bit(&$tmp15, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp13, $tmp14, self->_length, $tmp15);
    int64_t $tmp17 = $tmp13.min.value;
    panda$core$Int64 i16 = { $tmp17 };
    int64_t $tmp19 = $tmp13.max.value;
    bool $tmp20 = $tmp13.inclusive.value;
    if ($tmp20) goto $l27; else goto $l28;
    $l27:;
    if ($tmp17 <= $tmp19) goto $l21; else goto $l23;
    $l28:;
    if ($tmp17 < $tmp19) goto $l21; else goto $l23;
    $l21:;
    {
        ITable* $tmp30 = p_chars->$class->itable;
        while ($tmp30->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp30 = $tmp30->next;
        }
        $fn32 $tmp31 = $tmp30->methods[0];
        panda$core$Object* $tmp33 = $tmp31(p_chars, i16);
        $tmp29 = $tmp33;
        self->data[i16.value] = ((panda$core$Char8$wrapper*) $tmp29)->value;
        panda$core$Panda$unref$panda$core$Object$Q($tmp29);
    }
    $l24:;
    int64_t $tmp35 = $tmp19 - i16.value;
    if ($tmp20) goto $l36; else goto $l37;
    $l36:;
    if ((uint64_t) $tmp35 >= 1) goto $l34; else goto $l23;
    $l37:;
    if ((uint64_t) $tmp35 > 1) goto $l34; else goto $l23;
    $l34:;
    i16.value += 1;
    goto $l21;
    $l23:;
    {
        $tmp40 = self->owner;
        $tmp41 = NULL;
        self->owner = $tmp41;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
    }
}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self) {
    panda$core$String* $returnValue42;
    panda$core$String* $tmp43;
    $tmp43 = self;
    $returnValue42 = $tmp43;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
    return $returnValue42;
}
panda$core$String* panda$core$String$format$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_fmt) {
    panda$core$String* $match$376_948 = NULL;
    panda$core$String* $tmp49;
    panda$core$String* $returnValue52;
    panda$core$String* $tmp53;
    panda$core$MutableString* result61 = NULL;
    panda$core$MutableString* $tmp62;
    panda$core$MutableString* $tmp63;
    panda$collections$Iterator* Iter$381$1769 = NULL;
    panda$collections$Iterator* $tmp70;
    panda$collections$Iterator* $tmp71;
    panda$collections$ListView* $tmp72;
    panda$core$Char8 c86;
    panda$core$Object* $tmp87;
    panda$core$Char8 $match$382_2192;
    panda$core$Char8 $tmp93;
    panda$core$UInt8 $tmp94;
    panda$core$Char8 $tmp97;
    panda$core$UInt8 $tmp98;
    panda$core$Char8 $tmp101;
    panda$core$UInt8 $tmp102;
    panda$core$Char8 $tmp105;
    panda$core$UInt8 $tmp106;
    panda$core$Char8 $tmp109;
    panda$core$UInt8 $tmp110;
    panda$core$UInt8 $tmp115;
    panda$core$UInt8 $tmp119;
    panda$core$Char8 $tmp122;
    panda$core$UInt8 $tmp123;
    panda$core$Char8 $tmp125;
    panda$core$UInt8 $tmp126;
    panda$core$String* $tmp127;
    panda$core$String* $tmp128;
    panda$core$Bit $tmp134;
    int $tmp47;
    {
        $tmp49 = p_fmt;
        $match$376_948 = $tmp49;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
        panda$core$Bit $tmp51 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$376_948, &$s50);
        if ($tmp51.value) {
        {
            $tmp53 = self;
            $returnValue52 = $tmp53;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
            $tmp47 = 0;
            goto $l45;
            $l54:;
            return $returnValue52;
        }
        }
        else {
        panda$core$Bit $tmp57 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$376_948, &$s56);
        if ($tmp57.value) {
        {
            int $tmp60;
            {
                panda$core$MutableString* $tmp64 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp64, &$s65);
                $tmp63 = $tmp64;
                $tmp62 = $tmp63;
                result61 = $tmp62;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
                {
                    int $tmp68;
                    {
                        panda$collections$ListView* $tmp73 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(self);
                        $tmp72 = $tmp73;
                        ITable* $tmp74 = ((panda$collections$Iterable*) $tmp72)->$class->itable;
                        while ($tmp74->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp74 = $tmp74->next;
                        }
                        $fn76 $tmp75 = $tmp74->methods[0];
                        panda$collections$Iterator* $tmp77 = $tmp75(((panda$collections$Iterable*) $tmp72));
                        $tmp71 = $tmp77;
                        $tmp70 = $tmp71;
                        Iter$381$1769 = $tmp70;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
                        $l78:;
                        ITable* $tmp81 = Iter$381$1769->$class->itable;
                        while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp81 = $tmp81->next;
                        }
                        $fn83 $tmp82 = $tmp81->methods[0];
                        panda$core$Bit $tmp84 = $tmp82(Iter$381$1769);
                        panda$core$Bit $tmp85 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp84);
                        bool $tmp80 = $tmp85.value;
                        if (!$tmp80) goto $l79;
                        {
                            ITable* $tmp88 = Iter$381$1769->$class->itable;
                            while ($tmp88->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp88 = $tmp88->next;
                            }
                            $fn90 $tmp89 = $tmp88->methods[1];
                            panda$core$Object* $tmp91 = $tmp89(Iter$381$1769);
                            $tmp87 = $tmp91;
                            c86 = ((panda$core$Char8$wrapper*) $tmp87)->value;
                            panda$core$Panda$unref$panda$core$Object$Q($tmp87);
                            {
                                $match$382_2192 = c86;
                                panda$core$UInt8$init$builtin_uint8(&$tmp94, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp93, $tmp94);
                                panda$core$Bit $tmp95 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$382_2192, $tmp93);
                                if ($tmp95.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s96);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp98, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp97, $tmp98);
                                panda$core$Bit $tmp99 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$382_2192, $tmp97);
                                if ($tmp99.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s100);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp102, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp101, $tmp102);
                                panda$core$Bit $tmp103 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$382_2192, $tmp101);
                                if ($tmp103.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s104);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp106, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp105, $tmp106);
                                panda$core$Bit $tmp107 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$382_2192, $tmp105);
                                if ($tmp107.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s108);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp110, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp109, $tmp110);
                                panda$core$Bit $tmp111 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$382_2192, $tmp109);
                                if ($tmp111.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s112);
                                }
                                }
                                else {
                                {
                                    panda$core$UInt8 $tmp114 = panda$core$Char8$convert$R$panda$core$UInt8(c86);
                                    panda$core$UInt8$init$builtin_uint8(&$tmp115, 32);
                                    panda$core$Bit $tmp116 = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit($tmp114, $tmp115);
                                    bool $tmp113 = $tmp116.value;
                                    if (!$tmp113) goto $l117;
                                    panda$core$UInt8 $tmp118 = panda$core$Char8$convert$R$panda$core$UInt8(c86);
                                    panda$core$UInt8$init$builtin_uint8(&$tmp119, 126);
                                    panda$core$Bit $tmp120 = panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit($tmp118, $tmp119);
                                    $tmp113 = $tmp120.value;
                                    $l117:;
                                    panda$core$Bit $tmp121 = { $tmp113 };
                                    if ($tmp121.value) {
                                    {
                                        panda$core$MutableString$append$panda$core$Char8(result61, c86);
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$UInt8$init$builtin_uint8(&$tmp123, 63);
                                        panda$core$Char8$init$panda$core$UInt8(&$tmp122, $tmp123);
                                        panda$core$MutableString$append$panda$core$Char8(result61, $tmp122);
                                    }
                                    }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                        }
                        goto $l78;
                        $l79:;
                    }
                    $tmp68 = -1;
                    goto $l66;
                    $l66:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$381$1769));
                    Iter$381$1769 = NULL;
                    switch ($tmp68) {
                        case -1: goto $l124;
                    }
                    $l124:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp126, 34);
                panda$core$Char8$init$panda$core$UInt8(&$tmp125, $tmp126);
                panda$core$MutableString$append$panda$core$Char8(result61, $tmp125);
                panda$core$String* $tmp129 = panda$core$MutableString$finish$R$panda$core$String(result61);
                $tmp128 = $tmp129;
                $tmp127 = $tmp128;
                $returnValue52 = $tmp127;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
                $tmp60 = 0;
                goto $l58;
                $l130:;
                $tmp47 = 1;
                goto $l45;
                $l131:;
                return $returnValue52;
            }
            $l58:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result61));
            result61 = NULL;
            switch ($tmp60) {
                case 0: goto $l130;
            }
            $l133:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp134, false);
            if ($tmp134.value) goto $l135; else goto $l136;
            $l136:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s137, (panda$core$Int64) { 402 });
            abort();
            $l135:;
        }
        }
        }
    }
    $tmp47 = -1;
    goto $l45;
    $l45:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
    switch ($tmp47) {
        case 1: goto $l131;
        case 0: goto $l54;
        case -1: goto $l138;
    }
    $l138:;
    if (false) goto $l139; else goto $l140;
    $l140:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s141, (panda$core$Int64) { 375 }, &$s142);
    abort();
    $l139:;
    abort();
}
void panda$core$String$cleanup(panda$core$String* self) {
    int $tmp145;
    {
        if (((panda$core$Bit) { self->owner == NULL }).value) {
        {
            pandaFree(self->data);
        }
        }
    }
    $tmp145 = -1;
    goto $l143;
    $l143:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp145) {
        case -1: goto $l146;
    }
    $l146:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->owner));
}
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self) {
    panda$collections$ListView* $returnValue147;
    panda$collections$ListView* $tmp148;
    panda$core$String$UTF8List* $tmp149;
    panda$core$String$UTF8List* $tmp150 = (panda$core$String$UTF8List*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$UTF8List$class);
    panda$core$String$UTF8List$init$panda$core$String($tmp150, self);
    $tmp149 = $tmp150;
    $tmp148 = ((panda$collections$ListView*) $tmp149);
    $returnValue147 = $tmp148;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
    return $returnValue147;
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$collections$Iterator* $returnValue152;
    panda$collections$Iterator* $tmp153;
    panda$core$String$UTF16Iterator* $tmp154;
    panda$core$String$UTF16Iterator* $tmp155 = (panda$core$String$UTF16Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF16Iterator$class);
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp155, self);
    $tmp154 = $tmp155;
    $tmp153 = ((panda$collections$Iterator*) $tmp154);
    $returnValue152 = $tmp153;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
    return $returnValue152;
}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$collections$Iterator* $returnValue157;
    panda$collections$Iterator* $tmp158;
    panda$core$String$UTF32Iterator* $tmp159;
    panda$core$String$UTF32Iterator* $tmp160 = (panda$core$String$UTF32Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF32Iterator$class);
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp160, self);
    $tmp159 = $tmp160;
    $tmp158 = ((panda$collections$Iterator*) $tmp159);
    $returnValue157 = $tmp158;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
    return $returnValue157;
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $returnValue162;
    panda$collections$Iterator* $tmp163;
    panda$collections$Iterator* $tmp164 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
    $tmp163 = $tmp164;
    ITable* $tmp165 = $tmp163->$class->itable;
    while ($tmp165->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp165 = $tmp165->next;
    }
    $fn167 $tmp166 = $tmp165->methods[2];
    panda$core$Int64 $tmp168 = $tmp166($tmp163);
    $returnValue162 = $tmp168;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
    return $returnValue162;
}
panda$core$Int64 panda$core$String$byteLength$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $returnValue170;
    $returnValue170 = self->_length;
    return $returnValue170;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue173;
    panda$core$Bit $tmp174;
    panda$core$Range$LTpanda$core$Int64$GT $tmp176;
    panda$core$Int64 $tmp177;
    panda$core$Bit $tmp178;
    panda$core$Bit $tmp193;
    panda$core$Bit $tmp201;
    panda$core$Bit $tmp172 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp172.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp174, false);
        $returnValue173 = $tmp174;
        return $returnValue173;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp177, 0);
    panda$core$Bit$init$builtin_bit(&$tmp178, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp176, $tmp177, p_other->_length, $tmp178);
    int64_t $tmp180 = $tmp176.min.value;
    panda$core$Int64 i179 = { $tmp180 };
    int64_t $tmp182 = $tmp176.max.value;
    bool $tmp183 = $tmp176.inclusive.value;
    if ($tmp183) goto $l190; else goto $l191;
    $l190:;
    if ($tmp180 <= $tmp182) goto $l184; else goto $l186;
    $l191:;
    if ($tmp180 < $tmp182) goto $l184; else goto $l186;
    $l184:;
    {
        panda$core$Bit $tmp192 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i179.value], p_other->data[i179.value]);
        if ($tmp192.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp193, false);
            $returnValue173 = $tmp193;
            return $returnValue173;
        }
        }
    }
    $l187:;
    int64_t $tmp196 = $tmp182 - i179.value;
    if ($tmp183) goto $l197; else goto $l198;
    $l197:;
    if ((uint64_t) $tmp196 >= 1) goto $l195; else goto $l186;
    $l198:;
    if ((uint64_t) $tmp196 > 1) goto $l195; else goto $l186;
    $l195:;
    i179.value += 1;
    goto $l184;
    $l186:;
    panda$core$Bit$init$builtin_bit(&$tmp201, true);
    $returnValue173 = $tmp201;
    return $returnValue173;
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue204;
    panda$core$Bit $tmp205;
    panda$core$Range$LTpanda$core$Int64$GT $tmp207;
    panda$core$Int64 $tmp208;
    panda$core$Bit $tmp209;
    panda$core$Bit $tmp226;
    panda$core$Bit $tmp234;
    panda$core$Bit $tmp203 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp203.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp205, false);
        $returnValue204 = $tmp205;
        return $returnValue204;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp208, 0);
    panda$core$Bit$init$builtin_bit(&$tmp209, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp207, $tmp208, p_other->_length, $tmp209);
    int64_t $tmp211 = $tmp207.min.value;
    panda$core$Int64 i210 = { $tmp211 };
    int64_t $tmp213 = $tmp207.max.value;
    bool $tmp214 = $tmp207.inclusive.value;
    if ($tmp214) goto $l221; else goto $l222;
    $l221:;
    if ($tmp211 <= $tmp213) goto $l215; else goto $l217;
    $l222:;
    if ($tmp211 < $tmp213) goto $l215; else goto $l217;
    $l215:;
    {
        panda$core$Int64 $tmp223 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp224 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp223, i210);
        panda$core$Bit $tmp225 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp224.value], p_other->data[i210.value]);
        if ($tmp225.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp226, false);
            $returnValue204 = $tmp226;
            return $returnValue204;
        }
        }
    }
    $l218:;
    int64_t $tmp229 = $tmp213 - i210.value;
    if ($tmp214) goto $l230; else goto $l231;
    $l230:;
    if ((uint64_t) $tmp229 >= 1) goto $l228; else goto $l217;
    $l231:;
    if ((uint64_t) $tmp229 > 1) goto $l228; else goto $l217;
    $l228:;
    i210.value += 1;
    goto $l215;
    $l217:;
    panda$core$Bit$init$builtin_bit(&$tmp234, true);
    $returnValue204 = $tmp234;
    return $returnValue204;
}
panda$core$String* panda$core$String$trim$R$panda$core$String(panda$core$String* self) {
    panda$core$Int64 $tmp236;
    panda$core$String* $returnValue238;
    panda$core$String* $tmp239;
    panda$core$Int64 start241;
    panda$core$Int64 $tmp242;
    panda$core$Int64 $tmp251;
    panda$core$Int64 end253;
    panda$core$Int64 $tmp254;
    panda$core$Int64 $tmp264;
    panda$core$String* $tmp266;
    panda$core$String* $tmp267;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp268;
    panda$core$String$Index $tmp269;
    panda$core$String$Index $tmp270;
    panda$core$Bit $tmp271;
    panda$core$Int64$init$builtin_int64(&$tmp236, 0);
    panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp236);
    if ($tmp237.value) {
    {
        $tmp239 = self;
        $returnValue238 = $tmp239;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
        return $returnValue238;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp242, 0);
    start241 = $tmp242;
    $l243:;
    panda$core$Bit $tmp247 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start241, self->_length);
    bool $tmp246 = $tmp247.value;
    if (!$tmp246) goto $l248;
    panda$core$Bit $tmp249 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start241.value]);
    $tmp246 = $tmp249.value;
    $l248:;
    panda$core$Bit $tmp250 = { $tmp246 };
    bool $tmp245 = $tmp250.value;
    if (!$tmp245) goto $l244;
    {
        panda$core$Int64$init$builtin_int64(&$tmp251, 1);
        panda$core$Int64 $tmp252 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start241, $tmp251);
        start241 = $tmp252;
    }
    goto $l243;
    $l244:;
    panda$core$Int64$init$builtin_int64(&$tmp254, 1);
    panda$core$Int64 $tmp255 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp254);
    end253 = $tmp255;
    $l256:;
    panda$core$Bit $tmp260 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end253, start241);
    bool $tmp259 = $tmp260.value;
    if (!$tmp259) goto $l261;
    panda$core$Bit $tmp262 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end253.value]);
    $tmp259 = $tmp262.value;
    $l261:;
    panda$core$Bit $tmp263 = { $tmp259 };
    bool $tmp258 = $tmp263.value;
    if (!$tmp258) goto $l257;
    {
        panda$core$Int64$init$builtin_int64(&$tmp264, 1);
        panda$core$Int64 $tmp265 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end253, $tmp264);
        end253 = $tmp265;
    }
    goto $l256;
    $l257:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp269, start241);
    panda$core$String$Index$init$panda$core$Int64(&$tmp270, end253);
    panda$core$Bit$init$builtin_bit(&$tmp271, true);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp268, $tmp269, $tmp270, $tmp271);
    panda$core$String* $tmp272 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp268);
    $tmp267 = $tmp272;
    $tmp266 = $tmp267;
    $returnValue238 = $tmp266;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
    return $returnValue238;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result274;
    panda$core$Range$LTpanda$core$Int64$GT $tmp276;
    panda$core$Int64 $tmp277;
    panda$core$Bit $tmp278;
    panda$core$Range$LTpanda$core$Int64$GT $tmp298;
    panda$core$Int64 $tmp299;
    panda$core$Bit $tmp300;
    panda$core$String* $returnValue321;
    panda$core$String* $tmp322;
    panda$core$String* $tmp323;
    panda$core$Int64 $tmp275 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result274 = ((panda$core$Char8*) pandaZAlloc($tmp275.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp277, 0);
    panda$core$Bit$init$builtin_bit(&$tmp278, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp276, $tmp277, self->_length, $tmp278);
    int64_t $tmp280 = $tmp276.min.value;
    panda$core$Int64 i279 = { $tmp280 };
    int64_t $tmp282 = $tmp276.max.value;
    bool $tmp283 = $tmp276.inclusive.value;
    if ($tmp283) goto $l290; else goto $l291;
    $l290:;
    if ($tmp280 <= $tmp282) goto $l284; else goto $l286;
    $l291:;
    if ($tmp280 < $tmp282) goto $l284; else goto $l286;
    $l284:;
    {
        result274[i279.value] = self->data[i279.value];
    }
    $l287:;
    int64_t $tmp293 = $tmp282 - i279.value;
    if ($tmp283) goto $l294; else goto $l295;
    $l294:;
    if ((uint64_t) $tmp293 >= 1) goto $l292; else goto $l286;
    $l295:;
    if ((uint64_t) $tmp293 > 1) goto $l292; else goto $l286;
    $l292:;
    i279.value += 1;
    goto $l284;
    $l286:;
    panda$core$Int64$init$builtin_int64(&$tmp299, 0);
    panda$core$Bit$init$builtin_bit(&$tmp300, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp298, $tmp299, p_other->_length, $tmp300);
    int64_t $tmp302 = $tmp298.min.value;
    panda$core$Int64 i301 = { $tmp302 };
    int64_t $tmp304 = $tmp298.max.value;
    bool $tmp305 = $tmp298.inclusive.value;
    if ($tmp305) goto $l312; else goto $l313;
    $l312:;
    if ($tmp302 <= $tmp304) goto $l306; else goto $l308;
    $l313:;
    if ($tmp302 < $tmp304) goto $l306; else goto $l308;
    $l306:;
    {
        panda$core$Int64 $tmp314 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i301);
        result274[$tmp314.value] = p_other->data[i301.value];
    }
    $l309:;
    int64_t $tmp316 = $tmp304 - i301.value;
    if ($tmp305) goto $l317; else goto $l318;
    $l317:;
    if ((uint64_t) $tmp316 >= 1) goto $l315; else goto $l308;
    $l318:;
    if ((uint64_t) $tmp316 > 1) goto $l315; else goto $l308;
    $l315:;
    i301.value += 1;
    goto $l306;
    $l308:;
    panda$core$String* $tmp324 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp325 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp324, result274, $tmp325);
    $tmp323 = $tmp324;
    $tmp322 = $tmp323;
    $returnValue321 = $tmp322;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
    return $returnValue321;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $returnValue327;
    panda$core$String* $tmp328;
    panda$core$String* $tmp329;
    panda$core$String* $tmp330;
    panda$core$String* $tmp332 = (($fn331) p_other->$class->vtable[0])(p_other);
    $tmp330 = $tmp332;
    panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp330);
    $tmp329 = $tmp333;
    $tmp328 = $tmp329;
    $returnValue327 = $tmp328;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
    return $returnValue327;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$Int64 $tmp335;
    panda$core$MutableString* result344 = NULL;
    panda$core$MutableString* $tmp345;
    panda$core$MutableString* $tmp346;
    panda$core$Range$LTpanda$core$Int64$GT $tmp348;
    panda$core$Int64 $tmp349;
    panda$core$Bit $tmp350;
    panda$core$String* $returnValue370;
    panda$core$String* $tmp371;
    panda$core$String* $tmp372;
    panda$core$Int64$init$builtin_int64(&$tmp335, 0);
    panda$core$Bit $tmp336 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_count, $tmp335);
    if ($tmp336.value) goto $l337; else goto $l338;
    $l338:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s339, (panda$core$Int64) { 527 }, &$s340);
    abort();
    $l337:;
    int $tmp343;
    {
        panda$core$MutableString* $tmp347 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp347);
        $tmp346 = $tmp347;
        $tmp345 = $tmp346;
        result344 = $tmp345;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
        panda$core$Int64$init$builtin_int64(&$tmp349, 0);
        panda$core$Bit$init$builtin_bit(&$tmp350, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp348, $tmp349, p_count, $tmp350);
        int64_t $tmp352 = $tmp348.min.value;
        panda$core$Int64 i351 = { $tmp352 };
        int64_t $tmp354 = $tmp348.max.value;
        bool $tmp355 = $tmp348.inclusive.value;
        if ($tmp355) goto $l362; else goto $l363;
        $l362:;
        if ($tmp352 <= $tmp354) goto $l356; else goto $l358;
        $l363:;
        if ($tmp352 < $tmp354) goto $l356; else goto $l358;
        $l356:;
        {
            panda$core$MutableString$append$panda$core$String(result344, self);
        }
        $l359:;
        int64_t $tmp365 = $tmp354 - i351.value;
        if ($tmp355) goto $l366; else goto $l367;
        $l366:;
        if ((uint64_t) $tmp365 >= 1) goto $l364; else goto $l358;
        $l367:;
        if ((uint64_t) $tmp365 > 1) goto $l364; else goto $l358;
        $l364:;
        i351.value += 1;
        goto $l356;
        $l358:;
        panda$core$String* $tmp373 = panda$core$MutableString$finish$R$panda$core$String(result344);
        $tmp372 = $tmp373;
        $tmp371 = $tmp372;
        $returnValue370 = $tmp371;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
        $tmp343 = 0;
        goto $l341;
        $l374:;
        return $returnValue370;
    }
    $l341:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result344));
    result344 = NULL;
    switch ($tmp343) {
        case 0: goto $l374;
    }
    $l376:;
    if (false) goto $l377; else goto $l378;
    $l378:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s379, (panda$core$Int64) { 527 }, &$s380);
    abort();
    $l377:;
    abort();
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$panda$core$String$R$panda$core$String(panda$core$Int64 p_count, panda$core$String* p_s) {
    panda$core$Int64 $tmp381;
    panda$core$MutableString* result390 = NULL;
    panda$core$MutableString* $tmp391;
    panda$core$MutableString* $tmp392;
    panda$core$Range$LTpanda$core$Int64$GT $tmp394;
    panda$core$Int64 $tmp395;
    panda$core$Bit $tmp396;
    panda$core$String* $returnValue416;
    panda$core$String* $tmp417;
    panda$core$String* $tmp418;
    panda$core$Int64$init$builtin_int64(&$tmp381, 0);
    panda$core$Bit $tmp382 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_count, $tmp381);
    if ($tmp382.value) goto $l383; else goto $l384;
    $l384:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s385, (panda$core$Int64) { 540 }, &$s386);
    abort();
    $l383:;
    int $tmp389;
    {
        panda$core$MutableString* $tmp393 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp393);
        $tmp392 = $tmp393;
        $tmp391 = $tmp392;
        result390 = $tmp391;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
        panda$core$Int64$init$builtin_int64(&$tmp395, 0);
        panda$core$Bit$init$builtin_bit(&$tmp396, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp394, $tmp395, p_count, $tmp396);
        int64_t $tmp398 = $tmp394.min.value;
        panda$core$Int64 i397 = { $tmp398 };
        int64_t $tmp400 = $tmp394.max.value;
        bool $tmp401 = $tmp394.inclusive.value;
        if ($tmp401) goto $l408; else goto $l409;
        $l408:;
        if ($tmp398 <= $tmp400) goto $l402; else goto $l404;
        $l409:;
        if ($tmp398 < $tmp400) goto $l402; else goto $l404;
        $l402:;
        {
            panda$core$MutableString$append$panda$core$String(result390, p_s);
        }
        $l405:;
        int64_t $tmp411 = $tmp400 - i397.value;
        if ($tmp401) goto $l412; else goto $l413;
        $l412:;
        if ((uint64_t) $tmp411 >= 1) goto $l410; else goto $l404;
        $l413:;
        if ((uint64_t) $tmp411 > 1) goto $l410; else goto $l404;
        $l410:;
        i397.value += 1;
        goto $l402;
        $l404:;
        panda$core$String* $tmp419 = panda$core$MutableString$finish$R$panda$core$String(result390);
        $tmp418 = $tmp419;
        $tmp417 = $tmp418;
        $returnValue416 = $tmp417;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
        $tmp389 = 0;
        goto $l387;
        $l420:;
        return $returnValue416;
    }
    $l387:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result390));
    result390 = NULL;
    switch ($tmp389) {
        case 0: goto $l420;
    }
    $l422:;
    if (false) goto $l423; else goto $l424;
    $l424:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s425, (panda$core$Int64) { 540 }, &$s426);
    abort();
    $l423:;
    abort();
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $returnValue427;
    panda$core$String* $tmp428;
    panda$core$String* $tmp429;
    panda$core$String* $tmp430;
    panda$core$String* $tmp432 = (($fn431) p_o->$class->vtable[0])(p_o);
    $tmp430 = $tmp432;
    panda$core$String* $tmp433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp430, p_s);
    $tmp429 = $tmp433;
    $tmp428 = $tmp429;
    $returnValue427 = $tmp428;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
    return $returnValue427;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue436;
    panda$core$Bit $tmp437;
    panda$core$Range$LTpanda$core$Int64$GT $tmp439;
    panda$core$Int64 $tmp440;
    panda$core$Bit $tmp441;
    panda$core$Bit $tmp456;
    panda$core$Bit $tmp464;
    panda$core$Bit $tmp435 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp435.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp437, false);
        $returnValue436 = $tmp437;
        return $returnValue436;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp440, 0);
    panda$core$Bit$init$builtin_bit(&$tmp441, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp439, $tmp440, self->_length, $tmp441);
    int64_t $tmp443 = $tmp439.min.value;
    panda$core$Int64 i442 = { $tmp443 };
    int64_t $tmp445 = $tmp439.max.value;
    bool $tmp446 = $tmp439.inclusive.value;
    if ($tmp446) goto $l453; else goto $l454;
    $l453:;
    if ($tmp443 <= $tmp445) goto $l447; else goto $l449;
    $l454:;
    if ($tmp443 < $tmp445) goto $l447; else goto $l449;
    $l447:;
    {
        panda$core$Bit $tmp455 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i442.value], p_other->data[i442.value]);
        if ($tmp455.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp456, false);
            $returnValue436 = $tmp456;
            return $returnValue436;
        }
        }
    }
    $l450:;
    int64_t $tmp459 = $tmp445 - i442.value;
    if ($tmp446) goto $l460; else goto $l461;
    $l460:;
    if ((uint64_t) $tmp459 >= 1) goto $l458; else goto $l449;
    $l461:;
    if ((uint64_t) $tmp459 > 1) goto $l458; else goto $l449;
    $l458:;
    i442.value += 1;
    goto $l447;
    $l449:;
    panda$core$Bit$init$builtin_bit(&$tmp464, true);
    $returnValue436 = $tmp464;
    return $returnValue436;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx466;
    panda$core$Char8 c467;
    panda$core$Int32 result468;
    panda$core$Bit $tmp470;
    panda$core$Char32 $returnValue473;
    panda$core$Char32 $tmp474;
    panda$core$Bit $tmp476;
    panda$core$Int64 $tmp479;
    panda$core$Int32 $tmp485;
    panda$core$Int32 $tmp487;
    panda$core$Int64 $tmp489;
    panda$core$Int32 $tmp492;
    panda$core$Char32 $tmp495;
    panda$core$Bit $tmp497;
    panda$core$Int64 $tmp500;
    panda$core$Int32 $tmp506;
    panda$core$Int32 $tmp508;
    panda$core$Int64 $tmp510;
    panda$core$Int32 $tmp513;
    panda$core$Int32 $tmp515;
    panda$core$Int64 $tmp518;
    panda$core$Int32 $tmp521;
    panda$core$Char32 $tmp524;
    panda$core$Int64 $tmp526;
    panda$core$Int32 $tmp532;
    panda$core$Int32 $tmp534;
    panda$core$Int64 $tmp536;
    panda$core$Int32 $tmp539;
    panda$core$Int32 $tmp541;
    panda$core$Int64 $tmp544;
    panda$core$Int32 $tmp547;
    panda$core$Int32 $tmp549;
    panda$core$Int64 $tmp552;
    panda$core$Int32 $tmp555;
    panda$core$Char32 $tmp558;
    idx466 = p_index.value;
    c467 = self->data[idx466.value];
    panda$core$Int32 $tmp469 = panda$core$Char8$convert$R$panda$core$Int32(c467);
    result468 = $tmp469;
    int64_t $tmp471 = ((int64_t) c467.value) & 255;
    bool $tmp472 = $tmp471 < 192;
    panda$core$Bit$init$builtin_bit(&$tmp470, $tmp472);
    if ($tmp470.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp474, result468);
        $returnValue473 = $tmp474;
        return $returnValue473;
    }
    }
    int64_t $tmp477 = ((int64_t) c467.value) & 255;
    bool $tmp478 = $tmp477 < 224;
    panda$core$Bit$init$builtin_bit(&$tmp476, $tmp478);
    if ($tmp476.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp479, 1);
        panda$core$Int64 $tmp480 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx466, $tmp479);
        panda$core$Bit $tmp481 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp480, self->_length);
        if ($tmp481.value) goto $l482; else goto $l483;
        $l483:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s484, (panda$core$Int64) { 589 });
        abort();
        $l482:;
        panda$core$Int32$init$builtin_int32(&$tmp485, 31);
        panda$core$Int32 $tmp486 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result468, $tmp485);
        panda$core$Int32$init$builtin_int32(&$tmp487, 6);
        panda$core$Int32 $tmp488 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp486, $tmp487);
        panda$core$Int64$init$builtin_int64(&$tmp489, 1);
        panda$core$Int64 $tmp490 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx466, $tmp489);
        panda$core$Int32 $tmp491 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp490.value]);
        panda$core$Int32$init$builtin_int32(&$tmp492, 63);
        panda$core$Int32 $tmp493 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp491, $tmp492);
        panda$core$Int32 $tmp494 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp488, $tmp493);
        result468 = $tmp494;
        panda$core$Char32$init$panda$core$Int32(&$tmp495, result468);
        $returnValue473 = $tmp495;
        return $returnValue473;
    }
    }
    int64_t $tmp498 = ((int64_t) c467.value) & 255;
    bool $tmp499 = $tmp498 < 240;
    panda$core$Bit$init$builtin_bit(&$tmp497, $tmp499);
    if ($tmp497.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp500, 2);
        panda$core$Int64 $tmp501 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx466, $tmp500);
        panda$core$Bit $tmp502 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp501, self->_length);
        if ($tmp502.value) goto $l503; else goto $l504;
        $l504:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s505, (panda$core$Int64) { 594 });
        abort();
        $l503:;
        panda$core$Int32$init$builtin_int32(&$tmp506, 15);
        panda$core$Int32 $tmp507 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result468, $tmp506);
        panda$core$Int32$init$builtin_int32(&$tmp508, 12);
        panda$core$Int32 $tmp509 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp507, $tmp508);
        panda$core$Int64$init$builtin_int64(&$tmp510, 1);
        panda$core$Int64 $tmp511 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx466, $tmp510);
        panda$core$Int32 $tmp512 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp511.value]);
        panda$core$Int32$init$builtin_int32(&$tmp513, 63);
        panda$core$Int32 $tmp514 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp512, $tmp513);
        panda$core$Int32$init$builtin_int32(&$tmp515, 6);
        panda$core$Int32 $tmp516 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp514, $tmp515);
        panda$core$Int32 $tmp517 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp509, $tmp516);
        panda$core$Int64$init$builtin_int64(&$tmp518, 2);
        panda$core$Int64 $tmp519 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx466, $tmp518);
        panda$core$Int32 $tmp520 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp519.value]);
        panda$core$Int32$init$builtin_int32(&$tmp521, 63);
        panda$core$Int32 $tmp522 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp520, $tmp521);
        panda$core$Int32 $tmp523 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp517, $tmp522);
        result468 = $tmp523;
        panda$core$Char32$init$panda$core$Int32(&$tmp524, result468);
        $returnValue473 = $tmp524;
        return $returnValue473;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp526, 3);
    panda$core$Int64 $tmp527 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx466, $tmp526);
    panda$core$Bit $tmp528 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp527, self->_length);
    if ($tmp528.value) goto $l529; else goto $l530;
    $l530:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s531, (panda$core$Int64) { 599 });
    abort();
    $l529:;
    panda$core$Int32$init$builtin_int32(&$tmp532, 7);
    panda$core$Int32 $tmp533 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result468, $tmp532);
    panda$core$Int32$init$builtin_int32(&$tmp534, 18);
    panda$core$Int32 $tmp535 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp533, $tmp534);
    panda$core$Int64$init$builtin_int64(&$tmp536, 1);
    panda$core$Int64 $tmp537 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx466, $tmp536);
    panda$core$Int32 $tmp538 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp537.value]);
    panda$core$Int32$init$builtin_int32(&$tmp539, 63);
    panda$core$Int32 $tmp540 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp538, $tmp539);
    panda$core$Int32$init$builtin_int32(&$tmp541, 12);
    panda$core$Int32 $tmp542 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp540, $tmp541);
    panda$core$Int32 $tmp543 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp535, $tmp542);
    panda$core$Int64$init$builtin_int64(&$tmp544, 2);
    panda$core$Int64 $tmp545 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx466, $tmp544);
    panda$core$Int32 $tmp546 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp545.value]);
    panda$core$Int32$init$builtin_int32(&$tmp547, 63);
    panda$core$Int32 $tmp548 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp546, $tmp547);
    panda$core$Int32$init$builtin_int32(&$tmp549, 6);
    panda$core$Int32 $tmp550 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp548, $tmp549);
    panda$core$Int32 $tmp551 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp543, $tmp550);
    panda$core$Int64$init$builtin_int64(&$tmp552, 3);
    panda$core$Int64 $tmp553 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx466, $tmp552);
    panda$core$Int32 $tmp554 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp553.value]);
    panda$core$Int32$init$builtin_int32(&$tmp555, 63);
    panda$core$Int32 $tmp556 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp554, $tmp555);
    panda$core$Int32 $tmp557 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp551, $tmp556);
    result468 = $tmp557;
    panda$core$Char32$init$panda$core$Int32(&$tmp558, result468);
    $returnValue473 = $tmp558;
    return $returnValue473;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$Char32 $returnValue560;
    panda$core$String$Index $tmp561 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp562 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp561, p_index);
    panda$core$Char32 $tmp563 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp562);
    $returnValue560 = $tmp563;
    return $returnValue560;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 length565;
    panda$core$Int64 $tmp567;
    panda$core$String* $returnValue569;
    panda$core$String* $tmp570;
    panda$core$String* $tmp571;
    panda$core$Int64 $tmp566 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    length565 = $tmp566;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp567, 1);
        panda$core$Int64 $tmp568 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(length565, $tmp567);
        length565 = $tmp568;
    }
    }
    panda$core$String* $tmp572 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp572, (self->data + p_r.min.value.value), length565, self);
    $tmp571 = $tmp572;
    $tmp570 = $tmp571;
    $returnValue569 = $tmp570;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
    return $returnValue569;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min574;
    panda$core$Bit inclusive576;
    panda$core$String$Index max577;
    panda$core$Bit $tmp579;
    panda$core$String* $returnValue580;
    panda$core$String* $tmp581;
    panda$core$String* $tmp582;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp583;
    memset(&min574, 0, sizeof(min574));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min574 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp575 = panda$core$String$start$R$panda$core$String$Index(self);
        min574 = $tmp575;
    }
    }
    inclusive576 = p_r.inclusive;
    memset(&max577, 0, sizeof(max577));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max577 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp578 = panda$core$String$end$R$panda$core$String$Index(self);
        max577 = $tmp578;
        panda$core$Bit$init$builtin_bit(&$tmp579, false);
        inclusive576 = $tmp579;
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp583, min574, max577, inclusive576);
    panda$core$String* $tmp584 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp583);
    $tmp582 = $tmp584;
    $tmp581 = $tmp582;
    $returnValue580 = $tmp581;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
    return $returnValue580;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current589;
    panda$core$MutableString* result590 = NULL;
    panda$core$MutableString* $tmp591;
    panda$core$MutableString* $tmp592;
    panda$core$Int64 max594;
    panda$core$Int64 $tmp595;
    panda$core$Char8 c601;
    panda$core$Int64 $tmp602;
    panda$core$Bit $tmp604;
    panda$core$Int64 $tmp607;
    panda$core$Bit $tmp609;
    panda$core$Int64 $tmp612;
    panda$core$Bit $tmp614;
    panda$core$Int64 $tmp617;
    panda$core$String* $returnValue619;
    panda$core$String* $tmp620;
    panda$core$String* $tmp621;
    int $tmp588;
    {
        current589 = p_r.min.value;
        panda$core$MutableString* $tmp593 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp593);
        $tmp592 = $tmp593;
        $tmp591 = $tmp592;
        result590 = $tmp591;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
        max594 = p_r.max.value;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp595, 1);
            panda$core$Int64 $tmp596 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max594, $tmp595);
            max594 = $tmp596;
        }
        }
        $l597:;
        panda$core$Bit $tmp600 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current589, max594);
        bool $tmp599 = $tmp600.value;
        if (!$tmp599) goto $l598;
        {
            c601 = self->data[current589.value];
            panda$core$MutableString$append$panda$core$Char8(result590, c601);
            panda$core$Int64$init$builtin_int64(&$tmp602, 1);
            panda$core$Int64 $tmp603 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current589, $tmp602);
            current589 = $tmp603;
            int64_t $tmp605 = ((int64_t) c601.value) & 255;
            bool $tmp606 = $tmp605 >= 192;
            panda$core$Bit$init$builtin_bit(&$tmp604, $tmp606);
            if ($tmp604.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result590, self->data[current589.value]);
                panda$core$Int64$init$builtin_int64(&$tmp607, 1);
                panda$core$Int64 $tmp608 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current589, $tmp607);
                current589 = $tmp608;
            }
            }
            int64_t $tmp610 = ((int64_t) c601.value) & 255;
            bool $tmp611 = $tmp610 >= 224;
            panda$core$Bit$init$builtin_bit(&$tmp609, $tmp611);
            if ($tmp609.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result590, self->data[current589.value]);
                panda$core$Int64$init$builtin_int64(&$tmp612, 1);
                panda$core$Int64 $tmp613 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current589, $tmp612);
                current589 = $tmp613;
            }
            }
            int64_t $tmp615 = ((int64_t) c601.value) & 255;
            bool $tmp616 = $tmp615 >= 240;
            panda$core$Bit$init$builtin_bit(&$tmp614, $tmp616);
            if ($tmp614.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result590, self->data[current589.value]);
                panda$core$Int64$init$builtin_int64(&$tmp617, 1);
                panda$core$Int64 $tmp618 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current589, $tmp617);
                current589 = $tmp618;
            }
            }
        }
        goto $l597;
        $l598:;
        panda$core$String* $tmp622 = panda$core$MutableString$finish$R$panda$core$String(result590);
        $tmp621 = $tmp622;
        $tmp620 = $tmp621;
        $returnValue619 = $tmp620;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
        $tmp588 = 0;
        goto $l586;
        $l623:;
        return $returnValue619;
    }
    $l586:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result590));
    result590 = NULL;
    switch ($tmp588) {
        case 0: goto $l623;
    }
    $l625:;
    if (false) goto $l626; else goto $l627;
    $l627:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s628, (panda$core$Int64) { 669 }, &$s629);
    abort();
    $l626:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$Int64 $tmp630;
    panda$core$String* $returnValue632;
    panda$core$String* $tmp633;
    panda$core$String$Index min636;
    panda$core$Bit inclusive638;
    panda$core$String$Index max639;
    panda$core$Bit $tmp641;
    panda$core$String* $tmp642;
    panda$core$String* $tmp643;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp644;
    panda$core$Int64$init$builtin_int64(&$tmp630, 0);
    panda$core$Bit $tmp631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp630);
    if ($tmp631.value) {
    {
        $tmp633 = &$s634;
        $returnValue632 = $tmp633;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp633));
        return $returnValue632;
    }
    }
    memset(&min636, 0, sizeof(min636));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min636 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp637 = panda$core$String$start$R$panda$core$String$Index(self);
        min636 = $tmp637;
    }
    }
    inclusive638 = p_r.inclusive;
    memset(&max639, 0, sizeof(max639));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max639 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp640 = panda$core$String$end$R$panda$core$String$Index(self);
        max639 = $tmp640;
        panda$core$Bit$init$builtin_bit(&$tmp641, false);
        inclusive638 = $tmp641;
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp644, min636, max639, inclusive638);
    panda$core$String* $tmp645 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp644);
    $tmp643 = $tmp645;
    $tmp642 = $tmp643;
    $returnValue632 = $tmp642;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp643));
    return $returnValue632;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 $tmp650;
    panda$core$String* $returnValue652;
    panda$core$String* $tmp653;
    panda$core$Int64 step657;
    panda$core$Int64 current658;
    panda$core$Int64 $tmp659;
    panda$core$Int64 end664;
    panda$core$Int64 $tmp665;
    panda$core$MutableString* result669 = NULL;
    panda$core$MutableString* $tmp670;
    panda$core$MutableString* $tmp671;
    panda$core$Int64 $tmp673;
    panda$core$Char8 c679;
    panda$core$Int64 $tmp680;
    panda$core$Bit $tmp682;
    panda$core$Int64 $tmp685;
    panda$core$Bit $tmp687;
    panda$core$Int64 $tmp690;
    panda$core$Bit $tmp692;
    panda$core$Int64 $tmp695;
    panda$core$Range$LTpanda$core$Int64$GT $tmp697;
    panda$core$Int64 $tmp698;
    panda$core$Bit $tmp699;
    panda$core$String* $tmp714;
    panda$core$String* $tmp715;
    panda$core$String$Index $tmp719;
    panda$core$Int64 $tmp727;
    panda$core$Char8 c736;
    panda$core$Int64 old737;
    panda$core$Int64 $tmp738;
    panda$core$Bit $tmp740;
    panda$core$Int64 $tmp743;
    panda$core$Bit $tmp745;
    panda$core$Int64 $tmp748;
    panda$core$Bit $tmp750;
    panda$core$Int64 $tmp753;
    panda$core$Bit $tmp758;
    panda$core$Int64 $tmp765;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp767;
    panda$core$Int64 $tmp768;
    panda$core$Int64 $tmp769;
    panda$core$Bit $tmp770;
    panda$core$String* $tmp790;
    panda$core$String* $tmp791;
    panda$core$String$Index $tmp795;
    panda$core$Char8 c819;
    panda$core$Int64 $tmp820;
    panda$core$Bit $tmp822;
    panda$core$Int64 $tmp825;
    panda$core$Bit $tmp827;
    panda$core$Int64 $tmp830;
    panda$core$Bit $tmp832;
    panda$core$String* $tmp835;
    panda$core$String* $tmp836;
    int $tmp649;
    {
        panda$core$Int64$init$builtin_int64(&$tmp650, 0);
        panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp650);
        if ($tmp651.value) {
        {
            $tmp653 = &$s654;
            $returnValue652 = $tmp653;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
            $tmp649 = 0;
            goto $l647;
            $l655:;
            return $returnValue652;
        }
        }
        step657 = p_r.step;
        memset(&current658, 0, sizeof(current658));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current658 = ((panda$core$String$Index) p_r.start.value).value;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp659, 0);
        panda$core$Bit $tmp660 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step657, $tmp659);
        if ($tmp660.value) {
        {
            panda$core$String$Index $tmp661 = panda$core$String$start$R$panda$core$String$Index(self);
            current658 = $tmp661.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp662 = panda$core$String$end$R$panda$core$String$Index(self);
            panda$core$String$Index $tmp663 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp662);
            current658 = $tmp663.value;
        }
        }
        }
        memset(&end664, 0, sizeof(end664));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end664 = ((panda$core$String$Index) p_r.end.value).value;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp665, 0);
        panda$core$Bit $tmp666 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step657, $tmp665);
        if ($tmp666.value) {
        {
            panda$core$String$Index $tmp667 = panda$core$String$end$R$panda$core$String$Index(self);
            end664 = $tmp667.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp668 = panda$core$String$start$R$panda$core$String$Index(self);
            end664 = $tmp668.value;
        }
        }
        }
        panda$core$MutableString* $tmp672 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp672);
        $tmp671 = $tmp672;
        $tmp670 = $tmp671;
        result669 = $tmp670;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
        panda$core$Int64$init$builtin_int64(&$tmp673, 0);
        panda$core$Bit $tmp674 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp673);
        if ($tmp674.value) {
        {
            $l675:;
            panda$core$Bit $tmp678 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current658, end664);
            bool $tmp677 = $tmp678.value;
            if (!$tmp677) goto $l676;
            {
                c679 = self->data[current658.value];
                panda$core$MutableString$append$panda$core$Char8(result669, c679);
                panda$core$Int64$init$builtin_int64(&$tmp680, 1);
                panda$core$Int64 $tmp681 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current658, $tmp680);
                current658 = $tmp681;
                int64_t $tmp683 = ((int64_t) c679.value) & 255;
                bool $tmp684 = $tmp683 >= 192;
                panda$core$Bit$init$builtin_bit(&$tmp682, $tmp684);
                if ($tmp682.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result669, self->data[current658.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp685, 1);
                    panda$core$Int64 $tmp686 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current658, $tmp685);
                    current658 = $tmp686;
                }
                }
                int64_t $tmp688 = ((int64_t) c679.value) & 255;
                bool $tmp689 = $tmp688 >= 224;
                panda$core$Bit$init$builtin_bit(&$tmp687, $tmp689);
                if ($tmp687.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result669, self->data[current658.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp690, 1);
                    panda$core$Int64 $tmp691 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current658, $tmp690);
                    current658 = $tmp691;
                }
                }
                int64_t $tmp693 = ((int64_t) c679.value) & 255;
                bool $tmp694 = $tmp693 >= 240;
                panda$core$Bit$init$builtin_bit(&$tmp692, $tmp694);
                if ($tmp692.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result669, self->data[current658.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp695, 1);
                    panda$core$Int64 $tmp696 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current658, $tmp695);
                    current658 = $tmp696;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp698, 1);
                panda$core$Bit$init$builtin_bit(&$tmp699, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp697, $tmp698, step657, $tmp699);
                int64_t $tmp701 = $tmp697.min.value;
                panda$core$Int64 i700 = { $tmp701 };
                int64_t $tmp703 = $tmp697.max.value;
                bool $tmp704 = $tmp697.inclusive.value;
                if ($tmp704) goto $l711; else goto $l712;
                $l711:;
                if ($tmp701 <= $tmp703) goto $l705; else goto $l707;
                $l712:;
                if ($tmp701 < $tmp703) goto $l705; else goto $l707;
                $l705:;
                {
                    panda$core$Bit $tmp713 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current658, end664);
                    if ($tmp713.value) {
                    {
                        panda$core$String* $tmp716 = panda$core$MutableString$convert$R$panda$core$String(result669);
                        $tmp715 = $tmp716;
                        $tmp714 = $tmp715;
                        $returnValue652 = $tmp714;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp714));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
                        $tmp649 = 1;
                        goto $l647;
                        $l717:;
                        return $returnValue652;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp719, current658);
                    panda$core$String$Index $tmp720 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp719);
                    current658 = $tmp720.value;
                }
                $l708:;
                int64_t $tmp722 = $tmp703 - i700.value;
                if ($tmp704) goto $l723; else goto $l724;
                $l723:;
                if ((uint64_t) $tmp722 >= 1) goto $l721; else goto $l707;
                $l724:;
                if ((uint64_t) $tmp722 > 1) goto $l721; else goto $l707;
                $l721:;
                i700.value += 1;
                goto $l705;
                $l707:;
            }
            goto $l675;
            $l676:;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp727, 0);
            panda$core$Bit $tmp728 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp727);
            if ($tmp728.value) goto $l729; else goto $l730;
            $l730:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s731, (panda$core$Int64) { 792 });
            abort();
            $l729:;
            $l732:;
            panda$core$Bit $tmp735 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current658, end664);
            bool $tmp734 = $tmp735.value;
            if (!$tmp734) goto $l733;
            {
                c736 = self->data[current658.value];
                panda$core$MutableString$append$panda$core$Char8(result669, c736);
                old737 = current658;
                panda$core$Int64$init$builtin_int64(&$tmp738, 1);
                panda$core$Int64 $tmp739 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current658, $tmp738);
                current658 = $tmp739;
                int64_t $tmp741 = ((int64_t) c736.value) & 255;
                bool $tmp742 = $tmp741 >= 192;
                panda$core$Bit$init$builtin_bit(&$tmp740, $tmp742);
                if ($tmp740.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result669, self->data[current658.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp743, 1);
                    panda$core$Int64 $tmp744 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current658, $tmp743);
                    current658 = $tmp744;
                }
                }
                int64_t $tmp746 = ((int64_t) c736.value) & 255;
                bool $tmp747 = $tmp746 >= 224;
                panda$core$Bit$init$builtin_bit(&$tmp745, $tmp747);
                if ($tmp745.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result669, self->data[current658.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp748, 1);
                    panda$core$Int64 $tmp749 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current658, $tmp748);
                    current658 = $tmp749;
                }
                }
                int64_t $tmp751 = ((int64_t) c736.value) & 255;
                bool $tmp752 = $tmp751 >= 240;
                panda$core$Bit$init$builtin_bit(&$tmp750, $tmp752);
                if ($tmp750.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result669, self->data[current658.value]);
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp753, 1);
                panda$core$Int64 $tmp754 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old737, $tmp753);
                current658 = $tmp754;
                $l755:;
                int64_t $tmp760 = ((int64_t) self->data[current658.value].value) & 255;
                bool $tmp761 = $tmp760 >= 128;
                bool $tmp759 = $tmp761;
                if (!$tmp759) goto $l762;
                int64_t $tmp763 = ((int64_t) self->data[current658.value].value) & 255;
                bool $tmp764 = $tmp763 < 192;
                $tmp759 = $tmp764;
                $l762:;
                panda$core$Bit$init$builtin_bit(&$tmp758, $tmp759);
                bool $tmp757 = $tmp758.value;
                if (!$tmp757) goto $l756;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp765, 1);
                    panda$core$Int64 $tmp766 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current658, $tmp765);
                    current658 = $tmp766;
                }
                goto $l755;
                $l756:;
                panda$core$Int64$init$builtin_int64(&$tmp768, -1);
                panda$core$Int64$init$builtin_int64(&$tmp769, -1);
                panda$core$Bit$init$builtin_bit(&$tmp770, false);
                panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp767, $tmp768, step657, $tmp769, $tmp770);
                int64_t $tmp772 = $tmp767.start.value;
                panda$core$Int64 i771 = { $tmp772 };
                int64_t $tmp774 = $tmp767.end.value;
                int64_t $tmp775 = $tmp767.step.value;
                bool $tmp776 = $tmp767.inclusive.value;
                bool $tmp783 = $tmp775 > 0;
                if ($tmp783) goto $l781; else goto $l782;
                $l781:;
                if ($tmp776) goto $l784; else goto $l785;
                $l784:;
                if ($tmp772 <= $tmp774) goto $l777; else goto $l779;
                $l785:;
                if ($tmp772 < $tmp774) goto $l777; else goto $l779;
                $l782:;
                if ($tmp776) goto $l786; else goto $l787;
                $l786:;
                if ($tmp772 >= $tmp774) goto $l777; else goto $l779;
                $l787:;
                if ($tmp772 > $tmp774) goto $l777; else goto $l779;
                $l777:;
                {
                    panda$core$Bit $tmp789 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current658, end664);
                    if ($tmp789.value) {
                    {
                        panda$core$String* $tmp792 = panda$core$MutableString$convert$R$panda$core$String(result669);
                        $tmp791 = $tmp792;
                        $tmp790 = $tmp791;
                        $returnValue652 = $tmp790;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp790));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp791));
                        $tmp649 = 2;
                        goto $l647;
                        $l793:;
                        return $returnValue652;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp795, current658);
                    panda$core$String$Index $tmp796 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp795);
                    current658 = $tmp796.value;
                }
                $l780:;
                if ($tmp783) goto $l798; else goto $l799;
                $l798:;
                int64_t $tmp800 = $tmp774 - i771.value;
                if ($tmp776) goto $l801; else goto $l802;
                $l801:;
                if ((uint64_t) $tmp800 >= $tmp775) goto $l797; else goto $l779;
                $l802:;
                if ((uint64_t) $tmp800 > $tmp775) goto $l797; else goto $l779;
                $l799:;
                int64_t $tmp804 = i771.value - $tmp774;
                if ($tmp776) goto $l805; else goto $l806;
                $l805:;
                if ((uint64_t) $tmp804 >= -$tmp775) goto $l797; else goto $l779;
                $l806:;
                if ((uint64_t) $tmp804 > -$tmp775) goto $l797; else goto $l779;
                $l797:;
                i771.value += $tmp775;
                goto $l777;
                $l779:;
            }
            goto $l732;
            $l733:;
        }
        }
        bool $tmp810 = p_r.inclusive.value;
        if ($tmp810) goto $l811;
        $tmp810 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l811:;
        panda$core$Bit $tmp812 = { $tmp810 };
        bool $tmp809 = $tmp812.value;
        if (!$tmp809) goto $l813;
        panda$core$Bit $tmp814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current658, end664);
        $tmp809 = $tmp814.value;
        $l813:;
        panda$core$Bit $tmp815 = { $tmp809 };
        bool $tmp808 = $tmp815.value;
        if (!$tmp808) goto $l816;
        panda$core$Bit $tmp817 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end664, self->_length);
        $tmp808 = $tmp817.value;
        $l816:;
        panda$core$Bit $tmp818 = { $tmp808 };
        if ($tmp818.value) {
        {
            c819 = self->data[current658.value];
            panda$core$MutableString$append$panda$core$Char8(result669, c819);
            panda$core$Int64$init$builtin_int64(&$tmp820, 1);
            panda$core$Int64 $tmp821 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current658, $tmp820);
            current658 = $tmp821;
            int64_t $tmp823 = ((int64_t) c819.value) & 255;
            bool $tmp824 = $tmp823 >= 192;
            panda$core$Bit$init$builtin_bit(&$tmp822, $tmp824);
            if ($tmp822.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result669, self->data[current658.value]);
                panda$core$Int64$init$builtin_int64(&$tmp825, 1);
                panda$core$Int64 $tmp826 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current658, $tmp825);
                current658 = $tmp826;
            }
            }
            int64_t $tmp828 = ((int64_t) c819.value) & 255;
            bool $tmp829 = $tmp828 >= 224;
            panda$core$Bit$init$builtin_bit(&$tmp827, $tmp829);
            if ($tmp827.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result669, self->data[current658.value]);
                panda$core$Int64$init$builtin_int64(&$tmp830, 1);
                panda$core$Int64 $tmp831 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current658, $tmp830);
                current658 = $tmp831;
            }
            }
            int64_t $tmp833 = ((int64_t) c819.value) & 255;
            bool $tmp834 = $tmp833 >= 240;
            panda$core$Bit$init$builtin_bit(&$tmp832, $tmp834);
            if ($tmp832.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result669, self->data[current658.value]);
            }
            }
        }
        }
        panda$core$String* $tmp837 = panda$core$MutableString$finish$R$panda$core$String(result669);
        $tmp836 = $tmp837;
        $tmp835 = $tmp836;
        $returnValue652 = $tmp835;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
        $tmp649 = 3;
        goto $l647;
        $l838:;
        return $returnValue652;
    }
    $l647:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result669));
    result669 = NULL;
    switch ($tmp649) {
        case 1: goto $l717;
        case 2: goto $l793;
        case 3: goto $l838;
        case 0: goto $l655;
    }
    $l840:;
    if (false) goto $l841; else goto $l842;
    $l842:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s843, (panda$core$Int64) { 737 }, &$s844);
    abort();
    $l841:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start845;
    panda$core$String$Index$nullable end848;
    panda$core$String* $returnValue851;
    panda$core$String* $tmp852;
    panda$core$String* $tmp853;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp854;
    memset(&start845, 0, sizeof(start845));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp846 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp847 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp846, ((panda$core$Int64) p_r.min.value));
        start845 = ((panda$core$String$Index$nullable) { $tmp847, true });
    }
    }
    else {
    {
        start845 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end848, 0, sizeof(end848));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp849 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp850 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp849, ((panda$core$Int64) p_r.max.value));
        end848 = ((panda$core$String$Index$nullable) { $tmp850, true });
    }
    }
    else {
    {
        end848 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp854, start845, end848, p_r.inclusive);
    panda$core$String* $tmp855 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp854);
    $tmp853 = $tmp855;
    $tmp852 = $tmp853;
    $returnValue851 = $tmp852;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp852));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp853));
    return $returnValue851;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start857;
    panda$core$String$Index$nullable end860;
    panda$core$String* $returnValue863;
    panda$core$String* $tmp864;
    panda$core$String* $tmp865;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp866;
    memset(&start857, 0, sizeof(start857));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp858 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp859 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp858, ((panda$core$Int64) p_r.start.value));
        start857 = ((panda$core$String$Index$nullable) { $tmp859, true });
    }
    }
    else {
    {
        start857 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end860, 0, sizeof(end860));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp861 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp862 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp861, ((panda$core$Int64) p_r.end.value));
        end860 = ((panda$core$String$Index$nullable) { $tmp862, true });
    }
    }
    else {
    {
        end860 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp866, start857, end860, p_r.step, p_r.inclusive);
    panda$core$String* $tmp867 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp866);
    $tmp865 = $tmp867;
    $tmp864 = $tmp865;
    $returnValue863 = $tmp864;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
    return $returnValue863;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp869;
    panda$core$Int64 $tmp870;
    panda$core$Bit $tmp871;
    panda$core$Bit $returnValue886;
    panda$core$Bit $tmp887;
    panda$core$Bit $tmp895;
    panda$core$Int64$init$builtin_int64(&$tmp870, 0);
    panda$core$Bit$init$builtin_bit(&$tmp871, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp869, $tmp870, self->_length, $tmp871);
    int64_t $tmp873 = $tmp869.min.value;
    panda$core$Int64 i872 = { $tmp873 };
    int64_t $tmp875 = $tmp869.max.value;
    bool $tmp876 = $tmp869.inclusive.value;
    if ($tmp876) goto $l883; else goto $l884;
    $l883:;
    if ($tmp873 <= $tmp875) goto $l877; else goto $l879;
    $l884:;
    if ($tmp873 < $tmp875) goto $l877; else goto $l879;
    $l877:;
    {
        panda$core$Bit $tmp885 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i872.value], p_c);
        if ($tmp885.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp887, true);
            $returnValue886 = $tmp887;
            return $returnValue886;
        }
        }
    }
    $l880:;
    int64_t $tmp890 = $tmp875 - i872.value;
    if ($tmp876) goto $l891; else goto $l892;
    $l891:;
    if ((uint64_t) $tmp890 >= 1) goto $l889; else goto $l879;
    $l892:;
    if ((uint64_t) $tmp890 > 1) goto $l889; else goto $l879;
    $l889:;
    i872.value += 1;
    goto $l877;
    $l879:;
    panda$core$Bit$init$builtin_bit(&$tmp895, false);
    $returnValue886 = $tmp895;
    return $returnValue886;
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$Bit $returnValue897;
    panda$core$String$Index$nullable $tmp898 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    $returnValue897 = ((panda$core$Bit) { $tmp898.nonnull });
    return $returnValue897;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue900;
    panda$core$String$Index $tmp901 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp902 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp901);
    $returnValue900 = $tmp902;
    return $returnValue900;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue905;
    panda$core$Range$LTpanda$core$Int64$GT $tmp907;
    panda$core$Bit $tmp909;
    panda$core$Range$LTpanda$core$Int64$GT $tmp923;
    panda$core$Int64 $tmp924;
    panda$core$Bit $tmp925;
    panda$core$String$Index $tmp947;
    panda$core$Bit $tmp904 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp904.value) {
    {
        $returnValue905 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue905;
    }
    }
    panda$core$Int64 $tmp908 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Bit$init$builtin_bit(&$tmp909, true);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp907, p_start.value, $tmp908, $tmp909);
    int64_t $tmp911 = $tmp907.min.value;
    panda$core$Int64 i910 = { $tmp911 };
    int64_t $tmp913 = $tmp907.max.value;
    bool $tmp914 = $tmp907.inclusive.value;
    if ($tmp914) goto $l921; else goto $l922;
    $l921:;
    if ($tmp911 <= $tmp913) goto $l915; else goto $l917;
    $l922:;
    if ($tmp911 < $tmp913) goto $l915; else goto $l917;
    $l915:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp924, 0);
        panda$core$Bit$init$builtin_bit(&$tmp925, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp923, $tmp924, p_s->_length, $tmp925);
        int64_t $tmp927 = $tmp923.min.value;
        panda$core$Int64 j926 = { $tmp927 };
        int64_t $tmp929 = $tmp923.max.value;
        bool $tmp930 = $tmp923.inclusive.value;
        if ($tmp930) goto $l937; else goto $l938;
        $l937:;
        if ($tmp927 <= $tmp929) goto $l931; else goto $l933;
        $l938:;
        if ($tmp927 < $tmp929) goto $l931; else goto $l933;
        $l931:;
        {
            panda$core$Int64 $tmp939 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i910, j926);
            panda$core$Bit $tmp940 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp939.value], p_s->data[j926.value]);
            if ($tmp940.value) {
            {
                goto $l918;
            }
            }
        }
        $l934:;
        int64_t $tmp942 = $tmp929 - j926.value;
        if ($tmp930) goto $l943; else goto $l944;
        $l943:;
        if ((uint64_t) $tmp942 >= 1) goto $l941; else goto $l933;
        $l944:;
        if ((uint64_t) $tmp942 > 1) goto $l941; else goto $l933;
        $l941:;
        j926.value += 1;
        goto $l931;
        $l933:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp947, i910);
        $returnValue905 = ((panda$core$String$Index$nullable) { $tmp947, true });
        return $returnValue905;
    }
    $l918:;
    int64_t $tmp950 = $tmp913 - i910.value;
    if ($tmp914) goto $l951; else goto $l952;
    $l951:;
    if ((uint64_t) $tmp950 >= 1) goto $l949; else goto $l917;
    $l952:;
    if ((uint64_t) $tmp950 > 1) goto $l949; else goto $l917;
    $l949:;
    i910.value += 1;
    goto $l915;
    $l917:;
    $returnValue905 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue905;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue956;
    panda$core$String$Index $tmp957 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp958 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp957);
    $returnValue956 = $tmp958;
    return $returnValue956;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue961;
    panda$core$Int64 startPos963;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp966;
    panda$core$Int64 $tmp967;
    panda$core$Int64 $tmp968;
    panda$core$Bit $tmp969;
    panda$core$Range$LTpanda$core$Int64$GT $tmp988;
    panda$core$Int64 $tmp989;
    panda$core$Bit $tmp990;
    panda$core$String$Index $tmp1012;
    panda$core$Bit $tmp960 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp960.value) {
    {
        $returnValue961 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue961;
    }
    }
    panda$core$Int64 $tmp964 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp965 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp964);
    startPos963 = $tmp965;
    panda$core$Int64$init$builtin_int64(&$tmp967, 0);
    panda$core$Int64$init$builtin_int64(&$tmp968, -1);
    panda$core$Bit$init$builtin_bit(&$tmp969, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp966, startPos963, $tmp967, $tmp968, $tmp969);
    int64_t $tmp971 = $tmp966.start.value;
    panda$core$Int64 i970 = { $tmp971 };
    int64_t $tmp973 = $tmp966.end.value;
    int64_t $tmp974 = $tmp966.step.value;
    bool $tmp975 = $tmp966.inclusive.value;
    bool $tmp982 = $tmp974 > 0;
    if ($tmp982) goto $l980; else goto $l981;
    $l980:;
    if ($tmp975) goto $l983; else goto $l984;
    $l983:;
    if ($tmp971 <= $tmp973) goto $l976; else goto $l978;
    $l984:;
    if ($tmp971 < $tmp973) goto $l976; else goto $l978;
    $l981:;
    if ($tmp975) goto $l985; else goto $l986;
    $l985:;
    if ($tmp971 >= $tmp973) goto $l976; else goto $l978;
    $l986:;
    if ($tmp971 > $tmp973) goto $l976; else goto $l978;
    $l976:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp989, 0);
        panda$core$Bit$init$builtin_bit(&$tmp990, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp988, $tmp989, p_s->_length, $tmp990);
        int64_t $tmp992 = $tmp988.min.value;
        panda$core$Int64 j991 = { $tmp992 };
        int64_t $tmp994 = $tmp988.max.value;
        bool $tmp995 = $tmp988.inclusive.value;
        if ($tmp995) goto $l1002; else goto $l1003;
        $l1002:;
        if ($tmp992 <= $tmp994) goto $l996; else goto $l998;
        $l1003:;
        if ($tmp992 < $tmp994) goto $l996; else goto $l998;
        $l996:;
        {
            panda$core$Int64 $tmp1004 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i970, j991);
            panda$core$Bit $tmp1005 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp1004.value], p_s->data[j991.value]);
            if ($tmp1005.value) {
            {
                goto $l979;
            }
            }
        }
        $l999:;
        int64_t $tmp1007 = $tmp994 - j991.value;
        if ($tmp995) goto $l1008; else goto $l1009;
        $l1008:;
        if ((uint64_t) $tmp1007 >= 1) goto $l1006; else goto $l998;
        $l1009:;
        if ((uint64_t) $tmp1007 > 1) goto $l1006; else goto $l998;
        $l1006:;
        j991.value += 1;
        goto $l996;
        $l998:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp1012, i970);
        $returnValue961 = ((panda$core$String$Index$nullable) { $tmp1012, true });
        return $returnValue961;
    }
    $l979:;
    if ($tmp982) goto $l1015; else goto $l1016;
    $l1015:;
    int64_t $tmp1017 = $tmp973 - i970.value;
    if ($tmp975) goto $l1018; else goto $l1019;
    $l1018:;
    if ((uint64_t) $tmp1017 >= $tmp974) goto $l1014; else goto $l978;
    $l1019:;
    if ((uint64_t) $tmp1017 > $tmp974) goto $l1014; else goto $l978;
    $l1016:;
    int64_t $tmp1021 = i970.value - $tmp973;
    if ($tmp975) goto $l1022; else goto $l1023;
    $l1022:;
    if ((uint64_t) $tmp1021 >= -$tmp974) goto $l1014; else goto $l978;
    $l1023:;
    if ((uint64_t) $tmp1021 > -$tmp974) goto $l1014; else goto $l978;
    $l1014:;
    i970.value += $tmp974;
    goto $l976;
    $l978:;
    $returnValue961 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue961;
}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Bit $returnValue1026;
    panda$core$Matcher* $tmp1027;
    panda$core$Bit $tmp1029;
    panda$core$Matcher* $tmp1028 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
    $tmp1027 = $tmp1028;
    panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1029, $tmp1027);
    $returnValue1026 = $tmp1029;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
    return $returnValue1026;
}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$core$Bit $returnValue1031;
    panda$core$Matcher* $tmp1032;
    panda$core$Matcher* $tmp1033 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, self);
    $tmp1032 = $tmp1033;
    panda$core$Bit $tmp1034 = panda$core$Matcher$find$R$panda$core$Bit($tmp1032);
    $returnValue1031 = $tmp1034;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1032));
    return $returnValue1031;
}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Matcher* matcher1039 = NULL;
    panda$core$Matcher* $tmp1040;
    panda$core$Matcher* $tmp1041;
    panda$core$Bit $tmp1043;
    panda$collections$Array* result1047 = NULL;
    panda$collections$Array* $tmp1048;
    panda$collections$Array* $tmp1049;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1051;
    panda$core$Int64 $tmp1052;
    panda$core$Int64 $tmp1053;
    panda$core$Bit $tmp1054;
    panda$core$String* $tmp1068;
    panda$collections$ListView* $returnValue1076;
    panda$collections$ListView* $tmp1077;
    panda$collections$ListView* $tmp1082;
    int $tmp1038;
    {
        panda$core$Matcher* $tmp1042 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
        $tmp1041 = $tmp1042;
        $tmp1040 = $tmp1041;
        matcher1039 = $tmp1040;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1040));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1041));
        panda$core$Matcher$matches$R$panda$core$Bit(&$tmp1043, matcher1039);
        if ($tmp1043.value) {
        {
            int $tmp1046;
            {
                panda$collections$Array* $tmp1050 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1050);
                $tmp1049 = $tmp1050;
                $tmp1048 = $tmp1049;
                result1047 = $tmp1048;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
                panda$core$Int64$init$builtin_int64(&$tmp1052, 1);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1053, matcher1039);
                panda$core$Bit$init$builtin_bit(&$tmp1054, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1051, $tmp1052, $tmp1053, $tmp1054);
                int64_t $tmp1056 = $tmp1051.min.value;
                panda$core$Int64 i1055 = { $tmp1056 };
                int64_t $tmp1058 = $tmp1051.max.value;
                bool $tmp1059 = $tmp1051.inclusive.value;
                if ($tmp1059) goto $l1066; else goto $l1067;
                $l1066:;
                if ($tmp1056 <= $tmp1058) goto $l1060; else goto $l1062;
                $l1067:;
                if ($tmp1056 < $tmp1058) goto $l1060; else goto $l1062;
                $l1060:;
                {
                    panda$core$String* $tmp1069 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher1039, i1055);
                    $tmp1068 = $tmp1069;
                    panda$collections$Array$add$panda$collections$Array$T(result1047, ((panda$core$Object*) $tmp1068));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1068));
                }
                $l1063:;
                int64_t $tmp1071 = $tmp1058 - i1055.value;
                if ($tmp1059) goto $l1072; else goto $l1073;
                $l1072:;
                if ((uint64_t) $tmp1071 >= 1) goto $l1070; else goto $l1062;
                $l1073:;
                if ((uint64_t) $tmp1071 > 1) goto $l1070; else goto $l1062;
                $l1070:;
                i1055.value += 1;
                goto $l1060;
                $l1062:;
                $tmp1077 = ((panda$collections$ListView*) result1047);
                $returnValue1076 = $tmp1077;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
                $tmp1046 = 0;
                goto $l1044;
                $l1078:;
                $tmp1038 = 0;
                goto $l1036;
                $l1079:;
                return $returnValue1076;
            }
            $l1044:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1047));
            result1047 = NULL;
            switch ($tmp1046) {
                case 0: goto $l1078;
            }
            $l1081:;
        }
        }
        $tmp1082 = NULL;
        $returnValue1076 = $tmp1082;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
        $tmp1038 = 1;
        goto $l1036;
        $l1083:;
        return $returnValue1076;
    }
    $l1036:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) matcher1039));
    matcher1039 = NULL;
    switch ($tmp1038) {
        case 1: goto $l1083;
        case 0: goto $l1079;
    }
    $l1085:;
    if (false) goto $l1086; else goto $l1087;
    $l1087:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1088, (panda$core$Int64) { 1006 }, &$s1089);
    abort();
    $l1086:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue1095;
    panda$core$String* $tmp1096;
    panda$core$MutableString* result1099 = NULL;
    panda$core$MutableString* $tmp1100;
    panda$core$MutableString* $tmp1101;
    panda$core$String$Index index1103;
    panda$core$String$Index$nullable nextIndex1107;
    panda$core$String* $tmp1109;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1110;
    panda$core$Bit $tmp1111;
    panda$core$String* $tmp1113;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1114;
    panda$core$Bit $tmp1115;
    panda$core$String$Index $tmp1117;
    panda$core$String* $tmp1119;
    panda$core$String* $tmp1120;
    int $tmp1092;
    {
        panda$core$Bit $tmp1094 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_search, &$s1093);
        if ($tmp1094.value) {
        {
            $tmp1096 = self;
            $returnValue1095 = $tmp1096;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1096));
            $tmp1092 = 0;
            goto $l1090;
            $l1097:;
            return $returnValue1095;
        }
        }
        panda$core$MutableString* $tmp1102 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1102);
        $tmp1101 = $tmp1102;
        $tmp1100 = $tmp1101;
        result1099 = $tmp1100;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1101));
        panda$core$String$Index $tmp1104 = panda$core$String$start$R$panda$core$String$Index(self);
        index1103 = $tmp1104;
        $l1105:;
        while (true) {
        {
            panda$core$String$Index$nullable $tmp1108 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index1103);
            nextIndex1107 = $tmp1108;
            if (((panda$core$Bit) { !nextIndex1107.nonnull }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1111, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1110, ((panda$core$String$Index$nullable) { index1103, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1111);
                panda$core$String* $tmp1112 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1110);
                $tmp1109 = $tmp1112;
                panda$core$MutableString$append$panda$core$String(result1099, $tmp1109);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
                goto $l1106;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp1115, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1114, index1103, ((panda$core$String$Index) nextIndex1107.value), $tmp1115);
            panda$core$String* $tmp1116 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1114);
            $tmp1113 = $tmp1116;
            panda$core$MutableString$append$panda$core$String(result1099, $tmp1113);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
            panda$core$MutableString$append$panda$core$String(result1099, p_replacement);
            panda$core$Int64 $tmp1118 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1107.value).value, p_search->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1117, $tmp1118);
            index1103 = $tmp1117;
        }
        }
        $l1106:;
        panda$core$String* $tmp1121 = panda$core$MutableString$finish$R$panda$core$String(result1099);
        $tmp1120 = $tmp1121;
        $tmp1119 = $tmp1120;
        $returnValue1095 = $tmp1119;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1120));
        $tmp1092 = 1;
        goto $l1090;
        $l1122:;
        return $returnValue1095;
    }
    $l1090:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1099));
    result1099 = NULL;
    switch ($tmp1092) {
        case 1: goto $l1122;
        case 0: goto $l1097;
    }
    $l1124:;
    if (false) goto $l1125; else goto $l1126;
    $l1126:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1127, (panda$core$Int64) { 1025 }, &$s1128);
    abort();
    $l1125:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue1129;
    panda$core$String* $tmp1130;
    panda$core$String* $tmp1131;
    panda$core$Bit $tmp1132;
    panda$core$Bit$init$builtin_bit(&$tmp1132, true);
    panda$core$String* $tmp1133 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(self, p_search, p_replacement, $tmp1132);
    $tmp1131 = $tmp1133;
    $tmp1130 = $tmp1131;
    $returnValue1129 = $tmp1130;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
    return $returnValue1129;
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences) {
    panda$core$MutableString* result1138 = NULL;
    panda$core$MutableString* $tmp1139;
    panda$core$MutableString* $tmp1140;
    panda$core$Matcher* matcher1142 = NULL;
    panda$core$Matcher* $tmp1143;
    panda$core$Matcher* $tmp1144;
    panda$core$String* $returnValue1150;
    panda$core$String* $tmp1151;
    panda$core$String* $tmp1152;
    int $tmp1137;
    {
        panda$core$MutableString* $tmp1141 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1141);
        $tmp1140 = $tmp1141;
        $tmp1139 = $tmp1140;
        result1138 = $tmp1139;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1140));
        panda$core$Matcher* $tmp1145 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1144 = $tmp1145;
        $tmp1143 = $tmp1144;
        matcher1142 = $tmp1143;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1143));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1144));
        $l1146:;
        panda$core$Bit $tmp1149 = panda$core$Matcher$find$R$panda$core$Bit(matcher1142);
        bool $tmp1148 = $tmp1149.value;
        if (!$tmp1148) goto $l1147;
        {
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1142, result1138, p_replacement, p_allowGroupReferences);
        }
        goto $l1146;
        $l1147:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1142, result1138);
        panda$core$String* $tmp1153 = panda$core$MutableString$finish$R$panda$core$String(result1138);
        $tmp1152 = $tmp1153;
        $tmp1151 = $tmp1152;
        $returnValue1150 = $tmp1151;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1152));
        $tmp1137 = 0;
        goto $l1135;
        $l1154:;
        return $returnValue1150;
    }
    $l1135:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) matcher1142));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1138));
    result1138 = NULL;
    matcher1142 = NULL;
    switch ($tmp1137) {
        case 0: goto $l1154;
    }
    $l1156:;
    if (false) goto $l1157; else goto $l1158;
    $l1158:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1159, (panda$core$Int64) { 1058 }, &$s1160);
    abort();
    $l1157:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result1164 = NULL;
    panda$core$MutableString* $tmp1165;
    panda$core$MutableString* $tmp1166;
    panda$core$Matcher* matcher1168 = NULL;
    panda$core$Matcher* $tmp1169;
    panda$core$Matcher* $tmp1170;
    panda$core$String* $tmp1176;
    panda$core$Object* $tmp1177;
    panda$core$String* $tmp1178;
    panda$core$Int64 $tmp1179;
    panda$core$Object* $tmp1181;
    panda$core$Bit $tmp1186;
    panda$core$String* $returnValue1187;
    panda$core$String* $tmp1188;
    panda$core$String* $tmp1189;
    int $tmp1163;
    {
        panda$core$MutableString* $tmp1167 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1167);
        $tmp1166 = $tmp1167;
        $tmp1165 = $tmp1166;
        result1164 = $tmp1165;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1165));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
        panda$core$Matcher* $tmp1171 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1170 = $tmp1171;
        $tmp1169 = $tmp1170;
        matcher1168 = $tmp1169;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
        $l1172:;
        panda$core$Bit $tmp1175 = panda$core$Matcher$find$R$panda$core$Bit(matcher1168);
        bool $tmp1174 = $tmp1175.value;
        if (!$tmp1174) goto $l1173;
        {
            panda$core$Int64$init$builtin_int64(&$tmp1179, 0);
            panda$core$String* $tmp1180 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher1168, $tmp1179);
            $tmp1178 = $tmp1180;
            if (p_replacement->target) {
                $tmp1181 = (($fn1182) p_replacement->pointer)(p_replacement->target, $tmp1178);
            } else {
                $tmp1181 = (($fn1183) p_replacement->pointer)($tmp1178);
            }
            $tmp1177 = $tmp1181;
            panda$core$String* $tmp1185 = (($fn1184) $tmp1177->$class->vtable[0])($tmp1177);
            $tmp1176 = $tmp1185;
            panda$core$Bit$init$builtin_bit(&$tmp1186, false);
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1168, result1164, $tmp1176, $tmp1186);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1176));
            panda$core$Panda$unref$panda$core$Object$Q($tmp1177);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1178));
        }
        goto $l1172;
        $l1173:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1168, result1164);
        panda$core$String* $tmp1190 = panda$core$MutableString$convert$R$panda$core$String(result1164);
        $tmp1189 = $tmp1190;
        $tmp1188 = $tmp1189;
        $returnValue1187 = $tmp1188;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1188));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1189));
        $tmp1163 = 0;
        goto $l1161;
        $l1191:;
        return $returnValue1187;
    }
    $l1161:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) matcher1168));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1164));
    result1164 = NULL;
    matcher1168 = NULL;
    switch ($tmp1163) {
        case 0: goto $l1191;
    }
    $l1193:;
    if (false) goto $l1194; else goto $l1195;
    $l1195:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1196, (panda$core$Int64) { 1086 }, &$s1197);
    abort();
    $l1194:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result1201 = NULL;
    panda$core$MutableString* $tmp1202;
    panda$core$MutableString* $tmp1203;
    panda$core$Matcher* matcher1205 = NULL;
    panda$core$Matcher* $tmp1206;
    panda$core$Matcher* $tmp1207;
    panda$collections$Array* groups1216 = NULL;
    panda$collections$Array* $tmp1217;
    panda$collections$Array* $tmp1218;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1220;
    panda$core$Int64 $tmp1221;
    panda$core$Int64 $tmp1222;
    panda$core$Bit $tmp1223;
    panda$core$String* $tmp1237;
    panda$core$String* $tmp1245;
    panda$core$Object* $tmp1246;
    panda$core$Object* $tmp1247;
    panda$core$Bit $tmp1252;
    panda$core$String* $returnValue1254;
    panda$core$String* $tmp1255;
    panda$core$String* $tmp1256;
    int $tmp1200;
    {
        panda$core$MutableString* $tmp1204 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1204);
        $tmp1203 = $tmp1204;
        $tmp1202 = $tmp1203;
        result1201 = $tmp1202;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1202));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
        panda$core$Matcher* $tmp1208 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1207 = $tmp1208;
        $tmp1206 = $tmp1207;
        matcher1205 = $tmp1206;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1206));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1207));
        $l1209:;
        panda$core$Bit $tmp1212 = panda$core$Matcher$find$R$panda$core$Bit(matcher1205);
        bool $tmp1211 = $tmp1212.value;
        if (!$tmp1211) goto $l1210;
        {
            int $tmp1215;
            {
                panda$collections$Array* $tmp1219 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1219);
                $tmp1218 = $tmp1219;
                $tmp1217 = $tmp1218;
                groups1216 = $tmp1217;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1217));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1218));
                panda$core$Int64$init$builtin_int64(&$tmp1221, 0);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1222, matcher1205);
                panda$core$Bit$init$builtin_bit(&$tmp1223, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1220, $tmp1221, $tmp1222, $tmp1223);
                int64_t $tmp1225 = $tmp1220.min.value;
                panda$core$Int64 i1224 = { $tmp1225 };
                int64_t $tmp1227 = $tmp1220.max.value;
                bool $tmp1228 = $tmp1220.inclusive.value;
                if ($tmp1228) goto $l1235; else goto $l1236;
                $l1235:;
                if ($tmp1225 <= $tmp1227) goto $l1229; else goto $l1231;
                $l1236:;
                if ($tmp1225 < $tmp1227) goto $l1229; else goto $l1231;
                $l1229:;
                {
                    panda$core$String* $tmp1238 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher1205, i1224);
                    $tmp1237 = $tmp1238;
                    panda$collections$Array$add$panda$collections$Array$T(groups1216, ((panda$core$Object*) $tmp1237));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1237));
                }
                $l1232:;
                int64_t $tmp1240 = $tmp1227 - i1224.value;
                if ($tmp1228) goto $l1241; else goto $l1242;
                $l1241:;
                if ((uint64_t) $tmp1240 >= 1) goto $l1239; else goto $l1231;
                $l1242:;
                if ((uint64_t) $tmp1240 > 1) goto $l1239; else goto $l1231;
                $l1239:;
                i1224.value += 1;
                goto $l1229;
                $l1231:;
                if (p_replacement->target) {
                    $tmp1247 = (($fn1248) p_replacement->pointer)(p_replacement->target, ((panda$collections$ListView*) groups1216));
                } else {
                    $tmp1247 = (($fn1249) p_replacement->pointer)(((panda$collections$ListView*) groups1216));
                }
                $tmp1246 = $tmp1247;
                panda$core$String* $tmp1251 = (($fn1250) $tmp1246->$class->vtable[0])($tmp1246);
                $tmp1245 = $tmp1251;
                panda$core$Bit$init$builtin_bit(&$tmp1252, false);
                panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1205, result1201, $tmp1245, $tmp1252);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1245));
                panda$core$Panda$unref$panda$core$Object$Q($tmp1246);
            }
            $tmp1215 = -1;
            goto $l1213;
            $l1213:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) groups1216));
            groups1216 = NULL;
            switch ($tmp1215) {
                case -1: goto $l1253;
            }
            $l1253:;
        }
        goto $l1209;
        $l1210:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1205, result1201);
        panda$core$String* $tmp1257 = panda$core$MutableString$convert$R$panda$core$String(result1201);
        $tmp1256 = $tmp1257;
        $tmp1255 = $tmp1256;
        $returnValue1254 = $tmp1255;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1255));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
        $tmp1200 = 0;
        goto $l1198;
        $l1258:;
        return $returnValue1254;
    }
    $l1198:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) matcher1205));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1201));
    result1201 = NULL;
    matcher1205 = NULL;
    switch ($tmp1200) {
        case 0: goto $l1258;
    }
    $l1260:;
    if (false) goto $l1261; else goto $l1262;
    $l1262:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1263, (panda$core$Int64) { 1106 }, &$s1264);
    abort();
    $l1261:;
    abort();
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle) {
    panda$collections$Iterator* $returnValue1265;
    panda$collections$Iterator* $tmp1266;
    panda$collections$Iterator* $tmp1267;
    panda$core$Bit $tmp1268;
    panda$core$Bit$init$builtin_bit(&$tmp1268, false);
    panda$collections$Iterator* $tmp1269 = panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(self, p_needle, $tmp1268);
    $tmp1267 = $tmp1269;
    $tmp1266 = $tmp1267;
    $returnValue1265 = $tmp1266;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
    return $returnValue1265;
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1271;
    panda$collections$Iterator* $tmp1272;
    panda$core$String$MatchIterator* $tmp1273;
    panda$core$String$MatchIterator* $tmp1274 = (panda$core$String$MatchIterator*) pandaObjectAlloc(46, (panda$core$Class*) &panda$core$String$MatchIterator$class);
    panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit($tmp1274, self, p_needle, p_overlapping);
    $tmp1273 = $tmp1274;
    $tmp1272 = ((panda$collections$Iterator*) $tmp1273);
    $returnValue1271 = $tmp1272;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1272));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1273));
    return $returnValue1271;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$collections$Iterator* $returnValue1276;
    panda$collections$Iterator* $tmp1277;
    panda$collections$Iterator* $tmp1278;
    panda$core$Bit $tmp1279;
    panda$core$Bit$init$builtin_bit(&$tmp1279, false);
    panda$collections$Iterator* $tmp1280 = panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(self, p_needle, $tmp1279);
    $tmp1278 = $tmp1280;
    $tmp1277 = $tmp1278;
    $returnValue1276 = $tmp1277;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1277));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1278));
    return $returnValue1276;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1282;
    panda$collections$Iterator* $tmp1283;
    panda$core$String$RegexMatchIterator* $tmp1284;
    panda$core$String$RegexMatchIterator* $tmp1285 = (panda$core$String$RegexMatchIterator*) pandaObjectAlloc(34, (panda$core$Class*) &panda$core$String$RegexMatchIterator$class);
    panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit($tmp1285, self, p_needle, p_overlapping);
    $tmp1284 = $tmp1285;
    $tmp1283 = ((panda$collections$Iterator*) $tmp1284);
    $returnValue1282 = $tmp1283;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1283));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1284));
    return $returnValue1282;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1287;
    panda$core$String$Index $tmp1288;
    panda$core$Int64 $tmp1289;
    panda$core$Int64$init$builtin_int64(&$tmp1289, 0);
    panda$core$String$Index$init$panda$core$Int64(&$tmp1288, $tmp1289);
    $returnValue1287 = $tmp1288;
    return $returnValue1287;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1291;
    panda$core$String$Index $tmp1292;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1292, self->_length);
    $returnValue1291 = $tmp1292;
    return $returnValue1291;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c1298;
    panda$core$Bit $tmp1300;
    panda$core$String$Index $returnValue1302;
    panda$core$String$Index $tmp1303;
    panda$core$Int64 $tmp1304;
    panda$core$Bit $tmp1307;
    panda$core$String$Index $tmp1309;
    panda$core$Int64 $tmp1310;
    panda$core$Bit $tmp1313;
    panda$core$String$Index $tmp1315;
    panda$core$Int64 $tmp1316;
    panda$core$String$Index $tmp1319;
    panda$core$Int64 $tmp1320;
    panda$core$Bit $tmp1294 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    if ($tmp1294.value) goto $l1295; else goto $l1296;
    $l1296:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1297, (panda$core$Int64) { 1157 });
    abort();
    $l1295:;
    int64_t $tmp1299 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c1298 = $tmp1299;
    bool $tmp1301 = c1298 >= 240;
    panda$core$Bit$init$builtin_bit(&$tmp1300, $tmp1301);
    if ($tmp1300.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1304, 4);
        panda$core$Int64 $tmp1305 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1304);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1303, $tmp1305);
        $returnValue1302 = $tmp1303;
        return $returnValue1302;
    }
    }
    bool $tmp1308 = c1298 >= 224;
    panda$core$Bit$init$builtin_bit(&$tmp1307, $tmp1308);
    if ($tmp1307.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1310, 3);
        panda$core$Int64 $tmp1311 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1310);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1309, $tmp1311);
        $returnValue1302 = $tmp1309;
        return $returnValue1302;
    }
    }
    bool $tmp1314 = c1298 >= 192;
    panda$core$Bit$init$builtin_bit(&$tmp1313, $tmp1314);
    if ($tmp1313.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1316, 2);
        panda$core$Int64 $tmp1317 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1316);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1315, $tmp1317);
        $returnValue1302 = $tmp1315;
        return $returnValue1302;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1320, 1);
    panda$core$Int64 $tmp1321 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1320);
    panda$core$String$Index$init$panda$core$Int64(&$tmp1319, $tmp1321);
    $returnValue1302 = $tmp1319;
    return $returnValue1302;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 $tmp1323;
    panda$core$Int64 newValue1328;
    panda$core$Int64 $tmp1329;
    panda$core$Bit $tmp1334;
    panda$core$Int64 $tmp1341;
    panda$core$String$Index $returnValue1343;
    panda$core$String$Index $tmp1344;
    panda$core$Int64$init$builtin_int64(&$tmp1323, 0);
    panda$core$Bit $tmp1324 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, $tmp1323);
    if ($tmp1324.value) goto $l1325; else goto $l1326;
    $l1326:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1327, (panda$core$Int64) { 1178 });
    abort();
    $l1325:;
    panda$core$Int64$init$builtin_int64(&$tmp1329, 1);
    panda$core$Int64 $tmp1330 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1329);
    newValue1328 = $tmp1330;
    $l1331:;
    int64_t $tmp1336 = ((int64_t) self->data[newValue1328.value].value) & 255;
    bool $tmp1337 = $tmp1336 >= 128;
    bool $tmp1335 = $tmp1337;
    if (!$tmp1335) goto $l1338;
    int64_t $tmp1339 = ((int64_t) self->data[newValue1328.value].value) & 255;
    bool $tmp1340 = $tmp1339 < 192;
    $tmp1335 = $tmp1340;
    $l1338:;
    panda$core$Bit$init$builtin_bit(&$tmp1334, $tmp1335);
    bool $tmp1333 = $tmp1334.value;
    if (!$tmp1333) goto $l1332;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1341, 1);
        panda$core$Int64 $tmp1342 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue1328, $tmp1341);
        newValue1328 = $tmp1342;
    }
    goto $l1331;
    $l1332:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1344, newValue1328);
    $returnValue1343 = $tmp1344;
    return $returnValue1343;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result1346;
    panda$core$Int64 $tmp1347;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1349;
    panda$core$Int64 $tmp1350;
    panda$core$Bit $tmp1351;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1372;
    panda$core$Int64 $tmp1373;
    panda$core$Int64 $tmp1374;
    panda$core$Bit $tmp1375;
    panda$core$String$Index $returnValue1406;
    result1346 = p_index;
    panda$core$Int64$init$builtin_int64(&$tmp1347, 0);
    panda$core$Bit $tmp1348 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, $tmp1347);
    if ($tmp1348.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1350, 0);
        panda$core$Bit$init$builtin_bit(&$tmp1351, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1349, $tmp1350, p_offset, $tmp1351);
        int64_t $tmp1353 = $tmp1349.min.value;
        panda$core$Int64 i1352 = { $tmp1353 };
        int64_t $tmp1355 = $tmp1349.max.value;
        bool $tmp1356 = $tmp1349.inclusive.value;
        if ($tmp1356) goto $l1363; else goto $l1364;
        $l1363:;
        if ($tmp1353 <= $tmp1355) goto $l1357; else goto $l1359;
        $l1364:;
        if ($tmp1353 < $tmp1355) goto $l1357; else goto $l1359;
        $l1357:;
        {
            panda$core$String$Index $tmp1365 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result1346);
            result1346 = $tmp1365;
        }
        $l1360:;
        int64_t $tmp1367 = $tmp1355 - i1352.value;
        if ($tmp1356) goto $l1368; else goto $l1369;
        $l1368:;
        if ((uint64_t) $tmp1367 >= 1) goto $l1366; else goto $l1359;
        $l1369:;
        if ((uint64_t) $tmp1367 > 1) goto $l1366; else goto $l1359;
        $l1366:;
        i1352.value += 1;
        goto $l1357;
        $l1359:;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1373, 0);
        panda$core$Int64$init$builtin_int64(&$tmp1374, -1);
        panda$core$Bit$init$builtin_bit(&$tmp1375, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1372, $tmp1373, p_offset, $tmp1374, $tmp1375);
        int64_t $tmp1377 = $tmp1372.start.value;
        panda$core$Int64 i1376 = { $tmp1377 };
        int64_t $tmp1379 = $tmp1372.end.value;
        int64_t $tmp1380 = $tmp1372.step.value;
        bool $tmp1381 = $tmp1372.inclusive.value;
        bool $tmp1388 = $tmp1380 > 0;
        if ($tmp1388) goto $l1386; else goto $l1387;
        $l1386:;
        if ($tmp1381) goto $l1389; else goto $l1390;
        $l1389:;
        if ($tmp1377 <= $tmp1379) goto $l1382; else goto $l1384;
        $l1390:;
        if ($tmp1377 < $tmp1379) goto $l1382; else goto $l1384;
        $l1387:;
        if ($tmp1381) goto $l1391; else goto $l1392;
        $l1391:;
        if ($tmp1377 >= $tmp1379) goto $l1382; else goto $l1384;
        $l1392:;
        if ($tmp1377 > $tmp1379) goto $l1382; else goto $l1384;
        $l1382:;
        {
            panda$core$String$Index $tmp1394 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result1346);
            result1346 = $tmp1394;
        }
        $l1385:;
        if ($tmp1388) goto $l1396; else goto $l1397;
        $l1396:;
        int64_t $tmp1398 = $tmp1379 - i1376.value;
        if ($tmp1381) goto $l1399; else goto $l1400;
        $l1399:;
        if ((uint64_t) $tmp1398 >= $tmp1380) goto $l1395; else goto $l1384;
        $l1400:;
        if ((uint64_t) $tmp1398 > $tmp1380) goto $l1395; else goto $l1384;
        $l1397:;
        int64_t $tmp1402 = i1376.value - $tmp1379;
        if ($tmp1381) goto $l1403; else goto $l1404;
        $l1403:;
        if ((uint64_t) $tmp1402 >= -$tmp1380) goto $l1395; else goto $l1384;
        $l1404:;
        if ((uint64_t) $tmp1402 > -$tmp1380) goto $l1395; else goto $l1384;
        $l1395:;
        i1376.value += $tmp1380;
        goto $l1382;
        $l1384:;
    }
    }
    $returnValue1406 = result1346;
    return $returnValue1406;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1408;
    panda$core$String* $tmp1409;
    panda$core$String* $tmp1410;
    panda$core$Char32 $tmp1411;
    panda$core$Int32 $tmp1412;
    panda$core$Int32$init$builtin_int32(&$tmp1412, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1411, $tmp1412);
    panda$core$String* $tmp1413 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1411);
    $tmp1410 = $tmp1413;
    $tmp1409 = $tmp1410;
    $returnValue1408 = $tmp1409;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1409));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1410));
    return $returnValue1408;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1417;
    panda$core$String* $tmp1418;
    panda$core$String* $tmp1420;
    panda$core$String* $tmp1421;
    panda$core$String* $tmp1422;
    panda$core$Int64 $tmp1415 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1416 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1415, p_width);
    if ($tmp1416.value) {
    {
        $tmp1418 = self;
        $returnValue1417 = $tmp1418;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1418));
        return $returnValue1417;
    }
    }
    panda$core$Int64 $tmp1423 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1424 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1423);
    panda$core$String* $tmp1425 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1424);
    $tmp1422 = $tmp1425;
    panda$core$String* $tmp1426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp1422);
    $tmp1421 = $tmp1426;
    $tmp1420 = $tmp1421;
    $returnValue1417 = $tmp1420;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1420));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1421));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1422));
    return $returnValue1417;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1428;
    panda$core$String* $tmp1429;
    panda$core$String* $tmp1430;
    panda$core$Char32 $tmp1431;
    panda$core$Int32 $tmp1432;
    panda$core$Int32$init$builtin_int32(&$tmp1432, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1431, $tmp1432);
    panda$core$String* $tmp1433 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1431);
    $tmp1430 = $tmp1433;
    $tmp1429 = $tmp1430;
    $returnValue1428 = $tmp1429;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1430));
    return $returnValue1428;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1437;
    panda$core$String* $tmp1438;
    panda$core$String* $tmp1440;
    panda$core$String* $tmp1441;
    panda$core$String* $tmp1442;
    panda$core$Int64 $tmp1435 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1436 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1435, p_width);
    if ($tmp1436.value) {
    {
        $tmp1438 = self;
        $returnValue1437 = $tmp1438;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
        return $returnValue1437;
    }
    }
    panda$core$Int64 $tmp1443 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1444 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1443);
    panda$core$String* $tmp1445 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1444);
    $tmp1442 = $tmp1445;
    panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1442, self);
    $tmp1441 = $tmp1446;
    $tmp1440 = $tmp1441;
    $returnValue1437 = $tmp1440;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1440));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1441));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1442));
    return $returnValue1437;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1448;
    panda$core$String* $tmp1449;
    panda$core$String* $tmp1450;
    panda$core$Char32 $tmp1451;
    panda$core$Int32 $tmp1452;
    panda$core$Int32$init$builtin_int32(&$tmp1452, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1451, $tmp1452);
    panda$core$String* $tmp1453 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1451);
    $tmp1450 = $tmp1453;
    $tmp1449 = $tmp1450;
    $returnValue1448 = $tmp1449;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
    return $returnValue1448;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1457;
    panda$core$String* $tmp1458;
    panda$core$Int64 pad1460;
    panda$core$Int64 left1463;
    panda$core$Int64 $tmp1464;
    panda$core$Int64 right1466;
    panda$core$String* $tmp1468;
    panda$core$String* $tmp1469;
    panda$core$String* $tmp1470;
    panda$core$String* $tmp1471;
    panda$core$String* $tmp1474;
    panda$core$Int64 $tmp1455 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1456 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1455, p_width);
    if ($tmp1456.value) {
    {
        $tmp1458 = self;
        $returnValue1457 = $tmp1458;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
        return $returnValue1457;
    }
    }
    panda$core$Int64 $tmp1461 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1462 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1461);
    pad1460 = $tmp1462;
    panda$core$Int64$init$builtin_int64(&$tmp1464, 2);
    panda$core$Int64 $tmp1465 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad1460, $tmp1464);
    left1463 = $tmp1465;
    panda$core$Int64 $tmp1467 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad1460, left1463);
    right1466 = $tmp1467;
    panda$core$String* $tmp1472 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left1463);
    $tmp1471 = $tmp1472;
    panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1471, self);
    $tmp1470 = $tmp1473;
    panda$core$String* $tmp1475 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right1466);
    $tmp1474 = $tmp1475;
    panda$core$String* $tmp1476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1470, $tmp1474);
    $tmp1469 = $tmp1476;
    $tmp1468 = $tmp1469;
    $returnValue1457 = $tmp1468;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1468));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1469));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1474));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1470));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1471));
    return $returnValue1457;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $returnValue1478;
    panda$collections$Array* $tmp1479;
    panda$collections$Array* $tmp1480;
    panda$core$Int64 $tmp1481;
    panda$core$Int64$init$builtin_int64(&$tmp1481, 9223372036854775807);
    panda$collections$Array* $tmp1482 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, $tmp1481);
    $tmp1480 = $tmp1482;
    $tmp1479 = $tmp1480;
    $returnValue1478 = $tmp1479;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1479));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1480));
    return $returnValue1478;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1487 = NULL;
    panda$collections$Array* $tmp1488;
    panda$collections$Array* $tmp1489;
    panda$core$String$Index index1491;
    panda$core$String$Index$nullable nextIndex1495;
    panda$core$Int64 $tmp1496;
    panda$core$Int64 $tmp1506;
    panda$core$String* $tmp1510;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1511;
    panda$core$Bit $tmp1512;
    panda$core$String* $tmp1514;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1515;
    panda$core$Bit $tmp1516;
    panda$core$String$Index $tmp1518;
    panda$collections$Array* $returnValue1520;
    panda$collections$Array* $tmp1521;
    int $tmp1486;
    {
        panda$collections$Array* $tmp1490 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1490);
        $tmp1489 = $tmp1490;
        $tmp1488 = $tmp1489;
        result1487 = $tmp1488;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1488));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1489));
        panda$core$String$Index $tmp1492 = panda$core$String$start$R$panda$core$String$Index(self);
        index1491 = $tmp1492;
        $l1493:;
        while (true) {
        {
            memset(&nextIndex1495, 0, sizeof(nextIndex1495));
            panda$core$Int64$init$builtin_int64(&$tmp1496, 0);
            panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, $tmp1496);
            if ($tmp1497.value) {
            {
                panda$core$String$Index $tmp1498 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1491);
                nextIndex1495 = ((panda$core$String$Index$nullable) { $tmp1498, true });
            }
            }
            else {
            {
                panda$core$String$Index$nullable $tmp1499 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1491);
                nextIndex1495 = $tmp1499;
            }
            }
            bool $tmp1500 = ((panda$core$Bit) { !nextIndex1495.nonnull }).value;
            if ($tmp1500) goto $l1501;
            ITable* $tmp1502 = ((panda$collections$CollectionView*) result1487)->$class->itable;
            while ($tmp1502->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1502 = $tmp1502->next;
            }
            $fn1504 $tmp1503 = $tmp1502->methods[0];
            panda$core$Int64 $tmp1505 = $tmp1503(((panda$collections$CollectionView*) result1487));
            panda$core$Int64$init$builtin_int64(&$tmp1506, 1);
            panda$core$Int64 $tmp1507 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, $tmp1506);
            panda$core$Bit $tmp1508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1505, $tmp1507);
            $tmp1500 = $tmp1508.value;
            $l1501:;
            panda$core$Bit $tmp1509 = { $tmp1500 };
            if ($tmp1509.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1512, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1511, ((panda$core$String$Index$nullable) { index1491, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1512);
                panda$core$String* $tmp1513 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1511);
                $tmp1510 = $tmp1513;
                panda$collections$Array$add$panda$collections$Array$T(result1487, ((panda$core$Object*) $tmp1510));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1510));
                goto $l1494;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp1516, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1515, index1491, ((panda$core$String$Index) nextIndex1495.value), $tmp1516);
            panda$core$String* $tmp1517 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1515);
            $tmp1514 = $tmp1517;
            panda$collections$Array$add$panda$collections$Array$T(result1487, ((panda$core$Object*) $tmp1514));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
            panda$core$Int64 $tmp1519 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1495.value).value, p_delimiter->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1518, $tmp1519);
            index1491 = $tmp1518;
        }
        }
        $l1494:;
        $tmp1521 = result1487;
        $returnValue1520 = $tmp1521;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
        $tmp1486 = 0;
        goto $l1484;
        $l1522:;
        return $returnValue1520;
    }
    $l1484:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1487));
    result1487 = NULL;
    switch ($tmp1486) {
        case 0: goto $l1522;
    }
    $l1524:;
    if (false) goto $l1525; else goto $l1526;
    $l1526:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1527, (panda$core$Int64) { 1325 }, &$s1528);
    abort();
    $l1525:;
    abort();
}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$core$Int64 $tmp1529;
    panda$collections$Array* result1538 = NULL;
    panda$collections$Array* $tmp1539;
    panda$collections$Array* $tmp1540;
    panda$core$Matcher* matcher1542 = NULL;
    panda$core$Matcher* $tmp1543;
    panda$core$Matcher* $tmp1544;
    panda$core$String$Index index1546;
    panda$core$Bit found1550;
    panda$core$Int64 $tmp1559;
    panda$core$String* $tmp1563;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1564;
    panda$core$Bit $tmp1565;
    panda$core$String$Index start1567;
    panda$core$String$Index $tmp1568;
    panda$core$String* $tmp1569;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1570;
    panda$core$Bit $tmp1571;
    panda$core$String$Index $tmp1573;
    panda$core$String$Index $tmp1574;
    panda$collections$Array* $returnValue1576;
    panda$collections$Array* $tmp1577;
    panda$core$Int64$init$builtin_int64(&$tmp1529, 0);
    panda$core$Bit $tmp1530 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_maxResults, $tmp1529);
    if ($tmp1530.value) goto $l1531; else goto $l1532;
    $l1532:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1533, (panda$core$Int64) { 1357 }, &$s1534);
    abort();
    $l1531:;
    int $tmp1537;
    {
        panda$collections$Array* $tmp1541 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1541);
        $tmp1540 = $tmp1541;
        $tmp1539 = $tmp1540;
        result1538 = $tmp1539;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1539));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1540));
        panda$core$Matcher* $tmp1545 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_delimiter, self);
        $tmp1544 = $tmp1545;
        $tmp1543 = $tmp1544;
        matcher1542 = $tmp1543;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1544));
        panda$core$String$Index $tmp1547 = panda$core$String$start$R$panda$core$String$Index(self);
        index1546 = $tmp1547;
        $l1548:;
        while (true) {
        {
            panda$core$Bit $tmp1551 = panda$core$Matcher$find$R$panda$core$Bit(matcher1542);
            found1550 = $tmp1551;
            panda$core$Bit $tmp1553 = panda$core$Bit$$NOT$R$panda$core$Bit(found1550);
            bool $tmp1552 = $tmp1553.value;
            if ($tmp1552) goto $l1554;
            ITable* $tmp1555 = ((panda$collections$CollectionView*) result1538)->$class->itable;
            while ($tmp1555->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1555 = $tmp1555->next;
            }
            $fn1557 $tmp1556 = $tmp1555->methods[0];
            panda$core$Int64 $tmp1558 = $tmp1556(((panda$collections$CollectionView*) result1538));
            panda$core$Int64$init$builtin_int64(&$tmp1559, 1);
            panda$core$Int64 $tmp1560 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, $tmp1559);
            panda$core$Bit $tmp1561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1558, $tmp1560);
            $tmp1552 = $tmp1561.value;
            $l1554:;
            panda$core$Bit $tmp1562 = { $tmp1552 };
            if ($tmp1562.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1565, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1564, ((panda$core$String$Index$nullable) { index1546, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1565);
                panda$core$String* $tmp1566 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1564);
                $tmp1563 = $tmp1566;
                panda$collections$Array$add$panda$collections$Array$T(result1538, ((panda$core$Object*) $tmp1563));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1563));
                goto $l1549;
            }
            }
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1568, matcher1542);
            start1567 = $tmp1568;
            panda$core$Bit$init$builtin_bit(&$tmp1571, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1570, index1546, start1567, $tmp1571);
            panda$core$String* $tmp1572 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1570);
            $tmp1569 = $tmp1572;
            panda$collections$Array$add$panda$collections$Array$T(result1538, ((panda$core$Object*) $tmp1569));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1574, matcher1542);
            panda$core$Int64 $tmp1575 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(start1567.value, $tmp1574.value);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1573, $tmp1575);
            index1546 = $tmp1573;
        }
        }
        $l1549:;
        $tmp1577 = result1538;
        $returnValue1576 = $tmp1577;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1577));
        $tmp1537 = 0;
        goto $l1535;
        $l1578:;
        return $returnValue1576;
    }
    $l1535:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) matcher1542));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1538));
    result1538 = NULL;
    matcher1542 = NULL;
    switch ($tmp1537) {
        case 0: goto $l1578;
    }
    $l1580:;
    if (false) goto $l1581; else goto $l1582;
    $l1582:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1583, (panda$core$Int64) { 1357 }, &$s1584);
    abort();
    $l1581:;
    abort();
}
panda$collections$Array* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter) {
    panda$collections$Array* $returnValue1585;
    panda$collections$Array* $tmp1586;
    panda$collections$Array* $tmp1587;
    panda$core$Int64 $tmp1588;
    panda$core$Int64$init$builtin_int64(&$tmp1588, 9223372036854775807);
    panda$collections$Array* $tmp1589 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, $tmp1588);
    $tmp1587 = $tmp1589;
    $tmp1586 = $tmp1587;
    $returnValue1585 = $tmp1586;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1586));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1587));
    return $returnValue1585;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 $tmp1591;
    panda$core$Int64$nullable $returnValue1593;
    panda$core$Int64 result1595;
    panda$core$Int64 $tmp1596;
    panda$core$Int64 start1597;
    panda$core$Int64 $tmp1598;
    panda$core$Char8 $tmp1599;
    panda$core$UInt8 $tmp1600;
    panda$core$Int64 $tmp1602;
    panda$core$Int64 $tmp1603;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1604;
    panda$core$Bit $tmp1605;
    panda$core$Int64 digit1619;
    panda$core$Int64 $tmp1620;
    panda$core$Int64 $tmp1621;
    panda$core$Int64 $tmp1624;
    panda$core$Int64 $tmp1627;
    panda$core$Int64 $tmp1631;
    panda$core$Int64 $tmp1640;
    panda$core$Char8 $tmp1641;
    panda$core$UInt8 $tmp1642;
    panda$core$Int64$init$builtin_int64(&$tmp1591, 0);
    panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp1591);
    if ($tmp1592.value) {
    {
        $returnValue1593 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue1593;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1596, 0);
    result1595 = $tmp1596;
    memset(&start1597, 0, sizeof(start1597));
    panda$core$Int64$init$builtin_int64(&$tmp1598, 0);
    panda$core$UInt8$init$builtin_uint8(&$tmp1600, 45);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1599, $tmp1600);
    panda$core$Bit $tmp1601 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp1598.value], $tmp1599);
    if ($tmp1601.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1602, 1);
        start1597 = $tmp1602;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1603, 0);
        start1597 = $tmp1603;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1605, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1604, start1597, self->_length, $tmp1605);
    int64_t $tmp1607 = $tmp1604.min.value;
    panda$core$Int64 i1606 = { $tmp1607 };
    int64_t $tmp1609 = $tmp1604.max.value;
    bool $tmp1610 = $tmp1604.inclusive.value;
    if ($tmp1610) goto $l1617; else goto $l1618;
    $l1617:;
    if ($tmp1607 <= $tmp1609) goto $l1611; else goto $l1613;
    $l1618:;
    if ($tmp1607 < $tmp1609) goto $l1611; else goto $l1613;
    $l1611:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1620, ((int64_t) self->data[i1606.value].value));
        panda$core$Int64$init$builtin_int64(&$tmp1621, 48);
        panda$core$Int64 $tmp1622 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1620, $tmp1621);
        digit1619 = $tmp1622;
        panda$core$Int64$init$builtin_int64(&$tmp1624, 0);
        panda$core$Bit $tmp1625 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1619, $tmp1624);
        bool $tmp1623 = $tmp1625.value;
        if ($tmp1623) goto $l1626;
        panda$core$Int64$init$builtin_int64(&$tmp1627, 9);
        panda$core$Bit $tmp1628 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1619, $tmp1627);
        $tmp1623 = $tmp1628.value;
        $l1626:;
        panda$core$Bit $tmp1629 = { $tmp1623 };
        if ($tmp1629.value) {
        {
            $returnValue1593 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue1593;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1631, 10);
        panda$core$Int64 $tmp1632 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1595, $tmp1631);
        panda$core$Int64 $tmp1633 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1632, digit1619);
        result1595 = $tmp1633;
    }
    $l1614:;
    int64_t $tmp1635 = $tmp1609 - i1606.value;
    if ($tmp1610) goto $l1636; else goto $l1637;
    $l1636:;
    if ((uint64_t) $tmp1635 >= 1) goto $l1634; else goto $l1613;
    $l1637:;
    if ((uint64_t) $tmp1635 > 1) goto $l1634; else goto $l1613;
    $l1634:;
    i1606.value += 1;
    goto $l1611;
    $l1613:;
    panda$core$Int64$init$builtin_int64(&$tmp1640, 0);
    panda$core$UInt8$init$builtin_uint8(&$tmp1642, 45);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1641, $tmp1642);
    panda$core$Bit $tmp1643 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp1640.value], $tmp1641);
    if ($tmp1643.value) {
    {
        panda$core$Int64 $tmp1644 = panda$core$Int64$$SUB$R$panda$core$Int64(result1595);
        result1595 = $tmp1644;
    }
    }
    $returnValue1593 = ((panda$core$Int64$nullable) { result1595, true });
    return $returnValue1593;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$Int64 $tmp1646;
    panda$core$UInt64$nullable $returnValue1648;
    panda$core$UInt64 result1650;
    panda$core$UInt64 $tmp1651;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1652;
    panda$core$Int64 $tmp1653;
    panda$core$Bit $tmp1654;
    panda$core$UInt64 digit1668;
    panda$core$UInt64 $tmp1669;
    panda$core$UInt64 $tmp1670;
    panda$core$UInt64 $tmp1673;
    panda$core$UInt64 $tmp1676;
    panda$core$UInt64 $tmp1680;
    panda$core$Int64$init$builtin_int64(&$tmp1646, 0);
    panda$core$Bit $tmp1647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp1646);
    if ($tmp1647.value) {
    {
        $returnValue1648 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue1648;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp1651, 0);
    result1650 = $tmp1651;
    panda$core$Int64$init$builtin_int64(&$tmp1653, 0);
    panda$core$Bit$init$builtin_bit(&$tmp1654, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1652, $tmp1653, self->_length, $tmp1654);
    int64_t $tmp1656 = $tmp1652.min.value;
    panda$core$Int64 i1655 = { $tmp1656 };
    int64_t $tmp1658 = $tmp1652.max.value;
    bool $tmp1659 = $tmp1652.inclusive.value;
    if ($tmp1659) goto $l1666; else goto $l1667;
    $l1666:;
    if ($tmp1656 <= $tmp1658) goto $l1660; else goto $l1662;
    $l1667:;
    if ($tmp1656 < $tmp1658) goto $l1660; else goto $l1662;
    $l1660:;
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp1669, ((uint64_t) self->data[i1655.value].value));
        panda$core$UInt64$init$builtin_uint64(&$tmp1670, 48);
        panda$core$UInt64 $tmp1671 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp1669, $tmp1670);
        digit1668 = $tmp1671;
        panda$core$UInt64$init$builtin_uint64(&$tmp1673, 0);
        panda$core$Bit $tmp1674 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1668, $tmp1673);
        bool $tmp1672 = $tmp1674.value;
        if ($tmp1672) goto $l1675;
        panda$core$UInt64$init$builtin_uint64(&$tmp1676, 9);
        panda$core$Bit $tmp1677 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1668, $tmp1676);
        $tmp1672 = $tmp1677.value;
        $l1675:;
        panda$core$Bit $tmp1678 = { $tmp1672 };
        if ($tmp1678.value) {
        {
            $returnValue1648 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue1648;
        }
        }
        panda$core$UInt64$init$builtin_uint64(&$tmp1680, 10);
        panda$core$UInt64 $tmp1681 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1650, $tmp1680);
        panda$core$UInt64 $tmp1682 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1681, digit1668);
        result1650 = $tmp1682;
    }
    $l1663:;
    int64_t $tmp1684 = $tmp1658 - i1655.value;
    if ($tmp1659) goto $l1685; else goto $l1686;
    $l1685:;
    if ((uint64_t) $tmp1684 >= 1) goto $l1683; else goto $l1662;
    $l1686:;
    if ((uint64_t) $tmp1684 > 1) goto $l1683; else goto $l1662;
    $l1683:;
    i1655.value += 1;
    goto $l1660;
    $l1662:;
    $returnValue1648 = ((panda$core$UInt64$nullable) { result1650, true });
    return $returnValue1648;
}
panda$core$Real64$nullable panda$core$String$convert$R$panda$core$Real64$Q(panda$core$String* self) {
    panda$core$Real64$nullable $returnValue1690;
    panda$core$Real64 $tmp1691;
    panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(&$tmp1691, self);
    $returnValue1690 = ((panda$core$Real64$nullable) { $tmp1691, true });
    return $returnValue1690;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $tmp1693;
    panda$core$Int64 h1695;
    panda$core$Int64 $tmp1696;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1697;
    panda$core$Int64 $tmp1698;
    panda$core$Bit $tmp1699;
    panda$core$Int64 $tmp1713;
    panda$core$Int64 $tmp1715;
    panda$core$Int64 $returnValue1723;
    panda$core$Int64$init$builtin_int64(&$tmp1693, 0);
    panda$core$Bit $tmp1694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, $tmp1693);
    if ($tmp1694.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1696, 1);
        h1695 = $tmp1696;
        panda$core$Int64$init$builtin_int64(&$tmp1698, 0);
        panda$core$Bit$init$builtin_bit(&$tmp1699, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1697, $tmp1698, self->_length, $tmp1699);
        int64_t $tmp1701 = $tmp1697.min.value;
        panda$core$Int64 i1700 = { $tmp1701 };
        int64_t $tmp1703 = $tmp1697.max.value;
        bool $tmp1704 = $tmp1697.inclusive.value;
        if ($tmp1704) goto $l1711; else goto $l1712;
        $l1711:;
        if ($tmp1701 <= $tmp1703) goto $l1705; else goto $l1707;
        $l1712:;
        if ($tmp1701 < $tmp1703) goto $l1705; else goto $l1707;
        $l1705:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp1713, 101);
            panda$core$Int64 $tmp1714 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1695, $tmp1713);
            panda$core$Int64$init$builtin_int64(&$tmp1715, ((int64_t) self->data[i1700.value].value));
            panda$core$Int64 $tmp1716 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1714, $tmp1715);
            h1695 = $tmp1716;
        }
        $l1708:;
        int64_t $tmp1718 = $tmp1703 - i1700.value;
        if ($tmp1704) goto $l1719; else goto $l1720;
        $l1719:;
        if ((uint64_t) $tmp1718 >= 1) goto $l1717; else goto $l1707;
        $l1720:;
        if ((uint64_t) $tmp1718 > 1) goto $l1717; else goto $l1707;
        $l1717:;
        i1700.value += 1;
        goto $l1705;
        $l1707:;
        self->_hash = h1695;
    }
    }
    $returnValue1723 = self->_hash;
    return $returnValue1723;
}

