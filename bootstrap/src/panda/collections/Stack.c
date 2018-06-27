#include "panda/collections/Stack.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Array.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Stack/StackIterator.h"
__attribute__((weak)) panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim(panda$collections$Stack* p0) {
    panda$collections$Iterator* result = panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Stack$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim} };

static panda$core$String $s1;
panda$collections$Stack$class_type panda$collections$Stack$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$_panda$collections$Iterable, { panda$collections$Stack$convert$R$panda$core$String, panda$collections$Stack$cleanup, panda$collections$Stack$push$panda$collections$Stack$T, panda$collections$Stack$pop$R$panda$collections$Stack$T, panda$collections$Stack$pop$panda$collections$Stack$T, panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T, panda$collections$Stack$clear, panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim, panda$collections$Stack$get_count$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn14)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn26)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn34)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn66)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn77)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn92)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, 4189143067940765470, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 87, -3717553610229014045, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x65\x78\x70\x65\x63\x74\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54\x29", 95, -2894691554432978803, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, 5685017306878640050, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };

void panda$collections$Stack$push$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_v) {
    panda$collections$Array$add$panda$collections$Array$T(self->contents, p_v);
}
panda$core$Object* panda$collections$Stack$pop$R$panda$collections$Stack$T(panda$collections$Stack* self) {
    panda$core$Int64 $tmp3;
    panda$core$Int64 $tmp16;
    panda$core$Object* result21 = NULL;
    panda$core$Object* $tmp22;
    panda$core$Object* $tmp23;
    panda$core$Int64 $tmp28;
    panda$core$Object* $tmp31;
    panda$core$Int64 $tmp36;
    panda$core$Object* $returnValue39;
    panda$core$Object* $tmp40;
    panda$core$Int64 $tmp2 = panda$collections$Stack$get_count$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    panda$core$Bit $tmp4 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2, $tmp3);
    if ($tmp4.value) goto $l5; else goto $l6;
    $l6:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s7, (panda$core$Int64) { 51 }, &$s8);
    abort();
    $l5:;
    int $tmp11;
    {
        ITable* $tmp12 = ((panda$collections$CollectionView*) self->contents)->$class->itable;
        while ($tmp12->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp12 = $tmp12->next;
        }
        $fn14 $tmp13 = $tmp12->methods[0];
        panda$core$Int64 $tmp15 = $tmp13(((panda$collections$CollectionView*) self->contents));
        panda$core$Int64$init$builtin_int64(&$tmp16, 0);
        panda$core$Bit $tmp17 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp15, $tmp16);
        if ($tmp17.value) goto $l18; else goto $l19;
        $l19:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s20, (panda$core$Int64) { 52 });
        abort();
        $l18:;
        ITable* $tmp24 = ((panda$collections$CollectionView*) self->contents)->$class->itable;
        while ($tmp24->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp24 = $tmp24->next;
        }
        $fn26 $tmp25 = $tmp24->methods[0];
        panda$core$Int64 $tmp27 = $tmp25(((panda$collections$CollectionView*) self->contents));
        panda$core$Int64$init$builtin_int64(&$tmp28, 1);
        panda$core$Int64 $tmp29 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp27, $tmp28);
        panda$core$Object* $tmp30 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp29);
        $tmp23 = $tmp30;
        $tmp22 = $tmp23;
        result21 = $tmp22;
        panda$core$Panda$ref$panda$core$Object($tmp22);
        panda$core$Panda$unref$panda$core$Object($tmp23);
        ITable* $tmp32 = ((panda$collections$CollectionView*) self->contents)->$class->itable;
        while ($tmp32->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp32 = $tmp32->next;
        }
        $fn34 $tmp33 = $tmp32->methods[0];
        panda$core$Int64 $tmp35 = $tmp33(((panda$collections$CollectionView*) self->contents));
        panda$core$Int64$init$builtin_int64(&$tmp36, 1);
        panda$core$Int64 $tmp37 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp35, $tmp36);
        panda$core$Object* $tmp38 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp37);
        $tmp31 = $tmp38;
        panda$core$Panda$unref$panda$core$Object($tmp31);
        $tmp40 = result21;
        $returnValue39 = $tmp40;
        panda$core$Panda$ref$panda$core$Object($tmp40);
        $tmp11 = 0;
        goto $l9;
        $l41:;
        return $returnValue39;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object(result21);
    result21 = NULL;
    switch ($tmp11) {
        case 0: goto $l41;
    }
    $l43:;
    abort();
}
void panda$collections$Stack$pop$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_expected) {
    panda$core$Object* $tmp44;
    panda$core$Int64 $tmp45;
    panda$core$Object* $tmp51;
    panda$core$Int64$init$builtin_int64(&$tmp45, 0);
    panda$core$Object* $tmp46 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self, $tmp45);
    $tmp44 = $tmp46;
    panda$core$Panda$unref$panda$core$Object($tmp44);
    if (((panda$core$Bit) { $tmp44 == p_expected }).value) goto $l47; else goto $l48;
    $l48:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s49, (panda$core$Int64) { 76 }, &$s50);
    abort();
    $l47:;
    panda$core$Object* $tmp52 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self);
    $tmp51 = $tmp52;
    panda$core$Panda$unref$panda$core$Object($tmp51);
}
panda$core$Object* panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Int64 p_depth) {
    panda$core$Int64 $tmp54;
    panda$core$Object* $returnValue72;
    panda$core$Object* $tmp73;
    panda$core$Object* $tmp74;
    panda$core$Int64 $tmp79;
    panda$core$Int64$init$builtin_int64(&$tmp54, 0);
    panda$core$Bit $tmp55 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp54);
    bool $tmp53 = $tmp55.value;
    if (!$tmp53) goto $l56;
    panda$core$Int64 $tmp57 = panda$collections$Stack$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp58 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp57);
    $tmp53 = $tmp58.value;
    $l56:;
    panda$core$Bit $tmp59 = { $tmp53 };
    if ($tmp59.value) goto $l60; else goto $l61;
    $l61:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s62, (panda$core$Int64) { 85 }, &$s63);
    abort();
    $l60:;
    ITable* $tmp64 = ((panda$collections$CollectionView*) self->contents)->$class->itable;
    while ($tmp64->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp64 = $tmp64->next;
    }
    $fn66 $tmp65 = $tmp64->methods[0];
    panda$core$Int64 $tmp67 = $tmp65(((panda$collections$CollectionView*) self->contents));
    panda$core$Bit $tmp68 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp67, p_depth);
    if ($tmp68.value) goto $l69; else goto $l70;
    $l70:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s71, (panda$core$Int64) { 86 });
    abort();
    $l69:;
    ITable* $tmp75 = ((panda$collections$CollectionView*) self->contents)->$class->itable;
    while ($tmp75->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp75 = $tmp75->next;
    }
    $fn77 $tmp76 = $tmp75->methods[0];
    panda$core$Int64 $tmp78 = $tmp76(((panda$collections$CollectionView*) self->contents));
    panda$core$Int64$init$builtin_int64(&$tmp79, 1);
    panda$core$Int64 $tmp80 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp78, $tmp79);
    panda$core$Int64 $tmp81 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp80, p_depth);
    panda$core$Object* $tmp82 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp81);
    $tmp74 = $tmp82;
    $tmp73 = $tmp74;
    $returnValue72 = $tmp73;
    panda$core$Panda$ref$panda$core$Object($tmp73);
    panda$core$Panda$unref$panda$core$Object($tmp74);
    return $returnValue72;
}
void panda$collections$Stack$clear(panda$collections$Stack* self) {
    panda$collections$Array$clear(self->contents);
}
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* self) {
    panda$collections$Iterator* $returnValue84;
    panda$collections$Iterator* $tmp85;
    panda$collections$Stack$StackIterator* $tmp86;
    panda$collections$Stack$StackIterator* $tmp87 = (panda$collections$Stack$StackIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Stack$StackIterator$class);
    panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT($tmp87, self);
    $tmp86 = $tmp87;
    $tmp85 = ((panda$collections$Iterator*) $tmp86);
    $returnValue84 = $tmp85;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
    return $returnValue84;
}
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* self) {
    panda$core$Int64 $returnValue89;
    ITable* $tmp90 = ((panda$collections$CollectionView*) self->contents)->$class->itable;
    while ($tmp90->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp90 = $tmp90->next;
    }
    $fn92 $tmp91 = $tmp90->methods[0];
    panda$core$Int64 $tmp93 = $tmp91(((panda$collections$CollectionView*) self->contents));
    $returnValue89 = $tmp93;
    return $returnValue89;
}
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* self) {
    panda$core$String* $returnValue95;
    panda$core$String* $tmp96;
    panda$core$String* $tmp97;
    panda$core$String* $tmp98 = panda$collections$Array$convert$R$panda$core$String(self->contents);
    $tmp97 = $tmp98;
    $tmp96 = $tmp97;
    $returnValue95 = $tmp96;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
    return $returnValue95;
}
void panda$collections$Stack$init(panda$collections$Stack* self) {
    panda$collections$Array* $tmp100;
    panda$collections$Array* $tmp101;
    self->contents = NULL;
    panda$collections$Array* $tmp102 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp102);
    $tmp101 = $tmp102;
    $tmp100 = $tmp101;
    self->contents = $tmp100;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
}
void panda$collections$Stack$cleanup(panda$collections$Stack* self) {
    int $tmp105;
    {
    }
    $tmp105 = -1;
    goto $l103;
    $l103:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp105) {
        case -1: goto $l106;
    }
    $l106:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents));
}

