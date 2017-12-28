#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ListView.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/List.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Position.h"


org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type} };

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn12)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn32)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn37)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$MethodDecl* p_value, panda$collections$ListView* p_types) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5;
    panda$collections$HashMap* $tmp1 = (panda$collections$HashMap*) pandaAlloc(56);
    $tmp1->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp1->refCount.value = 1;
    panda$collections$HashMap$init($tmp1);
    self->typeMap = $tmp1;
    PANDA_ASSERT(p_value->resolved.value);
    {
        panda$core$Object* $tmp3 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_value));
        self->value = ((org$pandalanguage$pandac$MethodDecl*) $tmp3);
    }
    {
        panda$core$Object* $tmp4 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_types));
        self->types = ((panda$collections$ListView*) $tmp4);
    }
    ITable* $tmp6 = ((panda$collections$CollectionView*) p_value->owner->parameters)->$class->itable;
    while ($tmp6->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp6 = $tmp6->next;
    }
    $fn8 $tmp7 = $tmp6->methods[0];
    panda$core$Int64 $tmp9 = $tmp7(((panda$collections$CollectionView*) p_value->owner->parameters));
    ITable* $tmp10 = ((panda$collections$CollectionView*) p_types)->$class->itable;
    while ($tmp10->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp10 = $tmp10->next;
    }
    $fn12 $tmp11 = $tmp10->methods[0];
    panda$core$Int64 $tmp13 = $tmp11(((panda$collections$CollectionView*) p_types));
    panda$core$Int64 $tmp14 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp9, $tmp13);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), $tmp14, ((panda$core$Bit) { false }));
    int64_t $tmp16 = $tmp5.min.value;
    panda$core$Int64 i15 = { $tmp16 };
    int64_t $tmp18 = $tmp5.max.value;
    bool $tmp19 = $tmp5.inclusive.value;
    if ($tmp19) goto $l26; else goto $l27;
    $l26:;
    if ($tmp16 <= $tmp18) goto $l20; else goto $l22;
    $l27:;
    if ($tmp16 < $tmp18) goto $l20; else goto $l22;
    $l20:;
    {
        panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_value->owner)->name, &$s28);
        ITable* $tmp30 = ((panda$collections$ListView*) p_value->owner->parameters)->$class->itable;
        while ($tmp30->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp30 = $tmp30->next;
        }
        $fn32 $tmp31 = $tmp30->methods[0];
        panda$core$Object* $tmp33 = $tmp31(((panda$collections$ListView*) p_value->owner->parameters), i15);
        panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp29, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp33))->name);
        ITable* $tmp35 = p_types->$class->itable;
        while ($tmp35->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp35 = $tmp35->next;
        }
        $fn37 $tmp36 = $tmp35->methods[0];
        panda$core$Object* $tmp38 = $tmp36(p_types, i15);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->typeMap, ((panda$collections$Key*) $tmp34), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp38)));
    }
    $l23:;
    int64_t $tmp40 = $tmp18 - i15.value;
    if ($tmp19) goto $l41; else goto $l42;
    $l41:;
    if ((uint64_t) $tmp40 >= 1) goto $l39; else goto $l22;
    $l42:;
    if ((uint64_t) $tmp40 > 1) goto $l39; else goto $l22;
    $l39:;
    i15.value += 1;
    goto $l20;
    $l22:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp45 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(self->value->owner);
    org$pandalanguage$pandac$Type* $tmp46 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp45, self->typeMap);
    return $tmp46;
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $tmp47 = panda$collections$Array$get_count$R$panda$core$Int64(self->value->parameters);
    return $tmp47;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    panda$core$Object* $tmp48 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->value->parameters, p_index);
    org$pandalanguage$pandac$Type* $tmp49 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp48)->type, self->typeMap);
    return $tmp49;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp50 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(self->value->returnType, self->typeMap);
    return $tmp50;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Position $tmp54;
    org$pandalanguage$pandac$Type* $tmp51 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp51->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp51->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp54);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp51, &$s53, ((panda$core$Int64) { 16 }), $tmp54, ((panda$core$Bit) { true }));
    return $tmp51;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $tmp56 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(self->value);
    panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s55, $tmp56);
    panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s58);
    panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp59, ((panda$core$Object*) self->types));
    panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp60, &$s61);
    return $tmp62;
}

