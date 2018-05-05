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
typedef panda$core$Bit (*$fn10)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Object* (*$fn20)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn22)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn39)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn44)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn50)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn54)(org$pandalanguage$pandac$Main$Arguments*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x41\x72\x67\x75\x6d\x65\x6e\x74\x73", 39, 4637500274244339259, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x66\x74\x65\x72\x20", 7, 142212394496195, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };

void org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main$Arguments* self, panda$collections$ListView* p_args) {
    self->args = NULL;
    self->index = ((panda$core$Int64) { 1 });
    {
        panda$collections$ListView* $tmp2 = self->args;
        panda$collections$ListView* $tmp3 = p_args;
        self->args = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$core$Bit org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit(org$pandalanguage$pandac$Main$Arguments* self) {
    ITable* $tmp5 = ((panda$collections$CollectionView*) self->args)->$class->itable;
    while ($tmp5->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp5 = $tmp5->next;
    }
    $fn7 $tmp6 = $tmp5->methods[0];
    panda$core$Int64 $tmp8 = $tmp6(((panda$collections$CollectionView*) self->args));
    panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->index, $tmp8);
    panda$core$Bit $tmp4 = $tmp9;
    return $tmp4;
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self) {
    panda$core$Bit $tmp11 = (($fn10) self->$class->vtable[2])(self);
    panda$core$Bit $tmp12 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp11);
    PANDA_ASSERT($tmp12.value);
    panda$core$Int64 $tmp13 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp13;
    panda$core$Int64 $tmp17 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    ITable* $tmp18 = self->args->$class->itable;
    while ($tmp18->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp18 = $tmp18->next;
    }
    $fn20 $tmp19 = $tmp18->methods[0];
    panda$core$Object* $tmp21 = $tmp19(self->args, $tmp17);
    panda$core$Object* $tmp16 = $tmp21;
    panda$core$String* $tmp15 = ((panda$core$String*) $tmp16);
    panda$core$String* $tmp14 = $tmp15;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object($tmp16);
    return $tmp14;
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self, panda$core$String* p_label) {
    panda$core$Bit $tmp23 = (($fn22) self->$class->vtable[2])(self);
    if ($tmp23.value) {
    {
        panda$io$OutputStream* $tmp25 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        panda$io$OutputStream* $tmp24 = $tmp25;
        panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s29, p_label);
        panda$core$String* $tmp28 = $tmp30;
        panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp28, &$s31);
        panda$core$String* $tmp27 = $tmp32;
        ITable* $tmp37 = ((panda$collections$CollectionView*) self->args)->$class->itable;
        while ($tmp37->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp37 = $tmp37->next;
        }
        $fn39 $tmp38 = $tmp37->methods[0];
        panda$core$Int64 $tmp40 = $tmp38(((panda$collections$CollectionView*) self->args));
        panda$core$Int64 $tmp41 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp40, ((panda$core$Int64) { 1 }));
        ITable* $tmp42 = self->args->$class->itable;
        while ($tmp42->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp42 = $tmp42->next;
        }
        $fn44 $tmp43 = $tmp42->methods[0];
        panda$core$Object* $tmp45 = $tmp43(self->args, $tmp41);
        panda$core$Object* $tmp36 = $tmp45;
        panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s35, ((panda$core$String*) $tmp36));
        panda$core$String* $tmp34 = $tmp46;
        panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp34, &$s47);
        panda$core$String* $tmp33 = $tmp48;
        panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, $tmp33);
        panda$core$String* $tmp26 = $tmp49;
        (($fn50) $tmp24->$class->vtable[19])($tmp24, $tmp26);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$Panda$unref$panda$core$Object($tmp36);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    panda$core$String* $tmp55 = (($fn54) self->$class->vtable[3])(self);
    panda$core$String* $tmp53 = $tmp55;
    panda$core$String* $tmp52 = $tmp53;
    panda$core$String* $tmp51 = $tmp52;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp52));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp53));
    return $tmp51;
}
void org$pandalanguage$pandac$Main$Arguments$cleanup(org$pandalanguage$pandac$Main$Arguments* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->args));
}

