#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Int64.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String} };

typedef panda$collections$Iterator* (*$fn58)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn64)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn70)(panda$collections$Iterator*);

static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, panda$core$Int64 p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, org$pandalanguage$pandac$ASTNode* p_body) {
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
    panda$core$Bit $tmp1 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind, ((panda$core$Int64) { 59 }));
    return $tmp1;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $tmp4 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp5 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4);
    bool $tmp3 = $tmp5.value;
    if (!$tmp3) goto $l6;
    panda$core$Bit $tmp7 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind, ((panda$core$Int64) { 59 }));
    $tmp3 = $tmp7.value;
    $l6:;
    panda$core$Bit $tmp8 = { $tmp3 };
    bool $tmp2 = $tmp8.value;
    if (!$tmp2) goto $l9;
    panda$core$Bit $tmp10 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp11 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp10);
    $tmp2 = $tmp11.value;
    $l9:;
    panda$core$Bit $tmp12 = { $tmp2 };
    return $tmp12;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $tmp13 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self->annotations);
    panda$core$Bit $tmp14 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp13);
    return $tmp14;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp23;
    bool $tmp15 = self->resolved.value;
    if (!$tmp15) goto $l16;
    $tmp15 = p_other->resolved.value;
    $l16:;
    panda$core$Bit $tmp17 = { $tmp15 };
    PANDA_ASSERT($tmp17.value);
    panda$core$Bit $tmp18 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp18.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp19 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp19.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp20 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp21 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp22 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp20, $tmp21);
    if ($tmp22.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp24 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp23, ((panda$core$Int64) { 0 }), $tmp24, ((panda$core$Bit) { false }));
    int64_t $tmp26 = $tmp23.min.value;
    panda$core$Int64 i25 = { $tmp26 };
    int64_t $tmp28 = $tmp23.max.value;
    bool $tmp29 = $tmp23.inclusive.value;
    if ($tmp29) goto $l36; else goto $l37;
    $l36:;
    if ($tmp26 <= $tmp28) goto $l30; else goto $l32;
    $l37:;
    if ($tmp26 < $tmp28) goto $l30; else goto $l32;
    $l30:;
    {
        panda$core$Object* $tmp38 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i25);
        panda$core$Object* $tmp39 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i25);
        panda$core$Bit $tmp40 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp38)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp39)->type);
        if ($tmp40.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l33:;
    int64_t $tmp42 = $tmp28 - i25.value;
    if ($tmp29) goto $l43; else goto $l44;
    $l43:;
    if ($tmp42 >= 1) goto $l41; else goto $l32;
    $l44:;
    if ($tmp42 > 1) goto $l41; else goto $l32;
    $l41:;
    i25.value += 1;
    goto $l30;
    $l32:;
    return ((panda$core$Bit) { true });
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result47;
    panda$core$String* separator53;
    panda$collections$Iterator* p$Iter55;
    org$pandalanguage$pandac$MethodDecl$Parameter* p67;
    panda$core$Char8 $tmp73;
    panda$core$MutableString* $tmp48 = (panda$core$MutableString*) malloc(48);
    $tmp48->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp48->refCount.value = 1;
    panda$core$String* $tmp50 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, &$s51);
    panda$core$MutableString$init$panda$core$String($tmp48, $tmp52);
    result47 = $tmp48;
    separator53 = &$s54;
    {
        ITable* $tmp56 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp56->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp56 = $tmp56->next;
        }
        $fn58 $tmp57 = $tmp56->methods[0];
        panda$collections$Iterator* $tmp59 = $tmp57(((panda$collections$Iterable*) self->parameters));
        p$Iter55 = $tmp59;
        $l60:;
        ITable* $tmp62 = p$Iter55->$class->itable;
        while ($tmp62->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp62 = $tmp62->next;
        }
        $fn64 $tmp63 = $tmp62->methods[0];
        panda$core$Bit $tmp65 = $tmp63(p$Iter55);
        panda$core$Bit $tmp66 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp65);
        if (!$tmp66.value) goto $l61;
        {
            ITable* $tmp68 = p$Iter55->$class->itable;
            while ($tmp68->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp68 = $tmp68->next;
            }
            $fn70 $tmp69 = $tmp68->methods[1];
            panda$core$Object* $tmp71 = $tmp69(p$Iter55);
            p67 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp71);
            panda$core$MutableString$append$panda$core$String(result47, separator53);
            panda$core$MutableString$append$panda$core$Object(result47, ((panda$core$Object*) p67));
            separator53 = &$s72;
        }
        goto $l60;
        $l61:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp73, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(result47, $tmp73);
    org$pandalanguage$pandac$Type* $tmp74 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp75 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp74);
    if ($tmp75.value) {
    {
        panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s76, ((panda$core$Object*) self->returnType));
        panda$core$String* $tmp79 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp77, &$s78);
        panda$core$MutableString$append$panda$core$String(result47, $tmp79);
    }
    }
    panda$core$String* $tmp80 = panda$core$MutableString$finish$R$panda$core$String(result47);
    return $tmp80;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    switch (self->methodKind.value) {
        case 57:
        {
            panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s81, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, &$s83);
            panda$core$String* $tmp85 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp84, $tmp85);
            panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp86, &$s87);
            return $tmp88;
        }
        break;
        case 58:
        {
            panda$core$String* $tmp90 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s89, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp90, &$s91);
            panda$core$String* $tmp93 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp92, $tmp93);
            panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp94, &$s95);
            return $tmp96;
        }
        break;
        case 59:
        {
            panda$core$String* $tmp97 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp99 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp97, &$s98);
            panda$core$String* $tmp100 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp99, $tmp100);
            panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s102);
            return $tmp103;
        }
        break;
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp104 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        panda$core$String* $tmp105 = panda$core$String$convert$R$panda$core$String($tmp104);
        panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp105, &$s106);
        panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp107, ((panda$core$Object*) self->body));
        panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s109);
        return $tmp110;
    }
    }
    panda$core$String* $tmp111 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    return $tmp111;
}

