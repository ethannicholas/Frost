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
typedef panda$core$Object* (*$fn21)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn24)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn41)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn46)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn52)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn56)(org$pandalanguage$pandac$Main$Arguments*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x41\x72\x67\x75\x6d\x65\x6e\x74\x73", 39, 4637500274244339259, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x66\x74\x65\x72\x20", 7, 142212394496195, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };

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
    panda$core$String* $returnValue15;
    panda$core$String* $tmp16;
    panda$core$Object* $tmp17;
    panda$core$Bit $tmp12 = (($fn11) self->$class->vtable[2])(self);
    panda$core$Bit $tmp13 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp12);
    PANDA_ASSERT($tmp13.value);
    panda$core$Int64 $tmp14 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp14;
    panda$core$Int64 $tmp18 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    ITable* $tmp19 = self->args->$class->itable;
    while ($tmp19->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp19 = $tmp19->next;
    }
    $fn21 $tmp20 = $tmp19->methods[0];
    panda$core$Object* $tmp22 = $tmp20(self->args, $tmp18);
    $tmp17 = $tmp22;
    $tmp16 = ((panda$core$String*) $tmp17);
    $returnValue15 = $tmp16;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
    panda$core$Panda$unref$panda$core$Object($tmp17);
    return $returnValue15;
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self, panda$core$String* p_label) {
    panda$io$OutputStream* $tmp26;
    panda$core$String* $tmp28;
    panda$core$String* $tmp29;
    panda$core$String* $tmp30;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$Object* $tmp38;
    panda$core$String* $returnValue53;
    panda$core$String* $tmp54;
    panda$core$String* $tmp55;
    panda$core$Bit $tmp25 = (($fn24) self->$class->vtable[2])(self);
    if ($tmp25.value) {
    {
        panda$io$OutputStream* $tmp27 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp26 = $tmp27;
        panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s31, p_label);
        $tmp30 = $tmp32;
        panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s33);
        $tmp29 = $tmp34;
        ITable* $tmp39 = ((panda$collections$CollectionView*) self->args)->$class->itable;
        while ($tmp39->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp39 = $tmp39->next;
        }
        $fn41 $tmp40 = $tmp39->methods[0];
        panda$core$Int64 $tmp42 = $tmp40(((panda$collections$CollectionView*) self->args));
        panda$core$Int64 $tmp43 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp42, ((panda$core$Int64) { 1 }));
        ITable* $tmp44 = self->args->$class->itable;
        while ($tmp44->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp44 = $tmp44->next;
        }
        $fn46 $tmp45 = $tmp44->methods[0];
        panda$core$Object* $tmp47 = $tmp45(self->args, $tmp43);
        $tmp38 = $tmp47;
        panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s37, ((panda$core$String*) $tmp38));
        $tmp36 = $tmp48;
        panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp36, &$s49);
        $tmp35 = $tmp50;
        panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp29, $tmp35);
        $tmp28 = $tmp51;
        (($fn52) $tmp26->$class->vtable[19])($tmp26, $tmp28);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object($tmp38);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
        panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
    }
    }
    panda$core$String* $tmp57 = (($fn56) self->$class->vtable[3])(self);
    $tmp55 = $tmp57;
    $tmp54 = $tmp55;
    $returnValue53 = $tmp54;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp54));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
    return $returnValue53;
}
void org$pandalanguage$pandac$Main$Arguments$cleanup(org$pandalanguage$pandac$Main$Arguments* self) {
    int $tmp61;
    {
    }
    $tmp61 = -1;
    goto $l59;
    $l59:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp61) {
        case -1: goto $l62;
    }
    $l62:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->args));
}






