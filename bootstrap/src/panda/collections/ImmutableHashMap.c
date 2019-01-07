#include "panda/collections/ImmutableHashMap.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/MapView.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/collections/Key.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ImmutableHashMap/Entry.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Panda.h"
#include "panda/core/Equatable.h"
#include "panda/collections/ImmutableHashMap/KeyIterator.h"
#include "panda/collections/ImmutableHashMap/ValueIterator.h"
#include "panda/core/MutableString.h"
#include "panda/collections/HashMap.h"

__attribute__((weak)) panda$core$Int64 panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64$shim(panda$collections$ImmutableHashMap* p0) {
    panda$core$Int64 result = panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q$shim(panda$collections$ImmutableHashMap* p0, panda$core$Object* p1) {
    panda$core$Object* result = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(p0, ((panda$collections$Key*) p1));

    return result;
}
__attribute__((weak)) panda$core$Bit panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit$shim(panda$collections$ImmutableHashMap* p0, panda$core$Object* p1) {
    panda$core$Bit result = panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit(p0, ((panda$collections$Key*) p1));

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT$shim(panda$collections$ImmutableHashMap* p0) {
    panda$collections$Iterator* result = panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(p0);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT$shim(panda$collections$ImmutableHashMap* p0) {
    panda$collections$Iterator* result = panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$String* panda$collections$ImmutableHashMap$convert$R$panda$core$String$shim(panda$collections$ImmutableHashMap* p0) {
    panda$core$String* result = panda$collections$ImmutableHashMap$convert$R$panda$core$String(p0);

    return result;
}
__attribute__((weak)) void panda$collections$ImmutableHashMap$cleanup$shim(panda$collections$ImmutableHashMap* p0) {
    panda$collections$ImmutableHashMap$cleanup(p0);

}

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$ImmutableHashMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, NULL, { panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64$shim, panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q$shim, panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit$shim, panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT$shim, panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT$shim} };

static panda$core$String $s1;
panda$collections$ImmutableHashMap$class_type panda$collections$ImmutableHashMap$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$collections$ImmutableHashMap$_panda$collections$MapView, { panda$collections$ImmutableHashMap$convert$R$panda$core$String$shim, panda$collections$ImmutableHashMap$cleanup$shim, panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64, panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q$shim, panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit$shim, panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT$shim, panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT$shim, panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64$shim} };

typedef panda$core$Int64 (*$fn70)(panda$collections$Key*);
typedef panda$core$Bit (*$fn119)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn161)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70", 34, 4585553374950449834, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x5b\x5d\x28\x6b\x65\x79\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 151, 3831048297493090239, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };

void panda$collections$ImmutableHashMap$init(panda$collections$ImmutableHashMap* param0) {

// line 131
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->_count;
*$tmp3 = $tmp2;
// line 132
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Int64* $tmp5 = &param0->bucketCount;
*$tmp5 = $tmp4;
// line 133
panda$core$Int64 $tmp6 = (panda$core$Int64) {0};
int64_t $tmp7 = $tmp6.value;
panda$collections$ImmutableHashMap$Entry** $tmp8 = ((panda$collections$ImmutableHashMap$Entry**) pandaZAlloc($tmp7 * 8));
panda$collections$ImmutableHashMap$Entry*** $tmp9 = &param0->contents;
*$tmp9 = $tmp8;
return;

}
void panda$collections$ImmutableHashMap$cleanup(panda$collections$ImmutableHashMap* param0) {

panda$core$Int64 local0;
// line 138
panda$core$Int64 $tmp10 = (panda$core$Int64) {0};
panda$core$Int64* $tmp11 = &param0->bucketCount;
panda$core$Int64 $tmp12 = *$tmp11;
panda$core$Bit $tmp13 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp14 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp10, $tmp12, $tmp13);
panda$core$Int64 $tmp15 = $tmp14.min;
*(&local0) = $tmp15;
panda$core$Int64 $tmp16 = $tmp14.max;
panda$core$Bit $tmp17 = $tmp14.inclusive;
bool $tmp18 = $tmp17.value;
panda$core$Int64 $tmp19 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp20 = panda$core$Int64$convert$R$panda$core$UInt64($tmp19);
if ($tmp18) goto block4; else goto block5;
block4:;
int64_t $tmp21 = $tmp15.value;
int64_t $tmp22 = $tmp16.value;
bool $tmp23 = $tmp21 <= $tmp22;
panda$core$Bit $tmp24 = (panda$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block5:;
int64_t $tmp26 = $tmp15.value;
int64_t $tmp27 = $tmp16.value;
bool $tmp28 = $tmp26 < $tmp27;
panda$core$Bit $tmp29 = (panda$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block1; else goto block2;
block1:;
// line 139
panda$collections$ImmutableHashMap$Entry*** $tmp31 = &param0->contents;
panda$collections$ImmutableHashMap$Entry** $tmp32 = *$tmp31;
panda$core$Int64 $tmp33 = *(&local0);
int64_t $tmp34 = $tmp33.value;
panda$collections$ImmutableHashMap$Entry* $tmp35 = $tmp32[$tmp34];
panda$core$Bit $tmp36 = panda$core$Bit$init$builtin_bit($tmp35 != NULL);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block6; else goto block7;
block6:;
// line 140
panda$collections$ImmutableHashMap$Entry*** $tmp38 = &param0->contents;
panda$collections$ImmutableHashMap$Entry** $tmp39 = *$tmp38;
panda$core$Int64 $tmp40 = *(&local0);
int64_t $tmp41 = $tmp40.value;
panda$collections$ImmutableHashMap$Entry* $tmp42 = $tmp39[$tmp41];
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
goto block7;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp43 = *(&local0);
int64_t $tmp44 = $tmp16.value;
int64_t $tmp45 = $tmp43.value;
int64_t $tmp46 = $tmp44 - $tmp45;
panda$core$Int64 $tmp47 = (panda$core$Int64) {$tmp46};
panda$core$UInt64 $tmp48 = panda$core$Int64$convert$R$panda$core$UInt64($tmp47);
if ($tmp18) goto block9; else goto block10;
block9:;
uint64_t $tmp49 = $tmp48.value;
uint64_t $tmp50 = $tmp20.value;
bool $tmp51 = $tmp49 >= $tmp50;
panda$core$Bit $tmp52 = (panda$core$Bit) {$tmp51};
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block8; else goto block2;
block10:;
uint64_t $tmp54 = $tmp48.value;
uint64_t $tmp55 = $tmp20.value;
bool $tmp56 = $tmp54 > $tmp55;
panda$core$Bit $tmp57 = (panda$core$Bit) {$tmp56};
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block8; else goto block2;
block8:;
int64_t $tmp59 = $tmp43.value;
int64_t $tmp60 = $tmp19.value;
int64_t $tmp61 = $tmp59 + $tmp60;
panda$core$Int64 $tmp62 = (panda$core$Int64) {$tmp61};
*(&local0) = $tmp62;
goto block1;
block2:;
// line 143
panda$collections$ImmutableHashMap$Entry*** $tmp63 = &param0->contents;
panda$collections$ImmutableHashMap$Entry** $tmp64 = *$tmp63;
pandaFree($tmp64);
// line 137
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
return;

}
panda$core$Int64 panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(panda$collections$ImmutableHashMap* param0, panda$collections$Key* param1) {

panda$core$Int64 local0;
// line 151
// line 152
panda$core$Bit $tmp65 = panda$core$Bit$init$builtin_bit(false);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block1; else goto block3;
block1:;
// line 153
panda$core$Int64 $tmp67 = (panda$core$Int64) {0};
*(&local0) = $tmp67;
goto block2;
block3:;
// line 1
// line 156
ITable* $tmp68 = param1->$class->itable;
while ($tmp68->$class != (panda$core$Class*) &panda$collections$Key$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[0];
panda$core$Int64 $tmp71 = $tmp69(param1);
*(&local0) = $tmp71;
goto block2;
block2:;
// line 160
panda$core$Int64 $tmp72 = *(&local0);
panda$core$Int64 $tmp73 = *(&local0);
panda$core$Int64 $tmp74 = (panda$core$Int64) {20};
panda$core$Int64 $tmp75 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64($tmp73, $tmp74);
panda$core$Int64 $tmp76 = *(&local0);
panda$core$Int64 $tmp77 = (panda$core$Int64) {12};
panda$core$Int64 $tmp78 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64($tmp76, $tmp77);
panda$core$Int64 $tmp79 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp75, $tmp78);
panda$core$Int64 $tmp80 = *(&local0);
panda$core$Int64 $tmp81 = (panda$core$Int64) {7};
panda$core$Int64 $tmp82 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64($tmp80, $tmp81);
panda$core$Int64 $tmp83 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp79, $tmp82);
panda$core$Int64 $tmp84 = *(&local0);
panda$core$Int64 $tmp85 = (panda$core$Int64) {4};
panda$core$Int64 $tmp86 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64($tmp84, $tmp85);
panda$core$Int64 $tmp87 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp83, $tmp86);
panda$core$Int64 $tmp88 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp72, $tmp87);
*(&local0) = $tmp88;
// line 163
panda$core$Int64 $tmp89 = *(&local0);
panda$core$Int64* $tmp90 = &param0->bucketCount;
panda$core$Int64 $tmp91 = *$tmp90;
panda$core$Int64 $tmp92 = (panda$core$Int64) {1};
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93 - $tmp94;
panda$core$Int64 $tmp96 = (panda$core$Int64) {$tmp95};
panda$core$Int64 $tmp97 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp89, $tmp96);
*(&local0) = $tmp97;
// line 164
panda$core$Int64 $tmp98 = *(&local0);
return $tmp98;

}
panda$core$Object* panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(panda$collections$ImmutableHashMap* param0, panda$collections$Key* param1) {

panda$core$Int64 local0;
panda$collections$ImmutableHashMap$Entry* local1 = NULL;
panda$core$Bit local2;
// line 169
panda$core$Int64* $tmp99 = &param0->bucketCount;
panda$core$Int64 $tmp100 = *$tmp99;
panda$core$Int64 $tmp101 = (panda$core$Int64) {0};
panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp100, $tmp101);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block1; else goto block2;
block1:;
// line 170
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) NULL));
return ((panda$core$Object*) NULL);
block2:;
// line 172
panda$core$Int64 $tmp104 = panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(param0, param1);
*(&local0) = $tmp104;
// line 173
panda$collections$ImmutableHashMap$Entry*** $tmp105 = &param0->contents;
panda$collections$ImmutableHashMap$Entry** $tmp106 = *$tmp105;
panda$core$Int64 $tmp107 = *(&local0);
int64_t $tmp108 = $tmp107.value;
panda$collections$ImmutableHashMap$Entry* $tmp109 = $tmp106[$tmp108];
*(&local1) = ((panda$collections$ImmutableHashMap$Entry*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
panda$collections$ImmutableHashMap$Entry* $tmp110 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
*(&local1) = $tmp109;
// line 174
goto block3;
block3:;
panda$collections$ImmutableHashMap$Entry* $tmp111 = *(&local1);
panda$core$Bit $tmp112 = panda$core$Bit$init$builtin_bit($tmp111 != NULL);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block6; else goto block7;
block6:;
panda$collections$ImmutableHashMap$Entry* $tmp114 = *(&local1);
panda$collections$Key** $tmp115 = &$tmp114->key;
panda$collections$Key* $tmp116 = *$tmp115;
ITable* $tmp117 = ((panda$core$Equatable*) $tmp116)->$class->itable;
while ($tmp117->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp117 = $tmp117->next;
}
$fn119 $tmp118 = $tmp117->methods[1];
panda$core$Bit $tmp120 = $tmp118(((panda$core$Equatable*) $tmp116), ((panda$core$Equatable*) param1));
*(&local2) = $tmp120;
goto block8;
block7:;
*(&local2) = $tmp112;
goto block8;
block8:;
panda$core$Bit $tmp121 = *(&local2);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block4; else goto block5;
block4:;
// line 175
panda$collections$ImmutableHashMap$Entry* $tmp123 = *(&local1);
panda$collections$ImmutableHashMap$Entry** $tmp124 = &$tmp123->next;
panda$collections$ImmutableHashMap$Entry* $tmp125 = *$tmp124;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
panda$collections$ImmutableHashMap$Entry* $tmp126 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
*(&local1) = $tmp125;
goto block3;
block5:;
// line 177
panda$collections$ImmutableHashMap$Entry* $tmp127 = *(&local1);
panda$core$Bit $tmp128 = panda$core$Bit$init$builtin_bit($tmp127 != NULL);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block9; else goto block11;
block9:;
// line 178
panda$collections$ImmutableHashMap$Entry* $tmp130 = *(&local1);
panda$core$Object** $tmp131 = &$tmp130->value;
panda$core$Object* $tmp132 = *$tmp131;
panda$core$Panda$ref$panda$core$Object$Q($tmp132);
panda$collections$ImmutableHashMap$Entry* $tmp133 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
// unreffing e
*(&local1) = ((panda$collections$ImmutableHashMap$Entry*) NULL);
return $tmp132;
block11:;
// line 1
// line 181
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) NULL));
panda$collections$ImmutableHashMap$Entry* $tmp134 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// unreffing e
*(&local1) = ((panda$collections$ImmutableHashMap$Entry*) NULL);
return ((panda$core$Object*) NULL);
block10:;
panda$core$Bit $tmp135 = panda$core$Bit$init$builtin_bit(false);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp137 = (panda$core$Int64) {168};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s138, $tmp137, &$s139);
abort(); // unreachable
block12:;
abort(); // unreachable

}
panda$core$Bit panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit(panda$collections$ImmutableHashMap* param0, panda$collections$Key* param1) {

panda$core$Int64 local0;
panda$collections$ImmutableHashMap$Entry* local1 = NULL;
panda$core$Bit local2;
// line 187
panda$core$Int64* $tmp140 = &param0->bucketCount;
panda$core$Int64 $tmp141 = *$tmp140;
panda$core$Int64 $tmp142 = (panda$core$Int64) {0};
panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp141, $tmp142);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block1; else goto block2;
block1:;
// line 188
panda$core$Bit $tmp145 = panda$core$Bit$init$builtin_bit(false);
return $tmp145;
block2:;
// line 190
panda$core$Int64 $tmp146 = panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(param0, param1);
*(&local0) = $tmp146;
// line 191
panda$collections$ImmutableHashMap$Entry*** $tmp147 = &param0->contents;
panda$collections$ImmutableHashMap$Entry** $tmp148 = *$tmp147;
panda$core$Int64 $tmp149 = *(&local0);
int64_t $tmp150 = $tmp149.value;
panda$collections$ImmutableHashMap$Entry* $tmp151 = $tmp148[$tmp150];
*(&local1) = ((panda$collections$ImmutableHashMap$Entry*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
panda$collections$ImmutableHashMap$Entry* $tmp152 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
*(&local1) = $tmp151;
// line 192
goto block3;
block3:;
panda$collections$ImmutableHashMap$Entry* $tmp153 = *(&local1);
panda$core$Bit $tmp154 = panda$core$Bit$init$builtin_bit($tmp153 != NULL);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block6; else goto block7;
block6:;
panda$collections$ImmutableHashMap$Entry* $tmp156 = *(&local1);
panda$collections$Key** $tmp157 = &$tmp156->key;
panda$collections$Key* $tmp158 = *$tmp157;
ITable* $tmp159 = ((panda$core$Equatable*) $tmp158)->$class->itable;
while ($tmp159->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[1];
panda$core$Bit $tmp162 = $tmp160(((panda$core$Equatable*) $tmp158), ((panda$core$Equatable*) param1));
*(&local2) = $tmp162;
goto block8;
block7:;
*(&local2) = $tmp154;
goto block8;
block8:;
panda$core$Bit $tmp163 = *(&local2);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block4; else goto block5;
block4:;
// line 193
panda$collections$ImmutableHashMap$Entry* $tmp165 = *(&local1);
panda$collections$ImmutableHashMap$Entry** $tmp166 = &$tmp165->next;
panda$collections$ImmutableHashMap$Entry* $tmp167 = *$tmp166;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
panda$collections$ImmutableHashMap$Entry* $tmp168 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
*(&local1) = $tmp167;
goto block3;
block5:;
// line 195
panda$collections$ImmutableHashMap$Entry* $tmp169 = *(&local1);
panda$core$Bit $tmp170 = panda$core$Bit$init$builtin_bit($tmp169 != NULL);
panda$collections$ImmutableHashMap$Entry* $tmp171 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
// unreffing e
*(&local1) = ((panda$collections$ImmutableHashMap$Entry*) NULL);
return $tmp170;

}
panda$collections$Iterator* panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(panda$collections$ImmutableHashMap* param0) {

// line 200
panda$collections$ImmutableHashMap$KeyIterator* $tmp172 = (panda$collections$ImmutableHashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$KeyIterator$class);
panda$collections$ImmutableHashMap$KeyIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$KeyIterator$K$Cpanda$collections$ImmutableHashMap$KeyIterator$V$GT($tmp172, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp172)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
// unreffing REF($1:panda.collections.ImmutableHashMap.KeyIterator<panda.collections.ImmutableHashMap.K, panda.collections.ImmutableHashMap.V>)
return ((panda$collections$Iterator*) $tmp172);

}
panda$collections$Iterator* panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT(panda$collections$ImmutableHashMap* param0) {

// line 205
panda$collections$ImmutableHashMap$ValueIterator* $tmp173 = (panda$collections$ImmutableHashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$ValueIterator$class);
panda$collections$ImmutableHashMap$ValueIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$ValueIterator$K$Cpanda$collections$ImmutableHashMap$ValueIterator$V$GT($tmp173, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp173)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
// unreffing REF($1:panda.collections.ImmutableHashMap.ValueIterator<panda.collections.ImmutableHashMap.K, panda.collections.ImmutableHashMap.V>)
return ((panda$collections$Iterator*) $tmp173);

}
panda$core$Int64 panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64(panda$collections$ImmutableHashMap* param0) {

// line 210
panda$core$Int64* $tmp174 = &param0->_count;
panda$core$Int64 $tmp175 = *$tmp174;
return $tmp175;

}
panda$core$String* panda$collections$ImmutableHashMap$convert$R$panda$core$String(panda$collections$ImmutableHashMap* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$Int64 local2;
panda$collections$ImmutableHashMap$Entry* local3 = NULL;
// line 221
panda$core$MutableString* $tmp176 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp176);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
panda$core$MutableString* $tmp177 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
*(&local0) = $tmp176;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing REF($1:panda.core.MutableString)
// line 222
panda$core$MutableString* $tmp178 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp178, &$s179);
// line 223
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s180));
panda$core$String* $tmp181 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
*(&local1) = &$s182;
// line 224
panda$core$Int64 $tmp183 = (panda$core$Int64) {0};
panda$core$Int64* $tmp184 = &param0->bucketCount;
panda$core$Int64 $tmp185 = *$tmp184;
panda$core$Bit $tmp186 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp187 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp183, $tmp185, $tmp186);
panda$core$Int64 $tmp188 = $tmp187.min;
*(&local2) = $tmp188;
panda$core$Int64 $tmp189 = $tmp187.max;
panda$core$Bit $tmp190 = $tmp187.inclusive;
bool $tmp191 = $tmp190.value;
panda$core$Int64 $tmp192 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp193 = panda$core$Int64$convert$R$panda$core$UInt64($tmp192);
if ($tmp191) goto block4; else goto block5;
block4:;
int64_t $tmp194 = $tmp188.value;
int64_t $tmp195 = $tmp189.value;
bool $tmp196 = $tmp194 <= $tmp195;
panda$core$Bit $tmp197 = (panda$core$Bit) {$tmp196};
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block1; else goto block2;
block5:;
int64_t $tmp199 = $tmp188.value;
int64_t $tmp200 = $tmp189.value;
bool $tmp201 = $tmp199 < $tmp200;
panda$core$Bit $tmp202 = (panda$core$Bit) {$tmp201};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block1; else goto block2;
block1:;
// line 225
panda$collections$ImmutableHashMap$Entry*** $tmp204 = &param0->contents;
panda$collections$ImmutableHashMap$Entry** $tmp205 = *$tmp204;
panda$core$Int64 $tmp206 = *(&local2);
int64_t $tmp207 = $tmp206.value;
panda$collections$ImmutableHashMap$Entry* $tmp208 = $tmp205[$tmp207];
*(&local3) = ((panda$collections$ImmutableHashMap$Entry*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
panda$collections$ImmutableHashMap$Entry* $tmp209 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
*(&local3) = $tmp208;
// line 226
goto block6;
block6:;
panda$collections$ImmutableHashMap$Entry* $tmp210 = *(&local3);
panda$core$Bit $tmp211 = panda$core$Bit$init$builtin_bit($tmp210 != NULL);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block7; else goto block8;
block7:;
// line 227
panda$core$MutableString* $tmp213 = *(&local0);
panda$core$String* $tmp214 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp213, $tmp214);
// line 228
panda$collections$ImmutableHashMap$Entry* $tmp215 = *(&local3);
panda$collections$Key** $tmp216 = &$tmp215->key;
panda$collections$Key* $tmp217 = *$tmp216;
panda$core$Bit $tmp218 = panda$core$Bit$init$builtin_bit(true);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block9; else goto block11;
block9:;
// line 229
panda$core$MutableString* $tmp220 = *(&local0);
panda$collections$ImmutableHashMap$Entry* $tmp221 = *(&local3);
panda$collections$Key** $tmp222 = &$tmp221->key;
panda$collections$Key* $tmp223 = *$tmp222;
panda$core$MutableString$append$panda$core$Object($tmp220, ((panda$core$Object*) $tmp223));
goto block10;
block11:;
// line 1
// line 232
panda$core$MutableString* $tmp224 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp224, &$s225);
goto block10;
block10:;
// line 234
panda$core$MutableString* $tmp226 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp226, &$s227);
// line 235
panda$collections$ImmutableHashMap$Entry* $tmp228 = *(&local3);
panda$core$Object** $tmp229 = &$tmp228->value;
panda$core$Object* $tmp230 = *$tmp229;
panda$core$Bit $tmp231 = panda$core$Bit$init$builtin_bit(true);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block12; else goto block14;
block12:;
// line 236
panda$core$MutableString* $tmp233 = *(&local0);
panda$collections$ImmutableHashMap$Entry* $tmp234 = *(&local3);
panda$core$Object** $tmp235 = &$tmp234->value;
panda$core$Object* $tmp236 = *$tmp235;
panda$core$MutableString$append$panda$core$Object($tmp233, $tmp236);
goto block13;
block14:;
// line 1
// line 239
panda$core$MutableString* $tmp237 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp237, &$s238);
goto block13;
block13:;
// line 241
panda$collections$ImmutableHashMap$Entry* $tmp239 = *(&local3);
panda$collections$ImmutableHashMap$Entry** $tmp240 = &$tmp239->next;
panda$collections$ImmutableHashMap$Entry* $tmp241 = *$tmp240;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
panda$collections$ImmutableHashMap$Entry* $tmp242 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
*(&local3) = $tmp241;
// line 242
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s243));
panda$core$String* $tmp244 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
*(&local1) = &$s245;
goto block6;
block8:;
panda$collections$ImmutableHashMap$Entry* $tmp246 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
// unreffing entry
*(&local3) = ((panda$collections$ImmutableHashMap$Entry*) NULL);
goto block3;
block3:;
panda$core$Int64 $tmp247 = *(&local2);
int64_t $tmp248 = $tmp189.value;
int64_t $tmp249 = $tmp247.value;
int64_t $tmp250 = $tmp248 - $tmp249;
panda$core$Int64 $tmp251 = (panda$core$Int64) {$tmp250};
panda$core$UInt64 $tmp252 = panda$core$Int64$convert$R$panda$core$UInt64($tmp251);
if ($tmp191) goto block16; else goto block17;
block16:;
uint64_t $tmp253 = $tmp252.value;
uint64_t $tmp254 = $tmp193.value;
bool $tmp255 = $tmp253 >= $tmp254;
panda$core$Bit $tmp256 = (panda$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block15; else goto block2;
block17:;
uint64_t $tmp258 = $tmp252.value;
uint64_t $tmp259 = $tmp193.value;
bool $tmp260 = $tmp258 > $tmp259;
panda$core$Bit $tmp261 = (panda$core$Bit) {$tmp260};
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block15; else goto block2;
block15:;
int64_t $tmp263 = $tmp247.value;
int64_t $tmp264 = $tmp192.value;
int64_t $tmp265 = $tmp263 + $tmp264;
panda$core$Int64 $tmp266 = (panda$core$Int64) {$tmp265};
*(&local2) = $tmp266;
goto block1;
block2:;
// line 245
panda$core$MutableString* $tmp267 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp267, &$s268);
// line 246
panda$core$MutableString* $tmp269 = *(&local0);
panda$core$String* $tmp270 = panda$core$MutableString$finish$R$panda$core$String($tmp269);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($183:panda.core.String)
panda$core$String* $tmp271 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp272 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp270;

}
panda$collections$ImmutableHashMap* panda$collections$ImmutableHashMap$from$panda$collections$HashMap$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT(panda$collections$HashMap* param0) {

// line 257
panda$collections$ImmutableHashMap* $tmp273 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
panda$collections$ImmutableHashMap$init($tmp273);
panda$core$Class** $tmp274 = &((panda$core$Object*) $tmp273)->$class;
panda$core$Class* $tmp275 = *$tmp274;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
panda$core$Class** $tmp276 = &((panda$core$Object*) param0)->$class;
panda$core$Class* $tmp277 = *$tmp276;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
panda$core$Class** $tmp278 = &((panda$core$Object*) param0)->$class;
*$tmp278 = $tmp275;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
// unreffing REF($2:panda.collections.ImmutableHashMap<panda.collections.ImmutableHashMap.K, panda.collections.ImmutableHashMap.V>)
// line 258
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableHashMap*) ((panda$core$Object*) param0))));
return ((panda$collections$ImmutableHashMap*) ((panda$core$Object*) param0));

}

