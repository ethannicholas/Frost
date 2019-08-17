#include "frost/core/String/Match.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Matcher.h"
#include "frost/collections/Array.h"
#include "frost/core/Int.h"
#include "frost/core/String/Index.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/collections/ImmutableArray.h"

__attribute__((weak)) frost$core$String* frost$core$String$Match$get_asString$R$frost$core$String$shim(frost$core$String$Match* p0) {
    frost$core$String* result = frost$core$String$Match$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$core$String$Match$cleanup$shim(frost$core$String$Match* p0) {
    frost$core$String$Match$cleanup(p0);

}

static frost$core$String $s1;
frost$core$String$Match$class_type frost$core$String$Match$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$String$Match$get_asString$R$frost$core$String$shim, frost$core$String$Match$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68", 23, -7089004959739480374, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x28", 6, -3203041817595402214, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$core$String$Match$init$frost$core$Matcher(frost$core$String$Match* param0, frost$core$Matcher* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:269
frost$core$String$Index $tmp2;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp2, param1);
frost$core$String$Index* $tmp3 = &param0->start;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:270
frost$core$String$Index $tmp4;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp4, param1);
frost$core$String$Index* $tmp5 = &param0->end;
*$tmp5 = $tmp4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:271
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp6 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp6);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Array* $tmp7 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
*(&local0) = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:272
frost$core$Int $tmp8 = (frost$core$Int) {0u};
frost$core$Int $tmp9;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp9, param1);
frost$core$Bit $tmp10 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp11 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp8, $tmp9, $tmp10);
frost$core$Int $tmp12 = $tmp11.min;
*(&local1) = $tmp12;
frost$core$Int $tmp13 = $tmp11.max;
frost$core$Bit $tmp14 = $tmp11.inclusive;
bool $tmp15 = $tmp14.value;
frost$core$Int $tmp16 = (frost$core$Int) {1u};
if ($tmp15) goto block4; else goto block5;
block4:;
int64_t $tmp17 = $tmp12.value;
int64_t $tmp18 = $tmp13.value;
bool $tmp19 = $tmp17 <= $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block1; else goto block2;
block5:;
int64_t $tmp22 = $tmp12.value;
int64_t $tmp23 = $tmp13.value;
bool $tmp24 = $tmp22 < $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:273
frost$collections$Array* $tmp27 = *(&local0);
frost$core$Int $tmp28 = *(&local1);
frost$core$String* $tmp29 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(param1, $tmp28);
frost$collections$Array$add$frost$collections$Array$T($tmp27, ((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Int $tmp30 = *(&local1);
int64_t $tmp31 = $tmp13.value;
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31 - $tmp32;
frost$core$Int $tmp34 = (frost$core$Int) {$tmp33};
if ($tmp15) goto block7; else goto block8;
block7:;
int64_t $tmp35 = $tmp34.value;
int64_t $tmp36 = $tmp16.value;
bool $tmp37 = $tmp35 >= $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block6; else goto block2;
block8:;
int64_t $tmp40 = $tmp34.value;
int64_t $tmp41 = $tmp16.value;
bool $tmp42 = $tmp40 > $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block6; else goto block2;
block6:;
int64_t $tmp45 = $tmp30.value;
int64_t $tmp46 = $tmp16.value;
int64_t $tmp47 = $tmp45 + $tmp46;
frost$core$Int $tmp48 = (frost$core$Int) {$tmp47};
*(&local1) = $tmp48;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:275
frost$collections$Array* $tmp49 = *(&local0);
frost$collections$ImmutableArray* $tmp50 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT($tmp49);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$collections$ImmutableArray** $tmp51 = &param0->groups;
frost$collections$ImmutableArray* $tmp52 = *$tmp51;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$collections$ImmutableArray** $tmp53 = &param0->groups;
*$tmp53 = $tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$collections$Array* $tmp54 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
frost$core$String* frost$core$String$Match$get_asString$R$frost$core$String(frost$core$String$Match* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:280
frost$collections$ImmutableArray** $tmp55 = &param0->groups;
frost$collections$ImmutableArray* $tmp56 = *$tmp55;
frost$core$Int $tmp57 = (frost$core$Int) {0u};
frost$core$Immutable* $tmp58 = frost$collections$ImmutableArray$$IDX$frost$core$Int$R$frost$collections$ImmutableArray$T($tmp56, $tmp57);
frost$core$String* $tmp59 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s60, ((frost$core$String*) $tmp58));
frost$core$String* $tmp61 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp59, &$s62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
return $tmp61;

}
void frost$core$String$Match$cleanup(frost$core$String$Match* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:251
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$collections$ImmutableArray** $tmp63 = &param0->groups;
frost$collections$ImmutableArray* $tmp64 = *$tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
return;

}

