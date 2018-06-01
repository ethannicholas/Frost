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

typedef panda$core$Object* (*$fn15)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn19)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn23)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn42)(panda$core$Weak*);
typedef panda$core$Object* (*$fn48)(panda$core$Weak*);
typedef panda$core$Object* (*$fn52)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn58)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn71)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$MethodDecl* p_value, panda$collections$ListView* p_types) {
    panda$collections$HashMap* $tmp2;
    panda$collections$HashMap* $tmp3;
    org$pandalanguage$pandac$MethodDecl* $tmp9;
    org$pandalanguage$pandac$MethodDecl* $tmp10;
    panda$collections$ListView* $tmp11;
    panda$collections$ListView* $tmp12;
    panda$core$Range$LTpanda$core$Int64$GT $tmp13;
    panda$core$Object* $tmp14;
    panda$core$String* $tmp39;
    panda$core$String* $tmp40;
    panda$core$Object* $tmp41;
    panda$core$Object* $tmp46;
    panda$core$Object* $tmp47;
    panda$core$Object* $tmp55;
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
    if ($tmp5.value) goto $l6; else goto $l7;
    $l7:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s8, (panda$core$Int64) { 12 });
    abort();
    $l6:;
    {
        $tmp9 = self->value;
        $tmp10 = p_value;
        self->value = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    }
    {
        $tmp11 = self->types;
        $tmp12 = p_types;
        self->types = $tmp12;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
    }
    panda$core$Object* $tmp16 = (($fn15) p_value->owner->$class->vtable[2])(p_value->owner);
    $tmp14 = $tmp16;
    ITable* $tmp17 = ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp14)->parameters)->$class->itable;
    while ($tmp17->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp17 = $tmp17->next;
    }
    $fn19 $tmp18 = $tmp17->methods[0];
    panda$core$Int64 $tmp20 = $tmp18(((panda$collections$CollectionView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp14)->parameters));
    ITable* $tmp21 = ((panda$collections$CollectionView*) p_types)->$class->itable;
    while ($tmp21->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp21 = $tmp21->next;
    }
    $fn23 $tmp22 = $tmp21->methods[0];
    panda$core$Int64 $tmp24 = $tmp22(((panda$collections$CollectionView*) p_types));
    panda$core$Int64 $tmp25 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp20, $tmp24);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp13, ((panda$core$Int64) { 0 }), $tmp25, ((panda$core$Bit) { false }));
    int64_t $tmp27 = $tmp13.min.value;
    panda$core$Int64 i26 = { $tmp27 };
    int64_t $tmp29 = $tmp13.max.value;
    bool $tmp30 = $tmp13.inclusive.value;
    if ($tmp30) goto $l37; else goto $l38;
    $l37:;
    if ($tmp27 <= $tmp29) goto $l31; else goto $l33;
    $l38:;
    if ($tmp27 < $tmp29) goto $l31; else goto $l33;
    $l31:;
    {
        panda$core$Object* $tmp43 = (($fn42) p_value->owner->$class->vtable[2])(p_value->owner);
        $tmp41 = $tmp43;
        panda$core$String* $tmp45 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp41)->name, &$s44);
        $tmp40 = $tmp45;
        panda$core$Object* $tmp49 = (($fn48) p_value->owner->$class->vtable[2])(p_value->owner);
        $tmp47 = $tmp49;
        ITable* $tmp50 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp47)->parameters)->$class->itable;
        while ($tmp50->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp50 = $tmp50->next;
        }
        $fn52 $tmp51 = $tmp50->methods[0];
        panda$core$Object* $tmp53 = $tmp51(((panda$collections$ListView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp47)->parameters), i26);
        $tmp46 = $tmp53;
        panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp40, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp46))->name);
        $tmp39 = $tmp54;
        ITable* $tmp56 = p_types->$class->itable;
        while ($tmp56->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp56 = $tmp56->next;
        }
        $fn58 $tmp57 = $tmp56->methods[0];
        panda$core$Object* $tmp59 = $tmp57(p_types, i26);
        $tmp55 = $tmp59;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->typeMap, ((panda$collections$Key*) $tmp39), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp55)));
        panda$core$Panda$unref$panda$core$Object($tmp55);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object($tmp46);
        panda$core$Panda$unref$panda$core$Object($tmp47);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object($tmp41);
    }
    $l34:;
    int64_t $tmp61 = $tmp29 - i26.value;
    if ($tmp30) goto $l62; else goto $l63;
    $l62:;
    if ((uint64_t) $tmp61 >= 1) goto $l60; else goto $l33;
    $l63:;
    if ((uint64_t) $tmp61 > 1) goto $l60; else goto $l33;
    $l60:;
    i26.value += 1;
    goto $l31;
    $l33:;
    panda$core$Panda$unref$panda$core$Object($tmp14);
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue66;
    org$pandalanguage$pandac$Type* $tmp67;
    org$pandalanguage$pandac$Type* $tmp68;
    org$pandalanguage$pandac$Type* $tmp69;
    panda$core$Object* $tmp70;
    panda$core$Object* $tmp72 = (($fn71) self->value->owner->$class->vtable[2])(self->value->owner);
    $tmp70 = $tmp72;
    org$pandalanguage$pandac$Type* $tmp73 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp70));
    $tmp69 = $tmp73;
    org$pandalanguage$pandac$Type* $tmp74 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp69, self->typeMap);
    $tmp68 = $tmp74;
    $tmp67 = $tmp68;
    $returnValue66 = $tmp67;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp69));
    panda$core$Panda$unref$panda$core$Object($tmp70);
    return $returnValue66;
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $returnValue76;
    panda$core$Int64 $tmp77 = panda$collections$Array$get_count$R$panda$core$Int64(self->value->parameters);
    $returnValue76 = $tmp77;
    return $returnValue76;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    org$pandalanguage$pandac$Type* $returnValue79;
    org$pandalanguage$pandac$Type* $tmp80;
    org$pandalanguage$pandac$Type* $tmp81;
    panda$core$Object* $tmp82;
    panda$core$Object* $tmp83 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->value->parameters, p_index);
    $tmp82 = $tmp83;
    org$pandalanguage$pandac$Type* $tmp84 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp82)->type, self->typeMap);
    $tmp81 = $tmp84;
    $tmp80 = $tmp81;
    $returnValue79 = $tmp80;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
    panda$core$Panda$unref$panda$core$Object($tmp82);
    return $returnValue79;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue86;
    org$pandalanguage$pandac$Type* $tmp87;
    org$pandalanguage$pandac$Type* $tmp88;
    org$pandalanguage$pandac$Type* $tmp89 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(self->value->returnType, self->typeMap);
    $tmp88 = $tmp89;
    $tmp87 = $tmp88;
    $returnValue86 = $tmp87;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
    return $returnValue86;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue91;
    org$pandalanguage$pandac$Type* $tmp92;
    org$pandalanguage$pandac$Type* $tmp93;
    org$pandalanguage$pandac$Type* $tmp94;
    org$pandalanguage$pandac$Type* $tmp95 = org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(self->value);
    $tmp94 = $tmp95;
    org$pandalanguage$pandac$Type* $tmp96 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp94, self->typeMap);
    $tmp93 = $tmp96;
    $tmp92 = $tmp93;
    $returnValue91 = $tmp92;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp92));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
    return $returnValue91;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $returnValue98;
    panda$core$String* $tmp99;
    panda$core$String* $tmp100;
    panda$core$String* $tmp101;
    panda$core$String* $tmp102;
    panda$core$String* $tmp103;
    panda$core$String* $tmp105;
    panda$core$String* $tmp106 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(self->value);
    $tmp105 = $tmp106;
    panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s104, $tmp105);
    $tmp103 = $tmp107;
    panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp103, &$s108);
    $tmp102 = $tmp109;
    panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp102, ((panda$core$Object*) self->types));
    $tmp101 = $tmp110;
    panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s111);
    $tmp100 = $tmp112;
    $tmp99 = $tmp100;
    $returnValue98 = $tmp99;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
    return $returnValue98;
}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self) {
    int $tmp116;
    {
    }
    $tmp116 = -1;
    goto $l114;
    $l114:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp116) {
        case -1: goto $l117;
    }
    $l117:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->types));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->typeMap));
}

