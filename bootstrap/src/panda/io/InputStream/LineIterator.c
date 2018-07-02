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
typedef panda$core$Bit (*$fn7)(panda$io$InputStream$LineIterator*);
typedef void (*$fn22)(panda$io$InputStream$LineIterator*);
typedef panda$core$String* (*$fn35)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x4c\x69\x6e\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 33, -4146794243265748747, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x4c\x69\x6e\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 90, -3022453931518810697, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
    panda$core$String* result20 = NULL;
    panda$core$String* $tmp21;
    panda$core$String* $returnValue23;
    panda$core$String* $tmp24;
    panda$core$Bit $tmp8 = (($fn7) self->$class->vtable[2])(self);
    panda$core$Bit $tmp9 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp8);
    if ($tmp9.value) goto $l10; else goto $l11;
    $l11:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s12, (panda$core$Int64) { 32 }, &$s13);
    abort();
    $l10:;
    int $tmp16;
    {
        if (((panda$core$Bit) { self->_next != NULL }).value) goto $l17; else goto $l18;
        $l18:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s19, (panda$core$Int64) { 33 });
        abort();
        $l17:;
        $tmp21 = self->_next;
        result20 = $tmp21;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
        (($fn22) self->$class->vtable[4])(self);
        $tmp24 = result20;
        $returnValue23 = $tmp24;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp24));
        $tmp16 = 0;
        goto $l14;
        $l25:;
        return $returnValue23;
    }
    $l14:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result20));
    result20 = NULL;
    switch ($tmp16) {
        case 0: goto $l25;
    }
    $l27:;
    if (false) goto $l28; else goto $l29;
    $l29:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s30, (panda$core$Int64) { 32 }, &$s31);
    abort();
    $l28:;
    abort();
}
void panda$io$InputStream$LineIterator$readNext(panda$io$InputStream$LineIterator* self) {
    panda$core$String* $tmp32;
    panda$core$String* $tmp33;
    panda$core$String* $tmp34;
    {
        $tmp32 = self->_next;
        panda$core$String* $tmp36 = (($fn35) self->input->$class->vtable[15])(self->input);
        $tmp34 = $tmp36;
        $tmp33 = $tmp34;
        self->_next = $tmp33;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
    }
}
void panda$io$InputStream$LineIterator$cleanup(panda$io$InputStream$LineIterator* self) {
    int $tmp39;
    {
    }
    $tmp39 = -1;
    goto $l37;
    $l37:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp39) {
        case -1: goto $l40;
    }
    $l40:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->input));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->_next));
}





