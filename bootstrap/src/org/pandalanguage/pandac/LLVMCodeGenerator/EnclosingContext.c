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

typedef panda$core$String* (*$fn72)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 59, -8120576330116742580, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, 18500898755, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4f\x4f\x50\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 13, -3351589738346984616, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x49\x4e\x41\x4c\x4c\x59\x28", 8, 18411832122876068, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$convert$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self) {
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $match$40_135 = NULL;
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $tmp6;
    panda$core$String* label8 = NULL;
    panda$core$String* breakTarget10 = NULL;
    panda$core$String* continueTarget12 = NULL;
    panda$core$String* $returnValue14;
    panda$core$String* $tmp15;
    panda$core$String* $tmp16;
    panda$core$String* $tmp17;
    panda$core$String* $tmp18;
    panda$core$String* $tmp19;
    panda$core$String* $tmp20;
    panda$core$String* $tmp21;
    panda$core$String* $tmp34;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$String* $tmp37;
    panda$core$String* $tmp38;
    panda$core$String* label49 = NULL;
    panda$collections$Map* map51 = NULL;
    panda$core$String* $tmp53;
    panda$core$String* $tmp54;
    panda$core$String* $tmp55;
    panda$core$String* $tmp56;
    panda$core$String* $tmp57;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* context68 = NULL;
    panda$core$String* $tmp70;
    panda$core$String* $tmp71;
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
                $returnValue14 = $tmp15;
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
                return $returnValue14;
            }
            }
            panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s39, breakTarget10);
            $tmp38 = $tmp40;
            panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp38, &$s41);
            $tmp37 = $tmp42;
            panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, continueTarget12);
            $tmp36 = $tmp43;
            panda$core$String* $tmp45 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp36, &$s44);
            $tmp35 = $tmp45;
            $tmp34 = $tmp35;
            $returnValue14 = $tmp34;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
            $tmp4 = 1;
            goto $l2;
            $l46:;
            return $returnValue14;
        }
        }
        else {
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$40_135->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp48.value) {
        {
            panda$core$String** $tmp50 = ((panda$core$String**) ((char*) $match$40_135->$data + 0));
            label49 = *$tmp50;
            panda$collections$Map** $tmp52 = ((panda$collections$Map**) ((char*) $match$40_135->$data + 8));
            map51 = *$tmp52;
            panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s58, label49);
            $tmp57 = $tmp59;
            panda$core$String* $tmp61 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s60);
            $tmp56 = $tmp61;
            panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp56, ((panda$core$Object*) map51));
            $tmp55 = $tmp62;
            panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp55, &$s63);
            $tmp54 = $tmp64;
            $tmp53 = $tmp54;
            $returnValue14 = $tmp53;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
            $tmp4 = 2;
            goto $l2;
            $l65:;
            return $returnValue14;
        }
        }
        else {
        panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$40_135->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp67.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp69 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) $match$40_135->$data + 0));
            context68 = *$tmp69;
            panda$core$String* $tmp73 = (($fn72) ((panda$core$Object*) context68)->$class->vtable[0])(((panda$core$Object*) context68));
            $tmp71 = $tmp73;
            $tmp70 = $tmp71;
            $returnValue14 = $tmp70;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
            $tmp4 = 3;
            goto $l2;
            $l74:;
            return $returnValue14;
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
        case -1: goto $l76;
        case 2: goto $l65;
        case 3: goto $l74;
        case 0: goto $l32;
        case 1: goto $l46;
    }
    $l76:;
    abort();
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self) {
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $match$29_583 = NULL;
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $tmp84;
    panda$core$String* _f086 = NULL;
    panda$core$String* _f188 = NULL;
    panda$core$String* _f290 = NULL;
    panda$core$String* _f093 = NULL;
    panda$collections$Map* _f195 = NULL;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* _f098 = NULL;
    int $tmp79;
    {
        int $tmp82;
        {
            $tmp84 = self;
            $match$29_583 = $tmp84;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
            panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29_583->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp85.value) {
            {
                panda$core$String** $tmp87 = ((panda$core$String**) ((char*) $match$29_583->$data + 0));
                _f086 = *$tmp87;
                panda$core$String** $tmp89 = ((panda$core$String**) ((char*) $match$29_583->$data + 8));
                _f188 = *$tmp89;
                panda$core$String** $tmp91 = ((panda$core$String**) ((char*) $match$29_583->$data + 16));
                _f290 = *$tmp91;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f086));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f188));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f290));
            }
            }
            else {
            panda$core$Bit $tmp92 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29_583->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp92.value) {
            {
                panda$core$String** $tmp94 = ((panda$core$String**) ((char*) $match$29_583->$data + 0));
                _f093 = *$tmp94;
                panda$collections$Map** $tmp96 = ((panda$collections$Map**) ((char*) $match$29_583->$data + 8));
                _f195 = *$tmp96;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f093));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f195));
            }
            }
            else {
            panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29_583->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp97.value) {
            {
                org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp99 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) $match$29_583->$data + 0));
                _f098 = *$tmp99;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f098));
            }
            }
            }
            }
        }
        $tmp82 = -1;
        goto $l80;
        $l80:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
        switch ($tmp82) {
            case -1: goto $l100;
        }
        $l100:;
    }
    $tmp79 = -1;
    goto $l77;
    $l77:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp79) {
        case -1: goto $l101;
    }
    $l101:;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$core$String* p_f1, panda$core$String* p_f2) {
    panda$core$String* $tmp102;
    panda$core$String* $tmp105;
    panda$core$String* $tmp106;
    panda$core$String* $tmp109;
    panda$core$String* $tmp110;
    panda$core$String* $tmp113;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp103 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp102 = *$tmp103;
        panda$core$String** $tmp104 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp105 = p_f0;
        *$tmp104 = $tmp105;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
    }
    {
        panda$core$String** $tmp107 = ((panda$core$String**) ((char*) self->$data + 8));
        $tmp106 = *$tmp107;
        panda$core$String** $tmp108 = ((panda$core$String**) ((char*) self->$data + 8));
        $tmp109 = p_f1;
        *$tmp108 = $tmp109;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
    }
    {
        panda$core$String** $tmp111 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp110 = *$tmp111;
        panda$core$String** $tmp112 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp113 = p_f2;
        *$tmp112 = $tmp113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$panda$collections$Map$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$collections$Map* p_f1) {
    panda$core$String* $tmp114;
    panda$core$String* $tmp117;
    panda$collections$Map* $tmp118;
    panda$collections$Map* $tmp121;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp115 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp114 = *$tmp115;
        panda$core$String** $tmp116 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp117 = p_f0;
        *$tmp116 = $tmp117;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
    }
    {
        panda$collections$Map** $tmp119 = ((panda$collections$Map**) ((char*) self->$data + 8));
        $tmp118 = *$tmp119;
        panda$collections$Map** $tmp120 = ((panda$collections$Map**) ((char*) self->$data + 8));
        $tmp121 = p_f1;
        *$tmp120 = $tmp121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* p_f0) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp122;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp125;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp123 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) self->$data + 0));
        $tmp122 = *$tmp123;
        org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp124 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) self->$data + 0));
        $tmp125 = p_f0;
        *$tmp124 = $tmp125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
    }
}

