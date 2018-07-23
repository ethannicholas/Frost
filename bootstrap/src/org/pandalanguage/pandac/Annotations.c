#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Annotations/Expression.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Annotations$class_type org$pandalanguage$pandac$Annotations$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$Annotations$convert$R$panda$core$String, org$pandalanguage$pandac$Annotations$cleanup, org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isSynthetic$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isUnsafeImmutable$R$panda$core$Bit, org$pandalanguage$pandac$Annotations$isDefault$R$panda$core$Bit} };

typedef panda$collections$Iterator* (*$fn144)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn151)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn162)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn166)(org$pandalanguage$pandac$Annotations$Expression*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 36, -7200059981408518764, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 1798843609467911838, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, -4506051960376467375, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 1798825499419951591, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, 176202664446009, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -2794640180115170421, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, -2902695637431482918, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -2860564891551370826, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 176233895775897, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, -2948369507313257333, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, 17802860384471114, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, 3105123519507170732, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, 1746654831099, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x0a", 11, -1149303354726166758, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x0a", 17, -4826913329991877603, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74\x0a", 9, 1797543213588381616, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x70\x61\x6e\x64\x61", 17, -1635004358326492355, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

void org$pandalanguage$pandac$Annotations$init(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Int64 $tmp2;
    self->expressions = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64(self, $tmp2);
}
void org$pandalanguage$pandac$Annotations$init$panda$core$Int64(org$pandalanguage$pandac$Annotations* self, panda$core$Int64 p_flags) {
    self->expressions = NULL;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q(self, p_flags, NULL);
}
void org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q(org$pandalanguage$pandac$Annotations* self, panda$core$Int64 p_flags, panda$collections$ListView* p_expressions) {
    panda$collections$Array* $tmp3;
    panda$collections$Array* $tmp4;
    panda$collections$Array* $tmp5;
    panda$collections$Array* $tmp7;
    panda$collections$Array* $tmp8;
    self->expressions = NULL;
    self->flags = p_flags;
    if (((panda$core$Bit) { p_expressions != NULL }).value) {
    {
        {
            $tmp3 = self->expressions;
            panda$collections$Array* $tmp6 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp6, ((panda$collections$CollectionView*) p_expressions));
            $tmp5 = $tmp6;
            $tmp4 = $tmp5;
            self->expressions = $tmp4;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
        }
    }
    }
    else {
    {
        {
            $tmp7 = self->expressions;
            $tmp8 = NULL;
            self->expressions = $tmp8;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
        }
    }
    }
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue9;
    panda$core$Int64 $tmp10;
    panda$core$Int64 $tmp12;
    panda$core$Int64$init$builtin_int64(&$tmp10, 2);
    panda$core$Int64 $tmp11 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp10);
    panda$core$Int64$init$builtin_int64(&$tmp12, 0);
    panda$core$Bit $tmp13 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp11, $tmp12);
    $returnValue9 = $tmp13;
    return $returnValue9;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue15;
    panda$core$Int64 $tmp16;
    panda$core$Int64 $tmp18;
    panda$core$Int64$init$builtin_int64(&$tmp16, 4);
    panda$core$Int64 $tmp17 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp16);
    panda$core$Int64$init$builtin_int64(&$tmp18, 0);
    panda$core$Bit $tmp19 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp17, $tmp18);
    $returnValue15 = $tmp19;
    return $returnValue15;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue21;
    panda$core$Int64 $tmp22;
    panda$core$Int64 $tmp24;
    panda$core$Int64$init$builtin_int64(&$tmp22, 8);
    panda$core$Int64 $tmp23 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp22);
    panda$core$Int64$init$builtin_int64(&$tmp24, 0);
    panda$core$Bit $tmp25 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp23, $tmp24);
    $returnValue21 = $tmp25;
    return $returnValue21;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue27;
    panda$core$Int64 $tmp28;
    panda$core$Int64 $tmp30;
    panda$core$Int64$init$builtin_int64(&$tmp28, 16);
    panda$core$Int64 $tmp29 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp28);
    panda$core$Int64$init$builtin_int64(&$tmp30, 0);
    panda$core$Bit $tmp31 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp29, $tmp30);
    $returnValue27 = $tmp31;
    return $returnValue27;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue33;
    panda$core$Int64 $tmp34;
    panda$core$Int64 $tmp36;
    panda$core$Int64$init$builtin_int64(&$tmp34, 32);
    panda$core$Int64 $tmp35 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp34);
    panda$core$Int64$init$builtin_int64(&$tmp36, 0);
    panda$core$Bit $tmp37 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp35, $tmp36);
    $returnValue33 = $tmp37;
    return $returnValue33;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue39;
    panda$core$Int64 $tmp40;
    panda$core$Int64 $tmp42;
    panda$core$Int64$init$builtin_int64(&$tmp40, 64);
    panda$core$Int64 $tmp41 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp40);
    panda$core$Int64$init$builtin_int64(&$tmp42, 0);
    panda$core$Bit $tmp43 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp41, $tmp42);
    $returnValue39 = $tmp43;
    return $returnValue39;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue45;
    panda$core$Int64 $tmp46;
    panda$core$Int64 $tmp48;
    panda$core$Int64$init$builtin_int64(&$tmp46, 128);
    panda$core$Int64 $tmp47 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp46);
    panda$core$Int64$init$builtin_int64(&$tmp48, 0);
    panda$core$Bit $tmp49 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp47, $tmp48);
    $returnValue45 = $tmp49;
    return $returnValue45;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue51;
    panda$core$Int64 $tmp52;
    panda$core$Int64 $tmp54;
    panda$core$Int64$init$builtin_int64(&$tmp52, 256);
    panda$core$Int64 $tmp53 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp52);
    panda$core$Int64$init$builtin_int64(&$tmp54, 0);
    panda$core$Bit $tmp55 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp53, $tmp54);
    $returnValue51 = $tmp55;
    return $returnValue51;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue57;
    panda$core$Int64 $tmp58;
    panda$core$Int64 $tmp60;
    panda$core$Int64$init$builtin_int64(&$tmp58, 512);
    panda$core$Int64 $tmp59 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp58);
    panda$core$Int64$init$builtin_int64(&$tmp60, 0);
    panda$core$Bit $tmp61 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp59, $tmp60);
    $returnValue57 = $tmp61;
    return $returnValue57;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue63;
    panda$core$Int64 $tmp64;
    panda$core$Int64 $tmp66;
    panda$core$Int64$init$builtin_int64(&$tmp64, 1024);
    panda$core$Int64 $tmp65 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp64);
    panda$core$Int64$init$builtin_int64(&$tmp66, 0);
    panda$core$Bit $tmp67 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp65, $tmp66);
    $returnValue63 = $tmp67;
    return $returnValue63;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue69;
    panda$core$Int64 $tmp70;
    panda$core$Int64 $tmp72;
    panda$core$Int64$init$builtin_int64(&$tmp70, 2048);
    panda$core$Int64 $tmp71 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp70);
    panda$core$Int64$init$builtin_int64(&$tmp72, 0);
    panda$core$Bit $tmp73 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp71, $tmp72);
    $returnValue69 = $tmp73;
    return $returnValue69;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue75;
    panda$core$Int64 $tmp76;
    panda$core$Int64 $tmp78;
    panda$core$Int64$init$builtin_int64(&$tmp76, 4096);
    panda$core$Int64 $tmp77 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp76);
    panda$core$Int64$init$builtin_int64(&$tmp78, 0);
    panda$core$Bit $tmp79 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp77, $tmp78);
    $returnValue75 = $tmp79;
    return $returnValue75;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isSynthetic$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue81;
    panda$core$Int64 $tmp82;
    panda$core$Int64 $tmp84;
    panda$core$Int64$init$builtin_int64(&$tmp82, 8192);
    panda$core$Int64 $tmp83 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp82);
    panda$core$Int64$init$builtin_int64(&$tmp84, 0);
    panda$core$Bit $tmp85 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp83, $tmp84);
    $returnValue81 = $tmp85;
    return $returnValue81;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isUnsafeImmutable$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue87;
    panda$core$Int64 $tmp88;
    panda$core$Int64 $tmp90;
    panda$core$Int64$init$builtin_int64(&$tmp88, 16384);
    panda$core$Int64 $tmp89 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp88);
    panda$core$Int64$init$builtin_int64(&$tmp90, 0);
    panda$core$Bit $tmp91 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp89, $tmp90);
    $returnValue87 = $tmp91;
    return $returnValue87;
}
panda$core$Bit org$pandalanguage$pandac$Annotations$isDefault$R$panda$core$Bit(org$pandalanguage$pandac$Annotations* self) {
    panda$core$Bit $returnValue93;
    panda$core$Int64 $tmp94;
    panda$core$Int64 $tmp96;
    panda$core$Int64$init$builtin_int64(&$tmp94, 32768);
    panda$core$Int64 $tmp95 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self->flags, $tmp94);
    panda$core$Int64$init$builtin_int64(&$tmp96, 0);
    panda$core$Bit $tmp97 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp95, $tmp96);
    $returnValue93 = $tmp97;
    return $returnValue93;
}
panda$core$String* org$pandalanguage$pandac$Annotations$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations* self) {
    panda$core$MutableString* result102 = NULL;
    panda$core$MutableString* $tmp103;
    panda$core$MutableString* $tmp104;
    panda$collections$Iterator* Iter$173$13139 = NULL;
    panda$collections$Iterator* $tmp140;
    panda$collections$Iterator* $tmp141;
    org$pandalanguage$pandac$Annotations$Expression* expr157 = NULL;
    org$pandalanguage$pandac$Annotations$Expression* $tmp158;
    panda$core$Object* $tmp159;
    panda$core$String* $tmp164;
    panda$core$String* $tmp165;
    panda$core$String* $returnValue172;
    panda$core$String* $tmp173;
    panda$core$String* $tmp174;
    int $tmp101;
    {
        panda$core$MutableString* $tmp105 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp105);
        $tmp104 = $tmp105;
        $tmp103 = $tmp104;
        result102 = $tmp103;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
        panda$core$Bit $tmp106 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(self);
        if ($tmp106.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s107);
        }
        }
        panda$core$Bit $tmp108 = org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(self);
        if ($tmp108.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s109);
        }
        }
        panda$core$Bit $tmp110 = org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(self);
        if ($tmp110.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s111);
        }
        }
        panda$core$Bit $tmp112 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(self);
        if ($tmp112.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s113);
        }
        }
        panda$core$Bit $tmp114 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(self);
        if ($tmp114.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s115);
        }
        }
        panda$core$Bit $tmp116 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(self);
        if ($tmp116.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s117);
        }
        }
        panda$core$Bit $tmp118 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(self);
        if ($tmp118.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s119);
        }
        }
        panda$core$Bit $tmp120 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(self);
        if ($tmp120.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s121);
        }
        }
        panda$core$Bit $tmp122 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(self);
        if ($tmp122.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s123);
        }
        }
        panda$core$Bit $tmp124 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(self);
        if ($tmp124.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s125);
        }
        }
        panda$core$Bit $tmp126 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(self);
        if ($tmp126.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s127);
        }
        }
        panda$core$Bit $tmp128 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(self);
        if ($tmp128.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s129);
        }
        }
        panda$core$Bit $tmp130 = org$pandalanguage$pandac$Annotations$isSynthetic$R$panda$core$Bit(self);
        if ($tmp130.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s131);
        }
        }
        panda$core$Bit $tmp132 = org$pandalanguage$pandac$Annotations$isUnsafeImmutable$R$panda$core$Bit(self);
        if ($tmp132.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s133);
        }
        }
        panda$core$Bit $tmp134 = org$pandalanguage$pandac$Annotations$isDefault$R$panda$core$Bit(self);
        if ($tmp134.value) {
        {
            panda$core$MutableString$append$panda$core$String(result102, &$s135);
        }
        }
        if (((panda$core$Bit) { self->expressions != NULL }).value) {
        {
            {
                int $tmp138;
                {
                    ITable* $tmp142 = ((panda$collections$Iterable*) self->expressions)->$class->itable;
                    while ($tmp142->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp142 = $tmp142->next;
                    }
                    $fn144 $tmp143 = $tmp142->methods[0];
                    panda$collections$Iterator* $tmp145 = $tmp143(((panda$collections$Iterable*) self->expressions));
                    $tmp141 = $tmp145;
                    $tmp140 = $tmp141;
                    Iter$173$13139 = $tmp140;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
                    $l146:;
                    ITable* $tmp149 = Iter$173$13139->$class->itable;
                    while ($tmp149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp149 = $tmp149->next;
                    }
                    $fn151 $tmp150 = $tmp149->methods[0];
                    panda$core$Bit $tmp152 = $tmp150(Iter$173$13139);
                    panda$core$Bit $tmp153 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp152);
                    bool $tmp148 = $tmp153.value;
                    if (!$tmp148) goto $l147;
                    {
                        int $tmp156;
                        {
                            ITable* $tmp160 = Iter$173$13139->$class->itable;
                            while ($tmp160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp160 = $tmp160->next;
                            }
                            $fn162 $tmp161 = $tmp160->methods[1];
                            panda$core$Object* $tmp163 = $tmp161(Iter$173$13139);
                            $tmp159 = $tmp163;
                            $tmp158 = ((org$pandalanguage$pandac$Annotations$Expression*) $tmp159);
                            expr157 = $tmp158;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp159);
                            panda$core$String* $tmp167 = (($fn166) expr157->$class->vtable[0])(expr157);
                            $tmp165 = $tmp167;
                            panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp165, &$s168);
                            $tmp164 = $tmp169;
                            panda$core$MutableString$append$panda$core$String(result102, $tmp164);
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
                        }
                        $tmp156 = -1;
                        goto $l154;
                        $l154:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr157));
                        expr157 = NULL;
                        switch ($tmp156) {
                            case -1: goto $l170;
                        }
                        $l170:;
                    }
                    goto $l146;
                    $l147:;
                }
                $tmp138 = -1;
                goto $l136;
                $l136:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$173$13139));
                Iter$173$13139 = NULL;
                switch ($tmp138) {
                    case -1: goto $l171;
                }
                $l171:;
            }
        }
        }
        panda$core$String* $tmp175 = panda$core$MutableString$finish$R$panda$core$String(result102);
        $tmp174 = $tmp175;
        $tmp173 = $tmp174;
        $returnValue172 = $tmp173;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
        $tmp101 = 0;
        goto $l99;
        $l176:;
        return $returnValue172;
    }
    $l99:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result102));
    result102 = NULL;
    switch ($tmp101) {
        case 0: goto $l176;
    }
    $l178:;
    if (false) goto $l179; else goto $l180;
    $l180:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s181, (panda$core$Int64) { 125 }, &$s182);
    abort();
    $l179:;
    abort();
}
void org$pandalanguage$pandac$Annotations$cleanup(org$pandalanguage$pandac$Annotations* self) {
    int $tmp185;
    {
    }
    $tmp185 = -1;
    goto $l183;
    $l183:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp185) {
        case -1: goto $l186;
    }
    $l186:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->expressions));
}

