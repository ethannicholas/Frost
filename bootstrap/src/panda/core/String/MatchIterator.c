#include "panda/core/String/MatchIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/String/Index.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
__attribute__((weak)) panda$core$Object* panda$core$String$MatchIterator$next$R$panda$core$String$Index$shim(panda$core$String$MatchIterator* p0) {
    panda$core$String$Index result = panda$core$String$MatchIterator$next$R$panda$core$String$Index(p0);

    panda$core$String$Index$wrapper* $tmp2;
    $tmp2 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$core$String$MatchIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$MatchIterator$get_done$R$panda$core$Bit, panda$core$String$MatchIterator$next$R$panda$core$String$Index$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$core$String$MatchIterator$class_type panda$core$String$MatchIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$MatchIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$MatchIterator$cleanup, panda$core$String$MatchIterator$get_done$R$panda$core$Bit, panda$core$String$MatchIterator$next$R$panda$core$String$Index$shim} };

typedef panda$core$Bit (*$fn10)(panda$core$String$MatchIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72", 31, 1240365279592640354, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 94, 5579456169478881106, NULL };

void panda$core$String$MatchIterator$init$panda$core$String$panda$core$String$panda$core$Bit(panda$core$String$MatchIterator* self, panda$core$String* p_haystack, panda$core$String* p_needle, panda$core$Bit p_allowOveraps) {
    panda$core$String* $tmp3;
    panda$core$String* $tmp4;
    panda$core$String* $tmp5;
    panda$core$String* $tmp6;
    self->haystack = NULL;
    self->needle = NULL;
    {
        $tmp3 = self->haystack;
        $tmp4 = p_haystack;
        self->haystack = $tmp4;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    }
    {
        $tmp5 = self->needle;
        $tmp6 = p_needle;
        self->needle = $tmp6;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
    }
    self->allowOverlaps = self->allowOverlaps;
    panda$core$String$Index$nullable $tmp7 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(p_haystack, p_needle);
    self->nextMatch = $tmp7;
}
panda$core$Bit panda$core$String$MatchIterator$get_done$R$panda$core$Bit(panda$core$String$MatchIterator* self) {
    panda$core$Bit $returnValue8;
    $returnValue8 = ((panda$core$Bit) { !self->nextMatch.nonnull });
    return $returnValue8;
}
panda$core$String$Index panda$core$String$MatchIterator$next$R$panda$core$String$Index(panda$core$String$MatchIterator* self) {
    panda$core$String$Index$nullable result17;
    panda$core$String$Index start18;
    panda$core$String$Index $tmp20;
    panda$core$String$Index $returnValue24;
    panda$core$Bit $tmp11 = (($fn10) self->$class->vtable[2])(self);
    panda$core$Bit $tmp12 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp11);
    if ($tmp12.value) goto $l13; else goto $l14;
    $l14:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s15, (panda$core$Int64) { 234 }, &$s16);
    abort();
    $l13:;
    result17 = self->nextMatch;
    memset(&start18, 0, sizeof(start18));
    if (self->allowOverlaps.value) {
    {
        panda$core$String$Index $tmp19 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->haystack, start18);
        start18 = $tmp19;
    }
    }
    else {
    {
        panda$core$Int64 $tmp21 = panda$core$String$byteLength$R$panda$core$Int64(self->needle);
        panda$core$Int64 $tmp22 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) self->nextMatch.value).value, $tmp21);
        panda$core$String$Index$init$panda$core$Int64(&$tmp20, $tmp22);
        start18 = $tmp20;
    }
    }
    panda$core$String$Index$nullable $tmp23 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self->haystack, self->needle, start18);
    self->nextMatch = $tmp23;
    $returnValue24 = ((panda$core$String$Index) result17.value);
    return $returnValue24;
}
void panda$core$String$MatchIterator$cleanup(panda$core$String$MatchIterator* self) {
    int $tmp28;
    {
    }
    $tmp28 = -1;
    goto $l26;
    $l26:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp28) {
        case -1: goto $l29;
    }
    $l29:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->haystack));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->needle));
}

