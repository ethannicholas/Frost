#include "frost/core/Tuple2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$core$Tuple2$class_type frost$core$Tuple2$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Tuple2$get_asString$R$frost$core$String, frost$core$Tuple2$cleanup, frost$core$Tuple2$$IDX$frost$core$Int64$R$frost$core$Object$Q} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x32", 17, 1146821084510207756, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x32\x2e\x66\x72\x6f\x73\x74", 12, 4597592666033906241, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x32\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 93, 9096961545409291960, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1(frost$core$Tuple2* param0, frost$core$Object* param1, frost$core$Object* param2) {

// line 7
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp2 = &param0->f0;
frost$core$Object* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q($tmp3);
frost$core$Object** $tmp4 = &param0->f0;
*$tmp4 = param1;
// line 8
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp5 = &param0->f1;
frost$core$Object* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q($tmp6);
frost$core$Object** $tmp7 = &param0->f1;
*$tmp7 = param2;
return;

}
frost$core$Object* frost$core$Tuple2$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$Tuple2* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp8 = (frost$core$Int64) {0};
int64_t $tmp9 = param1.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 >= $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {2};
int64_t $tmp15 = param1.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 < $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
*(&local0) = $tmp18;
goto block3;
block2:;
*(&local0) = $tmp12;
goto block3;
block3:;
frost$core$Bit $tmp19 = *(&local0);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {12};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block4:;
// line 13
frost$core$Int64 $tmp24 = (frost$core$Int64) {0};
frost$core$Bit $tmp25 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp24);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block7; else goto block8;
block7:;
// line 14
frost$core$Object** $tmp27 = &param0->f0;
frost$core$Object* $tmp28 = *$tmp27;
frost$core$Frost$ref$frost$core$Object$Q($tmp28);
return $tmp28;
block8:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {1};
frost$core$Bit $tmp30 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp29);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block9; else goto block6;
block9:;
// line 15
frost$core$Object** $tmp32 = &param0->f1;
frost$core$Object* $tmp33 = *$tmp32;
frost$core$Frost$ref$frost$core$Object$Q($tmp33);
return $tmp33;
block6:;
// line 17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple2$get_asString$R$frost$core$String(frost$core$Tuple2* param0) {

// line 22
frost$core$Object** $tmp34 = &param0->f0;
frost$core$Object* $tmp35 = *$tmp34;
frost$core$String* $tmp36 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s37, $tmp35);
frost$core$String* $tmp38 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp36, &$s39);
frost$core$Object** $tmp40 = &param0->f1;
frost$core$Object* $tmp41 = *$tmp40;
frost$core$String* $tmp42 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp38, $tmp41);
frost$core$String* $tmp43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp42, &$s44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
return $tmp43;

}
void frost$core$Tuple2$cleanup(frost$core$Tuple2* param0) {

// line 2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp45 = &param0->f0;
frost$core$Object* $tmp46 = *$tmp45;
frost$core$Frost$unref$frost$core$Object$Q($tmp46);
frost$core$Object** $tmp47 = &param0->f1;
frost$core$Object* $tmp48 = *$tmp47;
frost$core$Frost$unref$frost$core$Object$Q($tmp48);
return;

}






