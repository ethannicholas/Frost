#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"

panda$core$String* panda$core$Range$LTpanda$core$Int64$Q$GT$convert$R$panda$core$String$wrappershim(panda$core$Range$LTpanda$core$Int64$Q$GT$wrapper* self) {
    return panda$core$Range$LTpanda$core$Int64$Q$GT$convert$R$panda$core$String(self->value);
}
void panda$core$Range$LTpanda$core$Int64$Q$GT$cleanup$wrappershim(panda$core$Range$LTpanda$core$Int64$Q$GT$wrapper* self) {
    panda$core$Range$LTpanda$core$Int64$Q$GT$cleanup(self->value);
}

static panda$core$String $s1;
panda$core$Range$LTpanda$core$Int64$Q$GT$class_type panda$core$Range$LTpanda$core$Int64$Q$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$Int64$Q$GT$convert$R$panda$core$String, panda$core$Range$LTpanda$core$Int64$Q$GT$cleanup} };

static panda$core$String $s2;
panda$core$Range$LTpanda$core$Int64$Q$GT$wrapperclass_type panda$core$Range$LTpanda$core$Int64$Q$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$Int64$Q$GT$convert$R$panda$core$String$wrappershim, panda$core$Range$LTpanda$core$Int64$Q$GT$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e", 35, -390148896847683050, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e", 35, -390148896847683050, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };

void panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(panda$core$Range$LTpanda$core$Int64$Q$GT* self, panda$core$Int64$nullable p_min, panda$core$Int64$nullable p_max, panda$core$Bit p_inclusive) {
    self->min = p_min;
    self->max = p_max;
    self->inclusive = p_inclusive;
}
panda$core$String* panda$core$Range$LTpanda$core$Int64$Q$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$Int64$Q$GT self) {
    panda$core$MutableString* result3;
    panda$core$String* tmp24110;
    panda$core$MutableString* $tmp4 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp4->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp4->refCount.value = 1;
    panda$core$MutableString$init($tmp4);
    result3 = $tmp4;
    if (((panda$core$Bit) { self.min.nonnull }).value) {
    {
        panda$core$Int64$wrapper* $tmp6;
        $tmp6 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp6->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp6->refCount = 1;
        $tmp6->value = ((panda$core$Int64) self.min.value);
        panda$core$MutableString$append$panda$core$Object(result3, ((panda$core$Object*) $tmp6));
    }
    }
    if (self.inclusive.value) {
    {
        panda$core$MutableString$append$panda$core$String(result3, &$s7);
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(result3, &$s8);
    }
    }
    if (((panda$core$Bit) { self.max.nonnull }).value) {
    {
        panda$core$Int64$wrapper* $tmp9;
        $tmp9 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
        $tmp9->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp9->refCount = 1;
        $tmp9->value = ((panda$core$Int64) self.max.value);
        panda$core$MutableString$append$panda$core$Object(result3, ((panda$core$Object*) $tmp9));
    }
    }
    {
        panda$core$String* $tmp11 = panda$core$MutableString$finish$R$panda$core$String(result3);
        tmp24110 = $tmp11;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3));
        return tmp24110;
    }
}
void panda$core$Range$LTpanda$core$Int64$Q$GT$cleanup(panda$core$Range$LTpanda$core$Int64$Q$GT self) {
}

