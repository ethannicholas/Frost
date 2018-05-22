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
#include "panda/core/Method.h"
#include "org/pandalanguage/pandac/Annotations/Expression.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Annotations$class_type org$pandalanguage$pandac$Annotations$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$Annotations$convert$R$panda$core$String, org$pandalanguage$pandac$Annotations$cleanup, org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn107)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn114)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn125)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn129)(org$pandalanguage$pandac$Annotations$Expression*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 36, -7200059981408518764, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, 1746654831099, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
panda$core$String* org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations* self) {
    panda$core$MutableString* result71 = NULL;
    panda$core$MutableString* $tmp72;
    panda$core$MutableString* $tmp73;
    panda$collections$Iterator* Iter$147$13102 = NULL;
    panda$collections$Iterator* $tmp103;
    panda$collections$Iterator* $tmp104;
    org$pandalanguage$pandac$Annotations$Expression* expr120 = NULL;
    org$pandalanguage$pandac$Annotations$Expression* $tmp121;
    panda$core$Object* $tmp122;
    panda$core$String* $tmp127;
    panda$core$String* $tmp128;
    panda$core$String* $returnValue135;
    panda$core$String* $tmp136;
    panda$core$String* $tmp137;
    int $tmp70;
    {
        panda$core$MutableString* $tmp74 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp74);
        $tmp73 = $tmp74;
        $tmp72 = $tmp73;
        result71 = $tmp72;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp72));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$core$Bit $tmp75 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(self);
        if ($tmp75.value) {
        {
            panda$core$MutableString$append$panda$core$String(result71, &$s76);
        }
        }
        panda$core$Bit $tmp77 = org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(self);
        if ($tmp77.value) {
        {
            panda$core$MutableString$append$panda$core$String(result71, &$s78);
        }
        }
        panda$core$Bit $tmp79 = org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(self);
        if ($tmp79.value) {
        {
            panda$core$MutableString$append$panda$core$String(result71, &$s80);
        }
        }
        panda$core$Bit $tmp81 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self);
        if ($tmp81.value) {
        {
            panda$core$MutableString$append$panda$core$String(result71, &$s82);
        }
        }
        panda$core$Bit $tmp83 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(self);
        if ($tmp83.value) {
        {
            panda$core$MutableString$append$panda$core$String(result71, &$s84);
        }
        }
        panda$core$Bit $tmp85 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(self);
        if ($tmp85.value) {
        {
            panda$core$MutableString$append$panda$core$String(result71, &$s86);
        }
        }
        panda$core$Bit $tmp87 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(self);
        if ($tmp87.value) {
        {
            panda$core$MutableString$append$panda$core$String(result71, &$s88);
        }
        }
        panda$core$Bit $tmp89 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self);
        if ($tmp89.value) {
        {
            panda$core$MutableString$append$panda$core$String(result71, &$s90);
        }
        }
        panda$core$Bit $tmp91 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(self);
        if ($tmp91.value) {
        {
            panda$core$MutableString$append$panda$core$String(result71, &$s92);
        }
        }
        panda$core$Bit $tmp93 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(self);
        if ($tmp93.value) {
        {
            panda$core$MutableString$append$panda$core$String(result71, &$s94);
        }
        }
        panda$core$Bit $tmp95 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(self);
        if ($tmp95.value) {
        {
            panda$core$MutableString$append$panda$core$String(result71, &$s96);
        }
        }
        panda$core$Bit $tmp97 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(self);
        if ($tmp97.value) {
        {
            panda$core$MutableString$append$panda$core$String(result71, &$s98);
        }
        }
        if (((panda$core$Bit) { self->expressions != NULL }).value) {
        {
            {
                int $tmp101;
                {
                    ITable* $tmp105 = ((panda$collections$Iterable*) self->expressions)->$class->itable;
                    while ($tmp105->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp105 = $tmp105->next;
                    }
                    $fn107 $tmp106 = $tmp105->methods[0];
                    panda$collections$Iterator* $tmp108 = $tmp106(((panda$collections$Iterable*) self->expressions));
                    $tmp104 = $tmp108;
                    $tmp103 = $tmp104;
                    Iter$147$13102 = $tmp103;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
                    $l109:;
                    ITable* $tmp112 = Iter$147$13102->$class->itable;
                    while ($tmp112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp112 = $tmp112->next;
                    }
                    $fn114 $tmp113 = $tmp112->methods[0];
                    panda$core$Bit $tmp115 = $tmp113(Iter$147$13102);
                    panda$core$Bit $tmp116 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp115);
                    bool $tmp111 = $tmp116.value;
                    if (!$tmp111) goto $l110;
                    {
                        int $tmp119;
                        {
                            ITable* $tmp123 = Iter$147$13102->$class->itable;
                            while ($tmp123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp123 = $tmp123->next;
                            }
                            $fn125 $tmp124 = $tmp123->methods[1];
                            panda$core$Object* $tmp126 = $tmp124(Iter$147$13102);
                            $tmp122 = $tmp126;
                            $tmp121 = ((org$pandalanguage$pandac$Annotations$Expression*) $tmp122);
                            expr120 = $tmp121;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
                            panda$core$Panda$unref$panda$core$Object($tmp122);
                            panda$core$String* $tmp130 = (($fn129) expr120->$class->vtable[0])(expr120);
                            $tmp128 = $tmp130;
                            panda$core$String* $tmp132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp128, &$s131);
                            $tmp127 = $tmp132;
                            panda$core$MutableString$append$panda$core$String(result71, $tmp127);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
                        }
                        $tmp119 = -1;
                        goto $l117;
                        $l117:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr120));
                        expr120 = NULL;
                        switch ($tmp119) {
                            case -1: goto $l133;
                        }
                        $l133:;
                    }
                    goto $l109;
                    $l110:;
                }
                $tmp101 = -1;
                goto $l99;
                $l99:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$147$13102));
                Iter$147$13102 = NULL;
                switch ($tmp101) {
                    case -1: goto $l134;
                }
                $l134:;
            }
        }
        }
        panda$core$String* $tmp138 = panda$core$MutableString$finish$R$panda$core$String(result71);
        $tmp137 = $tmp138;
        $tmp136 = $tmp137;
        $returnValue135 = $tmp136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
        $tmp70 = 0;
        goto $l68;
        $l139:;
        return $returnValue135;
    }
    $l68:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result71));
    result71 = NULL;
    switch ($tmp70) {
        case 0: goto $l139;
    }
    $l141:;
}
void org$pandalanguage$pandac$Annotations$cleanup(org$pandalanguage$pandac$Annotations* self) {
    int $tmp144;
    {
    }
    $tmp144 = -1;
    goto $l142;
    $l142:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp144) {
        case -1: goto $l145;
    }
    $l145:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->expressions));
}

