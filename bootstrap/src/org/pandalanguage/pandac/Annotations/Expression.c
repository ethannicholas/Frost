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

panda$core$String* org$pandalanguage$pandac$Annotations$Expression$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations$Expression* self) {
    org$pandalanguage$pandac$Annotations$Expression* $match$30_135 = NULL;
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
    int $tmp4;
    {
        $tmp6 = self;
        $match$30_135 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Int64$init$builtin_int64(&$tmp7, 0);
        panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$30_135->$rawValue, $tmp7);
        if ($tmp8.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp10 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$30_135->$data + 0));
            expr9 = *$tmp10;
            panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s15, ((panda$core$Object*) expr9));
            $tmp14 = $tmp16;
            panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp14, &$s17);
            $tmp13 = $tmp18;
            $tmp12 = $tmp13;
            $returnValue11 = $tmp12;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
            $tmp4 = 0;
            goto $l2;
            $l19:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp21, 1);
        panda$core$Bit $tmp22 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$30_135->$rawValue, $tmp21);
        if ($tmp22.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp24 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$30_135->$data + 0));
            expr23 = *$tmp24;
            panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s28, ((panda$core$Object*) expr23));
            $tmp27 = $tmp29;
            panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, &$s30);
            $tmp26 = $tmp31;
            $tmp25 = $tmp26;
            $returnValue11 = $tmp25;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
            $tmp4 = 1;
            goto $l2;
            $l32:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp34, 2);
        panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$30_135->$rawValue, $tmp34);
        if ($tmp35.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp37 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$30_135->$data + 0));
            expr36 = *$tmp37;
            panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s41, ((panda$core$Object*) expr36));
            $tmp40 = $tmp42;
            panda$core$String* $tmp44 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp40, &$s43);
            $tmp39 = $tmp44;
            $tmp38 = $tmp39;
            $returnValue11 = $tmp38;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
            $tmp4 = 2;
            goto $l2;
            $l45:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp47, 3);
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$30_135->$rawValue, $tmp47);
        if ($tmp48.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp50 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$30_135->$data + 0));
            expr49 = *$tmp50;
            panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s54, ((panda$core$Object*) expr49));
            $tmp53 = $tmp55;
            panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp53, &$s56);
            $tmp52 = $tmp57;
            $tmp51 = $tmp52;
            $returnValue11 = $tmp51;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp53));
            $tmp4 = 3;
            goto $l2;
            $l58:;
            return $returnValue11;
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
        case 3: goto $l58;
        case -1: goto $l60;
        case 1: goto $l32;
        case 0: goto $l19;
        case 2: goto $l45;
    }
    $l60:;
    abort();
}
void org$pandalanguage$pandac$Annotations$Expression$cleanup(org$pandalanguage$pandac$Annotations$Expression* self) {
    org$pandalanguage$pandac$Annotations$Expression* $match$22_567 = NULL;
    org$pandalanguage$pandac$Annotations$Expression* $tmp68;
    panda$core$Int64 $tmp69;
    org$pandalanguage$pandac$ASTNode* _f071 = NULL;
    panda$core$Int64 $tmp73;
    org$pandalanguage$pandac$ASTNode* _f075 = NULL;
    panda$core$Int64 $tmp77;
    org$pandalanguage$pandac$ASTNode* _f079 = NULL;
    panda$core$Int64 $tmp81;
    org$pandalanguage$pandac$ASTNode* _f083 = NULL;
    int $tmp63;
    {
        int $tmp66;
        {
            $tmp68 = self;
            $match$22_567 = $tmp68;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
            panda$core$Int64$init$builtin_int64(&$tmp69, 0);
            panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_567->$rawValue, $tmp69);
            if ($tmp70.value) {
            {
                org$pandalanguage$pandac$ASTNode** $tmp72 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$22_567->$data + 0));
                _f071 = *$tmp72;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f071));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp73, 1);
            panda$core$Bit $tmp74 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_567->$rawValue, $tmp73);
            if ($tmp74.value) {
            {
                org$pandalanguage$pandac$ASTNode** $tmp76 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$22_567->$data + 0));
                _f075 = *$tmp76;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f075));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp77, 2);
            panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_567->$rawValue, $tmp77);
            if ($tmp78.value) {
            {
                org$pandalanguage$pandac$ASTNode** $tmp80 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$22_567->$data + 0));
                _f079 = *$tmp80;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f079));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp81, 3);
            panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_567->$rawValue, $tmp81);
            if ($tmp82.value) {
            {
                org$pandalanguage$pandac$ASTNode** $tmp84 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$22_567->$data + 0));
                _f083 = *$tmp84;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f083));
            }
            }
            }
            }
            }
        }
        $tmp66 = -1;
        goto $l64;
        $l64:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
        switch ($tmp66) {
            case -1: goto $l85;
        }
        $l85:;
    }
    $tmp63 = -1;
    goto $l61;
    $l61:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp63) {
        case -1: goto $l86;
    }
    $l86:;
}
void org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Annotations$Expression* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$ASTNode* p_f0) {
    org$pandalanguage$pandac$ASTNode* $tmp87;
    org$pandalanguage$pandac$ASTNode* $tmp90;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$ASTNode** $tmp88 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 0));
        $tmp87 = *$tmp88;
        org$pandalanguage$pandac$ASTNode** $tmp89 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 0));
        $tmp90 = p_f0;
        *$tmp89 = $tmp90;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
    }
}





