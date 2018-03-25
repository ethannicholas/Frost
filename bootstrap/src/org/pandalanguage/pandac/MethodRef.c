#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
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
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Position.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, org$pandalanguage$pandac$MethodRef$cleanup, org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type} };

typedef panda$core$Int64 (*$fn6)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn10)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn30)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn35)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$MethodDecl* p_value, panda$collections$ListView* p_types) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3;
    panda$collections$HashMap* $tmp2 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp2);
    self->typeMap = $tmp2;
    PANDA_ASSERT(p_value->resolved.value);
    {
        self->value = p_value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
    }
    {
        self->types = p_types;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->types));
    }
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
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3, ((panda$core$Int64) { 0 }), $tmp12, ((panda$core$Bit) { false }));
    int64_t $tmp14 = $tmp3.min.value;
    panda$core$Int64 i13 = { $tmp14 };
    int64_t $tmp16 = $tmp3.max.value;
    bool $tmp17 = $tmp3.inclusive.value;
    if ($tmp17) goto $l24; else goto $l25;
    $l24:;
    if ($tmp14 <= $tmp16) goto $l18; else goto $l20;
    $l25:;
    if ($tmp14 < $tmp16) goto $l18; else goto $l20;
    $l18:;
    {
        panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_value->owner)->name, &$s26);
        ITable* $tmp28 = ((panda$collections$ListView*) p_value->owner->parameters)->$class->itable;
        while ($tmp28->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp28 = $tmp28->next;
        }
        $fn30 $tmp29 = $tmp28->methods[0];
        panda$core$Object* $tmp31 = $tmp29(((panda$collections$ListView*) p_value->owner->parameters), i13);
        panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp31))->name);
        ITable* $tmp33 = p_types->$class->itable;
        while ($tmp33->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp33 = $tmp33->next;
        }
        $fn35 $tmp34 = $tmp33->methods[0];
        panda$core$Object* $tmp36 = $tmp34(p_types, i13);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->typeMap, ((panda$collections$Key*) $tmp32), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp36)));
    }
    $l21:;
    int64_t $tmp38 = $tmp16 - i13.value;
    if ($tmp17) goto $l39; else goto $l40;
    $l39:;
    if ((uint64_t) $tmp38 >= 1) goto $l37; else goto $l20;
    $l40:;
    if ((uint64_t) $tmp38 > 1) goto $l37; else goto $l20;
    $l37:;
    i13.value += 1;
    goto $l18;
    $l20:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp43 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(self->value->owner);
    org$pandalanguage$pandac$Type* $tmp44 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp43, self->typeMap);
    return $tmp44;
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $tmp45 = panda$collections$Array$get_count$R$panda$core$Int64(self->value->parameters);
    return $tmp45;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    panda$core$Object* $tmp46 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->value->parameters, p_index);
    org$pandalanguage$pandac$Type* $tmp47 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp46)->type, self->typeMap);
    return $tmp47;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp48 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(self->value->returnType, self->typeMap);
    return $tmp48;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Position $tmp51;
    org$pandalanguage$pandac$Type* $tmp49 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp51);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp49, &$s50, ((panda$core$Int64) { 16 }), $tmp51, ((panda$core$Bit) { true }));
    return $tmp49;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $tmp53 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(self->value);
    panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s52, $tmp53);
    panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp54, &$s55);
    panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp56, ((panda$core$Object*) self->types));
    panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s58);
    return $tmp59;
}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->types));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->typeMap));
}

