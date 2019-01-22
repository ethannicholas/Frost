#include "frost/core/Tuple5.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$core$Tuple5$class_type frost$core$Tuple5$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Tuple5$get_asString$R$frost$core$String, frost$core$Tuple5$cleanup, frost$core$Tuple5$$IDX$frost$core$Int64$R$frost$core$Object$Q} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x35", 17, 1146821084510207759, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x35\x2e\x66\x72\x6f\x73\x74", 12, 4597595850594358044, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x35\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 93, 434253480930691683, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$core$Tuple5$init$frost$core$Tuple5$T0$frost$core$Tuple5$T1$frost$core$Tuple5$T2$frost$core$Tuple5$T3$frost$core$Tuple5$T4(frost$core$Tuple5* param0, frost$core$Object* param1, frost$core$Object* param2, frost$core$Object* param3, frost$core$Object* param4, frost$core$Object* param5) {

// line 10
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp2 = &param0->f0;
frost$core$Object* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q($tmp3);
frost$core$Object** $tmp4 = &param0->f0;
*$tmp4 = param1;
// line 11
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp5 = &param0->f1;
frost$core$Object* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q($tmp6);
frost$core$Object** $tmp7 = &param0->f1;
*$tmp7 = param2;
// line 12
frost$core$Frost$ref$frost$core$Object$Q(param3);
frost$core$Object** $tmp8 = &param0->f2;
frost$core$Object* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q($tmp9);
frost$core$Object** $tmp10 = &param0->f2;
*$tmp10 = param3;
// line 13
frost$core$Frost$ref$frost$core$Object$Q(param4);
frost$core$Object** $tmp11 = &param0->f3;
frost$core$Object* $tmp12 = *$tmp11;
frost$core$Frost$unref$frost$core$Object$Q($tmp12);
frost$core$Object** $tmp13 = &param0->f3;
*$tmp13 = param4;
// line 14
frost$core$Frost$ref$frost$core$Object$Q(param5);
frost$core$Object** $tmp14 = &param0->f4;
frost$core$Object* $tmp15 = *$tmp14;
frost$core$Frost$unref$frost$core$Object$Q($tmp15);
frost$core$Object** $tmp16 = &param0->f4;
*$tmp16 = param5;
return;

}
frost$core$Object* frost$core$Tuple5$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$Tuple5* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp17 = (frost$core$Int64) {0};
int64_t $tmp18 = param1.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 >= $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp23 = (frost$core$Int64) {5};
int64_t $tmp24 = param1.value;
int64_t $tmp25 = $tmp23.value;
bool $tmp26 = $tmp24 < $tmp25;
frost$core$Bit $tmp27 = (frost$core$Bit) {$tmp26};
*(&local0) = $tmp27;
goto block3;
block2:;
*(&local0) = $tmp21;
goto block3;
block3:;
frost$core$Bit $tmp28 = *(&local0);
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp30 = (frost$core$Int64) {18};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s31, $tmp30, &$s32);
abort(); // unreachable
block4:;
// line 19
frost$core$Int64 $tmp33 = (frost$core$Int64) {0};
frost$core$Bit $tmp34 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp33);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block7; else goto block8;
block7:;
// line 20
frost$core$Object** $tmp36 = &param0->f0;
frost$core$Object* $tmp37 = *$tmp36;
frost$core$Frost$ref$frost$core$Object$Q($tmp37);
return $tmp37;
block8:;
frost$core$Int64 $tmp38 = (frost$core$Int64) {1};
frost$core$Bit $tmp39 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp38);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block9; else goto block10;
block9:;
// line 21
frost$core$Object** $tmp41 = &param0->f1;
frost$core$Object* $tmp42 = *$tmp41;
frost$core$Frost$ref$frost$core$Object$Q($tmp42);
return $tmp42;
block10:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {2};
frost$core$Bit $tmp44 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block11; else goto block12;
block11:;
// line 22
frost$core$Object** $tmp46 = &param0->f2;
frost$core$Object* $tmp47 = *$tmp46;
frost$core$Frost$ref$frost$core$Object$Q($tmp47);
return $tmp47;
block12:;
frost$core$Int64 $tmp48 = (frost$core$Int64) {3};
frost$core$Bit $tmp49 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp48);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block13; else goto block14;
block13:;
// line 23
frost$core$Object** $tmp51 = &param0->f3;
frost$core$Object* $tmp52 = *$tmp51;
frost$core$Frost$ref$frost$core$Object$Q($tmp52);
return $tmp52;
block14:;
frost$core$Int64 $tmp53 = (frost$core$Int64) {4};
frost$core$Bit $tmp54 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp53);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block15; else goto block6;
block15:;
// line 24
frost$core$Object** $tmp56 = &param0->f4;
frost$core$Object* $tmp57 = *$tmp56;
frost$core$Frost$ref$frost$core$Object$Q($tmp57);
return $tmp57;
block6:;
// line 26
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple5$get_asString$R$frost$core$String(frost$core$Tuple5* param0) {

// line 31
frost$core$Object** $tmp58 = &param0->f0;
frost$core$Object* $tmp59 = *$tmp58;
frost$core$String* $tmp60 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s61, $tmp59);
frost$core$String* $tmp62 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp60, &$s63);
frost$core$Object** $tmp64 = &param0->f1;
frost$core$Object* $tmp65 = *$tmp64;
frost$core$String* $tmp66 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp62, $tmp65);
frost$core$String* $tmp67 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp66, &$s68);
frost$core$Object** $tmp69 = &param0->f2;
frost$core$Object* $tmp70 = *$tmp69;
frost$core$String* $tmp71 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp67, $tmp70);
frost$core$String* $tmp72 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp71, &$s73);
frost$core$Object** $tmp74 = &param0->f3;
frost$core$Object* $tmp75 = *$tmp74;
frost$core$String* $tmp76 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp72, $tmp75);
frost$core$String* $tmp77 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp76, &$s78);
frost$core$Object** $tmp79 = &param0->f4;
frost$core$Object* $tmp80 = *$tmp79;
frost$core$String* $tmp81 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp77, $tmp80);
frost$core$String* $tmp82 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp81, &$s83);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
return $tmp82;

}
void frost$core$Tuple5$cleanup(frost$core$Tuple5* param0) {

// line 2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp84 = &param0->f0;
frost$core$Object* $tmp85 = *$tmp84;
frost$core$Frost$unref$frost$core$Object$Q($tmp85);
frost$core$Object** $tmp86 = &param0->f1;
frost$core$Object* $tmp87 = *$tmp86;
frost$core$Frost$unref$frost$core$Object$Q($tmp87);
frost$core$Object** $tmp88 = &param0->f2;
frost$core$Object* $tmp89 = *$tmp88;
frost$core$Frost$unref$frost$core$Object$Q($tmp89);
frost$core$Object** $tmp90 = &param0->f3;
frost$core$Object* $tmp91 = *$tmp90;
frost$core$Frost$unref$frost$core$Object$Q($tmp91);
frost$core$Object** $tmp92 = &param0->f4;
frost$core$Object* $tmp93 = *$tmp92;
frost$core$Frost$unref$frost$core$Object$Q($tmp93);
return;

}






