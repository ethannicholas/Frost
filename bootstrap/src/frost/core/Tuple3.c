#include "frost/core/Tuple3.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$core$Tuple3$class_type frost$core$Tuple3$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Tuple3$get_asString$R$frost$core$String, frost$core$Tuple3$cleanup, frost$core$Tuple3$$IDX$frost$core$Int64$R$frost$core$Object$Q} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x33", 17, 1146821084510207757, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x33\x2e\x66\x72\x6f\x73\x74", 12, 4597593727554056842, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x33\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 93, -6088437191889942543, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$core$Tuple3$init$frost$core$Tuple3$T0$frost$core$Tuple3$T1$frost$core$Tuple3$T2(frost$core$Tuple3* param0, frost$core$Object* param1, frost$core$Object* param2, frost$core$Object* param3) {

// line 8
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp2 = &param0->f0;
frost$core$Object* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q($tmp3);
frost$core$Object** $tmp4 = &param0->f0;
*$tmp4 = param1;
// line 9
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp5 = &param0->f1;
frost$core$Object* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q($tmp6);
frost$core$Object** $tmp7 = &param0->f1;
*$tmp7 = param2;
// line 10
frost$core$Frost$ref$frost$core$Object$Q(param3);
frost$core$Object** $tmp8 = &param0->f2;
frost$core$Object* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q($tmp9);
frost$core$Object** $tmp10 = &param0->f2;
*$tmp10 = param3;
return;

}
frost$core$Object* frost$core$Tuple3$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$Tuple3* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
int64_t $tmp12 = param1.value;
int64_t $tmp13 = $tmp11.value;
bool $tmp14 = $tmp12 >= $tmp13;
frost$core$Bit $tmp15 = (frost$core$Bit) {$tmp14};
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp17 = (frost$core$Int64) {3};
int64_t $tmp18 = param1.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 < $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp23 = (frost$core$Int64) {14};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s24, $tmp23, &$s25);
abort(); // unreachable
block1:;
// line 15
frost$core$Int64 $tmp26 = (frost$core$Int64) {0};
frost$core$Bit $tmp27 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp26);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block5; else goto block6;
block5:;
// line 16
frost$core$Object** $tmp29 = &param0->f0;
frost$core$Object* $tmp30 = *$tmp29;
frost$core$Frost$ref$frost$core$Object$Q($tmp30);
return $tmp30;
block6:;
frost$core$Int64 $tmp31 = (frost$core$Int64) {1};
frost$core$Bit $tmp32 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block7; else goto block8;
block7:;
// line 17
frost$core$Object** $tmp34 = &param0->f1;
frost$core$Object* $tmp35 = *$tmp34;
frost$core$Frost$ref$frost$core$Object$Q($tmp35);
return $tmp35;
block8:;
frost$core$Int64 $tmp36 = (frost$core$Int64) {2};
frost$core$Bit $tmp37 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block9; else goto block4;
block9:;
// line 18
frost$core$Object** $tmp39 = &param0->f2;
frost$core$Object* $tmp40 = *$tmp39;
frost$core$Frost$ref$frost$core$Object$Q($tmp40);
return $tmp40;
block4:;
// line 20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple3$get_asString$R$frost$core$String(frost$core$Tuple3* param0) {

// line 25
frost$core$Object** $tmp41 = &param0->f0;
frost$core$Object* $tmp42 = *$tmp41;
frost$core$String* $tmp43 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s44, $tmp42);
frost$core$String* $tmp45 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp43, &$s46);
frost$core$Object** $tmp47 = &param0->f1;
frost$core$Object* $tmp48 = *$tmp47;
frost$core$String* $tmp49 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp45, $tmp48);
frost$core$String* $tmp50 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp49, &$s51);
frost$core$Object** $tmp52 = &param0->f2;
frost$core$Object* $tmp53 = *$tmp52;
frost$core$String* $tmp54 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp50, $tmp53);
frost$core$String* $tmp55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp54, &$s56);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
return $tmp55;

}
void frost$core$Tuple3$cleanup(frost$core$Tuple3* param0) {

// line 2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp57 = &param0->f0;
frost$core$Object* $tmp58 = *$tmp57;
frost$core$Frost$unref$frost$core$Object$Q($tmp58);
frost$core$Object** $tmp59 = &param0->f1;
frost$core$Object* $tmp60 = *$tmp59;
frost$core$Frost$unref$frost$core$Object$Q($tmp60);
frost$core$Object** $tmp61 = &param0->f2;
frost$core$Object* $tmp62 = *$tmp61;
frost$core$Frost$unref$frost$core$Object$Q($tmp62);
return;

}






