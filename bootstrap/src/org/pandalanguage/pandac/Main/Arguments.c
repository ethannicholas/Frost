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
#include "panda/core/UInt8.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Main$Arguments$class_type org$pandalanguage$pandac$Main$Arguments$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$Arguments$cleanup, org$pandalanguage$pandac$Main$Arguments$get_done$R$panda$core$Bit, org$pandalanguage$pandac$Main$Arguments$next$R$panda$core$String, org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn12)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Object* (*$fn28)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn31)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn48)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn54)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn60)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn65)(org$pandalanguage$pandac$Main$Arguments*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x41\x72\x67\x75\x6d\x65\x6e\x74\x73", 39, 4637500274244339259, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x66\x74\x65\x72\x20", 7, 142212394496195, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };

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
    org$pandalanguage$pandac$Main$Arguments* $tmp18;
    panda$core$Int64 $tmp19;
    panda$core$String* $returnValue21;
    panda$core$String* $tmp22;
    panda$core$Object* $tmp23;
    panda$core$Int64 $tmp24;
    panda$core$Bit $tmp13 = (($fn12) self->$class->vtable[2])(self);
    panda$core$Bit $tmp14 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp13);
    if ($tmp14.value) goto $l15; else goto $l16;
    $l16:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s17, (panda$core$Int64) { 44 });
    abort();
    $l15:;
    $tmp18 = self;
    panda$core$Int64$init$builtin_int64(&$tmp19, 1);
    panda$core$Int64 $tmp20 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp18->index, $tmp19);
    $tmp18->index = $tmp20;
    panda$core$Int64$init$builtin_int64(&$tmp24, 1);
    panda$core$Int64 $tmp25 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, $tmp24);
    ITable* $tmp26 = self->args->$class->itable;
    while ($tmp26->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp26 = $tmp26->next;
    }
    $fn28 $tmp27 = $tmp26->methods[0];
    panda$core$Object* $tmp29 = $tmp27(self->args, $tmp25);
    $tmp23 = $tmp29;
    $tmp22 = ((panda$core$String*) $tmp23);
    $returnValue21 = $tmp22;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
    panda$core$Panda$unref$panda$core$Object($tmp23);
    return $returnValue21;
}
panda$core$String* org$pandalanguage$pandac$Main$Arguments$next$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$Main$Arguments* self, panda$core$String* p_label) {
    panda$io$OutputStream* $tmp33;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$String* $tmp37;
    panda$core$String* $tmp42;
    panda$core$String* $tmp43;
    panda$core$Object* $tmp45;
    panda$core$Int64 $tmp50;
    panda$core$UInt8 $tmp61;
    panda$core$String* $returnValue62;
    panda$core$String* $tmp63;
    panda$core$String* $tmp64;
    panda$core$Bit $tmp32 = (($fn31) self->$class->vtable[2])(self);
    if ($tmp32.value) {
    {
        panda$io$OutputStream* $tmp34 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp33 = $tmp34;
        panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s38, p_label);
        $tmp37 = $tmp39;
        panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, &$s40);
        $tmp36 = $tmp41;
        ITable* $tmp46 = ((panda$collections$CollectionView*) self->args)->$class->itable;
        while ($tmp46->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp46 = $tmp46->next;
        }
        $fn48 $tmp47 = $tmp46->methods[0];
        panda$core$Int64 $tmp49 = $tmp47(((panda$collections$CollectionView*) self->args));
        panda$core$Int64$init$builtin_int64(&$tmp50, 1);
        panda$core$Int64 $tmp51 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp49, $tmp50);
        ITable* $tmp52 = self->args->$class->itable;
        while ($tmp52->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp52 = $tmp52->next;
        }
        $fn54 $tmp53 = $tmp52->methods[0];
        panda$core$Object* $tmp55 = $tmp53(self->args, $tmp51);
        $tmp45 = $tmp55;
        panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s44, ((panda$core$String*) $tmp45));
        $tmp43 = $tmp56;
        panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp43, &$s57);
        $tmp42 = $tmp58;
        panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp36, $tmp42);
        $tmp35 = $tmp59;
        (($fn60) $tmp33->$class->vtable[19])($tmp33, $tmp35);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$core$Panda$unref$panda$core$Object($tmp45);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
        panda$core$UInt8$init$builtin_uint8(&$tmp61, 1);
        panda$core$System$exit$panda$core$UInt8($tmp61);
    }
    }
    panda$core$String* $tmp66 = (($fn65) self->$class->vtable[3])(self);
    $tmp64 = $tmp66;
    $tmp63 = $tmp64;
    $returnValue62 = $tmp63;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
    return $returnValue62;
}
void org$pandalanguage$pandac$Main$Arguments$cleanup(org$pandalanguage$pandac$Main$Arguments* self) {
    int $tmp70;
    {
    }
    $tmp70 = -1;
    goto $l68;
    $l68:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp70) {
        case -1: goto $l71;
    }
    $l71:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->args));
}

