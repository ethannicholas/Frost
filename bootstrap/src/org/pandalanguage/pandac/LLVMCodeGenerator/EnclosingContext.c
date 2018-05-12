#include "org/pandalanguage/pandac/LLVMCodeGenerator/EnclosingContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/collections/Map.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/InlineContext.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$class_type org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 59, -8120576330116742580, NULL };

void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$core$String* p_f1, panda$core$String* p_f2) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp5;
    panda$core$String* $tmp6;
    panda$core$String* $tmp9;
    panda$core$String* $tmp10;
    panda$core$String* $tmp13;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp3 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp2 = *$tmp3;
        panda$core$String** $tmp4 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp5 = p_f0;
        *$tmp4 = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        panda$core$String** $tmp7 = ((panda$core$String**) ((char*) self->$data + 8));
        $tmp6 = *$tmp7;
        panda$core$String** $tmp8 = ((panda$core$String**) ((char*) self->$data + 8));
        $tmp9 = p_f1;
        *$tmp8 = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    }
    {
        panda$core$String** $tmp11 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp10 = *$tmp11;
        panda$core$String** $tmp12 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp13 = p_f2;
        *$tmp12 = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$panda$collections$Map$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$collections$Map* p_f1) {
    panda$core$String* $tmp14;
    panda$core$String* $tmp17;
    panda$collections$Map* $tmp18;
    panda$collections$Map* $tmp21;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp15 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp14 = *$tmp15;
        panda$core$String** $tmp16 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp17 = p_f0;
        *$tmp16 = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    {
        panda$collections$Map** $tmp19 = ((panda$collections$Map**) ((char*) self->$data + 8));
        $tmp18 = *$tmp19;
        panda$collections$Map** $tmp20 = ((panda$collections$Map**) ((char*) self->$data + 8));
        $tmp21 = p_f1;
        *$tmp20 = $tmp21;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* p_f0) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp22;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp25;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp23 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) self->$data + 0));
        $tmp22 = *$tmp23;
        org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp24 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) self->$data + 0));
        $tmp25 = p_f0;
        *$tmp24 = $tmp25;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self) {
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $match$29_532 = NULL;
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* $tmp33;
    panda$core$String* _f035 = NULL;
    panda$core$String* _f137 = NULL;
    panda$core$String* _f239 = NULL;
    panda$core$String* _f042 = NULL;
    panda$collections$Map* _f144 = NULL;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* _f047 = NULL;
    int $tmp28;
    {
        int $tmp31;
        {
            $tmp33 = self;
            $match$29_532 = $tmp33;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
            panda$core$Bit $tmp34 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29_532->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp34.value) {
            {
                panda$core$String** $tmp36 = ((panda$core$String**) ((char*) $match$29_532->$data + 0));
                _f035 = *$tmp36;
                panda$core$String** $tmp38 = ((panda$core$String**) ((char*) $match$29_532->$data + 8));
                _f137 = *$tmp38;
                panda$core$String** $tmp40 = ((panda$core$String**) ((char*) $match$29_532->$data + 16));
                _f239 = *$tmp40;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f035));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f137));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f239));
            }
            }
            else {
            panda$core$Bit $tmp41 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29_532->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp41.value) {
            {
                panda$core$String** $tmp43 = ((panda$core$String**) ((char*) $match$29_532->$data + 0));
                _f042 = *$tmp43;
                panda$collections$Map** $tmp45 = ((panda$collections$Map**) ((char*) $match$29_532->$data + 8));
                _f144 = *$tmp45;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f042));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f144));
            }
            }
            else {
            panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29_532->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp46.value) {
            {
                org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext** $tmp48 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext**) ((char*) $match$29_532->$data + 0));
                _f047 = *$tmp48;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f047));
            }
            }
            }
            }
        }
        $tmp31 = -1;
        goto $l29;
        $l29:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
        switch ($tmp31) {
            case -1: goto $l49;
        }
        $l49:;
    }
    $tmp28 = -1;
    goto $l26;
    $l26:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp28) {
        case -1: goto $l50;
    }
    $l50:;
}

