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
typedef frost$core$Bit (*$fn20)(frost$core$Maybe*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x67\x65\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x54", 75, 5051574849251219141, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x79\x62\x65\x2e\x66\x72\x6f\x73\x74", 11, -5227471998822828153, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65\x2e\x65\x72\x72\x6f\x72\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 75, 671628669475614825, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x55\x43\x43\x45\x53\x53\x28", 8, 19818230912296378, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x45\x52\x52\x4f\x52\x28", 6, 1795335336935, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

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
goto block5;
block5:;
goto block5;
block6:;
goto block7;
block7:;

}
frost$core$Error* frost$core$Maybe$error$R$frost$core$Error(frost$core$Maybe* param0) {

frost$core$Error* local0 = NULL;
$fn20 $tmp19 = ($fn20) param0->$class->vtable[4];
frost$core$Bit $tmp21 = $tmp19(param0);
frost$core$Bit $tmp22 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp21);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp24 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s25, $tmp24, &$s26);
abort(); // unreachable
block1:;
// line 36
frost$core$Int64* $tmp27 = &param0->$rawValue;
frost$core$Int64 $tmp28 = *$tmp27;
frost$core$Int64 $tmp29 = (frost$core$Int64) {1};
frost$core$Bit $tmp30 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp28, $tmp29);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block4; else goto block3;
block4:;
frost$core$Error** $tmp32 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp33 = *$tmp32;
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Error* $tmp34 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local0) = $tmp33;
// line 38
frost$core$Error* $tmp35 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Error* $tmp36 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp35;
block3:;
// line 41
goto block5;
block5:;
goto block5;
block6:;
goto block7;
block7:;

}
frost$core$Bit frost$core$Maybe$succeeded$R$frost$core$Bit(frost$core$Maybe* param0) {

// line 48
frost$core$Int64* $tmp37 = &param0->$rawValue;
frost$core$Int64 $tmp38 = *$tmp37;
frost$core$Int64 $tmp39 = (frost$core$Int64) {0};
frost$core$Bit $tmp40 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp38, $tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block2; else goto block3;
block2:;
// line 50
frost$core$Bit $tmp42 = frost$core$Bit$init$builtin_bit(true);
return $tmp42;
block3:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {1};
frost$core$Bit $tmp44 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp38, $tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block4; else goto block1;
block4:;
// line 53
frost$core$Bit $tmp46 = frost$core$Bit$init$builtin_bit(false);
return $tmp46;
block1:;
// line 56
goto block5;
block5:;
goto block5;
block6:;
goto block7;
block7:;

}
frost$core$String* frost$core$Maybe$get_asString$R$frost$core$String(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
// line 61
frost$core$Int64* $tmp47 = &param0->$rawValue;
frost$core$Int64 $tmp48 = *$tmp47;
frost$core$Int64 $tmp49 = (frost$core$Int64) {0};
frost$core$Bit $tmp50 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp48, $tmp49);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block2; else goto block3;
block2:;
frost$core$Object** $tmp52 = (frost$core$Object**) (param0->$data + 0);
frost$core$Object* $tmp53 = *$tmp52;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp53);
frost$core$Object* $tmp54 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp54);
*(&local0) = $tmp53;
// line 63
frost$core$Object* $tmp55 = *(&local0);
frost$core$String* $tmp56 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s57, $tmp55);
frost$core$String* $tmp58 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp56, &$s59);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Object* $tmp60 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp60);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp58;
block3:;
frost$core$Int64 $tmp61 = (frost$core$Int64) {1};
frost$core$Bit $tmp62 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp48, $tmp61);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block4; else goto block1;
block4:;
frost$core$Error** $tmp64 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp65 = *$tmp64;
*(&local1) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Error* $tmp66 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local1) = $tmp65;
// line 66
frost$core$Error* $tmp67 = *(&local1);
frost$core$String* $tmp68 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s69, ((frost$core$Object*) $tmp67));
frost$core$String* $tmp70 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp68, &$s71);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Error* $tmp72 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local1) = ((frost$core$Error*) NULL);
return $tmp70;
block1:;
// line 69
goto block5;
block5:;
goto block5;
block6:;
goto block7;
block7:;

}
void frost$core$Maybe$cleanup(frost$core$Maybe* param0) {

frost$core$Object* local0 = NULL;
frost$core$Error* local1 = NULL;
// line 7
frost$core$Int64* $tmp73 = &param0->$rawValue;
frost$core$Int64 $tmp74 = *$tmp73;
frost$core$Int64 $tmp75 = (frost$core$Int64) {0};
frost$core$Bit $tmp76 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp74, $tmp75);
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block2; else goto block3;
block2:;
frost$core$Object** $tmp78 = (frost$core$Object**) (param0->$data + 0);
frost$core$Object* $tmp79 = *$tmp78;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp79);
frost$core$Object* $tmp80 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
*(&local0) = $tmp79;
// line 1
frost$core$Object* $tmp81 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp81);
frost$core$Object* $tmp82 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp82);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp83 = (frost$core$Int64) {1};
frost$core$Bit $tmp84 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp74, $tmp83);
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block4; else goto block1;
block4:;
frost$core$Error** $tmp86 = (frost$core$Error**) (param0->$data + 0);
frost$core$Error* $tmp87 = *$tmp86;
*(&local1) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Error* $tmp88 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local1) = $tmp87;
// line 1
frost$core$Error* $tmp89 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Error* $tmp90 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
*(&local1) = ((frost$core$Error*) NULL);
goto block1;
block1:;
// line 7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T(frost$core$Maybe* param0, frost$core$Int64 param1, frost$core$Object* param2) {

// line 7
frost$core$Int64* $tmp91 = &param0->$rawValue;
*$tmp91 = param1;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp92 = (frost$core$Object**) (param0->$data + 0);
*$tmp92 = param2;
return;

}
void frost$core$Maybe$init$frost$core$Int64$frost$core$Error(frost$core$Maybe* param0, frost$core$Int64 param1, frost$core$Error* param2) {

// line 7
frost$core$Int64* $tmp93 = &param0->$rawValue;
*$tmp93 = param1;
// line 7
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$Error** $tmp94 = (frost$core$Error**) (param0->$data + 0);
*$tmp94 = param2;
return;

}






