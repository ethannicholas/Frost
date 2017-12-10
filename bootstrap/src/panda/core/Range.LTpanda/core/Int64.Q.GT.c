#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
panda$core$Range$LTpanda$core$Int64$Q$GT$wrapper* wrap_panda$core$Range$LTpanda$core$Int64$Q$GT(panda$core$Range$LTpanda$core$Int64$Q$GT self) {
    panda$core$Range$LTpanda$core$Int64$Q$GT$wrapper* result = (panda$core$Range$LTpanda$core$Int64$Q$GT$wrapper*) malloc(37);
    result->cl = (panda$core$Class*) &panda$core$Range$LTpanda$core$Int64$Q$GT$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"

panda$core$String* panda$core$Range$LTpanda$core$Int64$Q$GT$convert$R$panda$core$String$wrappershim(panda$core$Range$LTpanda$core$Int64$Q$GT$wrapper* self) {
    return panda$core$Range$LTpanda$core$Int64$Q$GT$convert$R$panda$core$String(self->value);
}

panda$core$Range$LTpanda$core$Int64$Q$GT$class_type panda$core$Range$LTpanda$core$Int64$Q$GT$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$Int64$Q$GT$convert$R$panda$core$String, panda$core$Object$cleanup} };

panda$core$Range$LTpanda$core$Int64$Q$GT$wrapperclass_type panda$core$Range$LTpanda$core$Int64$Q$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$Int64$Q$GT$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, 1 };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, 1 };

void panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(panda$core$Range$LTpanda$core$Int64$Q$GT* self, panda$core$Int64$nullable p_min, panda$core$Int64$nullable p_max, panda$core$Bit p_inclusive) {
    self->min = p_min;
    self->max = p_max;
    self->inclusive = p_inclusive;
}
panda$core$String* panda$core$Range$LTpanda$core$Int64$Q$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$Int64$Q$GT self) {
    panda$core$MutableString* result1;
    panda$core$MutableString* $tmp2 = (panda$core$MutableString*) malloc(40);
    $tmp2->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2->refCount.value = 1;
    panda$core$MutableString$init($tmp2);
    result1 = $tmp2;
    if (((panda$core$Bit) { self.min.nonnull }).value) {
    {
        panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) self.min.value))));
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
    if (((panda$core$Bit) { self.max.nonnull }).value) {
    {
        panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) self.max.value))));
    }
    }
    panda$core$String* $tmp6 = panda$core$MutableString$convert$R$panda$core$String(result1);
    return $tmp6;
}

