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
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x33\x2e\x66\x72\x6f\x73\x74", 12, 4597593727554056842, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x33\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 93, -6088437191889942543, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

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

frost$core$Bit local0;
frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
int64_t $tmp12 = param1.value;
int64_t $tmp13 = $tmp11.value;
bool $tmp14 = $tmp12 >= $tmp13;
frost$core$Bit $tmp15 = (frost$core$Bit) {$tmp14};
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp17 = (frost$core$Int64) {3};
int64_t $tmp18 = param1.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 < $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
*(&local0) = $tmp21;
goto block3;
block2:;
*(&local0) = $tmp15;
goto block3;
block3:;
frost$core$Bit $tmp22 = *(&local0);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp24 = (frost$core$Int64) {14};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s25, $tmp24, &$s26);
abort(); // unreachable
block4:;
// line 15
frost$core$Int64 $tmp27 = (frost$core$Int64) {0};
frost$core$Bit $tmp28 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp27);
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block7; else goto block8;
block7:;
// line 16
frost$core$Object** $tmp30 = &param0->f0;
frost$core$Object* $tmp31 = *$tmp30;
frost$core$Frost$ref$frost$core$Object$Q($tmp31);
return $tmp31;
block8:;
frost$core$Int64 $tmp32 = (frost$core$Int64) {1};
frost$core$Bit $tmp33 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block9; else goto block10;
block9:;
// line 17
frost$core$Object** $tmp35 = &param0->f1;
frost$core$Object* $tmp36 = *$tmp35;
frost$core$Frost$ref$frost$core$Object$Q($tmp36);
return $tmp36;
block10:;
frost$core$Int64 $tmp37 = (frost$core$Int64) {2};
frost$core$Bit $tmp38 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp37);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block11; else goto block6;
block11:;
// line 18
frost$core$Object** $tmp40 = &param0->f2;
frost$core$Object* $tmp41 = *$tmp40;
frost$core$Frost$ref$frost$core$Object$Q($tmp41);
return $tmp41;
block6:;
// line 20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple3$get_asString$R$frost$core$String(frost$core$Tuple3* param0) {

// line 25
frost$core$Object** $tmp42 = &param0->f0;
frost$core$Object* $tmp43 = *$tmp42;
frost$core$String* $tmp44 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s45, $tmp43);
frost$core$String* $tmp46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp44, &$s47);
frost$core$Object** $tmp48 = &param0->f1;
frost$core$Object* $tmp49 = *$tmp48;
frost$core$String* $tmp50 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp46, $tmp49);
frost$core$String* $tmp51 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp50, &$s52);
frost$core$Object** $tmp53 = &param0->f2;
frost$core$Object* $tmp54 = *$tmp53;
frost$core$String* $tmp55 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp51, $tmp54);
frost$core$String* $tmp56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp55, &$s57);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
return $tmp56;

}
void frost$core$Tuple3$cleanup(frost$core$Tuple3* param0) {

// line 2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp58 = &param0->f0;
frost$core$Object* $tmp59 = *$tmp58;
frost$core$Frost$unref$frost$core$Object$Q($tmp59);
frost$core$Object** $tmp60 = &param0->f1;
frost$core$Object* $tmp61 = *$tmp60;
frost$core$Frost$unref$frost$core$Object$Q($tmp61);
frost$core$Object** $tmp62 = &param0->f2;
frost$core$Object* $tmp63 = *$tmp62;
frost$core$Frost$unref$frost$core$Object$Q($tmp63);
return;

}






