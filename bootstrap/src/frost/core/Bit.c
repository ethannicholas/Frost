#include "frost/core/Bit.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Formattable.h"
#include "frost/core/Equatable.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Int frost$core$Bit$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Bit$get_hash$R$frost$core$Int(((frost$core$Bit$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Bit$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Bit$format$frost$core$String$R$frost$core$String(((frost$core$Bit$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$String* frost$core$Bit$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Bit$get_asString$R$frost$core$String(((frost$core$Bit$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Bit$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$Bit$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Bit$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Bit$_frost$collections$HashKey, { frost$core$Bit$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Bit$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Bit$_frost$core$Formattable, { frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Bit$class_type frost$core$Bit$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Bit$_frost$core$Equatable, { frost$core$Bit$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$get_hash$R$frost$core$Int$shim, frost$core$Bit$$NOT$R$frost$core$Bit$shim, frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T$shim, frost$core$Bit$format$frost$core$String$R$frost$core$String$shim, frost$core$Bit$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Bit$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$Bit$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Bit$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Bit$wrapper_frost$collections$HashKey, { frost$core$Bit$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Bit$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Bit$wrapper_frost$core$Formattable, { frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim} };

static frost$core$String $s2;
frost$core$Bit$wrapperclass_type frost$core$Bit$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Bit$wrapper_frost$core$Equatable, { frost$core$Bit$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn48)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn73)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn99)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 2274627713637881391, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 2274627713637881391, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 6583304908937478053, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 6583304908937478053, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, -5333701488999351944, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, -5333701488999351944, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 23, -6812525441497608175, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x74\x2e\x66\x72\x6f\x73\x74", 9, 8805428251880601976, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

