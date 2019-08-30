#include "frost/json/JSON/PathKey.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
#include "frost/core/String/Index.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit$shim(frost$json$JSON$PathKey* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit(p0, ((frost$json$JSON$PathKey*) p1));

    return result;
}
__attribute__((weak)) frost$core$Int frost$json$JSON$PathKey$get_hash$R$frost$core$Int$shim(frost$json$JSON$PathKey* p0) {
    frost$core$Int result = frost$json$JSON$PathKey$get_hash$R$frost$core$Int(p0);

    return result;
}
__attribute__((weak)) frost$core$String* frost$json$JSON$PathKey$get_asString$R$frost$core$String$shim(frost$json$JSON$PathKey* p0) {
    frost$core$String* result = frost$json$JSON$PathKey$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$json$JSON$PathKey$cleanup$shim(frost$json$JSON$PathKey* p0) {
    frost$json$JSON$PathKey$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$json$JSON$PathKey$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$json$JSON$PathKey$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$json$JSON$PathKey$_frost$core$Equatable, { frost$json$JSON$PathKey$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
frost$json$JSON$PathKey$class_type frost$json$JSON$PathKey$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$json$JSON$PathKey$_frost$collections$Key, { frost$json$JSON$PathKey$get_asString$R$frost$core$String$shim, frost$json$JSON$PathKey$cleanup$shim, frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit$shim, frost$json$JSON$PathKey$get_hash$R$frost$core$Int$shim} };

typedef frost$core$Int (*$fn61)(frost$collections$Key*);
typedef frost$core$Int (*$fn71)(frost$collections$Key*);
typedef frost$core$Int (*$fn93)(frost$collections$Key*);
typedef frost$core$Int (*$fn103)(frost$collections$Key*);
typedef frost$core$String* (*$fn132)(frost$core$Object*);
typedef frost$core$String* (*$fn151)(frost$core$Object*);
typedef frost$core$String* (*$fn160)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x2e\x50\x61\x74\x68\x4b\x65\x79", 23, 4907892411442390093, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x49\x45\x4c\x44\x28", 6, -2129528048268295747, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x44\x45\x58\x28", 6, -5147564160147228071, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };

void frost$json$JSON$PathKey$cleanup(frost$json$JSON$PathKey* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index local1;
frost$core$Int local2;
frost$core$String$Index local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
frost$core$String** $tmp10 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp11 = *$tmp10;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$String* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = $tmp11;
frost$core$String$Index* $tmp13 = (frost$core$String$Index*) (param0->$data + 8);
frost$core$String$Index $tmp14 = *$tmp13;
*(&local1) = $tmp14;
// <no location>
frost$core$String* $tmp15 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$String* $tmp16 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int $tmp17 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp18 = $tmp3.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 == $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block5; else goto block1;
block5:;
frost$core$Int* $tmp23 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp24 = *$tmp23;
*(&local2) = $tmp24;
frost$core$String$Index* $tmp25 = (frost$core$String$Index*) (param0->$data + 8);
frost$core$String$Index $tmp26 = *$tmp25;
*(&local3) = $tmp26;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
void frost$json$JSON$PathKey$init$frost$core$Int$frost$core$String$frost$core$String$Index(frost$json$JSON$PathKey* param0, frost$core$Int param1, frost$core$String* param2, frost$core$String$Index param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Int* $tmp27 = &param0->$rawValue;
*$tmp27 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp28 = (frost$core$String**) (param0->$data + 0);
*$tmp28 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$String$Index* $tmp29 = (frost$core$String$Index*) (param0->$data + 8);
*$tmp29 = param3;
return;

}
void frost$json$JSON$PathKey$init$frost$core$Int$frost$core$Int$frost$core$String$Index(frost$json$JSON$PathKey* param0, frost$core$Int param1, frost$core$Int param2, frost$core$String$Index param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Int* $tmp30 = &param0->$rawValue;
*$tmp30 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Int* $tmp31 = (frost$core$Int*) (param0->$data + 0);
*$tmp31 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$String$Index* $tmp32 = (frost$core$String$Index*) (param0->$data + 8);
*$tmp32 = param3;
return;

}
frost$core$Bit frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit(frost$json$JSON$PathKey* param0, frost$json$JSON$PathKey* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Int* $tmp33 = &param0->$rawValue;
frost$core$Int $tmp34 = *$tmp33;
frost$core$Int* $tmp35 = &param1->$rawValue;
frost$core$Int $tmp36 = *$tmp35;
int64_t $tmp37 = $tmp34.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 != $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Bit $tmp42 = (frost$core$Bit) {false};
return $tmp42;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Bit $tmp43 = (frost$core$Bit) {true};
return $tmp43;

}
frost$core$Int frost$json$JSON$PathKey$get_hash$R$frost$core$Int(frost$json$JSON$PathKey* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index local1;
frost$core$Int local2;
frost$core$String$Index local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Int* $tmp44 = &param0->$rawValue;
frost$core$Int $tmp45 = *$tmp44;
frost$core$Int $tmp46 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46.value;
bool $tmp49 = $tmp47 == $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block2; else goto block3;
block2:;
frost$core$String** $tmp52 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp53 = *$tmp52;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$String* $tmp54 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local0) = $tmp53;
frost$core$String$Index* $tmp55 = (frost$core$String$Index*) (param0->$data + 8);
frost$core$String$Index $tmp56 = *$tmp55;
*(&local1) = $tmp56;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Int $tmp57 = (frost$core$Int) {4907892411442390093u};
frost$core$String* $tmp58 = *(&local0);
ITable* $tmp59 = ((frost$collections$Key*) $tmp58)->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp59 = $tmp59->next;
}
$fn61 $tmp60 = $tmp59->methods[0];
frost$core$Int $tmp62 = $tmp60(((frost$collections$Key*) $tmp58));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp63 = $tmp57.value;
int64_t $tmp64 = $tmp62.value;
int64_t $tmp65 = $tmp63 ^ $tmp64;
frost$core$Int $tmp66 = (frost$core$Int) {$tmp65};
frost$core$String$Index $tmp67 = *(&local1);
frost$core$String$Index$wrapper* $tmp68;
$tmp68 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp68->value = $tmp67;
ITable* $tmp69 = ((frost$collections$Key*) $tmp68)->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp69 = $tmp69->next;
}
$fn71 $tmp70 = $tmp69->methods[0];
frost$core$Int $tmp72 = $tmp70(((frost$collections$Key*) $tmp68));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp73 = $tmp66.value;
int64_t $tmp74 = $tmp72.value;
int64_t $tmp75 = $tmp73 ^ $tmp74;
frost$core$Int $tmp76 = (frost$core$Int) {$tmp75};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp68)));
frost$core$String* $tmp77 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local0) = ((frost$core$String*) NULL);
return $tmp76;
block3:;
frost$core$Int $tmp78 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp79 = $tmp45.value;
int64_t $tmp80 = $tmp78.value;
bool $tmp81 = $tmp79 == $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block7; else goto block8;
block7:;
frost$core$Int* $tmp84 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp85 = *$tmp84;
*(&local2) = $tmp85;
frost$core$String$Index* $tmp86 = (frost$core$String$Index*) (param0->$data + 8);
frost$core$String$Index $tmp87 = *$tmp86;
*(&local3) = $tmp87;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Int $tmp88 = (frost$core$Int) {9815784822884780186u};
frost$core$Int $tmp89 = *(&local2);
frost$core$Int$wrapper* $tmp90;
$tmp90 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp90->value = $tmp89;
ITable* $tmp91 = ((frost$collections$Key*) $tmp90)->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
frost$core$Int $tmp94 = $tmp92(((frost$collections$Key*) $tmp90));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp95 = $tmp88.value;
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95 ^ $tmp96;
frost$core$Int $tmp98 = (frost$core$Int) {$tmp97};
frost$core$String$Index $tmp99 = *(&local3);
frost$core$String$Index$wrapper* $tmp100;
$tmp100 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp100->value = $tmp99;
ITable* $tmp101 = ((frost$collections$Key*) $tmp100)->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[0];
frost$core$Int $tmp104 = $tmp102(((frost$collections$Key*) $tmp100));
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
int64_t $tmp105 = $tmp98.value;
int64_t $tmp106 = $tmp104.value;
int64_t $tmp107 = $tmp105 ^ $tmp106;
frost$core$Int $tmp108 = (frost$core$Int) {$tmp107};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp100)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp90)));
return $tmp108;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Int $tmp109 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s110, $tmp109);
abort(); // unreachable
block1:;
goto block12;
block12:;

}
frost$core$String* frost$json$JSON$PathKey$get_asString$R$frost$core$String(frost$json$JSON$PathKey* param0) {

frost$core$String* local0 = NULL;
frost$core$String$Index local1;
frost$core$Int local2;
frost$core$String$Index local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Int* $tmp111 = &param0->$rawValue;
frost$core$Int $tmp112 = *$tmp111;
frost$core$Int $tmp113 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 == $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block2; else goto block3;
block2:;
frost$core$String** $tmp119 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp120 = *$tmp119;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$String* $tmp121 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local0) = $tmp120;
frost$core$String$Index* $tmp122 = (frost$core$String$Index*) (param0->$data + 8);
frost$core$String$Index $tmp123 = *$tmp122;
*(&local1) = $tmp123;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$String* $tmp124 = *(&local0);
frost$core$String* $tmp125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s126, $tmp124);
frost$core$String* $tmp127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp125, &$s128);
frost$core$String$Index $tmp129 = *(&local1);
frost$core$String$Index$wrapper* $tmp130;
$tmp130 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp130->value = $tmp129;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn132 $tmp131 = ($fn132) ((frost$core$Object*) $tmp130)->$class->vtable[0];
frost$core$String* $tmp133 = $tmp131(((frost$core$Object*) $tmp130));
frost$core$String* $tmp134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp127, $tmp133);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$String* $tmp135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp134, &$s136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$String* $tmp137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local0) = ((frost$core$String*) NULL);
return $tmp135;
block3:;
frost$core$Int $tmp138 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp139 = $tmp112.value;
int64_t $tmp140 = $tmp138.value;
bool $tmp141 = $tmp139 == $tmp140;
frost$core$Bit $tmp142 = (frost$core$Bit) {$tmp141};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block6; else goto block7;
block6:;
frost$core$Int* $tmp144 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp145 = *$tmp144;
*(&local2) = $tmp145;
frost$core$String$Index* $tmp146 = (frost$core$String$Index*) (param0->$data + 8);
frost$core$String$Index $tmp147 = *$tmp146;
*(&local3) = $tmp147;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Int $tmp148 = *(&local2);
frost$core$Int$wrapper* $tmp149;
$tmp149 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp149->value = $tmp148;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn151 $tmp150 = ($fn151) ((frost$core$Object*) $tmp149)->$class->vtable[0];
frost$core$String* $tmp152 = $tmp150(((frost$core$Object*) $tmp149));
frost$core$String* $tmp153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s154, $tmp152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$String* $tmp155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp153, &$s156);
frost$core$String$Index $tmp157 = *(&local3);
frost$core$String$Index$wrapper* $tmp158;
$tmp158 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp158->value = $tmp157;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:43:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn160 $tmp159 = ($fn160) ((frost$core$Object*) $tmp158)->$class->vtable[0];
frost$core$String* $tmp161 = $tmp159(((frost$core$Object*) $tmp158));
frost$core$String* $tmp162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp155, $tmp161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
frost$core$String* $tmp163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp162, &$s164);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
return $tmp163;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:43
frost$core$Int $tmp165 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s166, $tmp165);
abort(); // unreachable
block1:;
goto block11;
block11:;

}






