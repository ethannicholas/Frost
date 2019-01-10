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
__attribute__((weak)) panda$core$Int64 panda$core$Bit$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Bit$get_hash$R$panda$core$Int64(((panda$core$Bit$wrapper*) p0)->value);

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
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

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
__attribute__((weak)) panda$core$Object* panda$core$Bit$choose$panda$core$Bit$choose$T$panda$core$Bit$choose$T$R$panda$core$Bit$choose$T$shim(panda$core$Object* p0, panda$core$Object* p1, panda$core$Object* p2) {
    panda$core$Object* result = panda$core$Bit$choose$panda$core$Bit$choose$T$panda$core$Bit$choose$T$R$panda$core$Bit$choose$T(((panda$core$Bit$wrapper*) p0)->value, p1, p2);

    return result;
}
__attribute__((weak)) void panda$core$Bit$cleanup$shim(panda$core$Object* p0) {
    panda$core$Bit$cleanup(((panda$core$Bit$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Bit$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Bit$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Bit$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Bit$_panda$core$Formattable, { panda$core$Bit$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Bit$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Bit$_panda$collections$Key, { panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Bit$class_type panda$core$Bit$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Bit$_panda$core$Equatable, { panda$core$Bit$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$get_hash$R$panda$core$Int64$shim, panda$core$Bit$$NOT$R$panda$core$Bit$shim, panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$choose$panda$core$Bit$choose$T$panda$core$Bit$choose$T$R$panda$core$Bit$choose$T$shim, panda$core$Bit$format$panda$core$String$R$panda$core$String$shim, panda$core$Bit$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Bit$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Bit$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Bit$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Bit$wrapper_panda$core$Formattable, { panda$core$Bit$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Bit$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Bit$wrapper_panda$collections$Key, { panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim} };

static panda$core$String $s2;
panda$core$Bit$wrapperclass_type panda$core$Bit$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Bit$wrapper_panda$core$Equatable, { panda$core$Bit$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };typedef panda$core$Int64 (*$fn50)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x74\x2e\x70\x61\x6e\x64\x61", 9, 1819751751153946550, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -6713563485473942250, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 23, 6494996805396556951, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x69\x74\x2e\x70\x61\x6e\x64\x61", 9, 1819751751153946550, NULL };

panda$core$Bit panda$core$Bit$init$builtin_bit(bool param0) {

panda$core$Bit local0;
// line 7
bool* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
panda$core$Bit $tmp4 = *(&local0);
return $tmp4;

}
panda$core$String* panda$core$Bit$convert$R$panda$core$String(panda$core$Bit param0) {

// line 12
bool $tmp5 = param0.value;
if ($tmp5) goto block1; else goto block3;
block1:;
// line 13
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s6));
return &$s7;
block3:;
// line 1
// line 16
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s8));
return &$s9;
block2:;
panda$core$Bit $tmp10 = panda$core$Bit$init$builtin_bit(false);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp12 = (panda$core$Int64) {11};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s13, $tmp12, &$s14);
abort(); // unreachable
block4:;
abort(); // unreachable

}
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit param0, panda$core$Bit param1) {

// line 22
bool $tmp15 = param0.value;
bool $tmp16 = param1.value;
bool $tmp17 = $tmp15 == $tmp16;
panda$core$Bit $tmp18 = panda$core$Bit$init$builtin_bit($tmp17);
return $tmp18;

}
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit param0, panda$core$Bit param1) {

// line 27
bool $tmp19 = param0.value;
bool $tmp20 = param1.value;
bool $tmp21 = $tmp19 != $tmp20;
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit($tmp21);
return $tmp22;

}
panda$core$Int64 panda$core$Bit$get_hash$R$panda$core$Int64(panda$core$Bit param0) {

// line 32
bool $tmp23 = param0.value;
panda$core$Bit $tmp24 = panda$core$Bit$init$builtin_bit($tmp23);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
// line 33
panda$core$Int64 $tmp26 = (panda$core$Int64) {1};
return $tmp26;
block2:;
// line 35
panda$core$Int64 $tmp27 = (panda$core$Int64) {0};
return $tmp27;

}
panda$core$Bit panda$core$Bit$$NOT$R$panda$core$Bit(panda$core$Bit param0) {

// line 39
bool $tmp28 = param0.value;
bool $tmp29 = !$tmp28;
panda$core$Bit $tmp30 = (panda$core$Bit) {$tmp29};
return $tmp30;

}
panda$core$Bit panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit param0, panda$core$Bit param1) {

// line 46
bool $tmp31 = param0.value;
bool $tmp32 = param1.value;
bool $tmp33 = $tmp31 | $tmp32;
panda$core$Bit $tmp34 = panda$core$Bit$init$builtin_bit($tmp33);
return $tmp34;

}
panda$core$Bit panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit(panda$core$Bit param0, panda$core$Bit param1) {

// line 50
bool $tmp35 = param0.value;
bool $tmp36 = param1.value;
bool $tmp37 = $tmp35 & $tmp36;
panda$core$Bit $tmp38 = panda$core$Bit$init$builtin_bit($tmp37);
return $tmp38;

}
panda$core$Bit panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit param0, panda$core$Bit param1) {

// line 54
bool $tmp39 = param0.value;
bool $tmp40 = param1.value;
bool $tmp41 = $tmp39 ^ $tmp40;
panda$core$Bit $tmp42 = (panda$core$Bit) {$tmp41};
return $tmp42;

}
panda$core$Object* panda$core$Bit$choose$panda$core$Bit$choose$T$panda$core$Bit$choose$T$R$panda$core$Bit$choose$T(panda$core$Bit param0, panda$core$Object* param1, panda$core$Object* param2) {

// line 59
bool $tmp43 = param0.value;
if ($tmp43) goto block1; else goto block2;
block1:;
// line 60
panda$core$Panda$ref$panda$core$Object$Q(param1);
return param1;
block2:;
// line 62
panda$core$Panda$ref$panda$core$Object$Q(param2);
return param2;

}
panda$core$String* panda$core$Bit$format$panda$core$String$R$panda$core$String(panda$core$Bit param0, panda$core$String* param1) {

panda$collections$Array* local0 = NULL;
// line 72
panda$collections$Array* $tmp44 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(param1, &$s45);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$collections$Array* $tmp46 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
*(&local0) = $tmp44;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
// line 73
panda$collections$Array* $tmp47 = *(&local0);
ITable* $tmp48 = ((panda$collections$CollectionView*) $tmp47)->$class->itable;
while ($tmp48->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[0];
panda$core$Int64 $tmp51 = $tmp49(((panda$collections$CollectionView*) $tmp47));
panda$core$Int64 $tmp52 = (panda$core$Int64) {2};
panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp51, $tmp52);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp55 = (panda$core$Int64) {73};
panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s57, param1);
panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp56, &$s59);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s60, $tmp55, $tmp58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
// unreffing REF($23:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing REF($22:panda.core.String)
abort(); // unreachable
block1:;
// line 74
bool $tmp61 = param0.value;
if ($tmp61) goto block3; else goto block4;
block3:;
// line 75
panda$collections$Array* $tmp62 = *(&local0);
panda$core$Int64 $tmp63 = (panda$core$Int64) {0};
panda$core$Object* $tmp64 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp62, $tmp63);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp64)));
panda$core$Panda$unref$panda$core$Object$Q($tmp64);
// unreffing REF($39:panda.collections.Array.T)
panda$collections$Array* $tmp65 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing s
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$core$String*) $tmp64);
block4:;
// line 77
panda$collections$Array* $tmp66 = *(&local0);
panda$core$Int64 $tmp67 = (panda$core$Int64) {1};
panda$core$Object* $tmp68 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp66, $tmp67);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp68)));
panda$core$Panda$unref$panda$core$Object$Q($tmp68);
// unreffing REF($56:panda.collections.Array.T)
panda$collections$Array* $tmp69 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing s
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$core$String*) $tmp68);

}
void panda$core$Bit$cleanup(panda$core$Bit param0) {

return;

}

