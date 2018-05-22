#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ListView.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Weak.h"
#include "panda/core/Method.h"
#include "panda/collections/List.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, org$pandalanguage$pandac$MethodRef$cleanup, org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type} };

typedef panda$core$Object* (*$fn11)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn15)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn19)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn38)(panda$core$Weak*);
typedef panda$core$Object* (*$fn44)(panda$core$Weak*);
typedef panda$core$Object* (*$fn48)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn54)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn67)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$MethodDecl* p_value, panda$collections$ListView* p_types) {
    panda$collections$HashMap* $tmp2;
    panda$collections$HashMap* $tmp3;
    org$pandalanguage$pandac$MethodDecl* $tmp5;
    org$pandalanguage$pandac$MethodDecl* $tmp6;
    panda$collections$ListView* $tmp7;
    panda$collections$ListView* $tmp8;
    panda$core$Range$LTpanda$core$Int64$GT $tmp9;
    panda$core$Object* $tmp10;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$Object* $tmp37;
    panda$core$Object* $tmp42;
    panda$core$Object* $tmp43;
    panda$core$Object* $tmp51;
    self->value = NULL;
    self->types = NULL;
    self->typeMap = NULL;
    panda$collections$HashMap* $tmp4 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->typeMap = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    PANDA_ASSERT(p_value->resolved.value);
    {
        $tmp5 = self->value;
        $tmp6 = p_value;
        self->value = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    }
    {
        $tmp7 = self->types;
        $tmp8 = p_types;
        self->types = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    }
    panda$core$Object* $tmp12 = (($fn11) p_value->owner->$class->vtable[2])(p_value->owner);
    $tmp10 = $tmp12;
    ITable* $tmp13 = ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp10)->parameters)->$class->itable;
    while ($tmp13->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp13 = $tmp13->next;
    }
    $fn15 $tmp14 = $tmp13->methods[0];
    panda$core$Int64 $tmp16 = $tmp14(((panda$collections$CollectionView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp10)->parameters));
    ITable* $tmp17 = ((panda$collections$CollectionView*) p_types)->$class->itable;
    while ($tmp17->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp17 = $tmp17->next;
    }
    $fn19 $tmp18 = $tmp17->methods[0];
    panda$core$Int64 $tmp20 = $tmp18(((panda$collections$CollectionView*) p_types));
    panda$core$Int64 $tmp21 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp16, $tmp20);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp9, ((panda$core$Int64) { 0 }), $tmp21, ((panda$core$Bit) { false }));
    int64_t $tmp23 = $tmp9.min.value;
    panda$core$Int64 i22 = { $tmp23 };
    int64_t $tmp25 = $tmp9.max.value;
    bool $tmp26 = $tmp9.inclusive.value;
    if ($tmp26) goto $l33; else goto $l34;
    $l33:;
    if ($tmp23 <= $tmp25) goto $l27; else goto $l29;
    $l34:;
    if ($tmp23 < $tmp25) goto $l27; else goto $l29;
    $l27:;
    {
        panda$core$Object* $tmp39 = (($fn38) p_value->owner->$class->vtable[2])(p_value->owner);
        $tmp37 = $tmp39;
        panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp37)->name, &$s40);
        $tmp36 = $tmp41;
        panda$core$Object* $tmp45 = (($fn44) p_value->owner->$class->vtable[2])(p_value->owner);
        $tmp43 = $tmp45;
        ITable* $tmp46 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp43)->parameters)->$class->itable;
        while ($tmp46->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp46 = $tmp46->next;
        }
        $fn48 $tmp47 = $tmp46->methods[0];
        panda$core$Object* $tmp49 = $tmp47(((panda$collections$ListView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp43)->parameters), i22);
        $tmp42 = $tmp49;
        panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp36, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp42))->name);
        $tmp35 = $tmp50;
        ITable* $tmp52 = p_types->$class->itable;
        while ($tmp52->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp52 = $tmp52->next;
        }
        $fn54 $tmp53 = $tmp52->methods[0];
        panda$core$Object* $tmp55 = $tmp53(p_types, i22);
        $tmp51 = $tmp55;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->typeMap, ((panda$collections$Key*) $tmp35), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp51)));
        panda$core$Panda$unref$panda$core$Object($tmp51);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object($tmp42);
        panda$core$Panda$unref$panda$core$Object($tmp43);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object($tmp37);
    }
    $l30:;
    int64_t $tmp57 = $tmp25 - i22.value;
    if ($tmp26) goto $l58; else goto $l59;
    $l58:;
    if ((uint64_t) $tmp57 >= 1) goto $l56; else goto $l29;
    $l59:;
    if ((uint64_t) $tmp57 > 1) goto $l56; else goto $l29;
    $l56:;
    i22.value += 1;
    goto $l27;
    $l29:;
    panda$core$Panda$unref$panda$core$Object($tmp10);
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue62;
    org$pandalanguage$pandac$Type* $tmp63;
    org$pandalanguage$pandac$Type* $tmp64;
    org$pandalanguage$pandac$Type* $tmp65;
    panda$core$Object* $tmp66;
    panda$core$Object* $tmp68 = (($fn67) self->value->owner->$class->vtable[2])(self->value->owner);
    $tmp66 = $tmp68;
    org$pandalanguage$pandac$Type* $tmp69 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp66));
    $tmp65 = $tmp69;
    org$pandalanguage$pandac$Type* $tmp70 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp65, self->typeMap);
    $tmp64 = $tmp70;
    $tmp63 = $tmp64;
    $returnValue62 = $tmp63;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
    panda$core$Panda$unref$panda$core$Object($tmp66);
    return $returnValue62;
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $returnValue72;
    panda$core$Int64 $tmp73 = panda$collections$Array$get_count$R$panda$core$Int64(self->value->parameters);
    $returnValue72 = $tmp73;
    return $returnValue72;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    org$pandalanguage$pandac$Type* $returnValue75;
    org$pandalanguage$pandac$Type* $tmp76;
    org$pandalanguage$pandac$Type* $tmp77;
    panda$core$Object* $tmp78;
    panda$core$Object* $tmp79 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->value->parameters, p_index);
    $tmp78 = $tmp79;
    org$pandalanguage$pandac$Type* $tmp80 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp78)->type, self->typeMap);
    $tmp77 = $tmp80;
    $tmp76 = $tmp77;
    $returnValue75 = $tmp76;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp76));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
    panda$core$Panda$unref$panda$core$Object($tmp78);
    return $returnValue75;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue82;
    org$pandalanguage$pandac$Type* $tmp83;
    org$pandalanguage$pandac$Type* $tmp84;
    org$pandalanguage$pandac$Type* $tmp85 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(self->value->returnType, self->typeMap);
    $tmp84 = $tmp85;
    $tmp83 = $tmp84;
    $returnValue82 = $tmp83;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    return $returnValue82;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue87;
    org$pandalanguage$pandac$Type* $tmp88;
    org$pandalanguage$pandac$Type* $tmp89;
    org$pandalanguage$pandac$Type* $tmp90;
    org$pandalanguage$pandac$Type* $tmp91 = org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(self->value);
    $tmp90 = $tmp91;
    org$pandalanguage$pandac$Type* $tmp92 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp90, self->typeMap);
    $tmp89 = $tmp92;
    $tmp88 = $tmp89;
    $returnValue87 = $tmp88;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
    return $returnValue87;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $returnValue94;
    panda$core$String* $tmp95;
    panda$core$String* $tmp96;
    panda$core$String* $tmp97;
    panda$core$String* $tmp98;
    panda$core$String* $tmp99;
    panda$core$String* $tmp101;
    panda$core$String* $tmp102 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(self->value);
    $tmp101 = $tmp102;
    panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s100, $tmp101);
    $tmp99 = $tmp103;
    panda$core$String* $tmp105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp99, &$s104);
    $tmp98 = $tmp105;
    panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp98, ((panda$core$Object*) self->types));
    $tmp97 = $tmp106;
    panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp97, &$s107);
    $tmp96 = $tmp108;
    $tmp95 = $tmp96;
    $returnValue94 = $tmp95;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
    return $returnValue94;
}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self) {
    int $tmp112;
    {
    }
    $tmp112 = -1;
    goto $l110;
    $l110:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp112) {
        case -1: goto $l113;
    }
    $l113:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->types));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->typeMap));
}

