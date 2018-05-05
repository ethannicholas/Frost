#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String} };

typedef panda$collections$Iterator* (*$fn89)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn96)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn104)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$MethodDecl$Kind p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, panda$collections$ImmutableArray* p_body) {
    self->name = NULL;
    self->owner = NULL;
    self->doccomment = NULL;
    self->annotations = NULL;
    self->parameters = NULL;
    self->returnType = NULL;
    self->body = NULL;
    self->compiledBody = NULL;
    self->overridden = NULL;
    panda$collections$ImmutableArray* $tmp2 = NULL;
    self->compiledBody = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    self->overrideKnown = ((panda$core$Bit) { false });
    org$pandalanguage$pandac$MethodDecl* $tmp3 = NULL;
    self->overridden = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 204 }), p_position, p_name);
    {
        org$pandalanguage$pandac$ClassDecl* $tmp4 = self->owner;
        org$pandalanguage$pandac$ClassDecl* $tmp5 = p_owner;
        self->owner = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    {
        panda$core$String* $tmp6 = self->doccomment;
        panda$core$String* $tmp7 = p_doccomment;
        self->doccomment = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    }
    {
        org$pandalanguage$pandac$Annotations* $tmp8 = self->annotations;
        org$pandalanguage$pandac$Annotations* $tmp9 = p_annotations;
        self->annotations = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
    self->methodKind = p_methodKind;
    {
        panda$collections$Array* $tmp10 = self->parameters;
        panda$collections$Array* $tmp11 = p_parameters;
        self->parameters = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    }
    {
        org$pandalanguage$pandac$Type* $tmp12 = self->returnType;
        org$pandalanguage$pandac$Type* $tmp13 = p_returnType;
        self->returnType = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    {
        panda$collections$ImmutableArray* $tmp14 = self->body;
        panda$collections$ImmutableArray* $tmp15 = p_body;
        self->body = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    self->resolved = ((panda$core$Bit) { false });
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $tmp17 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp16 = $tmp17;
    return $tmp16;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $tmp21 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp22 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp21);
    bool $tmp20 = $tmp22.value;
    if (!$tmp20) goto $l23;
    panda$core$Bit $tmp24 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $tmp20 = $tmp24.value;
    $l23:;
    panda$core$Bit $tmp25 = { $tmp20 };
    bool $tmp19 = $tmp25.value;
    if (!$tmp19) goto $l26;
    panda$core$Bit $tmp27 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp28 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp27);
    $tmp19 = $tmp28.value;
    $l26:;
    panda$core$Bit $tmp29 = { $tmp19 };
    panda$core$Bit $tmp18 = $tmp29;
    return $tmp18;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $tmp31 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp32 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp31);
    panda$core$Bit $tmp30 = $tmp32;
    return $tmp30;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp44;
    bool $tmp33 = self->resolved.value;
    if (!$tmp33) goto $l34;
    $tmp33 = p_other->resolved.value;
    $l34:;
    panda$core$Bit $tmp35 = { $tmp33 };
    PANDA_ASSERT($tmp35.value);
    panda$core$Bit $tmp36 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp36.value) {
    {
        panda$core$Bit $tmp37 = ((panda$core$Bit) { false });
        return $tmp37;
    }
    }
    panda$core$Bit $tmp38 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp38.value) {
    {
        panda$core$Bit $tmp39 = ((panda$core$Bit) { false });
        return $tmp39;
    }
    }
    panda$core$Int64 $tmp40 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp41 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp42 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp40, $tmp41);
    if ($tmp42.value) {
    {
        panda$core$Bit $tmp43 = ((panda$core$Bit) { false });
        return $tmp43;
    }
    }
    panda$core$Int64 $tmp45 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp44, ((panda$core$Int64) { 0 }), $tmp45, ((panda$core$Bit) { false }));
    int64_t $tmp47 = $tmp44.min.value;
    panda$core$Int64 i46 = { $tmp47 };
    int64_t $tmp49 = $tmp44.max.value;
    bool $tmp50 = $tmp44.inclusive.value;
    if ($tmp50) goto $l57; else goto $l58;
    $l57:;
    if ($tmp47 <= $tmp49) goto $l51; else goto $l53;
    $l58:;
    if ($tmp47 < $tmp49) goto $l51; else goto $l53;
    $l51:;
    {
        panda$core$Object* $tmp60 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i46);
        panda$core$Object* $tmp59 = $tmp60;
        panda$core$Object* $tmp62 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i46);
        panda$core$Object* $tmp61 = $tmp62;
        panda$core$Bit $tmp63 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp59)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp61)->type);
        panda$core$Panda$unref$panda$core$Object($tmp61);
        panda$core$Panda$unref$panda$core$Object($tmp59);
        if ($tmp63.value) {
        {
            panda$core$Bit $tmp64 = ((panda$core$Bit) { false });
            return $tmp64;
        }
        }
    }
    $l54:;
    int64_t $tmp66 = $tmp49 - i46.value;
    if ($tmp50) goto $l67; else goto $l68;
    $l67:;
    if ((uint64_t) $tmp66 >= 1) goto $l65; else goto $l53;
    $l68:;
    if ((uint64_t) $tmp66 > 1) goto $l65; else goto $l53;
    $l65:;
    i46.value += 1;
    goto $l51;
    $l53:;
    panda$core$Bit $tmp71 = ((panda$core$Bit) { true });
    return $tmp71;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result72;
    panda$core$String* separator81;
    panda$collections$Iterator* Iter$99$984;
    org$pandalanguage$pandac$MethodDecl$Parameter* p99;
    panda$core$Char8 $tmp109;
    panda$core$String* tmp1119;
    panda$core$MutableString* $tmp75 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp78 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp77 = $tmp78;
    panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp77, &$s79);
    panda$core$String* $tmp76 = $tmp80;
    panda$core$MutableString$init$panda$core$String($tmp75, $tmp76);
    panda$core$MutableString* $tmp74 = $tmp75;
    panda$core$MutableString* $tmp73 = $tmp74;
    result72 = $tmp73;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
    panda$core$String* $tmp82 = &$s83;
    separator81 = $tmp82;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp82));
    {
        ITable* $tmp87 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp87->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp87 = $tmp87->next;
        }
        $fn89 $tmp88 = $tmp87->methods[0];
        panda$collections$Iterator* $tmp90 = $tmp88(((panda$collections$Iterable*) self->parameters));
        panda$collections$Iterator* $tmp86 = $tmp90;
        panda$collections$Iterator* $tmp85 = $tmp86;
        Iter$99$984 = $tmp85;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
        $l91:;
        ITable* $tmp94 = Iter$99$984->$class->itable;
        while ($tmp94->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp94 = $tmp94->next;
        }
        $fn96 $tmp95 = $tmp94->methods[0];
        panda$core$Bit $tmp97 = $tmp95(Iter$99$984);
        panda$core$Bit $tmp98 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp97);
        bool $tmp93 = $tmp98.value;
        if (!$tmp93) goto $l92;
        {
            ITable* $tmp102 = Iter$99$984->$class->itable;
            while ($tmp102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp102 = $tmp102->next;
            }
            $fn104 $tmp103 = $tmp102->methods[1];
            panda$core$Object* $tmp105 = $tmp103(Iter$99$984);
            panda$core$Object* $tmp101 = $tmp105;
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp100 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp101);
            p99 = $tmp100;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
            panda$core$Panda$unref$panda$core$Object($tmp101);
            panda$core$MutableString$append$panda$core$String(result72, separator81);
            panda$core$MutableString$append$panda$core$Object(result72, ((panda$core$Object*) p99));
            {
                panda$core$String* $tmp106 = separator81;
                panda$core$String* $tmp107 = &$s108;
                separator81 = $tmp107;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p99));
        }
        goto $l91;
        $l92:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$99$984));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp109, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(result72, $tmp109);
    org$pandalanguage$pandac$Type* $tmp111 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp110 = $tmp111;
    panda$core$Bit $tmp112 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp110);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
    if ($tmp112.value) {
    {
        panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s115, ((panda$core$Object*) self->returnType));
        panda$core$String* $tmp114 = $tmp116;
        panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp114, &$s117);
        panda$core$String* $tmp113 = $tmp118;
        panda$core$MutableString$append$panda$core$String(result72, $tmp113);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
    }
    }
    {
        panda$core$String* $tmp122 = panda$core$MutableString$finish$R$panda$core$String(result72);
        panda$core$String* $tmp121 = $tmp122;
        panda$core$String* $tmp120 = $tmp121;
        tmp1119 = $tmp120;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator81));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result72));
        }
        panda$core$String* $tmp123 = tmp1119;
        return $tmp123;
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$112_9124;
    {
        $match$112_9124 = self->methodKind;
        panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9124.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp125.value) {
        {
            panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s132, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp131 = $tmp133;
            panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s134);
            panda$core$String* $tmp130 = $tmp135;
            panda$core$String* $tmp137 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp136 = $tmp137;
            panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp130, $tmp136);
            panda$core$String* $tmp129 = $tmp138;
            panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp129, &$s139);
            panda$core$String* $tmp128 = $tmp140;
            panda$core$String* $tmp127 = $tmp128;
            panda$core$String* $tmp126 = $tmp127;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
            return $tmp126;
        }
        }
        else {
        panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9124.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp141.value) {
        {
            panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s148, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp147 = $tmp149;
            panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp147, &$s150);
            panda$core$String* $tmp146 = $tmp151;
            panda$core$String* $tmp153 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp152 = $tmp153;
            panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, $tmp152);
            panda$core$String* $tmp145 = $tmp154;
            panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp145, &$s155);
            panda$core$String* $tmp144 = $tmp156;
            panda$core$String* $tmp143 = $tmp144;
            panda$core$String* $tmp142 = $tmp143;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
            return $tmp142;
        }
        }
        else {
        panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9124.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp157.value) {
        {
            panda$core$String* $tmp164 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp163 = $tmp164;
            panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp163, &$s165);
            panda$core$String* $tmp162 = $tmp166;
            panda$core$String* $tmp168 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp167 = $tmp168;
            panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp162, $tmp167);
            panda$core$String* $tmp161 = $tmp169;
            panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp161, &$s170);
            panda$core$String* $tmp160 = $tmp171;
            panda$core$String* $tmp159 = $tmp160;
            panda$core$String* $tmp158 = $tmp159;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp167));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
            return $tmp158;
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp179 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        panda$core$String* $tmp178 = $tmp179;
        panda$core$String* $tmp180 = panda$core$String$convert$R$panda$core$String($tmp178);
        panda$core$String* $tmp177 = $tmp180;
        panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s181);
        panda$core$String* $tmp176 = $tmp182;
        panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp176, ((panda$core$Object*) self->body));
        panda$core$String* $tmp175 = $tmp183;
        panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s184);
        panda$core$String* $tmp174 = $tmp185;
        panda$core$String* $tmp173 = $tmp174;
        panda$core$String* $tmp172 = $tmp173;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
        return $tmp172;
    }
    }
    panda$core$String* $tmp189 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    panda$core$String* $tmp188 = $tmp189;
    panda$core$String* $tmp187 = $tmp188;
    panda$core$String* $tmp186 = $tmp187;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
    return $tmp186;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameters));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returnType));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->body));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiledBody));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->overridden));
}

