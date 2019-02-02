#include "frost/collections/HashMap.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/MapView.h"
#include "frost/collections/Key.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Map.h"
#include "frost/collections/MapWriter.h"
#include "frost/core/Int64.h"
#include "frost/collections/HashMap/Entry.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/core/Tuple2.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Equatable.h"
#include "frost/collections/HashMap/EntryIterator.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Object* frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim(frost$collections$HashMap* p0, frost$core$Object* p1) {
    frost$core$Object* result = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(p0, ((frost$collections$Key*) p1));

    return result;
}
__attribute__((weak)) frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim(frost$collections$HashMap* p0, frost$core$Object* p1) {
    frost$core$Bit result = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(p0, ((frost$collections$Key*) p1));

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT$shim(frost$collections$HashMap* p0) {
    frost$collections$Iterator* result = frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim(frost$collections$HashMap* p0, frost$core$Object* p1, frost$core$Object* p2) {
    frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(p0, ((frost$collections$Key*) p1), p2);

}
__attribute__((weak)) void frost$collections$HashMap$remove$frost$collections$HashMap$K$shim(frost$collections$HashMap* p0, frost$core$Object* p1) {
    frost$collections$HashMap$remove$frost$collections$HashMap$K(p0, ((frost$collections$Key*) p1));

}

struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$collections$HashMap$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, NULL, { frost$collections$HashMap$get_count$R$frost$core$Int64, frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim, frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim, frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT$shim, frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT, frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$HashMap$_frost$collections$Map = { (frost$core$Class*) &frost$collections$Map$class, (ITable*) &frost$collections$HashMap$_frost$collections$MapView, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$HashMap$_frost$collections$MapWriter = { (frost$core$Class*) &frost$collections$MapWriter$class, (ITable*) &frost$collections$HashMap$_frost$collections$Map, { frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim, frost$collections$HashMap$remove$frost$collections$HashMap$K$shim, frost$collections$HashMap$clear} };

static frost$core$String $s1;
frost$collections$HashMap$class_type frost$collections$HashMap$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashMap$_frost$collections$MapWriter, { frost$collections$HashMap$get_asString$R$frost$core$String, frost$collections$HashMap$cleanup, frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64, frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim, frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim, frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim, frost$collections$HashMap$remove$frost$collections$HashMap$K$shim, frost$collections$HashMap$clear, frost$collections$HashMap$incrementCount, frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT$shim, frost$collections$HashMap$get_count$R$frost$core$Int64} };

typedef frost$collections$Iterator* (*$fn82)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn86)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn91)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn105)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn109)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn114)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn184)(frost$collections$Key*);
typedef frost$core$Bit (*$fn228)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn258)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn291)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn350)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn384)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -6526495327472465984, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s761 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s762 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s764 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s820 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s825 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };

