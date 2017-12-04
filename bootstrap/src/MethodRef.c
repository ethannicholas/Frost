#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ListView.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Range.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Bit.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/List.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/Array.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


typedef panda$core$Int64 (*$fn6)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn30)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn35)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn37)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn49)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn51)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef org$pandalanguage$pandac$Type* (*$fn55)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef org$pandalanguage$pandac$Type* (*$fn57)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef panda$core$String* (*$fn63)(org$pandalanguage$pandac$MethodDecl*);
org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type} };


static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4D\x65\x74\x68\x6F\x64\x52\x65\x66\x28", 10, 1 };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$MethodDecl* p_value, panda$collections$ListView* p_types) {
    panda$core$Range $tmp3;
    panda$collections$HashMap* $tmp1 = (panda$collections$HashMap*) malloc(56);
    $tmp1->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp1->refCount.value = 1;
    panda$collections$HashMap$init($tmp1);
    self->typeMap = $tmp1;
    self->value = p_value;
    self->types = p_types;
    ITable* $tmp4 = ((panda$collections$CollectionView*) p_types)->$class->itable;
    while ($tmp4->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4 = $tmp4->next;
    }
    $fn6 $tmp5 = $tmp4->methods[0];
    panda$core$Int64 $tmp7 = $tmp5(((panda$collections$CollectionView*) p_types));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp3, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp7)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp9 = ((panda$core$Int64$wrapper*) $tmp3.start)->value.value;
    panda$core$Int64 i8 = { $tmp9 };
    int64_t $tmp11 = ((panda$core$Int64$wrapper*) $tmp3.end)->value.value;
    int64_t $tmp12 = $tmp3.step.value;
    bool $tmp13 = $tmp3.inclusive.value;
    bool $tmp20 = $tmp12 > 0;
    if ($tmp20) goto $l18; else goto $l19;
    $l18:;
    if ($tmp13) goto $l21; else goto $l22;
    $l21:;
    if ($tmp9 <= $tmp11) goto $l14; else goto $l16;
    $l22:;
    if ($tmp9 < $tmp11) goto $l14; else goto $l16;
    $l19:;
    if ($tmp13) goto $l23; else goto $l24;
    $l23:;
    if ($tmp9 >= $tmp11) goto $l14; else goto $l16;
    $l24:;
    if ($tmp9 > $tmp11) goto $l14; else goto $l16;
    $l14:;
    {
        panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_value->owner)->name, &$s26);
        ITable* $tmp28 = ((panda$collections$ListView*) p_value->owner->parameters)->$class->itable;
        while ($tmp28->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp28 = $tmp28->next;
        }
        $fn30 $tmp29 = $tmp28->methods[0];
        panda$core$Object* $tmp31 = $tmp29(((panda$collections$ListView*) p_value->owner->parameters), i8);
        panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp31))->name);
        ITable* $tmp33 = p_types->$class->itable;
        while ($tmp33->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp33 = $tmp33->next;
        }
        $fn35 $tmp34 = $tmp33->methods[0];
        panda$core$Object* $tmp36 = $tmp34(p_types, i8);
        (($fn37) self->typeMap->$class->vtable[5])(self->typeMap, ((panda$core$Object*) ((panda$collections$Key*) $tmp32)), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp36)));
    }
    $l17:;
    if ($tmp20) goto $l39; else goto $l40;
    $l39:;
    int64_t $tmp41 = $tmp11 - i8.value;
    if ($tmp13) goto $l42; else goto $l43;
    $l42:;
    if ($tmp41 >= $tmp12) goto $l38; else goto $l16;
    $l43:;
    if ($tmp41 > $tmp12) goto $l38; else goto $l16;
    $l40:;
    int64_t $tmp45 = i8.value - $tmp11;
    if ($tmp13) goto $l46; else goto $l47;
    $l46:;
    if ($tmp45 >= -$tmp12) goto $l38; else goto $l16;
    $l47:;
    if ($tmp45 > -$tmp12) goto $l38; else goto $l16;
    $l38:;
    i8.value += $tmp12;
    goto $l14;
    $l16:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp50 = (($fn49) self->value->owner->$class->vtable[4])(self->value->owner);
    org$pandalanguage$pandac$Type* $tmp52 = (($fn51) $tmp50->$class->vtable[14])($tmp50, self->typeMap);
    return $tmp52;
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $tmp53 = panda$collections$Array$get_count$R$panda$core$Int64(self->value->parameters);
    return $tmp53;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    panda$core$Object* $tmp54 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->value->parameters, p_index);
    org$pandalanguage$pandac$Type* $tmp56 = (($fn55) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp54)->type->$class->vtable[14])(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp54)->type, self->typeMap);
    return $tmp56;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp58 = (($fn57) self->value->returnType->$class->vtable[14])(self->value->returnType, self->typeMap);
    return $tmp58;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp59 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp59->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp59->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp59, &$s61, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp59;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $tmp64 = (($fn63) self->value->$class->vtable[6])(self->value);
    panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s62, $tmp64);
    panda$core$String* $tmp67 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp65, &$s66);
    panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp67, ((org$pandalanguage$pandac$Symbol*) self->value->owner)->name);
    panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp68, &$s69);
    panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp70, ((panda$core$Object*) self->types));
    panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp71, &$s72);
    return $tmp73;
}

