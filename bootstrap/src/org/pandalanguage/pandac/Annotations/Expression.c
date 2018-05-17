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
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72\x28", 7, 176339923868825, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x28", 6, 1745936895859, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64\x28", 9, 1798840529767313334, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

panda$core$String* org$pandalanguage$pandac$Annotations$Expression$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations$Expression* self) {
    org$pandalanguage$pandac$Annotations$Expression* $match$28_135 = NULL;
    org$pandalanguage$pandac$Annotations$Expression* $tmp6;
    org$pandalanguage$pandac$ASTNode* expr8 = NULL;
    panda$core$String* $finallyReturn9;
    panda$core$String* $tmp11;
    panda$core$String* $tmp12;
    panda$core$String* $tmp13;
    org$pandalanguage$pandac$ASTNode* expr21 = NULL;
    panda$core$String* $finallyReturn22;
    panda$core$String* $tmp24;
    panda$core$String* $tmp25;
    panda$core$String* $tmp26;
    org$pandalanguage$pandac$ASTNode* expr34 = NULL;
    panda$core$String* $finallyReturn35;
    panda$core$String* $tmp37;
    panda$core$String* $tmp38;
    panda$core$String* $tmp39;
    org$pandalanguage$pandac$ASTNode* expr47 = NULL;
    panda$core$String* $finallyReturn48;
    panda$core$String* $tmp50;
    panda$core$String* $tmp51;
    panda$core$String* $tmp52;
    int $tmp4;
    {
        $tmp6 = self;
        $match$28_135 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$28_135->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp7.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp9 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$28_135->$data + 0));
            expr8 = *$tmp9;
            panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s14, ((panda$core$Object*) expr8));
            $tmp13 = $tmp15;
            panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp13, &$s16);
            $tmp12 = $tmp17;
            $tmp11 = $tmp12;
            $finallyReturn9 = $tmp11;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
            $tmp4 = 0;
            goto $l2;
            $l18:;
            return $finallyReturn9;
        }
        }
        else {
        panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$28_135->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp20.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp22 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$28_135->$data + 0));
            expr21 = *$tmp22;
            panda$core$String* $tmp28 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s27, ((panda$core$Object*) expr21));
            $tmp26 = $tmp28;
            panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp26, &$s29);
            $tmp25 = $tmp30;
            $tmp24 = $tmp25;
            $finallyReturn22 = $tmp24;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp24));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
            $tmp4 = 1;
            goto $l2;
            $l31:;
            return $finallyReturn22;
        }
        }
        else {
        panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$28_135->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp33.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp35 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$28_135->$data + 0));
            expr34 = *$tmp35;
            panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s40, ((panda$core$Object*) expr34));
            $tmp39 = $tmp41;
            panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp39, &$s42);
            $tmp38 = $tmp43;
            $tmp37 = $tmp38;
            $finallyReturn35 = $tmp37;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
            $tmp4 = 2;
            goto $l2;
            $l44:;
            return $finallyReturn35;
        }
        }
        else {
        panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$28_135->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp46.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp48 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$28_135->$data + 0));
            expr47 = *$tmp48;
            panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s53, ((panda$core$Object*) expr47));
            $tmp52 = $tmp54;
            panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, &$s55);
            $tmp51 = $tmp56;
            $tmp50 = $tmp51;
            $finallyReturn48 = $tmp50;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
            $tmp4 = 3;
            goto $l2;
            $l57:;
            return $finallyReturn48;
        }
        }
        }
        }
        }
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    switch ($tmp4) {
        case 3: goto $l57;
        case -1: goto $l59;
        case 1: goto $l31;
        case 2: goto $l44;
        case 0: goto $l18;
    }
    $l59:;
}
void org$pandalanguage$pandac$Annotations$Expression$cleanup(org$pandalanguage$pandac$Annotations$Expression* self) {
    org$pandalanguage$pandac$Annotations$Expression* $match$20_566 = NULL;
    org$pandalanguage$pandac$Annotations$Expression* $tmp67;
    org$pandalanguage$pandac$ASTNode* _f069 = NULL;
    org$pandalanguage$pandac$ASTNode* _f072 = NULL;
    org$pandalanguage$pandac$ASTNode* _f075 = NULL;
    org$pandalanguage$pandac$ASTNode* _f078 = NULL;
    int $tmp62;
    {
        int $tmp65;
        {
            $tmp67 = self;
            $match$20_566 = $tmp67;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
            panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$20_566->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp68.value) {
            {
                org$pandalanguage$pandac$ASTNode** $tmp70 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$20_566->$data + 0));
                _f069 = *$tmp70;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f069));
            }
            }
            else {
            panda$core$Bit $tmp71 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$20_566->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp71.value) {
            {
                org$pandalanguage$pandac$ASTNode** $tmp73 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$20_566->$data + 0));
                _f072 = *$tmp73;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f072));
            }
            }
            else {
            panda$core$Bit $tmp74 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$20_566->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp74.value) {
            {
                org$pandalanguage$pandac$ASTNode** $tmp76 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$20_566->$data + 0));
                _f075 = *$tmp76;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f075));
            }
            }
            else {
            panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$20_566->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp77.value) {
            {
                org$pandalanguage$pandac$ASTNode** $tmp79 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$20_566->$data + 0));
                _f078 = *$tmp79;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f078));
            }
            }
            }
            }
            }
        }
        $tmp65 = -1;
        goto $l63;
        $l63:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
        switch ($tmp65) {
            case -1: goto $l80;
        }
        $l80:;
    }
    $tmp62 = -1;
    goto $l60;
    $l60:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp62) {
        case -1: goto $l81;
    }
    $l81:;
}
void org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Annotations$Expression* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$ASTNode* p_f0) {
    org$pandalanguage$pandac$ASTNode* $tmp82;
    org$pandalanguage$pandac$ASTNode* $tmp85;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$ASTNode** $tmp83 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 0));
        $tmp82 = *$tmp83;
        org$pandalanguage$pandac$ASTNode** $tmp84 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 0));
        $tmp85 = p_f0;
        *$tmp84 = $tmp85;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
    }
}






