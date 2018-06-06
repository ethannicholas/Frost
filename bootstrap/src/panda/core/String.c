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
__attribute__((weak)) panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p0, ((panda$core$String*) p1));

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p0, ((panda$core$String*) p1));

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim(panda$core$String* p0) {
    panda$collections$Iterator* result = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$String$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$String$_panda$core$Formattable, { panda$core$String$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$_panda$collections$Key, { panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim} };

static panda$core$String $s1;
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$format$panda$core$String$R$panda$core$String, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn11)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn32)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn76)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn83)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn90)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn163)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn327)(panda$core$Object*);
typedef panda$core$String* (*$fn377)(panda$core$Object*);
typedef panda$core$Object* (*$fn1109)(panda$core$String*, panda$core$String*);
typedef panda$core$Object* (*$fn1110)(panda$core$String*);
typedef panda$core$String* (*$fn1111)(panda$core$Object*);
typedef panda$core$Object* (*$fn1171)(panda$collections$ListView*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1172)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1173)(panda$core$Object*);

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
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 8838008024670810340, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 172, -4332006218848187331, NULL };

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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
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
        panda$core$Panda$unref$panda$core$Object($tmp29);
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
    }
}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self) {
    panda$core$String* $returnValue42;
    panda$core$String* $tmp43;
    $tmp43 = self;
    $returnValue42 = $tmp43;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
    return $returnValue42;
}
panda$core$String* panda$core$String$format$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_fmt) {
    panda$core$String* $match$377_948 = NULL;
    panda$core$String* $tmp49;
    panda$core$String* $returnValue52;
    panda$core$String* $tmp53;
    panda$core$MutableString* result61 = NULL;
    panda$core$MutableString* $tmp62;
    panda$core$MutableString* $tmp63;
    panda$collections$Iterator* Iter$382$1769 = NULL;
    panda$collections$Iterator* $tmp70;
    panda$collections$Iterator* $tmp71;
    panda$collections$ListView* $tmp72;
    panda$core$Char8 c86;
    panda$core$Object* $tmp87;
    panda$core$Char8 $match$383_2192;
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
        $match$377_948 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Bit $tmp51 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$377_948, &$s50);
        if ($tmp51.value) {
        {
            $tmp53 = self;
            $returnValue52 = $tmp53;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
            $tmp47 = 0;
            goto $l45;
            $l54:;
            return $returnValue52;
        }
        }
        else {
        panda$core$Bit $tmp57 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$377_948, &$s56);
        if ($tmp57.value) {
        {
            int $tmp60;
            {
                panda$core$MutableString* $tmp64 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp64, &$s65);
                $tmp63 = $tmp64;
                $tmp62 = $tmp63;
                result61 = $tmp62;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
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
                        Iter$382$1769 = $tmp70;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
                        $l78:;
                        ITable* $tmp81 = Iter$382$1769->$class->itable;
                        while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp81 = $tmp81->next;
                        }
                        $fn83 $tmp82 = $tmp81->methods[0];
                        panda$core$Bit $tmp84 = $tmp82(Iter$382$1769);
                        panda$core$Bit $tmp85 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp84);
                        bool $tmp80 = $tmp85.value;
                        if (!$tmp80) goto $l79;
                        {
                            ITable* $tmp88 = Iter$382$1769->$class->itable;
                            while ($tmp88->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp88 = $tmp88->next;
                            }
                            $fn90 $tmp89 = $tmp88->methods[1];
                            panda$core$Object* $tmp91 = $tmp89(Iter$382$1769);
                            $tmp87 = $tmp91;
                            c86 = ((panda$core$Char8$wrapper*) $tmp87)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp87);
                            {
                                $match$383_2192 = c86;
                                panda$core$UInt8$init$builtin_uint8(&$tmp94, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp93, $tmp94);
                                panda$core$Bit $tmp95 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$383_2192, $tmp93);
                                if ($tmp95.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s96);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp98, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp97, $tmp98);
                                panda$core$Bit $tmp99 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$383_2192, $tmp97);
                                if ($tmp99.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s100);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp102, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp101, $tmp102);
                                panda$core$Bit $tmp103 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$383_2192, $tmp101);
                                if ($tmp103.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s104);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp106, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp105, $tmp106);
                                panda$core$Bit $tmp107 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$383_2192, $tmp105);
                                if ($tmp107.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s108);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp110, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp109, $tmp110);
                                panda$core$Bit $tmp111 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$383_2192, $tmp109);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$382$1769));
                    Iter$382$1769 = NULL;
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
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
                $tmp60 = 0;
                goto $l58;
                $l130:;
                $tmp47 = 1;
                goto $l45;
                $l131:;
                return $returnValue52;
            }
            $l58:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result61));
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
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s137, (panda$core$Int64) { 403 });
            abort();
            $l135:;
        }
        }
        }
    }
    $tmp47 = -1;
    goto $l45;
    $l45:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
    switch ($tmp47) {
        case 1: goto $l131;
        case 0: goto $l54;
        case -1: goto $l138;
    }
    $l138:;
    abort();
}
void panda$core$String$cleanup(panda$core$String* self) {
    int $tmp141;
    {
        if (((panda$core$Bit) { self->owner == NULL }).value) {
        {
            pandaFree(self->data);
        }
        }
    }
    $tmp141 = -1;
    goto $l139;
    $l139:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp141) {
        case -1: goto $l142;
    }
    $l142:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
}
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self) {
    panda$collections$ListView* $returnValue143;
    panda$collections$ListView* $tmp144;
    panda$core$String$UTF8List* $tmp145;
    panda$core$String$UTF8List* $tmp146 = (panda$core$String$UTF8List*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$UTF8List$class);
    panda$core$String$UTF8List$init$panda$core$String($tmp146, self);
    $tmp145 = $tmp146;
    $tmp144 = ((panda$collections$ListView*) $tmp145);
    $returnValue143 = $tmp144;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
    return $returnValue143;
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$collections$Iterator* $returnValue148;
    panda$collections$Iterator* $tmp149;
    panda$core$String$UTF16Iterator* $tmp150;
    panda$core$String$UTF16Iterator* $tmp151 = (panda$core$String$UTF16Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF16Iterator$class);
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp151, self);
    $tmp150 = $tmp151;
    $tmp149 = ((panda$collections$Iterator*) $tmp150);
    $returnValue148 = $tmp149;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
    return $returnValue148;
}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$collections$Iterator* $returnValue153;
    panda$collections$Iterator* $tmp154;
    panda$core$String$UTF32Iterator* $tmp155;
    panda$core$String$UTF32Iterator* $tmp156 = (panda$core$String$UTF32Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF32Iterator$class);
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp156, self);
    $tmp155 = $tmp156;
    $tmp154 = ((panda$collections$Iterator*) $tmp155);
    $returnValue153 = $tmp154;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
    return $returnValue153;
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $returnValue158;
    panda$collections$Iterator* $tmp159;
    panda$collections$Iterator* $tmp160 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
    $tmp159 = $tmp160;
    ITable* $tmp161 = $tmp159->$class->itable;
    while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp161 = $tmp161->next;
    }
    $fn163 $tmp162 = $tmp161->methods[2];
    panda$core$Int64 $tmp164 = $tmp162($tmp159);
    $returnValue158 = $tmp164;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp159));
    return $returnValue158;
}
panda$core$Int64 panda$core$String$byteLength$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $returnValue166;
    $returnValue166 = self->_length;
    return $returnValue166;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue169;
    panda$core$Bit $tmp170;
    panda$core$Range$LTpanda$core$Int64$GT $tmp172;
    panda$core$Int64 $tmp173;
    panda$core$Bit $tmp174;
    panda$core$Bit $tmp189;
    panda$core$Bit $tmp197;
    panda$core$Bit $tmp168 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp168.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp170, false);
        $returnValue169 = $tmp170;
        return $returnValue169;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp173, 0);
    panda$core$Bit$init$builtin_bit(&$tmp174, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp172, $tmp173, p_other->_length, $tmp174);
    int64_t $tmp176 = $tmp172.min.value;
    panda$core$Int64 i175 = { $tmp176 };
    int64_t $tmp178 = $tmp172.max.value;
    bool $tmp179 = $tmp172.inclusive.value;
    if ($tmp179) goto $l186; else goto $l187;
    $l186:;
    if ($tmp176 <= $tmp178) goto $l180; else goto $l182;
    $l187:;
    if ($tmp176 < $tmp178) goto $l180; else goto $l182;
    $l180:;
    {
        panda$core$Bit $tmp188 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i175.value], p_other->data[i175.value]);
        if ($tmp188.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp189, false);
            $returnValue169 = $tmp189;
            return $returnValue169;
        }
        }
    }
    $l183:;
    int64_t $tmp192 = $tmp178 - i175.value;
    if ($tmp179) goto $l193; else goto $l194;
    $l193:;
    if ((uint64_t) $tmp192 >= 1) goto $l191; else goto $l182;
    $l194:;
    if ((uint64_t) $tmp192 > 1) goto $l191; else goto $l182;
    $l191:;
    i175.value += 1;
    goto $l180;
    $l182:;
    panda$core$Bit$init$builtin_bit(&$tmp197, true);
    $returnValue169 = $tmp197;
    return $returnValue169;
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue200;
    panda$core$Bit $tmp201;
    panda$core$Range$LTpanda$core$Int64$GT $tmp203;
    panda$core$Int64 $tmp204;
    panda$core$Bit $tmp205;
    panda$core$Bit $tmp222;
    panda$core$Bit $tmp230;
    panda$core$Bit $tmp199 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp199.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp201, false);
        $returnValue200 = $tmp201;
        return $returnValue200;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp204, 0);
    panda$core$Bit$init$builtin_bit(&$tmp205, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp203, $tmp204, p_other->_length, $tmp205);
    int64_t $tmp207 = $tmp203.min.value;
    panda$core$Int64 i206 = { $tmp207 };
    int64_t $tmp209 = $tmp203.max.value;
    bool $tmp210 = $tmp203.inclusive.value;
    if ($tmp210) goto $l217; else goto $l218;
    $l217:;
    if ($tmp207 <= $tmp209) goto $l211; else goto $l213;
    $l218:;
    if ($tmp207 < $tmp209) goto $l211; else goto $l213;
    $l211:;
    {
        panda$core$Int64 $tmp219 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp220 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp219, i206);
        panda$core$Bit $tmp221 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp220.value], p_other->data[i206.value]);
        if ($tmp221.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp222, false);
            $returnValue200 = $tmp222;
            return $returnValue200;
        }
        }
    }
    $l214:;
    int64_t $tmp225 = $tmp209 - i206.value;
    if ($tmp210) goto $l226; else goto $l227;
    $l226:;
    if ((uint64_t) $tmp225 >= 1) goto $l224; else goto $l213;
    $l227:;
    if ((uint64_t) $tmp225 > 1) goto $l224; else goto $l213;
    $l224:;
    i206.value += 1;
    goto $l211;
    $l213:;
    panda$core$Bit$init$builtin_bit(&$tmp230, true);
    $returnValue200 = $tmp230;
    return $returnValue200;
}
panda$core$String* panda$core$String$trim$R$panda$core$String(panda$core$String* self) {
    panda$core$Int64 $tmp232;
    panda$core$String* $returnValue234;
    panda$core$String* $tmp235;
    panda$core$Int64 start237;
    panda$core$Int64 $tmp238;
    panda$core$Int64 $tmp247;
    panda$core$Int64 end249;
    panda$core$Int64 $tmp250;
    panda$core$Int64 $tmp260;
    panda$core$String* $tmp262;
    panda$core$String* $tmp263;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp264;
    panda$core$String$Index $tmp265;
    panda$core$String$Index $tmp266;
    panda$core$Bit $tmp267;
    panda$core$Int64$init$builtin_int64(&$tmp232, 0);
    panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp232);
    if ($tmp233.value) {
    {
        $tmp235 = self;
        $returnValue234 = $tmp235;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
        return $returnValue234;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp238, 0);
    start237 = $tmp238;
    $l239:;
    panda$core$Bit $tmp243 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start237, self->_length);
    bool $tmp242 = $tmp243.value;
    if (!$tmp242) goto $l244;
    panda$core$Bit $tmp245 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start237.value]);
    $tmp242 = $tmp245.value;
    $l244:;
    panda$core$Bit $tmp246 = { $tmp242 };
    bool $tmp241 = $tmp246.value;
    if (!$tmp241) goto $l240;
    {
        panda$core$Int64$init$builtin_int64(&$tmp247, 1);
        panda$core$Int64 $tmp248 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start237, $tmp247);
        start237 = $tmp248;
    }
    goto $l239;
    $l240:;
    panda$core$Int64$init$builtin_int64(&$tmp250, 1);
    panda$core$Int64 $tmp251 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp250);
    end249 = $tmp251;
    $l252:;
    panda$core$Bit $tmp256 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end249, start237);
    bool $tmp255 = $tmp256.value;
    if (!$tmp255) goto $l257;
    panda$core$Bit $tmp258 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end249.value]);
    $tmp255 = $tmp258.value;
    $l257:;
    panda$core$Bit $tmp259 = { $tmp255 };
    bool $tmp254 = $tmp259.value;
    if (!$tmp254) goto $l253;
    {
        panda$core$Int64$init$builtin_int64(&$tmp260, 1);
        panda$core$Int64 $tmp261 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end249, $tmp260);
        end249 = $tmp261;
    }
    goto $l252;
    $l253:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp265, start237);
    panda$core$String$Index$init$panda$core$Int64(&$tmp266, end249);
    panda$core$Bit$init$builtin_bit(&$tmp267, true);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp264, $tmp265, $tmp266, $tmp267);
    panda$core$String* $tmp268 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp264);
    $tmp263 = $tmp268;
    $tmp262 = $tmp263;
    $returnValue234 = $tmp262;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
    return $returnValue234;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result270;
    panda$core$Range$LTpanda$core$Int64$GT $tmp272;
    panda$core$Int64 $tmp273;
    panda$core$Bit $tmp274;
    panda$core$Range$LTpanda$core$Int64$GT $tmp294;
    panda$core$Int64 $tmp295;
    panda$core$Bit $tmp296;
    panda$core$String* $returnValue317;
    panda$core$String* $tmp318;
    panda$core$String* $tmp319;
    panda$core$Int64 $tmp271 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result270 = ((panda$core$Char8*) pandaZAlloc($tmp271.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp273, 0);
    panda$core$Bit$init$builtin_bit(&$tmp274, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp272, $tmp273, self->_length, $tmp274);
    int64_t $tmp276 = $tmp272.min.value;
    panda$core$Int64 i275 = { $tmp276 };
    int64_t $tmp278 = $tmp272.max.value;
    bool $tmp279 = $tmp272.inclusive.value;
    if ($tmp279) goto $l286; else goto $l287;
    $l286:;
    if ($tmp276 <= $tmp278) goto $l280; else goto $l282;
    $l287:;
    if ($tmp276 < $tmp278) goto $l280; else goto $l282;
    $l280:;
    {
        result270[i275.value] = self->data[i275.value];
    }
    $l283:;
    int64_t $tmp289 = $tmp278 - i275.value;
    if ($tmp279) goto $l290; else goto $l291;
    $l290:;
    if ((uint64_t) $tmp289 >= 1) goto $l288; else goto $l282;
    $l291:;
    if ((uint64_t) $tmp289 > 1) goto $l288; else goto $l282;
    $l288:;
    i275.value += 1;
    goto $l280;
    $l282:;
    panda$core$Int64$init$builtin_int64(&$tmp295, 0);
    panda$core$Bit$init$builtin_bit(&$tmp296, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp294, $tmp295, p_other->_length, $tmp296);
    int64_t $tmp298 = $tmp294.min.value;
    panda$core$Int64 i297 = { $tmp298 };
    int64_t $tmp300 = $tmp294.max.value;
    bool $tmp301 = $tmp294.inclusive.value;
    if ($tmp301) goto $l308; else goto $l309;
    $l308:;
    if ($tmp298 <= $tmp300) goto $l302; else goto $l304;
    $l309:;
    if ($tmp298 < $tmp300) goto $l302; else goto $l304;
    $l302:;
    {
        panda$core$Int64 $tmp310 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i297);
        result270[$tmp310.value] = p_other->data[i297.value];
    }
    $l305:;
    int64_t $tmp312 = $tmp300 - i297.value;
    if ($tmp301) goto $l313; else goto $l314;
    $l313:;
    if ((uint64_t) $tmp312 >= 1) goto $l311; else goto $l304;
    $l314:;
    if ((uint64_t) $tmp312 > 1) goto $l311; else goto $l304;
    $l311:;
    i297.value += 1;
    goto $l302;
    $l304:;
    panda$core$String* $tmp320 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp321 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp320, result270, $tmp321);
    $tmp319 = $tmp320;
    $tmp318 = $tmp319;
    $returnValue317 = $tmp318;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
    return $returnValue317;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $returnValue323;
    panda$core$String* $tmp324;
    panda$core$String* $tmp325;
    panda$core$String* $tmp326;
    panda$core$String* $tmp328 = (($fn327) p_other->$class->vtable[0])(p_other);
    $tmp326 = $tmp328;
    panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp326);
    $tmp325 = $tmp329;
    $tmp324 = $tmp325;
    $returnValue323 = $tmp324;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp324));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
    return $returnValue323;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$Int64 $tmp331;
    panda$core$MutableString* result340 = NULL;
    panda$core$MutableString* $tmp341;
    panda$core$MutableString* $tmp342;
    panda$core$Range$LTpanda$core$Int64$GT $tmp344;
    panda$core$Int64 $tmp345;
    panda$core$Bit $tmp346;
    panda$core$String* $returnValue366;
    panda$core$String* $tmp367;
    panda$core$String* $tmp368;
    panda$core$Int64$init$builtin_int64(&$tmp331, 0);
    panda$core$Bit $tmp332 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_count, $tmp331);
    if ($tmp332.value) goto $l333; else goto $l334;
    $l334:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s335, (panda$core$Int64) { 517 }, &$s336);
    abort();
    $l333:;
    int $tmp339;
    {
        panda$core$MutableString* $tmp343 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp343);
        $tmp342 = $tmp343;
        $tmp341 = $tmp342;
        result340 = $tmp341;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
        panda$core$Int64$init$builtin_int64(&$tmp345, 0);
        panda$core$Bit$init$builtin_bit(&$tmp346, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp344, $tmp345, p_count, $tmp346);
        int64_t $tmp348 = $tmp344.min.value;
        panda$core$Int64 i347 = { $tmp348 };
        int64_t $tmp350 = $tmp344.max.value;
        bool $tmp351 = $tmp344.inclusive.value;
        if ($tmp351) goto $l358; else goto $l359;
        $l358:;
        if ($tmp348 <= $tmp350) goto $l352; else goto $l354;
        $l359:;
        if ($tmp348 < $tmp350) goto $l352; else goto $l354;
        $l352:;
        {
            panda$core$MutableString$append$panda$core$String(result340, self);
        }
        $l355:;
        int64_t $tmp361 = $tmp350 - i347.value;
        if ($tmp351) goto $l362; else goto $l363;
        $l362:;
        if ((uint64_t) $tmp361 >= 1) goto $l360; else goto $l354;
        $l363:;
        if ((uint64_t) $tmp361 > 1) goto $l360; else goto $l354;
        $l360:;
        i347.value += 1;
        goto $l352;
        $l354:;
        panda$core$String* $tmp369 = panda$core$MutableString$finish$R$panda$core$String(result340);
        $tmp368 = $tmp369;
        $tmp367 = $tmp368;
        $returnValue366 = $tmp367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp367));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
        $tmp339 = 0;
        goto $l337;
        $l370:;
        return $returnValue366;
    }
    $l337:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result340));
    result340 = NULL;
    switch ($tmp339) {
        case 0: goto $l370;
    }
    $l372:;
    abort();
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $returnValue373;
    panda$core$String* $tmp374;
    panda$core$String* $tmp375;
    panda$core$String* $tmp376;
    panda$core$String* $tmp378 = (($fn377) p_o->$class->vtable[0])(p_o);
    $tmp376 = $tmp378;
    panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp376, p_s);
    $tmp375 = $tmp379;
    $tmp374 = $tmp375;
    $returnValue373 = $tmp374;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp374));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp375));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
    return $returnValue373;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue382;
    panda$core$Bit $tmp383;
    panda$core$Range$LTpanda$core$Int64$GT $tmp385;
    panda$core$Int64 $tmp386;
    panda$core$Bit $tmp387;
    panda$core$Bit $tmp402;
    panda$core$Bit $tmp410;
    panda$core$Bit $tmp381 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp381.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp383, false);
        $returnValue382 = $tmp383;
        return $returnValue382;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp386, 0);
    panda$core$Bit$init$builtin_bit(&$tmp387, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp385, $tmp386, self->_length, $tmp387);
    int64_t $tmp389 = $tmp385.min.value;
    panda$core$Int64 i388 = { $tmp389 };
    int64_t $tmp391 = $tmp385.max.value;
    bool $tmp392 = $tmp385.inclusive.value;
    if ($tmp392) goto $l399; else goto $l400;
    $l399:;
    if ($tmp389 <= $tmp391) goto $l393; else goto $l395;
    $l400:;
    if ($tmp389 < $tmp391) goto $l393; else goto $l395;
    $l393:;
    {
        panda$core$Bit $tmp401 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i388.value], p_other->data[i388.value]);
        if ($tmp401.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp402, false);
            $returnValue382 = $tmp402;
            return $returnValue382;
        }
        }
    }
    $l396:;
    int64_t $tmp405 = $tmp391 - i388.value;
    if ($tmp392) goto $l406; else goto $l407;
    $l406:;
    if ((uint64_t) $tmp405 >= 1) goto $l404; else goto $l395;
    $l407:;
    if ((uint64_t) $tmp405 > 1) goto $l404; else goto $l395;
    $l404:;
    i388.value += 1;
    goto $l393;
    $l395:;
    panda$core$Bit$init$builtin_bit(&$tmp410, true);
    $returnValue382 = $tmp410;
    return $returnValue382;
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue412;
    panda$core$Bit $tmp413 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp414 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp413);
    $returnValue412 = $tmp414;
    return $returnValue412;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx416;
    panda$core$Char8 c417;
    panda$core$Int32 result418;
    panda$core$Bit $tmp420;
    panda$core$Char32 $returnValue423;
    panda$core$Char32 $tmp424;
    panda$core$Bit $tmp426;
    panda$core$Int64 $tmp429;
    panda$core$Int32 $tmp435;
    panda$core$Int32 $tmp437;
    panda$core$Int64 $tmp439;
    panda$core$Int32 $tmp442;
    panda$core$Char32 $tmp445;
    panda$core$Bit $tmp447;
    panda$core$Int64 $tmp450;
    panda$core$Int32 $tmp456;
    panda$core$Int32 $tmp458;
    panda$core$Int64 $tmp460;
    panda$core$Int32 $tmp463;
    panda$core$Int32 $tmp465;
    panda$core$Int64 $tmp468;
    panda$core$Int32 $tmp471;
    panda$core$Char32 $tmp474;
    panda$core$Int64 $tmp476;
    panda$core$Int32 $tmp482;
    panda$core$Int32 $tmp484;
    panda$core$Int64 $tmp486;
    panda$core$Int32 $tmp489;
    panda$core$Int32 $tmp491;
    panda$core$Int64 $tmp494;
    panda$core$Int32 $tmp497;
    panda$core$Int32 $tmp499;
    panda$core$Int64 $tmp502;
    panda$core$Int32 $tmp505;
    panda$core$Char32 $tmp508;
    idx416 = p_index.value;
    c417 = self->data[idx416.value];
    panda$core$Int32 $tmp419 = panda$core$Char8$convert$R$panda$core$Int32(c417);
    result418 = $tmp419;
    int64_t $tmp421 = ((int64_t) c417.value) & 255;
    bool $tmp422 = $tmp421 < 192;
    panda$core$Bit$init$builtin_bit(&$tmp420, $tmp422);
    if ($tmp420.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp424, result418);
        $returnValue423 = $tmp424;
        return $returnValue423;
    }
    }
    int64_t $tmp427 = ((int64_t) c417.value) & 255;
    bool $tmp428 = $tmp427 < 224;
    panda$core$Bit$init$builtin_bit(&$tmp426, $tmp428);
    if ($tmp426.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp429, 1);
        panda$core$Int64 $tmp430 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx416, $tmp429);
        panda$core$Bit $tmp431 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp430, self->_length);
        if ($tmp431.value) goto $l432; else goto $l433;
        $l433:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s434, (panda$core$Int64) { 559 });
        abort();
        $l432:;
        panda$core$Int32$init$builtin_int32(&$tmp435, 31);
        panda$core$Int32 $tmp436 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result418, $tmp435);
        panda$core$Int32$init$builtin_int32(&$tmp437, 6);
        panda$core$Int32 $tmp438 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp436, $tmp437);
        panda$core$Int64$init$builtin_int64(&$tmp439, 1);
        panda$core$Int64 $tmp440 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx416, $tmp439);
        panda$core$Int32 $tmp441 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp440.value]);
        panda$core$Int32$init$builtin_int32(&$tmp442, 63);
        panda$core$Int32 $tmp443 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp441, $tmp442);
        panda$core$Int32 $tmp444 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp438, $tmp443);
        result418 = $tmp444;
        panda$core$Char32$init$panda$core$Int32(&$tmp445, result418);
        $returnValue423 = $tmp445;
        return $returnValue423;
    }
    }
    int64_t $tmp448 = ((int64_t) c417.value) & 255;
    bool $tmp449 = $tmp448 < 240;
    panda$core$Bit$init$builtin_bit(&$tmp447, $tmp449);
    if ($tmp447.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp450, 2);
        panda$core$Int64 $tmp451 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx416, $tmp450);
        panda$core$Bit $tmp452 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp451, self->_length);
        if ($tmp452.value) goto $l453; else goto $l454;
        $l454:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s455, (panda$core$Int64) { 564 });
        abort();
        $l453:;
        panda$core$Int32$init$builtin_int32(&$tmp456, 15);
        panda$core$Int32 $tmp457 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result418, $tmp456);
        panda$core$Int32$init$builtin_int32(&$tmp458, 12);
        panda$core$Int32 $tmp459 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp457, $tmp458);
        panda$core$Int64$init$builtin_int64(&$tmp460, 1);
        panda$core$Int64 $tmp461 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx416, $tmp460);
        panda$core$Int32 $tmp462 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp461.value]);
        panda$core$Int32$init$builtin_int32(&$tmp463, 63);
        panda$core$Int32 $tmp464 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp462, $tmp463);
        panda$core$Int32$init$builtin_int32(&$tmp465, 6);
        panda$core$Int32 $tmp466 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp464, $tmp465);
        panda$core$Int32 $tmp467 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp459, $tmp466);
        panda$core$Int64$init$builtin_int64(&$tmp468, 2);
        panda$core$Int64 $tmp469 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx416, $tmp468);
        panda$core$Int32 $tmp470 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp469.value]);
        panda$core$Int32$init$builtin_int32(&$tmp471, 63);
        panda$core$Int32 $tmp472 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp470, $tmp471);
        panda$core$Int32 $tmp473 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp467, $tmp472);
        result418 = $tmp473;
        panda$core$Char32$init$panda$core$Int32(&$tmp474, result418);
        $returnValue423 = $tmp474;
        return $returnValue423;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp476, 3);
    panda$core$Int64 $tmp477 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx416, $tmp476);
    panda$core$Bit $tmp478 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp477, self->_length);
    if ($tmp478.value) goto $l479; else goto $l480;
    $l480:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s481, (panda$core$Int64) { 569 });
    abort();
    $l479:;
    panda$core$Int32$init$builtin_int32(&$tmp482, 7);
    panda$core$Int32 $tmp483 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result418, $tmp482);
    panda$core$Int32$init$builtin_int32(&$tmp484, 18);
    panda$core$Int32 $tmp485 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp483, $tmp484);
    panda$core$Int64$init$builtin_int64(&$tmp486, 1);
    panda$core$Int64 $tmp487 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx416, $tmp486);
    panda$core$Int32 $tmp488 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp487.value]);
    panda$core$Int32$init$builtin_int32(&$tmp489, 63);
    panda$core$Int32 $tmp490 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp488, $tmp489);
    panda$core$Int32$init$builtin_int32(&$tmp491, 12);
    panda$core$Int32 $tmp492 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp490, $tmp491);
    panda$core$Int32 $tmp493 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp485, $tmp492);
    panda$core$Int64$init$builtin_int64(&$tmp494, 2);
    panda$core$Int64 $tmp495 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx416, $tmp494);
    panda$core$Int32 $tmp496 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp495.value]);
    panda$core$Int32$init$builtin_int32(&$tmp497, 63);
    panda$core$Int32 $tmp498 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp496, $tmp497);
    panda$core$Int32$init$builtin_int32(&$tmp499, 6);
    panda$core$Int32 $tmp500 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp498, $tmp499);
    panda$core$Int32 $tmp501 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp493, $tmp500);
    panda$core$Int64$init$builtin_int64(&$tmp502, 3);
    panda$core$Int64 $tmp503 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx416, $tmp502);
    panda$core$Int32 $tmp504 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp503.value]);
    panda$core$Int32$init$builtin_int32(&$tmp505, 63);
    panda$core$Int32 $tmp506 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp504, $tmp505);
    panda$core$Int32 $tmp507 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp501, $tmp506);
    result418 = $tmp507;
    panda$core$Char32$init$panda$core$Int32(&$tmp508, result418);
    $returnValue423 = $tmp508;
    return $returnValue423;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$Char32 $returnValue510;
    panda$core$String$Index $tmp511 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp512 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp511, p_index);
    panda$core$Char32 $tmp513 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp512);
    $returnValue510 = $tmp513;
    return $returnValue510;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $returnValue515;
    panda$core$String* $tmp516;
    panda$core$String* $tmp517;
    panda$core$String* $tmp518 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp519 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp518, (self->data + p_r.min.value.value), $tmp519, self);
    $tmp517 = $tmp518;
    $tmp516 = $tmp517;
    $returnValue515 = $tmp516;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp516));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp517));
    return $returnValue515;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min521;
    panda$core$Bit inclusive523;
    panda$core$String$Index max524;
    panda$core$Bit $tmp526;
    panda$core$String* $returnValue527;
    panda$core$String* $tmp528;
    panda$core$String* $tmp529;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp530;
    memset(&min521, 0, sizeof(min521));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min521 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp522 = panda$core$String$start$R$panda$core$String$Index(self);
        min521 = $tmp522;
    }
    }
    inclusive523 = p_r.inclusive;
    memset(&max524, 0, sizeof(max524));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max524 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp525 = panda$core$String$end$R$panda$core$String$Index(self);
        max524 = $tmp525;
        panda$core$Bit$init$builtin_bit(&$tmp526, false);
        inclusive523 = $tmp526;
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp530, min521, max524, inclusive523);
    panda$core$String* $tmp531 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp530);
    $tmp529 = $tmp531;
    $tmp528 = $tmp529;
    $returnValue527 = $tmp528;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp528));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp529));
    return $returnValue527;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current536;
    panda$core$MutableString* result537 = NULL;
    panda$core$MutableString* $tmp538;
    panda$core$MutableString* $tmp539;
    panda$core$Int64 max541;
    panda$core$Int64 $tmp542;
    panda$core$Char8 c548;
    panda$core$Int64 $tmp549;
    panda$core$Bit $tmp551;
    panda$core$Int64 $tmp554;
    panda$core$Bit $tmp556;
    panda$core$Int64 $tmp559;
    panda$core$Bit $tmp561;
    panda$core$Int64 $tmp564;
    panda$core$String* $returnValue566;
    panda$core$String* $tmp567;
    panda$core$String* $tmp568;
    int $tmp535;
    {
        current536 = p_r.min.value;
        panda$core$MutableString* $tmp540 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp540);
        $tmp539 = $tmp540;
        $tmp538 = $tmp539;
        result537 = $tmp538;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp538));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp539));
        max541 = p_r.max.value;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp542, 1);
            panda$core$Int64 $tmp543 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max541, $tmp542);
            max541 = $tmp543;
        }
        }
        $l544:;
        panda$core$Bit $tmp547 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current536, max541);
        bool $tmp546 = $tmp547.value;
        if (!$tmp546) goto $l545;
        {
            c548 = self->data[current536.value];
            panda$core$MutableString$append$panda$core$Char8(result537, c548);
            panda$core$Int64$init$builtin_int64(&$tmp549, 1);
            panda$core$Int64 $tmp550 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current536, $tmp549);
            current536 = $tmp550;
            int64_t $tmp552 = ((int64_t) c548.value) & 255;
            bool $tmp553 = $tmp552 >= 192;
            panda$core$Bit$init$builtin_bit(&$tmp551, $tmp553);
            if ($tmp551.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result537, self->data[current536.value]);
                panda$core$Int64$init$builtin_int64(&$tmp554, 1);
                panda$core$Int64 $tmp555 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current536, $tmp554);
                current536 = $tmp555;
            }
            }
            int64_t $tmp557 = ((int64_t) c548.value) & 255;
            bool $tmp558 = $tmp557 >= 224;
            panda$core$Bit$init$builtin_bit(&$tmp556, $tmp558);
            if ($tmp556.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result537, self->data[current536.value]);
                panda$core$Int64$init$builtin_int64(&$tmp559, 1);
                panda$core$Int64 $tmp560 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current536, $tmp559);
                current536 = $tmp560;
            }
            }
            int64_t $tmp562 = ((int64_t) c548.value) & 255;
            bool $tmp563 = $tmp562 >= 240;
            panda$core$Bit$init$builtin_bit(&$tmp561, $tmp563);
            if ($tmp561.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result537, self->data[current536.value]);
                panda$core$Int64$init$builtin_int64(&$tmp564, 1);
                panda$core$Int64 $tmp565 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current536, $tmp564);
                current536 = $tmp565;
            }
            }
        }
        goto $l544;
        $l545:;
        panda$core$String* $tmp569 = panda$core$MutableString$finish$R$panda$core$String(result537);
        $tmp568 = $tmp569;
        $tmp567 = $tmp568;
        $returnValue566 = $tmp567;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp567));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
        $tmp535 = 0;
        goto $l533;
        $l570:;
        return $returnValue566;
    }
    $l533:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result537));
    result537 = NULL;
    switch ($tmp535) {
        case 0: goto $l570;
    }
    $l572:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$Int64 $tmp573;
    panda$core$String* $returnValue575;
    panda$core$String* $tmp576;
    panda$core$String$Index min579;
    panda$core$Bit inclusive581;
    panda$core$String$Index max582;
    panda$core$Bit $tmp584;
    panda$core$String* $tmp585;
    panda$core$String* $tmp586;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp587;
    panda$core$Int64$init$builtin_int64(&$tmp573, 0);
    panda$core$Bit $tmp574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp573);
    if ($tmp574.value) {
    {
        $tmp576 = &$s577;
        $returnValue575 = $tmp576;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp576));
        return $returnValue575;
    }
    }
    memset(&min579, 0, sizeof(min579));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min579 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp580 = panda$core$String$start$R$panda$core$String$Index(self);
        min579 = $tmp580;
    }
    }
    inclusive581 = p_r.inclusive;
    memset(&max582, 0, sizeof(max582));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max582 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp583 = panda$core$String$end$R$panda$core$String$Index(self);
        max582 = $tmp583;
        panda$core$Bit$init$builtin_bit(&$tmp584, false);
        inclusive581 = $tmp584;
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp587, min579, max582, inclusive581);
    panda$core$String* $tmp588 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp587);
    $tmp586 = $tmp588;
    $tmp585 = $tmp586;
    $returnValue575 = $tmp585;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp585));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
    return $returnValue575;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 $tmp593;
    panda$core$String* $returnValue595;
    panda$core$String* $tmp596;
    panda$core$Int64 step600;
    panda$core$Int64 current601;
    panda$core$Int64 $tmp602;
    panda$core$Int64 end607;
    panda$core$Int64 $tmp608;
    panda$core$MutableString* result612 = NULL;
    panda$core$MutableString* $tmp613;
    panda$core$MutableString* $tmp614;
    panda$core$Int64 $tmp616;
    panda$core$Char8 c622;
    panda$core$Int64 $tmp623;
    panda$core$Bit $tmp625;
    panda$core$Int64 $tmp628;
    panda$core$Bit $tmp630;
    panda$core$Int64 $tmp633;
    panda$core$Bit $tmp635;
    panda$core$Int64 $tmp638;
    panda$core$Range$LTpanda$core$Int64$GT $tmp640;
    panda$core$Int64 $tmp641;
    panda$core$Bit $tmp642;
    panda$core$String* $tmp657;
    panda$core$String* $tmp658;
    panda$core$String$Index $tmp662;
    panda$core$Int64 $tmp670;
    panda$core$Char8 c679;
    panda$core$Int64 old680;
    panda$core$Int64 $tmp681;
    panda$core$Bit $tmp683;
    panda$core$Int64 $tmp686;
    panda$core$Bit $tmp688;
    panda$core$Int64 $tmp691;
    panda$core$Bit $tmp693;
    panda$core$Int64 $tmp696;
    panda$core$Bit $tmp701;
    panda$core$Int64 $tmp708;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp710;
    panda$core$Int64 $tmp711;
    panda$core$Int64 $tmp712;
    panda$core$Bit $tmp713;
    panda$core$String* $tmp733;
    panda$core$String* $tmp734;
    panda$core$String$Index $tmp738;
    panda$core$Char8 c762;
    panda$core$Int64 $tmp763;
    panda$core$Bit $tmp765;
    panda$core$Int64 $tmp768;
    panda$core$Bit $tmp770;
    panda$core$Int64 $tmp773;
    panda$core$Bit $tmp775;
    panda$core$String* $tmp778;
    panda$core$String* $tmp779;
    int $tmp592;
    {
        panda$core$Int64$init$builtin_int64(&$tmp593, 0);
        panda$core$Bit $tmp594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp593);
        if ($tmp594.value) {
        {
            $tmp596 = &$s597;
            $returnValue595 = $tmp596;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp596));
            $tmp592 = 0;
            goto $l590;
            $l598:;
            return $returnValue595;
        }
        }
        step600 = p_r.step;
        memset(&current601, 0, sizeof(current601));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current601 = ((panda$core$String$Index) p_r.start.value).value;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp602, 0);
        panda$core$Bit $tmp603 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step600, $tmp602);
        if ($tmp603.value) {
        {
            panda$core$String$Index $tmp604 = panda$core$String$start$R$panda$core$String$Index(self);
            current601 = $tmp604.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp605 = panda$core$String$end$R$panda$core$String$Index(self);
            panda$core$String$Index $tmp606 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp605);
            current601 = $tmp606.value;
        }
        }
        }
        memset(&end607, 0, sizeof(end607));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end607 = ((panda$core$String$Index) p_r.end.value).value;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp608, 0);
        panda$core$Bit $tmp609 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step600, $tmp608);
        if ($tmp609.value) {
        {
            panda$core$String$Index $tmp610 = panda$core$String$end$R$panda$core$String$Index(self);
            end607 = $tmp610.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp611 = panda$core$String$start$R$panda$core$String$Index(self);
            end607 = $tmp611.value;
        }
        }
        }
        panda$core$MutableString* $tmp615 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp615);
        $tmp614 = $tmp615;
        $tmp613 = $tmp614;
        result612 = $tmp613;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp613));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp614));
        panda$core$Int64$init$builtin_int64(&$tmp616, 0);
        panda$core$Bit $tmp617 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp616);
        if ($tmp617.value) {
        {
            $l618:;
            panda$core$Bit $tmp621 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current601, end607);
            bool $tmp620 = $tmp621.value;
            if (!$tmp620) goto $l619;
            {
                c622 = self->data[current601.value];
                panda$core$MutableString$append$panda$core$Char8(result612, c622);
                panda$core$Int64$init$builtin_int64(&$tmp623, 1);
                panda$core$Int64 $tmp624 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current601, $tmp623);
                current601 = $tmp624;
                int64_t $tmp626 = ((int64_t) c622.value) & 255;
                bool $tmp627 = $tmp626 >= 192;
                panda$core$Bit$init$builtin_bit(&$tmp625, $tmp627);
                if ($tmp625.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result612, self->data[current601.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp628, 1);
                    panda$core$Int64 $tmp629 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current601, $tmp628);
                    current601 = $tmp629;
                }
                }
                int64_t $tmp631 = ((int64_t) c622.value) & 255;
                bool $tmp632 = $tmp631 >= 224;
                panda$core$Bit$init$builtin_bit(&$tmp630, $tmp632);
                if ($tmp630.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result612, self->data[current601.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp633, 1);
                    panda$core$Int64 $tmp634 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current601, $tmp633);
                    current601 = $tmp634;
                }
                }
                int64_t $tmp636 = ((int64_t) c622.value) & 255;
                bool $tmp637 = $tmp636 >= 240;
                panda$core$Bit$init$builtin_bit(&$tmp635, $tmp637);
                if ($tmp635.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result612, self->data[current601.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp638, 1);
                    panda$core$Int64 $tmp639 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current601, $tmp638);
                    current601 = $tmp639;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp641, 1);
                panda$core$Bit$init$builtin_bit(&$tmp642, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp640, $tmp641, step600, $tmp642);
                int64_t $tmp644 = $tmp640.min.value;
                panda$core$Int64 i643 = { $tmp644 };
                int64_t $tmp646 = $tmp640.max.value;
                bool $tmp647 = $tmp640.inclusive.value;
                if ($tmp647) goto $l654; else goto $l655;
                $l654:;
                if ($tmp644 <= $tmp646) goto $l648; else goto $l650;
                $l655:;
                if ($tmp644 < $tmp646) goto $l648; else goto $l650;
                $l648:;
                {
                    panda$core$Bit $tmp656 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current601, end607);
                    if ($tmp656.value) {
                    {
                        panda$core$String* $tmp659 = panda$core$MutableString$convert$R$panda$core$String(result612);
                        $tmp658 = $tmp659;
                        $tmp657 = $tmp658;
                        $returnValue595 = $tmp657;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp657));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
                        $tmp592 = 1;
                        goto $l590;
                        $l660:;
                        return $returnValue595;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp662, current601);
                    panda$core$String$Index $tmp663 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp662);
                    current601 = $tmp663.value;
                }
                $l651:;
                int64_t $tmp665 = $tmp646 - i643.value;
                if ($tmp647) goto $l666; else goto $l667;
                $l666:;
                if ((uint64_t) $tmp665 >= 1) goto $l664; else goto $l650;
                $l667:;
                if ((uint64_t) $tmp665 > 1) goto $l664; else goto $l650;
                $l664:;
                i643.value += 1;
                goto $l648;
                $l650:;
            }
            goto $l618;
            $l619:;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp670, 0);
            panda$core$Bit $tmp671 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp670);
            if ($tmp671.value) goto $l672; else goto $l673;
            $l673:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s674, (panda$core$Int64) { 758 });
            abort();
            $l672:;
            $l675:;
            panda$core$Bit $tmp678 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current601, end607);
            bool $tmp677 = $tmp678.value;
            if (!$tmp677) goto $l676;
            {
                c679 = self->data[current601.value];
                panda$core$MutableString$append$panda$core$Char8(result612, c679);
                old680 = current601;
                panda$core$Int64$init$builtin_int64(&$tmp681, 1);
                panda$core$Int64 $tmp682 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current601, $tmp681);
                current601 = $tmp682;
                int64_t $tmp684 = ((int64_t) c679.value) & 255;
                bool $tmp685 = $tmp684 >= 192;
                panda$core$Bit$init$builtin_bit(&$tmp683, $tmp685);
                if ($tmp683.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result612, self->data[current601.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp686, 1);
                    panda$core$Int64 $tmp687 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current601, $tmp686);
                    current601 = $tmp687;
                }
                }
                int64_t $tmp689 = ((int64_t) c679.value) & 255;
                bool $tmp690 = $tmp689 >= 224;
                panda$core$Bit$init$builtin_bit(&$tmp688, $tmp690);
                if ($tmp688.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result612, self->data[current601.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp691, 1);
                    panda$core$Int64 $tmp692 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current601, $tmp691);
                    current601 = $tmp692;
                }
                }
                int64_t $tmp694 = ((int64_t) c679.value) & 255;
                bool $tmp695 = $tmp694 >= 240;
                panda$core$Bit$init$builtin_bit(&$tmp693, $tmp695);
                if ($tmp693.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result612, self->data[current601.value]);
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp696, 1);
                panda$core$Int64 $tmp697 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old680, $tmp696);
                current601 = $tmp697;
                $l698:;
                int64_t $tmp703 = ((int64_t) self->data[current601.value].value) & 255;
                bool $tmp704 = $tmp703 >= 128;
                bool $tmp702 = $tmp704;
                if (!$tmp702) goto $l705;
                int64_t $tmp706 = ((int64_t) self->data[current601.value].value) & 255;
                bool $tmp707 = $tmp706 < 192;
                $tmp702 = $tmp707;
                $l705:;
                panda$core$Bit$init$builtin_bit(&$tmp701, $tmp702);
                bool $tmp700 = $tmp701.value;
                if (!$tmp700) goto $l699;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp708, 1);
                    panda$core$Int64 $tmp709 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current601, $tmp708);
                    current601 = $tmp709;
                }
                goto $l698;
                $l699:;
                panda$core$Int64$init$builtin_int64(&$tmp711, -1);
                panda$core$Int64$init$builtin_int64(&$tmp712, -1);
                panda$core$Bit$init$builtin_bit(&$tmp713, false);
                panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp710, $tmp711, step600, $tmp712, $tmp713);
                int64_t $tmp715 = $tmp710.start.value;
                panda$core$Int64 i714 = { $tmp715 };
                int64_t $tmp717 = $tmp710.end.value;
                int64_t $tmp718 = $tmp710.step.value;
                bool $tmp719 = $tmp710.inclusive.value;
                bool $tmp726 = $tmp718 > 0;
                if ($tmp726) goto $l724; else goto $l725;
                $l724:;
                if ($tmp719) goto $l727; else goto $l728;
                $l727:;
                if ($tmp715 <= $tmp717) goto $l720; else goto $l722;
                $l728:;
                if ($tmp715 < $tmp717) goto $l720; else goto $l722;
                $l725:;
                if ($tmp719) goto $l729; else goto $l730;
                $l729:;
                if ($tmp715 >= $tmp717) goto $l720; else goto $l722;
                $l730:;
                if ($tmp715 > $tmp717) goto $l720; else goto $l722;
                $l720:;
                {
                    panda$core$Bit $tmp732 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current601, end607);
                    if ($tmp732.value) {
                    {
                        panda$core$String* $tmp735 = panda$core$MutableString$convert$R$panda$core$String(result612);
                        $tmp734 = $tmp735;
                        $tmp733 = $tmp734;
                        $returnValue595 = $tmp733;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp733));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp734));
                        $tmp592 = 2;
                        goto $l590;
                        $l736:;
                        return $returnValue595;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp738, current601);
                    panda$core$String$Index $tmp739 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp738);
                    current601 = $tmp739.value;
                }
                $l723:;
                if ($tmp726) goto $l741; else goto $l742;
                $l741:;
                int64_t $tmp743 = $tmp717 - i714.value;
                if ($tmp719) goto $l744; else goto $l745;
                $l744:;
                if ((uint64_t) $tmp743 >= $tmp718) goto $l740; else goto $l722;
                $l745:;
                if ((uint64_t) $tmp743 > $tmp718) goto $l740; else goto $l722;
                $l742:;
                int64_t $tmp747 = i714.value - $tmp717;
                if ($tmp719) goto $l748; else goto $l749;
                $l748:;
                if ((uint64_t) $tmp747 >= -$tmp718) goto $l740; else goto $l722;
                $l749:;
                if ((uint64_t) $tmp747 > -$tmp718) goto $l740; else goto $l722;
                $l740:;
                i714.value += $tmp718;
                goto $l720;
                $l722:;
            }
            goto $l675;
            $l676:;
        }
        }
        bool $tmp753 = p_r.inclusive.value;
        if ($tmp753) goto $l754;
        $tmp753 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l754:;
        panda$core$Bit $tmp755 = { $tmp753 };
        bool $tmp752 = $tmp755.value;
        if (!$tmp752) goto $l756;
        panda$core$Bit $tmp757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current601, end607);
        $tmp752 = $tmp757.value;
        $l756:;
        panda$core$Bit $tmp758 = { $tmp752 };
        bool $tmp751 = $tmp758.value;
        if (!$tmp751) goto $l759;
        panda$core$Bit $tmp760 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end607, self->_length);
        $tmp751 = $tmp760.value;
        $l759:;
        panda$core$Bit $tmp761 = { $tmp751 };
        if ($tmp761.value) {
        {
            c762 = self->data[current601.value];
            panda$core$MutableString$append$panda$core$Char8(result612, c762);
            panda$core$Int64$init$builtin_int64(&$tmp763, 1);
            panda$core$Int64 $tmp764 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current601, $tmp763);
            current601 = $tmp764;
            int64_t $tmp766 = ((int64_t) c762.value) & 255;
            bool $tmp767 = $tmp766 >= 192;
            panda$core$Bit$init$builtin_bit(&$tmp765, $tmp767);
            if ($tmp765.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result612, self->data[current601.value]);
                panda$core$Int64$init$builtin_int64(&$tmp768, 1);
                panda$core$Int64 $tmp769 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current601, $tmp768);
                current601 = $tmp769;
            }
            }
            int64_t $tmp771 = ((int64_t) c762.value) & 255;
            bool $tmp772 = $tmp771 >= 224;
            panda$core$Bit$init$builtin_bit(&$tmp770, $tmp772);
            if ($tmp770.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result612, self->data[current601.value]);
                panda$core$Int64$init$builtin_int64(&$tmp773, 1);
                panda$core$Int64 $tmp774 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current601, $tmp773);
                current601 = $tmp774;
            }
            }
            int64_t $tmp776 = ((int64_t) c762.value) & 255;
            bool $tmp777 = $tmp776 >= 240;
            panda$core$Bit$init$builtin_bit(&$tmp775, $tmp777);
            if ($tmp775.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result612, self->data[current601.value]);
            }
            }
        }
        }
        panda$core$String* $tmp780 = panda$core$MutableString$finish$R$panda$core$String(result612);
        $tmp779 = $tmp780;
        $tmp778 = $tmp779;
        $returnValue595 = $tmp778;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp778));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp779));
        $tmp592 = 3;
        goto $l590;
        $l781:;
        return $returnValue595;
    }
    $l590:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result612));
    result612 = NULL;
    switch ($tmp592) {
        case 2: goto $l736;
        case 3: goto $l781;
        case 0: goto $l598;
        case 1: goto $l660;
    }
    $l783:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start784;
    panda$core$String$Index$nullable end787;
    panda$core$String* $returnValue790;
    panda$core$String* $tmp791;
    panda$core$String* $tmp792;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp793;
    memset(&start784, 0, sizeof(start784));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp785 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp786 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp785, ((panda$core$Int64) p_r.min.value));
        start784 = ((panda$core$String$Index$nullable) { $tmp786, true });
    }
    }
    else {
    {
        start784 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end787, 0, sizeof(end787));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp788 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp789 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp788, ((panda$core$Int64) p_r.max.value));
        end787 = ((panda$core$String$Index$nullable) { $tmp789, true });
    }
    }
    else {
    {
        end787 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp793, start784, end787, p_r.inclusive);
    panda$core$String* $tmp794 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp793);
    $tmp792 = $tmp794;
    $tmp791 = $tmp792;
    $returnValue790 = $tmp791;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp791));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp792));
    return $returnValue790;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start796;
    panda$core$String$Index$nullable end799;
    panda$core$String* $returnValue802;
    panda$core$String* $tmp803;
    panda$core$String* $tmp804;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp805;
    memset(&start796, 0, sizeof(start796));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp797 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp798 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp797, ((panda$core$Int64) p_r.start.value));
        start796 = ((panda$core$String$Index$nullable) { $tmp798, true });
    }
    }
    else {
    {
        start796 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end799, 0, sizeof(end799));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp800 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp801 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp800, ((panda$core$Int64) p_r.end.value));
        end799 = ((panda$core$String$Index$nullable) { $tmp801, true });
    }
    }
    else {
    {
        end799 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp805, start796, end799, p_r.step, p_r.inclusive);
    panda$core$String* $tmp806 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp805);
    $tmp804 = $tmp806;
    $tmp803 = $tmp804;
    $returnValue802 = $tmp803;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp803));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp804));
    return $returnValue802;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp808;
    panda$core$Int64 $tmp809;
    panda$core$Bit $tmp810;
    panda$core$Bit $returnValue825;
    panda$core$Bit $tmp826;
    panda$core$Bit $tmp834;
    panda$core$Int64$init$builtin_int64(&$tmp809, 0);
    panda$core$Bit$init$builtin_bit(&$tmp810, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp808, $tmp809, self->_length, $tmp810);
    int64_t $tmp812 = $tmp808.min.value;
    panda$core$Int64 i811 = { $tmp812 };
    int64_t $tmp814 = $tmp808.max.value;
    bool $tmp815 = $tmp808.inclusive.value;
    if ($tmp815) goto $l822; else goto $l823;
    $l822:;
    if ($tmp812 <= $tmp814) goto $l816; else goto $l818;
    $l823:;
    if ($tmp812 < $tmp814) goto $l816; else goto $l818;
    $l816:;
    {
        panda$core$Bit $tmp824 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i811.value], p_c);
        if ($tmp824.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp826, true);
            $returnValue825 = $tmp826;
            return $returnValue825;
        }
        }
    }
    $l819:;
    int64_t $tmp829 = $tmp814 - i811.value;
    if ($tmp815) goto $l830; else goto $l831;
    $l830:;
    if ((uint64_t) $tmp829 >= 1) goto $l828; else goto $l818;
    $l831:;
    if ((uint64_t) $tmp829 > 1) goto $l828; else goto $l818;
    $l828:;
    i811.value += 1;
    goto $l816;
    $l818:;
    panda$core$Bit$init$builtin_bit(&$tmp834, false);
    $returnValue825 = $tmp834;
    return $returnValue825;
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$Bit $returnValue836;
    panda$core$String$Index$nullable $tmp837 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    $returnValue836 = ((panda$core$Bit) { $tmp837.nonnull });
    return $returnValue836;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue839;
    panda$core$String$Index $tmp840 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp841 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp840);
    $returnValue839 = $tmp841;
    return $returnValue839;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue844;
    panda$core$Range$LTpanda$core$Int64$GT $tmp846;
    panda$core$Bit $tmp848;
    panda$core$Range$LTpanda$core$Int64$GT $tmp862;
    panda$core$Int64 $tmp863;
    panda$core$Bit $tmp864;
    panda$core$String$Index $tmp886;
    panda$core$Bit $tmp843 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp843.value) {
    {
        $returnValue844 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue844;
    }
    }
    panda$core$Int64 $tmp847 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Bit$init$builtin_bit(&$tmp848, true);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp846, p_start.value, $tmp847, $tmp848);
    int64_t $tmp850 = $tmp846.min.value;
    panda$core$Int64 i849 = { $tmp850 };
    int64_t $tmp852 = $tmp846.max.value;
    bool $tmp853 = $tmp846.inclusive.value;
    if ($tmp853) goto $l860; else goto $l861;
    $l860:;
    if ($tmp850 <= $tmp852) goto $l854; else goto $l856;
    $l861:;
    if ($tmp850 < $tmp852) goto $l854; else goto $l856;
    $l854:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp863, 0);
        panda$core$Bit$init$builtin_bit(&$tmp864, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp862, $tmp863, p_s->_length, $tmp864);
        int64_t $tmp866 = $tmp862.min.value;
        panda$core$Int64 j865 = { $tmp866 };
        int64_t $tmp868 = $tmp862.max.value;
        bool $tmp869 = $tmp862.inclusive.value;
        if ($tmp869) goto $l876; else goto $l877;
        $l876:;
        if ($tmp866 <= $tmp868) goto $l870; else goto $l872;
        $l877:;
        if ($tmp866 < $tmp868) goto $l870; else goto $l872;
        $l870:;
        {
            panda$core$Int64 $tmp878 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i849, j865);
            panda$core$Bit $tmp879 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp878.value], p_s->data[j865.value]);
            if ($tmp879.value) {
            {
                goto $l857;
            }
            }
        }
        $l873:;
        int64_t $tmp881 = $tmp868 - j865.value;
        if ($tmp869) goto $l882; else goto $l883;
        $l882:;
        if ((uint64_t) $tmp881 >= 1) goto $l880; else goto $l872;
        $l883:;
        if ((uint64_t) $tmp881 > 1) goto $l880; else goto $l872;
        $l880:;
        j865.value += 1;
        goto $l870;
        $l872:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp886, i849);
        $returnValue844 = ((panda$core$String$Index$nullable) { $tmp886, true });
        return $returnValue844;
    }
    $l857:;
    int64_t $tmp889 = $tmp852 - i849.value;
    if ($tmp853) goto $l890; else goto $l891;
    $l890:;
    if ((uint64_t) $tmp889 >= 1) goto $l888; else goto $l856;
    $l891:;
    if ((uint64_t) $tmp889 > 1) goto $l888; else goto $l856;
    $l888:;
    i849.value += 1;
    goto $l854;
    $l856:;
    $returnValue844 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue844;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue895;
    panda$core$String$Index $tmp896 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp897 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp896);
    $returnValue895 = $tmp897;
    return $returnValue895;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue900;
    panda$core$Int64 startPos902;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp905;
    panda$core$Int64 $tmp906;
    panda$core$Int64 $tmp907;
    panda$core$Bit $tmp908;
    panda$core$Range$LTpanda$core$Int64$GT $tmp927;
    panda$core$Int64 $tmp928;
    panda$core$Bit $tmp929;
    panda$core$String$Index $tmp951;
    panda$core$Bit $tmp899 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp899.value) {
    {
        $returnValue900 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue900;
    }
    }
    panda$core$Int64 $tmp903 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp904 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp903);
    startPos902 = $tmp904;
    panda$core$Int64$init$builtin_int64(&$tmp906, 0);
    panda$core$Int64$init$builtin_int64(&$tmp907, -1);
    panda$core$Bit$init$builtin_bit(&$tmp908, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp905, startPos902, $tmp906, $tmp907, $tmp908);
    int64_t $tmp910 = $tmp905.start.value;
    panda$core$Int64 i909 = { $tmp910 };
    int64_t $tmp912 = $tmp905.end.value;
    int64_t $tmp913 = $tmp905.step.value;
    bool $tmp914 = $tmp905.inclusive.value;
    bool $tmp921 = $tmp913 > 0;
    if ($tmp921) goto $l919; else goto $l920;
    $l919:;
    if ($tmp914) goto $l922; else goto $l923;
    $l922:;
    if ($tmp910 <= $tmp912) goto $l915; else goto $l917;
    $l923:;
    if ($tmp910 < $tmp912) goto $l915; else goto $l917;
    $l920:;
    if ($tmp914) goto $l924; else goto $l925;
    $l924:;
    if ($tmp910 >= $tmp912) goto $l915; else goto $l917;
    $l925:;
    if ($tmp910 > $tmp912) goto $l915; else goto $l917;
    $l915:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp928, 0);
        panda$core$Bit$init$builtin_bit(&$tmp929, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp927, $tmp928, p_s->_length, $tmp929);
        int64_t $tmp931 = $tmp927.min.value;
        panda$core$Int64 j930 = { $tmp931 };
        int64_t $tmp933 = $tmp927.max.value;
        bool $tmp934 = $tmp927.inclusive.value;
        if ($tmp934) goto $l941; else goto $l942;
        $l941:;
        if ($tmp931 <= $tmp933) goto $l935; else goto $l937;
        $l942:;
        if ($tmp931 < $tmp933) goto $l935; else goto $l937;
        $l935:;
        {
            panda$core$Int64 $tmp943 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i909, j930);
            panda$core$Bit $tmp944 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp943.value], p_s->data[j930.value]);
            if ($tmp944.value) {
            {
                goto $l918;
            }
            }
        }
        $l938:;
        int64_t $tmp946 = $tmp933 - j930.value;
        if ($tmp934) goto $l947; else goto $l948;
        $l947:;
        if ((uint64_t) $tmp946 >= 1) goto $l945; else goto $l937;
        $l948:;
        if ((uint64_t) $tmp946 > 1) goto $l945; else goto $l937;
        $l945:;
        j930.value += 1;
        goto $l935;
        $l937:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp951, i909);
        $returnValue900 = ((panda$core$String$Index$nullable) { $tmp951, true });
        return $returnValue900;
    }
    $l918:;
    if ($tmp921) goto $l954; else goto $l955;
    $l954:;
    int64_t $tmp956 = $tmp912 - i909.value;
    if ($tmp914) goto $l957; else goto $l958;
    $l957:;
    if ((uint64_t) $tmp956 >= $tmp913) goto $l953; else goto $l917;
    $l958:;
    if ((uint64_t) $tmp956 > $tmp913) goto $l953; else goto $l917;
    $l955:;
    int64_t $tmp960 = i909.value - $tmp912;
    if ($tmp914) goto $l961; else goto $l962;
    $l961:;
    if ((uint64_t) $tmp960 >= -$tmp913) goto $l953; else goto $l917;
    $l962:;
    if ((uint64_t) $tmp960 > -$tmp913) goto $l953; else goto $l917;
    $l953:;
    i909.value += $tmp913;
    goto $l915;
    $l917:;
    $returnValue900 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue900;
}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Bit $returnValue965;
    panda$core$Matcher* $tmp966;
    panda$core$Bit $tmp968;
    panda$core$Matcher* $tmp967 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
    $tmp966 = $tmp967;
    panda$core$Matcher$matches$R$panda$core$Bit(&$tmp968, $tmp966);
    $returnValue965 = $tmp968;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp966));
    return $returnValue965;
}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$core$Bit $returnValue970;
    panda$core$Matcher* $tmp971;
    panda$core$Matcher* $tmp972 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, self);
    $tmp971 = $tmp972;
    panda$core$Bit $tmp973 = panda$core$Matcher$find$R$panda$core$Bit($tmp971);
    $returnValue970 = $tmp973;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp971));
    return $returnValue970;
}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Matcher* matcher978 = NULL;
    panda$core$Matcher* $tmp979;
    panda$core$Matcher* $tmp980;
    panda$core$Bit $tmp982;
    panda$collections$Array* result986 = NULL;
    panda$collections$Array* $tmp987;
    panda$collections$Array* $tmp988;
    panda$core$Range$LTpanda$core$Int64$GT $tmp990;
    panda$core$Int64 $tmp991;
    panda$core$Int64 $tmp992;
    panda$core$Bit $tmp993;
    panda$core$String* $tmp1007;
    panda$collections$ListView* $returnValue1015;
    panda$collections$ListView* $tmp1016;
    panda$collections$ListView* $tmp1021;
    int $tmp977;
    {
        panda$core$Matcher* $tmp981 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
        $tmp980 = $tmp981;
        $tmp979 = $tmp980;
        matcher978 = $tmp979;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp979));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp980));
        panda$core$Matcher$matches$R$panda$core$Bit(&$tmp982, matcher978);
        if ($tmp982.value) {
        {
            int $tmp985;
            {
                panda$collections$Array* $tmp989 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp989);
                $tmp988 = $tmp989;
                $tmp987 = $tmp988;
                result986 = $tmp987;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp987));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp988));
                panda$core$Int64$init$builtin_int64(&$tmp991, 1);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp992, matcher978);
                panda$core$Bit$init$builtin_bit(&$tmp993, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp990, $tmp991, $tmp992, $tmp993);
                int64_t $tmp995 = $tmp990.min.value;
                panda$core$Int64 i994 = { $tmp995 };
                int64_t $tmp997 = $tmp990.max.value;
                bool $tmp998 = $tmp990.inclusive.value;
                if ($tmp998) goto $l1005; else goto $l1006;
                $l1005:;
                if ($tmp995 <= $tmp997) goto $l999; else goto $l1001;
                $l1006:;
                if ($tmp995 < $tmp997) goto $l999; else goto $l1001;
                $l999:;
                {
                    panda$core$String* $tmp1008 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher978, i994);
                    $tmp1007 = $tmp1008;
                    panda$collections$Array$add$panda$collections$Array$T(result986, ((panda$core$Object*) $tmp1007));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1007));
                }
                $l1002:;
                int64_t $tmp1010 = $tmp997 - i994.value;
                if ($tmp998) goto $l1011; else goto $l1012;
                $l1011:;
                if ((uint64_t) $tmp1010 >= 1) goto $l1009; else goto $l1001;
                $l1012:;
                if ((uint64_t) $tmp1010 > 1) goto $l1009; else goto $l1001;
                $l1009:;
                i994.value += 1;
                goto $l999;
                $l1001:;
                $tmp1016 = ((panda$collections$ListView*) result986);
                $returnValue1015 = $tmp1016;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1016));
                $tmp985 = 0;
                goto $l983;
                $l1017:;
                $tmp977 = 0;
                goto $l975;
                $l1018:;
                return $returnValue1015;
            }
            $l983:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result986));
            result986 = NULL;
            switch ($tmp985) {
                case 0: goto $l1017;
            }
            $l1020:;
        }
        }
        $tmp1021 = NULL;
        $returnValue1015 = $tmp1021;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1021));
        $tmp977 = 1;
        goto $l975;
        $l1022:;
        return $returnValue1015;
    }
    $l975:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher978));
    matcher978 = NULL;
    switch ($tmp977) {
        case 1: goto $l1022;
        case 0: goto $l1018;
    }
    $l1024:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue1030;
    panda$core$String* $tmp1031;
    panda$core$MutableString* result1034 = NULL;
    panda$core$MutableString* $tmp1035;
    panda$core$MutableString* $tmp1036;
    panda$core$String$Index index1038;
    panda$core$String$Index$nullable nextIndex1042;
    panda$core$String* $tmp1044;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1045;
    panda$core$Bit $tmp1046;
    panda$core$String* $tmp1048;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1049;
    panda$core$Bit $tmp1050;
    panda$core$String$Index $tmp1052;
    panda$core$String* $tmp1054;
    panda$core$String* $tmp1055;
    int $tmp1027;
    {
        panda$core$Bit $tmp1029 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_search, &$s1028);
        if ($tmp1029.value) {
        {
            $tmp1031 = self;
            $returnValue1030 = $tmp1031;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1031));
            $tmp1027 = 0;
            goto $l1025;
            $l1032:;
            return $returnValue1030;
        }
        }
        panda$core$MutableString* $tmp1037 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1037);
        $tmp1036 = $tmp1037;
        $tmp1035 = $tmp1036;
        result1034 = $tmp1035;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1035));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1036));
        panda$core$String$Index $tmp1039 = panda$core$String$start$R$panda$core$String$Index(self);
        index1038 = $tmp1039;
        $l1040:;
        while (true) {
        {
            panda$core$String$Index$nullable $tmp1043 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index1038);
            nextIndex1042 = $tmp1043;
            if (((panda$core$Bit) { !nextIndex1042.nonnull }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1046, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1045, ((panda$core$String$Index$nullable) { index1038, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1046);
                panda$core$String* $tmp1047 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1045);
                $tmp1044 = $tmp1047;
                panda$core$MutableString$append$panda$core$String(result1034, $tmp1044);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1044));
                goto $l1041;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp1050, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1049, index1038, ((panda$core$String$Index) nextIndex1042.value), $tmp1050);
            panda$core$String* $tmp1051 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1049);
            $tmp1048 = $tmp1051;
            panda$core$MutableString$append$panda$core$String(result1034, $tmp1048);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
            panda$core$MutableString$append$panda$core$String(result1034, p_replacement);
            panda$core$Int64 $tmp1053 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1042.value).value, p_search->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1052, $tmp1053);
            index1038 = $tmp1052;
        }
        }
        $l1041:;
        panda$core$String* $tmp1056 = panda$core$MutableString$finish$R$panda$core$String(result1034);
        $tmp1055 = $tmp1056;
        $tmp1054 = $tmp1055;
        $returnValue1030 = $tmp1054;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1054));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1055));
        $tmp1027 = 1;
        goto $l1025;
        $l1057:;
        return $returnValue1030;
    }
    $l1025:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1034));
    result1034 = NULL;
    switch ($tmp1027) {
        case 1: goto $l1057;
        case 0: goto $l1032;
    }
    $l1059:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue1060;
    panda$core$String* $tmp1061;
    panda$core$String* $tmp1062;
    panda$core$Bit $tmp1063;
    panda$core$Bit$init$builtin_bit(&$tmp1063, true);
    panda$core$String* $tmp1064 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(self, p_search, p_replacement, $tmp1063);
    $tmp1062 = $tmp1064;
    $tmp1061 = $tmp1062;
    $returnValue1060 = $tmp1061;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1061));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1062));
    return $returnValue1060;
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences) {
    panda$core$MutableString* result1069 = NULL;
    panda$core$MutableString* $tmp1070;
    panda$core$MutableString* $tmp1071;
    panda$core$Matcher* matcher1073 = NULL;
    panda$core$Matcher* $tmp1074;
    panda$core$Matcher* $tmp1075;
    panda$core$String* $returnValue1081;
    panda$core$String* $tmp1082;
    panda$core$String* $tmp1083;
    int $tmp1068;
    {
        panda$core$MutableString* $tmp1072 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1072);
        $tmp1071 = $tmp1072;
        $tmp1070 = $tmp1071;
        result1069 = $tmp1070;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1070));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1071));
        panda$core$Matcher* $tmp1076 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1075 = $tmp1076;
        $tmp1074 = $tmp1075;
        matcher1073 = $tmp1074;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1074));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1075));
        $l1077:;
        panda$core$Bit $tmp1080 = panda$core$Matcher$find$R$panda$core$Bit(matcher1073);
        bool $tmp1079 = $tmp1080.value;
        if (!$tmp1079) goto $l1078;
        {
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1073, result1069, p_replacement, p_allowGroupReferences);
        }
        goto $l1077;
        $l1078:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1073, result1069);
        panda$core$String* $tmp1084 = panda$core$MutableString$finish$R$panda$core$String(result1069);
        $tmp1083 = $tmp1084;
        $tmp1082 = $tmp1083;
        $returnValue1081 = $tmp1082;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1082));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
        $tmp1068 = 0;
        goto $l1066;
        $l1085:;
        return $returnValue1081;
    }
    $l1066:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1073));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1069));
    result1069 = NULL;
    matcher1073 = NULL;
    switch ($tmp1068) {
        case 0: goto $l1085;
    }
    $l1087:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result1091 = NULL;
    panda$core$MutableString* $tmp1092;
    panda$core$MutableString* $tmp1093;
    panda$core$Matcher* matcher1095 = NULL;
    panda$core$Matcher* $tmp1096;
    panda$core$Matcher* $tmp1097;
    panda$core$String* $tmp1103;
    panda$core$Object* $tmp1104;
    panda$core$String* $tmp1105;
    panda$core$Int64 $tmp1106;
    panda$core$Object* $tmp1108;
    panda$core$Bit $tmp1113;
    panda$core$String* $returnValue1114;
    panda$core$String* $tmp1115;
    panda$core$String* $tmp1116;
    int $tmp1090;
    {
        panda$core$MutableString* $tmp1094 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1094);
        $tmp1093 = $tmp1094;
        $tmp1092 = $tmp1093;
        result1091 = $tmp1092;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1092));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1093));
        panda$core$Matcher* $tmp1098 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1097 = $tmp1098;
        $tmp1096 = $tmp1097;
        matcher1095 = $tmp1096;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1096));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1097));
        $l1099:;
        panda$core$Bit $tmp1102 = panda$core$Matcher$find$R$panda$core$Bit(matcher1095);
        bool $tmp1101 = $tmp1102.value;
        if (!$tmp1101) goto $l1100;
        {
            panda$core$Int64$init$builtin_int64(&$tmp1106, 0);
            panda$core$String* $tmp1107 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher1095, $tmp1106);
            $tmp1105 = $tmp1107;
            if (p_replacement->target) {
                $tmp1108 = (($fn1109) p_replacement->pointer)(((panda$core$String*) p_replacement->target), $tmp1105);
            } else {
                $tmp1108 = (($fn1110) p_replacement->pointer)($tmp1105);
            }
            $tmp1104 = $tmp1108;
            panda$core$String* $tmp1112 = (($fn1111) $tmp1104->$class->vtable[0])($tmp1104);
            $tmp1103 = $tmp1112;
            panda$core$Bit$init$builtin_bit(&$tmp1113, false);
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1095, result1091, $tmp1103, $tmp1113);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1103));
            panda$core$Panda$unref$panda$core$Object($tmp1104);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1105));
        }
        goto $l1099;
        $l1100:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1095, result1091);
        panda$core$String* $tmp1117 = panda$core$MutableString$convert$R$panda$core$String(result1091);
        $tmp1116 = $tmp1117;
        $tmp1115 = $tmp1116;
        $returnValue1114 = $tmp1115;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1115));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1116));
        $tmp1090 = 0;
        goto $l1088;
        $l1118:;
        return $returnValue1114;
    }
    $l1088:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1095));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1091));
    result1091 = NULL;
    matcher1095 = NULL;
    switch ($tmp1090) {
        case 0: goto $l1118;
    }
    $l1120:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result1124 = NULL;
    panda$core$MutableString* $tmp1125;
    panda$core$MutableString* $tmp1126;
    panda$core$Matcher* matcher1128 = NULL;
    panda$core$Matcher* $tmp1129;
    panda$core$Matcher* $tmp1130;
    panda$collections$Array* groups1139 = NULL;
    panda$collections$Array* $tmp1140;
    panda$collections$Array* $tmp1141;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1143;
    panda$core$Int64 $tmp1144;
    panda$core$Int64 $tmp1145;
    panda$core$Bit $tmp1146;
    panda$core$String* $tmp1160;
    panda$core$String* $tmp1168;
    panda$core$Object* $tmp1169;
    panda$core$Object* $tmp1170;
    panda$core$Bit $tmp1175;
    panda$core$String* $returnValue1177;
    panda$core$String* $tmp1178;
    panda$core$String* $tmp1179;
    int $tmp1123;
    {
        panda$core$MutableString* $tmp1127 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1127);
        $tmp1126 = $tmp1127;
        $tmp1125 = $tmp1126;
        result1124 = $tmp1125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1125));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
        panda$core$Matcher* $tmp1131 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1130 = $tmp1131;
        $tmp1129 = $tmp1130;
        matcher1128 = $tmp1129;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1129));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1130));
        $l1132:;
        panda$core$Bit $tmp1135 = panda$core$Matcher$find$R$panda$core$Bit(matcher1128);
        bool $tmp1134 = $tmp1135.value;
        if (!$tmp1134) goto $l1133;
        {
            int $tmp1138;
            {
                panda$collections$Array* $tmp1142 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1142);
                $tmp1141 = $tmp1142;
                $tmp1140 = $tmp1141;
                groups1139 = $tmp1140;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1140));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1141));
                panda$core$Int64$init$builtin_int64(&$tmp1144, 0);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1145, matcher1128);
                panda$core$Bit$init$builtin_bit(&$tmp1146, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1143, $tmp1144, $tmp1145, $tmp1146);
                int64_t $tmp1148 = $tmp1143.min.value;
                panda$core$Int64 i1147 = { $tmp1148 };
                int64_t $tmp1150 = $tmp1143.max.value;
                bool $tmp1151 = $tmp1143.inclusive.value;
                if ($tmp1151) goto $l1158; else goto $l1159;
                $l1158:;
                if ($tmp1148 <= $tmp1150) goto $l1152; else goto $l1154;
                $l1159:;
                if ($tmp1148 < $tmp1150) goto $l1152; else goto $l1154;
                $l1152:;
                {
                    panda$core$String* $tmp1161 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher1128, i1147);
                    $tmp1160 = $tmp1161;
                    panda$collections$Array$add$panda$collections$Array$T(groups1139, ((panda$core$Object*) $tmp1160));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1160));
                }
                $l1155:;
                int64_t $tmp1163 = $tmp1150 - i1147.value;
                if ($tmp1151) goto $l1164; else goto $l1165;
                $l1164:;
                if ((uint64_t) $tmp1163 >= 1) goto $l1162; else goto $l1154;
                $l1165:;
                if ((uint64_t) $tmp1163 > 1) goto $l1162; else goto $l1154;
                $l1162:;
                i1147.value += 1;
                goto $l1152;
                $l1154:;
                if (p_replacement->target) {
                    $tmp1170 = (($fn1171) p_replacement->pointer)(((panda$collections$ListView*) p_replacement->target), ((panda$collections$ListView*) groups1139));
                } else {
                    $tmp1170 = (($fn1172) p_replacement->pointer)(((panda$collections$ListView*) groups1139));
                }
                $tmp1169 = $tmp1170;
                panda$core$String* $tmp1174 = (($fn1173) $tmp1169->$class->vtable[0])($tmp1169);
                $tmp1168 = $tmp1174;
                panda$core$Bit$init$builtin_bit(&$tmp1175, false);
                panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1128, result1124, $tmp1168, $tmp1175);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1168));
                panda$core$Panda$unref$panda$core$Object($tmp1169);
            }
            $tmp1138 = -1;
            goto $l1136;
            $l1136:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) groups1139));
            groups1139 = NULL;
            switch ($tmp1138) {
                case -1: goto $l1176;
            }
            $l1176:;
        }
        goto $l1132;
        $l1133:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1128, result1124);
        panda$core$String* $tmp1180 = panda$core$MutableString$convert$R$panda$core$String(result1124);
        $tmp1179 = $tmp1180;
        $tmp1178 = $tmp1179;
        $returnValue1177 = $tmp1178;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1179));
        $tmp1123 = 0;
        goto $l1121;
        $l1181:;
        return $returnValue1177;
    }
    $l1121:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1128));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1124));
    result1124 = NULL;
    matcher1128 = NULL;
    switch ($tmp1123) {
        case 0: goto $l1181;
    }
    $l1183:;
    abort();
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle) {
    panda$collections$Iterator* $returnValue1184;
    panda$collections$Iterator* $tmp1185;
    panda$collections$Iterator* $tmp1186;
    panda$core$Bit $tmp1187;
    panda$core$Bit$init$builtin_bit(&$tmp1187, false);
    panda$collections$Iterator* $tmp1188 = panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(self, p_needle, $tmp1187);
    $tmp1186 = $tmp1188;
    $tmp1185 = $tmp1186;
    $returnValue1184 = $tmp1185;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1185));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1186));
    return $returnValue1184;
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1190;
    panda$collections$Iterator* $tmp1191;
    panda$core$String$MatchIterator* $tmp1192;
    panda$core$String$MatchIterator* $tmp1193 = (panda$core$String$MatchIterator*) pandaObjectAlloc(46, (panda$core$Class*) &panda$core$String$MatchIterator$class);
    panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit($tmp1193, self, p_needle, p_overlapping);
    $tmp1192 = $tmp1193;
    $tmp1191 = ((panda$collections$Iterator*) $tmp1192);
    $returnValue1190 = $tmp1191;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1191));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1192));
    return $returnValue1190;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$collections$Iterator* $returnValue1195;
    panda$collections$Iterator* $tmp1196;
    panda$collections$Iterator* $tmp1197;
    panda$core$Bit $tmp1198;
    panda$core$Bit$init$builtin_bit(&$tmp1198, false);
    panda$collections$Iterator* $tmp1199 = panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(self, p_needle, $tmp1198);
    $tmp1197 = $tmp1199;
    $tmp1196 = $tmp1197;
    $returnValue1195 = $tmp1196;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1196));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1197));
    return $returnValue1195;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1201;
    panda$collections$Iterator* $tmp1202;
    panda$core$String$RegexMatchIterator* $tmp1203;
    panda$core$String$RegexMatchIterator* $tmp1204 = (panda$core$String$RegexMatchIterator*) pandaObjectAlloc(34, (panda$core$Class*) &panda$core$String$RegexMatchIterator$class);
    panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit($tmp1204, self, p_needle, p_overlapping);
    $tmp1203 = $tmp1204;
    $tmp1202 = ((panda$collections$Iterator*) $tmp1203);
    $returnValue1201 = $tmp1202;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1202));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1203));
    return $returnValue1201;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1206;
    panda$core$String$Index $tmp1207;
    panda$core$Int64 $tmp1208;
    panda$core$Int64$init$builtin_int64(&$tmp1208, 0);
    panda$core$String$Index$init$panda$core$Int64(&$tmp1207, $tmp1208);
    $returnValue1206 = $tmp1207;
    return $returnValue1206;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1210;
    panda$core$String$Index $tmp1211;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1211, self->_length);
    $returnValue1210 = $tmp1211;
    return $returnValue1210;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c1217;
    panda$core$Bit $tmp1219;
    panda$core$String$Index $returnValue1221;
    panda$core$String$Index $tmp1222;
    panda$core$Int64 $tmp1223;
    panda$core$Bit $tmp1226;
    panda$core$String$Index $tmp1228;
    panda$core$Int64 $tmp1229;
    panda$core$Bit $tmp1232;
    panda$core$String$Index $tmp1234;
    panda$core$Int64 $tmp1235;
    panda$core$String$Index $tmp1238;
    panda$core$Int64 $tmp1239;
    panda$core$Bit $tmp1213 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    if ($tmp1213.value) goto $l1214; else goto $l1215;
    $l1215:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1216, (panda$core$Int64) { 1123 });
    abort();
    $l1214:;
    int64_t $tmp1218 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c1217 = $tmp1218;
    bool $tmp1220 = c1217 >= 240;
    panda$core$Bit$init$builtin_bit(&$tmp1219, $tmp1220);
    if ($tmp1219.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1223, 4);
        panda$core$Int64 $tmp1224 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1223);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1222, $tmp1224);
        $returnValue1221 = $tmp1222;
        return $returnValue1221;
    }
    }
    bool $tmp1227 = c1217 >= 224;
    panda$core$Bit$init$builtin_bit(&$tmp1226, $tmp1227);
    if ($tmp1226.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1229, 3);
        panda$core$Int64 $tmp1230 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1229);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1228, $tmp1230);
        $returnValue1221 = $tmp1228;
        return $returnValue1221;
    }
    }
    bool $tmp1233 = c1217 >= 192;
    panda$core$Bit$init$builtin_bit(&$tmp1232, $tmp1233);
    if ($tmp1232.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1235, 2);
        panda$core$Int64 $tmp1236 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1235);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1234, $tmp1236);
        $returnValue1221 = $tmp1234;
        return $returnValue1221;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1239, 1);
    panda$core$Int64 $tmp1240 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1239);
    panda$core$String$Index$init$panda$core$Int64(&$tmp1238, $tmp1240);
    $returnValue1221 = $tmp1238;
    return $returnValue1221;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 $tmp1242;
    panda$core$Int64 newValue1247;
    panda$core$Int64 $tmp1248;
    panda$core$Bit $tmp1253;
    panda$core$Int64 $tmp1260;
    panda$core$String$Index $returnValue1262;
    panda$core$String$Index $tmp1263;
    panda$core$Int64$init$builtin_int64(&$tmp1242, 0);
    panda$core$Bit $tmp1243 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, $tmp1242);
    if ($tmp1243.value) goto $l1244; else goto $l1245;
    $l1245:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1246, (panda$core$Int64) { 1144 });
    abort();
    $l1244:;
    panda$core$Int64$init$builtin_int64(&$tmp1248, 1);
    panda$core$Int64 $tmp1249 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1248);
    newValue1247 = $tmp1249;
    $l1250:;
    int64_t $tmp1255 = ((int64_t) self->data[newValue1247.value].value) & 255;
    bool $tmp1256 = $tmp1255 >= 128;
    bool $tmp1254 = $tmp1256;
    if (!$tmp1254) goto $l1257;
    int64_t $tmp1258 = ((int64_t) self->data[newValue1247.value].value) & 255;
    bool $tmp1259 = $tmp1258 < 192;
    $tmp1254 = $tmp1259;
    $l1257:;
    panda$core$Bit$init$builtin_bit(&$tmp1253, $tmp1254);
    bool $tmp1252 = $tmp1253.value;
    if (!$tmp1252) goto $l1251;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1260, 1);
        panda$core$Int64 $tmp1261 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue1247, $tmp1260);
        newValue1247 = $tmp1261;
    }
    goto $l1250;
    $l1251:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1263, newValue1247);
    $returnValue1262 = $tmp1263;
    return $returnValue1262;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result1265;
    panda$core$Int64 $tmp1266;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1268;
    panda$core$Int64 $tmp1269;
    panda$core$Bit $tmp1270;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1291;
    panda$core$Int64 $tmp1292;
    panda$core$Int64 $tmp1293;
    panda$core$Bit $tmp1294;
    panda$core$String$Index $returnValue1325;
    result1265 = p_index;
    panda$core$Int64$init$builtin_int64(&$tmp1266, 0);
    panda$core$Bit $tmp1267 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, $tmp1266);
    if ($tmp1267.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1269, 0);
        panda$core$Bit$init$builtin_bit(&$tmp1270, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1268, $tmp1269, p_offset, $tmp1270);
        int64_t $tmp1272 = $tmp1268.min.value;
        panda$core$Int64 i1271 = { $tmp1272 };
        int64_t $tmp1274 = $tmp1268.max.value;
        bool $tmp1275 = $tmp1268.inclusive.value;
        if ($tmp1275) goto $l1282; else goto $l1283;
        $l1282:;
        if ($tmp1272 <= $tmp1274) goto $l1276; else goto $l1278;
        $l1283:;
        if ($tmp1272 < $tmp1274) goto $l1276; else goto $l1278;
        $l1276:;
        {
            panda$core$String$Index $tmp1284 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result1265);
            result1265 = $tmp1284;
        }
        $l1279:;
        int64_t $tmp1286 = $tmp1274 - i1271.value;
        if ($tmp1275) goto $l1287; else goto $l1288;
        $l1287:;
        if ((uint64_t) $tmp1286 >= 1) goto $l1285; else goto $l1278;
        $l1288:;
        if ((uint64_t) $tmp1286 > 1) goto $l1285; else goto $l1278;
        $l1285:;
        i1271.value += 1;
        goto $l1276;
        $l1278:;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1292, 0);
        panda$core$Int64$init$builtin_int64(&$tmp1293, -1);
        panda$core$Bit$init$builtin_bit(&$tmp1294, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1291, $tmp1292, p_offset, $tmp1293, $tmp1294);
        int64_t $tmp1296 = $tmp1291.start.value;
        panda$core$Int64 i1295 = { $tmp1296 };
        int64_t $tmp1298 = $tmp1291.end.value;
        int64_t $tmp1299 = $tmp1291.step.value;
        bool $tmp1300 = $tmp1291.inclusive.value;
        bool $tmp1307 = $tmp1299 > 0;
        if ($tmp1307) goto $l1305; else goto $l1306;
        $l1305:;
        if ($tmp1300) goto $l1308; else goto $l1309;
        $l1308:;
        if ($tmp1296 <= $tmp1298) goto $l1301; else goto $l1303;
        $l1309:;
        if ($tmp1296 < $tmp1298) goto $l1301; else goto $l1303;
        $l1306:;
        if ($tmp1300) goto $l1310; else goto $l1311;
        $l1310:;
        if ($tmp1296 >= $tmp1298) goto $l1301; else goto $l1303;
        $l1311:;
        if ($tmp1296 > $tmp1298) goto $l1301; else goto $l1303;
        $l1301:;
        {
            panda$core$String$Index $tmp1313 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result1265);
            result1265 = $tmp1313;
        }
        $l1304:;
        if ($tmp1307) goto $l1315; else goto $l1316;
        $l1315:;
        int64_t $tmp1317 = $tmp1298 - i1295.value;
        if ($tmp1300) goto $l1318; else goto $l1319;
        $l1318:;
        if ((uint64_t) $tmp1317 >= $tmp1299) goto $l1314; else goto $l1303;
        $l1319:;
        if ((uint64_t) $tmp1317 > $tmp1299) goto $l1314; else goto $l1303;
        $l1316:;
        int64_t $tmp1321 = i1295.value - $tmp1298;
        if ($tmp1300) goto $l1322; else goto $l1323;
        $l1322:;
        if ((uint64_t) $tmp1321 >= -$tmp1299) goto $l1314; else goto $l1303;
        $l1323:;
        if ((uint64_t) $tmp1321 > -$tmp1299) goto $l1314; else goto $l1303;
        $l1314:;
        i1295.value += $tmp1299;
        goto $l1301;
        $l1303:;
    }
    }
    $returnValue1325 = result1265;
    return $returnValue1325;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1327;
    panda$core$String* $tmp1328;
    panda$core$String* $tmp1329;
    panda$core$Char32 $tmp1330;
    panda$core$Int32 $tmp1331;
    panda$core$Int32$init$builtin_int32(&$tmp1331, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1330, $tmp1331);
    panda$core$String* $tmp1332 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1330);
    $tmp1329 = $tmp1332;
    $tmp1328 = $tmp1329;
    $returnValue1327 = $tmp1328;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1328));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
    return $returnValue1327;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1336;
    panda$core$String* $tmp1337;
    panda$core$String* $tmp1339;
    panda$core$String* $tmp1340;
    panda$core$String* $tmp1341;
    panda$core$Int64 $tmp1334 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1335 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1334, p_width);
    if ($tmp1335.value) {
    {
        $tmp1337 = self;
        $returnValue1336 = $tmp1337;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1337));
        return $returnValue1336;
    }
    }
    panda$core$Int64 $tmp1342 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1343 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1342);
    panda$core$String* $tmp1344 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1343);
    $tmp1341 = $tmp1344;
    panda$core$String* $tmp1345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp1341);
    $tmp1340 = $tmp1345;
    $tmp1339 = $tmp1340;
    $returnValue1336 = $tmp1339;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1339));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1340));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
    return $returnValue1336;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1347;
    panda$core$String* $tmp1348;
    panda$core$String* $tmp1349;
    panda$core$Char32 $tmp1350;
    panda$core$Int32 $tmp1351;
    panda$core$Int32$init$builtin_int32(&$tmp1351, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1350, $tmp1351);
    panda$core$String* $tmp1352 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1350);
    $tmp1349 = $tmp1352;
    $tmp1348 = $tmp1349;
    $returnValue1347 = $tmp1348;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1348));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1349));
    return $returnValue1347;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1356;
    panda$core$String* $tmp1357;
    panda$core$String* $tmp1359;
    panda$core$String* $tmp1360;
    panda$core$String* $tmp1361;
    panda$core$Int64 $tmp1354 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1355 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1354, p_width);
    if ($tmp1355.value) {
    {
        $tmp1357 = self;
        $returnValue1356 = $tmp1357;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1357));
        return $returnValue1356;
    }
    }
    panda$core$Int64 $tmp1362 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1363 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1362);
    panda$core$String* $tmp1364 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1363);
    $tmp1361 = $tmp1364;
    panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1361, self);
    $tmp1360 = $tmp1365;
    $tmp1359 = $tmp1360;
    $returnValue1356 = $tmp1359;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1359));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1360));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1361));
    return $returnValue1356;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1367;
    panda$core$String* $tmp1368;
    panda$core$String* $tmp1369;
    panda$core$Char32 $tmp1370;
    panda$core$Int32 $tmp1371;
    panda$core$Int32$init$builtin_int32(&$tmp1371, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1370, $tmp1371);
    panda$core$String* $tmp1372 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1370);
    $tmp1369 = $tmp1372;
    $tmp1368 = $tmp1369;
    $returnValue1367 = $tmp1368;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1368));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
    return $returnValue1367;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1376;
    panda$core$String* $tmp1377;
    panda$core$Int64 pad1379;
    panda$core$Int64 left1382;
    panda$core$Int64 $tmp1383;
    panda$core$Int64 right1385;
    panda$core$String* $tmp1387;
    panda$core$String* $tmp1388;
    panda$core$String* $tmp1389;
    panda$core$String* $tmp1390;
    panda$core$String* $tmp1393;
    panda$core$Int64 $tmp1374 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1375 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1374, p_width);
    if ($tmp1375.value) {
    {
        $tmp1377 = self;
        $returnValue1376 = $tmp1377;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1377));
        return $returnValue1376;
    }
    }
    panda$core$Int64 $tmp1380 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1381 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1380);
    pad1379 = $tmp1381;
    panda$core$Int64$init$builtin_int64(&$tmp1383, 2);
    panda$core$Int64 $tmp1384 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad1379, $tmp1383);
    left1382 = $tmp1384;
    panda$core$Int64 $tmp1386 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad1379, left1382);
    right1385 = $tmp1386;
    panda$core$String* $tmp1391 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left1382);
    $tmp1390 = $tmp1391;
    panda$core$String* $tmp1392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1390, self);
    $tmp1389 = $tmp1392;
    panda$core$String* $tmp1394 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right1385);
    $tmp1393 = $tmp1394;
    panda$core$String* $tmp1395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, $tmp1393);
    $tmp1388 = $tmp1395;
    $tmp1387 = $tmp1388;
    $returnValue1376 = $tmp1387;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1387));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1388));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1393));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1389));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1390));
    return $returnValue1376;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $returnValue1397;
    panda$collections$Array* $tmp1398;
    panda$collections$Array* $tmp1399;
    panda$core$Int64 $tmp1400;
    panda$core$Int64$init$builtin_int64(&$tmp1400, 9223372036854775807);
    panda$collections$Array* $tmp1401 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, $tmp1400);
    $tmp1399 = $tmp1401;
    $tmp1398 = $tmp1399;
    $returnValue1397 = $tmp1398;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1398));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1399));
    return $returnValue1397;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1406 = NULL;
    panda$collections$Array* $tmp1407;
    panda$collections$Array* $tmp1408;
    panda$core$String$Index index1410;
    panda$core$String$Index$nullable nextIndex1414;
    panda$core$Int64 $tmp1415;
    panda$core$Int64 $tmp1421;
    panda$core$String* $tmp1425;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1426;
    panda$core$Bit $tmp1427;
    panda$core$String* $tmp1429;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1430;
    panda$core$Bit $tmp1431;
    panda$core$String$Index $tmp1433;
    panda$collections$Array* $returnValue1435;
    panda$collections$Array* $tmp1436;
    int $tmp1405;
    {
        panda$collections$Array* $tmp1409 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1409);
        $tmp1408 = $tmp1409;
        $tmp1407 = $tmp1408;
        result1406 = $tmp1407;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1407));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1408));
        panda$core$String$Index $tmp1411 = panda$core$String$start$R$panda$core$String$Index(self);
        index1410 = $tmp1411;
        $l1412:;
        while (true) {
        {
            memset(&nextIndex1414, 0, sizeof(nextIndex1414));
            panda$core$Int64$init$builtin_int64(&$tmp1415, 0);
            panda$core$Bit $tmp1416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, $tmp1415);
            if ($tmp1416.value) {
            {
                panda$core$String$Index $tmp1417 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1410);
                nextIndex1414 = ((panda$core$String$Index$nullable) { $tmp1417, true });
            }
            }
            else {
            {
                panda$core$String$Index$nullable $tmp1418 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1410);
                nextIndex1414 = $tmp1418;
            }
            }
            bool $tmp1419 = ((panda$core$Bit) { !nextIndex1414.nonnull }).value;
            if ($tmp1419) goto $l1420;
            panda$core$Int64$init$builtin_int64(&$tmp1421, 1);
            panda$core$Int64 $tmp1422 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, $tmp1421);
            panda$core$Bit $tmp1423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1406->count, $tmp1422);
            $tmp1419 = $tmp1423.value;
            $l1420:;
            panda$core$Bit $tmp1424 = { $tmp1419 };
            if ($tmp1424.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1427, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1426, ((panda$core$String$Index$nullable) { index1410, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1427);
                panda$core$String* $tmp1428 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1426);
                $tmp1425 = $tmp1428;
                panda$collections$Array$add$panda$collections$Array$T(result1406, ((panda$core$Object*) $tmp1425));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1425));
                goto $l1413;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp1431, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1430, index1410, ((panda$core$String$Index) nextIndex1414.value), $tmp1431);
            panda$core$String* $tmp1432 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1430);
            $tmp1429 = $tmp1432;
            panda$collections$Array$add$panda$collections$Array$T(result1406, ((panda$core$Object*) $tmp1429));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
            panda$core$Int64 $tmp1434 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1414.value).value, p_delimiter->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1433, $tmp1434);
            index1410 = $tmp1433;
        }
        }
        $l1413:;
        $tmp1436 = result1406;
        $returnValue1435 = $tmp1436;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1436));
        $tmp1405 = 0;
        goto $l1403;
        $l1437:;
        return $returnValue1435;
    }
    $l1403:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1406));
    result1406 = NULL;
    switch ($tmp1405) {
        case 0: goto $l1437;
    }
    $l1439:;
    abort();
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$core$Int64 $tmp1440;
    panda$collections$Array* result1449 = NULL;
    panda$collections$Array* $tmp1450;
    panda$collections$Array* $tmp1451;
    panda$core$Matcher* matcher1453 = NULL;
    panda$core$Matcher* $tmp1454;
    panda$core$Matcher* $tmp1455;
    panda$core$String$Index index1457;
    panda$core$Bit found1461;
    panda$core$Int64 $tmp1466;
    panda$core$String* $tmp1470;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1471;
    panda$core$Bit $tmp1472;
    panda$core$String$Index start1474;
    panda$core$String$Index $tmp1475;
    panda$core$String* $tmp1476;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1477;
    panda$core$Bit $tmp1478;
    panda$core$String$Index $tmp1480;
    panda$core$String$Index $tmp1481;
    panda$collections$ListView* $returnValue1483;
    panda$collections$ListView* $tmp1484;
    panda$core$Int64$init$builtin_int64(&$tmp1440, 0);
    panda$core$Bit $tmp1441 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_maxResults, $tmp1440);
    if ($tmp1441.value) goto $l1442; else goto $l1443;
    $l1443:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1444, (panda$core$Int64) { 1323 }, &$s1445);
    abort();
    $l1442:;
    int $tmp1448;
    {
        panda$collections$Array* $tmp1452 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1452);
        $tmp1451 = $tmp1452;
        $tmp1450 = $tmp1451;
        result1449 = $tmp1450;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1450));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1451));
        panda$core$Matcher* $tmp1456 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_delimiter, self);
        $tmp1455 = $tmp1456;
        $tmp1454 = $tmp1455;
        matcher1453 = $tmp1454;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1454));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1455));
        panda$core$String$Index $tmp1458 = panda$core$String$start$R$panda$core$String$Index(self);
        index1457 = $tmp1458;
        $l1459:;
        while (true) {
        {
            panda$core$Bit $tmp1462 = panda$core$Matcher$find$R$panda$core$Bit(matcher1453);
            found1461 = $tmp1462;
            panda$core$Bit $tmp1464 = panda$core$Bit$$NOT$R$panda$core$Bit(found1461);
            bool $tmp1463 = $tmp1464.value;
            if ($tmp1463) goto $l1465;
            panda$core$Int64$init$builtin_int64(&$tmp1466, 1);
            panda$core$Int64 $tmp1467 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, $tmp1466);
            panda$core$Bit $tmp1468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1449->count, $tmp1467);
            $tmp1463 = $tmp1468.value;
            $l1465:;
            panda$core$Bit $tmp1469 = { $tmp1463 };
            if ($tmp1469.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1472, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1471, ((panda$core$String$Index$nullable) { index1457, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1472);
                panda$core$String* $tmp1473 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1471);
                $tmp1470 = $tmp1473;
                panda$collections$Array$add$panda$collections$Array$T(result1449, ((panda$core$Object*) $tmp1470));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1470));
                goto $l1460;
            }
            }
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1475, matcher1453);
            start1474 = $tmp1475;
            panda$core$Bit$init$builtin_bit(&$tmp1478, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1477, index1457, start1474, $tmp1478);
            panda$core$String* $tmp1479 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1477);
            $tmp1476 = $tmp1479;
            panda$collections$Array$add$panda$collections$Array$T(result1449, ((panda$core$Object*) $tmp1476));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1481, matcher1453);
            panda$core$Int64 $tmp1482 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(start1474.value, $tmp1481.value);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1480, $tmp1482);
            index1457 = $tmp1480;
        }
        }
        $l1460:;
        $tmp1484 = ((panda$collections$ListView*) result1449);
        $returnValue1483 = $tmp1484;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1484));
        $tmp1448 = 0;
        goto $l1446;
        $l1485:;
        return $returnValue1483;
    }
    $l1446:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1453));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1449));
    result1449 = NULL;
    matcher1453 = NULL;
    switch ($tmp1448) {
        case 0: goto $l1485;
    }
    $l1487:;
    abort();
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter) {
    panda$collections$ListView* $returnValue1488;
    panda$collections$ListView* $tmp1489;
    panda$collections$ListView* $tmp1490;
    panda$core$Int64 $tmp1491;
    panda$core$Int64$init$builtin_int64(&$tmp1491, 9223372036854775807);
    panda$collections$ListView* $tmp1492 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(self, p_delimiter, $tmp1491);
    $tmp1490 = $tmp1492;
    $tmp1489 = $tmp1490;
    $returnValue1488 = $tmp1489;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1489));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1490));
    return $returnValue1488;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 $tmp1494;
    panda$core$Int64$nullable $returnValue1496;
    panda$core$Int64 result1498;
    panda$core$Int64 $tmp1499;
    panda$core$Int64 start1500;
    panda$core$Int64 $tmp1501;
    panda$core$Char8 $tmp1502;
    panda$core$UInt8 $tmp1503;
    panda$core$Int64 $tmp1505;
    panda$core$Int64 $tmp1506;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1507;
    panda$core$Bit $tmp1508;
    panda$core$Int64 digit1522;
    panda$core$Int64 $tmp1523;
    panda$core$Int64 $tmp1524;
    panda$core$Int64 $tmp1527;
    panda$core$Int64 $tmp1530;
    panda$core$Int64 $tmp1534;
    panda$core$Int64 $tmp1543;
    panda$core$Char8 $tmp1544;
    panda$core$UInt8 $tmp1545;
    panda$core$Int64$init$builtin_int64(&$tmp1494, 0);
    panda$core$Bit $tmp1495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp1494);
    if ($tmp1495.value) {
    {
        $returnValue1496 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue1496;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1499, 0);
    result1498 = $tmp1499;
    memset(&start1500, 0, sizeof(start1500));
    panda$core$Int64$init$builtin_int64(&$tmp1501, 0);
    panda$core$UInt8$init$builtin_uint8(&$tmp1503, 45);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1502, $tmp1503);
    panda$core$Bit $tmp1504 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp1501.value], $tmp1502);
    if ($tmp1504.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1505, 1);
        start1500 = $tmp1505;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1506, 0);
        start1500 = $tmp1506;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1508, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1507, start1500, self->_length, $tmp1508);
    int64_t $tmp1510 = $tmp1507.min.value;
    panda$core$Int64 i1509 = { $tmp1510 };
    int64_t $tmp1512 = $tmp1507.max.value;
    bool $tmp1513 = $tmp1507.inclusive.value;
    if ($tmp1513) goto $l1520; else goto $l1521;
    $l1520:;
    if ($tmp1510 <= $tmp1512) goto $l1514; else goto $l1516;
    $l1521:;
    if ($tmp1510 < $tmp1512) goto $l1514; else goto $l1516;
    $l1514:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1523, ((int64_t) self->data[i1509.value].value));
        panda$core$Int64$init$builtin_int64(&$tmp1524, 48);
        panda$core$Int64 $tmp1525 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1523, $tmp1524);
        digit1522 = $tmp1525;
        panda$core$Int64$init$builtin_int64(&$tmp1527, 0);
        panda$core$Bit $tmp1528 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1522, $tmp1527);
        bool $tmp1526 = $tmp1528.value;
        if ($tmp1526) goto $l1529;
        panda$core$Int64$init$builtin_int64(&$tmp1530, 9);
        panda$core$Bit $tmp1531 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1522, $tmp1530);
        $tmp1526 = $tmp1531.value;
        $l1529:;
        panda$core$Bit $tmp1532 = { $tmp1526 };
        if ($tmp1532.value) {
        {
            $returnValue1496 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue1496;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1534, 10);
        panda$core$Int64 $tmp1535 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1498, $tmp1534);
        panda$core$Int64 $tmp1536 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1535, digit1522);
        result1498 = $tmp1536;
    }
    $l1517:;
    int64_t $tmp1538 = $tmp1512 - i1509.value;
    if ($tmp1513) goto $l1539; else goto $l1540;
    $l1539:;
    if ((uint64_t) $tmp1538 >= 1) goto $l1537; else goto $l1516;
    $l1540:;
    if ((uint64_t) $tmp1538 > 1) goto $l1537; else goto $l1516;
    $l1537:;
    i1509.value += 1;
    goto $l1514;
    $l1516:;
    panda$core$Int64$init$builtin_int64(&$tmp1543, 0);
    panda$core$UInt8$init$builtin_uint8(&$tmp1545, 45);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1544, $tmp1545);
    panda$core$Bit $tmp1546 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp1543.value], $tmp1544);
    if ($tmp1546.value) {
    {
        panda$core$Int64 $tmp1547 = panda$core$Int64$$SUB$R$panda$core$Int64(result1498);
        result1498 = $tmp1547;
    }
    }
    $returnValue1496 = ((panda$core$Int64$nullable) { result1498, true });
    return $returnValue1496;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$Int64 $tmp1549;
    panda$core$UInt64$nullable $returnValue1551;
    panda$core$UInt64 result1553;
    panda$core$UInt64 $tmp1554;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1555;
    panda$core$Int64 $tmp1556;
    panda$core$Bit $tmp1557;
    panda$core$UInt64 digit1571;
    panda$core$UInt64 $tmp1572;
    panda$core$UInt64 $tmp1573;
    panda$core$UInt64 $tmp1576;
    panda$core$UInt64 $tmp1579;
    panda$core$UInt64 $tmp1583;
    panda$core$Int64$init$builtin_int64(&$tmp1549, 0);
    panda$core$Bit $tmp1550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp1549);
    if ($tmp1550.value) {
    {
        $returnValue1551 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue1551;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp1554, 0);
    result1553 = $tmp1554;
    panda$core$Int64$init$builtin_int64(&$tmp1556, 0);
    panda$core$Bit$init$builtin_bit(&$tmp1557, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1555, $tmp1556, self->_length, $tmp1557);
    int64_t $tmp1559 = $tmp1555.min.value;
    panda$core$Int64 i1558 = { $tmp1559 };
    int64_t $tmp1561 = $tmp1555.max.value;
    bool $tmp1562 = $tmp1555.inclusive.value;
    if ($tmp1562) goto $l1569; else goto $l1570;
    $l1569:;
    if ($tmp1559 <= $tmp1561) goto $l1563; else goto $l1565;
    $l1570:;
    if ($tmp1559 < $tmp1561) goto $l1563; else goto $l1565;
    $l1563:;
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp1572, ((uint64_t) self->data[i1558.value].value));
        panda$core$UInt64$init$builtin_uint64(&$tmp1573, 48);
        panda$core$UInt64 $tmp1574 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp1572, $tmp1573);
        digit1571 = $tmp1574;
        panda$core$UInt64$init$builtin_uint64(&$tmp1576, 0);
        panda$core$Bit $tmp1577 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1571, $tmp1576);
        bool $tmp1575 = $tmp1577.value;
        if ($tmp1575) goto $l1578;
        panda$core$UInt64$init$builtin_uint64(&$tmp1579, 9);
        panda$core$Bit $tmp1580 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1571, $tmp1579);
        $tmp1575 = $tmp1580.value;
        $l1578:;
        panda$core$Bit $tmp1581 = { $tmp1575 };
        if ($tmp1581.value) {
        {
            $returnValue1551 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue1551;
        }
        }
        panda$core$UInt64$init$builtin_uint64(&$tmp1583, 10);
        panda$core$UInt64 $tmp1584 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1553, $tmp1583);
        panda$core$UInt64 $tmp1585 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1584, digit1571);
        result1553 = $tmp1585;
    }
    $l1566:;
    int64_t $tmp1587 = $tmp1561 - i1558.value;
    if ($tmp1562) goto $l1588; else goto $l1589;
    $l1588:;
    if ((uint64_t) $tmp1587 >= 1) goto $l1586; else goto $l1565;
    $l1589:;
    if ((uint64_t) $tmp1587 > 1) goto $l1586; else goto $l1565;
    $l1586:;
    i1558.value += 1;
    goto $l1563;
    $l1565:;
    $returnValue1551 = ((panda$core$UInt64$nullable) { result1553, true });
    return $returnValue1551;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $tmp1593;
    panda$core$Int64 h1595;
    panda$core$Int64 $tmp1596;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1597;
    panda$core$Int64 $tmp1598;
    panda$core$Bit $tmp1599;
    panda$core$Int64 $tmp1613;
    panda$core$Int64 $tmp1615;
    panda$core$Int64 $returnValue1623;
    panda$core$Int64$init$builtin_int64(&$tmp1593, 0);
    panda$core$Bit $tmp1594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, $tmp1593);
    if ($tmp1594.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1596, 1);
        h1595 = $tmp1596;
        panda$core$Int64$init$builtin_int64(&$tmp1598, 0);
        panda$core$Bit$init$builtin_bit(&$tmp1599, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1597, $tmp1598, self->_length, $tmp1599);
        int64_t $tmp1601 = $tmp1597.min.value;
        panda$core$Int64 i1600 = { $tmp1601 };
        int64_t $tmp1603 = $tmp1597.max.value;
        bool $tmp1604 = $tmp1597.inclusive.value;
        if ($tmp1604) goto $l1611; else goto $l1612;
        $l1611:;
        if ($tmp1601 <= $tmp1603) goto $l1605; else goto $l1607;
        $l1612:;
        if ($tmp1601 < $tmp1603) goto $l1605; else goto $l1607;
        $l1605:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp1613, 101);
            panda$core$Int64 $tmp1614 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1595, $tmp1613);
            panda$core$Int64$init$builtin_int64(&$tmp1615, ((int64_t) self->data[i1600.value].value));
            panda$core$Int64 $tmp1616 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1614, $tmp1615);
            h1595 = $tmp1616;
        }
        $l1608:;
        int64_t $tmp1618 = $tmp1603 - i1600.value;
        if ($tmp1604) goto $l1619; else goto $l1620;
        $l1619:;
        if ((uint64_t) $tmp1618 >= 1) goto $l1617; else goto $l1607;
        $l1620:;
        if ((uint64_t) $tmp1618 > 1) goto $l1617; else goto $l1607;
        $l1617:;
        i1600.value += 1;
        goto $l1605;
        $l1607:;
        self->_hash = h1595;
    }
    }
    $returnValue1623 = self->_hash;
    return $returnValue1623;
}

