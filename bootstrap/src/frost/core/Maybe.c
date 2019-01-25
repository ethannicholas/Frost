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
typedef frost$core$Bit (*$fn22)(frost$core$Maybe*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x67\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x54", 75, 5051574849251219141, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x65\x72\x72\x6f\x72\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 75, 671628669475614825, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x55\x43\x43\x45\x53\x53\x28", 8, 19818230912296378, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x45\x52\x52\x4f\x52\x28", 6, 1795335336935, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };

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
*(&local0) = ((frost$core$Object*) NULL);
return $tmp17;
block3:;
// line 28
frost$core$Int64 $tmp19 = (frost$core$Int64) {28};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s20, $tmp19);
abort(); // unreachable

}
frost$core$Error* frost$core$Maybe$error$R$frost$core$Error(frost$core$Maybe* param0) {

frost$core$Error* local0 = NULL;
$fn22 $tmp21 = ($fn22) param0->$class->vtable[4];
frost$core$Bit $tmp23 = $tmp21(param0);
frost$core$Bit $tmp24 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp23);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp26 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block1:;
// line 36
frost$core$Int64* $tmp29 = &param0->$rawValue;
frost$core$Int64 $tmp30 = *$tmp29;
frost$core$Int64 $tmp31 = (frost$core$Int64) {1};
frost$core$Bit $tmp32 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp30, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block4; else goto block3;
block4:;
frost$core$Error** $tmp34 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp35 = *$tmp34;
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Error* $tmp36 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local0) = $tmp35;
// line 38
frost$core$Error* $tmp37 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Error* $tmp38 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp37;
block3:;
// line 41
frost$core$Int64 $tmp39 = (frost$core$Int64) {41};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s40, $tmp39);
abort(); // unreachable

}
frost$core$Bit frost$core$Maybe$succeeded$R$frost$core$Bit(frost$core$Maybe* param0) {

// line 48
frost$core$Int64* $tmp41 = &param0->$rawValue;
frost$core$Int64 $tmp42 = *$tmp41;
frost$core$Int64 $tmp43 = (frost$core$Int64) {0};
frost$core$Bit $tmp44 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp42, $tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block2; else goto block3;
block2:;
// line 50
frost$core$Bit $tmp46 = frost$core$Bit$init$builtin_bit(true);
return $tmp46;
block3:;
frost$core$Int64 $tmp47 = (frost$core$Int64) {1};
frost$core$Bit $tmp48 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp42, $tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block4; else goto block1;
block4:;
// line 53
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit(false);
return $tmp50;
block1:;
// line 56
frost$core$Int64 $tmp51 = (frost$core$Int64) {56};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s52, $tmp51);
abort(); // unreachable

}
frost$core$String* frost$core$Maybe$get_asString$R$frost$core$String(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
// line 61
frost$core$Int64* $tmp53 = &param0->$rawValue;
frost$core$Int64 $tmp54 = *$tmp53;
frost$core$Int64 $tmp55 = (frost$core$Int64) {0};
frost$core$Bit $tmp56 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp54, $tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block2; else goto block3;
block2:;
frost$core$Object** $tmp58 = (frost$core$Object**) (param0->$data + 0);
frost$core$Object* $tmp59 = *$tmp58;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp59);
frost$core$Object* $tmp60 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp60);
*(&local0) = $tmp59;
// line 63
frost$core$Object* $tmp61 = *(&local0);
frost$core$String* $tmp62 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s63, $tmp61);
frost$core$String* $tmp64 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp62, &$s65);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Object* $tmp66 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp66);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp64;
block3:;
frost$core$Int64 $tmp67 = (frost$core$Int64) {1};
frost$core$Bit $tmp68 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp54, $tmp67);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block4; else goto block1;
block4:;
frost$core$Error** $tmp70 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp71 = *$tmp70;
*(&local1) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Error* $tmp72 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local1) = $tmp71;
// line 66
frost$core$Error* $tmp73 = *(&local1);
frost$core$String* $tmp74 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s75, ((frost$core$Object*) $tmp73));
frost$core$String* $tmp76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp74, &$s77);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Error* $tmp78 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local1) = ((frost$core$Error*) NULL);
return $tmp76;
block1:;
// line 69
frost$core$Int64 $tmp79 = (frost$core$Int64) {69};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s80, $tmp79);
abort(); // unreachable

}
void frost$core$Maybe$cleanup(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
// line 7
frost$core$Int64* $tmp81 = &param0->$rawValue;
frost$core$Int64 $tmp82 = *$tmp81;
frost$core$Int64 $tmp83 = (frost$core$Int64) {0};
frost$core$Bit $tmp84 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp82, $tmp83);
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block2; else goto block3;
block2:;
frost$core$Object** $tmp86 = (frost$core$Object**) (param0->$data + 0);
frost$core$Object* $tmp87 = *$tmp86;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp87);
frost$core$Object* $tmp88 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp88);
*(&local0) = $tmp87;
// line 1
frost$core$Object* $tmp89 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp89);
frost$core$Object* $tmp90 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp90);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp91 = (frost$core$Int64) {1};
frost$core$Bit $tmp92 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp82, $tmp91);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block4; else goto block1;
block4:;
frost$core$Error** $tmp94 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp95 = *$tmp94;
*(&local1) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Error* $tmp96 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local1) = $tmp95;
// line 1
frost$core$Error* $tmp97 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Error* $tmp98 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local1) = ((frost$core$Error*) NULL);
goto block1;
block1:;
// line 7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T(frost$core$Maybe* param0, frost$core$Int64 param1, frost$core$Object* param2) {

// line 7
frost$core$Int64* $tmp99 = &param0->$rawValue;
*$tmp99 = param1;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp100 = (frost$core$Object**) (param0->$data + 0);
*$tmp100 = param2;
return;

}
void frost$core$Maybe$init$frost$core$Int64$frost$core$Error(frost$core$Maybe* param0, frost$core$Int64 param1, frost$core$Error* param2) {

// line 7
frost$core$Int64* $tmp101 = &param0->$rawValue;
*$tmp101 = param1;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$Error** $tmp102 = (frost$core$Error**) (param0->$data + 0);
*$tmp102 = param2;
return;

}






