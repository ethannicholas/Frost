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
#include "frost/core/Equatable.h"
#include "frost/collections/HashMap/KeyIterator.h"
#include "frost/collections/HashMap/ValueIterator.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Object* frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim(frost$collections$HashMap* p0, frost$core$Object* p1) {
    frost$core$Object* result = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(p0, ((frost$collections$Key*) p1));

    return result;
}
__attribute__((weak)) frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim(frost$collections$HashMap* p0, frost$core$Object* p1) {
    frost$core$Bit result = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(p0, ((frost$collections$Key*) p1));

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT$shim(frost$collections$HashMap* p0) {
    frost$collections$Iterator* result = frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT$shim(frost$collections$HashMap* p0) {
    frost$collections$Iterator* result = frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim(frost$collections$HashMap* p0, frost$core$Object* p1, frost$core$Object* p2) {
    frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(p0, ((frost$collections$Key*) p1), p2);

}
__attribute__((weak)) void frost$collections$HashMap$remove$frost$collections$HashMap$K$shim(frost$collections$HashMap* p0, frost$core$Object* p1) {
    frost$collections$HashMap$remove$frost$collections$HashMap$K(p0, ((frost$collections$Key*) p1));

}

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$HashMap$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, NULL, { frost$collections$HashMap$get_count$R$frost$core$Int64, frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim, frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim, frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT$shim, frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$HashMap$_frost$collections$Map = { (frost$core$Class*) &frost$collections$Map$class, (ITable*) &frost$collections$HashMap$_frost$collections$MapView, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$collections$HashMap$_frost$collections$MapWriter = { (frost$core$Class*) &frost$collections$MapWriter$class, (ITable*) &frost$collections$HashMap$_frost$collections$Map, { frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim, frost$collections$HashMap$remove$frost$collections$HashMap$K$shim} };

static frost$core$String $s1;
frost$collections$HashMap$class_type frost$collections$HashMap$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashMap$_frost$collections$MapWriter, { frost$collections$HashMap$get_asString$R$frost$core$String, frost$collections$HashMap$cleanup, frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64, frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim, frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim, frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim, frost$collections$HashMap$remove$frost$collections$HashMap$K$shim, frost$collections$HashMap$clear, frost$collections$HashMap$incrementCount, frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT$shim, frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT$shim, frost$collections$HashMap$get_count$R$frost$core$Int64} };

typedef frost$collections$Iterator* (*$fn82)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn86)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn98)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$Int64 (*$fn161)(frost$collections$Key*);
typedef frost$core$Bit (*$fn205)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn236)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn270)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn330)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn364)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -6526495327472465984, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s745 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s788 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s790 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

