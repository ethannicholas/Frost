#include "panda/core/Maybe.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Error.h"

static panda$core$String $s1;
panda$core$Maybe$class_type panda$core$Maybe$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Maybe$cleanup, panda$core$Maybe$get$R$panda$core$Maybe$T, panda$core$Maybe$error$R$panda$core$Error, panda$core$Maybe$succeeded$R$panda$core$Bit} };

typedef panda$core$Bit (*$fn2)(panda$core$Maybe*);
typedef panda$core$Bit (*$fn26)(panda$core$Maybe*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -4218233432584287180, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x67\x65\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x54", 75, 2597636039084618985, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x65\x72\x72\x6f\x72\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 75, -3082657316354833219, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };

panda$core$Object* panda$core$Maybe$get$R$panda$core$Maybe$T(panda$core$Maybe* self) {
    panda$core$Maybe* $match$22_911 = NULL;
    panda$core$Maybe* $tmp12;
    panda$core$Int64 $tmp13;
    panda$core$Object* value15 = NULL;
    panda$core$Object* $returnValue17;
    panda$core$Object* $tmp18;
    panda$core$Bit $tmp22;
    panda$core$Bit $tmp3 = (($fn2) self->$class->vtable[4])(self);
    if ($tmp3.value) goto $l4; else goto $l5;
    $l5:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s6, (panda$core$Int64) { 21 }, &$s7);
    abort();
    $l4:;
    int $tmp10;
    {
        $tmp12 = self;
        $match$22_911 = $tmp12;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Int64$init$builtin_int64(&$tmp13, 0);
        panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22_911->$rawValue, $tmp13);
        if ($tmp14.value) {
        {
            panda$core$Object** $tmp16 = ((panda$core$Object**) ((char*) $match$22_911->$data + 0));
            value15 = *$tmp16;
            $tmp18 = value15;
            $returnValue17 = $tmp18;
            panda$core$Panda$ref$panda$core$Object($tmp18);
            $tmp10 = 0;
            goto $l8;
            $l19:;
            return $returnValue17;
        }
        }
    }
    $tmp10 = -1;
    goto $l8;
    $l8:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    switch ($tmp10) {
        case 0: goto $l19;
        case -1: goto $l21;
    }
    $l21:;
    panda$core$Bit$init$builtin_bit(&$tmp22, false);
    if ($tmp22.value) goto $l23; else goto $l24;
    $l24:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s25, (panda$core$Int64) { 26 });
    abort();
    $l23:;
    abort();
}
panda$core$Error* panda$core$Maybe$error$R$panda$core$Error(panda$core$Maybe* self) {
    panda$core$Maybe* $match$34_936 = NULL;
    panda$core$Maybe* $tmp37;
    panda$core$Int64 $tmp38;
    panda$core$Error* error40 = NULL;
    panda$core$Error* $returnValue42;
    panda$core$Error* $tmp43;
    panda$core$Bit $tmp47;
    panda$core$Bit $tmp27 = (($fn26) self->$class->vtable[4])(self);
    panda$core$Bit $tmp28 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp27);
    if ($tmp28.value) goto $l29; else goto $l30;
    $l30:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s31, (panda$core$Int64) { 33 }, &$s32);
    abort();
    $l29:;
    int $tmp35;
    {
        $tmp37 = self;
        $match$34_936 = $tmp37;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Int64$init$builtin_int64(&$tmp38, 1);
        panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$34_936->$rawValue, $tmp38);
        if ($tmp39.value) {
        {
            panda$core$Error** $tmp41 = ((panda$core$Error**) ((char*) $match$34_936->$data + 0));
            error40 = *$tmp41;
            $tmp43 = error40;
            $returnValue42 = $tmp43;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
            $tmp35 = 0;
            goto $l33;
            $l44:;
            return $returnValue42;
        }
        }
    }
    $tmp35 = -1;
    goto $l33;
    $l33:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    switch ($tmp35) {
        case -1: goto $l46;
        case 0: goto $l44;
    }
    $l46:;
    panda$core$Bit$init$builtin_bit(&$tmp47, false);
    if ($tmp47.value) goto $l48; else goto $l49;
    $l49:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s50, (panda$core$Int64) { 38 });
    abort();
    $l48:;
    abort();
}
panda$core$Bit panda$core$Maybe$succeeded$R$panda$core$Bit(panda$core$Maybe* self) {
    panda$core$Maybe* $match$45_954 = NULL;
    panda$core$Maybe* $tmp55;
    panda$core$Int64 $tmp56;
    panda$core$Bit $returnValue58;
    panda$core$Bit $tmp59;
    panda$core$Int64 $tmp62;
    panda$core$Bit $tmp64;
    int $tmp53;
    {
        $tmp55 = self;
        $match$45_954 = $tmp55;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp55));
        panda$core$Int64$init$builtin_int64(&$tmp56, 0);
        panda$core$Bit $tmp57 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$45_954->$rawValue, $tmp56);
        if ($tmp57.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp59, true);
            $returnValue58 = $tmp59;
            $tmp53 = 0;
            goto $l51;
            $l60:;
            return $returnValue58;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp62, 1);
        panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$45_954->$rawValue, $tmp62);
        if ($tmp63.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp64, false);
            $returnValue58 = $tmp64;
            $tmp53 = 1;
            goto $l51;
            $l65:;
            return $returnValue58;
        }
        }
        }
    }
    $tmp53 = -1;
    goto $l51;
    $l51:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
    switch ($tmp53) {
        case 1: goto $l65;
        case -1: goto $l67;
        case 0: goto $l60;
    }
    $l67:;
    abort();
}
void panda$core$Maybe$cleanup(panda$core$Maybe* self) {
    panda$core$Maybe* $match$6_174 = NULL;
    panda$core$Maybe* $tmp75;
    panda$core$Int64 $tmp76;
    panda$core$Object* _f078 = NULL;
    panda$core$Int64 $tmp80;
    panda$core$Error* _f082 = NULL;
    int $tmp70;
    {
        int $tmp73;
        {
            $tmp75 = self;
            $match$6_174 = $tmp75;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
            panda$core$Int64$init$builtin_int64(&$tmp76, 0);
            panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6_174->$rawValue, $tmp76);
            if ($tmp77.value) {
            {
                panda$core$Object** $tmp79 = ((panda$core$Object**) ((char*) $match$6_174->$data + 0));
                _f078 = *$tmp79;
                panda$core$Panda$unref$panda$core$Object(_f078);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp80, 1);
            panda$core$Bit $tmp81 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6_174->$rawValue, $tmp80);
            if ($tmp81.value) {
            {
                panda$core$Error** $tmp83 = ((panda$core$Error**) ((char*) $match$6_174->$data + 0));
                _f082 = *$tmp83;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f082));
            }
            }
            }
        }
        $tmp73 = -1;
        goto $l71;
        $l71:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
        switch ($tmp73) {
            case -1: goto $l84;
        }
        $l84:;
    }
    $tmp70 = -1;
    goto $l68;
    $l68:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp70) {
        case -1: goto $l85;
    }
    $l85:;
}
void panda$core$Maybe$init$panda$core$Int64$panda$core$Maybe$T(panda$core$Maybe* self, panda$core$Int64 p_rv, panda$core$Object* p_f0) {
    panda$core$Object* $tmp86;
    panda$core$Object* $tmp89;
    self->$rawValue = p_rv;
    {
        panda$core$Object** $tmp87 = ((panda$core$Object**) ((char*) self->$data + 0));
        $tmp86 = *$tmp87;
        panda$core$Object** $tmp88 = ((panda$core$Object**) ((char*) self->$data + 0));
        $tmp89 = p_f0;
        *$tmp88 = $tmp89;
        panda$core$Panda$ref$panda$core$Object($tmp89);
        panda$core$Panda$unref$panda$core$Object($tmp86);
    }
}
void panda$core$Maybe$init$panda$core$Int64$panda$core$Error(panda$core$Maybe* self, panda$core$Int64 p_rv, panda$core$Error* p_f0) {
    panda$core$Error* $tmp90;
    panda$core$Error* $tmp93;
    self->$rawValue = p_rv;
    {
        panda$core$Error** $tmp91 = ((panda$core$Error**) ((char*) self->$data + 0));
        $tmp90 = *$tmp91;
        panda$core$Error** $tmp92 = ((panda$core$Error**) ((char*) self->$data + 0));
        $tmp93 = p_f0;
        *$tmp92 = $tmp93;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
    }
}





