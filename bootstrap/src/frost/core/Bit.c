#include "frost/core/Bit.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Formattable.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Int64 frost$core$Bit$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Bit$get_hash$R$frost$core$Int64(((frost$core$Bit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, ((frost$core$Bit$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, ((frost$core$Bit$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Bit$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Bit$format$frost$core$String$R$frost$core$String(((frost$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Bit$convert$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Bit$convert$R$frost$core$String(((frost$core$Bit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$NOT$R$frost$core$Bit$shim(frost$core$Object* p0) {
    frost$core$Bit result = frost$core$Bit$$NOT$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Bit p1) {
    frost$core$Bit result = frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Bit p1) {
    frost$core$Bit result = frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Bit p1) {
    frost$core$Bit result = frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit(((frost$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T$shim(frost$core$Object* p0, frost$core$Object* p1, frost$core$Object* p2) {
    frost$core$Object* result = frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T(((frost$core$Bit$wrapper*) p0)->value, p1, p2);

    return result;
}
__attribute__((weak)) void frost$core$Bit$cleanup$shim(frost$core$Object* p0) {
    frost$core$Bit$cleanup(((frost$core$Bit$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Bit$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Bit$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Bit$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Bit$_frost$collections$Key, { frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Bit$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Bit$_frost$core$Equatable, { frost$core$Bit$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s1;
frost$core$Bit$class_type frost$core$Bit$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Bit$_frost$core$Formattable, { frost$core$Bit$convert$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$get_hash$R$frost$core$Int64$shim, frost$core$Bit$$NOT$R$frost$core$Bit$shim, frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T$shim, frost$core$Bit$format$frost$core$String$R$frost$core$String$shim, frost$core$Bit$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Bit$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Bit$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Bit$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Bit$wrapper_frost$collections$Key, { frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Bit$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Bit$wrapper_frost$core$Equatable, { frost$core$Bit$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s2;
frost$core$Bit$wrapperclass_type frost$core$Bit$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Bit$wrapper_frost$core$Formattable, { frost$core$Bit$convert$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn50)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x74\x2e\x66\x72\x6f\x73\x74", 9, 1819751750130869392, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 76, -4709974034452486814, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 23, 6494996805396556951, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x74\x2e\x66\x72\x6f\x73\x74", 9, 1819751750130869392, NULL };

frost$core$Bit frost$core$Bit$init$builtin_bit(bool param0) {

frost$core$Bit local0;
// line 7
bool* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
frost$core$Bit $tmp4 = *(&local0);
return $tmp4;

}
frost$core$String* frost$core$Bit$convert$R$frost$core$String(frost$core$Bit param0) {

// line 12
bool $tmp5 = param0.value;
if ($tmp5) goto block1; else goto block3;
block1:;
// line 13
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6));
return &$s7;
block3:;
// line 1
// line 16
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s8));
return &$s9;
block2:;
frost$core$Bit $tmp10 = frost$core$Bit$init$builtin_bit(false);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp12 = (frost$core$Int64) {11};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s13, $tmp12, &$s14);
abort(); // unreachable
block4:;
abort(); // unreachable

}
frost$core$Bit frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// line 22
bool $tmp15 = param0.value;
bool $tmp16 = param1.value;
bool $tmp17 = $tmp15 == $tmp16;
frost$core$Bit $tmp18 = frost$core$Bit$init$builtin_bit($tmp17);
return $tmp18;

}
frost$core$Bit frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// line 27
bool $tmp19 = param0.value;
bool $tmp20 = param1.value;
bool $tmp21 = $tmp19 != $tmp20;
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit($tmp21);
return $tmp22;

}
frost$core$Int64 frost$core$Bit$get_hash$R$frost$core$Int64(frost$core$Bit param0) {

// line 32
bool $tmp23 = param0.value;
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit($tmp23);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
// line 33
frost$core$Int64 $tmp26 = (frost$core$Int64) {1};
return $tmp26;
block2:;
// line 35
frost$core$Int64 $tmp27 = (frost$core$Int64) {0};
return $tmp27;

}
frost$core$Bit frost$core$Bit$$NOT$R$frost$core$Bit(frost$core$Bit param0) {

// line 39
bool $tmp28 = param0.value;
bool $tmp29 = !$tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
return $tmp30;

}
frost$core$Bit frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// line 46
bool $tmp31 = param0.value;
bool $tmp32 = param1.value;
bool $tmp33 = $tmp31 | $tmp32;
frost$core$Bit $tmp34 = frost$core$Bit$init$builtin_bit($tmp33);
return $tmp34;

}
frost$core$Bit frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// line 50
bool $tmp35 = param0.value;
bool $tmp36 = param1.value;
bool $tmp37 = $tmp35 & $tmp36;
frost$core$Bit $tmp38 = frost$core$Bit$init$builtin_bit($tmp37);
return $tmp38;

}
frost$core$Bit frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// line 54
bool $tmp39 = param0.value;
bool $tmp40 = param1.value;
bool $tmp41 = $tmp39 ^ $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
return $tmp42;

}
frost$core$Object* frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T(frost$core$Bit param0, frost$core$Object* param1, frost$core$Object* param2) {

// line 59
bool $tmp43 = param0.value;
if ($tmp43) goto block1; else goto block2;
block1:;
// line 60
frost$core$Frost$ref$frost$core$Object$Q(param1);
return param1;
block2:;
// line 62
frost$core$Frost$ref$frost$core$Object$Q(param2);
return param2;

}
frost$core$String* frost$core$Bit$format$frost$core$String$R$frost$core$String(frost$core$Bit param0, frost$core$String* param1) {

frost$collections$Array* local0 = NULL;
// line 72
frost$collections$Array* $tmp44 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(param1, &$s45);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$collections$Array* $tmp46 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local0) = $tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 73
frost$collections$Array* $tmp47 = *(&local0);
ITable* $tmp48 = ((frost$collections$CollectionView*) $tmp47)->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[0];
frost$core$Int64 $tmp51 = $tmp49(((frost$collections$CollectionView*) $tmp47));
frost$core$Int64 $tmp52 = (frost$core$Int64) {2};
frost$core$Bit $tmp53 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp51, $tmp52);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp55 = (frost$core$Int64) {73};
frost$core$String* $tmp56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s57, param1);
frost$core$String* $tmp58 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp56, &$s59);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s60, $tmp55, $tmp58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// unreffing REF($23:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// unreffing REF($22:frost.core.String)
abort(); // unreachable
block1:;
// line 74
bool $tmp61 = param0.value;
if ($tmp61) goto block3; else goto block4;
block3:;
// line 75
frost$collections$Array* $tmp62 = *(&local0);
frost$core$Int64 $tmp63 = (frost$core$Int64) {0};
frost$core$Object* $tmp64 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp62, $tmp63);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp64)));
frost$core$Frost$unref$frost$core$Object$Q($tmp64);
// unreffing REF($39:frost.collections.Array.T)
frost$collections$Array* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing s
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$core$String*) $tmp64);
block4:;
// line 77
frost$collections$Array* $tmp66 = *(&local0);
frost$core$Int64 $tmp67 = (frost$core$Int64) {1};
frost$core$Object* $tmp68 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp66, $tmp67);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp68)));
frost$core$Frost$unref$frost$core$Object$Q($tmp68);
// unreffing REF($56:frost.collections.Array.T)
frost$collections$Array* $tmp69 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing s
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$core$String*) $tmp68);

}
void frost$core$Bit$cleanup(frost$core$Bit param0) {

return;

}

