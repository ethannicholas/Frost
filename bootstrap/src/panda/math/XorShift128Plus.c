#include "panda/math/XorShift128Plus.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/math/Random.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$math$XorShift128Plus$_panda$math$Random = { (panda$core$Class*) &panda$math$Random$class, NULL, { panda$math$Random$bit$R$panda$core$Bit, panda$math$Random$int32$R$panda$core$Int32, panda$math$XorShift128Plus$int64$R$panda$core$Int64, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

static panda$core$String $s1;
panda$math$XorShift128Plus$class_type panda$math$XorShift128Plus$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$math$XorShift128Plus$_panda$math$Random, { panda$core$Object$convert$R$panda$core$String, panda$math$XorShift128Plus$cleanup, panda$math$XorShift128Plus$int64$R$panda$core$Int64} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x58\x6f\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6c\x75\x73", 26, 215641961116556169, NULL };

void panda$math$XorShift128Plus$init$panda$core$Int64(panda$math$XorShift128Plus* param0, panda$core$Int64 param1) {

// line 29
panda$core$Int64 $tmp2 = (panda$core$Int64) {6713};
int64_t $tmp3 = param1.value;
int64_t $tmp4 = $tmp2.value;
int64_t $tmp5 = $tmp3 * $tmp4;
panda$core$Int64 $tmp6 = (panda$core$Int64) {$tmp5};
panda$core$Int64 $tmp7 = (panda$core$Int64) {123456789};
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8 + $tmp9;
panda$core$Int64 $tmp11 = (panda$core$Int64) {$tmp10};
panda$core$Int64* $tmp12 = &param0->state1;
*$tmp12 = $tmp11;
// line 30
panda$core$Int64* $tmp13 = &param0->state1;
panda$core$Int64 $tmp14 = *$tmp13;
panda$core$Int64 $tmp15 = (panda$core$Int64) {0};
panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp14, $tmp15);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block1; else goto block2;
block1:;
// line 32
panda$core$Int64 $tmp18 = (panda$core$Int64) {123456789};
panda$core$Int64* $tmp19 = &param0->state1;
*$tmp19 = $tmp18;
goto block2;
block2:;
// line 34
panda$core$Int64* $tmp20 = &param0->state1;
panda$core$Int64 $tmp21 = *$tmp20;
panda$core$Int64 $tmp22 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp21);
panda$core$Int64* $tmp23 = &param0->state2;
*$tmp23 = $tmp22;
return;

}
panda$core$Int64 panda$math$XorShift128Plus$int64$R$panda$core$Int64(panda$math$XorShift128Plus* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 39
panda$core$Int64* $tmp24 = &param0->state1;
panda$core$Int64 $tmp25 = *$tmp24;
*(&local0) = $tmp25;
// line 40
panda$core$Int64* $tmp26 = &param0->state2;
panda$core$Int64 $tmp27 = *$tmp26;
*(&local1) = $tmp27;
// line 41
panda$core$Int64 $tmp28 = *(&local1);
panda$core$Int64* $tmp29 = &param0->state1;
*$tmp29 = $tmp28;
// line 42
panda$core$Int64 $tmp30 = *(&local0);
panda$core$Int64 $tmp31 = *(&local0);
panda$core$Int64 $tmp32 = (panda$core$Int64) {23};
panda$core$Int64 $tmp33 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp31, $tmp32);
panda$core$Int64 $tmp34 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp30, $tmp33);
*(&local0) = $tmp34;
// line 43
panda$core$Int64 $tmp35 = *(&local0);
panda$core$Int64 $tmp36 = *(&local1);
panda$core$Int64 $tmp37 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp35, $tmp36);
panda$core$Int64 $tmp38 = *(&local0);
panda$core$Int64 $tmp39 = (panda$core$Int64) {17};
panda$core$Int64 $tmp40 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64($tmp38, $tmp39);
panda$core$Int64 $tmp41 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp37, $tmp40);
panda$core$Int64 $tmp42 = *(&local1);
panda$core$Int64 $tmp43 = (panda$core$Int64) {26};
panda$core$Int64 $tmp44 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64($tmp42, $tmp43);
panda$core$Int64 $tmp45 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp41, $tmp44);
panda$core$Int64* $tmp46 = &param0->state2;
*$tmp46 = $tmp45;
// line 44
panda$core$Int64* $tmp47 = &param0->state2;
panda$core$Int64 $tmp48 = *$tmp47;
panda$core$Int64 $tmp49 = *(&local1);
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50 + $tmp51;
panda$core$Int64 $tmp53 = (panda$core$Int64) {$tmp52};
return $tmp53;

}
void panda$math$XorShift128Plus$cleanup(panda$math$XorShift128Plus* param0) {

// line 10
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






