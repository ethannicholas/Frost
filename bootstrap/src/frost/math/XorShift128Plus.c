#include "frost/math/XorShift128Plus.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/math/Random.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$math$XorShift128Plus$_frost$math$Random = { (frost$core$Class*) &frost$math$Random$class, NULL, { frost$math$Random$bit$R$frost$core$Bit, frost$math$Random$int32$R$frost$core$Int32, frost$math$XorShift128Plus$int64$R$frost$core$Int64, frost$math$Random$int$frost$core$Int64$R$frost$core$Int64, frost$math$Random$real32$R$frost$core$Real32, frost$math$Random$real64$R$frost$core$Real64} };

static frost$core$String $s1;
frost$math$XorShift128Plus$class_type frost$math$XorShift128Plus$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$math$XorShift128Plus$_frost$math$Random, { frost$core$Object$get_asString$R$frost$core$String, frost$math$XorShift128Plus$cleanup, frost$math$XorShift128Plus$int64$R$frost$core$Int64} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6d\x61\x74\x68\x2e\x58\x6f\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6c\x75\x73", 26, 4029058821734976825, NULL };

void frost$math$XorShift128Plus$init$frost$core$Int64(frost$math$XorShift128Plus* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:29
frost$core$Int64 $tmp2 = (frost$core$Int64) {6713u};
int64_t $tmp3 = param1.value;
int64_t $tmp4 = $tmp2.value;
int64_t $tmp5 = $tmp3 * $tmp4;
frost$core$Int64 $tmp6 = (frost$core$Int64) {$tmp5};
frost$core$Int64 $tmp7 = (frost$core$Int64) {123456789u};
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8 + $tmp9;
frost$core$Int64 $tmp11 = (frost$core$Int64) {$tmp10};
frost$core$Int64* $tmp12 = &param0->state1;
*$tmp12 = $tmp11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:30
frost$core$Int64* $tmp13 = &param0->state1;
frost$core$Int64 $tmp14 = *$tmp13;
frost$core$Int64 $tmp15 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from XorShift128Plus.frost:30:19
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 == $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:32
frost$core$Int64 $tmp21 = (frost$core$Int64) {123456789u};
frost$core$Int64* $tmp22 = &param0->state1;
*$tmp22 = $tmp21;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:34
frost$core$Int64* $tmp23 = &param0->state1;
frost$core$Int64 $tmp24 = *$tmp23;
// begin inline call to function frost.core.Int64.!!():frost.core.Int64 from XorShift128Plus.frost:34:19
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:118
int64_t $tmp25 = $tmp24.value;
int64_t $tmp26 = !$tmp25;
frost$core$Int64 $tmp27 = (frost$core$Int64) {$tmp26};
frost$core$Int64* $tmp28 = &param0->state2;
*$tmp28 = $tmp27;
return;

}
frost$core$Int64 frost$math$XorShift128Plus$int64$R$frost$core$Int64(frost$math$XorShift128Plus* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:39
frost$core$Int64* $tmp29 = &param0->state1;
frost$core$Int64 $tmp30 = *$tmp29;
*(&local0) = $tmp30;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:40
frost$core$Int64* $tmp31 = &param0->state2;
frost$core$Int64 $tmp32 = *$tmp31;
*(&local1) = $tmp32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:41
frost$core$Int64 $tmp33 = *(&local1);
frost$core$Int64* $tmp34 = &param0->state1;
*$tmp34 = $tmp33;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:42
frost$core$Int64 $tmp35 = *(&local0);
frost$core$Int64 $tmp36 = *(&local0);
frost$core$Int64 $tmp37 = (frost$core$Int64) {23u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:42:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:153
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37.value;
int64_t $tmp40 = $tmp38 << $tmp39;
frost$core$Int64 $tmp41 = (frost$core$Int64) {$tmp40};
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:42:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:143
int64_t $tmp42 = $tmp35.value;
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42 ^ $tmp43;
frost$core$Int64 $tmp45 = (frost$core$Int64) {$tmp44};
*(&local0) = $tmp45;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:43
frost$core$Int64 $tmp46 = *(&local0);
frost$core$Int64 $tmp47 = *(&local1);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:43:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:143
int64_t $tmp48 = $tmp46.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 ^ $tmp49;
frost$core$Int64 $tmp51 = (frost$core$Int64) {$tmp50};
frost$core$Int64 $tmp52 = *(&local0);
frost$core$Int64 $tmp53 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.>>(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:43:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:158
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54 >> $tmp55;
frost$core$Int64 $tmp57 = (frost$core$Int64) {$tmp56};
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:43:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:143
int64_t $tmp58 = $tmp51.value;
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58 ^ $tmp59;
frost$core$Int64 $tmp61 = (frost$core$Int64) {$tmp60};
frost$core$Int64 $tmp62 = *(&local1);
frost$core$Int64 $tmp63 = (frost$core$Int64) {26u};
// begin inline call to function frost.core.Int64.>>(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:43:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:158
int64_t $tmp64 = $tmp62.value;
int64_t $tmp65 = $tmp63.value;
int64_t $tmp66 = $tmp64 >> $tmp65;
frost$core$Int64 $tmp67 = (frost$core$Int64) {$tmp66};
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from XorShift128Plus.frost:43:40
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:143
int64_t $tmp68 = $tmp61.value;
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68 ^ $tmp69;
frost$core$Int64 $tmp71 = (frost$core$Int64) {$tmp70};
frost$core$Int64* $tmp72 = &param0->state2;
*$tmp72 = $tmp71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:44
frost$core$Int64* $tmp73 = &param0->state2;
frost$core$Int64 $tmp74 = *$tmp73;
frost$core$Int64 $tmp75 = *(&local1);
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76 + $tmp77;
frost$core$Int64 $tmp79 = (frost$core$Int64) {$tmp78};
return $tmp79;

}
void frost$math$XorShift128Plus$cleanup(frost$math$XorShift128Plus* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/math/XorShift128Plus.frost:10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






