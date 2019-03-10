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
#include "frost/core/Int.h"
#include "frost/core/Int64.h"
#include "frost/collections/HashMap/Entry.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
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

struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$collections$HashMap$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, NULL, { frost$collections$HashMap$get_count$R$frost$core$Int, frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim, frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim, frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT$shim, frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT, frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$HashMap$_frost$collections$Map = { (frost$core$Class*) &frost$collections$Map$class, (ITable*) &frost$collections$HashMap$_frost$collections$MapView, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$HashMap$_frost$collections$MapWriter = { (frost$core$Class*) &frost$collections$MapWriter$class, (ITable*) &frost$collections$HashMap$_frost$collections$Map, { frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim, frost$collections$HashMap$remove$frost$collections$HashMap$K$shim, frost$collections$HashMap$clear} };

static frost$core$String $s1;
frost$collections$HashMap$class_type frost$collections$HashMap$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashMap$_frost$collections$MapWriter, { frost$collections$HashMap$get_asString$R$frost$core$String, frost$collections$HashMap$cleanup, frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int, frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim, frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim, frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim, frost$collections$HashMap$remove$frost$collections$HashMap$K$shim, frost$collections$HashMap$clear, frost$collections$HashMap$incrementCount, frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT$shim, frost$collections$HashMap$get_count$R$frost$core$Int} };

typedef frost$collections$Iterator* (*$fn82)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn86)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn91)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn105)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn109)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn114)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn184)(frost$collections$Key*);
typedef frost$core$Bit (*$fn256)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn287)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn321)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn389)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn424)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn847)(frost$core$Object*);
typedef frost$core$String* (*$fn863)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7274947228716971358, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, -4513074356147737087, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };

void frost$collections$HashMap$init(frost$collections$HashMap* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:95
frost$core$Int $tmp2 = (frost$core$Int) {0u};
frost$core$Int* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:101
frost$core$Int* $tmp4 = &param0->changeCount;
frost$core$Int $tmp5 = *$tmp4;
frost$core$Int $tmp6 = (frost$core$Int) {1u};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
frost$core$Int $tmp10 = (frost$core$Int) {$tmp9};
frost$core$Int* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:102
frost$core$Int $tmp12 = (frost$core$Int) {0u};
frost$core$Int* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:103
frost$core$Int $tmp14 = (frost$core$Int) {16u};
frost$core$Int* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:104
frost$core$Int* $tmp16 = &param0->bucketCount;
frost$core$Int $tmp17 = *$tmp16;
frost$core$Int64 $tmp18 = frost$core$Int64$init$frost$core$Int($tmp17);
int64_t $tmp19 = $tmp18.value;
frost$collections$HashMap$Entry** $tmp20 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp19 * 8));
frost$collections$HashMap$Entry*** $tmp21 = &param0->contents;
*$tmp21 = $tmp20;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:105
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:106
frost$collections$HashMap$Entry*** $tmp42 = &param0->contents;
frost$collections$HashMap$Entry** $tmp43 = *$tmp42;
frost$core$Int $tmp44 = *(&local0);
frost$core$Int64 $tmp45 = frost$core$Int64$init$frost$core$Int($tmp44);
int64_t $tmp46 = $tmp45.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp47 = $tmp43[$tmp46];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
$tmp43[$tmp46] = ((frost$collections$HashMap$Entry*) NULL);
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:108
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
void frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT(frost$collections$HashMap* param0, frost$collections$MapView* param1) {

frost$collections$Key* local0 = NULL;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:112
frost$collections$HashMap$init(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:113
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:114
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:119
frost$collections$HashMap$init(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:120
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:121
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

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:127
frost$core$Int $tmp124 = (frost$core$Int) {0u};
frost$core$Int* $tmp125 = &param0->bucketCount;
frost$core$Int $tmp126 = *$tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp128 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp124, $tmp126, $tmp127);
frost$core$Int $tmp129 = $tmp128.min;
*(&local0) = $tmp129;
frost$core$Int $tmp130 = $tmp128.max;
frost$core$Bit $tmp131 = $tmp128.inclusive;
bool $tmp132 = $tmp131.value;
frost$core$Int $tmp133 = (frost$core$Int) {1u};
if ($tmp132) goto block4; else goto block5;
block4:;
int64_t $tmp134 = $tmp129.value;
int64_t $tmp135 = $tmp130.value;
bool $tmp136 = $tmp134 <= $tmp135;
frost$core$Bit $tmp137 = (frost$core$Bit) {$tmp136};
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block1; else goto block2;
block5:;
int64_t $tmp139 = $tmp129.value;
int64_t $tmp140 = $tmp130.value;
bool $tmp141 = $tmp139 < $tmp140;
frost$core$Bit $tmp142 = (frost$core$Bit) {$tmp141};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:128
frost$collections$HashMap$Entry*** $tmp144 = &param0->contents;
frost$collections$HashMap$Entry** $tmp145 = *$tmp144;
frost$core$Int $tmp146 = *(&local0);
frost$core$Int64 $tmp147 = frost$core$Int64$init$frost$core$Int($tmp146);
int64_t $tmp148 = $tmp147.value;
frost$collections$HashMap$Entry* $tmp149 = $tmp145[$tmp148];
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149 != NULL};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:129
frost$collections$HashMap$Entry*** $tmp152 = &param0->contents;
frost$collections$HashMap$Entry** $tmp153 = *$tmp152;
frost$core$Int $tmp154 = *(&local0);
frost$core$Int64 $tmp155 = frost$core$Int64$init$frost$core$Int($tmp154);
int64_t $tmp156 = $tmp155.value;
frost$collections$HashMap$Entry* $tmp157 = $tmp153[$tmp156];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
goto block7;
block7:;
frost$core$Int $tmp158 = *(&local0);
int64_t $tmp159 = $tmp130.value;
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159 - $tmp160;
frost$core$Int $tmp162 = (frost$core$Int) {$tmp161};
if ($tmp132) goto block9; else goto block10;
block9:;
int64_t $tmp163 = $tmp162.value;
int64_t $tmp164 = $tmp133.value;
bool $tmp165 = $tmp163 >= $tmp164;
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block8; else goto block2;
block10:;
int64_t $tmp168 = $tmp162.value;
int64_t $tmp169 = $tmp133.value;
bool $tmp170 = $tmp168 > $tmp169;
frost$core$Bit $tmp171 = (frost$core$Bit) {$tmp170};
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block8; else goto block2;
block8:;
int64_t $tmp173 = $tmp158.value;
int64_t $tmp174 = $tmp133.value;
int64_t $tmp175 = $tmp173 + $tmp174;
frost$core$Int $tmp176 = (frost$core$Int) {$tmp175};
*(&local0) = $tmp176;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:132
frost$collections$HashMap$Entry*** $tmp177 = &param0->contents;
frost$collections$HashMap$Entry** $tmp178 = *$tmp177;
frostFree($tmp178);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:126
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Int frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:140
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:141
frost$core$Bit $tmp179 = (frost$core$Bit) {false};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:142
frost$core$Int $tmp181 = (frost$core$Int) {0u};
*(&local0) = $tmp181;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:145
ITable* $tmp182 = param1->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
frost$core$Int $tmp185 = $tmp183(param1);
*(&local0) = $tmp185;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:149
frost$core$Int $tmp186 = *(&local0);
frost$core$Int $tmp187 = *(&local0);
frost$core$Int $tmp188 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.>>(other:frost.core.Int):frost.core.Int from HashMap.frost:149:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:395
int64_t $tmp189 = $tmp187.value;
int64_t $tmp190 = $tmp188.value;
int64_t $tmp191 = $tmp189 >> $tmp190;
frost$core$Int $tmp192 = (frost$core$Int) {$tmp191};
frost$core$Int $tmp193 = *(&local0);
frost$core$Int $tmp194 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.>>(other:frost.core.Int):frost.core.Int from HashMap.frost:149:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:395
int64_t $tmp195 = $tmp193.value;
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195 >> $tmp196;
frost$core$Int $tmp198 = (frost$core$Int) {$tmp197};
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from HashMap.frost:149:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:365
int64_t $tmp199 = $tmp192.value;
int64_t $tmp200 = $tmp198.value;
int64_t $tmp201 = $tmp199 ^ $tmp200;
frost$core$Int $tmp202 = (frost$core$Int) {$tmp201};
frost$core$Int $tmp203 = *(&local0);
frost$core$Int $tmp204 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.>>(other:frost.core.Int):frost.core.Int from HashMap.frost:149:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:395
int64_t $tmp205 = $tmp203.value;
int64_t $tmp206 = $tmp204.value;
int64_t $tmp207 = $tmp205 >> $tmp206;
frost$core$Int $tmp208 = (frost$core$Int) {$tmp207};
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from HashMap.frost:149:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:365
int64_t $tmp209 = $tmp202.value;
int64_t $tmp210 = $tmp208.value;
int64_t $tmp211 = $tmp209 ^ $tmp210;
frost$core$Int $tmp212 = (frost$core$Int) {$tmp211};
frost$core$Int $tmp213 = *(&local0);
frost$core$Int $tmp214 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.>>(other:frost.core.Int):frost.core.Int from HashMap.frost:149:59
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:395
int64_t $tmp215 = $tmp213.value;
int64_t $tmp216 = $tmp214.value;
int64_t $tmp217 = $tmp215 >> $tmp216;
frost$core$Int $tmp218 = (frost$core$Int) {$tmp217};
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from HashMap.frost:149:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:365
int64_t $tmp219 = $tmp212.value;
int64_t $tmp220 = $tmp218.value;
int64_t $tmp221 = $tmp219 ^ $tmp220;
frost$core$Int $tmp222 = (frost$core$Int) {$tmp221};
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from HashMap.frost:149:9
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:365
int64_t $tmp223 = $tmp186.value;
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223 ^ $tmp224;
frost$core$Int $tmp226 = (frost$core$Int) {$tmp225};
*(&local0) = $tmp226;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:152
frost$core$Int $tmp227 = *(&local0);
frost$core$Int* $tmp228 = &param0->bucketCount;
frost$core$Int $tmp229 = *$tmp228;
frost$core$Int $tmp230 = (frost$core$Int) {1u};
int64_t $tmp231 = $tmp229.value;
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231 - $tmp232;
frost$core$Int $tmp234 = (frost$core$Int) {$tmp233};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from HashMap.frost:152:9
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:293
int64_t $tmp235 = $tmp227.value;
int64_t $tmp236 = $tmp234.value;
int64_t $tmp237 = $tmp235 & $tmp236;
frost$core$Int $tmp238 = (frost$core$Int) {$tmp237};
*(&local0) = $tmp238;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:153
frost$core$Int $tmp239 = *(&local0);
return $tmp239;

}
frost$core$Object* frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int local0;
frost$collections$HashMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:158
frost$core$Int $tmp240 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int(param0, param1);
*(&local0) = $tmp240;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:159
frost$collections$HashMap$Entry*** $tmp241 = &param0->contents;
frost$collections$HashMap$Entry** $tmp242 = *$tmp241;
frost$core$Int $tmp243 = *(&local0);
frost$core$Int64 $tmp244 = frost$core$Int64$init$frost$core$Int($tmp243);
int64_t $tmp245 = $tmp244.value;
frost$collections$HashMap$Entry* $tmp246 = $tmp242[$tmp245];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$collections$HashMap$Entry* $tmp247 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local1) = $tmp246;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:160
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp248 = *(&local1);
frost$core$Bit $tmp249 = (frost$core$Bit) {$tmp248 != NULL};
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp251 = *(&local1);
frost$collections$Key** $tmp252 = &$tmp251->key;
frost$collections$Key* $tmp253 = *$tmp252;
ITable* $tmp254 = ((frost$core$Equatable*) $tmp253)->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[1];
frost$core$Bit $tmp257 = $tmp255(((frost$core$Equatable*) $tmp253), ((frost$core$Equatable*) param1));
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:161
frost$collections$HashMap$Entry* $tmp259 = *(&local1);
frost$collections$HashMap$Entry** $tmp260 = &$tmp259->next;
frost$collections$HashMap$Entry* $tmp261 = *$tmp260;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$collections$HashMap$Entry* $tmp262 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local1) = $tmp261;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:163
frost$collections$HashMap$Entry* $tmp263 = *(&local1);
frost$core$Bit $tmp264 = (frost$core$Bit) {$tmp263 != NULL};
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:164
frost$collections$HashMap$Entry* $tmp266 = *(&local1);
frost$core$Object** $tmp267 = &$tmp266->value;
frost$core$Object* $tmp268 = *$tmp267;
frost$core$Frost$ref$frost$core$Object$Q($tmp268);
frost$collections$HashMap$Entry* $tmp269 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp268;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$HashMap$Entry* $tmp270 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block6:;
goto block8;
block8:;

}
frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int local0;
frost$collections$HashMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:173
frost$core$Int $tmp271 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int(param0, param1);
*(&local0) = $tmp271;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:174
frost$collections$HashMap$Entry*** $tmp272 = &param0->contents;
frost$collections$HashMap$Entry** $tmp273 = *$tmp272;
frost$core$Int $tmp274 = *(&local0);
frost$core$Int64 $tmp275 = frost$core$Int64$init$frost$core$Int($tmp274);
int64_t $tmp276 = $tmp275.value;
frost$collections$HashMap$Entry* $tmp277 = $tmp273[$tmp276];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$collections$HashMap$Entry* $tmp278 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local1) = $tmp277;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:175
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp279 = *(&local1);
frost$core$Bit $tmp280 = (frost$core$Bit) {$tmp279 != NULL};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp282 = *(&local1);
frost$collections$Key** $tmp283 = &$tmp282->key;
frost$collections$Key* $tmp284 = *$tmp283;
ITable* $tmp285 = ((frost$core$Equatable*) $tmp284)->$class->itable;
while ($tmp285->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp285 = $tmp285->next;
}
$fn287 $tmp286 = $tmp285->methods[1];
frost$core$Bit $tmp288 = $tmp286(((frost$core$Equatable*) $tmp284), ((frost$core$Equatable*) param1));
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:176
frost$collections$HashMap$Entry* $tmp290 = *(&local1);
frost$collections$HashMap$Entry** $tmp291 = &$tmp290->next;
frost$collections$HashMap$Entry* $tmp292 = *$tmp291;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$collections$HashMap$Entry* $tmp293 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local1) = $tmp292;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:178
frost$collections$HashMap$Entry* $tmp294 = *(&local1);
frost$core$Bit $tmp295 = (frost$core$Bit) {$tmp294 != NULL};
frost$collections$HashMap$Entry* $tmp296 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp295;

}
void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(frost$collections$HashMap* param0, frost$collections$Key* param1, frost$core$Object* param2) {

frost$core$Int local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$collections$HashMap$Entry* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:183
frost$core$Int* $tmp297 = &param0->changeCount;
frost$core$Int $tmp298 = *$tmp297;
frost$core$Int $tmp299 = (frost$core$Int) {1u};
int64_t $tmp300 = $tmp298.value;
int64_t $tmp301 = $tmp299.value;
int64_t $tmp302 = $tmp300 + $tmp301;
frost$core$Int $tmp303 = (frost$core$Int) {$tmp302};
frost$core$Int* $tmp304 = &param0->changeCount;
*$tmp304 = $tmp303;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:184
frost$core$Int $tmp305 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int(param0, param1);
*(&local0) = $tmp305;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:185
frost$collections$HashMap$Entry*** $tmp306 = &param0->contents;
frost$collections$HashMap$Entry** $tmp307 = *$tmp306;
frost$core$Int $tmp308 = *(&local0);
frost$core$Int64 $tmp309 = frost$core$Int64$init$frost$core$Int($tmp308);
int64_t $tmp310 = $tmp309.value;
frost$collections$HashMap$Entry* $tmp311 = $tmp307[$tmp310];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
frost$collections$HashMap$Entry* $tmp312 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local1) = $tmp311;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:186
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp313 = *(&local1);
frost$core$Bit $tmp314 = (frost$core$Bit) {$tmp313 != NULL};
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp316 = *(&local1);
frost$collections$Key** $tmp317 = &$tmp316->key;
frost$collections$Key* $tmp318 = *$tmp317;
ITable* $tmp319 = ((frost$core$Equatable*) $tmp318)->$class->itable;
while ($tmp319->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp319 = $tmp319->next;
}
$fn321 $tmp320 = $tmp319->methods[1];
frost$core$Bit $tmp322 = $tmp320(((frost$core$Equatable*) $tmp318), ((frost$core$Equatable*) param1));
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:187
frost$collections$HashMap$Entry* $tmp324 = *(&local1);
frost$collections$HashMap$Entry** $tmp325 = &$tmp324->next;
frost$collections$HashMap$Entry* $tmp326 = *$tmp325;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$collections$HashMap$Entry* $tmp327 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local1) = $tmp326;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:189
frost$collections$HashMap$Entry* $tmp328 = *(&local1);
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328 == NULL};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:190
frost$collections$HashMap$Entry*** $tmp331 = &param0->contents;
frost$collections$HashMap$Entry** $tmp332 = *$tmp331;
frost$core$Int $tmp333 = *(&local0);
frost$core$Int64 $tmp334 = frost$core$Int64$init$frost$core$Int($tmp333);
int64_t $tmp335 = $tmp334.value;
frost$collections$HashMap$Entry* $tmp336 = $tmp332[$tmp335];
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$collections$HashMap$Entry* $tmp337 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local2) = $tmp336;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:191
FROST_ASSERT(40 == sizeof(frost$collections$HashMap$Entry));
frost$collections$HashMap$Entry* $tmp338 = (frost$collections$HashMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$HashMap$Entry$class);
// begin inline call to frost.collections.HashMap.Entry.init(key:frost.collections.HashMap.Entry.K, value:frost.collections.HashMap.Entry.V) from HashMap.frost:191:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:35
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Key** $tmp339 = &$tmp338->key;
frost$collections$Key* $tmp340 = *$tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$collections$Key** $tmp341 = &$tmp338->key;
*$tmp341 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:36
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp342 = &$tmp338->value;
frost$core$Object* $tmp343 = *$tmp342;
frost$core$Frost$unref$frost$core$Object$Q($tmp343);
frost$core$Object** $tmp344 = &$tmp338->value;
*$tmp344 = param2;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$collections$HashMap$Entry* $tmp345 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local1) = $tmp338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:192
frost$collections$HashMap$Entry* $tmp346 = *(&local1);
frost$collections$HashMap$Entry* $tmp347 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$collections$HashMap$Entry** $tmp348 = &$tmp346->next;
frost$collections$HashMap$Entry* $tmp349 = *$tmp348;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
frost$collections$HashMap$Entry** $tmp350 = &$tmp346->next;
*$tmp350 = $tmp347;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:193
frost$collections$HashMap$Entry*** $tmp351 = &param0->contents;
frost$collections$HashMap$Entry** $tmp352 = *$tmp351;
frost$core$Int $tmp353 = *(&local0);
frost$core$Int64 $tmp354 = frost$core$Int64$init$frost$core$Int($tmp353);
frost$collections$HashMap$Entry* $tmp355 = *(&local1);
int64_t $tmp356 = $tmp354.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$collections$HashMap$Entry* $tmp357 = $tmp352[$tmp356];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
$tmp352[$tmp356] = $tmp355;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:194
frost$collections$HashMap$incrementCount(param0);
frost$collections$HashMap$Entry* $tmp358 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:197
frost$collections$HashMap$Entry* $tmp359 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp360 = &$tmp359->value;
frost$core$Object* $tmp361 = *$tmp360;
frost$core$Frost$unref$frost$core$Object$Q($tmp361);
frost$core$Object** $tmp362 = &$tmp359->value;
*$tmp362 = param2;
goto block6;
block6:;
frost$collections$HashMap$Entry* $tmp363 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$remove$frost$collections$HashMap$K(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$collections$HashMap$Entry* local2 = NULL;
frost$collections$HashMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:203
frost$core$Int* $tmp364 = &param0->changeCount;
frost$core$Int $tmp365 = *$tmp364;
frost$core$Int $tmp366 = (frost$core$Int) {1u};
int64_t $tmp367 = $tmp365.value;
int64_t $tmp368 = $tmp366.value;
int64_t $tmp369 = $tmp367 + $tmp368;
frost$core$Int $tmp370 = (frost$core$Int) {$tmp369};
frost$core$Int* $tmp371 = &param0->changeCount;
*$tmp371 = $tmp370;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:204
frost$core$Int $tmp372 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int(param0, param1);
*(&local0) = $tmp372;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:205
frost$collections$HashMap$Entry*** $tmp373 = &param0->contents;
frost$collections$HashMap$Entry** $tmp374 = *$tmp373;
frost$core$Int $tmp375 = *(&local0);
frost$core$Int64 $tmp376 = frost$core$Int64$init$frost$core$Int($tmp375);
int64_t $tmp377 = $tmp376.value;
frost$collections$HashMap$Entry* $tmp378 = $tmp374[$tmp377];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$collections$HashMap$Entry* $tmp379 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local1) = $tmp378;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:207
frost$collections$HashMap$Entry* $tmp380 = *(&local1);
frost$core$Bit $tmp381 = (frost$core$Bit) {$tmp380 == NULL};
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:208
frost$collections$HashMap$Entry* $tmp383 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:211
frost$collections$HashMap$Entry* $tmp384 = *(&local1);
frost$collections$Key** $tmp385 = &$tmp384->key;
frost$collections$Key* $tmp386 = *$tmp385;
ITable* $tmp387 = ((frost$core$Equatable*) $tmp386)->$class->itable;
while ($tmp387->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp387 = $tmp387->next;
}
$fn389 $tmp388 = $tmp387->methods[0];
frost$core$Bit $tmp390 = $tmp388(((frost$core$Equatable*) $tmp386), ((frost$core$Equatable*) param1));
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:212
frost$collections$HashMap$Entry*** $tmp392 = &param0->contents;
frost$collections$HashMap$Entry** $tmp393 = *$tmp392;
frost$core$Int $tmp394 = *(&local0);
frost$core$Int64 $tmp395 = frost$core$Int64$init$frost$core$Int($tmp394);
frost$collections$HashMap$Entry* $tmp396 = *(&local1);
frost$collections$HashMap$Entry** $tmp397 = &$tmp396->next;
frost$collections$HashMap$Entry* $tmp398 = *$tmp397;
int64_t $tmp399 = $tmp395.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$collections$HashMap$Entry* $tmp400 = $tmp393[$tmp399];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
$tmp393[$tmp399] = $tmp398;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:213
frost$core$Int* $tmp401 = &param0->_count;
frost$core$Int $tmp402 = *$tmp401;
frost$core$Int $tmp403 = (frost$core$Int) {1u};
int64_t $tmp404 = $tmp402.value;
int64_t $tmp405 = $tmp403.value;
int64_t $tmp406 = $tmp404 - $tmp405;
frost$core$Int $tmp407 = (frost$core$Int) {$tmp406};
frost$core$Int* $tmp408 = &param0->_count;
*$tmp408 = $tmp407;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:214
frost$collections$HashMap$Entry* $tmp409 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:216
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:217
frost$collections$HashMap$Entry* $tmp410 = *(&local1);
frost$collections$HashMap$Entry** $tmp411 = &$tmp410->next;
frost$collections$HashMap$Entry* $tmp412 = *$tmp411;
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$collections$HashMap$Entry* $tmp413 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local2) = $tmp412;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:218
frost$collections$HashMap$Entry* $tmp414 = *(&local2);
frost$core$Bit $tmp415 = (frost$core$Bit) {$tmp414 == NULL};
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:220
frost$collections$HashMap$Entry* $tmp417 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp418 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:222
frost$collections$HashMap$Entry* $tmp419 = *(&local2);
frost$collections$Key** $tmp420 = &$tmp419->key;
frost$collections$Key* $tmp421 = *$tmp420;
ITable* $tmp422 = ((frost$core$Equatable*) $tmp421)->$class->itable;
while ($tmp422->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp422 = $tmp422->next;
}
$fn424 $tmp423 = $tmp422->methods[0];
frost$core$Bit $tmp425 = $tmp423(((frost$core$Equatable*) $tmp421), ((frost$core$Equatable*) param1));
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:224
frost$collections$HashMap$Entry* $tmp427 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:229
frost$collections$HashMap$Entry* $tmp428 = *(&local1);
frost$collections$HashMap$Entry** $tmp429 = &$tmp428->next;
frost$collections$HashMap$Entry* $tmp430 = *$tmp429;
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
frost$collections$HashMap$Entry* $tmp431 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local3) = $tmp430;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:230
frost$collections$HashMap$Entry* $tmp432 = *(&local3);
frost$core$Bit $tmp433 = (frost$core$Bit) {$tmp432 != NULL};
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block11; else goto block12;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:226
frost$collections$HashMap$Entry* $tmp435 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$collections$HashMap$Entry* $tmp436 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
*(&local1) = $tmp435;
frost$collections$HashMap$Entry* $tmp437 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block5;
block12:;
frost$core$Int $tmp438 = (frost$core$Int) {230u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s439, $tmp438);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:231
frost$collections$HashMap$Entry* $tmp440 = *(&local1);
frost$collections$HashMap$Entry* $tmp441 = *(&local3);
frost$collections$HashMap$Entry** $tmp442 = &$tmp441->next;
frost$collections$HashMap$Entry* $tmp443 = *$tmp442;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$collections$HashMap$Entry** $tmp444 = &$tmp440->next;
frost$collections$HashMap$Entry* $tmp445 = *$tmp444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$collections$HashMap$Entry** $tmp446 = &$tmp440->next;
*$tmp446 = $tmp443;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:232
frost$core$Int* $tmp447 = &param0->_count;
frost$core$Int $tmp448 = *$tmp447;
frost$core$Int $tmp449 = (frost$core$Int) {1u};
int64_t $tmp450 = $tmp448.value;
int64_t $tmp451 = $tmp449.value;
int64_t $tmp452 = $tmp450 - $tmp451;
frost$core$Int $tmp453 = (frost$core$Int) {$tmp452};
frost$core$Int* $tmp454 = &param0->_count;
*$tmp454 = $tmp453;
frost$collections$HashMap$Entry* $tmp455 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp456 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$clear(frost$collections$HashMap* param0) {

frost$core$Int local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:237
frost$core$Int* $tmp457 = &param0->changeCount;
frost$core$Int $tmp458 = *$tmp457;
frost$core$Int $tmp459 = (frost$core$Int) {1u};
int64_t $tmp460 = $tmp458.value;
int64_t $tmp461 = $tmp459.value;
int64_t $tmp462 = $tmp460 + $tmp461;
frost$core$Int $tmp463 = (frost$core$Int) {$tmp462};
frost$core$Int* $tmp464 = &param0->changeCount;
*$tmp464 = $tmp463;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:238
frost$core$Int $tmp465 = (frost$core$Int) {0u};
frost$core$Int* $tmp466 = &param0->_count;
*$tmp466 = $tmp465;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:239
frost$core$Int $tmp467 = (frost$core$Int) {0u};
frost$core$Int* $tmp468 = &param0->bucketCount;
frost$core$Int $tmp469 = *$tmp468;
frost$core$Bit $tmp470 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp471 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp467, $tmp469, $tmp470);
frost$core$Int $tmp472 = $tmp471.min;
*(&local0) = $tmp472;
frost$core$Int $tmp473 = $tmp471.max;
frost$core$Bit $tmp474 = $tmp471.inclusive;
bool $tmp475 = $tmp474.value;
frost$core$Int $tmp476 = (frost$core$Int) {1u};
if ($tmp475) goto block4; else goto block5;
block4:;
int64_t $tmp477 = $tmp472.value;
int64_t $tmp478 = $tmp473.value;
bool $tmp479 = $tmp477 <= $tmp478;
frost$core$Bit $tmp480 = (frost$core$Bit) {$tmp479};
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block1; else goto block2;
block5:;
int64_t $tmp482 = $tmp472.value;
int64_t $tmp483 = $tmp473.value;
bool $tmp484 = $tmp482 < $tmp483;
frost$core$Bit $tmp485 = (frost$core$Bit) {$tmp484};
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:240
frost$collections$HashMap$Entry*** $tmp487 = &param0->contents;
frost$collections$HashMap$Entry** $tmp488 = *$tmp487;
frost$core$Int $tmp489 = *(&local0);
frost$core$Int64 $tmp490 = frost$core$Int64$init$frost$core$Int($tmp489);
int64_t $tmp491 = $tmp490.value;
frost$collections$HashMap$Entry* $tmp492 = $tmp488[$tmp491];
frost$core$Bit $tmp493 = (frost$core$Bit) {$tmp492 != NULL};
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:241
frost$collections$HashMap$Entry*** $tmp495 = &param0->contents;
frost$collections$HashMap$Entry** $tmp496 = *$tmp495;
frost$core$Int $tmp497 = *(&local0);
frost$core$Int64 $tmp498 = frost$core$Int64$init$frost$core$Int($tmp497);
int64_t $tmp499 = $tmp498.value;
frost$collections$HashMap$Entry* $tmp500 = $tmp496[$tmp499];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
goto block7;
block7:;
frost$core$Int $tmp501 = *(&local0);
int64_t $tmp502 = $tmp473.value;
int64_t $tmp503 = $tmp501.value;
int64_t $tmp504 = $tmp502 - $tmp503;
frost$core$Int $tmp505 = (frost$core$Int) {$tmp504};
if ($tmp475) goto block9; else goto block10;
block9:;
int64_t $tmp506 = $tmp505.value;
int64_t $tmp507 = $tmp476.value;
bool $tmp508 = $tmp506 >= $tmp507;
frost$core$Bit $tmp509 = (frost$core$Bit) {$tmp508};
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block8; else goto block2;
block10:;
int64_t $tmp511 = $tmp505.value;
int64_t $tmp512 = $tmp476.value;
bool $tmp513 = $tmp511 > $tmp512;
frost$core$Bit $tmp514 = (frost$core$Bit) {$tmp513};
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block8; else goto block2;
block8:;
int64_t $tmp516 = $tmp501.value;
int64_t $tmp517 = $tmp476.value;
int64_t $tmp518 = $tmp516 + $tmp517;
frost$core$Int $tmp519 = (frost$core$Int) {$tmp518};
*(&local0) = $tmp519;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:244
frost$collections$HashMap$Entry*** $tmp520 = &param0->contents;
frost$collections$HashMap$Entry** $tmp521 = *$tmp520;
frostFree($tmp521);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:245
frost$core$Int $tmp522 = (frost$core$Int) {16u};
frost$core$Int* $tmp523 = &param0->bucketCount;
*$tmp523 = $tmp522;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:246
frost$core$Int* $tmp524 = &param0->bucketCount;
frost$core$Int $tmp525 = *$tmp524;
frost$core$Int64 $tmp526 = frost$core$Int64$init$frost$core$Int($tmp525);
int64_t $tmp527 = $tmp526.value;
frost$collections$HashMap$Entry** $tmp528 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp527 * 8));
frost$collections$HashMap$Entry*** $tmp529 = &param0->contents;
*$tmp529 = $tmp528;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:247
frost$core$Int $tmp530 = (frost$core$Int) {0u};
frost$core$Int* $tmp531 = &param0->bucketCount;
frost$core$Int $tmp532 = *$tmp531;
frost$core$Bit $tmp533 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp534 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp530, $tmp532, $tmp533);
frost$core$Int $tmp535 = $tmp534.min;
*(&local1) = $tmp535;
frost$core$Int $tmp536 = $tmp534.max;
frost$core$Bit $tmp537 = $tmp534.inclusive;
bool $tmp538 = $tmp537.value;
frost$core$Int $tmp539 = (frost$core$Int) {1u};
if ($tmp538) goto block14; else goto block15;
block14:;
int64_t $tmp540 = $tmp535.value;
int64_t $tmp541 = $tmp536.value;
bool $tmp542 = $tmp540 <= $tmp541;
frost$core$Bit $tmp543 = (frost$core$Bit) {$tmp542};
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block11; else goto block12;
block15:;
int64_t $tmp545 = $tmp535.value;
int64_t $tmp546 = $tmp536.value;
bool $tmp547 = $tmp545 < $tmp546;
frost$core$Bit $tmp548 = (frost$core$Bit) {$tmp547};
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:248
frost$collections$HashMap$Entry*** $tmp550 = &param0->contents;
frost$collections$HashMap$Entry** $tmp551 = *$tmp550;
frost$core$Int $tmp552 = *(&local1);
frost$core$Int64 $tmp553 = frost$core$Int64$init$frost$core$Int($tmp552);
int64_t $tmp554 = $tmp553.value;
frost$collections$HashMap$Entry* $tmp555 = $tmp551[$tmp554];
frost$core$Bit $tmp556 = (frost$core$Bit) {$tmp555 != NULL};
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:249
frost$collections$HashMap$Entry*** $tmp558 = &param0->contents;
frost$collections$HashMap$Entry** $tmp559 = *$tmp558;
frost$core$Int $tmp560 = *(&local1);
frost$core$Int64 $tmp561 = frost$core$Int64$init$frost$core$Int($tmp560);
int64_t $tmp562 = $tmp561.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp563 = $tmp559[$tmp562];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
$tmp559[$tmp562] = ((frost$collections$HashMap$Entry*) NULL);
goto block17;
block17:;
frost$core$Int $tmp564 = *(&local1);
int64_t $tmp565 = $tmp536.value;
int64_t $tmp566 = $tmp564.value;
int64_t $tmp567 = $tmp565 - $tmp566;
frost$core$Int $tmp568 = (frost$core$Int) {$tmp567};
if ($tmp538) goto block19; else goto block20;
block19:;
int64_t $tmp569 = $tmp568.value;
int64_t $tmp570 = $tmp539.value;
bool $tmp571 = $tmp569 >= $tmp570;
frost$core$Bit $tmp572 = (frost$core$Bit) {$tmp571};
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block18; else goto block12;
block20:;
int64_t $tmp574 = $tmp568.value;
int64_t $tmp575 = $tmp539.value;
bool $tmp576 = $tmp574 > $tmp575;
frost$core$Bit $tmp577 = (frost$core$Bit) {$tmp576};
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block18; else goto block12;
block18:;
int64_t $tmp579 = $tmp564.value;
int64_t $tmp580 = $tmp539.value;
int64_t $tmp581 = $tmp579 + $tmp580;
frost$core$Int $tmp582 = (frost$core$Int) {$tmp581};
*(&local1) = $tmp582;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:252
frost$core$Int* $tmp583 = &param0->bucketCount;
frost$core$Int $tmp584 = *$tmp583;
frost$core$Int $tmp585 = (frost$core$Int) {3u};
int64_t $tmp586 = $tmp584.value;
int64_t $tmp587 = $tmp585.value;
int64_t $tmp588 = $tmp586 * $tmp587;
frost$core$Int $tmp589 = (frost$core$Int) {$tmp588};
frost$core$Int $tmp590 = (frost$core$Int) {4u};
int64_t $tmp591 = $tmp589.value;
int64_t $tmp592 = $tmp590.value;
int64_t $tmp593 = $tmp591 / $tmp592;
frost$core$Int $tmp594 = (frost$core$Int) {$tmp593};
frost$core$Int* $tmp595 = &param0->threshold;
*$tmp595 = $tmp594;
return;

}
void frost$collections$HashMap$incrementCount(frost$collections$HashMap* param0) {

frost$collections$HashMap$Entry** local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int local3;
frost$collections$HashMap$Entry* local4 = NULL;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:257
frost$core$Int* $tmp596 = &param0->_count;
frost$core$Int $tmp597 = *$tmp596;
frost$core$Int $tmp598 = (frost$core$Int) {1u};
int64_t $tmp599 = $tmp597.value;
int64_t $tmp600 = $tmp598.value;
int64_t $tmp601 = $tmp599 + $tmp600;
frost$core$Int $tmp602 = (frost$core$Int) {$tmp601};
frost$core$Int* $tmp603 = &param0->_count;
*$tmp603 = $tmp602;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:258
frost$core$Int* $tmp604 = &param0->_count;
frost$core$Int $tmp605 = *$tmp604;
frost$core$Int* $tmp606 = &param0->threshold;
frost$core$Int $tmp607 = *$tmp606;
int64_t $tmp608 = $tmp605.value;
int64_t $tmp609 = $tmp607.value;
bool $tmp610 = $tmp608 >= $tmp609;
frost$core$Bit $tmp611 = (frost$core$Bit) {$tmp610};
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:259
frost$collections$HashMap$Entry*** $tmp613 = &param0->contents;
frost$collections$HashMap$Entry** $tmp614 = *$tmp613;
*(&local0) = $tmp614;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:260
frost$core$Int* $tmp615 = &param0->bucketCount;
frost$core$Int $tmp616 = *$tmp615;
*(&local1) = $tmp616;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:261
frost$core$Int* $tmp617 = &param0->bucketCount;
frost$core$Int $tmp618 = *$tmp617;
frost$core$Int $tmp619 = (frost$core$Int) {2u};
int64_t $tmp620 = $tmp618.value;
int64_t $tmp621 = $tmp619.value;
int64_t $tmp622 = $tmp620 * $tmp621;
frost$core$Int $tmp623 = (frost$core$Int) {$tmp622};
frost$core$Int* $tmp624 = &param0->bucketCount;
*$tmp624 = $tmp623;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:262
frost$core$Int* $tmp625 = &param0->bucketCount;
frost$core$Int $tmp626 = *$tmp625;
frost$core$Int64 $tmp627 = frost$core$Int64$init$frost$core$Int($tmp626);
int64_t $tmp628 = $tmp627.value;
frost$collections$HashMap$Entry** $tmp629 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp628 * 8));
frost$collections$HashMap$Entry*** $tmp630 = &param0->contents;
*$tmp630 = $tmp629;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:263
frost$core$Int $tmp631 = (frost$core$Int) {0u};
frost$core$Int* $tmp632 = &param0->bucketCount;
frost$core$Int $tmp633 = *$tmp632;
frost$core$Bit $tmp634 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp635 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp631, $tmp633, $tmp634);
frost$core$Int $tmp636 = $tmp635.min;
*(&local2) = $tmp636;
frost$core$Int $tmp637 = $tmp635.max;
frost$core$Bit $tmp638 = $tmp635.inclusive;
bool $tmp639 = $tmp638.value;
frost$core$Int $tmp640 = (frost$core$Int) {1u};
if ($tmp639) goto block6; else goto block7;
block6:;
int64_t $tmp641 = $tmp636.value;
int64_t $tmp642 = $tmp637.value;
bool $tmp643 = $tmp641 <= $tmp642;
frost$core$Bit $tmp644 = (frost$core$Bit) {$tmp643};
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block3; else goto block4;
block7:;
int64_t $tmp646 = $tmp636.value;
int64_t $tmp647 = $tmp637.value;
bool $tmp648 = $tmp646 < $tmp647;
frost$core$Bit $tmp649 = (frost$core$Bit) {$tmp648};
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:264
frost$collections$HashMap$Entry*** $tmp651 = &param0->contents;
frost$collections$HashMap$Entry** $tmp652 = *$tmp651;
frost$core$Int $tmp653 = *(&local2);
frost$core$Int64 $tmp654 = frost$core$Int64$init$frost$core$Int($tmp653);
int64_t $tmp655 = $tmp654.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp656 = $tmp652[$tmp655];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
$tmp652[$tmp655] = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Int $tmp657 = *(&local2);
int64_t $tmp658 = $tmp637.value;
int64_t $tmp659 = $tmp657.value;
int64_t $tmp660 = $tmp658 - $tmp659;
frost$core$Int $tmp661 = (frost$core$Int) {$tmp660};
if ($tmp639) goto block9; else goto block10;
block9:;
int64_t $tmp662 = $tmp661.value;
int64_t $tmp663 = $tmp640.value;
bool $tmp664 = $tmp662 >= $tmp663;
frost$core$Bit $tmp665 = (frost$core$Bit) {$tmp664};
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block8; else goto block4;
block10:;
int64_t $tmp667 = $tmp661.value;
int64_t $tmp668 = $tmp640.value;
bool $tmp669 = $tmp667 > $tmp668;
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669};
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block8; else goto block4;
block8:;
int64_t $tmp672 = $tmp657.value;
int64_t $tmp673 = $tmp640.value;
int64_t $tmp674 = $tmp672 + $tmp673;
frost$core$Int $tmp675 = (frost$core$Int) {$tmp674};
*(&local2) = $tmp675;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:266
frost$core$Int* $tmp676 = &param0->threshold;
frost$core$Int $tmp677 = *$tmp676;
frost$core$Int $tmp678 = (frost$core$Int) {2u};
int64_t $tmp679 = $tmp677.value;
int64_t $tmp680 = $tmp678.value;
int64_t $tmp681 = $tmp679 * $tmp680;
frost$core$Int $tmp682 = (frost$core$Int) {$tmp681};
frost$core$Int* $tmp683 = &param0->threshold;
*$tmp683 = $tmp682;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:267
frost$core$Int $tmp684 = (frost$core$Int) {0u};
frost$core$Int* $tmp685 = &param0->_count;
*$tmp685 = $tmp684;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:268
frost$core$Int $tmp686 = (frost$core$Int) {0u};
frost$core$Int $tmp687 = *(&local1);
frost$core$Bit $tmp688 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp689 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp686, $tmp687, $tmp688);
frost$core$Int $tmp690 = $tmp689.min;
*(&local3) = $tmp690;
frost$core$Int $tmp691 = $tmp689.max;
frost$core$Bit $tmp692 = $tmp689.inclusive;
bool $tmp693 = $tmp692.value;
frost$core$Int $tmp694 = (frost$core$Int) {1u};
if ($tmp693) goto block14; else goto block15;
block14:;
int64_t $tmp695 = $tmp690.value;
int64_t $tmp696 = $tmp691.value;
bool $tmp697 = $tmp695 <= $tmp696;
frost$core$Bit $tmp698 = (frost$core$Bit) {$tmp697};
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block11; else goto block12;
block15:;
int64_t $tmp700 = $tmp690.value;
int64_t $tmp701 = $tmp691.value;
bool $tmp702 = $tmp700 < $tmp701;
frost$core$Bit $tmp703 = (frost$core$Bit) {$tmp702};
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:269
frost$collections$HashMap$Entry** $tmp705 = *(&local0);
frost$core$Int $tmp706 = *(&local3);
frost$core$Int64 $tmp707 = frost$core$Int64$init$frost$core$Int($tmp706);
int64_t $tmp708 = $tmp707.value;
frost$collections$HashMap$Entry* $tmp709 = $tmp705[$tmp708];
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$collections$HashMap$Entry* $tmp710 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
*(&local4) = $tmp709;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:270
goto block16;
block16:;
frost$collections$HashMap$Entry* $tmp711 = *(&local4);
frost$core$Bit $tmp712 = (frost$core$Bit) {$tmp711 != NULL};
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:271
frost$collections$HashMap$Entry* $tmp714 = *(&local4);
frost$collections$Key** $tmp715 = &$tmp714->key;
frost$collections$Key* $tmp716 = *$tmp715;
frost$collections$HashMap$Entry* $tmp717 = *(&local4);
frost$core$Object** $tmp718 = &$tmp717->value;
frost$core$Object* $tmp719 = *$tmp718;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, $tmp716, $tmp719);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:272
frost$collections$HashMap$Entry* $tmp720 = *(&local4);
frost$collections$HashMap$Entry** $tmp721 = &$tmp720->next;
frost$collections$HashMap$Entry* $tmp722 = *$tmp721;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$collections$HashMap$Entry* $tmp723 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local4) = $tmp722;
goto block16;
block18:;
frost$collections$HashMap$Entry* $tmp724 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Int $tmp725 = *(&local3);
int64_t $tmp726 = $tmp691.value;
int64_t $tmp727 = $tmp725.value;
int64_t $tmp728 = $tmp726 - $tmp727;
frost$core$Int $tmp729 = (frost$core$Int) {$tmp728};
if ($tmp693) goto block20; else goto block21;
block20:;
int64_t $tmp730 = $tmp729.value;
int64_t $tmp731 = $tmp694.value;
bool $tmp732 = $tmp730 >= $tmp731;
frost$core$Bit $tmp733 = (frost$core$Bit) {$tmp732};
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block19; else goto block12;
block21:;
int64_t $tmp735 = $tmp729.value;
int64_t $tmp736 = $tmp694.value;
bool $tmp737 = $tmp735 > $tmp736;
frost$core$Bit $tmp738 = (frost$core$Bit) {$tmp737};
bool $tmp739 = $tmp738.value;
if ($tmp739) goto block19; else goto block12;
block19:;
int64_t $tmp740 = $tmp725.value;
int64_t $tmp741 = $tmp694.value;
int64_t $tmp742 = $tmp740 + $tmp741;
frost$core$Int $tmp743 = (frost$core$Int) {$tmp742};
*(&local3) = $tmp743;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:275
frost$core$Int $tmp744 = (frost$core$Int) {0u};
frost$core$Int $tmp745 = *(&local1);
frost$core$Bit $tmp746 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp747 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp744, $tmp745, $tmp746);
frost$core$Int $tmp748 = $tmp747.min;
*(&local5) = $tmp748;
frost$core$Int $tmp749 = $tmp747.max;
frost$core$Bit $tmp750 = $tmp747.inclusive;
bool $tmp751 = $tmp750.value;
frost$core$Int $tmp752 = (frost$core$Int) {1u};
if ($tmp751) goto block25; else goto block26;
block25:;
int64_t $tmp753 = $tmp748.value;
int64_t $tmp754 = $tmp749.value;
bool $tmp755 = $tmp753 <= $tmp754;
frost$core$Bit $tmp756 = (frost$core$Bit) {$tmp755};
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block22; else goto block23;
block26:;
int64_t $tmp758 = $tmp748.value;
int64_t $tmp759 = $tmp749.value;
bool $tmp760 = $tmp758 < $tmp759;
frost$core$Bit $tmp761 = (frost$core$Bit) {$tmp760};
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:276
frost$collections$HashMap$Entry** $tmp763 = *(&local0);
frost$core$Int $tmp764 = *(&local5);
frost$core$Int64 $tmp765 = frost$core$Int64$init$frost$core$Int($tmp764);
int64_t $tmp766 = $tmp765.value;
frost$collections$HashMap$Entry* $tmp767 = $tmp763[$tmp766];
frost$core$Bit $tmp768 = (frost$core$Bit) {$tmp767 != NULL};
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:277
frost$collections$HashMap$Entry** $tmp770 = *(&local0);
frost$core$Int $tmp771 = *(&local5);
frost$core$Int64 $tmp772 = frost$core$Int64$init$frost$core$Int($tmp771);
int64_t $tmp773 = $tmp772.value;
frost$collections$HashMap$Entry* $tmp774 = $tmp770[$tmp773];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
goto block28;
block28:;
frost$core$Int $tmp775 = *(&local5);
int64_t $tmp776 = $tmp749.value;
int64_t $tmp777 = $tmp775.value;
int64_t $tmp778 = $tmp776 - $tmp777;
frost$core$Int $tmp779 = (frost$core$Int) {$tmp778};
if ($tmp751) goto block30; else goto block31;
block30:;
int64_t $tmp780 = $tmp779.value;
int64_t $tmp781 = $tmp752.value;
bool $tmp782 = $tmp780 >= $tmp781;
frost$core$Bit $tmp783 = (frost$core$Bit) {$tmp782};
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block29; else goto block23;
block31:;
int64_t $tmp785 = $tmp779.value;
int64_t $tmp786 = $tmp752.value;
bool $tmp787 = $tmp785 > $tmp786;
frost$core$Bit $tmp788 = (frost$core$Bit) {$tmp787};
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block29; else goto block23;
block29:;
int64_t $tmp790 = $tmp775.value;
int64_t $tmp791 = $tmp752.value;
int64_t $tmp792 = $tmp790 + $tmp791;
frost$core$Int $tmp793 = (frost$core$Int) {$tmp792};
*(&local5) = $tmp793;
goto block22;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:280
frost$collections$HashMap$Entry** $tmp794 = *(&local0);
frostFree($tmp794);
goto block2;
block2:;
return;

}
frost$collections$Iterator* frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT(frost$collections$HashMap* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:286
FROST_ASSERT(40 == sizeof(frost$collections$HashMap$EntryIterator));
frost$collections$HashMap$EntryIterator* $tmp795 = (frost$collections$HashMap$EntryIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$HashMap$EntryIterator$class);
frost$collections$HashMap$EntryIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT($tmp795, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp795)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
return ((frost$collections$Iterator*) $tmp795);

}
frost$core$Int frost$collections$HashMap$get_count$R$frost$core$Int(frost$collections$HashMap* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:291
frost$core$Int* $tmp796 = &param0->_count;
frost$core$Int $tmp797 = *$tmp796;
return $tmp797;

}
frost$core$String* frost$collections$HashMap$get_asString$R$frost$core$String(frost$collections$HashMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int local2;
frost$collections$HashMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:302
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp798 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp798);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$MutableString* $tmp799 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
*(&local0) = $tmp798;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:303
frost$core$MutableString* $tmp800 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp800, &$s801);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:304
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s802));
frost$core$String* $tmp803 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
*(&local1) = &$s804;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:305
frost$core$Int $tmp805 = (frost$core$Int) {0u};
frost$core$Int* $tmp806 = &param0->bucketCount;
frost$core$Int $tmp807 = *$tmp806;
frost$core$Bit $tmp808 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp809 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp805, $tmp807, $tmp808);
frost$core$Int $tmp810 = $tmp809.min;
*(&local2) = $tmp810;
frost$core$Int $tmp811 = $tmp809.max;
frost$core$Bit $tmp812 = $tmp809.inclusive;
bool $tmp813 = $tmp812.value;
frost$core$Int $tmp814 = (frost$core$Int) {1u};
if ($tmp813) goto block4; else goto block5;
block4:;
int64_t $tmp815 = $tmp810.value;
int64_t $tmp816 = $tmp811.value;
bool $tmp817 = $tmp815 <= $tmp816;
frost$core$Bit $tmp818 = (frost$core$Bit) {$tmp817};
bool $tmp819 = $tmp818.value;
if ($tmp819) goto block1; else goto block2;
block5:;
int64_t $tmp820 = $tmp810.value;
int64_t $tmp821 = $tmp811.value;
bool $tmp822 = $tmp820 < $tmp821;
frost$core$Bit $tmp823 = (frost$core$Bit) {$tmp822};
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:306
frost$collections$HashMap$Entry*** $tmp825 = &param0->contents;
frost$collections$HashMap$Entry** $tmp826 = *$tmp825;
frost$core$Int $tmp827 = *(&local2);
frost$core$Int64 $tmp828 = frost$core$Int64$init$frost$core$Int($tmp827);
int64_t $tmp829 = $tmp828.value;
frost$collections$HashMap$Entry* $tmp830 = $tmp826[$tmp829];
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$collections$HashMap$Entry* $tmp831 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local3) = $tmp830;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:307
goto block6;
block6:;
frost$collections$HashMap$Entry* $tmp832 = *(&local3);
frost$core$Bit $tmp833 = (frost$core$Bit) {$tmp832 != NULL};
bool $tmp834 = $tmp833.value;
if ($tmp834) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:308
frost$core$MutableString* $tmp835 = *(&local0);
frost$core$String* $tmp836 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp835, $tmp836);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:309
frost$collections$HashMap$Entry* $tmp837 = *(&local3);
frost$collections$Key** $tmp838 = &$tmp837->key;
frost$collections$Key* $tmp839 = *$tmp838;
frost$core$Bit $tmp840 = (frost$core$Bit) {true};
bool $tmp841 = $tmp840.value;
if ($tmp841) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:310
frost$core$MutableString* $tmp842 = *(&local0);
frost$collections$HashMap$Entry* $tmp843 = *(&local3);
frost$collections$Key** $tmp844 = &$tmp843->key;
frost$collections$Key* $tmp845 = *$tmp844;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from HashMap.frost:310:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn847 $tmp846 = ($fn847) ((frost$core$Object*) $tmp845)->$class->vtable[0];
frost$core$String* $tmp848 = $tmp846(((frost$core$Object*) $tmp845));
frost$core$MutableString$append$frost$core$String($tmp842, $tmp848);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
goto block10;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:313
frost$core$MutableString* $tmp849 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp849, &$s850);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:315
frost$core$MutableString* $tmp851 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp851, &$s852);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:316
frost$collections$HashMap$Entry* $tmp853 = *(&local3);
frost$core$Object** $tmp854 = &$tmp853->value;
frost$core$Object* $tmp855 = *$tmp854;
frost$core$Bit $tmp856 = (frost$core$Bit) {true};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:317
frost$core$MutableString* $tmp858 = *(&local0);
frost$collections$HashMap$Entry* $tmp859 = *(&local3);
frost$core$Object** $tmp860 = &$tmp859->value;
frost$core$Object* $tmp861 = *$tmp860;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from HashMap.frost:317:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn863 $tmp862 = ($fn863) $tmp861->$class->vtable[0];
frost$core$String* $tmp864 = $tmp862($tmp861);
frost$core$MutableString$append$frost$core$String($tmp858, $tmp864);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
goto block14;
block15:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:320
frost$core$MutableString* $tmp865 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp865, &$s866);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:322
frost$collections$HashMap$Entry* $tmp867 = *(&local3);
frost$collections$HashMap$Entry** $tmp868 = &$tmp867->next;
frost$collections$HashMap$Entry* $tmp869 = *$tmp868;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$collections$HashMap$Entry* $tmp870 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local3) = $tmp869;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s871));
frost$core$String* $tmp872 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local1) = &$s873;
goto block6;
block8:;
frost$collections$HashMap$Entry* $tmp874 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Int $tmp875 = *(&local2);
int64_t $tmp876 = $tmp811.value;
int64_t $tmp877 = $tmp875.value;
int64_t $tmp878 = $tmp876 - $tmp877;
frost$core$Int $tmp879 = (frost$core$Int) {$tmp878};
if ($tmp813) goto block18; else goto block19;
block18:;
int64_t $tmp880 = $tmp879.value;
int64_t $tmp881 = $tmp814.value;
bool $tmp882 = $tmp880 >= $tmp881;
frost$core$Bit $tmp883 = (frost$core$Bit) {$tmp882};
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block17; else goto block2;
block19:;
int64_t $tmp885 = $tmp879.value;
int64_t $tmp886 = $tmp814.value;
bool $tmp887 = $tmp885 > $tmp886;
frost$core$Bit $tmp888 = (frost$core$Bit) {$tmp887};
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block17; else goto block2;
block17:;
int64_t $tmp890 = $tmp875.value;
int64_t $tmp891 = $tmp814.value;
int64_t $tmp892 = $tmp890 + $tmp891;
frost$core$Int $tmp893 = (frost$core$Int) {$tmp892};
*(&local2) = $tmp893;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:326
frost$core$MutableString* $tmp894 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp894, &$s895);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashMap.frost:327
frost$core$MutableString* $tmp896 = *(&local0);
frost$core$String* $tmp897 = frost$core$MutableString$finish$R$frost$core$String($tmp896);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$String* $tmp898 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp899 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp897;

}

