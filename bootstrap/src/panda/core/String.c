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
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$format$panda$core$String$R$panda$core$String, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$convert$R$panda$core$Real64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn11)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn32)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn76)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn83)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn90)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn163)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn327)(panda$core$Object*);
typedef panda$core$String* (*$fn377)(panda$core$Object*);
typedef panda$core$Object* (*$fn1112)(panda$core$Object*, panda$core$String*);
typedef panda$core$Object* (*$fn1113)(panda$core$String*);
typedef panda$core$String* (*$fn1114)(panda$core$Object*);
typedef panda$core$Object* (*$fn1174)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1175)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1176)(panda$core$Object*);

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
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 172, -4332006218848187331, NULL };

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
    panda$core$String* $match$383_948 = NULL;
    panda$core$String* $tmp49;
    panda$core$String* $returnValue52;
    panda$core$String* $tmp53;
    panda$core$MutableString* result61 = NULL;
    panda$core$MutableString* $tmp62;
    panda$core$MutableString* $tmp63;
    panda$collections$Iterator* Iter$388$1769 = NULL;
    panda$collections$Iterator* $tmp70;
    panda$collections$Iterator* $tmp71;
    panda$collections$ListView* $tmp72;
    panda$core$Char8 c86;
    panda$core$Object* $tmp87;
    panda$core$Char8 $match$389_2192;
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
        $match$383_948 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Bit $tmp51 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$383_948, &$s50);
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
        panda$core$Bit $tmp57 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$383_948, &$s56);
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
                        Iter$388$1769 = $tmp70;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
                        $l78:;
                        ITable* $tmp81 = Iter$388$1769->$class->itable;
                        while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp81 = $tmp81->next;
                        }
                        $fn83 $tmp82 = $tmp81->methods[0];
                        panda$core$Bit $tmp84 = $tmp82(Iter$388$1769);
                        panda$core$Bit $tmp85 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp84);
                        bool $tmp80 = $tmp85.value;
                        if (!$tmp80) goto $l79;
                        {
                            ITable* $tmp88 = Iter$388$1769->$class->itable;
                            while ($tmp88->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp88 = $tmp88->next;
                            }
                            $fn90 $tmp89 = $tmp88->methods[1];
                            panda$core$Object* $tmp91 = $tmp89(Iter$388$1769);
                            $tmp87 = $tmp91;
                            c86 = ((panda$core$Char8$wrapper*) $tmp87)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp87);
                            {
                                $match$389_2192 = c86;
                                panda$core$UInt8$init$builtin_uint8(&$tmp94, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp93, $tmp94);
                                panda$core$Bit $tmp95 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$389_2192, $tmp93);
                                if ($tmp95.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s96);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp98, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp97, $tmp98);
                                panda$core$Bit $tmp99 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$389_2192, $tmp97);
                                if ($tmp99.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s100);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp102, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp101, $tmp102);
                                panda$core$Bit $tmp103 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$389_2192, $tmp101);
                                if ($tmp103.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s104);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp106, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp105, $tmp106);
                                panda$core$Bit $tmp107 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$389_2192, $tmp105);
                                if ($tmp107.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result61, &$s108);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp110, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp109, $tmp110);
                                panda$core$Bit $tmp111 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$389_2192, $tmp109);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$388$1769));
                    Iter$388$1769 = NULL;
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
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s137, (panda$core$Int64) { 409 });
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
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s335, (panda$core$Int64) { 534 }, &$s336);
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
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s434, (panda$core$Int64) { 588 });
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
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s455, (panda$core$Int64) { 593 });
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
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s481, (panda$core$Int64) { 598 });
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
    panda$core$Int64 length515;
    panda$core$Int64 $tmp517;
    panda$core$String* $returnValue519;
    panda$core$String* $tmp520;
    panda$core$String* $tmp521;
    panda$core$Int64 $tmp516 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    length515 = $tmp516;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp517, 1);
        panda$core$Int64 $tmp518 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(length515, $tmp517);
        length515 = $tmp518;
    }
    }
    panda$core$String* $tmp522 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp522, (self->data + p_r.min.value.value), length515, self);
    $tmp521 = $tmp522;
    $tmp520 = $tmp521;
    $returnValue519 = $tmp520;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp520));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
    return $returnValue519;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min524;
    panda$core$Bit inclusive526;
    panda$core$String$Index max527;
    panda$core$Bit $tmp529;
    panda$core$String* $returnValue530;
    panda$core$String* $tmp531;
    panda$core$String* $tmp532;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp533;
    memset(&min524, 0, sizeof(min524));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min524 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp525 = panda$core$String$start$R$panda$core$String$Index(self);
        min524 = $tmp525;
    }
    }
    inclusive526 = p_r.inclusive;
    memset(&max527, 0, sizeof(max527));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max527 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp528 = panda$core$String$end$R$panda$core$String$Index(self);
        max527 = $tmp528;
        panda$core$Bit$init$builtin_bit(&$tmp529, false);
        inclusive526 = $tmp529;
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp533, min524, max527, inclusive526);
    panda$core$String* $tmp534 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp533);
    $tmp532 = $tmp534;
    $tmp531 = $tmp532;
    $returnValue530 = $tmp531;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp531));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp532));
    return $returnValue530;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current539;
    panda$core$MutableString* result540 = NULL;
    panda$core$MutableString* $tmp541;
    panda$core$MutableString* $tmp542;
    panda$core$Int64 max544;
    panda$core$Int64 $tmp545;
    panda$core$Char8 c551;
    panda$core$Int64 $tmp552;
    panda$core$Bit $tmp554;
    panda$core$Int64 $tmp557;
    panda$core$Bit $tmp559;
    panda$core$Int64 $tmp562;
    panda$core$Bit $tmp564;
    panda$core$Int64 $tmp567;
    panda$core$String* $returnValue569;
    panda$core$String* $tmp570;
    panda$core$String* $tmp571;
    int $tmp538;
    {
        current539 = p_r.min.value;
        panda$core$MutableString* $tmp543 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp543);
        $tmp542 = $tmp543;
        $tmp541 = $tmp542;
        result540 = $tmp541;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp541));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
        max544 = p_r.max.value;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp545, 1);
            panda$core$Int64 $tmp546 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max544, $tmp545);
            max544 = $tmp546;
        }
        }
        $l547:;
        panda$core$Bit $tmp550 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current539, max544);
        bool $tmp549 = $tmp550.value;
        if (!$tmp549) goto $l548;
        {
            c551 = self->data[current539.value];
            panda$core$MutableString$append$panda$core$Char8(result540, c551);
            panda$core$Int64$init$builtin_int64(&$tmp552, 1);
            panda$core$Int64 $tmp553 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current539, $tmp552);
            current539 = $tmp553;
            int64_t $tmp555 = ((int64_t) c551.value) & 255;
            bool $tmp556 = $tmp555 >= 192;
            panda$core$Bit$init$builtin_bit(&$tmp554, $tmp556);
            if ($tmp554.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result540, self->data[current539.value]);
                panda$core$Int64$init$builtin_int64(&$tmp557, 1);
                panda$core$Int64 $tmp558 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current539, $tmp557);
                current539 = $tmp558;
            }
            }
            int64_t $tmp560 = ((int64_t) c551.value) & 255;
            bool $tmp561 = $tmp560 >= 224;
            panda$core$Bit$init$builtin_bit(&$tmp559, $tmp561);
            if ($tmp559.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result540, self->data[current539.value]);
                panda$core$Int64$init$builtin_int64(&$tmp562, 1);
                panda$core$Int64 $tmp563 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current539, $tmp562);
                current539 = $tmp563;
            }
            }
            int64_t $tmp565 = ((int64_t) c551.value) & 255;
            bool $tmp566 = $tmp565 >= 240;
            panda$core$Bit$init$builtin_bit(&$tmp564, $tmp566);
            if ($tmp564.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result540, self->data[current539.value]);
                panda$core$Int64$init$builtin_int64(&$tmp567, 1);
                panda$core$Int64 $tmp568 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current539, $tmp567);
                current539 = $tmp568;
            }
            }
        }
        goto $l547;
        $l548:;
        panda$core$String* $tmp572 = panda$core$MutableString$finish$R$panda$core$String(result540);
        $tmp571 = $tmp572;
        $tmp570 = $tmp571;
        $returnValue569 = $tmp570;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp570));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp571));
        $tmp538 = 0;
        goto $l536;
        $l573:;
        return $returnValue569;
    }
    $l536:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result540));
    result540 = NULL;
    switch ($tmp538) {
        case 0: goto $l573;
    }
    $l575:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$Int64 $tmp576;
    panda$core$String* $returnValue578;
    panda$core$String* $tmp579;
    panda$core$String$Index min582;
    panda$core$Bit inclusive584;
    panda$core$String$Index max585;
    panda$core$Bit $tmp587;
    panda$core$String* $tmp588;
    panda$core$String* $tmp589;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp590;
    panda$core$Int64$init$builtin_int64(&$tmp576, 0);
    panda$core$Bit $tmp577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp576);
    if ($tmp577.value) {
    {
        $tmp579 = &$s580;
        $returnValue578 = $tmp579;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp579));
        return $returnValue578;
    }
    }
    memset(&min582, 0, sizeof(min582));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min582 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp583 = panda$core$String$start$R$panda$core$String$Index(self);
        min582 = $tmp583;
    }
    }
    inclusive584 = p_r.inclusive;
    memset(&max585, 0, sizeof(max585));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max585 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp586 = panda$core$String$end$R$panda$core$String$Index(self);
        max585 = $tmp586;
        panda$core$Bit$init$builtin_bit(&$tmp587, false);
        inclusive584 = $tmp587;
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp590, min582, max585, inclusive584);
    panda$core$String* $tmp591 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp590);
    $tmp589 = $tmp591;
    $tmp588 = $tmp589;
    $returnValue578 = $tmp588;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp588));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp589));
    return $returnValue578;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 $tmp596;
    panda$core$String* $returnValue598;
    panda$core$String* $tmp599;
    panda$core$Int64 step603;
    panda$core$Int64 current604;
    panda$core$Int64 $tmp605;
    panda$core$Int64 end610;
    panda$core$Int64 $tmp611;
    panda$core$MutableString* result615 = NULL;
    panda$core$MutableString* $tmp616;
    panda$core$MutableString* $tmp617;
    panda$core$Int64 $tmp619;
    panda$core$Char8 c625;
    panda$core$Int64 $tmp626;
    panda$core$Bit $tmp628;
    panda$core$Int64 $tmp631;
    panda$core$Bit $tmp633;
    panda$core$Int64 $tmp636;
    panda$core$Bit $tmp638;
    panda$core$Int64 $tmp641;
    panda$core$Range$LTpanda$core$Int64$GT $tmp643;
    panda$core$Int64 $tmp644;
    panda$core$Bit $tmp645;
    panda$core$String* $tmp660;
    panda$core$String* $tmp661;
    panda$core$String$Index $tmp665;
    panda$core$Int64 $tmp673;
    panda$core$Char8 c682;
    panda$core$Int64 old683;
    panda$core$Int64 $tmp684;
    panda$core$Bit $tmp686;
    panda$core$Int64 $tmp689;
    panda$core$Bit $tmp691;
    panda$core$Int64 $tmp694;
    panda$core$Bit $tmp696;
    panda$core$Int64 $tmp699;
    panda$core$Bit $tmp704;
    panda$core$Int64 $tmp711;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp713;
    panda$core$Int64 $tmp714;
    panda$core$Int64 $tmp715;
    panda$core$Bit $tmp716;
    panda$core$String* $tmp736;
    panda$core$String* $tmp737;
    panda$core$String$Index $tmp741;
    panda$core$Char8 c765;
    panda$core$Int64 $tmp766;
    panda$core$Bit $tmp768;
    panda$core$Int64 $tmp771;
    panda$core$Bit $tmp773;
    panda$core$Int64 $tmp776;
    panda$core$Bit $tmp778;
    panda$core$String* $tmp781;
    panda$core$String* $tmp782;
    int $tmp595;
    {
        panda$core$Int64$init$builtin_int64(&$tmp596, 0);
        panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp596);
        if ($tmp597.value) {
        {
            $tmp599 = &$s600;
            $returnValue598 = $tmp599;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp599));
            $tmp595 = 0;
            goto $l593;
            $l601:;
            return $returnValue598;
        }
        }
        step603 = p_r.step;
        memset(&current604, 0, sizeof(current604));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current604 = ((panda$core$String$Index) p_r.start.value).value;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp605, 0);
        panda$core$Bit $tmp606 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step603, $tmp605);
        if ($tmp606.value) {
        {
            panda$core$String$Index $tmp607 = panda$core$String$start$R$panda$core$String$Index(self);
            current604 = $tmp607.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp608 = panda$core$String$end$R$panda$core$String$Index(self);
            panda$core$String$Index $tmp609 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp608);
            current604 = $tmp609.value;
        }
        }
        }
        memset(&end610, 0, sizeof(end610));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end610 = ((panda$core$String$Index) p_r.end.value).value;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp611, 0);
        panda$core$Bit $tmp612 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step603, $tmp611);
        if ($tmp612.value) {
        {
            panda$core$String$Index $tmp613 = panda$core$String$end$R$panda$core$String$Index(self);
            end610 = $tmp613.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp614 = panda$core$String$start$R$panda$core$String$Index(self);
            end610 = $tmp614.value;
        }
        }
        }
        panda$core$MutableString* $tmp618 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp618);
        $tmp617 = $tmp618;
        $tmp616 = $tmp617;
        result615 = $tmp616;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp616));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
        panda$core$Int64$init$builtin_int64(&$tmp619, 0);
        panda$core$Bit $tmp620 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp619);
        if ($tmp620.value) {
        {
            $l621:;
            panda$core$Bit $tmp624 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current604, end610);
            bool $tmp623 = $tmp624.value;
            if (!$tmp623) goto $l622;
            {
                c625 = self->data[current604.value];
                panda$core$MutableString$append$panda$core$Char8(result615, c625);
                panda$core$Int64$init$builtin_int64(&$tmp626, 1);
                panda$core$Int64 $tmp627 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current604, $tmp626);
                current604 = $tmp627;
                int64_t $tmp629 = ((int64_t) c625.value) & 255;
                bool $tmp630 = $tmp629 >= 192;
                panda$core$Bit$init$builtin_bit(&$tmp628, $tmp630);
                if ($tmp628.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result615, self->data[current604.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp631, 1);
                    panda$core$Int64 $tmp632 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current604, $tmp631);
                    current604 = $tmp632;
                }
                }
                int64_t $tmp634 = ((int64_t) c625.value) & 255;
                bool $tmp635 = $tmp634 >= 224;
                panda$core$Bit$init$builtin_bit(&$tmp633, $tmp635);
                if ($tmp633.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result615, self->data[current604.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp636, 1);
                    panda$core$Int64 $tmp637 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current604, $tmp636);
                    current604 = $tmp637;
                }
                }
                int64_t $tmp639 = ((int64_t) c625.value) & 255;
                bool $tmp640 = $tmp639 >= 240;
                panda$core$Bit$init$builtin_bit(&$tmp638, $tmp640);
                if ($tmp638.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result615, self->data[current604.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp641, 1);
                    panda$core$Int64 $tmp642 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current604, $tmp641);
                    current604 = $tmp642;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp644, 1);
                panda$core$Bit$init$builtin_bit(&$tmp645, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp643, $tmp644, step603, $tmp645);
                int64_t $tmp647 = $tmp643.min.value;
                panda$core$Int64 i646 = { $tmp647 };
                int64_t $tmp649 = $tmp643.max.value;
                bool $tmp650 = $tmp643.inclusive.value;
                if ($tmp650) goto $l657; else goto $l658;
                $l657:;
                if ($tmp647 <= $tmp649) goto $l651; else goto $l653;
                $l658:;
                if ($tmp647 < $tmp649) goto $l651; else goto $l653;
                $l651:;
                {
                    panda$core$Bit $tmp659 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current604, end610);
                    if ($tmp659.value) {
                    {
                        panda$core$String* $tmp662 = panda$core$MutableString$convert$R$panda$core$String(result615);
                        $tmp661 = $tmp662;
                        $tmp660 = $tmp661;
                        $returnValue598 = $tmp660;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp660));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp661));
                        $tmp595 = 1;
                        goto $l593;
                        $l663:;
                        return $returnValue598;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp665, current604);
                    panda$core$String$Index $tmp666 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp665);
                    current604 = $tmp666.value;
                }
                $l654:;
                int64_t $tmp668 = $tmp649 - i646.value;
                if ($tmp650) goto $l669; else goto $l670;
                $l669:;
                if ((uint64_t) $tmp668 >= 1) goto $l667; else goto $l653;
                $l670:;
                if ((uint64_t) $tmp668 > 1) goto $l667; else goto $l653;
                $l667:;
                i646.value += 1;
                goto $l651;
                $l653:;
            }
            goto $l621;
            $l622:;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp673, 0);
            panda$core$Bit $tmp674 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, $tmp673);
            if ($tmp674.value) goto $l675; else goto $l676;
            $l676:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s677, (panda$core$Int64) { 791 });
            abort();
            $l675:;
            $l678:;
            panda$core$Bit $tmp681 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current604, end610);
            bool $tmp680 = $tmp681.value;
            if (!$tmp680) goto $l679;
            {
                c682 = self->data[current604.value];
                panda$core$MutableString$append$panda$core$Char8(result615, c682);
                old683 = current604;
                panda$core$Int64$init$builtin_int64(&$tmp684, 1);
                panda$core$Int64 $tmp685 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current604, $tmp684);
                current604 = $tmp685;
                int64_t $tmp687 = ((int64_t) c682.value) & 255;
                bool $tmp688 = $tmp687 >= 192;
                panda$core$Bit$init$builtin_bit(&$tmp686, $tmp688);
                if ($tmp686.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result615, self->data[current604.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp689, 1);
                    panda$core$Int64 $tmp690 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current604, $tmp689);
                    current604 = $tmp690;
                }
                }
                int64_t $tmp692 = ((int64_t) c682.value) & 255;
                bool $tmp693 = $tmp692 >= 224;
                panda$core$Bit$init$builtin_bit(&$tmp691, $tmp693);
                if ($tmp691.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result615, self->data[current604.value]);
                    panda$core$Int64$init$builtin_int64(&$tmp694, 1);
                    panda$core$Int64 $tmp695 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current604, $tmp694);
                    current604 = $tmp695;
                }
                }
                int64_t $tmp697 = ((int64_t) c682.value) & 255;
                bool $tmp698 = $tmp697 >= 240;
                panda$core$Bit$init$builtin_bit(&$tmp696, $tmp698);
                if ($tmp696.value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result615, self->data[current604.value]);
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp699, 1);
                panda$core$Int64 $tmp700 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old683, $tmp699);
                current604 = $tmp700;
                $l701:;
                int64_t $tmp706 = ((int64_t) self->data[current604.value].value) & 255;
                bool $tmp707 = $tmp706 >= 128;
                bool $tmp705 = $tmp707;
                if (!$tmp705) goto $l708;
                int64_t $tmp709 = ((int64_t) self->data[current604.value].value) & 255;
                bool $tmp710 = $tmp709 < 192;
                $tmp705 = $tmp710;
                $l708:;
                panda$core$Bit$init$builtin_bit(&$tmp704, $tmp705);
                bool $tmp703 = $tmp704.value;
                if (!$tmp703) goto $l702;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp711, 1);
                    panda$core$Int64 $tmp712 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current604, $tmp711);
                    current604 = $tmp712;
                }
                goto $l701;
                $l702:;
                panda$core$Int64$init$builtin_int64(&$tmp714, -1);
                panda$core$Int64$init$builtin_int64(&$tmp715, -1);
                panda$core$Bit$init$builtin_bit(&$tmp716, false);
                panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp713, $tmp714, step603, $tmp715, $tmp716);
                int64_t $tmp718 = $tmp713.start.value;
                panda$core$Int64 i717 = { $tmp718 };
                int64_t $tmp720 = $tmp713.end.value;
                int64_t $tmp721 = $tmp713.step.value;
                bool $tmp722 = $tmp713.inclusive.value;
                bool $tmp729 = $tmp721 > 0;
                if ($tmp729) goto $l727; else goto $l728;
                $l727:;
                if ($tmp722) goto $l730; else goto $l731;
                $l730:;
                if ($tmp718 <= $tmp720) goto $l723; else goto $l725;
                $l731:;
                if ($tmp718 < $tmp720) goto $l723; else goto $l725;
                $l728:;
                if ($tmp722) goto $l732; else goto $l733;
                $l732:;
                if ($tmp718 >= $tmp720) goto $l723; else goto $l725;
                $l733:;
                if ($tmp718 > $tmp720) goto $l723; else goto $l725;
                $l723:;
                {
                    panda$core$Bit $tmp735 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current604, end610);
                    if ($tmp735.value) {
                    {
                        panda$core$String* $tmp738 = panda$core$MutableString$convert$R$panda$core$String(result615);
                        $tmp737 = $tmp738;
                        $tmp736 = $tmp737;
                        $returnValue598 = $tmp736;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp736));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
                        $tmp595 = 2;
                        goto $l593;
                        $l739:;
                        return $returnValue598;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp741, current604);
                    panda$core$String$Index $tmp742 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp741);
                    current604 = $tmp742.value;
                }
                $l726:;
                if ($tmp729) goto $l744; else goto $l745;
                $l744:;
                int64_t $tmp746 = $tmp720 - i717.value;
                if ($tmp722) goto $l747; else goto $l748;
                $l747:;
                if ((uint64_t) $tmp746 >= $tmp721) goto $l743; else goto $l725;
                $l748:;
                if ((uint64_t) $tmp746 > $tmp721) goto $l743; else goto $l725;
                $l745:;
                int64_t $tmp750 = i717.value - $tmp720;
                if ($tmp722) goto $l751; else goto $l752;
                $l751:;
                if ((uint64_t) $tmp750 >= -$tmp721) goto $l743; else goto $l725;
                $l752:;
                if ((uint64_t) $tmp750 > -$tmp721) goto $l743; else goto $l725;
                $l743:;
                i717.value += $tmp721;
                goto $l723;
                $l725:;
            }
            goto $l678;
            $l679:;
        }
        }
        bool $tmp756 = p_r.inclusive.value;
        if ($tmp756) goto $l757;
        $tmp756 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l757:;
        panda$core$Bit $tmp758 = { $tmp756 };
        bool $tmp755 = $tmp758.value;
        if (!$tmp755) goto $l759;
        panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current604, end610);
        $tmp755 = $tmp760.value;
        $l759:;
        panda$core$Bit $tmp761 = { $tmp755 };
        bool $tmp754 = $tmp761.value;
        if (!$tmp754) goto $l762;
        panda$core$Bit $tmp763 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end610, self->_length);
        $tmp754 = $tmp763.value;
        $l762:;
        panda$core$Bit $tmp764 = { $tmp754 };
        if ($tmp764.value) {
        {
            c765 = self->data[current604.value];
            panda$core$MutableString$append$panda$core$Char8(result615, c765);
            panda$core$Int64$init$builtin_int64(&$tmp766, 1);
            panda$core$Int64 $tmp767 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current604, $tmp766);
            current604 = $tmp767;
            int64_t $tmp769 = ((int64_t) c765.value) & 255;
            bool $tmp770 = $tmp769 >= 192;
            panda$core$Bit$init$builtin_bit(&$tmp768, $tmp770);
            if ($tmp768.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result615, self->data[current604.value]);
                panda$core$Int64$init$builtin_int64(&$tmp771, 1);
                panda$core$Int64 $tmp772 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current604, $tmp771);
                current604 = $tmp772;
            }
            }
            int64_t $tmp774 = ((int64_t) c765.value) & 255;
            bool $tmp775 = $tmp774 >= 224;
            panda$core$Bit$init$builtin_bit(&$tmp773, $tmp775);
            if ($tmp773.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result615, self->data[current604.value]);
                panda$core$Int64$init$builtin_int64(&$tmp776, 1);
                panda$core$Int64 $tmp777 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current604, $tmp776);
                current604 = $tmp777;
            }
            }
            int64_t $tmp779 = ((int64_t) c765.value) & 255;
            bool $tmp780 = $tmp779 >= 240;
            panda$core$Bit$init$builtin_bit(&$tmp778, $tmp780);
            if ($tmp778.value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result615, self->data[current604.value]);
            }
            }
        }
        }
        panda$core$String* $tmp783 = panda$core$MutableString$finish$R$panda$core$String(result615);
        $tmp782 = $tmp783;
        $tmp781 = $tmp782;
        $returnValue598 = $tmp781;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp781));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp782));
        $tmp595 = 3;
        goto $l593;
        $l784:;
        return $returnValue598;
    }
    $l593:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result615));
    result615 = NULL;
    switch ($tmp595) {
        case 1: goto $l663;
        case 2: goto $l739;
        case 3: goto $l784;
        case 0: goto $l601;
    }
    $l786:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start787;
    panda$core$String$Index$nullable end790;
    panda$core$String* $returnValue793;
    panda$core$String* $tmp794;
    panda$core$String* $tmp795;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp796;
    memset(&start787, 0, sizeof(start787));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp788 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp789 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp788, ((panda$core$Int64) p_r.min.value));
        start787 = ((panda$core$String$Index$nullable) { $tmp789, true });
    }
    }
    else {
    {
        start787 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end790, 0, sizeof(end790));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp791 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp792 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp791, ((panda$core$Int64) p_r.max.value));
        end790 = ((panda$core$String$Index$nullable) { $tmp792, true });
    }
    }
    else {
    {
        end790 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp796, start787, end790, p_r.inclusive);
    panda$core$String* $tmp797 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp796);
    $tmp795 = $tmp797;
    $tmp794 = $tmp795;
    $returnValue793 = $tmp794;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp794));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
    return $returnValue793;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start799;
    panda$core$String$Index$nullable end802;
    panda$core$String* $returnValue805;
    panda$core$String* $tmp806;
    panda$core$String* $tmp807;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp808;
    memset(&start799, 0, sizeof(start799));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp800 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp801 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp800, ((panda$core$Int64) p_r.start.value));
        start799 = ((panda$core$String$Index$nullable) { $tmp801, true });
    }
    }
    else {
    {
        start799 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end802, 0, sizeof(end802));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp803 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp804 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp803, ((panda$core$Int64) p_r.end.value));
        end802 = ((panda$core$String$Index$nullable) { $tmp804, true });
    }
    }
    else {
    {
        end802 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp808, start799, end802, p_r.step, p_r.inclusive);
    panda$core$String* $tmp809 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp808);
    $tmp807 = $tmp809;
    $tmp806 = $tmp807;
    $returnValue805 = $tmp806;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp806));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
    return $returnValue805;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp811;
    panda$core$Int64 $tmp812;
    panda$core$Bit $tmp813;
    panda$core$Bit $returnValue828;
    panda$core$Bit $tmp829;
    panda$core$Bit $tmp837;
    panda$core$Int64$init$builtin_int64(&$tmp812, 0);
    panda$core$Bit$init$builtin_bit(&$tmp813, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp811, $tmp812, self->_length, $tmp813);
    int64_t $tmp815 = $tmp811.min.value;
    panda$core$Int64 i814 = { $tmp815 };
    int64_t $tmp817 = $tmp811.max.value;
    bool $tmp818 = $tmp811.inclusive.value;
    if ($tmp818) goto $l825; else goto $l826;
    $l825:;
    if ($tmp815 <= $tmp817) goto $l819; else goto $l821;
    $l826:;
    if ($tmp815 < $tmp817) goto $l819; else goto $l821;
    $l819:;
    {
        panda$core$Bit $tmp827 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i814.value], p_c);
        if ($tmp827.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp829, true);
            $returnValue828 = $tmp829;
            return $returnValue828;
        }
        }
    }
    $l822:;
    int64_t $tmp832 = $tmp817 - i814.value;
    if ($tmp818) goto $l833; else goto $l834;
    $l833:;
    if ((uint64_t) $tmp832 >= 1) goto $l831; else goto $l821;
    $l834:;
    if ((uint64_t) $tmp832 > 1) goto $l831; else goto $l821;
    $l831:;
    i814.value += 1;
    goto $l819;
    $l821:;
    panda$core$Bit$init$builtin_bit(&$tmp837, false);
    $returnValue828 = $tmp837;
    return $returnValue828;
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$Bit $returnValue839;
    panda$core$String$Index$nullable $tmp840 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    $returnValue839 = ((panda$core$Bit) { $tmp840.nonnull });
    return $returnValue839;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue842;
    panda$core$String$Index $tmp843 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp844 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp843);
    $returnValue842 = $tmp844;
    return $returnValue842;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue847;
    panda$core$Range$LTpanda$core$Int64$GT $tmp849;
    panda$core$Bit $tmp851;
    panda$core$Range$LTpanda$core$Int64$GT $tmp865;
    panda$core$Int64 $tmp866;
    panda$core$Bit $tmp867;
    panda$core$String$Index $tmp889;
    panda$core$Bit $tmp846 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp846.value) {
    {
        $returnValue847 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue847;
    }
    }
    panda$core$Int64 $tmp850 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Bit$init$builtin_bit(&$tmp851, true);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp849, p_start.value, $tmp850, $tmp851);
    int64_t $tmp853 = $tmp849.min.value;
    panda$core$Int64 i852 = { $tmp853 };
    int64_t $tmp855 = $tmp849.max.value;
    bool $tmp856 = $tmp849.inclusive.value;
    if ($tmp856) goto $l863; else goto $l864;
    $l863:;
    if ($tmp853 <= $tmp855) goto $l857; else goto $l859;
    $l864:;
    if ($tmp853 < $tmp855) goto $l857; else goto $l859;
    $l857:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp866, 0);
        panda$core$Bit$init$builtin_bit(&$tmp867, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp865, $tmp866, p_s->_length, $tmp867);
        int64_t $tmp869 = $tmp865.min.value;
        panda$core$Int64 j868 = { $tmp869 };
        int64_t $tmp871 = $tmp865.max.value;
        bool $tmp872 = $tmp865.inclusive.value;
        if ($tmp872) goto $l879; else goto $l880;
        $l879:;
        if ($tmp869 <= $tmp871) goto $l873; else goto $l875;
        $l880:;
        if ($tmp869 < $tmp871) goto $l873; else goto $l875;
        $l873:;
        {
            panda$core$Int64 $tmp881 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i852, j868);
            panda$core$Bit $tmp882 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp881.value], p_s->data[j868.value]);
            if ($tmp882.value) {
            {
                goto $l860;
            }
            }
        }
        $l876:;
        int64_t $tmp884 = $tmp871 - j868.value;
        if ($tmp872) goto $l885; else goto $l886;
        $l885:;
        if ((uint64_t) $tmp884 >= 1) goto $l883; else goto $l875;
        $l886:;
        if ((uint64_t) $tmp884 > 1) goto $l883; else goto $l875;
        $l883:;
        j868.value += 1;
        goto $l873;
        $l875:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp889, i852);
        $returnValue847 = ((panda$core$String$Index$nullable) { $tmp889, true });
        return $returnValue847;
    }
    $l860:;
    int64_t $tmp892 = $tmp855 - i852.value;
    if ($tmp856) goto $l893; else goto $l894;
    $l893:;
    if ((uint64_t) $tmp892 >= 1) goto $l891; else goto $l859;
    $l894:;
    if ((uint64_t) $tmp892 > 1) goto $l891; else goto $l859;
    $l891:;
    i852.value += 1;
    goto $l857;
    $l859:;
    $returnValue847 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue847;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue898;
    panda$core$String$Index $tmp899 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp900 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp899);
    $returnValue898 = $tmp900;
    return $returnValue898;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue903;
    panda$core$Int64 startPos905;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp908;
    panda$core$Int64 $tmp909;
    panda$core$Int64 $tmp910;
    panda$core$Bit $tmp911;
    panda$core$Range$LTpanda$core$Int64$GT $tmp930;
    panda$core$Int64 $tmp931;
    panda$core$Bit $tmp932;
    panda$core$String$Index $tmp954;
    panda$core$Bit $tmp902 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp902.value) {
    {
        $returnValue903 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue903;
    }
    }
    panda$core$Int64 $tmp906 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp907 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp906);
    startPos905 = $tmp907;
    panda$core$Int64$init$builtin_int64(&$tmp909, 0);
    panda$core$Int64$init$builtin_int64(&$tmp910, -1);
    panda$core$Bit$init$builtin_bit(&$tmp911, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp908, startPos905, $tmp909, $tmp910, $tmp911);
    int64_t $tmp913 = $tmp908.start.value;
    panda$core$Int64 i912 = { $tmp913 };
    int64_t $tmp915 = $tmp908.end.value;
    int64_t $tmp916 = $tmp908.step.value;
    bool $tmp917 = $tmp908.inclusive.value;
    bool $tmp924 = $tmp916 > 0;
    if ($tmp924) goto $l922; else goto $l923;
    $l922:;
    if ($tmp917) goto $l925; else goto $l926;
    $l925:;
    if ($tmp913 <= $tmp915) goto $l918; else goto $l920;
    $l926:;
    if ($tmp913 < $tmp915) goto $l918; else goto $l920;
    $l923:;
    if ($tmp917) goto $l927; else goto $l928;
    $l927:;
    if ($tmp913 >= $tmp915) goto $l918; else goto $l920;
    $l928:;
    if ($tmp913 > $tmp915) goto $l918; else goto $l920;
    $l918:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp931, 0);
        panda$core$Bit$init$builtin_bit(&$tmp932, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp930, $tmp931, p_s->_length, $tmp932);
        int64_t $tmp934 = $tmp930.min.value;
        panda$core$Int64 j933 = { $tmp934 };
        int64_t $tmp936 = $tmp930.max.value;
        bool $tmp937 = $tmp930.inclusive.value;
        if ($tmp937) goto $l944; else goto $l945;
        $l944:;
        if ($tmp934 <= $tmp936) goto $l938; else goto $l940;
        $l945:;
        if ($tmp934 < $tmp936) goto $l938; else goto $l940;
        $l938:;
        {
            panda$core$Int64 $tmp946 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i912, j933);
            panda$core$Bit $tmp947 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp946.value], p_s->data[j933.value]);
            if ($tmp947.value) {
            {
                goto $l921;
            }
            }
        }
        $l941:;
        int64_t $tmp949 = $tmp936 - j933.value;
        if ($tmp937) goto $l950; else goto $l951;
        $l950:;
        if ((uint64_t) $tmp949 >= 1) goto $l948; else goto $l940;
        $l951:;
        if ((uint64_t) $tmp949 > 1) goto $l948; else goto $l940;
        $l948:;
        j933.value += 1;
        goto $l938;
        $l940:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp954, i912);
        $returnValue903 = ((panda$core$String$Index$nullable) { $tmp954, true });
        return $returnValue903;
    }
    $l921:;
    if ($tmp924) goto $l957; else goto $l958;
    $l957:;
    int64_t $tmp959 = $tmp915 - i912.value;
    if ($tmp917) goto $l960; else goto $l961;
    $l960:;
    if ((uint64_t) $tmp959 >= $tmp916) goto $l956; else goto $l920;
    $l961:;
    if ((uint64_t) $tmp959 > $tmp916) goto $l956; else goto $l920;
    $l958:;
    int64_t $tmp963 = i912.value - $tmp915;
    if ($tmp917) goto $l964; else goto $l965;
    $l964:;
    if ((uint64_t) $tmp963 >= -$tmp916) goto $l956; else goto $l920;
    $l965:;
    if ((uint64_t) $tmp963 > -$tmp916) goto $l956; else goto $l920;
    $l956:;
    i912.value += $tmp916;
    goto $l918;
    $l920:;
    $returnValue903 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue903;
}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Bit $returnValue968;
    panda$core$Matcher* $tmp969;
    panda$core$Bit $tmp971;
    panda$core$Matcher* $tmp970 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
    $tmp969 = $tmp970;
    panda$core$Matcher$matches$R$panda$core$Bit(&$tmp971, $tmp969);
    $returnValue968 = $tmp971;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
    return $returnValue968;
}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$core$Bit $returnValue973;
    panda$core$Matcher* $tmp974;
    panda$core$Matcher* $tmp975 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, self);
    $tmp974 = $tmp975;
    panda$core$Bit $tmp976 = panda$core$Matcher$find$R$panda$core$Bit($tmp974);
    $returnValue973 = $tmp976;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp974));
    return $returnValue973;
}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Matcher* matcher981 = NULL;
    panda$core$Matcher* $tmp982;
    panda$core$Matcher* $tmp983;
    panda$core$Bit $tmp985;
    panda$collections$Array* result989 = NULL;
    panda$collections$Array* $tmp990;
    panda$collections$Array* $tmp991;
    panda$core$Range$LTpanda$core$Int64$GT $tmp993;
    panda$core$Int64 $tmp994;
    panda$core$Int64 $tmp995;
    panda$core$Bit $tmp996;
    panda$core$String* $tmp1010;
    panda$collections$ListView* $returnValue1018;
    panda$collections$ListView* $tmp1019;
    panda$collections$ListView* $tmp1024;
    int $tmp980;
    {
        panda$core$Matcher* $tmp984 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
        $tmp983 = $tmp984;
        $tmp982 = $tmp983;
        matcher981 = $tmp982;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp982));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
        panda$core$Matcher$matches$R$panda$core$Bit(&$tmp985, matcher981);
        if ($tmp985.value) {
        {
            int $tmp988;
            {
                panda$collections$Array* $tmp992 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp992);
                $tmp991 = $tmp992;
                $tmp990 = $tmp991;
                result989 = $tmp990;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp990));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp991));
                panda$core$Int64$init$builtin_int64(&$tmp994, 1);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp995, matcher981);
                panda$core$Bit$init$builtin_bit(&$tmp996, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp993, $tmp994, $tmp995, $tmp996);
                int64_t $tmp998 = $tmp993.min.value;
                panda$core$Int64 i997 = { $tmp998 };
                int64_t $tmp1000 = $tmp993.max.value;
                bool $tmp1001 = $tmp993.inclusive.value;
                if ($tmp1001) goto $l1008; else goto $l1009;
                $l1008:;
                if ($tmp998 <= $tmp1000) goto $l1002; else goto $l1004;
                $l1009:;
                if ($tmp998 < $tmp1000) goto $l1002; else goto $l1004;
                $l1002:;
                {
                    panda$core$String* $tmp1011 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher981, i997);
                    $tmp1010 = $tmp1011;
                    panda$collections$Array$add$panda$collections$Array$T(result989, ((panda$core$Object*) $tmp1010));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1010));
                }
                $l1005:;
                int64_t $tmp1013 = $tmp1000 - i997.value;
                if ($tmp1001) goto $l1014; else goto $l1015;
                $l1014:;
                if ((uint64_t) $tmp1013 >= 1) goto $l1012; else goto $l1004;
                $l1015:;
                if ((uint64_t) $tmp1013 > 1) goto $l1012; else goto $l1004;
                $l1012:;
                i997.value += 1;
                goto $l1002;
                $l1004:;
                $tmp1019 = ((panda$collections$ListView*) result989);
                $returnValue1018 = $tmp1019;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1019));
                $tmp988 = 0;
                goto $l986;
                $l1020:;
                $tmp980 = 0;
                goto $l978;
                $l1021:;
                return $returnValue1018;
            }
            $l986:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result989));
            result989 = NULL;
            switch ($tmp988) {
                case 0: goto $l1020;
            }
            $l1023:;
        }
        }
        $tmp1024 = NULL;
        $returnValue1018 = $tmp1024;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1024));
        $tmp980 = 1;
        goto $l978;
        $l1025:;
        return $returnValue1018;
    }
    $l978:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher981));
    matcher981 = NULL;
    switch ($tmp980) {
        case 0: goto $l1021;
        case 1: goto $l1025;
    }
    $l1027:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue1033;
    panda$core$String* $tmp1034;
    panda$core$MutableString* result1037 = NULL;
    panda$core$MutableString* $tmp1038;
    panda$core$MutableString* $tmp1039;
    panda$core$String$Index index1041;
    panda$core$String$Index$nullable nextIndex1045;
    panda$core$String* $tmp1047;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1048;
    panda$core$Bit $tmp1049;
    panda$core$String* $tmp1051;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1052;
    panda$core$Bit $tmp1053;
    panda$core$String$Index $tmp1055;
    panda$core$String* $tmp1057;
    panda$core$String* $tmp1058;
    int $tmp1030;
    {
        panda$core$Bit $tmp1032 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_search, &$s1031);
        if ($tmp1032.value) {
        {
            $tmp1034 = self;
            $returnValue1033 = $tmp1034;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1034));
            $tmp1030 = 0;
            goto $l1028;
            $l1035:;
            return $returnValue1033;
        }
        }
        panda$core$MutableString* $tmp1040 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1040);
        $tmp1039 = $tmp1040;
        $tmp1038 = $tmp1039;
        result1037 = $tmp1038;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1038));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1039));
        panda$core$String$Index $tmp1042 = panda$core$String$start$R$panda$core$String$Index(self);
        index1041 = $tmp1042;
        $l1043:;
        while (true) {
        {
            panda$core$String$Index$nullable $tmp1046 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index1041);
            nextIndex1045 = $tmp1046;
            if (((panda$core$Bit) { !nextIndex1045.nonnull }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1049, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1048, ((panda$core$String$Index$nullable) { index1041, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1049);
                panda$core$String* $tmp1050 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1048);
                $tmp1047 = $tmp1050;
                panda$core$MutableString$append$panda$core$String(result1037, $tmp1047);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1047));
                goto $l1044;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp1053, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1052, index1041, ((panda$core$String$Index) nextIndex1045.value), $tmp1053);
            panda$core$String* $tmp1054 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1052);
            $tmp1051 = $tmp1054;
            panda$core$MutableString$append$panda$core$String(result1037, $tmp1051);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1051));
            panda$core$MutableString$append$panda$core$String(result1037, p_replacement);
            panda$core$Int64 $tmp1056 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1045.value).value, p_search->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1055, $tmp1056);
            index1041 = $tmp1055;
        }
        }
        $l1044:;
        panda$core$String* $tmp1059 = panda$core$MutableString$finish$R$panda$core$String(result1037);
        $tmp1058 = $tmp1059;
        $tmp1057 = $tmp1058;
        $returnValue1033 = $tmp1057;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1057));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1058));
        $tmp1030 = 1;
        goto $l1028;
        $l1060:;
        return $returnValue1033;
    }
    $l1028:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1037));
    result1037 = NULL;
    switch ($tmp1030) {
        case 1: goto $l1060;
        case 0: goto $l1035;
    }
    $l1062:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue1063;
    panda$core$String* $tmp1064;
    panda$core$String* $tmp1065;
    panda$core$Bit $tmp1066;
    panda$core$Bit$init$builtin_bit(&$tmp1066, true);
    panda$core$String* $tmp1067 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(self, p_search, p_replacement, $tmp1066);
    $tmp1065 = $tmp1067;
    $tmp1064 = $tmp1065;
    $returnValue1063 = $tmp1064;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1064));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1065));
    return $returnValue1063;
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences) {
    panda$core$MutableString* result1072 = NULL;
    panda$core$MutableString* $tmp1073;
    panda$core$MutableString* $tmp1074;
    panda$core$Matcher* matcher1076 = NULL;
    panda$core$Matcher* $tmp1077;
    panda$core$Matcher* $tmp1078;
    panda$core$String* $returnValue1084;
    panda$core$String* $tmp1085;
    panda$core$String* $tmp1086;
    int $tmp1071;
    {
        panda$core$MutableString* $tmp1075 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1075);
        $tmp1074 = $tmp1075;
        $tmp1073 = $tmp1074;
        result1072 = $tmp1073;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1073));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1074));
        panda$core$Matcher* $tmp1079 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1078 = $tmp1079;
        $tmp1077 = $tmp1078;
        matcher1076 = $tmp1077;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1077));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1078));
        $l1080:;
        panda$core$Bit $tmp1083 = panda$core$Matcher$find$R$panda$core$Bit(matcher1076);
        bool $tmp1082 = $tmp1083.value;
        if (!$tmp1082) goto $l1081;
        {
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1076, result1072, p_replacement, p_allowGroupReferences);
        }
        goto $l1080;
        $l1081:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1076, result1072);
        panda$core$String* $tmp1087 = panda$core$MutableString$finish$R$panda$core$String(result1072);
        $tmp1086 = $tmp1087;
        $tmp1085 = $tmp1086;
        $returnValue1084 = $tmp1085;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1085));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1086));
        $tmp1071 = 0;
        goto $l1069;
        $l1088:;
        return $returnValue1084;
    }
    $l1069:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1076));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1072));
    result1072 = NULL;
    matcher1076 = NULL;
    switch ($tmp1071) {
        case 0: goto $l1088;
    }
    $l1090:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result1094 = NULL;
    panda$core$MutableString* $tmp1095;
    panda$core$MutableString* $tmp1096;
    panda$core$Matcher* matcher1098 = NULL;
    panda$core$Matcher* $tmp1099;
    panda$core$Matcher* $tmp1100;
    panda$core$String* $tmp1106;
    panda$core$Object* $tmp1107;
    panda$core$String* $tmp1108;
    panda$core$Int64 $tmp1109;
    panda$core$Object* $tmp1111;
    panda$core$Bit $tmp1116;
    panda$core$String* $returnValue1117;
    panda$core$String* $tmp1118;
    panda$core$String* $tmp1119;
    int $tmp1093;
    {
        panda$core$MutableString* $tmp1097 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1097);
        $tmp1096 = $tmp1097;
        $tmp1095 = $tmp1096;
        result1094 = $tmp1095;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1095));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1096));
        panda$core$Matcher* $tmp1101 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1100 = $tmp1101;
        $tmp1099 = $tmp1100;
        matcher1098 = $tmp1099;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1099));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1100));
        $l1102:;
        panda$core$Bit $tmp1105 = panda$core$Matcher$find$R$panda$core$Bit(matcher1098);
        bool $tmp1104 = $tmp1105.value;
        if (!$tmp1104) goto $l1103;
        {
            panda$core$Int64$init$builtin_int64(&$tmp1109, 0);
            panda$core$String* $tmp1110 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher1098, $tmp1109);
            $tmp1108 = $tmp1110;
            if (p_replacement->target) {
                $tmp1111 = (($fn1112) p_replacement->pointer)(p_replacement->target, $tmp1108);
            } else {
                $tmp1111 = (($fn1113) p_replacement->pointer)($tmp1108);
            }
            $tmp1107 = $tmp1111;
            panda$core$String* $tmp1115 = (($fn1114) $tmp1107->$class->vtable[0])($tmp1107);
            $tmp1106 = $tmp1115;
            panda$core$Bit$init$builtin_bit(&$tmp1116, false);
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1098, result1094, $tmp1106, $tmp1116);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1106));
            panda$core$Panda$unref$panda$core$Object($tmp1107);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1108));
        }
        goto $l1102;
        $l1103:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1098, result1094);
        panda$core$String* $tmp1120 = panda$core$MutableString$convert$R$panda$core$String(result1094);
        $tmp1119 = $tmp1120;
        $tmp1118 = $tmp1119;
        $returnValue1117 = $tmp1118;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1118));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1119));
        $tmp1093 = 0;
        goto $l1091;
        $l1121:;
        return $returnValue1117;
    }
    $l1091:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1098));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1094));
    result1094 = NULL;
    matcher1098 = NULL;
    switch ($tmp1093) {
        case 0: goto $l1121;
    }
    $l1123:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result1127 = NULL;
    panda$core$MutableString* $tmp1128;
    panda$core$MutableString* $tmp1129;
    panda$core$Matcher* matcher1131 = NULL;
    panda$core$Matcher* $tmp1132;
    panda$core$Matcher* $tmp1133;
    panda$collections$Array* groups1142 = NULL;
    panda$collections$Array* $tmp1143;
    panda$collections$Array* $tmp1144;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1146;
    panda$core$Int64 $tmp1147;
    panda$core$Int64 $tmp1148;
    panda$core$Bit $tmp1149;
    panda$core$String* $tmp1163;
    panda$core$String* $tmp1171;
    panda$core$Object* $tmp1172;
    panda$core$Object* $tmp1173;
    panda$core$Bit $tmp1178;
    panda$core$String* $returnValue1180;
    panda$core$String* $tmp1181;
    panda$core$String* $tmp1182;
    int $tmp1126;
    {
        panda$core$MutableString* $tmp1130 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1130);
        $tmp1129 = $tmp1130;
        $tmp1128 = $tmp1129;
        result1127 = $tmp1128;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1129));
        panda$core$Matcher* $tmp1134 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1133 = $tmp1134;
        $tmp1132 = $tmp1133;
        matcher1131 = $tmp1132;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1132));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1133));
        $l1135:;
        panda$core$Bit $tmp1138 = panda$core$Matcher$find$R$panda$core$Bit(matcher1131);
        bool $tmp1137 = $tmp1138.value;
        if (!$tmp1137) goto $l1136;
        {
            int $tmp1141;
            {
                panda$collections$Array* $tmp1145 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1145);
                $tmp1144 = $tmp1145;
                $tmp1143 = $tmp1144;
                groups1142 = $tmp1143;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1143));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1144));
                panda$core$Int64$init$builtin_int64(&$tmp1147, 0);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1148, matcher1131);
                panda$core$Bit$init$builtin_bit(&$tmp1149, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1146, $tmp1147, $tmp1148, $tmp1149);
                int64_t $tmp1151 = $tmp1146.min.value;
                panda$core$Int64 i1150 = { $tmp1151 };
                int64_t $tmp1153 = $tmp1146.max.value;
                bool $tmp1154 = $tmp1146.inclusive.value;
                if ($tmp1154) goto $l1161; else goto $l1162;
                $l1161:;
                if ($tmp1151 <= $tmp1153) goto $l1155; else goto $l1157;
                $l1162:;
                if ($tmp1151 < $tmp1153) goto $l1155; else goto $l1157;
                $l1155:;
                {
                    panda$core$String* $tmp1164 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher1131, i1150);
                    $tmp1163 = $tmp1164;
                    panda$collections$Array$add$panda$collections$Array$T(groups1142, ((panda$core$Object*) $tmp1163));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1163));
                }
                $l1158:;
                int64_t $tmp1166 = $tmp1153 - i1150.value;
                if ($tmp1154) goto $l1167; else goto $l1168;
                $l1167:;
                if ((uint64_t) $tmp1166 >= 1) goto $l1165; else goto $l1157;
                $l1168:;
                if ((uint64_t) $tmp1166 > 1) goto $l1165; else goto $l1157;
                $l1165:;
                i1150.value += 1;
                goto $l1155;
                $l1157:;
                if (p_replacement->target) {
                    $tmp1173 = (($fn1174) p_replacement->pointer)(p_replacement->target, ((panda$collections$ListView*) groups1142));
                } else {
                    $tmp1173 = (($fn1175) p_replacement->pointer)(((panda$collections$ListView*) groups1142));
                }
                $tmp1172 = $tmp1173;
                panda$core$String* $tmp1177 = (($fn1176) $tmp1172->$class->vtable[0])($tmp1172);
                $tmp1171 = $tmp1177;
                panda$core$Bit$init$builtin_bit(&$tmp1178, false);
                panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1131, result1127, $tmp1171, $tmp1178);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1171));
                panda$core$Panda$unref$panda$core$Object($tmp1172);
            }
            $tmp1141 = -1;
            goto $l1139;
            $l1139:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) groups1142));
            groups1142 = NULL;
            switch ($tmp1141) {
                case -1: goto $l1179;
            }
            $l1179:;
        }
        goto $l1135;
        $l1136:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1131, result1127);
        panda$core$String* $tmp1183 = panda$core$MutableString$convert$R$panda$core$String(result1127);
        $tmp1182 = $tmp1183;
        $tmp1181 = $tmp1182;
        $returnValue1180 = $tmp1181;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1181));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1182));
        $tmp1126 = 0;
        goto $l1124;
        $l1184:;
        return $returnValue1180;
    }
    $l1124:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1131));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1127));
    result1127 = NULL;
    matcher1131 = NULL;
    switch ($tmp1126) {
        case 0: goto $l1184;
    }
    $l1186:;
    abort();
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle) {
    panda$collections$Iterator* $returnValue1187;
    panda$collections$Iterator* $tmp1188;
    panda$collections$Iterator* $tmp1189;
    panda$core$Bit $tmp1190;
    panda$core$Bit$init$builtin_bit(&$tmp1190, false);
    panda$collections$Iterator* $tmp1191 = panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(self, p_needle, $tmp1190);
    $tmp1189 = $tmp1191;
    $tmp1188 = $tmp1189;
    $returnValue1187 = $tmp1188;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1188));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1189));
    return $returnValue1187;
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1193;
    panda$collections$Iterator* $tmp1194;
    panda$core$String$MatchIterator* $tmp1195;
    panda$core$String$MatchIterator* $tmp1196 = (panda$core$String$MatchIterator*) pandaObjectAlloc(46, (panda$core$Class*) &panda$core$String$MatchIterator$class);
    panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit($tmp1196, self, p_needle, p_overlapping);
    $tmp1195 = $tmp1196;
    $tmp1194 = ((panda$collections$Iterator*) $tmp1195);
    $returnValue1193 = $tmp1194;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1194));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1195));
    return $returnValue1193;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$collections$Iterator* $returnValue1198;
    panda$collections$Iterator* $tmp1199;
    panda$collections$Iterator* $tmp1200;
    panda$core$Bit $tmp1201;
    panda$core$Bit$init$builtin_bit(&$tmp1201, false);
    panda$collections$Iterator* $tmp1202 = panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(self, p_needle, $tmp1201);
    $tmp1200 = $tmp1202;
    $tmp1199 = $tmp1200;
    $returnValue1198 = $tmp1199;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1199));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1200));
    return $returnValue1198;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1204;
    panda$collections$Iterator* $tmp1205;
    panda$core$String$RegexMatchIterator* $tmp1206;
    panda$core$String$RegexMatchIterator* $tmp1207 = (panda$core$String$RegexMatchIterator*) pandaObjectAlloc(34, (panda$core$Class*) &panda$core$String$RegexMatchIterator$class);
    panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit($tmp1207, self, p_needle, p_overlapping);
    $tmp1206 = $tmp1207;
    $tmp1205 = ((panda$collections$Iterator*) $tmp1206);
    $returnValue1204 = $tmp1205;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1205));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1206));
    return $returnValue1204;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1209;
    panda$core$String$Index $tmp1210;
    panda$core$Int64 $tmp1211;
    panda$core$Int64$init$builtin_int64(&$tmp1211, 0);
    panda$core$String$Index$init$panda$core$Int64(&$tmp1210, $tmp1211);
    $returnValue1209 = $tmp1210;
    return $returnValue1209;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1213;
    panda$core$String$Index $tmp1214;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1214, self->_length);
    $returnValue1213 = $tmp1214;
    return $returnValue1213;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c1220;
    panda$core$Bit $tmp1222;
    panda$core$String$Index $returnValue1224;
    panda$core$String$Index $tmp1225;
    panda$core$Int64 $tmp1226;
    panda$core$Bit $tmp1229;
    panda$core$String$Index $tmp1231;
    panda$core$Int64 $tmp1232;
    panda$core$Bit $tmp1235;
    panda$core$String$Index $tmp1237;
    panda$core$Int64 $tmp1238;
    panda$core$String$Index $tmp1241;
    panda$core$Int64 $tmp1242;
    panda$core$Bit $tmp1216 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    if ($tmp1216.value) goto $l1217; else goto $l1218;
    $l1218:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1219, (panda$core$Int64) { 1156 });
    abort();
    $l1217:;
    int64_t $tmp1221 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c1220 = $tmp1221;
    bool $tmp1223 = c1220 >= 240;
    panda$core$Bit$init$builtin_bit(&$tmp1222, $tmp1223);
    if ($tmp1222.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1226, 4);
        panda$core$Int64 $tmp1227 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1226);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1225, $tmp1227);
        $returnValue1224 = $tmp1225;
        return $returnValue1224;
    }
    }
    bool $tmp1230 = c1220 >= 224;
    panda$core$Bit$init$builtin_bit(&$tmp1229, $tmp1230);
    if ($tmp1229.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1232, 3);
        panda$core$Int64 $tmp1233 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1232);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1231, $tmp1233);
        $returnValue1224 = $tmp1231;
        return $returnValue1224;
    }
    }
    bool $tmp1236 = c1220 >= 192;
    panda$core$Bit$init$builtin_bit(&$tmp1235, $tmp1236);
    if ($tmp1235.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1238, 2);
        panda$core$Int64 $tmp1239 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1238);
        panda$core$String$Index$init$panda$core$Int64(&$tmp1237, $tmp1239);
        $returnValue1224 = $tmp1237;
        return $returnValue1224;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1242, 1);
    panda$core$Int64 $tmp1243 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1242);
    panda$core$String$Index$init$panda$core$Int64(&$tmp1241, $tmp1243);
    $returnValue1224 = $tmp1241;
    return $returnValue1224;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 $tmp1245;
    panda$core$Int64 newValue1250;
    panda$core$Int64 $tmp1251;
    panda$core$Bit $tmp1256;
    panda$core$Int64 $tmp1263;
    panda$core$String$Index $returnValue1265;
    panda$core$String$Index $tmp1266;
    panda$core$Int64$init$builtin_int64(&$tmp1245, 0);
    panda$core$Bit $tmp1246 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, $tmp1245);
    if ($tmp1246.value) goto $l1247; else goto $l1248;
    $l1248:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1249, (panda$core$Int64) { 1177 });
    abort();
    $l1247:;
    panda$core$Int64$init$builtin_int64(&$tmp1251, 1);
    panda$core$Int64 $tmp1252 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp1251);
    newValue1250 = $tmp1252;
    $l1253:;
    int64_t $tmp1258 = ((int64_t) self->data[newValue1250.value].value) & 255;
    bool $tmp1259 = $tmp1258 >= 128;
    bool $tmp1257 = $tmp1259;
    if (!$tmp1257) goto $l1260;
    int64_t $tmp1261 = ((int64_t) self->data[newValue1250.value].value) & 255;
    bool $tmp1262 = $tmp1261 < 192;
    $tmp1257 = $tmp1262;
    $l1260:;
    panda$core$Bit$init$builtin_bit(&$tmp1256, $tmp1257);
    bool $tmp1255 = $tmp1256.value;
    if (!$tmp1255) goto $l1254;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1263, 1);
        panda$core$Int64 $tmp1264 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue1250, $tmp1263);
        newValue1250 = $tmp1264;
    }
    goto $l1253;
    $l1254:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1266, newValue1250);
    $returnValue1265 = $tmp1266;
    return $returnValue1265;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result1268;
    panda$core$Int64 $tmp1269;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1271;
    panda$core$Int64 $tmp1272;
    panda$core$Bit $tmp1273;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1294;
    panda$core$Int64 $tmp1295;
    panda$core$Int64 $tmp1296;
    panda$core$Bit $tmp1297;
    panda$core$String$Index $returnValue1328;
    result1268 = p_index;
    panda$core$Int64$init$builtin_int64(&$tmp1269, 0);
    panda$core$Bit $tmp1270 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, $tmp1269);
    if ($tmp1270.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1272, 0);
        panda$core$Bit$init$builtin_bit(&$tmp1273, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1271, $tmp1272, p_offset, $tmp1273);
        int64_t $tmp1275 = $tmp1271.min.value;
        panda$core$Int64 i1274 = { $tmp1275 };
        int64_t $tmp1277 = $tmp1271.max.value;
        bool $tmp1278 = $tmp1271.inclusive.value;
        if ($tmp1278) goto $l1285; else goto $l1286;
        $l1285:;
        if ($tmp1275 <= $tmp1277) goto $l1279; else goto $l1281;
        $l1286:;
        if ($tmp1275 < $tmp1277) goto $l1279; else goto $l1281;
        $l1279:;
        {
            panda$core$String$Index $tmp1287 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result1268);
            result1268 = $tmp1287;
        }
        $l1282:;
        int64_t $tmp1289 = $tmp1277 - i1274.value;
        if ($tmp1278) goto $l1290; else goto $l1291;
        $l1290:;
        if ((uint64_t) $tmp1289 >= 1) goto $l1288; else goto $l1281;
        $l1291:;
        if ((uint64_t) $tmp1289 > 1) goto $l1288; else goto $l1281;
        $l1288:;
        i1274.value += 1;
        goto $l1279;
        $l1281:;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1295, 0);
        panda$core$Int64$init$builtin_int64(&$tmp1296, -1);
        panda$core$Bit$init$builtin_bit(&$tmp1297, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1294, $tmp1295, p_offset, $tmp1296, $tmp1297);
        int64_t $tmp1299 = $tmp1294.start.value;
        panda$core$Int64 i1298 = { $tmp1299 };
        int64_t $tmp1301 = $tmp1294.end.value;
        int64_t $tmp1302 = $tmp1294.step.value;
        bool $tmp1303 = $tmp1294.inclusive.value;
        bool $tmp1310 = $tmp1302 > 0;
        if ($tmp1310) goto $l1308; else goto $l1309;
        $l1308:;
        if ($tmp1303) goto $l1311; else goto $l1312;
        $l1311:;
        if ($tmp1299 <= $tmp1301) goto $l1304; else goto $l1306;
        $l1312:;
        if ($tmp1299 < $tmp1301) goto $l1304; else goto $l1306;
        $l1309:;
        if ($tmp1303) goto $l1313; else goto $l1314;
        $l1313:;
        if ($tmp1299 >= $tmp1301) goto $l1304; else goto $l1306;
        $l1314:;
        if ($tmp1299 > $tmp1301) goto $l1304; else goto $l1306;
        $l1304:;
        {
            panda$core$String$Index $tmp1316 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result1268);
            result1268 = $tmp1316;
        }
        $l1307:;
        if ($tmp1310) goto $l1318; else goto $l1319;
        $l1318:;
        int64_t $tmp1320 = $tmp1301 - i1298.value;
        if ($tmp1303) goto $l1321; else goto $l1322;
        $l1321:;
        if ((uint64_t) $tmp1320 >= $tmp1302) goto $l1317; else goto $l1306;
        $l1322:;
        if ((uint64_t) $tmp1320 > $tmp1302) goto $l1317; else goto $l1306;
        $l1319:;
        int64_t $tmp1324 = i1298.value - $tmp1301;
        if ($tmp1303) goto $l1325; else goto $l1326;
        $l1325:;
        if ((uint64_t) $tmp1324 >= -$tmp1302) goto $l1317; else goto $l1306;
        $l1326:;
        if ((uint64_t) $tmp1324 > -$tmp1302) goto $l1317; else goto $l1306;
        $l1317:;
        i1298.value += $tmp1302;
        goto $l1304;
        $l1306:;
    }
    }
    $returnValue1328 = result1268;
    return $returnValue1328;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1330;
    panda$core$String* $tmp1331;
    panda$core$String* $tmp1332;
    panda$core$Char32 $tmp1333;
    panda$core$Int32 $tmp1334;
    panda$core$Int32$init$builtin_int32(&$tmp1334, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1333, $tmp1334);
    panda$core$String* $tmp1335 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1333);
    $tmp1332 = $tmp1335;
    $tmp1331 = $tmp1332;
    $returnValue1330 = $tmp1331;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1331));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1332));
    return $returnValue1330;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1339;
    panda$core$String* $tmp1340;
    panda$core$String* $tmp1342;
    panda$core$String* $tmp1343;
    panda$core$String* $tmp1344;
    panda$core$Int64 $tmp1337 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1338 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1337, p_width);
    if ($tmp1338.value) {
    {
        $tmp1340 = self;
        $returnValue1339 = $tmp1340;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
        return $returnValue1339;
    }
    }
    panda$core$Int64 $tmp1345 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1346 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1345);
    panda$core$String* $tmp1347 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1346);
    $tmp1344 = $tmp1347;
    panda$core$String* $tmp1348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp1344);
    $tmp1343 = $tmp1348;
    $tmp1342 = $tmp1343;
    $returnValue1339 = $tmp1342;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1342));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1344));
    return $returnValue1339;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1350;
    panda$core$String* $tmp1351;
    panda$core$String* $tmp1352;
    panda$core$Char32 $tmp1353;
    panda$core$Int32 $tmp1354;
    panda$core$Int32$init$builtin_int32(&$tmp1354, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1353, $tmp1354);
    panda$core$String* $tmp1355 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1353);
    $tmp1352 = $tmp1355;
    $tmp1351 = $tmp1352;
    $returnValue1350 = $tmp1351;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1351));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
    return $returnValue1350;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1359;
    panda$core$String* $tmp1360;
    panda$core$String* $tmp1362;
    panda$core$String* $tmp1363;
    panda$core$String* $tmp1364;
    panda$core$Int64 $tmp1357 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1358 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1357, p_width);
    if ($tmp1358.value) {
    {
        $tmp1360 = self;
        $returnValue1359 = $tmp1360;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1360));
        return $returnValue1359;
    }
    }
    panda$core$Int64 $tmp1365 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1366 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1365);
    panda$core$String* $tmp1367 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1366);
    $tmp1364 = $tmp1367;
    panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1364, self);
    $tmp1363 = $tmp1368;
    $tmp1362 = $tmp1363;
    $returnValue1359 = $tmp1362;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1362));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1363));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1364));
    return $returnValue1359;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1370;
    panda$core$String* $tmp1371;
    panda$core$String* $tmp1372;
    panda$core$Char32 $tmp1373;
    panda$core$Int32 $tmp1374;
    panda$core$Int32$init$builtin_int32(&$tmp1374, 32);
    panda$core$Char32$init$panda$core$Int32(&$tmp1373, $tmp1374);
    panda$core$String* $tmp1375 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1373);
    $tmp1372 = $tmp1375;
    $tmp1371 = $tmp1372;
    $returnValue1370 = $tmp1371;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
    return $returnValue1370;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1379;
    panda$core$String* $tmp1380;
    panda$core$Int64 pad1382;
    panda$core$Int64 left1385;
    panda$core$Int64 $tmp1386;
    panda$core$Int64 right1388;
    panda$core$String* $tmp1390;
    panda$core$String* $tmp1391;
    panda$core$String* $tmp1392;
    panda$core$String* $tmp1393;
    panda$core$String* $tmp1396;
    panda$core$Int64 $tmp1377 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1378 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1377, p_width);
    if ($tmp1378.value) {
    {
        $tmp1380 = self;
        $returnValue1379 = $tmp1380;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1380));
        return $returnValue1379;
    }
    }
    panda$core$Int64 $tmp1383 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1384 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1383);
    pad1382 = $tmp1384;
    panda$core$Int64$init$builtin_int64(&$tmp1386, 2);
    panda$core$Int64 $tmp1387 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad1382, $tmp1386);
    left1385 = $tmp1387;
    panda$core$Int64 $tmp1389 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad1382, left1385);
    right1388 = $tmp1389;
    panda$core$String* $tmp1394 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left1385);
    $tmp1393 = $tmp1394;
    panda$core$String* $tmp1395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1393, self);
    $tmp1392 = $tmp1395;
    panda$core$String* $tmp1397 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right1388);
    $tmp1396 = $tmp1397;
    panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1392, $tmp1396);
    $tmp1391 = $tmp1398;
    $tmp1390 = $tmp1391;
    $returnValue1379 = $tmp1390;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1390));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1391));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1396));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1392));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1393));
    return $returnValue1379;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $returnValue1400;
    panda$collections$Array* $tmp1401;
    panda$collections$Array* $tmp1402;
    panda$core$Int64 $tmp1403;
    panda$core$Int64$init$builtin_int64(&$tmp1403, 9223372036854775807);
    panda$collections$Array* $tmp1404 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, $tmp1403);
    $tmp1402 = $tmp1404;
    $tmp1401 = $tmp1402;
    $returnValue1400 = $tmp1401;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1401));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
    return $returnValue1400;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1409 = NULL;
    panda$collections$Array* $tmp1410;
    panda$collections$Array* $tmp1411;
    panda$core$String$Index index1413;
    panda$core$String$Index$nullable nextIndex1417;
    panda$core$Int64 $tmp1418;
    panda$core$Int64 $tmp1424;
    panda$core$String* $tmp1428;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1429;
    panda$core$Bit $tmp1430;
    panda$core$String* $tmp1432;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1433;
    panda$core$Bit $tmp1434;
    panda$core$String$Index $tmp1436;
    panda$collections$Array* $returnValue1438;
    panda$collections$Array* $tmp1439;
    int $tmp1408;
    {
        panda$collections$Array* $tmp1412 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1412);
        $tmp1411 = $tmp1412;
        $tmp1410 = $tmp1411;
        result1409 = $tmp1410;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1410));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1411));
        panda$core$String$Index $tmp1414 = panda$core$String$start$R$panda$core$String$Index(self);
        index1413 = $tmp1414;
        $l1415:;
        while (true) {
        {
            memset(&nextIndex1417, 0, sizeof(nextIndex1417));
            panda$core$Int64$init$builtin_int64(&$tmp1418, 0);
            panda$core$Bit $tmp1419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, $tmp1418);
            if ($tmp1419.value) {
            {
                panda$core$String$Index $tmp1420 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1413);
                nextIndex1417 = ((panda$core$String$Index$nullable) { $tmp1420, true });
            }
            }
            else {
            {
                panda$core$String$Index$nullable $tmp1421 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1413);
                nextIndex1417 = $tmp1421;
            }
            }
            bool $tmp1422 = ((panda$core$Bit) { !nextIndex1417.nonnull }).value;
            if ($tmp1422) goto $l1423;
            panda$core$Int64$init$builtin_int64(&$tmp1424, 1);
            panda$core$Int64 $tmp1425 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, $tmp1424);
            panda$core$Bit $tmp1426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1409->count, $tmp1425);
            $tmp1422 = $tmp1426.value;
            $l1423:;
            panda$core$Bit $tmp1427 = { $tmp1422 };
            if ($tmp1427.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1430, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1429, ((panda$core$String$Index$nullable) { index1413, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1430);
                panda$core$String* $tmp1431 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1429);
                $tmp1428 = $tmp1431;
                panda$collections$Array$add$panda$collections$Array$T(result1409, ((panda$core$Object*) $tmp1428));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1428));
                goto $l1416;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp1434, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1433, index1413, ((panda$core$String$Index) nextIndex1417.value), $tmp1434);
            panda$core$String* $tmp1435 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1433);
            $tmp1432 = $tmp1435;
            panda$collections$Array$add$panda$collections$Array$T(result1409, ((panda$core$Object*) $tmp1432));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1432));
            panda$core$Int64 $tmp1437 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1417.value).value, p_delimiter->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1436, $tmp1437);
            index1413 = $tmp1436;
        }
        }
        $l1416:;
        $tmp1439 = result1409;
        $returnValue1438 = $tmp1439;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1439));
        $tmp1408 = 0;
        goto $l1406;
        $l1440:;
        return $returnValue1438;
    }
    $l1406:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1409));
    result1409 = NULL;
    switch ($tmp1408) {
        case 0: goto $l1440;
    }
    $l1442:;
    abort();
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$core$Int64 $tmp1443;
    panda$collections$Array* result1452 = NULL;
    panda$collections$Array* $tmp1453;
    panda$collections$Array* $tmp1454;
    panda$core$Matcher* matcher1456 = NULL;
    panda$core$Matcher* $tmp1457;
    panda$core$Matcher* $tmp1458;
    panda$core$String$Index index1460;
    panda$core$Bit found1464;
    panda$core$Int64 $tmp1469;
    panda$core$String* $tmp1473;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1474;
    panda$core$Bit $tmp1475;
    panda$core$String$Index start1477;
    panda$core$String$Index $tmp1478;
    panda$core$String* $tmp1479;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1480;
    panda$core$Bit $tmp1481;
    panda$core$String$Index $tmp1483;
    panda$core$String$Index $tmp1484;
    panda$collections$ListView* $returnValue1486;
    panda$collections$ListView* $tmp1487;
    panda$core$Int64$init$builtin_int64(&$tmp1443, 0);
    panda$core$Bit $tmp1444 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_maxResults, $tmp1443);
    if ($tmp1444.value) goto $l1445; else goto $l1446;
    $l1446:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1447, (panda$core$Int64) { 1356 }, &$s1448);
    abort();
    $l1445:;
    int $tmp1451;
    {
        panda$collections$Array* $tmp1455 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1455);
        $tmp1454 = $tmp1455;
        $tmp1453 = $tmp1454;
        result1452 = $tmp1453;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1453));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1454));
        panda$core$Matcher* $tmp1459 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_delimiter, self);
        $tmp1458 = $tmp1459;
        $tmp1457 = $tmp1458;
        matcher1456 = $tmp1457;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1457));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1458));
        panda$core$String$Index $tmp1461 = panda$core$String$start$R$panda$core$String$Index(self);
        index1460 = $tmp1461;
        $l1462:;
        while (true) {
        {
            panda$core$Bit $tmp1465 = panda$core$Matcher$find$R$panda$core$Bit(matcher1456);
            found1464 = $tmp1465;
            panda$core$Bit $tmp1467 = panda$core$Bit$$NOT$R$panda$core$Bit(found1464);
            bool $tmp1466 = $tmp1467.value;
            if ($tmp1466) goto $l1468;
            panda$core$Int64$init$builtin_int64(&$tmp1469, 1);
            panda$core$Int64 $tmp1470 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, $tmp1469);
            panda$core$Bit $tmp1471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1452->count, $tmp1470);
            $tmp1466 = $tmp1471.value;
            $l1468:;
            panda$core$Bit $tmp1472 = { $tmp1466 };
            if ($tmp1472.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1475, false);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1474, ((panda$core$String$Index$nullable) { index1460, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1475);
                panda$core$String* $tmp1476 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1474);
                $tmp1473 = $tmp1476;
                panda$collections$Array$add$panda$collections$Array$T(result1452, ((panda$core$Object*) $tmp1473));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1473));
                goto $l1463;
            }
            }
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1478, matcher1456);
            start1477 = $tmp1478;
            panda$core$Bit$init$builtin_bit(&$tmp1481, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1480, index1460, start1477, $tmp1481);
            panda$core$String* $tmp1482 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1480);
            $tmp1479 = $tmp1482;
            panda$collections$Array$add$panda$collections$Array$T(result1452, ((panda$core$Object*) $tmp1479));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1479));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1484, matcher1456);
            panda$core$Int64 $tmp1485 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(start1477.value, $tmp1484.value);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1483, $tmp1485);
            index1460 = $tmp1483;
        }
        }
        $l1463:;
        $tmp1487 = ((panda$collections$ListView*) result1452);
        $returnValue1486 = $tmp1487;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1487));
        $tmp1451 = 0;
        goto $l1449;
        $l1488:;
        return $returnValue1486;
    }
    $l1449:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1456));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1452));
    result1452 = NULL;
    matcher1456 = NULL;
    switch ($tmp1451) {
        case 0: goto $l1488;
    }
    $l1490:;
    abort();
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter) {
    panda$collections$ListView* $returnValue1491;
    panda$collections$ListView* $tmp1492;
    panda$collections$ListView* $tmp1493;
    panda$core$Int64 $tmp1494;
    panda$core$Int64$init$builtin_int64(&$tmp1494, 9223372036854775807);
    panda$collections$ListView* $tmp1495 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(self, p_delimiter, $tmp1494);
    $tmp1493 = $tmp1495;
    $tmp1492 = $tmp1493;
    $returnValue1491 = $tmp1492;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1492));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
    return $returnValue1491;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 $tmp1497;
    panda$core$Int64$nullable $returnValue1499;
    panda$core$Int64 result1501;
    panda$core$Int64 $tmp1502;
    panda$core$Int64 start1503;
    panda$core$Int64 $tmp1504;
    panda$core$Char8 $tmp1505;
    panda$core$UInt8 $tmp1506;
    panda$core$Int64 $tmp1508;
    panda$core$Int64 $tmp1509;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1510;
    panda$core$Bit $tmp1511;
    panda$core$Int64 digit1525;
    panda$core$Int64 $tmp1526;
    panda$core$Int64 $tmp1527;
    panda$core$Int64 $tmp1530;
    panda$core$Int64 $tmp1533;
    panda$core$Int64 $tmp1537;
    panda$core$Int64 $tmp1546;
    panda$core$Char8 $tmp1547;
    panda$core$UInt8 $tmp1548;
    panda$core$Int64$init$builtin_int64(&$tmp1497, 0);
    panda$core$Bit $tmp1498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp1497);
    if ($tmp1498.value) {
    {
        $returnValue1499 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue1499;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1502, 0);
    result1501 = $tmp1502;
    memset(&start1503, 0, sizeof(start1503));
    panda$core$Int64$init$builtin_int64(&$tmp1504, 0);
    panda$core$UInt8$init$builtin_uint8(&$tmp1506, 45);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1505, $tmp1506);
    panda$core$Bit $tmp1507 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp1504.value], $tmp1505);
    if ($tmp1507.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1508, 1);
        start1503 = $tmp1508;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1509, 0);
        start1503 = $tmp1509;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1511, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1510, start1503, self->_length, $tmp1511);
    int64_t $tmp1513 = $tmp1510.min.value;
    panda$core$Int64 i1512 = { $tmp1513 };
    int64_t $tmp1515 = $tmp1510.max.value;
    bool $tmp1516 = $tmp1510.inclusive.value;
    if ($tmp1516) goto $l1523; else goto $l1524;
    $l1523:;
    if ($tmp1513 <= $tmp1515) goto $l1517; else goto $l1519;
    $l1524:;
    if ($tmp1513 < $tmp1515) goto $l1517; else goto $l1519;
    $l1517:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1526, ((int64_t) self->data[i1512.value].value));
        panda$core$Int64$init$builtin_int64(&$tmp1527, 48);
        panda$core$Int64 $tmp1528 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1526, $tmp1527);
        digit1525 = $tmp1528;
        panda$core$Int64$init$builtin_int64(&$tmp1530, 0);
        panda$core$Bit $tmp1531 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1525, $tmp1530);
        bool $tmp1529 = $tmp1531.value;
        if ($tmp1529) goto $l1532;
        panda$core$Int64$init$builtin_int64(&$tmp1533, 9);
        panda$core$Bit $tmp1534 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1525, $tmp1533);
        $tmp1529 = $tmp1534.value;
        $l1532:;
        panda$core$Bit $tmp1535 = { $tmp1529 };
        if ($tmp1535.value) {
        {
            $returnValue1499 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue1499;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1537, 10);
        panda$core$Int64 $tmp1538 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1501, $tmp1537);
        panda$core$Int64 $tmp1539 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1538, digit1525);
        result1501 = $tmp1539;
    }
    $l1520:;
    int64_t $tmp1541 = $tmp1515 - i1512.value;
    if ($tmp1516) goto $l1542; else goto $l1543;
    $l1542:;
    if ((uint64_t) $tmp1541 >= 1) goto $l1540; else goto $l1519;
    $l1543:;
    if ((uint64_t) $tmp1541 > 1) goto $l1540; else goto $l1519;
    $l1540:;
    i1512.value += 1;
    goto $l1517;
    $l1519:;
    panda$core$Int64$init$builtin_int64(&$tmp1546, 0);
    panda$core$UInt8$init$builtin_uint8(&$tmp1548, 45);
    panda$core$Char8$init$panda$core$UInt8(&$tmp1547, $tmp1548);
    panda$core$Bit $tmp1549 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp1546.value], $tmp1547);
    if ($tmp1549.value) {
    {
        panda$core$Int64 $tmp1550 = panda$core$Int64$$SUB$R$panda$core$Int64(result1501);
        result1501 = $tmp1550;
    }
    }
    $returnValue1499 = ((panda$core$Int64$nullable) { result1501, true });
    return $returnValue1499;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$Int64 $tmp1552;
    panda$core$UInt64$nullable $returnValue1554;
    panda$core$UInt64 result1556;
    panda$core$UInt64 $tmp1557;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1558;
    panda$core$Int64 $tmp1559;
    panda$core$Bit $tmp1560;
    panda$core$UInt64 digit1574;
    panda$core$UInt64 $tmp1575;
    panda$core$UInt64 $tmp1576;
    panda$core$UInt64 $tmp1579;
    panda$core$UInt64 $tmp1582;
    panda$core$UInt64 $tmp1586;
    panda$core$Int64$init$builtin_int64(&$tmp1552, 0);
    panda$core$Bit $tmp1553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp1552);
    if ($tmp1553.value) {
    {
        $returnValue1554 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue1554;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp1557, 0);
    result1556 = $tmp1557;
    panda$core$Int64$init$builtin_int64(&$tmp1559, 0);
    panda$core$Bit$init$builtin_bit(&$tmp1560, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1558, $tmp1559, self->_length, $tmp1560);
    int64_t $tmp1562 = $tmp1558.min.value;
    panda$core$Int64 i1561 = { $tmp1562 };
    int64_t $tmp1564 = $tmp1558.max.value;
    bool $tmp1565 = $tmp1558.inclusive.value;
    if ($tmp1565) goto $l1572; else goto $l1573;
    $l1572:;
    if ($tmp1562 <= $tmp1564) goto $l1566; else goto $l1568;
    $l1573:;
    if ($tmp1562 < $tmp1564) goto $l1566; else goto $l1568;
    $l1566:;
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp1575, ((uint64_t) self->data[i1561.value].value));
        panda$core$UInt64$init$builtin_uint64(&$tmp1576, 48);
        panda$core$UInt64 $tmp1577 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp1575, $tmp1576);
        digit1574 = $tmp1577;
        panda$core$UInt64$init$builtin_uint64(&$tmp1579, 0);
        panda$core$Bit $tmp1580 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1574, $tmp1579);
        bool $tmp1578 = $tmp1580.value;
        if ($tmp1578) goto $l1581;
        panda$core$UInt64$init$builtin_uint64(&$tmp1582, 9);
        panda$core$Bit $tmp1583 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1574, $tmp1582);
        $tmp1578 = $tmp1583.value;
        $l1581:;
        panda$core$Bit $tmp1584 = { $tmp1578 };
        if ($tmp1584.value) {
        {
            $returnValue1554 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue1554;
        }
        }
        panda$core$UInt64$init$builtin_uint64(&$tmp1586, 10);
        panda$core$UInt64 $tmp1587 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1556, $tmp1586);
        panda$core$UInt64 $tmp1588 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1587, digit1574);
        result1556 = $tmp1588;
    }
    $l1569:;
    int64_t $tmp1590 = $tmp1564 - i1561.value;
    if ($tmp1565) goto $l1591; else goto $l1592;
    $l1591:;
    if ((uint64_t) $tmp1590 >= 1) goto $l1589; else goto $l1568;
    $l1592:;
    if ((uint64_t) $tmp1590 > 1) goto $l1589; else goto $l1568;
    $l1589:;
    i1561.value += 1;
    goto $l1566;
    $l1568:;
    $returnValue1554 = ((panda$core$UInt64$nullable) { result1556, true });
    return $returnValue1554;
}
panda$core$Real64$nullable panda$core$String$convert$R$panda$core$Real64$Q(panda$core$String* self) {
    panda$core$Real64$nullable $returnValue1596;
    panda$core$Real64 $tmp1597;
    panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(&$tmp1597, self);
    $returnValue1596 = ((panda$core$Real64$nullable) { $tmp1597, true });
    return $returnValue1596;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $tmp1599;
    panda$core$Int64 h1601;
    panda$core$Int64 $tmp1602;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1603;
    panda$core$Int64 $tmp1604;
    panda$core$Bit $tmp1605;
    panda$core$Int64 $tmp1619;
    panda$core$Int64 $tmp1621;
    panda$core$Int64 $returnValue1629;
    panda$core$Int64$init$builtin_int64(&$tmp1599, 0);
    panda$core$Bit $tmp1600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, $tmp1599);
    if ($tmp1600.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1602, 1);
        h1601 = $tmp1602;
        panda$core$Int64$init$builtin_int64(&$tmp1604, 0);
        panda$core$Bit$init$builtin_bit(&$tmp1605, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1603, $tmp1604, self->_length, $tmp1605);
        int64_t $tmp1607 = $tmp1603.min.value;
        panda$core$Int64 i1606 = { $tmp1607 };
        int64_t $tmp1609 = $tmp1603.max.value;
        bool $tmp1610 = $tmp1603.inclusive.value;
        if ($tmp1610) goto $l1617; else goto $l1618;
        $l1617:;
        if ($tmp1607 <= $tmp1609) goto $l1611; else goto $l1613;
        $l1618:;
        if ($tmp1607 < $tmp1609) goto $l1611; else goto $l1613;
        $l1611:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp1619, 101);
            panda$core$Int64 $tmp1620 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1601, $tmp1619);
            panda$core$Int64$init$builtin_int64(&$tmp1621, ((int64_t) self->data[i1606.value].value));
            panda$core$Int64 $tmp1622 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1620, $tmp1621);
            h1601 = $tmp1622;
        }
        $l1614:;
        int64_t $tmp1624 = $tmp1609 - i1606.value;
        if ($tmp1610) goto $l1625; else goto $l1626;
        $l1625:;
        if ((uint64_t) $tmp1624 >= 1) goto $l1623; else goto $l1613;
        $l1626:;
        if ((uint64_t) $tmp1624 > 1) goto $l1623; else goto $l1613;
        $l1623:;
        i1606.value += 1;
        goto $l1611;
        $l1613:;
        self->_hash = h1601;
    }
    }
    $returnValue1629 = self->_hash;
    return $returnValue1629;
}

