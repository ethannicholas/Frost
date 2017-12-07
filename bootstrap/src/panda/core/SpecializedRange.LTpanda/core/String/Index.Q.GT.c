#include "panda/core/SpecializedRange.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$wrapper* wrap_panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT(panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT self) {
    panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$wrapper* result = (panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$wrapper*) malloc(49);
    result->cl = (panda$core$Class*) &panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/String/Index.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"

panda$core$String* panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String$wrappershim(panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$wrapper* self) {
    return panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String(self->value);
}

panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$class_type panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String, panda$core$Object$cleanup} };

panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$wrapperclass_type panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };typedef void (*$fn4)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn6)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn8)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn9)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn12)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn13)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$String* (*$fn14)(panda$core$MutableString*);

static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, 1 };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, 1 };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 1 };

void panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT* self, panda$core$String$Index$nullable p_start, panda$core$String$Index$nullable p_end, panda$core$Int64$nullable p_step, panda$core$Bit p_inclusive) {
    self->start = p_start;
    self->end = p_end;
    if (((panda$core$Bit) { p_step.nonnull }).value) {
    {
        self->step = ((panda$core$Int64) p_step.value);
    }
    }
    else {
    {
        self->step = ((panda$core$Int64) { 1 });
    }
    }
    self->inclusive = p_inclusive;
}
panda$core$String* panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String(panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT self) {
    panda$core$MutableString* result1;
    panda$core$MutableString* $tmp2 = (panda$core$MutableString*) malloc(40);
    $tmp2->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2->refCount.value = 1;
    panda$core$MutableString$init($tmp2);
    result1 = $tmp2;
    if (((panda$core$Bit) { self.start.nonnull }).value) {
    {
        (($fn4) result1->$class->vtable[5])(result1, ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) self.start.value))));
    }
    }
    if (self.inclusive.value) {
    {
        (($fn6) result1->$class->vtable[3])(result1, &$s5);
    }
    }
    else {
    {
        (($fn8) result1->$class->vtable[3])(result1, &$s7);
    }
    }
    if (((panda$core$Bit) { self.end.nonnull }).value) {
    {
        (($fn9) result1->$class->vtable[5])(result1, ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) self.end.value))));
    }
    }
    panda$core$Bit $tmp10 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self.step, ((panda$core$Int64) { 1 }));
    if ($tmp10.value) {
    {
        (($fn12) result1->$class->vtable[3])(result1, &$s11);
        (($fn13) result1->$class->vtable[5])(result1, ((panda$core$Object*) wrap_panda$core$Int64(self.step)));
    }
    }
    panda$core$String* $tmp15 = (($fn14) result1->$class->vtable[0])(result1);
    return $tmp15;
}

