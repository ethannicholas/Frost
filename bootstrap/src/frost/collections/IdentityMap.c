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

typedef frost$core$String* (*$fn778)(frost$core$Object*);
typedef frost$core$String* (*$fn794)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, 3511143072281775056, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, 589017117629395195, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s735 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s781 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s783 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };

void frost$collections$IdentityMap$init(frost$collections$IdentityMap* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:89
frost$core$Int $tmp2 = (frost$core$Int) {0u};
frost$core$Int* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:95
frost$core$Int* $tmp4 = &param0->changeCount;
frost$core$Int $tmp5 = *$tmp4;
frost$core$Int $tmp6 = (frost$core$Int) {1u};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
frost$core$Int $tmp10 = (frost$core$Int) {$tmp9};
frost$core$Int* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:96
frost$core$Int $tmp12 = (frost$core$Int) {0u};
frost$core$Int* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:97
frost$core$Int $tmp14 = (frost$core$Int) {16u};
frost$core$Int* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:98
frost$core$Int* $tmp16 = &param0->bucketCount;
frost$core$Int $tmp17 = *$tmp16;
frost$core$Int64 $tmp18 = frost$core$Int64$init$frost$core$Int($tmp17);
int64_t $tmp19 = $tmp18.value;
frost$collections$IdentityMap$Entry** $tmp20 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp19 * 8));
frost$collections$IdentityMap$Entry*** $tmp21 = &param0->contents;
*$tmp21 = $tmp20;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:99
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:100
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:102
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:107
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:108
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:109
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:112
frost$collections$IdentityMap$Entry*** $tmp133 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp134 = *$tmp133;
frostFree($tmp134);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:106
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Int frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:120
frost$core$Int64 $tmp135;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp135, param1);
frost$core$Int* $tmp136 = &param0->bucketCount;
frost$core$Int $tmp137 = *$tmp136;
frost$core$Int64 $tmp138 = frost$core$Int64$init$frost$core$Int($tmp137);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from IdentityMap.frost:120:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:107
int64_t $tmp139 = $tmp135.value;
int64_t $tmp140 = $tmp138.value;
int64_t $tmp141 = $tmp139 % $tmp140;
frost$core$Int64 $tmp142 = (frost$core$Int64) {$tmp141};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from IdentityMap.frost:120:63
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp143 = $tmp142.value;
frost$core$Int $tmp144 = (frost$core$Int) {((int64_t) $tmp143)};
return $tmp144;

}
frost$core$Object* frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:125
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int from IdentityMap.frost:125:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:120
frost$core$Int64 $tmp145;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp145, param1);
frost$core$Int* $tmp146 = &param0->bucketCount;
frost$core$Int $tmp147 = *$tmp146;
frost$core$Int64 $tmp148 = frost$core$Int64$init$frost$core$Int($tmp147);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from IdentityMap.frost:120:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:107
int64_t $tmp149 = $tmp145.value;
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149 % $tmp150;
frost$core$Int64 $tmp152 = (frost$core$Int64) {$tmp151};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from IdentityMap.frost:120:63
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp153 = $tmp152.value;
frost$core$Int $tmp154 = (frost$core$Int) {((int64_t) $tmp153)};
*(&local0) = $tmp154;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:126
frost$collections$IdentityMap$Entry*** $tmp155 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp156 = *$tmp155;
frost$core$Int $tmp157 = *(&local0);
frost$core$Int64 $tmp158 = frost$core$Int64$init$frost$core$Int($tmp157);
int64_t $tmp159 = $tmp158.value;
frost$collections$IdentityMap$Entry* $tmp160 = $tmp156[$tmp159];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$collections$IdentityMap$Entry* $tmp161 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local1) = $tmp160;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:127
goto block4;
block4:;
frost$collections$IdentityMap$Entry* $tmp162 = *(&local1);
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162 != NULL};
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block7; else goto block6;
block7:;
frost$collections$IdentityMap$Entry* $tmp165 = *(&local1);
frost$core$Object** $tmp166 = &$tmp165->key;
frost$core$Object* $tmp167 = *$tmp166;
bool $tmp168 = $tmp167 != param1;
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:128
frost$collections$IdentityMap$Entry* $tmp171 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp172 = &$tmp171->next;
frost$collections$IdentityMap$Entry* $tmp173 = *$tmp172;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$collections$IdentityMap$Entry* $tmp174 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local1) = $tmp173;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:130
frost$collections$IdentityMap$Entry* $tmp175 = *(&local1);
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175 != NULL};
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:131
frost$collections$IdentityMap$Entry* $tmp178 = *(&local1);
frost$core$Object** $tmp179 = &$tmp178->value;
frost$core$Object* $tmp180 = *$tmp179;
frost$core$Frost$ref$frost$core$Object$Q($tmp180);
frost$collections$IdentityMap$Entry* $tmp181 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp180;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$IdentityMap$Entry* $tmp182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block9:;
goto block11;
block11:;

}
frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:140
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int from IdentityMap.frost:140:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:120
frost$core$Int64 $tmp183;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp183, param1);
frost$core$Int* $tmp184 = &param0->bucketCount;
frost$core$Int $tmp185 = *$tmp184;
frost$core$Int64 $tmp186 = frost$core$Int64$init$frost$core$Int($tmp185);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from IdentityMap.frost:120:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:107
int64_t $tmp187 = $tmp183.value;
int64_t $tmp188 = $tmp186.value;
int64_t $tmp189 = $tmp187 % $tmp188;
frost$core$Int64 $tmp190 = (frost$core$Int64) {$tmp189};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from IdentityMap.frost:120:63
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp191 = $tmp190.value;
frost$core$Int $tmp192 = (frost$core$Int) {((int64_t) $tmp191)};
*(&local0) = $tmp192;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:141
frost$collections$IdentityMap$Entry*** $tmp193 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp194 = *$tmp193;
frost$core$Int $tmp195 = *(&local0);
frost$core$Int64 $tmp196 = frost$core$Int64$init$frost$core$Int($tmp195);
int64_t $tmp197 = $tmp196.value;
frost$collections$IdentityMap$Entry* $tmp198 = $tmp194[$tmp197];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$collections$IdentityMap$Entry* $tmp199 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local1) = $tmp198;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:142
goto block4;
block4:;
frost$collections$IdentityMap$Entry* $tmp200 = *(&local1);
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200 != NULL};
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block7; else goto block6;
block7:;
frost$collections$IdentityMap$Entry* $tmp203 = *(&local1);
frost$core$Object** $tmp204 = &$tmp203->key;
frost$core$Object* $tmp205 = *$tmp204;
bool $tmp206 = $tmp205 != param1;
frost$core$Bit $tmp207 = (frost$core$Bit) {$tmp206};
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:143
frost$collections$IdentityMap$Entry* $tmp209 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp210 = &$tmp209->next;
frost$collections$IdentityMap$Entry* $tmp211 = *$tmp210;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$collections$IdentityMap$Entry* $tmp212 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local1) = $tmp211;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:145
frost$collections$IdentityMap$Entry* $tmp213 = *(&local1);
frost$core$Bit $tmp214 = (frost$core$Bit) {$tmp213 != NULL};
frost$collections$IdentityMap$Entry* $tmp215 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp214;

}
void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(frost$collections$IdentityMap* param0, frost$core$Object* param1, frost$core$Object* param2) {

frost$core$Int local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$collections$IdentityMap$Entry* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:150
frost$core$Int* $tmp216 = &param0->changeCount;
frost$core$Int $tmp217 = *$tmp216;
frost$core$Int $tmp218 = (frost$core$Int) {1u};
int64_t $tmp219 = $tmp217.value;
int64_t $tmp220 = $tmp218.value;
int64_t $tmp221 = $tmp219 + $tmp220;
frost$core$Int $tmp222 = (frost$core$Int) {$tmp221};
frost$core$Int* $tmp223 = &param0->changeCount;
*$tmp223 = $tmp222;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:151
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int from IdentityMap.frost:151:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:120
frost$core$Int64 $tmp224;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp224, param1);
frost$core$Int* $tmp225 = &param0->bucketCount;
frost$core$Int $tmp226 = *$tmp225;
frost$core$Int64 $tmp227 = frost$core$Int64$init$frost$core$Int($tmp226);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from IdentityMap.frost:120:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:107
int64_t $tmp228 = $tmp224.value;
int64_t $tmp229 = $tmp227.value;
int64_t $tmp230 = $tmp228 % $tmp229;
frost$core$Int64 $tmp231 = (frost$core$Int64) {$tmp230};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from IdentityMap.frost:120:63
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp232 = $tmp231.value;
frost$core$Int $tmp233 = (frost$core$Int) {((int64_t) $tmp232)};
*(&local0) = $tmp233;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:152
frost$collections$IdentityMap$Entry*** $tmp234 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp235 = *$tmp234;
frost$core$Int $tmp236 = *(&local0);
frost$core$Int64 $tmp237 = frost$core$Int64$init$frost$core$Int($tmp236);
int64_t $tmp238 = $tmp237.value;
frost$collections$IdentityMap$Entry* $tmp239 = $tmp235[$tmp238];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$collections$IdentityMap$Entry* $tmp240 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local1) = $tmp239;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:153
goto block4;
block4:;
frost$collections$IdentityMap$Entry* $tmp241 = *(&local1);
frost$core$Bit $tmp242 = (frost$core$Bit) {$tmp241 != NULL};
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block7; else goto block6;
block7:;
frost$collections$IdentityMap$Entry* $tmp244 = *(&local1);
frost$core$Object** $tmp245 = &$tmp244->key;
frost$core$Object* $tmp246 = *$tmp245;
bool $tmp247 = $tmp246 != param1;
frost$core$Bit $tmp248 = (frost$core$Bit) {$tmp247};
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:154
frost$collections$IdentityMap$Entry* $tmp250 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp251 = &$tmp250->next;
frost$collections$IdentityMap$Entry* $tmp252 = *$tmp251;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$collections$IdentityMap$Entry* $tmp253 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local1) = $tmp252;
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:156
frost$collections$IdentityMap$Entry* $tmp254 = *(&local1);
frost$core$Bit $tmp255 = (frost$core$Bit) {$tmp254 == NULL};
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:157
frost$collections$IdentityMap$Entry*** $tmp257 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp258 = *$tmp257;
frost$core$Int $tmp259 = *(&local0);
frost$core$Int64 $tmp260 = frost$core$Int64$init$frost$core$Int($tmp259);
int64_t $tmp261 = $tmp260.value;
frost$collections$IdentityMap$Entry* $tmp262 = $tmp258[$tmp261];
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$collections$IdentityMap$Entry* $tmp263 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local2) = $tmp262;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:158
FROST_ASSERT(40 == sizeof(frost$collections$IdentityMap$Entry));
frost$collections$IdentityMap$Entry* $tmp264 = (frost$collections$IdentityMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$IdentityMap$Entry$class);
// begin inline call to frost.collections.IdentityMap.Entry.init(key:frost.collections.IdentityMap.Entry.K, value:frost.collections.IdentityMap.Entry.V) from IdentityMap.frost:158:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:29
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp265 = &$tmp264->key;
frost$core$Object* $tmp266 = *$tmp265;
frost$core$Frost$unref$frost$core$Object$Q($tmp266);
frost$core$Object** $tmp267 = &$tmp264->key;
*$tmp267 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:30
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp268 = &$tmp264->value;
frost$core$Object* $tmp269 = *$tmp268;
frost$core$Frost$unref$frost$core$Object$Q($tmp269);
frost$core$Object** $tmp270 = &$tmp264->value;
*$tmp270 = param2;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$collections$IdentityMap$Entry* $tmp271 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local1) = $tmp264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:159
frost$collections$IdentityMap$Entry* $tmp272 = *(&local1);
frost$collections$IdentityMap$Entry* $tmp273 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$collections$IdentityMap$Entry** $tmp274 = &$tmp272->next;
frost$collections$IdentityMap$Entry* $tmp275 = *$tmp274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$collections$IdentityMap$Entry** $tmp276 = &$tmp272->next;
*$tmp276 = $tmp273;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:160
frost$collections$IdentityMap$Entry*** $tmp277 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp278 = *$tmp277;
frost$core$Int $tmp279 = *(&local0);
frost$core$Int64 $tmp280 = frost$core$Int64$init$frost$core$Int($tmp279);
frost$collections$IdentityMap$Entry* $tmp281 = *(&local1);
int64_t $tmp282 = $tmp280.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$collections$IdentityMap$Entry* $tmp283 = $tmp278[$tmp282];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
$tmp278[$tmp282] = $tmp281;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:161
frost$collections$IdentityMap$incrementCount(param0);
frost$collections$IdentityMap$Entry* $tmp284 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:164
frost$collections$IdentityMap$Entry* $tmp285 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp286 = &$tmp285->value;
frost$core$Object* $tmp287 = *$tmp286;
frost$core$Frost$unref$frost$core$Object$Q($tmp287);
frost$core$Object** $tmp288 = &$tmp285->value;
*$tmp288 = param2;
goto block9;
block9:;
frost$collections$IdentityMap$Entry* $tmp289 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$collections$IdentityMap$Entry* local2 = NULL;
frost$collections$IdentityMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:170
frost$core$Int* $tmp290 = &param0->changeCount;
frost$core$Int $tmp291 = *$tmp290;
frost$core$Int $tmp292 = (frost$core$Int) {1u};
int64_t $tmp293 = $tmp291.value;
int64_t $tmp294 = $tmp292.value;
int64_t $tmp295 = $tmp293 + $tmp294;
frost$core$Int $tmp296 = (frost$core$Int) {$tmp295};
frost$core$Int* $tmp297 = &param0->changeCount;
*$tmp297 = $tmp296;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:171
// begin inline call to function frost.collections.IdentityMap.indexFor(key:frost.collections.IdentityMap.K):frost.core.Int from IdentityMap.frost:171:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:120
frost$core$Int64 $tmp298;
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(&$tmp298, param1);
frost$core$Int* $tmp299 = &param0->bucketCount;
frost$core$Int $tmp300 = *$tmp299;
frost$core$Int64 $tmp301 = frost$core$Int64$init$frost$core$Int($tmp300);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from IdentityMap.frost:120:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:107
int64_t $tmp302 = $tmp298.value;
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302 % $tmp303;
frost$core$Int64 $tmp305 = (frost$core$Int64) {$tmp304};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from IdentityMap.frost:120:63
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp306 = $tmp305.value;
frost$core$Int $tmp307 = (frost$core$Int) {((int64_t) $tmp306)};
*(&local0) = $tmp307;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:172
frost$collections$IdentityMap$Entry*** $tmp308 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp309 = *$tmp308;
frost$core$Int $tmp310 = *(&local0);
frost$core$Int64 $tmp311 = frost$core$Int64$init$frost$core$Int($tmp310);
int64_t $tmp312 = $tmp311.value;
frost$collections$IdentityMap$Entry* $tmp313 = $tmp309[$tmp312];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$collections$IdentityMap$Entry* $tmp314 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local1) = $tmp313;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:174
frost$collections$IdentityMap$Entry* $tmp315 = *(&local1);
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315 == NULL};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:175
frost$collections$IdentityMap$Entry* $tmp318 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:178
frost$collections$IdentityMap$Entry* $tmp319 = *(&local1);
frost$core$Object** $tmp320 = &$tmp319->key;
frost$core$Object* $tmp321 = *$tmp320;
bool $tmp322 = $tmp321 == param1;
frost$core$Bit $tmp323 = (frost$core$Bit) {$tmp322};
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:179
frost$collections$IdentityMap$Entry*** $tmp325 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp326 = *$tmp325;
frost$core$Int $tmp327 = *(&local0);
frost$core$Int64 $tmp328 = frost$core$Int64$init$frost$core$Int($tmp327);
frost$collections$IdentityMap$Entry* $tmp329 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp330 = &$tmp329->next;
frost$collections$IdentityMap$Entry* $tmp331 = *$tmp330;
int64_t $tmp332 = $tmp328.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$collections$IdentityMap$Entry* $tmp333 = $tmp326[$tmp332];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
$tmp326[$tmp332] = $tmp331;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:180
frost$core$Int* $tmp334 = &param0->_count;
frost$core$Int $tmp335 = *$tmp334;
frost$core$Int $tmp336 = (frost$core$Int) {1u};
int64_t $tmp337 = $tmp335.value;
int64_t $tmp338 = $tmp336.value;
int64_t $tmp339 = $tmp337 - $tmp338;
frost$core$Int $tmp340 = (frost$core$Int) {$tmp339};
frost$core$Int* $tmp341 = &param0->_count;
*$tmp341 = $tmp340;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:181
frost$collections$IdentityMap$Entry* $tmp342 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:183
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:184
frost$collections$IdentityMap$Entry* $tmp343 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp344 = &$tmp343->next;
frost$collections$IdentityMap$Entry* $tmp345 = *$tmp344;
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$collections$IdentityMap$Entry* $tmp346 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local2) = $tmp345;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:185
frost$collections$IdentityMap$Entry* $tmp347 = *(&local2);
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp347 == NULL};
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:187
frost$collections$IdentityMap$Entry* $tmp350 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp351 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:189
frost$collections$IdentityMap$Entry* $tmp352 = *(&local2);
frost$core$Object** $tmp353 = &$tmp352->key;
frost$core$Object* $tmp354 = *$tmp353;
bool $tmp355 = $tmp354 == param1;
frost$core$Bit $tmp356 = (frost$core$Bit) {$tmp355};
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:191
frost$collections$IdentityMap$Entry* $tmp358 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:196
frost$collections$IdentityMap$Entry* $tmp359 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp360 = &$tmp359->next;
frost$collections$IdentityMap$Entry* $tmp361 = *$tmp360;
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
frost$collections$IdentityMap$Entry* $tmp362 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local3) = $tmp361;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:197
frost$collections$IdentityMap$Entry* $tmp363 = *(&local3);
frost$core$Bit $tmp364 = (frost$core$Bit) {$tmp363 != NULL};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block14; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:193
frost$collections$IdentityMap$Entry* $tmp366 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$collections$IdentityMap$Entry* $tmp367 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local1) = $tmp366;
frost$collections$IdentityMap$Entry* $tmp368 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block8;
block15:;
frost$core$Int $tmp369 = (frost$core$Int) {197u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s370, $tmp369);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:198
frost$collections$IdentityMap$Entry* $tmp371 = *(&local1);
frost$collections$IdentityMap$Entry* $tmp372 = *(&local3);
frost$collections$IdentityMap$Entry** $tmp373 = &$tmp372->next;
frost$collections$IdentityMap$Entry* $tmp374 = *$tmp373;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$collections$IdentityMap$Entry** $tmp375 = &$tmp371->next;
frost$collections$IdentityMap$Entry* $tmp376 = *$tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$collections$IdentityMap$Entry** $tmp377 = &$tmp371->next;
*$tmp377 = $tmp374;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:199
frost$core$Int* $tmp378 = &param0->_count;
frost$core$Int $tmp379 = *$tmp378;
frost$core$Int $tmp380 = (frost$core$Int) {1u};
int64_t $tmp381 = $tmp379.value;
int64_t $tmp382 = $tmp380.value;
int64_t $tmp383 = $tmp381 - $tmp382;
frost$core$Int $tmp384 = (frost$core$Int) {$tmp383};
frost$core$Int* $tmp385 = &param0->_count;
*$tmp385 = $tmp384;
frost$collections$IdentityMap$Entry* $tmp386 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp387 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$clear(frost$collections$IdentityMap* param0) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:204
frost$core$Int* $tmp388 = &param0->changeCount;
frost$core$Int $tmp389 = *$tmp388;
frost$core$Int $tmp390 = (frost$core$Int) {1u};
int64_t $tmp391 = $tmp389.value;
int64_t $tmp392 = $tmp390.value;
int64_t $tmp393 = $tmp391 + $tmp392;
frost$core$Int $tmp394 = (frost$core$Int) {$tmp393};
frost$core$Int* $tmp395 = &param0->changeCount;
*$tmp395 = $tmp394;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:205
frost$core$Int $tmp396 = (frost$core$Int) {0u};
frost$core$Int* $tmp397 = &param0->_count;
*$tmp397 = $tmp396;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:206
frost$core$Int $tmp398 = (frost$core$Int) {0u};
frost$core$Int* $tmp399 = &param0->bucketCount;
frost$core$Int $tmp400 = *$tmp399;
frost$core$Bit $tmp401 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp402 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp398, $tmp400, $tmp401);
frost$core$Int $tmp403 = $tmp402.min;
*(&local0) = $tmp403;
frost$core$Int $tmp404 = $tmp402.max;
frost$core$Bit $tmp405 = $tmp402.inclusive;
bool $tmp406 = $tmp405.value;
frost$core$Int $tmp407 = (frost$core$Int) {1u};
if ($tmp406) goto block4; else goto block5;
block4:;
int64_t $tmp408 = $tmp403.value;
int64_t $tmp409 = $tmp404.value;
bool $tmp410 = $tmp408 <= $tmp409;
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block1; else goto block2;
block5:;
int64_t $tmp413 = $tmp403.value;
int64_t $tmp414 = $tmp404.value;
bool $tmp415 = $tmp413 < $tmp414;
frost$core$Bit $tmp416 = (frost$core$Bit) {$tmp415};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:207
frost$collections$IdentityMap$Entry*** $tmp418 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp419 = *$tmp418;
frost$core$Int $tmp420 = *(&local0);
frost$core$Int64 $tmp421 = frost$core$Int64$init$frost$core$Int($tmp420);
int64_t $tmp422 = $tmp421.value;
frost$collections$IdentityMap$Entry* $tmp423 = $tmp419[$tmp422];
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423 != NULL};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:208
frost$collections$IdentityMap$Entry*** $tmp426 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp427 = *$tmp426;
frost$core$Int $tmp428 = *(&local0);
frost$core$Int64 $tmp429 = frost$core$Int64$init$frost$core$Int($tmp428);
int64_t $tmp430 = $tmp429.value;
frost$collections$IdentityMap$Entry* $tmp431 = $tmp427[$tmp430];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
goto block7;
block7:;
frost$core$Int $tmp432 = *(&local0);
int64_t $tmp433 = $tmp404.value;
int64_t $tmp434 = $tmp432.value;
int64_t $tmp435 = $tmp433 - $tmp434;
frost$core$Int $tmp436 = (frost$core$Int) {$tmp435};
if ($tmp406) goto block9; else goto block10;
block9:;
int64_t $tmp437 = $tmp436.value;
int64_t $tmp438 = $tmp407.value;
bool $tmp439 = $tmp437 >= $tmp438;
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block8; else goto block2;
block10:;
int64_t $tmp442 = $tmp436.value;
int64_t $tmp443 = $tmp407.value;
bool $tmp444 = $tmp442 > $tmp443;
frost$core$Bit $tmp445 = (frost$core$Bit) {$tmp444};
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block8; else goto block2;
block8:;
int64_t $tmp447 = $tmp432.value;
int64_t $tmp448 = $tmp407.value;
int64_t $tmp449 = $tmp447 + $tmp448;
frost$core$Int $tmp450 = (frost$core$Int) {$tmp449};
*(&local0) = $tmp450;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:211
frost$collections$IdentityMap$Entry*** $tmp451 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp452 = *$tmp451;
frostFree($tmp452);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:212
frost$core$Int $tmp453 = (frost$core$Int) {16u};
frost$core$Int* $tmp454 = &param0->bucketCount;
*$tmp454 = $tmp453;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:213
frost$core$Int* $tmp455 = &param0->bucketCount;
frost$core$Int $tmp456 = *$tmp455;
frost$core$Int64 $tmp457 = frost$core$Int64$init$frost$core$Int($tmp456);
int64_t $tmp458 = $tmp457.value;
frost$collections$IdentityMap$Entry** $tmp459 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp458 * 8));
frost$collections$IdentityMap$Entry*** $tmp460 = &param0->contents;
*$tmp460 = $tmp459;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:214
frost$core$Int $tmp461 = (frost$core$Int) {0u};
frost$core$Int* $tmp462 = &param0->bucketCount;
frost$core$Int $tmp463 = *$tmp462;
frost$core$Bit $tmp464 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp465 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp461, $tmp463, $tmp464);
frost$core$Int $tmp466 = $tmp465.min;
*(&local1) = $tmp466;
frost$core$Int $tmp467 = $tmp465.max;
frost$core$Bit $tmp468 = $tmp465.inclusive;
bool $tmp469 = $tmp468.value;
frost$core$Int $tmp470 = (frost$core$Int) {1u};
if ($tmp469) goto block14; else goto block15;
block14:;
int64_t $tmp471 = $tmp466.value;
int64_t $tmp472 = $tmp467.value;
bool $tmp473 = $tmp471 <= $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block11; else goto block12;
block15:;
int64_t $tmp476 = $tmp466.value;
int64_t $tmp477 = $tmp467.value;
bool $tmp478 = $tmp476 < $tmp477;
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:215
frost$collections$IdentityMap$Entry*** $tmp481 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp482 = *$tmp481;
frost$core$Int $tmp483 = *(&local1);
frost$core$Int64 $tmp484 = frost$core$Int64$init$frost$core$Int($tmp483);
int64_t $tmp485 = $tmp484.value;
frost$collections$IdentityMap$Entry* $tmp486 = $tmp482[$tmp485];
frost$core$Bit $tmp487 = (frost$core$Bit) {$tmp486 != NULL};
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:216
frost$collections$IdentityMap$Entry*** $tmp489 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp490 = *$tmp489;
frost$core$Int $tmp491 = *(&local1);
frost$core$Int64 $tmp492 = frost$core$Int64$init$frost$core$Int($tmp491);
int64_t $tmp493 = $tmp492.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp494 = $tmp490[$tmp493];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
$tmp490[$tmp493] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block17;
block17:;
frost$core$Int $tmp495 = *(&local1);
int64_t $tmp496 = $tmp467.value;
int64_t $tmp497 = $tmp495.value;
int64_t $tmp498 = $tmp496 - $tmp497;
frost$core$Int $tmp499 = (frost$core$Int) {$tmp498};
if ($tmp469) goto block19; else goto block20;
block19:;
int64_t $tmp500 = $tmp499.value;
int64_t $tmp501 = $tmp470.value;
bool $tmp502 = $tmp500 >= $tmp501;
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block18; else goto block12;
block20:;
int64_t $tmp505 = $tmp499.value;
int64_t $tmp506 = $tmp470.value;
bool $tmp507 = $tmp505 > $tmp506;
frost$core$Bit $tmp508 = (frost$core$Bit) {$tmp507};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block18; else goto block12;
block18:;
int64_t $tmp510 = $tmp495.value;
int64_t $tmp511 = $tmp470.value;
int64_t $tmp512 = $tmp510 + $tmp511;
frost$core$Int $tmp513 = (frost$core$Int) {$tmp512};
*(&local1) = $tmp513;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:219
frost$core$Int* $tmp514 = &param0->bucketCount;
frost$core$Int $tmp515 = *$tmp514;
frost$core$Int $tmp516 = (frost$core$Int) {3u};
int64_t $tmp517 = $tmp515.value;
int64_t $tmp518 = $tmp516.value;
int64_t $tmp519 = $tmp517 * $tmp518;
frost$core$Int $tmp520 = (frost$core$Int) {$tmp519};
frost$core$Int $tmp521 = (frost$core$Int) {4u};
int64_t $tmp522 = $tmp520.value;
int64_t $tmp523 = $tmp521.value;
int64_t $tmp524 = $tmp522 / $tmp523;
frost$core$Int $tmp525 = (frost$core$Int) {$tmp524};
frost$core$Int* $tmp526 = &param0->threshold;
*$tmp526 = $tmp525;
return;

}
void frost$collections$IdentityMap$incrementCount(frost$collections$IdentityMap* param0) {

frost$collections$IdentityMap$Entry** local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
frost$collections$IdentityMap$Entry* local4 = NULL;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:224
frost$core$Int* $tmp527 = &param0->_count;
frost$core$Int $tmp528 = *$tmp527;
frost$core$Int $tmp529 = (frost$core$Int) {1u};
int64_t $tmp530 = $tmp528.value;
int64_t $tmp531 = $tmp529.value;
int64_t $tmp532 = $tmp530 + $tmp531;
frost$core$Int $tmp533 = (frost$core$Int) {$tmp532};
frost$core$Int* $tmp534 = &param0->_count;
*$tmp534 = $tmp533;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:225
frost$core$Int* $tmp535 = &param0->_count;
frost$core$Int $tmp536 = *$tmp535;
frost$core$Int* $tmp537 = &param0->threshold;
frost$core$Int $tmp538 = *$tmp537;
int64_t $tmp539 = $tmp536.value;
int64_t $tmp540 = $tmp538.value;
bool $tmp541 = $tmp539 >= $tmp540;
frost$core$Bit $tmp542 = (frost$core$Bit) {$tmp541};
bool $tmp543 = $tmp542.value;
if ($tmp543) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:226
frost$collections$IdentityMap$Entry*** $tmp544 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp545 = *$tmp544;
*(&local0) = $tmp545;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:227
frost$core$Int* $tmp546 = &param0->bucketCount;
frost$core$Int $tmp547 = *$tmp546;
*(&local1) = $tmp547;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:228
frost$core$Int* $tmp548 = &param0->bucketCount;
frost$core$Int $tmp549 = *$tmp548;
frost$core$Int $tmp550 = (frost$core$Int) {2u};
int64_t $tmp551 = $tmp549.value;
int64_t $tmp552 = $tmp550.value;
int64_t $tmp553 = $tmp551 * $tmp552;
frost$core$Int $tmp554 = (frost$core$Int) {$tmp553};
frost$core$Int* $tmp555 = &param0->bucketCount;
*$tmp555 = $tmp554;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:229
frost$core$Int* $tmp556 = &param0->bucketCount;
frost$core$Int $tmp557 = *$tmp556;
frost$core$Int64 $tmp558 = frost$core$Int64$init$frost$core$Int($tmp557);
int64_t $tmp559 = $tmp558.value;
frost$collections$IdentityMap$Entry** $tmp560 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp559 * 8));
frost$collections$IdentityMap$Entry*** $tmp561 = &param0->contents;
*$tmp561 = $tmp560;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:230
frost$core$Int $tmp562 = (frost$core$Int) {0u};
frost$core$Int* $tmp563 = &param0->bucketCount;
frost$core$Int $tmp564 = *$tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp566 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp562, $tmp564, $tmp565);
frost$core$Int $tmp567 = $tmp566.min;
*(&local2) = $tmp567;
frost$core$Int $tmp568 = $tmp566.max;
frost$core$Bit $tmp569 = $tmp566.inclusive;
bool $tmp570 = $tmp569.value;
frost$core$Int $tmp571 = (frost$core$Int) {1u};
if ($tmp570) goto block6; else goto block7;
block6:;
int64_t $tmp572 = $tmp567.value;
int64_t $tmp573 = $tmp568.value;
bool $tmp574 = $tmp572 <= $tmp573;
frost$core$Bit $tmp575 = (frost$core$Bit) {$tmp574};
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block3; else goto block4;
block7:;
int64_t $tmp577 = $tmp567.value;
int64_t $tmp578 = $tmp568.value;
bool $tmp579 = $tmp577 < $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:231
frost$collections$IdentityMap$Entry*** $tmp582 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp583 = *$tmp582;
frost$core$Int $tmp584 = *(&local2);
frost$core$Int64 $tmp585 = frost$core$Int64$init$frost$core$Int($tmp584);
int64_t $tmp586 = $tmp585.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp587 = $tmp583[$tmp586];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
$tmp583[$tmp586] = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int $tmp588 = *(&local2);
int64_t $tmp589 = $tmp568.value;
int64_t $tmp590 = $tmp588.value;
int64_t $tmp591 = $tmp589 - $tmp590;
frost$core$Int $tmp592 = (frost$core$Int) {$tmp591};
if ($tmp570) goto block9; else goto block10;
block9:;
int64_t $tmp593 = $tmp592.value;
int64_t $tmp594 = $tmp571.value;
bool $tmp595 = $tmp593 >= $tmp594;
frost$core$Bit $tmp596 = (frost$core$Bit) {$tmp595};
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block8; else goto block4;
block10:;
int64_t $tmp598 = $tmp592.value;
int64_t $tmp599 = $tmp571.value;
bool $tmp600 = $tmp598 > $tmp599;
frost$core$Bit $tmp601 = (frost$core$Bit) {$tmp600};
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block8; else goto block4;
block8:;
int64_t $tmp603 = $tmp588.value;
int64_t $tmp604 = $tmp571.value;
int64_t $tmp605 = $tmp603 + $tmp604;
frost$core$Int $tmp606 = (frost$core$Int) {$tmp605};
*(&local2) = $tmp606;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:233
frost$core$Int* $tmp607 = &param0->threshold;
frost$core$Int $tmp608 = *$tmp607;
frost$core$Int $tmp609 = (frost$core$Int) {2u};
int64_t $tmp610 = $tmp608.value;
int64_t $tmp611 = $tmp609.value;
int64_t $tmp612 = $tmp610 * $tmp611;
frost$core$Int $tmp613 = (frost$core$Int) {$tmp612};
frost$core$Int* $tmp614 = &param0->threshold;
*$tmp614 = $tmp613;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:234
frost$core$Int $tmp615 = (frost$core$Int) {0u};
frost$core$Int* $tmp616 = &param0->_count;
*$tmp616 = $tmp615;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:235
frost$core$Int $tmp617 = (frost$core$Int) {0u};
frost$core$Int $tmp618 = *(&local1);
frost$core$Bit $tmp619 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp620 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp617, $tmp618, $tmp619);
frost$core$Int $tmp621 = $tmp620.min;
*(&local3) = $tmp621;
frost$core$Int $tmp622 = $tmp620.max;
frost$core$Bit $tmp623 = $tmp620.inclusive;
bool $tmp624 = $tmp623.value;
frost$core$Int $tmp625 = (frost$core$Int) {1u};
if ($tmp624) goto block14; else goto block15;
block14:;
int64_t $tmp626 = $tmp621.value;
int64_t $tmp627 = $tmp622.value;
bool $tmp628 = $tmp626 <= $tmp627;
frost$core$Bit $tmp629 = (frost$core$Bit) {$tmp628};
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block11; else goto block12;
block15:;
int64_t $tmp631 = $tmp621.value;
int64_t $tmp632 = $tmp622.value;
bool $tmp633 = $tmp631 < $tmp632;
frost$core$Bit $tmp634 = (frost$core$Bit) {$tmp633};
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:236
frost$collections$IdentityMap$Entry** $tmp636 = *(&local0);
frost$core$Int $tmp637 = *(&local3);
frost$core$Int64 $tmp638 = frost$core$Int64$init$frost$core$Int($tmp637);
int64_t $tmp639 = $tmp638.value;
frost$collections$IdentityMap$Entry* $tmp640 = $tmp636[$tmp639];
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$collections$IdentityMap$Entry* $tmp641 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local4) = $tmp640;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:237
goto block16;
block16:;
frost$collections$IdentityMap$Entry* $tmp642 = *(&local4);
frost$core$Bit $tmp643 = (frost$core$Bit) {$tmp642 != NULL};
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:238
frost$collections$IdentityMap$Entry* $tmp645 = *(&local4);
frost$core$Object** $tmp646 = &$tmp645->key;
frost$core$Object* $tmp647 = *$tmp646;
frost$collections$IdentityMap$Entry* $tmp648 = *(&local4);
frost$core$Object** $tmp649 = &$tmp648->value;
frost$core$Object* $tmp650 = *$tmp649;
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(param0, $tmp647, $tmp650);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:239
frost$collections$IdentityMap$Entry* $tmp651 = *(&local4);
frost$collections$IdentityMap$Entry** $tmp652 = &$tmp651->next;
frost$collections$IdentityMap$Entry* $tmp653 = *$tmp652;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$collections$IdentityMap$Entry* $tmp654 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local4) = $tmp653;
goto block16;
block18:;
frost$collections$IdentityMap$Entry* $tmp655 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int $tmp656 = *(&local3);
int64_t $tmp657 = $tmp622.value;
int64_t $tmp658 = $tmp656.value;
int64_t $tmp659 = $tmp657 - $tmp658;
frost$core$Int $tmp660 = (frost$core$Int) {$tmp659};
if ($tmp624) goto block20; else goto block21;
block20:;
int64_t $tmp661 = $tmp660.value;
int64_t $tmp662 = $tmp625.value;
bool $tmp663 = $tmp661 >= $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block19; else goto block12;
block21:;
int64_t $tmp666 = $tmp660.value;
int64_t $tmp667 = $tmp625.value;
bool $tmp668 = $tmp666 > $tmp667;
frost$core$Bit $tmp669 = (frost$core$Bit) {$tmp668};
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block19; else goto block12;
block19:;
int64_t $tmp671 = $tmp656.value;
int64_t $tmp672 = $tmp625.value;
int64_t $tmp673 = $tmp671 + $tmp672;
frost$core$Int $tmp674 = (frost$core$Int) {$tmp673};
*(&local3) = $tmp674;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:242
frost$core$Int $tmp675 = (frost$core$Int) {0u};
frost$core$Int $tmp676 = *(&local1);
frost$core$Bit $tmp677 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp678 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp675, $tmp676, $tmp677);
frost$core$Int $tmp679 = $tmp678.min;
*(&local5) = $tmp679;
frost$core$Int $tmp680 = $tmp678.max;
frost$core$Bit $tmp681 = $tmp678.inclusive;
bool $tmp682 = $tmp681.value;
frost$core$Int $tmp683 = (frost$core$Int) {1u};
if ($tmp682) goto block25; else goto block26;
block25:;
int64_t $tmp684 = $tmp679.value;
int64_t $tmp685 = $tmp680.value;
bool $tmp686 = $tmp684 <= $tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block22; else goto block23;
block26:;
int64_t $tmp689 = $tmp679.value;
int64_t $tmp690 = $tmp680.value;
bool $tmp691 = $tmp689 < $tmp690;
frost$core$Bit $tmp692 = (frost$core$Bit) {$tmp691};
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:243
frost$collections$IdentityMap$Entry** $tmp694 = *(&local0);
frost$core$Int $tmp695 = *(&local5);
frost$core$Int64 $tmp696 = frost$core$Int64$init$frost$core$Int($tmp695);
int64_t $tmp697 = $tmp696.value;
frost$collections$IdentityMap$Entry* $tmp698 = $tmp694[$tmp697];
frost$core$Bit $tmp699 = (frost$core$Bit) {$tmp698 != NULL};
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:244
frost$collections$IdentityMap$Entry** $tmp701 = *(&local0);
frost$core$Int $tmp702 = *(&local5);
frost$core$Int64 $tmp703 = frost$core$Int64$init$frost$core$Int($tmp702);
int64_t $tmp704 = $tmp703.value;
frost$collections$IdentityMap$Entry* $tmp705 = $tmp701[$tmp704];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
goto block28;
block28:;
frost$core$Int $tmp706 = *(&local5);
int64_t $tmp707 = $tmp680.value;
int64_t $tmp708 = $tmp706.value;
int64_t $tmp709 = $tmp707 - $tmp708;
frost$core$Int $tmp710 = (frost$core$Int) {$tmp709};
if ($tmp682) goto block30; else goto block31;
block30:;
int64_t $tmp711 = $tmp710.value;
int64_t $tmp712 = $tmp683.value;
bool $tmp713 = $tmp711 >= $tmp712;
frost$core$Bit $tmp714 = (frost$core$Bit) {$tmp713};
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block29; else goto block23;
block31:;
int64_t $tmp716 = $tmp710.value;
int64_t $tmp717 = $tmp683.value;
bool $tmp718 = $tmp716 > $tmp717;
frost$core$Bit $tmp719 = (frost$core$Bit) {$tmp718};
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block29; else goto block23;
block29:;
int64_t $tmp721 = $tmp706.value;
int64_t $tmp722 = $tmp683.value;
int64_t $tmp723 = $tmp721 + $tmp722;
frost$core$Int $tmp724 = (frost$core$Int) {$tmp723};
*(&local5) = $tmp724;
goto block22;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:247
frost$collections$IdentityMap$Entry** $tmp725 = *(&local0);
frostFree($tmp725);
goto block2;
block2:;
return;

}
frost$core$Int frost$collections$IdentityMap$get_count$R$frost$core$Int(frost$collections$IdentityMap* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:253
frost$core$Int* $tmp726 = &param0->_count;
frost$core$Int $tmp727 = *$tmp726;
return $tmp727;

}
frost$collections$Iterator* frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT(frost$collections$IdentityMap* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:258
FROST_ASSERT(40 == sizeof(frost$collections$IdentityMap$EntryIterator));
frost$collections$IdentityMap$EntryIterator* $tmp728 = (frost$collections$IdentityMap$EntryIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$IdentityMap$EntryIterator$class);
frost$collections$IdentityMap$EntryIterator$init$frost$collections$IdentityMap$LTfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$GT($tmp728, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp728)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
return ((frost$collections$Iterator*) $tmp728);

}
frost$core$String* frost$collections$IdentityMap$get_asString$R$frost$core$String(frost$collections$IdentityMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int local2;
frost$collections$IdentityMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:269
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp729 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp729);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$core$MutableString* $tmp730 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
*(&local0) = $tmp729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:270
frost$core$MutableString* $tmp731 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp731, &$s732);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:271
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s733));
frost$core$String* $tmp734 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local1) = &$s735;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:272
frost$core$Int $tmp736 = (frost$core$Int) {0u};
frost$core$Int* $tmp737 = &param0->bucketCount;
frost$core$Int $tmp738 = *$tmp737;
frost$core$Bit $tmp739 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp740 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp736, $tmp738, $tmp739);
frost$core$Int $tmp741 = $tmp740.min;
*(&local2) = $tmp741;
frost$core$Int $tmp742 = $tmp740.max;
frost$core$Bit $tmp743 = $tmp740.inclusive;
bool $tmp744 = $tmp743.value;
frost$core$Int $tmp745 = (frost$core$Int) {1u};
if ($tmp744) goto block4; else goto block5;
block4:;
int64_t $tmp746 = $tmp741.value;
int64_t $tmp747 = $tmp742.value;
bool $tmp748 = $tmp746 <= $tmp747;
frost$core$Bit $tmp749 = (frost$core$Bit) {$tmp748};
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block1; else goto block2;
block5:;
int64_t $tmp751 = $tmp741.value;
int64_t $tmp752 = $tmp742.value;
bool $tmp753 = $tmp751 < $tmp752;
frost$core$Bit $tmp754 = (frost$core$Bit) {$tmp753};
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:273
frost$collections$IdentityMap$Entry*** $tmp756 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp757 = *$tmp756;
frost$core$Int $tmp758 = *(&local2);
frost$core$Int64 $tmp759 = frost$core$Int64$init$frost$core$Int($tmp758);
int64_t $tmp760 = $tmp759.value;
frost$collections$IdentityMap$Entry* $tmp761 = $tmp757[$tmp760];
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$collections$IdentityMap$Entry* $tmp762 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local3) = $tmp761;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:274
goto block6;
block6:;
frost$collections$IdentityMap$Entry* $tmp763 = *(&local3);
frost$core$Bit $tmp764 = (frost$core$Bit) {$tmp763 != NULL};
bool $tmp765 = $tmp764.value;
if ($tmp765) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:275
frost$core$MutableString* $tmp766 = *(&local0);
frost$core$String* $tmp767 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp766, $tmp767);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:276
frost$collections$IdentityMap$Entry* $tmp768 = *(&local3);
frost$core$Object** $tmp769 = &$tmp768->key;
frost$core$Object* $tmp770 = *$tmp769;
frost$core$Bit $tmp771 = (frost$core$Bit) {true};
bool $tmp772 = $tmp771.value;
if ($tmp772) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:277
frost$core$MutableString* $tmp773 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp774 = *(&local3);
frost$core$Object** $tmp775 = &$tmp774->key;
frost$core$Object* $tmp776 = *$tmp775;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IdentityMap.frost:277:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn778 $tmp777 = ($fn778) $tmp776->$class->vtable[0];
frost$core$String* $tmp779 = $tmp777($tmp776);
frost$core$MutableString$append$frost$core$String($tmp773, $tmp779);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:280
frost$core$MutableString* $tmp780 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp780, &$s781);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:282
frost$core$MutableString* $tmp782 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp782, &$s783);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:283
frost$collections$IdentityMap$Entry* $tmp784 = *(&local3);
frost$core$Object** $tmp785 = &$tmp784->value;
frost$core$Object* $tmp786 = *$tmp785;
frost$core$Bit $tmp787 = (frost$core$Bit) {true};
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:284
frost$core$MutableString* $tmp789 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp790 = *(&local3);
frost$core$Object** $tmp791 = &$tmp790->value;
frost$core$Object* $tmp792 = *$tmp791;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from IdentityMap.frost:284:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn794 $tmp793 = ($fn794) $tmp792->$class->vtable[0];
frost$core$String* $tmp795 = $tmp793($tmp792);
frost$core$MutableString$append$frost$core$String($tmp789, $tmp795);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
goto block14;
block15:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:287
frost$core$MutableString* $tmp796 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp796, &$s797);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:289
frost$collections$IdentityMap$Entry* $tmp798 = *(&local3);
frost$collections$IdentityMap$Entry** $tmp799 = &$tmp798->next;
frost$collections$IdentityMap$Entry* $tmp800 = *$tmp799;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$collections$IdentityMap$Entry* $tmp801 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
*(&local3) = $tmp800;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s802));
frost$core$String* $tmp803 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
*(&local1) = &$s804;
goto block6;
block8:;
frost$collections$IdentityMap$Entry* $tmp805 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Int $tmp806 = *(&local2);
int64_t $tmp807 = $tmp742.value;
int64_t $tmp808 = $tmp806.value;
int64_t $tmp809 = $tmp807 - $tmp808;
frost$core$Int $tmp810 = (frost$core$Int) {$tmp809};
if ($tmp744) goto block18; else goto block19;
block18:;
int64_t $tmp811 = $tmp810.value;
int64_t $tmp812 = $tmp745.value;
bool $tmp813 = $tmp811 >= $tmp812;
frost$core$Bit $tmp814 = (frost$core$Bit) {$tmp813};
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block17; else goto block2;
block19:;
int64_t $tmp816 = $tmp810.value;
int64_t $tmp817 = $tmp745.value;
bool $tmp818 = $tmp816 > $tmp817;
frost$core$Bit $tmp819 = (frost$core$Bit) {$tmp818};
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block17; else goto block2;
block17:;
int64_t $tmp821 = $tmp806.value;
int64_t $tmp822 = $tmp745.value;
int64_t $tmp823 = $tmp821 + $tmp822;
frost$core$Int $tmp824 = (frost$core$Int) {$tmp823};
*(&local2) = $tmp824;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:293
frost$core$MutableString* $tmp825 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp825, &$s826);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/IdentityMap.frost:294
frost$core$MutableString* $tmp827 = *(&local0);
frost$core$String* $tmp828 = frost$core$MutableString$finish$R$frost$core$String($tmp827);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$String* $tmp829 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp830 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp828;

}

