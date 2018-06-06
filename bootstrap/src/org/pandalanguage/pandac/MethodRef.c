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

typedef panda$core$Int64 (*$fn20)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn24)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn52)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn58)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$MethodDecl* p_value, panda$collections$ListView* p_types) {
    panda$collections$HashMap* $tmp2;
    panda$collections$HashMap* $tmp3;
    panda$core$Int64 $tmp5;
    org$pandalanguage$pandac$MethodDecl* $tmp10;
    org$pandalanguage$pandac$MethodDecl* $tmp11;
    panda$collections$ListView* $tmp12;
    panda$collections$ListView* $tmp13;
    panda$core$Range$LTpanda$core$Int64$GT $tmp14;
    panda$core$Int64 $tmp15;
    panda$core$Object* $tmp16;
    panda$core$Bit $tmp27;
    panda$core$String* $tmp41;
    panda$core$String* $tmp42;
    panda$core$Object* $tmp43;
    panda$core$Object* $tmp47;
    panda$core$Object* $tmp48;
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
    panda$core$Int64$init$builtin_int64(&$tmp5, 0);
    panda$core$Bit $tmp6 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_value->resolved.$rawValue, $tmp5);
    if ($tmp6.value) goto $l7; else goto $l8;
    $l8:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s9, (panda$core$Int64) { 12 });
    abort();
    $l7:;
    {
        $tmp10 = self->value;
        $tmp11 = p_value;
        self->value = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    }
    {
        $tmp12 = self->types;
        $tmp13 = p_types;
        self->types = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    panda$core$Int64$init$builtin_int64(&$tmp15, 0);
    panda$core$Object* $tmp17 = panda$core$Weak$get$R$panda$core$Weak$T(p_value->owner);
    $tmp16 = $tmp17;
    ITable* $tmp18 = ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp16)->parameters)->$class->itable;
    while ($tmp18->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp18 = $tmp18->next;
    }
    $fn20 $tmp19 = $tmp18->methods[0];
    panda$core$Int64 $tmp21 = $tmp19(((panda$collections$CollectionView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp16)->parameters));
    ITable* $tmp22 = ((panda$collections$CollectionView*) p_types)->$class->itable;
    while ($tmp22->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp22 = $tmp22->next;
    }
    $fn24 $tmp23 = $tmp22->methods[0];
    panda$core$Int64 $tmp25 = $tmp23(((panda$collections$CollectionView*) p_types));
    panda$core$Int64 $tmp26 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp21, $tmp25);
    panda$core$Bit$init$builtin_bit(&$tmp27, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp14, $tmp15, $tmp26, $tmp27);
    int64_t $tmp29 = $tmp14.min.value;
    panda$core$Int64 i28 = { $tmp29 };
    int64_t $tmp31 = $tmp14.max.value;
    bool $tmp32 = $tmp14.inclusive.value;
    if ($tmp32) goto $l39; else goto $l40;
    $l39:;
    if ($tmp29 <= $tmp31) goto $l33; else goto $l35;
    $l40:;
    if ($tmp29 < $tmp31) goto $l33; else goto $l35;
    $l33:;
    {
        panda$core$Object* $tmp44 = panda$core$Weak$get$R$panda$core$Weak$T(p_value->owner);
        $tmp43 = $tmp44;
        panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp43)->name, &$s45);
        $tmp42 = $tmp46;
        panda$core$Object* $tmp49 = panda$core$Weak$get$R$panda$core$Weak$T(p_value->owner);
        $tmp48 = $tmp49;
        ITable* $tmp50 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp48)->parameters)->$class->itable;
        while ($tmp50->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp50 = $tmp50->next;
        }
        $fn52 $tmp51 = $tmp50->methods[0];
        panda$core$Object* $tmp53 = $tmp51(((panda$collections$ListView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp48)->parameters), i28);
        $tmp47 = $tmp53;
        panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp42, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp47))->name);
        $tmp41 = $tmp54;
        ITable* $tmp56 = p_types->$class->itable;
        while ($tmp56->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp56 = $tmp56->next;
        }
        $fn58 $tmp57 = $tmp56->methods[0];
        panda$core$Object* $tmp59 = $tmp57(p_types, i28);
        $tmp55 = $tmp59;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->typeMap, ((panda$collections$Key*) $tmp41), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp55)));
        panda$core$Panda$unref$panda$core$Object($tmp55);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object($tmp47);
        panda$core$Panda$unref$panda$core$Object($tmp48);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object($tmp43);
    }
    $l36:;
    int64_t $tmp61 = $tmp31 - i28.value;
    if ($tmp32) goto $l62; else goto $l63;
    $l62:;
    if ((uint64_t) $tmp61 >= 1) goto $l60; else goto $l35;
    $l63:;
    if ((uint64_t) $tmp61 > 1) goto $l60; else goto $l35;
    $l60:;
    i28.value += 1;
    goto $l33;
    $l35:;
    panda$core$Panda$unref$panda$core$Object($tmp16);
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue66;
    org$pandalanguage$pandac$Type* $tmp67;
    org$pandalanguage$pandac$Type* $tmp68;
    org$pandalanguage$pandac$Type* $tmp69;
    panda$core$Object* $tmp70;
    panda$core$Object* $tmp71 = panda$core$Weak$get$R$panda$core$Weak$T(self->value->owner);
    $tmp70 = $tmp71;
    org$pandalanguage$pandac$Type* $tmp72 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp70));
    $tmp69 = $tmp72;
    org$pandalanguage$pandac$Type* $tmp73 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp69, self->typeMap);
    $tmp68 = $tmp73;
    $tmp67 = $tmp68;
    $returnValue66 = $tmp67;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp69));
    panda$core$Panda$unref$panda$core$Object($tmp70);
    return $returnValue66;
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $returnValue75;
    panda$core$Int64 $tmp76 = panda$collections$Array$get_count$R$panda$core$Int64(self->value->parameters);
    $returnValue75 = $tmp76;
    return $returnValue75;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    org$pandalanguage$pandac$Type* $returnValue78;
    org$pandalanguage$pandac$Type* $tmp79;
    org$pandalanguage$pandac$Type* $tmp80;
    panda$core$Object* $tmp81;
    panda$core$Object* $tmp82 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->value->parameters, p_index);
    $tmp81 = $tmp82;
    org$pandalanguage$pandac$Type* $tmp83 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp81)->type, self->typeMap);
    $tmp80 = $tmp83;
    $tmp79 = $tmp80;
    $returnValue78 = $tmp79;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    panda$core$Panda$unref$panda$core$Object($tmp81);
    return $returnValue78;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue85;
    org$pandalanguage$pandac$Type* $tmp86;
    org$pandalanguage$pandac$Type* $tmp87;
    org$pandalanguage$pandac$Type* $tmp88 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(self->value->returnType, self->typeMap);
    $tmp87 = $tmp88;
    $tmp86 = $tmp87;
    $returnValue85 = $tmp86;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
    return $returnValue85;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue90;
    org$pandalanguage$pandac$Type* $tmp91;
    org$pandalanguage$pandac$Type* $tmp92;
    org$pandalanguage$pandac$Type* $tmp93;
    org$pandalanguage$pandac$Type* $tmp94 = org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(self->value);
    $tmp93 = $tmp94;
    org$pandalanguage$pandac$Type* $tmp95 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp93, self->typeMap);
    $tmp92 = $tmp95;
    $tmp91 = $tmp92;
    $returnValue90 = $tmp91;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp91));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
    return $returnValue90;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $returnValue97;
    panda$core$String* $tmp98;
    panda$core$String* $tmp99;
    panda$core$String* $tmp100;
    panda$core$String* $tmp101;
    panda$core$String* $tmp102;
    panda$core$String* $tmp104;
    panda$core$String* $tmp105 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(self->value);
    $tmp104 = $tmp105;
    panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s103, $tmp104);
    $tmp102 = $tmp106;
    panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp102, &$s107);
    $tmp101 = $tmp108;
    panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp101, ((panda$core$Object*) self->types));
    $tmp100 = $tmp109;
    panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp100, &$s110);
    $tmp99 = $tmp111;
    $tmp98 = $tmp99;
    $returnValue97 = $tmp98;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
    return $returnValue97;
}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self) {
    int $tmp115;
    {
    }
    $tmp115 = -1;
    goto $l113;
    $l113:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp115) {
        case -1: goto $l116;
    }
    $l116:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->types));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->typeMap));
}

