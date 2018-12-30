#include "panda/core/String/Match.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Matcher.h"
#include "panda/collections/Array.h"
#include "panda/core/Int64.h"
#include "panda/core/String/Index.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/collections/ImmutableArray.h"

__attribute__((weak)) panda$core$String* panda$core$String$Match$convert$R$panda$core$String$shim(panda$core$String$Match* p0) {
    panda$core$String* result = panda$core$String$Match$convert$R$panda$core$String(p0);

    return result;
}
__attribute__((weak)) void panda$core$String$Match$cleanup$shim(panda$core$String$Match* p0) {
    panda$core$String$Match$cleanup(p0);

}

static panda$core$String $s1;
panda$core$String$Match$class_type panda$core$String$Match$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$String$Match$convert$R$panda$core$String$shim, panda$core$String$Match$cleanup$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68", 23, 6480045009745533488, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x28", 6, 1881012283434, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void panda$core$String$Match$init$panda$core$Matcher(panda$core$String$Match* param0, panda$core$Matcher* param1) {

panda$collections$Array* local0 = NULL;
panda$core$Int64 local1;
// line 269
panda$core$String$Index $tmp2;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp2, param1);
panda$core$String$Index* $tmp3 = &param0->start;
*$tmp3 = $tmp2;
// line 270
panda$core$String$Index $tmp4;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp4, param1);
panda$core$String$Index* $tmp5 = &param0->end;
*$tmp5 = $tmp4;
// line 271
panda$collections$Array* $tmp6 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp6);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp7 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
*(&local0) = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// line 272
panda$core$Int64 $tmp8 = (panda$core$Int64) {0};
panda$core$Int64 $tmp9;
panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp9, param1);
panda$core$Bit $tmp10 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp11 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp8, $tmp9, $tmp10);
panda$core$Int64 $tmp12 = $tmp11.min;
*(&local1) = $tmp12;
panda$core$Int64 $tmp13 = $tmp11.max;
panda$core$Bit $tmp14 = $tmp11.inclusive;
bool $tmp15 = $tmp14.value;
panda$core$Int64 $tmp16 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp17 = panda$core$Int64$convert$R$panda$core$UInt64($tmp16);
if ($tmp15) goto block4; else goto block5;
block4:;
int64_t $tmp18 = $tmp12.value;
int64_t $tmp19 = $tmp13.value;
bool $tmp20 = $tmp18 <= $tmp19;
panda$core$Bit $tmp21 = (panda$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block5:;
int64_t $tmp23 = $tmp12.value;
int64_t $tmp24 = $tmp13.value;
bool $tmp25 = $tmp23 < $tmp24;
panda$core$Bit $tmp26 = (panda$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block1:;
// line 273
panda$collections$Array* $tmp28 = *(&local0);
panda$core$Int64 $tmp29 = *(&local1);
panda$core$String* $tmp30 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(param1, $tmp29);
panda$collections$Array$add$panda$collections$Array$T($tmp28, ((panda$core$Object*) $tmp30));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
goto block3;
block3:;
panda$core$Int64 $tmp31 = *(&local1);
int64_t $tmp32 = $tmp13.value;
int64_t $tmp33 = $tmp31.value;
int64_t $tmp34 = $tmp32 - $tmp33;
panda$core$Int64 $tmp35 = (panda$core$Int64) {$tmp34};
panda$core$UInt64 $tmp36 = panda$core$Int64$convert$R$panda$core$UInt64($tmp35);
if ($tmp15) goto block7; else goto block8;
block7:;
uint64_t $tmp37 = $tmp36.value;
uint64_t $tmp38 = $tmp17.value;
bool $tmp39 = $tmp37 >= $tmp38;
panda$core$Bit $tmp40 = (panda$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block6; else goto block2;
block8:;
uint64_t $tmp42 = $tmp36.value;
uint64_t $tmp43 = $tmp17.value;
bool $tmp44 = $tmp42 > $tmp43;
panda$core$Bit $tmp45 = (panda$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block6; else goto block2;
block6:;
int64_t $tmp47 = $tmp31.value;
int64_t $tmp48 = $tmp16.value;
int64_t $tmp49 = $tmp47 + $tmp48;
panda$core$Int64 $tmp50 = (panda$core$Int64) {$tmp49};
*(&local1) = $tmp50;
goto block1;
block2:;
// line 275
panda$collections$Array* $tmp51 = *(&local0);
panda$collections$ImmutableArray* $tmp52 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp51);
panda$collections$ImmutableArray** $tmp53 = &param0->groups;
panda$collections$ImmutableArray* $tmp54 = *$tmp53;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
panda$collections$ImmutableArray** $tmp55 = &param0->groups;
*$tmp55 = $tmp52;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
panda$collections$Array* $tmp56 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing g
*(&local0) = ((panda$collections$Array*) NULL);
return;

}
panda$core$String* panda$core$String$Match$convert$R$panda$core$String(panda$core$String$Match* param0) {

// line 280
panda$collections$ImmutableArray** $tmp57 = &param0->groups;
panda$collections$ImmutableArray* $tmp58 = *$tmp57;
panda$core$Int64 $tmp59 = (panda$core$Int64) {0};
panda$core$Object* $tmp60 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp58, $tmp59);
panda$core$String* $tmp61 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s62, ((panda$core$String*) $tmp60));
panda$core$String* $tmp63 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp61, &$s64);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
panda$core$Panda$unref$panda$core$Object$Q($tmp60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
return $tmp63;

}
void panda$core$String$Match$cleanup(panda$core$String$Match* param0) {

panda$collections$ImmutableArray** $tmp65 = &param0->groups;
panda$collections$ImmutableArray* $tmp66 = *$tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
return;

}

