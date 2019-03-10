#include "frost/core/Tuple2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$core$Tuple2$class_type frost$core$Tuple2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Tuple2$get_asString$R$frost$core$String, frost$core$Tuple2$cleanup, frost$core$Tuple2$$IDX$frost$core$Int$R$frost$core$Object$Q} };

typedef frost$core$String* (*$fn42)(frost$core$Object*);
typedef frost$core$String* (*$fn51)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x32", 17, -5524548717678161280, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x32\x2e\x66\x72\x6f\x73\x74", 12, -5322662658702110403, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x32\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 91, 6770608008590748802, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1(frost$core$Tuple2* param0, frost$core$Object* param1, frost$core$Object* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple2.frost:7
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp2 = &param0->f0;
frost$core$Object* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q($tmp3);
frost$core$Object** $tmp4 = &param0->f0;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple2.frost:8
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp5 = &param0->f1;
frost$core$Object* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q($tmp6);
frost$core$Object** $tmp7 = &param0->f1;
*$tmp7 = param2;
return;

}
frost$core$Object* frost$core$Tuple2$$IDX$frost$core$Int$R$frost$core$Object$Q(frost$core$Tuple2* param0, frost$core$Int param1) {

frost$core$Int $tmp8 = (frost$core$Int) {0u};
int64_t $tmp9 = param1.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 >= $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block3; else goto block2;
block3:;
frost$core$Int $tmp14 = (frost$core$Int) {2u};
int64_t $tmp15 = param1.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 < $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block2:;
frost$core$Int $tmp20 = (frost$core$Int) {12u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple2.frost:13
frost$core$Int $tmp23 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple2.frost:14:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp24 = param1.value;
int64_t $tmp25 = $tmp23.value;
bool $tmp26 = $tmp24 == $tmp25;
frost$core$Bit $tmp27 = (frost$core$Bit) {$tmp26};
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple2.frost:14
frost$core$Object** $tmp29 = &param0->f0;
frost$core$Object* $tmp30 = *$tmp29;
frost$core$Frost$ref$frost$core$Object$Q($tmp30);
return $tmp30;
block6:;
frost$core$Int $tmp31 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple2.frost:15:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp32 = param1.value;
int64_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 == $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block8; else goto block4;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple2.frost:15
frost$core$Object** $tmp37 = &param0->f1;
frost$core$Object* $tmp38 = *$tmp37;
frost$core$Frost$ref$frost$core$Object$Q($tmp38);
return $tmp38;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple2.frost:17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple2$get_asString$R$frost$core$String(frost$core$Tuple2* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple2.frost:22
frost$core$Object** $tmp39 = &param0->f0;
frost$core$Object* $tmp40 = *$tmp39;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple2.frost:22:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn42 $tmp41 = ($fn42) $tmp40->$class->vtable[0];
frost$core$String* $tmp43 = $tmp41($tmp40);
frost$core$String* $tmp44 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s45, $tmp43);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$String* $tmp46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp44, &$s47);
frost$core$Object** $tmp48 = &param0->f1;
frost$core$Object* $tmp49 = *$tmp48;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple2.frost:22:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn51 $tmp50 = ($fn51) $tmp49->$class->vtable[0];
frost$core$String* $tmp52 = $tmp50($tmp49);
frost$core$String* $tmp53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp46, $tmp52);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$String* $tmp54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp53, &$s55);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
return $tmp54;

}
void frost$core$Tuple2$cleanup(frost$core$Tuple2* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Tuple2.frost:2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp56 = &param0->f0;
frost$core$Object* $tmp57 = *$tmp56;
frost$core$Frost$unref$frost$core$Object$Q($tmp57);
frost$core$Object** $tmp58 = &param0->f1;
frost$core$Object* $tmp59 = *$tmp58;
frost$core$Frost$unref$frost$core$Object$Q($tmp59);
return;

}






