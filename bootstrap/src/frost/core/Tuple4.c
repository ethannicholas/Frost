#include "frost/core/Tuple4.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$core$Tuple4$class_type frost$core$Tuple4$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Tuple4$get_asString$R$frost$core$String, frost$core$Tuple4$cleanup, frost$core$Tuple4$$IDX$frost$core$Int64$R$frost$core$Object$Q} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x34", 17, 1146821084510207758, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x34\x2e\x66\x72\x6f\x73\x74", 12, 4597594789074207443, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x34\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 93, -2827091855479625430, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$core$Tuple4$init$frost$core$Tuple4$T0$frost$core$Tuple4$T1$frost$core$Tuple4$T2$frost$core$Tuple4$T3(frost$core$Tuple4* param0, frost$core$Object* param1, frost$core$Object* param2, frost$core$Object* param3, frost$core$Object* param4) {

// line 9
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp2 = &param0->f0;
frost$core$Object* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q($tmp3);
frost$core$Object** $tmp4 = &param0->f0;
*$tmp4 = param1;
// line 10
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp5 = &param0->f1;
frost$core$Object* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q($tmp6);
frost$core$Object** $tmp7 = &param0->f1;
*$tmp7 = param2;
// line 11
frost$core$Frost$ref$frost$core$Object$Q(param3);
frost$core$Object** $tmp8 = &param0->f2;
frost$core$Object* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q($tmp9);
frost$core$Object** $tmp10 = &param0->f2;
*$tmp10 = param3;
// line 12
frost$core$Frost$ref$frost$core$Object$Q(param4);
frost$core$Object** $tmp11 = &param0->f3;
frost$core$Object* $tmp12 = *$tmp11;
frost$core$Frost$unref$frost$core$Object$Q($tmp12);
frost$core$Object** $tmp13 = &param0->f3;
*$tmp13 = param4;
return;

}
frost$core$Object* frost$core$Tuple4$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$Tuple4* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp14 = (frost$core$Int64) {0};
int64_t $tmp15 = param1.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 >= $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {4};
int64_t $tmp21 = param1.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 < $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
*(&local0) = $tmp24;
goto block3;
block2:;
*(&local0) = $tmp18;
goto block3;
block3:;
frost$core$Bit $tmp25 = *(&local0);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp27 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s28, $tmp27, &$s29);
abort(); // unreachable
block4:;
// line 17
frost$core$Int64 $tmp30 = (frost$core$Int64) {0};
frost$core$Bit $tmp31 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp30);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block7; else goto block8;
block7:;
// line 18
frost$core$Object** $tmp33 = &param0->f0;
frost$core$Object* $tmp34 = *$tmp33;
frost$core$Frost$ref$frost$core$Object$Q($tmp34);
return $tmp34;
block8:;
frost$core$Int64 $tmp35 = (frost$core$Int64) {1};
frost$core$Bit $tmp36 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp35);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block9; else goto block10;
block9:;
// line 19
frost$core$Object** $tmp38 = &param0->f1;
frost$core$Object* $tmp39 = *$tmp38;
frost$core$Frost$ref$frost$core$Object$Q($tmp39);
return $tmp39;
block10:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {2};
frost$core$Bit $tmp41 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp40);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block11; else goto block12;
block11:;
// line 20
frost$core$Object** $tmp43 = &param0->f2;
frost$core$Object* $tmp44 = *$tmp43;
frost$core$Frost$ref$frost$core$Object$Q($tmp44);
return $tmp44;
block12:;
frost$core$Int64 $tmp45 = (frost$core$Int64) {3};
frost$core$Bit $tmp46 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp45);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block13; else goto block6;
block13:;
// line 21
frost$core$Object** $tmp48 = &param0->f3;
frost$core$Object* $tmp49 = *$tmp48;
frost$core$Frost$ref$frost$core$Object$Q($tmp49);
return $tmp49;
block6:;
// line 23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple4$get_asString$R$frost$core$String(frost$core$Tuple4* param0) {

// line 28
frost$core$Object** $tmp50 = &param0->f0;
frost$core$Object* $tmp51 = *$tmp50;
frost$core$String* $tmp52 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s53, $tmp51);
frost$core$String* $tmp54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp52, &$s55);
frost$core$Object** $tmp56 = &param0->f1;
frost$core$Object* $tmp57 = *$tmp56;
frost$core$String* $tmp58 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp54, $tmp57);
frost$core$String* $tmp59 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp58, &$s60);
frost$core$Object** $tmp61 = &param0->f2;
frost$core$Object* $tmp62 = *$tmp61;
frost$core$String* $tmp63 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp59, $tmp62);
frost$core$String* $tmp64 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp63, &$s65);
frost$core$Object** $tmp66 = &param0->f3;
frost$core$Object* $tmp67 = *$tmp66;
frost$core$String* $tmp68 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp64, $tmp67);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp68, &$s70);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
return $tmp69;

}
void frost$core$Tuple4$cleanup(frost$core$Tuple4* param0) {

// line 2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp71 = &param0->f0;
frost$core$Object* $tmp72 = *$tmp71;
frost$core$Frost$unref$frost$core$Object$Q($tmp72);
frost$core$Object** $tmp73 = &param0->f1;
frost$core$Object* $tmp74 = *$tmp73;
frost$core$Frost$unref$frost$core$Object$Q($tmp74);
frost$core$Object** $tmp75 = &param0->f2;
frost$core$Object* $tmp76 = *$tmp75;
frost$core$Frost$unref$frost$core$Object$Q($tmp76);
frost$core$Object** $tmp77 = &param0->f3;
frost$core$Object* $tmp78 = *$tmp77;
frost$core$Frost$unref$frost$core$Object$Q($tmp78);
return;

}






