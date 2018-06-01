#include "org/pandalanguage/pandac/Main/Arguments.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"
#include "panda/io/OutputStream.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Main$Arguments$class_type org$pandalanguage$pandac$Main$Arguments$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$Arguments$cleanup, org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit, org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String, org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn7)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn11)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Object* (*$fn24)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn27)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn44)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn49)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn55)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn59)(org$pandalanguage$pandac$Main$Arguments*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x41\x72\x67\x75\x6d\x65\x6e\x74\x73", 39, 4637500274244339259, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x66\x74\x65\x72\x20", 7, 142212394496195, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };

void org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main$Arguments* self, panda$collections$ListView* p_args) {
    panda$collections$ListView* $tmp2;
    panda$collections$ListView* $tmp3;
    self->args = NULL;
    self->index = ((panda$core$Int64) { 1 });
    {
        $tmp2 = self->args;
        $tmp3 = p_args;
        self->args = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$core$Bit org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit(org$pandalanguage$pandac$Main$Arguments* self) {
    panda$core$Bit $returnValue4;
    ITable* $tmp5 = ((panda$collections$CollectionView*) self->args)->$class->itable;
    while ($tmp5->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp5 = $tmp5->next;
    }
    $fn7 $tmp6 = $tmp5->methods[0];
    panda$core$Int64 $tmp8 = $tmp6(((panda$collections$CollectionView*) self->args));
    panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->index, $tmp8);
    $returnValue4 = $tmp9;
    return $returnValue4;
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self) {
    panda$core$String* $returnValue18;
    panda$core$String* $tmp19;
    panda$core$Object* $tmp20;
    panda$core$Bit $tmp12 = (($fn11) self->$class->vtable[2])(self);
    panda$core$Bit $tmp13 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp12);
    if ($tmp13.value) goto $l14; else goto $l15;
    $l15:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s16, (panda$core$Int64) { 45 });
    abort();
    $l14:;
    panda$core$Int64 $tmp17 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp17;
    panda$core$Int64 $tmp21 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    ITable* $tmp22 = self->args->$class->itable;
    while ($tmp22->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp22 = $tmp22->next;
    }
    $fn24 $tmp23 = $tmp22->methods[0];
    panda$core$Object* $tmp25 = $tmp23(self->args, $tmp21);
    $tmp20 = $tmp25;
    $tmp19 = ((panda$core$String*) $tmp20);
    $returnValue18 = $tmp19;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
    panda$core$Panda$unref$panda$core$Object($tmp20);
    return $returnValue18;
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self, panda$core$String* p_label) {
    panda$io$OutputStream* $tmp29;
    panda$core$String* $tmp31;
    panda$core$String* $tmp32;
    panda$core$String* $tmp33;
    panda$core$String* $tmp38;
    panda$core$String* $tmp39;
    panda$core$Object* $tmp41;
    panda$core$String* $returnValue56;
    panda$core$String* $tmp57;
    panda$core$String* $tmp58;
    panda$core$Bit $tmp28 = (($fn27) self->$class->vtable[2])(self);
    if ($tmp28.value) {
    {
        panda$io$OutputStream* $tmp30 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp29 = $tmp30;
        panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s34, p_label);
        $tmp33 = $tmp35;
        panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp33, &$s36);
        $tmp32 = $tmp37;
        ITable* $tmp42 = ((panda$collections$CollectionView*) self->args)->$class->itable;
        while ($tmp42->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp42 = $tmp42->next;
        }
        $fn44 $tmp43 = $tmp42->methods[0];
        panda$core$Int64 $tmp45 = $tmp43(((panda$collections$CollectionView*) self->args));
        panda$core$Int64 $tmp46 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp45, ((panda$core$Int64) { 1 }));
        ITable* $tmp47 = self->args->$class->itable;
        while ($tmp47->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp47 = $tmp47->next;
        }
        $fn49 $tmp48 = $tmp47->methods[0];
        panda$core$Object* $tmp50 = $tmp48(self->args, $tmp46);
        $tmp41 = $tmp50;
        panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s40, ((panda$core$String*) $tmp41));
        $tmp39 = $tmp51;
        panda$core$String* $tmp53 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp39, &$s52);
        $tmp38 = $tmp53;
        panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp32, $tmp38);
        $tmp31 = $tmp54;
        (($fn55) $tmp29->$class->vtable[19])($tmp29, $tmp31);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object($tmp41);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    panda$core$String* $tmp60 = (($fn59) self->$class->vtable[3])(self);
    $tmp58 = $tmp60;
    $tmp57 = $tmp58;
    $returnValue56 = $tmp57;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
    return $returnValue56;
}
void org$pandalanguage$pandac$Main$Arguments$cleanup(org$pandalanguage$pandac$Main$Arguments* self) {
    int $tmp64;
    {
    }
    $tmp64 = -1;
    goto $l62;
    $l62:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp64) {
        case -1: goto $l65;
    }
    $l65:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->args));
}

