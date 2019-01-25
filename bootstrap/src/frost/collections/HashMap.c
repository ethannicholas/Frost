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
typedef frost$core$Bit (*$fn235)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn268)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn327)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn361)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -6526495327472465984, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s803 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s828 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

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
if ($tmp199) goto block4; else goto block3;
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
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block2; else goto block3;
block2:;
// line 193
frost$collections$HashMap$Entry* $tmp208 = *(&local1);
frost$collections$HashMap$Entry** $tmp209 = &$tmp208->next;
frost$collections$HashMap$Entry* $tmp210 = *$tmp209;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$collections$HashMap$Entry* $tmp211 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local1) = $tmp210;
goto block1;
block3:;
// line 195
frost$collections$HashMap$Entry* $tmp212 = *(&local1);
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit($tmp212 != NULL);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block5; else goto block7;
block5:;
// line 196
frost$collections$HashMap$Entry* $tmp215 = *(&local1);
frost$core$Object** $tmp216 = &$tmp215->value;
frost$core$Object* $tmp217 = *$tmp216;
frost$core$Frost$ref$frost$core$Object$Q($tmp217);
frost$collections$HashMap$Entry* $tmp218 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp217;
block7:;
// line 1
// line 199
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$HashMap$Entry* $tmp219 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block6:;
goto block8;
block8:;

}
frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
// line 205
frost$core$Int64 $tmp220 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp220;
// line 206
frost$collections$HashMap$Entry*** $tmp221 = &param0->contents;
frost$collections$HashMap$Entry** $tmp222 = *$tmp221;
frost$core$Int64 $tmp223 = *(&local0);
int64_t $tmp224 = $tmp223.value;
frost$collections$HashMap$Entry* $tmp225 = $tmp222[$tmp224];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$collections$HashMap$Entry* $tmp226 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local1) = $tmp225;
// line 207
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp227 = *(&local1);
frost$core$Bit $tmp228 = frost$core$Bit$init$builtin_bit($tmp227 != NULL);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp230 = *(&local1);
frost$collections$Key** $tmp231 = &$tmp230->key;
frost$collections$Key* $tmp232 = *$tmp231;
ITable* $tmp233 = ((frost$core$Equatable*) $tmp232)->$class->itable;
while ($tmp233->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp233 = $tmp233->next;
}
$fn235 $tmp234 = $tmp233->methods[1];
frost$core$Bit $tmp236 = $tmp234(((frost$core$Equatable*) $tmp232), ((frost$core$Equatable*) param1));
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block2; else goto block3;
block2:;
// line 208
frost$collections$HashMap$Entry* $tmp238 = *(&local1);
frost$collections$HashMap$Entry** $tmp239 = &$tmp238->next;
frost$collections$HashMap$Entry* $tmp240 = *$tmp239;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$collections$HashMap$Entry* $tmp241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local1) = $tmp240;
goto block1;
block3:;
// line 210
frost$collections$HashMap$Entry* $tmp242 = *(&local1);
frost$core$Bit $tmp243 = frost$core$Bit$init$builtin_bit($tmp242 != NULL);
frost$collections$HashMap$Entry* $tmp244 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp243;

}
void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(frost$collections$HashMap* param0, frost$collections$Key* param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$collections$HashMap$Entry* local2 = NULL;
// line 215
frost$core$Int64* $tmp245 = &param0->changeCount;
frost$core$Int64 $tmp246 = *$tmp245;
frost$core$Int64 $tmp247 = (frost$core$Int64) {1};
int64_t $tmp248 = $tmp246.value;
int64_t $tmp249 = $tmp247.value;
int64_t $tmp250 = $tmp248 + $tmp249;
frost$core$Int64 $tmp251 = (frost$core$Int64) {$tmp250};
frost$core$Int64* $tmp252 = &param0->changeCount;
*$tmp252 = $tmp251;
// line 216
frost$core$Int64 $tmp253 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp253;
// line 217
frost$collections$HashMap$Entry*** $tmp254 = &param0->contents;
frost$collections$HashMap$Entry** $tmp255 = *$tmp254;
frost$core$Int64 $tmp256 = *(&local0);
int64_t $tmp257 = $tmp256.value;
frost$collections$HashMap$Entry* $tmp258 = $tmp255[$tmp257];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$collections$HashMap$Entry* $tmp259 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local1) = $tmp258;
// line 218
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp260 = *(&local1);
frost$core$Bit $tmp261 = frost$core$Bit$init$builtin_bit($tmp260 != NULL);
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block4; else goto block3;
block4:;
frost$collections$HashMap$Entry* $tmp263 = *(&local1);
frost$collections$Key** $tmp264 = &$tmp263->key;
frost$collections$Key* $tmp265 = *$tmp264;
ITable* $tmp266 = ((frost$core$Equatable*) $tmp265)->$class->itable;
while ($tmp266->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp266 = $tmp266->next;
}
$fn268 $tmp267 = $tmp266->methods[1];
frost$core$Bit $tmp269 = $tmp267(((frost$core$Equatable*) $tmp265), ((frost$core$Equatable*) param1));
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block2; else goto block3;
block2:;
// line 219
frost$collections$HashMap$Entry* $tmp271 = *(&local1);
frost$collections$HashMap$Entry** $tmp272 = &$tmp271->next;
frost$collections$HashMap$Entry* $tmp273 = *$tmp272;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$collections$HashMap$Entry* $tmp274 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local1) = $tmp273;
goto block1;
block3:;
// line 221
frost$collections$HashMap$Entry* $tmp275 = *(&local1);
frost$core$Bit $tmp276 = frost$core$Bit$init$builtin_bit($tmp275 == NULL);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block5; else goto block7;
block5:;
// line 222
frost$collections$HashMap$Entry*** $tmp278 = &param0->contents;
frost$collections$HashMap$Entry** $tmp279 = *$tmp278;
frost$core$Int64 $tmp280 = *(&local0);
int64_t $tmp281 = $tmp280.value;
frost$collections$HashMap$Entry* $tmp282 = $tmp279[$tmp281];
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
frost$collections$HashMap$Entry* $tmp283 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
*(&local2) = $tmp282;
// line 223
frost$collections$HashMap$Entry* $tmp284 = (frost$collections$HashMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$HashMap$Entry$class);
frost$collections$HashMap$Entry$init$frost$collections$HashMap$Entry$K$frost$collections$HashMap$Entry$V($tmp284, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$collections$HashMap$Entry* $tmp285 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local1) = $tmp284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// line 224
frost$collections$HashMap$Entry* $tmp286 = *(&local1);
frost$collections$HashMap$Entry* $tmp287 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$collections$HashMap$Entry** $tmp288 = &$tmp286->next;
frost$collections$HashMap$Entry* $tmp289 = *$tmp288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$collections$HashMap$Entry** $tmp290 = &$tmp286->next;
*$tmp290 = $tmp287;
// line 225
frost$collections$HashMap$Entry*** $tmp291 = &param0->contents;
frost$collections$HashMap$Entry** $tmp292 = *$tmp291;
frost$core$Int64 $tmp293 = *(&local0);
frost$collections$HashMap$Entry* $tmp294 = *(&local1);
int64_t $tmp295 = $tmp293.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$collections$HashMap$Entry* $tmp296 = $tmp292[$tmp295];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
$tmp292[$tmp295] = $tmp294;
// line 226
frost$collections$HashMap$incrementCount(param0);
frost$collections$HashMap$Entry* $tmp297 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block6;
block7:;
// line 1
// line 229
frost$collections$HashMap$Entry* $tmp298 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp299 = &$tmp298->value;
frost$core$Object* $tmp300 = *$tmp299;
frost$core$Frost$unref$frost$core$Object$Q($tmp300);
frost$core$Object** $tmp301 = &$tmp298->value;
*$tmp301 = param2;
goto block6;
block6:;
frost$collections$HashMap$Entry* $tmp302 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$remove$frost$collections$HashMap$K(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$collections$HashMap$Entry* local2 = NULL;
frost$collections$HashMap$Entry* local3 = NULL;
// line 235
frost$core$Int64* $tmp303 = &param0->changeCount;
frost$core$Int64 $tmp304 = *$tmp303;
frost$core$Int64 $tmp305 = (frost$core$Int64) {1};
int64_t $tmp306 = $tmp304.value;
int64_t $tmp307 = $tmp305.value;
int64_t $tmp308 = $tmp306 + $tmp307;
frost$core$Int64 $tmp309 = (frost$core$Int64) {$tmp308};
frost$core$Int64* $tmp310 = &param0->changeCount;
*$tmp310 = $tmp309;
// line 236
frost$core$Int64 $tmp311 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp311;
// line 237
frost$collections$HashMap$Entry*** $tmp312 = &param0->contents;
frost$collections$HashMap$Entry** $tmp313 = *$tmp312;
frost$core$Int64 $tmp314 = *(&local0);
int64_t $tmp315 = $tmp314.value;
frost$collections$HashMap$Entry* $tmp316 = $tmp313[$tmp315];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
frost$collections$HashMap$Entry* $tmp317 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local1) = $tmp316;
// line 239
frost$collections$HashMap$Entry* $tmp318 = *(&local1);
frost$core$Bit $tmp319 = frost$core$Bit$init$builtin_bit($tmp318 == NULL);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block1; else goto block2;
block1:;
// line 240
frost$collections$HashMap$Entry* $tmp321 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block2:;
// line 243
frost$collections$HashMap$Entry* $tmp322 = *(&local1);
frost$collections$Key** $tmp323 = &$tmp322->key;
frost$collections$Key* $tmp324 = *$tmp323;
ITable* $tmp325 = ((frost$core$Equatable*) $tmp324)->$class->itable;
while ($tmp325->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp325 = $tmp325->next;
}
$fn327 $tmp326 = $tmp325->methods[0];
frost$core$Bit $tmp328 = $tmp326(((frost$core$Equatable*) $tmp324), ((frost$core$Equatable*) param1));
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block3; else goto block4;
block3:;
// line 244
frost$collections$HashMap$Entry*** $tmp330 = &param0->contents;
frost$collections$HashMap$Entry** $tmp331 = *$tmp330;
frost$core$Int64 $tmp332 = *(&local0);
frost$collections$HashMap$Entry* $tmp333 = *(&local1);
frost$collections$HashMap$Entry** $tmp334 = &$tmp333->next;
frost$collections$HashMap$Entry* $tmp335 = *$tmp334;
int64_t $tmp336 = $tmp332.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$collections$HashMap$Entry* $tmp337 = $tmp331[$tmp336];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
$tmp331[$tmp336] = $tmp335;
// line 245
frost$core$Int64* $tmp338 = &param0->_count;
frost$core$Int64 $tmp339 = *$tmp338;
frost$core$Int64 $tmp340 = (frost$core$Int64) {1};
int64_t $tmp341 = $tmp339.value;
int64_t $tmp342 = $tmp340.value;
int64_t $tmp343 = $tmp341 - $tmp342;
frost$core$Int64 $tmp344 = (frost$core$Int64) {$tmp343};
frost$core$Int64* $tmp345 = &param0->_count;
*$tmp345 = $tmp344;
// line 246
frost$collections$HashMap$Entry* $tmp346 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block4:;
// line 248
goto block5;
block5:;
// line 249
frost$collections$HashMap$Entry* $tmp347 = *(&local1);
frost$collections$HashMap$Entry** $tmp348 = &$tmp347->next;
frost$collections$HashMap$Entry* $tmp349 = *$tmp348;
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
frost$collections$HashMap$Entry* $tmp350 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local2) = $tmp349;
// line 250
frost$collections$HashMap$Entry* $tmp351 = *(&local2);
frost$core$Bit $tmp352 = frost$core$Bit$init$builtin_bit($tmp351 == NULL);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block7; else goto block8;
block7:;
// line 252
frost$collections$HashMap$Entry* $tmp354 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp355 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block8:;
// line 254
frost$collections$HashMap$Entry* $tmp356 = *(&local2);
frost$collections$Key** $tmp357 = &$tmp356->key;
frost$collections$Key* $tmp358 = *$tmp357;
ITable* $tmp359 = ((frost$core$Equatable*) $tmp358)->$class->itable;
while ($tmp359->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp359 = $tmp359->next;
}
$fn361 $tmp360 = $tmp359->methods[0];
frost$core$Bit $tmp362 = $tmp360(((frost$core$Equatable*) $tmp358), ((frost$core$Equatable*) param1));
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block9; else goto block10;
block9:;
// line 256
frost$collections$HashMap$Entry* $tmp364 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block6;
block10:;
// line 258
frost$collections$HashMap$Entry* $tmp365 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$collections$HashMap$Entry* $tmp366 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local1) = $tmp365;
frost$collections$HashMap$Entry* $tmp367 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block5;
block6:;
// line 261
frost$collections$HashMap$Entry* $tmp368 = *(&local1);
frost$collections$HashMap$Entry** $tmp369 = &$tmp368->next;
frost$collections$HashMap$Entry* $tmp370 = *$tmp369;
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$collections$HashMap$Entry* $tmp371 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
*(&local3) = $tmp370;
// line 262
frost$collections$HashMap$Entry* $tmp372 = *(&local3);
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit($tmp372 != NULL);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp375 = (frost$core$Int64) {262};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s376, $tmp375);
abort(); // unreachable
block11:;
// line 263
frost$collections$HashMap$Entry* $tmp377 = *(&local1);
frost$collections$HashMap$Entry* $tmp378 = *(&local3);
frost$collections$HashMap$Entry** $tmp379 = &$tmp378->next;
frost$collections$HashMap$Entry* $tmp380 = *$tmp379;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$collections$HashMap$Entry** $tmp381 = &$tmp377->next;
frost$collections$HashMap$Entry* $tmp382 = *$tmp381;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$collections$HashMap$Entry** $tmp383 = &$tmp377->next;
*$tmp383 = $tmp380;
// line 264
frost$core$Int64* $tmp384 = &param0->_count;
frost$core$Int64 $tmp385 = *$tmp384;
frost$core$Int64 $tmp386 = (frost$core$Int64) {1};
int64_t $tmp387 = $tmp385.value;
int64_t $tmp388 = $tmp386.value;
int64_t $tmp389 = $tmp387 - $tmp388;
frost$core$Int64 $tmp390 = (frost$core$Int64) {$tmp389};
frost$core$Int64* $tmp391 = &param0->_count;
*$tmp391 = $tmp390;
frost$collections$HashMap$Entry* $tmp392 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp393 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$clear(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 268
frost$core$Int64* $tmp394 = &param0->changeCount;
frost$core$Int64 $tmp395 = *$tmp394;
frost$core$Int64 $tmp396 = (frost$core$Int64) {1};
int64_t $tmp397 = $tmp395.value;
int64_t $tmp398 = $tmp396.value;
int64_t $tmp399 = $tmp397 + $tmp398;
frost$core$Int64 $tmp400 = (frost$core$Int64) {$tmp399};
frost$core$Int64* $tmp401 = &param0->changeCount;
*$tmp401 = $tmp400;
// line 269
frost$core$Int64 $tmp402 = (frost$core$Int64) {0};
frost$core$Int64* $tmp403 = &param0->_count;
*$tmp403 = $tmp402;
// line 270
frost$core$Int64 $tmp404 = (frost$core$Int64) {0};
frost$core$Int64* $tmp405 = &param0->bucketCount;
frost$core$Int64 $tmp406 = *$tmp405;
frost$core$Bit $tmp407 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp408 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp404, $tmp406, $tmp407);
frost$core$Int64 $tmp409 = $tmp408.min;
*(&local0) = $tmp409;
frost$core$Int64 $tmp410 = $tmp408.max;
frost$core$Bit $tmp411 = $tmp408.inclusive;
bool $tmp412 = $tmp411.value;
frost$core$Int64 $tmp413 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp414 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp413);
if ($tmp412) goto block4; else goto block5;
block4:;
int64_t $tmp415 = $tmp409.value;
int64_t $tmp416 = $tmp410.value;
bool $tmp417 = $tmp415 <= $tmp416;
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417};
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block1; else goto block2;
block5:;
int64_t $tmp420 = $tmp409.value;
int64_t $tmp421 = $tmp410.value;
bool $tmp422 = $tmp420 < $tmp421;
frost$core$Bit $tmp423 = (frost$core$Bit) {$tmp422};
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block1; else goto block2;
block1:;
// line 271
frost$collections$HashMap$Entry*** $tmp425 = &param0->contents;
frost$collections$HashMap$Entry** $tmp426 = *$tmp425;
frost$core$Int64 $tmp427 = *(&local0);
int64_t $tmp428 = $tmp427.value;
frost$collections$HashMap$Entry* $tmp429 = $tmp426[$tmp428];
frost$core$Bit $tmp430 = frost$core$Bit$init$builtin_bit($tmp429 != NULL);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block6; else goto block7;
block6:;
// line 272
frost$collections$HashMap$Entry*** $tmp432 = &param0->contents;
frost$collections$HashMap$Entry** $tmp433 = *$tmp432;
frost$core$Int64 $tmp434 = *(&local0);
int64_t $tmp435 = $tmp434.value;
frost$collections$HashMap$Entry* $tmp436 = $tmp433[$tmp435];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp437 = *(&local0);
int64_t $tmp438 = $tmp410.value;
int64_t $tmp439 = $tmp437.value;
int64_t $tmp440 = $tmp438 - $tmp439;
frost$core$Int64 $tmp441 = (frost$core$Int64) {$tmp440};
frost$core$UInt64 $tmp442 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp441);
if ($tmp412) goto block9; else goto block10;
block9:;
uint64_t $tmp443 = $tmp442.value;
uint64_t $tmp444 = $tmp414.value;
bool $tmp445 = $tmp443 >= $tmp444;
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block8; else goto block2;
block10:;
uint64_t $tmp448 = $tmp442.value;
uint64_t $tmp449 = $tmp414.value;
bool $tmp450 = $tmp448 > $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block8; else goto block2;
block8:;
int64_t $tmp453 = $tmp437.value;
int64_t $tmp454 = $tmp413.value;
int64_t $tmp455 = $tmp453 + $tmp454;
frost$core$Int64 $tmp456 = (frost$core$Int64) {$tmp455};
*(&local0) = $tmp456;
goto block1;
block2:;
// line 275
frost$collections$HashMap$Entry*** $tmp457 = &param0->contents;
frost$collections$HashMap$Entry** $tmp458 = *$tmp457;
frostFree($tmp458);
// line 276
frost$core$Int64 $tmp459 = (frost$core$Int64) {16};
frost$core$Int64* $tmp460 = &param0->bucketCount;
*$tmp460 = $tmp459;
// line 277
frost$core$Int64* $tmp461 = &param0->bucketCount;
frost$core$Int64 $tmp462 = *$tmp461;
int64_t $tmp463 = $tmp462.value;
frost$collections$HashMap$Entry** $tmp464 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp463 * 8));
frost$collections$HashMap$Entry*** $tmp465 = &param0->contents;
*$tmp465 = $tmp464;
// line 278
frost$core$Int64 $tmp466 = (frost$core$Int64) {0};
frost$core$Int64* $tmp467 = &param0->bucketCount;
frost$core$Int64 $tmp468 = *$tmp467;
frost$core$Bit $tmp469 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp470 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp466, $tmp468, $tmp469);
frost$core$Int64 $tmp471 = $tmp470.min;
*(&local1) = $tmp471;
frost$core$Int64 $tmp472 = $tmp470.max;
frost$core$Bit $tmp473 = $tmp470.inclusive;
bool $tmp474 = $tmp473.value;
frost$core$Int64 $tmp475 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp476 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp475);
if ($tmp474) goto block14; else goto block15;
block14:;
int64_t $tmp477 = $tmp471.value;
int64_t $tmp478 = $tmp472.value;
bool $tmp479 = $tmp477 <= $tmp478;
frost$core$Bit $tmp480 = (frost$core$Bit) {$tmp479};
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block11; else goto block12;
block15:;
int64_t $tmp482 = $tmp471.value;
int64_t $tmp483 = $tmp472.value;
bool $tmp484 = $tmp482 < $tmp483;
frost$core$Bit $tmp485 = (frost$core$Bit) {$tmp484};
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block11; else goto block12;
block11:;
// line 279
frost$collections$HashMap$Entry*** $tmp487 = &param0->contents;
frost$collections$HashMap$Entry** $tmp488 = *$tmp487;
frost$core$Int64 $tmp489 = *(&local1);
int64_t $tmp490 = $tmp489.value;
frost$collections$HashMap$Entry* $tmp491 = $tmp488[$tmp490];
frost$core$Bit $tmp492 = frost$core$Bit$init$builtin_bit($tmp491 != NULL);
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block16; else goto block17;
block16:;
// line 280
frost$collections$HashMap$Entry*** $tmp494 = &param0->contents;
frost$collections$HashMap$Entry** $tmp495 = *$tmp494;
frost$core$Int64 $tmp496 = *(&local1);
int64_t $tmp497 = $tmp496.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp498 = $tmp495[$tmp497];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
$tmp495[$tmp497] = ((frost$collections$HashMap$Entry*) NULL);
goto block17;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp499 = *(&local1);
int64_t $tmp500 = $tmp472.value;
int64_t $tmp501 = $tmp499.value;
int64_t $tmp502 = $tmp500 - $tmp501;
frost$core$Int64 $tmp503 = (frost$core$Int64) {$tmp502};
frost$core$UInt64 $tmp504 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp503);
if ($tmp474) goto block19; else goto block20;
block19:;
uint64_t $tmp505 = $tmp504.value;
uint64_t $tmp506 = $tmp476.value;
bool $tmp507 = $tmp505 >= $tmp506;
frost$core$Bit $tmp508 = (frost$core$Bit) {$tmp507};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block18; else goto block12;
block20:;
uint64_t $tmp510 = $tmp504.value;
uint64_t $tmp511 = $tmp476.value;
bool $tmp512 = $tmp510 > $tmp511;
frost$core$Bit $tmp513 = (frost$core$Bit) {$tmp512};
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block18; else goto block12;
block18:;
int64_t $tmp515 = $tmp499.value;
int64_t $tmp516 = $tmp475.value;
int64_t $tmp517 = $tmp515 + $tmp516;
frost$core$Int64 $tmp518 = (frost$core$Int64) {$tmp517};
*(&local1) = $tmp518;
goto block11;
block12:;
// line 283
frost$core$Int64* $tmp519 = &param0->bucketCount;
frost$core$Int64 $tmp520 = *$tmp519;
frost$core$Int64 $tmp521 = (frost$core$Int64) {3};
int64_t $tmp522 = $tmp520.value;
int64_t $tmp523 = $tmp521.value;
int64_t $tmp524 = $tmp522 * $tmp523;
frost$core$Int64 $tmp525 = (frost$core$Int64) {$tmp524};
frost$core$Int64 $tmp526 = (frost$core$Int64) {4};
int64_t $tmp527 = $tmp525.value;
int64_t $tmp528 = $tmp526.value;
int64_t $tmp529 = $tmp527 / $tmp528;
frost$core$Int64 $tmp530 = (frost$core$Int64) {$tmp529};
frost$core$Int64* $tmp531 = &param0->threshold;
*$tmp531 = $tmp530;
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
frost$core$Int64* $tmp532 = &param0->_count;
frost$core$Int64 $tmp533 = *$tmp532;
frost$core$Int64 $tmp534 = (frost$core$Int64) {1};
int64_t $tmp535 = $tmp533.value;
int64_t $tmp536 = $tmp534.value;
int64_t $tmp537 = $tmp535 + $tmp536;
frost$core$Int64 $tmp538 = (frost$core$Int64) {$tmp537};
frost$core$Int64* $tmp539 = &param0->_count;
*$tmp539 = $tmp538;
// line 289
frost$core$Int64* $tmp540 = &param0->_count;
frost$core$Int64 $tmp541 = *$tmp540;
frost$core$Int64* $tmp542 = &param0->threshold;
frost$core$Int64 $tmp543 = *$tmp542;
int64_t $tmp544 = $tmp541.value;
int64_t $tmp545 = $tmp543.value;
bool $tmp546 = $tmp544 >= $tmp545;
frost$core$Bit $tmp547 = (frost$core$Bit) {$tmp546};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block1; else goto block2;
block1:;
// line 290
frost$collections$HashMap$Entry*** $tmp549 = &param0->contents;
frost$collections$HashMap$Entry** $tmp550 = *$tmp549;
*(&local0) = $tmp550;
// line 291
frost$core$Int64* $tmp551 = &param0->bucketCount;
frost$core$Int64 $tmp552 = *$tmp551;
*(&local1) = $tmp552;
// line 292
frost$core$Int64* $tmp553 = &param0->bucketCount;
frost$core$Int64 $tmp554 = *$tmp553;
frost$core$Int64 $tmp555 = (frost$core$Int64) {2};
int64_t $tmp556 = $tmp554.value;
int64_t $tmp557 = $tmp555.value;
int64_t $tmp558 = $tmp556 * $tmp557;
frost$core$Int64 $tmp559 = (frost$core$Int64) {$tmp558};
frost$core$Int64* $tmp560 = &param0->bucketCount;
*$tmp560 = $tmp559;
// line 293
frost$core$Int64* $tmp561 = &param0->bucketCount;
frost$core$Int64 $tmp562 = *$tmp561;
int64_t $tmp563 = $tmp562.value;
frost$collections$HashMap$Entry** $tmp564 = ((frost$collections$HashMap$Entry**) frostAlloc($tmp563 * 8));
frost$collections$HashMap$Entry*** $tmp565 = &param0->contents;
*$tmp565 = $tmp564;
// line 294
frost$core$Int64 $tmp566 = (frost$core$Int64) {0};
frost$core$Int64* $tmp567 = &param0->bucketCount;
frost$core$Int64 $tmp568 = *$tmp567;
frost$core$Bit $tmp569 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp570 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp566, $tmp568, $tmp569);
frost$core$Int64 $tmp571 = $tmp570.min;
*(&local2) = $tmp571;
frost$core$Int64 $tmp572 = $tmp570.max;
frost$core$Bit $tmp573 = $tmp570.inclusive;
bool $tmp574 = $tmp573.value;
frost$core$Int64 $tmp575 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp576 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp575);
if ($tmp574) goto block6; else goto block7;
block6:;
int64_t $tmp577 = $tmp571.value;
int64_t $tmp578 = $tmp572.value;
bool $tmp579 = $tmp577 <= $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block3; else goto block4;
block7:;
int64_t $tmp582 = $tmp571.value;
int64_t $tmp583 = $tmp572.value;
bool $tmp584 = $tmp582 < $tmp583;
frost$core$Bit $tmp585 = (frost$core$Bit) {$tmp584};
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block3; else goto block4;
block3:;
// line 295
frost$collections$HashMap$Entry*** $tmp587 = &param0->contents;
frost$collections$HashMap$Entry** $tmp588 = *$tmp587;
frost$core$Int64 $tmp589 = *(&local2);
int64_t $tmp590 = $tmp589.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp591 = $tmp588[$tmp590];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
$tmp588[$tmp590] = ((frost$collections$HashMap$Entry*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp592 = *(&local2);
int64_t $tmp593 = $tmp572.value;
int64_t $tmp594 = $tmp592.value;
int64_t $tmp595 = $tmp593 - $tmp594;
frost$core$Int64 $tmp596 = (frost$core$Int64) {$tmp595};
frost$core$UInt64 $tmp597 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp596);
if ($tmp574) goto block9; else goto block10;
block9:;
uint64_t $tmp598 = $tmp597.value;
uint64_t $tmp599 = $tmp576.value;
bool $tmp600 = $tmp598 >= $tmp599;
frost$core$Bit $tmp601 = (frost$core$Bit) {$tmp600};
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block8; else goto block4;
block10:;
uint64_t $tmp603 = $tmp597.value;
uint64_t $tmp604 = $tmp576.value;
bool $tmp605 = $tmp603 > $tmp604;
frost$core$Bit $tmp606 = (frost$core$Bit) {$tmp605};
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block8; else goto block4;
block8:;
int64_t $tmp608 = $tmp592.value;
int64_t $tmp609 = $tmp575.value;
int64_t $tmp610 = $tmp608 + $tmp609;
frost$core$Int64 $tmp611 = (frost$core$Int64) {$tmp610};
*(&local2) = $tmp611;
goto block3;
block4:;
// line 297
frost$core$Int64* $tmp612 = &param0->threshold;
frost$core$Int64 $tmp613 = *$tmp612;
frost$core$Int64 $tmp614 = (frost$core$Int64) {2};
int64_t $tmp615 = $tmp613.value;
int64_t $tmp616 = $tmp614.value;
int64_t $tmp617 = $tmp615 * $tmp616;
frost$core$Int64 $tmp618 = (frost$core$Int64) {$tmp617};
frost$core$Int64* $tmp619 = &param0->threshold;
*$tmp619 = $tmp618;
// line 298
frost$core$Int64 $tmp620 = (frost$core$Int64) {0};
frost$core$Int64* $tmp621 = &param0->_count;
*$tmp621 = $tmp620;
// line 299
frost$core$Int64 $tmp622 = (frost$core$Int64) {0};
frost$core$Int64 $tmp623 = *(&local1);
frost$core$Bit $tmp624 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp625 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp622, $tmp623, $tmp624);
frost$core$Int64 $tmp626 = $tmp625.min;
*(&local3) = $tmp626;
frost$core$Int64 $tmp627 = $tmp625.max;
frost$core$Bit $tmp628 = $tmp625.inclusive;
bool $tmp629 = $tmp628.value;
frost$core$Int64 $tmp630 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp631 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp630);
if ($tmp629) goto block14; else goto block15;
block14:;
int64_t $tmp632 = $tmp626.value;
int64_t $tmp633 = $tmp627.value;
bool $tmp634 = $tmp632 <= $tmp633;
frost$core$Bit $tmp635 = (frost$core$Bit) {$tmp634};
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block11; else goto block12;
block15:;
int64_t $tmp637 = $tmp626.value;
int64_t $tmp638 = $tmp627.value;
bool $tmp639 = $tmp637 < $tmp638;
frost$core$Bit $tmp640 = (frost$core$Bit) {$tmp639};
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block11; else goto block12;
block11:;
// line 300
frost$collections$HashMap$Entry** $tmp642 = *(&local0);
frost$core$Int64 $tmp643 = *(&local3);
int64_t $tmp644 = $tmp643.value;
frost$collections$HashMap$Entry* $tmp645 = $tmp642[$tmp644];
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$collections$HashMap$Entry* $tmp646 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local4) = $tmp645;
// line 301
goto block16;
block16:;
frost$collections$HashMap$Entry* $tmp647 = *(&local4);
frost$core$Bit $tmp648 = frost$core$Bit$init$builtin_bit($tmp647 != NULL);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block17; else goto block18;
block17:;
// line 302
frost$collections$HashMap$Entry* $tmp650 = *(&local4);
frost$collections$Key** $tmp651 = &$tmp650->key;
frost$collections$Key* $tmp652 = *$tmp651;
frost$collections$HashMap$Entry* $tmp653 = *(&local4);
frost$core$Object** $tmp654 = &$tmp653->value;
frost$core$Object* $tmp655 = *$tmp654;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, $tmp652, $tmp655);
// line 303
frost$collections$HashMap$Entry* $tmp656 = *(&local4);
frost$collections$HashMap$Entry** $tmp657 = &$tmp656->next;
frost$collections$HashMap$Entry* $tmp658 = *$tmp657;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$collections$HashMap$Entry* $tmp659 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local4) = $tmp658;
goto block16;
block18:;
frost$collections$HashMap$Entry* $tmp660 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
goto block13;
block13:;
frost$core$Int64 $tmp661 = *(&local3);
int64_t $tmp662 = $tmp627.value;
int64_t $tmp663 = $tmp661.value;
int64_t $tmp664 = $tmp662 - $tmp663;
frost$core$Int64 $tmp665 = (frost$core$Int64) {$tmp664};
frost$core$UInt64 $tmp666 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp665);
if ($tmp629) goto block20; else goto block21;
block20:;
uint64_t $tmp667 = $tmp666.value;
uint64_t $tmp668 = $tmp631.value;
bool $tmp669 = $tmp667 >= $tmp668;
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669};
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block19; else goto block12;
block21:;
uint64_t $tmp672 = $tmp666.value;
uint64_t $tmp673 = $tmp631.value;
bool $tmp674 = $tmp672 > $tmp673;
frost$core$Bit $tmp675 = (frost$core$Bit) {$tmp674};
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block19; else goto block12;
block19:;
int64_t $tmp677 = $tmp661.value;
int64_t $tmp678 = $tmp630.value;
int64_t $tmp679 = $tmp677 + $tmp678;
frost$core$Int64 $tmp680 = (frost$core$Int64) {$tmp679};
*(&local3) = $tmp680;
goto block11;
block12:;
// line 306
frost$core$Int64 $tmp681 = (frost$core$Int64) {0};
frost$core$Int64 $tmp682 = *(&local1);
frost$core$Bit $tmp683 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp684 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp681, $tmp682, $tmp683);
frost$core$Int64 $tmp685 = $tmp684.min;
*(&local5) = $tmp685;
frost$core$Int64 $tmp686 = $tmp684.max;
frost$core$Bit $tmp687 = $tmp684.inclusive;
bool $tmp688 = $tmp687.value;
frost$core$Int64 $tmp689 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp690 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp689);
if ($tmp688) goto block25; else goto block26;
block25:;
int64_t $tmp691 = $tmp685.value;
int64_t $tmp692 = $tmp686.value;
bool $tmp693 = $tmp691 <= $tmp692;
frost$core$Bit $tmp694 = (frost$core$Bit) {$tmp693};
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block22; else goto block23;
block26:;
int64_t $tmp696 = $tmp685.value;
int64_t $tmp697 = $tmp686.value;
bool $tmp698 = $tmp696 < $tmp697;
frost$core$Bit $tmp699 = (frost$core$Bit) {$tmp698};
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block22; else goto block23;
block22:;
// line 307
frost$collections$HashMap$Entry** $tmp701 = *(&local0);
frost$core$Int64 $tmp702 = *(&local5);
int64_t $tmp703 = $tmp702.value;
frost$collections$HashMap$Entry* $tmp704 = $tmp701[$tmp703];
frost$core$Bit $tmp705 = frost$core$Bit$init$builtin_bit($tmp704 != NULL);
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block27; else goto block28;
block27:;
// line 308
frost$collections$HashMap$Entry** $tmp707 = *(&local0);
frost$core$Int64 $tmp708 = *(&local5);
int64_t $tmp709 = $tmp708.value;
frost$collections$HashMap$Entry* $tmp710 = $tmp707[$tmp709];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
goto block28;
block28:;
goto block24;
block24:;
frost$core$Int64 $tmp711 = *(&local5);
int64_t $tmp712 = $tmp686.value;
int64_t $tmp713 = $tmp711.value;
int64_t $tmp714 = $tmp712 - $tmp713;
frost$core$Int64 $tmp715 = (frost$core$Int64) {$tmp714};
frost$core$UInt64 $tmp716 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp715);
if ($tmp688) goto block30; else goto block31;
block30:;
uint64_t $tmp717 = $tmp716.value;
uint64_t $tmp718 = $tmp690.value;
bool $tmp719 = $tmp717 >= $tmp718;
frost$core$Bit $tmp720 = (frost$core$Bit) {$tmp719};
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block29; else goto block23;
block31:;
uint64_t $tmp722 = $tmp716.value;
uint64_t $tmp723 = $tmp690.value;
bool $tmp724 = $tmp722 > $tmp723;
frost$core$Bit $tmp725 = (frost$core$Bit) {$tmp724};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block29; else goto block23;
block29:;
int64_t $tmp727 = $tmp711.value;
int64_t $tmp728 = $tmp689.value;
int64_t $tmp729 = $tmp727 + $tmp728;
frost$core$Int64 $tmp730 = (frost$core$Int64) {$tmp729};
*(&local5) = $tmp730;
goto block22;
block23:;
// line 311
frost$collections$HashMap$Entry** $tmp731 = *(&local0);
frostFree($tmp731);
goto block2;
block2:;
return;

}
frost$collections$Iterator* frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT(frost$collections$HashMap* param0) {

// line 317
frost$collections$HashMap$KeyIterator* $tmp732 = (frost$collections$HashMap$KeyIterator*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashMap$KeyIterator$class);
frost$collections$HashMap$KeyIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$KeyIterator$K$Cfrost$collections$HashMap$KeyIterator$V$GT($tmp732, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp732)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
return ((frost$collections$Iterator*) $tmp732);

}
frost$collections$Iterator* frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT(frost$collections$HashMap* param0) {

// line 322
frost$collections$HashMap$ValueIterator* $tmp733 = (frost$collections$HashMap$ValueIterator*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashMap$ValueIterator$class);
frost$collections$HashMap$ValueIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$ValueIterator$K$Cfrost$collections$HashMap$ValueIterator$V$GT($tmp733, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp733)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
return ((frost$collections$Iterator*) $tmp733);

}
frost$core$Int64 frost$collections$HashMap$get_count$R$frost$core$Int64(frost$collections$HashMap* param0) {

// line 327
frost$core$Int64* $tmp734 = &param0->_count;
frost$core$Int64 $tmp735 = *$tmp734;
return $tmp735;

}
frost$core$String* frost$collections$HashMap$get_asString$R$frost$core$String(frost$collections$HashMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$collections$HashMap$Entry* local3 = NULL;
// line 338
frost$core$MutableString* $tmp736 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp736);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$MutableString* $tmp737 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local0) = $tmp736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
// line 339
frost$core$MutableString* $tmp738 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp738, &$s739);
// line 340
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s740));
frost$core$String* $tmp741 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local1) = &$s742;
// line 341
frost$core$Int64 $tmp743 = (frost$core$Int64) {0};
frost$core$Int64* $tmp744 = &param0->bucketCount;
frost$core$Int64 $tmp745 = *$tmp744;
frost$core$Bit $tmp746 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp747 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp743, $tmp745, $tmp746);
frost$core$Int64 $tmp748 = $tmp747.min;
*(&local2) = $tmp748;
frost$core$Int64 $tmp749 = $tmp747.max;
frost$core$Bit $tmp750 = $tmp747.inclusive;
bool $tmp751 = $tmp750.value;
frost$core$Int64 $tmp752 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp753 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp752);
if ($tmp751) goto block4; else goto block5;
block4:;
int64_t $tmp754 = $tmp748.value;
int64_t $tmp755 = $tmp749.value;
bool $tmp756 = $tmp754 <= $tmp755;
frost$core$Bit $tmp757 = (frost$core$Bit) {$tmp756};
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block1; else goto block2;
block5:;
int64_t $tmp759 = $tmp748.value;
int64_t $tmp760 = $tmp749.value;
bool $tmp761 = $tmp759 < $tmp760;
frost$core$Bit $tmp762 = (frost$core$Bit) {$tmp761};
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block1; else goto block2;
block1:;
// line 342
frost$collections$HashMap$Entry*** $tmp764 = &param0->contents;
frost$collections$HashMap$Entry** $tmp765 = *$tmp764;
frost$core$Int64 $tmp766 = *(&local2);
int64_t $tmp767 = $tmp766.value;
frost$collections$HashMap$Entry* $tmp768 = $tmp765[$tmp767];
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$collections$HashMap$Entry* $tmp769 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local3) = $tmp768;
// line 343
goto block6;
block6:;
frost$collections$HashMap$Entry* $tmp770 = *(&local3);
frost$core$Bit $tmp771 = frost$core$Bit$init$builtin_bit($tmp770 != NULL);
bool $tmp772 = $tmp771.value;
if ($tmp772) goto block7; else goto block8;
block7:;
// line 344
frost$core$MutableString* $tmp773 = *(&local0);
frost$core$String* $tmp774 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp773, $tmp774);
// line 345
frost$collections$HashMap$Entry* $tmp775 = *(&local3);
frost$collections$Key** $tmp776 = &$tmp775->key;
frost$collections$Key* $tmp777 = *$tmp776;
frost$core$Bit $tmp778 = frost$core$Bit$init$builtin_bit(true);
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block9; else goto block11;
block9:;
// line 346
frost$core$MutableString* $tmp780 = *(&local0);
frost$collections$HashMap$Entry* $tmp781 = *(&local3);
frost$collections$Key** $tmp782 = &$tmp781->key;
frost$collections$Key* $tmp783 = *$tmp782;
frost$core$MutableString$append$frost$core$Object($tmp780, ((frost$core$Object*) $tmp783));
goto block10;
block11:;
// line 1
// line 349
frost$core$MutableString* $tmp784 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp784, &$s785);
goto block10;
block10:;
// line 351
frost$core$MutableString* $tmp786 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp786, &$s787);
// line 352
frost$collections$HashMap$Entry* $tmp788 = *(&local3);
frost$core$Object** $tmp789 = &$tmp788->value;
frost$core$Object* $tmp790 = *$tmp789;
frost$core$Bit $tmp791 = frost$core$Bit$init$builtin_bit(true);
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block12; else goto block14;
block12:;
// line 353
frost$core$MutableString* $tmp793 = *(&local0);
frost$collections$HashMap$Entry* $tmp794 = *(&local3);
frost$core$Object** $tmp795 = &$tmp794->value;
frost$core$Object* $tmp796 = *$tmp795;
frost$core$MutableString$append$frost$core$Object($tmp793, $tmp796);
goto block13;
block14:;
// line 1
// line 356
frost$core$MutableString* $tmp797 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp797, &$s798);
goto block13;
block13:;
// line 358
frost$collections$HashMap$Entry* $tmp799 = *(&local3);
frost$collections$HashMap$Entry** $tmp800 = &$tmp799->next;
frost$collections$HashMap$Entry* $tmp801 = *$tmp800;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
frost$collections$HashMap$Entry* $tmp802 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
*(&local3) = $tmp801;
// line 359
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s803));
frost$core$String* $tmp804 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
*(&local1) = &$s805;
goto block6;
block8:;
frost$collections$HashMap$Entry* $tmp806 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp807 = *(&local2);
int64_t $tmp808 = $tmp749.value;
int64_t $tmp809 = $tmp807.value;
int64_t $tmp810 = $tmp808 - $tmp809;
frost$core$Int64 $tmp811 = (frost$core$Int64) {$tmp810};
frost$core$UInt64 $tmp812 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp811);
if ($tmp751) goto block16; else goto block17;
block16:;
uint64_t $tmp813 = $tmp812.value;
uint64_t $tmp814 = $tmp753.value;
bool $tmp815 = $tmp813 >= $tmp814;
frost$core$Bit $tmp816 = (frost$core$Bit) {$tmp815};
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block15; else goto block2;
block17:;
uint64_t $tmp818 = $tmp812.value;
uint64_t $tmp819 = $tmp753.value;
bool $tmp820 = $tmp818 > $tmp819;
frost$core$Bit $tmp821 = (frost$core$Bit) {$tmp820};
bool $tmp822 = $tmp821.value;
if ($tmp822) goto block15; else goto block2;
block15:;
int64_t $tmp823 = $tmp807.value;
int64_t $tmp824 = $tmp752.value;
int64_t $tmp825 = $tmp823 + $tmp824;
frost$core$Int64 $tmp826 = (frost$core$Int64) {$tmp825};
*(&local2) = $tmp826;
goto block1;
block2:;
// line 362
frost$core$MutableString* $tmp827 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp827, &$s828);
// line 363
frost$core$MutableString* $tmp829 = *(&local0);
frost$core$String* $tmp830 = frost$core$MutableString$finish$R$frost$core$String($tmp829);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$String* $tmp831 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp832 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp830;

}

