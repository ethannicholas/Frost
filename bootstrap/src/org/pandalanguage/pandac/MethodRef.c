#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ListView.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Bit.h"
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
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, org$pandalanguage$pandac$MethodRef$cleanup, org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type} };

typedef panda$core$Int64 (*$fn7)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn11)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn31)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn36)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$MethodDecl* p_value, panda$collections$ListView* p_types) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp4;
    panda$collections$HashMap* $tmp2 = (panda$collections$HashMap*) pandaZAlloc(56);
    $tmp2->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp2->refCount.value = 1;
    panda$collections$HashMap$init($tmp2);
    self->typeMap = $tmp2;
    PANDA_ASSERT(p_value->resolved.value);
    {
        self->value = p_value;
    }
    {
        self->types = p_types;
    }
    ITable* $tmp5 = ((panda$collections$CollectionView*) p_value->owner->parameters)->$class->itable;
    while ($tmp5->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp5 = $tmp5->next;
    }
    $fn7 $tmp6 = $tmp5->methods[0];
    panda$core$Int64 $tmp8 = $tmp6(((panda$collections$CollectionView*) p_value->owner->parameters));
    ITable* $tmp9 = ((panda$collections$CollectionView*) p_types)->$class->itable;
    while ($tmp9->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp9 = $tmp9->next;
    }
    $fn11 $tmp10 = $tmp9->methods[0];
    panda$core$Int64 $tmp12 = $tmp10(((panda$collections$CollectionView*) p_types));
    panda$core$Int64 $tmp13 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp8, $tmp12);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4, ((panda$core$Int64) { 0 }), $tmp13, ((panda$core$Bit) { false }));
    int64_t $tmp15 = $tmp4.min.value;
    panda$core$Int64 i14 = { $tmp15 };
    int64_t $tmp17 = $tmp4.max.value;
    bool $tmp18 = $tmp4.inclusive.value;
    if ($tmp18) goto $l25; else goto $l26;
    $l25:;
    if ($tmp15 <= $tmp17) goto $l19; else goto $l21;
    $l26:;
    if ($tmp15 < $tmp17) goto $l19; else goto $l21;
    $l19:;
    {
        panda$core$String* $tmp28 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_value->owner)->name, &$s27);
        ITable* $tmp29 = ((panda$collections$ListView*) p_value->owner->parameters)->$class->itable;
        while ($tmp29->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp29 = $tmp29->next;
        }
        $fn31 $tmp30 = $tmp29->methods[0];
        panda$core$Object* $tmp32 = $tmp30(((panda$collections$ListView*) p_value->owner->parameters), i14);
        panda$core$String* $tmp33 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp28, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp32))->name);
        ITable* $tmp34 = p_types->$class->itable;
        while ($tmp34->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp34 = $tmp34->next;
        }
        $fn36 $tmp35 = $tmp34->methods[0];
        panda$core$Object* $tmp37 = $tmp35(p_types, i14);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->typeMap, ((panda$collections$Key*) $tmp33), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp37)));
    }
    $l22:;
    int64_t $tmp39 = $tmp17 - i14.value;
    if ($tmp18) goto $l40; else goto $l41;
    $l40:;
    if ((uint64_t) $tmp39 >= 1) goto $l38; else goto $l21;
    $l41:;
    if ((uint64_t) $tmp39 > 1) goto $l38; else goto $l21;
    $l38:;
    i14.value += 1;
    goto $l19;
    $l21:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp44 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(self->value->owner);
    org$pandalanguage$pandac$Type* $tmp45 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp44, self->typeMap);
    return $tmp45;
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $tmp46 = panda$collections$Array$get_count$R$panda$core$Int64(self->value->parameters);
    return $tmp46;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    panda$core$Object* $tmp47 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->value->parameters, p_index);
    org$pandalanguage$pandac$Type* $tmp48 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp47)->type, self->typeMap);
    return $tmp48;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $tmp49 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(self->value->returnType, self->typeMap);
    return $tmp49;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Position $tmp53;
    org$pandalanguage$pandac$Type* $tmp50 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp50->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp50->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp53);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp50, &$s52, ((panda$core$Int64) { 16 }), $tmp53, ((panda$core$Bit) { true }));
    return $tmp50;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $tmp55 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(self->value);
    panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s54, $tmp55);
    panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp56, &$s57);
    panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp58, ((panda$core$Object*) self->types));
    panda$core$String* $tmp61 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp59, &$s60);
    return $tmp61;
}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->types));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->typeMap));
}

