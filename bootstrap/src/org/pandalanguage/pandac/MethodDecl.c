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
#include "panda/core/Weak.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String} };

typedef panda$collections$Iterator* (*$fn105)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn112)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn123)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn157)(panda$core$Weak*);
typedef panda$core$Object* (*$fn177)(panda$core$Weak*);
typedef panda$core$Object* (*$fn196)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$MethodDecl$Kind p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, panda$collections$ImmutableArray* p_body) {
    panda$collections$ImmutableArray* $tmp2;
    org$pandalanguage$pandac$MethodDecl* $tmp3;
    panda$core$Weak* $tmp4;
    panda$core$Weak* $tmp5;
    panda$core$Weak* $tmp6;
    panda$core$String* $tmp8;
    panda$core$String* $tmp9;
    org$pandalanguage$pandac$Annotations* $tmp10;
    org$pandalanguage$pandac$Annotations* $tmp11;
    panda$collections$Array* $tmp12;
    panda$collections$Array* $tmp13;
    org$pandalanguage$pandac$Type* $tmp14;
    org$pandalanguage$pandac$Type* $tmp15;
    panda$collections$ImmutableArray* $tmp16;
    panda$collections$ImmutableArray* $tmp17;
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
        panda$core$Weak* $tmp7 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp7, ((panda$core$Object*) p_owner));
        $tmp6 = $tmp7;
        $tmp5 = $tmp6;
        self->owner = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    {
        $tmp8 = self->doccomment;
        $tmp9 = p_doccomment;
        self->doccomment = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
    {
        $tmp10 = self->annotations;
        $tmp11 = p_annotations;
        self->annotations = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    }
    self->methodKind = p_methodKind;
    {
        $tmp12 = self->parameters;
        $tmp13 = p_parameters;
        self->parameters = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    {
        $tmp14 = self->returnType;
        $tmp15 = p_returnType;
        self->returnType = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    {
        $tmp16 = self->body;
        $tmp17 = p_body;
        self->body = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    }
    self->resolved = ((panda$core$Bit) { false });
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $finallyReturn17;
    panda$core$Bit $tmp19 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $finallyReturn17 = $tmp19;
    return $finallyReturn17;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $finallyReturn20;
    panda$core$Bit $tmp24 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp25 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp24);
    bool $tmp23 = $tmp25.value;
    if (!$tmp23) goto $l26;
    panda$core$Bit $tmp27 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $tmp23 = $tmp27.value;
    $l26:;
    panda$core$Bit $tmp28 = { $tmp23 };
    bool $tmp22 = $tmp28.value;
    if (!$tmp22) goto $l29;
    panda$core$Bit $tmp30 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp31 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp30);
    $tmp22 = $tmp31.value;
    $l29:;
    panda$core$Bit $tmp32 = { $tmp22 };
    $finallyReturn20 = $tmp32;
    return $finallyReturn20;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $finallyReturn33;
    panda$core$Bit $tmp35 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp36 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp35);
    $finallyReturn33 = $tmp36;
    return $finallyReturn33;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Bit $finallyReturn41;
    panda$core$Bit $finallyReturn44;
    panda$core$Bit $finallyReturn49;
    panda$core$Range$LTpanda$core$Int64$GT $tmp52;
    panda$core$Object* $tmp67;
    panda$core$Object* $tmp69;
    panda$core$Bit $finallyReturn71;
    panda$core$Bit $finallyReturn79;
    bool $tmp38 = self->resolved.value;
    if (!$tmp38) goto $l39;
    $tmp38 = p_other->resolved.value;
    $l39:;
    panda$core$Bit $tmp40 = { $tmp38 };
    PANDA_ASSERT($tmp40.value);
    panda$core$Bit $tmp41 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp41.value) {
    {
        $finallyReturn41 = ((panda$core$Bit) { false });
        return $finallyReturn41;
    }
    }
    panda$core$Bit $tmp44 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp44.value) {
    {
        $finallyReturn44 = ((panda$core$Bit) { false });
        return $finallyReturn44;
    }
    }
    panda$core$Int64 $tmp47 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp48 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp49 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp47, $tmp48);
    if ($tmp49.value) {
    {
        $finallyReturn49 = ((panda$core$Bit) { false });
        return $finallyReturn49;
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
            $finallyReturn71 = ((panda$core$Bit) { false });
            return $finallyReturn71;
        }
        }
    }
    $l62:;
    int64_t $tmp75 = $tmp57 - i54.value;
    if ($tmp58) goto $l76; else goto $l77;
    $l76:;
    if ((uint64_t) $tmp75 >= 1) goto $l74; else goto $l61;
    $l77:;
    if ((uint64_t) $tmp75 > 1) goto $l74; else goto $l61;
    $l74:;
    i54.value += 1;
    goto $l59;
    $l61:;
    $finallyReturn79 = ((panda$core$Bit) { true });
    return $finallyReturn79;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result85 = NULL;
    panda$core$MutableString* $tmp86;
    panda$core$MutableString* $tmp87;
    panda$core$String* $tmp89;
    panda$core$String* $tmp90;
    panda$core$String* separator94 = NULL;
    panda$core$String* $tmp95;
    panda$collections$Iterator* Iter$100$9100 = NULL;
    panda$collections$Iterator* $tmp101;
    panda$collections$Iterator* $tmp102;
    org$pandalanguage$pandac$MethodDecl$Parameter* p118 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp119;
    panda$core$Object* $tmp120;
    panda$core$String* $tmp125;
    panda$core$String* $tmp126;
    panda$core$Char8 $tmp130;
    org$pandalanguage$pandac$Type* $tmp131;
    panda$core$String* $tmp134;
    panda$core$String* $tmp135;
    panda$core$String* $finallyReturn139;
    panda$core$String* $tmp141;
    panda$core$String* $tmp142;
    int $tmp84;
    {
        panda$core$MutableString* $tmp88 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp91 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp90 = $tmp91;
        panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp90, &$s92);
        $tmp89 = $tmp93;
        panda$core$MutableString$init$panda$core$String($tmp88, $tmp89);
        $tmp87 = $tmp88;
        $tmp86 = $tmp87;
        result85 = $tmp86;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
        $tmp95 = &$s96;
        separator94 = $tmp95;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
        {
            int $tmp99;
            {
                ITable* $tmp103 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
                while ($tmp103->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp103 = $tmp103->next;
                }
                $fn105 $tmp104 = $tmp103->methods[0];
                panda$collections$Iterator* $tmp106 = $tmp104(((panda$collections$Iterable*) self->parameters));
                $tmp102 = $tmp106;
                $tmp101 = $tmp102;
                Iter$100$9100 = $tmp101;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
                $l107:;
                ITable* $tmp110 = Iter$100$9100->$class->itable;
                while ($tmp110->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp110 = $tmp110->next;
                }
                $fn112 $tmp111 = $tmp110->methods[0];
                panda$core$Bit $tmp113 = $tmp111(Iter$100$9100);
                panda$core$Bit $tmp114 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp113);
                bool $tmp109 = $tmp114.value;
                if (!$tmp109) goto $l108;
                {
                    int $tmp117;
                    {
                        ITable* $tmp121 = Iter$100$9100->$class->itable;
                        while ($tmp121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp121 = $tmp121->next;
                        }
                        $fn123 $tmp122 = $tmp121->methods[1];
                        panda$core$Object* $tmp124 = $tmp122(Iter$100$9100);
                        $tmp120 = $tmp124;
                        $tmp119 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp120);
                        p118 = $tmp119;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
                        panda$core$Panda$unref$panda$core$Object($tmp120);
                        panda$core$MutableString$append$panda$core$String(result85, separator94);
                        panda$core$MutableString$append$panda$core$Object(result85, ((panda$core$Object*) p118));
                        {
                            $tmp125 = separator94;
                            $tmp126 = &$s127;
                            separator94 = $tmp126;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp125));
                        }
                    }
                    $tmp117 = -1;
                    goto $l115;
                    $l115:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p118));
                    p118 = NULL;
                    switch ($tmp117) {
                        case -1: goto $l128;
                    }
                    $l128:;
                }
                goto $l107;
                $l108:;
            }
            $tmp99 = -1;
            goto $l97;
            $l97:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$100$9100));
            Iter$100$9100 = NULL;
            switch ($tmp99) {
                case -1: goto $l129;
            }
            $l129:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp130, ((panda$core$UInt8) { 41 }));
        panda$core$MutableString$append$panda$core$Char8(result85, $tmp130);
        org$pandalanguage$pandac$Type* $tmp132 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp131 = $tmp132;
        panda$core$Bit $tmp133 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp131);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
        if ($tmp133.value) {
        {
            panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s136, ((panda$core$Object*) self->returnType));
            $tmp135 = $tmp137;
            panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp135, &$s138);
            $tmp134 = $tmp139;
            panda$core$MutableString$append$panda$core$String(result85, $tmp134);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp135));
        }
        }
        panda$core$String* $tmp143 = panda$core$MutableString$finish$R$panda$core$String(result85);
        $tmp142 = $tmp143;
        $tmp141 = $tmp142;
        $finallyReturn139 = $tmp141;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp141));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
        $tmp84 = 0;
        goto $l82;
        $l144:;
        return $finallyReturn139;
    }
    $l82:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result85));
    result85 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator94));
    separator94 = NULL;
    switch ($tmp84) {
        case 0: goto $l144;
    }
    $l146:;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$113_9147;
    panda$core$String* $finallyReturn148;
    panda$core$String* $tmp150;
    panda$core$String* $tmp151;
    panda$core$String* $tmp152;
    panda$core$String* $tmp153;
    panda$core$String* $tmp154;
    panda$core$Object* $tmp156;
    panda$core$String* $tmp162;
    panda$core$String* $finallyReturn168;
    panda$core$String* $tmp170;
    panda$core$String* $tmp171;
    panda$core$String* $tmp172;
    panda$core$String* $tmp173;
    panda$core$String* $tmp174;
    panda$core$Object* $tmp176;
    panda$core$String* $tmp182;
    panda$core$String* $finallyReturn188;
    panda$core$String* $tmp190;
    panda$core$String* $tmp191;
    panda$core$String* $tmp192;
    panda$core$String* $tmp193;
    panda$core$String* $tmp194;
    panda$core$Object* $tmp195;
    panda$core$String* $tmp201;
    {
        $match$113_9147 = self->methodKind;
        panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_9147.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp148.value) {
        {
            panda$core$Object* $tmp158 = (($fn157) self->owner->$class->vtable[2])(self->owner);
            $tmp156 = $tmp158;
            panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s155, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp156))->name);
            $tmp154 = $tmp159;
            panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp154, &$s160);
            $tmp153 = $tmp161;
            panda$core$String* $tmp163 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp162 = $tmp163;
            panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp153, $tmp162);
            $tmp152 = $tmp164;
            panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp152, &$s165);
            $tmp151 = $tmp166;
            $tmp150 = $tmp151;
            $finallyReturn148 = $tmp150;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
            panda$core$Panda$unref$panda$core$Object($tmp156);
            return $finallyReturn148;
        }
        }
        else {
        panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_9147.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp168.value) {
        {
            panda$core$Object* $tmp178 = (($fn177) self->owner->$class->vtable[2])(self->owner);
            $tmp176 = $tmp178;
            panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s175, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp176))->name);
            $tmp174 = $tmp179;
            panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp174, &$s180);
            $tmp173 = $tmp181;
            panda$core$String* $tmp183 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp182 = $tmp183;
            panda$core$String* $tmp184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, $tmp182);
            $tmp172 = $tmp184;
            panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp172, &$s185);
            $tmp171 = $tmp186;
            $tmp170 = $tmp171;
            $finallyReturn168 = $tmp170;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
            panda$core$Panda$unref$panda$core$Object($tmp176);
            return $finallyReturn168;
        }
        }
        else {
        panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_9147.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp188.value) {
        {
            panda$core$Object* $tmp197 = (($fn196) self->owner->$class->vtable[2])(self->owner);
            $tmp195 = $tmp197;
            panda$core$String* $tmp198 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp195))->name);
            $tmp194 = $tmp198;
            panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, &$s199);
            $tmp193 = $tmp200;
            panda$core$String* $tmp202 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            $tmp201 = $tmp202;
            panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, $tmp201);
            $tmp192 = $tmp203;
            panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, &$s204);
            $tmp191 = $tmp205;
            $tmp190 = $tmp191;
            $finallyReturn188 = $tmp190;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp190));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
            panda$core$Panda$unref$panda$core$Object($tmp195);
            return $finallyReturn188;
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$String* $finallyReturn206;
    panda$core$String* $tmp208;
    panda$core$String* $tmp209;
    panda$core$String* $tmp210;
    panda$core$String* $tmp211;
    panda$core$String* $tmp212;
    panda$core$String* $tmp213;
    panda$core$String* $finallyReturn221;
    panda$core$String* $tmp223;
    panda$core$String* $tmp224;
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp214 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        $tmp213 = $tmp214;
        panda$core$String* $tmp215 = panda$core$String$convert$R$panda$core$String($tmp213);
        $tmp212 = $tmp215;
        panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp212, &$s216);
        $tmp211 = $tmp217;
        panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp211, ((panda$core$Object*) self->body));
        $tmp210 = $tmp218;
        panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp210, &$s219);
        $tmp209 = $tmp220;
        $tmp208 = $tmp209;
        $finallyReturn206 = $tmp208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp213));
        return $finallyReturn206;
    }
    }
    panda$core$String* $tmp225 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    $tmp224 = $tmp225;
    $tmp223 = $tmp224;
    $finallyReturn221 = $tmp223;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
    return $finallyReturn221;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    int $tmp229;
    {
    }
    $tmp229 = -1;
    goto $l227;
    $l227:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp229) {
        case -1: goto $l230;
    }
    $l230:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameters));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returnType));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->body));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiledBody));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->overridden));
}

