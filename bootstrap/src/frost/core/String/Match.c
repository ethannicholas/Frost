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
frost$core$String$Match$class_type frost$core$String$Match$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$String$Match$get_asString$R$frost$core$String$shim, frost$core$String$Match$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68", 23, 1490981604187616890, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x28", 6, 1881012283434, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$core$String$Match$init$frost$core$Matcher(frost$core$String$Match* param0, frost$core$Matcher* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
// line 269
frost$core$String$Index $tmp2;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp2, param1);
frost$core$String$Index* $tmp3 = &param0->start;
*$tmp3 = $tmp2;
// line 270
frost$core$String$Index $tmp4;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp4, param1);
frost$core$String$Index* $tmp5 = &param0->end;
*$tmp5 = $tmp4;
// line 271
frost$collections$Array* $tmp6 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp6);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Array* $tmp7 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
*(&local0) = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// line 272
frost$core$Int64 $tmp8 = (frost$core$Int64) {0};
frost$core$Int64 $tmp9;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp9, param1);
frost$core$Bit $tmp10 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp11 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp8, $tmp9, $tmp10);
frost$core$Int64 $tmp12 = $tmp11.min;
*(&local1) = $tmp12;
frost$core$Int64 $tmp13 = $tmp11.max;
frost$core$Bit $tmp14 = $tmp11.inclusive;
bool $tmp15 = $tmp14.value;
frost$core$Int64 $tmp16 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp17 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp16);
if ($tmp15) goto block4; else goto block5;
block4:;
int64_t $tmp18 = $tmp12.value;
int64_t $tmp19 = $tmp13.value;
bool $tmp20 = $tmp18 <= $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block5:;
int64_t $tmp23 = $tmp12.value;
int64_t $tmp24 = $tmp13.value;
bool $tmp25 = $tmp23 < $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block1:;
// line 273
frost$collections$Array* $tmp28 = *(&local0);
frost$core$Int64 $tmp29 = *(&local1);
frost$core$String* $tmp30 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q(param1, $tmp29);
frost$collections$Array$add$frost$collections$Array$T($tmp28, ((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
goto block3;
block3:;
frost$core$Int64 $tmp31 = *(&local1);
int64_t $tmp32 = $tmp13.value;
int64_t $tmp33 = $tmp31.value;
int64_t $tmp34 = $tmp32 - $tmp33;
frost$core$Int64 $tmp35 = (frost$core$Int64) {$tmp34};
frost$core$UInt64 $tmp36 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp35);
if ($tmp15) goto block7; else goto block8;
block7:;
uint64_t $tmp37 = $tmp36.value;
uint64_t $tmp38 = $tmp17.value;
bool $tmp39 = $tmp37 >= $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block6; else goto block2;
block8:;
uint64_t $tmp42 = $tmp36.value;
uint64_t $tmp43 = $tmp17.value;
bool $tmp44 = $tmp42 > $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block6; else goto block2;
block6:;
int64_t $tmp47 = $tmp31.value;
int64_t $tmp48 = $tmp16.value;
int64_t $tmp49 = $tmp47 + $tmp48;
frost$core$Int64 $tmp50 = (frost$core$Int64) {$tmp49};
*(&local1) = $tmp50;
goto block1;
block2:;
// line 275
frost$collections$Array* $tmp51 = *(&local0);
frost$collections$ImmutableArray* $tmp52 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT($tmp51);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$collections$ImmutableArray** $tmp53 = &param0->groups;
frost$collections$ImmutableArray* $tmp54 = *$tmp53;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$collections$ImmutableArray** $tmp55 = &param0->groups;
*$tmp55 = $tmp52;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$collections$Array* $tmp56 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
frost$core$String* frost$core$String$Match$get_asString$R$frost$core$String(frost$core$String$Match* param0) {

// line 280
frost$collections$ImmutableArray** $tmp57 = &param0->groups;
frost$collections$ImmutableArray* $tmp58 = *$tmp57;
frost$core$Int64 $tmp59 = (frost$core$Int64) {0};
frost$core$Immutable* $tmp60 = frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T($tmp58, $tmp59);
frost$core$String* $tmp61 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s62, ((frost$core$String*) $tmp60));
frost$core$String* $tmp63 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp61, &$s64);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
return $tmp63;

}
void frost$core$String$Match$cleanup(frost$core$String$Match* param0) {

// line 251
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$collections$ImmutableArray** $tmp65 = &param0->groups;
frost$collections$ImmutableArray* $tmp66 = *$tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
return;

}

