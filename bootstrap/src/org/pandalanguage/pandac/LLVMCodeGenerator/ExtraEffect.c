#include "org/pandalanguage/pandac/LLVMCodeGenerator/ExtraEffect.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IRNode.h"


static panda$core$String $s1;
org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect$class_type org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4c\x4c\x56\x4d\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x45\x78\x74\x72\x61\x45\x66\x66\x65\x63\x74", 54, -7682592065892636270, NULL };

void org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect* self) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect* $match$152_58 = NULL;
    org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect* $tmp9;
    org$pandalanguage$pandac$IRNode* _f011 = NULL;
    panda$core$String* _f014 = NULL;
    int $tmp4;
    {
        int $tmp7;
        {
            $tmp9 = self;
            $match$152_58 = $tmp9;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
            panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$152_58->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp10.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp12 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$152_58->$data + 0));
                _f011 = *$tmp12;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f011));
            }
            }
            else {
            panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$152_58->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp13.value) {
            {
                panda$core$String** $tmp15 = ((panda$core$String**) ((char*) $match$152_58->$data + 0));
                _f014 = *$tmp15;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f014));
            }
            }
            }
        }
        $tmp7 = -1;
        goto $l5;
        $l5:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
        switch ($tmp7) {
            case -1: goto $l16;
        }
        $l16:;
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4) {
        case -1: goto $l17;
    }
    $l17:;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp18;
    org$pandalanguage$pandac$IRNode* $tmp21;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp19 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp18 = *$tmp19;
        org$pandalanguage$pandac$IRNode** $tmp20 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp21 = p_f0;
        *$tmp20 = $tmp21;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect* self, panda$core$Int64 p_rv, panda$core$String* p_f0) {
    panda$core$String* $tmp22;
    panda$core$String* $tmp25;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp23 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp22 = *$tmp23;
        panda$core$String** $tmp24 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp25 = p_f0;
        *$tmp24 = $tmp25;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    }
}

