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
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72\x28", 7, 176339923868825, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x28", 6, 1745936895859, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64\x28", 9, 1798840529767313334, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

panda$core$String* org$pandalanguage$pandac$Annotations$Expression$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations$Expression* self) {
    org$pandalanguage$pandac$Annotations$Expression* $match$30_135 = NULL;
    org$pandalanguage$pandac$Annotations$Expression* $tmp6;
    org$pandalanguage$pandac$ASTNode* expr8 = NULL;
    panda$core$String* $returnValue10;
    panda$core$String* $tmp11;
    panda$core$String* $tmp12;
    panda$core$String* $tmp13;
    org$pandalanguage$pandac$ASTNode* expr21 = NULL;
    panda$core$String* $tmp23;
    panda$core$String* $tmp24;
    panda$core$String* $tmp25;
    org$pandalanguage$pandac$ASTNode* expr33 = NULL;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$String* $tmp37;
    org$pandalanguage$pandac$ASTNode* expr45 = NULL;
    panda$core$String* $tmp47;
    panda$core$String* $tmp48;
    panda$core$String* $tmp49;
    int $tmp4;
    {
        $tmp6 = self;
        $match$30_135 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$30_135->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp7.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp9 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$30_135->$data + 0));
            expr8 = *$tmp9;
            panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s14, ((panda$core$Object*) expr8));
            $tmp13 = $tmp15;
            panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp13, &$s16);
            $tmp12 = $tmp17;
            $tmp11 = $tmp12;
            $returnValue10 = $tmp11;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
            $tmp4 = 0;
            goto $l2;
            $l18:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$30_135->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp20.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp22 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$30_135->$data + 0));
            expr21 = *$tmp22;
            panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s26, ((panda$core$Object*) expr21));
            $tmp25 = $tmp27;
            panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp25, &$s28);
            $tmp24 = $tmp29;
            $tmp23 = $tmp24;
            $returnValue10 = $tmp23;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
            $tmp4 = 1;
            goto $l2;
            $l30:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$30_135->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp32.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp34 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$30_135->$data + 0));
            expr33 = *$tmp34;
            panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s38, ((panda$core$Object*) expr33));
            $tmp37 = $tmp39;
            panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, &$s40);
            $tmp36 = $tmp41;
            $tmp35 = $tmp36;
            $returnValue10 = $tmp35;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
            $tmp4 = 2;
            goto $l2;
            $l42:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$30_135->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp44.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp46 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$30_135->$data + 0));
            expr45 = *$tmp46;
            panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s50, ((panda$core$Object*) expr45));
            $tmp49 = $tmp51;
            panda$core$String* $tmp53 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp49, &$s52);
            $tmp48 = $tmp53;
            $tmp47 = $tmp48;
            $returnValue10 = $tmp47;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
            $tmp4 = 3;
            goto $l2;
            $l54:;
            return $returnValue10;
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
        case -1: goto $l56;
        case 2: goto $l42;
        case 1: goto $l30;
        case 0: goto $l18;
        case 3: goto $l54;
    }
    $l56:;
}
void org$pandalanguage$pandac$Annotations$Expression$cleanup(org$pandalanguage$pandac$Annotations$Expression* self) {
    org$pandalanguage$pandac$Annotations$Expression* $match$22_563 = NULL;
    org$pandalanguage$pandac$Annotations$Expression* $tmp64;
    org$pandalanguage$pandac$ASTNode* _f066 = NULL;
    org$pandalanguage$pandac$ASTNode* _f069 = NULL;
    org$pandalanguage$pandac$ASTNode* _f072 = NULL;
    org$pandalanguage$pandac$ASTNode* _f075 = NULL;
    int $tmp59;
    {
        int $tmp62;
        {
            $tmp64 = self;
            $match$22_563 = $tmp64;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
            panda$core$Bit $tmp65 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_563->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp65.value) {
            {
                org$pandalanguage$pandac$ASTNode** $tmp67 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$22_563->$data + 0));
                _f066 = *$tmp67;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f066));
            }
            }
            else {
            panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_563->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp68.value) {
            {
                org$pandalanguage$pandac$ASTNode** $tmp70 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$22_563->$data + 0));
                _f069 = *$tmp70;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f069));
            }
            }
            else {
            panda$core$Bit $tmp71 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_563->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp71.value) {
            {
                org$pandalanguage$pandac$ASTNode** $tmp73 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$22_563->$data + 0));
                _f072 = *$tmp73;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f072));
            }
            }
            else {
            panda$core$Bit $tmp74 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_563->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp74.value) {
            {
                org$pandalanguage$pandac$ASTNode** $tmp76 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$22_563->$data + 0));
                _f075 = *$tmp76;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f075));
            }
            }
            }
            }
            }
        }
        $tmp62 = -1;
        goto $l60;
        $l60:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
        switch ($tmp62) {
            case -1: goto $l77;
        }
        $l77:;
    }
    $tmp59 = -1;
    goto $l57;
    $l57:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp59) {
        case -1: goto $l78;
    }
    $l78:;
}
void org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Annotations$Expression* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$ASTNode* p_f0) {
    org$pandalanguage$pandac$ASTNode* $tmp79;
    org$pandalanguage$pandac$ASTNode* $tmp82;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$ASTNode** $tmp80 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 0));
        $tmp79 = *$tmp80;
        org$pandalanguage$pandac$ASTNode** $tmp81 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 0));
        $tmp82 = p_f0;
        *$tmp81 = $tmp82;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp82));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
    }
}






