#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/String/Index.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"

panda$core$String* panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String$wrappershim(panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapper* self) {
    return panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String(self->value);
}
void panda$core$Range$LTpanda$core$String$Index$Q$GT$cleanup$wrappershim(panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapper* self) {
    panda$core$Range$LTpanda$core$String$Index$Q$GT$cleanup(self->value);
}

static panda$core$String $s1;
panda$core$Range$LTpanda$core$String$Index$Q$GT$class_type panda$core$Range$LTpanda$core$String$Index$Q$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String, panda$core$Range$LTpanda$core$String$Index$Q$GT$cleanup} };

static panda$core$String $s2;
panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapperclass_type panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String$wrappershim, panda$core$Range$LTpanda$core$String$Index$Q$GT$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x3e", 42, 6344064505343177902, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x3e", 42, 6344064505343177902, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };

void panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(panda$core$Range$LTpanda$core$String$Index$Q$GT* self, panda$core$String$Index$nullable p_min, panda$core$String$Index$nullable p_max, panda$core$Bit p_inclusive) {
    self->min = p_min;
    self->max = p_max;
    self->inclusive = p_inclusive;
}
panda$core$String* panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$String$Index$Q$GT self) {
    panda$core$MutableString* result6 = NULL;
    panda$core$MutableString* $tmp7;
    panda$core$MutableString* $tmp8;
    panda$core$Object* $tmp10;
    panda$core$Object* $tmp14;
    panda$core$String* $finallyReturn15;
    panda$core$String* $tmp17;
    panda$core$String* $tmp18;
    int $tmp5;
    {
        panda$core$MutableString* $tmp9 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp9);
        $tmp8 = $tmp9;
        $tmp7 = $tmp8;
        result6 = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
        if (((panda$core$Bit) { self.min.nonnull }).value) {
        {
            panda$core$String$Index$wrapper* $tmp11;
            $tmp11 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp11->value = ((panda$core$String$Index) self.min.value);
            $tmp10 = ((panda$core$Object*) $tmp11);
            panda$core$MutableString$append$panda$core$Object(result6, $tmp10);
            panda$core$Panda$unref$panda$core$Object($tmp10);
        }
        }
        if (self.inclusive.value) {
        {
            panda$core$MutableString$append$panda$core$String(result6, &$s12);
        }
        }
        else {
        {
            panda$core$MutableString$append$panda$core$String(result6, &$s13);
        }
        }
        if (((panda$core$Bit) { self.max.nonnull }).value) {
        {
            panda$core$String$Index$wrapper* $tmp15;
            $tmp15 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp15->value = ((panda$core$String$Index) self.max.value);
            $tmp14 = ((panda$core$Object*) $tmp15);
            panda$core$MutableString$append$panda$core$Object(result6, $tmp14);
            panda$core$Panda$unref$panda$core$Object($tmp14);
        }
        }
        panda$core$String* $tmp19 = panda$core$MutableString$finish$R$panda$core$String(result6);
        $tmp18 = $tmp19;
        $tmp17 = $tmp18;
        $finallyReturn15 = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
        $tmp5 = 0;
        goto $l3;
        $l20:;
        return $finallyReturn15;
    }
    $l3:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result6));
    result6 = NULL;
    switch ($tmp5) {
        case 0: goto $l20;
    }
    $l22:;
}
void panda$core$Range$LTpanda$core$String$Index$Q$GT$cleanup(panda$core$Range$LTpanda$core$String$Index$Q$GT self) {
}

