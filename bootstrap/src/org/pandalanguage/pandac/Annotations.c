#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Annotations/Expression.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Annotations$class_type org$pandalanguage$pandac$Annotations$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$Annotations$convert$R$panda$core$String, org$pandalanguage$pandac$Annotations$cleanup, org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isSynthetic$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn114)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn121)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn132)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn136)(org$pandalanguage$pandac$Annotations$Expression*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 36, -7200059981408518764, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, 1746654831099, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x0a", 11, -1149303354726166758, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$Annotations$init(org$pandalanguage$pandac$Annotations* self) {
    self->expressions = NULL;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64(self, ((panda$core$Int64) { 0 }));
}
void org$pandalanguage$pandac$Annotations$init$panda$core$Int64(org$pandalanguage$pandac$Annotations* self, panda$core$Int64 p_flags) {
    self->expressions = NULL;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q(self, p_flags, NULL);
}
void org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q(org$pandalanguage$pandac$Annotations* self, panda$core$Int64 p_flags, panda$collections$ListView* p_expressions) {
    panda$collections$Array* $tmp2;
    panda$collections$Array* $tmp3;
    panda$collections$Array* $tmp4;
    panda$collections$Array* $tmp6;
    panda$collections$Array* $tmp7;
    self->expressions = NULL;
    self->flags = p_flags;
    if (((panda$core$Bit) { p_expressions != NULL }).value) {
    {
        {
            $tmp2 = self->expressions;
            panda$collections$Array* $tmp5 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp5, p_expressions);
            $tmp4 = $tmp5;
            $tmp3 = $tmp4;
            self->expressions = $tmp3;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
        }
    }
    }
    else {
    {
        {
            $tmp6 = self->expressions;
            $tmp7 = NULL;
            self->expressions = $tmp7;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
        }
    }
    }
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue8;
    panda$core$Int64 $tmp9 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp10 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp9);
    panda$core$Bit $tmp11 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp10, ((panda$core$Int64) { 0 }));
    $returnValue8 = $tmp11;
    return $returnValue8;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue13;
    panda$core$Int64 $tmp14 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
    panda$core$Int64 $tmp15 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp14);
    panda$core$Bit $tmp16 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp15, ((panda$core$Int64) { 0 }));
    $returnValue13 = $tmp16;
    return $returnValue13;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue18;
    panda$core$Int64 $tmp19 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp20 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp19);
    panda$core$Bit $tmp21 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp20, ((panda$core$Int64) { 0 }));
    $returnValue18 = $tmp21;
    return $returnValue18;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue23;
    panda$core$Int64 $tmp24 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp25 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp24);
    panda$core$Bit $tmp26 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp25, ((panda$core$Int64) { 0 }));
    $returnValue23 = $tmp26;
    return $returnValue23;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue28;
    panda$core$Int64 $tmp29 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
    panda$core$Int64 $tmp30 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp29);
    panda$core$Bit $tmp31 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp30, ((panda$core$Int64) { 0 }));
    $returnValue28 = $tmp31;
    return $returnValue28;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue33;
    panda$core$Int64 $tmp34 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
    panda$core$Int64 $tmp35 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp34);
    panda$core$Bit $tmp36 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp35, ((panda$core$Int64) { 0 }));
    $returnValue33 = $tmp36;
    return $returnValue33;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue38;
    panda$core$Int64 $tmp39 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp40 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp39);
    panda$core$Bit $tmp41 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp40, ((panda$core$Int64) { 0 }));
    $returnValue38 = $tmp41;
    return $returnValue38;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue43;
    panda$core$Int64 $tmp44 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
    panda$core$Int64 $tmp45 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp44);
    panda$core$Bit $tmp46 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp45, ((panda$core$Int64) { 0 }));
    $returnValue43 = $tmp46;
    return $returnValue43;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue48;
    panda$core$Int64 $tmp49 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
    panda$core$Int64 $tmp50 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp49);
    panda$core$Bit $tmp51 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp50, ((panda$core$Int64) { 0 }));
    $returnValue48 = $tmp51;
    return $returnValue48;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue53;
    panda$core$Int64 $tmp54 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
    panda$core$Int64 $tmp55 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp54);
    panda$core$Bit $tmp56 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp55, ((panda$core$Int64) { 0 }));
    $returnValue53 = $tmp56;
    return $returnValue53;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue58;
    panda$core$Int64 $tmp59 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
    panda$core$Int64 $tmp60 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp59);
    panda$core$Bit $tmp61 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp60, ((panda$core$Int64) { 0 }));
    $returnValue58 = $tmp61;
    return $returnValue58;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue63;
    panda$core$Int64 $tmp64 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 12 }));
    panda$core$Int64 $tmp65 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp64);
    panda$core$Bit $tmp66 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp65, ((panda$core$Int64) { 0 }));
    $returnValue63 = $tmp66;
    return $returnValue63;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isSynthetic$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue68;
    panda$core$Int64 $tmp69 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 13 }));
    panda$core$Int64 $tmp70 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp69);
    panda$core$Bit $tmp71 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp70, ((panda$core$Int64) { 0 }));
    $returnValue68 = $tmp71;
    return $returnValue68;
}
panda$core$String* org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations* self) {
    panda$core$MutableString* result76 = NULL;
    panda$core$MutableString* $tmp77;
    panda$core$MutableString* $tmp78;
    panda$collections$Iterator* Iter$155$13109 = NULL;
    panda$collections$Iterator* $tmp110;
    panda$collections$Iterator* $tmp111;
    org$pandalanguage$pandac$Annotations$Expression* expr127 = NULL;
    org$pandalanguage$pandac$Annotations$Expression* $tmp128;
    panda$core$Object* $tmp129;
    panda$core$String* $tmp134;
    panda$core$String* $tmp135;
    panda$core$String* $returnValue142;
    panda$core$String* $tmp143;
    panda$core$String* $tmp144;
    int $tmp75;
    {
        panda$core$MutableString* $tmp79 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp79);
        $tmp78 = $tmp79;
        $tmp77 = $tmp78;
        result76 = $tmp77;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
        panda$core$Bit $tmp80 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(self);
        if ($tmp80.value) {
        {
            panda$core$MutableString$append$panda$core$String(result76, &$s81);
        }
        }
        panda$core$Bit $tmp82 = org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(self);
        if ($tmp82.value) {
        {
            panda$core$MutableString$append$panda$core$String(result76, &$s83);
        }
        }
        panda$core$Bit $tmp84 = org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(self);
        if ($tmp84.value) {
        {
            panda$core$MutableString$append$panda$core$String(result76, &$s85);
        }
        }
        panda$core$Bit $tmp86 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self);
        if ($tmp86.value) {
        {
            panda$core$MutableString$append$panda$core$String(result76, &$s87);
        }
        }
        panda$core$Bit $tmp88 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(self);
        if ($tmp88.value) {
        {
            panda$core$MutableString$append$panda$core$String(result76, &$s89);
        }
        }
        panda$core$Bit $tmp90 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(self);
        if ($tmp90.value) {
        {
            panda$core$MutableString$append$panda$core$String(result76, &$s91);
        }
        }
        panda$core$Bit $tmp92 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(self);
        if ($tmp92.value) {
        {
            panda$core$MutableString$append$panda$core$String(result76, &$s93);
        }
        }
        panda$core$Bit $tmp94 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self);
        if ($tmp94.value) {
        {
            panda$core$MutableString$append$panda$core$String(result76, &$s95);
        }
        }
        panda$core$Bit $tmp96 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(self);
        if ($tmp96.value) {
        {
            panda$core$MutableString$append$panda$core$String(result76, &$s97);
        }
        }
        panda$core$Bit $tmp98 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(self);
        if ($tmp98.value) {
        {
            panda$core$MutableString$append$panda$core$String(result76, &$s99);
        }
        }
        panda$core$Bit $tmp100 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(self);
        if ($tmp100.value) {
        {
            panda$core$MutableString$append$panda$core$String(result76, &$s101);
        }
        }
        panda$core$Bit $tmp102 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(self);
        if ($tmp102.value) {
        {
            panda$core$MutableString$append$panda$core$String(result76, &$s103);
        }
        }
        panda$core$Bit $tmp104 = org$pandalanguage$pandac$Annotations$isSynthetic$R$panda$core$Bit(self);
        if ($tmp104.value) {
        {
            panda$core$MutableString$append$panda$core$String(result76, &$s105);
        }
        }
        if (((panda$core$Bit) { self->expressions != NULL }).value) {
        {
            {
                int $tmp108;
                {
                    ITable* $tmp112 = ((panda$collections$Iterable*) self->expressions)->$class->itable;
                    while ($tmp112->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp112 = $tmp112->next;
                    }
                    $fn114 $tmp113 = $tmp112->methods[0];
                    panda$collections$Iterator* $tmp115 = $tmp113(((panda$collections$Iterable*) self->expressions));
                    $tmp111 = $tmp115;
                    $tmp110 = $tmp111;
                    Iter$155$13109 = $tmp110;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
                    $l116:;
                    ITable* $tmp119 = Iter$155$13109->$class->itable;
                    while ($tmp119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp119 = $tmp119->next;
                    }
                    $fn121 $tmp120 = $tmp119->methods[0];
                    panda$core$Bit $tmp122 = $tmp120(Iter$155$13109);
                    panda$core$Bit $tmp123 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp122);
                    bool $tmp118 = $tmp123.value;
                    if (!$tmp118) goto $l117;
                    {
                        int $tmp126;
                        {
                            ITable* $tmp130 = Iter$155$13109->$class->itable;
                            while ($tmp130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp130 = $tmp130->next;
                            }
                            $fn132 $tmp131 = $tmp130->methods[1];
                            panda$core$Object* $tmp133 = $tmp131(Iter$155$13109);
                            $tmp129 = $tmp133;
                            $tmp128 = ((org$pandalanguage$pandac$Annotations$Expression*) $tmp129);
                            expr127 = $tmp128;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
                            panda$core$Panda$unref$panda$core$Object($tmp129);
                            panda$core$String* $tmp137 = (($fn136) expr127->$class->vtable[0])(expr127);
                            $tmp135 = $tmp137;
                            panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp135, &$s138);
                            $tmp134 = $tmp139;
                            panda$core$MutableString$append$panda$core$String(result76, $tmp134);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp135));
                        }
                        $tmp126 = -1;
                        goto $l124;
                        $l124:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr127));
                        expr127 = NULL;
                        switch ($tmp126) {
                            case -1: goto $l140;
                        }
                        $l140:;
                    }
                    goto $l116;
                    $l117:;
                }
                $tmp108 = -1;
                goto $l106;
                $l106:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$155$13109));
                Iter$155$13109 = NULL;
                switch ($tmp108) {
                    case -1: goto $l141;
                }
                $l141:;
            }
        }
        }
        panda$core$String* $tmp145 = panda$core$MutableString$finish$R$panda$core$String(result76);
        $tmp144 = $tmp145;
        $tmp143 = $tmp144;
        $returnValue142 = $tmp143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
        $tmp75 = 0;
        goto $l73;
        $l146:;
        return $returnValue142;
    }
    $l73:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result76));
    result76 = NULL;
    switch ($tmp75) {
        case 0: goto $l146;
    }
    $l148:;
}
void org$pandalanguage$pandac$Annotations$cleanup(org$pandalanguage$pandac$Annotations* self) {
    int $tmp151;
    {
    }
    $tmp151 = -1;
    goto $l149;
    $l149:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp151) {
        case -1: goto $l152;
    }
    $l152:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->expressions));
}

