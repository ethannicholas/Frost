#include "panda/collections/ListView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt64.h"
#include "panda/collections/Array.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/MutableMethod.h"
#include "panda/collections/ListView/ListIterator.h"

__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ListView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$ListView$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ListView$_panda$collections$Iterable, { NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sorted$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$ListView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ListView$_panda$collections$ListView, { NULL, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

static panda$core$String $s1;
panda$collections$ListView$class_type panda$collections$ListView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ListView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sorted$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

typedef panda$core$Int64 (*$fn14)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn28)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn51)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn65)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn126)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn164)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn180)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Int64 (*$fn194)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn208)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn231)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn245)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn273)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn293)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn316)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn344)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn366)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn378)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn386)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn390)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn395)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn404)(panda$core$Object*);
typedef panda$core$Bit (*$fn406)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn474)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn476)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Int64 (*$fn529)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 1346634265727302291, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 14, -973627211574904282, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 158, -7687465988945033711, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 14, -973627211574904282, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 184, 4461115013712087099, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 14, -973627211574904282, NULL };

panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$Range$LTpanda$core$Int64$GT param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$Bit local5;
panda$core$Bit local6;
panda$core$Bit local7;
panda$core$Bit local8;
panda$core$Int64 local9;
panda$core$Int64 local10;
panda$core$Object** local11;
panda$core$Int64 local12;
panda$core$Int64 $tmp2 = param1.min;
panda$core$Int64 $tmp3 = (panda$core$Int64) {0};
int64_t $tmp4 = $tmp2.value;
int64_t $tmp5 = $tmp3.value;
bool $tmp6 = $tmp4 >= $tmp5;
panda$core$Bit $tmp7 = (panda$core$Bit) {$tmp6};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
panda$core$Bit $tmp9 = param1.inclusive;
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block4; else goto block5;
block4:;
panda$core$Int64 $tmp11 = param1.min;
ITable* $tmp12 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp12->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
panda$core$Int64 $tmp15 = $tmp13(((panda$collections$CollectionView*) param0));
int64_t $tmp16 = $tmp11.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 < $tmp17;
panda$core$Bit $tmp19 = (panda$core$Bit) {$tmp18};
*(&local4) = $tmp19;
goto block6;
block5:;
*(&local4) = $tmp9;
goto block6;
block6:;
panda$core$Bit $tmp20 = *(&local4);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
*(&local3) = $tmp20;
goto block9;
block8:;
panda$core$Bit $tmp22 = param1.inclusive;
panda$core$Bit $tmp23 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block10; else goto block11;
block10:;
panda$core$Int64 $tmp25 = param1.min;
ITable* $tmp26 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp26->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[0];
panda$core$Int64 $tmp29 = $tmp27(((panda$collections$CollectionView*) param0));
int64_t $tmp30 = $tmp25.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 <= $tmp31;
panda$core$Bit $tmp33 = (panda$core$Bit) {$tmp32};
*(&local5) = $tmp33;
goto block12;
block11:;
*(&local5) = $tmp23;
goto block12;
block12:;
panda$core$Bit $tmp34 = *(&local5);
*(&local3) = $tmp34;
goto block9;
block9:;
panda$core$Bit $tmp35 = *(&local3);
*(&local2) = $tmp35;
goto block3;
block2:;
*(&local2) = $tmp7;
goto block3;
block3:;
panda$core$Bit $tmp36 = *(&local2);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block13; else goto block14;
block13:;
panda$core$Int64 $tmp38 = param1.max;
panda$core$Int64 $tmp39 = (panda$core$Int64) {0};
int64_t $tmp40 = $tmp38.value;
int64_t $tmp41 = $tmp39.value;
bool $tmp42 = $tmp40 >= $tmp41;
panda$core$Bit $tmp43 = (panda$core$Bit) {$tmp42};
*(&local1) = $tmp43;
goto block15;
block14:;
*(&local1) = $tmp36;
goto block15;
block15:;
panda$core$Bit $tmp44 = *(&local1);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block16; else goto block17;
block16:;
panda$core$Bit $tmp46 = param1.inclusive;
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block19; else goto block20;
block19:;
panda$core$Int64 $tmp48 = param1.max;
ITable* $tmp49 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp49->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp49 = $tmp49->next;
}
$fn51 $tmp50 = $tmp49->methods[0];
panda$core$Int64 $tmp52 = $tmp50(((panda$collections$CollectionView*) param0));
int64_t $tmp53 = $tmp48.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 < $tmp54;
panda$core$Bit $tmp56 = (panda$core$Bit) {$tmp55};
*(&local7) = $tmp56;
goto block21;
block20:;
*(&local7) = $tmp46;
goto block21;
block21:;
panda$core$Bit $tmp57 = *(&local7);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block22; else goto block23;
block22:;
*(&local6) = $tmp57;
goto block24;
block23:;
panda$core$Bit $tmp59 = param1.inclusive;
panda$core$Bit $tmp60 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp59);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block25; else goto block26;
block25:;
panda$core$Int64 $tmp62 = param1.max;
ITable* $tmp63 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp63->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[0];
panda$core$Int64 $tmp66 = $tmp64(((panda$collections$CollectionView*) param0));
int64_t $tmp67 = $tmp62.value;
int64_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 <= $tmp68;
panda$core$Bit $tmp70 = (panda$core$Bit) {$tmp69};
*(&local8) = $tmp70;
goto block27;
block26:;
*(&local8) = $tmp60;
goto block27;
block27:;
panda$core$Bit $tmp71 = *(&local8);
*(&local6) = $tmp71;
goto block24;
block24:;
panda$core$Bit $tmp72 = *(&local6);
*(&local0) = $tmp72;
goto block18;
block17:;
*(&local0) = $tmp44;
goto block18;
block18:;
panda$core$Bit $tmp73 = *(&local0);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp75 = (panda$core$Int64) {52};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s76, $tmp75, &$s77);
abort(); // unreachable
block28:;
// line 53
panda$core$Int64 $tmp78 = param1.max;
*(&local9) = $tmp78;
// line 54
panda$core$Bit $tmp79 = param1.inclusive;
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block30; else goto block31;
block30:;
// line 55
panda$core$Int64 $tmp81 = *(&local9);
panda$core$Int64 $tmp82 = (panda$core$Int64) {1};
int64_t $tmp83 = $tmp81.value;
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83 + $tmp84;
panda$core$Int64 $tmp86 = (panda$core$Int64) {$tmp85};
*(&local9) = $tmp86;
goto block31;
block31:;
// line 57
panda$core$Int64 $tmp87 = *(&local9);
panda$core$Int64 $tmp88 = param1.min;
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 - $tmp90;
panda$core$Int64 $tmp92 = (panda$core$Int64) {$tmp91};
*(&local10) = $tmp92;
// line 58
panda$core$Int64 $tmp93 = *(&local10);
int64_t $tmp94 = $tmp93.value;
panda$core$Object** $tmp95 = ((panda$core$Object**) pandaZAlloc($tmp94 * 8));
*(&local11) = $tmp95;
// line 59
panda$core$Int64 $tmp96 = (panda$core$Int64) {0};
panda$core$Int64 $tmp97 = *(&local10);
panda$core$Bit $tmp98 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp99 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp96, $tmp97, $tmp98);
panda$core$Int64 $tmp100 = $tmp99.min;
*(&local12) = $tmp100;
panda$core$Int64 $tmp101 = $tmp99.max;
panda$core$Bit $tmp102 = $tmp99.inclusive;
bool $tmp103 = $tmp102.value;
panda$core$Int64 $tmp104 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp105 = panda$core$Int64$convert$R$panda$core$UInt64($tmp104);
if ($tmp103) goto block35; else goto block36;
block35:;
int64_t $tmp106 = $tmp100.value;
int64_t $tmp107 = $tmp101.value;
bool $tmp108 = $tmp106 <= $tmp107;
panda$core$Bit $tmp109 = (panda$core$Bit) {$tmp108};
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block32; else goto block33;
block36:;
int64_t $tmp111 = $tmp100.value;
int64_t $tmp112 = $tmp101.value;
bool $tmp113 = $tmp111 < $tmp112;
panda$core$Bit $tmp114 = (panda$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block32; else goto block33;
block32:;
// line 60
panda$core$Object** $tmp116 = *(&local11);
panda$core$Int64 $tmp117 = *(&local12);
panda$core$Int64 $tmp118 = param1.min;
panda$core$Int64 $tmp119 = *(&local12);
int64_t $tmp120 = $tmp118.value;
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120 + $tmp121;
panda$core$Int64 $tmp123 = (panda$core$Int64) {$tmp122};
ITable* $tmp124 = param0->$class->itable;
while ($tmp124->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[0];
panda$core$Object* $tmp127 = $tmp125(param0, $tmp123);
int64_t $tmp128 = $tmp117.value;
panda$core$Object* $tmp129 = $tmp116[$tmp128];
panda$core$Panda$unref$panda$core$Object$Q($tmp129);
panda$core$Panda$ref$panda$core$Object$Q($tmp127);
$tmp116[$tmp128] = $tmp127;
panda$core$Panda$unref$panda$core$Object$Q($tmp127);
// unreffing REF($183:panda.collections.ListView.T)
goto block34;
block34:;
panda$core$Int64 $tmp130 = *(&local12);
int64_t $tmp131 = $tmp101.value;
int64_t $tmp132 = $tmp130.value;
int64_t $tmp133 = $tmp131 - $tmp132;
panda$core$Int64 $tmp134 = (panda$core$Int64) {$tmp133};
panda$core$UInt64 $tmp135 = panda$core$Int64$convert$R$panda$core$UInt64($tmp134);
if ($tmp103) goto block38; else goto block39;
block38:;
uint64_t $tmp136 = $tmp135.value;
uint64_t $tmp137 = $tmp105.value;
bool $tmp138 = $tmp136 >= $tmp137;
panda$core$Bit $tmp139 = (panda$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block37; else goto block33;
block39:;
uint64_t $tmp141 = $tmp135.value;
uint64_t $tmp142 = $tmp105.value;
bool $tmp143 = $tmp141 > $tmp142;
panda$core$Bit $tmp144 = (panda$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block37; else goto block33;
block37:;
int64_t $tmp146 = $tmp130.value;
int64_t $tmp147 = $tmp104.value;
int64_t $tmp148 = $tmp146 + $tmp147;
panda$core$Int64 $tmp149 = (panda$core$Int64) {$tmp148};
*(&local12) = $tmp149;
goto block32;
block33:;
// line 62
panda$collections$Array* $tmp150 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Object** $tmp151 = *(&local11);
panda$core$Int64 $tmp152 = *(&local10);
panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp150, $tmp151, $tmp152);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp150)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// unreffing REF($221:panda.collections.Array<panda.collections.ListView.T>)
return ((panda$collections$ListView*) $tmp150);

}
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$Range$LTpanda$core$Int64$Q$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 76
// line 77
panda$core$Int64$nullable $tmp153 = param1.min;
panda$core$Bit $tmp154 = panda$core$Bit$init$builtin_bit($tmp153.nonnull);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block1; else goto block3;
block1:;
// line 78
panda$core$Int64$nullable $tmp156 = param1.min;
*(&local0) = ((panda$core$Int64) $tmp156.value);
goto block2;
block3:;
// line 1
// line 81
panda$core$Int64 $tmp157 = (panda$core$Int64) {0};
*(&local0) = $tmp157;
goto block2;
block2:;
// line 84
// line 85
panda$core$Int64$nullable $tmp158 = param1.max;
panda$core$Bit $tmp159 = panda$core$Bit$init$builtin_bit($tmp158.nonnull);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block4; else goto block6;
block4:;
// line 86
panda$core$Int64$nullable $tmp161 = param1.max;
*(&local1) = ((panda$core$Int64) $tmp161.value);
goto block5;
block6:;
// line 1
// line 89
ITable* $tmp162 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp162->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[0];
panda$core$Int64 $tmp165 = $tmp163(((panda$collections$CollectionView*) param0));
*(&local1) = $tmp165;
// line 90
panda$core$Bit $tmp166 = param1.inclusive;
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block7; else goto block8;
block7:;
// line 91
panda$core$Int64 $tmp168 = *(&local1);
panda$core$Int64 $tmp169 = (panda$core$Int64) {1};
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169.value;
int64_t $tmp172 = $tmp170 - $tmp171;
panda$core$Int64 $tmp173 = (panda$core$Int64) {$tmp172};
*(&local1) = $tmp173;
goto block8;
block8:;
goto block5;
block5:;
// line 94
panda$core$Int64 $tmp174 = *(&local0);
panda$core$Int64 $tmp175 = *(&local1);
panda$core$Bit $tmp176 = param1.inclusive;
panda$core$Range$LTpanda$core$Int64$GT $tmp177 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp174, $tmp175, $tmp176);
ITable* $tmp178 = param0->$class->itable;
while ($tmp178->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[1];
panda$collections$ListView* $tmp181 = $tmp179(param0, $tmp177);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing REF($56:panda.collections.ListView<panda.collections.ListView.T>)
return $tmp181;

}
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
panda$core$Bit local5;
panda$core$Bit local6;
panda$core$Bit local7;
panda$core$Bit local8;
panda$core$Int64 local9;
panda$core$Int64 local10;
panda$core$Int64 local11;
panda$collections$Array* local12 = NULL;
panda$core$Bit local13;
panda$core$Bit local14;
panda$core$Bit local15;
panda$core$Int64$nullable $tmp182 = param1.start;
panda$core$Int64 $tmp183 = (panda$core$Int64) {0};
int64_t $tmp184 = ((panda$core$Int64) $tmp182.value).value;
int64_t $tmp185 = $tmp183.value;
bool $tmp186 = $tmp184 >= $tmp185;
panda$core$Bit $tmp187 = (panda$core$Bit) {$tmp186};
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block1; else goto block2;
block1:;
panda$core$Bit $tmp189 = param1.inclusive;
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block4; else goto block5;
block4:;
panda$core$Int64$nullable $tmp191 = param1.start;
ITable* $tmp192 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp192->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp192 = $tmp192->next;
}
$fn194 $tmp193 = $tmp192->methods[0];
panda$core$Int64 $tmp195 = $tmp193(((panda$collections$CollectionView*) param0));
int64_t $tmp196 = ((panda$core$Int64) $tmp191.value).value;
int64_t $tmp197 = $tmp195.value;
bool $tmp198 = $tmp196 < $tmp197;
panda$core$Bit $tmp199 = (panda$core$Bit) {$tmp198};
*(&local4) = $tmp199;
goto block6;
block5:;
*(&local4) = $tmp189;
goto block6;
block6:;
panda$core$Bit $tmp200 = *(&local4);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block7; else goto block8;
block7:;
*(&local3) = $tmp200;
goto block9;
block8:;
panda$core$Bit $tmp202 = param1.inclusive;
panda$core$Bit $tmp203 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block10; else goto block11;
block10:;
panda$core$Int64$nullable $tmp205 = param1.start;
ITable* $tmp206 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp206->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp206 = $tmp206->next;
}
$fn208 $tmp207 = $tmp206->methods[0];
panda$core$Int64 $tmp209 = $tmp207(((panda$collections$CollectionView*) param0));
int64_t $tmp210 = ((panda$core$Int64) $tmp205.value).value;
int64_t $tmp211 = $tmp209.value;
bool $tmp212 = $tmp210 <= $tmp211;
panda$core$Bit $tmp213 = (panda$core$Bit) {$tmp212};
*(&local5) = $tmp213;
goto block12;
block11:;
*(&local5) = $tmp203;
goto block12;
block12:;
panda$core$Bit $tmp214 = *(&local5);
*(&local3) = $tmp214;
goto block9;
block9:;
panda$core$Bit $tmp215 = *(&local3);
*(&local2) = $tmp215;
goto block3;
block2:;
*(&local2) = $tmp187;
goto block3;
block3:;
panda$core$Bit $tmp216 = *(&local2);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block13; else goto block14;
block13:;
panda$core$Int64$nullable $tmp218 = param1.end;
panda$core$Int64 $tmp219 = (panda$core$Int64) {0};
int64_t $tmp220 = ((panda$core$Int64) $tmp218.value).value;
int64_t $tmp221 = $tmp219.value;
bool $tmp222 = $tmp220 >= $tmp221;
panda$core$Bit $tmp223 = (panda$core$Bit) {$tmp222};
*(&local1) = $tmp223;
goto block15;
block14:;
*(&local1) = $tmp216;
goto block15;
block15:;
panda$core$Bit $tmp224 = *(&local1);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block16; else goto block17;
block16:;
panda$core$Bit $tmp226 = param1.inclusive;
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block19; else goto block20;
block19:;
panda$core$Int64$nullable $tmp228 = param1.end;
ITable* $tmp229 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp229->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp229 = $tmp229->next;
}
$fn231 $tmp230 = $tmp229->methods[0];
panda$core$Int64 $tmp232 = $tmp230(((panda$collections$CollectionView*) param0));
int64_t $tmp233 = ((panda$core$Int64) $tmp228.value).value;
int64_t $tmp234 = $tmp232.value;
bool $tmp235 = $tmp233 < $tmp234;
panda$core$Bit $tmp236 = (panda$core$Bit) {$tmp235};
*(&local7) = $tmp236;
goto block21;
block20:;
*(&local7) = $tmp226;
goto block21;
block21:;
panda$core$Bit $tmp237 = *(&local7);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block22; else goto block23;
block22:;
*(&local6) = $tmp237;
goto block24;
block23:;
panda$core$Bit $tmp239 = param1.inclusive;
panda$core$Bit $tmp240 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp239);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block25; else goto block26;
block25:;
panda$core$Int64$nullable $tmp242 = param1.end;
ITable* $tmp243 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp243->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp243 = $tmp243->next;
}
$fn245 $tmp244 = $tmp243->methods[0];
panda$core$Int64 $tmp246 = $tmp244(((panda$collections$CollectionView*) param0));
int64_t $tmp247 = ((panda$core$Int64) $tmp242.value).value;
int64_t $tmp248 = $tmp246.value;
bool $tmp249 = $tmp247 <= $tmp248;
panda$core$Bit $tmp250 = (panda$core$Bit) {$tmp249};
*(&local8) = $tmp250;
goto block27;
block26:;
*(&local8) = $tmp240;
goto block27;
block27:;
panda$core$Bit $tmp251 = *(&local8);
*(&local6) = $tmp251;
goto block24;
block24:;
panda$core$Bit $tmp252 = *(&local6);
*(&local0) = $tmp252;
goto block18;
block17:;
*(&local0) = $tmp224;
goto block18;
block18:;
panda$core$Bit $tmp253 = *(&local0);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp255 = (panda$core$Int64) {106};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s256, $tmp255, &$s257);
abort(); // unreachable
block28:;
// line 107
panda$core$Int64 $tmp258 = param1.step;
*(&local9) = $tmp258;
// line 109
// line 110
panda$core$Int64$nullable $tmp259 = param1.start;
panda$core$Bit $tmp260 = panda$core$Bit$init$builtin_bit($tmp259.nonnull);
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block30; else goto block32;
block30:;
// line 111
panda$core$Int64$nullable $tmp262 = param1.start;
*(&local10) = ((panda$core$Int64) $tmp262.value);
goto block31;
block32:;
// line 113
panda$core$Int64 $tmp263 = *(&local9);
panda$core$Int64 $tmp264 = (panda$core$Int64) {0};
int64_t $tmp265 = $tmp263.value;
int64_t $tmp266 = $tmp264.value;
bool $tmp267 = $tmp265 > $tmp266;
panda$core$Bit $tmp268 = (panda$core$Bit) {$tmp267};
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block33; else goto block35;
block33:;
// line 114
panda$core$Int64 $tmp270 = (panda$core$Int64) {0};
*(&local10) = $tmp270;
goto block34;
block35:;
// line 1
// line 117
ITable* $tmp271 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp271->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[0];
panda$core$Int64 $tmp274 = $tmp272(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp275 = (panda$core$Int64) {1};
int64_t $tmp276 = $tmp274.value;
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276 - $tmp277;
panda$core$Int64 $tmp279 = (panda$core$Int64) {$tmp278};
*(&local10) = $tmp279;
goto block34;
block34:;
goto block31;
block31:;
// line 120
// line 121
panda$core$Int64$nullable $tmp280 = param1.end;
panda$core$Bit $tmp281 = panda$core$Bit$init$builtin_bit($tmp280.nonnull);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block36; else goto block38;
block36:;
// line 122
panda$core$Int64$nullable $tmp283 = param1.end;
*(&local11) = ((panda$core$Int64) $tmp283.value);
goto block37;
block38:;
// line 124
panda$core$Int64 $tmp284 = *(&local9);
panda$core$Int64 $tmp285 = (panda$core$Int64) {0};
int64_t $tmp286 = $tmp284.value;
int64_t $tmp287 = $tmp285.value;
bool $tmp288 = $tmp286 > $tmp287;
panda$core$Bit $tmp289 = (panda$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block39; else goto block41;
block39:;
// line 125
ITable* $tmp291 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp291->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp291 = $tmp291->next;
}
$fn293 $tmp292 = $tmp291->methods[0];
panda$core$Int64 $tmp294 = $tmp292(((panda$collections$CollectionView*) param0));
*(&local11) = $tmp294;
goto block40;
block41:;
// line 1
// line 128
panda$core$Int64 $tmp295 = (panda$core$Int64) {0};
*(&local11) = $tmp295;
goto block40;
block40:;
goto block37;
block37:;
// line 131
panda$collections$Array* $tmp296 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp296);
*(&local12) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
panda$collections$Array* $tmp297 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
*(&local12) = $tmp296;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
// unreffing REF($199:panda.collections.Array<panda.collections.ListView.T>)
// line 132
panda$core$Int64 $tmp298 = param1.step;
panda$core$Int64 $tmp299 = (panda$core$Int64) {0};
int64_t $tmp300 = $tmp298.value;
int64_t $tmp301 = $tmp299.value;
bool $tmp302 = $tmp300 > $tmp301;
panda$core$Bit $tmp303 = (panda$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block42; else goto block44;
block42:;
// line 133
goto block45;
block45:;
panda$core$Int64 $tmp305 = *(&local10);
panda$core$Int64 $tmp306 = *(&local11);
int64_t $tmp307 = $tmp305.value;
int64_t $tmp308 = $tmp306.value;
bool $tmp309 = $tmp307 < $tmp308;
panda$core$Bit $tmp310 = (panda$core$Bit) {$tmp309};
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block46; else goto block47;
block46:;
// line 134
panda$collections$Array* $tmp312 = *(&local12);
panda$core$Int64 $tmp313 = *(&local10);
ITable* $tmp314 = param0->$class->itable;
while ($tmp314->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[0];
panda$core$Object* $tmp317 = $tmp315(param0, $tmp313);
panda$collections$Array$add$panda$collections$Array$T($tmp312, $tmp317);
panda$core$Panda$unref$panda$core$Object$Q($tmp317);
// unreffing REF($237:panda.collections.ListView.T)
// line 135
panda$core$Int64 $tmp318 = *(&local10);
panda$core$Int64 $tmp319 = *(&local9);
int64_t $tmp320 = $tmp318.value;
int64_t $tmp321 = $tmp319.value;
int64_t $tmp322 = $tmp320 + $tmp321;
panda$core$Int64 $tmp323 = (panda$core$Int64) {$tmp322};
*(&local10) = $tmp323;
goto block45;
block47:;
goto block43;
block44:;
// line 1
// line 139
panda$core$Int64 $tmp324 = param1.step;
panda$core$Int64 $tmp325 = (panda$core$Int64) {0};
int64_t $tmp326 = $tmp324.value;
int64_t $tmp327 = $tmp325.value;
bool $tmp328 = $tmp326 < $tmp327;
panda$core$Bit $tmp329 = (panda$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block48; else goto block49;
block49:;
panda$core$Int64 $tmp331 = (panda$core$Int64) {139};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s332, $tmp331);
abort(); // unreachable
block48:;
// line 140
goto block50;
block50:;
panda$core$Int64 $tmp333 = *(&local10);
panda$core$Int64 $tmp334 = *(&local11);
int64_t $tmp335 = $tmp333.value;
int64_t $tmp336 = $tmp334.value;
bool $tmp337 = $tmp335 > $tmp336;
panda$core$Bit $tmp338 = (panda$core$Bit) {$tmp337};
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block51; else goto block52;
block51:;
// line 141
panda$collections$Array* $tmp340 = *(&local12);
panda$core$Int64 $tmp341 = *(&local10);
ITable* $tmp342 = param0->$class->itable;
while ($tmp342->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp342 = $tmp342->next;
}
$fn344 $tmp343 = $tmp342->methods[0];
panda$core$Object* $tmp345 = $tmp343(param0, $tmp341);
panda$collections$Array$add$panda$collections$Array$T($tmp340, $tmp345);
panda$core$Panda$unref$panda$core$Object$Q($tmp345);
// unreffing REF($282:panda.collections.ListView.T)
// line 142
panda$core$Int64 $tmp346 = *(&local10);
panda$core$Int64 $tmp347 = *(&local9);
int64_t $tmp348 = $tmp346.value;
int64_t $tmp349 = $tmp347.value;
int64_t $tmp350 = $tmp348 + $tmp349;
panda$core$Int64 $tmp351 = (panda$core$Int64) {$tmp350};
*(&local10) = $tmp351;
goto block50;
block52:;
goto block43;
block43:;
// line 145
panda$core$Bit $tmp352 = param1.inclusive;
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block55; else goto block56;
block55:;
*(&local15) = $tmp352;
goto block57;
block56:;
panda$core$Int64$nullable $tmp354 = param1.end;
panda$core$Bit $tmp355 = panda$core$Bit$init$builtin_bit(!$tmp354.nonnull);
*(&local15) = $tmp355;
goto block57;
block57:;
panda$core$Bit $tmp356 = *(&local15);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block58; else goto block59;
block58:;
panda$core$Int64 $tmp358 = *(&local10);
panda$core$Int64 $tmp359 = *(&local11);
panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp358, $tmp359);
*(&local14) = $tmp360;
goto block60;
block59:;
*(&local14) = $tmp356;
goto block60;
block60:;
panda$core$Bit $tmp361 = *(&local14);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block61; else goto block62;
block61:;
panda$core$Int64 $tmp363 = *(&local11);
ITable* $tmp364 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp364->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp364 = $tmp364->next;
}
$fn366 $tmp365 = $tmp364->methods[0];
panda$core$Int64 $tmp367 = $tmp365(((panda$collections$CollectionView*) param0));
int64_t $tmp368 = $tmp363.value;
int64_t $tmp369 = $tmp367.value;
bool $tmp370 = $tmp368 < $tmp369;
panda$core$Bit $tmp371 = (panda$core$Bit) {$tmp370};
*(&local13) = $tmp371;
goto block63;
block62:;
*(&local13) = $tmp361;
goto block63;
block63:;
panda$core$Bit $tmp372 = *(&local13);
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block53; else goto block54;
block53:;
// line 146
panda$collections$Array* $tmp374 = *(&local12);
panda$core$Int64 $tmp375 = *(&local10);
ITable* $tmp376 = param0->$class->itable;
while ($tmp376->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp376 = $tmp376->next;
}
$fn378 $tmp377 = $tmp376->methods[0];
panda$core$Object* $tmp379 = $tmp377(param0, $tmp375);
panda$collections$Array$add$panda$collections$Array$T($tmp374, $tmp379);
panda$core$Panda$unref$panda$core$Object$Q($tmp379);
// unreffing REF($343:panda.collections.ListView.T)
goto block54;
block54:;
// line 148
panda$collections$Array* $tmp380 = *(&local12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp380)));
panda$collections$Array* $tmp381 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
// unreffing result
*(&local12) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp380);

}
panda$collections$ListView* panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$MutableMethod* param1) {

panda$collections$Array* local0 = NULL;
panda$core$Object* local1 = NULL;
panda$core$Bit local2;
// line 157
panda$collections$Array* $tmp382 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp382);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
panda$collections$Array* $tmp383 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
*(&local0) = $tmp382;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
// unreffing REF($1:panda.collections.Array<panda.collections.ListView.T>)
// line 158
ITable* $tmp384 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp384->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp384 = $tmp384->next;
}
$fn386 $tmp385 = $tmp384->methods[0];
panda$collections$Iterator* $tmp387 = $tmp385(((panda$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp388 = $tmp387->$class->itable;
while ($tmp388->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp388 = $tmp388->next;
}
$fn390 $tmp389 = $tmp388->methods[0];
panda$core$Bit $tmp391 = $tmp389($tmp387);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block3; else goto block2;
block2:;
*(&local1) = ((panda$core$Object*) NULL);
ITable* $tmp393 = $tmp387->$class->itable;
while ($tmp393->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp393 = $tmp393->next;
}
$fn395 $tmp394 = $tmp393->methods[1];
panda$core$Object* $tmp396 = $tmp394($tmp387);
panda$core$Panda$ref$panda$core$Object$Q($tmp396);
panda$core$Object* $tmp397 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp397);
*(&local1) = $tmp396;
// line 159
panda$core$Object* $tmp398 = *(&local1);
panda$core$Int8** $tmp399 = &param1->pointer;
panda$core$Int8* $tmp400 = *$tmp399;
panda$core$Object** $tmp401 = &param1->target;
panda$core$Object* $tmp402 = *$tmp401;
bool $tmp403 = $tmp402 != ((panda$core$Object*) NULL);
if ($tmp403) goto block6; else goto block7;
block7:;
panda$core$Bit $tmp405 = (($fn404) $tmp400)($tmp398);
*(&local2) = $tmp405;
goto block8;
block6:;
panda$core$Bit $tmp407 = (($fn406) $tmp400)($tmp402, $tmp398);
*(&local2) = $tmp407;
goto block8;
block8:;
panda$core$Bit $tmp408 = *(&local2);
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block4; else goto block5;
block4:;
// line 160
panda$collections$Array* $tmp410 = *(&local0);
panda$core$Object* $tmp411 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp410, $tmp411);
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp396);
// unreffing REF($29:panda.collections.Iterator.T)
panda$core$Object* $tmp412 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp412);
// unreffing v
*(&local1) = ((panda$core$Object*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing REF($18:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 163
panda$collections$Array* $tmp413 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp413)));
panda$collections$Array* $tmp414 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp413);

}
panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0) {

// line 169
panda$collections$ListView$ListIterator* $tmp415 = (panda$collections$ListView$ListIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ListView$ListIterator$class);
panda$collections$ListView$ListIterator$init$panda$collections$ListView$LTpanda$collections$ListView$ListIterator$T$GT($tmp415, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp415)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
// unreffing REF($1:panda.collections.ListView.ListIterator<panda.collections.ListView.T>)
return ((panda$collections$Iterator*) $tmp415);

}
void panda$collections$ListView$swap$panda$collections$Array$LTpanda$collections$ListView$T$GT$panda$core$Int64$panda$core$Int64(panda$collections$Array* param0, panda$core$Int64 param1, panda$core$Int64 param2) {

panda$core$Object* local0 = NULL;
// line 175
panda$core$Object* $tmp416 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(param0, param1);
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Panda$ref$panda$core$Object$Q($tmp416);
panda$core$Object* $tmp417 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp417);
*(&local0) = $tmp416;
panda$core$Panda$unref$panda$core$Object$Q($tmp416);
// unreffing REF($2:panda.collections.Array.T)
// line 176
panda$core$Object* $tmp418 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(param0, param2);
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(param0, param1, $tmp418);
panda$core$Panda$unref$panda$core$Object$Q($tmp418);
// unreffing REF($17:panda.collections.Array.T)
// line 177
panda$core$Object* $tmp419 = *(&local0);
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(param0, param2, $tmp419);
panda$core$Object* $tmp420 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp420);
// unreffing tmp
*(&local0) = ((panda$core$Object*) NULL);
return;

}
void panda$collections$ListView$sort$panda$collections$Array$LTpanda$collections$ListView$T$GT$panda$core$Int64$panda$core$Int64$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$Array* param0, panda$core$Int64 param1, panda$core$Int64 param2, panda$core$MutableMethod* param3) {

panda$core$Int64 local0;
panda$core$Object* local1 = NULL;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Bit local4;
// line 184
int64_t $tmp421 = param1.value;
int64_t $tmp422 = param2.value;
bool $tmp423 = $tmp421 >= $tmp422;
panda$core$Bit $tmp424 = (panda$core$Bit) {$tmp423};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block1; else goto block2;
block1:;
// line 185
return;
block2:;
// line 187
int64_t $tmp426 = param2.value;
int64_t $tmp427 = param1.value;
int64_t $tmp428 = $tmp426 - $tmp427;
panda$core$Int64 $tmp429 = (panda$core$Int64) {$tmp428};
panda$core$Int64 $tmp430 = (panda$core$Int64) {2};
int64_t $tmp431 = $tmp429.value;
int64_t $tmp432 = $tmp430.value;
int64_t $tmp433 = $tmp431 / $tmp432;
panda$core$Int64 $tmp434 = (panda$core$Int64) {$tmp433};
int64_t $tmp435 = param1.value;
int64_t $tmp436 = $tmp434.value;
int64_t $tmp437 = $tmp435 + $tmp436;
panda$core$Int64 $tmp438 = (panda$core$Int64) {$tmp437};
*(&local0) = $tmp438;
// line 188
panda$core$Int64 $tmp439 = *(&local0);
panda$core$Object* $tmp440 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(param0, $tmp439);
*(&local1) = ((panda$core$Object*) NULL);
panda$core$Panda$ref$panda$core$Object$Q($tmp440);
panda$core$Object* $tmp441 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp441);
*(&local1) = $tmp440;
panda$core$Panda$unref$panda$core$Object$Q($tmp440);
// unreffing REF($27:panda.collections.Array.T)
// line 189
panda$core$Int64 $tmp442 = *(&local0);
panda$collections$ListView$swap$panda$collections$Array$LTpanda$collections$ListView$T$GT$panda$core$Int64$panda$core$Int64(param0, param2, $tmp442);
// line 190
*(&local2) = param1;
// line 191
panda$core$Int64 $tmp443 = (panda$core$Int64) {1};
int64_t $tmp444 = param2.value;
int64_t $tmp445 = $tmp443.value;
int64_t $tmp446 = $tmp444 - $tmp445;
panda$core$Int64 $tmp447 = (panda$core$Int64) {$tmp446};
panda$core$Bit $tmp448 = panda$core$Bit$init$builtin_bit(true);
panda$core$Range$LTpanda$core$Int64$GT $tmp449 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(param1, $tmp447, $tmp448);
panda$core$Int64 $tmp450 = $tmp449.min;
*(&local3) = $tmp450;
panda$core$Int64 $tmp451 = $tmp449.max;
panda$core$Bit $tmp452 = $tmp449.inclusive;
bool $tmp453 = $tmp452.value;
panda$core$Int64 $tmp454 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp455 = panda$core$Int64$convert$R$panda$core$UInt64($tmp454);
if ($tmp453) goto block6; else goto block7;
block6:;
int64_t $tmp456 = $tmp450.value;
int64_t $tmp457 = $tmp451.value;
bool $tmp458 = $tmp456 <= $tmp457;
panda$core$Bit $tmp459 = (panda$core$Bit) {$tmp458};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block3; else goto block4;
block7:;
int64_t $tmp461 = $tmp450.value;
int64_t $tmp462 = $tmp451.value;
bool $tmp463 = $tmp461 < $tmp462;
panda$core$Bit $tmp464 = (panda$core$Bit) {$tmp463};
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block3; else goto block4;
block3:;
// line 192
panda$core$Int64 $tmp466 = *(&local3);
panda$core$Object* $tmp467 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(param0, $tmp466);
panda$core$Object* $tmp468 = *(&local1);
panda$core$Int8** $tmp469 = &param3->pointer;
panda$core$Int8* $tmp470 = *$tmp469;
panda$core$Object** $tmp471 = &param3->target;
panda$core$Object* $tmp472 = *$tmp471;
bool $tmp473 = $tmp472 != ((panda$core$Object*) NULL);
if ($tmp473) goto block10; else goto block11;
block11:;
panda$core$Bit $tmp475 = (($fn474) $tmp470)($tmp467, $tmp468);
*(&local4) = $tmp475;
goto block12;
block10:;
panda$core$Bit $tmp477 = (($fn476) $tmp470)($tmp472, $tmp467, $tmp468);
*(&local4) = $tmp477;
goto block12;
block12:;
panda$core$Bit $tmp478 = *(&local4);
panda$core$Bit $tmp479 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp478);
bool $tmp480 = $tmp479.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp467);
// unreffing REF($75:panda.collections.Array.T)
if ($tmp480) goto block8; else goto block9;
block8:;
// line 193
panda$core$Int64 $tmp481 = *(&local3);
panda$core$Int64 $tmp482 = *(&local2);
panda$collections$ListView$swap$panda$collections$Array$LTpanda$collections$ListView$T$GT$panda$core$Int64$panda$core$Int64(param0, $tmp481, $tmp482);
// line 194
panda$core$Int64 $tmp483 = *(&local2);
panda$core$Int64 $tmp484 = (panda$core$Int64) {1};
int64_t $tmp485 = $tmp483.value;
int64_t $tmp486 = $tmp484.value;
int64_t $tmp487 = $tmp485 + $tmp486;
panda$core$Int64 $tmp488 = (panda$core$Int64) {$tmp487};
*(&local2) = $tmp488;
goto block9;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp489 = *(&local3);
int64_t $tmp490 = $tmp451.value;
int64_t $tmp491 = $tmp489.value;
int64_t $tmp492 = $tmp490 - $tmp491;
panda$core$Int64 $tmp493 = (panda$core$Int64) {$tmp492};
panda$core$UInt64 $tmp494 = panda$core$Int64$convert$R$panda$core$UInt64($tmp493);
if ($tmp453) goto block14; else goto block15;
block14:;
uint64_t $tmp495 = $tmp494.value;
uint64_t $tmp496 = $tmp455.value;
bool $tmp497 = $tmp495 >= $tmp496;
panda$core$Bit $tmp498 = (panda$core$Bit) {$tmp497};
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block13; else goto block4;
block15:;
uint64_t $tmp500 = $tmp494.value;
uint64_t $tmp501 = $tmp455.value;
bool $tmp502 = $tmp500 > $tmp501;
panda$core$Bit $tmp503 = (panda$core$Bit) {$tmp502};
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block13; else goto block4;
block13:;
int64_t $tmp505 = $tmp489.value;
int64_t $tmp506 = $tmp454.value;
int64_t $tmp507 = $tmp505 + $tmp506;
panda$core$Int64 $tmp508 = (panda$core$Int64) {$tmp507};
*(&local3) = $tmp508;
goto block3;
block4:;
// line 197
panda$core$Int64 $tmp509 = *(&local2);
panda$collections$ListView$swap$panda$collections$Array$LTpanda$collections$ListView$T$GT$panda$core$Int64$panda$core$Int64(param0, $tmp509, param2);
// line 198
panda$core$Int64 $tmp510 = *(&local2);
panda$core$Int64 $tmp511 = (panda$core$Int64) {1};
int64_t $tmp512 = $tmp510.value;
int64_t $tmp513 = $tmp511.value;
int64_t $tmp514 = $tmp512 - $tmp513;
panda$core$Int64 $tmp515 = (panda$core$Int64) {$tmp514};
panda$collections$ListView$sort$panda$collections$Array$LTpanda$collections$ListView$T$GT$panda$core$Int64$panda$core$Int64$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP(param0, param1, $tmp515, param3);
// line 199
panda$core$Int64 $tmp516 = *(&local2);
panda$core$Int64 $tmp517 = (panda$core$Int64) {1};
int64_t $tmp518 = $tmp516.value;
int64_t $tmp519 = $tmp517.value;
int64_t $tmp520 = $tmp518 + $tmp519;
panda$core$Int64 $tmp521 = (panda$core$Int64) {$tmp520};
panda$collections$ListView$sort$panda$collections$Array$LTpanda$collections$ListView$T$GT$panda$core$Int64$panda$core$Int64$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP(param0, $tmp521, param2, param3);
panda$core$Object* $tmp522 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp522);
// unreffing pivot
*(&local1) = ((panda$core$Object*) NULL);
return;

}
panda$collections$ListView* panda$collections$ListView$sorted$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$MutableMethod* param1) {

panda$collections$Array* local0 = NULL;
// line 212
panda$collections$Array* $tmp523 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp523, ((panda$collections$CollectionView*) param0));
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
panda$collections$Array* $tmp524 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
*(&local0) = $tmp523;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing REF($1:panda.collections.Array<panda.collections.ListView.T>)
// line 213
panda$collections$Array* $tmp525 = *(&local0);
panda$core$Int64 $tmp526 = (panda$core$Int64) {0};
ITable* $tmp527 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp527->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp527 = $tmp527->next;
}
$fn529 $tmp528 = $tmp527->methods[0];
panda$core$Int64 $tmp530 = $tmp528(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp531 = (panda$core$Int64) {1};
int64_t $tmp532 = $tmp530.value;
int64_t $tmp533 = $tmp531.value;
int64_t $tmp534 = $tmp532 - $tmp533;
panda$core$Int64 $tmp535 = (panda$core$Int64) {$tmp534};
panda$collections$ListView$sort$panda$collections$Array$LTpanda$collections$ListView$T$GT$panda$core$Int64$panda$core$Int64$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP($tmp525, $tmp526, $tmp535, param1);
// line 214
panda$collections$Array* $tmp536 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp536)));
panda$collections$Array* $tmp537 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp536);

}

