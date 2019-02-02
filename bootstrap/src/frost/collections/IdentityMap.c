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


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, 288545962238954754, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s678 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s680 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s736 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };

void frost$collections$IdentityMap$init(frost$collections$IdentityMap* param0) {

frost$core$Int64 local0;
// line 89
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// line 95
frost$core$Int64* $tmp4 = &param0->changeCount;
frost$core$Int64 $tmp5 = *$tmp4;
frost$core$Int64 $tmp6 = (frost$core$Int64) {1};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
frost$core$Int64 $tmp10 = (frost$core$Int64) {$tmp9};
frost$core$Int64* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// line 96
frost$core$Int64 $tmp12 = (frost$core$Int64) {0};
frost$core$Int64* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// line 97
frost$core$Int64 $tmp14 = (frost$core$Int64) {16};
frost$core$Int64* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// line 98
frost$core$Int64* $tmp16 = &param0->bucketCount;
frost$core$Int64 $tmp17 = *$tmp16;
int64_t $tmp18 = $tmp17.value;
frost$collections$IdentityMap$Entry** $tmp19 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp18 * 8));
frost$collections$IdentityMap$Entry*** $tmp20 = &param0->contents;
*$tmp20 = $tmp19;
// line 99
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
frost$core$UInt64 $tmp31 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp30);
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
// line 100
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
frost$core$UInt64 $tmp52 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp51);
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
// line 102
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
// line 107
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
frost$core$UInt64 $tmp90 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp89);
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
// line 108
frost$collections$IdentityMap$Entry*** $tmp101 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp102 = *$tmp101;
frost$core$Int64 $tmp103 = *(&local0);
int64_t $tmp104 = $tmp103.value;
frost$collections$IdentityMap$Entry* $tmp105 = $tmp102[$tmp104];
frost$core$Bit $tmp106 = frost$core$Bit$init$builtin_bit($tmp105 != NULL);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block6; else goto block7;
block6:;
// line 109
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
frost$core$UInt64 $tmp118 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp117);
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
// line 112
frost$collections$IdentityMap$Entry*** $tmp133 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp134 = *$tmp133;
frostFree($tmp134);
// line 106
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Int64 frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

