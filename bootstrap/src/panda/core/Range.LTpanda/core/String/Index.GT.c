#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/String/Index.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"

panda$core$String* panda$core$Range$LTpanda$core$String$Index$GT$convert$R$panda$core$String$wrappershim(panda$core$Range$LTpanda$core$String$Index$GT$wrapper* self) {
    return panda$core$Range$LTpanda$core$String$Index$GT$convert$R$panda$core$String(self->value);
}
void panda$core$Range$LTpanda$core$String$Index$GT$cleanup$wrappershim(panda$core$Range$LTpanda$core$String$Index$GT$wrapper* self) {
    panda$core$Range$LTpanda$core$String$Index$GT$cleanup(self->value);
}

static panda$core$String $s1;
panda$core$Range$LTpanda$core$String$Index$GT$class_type panda$core$Range$LTpanda$core$String$Index$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$String$Index$GT$convert$R$panda$core$String, panda$core$Range$LTpanda$core$String$Index$GT$cleanup} };

static panda$core$String $s2;
panda$core$Range$LTpanda$core$String$Index$GT$wrapperclass_type panda$core$Range$LTpanda$core$String$Index$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$String$Index$GT$convert$R$panda$core$String$wrappershim, panda$core$Range$LTpanda$core$String$Index$GT$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e", 41, -850392632308956241, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e", 41, -850392632308956241, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };

void panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(panda$core$Range$LTpanda$core$String$Index$GT* self, panda$core$String$Index p_min, panda$core$String$Index p_max, panda$core$Bit p_inclusive) {
    self->min = p_min;
    self->max = p_max;
    self->inclusive = p_inclusive;
}
panda$core$String* panda$core$Range$LTpanda$core$String$Index$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$String$Index$GT self) {
    panda$core$MutableString* result3;
    panda$core$String* tmp2449;
    panda$core$MutableString* $tmp4 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp4);
    result3 = $tmp4;
    if (((panda$core$Bit) { true }).value) {
    {
        panda$core$String$Index$wrapper* $tmp5;
        $tmp5 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp5->value = self.min;
        panda$core$MutableString$append$panda$core$Object(result3, ((panda$core$Object*) $tmp5));
    }
    }
    if (self.inclusive.value) {
    {
        panda$core$MutableString$append$panda$core$String(result3, &$s6);
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(result3, &$s7);
    }
    }
    if (((panda$core$Bit) { true }).value) {
    {
        panda$core$String$Index$wrapper* $tmp8;
        $tmp8 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp8->value = self.max;
        panda$core$MutableString$append$panda$core$Object(result3, ((panda$core$Object*) $tmp8));
    }
    }
    {
        panda$core$String* $tmp10 = panda$core$MutableString$finish$R$panda$core$String(result3);
        tmp2449 = $tmp10;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3));
        return tmp2449;
    }
}
void panda$core$Range$LTpanda$core$String$Index$GT$cleanup(panda$core$Range$LTpanda$core$String$Index$GT self) {
}

