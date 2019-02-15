#include "frost/core/String/Match.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Matcher.h"
#include "frost/collections/Array.h"
#include "frost/core/Int64.h"
#include "frost/core/String/Index.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
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
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x28", 6, -3203041817595402214, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$core$String$Match$init$frost$core$Matcher(frost$core$String$Match* param0, frost$core$Matcher* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
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
frost$core$Int64 $tmp8 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp9;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp9, param1);
frost$core$Bit $tmp10 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp11 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp8, $tmp9, $tmp10);
frost$core$Int64 $tmp12 = $tmp11.min;
*(&local1) = $tmp12;
frost$core$Int64 $tmp13 = $tmp11.max;
frost$core$Bit $tmp14 = $tmp11.inclusive;
bool $tmp15 = $tmp14.value;
frost$core$Int64 $tmp16 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp17 = $tmp16.value;
frost$core$UInt64 $tmp18 = (frost$core$UInt64) {((uint64_t) $tmp17)};
if ($tmp15) goto block5; else goto block6;
block5:;
int64_t $tmp19 = $tmp12.value;
int64_t $tmp20 = $tmp13.value;
bool $tmp21 = $tmp19 <= $tmp20;
frost$core$Bit $tmp22 = (frost$core$Bit) {$tmp21};
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block2; else goto block3;
block6:;
int64_t $tmp24 = $tmp12.value;
int64_t $tmp25 = $tmp13.value;
bool $tmp26 = $tmp24 < $tmp25;
frost$core$Bit $tmp27 = (frost$core$Bit) {$tmp26};
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:273
frost$collections$Array* $tmp29 = *(&local0);
frost$core$Int64 $tmp30 = *(&local1);
frost$core$String* $tmp31 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q(param1, $tmp30);
frost$collections$Array$add$frost$collections$Array$T($tmp29, ((frost$core$Object*) $tmp31));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$Int64 $tmp32 = *(&local1);
int64_t $tmp33 = $tmp13.value;
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33 - $tmp34;
frost$core$Int64 $tmp36 = (frost$core$Int64) {$tmp35};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp37 = $tmp36.value;
frost$core$UInt64 $tmp38 = (frost$core$UInt64) {((uint64_t) $tmp37)};
if ($tmp15) goto block9; else goto block10;
block9:;
uint64_t $tmp39 = $tmp38.value;
uint64_t $tmp40 = $tmp18.value;
bool $tmp41 = $tmp39 >= $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block7; else goto block3;
block10:;
uint64_t $tmp44 = $tmp38.value;
uint64_t $tmp45 = $tmp18.value;
bool $tmp46 = $tmp44 > $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block7; else goto block3;
block7:;
int64_t $tmp49 = $tmp32.value;
int64_t $tmp50 = $tmp16.value;
int64_t $tmp51 = $tmp49 + $tmp50;
frost$core$Int64 $tmp52 = (frost$core$Int64) {$tmp51};
*(&local1) = $tmp52;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:275
frost$collections$Array* $tmp53 = *(&local0);
frost$collections$ImmutableArray* $tmp54 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT($tmp53);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$collections$ImmutableArray** $tmp55 = &param0->groups;
frost$collections$ImmutableArray* $tmp56 = *$tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$collections$ImmutableArray** $tmp57 = &param0->groups;
*$tmp57 = $tmp54;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$collections$Array* $tmp58 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
frost$core$String* frost$core$String$Match$get_asString$R$frost$core$String(frost$core$String$Match* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:280
frost$collections$ImmutableArray** $tmp59 = &param0->groups;
frost$collections$ImmutableArray* $tmp60 = *$tmp59;
frost$core$Int64 $tmp61 = (frost$core$Int64) {0u};
frost$core$Immutable* $tmp62 = frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T($tmp60, $tmp61);
frost$core$String* $tmp63 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s64, ((frost$core$String*) $tmp62));
frost$core$String* $tmp65 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp63, &$s66);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
return $tmp65;

}
void frost$core$String$Match$cleanup(frost$core$String$Match* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:251
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$collections$ImmutableArray** $tmp67 = &param0->groups;
frost$collections$ImmutableArray* $tmp68 = *$tmp67;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
return;

}

