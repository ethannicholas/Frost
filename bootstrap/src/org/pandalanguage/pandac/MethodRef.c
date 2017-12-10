#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ListView.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Bit.h"
#include "panda/core/SimpleRange.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/List.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Position.h"


org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type} };

typedef panda$core$Int64 (*$fn6)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn10)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn34)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn39)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4D\x65\x74\x68\x6F\x64\x52\x65\x66\x28", 10, 1 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$MethodDecl* p_value, panda$collections$ListView* p_types) {
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp3;
    panda$collections$HashMap* $tmp1 = (panda$collections$HashMap*) malloc(56);
    $tmp1->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp1->refCount.value = 1;
    panda$collections$HashMap$init($tmp1);
    self->typeMap = $tmp1;
    PANDA_ASSERT(p_value->resolved.value);
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
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3, ((panda$core$Int64) { 0 }), $tmp12, ((panda$core$Bit) { false }));
    int64_t $tmp14 = $tmp3.min.value;
    panda$core$Int64 i13 = { $tmp14 };
    int64_t $tmp16 = $tmp3.max.value;
    bool $tmp17 = $tmp3.inclusive.value;
    bool $tmp24 = 1 > 0;
    if ($tmp24) goto $l22; else goto $l23;
    $l22:;
    if ($tmp17) goto $l25; else goto $l26;
    $l25:;
    if ($tmp14 <= $tmp16) goto $l18; else goto $l20;
    $l26:;
    if ($tmp14 < $tmp16) goto $l18; else goto $l20;
    $l23:;
    if ($tmp17) goto $l27; else goto $l28;
    $l27:;
    if ($tmp14 >= $tmp16) goto $l18; else goto $l20;
    $l28:;
    if ($tmp14 > $tmp16) goto $l18; else goto $l20;
    $l18:;
    {
        panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_value->owner)->name, &$s30);
        ITable* $tmp32 = ((panda$collections$ListView*) p_value->owner->parameters)->$class->itable;
        while ($tmp32->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp32 = $tmp32->next;
        }
        $fn34 $tmp33 = $tmp32->methods[0];
        panda$core$Object* $tmp35 = $tmp33(((panda$collections$ListView*) p_value->owner->parameters), i13);
        panda$core$String* $tmp36 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp31, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp35))->name);
        ITable* $tmp37 = p_types->$class->itable;
        while ($tmp37->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp37 = $tmp37->next;
        }
        $fn39 $tmp38 = $tmp37->methods[0];
        panda$core$Object* $tmp40 = $tmp38(p_types, i13);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->typeMap, ((panda$collections$Key*) $tmp36), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp40)));
    }
    $l21:;
    if ($tmp24) goto $l42; else goto $l43;
    $l42:;
    int64_t $tmp44 = $tmp16 - i13.value;
    if ($tmp17) goto $l45; else goto $l46;
    $l45:;
    if ($tmp44 >= 1) goto $l41; else goto $l20;
    $l46:;
    if ($tmp44 > 1) goto $l41; else goto $l20;
    $l43:;
    int64_t $tmp48 = i13.value - $tmp16;
    if ($tmp17) goto $l49; else goto $l50;
    $l49:;
    if ($tmp48 >= -1) goto $l41; else goto $l20;
    $l50:;
    if ($tmp48 > -1) goto $l41; else goto $l20;
    $l41:;
    i13.value += 1;
    goto $l18;
    $l20:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp52 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(self->value->owner);
    org$pandalanguage$pandac$Type* $tmp53 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp52, self->typeMap);
    return $tmp53;
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $tmp54 = panda$collections$Array$get_count$R$panda$core$Int64(self->value->parameters);
    return $tmp54;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    panda$core$Object* $tmp55 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->value->parameters, p_index);
    org$pandalanguage$pandac$Type* $tmp56 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp55)->type, self->typeMap);
    return $tmp56;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp57 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(self->value->returnType, self->typeMap);
    return $tmp57;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Position $tmp61;
    org$pandalanguage$pandac$Type* $tmp58 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp58->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp58->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp61);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp58, &$s60, ((panda$core$Int64) { 16 }), $tmp61, ((panda$core$Bit) { true }));
    return $tmp58;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $tmp63 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self->value);
    panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s62, $tmp63);
    panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s65);
    panda$core$String* $tmp67 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp66, ((org$pandalanguage$pandac$Symbol*) self->value->owner)->name);
    panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp67, &$s68);
    panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp69, ((panda$core$Object*) self->types));
    panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp70, &$s71);
    return $tmp72;
}

