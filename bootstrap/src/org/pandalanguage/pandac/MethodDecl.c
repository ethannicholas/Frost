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


org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String} };

typedef panda$collections$Iterator* (*$fn68)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn74)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn80)(panda$collections$Iterator*);

static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20", 7, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x20", 9, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, panda$core$Int64 p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, org$pandalanguage$pandac$ASTNode* p_body) {
    self->compiledBody = NULL;
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
    bool $tmp36 = 1 > 0;
    if ($tmp36) goto $l34; else goto $l35;
    $l34:;
    if ($tmp29) goto $l37; else goto $l38;
    $l37:;
    if ($tmp26 <= $tmp28) goto $l30; else goto $l32;
    $l38:;
    if ($tmp26 < $tmp28) goto $l30; else goto $l32;
    $l35:;
    if ($tmp29) goto $l39; else goto $l40;
    $l39:;
    if ($tmp26 >= $tmp28) goto $l30; else goto $l32;
    $l40:;
    if ($tmp26 > $tmp28) goto $l30; else goto $l32;
    $l30:;
    {
        panda$core$Object* $tmp42 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i25);
        panda$core$Object* $tmp43 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i25);
        panda$core$Bit $tmp44 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp42)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp43)->type);
        if ($tmp44.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l33:;
    if ($tmp36) goto $l46; else goto $l47;
    $l46:;
    int64_t $tmp48 = $tmp28 - i25.value;
    if ($tmp29) goto $l49; else goto $l50;
    $l49:;
    if ($tmp48 >= 1) goto $l45; else goto $l32;
    $l50:;
    if ($tmp48 > 1) goto $l45; else goto $l32;
    $l47:;
    int64_t $tmp52 = i25.value - $tmp28;
    if ($tmp29) goto $l53; else goto $l54;
    $l53:;
    if ($tmp52 >= -1) goto $l45; else goto $l32;
    $l54:;
    if ($tmp52 > -1) goto $l45; else goto $l32;
    $l45:;
    i25.value += 1;
    goto $l30;
    $l32:;
    return ((panda$core$Bit) { true });
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result56;
    panda$core$String* separator63;
    panda$collections$Iterator* p$Iter65;
    org$pandalanguage$pandac$MethodDecl$Parameter* p77;
    panda$core$MutableString* $tmp57 = (panda$core$MutableString*) malloc(40);
    $tmp57->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp57->refCount.value = 1;
    panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s59, self->name);
    panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp60, &$s61);
    panda$core$MutableString$init$panda$core$String($tmp57, $tmp62);
    result56 = $tmp57;
    separator63 = &$s64;
    {
        ITable* $tmp66 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp66 = $tmp66->next;
        }
        $fn68 $tmp67 = $tmp66->methods[0];
        panda$collections$Iterator* $tmp69 = $tmp67(((panda$collections$Iterable*) self->parameters));
        p$Iter65 = $tmp69;
        $l70:;
        ITable* $tmp72 = p$Iter65->$class->itable;
        while ($tmp72->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp72 = $tmp72->next;
        }
        $fn74 $tmp73 = $tmp72->methods[0];
        panda$core$Bit $tmp75 = $tmp73(p$Iter65);
        panda$core$Bit $tmp76 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp75);
        if (!$tmp76.value) goto $l71;
        {
            ITable* $tmp78 = p$Iter65->$class->itable;
            while ($tmp78->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp78 = $tmp78->next;
            }
            $fn80 $tmp79 = $tmp78->methods[1];
            panda$core$Object* $tmp81 = $tmp79(p$Iter65);
            p77 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp81);
            panda$core$MutableString$append$panda$core$String(result56, separator63);
            panda$core$MutableString$append$panda$core$Object(result56, ((panda$core$Object*) p77));
            separator63 = &$s82;
        }
        goto $l70;
        $l71:;
    }
    panda$core$MutableString$append$panda$core$String(result56, &$s83);
    org$pandalanguage$pandac$Type* $tmp84 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp85 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp84);
    if ($tmp85.value) {
    {
        panda$core$String* $tmp87 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s86, ((panda$core$Object*) self->returnType));
        panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp87, &$s88);
        panda$core$MutableString$append$panda$core$String(result56, $tmp89);
    }
    }
    panda$core$String* $tmp90 = panda$core$MutableString$convert$R$panda$core$String(result56);
    return $tmp90;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    switch (self->methodKind.value) {
        case 57:
        {
            panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s91, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp92, &$s93);
            panda$core$String* $tmp95 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp94, $tmp95);
            panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp96, &$s97);
            return $tmp98;
        }
        break;
        case 58:
        {
            panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s99, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp100, &$s101);
            panda$core$String* $tmp103 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp102, $tmp103);
            panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp104, &$s105);
            return $tmp106;
        }
        break;
        case 59:
        {
            panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s107, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s109);
            panda$core$String* $tmp111 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp110, $tmp111);
            panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp112, &$s113);
            return $tmp114;
        }
        break;
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp116 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        panda$core$String* $tmp117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s115, $tmp116);
        panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp117, &$s118);
        panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp119, ((panda$core$Object*) self->body));
        panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp120, &$s121);
        return $tmp122;
    }
    }
    panda$core$String* $tmp123 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    return $tmp123;
}