void frost$collections$HashMap$init(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
// line 95
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// line 101
frost$core$Int64* $tmp4 = &param0->changeCount;
frost$core$Int64 $tmp5 = *$tmp4;
frost$core$Int64 $tmp6 = (frost$core$Int64) {1};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
frost$core$Int64 $tmp10 = (frost$core$Int64) {$tmp9};
frost$core$Int64* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// line 102
frost$core$Int64 $tmp12 = (frost$core$Int64) {0};
frost$core$Int64* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// line 103
frost$core$Int64 $tmp14 = (frost$core$Int64) {16};
frost$core$Int64* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// line 104
frost$core$Int64* $tmp16 = &param0->bucketCount;
frost$core$Int64 $tmp17 = *$tmp16;
int64_t $tmp18 = $tmp17.value;
frost$collections$HashMap$Entry** $tmp19 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp18 * 8));
frost$collections$HashMap$Entry*** $tmp20 = &param0->contents;
*$tmp20 = $tmp19;
// line 105
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
// line 106
frost$collections$HashMap$Entry*** $tmp42 = &param0->contents;
frost$collections$HashMap$Entry** $tmp43 = *$tmp42;
frost$core$Int64 $tmp44 = *(&local0);
int64_t $tmp45 = $tmp44.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp46 = $tmp43[$tmp45];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
$tmp43[$tmp45] = ((frost$collections$HashMap$Entry*) NULL);
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
// line 108
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
void frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT(frost$collections$HashMap* param0, frost$collections$MapView* param1) {

frost$collections$Key* local0 = NULL;
frost$core$Object* local1 = NULL;
// line 112
frost$collections$HashMap$init(param0);
// line 113
ITable* $tmp80 = param1->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[3];
frost$collections$Iterator* $tmp83 = $tmp81(param1);
goto block1;
block1:;
ITable* $tmp84 = $tmp83->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp84 = $tmp84->next;
}
$fn86 $tmp85 = $tmp84->methods[0];
frost$core$Bit $tmp87 = $tmp85($tmp83);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$collections$Key*) NULL);
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp89 = $tmp83->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[1];
frost$core$Object* $tmp92 = $tmp90($tmp83);
frost$core$Object** $tmp93 = &((frost$core$Tuple2*) $tmp92)->f0;
frost$core$Object* $tmp94 = *$tmp93;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp94)));
frost$collections$Key* $tmp95 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local0) = ((frost$collections$Key*) $tmp94);
frost$core$Object** $tmp96 = &((frost$core$Tuple2*) $tmp92)->f1;
frost$core$Object* $tmp97 = *$tmp96;
frost$core$Frost$ref$frost$core$Object$Q($tmp97);
frost$core$Object* $tmp98 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp98);
*(&local1) = $tmp97;
// line 114
frost$collections$Key* $tmp99 = *(&local0);
frost$core$Object* $tmp100 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, $tmp99, $tmp100);
frost$core$Frost$unref$frost$core$Object$Q($tmp92);
frost$core$Object* $tmp101 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp101);
*(&local1) = ((frost$core$Object*) NULL);
frost$collections$Key* $tmp102 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local0) = ((frost$collections$Key*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
return;

}
void frost$collections$HashMap$init$frost$collections$CollectionView$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT(frost$collections$HashMap* param0, frost$collections$CollectionView* param1) {

frost$core$Tuple2* local0 = NULL;
// line 119
frost$collections$HashMap$init(param0);
// line 120
ITable* $tmp103 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[0];
frost$collections$Iterator* $tmp106 = $tmp104(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp107 = $tmp106->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$core$Bit $tmp110 = $tmp108($tmp106);
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Tuple2*) NULL);
ITable* $tmp112 = $tmp106->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[1];
frost$core$Object* $tmp115 = $tmp113($tmp106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Tuple2*) $tmp115)));
frost$core$Tuple2* $tmp116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local0) = ((frost$core$Tuple2*) $tmp115);
// line 121
frost$core$Tuple2* $tmp117 = *(&local0);
frost$core$Object** $tmp118 = &$tmp117->f0;
frost$core$Object* $tmp119 = *$tmp118;
frost$core$Tuple2* $tmp120 = *(&local0);
frost$core$Object** $tmp121 = &$tmp120->f1;
frost$core$Object* $tmp122 = *$tmp121;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, ((frost$collections$Key*) $tmp119), $tmp122);
frost$core$Frost$unref$frost$core$Object$Q($tmp115);
frost$core$Tuple2* $tmp123 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local0) = ((frost$core$Tuple2*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
return;

}
void frost$collections$HashMap$cleanup(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
// line 127
frost$core$Int64 $tmp124 = (frost$core$Int64) {0};
frost$core$Int64* $tmp125 = &param0->bucketCount;
frost$core$Int64 $tmp126 = *$tmp125;
frost$core$Bit $tmp127 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp128 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp124, $tmp126, $tmp127);
frost$core$Int64 $tmp129 = $tmp128.min;
*(&local0) = $tmp129;
frost$core$Int64 $tmp130 = $tmp128.max;
frost$core$Bit $tmp131 = $tmp128.inclusive;
bool $tmp132 = $tmp131.value;
frost$core$Int64 $tmp133 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp134 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp133);
if ($tmp132) goto block4; else goto block5;
block4:;
int64_t $tmp135 = $tmp129.value;
int64_t $tmp136 = $tmp130.value;
bool $tmp137 = $tmp135 <= $tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block1; else goto block2;
block5:;
int64_t $tmp140 = $tmp129.value;
int64_t $tmp141 = $tmp130.value;
bool $tmp142 = $tmp140 < $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block1; else goto block2;
block1:;
// line 128
frost$collections$HashMap$Entry*** $tmp145 = &param0->contents;
frost$collections$HashMap$Entry** $tmp146 = *$tmp145;
frost$core$Int64 $tmp147 = *(&local0);
int64_t $tmp148 = $tmp147.value;
frost$collections$HashMap$Entry* $tmp149 = $tmp146[$tmp148];
frost$core$Bit $tmp150 = frost$core$Bit$init$builtin_bit($tmp149 != NULL);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block6; else goto block7;
block6:;
// line 129
frost$collections$HashMap$Entry*** $tmp152 = &param0->contents;
frost$collections$HashMap$Entry** $tmp153 = *$tmp152;
frost$core$Int64 $tmp154 = *(&local0);
int64_t $tmp155 = $tmp154.value;
frost$collections$HashMap$Entry* $tmp156 = $tmp153[$tmp155];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp157 = *(&local0);
int64_t $tmp158 = $tmp130.value;
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158 - $tmp159;
frost$core$Int64 $tmp161 = (frost$core$Int64) {$tmp160};
frost$core$UInt64 $tmp162 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp161);
if ($tmp132) goto block9; else goto block10;
block9:;
uint64_t $tmp163 = $tmp162.value;
uint64_t $tmp164 = $tmp134.value;
bool $tmp165 = $tmp163 >= $tmp164;
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block8; else goto block2;
block10:;
uint64_t $tmp168 = $tmp162.value;
uint64_t $tmp169 = $tmp134.value;
bool $tmp170 = $tmp168 > $tmp169;
frost$core$Bit $tmp171 = (frost$core$Bit) {$tmp170};
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block8; else goto block2;
block8:;
int64_t $tmp173 = $tmp157.value;
int64_t $tmp174 = $tmp133.value;
int64_t $tmp175 = $tmp173 + $tmp174;
frost$core$Int64 $tmp176 = (frost$core$Int64) {$tmp175};
*(&local0) = $tmp176;
goto block1;
block2:;
// line 132
frost$collections$HashMap$Entry*** $tmp177 = &param0->contents;
frost$collections$HashMap$Entry** $tmp178 = *$tmp177;
frostFree($tmp178);
// line 126
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Int64 frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
// line 140
// line 141
frost$core$Bit $tmp179 = frost$core$Bit$init$builtin_bit(false);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block1; else goto block3;
block1:;
// line 142
frost$core$Int64 $tmp181 = (frost$core$Int64) {0};
*(&local0) = $tmp181;
goto block2;
block3:;
// line 1
// line 145
ITable* $tmp182 = param1->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
frost$core$Int64 $tmp185 = $tmp183(param1);
*(&local0) = $tmp185;
goto block2;
block2:;
// line 149
frost$core$Int64 $tmp186 = *(&local0);
frost$core$Int64 $tmp187 = *(&local0);
frost$core$Int64 $tmp188 = (frost$core$Int64) {20};
frost$core$Int64 $tmp189 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp187, $tmp188);
frost$core$Int64 $tmp190 = *(&local0);
frost$core$Int64 $tmp191 = (frost$core$Int64) {12};
frost$core$Int64 $tmp192 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp190, $tmp191);
frost$core$Int64 $tmp193 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp189, $tmp192);
frost$core$Int64 $tmp194 = *(&local0);
frost$core$Int64 $tmp195 = (frost$core$Int64) {7};
frost$core$Int64 $tmp196 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp194, $tmp195);
frost$core$Int64 $tmp197 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp193, $tmp196);
frost$core$Int64 $tmp198 = *(&local0);
frost$core$Int64 $tmp199 = (frost$core$Int64) {4};
frost$core$Int64 $tmp200 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp198, $tmp199);
frost$core$Int64 $tmp201 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp197, $tmp200);
frost$core$Int64 $tmp202 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp186, $tmp201);
*(&local0) = $tmp202;
// line 152
frost$core$Int64 $tmp203 = *(&local0);
frost$core$Int64* $tmp204 = &param0->bucketCount;
frost$core$Int64 $tmp205 = *$tmp204;
frost$core$Int64 $tmp206 = (frost$core$Int64) {1};
int64_t $tmp207 = $tmp205.value;
int64_t $tmp208 = $tmp206.value;
int64_t $tmp209 = $tmp207 - $tmp208;
frost$core$Int64 $tmp210 = (frost$core$Int64) {$tmp209};
frost$core$Int64 $tmp211 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp203, $tmp210);
*(&local0) = $tmp211;
// line 153
frost$core$Int64 $tmp212 = *(&local0);
return $tmp212;

}
frost$core$Object* frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
// line 158
frost$core$Int64 $tmp213 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp213;
// line 159
frost$collections$HashMap$Entry*** $tmp214 = &param0->contents;
frost$collections$HashMap$Entry** $tmp215 = *$tmp214;
frost$core$Int64 $tmp216 = *(&local0);
int64_t $tmp217 = $tmp216.value;
frost$collections$HashMap$Entry* $tmp218 = $tmp215[$tmp217];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$collections$HashMap$Entry* $tmp219 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local1) = $tmp218;
// line 160
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp220 = *(&local1);
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit($tmp220 != NULL);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp223 = *(&local1);
frost$collections$Key** $tmp224 = &$tmp223->key;
frost$collections$Key* $tmp225 = *$tmp224;
ITable* $tmp226 = ((frost$core$Equatable*) $tmp225)->$class->itable;
while ($tmp226->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp226 = $tmp226->next;
}
$fn228 $tmp227 = $tmp226->methods[1];
frost$core$Bit $tmp229 = $tmp227(((frost$core$Equatable*) $tmp225), ((frost$core$Equatable*) param1));
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block2; else goto block3;
block2:;
// line 161
frost$collections$HashMap$Entry* $tmp231 = *(&local1);
frost$collections$HashMap$Entry** $tmp232 = &$tmp231->next;
frost$collections$HashMap$Entry* $tmp233 = *$tmp232;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$collections$HashMap$Entry* $tmp234 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local1) = $tmp233;
goto block1;
block3:;
// line 163
frost$collections$HashMap$Entry* $tmp235 = *(&local1);
frost$core$Bit $tmp236 = frost$core$Bit$init$builtin_bit($tmp235 != NULL);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block5; else goto block7;
block5:;
// line 164
frost$collections$HashMap$Entry* $tmp238 = *(&local1);
frost$core$Object** $tmp239 = &$tmp238->value;
frost$core$Object* $tmp240 = *$tmp239;
frost$core$Frost$ref$frost$core$Object$Q($tmp240);
frost$collections$HashMap$Entry* $tmp241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp240;
block7:;
// line 1
// line 167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$HashMap$Entry* $tmp242 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block6:;
goto block8;
block8:;

}
frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
// line 173
frost$core$Int64 $tmp243 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp243;
// line 174
frost$collections$HashMap$Entry*** $tmp244 = &param0->contents;
frost$collections$HashMap$Entry** $tmp245 = *$tmp244;
frost$core$Int64 $tmp246 = *(&local0);
int64_t $tmp247 = $tmp246.value;
frost$collections$HashMap$Entry* $tmp248 = $tmp245[$tmp247];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$collections$HashMap$Entry* $tmp249 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local1) = $tmp248;
// line 175
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp250 = *(&local1);
frost$core$Bit $tmp251 = frost$core$Bit$init$builtin_bit($tmp250 != NULL);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp253 = *(&local1);
frost$collections$Key** $tmp254 = &$tmp253->key;
frost$collections$Key* $tmp255 = *$tmp254;
ITable* $tmp256 = ((frost$core$Equatable*) $tmp255)->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[1];
frost$core$Bit $tmp259 = $tmp257(((frost$core$Equatable*) $tmp255), ((frost$core$Equatable*) param1));
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block2; else goto block3;
block2:;
// line 176
frost$collections$HashMap$Entry* $tmp261 = *(&local1);
frost$collections$HashMap$Entry** $tmp262 = &$tmp261->next;
frost$collections$HashMap$Entry* $tmp263 = *$tmp262;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$collections$HashMap$Entry* $tmp264 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local1) = $tmp263;
goto block1;
block3:;
// line 178
frost$collections$HashMap$Entry* $tmp265 = *(&local1);
frost$core$Bit $tmp266 = frost$core$Bit$init$builtin_bit($tmp265 != NULL);
frost$collections$HashMap$Entry* $tmp267 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp266;

}
void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(frost$collections$HashMap* param0, frost$collections$Key* param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$collections$HashMap$Entry* local2 = NULL;
// line 183
frost$core$Int64* $tmp268 = &param0->changeCount;
frost$core$Int64 $tmp269 = *$tmp268;
frost$core$Int64 $tmp270 = (frost$core$Int64) {1};
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271 + $tmp272;
frost$core$Int64 $tmp274 = (frost$core$Int64) {$tmp273};
frost$core$Int64* $tmp275 = &param0->changeCount;
*$tmp275 = $tmp274;
// line 184
frost$core$Int64 $tmp276 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp276;
// line 185
frost$collections$HashMap$Entry*** $tmp277 = &param0->contents;
frost$collections$HashMap$Entry** $tmp278 = *$tmp277;
frost$core$Int64 $tmp279 = *(&local0);
int64_t $tmp280 = $tmp279.value;
frost$collections$HashMap$Entry* $tmp281 = $tmp278[$tmp280];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$collections$HashMap$Entry* $tmp282 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local1) = $tmp281;
// line 186
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp283 = *(&local1);
frost$core$Bit $tmp284 = frost$core$Bit$init$builtin_bit($tmp283 != NULL);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp286 = *(&local1);
frost$collections$Key** $tmp287 = &$tmp286->key;
frost$collections$Key* $tmp288 = *$tmp287;
ITable* $tmp289 = ((frost$core$Equatable*) $tmp288)->$class->itable;
while ($tmp289->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp289 = $tmp289->next;
}
$fn291 $tmp290 = $tmp289->methods[1];
frost$core$Bit $tmp292 = $tmp290(((frost$core$Equatable*) $tmp288), ((frost$core$Equatable*) param1));
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block2; else goto block3;
block2:;
// line 187
frost$collections$HashMap$Entry* $tmp294 = *(&local1);
frost$collections$HashMap$Entry** $tmp295 = &$tmp294->next;
frost$collections$HashMap$Entry* $tmp296 = *$tmp295;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$collections$HashMap$Entry* $tmp297 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local1) = $tmp296;
goto block1;
block3:;
// line 189
frost$collections$HashMap$Entry* $tmp298 = *(&local1);
frost$core$Bit $tmp299 = frost$core$Bit$init$builtin_bit($tmp298 == NULL);
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block5; else goto block7;
block5:;
// line 190
frost$collections$HashMap$Entry*** $tmp301 = &param0->contents;
frost$collections$HashMap$Entry** $tmp302 = *$tmp301;
frost$core$Int64 $tmp303 = *(&local0);
int64_t $tmp304 = $tmp303.value;
frost$collections$HashMap$Entry* $tmp305 = $tmp302[$tmp304];
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$collections$HashMap$Entry* $tmp306 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local2) = $tmp305;
// line 191
FROST_ASSERT(40 == sizeof(frost$collections$HashMap$Entry));
frost$collections$HashMap$Entry* $tmp307 = (frost$collections$HashMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$HashMap$Entry$class);
frost$collections$HashMap$Entry$init$frost$collections$HashMap$Entry$K$frost$collections$HashMap$Entry$V($tmp307, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$collections$HashMap$Entry* $tmp308 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local1) = $tmp307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// line 192
frost$collections$HashMap$Entry* $tmp309 = *(&local1);
frost$collections$HashMap$Entry* $tmp310 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
frost$collections$HashMap$Entry** $tmp311 = &$tmp309->next;
frost$collections$HashMap$Entry* $tmp312 = *$tmp311;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$collections$HashMap$Entry** $tmp313 = &$tmp309->next;
*$tmp313 = $tmp310;
// line 193
frost$collections$HashMap$Entry*** $tmp314 = &param0->contents;
frost$collections$HashMap$Entry** $tmp315 = *$tmp314;
frost$core$Int64 $tmp316 = *(&local0);
frost$collections$HashMap$Entry* $tmp317 = *(&local1);
int64_t $tmp318 = $tmp316.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$collections$HashMap$Entry* $tmp319 = $tmp315[$tmp318];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
$tmp315[$tmp318] = $tmp317;
// line 194
frost$collections$HashMap$incrementCount(param0);
frost$collections$HashMap$Entry* $tmp320 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block6;
block7:;
// line 1
// line 197
frost$collections$HashMap$Entry* $tmp321 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp322 = &$tmp321->value;
frost$core$Object* $tmp323 = *$tmp322;
frost$core$Frost$unref$frost$core$Object$Q($tmp323);
frost$core$Object** $tmp324 = &$tmp321->value;
*$tmp324 = param2;
goto block6;
block6:;
frost$collections$HashMap$Entry* $tmp325 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$remove$frost$collections$HashMap$K(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$collections$HashMap$Entry* local2 = NULL;
frost$collections$HashMap$Entry* local3 = NULL;
// line 203
frost$core$Int64* $tmp326 = &param0->changeCount;
frost$core$Int64 $tmp327 = *$tmp326;
frost$core$Int64 $tmp328 = (frost$core$Int64) {1};
int64_t $tmp329 = $tmp327.value;
int64_t $tmp330 = $tmp328.value;
int64_t $tmp331 = $tmp329 + $tmp330;
frost$core$Int64 $tmp332 = (frost$core$Int64) {$tmp331};
frost$core$Int64* $tmp333 = &param0->changeCount;
*$tmp333 = $tmp332;
// line 204
frost$core$Int64 $tmp334 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp334;
// line 205
frost$collections$HashMap$Entry*** $tmp335 = &param0->contents;
frost$collections$HashMap$Entry** $tmp336 = *$tmp335;
frost$core$Int64 $tmp337 = *(&local0);
int64_t $tmp338 = $tmp337.value;
frost$collections$HashMap$Entry* $tmp339 = $tmp336[$tmp338];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$collections$HashMap$Entry* $tmp340 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local1) = $tmp339;
// line 207
frost$collections$HashMap$Entry* $tmp341 = *(&local1);
frost$core$Bit $tmp342 = frost$core$Bit$init$builtin_bit($tmp341 == NULL);
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block1; else goto block2;
block1:;
// line 208
frost$collections$HashMap$Entry* $tmp344 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block2:;
// line 211
frost$collections$HashMap$Entry* $tmp345 = *(&local1);
frost$collections$Key** $tmp346 = &$tmp345->key;
frost$collections$Key* $tmp347 = *$tmp346;
ITable* $tmp348 = ((frost$core$Equatable*) $tmp347)->$class->itable;
while ($tmp348->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp348 = $tmp348->next;
}
$fn350 $tmp349 = $tmp348->methods[0];
frost$core$Bit $tmp351 = $tmp349(((frost$core$Equatable*) $tmp347), ((frost$core$Equatable*) param1));
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block3; else goto block4;
block3:;
// line 212
frost$collections$HashMap$Entry*** $tmp353 = &param0->contents;
frost$collections$HashMap$Entry** $tmp354 = *$tmp353;
frost$core$Int64 $tmp355 = *(&local0);
frost$collections$HashMap$Entry* $tmp356 = *(&local1);
frost$collections$HashMap$Entry** $tmp357 = &$tmp356->next;
frost$collections$HashMap$Entry* $tmp358 = *$tmp357;
int64_t $tmp359 = $tmp355.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$collections$HashMap$Entry* $tmp360 = $tmp354[$tmp359];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
$tmp354[$tmp359] = $tmp358;
// line 213
frost$core$Int64* $tmp361 = &param0->_count;
frost$core$Int64 $tmp362 = *$tmp361;
frost$core$Int64 $tmp363 = (frost$core$Int64) {1};
int64_t $tmp364 = $tmp362.value;
int64_t $tmp365 = $tmp363.value;
int64_t $tmp366 = $tmp364 - $tmp365;
frost$core$Int64 $tmp367 = (frost$core$Int64) {$tmp366};
frost$core$Int64* $tmp368 = &param0->_count;
*$tmp368 = $tmp367;
// line 214
frost$collections$HashMap$Entry* $tmp369 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block4:;
// line 216
goto block5;
block5:;
// line 217
frost$collections$HashMap$Entry* $tmp370 = *(&local1);
frost$collections$HashMap$Entry** $tmp371 = &$tmp370->next;
frost$collections$HashMap$Entry* $tmp372 = *$tmp371;
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$collections$HashMap$Entry* $tmp373 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
*(&local2) = $tmp372;
// line 218
frost$collections$HashMap$Entry* $tmp374 = *(&local2);
frost$core$Bit $tmp375 = frost$core$Bit$init$builtin_bit($tmp374 == NULL);
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block7; else goto block8;
block7:;
// line 220
frost$collections$HashMap$Entry* $tmp377 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp378 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block8:;
// line 222
frost$collections$HashMap$Entry* $tmp379 = *(&local2);
frost$collections$Key** $tmp380 = &$tmp379->key;
frost$collections$Key* $tmp381 = *$tmp380;
ITable* $tmp382 = ((frost$core$Equatable*) $tmp381)->$class->itable;
while ($tmp382->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp382 = $tmp382->next;
}
$fn384 $tmp383 = $tmp382->methods[0];
frost$core$Bit $tmp385 = $tmp383(((frost$core$Equatable*) $tmp381), ((frost$core$Equatable*) param1));
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block9; else goto block10;
block9:;
// line 224
frost$collections$HashMap$Entry* $tmp387 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block6;
block10:;
// line 226
frost$collections$HashMap$Entry* $tmp388 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$collections$HashMap$Entry* $tmp389 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local1) = $tmp388;
frost$collections$HashMap$Entry* $tmp390 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block5;
block6:;
// line 229
frost$collections$HashMap$Entry* $tmp391 = *(&local1);
frost$collections$HashMap$Entry** $tmp392 = &$tmp391->next;
frost$collections$HashMap$Entry* $tmp393 = *$tmp392;
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$collections$HashMap$Entry* $tmp394 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local3) = $tmp393;
// line 230
frost$collections$HashMap$Entry* $tmp395 = *(&local3);
frost$core$Bit $tmp396 = frost$core$Bit$init$builtin_bit($tmp395 != NULL);
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp398 = (frost$core$Int64) {230};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s399, $tmp398);
abort(); // unreachable
block11:;
// line 231
frost$collections$HashMap$Entry* $tmp400 = *(&local1);
frost$collections$HashMap$Entry* $tmp401 = *(&local3);
frost$collections$HashMap$Entry** $tmp402 = &$tmp401->next;
frost$collections$HashMap$Entry* $tmp403 = *$tmp402;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$collections$HashMap$Entry** $tmp404 = &$tmp400->next;
frost$collections$HashMap$Entry* $tmp405 = *$tmp404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$collections$HashMap$Entry** $tmp406 = &$tmp400->next;
*$tmp406 = $tmp403;
// line 232
frost$core$Int64* $tmp407 = &param0->_count;
frost$core$Int64 $tmp408 = *$tmp407;
frost$core$Int64 $tmp409 = (frost$core$Int64) {1};
int64_t $tmp410 = $tmp408.value;
int64_t $tmp411 = $tmp409.value;
int64_t $tmp412 = $tmp410 - $tmp411;
frost$core$Int64 $tmp413 = (frost$core$Int64) {$tmp412};
frost$core$Int64* $tmp414 = &param0->_count;
*$tmp414 = $tmp413;
frost$collections$HashMap$Entry* $tmp415 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp416 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$clear(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 237
frost$core$Int64* $tmp417 = &param0->changeCount;
frost$core$Int64 $tmp418 = *$tmp417;
frost$core$Int64 $tmp419 = (frost$core$Int64) {1};
int64_t $tmp420 = $tmp418.value;
int64_t $tmp421 = $tmp419.value;
int64_t $tmp422 = $tmp420 + $tmp421;
frost$core$Int64 $tmp423 = (frost$core$Int64) {$tmp422};
frost$core$Int64* $tmp424 = &param0->changeCount;
*$tmp424 = $tmp423;
// line 238
frost$core$Int64 $tmp425 = (frost$core$Int64) {0};
frost$core$Int64* $tmp426 = &param0->_count;
*$tmp426 = $tmp425;
// line 239
frost$core$Int64 $tmp427 = (frost$core$Int64) {0};
frost$core$Int64* $tmp428 = &param0->bucketCount;
frost$core$Int64 $tmp429 = *$tmp428;
frost$core$Bit $tmp430 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp431 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp427, $tmp429, $tmp430);
frost$core$Int64 $tmp432 = $tmp431.min;
*(&local0) = $tmp432;
frost$core$Int64 $tmp433 = $tmp431.max;
frost$core$Bit $tmp434 = $tmp431.inclusive;
bool $tmp435 = $tmp434.value;
frost$core$Int64 $tmp436 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp437 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp436);
if ($tmp435) goto block4; else goto block5;
block4:;
int64_t $tmp438 = $tmp432.value;
int64_t $tmp439 = $tmp433.value;
bool $tmp440 = $tmp438 <= $tmp439;
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block1; else goto block2;
block5:;
int64_t $tmp443 = $tmp432.value;
int64_t $tmp444 = $tmp433.value;
bool $tmp445 = $tmp443 < $tmp444;
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block1; else goto block2;
block1:;
// line 240
frost$collections$HashMap$Entry*** $tmp448 = &param0->contents;
frost$collections$HashMap$Entry** $tmp449 = *$tmp448;
frost$core$Int64 $tmp450 = *(&local0);
int64_t $tmp451 = $tmp450.value;
frost$collections$HashMap$Entry* $tmp452 = $tmp449[$tmp451];
frost$core$Bit $tmp453 = frost$core$Bit$init$builtin_bit($tmp452 != NULL);
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block6; else goto block7;
block6:;
// line 241
frost$collections$HashMap$Entry*** $tmp455 = &param0->contents;
frost$collections$HashMap$Entry** $tmp456 = *$tmp455;
frost$core$Int64 $tmp457 = *(&local0);
int64_t $tmp458 = $tmp457.value;
frost$collections$HashMap$Entry* $tmp459 = $tmp456[$tmp458];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp460 = *(&local0);
int64_t $tmp461 = $tmp433.value;
int64_t $tmp462 = $tmp460.value;
int64_t $tmp463 = $tmp461 - $tmp462;
frost$core$Int64 $tmp464 = (frost$core$Int64) {$tmp463};
frost$core$UInt64 $tmp465 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp464);
if ($tmp435) goto block9; else goto block10;
block9:;
uint64_t $tmp466 = $tmp465.value;
uint64_t $tmp467 = $tmp437.value;
bool $tmp468 = $tmp466 >= $tmp467;
frost$core$Bit $tmp469 = (frost$core$Bit) {$tmp468};
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block8; else goto block2;
block10:;
uint64_t $tmp471 = $tmp465.value;
uint64_t $tmp472 = $tmp437.value;
bool $tmp473 = $tmp471 > $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block8; else goto block2;
block8:;
int64_t $tmp476 = $tmp460.value;
int64_t $tmp477 = $tmp436.value;
int64_t $tmp478 = $tmp476 + $tmp477;
frost$core$Int64 $tmp479 = (frost$core$Int64) {$tmp478};
*(&local0) = $tmp479;
goto block1;
block2:;
// line 244
frost$collections$HashMap$Entry*** $tmp480 = &param0->contents;
frost$collections$HashMap$Entry** $tmp481 = *$tmp480;
frostFree($tmp481);
// line 245
frost$core$Int64 $tmp482 = (frost$core$Int64) {16};
frost$core$Int64* $tmp483 = &param0->bucketCount;
*$tmp483 = $tmp482;
// line 246
frost$core$Int64* $tmp484 = &param0->bucketCount;
frost$core$Int64 $tmp485 = *$tmp484;
int64_t $tmp486 = $tmp485.value;
frost$collections$HashMap$Entry** $tmp487 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp486 * 8));
frost$collections$HashMap$Entry*** $tmp488 = &param0->contents;
*$tmp488 = $tmp487;
// line 247
frost$core$Int64 $tmp489 = (frost$core$Int64) {0};
frost$core$Int64* $tmp490 = &param0->bucketCount;
frost$core$Int64 $tmp491 = *$tmp490;
frost$core$Bit $tmp492 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp493 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp489, $tmp491, $tmp492);
frost$core$Int64 $tmp494 = $tmp493.min;
*(&local1) = $tmp494;
frost$core$Int64 $tmp495 = $tmp493.max;
frost$core$Bit $tmp496 = $tmp493.inclusive;
bool $tmp497 = $tmp496.value;
frost$core$Int64 $tmp498 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp499 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp498);
if ($tmp497) goto block14; else goto block15;
block14:;
int64_t $tmp500 = $tmp494.value;
int64_t $tmp501 = $tmp495.value;
bool $tmp502 = $tmp500 <= $tmp501;
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block11; else goto block12;
block15:;
int64_t $tmp505 = $tmp494.value;
int64_t $tmp506 = $tmp495.value;
bool $tmp507 = $tmp505 < $tmp506;
frost$core$Bit $tmp508 = (frost$core$Bit) {$tmp507};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block11; else goto block12;
block11:;
// line 248
frost$collections$HashMap$Entry*** $tmp510 = &param0->contents;
frost$collections$HashMap$Entry** $tmp511 = *$tmp510;
frost$core$Int64 $tmp512 = *(&local1);
int64_t $tmp513 = $tmp512.value;
frost$collections$HashMap$Entry* $tmp514 = $tmp511[$tmp513];
frost$core$Bit $tmp515 = frost$core$Bit$init$builtin_bit($tmp514 != NULL);
bool $tmp516 = $tmp515.value;
if ($tmp516) goto block16; else goto block17;
block16:;
// line 249
frost$collections$HashMap$Entry*** $tmp517 = &param0->contents;
frost$collections$HashMap$Entry** $tmp518 = *$tmp517;
frost$core$Int64 $tmp519 = *(&local1);
int64_t $tmp520 = $tmp519.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp521 = $tmp518[$tmp520];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
$tmp518[$tmp520] = ((frost$collections$HashMap$Entry*) NULL);
goto block17;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp522 = *(&local1);
int64_t $tmp523 = $tmp495.value;
int64_t $tmp524 = $tmp522.value;
int64_t $tmp525 = $tmp523 - $tmp524;
frost$core$Int64 $tmp526 = (frost$core$Int64) {$tmp525};
frost$core$UInt64 $tmp527 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp526);
if ($tmp497) goto block19; else goto block20;
block19:;
uint64_t $tmp528 = $tmp527.value;
uint64_t $tmp529 = $tmp499.value;
bool $tmp530 = $tmp528 >= $tmp529;
frost$core$Bit $tmp531 = (frost$core$Bit) {$tmp530};
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block18; else goto block12;
block20:;
uint64_t $tmp533 = $tmp527.value;
uint64_t $tmp534 = $tmp499.value;
bool $tmp535 = $tmp533 > $tmp534;
frost$core$Bit $tmp536 = (frost$core$Bit) {$tmp535};
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block18; else goto block12;
block18:;
int64_t $tmp538 = $tmp522.value;
int64_t $tmp539 = $tmp498.value;
int64_t $tmp540 = $tmp538 + $tmp539;
frost$core$Int64 $tmp541 = (frost$core$Int64) {$tmp540};
*(&local1) = $tmp541;
goto block11;
block12:;
// line 252
frost$core$Int64* $tmp542 = &param0->bucketCount;
frost$core$Int64 $tmp543 = *$tmp542;
frost$core$Int64 $tmp544 = (frost$core$Int64) {3};
int64_t $tmp545 = $tmp543.value;
int64_t $tmp546 = $tmp544.value;
int64_t $tmp547 = $tmp545 * $tmp546;
frost$core$Int64 $tmp548 = (frost$core$Int64) {$tmp547};
frost$core$Int64 $tmp549 = (frost$core$Int64) {4};
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549.value;
int64_t $tmp552 = $tmp550 / $tmp551;
frost$core$Int64 $tmp553 = (frost$core$Int64) {$tmp552};
frost$core$Int64* $tmp554 = &param0->threshold;
*$tmp554 = $tmp553;
return;

}
void frost$collections$HashMap$incrementCount(frost$collections$HashMap* param0) {

frost$collections$HashMap$Entry** local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$collections$HashMap$Entry* local4 = NULL;
frost$core$Int64 local5;
// line 257
frost$core$Int64* $tmp555 = &param0->_count;
frost$core$Int64 $tmp556 = *$tmp555;
frost$core$Int64 $tmp557 = (frost$core$Int64) {1};
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557.value;
int64_t $tmp560 = $tmp558 + $tmp559;
frost$core$Int64 $tmp561 = (frost$core$Int64) {$tmp560};
frost$core$Int64* $tmp562 = &param0->_count;
*$tmp562 = $tmp561;
// line 258
frost$core$Int64* $tmp563 = &param0->_count;
frost$core$Int64 $tmp564 = *$tmp563;
frost$core$Int64* $tmp565 = &param0->threshold;
frost$core$Int64 $tmp566 = *$tmp565;
int64_t $tmp567 = $tmp564.value;
int64_t $tmp568 = $tmp566.value;
bool $tmp569 = $tmp567 >= $tmp568;
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block1; else goto block2;
block1:;
// line 259
frost$collections$HashMap$Entry*** $tmp572 = &param0->contents;
frost$collections$HashMap$Entry** $tmp573 = *$tmp572;
*(&local0) = $tmp573;
// line 260
frost$core$Int64* $tmp574 = &param0->bucketCount;
frost$core$Int64 $tmp575 = *$tmp574;
*(&local1) = $tmp575;
// line 261
frost$core$Int64* $tmp576 = &param0->bucketCount;
frost$core$Int64 $tmp577 = *$tmp576;
frost$core$Int64 $tmp578 = (frost$core$Int64) {2};
int64_t $tmp579 = $tmp577.value;
int64_t $tmp580 = $tmp578.value;
int64_t $tmp581 = $tmp579 * $tmp580;
frost$core$Int64 $tmp582 = (frost$core$Int64) {$tmp581};
frost$core$Int64* $tmp583 = &param0->bucketCount;
*$tmp583 = $tmp582;
// line 262
frost$core$Int64* $tmp584 = &param0->bucketCount;
frost$core$Int64 $tmp585 = *$tmp584;
int64_t $tmp586 = $tmp585.value;
frost$collections$HashMap$Entry** $tmp587 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp586 * 8));
frost$collections$HashMap$Entry*** $tmp588 = &param0->contents;
*$tmp588 = $tmp587;
// line 263
frost$core$Int64 $tmp589 = (frost$core$Int64) {0};
frost$core$Int64* $tmp590 = &param0->bucketCount;
frost$core$Int64 $tmp591 = *$tmp590;
frost$core$Bit $tmp592 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp593 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp589, $tmp591, $tmp592);
frost$core$Int64 $tmp594 = $tmp593.min;
*(&local2) = $tmp594;
frost$core$Int64 $tmp595 = $tmp593.max;
frost$core$Bit $tmp596 = $tmp593.inclusive;
bool $tmp597 = $tmp596.value;
frost$core$Int64 $tmp598 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp599 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp598);
if ($tmp597) goto block6; else goto block7;
block6:;
int64_t $tmp600 = $tmp594.value;
int64_t $tmp601 = $tmp595.value;
bool $tmp602 = $tmp600 <= $tmp601;
frost$core$Bit $tmp603 = (frost$core$Bit) {$tmp602};
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block3; else goto block4;
block7:;
int64_t $tmp605 = $tmp594.value;
int64_t $tmp606 = $tmp595.value;
bool $tmp607 = $tmp605 < $tmp606;
frost$core$Bit $tmp608 = (frost$core$Bit) {$tmp607};
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block3; else goto block4;
block3:;
// line 264
frost$collections$HashMap$Entry*** $tmp610 = &param0->contents;
frost$collections$HashMap$Entry** $tmp611 = *$tmp610;
frost$core$Int64 $tmp612 = *(&local2);
int64_t $tmp613 = $tmp612.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp614 = $tmp611[$tmp613];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
$tmp611[$tmp613] = ((frost$collections$HashMap$Entry*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp615 = *(&local2);
int64_t $tmp616 = $tmp595.value;
int64_t $tmp617 = $tmp615.value;
int64_t $tmp618 = $tmp616 - $tmp617;
frost$core$Int64 $tmp619 = (frost$core$Int64) {$tmp618};
frost$core$UInt64 $tmp620 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp619);
if ($tmp597) goto block9; else goto block10;
block9:;
uint64_t $tmp621 = $tmp620.value;
uint64_t $tmp622 = $tmp599.value;
bool $tmp623 = $tmp621 >= $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block8; else goto block4;
block10:;
uint64_t $tmp626 = $tmp620.value;
uint64_t $tmp627 = $tmp599.value;
bool $tmp628 = $tmp626 > $tmp627;
frost$core$Bit $tmp629 = (frost$core$Bit) {$tmp628};
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block8; else goto block4;
block8:;
int64_t $tmp631 = $tmp615.value;
int64_t $tmp632 = $tmp598.value;
int64_t $tmp633 = $tmp631 + $tmp632;
frost$core$Int64 $tmp634 = (frost$core$Int64) {$tmp633};
*(&local2) = $tmp634;
goto block3;
block4:;
// line 266
frost$core$Int64* $tmp635 = &param0->threshold;
frost$core$Int64 $tmp636 = *$tmp635;
frost$core$Int64 $tmp637 = (frost$core$Int64) {2};
int64_t $tmp638 = $tmp636.value;
int64_t $tmp639 = $tmp637.value;
int64_t $tmp640 = $tmp638 * $tmp639;
frost$core$Int64 $tmp641 = (frost$core$Int64) {$tmp640};
frost$core$Int64* $tmp642 = &param0->threshold;
*$tmp642 = $tmp641;
// line 267
frost$core$Int64 $tmp643 = (frost$core$Int64) {0};
frost$core$Int64* $tmp644 = &param0->_count;
*$tmp644 = $tmp643;
// line 268
frost$core$Int64 $tmp645 = (frost$core$Int64) {0};
frost$core$Int64 $tmp646 = *(&local1);
frost$core$Bit $tmp647 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp648 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp645, $tmp646, $tmp647);
frost$core$Int64 $tmp649 = $tmp648.min;
*(&local3) = $tmp649;
frost$core$Int64 $tmp650 = $tmp648.max;
frost$core$Bit $tmp651 = $tmp648.inclusive;
bool $tmp652 = $tmp651.value;
frost$core$Int64 $tmp653 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp654 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp653);
if ($tmp652) goto block14; else goto block15;
block14:;
int64_t $tmp655 = $tmp649.value;
int64_t $tmp656 = $tmp650.value;
bool $tmp657 = $tmp655 <= $tmp656;
frost$core$Bit $tmp658 = (frost$core$Bit) {$tmp657};
bool $tmp659 = $tmp658.value;
if ($tmp659) goto block11; else goto block12;
block15:;
int64_t $tmp660 = $tmp649.value;
int64_t $tmp661 = $tmp650.value;
bool $tmp662 = $tmp660 < $tmp661;
frost$core$Bit $tmp663 = (frost$core$Bit) {$tmp662};
bool $tmp664 = $tmp663.value;
if ($tmp664) goto block11; else goto block12;
block11:;
// line 269
frost$collections$HashMap$Entry** $tmp665 = *(&local0);
frost$core$Int64 $tmp666 = *(&local3);
int64_t $tmp667 = $tmp666.value;
frost$collections$HashMap$Entry* $tmp668 = $tmp665[$tmp667];
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$collections$HashMap$Entry* $tmp669 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
*(&local4) = $tmp668;
// line 270
goto block16;
block16:;
frost$collections$HashMap$Entry* $tmp670 = *(&local4);
frost$core$Bit $tmp671 = frost$core$Bit$init$builtin_bit($tmp670 != NULL);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block17; else goto block18;
block17:;
// line 271
frost$collections$HashMap$Entry* $tmp673 = *(&local4);
frost$collections$Key** $tmp674 = &$tmp673->key;
frost$collections$Key* $tmp675 = *$tmp674;
frost$collections$HashMap$Entry* $tmp676 = *(&local4);
frost$core$Object** $tmp677 = &$tmp676->value;
frost$core$Object* $tmp678 = *$tmp677;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, $tmp675, $tmp678);
// line 272
frost$collections$HashMap$Entry* $tmp679 = *(&local4);
frost$collections$HashMap$Entry** $tmp680 = &$tmp679->next;
frost$collections$HashMap$Entry* $tmp681 = *$tmp680;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$collections$HashMap$Entry* $tmp682 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local4) = $tmp681;
goto block16;
block18:;
frost$collections$HashMap$Entry* $tmp683 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
goto block13;
block13:;
frost$core$Int64 $tmp684 = *(&local3);
int64_t $tmp685 = $tmp650.value;
int64_t $tmp686 = $tmp684.value;
int64_t $tmp687 = $tmp685 - $tmp686;
frost$core$Int64 $tmp688 = (frost$core$Int64) {$tmp687};
frost$core$UInt64 $tmp689 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp688);
if ($tmp652) goto block20; else goto block21;
block20:;
uint64_t $tmp690 = $tmp689.value;
uint64_t $tmp691 = $tmp654.value;
bool $tmp692 = $tmp690 >= $tmp691;
frost$core$Bit $tmp693 = (frost$core$Bit) {$tmp692};
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block19; else goto block12;
block21:;
uint64_t $tmp695 = $tmp689.value;
uint64_t $tmp696 = $tmp654.value;
bool $tmp697 = $tmp695 > $tmp696;
frost$core$Bit $tmp698 = (frost$core$Bit) {$tmp697};
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block19; else goto block12;
block19:;
int64_t $tmp700 = $tmp684.value;
int64_t $tmp701 = $tmp653.value;
int64_t $tmp702 = $tmp700 + $tmp701;
frost$core$Int64 $tmp703 = (frost$core$Int64) {$tmp702};
*(&local3) = $tmp703;
goto block11;
block12:;
// line 275
frost$core$Int64 $tmp704 = (frost$core$Int64) {0};
frost$core$Int64 $tmp705 = *(&local1);
frost$core$Bit $tmp706 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp707 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp704, $tmp705, $tmp706);
frost$core$Int64 $tmp708 = $tmp707.min;
*(&local5) = $tmp708;
frost$core$Int64 $tmp709 = $tmp707.max;
frost$core$Bit $tmp710 = $tmp707.inclusive;
bool $tmp711 = $tmp710.value;
frost$core$Int64 $tmp712 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp713 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp712);
if ($tmp711) goto block25; else goto block26;
block25:;
int64_t $tmp714 = $tmp708.value;
int64_t $tmp715 = $tmp709.value;
bool $tmp716 = $tmp714 <= $tmp715;
frost$core$Bit $tmp717 = (frost$core$Bit) {$tmp716};
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block22; else goto block23;
block26:;
int64_t $tmp719 = $tmp708.value;
int64_t $tmp720 = $tmp709.value;
bool $tmp721 = $tmp719 < $tmp720;
frost$core$Bit $tmp722 = (frost$core$Bit) {$tmp721};
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block22; else goto block23;
block22:;
// line 276
frost$collections$HashMap$Entry** $tmp724 = *(&local0);
frost$core$Int64 $tmp725 = *(&local5);
int64_t $tmp726 = $tmp725.value;
frost$collections$HashMap$Entry* $tmp727 = $tmp724[$tmp726];
frost$core$Bit $tmp728 = frost$core$Bit$init$builtin_bit($tmp727 != NULL);
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block27; else goto block28;
block27:;
// line 277
frost$collections$HashMap$Entry** $tmp730 = *(&local0);
frost$core$Int64 $tmp731 = *(&local5);
int64_t $tmp732 = $tmp731.value;
frost$collections$HashMap$Entry* $tmp733 = $tmp730[$tmp732];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
goto block28;
block28:;
goto block24;
block24:;
frost$core$Int64 $tmp734 = *(&local5);
int64_t $tmp735 = $tmp709.value;
int64_t $tmp736 = $tmp734.value;
int64_t $tmp737 = $tmp735 - $tmp736;
frost$core$Int64 $tmp738 = (frost$core$Int64) {$tmp737};
frost$core$UInt64 $tmp739 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp738);
if ($tmp711) goto block30; else goto block31;
block30:;
uint64_t $tmp740 = $tmp739.value;
uint64_t $tmp741 = $tmp713.value;
bool $tmp742 = $tmp740 >= $tmp741;
frost$core$Bit $tmp743 = (frost$core$Bit) {$tmp742};
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block29; else goto block23;
block31:;
uint64_t $tmp745 = $tmp739.value;
uint64_t $tmp746 = $tmp713.value;
bool $tmp747 = $tmp745 > $tmp746;
frost$core$Bit $tmp748 = (frost$core$Bit) {$tmp747};
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block29; else goto block23;
block29:;
int64_t $tmp750 = $tmp734.value;
int64_t $tmp751 = $tmp712.value;
int64_t $tmp752 = $tmp750 + $tmp751;
frost$core$Int64 $tmp753 = (frost$core$Int64) {$tmp752};
*(&local5) = $tmp753;
goto block22;
block23:;
// line 280
frost$collections$HashMap$Entry** $tmp754 = *(&local0);
frostFree($tmp754);
goto block2;
block2:;
return;

}
frost$collections$Iterator* frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT(frost$collections$HashMap* param0) {

// line 286
FROST_ASSERT(40 == sizeof(frost$collections$HashMap$EntryIterator));
frost$collections$HashMap$EntryIterator* $tmp755 = (frost$collections$HashMap$EntryIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$HashMap$EntryIterator$class);
frost$collections$HashMap$EntryIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT($tmp755, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp755)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
return ((frost$collections$Iterator*) $tmp755);

}
frost$core$Int64 frost$collections$HashMap$get_count$R$frost$core$Int64(frost$collections$HashMap* param0) {

// line 291
frost$core$Int64* $tmp756 = &param0->_count;
frost$core$Int64 $tmp757 = *$tmp756;
return $tmp757;

}
frost$core$String* frost$collections$HashMap$get_asString$R$frost$core$String(frost$collections$HashMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$collections$HashMap$Entry* local3 = NULL;
// line 302
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp758 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp758);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
frost$core$MutableString* $tmp759 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local0) = $tmp758;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
// line 303
frost$core$MutableString* $tmp760 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp760, &$s761);
// line 304
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s762));
frost$core$String* $tmp763 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local1) = &$s764;
// line 305
frost$core$Int64 $tmp765 = (frost$core$Int64) {0};
frost$core$Int64* $tmp766 = &param0->bucketCount;
frost$core$Int64 $tmp767 = *$tmp766;
frost$core$Bit $tmp768 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp769 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp765, $tmp767, $tmp768);
frost$core$Int64 $tmp770 = $tmp769.min;
*(&local2) = $tmp770;
frost$core$Int64 $tmp771 = $tmp769.max;
frost$core$Bit $tmp772 = $tmp769.inclusive;
bool $tmp773 = $tmp772.value;
frost$core$Int64 $tmp774 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp775 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp774);
if ($tmp773) goto block4; else goto block5;
block4:;
int64_t $tmp776 = $tmp770.value;
int64_t $tmp777 = $tmp771.value;
bool $tmp778 = $tmp776 <= $tmp777;
frost$core$Bit $tmp779 = (frost$core$Bit) {$tmp778};
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block1; else goto block2;
block5:;
int64_t $tmp781 = $tmp770.value;
int64_t $tmp782 = $tmp771.value;
bool $tmp783 = $tmp781 < $tmp782;
frost$core$Bit $tmp784 = (frost$core$Bit) {$tmp783};
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block1; else goto block2;
block1:;
// line 306
frost$collections$HashMap$Entry*** $tmp786 = &param0->contents;
frost$collections$HashMap$Entry** $tmp787 = *$tmp786;
frost$core$Int64 $tmp788 = *(&local2);
int64_t $tmp789 = $tmp788.value;
frost$collections$HashMap$Entry* $tmp790 = $tmp787[$tmp789];
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$collections$HashMap$Entry* $tmp791 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local3) = $tmp790;
// line 307
goto block6;
block6:;
frost$collections$HashMap$Entry* $tmp792 = *(&local3);
frost$core$Bit $tmp793 = frost$core$Bit$init$builtin_bit($tmp792 != NULL);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block7; else goto block8;
block7:;
// line 308
frost$core$MutableString* $tmp795 = *(&local0);
frost$core$String* $tmp796 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp795, $tmp796);
// line 309
frost$collections$HashMap$Entry* $tmp797 = *(&local3);
frost$collections$Key** $tmp798 = &$tmp797->key;
frost$collections$Key* $tmp799 = *$tmp798;
frost$core$Bit $tmp800 = frost$core$Bit$init$builtin_bit(true);
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block9; else goto block11;
block9:;
// line 310
frost$core$MutableString* $tmp802 = *(&local0);
frost$collections$HashMap$Entry* $tmp803 = *(&local3);
frost$collections$Key** $tmp804 = &$tmp803->key;
frost$collections$Key* $tmp805 = *$tmp804;
frost$core$MutableString$append$frost$core$Object($tmp802, ((frost$core$Object*) $tmp805));
goto block10;
block11:;
// line 1
// line 313
frost$core$MutableString* $tmp806 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp806, &$s807);
goto block10;
block10:;
// line 315
frost$core$MutableString* $tmp808 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp808, &$s809);
// line 316
frost$collections$HashMap$Entry* $tmp810 = *(&local3);
frost$core$Object** $tmp811 = &$tmp810->value;
frost$core$Object* $tmp812 = *$tmp811;
frost$core$Bit $tmp813 = frost$core$Bit$init$builtin_bit(true);
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block12; else goto block14;
block12:;
// line 317
frost$core$MutableString* $tmp815 = *(&local0);
frost$collections$HashMap$Entry* $tmp816 = *(&local3);
frost$core$Object** $tmp817 = &$tmp816->value;
frost$core$Object* $tmp818 = *$tmp817;
frost$core$MutableString$append$frost$core$Object($tmp815, $tmp818);
goto block13;
block14:;
// line 1
// line 320
frost$core$MutableString* $tmp819 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp819, &$s820);
goto block13;
block13:;
// line 322
frost$collections$HashMap$Entry* $tmp821 = *(&local3);
frost$collections$HashMap$Entry** $tmp822 = &$tmp821->next;
frost$collections$HashMap$Entry* $tmp823 = *$tmp822;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$collections$HashMap$Entry* $tmp824 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local3) = $tmp823;
// line 323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s825));
frost$core$String* $tmp826 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
*(&local1) = &$s827;
goto block6;
block8:;
frost$collections$HashMap$Entry* $tmp828 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp829 = *(&local2);
int64_t $tmp830 = $tmp771.value;
int64_t $tmp831 = $tmp829.value;
int64_t $tmp832 = $tmp830 - $tmp831;
frost$core$Int64 $tmp833 = (frost$core$Int64) {$tmp832};
frost$core$UInt64 $tmp834 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp833);
if ($tmp773) goto block16; else goto block17;
block16:;
uint64_t $tmp835 = $tmp834.value;
uint64_t $tmp836 = $tmp775.value;
bool $tmp837 = $tmp835 >= $tmp836;
frost$core$Bit $tmp838 = (frost$core$Bit) {$tmp837};
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block15; else goto block2;
block17:;
uint64_t $tmp840 = $tmp834.value;
uint64_t $tmp841 = $tmp775.value;
bool $tmp842 = $tmp840 > $tmp841;
frost$core$Bit $tmp843 = (frost$core$Bit) {$tmp842};
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block15; else goto block2;
block15:;
int64_t $tmp845 = $tmp829.value;
int64_t $tmp846 = $tmp774.value;
int64_t $tmp847 = $tmp845 + $tmp846;
frost$core$Int64 $tmp848 = (frost$core$Int64) {$tmp847};
*(&local2) = $tmp848;
goto block1;
block2:;
// line 326
frost$core$MutableString* $tmp849 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp849, &$s850);
// line 327
frost$core$MutableString* $tmp851 = *(&local0);
frost$core$String* $tmp852 = frost$core$MutableString$finish$R$frost$core$String($tmp851);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$String* $tmp853 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp854 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp852;

}

