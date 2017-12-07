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
typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn12)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn22)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn27)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn33)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn34)(org$pandalanguage$pandac$Main$Arguments*);

static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 1 };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x66\x74\x65\x72\x20", 7, 1 };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };

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
    panda$core$Int64 $tmp6 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp6;
    panda$core$Int64 $tmp7 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    ITable* $tmp8 = self->args->$class->itable;
    while ($tmp8->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp8 = $tmp8->next;
    }
    $fn10 $tmp9 = $tmp8->methods[0];
    panda$core$Object* $tmp11 = $tmp9(self->args, $tmp7);
    return ((panda$core$String*) $tmp11);
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self, panda$core$String* p_label) {
    panda$core$Bit $tmp13 = (($fn12) self->$class->vtable[2])(self);
    if ($tmp13.value) {
    {
        panda$io$OutputStream* $tmp14 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s15, p_label);
        panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp16, &$s17);
        ITable* $tmp20 = ((panda$collections$CollectionView*) self->args)->$class->itable;
        while ($tmp20->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp20 = $tmp20->next;
        }
        $fn22 $tmp21 = $tmp20->methods[0];
        panda$core$Int64 $tmp23 = $tmp21(((panda$collections$CollectionView*) self->args));
        panda$core$Int64 $tmp24 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp23, ((panda$core$Int64) { 1 }));
        ITable* $tmp25 = self->args->$class->itable;
        while ($tmp25->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp25 = $tmp25->next;
        }
        $fn27 $tmp26 = $tmp25->methods[0];
        panda$core$Object* $tmp28 = $tmp26(self->args, $tmp24);
        panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s19, ((panda$core$String*) $tmp28));
        panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp29, &$s30);
        panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp18, $tmp31);
        (($fn33) $tmp14->$class->vtable[19])($tmp14, $tmp32);
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    panda$core$String* $tmp35 = (($fn34) self->$class->vtable[3])(self);
    return $tmp35;
}

