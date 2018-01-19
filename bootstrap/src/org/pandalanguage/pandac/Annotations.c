#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Annotations$class_type org$pandalanguage$pandac$Annotations$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$Annotations$convert$R$panda$core$String, org$pandalanguage$pandac$Annotations$cleanup, org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 36, -7200059981408518764, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };

void org$pandalanguage$pandac$Annotations$init(org$pandalanguage$pandac$Annotations* self) {
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64(self, ((panda$core$Int64) { 0 }));
}
void org$pandalanguage$pandac$Annotations$init$panda$core$Int64(org$pandalanguage$pandac$Annotations* self, panda$core$Int64 p_flags) {
    self->flags = p_flags;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp2 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp3 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp2);
    panda$core$Bit $tmp4 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3, ((panda$core$Int64) { 0 }));
    return $tmp4;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp5 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
    panda$core$Int64 $tmp6 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp5);
    panda$core$Bit $tmp7 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp6, ((panda$core$Int64) { 0 }));
    return $tmp7;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp8 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp9 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp8);
    panda$core$Bit $tmp10 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp9, ((panda$core$Int64) { 0 }));
    return $tmp10;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp11 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp12 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp11);
    panda$core$Bit $tmp13 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp12, ((panda$core$Int64) { 0 }));
    return $tmp13;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp14 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
    panda$core$Int64 $tmp15 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp14);
    panda$core$Bit $tmp16 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp15, ((panda$core$Int64) { 0 }));
    return $tmp16;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp17 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
    panda$core$Int64 $tmp18 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp17);
    panda$core$Bit $tmp19 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp18, ((panda$core$Int64) { 0 }));
    return $tmp19;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp20 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp21 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp20);
    panda$core$Bit $tmp22 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp21, ((panda$core$Int64) { 0 }));
    return $tmp22;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp23 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
    panda$core$Int64 $tmp24 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp23);
    panda$core$Bit $tmp25 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp24, ((panda$core$Int64) { 0 }));
    return $tmp25;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp26 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
    panda$core$Int64 $tmp27 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp26);
    panda$core$Bit $tmp28 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp27, ((panda$core$Int64) { 0 }));
    return $tmp28;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp29 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
    panda$core$Int64 $tmp30 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp29);
    panda$core$Bit $tmp31 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp30, ((panda$core$Int64) { 0 }));
    return $tmp31;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp32 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
    panda$core$Int64 $tmp33 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp32);
    panda$core$Bit $tmp34 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp33, ((panda$core$Int64) { 0 }));
    return $tmp34;
}
panda$core$String* org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations* self) {
    panda$core$MutableString* result35;
    panda$core$String* tmp160;
    panda$core$MutableString* $tmp36 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp36->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp36->refCount.value = 1;
    panda$core$MutableString$init($tmp36);
    result35 = $tmp36;
    panda$core$Bit $tmp38 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(self);
    if ($tmp38.value) {
    {
        panda$core$MutableString$append$panda$core$String(result35, &$s39);
    }
    }
    panda$core$Bit $tmp40 = org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(self);
    if ($tmp40.value) {
    {
        panda$core$MutableString$append$panda$core$String(result35, &$s41);
    }
    }
    panda$core$Bit $tmp42 = org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(self);
    if ($tmp42.value) {
    {
        panda$core$MutableString$append$panda$core$String(result35, &$s43);
    }
    }
    panda$core$Bit $tmp44 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self);
    if ($tmp44.value) {
    {
        panda$core$MutableString$append$panda$core$String(result35, &$s45);
    }
    }
    panda$core$Bit $tmp46 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(self);
    if ($tmp46.value) {
    {
        panda$core$MutableString$append$panda$core$String(result35, &$s47);
    }
    }
    panda$core$Bit $tmp48 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(self);
    if ($tmp48.value) {
    {
        panda$core$MutableString$append$panda$core$String(result35, &$s49);
    }
    }
    panda$core$Bit $tmp50 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(self);
    if ($tmp50.value) {
    {
        panda$core$MutableString$append$panda$core$String(result35, &$s51);
    }
    }
    panda$core$Bit $tmp52 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self);
    if ($tmp52.value) {
    {
        panda$core$MutableString$append$panda$core$String(result35, &$s53);
    }
    }
    panda$core$Bit $tmp54 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(self);
    if ($tmp54.value) {
    {
        panda$core$MutableString$append$panda$core$String(result35, &$s55);
    }
    }
    panda$core$Bit $tmp56 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(self);
    if ($tmp56.value) {
    {
        panda$core$MutableString$append$panda$core$String(result35, &$s57);
    }
    }
    panda$core$Bit $tmp58 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(self);
    if ($tmp58.value) {
    {
        panda$core$MutableString$append$panda$core$String(result35, &$s59);
    }
    }
    {
        panda$core$String* $tmp61 = panda$core$MutableString$finish$R$panda$core$String(result35);
        tmp160 = $tmp61;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result35));
        return tmp160;
    }
}
void org$pandalanguage$pandac$Annotations$cleanup(org$pandalanguage$pandac$Annotations* self) {
}

