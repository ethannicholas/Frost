#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ListView.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Weak.h"
#include "panda/collections/List.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, org$pandalanguage$pandac$MethodRef$cleanup, org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type} };

typedef panda$core$Object* (*$fn12)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn16)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn20)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn39)(panda$core$Weak*);
typedef panda$core$Object* (*$fn45)(panda$core$Weak*);
typedef panda$core$Object* (*$fn49)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn55)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn68)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$MethodDecl* p_value, panda$collections$ListView* p_types) {
    panda$collections$HashMap* $tmp2;
    panda$collections$HashMap* $tmp3;
    org$pandalanguage$pandac$MethodDecl* $tmp6;
    org$pandalanguage$pandac$MethodDecl* $tmp7;
    panda$collections$ListView* $tmp8;
    panda$collections$ListView* $tmp9;
    panda$core$Range$LTpanda$core$Int64$GT $tmp10;
    panda$core$Object* $tmp11;
    panda$core$String* $tmp36;
    panda$core$String* $tmp37;
    panda$core$Object* $tmp38;
    panda$core$Object* $tmp43;
    panda$core$Object* $tmp44;
    panda$core$Object* $tmp52;
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
    panda$core$Bit $tmp5 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_value->resolved.$rawValue, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5.value);
    {
        $tmp6 = self->value;
        $tmp7 = p_value;
        self->value = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    }
    {
        $tmp8 = self->types;
        $tmp9 = p_types;
        self->types = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
    panda$core$Object* $tmp13 = (($fn12) p_value->owner->$class->vtable[2])(p_value->owner);
    $tmp11 = $tmp13;
    ITable* $tmp14 = ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp11)->parameters)->$class->itable;
    while ($tmp14->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp14 = $tmp14->next;
    }
    $fn16 $tmp15 = $tmp14->methods[0];
    panda$core$Int64 $tmp17 = $tmp15(((panda$collections$CollectionView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp11)->parameters));
    ITable* $tmp18 = ((panda$collections$CollectionView*) p_types)->$class->itable;
    while ($tmp18->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp18 = $tmp18->next;
    }
    $fn20 $tmp19 = $tmp18->methods[0];
    panda$core$Int64 $tmp21 = $tmp19(((panda$collections$CollectionView*) p_types));
    panda$core$Int64 $tmp22 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp17, $tmp21);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp10, ((panda$core$Int64) { 0 }), $tmp22, ((panda$core$Bit) { false }));
    int64_t $tmp24 = $tmp10.min.value;
    panda$core$Int64 i23 = { $tmp24 };
    int64_t $tmp26 = $tmp10.max.value;
    bool $tmp27 = $tmp10.inclusive.value;
    if ($tmp27) goto $l34; else goto $l35;
    $l34:;
    if ($tmp24 <= $tmp26) goto $l28; else goto $l30;
    $l35:;
    if ($tmp24 < $tmp26) goto $l28; else goto $l30;
    $l28:;
    {
        panda$core$Object* $tmp40 = (($fn39) p_value->owner->$class->vtable[2])(p_value->owner);
        $tmp38 = $tmp40;
        panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp38)->name, &$s41);
        $tmp37 = $tmp42;
        panda$core$Object* $tmp46 = (($fn45) p_value->owner->$class->vtable[2])(p_value->owner);
        $tmp44 = $tmp46;
        ITable* $tmp47 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp44)->parameters)->$class->itable;
        while ($tmp47->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp47 = $tmp47->next;
        }
        $fn49 $tmp48 = $tmp47->methods[0];
        panda$core$Object* $tmp50 = $tmp48(((panda$collections$ListView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp44)->parameters), i23);
        $tmp43 = $tmp50;
        panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp43))->name);
        $tmp36 = $tmp51;
        ITable* $tmp53 = p_types->$class->itable;
        while ($tmp53->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp53 = $tmp53->next;
        }
        $fn55 $tmp54 = $tmp53->methods[0];
        panda$core$Object* $tmp56 = $tmp54(p_types, i23);
        $tmp52 = $tmp56;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->typeMap, ((panda$collections$Key*) $tmp36), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp52)));
        panda$core$Panda$unref$panda$core$Object($tmp52);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object($tmp43);
        panda$core$Panda$unref$panda$core$Object($tmp44);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object($tmp38);
    }
    $l31:;
    int64_t $tmp58 = $tmp26 - i23.value;
    if ($tmp27) goto $l59; else goto $l60;
    $l59:;
    if ((uint64_t) $tmp58 >= 1) goto $l57; else goto $l30;
    $l60:;
    if ((uint64_t) $tmp58 > 1) goto $l57; else goto $l30;
    $l57:;
    i23.value += 1;
    goto $l28;
    $l30:;
    panda$core$Panda$unref$panda$core$Object($tmp11);
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue63;
    org$pandalanguage$pandac$Type* $tmp64;
    org$pandalanguage$pandac$Type* $tmp65;
    org$pandalanguage$pandac$Type* $tmp66;
    panda$core$Object* $tmp67;
    panda$core$Object* $tmp69 = (($fn68) self->value->owner->$class->vtable[2])(self->value->owner);
    $tmp67 = $tmp69;
    org$pandalanguage$pandac$Type* $tmp70 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp67));
    $tmp66 = $tmp70;
    org$pandalanguage$pandac$Type* $tmp71 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp66, self->typeMap);
    $tmp65 = $tmp71;
    $tmp64 = $tmp65;
    $returnValue63 = $tmp64;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
    panda$core$Panda$unref$panda$core$Object($tmp67);
    return $returnValue63;
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $returnValue73;
    panda$core$Int64 $tmp74 = panda$collections$Array$get_count$R$panda$core$Int64(self->value->parameters);
    $returnValue73 = $tmp74;
    return $returnValue73;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    org$pandalanguage$pandac$Type* $returnValue76;
    org$pandalanguage$pandac$Type* $tmp77;
    org$pandalanguage$pandac$Type* $tmp78;
    panda$core$Object* $tmp79;
    panda$core$Object* $tmp80 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->value->parameters, p_index);
    $tmp79 = $tmp80;
    org$pandalanguage$pandac$Type* $tmp81 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp79)->type, self->typeMap);
    $tmp78 = $tmp81;
    $tmp77 = $tmp78;
    $returnValue76 = $tmp77;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
    panda$core$Panda$unref$panda$core$Object($tmp79);
    return $returnValue76;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue83;
    org$pandalanguage$pandac$Type* $tmp84;
    org$pandalanguage$pandac$Type* $tmp85;
    org$pandalanguage$pandac$Type* $tmp86 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(self->value->returnType, self->typeMap);
    $tmp85 = $tmp86;
    $tmp84 = $tmp85;
    $returnValue83 = $tmp84;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
    return $returnValue83;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue88;
    org$pandalanguage$pandac$Type* $tmp89;
    org$pandalanguage$pandac$Type* $tmp90;
    org$pandalanguage$pandac$Type* $tmp91;
    org$pandalanguage$pandac$Type* $tmp92 = org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(self->value);
    $tmp91 = $tmp92;
    org$pandalanguage$pandac$Type* $tmp93 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp91, self->typeMap);
    $tmp90 = $tmp93;
    $tmp89 = $tmp90;
    $returnValue88 = $tmp89;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
    return $returnValue88;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $returnValue95;
    panda$core$String* $tmp96;
    panda$core$String* $tmp97;
    panda$core$String* $tmp98;
    panda$core$String* $tmp99;
    panda$core$String* $tmp100;
    panda$core$String* $tmp102;
    panda$core$String* $tmp103 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(self->value);
    $tmp102 = $tmp103;
    panda$core$String* $tmp104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s101, $tmp102);
    $tmp100 = $tmp104;
    panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp100, &$s105);
    $tmp99 = $tmp106;
    panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp99, ((panda$core$Object*) self->types));
    $tmp98 = $tmp107;
    panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp98, &$s108);
    $tmp97 = $tmp109;
    $tmp96 = $tmp97;
    $returnValue95 = $tmp96;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
    return $returnValue95;
}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self) {
    int $tmp113;
    {
    }
    $tmp113 = -1;
    goto $l111;
    $l111:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp113) {
        case -1: goto $l114;
    }
    $l114:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->types));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->typeMap));
}

