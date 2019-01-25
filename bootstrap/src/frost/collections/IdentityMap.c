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
frost$collections$IdentityMap$class_type frost$collections$IdentityMap$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$IdentityMap$_frost$collections$Map, { frost$collections$IdentityMap$get_asString$R$frost$core$String, frost$collections$IdentityMap$cleanup, frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64, frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q$shim, frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit$shim, frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V$shim, frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K$shim, frost$collections$IdentityMap$clear, frost$collections$IdentityMap$incrementCount, frost$collections$IdentityMap$get_count$R$frost$core$Int64, frost$collections$IdentityMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$K$GT$shim, frost$collections$IdentityMap$get_values$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$V$GT$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, 288545962238954754, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s678 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static frost$core$String $s680 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 17, -1268156346971224183, NULL };
static frost$core$String $s681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static frost$core$String $s685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s688 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

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
frost$collections$IdentityMap$Entry** $tmp19 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp18 * 8));
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
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp165;
block9:;
// line 1
// line 96
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$IdentityMap$Entry* $tmp167 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block8:;
goto block10;
block10:;

}
frost$core$Bit frost$collections$IdentityMap$contains$frost$collections$IdentityMap$K$R$frost$core$Bit(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$core$Bit local2;
// line 102
frost$core$Int64 $tmp168 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp168;
// line 103
frost$collections$IdentityMap$Entry*** $tmp169 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp170 = *$tmp169;
frost$core$Int64 $tmp171 = *(&local0);
int64_t $tmp172 = $tmp171.value;
frost$collections$IdentityMap$Entry* $tmp173 = $tmp170[$tmp172];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$collections$IdentityMap$Entry* $tmp174 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local1) = $tmp173;
// line 104
goto block1;
block1:;
frost$collections$IdentityMap$Entry* $tmp175 = *(&local1);
frost$core$Bit $tmp176 = frost$core$Bit$init$builtin_bit($tmp175 != NULL);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block4; else goto block5;
block4:;
frost$collections$IdentityMap$Entry* $tmp178 = *(&local1);
frost$core$Object** $tmp179 = &$tmp178->key;
frost$core$Object* $tmp180 = *$tmp179;
bool $tmp181 = $tmp180 != param1;
frost$core$Bit $tmp182 = frost$core$Bit$init$builtin_bit($tmp181);
*(&local2) = $tmp182;
goto block6;
block5:;
*(&local2) = $tmp176;
goto block6;
block6:;
frost$core$Bit $tmp183 = *(&local2);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block2; else goto block3;
block2:;
// line 105
frost$collections$IdentityMap$Entry* $tmp185 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp186 = &$tmp185->next;
frost$collections$IdentityMap$Entry* $tmp187 = *$tmp186;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$collections$IdentityMap$Entry* $tmp188 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local1) = $tmp187;
goto block1;
block3:;
// line 107
frost$collections$IdentityMap$Entry* $tmp189 = *(&local1);
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit($tmp189 != NULL);
frost$collections$IdentityMap$Entry* $tmp191 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return $tmp190;

}
void frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(frost$collections$IdentityMap* param0, frost$core$Object* param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$core$Bit local2;
frost$collections$IdentityMap$Entry* local3 = NULL;
// line 112
frost$core$Int64* $tmp192 = &param0->changeCount;
frost$core$Int64 $tmp193 = *$tmp192;
frost$core$Int64 $tmp194 = (frost$core$Int64) {1};
int64_t $tmp195 = $tmp193.value;
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195 + $tmp196;
frost$core$Int64 $tmp198 = (frost$core$Int64) {$tmp197};
frost$core$Int64* $tmp199 = &param0->changeCount;
*$tmp199 = $tmp198;
// line 113
frost$core$Int64 $tmp200 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp200;
// line 114
frost$collections$IdentityMap$Entry*** $tmp201 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp202 = *$tmp201;
frost$core$Int64 $tmp203 = *(&local0);
int64_t $tmp204 = $tmp203.value;
frost$collections$IdentityMap$Entry* $tmp205 = $tmp202[$tmp204];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$collections$IdentityMap$Entry* $tmp206 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local1) = $tmp205;
// line 115
goto block1;
block1:;
frost$collections$IdentityMap$Entry* $tmp207 = *(&local1);
frost$core$Bit $tmp208 = frost$core$Bit$init$builtin_bit($tmp207 != NULL);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block4; else goto block5;
block4:;
frost$collections$IdentityMap$Entry* $tmp210 = *(&local1);
frost$core$Object** $tmp211 = &$tmp210->key;
frost$core$Object* $tmp212 = *$tmp211;
bool $tmp213 = $tmp212 != param1;
frost$core$Bit $tmp214 = frost$core$Bit$init$builtin_bit($tmp213);
*(&local2) = $tmp214;
goto block6;
block5:;
*(&local2) = $tmp208;
goto block6;
block6:;
frost$core$Bit $tmp215 = *(&local2);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block2; else goto block3;
block2:;
// line 116
frost$collections$IdentityMap$Entry* $tmp217 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp218 = &$tmp217->next;
frost$collections$IdentityMap$Entry* $tmp219 = *$tmp218;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$collections$IdentityMap$Entry* $tmp220 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
*(&local1) = $tmp219;
goto block1;
block3:;
// line 118
frost$collections$IdentityMap$Entry* $tmp221 = *(&local1);
frost$core$Bit $tmp222 = frost$core$Bit$init$builtin_bit($tmp221 == NULL);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block7; else goto block9;
block7:;
// line 119
frost$collections$IdentityMap$Entry*** $tmp224 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp225 = *$tmp224;
frost$core$Int64 $tmp226 = *(&local0);
int64_t $tmp227 = $tmp226.value;
frost$collections$IdentityMap$Entry* $tmp228 = $tmp225[$tmp227];
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$collections$IdentityMap$Entry* $tmp229 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local3) = $tmp228;
// line 120
frost$collections$IdentityMap$Entry* $tmp230 = (frost$collections$IdentityMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$IdentityMap$Entry$class);
frost$collections$IdentityMap$Entry$init$frost$collections$IdentityMap$Entry$K$frost$collections$IdentityMap$Entry$V($tmp230, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$collections$IdentityMap$Entry* $tmp231 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local1) = $tmp230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
// line 121
frost$collections$IdentityMap$Entry* $tmp232 = *(&local1);
frost$collections$IdentityMap$Entry* $tmp233 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$collections$IdentityMap$Entry** $tmp234 = &$tmp232->next;
frost$collections$IdentityMap$Entry* $tmp235 = *$tmp234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$collections$IdentityMap$Entry** $tmp236 = &$tmp232->next;
*$tmp236 = $tmp233;
// line 122
frost$collections$IdentityMap$Entry*** $tmp237 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp238 = *$tmp237;
frost$core$Int64 $tmp239 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp240 = *(&local1);
int64_t $tmp241 = $tmp239.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$collections$IdentityMap$Entry* $tmp242 = $tmp238[$tmp241];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
$tmp238[$tmp241] = $tmp240;
// line 123
frost$collections$IdentityMap$incrementCount(param0);
frost$collections$IdentityMap$Entry* $tmp243 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block8;
block9:;
// line 1
// line 126
frost$collections$IdentityMap$Entry* $tmp244 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp245 = &$tmp244->value;
frost$core$Object* $tmp246 = *$tmp245;
frost$core$Frost$unref$frost$core$Object$Q($tmp246);
frost$core$Object** $tmp247 = &$tmp244->value;
*$tmp247 = param2;
goto block8;
block8:;
frost$collections$IdentityMap$Entry* $tmp248 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(frost$collections$IdentityMap* param0, frost$core$Object* param1) {

frost$core$Int64 local0;
frost$collections$IdentityMap$Entry* local1 = NULL;
frost$collections$IdentityMap$Entry* local2 = NULL;
frost$collections$IdentityMap$Entry* local3 = NULL;
// line 132
frost$core$Int64* $tmp249 = &param0->changeCount;
frost$core$Int64 $tmp250 = *$tmp249;
frost$core$Int64 $tmp251 = (frost$core$Int64) {1};
int64_t $tmp252 = $tmp250.value;
int64_t $tmp253 = $tmp251.value;
int64_t $tmp254 = $tmp252 + $tmp253;
frost$core$Int64 $tmp255 = (frost$core$Int64) {$tmp254};
frost$core$Int64* $tmp256 = &param0->changeCount;
*$tmp256 = $tmp255;
// line 133
frost$core$Int64 $tmp257 = frost$collections$IdentityMap$indexFor$frost$collections$IdentityMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp257;
// line 134
frost$collections$IdentityMap$Entry*** $tmp258 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp259 = *$tmp258;
frost$core$Int64 $tmp260 = *(&local0);
int64_t $tmp261 = $tmp260.value;
frost$collections$IdentityMap$Entry* $tmp262 = $tmp259[$tmp261];
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$collections$IdentityMap$Entry* $tmp263 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local1) = $tmp262;
// line 136
frost$collections$IdentityMap$Entry* $tmp264 = *(&local1);
frost$core$Bit $tmp265 = frost$core$Bit$init$builtin_bit($tmp264 == NULL);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block1; else goto block2;
block1:;
// line 137
frost$collections$IdentityMap$Entry* $tmp267 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block2:;
// line 140
frost$collections$IdentityMap$Entry* $tmp268 = *(&local1);
frost$core$Object** $tmp269 = &$tmp268->key;
frost$core$Object* $tmp270 = *$tmp269;
bool $tmp271 = $tmp270 == param1;
frost$core$Bit $tmp272 = frost$core$Bit$init$builtin_bit($tmp271);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block3; else goto block4;
block3:;
// line 141
frost$collections$IdentityMap$Entry*** $tmp274 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp275 = *$tmp274;
frost$core$Int64 $tmp276 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp277 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp278 = &$tmp277->next;
frost$collections$IdentityMap$Entry* $tmp279 = *$tmp278;
int64_t $tmp280 = $tmp276.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$collections$IdentityMap$Entry* $tmp281 = $tmp275[$tmp280];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
$tmp275[$tmp280] = $tmp279;
// line 142
frost$core$Int64* $tmp282 = &param0->_count;
frost$core$Int64 $tmp283 = *$tmp282;
frost$core$Int64 $tmp284 = (frost$core$Int64) {1};
int64_t $tmp285 = $tmp283.value;
int64_t $tmp286 = $tmp284.value;
int64_t $tmp287 = $tmp285 - $tmp286;
frost$core$Int64 $tmp288 = (frost$core$Int64) {$tmp287};
frost$core$Int64* $tmp289 = &param0->_count;
*$tmp289 = $tmp288;
// line 143
frost$collections$IdentityMap$Entry* $tmp290 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block4:;
// line 145
goto block5;
block5:;
// line 146
frost$collections$IdentityMap$Entry* $tmp291 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp292 = &$tmp291->next;
frost$collections$IdentityMap$Entry* $tmp293 = *$tmp292;
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$collections$IdentityMap$Entry* $tmp294 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local2) = $tmp293;
// line 147
frost$collections$IdentityMap$Entry* $tmp295 = *(&local2);
frost$core$Bit $tmp296 = frost$core$Bit$init$builtin_bit($tmp295 == NULL);
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block7; else goto block8;
block7:;
// line 149
frost$collections$IdentityMap$Entry* $tmp298 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp299 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;
block8:;
// line 151
frost$collections$IdentityMap$Entry* $tmp300 = *(&local2);
frost$core$Object** $tmp301 = &$tmp300->key;
frost$core$Object* $tmp302 = *$tmp301;
bool $tmp303 = $tmp302 == param1;
frost$core$Bit $tmp304 = frost$core$Bit$init$builtin_bit($tmp303);
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block9; else goto block10;
block9:;
// line 153
frost$collections$IdentityMap$Entry* $tmp306 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block6;
block10:;
// line 155
frost$collections$IdentityMap$Entry* $tmp307 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$collections$IdentityMap$Entry* $tmp308 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local1) = $tmp307;
frost$collections$IdentityMap$Entry* $tmp309 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local2) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block5;
block6:;
// line 158
frost$collections$IdentityMap$Entry* $tmp310 = *(&local1);
frost$collections$IdentityMap$Entry** $tmp311 = &$tmp310->next;
frost$collections$IdentityMap$Entry* $tmp312 = *$tmp311;
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$collections$IdentityMap$Entry* $tmp313 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local3) = $tmp312;
// line 159
frost$collections$IdentityMap$Entry* $tmp314 = *(&local3);
frost$core$Bit $tmp315 = frost$core$Bit$init$builtin_bit($tmp314 != NULL);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp317 = (frost$core$Int64) {159};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s318, $tmp317);
abort(); // unreachable
block11:;
// line 160
frost$collections$IdentityMap$Entry* $tmp319 = *(&local1);
frost$collections$IdentityMap$Entry* $tmp320 = *(&local3);
frost$collections$IdentityMap$Entry** $tmp321 = &$tmp320->next;
frost$collections$IdentityMap$Entry* $tmp322 = *$tmp321;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$collections$IdentityMap$Entry** $tmp323 = &$tmp319->next;
frost$collections$IdentityMap$Entry* $tmp324 = *$tmp323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$collections$IdentityMap$Entry** $tmp325 = &$tmp319->next;
*$tmp325 = $tmp322;
// line 161
frost$core$Int64* $tmp326 = &param0->_count;
frost$core$Int64 $tmp327 = *$tmp326;
frost$core$Int64 $tmp328 = (frost$core$Int64) {1};
int64_t $tmp329 = $tmp327.value;
int64_t $tmp330 = $tmp328.value;
int64_t $tmp331 = $tmp329 - $tmp330;
frost$core$Int64 $tmp332 = (frost$core$Int64) {$tmp331};
frost$core$Int64* $tmp333 = &param0->_count;
*$tmp333 = $tmp332;
frost$collections$IdentityMap$Entry* $tmp334 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$collections$IdentityMap$Entry* $tmp335 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local1) = ((frost$collections$IdentityMap$Entry*) NULL);
return;

}
void frost$collections$IdentityMap$clear(frost$collections$IdentityMap* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 165
frost$core$Int64* $tmp336 = &param0->changeCount;
frost$core$Int64 $tmp337 = *$tmp336;
frost$core$Int64 $tmp338 = (frost$core$Int64) {1};
int64_t $tmp339 = $tmp337.value;
int64_t $tmp340 = $tmp338.value;
int64_t $tmp341 = $tmp339 + $tmp340;
frost$core$Int64 $tmp342 = (frost$core$Int64) {$tmp341};
frost$core$Int64* $tmp343 = &param0->changeCount;
*$tmp343 = $tmp342;
// line 166
frost$core$Int64 $tmp344 = (frost$core$Int64) {0};
frost$core$Int64* $tmp345 = &param0->_count;
*$tmp345 = $tmp344;
// line 167
frost$core$Int64 $tmp346 = (frost$core$Int64) {0};
frost$core$Int64* $tmp347 = &param0->bucketCount;
frost$core$Int64 $tmp348 = *$tmp347;
frost$core$Bit $tmp349 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp350 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp346, $tmp348, $tmp349);
frost$core$Int64 $tmp351 = $tmp350.min;
*(&local0) = $tmp351;
frost$core$Int64 $tmp352 = $tmp350.max;
frost$core$Bit $tmp353 = $tmp350.inclusive;
bool $tmp354 = $tmp353.value;
frost$core$Int64 $tmp355 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp356 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp355);
if ($tmp354) goto block4; else goto block5;
block4:;
int64_t $tmp357 = $tmp351.value;
int64_t $tmp358 = $tmp352.value;
bool $tmp359 = $tmp357 <= $tmp358;
frost$core$Bit $tmp360 = (frost$core$Bit) {$tmp359};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block1; else goto block2;
block5:;
int64_t $tmp362 = $tmp351.value;
int64_t $tmp363 = $tmp352.value;
bool $tmp364 = $tmp362 < $tmp363;
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364};
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block1; else goto block2;
block1:;
// line 168
frost$collections$IdentityMap$Entry*** $tmp367 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp368 = *$tmp367;
frost$core$Int64 $tmp369 = *(&local0);
int64_t $tmp370 = $tmp369.value;
frost$collections$IdentityMap$Entry* $tmp371 = $tmp368[$tmp370];
frost$core$Bit $tmp372 = frost$core$Bit$init$builtin_bit($tmp371 != NULL);
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block6; else goto block7;
block6:;
// line 169
frost$collections$IdentityMap$Entry*** $tmp374 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp375 = *$tmp374;
frost$core$Int64 $tmp376 = *(&local0);
int64_t $tmp377 = $tmp376.value;
frost$collections$IdentityMap$Entry* $tmp378 = $tmp375[$tmp377];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp379 = *(&local0);
int64_t $tmp380 = $tmp352.value;
int64_t $tmp381 = $tmp379.value;
int64_t $tmp382 = $tmp380 - $tmp381;
frost$core$Int64 $tmp383 = (frost$core$Int64) {$tmp382};
frost$core$UInt64 $tmp384 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp383);
if ($tmp354) goto block9; else goto block10;
block9:;
uint64_t $tmp385 = $tmp384.value;
uint64_t $tmp386 = $tmp356.value;
bool $tmp387 = $tmp385 >= $tmp386;
frost$core$Bit $tmp388 = (frost$core$Bit) {$tmp387};
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block8; else goto block2;
block10:;
uint64_t $tmp390 = $tmp384.value;
uint64_t $tmp391 = $tmp356.value;
bool $tmp392 = $tmp390 > $tmp391;
frost$core$Bit $tmp393 = (frost$core$Bit) {$tmp392};
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block8; else goto block2;
block8:;
int64_t $tmp395 = $tmp379.value;
int64_t $tmp396 = $tmp355.value;
int64_t $tmp397 = $tmp395 + $tmp396;
frost$core$Int64 $tmp398 = (frost$core$Int64) {$tmp397};
*(&local0) = $tmp398;
goto block1;
block2:;
// line 172
frost$collections$IdentityMap$Entry*** $tmp399 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp400 = *$tmp399;
frostFree($tmp400);
// line 173
frost$core$Int64 $tmp401 = (frost$core$Int64) {16};
frost$core$Int64* $tmp402 = &param0->bucketCount;
*$tmp402 = $tmp401;
// line 174
frost$core$Int64* $tmp403 = &param0->bucketCount;
frost$core$Int64 $tmp404 = *$tmp403;
int64_t $tmp405 = $tmp404.value;
frost$collections$IdentityMap$Entry** $tmp406 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp405 * 8));
frost$collections$IdentityMap$Entry*** $tmp407 = &param0->contents;
*$tmp407 = $tmp406;
// line 175
frost$core$Int64 $tmp408 = (frost$core$Int64) {0};
frost$core$Int64* $tmp409 = &param0->bucketCount;
frost$core$Int64 $tmp410 = *$tmp409;
frost$core$Bit $tmp411 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp412 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp408, $tmp410, $tmp411);
frost$core$Int64 $tmp413 = $tmp412.min;
*(&local1) = $tmp413;
frost$core$Int64 $tmp414 = $tmp412.max;
frost$core$Bit $tmp415 = $tmp412.inclusive;
bool $tmp416 = $tmp415.value;
frost$core$Int64 $tmp417 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp418 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp417);
if ($tmp416) goto block14; else goto block15;
block14:;
int64_t $tmp419 = $tmp413.value;
int64_t $tmp420 = $tmp414.value;
bool $tmp421 = $tmp419 <= $tmp420;
frost$core$Bit $tmp422 = (frost$core$Bit) {$tmp421};
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block11; else goto block12;
block15:;
int64_t $tmp424 = $tmp413.value;
int64_t $tmp425 = $tmp414.value;
bool $tmp426 = $tmp424 < $tmp425;
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block11; else goto block12;
block11:;
// line 176
frost$collections$IdentityMap$Entry*** $tmp429 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp430 = *$tmp429;
frost$core$Int64 $tmp431 = *(&local1);
int64_t $tmp432 = $tmp431.value;
frost$collections$IdentityMap$Entry* $tmp433 = $tmp430[$tmp432];
frost$core$Bit $tmp434 = frost$core$Bit$init$builtin_bit($tmp433 != NULL);
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block16; else goto block17;
block16:;
// line 177
frost$collections$IdentityMap$Entry*** $tmp436 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp437 = *$tmp436;
frost$core$Int64 $tmp438 = *(&local1);
int64_t $tmp439 = $tmp438.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp440 = $tmp437[$tmp439];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
$tmp437[$tmp439] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block17;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp441 = *(&local1);
int64_t $tmp442 = $tmp414.value;
int64_t $tmp443 = $tmp441.value;
int64_t $tmp444 = $tmp442 - $tmp443;
frost$core$Int64 $tmp445 = (frost$core$Int64) {$tmp444};
frost$core$UInt64 $tmp446 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp445);
if ($tmp416) goto block19; else goto block20;
block19:;
uint64_t $tmp447 = $tmp446.value;
uint64_t $tmp448 = $tmp418.value;
bool $tmp449 = $tmp447 >= $tmp448;
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp449};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block18; else goto block12;
block20:;
uint64_t $tmp452 = $tmp446.value;
uint64_t $tmp453 = $tmp418.value;
bool $tmp454 = $tmp452 > $tmp453;
frost$core$Bit $tmp455 = (frost$core$Bit) {$tmp454};
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block18; else goto block12;
block18:;
int64_t $tmp457 = $tmp441.value;
int64_t $tmp458 = $tmp417.value;
int64_t $tmp459 = $tmp457 + $tmp458;
frost$core$Int64 $tmp460 = (frost$core$Int64) {$tmp459};
*(&local1) = $tmp460;
goto block11;
block12:;
// line 180
frost$core$Int64* $tmp461 = &param0->bucketCount;
frost$core$Int64 $tmp462 = *$tmp461;
frost$core$Int64 $tmp463 = (frost$core$Int64) {3};
int64_t $tmp464 = $tmp462.value;
int64_t $tmp465 = $tmp463.value;
int64_t $tmp466 = $tmp464 * $tmp465;
frost$core$Int64 $tmp467 = (frost$core$Int64) {$tmp466};
frost$core$Int64 $tmp468 = (frost$core$Int64) {4};
int64_t $tmp469 = $tmp467.value;
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469 / $tmp470;
frost$core$Int64 $tmp472 = (frost$core$Int64) {$tmp471};
frost$core$Int64* $tmp473 = &param0->threshold;
*$tmp473 = $tmp472;
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
frost$core$Int64* $tmp474 = &param0->_count;
frost$core$Int64 $tmp475 = *$tmp474;
frost$core$Int64 $tmp476 = (frost$core$Int64) {1};
int64_t $tmp477 = $tmp475.value;
int64_t $tmp478 = $tmp476.value;
int64_t $tmp479 = $tmp477 + $tmp478;
frost$core$Int64 $tmp480 = (frost$core$Int64) {$tmp479};
frost$core$Int64* $tmp481 = &param0->_count;
*$tmp481 = $tmp480;
// line 186
frost$core$Int64* $tmp482 = &param0->_count;
frost$core$Int64 $tmp483 = *$tmp482;
frost$core$Int64* $tmp484 = &param0->threshold;
frost$core$Int64 $tmp485 = *$tmp484;
int64_t $tmp486 = $tmp483.value;
int64_t $tmp487 = $tmp485.value;
bool $tmp488 = $tmp486 >= $tmp487;
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488};
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block1; else goto block2;
block1:;
// line 187
frost$collections$IdentityMap$Entry*** $tmp491 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp492 = *$tmp491;
*(&local0) = $tmp492;
// line 188
frost$core$Int64* $tmp493 = &param0->bucketCount;
frost$core$Int64 $tmp494 = *$tmp493;
*(&local1) = $tmp494;
// line 189
frost$core$Int64* $tmp495 = &param0->bucketCount;
frost$core$Int64 $tmp496 = *$tmp495;
frost$core$Int64 $tmp497 = (frost$core$Int64) {2};
int64_t $tmp498 = $tmp496.value;
int64_t $tmp499 = $tmp497.value;
int64_t $tmp500 = $tmp498 * $tmp499;
frost$core$Int64 $tmp501 = (frost$core$Int64) {$tmp500};
frost$core$Int64* $tmp502 = &param0->bucketCount;
*$tmp502 = $tmp501;
// line 190
frost$core$Int64* $tmp503 = &param0->bucketCount;
frost$core$Int64 $tmp504 = *$tmp503;
int64_t $tmp505 = $tmp504.value;
frost$collections$IdentityMap$Entry** $tmp506 = ((frost$collections$IdentityMap$Entry**) frostAlloc($tmp505 * 8));
frost$collections$IdentityMap$Entry*** $tmp507 = &param0->contents;
*$tmp507 = $tmp506;
// line 191
frost$core$Int64 $tmp508 = (frost$core$Int64) {0};
frost$core$Int64* $tmp509 = &param0->bucketCount;
frost$core$Int64 $tmp510 = *$tmp509;
frost$core$Bit $tmp511 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp512 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp508, $tmp510, $tmp511);
frost$core$Int64 $tmp513 = $tmp512.min;
*(&local2) = $tmp513;
frost$core$Int64 $tmp514 = $tmp512.max;
frost$core$Bit $tmp515 = $tmp512.inclusive;
bool $tmp516 = $tmp515.value;
frost$core$Int64 $tmp517 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp518 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp517);
if ($tmp516) goto block6; else goto block7;
block6:;
int64_t $tmp519 = $tmp513.value;
int64_t $tmp520 = $tmp514.value;
bool $tmp521 = $tmp519 <= $tmp520;
frost$core$Bit $tmp522 = (frost$core$Bit) {$tmp521};
bool $tmp523 = $tmp522.value;
if ($tmp523) goto block3; else goto block4;
block7:;
int64_t $tmp524 = $tmp513.value;
int64_t $tmp525 = $tmp514.value;
bool $tmp526 = $tmp524 < $tmp525;
frost$core$Bit $tmp527 = (frost$core$Bit) {$tmp526};
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block3; else goto block4;
block3:;
// line 192
frost$collections$IdentityMap$Entry*** $tmp529 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp530 = *$tmp529;
frost$core$Int64 $tmp531 = *(&local2);
int64_t $tmp532 = $tmp531.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$IdentityMap$Entry*) NULL)));
frost$collections$IdentityMap$Entry* $tmp533 = $tmp530[$tmp532];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
$tmp530[$tmp532] = ((frost$collections$IdentityMap$Entry*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp534 = *(&local2);
int64_t $tmp535 = $tmp514.value;
int64_t $tmp536 = $tmp534.value;
int64_t $tmp537 = $tmp535 - $tmp536;
frost$core$Int64 $tmp538 = (frost$core$Int64) {$tmp537};
frost$core$UInt64 $tmp539 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp538);
if ($tmp516) goto block9; else goto block10;
block9:;
uint64_t $tmp540 = $tmp539.value;
uint64_t $tmp541 = $tmp518.value;
bool $tmp542 = $tmp540 >= $tmp541;
frost$core$Bit $tmp543 = (frost$core$Bit) {$tmp542};
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block8; else goto block4;
block10:;
uint64_t $tmp545 = $tmp539.value;
uint64_t $tmp546 = $tmp518.value;
bool $tmp547 = $tmp545 > $tmp546;
frost$core$Bit $tmp548 = (frost$core$Bit) {$tmp547};
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block8; else goto block4;
block8:;
int64_t $tmp550 = $tmp534.value;
int64_t $tmp551 = $tmp517.value;
int64_t $tmp552 = $tmp550 + $tmp551;
frost$core$Int64 $tmp553 = (frost$core$Int64) {$tmp552};
*(&local2) = $tmp553;
goto block3;
block4:;
// line 194
frost$core$Int64* $tmp554 = &param0->threshold;
frost$core$Int64 $tmp555 = *$tmp554;
frost$core$Int64 $tmp556 = (frost$core$Int64) {2};
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557 * $tmp558;
frost$core$Int64 $tmp560 = (frost$core$Int64) {$tmp559};
frost$core$Int64* $tmp561 = &param0->threshold;
*$tmp561 = $tmp560;
// line 195
frost$core$Int64 $tmp562 = (frost$core$Int64) {0};
frost$core$Int64* $tmp563 = &param0->_count;
*$tmp563 = $tmp562;
// line 196
frost$core$Int64 $tmp564 = (frost$core$Int64) {0};
frost$core$Int64 $tmp565 = *(&local1);
frost$core$Bit $tmp566 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp567 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp564, $tmp565, $tmp566);
frost$core$Int64 $tmp568 = $tmp567.min;
*(&local3) = $tmp568;
frost$core$Int64 $tmp569 = $tmp567.max;
frost$core$Bit $tmp570 = $tmp567.inclusive;
bool $tmp571 = $tmp570.value;
frost$core$Int64 $tmp572 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp573 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp572);
if ($tmp571) goto block14; else goto block15;
block14:;
int64_t $tmp574 = $tmp568.value;
int64_t $tmp575 = $tmp569.value;
bool $tmp576 = $tmp574 <= $tmp575;
frost$core$Bit $tmp577 = (frost$core$Bit) {$tmp576};
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block11; else goto block12;
block15:;
int64_t $tmp579 = $tmp568.value;
int64_t $tmp580 = $tmp569.value;
bool $tmp581 = $tmp579 < $tmp580;
frost$core$Bit $tmp582 = (frost$core$Bit) {$tmp581};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block11; else goto block12;
block11:;
// line 197
frost$collections$IdentityMap$Entry** $tmp584 = *(&local0);
frost$core$Int64 $tmp585 = *(&local3);
int64_t $tmp586 = $tmp585.value;
frost$collections$IdentityMap$Entry* $tmp587 = $tmp584[$tmp586];
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$collections$IdentityMap$Entry* $tmp588 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local4) = $tmp587;
// line 198
goto block16;
block16:;
frost$collections$IdentityMap$Entry* $tmp589 = *(&local4);
frost$core$Bit $tmp590 = frost$core$Bit$init$builtin_bit($tmp589 != NULL);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block17; else goto block18;
block17:;
// line 199
frost$collections$IdentityMap$Entry* $tmp592 = *(&local4);
frost$core$Object** $tmp593 = &$tmp592->key;
frost$core$Object* $tmp594 = *$tmp593;
frost$collections$IdentityMap$Entry* $tmp595 = *(&local4);
frost$core$Object** $tmp596 = &$tmp595->value;
frost$core$Object* $tmp597 = *$tmp596;
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(param0, $tmp594, $tmp597);
// line 200
frost$collections$IdentityMap$Entry* $tmp598 = *(&local4);
frost$collections$IdentityMap$Entry** $tmp599 = &$tmp598->next;
frost$collections$IdentityMap$Entry* $tmp600 = *$tmp599;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
frost$collections$IdentityMap$Entry* $tmp601 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local4) = $tmp600;
goto block16;
block18:;
frost$collections$IdentityMap$Entry* $tmp602 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local4) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block13;
block13:;
frost$core$Int64 $tmp603 = *(&local3);
int64_t $tmp604 = $tmp569.value;
int64_t $tmp605 = $tmp603.value;
int64_t $tmp606 = $tmp604 - $tmp605;
frost$core$Int64 $tmp607 = (frost$core$Int64) {$tmp606};
frost$core$UInt64 $tmp608 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp607);
if ($tmp571) goto block20; else goto block21;
block20:;
uint64_t $tmp609 = $tmp608.value;
uint64_t $tmp610 = $tmp573.value;
bool $tmp611 = $tmp609 >= $tmp610;
frost$core$Bit $tmp612 = (frost$core$Bit) {$tmp611};
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block19; else goto block12;
block21:;
uint64_t $tmp614 = $tmp608.value;
uint64_t $tmp615 = $tmp573.value;
bool $tmp616 = $tmp614 > $tmp615;
frost$core$Bit $tmp617 = (frost$core$Bit) {$tmp616};
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block19; else goto block12;
block19:;
int64_t $tmp619 = $tmp603.value;
int64_t $tmp620 = $tmp572.value;
int64_t $tmp621 = $tmp619 + $tmp620;
frost$core$Int64 $tmp622 = (frost$core$Int64) {$tmp621};
*(&local3) = $tmp622;
goto block11;
block12:;
// line 203
frost$core$Int64 $tmp623 = (frost$core$Int64) {0};
frost$core$Int64 $tmp624 = *(&local1);
frost$core$Bit $tmp625 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp626 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp623, $tmp624, $tmp625);
frost$core$Int64 $tmp627 = $tmp626.min;
*(&local5) = $tmp627;
frost$core$Int64 $tmp628 = $tmp626.max;
frost$core$Bit $tmp629 = $tmp626.inclusive;
bool $tmp630 = $tmp629.value;
frost$core$Int64 $tmp631 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp632 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp631);
if ($tmp630) goto block25; else goto block26;
block25:;
int64_t $tmp633 = $tmp627.value;
int64_t $tmp634 = $tmp628.value;
bool $tmp635 = $tmp633 <= $tmp634;
frost$core$Bit $tmp636 = (frost$core$Bit) {$tmp635};
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block22; else goto block23;
block26:;
int64_t $tmp638 = $tmp627.value;
int64_t $tmp639 = $tmp628.value;
bool $tmp640 = $tmp638 < $tmp639;
frost$core$Bit $tmp641 = (frost$core$Bit) {$tmp640};
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block22; else goto block23;
block22:;
// line 204
frost$collections$IdentityMap$Entry** $tmp643 = *(&local0);
frost$core$Int64 $tmp644 = *(&local5);
int64_t $tmp645 = $tmp644.value;
frost$collections$IdentityMap$Entry* $tmp646 = $tmp643[$tmp645];
frost$core$Bit $tmp647 = frost$core$Bit$init$builtin_bit($tmp646 != NULL);
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block27; else goto block28;
block27:;
// line 205
frost$collections$IdentityMap$Entry** $tmp649 = *(&local0);
frost$core$Int64 $tmp650 = *(&local5);
int64_t $tmp651 = $tmp650.value;
frost$collections$IdentityMap$Entry* $tmp652 = $tmp649[$tmp651];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
goto block28;
block28:;
goto block24;
block24:;
frost$core$Int64 $tmp653 = *(&local5);
int64_t $tmp654 = $tmp628.value;
int64_t $tmp655 = $tmp653.value;
int64_t $tmp656 = $tmp654 - $tmp655;
frost$core$Int64 $tmp657 = (frost$core$Int64) {$tmp656};
frost$core$UInt64 $tmp658 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp657);
if ($tmp630) goto block30; else goto block31;
block30:;
uint64_t $tmp659 = $tmp658.value;
uint64_t $tmp660 = $tmp632.value;
bool $tmp661 = $tmp659 >= $tmp660;
frost$core$Bit $tmp662 = (frost$core$Bit) {$tmp661};
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block29; else goto block23;
block31:;
uint64_t $tmp664 = $tmp658.value;
uint64_t $tmp665 = $tmp632.value;
bool $tmp666 = $tmp664 > $tmp665;
frost$core$Bit $tmp667 = (frost$core$Bit) {$tmp666};
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block29; else goto block23;
block29:;
int64_t $tmp669 = $tmp653.value;
int64_t $tmp670 = $tmp631.value;
int64_t $tmp671 = $tmp669 + $tmp670;
frost$core$Int64 $tmp672 = (frost$core$Int64) {$tmp671};
*(&local5) = $tmp672;
goto block22;
block23:;
// line 208
frost$collections$IdentityMap$Entry** $tmp673 = *(&local0);
frostFree($tmp673);
goto block2;
block2:;
return;

}
frost$core$Int64 frost$collections$IdentityMap$get_count$R$frost$core$Int64(frost$collections$IdentityMap* param0) {

// line 214
frost$core$Int64* $tmp674 = &param0->_count;
frost$core$Int64 $tmp675 = *$tmp674;
return $tmp675;

}
frost$collections$Iterator* frost$collections$IdentityMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$K$GT(frost$collections$IdentityMap* param0) {

// line 219
frost$core$Int64 $tmp676 = (frost$core$Int64) {219};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s677, $tmp676, &$s678);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$IdentityMap$get_values$R$frost$collections$Iterator$LTfrost$collections$IdentityMap$V$GT(frost$collections$IdentityMap* param0) {

// line 224
frost$core$Int64 $tmp679 = (frost$core$Int64) {224};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s680, $tmp679, &$s681);
abort(); // unreachable

}
frost$core$String* frost$collections$IdentityMap$get_asString$R$frost$core$String(frost$collections$IdentityMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$collections$IdentityMap$Entry* local3 = NULL;
// line 235
frost$core$MutableString* $tmp682 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp682);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
frost$core$MutableString* $tmp683 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
*(&local0) = $tmp682;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// line 236
frost$core$MutableString* $tmp684 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp684, &$s685);
// line 237
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s686));
frost$core$String* $tmp687 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local1) = &$s688;
// line 238
frost$core$Int64 $tmp689 = (frost$core$Int64) {0};
frost$core$Int64* $tmp690 = &param0->bucketCount;
frost$core$Int64 $tmp691 = *$tmp690;
frost$core$Bit $tmp692 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp693 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp689, $tmp691, $tmp692);
frost$core$Int64 $tmp694 = $tmp693.min;
*(&local2) = $tmp694;
frost$core$Int64 $tmp695 = $tmp693.max;
frost$core$Bit $tmp696 = $tmp693.inclusive;
bool $tmp697 = $tmp696.value;
frost$core$Int64 $tmp698 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp699 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp698);
if ($tmp697) goto block4; else goto block5;
block4:;
int64_t $tmp700 = $tmp694.value;
int64_t $tmp701 = $tmp695.value;
bool $tmp702 = $tmp700 <= $tmp701;
frost$core$Bit $tmp703 = (frost$core$Bit) {$tmp702};
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block1; else goto block2;
block5:;
int64_t $tmp705 = $tmp694.value;
int64_t $tmp706 = $tmp695.value;
bool $tmp707 = $tmp705 < $tmp706;
frost$core$Bit $tmp708 = (frost$core$Bit) {$tmp707};
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block1; else goto block2;
block1:;
// line 239
frost$collections$IdentityMap$Entry*** $tmp710 = &param0->contents;
frost$collections$IdentityMap$Entry** $tmp711 = *$tmp710;
frost$core$Int64 $tmp712 = *(&local2);
int64_t $tmp713 = $tmp712.value;
frost$collections$IdentityMap$Entry* $tmp714 = $tmp711[$tmp713];
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$collections$IdentityMap$Entry* $tmp715 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
*(&local3) = $tmp714;
// line 240
goto block6;
block6:;
frost$collections$IdentityMap$Entry* $tmp716 = *(&local3);
frost$core$Bit $tmp717 = frost$core$Bit$init$builtin_bit($tmp716 != NULL);
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block7; else goto block8;
block7:;
// line 241
frost$core$MutableString* $tmp719 = *(&local0);
frost$core$String* $tmp720 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp719, $tmp720);
// line 242
frost$collections$IdentityMap$Entry* $tmp721 = *(&local3);
frost$core$Object** $tmp722 = &$tmp721->key;
frost$core$Object* $tmp723 = *$tmp722;
frost$core$Bit $tmp724 = frost$core$Bit$init$builtin_bit(true);
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block9; else goto block11;
block9:;
// line 243
frost$core$MutableString* $tmp726 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp727 = *(&local3);
frost$core$Object** $tmp728 = &$tmp727->key;
frost$core$Object* $tmp729 = *$tmp728;
frost$core$MutableString$append$frost$core$Object($tmp726, $tmp729);
goto block10;
block11:;
// line 1
// line 246
frost$core$MutableString* $tmp730 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp730, &$s731);
goto block10;
block10:;
// line 248
frost$core$MutableString* $tmp732 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp732, &$s733);
// line 249
frost$collections$IdentityMap$Entry* $tmp734 = *(&local3);
frost$core$Object** $tmp735 = &$tmp734->value;
frost$core$Object* $tmp736 = *$tmp735;
frost$core$Bit $tmp737 = frost$core$Bit$init$builtin_bit(true);
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block12; else goto block14;
block12:;
// line 250
frost$core$MutableString* $tmp739 = *(&local0);
frost$collections$IdentityMap$Entry* $tmp740 = *(&local3);
frost$core$Object** $tmp741 = &$tmp740->value;
frost$core$Object* $tmp742 = *$tmp741;
frost$core$MutableString$append$frost$core$Object($tmp739, $tmp742);
goto block13;
block14:;
// line 1
// line 253
frost$core$MutableString* $tmp743 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp743, &$s744);
goto block13;
block13:;
// line 255
frost$collections$IdentityMap$Entry* $tmp745 = *(&local3);
frost$collections$IdentityMap$Entry** $tmp746 = &$tmp745->next;
frost$collections$IdentityMap$Entry* $tmp747 = *$tmp746;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$collections$IdentityMap$Entry* $tmp748 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local3) = $tmp747;
// line 256
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s749));
frost$core$String* $tmp750 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local1) = &$s751;
goto block6;
block8:;
frost$collections$IdentityMap$Entry* $tmp752 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local3) = ((frost$collections$IdentityMap$Entry*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp753 = *(&local2);
int64_t $tmp754 = $tmp695.value;
int64_t $tmp755 = $tmp753.value;
int64_t $tmp756 = $tmp754 - $tmp755;
frost$core$Int64 $tmp757 = (frost$core$Int64) {$tmp756};
frost$core$UInt64 $tmp758 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp757);
if ($tmp697) goto block16; else goto block17;
block16:;
uint64_t $tmp759 = $tmp758.value;
uint64_t $tmp760 = $tmp699.value;
bool $tmp761 = $tmp759 >= $tmp760;
frost$core$Bit $tmp762 = (frost$core$Bit) {$tmp761};
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block15; else goto block2;
block17:;
uint64_t $tmp764 = $tmp758.value;
uint64_t $tmp765 = $tmp699.value;
bool $tmp766 = $tmp764 > $tmp765;
frost$core$Bit $tmp767 = (frost$core$Bit) {$tmp766};
bool $tmp768 = $tmp767.value;
if ($tmp768) goto block15; else goto block2;
block15:;
int64_t $tmp769 = $tmp753.value;
int64_t $tmp770 = $tmp698.value;
int64_t $tmp771 = $tmp769 + $tmp770;
frost$core$Int64 $tmp772 = (frost$core$Int64) {$tmp771};
*(&local2) = $tmp772;
goto block1;
block2:;
// line 259
frost$core$MutableString* $tmp773 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp773, &$s774);
// line 260
frost$core$MutableString* $tmp775 = *(&local0);
frost$core$String* $tmp776 = frost$core$MutableString$finish$R$frost$core$String($tmp775);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$String* $tmp777 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp778 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp776;

}

