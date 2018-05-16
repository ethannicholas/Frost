#include "org/pandalanguage/pandac/LLVMCodeGenerator/EnclosingContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/Map.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/InlineContext.h"


static panda$core$String $s1;
org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$class_type org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$convert$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$cleanup} };

typedef panda$core$String* (*$fn75)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 59, -8120576330116742580, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, 18500898755, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4f\x4f\x50\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 13, -3351589738346984616, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x49\x4e\x41\x4c\x4c\x59\x28", 8, 18411832122876068, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$convert$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self) {
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $match$40_135 = NULL;
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $tmp6;
    panda$core$String* label8 = NULL;
    panda$core$String* breakTarget10 = NULL;
    panda$core$String* continueTarget12 = NULL;
    panda$core$String* $finallyReturn13;
    panda$core$String* $tmp15;
    panda$core$String* $tmp16;
    panda$core$String* $tmp17;
    panda$core$String* $tmp18;
    panda$core$String* $tmp19;
    panda$core$String* $tmp20;
    panda$core$String* $tmp21;
    panda$core$String* $finallyReturn33;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$String* $tmp37;
    panda$core$String* $tmp38;
    panda$core$String* $tmp39;
    panda$core$String* label50 = NULL;
    panda$collections$Map* map52 = NULL;
    panda$core$String* $finallyReturn53;
    panda$core$String* $tmp55;
    panda$core$String* $tmp56;
    panda$core$String* $tmp57;
    panda$core$String* $tmp58;
    panda$core$String* $tmp59;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* context70 = NULL;
    panda$core$String* $finallyReturn71;
    panda$core$String* $tmp73;
    panda$core$String* $tmp74;
    int $tmp4;
    {
        $tmp6 = self;
        $match$40_135 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$40_135->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp7.value) {
        {
            panda$core$String** $tmp9 = ((panda$core$String**) ((char*) $match$40_135->$data + 0));
            label8 = *$tmp9;
            panda$core$String** $tmp11 = ((panda$core$String**) ((char*) $match$40_135->$data + 8));
            breakTarget10 = *$tmp11;
            panda$core$String** $tmp13 = ((panda$core$String**) ((char*) $match$40_135->$data + 16));
            continueTarget12 = *$tmp13;
            if (((panda$core$Bit) { label8 != NULL }).value) {
            {
                panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s22, label8);
                $tmp21 = $tmp23;
                panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s24);
                $tmp20 = $tmp25;
                panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp20, breakTarget10);
                $tmp19 = $tmp26;
                panda$core$String* $tmp28 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, &$s27);
                $tmp18 = $tmp28;
                panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp18, continueTarget12);
                $tmp17 = $tmp29;
                panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp17, &$s30);
                $tmp16 = $tmp31;
                $tmp15 = $tmp16;
                $finallyReturn13 = $tmp15;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
                $tmp4 = 0;
                goto $l2;
                $l32:;
                return $finallyReturn13;
            }
            }
            panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s40, breakTarget10);
            $tmp39 = $tmp41;
            panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp39, &$s42);
            $tmp38 = $tmp43;
            panda$core$String* $tmp44 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp38, continueTarget12);
            $tmp37 = $tmp44;
            panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, &$s45);
            $tmp36 = $tmp46;
            $tmp35 = $tmp36;
            $finallyReturn33 = $tmp35;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
            $tmp4 = 1;
            goto $l2;
            $l47:;
            return $finallyReturn33;
        }
        }
        else {
        panda$core$Bit $tmp49 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$40_135->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp49.value) {
        {
            panda$core$String** $tmp51 = ((panda$core$String**) ((char*) $match$40_135->$data + 0));
            label50 = *$tmp51;
            panda$collections$Map** $tmp53 = ((panda$collections$Map**) ((char*) $match$40_135->$data + 8));
            map52 = *$tmp53;
            panda$core$String* $tmp61 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s60, label50);
            $tmp59 = $tmp61;
            panda$core$String* $tmp63 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp59, &$s62);
            $tmp58 = $tmp63;
            panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp58, ((panda$core$Object*) map52));
            $tmp57 = $tmp64;
            panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s65);
            $tmp56 = $tmp66;
            $tmp55 = $tmp56;
            $finallyReturn53 = $tmp55;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp55));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
            $tmp4 = 2;
            goto $l2;
            $l67:;
            return $finallyReturn53;
        }
        }
        else {
        panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$40_135->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp69.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp71 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) $match$40_135->$data + 0));
            context70 = *$tmp71;
            panda$core$String* $tmp76 = (($fn75) ((panda$core$Object*) context70)->$class->vtable[0])(((panda$core$Object*) context70));
            $tmp74 = $tmp76;
            $tmp73 = $tmp74;
            $finallyReturn71 = $tmp73;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
            $tmp4 = 3;
            goto $l2;
            $l77:;
            return $finallyReturn71;
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
        case -1: goto $l79;
        case 2: goto $l67;
        case 3: goto $l77;
        case 0: goto $l32;
        case 1: goto $l47;
    }
    $l79:;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self) {
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $match$29_586 = NULL;
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $tmp87;
    panda$core$String* _f089 = NULL;
    panda$core$String* _f191 = NULL;
    panda$core$String* _f293 = NULL;
    panda$core$String* _f096 = NULL;
    panda$collections$Map* _f198 = NULL;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* _f0101 = NULL;
    int $tmp82;
    {
        int $tmp85;
        {
            $tmp87 = self;
            $match$29_586 = $tmp87;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
            panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29_586->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp88.value) {
            {
                panda$core$String** $tmp90 = ((panda$core$String**) ((char*) $match$29_586->$data + 0));
                _f089 = *$tmp90;
                panda$core$String** $tmp92 = ((panda$core$String**) ((char*) $match$29_586->$data + 8));
                _f191 = *$tmp92;
                panda$core$String** $tmp94 = ((panda$core$String**) ((char*) $match$29_586->$data + 16));
                _f293 = *$tmp94;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f089));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f191));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f293));
            }
            }
            else {
            panda$core$Bit $tmp95 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29_586->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp95.value) {
            {
                panda$core$String** $tmp97 = ((panda$core$String**) ((char*) $match$29_586->$data + 0));
                _f096 = *$tmp97;
                panda$collections$Map** $tmp99 = ((panda$collections$Map**) ((char*) $match$29_586->$data + 8));
                _f198 = *$tmp99;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f096));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f198));
            }
            }
            else {
            panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29_586->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp100.value) {
            {
                org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp102 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) $match$29_586->$data + 0));
                _f0101 = *$tmp102;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0101));
            }
            }
            }
            }
        }
        $tmp85 = -1;
        goto $l83;
        $l83:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
        switch ($tmp85) {
            case -1: goto $l103;
        }
        $l103:;
    }
    $tmp82 = -1;
    goto $l80;
    $l80:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp82) {
        case -1: goto $l104;
    }
    $l104:;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$core$String* p_f1, panda$core$String* p_f2) {
    panda$core$String* $tmp105;
    panda$core$String* $tmp108;
    panda$core$String* $tmp109;
    panda$core$String* $tmp112;
    panda$core$String* $tmp113;
    panda$core$String* $tmp116;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp106 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp105 = *$tmp106;
        panda$core$String** $tmp107 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp108 = p_f0;
        *$tmp107 = $tmp108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
    }
    {
        panda$core$String** $tmp110 = ((panda$core$String**) ((char*) self->$data + 8));
        $tmp109 = *$tmp110;
        panda$core$String** $tmp111 = ((panda$core$String**) ((char*) self->$data + 8));
        $tmp112 = p_f1;
        *$tmp111 = $tmp112;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
    }
    {
        panda$core$String** $tmp114 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp113 = *$tmp114;
        panda$core$String** $tmp115 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp116 = p_f2;
        *$tmp115 = $tmp116;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$panda$collections$Map$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$collections$Map* p_f1) {
    panda$core$String* $tmp117;
    panda$core$String* $tmp120;
    panda$collections$Map* $tmp121;
    panda$collections$Map* $tmp124;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp118 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp117 = *$tmp118;
        panda$core$String** $tmp119 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp120 = p_f0;
        *$tmp119 = $tmp120;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
    }
    {
        panda$collections$Map** $tmp122 = ((panda$collections$Map**) ((char*) self->$data + 8));
        $tmp121 = *$tmp122;
        panda$collections$Map** $tmp123 = ((panda$collections$Map**) ((char*) self->$data + 8));
        $tmp124 = p_f1;
        *$tmp123 = $tmp124;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* p_f0) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp125;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp128;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp126 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) self->$data + 0));
        $tmp125 = *$tmp126;
        org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp127 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) self->$data + 0));
        $tmp128 = p_f0;
        *$tmp127 = $tmp128;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp125));
    }
}

