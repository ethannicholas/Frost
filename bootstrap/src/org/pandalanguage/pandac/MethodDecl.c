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
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String} };

typedef panda$collections$Iterator* (*$fn66)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn72)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn78)(panda$collections$Iterator*);

static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$MethodDecl$Kind p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, panda$collections$ImmutableArray* p_body) {
    self->overridden = NULL;
    self->compiledBody = NULL;
    self->overrideKnown = ((panda$core$Bit) { false });
    self->overridden = NULL;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 204 }), p_position, p_name);
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_owner));
        self->owner = ((org$pandalanguage$pandac$ClassDecl*) $tmp1);
    }
    {
        panda$core$Object* $tmp2 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_doccomment));
        self->doccomment = ((panda$core$String*) $tmp2);
    }
    {
        panda$core$Object* $tmp3 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_annotations));
        self->annotations = ((org$pandalanguage$pandac$Annotations*) $tmp3);
    }
    self->methodKind = p_methodKind;
    {
        panda$core$Object* $tmp4 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_parameters));
        self->parameters = ((panda$collections$Array*) $tmp4);
    }
    {
        panda$core$Object* $tmp5 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_returnType));
        self->returnType = ((org$pandalanguage$pandac$Type*) $tmp5);
    }
    {
        panda$core$Object* $tmp6 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_body));
        self->body = ((panda$collections$ImmutableArray*) $tmp6);
    }
    self->resolved = ((panda$core$Bit) { false });
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $tmp7 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    return $tmp7;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $tmp10 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp11 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp10);
    bool $tmp9 = $tmp11.value;
    if (!$tmp9) goto $l12;
    panda$core$Bit $tmp13 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
    $tmp9 = $tmp13.value;
    $l12:;
    panda$core$Bit $tmp14 = { $tmp9 };
    bool $tmp8 = $tmp14.value;
    if (!$tmp8) goto $l15;
    panda$core$Bit $tmp16 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp17 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp16);
    $tmp8 = $tmp17.value;
    $l15:;
    panda$core$Bit $tmp18 = { $tmp8 };
    return $tmp18;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $tmp19 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp20 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp19);
    return $tmp20;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp29;
    bool $tmp21 = self->resolved.value;
    if (!$tmp21) goto $l22;
    $tmp21 = p_other->resolved.value;
    $l22:;
    panda$core$Bit $tmp23 = { $tmp21 };
    PANDA_ASSERT($tmp23.value);
    panda$core$Bit $tmp24 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp24.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp25 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp25.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp26 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp27 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp28 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp26, $tmp27);
    if ($tmp28.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp30 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp29, ((panda$core$Int64) { 0 }), $tmp30, ((panda$core$Bit) { false }));
    int64_t $tmp32 = $tmp29.min.value;
    panda$core$Int64 i31 = { $tmp32 };
    int64_t $tmp34 = $tmp29.max.value;
    bool $tmp35 = $tmp29.inclusive.value;
    if ($tmp35) goto $l42; else goto $l43;
    $l42:;
    if ($tmp32 <= $tmp34) goto $l36; else goto $l38;
    $l43:;
    if ($tmp32 < $tmp34) goto $l36; else goto $l38;
    $l36:;
    {
        panda$core$Object* $tmp44 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i31);
        panda$core$Object* $tmp45 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i31);
        panda$core$Bit $tmp46 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp44)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp45)->type);
        if ($tmp46.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l39:;
    int64_t $tmp48 = $tmp34 - i31.value;
    if ($tmp35) goto $l49; else goto $l50;
    $l49:;
    if ((uint64_t) $tmp48 >= 1) goto $l47; else goto $l38;
    $l50:;
    if ((uint64_t) $tmp48 > 1) goto $l47; else goto $l38;
    $l47:;
    i31.value += 1;
    goto $l36;
    $l38:;
    return ((panda$core$Bit) { true });
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result53;
    panda$core$String* separator60;
    panda$collections$Iterator* p$Iter63;
    org$pandalanguage$pandac$MethodDecl$Parameter* p75;
    panda$core$Char8 $tmp82;
    panda$core$MutableString* $tmp54 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp54->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp54->refCount.value = 1;
    panda$core$String* $tmp56 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp56, &$s57);
    panda$core$MutableString$init$panda$core$String($tmp54, $tmp58);
    panda$core$Object* $tmp59 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp54));
    result53 = ((panda$core$MutableString*) $tmp59);
    panda$core$Object* $tmp62 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s61));
    separator60 = ((panda$core$String*) $tmp62);
    {
        ITable* $tmp64 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp64->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp64 = $tmp64->next;
        }
        $fn66 $tmp65 = $tmp64->methods[0];
        panda$collections$Iterator* $tmp67 = $tmp65(((panda$collections$Iterable*) self->parameters));
        p$Iter63 = $tmp67;
        $l68:;
        ITable* $tmp70 = p$Iter63->$class->itable;
        while ($tmp70->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp70 = $tmp70->next;
        }
        $fn72 $tmp71 = $tmp70->methods[0];
        panda$core$Bit $tmp73 = $tmp71(p$Iter63);
        panda$core$Bit $tmp74 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp73);
        if (!$tmp74.value) goto $l69;
        {
            ITable* $tmp76 = p$Iter63->$class->itable;
            while ($tmp76->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp76 = $tmp76->next;
            }
            $fn78 $tmp77 = $tmp76->methods[1];
            panda$core$Object* $tmp79 = $tmp77(p$Iter63);
            p75 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp79);
            panda$core$MutableString$append$panda$core$String(result53, separator60);
            panda$core$MutableString$append$panda$core$Object(result53, ((panda$core$Object*) p75));
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator60));
                panda$core$Object* $tmp81 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s80));
                separator60 = ((panda$core$String*) $tmp81);
            }
        }
        goto $l68;
        $l69:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp82, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(result53, $tmp82);
    org$pandalanguage$pandac$Type* $tmp83 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp84 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp83);
    if ($tmp84.value) {
    {
        panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s85, ((panda$core$Object*) self->returnType));
        panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp86, &$s87);
        panda$core$MutableString$append$panda$core$String(result53, $tmp88);
    }
    }
    panda$core$String* $tmp89 = panda$core$MutableString$finish$R$panda$core$String(result53);
    return $tmp89;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    org$pandalanguage$pandac$MethodDecl$Kind $match$113_990;
    {
        $match$113_990 = self->methodKind;
        panda$core$Bit $tmp91 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_990.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp91.value) {
        {
            panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s92, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp93, &$s94);
            panda$core$String* $tmp96 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp95, $tmp96);
            panda$core$String* $tmp99 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp97, &$s98);
            return $tmp99;
        }
        }
        else {
        panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_990.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp100.value) {
        {
            panda$core$String* $tmp102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s101, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp102, &$s103);
            panda$core$String* $tmp105 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp104, $tmp105);
            panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s107);
            return $tmp108;
        }
        }
        else {
        panda$core$Bit $tmp109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$113_990.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp109.value) {
        {
            panda$core$String* $tmp110 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp110, &$s111);
            panda$core$String* $tmp113 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp112, $tmp113);
            panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp114, &$s115);
            return $tmp116;
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp117 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        panda$core$String* $tmp118 = panda$core$String$convert$R$panda$core$String($tmp117);
        panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, &$s119);
        panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp120, ((panda$core$Object*) self->body));
        panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp121, &$s122);
        return $tmp123;
    }
    }
    panda$core$String* $tmp124 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    return $tmp124;
}

