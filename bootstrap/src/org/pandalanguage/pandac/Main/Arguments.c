#include "org/pandalanguage/pandac/Main/Arguments.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"
#include "panda/io/OutputStream.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Main$Arguments$class_type org$pandalanguage$pandac$Main$Arguments$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$Arguments$cleanup, org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit, org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String, org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn7)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Object* (*$fn14)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn16)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn26)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn31)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn37)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn38)(org$pandalanguage$pandac$Main$Arguments*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x41\x72\x67\x75\x6d\x65\x6e\x74\x73", 39, 4637500274244339259, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x66\x74\x65\x72\x20", 7, 142212394496195, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };

void org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main$Arguments* self, panda$collections$ListView* p_args) {
    self->index = ((panda$core$Int64) { 1 });
    {
        self->args = p_args;
    }
}
panda$core$Bit org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit(org$pandalanguage$pandac$Main$Arguments* self) {
    ITable* $tmp2 = ((panda$collections$CollectionView*) self->args)->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) self->args));
    panda$core$Bit $tmp6 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->index, $tmp5);
    return $tmp6;
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self) {
    panda$core$Bit $tmp8 = (($fn7) self->$class->vtable[2])(self);
    panda$core$Bit $tmp9 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp8);
    PANDA_ASSERT($tmp9.value);
    panda$core$Int64 $tmp10 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp10;
    panda$core$Int64 $tmp11 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    ITable* $tmp12 = self->args->$class->itable;
    while ($tmp12->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp12 = $tmp12->next;
    }
    $fn14 $tmp13 = $tmp12->methods[0];
    panda$core$Object* $tmp15 = $tmp13(self->args, $tmp11);
    return ((panda$core$String*) $tmp15);
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self, panda$core$String* p_label) {
    panda$core$Bit $tmp17 = (($fn16) self->$class->vtable[2])(self);
    if ($tmp17.value) {
    {
        panda$io$OutputStream* $tmp18 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s19, p_label);
        panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp20, &$s21);
        ITable* $tmp24 = ((panda$collections$CollectionView*) self->args)->$class->itable;
        while ($tmp24->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp24 = $tmp24->next;
        }
        $fn26 $tmp25 = $tmp24->methods[0];
        panda$core$Int64 $tmp27 = $tmp25(((panda$collections$CollectionView*) self->args));
        panda$core$Int64 $tmp28 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp27, ((panda$core$Int64) { 1 }));
        ITable* $tmp29 = self->args->$class->itable;
        while ($tmp29->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp29 = $tmp29->next;
        }
        $fn31 $tmp30 = $tmp29->methods[0];
        panda$core$Object* $tmp32 = $tmp30(self->args, $tmp28);
        panda$core$String* $tmp33 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s23, ((panda$core$String*) $tmp32));
        panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp33, &$s34);
        panda$core$String* $tmp36 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp22, $tmp35);
        (($fn37) $tmp18->$class->vtable[19])($tmp18, $tmp36);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    panda$core$String* $tmp39 = (($fn38) self->$class->vtable[3])(self);
    return $tmp39;
}
void org$pandalanguage$pandac$Main$Arguments$cleanup(org$pandalanguage$pandac$Main$Arguments* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->args));
}

