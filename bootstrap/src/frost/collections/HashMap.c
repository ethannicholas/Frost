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

typedef frost$collections$Iterator* (*$fn84)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn88)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn93)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn107)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn111)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn116)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn188)(frost$collections$Key*);
typedef frost$core$Bit (*$fn259)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn289)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn322)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn387)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn421)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn855)(frost$core$Object*);
typedef frost$core$String* (*$fn871)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -6526495327472465984, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s879 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };

void frost$collections$HashMap$init(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:95
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:101
frost$core$Int64* $tmp4 = &param0->changeCount;
frost$core$Int64 $tmp5 = *$tmp4;
frost$core$Int64 $tmp6 = (frost$core$Int64) {1};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
frost$core$Int64 $tmp10 = (frost$core$Int64) {$tmp9};
frost$core$Int64* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:102
frost$core$Int64 $tmp12 = (frost$core$Int64) {0};
frost$core$Int64* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:103
frost$core$Int64 $tmp14 = (frost$core$Int64) {16};
frost$core$Int64* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:104
frost$core$Int64* $tmp16 = &param0->bucketCount;
frost$core$Int64 $tmp17 = *$tmp16;
int64_t $tmp18 = $tmp17.value;
frost$collections$HashMap$Entry** $tmp19 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp18 * 8));
frost$collections$HashMap$Entry*** $tmp20 = &param0->contents;
*$tmp20 = $tmp19;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:105
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:106
frost$collections$HashMap$Entry*** $tmp43 = &param0->contents;
frost$collections$HashMap$Entry** $tmp44 = *$tmp43;
frost$core$Int64 $tmp45 = *(&local0);
int64_t $tmp46 = $tmp45.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp47 = $tmp44[$tmp46];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
$tmp44[$tmp46] = ((frost$collections$HashMap$Entry*) NULL);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:108
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
void frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT(frost$collections$HashMap* param0, frost$collections$MapView* param1) {

frost$collections$Key* local0 = NULL;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:112
frost$collections$HashMap$init(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:113
ITable* $tmp82 = param1->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp82 = $tmp82->next;
}
$fn84 $tmp83 = $tmp82->methods[3];
frost$collections$Iterator* $tmp85 = $tmp83(param1);
goto block1;
block1:;
ITable* $tmp86 = $tmp85->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[0];
frost$core$Bit $tmp89 = $tmp87($tmp85);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$collections$Key*) NULL);
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp91 = $tmp85->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[1];
frost$core$Object* $tmp94 = $tmp92($tmp85);
frost$core$Object** $tmp95 = &((frost$core$Tuple2*) $tmp94)->f0;
frost$core$Object* $tmp96 = *$tmp95;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp96)));
frost$collections$Key* $tmp97 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local0) = ((frost$collections$Key*) $tmp96);
frost$core$Object** $tmp98 = &((frost$core$Tuple2*) $tmp94)->f1;
frost$core$Object* $tmp99 = *$tmp98;
frost$core$Frost$ref$frost$core$Object$Q($tmp99);
frost$core$Object* $tmp100 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp100);
*(&local1) = $tmp99;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:114
frost$collections$Key* $tmp101 = *(&local0);
frost$core$Object* $tmp102 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, $tmp101, $tmp102);
frost$core$Frost$unref$frost$core$Object$Q($tmp94);
frost$core$Object* $tmp103 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp103);
*(&local1) = ((frost$core$Object*) NULL);
frost$collections$Key* $tmp104 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local0) = ((frost$collections$Key*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
return;

}
void frost$collections$HashMap$init$frost$collections$CollectionView$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT(frost$collections$HashMap* param0, frost$collections$CollectionView* param1) {

frost$core$Tuple2* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:119
frost$collections$HashMap$init(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:120
ITable* $tmp105 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
frost$collections$Iterator* $tmp108 = $tmp106(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp109 = $tmp108->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
frost$core$Bit $tmp112 = $tmp110($tmp108);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Tuple2*) NULL);
ITable* $tmp114 = $tmp108->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[1];
frost$core$Object* $tmp117 = $tmp115($tmp108);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Tuple2*) $tmp117)));
frost$core$Tuple2* $tmp118 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local0) = ((frost$core$Tuple2*) $tmp117);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:121
frost$core$Tuple2* $tmp119 = *(&local0);
frost$core$Object** $tmp120 = &$tmp119->f0;
frost$core$Object* $tmp121 = *$tmp120;
frost$core$Tuple2* $tmp122 = *(&local0);
frost$core$Object** $tmp123 = &$tmp122->f1;
frost$core$Object* $tmp124 = *$tmp123;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, ((frost$collections$Key*) $tmp121), $tmp124);
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
frost$core$Tuple2* $tmp125 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local0) = ((frost$core$Tuple2*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
return;

}
void frost$collections$HashMap$cleanup(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:127
frost$core$Int64 $tmp126 = (frost$core$Int64) {0};
frost$core$Int64* $tmp127 = &param0->bucketCount;
frost$core$Int64 $tmp128 = *$tmp127;
frost$core$Bit $tmp129 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp130 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp126, $tmp128, $tmp129);
frost$core$Int64 $tmp131 = $tmp130.min;
*(&local0) = $tmp131;
frost$core$Int64 $tmp132 = $tmp130.max;
frost$core$Bit $tmp133 = $tmp130.inclusive;
bool $tmp134 = $tmp133.value;
frost$core$Int64 $tmp135 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp136 = $tmp135.value;
frost$core$UInt64 $tmp137 = (frost$core$UInt64) {((uint64_t) $tmp136)};
if ($tmp134) goto block5; else goto block6;
block5:;
int64_t $tmp138 = $tmp131.value;
int64_t $tmp139 = $tmp132.value;
bool $tmp140 = $tmp138 <= $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block2; else goto block3;
block6:;
int64_t $tmp143 = $tmp131.value;
int64_t $tmp144 = $tmp132.value;
bool $tmp145 = $tmp143 < $tmp144;
frost$core$Bit $tmp146 = (frost$core$Bit) {$tmp145};
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:128
frost$collections$HashMap$Entry*** $tmp148 = &param0->contents;
frost$collections$HashMap$Entry** $tmp149 = *$tmp148;
frost$core$Int64 $tmp150 = *(&local0);
int64_t $tmp151 = $tmp150.value;
frost$collections$HashMap$Entry* $tmp152 = $tmp149[$tmp151];
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit($tmp152 != NULL);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:129
frost$collections$HashMap$Entry*** $tmp155 = &param0->contents;
frost$collections$HashMap$Entry** $tmp156 = *$tmp155;
frost$core$Int64 $tmp157 = *(&local0);
int64_t $tmp158 = $tmp157.value;
frost$collections$HashMap$Entry* $tmp159 = $tmp156[$tmp158];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
goto block8;
block8:;
frost$core$Int64 $tmp160 = *(&local0);
int64_t $tmp161 = $tmp132.value;
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161 - $tmp162;
frost$core$Int64 $tmp164 = (frost$core$Int64) {$tmp163};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp165 = $tmp164.value;
frost$core$UInt64 $tmp166 = (frost$core$UInt64) {((uint64_t) $tmp165)};
if ($tmp134) goto block11; else goto block12;
block11:;
uint64_t $tmp167 = $tmp166.value;
uint64_t $tmp168 = $tmp137.value;
bool $tmp169 = $tmp167 >= $tmp168;
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169};
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block9; else goto block3;
block12:;
uint64_t $tmp172 = $tmp166.value;
uint64_t $tmp173 = $tmp137.value;
bool $tmp174 = $tmp172 > $tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block9; else goto block3;
block9:;
int64_t $tmp177 = $tmp160.value;
int64_t $tmp178 = $tmp135.value;
int64_t $tmp179 = $tmp177 + $tmp178;
frost$core$Int64 $tmp180 = (frost$core$Int64) {$tmp179};
*(&local0) = $tmp180;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:132
frost$collections$HashMap$Entry*** $tmp181 = &param0->contents;
frost$collections$HashMap$Entry** $tmp182 = *$tmp181;
frostFree($tmp182);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:126
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Int64 frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:140
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:141
frost$core$Bit $tmp183 = frost$core$Bit$init$builtin_bit(false);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:142
frost$core$Int64 $tmp185 = (frost$core$Int64) {0};
*(&local0) = $tmp185;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:145
ITable* $tmp186 = param1->$class->itable;
while ($tmp186->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[0];
frost$core$Int64 $tmp189 = $tmp187(param1);
*(&local0) = $tmp189;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:149
frost$core$Int64 $tmp190 = *(&local0);
frost$core$Int64 $tmp191 = *(&local0);
frost$core$Int64 $tmp192 = (frost$core$Int64) {20};
// begin inline call to function frost.core.Int64.>>(other:frost.core.Int64):frost.core.Int64 from HashMap.frost:149:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:158
int64_t $tmp193 = $tmp191.value;
int64_t $tmp194 = $tmp192.value;
int64_t $tmp195 = $tmp193 >> $tmp194;
frost$core$Int64 $tmp196 = frost$core$Int64$init$builtin_int64($tmp195);
frost$core$Int64 $tmp197 = *(&local0);
frost$core$Int64 $tmp198 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.>>(other:frost.core.Int64):frost.core.Int64 from HashMap.frost:149:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:158
int64_t $tmp199 = $tmp197.value;
int64_t $tmp200 = $tmp198.value;
int64_t $tmp201 = $tmp199 >> $tmp200;
frost$core$Int64 $tmp202 = frost$core$Int64$init$builtin_int64($tmp201);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from HashMap.frost:149:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:143
int64_t $tmp203 = $tmp196.value;
int64_t $tmp204 = $tmp202.value;
int64_t $tmp205 = $tmp203 ^ $tmp204;
frost$core$Int64 $tmp206 = frost$core$Int64$init$builtin_int64($tmp205);
frost$core$Int64 $tmp207 = *(&local0);
frost$core$Int64 $tmp208 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.>>(other:frost.core.Int64):frost.core.Int64 from HashMap.frost:149:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:158
int64_t $tmp209 = $tmp207.value;
int64_t $tmp210 = $tmp208.value;
int64_t $tmp211 = $tmp209 >> $tmp210;
frost$core$Int64 $tmp212 = frost$core$Int64$init$builtin_int64($tmp211);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from HashMap.frost:149:40
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:143
int64_t $tmp213 = $tmp206.value;
int64_t $tmp214 = $tmp212.value;
int64_t $tmp215 = $tmp213 ^ $tmp214;
frost$core$Int64 $tmp216 = frost$core$Int64$init$builtin_int64($tmp215);
frost$core$Int64 $tmp217 = *(&local0);
frost$core$Int64 $tmp218 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.>>(other:frost.core.Int64):frost.core.Int64 from HashMap.frost:149:59
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:158
int64_t $tmp219 = $tmp217.value;
int64_t $tmp220 = $tmp218.value;
int64_t $tmp221 = $tmp219 >> $tmp220;
frost$core$Int64 $tmp222 = frost$core$Int64$init$builtin_int64($tmp221);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from HashMap.frost:149:53
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:143
int64_t $tmp223 = $tmp216.value;
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223 ^ $tmp224;
frost$core$Int64 $tmp226 = frost$core$Int64$init$builtin_int64($tmp225);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from HashMap.frost:149:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:143
int64_t $tmp227 = $tmp190.value;
int64_t $tmp228 = $tmp226.value;
int64_t $tmp229 = $tmp227 ^ $tmp228;
frost$core$Int64 $tmp230 = frost$core$Int64$init$builtin_int64($tmp229);
*(&local0) = $tmp230;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:152
frost$core$Int64 $tmp231 = *(&local0);
frost$core$Int64* $tmp232 = &param0->bucketCount;
frost$core$Int64 $tmp233 = *$tmp232;
frost$core$Int64 $tmp234 = (frost$core$Int64) {1};
int64_t $tmp235 = $tmp233.value;
int64_t $tmp236 = $tmp234.value;
int64_t $tmp237 = $tmp235 - $tmp236;
frost$core$Int64 $tmp238 = (frost$core$Int64) {$tmp237};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from HashMap.frost:152:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp239 = $tmp231.value;
int64_t $tmp240 = $tmp238.value;
int64_t $tmp241 = $tmp239 & $tmp240;
frost$core$Int64 $tmp242 = frost$core$Int64$init$builtin_int64($tmp241);
*(&local0) = $tmp242;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:153
frost$core$Int64 $tmp243 = *(&local0);
return $tmp243;

}
frost$core$Object* frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:158
frost$core$Int64 $tmp244 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp244;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:159
frost$collections$HashMap$Entry*** $tmp245 = &param0->contents;
frost$collections$HashMap$Entry** $tmp246 = *$tmp245;
frost$core$Int64 $tmp247 = *(&local0);
int64_t $tmp248 = $tmp247.value;
frost$collections$HashMap$Entry* $tmp249 = $tmp246[$tmp248];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$collections$HashMap$Entry* $tmp250 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local1) = $tmp249;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:160
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp251 = *(&local1);
frost$core$Bit $tmp252 = frost$core$Bit$init$builtin_bit($tmp251 != NULL);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp254 = *(&local1);
frost$collections$Key** $tmp255 = &$tmp254->key;
frost$collections$Key* $tmp256 = *$tmp255;
ITable* $tmp257 = ((frost$core$Equatable*) $tmp256)->$class->itable;
while ($tmp257->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp257 = $tmp257->next;
}
$fn259 $tmp258 = $tmp257->methods[1];
frost$core$Bit $tmp260 = $tmp258(((frost$core$Equatable*) $tmp256), ((frost$core$Equatable*) param1));
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:161
frost$collections$HashMap$Entry* $tmp262 = *(&local1);
frost$collections$HashMap$Entry** $tmp263 = &$tmp262->next;
frost$collections$HashMap$Entry* $tmp264 = *$tmp263;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$collections$HashMap$Entry* $tmp265 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local1) = $tmp264;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:163
frost$collections$HashMap$Entry* $tmp266 = *(&local1);
frost$core$Bit $tmp267 = frost$core$Bit$init$builtin_bit($tmp266 != NULL);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:164
frost$collections$HashMap$Entry* $tmp269 = *(&local1);
frost$core$Object** $tmp270 = &$tmp269->value;
frost$core$Object* $tmp271 = *$tmp270;
frost$core$Frost$ref$frost$core$Object$Q($tmp271);
frost$collections$HashMap$Entry* $tmp272 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp271;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$HashMap$Entry* $tmp273 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block6:;
goto block8;
block8:;

}
frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:173
frost$core$Int64 $tmp274 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp274;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:174
frost$collections$HashMap$Entry*** $tmp275 = &param0->contents;
frost$collections$HashMap$Entry** $tmp276 = *$tmp275;
frost$core$Int64 $tmp277 = *(&local0);
int64_t $tmp278 = $tmp277.value;
frost$collections$HashMap$Entry* $tmp279 = $tmp276[$tmp278];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$collections$HashMap$Entry* $tmp280 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local1) = $tmp279;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:175
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp281 = *(&local1);
frost$core$Bit $tmp282 = frost$core$Bit$init$builtin_bit($tmp281 != NULL);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp284 = *(&local1);
frost$collections$Key** $tmp285 = &$tmp284->key;
frost$collections$Key* $tmp286 = *$tmp285;
ITable* $tmp287 = ((frost$core$Equatable*) $tmp286)->$class->itable;
while ($tmp287->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp287 = $tmp287->next;
}
$fn289 $tmp288 = $tmp287->methods[1];
frost$core$Bit $tmp290 = $tmp288(((frost$core$Equatable*) $tmp286), ((frost$core$Equatable*) param1));
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:176
frost$collections$HashMap$Entry* $tmp292 = *(&local1);
frost$collections$HashMap$Entry** $tmp293 = &$tmp292->next;
frost$collections$HashMap$Entry* $tmp294 = *$tmp293;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$collections$HashMap$Entry* $tmp295 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local1) = $tmp294;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:178
frost$collections$HashMap$Entry* $tmp296 = *(&local1);
frost$core$Bit $tmp297 = frost$core$Bit$init$builtin_bit($tmp296 != NULL);
frost$collections$HashMap$Entry* $tmp298 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp297;

}
void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(frost$collections$HashMap* param0, frost$collections$Key* param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$collections$HashMap$Entry* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:183
frost$core$Int64* $tmp299 = &param0->changeCount;
frost$core$Int64 $tmp300 = *$tmp299;
frost$core$Int64 $tmp301 = (frost$core$Int64) {1};
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302 + $tmp303;
frost$core$Int64 $tmp305 = (frost$core$Int64) {$tmp304};
frost$core$Int64* $tmp306 = &param0->changeCount;
*$tmp306 = $tmp305;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:184
frost$core$Int64 $tmp307 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp307;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:185
frost$collections$HashMap$Entry*** $tmp308 = &param0->contents;
frost$collections$HashMap$Entry** $tmp309 = *$tmp308;
frost$core$Int64 $tmp310 = *(&local0);
int64_t $tmp311 = $tmp310.value;
frost$collections$HashMap$Entry* $tmp312 = $tmp309[$tmp311];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$collections$HashMap$Entry* $tmp313 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local1) = $tmp312;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:186
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp314 = *(&local1);
frost$core$Bit $tmp315 = frost$core$Bit$init$builtin_bit($tmp314 != NULL);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp317 = *(&local1);
frost$collections$Key** $tmp318 = &$tmp317->key;
frost$collections$Key* $tmp319 = *$tmp318;
ITable* $tmp320 = ((frost$core$Equatable*) $tmp319)->$class->itable;
while ($tmp320->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp320 = $tmp320->next;
}
$fn322 $tmp321 = $tmp320->methods[1];
frost$core$Bit $tmp323 = $tmp321(((frost$core$Equatable*) $tmp319), ((frost$core$Equatable*) param1));
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:187
frost$collections$HashMap$Entry* $tmp325 = *(&local1);
frost$collections$HashMap$Entry** $tmp326 = &$tmp325->next;
frost$collections$HashMap$Entry* $tmp327 = *$tmp326;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$collections$HashMap$Entry* $tmp328 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local1) = $tmp327;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:189
frost$collections$HashMap$Entry* $tmp329 = *(&local1);
frost$core$Bit $tmp330 = frost$core$Bit$init$builtin_bit($tmp329 == NULL);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:190
frost$collections$HashMap$Entry*** $tmp332 = &param0->contents;
frost$collections$HashMap$Entry** $tmp333 = *$tmp332;
frost$core$Int64 $tmp334 = *(&local0);
int64_t $tmp335 = $tmp334.value;
frost$collections$HashMap$Entry* $tmp336 = $tmp333[$tmp335];
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$collections$HashMap$Entry* $tmp337 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local2) = $tmp336;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:191
FROST_ASSERT(40 == sizeof(frost$collections$HashMap$Entry));
frost$collections$HashMap$Entry* $tmp338 = (frost$collections$HashMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$HashMap$Entry$class);
// begin inline call to frost.collections.HashMap.Entry.init(key:frost.collections.HashMap.Entry.K, value:frost.collections.HashMap.Entry.V) from HashMap.frost:191:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:35
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Key** $tmp339 = &$tmp338->key;
frost$collections$Key* $tmp340 = *$tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$collections$Key** $tmp341 = &$tmp338->key;
*$tmp341 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:36
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:192
frost$collections$HashMap$Entry* $tmp346 = *(&local1);
frost$collections$HashMap$Entry* $tmp347 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$collections$HashMap$Entry** $tmp348 = &$tmp346->next;
frost$collections$HashMap$Entry* $tmp349 = *$tmp348;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
frost$collections$HashMap$Entry** $tmp350 = &$tmp346->next;
*$tmp350 = $tmp347;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:193
frost$collections$HashMap$Entry*** $tmp351 = &param0->contents;
frost$collections$HashMap$Entry** $tmp352 = *$tmp351;
frost$core$Int64 $tmp353 = *(&local0);
frost$collections$HashMap$Entry* $tmp354 = *(&local1);
int64_t $tmp355 = $tmp353.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$collections$HashMap$Entry* $tmp356 = $tmp352[$tmp355];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
$tmp352[$tmp355] = $tmp354;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:194
frost$collections$HashMap$incrementCount(param0);
frost$collections$HashMap$Entry* $tmp357 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:197
frost$collections$HashMap$Entry* $tmp358 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp359 = &$tmp358->value;
frost$core$Object* $tmp360 = *$tmp359;
frost$core$Frost$unref$frost$core$Object$Q($tmp360);
frost$core$Object** $tmp361 = &$tmp358->value;
*$tmp361 = param2;
goto block6;
block6:;
frost$collections$HashMap$Entry* $tmp362 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$remove$frost$collections$HashMap$K(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$collections$HashMap$Entry* local2 = NULL;
frost$collections$HashMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:203
frost$core$Int64* $tmp363 = &param0->changeCount;
frost$core$Int64 $tmp364 = *$tmp363;
frost$core$Int64 $tmp365 = (frost$core$Int64) {1};
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365.value;
int64_t $tmp368 = $tmp366 + $tmp367;
frost$core$Int64 $tmp369 = (frost$core$Int64) {$tmp368};
frost$core$Int64* $tmp370 = &param0->changeCount;
*$tmp370 = $tmp369;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:204
frost$core$Int64 $tmp371 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp371;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:205
frost$collections$HashMap$Entry*** $tmp372 = &param0->contents;
frost$collections$HashMap$Entry** $tmp373 = *$tmp372;
frost$core$Int64 $tmp374 = *(&local0);
int64_t $tmp375 = $tmp374.value;
frost$collections$HashMap$Entry* $tmp376 = $tmp373[$tmp375];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$collections$HashMap$Entry* $tmp377 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local1) = $tmp376;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:207
frost$collections$HashMap$Entry* $tmp378 = *(&local1);
frost$core$Bit $tmp379 = frost$core$Bit$init$builtin_bit($tmp378 == NULL);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:208
frost$collections$HashMap$Entry* $tmp381 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:211
frost$collections$HashMap$Entry* $tmp382 = *(&local1);
frost$collections$Key** $tmp383 = &$tmp382->key;
frost$collections$Key* $tmp384 = *$tmp383;
ITable* $tmp385 = ((frost$core$Equatable*) $tmp384)->$class->itable;
while ($tmp385->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp385 = $tmp385->next;
}
$fn387 $tmp386 = $tmp385->methods[0];
frost$core$Bit $tmp388 = $tmp386(((frost$core$Equatable*) $tmp384), ((frost$core$Equatable*) param1));
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:212
frost$collections$HashMap$Entry*** $tmp390 = &param0->contents;
frost$collections$HashMap$Entry** $tmp391 = *$tmp390;
frost$core$Int64 $tmp392 = *(&local0);
frost$collections$HashMap$Entry* $tmp393 = *(&local1);
frost$collections$HashMap$Entry** $tmp394 = &$tmp393->next;
frost$collections$HashMap$Entry* $tmp395 = *$tmp394;
int64_t $tmp396 = $tmp392.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$collections$HashMap$Entry* $tmp397 = $tmp391[$tmp396];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
$tmp391[$tmp396] = $tmp395;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:213
frost$core$Int64* $tmp398 = &param0->_count;
frost$core$Int64 $tmp399 = *$tmp398;
frost$core$Int64 $tmp400 = (frost$core$Int64) {1};
int64_t $tmp401 = $tmp399.value;
int64_t $tmp402 = $tmp400.value;
int64_t $tmp403 = $tmp401 - $tmp402;
frost$core$Int64 $tmp404 = (frost$core$Int64) {$tmp403};
frost$core$Int64* $tmp405 = &param0->_count;
*$tmp405 = $tmp404;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:214
frost$collections$HashMap$Entry* $tmp406 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:216
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:217
frost$collections$HashMap$Entry* $tmp407 = *(&local1);
frost$collections$HashMap$Entry** $tmp408 = &$tmp407->next;
frost$collections$HashMap$Entry* $tmp409 = *$tmp408;
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$collections$HashMap$Entry* $tmp410 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local2) = $tmp409;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:218
frost$collections$HashMap$Entry* $tmp411 = *(&local2);
frost$core$Bit $tmp412 = frost$core$Bit$init$builtin_bit($tmp411 == NULL);
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:220
frost$collections$HashMap$Entry* $tmp414 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp415 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:222
frost$collections$HashMap$Entry* $tmp416 = *(&local2);
frost$collections$Key** $tmp417 = &$tmp416->key;
frost$collections$Key* $tmp418 = *$tmp417;
ITable* $tmp419 = ((frost$core$Equatable*) $tmp418)->$class->itable;
while ($tmp419->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp419 = $tmp419->next;
}
$fn421 $tmp420 = $tmp419->methods[0];
frost$core$Bit $tmp422 = $tmp420(((frost$core$Equatable*) $tmp418), ((frost$core$Equatable*) param1));
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:224
frost$collections$HashMap$Entry* $tmp424 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:229
frost$collections$HashMap$Entry* $tmp425 = *(&local1);
frost$collections$HashMap$Entry** $tmp426 = &$tmp425->next;
frost$collections$HashMap$Entry* $tmp427 = *$tmp426;
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$collections$HashMap$Entry* $tmp428 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local3) = $tmp427;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:230
frost$collections$HashMap$Entry* $tmp429 = *(&local3);
frost$core$Bit $tmp430 = frost$core$Bit$init$builtin_bit($tmp429 != NULL);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block11; else goto block12;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:226
frost$collections$HashMap$Entry* $tmp432 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$collections$HashMap$Entry* $tmp433 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local1) = $tmp432;
frost$collections$HashMap$Entry* $tmp434 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block5;
block12:;
frost$core$Int64 $tmp435 = (frost$core$Int64) {230};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s436, $tmp435);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:231
frost$collections$HashMap$Entry* $tmp437 = *(&local1);
frost$collections$HashMap$Entry* $tmp438 = *(&local3);
frost$collections$HashMap$Entry** $tmp439 = &$tmp438->next;
frost$collections$HashMap$Entry* $tmp440 = *$tmp439;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
frost$collections$HashMap$Entry** $tmp441 = &$tmp437->next;
frost$collections$HashMap$Entry* $tmp442 = *$tmp441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
frost$collections$HashMap$Entry** $tmp443 = &$tmp437->next;
*$tmp443 = $tmp440;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:232
frost$core$Int64* $tmp444 = &param0->_count;
frost$core$Int64 $tmp445 = *$tmp444;
frost$core$Int64 $tmp446 = (frost$core$Int64) {1};
int64_t $tmp447 = $tmp445.value;
int64_t $tmp448 = $tmp446.value;
int64_t $tmp449 = $tmp447 - $tmp448;
frost$core$Int64 $tmp450 = (frost$core$Int64) {$tmp449};
frost$core$Int64* $tmp451 = &param0->_count;
*$tmp451 = $tmp450;
frost$collections$HashMap$Entry* $tmp452 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp453 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$clear(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:237
frost$core$Int64* $tmp454 = &param0->changeCount;
frost$core$Int64 $tmp455 = *$tmp454;
frost$core$Int64 $tmp456 = (frost$core$Int64) {1};
int64_t $tmp457 = $tmp455.value;
int64_t $tmp458 = $tmp456.value;
int64_t $tmp459 = $tmp457 + $tmp458;
frost$core$Int64 $tmp460 = (frost$core$Int64) {$tmp459};
frost$core$Int64* $tmp461 = &param0->changeCount;
*$tmp461 = $tmp460;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:238
frost$core$Int64 $tmp462 = (frost$core$Int64) {0};
frost$core$Int64* $tmp463 = &param0->_count;
*$tmp463 = $tmp462;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:239
frost$core$Int64 $tmp464 = (frost$core$Int64) {0};
frost$core$Int64* $tmp465 = &param0->bucketCount;
frost$core$Int64 $tmp466 = *$tmp465;
frost$core$Bit $tmp467 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp468 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp464, $tmp466, $tmp467);
frost$core$Int64 $tmp469 = $tmp468.min;
*(&local0) = $tmp469;
frost$core$Int64 $tmp470 = $tmp468.max;
frost$core$Bit $tmp471 = $tmp468.inclusive;
bool $tmp472 = $tmp471.value;
frost$core$Int64 $tmp473 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp474 = $tmp473.value;
frost$core$UInt64 $tmp475 = (frost$core$UInt64) {((uint64_t) $tmp474)};
if ($tmp472) goto block5; else goto block6;
block5:;
int64_t $tmp476 = $tmp469.value;
int64_t $tmp477 = $tmp470.value;
bool $tmp478 = $tmp476 <= $tmp477;
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block2; else goto block3;
block6:;
int64_t $tmp481 = $tmp469.value;
int64_t $tmp482 = $tmp470.value;
bool $tmp483 = $tmp481 < $tmp482;
frost$core$Bit $tmp484 = (frost$core$Bit) {$tmp483};
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:240
frost$collections$HashMap$Entry*** $tmp486 = &param0->contents;
frost$collections$HashMap$Entry** $tmp487 = *$tmp486;
frost$core$Int64 $tmp488 = *(&local0);
int64_t $tmp489 = $tmp488.value;
frost$collections$HashMap$Entry* $tmp490 = $tmp487[$tmp489];
frost$core$Bit $tmp491 = frost$core$Bit$init$builtin_bit($tmp490 != NULL);
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:241
frost$collections$HashMap$Entry*** $tmp493 = &param0->contents;
frost$collections$HashMap$Entry** $tmp494 = *$tmp493;
frost$core$Int64 $tmp495 = *(&local0);
int64_t $tmp496 = $tmp495.value;
frost$collections$HashMap$Entry* $tmp497 = $tmp494[$tmp496];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
goto block8;
block8:;
frost$core$Int64 $tmp498 = *(&local0);
int64_t $tmp499 = $tmp470.value;
int64_t $tmp500 = $tmp498.value;
int64_t $tmp501 = $tmp499 - $tmp500;
frost$core$Int64 $tmp502 = (frost$core$Int64) {$tmp501};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp503 = $tmp502.value;
frost$core$UInt64 $tmp504 = (frost$core$UInt64) {((uint64_t) $tmp503)};
if ($tmp472) goto block11; else goto block12;
block11:;
uint64_t $tmp505 = $tmp504.value;
uint64_t $tmp506 = $tmp475.value;
bool $tmp507 = $tmp505 >= $tmp506;
frost$core$Bit $tmp508 = (frost$core$Bit) {$tmp507};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block9; else goto block3;
block12:;
uint64_t $tmp510 = $tmp504.value;
uint64_t $tmp511 = $tmp475.value;
bool $tmp512 = $tmp510 > $tmp511;
frost$core$Bit $tmp513 = (frost$core$Bit) {$tmp512};
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block9; else goto block3;
block9:;
int64_t $tmp515 = $tmp498.value;
int64_t $tmp516 = $tmp473.value;
int64_t $tmp517 = $tmp515 + $tmp516;
frost$core$Int64 $tmp518 = (frost$core$Int64) {$tmp517};
*(&local0) = $tmp518;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:244
frost$collections$HashMap$Entry*** $tmp519 = &param0->contents;
frost$collections$HashMap$Entry** $tmp520 = *$tmp519;
frostFree($tmp520);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:245
frost$core$Int64 $tmp521 = (frost$core$Int64) {16};
frost$core$Int64* $tmp522 = &param0->bucketCount;
*$tmp522 = $tmp521;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:246
frost$core$Int64* $tmp523 = &param0->bucketCount;
frost$core$Int64 $tmp524 = *$tmp523;
int64_t $tmp525 = $tmp524.value;
frost$collections$HashMap$Entry** $tmp526 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp525 * 8));
frost$collections$HashMap$Entry*** $tmp527 = &param0->contents;
*$tmp527 = $tmp526;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:247
frost$core$Int64 $tmp528 = (frost$core$Int64) {0};
frost$core$Int64* $tmp529 = &param0->bucketCount;
frost$core$Int64 $tmp530 = *$tmp529;
frost$core$Bit $tmp531 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp532 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp528, $tmp530, $tmp531);
frost$core$Int64 $tmp533 = $tmp532.min;
*(&local1) = $tmp533;
frost$core$Int64 $tmp534 = $tmp532.max;
frost$core$Bit $tmp535 = $tmp532.inclusive;
bool $tmp536 = $tmp535.value;
frost$core$Int64 $tmp537 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp538 = $tmp537.value;
frost$core$UInt64 $tmp539 = (frost$core$UInt64) {((uint64_t) $tmp538)};
if ($tmp536) goto block17; else goto block18;
block17:;
int64_t $tmp540 = $tmp533.value;
int64_t $tmp541 = $tmp534.value;
bool $tmp542 = $tmp540 <= $tmp541;
frost$core$Bit $tmp543 = (frost$core$Bit) {$tmp542};
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block14; else goto block15;
block18:;
int64_t $tmp545 = $tmp533.value;
int64_t $tmp546 = $tmp534.value;
bool $tmp547 = $tmp545 < $tmp546;
frost$core$Bit $tmp548 = (frost$core$Bit) {$tmp547};
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:248
frost$collections$HashMap$Entry*** $tmp550 = &param0->contents;
frost$collections$HashMap$Entry** $tmp551 = *$tmp550;
frost$core$Int64 $tmp552 = *(&local1);
int64_t $tmp553 = $tmp552.value;
frost$collections$HashMap$Entry* $tmp554 = $tmp551[$tmp553];
frost$core$Bit $tmp555 = frost$core$Bit$init$builtin_bit($tmp554 != NULL);
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:249
frost$collections$HashMap$Entry*** $tmp557 = &param0->contents;
frost$collections$HashMap$Entry** $tmp558 = *$tmp557;
frost$core$Int64 $tmp559 = *(&local1);
int64_t $tmp560 = $tmp559.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp561 = $tmp558[$tmp560];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
$tmp558[$tmp560] = ((frost$collections$HashMap$Entry*) NULL);
goto block20;
block20:;
frost$core$Int64 $tmp562 = *(&local1);
int64_t $tmp563 = $tmp534.value;
int64_t $tmp564 = $tmp562.value;
int64_t $tmp565 = $tmp563 - $tmp564;
frost$core$Int64 $tmp566 = (frost$core$Int64) {$tmp565};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp567 = $tmp566.value;
frost$core$UInt64 $tmp568 = (frost$core$UInt64) {((uint64_t) $tmp567)};
if ($tmp536) goto block23; else goto block24;
block23:;
uint64_t $tmp569 = $tmp568.value;
uint64_t $tmp570 = $tmp539.value;
bool $tmp571 = $tmp569 >= $tmp570;
frost$core$Bit $tmp572 = (frost$core$Bit) {$tmp571};
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block21; else goto block15;
block24:;
uint64_t $tmp574 = $tmp568.value;
uint64_t $tmp575 = $tmp539.value;
bool $tmp576 = $tmp574 > $tmp575;
frost$core$Bit $tmp577 = (frost$core$Bit) {$tmp576};
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block21; else goto block15;
block21:;
int64_t $tmp579 = $tmp562.value;
int64_t $tmp580 = $tmp537.value;
int64_t $tmp581 = $tmp579 + $tmp580;
frost$core$Int64 $tmp582 = (frost$core$Int64) {$tmp581};
*(&local1) = $tmp582;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:252
frost$core$Int64* $tmp583 = &param0->bucketCount;
frost$core$Int64 $tmp584 = *$tmp583;
frost$core$Int64 $tmp585 = (frost$core$Int64) {3};
int64_t $tmp586 = $tmp584.value;
int64_t $tmp587 = $tmp585.value;
int64_t $tmp588 = $tmp586 * $tmp587;
frost$core$Int64 $tmp589 = (frost$core$Int64) {$tmp588};
frost$core$Int64 $tmp590 = (frost$core$Int64) {4};
int64_t $tmp591 = $tmp589.value;
int64_t $tmp592 = $tmp590.value;
int64_t $tmp593 = $tmp591 / $tmp592;
frost$core$Int64 $tmp594 = (frost$core$Int64) {$tmp593};
frost$core$Int64* $tmp595 = &param0->threshold;
*$tmp595 = $tmp594;
return;

}
void frost$collections$HashMap$incrementCount(frost$collections$HashMap* param0) {

frost$collections$HashMap$Entry** local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$collections$HashMap$Entry* local4 = NULL;
frost$core$Int64 local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:257
frost$core$Int64* $tmp596 = &param0->_count;
frost$core$Int64 $tmp597 = *$tmp596;
frost$core$Int64 $tmp598 = (frost$core$Int64) {1};
int64_t $tmp599 = $tmp597.value;
int64_t $tmp600 = $tmp598.value;
int64_t $tmp601 = $tmp599 + $tmp600;
frost$core$Int64 $tmp602 = (frost$core$Int64) {$tmp601};
frost$core$Int64* $tmp603 = &param0->_count;
*$tmp603 = $tmp602;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:258
frost$core$Int64* $tmp604 = &param0->_count;
frost$core$Int64 $tmp605 = *$tmp604;
frost$core$Int64* $tmp606 = &param0->threshold;
frost$core$Int64 $tmp607 = *$tmp606;
int64_t $tmp608 = $tmp605.value;
int64_t $tmp609 = $tmp607.value;
bool $tmp610 = $tmp608 >= $tmp609;
frost$core$Bit $tmp611 = (frost$core$Bit) {$tmp610};
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:259
frost$collections$HashMap$Entry*** $tmp613 = &param0->contents;
frost$collections$HashMap$Entry** $tmp614 = *$tmp613;
*(&local0) = $tmp614;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:260
frost$core$Int64* $tmp615 = &param0->bucketCount;
frost$core$Int64 $tmp616 = *$tmp615;
*(&local1) = $tmp616;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:261
frost$core$Int64* $tmp617 = &param0->bucketCount;
frost$core$Int64 $tmp618 = *$tmp617;
frost$core$Int64 $tmp619 = (frost$core$Int64) {2};
int64_t $tmp620 = $tmp618.value;
int64_t $tmp621 = $tmp619.value;
int64_t $tmp622 = $tmp620 * $tmp621;
frost$core$Int64 $tmp623 = (frost$core$Int64) {$tmp622};
frost$core$Int64* $tmp624 = &param0->bucketCount;
*$tmp624 = $tmp623;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:262
frost$core$Int64* $tmp625 = &param0->bucketCount;
frost$core$Int64 $tmp626 = *$tmp625;
int64_t $tmp627 = $tmp626.value;
frost$collections$HashMap$Entry** $tmp628 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp627 * 8));
frost$collections$HashMap$Entry*** $tmp629 = &param0->contents;
*$tmp629 = $tmp628;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:263
frost$core$Int64 $tmp630 = (frost$core$Int64) {0};
frost$core$Int64* $tmp631 = &param0->bucketCount;
frost$core$Int64 $tmp632 = *$tmp631;
frost$core$Bit $tmp633 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp634 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp630, $tmp632, $tmp633);
frost$core$Int64 $tmp635 = $tmp634.min;
*(&local2) = $tmp635;
frost$core$Int64 $tmp636 = $tmp634.max;
frost$core$Bit $tmp637 = $tmp634.inclusive;
bool $tmp638 = $tmp637.value;
frost$core$Int64 $tmp639 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp640 = $tmp639.value;
frost$core$UInt64 $tmp641 = (frost$core$UInt64) {((uint64_t) $tmp640)};
if ($tmp638) goto block7; else goto block8;
block7:;
int64_t $tmp642 = $tmp635.value;
int64_t $tmp643 = $tmp636.value;
bool $tmp644 = $tmp642 <= $tmp643;
frost$core$Bit $tmp645 = (frost$core$Bit) {$tmp644};
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block4; else goto block5;
block8:;
int64_t $tmp647 = $tmp635.value;
int64_t $tmp648 = $tmp636.value;
bool $tmp649 = $tmp647 < $tmp648;
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:264
frost$collections$HashMap$Entry*** $tmp652 = &param0->contents;
frost$collections$HashMap$Entry** $tmp653 = *$tmp652;
frost$core$Int64 $tmp654 = *(&local2);
int64_t $tmp655 = $tmp654.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp656 = $tmp653[$tmp655];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
$tmp653[$tmp655] = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Int64 $tmp657 = *(&local2);
int64_t $tmp658 = $tmp636.value;
int64_t $tmp659 = $tmp657.value;
int64_t $tmp660 = $tmp658 - $tmp659;
frost$core$Int64 $tmp661 = (frost$core$Int64) {$tmp660};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp662 = $tmp661.value;
frost$core$UInt64 $tmp663 = (frost$core$UInt64) {((uint64_t) $tmp662)};
if ($tmp638) goto block11; else goto block12;
block11:;
uint64_t $tmp664 = $tmp663.value;
uint64_t $tmp665 = $tmp641.value;
bool $tmp666 = $tmp664 >= $tmp665;
frost$core$Bit $tmp667 = (frost$core$Bit) {$tmp666};
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block9; else goto block5;
block12:;
uint64_t $tmp669 = $tmp663.value;
uint64_t $tmp670 = $tmp641.value;
bool $tmp671 = $tmp669 > $tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block9; else goto block5;
block9:;
int64_t $tmp674 = $tmp657.value;
int64_t $tmp675 = $tmp639.value;
int64_t $tmp676 = $tmp674 + $tmp675;
frost$core$Int64 $tmp677 = (frost$core$Int64) {$tmp676};
*(&local2) = $tmp677;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:266
frost$core$Int64* $tmp678 = &param0->threshold;
frost$core$Int64 $tmp679 = *$tmp678;
frost$core$Int64 $tmp680 = (frost$core$Int64) {2};
int64_t $tmp681 = $tmp679.value;
int64_t $tmp682 = $tmp680.value;
int64_t $tmp683 = $tmp681 * $tmp682;
frost$core$Int64 $tmp684 = (frost$core$Int64) {$tmp683};
frost$core$Int64* $tmp685 = &param0->threshold;
*$tmp685 = $tmp684;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:267
frost$core$Int64 $tmp686 = (frost$core$Int64) {0};
frost$core$Int64* $tmp687 = &param0->_count;
*$tmp687 = $tmp686;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:268
frost$core$Int64 $tmp688 = (frost$core$Int64) {0};
frost$core$Int64 $tmp689 = *(&local1);
frost$core$Bit $tmp690 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp691 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp688, $tmp689, $tmp690);
frost$core$Int64 $tmp692 = $tmp691.min;
*(&local3) = $tmp692;
frost$core$Int64 $tmp693 = $tmp691.max;
frost$core$Bit $tmp694 = $tmp691.inclusive;
bool $tmp695 = $tmp694.value;
frost$core$Int64 $tmp696 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp697 = $tmp696.value;
frost$core$UInt64 $tmp698 = (frost$core$UInt64) {((uint64_t) $tmp697)};
if ($tmp695) goto block17; else goto block18;
block17:;
int64_t $tmp699 = $tmp692.value;
int64_t $tmp700 = $tmp693.value;
bool $tmp701 = $tmp699 <= $tmp700;
frost$core$Bit $tmp702 = (frost$core$Bit) {$tmp701};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block14; else goto block15;
block18:;
int64_t $tmp704 = $tmp692.value;
int64_t $tmp705 = $tmp693.value;
bool $tmp706 = $tmp704 < $tmp705;
frost$core$Bit $tmp707 = (frost$core$Bit) {$tmp706};
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:269
frost$collections$HashMap$Entry** $tmp709 = *(&local0);
frost$core$Int64 $tmp710 = *(&local3);
int64_t $tmp711 = $tmp710.value;
frost$collections$HashMap$Entry* $tmp712 = $tmp709[$tmp711];
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$collections$HashMap$Entry* $tmp713 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
*(&local4) = $tmp712;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:270
goto block19;
block19:;
frost$collections$HashMap$Entry* $tmp714 = *(&local4);
frost$core$Bit $tmp715 = frost$core$Bit$init$builtin_bit($tmp714 != NULL);
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:271
frost$collections$HashMap$Entry* $tmp717 = *(&local4);
frost$collections$Key** $tmp718 = &$tmp717->key;
frost$collections$Key* $tmp719 = *$tmp718;
frost$collections$HashMap$Entry* $tmp720 = *(&local4);
frost$core$Object** $tmp721 = &$tmp720->value;
frost$core$Object* $tmp722 = *$tmp721;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, $tmp719, $tmp722);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:272
frost$collections$HashMap$Entry* $tmp723 = *(&local4);
frost$collections$HashMap$Entry** $tmp724 = &$tmp723->next;
frost$collections$HashMap$Entry* $tmp725 = *$tmp724;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$collections$HashMap$Entry* $tmp726 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local4) = $tmp725;
goto block19;
block21:;
frost$collections$HashMap$Entry* $tmp727 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Int64 $tmp728 = *(&local3);
int64_t $tmp729 = $tmp693.value;
int64_t $tmp730 = $tmp728.value;
int64_t $tmp731 = $tmp729 - $tmp730;
frost$core$Int64 $tmp732 = (frost$core$Int64) {$tmp731};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp733 = $tmp732.value;
frost$core$UInt64 $tmp734 = (frost$core$UInt64) {((uint64_t) $tmp733)};
if ($tmp695) goto block24; else goto block25;
block24:;
uint64_t $tmp735 = $tmp734.value;
uint64_t $tmp736 = $tmp698.value;
bool $tmp737 = $tmp735 >= $tmp736;
frost$core$Bit $tmp738 = (frost$core$Bit) {$tmp737};
bool $tmp739 = $tmp738.value;
if ($tmp739) goto block22; else goto block15;
block25:;
uint64_t $tmp740 = $tmp734.value;
uint64_t $tmp741 = $tmp698.value;
bool $tmp742 = $tmp740 > $tmp741;
frost$core$Bit $tmp743 = (frost$core$Bit) {$tmp742};
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block22; else goto block15;
block22:;
int64_t $tmp745 = $tmp728.value;
int64_t $tmp746 = $tmp696.value;
int64_t $tmp747 = $tmp745 + $tmp746;
frost$core$Int64 $tmp748 = (frost$core$Int64) {$tmp747};
*(&local3) = $tmp748;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:275
frost$core$Int64 $tmp749 = (frost$core$Int64) {0};
frost$core$Int64 $tmp750 = *(&local1);
frost$core$Bit $tmp751 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp752 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp749, $tmp750, $tmp751);
frost$core$Int64 $tmp753 = $tmp752.min;
*(&local5) = $tmp753;
frost$core$Int64 $tmp754 = $tmp752.max;
frost$core$Bit $tmp755 = $tmp752.inclusive;
bool $tmp756 = $tmp755.value;
frost$core$Int64 $tmp757 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp758 = $tmp757.value;
frost$core$UInt64 $tmp759 = (frost$core$UInt64) {((uint64_t) $tmp758)};
if ($tmp756) goto block30; else goto block31;
block30:;
int64_t $tmp760 = $tmp753.value;
int64_t $tmp761 = $tmp754.value;
bool $tmp762 = $tmp760 <= $tmp761;
frost$core$Bit $tmp763 = (frost$core$Bit) {$tmp762};
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block27; else goto block28;
block31:;
int64_t $tmp765 = $tmp753.value;
int64_t $tmp766 = $tmp754.value;
bool $tmp767 = $tmp765 < $tmp766;
frost$core$Bit $tmp768 = (frost$core$Bit) {$tmp767};
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:276
frost$collections$HashMap$Entry** $tmp770 = *(&local0);
frost$core$Int64 $tmp771 = *(&local5);
int64_t $tmp772 = $tmp771.value;
frost$collections$HashMap$Entry* $tmp773 = $tmp770[$tmp772];
frost$core$Bit $tmp774 = frost$core$Bit$init$builtin_bit($tmp773 != NULL);
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:277
frost$collections$HashMap$Entry** $tmp776 = *(&local0);
frost$core$Int64 $tmp777 = *(&local5);
int64_t $tmp778 = $tmp777.value;
frost$collections$HashMap$Entry* $tmp779 = $tmp776[$tmp778];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
goto block33;
block33:;
frost$core$Int64 $tmp780 = *(&local5);
int64_t $tmp781 = $tmp754.value;
int64_t $tmp782 = $tmp780.value;
int64_t $tmp783 = $tmp781 - $tmp782;
frost$core$Int64 $tmp784 = (frost$core$Int64) {$tmp783};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp785 = $tmp784.value;
frost$core$UInt64 $tmp786 = (frost$core$UInt64) {((uint64_t) $tmp785)};
if ($tmp756) goto block36; else goto block37;
block36:;
uint64_t $tmp787 = $tmp786.value;
uint64_t $tmp788 = $tmp759.value;
bool $tmp789 = $tmp787 >= $tmp788;
frost$core$Bit $tmp790 = (frost$core$Bit) {$tmp789};
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block34; else goto block28;
block37:;
uint64_t $tmp792 = $tmp786.value;
uint64_t $tmp793 = $tmp759.value;
bool $tmp794 = $tmp792 > $tmp793;
frost$core$Bit $tmp795 = (frost$core$Bit) {$tmp794};
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block34; else goto block28;
block34:;
int64_t $tmp797 = $tmp780.value;
int64_t $tmp798 = $tmp757.value;
int64_t $tmp799 = $tmp797 + $tmp798;
frost$core$Int64 $tmp800 = (frost$core$Int64) {$tmp799};
*(&local5) = $tmp800;
goto block27;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:280
frost$collections$HashMap$Entry** $tmp801 = *(&local0);
frostFree($tmp801);
goto block2;
block2:;
return;

}
frost$collections$Iterator* frost$collections$HashMap$get_entries$R$frost$collections$Iterator$LT$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$GT(frost$collections$HashMap* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:286
FROST_ASSERT(40 == sizeof(frost$collections$HashMap$EntryIterator));
frost$collections$HashMap$EntryIterator* $tmp802 = (frost$collections$HashMap$EntryIterator*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$HashMap$EntryIterator$class);
frost$collections$HashMap$EntryIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$EntryIterator$K$Cfrost$collections$HashMap$EntryIterator$V$GT($tmp802, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp802)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
return ((frost$collections$Iterator*) $tmp802);

}
frost$core$Int64 frost$collections$HashMap$get_count$R$frost$core$Int64(frost$collections$HashMap* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:291
frost$core$Int64* $tmp803 = &param0->_count;
frost$core$Int64 $tmp804 = *$tmp803;
return $tmp804;

}
frost$core$String* frost$collections$HashMap$get_asString$R$frost$core$String(frost$collections$HashMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$collections$HashMap$Entry* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:302
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp805 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp805);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$MutableString* $tmp806 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local0) = $tmp805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:303
frost$core$MutableString* $tmp807 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp807, &$s808);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:304
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s809));
frost$core$String* $tmp810 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local1) = &$s811;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:305
frost$core$Int64 $tmp812 = (frost$core$Int64) {0};
frost$core$Int64* $tmp813 = &param0->bucketCount;
frost$core$Int64 $tmp814 = *$tmp813;
frost$core$Bit $tmp815 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp816 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp812, $tmp814, $tmp815);
frost$core$Int64 $tmp817 = $tmp816.min;
*(&local2) = $tmp817;
frost$core$Int64 $tmp818 = $tmp816.max;
frost$core$Bit $tmp819 = $tmp816.inclusive;
bool $tmp820 = $tmp819.value;
frost$core$Int64 $tmp821 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp822 = $tmp821.value;
frost$core$UInt64 $tmp823 = (frost$core$UInt64) {((uint64_t) $tmp822)};
if ($tmp820) goto block5; else goto block6;
block5:;
int64_t $tmp824 = $tmp817.value;
int64_t $tmp825 = $tmp818.value;
bool $tmp826 = $tmp824 <= $tmp825;
frost$core$Bit $tmp827 = (frost$core$Bit) {$tmp826};
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block2; else goto block3;
block6:;
int64_t $tmp829 = $tmp817.value;
int64_t $tmp830 = $tmp818.value;
bool $tmp831 = $tmp829 < $tmp830;
frost$core$Bit $tmp832 = (frost$core$Bit) {$tmp831};
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:306
frost$collections$HashMap$Entry*** $tmp834 = &param0->contents;
frost$collections$HashMap$Entry** $tmp835 = *$tmp834;
frost$core$Int64 $tmp836 = *(&local2);
int64_t $tmp837 = $tmp836.value;
frost$collections$HashMap$Entry* $tmp838 = $tmp835[$tmp837];
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
frost$collections$HashMap$Entry* $tmp839 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local3) = $tmp838;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:307
goto block7;
block7:;
frost$collections$HashMap$Entry* $tmp840 = *(&local3);
frost$core$Bit $tmp841 = frost$core$Bit$init$builtin_bit($tmp840 != NULL);
bool $tmp842 = $tmp841.value;
if ($tmp842) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:308
frost$core$MutableString* $tmp843 = *(&local0);
frost$core$String* $tmp844 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp843, $tmp844);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:309
frost$collections$HashMap$Entry* $tmp845 = *(&local3);
frost$collections$Key** $tmp846 = &$tmp845->key;
frost$collections$Key* $tmp847 = *$tmp846;
frost$core$Bit $tmp848 = frost$core$Bit$init$builtin_bit(true);
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block10; else goto block12;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:310
frost$core$MutableString* $tmp850 = *(&local0);
frost$collections$HashMap$Entry* $tmp851 = *(&local3);
frost$collections$Key** $tmp852 = &$tmp851->key;
frost$collections$Key* $tmp853 = *$tmp852;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from HashMap.frost:310:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
$fn855 $tmp854 = ($fn855) ((frost$core$Object*) $tmp853)->$class->vtable[0];
frost$core$String* $tmp856 = $tmp854(((frost$core$Object*) $tmp853));
frost$core$MutableString$append$frost$core$String($tmp850, $tmp856);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
goto block11;
block12:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:313
frost$core$MutableString* $tmp857 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp857, &$s858);
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:315
frost$core$MutableString* $tmp859 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp859, &$s860);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:316
frost$collections$HashMap$Entry* $tmp861 = *(&local3);
frost$core$Object** $tmp862 = &$tmp861->value;
frost$core$Object* $tmp863 = *$tmp862;
frost$core$Bit $tmp864 = frost$core$Bit$init$builtin_bit(true);
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:317
frost$core$MutableString* $tmp866 = *(&local0);
frost$collections$HashMap$Entry* $tmp867 = *(&local3);
frost$core$Object** $tmp868 = &$tmp867->value;
frost$core$Object* $tmp869 = *$tmp868;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from HashMap.frost:317:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
$fn871 $tmp870 = ($fn871) $tmp869->$class->vtable[0];
frost$core$String* $tmp872 = $tmp870($tmp869);
frost$core$MutableString$append$frost$core$String($tmp866, $tmp872);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
goto block15;
block16:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:320
frost$core$MutableString* $tmp873 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp873, &$s874);
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:322
frost$collections$HashMap$Entry* $tmp875 = *(&local3);
frost$collections$HashMap$Entry** $tmp876 = &$tmp875->next;
frost$collections$HashMap$Entry* $tmp877 = *$tmp876;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$collections$HashMap$Entry* $tmp878 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local3) = $tmp877;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s879));
frost$core$String* $tmp880 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
*(&local1) = &$s881;
goto block7;
block9:;
frost$collections$HashMap$Entry* $tmp882 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Int64 $tmp883 = *(&local2);
int64_t $tmp884 = $tmp818.value;
int64_t $tmp885 = $tmp883.value;
int64_t $tmp886 = $tmp884 - $tmp885;
frost$core$Int64 $tmp887 = (frost$core$Int64) {$tmp886};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp888 = $tmp887.value;
frost$core$UInt64 $tmp889 = (frost$core$UInt64) {((uint64_t) $tmp888)};
if ($tmp820) goto block20; else goto block21;
block20:;
uint64_t $tmp890 = $tmp889.value;
uint64_t $tmp891 = $tmp823.value;
bool $tmp892 = $tmp890 >= $tmp891;
frost$core$Bit $tmp893 = (frost$core$Bit) {$tmp892};
bool $tmp894 = $tmp893.value;
if ($tmp894) goto block18; else goto block3;
block21:;
uint64_t $tmp895 = $tmp889.value;
uint64_t $tmp896 = $tmp823.value;
bool $tmp897 = $tmp895 > $tmp896;
frost$core$Bit $tmp898 = (frost$core$Bit) {$tmp897};
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block18; else goto block3;
block18:;
int64_t $tmp900 = $tmp883.value;
int64_t $tmp901 = $tmp821.value;
int64_t $tmp902 = $tmp900 + $tmp901;
frost$core$Int64 $tmp903 = (frost$core$Int64) {$tmp902};
*(&local2) = $tmp903;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:326
frost$core$MutableString* $tmp904 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp904, &$s905);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashMap.frost:327
frost$core$MutableString* $tmp906 = *(&local0);
frost$core$String* $tmp907 = frost$core$MutableString$finish$R$frost$core$String($tmp906);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
frost$core$String* $tmp908 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp909 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp907;

}

