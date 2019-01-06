#include "panda/collections/List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Collection.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/MutableMethod.h"

__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { NULL, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$List$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$List$_panda$collections$CollectionView, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$List$_panda$collections$Collection, { NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$List$_panda$collections$ListView, { NULL, panda$collections$CollectionWriter$addAll$panda$collections$CollectionView$LTpanda$collections$CollectionWriter$T$GT, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$List$_panda$collections$CollectionWriter, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, (ITable*) &panda$collections$List$_panda$collections$Iterable, { panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$List$_panda$collections$List, { NULL, NULL, NULL} };

static panda$core$String $s1;
panda$collections$List$class_type panda$collections$List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$List$_panda$collections$ListWriter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

typedef panda$core$Object* (*$fn64)(panda$collections$ListWriter*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn104)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn108)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn113)(panda$collections$Iterator*);
typedef void (*$fn120)(panda$collections$ListWriter*, panda$core$Int64, panda$core$Object*);
typedef panda$core$Int64 (*$fn139)(panda$collections$CollectionView*);
typedef void (*$fn147)(panda$collections$List*, panda$core$Range$LTpanda$core$Int64$GT, panda$collections$ListView*);
typedef panda$core$Int64 (*$fn150)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn198)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn205)(panda$core$Object*);
typedef panda$core$Bit (*$fn207)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn215)(panda$collections$ListWriter*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74", 22, 6616553759611337156, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 10, -8182438816656544401, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x5b\x5d\x3a\x3d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x2c\x20\x6c\x69\x73\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x54\x3e\x29", 160, 3530542157553232504, NULL };

void panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT(panda$collections$List* param0, panda$core$Range$LTpanda$core$Int64$GT param1, panda$collections$ListView* param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$core$Object* local3 = NULL;
panda$core$Int64 $tmp2 = param1.min;
panda$core$Int64 $tmp3 = param1.max;
int64_t $tmp4 = $tmp2.value;
int64_t $tmp5 = $tmp3.value;
bool $tmp6 = $tmp4 <= $tmp5;
panda$core$Bit $tmp7 = (panda$core$Bit) {$tmp6};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp9 = (panda$core$Int64) {11};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s10, $tmp9, &$s11);
abort(); // unreachable
block1:;
// line 13
panda$core$Int64 $tmp12 = param1.max;
*(&local0) = $tmp12;
// line 14
panda$core$Bit $tmp13 = param1.inclusive;
panda$core$Bit $tmp14 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block3; else goto block4;
block3:;
// line 15
panda$core$Int64 $tmp16 = *(&local0);
panda$core$Int64 $tmp17 = (panda$core$Int64) {1};
int64_t $tmp18 = $tmp16.value;
int64_t $tmp19 = $tmp17.value;
int64_t $tmp20 = $tmp18 - $tmp19;
panda$core$Int64 $tmp21 = (panda$core$Int64) {$tmp20};
*(&local0) = $tmp21;
goto block4;
block4:;
// line 17
panda$core$Int64 $tmp22 = *(&local0);
panda$core$Int64 $tmp23 = param1.min;
panda$core$Int64 $tmp24 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp25 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp26 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp22, $tmp23, $tmp24, $tmp25);
panda$core$Int64 $tmp27 = $tmp26.start;
*(&local1) = $tmp27;
panda$core$Int64 $tmp28 = $tmp26.end;
panda$core$Int64 $tmp29 = $tmp26.step;
panda$core$UInt64 $tmp30 = panda$core$Int64$convert$R$panda$core$UInt64($tmp29);
panda$core$Int64 $tmp31 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp29);
panda$core$UInt64 $tmp32 = panda$core$Int64$convert$R$panda$core$UInt64($tmp31);
panda$core$Bit $tmp33 = $tmp26.inclusive;
bool $tmp34 = $tmp33.value;
panda$core$Int64 $tmp35 = (panda$core$Int64) {0};
int64_t $tmp36 = $tmp29.value;
int64_t $tmp37 = $tmp35.value;
bool $tmp38 = $tmp36 >= $tmp37;
panda$core$Bit $tmp39 = (panda$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block8; else goto block9;
block8:;
if ($tmp34) goto block10; else goto block11;
block10:;
int64_t $tmp41 = $tmp27.value;
int64_t $tmp42 = $tmp28.value;
bool $tmp43 = $tmp41 <= $tmp42;
panda$core$Bit $tmp44 = (panda$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block5; else goto block6;
block11:;
int64_t $tmp46 = $tmp27.value;
int64_t $tmp47 = $tmp28.value;
bool $tmp48 = $tmp46 < $tmp47;
panda$core$Bit $tmp49 = (panda$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block5; else goto block6;
block9:;
if ($tmp34) goto block12; else goto block13;
block12:;
int64_t $tmp51 = $tmp27.value;
int64_t $tmp52 = $tmp28.value;
bool $tmp53 = $tmp51 >= $tmp52;
panda$core$Bit $tmp54 = (panda$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block5; else goto block6;
block13:;
int64_t $tmp56 = $tmp27.value;
int64_t $tmp57 = $tmp28.value;
bool $tmp58 = $tmp56 > $tmp57;
panda$core$Bit $tmp59 = (panda$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block5; else goto block6;
block5:;
// line 18
panda$core$Int64 $tmp61 = *(&local1);
ITable* $tmp62 = ((panda$collections$ListWriter*) param0)->$class->itable;
while ($tmp62->$class != (panda$core$Class*) &panda$collections$ListWriter$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[2];
panda$core$Object* $tmp65 = $tmp63(((panda$collections$ListWriter*) param0), $tmp61);
panda$core$Panda$unref$panda$core$Object$Q($tmp65);
// unreffing REF($80:panda.collections.ListWriter.T)
goto block7;
block7:;
panda$core$Int64 $tmp66 = *(&local1);
if ($tmp40) goto block15; else goto block16;
block15:;
int64_t $tmp67 = $tmp28.value;
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67 - $tmp68;
panda$core$Int64 $tmp70 = (panda$core$Int64) {$tmp69};
panda$core$UInt64 $tmp71 = panda$core$Int64$convert$R$panda$core$UInt64($tmp70);
if ($tmp34) goto block17; else goto block18;
block17:;
uint64_t $tmp72 = $tmp71.value;
uint64_t $tmp73 = $tmp30.value;
bool $tmp74 = $tmp72 >= $tmp73;
panda$core$Bit $tmp75 = (panda$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block14; else goto block6;
block18:;
uint64_t $tmp77 = $tmp71.value;
uint64_t $tmp78 = $tmp30.value;
bool $tmp79 = $tmp77 > $tmp78;
panda$core$Bit $tmp80 = (panda$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block14; else goto block6;
block16:;
int64_t $tmp82 = $tmp66.value;
int64_t $tmp83 = $tmp28.value;
int64_t $tmp84 = $tmp82 - $tmp83;
panda$core$Int64 $tmp85 = (panda$core$Int64) {$tmp84};
panda$core$UInt64 $tmp86 = panda$core$Int64$convert$R$panda$core$UInt64($tmp85);
if ($tmp34) goto block19; else goto block20;
block19:;
uint64_t $tmp87 = $tmp86.value;
uint64_t $tmp88 = $tmp32.value;
bool $tmp89 = $tmp87 >= $tmp88;
panda$core$Bit $tmp90 = (panda$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block14; else goto block6;
block20:;
uint64_t $tmp92 = $tmp86.value;
uint64_t $tmp93 = $tmp32.value;
bool $tmp94 = $tmp92 > $tmp93;
panda$core$Bit $tmp95 = (panda$core$Bit) {$tmp94};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block14; else goto block6;
block14:;
int64_t $tmp97 = $tmp66.value;
int64_t $tmp98 = $tmp29.value;
int64_t $tmp99 = $tmp97 + $tmp98;
panda$core$Int64 $tmp100 = (panda$core$Int64) {$tmp99};
*(&local1) = $tmp100;
goto block5;
block6:;
// line 20
panda$core$Int64 $tmp101 = param1.min;
*(&local2) = $tmp101;
// line 21
ITable* $tmp102 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp102->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
panda$collections$Iterator* $tmp105 = $tmp103(((panda$collections$Iterable*) param2));
goto block21;
block21:;
ITable* $tmp106 = $tmp105->$class->itable;
while ($tmp106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp106 = $tmp106->next;
}
$fn108 $tmp107 = $tmp106->methods[0];
panda$core$Bit $tmp109 = $tmp107($tmp105);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block23; else goto block22;
block22:;
*(&local3) = ((panda$core$Object*) NULL);
ITable* $tmp111 = $tmp105->$class->itable;
while ($tmp111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[1];
panda$core$Object* $tmp114 = $tmp112($tmp105);
panda$core$Panda$ref$panda$core$Object$Q($tmp114);
panda$core$Object* $tmp115 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q($tmp115);
*(&local3) = $tmp114;
// line 22
panda$core$Int64 $tmp116 = *(&local2);
panda$core$Object* $tmp117 = *(&local3);
ITable* $tmp118 = ((panda$collections$ListWriter*) param0)->$class->itable;
while ($tmp118->$class != (panda$core$Class*) &panda$collections$ListWriter$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
$tmp119(((panda$collections$ListWriter*) param0), $tmp116, $tmp117);
// line 23
panda$core$Int64 $tmp121 = *(&local2);
panda$core$Int64 $tmp122 = (panda$core$Int64) {1};
int64_t $tmp123 = $tmp121.value;
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123 + $tmp124;
panda$core$Int64 $tmp126 = (panda$core$Int64) {$tmp125};
*(&local2) = $tmp126;
panda$core$Panda$unref$panda$core$Object$Q($tmp114);
// unreffing REF($148:panda.collections.Iterator.T)
panda$core$Object* $tmp127 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q($tmp127);
// unreffing v
*(&local3) = ((panda$core$Object*) NULL);
goto block21;
block23:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
// unreffing REF($137:panda.collections.Iterator<panda.collections.Iterable.T>)
return;

}
void panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT(panda$collections$List* param0, panda$core$Range$LTpanda$core$Int64$Q$GT param1, panda$collections$ListView* param2) {

panda$core$Int64$nullable local0;
panda$core$Int64$nullable local1;
// line 29
panda$core$Int64$nullable $tmp128 = param1.min;
*(&local0) = $tmp128;
// line 30
panda$core$Int64$nullable $tmp129 = *(&local0);
panda$core$Bit $tmp130 = panda$core$Bit$init$builtin_bit(!$tmp129.nonnull);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block1; else goto block2;
block1:;
// line 31
panda$core$Int64 $tmp132 = (panda$core$Int64) {0};
*(&local0) = ((panda$core$Int64$nullable) { $tmp132, true });
goto block2;
block2:;
// line 34
panda$core$Int64$nullable $tmp133 = param1.max;
*(&local1) = $tmp133;
// line 35
panda$core$Int64$nullable $tmp134 = *(&local1);
panda$core$Bit $tmp135 = panda$core$Bit$init$builtin_bit(!$tmp134.nonnull);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block3; else goto block4;
block3:;
// line 36
ITable* $tmp137 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp137->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[0];
panda$core$Int64 $tmp140 = $tmp138(((panda$collections$CollectionView*) param0));
*(&local1) = ((panda$core$Int64$nullable) { $tmp140, true });
goto block4;
block4:;
// line 39
panda$core$Int64$nullable $tmp141 = *(&local0);
panda$core$Int64$nullable $tmp142 = *(&local1);
panda$core$Bit $tmp143 = param1.inclusive;
panda$core$Range$LTpanda$core$Int64$GT $tmp144 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(((panda$core$Int64) $tmp141.value), ((panda$core$Int64) $tmp142.value), $tmp143);
ITable* $tmp145 = param0->$class->itable;
while ($tmp145->$class != (panda$core$Class*) &panda$collections$List$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[0];
$tmp146(param0, $tmp144, param2);
return;

}
void panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$List* param0, panda$core$MutableMethod* param1) {

panda$core$Int64 local0;
panda$core$Bit local1;
// line 44
ITable* $tmp148 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp148->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[0];
panda$core$Int64 $tmp151 = $tmp149(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp152 = (panda$core$Int64) {1};
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152.value;
int64_t $tmp155 = $tmp153 - $tmp154;
panda$core$Int64 $tmp156 = (panda$core$Int64) {$tmp155};
panda$core$Int64 $tmp157 = (panda$core$Int64) {0};
panda$core$Int64 $tmp158 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp159 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp160 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp156, $tmp157, $tmp158, $tmp159);
panda$core$Int64 $tmp161 = $tmp160.start;
*(&local0) = $tmp161;
panda$core$Int64 $tmp162 = $tmp160.end;
panda$core$Int64 $tmp163 = $tmp160.step;
panda$core$UInt64 $tmp164 = panda$core$Int64$convert$R$panda$core$UInt64($tmp163);
panda$core$Int64 $tmp165 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp163);
panda$core$UInt64 $tmp166 = panda$core$Int64$convert$R$panda$core$UInt64($tmp165);
panda$core$Bit $tmp167 = $tmp160.inclusive;
bool $tmp168 = $tmp167.value;
panda$core$Int64 $tmp169 = (panda$core$Int64) {0};
int64_t $tmp170 = $tmp163.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 >= $tmp171;
panda$core$Bit $tmp173 = (panda$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block4; else goto block5;
block4:;
if ($tmp168) goto block6; else goto block7;
block6:;
int64_t $tmp175 = $tmp161.value;
int64_t $tmp176 = $tmp162.value;
bool $tmp177 = $tmp175 <= $tmp176;
panda$core$Bit $tmp178 = (panda$core$Bit) {$tmp177};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block1; else goto block2;
block7:;
int64_t $tmp180 = $tmp161.value;
int64_t $tmp181 = $tmp162.value;
bool $tmp182 = $tmp180 < $tmp181;
panda$core$Bit $tmp183 = (panda$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block1; else goto block2;
block5:;
if ($tmp168) goto block8; else goto block9;
block8:;
int64_t $tmp185 = $tmp161.value;
int64_t $tmp186 = $tmp162.value;
bool $tmp187 = $tmp185 >= $tmp186;
panda$core$Bit $tmp188 = (panda$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block1; else goto block2;
block9:;
int64_t $tmp190 = $tmp161.value;
int64_t $tmp191 = $tmp162.value;
bool $tmp192 = $tmp190 > $tmp191;
panda$core$Bit $tmp193 = (panda$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block1:;
// line 45
panda$core$Int64 $tmp195 = *(&local0);
ITable* $tmp196 = ((panda$collections$ListView*) param0)->$class->itable;
while ($tmp196->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp196 = $tmp196->next;
}
$fn198 $tmp197 = $tmp196->methods[0];
panda$core$Object* $tmp199 = $tmp197(((panda$collections$ListView*) param0), $tmp195);
panda$core$Int8** $tmp200 = &param1->pointer;
panda$core$Int8* $tmp201 = *$tmp200;
panda$core$Object** $tmp202 = &param1->target;
panda$core$Object* $tmp203 = *$tmp202;
bool $tmp204 = $tmp203 != ((panda$core$Object*) NULL);
if ($tmp204) goto block12; else goto block13;
block13:;
panda$core$Bit $tmp206 = (($fn205) $tmp201)($tmp199);
*(&local1) = $tmp206;
goto block14;
block12:;
panda$core$Bit $tmp208 = (($fn207) $tmp201)($tmp203, $tmp199);
*(&local1) = $tmp208;
goto block14;
block14:;
panda$core$Bit $tmp209 = *(&local1);
panda$core$Bit $tmp210 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp209);
bool $tmp211 = $tmp210.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp199);
// unreffing REF($60:panda.collections.ListView.T)
if ($tmp211) goto block10; else goto block11;
block10:;
// line 46
panda$core$Int64 $tmp212 = *(&local0);
ITable* $tmp213 = ((panda$collections$ListWriter*) param0)->$class->itable;
while ($tmp213->$class != (panda$core$Class*) &panda$collections$ListWriter$class) {
    $tmp213 = $tmp213->next;
}
$fn215 $tmp214 = $tmp213->methods[2];
panda$core$Object* $tmp216 = $tmp214(((panda$collections$ListWriter*) param0), $tmp212);
panda$core$Panda$unref$panda$core$Object$Q($tmp216);
// unreffing REF($88:panda.collections.ListWriter.T)
goto block11;
block11:;
goto block3;
block3:;
panda$core$Int64 $tmp217 = *(&local0);
if ($tmp174) goto block16; else goto block17;
block16:;
int64_t $tmp218 = $tmp162.value;
int64_t $tmp219 = $tmp217.value;
int64_t $tmp220 = $tmp218 - $tmp219;
panda$core$Int64 $tmp221 = (panda$core$Int64) {$tmp220};
panda$core$UInt64 $tmp222 = panda$core$Int64$convert$R$panda$core$UInt64($tmp221);
if ($tmp168) goto block18; else goto block19;
block18:;
uint64_t $tmp223 = $tmp222.value;
uint64_t $tmp224 = $tmp164.value;
bool $tmp225 = $tmp223 >= $tmp224;
panda$core$Bit $tmp226 = (panda$core$Bit) {$tmp225};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block15; else goto block2;
block19:;
uint64_t $tmp228 = $tmp222.value;
uint64_t $tmp229 = $tmp164.value;
bool $tmp230 = $tmp228 > $tmp229;
panda$core$Bit $tmp231 = (panda$core$Bit) {$tmp230};
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block15; else goto block2;
block17:;
int64_t $tmp233 = $tmp217.value;
int64_t $tmp234 = $tmp162.value;
int64_t $tmp235 = $tmp233 - $tmp234;
panda$core$Int64 $tmp236 = (panda$core$Int64) {$tmp235};
panda$core$UInt64 $tmp237 = panda$core$Int64$convert$R$panda$core$UInt64($tmp236);
if ($tmp168) goto block20; else goto block21;
block20:;
uint64_t $tmp238 = $tmp237.value;
uint64_t $tmp239 = $tmp166.value;
bool $tmp240 = $tmp238 >= $tmp239;
panda$core$Bit $tmp241 = (panda$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block15; else goto block2;
block21:;
uint64_t $tmp243 = $tmp237.value;
uint64_t $tmp244 = $tmp166.value;
bool $tmp245 = $tmp243 > $tmp244;
panda$core$Bit $tmp246 = (panda$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block15; else goto block2;
block15:;
int64_t $tmp248 = $tmp217.value;
int64_t $tmp249 = $tmp163.value;
int64_t $tmp250 = $tmp248 + $tmp249;
panda$core$Int64 $tmp251 = (panda$core$Int64) {$tmp250};
*(&local0) = $tmp251;
goto block1;
block2:;
return;

}

