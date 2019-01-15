#include "frost/collections/IdentityMap.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/MapView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/MapWriter.h"
#include "frost/collections/Map.h"
#include "frost/core/Int64.h"
#include "frost/collections/IdentityMap/Entry.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Object* frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1) {
    frost$core$Object* result = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(p0, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1) {
    frost$core$Bit result = frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(p0, p1);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$IdentityMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$K$GT$shim(frost$collections$IdentityMap* p0) {
    frost$collections$Iterator* result = frost$collections$IdentityMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$K$GT(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$IdentityMap$get_values$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$V$GT$shim(frost$collections$IdentityMap* p0) {
    frost$collections$Iterator* result = frost$collections$IdentityMap$get_values$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$V$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1, frost$core$Object* p2) {
    frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(p0, p1, p2);

}
__attribute__((weak)) void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1) {
    frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(p0, p1);

}

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$IdentityMap$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, NULL, { frost$collections$IdentityMap$get_count$R$frost$core$Int64, frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim, frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim, frost$collections$IdentityMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$K$GT$shim, frost$collections$IdentityMap$get_values$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$V$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$collections$IdentityMap$_frost$collections$MapWriter = { (frost$core$Class*) &frost$collections$MapWriter$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$MapView, { frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim, frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$IdentityMap$_frost$collections$Map = { (frost$core$Class*) &frost$collections$Map$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$MapWriter, { } };

static frost$core$String $s1;
frost$collections$IdentityMap$class_type frost$collections$IdentityMap$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$Map, { frost$collections$IdentityMap$convert$R$frost$core$String, frost$collections$IdentityMap$cleanup, frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64, frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim, frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim, frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim, frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim, frost$collections$IdentityMap$clear, frost$collections$IdentityMap$incrementCount, frost$collections$IdentityMap$get_count$R$frost$core$Int64, frost$collections$IdentityMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$K$GT$shim, frost$collections$IdentityMap$get_values$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$V$GT$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, 288545962238954754, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x5b\x5d\x28\x6b\x65\x79\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 136, 6334615893836155979, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x67\x65\x74\x5f\x6b\x65\x79\x73\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x4b\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 134, -2656851181112102808, NULL };
static frost$core$String $s694 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s700 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x67\x65\x74\x5f\x76\x61\x6c\x75\x65\x73\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x56\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 136, 3207288616837540539, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s705 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

void frost$collections$IdentityMap$init(frost$collections$IdentityMap* param0) {

frost$core$Int64 local0;
// line 51
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// line 57
frost$core$Int64* $tmp4 = &param0->changeCount;
frost$core$Int64 $tmp5 = *$tmp4;
frost$core$Int64 $tmp6 = (frost$core$Int64) {1};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
frost$core$Int64 $tmp10 = (frost$core$Int64) {$tmp9};
frost$core$Int64* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// line 58
frost$core$Int64 $tmp12 = (frost$core$Int64) {0};
frost$core$Int64* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// line 59
frost$core$Int64 $tmp14 = (frost$core$Int64) {16};
frost$core$Int64* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// line 60
frost$core$Int64* $tmp16 = &param0->bucketCount;
frost$core$Int64 $tmp17 = *$tmp16;
int64_t $tmp18 = $tmp17.value;
frost$collections$IdentityMap$Entry** $tmp19 = ((frost$collections$IdentityMap$Entry**) frostZAlloc($tmp18 * 8));
frost$collections$IdentityMap$Entry*** $tmp20 = &param0->contents;
*$tmp20 = $tmp19;
// line 61
frost$core$Int64 $tmp21 = (frost$core$Int64) {0};
frost$core$Int64* $tmp22 = &param0->bucketCount;
frost$core$Int64 $tmp23 = *$tmp22;
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp25 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp21, $tmp23, $tmp24);
frost$core$Int64 $tmp26 = $tmp25.min;
*(&local0) = $tmp26;
frost$core$Int64 $tmp27 = $tmp25.max;
frost$core$Bit $tmp28 = $tmp25.inclusive;
bool $tmp29 = $tmp28.value;
frost$core$Int64 $tmp30 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp31 = frost$core$Int64$convert$R$frost$core$UInt64($tmp30);
if ($tmp29) goto block4; else goto block5;
block4:;
int64_t $tmp32 = $tmp26.value;
int64_t $tmp33 = $tmp27.value;
bool $tmp34 = $tmp32 <= $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block2;
block5:;
int64_t $tmp37 = $tmp26.value;
int64_t $tmp38 = $tmp27.value;
bool $tmp39 = $tmp37 < $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block1; else goto block2;
block1:;
// line 62
frost$collections$IdentityMap$Entry*** $tmp42 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp43 = *$tmp42;
frost$core$Int64 $tmp44 = *(&local0);
int64_t $tmp45 = $tmp44.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp46 = $tmp43[$tmp45];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
$tmp43[$tmp45] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp47 = *(&local0);
int64_t $tmp48 = $tmp27.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 - $tmp49;
frost$core$Int64 $tmp51 = (frost$core$Int64) {$tmp50};
frost$core$UInt64 $tmp52 = frost$core$Int64$convert$R$frost$core$UInt64($tmp51);
if ($tmp29) goto block7; else goto block8;
block7:;
uint64_t $tmp53 = $tmp52.value;
uint64_t $tmp54 = $tmp31.value;
bool $tmp55 = $tmp53 >= $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block6; else goto block2;
block8:;
uint64_t $tmp58 = $tmp52.value;
uint64_t $tmp59 = $tmp31.value;
bool $tmp60 = $tmp58 > $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block6; else goto block2;
block6:;
int64_t $tmp63 = $tmp47.value;
int64_t $tmp64 = $tmp30.value;
int64_t $tmp65 = $tmp63 + $tmp64;
frost$core$Int64 $tmp66 = (frost$core$Int64) {$tmp65};
*(&local0) = $tmp66;
goto block1;
block2:;
// line 64
frost$core$Int64* $tmp67 = &param0->bucketCount;
frost$core$Int64 $tmp68 = *$tmp67;
frost$core$Int64 $tmp69 = (frost$core$Int64) {3};
int64_t $tmp70 = $tmp68.value;
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70 * $tmp71;
frost$core$Int64 $tmp73 = (frost$core$Int64) {$tmp72};
frost$core$Int64 $tmp74 = (frost$core$Int64) {4};
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75 / $tmp76;
frost$core$Int64 $tmp78 = (frost$core$Int64) {$tmp77};
frost$core$Int64* $tmp79 = &param0->threshold;
*$tmp79 = $tmp78;
return;

}
void frost$collections$IdentityMap$cleanup(frost$collections$IdentityMap* param0) {

frost$core$Int64 local0;
// line 69
frost$core$Int64 $tmp80 = (frost$core$Int64) {0};
frost$core$Int64* $tmp81 = &param0->bucketCount;
frost$core$Int64 $tmp82 = *$tmp81;
frost$core$Bit $tmp83 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp84 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp80, $tmp82, $tmp83);
frost$core$Int64 $tmp85 = $tmp84.min;
*(&local0) = $tmp85;
frost$core$Int64 $tmp86 = $tmp84.max;
frost$core$Bit $tmp87 = $tmp84.inclusive;
bool $tmp88 = $tmp87.value;
frost$core$Int64 $tmp89 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp90 = frost$core$Int64$convert$R$frost$core$UInt64($tmp89);
if ($tmp88) goto block4; else goto block5;
block4:;
int64_t $tmp91 = $tmp85.value;
int64_t $tmp92 = $tmp86.value;
bool $tmp93 = $tmp91 <= $tmp92;
frost$core$Bit $tmp94 = (frost$core$Bit) {$tmp93};
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block1; else goto block2;
block5:;
int64_t $tmp96 = $tmp85.value;
int64_t $tmp97 = $tmp86.value;
bool $tmp98 = $tmp96 < $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block1; else goto block2;
block1:;
// line 70
frost$collections$IdentityMap$Entry*** $tmp101 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp102 = *$tmp101;
frost$core$Int64 $tmp103 = *(&local0);
int64_t $tmp104 = $tmp103.value;
frost$collections$IdentityMap$Entry* $tmp105 = $tmp102[$tmp104];
frost$core$Bit $tmp106 = frost$core$Bit$init$builtin_bit($tmp105 != NULL);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block6; else goto block7;
block6:;
// line 71
frost$collections$IdentityMap$Entry*** $tmp108 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp109 = *$tmp108;
frost$core$Int64 $tmp110 = *(&local0);
int64_t $tmp111 = $tmp110.value;
frost$collections$IdentityMap$Entry* $tmp112 = $tmp109[$tmp111];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp113 = *(&local0);
int64_t $tmp114 = $tmp86.value;
int64_t $tmp115 = $tmp113.value;
int64_t $tmp116 = $tmp114 - $tmp115;
frost$core$Int64 $tmp117 = (frost$core$Int64) {$tmp116};
frost$core$UInt64 $tmp118 = frost$core$Int64$convert$R$frost$core$UInt64($tmp117);
if ($tmp88) goto block9; else goto block10;
block9:;
uint64_t $tmp119 = $tmp118.value;
uint64_t $tmp120 = $tmp90.value;
bool $tmp121 = $tmp119 >= $tmp120;
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121};
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block8; else goto block2;
block10:;
uint64_t $tmp124 = $tmp118.value;
uint64_t $tmp125 = $tmp90.value;
bool $tmp126 = $tmp124 > $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block8; else goto block2;
block8:;
int64_t $tmp129 = $tmp113.value;
int64_t $tmp130 = $tmp89.value;
int64_t $tmp131 = $tmp129 + $tmp130;
frost$core$Int64 $tmp132 = (frost$core$Int64) {$tmp131};
*(&local0) = $tmp132;
goto block1;
block2:;
// line 74
frost$collections$IdentityMap$Entry*** $tmp133 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp134 = *$tmp133;
frostFree($tmp134);
// line 68
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Int64 frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

// line 82
frost$core$Int64 $tmp135;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp135, param1);
frost$core$Int64* $tmp136 = &param0->bucketCount;
frost$core$Int64 $tmp137 = *$tmp136;
frost$core$Int64 $tmp138 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp135, $tmp137);
return $tmp138;

}
frost$core$Object* frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$core$Bit local2;
// line 87
frost$core$Int64 $tmp139 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp139;
// line 88
frost$collections$IdentityMap$Entry*** $tmp140 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp141 = *$tmp140;
frost$core$Int64 $tmp142 = *(&local0);
int64_t $tmp143 = $tmp142.value;
frost$collections$IdentityMap$Entry* $tmp144 = $tmp141[$tmp143];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$collections$IdentityMap$Entry* $tmp145 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local1) = $tmp144;
// line 89
goto block1;
block1:;
frost$collections$IdentityMap$Entry* $tmp146 = *(&local1);
frost$core$Bit $tmp147 = frost$core$Bit$init$builtin_bit($tmp146 != NULL);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block4; else goto block5;
block4:;
frost$collections$IdentityMap$Entry* $tmp149 = *(&local1);
frost$core$Object** $tmp150 = &$tmp149->key;
frost$core$Object* $tmp151 = *$tmp150;
bool $tmp152 = $tmp151 != param1;
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit($tmp152);
*(&local2) = $tmp153;
goto block6;
block5:;
*(&local2) = $tmp147;
goto block6;
block6:;
frost$core$Bit $tmp154 = *(&local2);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block2; else goto block3;
block2:;
// line 90
frost$collections$IdentityMap$Entry* $tmp156 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp157 = &$tmp156->next;
frost$collections$IdentityMap$Entry* $tmp158 = *$tmp157;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$collections$IdentityMap$Entry* $tmp159 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local1) = $tmp158;
goto block1;
block3:;
// line 92
frost$collections$IdentityMap$Entry* $tmp160 = *(&local1);
frost$core$Bit $tmp161 = frost$core$Bit$init$builtin_bit($tmp160 != NULL);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block7; else goto block9;
block7:;
// line 93
frost$collections$IdentityMap$Entry* $tmp163 = *(&local1);
frost$core$Object** $tmp164 = &$tmp163->value;
frost$core$Object* $tmp165 = *$tmp164;
frost$core$Frost$ref$frost$core$Object$Q($tmp165);
frost$collections$IdentityMap$Entry* $tmp166 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp165;
block9:;
// line 1
// line 96
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$IdentityMap$Entry* $tmp167 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block8:;
frost$core$Bit $tmp168 = frost$core$Bit$init$builtin_bit(false);
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp170 = (frost$core$Int64) {86};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s171, $tmp170, &$s172);
abort(); // unreachable
block10:;
abort(); // unreachable

}
frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$core$Bit local2;
// line 102
frost$core$Int64 $tmp173 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp173;
// line 103
frost$collections$IdentityMap$Entry*** $tmp174 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp175 = *$tmp174;
frost$core$Int64 $tmp176 = *(&local0);
int64_t $tmp177 = $tmp176.value;
frost$collections$IdentityMap$Entry* $tmp178 = $tmp175[$tmp177];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$collections$IdentityMap$Entry* $tmp179 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local1) = $tmp178;
// line 104
goto block1;
block1:;
frost$collections$IdentityMap$Entry* $tmp180 = *(&local1);
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit($tmp180 != NULL);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block4; else goto block5;
block4:;
frost$collections$IdentityMap$Entry* $tmp183 = *(&local1);
frost$core$Object** $tmp184 = &$tmp183->key;
frost$core$Object* $tmp185 = *$tmp184;
bool $tmp186 = $tmp185 != param1;
frost$core$Bit $tmp187 = frost$core$Bit$init$builtin_bit($tmp186);
*(&local2) = $tmp187;
goto block6;
block5:;
*(&local2) = $tmp181;
goto block6;
block6:;
frost$core$Bit $tmp188 = *(&local2);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block2; else goto block3;
block2:;
// line 105
frost$collections$IdentityMap$Entry* $tmp190 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp191 = &$tmp190->next;
frost$collections$IdentityMap$Entry* $tmp192 = *$tmp191;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
frost$collections$IdentityMap$Entry* $tmp193 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local1) = $tmp192;
goto block1;
block3:;
// line 107
frost$collections$IdentityMap$Entry* $tmp194 = *(&local1);
frost$core$Bit $tmp195 = frost$core$Bit$init$builtin_bit($tmp194 != NULL);
frost$collections$IdentityMap$Entry* $tmp196 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp195;

}
void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(frost$collections$IdentityMap* param0, frost$core$Object* param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$core$Bit local2;
frost$collections$IdentityMap$Entry* local3 = NULL;
// line 112
frost$core$Int64* $tmp197 = &param0->changeCount;
frost$core$Int64 $tmp198 = *$tmp197;
frost$core$Int64 $tmp199 = (frost$core$Int64) {1};
int64_t $tmp200 = $tmp198.value;
int64_t $tmp201 = $tmp199.value;
int64_t $tmp202 = $tmp200 + $tmp201;
frost$core$Int64 $tmp203 = (frost$core$Int64) {$tmp202};
frost$core$Int64* $tmp204 = &param0->changeCount;
*$tmp204 = $tmp203;
// line 113
frost$core$Int64 $tmp205 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp205;
// line 114
frost$collections$IdentityMap$Entry*** $tmp206 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp207 = *$tmp206;
frost$core$Int64 $tmp208 = *(&local0);
int64_t $tmp209 = $tmp208.value;
frost$collections$IdentityMap$Entry* $tmp210 = $tmp207[$tmp209];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$collections$IdentityMap$Entry* $tmp211 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local1) = $tmp210;
// line 115
goto block1;
block1:;
frost$collections$IdentityMap$Entry* $tmp212 = *(&local1);
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit($tmp212 != NULL);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block4; else goto block5;
block4:;
frost$collections$IdentityMap$Entry* $tmp215 = *(&local1);
frost$core$Object** $tmp216 = &$tmp215->key;
frost$core$Object* $tmp217 = *$tmp216;
bool $tmp218 = $tmp217 != param1;
frost$core$Bit $tmp219 = frost$core$Bit$init$builtin_bit($tmp218);
*(&local2) = $tmp219;
goto block6;
block5:;
*(&local2) = $tmp213;
goto block6;
block6:;
frost$core$Bit $tmp220 = *(&local2);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block2; else goto block3;
block2:;
// line 116
frost$collections$IdentityMap$Entry* $tmp222 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp223 = &$tmp222->next;
frost$collections$IdentityMap$Entry* $tmp224 = *$tmp223;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$collections$IdentityMap$Entry* $tmp225 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local1) = $tmp224;
goto block1;
block3:;
// line 118
frost$collections$IdentityMap$Entry* $tmp226 = *(&local1);
frost$core$Bit $tmp227 = frost$core$Bit$init$builtin_bit($tmp226 == NULL);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block7; else goto block9;
block7:;
// line 119
frost$collections$IdentityMap$Entry*** $tmp229 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp230 = *$tmp229;
frost$core$Int64 $tmp231 = *(&local0);
int64_t $tmp232 = $tmp231.value;
frost$collections$IdentityMap$Entry* $tmp233 = $tmp230[$tmp232];
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$collections$IdentityMap$Entry* $tmp234 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local3) = $tmp233;
// line 120
frost$collections$IdentityMap$Entry* $tmp235 = (frost$collections$IdentityMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$IdentityMap$Entry$class);
frost$collections$IdentityMap$Entry$init$frost$collections$IdentityMap$Entry$K$frost$collections$IdentityMap$Entry$V($tmp235, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$collections$IdentityMap$Entry* $tmp236 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local1) = $tmp235;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($84:frost.collections.IdentityMap.Entry<frost.collections.IdentityMap.K, frost.collections.IdentityMap.V>)
// line 121
frost$collections$IdentityMap$Entry* $tmp237 = *(&local1);
frost$collections$IdentityMap$Entry* $tmp238 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$collections$IdentityMap$Entry** $tmp239 = &$tmp237->next;
frost$collections$IdentityMap$Entry* $tmp240 = *$tmp239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$collections$IdentityMap$Entry** $tmp241 = &$tmp237->next;
*$tmp241 = $tmp238;
// line 122
frost$collections$IdentityMap$Entry*** $tmp242 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp243 = *$tmp242;
frost$core$Int64 $tmp244 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp245 = *(&local1);
int64_t $tmp246 = $tmp244.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$collections$IdentityMap$Entry* $tmp247 = $tmp243[$tmp246];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
$tmp243[$tmp246] = $tmp245;
// line 123
frost$collections$IdentityMap$incrementCount(param0);
frost$collections$IdentityMap$Entry* $tmp248 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// unreffing old
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block8;
block9:;
// line 1
// line 126
frost$collections$IdentityMap$Entry* $tmp249 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp250 = &$tmp249->value;
frost$core$Object* $tmp251 = *$tmp250;
frost$core$Frost$unref$frost$core$Object$Q($tmp251);
frost$core$Object** $tmp252 = &$tmp249->value;
*$tmp252 = param2;
goto block8;
block8:;
frost$collections$IdentityMap$Entry* $tmp253 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$collections$IdentityMap$Entry* local2 = NULL;
frost$collections$IdentityMap$Entry* local3 = NULL;
// line 132
frost$core$Int64* $tmp254 = &param0->changeCount;
frost$core$Int64 $tmp255 = *$tmp254;
frost$core$Int64 $tmp256 = (frost$core$Int64) {1};
int64_t $tmp257 = $tmp255.value;
int64_t $tmp258 = $tmp256.value;
int64_t $tmp259 = $tmp257 + $tmp258;
frost$core$Int64 $tmp260 = (frost$core$Int64) {$tmp259};
frost$core$Int64* $tmp261 = &param0->changeCount;
*$tmp261 = $tmp260;
// line 133
frost$core$Int64 $tmp262 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp262;
// line 134
frost$collections$IdentityMap$Entry*** $tmp263 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp264 = *$tmp263;
frost$core$Int64 $tmp265 = *(&local0);
int64_t $tmp266 = $tmp265.value;
frost$collections$IdentityMap$Entry* $tmp267 = $tmp264[$tmp266];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
frost$collections$IdentityMap$Entry* $tmp268 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local1) = $tmp267;
// line 136
frost$collections$IdentityMap$Entry* $tmp269 = *(&local1);
frost$core$Bit $tmp270 = frost$core$Bit$init$builtin_bit($tmp269 == NULL);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block1; else goto block2;
block1:;
// line 137
frost$collections$IdentityMap$Entry* $tmp272 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block2:;
// line 140
frost$collections$IdentityMap$Entry* $tmp273 = *(&local1);
frost$core$Object** $tmp274 = &$tmp273->key;
frost$core$Object* $tmp275 = *$tmp274;
bool $tmp276 = $tmp275 == param1;
frost$core$Bit $tmp277 = frost$core$Bit$init$builtin_bit($tmp276);
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block3; else goto block4;
block3:;
// line 141
frost$collections$IdentityMap$Entry*** $tmp279 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp280 = *$tmp279;
frost$core$Int64 $tmp281 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp282 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp283 = &$tmp282->next;
frost$collections$IdentityMap$Entry* $tmp284 = *$tmp283;
int64_t $tmp285 = $tmp281.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$collections$IdentityMap$Entry* $tmp286 = $tmp280[$tmp285];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
$tmp280[$tmp285] = $tmp284;
// line 142
frost$core$Int64* $tmp287 = &param0->_count;
frost$core$Int64 $tmp288 = *$tmp287;
frost$core$Int64 $tmp289 = (frost$core$Int64) {1};
int64_t $tmp290 = $tmp288.value;
int64_t $tmp291 = $tmp289.value;
int64_t $tmp292 = $tmp290 - $tmp291;
frost$core$Int64 $tmp293 = (frost$core$Int64) {$tmp292};
frost$core$Int64* $tmp294 = &param0->_count;
*$tmp294 = $tmp293;
// line 143
frost$collections$IdentityMap$Entry* $tmp295 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block4:;
// line 145
goto block5;
block5:;
// line 146
frost$collections$IdentityMap$Entry* $tmp296 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp297 = &$tmp296->next;
frost$collections$IdentityMap$Entry* $tmp298 = *$tmp297;
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$collections$IdentityMap$Entry* $tmp299 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local2) = $tmp298;
// line 147
frost$collections$IdentityMap$Entry* $tmp300 = *(&local2);
frost$core$Bit $tmp301 = frost$core$Bit$init$builtin_bit($tmp300 == NULL);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block7; else goto block8;
block7:;
// line 149
frost$collections$IdentityMap$Entry* $tmp303 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// unreffing next
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp304 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block8:;
// line 151
frost$collections$IdentityMap$Entry* $tmp305 = *(&local2);
frost$core$Object** $tmp306 = &$tmp305->key;
frost$core$Object* $tmp307 = *$tmp306;
bool $tmp308 = $tmp307 == param1;
frost$core$Bit $tmp309 = frost$core$Bit$init$builtin_bit($tmp308);
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block9; else goto block10;
block9:;
// line 153
frost$collections$IdentityMap$Entry* $tmp311 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// unreffing next
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block6;
block10:;
// line 155
frost$collections$IdentityMap$Entry* $tmp312 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$collections$IdentityMap$Entry* $tmp313 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local1) = $tmp312;
frost$collections$IdentityMap$Entry* $tmp314 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// unreffing next
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block5;
block6:;
// line 158
frost$collections$IdentityMap$Entry* $tmp315 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp316 = &$tmp315->next;
frost$collections$IdentityMap$Entry* $tmp317 = *$tmp316;
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$collections$IdentityMap$Entry* $tmp318 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local3) = $tmp317;
// line 159
frost$collections$IdentityMap$Entry* $tmp319 = *(&local3);
frost$core$Bit $tmp320 = frost$core$Bit$init$builtin_bit($tmp319 != NULL);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp322 = (frost$core$Int64) {159};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s323, $tmp322);
abort(); // unreachable
block11:;
// line 160
frost$collections$IdentityMap$Entry* $tmp324 = *(&local1);
frost$collections$IdentityMap$Entry* $tmp325 = *(&local3);
frost$collections$IdentityMap$Entry** $tmp326 = &$tmp325->next;
frost$collections$IdentityMap$Entry* $tmp327 = *$tmp326;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$collections$IdentityMap$Entry** $tmp328 = &$tmp324->next;
frost$collections$IdentityMap$Entry* $tmp329 = *$tmp328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$collections$IdentityMap$Entry** $tmp330 = &$tmp324->next;
*$tmp330 = $tmp327;
// line 161
frost$core$Int64* $tmp331 = &param0->_count;
frost$core$Int64 $tmp332 = *$tmp331;
frost$core$Int64 $tmp333 = (frost$core$Int64) {1};
int64_t $tmp334 = $tmp332.value;
int64_t $tmp335 = $tmp333.value;
int64_t $tmp336 = $tmp334 - $tmp335;
frost$core$Int64 $tmp337 = (frost$core$Int64) {$tmp336};
frost$core$Int64* $tmp338 = &param0->_count;
*$tmp338 = $tmp337;
frost$collections$IdentityMap$Entry* $tmp339 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// unreffing next
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp340 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing e
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$clear(frost$collections$IdentityMap* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 165
frost$core$Int64* $tmp341 = &param0->changeCount;
frost$core$Int64 $tmp342 = *$tmp341;
frost$core$Int64 $tmp343 = (frost$core$Int64) {1};
int64_t $tmp344 = $tmp342.value;
int64_t $tmp345 = $tmp343.value;
int64_t $tmp346 = $tmp344 + $tmp345;
frost$core$Int64 $tmp347 = (frost$core$Int64) {$tmp346};
frost$core$Int64* $tmp348 = &param0->changeCount;
*$tmp348 = $tmp347;
// line 166
frost$core$Int64 $tmp349 = (frost$core$Int64) {0};
frost$core$Int64* $tmp350 = &param0->_count;
*$tmp350 = $tmp349;
// line 167
frost$core$Int64 $tmp351 = (frost$core$Int64) {0};
frost$core$Int64* $tmp352 = &param0->bucketCount;
frost$core$Int64 $tmp353 = *$tmp352;
frost$core$Bit $tmp354 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp355 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp351, $tmp353, $tmp354);
frost$core$Int64 $tmp356 = $tmp355.min;
*(&local0) = $tmp356;
frost$core$Int64 $tmp357 = $tmp355.max;
frost$core$Bit $tmp358 = $tmp355.inclusive;
bool $tmp359 = $tmp358.value;
frost$core$Int64 $tmp360 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp361 = frost$core$Int64$convert$R$frost$core$UInt64($tmp360);
if ($tmp359) goto block4; else goto block5;
block4:;
int64_t $tmp362 = $tmp356.value;
int64_t $tmp363 = $tmp357.value;
bool $tmp364 = $tmp362 <= $tmp363;
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364};
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block1; else goto block2;
block5:;
int64_t $tmp367 = $tmp356.value;
int64_t $tmp368 = $tmp357.value;
bool $tmp369 = $tmp367 < $tmp368;
frost$core$Bit $tmp370 = (frost$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block1; else goto block2;
block1:;
// line 168
frost$collections$IdentityMap$Entry*** $tmp372 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp373 = *$tmp372;
frost$core$Int64 $tmp374 = *(&local0);
int64_t $tmp375 = $tmp374.value;
frost$collections$IdentityMap$Entry* $tmp376 = $tmp373[$tmp375];
frost$core$Bit $tmp377 = frost$core$Bit$init$builtin_bit($tmp376 != NULL);
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block6; else goto block7;
block6:;
// line 169
frost$collections$IdentityMap$Entry*** $tmp379 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp380 = *$tmp379;
frost$core$Int64 $tmp381 = *(&local0);
int64_t $tmp382 = $tmp381.value;
frost$collections$IdentityMap$Entry* $tmp383 = $tmp380[$tmp382];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp384 = *(&local0);
int64_t $tmp385 = $tmp357.value;
int64_t $tmp386 = $tmp384.value;
int64_t $tmp387 = $tmp385 - $tmp386;
frost$core$Int64 $tmp388 = (frost$core$Int64) {$tmp387};
frost$core$UInt64 $tmp389 = frost$core$Int64$convert$R$frost$core$UInt64($tmp388);
if ($tmp359) goto block9; else goto block10;
block9:;
uint64_t $tmp390 = $tmp389.value;
uint64_t $tmp391 = $tmp361.value;
bool $tmp392 = $tmp390 >= $tmp391;
frost$core$Bit $tmp393 = (frost$core$Bit) {$tmp392};
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block8; else goto block2;
block10:;
uint64_t $tmp395 = $tmp389.value;
uint64_t $tmp396 = $tmp361.value;
bool $tmp397 = $tmp395 > $tmp396;
frost$core$Bit $tmp398 = (frost$core$Bit) {$tmp397};
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block8; else goto block2;
block8:;
int64_t $tmp400 = $tmp384.value;
int64_t $tmp401 = $tmp360.value;
int64_t $tmp402 = $tmp400 + $tmp401;
frost$core$Int64 $tmp403 = (frost$core$Int64) {$tmp402};
*(&local0) = $tmp403;
goto block1;
block2:;
// line 172
frost$collections$IdentityMap$Entry*** $tmp404 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp405 = *$tmp404;
frostFree($tmp405);
// line 173
frost$core$Int64 $tmp406 = (frost$core$Int64) {16};
frost$core$Int64* $tmp407 = &param0->bucketCount;
*$tmp407 = $tmp406;
// line 174
frost$core$Int64* $tmp408 = &param0->bucketCount;
frost$core$Int64 $tmp409 = *$tmp408;
int64_t $tmp410 = $tmp409.value;
frost$collections$IdentityMap$Entry** $tmp411 = ((frost$collections$IdentityMap$Entry**) frostZAlloc($tmp410 * 8));
frost$collections$IdentityMap$Entry*** $tmp412 = &param0->contents;
*$tmp412 = $tmp411;
// line 175
frost$core$Int64 $tmp413 = (frost$core$Int64) {0};
frost$core$Int64* $tmp414 = &param0->bucketCount;
frost$core$Int64 $tmp415 = *$tmp414;
frost$core$Bit $tmp416 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp417 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp413, $tmp415, $tmp416);
frost$core$Int64 $tmp418 = $tmp417.min;
*(&local1) = $tmp418;
frost$core$Int64 $tmp419 = $tmp417.max;
frost$core$Bit $tmp420 = $tmp417.inclusive;
bool $tmp421 = $tmp420.value;
frost$core$Int64 $tmp422 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp423 = frost$core$Int64$convert$R$frost$core$UInt64($tmp422);
if ($tmp421) goto block14; else goto block15;
block14:;
int64_t $tmp424 = $tmp418.value;
int64_t $tmp425 = $tmp419.value;
bool $tmp426 = $tmp424 <= $tmp425;
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block11; else goto block12;
block15:;
int64_t $tmp429 = $tmp418.value;
int64_t $tmp430 = $tmp419.value;
bool $tmp431 = $tmp429 < $tmp430;
frost$core$Bit $tmp432 = (frost$core$Bit) {$tmp431};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block11; else goto block12;
block11:;
// line 176
frost$collections$IdentityMap$Entry*** $tmp434 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp435 = *$tmp434;
frost$core$Int64 $tmp436 = *(&local1);
int64_t $tmp437 = $tmp436.value;
frost$collections$IdentityMap$Entry* $tmp438 = $tmp435[$tmp437];
frost$core$Bit $tmp439 = frost$core$Bit$init$builtin_bit($tmp438 != NULL);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block16; else goto block17;
block16:;
// line 177
frost$collections$IdentityMap$Entry*** $tmp441 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp442 = *$tmp441;
frost$core$Int64 $tmp443 = *(&local1);
int64_t $tmp444 = $tmp443.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp445 = $tmp442[$tmp444];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
$tmp442[$tmp444] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block17;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp446 = *(&local1);
int64_t $tmp447 = $tmp419.value;
int64_t $tmp448 = $tmp446.value;
int64_t $tmp449 = $tmp447 - $tmp448;
frost$core$Int64 $tmp450 = (frost$core$Int64) {$tmp449};
frost$core$UInt64 $tmp451 = frost$core$Int64$convert$R$frost$core$UInt64($tmp450);
if ($tmp421) goto block19; else goto block20;
block19:;
uint64_t $tmp452 = $tmp451.value;
uint64_t $tmp453 = $tmp423.value;
bool $tmp454 = $tmp452 >= $tmp453;
frost$core$Bit $tmp455 = (frost$core$Bit) {$tmp454};
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block18; else goto block12;
block20:;
uint64_t $tmp457 = $tmp451.value;
uint64_t $tmp458 = $tmp423.value;
bool $tmp459 = $tmp457 > $tmp458;
frost$core$Bit $tmp460 = (frost$core$Bit) {$tmp459};
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block18; else goto block12;
block18:;
int64_t $tmp462 = $tmp446.value;
int64_t $tmp463 = $tmp422.value;
int64_t $tmp464 = $tmp462 + $tmp463;
frost$core$Int64 $tmp465 = (frost$core$Int64) {$tmp464};
*(&local1) = $tmp465;
goto block11;
block12:;
// line 180
frost$core$Int64* $tmp466 = &param0->bucketCount;
frost$core$Int64 $tmp467 = *$tmp466;
frost$core$Int64 $tmp468 = (frost$core$Int64) {3};
int64_t $tmp469 = $tmp467.value;
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469 * $tmp470;
frost$core$Int64 $tmp472 = (frost$core$Int64) {$tmp471};
frost$core$Int64 $tmp473 = (frost$core$Int64) {4};
int64_t $tmp474 = $tmp472.value;
int64_t $tmp475 = $tmp473.value;
int64_t $tmp476 = $tmp474 / $tmp475;
frost$core$Int64 $tmp477 = (frost$core$Int64) {$tmp476};
frost$core$Int64* $tmp478 = &param0->threshold;
*$tmp478 = $tmp477;
return;

}
void frost$collections$IdentityMap$incrementCount(frost$collections$IdentityMap* param0) {

frost$collections$IdentityMap$Entry** local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$collections$IdentityMap$Entry* local4 = NULL;
frost$core$Int64 local5;
// line 185
frost$core$Int64* $tmp479 = &param0->_count;
frost$core$Int64 $tmp480 = *$tmp479;
frost$core$Int64 $tmp481 = (frost$core$Int64) {1};
int64_t $tmp482 = $tmp480.value;
int64_t $tmp483 = $tmp481.value;
int64_t $tmp484 = $tmp482 + $tmp483;
frost$core$Int64 $tmp485 = (frost$core$Int64) {$tmp484};
frost$core$Int64* $tmp486 = &param0->_count;
*$tmp486 = $tmp485;
// line 186
frost$core$Int64* $tmp487 = &param0->_count;
frost$core$Int64 $tmp488 = *$tmp487;
frost$core$Int64* $tmp489 = &param0->threshold;
frost$core$Int64 $tmp490 = *$tmp489;
int64_t $tmp491 = $tmp488.value;
int64_t $tmp492 = $tmp490.value;
bool $tmp493 = $tmp491 >= $tmp492;
frost$core$Bit $tmp494 = (frost$core$Bit) {$tmp493};
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block1; else goto block2;
block1:;
// line 187
frost$collections$IdentityMap$Entry*** $tmp496 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp497 = *$tmp496;
*(&local0) = $tmp497;
// line 188
frost$core$Int64* $tmp498 = &param0->bucketCount;
frost$core$Int64 $tmp499 = *$tmp498;
*(&local1) = $tmp499;
// line 189
frost$core$Int64* $tmp500 = &param0->bucketCount;
frost$core$Int64 $tmp501 = *$tmp500;
frost$core$Int64 $tmp502 = (frost$core$Int64) {2};
int64_t $tmp503 = $tmp501.value;
int64_t $tmp504 = $tmp502.value;
int64_t $tmp505 = $tmp503 * $tmp504;
frost$core$Int64 $tmp506 = (frost$core$Int64) {$tmp505};
frost$core$Int64* $tmp507 = &param0->bucketCount;
*$tmp507 = $tmp506;
// line 190
frost$core$Int64* $tmp508 = &param0->bucketCount;
frost$core$Int64 $tmp509 = *$tmp508;
int64_t $tmp510 = $tmp509.value;
frost$collections$IdentityMap$Entry** $tmp511 = ((frost$collections$IdentityMap$Entry**) frostZAlloc($tmp510 * 8));
frost$collections$IdentityMap$Entry*** $tmp512 = &param0->contents;
*$tmp512 = $tmp511;
// line 191
frost$core$Int64 $tmp513 = (frost$core$Int64) {0};
frost$core$Int64* $tmp514 = &param0->bucketCount;
frost$core$Int64 $tmp515 = *$tmp514;
frost$core$Bit $tmp516 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp517 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp513, $tmp515, $tmp516);
frost$core$Int64 $tmp518 = $tmp517.min;
*(&local2) = $tmp518;
frost$core$Int64 $tmp519 = $tmp517.max;
frost$core$Bit $tmp520 = $tmp517.inclusive;
bool $tmp521 = $tmp520.value;
frost$core$Int64 $tmp522 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp523 = frost$core$Int64$convert$R$frost$core$UInt64($tmp522);
if ($tmp521) goto block6; else goto block7;
block6:;
int64_t $tmp524 = $tmp518.value;
int64_t $tmp525 = $tmp519.value;
bool $tmp526 = $tmp524 <= $tmp525;
frost$core$Bit $tmp527 = (frost$core$Bit) {$tmp526};
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block3; else goto block4;
block7:;
int64_t $tmp529 = $tmp518.value;
int64_t $tmp530 = $tmp519.value;
bool $tmp531 = $tmp529 < $tmp530;
frost$core$Bit $tmp532 = (frost$core$Bit) {$tmp531};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block3; else goto block4;
block3:;
// line 192
frost$collections$IdentityMap$Entry*** $tmp534 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp535 = *$tmp534;
frost$core$Int64 $tmp536 = *(&local2);
int64_t $tmp537 = $tmp536.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp538 = $tmp535[$tmp537];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
$tmp535[$tmp537] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp539 = *(&local2);
int64_t $tmp540 = $tmp519.value;
int64_t $tmp541 = $tmp539.value;
int64_t $tmp542 = $tmp540 - $tmp541;
frost$core$Int64 $tmp543 = (frost$core$Int64) {$tmp542};
frost$core$UInt64 $tmp544 = frost$core$Int64$convert$R$frost$core$UInt64($tmp543);
if ($tmp521) goto block9; else goto block10;
block9:;
uint64_t $tmp545 = $tmp544.value;
uint64_t $tmp546 = $tmp523.value;
bool $tmp547 = $tmp545 >= $tmp546;
frost$core$Bit $tmp548 = (frost$core$Bit) {$tmp547};
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block8; else goto block4;
block10:;
uint64_t $tmp550 = $tmp544.value;
uint64_t $tmp551 = $tmp523.value;
bool $tmp552 = $tmp550 > $tmp551;
frost$core$Bit $tmp553 = (frost$core$Bit) {$tmp552};
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block8; else goto block4;
block8:;
int64_t $tmp555 = $tmp539.value;
int64_t $tmp556 = $tmp522.value;
int64_t $tmp557 = $tmp555 + $tmp556;
frost$core$Int64 $tmp558 = (frost$core$Int64) {$tmp557};
*(&local2) = $tmp558;
goto block3;
block4:;
// line 194
frost$core$Int64* $tmp559 = &param0->threshold;
frost$core$Int64 $tmp560 = *$tmp559;
frost$core$Int64 $tmp561 = (frost$core$Int64) {2};
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561.value;
int64_t $tmp564 = $tmp562 * $tmp563;
frost$core$Int64 $tmp565 = (frost$core$Int64) {$tmp564};
frost$core$Int64* $tmp566 = &param0->threshold;
*$tmp566 = $tmp565;
// line 195
frost$core$Int64 $tmp567 = (frost$core$Int64) {0};
frost$core$Int64* $tmp568 = &param0->_count;
*$tmp568 = $tmp567;
// line 196
frost$core$Int64 $tmp569 = (frost$core$Int64) {0};
frost$core$Int64 $tmp570 = *(&local1);
frost$core$Bit $tmp571 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp572 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp569, $tmp570, $tmp571);
frost$core$Int64 $tmp573 = $tmp572.min;
*(&local3) = $tmp573;
frost$core$Int64 $tmp574 = $tmp572.max;
frost$core$Bit $tmp575 = $tmp572.inclusive;
bool $tmp576 = $tmp575.value;
frost$core$Int64 $tmp577 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp578 = frost$core$Int64$convert$R$frost$core$UInt64($tmp577);
if ($tmp576) goto block14; else goto block15;
block14:;
int64_t $tmp579 = $tmp573.value;
int64_t $tmp580 = $tmp574.value;
bool $tmp581 = $tmp579 <= $tmp580;
frost$core$Bit $tmp582 = (frost$core$Bit) {$tmp581};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block11; else goto block12;
block15:;
int64_t $tmp584 = $tmp573.value;
int64_t $tmp585 = $tmp574.value;
bool $tmp586 = $tmp584 < $tmp585;
frost$core$Bit $tmp587 = (frost$core$Bit) {$tmp586};
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block11; else goto block12;
block11:;
// line 197
frost$collections$IdentityMap$Entry** $tmp589 = *(&local0);
frost$core$Int64 $tmp590 = *(&local3);
int64_t $tmp591 = $tmp590.value;
frost$collections$IdentityMap$Entry* $tmp592 = $tmp589[$tmp591];
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$collections$IdentityMap$Entry* $tmp593 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
*(&local4) = $tmp592;
// line 198
goto block16;
block16:;
frost$collections$IdentityMap$Entry* $tmp594 = *(&local4);
frost$core$Bit $tmp595 = frost$core$Bit$init$builtin_bit($tmp594 != NULL);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block17; else goto block18;
block17:;
// line 199
frost$collections$IdentityMap$Entry* $tmp597 = *(&local4);
frost$core$Object** $tmp598 = &$tmp597->key;
frost$core$Object* $tmp599 = *$tmp598;
frost$collections$IdentityMap$Entry* $tmp600 = *(&local4);
frost$core$Object** $tmp601 = &$tmp600->value;
frost$core$Object* $tmp602 = *$tmp601;
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(param0, $tmp599, $tmp602);
// line 200
frost$collections$IdentityMap$Entry* $tmp603 = *(&local4);
frost$collections$IdentityMap$Entry** $tmp604 = &$tmp603->next;
frost$collections$IdentityMap$Entry* $tmp605 = *$tmp604;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
frost$collections$IdentityMap$Entry* $tmp606 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local4) = $tmp605;
goto block16;
block18:;
frost$collections$IdentityMap$Entry* $tmp607 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
// unreffing e
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block13;
block13:;
frost$core$Int64 $tmp608 = *(&local3);
int64_t $tmp609 = $tmp574.value;
int64_t $tmp610 = $tmp608.value;
int64_t $tmp611 = $tmp609 - $tmp610;
frost$core$Int64 $tmp612 = (frost$core$Int64) {$tmp611};
frost$core$UInt64 $tmp613 = frost$core$Int64$convert$R$frost$core$UInt64($tmp612);
if ($tmp576) goto block20; else goto block21;
block20:;
uint64_t $tmp614 = $tmp613.value;
uint64_t $tmp615 = $tmp578.value;
bool $tmp616 = $tmp614 >= $tmp615;
frost$core$Bit $tmp617 = (frost$core$Bit) {$tmp616};
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block19; else goto block12;
block21:;
uint64_t $tmp619 = $tmp613.value;
uint64_t $tmp620 = $tmp578.value;
bool $tmp621 = $tmp619 > $tmp620;
frost$core$Bit $tmp622 = (frost$core$Bit) {$tmp621};
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block19; else goto block12;
block19:;
int64_t $tmp624 = $tmp608.value;
int64_t $tmp625 = $tmp577.value;
int64_t $tmp626 = $tmp624 + $tmp625;
frost$core$Int64 $tmp627 = (frost$core$Int64) {$tmp626};
*(&local3) = $tmp627;
goto block11;
block12:;
// line 203
frost$core$Int64 $tmp628 = (frost$core$Int64) {0};
frost$core$Int64 $tmp629 = *(&local1);
frost$core$Bit $tmp630 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp631 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp628, $tmp629, $tmp630);
frost$core$Int64 $tmp632 = $tmp631.min;
*(&local5) = $tmp632;
frost$core$Int64 $tmp633 = $tmp631.max;
frost$core$Bit $tmp634 = $tmp631.inclusive;
bool $tmp635 = $tmp634.value;
frost$core$Int64 $tmp636 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp637 = frost$core$Int64$convert$R$frost$core$UInt64($tmp636);
if ($tmp635) goto block25; else goto block26;
block25:;
int64_t $tmp638 = $tmp632.value;
int64_t $tmp639 = $tmp633.value;
bool $tmp640 = $tmp638 <= $tmp639;
frost$core$Bit $tmp641 = (frost$core$Bit) {$tmp640};
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block22; else goto block23;
block26:;
int64_t $tmp643 = $tmp632.value;
int64_t $tmp644 = $tmp633.value;
bool $tmp645 = $tmp643 < $tmp644;
frost$core$Bit $tmp646 = (frost$core$Bit) {$tmp645};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block22; else goto block23;
block22:;
// line 204
frost$collections$IdentityMap$Entry** $tmp648 = *(&local0);
frost$core$Int64 $tmp649 = *(&local5);
int64_t $tmp650 = $tmp649.value;
frost$collections$IdentityMap$Entry* $tmp651 = $tmp648[$tmp650];
frost$core$Bit $tmp652 = frost$core$Bit$init$builtin_bit($tmp651 != NULL);
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block27; else goto block28;
block27:;
// line 205
frost$collections$IdentityMap$Entry** $tmp654 = *(&local0);
frost$core$Int64 $tmp655 = *(&local5);
int64_t $tmp656 = $tmp655.value;
frost$collections$IdentityMap$Entry* $tmp657 = $tmp654[$tmp656];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
goto block28;
block28:;
goto block24;
block24:;
frost$core$Int64 $tmp658 = *(&local5);
int64_t $tmp659 = $tmp633.value;
int64_t $tmp660 = $tmp658.value;
int64_t $tmp661 = $tmp659 - $tmp660;
frost$core$Int64 $tmp662 = (frost$core$Int64) {$tmp661};
frost$core$UInt64 $tmp663 = frost$core$Int64$convert$R$frost$core$UInt64($tmp662);
if ($tmp635) goto block30; else goto block31;
block30:;
uint64_t $tmp664 = $tmp663.value;
uint64_t $tmp665 = $tmp637.value;
bool $tmp666 = $tmp664 >= $tmp665;
frost$core$Bit $tmp667 = (frost$core$Bit) {$tmp666};
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block29; else goto block23;
block31:;
uint64_t $tmp669 = $tmp663.value;
uint64_t $tmp670 = $tmp637.value;
bool $tmp671 = $tmp669 > $tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block29; else goto block23;
block29:;
int64_t $tmp674 = $tmp658.value;
int64_t $tmp675 = $tmp636.value;
int64_t $tmp676 = $tmp674 + $tmp675;
frost$core$Int64 $tmp677 = (frost$core$Int64) {$tmp676};
*(&local5) = $tmp677;
goto block22;
block23:;
// line 208
frost$collections$IdentityMap$Entry** $tmp678 = *(&local0);
frostFree($tmp678);
goto block2;
block2:;
return;

}
frost$core$Int64 frost$collections$IdentityMap$get_count$R$frost$core$Int64(frost$collections$IdentityMap* param0) {

// line 214
frost$core$Int64* $tmp679 = &param0->_count;
frost$core$Int64 $tmp680 = *$tmp679;
return $tmp680;

}
frost$collections$Iterator* frost$collections$IdentityMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$K$GT(frost$collections$IdentityMap* param0) {

// line 219
frost$core$Bit $tmp681 = frost$core$Bit$init$builtin_bit(false);
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp683 = (frost$core$Int64) {219};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s684, $tmp683, &$s685);
abort(); // unreachable
block1:;
frost$core$Bit $tmp686 = frost$core$Bit$init$builtin_bit(false);
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp688 = (frost$core$Int64) {218};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s689, $tmp688, &$s690);
abort(); // unreachable
block3:;
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$IdentityMap$get_values$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$V$GT(frost$collections$IdentityMap* param0) {

// line 224
frost$core$Bit $tmp691 = frost$core$Bit$init$builtin_bit(false);
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp693 = (frost$core$Int64) {224};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s694, $tmp693, &$s695);
abort(); // unreachable
block1:;
frost$core$Bit $tmp696 = frost$core$Bit$init$builtin_bit(false);
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp698 = (frost$core$Int64) {223};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s699, $tmp698, &$s700);
abort(); // unreachable
block3:;
abort(); // unreachable

}
frost$core$String* frost$collections$IdentityMap$convert$R$frost$core$String(frost$collections$IdentityMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$collections$IdentityMap$Entry* local3 = NULL;
// line 235
frost$core$MutableString* $tmp701 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp701);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$MutableString* $tmp702 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local0) = $tmp701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// unreffing REF($1:frost.core.MutableString)
// line 236
frost$core$MutableString* $tmp703 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp703, &$s704);
// line 237
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s705));
frost$core$String* $tmp706 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
*(&local1) = &$s707;
// line 238
frost$core$Int64 $tmp708 = (frost$core$Int64) {0};
frost$core$Int64* $tmp709 = &param0->bucketCount;
frost$core$Int64 $tmp710 = *$tmp709;
frost$core$Bit $tmp711 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp712 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp708, $tmp710, $tmp711);
frost$core$Int64 $tmp713 = $tmp712.min;
*(&local2) = $tmp713;
frost$core$Int64 $tmp714 = $tmp712.max;
frost$core$Bit $tmp715 = $tmp712.inclusive;
bool $tmp716 = $tmp715.value;
frost$core$Int64 $tmp717 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp718 = frost$core$Int64$convert$R$frost$core$UInt64($tmp717);
if ($tmp716) goto block4; else goto block5;
block4:;
int64_t $tmp719 = $tmp713.value;
int64_t $tmp720 = $tmp714.value;
bool $tmp721 = $tmp719 <= $tmp720;
frost$core$Bit $tmp722 = (frost$core$Bit) {$tmp721};
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block1; else goto block2;
block5:;
int64_t $tmp724 = $tmp713.value;
int64_t $tmp725 = $tmp714.value;
bool $tmp726 = $tmp724 < $tmp725;
frost$core$Bit $tmp727 = (frost$core$Bit) {$tmp726};
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block1; else goto block2;
block1:;
// line 239
frost$collections$IdentityMap$Entry*** $tmp729 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp730 = *$tmp729;
frost$core$Int64 $tmp731 = *(&local2);
int64_t $tmp732 = $tmp731.value;
frost$collections$IdentityMap$Entry* $tmp733 = $tmp730[$tmp732];
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$collections$IdentityMap$Entry* $tmp734 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local3) = $tmp733;
// line 240
goto block6;
block6:;
frost$collections$IdentityMap$Entry* $tmp735 = *(&local3);
frost$core$Bit $tmp736 = frost$core$Bit$init$builtin_bit($tmp735 != NULL);
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block7; else goto block8;
block7:;
// line 241
frost$core$MutableString* $tmp738 = *(&local0);
frost$core$String* $tmp739 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp738, $tmp739);
// line 242
frost$collections$IdentityMap$Entry* $tmp740 = *(&local3);
frost$core$Object** $tmp741 = &$tmp740->key;
frost$core$Object* $tmp742 = *$tmp741;
frost$core$Bit $tmp743 = frost$core$Bit$init$builtin_bit(true);
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block9; else goto block11;
block9:;
// line 243
frost$core$MutableString* $tmp745 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp746 = *(&local3);
frost$core$Object** $tmp747 = &$tmp746->key;
frost$core$Object* $tmp748 = *$tmp747;
frost$core$MutableString$append$frost$core$Object($tmp745, $tmp748);
goto block10;
block11:;
// line 1
// line 246
frost$core$MutableString* $tmp749 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp749, &$s750);
goto block10;
block10:;
// line 248
frost$core$MutableString* $tmp751 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp751, &$s752);
// line 249
frost$collections$IdentityMap$Entry* $tmp753 = *(&local3);
frost$core$Object** $tmp754 = &$tmp753->value;
frost$core$Object* $tmp755 = *$tmp754;
frost$core$Bit $tmp756 = frost$core$Bit$init$builtin_bit(true);
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block12; else goto block14;
block12:;
// line 250
frost$core$MutableString* $tmp758 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp759 = *(&local3);
frost$core$Object** $tmp760 = &$tmp759->value;
frost$core$Object* $tmp761 = *$tmp760;
frost$core$MutableString$append$frost$core$Object($tmp758, $tmp761);
goto block13;
block14:;
// line 1
// line 253
frost$core$MutableString* $tmp762 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp762, &$s763);
goto block13;
block13:;
// line 255
frost$collections$IdentityMap$Entry* $tmp764 = *(&local3);
frost$collections$IdentityMap$Entry** $tmp765 = &$tmp764->next;
frost$collections$IdentityMap$Entry* $tmp766 = *$tmp765;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$collections$IdentityMap$Entry* $tmp767 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local3) = $tmp766;
// line 256
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s768));
frost$core$String* $tmp769 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local1) = &$s770;
goto block6;
block8:;
frost$collections$IdentityMap$Entry* $tmp771 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
// unreffing entry
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp772 = *(&local2);
int64_t $tmp773 = $tmp714.value;
int64_t $tmp774 = $tmp772.value;
int64_t $tmp775 = $tmp773 - $tmp774;
frost$core$Int64 $tmp776 = (frost$core$Int64) {$tmp775};
frost$core$UInt64 $tmp777 = frost$core$Int64$convert$R$frost$core$UInt64($tmp776);
if ($tmp716) goto block16; else goto block17;
block16:;
uint64_t $tmp778 = $tmp777.value;
uint64_t $tmp779 = $tmp718.value;
bool $tmp780 = $tmp778 >= $tmp779;
frost$core$Bit $tmp781 = (frost$core$Bit) {$tmp780};
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block15; else goto block2;
block17:;
uint64_t $tmp783 = $tmp777.value;
uint64_t $tmp784 = $tmp718.value;
bool $tmp785 = $tmp783 > $tmp784;
frost$core$Bit $tmp786 = (frost$core$Bit) {$tmp785};
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block15; else goto block2;
block15:;
int64_t $tmp788 = $tmp772.value;
int64_t $tmp789 = $tmp717.value;
int64_t $tmp790 = $tmp788 + $tmp789;
frost$core$Int64 $tmp791 = (frost$core$Int64) {$tmp790};
*(&local2) = $tmp791;
goto block1;
block2:;
// line 259
frost$core$MutableString* $tmp792 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp792, &$s793);
// line 260
frost$core$MutableString* $tmp794 = *(&local0);
frost$core$String* $tmp795 = frost$core$MutableString$finish$R$frost$core$String($tmp794);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($183:frost.core.String)
frost$core$String* $tmp796 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp797 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp795;

}

