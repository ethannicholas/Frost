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
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/Object.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Panda.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String} };

typedef panda$collections$Iterator* (*$fn59)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn65)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn71)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$MethodDecl$Kind p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, panda$collections$ImmutableArray* p_body) {
    self->overridden = NULL;
    self->compiledBody = NULL;
    self->overrideKnown = ((panda$core$Bit) { false });
    self->overridden = NULL;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 204 }), p_position, p_name);
    {
        self->owner = p_owner;
    }
    {
        self->doccomment = p_doccomment;
    }
    {
        self->annotations = p_annotations;
    }
    self->methodKind = p_methodKind;
    {
        self->parameters = p_parameters;
    }
    {
        self->returnType = p_returnType;
    }
    {
        self->body = p_body;
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
    panda$core$String* separator54;
    panda$collections$Iterator* p$Iter56;
    org$pandalanguage$pandac$MethodDecl$Parameter* p68;
    panda$core$Char8 $tmp74;
    panda$core$String* tmp181;
    panda$core$MutableString* $tmp49 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp49->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp49->refCount.value = 1;
    panda$core$String* $tmp51 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp53 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp51, &$s52);
    panda$core$MutableString$init$panda$core$String($tmp49, $tmp53);
    result48 = $tmp49;
    separator54 = &$s55;
    {
        ITable* $tmp57 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp57->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp57 = $tmp57->next;
        }
        $fn59 $tmp58 = $tmp57->methods[0];
        panda$collections$Iterator* $tmp60 = $tmp58(((panda$collections$Iterable*) self->parameters));
        p$Iter56 = $tmp60;
        $l61:;
        ITable* $tmp63 = p$Iter56->$class->itable;
        while ($tmp63->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp63 = $tmp63->next;
        }
        $fn65 $tmp64 = $tmp63->methods[0];
        panda$core$Bit $tmp66 = $tmp64(p$Iter56);
        panda$core$Bit $tmp67 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp66);
        if (!$tmp67.value) goto $l62;
        {
            ITable* $tmp69 = p$Iter56->$class->itable;
            while ($tmp69->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp69 = $tmp69->next;
            }
            $fn71 $tmp70 = $tmp69->methods[1];
            panda$core$Object* $tmp72 = $tmp70(p$Iter56);
            p68 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp72);
            panda$core$MutableString$append$panda$core$String(result48, separator54);
            panda$core$MutableString$append$panda$core$Object(result48, ((panda$core$Object*) p68));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator54));
                separator54 = &$s73;
            }
        }
        goto $l61;
        $l62:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp60));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp74, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(result48, $tmp74);
    org$pandalanguage$pandac$Type* $tmp75 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp76 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp75);
    if ($tmp76.value) {
    {
        panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s77, ((panda$core$Object*) self->returnType));
        panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp78, &$s79);
        panda$core$MutableString$append$panda$core$String(result48, $tmp80);
    }
    }
    {
        panda$core$String* $tmp82 = panda$core$MutableString$finish$R$panda$core$String(result48);
        tmp181 = $tmp82;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator54));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result48));
        }
        return tmp181;
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$113_983;
    {
        $match$113_983 = self->methodKind;
        panda$core$Bit $tmp84 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_983.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp84.value) {
        {
            panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s85, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp86, &$s87);
            panda$core$String* $tmp89 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp90 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp88, $tmp89);
            panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp90, &$s91);
            return $tmp92;
        }
        }
        else {
        panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_983.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp93.value) {
        {
            panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s94, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp95, &$s96);
            panda$core$String* $tmp98 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp99 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp97, $tmp98);
            panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp99, &$s100);
            return $tmp101;
        }
        }
        else {
        panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_983.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp102.value) {
        {
            panda$core$String* $tmp103 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp103, &$s104);
            panda$core$String* $tmp106 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp105, $tmp106);
            panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp107, &$s108);
            return $tmp109;
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp110 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        panda$core$String* $tmp111 = panda$core$String$convert$R$panda$core$String($tmp110);
        panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp111, &$s112);
        panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp113, ((panda$core$Object*) self->body));
        panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp114, &$s115);
        return $tmp116;
    }
    }
    panda$core$String* $tmp117 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    return $tmp117;
}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->annotations));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameters));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returnType));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->body));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiledBody));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->overridden));
}

