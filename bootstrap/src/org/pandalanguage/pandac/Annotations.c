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
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, 1746654831099, NULL };

void org$pandalanguage$pandac$Annotations$init(org$pandalanguage$pandac$Annotations* self) {
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64(self, ((panda$core$Int64) { 0 }));
}
void org$pandalanguage$pandac$Annotations$init$panda$core$Int64(org$pandalanguage$pandac$Annotations* self, panda$core$Int64 p_flags) {
    self->flags = p_flags;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp3 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp3);
    panda$core$Bit $tmp5 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2 = $tmp5;
    return $tmp2;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp7 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
    panda$core$Int64 $tmp8 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp7);
    panda$core$Bit $tmp9 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp8, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp6 = $tmp9;
    return $tmp6;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp11 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp12 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp11);
    panda$core$Bit $tmp13 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp12, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp10 = $tmp13;
    return $tmp10;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp15 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp16 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp15);
    panda$core$Bit $tmp17 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp16, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp14 = $tmp17;
    return $tmp14;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp19 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
    panda$core$Int64 $tmp20 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp19);
    panda$core$Bit $tmp21 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp20, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp18 = $tmp21;
    return $tmp18;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp23 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
    panda$core$Int64 $tmp24 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp23);
    panda$core$Bit $tmp25 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp24, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp22 = $tmp25;
    return $tmp22;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp27 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp28 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp27);
    panda$core$Bit $tmp29 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp28, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp26 = $tmp29;
    return $tmp26;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp31 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
    panda$core$Int64 $tmp32 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp31);
    panda$core$Bit $tmp33 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp32, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp30 = $tmp33;
    return $tmp30;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp35 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
    panda$core$Int64 $tmp36 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp35);
    panda$core$Bit $tmp37 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp36, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp34 = $tmp37;
    return $tmp34;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp39 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
    panda$core$Int64 $tmp40 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp39);
    panda$core$Bit $tmp41 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp40, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp38 = $tmp41;
    return $tmp38;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp43 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
    panda$core$Int64 $tmp44 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp43);
    panda$core$Bit $tmp45 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp44, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp42 = $tmp45;
    return $tmp42;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp47 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 12 }));
    panda$core$Int64 $tmp48 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp47);
    panda$core$Bit $tmp49 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp48, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp46 = $tmp49;
    return $tmp46;
}
panda$core$String* org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations* self) {
    panda$core$MutableString* result50;
    panda$core$String* tmp178;
    panda$core$MutableString* $tmp53 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp53);
    panda$core$MutableString* $tmp52 = $tmp53;
    panda$core$MutableString* $tmp51 = $tmp52;
    result50 = $tmp51;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
    panda$core$Bit $tmp54 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(self);
    if ($tmp54.value) {
    {
        panda$core$MutableString$append$panda$core$String(result50, &$s55);
    }
    }
    panda$core$Bit $tmp56 = org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(self);
    if ($tmp56.value) {
    {
        panda$core$MutableString$append$panda$core$String(result50, &$s57);
    }
    }
    panda$core$Bit $tmp58 = org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(self);
    if ($tmp58.value) {
    {
        panda$core$MutableString$append$panda$core$String(result50, &$s59);
    }
    }
    panda$core$Bit $tmp60 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self);
    if ($tmp60.value) {
    {
        panda$core$MutableString$append$panda$core$String(result50, &$s61);
    }
    }
    panda$core$Bit $tmp62 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(self);
    if ($tmp62.value) {
    {
        panda$core$MutableString$append$panda$core$String(result50, &$s63);
    }
    }
    panda$core$Bit $tmp64 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(self);
    if ($tmp64.value) {
    {
        panda$core$MutableString$append$panda$core$String(result50, &$s65);
    }
    }
    panda$core$Bit $tmp66 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(self);
    if ($tmp66.value) {
    {
        panda$core$MutableString$append$panda$core$String(result50, &$s67);
    }
    }
    panda$core$Bit $tmp68 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self);
    if ($tmp68.value) {
    {
        panda$core$MutableString$append$panda$core$String(result50, &$s69);
    }
    }
    panda$core$Bit $tmp70 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(self);
    if ($tmp70.value) {
    {
        panda$core$MutableString$append$panda$core$String(result50, &$s71);
    }
    }
    panda$core$Bit $tmp72 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(self);
    if ($tmp72.value) {
    {
        panda$core$MutableString$append$panda$core$String(result50, &$s73);
    }
    }
    panda$core$Bit $tmp74 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(self);
    if ($tmp74.value) {
    {
        panda$core$MutableString$append$panda$core$String(result50, &$s75);
    }
    }
    panda$core$Bit $tmp76 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(self);
    if ($tmp76.value) {
    {
        panda$core$MutableString$append$panda$core$String(result50, &$s77);
    }
    }
    {
        panda$core$String* $tmp81 = panda$core$MutableString$finish$R$panda$core$String(result50);
        panda$core$String* $tmp80 = $tmp81;
        panda$core$String* $tmp79 = $tmp80;
        tmp178 = $tmp79;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result50));
        panda$core$String* $tmp82 = tmp178;
        return $tmp82;
    }
}
void org$pandalanguage$pandac$Annotations$cleanup(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

