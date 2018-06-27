#include "panda/collections/SpecializedArrayIterator.LTorg/pandalanguage/regex/RegexToken.GT.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/regex/RegexToken.h"
#include "panda/collections/SpecializedArray.LTorg/pandalanguage/regex/RegexToken.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"
__attribute__((weak)) panda$core$Object* panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$next$R$org$pandalanguage$regex$RegexToken$shim(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* p0) {
    org$pandalanguage$regex$RegexToken result = panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$next$R$org$pandalanguage$regex$RegexToken(p0);

    org$pandalanguage$regex$RegexToken$wrapper* $tmp2;
    $tmp2 = (org$pandalanguage$regex$RegexToken$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$get_done$R$panda$core$Bit, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$next$R$org$pandalanguage$regex$RegexToken$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$class_type panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$cleanup, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$get_done$R$panda$core$Bit, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$next$R$org$pandalanguage$regex$RegexToken$shim} };

typedef panda$core$Int64 (*$fn9)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e", 78, -1897655215444117051, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 154, -801621761167423771, NULL };

void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p_array) {
    panda$core$Int64 $tmp3;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp4;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp5;
    self->array = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    self->index = $tmp3;
    {
        $tmp4 = self->array;
        $tmp5 = p_array;
        self->array = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
panda$core$Bit panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$get_done$R$panda$core$Bit(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$core$Bit $returnValue6;
    ITable* $tmp7 = ((panda$collections$CollectionView*) self->array)->$class->itable;
    while ($tmp7->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp7 = $tmp7->next;
    }
    $fn9 $tmp8 = $tmp7->methods[0];
    panda$core$Int64 $tmp10 = $tmp8(((panda$collections$CollectionView*) self->array));
    panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->index, $tmp10);
    $returnValue6 = $tmp11;
    return $returnValue6;
}
org$pandalanguage$regex$RegexToken panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$next$R$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* $tmp19;
    panda$core$Int64 $tmp20;
    org$pandalanguage$regex$RegexToken $returnValue22;
    panda$core$Int64 $tmp23;
    panda$core$Bit $tmp13 = panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$get_done$R$panda$core$Bit(self);
    panda$core$Bit $tmp14 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp13);
    if ($tmp14.value) goto $l15; else goto $l16;
    $l16:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s17, (panda$core$Int64) { 23 }, &$s18);
    abort();
    $l15:;
    $tmp19 = self;
    panda$core$Int64$init$builtin_int64(&$tmp20, 1);
    panda$core$Int64 $tmp21 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp19->index, $tmp20);
    $tmp19->index = $tmp21;
    panda$core$Int64$init$builtin_int64(&$tmp23, 1);
    panda$core$Int64 $tmp24 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, $tmp23);
    org$pandalanguage$regex$RegexToken $tmp25 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self->array, $tmp24);
    $returnValue22 = $tmp25;
    return $returnValue22;
}
void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$cleanup(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* self) {
    int $tmp29;
    {
    }
    $tmp29 = -1;
    goto $l27;
    $l27:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp29) {
        case -1: goto $l30;
    }
    $l30:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->array));
}





