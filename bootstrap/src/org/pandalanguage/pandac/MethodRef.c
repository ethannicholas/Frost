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

typedef panda$core$Int64 (*$fn12)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn16)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn39)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn45)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$MethodDecl* p_value, panda$collections$ListView* p_types) {
    panda$collections$HashMap* $tmp2;
    panda$collections$HashMap* $tmp3;
    org$pandalanguage$pandac$MethodDecl* $tmp5;
    org$pandalanguage$pandac$MethodDecl* $tmp6;
    panda$collections$ListView* $tmp7;
    panda$collections$ListView* $tmp8;
    panda$core$Range$LTpanda$core$Int64$GT $tmp9;
    panda$core$String* $tmp32;
    panda$core$String* $tmp33;
    panda$core$Object* $tmp36;
    panda$core$Object* $tmp42;
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
    ITable* $tmp10 = ((panda$collections$CollectionView*) p_value->owner->parameters)->$class->itable;
    while ($tmp10->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp10 = $tmp10->next;
    }
    $fn12 $tmp11 = $tmp10->methods[0];
    panda$core$Int64 $tmp13 = $tmp11(((panda$collections$CollectionView*) p_value->owner->parameters));
    ITable* $tmp14 = ((panda$collections$CollectionView*) p_types)->$class->itable;
    while ($tmp14->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp14 = $tmp14->next;
    }
    $fn16 $tmp15 = $tmp14->methods[0];
    panda$core$Int64 $tmp17 = $tmp15(((panda$collections$CollectionView*) p_types));
    panda$core$Int64 $tmp18 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp13, $tmp17);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp9, ((panda$core$Int64) { 0 }), $tmp18, ((panda$core$Bit) { false }));
    int64_t $tmp20 = $tmp9.min.value;
    panda$core$Int64 i19 = { $tmp20 };
    int64_t $tmp22 = $tmp9.max.value;
    bool $tmp23 = $tmp9.inclusive.value;
    if ($tmp23) goto $l30; else goto $l31;
    $l30:;
    if ($tmp20 <= $tmp22) goto $l24; else goto $l26;
    $l31:;
    if ($tmp20 < $tmp22) goto $l24; else goto $l26;
    $l24:;
    {
        panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_value->owner)->name, &$s34);
        $tmp33 = $tmp35;
        ITable* $tmp37 = ((panda$collections$ListView*) p_value->owner->parameters)->$class->itable;
        while ($tmp37->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp37 = $tmp37->next;
        }
        $fn39 $tmp38 = $tmp37->methods[0];
        panda$core$Object* $tmp40 = $tmp38(((panda$collections$ListView*) p_value->owner->parameters), i19);
        $tmp36 = $tmp40;
        panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp33, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp36))->name);
        $tmp32 = $tmp41;
        ITable* $tmp43 = p_types->$class->itable;
        while ($tmp43->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp43 = $tmp43->next;
        }
        $fn45 $tmp44 = $tmp43->methods[0];
        panda$core$Object* $tmp46 = $tmp44(p_types, i19);
        $tmp42 = $tmp46;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->typeMap, ((panda$collections$Key*) $tmp32), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp42)));
        panda$core$Panda$unref$panda$core$Object($tmp42);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object($tmp36);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
    }
    $l27:;
    int64_t $tmp48 = $tmp22 - i19.value;
    if ($tmp23) goto $l49; else goto $l50;
    $l49:;
    if ((uint64_t) $tmp48 >= 1) goto $l47; else goto $l26;
    $l50:;
    if ((uint64_t) $tmp48 > 1) goto $l47; else goto $l26;
    $l47:;
    i19.value += 1;
    goto $l24;
    $l26:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $finallyReturn52;
    org$pandalanguage$pandac$Type* $tmp54;
    org$pandalanguage$pandac$Type* $tmp55;
    org$pandalanguage$pandac$Type* $tmp56;
    org$pandalanguage$pandac$Type* $tmp57 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(self->value->owner);
    $tmp56 = $tmp57;
    org$pandalanguage$pandac$Type* $tmp58 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp56, self->typeMap);
    $tmp55 = $tmp58;
    $tmp54 = $tmp55;
    $finallyReturn52 = $tmp54;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp54));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
    return $finallyReturn52;
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $finallyReturn59;
    panda$core$Int64 $tmp61 = panda$collections$Array$get_count$R$panda$core$Int64(self->value->parameters);
    $finallyReturn59 = $tmp61;
    return $finallyReturn59;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    org$pandalanguage$pandac$Type* $finallyReturn62;
    org$pandalanguage$pandac$Type* $tmp64;
    org$pandalanguage$pandac$Type* $tmp65;
    panda$core$Object* $tmp66;
    panda$core$Object* $tmp67 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->value->parameters, p_index);
    $tmp66 = $tmp67;
    org$pandalanguage$pandac$Type* $tmp68 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp66)->type, self->typeMap);
    $tmp65 = $tmp68;
    $tmp64 = $tmp65;
    $finallyReturn62 = $tmp64;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
    panda$core$Panda$unref$panda$core$Object($tmp66);
    return $finallyReturn62;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $finallyReturn69;
    org$pandalanguage$pandac$Type* $tmp71;
    org$pandalanguage$pandac$Type* $tmp72;
    org$pandalanguage$pandac$Type* $tmp73 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(self->value->returnType, self->typeMap);
    $tmp72 = $tmp73;
    $tmp71 = $tmp72;
    $finallyReturn69 = $tmp71;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
    return $finallyReturn69;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $finallyReturn74;
    org$pandalanguage$pandac$Type* $tmp76;
    org$pandalanguage$pandac$Type* $tmp77;
    org$pandalanguage$pandac$Position $tmp80;
    org$pandalanguage$pandac$Type* $tmp78 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp80);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp78, &$s79, ((panda$core$Int64) { 16 }), $tmp80, ((panda$core$Bit) { true }));
    $tmp77 = $tmp78;
    $tmp76 = $tmp77;
    $finallyReturn74 = $tmp76;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp76));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
    return $finallyReturn74;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $finallyReturn81;
    panda$core$String* $tmp83;
    panda$core$String* $tmp84;
    panda$core$String* $tmp85;
    panda$core$String* $tmp86;
    panda$core$String* $tmp87;
    panda$core$String* $tmp89;
    panda$core$String* $tmp90 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(self->value);
    $tmp89 = $tmp90;
    panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s88, $tmp89);
    $tmp87 = $tmp91;
    panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp87, &$s92);
    $tmp86 = $tmp93;
    panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp86, ((panda$core$Object*) self->types));
    $tmp85 = $tmp94;
    panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp85, &$s95);
    $tmp84 = $tmp96;
    $tmp83 = $tmp84;
    $finallyReturn81 = $tmp83;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
    return $finallyReturn81;
}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self) {
    int $tmp100;
    {
    }
    $tmp100 = -1;
    goto $l98;
    $l98:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp100) {
        case -1: goto $l101;
    }
    $l101:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->types));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->typeMap));
}

