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
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x34\x2e\x66\x72\x6f\x73\x74", 12, 4597594789074207443, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x34\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 93, -2827091855479625430, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

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

frost$core$Int64 $tmp14 = (frost$core$Int64) {0};
int64_t $tmp15 = param1.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 >= $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {4};
int64_t $tmp21 = param1.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 < $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp26 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block1:;
// line 17
frost$core$Int64 $tmp29 = (frost$core$Int64) {0};
frost$core$Bit $tmp30 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp29);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block5; else goto block6;
block5:;
// line 18
frost$core$Object** $tmp32 = &param0->f0;
frost$core$Object* $tmp33 = *$tmp32;
frost$core$Frost$ref$frost$core$Object$Q($tmp33);
return $tmp33;
block6:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {1};
frost$core$Bit $tmp35 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block7; else goto block8;
block7:;
// line 19
frost$core$Object** $tmp37 = &param0->f1;
frost$core$Object* $tmp38 = *$tmp37;
frost$core$Frost$ref$frost$core$Object$Q($tmp38);
return $tmp38;
block8:;
frost$core$Int64 $tmp39 = (frost$core$Int64) {2};
frost$core$Bit $tmp40 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block9; else goto block10;
block9:;
// line 20
frost$core$Object** $tmp42 = &param0->f2;
frost$core$Object* $tmp43 = *$tmp42;
frost$core$Frost$ref$frost$core$Object$Q($tmp43);
return $tmp43;
block10:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {3};
frost$core$Bit $tmp45 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp44);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block11; else goto block4;
block11:;
// line 21
frost$core$Object** $tmp47 = &param0->f3;
frost$core$Object* $tmp48 = *$tmp47;
frost$core$Frost$ref$frost$core$Object$Q($tmp48);
return $tmp48;
block4:;
// line 23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple4$get_asString$R$frost$core$String(frost$core$Tuple4* param0) {

// line 28
frost$core$Object** $tmp49 = &param0->f0;
frost$core$Object* $tmp50 = *$tmp49;
frost$core$String* $tmp51 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s52, $tmp50);
frost$core$String* $tmp53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp51, &$s54);
frost$core$Object** $tmp55 = &param0->f1;
frost$core$Object* $tmp56 = *$tmp55;
frost$core$String* $tmp57 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp53, $tmp56);
frost$core$String* $tmp58 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp57, &$s59);
frost$core$Object** $tmp60 = &param0->f2;
frost$core$Object* $tmp61 = *$tmp60;
frost$core$String* $tmp62 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp58, $tmp61);
frost$core$String* $tmp63 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp62, &$s64);
frost$core$Object** $tmp65 = &param0->f3;
frost$core$Object* $tmp66 = *$tmp65;
frost$core$String* $tmp67 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp63, $tmp66);
frost$core$String* $tmp68 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp67, &$s69);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
return $tmp68;

}
void frost$core$Tuple4$cleanup(frost$core$Tuple4* param0) {

// line 2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp70 = &param0->f0;
frost$core$Object* $tmp71 = *$tmp70;
frost$core$Frost$unref$frost$core$Object$Q($tmp71);
frost$core$Object** $tmp72 = &param0->f1;
frost$core$Object* $tmp73 = *$tmp72;
frost$core$Frost$unref$frost$core$Object$Q($tmp73);
frost$core$Object** $tmp74 = &param0->f2;
frost$core$Object* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q($tmp75);
frost$core$Object** $tmp76 = &param0->f3;
frost$core$Object* $tmp77 = *$tmp76;
frost$core$Frost$unref$frost$core$Object$Q($tmp77);
return;

}