// line 120
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
// line 125
frost$core$Int64 $tmp139 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp139;
// line 126
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
// line 127
goto block1;
block1:;
frost$collections$IdentityMap$Entry* $tmp146 = *(&local1);
frost$core$Bit $tmp147 = frost$core$Bit$init$builtin_bit($tmp146 != NULL);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block4; else goto block3;
block4:;
frost$collections$IdentityMap$Entry* $tmp149 = *(&local1);
frost$core$Object** $tmp150 = &$tmp149->key;
frost$core$Object* $tmp151 = *$tmp150;
bool $tmp152 = $tmp151 != param1;
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit($tmp152);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block2; else goto block3;
block2:;
// line 128
frost$collections$IdentityMap$Entry* $tmp155 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp156 = &$tmp155->next;
frost$collections$IdentityMap$Entry* $tmp157 = *$tmp156;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$collections$IdentityMap$Entry* $tmp158 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local1) = $tmp157;
goto block1;
block3:;
// line 130
frost$collections$IdentityMap$Entry* $tmp159 = *(&local1);
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit($tmp159 != NULL);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block5; else goto block7;
block5:;
// line 131
frost$collections$IdentityMap$Entry* $tmp162 = *(&local1);
frost$core$Object** $tmp163 = &$tmp162->value;
frost$core$Object* $tmp164 = *$tmp163;
frost$core$Frost$ref$frost$core$Object$Q($tmp164);
frost$collections$IdentityMap$Entry* $tmp165 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp164;
block7:;
// line 1
// line 134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$IdentityMap$Entry* $tmp166 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block6:;
goto block8;
block8:;

}
frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
// line 140
frost$core$Int64 $tmp167 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp167;
// line 141
frost$collections$IdentityMap$Entry*** $tmp168 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp169 = *$tmp168;
frost$core$Int64 $tmp170 = *(&local0);
int64_t $tmp171 = $tmp170.value;
frost$collections$IdentityMap$Entry* $tmp172 = $tmp169[$tmp171];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$collections$IdentityMap$Entry* $tmp173 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local1) = $tmp172;
// line 142
goto block1;
block1:;
frost$collections$IdentityMap$Entry* $tmp174 = *(&local1);
frost$core$Bit $tmp175 = frost$core$Bit$init$builtin_bit($tmp174 != NULL);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block4; else goto block3;
block4:;
frost$collections$IdentityMap$Entry* $tmp177 = *(&local1);
frost$core$Object** $tmp178 = &$tmp177->key;
frost$core$Object* $tmp179 = *$tmp178;
bool $tmp180 = $tmp179 != param1;
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit($tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block2; else goto block3;
block2:;
// line 143
frost$collections$IdentityMap$Entry* $tmp183 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp184 = &$tmp183->next;
frost$collections$IdentityMap$Entry* $tmp185 = *$tmp184;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$collections$IdentityMap$Entry* $tmp186 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local1) = $tmp185;
goto block1;
block3:;
// line 145
frost$collections$IdentityMap$Entry* $tmp187 = *(&local1);
frost$core$Bit $tmp188 = frost$core$Bit$init$builtin_bit($tmp187 != NULL);
frost$collections$IdentityMap$Entry* $tmp189 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp188;

}
void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(frost$collections$IdentityMap* param0, frost$core$Object* param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$collections$IdentityMap$Entry* local2 = NULL;
// line 150
frost$core$Int64* $tmp190 = &param0->changeCount;
frost$core$Int64 $tmp191 = *$tmp190;
frost$core$Int64 $tmp192 = (frost$core$Int64) {1};
int64_t $tmp193 = $tmp191.value;
int64_t $tmp194 = $tmp192.value;
int64_t $tmp195 = $tmp193 + $tmp194;
frost$core$Int64 $tmp196 = (frost$core$Int64) {$tmp195};
frost$core$Int64* $tmp197 = &param0->changeCount;
*$tmp197 = $tmp196;
// line 151
frost$core$Int64 $tmp198 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp198;
// line 152
frost$collections$IdentityMap$Entry*** $tmp199 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp200 = *$tmp199;
frost$core$Int64 $tmp201 = *(&local0);
int64_t $tmp202 = $tmp201.value;
frost$collections$IdentityMap$Entry* $tmp203 = $tmp200[$tmp202];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$collections$IdentityMap$Entry* $tmp204 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local1) = $tmp203;
// line 153
goto block1;
block1:;
frost$collections$IdentityMap$Entry* $tmp205 = *(&local1);
frost$core$Bit $tmp206 = frost$core$Bit$init$builtin_bit($tmp205 != NULL);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block4; else goto block3;
block4:;
frost$collections$IdentityMap$Entry* $tmp208 = *(&local1);
frost$core$Object** $tmp209 = &$tmp208->key;
frost$core$Object* $tmp210 = *$tmp209;
bool $tmp211 = $tmp210 != param1;
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit($tmp211);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block2; else goto block3;
block2:;
// line 154
frost$collections$IdentityMap$Entry* $tmp214 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp215 = &$tmp214->next;
frost$collections$IdentityMap$Entry* $tmp216 = *$tmp215;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$collections$IdentityMap$Entry* $tmp217 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local1) = $tmp216;
goto block1;
block3:;
// line 156
frost$collections$IdentityMap$Entry* $tmp218 = *(&local1);
frost$core$Bit $tmp219 = frost$core$Bit$init$builtin_bit($tmp218 == NULL);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block5; else goto block7;
block5:;
// line 157
frost$collections$IdentityMap$Entry*** $tmp221 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp222 = *$tmp221;
frost$core$Int64 $tmp223 = *(&local0);
int64_t $tmp224 = $tmp223.value;
frost$collections$IdentityMap$Entry* $tmp225 = $tmp222[$tmp224];
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$collections$IdentityMap$Entry* $tmp226 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local2) = $tmp225;
// line 158
FROST_ASSERT(40 == sizeof(frost$collections$IdentityMap$Entry));
frost$collections$IdentityMap$Entry* $tmp227 = (frost$collections$IdentityMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$IdentityMap$Entry$class);
frost$collections$IdentityMap$Entry$init$frost$collections$IdentityMap$Entry$K$frost$collections$IdentityMap$Entry$V($tmp227, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$collections$IdentityMap$Entry* $tmp228 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local1) = $tmp227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// line 159
frost$collections$IdentityMap$Entry* $tmp229 = *(&local1);
frost$collections$IdentityMap$Entry* $tmp230 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$collections$IdentityMap$Entry** $tmp231 = &$tmp229->next;
frost$collections$IdentityMap$Entry* $tmp232 = *$tmp231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$collections$IdentityMap$Entry** $tmp233 = &$tmp229->next;
*$tmp233 = $tmp230;
// line 160
frost$collections$IdentityMap$Entry*** $tmp234 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp235 = *$tmp234;
frost$core$Int64 $tmp236 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp237 = *(&local1);
int64_t $tmp238 = $tmp236.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$collections$IdentityMap$Entry* $tmp239 = $tmp235[$tmp238];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
$tmp235[$tmp238] = $tmp237;
// line 161
frost$collections$IdentityMap$incrementCount(param0);
frost$collections$IdentityMap$Entry* $tmp240 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block6;
block7:;
// line 1
// line 164
frost$collections$IdentityMap$Entry* $tmp241 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp242 = &$tmp241->value;
frost$core$Object* $tmp243 = *$tmp242;
frost$core$Frost$unref$frost$core$Object$Q($tmp243);
frost$core$Object** $tmp244 = &$tmp241->value;
*$tmp244 = param2;
goto block6;
block6:;
frost$collections$IdentityMap$Entry* $tmp245 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$collections$IdentityMap$Entry* local2 = NULL;
frost$collections$IdentityMap$Entry* local3 = NULL;
// line 170
frost$core$Int64* $tmp246 = &param0->changeCount;
frost$core$Int64 $tmp247 = *$tmp246;
frost$core$Int64 $tmp248 = (frost$core$Int64) {1};
int64_t $tmp249 = $tmp247.value;
int64_t $tmp250 = $tmp248.value;
int64_t $tmp251 = $tmp249 + $tmp250;
frost$core$Int64 $tmp252 = (frost$core$Int64) {$tmp251};
frost$core$Int64* $tmp253 = &param0->changeCount;
*$tmp253 = $tmp252;
// line 171
frost$core$Int64 $tmp254 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp254;
// line 172
frost$collections$IdentityMap$Entry*** $tmp255 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp256 = *$tmp255;
frost$core$Int64 $tmp257 = *(&local0);
int64_t $tmp258 = $tmp257.value;
frost$collections$IdentityMap$Entry* $tmp259 = $tmp256[$tmp258];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$collections$IdentityMap$Entry* $tmp260 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local1) = $tmp259;
// line 174
frost$collections$IdentityMap$Entry* $tmp261 = *(&local1);
frost$core$Bit $tmp262 = frost$core$Bit$init$builtin_bit($tmp261 == NULL);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block1; else goto block2;
block1:;
// line 175
frost$collections$IdentityMap$Entry* $tmp264 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block2:;
// line 178
frost$collections$IdentityMap$Entry* $tmp265 = *(&local1);
frost$core$Object** $tmp266 = &$tmp265->key;
frost$core$Object* $tmp267 = *$tmp266;
bool $tmp268 = $tmp267 == param1;
frost$core$Bit $tmp269 = frost$core$Bit$init$builtin_bit($tmp268);
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block3; else goto block4;
block3:;
// line 179
frost$collections$IdentityMap$Entry*** $tmp271 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp272 = *$tmp271;
frost$core$Int64 $tmp273 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp274 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp275 = &$tmp274->next;
frost$collections$IdentityMap$Entry* $tmp276 = *$tmp275;
int64_t $tmp277 = $tmp273.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$collections$IdentityMap$Entry* $tmp278 = $tmp272[$tmp277];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
$tmp272[$tmp277] = $tmp276;
// line 180
frost$core$Int64* $tmp279 = &param0->_count;
frost$core$Int64 $tmp280 = *$tmp279;
frost$core$Int64 $tmp281 = (frost$core$Int64) {1};
int64_t $tmp282 = $tmp280.value;
int64_t $tmp283 = $tmp281.value;
int64_t $tmp284 = $tmp282 - $tmp283;
frost$core$Int64 $tmp285 = (frost$core$Int64) {$tmp284};
frost$core$Int64* $tmp286 = &param0->_count;
*$tmp286 = $tmp285;
// line 181
frost$collections$IdentityMap$Entry* $tmp287 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block4:;
// line 183
goto block5;
block5:;
// line 184
frost$collections$IdentityMap$Entry* $tmp288 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp289 = &$tmp288->next;
frost$collections$IdentityMap$Entry* $tmp290 = *$tmp289;
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$collections$IdentityMap$Entry* $tmp291 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local2) = $tmp290;
// line 185
frost$collections$IdentityMap$Entry* $tmp292 = *(&local2);
frost$core$Bit $tmp293 = frost$core$Bit$init$builtin_bit($tmp292 == NULL);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block7; else goto block8;
block7:;
// line 187
frost$collections$IdentityMap$Entry* $tmp295 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp296 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block8:;
// line 189
frost$collections$IdentityMap$Entry* $tmp297 = *(&local2);
frost$core$Object** $tmp298 = &$tmp297->key;
frost$core$Object* $tmp299 = *$tmp298;
bool $tmp300 = $tmp299 == param1;
frost$core$Bit $tmp301 = frost$core$Bit$init$builtin_bit($tmp300);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block9; else goto block10;
block9:;
// line 191
frost$collections$IdentityMap$Entry* $tmp303 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block6;
block10:;
// line 193
frost$collections$IdentityMap$Entry* $tmp304 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$collections$IdentityMap$Entry* $tmp305 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local1) = $tmp304;
frost$collections$IdentityMap$Entry* $tmp306 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block5;
block6:;
// line 196
frost$collections$IdentityMap$Entry* $tmp307 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp308 = &$tmp307->next;
frost$collections$IdentityMap$Entry* $tmp309 = *$tmp308;
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$collections$IdentityMap$Entry* $tmp310 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
*(&local3) = $tmp309;
// line 197
frost$collections$IdentityMap$Entry* $tmp311 = *(&local3);
frost$core$Bit $tmp312 = frost$core$Bit$init$builtin_bit($tmp311 != NULL);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp314 = (frost$core$Int64) {197};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s315, $tmp314);
abort(); // unreachable
block11:;
// line 198
frost$collections$IdentityMap$Entry* $tmp316 = *(&local1);
frost$collections$IdentityMap$Entry* $tmp317 = *(&local3);
frost$collections$IdentityMap$Entry** $tmp318 = &$tmp317->next;
frost$collections$IdentityMap$Entry* $tmp319 = *$tmp318;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
frost$collections$IdentityMap$Entry** $tmp320 = &$tmp316->next;
frost$collections$IdentityMap$Entry* $tmp321 = *$tmp320;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$collections$IdentityMap$Entry** $tmp322 = &$tmp316->next;
*$tmp322 = $tmp319;
// line 199
frost$core$Int64* $tmp323 = &param0->_count;
frost$core$Int64 $tmp324 = *$tmp323;
frost$core$Int64 $tmp325 = (frost$core$Int64) {1};
int64_t $tmp326 = $tmp324.value;
int64_t $tmp327 = $tmp325.value;
int64_t $tmp328 = $tmp326 - $tmp327;
frost$core$Int64 $tmp329 = (frost$core$Int64) {$tmp328};
frost$core$Int64* $tmp330 = &param0->_count;
*$tmp330 = $tmp329;
frost$collections$IdentityMap$Entry* $tmp331 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp332 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$clear(frost$collections$IdentityMap* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 204
frost$core$Int64* $tmp333 = &param0->changeCount;
frost$core$Int64 $tmp334 = *$tmp333;
frost$core$Int64 $tmp335 = (frost$core$Int64) {1};
int64_t $tmp336 = $tmp334.value;
int64_t $tmp337 = $tmp335.value;
int64_t $tmp338 = $tmp336 + $tmp337;
frost$core$Int64 $tmp339 = (frost$core$Int64) {$tmp338};
frost$core$Int64* $tmp340 = &param0->changeCount;
*$tmp340 = $tmp339;
// line 205
frost$core$Int64 $tmp341 = (frost$core$Int64) {0};
frost$core$Int64* $tmp342 = &param0->_count;
*$tmp342 = $tmp341;
// line 206
frost$core$Int64 $tmp343 = (frost$core$Int64) {0};
frost$core$Int64* $tmp344 = &param0->bucketCount;
frost$core$Int64 $tmp345 = *$tmp344;
frost$core$Bit $tmp346 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp347 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp343, $tmp345, $tmp346);
frost$core$Int64 $tmp348 = $tmp347.min;
*(&local0) = $tmp348;
frost$core$Int64 $tmp349 = $tmp347.max;
frost$core$Bit $tmp350 = $tmp347.inclusive;
bool $tmp351 = $tmp350.value;
frost$core$Int64 $tmp352 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp353 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp352);
if ($tmp351) goto block4; else goto block5;
block4:;
int64_t $tmp354 = $tmp348.value;
int64_t $tmp355 = $tmp349.value;
bool $tmp356 = $tmp354 <= $tmp355;
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp356};
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block1; else goto block2;
block5:;
int64_t $tmp359 = $tmp348.value;
int64_t $tmp360 = $tmp349.value;
bool $tmp361 = $tmp359 < $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block1; else goto block2;
block1:;
// line 207
frost$collections$IdentityMap$Entry*** $tmp364 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp365 = *$tmp364;
frost$core$Int64 $tmp366 = *(&local0);
int64_t $tmp367 = $tmp366.value;
frost$collections$IdentityMap$Entry* $tmp368 = $tmp365[$tmp367];
frost$core$Bit $tmp369 = frost$core$Bit$init$builtin_bit($tmp368 != NULL);
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block6; else goto block7;
block6:;
// line 208
frost$collections$IdentityMap$Entry*** $tmp371 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp372 = *$tmp371;
frost$core$Int64 $tmp373 = *(&local0);
int64_t $tmp374 = $tmp373.value;
frost$collections$IdentityMap$Entry* $tmp375 = $tmp372[$tmp374];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp376 = *(&local0);
int64_t $tmp377 = $tmp349.value;
int64_t $tmp378 = $tmp376.value;
int64_t $tmp379 = $tmp377 - $tmp378;
frost$core$Int64 $tmp380 = (frost$core$Int64) {$tmp379};
frost$core$UInt64 $tmp381 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp380);
if ($tmp351) goto block9; else goto block10;
block9:;
uint64_t $tmp382 = $tmp381.value;
uint64_t $tmp383 = $tmp353.value;
bool $tmp384 = $tmp382 >= $tmp383;
frost$core$Bit $tmp385 = (frost$core$Bit) {$tmp384};
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block8; else goto block2;
block10:;
uint64_t $tmp387 = $tmp381.value;
uint64_t $tmp388 = $tmp353.value;
bool $tmp389 = $tmp387 > $tmp388;
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block8; else goto block2;
block8:;
int64_t $tmp392 = $tmp376.value;
int64_t $tmp393 = $tmp352.value;
int64_t $tmp394 = $tmp392 + $tmp393;
frost$core$Int64 $tmp395 = (frost$core$Int64) {$tmp394};
*(&local0) = $tmp395;
goto block1;
block2:;
// line 211
frost$collections$IdentityMap$Entry*** $tmp396 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp397 = *$tmp396;
frostFree($tmp397);
// line 212
frost$core$Int64 $tmp398 = (frost$core$Int64) {16};
frost$core$Int64* $tmp399 = &param0->bucketCount;
*$tmp399 = $tmp398;
// line 213
frost$core$Int64* $tmp400 = &param0->bucketCount;
frost$core$Int64 $tmp401 = *$tmp400;
int64_t $tmp402 = $tmp401.value;
frost$collections$IdentityMap$Entry** $tmp403 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp402 * 8));
frost$collections$IdentityMap$Entry*** $tmp404 = &param0->contents;
*$tmp404 = $tmp403;
// line 214
frost$core$Int64 $tmp405 = (frost$core$Int64) {0};
frost$core$Int64* $tmp406 = &param0->bucketCount;
frost$core$Int64 $tmp407 = *$tmp406;
frost$core$Bit $tmp408 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp409 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp405, $tmp407, $tmp408);
frost$core$Int64 $tmp410 = $tmp409.min;
*(&local1) = $tmp410;
frost$core$Int64 $tmp411 = $tmp409.max;
frost$core$Bit $tmp412 = $tmp409.inclusive;
bool $tmp413 = $tmp412.value;
frost$core$Int64 $tmp414 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp415 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp414);
if ($tmp413) goto block14; else goto block15;
block14:;
int64_t $tmp416 = $tmp410.value;
int64_t $tmp417 = $tmp411.value;
bool $tmp418 = $tmp416 <= $tmp417;
frost$core$Bit $tmp419 = (frost$core$Bit) {$tmp418};
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block11; else goto block12;
block15:;
int64_t $tmp421 = $tmp410.value;
int64_t $tmp422 = $tmp411.value;
bool $tmp423 = $tmp421 < $tmp422;
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block11; else goto block12;
block11:;
// line 215
frost$collections$IdentityMap$Entry*** $tmp426 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp427 = *$tmp426;
frost$core$Int64 $tmp428 = *(&local1);
int64_t $tmp429 = $tmp428.value;
frost$collections$IdentityMap$Entry* $tmp430 = $tmp427[$tmp429];
frost$core$Bit $tmp431 = frost$core$Bit$init$builtin_bit($tmp430 != NULL);
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block16; else goto block17;
block16:;
// line 216
frost$collections$IdentityMap$Entry*** $tmp433 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp434 = *$tmp433;
frost$core$Int64 $tmp435 = *(&local1);
int64_t $tmp436 = $tmp435.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp437 = $tmp434[$tmp436];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
$tmp434[$tmp436] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block17;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp438 = *(&local1);
int64_t $tmp439 = $tmp411.value;
int64_t $tmp440 = $tmp438.value;
int64_t $tmp441 = $tmp439 - $tmp440;
frost$core$Int64 $tmp442 = (frost$core$Int64) {$tmp441};
frost$core$UInt64 $tmp443 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp442);
if ($tmp413) goto block19; else goto block20;
block19:;
uint64_t $tmp444 = $tmp443.value;
uint64_t $tmp445 = $tmp415.value;
bool $tmp446 = $tmp444 >= $tmp445;
frost$core$Bit $tmp447 = (frost$core$Bit) {$tmp446};
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block18; else goto block12;
block20:;
uint64_t $tmp449 = $tmp443.value;
uint64_t $tmp450 = $tmp415.value;
bool $tmp451 = $tmp449 > $tmp450;
frost$core$Bit $tmp452 = (frost$core$Bit) {$tmp451};
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block18; else goto block12;
block18:;
int64_t $tmp454 = $tmp438.value;
int64_t $tmp455 = $tmp414.value;
int64_t $tmp456 = $tmp454 + $tmp455;
frost$core$Int64 $tmp457 = (frost$core$Int64) {$tmp456};
*(&local1) = $tmp457;
goto block11;
block12:;
// line 219
frost$core$Int64* $tmp458 = &param0->bucketCount;
frost$core$Int64 $tmp459 = *$tmp458;
frost$core$Int64 $tmp460 = (frost$core$Int64) {3};
int64_t $tmp461 = $tmp459.value;
int64_t $tmp462 = $tmp460.value;
int64_t $tmp463 = $tmp461 * $tmp462;
frost$core$Int64 $tmp464 = (frost$core$Int64) {$tmp463};
frost$core$Int64 $tmp465 = (frost$core$Int64) {4};
int64_t $tmp466 = $tmp464.value;
int64_t $tmp467 = $tmp465.value;
int64_t $tmp468 = $tmp466 / $tmp467;
frost$core$Int64 $tmp469 = (frost$core$Int64) {$tmp468};
frost$core$Int64* $tmp470 = &param0->threshold;
*$tmp470 = $tmp469;
return;

}
void frost$collections$IdentityMap$incrementCount(frost$collections$IdentityMap* param0) {

frost$collections$IdentityMap$Entry** local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$collections$IdentityMap$Entry* local4 = NULL;
frost$core$Int64 local5;
// line 224
frost$core$Int64* $tmp471 = &param0->_count;
frost$core$Int64 $tmp472 = *$tmp471;
frost$core$Int64 $tmp473 = (frost$core$Int64) {1};
int64_t $tmp474 = $tmp472.value;
int64_t $tmp475 = $tmp473.value;
int64_t $tmp476 = $tmp474 + $tmp475;
frost$core$Int64 $tmp477 = (frost$core$Int64) {$tmp476};
frost$core$Int64* $tmp478 = &param0->_count;
*$tmp478 = $tmp477;
// line 225
frost$core$Int64* $tmp479 = &param0->_count;
frost$core$Int64 $tmp480 = *$tmp479;
frost$core$Int64* $tmp481 = &param0->threshold;
frost$core$Int64 $tmp482 = *$tmp481;
int64_t $tmp483 = $tmp480.value;
int64_t $tmp484 = $tmp482.value;
bool $tmp485 = $tmp483 >= $tmp484;
frost$core$Bit $tmp486 = (frost$core$Bit) {$tmp485};
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block1; else goto block2;
block1:;
// line 226
frost$collections$IdentityMap$Entry*** $tmp488 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp489 = *$tmp488;
*(&local0) = $tmp489;
// line 227
frost$core$Int64* $tmp490 = &param0->bucketCount;
frost$core$Int64 $tmp491 = *$tmp490;
*(&local1) = $tmp491;
// line 228
frost$core$Int64* $tmp492 = &param0->bucketCount;
frost$core$Int64 $tmp493 = *$tmp492;
frost$core$Int64 $tmp494 = (frost$core$Int64) {2};
int64_t $tmp495 = $tmp493.value;
int64_t $tmp496 = $tmp494.value;
int64_t $tmp497 = $tmp495 * $tmp496;
frost$core$Int64 $tmp498 = (frost$core$Int64) {$tmp497};
frost$core$Int64* $tmp499 = &param0->bucketCount;
*$tmp499 = $tmp498;
// line 229
frost$core$Int64* $tmp500 = &param0->bucketCount;
frost$core$Int64 $tmp501 = *$tmp500;
int64_t $tmp502 = $tmp501.value;
frost$collections$IdentityMap$Entry** $tmp503 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp502 * 8));
frost$collections$IdentityMap$Entry*** $tmp504 = &param0->contents;
*$tmp504 = $tmp503;
// line 230
frost$core$Int64 $tmp505 = (frost$core$Int64) {0};
frost$core$Int64* $tmp506 = &param0->bucketCount;
frost$core$Int64 $tmp507 = *$tmp506;
frost$core$Bit $tmp508 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp509 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp505, $tmp507, $tmp508);
frost$core$Int64 $tmp510 = $tmp509.min;
*(&local2) = $tmp510;
frost$core$Int64 $tmp511 = $tmp509.max;
frost$core$Bit $tmp512 = $tmp509.inclusive;
bool $tmp513 = $tmp512.value;
frost$core$Int64 $tmp514 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp515 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp514);
if ($tmp513) goto block6; else goto block7;
block6:;
int64_t $tmp516 = $tmp510.value;
int64_t $tmp517 = $tmp511.value;
bool $tmp518 = $tmp516 <= $tmp517;
frost$core$Bit $tmp519 = (frost$core$Bit) {$tmp518};
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block3; else goto block4;
block7:;
int64_t $tmp521 = $tmp510.value;
int64_t $tmp522 = $tmp511.value;
bool $tmp523 = $tmp521 < $tmp522;
frost$core$Bit $tmp524 = (frost$core$Bit) {$tmp523};
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block3; else goto block4;
block3:;
// line 231
frost$collections$IdentityMap$Entry*** $tmp526 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp527 = *$tmp526;
frost$core$Int64 $tmp528 = *(&local2);
int64_t $tmp529 = $tmp528.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp530 = $tmp527[$tmp529];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
$tmp527[$tmp529] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp531 = *(&local2);
int64_t $tmp532 = $tmp511.value;
int64_t $tmp533 = $tmp531.value;
int64_t $tmp534 = $tmp532 - $tmp533;
frost$core$Int64 $tmp535 = (frost$core$Int64) {$tmp534};
frost$core$UInt64 $tmp536 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp535);
if ($tmp513) goto block9; else goto block10;
block9:;
uint64_t $tmp537 = $tmp536.value;
uint64_t $tmp538 = $tmp515.value;
bool $tmp539 = $tmp537 >= $tmp538;
frost$core$Bit $tmp540 = (frost$core$Bit) {$tmp539};
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block8; else goto block4;
block10:;
uint64_t $tmp542 = $tmp536.value;
uint64_t $tmp543 = $tmp515.value;
bool $tmp544 = $tmp542 > $tmp543;
frost$core$Bit $tmp545 = (frost$core$Bit) {$tmp544};
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block8; else goto block4;
block8:;
int64_t $tmp547 = $tmp531.value;
int64_t $tmp548 = $tmp514.value;
int64_t $tmp549 = $tmp547 + $tmp548;
frost$core$Int64 $tmp550 = (frost$core$Int64) {$tmp549};
*(&local2) = $tmp550;
goto block3;
block4:;
// line 233
frost$core$Int64* $tmp551 = &param0->threshold;
frost$core$Int64 $tmp552 = *$tmp551;
frost$core$Int64 $tmp553 = (frost$core$Int64) {2};
int64_t $tmp554 = $tmp552.value;
int64_t $tmp555 = $tmp553.value;
int64_t $tmp556 = $tmp554 * $tmp555;
frost$core$Int64 $tmp557 = (frost$core$Int64) {$tmp556};
frost$core$Int64* $tmp558 = &param0->threshold;
*$tmp558 = $tmp557;
// line 234
frost$core$Int64 $tmp559 = (frost$core$Int64) {0};
frost$core$Int64* $tmp560 = &param0->_count;
*$tmp560 = $tmp559;
// line 235
frost$core$Int64 $tmp561 = (frost$core$Int64) {0};
frost$core$Int64 $tmp562 = *(&local1);
frost$core$Bit $tmp563 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp564 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp561, $tmp562, $tmp563);
frost$core$Int64 $tmp565 = $tmp564.min;
*(&local3) = $tmp565;
frost$core$Int64 $tmp566 = $tmp564.max;
frost$core$Bit $tmp567 = $tmp564.inclusive;
bool $tmp568 = $tmp567.value;
frost$core$Int64 $tmp569 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp570 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp569);
if ($tmp568) goto block14; else goto block15;
block14:;
int64_t $tmp571 = $tmp565.value;
int64_t $tmp572 = $tmp566.value;
bool $tmp573 = $tmp571 <= $tmp572;
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573};
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block11; else goto block12;
block15:;
int64_t $tmp576 = $tmp565.value;
int64_t $tmp577 = $tmp566.value;
bool $tmp578 = $tmp576 < $tmp577;
frost$core$Bit $tmp579 = (frost$core$Bit) {$tmp578};
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block11; else goto block12;
block11:;
// line 236
frost$collections$IdentityMap$Entry** $tmp581 = *(&local0);
frost$core$Int64 $tmp582 = *(&local3);
int64_t $tmp583 = $tmp582.value;
frost$collections$IdentityMap$Entry* $tmp584 = $tmp581[$tmp583];
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$collections$IdentityMap$Entry* $tmp585 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local4) = $tmp584;
// line 237
goto block16;
block16:;
frost$collections$IdentityMap$Entry* $tmp586 = *(&local4);
frost$core$Bit $tmp587 = frost$core$Bit$init$builtin_bit($tmp586 != NULL);
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block17; else goto block18;
block17:;
// line 238
frost$collections$IdentityMap$Entry* $tmp589 = *(&local4);
frost$core$Object** $tmp590 = &$tmp589->key;
frost$core$Object* $tmp591 = *$tmp590;
frost$collections$IdentityMap$Entry* $tmp592 = *(&local4);
frost$core$Object** $tmp593 = &$tmp592->value;
frost$core$Object* $tmp594 = *$tmp593;
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(param0, $tmp591, $tmp594);
// line 239
frost$collections$IdentityMap$Entry* $tmp595 = *(&local4);
frost$collections$IdentityMap$Entry** $tmp596 = &$tmp595->next;
frost$collections$IdentityMap$Entry* $tmp597 = *$tmp596;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$collections$IdentityMap$Entry* $tmp598 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local4) = $tmp597;
goto block16;
block18:;
frost$collections$IdentityMap$Entry* $tmp599 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block13;
block13:;
frost$core$Int64 $tmp600 = *(&local3);
int64_t $tmp601 = $tmp566.value;
int64_t $tmp602 = $tmp600.value;
int64_t $tmp603 = $tmp601 - $tmp602;
frost$core$Int64 $tmp604 = (frost$core$Int64) {$tmp603};
frost$core$UInt64 $tmp605 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp604);
if ($tmp568) goto block20; else goto block21;
block20:;
uint64_t $tmp606 = $tmp605.value;
uint64_t $tmp607 = $tmp570.value;
bool $tmp608 = $tmp606 >= $tmp607;
frost$core$Bit $tmp609 = (frost$core$Bit) {$tmp608};
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block19; else goto block12;
block21:;
uint64_t $tmp611 = $tmp605.value;
uint64_t $tmp612 = $tmp570.value;
bool $tmp613 = $tmp611 > $tmp612;
frost$core$Bit $tmp614 = (frost$core$Bit) {$tmp613};
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block19; else goto block12;
block19:;
int64_t $tmp616 = $tmp600.value;
int64_t $tmp617 = $tmp569.value;
int64_t $tmp618 = $tmp616 + $tmp617;
frost$core$Int64 $tmp619 = (frost$core$Int64) {$tmp618};
*(&local3) = $tmp619;
goto block11;
block12:;
// line 242
frost$core$Int64 $tmp620 = (frost$core$Int64) {0};
frost$core$Int64 $tmp621 = *(&local1);
frost$core$Bit $tmp622 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp623 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp620, $tmp621, $tmp622);
frost$core$Int64 $tmp624 = $tmp623.min;
*(&local5) = $tmp624;
frost$core$Int64 $tmp625 = $tmp623.max;
frost$core$Bit $tmp626 = $tmp623.inclusive;
bool $tmp627 = $tmp626.value;
frost$core$Int64 $tmp628 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp629 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp628);
if ($tmp627) goto block25; else goto block26;
block25:;
int64_t $tmp630 = $tmp624.value;
int64_t $tmp631 = $tmp625.value;
bool $tmp632 = $tmp630 <= $tmp631;
frost$core$Bit $tmp633 = (frost$core$Bit) {$tmp632};
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block22; else goto block23;
block26:;
int64_t $tmp635 = $tmp624.value;
int64_t $tmp636 = $tmp625.value;
bool $tmp637 = $tmp635 < $tmp636;
frost$core$Bit $tmp638 = (frost$core$Bit) {$tmp637};
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block22; else goto block23;
block22:;
// line 243
frost$collections$IdentityMap$Entry** $tmp640 = *(&local0);
frost$core$Int64 $tmp641 = *(&local5);
int64_t $tmp642 = $tmp641.value;
frost$collections$IdentityMap$Entry* $tmp643 = $tmp640[$tmp642];
frost$core$Bit $tmp644 = frost$core$Bit$init$builtin_bit($tmp643 != NULL);
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block27; else goto block28;
block27:;
// line 244
frost$collections$IdentityMap$Entry** $tmp646 = *(&local0);
frost$core$Int64 $tmp647 = *(&local5);
int64_t $tmp648 = $tmp647.value;
frost$collections$IdentityMap$Entry* $tmp649 = $tmp646[$tmp648];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
goto block28;
block28:;
goto block24;
block24:;
frost$core$Int64 $tmp650 = *(&local5);
int64_t $tmp651 = $tmp625.value;
int64_t $tmp652 = $tmp650.value;
int64_t $tmp653 = $tmp651 - $tmp652;
frost$core$Int64 $tmp654 = (frost$core$Int64) {$tmp653};
frost$core$UInt64 $tmp655 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp654);
if ($tmp627) goto block30; else goto block31;
block30:;
uint64_t $tmp656 = $tmp655.value;
uint64_t $tmp657 = $tmp629.value;
bool $tmp658 = $tmp656 >= $tmp657;
frost$core$Bit $tmp659 = (frost$core$Bit) {$tmp658};
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block29; else goto block23;
block31:;
uint64_t $tmp661 = $tmp655.value;
uint64_t $tmp662 = $tmp629.value;
bool $tmp663 = $tmp661 > $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block29; else goto block23;
block29:;
int64_t $tmp666 = $tmp650.value;
int64_t $tmp667 = $tmp628.value;
int64_t $tmp668 = $tmp666 + $tmp667;
frost$core$Int64 $tmp669 = (frost$core$Int64) {$tmp668};
*(&local5) = $tmp669;
goto block22;
block23:;
// line 247
frost$collections$IdentityMap$Entry** $tmp670 = *(&local0);
frostFree($tmp670);
goto block2;
block2:;
return;

}
frost$core$Int64 frost$collections$IdentityMap$get_count$R$frost$core$Int64(frost$collections$IdentityMap* param0) {

// line 253
frost$core$Int64* $tmp671 = &param0->_count;
frost$core$Int64 $tmp672 = *$tmp671;
return $tmp672;

}
frost$collections$Iterator* frost$collections$IdentityMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$IdentityMap$K$Cfrost$collections$IdentityMap$V$RP$GT(frost$collections$IdentityMap* param0) {

// line 258
FROST_ASSERT(40 == sizeof(frost$collections$IdentityMap$EntryIterator));
frost$collections$IdentityMap$EntryIterator* $tmp673 = (frost$collections$IdentityMap$EntryIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$IdentityMap$EntryIterator$class);
frost$collections$IdentityMap$EntryIterator$init$frost$collections$IdentityMap$LTfrost$collections$IdentityMap$EntryIterator$K$Cfrost$collections$IdentityMap$EntryIterator$V$GT($tmp673, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp673)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
return ((frost$collections$Iterator*) $tmp673);

}
frost$core$String* frost$collections$IdentityMap$get_asString$R$frost$core$String(frost$collections$IdentityMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$collections$IdentityMap$Entry* local3 = NULL;
// line 269
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp674 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp674);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
frost$core$MutableString* $tmp675 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local0) = $tmp674;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
// line 270
frost$core$MutableString* $tmp676 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp676, &$s677);
// line 271
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s678));
frost$core$String* $tmp679 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
*(&local1) = &$s680;
// line 272
frost$core$Int64 $tmp681 = (frost$core$Int64) {0};
frost$core$Int64* $tmp682 = &param0->bucketCount;
frost$core$Int64 $tmp683 = *$tmp682;
frost$core$Bit $tmp684 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp685 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp681, $tmp683, $tmp684);
frost$core$Int64 $tmp686 = $tmp685.min;
*(&local2) = $tmp686;
frost$core$Int64 $tmp687 = $tmp685.max;
frost$core$Bit $tmp688 = $tmp685.inclusive;
bool $tmp689 = $tmp688.value;
frost$core$Int64 $tmp690 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp691 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp690);
if ($tmp689) goto block4; else goto block5;
block4:;
int64_t $tmp692 = $tmp686.value;
int64_t $tmp693 = $tmp687.value;
bool $tmp694 = $tmp692 <= $tmp693;
frost$core$Bit $tmp695 = (frost$core$Bit) {$tmp694};
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block1; else goto block2;
block5:;
int64_t $tmp697 = $tmp686.value;
int64_t $tmp698 = $tmp687.value;
bool $tmp699 = $tmp697 < $tmp698;
frost$core$Bit $tmp700 = (frost$core$Bit) {$tmp699};
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block1; else goto block2;
block1:;
// line 273
frost$collections$IdentityMap$Entry*** $tmp702 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp703 = *$tmp702;
frost$core$Int64 $tmp704 = *(&local2);
int64_t $tmp705 = $tmp704.value;
frost$collections$IdentityMap$Entry* $tmp706 = $tmp703[$tmp705];
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
frost$collections$IdentityMap$Entry* $tmp707 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local3) = $tmp706;
// line 274
goto block6;
block6:;
frost$collections$IdentityMap$Entry* $tmp708 = *(&local3);
frost$core$Bit $tmp709 = frost$core$Bit$init$builtin_bit($tmp708 != NULL);
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block7; else goto block8;
block7:;
// line 275
frost$core$MutableString* $tmp711 = *(&local0);
frost$core$String* $tmp712 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp711, $tmp712);
// line 276
frost$collections$IdentityMap$Entry* $tmp713 = *(&local3);
frost$core$Object** $tmp714 = &$tmp713->key;
frost$core$Object* $tmp715 = *$tmp714;
frost$core$Bit $tmp716 = frost$core$Bit$init$builtin_bit(true);
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block9; else goto block11;
block9:;
// line 277
frost$core$MutableString* $tmp718 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp719 = *(&local3);
frost$core$Object** $tmp720 = &$tmp719->key;
frost$core$Object* $tmp721 = *$tmp720;
frost$core$MutableString$append$frost$core$Object($tmp718, $tmp721);
goto block10;
block11:;
// line 1
// line 280
frost$core$MutableString* $tmp722 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp722, &$s723);
goto block10;
block10:;
// line 282
frost$core$MutableString* $tmp724 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp724, &$s725);
// line 283
frost$collections$IdentityMap$Entry* $tmp726 = *(&local3);
frost$core$Object** $tmp727 = &$tmp726->value;
frost$core$Object* $tmp728 = *$tmp727;
frost$core$Bit $tmp729 = frost$core$Bit$init$builtin_bit(true);
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block12; else goto block14;
block12:;
// line 284
frost$core$MutableString* $tmp731 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp732 = *(&local3);
frost$core$Object** $tmp733 = &$tmp732->value;
frost$core$Object* $tmp734 = *$tmp733;
frost$core$MutableString$append$frost$core$Object($tmp731, $tmp734);
goto block13;
block14:;
// line 1
// line 287
frost$core$MutableString* $tmp735 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp735, &$s736);
goto block13;
block13:;
// line 289
frost$collections$IdentityMap$Entry* $tmp737 = *(&local3);
frost$collections$IdentityMap$Entry** $tmp738 = &$tmp737->next;
frost$collections$IdentityMap$Entry* $tmp739 = *$tmp738;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
frost$collections$IdentityMap$Entry* $tmp740 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local3) = $tmp739;
// line 290
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s741));
frost$core$String* $tmp742 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local1) = &$s743;
goto block6;
block8:;
frost$collections$IdentityMap$Entry* $tmp744 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp745 = *(&local2);
int64_t $tmp746 = $tmp687.value;
int64_t $tmp747 = $tmp745.value;
int64_t $tmp748 = $tmp746 - $tmp747;
frost$core$Int64 $tmp749 = (frost$core$Int64) {$tmp748};
frost$core$UInt64 $tmp750 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp749);
if ($tmp689) goto block16; else goto block17;
block16:;
uint64_t $tmp751 = $tmp750.value;
uint64_t $tmp752 = $tmp691.value;
bool $tmp753 = $tmp751 >= $tmp752;
frost$core$Bit $tmp754 = (frost$core$Bit) {$tmp753};
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block15; else goto block2;
block17:;
uint64_t $tmp756 = $tmp750.value;
uint64_t $tmp757 = $tmp691.value;
bool $tmp758 = $tmp756 > $tmp757;
frost$core$Bit $tmp759 = (frost$core$Bit) {$tmp758};
bool $tmp760 = $tmp759.value;
if ($tmp760) goto block15; else goto block2;
block15:;
int64_t $tmp761 = $tmp745.value;
int64_t $tmp762 = $tmp690.value;
int64_t $tmp763 = $tmp761 + $tmp762;
frost$core$Int64 $tmp764 = (frost$core$Int64) {$tmp763};
*(&local2) = $tmp764;
goto block1;
block2:;
// line 293
frost$core$MutableString* $tmp765 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp765, &$s766);
// line 294
frost$core$MutableString* $tmp767 = *(&local0);
frost$core$String* $tmp768 = frost$core$MutableString$finish$R$frost$core$String($tmp767);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$String* $tmp769 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp770 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp768;

}

