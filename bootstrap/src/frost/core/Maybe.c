#include "frost/core/Maybe.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Error.h"


static frost$core$String $s1;
frost$core$Maybe$class_type frost$core$Maybe$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Maybe$get_asString$R$frost$core$String, frost$core$Maybe$cleanup, frost$core$Maybe$get$R$frost$core$Maybe$T, frost$core$Maybe$error$R$frost$core$Error, frost$core$Maybe$succeeded$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn3)(frost$core$Maybe*);
typedef frost$core$Bit (*$fn29)(frost$core$Maybe*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x67\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x54", 75, 5051574849251219141, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x67\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x54\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 75, 8307072720972963437, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x65\x72\x72\x6f\x72\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 75, 671628669475614825, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x65\x72\x72\x6f\x72\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 75, -8116278943721327455, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x73\x75\x63\x63\x65\x65\x64\x65\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 1080392264217692745, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x55\x43\x43\x45\x53\x53\x28", 8, 19818230912296378, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x45\x52\x52\x4f\x52\x28", 6, 1795335336935, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x67\x65\x74\x5f\x61\x73\x53\x74\x72\x69\x6e\x67\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 83, -3572966162919912398, NULL };

frost$core$Object* frost$core$Maybe$get$R$frost$core$Maybe$T(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
$fn3 $tmp2 = ($fn3) param0->$class->vtable[4];
frost$core$Bit $tmp4 = $tmp2(param0);
bool $tmp5 = $tmp4.value;
if ($tmp5) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp6 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s7, $tmp6, &$s8);
abort(); // unreachable
block1:;
// line 23
frost$core$Int64* $tmp9 = &param0->$rawValue;
frost$core$Int64 $tmp10 = *$tmp9;
frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
frost$core$Bit $tmp12 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp10, $tmp11);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block4; else goto block3;
block4:;
frost$core$Object** $tmp14 = (frost$core$Object**) (param0->$data + 0);
frost$core$Object* $tmp15 = *$tmp14;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp15);
frost$core$Object* $tmp16 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp16);
*(&local0) = $tmp15;
// line 25
frost$core$Object* $tmp17 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp17);
frost$core$Object* $tmp18 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp18);
// unreffing value
*(&local0) = ((frost$core$Object*) NULL);
return $tmp17;
block3:;
// line 28
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit(false);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {28};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s22, $tmp21);
abort(); // unreachable
block5:;
frost$core$Bit $tmp23 = frost$core$Bit$init$builtin_bit(false);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp25 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block7:;
abort(); // unreachable

}
frost$core$Error* frost$core$Maybe$error$R$frost$core$Error(frost$core$Maybe* param0) {

frost$core$Error* local0 = NULL;
$fn29 $tmp28 = ($fn29) param0->$class->vtable[4];
frost$core$Bit $tmp30 = $tmp28(param0);
frost$core$Bit $tmp31 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp30);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp33 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block1:;
// line 36
frost$core$Int64* $tmp36 = &param0->$rawValue;
frost$core$Int64 $tmp37 = *$tmp36;
frost$core$Int64 $tmp38 = (frost$core$Int64) {1};
frost$core$Bit $tmp39 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp37, $tmp38);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block4; else goto block3;
block4:;
frost$core$Error** $tmp41 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp42 = *$tmp41;
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Error* $tmp43 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local0) = $tmp42;
// line 38
frost$core$Error* $tmp44 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Error* $tmp45 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp44;
block3:;
// line 41
frost$core$Bit $tmp46 = frost$core$Bit$init$builtin_bit(false);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp48 = (frost$core$Int64) {41};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s49, $tmp48);
abort(); // unreachable
block5:;
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit(false);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s53, $tmp52, &$s54);
abort(); // unreachable
block7:;
abort(); // unreachable

}
frost$core$Bit frost$core$Maybe$succeeded$R$frost$core$Bit(frost$core$Maybe* param0) {

// line 48
frost$core$Int64* $tmp55 = &param0->$rawValue;
frost$core$Int64 $tmp56 = *$tmp55;
frost$core$Int64 $tmp57 = (frost$core$Int64) {0};
frost$core$Bit $tmp58 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp56, $tmp57);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block2; else goto block3;
block2:;
// line 50
frost$core$Bit $tmp60 = frost$core$Bit$init$builtin_bit(true);
return $tmp60;
block3:;
frost$core$Int64 $tmp61 = (frost$core$Int64) {1};
frost$core$Bit $tmp62 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp56, $tmp61);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block4; else goto block1;
block4:;
// line 53
frost$core$Bit $tmp64 = frost$core$Bit$init$builtin_bit(false);
return $tmp64;
block1:;
frost$core$Bit $tmp65 = frost$core$Bit$init$builtin_bit(false);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp67 = (frost$core$Int64) {47};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s68, $tmp67, &$s69);
abort(); // unreachable
block5:;
abort(); // unreachable

}
frost$core$String* frost$core$Maybe$get_asString$R$frost$core$String(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
// line 60
frost$core$Int64* $tmp70 = &param0->$rawValue;
frost$core$Int64 $tmp71 = *$tmp70;
frost$core$Int64 $tmp72 = (frost$core$Int64) {0};
frost$core$Bit $tmp73 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp71, $tmp72);
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
// line 62
frost$core$Object* $tmp78 = *(&local0);
frost$core$String* $tmp79 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s80, $tmp78);
frost$core$String* $tmp81 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp79, &$s82);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing REF($21:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing REF($20:frost.core.String)
frost$core$Object* $tmp83 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
// unreffing v
*(&local0) = ((frost$core$Object*) NULL);
return $tmp81;
block3:;
frost$core$Int64 $tmp84 = (frost$core$Int64) {1};
frost$core$Bit $tmp85 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp71, $tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block4; else goto block1;
block4:;
frost$core$Error** $tmp87 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp88 = *$tmp87;
*(&local1) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Error* $tmp89 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local1) = $tmp88;
// line 65
frost$core$Error* $tmp90 = *(&local1);
frost$core$String* $tmp91 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s92, ((frost$core$Object*) $tmp90));
frost$core$String* $tmp93 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp91, &$s94);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing REF($53:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing REF($52:frost.core.String)
frost$core$Error* $tmp95 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// unreffing e
*(&local1) = ((frost$core$Error*) NULL);
return $tmp93;
block1:;
frost$core$Bit $tmp96 = frost$core$Bit$init$builtin_bit(false);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp98 = (frost$core$Int64) {59};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s99, $tmp98, &$s100);
abort(); // unreachable
block5:;
abort(); // unreachable

}
void frost$core$Maybe$cleanup(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
// line 7
frost$core$Int64* $tmp101 = &param0->$rawValue;
frost$core$Int64 $tmp102 = *$tmp101;
frost$core$Int64 $tmp103 = (frost$core$Int64) {0};
frost$core$Bit $tmp104 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp102, $tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block2; else goto block3;
block2:;
frost$core$Object** $tmp106 = (frost$core$Object**) (param0->$data + 0);
frost$core$Object* $tmp107 = *$tmp106;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp107);
frost$core$Object* $tmp108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp108);
*(&local0) = $tmp107;
// line 1
frost$core$Object* $tmp109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp109);
frost$core$Object* $tmp110 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp110);
// unreffing _f0
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp111 = (frost$core$Int64) {1};
frost$core$Bit $tmp112 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp102, $tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block4; else goto block1;
block4:;
frost$core$Error** $tmp114 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp115 = *$tmp114;
*(&local1) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$Error* $tmp116 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local1) = $tmp115;
// line 1
frost$core$Error* $tmp117 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Error* $tmp118 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing _f0
*(&local1) = ((frost$core$Error*) NULL);
goto block1;
block1:;
// line 7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T(frost$core$Maybe* param0, frost$core$Int64 param1, frost$core$Object* param2) {

// line 7
frost$core$Int64* $tmp119 = &param0->$rawValue;
*$tmp119 = param1;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp120 = (frost$core$Object**) (param0->$data + 0);
*$tmp120 = param2;
return;

}
void frost$core$Maybe$init$frost$core$Int64$frost$core$Error(frost$core$Maybe* param0, frost$core$Int64 param1, frost$core$Error* param2) {

// line 7
frost$core$Int64* $tmp121 = &param0->$rawValue;
*$tmp121 = param1;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$Error** $tmp122 = (frost$core$Error**) (param0->$data + 0);
*$tmp122 = param2;
return;

}






