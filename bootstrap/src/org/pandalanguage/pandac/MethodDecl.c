#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String} };

typedef panda$collections$Iterator* (*$fn60)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn66)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn72)(panda$collections$Iterator*);

static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$MethodDecl$Kind p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, org$pandalanguage$pandac$ASTNode* p_body) {
    self->compiledBody = NULL;
    self->overrideKnown = ((panda$core$Bit) { false });
    self->overridden = NULL;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 204 }), p_position, p_name);
    self->owner = p_owner;
    self->doccomment = p_doccomment;
    self->annotations = p_annotations;
    self->methodKind = p_methodKind;
    self->parameters = p_parameters;
    self->returnType = p_returnType;
    self->body = p_body;
    self->resolved = ((panda$core$Bit) { false });
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1;
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, $tmp1.$rawValue);
    return $tmp2;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $tmp8;
    panda$core$Bit $tmp5 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp6 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5);
    bool $tmp4 = $tmp6.value;
    if (!$tmp4) goto $l7;
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp8, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp9 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, $tmp8.$rawValue);
    $tmp4 = $tmp9.value;
    $l7:;
    panda$core$Bit $tmp10 = { $tmp4 };
    bool $tmp3 = $tmp10.value;
    if (!$tmp3) goto $l11;
    panda$core$Bit $tmp12 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp13 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp12);
    $tmp3 = $tmp13.value;
    $l11:;
    panda$core$Bit $tmp14 = { $tmp3 };
    return $tmp14;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $tmp15 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp16 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp15);
    return $tmp16;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp25;
    bool $tmp17 = self->resolved.value;
    if (!$tmp17) goto $l18;
    $tmp17 = p_other->resolved.value;
    $l18:;
    panda$core$Bit $tmp19 = { $tmp17 };
    PANDA_ASSERT($tmp19.value);
    panda$core$Bit $tmp20 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp20.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp21 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp21.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp22 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp23 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp24 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp22, $tmp23);
    if ($tmp24.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp26 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp25, ((panda$core$Int64) { 0 }), $tmp26, ((panda$core$Bit) { false }));
    int64_t $tmp28 = $tmp25.min.value;
    panda$core$Int64 i27 = { $tmp28 };
    int64_t $tmp30 = $tmp25.max.value;
    bool $tmp31 = $tmp25.inclusive.value;
    if ($tmp31) goto $l38; else goto $l39;
    $l38:;
    if ($tmp28 <= $tmp30) goto $l32; else goto $l34;
    $l39:;
    if ($tmp28 < $tmp30) goto $l32; else goto $l34;
    $l32:;
    {
        panda$core$Object* $tmp40 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i27);
        panda$core$Object* $tmp41 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i27);
        panda$core$Bit $tmp42 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp40)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp41)->type);
        if ($tmp42.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l35:;
    int64_t $tmp44 = $tmp30 - i27.value;
    if ($tmp31) goto $l45; else goto $l46;
    $l45:;
    if ($tmp44 >= 1) goto $l43; else goto $l34;
    $l46:;
    if ($tmp44 > 1) goto $l43; else goto $l34;
    $l43:;
    i27.value += 1;
    goto $l32;
    $l34:;
    return ((panda$core$Bit) { true });
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result49;
    panda$core$String* separator55;
    panda$collections$Iterator* p$Iter57;
    org$pandalanguage$pandac$MethodDecl$Parameter* p69;
    panda$core$Char8 $tmp75;
    panda$core$MutableString* $tmp50 = (panda$core$MutableString*) malloc(48);
    $tmp50->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp50->refCount.value = 1;
    panda$core$String* $tmp52 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, &$s53);
    panda$core$MutableString$init$panda$core$String($tmp50, $tmp54);
    result49 = $tmp50;
    separator55 = &$s56;
    {
        ITable* $tmp58 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp58->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp58 = $tmp58->next;
        }
        $fn60 $tmp59 = $tmp58->methods[0];
        panda$collections$Iterator* $tmp61 = $tmp59(((panda$collections$Iterable*) self->parameters));
        p$Iter57 = $tmp61;
        $l62:;
        ITable* $tmp64 = p$Iter57->$class->itable;
        while ($tmp64->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp64 = $tmp64->next;
        }
        $fn66 $tmp65 = $tmp64->methods[0];
        panda$core$Bit $tmp67 = $tmp65(p$Iter57);
        panda$core$Bit $tmp68 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp67);
        if (!$tmp68.value) goto $l63;
        {
            ITable* $tmp70 = p$Iter57->$class->itable;
            while ($tmp70->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp70 = $tmp70->next;
            }
            $fn72 $tmp71 = $tmp70->methods[1];
            panda$core$Object* $tmp73 = $tmp71(p$Iter57);
            p69 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp73);
            panda$core$MutableString$append$panda$core$String(result49, separator55);
            panda$core$MutableString$append$panda$core$Object(result49, ((panda$core$Object*) p69));
            separator55 = &$s74;
        }
        goto $l62;
        $l63:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp75, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(result49, $tmp75);
    org$pandalanguage$pandac$Type* $tmp76 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp77 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp76);
    if ($tmp77.value) {
    {
        panda$core$String* $tmp79 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s78, ((panda$core$Object*) self->returnType));
        panda$core$String* $tmp81 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp79, &$s80);
        panda$core$MutableString$append$panda$core$String(result49, $tmp81);
    }
    }
    panda$core$String* $tmp82 = panda$core$MutableString$finish$R$panda$core$String(result49);
    return $tmp82;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$112_983;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp84;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp94;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp104;
    {
        $match$112_983 = self->methodKind;
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp84, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_983.$rawValue, $tmp84.$rawValue);
        if ($tmp85.value) {
        {
            panda$core$String* $tmp87 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s86, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp87, &$s88);
            panda$core$String* $tmp90 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp89, $tmp90);
            panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp91, &$s92);
            return $tmp93;
        }
        }
        else {
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp94, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp95 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_983.$rawValue, $tmp94.$rawValue);
        if ($tmp95.value) {
        {
            panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s96, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp99 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp97, &$s98);
            panda$core$String* $tmp100 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp99, $tmp100);
            panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s102);
            return $tmp103;
        }
        }
        else {
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp104, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_983.$rawValue, $tmp104.$rawValue);
        if ($tmp105.value) {
        {
            panda$core$String* $tmp106 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s107);
            panda$core$String* $tmp109 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, $tmp109);
            panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp110, &$s111);
            return $tmp112;
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp113 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        panda$core$String* $tmp114 = panda$core$String$convert$R$panda$core$String($tmp113);
        panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp114, &$s115);
        panda$core$String* $tmp117 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp116, ((panda$core$Object*) self->body));
        panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp117, &$s118);
        return $tmp119;
    }
    }
    panda$core$String* $tmp120 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    return $tmp120;
}

