#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Annotations.h"
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


org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String} };

typedef panda$collections$Iterator* (*$fn66)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn72)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn78)(panda$collections$Iterator*);

static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20", 7, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

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
    panda$core$Range$LTpanda$core$Int64$GT $tmp20;
    panda$core$Bit $tmp15 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    if ($tmp15.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp16 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, p_other->returnType);
    if ($tmp16.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp17 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Int64 $tmp18 = panda$collections$Array$get_count$R$panda$core$Int64(p_other->parameters);
    panda$core$Bit $tmp19 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp17, $tmp18);
    if ($tmp19.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp21 = panda$collections$Array$get_count$R$panda$core$Int64(self->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp20, ((panda$core$Int64) { 0 }), $tmp21, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp23 = $tmp20.start.value;
    panda$core$Int64 i22 = { $tmp23 };
    int64_t $tmp25 = $tmp20.end.value;
    int64_t $tmp26 = $tmp20.step.value;
    bool $tmp27 = $tmp20.inclusive.value;
    bool $tmp34 = $tmp26 > 0;
    if ($tmp34) goto $l32; else goto $l33;
    $l32:;
    if ($tmp27) goto $l35; else goto $l36;
    $l35:;
    if ($tmp23 <= $tmp25) goto $l28; else goto $l30;
    $l36:;
    if ($tmp23 < $tmp25) goto $l28; else goto $l30;
    $l33:;
    if ($tmp27) goto $l37; else goto $l38;
    $l37:;
    if ($tmp23 >= $tmp25) goto $l28; else goto $l30;
    $l38:;
    if ($tmp23 > $tmp25) goto $l28; else goto $l30;
    $l28:;
    {
        panda$core$Object* $tmp40 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->parameters, i22);
        panda$core$Object* $tmp41 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->parameters, i22);
        panda$core$Bit $tmp42 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp40)->type, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp41)->type);
        if ($tmp42.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l31:;
    if ($tmp34) goto $l44; else goto $l45;
    $l44:;
    int64_t $tmp46 = $tmp25 - i22.value;
    if ($tmp27) goto $l47; else goto $l48;
    $l47:;
    if ($tmp46 >= $tmp26) goto $l43; else goto $l30;
    $l48:;
    if ($tmp46 > $tmp26) goto $l43; else goto $l30;
    $l45:;
    int64_t $tmp50 = i22.value - $tmp25;
    if ($tmp27) goto $l51; else goto $l52;
    $l51:;
    if ($tmp50 >= -$tmp26) goto $l43; else goto $l30;
    $l52:;
    if ($tmp50 > -$tmp26) goto $l43; else goto $l30;
    $l43:;
    i22.value += $tmp26;
    goto $l28;
    $l30:;
    return ((panda$core$Bit) { true });
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    panda$core$MutableString* result54;
    panda$core$String* separator61;
    panda$collections$Iterator* p$Iter63;
    org$pandalanguage$pandac$MethodDecl$Parameter* p75;
    panda$core$MutableString* $tmp55 = (panda$core$MutableString*) malloc(40);
    $tmp55->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp55->refCount.value = 1;
    panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s57, self->name);
    panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp58, &$s59);
    panda$core$MutableString$init$panda$core$String($tmp55, $tmp60);
    result54 = $tmp55;
    separator61 = &$s62;
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
            panda$core$MutableString$append$panda$core$String(result54, separator61);
            panda$core$MutableString$append$panda$core$Object(result54, ((panda$core$Object*) p75));
            separator61 = &$s80;
        }
        goto $l68;
        $l69:;
    }
    panda$core$MutableString$append$panda$core$String(result54, &$s81);
    org$pandalanguage$pandac$Type* $tmp82 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp83 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self->returnType, $tmp82);
    if ($tmp83.value) {
    {
        panda$core$String* $tmp85 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s84, ((panda$core$Object*) self->returnType));
        panda$core$String* $tmp87 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp85, &$s86);
        panda$core$MutableString$append$panda$core$String(result54, $tmp87);
    }
    }
    panda$core$String* $tmp88 = panda$core$MutableString$convert$R$panda$core$String(result54);
    return $tmp88;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self) {
    if (((panda$core$Bit) { self->body != NULL }).value) {
    {
        panda$core$String* $tmp90 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
        panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s89, $tmp90);
        panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp91, &$s92);
        panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp93, ((panda$core$Object*) self->body));
        panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp94, &$s95);
        return $tmp96;
    }
    }
    panda$core$String* $tmp97 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(self);
    return $tmp97;
}

