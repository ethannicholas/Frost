#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"

panda$core$String* panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$convert$R$panda$core$String$wrappershim(panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$wrapper* self) {
    return panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$convert$R$panda$core$String(self->value);
}
void panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$cleanup$wrappershim(panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$wrapper* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$cleanup(self->value);
}

static panda$core$String $s1;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$class_type panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$convert$R$panda$core$String, panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$cleanup} };

static panda$core$String $s2;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$wrapperclass_type panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$convert$R$panda$core$String$wrappershim, panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 59, 8231104256562873454, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 59, 8231104256562873454, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };

void panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* self, panda$core$Int64 p_start, panda$core$Int64 p_end, panda$core$Int64 p_step, panda$core$Bit p_inclusive) {
    self->start = p_start;
    self->end = p_end;
    self->step = p_step;
    self->inclusive = p_inclusive;
}
panda$core$String* panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$convert$R$panda$core$String(panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT self) {
    panda$core$MutableString* result3;
    panda$core$String* tmp24311;
    panda$core$MutableString* $tmp4 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp4);
    result3 = $tmp4;
    if (((panda$core$Bit) { true }).value) {
    {
        panda$core$Int64$wrapper* $tmp5;
        $tmp5 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp5->value = self.start;
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
        panda$core$Int64$wrapper* $tmp8;
        $tmp8 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp8->value = self.end;
        panda$core$MutableString$append$panda$core$Object(result3, ((panda$core$Object*) $tmp8));
    }
    }
    panda$core$MutableString$append$panda$core$String(result3, &$s9);
    panda$core$Int64$wrapper* $tmp10;
    $tmp10 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp10->value = self.step;
    panda$core$MutableString$append$panda$core$Object(result3, ((panda$core$Object*) $tmp10));
    {
        panda$core$String* $tmp12 = panda$core$MutableString$finish$R$panda$core$String(result3);
        tmp24311 = $tmp12;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3));
        return tmp24311;
    }
}
void panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$cleanup(panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT self) {
}

