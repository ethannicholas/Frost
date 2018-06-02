#include "org/pandalanguage/pandac/CCodeGenerator/ExtraEffect.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IRNode.h"

static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$class_type org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x45\x78\x74\x72\x61\x45\x66\x66\x65\x63\x74", 51, 7840256694814311930, NULL };

void org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$cleanup(org$pandalanguage$pandac$CCodeGenerator$ExtraEffect* self) {
    org$pandalanguage$pandac$CCodeGenerator$ExtraEffect* $match$195_58 = NULL;
    org$pandalanguage$pandac$CCodeGenerator$ExtraEffect* $tmp9;
    panda$core$Int64 $tmp10;
    org$pandalanguage$pandac$IRNode* _f012 = NULL;
    panda$core$Int64 $tmp14;
    panda$core$String* _f016 = NULL;
    int $tmp4;
    {
        int $tmp7;
        {
            $tmp9 = self;
            $match$195_58 = $tmp9;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
            panda$core$Int64$init$builtin_int64(&$tmp10, 0);
            panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$195_58->$rawValue, $tmp10);
            if ($tmp11.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp13 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$195_58->$data + 0));
                _f012 = *$tmp13;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f012));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp14, 1);
            panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$195_58->$rawValue, $tmp14);
            if ($tmp15.value) {
            {
                panda$core$String** $tmp17 = ((panda$core$String**) ((char*) $match$195_58->$data + 0));
                _f016 = *$tmp17;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f016));
            }
            }
            }
        }
        $tmp7 = -1;
        goto $l5;
        $l5:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
        switch ($tmp7) {
            case -1: goto $l18;
        }
        $l18:;
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4) {
        case -1: goto $l19;
    }
    $l19:;
}
void org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator$ExtraEffect* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp20;
    org$pandalanguage$pandac$IRNode* $tmp23;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp21 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp20 = *$tmp21;
        org$pandalanguage$pandac$IRNode** $tmp22 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp23 = p_f0;
        *$tmp22 = $tmp23;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$ExtraEffect$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$ExtraEffect* self, panda$core$Int64 p_rv, panda$core$String* p_f0) {
    panda$core$String* $tmp24;
    panda$core$String* $tmp27;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp25 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp24 = *$tmp25;
        panda$core$String** $tmp26 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp27 = p_f0;
        *$tmp26 = $tmp27;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    }
}

