#include "panda/core/String/RegexMatchIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/String/Match.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Matcher.h"
#include "panda/core/String/Index.h"
__attribute__((weak)) panda$core$Object* panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match$shim(panda$core$String$RegexMatchIterator* p0) {
    panda$core$String$Match* result = panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match(p0);

    return ((panda$core$Object*) result);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$core$String$RegexMatchIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$RegexMatchIterator$get_done$R$panda$core$Bit, panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$core$String$RegexMatchIterator$class_type panda$core$String$RegexMatchIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$RegexMatchIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$RegexMatchIterator$cleanup, panda$core$String$RegexMatchIterator$get_done$R$panda$core$Bit, panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match$shim} };

typedef panda$core$Bit (*$fn12)(panda$core$String$RegexMatchIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x52\x65\x67\x65\x78\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72", 36, 9169160126284605533, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x52\x65\x67\x65\x78\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68", 99, 3959721154300098506, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

void panda$core$String$RegexMatchIterator$init$panda$core$String$panda$core$RegularExpression$panda$core$Bit(panda$core$String$RegexMatchIterator* self, panda$core$String* p_haystack, panda$core$RegularExpression* p_needle, panda$core$Bit p_allowOveraps) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp3;
    panda$core$Matcher* $tmp4;
    panda$core$Matcher* $tmp5;
    panda$core$Matcher* $tmp6;
    self->matcher = NULL;
    self->haystack = NULL;
    {
        $tmp2 = self->haystack;
        $tmp3 = p_haystack;
        self->haystack = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    self->allowOverlaps = self->allowOverlaps;
    {
        $tmp4 = self->matcher;
        panda$core$Matcher* $tmp7 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, p_haystack);
        $tmp6 = $tmp7;
        $tmp5 = $tmp6;
        self->matcher = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    panda$core$Bit $tmp8 = panda$core$Matcher$find$R$panda$core$Bit(self->matcher);
    self->found = $tmp8;
}
panda$core$Bit panda$core$String$RegexMatchIterator$get_done$R$panda$core$Bit(panda$core$String$RegexMatchIterator* self) {
    panda$core$Bit $returnValue9;
    panda$core$Bit $tmp10 = panda$core$Bit$$NOT$R$panda$core$Bit(self->found);
    $returnValue9 = $tmp10;
    return $returnValue9;
}
panda$core$String$Match* panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match(panda$core$String$RegexMatchIterator* self) {
    panda$core$String$Match* result22 = NULL;
    panda$core$String$Match* $tmp23;
    panda$core$String$Match* $tmp24;
    panda$core$String$Index start26;
    panda$core$String$Index $tmp27;
    panda$core$String$Index $tmp29;
    panda$core$String$Match* $returnValue31;
    panda$core$String$Match* $tmp32;
    panda$core$Bit $tmp13 = (($fn12) self->$class->vtable[2])(self);
    panda$core$Bit $tmp14 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp13);
    if ($tmp14.value) goto $l15; else goto $l16;
    $l16:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s17, (panda$core$Int64) { 307 }, &$s18);
    abort();
    $l15:;
    int $tmp21;
    {
        panda$core$String$Match* $tmp25 = (panda$core$String$Match*) pandaObjectAlloc(40, (panda$core$Class*) &panda$core$String$Match$class);
        panda$core$String$Match$init$panda$core$Matcher($tmp25, self->matcher);
        $tmp24 = $tmp25;
        $tmp23 = $tmp24;
        result22 = $tmp23;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
        memset(&start26, 0, sizeof(start26));
        if (self->allowOverlaps.value) {
        {
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp27, self->matcher);
            panda$core$String$Index $tmp28 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->haystack, $tmp27);
            start26 = $tmp28;
        }
        }
        else {
        {
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp29, self->matcher);
            start26 = $tmp29;
        }
        }
        panda$core$Bit $tmp30 = panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit(self->matcher, start26);
        self->found = $tmp30;
        $tmp32 = result22;
        $returnValue31 = $tmp32;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
        $tmp21 = 0;
        goto $l19;
        $l33:;
        return $returnValue31;
    }
    $l19:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result22));
    result22 = NULL;
    switch ($tmp21) {
        case 0: goto $l33;
    }
    $l35:;
    if (false) goto $l36; else goto $l37;
    $l37:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s38, (panda$core$Int64) { 307 }, &$s39);
    abort();
    $l36:;
    abort();
}
void panda$core$String$RegexMatchIterator$cleanup(panda$core$String$RegexMatchIterator* self) {
    int $tmp42;
    {
    }
    $tmp42 = -1;
    goto $l40;
    $l40:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp42) {
        case -1: goto $l43;
    }
    $l43:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->matcher));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->haystack));
}





