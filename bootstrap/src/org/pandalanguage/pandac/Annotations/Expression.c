#include "org/pandalanguage/pandac/Annotations/Expression.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/ASTNode.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Annotations$Expression$class_type org$pandalanguage$pandac$Annotations$Expression$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$Annotations$Expression$convert$R$panda$core$String, org$pandalanguage$pandac$Annotations$Expression$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 47, -8446244350106613358, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72\x28", 7, 176339923868825, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x28", 6, 1745936895859, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64\x28", 9, 1798840529767313334, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79\x28", 10, -2784236252649266257, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x70\x61\x6e\x64\x61", 17, -1635004358326492355, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

panda$core$String* org$pandalanguage$pandac$Annotations$Expression$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations$Expression* self) {
    org$pandalanguage$pandac$Annotations$Expression* $match$32_135 = NULL;
    org$pandalanguage$pandac$Annotations$Expression* $tmp6;
    panda$core$Int64 $tmp7;
    org$pandalanguage$pandac$ASTNode* expr9 = NULL;
    panda$core$String* $returnValue11;
    panda$core$String* $tmp12;
    panda$core$String* $tmp13;
    panda$core$String* $tmp14;
    panda$core$Int64 $tmp21;
    org$pandalanguage$pandac$ASTNode* expr23 = NULL;
    panda$core$String* $tmp25;
    panda$core$String* $tmp26;
    panda$core$String* $tmp27;
    panda$core$Int64 $tmp34;
    org$pandalanguage$pandac$ASTNode* expr36 = NULL;
    panda$core$String* $tmp38;
    panda$core$String* $tmp39;
    panda$core$String* $tmp40;
    panda$core$Int64 $tmp47;
    org$pandalanguage$pandac$ASTNode* expr49 = NULL;
    panda$core$String* $tmp51;
    panda$core$String* $tmp52;
    panda$core$String* $tmp53;
    panda$core$Int64 $tmp60;
    org$pandalanguage$pandac$ASTNode* expr62 = NULL;
    panda$core$String* $tmp64;
    panda$core$String* $tmp65;
    panda$core$String* $tmp66;
    int $tmp4;
    {
        $tmp6 = self;
        $match$32_135 = $tmp6;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
        panda$core$Int64$init$builtin_int64(&$tmp7, 0);
        panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$32_135->$rawValue, $tmp7);
        if ($tmp8.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp10 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$32_135->$data + 8));
            expr9 = *$tmp10;
            panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s15, ((panda$core$Object*) expr9));
            $tmp14 = $tmp16;
            panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp14, &$s17);
            $tmp13 = $tmp18;
            $tmp12 = $tmp13;
            $returnValue11 = $tmp12;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
            $tmp4 = 0;
            goto $l2;
            $l19:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp21, 1);
        panda$core$Bit $tmp22 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$32_135->$rawValue, $tmp21);
        if ($tmp22.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp24 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$32_135->$data + 8));
            expr23 = *$tmp24;
            panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s28, ((panda$core$Object*) expr23));
            $tmp27 = $tmp29;
            panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, &$s30);
            $tmp26 = $tmp31;
            $tmp25 = $tmp26;
            $returnValue11 = $tmp25;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
            $tmp4 = 1;
            goto $l2;
            $l32:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp34, 2);
        panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$32_135->$rawValue, $tmp34);
        if ($tmp35.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp37 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$32_135->$data + 8));
            expr36 = *$tmp37;
            panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s41, ((panda$core$Object*) expr36));
            $tmp40 = $tmp42;
            panda$core$String* $tmp44 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp40, &$s43);
            $tmp39 = $tmp44;
            $tmp38 = $tmp39;
            $returnValue11 = $tmp38;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
            $tmp4 = 2;
            goto $l2;
            $l45:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp47, 3);
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$32_135->$rawValue, $tmp47);
        if ($tmp48.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp50 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$32_135->$data + 8));
            expr49 = *$tmp50;
            panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s54, ((panda$core$Object*) expr49));
            $tmp53 = $tmp55;
            panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp53, &$s56);
            $tmp52 = $tmp57;
            $tmp51 = $tmp52;
            $returnValue11 = $tmp51;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
            $tmp4 = 3;
            goto $l2;
            $l58:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp60, 4);
        panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$32_135->$rawValue, $tmp60);
        if ($tmp61.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp63 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$32_135->$data + 8));
            expr62 = *$tmp63;
            panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s67, ((panda$core$Object*) expr62));
            $tmp66 = $tmp68;
            panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp66, &$s69);
            $tmp65 = $tmp70;
            $tmp64 = $tmp65;
            $returnValue11 = $tmp64;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
            $tmp4 = 4;
            goto $l2;
            $l71:;
            return $returnValue11;
        }
        }
        }
        }
        }
        }
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
    switch ($tmp4) {
        case 3: goto $l58;
        case 4: goto $l71;
        case -1: goto $l73;
        case 1: goto $l32;
        case 0: goto $l19;
        case 2: goto $l45;
    }
    $l73:;
    if (false) goto $l74; else goto $l75;
    $l75:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s76, (panda$core$Int64) { 31 }, &$s77);
    abort();
    $l74:;
    abort();
}
void org$pandalanguage$pandac$Annotations$Expression$cleanup(org$pandalanguage$pandac$Annotations$Expression* self) {
    org$pandalanguage$pandac$Annotations$Expression* $match$23_584 = NULL;
    org$pandalanguage$pandac$Annotations$Expression* $tmp85;
    panda$core$Int64 $tmp86;
    panda$core$String* _f088 = NULL;
    org$pandalanguage$pandac$ASTNode* _f190 = NULL;
    panda$core$Int64 $tmp92;
    panda$core$String* _f094 = NULL;
    org$pandalanguage$pandac$ASTNode* _f196 = NULL;
    panda$core$Int64 $tmp98;
    panda$core$String* _f0100 = NULL;
    org$pandalanguage$pandac$ASTNode* _f1102 = NULL;
    panda$core$Int64 $tmp104;
    panda$core$String* _f0106 = NULL;
    org$pandalanguage$pandac$ASTNode* _f1108 = NULL;
    panda$core$Int64 $tmp110;
    panda$core$String* _f0112 = NULL;
    org$pandalanguage$pandac$ASTNode* _f1114 = NULL;
    int $tmp80;
    {
        int $tmp83;
        {
            $tmp85 = self;
            $match$23_584 = $tmp85;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
            panda$core$Int64$init$builtin_int64(&$tmp86, 0);
            panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23_584->$rawValue, $tmp86);
            if ($tmp87.value) {
            {
                panda$core$String** $tmp89 = ((panda$core$String**) ((char*) $match$23_584->$data + 0));
                _f088 = *$tmp89;
                org$pandalanguage$pandac$ASTNode** $tmp91 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$23_584->$data + 8));
                _f190 = *$tmp91;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f088));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f190));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp92, 1);
            panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23_584->$rawValue, $tmp92);
            if ($tmp93.value) {
            {
                panda$core$String** $tmp95 = ((panda$core$String**) ((char*) $match$23_584->$data + 0));
                _f094 = *$tmp95;
                org$pandalanguage$pandac$ASTNode** $tmp97 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$23_584->$data + 8));
                _f196 = *$tmp97;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f094));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f196));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp98, 2);
            panda$core$Bit $tmp99 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23_584->$rawValue, $tmp98);
            if ($tmp99.value) {
            {
                panda$core$String** $tmp101 = ((panda$core$String**) ((char*) $match$23_584->$data + 0));
                _f0100 = *$tmp101;
                org$pandalanguage$pandac$ASTNode** $tmp103 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$23_584->$data + 8));
                _f1102 = *$tmp103;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f0100));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f1102));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp104, 3);
            panda$core$Bit $tmp105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23_584->$rawValue, $tmp104);
            if ($tmp105.value) {
            {
                panda$core$String** $tmp107 = ((panda$core$String**) ((char*) $match$23_584->$data + 0));
                _f0106 = *$tmp107;
                org$pandalanguage$pandac$ASTNode** $tmp109 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$23_584->$data + 8));
                _f1108 = *$tmp109;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f0106));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f1108));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp110, 4);
            panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23_584->$rawValue, $tmp110);
            if ($tmp111.value) {
            {
                panda$core$String** $tmp113 = ((panda$core$String**) ((char*) $match$23_584->$data + 0));
                _f0112 = *$tmp113;
                org$pandalanguage$pandac$ASTNode** $tmp115 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$23_584->$data + 8));
                _f1114 = *$tmp115;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f0112));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f1114));
            }
            }
            }
            }
            }
            }
        }
        $tmp83 = -1;
        goto $l81;
        $l81:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
        switch ($tmp83) {
            case -1: goto $l116;
        }
        $l116:;
    }
    $tmp80 = -1;
    goto $l78;
    $l78:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp80) {
        case -1: goto $l117;
    }
    $l117:;
}
void org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Annotations$Expression* self, panda$core$Int64 p_rv, panda$core$String* p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    panda$core$String* $tmp118;
    panda$core$String* $tmp121;
    org$pandalanguage$pandac$ASTNode* $tmp122;
    org$pandalanguage$pandac$ASTNode* $tmp125;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp119 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp118 = *$tmp119;
        panda$core$String** $tmp120 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp121 = p_f0;
        *$tmp120 = $tmp121;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp123 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 8));
        $tmp122 = *$tmp123;
        org$pandalanguage$pandac$ASTNode** $tmp124 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 8));
        $tmp125 = p_f1;
        *$tmp124 = $tmp125;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
    }
}





