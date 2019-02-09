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
#include "frost/collections/IdentityMap/EntryIterator.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Object* frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1) {
    frost$core$Object* result = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(p0, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1) {
    frost$core$Bit result = frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(p0, p1);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT$shim(frost$collections$IdentityMap* p0) {
    frost$collections$Iterator* result = frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1, frost$core$Object* p2) {
    frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(p0, p1, p2);

}
__attribute__((weak)) void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1) {
    frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(p0, p1);

}

struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$collections$IdentityMap$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, NULL, { frost$collections$IdentityMap$get_count$R$frost$core$Int64, frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim, frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim, frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT$shim, frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT, frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$IdentityMap$_frost$collections$MapWriter = { (frost$core$Class*) &frost$collections$MapWriter$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$MapView, { frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim, frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim, frost$collections$IdentityMap$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$IdentityMap$_frost$collections$Map = { (frost$core$Class*) &frost$collections$Map$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$MapWriter, { } };

static frost$core$String $s1;
frost$collections$IdentityMap$class_type frost$collections$IdentityMap$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$Map, { frost$collections$IdentityMap$get_asString$R$frost$core$String, frost$collections$IdentityMap$cleanup, frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64, frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim, frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim, frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim, frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim, frost$collections$IdentityMap$clear, frost$collections$IdentityMap$incrementCount, frost$collections$IdentityMap$get_count$R$frost$core$Int64, frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT$shim} };

typedef frost$core$String* (*$fn771)(frost$core$Object*);
typedef frost$core$String* (*$fn787)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, 288545962238954754, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s774 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s776 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s790 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s795 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s821 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };

void frost$collections$IdentityMap$init(frost$collections$IdentityMap* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:89
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:95
frost$core$Int64* $tmp4 = &param0->changeCount;
frost$core$Int64 $tmp5 = *$tmp4;
frost$core$Int64 $tmp6 = (frost$core$Int64) {1};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
frost$core$Int64 $tmp10 = (frost$core$Int64) {$tmp9};
frost$core$Int64* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:96
frost$core$Int64 $tmp12 = (frost$core$Int64) {0};
frost$core$Int64* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:97
frost$core$Int64 $tmp14 = (frost$core$Int64) {16};
frost$core$Int64* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:98
frost$core$Int64* $tmp16 = &param0->bucketCount;
frost$core$Int64 $tmp17 = *$tmp16;
int64_t $tmp18 = $tmp17.value;
frost$collections$IdentityMap$Entry** $tmp19 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp18 * 8));
frost$collections$IdentityMap$Entry*** $tmp20 = &param0->contents;
*$tmp20 = $tmp19;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:99
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
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp31 = $tmp30.value;
frost$core$UInt64 $tmp32 = (frost$core$UInt64) {((uint64_t) $tmp31)};
if ($tmp29) goto block5; else goto block6;
block5:;
int64_t $tmp33 = $tmp26.value;
int64_t $tmp34 = $tmp27.value;
bool $tmp35 = $tmp33 <= $tmp34;
frost$core$Bit $tmp36 = (frost$core$Bit) {$tmp35};
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block2; else goto block3;
block6:;
int64_t $tmp38 = $tmp26.value;
int64_t $tmp39 = $tmp27.value;
bool $tmp40 = $tmp38 < $tmp39;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp40};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:100
frost$collections$IdentityMap$Entry*** $tmp43 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp44 = *$tmp43;
frost$core$Int64 $tmp45 = *(&local0);
int64_t $tmp46 = $tmp45.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp47 = $tmp44[$tmp46];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
$tmp44[$tmp46] = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int64 $tmp48 = *(&local0);
int64_t $tmp49 = $tmp27.value;
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49 - $tmp50;
frost$core$Int64 $tmp52 = (frost$core$Int64) {$tmp51};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp53 = $tmp52.value;
frost$core$UInt64 $tmp54 = (frost$core$UInt64) {((uint64_t) $tmp53)};
if ($tmp29) goto block9; else goto block10;
block9:;
uint64_t $tmp55 = $tmp54.value;
uint64_t $tmp56 = $tmp32.value;
bool $tmp57 = $tmp55 >= $tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block7; else goto block3;
block10:;
uint64_t $tmp60 = $tmp54.value;
uint64_t $tmp61 = $tmp32.value;
bool $tmp62 = $tmp60 > $tmp61;
frost$core$Bit $tmp63 = (frost$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block7; else goto block3;
block7:;
int64_t $tmp65 = $tmp48.value;
int64_t $tmp66 = $tmp30.value;
int64_t $tmp67 = $tmp65 + $tmp66;
frost$core$Int64 $tmp68 = (frost$core$Int64) {$tmp67};
*(&local0) = $tmp68;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:102
frost$core$Int64* $tmp69 = &param0->bucketCount;
frost$core$Int64 $tmp70 = *$tmp69;
frost$core$Int64 $tmp71 = (frost$core$Int64) {3};
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71.value;
int64_t $tmp74 = $tmp72 * $tmp73;
frost$core$Int64 $tmp75 = (frost$core$Int64) {$tmp74};
frost$core$Int64 $tmp76 = (frost$core$Int64) {4};
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77 / $tmp78;
frost$core$Int64 $tmp80 = (frost$core$Int64) {$tmp79};
frost$core$Int64* $tmp81 = &param0->threshold;
*$tmp81 = $tmp80;
return;

}
void frost$collections$IdentityMap$cleanup(frost$collections$IdentityMap* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:107
frost$core$Int64 $tmp82 = (frost$core$Int64) {0};
frost$core$Int64* $tmp83 = &param0->bucketCount;
frost$core$Int64 $tmp84 = *$tmp83;
frost$core$Bit $tmp85 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp86 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp82, $tmp84, $tmp85);
frost$core$Int64 $tmp87 = $tmp86.min;
*(&local0) = $tmp87;
frost$core$Int64 $tmp88 = $tmp86.max;
frost$core$Bit $tmp89 = $tmp86.inclusive;
bool $tmp90 = $tmp89.value;
frost$core$Int64 $tmp91 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp92 = $tmp91.value;
frost$core$UInt64 $tmp93 = (frost$core$UInt64) {((uint64_t) $tmp92)};
if ($tmp90) goto block5; else goto block6;
block5:;
int64_t $tmp94 = $tmp87.value;
int64_t $tmp95 = $tmp88.value;
bool $tmp96 = $tmp94 <= $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block2; else goto block3;
block6:;
int64_t $tmp99 = $tmp87.value;
int64_t $tmp100 = $tmp88.value;
bool $tmp101 = $tmp99 < $tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:108
frost$collections$IdentityMap$Entry*** $tmp104 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp105 = *$tmp104;
frost$core$Int64 $tmp106 = *(&local0);
int64_t $tmp107 = $tmp106.value;
frost$collections$IdentityMap$Entry* $tmp108 = $tmp105[$tmp107];
frost$core$Bit $tmp109 = frost$core$Bit$init$builtin_bit($tmp108 != NULL);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:109
frost$collections$IdentityMap$Entry*** $tmp111 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp112 = *$tmp111;
frost$core$Int64 $tmp113 = *(&local0);
int64_t $tmp114 = $tmp113.value;
frost$collections$IdentityMap$Entry* $tmp115 = $tmp112[$tmp114];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
goto block8;
block8:;
frost$core$Int64 $tmp116 = *(&local0);
int64_t $tmp117 = $tmp88.value;
int64_t $tmp118 = $tmp116.value;
int64_t $tmp119 = $tmp117 - $tmp118;
frost$core$Int64 $tmp120 = (frost$core$Int64) {$tmp119};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp121 = $tmp120.value;
frost$core$UInt64 $tmp122 = (frost$core$UInt64) {((uint64_t) $tmp121)};
if ($tmp90) goto block11; else goto block12;
block11:;
uint64_t $tmp123 = $tmp122.value;
uint64_t $tmp124 = $tmp93.value;
bool $tmp125 = $tmp123 >= $tmp124;
frost$core$Bit $tmp126 = (frost$core$Bit) {$tmp125};
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block9; else goto block3;
block12:;
uint64_t $tmp128 = $tmp122.value;
uint64_t $tmp129 = $tmp93.value;
bool $tmp130 = $tmp128 > $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block9; else goto block3;
block9:;
int64_t $tmp133 = $tmp116.value;
int64_t $tmp134 = $tmp91.value;
int64_t $tmp135 = $tmp133 + $tmp134;
frost$core$Int64 $tmp136 = (frost$core$Int64) {$tmp135};
*(&local0) = $tmp136;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:112
frost$collections$IdentityMap$Entry*** $tmp137 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp138 = *$tmp137;
frostFree($tmp138);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:106
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Int64 frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int64 $tmp139;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp139, param1);
frost$core$Int64* $tmp140 = &param0->bucketCount;
frost$core$Int64 $tmp141 = *$tmp140;
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:64
int64_t $tmp142 = $tmp139.value;
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142 % $tmp143;
frost$core$Int64 $tmp145 = frost$core$Int64$init$builtin_int64($tmp144);
return $tmp145;

}
frost$core$Object* frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:125
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int64 from IdentityMap.frost:125:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int64 $tmp146;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp146, param1);
frost$core$Int64* $tmp147 = &param0->bucketCount;
frost$core$Int64 $tmp148 = *$tmp147;
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:64
int64_t $tmp149 = $tmp146.value;
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149 % $tmp150;
frost$core$Int64 $tmp152 = frost$core$Int64$init$builtin_int64($tmp151);
*(&local0) = $tmp152;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:126
frost$collections$IdentityMap$Entry*** $tmp153 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp154 = *$tmp153;
frost$core$Int64 $tmp155 = *(&local0);
int64_t $tmp156 = $tmp155.value;
frost$collections$IdentityMap$Entry* $tmp157 = $tmp154[$tmp156];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$collections$IdentityMap$Entry* $tmp158 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local1) = $tmp157;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:127
goto block3;
block3:;
frost$collections$IdentityMap$Entry* $tmp159 = *(&local1);
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit($tmp159 != NULL);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block6; else goto block5;
block6:;
frost$collections$IdentityMap$Entry* $tmp162 = *(&local1);
frost$core$Object** $tmp163 = &$tmp162->key;
frost$core$Object* $tmp164 = *$tmp163;
bool $tmp165 = $tmp164 != param1;
frost$core$Bit $tmp166 = frost$core$Bit$init$builtin_bit($tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:128
frost$collections$IdentityMap$Entry* $tmp168 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp169 = &$tmp168->next;
frost$collections$IdentityMap$Entry* $tmp170 = *$tmp169;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$collections$IdentityMap$Entry* $tmp171 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local1) = $tmp170;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:130
frost$collections$IdentityMap$Entry* $tmp172 = *(&local1);
frost$core$Bit $tmp173 = frost$core$Bit$init$builtin_bit($tmp172 != NULL);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:131
frost$collections$IdentityMap$Entry* $tmp175 = *(&local1);
frost$core$Object** $tmp176 = &$tmp175->value;
frost$core$Object* $tmp177 = *$tmp176;
frost$core$Frost$ref$frost$core$Object$Q($tmp177);
frost$collections$IdentityMap$Entry* $tmp178 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp177;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$IdentityMap$Entry* $tmp179 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block8:;
goto block10;
block10:;

}
frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:140
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int64 from IdentityMap.frost:140:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int64 $tmp180;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp180, param1);
frost$core$Int64* $tmp181 = &param0->bucketCount;
frost$core$Int64 $tmp182 = *$tmp181;
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:64
int64_t $tmp183 = $tmp180.value;
int64_t $tmp184 = $tmp182.value;
int64_t $tmp185 = $tmp183 % $tmp184;
frost$core$Int64 $tmp186 = frost$core$Int64$init$builtin_int64($tmp185);
*(&local0) = $tmp186;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:141
frost$collections$IdentityMap$Entry*** $tmp187 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp188 = *$tmp187;
frost$core$Int64 $tmp189 = *(&local0);
int64_t $tmp190 = $tmp189.value;
frost$collections$IdentityMap$Entry* $tmp191 = $tmp188[$tmp190];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$collections$IdentityMap$Entry* $tmp192 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local1) = $tmp191;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:142
goto block3;
block3:;
frost$collections$IdentityMap$Entry* $tmp193 = *(&local1);
frost$core$Bit $tmp194 = frost$core$Bit$init$builtin_bit($tmp193 != NULL);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block6; else goto block5;
block6:;
frost$collections$IdentityMap$Entry* $tmp196 = *(&local1);
frost$core$Object** $tmp197 = &$tmp196->key;
frost$core$Object* $tmp198 = *$tmp197;
bool $tmp199 = $tmp198 != param1;
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit($tmp199);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:143
frost$collections$IdentityMap$Entry* $tmp202 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp203 = &$tmp202->next;
frost$collections$IdentityMap$Entry* $tmp204 = *$tmp203;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$collections$IdentityMap$Entry* $tmp205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local1) = $tmp204;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:145
frost$collections$IdentityMap$Entry* $tmp206 = *(&local1);
frost$core$Bit $tmp207 = frost$core$Bit$init$builtin_bit($tmp206 != NULL);
frost$collections$IdentityMap$Entry* $tmp208 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp207;

}
void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(frost$collections$IdentityMap* param0, frost$core$Object* param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$collections$IdentityMap$Entry* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:150
frost$core$Int64* $tmp209 = &param0->changeCount;
frost$core$Int64 $tmp210 = *$tmp209;
frost$core$Int64 $tmp211 = (frost$core$Int64) {1};
int64_t $tmp212 = $tmp210.value;
int64_t $tmp213 = $tmp211.value;
int64_t $tmp214 = $tmp212 + $tmp213;
frost$core$Int64 $tmp215 = (frost$core$Int64) {$tmp214};
frost$core$Int64* $tmp216 = &param0->changeCount;
*$tmp216 = $tmp215;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:151
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int64 from IdentityMap.frost:151:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int64 $tmp217;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp217, param1);
frost$core$Int64* $tmp218 = &param0->bucketCount;
frost$core$Int64 $tmp219 = *$tmp218;
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:64
int64_t $tmp220 = $tmp217.value;
int64_t $tmp221 = $tmp219.value;
int64_t $tmp222 = $tmp220 % $tmp221;
frost$core$Int64 $tmp223 = frost$core$Int64$init$builtin_int64($tmp222);
*(&local0) = $tmp223;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:152
frost$collections$IdentityMap$Entry*** $tmp224 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp225 = *$tmp224;
frost$core$Int64 $tmp226 = *(&local0);
int64_t $tmp227 = $tmp226.value;
frost$collections$IdentityMap$Entry* $tmp228 = $tmp225[$tmp227];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$collections$IdentityMap$Entry* $tmp229 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local1) = $tmp228;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:153
goto block3;
block3:;
frost$collections$IdentityMap$Entry* $tmp230 = *(&local1);
frost$core$Bit $tmp231 = frost$core$Bit$init$builtin_bit($tmp230 != NULL);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block6; else goto block5;
block6:;
frost$collections$IdentityMap$Entry* $tmp233 = *(&local1);
frost$core$Object** $tmp234 = &$tmp233->key;
frost$core$Object* $tmp235 = *$tmp234;
bool $tmp236 = $tmp235 != param1;
frost$core$Bit $tmp237 = frost$core$Bit$init$builtin_bit($tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:154
frost$collections$IdentityMap$Entry* $tmp239 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp240 = &$tmp239->next;
frost$collections$IdentityMap$Entry* $tmp241 = *$tmp240;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$collections$IdentityMap$Entry* $tmp242 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local1) = $tmp241;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:156
frost$collections$IdentityMap$Entry* $tmp243 = *(&local1);
frost$core$Bit $tmp244 = frost$core$Bit$init$builtin_bit($tmp243 == NULL);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:157
frost$collections$IdentityMap$Entry*** $tmp246 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp247 = *$tmp246;
frost$core$Int64 $tmp248 = *(&local0);
int64_t $tmp249 = $tmp248.value;
frost$collections$IdentityMap$Entry* $tmp250 = $tmp247[$tmp249];
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$collections$IdentityMap$Entry* $tmp251 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local2) = $tmp250;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:158
FROST_ASSERT(40 == sizeof(frost$collections$IdentityMap$Entry));
frost$collections$IdentityMap$Entry* $tmp252 = (frost$collections$IdentityMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$IdentityMap$Entry$class);
// begin inline call to frost.collections.IdentityMap.Entry.init(key:frost.collections.IdentityMap.Entry.K, value:frost.collections.IdentityMap.Entry.V) from IdentityMap.frost:158:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:29
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp253 = &$tmp252->key;
frost$core$Object* $tmp254 = *$tmp253;
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
frost$core$Object** $tmp255 = &$tmp252->key;
*$tmp255 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:30
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp256 = &$tmp252->value;
frost$core$Object* $tmp257 = *$tmp256;
frost$core$Frost$unref$frost$core$Object$Q($tmp257);
frost$core$Object** $tmp258 = &$tmp252->value;
*$tmp258 = param2;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$collections$IdentityMap$Entry* $tmp259 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local1) = $tmp252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:159
frost$collections$IdentityMap$Entry* $tmp260 = *(&local1);
frost$collections$IdentityMap$Entry* $tmp261 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$collections$IdentityMap$Entry** $tmp262 = &$tmp260->next;
frost$collections$IdentityMap$Entry* $tmp263 = *$tmp262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$collections$IdentityMap$Entry** $tmp264 = &$tmp260->next;
*$tmp264 = $tmp261;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:160
frost$collections$IdentityMap$Entry*** $tmp265 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp266 = *$tmp265;
frost$core$Int64 $tmp267 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp268 = *(&local1);
int64_t $tmp269 = $tmp267.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$collections$IdentityMap$Entry* $tmp270 = $tmp266[$tmp269];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
$tmp266[$tmp269] = $tmp268;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:161
frost$collections$IdentityMap$incrementCount(param0);
frost$collections$IdentityMap$Entry* $tmp271 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:164
frost$collections$IdentityMap$Entry* $tmp272 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp273 = &$tmp272->value;
frost$core$Object* $tmp274 = *$tmp273;
frost$core$Frost$unref$frost$core$Object$Q($tmp274);
frost$core$Object** $tmp275 = &$tmp272->value;
*$tmp275 = param2;
goto block8;
block8:;
frost$collections$IdentityMap$Entry* $tmp276 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$collections$IdentityMap$Entry* local2 = NULL;
frost$collections$IdentityMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:170
frost$core$Int64* $tmp277 = &param0->changeCount;
frost$core$Int64 $tmp278 = *$tmp277;
frost$core$Int64 $tmp279 = (frost$core$Int64) {1};
int64_t $tmp280 = $tmp278.value;
int64_t $tmp281 = $tmp279.value;
int64_t $tmp282 = $tmp280 + $tmp281;
frost$core$Int64 $tmp283 = (frost$core$Int64) {$tmp282};
frost$core$Int64* $tmp284 = &param0->changeCount;
*$tmp284 = $tmp283;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:171
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int64 from IdentityMap.frost:171:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int64 $tmp285;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp285, param1);
frost$core$Int64* $tmp286 = &param0->bucketCount;
frost$core$Int64 $tmp287 = *$tmp286;
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:64
int64_t $tmp288 = $tmp285.value;
int64_t $tmp289 = $tmp287.value;
int64_t $tmp290 = $tmp288 % $tmp289;
frost$core$Int64 $tmp291 = frost$core$Int64$init$builtin_int64($tmp290);
*(&local0) = $tmp291;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:172
frost$collections$IdentityMap$Entry*** $tmp292 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp293 = *$tmp292;
frost$core$Int64 $tmp294 = *(&local0);
int64_t $tmp295 = $tmp294.value;
frost$collections$IdentityMap$Entry* $tmp296 = $tmp293[$tmp295];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$collections$IdentityMap$Entry* $tmp297 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local1) = $tmp296;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:174
frost$collections$IdentityMap$Entry* $tmp298 = *(&local1);
frost$core$Bit $tmp299 = frost$core$Bit$init$builtin_bit($tmp298 == NULL);
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:175
frost$collections$IdentityMap$Entry* $tmp301 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:178
frost$collections$IdentityMap$Entry* $tmp302 = *(&local1);
frost$core$Object** $tmp303 = &$tmp302->key;
frost$core$Object* $tmp304 = *$tmp303;
bool $tmp305 = $tmp304 == param1;
frost$core$Bit $tmp306 = frost$core$Bit$init$builtin_bit($tmp305);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:179
frost$collections$IdentityMap$Entry*** $tmp308 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp309 = *$tmp308;
frost$core$Int64 $tmp310 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp311 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp312 = &$tmp311->next;
frost$collections$IdentityMap$Entry* $tmp313 = *$tmp312;
int64_t $tmp314 = $tmp310.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$collections$IdentityMap$Entry* $tmp315 = $tmp309[$tmp314];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
$tmp309[$tmp314] = $tmp313;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:180
frost$core$Int64* $tmp316 = &param0->_count;
frost$core$Int64 $tmp317 = *$tmp316;
frost$core$Int64 $tmp318 = (frost$core$Int64) {1};
int64_t $tmp319 = $tmp317.value;
int64_t $tmp320 = $tmp318.value;
int64_t $tmp321 = $tmp319 - $tmp320;
frost$core$Int64 $tmp322 = (frost$core$Int64) {$tmp321};
frost$core$Int64* $tmp323 = &param0->_count;
*$tmp323 = $tmp322;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:181
frost$collections$IdentityMap$Entry* $tmp324 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:183
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:184
frost$collections$IdentityMap$Entry* $tmp325 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp326 = &$tmp325->next;
frost$collections$IdentityMap$Entry* $tmp327 = *$tmp326;
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$collections$IdentityMap$Entry* $tmp328 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local2) = $tmp327;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:185
frost$collections$IdentityMap$Entry* $tmp329 = *(&local2);
frost$core$Bit $tmp330 = frost$core$Bit$init$builtin_bit($tmp329 == NULL);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:187
frost$collections$IdentityMap$Entry* $tmp332 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp333 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:189
frost$collections$IdentityMap$Entry* $tmp334 = *(&local2);
frost$core$Object** $tmp335 = &$tmp334->key;
frost$core$Object* $tmp336 = *$tmp335;
bool $tmp337 = $tmp336 == param1;
frost$core$Bit $tmp338 = frost$core$Bit$init$builtin_bit($tmp337);
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:191
frost$collections$IdentityMap$Entry* $tmp340 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:196
frost$collections$IdentityMap$Entry* $tmp341 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp342 = &$tmp341->next;
frost$collections$IdentityMap$Entry* $tmp343 = *$tmp342;
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$collections$IdentityMap$Entry* $tmp344 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local3) = $tmp343;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:197
frost$collections$IdentityMap$Entry* $tmp345 = *(&local3);
frost$core$Bit $tmp346 = frost$core$Bit$init$builtin_bit($tmp345 != NULL);
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block13; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:193
frost$collections$IdentityMap$Entry* $tmp348 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
frost$collections$IdentityMap$Entry* $tmp349 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local1) = $tmp348;
frost$collections$IdentityMap$Entry* $tmp350 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block7;
block14:;
frost$core$Int64 $tmp351 = (frost$core$Int64) {197};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s352, $tmp351);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:198
frost$collections$IdentityMap$Entry* $tmp353 = *(&local1);
frost$collections$IdentityMap$Entry* $tmp354 = *(&local3);
frost$collections$IdentityMap$Entry** $tmp355 = &$tmp354->next;
frost$collections$IdentityMap$Entry* $tmp356 = *$tmp355;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$collections$IdentityMap$Entry** $tmp357 = &$tmp353->next;
frost$collections$IdentityMap$Entry* $tmp358 = *$tmp357;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$collections$IdentityMap$Entry** $tmp359 = &$tmp353->next;
*$tmp359 = $tmp356;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:199
frost$core$Int64* $tmp360 = &param0->_count;
frost$core$Int64 $tmp361 = *$tmp360;
frost$core$Int64 $tmp362 = (frost$core$Int64) {1};
int64_t $tmp363 = $tmp361.value;
int64_t $tmp364 = $tmp362.value;
int64_t $tmp365 = $tmp363 - $tmp364;
frost$core$Int64 $tmp366 = (frost$core$Int64) {$tmp365};
frost$core$Int64* $tmp367 = &param0->_count;
*$tmp367 = $tmp366;
frost$collections$IdentityMap$Entry* $tmp368 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp369 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$clear(frost$collections$IdentityMap* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:204
frost$core$Int64* $tmp370 = &param0->changeCount;
frost$core$Int64 $tmp371 = *$tmp370;
frost$core$Int64 $tmp372 = (frost$core$Int64) {1};
int64_t $tmp373 = $tmp371.value;
int64_t $tmp374 = $tmp372.value;
int64_t $tmp375 = $tmp373 + $tmp374;
frost$core$Int64 $tmp376 = (frost$core$Int64) {$tmp375};
frost$core$Int64* $tmp377 = &param0->changeCount;
*$tmp377 = $tmp376;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:205
frost$core$Int64 $tmp378 = (frost$core$Int64) {0};
frost$core$Int64* $tmp379 = &param0->_count;
*$tmp379 = $tmp378;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:206
frost$core$Int64 $tmp380 = (frost$core$Int64) {0};
frost$core$Int64* $tmp381 = &param0->bucketCount;
frost$core$Int64 $tmp382 = *$tmp381;
frost$core$Bit $tmp383 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp384 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp380, $tmp382, $tmp383);
frost$core$Int64 $tmp385 = $tmp384.min;
*(&local0) = $tmp385;
frost$core$Int64 $tmp386 = $tmp384.max;
frost$core$Bit $tmp387 = $tmp384.inclusive;
bool $tmp388 = $tmp387.value;
frost$core$Int64 $tmp389 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp390 = $tmp389.value;
frost$core$UInt64 $tmp391 = (frost$core$UInt64) {((uint64_t) $tmp390)};
if ($tmp388) goto block5; else goto block6;
block5:;
int64_t $tmp392 = $tmp385.value;
int64_t $tmp393 = $tmp386.value;
bool $tmp394 = $tmp392 <= $tmp393;
frost$core$Bit $tmp395 = (frost$core$Bit) {$tmp394};
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block2; else goto block3;
block6:;
int64_t $tmp397 = $tmp385.value;
int64_t $tmp398 = $tmp386.value;
bool $tmp399 = $tmp397 < $tmp398;
frost$core$Bit $tmp400 = (frost$core$Bit) {$tmp399};
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:207
frost$collections$IdentityMap$Entry*** $tmp402 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp403 = *$tmp402;
frost$core$Int64 $tmp404 = *(&local0);
int64_t $tmp405 = $tmp404.value;
frost$collections$IdentityMap$Entry* $tmp406 = $tmp403[$tmp405];
frost$core$Bit $tmp407 = frost$core$Bit$init$builtin_bit($tmp406 != NULL);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:208
frost$collections$IdentityMap$Entry*** $tmp409 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp410 = *$tmp409;
frost$core$Int64 $tmp411 = *(&local0);
int64_t $tmp412 = $tmp411.value;
frost$collections$IdentityMap$Entry* $tmp413 = $tmp410[$tmp412];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
goto block8;
block8:;
frost$core$Int64 $tmp414 = *(&local0);
int64_t $tmp415 = $tmp386.value;
int64_t $tmp416 = $tmp414.value;
int64_t $tmp417 = $tmp415 - $tmp416;
frost$core$Int64 $tmp418 = (frost$core$Int64) {$tmp417};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp419 = $tmp418.value;
frost$core$UInt64 $tmp420 = (frost$core$UInt64) {((uint64_t) $tmp419)};
if ($tmp388) goto block11; else goto block12;
block11:;
uint64_t $tmp421 = $tmp420.value;
uint64_t $tmp422 = $tmp391.value;
bool $tmp423 = $tmp421 >= $tmp422;
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block9; else goto block3;
block12:;
uint64_t $tmp426 = $tmp420.value;
uint64_t $tmp427 = $tmp391.value;
bool $tmp428 = $tmp426 > $tmp427;
frost$core$Bit $tmp429 = (frost$core$Bit) {$tmp428};
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block9; else goto block3;
block9:;
int64_t $tmp431 = $tmp414.value;
int64_t $tmp432 = $tmp389.value;
int64_t $tmp433 = $tmp431 + $tmp432;
frost$core$Int64 $tmp434 = (frost$core$Int64) {$tmp433};
*(&local0) = $tmp434;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:211
frost$collections$IdentityMap$Entry*** $tmp435 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp436 = *$tmp435;
frostFree($tmp436);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:212
frost$core$Int64 $tmp437 = (frost$core$Int64) {16};
frost$core$Int64* $tmp438 = &param0->bucketCount;
*$tmp438 = $tmp437;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:213
frost$core$Int64* $tmp439 = &param0->bucketCount;
frost$core$Int64 $tmp440 = *$tmp439;
int64_t $tmp441 = $tmp440.value;
frost$collections$IdentityMap$Entry** $tmp442 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp441 * 8));
frost$collections$IdentityMap$Entry*** $tmp443 = &param0->contents;
*$tmp443 = $tmp442;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:214
frost$core$Int64 $tmp444 = (frost$core$Int64) {0};
frost$core$Int64* $tmp445 = &param0->bucketCount;
frost$core$Int64 $tmp446 = *$tmp445;
frost$core$Bit $tmp447 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp448 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp444, $tmp446, $tmp447);
frost$core$Int64 $tmp449 = $tmp448.min;
*(&local1) = $tmp449;
frost$core$Int64 $tmp450 = $tmp448.max;
frost$core$Bit $tmp451 = $tmp448.inclusive;
bool $tmp452 = $tmp451.value;
frost$core$Int64 $tmp453 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp454 = $tmp453.value;
frost$core$UInt64 $tmp455 = (frost$core$UInt64) {((uint64_t) $tmp454)};
if ($tmp452) goto block17; else goto block18;
block17:;
int64_t $tmp456 = $tmp449.value;
int64_t $tmp457 = $tmp450.value;
bool $tmp458 = $tmp456 <= $tmp457;
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block14; else goto block15;
block18:;
int64_t $tmp461 = $tmp449.value;
int64_t $tmp462 = $tmp450.value;
bool $tmp463 = $tmp461 < $tmp462;
frost$core$Bit $tmp464 = (frost$core$Bit) {$tmp463};
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:215
frost$collections$IdentityMap$Entry*** $tmp466 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp467 = *$tmp466;
frost$core$Int64 $tmp468 = *(&local1);
int64_t $tmp469 = $tmp468.value;
frost$collections$IdentityMap$Entry* $tmp470 = $tmp467[$tmp469];
frost$core$Bit $tmp471 = frost$core$Bit$init$builtin_bit($tmp470 != NULL);
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:216
frost$collections$IdentityMap$Entry*** $tmp473 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp474 = *$tmp473;
frost$core$Int64 $tmp475 = *(&local1);
int64_t $tmp476 = $tmp475.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp477 = $tmp474[$tmp476];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
$tmp474[$tmp476] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block20;
block20:;
frost$core$Int64 $tmp478 = *(&local1);
int64_t $tmp479 = $tmp450.value;
int64_t $tmp480 = $tmp478.value;
int64_t $tmp481 = $tmp479 - $tmp480;
frost$core$Int64 $tmp482 = (frost$core$Int64) {$tmp481};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp483 = $tmp482.value;
frost$core$UInt64 $tmp484 = (frost$core$UInt64) {((uint64_t) $tmp483)};
if ($tmp452) goto block23; else goto block24;
block23:;
uint64_t $tmp485 = $tmp484.value;
uint64_t $tmp486 = $tmp455.value;
bool $tmp487 = $tmp485 >= $tmp486;
frost$core$Bit $tmp488 = (frost$core$Bit) {$tmp487};
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block21; else goto block15;
block24:;
uint64_t $tmp490 = $tmp484.value;
uint64_t $tmp491 = $tmp455.value;
bool $tmp492 = $tmp490 > $tmp491;
frost$core$Bit $tmp493 = (frost$core$Bit) {$tmp492};
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block21; else goto block15;
block21:;
int64_t $tmp495 = $tmp478.value;
int64_t $tmp496 = $tmp453.value;
int64_t $tmp497 = $tmp495 + $tmp496;
frost$core$Int64 $tmp498 = (frost$core$Int64) {$tmp497};
*(&local1) = $tmp498;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:219
frost$core$Int64* $tmp499 = &param0->bucketCount;
frost$core$Int64 $tmp500 = *$tmp499;
frost$core$Int64 $tmp501 = (frost$core$Int64) {3};
int64_t $tmp502 = $tmp500.value;
int64_t $tmp503 = $tmp501.value;
int64_t $tmp504 = $tmp502 * $tmp503;
frost$core$Int64 $tmp505 = (frost$core$Int64) {$tmp504};
frost$core$Int64 $tmp506 = (frost$core$Int64) {4};
int64_t $tmp507 = $tmp505.value;
int64_t $tmp508 = $tmp506.value;
int64_t $tmp509 = $tmp507 / $tmp508;
frost$core$Int64 $tmp510 = (frost$core$Int64) {$tmp509};
frost$core$Int64* $tmp511 = &param0->threshold;
*$tmp511 = $tmp510;
return;

}
void frost$collections$IdentityMap$incrementCount(frost$collections$IdentityMap* param0) {

frost$collections$IdentityMap$Entry** local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$collections$IdentityMap$Entry* local4 = NULL;
frost$core$Int64 local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:224
frost$core$Int64* $tmp512 = &param0->_count;
frost$core$Int64 $tmp513 = *$tmp512;
frost$core$Int64 $tmp514 = (frost$core$Int64) {1};
int64_t $tmp515 = $tmp513.value;
int64_t $tmp516 = $tmp514.value;
int64_t $tmp517 = $tmp515 + $tmp516;
frost$core$Int64 $tmp518 = (frost$core$Int64) {$tmp517};
frost$core$Int64* $tmp519 = &param0->_count;
*$tmp519 = $tmp518;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:225
frost$core$Int64* $tmp520 = &param0->_count;
frost$core$Int64 $tmp521 = *$tmp520;
frost$core$Int64* $tmp522 = &param0->threshold;
frost$core$Int64 $tmp523 = *$tmp522;
int64_t $tmp524 = $tmp521.value;
int64_t $tmp525 = $tmp523.value;
bool $tmp526 = $tmp524 >= $tmp525;
frost$core$Bit $tmp527 = (frost$core$Bit) {$tmp526};
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:226
frost$collections$IdentityMap$Entry*** $tmp529 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp530 = *$tmp529;
*(&local0) = $tmp530;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:227
frost$core$Int64* $tmp531 = &param0->bucketCount;
frost$core$Int64 $tmp532 = *$tmp531;
*(&local1) = $tmp532;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:228
frost$core$Int64* $tmp533 = &param0->bucketCount;
frost$core$Int64 $tmp534 = *$tmp533;
frost$core$Int64 $tmp535 = (frost$core$Int64) {2};
int64_t $tmp536 = $tmp534.value;
int64_t $tmp537 = $tmp535.value;
int64_t $tmp538 = $tmp536 * $tmp537;
frost$core$Int64 $tmp539 = (frost$core$Int64) {$tmp538};
frost$core$Int64* $tmp540 = &param0->bucketCount;
*$tmp540 = $tmp539;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:229
frost$core$Int64* $tmp541 = &param0->bucketCount;
frost$core$Int64 $tmp542 = *$tmp541;
int64_t $tmp543 = $tmp542.value;
frost$collections$IdentityMap$Entry** $tmp544 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp543 * 8));
frost$collections$IdentityMap$Entry*** $tmp545 = &param0->contents;
*$tmp545 = $tmp544;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:230
frost$core$Int64 $tmp546 = (frost$core$Int64) {0};
frost$core$Int64* $tmp547 = &param0->bucketCount;
frost$core$Int64 $tmp548 = *$tmp547;
frost$core$Bit $tmp549 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp550 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp546, $tmp548, $tmp549);
frost$core$Int64 $tmp551 = $tmp550.min;
*(&local2) = $tmp551;
frost$core$Int64 $tmp552 = $tmp550.max;
frost$core$Bit $tmp553 = $tmp550.inclusive;
bool $tmp554 = $tmp553.value;
frost$core$Int64 $tmp555 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp556 = $tmp555.value;
frost$core$UInt64 $tmp557 = (frost$core$UInt64) {((uint64_t) $tmp556)};
if ($tmp554) goto block7; else goto block8;
block7:;
int64_t $tmp558 = $tmp551.value;
int64_t $tmp559 = $tmp552.value;
bool $tmp560 = $tmp558 <= $tmp559;
frost$core$Bit $tmp561 = (frost$core$Bit) {$tmp560};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block4; else goto block5;
block8:;
int64_t $tmp563 = $tmp551.value;
int64_t $tmp564 = $tmp552.value;
bool $tmp565 = $tmp563 < $tmp564;
frost$core$Bit $tmp566 = (frost$core$Bit) {$tmp565};
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:231
frost$collections$IdentityMap$Entry*** $tmp568 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp569 = *$tmp568;
frost$core$Int64 $tmp570 = *(&local2);
int64_t $tmp571 = $tmp570.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp572 = $tmp569[$tmp571];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
$tmp569[$tmp571] = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int64 $tmp573 = *(&local2);
int64_t $tmp574 = $tmp552.value;
int64_t $tmp575 = $tmp573.value;
int64_t $tmp576 = $tmp574 - $tmp575;
frost$core$Int64 $tmp577 = (frost$core$Int64) {$tmp576};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp578 = $tmp577.value;
frost$core$UInt64 $tmp579 = (frost$core$UInt64) {((uint64_t) $tmp578)};
if ($tmp554) goto block11; else goto block12;
block11:;
uint64_t $tmp580 = $tmp579.value;
uint64_t $tmp581 = $tmp557.value;
bool $tmp582 = $tmp580 >= $tmp581;
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block9; else goto block5;
block12:;
uint64_t $tmp585 = $tmp579.value;
uint64_t $tmp586 = $tmp557.value;
bool $tmp587 = $tmp585 > $tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block9; else goto block5;
block9:;
int64_t $tmp590 = $tmp573.value;
int64_t $tmp591 = $tmp555.value;
int64_t $tmp592 = $tmp590 + $tmp591;
frost$core$Int64 $tmp593 = (frost$core$Int64) {$tmp592};
*(&local2) = $tmp593;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:233
frost$core$Int64* $tmp594 = &param0->threshold;
frost$core$Int64 $tmp595 = *$tmp594;
frost$core$Int64 $tmp596 = (frost$core$Int64) {2};
int64_t $tmp597 = $tmp595.value;
int64_t $tmp598 = $tmp596.value;
int64_t $tmp599 = $tmp597 * $tmp598;
frost$core$Int64 $tmp600 = (frost$core$Int64) {$tmp599};
frost$core$Int64* $tmp601 = &param0->threshold;
*$tmp601 = $tmp600;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:234
frost$core$Int64 $tmp602 = (frost$core$Int64) {0};
frost$core$Int64* $tmp603 = &param0->_count;
*$tmp603 = $tmp602;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:235
frost$core$Int64 $tmp604 = (frost$core$Int64) {0};
frost$core$Int64 $tmp605 = *(&local1);
frost$core$Bit $tmp606 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp607 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp604, $tmp605, $tmp606);
frost$core$Int64 $tmp608 = $tmp607.min;
*(&local3) = $tmp608;
frost$core$Int64 $tmp609 = $tmp607.max;
frost$core$Bit $tmp610 = $tmp607.inclusive;
bool $tmp611 = $tmp610.value;
frost$core$Int64 $tmp612 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp613 = $tmp612.value;
frost$core$UInt64 $tmp614 = (frost$core$UInt64) {((uint64_t) $tmp613)};
if ($tmp611) goto block17; else goto block18;
block17:;
int64_t $tmp615 = $tmp608.value;
int64_t $tmp616 = $tmp609.value;
bool $tmp617 = $tmp615 <= $tmp616;
frost$core$Bit $tmp618 = (frost$core$Bit) {$tmp617};
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block14; else goto block15;
block18:;
int64_t $tmp620 = $tmp608.value;
int64_t $tmp621 = $tmp609.value;
bool $tmp622 = $tmp620 < $tmp621;
frost$core$Bit $tmp623 = (frost$core$Bit) {$tmp622};
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:236
frost$collections$IdentityMap$Entry** $tmp625 = *(&local0);
frost$core$Int64 $tmp626 = *(&local3);
int64_t $tmp627 = $tmp626.value;
frost$collections$IdentityMap$Entry* $tmp628 = $tmp625[$tmp627];
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
frost$collections$IdentityMap$Entry* $tmp629 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local4) = $tmp628;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:237
goto block19;
block19:;
frost$collections$IdentityMap$Entry* $tmp630 = *(&local4);
frost$core$Bit $tmp631 = frost$core$Bit$init$builtin_bit($tmp630 != NULL);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:238
frost$collections$IdentityMap$Entry* $tmp633 = *(&local4);
frost$core$Object** $tmp634 = &$tmp633->key;
frost$core$Object* $tmp635 = *$tmp634;
frost$collections$IdentityMap$Entry* $tmp636 = *(&local4);
frost$core$Object** $tmp637 = &$tmp636->value;
frost$core$Object* $tmp638 = *$tmp637;
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(param0, $tmp635, $tmp638);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:239
frost$collections$IdentityMap$Entry* $tmp639 = *(&local4);
frost$collections$IdentityMap$Entry** $tmp640 = &$tmp639->next;
frost$collections$IdentityMap$Entry* $tmp641 = *$tmp640;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
frost$collections$IdentityMap$Entry* $tmp642 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local4) = $tmp641;
goto block19;
block21:;
frost$collections$IdentityMap$Entry* $tmp643 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int64 $tmp644 = *(&local3);
int64_t $tmp645 = $tmp609.value;
int64_t $tmp646 = $tmp644.value;
int64_t $tmp647 = $tmp645 - $tmp646;
frost$core$Int64 $tmp648 = (frost$core$Int64) {$tmp647};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp649 = $tmp648.value;
frost$core$UInt64 $tmp650 = (frost$core$UInt64) {((uint64_t) $tmp649)};
if ($tmp611) goto block24; else goto block25;
block24:;
uint64_t $tmp651 = $tmp650.value;
uint64_t $tmp652 = $tmp614.value;
bool $tmp653 = $tmp651 >= $tmp652;
frost$core$Bit $tmp654 = (frost$core$Bit) {$tmp653};
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block22; else goto block15;
block25:;
uint64_t $tmp656 = $tmp650.value;
uint64_t $tmp657 = $tmp614.value;
bool $tmp658 = $tmp656 > $tmp657;
frost$core$Bit $tmp659 = (frost$core$Bit) {$tmp658};
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block22; else goto block15;
block22:;
int64_t $tmp661 = $tmp644.value;
int64_t $tmp662 = $tmp612.value;
int64_t $tmp663 = $tmp661 + $tmp662;
frost$core$Int64 $tmp664 = (frost$core$Int64) {$tmp663};
*(&local3) = $tmp664;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:242
frost$core$Int64 $tmp665 = (frost$core$Int64) {0};
frost$core$Int64 $tmp666 = *(&local1);
frost$core$Bit $tmp667 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp668 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp665, $tmp666, $tmp667);
frost$core$Int64 $tmp669 = $tmp668.min;
*(&local5) = $tmp669;
frost$core$Int64 $tmp670 = $tmp668.max;
frost$core$Bit $tmp671 = $tmp668.inclusive;
bool $tmp672 = $tmp671.value;
frost$core$Int64 $tmp673 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp674 = $tmp673.value;
frost$core$UInt64 $tmp675 = (frost$core$UInt64) {((uint64_t) $tmp674)};
if ($tmp672) goto block30; else goto block31;
block30:;
int64_t $tmp676 = $tmp669.value;
int64_t $tmp677 = $tmp670.value;
bool $tmp678 = $tmp676 <= $tmp677;
frost$core$Bit $tmp679 = (frost$core$Bit) {$tmp678};
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block27; else goto block28;
block31:;
int64_t $tmp681 = $tmp669.value;
int64_t $tmp682 = $tmp670.value;
bool $tmp683 = $tmp681 < $tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:243
frost$collections$IdentityMap$Entry** $tmp686 = *(&local0);
frost$core$Int64 $tmp687 = *(&local5);
int64_t $tmp688 = $tmp687.value;
frost$collections$IdentityMap$Entry* $tmp689 = $tmp686[$tmp688];
frost$core$Bit $tmp690 = frost$core$Bit$init$builtin_bit($tmp689 != NULL);
bool $tmp691 = $tmp690.value;
if ($tmp691) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:244
frost$collections$IdentityMap$Entry** $tmp692 = *(&local0);
frost$core$Int64 $tmp693 = *(&local5);
int64_t $tmp694 = $tmp693.value;
frost$collections$IdentityMap$Entry* $tmp695 = $tmp692[$tmp694];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
goto block33;
block33:;
frost$core$Int64 $tmp696 = *(&local5);
int64_t $tmp697 = $tmp670.value;
int64_t $tmp698 = $tmp696.value;
int64_t $tmp699 = $tmp697 - $tmp698;
frost$core$Int64 $tmp700 = (frost$core$Int64) {$tmp699};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp701 = $tmp700.value;
frost$core$UInt64 $tmp702 = (frost$core$UInt64) {((uint64_t) $tmp701)};
if ($tmp672) goto block36; else goto block37;
block36:;
uint64_t $tmp703 = $tmp702.value;
uint64_t $tmp704 = $tmp675.value;
bool $tmp705 = $tmp703 >= $tmp704;
frost$core$Bit $tmp706 = (frost$core$Bit) {$tmp705};
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block34; else goto block28;
block37:;
uint64_t $tmp708 = $tmp702.value;
uint64_t $tmp709 = $tmp675.value;
bool $tmp710 = $tmp708 > $tmp709;
frost$core$Bit $tmp711 = (frost$core$Bit) {$tmp710};
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block34; else goto block28;
block34:;
int64_t $tmp713 = $tmp696.value;
int64_t $tmp714 = $tmp673.value;
int64_t $tmp715 = $tmp713 + $tmp714;
frost$core$Int64 $tmp716 = (frost$core$Int64) {$tmp715};
*(&local5) = $tmp716;
goto block27;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:247
frost$collections$IdentityMap$Entry** $tmp717 = *(&local0);
frostFree($tmp717);
goto block2;
block2:;
return;

}
frost$core$Int64 frost$collections$IdentityMap$get_count$R$frost$core$Int64(frost$collections$IdentityMap* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:253
frost$core$Int64* $tmp718 = &param0->_count;
frost$core$Int64 $tmp719 = *$tmp718;
return $tmp719;

}
frost$collections$Iterator* frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT(frost$collections$IdentityMap* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:258
FROST_ASSERT(40 == sizeof(frost$collections$IdentityMap$EntryIterator));
frost$collections$IdentityMap$EntryIterator* $tmp720 = (frost$collections$IdentityMap$EntryIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$IdentityMap$EntryIterator$class);
frost$collections$IdentityMap$EntryIterator$init$frost$collections$IdentityMap$LTfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$GT($tmp720, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp720)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
return ((frost$collections$Iterator*) $tmp720);

}
frost$core$String* frost$collections$IdentityMap$get_asString$R$frost$core$String(frost$collections$IdentityMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$collections$IdentityMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:269
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp721 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp721);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$MutableString* $tmp722 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local0) = $tmp721;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:270
frost$core$MutableString* $tmp723 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp723, &$s724);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:271
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s725));
frost$core$String* $tmp726 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local1) = &$s727;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:272
frost$core$Int64 $tmp728 = (frost$core$Int64) {0};
frost$core$Int64* $tmp729 = &param0->bucketCount;
frost$core$Int64 $tmp730 = *$tmp729;
frost$core$Bit $tmp731 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp732 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp728, $tmp730, $tmp731);
frost$core$Int64 $tmp733 = $tmp732.min;
*(&local2) = $tmp733;
frost$core$Int64 $tmp734 = $tmp732.max;
frost$core$Bit $tmp735 = $tmp732.inclusive;
bool $tmp736 = $tmp735.value;
frost$core$Int64 $tmp737 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp738 = $tmp737.value;
frost$core$UInt64 $tmp739 = (frost$core$UInt64) {((uint64_t) $tmp738)};
if ($tmp736) goto block5; else goto block6;
block5:;
int64_t $tmp740 = $tmp733.value;
int64_t $tmp741 = $tmp734.value;
bool $tmp742 = $tmp740 <= $tmp741;
frost$core$Bit $tmp743 = (frost$core$Bit) {$tmp742};
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block2; else goto block3;
block6:;
int64_t $tmp745 = $tmp733.value;
int64_t $tmp746 = $tmp734.value;
bool $tmp747 = $tmp745 < $tmp746;
frost$core$Bit $tmp748 = (frost$core$Bit) {$tmp747};
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:273
frost$collections$IdentityMap$Entry*** $tmp750 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp751 = *$tmp750;
frost$core$Int64 $tmp752 = *(&local2);
int64_t $tmp753 = $tmp752.value;
frost$collections$IdentityMap$Entry* $tmp754 = $tmp751[$tmp753];
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$collections$IdentityMap$Entry* $tmp755 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local3) = $tmp754;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:274
goto block7;
block7:;
frost$collections$IdentityMap$Entry* $tmp756 = *(&local3);
frost$core$Bit $tmp757 = frost$core$Bit$init$builtin_bit($tmp756 != NULL);
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:275
frost$core$MutableString* $tmp759 = *(&local0);
frost$core$String* $tmp760 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp759, $tmp760);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:276
frost$collections$IdentityMap$Entry* $tmp761 = *(&local3);
frost$core$Object** $tmp762 = &$tmp761->key;
frost$core$Object* $tmp763 = *$tmp762;
frost$core$Bit $tmp764 = frost$core$Bit$init$builtin_bit(true);
bool $tmp765 = $tmp764.value;
if ($tmp765) goto block10; else goto block12;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:277
frost$core$MutableString* $tmp766 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp767 = *(&local3);
frost$core$Object** $tmp768 = &$tmp767->key;
frost$core$Object* $tmp769 = *$tmp768;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IdentityMap.frost:277:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
$fn771 $tmp770 = ($fn771) $tmp769->$class->vtable[0];
frost$core$String* $tmp772 = $tmp770($tmp769);
frost$core$MutableString$append$frost$core$String($tmp766, $tmp772);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
goto block11;
block12:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:280
frost$core$MutableString* $tmp773 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp773, &$s774);
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:282
frost$core$MutableString* $tmp775 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp775, &$s776);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:283
frost$collections$IdentityMap$Entry* $tmp777 = *(&local3);
frost$core$Object** $tmp778 = &$tmp777->value;
frost$core$Object* $tmp779 = *$tmp778;
frost$core$Bit $tmp780 = frost$core$Bit$init$builtin_bit(true);
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:284
frost$core$MutableString* $tmp782 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp783 = *(&local3);
frost$core$Object** $tmp784 = &$tmp783->value;
frost$core$Object* $tmp785 = *$tmp784;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IdentityMap.frost:284:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
$fn787 $tmp786 = ($fn787) $tmp785->$class->vtable[0];
frost$core$String* $tmp788 = $tmp786($tmp785);
frost$core$MutableString$append$frost$core$String($tmp782, $tmp788);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
goto block15;
block16:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:287
frost$core$MutableString* $tmp789 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp789, &$s790);
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:289
frost$collections$IdentityMap$Entry* $tmp791 = *(&local3);
frost$collections$IdentityMap$Entry** $tmp792 = &$tmp791->next;
frost$collections$IdentityMap$Entry* $tmp793 = *$tmp792;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$collections$IdentityMap$Entry* $tmp794 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local3) = $tmp793;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s795));
frost$core$String* $tmp796 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local1) = &$s797;
goto block7;
block9:;
frost$collections$IdentityMap$Entry* $tmp798 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int64 $tmp799 = *(&local2);
int64_t $tmp800 = $tmp734.value;
int64_t $tmp801 = $tmp799.value;
int64_t $tmp802 = $tmp800 - $tmp801;
frost$core$Int64 $tmp803 = (frost$core$Int64) {$tmp802};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp804 = $tmp803.value;
frost$core$UInt64 $tmp805 = (frost$core$UInt64) {((uint64_t) $tmp804)};
if ($tmp736) goto block20; else goto block21;
block20:;
uint64_t $tmp806 = $tmp805.value;
uint64_t $tmp807 = $tmp739.value;
bool $tmp808 = $tmp806 >= $tmp807;
frost$core$Bit $tmp809 = (frost$core$Bit) {$tmp808};
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block18; else goto block3;
block21:;
uint64_t $tmp811 = $tmp805.value;
uint64_t $tmp812 = $tmp739.value;
bool $tmp813 = $tmp811 > $tmp812;
frost$core$Bit $tmp814 = (frost$core$Bit) {$tmp813};
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block18; else goto block3;
block18:;
int64_t $tmp816 = $tmp799.value;
int64_t $tmp817 = $tmp737.value;
int64_t $tmp818 = $tmp816 + $tmp817;
frost$core$Int64 $tmp819 = (frost$core$Int64) {$tmp818};
*(&local2) = $tmp819;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:293
frost$core$MutableString* $tmp820 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp820, &$s821);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:294
frost$core$MutableString* $tmp822 = *(&local0);
frost$core$String* $tmp823 = frost$core$MutableString$finish$R$frost$core$String($tmp822);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$String* $tmp824 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp825 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp823;

}

