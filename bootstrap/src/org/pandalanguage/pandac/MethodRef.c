#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ListView.h"
#include "panda/collections/HashMap.h"
#include "panda/core/SpecializedRange.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/List.h"
#include "panda/core/Bit.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"


org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type} };

typedef panda$core$Int64 (*$fn6)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn10)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn35)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn40)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn42)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn54)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn56)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef org$pandalanguage$pandac$Type* (*$fn60)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef org$pandalanguage$pandac$Type* (*$fn62)(org$pandalanguage$pandac$Type*, panda$collections$HashMap*);
typedef panda$core$String* (*$fn68)(org$pandalanguage$pandac$MethodDecl*);

static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4D\x65\x74\x68\x6F\x64\x52\x65\x66\x28", 10, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$MethodDecl* p_value, panda$collections$ListView* p_types) {
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp3;
    panda$collections$HashMap* $tmp1 = (panda$collections$HashMap*) malloc(56);
    $tmp1->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp1->refCount.value = 1;
    panda$collections$HashMap$init($tmp1);
    self->typeMap = $tmp1;
    self->value = p_value;
    self->types = p_types;
    ITable* $tmp4 = ((panda$collections$CollectionView*) p_value->owner->parameters)->$class->itable;
    while ($tmp4->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4 = $tmp4->next;
    }
    $fn6 $tmp5 = $tmp4->methods[0];
    panda$core$Int64 $tmp7 = $tmp5(((panda$collections$CollectionView*) p_value->owner->parameters));
    ITable* $tmp8 = ((panda$collections$CollectionView*) p_types)->$class->itable;
    while ($tmp8->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp8 = $tmp8->next;
    }
    $fn10 $tmp9 = $tmp8->methods[0];
    panda$core$Int64 $tmp11 = $tmp9(((panda$collections$CollectionView*) p_types));
    panda$core$Int64 $tmp12 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp7, $tmp11);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3, ((panda$core$Int64) { 0 }), $tmp12, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp14 = $tmp3.start.value;
    panda$core$Int64 i13 = { $tmp14 };
    int64_t $tmp16 = $tmp3.end.value;
    int64_t $tmp17 = $tmp3.step.value;
    bool $tmp18 = $tmp3.inclusive.value;
    bool $tmp25 = $tmp17 > 0;
    if ($tmp25) goto $l23; else goto $l24;
    $l23:;
    if ($tmp18) goto $l26; else goto $l27;
    $l26:;
    if ($tmp14 <= $tmp16) goto $l19; else goto $l21;
    $l27:;
    if ($tmp14 < $tmp16) goto $l19; else goto $l21;
    $l24:;
    if ($tmp18) goto $l28; else goto $l29;
    $l28:;
    if ($tmp14 >= $tmp16) goto $l19; else goto $l21;
    $l29:;
    if ($tmp14 > $tmp16) goto $l19; else goto $l21;
    $l19:;
    {
        panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_value->owner)->name, &$s31);
        ITable* $tmp33 = ((panda$collections$ListView*) p_value->owner->parameters)->$class->itable;
        while ($tmp33->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp33 = $tmp33->next;
        }
        $fn35 $tmp34 = $tmp33->methods[0];
        panda$core$Object* $tmp36 = $tmp34(((panda$collections$ListView*) p_value->owner->parameters), i13);
        panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp32, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp36))->name);
        ITable* $tmp38 = p_types->$class->itable;
        while ($tmp38->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp38 = $tmp38->next;
        }
        $fn40 $tmp39 = $tmp38->methods[0];
        panda$core$Object* $tmp41 = $tmp39(p_types, i13);
        (($fn42) self->typeMap->$class->vtable[5])(self->typeMap, ((panda$core$Object*) ((panda$collections$Key*) $tmp37)), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp41)));
    }
    $l22:;
    if ($tmp25) goto $l44; else goto $l45;
    $l44:;
    int64_t $tmp46 = $tmp16 - i13.value;
    if ($tmp18) goto $l47; else goto $l48;
    $l47:;
    if ($tmp46 >= $tmp17) goto $l43; else goto $l21;
    $l48:;
    if ($tmp46 > $tmp17) goto $l43; else goto $l21;
    $l45:;
    int64_t $tmp50 = i13.value - $tmp16;
    if ($tmp18) goto $l51; else goto $l52;
    $l51:;
    if ($tmp50 >= -$tmp17) goto $l43; else goto $l21;
    $l52:;
    if ($tmp50 > -$tmp17) goto $l43; else goto $l21;
    $l43:;
    i13.value += $tmp17;
    goto $l19;
    $l21:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp55 = (($fn54) self->value->owner->$class->vtable[4])(self->value->owner);
    org$pandalanguage$pandac$Type* $tmp57 = (($fn56) $tmp55->$class->vtable[14])($tmp55, self->typeMap);
    return $tmp57;
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $tmp58 = panda$collections$Array$get_count$R$panda$core$Int64(self->value->parameters);
    return $tmp58;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    panda$core$Object* $tmp59 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->value->parameters, p_index);
    org$pandalanguage$pandac$Type* $tmp61 = (($fn60) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp59)->type->$class->vtable[14])(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp59)->type, self->typeMap);
    return $tmp61;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp63 = (($fn62) self->value->returnType->$class->vtable[14])(self->value->returnType, self->typeMap);
    return $tmp63;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp64 = (org$pandalanguage$pandac$Type*) malloc(64);
    $tmp64->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp64->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp64, &$s66, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    return $tmp64;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $tmp69 = (($fn68) self->value->$class->vtable[6])(self->value);
    panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s67, $tmp69);
    panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp70, &$s71);
    panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp72, ((org$pandalanguage$pandac$Symbol*) self->value->owner)->name);
    panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp73, &$s74);
    panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp75, ((panda$core$Object*) self->types));
    panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp76, &$s77);
    return $tmp78;
}

