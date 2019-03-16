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
typedef frost$core$String* (*$fn80)(frost$core$Object*);
typedef frost$core$String* (*$fn98)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -2055899992811416928, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x67\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x54", 75, 5176438997679509763, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x65\x72\x72\x6f\x72\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 75, -1485318150833291227, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x43\x43\x45\x53\x53\x28", 8, 362313105218339080, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x52\x52\x4f\x52\x28", 6, 306458978544878811, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, 6602866763541444411, NULL };

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:23
frost$core$Int* $tmp9 = &param0->$rawValue;
frost$core$Int $tmp10 = *$tmp9;
frost$core$Int $tmp11 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:24:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:25
frost$core$Object* $tmp20 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp20);
frost$core$Object* $tmp21 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp21);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp20;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:28
frost$core$Int $tmp22 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s23, $tmp22);
abort(); // unreachable

}
frost$core$Error* frost$core$Maybe$error$R$frost$core$Error(frost$core$Maybe* param0) {

frost$core$Error* local0 = NULL;
$fn25 $tmp24 = ($fn25) param0->$class->vtable[4];
frost$core$Bit $tmp26 = $tmp24(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Maybe.frost:34:10
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:36
frost$core$Int* $tmp34 = &param0->$rawValue;
frost$core$Int $tmp35 = *$tmp34;
frost$core$Int $tmp36 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:37:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:38
frost$core$Error* $tmp45 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$Error* $tmp46 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp45;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:41
frost$core$Int $tmp47 = (frost$core$Int) {41u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s48, $tmp47);
abort(); // unreachable

}
frost$core$Bit frost$core$Maybe$succeeded$R$frost$core$Bit(frost$core$Maybe* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:48
frost$core$Int* $tmp49 = &param0->$rawValue;
frost$core$Int $tmp50 = *$tmp49;
frost$core$Int $tmp51 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:49:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp52 = $tmp50.value;
int64_t $tmp53 = $tmp51.value;
bool $tmp54 = $tmp52 == $tmp53;
frost$core$Bit $tmp55 = (frost$core$Bit) {$tmp54};
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:50
frost$core$Bit $tmp57 = (frost$core$Bit) {true};
return $tmp57;
block3:;
frost$core$Int $tmp58 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:52:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp59 = $tmp50.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 == $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block5; else goto block1;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:53
frost$core$Bit $tmp64 = (frost$core$Bit) {false};
return $tmp64;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:56
frost$core$Int $tmp65 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s66, $tmp65);
abort(); // unreachable

}
frost$core$String* frost$core$Maybe$get_asString$R$frost$core$String(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:61
frost$core$Int* $tmp67 = &param0->$rawValue;
frost$core$Int $tmp68 = *$tmp67;
frost$core$Int $tmp69 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:62:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:63
frost$core$Object* $tmp78 = *(&local0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Maybe.frost:63:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn80 $tmp79 = ($fn80) $tmp78->$class->vtable[0];
frost$core$String* $tmp81 = $tmp79($tmp78);
frost$core$String* $tmp82 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s83, $tmp81);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$String* $tmp84 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp82, &$s85);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Object* $tmp86 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp86);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp84;
block3:;
frost$core$Int $tmp87 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:65:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp88 = $tmp68.value;
int64_t $tmp89 = $tmp87.value;
bool $tmp90 = $tmp88 == $tmp89;
frost$core$Bit $tmp91 = (frost$core$Bit) {$tmp90};
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block6; else goto block1;
block6:;
frost$core$Error** $tmp93 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp94 = *$tmp93;
*(&local1) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Error* $tmp95 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local1) = $tmp94;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:66
frost$core$Error* $tmp96 = *(&local1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Maybe.frost:66:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn98 $tmp97 = ($fn98) ((frost$core$Object*) $tmp96)->$class->vtable[0];
frost$core$String* $tmp99 = $tmp97(((frost$core$Object*) $tmp96));
frost$core$String* $tmp100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s101, $tmp99);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$String* $tmp102 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp100, &$s103);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$Error* $tmp104 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local1) = ((frost$core$Error*) NULL);
return $tmp102;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:69
frost$core$Int $tmp105 = (frost$core$Int) {69u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s106, $tmp105);
abort(); // unreachable

}
void frost$core$Maybe$cleanup(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:7
frost$core$Int* $tmp107 = &param0->$rawValue;
frost$core$Int $tmp108 = *$tmp107;
frost$core$Int $tmp109 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109.value;
bool $tmp112 = $tmp110 == $tmp111;
frost$core$Bit $tmp113 = (frost$core$Bit) {$tmp112};
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block2; else goto block3;
block2:;
frost$core$Object** $tmp115 = (frost$core$Object**) (param0->$data + 0);
frost$core$Object* $tmp116 = *$tmp115;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp116);
frost$core$Object* $tmp117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
*(&local0) = $tmp116;
// <no location>
frost$core$Object* $tmp118 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp118);
frost$core$Object* $tmp119 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp119);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Int $tmp120 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Maybe.frost:7:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp121 = $tmp108.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 == $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block5; else goto block1;
block5:;
frost$core$Error** $tmp126 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp127 = *$tmp126;
*(&local1) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Error* $tmp128 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local1) = $tmp127;
// <no location>
frost$core$Error* $tmp129 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Error* $tmp130 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local1) = ((frost$core$Error*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T(frost$core$Maybe* param0, frost$core$Int param1, frost$core$Object* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:7
frost$core$Int* $tmp131 = &param0->$rawValue;
*$tmp131 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:7
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp132 = (frost$core$Object**) (param0->$data + 0);
*$tmp132 = param2;
return;

}
void frost$core$Maybe$init$frost$core$Int$frost$core$Error(frost$core$Maybe* param0, frost$core$Int param1, frost$core$Error* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:7
frost$core$Int* $tmp133 = &param0->$rawValue;
*$tmp133 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Maybe.frost:7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$Error** $tmp134 = (frost$core$Error**) (param0->$data + 0);
*$tmp134 = param2;
return;

}