void frost$collections$HashMap$init(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
// line 133
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->changeCount;
*$tmp3 = $tmp2;
// line 139
frost$core$Int64* $tmp4 = &param0->changeCount;
frost$core$Int64 $tmp5 = *$tmp4;
frost$core$Int64 $tmp6 = (frost$core$Int64) {1};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
frost$core$Int64 $tmp10 = (frost$core$Int64) {$tmp9};
frost$core$Int64* $tmp11 = &param0->changeCount;
*$tmp11 = $tmp10;
// line 140
frost$core$Int64 $tmp12 = (frost$core$Int64) {0};
frost$core$Int64* $tmp13 = &param0->_count;
*$tmp13 = $tmp12;
// line 141
frost$core$Int64 $tmp14 = (frost$core$Int64) {16};
frost$core$Int64* $tmp15 = &param0->bucketCount;
*$tmp15 = $tmp14;
// line 142
frost$core$Int64* $tmp16 = &param0->bucketCount;
frost$core$Int64 $tmp17 = *$tmp16;
int64_t $tmp18 = $tmp17.value;
frost$collections$HashMap$Entry** $tmp19 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp18 * 8));
frost$collections$HashMap$Entry*** $tmp20 = &param0->contents;
*$tmp20 = $tmp19;
// line 143
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
// line 144
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
// line 146
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
// line 150
frost$collections$HashMap$init(param0);
// line 152
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
ITable* $tmp89 = $tmp83->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[1];
frost$core$Object* $tmp92 = $tmp90($tmp83);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp92)));
frost$collections$Key* $tmp93 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local0) = ((frost$collections$Key*) $tmp92);
// line 153
frost$collections$Key* $tmp94 = *(&local0);
frost$collections$Key* $tmp95 = *(&local0);
ITable* $tmp96 = param1->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[1];
frost$core$Object* $tmp99 = $tmp97(param1, ((frost$core$Object*) $tmp95));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, $tmp94, $tmp99);
frost$core$Frost$unref$frost$core$Object$Q($tmp99);
frost$core$Frost$unref$frost$core$Object$Q($tmp92);
frost$collections$Key* $tmp100 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local0) = ((frost$collections$Key*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
return;

}
void frost$collections$HashMap$cleanup(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
// line 159
frost$core$Int64 $tmp101 = (frost$core$Int64) {0};
frost$core$Int64* $tmp102 = &param0->bucketCount;
frost$core$Int64 $tmp103 = *$tmp102;
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp105 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp101, $tmp103, $tmp104);
frost$core$Int64 $tmp106 = $tmp105.min;
*(&local0) = $tmp106;
frost$core$Int64 $tmp107 = $tmp105.max;
frost$core$Bit $tmp108 = $tmp105.inclusive;
bool $tmp109 = $tmp108.value;
frost$core$Int64 $tmp110 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp111 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp110);
if ($tmp109) goto block4; else goto block5;
block4:;
int64_t $tmp112 = $tmp106.value;
int64_t $tmp113 = $tmp107.value;
bool $tmp114 = $tmp112 <= $tmp113;
frost$core$Bit $tmp115 = (frost$core$Bit) {$tmp114};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block1; else goto block2;
block5:;
int64_t $tmp117 = $tmp106.value;
int64_t $tmp118 = $tmp107.value;
bool $tmp119 = $tmp117 < $tmp118;
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119};
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block1; else goto block2;
block1:;
// line 160
frost$collections$HashMap$Entry*** $tmp122 = &param0->contents;
frost$collections$HashMap$Entry** $tmp123 = *$tmp122;
frost$core$Int64 $tmp124 = *(&local0);
int64_t $tmp125 = $tmp124.value;
frost$collections$HashMap$Entry* $tmp126 = $tmp123[$tmp125];
frost$core$Bit $tmp127 = frost$core$Bit$init$builtin_bit($tmp126 != NULL);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block6; else goto block7;
block6:;
// line 161
frost$collections$HashMap$Entry*** $tmp129 = &param0->contents;
frost$collections$HashMap$Entry** $tmp130 = *$tmp129;
frost$core$Int64 $tmp131 = *(&local0);
int64_t $tmp132 = $tmp131.value;
frost$collections$HashMap$Entry* $tmp133 = $tmp130[$tmp132];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp134 = *(&local0);
int64_t $tmp135 = $tmp107.value;
int64_t $tmp136 = $tmp134.value;
int64_t $tmp137 = $tmp135 - $tmp136;
frost$core$Int64 $tmp138 = (frost$core$Int64) {$tmp137};
frost$core$UInt64 $tmp139 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp138);
if ($tmp109) goto block9; else goto block10;
block9:;
uint64_t $tmp140 = $tmp139.value;
uint64_t $tmp141 = $tmp111.value;
bool $tmp142 = $tmp140 >= $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block8; else goto block2;
block10:;
uint64_t $tmp145 = $tmp139.value;
uint64_t $tmp146 = $tmp111.value;
bool $tmp147 = $tmp145 > $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block8; else goto block2;
block8:;
int64_t $tmp150 = $tmp134.value;
int64_t $tmp151 = $tmp110.value;
int64_t $tmp152 = $tmp150 + $tmp151;
frost$core$Int64 $tmp153 = (frost$core$Int64) {$tmp152};
*(&local0) = $tmp153;
goto block1;
block2:;
// line 164
frost$collections$HashMap$Entry*** $tmp154 = &param0->contents;
frost$collections$HashMap$Entry** $tmp155 = *$tmp154;
frostFree($tmp155);
// line 158
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Int64 frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
// line 172
// line 173
frost$core$Bit $tmp156 = frost$core$Bit$init$builtin_bit(false);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block1; else goto block3;
block1:;
// line 174
frost$core$Int64 $tmp158 = (frost$core$Int64) {0};
*(&local0) = $tmp158;
goto block2;
block3:;
// line 1
// line 177
ITable* $tmp159 = param1->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
frost$core$Int64 $tmp162 = $tmp160(param1);
*(&local0) = $tmp162;
goto block2;
block2:;
// line 181
frost$core$Int64 $tmp163 = *(&local0);
frost$core$Int64 $tmp164 = *(&local0);
frost$core$Int64 $tmp165 = (frost$core$Int64) {20};
frost$core$Int64 $tmp166 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp164, $tmp165);
frost$core$Int64 $tmp167 = *(&local0);
frost$core$Int64 $tmp168 = (frost$core$Int64) {12};
frost$core$Int64 $tmp169 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp167, $tmp168);
frost$core$Int64 $tmp170 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp166, $tmp169);
frost$core$Int64 $tmp171 = *(&local0);
frost$core$Int64 $tmp172 = (frost$core$Int64) {7};
frost$core$Int64 $tmp173 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp171, $tmp172);
frost$core$Int64 $tmp174 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp170, $tmp173);
frost$core$Int64 $tmp175 = *(&local0);
frost$core$Int64 $tmp176 = (frost$core$Int64) {4};
frost$core$Int64 $tmp177 = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64($tmp175, $tmp176);
frost$core$Int64 $tmp178 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp174, $tmp177);
frost$core$Int64 $tmp179 = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64($tmp163, $tmp178);
*(&local0) = $tmp179;
// line 184
frost$core$Int64 $tmp180 = *(&local0);
frost$core$Int64* $tmp181 = &param0->bucketCount;
frost$core$Int64 $tmp182 = *$tmp181;
frost$core$Int64 $tmp183 = (frost$core$Int64) {1};
int64_t $tmp184 = $tmp182.value;
int64_t $tmp185 = $tmp183.value;
int64_t $tmp186 = $tmp184 - $tmp185;
frost$core$Int64 $tmp187 = (frost$core$Int64) {$tmp186};
frost$core$Int64 $tmp188 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp180, $tmp187);
*(&local0) = $tmp188;
// line 185
frost$core$Int64 $tmp189 = *(&local0);
return $tmp189;

}
frost$core$Object* frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$core$Bit local2;
// line 190
frost$core$Int64 $tmp190 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp190;
// line 191
frost$collections$HashMap$Entry*** $tmp191 = &param0->contents;
frost$collections$HashMap$Entry** $tmp192 = *$tmp191;
frost$core$Int64 $tmp193 = *(&local0);
int64_t $tmp194 = $tmp193.value;
frost$collections$HashMap$Entry* $tmp195 = $tmp192[$tmp194];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$collections$HashMap$Entry* $tmp196 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local1) = $tmp195;
// line 192
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp197 = *(&local1);
frost$core$Bit $tmp198 = frost$core$Bit$init$builtin_bit($tmp197 != NULL);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block4; else goto block5;
block4:;
frost$collections$HashMap$Entry* $tmp200 = *(&local1);
frost$collections$Key** $tmp201 = &$tmp200->key;
frost$collections$Key* $tmp202 = *$tmp201;
ITable* $tmp203 = ((frost$core$Equatable*) $tmp202)->$class->itable;
while ($tmp203->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp203 = $tmp203->next;
}
$fn205 $tmp204 = $tmp203->methods[1];
frost$core$Bit $tmp206 = $tmp204(((frost$core$Equatable*) $tmp202), ((frost$core$Equatable*) param1));
*(&local2) = $tmp206;
goto block6;
block5:;
*(&local2) = $tmp198;
goto block6;
block6:;
frost$core$Bit $tmp207 = *(&local2);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block2; else goto block3;
block2:;
// line 193
frost$collections$HashMap$Entry* $tmp209 = *(&local1);
frost$collections$HashMap$Entry** $tmp210 = &$tmp209->next;
frost$collections$HashMap$Entry* $tmp211 = *$tmp210;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$collections$HashMap$Entry* $tmp212 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local1) = $tmp211;
goto block1;
block3:;
// line 195
frost$collections$HashMap$Entry* $tmp213 = *(&local1);
frost$core$Bit $tmp214 = frost$core$Bit$init$builtin_bit($tmp213 != NULL);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block7; else goto block9;
block7:;
// line 196
frost$collections$HashMap$Entry* $tmp216 = *(&local1);
frost$core$Object** $tmp217 = &$tmp216->value;
frost$core$Object* $tmp218 = *$tmp217;
frost$core$Frost$ref$frost$core$Object$Q($tmp218);
frost$collections$HashMap$Entry* $tmp219 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp218;
block9:;
// line 1
// line 199
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$HashMap$Entry* $tmp220 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block8:;
goto block10;
block10:;

}
frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$core$Bit local2;
// line 205
frost$core$Int64 $tmp221 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp221;
// line 206
frost$collections$HashMap$Entry*** $tmp222 = &param0->contents;
frost$collections$HashMap$Entry** $tmp223 = *$tmp222;
frost$core$Int64 $tmp224 = *(&local0);
int64_t $tmp225 = $tmp224.value;
frost$collections$HashMap$Entry* $tmp226 = $tmp223[$tmp225];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$collections$HashMap$Entry* $tmp227 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local1) = $tmp226;
// line 207
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp228 = *(&local1);
frost$core$Bit $tmp229 = frost$core$Bit$init$builtin_bit($tmp228 != NULL);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block4; else goto block5;
block4:;
frost$collections$HashMap$Entry* $tmp231 = *(&local1);
frost$collections$Key** $tmp232 = &$tmp231->key;
frost$collections$Key* $tmp233 = *$tmp232;
ITable* $tmp234 = ((frost$core$Equatable*) $tmp233)->$class->itable;
while ($tmp234->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[1];
frost$core$Bit $tmp237 = $tmp235(((frost$core$Equatable*) $tmp233), ((frost$core$Equatable*) param1));
*(&local2) = $tmp237;
goto block6;
block5:;
*(&local2) = $tmp229;
goto block6;
block6:;
frost$core$Bit $tmp238 = *(&local2);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block2; else goto block3;
block2:;
// line 208
frost$collections$HashMap$Entry* $tmp240 = *(&local1);
frost$collections$HashMap$Entry** $tmp241 = &$tmp240->next;
frost$collections$HashMap$Entry* $tmp242 = *$tmp241;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$collections$HashMap$Entry* $tmp243 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local1) = $tmp242;
goto block1;
block3:;
// line 210
frost$collections$HashMap$Entry* $tmp244 = *(&local1);
frost$core$Bit $tmp245 = frost$core$Bit$init$builtin_bit($tmp244 != NULL);
frost$collections$HashMap$Entry* $tmp246 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp245;

}
void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(frost$collections$HashMap* param0, frost$collections$Key* param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$core$Bit local2;
frost$collections$HashMap$Entry* local3 = NULL;
// line 215
frost$core$Int64* $tmp247 = &param0->changeCount;
frost$core$Int64 $tmp248 = *$tmp247;
frost$core$Int64 $tmp249 = (frost$core$Int64) {1};
int64_t $tmp250 = $tmp248.value;
int64_t $tmp251 = $tmp249.value;
int64_t $tmp252 = $tmp250 + $tmp251;
frost$core$Int64 $tmp253 = (frost$core$Int64) {$tmp252};
frost$core$Int64* $tmp254 = &param0->changeCount;
*$tmp254 = $tmp253;
// line 216
frost$core$Int64 $tmp255 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp255;
// line 217
frost$collections$HashMap$Entry*** $tmp256 = &param0->contents;
frost$collections$HashMap$Entry** $tmp257 = *$tmp256;
frost$core$Int64 $tmp258 = *(&local0);
int64_t $tmp259 = $tmp258.value;
frost$collections$HashMap$Entry* $tmp260 = $tmp257[$tmp259];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$collections$HashMap$Entry* $tmp261 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local1) = $tmp260;
// line 218
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp262 = *(&local1);
frost$core$Bit $tmp263 = frost$core$Bit$init$builtin_bit($tmp262 != NULL);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block4; else goto block5;
block4:;
frost$collections$HashMap$Entry* $tmp265 = *(&local1);
frost$collections$Key** $tmp266 = &$tmp265->key;
frost$collections$Key* $tmp267 = *$tmp266;
ITable* $tmp268 = ((frost$core$Equatable*) $tmp267)->$class->itable;
while ($tmp268->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp268 = $tmp268->next;
}
$fn270 $tmp269 = $tmp268->methods[1];
frost$core$Bit $tmp271 = $tmp269(((frost$core$Equatable*) $tmp267), ((frost$core$Equatable*) param1));
*(&local2) = $tmp271;
goto block6;
block5:;
*(&local2) = $tmp263;
goto block6;
block6:;
frost$core$Bit $tmp272 = *(&local2);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block2; else goto block3;
block2:;
// line 219
frost$collections$HashMap$Entry* $tmp274 = *(&local1);
frost$collections$HashMap$Entry** $tmp275 = &$tmp274->next;
frost$collections$HashMap$Entry* $tmp276 = *$tmp275;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$collections$HashMap$Entry* $tmp277 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local1) = $tmp276;
goto block1;
block3:;
// line 221
frost$collections$HashMap$Entry* $tmp278 = *(&local1);
frost$core$Bit $tmp279 = frost$core$Bit$init$builtin_bit($tmp278 == NULL);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block7; else goto block9;
block7:;
// line 222
frost$collections$HashMap$Entry*** $tmp281 = &param0->contents;
frost$collections$HashMap$Entry** $tmp282 = *$tmp281;
frost$core$Int64 $tmp283 = *(&local0);
int64_t $tmp284 = $tmp283.value;
frost$collections$HashMap$Entry* $tmp285 = $tmp282[$tmp284];
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
frost$collections$HashMap$Entry* $tmp286 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local3) = $tmp285;
// line 223
frost$collections$HashMap$Entry* $tmp287 = (frost$collections$HashMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$HashMap$Entry$class);
frost$collections$HashMap$Entry$init$frost$collections$HashMap$Entry$K$frost$collections$HashMap$Entry$V($tmp287, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$collections$HashMap$Entry* $tmp288 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local1) = $tmp287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// line 224
frost$collections$HashMap$Entry* $tmp289 = *(&local1);
frost$collections$HashMap$Entry* $tmp290 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$collections$HashMap$Entry** $tmp291 = &$tmp289->next;
frost$collections$HashMap$Entry* $tmp292 = *$tmp291;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$collections$HashMap$Entry** $tmp293 = &$tmp289->next;
*$tmp293 = $tmp290;
// line 225
frost$collections$HashMap$Entry*** $tmp294 = &param0->contents;
frost$collections$HashMap$Entry** $tmp295 = *$tmp294;
frost$core$Int64 $tmp296 = *(&local0);
frost$collections$HashMap$Entry* $tmp297 = *(&local1);
int64_t $tmp298 = $tmp296.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$collections$HashMap$Entry* $tmp299 = $tmp295[$tmp298];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
$tmp295[$tmp298] = $tmp297;
// line 226
frost$collections$HashMap$incrementCount(param0);
frost$collections$HashMap$Entry* $tmp300 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
goto block8;
block9:;
// line 1
// line 229
frost$collections$HashMap$Entry* $tmp301 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp302 = &$tmp301->value;
frost$core$Object* $tmp303 = *$tmp302;
frost$core$Frost$unref$frost$core$Object$Q($tmp303);
frost$core$Object** $tmp304 = &$tmp301->value;
*$tmp304 = param2;
goto block8;
block8:;
frost$collections$HashMap$Entry* $tmp305 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$remove$frost$collections$HashMap$K(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$collections$HashMap$Entry* local2 = NULL;
frost$collections$HashMap$Entry* local3 = NULL;
// line 235
frost$core$Int64* $tmp306 = &param0->changeCount;
frost$core$Int64 $tmp307 = *$tmp306;
frost$core$Int64 $tmp308 = (frost$core$Int64) {1};
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308.value;
int64_t $tmp311 = $tmp309 + $tmp310;
frost$core$Int64 $tmp312 = (frost$core$Int64) {$tmp311};
frost$core$Int64* $tmp313 = &param0->changeCount;
*$tmp313 = $tmp312;
// line 236
frost$core$Int64 $tmp314 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp314;
// line 237
frost$collections$HashMap$Entry*** $tmp315 = &param0->contents;
frost$collections$HashMap$Entry** $tmp316 = *$tmp315;
frost$core$Int64 $tmp317 = *(&local0);
int64_t $tmp318 = $tmp317.value;
frost$collections$HashMap$Entry* $tmp319 = $tmp316[$tmp318];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
frost$collections$HashMap$Entry* $tmp320 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local1) = $tmp319;
// line 239
frost$collections$HashMap$Entry* $tmp321 = *(&local1);
frost$core$Bit $tmp322 = frost$core$Bit$init$builtin_bit($tmp321 == NULL);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block1; else goto block2;
block1:;
// line 240
frost$collections$HashMap$Entry* $tmp324 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block2:;
// line 243
frost$collections$HashMap$Entry* $tmp325 = *(&local1);
frost$collections$Key** $tmp326 = &$tmp325->key;
frost$collections$Key* $tmp327 = *$tmp326;
ITable* $tmp328 = ((frost$core$Equatable*) $tmp327)->$class->itable;
while ($tmp328->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp328 = $tmp328->next;
}
$fn330 $tmp329 = $tmp328->methods[0];
frost$core$Bit $tmp331 = $tmp329(((frost$core$Equatable*) $tmp327), ((frost$core$Equatable*) param1));
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block3; else goto block4;
block3:;
// line 244
frost$collections$HashMap$Entry*** $tmp333 = &param0->contents;
frost$collections$HashMap$Entry** $tmp334 = *$tmp333;
frost$core$Int64 $tmp335 = *(&local0);
frost$collections$HashMap$Entry* $tmp336 = *(&local1);
frost$collections$HashMap$Entry** $tmp337 = &$tmp336->next;
frost$collections$HashMap$Entry* $tmp338 = *$tmp337;
int64_t $tmp339 = $tmp335.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$collections$HashMap$Entry* $tmp340 = $tmp334[$tmp339];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
$tmp334[$tmp339] = $tmp338;
// line 245
frost$core$Int64* $tmp341 = &param0->_count;
frost$core$Int64 $tmp342 = *$tmp341;
frost$core$Int64 $tmp343 = (frost$core$Int64) {1};
int64_t $tmp344 = $tmp342.value;
int64_t $tmp345 = $tmp343.value;
int64_t $tmp346 = $tmp344 - $tmp345;
frost$core$Int64 $tmp347 = (frost$core$Int64) {$tmp346};
frost$core$Int64* $tmp348 = &param0->_count;
*$tmp348 = $tmp347;
// line 246
frost$collections$HashMap$Entry* $tmp349 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block4:;
// line 248
goto block5;
block5:;
// line 249
frost$collections$HashMap$Entry* $tmp350 = *(&local1);
frost$collections$HashMap$Entry** $tmp351 = &$tmp350->next;
frost$collections$HashMap$Entry* $tmp352 = *$tmp351;
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$collections$HashMap$Entry* $tmp353 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local2) = $tmp352;
// line 250
frost$collections$HashMap$Entry* $tmp354 = *(&local2);
frost$core$Bit $tmp355 = frost$core$Bit$init$builtin_bit($tmp354 == NULL);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block7; else goto block8;
block7:;
// line 252
frost$collections$HashMap$Entry* $tmp357 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp358 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block8:;
// line 254
frost$collections$HashMap$Entry* $tmp359 = *(&local2);
frost$collections$Key** $tmp360 = &$tmp359->key;
frost$collections$Key* $tmp361 = *$tmp360;
ITable* $tmp362 = ((frost$core$Equatable*) $tmp361)->$class->itable;
while ($tmp362->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp362 = $tmp362->next;
}
$fn364 $tmp363 = $tmp362->methods[0];
frost$core$Bit $tmp365 = $tmp363(((frost$core$Equatable*) $tmp361), ((frost$core$Equatable*) param1));
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block9; else goto block10;
block9:;
// line 256
frost$collections$HashMap$Entry* $tmp367 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block6;
block10:;
// line 258
frost$collections$HashMap$Entry* $tmp368 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$collections$HashMap$Entry* $tmp369 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local1) = $tmp368;
frost$collections$HashMap$Entry* $tmp370 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block5;
block6:;
// line 261
frost$collections$HashMap$Entry* $tmp371 = *(&local1);
frost$collections$HashMap$Entry** $tmp372 = &$tmp371->next;
frost$collections$HashMap$Entry* $tmp373 = *$tmp372;
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$collections$HashMap$Entry* $tmp374 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local3) = $tmp373;
// line 262
frost$collections$HashMap$Entry* $tmp375 = *(&local3);
frost$core$Bit $tmp376 = frost$core$Bit$init$builtin_bit($tmp375 != NULL);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp378 = (frost$core$Int64) {262};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s379, $tmp378);
abort(); // unreachable
block11:;
// line 263
frost$collections$HashMap$Entry* $tmp380 = *(&local1);
frost$collections$HashMap$Entry* $tmp381 = *(&local3);
frost$collections$HashMap$Entry** $tmp382 = &$tmp381->next;
frost$collections$HashMap$Entry* $tmp383 = *$tmp382;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$collections$HashMap$Entry** $tmp384 = &$tmp380->next;
frost$collections$HashMap$Entry* $tmp385 = *$tmp384;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$collections$HashMap$Entry** $tmp386 = &$tmp380->next;
*$tmp386 = $tmp383;
// line 264
frost$core$Int64* $tmp387 = &param0->_count;
frost$core$Int64 $tmp388 = *$tmp387;
frost$core$Int64 $tmp389 = (frost$core$Int64) {1};
int64_t $tmp390 = $tmp388.value;
int64_t $tmp391 = $tmp389.value;
int64_t $tmp392 = $tmp390 - $tmp391;
frost$core$Int64 $tmp393 = (frost$core$Int64) {$tmp392};
frost$core$Int64* $tmp394 = &param0->_count;
*$tmp394 = $tmp393;
frost$collections$HashMap$Entry* $tmp395 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp396 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$clear(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 268
frost$core$Int64* $tmp397 = &param0->changeCount;
frost$core$Int64 $tmp398 = *$tmp397;
frost$core$Int64 $tmp399 = (frost$core$Int64) {1};
int64_t $tmp400 = $tmp398.value;
int64_t $tmp401 = $tmp399.value;
int64_t $tmp402 = $tmp400 + $tmp401;
frost$core$Int64 $tmp403 = (frost$core$Int64) {$tmp402};
frost$core$Int64* $tmp404 = &param0->changeCount;
*$tmp404 = $tmp403;
// line 269
frost$core$Int64 $tmp405 = (frost$core$Int64) {0};
frost$core$Int64* $tmp406 = &param0->_count;
*$tmp406 = $tmp405;
// line 270
frost$core$Int64 $tmp407 = (frost$core$Int64) {0};
frost$core$Int64* $tmp408 = &param0->bucketCount;
frost$core$Int64 $tmp409 = *$tmp408;
frost$core$Bit $tmp410 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp411 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp407, $tmp409, $tmp410);
frost$core$Int64 $tmp412 = $tmp411.min;
*(&local0) = $tmp412;
frost$core$Int64 $tmp413 = $tmp411.max;
frost$core$Bit $tmp414 = $tmp411.inclusive;
bool $tmp415 = $tmp414.value;
frost$core$Int64 $tmp416 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp417 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp416);
if ($tmp415) goto block4; else goto block5;
block4:;
int64_t $tmp418 = $tmp412.value;
int64_t $tmp419 = $tmp413.value;
bool $tmp420 = $tmp418 <= $tmp419;
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp420};
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block1; else goto block2;
block5:;
int64_t $tmp423 = $tmp412.value;
int64_t $tmp424 = $tmp413.value;
bool $tmp425 = $tmp423 < $tmp424;
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block1; else goto block2;
block1:;
// line 271
frost$collections$HashMap$Entry*** $tmp428 = &param0->contents;
frost$collections$HashMap$Entry** $tmp429 = *$tmp428;
frost$core$Int64 $tmp430 = *(&local0);
int64_t $tmp431 = $tmp430.value;
frost$collections$HashMap$Entry* $tmp432 = $tmp429[$tmp431];
frost$core$Bit $tmp433 = frost$core$Bit$init$builtin_bit($tmp432 != NULL);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block6; else goto block7;
block6:;
// line 272
frost$collections$HashMap$Entry*** $tmp435 = &param0->contents;
frost$collections$HashMap$Entry** $tmp436 = *$tmp435;
frost$core$Int64 $tmp437 = *(&local0);
int64_t $tmp438 = $tmp437.value;
frost$collections$HashMap$Entry* $tmp439 = $tmp436[$tmp438];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp440 = *(&local0);
int64_t $tmp441 = $tmp413.value;
int64_t $tmp442 = $tmp440.value;
int64_t $tmp443 = $tmp441 - $tmp442;
frost$core$Int64 $tmp444 = (frost$core$Int64) {$tmp443};
frost$core$UInt64 $tmp445 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp444);
if ($tmp415) goto block9; else goto block10;
block9:;
uint64_t $tmp446 = $tmp445.value;
uint64_t $tmp447 = $tmp417.value;
bool $tmp448 = $tmp446 >= $tmp447;
frost$core$Bit $tmp449 = (frost$core$Bit) {$tmp448};
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block8; else goto block2;
block10:;
uint64_t $tmp451 = $tmp445.value;
uint64_t $tmp452 = $tmp417.value;
bool $tmp453 = $tmp451 > $tmp452;
frost$core$Bit $tmp454 = (frost$core$Bit) {$tmp453};
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block8; else goto block2;
block8:;
int64_t $tmp456 = $tmp440.value;
int64_t $tmp457 = $tmp416.value;
int64_t $tmp458 = $tmp456 + $tmp457;
frost$core$Int64 $tmp459 = (frost$core$Int64) {$tmp458};
*(&local0) = $tmp459;
goto block1;
block2:;
// line 275
frost$collections$HashMap$Entry*** $tmp460 = &param0->contents;
frost$collections$HashMap$Entry** $tmp461 = *$tmp460;
frostFree($tmp461);
// line 276
frost$core$Int64 $tmp462 = (frost$core$Int64) {16};
frost$core$Int64* $tmp463 = &param0->bucketCount;
*$tmp463 = $tmp462;
// line 277
frost$core$Int64* $tmp464 = &param0->bucketCount;
frost$core$Int64 $tmp465 = *$tmp464;
int64_t $tmp466 = $tmp465.value;
frost$collections$HashMap$Entry** $tmp467 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp466 * 8));
frost$collections$HashMap$Entry*** $tmp468 = &param0->contents;
*$tmp468 = $tmp467;
// line 278
frost$core$Int64 $tmp469 = (frost$core$Int64) {0};
frost$core$Int64* $tmp470 = &param0->bucketCount;
frost$core$Int64 $tmp471 = *$tmp470;
frost$core$Bit $tmp472 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp473 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp469, $tmp471, $tmp472);
frost$core$Int64 $tmp474 = $tmp473.min;
*(&local1) = $tmp474;
frost$core$Int64 $tmp475 = $tmp473.max;
frost$core$Bit $tmp476 = $tmp473.inclusive;
bool $tmp477 = $tmp476.value;
frost$core$Int64 $tmp478 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp479 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp478);
if ($tmp477) goto block14; else goto block15;
block14:;
int64_t $tmp480 = $tmp474.value;
int64_t $tmp481 = $tmp475.value;
bool $tmp482 = $tmp480 <= $tmp481;
frost$core$Bit $tmp483 = (frost$core$Bit) {$tmp482};
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block11; else goto block12;
block15:;
int64_t $tmp485 = $tmp474.value;
int64_t $tmp486 = $tmp475.value;
bool $tmp487 = $tmp485 < $tmp486;
frost$core$Bit $tmp488 = (frost$core$Bit) {$tmp487};
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block11; else goto block12;
block11:;
// line 279
frost$collections$HashMap$Entry*** $tmp490 = &param0->contents;
frost$collections$HashMap$Entry** $tmp491 = *$tmp490;
frost$core$Int64 $tmp492 = *(&local1);
int64_t $tmp493 = $tmp492.value;
frost$collections$HashMap$Entry* $tmp494 = $tmp491[$tmp493];
frost$core$Bit $tmp495 = frost$core$Bit$init$builtin_bit($tmp494 != NULL);
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block16; else goto block17;
block16:;
// line 280
frost$collections$HashMap$Entry*** $tmp497 = &param0->contents;
frost$collections$HashMap$Entry** $tmp498 = *$tmp497;
frost$core$Int64 $tmp499 = *(&local1);
int64_t $tmp500 = $tmp499.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp501 = $tmp498[$tmp500];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
$tmp498[$tmp500] = ((frost$collections$HashMap$Entry*) NULL);
goto block17;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp502 = *(&local1);
int64_t $tmp503 = $tmp475.value;
int64_t $tmp504 = $tmp502.value;
int64_t $tmp505 = $tmp503 - $tmp504;
frost$core$Int64 $tmp506 = (frost$core$Int64) {$tmp505};
frost$core$UInt64 $tmp507 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp506);
if ($tmp477) goto block19; else goto block20;
block19:;
uint64_t $tmp508 = $tmp507.value;
uint64_t $tmp509 = $tmp479.value;
bool $tmp510 = $tmp508 >= $tmp509;
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block18; else goto block12;
block20:;
uint64_t $tmp513 = $tmp507.value;
uint64_t $tmp514 = $tmp479.value;
bool $tmp515 = $tmp513 > $tmp514;
frost$core$Bit $tmp516 = (frost$core$Bit) {$tmp515};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block18; else goto block12;
block18:;
int64_t $tmp518 = $tmp502.value;
int64_t $tmp519 = $tmp478.value;
int64_t $tmp520 = $tmp518 + $tmp519;
frost$core$Int64 $tmp521 = (frost$core$Int64) {$tmp520};
*(&local1) = $tmp521;
goto block11;
block12:;
// line 283
frost$core$Int64* $tmp522 = &param0->bucketCount;
frost$core$Int64 $tmp523 = *$tmp522;
frost$core$Int64 $tmp524 = (frost$core$Int64) {3};
int64_t $tmp525 = $tmp523.value;
int64_t $tmp526 = $tmp524.value;
int64_t $tmp527 = $tmp525 * $tmp526;
frost$core$Int64 $tmp528 = (frost$core$Int64) {$tmp527};
frost$core$Int64 $tmp529 = (frost$core$Int64) {4};
int64_t $tmp530 = $tmp528.value;
int64_t $tmp531 = $tmp529.value;
int64_t $tmp532 = $tmp530 / $tmp531;
frost$core$Int64 $tmp533 = (frost$core$Int64) {$tmp532};
frost$core$Int64* $tmp534 = &param0->threshold;
*$tmp534 = $tmp533;
return;

}
void frost$collections$HashMap$incrementCount(frost$collections$HashMap* param0) {

frost$collections$HashMap$Entry** local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$collections$HashMap$Entry* local4 = NULL;
frost$core$Int64 local5;
// line 288
frost$core$Int64* $tmp535 = &param0->_count;
frost$core$Int64 $tmp536 = *$tmp535;
frost$core$Int64 $tmp537 = (frost$core$Int64) {1};
int64_t $tmp538 = $tmp536.value;
int64_t $tmp539 = $tmp537.value;
int64_t $tmp540 = $tmp538 + $tmp539;
frost$core$Int64 $tmp541 = (frost$core$Int64) {$tmp540};
frost$core$Int64* $tmp542 = &param0->_count;
*$tmp542 = $tmp541;
// line 289
frost$core$Int64* $tmp543 = &param0->_count;
frost$core$Int64 $tmp544 = *$tmp543;
frost$core$Int64* $tmp545 = &param0->threshold;
frost$core$Int64 $tmp546 = *$tmp545;
int64_t $tmp547 = $tmp544.value;
int64_t $tmp548 = $tmp546.value;
bool $tmp549 = $tmp547 >= $tmp548;
frost$core$Bit $tmp550 = (frost$core$Bit) {$tmp549};
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block1; else goto block2;
block1:;
// line 290
frost$collections$HashMap$Entry*** $tmp552 = &param0->contents;
frost$collections$HashMap$Entry** $tmp553 = *$tmp552;
*(&local0) = $tmp553;
// line 291
frost$core$Int64* $tmp554 = &param0->bucketCount;
frost$core$Int64 $tmp555 = *$tmp554;
*(&local1) = $tmp555;
// line 292
frost$core$Int64* $tmp556 = &param0->bucketCount;
frost$core$Int64 $tmp557 = *$tmp556;
frost$core$Int64 $tmp558 = (frost$core$Int64) {2};
int64_t $tmp559 = $tmp557.value;
int64_t $tmp560 = $tmp558.value;
int64_t $tmp561 = $tmp559 * $tmp560;
frost$core$Int64 $tmp562 = (frost$core$Int64) {$tmp561};
frost$core$Int64* $tmp563 = &param0->bucketCount;
*$tmp563 = $tmp562;
// line 293
frost$core$Int64* $tmp564 = &param0->bucketCount;
frost$core$Int64 $tmp565 = *$tmp564;
int64_t $tmp566 = $tmp565.value;
frost$collections$HashMap$Entry** $tmp567 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp566 * 8));
frost$collections$HashMap$Entry*** $tmp568 = &param0->contents;
*$tmp568 = $tmp567;
// line 294
frost$core$Int64 $tmp569 = (frost$core$Int64) {0};
frost$core$Int64* $tmp570 = &param0->bucketCount;
frost$core$Int64 $tmp571 = *$tmp570;
frost$core$Bit $tmp572 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp573 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp569, $tmp571, $tmp572);
frost$core$Int64 $tmp574 = $tmp573.min;
*(&local2) = $tmp574;
frost$core$Int64 $tmp575 = $tmp573.max;
frost$core$Bit $tmp576 = $tmp573.inclusive;
bool $tmp577 = $tmp576.value;
frost$core$Int64 $tmp578 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp579 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp578);
if ($tmp577) goto block6; else goto block7;
block6:;
int64_t $tmp580 = $tmp574.value;
int64_t $tmp581 = $tmp575.value;
bool $tmp582 = $tmp580 <= $tmp581;
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block3; else goto block4;
block7:;
int64_t $tmp585 = $tmp574.value;
int64_t $tmp586 = $tmp575.value;
bool $tmp587 = $tmp585 < $tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block3; else goto block4;
block3:;
// line 295
frost$collections$HashMap$Entry*** $tmp590 = &param0->contents;
frost$collections$HashMap$Entry** $tmp591 = *$tmp590;
frost$core$Int64 $tmp592 = *(&local2);
int64_t $tmp593 = $tmp592.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp594 = $tmp591[$tmp593];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
$tmp591[$tmp593] = ((frost$collections$HashMap$Entry*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp595 = *(&local2);
int64_t $tmp596 = $tmp575.value;
int64_t $tmp597 = $tmp595.value;
int64_t $tmp598 = $tmp596 - $tmp597;
frost$core$Int64 $tmp599 = (frost$core$Int64) {$tmp598};
frost$core$UInt64 $tmp600 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp599);
if ($tmp577) goto block9; else goto block10;
block9:;
uint64_t $tmp601 = $tmp600.value;
uint64_t $tmp602 = $tmp579.value;
bool $tmp603 = $tmp601 >= $tmp602;
frost$core$Bit $tmp604 = (frost$core$Bit) {$tmp603};
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block8; else goto block4;
block10:;
uint64_t $tmp606 = $tmp600.value;
uint64_t $tmp607 = $tmp579.value;
bool $tmp608 = $tmp606 > $tmp607;
frost$core$Bit $tmp609 = (frost$core$Bit) {$tmp608};
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block8; else goto block4;
block8:;
int64_t $tmp611 = $tmp595.value;
int64_t $tmp612 = $tmp578.value;
int64_t $tmp613 = $tmp611 + $tmp612;
frost$core$Int64 $tmp614 = (frost$core$Int64) {$tmp613};
*(&local2) = $tmp614;
goto block3;
block4:;
// line 297
frost$core$Int64* $tmp615 = &param0->threshold;
frost$core$Int64 $tmp616 = *$tmp615;
frost$core$Int64 $tmp617 = (frost$core$Int64) {2};
int64_t $tmp618 = $tmp616.value;
int64_t $tmp619 = $tmp617.value;
int64_t $tmp620 = $tmp618 * $tmp619;
frost$core$Int64 $tmp621 = (frost$core$Int64) {$tmp620};
frost$core$Int64* $tmp622 = &param0->threshold;
*$tmp622 = $tmp621;
// line 298
frost$core$Int64 $tmp623 = (frost$core$Int64) {0};
frost$core$Int64* $tmp624 = &param0->_count;
*$tmp624 = $tmp623;
// line 299
frost$core$Int64 $tmp625 = (frost$core$Int64) {0};
frost$core$Int64 $tmp626 = *(&local1);
frost$core$Bit $tmp627 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp628 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp625, $tmp626, $tmp627);
frost$core$Int64 $tmp629 = $tmp628.min;
*(&local3) = $tmp629;
frost$core$Int64 $tmp630 = $tmp628.max;
frost$core$Bit $tmp631 = $tmp628.inclusive;
bool $tmp632 = $tmp631.value;
frost$core$Int64 $tmp633 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp634 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp633);
if ($tmp632) goto block14; else goto block15;
block14:;
int64_t $tmp635 = $tmp629.value;
int64_t $tmp636 = $tmp630.value;
bool $tmp637 = $tmp635 <= $tmp636;
frost$core$Bit $tmp638 = (frost$core$Bit) {$tmp637};
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block11; else goto block12;
block15:;
int64_t $tmp640 = $tmp629.value;
int64_t $tmp641 = $tmp630.value;
bool $tmp642 = $tmp640 < $tmp641;
frost$core$Bit $tmp643 = (frost$core$Bit) {$tmp642};
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block11; else goto block12;
block11:;
// line 300
frost$collections$HashMap$Entry** $tmp645 = *(&local0);
frost$core$Int64 $tmp646 = *(&local3);
int64_t $tmp647 = $tmp646.value;
frost$collections$HashMap$Entry* $tmp648 = $tmp645[$tmp647];
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$collections$HashMap$Entry* $tmp649 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local4) = $tmp648;
// line 301
goto block16;
block16:;
frost$collections$HashMap$Entry* $tmp650 = *(&local4);
frost$core$Bit $tmp651 = frost$core$Bit$init$builtin_bit($tmp650 != NULL);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block17; else goto block18;
block17:;
// line 302
frost$collections$HashMap$Entry* $tmp653 = *(&local4);
frost$collections$Key** $tmp654 = &$tmp653->key;
frost$collections$Key* $tmp655 = *$tmp654;
frost$collections$HashMap$Entry* $tmp656 = *(&local4);
frost$core$Object** $tmp657 = &$tmp656->value;
frost$core$Object* $tmp658 = *$tmp657;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, $tmp655, $tmp658);
// line 303
frost$collections$HashMap$Entry* $tmp659 = *(&local4);
frost$collections$HashMap$Entry** $tmp660 = &$tmp659->next;
frost$collections$HashMap$Entry* $tmp661 = *$tmp660;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$collections$HashMap$Entry* $tmp662 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
*(&local4) = $tmp661;
goto block16;
block18:;
frost$collections$HashMap$Entry* $tmp663 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
goto block13;
block13:;
frost$core$Int64 $tmp664 = *(&local3);
int64_t $tmp665 = $tmp630.value;
int64_t $tmp666 = $tmp664.value;
int64_t $tmp667 = $tmp665 - $tmp666;
frost$core$Int64 $tmp668 = (frost$core$Int64) {$tmp667};
frost$core$UInt64 $tmp669 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp668);
if ($tmp632) goto block20; else goto block21;
block20:;
uint64_t $tmp670 = $tmp669.value;
uint64_t $tmp671 = $tmp634.value;
bool $tmp672 = $tmp670 >= $tmp671;
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block19; else goto block12;
block21:;
uint64_t $tmp675 = $tmp669.value;
uint64_t $tmp676 = $tmp634.value;
bool $tmp677 = $tmp675 > $tmp676;
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677};
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block19; else goto block12;
block19:;
int64_t $tmp680 = $tmp664.value;
int64_t $tmp681 = $tmp633.value;
int64_t $tmp682 = $tmp680 + $tmp681;
frost$core$Int64 $tmp683 = (frost$core$Int64) {$tmp682};
*(&local3) = $tmp683;
goto block11;
block12:;
// line 306
frost$core$Int64 $tmp684 = (frost$core$Int64) {0};
frost$core$Int64 $tmp685 = *(&local1);
frost$core$Bit $tmp686 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp687 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp684, $tmp685, $tmp686);
frost$core$Int64 $tmp688 = $tmp687.min;
*(&local5) = $tmp688;
frost$core$Int64 $tmp689 = $tmp687.max;
frost$core$Bit $tmp690 = $tmp687.inclusive;
bool $tmp691 = $tmp690.value;
frost$core$Int64 $tmp692 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp693 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp692);
if ($tmp691) goto block25; else goto block26;
block25:;
int64_t $tmp694 = $tmp688.value;
int64_t $tmp695 = $tmp689.value;
bool $tmp696 = $tmp694 <= $tmp695;
frost$core$Bit $tmp697 = (frost$core$Bit) {$tmp696};
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block22; else goto block23;
block26:;
int64_t $tmp699 = $tmp688.value;
int64_t $tmp700 = $tmp689.value;
bool $tmp701 = $tmp699 < $tmp700;
frost$core$Bit $tmp702 = (frost$core$Bit) {$tmp701};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block22; else goto block23;
block22:;
// line 307
frost$collections$HashMap$Entry** $tmp704 = *(&local0);
frost$core$Int64 $tmp705 = *(&local5);
int64_t $tmp706 = $tmp705.value;
frost$collections$HashMap$Entry* $tmp707 = $tmp704[$tmp706];
frost$core$Bit $tmp708 = frost$core$Bit$init$builtin_bit($tmp707 != NULL);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block27; else goto block28;
block27:;
// line 308
frost$collections$HashMap$Entry** $tmp710 = *(&local0);
frost$core$Int64 $tmp711 = *(&local5);
int64_t $tmp712 = $tmp711.value;
frost$collections$HashMap$Entry* $tmp713 = $tmp710[$tmp712];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
goto block28;
block28:;
goto block24;
block24:;
frost$core$Int64 $tmp714 = *(&local5);
int64_t $tmp715 = $tmp689.value;
int64_t $tmp716 = $tmp714.value;
int64_t $tmp717 = $tmp715 - $tmp716;
frost$core$Int64 $tmp718 = (frost$core$Int64) {$tmp717};
frost$core$UInt64 $tmp719 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp718);
if ($tmp691) goto block30; else goto block31;
block30:;
uint64_t $tmp720 = $tmp719.value;
uint64_t $tmp721 = $tmp693.value;
bool $tmp722 = $tmp720 >= $tmp721;
frost$core$Bit $tmp723 = (frost$core$Bit) {$tmp722};
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block29; else goto block23;
block31:;
uint64_t $tmp725 = $tmp719.value;
uint64_t $tmp726 = $tmp693.value;
bool $tmp727 = $tmp725 > $tmp726;
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block29; else goto block23;
block29:;
int64_t $tmp730 = $tmp714.value;
int64_t $tmp731 = $tmp692.value;
int64_t $tmp732 = $tmp730 + $tmp731;
frost$core$Int64 $tmp733 = (frost$core$Int64) {$tmp732};
*(&local5) = $tmp733;
goto block22;
block23:;
// line 311
frost$collections$HashMap$Entry** $tmp734 = *(&local0);
frostFree($tmp734);
goto block2;
block2:;
return;

}
frost$collections$Iterator* frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT(frost$collections$HashMap* param0) {

// line 317
frost$collections$HashMap$KeyIterator* $tmp735 = (frost$collections$HashMap$KeyIterator*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashMap$KeyIterator$class);
frost$collections$HashMap$KeyIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$KeyIterator$K$Cfrost$collections$HashMap$KeyIterator$V$GT($tmp735, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp735)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
return ((frost$collections$Iterator*) $tmp735);

}
frost$collections$Iterator* frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT(frost$collections$HashMap* param0) {

// line 322
frost$collections$HashMap$ValueIterator* $tmp736 = (frost$collections$HashMap$ValueIterator*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashMap$ValueIterator$class);
frost$collections$HashMap$ValueIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$ValueIterator$K$Cfrost$collections$HashMap$ValueIterator$V$GT($tmp736, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp736)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
return ((frost$collections$Iterator*) $tmp736);

}
frost$core$Int64 frost$collections$HashMap$get_count$R$frost$core$Int64(frost$collections$HashMap* param0) {

// line 327
frost$core$Int64* $tmp737 = &param0->_count;
frost$core$Int64 $tmp738 = *$tmp737;
return $tmp738;

}
frost$core$String* frost$collections$HashMap$get_asString$R$frost$core$String(frost$collections$HashMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$collections$HashMap$Entry* local3 = NULL;
// line 338
frost$core$MutableString* $tmp739 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp739);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
frost$core$MutableString* $tmp740 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local0) = $tmp739;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
// line 339
frost$core$MutableString* $tmp741 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp741, &$s742);
// line 340
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s743));
frost$core$String* $tmp744 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local1) = &$s745;
// line 341
frost$core$Int64 $tmp746 = (frost$core$Int64) {0};
frost$core$Int64* $tmp747 = &param0->bucketCount;
frost$core$Int64 $tmp748 = *$tmp747;
frost$core$Bit $tmp749 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp750 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp746, $tmp748, $tmp749);
frost$core$Int64 $tmp751 = $tmp750.min;
*(&local2) = $tmp751;
frost$core$Int64 $tmp752 = $tmp750.max;
frost$core$Bit $tmp753 = $tmp750.inclusive;
bool $tmp754 = $tmp753.value;
frost$core$Int64 $tmp755 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp756 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp755);
if ($tmp754) goto block4; else goto block5;
block4:;
int64_t $tmp757 = $tmp751.value;
int64_t $tmp758 = $tmp752.value;
bool $tmp759 = $tmp757 <= $tmp758;
frost$core$Bit $tmp760 = (frost$core$Bit) {$tmp759};
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block1; else goto block2;
block5:;
int64_t $tmp762 = $tmp751.value;
int64_t $tmp763 = $tmp752.value;
bool $tmp764 = $tmp762 < $tmp763;
frost$core$Bit $tmp765 = (frost$core$Bit) {$tmp764};
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block1; else goto block2;
block1:;
// line 342
frost$collections$HashMap$Entry*** $tmp767 = &param0->contents;
frost$collections$HashMap$Entry** $tmp768 = *$tmp767;
frost$core$Int64 $tmp769 = *(&local2);
int64_t $tmp770 = $tmp769.value;
frost$collections$HashMap$Entry* $tmp771 = $tmp768[$tmp770];
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
frost$collections$HashMap$Entry* $tmp772 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local3) = $tmp771;
// line 343
goto block6;
block6:;
frost$collections$HashMap$Entry* $tmp773 = *(&local3);
frost$core$Bit $tmp774 = frost$core$Bit$init$builtin_bit($tmp773 != NULL);
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block7; else goto block8;
block7:;
// line 344
frost$core$MutableString* $tmp776 = *(&local0);
frost$core$String* $tmp777 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp776, $tmp777);
// line 345
frost$collections$HashMap$Entry* $tmp778 = *(&local3);
frost$collections$Key** $tmp779 = &$tmp778->key;
frost$collections$Key* $tmp780 = *$tmp779;
frost$core$Bit $tmp781 = frost$core$Bit$init$builtin_bit(true);
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block9; else goto block11;
block9:;
// line 346
frost$core$MutableString* $tmp783 = *(&local0);
frost$collections$HashMap$Entry* $tmp784 = *(&local3);
frost$collections$Key** $tmp785 = &$tmp784->key;
frost$collections$Key* $tmp786 = *$tmp785;
frost$core$MutableString$append$frost$core$Object($tmp783, ((frost$core$Object*) $tmp786));
goto block10;
block11:;
// line 1
// line 349
frost$core$MutableString* $tmp787 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp787, &$s788);
goto block10;
block10:;
// line 351
frost$core$MutableString* $tmp789 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp789, &$s790);
// line 352
frost$collections$HashMap$Entry* $tmp791 = *(&local3);
frost$core$Object** $tmp792 = &$tmp791->value;
frost$core$Object* $tmp793 = *$tmp792;
frost$core$Bit $tmp794 = frost$core$Bit$init$builtin_bit(true);
bool $tmp795 = $tmp794.value;
if ($tmp795) goto block12; else goto block14;
block12:;
// line 353
frost$core$MutableString* $tmp796 = *(&local0);
frost$collections$HashMap$Entry* $tmp797 = *(&local3);
frost$core$Object** $tmp798 = &$tmp797->value;
frost$core$Object* $tmp799 = *$tmp798;
frost$core$MutableString$append$frost$core$Object($tmp796, $tmp799);
goto block13;
block14:;
// line 1
// line 356
frost$core$MutableString* $tmp800 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp800, &$s801);
goto block13;
block13:;
// line 358
frost$collections$HashMap$Entry* $tmp802 = *(&local3);
frost$collections$HashMap$Entry** $tmp803 = &$tmp802->next;
frost$collections$HashMap$Entry* $tmp804 = *$tmp803;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$collections$HashMap$Entry* $tmp805 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
*(&local3) = $tmp804;
// line 359
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s806));
frost$core$String* $tmp807 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
*(&local1) = &$s808;
goto block6;
block8:;
frost$collections$HashMap$Entry* $tmp809 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp810 = *(&local2);
int64_t $tmp811 = $tmp752.value;
int64_t $tmp812 = $tmp810.value;
int64_t $tmp813 = $tmp811 - $tmp812;
frost$core$Int64 $tmp814 = (frost$core$Int64) {$tmp813};
frost$core$UInt64 $tmp815 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp814);
if ($tmp754) goto block16; else goto block17;
block16:;
uint64_t $tmp816 = $tmp815.value;
uint64_t $tmp817 = $tmp756.value;
bool $tmp818 = $tmp816 >= $tmp817;
frost$core$Bit $tmp819 = (frost$core$Bit) {$tmp818};
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block15; else goto block2;
block17:;
uint64_t $tmp821 = $tmp815.value;
uint64_t $tmp822 = $tmp756.value;
bool $tmp823 = $tmp821 > $tmp822;
frost$core$Bit $tmp824 = (frost$core$Bit) {$tmp823};
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block15; else goto block2;
block15:;
int64_t $tmp826 = $tmp810.value;
int64_t $tmp827 = $tmp755.value;
int64_t $tmp828 = $tmp826 + $tmp827;
frost$core$Int64 $tmp829 = (frost$core$Int64) {$tmp828};
*(&local2) = $tmp829;
goto block1;
block2:;
// line 362
frost$core$MutableString* $tmp830 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp830, &$s831);
// line 363
frost$core$MutableString* $tmp832 = *(&local0);
frost$core$String* $tmp833 = frost$core$MutableString$finish$R$frost$core$String($tmp832);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$String* $tmp834 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp835 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp833;

}

