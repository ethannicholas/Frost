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
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String} };

typedef panda$collections$Iterator* (*$fn58)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn64)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn70)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    self->compiledBody = NULL;
    self->overrideKnown = ((panda$core$Bit) { false });
    self->overridden = NULL;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 204 }), p_position, p_name);
    {
        self->owner = p_owner;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    }
    {
        self->doccomment = p_doccomment;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    }
    {
        self->annotations = p_annotations;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    }
    self->methodKind = p_methodKind;
    {
        self->parameters = p_parameters;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameters));
    }
    {
        self->returnType = p_returnType;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returnType));
    }
    {
        self->body = p_body;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->body));
    }
    self->resolved = ((panda$core$Bit) { false });
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $tmp2 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    return $tmp2;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $tmp5 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp6 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5);
    bool $tmp4 = $tmp6.value;
    if (!$tmp4) goto $l7;
    panda$core$Bit $tmp8 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $tmp4 = $tmp8.value;
    $l7:;
    panda$core$Bit $tmp9 = { $tmp4 };
    bool $tmp3 = $tmp9.value;
    if (!$tmp3) goto $l10;
    panda$core$Bit $tmp11 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp12 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp11);
    $tmp3 = $tmp12.value;
    $l10:;
    panda$core$Bit $tmp13 = { $tmp3 };
    return $tmp13;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $tmp14 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp15 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp14);
    return $tmp15;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp24;
    bool $tmp16 = self->resolved.value;
    if (!$tmp16) goto $l17;
    $tmp16 = p_other->resolved.value;
    $l17:;
    panda$core$Bit $tmp18 = { $tmp16 };
    PANDA_ASSERT($tmp18.value);
    panda$core$Bit $tmp19 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp19.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp20 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp20.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp21 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp22 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp23 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp21, $tmp22);
    if ($tmp23.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp25 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp24, ((panda$core$Int64) { 0 }), $tmp25, ((panda$core$Bit) { false }));
    int64_t $tmp27 = $tmp24.min.value;
    panda$core$Int64 i26 = { $tmp27 };
    int64_t $tmp29 = $tmp24.max.value;
    bool $tmp30 = $tmp24.inclusive.value;
    if ($tmp30) goto $l37; else goto $l38;
    $l37:;
    if ($tmp27 <= $tmp29) goto $l31; else goto $l33;
    $l38:;
    if ($tmp27 < $tmp29) goto $l31; else goto $l33;
    $l31:;
    {
        panda$core$Object* $tmp39 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i26);
        panda$core$Object* $tmp40 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i26);
        panda$core$Bit $tmp41 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp39)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp40)->type);
        if ($tmp41.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l34:;
    int64_t $tmp43 = $tmp29 - i26.value;
    if ($tmp30) goto $l44; else goto $l45;
    $l44:;
    if ((uint64_t) $tmp43 >= 1) goto $l42; else goto $l33;
    $l45:;
    if ((uint64_t) $tmp43 > 1) goto $l42; else goto $l33;
    $l42:;
    i26.value += 1;
    goto $l31;
    $l33:;
    return ((panda$core$Bit) { true });
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result48;
    panda$core$String* separator53;
    panda$collections$Iterator* Iter$100$955;
    org$pandalanguage$pandac$MethodDecl$Parameter* p67;
    panda$core$Char8 $tmp73;
    panda$core$String* tmp180;
    panda$core$MutableString* $tmp49 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp50 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, &$s51);
    panda$core$MutableString$init$panda$core$String($tmp49, $tmp52);
    result48 = $tmp49;
    separator53 = &$s54;
    {
        ITable* $tmp56 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp56->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp56 = $tmp56->next;
        }
        $fn58 $tmp57 = $tmp56->methods[0];
        panda$collections$Iterator* $tmp59 = $tmp57(((panda$collections$Iterable*) self->parameters));
        Iter$100$955 = $tmp59;
        $l60:;
        ITable* $tmp62 = Iter$100$955->$class->itable;
        while ($tmp62->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp62 = $tmp62->next;
        }
        $fn64 $tmp63 = $tmp62->methods[0];
        panda$core$Bit $tmp65 = $tmp63(Iter$100$955);
        panda$core$Bit $tmp66 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp65);
        if (!$tmp66.value) goto $l61;
        {
            ITable* $tmp68 = Iter$100$955->$class->itable;
            while ($tmp68->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp68 = $tmp68->next;
            }
            $fn70 $tmp69 = $tmp68->methods[1];
            panda$core$Object* $tmp71 = $tmp69(Iter$100$955);
            p67 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp71);
            panda$core$MutableString$append$panda$core$String(result48, separator53);
            panda$core$MutableString$append$panda$core$Object(result48, ((panda$core$Object*) p67));
            {
                separator53 = &$s72;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator53));
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p67));
        }
        goto $l60;
        $l61:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$100$955));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp73, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(result48, $tmp73);
    org$pandalanguage$pandac$Type* $tmp74 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp75 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp74);
    if ($tmp75.value) {
    {
        panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s76, ((panda$core$Object*) self->returnType));
        panda$core$String* $tmp79 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp77, &$s78);
        panda$core$MutableString$append$panda$core$String(result48, $tmp79);
    }
    }
    {
        panda$core$String* $tmp81 = panda$core$MutableString$finish$R$panda$core$String(result48);
        tmp180 = $tmp81;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator53));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result48));
        }
        return tmp180;
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$113_982;
    {
        $match$113_982 = self->methodKind;
        panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_982.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp83.value) {
        {
            panda$core$String* $tmp85 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s84, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp87 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp85, &$s86);
            panda$core$String* $tmp88 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp87, $tmp88);
            panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp89, &$s90);
            return $tmp91;
        }
        }
        else {
        panda$core$Bit $tmp92 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_982.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp92.value) {
        {
            panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s93, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp94, &$s95);
            panda$core$String* $tmp97 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp96, $tmp97);
            panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp98, &$s99);
            return $tmp100;
        }
        }
        else {
        panda$core$Bit $tmp101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_982.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp101.value) {
        {
            panda$core$String* $tmp102 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp102, &$s103);
            panda$core$String* $tmp105 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp104, $tmp105);
            panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s107);
            return $tmp108;
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp109 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        panda$core$String* $tmp110 = panda$core$String$convert$R$panda$core$String($tmp109);
        panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp110, &$s111);
        panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp112, ((panda$core$Object*) self->body));
        panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp113, &$s114);
        return $tmp115;
    }
    }
    panda$core$String* $tmp116 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    return $tmp116;
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

