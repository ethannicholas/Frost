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
typedef panda$core$Bit (*$fn30)(panda$core$Maybe*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -4218233432584287180, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x67\x65\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x54", 75, 2597636039084618985, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x65\x72\x72\x6f\x72\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 75, -3082657316354833219, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x70\x61\x6e\x64\x61", 11, -5227471997799750995, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

panda$core$Object* panda$core$Maybe$get$R$panda$core$Maybe$T(panda$core$Maybe* self) {
    panda$core$Maybe* $match$23_911 = NULL;
    panda$core$Maybe* $tmp12;
    panda$core$Int64 $tmp13;
    panda$core$Object* value15 = NULL;
    panda$core$Object* $returnValue17;
    panda$core$Object* $tmp18;
    panda$core$Bit $tmp22;
    panda$core$Bit $tmp3 = (($fn2) self->$class->vtable[4])(self);
    if ($tmp3.value) goto $l4; else goto $l5;
    $l5:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s6, (panda$core$Int64) { 22 }, &$s7);
    abort();
    $l4:;
    int $tmp10;
    {
        $tmp12 = self;
        $match$23_911 = $tmp12;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Int64$init$builtin_int64(&$tmp13, 0);
        panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23_911->$rawValue, $tmp13);
        if ($tmp14.value) {
        {
            panda$core$Object** $tmp16 = ((panda$core$Object**) ((char*) $match$23_911->$data + 0));
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
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s25, (panda$core$Int64) { 27 });
    abort();
    $l23:;
    if (false) goto $l26; else goto $l27;
    $l27:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s28, (panda$core$Int64) { 22 }, &$s29);
    abort();
    $l26:;
    abort();
}
panda$core$Error* panda$core$Maybe$error$R$panda$core$Error(panda$core$Maybe* self) {
    panda$core$Maybe* $match$35_940 = NULL;
    panda$core$Maybe* $tmp41;
    panda$core$Int64 $tmp42;
    panda$core$Error* error44 = NULL;
    panda$core$Error* $returnValue46;
    panda$core$Error* $tmp47;
    panda$core$Bit $tmp51;
    panda$core$Bit $tmp31 = (($fn30) self->$class->vtable[4])(self);
    panda$core$Bit $tmp32 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp31);
    if ($tmp32.value) goto $l33; else goto $l34;
    $l34:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s35, (panda$core$Int64) { 34 }, &$s36);
    abort();
    $l33:;
    int $tmp39;
    {
        $tmp41 = self;
        $match$35_940 = $tmp41;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Int64$init$builtin_int64(&$tmp42, 1);
        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$35_940->$rawValue, $tmp42);
        if ($tmp43.value) {
        {
            panda$core$Error** $tmp45 = ((panda$core$Error**) ((char*) $match$35_940->$data + 0));
            error44 = *$tmp45;
            $tmp47 = error44;
            $returnValue46 = $tmp47;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
            $tmp39 = 0;
            goto $l37;
            $l48:;
            return $returnValue46;
        }
        }
    }
    $tmp39 = -1;
    goto $l37;
    $l37:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
    switch ($tmp39) {
        case -1: goto $l50;
        case 0: goto $l48;
    }
    $l50:;
    panda$core$Bit$init$builtin_bit(&$tmp51, false);
    if ($tmp51.value) goto $l52; else goto $l53;
    $l53:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s54, (panda$core$Int64) { 39 });
    abort();
    $l52:;
    if (false) goto $l55; else goto $l56;
    $l56:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s57, (panda$core$Int64) { 34 }, &$s58);
    abort();
    $l55:;
    abort();
}
panda$core$Bit panda$core$Maybe$succeeded$R$panda$core$Bit(panda$core$Maybe* self) {
    panda$core$Maybe* $match$46_962 = NULL;
    panda$core$Maybe* $tmp63;
    panda$core$Int64 $tmp64;
    panda$core$Bit $returnValue66;
    panda$core$Bit $tmp67;
    panda$core$Int64 $tmp70;
    panda$core$Bit $tmp72;
    int $tmp61;
    {
        $tmp63 = self;
        $match$46_962 = $tmp63;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
        panda$core$Int64$init$builtin_int64(&$tmp64, 0);
        panda$core$Bit $tmp65 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$46_962->$rawValue, $tmp64);
        if ($tmp65.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp67, true);
            $returnValue66 = $tmp67;
            $tmp61 = 0;
            goto $l59;
            $l68:;
            return $returnValue66;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp70, 1);
        panda$core$Bit $tmp71 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$46_962->$rawValue, $tmp70);
        if ($tmp71.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp72, false);
            $returnValue66 = $tmp72;
            $tmp61 = 1;
            goto $l59;
            $l73:;
            return $returnValue66;
        }
        }
        }
    }
    $tmp61 = -1;
    goto $l59;
    $l59:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
    switch ($tmp61) {
        case 1: goto $l73;
        case 0: goto $l68;
        case -1: goto $l75;
    }
    $l75:;
    if (false) goto $l76; else goto $l77;
    $l77:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s78, (panda$core$Int64) { 45 }, &$s79);
    abort();
    $l76:;
    abort();
}
void panda$core$Maybe$cleanup(panda$core$Maybe* self) {
    panda$core$Maybe* $match$7_186 = NULL;
    panda$core$Maybe* $tmp87;
    panda$core$Int64 $tmp88;
    panda$core$Object* _f090 = NULL;
    panda$core$Int64 $tmp92;
    panda$core$Error* _f094 = NULL;
    int $tmp82;
    {
        int $tmp85;
        {
            $tmp87 = self;
            $match$7_186 = $tmp87;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
            panda$core$Int64$init$builtin_int64(&$tmp88, 0);
            panda$core$Bit $tmp89 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_186->$rawValue, $tmp88);
            if ($tmp89.value) {
            {
                panda$core$Object** $tmp91 = ((panda$core$Object**) ((char*) $match$7_186->$data + 0));
                _f090 = *$tmp91;
                panda$core$Panda$unref$panda$core$Object(_f090);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp92, 1);
            panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$7_186->$rawValue, $tmp92);
            if ($tmp93.value) {
            {
                panda$core$Error** $tmp95 = ((panda$core$Error**) ((char*) $match$7_186->$data + 0));
                _f094 = *$tmp95;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f094));
            }
            }
            }
        }
        $tmp85 = -1;
        goto $l83;
        $l83:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
        switch ($tmp85) {
            case -1: goto $l96;
        }
        $l96:;
    }
    $tmp82 = -1;
    goto $l80;
    $l80:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp82) {
        case -1: goto $l97;
    }
    $l97:;
}
void panda$core$Maybe$init$panda$core$Int64$panda$core$Maybe$T(panda$core$Maybe* self, panda$core$Int64 p_rv, panda$core$Object* p_f0) {
    panda$core$Object* $tmp98;
    panda$core$Object* $tmp101;
    self->$rawValue = p_rv;
    {
        panda$core$Object** $tmp99 = ((panda$core$Object**) ((char*) self->$data + 0));
        $tmp98 = *$tmp99;
        panda$core$Object** $tmp100 = ((panda$core$Object**) ((char*) self->$data + 0));
        $tmp101 = p_f0;
        *$tmp100 = $tmp101;
        panda$core$Panda$ref$panda$core$Object($tmp101);
        panda$core$Panda$unref$panda$core$Object($tmp98);
    }
}
void panda$core$Maybe$init$panda$core$Int64$panda$core$Error(panda$core$Maybe* self, panda$core$Int64 p_rv, panda$core$Error* p_f0) {
    panda$core$Error* $tmp102;
    panda$core$Error* $tmp105;
    self->$rawValue = p_rv;
    {
        panda$core$Error** $tmp103 = ((panda$core$Error**) ((char*) self->$data + 0));
        $tmp102 = *$tmp103;
        panda$core$Error** $tmp104 = ((panda$core$Error**) ((char*) self->$data + 0));
        $tmp105 = p_f0;
        *$tmp104 = $tmp105;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
    }
}





