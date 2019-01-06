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
    panda$core$Object* result = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p0, p1);

    return result;
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

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$ImmutableArray$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$Iterable, { panda$collections$ImmutableArray$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$ImmutableArray$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$CollectionView, { panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

static panda$core$String $s1;
panda$collections$ImmutableArray$class_type panda$collections$ImmutableArray$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$collections$ImmutableArray$_panda$collections$ListView, { panda$collections$ImmutableArray$convert$R$panda$core$String$shim, panda$collections$ImmutableArray$cleanup$shim, panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T$shim, panda$collections$ImmutableArray$get_count$R$panda$core$Int64$shim, panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT$shim} };

typedef panda$core$Int64 (*$fn10)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn21)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn47)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn76)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn131)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn150)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn176)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn180)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn185)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x54", 128, -4326513854706852849, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 20, -475546342680384290, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* param0) {

// line 39
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->_count;
*$tmp3 = $tmp2;
// line 40
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
int64_t $tmp5 = $tmp4.value;
panda$core$Object** $tmp6 = ((panda$core$Object**) pandaZAlloc($tmp5 * 8));
panda$core$Object*** $tmp7 = &param0->data;
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
panda$core$Object** $tmp16 = ((panda$core$Object**) pandaZAlloc($tmp15 * 8));
panda$core$Object*** $tmp17 = &param0->data;
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
panda$core$Object*** $tmp41 = &param0->data;
panda$core$Object** $tmp42 = *$tmp41;
panda$core$Int64 $tmp43 = *(&local0);
panda$core$Int64 $tmp44 = *(&local0);
ITable* $tmp45 = param1->$class->itable;
while ($tmp45->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
panda$core$Object* $tmp48 = $tmp46(param1, $tmp44);
int64_t $tmp49 = $tmp43.value;
panda$core$Object* $tmp50 = $tmp42[$tmp49];
panda$core$Panda$unref$panda$core$Object$Q($tmp50);
panda$core$Panda$ref$panda$core$Object$Q($tmp48);
$tmp42[$tmp49] = $tmp48;
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
void panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64(panda$collections$ImmutableArray* param0, panda$core$Object** param1, panda$core$Int64 param2) {

// line 53
panda$core$Object*** $tmp71 = &param0->data;
*$tmp71 = param1;
// line 54
panda$core$Int64* $tmp72 = &param0->_count;
*$tmp72 = param2;
return;

}
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* param0) {

panda$core$Int64 local0;
// line 59
panda$core$Int64 $tmp73 = (panda$core$Int64) {0};
ITable* $tmp74 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp74->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp74 = $tmp74->next;
}
$fn76 $tmp75 = $tmp74->methods[0];
panda$core$Int64 $tmp77 = $tmp75(((panda$collections$CollectionView*) param0));
panda$core$Bit $tmp78 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp79 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp73, $tmp77, $tmp78);
panda$core$Int64 $tmp80 = $tmp79.min;
*(&local0) = $tmp80;
panda$core$Int64 $tmp81 = $tmp79.max;
panda$core$Bit $tmp82 = $tmp79.inclusive;
bool $tmp83 = $tmp82.value;
panda$core$Int64 $tmp84 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp85 = panda$core$Int64$convert$R$panda$core$UInt64($tmp84);
if ($tmp83) goto block4; else goto block5;
block4:;
int64_t $tmp86 = $tmp80.value;
int64_t $tmp87 = $tmp81.value;
bool $tmp88 = $tmp86 <= $tmp87;
panda$core$Bit $tmp89 = (panda$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block1; else goto block2;
block5:;
int64_t $tmp91 = $tmp80.value;
int64_t $tmp92 = $tmp81.value;
bool $tmp93 = $tmp91 < $tmp92;
panda$core$Bit $tmp94 = (panda$core$Bit) {$tmp93};
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block1; else goto block2;
block1:;
// line 60
panda$core$Object*** $tmp96 = &param0->data;
panda$core$Object** $tmp97 = *$tmp96;
panda$core$Int64 $tmp98 = *(&local0);
int64_t $tmp99 = $tmp98.value;
panda$core$Object* $tmp100 = $tmp97[$tmp99];
panda$core$Panda$unref$panda$core$Object$Q($tmp100);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) NULL));
$tmp97[$tmp99] = ((panda$core$Object*) NULL);
goto block3;
block3:;
panda$core$Int64 $tmp101 = *(&local0);
int64_t $tmp102 = $tmp81.value;
int64_t $tmp103 = $tmp101.value;
int64_t $tmp104 = $tmp102 - $tmp103;
panda$core$Int64 $tmp105 = (panda$core$Int64) {$tmp104};
panda$core$UInt64 $tmp106 = panda$core$Int64$convert$R$panda$core$UInt64($tmp105);
if ($tmp83) goto block7; else goto block8;
block7:;
uint64_t $tmp107 = $tmp106.value;
uint64_t $tmp108 = $tmp85.value;
bool $tmp109 = $tmp107 >= $tmp108;
panda$core$Bit $tmp110 = (panda$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block6; else goto block2;
block8:;
uint64_t $tmp112 = $tmp106.value;
uint64_t $tmp113 = $tmp85.value;
bool $tmp114 = $tmp112 > $tmp113;
panda$core$Bit $tmp115 = (panda$core$Bit) {$tmp114};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block6; else goto block2;
block6:;
int64_t $tmp117 = $tmp101.value;
int64_t $tmp118 = $tmp84.value;
int64_t $tmp119 = $tmp117 + $tmp118;
panda$core$Int64 $tmp120 = (panda$core$Int64) {$tmp119};
*(&local0) = $tmp120;
goto block1;
block2:;
// line 62
panda$core$Object*** $tmp121 = &param0->data;
panda$core$Object** $tmp122 = *$tmp121;
pandaFree($tmp122);
// line 58
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
return;

}
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Int64 $tmp123 = (panda$core$Int64) {0};
int64_t $tmp124 = param1.value;
int64_t $tmp125 = $tmp123.value;
bool $tmp126 = $tmp124 >= $tmp125;
panda$core$Bit $tmp127 = (panda$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block1; else goto block2;
block1:;
ITable* $tmp129 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp129->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp129 = $tmp129->next;
}
$fn131 $tmp130 = $tmp129->methods[0];
panda$core$Int64 $tmp132 = $tmp130(((panda$collections$CollectionView*) param0));
int64_t $tmp133 = param1.value;
int64_t $tmp134 = $tmp132.value;
bool $tmp135 = $tmp133 < $tmp134;
panda$core$Bit $tmp136 = (panda$core$Bit) {$tmp135};
*(&local0) = $tmp136;
goto block3;
block2:;
*(&local0) = $tmp127;
goto block3;
block3:;
panda$core$Bit $tmp137 = *(&local0);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp139 = (panda$core$Int64) {66};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s140, $tmp139, &$s141);
abort(); // unreachable
block4:;
// line 67
panda$core$Int64 $tmp142 = (panda$core$Int64) {0};
int64_t $tmp143 = param1.value;
int64_t $tmp144 = $tmp142.value;
bool $tmp145 = $tmp143 >= $tmp144;
panda$core$Bit $tmp146 = (panda$core$Bit) {$tmp145};
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block6; else goto block7;
block6:;
ITable* $tmp148 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp148->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[0];
panda$core$Int64 $tmp151 = $tmp149(((panda$collections$CollectionView*) param0));
int64_t $tmp152 = param1.value;
int64_t $tmp153 = $tmp151.value;
bool $tmp154 = $tmp152 < $tmp153;
panda$core$Bit $tmp155 = (panda$core$Bit) {$tmp154};
*(&local1) = $tmp155;
goto block8;
block7:;
*(&local1) = $tmp146;
goto block8;
block8:;
panda$core$Bit $tmp156 = *(&local1);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp158 = (panda$core$Int64) {67};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s159, $tmp158);
abort(); // unreachable
block9:;
// line 68
panda$core$Object*** $tmp160 = &param0->data;
panda$core$Object** $tmp161 = *$tmp160;
int64_t $tmp162 = param1.value;
panda$core$Object* $tmp163 = $tmp161[$tmp162];
panda$core$Panda$ref$panda$core$Object$Q($tmp163);
return $tmp163;

}
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* param0) {

// line 73
panda$core$Int64* $tmp164 = &param0->_count;
panda$core$Int64 $tmp165 = *$tmp164;
return $tmp165;

}
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* param0) {

// line 78
panda$collections$ImmutableArray$ImmutableArrayIterator* $tmp166 = (panda$collections$ImmutableArray$ImmutableArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ImmutableArray$ImmutableArrayIterator$class);
panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp166, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp166)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
// unreffing REF($1:panda.collections.ImmutableArray.ImmutableArrayIterator<panda.collections.ImmutableArray.T>)
return ((panda$collections$Iterator*) $tmp166);

}
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$Object* local2 = NULL;
// line 83
panda$core$MutableString* $tmp167 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp167);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
panda$core$MutableString* $tmp168 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
*(&local0) = $tmp167;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// unreffing REF($1:panda.core.MutableString)
// line 84
panda$core$MutableString* $tmp169 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp169, &$s170);
// line 85
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s171));
panda$core$String* $tmp172 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
*(&local1) = &$s173;
// line 86
ITable* $tmp174 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp174->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp174 = $tmp174->next;
}
$fn176 $tmp175 = $tmp174->methods[0];
panda$collections$Iterator* $tmp177 = $tmp175(((panda$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp178 = $tmp177->$class->itable;
while ($tmp178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
panda$core$Bit $tmp181 = $tmp179($tmp177);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block3; else goto block2;
block2:;
*(&local2) = ((panda$core$Object*) NULL);
ITable* $tmp183 = $tmp177->$class->itable;
while ($tmp183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp183 = $tmp183->next;
}
$fn185 $tmp184 = $tmp183->methods[1];
panda$core$Object* $tmp186 = $tmp184($tmp177);
panda$core$Panda$ref$panda$core$Object$Q($tmp186);
panda$core$Object* $tmp187 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q($tmp187);
*(&local2) = $tmp186;
// line 87
panda$core$MutableString* $tmp188 = *(&local0);
panda$core$String* $tmp189 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp188, $tmp189);
// line 88
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s190));
panda$core$String* $tmp191 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
*(&local1) = &$s192;
// line 89
panda$core$Object* $tmp193 = *(&local2);
panda$core$Bit $tmp194 = panda$core$Bit$init$builtin_bit(true);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block4; else goto block6;
block4:;
// line 90
panda$core$MutableString* $tmp196 = *(&local0);
panda$core$Object* $tmp197 = *(&local2);
panda$core$MutableString$append$panda$core$Object($tmp196, $tmp197);
goto block5;
block6:;
// line 1
// line 93
panda$core$MutableString* $tmp198 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp198, &$s199);
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp186);
// unreffing REF($39:panda.collections.Iterator.T)
panda$core$Object* $tmp200 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q($tmp200);
// unreffing v
*(&local2) = ((panda$core$Object*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing REF($28:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 96
panda$core$MutableString* $tmp201 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp201, &$s202);
// line 97
panda$core$MutableString* $tmp203 = *(&local0);
panda$core$String* $tmp204 = panda$core$MutableString$finish$R$panda$core$String($tmp203);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing REF($91:panda.core.String)
panda$core$String* $tmp205 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp206 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp204;

}

