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
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x28", 6, 1881012283434, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

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
panda$collections$Array* $tmp6 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp6);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$Array* $tmp7 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
*(&local0) = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing REF($9:panda.collections.Array<panda.core.String>)
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
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit($tmp30 != NULL);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp33 = (panda$core$Int64) {273};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block6:;
panda$collections$Array$add$panda$collections$Array$T($tmp28, ((panda$core$Object*) $tmp30));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($51:panda.core.String?)
goto block3;
block3:;
panda$core$Int64 $tmp36 = *(&local1);
int64_t $tmp37 = $tmp13.value;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37 - $tmp38;
panda$core$Int64 $tmp40 = (panda$core$Int64) {$tmp39};
panda$core$UInt64 $tmp41 = panda$core$Int64$convert$R$panda$core$UInt64($tmp40);
if ($tmp15) goto block9; else goto block10;
block9:;
uint64_t $tmp42 = $tmp41.value;
uint64_t $tmp43 = $tmp17.value;
bool $tmp44 = $tmp42 >= $tmp43;
panda$core$Bit $tmp45 = (panda$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block8; else goto block2;
block10:;
uint64_t $tmp47 = $tmp41.value;
uint64_t $tmp48 = $tmp17.value;
bool $tmp49 = $tmp47 > $tmp48;
panda$core$Bit $tmp50 = (panda$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block8; else goto block2;
block8:;
int64_t $tmp52 = $tmp36.value;
int64_t $tmp53 = $tmp16.value;
int64_t $tmp54 = $tmp52 + $tmp53;
panda$core$Int64 $tmp55 = (panda$core$Int64) {$tmp54};
*(&local1) = $tmp55;
goto block1;
block2:;
// line 275
panda$collections$Array* $tmp56 = *(&local0);
panda$collections$ImmutableArray* $tmp57 = panda$collections$ImmutableArray$from$panda$collections$Array$LTpanda$collections$ImmutableArray$T$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT($tmp56);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
panda$collections$ImmutableArray** $tmp58 = &param0->groups;
panda$collections$ImmutableArray* $tmp59 = *$tmp58;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$collections$ImmutableArray** $tmp60 = &param0->groups;
*$tmp60 = $tmp57;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
// unreffing REF($94:panda.collections.ImmutableArray<panda.collections.ImmutableArray.T>)
panda$collections$Array* $tmp61 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing g
*(&local0) = ((panda$collections$Array*) NULL);
return;

}
panda$core$String* panda$core$String$Match$convert$R$panda$core$String(panda$core$String$Match* param0) {

// line 280
panda$collections$ImmutableArray** $tmp62 = &param0->groups;
panda$collections$ImmutableArray* $tmp63 = *$tmp62;
panda$core$Int64 $tmp64 = (panda$core$Int64) {0};
panda$core$Immutable* $tmp65 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp63, $tmp64);
panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s67, ((panda$core$String*) $tmp65));
panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp66, &$s69);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing REF($5:panda.collections.ImmutableArray.T)
return $tmp68;

}
void panda$core$String$Match$cleanup(panda$core$String$Match* param0) {

// line 251
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$collections$ImmutableArray** $tmp70 = &param0->groups;
panda$collections$ImmutableArray* $tmp71 = *$tmp70;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
return;

}

