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

__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { NULL, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$List$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$List$_panda$collections$CollectionView, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$List$_panda$collections$Collection, { NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$List$_panda$collections$ListView, { NULL, panda$collections$CollectionWriter$addAll$panda$collections$CollectionView$LTpanda$collections$CollectionWriter$T$GT, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$List$_panda$collections$CollectionWriter, { panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$List$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, (ITable*) &panda$collections$List$_panda$collections$Iterable, { panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP, panda$collections$List$sortInPlace$$LPpanda$collections$List$T$Cpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$List$_panda$collections$List, { NULL, NULL, NULL} };

static panda$core$String $s1;
panda$collections$List$class_type panda$collections$List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$List$_panda$collections$ListWriter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP, panda$collections$List$sortInPlace$$LPpanda$collections$List$T$Cpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

typedef panda$core$Object* (*$fn64)(panda$collections$ListWriter*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn104)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn108)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn113)(panda$collections$Iterator*);
typedef void (*$fn120)(panda$collections$ListWriter*, panda$core$Int64, panda$core$Object*);
typedef panda$core$Int64 (*$fn139)(panda$collections$CollectionView*);
typedef void (*$fn157)(panda$collections$List*, panda$core$Range$LTpanda$core$Int64$GT, panda$collections$ListView*);
typedef panda$core$Int64 (*$fn160)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn208)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn215)(panda$core$Object*);
typedef panda$core$Bit (*$fn217)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn225)(panda$collections$ListWriter*, panda$core$Int64);
typedef panda$core$Int64 (*$fn265)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74", 22, 6616553759611337156, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, -8182438817679621559, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x5b\x5d\x3a\x3d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x2c\x20\x6c\x69\x73\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x2e\x54\x3e\x29", 160, 3530542157553232504, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, -8182438817679621559, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 10, -8182438817679621559, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };

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
panda$core$Bit $tmp142 = panda$core$Bit$init$builtin_bit($tmp141.nonnull);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp144 = (panda$core$Int64) {39};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s145, $tmp144, &$s146);
abort(); // unreachable
block5:;
panda$core$Int64$nullable $tmp147 = *(&local1);
panda$core$Bit $tmp148 = panda$core$Bit$init$builtin_bit($tmp147.nonnull);
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp150 = (panda$core$Int64) {39};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s151, $tmp150, &$s152);
abort(); // unreachable
block7:;
panda$core$Bit $tmp153 = param1.inclusive;
panda$core$Range$LTpanda$core$Int64$GT $tmp154 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(((panda$core$Int64) $tmp141.value), ((panda$core$Int64) $tmp147.value), $tmp153);
ITable* $tmp155 = param0->$class->itable;
while ($tmp155->$class != (panda$core$Class*) &panda$collections$List$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[0];
$tmp156(param0, $tmp154, param2);
return;

}
void panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$List* param0, panda$core$MutableMethod* param1) {

panda$core$Int64 local0;
panda$core$Bit local1;
// line 44
ITable* $tmp158 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp158->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
panda$core$Int64 $tmp161 = $tmp159(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp162 = (panda$core$Int64) {1};
int64_t $tmp163 = $tmp161.value;
int64_t $tmp164 = $tmp162.value;
int64_t $tmp165 = $tmp163 - $tmp164;
panda$core$Int64 $tmp166 = (panda$core$Int64) {$tmp165};
panda$core$Int64 $tmp167 = (panda$core$Int64) {0};
panda$core$Int64 $tmp168 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp169 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp170 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp166, $tmp167, $tmp168, $tmp169);
panda$core$Int64 $tmp171 = $tmp170.start;
*(&local0) = $tmp171;
panda$core$Int64 $tmp172 = $tmp170.end;
panda$core$Int64 $tmp173 = $tmp170.step;
panda$core$UInt64 $tmp174 = panda$core$Int64$convert$R$panda$core$UInt64($tmp173);
panda$core$Int64 $tmp175 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp173);
panda$core$UInt64 $tmp176 = panda$core$Int64$convert$R$panda$core$UInt64($tmp175);
panda$core$Bit $tmp177 = $tmp170.inclusive;
bool $tmp178 = $tmp177.value;
panda$core$Int64 $tmp179 = (panda$core$Int64) {0};
int64_t $tmp180 = $tmp173.value;
int64_t $tmp181 = $tmp179.value;
bool $tmp182 = $tmp180 >= $tmp181;
panda$core$Bit $tmp183 = (panda$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block4; else goto block5;
block4:;
if ($tmp178) goto block6; else goto block7;
block6:;
int64_t $tmp185 = $tmp171.value;
int64_t $tmp186 = $tmp172.value;
bool $tmp187 = $tmp185 <= $tmp186;
panda$core$Bit $tmp188 = (panda$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block1; else goto block2;
block7:;
int64_t $tmp190 = $tmp171.value;
int64_t $tmp191 = $tmp172.value;
bool $tmp192 = $tmp190 < $tmp191;
panda$core$Bit $tmp193 = (panda$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block5:;
if ($tmp178) goto block8; else goto block9;
block8:;
int64_t $tmp195 = $tmp171.value;
int64_t $tmp196 = $tmp172.value;
bool $tmp197 = $tmp195 >= $tmp196;
panda$core$Bit $tmp198 = (panda$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block1; else goto block2;
block9:;
int64_t $tmp200 = $tmp171.value;
int64_t $tmp201 = $tmp172.value;
bool $tmp202 = $tmp200 > $tmp201;
panda$core$Bit $tmp203 = (panda$core$Bit) {$tmp202};
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block1; else goto block2;
block1:;
// line 45
panda$core$Int64 $tmp205 = *(&local0);
ITable* $tmp206 = ((panda$collections$ListView*) param0)->$class->itable;
while ($tmp206->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp206 = $tmp206->next;
}
$fn208 $tmp207 = $tmp206->methods[0];
panda$core$Object* $tmp209 = $tmp207(((panda$collections$ListView*) param0), $tmp205);
panda$core$Int8** $tmp210 = &param1->pointer;
panda$core$Int8* $tmp211 = *$tmp210;
panda$core$Object** $tmp212 = &param1->target;
panda$core$Object* $tmp213 = *$tmp212;
bool $tmp214 = $tmp213 != ((panda$core$Object*) NULL);
if ($tmp214) goto block12; else goto block13;
block13:;
panda$core$Bit $tmp216 = (($fn215) $tmp211)($tmp209);
*(&local1) = $tmp216;
goto block14;
block12:;
panda$core$Bit $tmp218 = (($fn217) $tmp211)($tmp213, $tmp209);
*(&local1) = $tmp218;
goto block14;
block14:;
panda$core$Bit $tmp219 = *(&local1);
panda$core$Bit $tmp220 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp219);
bool $tmp221 = $tmp220.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp209);
// unreffing REF($60:panda.collections.ListView.T)
if ($tmp221) goto block10; else goto block11;
block10:;
// line 46
panda$core$Int64 $tmp222 = *(&local0);
ITable* $tmp223 = ((panda$collections$ListWriter*) param0)->$class->itable;
while ($tmp223->$class != (panda$core$Class*) &panda$collections$ListWriter$class) {
    $tmp223 = $tmp223->next;
}
$fn225 $tmp224 = $tmp223->methods[2];
panda$core$Object* $tmp226 = $tmp224(((panda$collections$ListWriter*) param0), $tmp222);
panda$core$Panda$unref$panda$core$Object$Q($tmp226);
// unreffing REF($88:panda.collections.ListWriter.T)
goto block11;
block11:;
goto block3;
block3:;
panda$core$Int64 $tmp227 = *(&local0);
if ($tmp184) goto block16; else goto block17;
block16:;
int64_t $tmp228 = $tmp172.value;
int64_t $tmp229 = $tmp227.value;
int64_t $tmp230 = $tmp228 - $tmp229;
panda$core$Int64 $tmp231 = (panda$core$Int64) {$tmp230};
panda$core$UInt64 $tmp232 = panda$core$Int64$convert$R$panda$core$UInt64($tmp231);
if ($tmp178) goto block18; else goto block19;
block18:;
uint64_t $tmp233 = $tmp232.value;
uint64_t $tmp234 = $tmp174.value;
bool $tmp235 = $tmp233 >= $tmp234;
panda$core$Bit $tmp236 = (panda$core$Bit) {$tmp235};
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block15; else goto block2;
block19:;
uint64_t $tmp238 = $tmp232.value;
uint64_t $tmp239 = $tmp174.value;
bool $tmp240 = $tmp238 > $tmp239;
panda$core$Bit $tmp241 = (panda$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block15; else goto block2;
block17:;
int64_t $tmp243 = $tmp227.value;
int64_t $tmp244 = $tmp172.value;
int64_t $tmp245 = $tmp243 - $tmp244;
panda$core$Int64 $tmp246 = (panda$core$Int64) {$tmp245};
panda$core$UInt64 $tmp247 = panda$core$Int64$convert$R$panda$core$UInt64($tmp246);
if ($tmp178) goto block20; else goto block21;
block20:;
uint64_t $tmp248 = $tmp247.value;
uint64_t $tmp249 = $tmp176.value;
bool $tmp250 = $tmp248 >= $tmp249;
panda$core$Bit $tmp251 = (panda$core$Bit) {$tmp250};
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block15; else goto block2;
block21:;
uint64_t $tmp253 = $tmp247.value;
uint64_t $tmp254 = $tmp176.value;
bool $tmp255 = $tmp253 > $tmp254;
panda$core$Bit $tmp256 = (panda$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block15; else goto block2;
block15:;
int64_t $tmp258 = $tmp227.value;
int64_t $tmp259 = $tmp173.value;
int64_t $tmp260 = $tmp258 + $tmp259;
panda$core$Int64 $tmp261 = (panda$core$Int64) {$tmp260};
*(&local0) = $tmp261;
goto block1;
block2:;
return;

}
void panda$collections$List$sortInPlace$$LPpanda$collections$List$T$Cpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$List* param0, panda$core$MutableMethod* param1) {

// line 56
panda$core$Int64 $tmp262 = (panda$core$Int64) {0};
ITable* $tmp263 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp263->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp263 = $tmp263->next;
}
$fn265 $tmp264 = $tmp263->methods[0];
panda$core$Int64 $tmp266 = $tmp264(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp267 = (panda$core$Int64) {1};
int64_t $tmp268 = $tmp266.value;
int64_t $tmp269 = $tmp267.value;
int64_t $tmp270 = $tmp268 - $tmp269;
panda$core$Int64 $tmp271 = (panda$core$Int64) {$tmp270};
panda$core$Panda$sort$panda$collections$List$LTpanda$core$Panda$sort$T$GT$panda$core$Int64$panda$core$Int64$$LPpanda$core$Panda$sort$T$Cpanda$core$Panda$sort$T$RP$EQ$GT$LPpanda$core$Bit$RP(param0, $tmp262, $tmp271, param1);
return;

}

