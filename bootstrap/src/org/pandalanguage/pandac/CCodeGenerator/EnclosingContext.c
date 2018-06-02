#include "org/pandalanguage/pandac/CCodeGenerator/EnclosingContext.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/Map.h"

static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$class_type org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 56, 6543098344347178708, NULL };

void org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$cleanup(org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* self) {
    org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* $match$12_58 = NULL;
    org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* $tmp9;
    panda$core$Int64 $tmp10;
    panda$core$String* _f012 = NULL;
    panda$core$String* _f114 = NULL;
    panda$core$String* _f216 = NULL;
    panda$core$Int64 $tmp18;
    panda$core$String* _f020 = NULL;
    panda$collections$Map* _f122 = NULL;
    panda$core$String* _f224 = NULL;
    int $tmp4;
    {
        int $tmp7;
        {
            $tmp9 = self;
            $match$12_58 = $tmp9;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
            panda$core$Int64$init$builtin_int64(&$tmp10, 0);
            panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$12_58->$rawValue, $tmp10);
            if ($tmp11.value) {
            {
                panda$core$String** $tmp13 = ((panda$core$String**) ((char*) $match$12_58->$data + 0));
                _f012 = *$tmp13;
                panda$core$String** $tmp15 = ((panda$core$String**) ((char*) $match$12_58->$data + 8));
                _f114 = *$tmp15;
                panda$core$String** $tmp17 = ((panda$core$String**) ((char*) $match$12_58->$data + 16));
                _f216 = *$tmp17;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f012));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f216));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp18, 1);
            panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$12_58->$rawValue, $tmp18);
            if ($tmp19.value) {
            {
                panda$core$String** $tmp21 = ((panda$core$String**) ((char*) $match$12_58->$data + 0));
                _f020 = *$tmp21;
                panda$collections$Map** $tmp23 = ((panda$collections$Map**) ((char*) $match$12_58->$data + 8));
                _f122 = *$tmp23;
                panda$core$String** $tmp25 = ((panda$core$String**) ((char*) $match$12_58->$data + 16));
                _f224 = *$tmp25;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f020));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f122));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f224));
            }
            }
            }
        }
        $tmp7 = -1;
        goto $l5;
        $l5:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
        switch ($tmp7) {
            case -1: goto $l26;
        }
        $l26:;
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4) {
        case -1: goto $l27;
    }
    $l27:;
}
void org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$core$String* p_f1, panda$core$String* p_f2) {
    panda$core$String* $tmp28;
    panda$core$String* $tmp31;
    panda$core$String* $tmp32;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$String* $tmp39;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp29 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp28 = *$tmp29;
        panda$core$String** $tmp30 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp31 = p_f0;
        *$tmp30 = $tmp31;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp31));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
    }
    {
        panda$core$String** $tmp33 = ((panda$core$String**) ((char*) self->$data + 8));
        $tmp32 = *$tmp33;
        panda$core$String** $tmp34 = ((panda$core$String**) ((char*) self->$data + 8));
        $tmp35 = p_f1;
        *$tmp34 = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
    }
    {
        panda$core$String** $tmp37 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp36 = *$tmp37;
        panda$core$String** $tmp38 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp39 = p_f2;
        *$tmp38 = $tmp39;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$panda$collections$Map$LTpanda$core$String$Corg$pandalanguage$pandac$Pair$LTpanda$core$Int64$Cpanda$core$String$GT$GT$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$collections$Map* p_f1, panda$core$String* p_f2) {
    panda$core$String* $tmp40;
    panda$core$String* $tmp43;
    panda$collections$Map* $tmp44;
    panda$collections$Map* $tmp47;
    panda$core$String* $tmp48;
    panda$core$String* $tmp51;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp41 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp40 = *$tmp41;
        panda$core$String** $tmp42 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp43 = p_f0;
        *$tmp42 = $tmp43;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
    }
    {
        panda$collections$Map** $tmp45 = ((panda$collections$Map**) ((char*) self->$data + 8));
        $tmp44 = *$tmp45;
        panda$collections$Map** $tmp46 = ((panda$collections$Map**) ((char*) self->$data + 8));
        $tmp47 = p_f1;
        *$tmp46 = $tmp47;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
    }
    {
        panda$core$String** $tmp49 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp48 = *$tmp49;
        panda$core$String** $tmp50 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp51 = p_f2;
        *$tmp50 = $tmp51;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
    }
}

