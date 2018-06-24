#include "panda/io/InputStream/LineIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
__attribute__((weak)) panda$core$Object* panda$io$InputStream$LineIterator$next$R$panda$core$String$shim(panda$io$InputStream$LineIterator* p0) {
    panda$core$String* result = panda$io$InputStream$LineIterator$next$R$panda$core$String(p0);

    return ((panda$core$Object*) result);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$io$InputStream$LineIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit, panda$io$InputStream$LineIterator$next$R$panda$core$String$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$io$InputStream$LineIterator$class_type panda$io$InputStream$LineIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$io$InputStream$LineIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$io$InputStream$LineIterator$cleanup, panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit, panda$io$InputStream$LineIterator$next$R$panda$core$String$shim, panda$io$InputStream$LineIterator$readNext} };

typedef void (*$fn4)(panda$io$InputStream$LineIterator*);
typedef void (*$fn15)(panda$io$InputStream$LineIterator*);
typedef panda$core$String* (*$fn24)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x4c\x69\x6e\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 33, -4146794243265748747, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };

void panda$io$InputStream$LineIterator$init$panda$io$InputStream(panda$io$InputStream$LineIterator* self, panda$io$InputStream* p_input) {
    panda$io$InputStream* $tmp2;
    panda$io$InputStream* $tmp3;
    self->input = NULL;
    self->_next = NULL;
    {
        $tmp2 = self->input;
        $tmp3 = p_input;
        self->input = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    (($fn4) self->$class->vtable[4])(self);
}
panda$core$Bit panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit(panda$io$InputStream$LineIterator* self) {
    panda$core$Bit $returnValue5;
    $returnValue5 = ((panda$core$Bit) { self->_next == NULL });
    return $returnValue5;
}
panda$core$String* panda$io$InputStream$LineIterator$next$R$panda$core$String(panda$io$InputStream$LineIterator* self) {
    panda$core$String* result13 = NULL;
    panda$core$String* $tmp14;
    panda$core$String* $returnValue16;
    panda$core$String* $tmp17;
    int $tmp9;
    {
        if (((panda$core$Bit) { self->_next != NULL }).value) goto $l10; else goto $l11;
        $l11:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s12, (panda$core$Int64) { 24 });
        abort();
        $l10:;
        $tmp14 = self->_next;
        result13 = $tmp14;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
        (($fn15) self->$class->vtable[4])(self);
        $tmp17 = result13;
        $returnValue16 = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        $tmp9 = 0;
        goto $l7;
        $l18:;
        return $returnValue16;
    }
    $l7:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result13));
    result13 = NULL;
    switch ($tmp9) {
        case 0: goto $l18;
    }
    $l20:;
    abort();
}
void panda$io$InputStream$LineIterator$readNext(panda$io$InputStream$LineIterator* self) {
    panda$core$String* $tmp21;
    panda$core$String* $tmp22;
    panda$core$String* $tmp23;
    {
        $tmp21 = self->_next;
        panda$core$String* $tmp25 = (($fn24) self->input->$class->vtable[11])(self->input);
        $tmp23 = $tmp25;
        $tmp22 = $tmp23;
        self->_next = $tmp22;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    }
}
void panda$io$InputStream$LineIterator$cleanup(panda$io$InputStream$LineIterator* self) {
    int $tmp28;
    {
    }
    $tmp28 = -1;
    goto $l26;
    $l26:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp28) {
        case -1: goto $l29;
    }
    $l29:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->input));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->_next));
}





