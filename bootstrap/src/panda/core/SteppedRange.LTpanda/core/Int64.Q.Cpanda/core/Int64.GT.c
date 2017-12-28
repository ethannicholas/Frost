#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"

panda$core$String* panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String$wrappershim(panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapper* self) {
    return panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String(self->value);
}

panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$class_type panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String, panda$core$Object$cleanup} };

panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapperclass_type panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };

void panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT* self, panda$core$Int64$nullable p_start, panda$core$Int64$nullable p_end, panda$core$Int64 p_step, panda$core$Bit p_inclusive) {
    self->start = p_start;
    self->end = p_end;
    self->step = p_step;
    self->inclusive = p_inclusive;
}
panda$core$String* panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String(panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT self) {
    panda$core$MutableString* result1;
    panda$core$MutableString* $tmp2 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp2->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2->refCount.value = 1;
    panda$core$MutableString$init($tmp2);
    panda$core$Object* $tmp4 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2));
    result1 = ((panda$core$MutableString*) $tmp4);
    if (((panda$core$Bit) { self.start.nonnull }).value) {
    {
        panda$core$Int64$wrapper* $tmp5;
        $tmp5 = (panda$core$Int64$wrapper*) pandaAlloc(24);
        $tmp5->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp5->refCount = 1;
        $tmp5->value = ((panda$core$Int64) self.start.value);
        panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) $tmp5));
    }
    }
    if (self.inclusive.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1, &$s6);
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(result1, &$s7);
    }
    }
    if (((panda$core$Bit) { self.end.nonnull }).value) {
    {
        panda$core$Int64$wrapper* $tmp8;
        $tmp8 = (panda$core$Int64$wrapper*) pandaAlloc(24);
        $tmp8->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp8->refCount = 1;
        $tmp8->value = ((panda$core$Int64) self.end.value);
        panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) $tmp8));
    }
    }
    panda$core$MutableString$append$panda$core$String(result1, &$s9);
    panda$core$Int64$wrapper* $tmp10;
    $tmp10 = (panda$core$Int64$wrapper*) pandaAlloc(24);
    $tmp10->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp10->refCount = 1;
    $tmp10->value = self.step;
    panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) $tmp10));
    panda$core$String* $tmp11 = panda$core$MutableString$finish$R$panda$core$String(result1);
    return $tmp11;
}

