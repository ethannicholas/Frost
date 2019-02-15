#include "frost/core/Tuple4.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$core$Tuple4$class_type frost$core$Tuple4$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Tuple4$get_asString$R$frost$core$String, frost$core$Tuple4$cleanup, frost$core$Tuple4$$IDX$frost$core$Int64$R$frost$core$Object$Q} };

typedef frost$core$String* (*$fn64)(frost$core$Object*);
typedef frost$core$String* (*$fn73)(frost$core$Object*);
typedef frost$core$String* (*$fn81)(frost$core$Object*);
typedef frost$core$String* (*$fn89)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x34", 17, -5524542120608392014, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x34\x2e\x66\x72\x6f\x73\x74", 12, 7337834162301381615, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x34\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 93, -4422111870648063782, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$core$Tuple4$init$frost$core$Tuple4$T0$frost$core$Tuple4$T1$frost$core$Tuple4$T2$frost$core$Tuple4$T3(frost$core$Tuple4* param0, frost$core$Object* param1, frost$core$Object* param2, frost$core$Object* param3, frost$core$Object* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:9
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp2 = &param0->f0;
frost$core$Object* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q($tmp3);
frost$core$Object** $tmp4 = &param0->f0;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:10
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp5 = &param0->f1;
frost$core$Object* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q($tmp6);
frost$core$Object** $tmp7 = &param0->f1;
*$tmp7 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:11
frost$core$Frost$ref$frost$core$Object$Q(param3);
frost$core$Object** $tmp8 = &param0->f2;
frost$core$Object* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q($tmp9);
frost$core$Object** $tmp10 = &param0->f2;
*$tmp10 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:12
frost$core$Frost$ref$frost$core$Object$Q(param4);
frost$core$Object** $tmp11 = &param0->f3;
frost$core$Object* $tmp12 = *$tmp11;
frost$core$Frost$unref$frost$core$Object$Q($tmp12);
frost$core$Object** $tmp13 = &param0->f3;
*$tmp13 = param4;
return;

}
frost$core$Object* frost$core$Tuple4$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$Tuple4* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp14 = (frost$core$Int64) {0u};
int64_t $tmp15 = param1.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 >= $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {4u};
int64_t $tmp21 = param1.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 < $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp26 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:17
frost$core$Int64 $tmp29 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Tuple4.frost:18:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp30 = param1.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 == $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:18
frost$core$Object** $tmp35 = &param0->f0;
frost$core$Object* $tmp36 = *$tmp35;
frost$core$Frost$ref$frost$core$Object$Q($tmp36);
return $tmp36;
block6:;
frost$core$Int64 $tmp37 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Tuple4.frost:19:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp38 = param1.value;
int64_t $tmp39 = $tmp37.value;
bool $tmp40 = $tmp38 == $tmp39;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp40};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:19
frost$core$Object** $tmp43 = &param0->f1;
frost$core$Object* $tmp44 = *$tmp43;
frost$core$Frost$ref$frost$core$Object$Q($tmp44);
return $tmp44;
block9:;
frost$core$Int64 $tmp45 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Tuple4.frost:20:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp46 = param1.value;
int64_t $tmp47 = $tmp45.value;
bool $tmp48 = $tmp46 == $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:20
frost$core$Object** $tmp51 = &param0->f2;
frost$core$Object* $tmp52 = *$tmp51;
frost$core$Frost$ref$frost$core$Object$Q($tmp52);
return $tmp52;
block12:;
frost$core$Int64 $tmp53 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Tuple4.frost:21:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp54 = param1.value;
int64_t $tmp55 = $tmp53.value;
bool $tmp56 = $tmp54 == $tmp55;
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56};
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block14; else goto block4;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:21
frost$core$Object** $tmp59 = &param0->f3;
frost$core$Object* $tmp60 = *$tmp59;
frost$core$Frost$ref$frost$core$Object$Q($tmp60);
return $tmp60;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple4$get_asString$R$frost$core$String(frost$core$Tuple4* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:28
frost$core$Object** $tmp61 = &param0->f0;
frost$core$Object* $tmp62 = *$tmp61;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple4.frost:28:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn64 $tmp63 = ($fn64) $tmp62->$class->vtable[0];
frost$core$String* $tmp65 = $tmp63($tmp62);
frost$core$String* $tmp66 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s67, $tmp65);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$String* $tmp68 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp66, &$s69);
frost$core$Object** $tmp70 = &param0->f1;
frost$core$Object* $tmp71 = *$tmp70;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple4.frost:28:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn73 $tmp72 = ($fn73) $tmp71->$class->vtable[0];
frost$core$String* $tmp74 = $tmp72($tmp71);
frost$core$String* $tmp75 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp68, $tmp74);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$String* $tmp76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp75, &$s77);
frost$core$Object** $tmp78 = &param0->f2;
frost$core$Object* $tmp79 = *$tmp78;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple4.frost:28:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn81 $tmp80 = ($fn81) $tmp79->$class->vtable[0];
frost$core$String* $tmp82 = $tmp80($tmp79);
frost$core$String* $tmp83 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp76, $tmp82);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$String* $tmp84 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp83, &$s85);
frost$core$Object** $tmp86 = &param0->f3;
frost$core$Object* $tmp87 = *$tmp86;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple4.frost:28:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn89 $tmp88 = ($fn89) $tmp87->$class->vtable[0];
frost$core$String* $tmp90 = $tmp88($tmp87);
frost$core$String* $tmp91 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp84, $tmp90);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$String* $tmp92 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp91, &$s93);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
return $tmp92;

}
void frost$core$Tuple4$cleanup(frost$core$Tuple4* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Tuple4.frost:2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp94 = &param0->f0;
frost$core$Object* $tmp95 = *$tmp94;
frost$core$Frost$unref$frost$core$Object$Q($tmp95);
frost$core$Object** $tmp96 = &param0->f1;
frost$core$Object* $tmp97 = *$tmp96;
frost$core$Frost$unref$frost$core$Object$Q($tmp97);
frost$core$Object** $tmp98 = &param0->f2;
frost$core$Object* $tmp99 = *$tmp98;
frost$core$Frost$unref$frost$core$Object$Q($tmp99);
frost$core$Object** $tmp100 = &param0->f3;
frost$core$Object* $tmp101 = *$tmp100;
frost$core$Frost$unref$frost$core$Object$Q($tmp101);
return;

}






