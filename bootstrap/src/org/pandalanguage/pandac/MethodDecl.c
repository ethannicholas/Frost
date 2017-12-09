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

typedef panda$collections$Iterator* (*$fn69)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn75)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn81)(panda$collections$Iterator*);

static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20", 7, 1 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x20", 9, 1 };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

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
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp23, ((panda$core$Int64) { 0 }), $tmp24, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp26 = $tmp23.start.value;
    panda$core$Int64 i25 = { $tmp26 };
    int64_t $tmp28 = $tmp23.end.value;
    int64_t $tmp29 = $tmp23.step.value;
    bool $tmp30 = $tmp23.inclusive.value;
    bool $tmp37 = $tmp29 > 0;
    if ($tmp37) goto $l35; else goto $l36;
    $l35:;
    if ($tmp30) goto $l38; else goto $l39;
    $l38:;
    if ($tmp26 <= $tmp28) goto $l31; else goto $l33;
    $l39:;
    if ($tmp26 < $tmp28) goto $l31; else goto $l33;
    $l36:;
    if ($tmp30) goto $l40; else goto $l41;
    $l40:;
    if ($tmp26 >= $tmp28) goto $l31; else goto $l33;
    $l41:;
    if ($tmp26 > $tmp28) goto $l31; else goto $l33;
    $l31:;
    {
        panda$core$Object* $tmp43 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i25);
        panda$core$Object* $tmp44 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i25);
        panda$core$Bit $tmp45 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp43)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp44)->type);
        if ($tmp45.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l34:;
    if ($tmp37) goto $l47; else goto $l48;
    $l47:;
    int64_t $tmp49 = $tmp28 - i25.value;
    if ($tmp30) goto $l50; else goto $l51;
    $l50:;
    if ($tmp49 >= $tmp29) goto $l46; else goto $l33;
    $l51:;
    if ($tmp49 > $tmp29) goto $l46; else goto $l33;
    $l48:;
    int64_t $tmp53 = i25.value - $tmp28;
    if ($tmp30) goto $l54; else goto $l55;
    $l54:;
    if ($tmp53 >= -$tmp29) goto $l46; else goto $l33;
    $l55:;
    if ($tmp53 > -$tmp29) goto $l46; else goto $l33;
    $l46:;
    i25.value += $tmp29;
    goto $l31;
    $l33:;
    return ((panda$core$Bit) { true });
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result57;
    panda$core$String* separator64;
    panda$collections$Iterator* p$Iter66;
    org$pandalanguage$pandac$MethodDecl$Parameter* p78;
    panda$core$MutableString* $tmp58 = (panda$core$MutableString*) malloc(40);
    $tmp58->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp58->refCount.value = 1;
    panda$core$String* $tmp61 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s60, self->name);
    panda$core$String* $tmp63 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp61, &$s62);
    panda$core$MutableString$init$panda$core$String($tmp58, $tmp63);
    result57 = $tmp58;
    separator64 = &$s65;
    {
        ITable* $tmp67 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp67->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp67 = $tmp67->next;
        }
        $fn69 $tmp68 = $tmp67->methods[0];
        panda$collections$Iterator* $tmp70 = $tmp68(((panda$collections$Iterable*) self->parameters));
        p$Iter66 = $tmp70;
        $l71:;
        ITable* $tmp73 = p$Iter66->$class->itable;
        while ($tmp73->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp73 = $tmp73->next;
        }
        $fn75 $tmp74 = $tmp73->methods[0];
        panda$core$Bit $tmp76 = $tmp74(p$Iter66);
        panda$core$Bit $tmp77 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp76);
        if (!$tmp77.value) goto $l72;
        {
            ITable* $tmp79 = p$Iter66->$class->itable;
            while ($tmp79->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp79 = $tmp79->next;
            }
            $fn81 $tmp80 = $tmp79->methods[1];
            panda$core$Object* $tmp82 = $tmp80(p$Iter66);
            p78 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp82);
            panda$core$MutableString$append$panda$core$String(result57, separator64);
            panda$core$MutableString$append$panda$core$Object(result57, ((panda$core$Object*) p78));
            separator64 = &$s83;
        }
        goto $l71;
        $l72:;
    }
    panda$core$MutableString$append$panda$core$String(result57, &$s84);
    org$pandalanguage$pandac$Type* $tmp85 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp86 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp85);
    if ($tmp86.value) {
    {
        panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s87, ((panda$core$Object*) self->returnType));
        panda$core$String* $tmp90 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp88, &$s89);
        panda$core$MutableString$append$panda$core$String(result57, $tmp90);
    }
    }
    panda$core$String* $tmp91 = panda$core$MutableString$convert$R$panda$core$String(result57);
    return $tmp91;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    switch (self->methodKind.value) {
        case 57:
        {
            panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s92, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp93, &$s94);
            panda$core$String* $tmp96 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp95, $tmp96);
            panda$core$String* $tmp99 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp97, &$s98);
            return $tmp99;
        }
        break;
        case 58:
        {
            panda$core$String* $tmp101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s100, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp101, &$s102);
            panda$core$String* $tmp104 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp103, $tmp104);
            panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp105, &$s106);
            return $tmp107;
        }
        break;
        case 59:
        {
            panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s108, ((org$pandalanguage$pandac$Symbol*) self->owner)->name);
            panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp109, &$s110);
            panda$core$String* $tmp112 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
            panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp111, $tmp112);
            panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp113, &$s114);
            return $tmp115;
        }
        break;
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp117 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s116, $tmp117);
        panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, &$s119);
        panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp120, ((panda$core$Object*) self->body));
        panda$core$String* $tmp123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp121, &$s122);
        return $tmp123;
    }
    }
    panda$core$String* $tmp124 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    return $tmp124;
}

