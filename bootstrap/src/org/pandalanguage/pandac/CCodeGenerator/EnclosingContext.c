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
    panda$core$String* _f011 = NULL;
    panda$core$String* _f113 = NULL;
    panda$core$String* _f215 = NULL;
    panda$core$String* _f018 = NULL;
    panda$collections$Map* _f120 = NULL;
    panda$core$String* _f222 = NULL;
    int $tmp4;
    {
        int $tmp7;
        {
            $tmp9 = self;
            $match$12_58 = $tmp9;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
            panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$12_58->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp10.value) {
            {
                panda$core$String** $tmp12 = ((panda$core$String**) ((char*) $match$12_58->$data + 0));
                _f011 = *$tmp12;
                panda$core$String** $tmp14 = ((panda$core$String**) ((char*) $match$12_58->$data + 8));
                _f113 = *$tmp14;
                panda$core$String** $tmp16 = ((panda$core$String**) ((char*) $match$12_58->$data + 16));
                _f215 = *$tmp16;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f011));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f215));
            }
            }
            else {
            panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$12_58->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp17.value) {
            {
                panda$core$String** $tmp19 = ((panda$core$String**) ((char*) $match$12_58->$data + 0));
                _f018 = *$tmp19;
                panda$collections$Map** $tmp21 = ((panda$collections$Map**) ((char*) $match$12_58->$data + 8));
                _f120 = *$tmp21;
                panda$core$String** $tmp23 = ((panda$core$String**) ((char*) $match$12_58->$data + 16));
                _f222 = *$tmp23;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f018));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f222));
            }
            }
            }
        }
        $tmp7 = -1;
        goto $l5;
        $l5:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
        switch ($tmp7) {
            case -1: goto $l24;
        }
        $l24:;
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4) {
        case -1: goto $l25;
    }
    $l25:;
}
void org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$core$String* p_f1, panda$core$String* p_f2) {
    panda$core$String* $tmp26;
    panda$core$String* $tmp29;
    panda$core$String* $tmp30;
    panda$core$String* $tmp33;
    panda$core$String* $tmp34;
    panda$core$String* $tmp37;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp27 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp26 = *$tmp27;
        panda$core$String** $tmp28 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp29 = p_f0;
        *$tmp28 = $tmp29;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
    }
    {
        panda$core$String** $tmp31 = ((panda$core$String**) ((char*) self->$data + 8));
        $tmp30 = *$tmp31;
        panda$core$String** $tmp32 = ((panda$core$String**) ((char*) self->$data + 8));
        $tmp33 = p_f1;
        *$tmp32 = $tmp33;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
    }
    {
        panda$core$String** $tmp35 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp34 = *$tmp35;
        panda$core$String** $tmp36 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp37 = p_f2;
        *$tmp36 = $tmp37;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
    }
}
void org$pandalanguage$pandac$CCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$panda$collections$Map$LTpanda$core$String$Corg$pandalanguage$pandac$Pair$LTpanda$core$Int64$Cpanda$core$String$GT$GT$panda$core$String(org$pandalanguage$pandac$CCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$collections$Map* p_f1, panda$core$String* p_f2) {
    panda$core$String* $tmp38;
    panda$core$String* $tmp41;
    panda$collections$Map* $tmp42;
    panda$collections$Map* $tmp45;
    panda$core$String* $tmp46;
    panda$core$String* $tmp49;
    self->$rawValue = p_rv;
    {
        panda$core$String** $tmp39 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp38 = *$tmp39;
        panda$core$String** $tmp40 = ((panda$core$String**) ((char*) self->$data + 0));
        $tmp41 = p_f0;
        *$tmp40 = $tmp41;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
    }
    {
        panda$collections$Map** $tmp43 = ((panda$collections$Map**) ((char*) self->$data + 8));
        $tmp42 = *$tmp43;
        panda$collections$Map** $tmp44 = ((panda$collections$Map**) ((char*) self->$data + 8));
        $tmp45 = p_f1;
        *$tmp44 = $tmp45;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp45));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
    }
    {
        panda$core$String** $tmp47 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp46 = *$tmp47;
        panda$core$String** $tmp48 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp49 = p_f2;
        *$tmp48 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
    }
}

