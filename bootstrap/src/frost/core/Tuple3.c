#include "frost/core/Tuple3.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$core$Tuple3$class_type frost$core$Tuple3$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Tuple3$get_asString$R$frost$core$String, frost$core$Tuple3$cleanup, frost$core$Tuple3$$IDX$frost$core$Int$R$frost$core$Object$Q} };

typedef frost$core$String* (*$fn53)(frost$core$Object*);
typedef frost$core$String* (*$fn62)(frost$core$Object*);
typedef frost$core$String* (*$fn70)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x33", 17, -5524547618166533069, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x33\x2e\x66\x72\x6f\x73\x74", 12, -6030416869552400622, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x33\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 91, 1310642727396317761, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$core$Tuple3$init$frost$core$Tuple3$T0$frost$core$Tuple3$T1$frost$core$Tuple3$T2(frost$core$Tuple3* param0, frost$core$Object* param1, frost$core$Object* param2, frost$core$Object* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple3.frost:8
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp2 = &param0->f0;
frost$core$Object* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q($tmp3);
frost$core$Object** $tmp4 = &param0->f0;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple3.frost:9
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp5 = &param0->f1;
frost$core$Object* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q($tmp6);
frost$core$Object** $tmp7 = &param0->f1;
*$tmp7 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple3.frost:10
frost$core$Frost$ref$frost$core$Object$Q(param3);
frost$core$Object** $tmp8 = &param0->f2;
frost$core$Object* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q($tmp9);
frost$core$Object** $tmp10 = &param0->f2;
*$tmp10 = param3;
return;

}
frost$core$Object* frost$core$Tuple3$$IDX$frost$core$Int$R$frost$core$Object$Q(frost$core$Tuple3* param0, frost$core$Int param1) {

frost$core$Int $tmp11 = (frost$core$Int) {0u};
int64_t $tmp12 = param1.value;
int64_t $tmp13 = $tmp11.value;
bool $tmp14 = $tmp12 >= $tmp13;
frost$core$Bit $tmp15 = (frost$core$Bit) {$tmp14};
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block3; else goto block2;
block3:;
frost$core$Int $tmp17 = (frost$core$Int) {3u};
int64_t $tmp18 = param1.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 < $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block2:;
frost$core$Int $tmp23 = (frost$core$Int) {14u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, $tmp23, &$s25);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple3.frost:15
frost$core$Int $tmp26 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple3.frost:16:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp27 = param1.value;
int64_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 == $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple3.frost:16
frost$core$Object** $tmp32 = &param0->f0;
frost$core$Object* $tmp33 = *$tmp32;
frost$core$Frost$ref$frost$core$Object$Q($tmp33);
return $tmp33;
block6:;
frost$core$Int $tmp34 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple3.frost:17:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp35 = param1.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 == $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple3.frost:17
frost$core$Object** $tmp40 = &param0->f1;
frost$core$Object* $tmp41 = *$tmp40;
frost$core$Frost$ref$frost$core$Object$Q($tmp41);
return $tmp41;
block9:;
frost$core$Int $tmp42 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple3.frost:18:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp43 = param1.value;
int64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 == $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block11; else goto block4;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple3.frost:18
frost$core$Object** $tmp48 = &param0->f2;
frost$core$Object* $tmp49 = *$tmp48;
frost$core$Frost$ref$frost$core$Object$Q($tmp49);
return $tmp49;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple3.frost:20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple3$get_asString$R$frost$core$String(frost$core$Tuple3* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple3.frost:25
frost$core$Object** $tmp50 = &param0->f0;
frost$core$Object* $tmp51 = *$tmp50;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple3.frost:25:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn53 $tmp52 = ($fn53) $tmp51->$class->vtable[0];
frost$core$String* $tmp54 = $tmp52($tmp51);
frost$core$String* $tmp55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s56, $tmp54);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$String* $tmp57 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp55, &$s58);
frost$core$Object** $tmp59 = &param0->f1;
frost$core$Object* $tmp60 = *$tmp59;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple3.frost:25:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn62 $tmp61 = ($fn62) $tmp60->$class->vtable[0];
frost$core$String* $tmp63 = $tmp61($tmp60);
frost$core$String* $tmp64 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp57, $tmp63);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$String* $tmp65 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp64, &$s66);
frost$core$Object** $tmp67 = &param0->f2;
frost$core$Object* $tmp68 = *$tmp67;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple3.frost:25:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn70 $tmp69 = ($fn70) $tmp68->$class->vtable[0];
frost$core$String* $tmp71 = $tmp69($tmp68);
frost$core$String* $tmp72 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp65, $tmp71);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$String* $tmp73 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp72, &$s74);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
return $tmp73;

}
void frost$core$Tuple3$cleanup(frost$core$Tuple3* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple3.frost:2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp75 = &param0->f0;
frost$core$Object* $tmp76 = *$tmp75;
frost$core$Frost$unref$frost$core$Object$Q($tmp76);
frost$core$Object** $tmp77 = &param0->f1;
frost$core$Object* $tmp78 = *$tmp77;
frost$core$Frost$unref$frost$core$Object$Q($tmp78);
frost$core$Object** $tmp79 = &param0->f2;
frost$core$Object* $tmp80 = *$tmp79;
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
return;

}






