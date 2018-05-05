#include "panda/core/SteppedRange.LTpanda/core/String/Index.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/String/Index.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"

panda$core$String* panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String$wrappershim(panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$wrapper* self) {
    return panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String(self->value);
}
void panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$cleanup$wrappershim(panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$wrapper* self) {
    panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$cleanup(self->value);
}

static panda$core$String $s1;
panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$class_type panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$cleanup} };

static panda$core$String $s2;
panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$wrapperclass_type panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String$wrappershim, panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 67, -4619470895525311699, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 67, -4619470895525311699, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };

void panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$panda$core$Bit(panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT* self, panda$core$String$Index$nullable p_start, panda$core$String$Index$nullable p_end, panda$core$Int64 p_step, panda$core$Bit p_inclusive) {
    self->start = p_start;
    self->end = p_end;
    self->step = p_step;
    self->inclusive = p_inclusive;
}
panda$core$String* panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String(panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT self) {
    panda$core$MutableString* result3;
    panda$core$String* tmp12516;
    panda$core$MutableString* $tmp6 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp6);
    panda$core$MutableString* $tmp5 = $tmp6;
    panda$core$MutableString* $tmp4 = $tmp5;
    result3 = $tmp4;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    if (((panda$core$Bit) { self.start.nonnull }).value) {
    {
        panda$core$String$Index$wrapper* $tmp8;
        $tmp8 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp8->value = ((panda$core$String$Index) self.start.value);
        panda$core$Object* $tmp7 = ((panda$core$Object*) $tmp8);
        panda$core$MutableString$append$panda$core$Object(result3, $tmp7);
        panda$core$Panda$unref$panda$core$Object($tmp7);
    }
    }
    if (self.inclusive.value) {
    {
        panda$core$MutableString$append$panda$core$String(result3, &$s9);
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(result3, &$s10);
    }
    }
    if (((panda$core$Bit) { self.end.nonnull }).value) {
    {
        panda$core$String$Index$wrapper* $tmp12;
        $tmp12 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp12->value = ((panda$core$String$Index) self.end.value);
        panda$core$Object* $tmp11 = ((panda$core$Object*) $tmp12);
        panda$core$MutableString$append$panda$core$Object(result3, $tmp11);
        panda$core$Panda$unref$panda$core$Object($tmp11);
    }
    }
    panda$core$MutableString$append$panda$core$String(result3, &$s13);
    panda$core$Int64$wrapper* $tmp15;
    $tmp15 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp15->value = self.step;
    panda$core$Object* $tmp14 = ((panda$core$Object*) $tmp15);
    panda$core$MutableString$append$panda$core$Object(result3, $tmp14);
    panda$core$Panda$unref$panda$core$Object($tmp14);
    {
        panda$core$String* $tmp19 = panda$core$MutableString$finish$R$panda$core$String(result3);
        panda$core$String* $tmp18 = $tmp19;
        panda$core$String* $tmp17 = $tmp18;
        tmp12516 = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3));
        panda$core$String* $tmp20 = tmp12516;
        return $tmp20;
    }
}
void panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT$cleanup(panda$core$SteppedRange$LTpanda$core$String$Index$Q$Cpanda$core$Int64$GT self) {
}

