#include "org/pandalanguage/pandac/Main/Arguments.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/String.h"
#include "panda/io/OutputStream.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"


org$pandalanguage$pandac$Main$Arguments$class_type org$pandalanguage$pandac$Main$Arguments$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit, org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String, org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn6)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Object* (*$fn13)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn15)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn25)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn30)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn36)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn37)(org$pandalanguage$pandac$Main$Arguments*);

static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x66\x74\x65\x72\x20", 7, 142212394496195, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };

void org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main$Arguments* self, panda$collections$ListView* p_args) {
    self->index = ((panda$core$Int64) { 1 });
    self->args = p_args;
}
panda$core$Bit org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit(org$pandalanguage$pandac$Main$Arguments* self) {
    ITable* $tmp1 = ((panda$collections$CollectionView*) self->args)->$class->itable;
    while ($tmp1->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1 = $tmp1->next;
    }
    $fn3 $tmp2 = $tmp1->methods[0];
    panda$core$Int64 $tmp4 = $tmp2(((panda$collections$CollectionView*) self->args));
    panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->index, $tmp4);
    return $tmp5;
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self) {
    panda$core$Bit $tmp7 = (($fn6) self->$class->vtable[2])(self);
    panda$core$Bit $tmp8 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp7);
    PANDA_ASSERT($tmp8.value);
    panda$core$Int64 $tmp9 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp9;
    panda$core$Int64 $tmp10 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    ITable* $tmp11 = self->args->$class->itable;
    while ($tmp11->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp11 = $tmp11->next;
    }
    $fn13 $tmp12 = $tmp11->methods[0];
    panda$core$Object* $tmp14 = $tmp12(self->args, $tmp10);
    return ((panda$core$String*) $tmp14);
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self, panda$core$String* p_label) {
    panda$core$Bit $tmp16 = (($fn15) self->$class->vtable[2])(self);
    if ($tmp16.value) {
    {
        panda$io$OutputStream* $tmp17 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s18, p_label);
        panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, &$s20);
        ITable* $tmp23 = ((panda$collections$CollectionView*) self->args)->$class->itable;
        while ($tmp23->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp23 = $tmp23->next;
        }
        $fn25 $tmp24 = $tmp23->methods[0];
        panda$core$Int64 $tmp26 = $tmp24(((panda$collections$CollectionView*) self->args));
        panda$core$Int64 $tmp27 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp26, ((panda$core$Int64) { 1 }));
        ITable* $tmp28 = self->args->$class->itable;
        while ($tmp28->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp28 = $tmp28->next;
        }
        $fn30 $tmp29 = $tmp28->methods[0];
        panda$core$Object* $tmp31 = $tmp29(self->args, $tmp27);
        panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s22, ((panda$core$String*) $tmp31));
        panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp32, &$s33);
        panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, $tmp34);
        (($fn36) $tmp17->$class->vtable[19])($tmp17, $tmp35);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    panda$core$String* $tmp38 = (($fn37) self->$class->vtable[3])(self);
    return $tmp38;
}

