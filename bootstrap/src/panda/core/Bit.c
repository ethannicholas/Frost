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
#include "panda/collections/Array.h"
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
panda$core$Bit$wrapperclass_type panda$core$Bit$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Bit$wrapper_panda$core$Equatable, { panda$core$Bit$convert$R$panda$core$String$shim, panda$core$Value$cleanup} };typedef panda$core$Int64 (*$fn56)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x74\x2e\x70\x61\x6e\x64\x61", 9, 1819751751153946550, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x74\x2e\x70\x61\x6e\x64\x61", 9, 1819751751153946550, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 23, 6494996805396556951, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x74\x2e\x70\x61\x6e\x64\x61", 9, 1819751751153946550, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
        return $returnValue3;
    }
    }
    else {
    {
        $tmp7 = &$s8;
        $returnValue3 = $tmp7;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
        return $returnValue3;
    }
    }
    if (false) goto $l10; else goto $l11;
    $l11:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s12, (panda$core$Int64) { 11 }, &$s13);
    abort();
    $l10:;
    abort();
}
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue14;
    panda$core$Bit $tmp15;
    bool $tmp16 = self.value == p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp15, $tmp16);
    $returnValue14 = $tmp15;
    return $returnValue14;
}
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue18;
    panda$core$Bit $tmp19;
    bool $tmp20 = self.value != p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp19, $tmp20);
    $returnValue18 = $tmp19;
    return $returnValue18;
}
panda$core$Int64 panda$core$Bit$hash$R$panda$core$Int64(panda$core$Bit self) {
    panda$core$Bit $tmp22;
    panda$core$Int64 $returnValue23;
    panda$core$Int64 $tmp24;
    panda$core$Int64 $tmp26;
    panda$core$Bit$init$builtin_bit(&$tmp22, self.value);
    if ($tmp22.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp24, 1);
        $returnValue23 = $tmp24;
        return $returnValue23;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp26, 0);
    $returnValue23 = $tmp26;
    return $returnValue23;
}
panda$core$Bit panda$core$Bit$$NOT$R$panda$core$Bit(panda$core$Bit self) {
    panda$core$Bit $returnValue28;
    panda$core$Bit $tmp29;
    panda$core$Bit$init$builtin_bit(&$tmp29, !self.value);
    $returnValue28 = $tmp29;
    return $returnValue28;
}
panda$core$Bit panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue32;
    panda$core$Bit $tmp33;
    bool $tmp34 = self.value;
    if ($tmp34) goto $l35;
    $tmp34 = p_other.value;
    $l35:;
    panda$core$Bit$init$builtin_bit(&$tmp33, $tmp34);
    $returnValue32 = $tmp33;
    return $returnValue32;
}
panda$core$Bit panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue37;
    panda$core$Bit $tmp38;
    bool $tmp39 = self.value;
    if (!$tmp39) goto $l40;
    $tmp39 = p_other.value;
    $l40:;
    panda$core$Bit$init$builtin_bit(&$tmp38, $tmp39);
    $returnValue37 = $tmp38;
    return $returnValue37;
}
panda$core$Bit panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue42;
    panda$core$Bit $tmp43;
    bool $tmp44 = self.value ^ p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp43, $tmp44);
    $returnValue42 = $tmp43;
    return $returnValue42;
}
panda$core$String* panda$core$Bit$format$panda$core$String$R$panda$core$String(panda$core$Bit self, panda$core$String* p_fmt) {
    panda$collections$Array* s49 = NULL;
    panda$collections$Array* $tmp50;
    panda$collections$Array* $tmp51;
    panda$core$Int64 $tmp58;
    panda$core$String* $tmp63;
    panda$core$String* $tmp64;
    panda$core$String* $returnValue69;
    panda$core$String* $tmp70;
    panda$core$Object* $tmp71;
    panda$core$Int64 $tmp72;
    panda$core$String* $tmp76;
    panda$core$Object* $tmp77;
    panda$core$Int64 $tmp78;
    int $tmp48;
    {
        panda$collections$Array* $tmp53 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(p_fmt, &$s52);
        $tmp51 = $tmp53;
        $tmp50 = $tmp51;
        s49 = $tmp50;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
        ITable* $tmp54 = ((panda$collections$CollectionView*) s49)->$class->itable;
        while ($tmp54->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp54 = $tmp54->next;
        }
        $fn56 $tmp55 = $tmp54->methods[0];
        panda$core$Int64 $tmp57 = $tmp55(((panda$collections$CollectionView*) s49));
        panda$core$Int64$init$builtin_int64(&$tmp58, 2);
        panda$core$Bit $tmp59 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp57, $tmp58);
        if ($tmp59.value) goto $l60; else goto $l61;
        $l61:;
        panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s65, p_fmt);
        $tmp64 = $tmp66;
        panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s67);
        $tmp63 = $tmp68;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s62, (panda$core$Int64) { 66 }, $tmp63);
        abort();
        $l60:;
        if (self.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp72, 0);
            panda$core$Object* $tmp73 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(s49, $tmp72);
            $tmp71 = $tmp73;
            $tmp70 = ((panda$core$String*) $tmp71);
            $returnValue69 = $tmp70;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
            panda$core$Panda$unref$panda$core$Object$Q($tmp71);
            $tmp48 = 0;
            goto $l46;
            $l74:;
            return $returnValue69;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp78, 1);
        panda$core$Object* $tmp79 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(s49, $tmp78);
        $tmp77 = $tmp79;
        $tmp76 = ((panda$core$String*) $tmp77);
        $returnValue69 = $tmp76;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
        panda$core$Panda$unref$panda$core$Object$Q($tmp77);
        $tmp48 = 1;
        goto $l46;
        $l80:;
        return $returnValue69;
    }
    $l46:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s49));
    s49 = NULL;
    switch ($tmp48) {
        case 1: goto $l80;
        case 0: goto $l74;
    }
    $l82:;
    if (false) goto $l83; else goto $l84;
    $l84:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s85, (panda$core$Int64) { 64 }, &$s86);
    abort();
    $l83:;
    abort();
}
void panda$core$Bit$cleanup(panda$core$Bit self) {
}





