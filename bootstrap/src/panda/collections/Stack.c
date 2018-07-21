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
typedef panda$core$Int64 (*$fn70)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn81)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn96)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, 4189143067940765470, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 87, -3717553610229014045, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x65\x78\x70\x65\x63\x74\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54\x29", 95, -2894691554432978803, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, 5685017306878640050, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };

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
        panda$core$Panda$ref$panda$core$Object$Q($tmp22);
        panda$core$Panda$unref$panda$core$Object$Q($tmp23);
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
        panda$core$Panda$unref$panda$core$Object$Q($tmp31);
        $tmp40 = result21;
        $returnValue39 = $tmp40;
        panda$core$Panda$ref$panda$core$Object$Q($tmp40);
        $tmp11 = 0;
        goto $l9;
        $l41:;
        return $returnValue39;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object$Q(result21);
    result21 = NULL;
    switch ($tmp11) {
        case 0: goto $l41;
    }
    $l43:;
    if (false) goto $l44; else goto $l45;
    $l45:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s46, (panda$core$Int64) { 51 }, &$s47);
    abort();
    $l44:;
    abort();
}
void panda$collections$Stack$pop$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_expected) {
    panda$core$Object* $tmp48;
    panda$core$Int64 $tmp49;
    panda$core$Object* $tmp55;
    panda$core$Int64$init$builtin_int64(&$tmp49, 0);
    panda$core$Object* $tmp50 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self, $tmp49);
    $tmp48 = $tmp50;
    panda$core$Panda$unref$panda$core$Object$Q($tmp48);
    if (((panda$core$Bit) { $tmp48 == p_expected }).value) goto $l51; else goto $l52;
    $l52:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s53, (panda$core$Int64) { 76 }, &$s54);
    abort();
    $l51:;
    panda$core$Object* $tmp56 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self);
    $tmp55 = $tmp56;
    panda$core$Panda$unref$panda$core$Object$Q($tmp55);
}
panda$core$Object* panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Int64 p_depth) {
    panda$core$Int64 $tmp58;
    panda$core$Object* $returnValue76;
    panda$core$Object* $tmp77;
    panda$core$Object* $tmp78;
    panda$core$Int64 $tmp83;
    panda$core$Int64$init$builtin_int64(&$tmp58, 0);
    panda$core$Bit $tmp59 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp58);
    bool $tmp57 = $tmp59.value;
    if (!$tmp57) goto $l60;
    panda$core$Int64 $tmp61 = panda$collections$Stack$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp62 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp61);
    $tmp57 = $tmp62.value;
    $l60:;
    panda$core$Bit $tmp63 = { $tmp57 };
    if ($tmp63.value) goto $l64; else goto $l65;
    $l65:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s66, (panda$core$Int64) { 85 }, &$s67);
    abort();
    $l64:;
    ITable* $tmp68 = ((panda$collections$CollectionView*) self->contents)->$class->itable;
    while ($tmp68->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp68 = $tmp68->next;
    }
    $fn70 $tmp69 = $tmp68->methods[0];
    panda$core$Int64 $tmp71 = $tmp69(((panda$collections$CollectionView*) self->contents));
    panda$core$Bit $tmp72 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp71, p_depth);
    if ($tmp72.value) goto $l73; else goto $l74;
    $l74:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s75, (panda$core$Int64) { 86 });
    abort();
    $l73:;
    ITable* $tmp79 = ((panda$collections$CollectionView*) self->contents)->$class->itable;
    while ($tmp79->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp79 = $tmp79->next;
    }
    $fn81 $tmp80 = $tmp79->methods[0];
    panda$core$Int64 $tmp82 = $tmp80(((panda$collections$CollectionView*) self->contents));
    panda$core$Int64$init$builtin_int64(&$tmp83, 1);
    panda$core$Int64 $tmp84 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp82, $tmp83);
    panda$core$Int64 $tmp85 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp84, p_depth);
    panda$core$Object* $tmp86 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp85);
    $tmp78 = $tmp86;
    $tmp77 = $tmp78;
    $returnValue76 = $tmp77;
    panda$core$Panda$ref$panda$core$Object$Q($tmp77);
    panda$core$Panda$unref$panda$core$Object$Q($tmp78);
    return $returnValue76;
}
void panda$collections$Stack$clear(panda$collections$Stack* self) {
    panda$collections$Array$clear(self->contents);
}
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* self) {
    panda$collections$Iterator* $returnValue88;
    panda$collections$Iterator* $tmp89;
    panda$collections$Stack$StackIterator* $tmp90;
    panda$collections$Stack$StackIterator* $tmp91 = (panda$collections$Stack$StackIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Stack$StackIterator$class);
    panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT($tmp91, self);
    $tmp90 = $tmp91;
    $tmp89 = ((panda$collections$Iterator*) $tmp90);
    $returnValue88 = $tmp89;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
    return $returnValue88;
}
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* self) {
    panda$core$Int64 $returnValue93;
    ITable* $tmp94 = ((panda$collections$CollectionView*) self->contents)->$class->itable;
    while ($tmp94->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp94 = $tmp94->next;
    }
    $fn96 $tmp95 = $tmp94->methods[0];
    panda$core$Int64 $tmp97 = $tmp95(((panda$collections$CollectionView*) self->contents));
    $returnValue93 = $tmp97;
    return $returnValue93;
}
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* self) {
    panda$core$String* $returnValue99;
    panda$core$String* $tmp100;
    panda$core$String* $tmp101;
    panda$core$String* $tmp102 = panda$collections$Array$convert$R$panda$core$String(self->contents);
    $tmp101 = $tmp102;
    $tmp100 = $tmp101;
    $returnValue99 = $tmp100;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
    return $returnValue99;
}
void panda$collections$Stack$init(panda$collections$Stack* self) {
    panda$collections$Array* $tmp104;
    panda$collections$Array* $tmp105;
    self->contents = NULL;
    panda$collections$Array* $tmp106 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp106);
    $tmp105 = $tmp106;
    $tmp104 = $tmp105;
    self->contents = $tmp104;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
}
void panda$collections$Stack$cleanup(panda$collections$Stack* self) {
    int $tmp109;
    {
    }
    $tmp109 = -1;
    goto $l107;
    $l107:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp109) {
        case -1: goto $l110;
    }
    $l110:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->contents));
}

