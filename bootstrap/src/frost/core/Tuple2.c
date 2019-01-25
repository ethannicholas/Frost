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
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x32\x2e\x66\x72\x6f\x73\x74", 12, 4597592666033906241, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x54\x75\x70\x6c\x65\x32\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 93, 9096961545409291960, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

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

frost$core$Int64 $tmp8 = (frost$core$Int64) {0};
int64_t $tmp9 = param1.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 >= $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {2};
int64_t $tmp15 = param1.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 < $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {12};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block1:;
// line 13
frost$core$Int64 $tmp23 = (frost$core$Int64) {0};
frost$core$Bit $tmp24 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp23);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block5; else goto block6;
block5:;
// line 14
frost$core$Object** $tmp26 = &param0->f0;
frost$core$Object* $tmp27 = *$tmp26;
frost$core$Frost$ref$frost$core$Object$Q($tmp27);
return $tmp27;
block6:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {1};
frost$core$Bit $tmp29 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(param1, $tmp28);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block7; else goto block4;
block7:;
// line 15
frost$core$Object** $tmp31 = &param0->f1;
frost$core$Object* $tmp32 = *$tmp31;
frost$core$Frost$ref$frost$core$Object$Q($tmp32);
return $tmp32;
block4:;
// line 17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$String* frost$core$Tuple2$get_asString$R$frost$core$String(frost$core$Tuple2* param0) {

// line 22
frost$core$Object** $tmp33 = &param0->f0;
frost$core$Object* $tmp34 = *$tmp33;
frost$core$String* $tmp35 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s36, $tmp34);
frost$core$String* $tmp37 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp35, &$s38);
frost$core$Object** $tmp39 = &param0->f1;
frost$core$Object* $tmp40 = *$tmp39;
frost$core$String* $tmp41 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp37, $tmp40);
frost$core$String* $tmp42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp41, &$s43);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
return $tmp42;

}
void frost$core$Tuple2$cleanup(frost$core$Tuple2* param0) {

// line 2
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp44 = &param0->f0;
frost$core$Object* $tmp45 = *$tmp44;
frost$core$Frost$unref$frost$core$Object$Q($tmp45);
frost$core$Object** $tmp46 = &param0->f1;
frost$core$Object* $tmp47 = *$tmp46;
frost$core$Frost$unref$frost$core$Object$Q($tmp47);
return;

}






