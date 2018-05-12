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

typedef panda$collections$Iterator* (*$fn103)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn110)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn121)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$MethodDecl$Kind p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, panda$collections$ImmutableArray* p_body) {
    panda$collections$ImmutableArray* $tmp2;
    org$pandalanguage$pandac$MethodDecl* $tmp3;
    org$pandalanguage$pandac$ClassDecl* $tmp4;
    org$pandalanguage$pandac$ClassDecl* $tmp5;
    panda$core$String* $tmp6;
    panda$core$String* $tmp7;
    org$pandalanguage$pandac$Annotations* $tmp8;
    org$pandalanguage$pandac$Annotations* $tmp9;
    panda$collections$Array* $tmp10;
    panda$collections$Array* $tmp11;
    org$pandalanguage$pandac$Type* $tmp12;
    org$pandalanguage$pandac$Type* $tmp13;
    panda$collections$ImmutableArray* $tmp14;
    panda$collections$ImmutableArray* $tmp15;
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
    $tmp3 = NULL;
    self->overridden = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 204 }), p_position, p_name);
    {
        $tmp4 = self->owner;
        $tmp5 = p_owner;
        self->owner = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    {
        $tmp6 = self->doccomment;
        $tmp7 = p_doccomment;
        self->doccomment = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    }
    {
        $tmp8 = self->annotations;
        $tmp9 = p_annotations;
        self->annotations = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
    self->methodKind = p_methodKind;
    {
        $tmp10 = self->parameters;
        $tmp11 = p_parameters;
        self->parameters = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    }
    {
        $tmp12 = self->returnType;
        $tmp13 = p_returnType;
        self->returnType = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    {
        $tmp14 = self->body;
        $tmp15 = p_body;
        self->body = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    self->resolved = ((panda$core$Bit) { false });
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $finallyReturn15;
    panda$core$Bit $tmp17 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $finallyReturn15 = $tmp17;
    return $finallyReturn15;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $finallyReturn18;
    panda$core$Bit $tmp22 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp23 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp22);
    bool $tmp21 = $tmp23.value;
    if (!$tmp21) goto $l24;
    panda$core$Bit $tmp25 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $tmp21 = $tmp25.value;
    $l24:;
    panda$core$Bit $tmp26 = { $tmp21 };
    bool $tmp20 = $tmp26.value;
    if (!$tmp20) goto $l27;
    panda$core$Bit $tmp28 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp29 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp28);
    $tmp20 = $tmp29.value;
    $l27:;
    panda$core$Bit $tmp30 = { $tmp20 };
    $finallyReturn18 = $tmp30;
    return $finallyReturn18;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $finallyReturn31;
    panda$core$Bit $tmp33 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp34 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp33);
    $finallyReturn31 = $tmp34;
    return $finallyReturn31;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Bit $finallyReturn39;
    panda$core$Bit $finallyReturn42;
    panda$core$Bit $finallyReturn47;
    panda$core$Range$LTpanda$core$Int64$GT $tmp50;
    panda$core$Object* $tmp65;
    panda$core$Object* $tmp67;
    panda$core$Bit $finallyReturn69;
    panda$core$Bit $finallyReturn77;
    bool $tmp36 = self->resolved.value;
    if (!$tmp36) goto $l37;
    $tmp36 = p_other->resolved.value;
    $l37:;
    panda$core$Bit $tmp38 = { $tmp36 };
    PANDA_ASSERT($tmp38.value);
    panda$core$Bit $tmp39 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp39.value) {
    {
        $finallyReturn39 = ((panda$core$Bit) { false });
        return $finallyReturn39;
    }
    }
    panda$core$Bit $tmp42 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp42.value) {
    {
        $finallyReturn42 = ((panda$core$Bit) { false });
        return $finallyReturn42;
    }
    }
    panda$core$Int64 $tmp45 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp46 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp47 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp45, $tmp46);
    if ($tmp47.value) {
    {
        $finallyReturn47 = ((panda$core$Bit) { false });
        return $finallyReturn47;
    }
    }
    panda$core$Int64 $tmp51 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp50, ((panda$core$Int64) { 0 }), $tmp51, ((panda$core$Bit) { false }));
    int64_t $tmp53 = $tmp50.min.value;
    panda$core$Int64 i52 = { $tmp53 };
    int64_t $tmp55 = $tmp50.max.value;
    bool $tmp56 = $tmp50.inclusive.value;
    if ($tmp56) goto $l63; else goto $l64;
    $l63:;
    if ($tmp53 <= $tmp55) goto $l57; else goto $l59;
    $l64:;
    if ($tmp53 < $tmp55) goto $l57; else goto $l59;
    $l57:;
    {
        panda$core$Object* $tmp66 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i52);
        $tmp65 = $tmp66;
        panda$core$Object* $tmp68 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i52);
        $tmp67 = $tmp68;
        panda$core$Bit $tmp69 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp65)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp67)->type);
        panda$core$Panda$unref$panda$core$Object($tmp67);
        panda$core$Panda$unref$panda$core$Object($tmp65);
        if ($tmp69.value) {
        {
            $finallyReturn69 = ((panda$core$Bit) { false });
            return $finallyReturn69;
        }
        }
    }
    $l60:;
    int64_t $tmp73 = $tmp55 - i52.value;
    if ($tmp56) goto $l74; else goto $l75;
    $l74:;
    if ((uint64_t) $tmp73 >= 1) goto $l72; else goto $l59;
    $l75:;
    if ((uint64_t) $tmp73 > 1) goto $l72; else goto $l59;
    $l72:;
    i52.value += 1;
    goto $l57;
    $l59:;
    $finallyReturn77 = ((panda$core$Bit) { true });
    return $finallyReturn77;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result83 = NULL;
    panda$core$MutableString* $tmp84;
    panda$core$MutableString* $tmp85;
    panda$core$String* $tmp87;
    panda$core$String* $tmp88;
    panda$core$String* separator92 = NULL;
    panda$core$String* $tmp93;
    panda$collections$Iterator* Iter$99$998 = NULL;
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
    panda$core$String* $finallyReturn137;
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
                Iter$99$998 = $tmp99;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
                $l105:;
                ITable* $tmp108 = Iter$99$998->$class->itable;
                while ($tmp108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp108 = $tmp108->next;
                }
                $fn110 $tmp109 = $tmp108->methods[0];
                panda$core$Bit $tmp111 = $tmp109(Iter$99$998);
                panda$core$Bit $tmp112 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp111);
                bool $tmp107 = $tmp112.value;
                if (!$tmp107) goto $l106;
                {
                    int $tmp115;
                    {
                        ITable* $tmp119 = Iter$99$998->$class->itable;
                        while ($tmp119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp119 = $tmp119->next;
                        }
                        $fn121 $tmp120 = $tmp119->methods[1];
                        panda$core$Object* $tmp122 = $tmp120(Iter$99$998);
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$99$998));
            Iter$99$998 = NULL;
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
        $finallyReturn137 = $tmp139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
        $tmp82 = 0;
        goto $l80;
        $l142:;
        return $finallyReturn137;
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
    org$pandalanguage$pandac$MethodDecl$Kind $match$112_9145;
    panda$core$String* $finallyReturn146;
    panda$core$String* $tmp148;
    panda$core$String* $tmp149;
    panda$core$String* $tmp150;
    panda$core$String* $tmp151;
    panda$core$String* $tmp152;
    panda$core$String* $tmp157;
    panda$core$String* $finallyReturn163;
    panda$core$String* $tmp165;
    panda$core$String* $tmp166;
    panda$core$String* $tmp167;
    panda$core$String* $tmp168;
    panda$core$String* $tmp169;
    panda$core$String* $tmp174;
    panda$core$String* $finallyReturn180;
    panda$core$String* $tmp182;
    panda$core$String* $tmp183;
    panda$core$String* $tmp184;
    panda$core$String* $tmp185;
    panda$core$String* $tmp186;
    panda$core$String* $tmp190;
    {
        $match$112_9145 = self->methodKind;
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9145.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp146.value) {
        {
            panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s153, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            $tmp152 = $tmp154;
            panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp152, &$s155);
            $tmp151 = $tmp156;
            panda$core$String* $tmp158 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp157 = $tmp158;
            panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, $tmp157);
            $tmp150 = $tmp159;
            panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp150, &$s160);
            $tmp149 = $tmp161;
            $tmp148 = $tmp149;
            $finallyReturn146 = $tmp148;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
            return $finallyReturn146;
        }
        }
        else {
        panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9145.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp163.value) {
        {
            panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s170, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            $tmp169 = $tmp171;
            panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp169, &$s172);
            $tmp168 = $tmp173;
            panda$core$String* $tmp175 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp174 = $tmp175;
            panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp168, $tmp174);
            $tmp167 = $tmp176;
            panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp167, &$s177);
            $tmp166 = $tmp178;
            $tmp165 = $tmp166;
            $finallyReturn163 = $tmp165;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp167));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
            return $finallyReturn163;
        }
        }
        else {
        panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9145.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp180.value) {
        {
            panda$core$String* $tmp187 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            $tmp186 = $tmp187;
            panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp186, &$s188);
            $tmp185 = $tmp189;
            panda$core$String* $tmp191 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp190 = $tmp191;
            panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp185, $tmp190);
            $tmp184 = $tmp192;
            panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp184, &$s193);
            $tmp183 = $tmp194;
            $tmp182 = $tmp183;
            $finallyReturn180 = $tmp182;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
            return $finallyReturn180;
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$String* $finallyReturn195;
    panda$core$String* $tmp197;
    panda$core$String* $tmp198;
    panda$core$String* $tmp199;
    panda$core$String* $tmp200;
    panda$core$String* $tmp201;
    panda$core$String* $tmp202;
    panda$core$String* $finallyReturn210;
    panda$core$String* $tmp212;
    panda$core$String* $tmp213;
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp203 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        $tmp202 = $tmp203;
        panda$core$String* $tmp204 = panda$core$String$convert$R$panda$core$String($tmp202);
        $tmp201 = $tmp204;
        panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp201, &$s205);
        $tmp200 = $tmp206;
        panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp200, ((panda$core$Object*) self->body));
        $tmp199 = $tmp207;
        panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp199, &$s208);
        $tmp198 = $tmp209;
        $tmp197 = $tmp198;
        $finallyReturn195 = $tmp197;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
        return $finallyReturn195;
    }
    }
    panda$core$String* $tmp214 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    $tmp213 = $tmp214;
    $tmp212 = $tmp213;
    $finallyReturn210 = $tmp212;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp212));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp213));
    return $finallyReturn210;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    int $tmp218;
    {
    }
    $tmp218 = -1;
    goto $l216;
    $l216:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp218) {
        case -1: goto $l219;
    }
    $l219:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameters));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returnType));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->body));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiledBody));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->overridden));
}

