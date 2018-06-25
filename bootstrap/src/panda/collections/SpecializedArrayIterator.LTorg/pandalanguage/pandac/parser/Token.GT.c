#include "panda/collections/SpecializedArrayIterator.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
__attribute__((weak)) panda$core$Object* panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* p0) {
    org$pandalanguage$pandac$parser$Token result = panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token(p0);

    org$pandalanguage$pandac$parser$Token$wrapper* $tmp2;
    $tmp2 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$get_done$R$panda$core$Bit, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$get_done$R$panda$core$Bit, panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 81, -1091975073017356571, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 22, -8814985354570301085, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e", 160, 281117904936359041, NULL };

void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p_array) {
    panda$core$Int64 $tmp3;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp4;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5;
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
panda$core$Bit panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$get_done$R$panda$core$Bit(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Bit $returnValue6;
    panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->index, self->array->count);
    $returnValue6 = $tmp7;
    return $returnValue6;
}
org$pandalanguage$pandac$parser$Token panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $tmp15;
    org$pandalanguage$pandac$parser$Token $returnValue17;
    panda$core$Int64 $tmp18;
    panda$core$Bit $tmp9 = panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$get_done$R$panda$core$Bit(self);
    panda$core$Bit $tmp10 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp9);
    if ($tmp10.value) goto $l11; else goto $l12;
    $l12:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s13, (panda$core$Int64) { 23 }, &$s14);
    abort();
    $l11:;
    panda$core$Int64$init$builtin_int64(&$tmp15, 1);
    panda$core$Int64 $tmp16 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp15);
    self->index = $tmp16;
    panda$core$Int64$init$builtin_int64(&$tmp18, 1);
    panda$core$Int64 $tmp19 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, $tmp18);
    org$pandalanguage$pandac$parser$Token $tmp20 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->array, $tmp19);
    $returnValue17 = $tmp20;
    return $returnValue17;
}
void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    int $tmp24;
    {
    }
    $tmp24 = -1;
    goto $l22;
    $l22:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp24) {
        case -1: goto $l25;
    }
    $l25:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->array));
}

