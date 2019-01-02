#include "panda/collections/IdentityMap.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/MapWriter.h"
#include "panda/collections/MapView.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Map.h"
#include "panda/core/Int64.h"
#include "panda/collections/IdentityMap/Entry.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableString.h"

__attribute__((weak)) void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim(panda$collections$IdentityMap* p0, panda$core$Object* p1, panda$core$Object* p2) {
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(p0, p1, p2);

}
__attribute__((weak)) void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K$shim(panda$collections$IdentityMap* p0, panda$core$Object* p1) {
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(p0, p1);

}
__attribute__((weak)) panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim(panda$collections$IdentityMap* p0, panda$core$Object* p1) {
    panda$core$Object* result = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(p0, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit$shim(panda$collections$IdentityMap* p0, panda$core$Object* p1) {
    panda$core$Bit result = panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(p0, p1);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim(panda$collections$IdentityMap* p0) {
    panda$collections$Iterator* result = panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(p0);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim(panda$collections$IdentityMap* p0) {
    panda$collections$Iterator* result = panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$IdentityMap$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, NULL, { panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim, panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$IdentityMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapWriter, { panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit$shim, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$IdentityMap$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapView, { } };

static panda$core$String $s1;
panda$collections$IdentityMap$class_type panda$collections$IdentityMap$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$Map, { panda$collections$IdentityMap$convert$R$panda$core$String, panda$collections$IdentityMap$cleanup, panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit$shim, panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim, panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K$shim, panda$collections$IdentityMap$clear, panda$collections$IdentityMap$incrementCount, panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, -1297284844070118424, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x5b\x5d\x28\x6b\x65\x79\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 136, -4599786436032484571, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x6b\x65\x79\x73\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 130, -359283405592877821, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x76\x61\x6c\x75\x65\x73\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 132, 1083046460865846590, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* param0) {

panda$core$Int64 local0;
// line 51
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// line 57
panda$core$Int64* $tmp4 = &param0->changeCount;
panda$core$Int64 $tmp5 = *$tmp4;
panda$core$Int64 $tmp6 = (panda$core$Int64) {1};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
panda$core$Int64 $tmp10 = (panda$core$Int64) {$tmp9};
panda$core$Int64* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// line 58
panda$core$Int64 $tmp12 = (panda$core$Int64) {0};
panda$core$Int64* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// line 59
panda$core$Int64 $tmp14 = (panda$core$Int64) {16};
panda$core$Int64* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// line 60
panda$core$Int64* $tmp16 = &param0->bucketCount;
panda$core$Int64 $tmp17 = *$tmp16;
int64_t $tmp18 = $tmp17.value;
panda$collections$IdentityMap$Entry** $tmp19 = ((panda$collections$IdentityMap$Entry**) pandaZAlloc($tmp18 * 8));
panda$collections$IdentityMap$Entry*** $tmp20 = &param0->contents;
*$tmp20 = $tmp19;
// line 61
panda$core$Int64 $tmp21 = (panda$core$Int64) {0};
panda$core$Int64* $tmp22 = &param0->bucketCount;
panda$core$Int64 $tmp23 = *$tmp22;
panda$core$Bit $tmp24 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp25 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp21, $tmp23, $tmp24);
panda$core$Int64 $tmp26 = $tmp25.min;
*(&local0) = $tmp26;
panda$core$Int64 $tmp27 = $tmp25.max;
panda$core$Bit $tmp28 = $tmp25.inclusive;
bool $tmp29 = $tmp28.value;
panda$core$Int64 $tmp30 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp31 = panda$core$Int64$convert$R$panda$core$UInt64($tmp30);
if ($tmp29) goto block4; else goto block5;
block4:;
int64_t $tmp32 = $tmp26.value;
int64_t $tmp33 = $tmp27.value;
bool $tmp34 = $tmp32 <= $tmp33;
panda$core$Bit $tmp35 = (panda$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block2;
block5:;
int64_t $tmp37 = $tmp26.value;
int64_t $tmp38 = $tmp27.value;
bool $tmp39 = $tmp37 < $tmp38;
panda$core$Bit $tmp40 = (panda$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block1; else goto block2;
block1:;
// line 62
panda$collections$IdentityMap$Entry*** $tmp42 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp43 = *$tmp42;
panda$core$Int64 $tmp44 = *(&local0);
int64_t $tmp45 = $tmp44.value;
panda$collections$IdentityMap$Entry* $tmp46 = $tmp43[$tmp45];
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$IdentityMap$Entry*) NULL)));
$tmp43[$tmp45] = ((panda$collections$IdentityMap$Entry*) NULL);
goto block3;
block3:;
panda$core$Int64 $tmp47 = *(&local0);
int64_t $tmp48 = $tmp27.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 - $tmp49;
panda$core$Int64 $tmp51 = (panda$core$Int64) {$tmp50};
panda$core$UInt64 $tmp52 = panda$core$Int64$convert$R$panda$core$UInt64($tmp51);
if ($tmp29) goto block7; else goto block8;
block7:;
uint64_t $tmp53 = $tmp52.value;
uint64_t $tmp54 = $tmp31.value;
bool $tmp55 = $tmp53 >= $tmp54;
panda$core$Bit $tmp56 = (panda$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block6; else goto block2;
block8:;
uint64_t $tmp58 = $tmp52.value;
uint64_t $tmp59 = $tmp31.value;
bool $tmp60 = $tmp58 > $tmp59;
panda$core$Bit $tmp61 = (panda$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block6; else goto block2;
block6:;
int64_t $tmp63 = $tmp47.value;
int64_t $tmp64 = $tmp30.value;
int64_t $tmp65 = $tmp63 + $tmp64;
panda$core$Int64 $tmp66 = (panda$core$Int64) {$tmp65};
*(&local0) = $tmp66;
goto block1;
block2:;
// line 64
panda$core$Int64* $tmp67 = &param0->bucketCount;
panda$core$Int64 $tmp68 = *$tmp67;
panda$core$Int64 $tmp69 = (panda$core$Int64) {3};
int64_t $tmp70 = $tmp68.value;
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70 * $tmp71;
panda$core$Int64 $tmp73 = (panda$core$Int64) {$tmp72};
panda$core$Int64 $tmp74 = (panda$core$Int64) {4};
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75 / $tmp76;
panda$core$Int64 $tmp78 = (panda$core$Int64) {$tmp77};
panda$core$Int64* $tmp79 = &param0->threshold;
*$tmp79 = $tmp78;
return;

}
void panda$collections$IdentityMap$cleanup(panda$collections$IdentityMap* param0) {

panda$core$Int64 local0;
// line 69
panda$core$Int64 $tmp80 = (panda$core$Int64) {0};
panda$core$Int64* $tmp81 = &param0->bucketCount;
panda$core$Int64 $tmp82 = *$tmp81;
panda$core$Bit $tmp83 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp84 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp80, $tmp82, $tmp83);
panda$core$Int64 $tmp85 = $tmp84.min;
*(&local0) = $tmp85;
panda$core$Int64 $tmp86 = $tmp84.max;
panda$core$Bit $tmp87 = $tmp84.inclusive;
bool $tmp88 = $tmp87.value;
panda$core$Int64 $tmp89 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp90 = panda$core$Int64$convert$R$panda$core$UInt64($tmp89);
if ($tmp88) goto block4; else goto block5;
block4:;
int64_t $tmp91 = $tmp85.value;
int64_t $tmp92 = $tmp86.value;
bool $tmp93 = $tmp91 <= $tmp92;
panda$core$Bit $tmp94 = (panda$core$Bit) {$tmp93};
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block1; else goto block2;
block5:;
int64_t $tmp96 = $tmp85.value;
int64_t $tmp97 = $tmp86.value;
bool $tmp98 = $tmp96 < $tmp97;
panda$core$Bit $tmp99 = (panda$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block1; else goto block2;
block1:;
// line 70
panda$collections$IdentityMap$Entry*** $tmp101 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp102 = *$tmp101;
panda$core$Int64 $tmp103 = *(&local0);
int64_t $tmp104 = $tmp103.value;
panda$collections$IdentityMap$Entry* $tmp105 = $tmp102[$tmp104];
panda$core$Bit $tmp106 = panda$core$Bit$init$builtin_bit($tmp105 != NULL);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block6; else goto block7;
block6:;
// line 71
panda$collections$IdentityMap$Entry*** $tmp108 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp109 = *$tmp108;
panda$core$Int64 $tmp110 = *(&local0);
int64_t $tmp111 = $tmp110.value;
panda$collections$IdentityMap$Entry* $tmp112 = $tmp109[$tmp111];
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
goto block7;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp113 = *(&local0);
int64_t $tmp114 = $tmp86.value;
int64_t $tmp115 = $tmp113.value;
int64_t $tmp116 = $tmp114 - $tmp115;
panda$core$Int64 $tmp117 = (panda$core$Int64) {$tmp116};
panda$core$UInt64 $tmp118 = panda$core$Int64$convert$R$panda$core$UInt64($tmp117);
if ($tmp88) goto block9; else goto block10;
block9:;
uint64_t $tmp119 = $tmp118.value;
uint64_t $tmp120 = $tmp90.value;
bool $tmp121 = $tmp119 >= $tmp120;
panda$core$Bit $tmp122 = (panda$core$Bit) {$tmp121};
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block8; else goto block2;
block10:;
uint64_t $tmp124 = $tmp118.value;
uint64_t $tmp125 = $tmp90.value;
bool $tmp126 = $tmp124 > $tmp125;
panda$core$Bit $tmp127 = (panda$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block8; else goto block2;
block8:;
int64_t $tmp129 = $tmp113.value;
int64_t $tmp130 = $tmp89.value;
int64_t $tmp131 = $tmp129 + $tmp130;
panda$core$Int64 $tmp132 = (panda$core$Int64) {$tmp131};
*(&local0) = $tmp132;
goto block1;
block2:;
// line 74
panda$collections$IdentityMap$Entry*** $tmp133 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp134 = *$tmp133;
pandaFree($tmp134);
return;

}
panda$core$Int64 panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(panda$collections$IdentityMap* param0, panda$core$Object* param1) {

// line 82
panda$core$Int64 $tmp135;
panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp135, param1);
panda$core$Int64* $tmp136 = &param0->bucketCount;
panda$core$Int64 $tmp137 = *$tmp136;
panda$core$Int64 $tmp138 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp135, $tmp137);
return $tmp138;

}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(panda$collections$IdentityMap* param0, panda$core$Object* param1) {

panda$core$Int64 local0;
panda$collections$IdentityMap$Entry* local1 = NULL;
panda$core$Bit local2;
// line 87
panda$core$Int64 $tmp139 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(param0, param1);
*(&local0) = $tmp139;
// line 88
panda$collections$IdentityMap$Entry*** $tmp140 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp141 = *$tmp140;
panda$core$Int64 $tmp142 = *(&local0);
int64_t $tmp143 = $tmp142.value;
panda$collections$IdentityMap$Entry* $tmp144 = $tmp141[$tmp143];
*(&local1) = ((panda$collections$IdentityMap$Entry*) NULL);
panda$collections$IdentityMap$Entry* $tmp145 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
*(&local1) = $tmp144;
// line 89
goto block1;
block1:;
panda$collections$IdentityMap$Entry* $tmp146 = *(&local1);
panda$core$Bit $tmp147 = panda$core$Bit$init$builtin_bit($tmp146 != NULL);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block4; else goto block5;
block4:;
panda$collections$IdentityMap$Entry* $tmp149 = *(&local1);
panda$core$Object** $tmp150 = &$tmp149->key;
panda$core$Object* $tmp151 = *$tmp150;
bool $tmp152 = $tmp151 != param1;
panda$core$Bit $tmp153 = panda$core$Bit$init$builtin_bit($tmp152);
*(&local2) = $tmp153;
goto block6;
block5:;
*(&local2) = $tmp147;
goto block6;
block6:;
panda$core$Bit $tmp154 = *(&local2);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block2; else goto block3;
block2:;
// line 90
panda$collections$IdentityMap$Entry* $tmp156 = *(&local1);
panda$collections$IdentityMap$Entry** $tmp157 = &$tmp156->next;
panda$collections$IdentityMap$Entry* $tmp158 = *$tmp157;
panda$collections$IdentityMap$Entry* $tmp159 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
*(&local1) = $tmp158;
goto block1;
block3:;
// line 92
panda$collections$IdentityMap$Entry* $tmp160 = *(&local1);
panda$core$Bit $tmp161 = panda$core$Bit$init$builtin_bit($tmp160 != NULL);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block7; else goto block9;
block7:;
// line 93
panda$collections$IdentityMap$Entry* $tmp163 = *(&local1);
panda$core$Object** $tmp164 = &$tmp163->value;
panda$core$Object* $tmp165 = *$tmp164;
panda$core$Panda$ref$panda$core$Object$Q($tmp165);
panda$collections$IdentityMap$Entry* $tmp166 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
// unreffing e
*(&local1) = ((panda$collections$IdentityMap$Entry*) NULL);
return $tmp165;
block9:;
// line 1
// line 96
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) NULL));
panda$collections$IdentityMap$Entry* $tmp167 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// unreffing e
*(&local1) = ((panda$collections$IdentityMap$Entry*) NULL);
return ((panda$core$Object*) NULL);
block8:;
panda$core$Bit $tmp168 = panda$core$Bit$init$builtin_bit(false);
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp170 = (panda$core$Int64) {86};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s171, $tmp170, &$s172);
abort(); // unreachable
block10:;
abort(); // unreachable

}
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* param0, panda$core$Object* param1) {

panda$core$Int64 local0;
panda$collections$IdentityMap$Entry* local1 = NULL;
panda$core$Bit local2;
// line 102
panda$core$Int64 $tmp173 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(param0, param1);
*(&local0) = $tmp173;
// line 103
panda$collections$IdentityMap$Entry*** $tmp174 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp175 = *$tmp174;
panda$core$Int64 $tmp176 = *(&local0);
int64_t $tmp177 = $tmp176.value;
panda$collections$IdentityMap$Entry* $tmp178 = $tmp175[$tmp177];
*(&local1) = ((panda$collections$IdentityMap$Entry*) NULL);
panda$collections$IdentityMap$Entry* $tmp179 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
*(&local1) = $tmp178;
// line 104
goto block1;
block1:;
panda$collections$IdentityMap$Entry* $tmp180 = *(&local1);
panda$core$Bit $tmp181 = panda$core$Bit$init$builtin_bit($tmp180 != NULL);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block4; else goto block5;
block4:;
panda$collections$IdentityMap$Entry* $tmp183 = *(&local1);
panda$core$Object** $tmp184 = &$tmp183->key;
panda$core$Object* $tmp185 = *$tmp184;
bool $tmp186 = $tmp185 != param1;
panda$core$Bit $tmp187 = panda$core$Bit$init$builtin_bit($tmp186);
*(&local2) = $tmp187;
goto block6;
block5:;
*(&local2) = $tmp181;
goto block6;
block6:;
panda$core$Bit $tmp188 = *(&local2);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block2; else goto block3;
block2:;
// line 105
panda$collections$IdentityMap$Entry* $tmp190 = *(&local1);
panda$collections$IdentityMap$Entry** $tmp191 = &$tmp190->next;
panda$collections$IdentityMap$Entry* $tmp192 = *$tmp191;
panda$collections$IdentityMap$Entry* $tmp193 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
*(&local1) = $tmp192;
goto block1;
block3:;
// line 107
panda$collections$IdentityMap$Entry* $tmp194 = *(&local1);
panda$core$Bit $tmp195 = panda$core$Bit$init$builtin_bit($tmp194 != NULL);
panda$collections$IdentityMap$Entry* $tmp196 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing e
*(&local1) = ((panda$collections$IdentityMap$Entry*) NULL);
return $tmp195;

}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* param0, panda$core$Object* param1, panda$core$Object* param2) {

panda$core$Int64 local0;
panda$collections$IdentityMap$Entry* local1 = NULL;
panda$core$Bit local2;
panda$collections$IdentityMap$Entry* local3 = NULL;
// line 112
panda$core$Int64* $tmp197 = &param0->changeCount;
panda$core$Int64 $tmp198 = *$tmp197;
panda$core$Int64 $tmp199 = (panda$core$Int64) {1};
int64_t $tmp200 = $tmp198.value;
int64_t $tmp201 = $tmp199.value;
int64_t $tmp202 = $tmp200 + $tmp201;
panda$core$Int64 $tmp203 = (panda$core$Int64) {$tmp202};
panda$core$Int64* $tmp204 = &param0->changeCount;
*$tmp204 = $tmp203;
// line 113
panda$core$Int64 $tmp205 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(param0, param1);
*(&local0) = $tmp205;
// line 114
panda$collections$IdentityMap$Entry*** $tmp206 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp207 = *$tmp206;
panda$core$Int64 $tmp208 = *(&local0);
int64_t $tmp209 = $tmp208.value;
panda$collections$IdentityMap$Entry* $tmp210 = $tmp207[$tmp209];
*(&local1) = ((panda$collections$IdentityMap$Entry*) NULL);
panda$collections$IdentityMap$Entry* $tmp211 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
*(&local1) = $tmp210;
// line 115
goto block1;
block1:;
panda$collections$IdentityMap$Entry* $tmp212 = *(&local1);
panda$core$Bit $tmp213 = panda$core$Bit$init$builtin_bit($tmp212 != NULL);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block4; else goto block5;
block4:;
panda$collections$IdentityMap$Entry* $tmp215 = *(&local1);
panda$core$Object** $tmp216 = &$tmp215->key;
panda$core$Object* $tmp217 = *$tmp216;
bool $tmp218 = $tmp217 != param1;
panda$core$Bit $tmp219 = panda$core$Bit$init$builtin_bit($tmp218);
*(&local2) = $tmp219;
goto block6;
block5:;
*(&local2) = $tmp213;
goto block6;
block6:;
panda$core$Bit $tmp220 = *(&local2);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block2; else goto block3;
block2:;
// line 116
panda$collections$IdentityMap$Entry* $tmp222 = *(&local1);
panda$collections$IdentityMap$Entry** $tmp223 = &$tmp222->next;
panda$collections$IdentityMap$Entry* $tmp224 = *$tmp223;
panda$collections$IdentityMap$Entry* $tmp225 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
*(&local1) = $tmp224;
goto block1;
block3:;
// line 118
panda$collections$IdentityMap$Entry* $tmp226 = *(&local1);
panda$core$Bit $tmp227 = panda$core$Bit$init$builtin_bit($tmp226 == NULL);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block7; else goto block9;
block7:;
// line 119
panda$collections$IdentityMap$Entry*** $tmp229 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp230 = *$tmp229;
panda$core$Int64 $tmp231 = *(&local0);
int64_t $tmp232 = $tmp231.value;
panda$collections$IdentityMap$Entry* $tmp233 = $tmp230[$tmp232];
*(&local3) = ((panda$collections$IdentityMap$Entry*) NULL);
panda$collections$IdentityMap$Entry* $tmp234 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
*(&local3) = $tmp233;
// line 120
panda$collections$IdentityMap$Entry* $tmp235 = (panda$collections$IdentityMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$IdentityMap$Entry$class);
panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp235, param1, param2);
panda$collections$IdentityMap$Entry* $tmp236 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
*(&local1) = $tmp235;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// line 121
panda$collections$IdentityMap$Entry* $tmp237 = *(&local1);
panda$collections$IdentityMap$Entry* $tmp238 = *(&local3);
panda$collections$IdentityMap$Entry** $tmp239 = &$tmp237->next;
panda$collections$IdentityMap$Entry* $tmp240 = *$tmp239;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
panda$collections$IdentityMap$Entry** $tmp241 = &$tmp237->next;
*$tmp241 = $tmp238;
// line 122
panda$collections$IdentityMap$Entry*** $tmp242 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp243 = *$tmp242;
panda$core$Int64 $tmp244 = *(&local0);
panda$collections$IdentityMap$Entry* $tmp245 = *(&local1);
int64_t $tmp246 = $tmp244.value;
panda$collections$IdentityMap$Entry* $tmp247 = $tmp243[$tmp246];
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
$tmp243[$tmp246] = $tmp245;
// line 123
panda$collections$IdentityMap$incrementCount(param0);
panda$collections$IdentityMap$Entry* $tmp248 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
// unreffing old
*(&local3) = ((panda$collections$IdentityMap$Entry*) NULL);
goto block8;
block9:;
// line 1
// line 126
panda$collections$IdentityMap$Entry* $tmp249 = *(&local1);
panda$core$Object** $tmp250 = &$tmp249->value;
panda$core$Object* $tmp251 = *$tmp250;
panda$core$Panda$unref$panda$core$Object$Q($tmp251);
panda$core$Panda$ref$panda$core$Object$Q(param2);
panda$core$Object** $tmp252 = &$tmp249->value;
*$tmp252 = param2;
goto block8;
block8:;
panda$collections$IdentityMap$Entry* $tmp253 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
// unreffing e
*(&local1) = ((panda$collections$IdentityMap$Entry*) NULL);
return;

}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* param0, panda$core$Object* param1) {

panda$core$Int64 local0;
panda$collections$IdentityMap$Entry* local1 = NULL;
panda$collections$IdentityMap$Entry* local2 = NULL;
panda$collections$IdentityMap$Entry* local3 = NULL;
// line 132
panda$core$Int64* $tmp254 = &param0->changeCount;
panda$core$Int64 $tmp255 = *$tmp254;
panda$core$Int64 $tmp256 = (panda$core$Int64) {1};
int64_t $tmp257 = $tmp255.value;
int64_t $tmp258 = $tmp256.value;
int64_t $tmp259 = $tmp257 + $tmp258;
panda$core$Int64 $tmp260 = (panda$core$Int64) {$tmp259};
panda$core$Int64* $tmp261 = &param0->changeCount;
*$tmp261 = $tmp260;
// line 133
panda$core$Int64 $tmp262 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(param0, param1);
*(&local0) = $tmp262;
// line 134
panda$collections$IdentityMap$Entry*** $tmp263 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp264 = *$tmp263;
panda$core$Int64 $tmp265 = *(&local0);
int64_t $tmp266 = $tmp265.value;
panda$collections$IdentityMap$Entry* $tmp267 = $tmp264[$tmp266];
*(&local1) = ((panda$collections$IdentityMap$Entry*) NULL);
panda$collections$IdentityMap$Entry* $tmp268 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
*(&local1) = $tmp267;
// line 136
panda$collections$IdentityMap$Entry* $tmp269 = *(&local1);
panda$core$Bit $tmp270 = panda$core$Bit$init$builtin_bit($tmp269 == NULL);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block1; else goto block2;
block1:;
// line 137
panda$collections$IdentityMap$Entry* $tmp272 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
// unreffing e
*(&local1) = ((panda$collections$IdentityMap$Entry*) NULL);
return;
block2:;
// line 140
panda$collections$IdentityMap$Entry* $tmp273 = *(&local1);
panda$core$Object** $tmp274 = &$tmp273->key;
panda$core$Object* $tmp275 = *$tmp274;
bool $tmp276 = $tmp275 == param1;
panda$core$Bit $tmp277 = panda$core$Bit$init$builtin_bit($tmp276);
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block3; else goto block4;
block3:;
// line 141
panda$collections$IdentityMap$Entry*** $tmp279 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp280 = *$tmp279;
panda$core$Int64 $tmp281 = *(&local0);
panda$collections$IdentityMap$Entry* $tmp282 = *(&local1);
panda$collections$IdentityMap$Entry** $tmp283 = &$tmp282->next;
panda$collections$IdentityMap$Entry* $tmp284 = *$tmp283;
int64_t $tmp285 = $tmp281.value;
panda$collections$IdentityMap$Entry* $tmp286 = $tmp280[$tmp285];
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
$tmp280[$tmp285] = $tmp284;
// line 142
panda$core$Int64* $tmp287 = &param0->_count;
panda$core$Int64 $tmp288 = *$tmp287;
panda$core$Int64 $tmp289 = (panda$core$Int64) {1};
int64_t $tmp290 = $tmp288.value;
int64_t $tmp291 = $tmp289.value;
int64_t $tmp292 = $tmp290 - $tmp291;
panda$core$Int64 $tmp293 = (panda$core$Int64) {$tmp292};
panda$core$Int64* $tmp294 = &param0->_count;
*$tmp294 = $tmp293;
// line 143
panda$collections$IdentityMap$Entry* $tmp295 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing e
*(&local1) = ((panda$collections$IdentityMap$Entry*) NULL);
return;
block4:;
// line 145
goto block5;
block5:;
// line 146
panda$collections$IdentityMap$Entry* $tmp296 = *(&local1);
panda$collections$IdentityMap$Entry** $tmp297 = &$tmp296->next;
panda$collections$IdentityMap$Entry* $tmp298 = *$tmp297;
*(&local2) = ((panda$collections$IdentityMap$Entry*) NULL);
panda$collections$IdentityMap$Entry* $tmp299 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
*(&local2) = $tmp298;
// line 147
panda$collections$IdentityMap$Entry* $tmp300 = *(&local2);
panda$core$Bit $tmp301 = panda$core$Bit$init$builtin_bit($tmp300 == NULL);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block7; else goto block8;
block7:;
// line 149
panda$collections$IdentityMap$Entry* $tmp303 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
// unreffing next
*(&local2) = ((panda$collections$IdentityMap$Entry*) NULL);
panda$collections$IdentityMap$Entry* $tmp304 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
// unreffing e
*(&local1) = ((panda$collections$IdentityMap$Entry*) NULL);
return;
block8:;
// line 151
panda$collections$IdentityMap$Entry* $tmp305 = *(&local2);
panda$core$Object** $tmp306 = &$tmp305->key;
panda$core$Object* $tmp307 = *$tmp306;
bool $tmp308 = $tmp307 == param1;
panda$core$Bit $tmp309 = panda$core$Bit$init$builtin_bit($tmp308);
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block9; else goto block10;
block9:;
// line 153
panda$collections$IdentityMap$Entry* $tmp311 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
// unreffing next
*(&local2) = ((panda$collections$IdentityMap$Entry*) NULL);
goto block6;
block10:;
// line 155
panda$collections$IdentityMap$Entry* $tmp312 = *(&local2);
panda$collections$IdentityMap$Entry* $tmp313 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
*(&local1) = $tmp312;
panda$collections$IdentityMap$Entry* $tmp314 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
// unreffing next
*(&local2) = ((panda$collections$IdentityMap$Entry*) NULL);
goto block5;
block6:;
// line 158
panda$collections$IdentityMap$Entry* $tmp315 = *(&local1);
panda$collections$IdentityMap$Entry** $tmp316 = &$tmp315->next;
panda$collections$IdentityMap$Entry* $tmp317 = *$tmp316;
*(&local3) = ((panda$collections$IdentityMap$Entry*) NULL);
panda$collections$IdentityMap$Entry* $tmp318 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
*(&local3) = $tmp317;
// line 159
panda$collections$IdentityMap$Entry* $tmp319 = *(&local3);
panda$core$Bit $tmp320 = panda$core$Bit$init$builtin_bit($tmp319 != NULL);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp322 = (panda$core$Int64) {159};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s323, $tmp322);
abort(); // unreachable
block11:;
// line 160
panda$collections$IdentityMap$Entry* $tmp324 = *(&local1);
panda$collections$IdentityMap$Entry* $tmp325 = *(&local3);
panda$collections$IdentityMap$Entry** $tmp326 = &$tmp325->next;
panda$collections$IdentityMap$Entry* $tmp327 = *$tmp326;
panda$collections$IdentityMap$Entry** $tmp328 = &$tmp324->next;
panda$collections$IdentityMap$Entry* $tmp329 = *$tmp328;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
panda$collections$IdentityMap$Entry** $tmp330 = &$tmp324->next;
*$tmp330 = $tmp327;
// line 161
panda$core$Int64* $tmp331 = &param0->_count;
panda$core$Int64 $tmp332 = *$tmp331;
panda$core$Int64 $tmp333 = (panda$core$Int64) {1};
int64_t $tmp334 = $tmp332.value;
int64_t $tmp335 = $tmp333.value;
int64_t $tmp336 = $tmp334 - $tmp335;
panda$core$Int64 $tmp337 = (panda$core$Int64) {$tmp336};
panda$core$Int64* $tmp338 = &param0->_count;
*$tmp338 = $tmp337;
panda$collections$IdentityMap$Entry* $tmp339 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing next
*(&local3) = ((panda$collections$IdentityMap$Entry*) NULL);
panda$collections$IdentityMap$Entry* $tmp340 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
// unreffing e
*(&local1) = ((panda$collections$IdentityMap$Entry*) NULL);
return;

}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 165
panda$core$Int64* $tmp341 = &param0->changeCount;
panda$core$Int64 $tmp342 = *$tmp341;
panda$core$Int64 $tmp343 = (panda$core$Int64) {1};
int64_t $tmp344 = $tmp342.value;
int64_t $tmp345 = $tmp343.value;
int64_t $tmp346 = $tmp344 + $tmp345;
panda$core$Int64 $tmp347 = (panda$core$Int64) {$tmp346};
panda$core$Int64* $tmp348 = &param0->changeCount;
*$tmp348 = $tmp347;
// line 166
panda$core$Int64 $tmp349 = (panda$core$Int64) {0};
panda$core$Int64* $tmp350 = &param0->_count;
*$tmp350 = $tmp349;
// line 167
panda$core$Int64 $tmp351 = (panda$core$Int64) {0};
panda$core$Int64* $tmp352 = &param0->bucketCount;
panda$core$Int64 $tmp353 = *$tmp352;
panda$core$Bit $tmp354 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp355 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp351, $tmp353, $tmp354);
panda$core$Int64 $tmp356 = $tmp355.min;
*(&local0) = $tmp356;
panda$core$Int64 $tmp357 = $tmp355.max;
panda$core$Bit $tmp358 = $tmp355.inclusive;
bool $tmp359 = $tmp358.value;
panda$core$Int64 $tmp360 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp361 = panda$core$Int64$convert$R$panda$core$UInt64($tmp360);
if ($tmp359) goto block4; else goto block5;
block4:;
int64_t $tmp362 = $tmp356.value;
int64_t $tmp363 = $tmp357.value;
bool $tmp364 = $tmp362 <= $tmp363;
panda$core$Bit $tmp365 = (panda$core$Bit) {$tmp364};
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block1; else goto block2;
block5:;
int64_t $tmp367 = $tmp356.value;
int64_t $tmp368 = $tmp357.value;
bool $tmp369 = $tmp367 < $tmp368;
panda$core$Bit $tmp370 = (panda$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block1; else goto block2;
block1:;
// line 168
panda$collections$IdentityMap$Entry*** $tmp372 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp373 = *$tmp372;
panda$core$Int64 $tmp374 = *(&local0);
int64_t $tmp375 = $tmp374.value;
panda$collections$IdentityMap$Entry* $tmp376 = $tmp373[$tmp375];
panda$core$Bit $tmp377 = panda$core$Bit$init$builtin_bit($tmp376 != NULL);
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block6; else goto block7;
block6:;
// line 169
panda$collections$IdentityMap$Entry*** $tmp379 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp380 = *$tmp379;
panda$core$Int64 $tmp381 = *(&local0);
int64_t $tmp382 = $tmp381.value;
panda$collections$IdentityMap$Entry* $tmp383 = $tmp380[$tmp382];
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
goto block7;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp384 = *(&local0);
int64_t $tmp385 = $tmp357.value;
int64_t $tmp386 = $tmp384.value;
int64_t $tmp387 = $tmp385 - $tmp386;
panda$core$Int64 $tmp388 = (panda$core$Int64) {$tmp387};
panda$core$UInt64 $tmp389 = panda$core$Int64$convert$R$panda$core$UInt64($tmp388);
if ($tmp359) goto block9; else goto block10;
block9:;
uint64_t $tmp390 = $tmp389.value;
uint64_t $tmp391 = $tmp361.value;
bool $tmp392 = $tmp390 >= $tmp391;
panda$core$Bit $tmp393 = (panda$core$Bit) {$tmp392};
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block8; else goto block2;
block10:;
uint64_t $tmp395 = $tmp389.value;
uint64_t $tmp396 = $tmp361.value;
bool $tmp397 = $tmp395 > $tmp396;
panda$core$Bit $tmp398 = (panda$core$Bit) {$tmp397};
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block8; else goto block2;
block8:;
int64_t $tmp400 = $tmp384.value;
int64_t $tmp401 = $tmp360.value;
int64_t $tmp402 = $tmp400 + $tmp401;
panda$core$Int64 $tmp403 = (panda$core$Int64) {$tmp402};
*(&local0) = $tmp403;
goto block1;
block2:;
// line 172
panda$collections$IdentityMap$Entry*** $tmp404 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp405 = *$tmp404;
pandaFree($tmp405);
// line 173
panda$core$Int64 $tmp406 = (panda$core$Int64) {16};
panda$core$Int64* $tmp407 = &param0->bucketCount;
*$tmp407 = $tmp406;
// line 174
panda$core$Int64* $tmp408 = &param0->bucketCount;
panda$core$Int64 $tmp409 = *$tmp408;
int64_t $tmp410 = $tmp409.value;
panda$collections$IdentityMap$Entry** $tmp411 = ((panda$collections$IdentityMap$Entry**) pandaZAlloc($tmp410 * 8));
panda$collections$IdentityMap$Entry*** $tmp412 = &param0->contents;
*$tmp412 = $tmp411;
// line 175
panda$core$Int64 $tmp413 = (panda$core$Int64) {0};
panda$core$Int64* $tmp414 = &param0->bucketCount;
panda$core$Int64 $tmp415 = *$tmp414;
panda$core$Bit $tmp416 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp417 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp413, $tmp415, $tmp416);
panda$core$Int64 $tmp418 = $tmp417.min;
*(&local1) = $tmp418;
panda$core$Int64 $tmp419 = $tmp417.max;
panda$core$Bit $tmp420 = $tmp417.inclusive;
bool $tmp421 = $tmp420.value;
panda$core$Int64 $tmp422 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp423 = panda$core$Int64$convert$R$panda$core$UInt64($tmp422);
if ($tmp421) goto block14; else goto block15;
block14:;
int64_t $tmp424 = $tmp418.value;
int64_t $tmp425 = $tmp419.value;
bool $tmp426 = $tmp424 <= $tmp425;
panda$core$Bit $tmp427 = (panda$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block11; else goto block12;
block15:;
int64_t $tmp429 = $tmp418.value;
int64_t $tmp430 = $tmp419.value;
bool $tmp431 = $tmp429 < $tmp430;
panda$core$Bit $tmp432 = (panda$core$Bit) {$tmp431};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block11; else goto block12;
block11:;
// line 176
panda$collections$IdentityMap$Entry*** $tmp434 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp435 = *$tmp434;
panda$core$Int64 $tmp436 = *(&local1);
int64_t $tmp437 = $tmp436.value;
panda$collections$IdentityMap$Entry* $tmp438 = $tmp435[$tmp437];
panda$core$Bit $tmp439 = panda$core$Bit$init$builtin_bit($tmp438 != NULL);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block16; else goto block17;
block16:;
// line 177
panda$collections$IdentityMap$Entry*** $tmp441 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp442 = *$tmp441;
panda$core$Int64 $tmp443 = *(&local1);
int64_t $tmp444 = $tmp443.value;
panda$collections$IdentityMap$Entry* $tmp445 = $tmp442[$tmp444];
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$IdentityMap$Entry*) NULL)));
$tmp442[$tmp444] = ((panda$collections$IdentityMap$Entry*) NULL);
goto block17;
block17:;
goto block13;
block13:;
panda$core$Int64 $tmp446 = *(&local1);
int64_t $tmp447 = $tmp419.value;
int64_t $tmp448 = $tmp446.value;
int64_t $tmp449 = $tmp447 - $tmp448;
panda$core$Int64 $tmp450 = (panda$core$Int64) {$tmp449};
panda$core$UInt64 $tmp451 = panda$core$Int64$convert$R$panda$core$UInt64($tmp450);
if ($tmp421) goto block19; else goto block20;
block19:;
uint64_t $tmp452 = $tmp451.value;
uint64_t $tmp453 = $tmp423.value;
bool $tmp454 = $tmp452 >= $tmp453;
panda$core$Bit $tmp455 = (panda$core$Bit) {$tmp454};
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block18; else goto block12;
block20:;
uint64_t $tmp457 = $tmp451.value;
uint64_t $tmp458 = $tmp423.value;
bool $tmp459 = $tmp457 > $tmp458;
panda$core$Bit $tmp460 = (panda$core$Bit) {$tmp459};
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block18; else goto block12;
block18:;
int64_t $tmp462 = $tmp446.value;
int64_t $tmp463 = $tmp422.value;
int64_t $tmp464 = $tmp462 + $tmp463;
panda$core$Int64 $tmp465 = (panda$core$Int64) {$tmp464};
*(&local1) = $tmp465;
goto block11;
block12:;
// line 180
panda$core$Int64* $tmp466 = &param0->bucketCount;
panda$core$Int64 $tmp467 = *$tmp466;
panda$core$Int64 $tmp468 = (panda$core$Int64) {3};
int64_t $tmp469 = $tmp467.value;
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469 * $tmp470;
panda$core$Int64 $tmp472 = (panda$core$Int64) {$tmp471};
panda$core$Int64 $tmp473 = (panda$core$Int64) {4};
int64_t $tmp474 = $tmp472.value;
int64_t $tmp475 = $tmp473.value;
int64_t $tmp476 = $tmp474 / $tmp475;
panda$core$Int64 $tmp477 = (panda$core$Int64) {$tmp476};
panda$core$Int64* $tmp478 = &param0->threshold;
*$tmp478 = $tmp477;
return;

}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* param0) {

panda$collections$IdentityMap$Entry** local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$collections$IdentityMap$Entry* local4 = NULL;
panda$core$Int64 local5;
// line 185
panda$core$Int64* $tmp479 = &param0->_count;
panda$core$Int64 $tmp480 = *$tmp479;
panda$core$Int64 $tmp481 = (panda$core$Int64) {1};
int64_t $tmp482 = $tmp480.value;
int64_t $tmp483 = $tmp481.value;
int64_t $tmp484 = $tmp482 + $tmp483;
panda$core$Int64 $tmp485 = (panda$core$Int64) {$tmp484};
panda$core$Int64* $tmp486 = &param0->_count;
*$tmp486 = $tmp485;
// line 186
panda$core$Int64* $tmp487 = &param0->_count;
panda$core$Int64 $tmp488 = *$tmp487;
panda$core$Int64* $tmp489 = &param0->threshold;
panda$core$Int64 $tmp490 = *$tmp489;
int64_t $tmp491 = $tmp488.value;
int64_t $tmp492 = $tmp490.value;
bool $tmp493 = $tmp491 >= $tmp492;
panda$core$Bit $tmp494 = (panda$core$Bit) {$tmp493};
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block1; else goto block2;
block1:;
// line 187
panda$collections$IdentityMap$Entry*** $tmp496 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp497 = *$tmp496;
*(&local0) = $tmp497;
// line 188
panda$core$Int64* $tmp498 = &param0->bucketCount;
panda$core$Int64 $tmp499 = *$tmp498;
*(&local1) = $tmp499;
// line 189
panda$core$Int64* $tmp500 = &param0->bucketCount;
panda$core$Int64 $tmp501 = *$tmp500;
panda$core$Int64 $tmp502 = (panda$core$Int64) {2};
int64_t $tmp503 = $tmp501.value;
int64_t $tmp504 = $tmp502.value;
int64_t $tmp505 = $tmp503 * $tmp504;
panda$core$Int64 $tmp506 = (panda$core$Int64) {$tmp505};
panda$core$Int64* $tmp507 = &param0->bucketCount;
*$tmp507 = $tmp506;
// line 190
panda$core$Int64* $tmp508 = &param0->bucketCount;
panda$core$Int64 $tmp509 = *$tmp508;
int64_t $tmp510 = $tmp509.value;
panda$collections$IdentityMap$Entry** $tmp511 = ((panda$collections$IdentityMap$Entry**) pandaZAlloc($tmp510 * 8));
panda$collections$IdentityMap$Entry*** $tmp512 = &param0->contents;
*$tmp512 = $tmp511;
// line 191
panda$core$Int64 $tmp513 = (panda$core$Int64) {0};
panda$core$Int64* $tmp514 = &param0->bucketCount;
panda$core$Int64 $tmp515 = *$tmp514;
panda$core$Bit $tmp516 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp517 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp513, $tmp515, $tmp516);
panda$core$Int64 $tmp518 = $tmp517.min;
*(&local2) = $tmp518;
panda$core$Int64 $tmp519 = $tmp517.max;
panda$core$Bit $tmp520 = $tmp517.inclusive;
bool $tmp521 = $tmp520.value;
panda$core$Int64 $tmp522 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp523 = panda$core$Int64$convert$R$panda$core$UInt64($tmp522);
if ($tmp521) goto block6; else goto block7;
block6:;
int64_t $tmp524 = $tmp518.value;
int64_t $tmp525 = $tmp519.value;
bool $tmp526 = $tmp524 <= $tmp525;
panda$core$Bit $tmp527 = (panda$core$Bit) {$tmp526};
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block3; else goto block4;
block7:;
int64_t $tmp529 = $tmp518.value;
int64_t $tmp530 = $tmp519.value;
bool $tmp531 = $tmp529 < $tmp530;
panda$core$Bit $tmp532 = (panda$core$Bit) {$tmp531};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block3; else goto block4;
block3:;
// line 192
panda$collections$IdentityMap$Entry*** $tmp534 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp535 = *$tmp534;
panda$core$Int64 $tmp536 = *(&local2);
int64_t $tmp537 = $tmp536.value;
panda$collections$IdentityMap$Entry* $tmp538 = $tmp535[$tmp537];
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$IdentityMap$Entry*) NULL)));
$tmp535[$tmp537] = ((panda$collections$IdentityMap$Entry*) NULL);
goto block5;
block5:;
panda$core$Int64 $tmp539 = *(&local2);
int64_t $tmp540 = $tmp519.value;
int64_t $tmp541 = $tmp539.value;
int64_t $tmp542 = $tmp540 - $tmp541;
panda$core$Int64 $tmp543 = (panda$core$Int64) {$tmp542};
panda$core$UInt64 $tmp544 = panda$core$Int64$convert$R$panda$core$UInt64($tmp543);
if ($tmp521) goto block9; else goto block10;
block9:;
uint64_t $tmp545 = $tmp544.value;
uint64_t $tmp546 = $tmp523.value;
bool $tmp547 = $tmp545 >= $tmp546;
panda$core$Bit $tmp548 = (panda$core$Bit) {$tmp547};
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block8; else goto block4;
block10:;
uint64_t $tmp550 = $tmp544.value;
uint64_t $tmp551 = $tmp523.value;
bool $tmp552 = $tmp550 > $tmp551;
panda$core$Bit $tmp553 = (panda$core$Bit) {$tmp552};
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block8; else goto block4;
block8:;
int64_t $tmp555 = $tmp539.value;
int64_t $tmp556 = $tmp522.value;
int64_t $tmp557 = $tmp555 + $tmp556;
panda$core$Int64 $tmp558 = (panda$core$Int64) {$tmp557};
*(&local2) = $tmp558;
goto block3;
block4:;
// line 194
panda$core$Int64* $tmp559 = &param0->threshold;
panda$core$Int64 $tmp560 = *$tmp559;
panda$core$Int64 $tmp561 = (panda$core$Int64) {2};
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561.value;
int64_t $tmp564 = $tmp562 * $tmp563;
panda$core$Int64 $tmp565 = (panda$core$Int64) {$tmp564};
panda$core$Int64* $tmp566 = &param0->threshold;
*$tmp566 = $tmp565;
// line 195
panda$core$Int64 $tmp567 = (panda$core$Int64) {0};
panda$core$Int64* $tmp568 = &param0->_count;
*$tmp568 = $tmp567;
// line 196
panda$core$Int64 $tmp569 = (panda$core$Int64) {0};
panda$core$Int64 $tmp570 = *(&local1);
panda$core$Bit $tmp571 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp572 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp569, $tmp570, $tmp571);
panda$core$Int64 $tmp573 = $tmp572.min;
*(&local3) = $tmp573;
panda$core$Int64 $tmp574 = $tmp572.max;
panda$core$Bit $tmp575 = $tmp572.inclusive;
bool $tmp576 = $tmp575.value;
panda$core$Int64 $tmp577 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp578 = panda$core$Int64$convert$R$panda$core$UInt64($tmp577);
if ($tmp576) goto block14; else goto block15;
block14:;
int64_t $tmp579 = $tmp573.value;
int64_t $tmp580 = $tmp574.value;
bool $tmp581 = $tmp579 <= $tmp580;
panda$core$Bit $tmp582 = (panda$core$Bit) {$tmp581};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block11; else goto block12;
block15:;
int64_t $tmp584 = $tmp573.value;
int64_t $tmp585 = $tmp574.value;
bool $tmp586 = $tmp584 < $tmp585;
panda$core$Bit $tmp587 = (panda$core$Bit) {$tmp586};
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block11; else goto block12;
block11:;
// line 197
panda$collections$IdentityMap$Entry** $tmp589 = *(&local0);
panda$core$Int64 $tmp590 = *(&local3);
int64_t $tmp591 = $tmp590.value;
panda$collections$IdentityMap$Entry* $tmp592 = $tmp589[$tmp591];
*(&local4) = ((panda$collections$IdentityMap$Entry*) NULL);
panda$collections$IdentityMap$Entry* $tmp593 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
*(&local4) = $tmp592;
// line 198
goto block16;
block16:;
panda$collections$IdentityMap$Entry* $tmp594 = *(&local4);
panda$core$Bit $tmp595 = panda$core$Bit$init$builtin_bit($tmp594 != NULL);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block17; else goto block18;
block17:;
// line 199
panda$collections$IdentityMap$Entry* $tmp597 = *(&local4);
panda$core$Object** $tmp598 = &$tmp597->key;
panda$core$Object* $tmp599 = *$tmp598;
panda$collections$IdentityMap$Entry* $tmp600 = *(&local4);
panda$core$Object** $tmp601 = &$tmp600->value;
panda$core$Object* $tmp602 = *$tmp601;
panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(param0, $tmp599, $tmp602);
// line 200
panda$collections$IdentityMap$Entry* $tmp603 = *(&local4);
panda$collections$IdentityMap$Entry** $tmp604 = &$tmp603->next;
panda$collections$IdentityMap$Entry* $tmp605 = *$tmp604;
panda$collections$IdentityMap$Entry* $tmp606 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
*(&local4) = $tmp605;
goto block16;
block18:;
panda$collections$IdentityMap$Entry* $tmp607 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
// unreffing e
*(&local4) = ((panda$collections$IdentityMap$Entry*) NULL);
goto block13;
block13:;
panda$core$Int64 $tmp608 = *(&local3);
int64_t $tmp609 = $tmp574.value;
int64_t $tmp610 = $tmp608.value;
int64_t $tmp611 = $tmp609 - $tmp610;
panda$core$Int64 $tmp612 = (panda$core$Int64) {$tmp611};
panda$core$UInt64 $tmp613 = panda$core$Int64$convert$R$panda$core$UInt64($tmp612);
if ($tmp576) goto block20; else goto block21;
block20:;
uint64_t $tmp614 = $tmp613.value;
uint64_t $tmp615 = $tmp578.value;
bool $tmp616 = $tmp614 >= $tmp615;
panda$core$Bit $tmp617 = (panda$core$Bit) {$tmp616};
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block19; else goto block12;
block21:;
uint64_t $tmp619 = $tmp613.value;
uint64_t $tmp620 = $tmp578.value;
bool $tmp621 = $tmp619 > $tmp620;
panda$core$Bit $tmp622 = (panda$core$Bit) {$tmp621};
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block19; else goto block12;
block19:;
int64_t $tmp624 = $tmp608.value;
int64_t $tmp625 = $tmp577.value;
int64_t $tmp626 = $tmp624 + $tmp625;
panda$core$Int64 $tmp627 = (panda$core$Int64) {$tmp626};
*(&local3) = $tmp627;
goto block11;
block12:;
// line 203
panda$core$Int64 $tmp628 = (panda$core$Int64) {0};
panda$core$Int64 $tmp629 = *(&local1);
panda$core$Bit $tmp630 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp631 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp628, $tmp629, $tmp630);
panda$core$Int64 $tmp632 = $tmp631.min;
*(&local5) = $tmp632;
panda$core$Int64 $tmp633 = $tmp631.max;
panda$core$Bit $tmp634 = $tmp631.inclusive;
bool $tmp635 = $tmp634.value;
panda$core$Int64 $tmp636 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp637 = panda$core$Int64$convert$R$panda$core$UInt64($tmp636);
if ($tmp635) goto block25; else goto block26;
block25:;
int64_t $tmp638 = $tmp632.value;
int64_t $tmp639 = $tmp633.value;
bool $tmp640 = $tmp638 <= $tmp639;
panda$core$Bit $tmp641 = (panda$core$Bit) {$tmp640};
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block22; else goto block23;
block26:;
int64_t $tmp643 = $tmp632.value;
int64_t $tmp644 = $tmp633.value;
bool $tmp645 = $tmp643 < $tmp644;
panda$core$Bit $tmp646 = (panda$core$Bit) {$tmp645};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block22; else goto block23;
block22:;
// line 204
panda$collections$IdentityMap$Entry** $tmp648 = *(&local0);
panda$core$Int64 $tmp649 = *(&local5);
int64_t $tmp650 = $tmp649.value;
panda$collections$IdentityMap$Entry* $tmp651 = $tmp648[$tmp650];
panda$core$Bit $tmp652 = panda$core$Bit$init$builtin_bit($tmp651 != NULL);
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block27; else goto block28;
block27:;
// line 205
panda$collections$IdentityMap$Entry** $tmp654 = *(&local0);
panda$core$Int64 $tmp655 = *(&local5);
int64_t $tmp656 = $tmp655.value;
panda$collections$IdentityMap$Entry* $tmp657 = $tmp654[$tmp656];
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
goto block28;
block28:;
goto block24;
block24:;
panda$core$Int64 $tmp658 = *(&local5);
int64_t $tmp659 = $tmp633.value;
int64_t $tmp660 = $tmp658.value;
int64_t $tmp661 = $tmp659 - $tmp660;
panda$core$Int64 $tmp662 = (panda$core$Int64) {$tmp661};
panda$core$UInt64 $tmp663 = panda$core$Int64$convert$R$panda$core$UInt64($tmp662);
if ($tmp635) goto block30; else goto block31;
block30:;
uint64_t $tmp664 = $tmp663.value;
uint64_t $tmp665 = $tmp637.value;
bool $tmp666 = $tmp664 >= $tmp665;
panda$core$Bit $tmp667 = (panda$core$Bit) {$tmp666};
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block29; else goto block23;
block31:;
uint64_t $tmp669 = $tmp663.value;
uint64_t $tmp670 = $tmp637.value;
bool $tmp671 = $tmp669 > $tmp670;
panda$core$Bit $tmp672 = (panda$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block29; else goto block23;
block29:;
int64_t $tmp674 = $tmp658.value;
int64_t $tmp675 = $tmp636.value;
int64_t $tmp676 = $tmp674 + $tmp675;
panda$core$Int64 $tmp677 = (panda$core$Int64) {$tmp676};
*(&local5) = $tmp677;
goto block22;
block23:;
// line 208
panda$collections$IdentityMap$Entry** $tmp678 = *(&local0);
pandaFree($tmp678);
goto block2;
block2:;
return;

}
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* param0) {

// line 214
panda$core$Int64* $tmp679 = &param0->_count;
panda$core$Int64 $tmp680 = *$tmp679;
return $tmp680;

}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(panda$collections$IdentityMap* param0) {

// line 219
panda$core$Bit $tmp681 = panda$core$Bit$init$builtin_bit(false);
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp683 = (panda$core$Int64) {219};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s684, $tmp683, &$s685);
abort(); // unreachable
block1:;
panda$core$Bit $tmp686 = panda$core$Bit$init$builtin_bit(false);
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp688 = (panda$core$Int64) {218};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s689, $tmp688, &$s690);
abort(); // unreachable
block3:;
abort(); // unreachable

}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(panda$collections$IdentityMap* param0) {

// line 224
panda$core$Bit $tmp691 = panda$core$Bit$init$builtin_bit(false);
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp693 = (panda$core$Int64) {224};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s694, $tmp693, &$s695);
abort(); // unreachable
block1:;
panda$core$Bit $tmp696 = panda$core$Bit$init$builtin_bit(false);
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp698 = (panda$core$Int64) {223};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s699, $tmp698, &$s700);
abort(); // unreachable
block3:;
abort(); // unreachable

}
panda$core$String* panda$collections$IdentityMap$convert$R$panda$core$String(panda$collections$IdentityMap* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$Int64 local2;
panda$collections$IdentityMap$Entry* local3 = NULL;
// line 235
panda$core$MutableString* $tmp701 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp701);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp702 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
*(&local0) = $tmp701;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
// line 236
panda$core$MutableString* $tmp703 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp703, &$s704);
// line 237
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp705 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp705));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s706));
*(&local1) = &$s707;
// line 238
panda$core$Int64 $tmp708 = (panda$core$Int64) {0};
panda$core$Int64* $tmp709 = &param0->bucketCount;
panda$core$Int64 $tmp710 = *$tmp709;
panda$core$Bit $tmp711 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp712 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp708, $tmp710, $tmp711);
panda$core$Int64 $tmp713 = $tmp712.min;
*(&local2) = $tmp713;
panda$core$Int64 $tmp714 = $tmp712.max;
panda$core$Bit $tmp715 = $tmp712.inclusive;
bool $tmp716 = $tmp715.value;
panda$core$Int64 $tmp717 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp718 = panda$core$Int64$convert$R$panda$core$UInt64($tmp717);
if ($tmp716) goto block4; else goto block5;
block4:;
int64_t $tmp719 = $tmp713.value;
int64_t $tmp720 = $tmp714.value;
bool $tmp721 = $tmp719 <= $tmp720;
panda$core$Bit $tmp722 = (panda$core$Bit) {$tmp721};
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block1; else goto block2;
block5:;
int64_t $tmp724 = $tmp713.value;
int64_t $tmp725 = $tmp714.value;
bool $tmp726 = $tmp724 < $tmp725;
panda$core$Bit $tmp727 = (panda$core$Bit) {$tmp726};
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block1; else goto block2;
block1:;
// line 239
panda$collections$IdentityMap$Entry*** $tmp729 = &param0->contents;
panda$collections$IdentityMap$Entry** $tmp730 = *$tmp729;
panda$core$Int64 $tmp731 = *(&local2);
int64_t $tmp732 = $tmp731.value;
panda$collections$IdentityMap$Entry* $tmp733 = $tmp730[$tmp732];
*(&local3) = ((panda$collections$IdentityMap$Entry*) NULL);
panda$collections$IdentityMap$Entry* $tmp734 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
*(&local3) = $tmp733;
// line 240
goto block6;
block6:;
panda$collections$IdentityMap$Entry* $tmp735 = *(&local3);
panda$core$Bit $tmp736 = panda$core$Bit$init$builtin_bit($tmp735 != NULL);
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block7; else goto block8;
block7:;
// line 241
panda$core$MutableString* $tmp738 = *(&local0);
panda$core$String* $tmp739 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp738, $tmp739);
// line 242
panda$collections$IdentityMap$Entry* $tmp740 = *(&local3);
panda$core$Object** $tmp741 = &$tmp740->key;
panda$core$Object* $tmp742 = *$tmp741;
panda$core$Bit $tmp743 = panda$core$Bit$init$builtin_bit(true);
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block9; else goto block11;
block9:;
// line 243
panda$core$MutableString* $tmp745 = *(&local0);
panda$collections$IdentityMap$Entry* $tmp746 = *(&local3);
panda$core$Object** $tmp747 = &$tmp746->key;
panda$core$Object* $tmp748 = *$tmp747;
panda$core$MutableString$append$panda$core$Object($tmp745, $tmp748);
goto block10;
block11:;
// line 1
// line 246
panda$core$MutableString* $tmp749 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp749, &$s750);
goto block10;
block10:;
// line 248
panda$core$MutableString* $tmp751 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp751, &$s752);
// line 249
panda$collections$IdentityMap$Entry* $tmp753 = *(&local3);
panda$core$Object** $tmp754 = &$tmp753->value;
panda$core$Object* $tmp755 = *$tmp754;
panda$core$Bit $tmp756 = panda$core$Bit$init$builtin_bit(true);
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block12; else goto block14;
block12:;
// line 250
panda$core$MutableString* $tmp758 = *(&local0);
panda$collections$IdentityMap$Entry* $tmp759 = *(&local3);
panda$core$Object** $tmp760 = &$tmp759->value;
panda$core$Object* $tmp761 = *$tmp760;
panda$core$MutableString$append$panda$core$Object($tmp758, $tmp761);
goto block13;
block14:;
// line 1
// line 253
panda$core$MutableString* $tmp762 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp762, &$s763);
goto block13;
block13:;
// line 255
panda$collections$IdentityMap$Entry* $tmp764 = *(&local3);
panda$collections$IdentityMap$Entry** $tmp765 = &$tmp764->next;
panda$collections$IdentityMap$Entry* $tmp766 = *$tmp765;
panda$collections$IdentityMap$Entry* $tmp767 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
*(&local3) = $tmp766;
// line 256
panda$core$String* $tmp768 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s769));
*(&local1) = &$s770;
goto block6;
block8:;
panda$collections$IdentityMap$Entry* $tmp771 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp771));
// unreffing entry
*(&local3) = ((panda$collections$IdentityMap$Entry*) NULL);
goto block3;
block3:;
panda$core$Int64 $tmp772 = *(&local2);
int64_t $tmp773 = $tmp714.value;
int64_t $tmp774 = $tmp772.value;
int64_t $tmp775 = $tmp773 - $tmp774;
panda$core$Int64 $tmp776 = (panda$core$Int64) {$tmp775};
panda$core$UInt64 $tmp777 = panda$core$Int64$convert$R$panda$core$UInt64($tmp776);
if ($tmp716) goto block16; else goto block17;
block16:;
uint64_t $tmp778 = $tmp777.value;
uint64_t $tmp779 = $tmp718.value;
bool $tmp780 = $tmp778 >= $tmp779;
panda$core$Bit $tmp781 = (panda$core$Bit) {$tmp780};
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block15; else goto block2;
block17:;
uint64_t $tmp783 = $tmp777.value;
uint64_t $tmp784 = $tmp718.value;
bool $tmp785 = $tmp783 > $tmp784;
panda$core$Bit $tmp786 = (panda$core$Bit) {$tmp785};
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block15; else goto block2;
block15:;
int64_t $tmp788 = $tmp772.value;
int64_t $tmp789 = $tmp717.value;
int64_t $tmp790 = $tmp788 + $tmp789;
panda$core$Int64 $tmp791 = (panda$core$Int64) {$tmp790};
*(&local2) = $tmp791;
goto block1;
block2:;
// line 259
panda$core$MutableString* $tmp792 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp792, &$s793);
// line 260
panda$core$MutableString* $tmp794 = *(&local0);
panda$core$String* $tmp795 = panda$core$MutableString$finish$R$panda$core$String($tmp794);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
panda$core$String* $tmp796 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp797 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp795;

}

