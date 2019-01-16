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

__attribute__((weak)) frost$core$String* frost$core$String$Match$convert$R$frost$core$String$shim(frost$core$String$Match* p0) {
    frost$core$String* result = frost$core$String$Match$convert$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$core$String$Match$cleanup$shim(frost$core$String$Match* p0) {
    frost$core$String$Match$cleanup(p0);

}

static frost$core$String $s1;
frost$core$String$Match$class_type frost$core$String$Match$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$String$Match$convert$R$frost$core$String$shim, frost$core$String$Match$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68", 23, 1490981604187616890, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x28", 6, 1881012283434, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

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
// unreffing REF($9:frost.collections.Array<frost.core.String>)
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
frost$core$UInt64 $tmp17 = frost$core$Int64$convert$R$frost$core$UInt64($tmp16);
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
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit($tmp30 != NULL);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp33 = (frost$core$Int64) {273};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block6:;
frost$collections$Array$add$frost$collections$Array$T($tmp28, ((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing REF($51:frost.core.String?)
goto block3;
block3:;
frost$core$Int64 $tmp36 = *(&local1);
int64_t $tmp37 = $tmp13.value;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37 - $tmp38;
frost$core$Int64 $tmp40 = (frost$core$Int64) {$tmp39};
frost$core$UInt64 $tmp41 = frost$core$Int64$convert$R$frost$core$UInt64($tmp40);
if ($tmp15) goto block9; else goto block10;
block9:;
uint64_t $tmp42 = $tmp41.value;
uint64_t $tmp43 = $tmp17.value;
bool $tmp44 = $tmp42 >= $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block8; else goto block2;
block10:;
uint64_t $tmp47 = $tmp41.value;
uint64_t $tmp48 = $tmp17.value;
bool $tmp49 = $tmp47 > $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block8; else goto block2;
block8:;
int64_t $tmp52 = $tmp36.value;
int64_t $tmp53 = $tmp16.value;
int64_t $tmp54 = $tmp52 + $tmp53;
frost$core$Int64 $tmp55 = (frost$core$Int64) {$tmp54};
*(&local1) = $tmp55;
goto block1;
block2:;
// line 275
frost$collections$Array* $tmp56 = *(&local0);
frost$collections$ImmutableArray* $tmp57 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT($tmp56);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$collections$ImmutableArray** $tmp58 = &param0->groups;
frost$collections$ImmutableArray* $tmp59 = *$tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$collections$ImmutableArray** $tmp60 = &param0->groups;
*$tmp60 = $tmp57;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing REF($94:frost.collections.ImmutableArray<frost.collections.ImmutableArray.T>)
frost$collections$Array* $tmp61 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing g
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
frost$core$String* frost$core$String$Match$convert$R$frost$core$String(frost$core$String$Match* param0) {

// line 280
frost$collections$ImmutableArray** $tmp62 = &param0->groups;
frost$collections$ImmutableArray* $tmp63 = *$tmp62;
frost$core$Int64 $tmp64 = (frost$core$Int64) {0};
frost$core$Immutable* $tmp65 = frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T($tmp63, $tmp64);
frost$core$String* $tmp66 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s67, ((frost$core$String*) $tmp65));
frost$core$String* $tmp68 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp66, &$s69);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing REF($5:frost.collections.ImmutableArray.T)
return $tmp68;

}
void frost$core$String$Match$cleanup(frost$core$String$Match* param0) {

// line 251
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$collections$ImmutableArray** $tmp70 = &param0->groups;
frost$collections$ImmutableArray* $tmp71 = *$tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
return;

}

