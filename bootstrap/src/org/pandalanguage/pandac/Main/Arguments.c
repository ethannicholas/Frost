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

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn12)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Object* (*$fn27)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn30)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn47)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn53)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn59)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn64)(org$pandalanguage$pandac$Main$Arguments*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x41\x72\x67\x75\x6d\x65\x6e\x74\x73", 39, 4637500274244339259, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x66\x74\x65\x72\x20", 7, 142212394496195, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };

void org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main$Arguments* self, panda$collections$ListView* p_args) {
    panda$core$Int64 $tmp2;
    panda$collections$ListView* $tmp3;
    panda$collections$ListView* $tmp4;
    self->args = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 1);
    self->index = $tmp2;
    {
        $tmp3 = self->args;
        $tmp4 = p_args;
        self->args = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
}
panda$core$Bit org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit(org$pandalanguage$pandac$Main$Arguments* self) {
    panda$core$Bit $returnValue5;
    ITable* $tmp6 = ((panda$collections$CollectionView*) self->args)->$class->itable;
    while ($tmp6->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp6 = $tmp6->next;
    }
    $fn8 $tmp7 = $tmp6->methods[0];
    panda$core$Int64 $tmp9 = $tmp7(((panda$collections$CollectionView*) self->args));
    panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->index, $tmp9);
    $returnValue5 = $tmp10;
    return $returnValue5;
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self) {
    panda$core$Int64 $tmp18;
    panda$core$String* $returnValue20;
    panda$core$String* $tmp21;
    panda$core$Object* $tmp22;
    panda$core$Int64 $tmp23;
    panda$core$Bit $tmp13 = (($fn12) self->$class->vtable[2])(self);
    panda$core$Bit $tmp14 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp13);
    if ($tmp14.value) goto $l15; else goto $l16;
    $l16:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s17, (panda$core$Int64) { 45 });
    abort();
    $l15:;
    panda$core$Int64$init$builtin_int64(&$tmp18, 1);
    panda$core$Int64 $tmp19 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp18);
    self->index = $tmp19;
    panda$core$Int64$init$builtin_int64(&$tmp23, 1);
    panda$core$Int64 $tmp24 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, $tmp23);
    ITable* $tmp25 = self->args->$class->itable;
    while ($tmp25->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp25 = $tmp25->next;
    }
    $fn27 $tmp26 = $tmp25->methods[0];
    panda$core$Object* $tmp28 = $tmp26(self->args, $tmp24);
    $tmp22 = $tmp28;
    $tmp21 = ((panda$core$String*) $tmp22);
    $returnValue20 = $tmp21;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object($tmp22);
    return $returnValue20;
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self, panda$core$String* p_label) {
    panda$io$OutputStream* $tmp32;
    panda$core$String* $tmp34;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$String* $tmp41;
    panda$core$String* $tmp42;
    panda$core$Object* $tmp44;
    panda$core$Int64 $tmp49;
    panda$core$Int64 $tmp60;
    panda$core$String* $returnValue61;
    panda$core$String* $tmp62;
    panda$core$String* $tmp63;
    panda$core$Bit $tmp31 = (($fn30) self->$class->vtable[2])(self);
    if ($tmp31.value) {
    {
        panda$io$OutputStream* $tmp33 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp32 = $tmp33;
        panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s37, p_label);
        $tmp36 = $tmp38;
        panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp36, &$s39);
        $tmp35 = $tmp40;
        ITable* $tmp45 = ((panda$collections$CollectionView*) self->args)->$class->itable;
        while ($tmp45->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp45 = $tmp45->next;
        }
        $fn47 $tmp46 = $tmp45->methods[0];
        panda$core$Int64 $tmp48 = $tmp46(((panda$collections$CollectionView*) self->args));
        panda$core$Int64$init$builtin_int64(&$tmp49, 1);
        panda$core$Int64 $tmp50 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp48, $tmp49);
        ITable* $tmp51 = self->args->$class->itable;
        while ($tmp51->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp51 = $tmp51->next;
        }
        $fn53 $tmp52 = $tmp51->methods[0];
        panda$core$Object* $tmp54 = $tmp52(self->args, $tmp50);
        $tmp44 = $tmp54;
        panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s43, ((panda$core$String*) $tmp44));
        $tmp42 = $tmp55;
        panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp42, &$s56);
        $tmp41 = $tmp57;
        panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp35, $tmp41);
        $tmp34 = $tmp58;
        (($fn59) $tmp32->$class->vtable[19])($tmp32, $tmp34);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object($tmp44);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Int64$init$builtin_int64(&$tmp60, 1);
        panda$core$System$exit$panda$core$Int64($tmp60);
    }
    }
    panda$core$String* $tmp65 = (($fn64) self->$class->vtable[3])(self);
    $tmp63 = $tmp65;
    $tmp62 = $tmp63;
    $returnValue61 = $tmp62;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
    return $returnValue61;
}
void org$pandalanguage$pandac$Main$Arguments$cleanup(org$pandalanguage$pandac$Main$Arguments* self) {
    int $tmp69;
    {
    }
    $tmp69 = -1;
    goto $l67;
    $l67:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp69) {
        case -1: goto $l70;
    }
    $l70:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->args));
}

