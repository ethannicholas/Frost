#include "panda/collections/ImmutableArray.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/core/Object.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "panda/core/MutableString.h"

__attribute__((weak)) panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim(panda$collections$ImmutableArray* p0) {
    panda$collections$Iterator* result = panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64$shim(panda$collections$ImmutableArray* p0) {
    panda$core$Int64 result = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim(panda$collections$ImmutableArray* p0, panda$core$Int64 p1) {
    panda$core$Immutable* result = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p0, p1);

    return ((panda$core$Object*) result);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String$shim(panda$collections$ImmutableArray* p0) {
    panda$core$String* result = panda$collections$ImmutableArray$convert$R$panda$core$String(p0);

    return result;
}
__attribute__((weak)) void panda$collections$ImmutableArray$cleanup$shim(panda$collections$ImmutableArray* p0) {
    panda$collections$ImmutableArray$cleanup(p0);

}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ImmutableArray$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$ImmutableArray$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$Iterable, { panda$collections$ImmutableArray$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$ImmutableArray$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$CollectionView, { panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sorted$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

static panda$core$String $s1;
panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String$shim, panda$collections$ImmutableArray$cleanup$shim, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64$shim, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

typedef panda$core$Int64 (*$fn10)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn21)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn47)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn94)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn149)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn168)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn194)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn198)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn203)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x54", 128, -4326513854706852849, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* param0) {

