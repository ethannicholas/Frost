#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/String/Index.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"

panda$core$String* panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String$wrappershim(panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapper* self) {
    return panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String(self->value);
}

panda$core$Range$LTpanda$core$String$Index$Q$GT$class_type panda$core$Range$LTpanda$core$String$Index$Q$GT$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String, panda$core$Object$cleanup} };

panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapperclass_type panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };

void panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(panda$core$Range$LTpanda$core$String$Index$Q$GT* self, panda$core$String$Index$nullable p_min, panda$core$String$Index$nullable p_max, panda$core$Bit p_inclusive) {
    self->min = p_min;
    self->max = p_max;
    self->inclusive = p_inclusive;
}
panda$core$String* panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$String$Index$Q$GT self) {
    panda$core$MutableString* result1;
    panda$core$MutableString* $tmp2 = (panda$core$MutableString*) malloc(48);
    $tmp2->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2->refCount.value = 1;
    panda$core$MutableString$init($tmp2);
    panda$core$Object* $tmp4 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2));
    result1 = ((panda$core$MutableString*) $tmp4);
    if (((panda$core$Bit) { self.min.nonnull }).value) {
    {
        panda$core$String$Index$wrapper* $tmp5;
        $tmp5 = (panda$core$String$Index$wrapper*) malloc(24);
        $tmp5->cl = (panda$core$Class*) &panda$core$String$Index$wrapperclass;
        $tmp5->refCount = 1;
        $tmp5->value = ((panda$core$String$Index) self.min.value);
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
    if (((panda$core$Bit) { self.max.nonnull }).value) {
    {
        panda$core$String$Index$wrapper* $tmp8;
        $tmp8 = (panda$core$String$Index$wrapper*) malloc(24);
        $tmp8->cl = (panda$core$Class*) &panda$core$String$Index$wrapperclass;
        $tmp8->refCount = 1;
        $tmp8->value = ((panda$core$String$Index) self.max.value);
        panda$core$MutableString$append$panda$core$Object(result1, ((panda$core$Object*) $tmp8));
    }
    }
    panda$core$String* $tmp9 = panda$core$MutableString$finish$R$panda$core$String(result1);
    return $tmp9;
}

