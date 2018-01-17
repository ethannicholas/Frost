#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"

panda$core$String* panda$core$Range$LTpanda$core$Int64$GT$convert$R$panda$core$String$wrappershim(panda$core$Range$LTpanda$core$Int64$GT$wrapper* self) {
    return panda$core$Range$LTpanda$core$Int64$GT$convert$R$panda$core$String(self->value);
}
void panda$core$Range$LTpanda$core$Int64$GT$cleanup$wrappershim(panda$core$Range$LTpanda$core$Int64$GT$wrapper* self) {
    panda$core$Range$LTpanda$core$Int64$GT$cleanup(self->value);
}

panda$core$Range$LTpanda$core$Int64$GT$class_type panda$core$Range$LTpanda$core$Int64$GT$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$Int64$GT$convert$R$panda$core$String, panda$core$Range$LTpanda$core$Int64$GT$cleanup} };

panda$core$Range$LTpanda$core$Int64$GT$wrapperclass_type panda$core$Range$LTpanda$core$Int64$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$Int64$GT$convert$R$panda$core$String$wrappershim, panda$core$Range$LTpanda$core$Int64$GT$cleanup$wrappershim} };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };

void panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(panda$core$Range$LTpanda$core$Int64$GT* self, panda$core$Int64 p_min, panda$core$Int64 p_max, panda$core$Bit p_inclusive) {
    self->min = p_min;
    self->max = p_max;
    self->inclusive = p_inclusive;
}
panda$core$String* panda$core$Range$LTpanda$core$Int64$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$Int64$GT self) {
    panda$core$MutableString* result1;
    panda$core$String* tmp18;
    panda$core$MutableString* $tmp2 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp2->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2->refCount.value = 1;
    panda$core$MutableString$init($tmp2);
    result1 = $tmp2;
    if (((panda$core$Bit) { true }).value) {
    {
        panda$core$Int64$wrapper* $tmp4;
        $tmp4 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp4->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp4->refCount = 1;
        $tmp4->value = self.min;
        panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) $tmp4));
    }
    }
    if (self.inclusive.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1, &$s5);
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(result1, &$s6);
    }
    }
    if (((panda$core$Bit) { true }).value) {
    {
        panda$core$Int64$wrapper* $tmp7;
        $tmp7 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp7->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp7->refCount = 1;
        $tmp7->value = self.max;
        panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) $tmp7));
    }
    }
    {
        panda$core$String* $tmp9 = panda$core$MutableString$finish$R$panda$core$String(result1);
        tmp18 = $tmp9;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1));
        return tmp18;
    }
}
void panda$core$Range$LTpanda$core$Int64$GT$cleanup(panda$core$Range$LTpanda$core$Int64$GT self) {
}

