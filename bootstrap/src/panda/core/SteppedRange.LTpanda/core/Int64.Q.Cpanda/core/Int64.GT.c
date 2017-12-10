#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapper* wrap_panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT(panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapper* result = (panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapper*) malloc(49);
    result->cl = (panda$core$Class*) &panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"

panda$core$String* panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String$wrappershim(panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapper* self) {
    return panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String(self->value);
}

panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$class_type panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String, panda$core$Object$cleanup} };

panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapperclass_type panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, 1 };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, 1 };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 1 };

void panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT* self, panda$core$Int64$nullable p_start, panda$core$Int64$nullable p_end, panda$core$Int64 p_step, panda$core$Bit p_inclusive) {
    self->start = p_start;
    self->end = p_end;
    self->step = p_step;
    self->inclusive = p_inclusive;
}
panda$core$String* panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String(panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT self) {
    panda$core$MutableString* result1;
    panda$core$MutableString* $tmp2 = (panda$core$MutableString*) malloc(40);
    $tmp2->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2->refCount.value = 1;
    panda$core$MutableString$init($tmp2);
    result1 = $tmp2;
    if (((panda$core$Bit) { self.start.nonnull }).value) {
    {
        panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) self.start.value))));
    }
    }
    if (self.inclusive.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1, &$s4);
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(result1, &$s5);
    }
    }
    if (((panda$core$Bit) { self.end.nonnull }).value) {
    {
        panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) self.end.value))));
    }
    }
    panda$core$MutableString$append$panda$core$String(result1, &$s6);
    panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) wrap_panda$core$Int64(self.step)));
    panda$core$String* $tmp7 = panda$core$MutableString$convert$R$panda$core$String(result1);
    return $tmp7;
}

