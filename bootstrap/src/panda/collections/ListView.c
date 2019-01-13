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
#include "panda/collections/List.h"

__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ListView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$ListView$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ListView$_panda$collections$Iterable, { NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$ListView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ListView$_panda$collections$ListView, { NULL, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

static panda$core$String $s1;
panda$collections$ListView$class_type panda$collections$ListView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ListView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

typedef panda$core$Int64 (*$fn14)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn28)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn51)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn65)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn126)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn164)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn180)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Int64 (*$fn249)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn271)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn291)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn314)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn342)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn364)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn376)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn384)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn388)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn393)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn402)(panda$core$Object*);
typedef panda$core$Bit (*$fn404)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Int64 (*$fn420)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 1346634265727302291, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 14, -973627211574904282, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 158, -7687465988945033711, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 14, -973627211574904282, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x5b\x5d\x28\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x54\x3e", 184, 4461115013712087099, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 14, -973627211574904282, NULL };

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
panda$core$Panda$ref$panda$core$Object$Q($tmp127);
panda$core$Object* $tmp129 = $tmp116[$tmp128];
panda$core$Panda$unref$panda$core$Object$Q($tmp129);
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
panda$core$Bit panda$collections$ListView$inRange$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$panda$core$Int64$R$panda$core$Bit(panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
// line 100
panda$core$Int64$nullable $tmp182 = param0.start;
panda$core$Bit $tmp183 = panda$core$Bit$init$builtin_bit($tmp182.nonnull);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block1; else goto block2;
block1:;
// line 101
panda$core$Int64$nullable $tmp185 = param0.start;
panda$core$Int64 $tmp186 = (panda$core$Int64) {0};
int64_t $tmp187 = ((panda$core$Int64) $tmp185.value).value;
int64_t $tmp188 = $tmp186.value;
bool $tmp189 = $tmp187 < $tmp188;
panda$core$Bit $tmp190 = (panda$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block3; else goto block4;
block3:;
// line 102
panda$core$Bit $tmp192 = panda$core$Bit$init$builtin_bit(false);
return $tmp192;
block4:;
// line 104
panda$core$Bit $tmp193 = param0.inclusive;
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block7; else goto block8;
block7:;
panda$core$Int64$nullable $tmp195 = param0.start;
int64_t $tmp196 = ((panda$core$Int64) $tmp195.value).value;
int64_t $tmp197 = param1.value;
bool $tmp198 = $tmp196 >= $tmp197;
panda$core$Bit $tmp199 = (panda$core$Bit) {$tmp198};
*(&local0) = $tmp199;
goto block9;
block8:;
*(&local0) = $tmp193;
goto block9;
block9:;
panda$core$Bit $tmp200 = *(&local0);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block5; else goto block6;
block5:;
// line 105
panda$core$Bit $tmp202 = panda$core$Bit$init$builtin_bit(false);
return $tmp202;
block6:;
// line 107
panda$core$Bit $tmp203 = param0.inclusive;
panda$core$Bit $tmp204 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block12; else goto block13;
block12:;
panda$core$Int64$nullable $tmp206 = param0.start;
int64_t $tmp207 = ((panda$core$Int64) $tmp206.value).value;
int64_t $tmp208 = param1.value;
bool $tmp209 = $tmp207 > $tmp208;
panda$core$Bit $tmp210 = (panda$core$Bit) {$tmp209};
*(&local1) = $tmp210;
goto block14;
block13:;
*(&local1) = $tmp204;
goto block14;
block14:;
panda$core$Bit $tmp211 = *(&local1);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block10; else goto block11;
block10:;
// line 108
panda$core$Bit $tmp213 = panda$core$Bit$init$builtin_bit(false);
return $tmp213;
block11:;
goto block2;
block2:;
// line 111
panda$core$Int64$nullable $tmp214 = param0.end;
panda$core$Bit $tmp215 = panda$core$Bit$init$builtin_bit($tmp214.nonnull);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block15; else goto block16;
block15:;
// line 112
panda$core$Int64$nullable $tmp217 = param0.end;
panda$core$Int64 $tmp218 = (panda$core$Int64) {0};
int64_t $tmp219 = ((panda$core$Int64) $tmp217.value).value;
int64_t $tmp220 = $tmp218.value;
bool $tmp221 = $tmp219 < $tmp220;
panda$core$Bit $tmp222 = (panda$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block17; else goto block18;
block17:;
// line 113
panda$core$Bit $tmp224 = panda$core$Bit$init$builtin_bit(false);
return $tmp224;
block18:;
// line 115
panda$core$Bit $tmp225 = param0.inclusive;
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block21; else goto block22;
block21:;
panda$core$Int64$nullable $tmp227 = param0.end;
int64_t $tmp228 = ((panda$core$Int64) $tmp227.value).value;
int64_t $tmp229 = param1.value;
bool $tmp230 = $tmp228 >= $tmp229;
panda$core$Bit $tmp231 = (panda$core$Bit) {$tmp230};
*(&local2) = $tmp231;
goto block23;
block22:;
*(&local2) = $tmp225;
goto block23;
block23:;
panda$core$Bit $tmp232 = *(&local2);
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block19; else goto block20;
block19:;
// line 116
panda$core$Bit $tmp234 = panda$core$Bit$init$builtin_bit(false);
return $tmp234;
block20:;
// line 118
panda$core$Bit $tmp235 = param0.inclusive;
panda$core$Bit $tmp236 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp235);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block26; else goto block27;
block26:;
panda$core$Int64$nullable $tmp238 = param0.end;
int64_t $tmp239 = ((panda$core$Int64) $tmp238.value).value;
int64_t $tmp240 = param1.value;
bool $tmp241 = $tmp239 > $tmp240;
panda$core$Bit $tmp242 = (panda$core$Bit) {$tmp241};
*(&local3) = $tmp242;
goto block28;
block27:;
*(&local3) = $tmp236;
goto block28;
block28:;
panda$core$Bit $tmp243 = *(&local3);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block24; else goto block25;
block24:;
// line 119
panda$core$Bit $tmp245 = panda$core$Bit$init$builtin_bit(false);
return $tmp245;
block25:;
goto block16;
block16:;
// line 122
panda$core$Bit $tmp246 = panda$core$Bit$init$builtin_bit(true);
return $tmp246;

}
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$collections$Array* local3 = NULL;
panda$core$Bit local4;
panda$core$Bit local5;
panda$core$Bit local6;
ITable* $tmp247 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp247->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
panda$core$Int64 $tmp250 = $tmp248(((panda$collections$CollectionView*) param0));
panda$core$Bit $tmp251 = panda$collections$ListView$inRange$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$panda$core$Int64$R$panda$core$Bit(param1, $tmp250);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp253 = (panda$core$Int64) {133};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s254, $tmp253, &$s255);
abort(); // unreachable
block1:;
// line 134
panda$core$Int64 $tmp256 = param1.step;
*(&local0) = $tmp256;
// line 136
// line 137
panda$core$Int64$nullable $tmp257 = param1.start;
panda$core$Bit $tmp258 = panda$core$Bit$init$builtin_bit($tmp257.nonnull);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block3; else goto block5;
block3:;
// line 138
panda$core$Int64$nullable $tmp260 = param1.start;
*(&local1) = ((panda$core$Int64) $tmp260.value);
goto block4;
block5:;
// line 140
panda$core$Int64 $tmp261 = *(&local0);
panda$core$Int64 $tmp262 = (panda$core$Int64) {0};
int64_t $tmp263 = $tmp261.value;
int64_t $tmp264 = $tmp262.value;
bool $tmp265 = $tmp263 > $tmp264;
panda$core$Bit $tmp266 = (panda$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block6; else goto block8;
block6:;
// line 141
panda$core$Int64 $tmp268 = (panda$core$Int64) {0};
*(&local1) = $tmp268;
goto block7;
block8:;
// line 1
// line 144
ITable* $tmp269 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp269->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp269 = $tmp269->next;
}
$fn271 $tmp270 = $tmp269->methods[0];
panda$core$Int64 $tmp272 = $tmp270(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp273 = (panda$core$Int64) {1};
int64_t $tmp274 = $tmp272.value;
int64_t $tmp275 = $tmp273.value;
int64_t $tmp276 = $tmp274 - $tmp275;
panda$core$Int64 $tmp277 = (panda$core$Int64) {$tmp276};
*(&local1) = $tmp277;
goto block7;
block7:;
goto block4;
block4:;
// line 147
// line 148
panda$core$Int64$nullable $tmp278 = param1.end;
panda$core$Bit $tmp279 = panda$core$Bit$init$builtin_bit($tmp278.nonnull);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block9; else goto block11;
block9:;
// line 149
panda$core$Int64$nullable $tmp281 = param1.end;
*(&local2) = ((panda$core$Int64) $tmp281.value);
goto block10;
block11:;
// line 151
panda$core$Int64 $tmp282 = *(&local0);
panda$core$Int64 $tmp283 = (panda$core$Int64) {0};
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283.value;
bool $tmp286 = $tmp284 > $tmp285;
panda$core$Bit $tmp287 = (panda$core$Bit) {$tmp286};
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block12; else goto block14;
block12:;
// line 152
ITable* $tmp289 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp289->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp289 = $tmp289->next;
}
$fn291 $tmp290 = $tmp289->methods[0];
panda$core$Int64 $tmp292 = $tmp290(((panda$collections$CollectionView*) param0));
*(&local2) = $tmp292;
goto block13;
block14:;
// line 1
// line 155
panda$core$Int64 $tmp293 = (panda$core$Int64) {0};
*(&local2) = $tmp293;
goto block13;
block13:;
goto block10;
block10:;
// line 158
panda$collections$Array* $tmp294 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp294);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
panda$collections$Array* $tmp295 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
*(&local3) = $tmp294;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// unreffing REF($84:panda.collections.Array<panda.collections.ListView.T>)
// line 159
panda$core$Int64 $tmp296 = param1.step;
panda$core$Int64 $tmp297 = (panda$core$Int64) {0};
int64_t $tmp298 = $tmp296.value;
int64_t $tmp299 = $tmp297.value;
bool $tmp300 = $tmp298 > $tmp299;
panda$core$Bit $tmp301 = (panda$core$Bit) {$tmp300};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block15; else goto block17;
block15:;
// line 160
goto block18;
block18:;
panda$core$Int64 $tmp303 = *(&local1);
panda$core$Int64 $tmp304 = *(&local2);
int64_t $tmp305 = $tmp303.value;
int64_t $tmp306 = $tmp304.value;
bool $tmp307 = $tmp305 < $tmp306;
panda$core$Bit $tmp308 = (panda$core$Bit) {$tmp307};
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block19; else goto block20;
block19:;
// line 161
panda$collections$Array* $tmp310 = *(&local3);
panda$core$Int64 $tmp311 = *(&local1);
ITable* $tmp312 = param0->$class->itable;
while ($tmp312->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp312 = $tmp312->next;
}
$fn314 $tmp313 = $tmp312->methods[0];
panda$core$Object* $tmp315 = $tmp313(param0, $tmp311);
panda$collections$Array$add$panda$collections$Array$T($tmp310, $tmp315);
panda$core$Panda$unref$panda$core$Object$Q($tmp315);
// unreffing REF($122:panda.collections.ListView.T)
// line 162
panda$core$Int64 $tmp316 = *(&local1);
panda$core$Int64 $tmp317 = *(&local0);
int64_t $tmp318 = $tmp316.value;
int64_t $tmp319 = $tmp317.value;
int64_t $tmp320 = $tmp318 + $tmp319;
panda$core$Int64 $tmp321 = (panda$core$Int64) {$tmp320};
*(&local1) = $tmp321;
goto block18;
block20:;
goto block16;
block17:;
// line 1
// line 166
panda$core$Int64 $tmp322 = param1.step;
panda$core$Int64 $tmp323 = (panda$core$Int64) {0};
int64_t $tmp324 = $tmp322.value;
int64_t $tmp325 = $tmp323.value;
bool $tmp326 = $tmp324 < $tmp325;
panda$core$Bit $tmp327 = (panda$core$Bit) {$tmp326};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp329 = (panda$core$Int64) {166};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s330, $tmp329);
abort(); // unreachable
block21:;
// line 167
goto block23;
block23:;
panda$core$Int64 $tmp331 = *(&local1);
panda$core$Int64 $tmp332 = *(&local2);
int64_t $tmp333 = $tmp331.value;
int64_t $tmp334 = $tmp332.value;
bool $tmp335 = $tmp333 > $tmp334;
panda$core$Bit $tmp336 = (panda$core$Bit) {$tmp335};
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block24; else goto block25;
block24:;
// line 168
panda$collections$Array* $tmp338 = *(&local3);
panda$core$Int64 $tmp339 = *(&local1);
ITable* $tmp340 = param0->$class->itable;
while ($tmp340->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp340 = $tmp340->next;
}
$fn342 $tmp341 = $tmp340->methods[0];
panda$core$Object* $tmp343 = $tmp341(param0, $tmp339);
panda$collections$Array$add$panda$collections$Array$T($tmp338, $tmp343);
panda$core$Panda$unref$panda$core$Object$Q($tmp343);
// unreffing REF($167:panda.collections.ListView.T)
// line 169
panda$core$Int64 $tmp344 = *(&local1);
panda$core$Int64 $tmp345 = *(&local0);
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345.value;
int64_t $tmp348 = $tmp346 + $tmp347;
panda$core$Int64 $tmp349 = (panda$core$Int64) {$tmp348};
*(&local1) = $tmp349;
goto block23;
block25:;
goto block16;
block16:;
// line 172
panda$core$Bit $tmp350 = param1.inclusive;
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block28; else goto block29;
block28:;
*(&local6) = $tmp350;
goto block30;
block29:;
panda$core$Int64$nullable $tmp352 = param1.end;
panda$core$Bit $tmp353 = panda$core$Bit$init$builtin_bit(!$tmp352.nonnull);
*(&local6) = $tmp353;
goto block30;
block30:;
panda$core$Bit $tmp354 = *(&local6);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block31; else goto block32;
block31:;
panda$core$Int64 $tmp356 = *(&local1);
panda$core$Int64 $tmp357 = *(&local2);
panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp356, $tmp357);
*(&local5) = $tmp358;
goto block33;
block32:;
*(&local5) = $tmp354;
goto block33;
block33:;
panda$core$Bit $tmp359 = *(&local5);
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block34; else goto block35;
block34:;
panda$core$Int64 $tmp361 = *(&local2);
ITable* $tmp362 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp362->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp362 = $tmp362->next;
}
$fn364 $tmp363 = $tmp362->methods[0];
panda$core$Int64 $tmp365 = $tmp363(((panda$collections$CollectionView*) param0));
int64_t $tmp366 = $tmp361.value;
int64_t $tmp367 = $tmp365.value;
bool $tmp368 = $tmp366 < $tmp367;
panda$core$Bit $tmp369 = (panda$core$Bit) {$tmp368};
*(&local4) = $tmp369;
goto block36;
block35:;
*(&local4) = $tmp359;
goto block36;
block36:;
panda$core$Bit $tmp370 = *(&local4);
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block26; else goto block27;
block26:;
// line 173
panda$collections$Array* $tmp372 = *(&local3);
panda$core$Int64 $tmp373 = *(&local1);
ITable* $tmp374 = param0->$class->itable;
while ($tmp374->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp374 = $tmp374->next;
}
$fn376 $tmp375 = $tmp374->methods[0];
panda$core$Object* $tmp377 = $tmp375(param0, $tmp373);
panda$collections$Array$add$panda$collections$Array$T($tmp372, $tmp377);
panda$core$Panda$unref$panda$core$Object$Q($tmp377);
// unreffing REF($228:panda.collections.ListView.T)
goto block27;
block27:;
// line 175
panda$collections$Array* $tmp378 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp378)));
panda$collections$Array* $tmp379 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
// unreffing result
*(&local3) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp378);

}
panda$collections$ListView* panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$MutableMethod* param1) {

panda$collections$Array* local0 = NULL;
panda$core$Object* local1 = NULL;
panda$core$Bit local2;
// line 184
panda$collections$Array* $tmp380 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp380);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
panda$collections$Array* $tmp381 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
*(&local0) = $tmp380;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
// unreffing REF($1:panda.collections.Array<panda.collections.ListView.T>)
// line 185
ITable* $tmp382 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp382->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp382 = $tmp382->next;
}
$fn384 $tmp383 = $tmp382->methods[0];
panda$collections$Iterator* $tmp385 = $tmp383(((panda$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp386 = $tmp385->$class->itable;
while ($tmp386->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp386 = $tmp386->next;
}
$fn388 $tmp387 = $tmp386->methods[0];
panda$core$Bit $tmp389 = $tmp387($tmp385);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block3; else goto block2;
block2:;
*(&local1) = ((panda$core$Object*) NULL);
ITable* $tmp391 = $tmp385->$class->itable;
while ($tmp391->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp391 = $tmp391->next;
}
$fn393 $tmp392 = $tmp391->methods[1];
panda$core$Object* $tmp394 = $tmp392($tmp385);
panda$core$Panda$ref$panda$core$Object$Q($tmp394);
panda$core$Object* $tmp395 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp395);
*(&local1) = $tmp394;
// line 186
panda$core$Object* $tmp396 = *(&local1);
panda$core$Int8** $tmp397 = &param1->pointer;
panda$core$Int8* $tmp398 = *$tmp397;
panda$core$Object** $tmp399 = &param1->target;
panda$core$Object* $tmp400 = *$tmp399;
bool $tmp401 = $tmp400 != ((panda$core$Object*) NULL);
if ($tmp401) goto block6; else goto block7;
block7:;
panda$core$Bit $tmp403 = (($fn402) $tmp398)($tmp396);
*(&local2) = $tmp403;
goto block8;
block6:;
panda$core$Bit $tmp405 = (($fn404) $tmp398)($tmp400, $tmp396);
*(&local2) = $tmp405;
goto block8;
block8:;
panda$core$Bit $tmp406 = *(&local2);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block4; else goto block5;
block4:;
// line 187
panda$collections$Array* $tmp408 = *(&local0);
panda$core$Object* $tmp409 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp408, $tmp409);
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp394);
// unreffing REF($29:panda.collections.Iterator.T)
panda$core$Object* $tmp410 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp410);
// unreffing v
*(&local1) = ((panda$core$Object*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing REF($18:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 190
panda$collections$Array* $tmp411 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp411)));
panda$collections$Array* $tmp412 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp412));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp411);

}
panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0) {

// line 196
panda$collections$ListView$ListIterator* $tmp413 = (panda$collections$ListView$ListIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ListView$ListIterator$class);
panda$collections$ListView$ListIterator$init$panda$collections$ListView$LTpanda$collections$ListView$ListIterator$T$GT($tmp413, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp413)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
// unreffing REF($1:panda.collections.ListView.ListIterator<panda.collections.ListView.T>)
return ((panda$collections$Iterator*) $tmp413);

}
panda$collections$ListView* panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$MutableMethod* param1) {

panda$collections$Array* local0 = NULL;
// line 209
panda$collections$Array* $tmp414 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp414, ((panda$collections$CollectionView*) param0));
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
panda$collections$Array* $tmp415 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
*(&local0) = $tmp414;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
// unreffing REF($1:panda.collections.Array<panda.collections.ListView.T>)
// line 210
panda$collections$Array* $tmp416 = *(&local0);
panda$core$Int64 $tmp417 = (panda$core$Int64) {0};
ITable* $tmp418 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp418->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp418 = $tmp418->next;
}
$fn420 $tmp419 = $tmp418->methods[0];
panda$core$Int64 $tmp421 = $tmp419(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp422 = (panda$core$Int64) {1};
int64_t $tmp423 = $tmp421.value;
int64_t $tmp424 = $tmp422.value;
int64_t $tmp425 = $tmp423 - $tmp424;
panda$core$Int64 $tmp426 = (panda$core$Int64) {$tmp425};
panda$core$Panda$sort$panda$collections$List$LTpanda$core$Panda$sort$T$GT$panda$core$Int64$panda$core$Int64$$LPpanda$core$Panda$sort$T$Cpanda$core$Panda$sort$T$RP$EQ$GT$LPpanda$core$Bit$RP(((panda$collections$List*) $tmp416), $tmp417, $tmp426, param1);
// line 211
panda$collections$Array* $tmp427 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp427)));
panda$collections$Array* $tmp428 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp427);

}

