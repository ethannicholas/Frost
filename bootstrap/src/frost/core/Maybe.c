#include "frost/core/Maybe.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Error.h"


static frost$core$String $s1;
frost$core$Maybe$class_type frost$core$Maybe$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Maybe$get_asString$R$frost$core$String, frost$core$Maybe$cleanup, frost$core$Maybe$get$R$frost$core$Maybe$T, frost$core$Maybe$error$R$frost$core$Error, frost$core$Maybe$succeeded$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn3)(frost$core$Maybe*);
typedef frost$core$Bit (*$fn25)(frost$core$Maybe*);
typedef frost$core$String* (*$fn108)(frost$core$Object*);
typedef frost$core$String* (*$fn126)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -2055899992811416928, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x67\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x54", 75, 5176438997679509763, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x65\x72\x72\x6f\x72\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 75, -1485318150833291227, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x43\x43\x45\x53\x53\x28", 8, 362313105218339080, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x52\x52\x4f\x52\x28", 6, 306458978544878811, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };

frost$core$Object* frost$core$Maybe$get$R$frost$core$Maybe$T(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
$fn3 $tmp2 = ($fn3) param0->$class->vtable[4];
frost$core$Bit $tmp4 = $tmp2(param0);
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block2;
block2:;
frost$core$Int $tmp6 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, $tmp6, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:23
frost$core$Int* $tmp9 = &param0->$rawValue;
frost$core$Int $tmp10 = *$tmp9;
frost$core$Int $tmp11 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:24:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp12 = $tmp10.value;
int64_t $tmp13 = $tmp11.value;
bool $tmp14 = $tmp12 == $tmp13;
frost$core$Bit $tmp15 = (frost$core$Bit) {$tmp14};
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block4; else goto block3;
block4:;
frost$core$Object** $tmp17 = (frost$core$Object**) (param0->$data + 0);
frost$core$Object* $tmp18 = *$tmp17;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp18);
frost$core$Object* $tmp19 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp19);
*(&local0) = $tmp18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:25
frost$core$Object* $tmp20 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp20);
frost$core$Object* $tmp21 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp21);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp20;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:28
frost$core$Int $tmp22 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s23, $tmp22);
abort(); // unreachable

}
frost$core$Error* frost$core$Maybe$error$R$frost$core$Error(frost$core$Maybe* param0) {

frost$core$Error* local0 = NULL;
$fn25 $tmp24 = ($fn25) param0->$class->vtable[4];
frost$core$Bit $tmp26 = $tmp24(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Maybe.frost:34:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp27 = $tmp26.value;
bool $tmp28 = !$tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block1; else goto block2;
block2:;
frost$core$Int $tmp31 = (frost$core$Int) {35u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, $tmp31, &$s33);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:36
frost$core$Int* $tmp34 = &param0->$rawValue;
frost$core$Int $tmp35 = *$tmp34;
frost$core$Int $tmp36 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:37:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 == $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block5; else goto block4;
block5:;
frost$core$Error** $tmp42 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp43 = *$tmp42;
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Error* $tmp44 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local0) = $tmp43;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:38
frost$core$Error* $tmp45 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$Error* $tmp46 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp45;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:41
frost$core$Int $tmp47 = (frost$core$Int) {41u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s48, $tmp47);
abort(); // unreachable

}
frost$core$Bit frost$core$Maybe$succeeded$R$frost$core$Bit(frost$core$Maybe* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:48
frost$core$Int* $tmp49 = &param0->$rawValue;
frost$core$Int $tmp50 = *$tmp49;
frost$core$Int $tmp51 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:49:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp52 = $tmp50.value;
int64_t $tmp53 = $tmp51.value;
bool $tmp54 = $tmp52 == $tmp53;
frost$core$Bit $tmp55 = (frost$core$Bit) {$tmp54};
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:50
frost$core$Bit $tmp57 = (frost$core$Bit) {true};
return $tmp57;
block3:;
frost$core$Int $tmp58 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:52:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp59 = $tmp50.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 == $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block5; else goto block1;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:53
frost$core$Bit $tmp64 = (frost$core$Bit) {false};
return $tmp64;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:56
frost$core$Int $tmp65 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s66, $tmp65);
abort(); // unreachable

}
void frost$core$Maybe$cleanup(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
frost$core$Int* $tmp67 = &param0->$rawValue;
frost$core$Int $tmp68 = *$tmp67;
frost$core$Int $tmp69 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp70 = $tmp68.value;
int64_t $tmp71 = $tmp69.value;
bool $tmp72 = $tmp70 == $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block2; else goto block3;
block2:;
frost$core$Object** $tmp75 = (frost$core$Object**) (param0->$data + 0);
frost$core$Object* $tmp76 = *$tmp75;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp76);
frost$core$Object* $tmp77 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp77);
*(&local0) = $tmp76;
// <no location>
frost$core$Object* $tmp78 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp78);
frost$core$Object* $tmp79 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp79);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Int $tmp80 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp81 = $tmp68.value;
int64_t $tmp82 = $tmp80.value;
bool $tmp83 = $tmp81 == $tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block5; else goto block1;
block5:;
frost$core$Error** $tmp86 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp87 = *$tmp86;
*(&local1) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Error* $tmp88 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local1) = $tmp87;
// <no location>
frost$core$Error* $tmp89 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Error* $tmp90 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
*(&local1) = ((frost$core$Error*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(frost$core$Maybe* param0, frost$core$Int param1, frost$core$Object* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
frost$core$Int* $tmp91 = &param0->$rawValue;
*$tmp91 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp92 = (frost$core$Object**) (param0->$data + 0);
*$tmp92 = param2;
return;

}
void frost$core$Maybe$init$frost$core$Int$frost$core$Error(frost$core$Maybe* param0, frost$core$Int param1, frost$core$Error* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
frost$core$Int* $tmp93 = &param0->$rawValue;
*$tmp93 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$Error** $tmp94 = (frost$core$Error**) (param0->$data + 0);
*$tmp94 = param2;
return;

}
frost$core$String* frost$core$Maybe$get_asString$R$frost$core$String(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
frost$core$Int* $tmp95 = &param0->$rawValue;
frost$core$Int $tmp96 = *$tmp95;
frost$core$Int $tmp97 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97.value;
bool $tmp100 = $tmp98 == $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block2; else goto block3;
block2:;
frost$core$Object** $tmp103 = (frost$core$Object**) (param0->$data + 0);
frost$core$Object* $tmp104 = *$tmp103;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp104);
frost$core$Object* $tmp105 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
*(&local0) = $tmp104;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
frost$core$Object* $tmp106 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn108 $tmp107 = ($fn108) $tmp106->$class->vtable[0];
frost$core$String* $tmp109 = $tmp107($tmp106);
frost$core$String* $tmp110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s111, $tmp109);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$String* $tmp112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp110, &$s113);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Object* $tmp114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp114);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp112;
block3:;
frost$core$Int $tmp115 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp116 = $tmp96.value;
int64_t $tmp117 = $tmp115.value;
bool $tmp118 = $tmp116 == $tmp117;
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118};
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block6; else goto block7;
block6:;
frost$core$Error** $tmp121 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp122 = *$tmp121;
*(&local1) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Error* $tmp123 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local1) = $tmp122;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
frost$core$Error* $tmp124 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn126 $tmp125 = ($fn126) ((frost$core$Object*) $tmp124)->$class->vtable[0];
frost$core$String* $tmp127 = $tmp125(((frost$core$Object*) $tmp124));
frost$core$String* $tmp128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s129, $tmp127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$String* $tmp130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp128, &$s131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Error* $tmp132 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local1) = ((frost$core$Error*) NULL);
return $tmp130;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Maybe.frost:7
frost$core$Int $tmp133 = (frost$core$Int) {7u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s134, $tmp133);
abort(); // unreachable
block1:;
goto block10;
block10:;

}






