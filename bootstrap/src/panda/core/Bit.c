#include "panda/core/Bit.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/core/Object.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Equatable.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
__attribute__((weak)) panda$core$String* panda$core$Bit$format$panda$core$String$R$panda$core$String$shim(panda$core$Object* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$Bit$format$panda$core$String$R$panda$core$String(((panda$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Bit$hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Bit$hash$R$panda$core$Int64(((panda$core$Bit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(((panda$core$Bit$wrapper*) p0)->value, ((panda$core$Bit$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(((panda$core$Bit$wrapper*) p0)->value, ((panda$core$Bit$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Bit$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$Bit$convert$R$panda$core$String(((panda$core$Bit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Bit$$NOT$R$panda$core$Bit$shim(panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Bit p1) {
    panda$core$Bit result = panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit(((panda$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Bit p1) {
    panda$core$Bit result = panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit(((panda$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Bit p1) {
    panda$core$Bit result = panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit(((panda$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void panda$core$Bit$cleanup$shim(panda$core$Object* p0) {
    panda$core$Bit$cleanup(((panda$core$Bit$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Bit$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Bit$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Bit$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Bit$_panda$core$Formattable, { panda$core$Bit$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Bit$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Bit$_panda$collections$Key, { panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Bit$class_type panda$core$Bit$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Bit$_panda$core$Equatable, { panda$core$Bit$convert$R$panda$core$String$shim, panda$core$Value$cleanup, panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$hash$R$panda$core$Int64$shim, panda$core$Bit$$NOT$R$panda$core$Bit$shim, panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$format$panda$core$String$R$panda$core$String$shim, panda$core$Bit$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Bit$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Bit$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Bit$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Bit$wrapper_panda$core$Formattable, { panda$core$Bit$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Bit$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Bit$wrapper_panda$collections$Key, { panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim} };

static panda$core$String $s2;
panda$core$Bit$wrapperclass_type panda$core$Bit$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Bit$wrapper_panda$core$Equatable, { panda$core$Bit$convert$R$panda$core$String$shim, panda$core$Value$cleanup} };typedef panda$core$Int64 (*$fn52)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn71)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn80)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x74\x2e\x70\x61\x6e\x64\x61", 9, 1819751751153946550, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 23, 6494996805396556951, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };

void panda$core$Bit$init$builtin_bit(panda$core$Bit* self, bool p_value) {
    self->value = p_value;
}
panda$core$String* panda$core$Bit$convert$R$panda$core$String(panda$core$Bit self) {
    panda$core$String* $returnValue3;
    panda$core$String* $tmp4;
    panda$core$String* $tmp7;
    if (self.value) {
    {
        $tmp4 = &$s5;
        $returnValue3 = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        return $returnValue3;
    }
    }
    else {
    {
        $tmp7 = &$s8;
        $returnValue3 = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        return $returnValue3;
    }
    }
    abort();
}
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue10;
    panda$core$Bit $tmp11;
    bool $tmp12 = self.value == p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp11, $tmp12);
    $returnValue10 = $tmp11;
    return $returnValue10;
}
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue14;
    panda$core$Bit $tmp15;
    bool $tmp16 = self.value != p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp15, $tmp16);
    $returnValue14 = $tmp15;
    return $returnValue14;
}
panda$core$Int64 panda$core$Bit$hash$R$panda$core$Int64(panda$core$Bit self) {
    panda$core$Bit $tmp18;
    panda$core$Int64 $returnValue19;
    panda$core$Int64 $tmp20;
    panda$core$Int64 $tmp22;
    panda$core$Bit$init$builtin_bit(&$tmp18, self.value);
    if ($tmp18.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp20, 1);
        $returnValue19 = $tmp20;
        return $returnValue19;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp22, 0);
    $returnValue19 = $tmp22;
    return $returnValue19;
}
panda$core$Bit panda$core$Bit$$NOT$R$panda$core$Bit(panda$core$Bit self) {
    panda$core$Bit $returnValue24;
    panda$core$Bit $tmp25;
    panda$core$Bit$init$builtin_bit(&$tmp25, !self.value);
    $returnValue24 = $tmp25;
    return $returnValue24;
}
panda$core$Bit panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue28;
    panda$core$Bit $tmp29;
    bool $tmp30 = self.value;
    if ($tmp30) goto $l31;
    $tmp30 = p_other.value;
    $l31:;
    panda$core$Bit$init$builtin_bit(&$tmp29, $tmp30);
    $returnValue28 = $tmp29;
    return $returnValue28;
}
panda$core$Bit panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue33;
    panda$core$Bit $tmp34;
    bool $tmp35 = self.value;
    if (!$tmp35) goto $l36;
    $tmp35 = p_other.value;
    $l36:;
    panda$core$Bit$init$builtin_bit(&$tmp34, $tmp35);
    $returnValue33 = $tmp34;
    return $returnValue33;
}
panda$core$Bit panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue38;
    panda$core$Bit $tmp39;
    bool $tmp40 = self.value ^ p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp39, $tmp40);
    $returnValue38 = $tmp39;
    return $returnValue38;
}
panda$core$String* panda$core$Bit$format$panda$core$String$R$panda$core$String(panda$core$Bit self, panda$core$String* p_fmt) {
    panda$collections$ListView* s45 = NULL;
    panda$collections$ListView* $tmp46;
    panda$collections$ListView* $tmp47;
    panda$core$Int64 $tmp54;
    panda$core$String* $tmp59;
    panda$core$String* $tmp60;
    panda$core$String* $returnValue65;
    panda$core$String* $tmp66;
    panda$core$Object* $tmp67;
    panda$core$Int64 $tmp68;
    panda$core$String* $tmp75;
    panda$core$Object* $tmp76;
    panda$core$Int64 $tmp77;
    int $tmp44;
    {
        panda$collections$ListView* $tmp49 = panda$core$String$split$panda$core$String$R$panda$collections$ListView$LTpanda$core$String$GT(p_fmt, &$s48);
        $tmp47 = $tmp49;
        $tmp46 = $tmp47;
        s45 = $tmp46;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
        ITable* $tmp50 = ((panda$collections$CollectionView*) s45)->$class->itable;
        while ($tmp50->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp50 = $tmp50->next;
        }
        $fn52 $tmp51 = $tmp50->methods[0];
        panda$core$Int64 $tmp53 = $tmp51(((panda$collections$CollectionView*) s45));
        panda$core$Int64$init$builtin_int64(&$tmp54, 2);
        panda$core$Bit $tmp55 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp53, $tmp54);
        if ($tmp55.value) goto $l56; else goto $l57;
        $l57:;
        panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s61, p_fmt);
        $tmp60 = $tmp62;
        panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp60, &$s63);
        $tmp59 = $tmp64;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s58, (panda$core$Int64) { 66 }, $tmp59);
        abort();
        $l56:;
        if (self.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp68, 0);
            ITable* $tmp69 = s45->$class->itable;
            while ($tmp69->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp69 = $tmp69->next;
            }
            $fn71 $tmp70 = $tmp69->methods[0];
            panda$core$Object* $tmp72 = $tmp70(s45, $tmp68);
            $tmp67 = $tmp72;
            $tmp66 = ((panda$core$String*) $tmp67);
            $returnValue65 = $tmp66;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
            panda$core$Panda$unref$panda$core$Object($tmp67);
            $tmp44 = 0;
            goto $l42;
            $l73:;
            return $returnValue65;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp77, 1);
        ITable* $tmp78 = s45->$class->itable;
        while ($tmp78->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp78 = $tmp78->next;
        }
        $fn80 $tmp79 = $tmp78->methods[0];
        panda$core$Object* $tmp81 = $tmp79(s45, $tmp77);
        $tmp76 = $tmp81;
        $tmp75 = ((panda$core$String*) $tmp76);
        $returnValue65 = $tmp75;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$Panda$unref$panda$core$Object($tmp76);
        $tmp44 = 1;
        goto $l42;
        $l82:;
        return $returnValue65;
    }
    $l42:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s45));
    s45 = NULL;
    switch ($tmp44) {
        case 0: goto $l73;
        case 1: goto $l82;
    }
    $l84:;
    abort();
}
void panda$core$Bit$cleanup(panda$core$Bit self) {
}





