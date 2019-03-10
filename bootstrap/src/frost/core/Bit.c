#include "frost/core/Bit.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Formattable.h"
#include "frost/core/Object.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Equatable.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$String* frost$core$Bit$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Bit$format$frost$core$String$R$frost$core$String(((frost$core$Bit$wrapper*) p0)->value, p1);

    return result;
}
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

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Bit$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, NULL, { frost$core$Bit$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Bit$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Bit$_frost$core$Formattable, { frost$core$Bit$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Bit$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Bit$_frost$collections$Key, { frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Bit$class_type frost$core$Bit$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Bit$_frost$core$Equatable, { frost$core$Bit$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$get_hash$R$frost$core$Int64$shim, frost$core$Bit$$NOT$R$frost$core$Bit$shim, frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T$shim, frost$core$Bit$format$frost$core$String$R$frost$core$String$shim, frost$core$Bit$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Bit$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, NULL, { frost$core$Bit$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Bit$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Bit$wrapper_frost$core$Formattable, { frost$core$Bit$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Bit$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Bit$wrapper_frost$collections$Key, { frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit$shim, frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit$shim} };

static frost$core$String $s2;
frost$core$Bit$wrapperclass_type frost$core$Bit$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Bit$wrapper_frost$core$Equatable, { frost$core$Bit$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn46)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn71)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn96)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 2274627713637881391, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 2274627713637881391, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 6583304908937478053, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 6583304908937478053, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, -5333701488999351944, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, -5333701488999351944, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 23, -6812525441497608175, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x74\x2e\x66\x72\x6f\x73\x74", 9, 8805428251880601976, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };

frost$core$Bit frost$core$Bit$init$builtin_bit(bool param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:10
bool* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
frost$core$Bit $tmp4 = *(&local0);
return $tmp4;

}
frost$core$String* frost$core$Bit$get_asString$R$frost$core$String(frost$core$Bit param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:15
bool $tmp5 = param0.value;
if ($tmp5) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:16
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6));
return &$s7;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:19
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s8));
return &$s9;
block2:;
goto block4;
block4:;

}
frost$core$Bit frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:25
bool $tmp10 = param0.value;
bool $tmp11 = param1.value;
bool $tmp12 = $tmp10 == $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
return $tmp13;

}
frost$core$Bit frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:30
bool $tmp14 = param0.value;
bool $tmp15 = param1.value;
bool $tmp16 = $tmp14 != $tmp15;
frost$core$Bit $tmp17 = (frost$core$Bit) {$tmp16};
return $tmp17;

}
frost$core$Int64 frost$core$Bit$get_hash$R$frost$core$Int64(frost$core$Bit param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:35
bool $tmp18 = param0.value;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:36
frost$core$Int64 $tmp21 = (frost$core$Int64) {1u};
return $tmp21;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:38
frost$core$Int64 $tmp22 = (frost$core$Int64) {0u};
return $tmp22;

}
frost$core$Bit frost$core$Bit$$NOT$R$frost$core$Bit(frost$core$Bit param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp23 = param0.value;
bool $tmp24 = !$tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
return $tmp25;

}
frost$core$Bit frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:49
bool $tmp26 = param0.value;
bool $tmp27 = param1.value;
bool $tmp28 = $tmp26 | $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
return $tmp29;

}
frost$core$Bit frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:53
bool $tmp30 = param0.value;
bool $tmp31 = param1.value;
bool $tmp32 = $tmp30 & $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
return $tmp33;

}
frost$core$Bit frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit(frost$core$Bit param0, frost$core$Bit param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:57
bool $tmp34 = param0.value;
bool $tmp35 = param1.value;
bool $tmp36 = $tmp34 ^ $tmp35;
frost$core$Bit $tmp37 = (frost$core$Bit) {$tmp36};
return $tmp37;

}
frost$core$Object* frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T(frost$core$Bit param0, frost$core$Object* param1, frost$core$Object* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:62
bool $tmp38 = param0.value;
if ($tmp38) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:63
frost$core$Frost$ref$frost$core$Object$Q(param1);
return param1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:65
frost$core$Frost$ref$frost$core$Object$Q(param2);
return param2;

}
frost$core$String* frost$core$Bit$format$frost$core$String$R$frost$core$String(frost$core$Bit param0, frost$core$String* param1) {

frost$collections$Array* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:75
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from Bit.frost:75:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1378
frost$core$Int64 $tmp39 = (frost$core$Int64) {9223372036854775807u};
frost$collections$Array* $tmp40 = frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param1, &$s41, $tmp39);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$collections$Array* $tmp42 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local0) = $tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:76
frost$collections$Array* $tmp43 = *(&local0);
ITable* $tmp44 = ((frost$collections$CollectionView*) $tmp43)->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[0];
frost$core$Int64 $tmp47 = $tmp45(((frost$collections$CollectionView*) $tmp43));
frost$core$Int64 $tmp48 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Bit.frost:76:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48.value;
bool $tmp51 = $tmp49 == $tmp50;
frost$core$Bit $tmp52 = (frost$core$Bit) {$tmp51};
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {76u};
frost$core$String* $tmp55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s56, param1);
frost$core$String* $tmp57 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp55, &$s58);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s59, $tmp54, $tmp57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:77
bool $tmp60 = param0.value;
if ($tmp60) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:78
frost$collections$Array* $tmp61 = *(&local0);
frost$core$Int64 $tmp62 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Bit.frost:78:21
frost$core$Int64 $tmp63 = (frost$core$Int64) {0u};
int64_t $tmp64 = $tmp62.value;
int64_t $tmp65 = $tmp63.value;
bool $tmp66 = $tmp64 >= $tmp65;
frost$core$Bit $tmp67 = (frost$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block10; else goto block9;
block10:;
ITable* $tmp69 = ((frost$collections$CollectionView*) $tmp61)->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp69 = $tmp69->next;
}
$fn71 $tmp70 = $tmp69->methods[0];
frost$core$Int64 $tmp72 = $tmp70(((frost$collections$CollectionView*) $tmp61));
int64_t $tmp73 = $tmp62.value;
int64_t $tmp74 = $tmp72.value;
bool $tmp75 = $tmp73 < $tmp74;
frost$core$Bit $tmp76 = (frost$core$Bit) {$tmp75};
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp78 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s79, $tmp78, &$s80);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp81 = &$tmp61->data;
frost$core$Object** $tmp82 = *$tmp81;
int64_t $tmp83 = $tmp62.value;
frost$core$Object* $tmp84 = $tmp82[$tmp83];
frost$core$Frost$ref$frost$core$Object$Q($tmp84);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp84)));
frost$core$Frost$unref$frost$core$Object$Q($tmp84);
frost$collections$Array* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$core$String*) $tmp84);
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:80
frost$collections$Array* $tmp86 = *(&local0);
frost$core$Int64 $tmp87 = (frost$core$Int64) {1u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Bit.frost:80:17
frost$core$Int64 $tmp88 = (frost$core$Int64) {0u};
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88.value;
bool $tmp91 = $tmp89 >= $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block14; else goto block13;
block14:;
ITable* $tmp94 = ((frost$collections$CollectionView*) $tmp86)->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[0];
frost$core$Int64 $tmp97 = $tmp95(((frost$collections$CollectionView*) $tmp86));
int64_t $tmp98 = $tmp87.value;
int64_t $tmp99 = $tmp97.value;
bool $tmp100 = $tmp98 < $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp103 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s104, $tmp103, &$s105);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp106 = &$tmp86->data;
frost$core$Object** $tmp107 = *$tmp106;
int64_t $tmp108 = $tmp87.value;
frost$core$Object* $tmp109 = $tmp107[$tmp108];
frost$core$Frost$ref$frost$core$Object$Q($tmp109);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp109)));
frost$core$Frost$unref$frost$core$Object$Q($tmp109);
frost$collections$Array* $tmp110 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$core$String*) $tmp109);

}
void frost$core$Bit$cleanup(frost$core$Bit param0) {

return;

}

