#include "frost/collections/IdentityMap.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/MapWriter.h"
#include "frost/collections/Map.h"
#include "frost/collections/MapView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "frost/core/Int64.h"
#include "frost/collections/IdentityMap/Entry.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Frost.h"
#include "frost/io/Console.h"
#include "frost/collections/IdentityMap/EntryIterator.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1, frost$core$Object* p2) {
    frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(p0, p1, p2);

}
__attribute__((weak)) void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim(frost$collections$IdentityMap* p0, frost$core$Object* p1) {
    frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(p0, p1);

}
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

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$IdentityMap$_frost$collections$MapWriter = { (frost$core$Class*) &frost$collections$MapWriter$class, NULL, { frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim, frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim, frost$collections$IdentityMap$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$IdentityMap$_frost$collections$Map = { (frost$core$Class*) &frost$collections$Map$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$MapWriter, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$collections$IdentityMap$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$Map, { frost$collections$IdentityMap$get_count$R$frost$core$Int, frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim, frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim, frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT$shim, frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT, frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT} };

static frost$core$String $s1;
frost$collections$IdentityMap$class_type frost$collections$IdentityMap$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$MapView, { frost$collections$IdentityMap$get_asString$R$frost$core$String, frost$collections$IdentityMap$cleanup, frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int, frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim, frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim, frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim, frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim, frost$collections$IdentityMap$clear, frost$collections$IdentityMap$incrementCount, frost$collections$IdentityMap$get_count$R$frost$core$Int, frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT$shim} };

typedef frost$core$String* (*$fn279)(frost$core$Object*);
typedef frost$core$String* (*$fn771)(frost$core$Object*);
typedef frost$core$String* (*$fn787)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, 3511143072281775056, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x6d\x6f\x76\x69\x6e\x67\x3a\x20", 10, -7164862457552896596, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s728 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s774 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s776 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s790 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s795 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };

void frost$collections$IdentityMap$init(frost$collections$IdentityMap* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:89
frost$core$Int $tmp2 = (frost$core$Int) {0u};
frost$core$Int* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:95
frost$core$Int* $tmp4 = &param0->changeCount;
frost$core$Int $tmp5 = *$tmp4;
frost$core$Int $tmp6 = (frost$core$Int) {1u};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
frost$core$Int $tmp10 = (frost$core$Int) {$tmp9};
frost$core$Int* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:96
frost$core$Int $tmp12 = (frost$core$Int) {0u};
frost$core$Int* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:97
frost$core$Int $tmp14 = (frost$core$Int) {16u};
frost$core$Int* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:98
frost$core$Int* $tmp16 = &param0->bucketCount;
frost$core$Int $tmp17 = *$tmp16;
frost$core$Int64 $tmp18 = frost$core$Int64$init$frost$core$Int($tmp17);
int64_t $tmp19 = $tmp18.value;
frost$collections$IdentityMap$Entry** $tmp20 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp19 * 8));
frost$collections$IdentityMap$Entry*** $tmp21 = &param0->contents;
*$tmp21 = $tmp20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:99
frost$core$Int $tmp22 = (frost$core$Int) {0u};
frost$core$Int* $tmp23 = &param0->bucketCount;
frost$core$Int $tmp24 = *$tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp26 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp22, $tmp24, $tmp25);
frost$core$Int $tmp27 = $tmp26.min;
*(&local0) = $tmp27;
frost$core$Int $tmp28 = $tmp26.max;
frost$core$Bit $tmp29 = $tmp26.inclusive;
bool $tmp30 = $tmp29.value;
frost$core$Int $tmp31 = (frost$core$Int) {1u};
if ($tmp30) goto block4; else goto block5;
block4:;
int64_t $tmp32 = $tmp27.value;
int64_t $tmp33 = $tmp28.value;
bool $tmp34 = $tmp32 <= $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block2;
block5:;
int64_t $tmp37 = $tmp27.value;
int64_t $tmp38 = $tmp28.value;
bool $tmp39 = $tmp37 < $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:100
frost$collections$IdentityMap$Entry*** $tmp42 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp43 = *$tmp42;
frost$core$Int $tmp44 = *(&local0);
frost$core$Int64 $tmp45 = frost$core$Int64$init$frost$core$Int($tmp44);
int64_t $tmp46 = $tmp45.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp47 = $tmp43[$tmp46];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
$tmp43[$tmp46] = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int $tmp48 = *(&local0);
int64_t $tmp49 = $tmp28.value;
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49 - $tmp50;
frost$core$Int $tmp52 = (frost$core$Int) {$tmp51};
if ($tmp30) goto block7; else goto block8;
block7:;
int64_t $tmp53 = $tmp52.value;
int64_t $tmp54 = $tmp31.value;
bool $tmp55 = $tmp53 >= $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block6; else goto block2;
block8:;
int64_t $tmp58 = $tmp52.value;
int64_t $tmp59 = $tmp31.value;
bool $tmp60 = $tmp58 > $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block6; else goto block2;
block6:;
int64_t $tmp63 = $tmp48.value;
int64_t $tmp64 = $tmp31.value;
int64_t $tmp65 = $tmp63 + $tmp64;
frost$core$Int $tmp66 = (frost$core$Int) {$tmp65};
*(&local0) = $tmp66;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:102
frost$core$Int* $tmp67 = &param0->bucketCount;
frost$core$Int $tmp68 = *$tmp67;
frost$core$Int $tmp69 = (frost$core$Int) {3u};
int64_t $tmp70 = $tmp68.value;
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70 * $tmp71;
frost$core$Int $tmp73 = (frost$core$Int) {$tmp72};
frost$core$Int $tmp74 = (frost$core$Int) {4u};
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75 / $tmp76;
frost$core$Int $tmp78 = (frost$core$Int) {$tmp77};
frost$core$Int* $tmp79 = &param0->threshold;
*$tmp79 = $tmp78;
return;

}
void frost$collections$IdentityMap$cleanup(frost$collections$IdentityMap* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:107
frost$core$Int $tmp80 = (frost$core$Int) {0u};
frost$core$Int* $tmp81 = &param0->bucketCount;
frost$core$Int $tmp82 = *$tmp81;
frost$core$Bit $tmp83 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp84 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp80, $tmp82, $tmp83);
frost$core$Int $tmp85 = $tmp84.min;
*(&local0) = $tmp85;
frost$core$Int $tmp86 = $tmp84.max;
frost$core$Bit $tmp87 = $tmp84.inclusive;
bool $tmp88 = $tmp87.value;
frost$core$Int $tmp89 = (frost$core$Int) {1u};
if ($tmp88) goto block4; else goto block5;
block4:;
int64_t $tmp90 = $tmp85.value;
int64_t $tmp91 = $tmp86.value;
bool $tmp92 = $tmp90 <= $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block1; else goto block2;
block5:;
int64_t $tmp95 = $tmp85.value;
int64_t $tmp96 = $tmp86.value;
bool $tmp97 = $tmp95 < $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:108
frost$collections$IdentityMap$Entry*** $tmp100 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp101 = *$tmp100;
frost$core$Int $tmp102 = *(&local0);
frost$core$Int64 $tmp103 = frost$core$Int64$init$frost$core$Int($tmp102);
int64_t $tmp104 = $tmp103.value;
frost$collections$IdentityMap$Entry* $tmp105 = $tmp101[$tmp104];
frost$core$Bit $tmp106 = (frost$core$Bit) {$tmp105 != NULL};
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:109
frost$collections$IdentityMap$Entry*** $tmp108 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp109 = *$tmp108;
frost$core$Int $tmp110 = *(&local0);
frost$core$Int64 $tmp111 = frost$core$Int64$init$frost$core$Int($tmp110);
int64_t $tmp112 = $tmp111.value;
frost$collections$IdentityMap$Entry* $tmp113 = $tmp109[$tmp112];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
goto block7;
block7:;
frost$core$Int $tmp114 = *(&local0);
int64_t $tmp115 = $tmp86.value;
int64_t $tmp116 = $tmp114.value;
int64_t $tmp117 = $tmp115 - $tmp116;
frost$core$Int $tmp118 = (frost$core$Int) {$tmp117};
if ($tmp88) goto block9; else goto block10;
block9:;
int64_t $tmp119 = $tmp118.value;
int64_t $tmp120 = $tmp89.value;
bool $tmp121 = $tmp119 >= $tmp120;
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121};
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block8; else goto block2;
block10:;
int64_t $tmp124 = $tmp118.value;
int64_t $tmp125 = $tmp89.value;
bool $tmp126 = $tmp124 > $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block8; else goto block2;
block8:;
int64_t $tmp129 = $tmp114.value;
int64_t $tmp130 = $tmp89.value;
int64_t $tmp131 = $tmp129 + $tmp130;
frost$core$Int $tmp132 = (frost$core$Int) {$tmp131};
*(&local0) = $tmp132;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:112
frost$collections$IdentityMap$Entry*** $tmp133 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp134 = *$tmp133;
frostFree($tmp134);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:106
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Int frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int $tmp135;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&$tmp135, param1);
frost$core$Int* $tmp136 = &param0->bucketCount;
frost$core$Int $tmp137 = *$tmp136;
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
int64_t $tmp138 = $tmp135.value;
int64_t $tmp139 = $tmp137.value;
int64_t $tmp140 = $tmp138 % $tmp139;
frost$core$Int $tmp141 = (frost$core$Int) {$tmp140};
return $tmp141;

}
frost$core$Object* frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:125
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int from IdentityMap.frost:125:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int $tmp142;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&$tmp142, param1);
frost$core$Int* $tmp143 = &param0->bucketCount;
frost$core$Int $tmp144 = *$tmp143;
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
int64_t $tmp145 = $tmp142.value;
int64_t $tmp146 = $tmp144.value;
int64_t $tmp147 = $tmp145 % $tmp146;
frost$core$Int $tmp148 = (frost$core$Int) {$tmp147};
*(&local0) = $tmp148;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:126
frost$collections$IdentityMap$Entry*** $tmp149 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp150 = *$tmp149;
frost$core$Int $tmp151 = *(&local0);
frost$core$Int64 $tmp152 = frost$core$Int64$init$frost$core$Int($tmp151);
int64_t $tmp153 = $tmp152.value;
frost$collections$IdentityMap$Entry* $tmp154 = $tmp150[$tmp153];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$collections$IdentityMap$Entry* $tmp155 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local1) = $tmp154;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:127
goto block3;
block3:;
frost$collections$IdentityMap$Entry* $tmp156 = *(&local1);
frost$core$Bit $tmp157 = (frost$core$Bit) {$tmp156 != NULL};
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block6; else goto block5;
block6:;
frost$collections$IdentityMap$Entry* $tmp159 = *(&local1);
frost$core$Object** $tmp160 = &$tmp159->key;
frost$core$Object* $tmp161 = *$tmp160;
bool $tmp162 = $tmp161 != param1;
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162};
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:128
frost$collections$IdentityMap$Entry* $tmp165 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp166 = &$tmp165->next;
frost$collections$IdentityMap$Entry* $tmp167 = *$tmp166;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$collections$IdentityMap$Entry* $tmp168 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local1) = $tmp167;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:130
frost$collections$IdentityMap$Entry* $tmp169 = *(&local1);
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169 != NULL};
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:131
frost$collections$IdentityMap$Entry* $tmp172 = *(&local1);
frost$core$Object** $tmp173 = &$tmp172->value;
frost$core$Object* $tmp174 = *$tmp173;
frost$core$Frost$ref$frost$core$Object$Q($tmp174);
frost$collections$IdentityMap$Entry* $tmp175 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp174;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$IdentityMap$Entry* $tmp176 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block8:;
goto block10;
block10:;

}
frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:140
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int from IdentityMap.frost:140:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int $tmp177;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&$tmp177, param1);
frost$core$Int* $tmp178 = &param0->bucketCount;
frost$core$Int $tmp179 = *$tmp178;
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
int64_t $tmp180 = $tmp177.value;
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180 % $tmp181;
frost$core$Int $tmp183 = (frost$core$Int) {$tmp182};
*(&local0) = $tmp183;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:141
frost$collections$IdentityMap$Entry*** $tmp184 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp185 = *$tmp184;
frost$core$Int $tmp186 = *(&local0);
frost$core$Int64 $tmp187 = frost$core$Int64$init$frost$core$Int($tmp186);
int64_t $tmp188 = $tmp187.value;
frost$collections$IdentityMap$Entry* $tmp189 = $tmp185[$tmp188];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$collections$IdentityMap$Entry* $tmp190 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local1) = $tmp189;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:142
goto block3;
block3:;
frost$collections$IdentityMap$Entry* $tmp191 = *(&local1);
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191 != NULL};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block6; else goto block5;
block6:;
frost$collections$IdentityMap$Entry* $tmp194 = *(&local1);
frost$core$Object** $tmp195 = &$tmp194->key;
frost$core$Object* $tmp196 = *$tmp195;
bool $tmp197 = $tmp196 != param1;
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:143
frost$collections$IdentityMap$Entry* $tmp200 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp201 = &$tmp200->next;
frost$collections$IdentityMap$Entry* $tmp202 = *$tmp201;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$collections$IdentityMap$Entry* $tmp203 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local1) = $tmp202;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:145
frost$collections$IdentityMap$Entry* $tmp204 = *(&local1);
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204 != NULL};
frost$collections$IdentityMap$Entry* $tmp206 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp205;

}
void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(frost$collections$IdentityMap* param0, frost$core$Object* param1, frost$core$Object* param2) {

frost$core$Int local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$collections$IdentityMap$Entry* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:150
frost$core$Int* $tmp207 = &param0->changeCount;
frost$core$Int $tmp208 = *$tmp207;
frost$core$Int $tmp209 = (frost$core$Int) {1u};
int64_t $tmp210 = $tmp208.value;
int64_t $tmp211 = $tmp209.value;
int64_t $tmp212 = $tmp210 + $tmp211;
frost$core$Int $tmp213 = (frost$core$Int) {$tmp212};
frost$core$Int* $tmp214 = &param0->changeCount;
*$tmp214 = $tmp213;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:151
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int from IdentityMap.frost:151:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int $tmp215;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&$tmp215, param1);
frost$core$Int* $tmp216 = &param0->bucketCount;
frost$core$Int $tmp217 = *$tmp216;
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
int64_t $tmp218 = $tmp215.value;
int64_t $tmp219 = $tmp217.value;
int64_t $tmp220 = $tmp218 % $tmp219;
frost$core$Int $tmp221 = (frost$core$Int) {$tmp220};
*(&local0) = $tmp221;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:152
frost$collections$IdentityMap$Entry*** $tmp222 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp223 = *$tmp222;
frost$core$Int $tmp224 = *(&local0);
frost$core$Int64 $tmp225 = frost$core$Int64$init$frost$core$Int($tmp224);
int64_t $tmp226 = $tmp225.value;
frost$collections$IdentityMap$Entry* $tmp227 = $tmp223[$tmp226];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$collections$IdentityMap$Entry* $tmp228 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local1) = $tmp227;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:153
goto block3;
block3:;
frost$collections$IdentityMap$Entry* $tmp229 = *(&local1);
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229 != NULL};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block6; else goto block5;
block6:;
frost$collections$IdentityMap$Entry* $tmp232 = *(&local1);
frost$core$Object** $tmp233 = &$tmp232->key;
frost$core$Object* $tmp234 = *$tmp233;
bool $tmp235 = $tmp234 != param1;
frost$core$Bit $tmp236 = (frost$core$Bit) {$tmp235};
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:154
frost$collections$IdentityMap$Entry* $tmp238 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp239 = &$tmp238->next;
frost$collections$IdentityMap$Entry* $tmp240 = *$tmp239;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$collections$IdentityMap$Entry* $tmp241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local1) = $tmp240;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:156
frost$collections$IdentityMap$Entry* $tmp242 = *(&local1);
frost$core$Bit $tmp243 = (frost$core$Bit) {$tmp242 == NULL};
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:157
frost$collections$IdentityMap$Entry*** $tmp245 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp246 = *$tmp245;
frost$core$Int $tmp247 = *(&local0);
frost$core$Int64 $tmp248 = frost$core$Int64$init$frost$core$Int($tmp247);
int64_t $tmp249 = $tmp248.value;
frost$collections$IdentityMap$Entry* $tmp250 = $tmp246[$tmp249];
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
frost$core$Int $tmp267 = *(&local0);
frost$core$Int64 $tmp268 = frost$core$Int64$init$frost$core$Int($tmp267);
frost$collections$IdentityMap$Entry* $tmp269 = *(&local1);
int64_t $tmp270 = $tmp268.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$collections$IdentityMap$Entry* $tmp271 = $tmp266[$tmp270];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
$tmp266[$tmp270] = $tmp269;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:161
frost$collections$IdentityMap$incrementCount(param0);
frost$collections$IdentityMap$Entry* $tmp272 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:164
frost$collections$IdentityMap$Entry* $tmp273 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp274 = &$tmp273->value;
frost$core$Object* $tmp275 = *$tmp274;
frost$core$Frost$unref$frost$core$Object$Q($tmp275);
frost$core$Object** $tmp276 = &$tmp273->value;
*$tmp276 = param2;
goto block8;
block8:;
frost$collections$IdentityMap$Entry* $tmp277 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$collections$IdentityMap$Entry* local2 = NULL;
frost$collections$IdentityMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:170
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IdentityMap.frost:170:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn279 $tmp278 = ($fn279) param1->$class->vtable[0];
frost$core$String* $tmp280 = $tmp278(param1);
frost$core$String* $tmp281 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s282, $tmp280);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$String* $tmp283 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp281, &$s284);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from IdentityMap.frost:170:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp283);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s285);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:171
frost$core$Int* $tmp286 = &param0->changeCount;
frost$core$Int $tmp287 = *$tmp286;
frost$core$Int $tmp288 = (frost$core$Int) {1u};
int64_t $tmp289 = $tmp287.value;
int64_t $tmp290 = $tmp288.value;
int64_t $tmp291 = $tmp289 + $tmp290;
frost$core$Int $tmp292 = (frost$core$Int) {$tmp291};
frost$core$Int* $tmp293 = &param0->changeCount;
*$tmp293 = $tmp292;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:172
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int from IdentityMap.frost:172:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:120
frost$core$Int $tmp294;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&$tmp294, param1);
frost$core$Int* $tmp295 = &param0->bucketCount;
frost$core$Int $tmp296 = *$tmp295;
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from IdentityMap.frost:120:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
int64_t $tmp297 = $tmp294.value;
int64_t $tmp298 = $tmp296.value;
int64_t $tmp299 = $tmp297 % $tmp298;
frost$core$Int $tmp300 = (frost$core$Int) {$tmp299};
*(&local0) = $tmp300;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:173
frost$collections$IdentityMap$Entry*** $tmp301 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp302 = *$tmp301;
frost$core$Int $tmp303 = *(&local0);
frost$core$Int64 $tmp304 = frost$core$Int64$init$frost$core$Int($tmp303);
int64_t $tmp305 = $tmp304.value;
frost$collections$IdentityMap$Entry* $tmp306 = $tmp302[$tmp305];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$collections$IdentityMap$Entry* $tmp307 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local1) = $tmp306;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:175
frost$collections$IdentityMap$Entry* $tmp308 = *(&local1);
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308 == NULL};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:176
frost$collections$IdentityMap$Entry* $tmp311 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:179
frost$collections$IdentityMap$Entry* $tmp312 = *(&local1);
frost$core$Object** $tmp313 = &$tmp312->key;
frost$core$Object* $tmp314 = *$tmp313;
bool $tmp315 = $tmp314 == param1;
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:180
frost$collections$IdentityMap$Entry*** $tmp318 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp319 = *$tmp318;
frost$core$Int $tmp320 = *(&local0);
frost$core$Int64 $tmp321 = frost$core$Int64$init$frost$core$Int($tmp320);
frost$collections$IdentityMap$Entry* $tmp322 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp323 = &$tmp322->next;
frost$collections$IdentityMap$Entry* $tmp324 = *$tmp323;
int64_t $tmp325 = $tmp321.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$collections$IdentityMap$Entry* $tmp326 = $tmp319[$tmp325];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
$tmp319[$tmp325] = $tmp324;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:181
frost$core$Int* $tmp327 = &param0->_count;
frost$core$Int $tmp328 = *$tmp327;
frost$core$Int $tmp329 = (frost$core$Int) {1u};
int64_t $tmp330 = $tmp328.value;
int64_t $tmp331 = $tmp329.value;
int64_t $tmp332 = $tmp330 - $tmp331;
frost$core$Int $tmp333 = (frost$core$Int) {$tmp332};
frost$core$Int* $tmp334 = &param0->_count;
*$tmp334 = $tmp333;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:182
frost$collections$IdentityMap$Entry* $tmp335 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:184
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:185
frost$collections$IdentityMap$Entry* $tmp336 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp337 = &$tmp336->next;
frost$collections$IdentityMap$Entry* $tmp338 = *$tmp337;
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$collections$IdentityMap$Entry* $tmp339 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
*(&local2) = $tmp338;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:186
frost$collections$IdentityMap$Entry* $tmp340 = *(&local2);
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340 == NULL};
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:188
frost$collections$IdentityMap$Entry* $tmp343 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp344 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:190
frost$collections$IdentityMap$Entry* $tmp345 = *(&local2);
frost$core$Object** $tmp346 = &$tmp345->key;
frost$core$Object* $tmp347 = *$tmp346;
bool $tmp348 = $tmp347 == param1;
frost$core$Bit $tmp349 = (frost$core$Bit) {$tmp348};
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:192
frost$collections$IdentityMap$Entry* $tmp351 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:197
frost$collections$IdentityMap$Entry* $tmp352 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp353 = &$tmp352->next;
frost$collections$IdentityMap$Entry* $tmp354 = *$tmp353;
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$collections$IdentityMap$Entry* $tmp355 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local3) = $tmp354;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:198
frost$collections$IdentityMap$Entry* $tmp356 = *(&local3);
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp356 != NULL};
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block16; else goto block17;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:194
frost$collections$IdentityMap$Entry* $tmp359 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$collections$IdentityMap$Entry* $tmp360 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local1) = $tmp359;
frost$collections$IdentityMap$Entry* $tmp361 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block10;
block17:;
frost$core$Int $tmp362 = (frost$core$Int) {198u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s363, $tmp362);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:199
frost$collections$IdentityMap$Entry* $tmp364 = *(&local1);
frost$collections$IdentityMap$Entry* $tmp365 = *(&local3);
frost$collections$IdentityMap$Entry** $tmp366 = &$tmp365->next;
frost$collections$IdentityMap$Entry* $tmp367 = *$tmp366;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$collections$IdentityMap$Entry** $tmp368 = &$tmp364->next;
frost$collections$IdentityMap$Entry* $tmp369 = *$tmp368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$collections$IdentityMap$Entry** $tmp370 = &$tmp364->next;
*$tmp370 = $tmp367;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:200
frost$core$Int* $tmp371 = &param0->_count;
frost$core$Int $tmp372 = *$tmp371;
frost$core$Int $tmp373 = (frost$core$Int) {1u};
int64_t $tmp374 = $tmp372.value;
int64_t $tmp375 = $tmp373.value;
int64_t $tmp376 = $tmp374 - $tmp375;
frost$core$Int $tmp377 = (frost$core$Int) {$tmp376};
frost$core$Int* $tmp378 = &param0->_count;
*$tmp378 = $tmp377;
frost$collections$IdentityMap$Entry* $tmp379 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp380 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$clear(frost$collections$IdentityMap* param0) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:205
frost$core$Int* $tmp381 = &param0->changeCount;
frost$core$Int $tmp382 = *$tmp381;
frost$core$Int $tmp383 = (frost$core$Int) {1u};
int64_t $tmp384 = $tmp382.value;
int64_t $tmp385 = $tmp383.value;
int64_t $tmp386 = $tmp384 + $tmp385;
frost$core$Int $tmp387 = (frost$core$Int) {$tmp386};
frost$core$Int* $tmp388 = &param0->changeCount;
*$tmp388 = $tmp387;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:206
frost$core$Int $tmp389 = (frost$core$Int) {0u};
frost$core$Int* $tmp390 = &param0->_count;
*$tmp390 = $tmp389;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:207
frost$core$Int $tmp391 = (frost$core$Int) {0u};
frost$core$Int* $tmp392 = &param0->bucketCount;
frost$core$Int $tmp393 = *$tmp392;
frost$core$Bit $tmp394 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp395 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp391, $tmp393, $tmp394);
frost$core$Int $tmp396 = $tmp395.min;
*(&local0) = $tmp396;
frost$core$Int $tmp397 = $tmp395.max;
frost$core$Bit $tmp398 = $tmp395.inclusive;
bool $tmp399 = $tmp398.value;
frost$core$Int $tmp400 = (frost$core$Int) {1u};
if ($tmp399) goto block4; else goto block5;
block4:;
int64_t $tmp401 = $tmp396.value;
int64_t $tmp402 = $tmp397.value;
bool $tmp403 = $tmp401 <= $tmp402;
frost$core$Bit $tmp404 = (frost$core$Bit) {$tmp403};
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block1; else goto block2;
block5:;
int64_t $tmp406 = $tmp396.value;
int64_t $tmp407 = $tmp397.value;
bool $tmp408 = $tmp406 < $tmp407;
frost$core$Bit $tmp409 = (frost$core$Bit) {$tmp408};
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:208
frost$collections$IdentityMap$Entry*** $tmp411 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp412 = *$tmp411;
frost$core$Int $tmp413 = *(&local0);
frost$core$Int64 $tmp414 = frost$core$Int64$init$frost$core$Int($tmp413);
int64_t $tmp415 = $tmp414.value;
frost$collections$IdentityMap$Entry* $tmp416 = $tmp412[$tmp415];
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416 != NULL};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:209
frost$collections$IdentityMap$Entry*** $tmp419 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp420 = *$tmp419;
frost$core$Int $tmp421 = *(&local0);
frost$core$Int64 $tmp422 = frost$core$Int64$init$frost$core$Int($tmp421);
int64_t $tmp423 = $tmp422.value;
frost$collections$IdentityMap$Entry* $tmp424 = $tmp420[$tmp423];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
goto block7;
block7:;
frost$core$Int $tmp425 = *(&local0);
int64_t $tmp426 = $tmp397.value;
int64_t $tmp427 = $tmp425.value;
int64_t $tmp428 = $tmp426 - $tmp427;
frost$core$Int $tmp429 = (frost$core$Int) {$tmp428};
if ($tmp399) goto block9; else goto block10;
block9:;
int64_t $tmp430 = $tmp429.value;
int64_t $tmp431 = $tmp400.value;
bool $tmp432 = $tmp430 >= $tmp431;
frost$core$Bit $tmp433 = (frost$core$Bit) {$tmp432};
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block8; else goto block2;
block10:;
int64_t $tmp435 = $tmp429.value;
int64_t $tmp436 = $tmp400.value;
bool $tmp437 = $tmp435 > $tmp436;
frost$core$Bit $tmp438 = (frost$core$Bit) {$tmp437};
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block8; else goto block2;
block8:;
int64_t $tmp440 = $tmp425.value;
int64_t $tmp441 = $tmp400.value;
int64_t $tmp442 = $tmp440 + $tmp441;
frost$core$Int $tmp443 = (frost$core$Int) {$tmp442};
*(&local0) = $tmp443;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:212
frost$collections$IdentityMap$Entry*** $tmp444 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp445 = *$tmp444;
frostFree($tmp445);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:213
frost$core$Int $tmp446 = (frost$core$Int) {16u};
frost$core$Int* $tmp447 = &param0->bucketCount;
*$tmp447 = $tmp446;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:214
frost$core$Int* $tmp448 = &param0->bucketCount;
frost$core$Int $tmp449 = *$tmp448;
frost$core$Int64 $tmp450 = frost$core$Int64$init$frost$core$Int($tmp449);
int64_t $tmp451 = $tmp450.value;
frost$collections$IdentityMap$Entry** $tmp452 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp451 * 8));
frost$collections$IdentityMap$Entry*** $tmp453 = &param0->contents;
*$tmp453 = $tmp452;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:215
frost$core$Int $tmp454 = (frost$core$Int) {0u};
frost$core$Int* $tmp455 = &param0->bucketCount;
frost$core$Int $tmp456 = *$tmp455;
frost$core$Bit $tmp457 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp458 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp454, $tmp456, $tmp457);
frost$core$Int $tmp459 = $tmp458.min;
*(&local1) = $tmp459;
frost$core$Int $tmp460 = $tmp458.max;
frost$core$Bit $tmp461 = $tmp458.inclusive;
bool $tmp462 = $tmp461.value;
frost$core$Int $tmp463 = (frost$core$Int) {1u};
if ($tmp462) goto block14; else goto block15;
block14:;
int64_t $tmp464 = $tmp459.value;
int64_t $tmp465 = $tmp460.value;
bool $tmp466 = $tmp464 <= $tmp465;
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp466};
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block11; else goto block12;
block15:;
int64_t $tmp469 = $tmp459.value;
int64_t $tmp470 = $tmp460.value;
bool $tmp471 = $tmp469 < $tmp470;
frost$core$Bit $tmp472 = (frost$core$Bit) {$tmp471};
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:216
frost$collections$IdentityMap$Entry*** $tmp474 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp475 = *$tmp474;
frost$core$Int $tmp476 = *(&local1);
frost$core$Int64 $tmp477 = frost$core$Int64$init$frost$core$Int($tmp476);
int64_t $tmp478 = $tmp477.value;
frost$collections$IdentityMap$Entry* $tmp479 = $tmp475[$tmp478];
frost$core$Bit $tmp480 = (frost$core$Bit) {$tmp479 != NULL};
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:217
frost$collections$IdentityMap$Entry*** $tmp482 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp483 = *$tmp482;
frost$core$Int $tmp484 = *(&local1);
frost$core$Int64 $tmp485 = frost$core$Int64$init$frost$core$Int($tmp484);
int64_t $tmp486 = $tmp485.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp487 = $tmp483[$tmp486];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
$tmp483[$tmp486] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block17;
block17:;
frost$core$Int $tmp488 = *(&local1);
int64_t $tmp489 = $tmp460.value;
int64_t $tmp490 = $tmp488.value;
int64_t $tmp491 = $tmp489 - $tmp490;
frost$core$Int $tmp492 = (frost$core$Int) {$tmp491};
if ($tmp462) goto block19; else goto block20;
block19:;
int64_t $tmp493 = $tmp492.value;
int64_t $tmp494 = $tmp463.value;
bool $tmp495 = $tmp493 >= $tmp494;
frost$core$Bit $tmp496 = (frost$core$Bit) {$tmp495};
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block18; else goto block12;
block20:;
int64_t $tmp498 = $tmp492.value;
int64_t $tmp499 = $tmp463.value;
bool $tmp500 = $tmp498 > $tmp499;
frost$core$Bit $tmp501 = (frost$core$Bit) {$tmp500};
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block18; else goto block12;
block18:;
int64_t $tmp503 = $tmp488.value;
int64_t $tmp504 = $tmp463.value;
int64_t $tmp505 = $tmp503 + $tmp504;
frost$core$Int $tmp506 = (frost$core$Int) {$tmp505};
*(&local1) = $tmp506;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:220
frost$core$Int* $tmp507 = &param0->bucketCount;
frost$core$Int $tmp508 = *$tmp507;
frost$core$Int $tmp509 = (frost$core$Int) {3u};
int64_t $tmp510 = $tmp508.value;
int64_t $tmp511 = $tmp509.value;
int64_t $tmp512 = $tmp510 * $tmp511;
frost$core$Int $tmp513 = (frost$core$Int) {$tmp512};
frost$core$Int $tmp514 = (frost$core$Int) {4u};
int64_t $tmp515 = $tmp513.value;
int64_t $tmp516 = $tmp514.value;
int64_t $tmp517 = $tmp515 / $tmp516;
frost$core$Int $tmp518 = (frost$core$Int) {$tmp517};
frost$core$Int* $tmp519 = &param0->threshold;
*$tmp519 = $tmp518;
return;

}
void frost$collections$IdentityMap$incrementCount(frost$collections$IdentityMap* param0) {

frost$collections$IdentityMap$Entry** local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
frost$collections$IdentityMap$Entry* local4 = NULL;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:225
frost$core$Int* $tmp520 = &param0->_count;
frost$core$Int $tmp521 = *$tmp520;
frost$core$Int $tmp522 = (frost$core$Int) {1u};
int64_t $tmp523 = $tmp521.value;
int64_t $tmp524 = $tmp522.value;
int64_t $tmp525 = $tmp523 + $tmp524;
frost$core$Int $tmp526 = (frost$core$Int) {$tmp525};
frost$core$Int* $tmp527 = &param0->_count;
*$tmp527 = $tmp526;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:226
frost$core$Int* $tmp528 = &param0->_count;
frost$core$Int $tmp529 = *$tmp528;
frost$core$Int* $tmp530 = &param0->threshold;
frost$core$Int $tmp531 = *$tmp530;
int64_t $tmp532 = $tmp529.value;
int64_t $tmp533 = $tmp531.value;
bool $tmp534 = $tmp532 >= $tmp533;
frost$core$Bit $tmp535 = (frost$core$Bit) {$tmp534};
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:227
frost$collections$IdentityMap$Entry*** $tmp537 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp538 = *$tmp537;
*(&local0) = $tmp538;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:228
frost$core$Int* $tmp539 = &param0->bucketCount;
frost$core$Int $tmp540 = *$tmp539;
*(&local1) = $tmp540;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:229
frost$core$Int* $tmp541 = &param0->bucketCount;
frost$core$Int $tmp542 = *$tmp541;
frost$core$Int $tmp543 = (frost$core$Int) {2u};
int64_t $tmp544 = $tmp542.value;
int64_t $tmp545 = $tmp543.value;
int64_t $tmp546 = $tmp544 * $tmp545;
frost$core$Int $tmp547 = (frost$core$Int) {$tmp546};
frost$core$Int* $tmp548 = &param0->bucketCount;
*$tmp548 = $tmp547;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:230
frost$core$Int* $tmp549 = &param0->bucketCount;
frost$core$Int $tmp550 = *$tmp549;
frost$core$Int64 $tmp551 = frost$core$Int64$init$frost$core$Int($tmp550);
int64_t $tmp552 = $tmp551.value;
frost$collections$IdentityMap$Entry** $tmp553 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp552 * 8));
frost$collections$IdentityMap$Entry*** $tmp554 = &param0->contents;
*$tmp554 = $tmp553;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:231
frost$core$Int $tmp555 = (frost$core$Int) {0u};
frost$core$Int* $tmp556 = &param0->bucketCount;
frost$core$Int $tmp557 = *$tmp556;
frost$core$Bit $tmp558 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp559 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp555, $tmp557, $tmp558);
frost$core$Int $tmp560 = $tmp559.min;
*(&local2) = $tmp560;
frost$core$Int $tmp561 = $tmp559.max;
frost$core$Bit $tmp562 = $tmp559.inclusive;
bool $tmp563 = $tmp562.value;
frost$core$Int $tmp564 = (frost$core$Int) {1u};
if ($tmp563) goto block6; else goto block7;
block6:;
int64_t $tmp565 = $tmp560.value;
int64_t $tmp566 = $tmp561.value;
bool $tmp567 = $tmp565 <= $tmp566;
frost$core$Bit $tmp568 = (frost$core$Bit) {$tmp567};
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block3; else goto block4;
block7:;
int64_t $tmp570 = $tmp560.value;
int64_t $tmp571 = $tmp561.value;
bool $tmp572 = $tmp570 < $tmp571;
frost$core$Bit $tmp573 = (frost$core$Bit) {$tmp572};
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:232
frost$collections$IdentityMap$Entry*** $tmp575 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp576 = *$tmp575;
frost$core$Int $tmp577 = *(&local2);
frost$core$Int64 $tmp578 = frost$core$Int64$init$frost$core$Int($tmp577);
int64_t $tmp579 = $tmp578.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp580 = $tmp576[$tmp579];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
$tmp576[$tmp579] = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int $tmp581 = *(&local2);
int64_t $tmp582 = $tmp561.value;
int64_t $tmp583 = $tmp581.value;
int64_t $tmp584 = $tmp582 - $tmp583;
frost$core$Int $tmp585 = (frost$core$Int) {$tmp584};
if ($tmp563) goto block9; else goto block10;
block9:;
int64_t $tmp586 = $tmp585.value;
int64_t $tmp587 = $tmp564.value;
bool $tmp588 = $tmp586 >= $tmp587;
frost$core$Bit $tmp589 = (frost$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block8; else goto block4;
block10:;
int64_t $tmp591 = $tmp585.value;
int64_t $tmp592 = $tmp564.value;
bool $tmp593 = $tmp591 > $tmp592;
frost$core$Bit $tmp594 = (frost$core$Bit) {$tmp593};
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block8; else goto block4;
block8:;
int64_t $tmp596 = $tmp581.value;
int64_t $tmp597 = $tmp564.value;
int64_t $tmp598 = $tmp596 + $tmp597;
frost$core$Int $tmp599 = (frost$core$Int) {$tmp598};
*(&local2) = $tmp599;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:234
frost$core$Int* $tmp600 = &param0->threshold;
frost$core$Int $tmp601 = *$tmp600;
frost$core$Int $tmp602 = (frost$core$Int) {2u};
int64_t $tmp603 = $tmp601.value;
int64_t $tmp604 = $tmp602.value;
int64_t $tmp605 = $tmp603 * $tmp604;
frost$core$Int $tmp606 = (frost$core$Int) {$tmp605};
frost$core$Int* $tmp607 = &param0->threshold;
*$tmp607 = $tmp606;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:235
frost$core$Int $tmp608 = (frost$core$Int) {0u};
frost$core$Int* $tmp609 = &param0->_count;
*$tmp609 = $tmp608;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:236
frost$core$Int $tmp610 = (frost$core$Int) {0u};
frost$core$Int $tmp611 = *(&local1);
frost$core$Bit $tmp612 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp613 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp610, $tmp611, $tmp612);
frost$core$Int $tmp614 = $tmp613.min;
*(&local3) = $tmp614;
frost$core$Int $tmp615 = $tmp613.max;
frost$core$Bit $tmp616 = $tmp613.inclusive;
bool $tmp617 = $tmp616.value;
frost$core$Int $tmp618 = (frost$core$Int) {1u};
if ($tmp617) goto block14; else goto block15;
block14:;
int64_t $tmp619 = $tmp614.value;
int64_t $tmp620 = $tmp615.value;
bool $tmp621 = $tmp619 <= $tmp620;
frost$core$Bit $tmp622 = (frost$core$Bit) {$tmp621};
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block11; else goto block12;
block15:;
int64_t $tmp624 = $tmp614.value;
int64_t $tmp625 = $tmp615.value;
bool $tmp626 = $tmp624 < $tmp625;
frost$core$Bit $tmp627 = (frost$core$Bit) {$tmp626};
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:237
frost$collections$IdentityMap$Entry** $tmp629 = *(&local0);
frost$core$Int $tmp630 = *(&local3);
frost$core$Int64 $tmp631 = frost$core$Int64$init$frost$core$Int($tmp630);
int64_t $tmp632 = $tmp631.value;
frost$collections$IdentityMap$Entry* $tmp633 = $tmp629[$tmp632];
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$collections$IdentityMap$Entry* $tmp634 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local4) = $tmp633;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:238
goto block16;
block16:;
frost$collections$IdentityMap$Entry* $tmp635 = *(&local4);
frost$core$Bit $tmp636 = (frost$core$Bit) {$tmp635 != NULL};
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:239
frost$collections$IdentityMap$Entry* $tmp638 = *(&local4);
frost$core$Object** $tmp639 = &$tmp638->key;
frost$core$Object* $tmp640 = *$tmp639;
frost$collections$IdentityMap$Entry* $tmp641 = *(&local4);
frost$core$Object** $tmp642 = &$tmp641->value;
frost$core$Object* $tmp643 = *$tmp642;
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(param0, $tmp640, $tmp643);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:240
frost$collections$IdentityMap$Entry* $tmp644 = *(&local4);
frost$collections$IdentityMap$Entry** $tmp645 = &$tmp644->next;
frost$collections$IdentityMap$Entry* $tmp646 = *$tmp645;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
frost$collections$IdentityMap$Entry* $tmp647 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local4) = $tmp646;
goto block16;
block18:;
frost$collections$IdentityMap$Entry* $tmp648 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int $tmp649 = *(&local3);
int64_t $tmp650 = $tmp615.value;
int64_t $tmp651 = $tmp649.value;
int64_t $tmp652 = $tmp650 - $tmp651;
frost$core$Int $tmp653 = (frost$core$Int) {$tmp652};
if ($tmp617) goto block20; else goto block21;
block20:;
int64_t $tmp654 = $tmp653.value;
int64_t $tmp655 = $tmp618.value;
bool $tmp656 = $tmp654 >= $tmp655;
frost$core$Bit $tmp657 = (frost$core$Bit) {$tmp656};
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block19; else goto block12;
block21:;
int64_t $tmp659 = $tmp653.value;
int64_t $tmp660 = $tmp618.value;
bool $tmp661 = $tmp659 > $tmp660;
frost$core$Bit $tmp662 = (frost$core$Bit) {$tmp661};
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block19; else goto block12;
block19:;
int64_t $tmp664 = $tmp649.value;
int64_t $tmp665 = $tmp618.value;
int64_t $tmp666 = $tmp664 + $tmp665;
frost$core$Int $tmp667 = (frost$core$Int) {$tmp666};
*(&local3) = $tmp667;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:243
frost$core$Int $tmp668 = (frost$core$Int) {0u};
frost$core$Int $tmp669 = *(&local1);
frost$core$Bit $tmp670 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp671 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp668, $tmp669, $tmp670);
frost$core$Int $tmp672 = $tmp671.min;
*(&local5) = $tmp672;
frost$core$Int $tmp673 = $tmp671.max;
frost$core$Bit $tmp674 = $tmp671.inclusive;
bool $tmp675 = $tmp674.value;
frost$core$Int $tmp676 = (frost$core$Int) {1u};
if ($tmp675) goto block25; else goto block26;
block25:;
int64_t $tmp677 = $tmp672.value;
int64_t $tmp678 = $tmp673.value;
bool $tmp679 = $tmp677 <= $tmp678;
frost$core$Bit $tmp680 = (frost$core$Bit) {$tmp679};
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block22; else goto block23;
block26:;
int64_t $tmp682 = $tmp672.value;
int64_t $tmp683 = $tmp673.value;
bool $tmp684 = $tmp682 < $tmp683;
frost$core$Bit $tmp685 = (frost$core$Bit) {$tmp684};
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:244
frost$collections$IdentityMap$Entry** $tmp687 = *(&local0);
frost$core$Int $tmp688 = *(&local5);
frost$core$Int64 $tmp689 = frost$core$Int64$init$frost$core$Int($tmp688);
int64_t $tmp690 = $tmp689.value;
frost$collections$IdentityMap$Entry* $tmp691 = $tmp687[$tmp690];
frost$core$Bit $tmp692 = (frost$core$Bit) {$tmp691 != NULL};
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:245
frost$collections$IdentityMap$Entry** $tmp694 = *(&local0);
frost$core$Int $tmp695 = *(&local5);
frost$core$Int64 $tmp696 = frost$core$Int64$init$frost$core$Int($tmp695);
int64_t $tmp697 = $tmp696.value;
frost$collections$IdentityMap$Entry* $tmp698 = $tmp694[$tmp697];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
goto block28;
block28:;
frost$core$Int $tmp699 = *(&local5);
int64_t $tmp700 = $tmp673.value;
int64_t $tmp701 = $tmp699.value;
int64_t $tmp702 = $tmp700 - $tmp701;
frost$core$Int $tmp703 = (frost$core$Int) {$tmp702};
if ($tmp675) goto block30; else goto block31;
block30:;
int64_t $tmp704 = $tmp703.value;
int64_t $tmp705 = $tmp676.value;
bool $tmp706 = $tmp704 >= $tmp705;
frost$core$Bit $tmp707 = (frost$core$Bit) {$tmp706};
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block29; else goto block23;
block31:;
int64_t $tmp709 = $tmp703.value;
int64_t $tmp710 = $tmp676.value;
bool $tmp711 = $tmp709 > $tmp710;
frost$core$Bit $tmp712 = (frost$core$Bit) {$tmp711};
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block29; else goto block23;
block29:;
int64_t $tmp714 = $tmp699.value;
int64_t $tmp715 = $tmp676.value;
int64_t $tmp716 = $tmp714 + $tmp715;
frost$core$Int $tmp717 = (frost$core$Int) {$tmp716};
*(&local5) = $tmp717;
goto block22;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:248
frost$collections$IdentityMap$Entry** $tmp718 = *(&local0);
frostFree($tmp718);
goto block2;
block2:;
return;

}
frost$core$Int frost$collections$IdentityMap$get_count$R$frost$core$Int(frost$collections$IdentityMap* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:254
frost$core$Int* $tmp719 = &param0->_count;
frost$core$Int $tmp720 = *$tmp719;
return $tmp720;

}
frost$collections$Iterator* frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT(frost$collections$IdentityMap* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:259
FROST_ASSERT(40 == sizeof(frost$collections$IdentityMap$EntryIterator));
frost$collections$IdentityMap$EntryIterator* $tmp721 = (frost$collections$IdentityMap$EntryIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$IdentityMap$EntryIterator$class);
frost$collections$IdentityMap$EntryIterator$init$frost$collections$IdentityMap$LTfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$GT($tmp721, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp721)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
return ((frost$collections$Iterator*) $tmp721);

}
frost$core$String* frost$collections$IdentityMap$get_asString$R$frost$core$String(frost$collections$IdentityMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int local2;
frost$collections$IdentityMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:270
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp722 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp722);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$MutableString* $tmp723 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local0) = $tmp722;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:271
frost$core$MutableString* $tmp724 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp724, &$s725);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:272
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s726));
frost$core$String* $tmp727 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local1) = &$s728;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:273
frost$core$Int $tmp729 = (frost$core$Int) {0u};
frost$core$Int* $tmp730 = &param0->bucketCount;
frost$core$Int $tmp731 = *$tmp730;
frost$core$Bit $tmp732 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp733 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp729, $tmp731, $tmp732);
frost$core$Int $tmp734 = $tmp733.min;
*(&local2) = $tmp734;
frost$core$Int $tmp735 = $tmp733.max;
frost$core$Bit $tmp736 = $tmp733.inclusive;
bool $tmp737 = $tmp736.value;
frost$core$Int $tmp738 = (frost$core$Int) {1u};
if ($tmp737) goto block4; else goto block5;
block4:;
int64_t $tmp739 = $tmp734.value;
int64_t $tmp740 = $tmp735.value;
bool $tmp741 = $tmp739 <= $tmp740;
frost$core$Bit $tmp742 = (frost$core$Bit) {$tmp741};
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block1; else goto block2;
block5:;
int64_t $tmp744 = $tmp734.value;
int64_t $tmp745 = $tmp735.value;
bool $tmp746 = $tmp744 < $tmp745;
frost$core$Bit $tmp747 = (frost$core$Bit) {$tmp746};
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:274
frost$collections$IdentityMap$Entry*** $tmp749 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp750 = *$tmp749;
frost$core$Int $tmp751 = *(&local2);
frost$core$Int64 $tmp752 = frost$core$Int64$init$frost$core$Int($tmp751);
int64_t $tmp753 = $tmp752.value;
frost$collections$IdentityMap$Entry* $tmp754 = $tmp750[$tmp753];
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$collections$IdentityMap$Entry* $tmp755 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local3) = $tmp754;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:275
goto block6;
block6:;
frost$collections$IdentityMap$Entry* $tmp756 = *(&local3);
frost$core$Bit $tmp757 = (frost$core$Bit) {$tmp756 != NULL};
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:276
frost$core$MutableString* $tmp759 = *(&local0);
frost$core$String* $tmp760 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp759, $tmp760);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:277
frost$collections$IdentityMap$Entry* $tmp761 = *(&local3);
frost$core$Object** $tmp762 = &$tmp761->key;
frost$core$Object* $tmp763 = *$tmp762;
frost$core$Bit $tmp764 = (frost$core$Bit) {true};
bool $tmp765 = $tmp764.value;
if ($tmp765) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:278
frost$core$MutableString* $tmp766 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp767 = *(&local3);
frost$core$Object** $tmp768 = &$tmp767->key;
frost$core$Object* $tmp769 = *$tmp768;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IdentityMap.frost:278:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn771 $tmp770 = ($fn771) $tmp769->$class->vtable[0];
frost$core$String* $tmp772 = $tmp770($tmp769);
frost$core$MutableString$append$frost$core$String($tmp766, $tmp772);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:281
frost$core$MutableString* $tmp773 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp773, &$s774);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:283
frost$core$MutableString* $tmp775 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp775, &$s776);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:284
frost$collections$IdentityMap$Entry* $tmp777 = *(&local3);
frost$core$Object** $tmp778 = &$tmp777->value;
frost$core$Object* $tmp779 = *$tmp778;
frost$core$Bit $tmp780 = (frost$core$Bit) {true};
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:285
frost$core$MutableString* $tmp782 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp783 = *(&local3);
frost$core$Object** $tmp784 = &$tmp783->value;
frost$core$Object* $tmp785 = *$tmp784;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IdentityMap.frost:285:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn787 $tmp786 = ($fn787) $tmp785->$class->vtable[0];
frost$core$String* $tmp788 = $tmp786($tmp785);
frost$core$MutableString$append$frost$core$String($tmp782, $tmp788);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
goto block14;
block15:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:288
frost$core$MutableString* $tmp789 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp789, &$s790);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:290
frost$collections$IdentityMap$Entry* $tmp791 = *(&local3);
frost$collections$IdentityMap$Entry** $tmp792 = &$tmp791->next;
frost$collections$IdentityMap$Entry* $tmp793 = *$tmp792;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$collections$IdentityMap$Entry* $tmp794 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local3) = $tmp793;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:291
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s795));
frost$core$String* $tmp796 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local1) = &$s797;
goto block6;
block8:;
frost$collections$IdentityMap$Entry* $tmp798 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int $tmp799 = *(&local2);
int64_t $tmp800 = $tmp735.value;
int64_t $tmp801 = $tmp799.value;
int64_t $tmp802 = $tmp800 - $tmp801;
frost$core$Int $tmp803 = (frost$core$Int) {$tmp802};
if ($tmp737) goto block18; else goto block19;
block18:;
int64_t $tmp804 = $tmp803.value;
int64_t $tmp805 = $tmp738.value;
bool $tmp806 = $tmp804 >= $tmp805;
frost$core$Bit $tmp807 = (frost$core$Bit) {$tmp806};
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block17; else goto block2;
block19:;
int64_t $tmp809 = $tmp803.value;
int64_t $tmp810 = $tmp738.value;
bool $tmp811 = $tmp809 > $tmp810;
frost$core$Bit $tmp812 = (frost$core$Bit) {$tmp811};
bool $tmp813 = $tmp812.value;
if ($tmp813) goto block17; else goto block2;
block17:;
int64_t $tmp814 = $tmp799.value;
int64_t $tmp815 = $tmp738.value;
int64_t $tmp816 = $tmp814 + $tmp815;
frost$core$Int $tmp817 = (frost$core$Int) {$tmp816};
*(&local2) = $tmp817;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:294
frost$core$MutableString* $tmp818 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp818, &$s819);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentityMap.frost:295
frost$core$MutableString* $tmp820 = *(&local0);
frost$core$String* $tmp821 = frost$core$MutableString$finish$R$frost$core$String($tmp820);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
frost$core$String* $tmp822 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp823 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp821;

}

