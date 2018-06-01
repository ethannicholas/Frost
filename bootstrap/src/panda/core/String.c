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
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p0, ((panda$core$String*) p1));

    return result;
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p0, ((panda$core$String*) p1));

    return result;
}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim(panda$core$String* p0) {
    panda$collections$Iterator* result = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$String$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$String$_panda$core$Formattable, { panda$core$String$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$_panda$collections$Key, { panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim} };

static panda$core$String $s1;
panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$collections$Iterable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$format$panda$core$String$R$panda$core$String, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT$shim, panda$core$String$length$R$panda$core$Int64, panda$core$String$byteLength$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trim$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String, panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT, panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String, panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String, panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String, panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn27)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn71)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn78)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn85)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn156)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn163)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn310)(panda$core$Object*);
typedef panda$core$String* (*$fn357)(panda$core$Object*);
typedef panda$core$Object* (*$fn991)(panda$core$String*, panda$core$String*);
typedef panda$core$Object* (*$fn992)(panda$core$String*);
typedef panda$core$String* (*$fn993)(panda$core$Object*);
typedef panda$core$Object* (*$fn1050)(panda$collections$ListView*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1051)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1052)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 8838008024670810340, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 172, -4332006218848187331, NULL };

void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp3;
    self->owner = NULL;
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    {
        $tmp2 = self->owner;
        $tmp3 = NULL;
        self->owner = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length, panda$core$String* p_owner) {
    panda$core$String* $tmp4;
    panda$core$String* $tmp5;
    self->owner = NULL;
    self->_hash = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->_length = p_length;
    {
        $tmp4 = self->owner;
        $tmp5 = p_owner;
        self->owner = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self, panda$collections$ListView* p_chars) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp10;
    panda$core$Object* $tmp24;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    self->owner = NULL;
    self->_hash = ((panda$core$Int64) { 0 });
    ITable* $tmp6 = ((panda$collections$CollectionView*) p_chars)->$class->itable;
    while ($tmp6->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp6 = $tmp6->next;
    }
    $fn8 $tmp7 = $tmp6->methods[0];
    panda$core$Int64 $tmp9 = $tmp7(((panda$collections$CollectionView*) p_chars));
    self->_length = $tmp9;
    self->data = ((panda$core$Char8*) pandaZAlloc(self->_length.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp10, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp12 = $tmp10.min.value;
    panda$core$Int64 i11 = { $tmp12 };
    int64_t $tmp14 = $tmp10.max.value;
    bool $tmp15 = $tmp10.inclusive.value;
    if ($tmp15) goto $l22; else goto $l23;
    $l22:;
    if ($tmp12 <= $tmp14) goto $l16; else goto $l18;
    $l23:;
    if ($tmp12 < $tmp14) goto $l16; else goto $l18;
    $l16:;
    {
        ITable* $tmp25 = p_chars->$class->itable;
        while ($tmp25->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp25 = $tmp25->next;
        }
        $fn27 $tmp26 = $tmp25->methods[0];
        panda$core$Object* $tmp28 = $tmp26(p_chars, i11);
        $tmp24 = $tmp28;
        self->data[i11.value] = ((panda$core$Char8$wrapper*) $tmp24)->value;
        panda$core$Panda$unref$panda$core$Object($tmp24);
    }
    $l19:;
    int64_t $tmp30 = $tmp14 - i11.value;
    if ($tmp15) goto $l31; else goto $l32;
    $l31:;
    if ((uint64_t) $tmp30 >= 1) goto $l29; else goto $l18;
    $l32:;
    if ((uint64_t) $tmp30 > 1) goto $l29; else goto $l18;
    $l29:;
    i11.value += 1;
    goto $l16;
    $l18:;
    {
        $tmp35 = self->owner;
        $tmp36 = NULL;
        self->owner = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    }
}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self) {
    panda$core$String* $returnValue37;
    panda$core$String* $tmp38;
    $tmp38 = self;
    $returnValue37 = $tmp38;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
    return $returnValue37;
}
panda$core$String* panda$core$String$format$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_fmt) {
    panda$core$String* $match$364_943 = NULL;
    panda$core$String* $tmp44;
    panda$core$String* $returnValue47;
    panda$core$String* $tmp48;
    panda$core$MutableString* result56 = NULL;
    panda$core$MutableString* $tmp57;
    panda$core$MutableString* $tmp58;
    panda$collections$Iterator* Iter$369$1764 = NULL;
    panda$collections$Iterator* $tmp65;
    panda$collections$Iterator* $tmp66;
    panda$collections$ListView* $tmp67;
    panda$core$Char8 c81;
    panda$core$Object* $tmp82;
    panda$core$Char8 $match$370_2187;
    panda$core$Char8 $tmp88;
    panda$core$Char8 $tmp91;
    panda$core$Char8 $tmp94;
    panda$core$Char8 $tmp97;
    panda$core$Char8 $tmp100;
    panda$core$Char8 $tmp110;
    panda$core$Char8 $tmp112;
    panda$core$String* $tmp113;
    panda$core$String* $tmp114;
    int $tmp42;
    {
        $tmp44 = p_fmt;
        $match$364_943 = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Bit $tmp46 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$364_943, &$s45);
        if ($tmp46.value) {
        {
            $tmp48 = self;
            $returnValue47 = $tmp48;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp48));
            $tmp42 = 0;
            goto $l40;
            $l49:;
            return $returnValue47;
        }
        }
        else {
        panda$core$Bit $tmp52 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$364_943, &$s51);
        if ($tmp52.value) {
        {
            int $tmp55;
            {
                panda$core$MutableString* $tmp59 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp59, &$s60);
                $tmp58 = $tmp59;
                $tmp57 = $tmp58;
                result56 = $tmp57;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
                {
                    int $tmp63;
                    {
                        panda$collections$ListView* $tmp68 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(self);
                        $tmp67 = $tmp68;
                        ITable* $tmp69 = ((panda$collections$Iterable*) $tmp67)->$class->itable;
                        while ($tmp69->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp69 = $tmp69->next;
                        }
                        $fn71 $tmp70 = $tmp69->methods[0];
                        panda$collections$Iterator* $tmp72 = $tmp70(((panda$collections$Iterable*) $tmp67));
                        $tmp66 = $tmp72;
                        $tmp65 = $tmp66;
                        Iter$369$1764 = $tmp65;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
                        $l73:;
                        ITable* $tmp76 = Iter$369$1764->$class->itable;
                        while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp76 = $tmp76->next;
                        }
                        $fn78 $tmp77 = $tmp76->methods[0];
                        panda$core$Bit $tmp79 = $tmp77(Iter$369$1764);
                        panda$core$Bit $tmp80 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp79);
                        bool $tmp75 = $tmp80.value;
                        if (!$tmp75) goto $l74;
                        {
                            ITable* $tmp83 = Iter$369$1764->$class->itable;
                            while ($tmp83->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp83 = $tmp83->next;
                            }
                            $fn85 $tmp84 = $tmp83->methods[1];
                            panda$core$Object* $tmp86 = $tmp84(Iter$369$1764);
                            $tmp82 = $tmp86;
                            c81 = ((panda$core$Char8$wrapper*) $tmp82)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp82);
                            {
                                $match$370_2187 = c81;
                                panda$core$Char8$init$panda$core$UInt8(&$tmp88, ((panda$core$UInt8) { 34 }));
                                panda$core$Bit $tmp89 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_2187, $tmp88);
                                if ($tmp89.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s90);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp91, ((panda$core$UInt8) { 92 }));
                                panda$core$Bit $tmp92 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_2187, $tmp91);
                                if ($tmp92.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s93);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp94, ((panda$core$UInt8) { 10 }));
                                panda$core$Bit $tmp95 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_2187, $tmp94);
                                if ($tmp95.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s96);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp97, ((panda$core$UInt8) { 13 }));
                                panda$core$Bit $tmp98 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_2187, $tmp97);
                                if ($tmp98.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s99);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp100, ((panda$core$UInt8) { 9 }));
                                panda$core$Bit $tmp101 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_2187, $tmp100);
                                if ($tmp101.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result56, &$s102);
                                }
                                }
                                else {
                                {
                                    panda$core$UInt8 $tmp104 = panda$core$Char8$convert$R$panda$core$UInt8(c81);
                                    panda$core$Bit $tmp105 = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit($tmp104, ((panda$core$UInt8) { 32 }));
                                    bool $tmp103 = $tmp105.value;
                                    if (!$tmp103) goto $l106;
                                    panda$core$UInt8 $tmp107 = panda$core$Char8$convert$R$panda$core$UInt8(c81);
                                    panda$core$Bit $tmp108 = panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit($tmp107, ((panda$core$UInt8) { 126 }));
                                    $tmp103 = $tmp108.value;
                                    $l106:;
                                    panda$core$Bit $tmp109 = { $tmp103 };
                                    if ($tmp109.value) {
                                    {
                                        panda$core$MutableString$append$panda$core$Char8(result56, c81);
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Char8$init$panda$core$UInt8(&$tmp110, ((panda$core$UInt8) { 63 }));
                                        panda$core$MutableString$append$panda$core$Char8(result56, $tmp110);
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
                        goto $l73;
                        $l74:;
                    }
                    $tmp63 = -1;
                    goto $l61;
                    $l61:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$369$1764));
                    Iter$369$1764 = NULL;
                    switch ($tmp63) {
                        case -1: goto $l111;
                    }
                    $l111:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp112, ((panda$core$UInt8) { 34 }));
                panda$core$MutableString$append$panda$core$Char8(result56, $tmp112);
                panda$core$String* $tmp115 = panda$core$MutableString$finish$R$panda$core$String(result56);
                $tmp114 = $tmp115;
                $tmp113 = $tmp114;
                $returnValue47 = $tmp113;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
                $tmp55 = 0;
                goto $l53;
                $l116:;
                $tmp42 = 1;
                goto $l40;
                $l117:;
                return $returnValue47;
            }
            $l53:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result56));
            result56 = NULL;
            switch ($tmp55) {
                case 0: goto $l116;
            }
            $l119:;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l120; else goto $l121;
            $l121:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s122, (panda$core$Int64) { 390 });
            abort();
            $l120:;
        }
        }
        }
    }
    $tmp42 = -1;
    goto $l40;
    $l40:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
    switch ($tmp42) {
        case 1: goto $l117;
        case -1: goto $l123;
        case 0: goto $l49;
    }
    $l123:;
    abort();
}
void panda$core$String$cleanup(panda$core$String* self) {
    int $tmp126;
    {
        if (((panda$core$Bit) { self->owner == NULL }).value) {
        {
            pandaFree(self->data);
        }
        }
    }
    $tmp126 = -1;
    goto $l124;
    $l124:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp126) {
        case -1: goto $l127;
    }
    $l127:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
}
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self) {
    panda$collections$ListView* $returnValue128;
    panda$collections$ListView* $tmp129;
    panda$core$String$UTF8List* $tmp130;
    panda$core$String$UTF8List* $tmp131 = (panda$core$String$UTF8List*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$UTF8List$class);
    panda$core$String$UTF8List$init$panda$core$String($tmp131, self);
    $tmp130 = $tmp131;
    $tmp129 = ((panda$collections$ListView*) $tmp130);
    $returnValue128 = $tmp129;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
    return $returnValue128;
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$collections$Iterator* $returnValue133;
    panda$collections$Iterator* $tmp134;
    panda$core$String$UTF16Iterator* $tmp135;
    panda$core$String$UTF16Iterator* $tmp136 = (panda$core$String$UTF16Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF16Iterator$class);
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp136, self);
    $tmp135 = $tmp136;
    $tmp134 = ((panda$collections$Iterator*) $tmp135);
    $returnValue133 = $tmp134;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp134));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp135));
    return $returnValue133;
}
panda$collections$Iterator* panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$collections$Iterator* $returnValue138;
    panda$collections$Iterator* $tmp139;
    panda$core$String$UTF32Iterator* $tmp140;
    panda$core$String$UTF32Iterator* $tmp141 = (panda$core$String$UTF32Iterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$String$UTF32Iterator$class);
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp141, self);
    $tmp140 = $tmp141;
    $tmp139 = ((panda$collections$Iterator*) $tmp140);
    $returnValue138 = $tmp139;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
    return $returnValue138;
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 count146;
    panda$collections$Iterator* iter147 = NULL;
    panda$collections$Iterator* $tmp148;
    panda$collections$Iterator* $tmp149;
    panda$core$Object* $tmp160;
    panda$core$Int64 $returnValue165;
    int $tmp145;
    {
        count146 = ((panda$core$Int64) { 0 });
        panda$collections$Iterator* $tmp150 = panda$core$String$iterator$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
        $tmp149 = $tmp150;
        $tmp148 = $tmp149;
        iter147 = $tmp148;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
        $l151:;
        ITable* $tmp154 = iter147->$class->itable;
        while ($tmp154->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp154 = $tmp154->next;
        }
        $fn156 $tmp155 = $tmp154->methods[0];
        panda$core$Bit $tmp157 = $tmp155(iter147);
        panda$core$Bit $tmp158 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp157);
        bool $tmp153 = $tmp158.value;
        if (!$tmp153) goto $l152;
        {
            panda$core$Int64 $tmp159 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count146, ((panda$core$Int64) { 1 }));
            count146 = $tmp159;
            ITable* $tmp161 = iter147->$class->itable;
            while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp161 = $tmp161->next;
            }
            $fn163 $tmp162 = $tmp161->methods[1];
            panda$core$Object* $tmp164 = $tmp162(iter147);
            $tmp160 = $tmp164;
            panda$core$Panda$unref$panda$core$Object($tmp160);
        }
        goto $l151;
        $l152:;
        $returnValue165 = count146;
        $tmp145 = 0;
        goto $l143;
        $l166:;
        return $returnValue165;
    }
    $l143:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) iter147));
    iter147 = NULL;
    switch ($tmp145) {
        case 0: goto $l166;
    }
    $l168:;
    abort();
}
panda$core$Int64 panda$core$String$byteLength$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 $returnValue169;
    $returnValue169 = self->_length;
    return $returnValue169;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue172;
    panda$core$Range$LTpanda$core$Int64$GT $tmp174;
    panda$core$Bit $tmp171 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp171.value) {
    {
        $returnValue172 = ((panda$core$Bit) { false });
        return $returnValue172;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp174, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp176 = $tmp174.min.value;
    panda$core$Int64 i175 = { $tmp176 };
    int64_t $tmp178 = $tmp174.max.value;
    bool $tmp179 = $tmp174.inclusive.value;
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
            $returnValue172 = ((panda$core$Bit) { false });
            return $returnValue172;
        }
        }
    }
    $l183:;
    int64_t $tmp191 = $tmp178 - i175.value;
    if ($tmp179) goto $l192; else goto $l193;
    $l192:;
    if ((uint64_t) $tmp191 >= 1) goto $l190; else goto $l182;
    $l193:;
    if ((uint64_t) $tmp191 > 1) goto $l190; else goto $l182;
    $l190:;
    i175.value += 1;
    goto $l180;
    $l182:;
    $returnValue172 = ((panda$core$Bit) { true });
    return $returnValue172;
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue198;
    panda$core$Range$LTpanda$core$Int64$GT $tmp200;
    panda$core$Bit $tmp197 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp197.value) {
    {
        $returnValue198 = ((panda$core$Bit) { false });
        return $returnValue198;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp200, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp202 = $tmp200.min.value;
    panda$core$Int64 i201 = { $tmp202 };
    int64_t $tmp204 = $tmp200.max.value;
    bool $tmp205 = $tmp200.inclusive.value;
    if ($tmp205) goto $l212; else goto $l213;
    $l212:;
    if ($tmp202 <= $tmp204) goto $l206; else goto $l208;
    $l213:;
    if ($tmp202 < $tmp204) goto $l206; else goto $l208;
    $l206:;
    {
        panda$core$Int64 $tmp214 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp215 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp214, i201);
        panda$core$Bit $tmp216 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp215.value], p_other->data[i201.value]);
        if ($tmp216.value) {
        {
            $returnValue198 = ((panda$core$Bit) { false });
            return $returnValue198;
        }
        }
    }
    $l209:;
    int64_t $tmp219 = $tmp204 - i201.value;
    if ($tmp205) goto $l220; else goto $l221;
    $l220:;
    if ((uint64_t) $tmp219 >= 1) goto $l218; else goto $l208;
    $l221:;
    if ((uint64_t) $tmp219 > 1) goto $l218; else goto $l208;
    $l218:;
    i201.value += 1;
    goto $l206;
    $l208:;
    $returnValue198 = ((panda$core$Bit) { true });
    return $returnValue198;
}
panda$core$String* panda$core$String$trim$R$panda$core$String(panda$core$String* self) {
    panda$core$String* $returnValue226;
    panda$core$String* $tmp227;
    panda$core$Int64 start229;
    panda$core$Int64 end239;
    panda$core$String* $tmp250;
    panda$core$String* $tmp251;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp252;
    panda$core$String$Index $tmp253;
    panda$core$String$Index $tmp254;
    panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp225.value) {
    {
        $tmp227 = self;
        $returnValue226 = $tmp227;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp227));
        return $returnValue226;
    }
    }
    start229 = ((panda$core$Int64) { 0 });
    $l230:;
    panda$core$Bit $tmp234 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start229, self->_length);
    bool $tmp233 = $tmp234.value;
    if (!$tmp233) goto $l235;
    panda$core$Bit $tmp236 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start229.value]);
    $tmp233 = $tmp236.value;
    $l235:;
    panda$core$Bit $tmp237 = { $tmp233 };
    bool $tmp232 = $tmp237.value;
    if (!$tmp232) goto $l231;
    {
        panda$core$Int64 $tmp238 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start229, ((panda$core$Int64) { 1 }));
        start229 = $tmp238;
    }
    goto $l230;
    $l231:;
    panda$core$Int64 $tmp240 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, ((panda$core$Int64) { 1 }));
    end239 = $tmp240;
    $l241:;
    panda$core$Bit $tmp245 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end239, start229);
    bool $tmp244 = $tmp245.value;
    if (!$tmp244) goto $l246;
    panda$core$Bit $tmp247 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end239.value]);
    $tmp244 = $tmp247.value;
    $l246:;
    panda$core$Bit $tmp248 = { $tmp244 };
    bool $tmp243 = $tmp248.value;
    if (!$tmp243) goto $l242;
    {
        panda$core$Int64 $tmp249 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end239, ((panda$core$Int64) { 1 }));
        end239 = $tmp249;
    }
    goto $l241;
    $l242:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp253, start229);
    panda$core$String$Index$init$panda$core$Int64(&$tmp254, end239);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp252, $tmp253, $tmp254, ((panda$core$Bit) { true }));
    panda$core$String* $tmp255 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp252);
    $tmp251 = $tmp255;
    $tmp250 = $tmp251;
    $returnValue226 = $tmp250;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp250));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
    return $returnValue226;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result257;
    panda$core$Range$LTpanda$core$Int64$GT $tmp259;
    panda$core$Range$LTpanda$core$Int64$GT $tmp279;
    panda$core$String* $returnValue300;
    panda$core$String* $tmp301;
    panda$core$String* $tmp302;
    panda$core$Int64 $tmp258 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result257 = ((panda$core$Char8*) pandaZAlloc($tmp258.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp259, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp261 = $tmp259.min.value;
    panda$core$Int64 i260 = { $tmp261 };
    int64_t $tmp263 = $tmp259.max.value;
    bool $tmp264 = $tmp259.inclusive.value;
    if ($tmp264) goto $l271; else goto $l272;
    $l271:;
    if ($tmp261 <= $tmp263) goto $l265; else goto $l267;
    $l272:;
    if ($tmp261 < $tmp263) goto $l265; else goto $l267;
    $l265:;
    {
        result257[i260.value] = self->data[i260.value];
    }
    $l268:;
    int64_t $tmp274 = $tmp263 - i260.value;
    if ($tmp264) goto $l275; else goto $l276;
    $l275:;
    if ((uint64_t) $tmp274 >= 1) goto $l273; else goto $l267;
    $l276:;
    if ((uint64_t) $tmp274 > 1) goto $l273; else goto $l267;
    $l273:;
    i260.value += 1;
    goto $l265;
    $l267:;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp279, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Bit) { false }));
    int64_t $tmp281 = $tmp279.min.value;
    panda$core$Int64 i280 = { $tmp281 };
    int64_t $tmp283 = $tmp279.max.value;
    bool $tmp284 = $tmp279.inclusive.value;
    if ($tmp284) goto $l291; else goto $l292;
    $l291:;
    if ($tmp281 <= $tmp283) goto $l285; else goto $l287;
    $l292:;
    if ($tmp281 < $tmp283) goto $l285; else goto $l287;
    $l285:;
    {
        panda$core$Int64 $tmp293 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i280);
        result257[$tmp293.value] = p_other->data[i280.value];
    }
    $l288:;
    int64_t $tmp295 = $tmp283 - i280.value;
    if ($tmp284) goto $l296; else goto $l297;
    $l296:;
    if ((uint64_t) $tmp295 >= 1) goto $l294; else goto $l287;
    $l297:;
    if ((uint64_t) $tmp295 > 1) goto $l294; else goto $l287;
    $l294:;
    i280.value += 1;
    goto $l285;
    $l287:;
    panda$core$String* $tmp303 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp304 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp303, result257, $tmp304);
    $tmp302 = $tmp303;
    $tmp301 = $tmp302;
    $returnValue300 = $tmp301;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
    return $returnValue300;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $returnValue306;
    panda$core$String* $tmp307;
    panda$core$String* $tmp308;
    panda$core$String* $tmp309;
    panda$core$String* $tmp311 = (($fn310) p_other->$class->vtable[0])(p_other);
    $tmp309 = $tmp311;
    panda$core$String* $tmp312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp309);
    $tmp308 = $tmp312;
    $tmp307 = $tmp308;
    $returnValue306 = $tmp307;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp307));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
    return $returnValue306;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result322 = NULL;
    panda$core$MutableString* $tmp323;
    panda$core$MutableString* $tmp324;
    panda$core$Range$LTpanda$core$Int64$GT $tmp326;
    panda$core$String* $returnValue346;
    panda$core$String* $tmp347;
    panda$core$String* $tmp348;
    panda$core$Bit $tmp314 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_count, ((panda$core$Int64) { 0 }));
    if ($tmp314.value) goto $l315; else goto $l316;
    $l316:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s317, (panda$core$Int64) { 510 }, &$s318);
    abort();
    $l315:;
    int $tmp321;
    {
        panda$core$MutableString* $tmp325 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp325);
        $tmp324 = $tmp325;
        $tmp323 = $tmp324;
        result322 = $tmp323;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp323));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp326, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
        int64_t $tmp328 = $tmp326.min.value;
        panda$core$Int64 i327 = { $tmp328 };
        int64_t $tmp330 = $tmp326.max.value;
        bool $tmp331 = $tmp326.inclusive.value;
        if ($tmp331) goto $l338; else goto $l339;
        $l338:;
        if ($tmp328 <= $tmp330) goto $l332; else goto $l334;
        $l339:;
        if ($tmp328 < $tmp330) goto $l332; else goto $l334;
        $l332:;
        {
            panda$core$MutableString$append$panda$core$String(result322, self);
        }
        $l335:;
        int64_t $tmp341 = $tmp330 - i327.value;
        if ($tmp331) goto $l342; else goto $l343;
        $l342:;
        if ((uint64_t) $tmp341 >= 1) goto $l340; else goto $l334;
        $l343:;
        if ((uint64_t) $tmp341 > 1) goto $l340; else goto $l334;
        $l340:;
        i327.value += 1;
        goto $l332;
        $l334:;
        panda$core$String* $tmp349 = panda$core$MutableString$finish$R$panda$core$String(result322);
        $tmp348 = $tmp349;
        $tmp347 = $tmp348;
        $returnValue346 = $tmp347;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
        $tmp321 = 0;
        goto $l319;
        $l350:;
        return $returnValue346;
    }
    $l319:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result322));
    result322 = NULL;
    switch ($tmp321) {
        case 0: goto $l350;
    }
    $l352:;
    abort();
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $returnValue353;
    panda$core$String* $tmp354;
    panda$core$String* $tmp355;
    panda$core$String* $tmp356;
    panda$core$String* $tmp358 = (($fn357) p_o->$class->vtable[0])(p_o);
    $tmp356 = $tmp358;
    panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp356, p_s);
    $tmp355 = $tmp359;
    $tmp354 = $tmp355;
    $returnValue353 = $tmp354;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp354));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
    return $returnValue353;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue362;
    panda$core$Range$LTpanda$core$Int64$GT $tmp364;
    panda$core$Bit $tmp361 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp361.value) {
    {
        $returnValue362 = ((panda$core$Bit) { false });
        return $returnValue362;
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp364, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp366 = $tmp364.min.value;
    panda$core$Int64 i365 = { $tmp366 };
    int64_t $tmp368 = $tmp364.max.value;
    bool $tmp369 = $tmp364.inclusive.value;
    if ($tmp369) goto $l376; else goto $l377;
    $l376:;
    if ($tmp366 <= $tmp368) goto $l370; else goto $l372;
    $l377:;
    if ($tmp366 < $tmp368) goto $l370; else goto $l372;
    $l370:;
    {
        panda$core$Bit $tmp378 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i365.value], p_other->data[i365.value]);
        if ($tmp378.value) {
        {
            $returnValue362 = ((panda$core$Bit) { false });
            return $returnValue362;
        }
        }
    }
    $l373:;
    int64_t $tmp381 = $tmp368 - i365.value;
    if ($tmp369) goto $l382; else goto $l383;
    $l382:;
    if ((uint64_t) $tmp381 >= 1) goto $l380; else goto $l372;
    $l383:;
    if ((uint64_t) $tmp381 > 1) goto $l380; else goto $l372;
    $l380:;
    i365.value += 1;
    goto $l370;
    $l372:;
    $returnValue362 = ((panda$core$Bit) { true });
    return $returnValue362;
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue387;
    panda$core$Bit $tmp388 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp389 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp388);
    $returnValue387 = $tmp389;
    return $returnValue387;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx391;
    panda$core$Char8 c392;
    panda$core$Int32 result393;
    panda$core$Char32 $returnValue397;
    panda$core$Char32 $tmp398;
    panda$core$Char32 $tmp413;
    panda$core$Char32 $tmp433;
    panda$core$Char32 $tmp456;
    idx391 = p_index.value;
    c392 = self->data[idx391.value];
    panda$core$Int32 $tmp394 = panda$core$Char8$convert$R$panda$core$Int32(c392);
    result393 = $tmp394;
    int64_t $tmp395 = ((int64_t) c392.value) & 255;
    bool $tmp396 = $tmp395 < 192;
    if (((panda$core$Bit) { $tmp396 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp398, result393);
        $returnValue397 = $tmp398;
        return $returnValue397;
    }
    }
    int64_t $tmp400 = ((int64_t) c392.value) & 255;
    bool $tmp401 = $tmp400 < 224;
    if (((panda$core$Bit) { $tmp401 }).value) {
    {
        panda$core$Int64 $tmp402 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp403 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp402, self->_length);
        if ($tmp403.value) goto $l404; else goto $l405;
        $l405:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s406, (panda$core$Int64) { 552 });
        abort();
        $l404:;
        panda$core$Int32 $tmp407 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result393, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp408 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp407, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp409 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp410 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp409.value]);
        panda$core$Int32 $tmp411 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp410, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp412 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp408, $tmp411);
        result393 = $tmp412;
        panda$core$Char32$init$panda$core$Int32(&$tmp413, result393);
        $returnValue397 = $tmp413;
        return $returnValue397;
    }
    }
    int64_t $tmp415 = ((int64_t) c392.value) & 255;
    bool $tmp416 = $tmp415 < 240;
    if (((panda$core$Bit) { $tmp416 }).value) {
    {
        panda$core$Int64 $tmp417 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp418 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp417, self->_length);
        if ($tmp418.value) goto $l419; else goto $l420;
        $l420:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s421, (panda$core$Int64) { 557 });
        abort();
        $l419:;
        panda$core$Int32 $tmp422 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result393, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp423 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp422, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp424 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp425 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp424.value]);
        panda$core$Int32 $tmp426 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp425, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp427 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp426, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp428 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp423, $tmp427);
        panda$core$Int64 $tmp429 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp430 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp429.value]);
        panda$core$Int32 $tmp431 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp430, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp432 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp428, $tmp431);
        result393 = $tmp432;
        panda$core$Char32$init$panda$core$Int32(&$tmp433, result393);
        $returnValue397 = $tmp433;
        return $returnValue397;
    }
    }
    panda$core$Int64 $tmp435 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp436 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp435, self->_length);
    if ($tmp436.value) goto $l437; else goto $l438;
    $l438:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s439, (panda$core$Int64) { 562 });
    abort();
    $l437:;
    panda$core$Int32 $tmp440 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result393, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp441 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp440, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp442 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp443 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp442.value]);
    panda$core$Int32 $tmp444 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp443, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp445 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp444, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp446 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp441, $tmp445);
    panda$core$Int64 $tmp447 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp448 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp447.value]);
    panda$core$Int32 $tmp449 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp448, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp450 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp449, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp451 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp446, $tmp450);
    panda$core$Int64 $tmp452 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx391, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp453 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp452.value]);
    panda$core$Int32 $tmp454 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp453, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp455 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp451, $tmp454);
    result393 = $tmp455;
    panda$core$Char32$init$panda$core$Int32(&$tmp456, result393);
    $returnValue397 = $tmp456;
    return $returnValue397;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$Char32 $returnValue458;
    panda$core$String$Index $tmp459 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp460 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp459, p_index);
    panda$core$Char32 $tmp461 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp460);
    $returnValue458 = $tmp461;
    return $returnValue458;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$String* $returnValue463;
    panda$core$String* $tmp464;
    panda$core$String* $tmp465;
    panda$core$String* $tmp466 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$Int64 $tmp467 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_r.max.value, p_r.min.value);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$String($tmp466, (self->data + p_r.min.value.value), $tmp467, self);
    $tmp465 = $tmp466;
    $tmp464 = $tmp465;
    $returnValue463 = $tmp464;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp464));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp465));
    return $returnValue463;
}
panda$core$String* panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String$Index min469;
    panda$core$String$Index max471;
    panda$core$String* $returnValue474;
    panda$core$String* $tmp475;
    panda$core$String* $tmp476;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp477;
    memset(&min469, 0, sizeof(min469));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min469 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp470 = panda$core$String$start$R$panda$core$String$Index(self);
        min469 = $tmp470;
    }
    }
    memset(&max471, 0, sizeof(max471));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max471 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp472 = panda$core$String$end$R$panda$core$String$Index(self);
        max471 = $tmp472;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp473 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max471);
            max471 = $tmp473;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp477, min469, max471, p_r.inclusive);
    panda$core$String* $tmp478 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp477);
    $tmp476 = $tmp478;
    $tmp475 = $tmp476;
    $returnValue474 = $tmp475;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp475));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
    return $returnValue474;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$GT p_r) {
    panda$core$Int64 current483;
    panda$core$MutableString* result484 = NULL;
    panda$core$MutableString* $tmp485;
    panda$core$MutableString* $tmp486;
    panda$core$Int64 max488;
    panda$core$Char8 c494;
    panda$core$String* $returnValue505;
    panda$core$String* $tmp506;
    panda$core$String* $tmp507;
    int $tmp482;
    {
        current483 = p_r.min.value;
        panda$core$MutableString* $tmp487 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp487);
        $tmp486 = $tmp487;
        $tmp485 = $tmp486;
        result484 = $tmp485;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp485));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
        max488 = p_r.max.value;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp489 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max488, ((panda$core$Int64) { 1 }));
            max488 = $tmp489;
        }
        }
        $l490:;
        panda$core$Bit $tmp493 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current483, max488);
        bool $tmp492 = $tmp493.value;
        if (!$tmp492) goto $l491;
        {
            c494 = self->data[current483.value];
            panda$core$MutableString$append$panda$core$Char8(result484, c494);
            panda$core$Int64 $tmp495 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current483, ((panda$core$Int64) { 1 }));
            current483 = $tmp495;
            int64_t $tmp496 = ((int64_t) c494.value) & 255;
            bool $tmp497 = $tmp496 >= 192;
            if (((panda$core$Bit) { $tmp497 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result484, self->data[current483.value]);
                panda$core$Int64 $tmp498 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current483, ((panda$core$Int64) { 1 }));
                current483 = $tmp498;
            }
            }
            int64_t $tmp499 = ((int64_t) c494.value) & 255;
            bool $tmp500 = $tmp499 >= 224;
            if (((panda$core$Bit) { $tmp500 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result484, self->data[current483.value]);
                panda$core$Int64 $tmp501 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current483, ((panda$core$Int64) { 1 }));
                current483 = $tmp501;
            }
            }
            int64_t $tmp502 = ((int64_t) c494.value) & 255;
            bool $tmp503 = $tmp502 >= 240;
            if (((panda$core$Bit) { $tmp503 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result484, self->data[current483.value]);
                panda$core$Int64 $tmp504 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current483, ((panda$core$Int64) { 1 }));
                current483 = $tmp504;
            }
            }
        }
        goto $l490;
        $l491:;
        panda$core$String* $tmp508 = panda$core$MutableString$finish$R$panda$core$String(result484);
        $tmp507 = $tmp508;
        $tmp506 = $tmp507;
        $returnValue505 = $tmp506;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp506));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
        $tmp482 = 0;
        goto $l480;
        $l509:;
        return $returnValue505;
    }
    $l480:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result484));
    result484 = NULL;
    switch ($tmp482) {
        case 0: goto $l509;
    }
    $l511:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$String* $returnValue513;
    panda$core$String* $tmp514;
    panda$core$String$Index min517;
    panda$core$String$Index max519;
    panda$core$String* $tmp522;
    panda$core$String* $tmp523;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp524;
    panda$core$Bit $tmp512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp512.value) {
    {
        $tmp514 = &$s515;
        $returnValue513 = $tmp514;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp514));
        return $returnValue513;
    }
    }
    memset(&min517, 0, sizeof(min517));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min517 = ((panda$core$String$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp518 = panda$core$String$start$R$panda$core$String$Index(self);
        min517 = $tmp518;
    }
    }
    memset(&max519, 0, sizeof(max519));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max519 = ((panda$core$String$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$String$Index $tmp520 = panda$core$String$end$R$panda$core$String$Index(self);
        max519 = $tmp520;
        if (p_r.inclusive.value) {
        {
            panda$core$String$Index $tmp521 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, max519);
            max519 = $tmp521;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp524, min517, max519, p_r.inclusive);
    panda$core$String* $tmp525 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp524);
    $tmp523 = $tmp525;
    $tmp522 = $tmp523;
    $returnValue513 = $tmp522;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp522));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp523));
    return $returnValue513;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String* $returnValue531;
    panda$core$String* $tmp532;
    panda$core$Int64 step536;
    panda$core$Int64 current537;
    panda$core$Int64 end542;
    panda$core$MutableString* result546 = NULL;
    panda$core$MutableString* $tmp547;
    panda$core$MutableString* $tmp548;
    panda$core$Char8 c555;
    panda$core$Range$LTpanda$core$Int64$GT $tmp566;
    panda$core$String* $tmp581;
    panda$core$String* $tmp582;
    panda$core$String$Index $tmp586;
    panda$core$Char8 c602;
    panda$core$Int64 old603;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp624;
    panda$core$String* $tmp644;
    panda$core$String* $tmp645;
    panda$core$String$Index $tmp649;
    panda$core$Char8 c673;
    panda$core$String* $tmp683;
    panda$core$String* $tmp684;
    int $tmp529;
    {
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
        if ($tmp530.value) {
        {
            $tmp532 = &$s533;
            $returnValue531 = $tmp532;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp532));
            $tmp529 = 0;
            goto $l527;
            $l534:;
            return $returnValue531;
        }
        }
        step536 = p_r.step;
        memset(&current537, 0, sizeof(current537));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current537 = ((panda$core$String$Index) p_r.start.value).value;
        }
        }
        else {
        panda$core$Bit $tmp538 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step536, ((panda$core$Int64) { 0 }));
        if ($tmp538.value) {
        {
            panda$core$String$Index $tmp539 = panda$core$String$start$R$panda$core$String$Index(self);
            current537 = $tmp539.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp540 = panda$core$String$end$R$panda$core$String$Index(self);
            panda$core$String$Index $tmp541 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp540);
            current537 = $tmp541.value;
        }
        }
        }
        memset(&end542, 0, sizeof(end542));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end542 = ((panda$core$String$Index) p_r.end.value).value;
        }
        }
        else {
        panda$core$Bit $tmp543 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step536, ((panda$core$Int64) { 0 }));
        if ($tmp543.value) {
        {
            panda$core$String$Index $tmp544 = panda$core$String$end$R$panda$core$String$Index(self);
            end542 = $tmp544.value;
        }
        }
        else {
        {
            panda$core$String$Index $tmp545 = panda$core$String$start$R$panda$core$String$Index(self);
            end542 = $tmp545.value;
        }
        }
        }
        panda$core$MutableString* $tmp549 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp549);
        $tmp548 = $tmp549;
        $tmp547 = $tmp548;
        result546 = $tmp547;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
        panda$core$Bit $tmp550 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp550.value) {
        {
            $l551:;
            panda$core$Bit $tmp554 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current537, end542);
            bool $tmp553 = $tmp554.value;
            if (!$tmp553) goto $l552;
            {
                c555 = self->data[current537.value];
                panda$core$MutableString$append$panda$core$Char8(result546, c555);
                panda$core$Int64 $tmp556 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current537, ((panda$core$Int64) { 1 }));
                current537 = $tmp556;
                int64_t $tmp557 = ((int64_t) c555.value) & 255;
                bool $tmp558 = $tmp557 >= 192;
                if (((panda$core$Bit) { $tmp558 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result546, self->data[current537.value]);
                    panda$core$Int64 $tmp559 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current537, ((panda$core$Int64) { 1 }));
                    current537 = $tmp559;
                }
                }
                int64_t $tmp560 = ((int64_t) c555.value) & 255;
                bool $tmp561 = $tmp560 >= 224;
                if (((panda$core$Bit) { $tmp561 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result546, self->data[current537.value]);
                    panda$core$Int64 $tmp562 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current537, ((panda$core$Int64) { 1 }));
                    current537 = $tmp562;
                }
                }
                int64_t $tmp563 = ((int64_t) c555.value) & 255;
                bool $tmp564 = $tmp563 >= 240;
                if (((panda$core$Bit) { $tmp564 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result546, self->data[current537.value]);
                    panda$core$Int64 $tmp565 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current537, ((panda$core$Int64) { 1 }));
                    current537 = $tmp565;
                }
                }
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp566, ((panda$core$Int64) { 1 }), step536, ((panda$core$Bit) { false }));
                int64_t $tmp568 = $tmp566.min.value;
                panda$core$Int64 i567 = { $tmp568 };
                int64_t $tmp570 = $tmp566.max.value;
                bool $tmp571 = $tmp566.inclusive.value;
                if ($tmp571) goto $l578; else goto $l579;
                $l578:;
                if ($tmp568 <= $tmp570) goto $l572; else goto $l574;
                $l579:;
                if ($tmp568 < $tmp570) goto $l572; else goto $l574;
                $l572:;
                {
                    panda$core$Bit $tmp580 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current537, end542);
                    if ($tmp580.value) {
                    {
                        panda$core$String* $tmp583 = panda$core$MutableString$convert$R$panda$core$String(result546);
                        $tmp582 = $tmp583;
                        $tmp581 = $tmp582;
                        $returnValue531 = $tmp581;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp581));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                        $tmp529 = 1;
                        goto $l527;
                        $l584:;
                        return $returnValue531;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp586, current537);
                    panda$core$String$Index $tmp587 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp586);
                    current537 = $tmp587.value;
                }
                $l575:;
                int64_t $tmp589 = $tmp570 - i567.value;
                if ($tmp571) goto $l590; else goto $l591;
                $l590:;
                if ((uint64_t) $tmp589 >= 1) goto $l588; else goto $l574;
                $l591:;
                if ((uint64_t) $tmp589 > 1) goto $l588; else goto $l574;
                $l588:;
                i567.value += 1;
                goto $l572;
                $l574:;
            }
            goto $l551;
            $l552:;
        }
        }
        else {
        {
            panda$core$Bit $tmp594 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            if ($tmp594.value) goto $l595; else goto $l596;
            $l596:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s597, (panda$core$Int64) { 753 });
            abort();
            $l595:;
            $l598:;
            panda$core$Bit $tmp601 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current537, end542);
            bool $tmp600 = $tmp601.value;
            if (!$tmp600) goto $l599;
            {
                c602 = self->data[current537.value];
                panda$core$MutableString$append$panda$core$Char8(result546, c602);
                old603 = current537;
                panda$core$Int64 $tmp604 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current537, ((panda$core$Int64) { 1 }));
                current537 = $tmp604;
                int64_t $tmp605 = ((int64_t) c602.value) & 255;
                bool $tmp606 = $tmp605 >= 192;
                if (((panda$core$Bit) { $tmp606 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result546, self->data[current537.value]);
                    panda$core$Int64 $tmp607 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current537, ((panda$core$Int64) { 1 }));
                    current537 = $tmp607;
                }
                }
                int64_t $tmp608 = ((int64_t) c602.value) & 255;
                bool $tmp609 = $tmp608 >= 224;
                if (((panda$core$Bit) { $tmp609 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result546, self->data[current537.value]);
                    panda$core$Int64 $tmp610 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current537, ((panda$core$Int64) { 1 }));
                    current537 = $tmp610;
                }
                }
                int64_t $tmp611 = ((int64_t) c602.value) & 255;
                bool $tmp612 = $tmp611 >= 240;
                if (((panda$core$Bit) { $tmp612 }).value) {
                {
                    panda$core$MutableString$append$panda$core$Char8(result546, self->data[current537.value]);
                }
                }
                panda$core$Int64 $tmp613 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old603, ((panda$core$Int64) { 1 }));
                current537 = $tmp613;
                $l614:;
                int64_t $tmp618 = ((int64_t) self->data[current537.value].value) & 255;
                bool $tmp619 = $tmp618 >= 128;
                bool $tmp617 = $tmp619;
                if (!$tmp617) goto $l620;
                int64_t $tmp621 = ((int64_t) self->data[current537.value].value) & 255;
                bool $tmp622 = $tmp621 < 192;
                $tmp617 = $tmp622;
                $l620:;
                bool $tmp616 = ((panda$core$Bit) { $tmp617 }).value;
                if (!$tmp616) goto $l615;
                {
                    panda$core$Int64 $tmp623 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current537, ((panda$core$Int64) { 1 }));
                    current537 = $tmp623;
                }
                goto $l614;
                $l615:;
                panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp624, ((panda$core$Int64) { -1 }), step536, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
                int64_t $tmp626 = $tmp624.start.value;
                panda$core$Int64 i625 = { $tmp626 };
                int64_t $tmp628 = $tmp624.end.value;
                int64_t $tmp629 = $tmp624.step.value;
                bool $tmp630 = $tmp624.inclusive.value;
                bool $tmp637 = $tmp629 > 0;
                if ($tmp637) goto $l635; else goto $l636;
                $l635:;
                if ($tmp630) goto $l638; else goto $l639;
                $l638:;
                if ($tmp626 <= $tmp628) goto $l631; else goto $l633;
                $l639:;
                if ($tmp626 < $tmp628) goto $l631; else goto $l633;
                $l636:;
                if ($tmp630) goto $l640; else goto $l641;
                $l640:;
                if ($tmp626 >= $tmp628) goto $l631; else goto $l633;
                $l641:;
                if ($tmp626 > $tmp628) goto $l631; else goto $l633;
                $l631:;
                {
                    panda$core$Bit $tmp643 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current537, end542);
                    if ($tmp643.value) {
                    {
                        panda$core$String* $tmp646 = panda$core$MutableString$convert$R$panda$core$String(result546);
                        $tmp645 = $tmp646;
                        $tmp644 = $tmp645;
                        $returnValue531 = $tmp644;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp644));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
                        $tmp529 = 2;
                        goto $l527;
                        $l647:;
                        return $returnValue531;
                    }
                    }
                    panda$core$String$Index$init$panda$core$Int64(&$tmp649, current537);
                    panda$core$String$Index $tmp650 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp649);
                    current537 = $tmp650.value;
                }
                $l634:;
                if ($tmp637) goto $l652; else goto $l653;
                $l652:;
                int64_t $tmp654 = $tmp628 - i625.value;
                if ($tmp630) goto $l655; else goto $l656;
                $l655:;
                if ((uint64_t) $tmp654 >= $tmp629) goto $l651; else goto $l633;
                $l656:;
                if ((uint64_t) $tmp654 > $tmp629) goto $l651; else goto $l633;
                $l653:;
                int64_t $tmp658 = i625.value - $tmp628;
                if ($tmp630) goto $l659; else goto $l660;
                $l659:;
                if ((uint64_t) $tmp658 >= -$tmp629) goto $l651; else goto $l633;
                $l660:;
                if ((uint64_t) $tmp658 > -$tmp629) goto $l651; else goto $l633;
                $l651:;
                i625.value += $tmp629;
                goto $l631;
                $l633:;
            }
            goto $l598;
            $l599:;
        }
        }
        bool $tmp664 = p_r.inclusive.value;
        if ($tmp664) goto $l665;
        $tmp664 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l665:;
        panda$core$Bit $tmp666 = { $tmp664 };
        bool $tmp663 = $tmp666.value;
        if (!$tmp663) goto $l667;
        panda$core$Bit $tmp668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current537, end542);
        $tmp663 = $tmp668.value;
        $l667:;
        panda$core$Bit $tmp669 = { $tmp663 };
        bool $tmp662 = $tmp669.value;
        if (!$tmp662) goto $l670;
        panda$core$Bit $tmp671 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end542, self->_length);
        $tmp662 = $tmp671.value;
        $l670:;
        panda$core$Bit $tmp672 = { $tmp662 };
        if ($tmp672.value) {
        {
            c673 = self->data[current537.value];
            panda$core$MutableString$append$panda$core$Char8(result546, c673);
            panda$core$Int64 $tmp674 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current537, ((panda$core$Int64) { 1 }));
            current537 = $tmp674;
            int64_t $tmp675 = ((int64_t) c673.value) & 255;
            bool $tmp676 = $tmp675 >= 192;
            if (((panda$core$Bit) { $tmp676 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result546, self->data[current537.value]);
                panda$core$Int64 $tmp677 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current537, ((panda$core$Int64) { 1 }));
                current537 = $tmp677;
            }
            }
            int64_t $tmp678 = ((int64_t) c673.value) & 255;
            bool $tmp679 = $tmp678 >= 224;
            if (((panda$core$Bit) { $tmp679 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result546, self->data[current537.value]);
                panda$core$Int64 $tmp680 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current537, ((panda$core$Int64) { 1 }));
                current537 = $tmp680;
            }
            }
            int64_t $tmp681 = ((int64_t) c673.value) & 255;
            bool $tmp682 = $tmp681 >= 240;
            if (((panda$core$Bit) { $tmp682 }).value) {
            {
                panda$core$MutableString$append$panda$core$Char8(result546, self->data[current537.value]);
            }
            }
        }
        }
        panda$core$String* $tmp685 = panda$core$MutableString$finish$R$panda$core$String(result546);
        $tmp684 = $tmp685;
        $tmp683 = $tmp684;
        $returnValue531 = $tmp683;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
        $tmp529 = 3;
        goto $l527;
        $l686:;
        return $returnValue531;
    }
    $l527:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result546));
    result546 = NULL;
    switch ($tmp529) {
        case 3: goto $l686;
        case 1: goto $l584;
        case 2: goto $l647;
        case 0: goto $l534;
    }
    $l688:;
    abort();
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start689;
    panda$core$String$Index$nullable end692;
    panda$core$String* $returnValue695;
    panda$core$String* $tmp696;
    panda$core$String* $tmp697;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp698;
    memset(&start689, 0, sizeof(start689));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$String$Index $tmp690 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp691 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp690, ((panda$core$Int64) p_r.min.value));
        start689 = ((panda$core$String$Index$nullable) { $tmp691, true });
    }
    }
    else {
    {
        start689 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end692, 0, sizeof(end692));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$String$Index $tmp693 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp694 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp693, ((panda$core$Int64) p_r.max.value));
        end692 = ((panda$core$String$Index$nullable) { $tmp694, true });
    }
    }
    else {
    {
        end692 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp698, start689, end692, p_r.inclusive);
    panda$core$String* $tmp699 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp698);
    $tmp697 = $tmp699;
    $tmp696 = $tmp697;
    $returnValue695 = $tmp696;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp696));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp697));
    return $returnValue695;
}
panda$core$String* panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$core$String(panda$core$String* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$String$Index$nullable start701;
    panda$core$String$Index$nullable end704;
    panda$core$String* $returnValue707;
    panda$core$String* $tmp708;
    panda$core$String* $tmp709;
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT $tmp710;
    memset(&start701, 0, sizeof(start701));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp702 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp703 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp702, ((panda$core$Int64) p_r.start.value));
        start701 = ((panda$core$String$Index$nullable) { $tmp703, true });
    }
    }
    else {
    {
        start701 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    memset(&end704, 0, sizeof(end704));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp705 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp706 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp705, ((panda$core$Int64) p_r.end.value));
        end704 = ((panda$core$String$Index$nullable) { $tmp706, true });
    }
    }
    else {
    {
        end704 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(&$tmp710, start701, end704, p_r.step, p_r.inclusive);
    panda$core$String* $tmp711 = panda$core$String$$IDX$panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$R$panda$core$String(self, $tmp710);
    $tmp709 = $tmp711;
    $tmp708 = $tmp709;
    $returnValue707 = $tmp708;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp708));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp709));
    return $returnValue707;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp713;
    panda$core$Bit $returnValue728;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp713, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp715 = $tmp713.min.value;
    panda$core$Int64 i714 = { $tmp715 };
    int64_t $tmp717 = $tmp713.max.value;
    bool $tmp718 = $tmp713.inclusive.value;
    if ($tmp718) goto $l725; else goto $l726;
    $l725:;
    if ($tmp715 <= $tmp717) goto $l719; else goto $l721;
    $l726:;
    if ($tmp715 < $tmp717) goto $l719; else goto $l721;
    $l719:;
    {
        panda$core$Bit $tmp727 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i714.value], p_c);
        if ($tmp727.value) {
        {
            $returnValue728 = ((panda$core$Bit) { true });
            return $returnValue728;
        }
        }
    }
    $l722:;
    int64_t $tmp731 = $tmp717 - i714.value;
    if ($tmp718) goto $l732; else goto $l733;
    $l732:;
    if ((uint64_t) $tmp731 >= 1) goto $l730; else goto $l721;
    $l733:;
    if ((uint64_t) $tmp731 > 1) goto $l730; else goto $l721;
    $l730:;
    i714.value += 1;
    goto $l719;
    $l721:;
    $returnValue728 = ((panda$core$Bit) { false });
    return $returnValue728;
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$Bit $returnValue737;
    panda$core$String$Index$nullable $tmp738 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    $returnValue737 = ((panda$core$Bit) { $tmp738.nonnull });
    return $returnValue737;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue740;
    panda$core$String$Index $tmp741 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp742 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp741);
    $returnValue740 = $tmp742;
    return $returnValue740;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue745;
    panda$core$Range$LTpanda$core$Int64$GT $tmp747;
    panda$core$Range$LTpanda$core$Int64$GT $tmp762;
    panda$core$String$Index $tmp784;
    panda$core$Bit $tmp744 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp744.value) {
    {
        $returnValue745 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue745;
    }
    }
    panda$core$Int64 $tmp748 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp747, p_start.value, $tmp748, ((panda$core$Bit) { true }));
    int64_t $tmp750 = $tmp747.min.value;
    panda$core$Int64 i749 = { $tmp750 };
    int64_t $tmp752 = $tmp747.max.value;
    bool $tmp753 = $tmp747.inclusive.value;
    if ($tmp753) goto $l760; else goto $l761;
    $l760:;
    if ($tmp750 <= $tmp752) goto $l754; else goto $l756;
    $l761:;
    if ($tmp750 < $tmp752) goto $l754; else goto $l756;
    $l754:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp762, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp764 = $tmp762.min.value;
        panda$core$Int64 j763 = { $tmp764 };
        int64_t $tmp766 = $tmp762.max.value;
        bool $tmp767 = $tmp762.inclusive.value;
        if ($tmp767) goto $l774; else goto $l775;
        $l774:;
        if ($tmp764 <= $tmp766) goto $l768; else goto $l770;
        $l775:;
        if ($tmp764 < $tmp766) goto $l768; else goto $l770;
        $l768:;
        {
            panda$core$Int64 $tmp776 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i749, j763);
            panda$core$Bit $tmp777 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp776.value], p_s->data[j763.value]);
            if ($tmp777.value) {
            {
                goto $l757;
            }
            }
        }
        $l771:;
        int64_t $tmp779 = $tmp766 - j763.value;
        if ($tmp767) goto $l780; else goto $l781;
        $l780:;
        if ((uint64_t) $tmp779 >= 1) goto $l778; else goto $l770;
        $l781:;
        if ((uint64_t) $tmp779 > 1) goto $l778; else goto $l770;
        $l778:;
        j763.value += 1;
        goto $l768;
        $l770:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp784, i749);
        $returnValue745 = ((panda$core$String$Index$nullable) { $tmp784, true });
        return $returnValue745;
    }
    $l757:;
    int64_t $tmp787 = $tmp752 - i749.value;
    if ($tmp753) goto $l788; else goto $l789;
    $l788:;
    if ((uint64_t) $tmp787 >= 1) goto $l786; else goto $l756;
    $l789:;
    if ((uint64_t) $tmp787 > 1) goto $l786; else goto $l756;
    $l786:;
    i749.value += 1;
    goto $l754;
    $l756:;
    $returnValue745 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue745;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $returnValue793;
    panda$core$String$Index $tmp794 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp795 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp794);
    $returnValue793 = $tmp795;
    return $returnValue793;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$String$Index$nullable $returnValue798;
    panda$core$Int64 startPos800;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp803;
    panda$core$Range$LTpanda$core$Int64$GT $tmp822;
    panda$core$String$Index $tmp844;
    panda$core$Bit $tmp797 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp797.value) {
    {
        $returnValue798 = ((panda$core$String$Index$nullable) { .nonnull = false });
        return $returnValue798;
    }
    }
    panda$core$Int64 $tmp801 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp802 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp801);
    startPos800 = $tmp802;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp803, startPos800, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp805 = $tmp803.start.value;
    panda$core$Int64 i804 = { $tmp805 };
    int64_t $tmp807 = $tmp803.end.value;
    int64_t $tmp808 = $tmp803.step.value;
    bool $tmp809 = $tmp803.inclusive.value;
    bool $tmp816 = $tmp808 > 0;
    if ($tmp816) goto $l814; else goto $l815;
    $l814:;
    if ($tmp809) goto $l817; else goto $l818;
    $l817:;
    if ($tmp805 <= $tmp807) goto $l810; else goto $l812;
    $l818:;
    if ($tmp805 < $tmp807) goto $l810; else goto $l812;
    $l815:;
    if ($tmp809) goto $l819; else goto $l820;
    $l819:;
    if ($tmp805 >= $tmp807) goto $l810; else goto $l812;
    $l820:;
    if ($tmp805 > $tmp807) goto $l810; else goto $l812;
    $l810:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp822, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
        int64_t $tmp824 = $tmp822.min.value;
        panda$core$Int64 j823 = { $tmp824 };
        int64_t $tmp826 = $tmp822.max.value;
        bool $tmp827 = $tmp822.inclusive.value;
        if ($tmp827) goto $l834; else goto $l835;
        $l834:;
        if ($tmp824 <= $tmp826) goto $l828; else goto $l830;
        $l835:;
        if ($tmp824 < $tmp826) goto $l828; else goto $l830;
        $l828:;
        {
            panda$core$Int64 $tmp836 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i804, j823);
            panda$core$Bit $tmp837 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp836.value], p_s->data[j823.value]);
            if ($tmp837.value) {
            {
                goto $l813;
            }
            }
        }
        $l831:;
        int64_t $tmp839 = $tmp826 - j823.value;
        if ($tmp827) goto $l840; else goto $l841;
        $l840:;
        if ((uint64_t) $tmp839 >= 1) goto $l838; else goto $l830;
        $l841:;
        if ((uint64_t) $tmp839 > 1) goto $l838; else goto $l830;
        $l838:;
        j823.value += 1;
        goto $l828;
        $l830:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp844, i804);
        $returnValue798 = ((panda$core$String$Index$nullable) { $tmp844, true });
        return $returnValue798;
    }
    $l813:;
    if ($tmp816) goto $l847; else goto $l848;
    $l847:;
    int64_t $tmp849 = $tmp807 - i804.value;
    if ($tmp809) goto $l850; else goto $l851;
    $l850:;
    if ((uint64_t) $tmp849 >= $tmp808) goto $l846; else goto $l812;
    $l851:;
    if ((uint64_t) $tmp849 > $tmp808) goto $l846; else goto $l812;
    $l848:;
    int64_t $tmp853 = i804.value - $tmp807;
    if ($tmp809) goto $l854; else goto $l855;
    $l854:;
    if ((uint64_t) $tmp853 >= -$tmp808) goto $l846; else goto $l812;
    $l855:;
    if ((uint64_t) $tmp853 > -$tmp808) goto $l846; else goto $l812;
    $l846:;
    i804.value += $tmp808;
    goto $l810;
    $l812:;
    $returnValue798 = ((panda$core$String$Index$nullable) { .nonnull = false });
    return $returnValue798;
}
panda$core$Bit panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Bit $returnValue858;
    panda$core$Matcher* $tmp859;
    panda$core$Bit $tmp861;
    panda$core$Matcher* $tmp860 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
    $tmp859 = $tmp860;
    panda$core$Matcher$matches$R$panda$core$Bit(&$tmp861, $tmp859);
    $returnValue858 = $tmp861;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp859));
    return $returnValue858;
}
panda$core$Bit panda$core$String$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$core$Bit $returnValue863;
    panda$core$Matcher* $tmp864;
    panda$core$Matcher* $tmp865 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, self);
    $tmp864 = $tmp865;
    panda$core$Bit $tmp866 = panda$core$Matcher$find$R$panda$core$Bit($tmp864);
    $returnValue863 = $tmp866;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp864));
    return $returnValue863;
}
panda$collections$ListView* panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(panda$core$String* self, panda$core$RegularExpression* p_regex) {
    panda$core$Matcher* matcher871 = NULL;
    panda$core$Matcher* $tmp872;
    panda$core$Matcher* $tmp873;
    panda$core$Bit $tmp875;
    panda$collections$Array* result879 = NULL;
    panda$collections$Array* $tmp880;
    panda$collections$Array* $tmp881;
    panda$core$Range$LTpanda$core$Int64$GT $tmp883;
    panda$core$Int64 $tmp884;
    panda$core$String* $tmp898;
    panda$collections$ListView* $returnValue906;
    panda$collections$ListView* $tmp907;
    panda$collections$ListView* $tmp912;
    int $tmp870;
    {
        panda$core$Matcher* $tmp874 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, self);
        $tmp873 = $tmp874;
        $tmp872 = $tmp873;
        matcher871 = $tmp872;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp872));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
        panda$core$Matcher$matches$R$panda$core$Bit(&$tmp875, matcher871);
        if ($tmp875.value) {
        {
            int $tmp878;
            {
                panda$collections$Array* $tmp882 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp882);
                $tmp881 = $tmp882;
                $tmp880 = $tmp881;
                result879 = $tmp880;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp880));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp881));
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp884, matcher871);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp883, ((panda$core$Int64) { 1 }), $tmp884, ((panda$core$Bit) { false }));
                int64_t $tmp886 = $tmp883.min.value;
                panda$core$Int64 i885 = { $tmp886 };
                int64_t $tmp888 = $tmp883.max.value;
                bool $tmp889 = $tmp883.inclusive.value;
                if ($tmp889) goto $l896; else goto $l897;
                $l896:;
                if ($tmp886 <= $tmp888) goto $l890; else goto $l892;
                $l897:;
                if ($tmp886 < $tmp888) goto $l890; else goto $l892;
                $l890:;
                {
                    panda$core$String* $tmp899 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher871, i885);
                    $tmp898 = $tmp899;
                    panda$collections$Array$add$panda$collections$Array$T(result879, ((panda$core$Object*) $tmp898));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp898));
                }
                $l893:;
                int64_t $tmp901 = $tmp888 - i885.value;
                if ($tmp889) goto $l902; else goto $l903;
                $l902:;
                if ((uint64_t) $tmp901 >= 1) goto $l900; else goto $l892;
                $l903:;
                if ((uint64_t) $tmp901 > 1) goto $l900; else goto $l892;
                $l900:;
                i885.value += 1;
                goto $l890;
                $l892:;
                $tmp907 = ((panda$collections$ListView*) result879);
                $returnValue906 = $tmp907;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp907));
                $tmp878 = 0;
                goto $l876;
                $l908:;
                $tmp870 = 0;
                goto $l868;
                $l909:;
                return $returnValue906;
            }
            $l876:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result879));
            result879 = NULL;
            switch ($tmp878) {
                case 0: goto $l908;
            }
            $l911:;
        }
        }
        $tmp912 = NULL;
        $returnValue906 = $tmp912;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp912));
        $tmp870 = 1;
        goto $l868;
        $l913:;
        return $returnValue906;
    }
    $l868:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher871));
    matcher871 = NULL;
    switch ($tmp870) {
        case 0: goto $l909;
        case 1: goto $l913;
    }
    $l915:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$String* $returnValue921;
    panda$core$String* $tmp922;
    panda$core$MutableString* result925 = NULL;
    panda$core$MutableString* $tmp926;
    panda$core$MutableString* $tmp927;
    panda$core$String$Index index929;
    panda$core$String$Index$nullable nextIndex933;
    panda$core$String* $tmp935;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp936;
    panda$core$String* $tmp938;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp939;
    panda$core$String$Index $tmp941;
    panda$core$String* $tmp943;
    panda$core$String* $tmp944;
    int $tmp918;
    {
        panda$core$Bit $tmp920 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_search, &$s919);
        if ($tmp920.value) {
        {
            $tmp922 = self;
            $returnValue921 = $tmp922;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp922));
            $tmp918 = 0;
            goto $l916;
            $l923:;
            return $returnValue921;
        }
        }
        panda$core$MutableString* $tmp928 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp928);
        $tmp927 = $tmp928;
        $tmp926 = $tmp927;
        result925 = $tmp926;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp926));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp927));
        panda$core$String$Index $tmp930 = panda$core$String$start$R$panda$core$String$Index(self);
        index929 = $tmp930;
        $l931:;
        while (true) {
        {
            panda$core$String$Index$nullable $tmp934 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index929);
            nextIndex933 = $tmp934;
            if (((panda$core$Bit) { !nextIndex933.nonnull }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp936, ((panda$core$String$Index$nullable) { index929, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp937 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp936);
                $tmp935 = $tmp937;
                panda$core$MutableString$append$panda$core$String(result925, $tmp935);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp935));
                goto $l932;
            }
            }
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp939, index929, ((panda$core$String$Index) nextIndex933.value), ((panda$core$Bit) { false }));
            panda$core$String* $tmp940 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp939);
            $tmp938 = $tmp940;
            panda$core$MutableString$append$panda$core$String(result925, $tmp938);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp938));
            panda$core$MutableString$append$panda$core$String(result925, p_replacement);
            panda$core$Int64 $tmp942 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex933.value).value, p_search->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp941, $tmp942);
            index929 = $tmp941;
        }
        }
        $l932:;
        panda$core$String* $tmp945 = panda$core$MutableString$finish$R$panda$core$String(result925);
        $tmp944 = $tmp945;
        $tmp943 = $tmp944;
        $returnValue921 = $tmp943;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp943));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp944));
        $tmp918 = 1;
        goto $l916;
        $l946:;
        return $returnValue921;
    }
    $l916:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result925));
    result925 = NULL;
    switch ($tmp918) {
        case 0: goto $l923;
        case 1: goto $l946;
    }
    $l948:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result952 = NULL;
    panda$core$MutableString* $tmp953;
    panda$core$MutableString* $tmp954;
    panda$core$Matcher* matcher956 = NULL;
    panda$core$Matcher* $tmp957;
    panda$core$Matcher* $tmp958;
    panda$core$String* $returnValue964;
    panda$core$String* $tmp965;
    panda$core$String* $tmp966;
    int $tmp951;
    {
        panda$core$MutableString* $tmp955 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp955);
        $tmp954 = $tmp955;
        $tmp953 = $tmp954;
        result952 = $tmp953;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp953));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
        panda$core$Matcher* $tmp959 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp958 = $tmp959;
        $tmp957 = $tmp958;
        matcher956 = $tmp957;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp957));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp958));
        $l960:;
        panda$core$Bit $tmp963 = panda$core$Matcher$find$R$panda$core$Bit(matcher956);
        bool $tmp962 = $tmp963.value;
        if (!$tmp962) goto $l961;
        {
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String(matcher956, result952, p_replacement);
        }
        goto $l960;
        $l961:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher956, result952);
        panda$core$String* $tmp967 = panda$core$MutableString$finish$R$panda$core$String(result952);
        $tmp966 = $tmp967;
        $tmp965 = $tmp966;
        $returnValue964 = $tmp965;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp965));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp966));
        $tmp951 = 0;
        goto $l949;
        $l968:;
        return $returnValue964;
    }
    $l949:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher956));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result952));
    result952 = NULL;
    matcher956 = NULL;
    switch ($tmp951) {
        case 0: goto $l968;
    }
    $l970:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result974 = NULL;
    panda$core$MutableString* $tmp975;
    panda$core$MutableString* $tmp976;
    panda$core$Matcher* matcher978 = NULL;
    panda$core$Matcher* $tmp979;
    panda$core$Matcher* $tmp980;
    panda$core$String* $tmp986;
    panda$core$Object* $tmp987;
    panda$core$String* $tmp988;
    panda$core$Object* $tmp990;
    panda$core$String* $returnValue995;
    panda$core$String* $tmp996;
    panda$core$String* $tmp997;
    int $tmp973;
    {
        panda$core$MutableString* $tmp977 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp977);
        $tmp976 = $tmp977;
        $tmp975 = $tmp976;
        result974 = $tmp975;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp975));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp976));
        panda$core$Matcher* $tmp981 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp980 = $tmp981;
        $tmp979 = $tmp980;
        matcher978 = $tmp979;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp979));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp980));
        $l982:;
        panda$core$Bit $tmp985 = panda$core$Matcher$find$R$panda$core$Bit(matcher978);
        bool $tmp984 = $tmp985.value;
        if (!$tmp984) goto $l983;
        {
            panda$core$String* $tmp989 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher978, ((panda$core$Int64) { 0 }));
            $tmp988 = $tmp989;
            if (p_replacement->target) {
                $tmp990 = (($fn991) p_replacement->pointer)(((panda$core$String*) p_replacement->target), $tmp988);
            } else {
                $tmp990 = (($fn992) p_replacement->pointer)($tmp988);
            }
            $tmp987 = $tmp990;
            panda$core$String* $tmp994 = (($fn993) $tmp987->$class->vtable[0])($tmp987);
            $tmp986 = $tmp994;
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher978, result974, $tmp986, ((panda$core$Bit) { false }));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp986));
            panda$core$Panda$unref$panda$core$Object($tmp987);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp988));
        }
        goto $l982;
        $l983:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher978, result974);
        panda$core$String* $tmp998 = panda$core$MutableString$convert$R$panda$core$String(result974);
        $tmp997 = $tmp998;
        $tmp996 = $tmp997;
        $returnValue995 = $tmp996;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp996));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp997));
        $tmp973 = 0;
        goto $l971;
        $l999:;
        return $returnValue995;
    }
    $l971:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher978));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result974));
    result974 = NULL;
    matcher978 = NULL;
    switch ($tmp973) {
        case 0: goto $l999;
    }
    $l1001:;
    abort();
}
panda$core$String* panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(panda$core$String* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$MutableString* result1005 = NULL;
    panda$core$MutableString* $tmp1006;
    panda$core$MutableString* $tmp1007;
    panda$core$Matcher* matcher1009 = NULL;
    panda$core$Matcher* $tmp1010;
    panda$core$Matcher* $tmp1011;
    panda$collections$Array* groups1020 = NULL;
    panda$collections$Array* $tmp1021;
    panda$collections$Array* $tmp1022;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1024;
    panda$core$Int64 $tmp1025;
    panda$core$String* $tmp1039;
    panda$core$String* $tmp1047;
    panda$core$Object* $tmp1048;
    panda$core$Object* $tmp1049;
    panda$core$String* $returnValue1055;
    panda$core$String* $tmp1056;
    panda$core$String* $tmp1057;
    int $tmp1004;
    {
        panda$core$MutableString* $tmp1008 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp1008);
        $tmp1007 = $tmp1008;
        $tmp1006 = $tmp1007;
        result1005 = $tmp1006;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1006));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1007));
        panda$core$Matcher* $tmp1012 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, self);
        $tmp1011 = $tmp1012;
        $tmp1010 = $tmp1011;
        matcher1009 = $tmp1010;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1010));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1011));
        $l1013:;
        panda$core$Bit $tmp1016 = panda$core$Matcher$find$R$panda$core$Bit(matcher1009);
        bool $tmp1015 = $tmp1016.value;
        if (!$tmp1015) goto $l1014;
        {
            int $tmp1019;
            {
                panda$collections$Array* $tmp1023 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1023);
                $tmp1022 = $tmp1023;
                $tmp1021 = $tmp1022;
                groups1020 = $tmp1021;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1021));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1022));
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp1025, matcher1009);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1024, ((panda$core$Int64) { 0 }), $tmp1025, ((panda$core$Bit) { false }));
                int64_t $tmp1027 = $tmp1024.min.value;
                panda$core$Int64 i1026 = { $tmp1027 };
                int64_t $tmp1029 = $tmp1024.max.value;
                bool $tmp1030 = $tmp1024.inclusive.value;
                if ($tmp1030) goto $l1037; else goto $l1038;
                $l1037:;
                if ($tmp1027 <= $tmp1029) goto $l1031; else goto $l1033;
                $l1038:;
                if ($tmp1027 < $tmp1029) goto $l1031; else goto $l1033;
                $l1031:;
                {
                    panda$core$String* $tmp1040 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(matcher1009, i1026);
                    $tmp1039 = $tmp1040;
                    panda$collections$Array$add$panda$collections$Array$T(groups1020, ((panda$core$Object*) $tmp1039));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1039));
                }
                $l1034:;
                int64_t $tmp1042 = $tmp1029 - i1026.value;
                if ($tmp1030) goto $l1043; else goto $l1044;
                $l1043:;
                if ((uint64_t) $tmp1042 >= 1) goto $l1041; else goto $l1033;
                $l1044:;
                if ((uint64_t) $tmp1042 > 1) goto $l1041; else goto $l1033;
                $l1041:;
                i1026.value += 1;
                goto $l1031;
                $l1033:;
                if (p_replacement->target) {
                    $tmp1049 = (($fn1050) p_replacement->pointer)(((panda$collections$ListView*) p_replacement->target), ((panda$collections$ListView*) groups1020));
                } else {
                    $tmp1049 = (($fn1051) p_replacement->pointer)(((panda$collections$ListView*) groups1020));
                }
                $tmp1048 = $tmp1049;
                panda$core$String* $tmp1053 = (($fn1052) $tmp1048->$class->vtable[0])($tmp1048);
                $tmp1047 = $tmp1053;
                panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher1009, result1005, $tmp1047, ((panda$core$Bit) { false }));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1047));
                panda$core$Panda$unref$panda$core$Object($tmp1048);
            }
            $tmp1019 = -1;
            goto $l1017;
            $l1017:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) groups1020));
            groups1020 = NULL;
            switch ($tmp1019) {
                case -1: goto $l1054;
            }
            $l1054:;
        }
        goto $l1013;
        $l1014:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher1009, result1005);
        panda$core$String* $tmp1058 = panda$core$MutableString$convert$R$panda$core$String(result1005);
        $tmp1057 = $tmp1058;
        $tmp1056 = $tmp1057;
        $returnValue1055 = $tmp1056;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1056));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1057));
        $tmp1004 = 0;
        goto $l1002;
        $l1059:;
        return $returnValue1055;
    }
    $l1002:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1009));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1005));
    result1005 = NULL;
    matcher1009 = NULL;
    switch ($tmp1004) {
        case 0: goto $l1059;
    }
    $l1061:;
    abort();
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle) {
    panda$collections$Iterator* $returnValue1062;
    panda$collections$Iterator* $tmp1063;
    panda$collections$Iterator* $tmp1064;
    panda$collections$Iterator* $tmp1065 = panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(self, p_needle, ((panda$core$Bit) { false }));
    $tmp1064 = $tmp1065;
    $tmp1063 = $tmp1064;
    $returnValue1062 = $tmp1063;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1063));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1064));
    return $returnValue1062;
}
panda$collections$Iterator* panda$core$String$find$panda$core$String$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(panda$core$String* self, panda$core$String* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1067;
    panda$collections$Iterator* $tmp1068;
    panda$core$String$MatchIterator* $tmp1069;
    panda$core$String$MatchIterator* $tmp1070 = (panda$core$String$MatchIterator*) pandaObjectAlloc(46, (panda$core$Class*) &panda$core$String$MatchIterator$class);
    panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit($tmp1070, self, p_needle, p_overlapping);
    $tmp1069 = $tmp1070;
    $tmp1068 = ((panda$collections$Iterator*) $tmp1069);
    $returnValue1067 = $tmp1068;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1068));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1069));
    return $returnValue1067;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle) {
    panda$collections$Iterator* $returnValue1072;
    panda$collections$Iterator* $tmp1073;
    panda$collections$Iterator* $tmp1074;
    panda$collections$Iterator* $tmp1075 = panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(self, p_needle, ((panda$core$Bit) { false }));
    $tmp1074 = $tmp1075;
    $tmp1073 = $tmp1074;
    $returnValue1072 = $tmp1073;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1073));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1074));
    return $returnValue1072;
}
panda$collections$Iterator* panda$core$String$find$panda$core$RegularExpression$panda$core$Bit$R$panda$collections$Iterator$LTpanda$core$String$Match$GT(panda$core$String* self, panda$core$RegularExpression* p_needle, panda$core$Bit p_overlapping) {
    panda$collections$Iterator* $returnValue1077;
    panda$collections$Iterator* $tmp1078;
    panda$core$String$RegexMatchIterator* $tmp1079;
    panda$core$String$RegexMatchIterator* $tmp1080 = (panda$core$String$RegexMatchIterator*) pandaObjectAlloc(34, (panda$core$Class*) &panda$core$String$RegexMatchIterator$class);
    panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit($tmp1080, self, p_needle, p_overlapping);
    $tmp1079 = $tmp1080;
    $tmp1078 = ((panda$collections$Iterator*) $tmp1079);
    $returnValue1077 = $tmp1078;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1078));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1079));
    return $returnValue1077;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1082;
    panda$core$String$Index $tmp1083;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1083, ((panda$core$Int64) { 0 }));
    $returnValue1082 = $tmp1083;
    return $returnValue1082;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $returnValue1085;
    panda$core$String$Index $tmp1086;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1086, self->_length);
    $returnValue1085 = $tmp1086;
    return $returnValue1085;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c1092;
    panda$core$String$Index $returnValue1095;
    panda$core$String$Index $tmp1096;
    panda$core$String$Index $tmp1100;
    panda$core$String$Index $tmp1104;
    panda$core$String$Index $tmp1107;
    panda$core$Bit $tmp1088 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    if ($tmp1088.value) goto $l1089; else goto $l1090;
    $l1090:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1091, (panda$core$Int64) { 1113 });
    abort();
    $l1089:;
    int64_t $tmp1093 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c1092 = $tmp1093;
    bool $tmp1094 = c1092 >= 240;
    if (((panda$core$Bit) { $tmp1094 }).value) {
    {
        panda$core$Int64 $tmp1097 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1096, $tmp1097);
        $returnValue1095 = $tmp1096;
        return $returnValue1095;
    }
    }
    bool $tmp1099 = c1092 >= 224;
    if (((panda$core$Bit) { $tmp1099 }).value) {
    {
        panda$core$Int64 $tmp1101 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1100, $tmp1101);
        $returnValue1095 = $tmp1100;
        return $returnValue1095;
    }
    }
    bool $tmp1103 = c1092 >= 192;
    if (((panda$core$Bit) { $tmp1103 }).value) {
    {
        panda$core$Int64 $tmp1105 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp1104, $tmp1105);
        $returnValue1095 = $tmp1104;
        return $returnValue1095;
    }
    }
    panda$core$Int64 $tmp1108 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp1107, $tmp1108);
    $returnValue1095 = $tmp1107;
    return $returnValue1095;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue1114;
    panda$core$String$Index $returnValue1126;
    panda$core$String$Index $tmp1127;
    panda$core$Bit $tmp1110 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, ((panda$core$Int64) { 0 }));
    if ($tmp1110.value) goto $l1111; else goto $l1112;
    $l1112:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1113, (panda$core$Int64) { 1134 });
    abort();
    $l1111:;
    panda$core$Int64 $tmp1115 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue1114 = $tmp1115;
    $l1116:;
    int64_t $tmp1120 = ((int64_t) self->data[newValue1114.value].value) & 255;
    bool $tmp1121 = $tmp1120 >= 128;
    bool $tmp1119 = $tmp1121;
    if (!$tmp1119) goto $l1122;
    int64_t $tmp1123 = ((int64_t) self->data[newValue1114.value].value) & 255;
    bool $tmp1124 = $tmp1123 < 192;
    $tmp1119 = $tmp1124;
    $l1122:;
    bool $tmp1118 = ((panda$core$Bit) { $tmp1119 }).value;
    if (!$tmp1118) goto $l1117;
    {
        panda$core$Int64 $tmp1125 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue1114, ((panda$core$Int64) { 1 }));
        newValue1114 = $tmp1125;
    }
    goto $l1116;
    $l1117:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp1127, newValue1114);
    $returnValue1126 = $tmp1127;
    return $returnValue1126;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result1129;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1131;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp1152;
    panda$core$String$Index $returnValue1183;
    result1129 = p_index;
    panda$core$Bit $tmp1130 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp1130.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1131, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Bit) { false }));
        int64_t $tmp1133 = $tmp1131.min.value;
        panda$core$Int64 i1132 = { $tmp1133 };
        int64_t $tmp1135 = $tmp1131.max.value;
        bool $tmp1136 = $tmp1131.inclusive.value;
        if ($tmp1136) goto $l1143; else goto $l1144;
        $l1143:;
        if ($tmp1133 <= $tmp1135) goto $l1137; else goto $l1139;
        $l1144:;
        if ($tmp1133 < $tmp1135) goto $l1137; else goto $l1139;
        $l1137:;
        {
            panda$core$String$Index $tmp1145 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result1129);
            result1129 = $tmp1145;
        }
        $l1140:;
        int64_t $tmp1147 = $tmp1135 - i1132.value;
        if ($tmp1136) goto $l1148; else goto $l1149;
        $l1148:;
        if ((uint64_t) $tmp1147 >= 1) goto $l1146; else goto $l1139;
        $l1149:;
        if ((uint64_t) $tmp1147 > 1) goto $l1146; else goto $l1139;
        $l1146:;
        i1132.value += 1;
        goto $l1137;
        $l1139:;
    }
    }
    else {
    {
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1152, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
        int64_t $tmp1154 = $tmp1152.start.value;
        panda$core$Int64 i1153 = { $tmp1154 };
        int64_t $tmp1156 = $tmp1152.end.value;
        int64_t $tmp1157 = $tmp1152.step.value;
        bool $tmp1158 = $tmp1152.inclusive.value;
        bool $tmp1165 = $tmp1157 > 0;
        if ($tmp1165) goto $l1163; else goto $l1164;
        $l1163:;
        if ($tmp1158) goto $l1166; else goto $l1167;
        $l1166:;
        if ($tmp1154 <= $tmp1156) goto $l1159; else goto $l1161;
        $l1167:;
        if ($tmp1154 < $tmp1156) goto $l1159; else goto $l1161;
        $l1164:;
        if ($tmp1158) goto $l1168; else goto $l1169;
        $l1168:;
        if ($tmp1154 >= $tmp1156) goto $l1159; else goto $l1161;
        $l1169:;
        if ($tmp1154 > $tmp1156) goto $l1159; else goto $l1161;
        $l1159:;
        {
            panda$core$String$Index $tmp1171 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result1129);
            result1129 = $tmp1171;
        }
        $l1162:;
        if ($tmp1165) goto $l1173; else goto $l1174;
        $l1173:;
        int64_t $tmp1175 = $tmp1156 - i1153.value;
        if ($tmp1158) goto $l1176; else goto $l1177;
        $l1176:;
        if ((uint64_t) $tmp1175 >= $tmp1157) goto $l1172; else goto $l1161;
        $l1177:;
        if ((uint64_t) $tmp1175 > $tmp1157) goto $l1172; else goto $l1161;
        $l1174:;
        int64_t $tmp1179 = i1153.value - $tmp1156;
        if ($tmp1158) goto $l1180; else goto $l1181;
        $l1180:;
        if ((uint64_t) $tmp1179 >= -$tmp1157) goto $l1172; else goto $l1161;
        $l1181:;
        if ((uint64_t) $tmp1179 > -$tmp1157) goto $l1172; else goto $l1161;
        $l1172:;
        i1153.value += $tmp1157;
        goto $l1159;
        $l1161:;
    }
    }
    $returnValue1183 = result1129;
    return $returnValue1183;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1185;
    panda$core$String* $tmp1186;
    panda$core$String* $tmp1187;
    panda$core$Char32 $tmp1188;
    panda$core$Char32$init$panda$core$Int32(&$tmp1188, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1189 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1188);
    $tmp1187 = $tmp1189;
    $tmp1186 = $tmp1187;
    $returnValue1185 = $tmp1186;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1186));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1187));
    return $returnValue1185;
}
panda$core$String* panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1193;
    panda$core$String* $tmp1194;
    panda$core$String* $tmp1196;
    panda$core$String* $tmp1197;
    panda$core$String* $tmp1198;
    panda$core$Int64 $tmp1191 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1192 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1191, p_width);
    if ($tmp1192.value) {
    {
        $tmp1194 = self;
        $returnValue1193 = $tmp1194;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1194));
        return $returnValue1193;
    }
    }
    panda$core$Int64 $tmp1199 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1200 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1199);
    panda$core$String* $tmp1201 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1200);
    $tmp1198 = $tmp1201;
    panda$core$String* $tmp1202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp1198);
    $tmp1197 = $tmp1202;
    $tmp1196 = $tmp1197;
    $returnValue1193 = $tmp1196;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1196));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1197));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1198));
    return $returnValue1193;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1204;
    panda$core$String* $tmp1205;
    panda$core$String* $tmp1206;
    panda$core$Char32 $tmp1207;
    panda$core$Char32$init$panda$core$Int32(&$tmp1207, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1208 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1207);
    $tmp1206 = $tmp1208;
    $tmp1205 = $tmp1206;
    $returnValue1204 = $tmp1205;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1205));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1206));
    return $returnValue1204;
}
panda$core$String* panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1212;
    panda$core$String* $tmp1213;
    panda$core$String* $tmp1215;
    panda$core$String* $tmp1216;
    panda$core$String* $tmp1217;
    panda$core$Int64 $tmp1210 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1211 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1210, p_width);
    if ($tmp1211.value) {
    {
        $tmp1213 = self;
        $returnValue1212 = $tmp1213;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1213));
        return $returnValue1212;
    }
    }
    panda$core$Int64 $tmp1218 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1219 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1218);
    panda$core$String* $tmp1220 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, $tmp1219);
    $tmp1217 = $tmp1220;
    panda$core$String* $tmp1221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1217, self);
    $tmp1216 = $tmp1221;
    $tmp1215 = $tmp1216;
    $returnValue1212 = $tmp1215;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1215));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1216));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1217));
    return $returnValue1212;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width) {
    panda$core$String* $returnValue1223;
    panda$core$String* $tmp1224;
    panda$core$String* $tmp1225;
    panda$core$Char32 $tmp1226;
    panda$core$Char32$init$panda$core$Int32(&$tmp1226, ((panda$core$Int32) { 32 }));
    panda$core$String* $tmp1227 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(self, p_width, $tmp1226);
    $tmp1225 = $tmp1227;
    $tmp1224 = $tmp1225;
    $returnValue1223 = $tmp1224;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1224));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1225));
    return $returnValue1223;
}
panda$core$String* panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_width, panda$core$Char32 p_fill) {
    panda$core$String* $returnValue1231;
    panda$core$String* $tmp1232;
    panda$core$Int64 pad1234;
    panda$core$Int64 left1237;
    panda$core$Int64 right1239;
    panda$core$String* $tmp1241;
    panda$core$String* $tmp1242;
    panda$core$String* $tmp1243;
    panda$core$String* $tmp1244;
    panda$core$String* $tmp1247;
    panda$core$Int64 $tmp1229 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Bit $tmp1230 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1229, p_width);
    if ($tmp1230.value) {
    {
        $tmp1232 = self;
        $returnValue1231 = $tmp1232;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1232));
        return $returnValue1231;
    }
    }
    panda$core$Int64 $tmp1235 = panda$core$String$length$R$panda$core$Int64(self);
    panda$core$Int64 $tmp1236 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_width, $tmp1235);
    pad1234 = $tmp1236;
    panda$core$Int64 $tmp1238 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(pad1234, ((panda$core$Int64) { 2 }));
    left1237 = $tmp1238;
    panda$core$Int64 $tmp1240 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(pad1234, left1237);
    right1239 = $tmp1240;
    panda$core$String* $tmp1245 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, left1237);
    $tmp1244 = $tmp1245;
    panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1244, self);
    $tmp1243 = $tmp1246;
    panda$core$String* $tmp1248 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_fill, right1239);
    $tmp1247 = $tmp1248;
    panda$core$String* $tmp1249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1243, $tmp1247);
    $tmp1242 = $tmp1249;
    $tmp1241 = $tmp1242;
    $returnValue1231 = $tmp1241;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1241));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1242));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1247));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1243));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1244));
    return $returnValue1231;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $returnValue1251;
    panda$collections$Array* $tmp1252;
    panda$collections$Array* $tmp1253;
    panda$collections$Array* $tmp1254 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    $tmp1253 = $tmp1254;
    $tmp1252 = $tmp1253;
    $returnValue1251 = $tmp1252;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1252));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1253));
    return $returnValue1251;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1259 = NULL;
    panda$collections$Array* $tmp1260;
    panda$collections$Array* $tmp1261;
    panda$core$String$Index index1263;
    panda$core$String$Index$nullable nextIndex1267;
    panda$core$String* $tmp1276;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1277;
    panda$core$String* $tmp1279;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1280;
    panda$core$String$Index $tmp1282;
    panda$collections$Array* $returnValue1284;
    panda$collections$Array* $tmp1285;
    int $tmp1258;
    {
        panda$collections$Array* $tmp1262 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1262);
        $tmp1261 = $tmp1262;
        $tmp1260 = $tmp1261;
        result1259 = $tmp1260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1260));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1261));
        panda$core$String$Index $tmp1264 = panda$core$String$start$R$panda$core$String$Index(self);
        index1263 = $tmp1264;
        $l1265:;
        while (true) {
        {
            memset(&nextIndex1267, 0, sizeof(nextIndex1267));
            panda$core$Bit $tmp1268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
            if ($tmp1268.value) {
            {
                panda$core$String$Index $tmp1269 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index1263);
                nextIndex1267 = ((panda$core$String$Index$nullable) { $tmp1269, true });
            }
            }
            else {
            {
                panda$core$String$Index$nullable $tmp1270 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index1263);
                nextIndex1267 = $tmp1270;
            }
            }
            bool $tmp1271 = ((panda$core$Bit) { !nextIndex1267.nonnull }).value;
            if ($tmp1271) goto $l1272;
            panda$core$Int64 $tmp1273 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1259->count, $tmp1273);
            $tmp1271 = $tmp1274.value;
            $l1272:;
            panda$core$Bit $tmp1275 = { $tmp1271 };
            if ($tmp1275.value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1277, ((panda$core$String$Index$nullable) { index1263, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp1278 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1277);
                $tmp1276 = $tmp1278;
                panda$collections$Array$add$panda$collections$Array$T(result1259, ((panda$core$Object*) $tmp1276));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1276));
                goto $l1266;
            }
            }
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1280, index1263, ((panda$core$String$Index) nextIndex1267.value), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1281 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1280);
            $tmp1279 = $tmp1281;
            panda$collections$Array$add$panda$collections$Array$T(result1259, ((panda$core$Object*) $tmp1279));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1279));
            panda$core$Int64 $tmp1283 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex1267.value).value, p_delimiter->_length);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1282, $tmp1283);
            index1263 = $tmp1282;
        }
        }
        $l1266:;
        $tmp1285 = result1259;
        $returnValue1284 = $tmp1285;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1285));
        $tmp1258 = 0;
        goto $l1256;
        $l1286:;
        return $returnValue1284;
    }
    $l1256:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1259));
    result1259 = NULL;
    switch ($tmp1258) {
        case 0: goto $l1286;
    }
    $l1288:;
    abort();
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result1297 = NULL;
    panda$collections$Array* $tmp1298;
    panda$collections$Array* $tmp1299;
    panda$core$Matcher* matcher1301 = NULL;
    panda$core$Matcher* $tmp1302;
    panda$core$Matcher* $tmp1303;
    panda$core$String$Index index1305;
    panda$core$Bit found1309;
    panda$core$String* $tmp1317;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1318;
    panda$core$String$Index start1320;
    panda$core$String$Index $tmp1321;
    panda$core$String* $tmp1322;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1323;
    panda$core$String$Index $tmp1325;
    panda$core$String$Index $tmp1326;
    panda$collections$ListView* $returnValue1328;
    panda$collections$ListView* $tmp1329;
    panda$core$Bit $tmp1289 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_maxResults, ((panda$core$Int64) { 0 }));
    if ($tmp1289.value) goto $l1290; else goto $l1291;
    $l1291:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1292, (panda$core$Int64) { 1313 }, &$s1293);
    abort();
    $l1290:;
    int $tmp1296;
    {
        panda$collections$Array* $tmp1300 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1300);
        $tmp1299 = $tmp1300;
        $tmp1298 = $tmp1299;
        result1297 = $tmp1298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1299));
        panda$core$Matcher* $tmp1304 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_delimiter, self);
        $tmp1303 = $tmp1304;
        $tmp1302 = $tmp1303;
        matcher1301 = $tmp1302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1303));
        panda$core$String$Index $tmp1306 = panda$core$String$start$R$panda$core$String$Index(self);
        index1305 = $tmp1306;
        $l1307:;
        while (true) {
        {
            panda$core$Bit $tmp1310 = panda$core$Matcher$find$R$panda$core$Bit(matcher1301);
            found1309 = $tmp1310;
            panda$core$Bit $tmp1312 = panda$core$Bit$$NOT$R$panda$core$Bit(found1309);
            bool $tmp1311 = $tmp1312.value;
            if ($tmp1311) goto $l1313;
            panda$core$Int64 $tmp1314 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result1297->count, $tmp1314);
            $tmp1311 = $tmp1315.value;
            $l1313:;
            panda$core$Bit $tmp1316 = { $tmp1311 };
            if ($tmp1316.value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1318, ((panda$core$String$Index$nullable) { index1305, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp1319 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp1318);
                $tmp1317 = $tmp1319;
                panda$collections$Array$add$panda$collections$Array$T(result1297, ((panda$core$Object*) $tmp1317));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1317));
                goto $l1308;
            }
            }
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1321, matcher1301);
            start1320 = $tmp1321;
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1323, index1305, start1320, ((panda$core$Bit) { false }));
            panda$core$String* $tmp1324 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self, $tmp1323);
            $tmp1322 = $tmp1324;
            panda$collections$Array$add$panda$collections$Array$T(result1297, ((panda$core$Object*) $tmp1322));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1322));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1326, matcher1301);
            panda$core$Int64 $tmp1327 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(start1320.value, $tmp1326.value);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1325, $tmp1327);
            index1305 = $tmp1325;
        }
        }
        $l1308:;
        $tmp1329 = ((panda$collections$ListView*) result1297);
        $returnValue1328 = $tmp1329;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1329));
        $tmp1296 = 0;
        goto $l1294;
        $l1330:;
        return $returnValue1328;
    }
    $l1294:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher1301));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1297));
    result1297 = NULL;
    matcher1301 = NULL;
    switch ($tmp1296) {
        case 0: goto $l1330;
    }
    $l1332:;
    abort();
}
panda$collections$ListView* panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT(panda$core$String* self, panda$core$RegularExpression* p_delimiter) {
    panda$collections$ListView* $returnValue1333;
    panda$collections$ListView* $tmp1334;
    panda$collections$ListView* $tmp1335;
    panda$collections$ListView* $tmp1336 = panda$core$String$split$panda$core$RegularExpression$panda$core$Int64$R$panda$collections$ListView$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    $tmp1335 = $tmp1336;
    $tmp1334 = $tmp1335;
    $returnValue1333 = $tmp1334;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1334));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1335));
    return $returnValue1333;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64$nullable $returnValue1339;
    panda$core$Int64 result1341;
    panda$core$Int64 start1342;
    panda$core$Char8 $tmp1343;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1345;
    panda$core$Int64 digit1359;
    panda$core$Char8 $tmp1375;
    panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1338.value) {
    {
        $returnValue1339 = ((panda$core$Int64$nullable) { .nonnull = false });
        return $returnValue1339;
    }
    }
    result1341 = ((panda$core$Int64) { 0 });
    memset(&start1342, 0, sizeof(start1342));
    panda$core$Char8$init$panda$core$UInt8(&$tmp1343, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1344 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1343);
    if ($tmp1344.value) {
    {
        start1342 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start1342 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1345, start1342, self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1347 = $tmp1345.min.value;
    panda$core$Int64 i1346 = { $tmp1347 };
    int64_t $tmp1349 = $tmp1345.max.value;
    bool $tmp1350 = $tmp1345.inclusive.value;
    if ($tmp1350) goto $l1357; else goto $l1358;
    $l1357:;
    if ($tmp1347 <= $tmp1349) goto $l1351; else goto $l1353;
    $l1358:;
    if ($tmp1347 < $tmp1349) goto $l1351; else goto $l1353;
    $l1351:;
    {
        panda$core$Int64 $tmp1360 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i1346.value].value) }), ((panda$core$Int64) { 48 }));
        digit1359 = $tmp1360;
        panda$core$Bit $tmp1362 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit1359, ((panda$core$Int64) { 0 }));
        bool $tmp1361 = $tmp1362.value;
        if ($tmp1361) goto $l1363;
        panda$core$Bit $tmp1364 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit1359, ((panda$core$Int64) { 9 }));
        $tmp1361 = $tmp1364.value;
        $l1363:;
        panda$core$Bit $tmp1365 = { $tmp1361 };
        if ($tmp1365.value) {
        {
            $returnValue1339 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue1339;
        }
        }
        panda$core$Int64 $tmp1367 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result1341, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp1368 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1367, digit1359);
        result1341 = $tmp1368;
    }
    $l1354:;
    int64_t $tmp1370 = $tmp1349 - i1346.value;
    if ($tmp1350) goto $l1371; else goto $l1372;
    $l1371:;
    if ((uint64_t) $tmp1370 >= 1) goto $l1369; else goto $l1353;
    $l1372:;
    if ((uint64_t) $tmp1370 > 1) goto $l1369; else goto $l1353;
    $l1369:;
    i1346.value += 1;
    goto $l1351;
    $l1353:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1375, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp1376 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp1375);
    if ($tmp1376.value) {
    {
        panda$core$Int64 $tmp1377 = panda$core$Int64$$SUB$R$panda$core$Int64(result1341);
        result1341 = $tmp1377;
    }
    }
    $returnValue1339 = ((panda$core$Int64$nullable) { result1341, true });
    return $returnValue1339;
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64$nullable $returnValue1380;
    panda$core$UInt64 result1382;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1383;
    panda$core$UInt64 digit1397;
    panda$core$Bit $tmp1379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp1379.value) {
    {
        $returnValue1380 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue1380;
    }
    }
    result1382 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1383, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
    int64_t $tmp1385 = $tmp1383.min.value;
    panda$core$Int64 i1384 = { $tmp1385 };
    int64_t $tmp1387 = $tmp1383.max.value;
    bool $tmp1388 = $tmp1383.inclusive.value;
    if ($tmp1388) goto $l1395; else goto $l1396;
    $l1395:;
    if ($tmp1385 <= $tmp1387) goto $l1389; else goto $l1391;
    $l1396:;
    if ($tmp1385 < $tmp1387) goto $l1389; else goto $l1391;
    $l1389:;
    {
        panda$core$UInt64 $tmp1398 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((uint64_t) self->data[i1384.value].value) }), ((panda$core$UInt64) { 48 }));
        digit1397 = $tmp1398;
        panda$core$Bit $tmp1400 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit1397, ((panda$core$UInt64) { 0 }));
        bool $tmp1399 = $tmp1400.value;
        if ($tmp1399) goto $l1401;
        panda$core$Bit $tmp1402 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit1397, ((panda$core$UInt64) { 9 }));
        $tmp1399 = $tmp1402.value;
        $l1401:;
        panda$core$Bit $tmp1403 = { $tmp1399 };
        if ($tmp1403.value) {
        {
            $returnValue1380 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $returnValue1380;
        }
        }
        panda$core$UInt64 $tmp1405 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result1382, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp1406 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp1405, digit1397);
        result1382 = $tmp1406;
    }
    $l1392:;
    int64_t $tmp1408 = $tmp1387 - i1384.value;
    if ($tmp1388) goto $l1409; else goto $l1410;
    $l1409:;
    if ((uint64_t) $tmp1408 >= 1) goto $l1407; else goto $l1391;
    $l1410:;
    if ((uint64_t) $tmp1408 > 1) goto $l1407; else goto $l1391;
    $l1407:;
    i1384.value += 1;
    goto $l1389;
    $l1391:;
    $returnValue1380 = ((panda$core$UInt64$nullable) { result1382, true });
    return $returnValue1380;
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 h1415;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1416;
    panda$core$Int64 $returnValue1438;
    panda$core$Bit $tmp1414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_hash, ((panda$core$Int64) { 0 }));
    if ($tmp1414.value) {
    {
        h1415 = ((panda$core$Int64) { 1 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1416, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Bit) { false }));
        int64_t $tmp1418 = $tmp1416.min.value;
        panda$core$Int64 i1417 = { $tmp1418 };
        int64_t $tmp1420 = $tmp1416.max.value;
        bool $tmp1421 = $tmp1416.inclusive.value;
        if ($tmp1421) goto $l1428; else goto $l1429;
        $l1428:;
        if ($tmp1418 <= $tmp1420) goto $l1422; else goto $l1424;
        $l1429:;
        if ($tmp1418 < $tmp1420) goto $l1422; else goto $l1424;
        $l1422:;
        {
            panda$core$Int64 $tmp1430 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(h1415, ((panda$core$Int64) { 101 }));
            panda$core$Int64 $tmp1431 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1430, ((panda$core$Int64) { ((int64_t) self->data[i1417.value].value) }));
            h1415 = $tmp1431;
        }
        $l1425:;
        int64_t $tmp1433 = $tmp1420 - i1417.value;
        if ($tmp1421) goto $l1434; else goto $l1435;
        $l1434:;
        if ((uint64_t) $tmp1433 >= 1) goto $l1432; else goto $l1424;
        $l1435:;
        if ((uint64_t) $tmp1433 > 1) goto $l1432; else goto $l1424;
        $l1432:;
        i1417.value += 1;
        goto $l1422;
        $l1424:;
        self->_hash = h1415;
    }
    }
    $returnValue1438 = self->_hash;
    return $returnValue1438;
}

