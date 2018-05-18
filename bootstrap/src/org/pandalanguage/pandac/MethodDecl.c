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
#include "panda/core/Weak.h"
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

typedef panda$collections$Iterator* (*$fn103)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn110)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn121)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn155)(panda$core$Weak*);
typedef panda$core$Object* (*$fn174)(panda$core$Weak*);
typedef panda$core$Object* (*$fn192)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$MethodDecl$Kind p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, panda$collections$ImmutableArray* p_body) {
    panda$collections$ImmutableArray* $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp4;
    panda$core$Weak* $tmp6;
    panda$core$Weak* $tmp7;
    panda$core$Weak* $tmp8;
    panda$core$String* $tmp10;
    panda$core$String* $tmp11;
    org$pandalanguage$pandac$Annotations* $tmp12;
    org$pandalanguage$pandac$Annotations* $tmp13;
    panda$collections$Array* $tmp14;
    panda$collections$Array* $tmp15;
    org$pandalanguage$pandac$Type* $tmp16;
    org$pandalanguage$pandac$Type* $tmp17;
    panda$collections$ImmutableArray* $tmp18;
    panda$collections$ImmutableArray* $tmp19;
    self->name = NULL;
    self->owner = NULL;
    self->doccomment = NULL;
    self->annotations = NULL;
    self->parameters = NULL;
    self->returnType = NULL;
    self->body = NULL;
    self->compiledBody = NULL;
    self->overridden = NULL;
    $tmp2 = NULL;
    self->compiledBody = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    self->overrideKnown = ((panda$core$Bit) { false });
    panda$core$Weak* $tmp5 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp5, ((panda$core$Object*) NULL));
    $tmp4 = $tmp5;
    $tmp3 = $tmp4;
    self->overridden = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 204 }), p_position, p_name);
    {
        $tmp6 = self->owner;
        panda$core$Weak* $tmp9 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp9, ((panda$core$Object*) p_owner));
        $tmp8 = $tmp9;
        $tmp7 = $tmp8;
        self->owner = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    }
    {
        $tmp10 = self->doccomment;
        $tmp11 = p_doccomment;
        self->doccomment = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    }
    {
        $tmp12 = self->annotations;
        $tmp13 = p_annotations;
        self->annotations = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    self->methodKind = p_methodKind;
    {
        $tmp14 = self->parameters;
        $tmp15 = p_parameters;
        self->parameters = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    {
        $tmp16 = self->returnType;
        $tmp17 = p_returnType;
        self->returnType = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    }
    {
        $tmp18 = self->body;
        $tmp19 = p_body;
        self->body = $tmp19;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    }
    self->resolved = ((panda$core$Bit) { false });
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue20;
    panda$core$Bit $tmp21 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $returnValue20 = $tmp21;
    return $returnValue20;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue23;
    panda$core$Bit $tmp26 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp27 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp26);
    bool $tmp25 = $tmp27.value;
    if (!$tmp25) goto $l28;
    panda$core$Bit $tmp29 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $tmp25 = $tmp29.value;
    $l28:;
    panda$core$Bit $tmp30 = { $tmp25 };
    bool $tmp24 = $tmp30.value;
    if (!$tmp24) goto $l31;
    panda$core$Bit $tmp32 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp33 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp32);
    $tmp24 = $tmp33.value;
    $l31:;
    panda$core$Bit $tmp34 = { $tmp24 };
    $returnValue23 = $tmp34;
    return $returnValue23;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $returnValue36;
    panda$core$Bit $tmp37 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp38 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp37);
    $returnValue36 = $tmp38;
    return $returnValue36;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Bit $returnValue44;
    panda$core$Range$LTpanda$core$Int64$GT $tmp52;
    panda$core$Object* $tmp67;
    panda$core$Object* $tmp69;
    bool $tmp40 = self->resolved.value;
    if (!$tmp40) goto $l41;
    $tmp40 = p_other->resolved.value;
    $l41:;
    panda$core$Bit $tmp42 = { $tmp40 };
    PANDA_ASSERT($tmp42.value);
    panda$core$Bit $tmp43 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp43.value) {
    {
        $returnValue44 = ((panda$core$Bit) { false });
        return $returnValue44;
    }
    }
    panda$core$Bit $tmp46 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp46.value) {
    {
        $returnValue44 = ((panda$core$Bit) { false });
        return $returnValue44;
    }
    }
    panda$core$Int64 $tmp48 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp49 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp50 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp48, $tmp49);
    if ($tmp50.value) {
    {
        $returnValue44 = ((panda$core$Bit) { false });
        return $returnValue44;
    }
    }
    panda$core$Int64 $tmp53 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp52, ((panda$core$Int64) { 0 }), $tmp53, ((panda$core$Bit) { false }));
    int64_t $tmp55 = $tmp52.min.value;
    panda$core$Int64 i54 = { $tmp55 };
    int64_t $tmp57 = $tmp52.max.value;
    bool $tmp58 = $tmp52.inclusive.value;
    if ($tmp58) goto $l65; else goto $l66;
    $l65:;
    if ($tmp55 <= $tmp57) goto $l59; else goto $l61;
    $l66:;
    if ($tmp55 < $tmp57) goto $l59; else goto $l61;
    $l59:;
    {
        panda$core$Object* $tmp68 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i54);
        $tmp67 = $tmp68;
        panda$core$Object* $tmp70 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i54);
        $tmp69 = $tmp70;
        panda$core$Bit $tmp71 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp67)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp69)->type);
        panda$core$Panda$unref$panda$core$Object($tmp69);
        panda$core$Panda$unref$panda$core$Object($tmp67);
        if ($tmp71.value) {
        {
            $returnValue44 = ((panda$core$Bit) { false });
            return $returnValue44;
        }
        }
    }
    $l62:;
    int64_t $tmp74 = $tmp57 - i54.value;
    if ($tmp58) goto $l75; else goto $l76;
    $l75:;
    if ((uint64_t) $tmp74 >= 1) goto $l73; else goto $l61;
    $l76:;
    if ((uint64_t) $tmp74 > 1) goto $l73; else goto $l61;
    $l73:;
    i54.value += 1;
    goto $l59;
    $l61:;
    $returnValue44 = ((panda$core$Bit) { true });
    return $returnValue44;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result83 = NULL;
    panda$core$MutableString* $tmp84;
    panda$core$MutableString* $tmp85;
    panda$core$String* $tmp87;
    panda$core$String* $tmp88;
    panda$core$String* separator92 = NULL;
    panda$core$String* $tmp93;
    panda$collections$Iterator* Iter$101$998 = NULL;
    panda$collections$Iterator* $tmp99;
    panda$collections$Iterator* $tmp100;
    org$pandalanguage$pandac$MethodDecl$Parameter* p116 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp117;
    panda$core$Object* $tmp118;
    panda$core$String* $tmp123;
    panda$core$String* $tmp124;
    panda$core$Char8 $tmp128;
    org$pandalanguage$pandac$Type* $tmp129;
    panda$core$String* $tmp132;
    panda$core$String* $tmp133;
    panda$core$String* $returnValue138;
    panda$core$String* $tmp139;
    panda$core$String* $tmp140;
    int $tmp82;
    {
        panda$core$MutableString* $tmp86 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp89 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp88 = $tmp89;
        panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp88, &$s90);
        $tmp87 = $tmp91;
        panda$core$MutableString$init$panda$core$String($tmp86, $tmp87);
        $tmp85 = $tmp86;
        $tmp84 = $tmp85;
        result83 = $tmp84;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
        $tmp93 = &$s94;
        separator92 = $tmp93;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
        {
            int $tmp97;
            {
                ITable* $tmp101 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp101->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp101 = $tmp101->next;
                }
                $fn103 $tmp102 = $tmp101->methods[0];
                panda$collections$Iterator* $tmp104 = $tmp102(((panda$collections$Iterable*) self->parameters));
                $tmp100 = $tmp104;
                $tmp99 = $tmp100;
                Iter$101$998 = $tmp99;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
                $l105:;
                ITable* $tmp108 = Iter$101$998->$class->itable;
                while ($tmp108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp108 = $tmp108->next;
                }
                $fn110 $tmp109 = $tmp108->methods[0];
                panda$core$Bit $tmp111 = $tmp109(Iter$101$998);
                panda$core$Bit $tmp112 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp111);
                bool $tmp107 = $tmp112.value;
                if (!$tmp107) goto $l106;
                {
                    int $tmp115;
                    {
                        ITable* $tmp119 = Iter$101$998->$class->itable;
                        while ($tmp119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp119 = $tmp119->next;
                        }
                        $fn121 $tmp120 = $tmp119->methods[1];
                        panda$core$Object* $tmp122 = $tmp120(Iter$101$998);
                        $tmp118 = $tmp122;
                        $tmp117 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp118);
                        p116 = $tmp117;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
                        panda$core$Panda$unref$panda$core$Object($tmp118);
                        panda$core$MutableString$append$panda$core$String(result83, separator92);
                        panda$core$MutableString$append$panda$core$Object(result83, ((panda$core$Object*) p116));
                        {
                            $tmp123 = separator92;
                            $tmp124 = &$s125;
                            separator92 = $tmp124;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp123));
                        }
                    }
                    $tmp115 = -1;
                    goto $l113;
                    $l113:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p116));
                    p116 = NULL;
                    switch ($tmp115) {
                        case -1: goto $l126;
                    }
                    $l126:;
                }
                goto $l105;
                $l106:;
            }
            $tmp97 = -1;
            goto $l95;
            $l95:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$101$998));
            Iter$101$998 = NULL;
            switch ($tmp97) {
                case -1: goto $l127;
            }
            $l127:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp128, ((panda$core$UInt8) { 41 }));
        panda$core$MutableString$append$panda$core$Char8(result83, $tmp128);
        org$pandalanguage$pandac$Type* $tmp130 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp129 = $tmp130;
        panda$core$Bit $tmp131 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp129);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
        if ($tmp131.value) {
        {
            panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s134, ((panda$core$Object*) self->returnType));
            $tmp133 = $tmp135;
            panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, &$s136);
            $tmp132 = $tmp137;
            panda$core$MutableString$append$panda$core$String(result83, $tmp132);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
        }
        }
        panda$core$String* $tmp141 = panda$core$MutableString$finish$R$panda$core$String(result83);
        $tmp140 = $tmp141;
        $tmp139 = $tmp140;
        $returnValue138 = $tmp139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
        $tmp82 = 0;
        goto $l80;
        $l142:;
        return $returnValue138;
    }
    $l80:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result83));
    result83 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator92));
    separator92 = NULL;
    switch ($tmp82) {
        case 0: goto $l142;
    }
    $l144:;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$114_9145;
    panda$core$String* $returnValue147;
    panda$core$String* $tmp148;
    panda$core$String* $tmp149;
    panda$core$String* $tmp150;
    panda$core$String* $tmp151;
    panda$core$String* $tmp152;
    panda$core$Object* $tmp154;
    panda$core$String* $tmp160;
    panda$core$String* $tmp167;
    panda$core$String* $tmp168;
    panda$core$String* $tmp169;
    panda$core$String* $tmp170;
    panda$core$String* $tmp171;
    panda$core$Object* $tmp173;
    panda$core$String* $tmp179;
    panda$core$String* $tmp186;
    panda$core$String* $tmp187;
    panda$core$String* $tmp188;
    panda$core$String* $tmp189;
    panda$core$String* $tmp190;
    panda$core$Object* $tmp191;
    panda$core$String* $tmp197;
    {
        $match$114_9145 = self->methodKind;
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$114_9145.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp146.value) {
        {
            panda$core$Object* $tmp156 = (($fn155) self->owner->$class->vtable[2])(self->owner);
            $tmp154 = $tmp156;
            panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s153, ((org$pandalanguage$pandac$ClassDecl*) $tmp154)->name);
            $tmp152 = $tmp157;
            panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp152, &$s158);
            $tmp151 = $tmp159;
            panda$core$String* $tmp161 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp160 = $tmp161;
            panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, $tmp160);
            $tmp150 = $tmp162;
            panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp150, &$s163);
            $tmp149 = $tmp164;
            $tmp148 = $tmp149;
            $returnValue147 = $tmp148;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
            panda$core$Panda$unref$panda$core$Object($tmp154);
            return $returnValue147;
        }
        }
        else {
        panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$114_9145.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp166.value) {
        {
            panda$core$Object* $tmp175 = (($fn174) self->owner->$class->vtable[2])(self->owner);
            $tmp173 = $tmp175;
            panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s172, ((org$pandalanguage$pandac$ClassDecl*) $tmp173)->name);
            $tmp171 = $tmp176;
            panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s177);
            $tmp170 = $tmp178;
            panda$core$String* $tmp180 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp179 = $tmp180;
            panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, $tmp179);
            $tmp169 = $tmp181;
            panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp169, &$s182);
            $tmp168 = $tmp183;
            $tmp167 = $tmp168;
            $returnValue147 = $tmp167;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
            panda$core$Panda$unref$panda$core$Object($tmp173);
            return $returnValue147;
        }
        }
        else {
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$114_9145.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp185.value) {
        {
            panda$core$Object* $tmp193 = (($fn192) self->owner->$class->vtable[2])(self->owner);
            $tmp191 = $tmp193;
            panda$core$String* $tmp194 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp191)->name);
            $tmp190 = $tmp194;
            panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp190, &$s195);
            $tmp189 = $tmp196;
            panda$core$String* $tmp198 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp197 = $tmp198;
            panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, $tmp197);
            $tmp188 = $tmp199;
            panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp188, &$s200);
            $tmp187 = $tmp201;
            $tmp186 = $tmp187;
            $returnValue147 = $tmp186;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
            panda$core$Panda$unref$panda$core$Object($tmp191);
            return $returnValue147;
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$String* $returnValue203;
    panda$core$String* $tmp204;
    panda$core$String* $tmp205;
    panda$core$String* $tmp206;
    panda$core$String* $tmp207;
    panda$core$String* $tmp208;
    panda$core$String* $tmp209;
    panda$core$String* $tmp218;
    panda$core$String* $tmp219;
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp210 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        $tmp209 = $tmp210;
        panda$core$String* $tmp211 = panda$core$String$convert$R$panda$core$String($tmp209);
        $tmp208 = $tmp211;
        panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp208, &$s212);
        $tmp207 = $tmp213;
        panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp207, ((panda$core$Object*) self->body));
        $tmp206 = $tmp214;
        panda$core$String* $tmp216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, &$s215);
        $tmp205 = $tmp216;
        $tmp204 = $tmp205;
        $returnValue203 = $tmp204;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
        return $returnValue203;
    }
    }
    panda$core$String* $tmp220 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    $tmp219 = $tmp220;
    $tmp218 = $tmp219;
    $returnValue203 = $tmp218;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp218));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
    return $returnValue203;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    int $tmp224;
    {
    }
    $tmp224 = -1;
    goto $l222;
    $l222:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp224) {
        case -1: goto $l225;
    }
    $l225:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameters));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returnType));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->body));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiledBody));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->overridden));
}

