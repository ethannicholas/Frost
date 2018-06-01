#include "panda/core/String/UTF8Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Char8.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
panda$core$Object* panda$core$String$UTF8Iterator$next$R$panda$core$Char8$shim(panda$core$String$UTF8Iterator* p0) {
    panda$core$Char8 result = panda$core$String$UTF8Iterator$next$R$panda$core$Char8(p0);

    panda$core$Char8$wrapper* $tmp2;
    $tmp2 = (panda$core$Char8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Char8$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$core$String$UTF8Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF8Iterator$next$R$panda$core$Char8$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$core$String$UTF8Iterator$class_type panda$core$String$UTF8Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF8Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF8Iterator$cleanup, panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF8Iterator$next$R$panda$core$Char8$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x49\x74\x65\x72\x61\x74\x6f\x72", 30, -723788367184202580, NULL };

void panda$core$String$UTF8Iterator$init$panda$core$String(panda$core$String$UTF8Iterator* self, panda$core$String* p_str) {
    panda$core$String* $tmp3;
    panda$core$String* $tmp4;
    self->str = NULL;
    self->index = ((panda$core$Int64) { 0 });
    {
        $tmp3 = self->str;
        $tmp4 = p_str;
        self->str = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
}
panda$core$Bit panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF8Iterator* self) {
    panda$core$Bit $returnValue5;
    panda$core$Bit $tmp6 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, self->str->_length);
    $returnValue5 = $tmp6;
    return $returnValue5;
}
panda$core$Char8 panda$core$String$UTF8Iterator$next$R$panda$core$Char8(panda$core$String$UTF8Iterator* self) {
    panda$core$Char8 $returnValue9;
    panda$core$Int64 $tmp8 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp8;
    panda$core$Int64 $tmp10 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    $returnValue9 = self->str->data[$tmp10.value];
    return $returnValue9;
}
void panda$core$String$UTF8Iterator$cleanup(panda$core$String$UTF8Iterator* self) {
    int $tmp14;
    {
    }
    $tmp14 = -1;
    goto $l12;
    $l12:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp14) {
        case -1: goto $l15;
    }
    $l15:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->str));
}

