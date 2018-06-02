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

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$core$String$RegexMatchIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$RegexMatchIterator$get_done$R$panda$core$Bit, panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$core$String$RegexMatchIterator$class_type panda$core$String$RegexMatchIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$RegexMatchIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$RegexMatchIterator$cleanup, panda$core$String$RegexMatchIterator$get_done$R$panda$core$Bit, panda$core$String$RegexMatchIterator$next$R$panda$core$String$Match$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x52\x65\x67\x65\x78\x4d\x61\x74\x63\x68\x49\x74\x65\x72\x61\x74\x6f\x72", 36, 9169160126284605533, NULL };

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
    panda$core$String$Match* result15 = NULL;
    panda$core$String$Match* $tmp16;
    panda$core$String$Match* $tmp17;
    panda$core$String$Index start19;
    panda$core$String$Index $tmp20;
    panda$core$String$Index $tmp22;
    panda$core$String$Match* $returnValue24;
    panda$core$String$Match* $tmp25;
    int $tmp14;
    {
        panda$core$String$Match* $tmp18 = (panda$core$String$Match*) pandaObjectAlloc(40, (panda$core$Class*) &panda$core$String$Match$class);
        panda$core$String$Match$init$panda$core$Matcher($tmp18, self->matcher);
        $tmp17 = $tmp18;
        $tmp16 = $tmp17;
        result15 = $tmp16;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
        memset(&start19, 0, sizeof(start19));
        if (self->allowOverlaps.value) {
        {
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp20, self->matcher);
            panda$core$String$Index $tmp21 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->haystack, $tmp20);
            start19 = $tmp21;
        }
        }
        else {
        {
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp22, self->matcher);
            start19 = $tmp22;
        }
        }
        panda$core$Bit $tmp23 = panda$core$Matcher$find$panda$core$String$Index$R$panda$core$Bit(self->matcher, start19);
        self->found = $tmp23;
        $tmp25 = result15;
        $returnValue24 = $tmp25;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
        $tmp14 = 0;
        goto $l12;
        $l26:;
        return $returnValue24;
    }
    $l12:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result15));
    result15 = NULL;
    switch ($tmp14) {
        case 0: goto $l26;
    }
    $l28:;
    abort();
}
void panda$core$String$RegexMatchIterator$cleanup(panda$core$String$RegexMatchIterator* self) {
    int $tmp31;
    {
    }
    $tmp31 = -1;
    goto $l29;
    $l29:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp31) {
        case -1: goto $l32;
    }
    $l32:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->matcher));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->haystack));
}





