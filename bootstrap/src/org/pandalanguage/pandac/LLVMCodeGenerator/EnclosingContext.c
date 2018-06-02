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
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, 18500898755, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4f\x4f\x50\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 13, -3351589738346984616, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x49\x4e\x41\x4c\x4c\x59\x28", 8, 18411832122876068, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$convert$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self) {
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $match$40_135 = NULL;
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $tmp6;
    panda$core$Int64 $tmp7;
    panda$core$String* label9 = NULL;
    panda$core$String* breakTarget11 = NULL;
    panda$core$String* continueTarget13 = NULL;
    panda$core$String* $returnValue15;
    panda$core$String* $tmp16;
    panda$core$String* $tmp17;
    panda$core$String* $tmp18;
    panda$core$String* $tmp19;
    panda$core$String* $tmp20;
    panda$core$String* $tmp21;
    panda$core$String* $tmp22;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$String* $tmp37;
    panda$core$String* $tmp38;
    panda$core$String* $tmp39;
    panda$core$Int64 $tmp49;
    panda$core$String* label51 = NULL;
    panda$collections$Map* map53 = NULL;
    panda$core$String* $tmp55;
    panda$core$String* $tmp56;
    panda$core$String* $tmp57;
    panda$core$String* $tmp58;
    panda$core$String* $tmp59;
    panda$core$Int64 $tmp69;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* context71 = NULL;
    panda$core$String* $tmp73;
    panda$core$String* $tmp74;
    int $tmp4;
    {
        $tmp6 = self;
        $match$40_135 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Int64$init$builtin_int64(&$tmp7, 0);
        panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$40_135->$rawValue, $tmp7);
        if ($tmp8.value) {
        {
            panda$core$String** $tmp10 = ((panda$core$String**) ((char*) $match$40_135->$data + 0));
            label9 = *$tmp10;
            panda$core$String** $tmp12 = ((panda$core$String**) ((char*) $match$40_135->$data + 8));
            breakTarget11 = *$tmp12;
            panda$core$String** $tmp14 = ((panda$core$String**) ((char*) $match$40_135->$data + 16));
            continueTarget13 = *$tmp14;
            if (((panda$core$Bit) { label9 != NULL }).value) {
            {
                panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s23, label9);
                $tmp22 = $tmp24;
                panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp22, &$s25);
                $tmp21 = $tmp26;
                panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, breakTarget11);
                $tmp20 = $tmp27;
                panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp20, &$s28);
                $tmp19 = $tmp29;
                panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, continueTarget13);
                $tmp18 = $tmp30;
                panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp18, &$s31);
                $tmp17 = $tmp32;
                $tmp16 = $tmp17;
                $returnValue15 = $tmp16;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
                $tmp4 = 0;
                goto $l2;
                $l33:;
                return $returnValue15;
            }
            }
            panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s40, breakTarget11);
            $tmp39 = $tmp41;
            panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp39, &$s42);
            $tmp38 = $tmp43;
            panda$core$String* $tmp44 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp38, continueTarget13);
            $tmp37 = $tmp44;
            panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, &$s45);
            $tmp36 = $tmp46;
            $tmp35 = $tmp36;
            $returnValue15 = $tmp35;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
            $tmp4 = 1;
            goto $l2;
            $l47:;
            return $returnValue15;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp49, 1);
        panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$40_135->$rawValue, $tmp49);
        if ($tmp50.value) {
        {
            panda$core$String** $tmp52 = ((panda$core$String**) ((char*) $match$40_135->$data + 0));
            label51 = *$tmp52;
            panda$collections$Map** $tmp54 = ((panda$collections$Map**) ((char*) $match$40_135->$data + 8));
            map53 = *$tmp54;
            panda$core$String* $tmp61 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s60, label51);
            $tmp59 = $tmp61;
            panda$core$String* $tmp63 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp59, &$s62);
            $tmp58 = $tmp63;
            panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp58, ((panda$core$Object*) map53));
            $tmp57 = $tmp64;
            panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s65);
            $tmp56 = $tmp66;
            $tmp55 = $tmp56;
            $returnValue15 = $tmp55;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp55));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
            $tmp4 = 2;
            goto $l2;
            $l67:;
            return $returnValue15;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp69, 2);
        panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$40_135->$rawValue, $tmp69);
        if ($tmp70.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp72 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) $match$40_135->$data + 0));
            context71 = *$tmp72;
            panda$core$String* $tmp76 = (($fn75) ((panda$core$Object*) context71)->$class->vtable[0])(((panda$core$Object*) context71));
            $tmp74 = $tmp76;
            $tmp73 = $tmp74;
            $returnValue15 = $tmp73;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
            $tmp4 = 3;
            goto $l2;
            $l77:;
            return $returnValue15;
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
        case 0: goto $l33;
        case 1: goto $l47;
    }
    $l79:;
    abort();
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self) {
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $match$29_586 = NULL;
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $tmp87;
    panda$core$Int64 $tmp88;
    panda$core$String* _f090 = NULL;
    panda$core$String* _f192 = NULL;
    panda$core$String* _f294 = NULL;
    panda$core$Int64 $tmp96;
    panda$core$String* _f098 = NULL;
    panda$collections$Map* _f1100 = NULL;
    panda$core$Int64 $tmp102;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* _f0104 = NULL;
    int $tmp82;
    {
        int $tmp85;
        {
            $tmp87 = self;
            $match$29_586 = $tmp87;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
            panda$core$Int64$init$builtin_int64(&$tmp88, 0);
            panda$core$Bit $tmp89 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29_586->$rawValue, $tmp88);
            if ($tmp89.value) {
            {
                panda$core$String** $tmp91 = ((panda$core$String**) ((char*) $match$29_586->$data + 0));
                _f090 = *$tmp91;
                panda$core$String** $tmp93 = ((panda$core$String**) ((char*) $match$29_586->$data + 8));
                _f192 = *$tmp93;
                panda$core$String** $tmp95 = ((panda$core$String**) ((char*) $match$29_586->$data + 16));
                _f294 = *$tmp95;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f090));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f192));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f294));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp96, 1);
            panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29_586->$rawValue, $tmp96);
            if ($tmp97.value) {
            {
                panda$core$String** $tmp99 = ((panda$core$String**) ((char*) $match$29_586->$data + 0));
                _f098 = *$tmp99;
                panda$collections$Map** $tmp101 = ((panda$collections$Map**) ((char*) $match$29_586->$data + 8));
                _f1100 = *$tmp101;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f098));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f1100));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp102, 2);
            panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29_586->$rawValue, $tmp102);
            if ($tmp103.value) {
            {
                org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp105 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) $match$29_586->$data + 0));
                _f0104 = *$tmp105;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f0104));
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
            case -1: goto $l106;
        }
        $l106:;
    }
    $tmp82 = -1;
    goto $l80;
    $l80:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp82) {
        case -1: goto $l107;
    }
    $l107:;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$core$String* p_f1, panda$core$String* p_f2) {
    panda$core$String* $tmp108;
    panda$core$String* $tmp111;
    panda$core$String* $tmp112;
    panda$core$String* $tmp115;
    panda$core$String* $tmp116;
    panda$core$String* $tmp119;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp109 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp108 = *$tmp109;
        panda$core$String** $tmp110 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp111 = p_f0;
        *$tmp110 = $tmp111;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
    }
    {
        panda$core$String** $tmp113 = ((panda$core$String**) ((char*) self->$data + 8));
        $tmp112 = *$tmp113;
        panda$core$String** $tmp114 = ((panda$core$String**) ((char*) self->$data + 8));
        $tmp115 = p_f1;
        *$tmp114 = $tmp115;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
    }
    {
        panda$core$String** $tmp117 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp116 = *$tmp117;
        panda$core$String** $tmp118 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp119 = p_f2;
        *$tmp118 = $tmp119;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$panda$collections$Map$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$collections$Map* p_f1) {
    panda$core$String* $tmp120;
    panda$core$String* $tmp123;
    panda$collections$Map* $tmp124;
    panda$collections$Map* $tmp127;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp121 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp120 = *$tmp121;
        panda$core$String** $tmp122 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp123 = p_f0;
        *$tmp122 = $tmp123;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp120));
    }
    {
        panda$collections$Map** $tmp125 = ((panda$collections$Map**) ((char*) self->$data + 8));
        $tmp124 = *$tmp125;
        panda$collections$Map** $tmp126 = ((panda$collections$Map**) ((char*) self->$data + 8));
        $tmp127 = p_f1;
        *$tmp126 = $tmp127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* p_f0) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp128;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp131;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp129 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) self->$data + 0));
        $tmp128 = *$tmp129;
        org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp130 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) self->$data + 0));
        $tmp131 = p_f0;
        *$tmp130 = $tmp131;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp131));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
    }
}