frost$core$Bit frost$core$Bit$init$builtin_bit(bool param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:10
bool* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
frost$core$Bit $tmp4 = *(&local0);
return $tmp4;

}
frost$core$String* frost$core$Bit$get_asString$R$frost$core$String(frost$core$Bit param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:15
bool $tmp5 = param0.value;
if ($tmp5) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:16
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6));
return &$s7;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:19
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s8));
return &$s9;
block2:;
goto block4;
block4:;

}
frost$core$Bit frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
bool $tmp10 = param0.value;
bool $tmp11 = param1.value;
bool $tmp12 = $tmp10 == $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
return $tmp13;

}
frost$core$Bit frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:30
bool $tmp14 = param0.value;
bool $tmp15 = param1.value;
bool $tmp16 = $tmp14 != $tmp15;
frost$core$Bit $tmp17 = (frost$core$Bit) {$tmp16};
return $tmp17;

}
frost$core$Int frost$core$Bit$get_hash$R$frost$core$Int(frost$core$Bit param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:35
bool $tmp18 = param0.value;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:36
frost$core$Int $tmp21 = (frost$core$Int) {1u};
return $tmp21;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:38
frost$core$Int $tmp22 = (frost$core$Int) {0u};
return $tmp22;

}
frost$core$Bit frost$core$Bit$$NOT$R$frost$core$Bit(frost$core$Bit param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp23 = param0.value;
bool $tmp24 = !$tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
return $tmp25;

}
frost$core$Bit frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:49
bool $tmp26 = param0.value;
bool $tmp27 = param1.value;
bool $tmp28 = $tmp26 | $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
return $tmp29;

}
frost$core$Bit frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:53
bool $tmp30 = param0.value;
bool $tmp31 = param1.value;
bool $tmp32 = $tmp30 & $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
return $tmp33;

}
frost$core$Bit frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:57
bool $tmp34 = param0.value;
bool $tmp35 = param1.value;
bool $tmp36 = $tmp34 ^ $tmp35;
frost$core$Bit $tmp37 = (frost$core$Bit) {$tmp36};
return $tmp37;

}
frost$core$Object* frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T(frost$core$Bit param0, frost$core$Object* param1, frost$core$Object* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:62
bool $tmp38 = param0.value;
if ($tmp38) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:63
frost$core$Frost$ref$frost$core$Object$Q(param1);
return param1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:65
frost$core$Frost$ref$frost$core$Object$Q(param2);
return param2;

}
frost$core$String* frost$core$Bit$format$frost$core$String$R$frost$core$String(frost$core$Bit param0, frost$core$String* param1) {

frost$collections$Array* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:75
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from Bit.frost:75:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
frost$core$Int64 $tmp39 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp40 = $tmp39.value;
frost$core$Int $tmp41 = (frost$core$Int) {((int64_t) $tmp40)};
frost$collections$Array* $tmp42 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(param1, &$s43, $tmp41);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$collections$Array* $tmp44 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local0) = $tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:76
frost$collections$Array* $tmp45 = *(&local0);
ITable* $tmp46 = ((frost$collections$CollectionView*) $tmp45)->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[0];
frost$core$Int $tmp49 = $tmp47(((frost$collections$CollectionView*) $tmp45));
frost$core$Int $tmp50 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bit.frost:76:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50.value;
bool $tmp53 = $tmp51 == $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block4; else goto block5;
block5:;
frost$core$Int $tmp56 = (frost$core$Int) {76u};
frost$core$String* $tmp57 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s58, param1);
frost$core$String* $tmp59 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp57, &$s60);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s61, $tmp56, $tmp59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:77
bool $tmp62 = param0.value;
if ($tmp62) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:78
frost$collections$Array* $tmp63 = *(&local0);
frost$core$Int $tmp64 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Bit.frost:78:21
frost$core$Int $tmp65 = (frost$core$Int) {0u};
int64_t $tmp66 = $tmp64.value;
int64_t $tmp67 = $tmp65.value;
bool $tmp68 = $tmp66 >= $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block11; else goto block10;
block11:;
ITable* $tmp71 = ((frost$collections$CollectionView*) $tmp63)->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[0];
frost$core$Int $tmp74 = $tmp72(((frost$collections$CollectionView*) $tmp63));
int64_t $tmp75 = $tmp64.value;
int64_t $tmp76 = $tmp74.value;
bool $tmp77 = $tmp75 < $tmp76;
frost$core$Bit $tmp78 = (frost$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block9; else goto block10;
block10:;
frost$core$Int $tmp80 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s81, $tmp80, &$s82);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp83 = &$tmp63->data;
frost$core$Object** $tmp84 = *$tmp83;
frost$core$Int64 $tmp85 = frost$core$Int64$init$frost$core$Int($tmp64);
int64_t $tmp86 = $tmp85.value;
frost$core$Object* $tmp87 = $tmp84[$tmp86];
frost$core$Frost$ref$frost$core$Object$Q($tmp87);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp87)));
frost$core$Frost$unref$frost$core$Object$Q($tmp87);
frost$collections$Array* $tmp88 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$core$String*) $tmp87);
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:80
frost$collections$Array* $tmp89 = *(&local0);
frost$core$Int $tmp90 = (frost$core$Int) {1u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Bit.frost:80:17
frost$core$Int $tmp91 = (frost$core$Int) {0u};
int64_t $tmp92 = $tmp90.value;
int64_t $tmp93 = $tmp91.value;
bool $tmp94 = $tmp92 >= $tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block15; else goto block14;
block15:;
ITable* $tmp97 = ((frost$collections$CollectionView*) $tmp89)->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[0];
frost$core$Int $tmp100 = $tmp98(((frost$collections$CollectionView*) $tmp89));
int64_t $tmp101 = $tmp90.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 < $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block13; else goto block14;
block14:;
frost$core$Int $tmp106 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s107, $tmp106, &$s108);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp109 = &$tmp89->data;
frost$core$Object** $tmp110 = *$tmp109;
frost$core$Int64 $tmp111 = frost$core$Int64$init$frost$core$Int($tmp90);
int64_t $tmp112 = $tmp111.value;
frost$core$Object* $tmp113 = $tmp110[$tmp112];
frost$core$Frost$ref$frost$core$Object$Q($tmp113);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp113)));
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
frost$collections$Array* $tmp114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$core$String*) $tmp113);

}
void frost$core$Bit$cleanup(frost$core$Bit param0) {

return;

}

