#include "frost/core/Tuple5.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$core$Tuple5$class_type frost$core$Tuple5$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Tuple5$get_asString$R$frost$core$String, frost$core$Tuple5$cleanup, frost$core$Tuple5$$IDX$frost$core$Int64$R$frost$core$Object$Q} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x35", 17, 1146821084510207759, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x35\x2e\x66\x72\x6f\x73\x74", 12, 4597595850594358044, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x35\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 93, 434253480930691683, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };

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

frost$core$Int64 $tmp17 = (frost$core$Int64) {0};
int64_t $tmp18 = param1.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 >= $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp23 = (frost$core$Int64) {5};
int64_t $tmp24 = param1.value;
int64_t $tmp25 = $tmp23.value;
bool $tmp26 = $tmp24 < $tmp25;
frost$core$Bit $tmp27 = (frost$core$Bit) {$tmp26};
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {18};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s30, $tmp29, &$s31);
abort(); // unreachable
block1:;
// line 19
frost$core$Int64 $tmp32 = (frost$core$Int64) {0};
frost$core$Bit $tmp33 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block5; else goto block6;
block5:;
// line 20
frost$core$Object** $tmp35 = &param0->f0;
frost$core$Object* $tmp36 = *$tmp35;
frost$core$Frost$ref$frost$core$Object$Q($tmp36);
return $tmp36;
block6:;
frost$core$Int64 $tmp37 = (frost$core$Int64) {1};
frost$core$Bit $tmp38 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp37);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block7; else goto block8;
block7:;
// line 21
frost$core$Object** $tmp40 = &param0->f1;
frost$core$Object* $tmp41 = *$tmp40;
frost$core$Frost$ref$frost$core$Object$Q($tmp41);
return $tmp41;
block8:;
frost$core$Int64 $tmp42 = (frost$core$Int64) {2};
frost$core$Bit $tmp43 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp42);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block9; else goto block10;
block9:;
// line 22
frost$core$Object** $tmp45 = &param0->f2;
frost$core$Object* $tmp46 = *$tmp45;
frost$core$Frost$ref$frost$core$Object$Q($tmp46);
return $tmp46;
block10:;
frost$core$Int64 $tmp47 = (frost$core$Int64) {3};
frost$core$Bit $tmp48 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block11; else goto block12;
block11:;
// line 23
frost$core$Object** $tmp50 = &param0->f3;
frost$core$Object* $tmp51 = *$tmp50;
frost$core$Frost$ref$frost$core$Object$Q($tmp51);
return $tmp51;
block12:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {4};
frost$core$Bit $tmp53 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp52);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block13; else goto block4;
block13:;
// line 24
frost$core$Object** $tmp55 = &param0->f4;
frost$core$Object* $tmp56 = *$tmp55;
frost$core$Frost$ref$frost$core$Object$Q($tmp56);
return $tmp56;
block4:;
// line 26
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple5$get_asString$R$frost$core$String(frost$core$Tuple5* param0) {

// line 31
frost$core$Object** $tmp57 = &param0->f0;
frost$core$Object* $tmp58 = *$tmp57;
frost$core$String* $tmp59 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s60, $tmp58);
frost$core$String* $tmp61 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp59, &$s62);
frost$core$Object** $tmp63 = &param0->f1;
frost$core$Object* $tmp64 = *$tmp63;
frost$core$String* $tmp65 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp61, $tmp64);
frost$core$String* $tmp66 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp65, &$s67);
frost$core$Object** $tmp68 = &param0->f2;
frost$core$Object* $tmp69 = *$tmp68;
frost$core$String* $tmp70 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp66, $tmp69);
frost$core$String* $tmp71 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp70, &$s72);
frost$core$Object** $tmp73 = &param0->f3;
frost$core$Object* $tmp74 = *$tmp73;
frost$core$String* $tmp75 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp71, $tmp74);
frost$core$String* $tmp76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp75, &$s77);
frost$core$Object** $tmp78 = &param0->f4;
frost$core$Object* $tmp79 = *$tmp78;
frost$core$String* $tmp80 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp76, $tmp79);
frost$core$String* $tmp81 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp80, &$s82);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
return $tmp81;

}
void frost$core$Tuple5$cleanup(frost$core$Tuple5* param0) {

// line 2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp83 = &param0->f0;
frost$core$Object* $tmp84 = *$tmp83;
frost$core$Frost$unref$frost$core$Object$Q($tmp84);
frost$core$Object** $tmp85 = &param0->f1;
frost$core$Object* $tmp86 = *$tmp85;
frost$core$Frost$unref$frost$core$Object$Q($tmp86);
frost$core$Object** $tmp87 = &param0->f2;
frost$core$Object* $tmp88 = *$tmp87;
frost$core$Frost$unref$frost$core$Object$Q($tmp88);
frost$core$Object** $tmp89 = &param0->f3;
frost$core$Object* $tmp90 = *$tmp89;
frost$core$Frost$unref$frost$core$Object$Q($tmp90);
frost$core$Object** $tmp91 = &param0->f4;
frost$core$Object* $tmp92 = *$tmp91;
frost$core$Frost$unref$frost$core$Object$Q($tmp92);
return;

}






