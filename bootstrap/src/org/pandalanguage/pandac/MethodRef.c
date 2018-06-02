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

typedef panda$core$Object* (*$fn17)(panda$core$Weak*);
typedef panda$core$Int64 (*$fn21)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn25)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn45)(panda$core$Weak*);
typedef panda$core$Object* (*$fn51)(panda$core$Weak*);
typedef panda$core$Object* (*$fn55)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn61)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn74)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

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
    panda$core$Bit $tmp28;
    panda$core$String* $tmp42;
    panda$core$String* $tmp43;
    panda$core$Object* $tmp44;
    panda$core$Object* $tmp49;
    panda$core$Object* $tmp50;
    panda$core$Object* $tmp58;
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
    panda$core$Object* $tmp18 = (($fn17) p_value->owner->$class->vtable[2])(p_value->owner);
    $tmp16 = $tmp18;
    ITable* $tmp19 = ((panda$collections$CollectionView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp16)->parameters)->$class->itable;
    while ($tmp19->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp19 = $tmp19->next;
    }
    $fn21 $tmp20 = $tmp19->methods[0];
    panda$core$Int64 $tmp22 = $tmp20(((panda$collections$CollectionView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp16)->parameters));
    ITable* $tmp23 = ((panda$collections$CollectionView*) p_types)->$class->itable;
    while ($tmp23->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp23 = $tmp23->next;
    }
    $fn25 $tmp24 = $tmp23->methods[0];
    panda$core$Int64 $tmp26 = $tmp24(((panda$collections$CollectionView*) p_types));
    panda$core$Int64 $tmp27 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp22, $tmp26);
    panda$core$Bit$init$builtin_bit(&$tmp28, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp14, $tmp15, $tmp27, $tmp28);
    int64_t $tmp30 = $tmp14.min.value;
    panda$core$Int64 i29 = { $tmp30 };
    int64_t $tmp32 = $tmp14.max.value;
    bool $tmp33 = $tmp14.inclusive.value;
    if ($tmp33) goto $l40; else goto $l41;
    $l40:;
    if ($tmp30 <= $tmp32) goto $l34; else goto $l36;
    $l41:;
    if ($tmp30 < $tmp32) goto $l34; else goto $l36;
    $l34:;
    {
        panda$core$Object* $tmp46 = (($fn45) p_value->owner->$class->vtable[2])(p_value->owner);
        $tmp44 = $tmp46;
        panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp44)->name, &$s47);
        $tmp43 = $tmp48;
        panda$core$Object* $tmp52 = (($fn51) p_value->owner->$class->vtable[2])(p_value->owner);
        $tmp50 = $tmp52;
        ITable* $tmp53 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp50)->parameters)->$class->itable;
        while ($tmp53->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp53 = $tmp53->next;
        }
        $fn55 $tmp54 = $tmp53->methods[0];
        panda$core$Object* $tmp56 = $tmp54(((panda$collections$ListView*) ((org$pandalanguage$pandac$ClassDecl*) $tmp50)->parameters), i29);
        $tmp49 = $tmp56;
        panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp43, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp49))->name);
        $tmp42 = $tmp57;
        ITable* $tmp59 = p_types->$class->itable;
        while ($tmp59->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp59 = $tmp59->next;
        }
        $fn61 $tmp60 = $tmp59->methods[0];
        panda$core$Object* $tmp62 = $tmp60(p_types, i29);
        $tmp58 = $tmp62;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->typeMap, ((panda$collections$Key*) $tmp42), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp58)));
        panda$core$Panda$unref$panda$core$Object($tmp58);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object($tmp49);
        panda$core$Panda$unref$panda$core$Object($tmp50);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$core$Panda$unref$panda$core$Object($tmp44);
    }
    $l37:;
    int64_t $tmp64 = $tmp32 - i29.value;
    if ($tmp33) goto $l65; else goto $l66;
    $l65:;
    if ((uint64_t) $tmp64 >= 1) goto $l63; else goto $l36;
    $l66:;
    if ((uint64_t) $tmp64 > 1) goto $l63; else goto $l36;
    $l63:;
    i29.value += 1;
    goto $l34;
    $l36:;
    panda$core$Panda$unref$panda$core$Object($tmp16);
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue69;
    org$pandalanguage$pandac$Type* $tmp70;
    org$pandalanguage$pandac$Type* $tmp71;
    org$pandalanguage$pandac$Type* $tmp72;
    panda$core$Object* $tmp73;
    panda$core$Object* $tmp75 = (($fn74) self->value->owner->$class->vtable[2])(self->value->owner);
    $tmp73 = $tmp75;
    org$pandalanguage$pandac$Type* $tmp76 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp73));
    $tmp72 = $tmp76;
    org$pandalanguage$pandac$Type* $tmp77 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp72, self->typeMap);
    $tmp71 = $tmp77;
    $tmp70 = $tmp71;
    $returnValue69 = $tmp70;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
    panda$core$Panda$unref$panda$core$Object($tmp73);
    return $returnValue69;
}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$Int64 $returnValue79;
    panda$core$Int64 $tmp80 = panda$collections$Array$get_count$R$panda$core$Int64(self->value->parameters);
    $returnValue79 = $tmp80;
    return $returnValue79;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index) {
    org$pandalanguage$pandac$Type* $returnValue82;
    org$pandalanguage$pandac$Type* $tmp83;
    org$pandalanguage$pandac$Type* $tmp84;
    panda$core$Object* $tmp85;
    panda$core$Object* $tmp86 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->value->parameters, p_index);
    $tmp85 = $tmp86;
    org$pandalanguage$pandac$Type* $tmp87 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp85)->type, self->typeMap);
    $tmp84 = $tmp87;
    $tmp83 = $tmp84;
    $returnValue82 = $tmp83;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    panda$core$Panda$unref$panda$core$Object($tmp85);
    return $returnValue82;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue89;
    org$pandalanguage$pandac$Type* $tmp90;
    org$pandalanguage$pandac$Type* $tmp91;
    org$pandalanguage$pandac$Type* $tmp92 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(self->value->returnType, self->typeMap);
    $tmp91 = $tmp92;
    $tmp90 = $tmp91;
    $returnValue89 = $tmp90;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
    return $returnValue89;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self) {
    org$pandalanguage$pandac$Type* $returnValue94;
    org$pandalanguage$pandac$Type* $tmp95;
    org$pandalanguage$pandac$Type* $tmp96;
    org$pandalanguage$pandac$Type* $tmp97;
    org$pandalanguage$pandac$Type* $tmp98 = org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(self->value);
    $tmp97 = $tmp98;
    org$pandalanguage$pandac$Type* $tmp99 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp97, self->typeMap);
    $tmp96 = $tmp99;
    $tmp95 = $tmp96;
    $returnValue94 = $tmp95;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
    return $returnValue94;
}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self) {
    panda$core$String* $returnValue101;
    panda$core$String* $tmp102;
    panda$core$String* $tmp103;
    panda$core$String* $tmp104;
    panda$core$String* $tmp105;
    panda$core$String* $tmp106;
    panda$core$String* $tmp108;
    panda$core$String* $tmp109 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(self->value);
    $tmp108 = $tmp109;
    panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s107, $tmp108);
    $tmp106 = $tmp110;
    panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s111);
    $tmp105 = $tmp112;
    panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp105, ((panda$core$Object*) self->types));
    $tmp104 = $tmp113;
    panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp104, &$s114);
    $tmp103 = $tmp115;
    $tmp102 = $tmp103;
    $returnValue101 = $tmp102;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
    return $returnValue101;
}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self) {
    int $tmp119;
    {
    }
    $tmp119 = -1;
    goto $l117;
    $l117:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp119) {
        case -1: goto $l120;
    }
    $l120:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->types));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->typeMap));
}