// line 39
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->_count;
*$tmp3 = $tmp2;
// line 40
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
int64_t $tmp5 = $tmp4.value;
panda$core$Immutable** $tmp6 = ((panda$core$Immutable**) pandaZAlloc($tmp5 * 8));
panda$core$Immutable*** $tmp7 = &param0->data;
*$tmp7 = $tmp6;
return;

}
void panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* param0, panda$collections$ListView* param1) {

panda$core$Int64 local0;
// line 44
ITable* $tmp8 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
panda$core$Int64 $tmp11 = $tmp9(((panda$collections$CollectionView*) param1));
panda$core$Int64* $tmp12 = &param0->_count;
*$tmp12 = $tmp11;
// line 45
panda$core$Int64* $tmp13 = &param0->_count;
panda$core$Int64 $tmp14 = *$tmp13;
int64_t $tmp15 = $tmp14.value;
panda$core$Immutable** $tmp16 = ((panda$core$Immutable**) pandaZAlloc($tmp15 * 8));
panda$core$Immutable*** $tmp17 = &param0->data;
*$tmp17 = $tmp16;
// line 46
panda$core$Int64 $tmp18 = (panda$core$Int64) {0};
ITable* $tmp19 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp19->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp19 = $tmp19->next;
}
$fn21 $tmp20 = $tmp19->methods[0];
panda$core$Int64 $tmp22 = $tmp20(((panda$collections$CollectionView*) param0));
panda$core$Bit $tmp23 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp24 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp18, $tmp22, $tmp23);
panda$core$Int64 $tmp25 = $tmp24.min;
*(&local0) = $tmp25;
panda$core$Int64 $tmp26 = $tmp24.max;
panda$core$Bit $tmp27 = $tmp24.inclusive;
bool $tmp28 = $tmp27.value;
panda$core$Int64 $tmp29 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp30 = panda$core$Int64$convert$R$panda$core$UInt64($tmp29);
if ($tmp28) goto block4; else goto block5;
block4:;
int64_t $tmp31 = $tmp25.value;
int64_t $tmp32 = $tmp26.value;
bool $tmp33 = $tmp31 <= $tmp32;
panda$core$Bit $tmp34 = (panda$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block1; else goto block2;
block5:;
int64_t $tmp36 = $tmp25.value;
int64_t $tmp37 = $tmp26.value;
bool $tmp38 = $tmp36 < $tmp37;
panda$core$Bit $tmp39 = (panda$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block1; else goto block2;
block1:;
// line 47
panda$core$Immutable*** $tmp41 = &param0->data;
panda$core$Immutable** $tmp42 = *$tmp41;
panda$core$Int64 $tmp43 = *(&local0);
panda$core$Int64 $tmp44 = *(&local0);
ITable* $tmp45 = param1->$class->itable;
while ($tmp45->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
panda$core$Object* $tmp48 = $tmp46(param1, $tmp44);
int64_t $tmp49 = $tmp43.value;
panda$core$Immutable* $tmp50 = $tmp42[$tmp49];
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Immutable*) $tmp48)));
$tmp42[$tmp49] = ((panda$core$Immutable*) $tmp48);
panda$core$Panda$unref$panda$core$Object$Q($tmp48);
// unreffing REF($51:panda.collections.ListView.T)
goto block3;
block3:;
panda$core$Int64 $tmp51 = *(&local0);
int64_t $tmp52 = $tmp26.value;
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52 - $tmp53;
panda$core$Int64 $tmp55 = (panda$core$Int64) {$tmp54};
panda$core$UInt64 $tmp56 = panda$core$Int64$convert$R$panda$core$UInt64($tmp55);
if ($tmp28) goto block7; else goto block8;
block7:;
uint64_t $tmp57 = $tmp56.value;
uint64_t $tmp58 = $tmp30.value;
bool $tmp59 = $tmp57 >= $tmp58;
panda$core$Bit $tmp60 = (panda$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block6; else goto block2;
block8:;
uint64_t $tmp62 = $tmp56.value;
uint64_t $tmp63 = $tmp30.value;
bool $tmp64 = $tmp62 > $tmp63;
panda$core$Bit $tmp65 = (panda$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block6; else goto block2;
block6:;
int64_t $tmp67 = $tmp51.value;
int64_t $tmp68 = $tmp29.value;
int64_t $tmp69 = $tmp67 + $tmp68;
panda$core$Int64 $tmp70 = (panda$core$Int64) {$tmp69};
*(&local0) = $tmp70;
goto block1;
block2:;
return;

}
void panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64(panda$collections$ImmutableArray* param0, panda$core$Immutable** param1, panda$core$Int64 param2) {

// line 53
panda$core$Immutable*** $tmp71 = &param0->data;
*$tmp71 = param1;
// line 54
panda$core$Int64* $tmp72 = &param0->_count;
*$tmp72 = param2;
return;

}
panda$collections$ImmutableArray* panda$collections$ImmutableArray$from$panda$collections$Array$LTpanda$collections$ImmutableArray$T$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$Array* param0) {

// line 67
panda$core$Object*** $tmp73 = &param0->data;
panda$core$Object** $tmp74 = *$tmp73;
panda$core$Int64* $tmp75 = &param0->capacity;
panda$core$Int64 $tmp76 = *$tmp75;
panda$core$Int64* $tmp77 = &param0->_count;
panda$core$Int64 $tmp78 = *$tmp77;
int64_t $tmp79 = $tmp76.value;
int64_t $tmp80 = $tmp78.value;
panda$core$Immutable** $tmp81 = (panda$core$Immutable**) pandaRealloc(((panda$core$Immutable**) $tmp74), $tmp79 * 8, $tmp80 * 8);
panda$core$Object*** $tmp82 = &param0->data;
*$tmp82 = ((panda$core$Object**) $tmp81);
// line 68
panda$collections$ImmutableArray* $tmp83 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp83);
panda$core$Class** $tmp84 = &((panda$core$Object*) $tmp83)->$class;
panda$core$Class* $tmp85 = *$tmp84;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$core$Class** $tmp86 = &((panda$core$Object*) param0)->$class;
panda$core$Class* $tmp87 = *$tmp86;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$Class** $tmp88 = &((panda$core$Object*) param0)->$class;
*$tmp88 = $tmp85;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing REF($20:panda.collections.ImmutableArray<panda.collections.ImmutableArray.T>)
// line 69
panda$core$Int64 $tmp89 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64* $tmp90 = &param0->capacity;
*$tmp90 = $tmp89;
// line 70
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) ((panda$core$Object*) param0))));
return ((panda$collections$ImmutableArray*) ((panda$core$Object*) param0));

}
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* param0) {

panda$core$Int64 local0;
// line 75
panda$core$Int64 $tmp91 = (panda$core$Int64) {0};
ITable* $tmp92 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp92->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
panda$core$Int64 $tmp95 = $tmp93(((panda$collections$CollectionView*) param0));
panda$core$Bit $tmp96 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp97 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp91, $tmp95, $tmp96);
panda$core$Int64 $tmp98 = $tmp97.min;
*(&local0) = $tmp98;
panda$core$Int64 $tmp99 = $tmp97.max;
panda$core$Bit $tmp100 = $tmp97.inclusive;
bool $tmp101 = $tmp100.value;
panda$core$Int64 $tmp102 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp103 = panda$core$Int64$convert$R$panda$core$UInt64($tmp102);
if ($tmp101) goto block4; else goto block5;
block4:;
int64_t $tmp104 = $tmp98.value;
int64_t $tmp105 = $tmp99.value;
bool $tmp106 = $tmp104 <= $tmp105;
panda$core$Bit $tmp107 = (panda$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block2;
block5:;
int64_t $tmp109 = $tmp98.value;
int64_t $tmp110 = $tmp99.value;
bool $tmp111 = $tmp109 < $tmp110;
panda$core$Bit $tmp112 = (panda$core$Bit) {$tmp111};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block1; else goto block2;
block1:;
// line 76
panda$core$Immutable*** $tmp114 = &param0->data;
panda$core$Immutable** $tmp115 = *$tmp114;
panda$core$Int64 $tmp116 = *(&local0);
int64_t $tmp117 = $tmp116.value;
panda$core$Immutable* $tmp118 = $tmp115[$tmp117];
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Immutable*) NULL)));
$tmp115[$tmp117] = ((panda$core$Immutable*) NULL);
goto block3;
block3:;
panda$core$Int64 $tmp119 = *(&local0);
int64_t $tmp120 = $tmp99.value;
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120 - $tmp121;
panda$core$Int64 $tmp123 = (panda$core$Int64) {$tmp122};
panda$core$UInt64 $tmp124 = panda$core$Int64$convert$R$panda$core$UInt64($tmp123);
if ($tmp101) goto block7; else goto block8;
block7:;
uint64_t $tmp125 = $tmp124.value;
uint64_t $tmp126 = $tmp103.value;
bool $tmp127 = $tmp125 >= $tmp126;
panda$core$Bit $tmp128 = (panda$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block6; else goto block2;
block8:;
uint64_t $tmp130 = $tmp124.value;
uint64_t $tmp131 = $tmp103.value;
bool $tmp132 = $tmp130 > $tmp131;
panda$core$Bit $tmp133 = (panda$core$Bit) {$tmp132};
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block6; else goto block2;
block6:;
int64_t $tmp135 = $tmp119.value;
int64_t $tmp136 = $tmp102.value;
int64_t $tmp137 = $tmp135 + $tmp136;
panda$core$Int64 $tmp138 = (panda$core$Int64) {$tmp137};
*(&local0) = $tmp138;
goto block1;
block2:;
// line 78
panda$core$Immutable*** $tmp139 = &param0->data;
panda$core$Immutable** $tmp140 = *$tmp139;
pandaFree($tmp140);
// line 74
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
return;

}
panda$core$Immutable* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Int64 $tmp141 = (panda$core$Int64) {0};
int64_t $tmp142 = param1.value;
int64_t $tmp143 = $tmp141.value;
bool $tmp144 = $tmp142 >= $tmp143;
panda$core$Bit $tmp145 = (panda$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block1; else goto block2;
block1:;
ITable* $tmp147 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp147->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[0];
panda$core$Int64 $tmp150 = $tmp148(((panda$collections$CollectionView*) param0));
int64_t $tmp151 = param1.value;
int64_t $tmp152 = $tmp150.value;
bool $tmp153 = $tmp151 < $tmp152;
panda$core$Bit $tmp154 = (panda$core$Bit) {$tmp153};
*(&local0) = $tmp154;
goto block3;
block2:;
*(&local0) = $tmp145;
goto block3;
block3:;
panda$core$Bit $tmp155 = *(&local0);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp157 = (panda$core$Int64) {82};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s158, $tmp157, &$s159);
abort(); // unreachable
block4:;
// line 83
panda$core$Int64 $tmp160 = (panda$core$Int64) {0};
int64_t $tmp161 = param1.value;
int64_t $tmp162 = $tmp160.value;
bool $tmp163 = $tmp161 >= $tmp162;
panda$core$Bit $tmp164 = (panda$core$Bit) {$tmp163};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block6; else goto block7;
block6:;
ITable* $tmp166 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp166->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
panda$core$Int64 $tmp169 = $tmp167(((panda$collections$CollectionView*) param0));
int64_t $tmp170 = param1.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 < $tmp171;
panda$core$Bit $tmp173 = (panda$core$Bit) {$tmp172};
*(&local1) = $tmp173;
goto block8;
block7:;
*(&local1) = $tmp164;
goto block8;
block8:;
panda$core$Bit $tmp174 = *(&local1);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp176 = (panda$core$Int64) {83};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s177, $tmp176);
abort(); // unreachable
block9:;
// line 84
panda$core$Immutable*** $tmp178 = &param0->data;
panda$core$Immutable** $tmp179 = *$tmp178;
int64_t $tmp180 = param1.value;
panda$core$Immutable* $tmp181 = $tmp179[$tmp180];
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
return $tmp181;

}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* param0) {

// line 89
panda$core$Int64* $tmp182 = &param0->_count;
panda$core$Int64 $tmp183 = *$tmp182;
return $tmp183;

}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* param0) {

// line 94
panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp184 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class);
panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp184, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp184)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
// unreffing REF($1:panda.collections.ImmutableArray.ImmutableArrayIterator<panda.collections.ImmutableArray.T>)
return ((panda$collections$Iterator*) $tmp184);

}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$Immutable* local2 = NULL;
// line 99
panda$core$MutableString* $tmp185 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp185);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
panda$core$MutableString* $tmp186 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
*(&local0) = $tmp185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
// unreffing REF($1:panda.core.MutableString)
// line 100
panda$core$MutableString* $tmp187 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp187, &$s188);
// line 101
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s189));
panda$core$String* $tmp190 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
*(&local1) = &$s191;
// line 102
ITable* $tmp192 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp192->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp192 = $tmp192->next;
}
$fn194 $tmp193 = $tmp192->methods[0];
panda$collections$Iterator* $tmp195 = $tmp193(((panda$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp196 = $tmp195->$class->itable;
while ($tmp196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp196 = $tmp196->next;
}
$fn198 $tmp197 = $tmp196->methods[0];
panda$core$Bit $tmp199 = $tmp197($tmp195);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block3; else goto block2;
block2:;
*(&local2) = ((panda$core$Immutable*) NULL);
ITable* $tmp201 = $tmp195->$class->itable;
while ($tmp201->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp201 = $tmp201->next;
}
$fn203 $tmp202 = $tmp201->methods[1];
panda$core$Object* $tmp204 = $tmp202($tmp195);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Immutable*) $tmp204)));
panda$core$Immutable* $tmp205 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
*(&local2) = ((panda$core$Immutable*) $tmp204);
// line 103
panda$core$MutableString* $tmp206 = *(&local0);
panda$core$String* $tmp207 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp206, $tmp207);
// line 104
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s208));
panda$core$String* $tmp209 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
*(&local1) = &$s210;
// line 105
panda$core$Immutable* $tmp211 = *(&local2);
panda$core$Bit $tmp212 = panda$core$Bit$init$builtin_bit(true);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block4; else goto block6;
block4:;
// line 106
panda$core$MutableString* $tmp214 = *(&local0);
panda$core$Immutable* $tmp215 = *(&local2);
panda$core$MutableString$append$panda$core$Object($tmp214, ((panda$core$Object*) $tmp215));
goto block5;
block6:;
// line 1
// line 109
panda$core$MutableString* $tmp216 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp216, &$s217);
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp204);
// unreffing REF($39:panda.collections.Iterator.T)
panda$core$Immutable* $tmp218 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
// unreffing v
*(&local2) = ((panda$core$Immutable*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing REF($28:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 112
panda$core$MutableString* $tmp219 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp219, &$s220);
// line 113
panda$core$MutableString* $tmp221 = *(&local0);
panda$core$String* $tmp222 = panda$core$MutableString$finish$R$panda$core$String($tmp221);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing REF($91:panda.core.String)
panda$core$String* $tmp223 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp224 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp222;

}

