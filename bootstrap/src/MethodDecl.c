#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


typedef panda$core$Bit (*$fn4)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Bit (*$fn11)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Bit (*$fn15)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Bit (*$fn19)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Bit (*$fn46)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn71)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn77)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn83)(panda$collections$Iterator*);
typedef void (*$fn85)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn86)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn89)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn91)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn97)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn98)(panda$core$MutableString*);
org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String} };

typedef panda$core$String* (*$fn101)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn109)(org$pandalanguage$pandac$MethodDecl*);
org$pandalanguage$pandac$MethodDecl$Parameter$class_type org$pandalanguage$pandac$MethodDecl$Parameter$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodDecl$Parameter$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$MethodDecl$Kind$class_type org$pandalanguage$pandac$MethodDecl$Kind$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20", 7, 1 };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, panda$core$Int64 p_offset, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, panda$core$Int64 p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, org$pandalanguage$pandac$ASTNode* p_body) {
    self->compiledBody = NULL;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 204 }), p_offset, p_name);
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
    panda$core$Bit $tmp5 = (($fn4) self->annotations->$class->vtable[5])(self->annotations);
    panda$core$Bit $tmp6 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5);
    bool $tmp3 = $tmp6.value;
    if (!$tmp3) goto $l7;
    panda$core$Bit $tmp8 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->methodKind, ((panda$core$Int64) { 59 }));
    $tmp3 = $tmp8.value;
    $l7:;
    panda$core$Bit $tmp9 = { $tmp3 };
    bool $tmp2 = $tmp9.value;
    if (!$tmp2) goto $l10;
    panda$core$Bit $tmp12 = (($fn11) self->annotations->$class->vtable[9])(self->annotations);
    panda$core$Bit $tmp13 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp12);
    $tmp2 = $tmp13.value;
    $l10:;
    panda$core$Bit $tmp14 = { $tmp2 };
    return $tmp14;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$Bit $tmp16 = (($fn15) self->annotations->$class->vtable[5])(self->annotations);
    panda$core$Bit $tmp17 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp16);
    return $tmp17;
}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other) {
    panda$core$Range $tmp24;
    panda$core$Bit $tmp18 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp18.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp20 = (($fn19) self->returnType->$class->vtable[5])(self->returnType, ((panda$core$Object*) p_other->returnType));
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
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp24, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp25)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp27 = ((panda$core$Int64$wrapper*) $tmp24.start)->value.value;
    panda$core$Int64 i26 = { $tmp27 };
    int64_t $tmp29 = ((panda$core$Int64$wrapper*) $tmp24.end)->value.value;
    int64_t $tmp30 = $tmp24.step.value;
    bool $tmp31 = $tmp24.inclusive.value;
    bool $tmp38 = $tmp30 > 0;
    if ($tmp38) goto $l36; else goto $l37;
    $l36:;
    if ($tmp31) goto $l39; else goto $l40;
    $l39:;
    if ($tmp27 <= $tmp29) goto $l32; else goto $l34;
    $l40:;
    if ($tmp27 < $tmp29) goto $l32; else goto $l34;
    $l37:;
    if ($tmp31) goto $l41; else goto $l42;
    $l41:;
    if ($tmp27 >= $tmp29) goto $l32; else goto $l34;
    $l42:;
    if ($tmp27 > $tmp29) goto $l32; else goto $l34;
    $l32:;
    {
        panda$core$Object* $tmp44 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i26);
        panda$core$Object* $tmp45 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i26);
        panda$core$Bit $tmp47 = (($fn46) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp44)->type->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp44)->type, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp45)->type));
        if ($tmp47.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l35:;
    if ($tmp38) goto $l49; else goto $l50;
    $l49:;
    int64_t $tmp51 = $tmp29 - i26.value;
    if ($tmp31) goto $l52; else goto $l53;
    $l52:;
    if ($tmp51 >= $tmp30) goto $l48; else goto $l34;
    $l53:;
    if ($tmp51 > $tmp30) goto $l48; else goto $l34;
    $l50:;
    int64_t $tmp55 = i26.value - $tmp29;
    if ($tmp31) goto $l56; else goto $l57;
    $l56:;
    if ($tmp55 >= -$tmp30) goto $l48; else goto $l34;
    $l57:;
    if ($tmp55 > -$tmp30) goto $l48; else goto $l34;
    $l48:;
    i26.value += $tmp30;
    goto $l32;
    $l34:;
    return ((panda$core$Bit) { true });
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result59;
    panda$core$String* separator66;
    panda$collections$Iterator* p$Iter68;
    org$pandalanguage$pandac$MethodDecl$Parameter* p80;
    panda$core$MutableString* $tmp60 = (panda$core$MutableString*) malloc(40);
    $tmp60->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp60->refCount.value = 1;
    panda$core$String* $tmp63 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s62, self->name);
    panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp63, &$s64);
    panda$core$MutableString$init$panda$core$String($tmp60, $tmp65);
    result59 = $tmp60;
    separator66 = &$s67;
    {
        ITable* $tmp69 = ((panda$collections$Iterable*) self->parameters)->$class->itable;
        while ($tmp69->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp69 = $tmp69->next;
        }
        $fn71 $tmp70 = $tmp69->methods[0];
        panda$collections$Iterator* $tmp72 = $tmp70(((panda$collections$Iterable*) self->parameters));
        p$Iter68 = $tmp72;
        $l73:;
        ITable* $tmp75 = p$Iter68->$class->itable;
        while ($tmp75->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp75 = $tmp75->next;
        }
        $fn77 $tmp76 = $tmp75->methods[0];
        panda$core$Bit $tmp78 = $tmp76(p$Iter68);
        panda$core$Bit $tmp79 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp78);
        if (!$tmp79.value) goto $l74;
        {
            ITable* $tmp81 = p$Iter68->$class->itable;
            while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp81 = $tmp81->next;
            }
            $fn83 $tmp82 = $tmp81->methods[1];
            panda$core$Object* $tmp84 = $tmp82(p$Iter68);
            p80 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp84);
            (($fn85) result59->$class->vtable[3])(result59, separator66);
            (($fn86) result59->$class->vtable[5])(result59, ((panda$core$Object*) p80));
            separator66 = &$s87;
        }
        goto $l73;
        $l74:;
    }
    (($fn89) result59->$class->vtable[3])(result59, &$s88);
    org$pandalanguage$pandac$Type* $tmp90 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp92 = (($fn91) self->returnType->$class->vtable[5])(self->returnType, ((panda$core$Object*) $tmp90));
    if ($tmp92.value) {
    {
        panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s93, ((panda$core$Object*) self->returnType));
        panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp94, &$s95);
        (($fn97) result59->$class->vtable[3])(result59, $tmp96);
    }
    }
    panda$core$String* $tmp99 = (($fn98) result59->$class->vtable[0])(result59);
    return $tmp99;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp102 = (($fn101) self->$class->vtable[6])(self);
        panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s100, $tmp102);
        panda$core$String* $tmp105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp103, &$s104);
        panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp105, ((panda$core$Object*) self->body));
        panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp106, &$s107);
        return $tmp108;
    }
    }
    panda$core$String* $tmp110 = (($fn109) self->$class->vtable[6])(self);
    return $tmp110;
}
void org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl$Parameter* self, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type) {
    self->name = p_name;
    self->type = p_type;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$Parameter$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl$Parameter* self) {
    panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s111, self->name);
    panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp112, &$s113);
    panda$core$String* $tmp115 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp114, ((panda$core$Object*) self->type));
    panda$core$String* $tmp117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp115, &$s116);
    return $tmp117;
}
void org$pandalanguage$pandac$MethodDecl$Kind$init(org$pandalanguage$pandac$MethodDecl$Kind* self) {
}

