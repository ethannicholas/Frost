#include "frost/math/XorShift128Plus.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/math/Random.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$math$XorShift128Plus$_frost$math$Random = { (frost$core$Class*) &frost$math$Random$class, NULL, { frost$math$Random$bit$R$frost$core$Bit, frost$math$Random$int32$R$frost$core$Int32, frost$math$XorShift128Plus$int64$R$frost$core$Int64, frost$math$Random$int$frost$core$Int64$R$frost$core$Int64, frost$math$Random$real32$R$frost$core$Real32, frost$math$Random$real64$R$frost$core$Real64} };

static frost$core$String $s1;
frost$math$XorShift128Plus$class_type frost$math$XorShift128Plus$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$math$XorShift128Plus$_frost$math$Random, { frost$core$Object$convert$R$frost$core$String, frost$math$XorShift128Plus$cleanup, frost$math$XorShift128Plus$int64$R$frost$core$Int64} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x58\x6f\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6c\x75\x73", 26, 3776203621774173419, NULL };

void frost$math$XorShift128Plus$init$frost$core$Int64(frost$math$XorShift128Plus* param0, frost$core$Int64 param1) {

// line 29
frost$core$Int64 $tmp2 = (frost$core$Int64) {6713};
int64_t $tmp3 = param1.value;
int64_t $tmp4 = $tmp2.value;
int64_t $tmp5 = $tmp3 * $tmp4;
frost$core$Int64 $tmp6 = (frost$core$Int64) {$tmp5};
frost$core$Int64 $tmp7 = (frost$core$Int64) {123456789};
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8 + $tmp9;
frost$core$Int64 $tmp11 = (frost$core$Int64) {$tmp10};
frost$core$Int64* $tmp12 = &param0->state1;
*$tmp12 = $tmp11;
// line 30
frost$core$Int64* $tmp13 = &param0->state1;
frost$core$Int64 $tmp14 = *$tmp13;
frost$core$Int64 $tmp15 = (frost$core$Int64) {0};
frost$core$Bit $tmp16 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp14, $tmp15);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block1; else goto block2;
block1:;
// line 32
frost$core$Int64 $tmp18 = (frost$core$Int64) {123456789};
frost$core$Int64* $tmp19 = &param0->state1;
*$tmp19 = $tmp18;
goto block2;
block2:;
// line 34
frost$core$Int64* $tmp20 = &param0->state1;
frost$core$Int64 $tmp21 = *$tmp20;
frost$core$Int64 $tmp22 = frost$core$Int64$$BNOT$R$frost$core$Int64($tmp21);
frost$core$Int64* $tmp23 = &param0->state2;
*$tmp23 = $tmp22;
return;

}
frost$core$Int64 frost$math$XorShift128Plus$int64$R$frost$core$Int64(frost$math$XorShift128Plus* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 39
frost$core$Int64* $tmp24 = &param0->state1;
frost$core$Int64 $tmp25 = *$tmp24;
*(&local0) = $tmp25;
// line 40
frost$core$Int64* $tmp26 = &param0->state2;
frost$core$Int64 $tmp27 = *$tmp26;
*(&local1) = $tmp27;
// line 41
frost$core$Int64 $tmp28 = *(&local1);
frost$core$Int64* $tmp29 = &param0->state1;
*$tmp29 = $tmp28;
// line 42
frost$core$Int64 $tmp30 = *(&local0);
frost$core$Int64 $tmp31 = *(&local0);
frost$core$Int64 $tmp32 = (frost$core$Int64) {23};
frost$core$Int64 $tmp33 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp31, $tmp32);
frost$core$Int64 $tmp34 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp30, $tmp33);
*(&local0) = $tmp34;
// line 43
frost$core$Int64 $tmp35 = *(&local0);
frost$core$Int64 $tmp36 = *(&local1);
frost$core$Int64 $tmp37 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp35, $tmp36);
frost$core$Int64 $tmp38 = *(&local0);
frost$core$Int64 $tmp39 = (frost$core$Int64) {17};
frost$core$Int64 $tmp40 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp38, $tmp39);
frost$core$Int64 $tmp41 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp37, $tmp40);
frost$core$Int64 $tmp42 = *(&local1);
frost$core$Int64 $tmp43 = (frost$core$Int64) {26};
frost$core$Int64 $tmp44 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp42, $tmp43);
frost$core$Int64 $tmp45 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp41, $tmp44);
frost$core$Int64* $tmp46 = &param0->state2;
*$tmp46 = $tmp45;
// line 44
frost$core$Int64* $tmp47 = &param0->state2;
frost$core$Int64 $tmp48 = *$tmp47;
frost$core$Int64 $tmp49 = *(&local1);
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50 + $tmp51;
frost$core$Int64 $tmp53 = (frost$core$Int64) {$tmp52};
return $tmp53;

}
void frost$math$XorShift128Plus$cleanup(frost$math$XorShift128Plus* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






