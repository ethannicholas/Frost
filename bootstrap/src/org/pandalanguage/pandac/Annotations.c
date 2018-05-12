#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Annotations$class_type org$pandalanguage$pandac$Annotations$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$Annotations$convert$R$panda$core$String, org$pandalanguage$pandac$Annotations$cleanup, org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 36, -7200059981408518764, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, 1746654831099, NULL };

void org$pandalanguage$pandac$Annotations$init(org$pandalanguage$pandac$Annotations* self) {
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64(self, ((panda$core$Int64) { 0 }));
}
void org$pandalanguage$pandac$Annotations$init$panda$core$Int64(org$pandalanguage$pandac$Annotations* self, panda$core$Int64 p_flags) {
    self->flags = p_flags;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $finallyReturn1;
    panda$core$Int64 $tmp3 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp3);
    panda$core$Bit $tmp5 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4, ((panda$core$Int64) { 0 }));
    $finallyReturn1 = $tmp5;
    return $finallyReturn1;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $finallyReturn6;
    panda$core$Int64 $tmp8 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
    panda$core$Int64 $tmp9 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp8);
    panda$core$Bit $tmp10 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp9, ((panda$core$Int64) { 0 }));
    $finallyReturn6 = $tmp10;
    return $finallyReturn6;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $finallyReturn11;
    panda$core$Int64 $tmp13 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp14 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp13);
    panda$core$Bit $tmp15 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp14, ((panda$core$Int64) { 0 }));
    $finallyReturn11 = $tmp15;
    return $finallyReturn11;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $finallyReturn16;
    panda$core$Int64 $tmp18 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp19 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp18);
    panda$core$Bit $tmp20 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp19, ((panda$core$Int64) { 0 }));
    $finallyReturn16 = $tmp20;
    return $finallyReturn16;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $finallyReturn21;
    panda$core$Int64 $tmp23 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
    panda$core$Int64 $tmp24 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp23);
    panda$core$Bit $tmp25 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp24, ((panda$core$Int64) { 0 }));
    $finallyReturn21 = $tmp25;
    return $finallyReturn21;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $finallyReturn26;
    panda$core$Int64 $tmp28 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
    panda$core$Int64 $tmp29 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp28);
    panda$core$Bit $tmp30 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp29, ((panda$core$Int64) { 0 }));
    $finallyReturn26 = $tmp30;
    return $finallyReturn26;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $finallyReturn31;
    panda$core$Int64 $tmp33 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp34 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp33);
    panda$core$Bit $tmp35 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp34, ((panda$core$Int64) { 0 }));
    $finallyReturn31 = $tmp35;
    return $finallyReturn31;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $finallyReturn36;
    panda$core$Int64 $tmp38 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
    panda$core$Int64 $tmp39 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp38);
    panda$core$Bit $tmp40 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp39, ((panda$core$Int64) { 0 }));
    $finallyReturn36 = $tmp40;
    return $finallyReturn36;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $finallyReturn41;
    panda$core$Int64 $tmp43 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
    panda$core$Int64 $tmp44 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp43);
    panda$core$Bit $tmp45 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp44, ((panda$core$Int64) { 0 }));
    $finallyReturn41 = $tmp45;
    return $finallyReturn41;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $finallyReturn46;
    panda$core$Int64 $tmp48 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
    panda$core$Int64 $tmp49 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp48);
    panda$core$Bit $tmp50 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp49, ((panda$core$Int64) { 0 }));
    $finallyReturn46 = $tmp50;
    return $finallyReturn46;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $finallyReturn51;
    panda$core$Int64 $tmp53 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
    panda$core$Int64 $tmp54 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp53);
    panda$core$Bit $tmp55 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp54, ((panda$core$Int64) { 0 }));
    $finallyReturn51 = $tmp55;
    return $finallyReturn51;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $finallyReturn56;
    panda$core$Int64 $tmp58 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 12 }));
    panda$core$Int64 $tmp59 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp58);
    panda$core$Bit $tmp60 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp59, ((panda$core$Int64) { 0 }));
    $finallyReturn56 = $tmp60;
    return $finallyReturn56;
}
panda$core$String* org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations* self) {
    panda$core$MutableString* result65 = NULL;
    panda$core$MutableString* $tmp66;
    panda$core$MutableString* $tmp67;
    panda$core$String* $finallyReturn92;
    panda$core$String* $tmp94;
    panda$core$String* $tmp95;
    int $tmp64;
    {
        panda$core$MutableString* $tmp68 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp68);
        $tmp67 = $tmp68;
        $tmp66 = $tmp67;
        result65 = $tmp66;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
        panda$core$Bit $tmp69 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(self);
        if ($tmp69.value) {
        {
            panda$core$MutableString$append$panda$core$String(result65, &$s70);
        }
        }
        panda$core$Bit $tmp71 = org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(self);
        if ($tmp71.value) {
        {
            panda$core$MutableString$append$panda$core$String(result65, &$s72);
        }
        }
        panda$core$Bit $tmp73 = org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(self);
        if ($tmp73.value) {
        {
            panda$core$MutableString$append$panda$core$String(result65, &$s74);
        }
        }
        panda$core$Bit $tmp75 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self);
        if ($tmp75.value) {
        {
            panda$core$MutableString$append$panda$core$String(result65, &$s76);
        }
        }
        panda$core$Bit $tmp77 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(self);
        if ($tmp77.value) {
        {
            panda$core$MutableString$append$panda$core$String(result65, &$s78);
        }
        }
        panda$core$Bit $tmp79 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(self);
        if ($tmp79.value) {
        {
            panda$core$MutableString$append$panda$core$String(result65, &$s80);
        }
        }
        panda$core$Bit $tmp81 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(self);
        if ($tmp81.value) {
        {
            panda$core$MutableString$append$panda$core$String(result65, &$s82);
        }
        }
        panda$core$Bit $tmp83 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self);
        if ($tmp83.value) {
        {
            panda$core$MutableString$append$panda$core$String(result65, &$s84);
        }
        }
        panda$core$Bit $tmp85 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(self);
        if ($tmp85.value) {
        {
            panda$core$MutableString$append$panda$core$String(result65, &$s86);
        }
        }
        panda$core$Bit $tmp87 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(self);
        if ($tmp87.value) {
        {
            panda$core$MutableString$append$panda$core$String(result65, &$s88);
        }
        }
        panda$core$Bit $tmp89 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(self);
        if ($tmp89.value) {
        {
            panda$core$MutableString$append$panda$core$String(result65, &$s90);
        }
        }
        panda$core$Bit $tmp91 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(self);
        if ($tmp91.value) {
        {
            panda$core$MutableString$append$panda$core$String(result65, &$s92);
        }
        }
        panda$core$String* $tmp96 = panda$core$MutableString$finish$R$panda$core$String(result65);
        $tmp95 = $tmp96;
        $tmp94 = $tmp95;
        $finallyReturn92 = $tmp94;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp94));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp95));
        $tmp64 = 0;
        goto $l62;
        $l97:;
        return $finallyReturn92;
    }
    $l62:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result65));
    result65 = NULL;
    switch ($tmp64) {
        case 0: goto $l97;
    }
    $l99:;
}
void org$pandalanguage$pandac$Annotations$cleanup(org$pandalanguage$pandac$Annotations* self) {
    int $tmp102;
    {
    }
    $tmp102 = -1;
    goto $l100;
    $l100:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp102) {
        case -1: goto $l103;
    }
    $l103:;
}

