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
frost$collections$HashMap$class_type frost$collections$HashMap$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashMap$_frost$collections$MapWriter, { frost$collections$HashMap$convert$R$frost$core$String, frost$collections$HashMap$cleanup, frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64, frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q$shim, frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit$shim, frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V$shim, frost$collections$HashMap$remove$frost$collections$HashMap$K$shim, frost$collections$HashMap$clear, frost$collections$HashMap$incrementCount, frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT$shim, frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT$shim, frost$collections$HashMap$get_count$R$frost$core$Int64} };

typedef frost$collections$Iterator* (*$fn82)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn86)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn98)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$Int64 (*$fn161)(frost$collections$Key*);
typedef frost$core$Bit (*$fn205)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn241)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn275)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn335)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn369)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -6526495327472465984, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x5b\x5d\x28\x6b\x65\x79\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 124, 1587957759533913245, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x66\x72\x6f\x73\x74", 13, 1817269291001678375, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s813 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

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
frost$collections$HashMap$Entry** $tmp19 = ((frost$collections$HashMap$Entry**) frostZAlloc($tmp18 * 8));
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
frost$core$UInt64 $tmp31 = frost$core$Int64$convert$R$frost$core$UInt64($tmp30);
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
frost$core$UInt64 $tmp52 = frost$core$Int64$convert$R$frost$core$UInt64($tmp51);
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
// unreffing REF($32:frost.collections.MapView.V?)
frost$core$Frost$unref$frost$core$Object$Q($tmp92);
// unreffing REF($17:frost.collections.Iterator.T)
frost$collections$Key* $tmp100 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing k
*(&local0) = ((frost$collections$Key*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing REF($6:frost.collections.Iterator<frost.collections.MapView.K>)
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
frost$core$UInt64 $tmp111 = frost$core$Int64$convert$R$frost$core$UInt64($tmp110);
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
frost$core$UInt64 $tmp139 = frost$core$Int64$convert$R$frost$core$UInt64($tmp138);
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
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp218;
block9:;
// line 1
// line 199
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$collections$HashMap$Entry* $tmp220 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return ((frost$core$Object*) NULL);
block8:;
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit(false);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp223 = (frost$core$Int64) {189};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s224, $tmp223, &$s225);
abort(); // unreachable
block10:;
abort(); // unreachable

}
frost$core$Bit frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$core$Bit local2;
// line 205
frost$core$Int64 $tmp226 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp226;
// line 206
frost$collections$HashMap$Entry*** $tmp227 = &param0->contents;
frost$collections$HashMap$Entry** $tmp228 = *$tmp227;
frost$core$Int64 $tmp229 = *(&local0);
int64_t $tmp230 = $tmp229.value;
frost$collections$HashMap$Entry* $tmp231 = $tmp228[$tmp230];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$collections$HashMap$Entry* $tmp232 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local1) = $tmp231;
// line 207
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp233 = *(&local1);
frost$core$Bit $tmp234 = frost$core$Bit$init$builtin_bit($tmp233 != NULL);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block4; else goto block5;
block4:;
frost$collections$HashMap$Entry* $tmp236 = *(&local1);
frost$collections$Key** $tmp237 = &$tmp236->key;
frost$collections$Key* $tmp238 = *$tmp237;
ITable* $tmp239 = ((frost$core$Equatable*) $tmp238)->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[1];
frost$core$Bit $tmp242 = $tmp240(((frost$core$Equatable*) $tmp238), ((frost$core$Equatable*) param1));
*(&local2) = $tmp242;
goto block6;
block5:;
*(&local2) = $tmp234;
goto block6;
block6:;
frost$core$Bit $tmp243 = *(&local2);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block2; else goto block3;
block2:;
// line 208
frost$collections$HashMap$Entry* $tmp245 = *(&local1);
frost$collections$HashMap$Entry** $tmp246 = &$tmp245->next;
frost$collections$HashMap$Entry* $tmp247 = *$tmp246;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$collections$HashMap$Entry* $tmp248 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local1) = $tmp247;
goto block1;
block3:;
// line 210
frost$collections$HashMap$Entry* $tmp249 = *(&local1);
frost$core$Bit $tmp250 = frost$core$Bit$init$builtin_bit($tmp249 != NULL);
frost$collections$HashMap$Entry* $tmp251 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return $tmp250;

}
void frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(frost$collections$HashMap* param0, frost$collections$Key* param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$core$Bit local2;
frost$collections$HashMap$Entry* local3 = NULL;
// line 215
frost$core$Int64* $tmp252 = &param0->changeCount;
frost$core$Int64 $tmp253 = *$tmp252;
frost$core$Int64 $tmp254 = (frost$core$Int64) {1};
int64_t $tmp255 = $tmp253.value;
int64_t $tmp256 = $tmp254.value;
int64_t $tmp257 = $tmp255 + $tmp256;
frost$core$Int64 $tmp258 = (frost$core$Int64) {$tmp257};
frost$core$Int64* $tmp259 = &param0->changeCount;
*$tmp259 = $tmp258;
// line 216
frost$core$Int64 $tmp260 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp260;
// line 217
frost$collections$HashMap$Entry*** $tmp261 = &param0->contents;
frost$collections$HashMap$Entry** $tmp262 = *$tmp261;
frost$core$Int64 $tmp263 = *(&local0);
int64_t $tmp264 = $tmp263.value;
frost$collections$HashMap$Entry* $tmp265 = $tmp262[$tmp264];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$collections$HashMap$Entry* $tmp266 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local1) = $tmp265;
// line 218
goto block1;
block1:;
frost$collections$HashMap$Entry* $tmp267 = *(&local1);
frost$core$Bit $tmp268 = frost$core$Bit$init$builtin_bit($tmp267 != NULL);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block4; else goto block5;
block4:;
frost$collections$HashMap$Entry* $tmp270 = *(&local1);
frost$collections$Key** $tmp271 = &$tmp270->key;
frost$collections$Key* $tmp272 = *$tmp271;
ITable* $tmp273 = ((frost$core$Equatable*) $tmp272)->$class->itable;
while ($tmp273->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp273 = $tmp273->next;
}
$fn275 $tmp274 = $tmp273->methods[1];
frost$core$Bit $tmp276 = $tmp274(((frost$core$Equatable*) $tmp272), ((frost$core$Equatable*) param1));
*(&local2) = $tmp276;
goto block6;
block5:;
*(&local2) = $tmp268;
goto block6;
block6:;
frost$core$Bit $tmp277 = *(&local2);
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block2; else goto block3;
block2:;
// line 219
frost$collections$HashMap$Entry* $tmp279 = *(&local1);
frost$collections$HashMap$Entry** $tmp280 = &$tmp279->next;
frost$collections$HashMap$Entry* $tmp281 = *$tmp280;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$collections$HashMap$Entry* $tmp282 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local1) = $tmp281;
goto block1;
block3:;
// line 221
frost$collections$HashMap$Entry* $tmp283 = *(&local1);
frost$core$Bit $tmp284 = frost$core$Bit$init$builtin_bit($tmp283 == NULL);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block7; else goto block9;
block7:;
// line 222
frost$collections$HashMap$Entry*** $tmp286 = &param0->contents;
frost$collections$HashMap$Entry** $tmp287 = *$tmp286;
frost$core$Int64 $tmp288 = *(&local0);
int64_t $tmp289 = $tmp288.value;
frost$collections$HashMap$Entry* $tmp290 = $tmp287[$tmp289];
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$collections$HashMap$Entry* $tmp291 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local3) = $tmp290;
// line 223
frost$collections$HashMap$Entry* $tmp292 = (frost$collections$HashMap$Entry*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$HashMap$Entry$class);
frost$collections$HashMap$Entry$init$frost$collections$HashMap$Entry$K$frost$collections$HashMap$Entry$V($tmp292, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$collections$HashMap$Entry* $tmp293 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local1) = $tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// unreffing REF($87:frost.collections.HashMap.Entry<frost.collections.HashMap.K, frost.collections.HashMap.V>)
// line 224
frost$collections$HashMap$Entry* $tmp294 = *(&local1);
frost$collections$HashMap$Entry* $tmp295 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$collections$HashMap$Entry** $tmp296 = &$tmp294->next;
frost$collections$HashMap$Entry* $tmp297 = *$tmp296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$collections$HashMap$Entry** $tmp298 = &$tmp294->next;
*$tmp298 = $tmp295;
// line 225
frost$collections$HashMap$Entry*** $tmp299 = &param0->contents;
frost$collections$HashMap$Entry** $tmp300 = *$tmp299;
frost$core$Int64 $tmp301 = *(&local0);
frost$collections$HashMap$Entry* $tmp302 = *(&local1);
int64_t $tmp303 = $tmp301.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$collections$HashMap$Entry* $tmp304 = $tmp300[$tmp303];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
$tmp300[$tmp303] = $tmp302;
// line 226
frost$collections$HashMap$incrementCount(param0);
frost$collections$HashMap$Entry* $tmp305 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// unreffing old
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
goto block8;
block9:;
// line 1
// line 229
frost$collections$HashMap$Entry* $tmp306 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp307 = &$tmp306->value;
frost$core$Object* $tmp308 = *$tmp307;
frost$core$Frost$unref$frost$core$Object$Q($tmp308);
frost$core$Object** $tmp309 = &$tmp306->value;
*$tmp309 = param2;
goto block8;
block8:;
frost$collections$HashMap$Entry* $tmp310 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$remove$frost$collections$HashMap$K(frost$collections$HashMap* param0, frost$collections$Key* param1) {

frost$core$Int64 local0;
frost$collections$HashMap$Entry* local1 = NULL;
frost$collections$HashMap$Entry* local2 = NULL;
frost$collections$HashMap$Entry* local3 = NULL;
// line 235
frost$core$Int64* $tmp311 = &param0->changeCount;
frost$core$Int64 $tmp312 = *$tmp311;
frost$core$Int64 $tmp313 = (frost$core$Int64) {1};
int64_t $tmp314 = $tmp312.value;
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314 + $tmp315;
frost$core$Int64 $tmp317 = (frost$core$Int64) {$tmp316};
frost$core$Int64* $tmp318 = &param0->changeCount;
*$tmp318 = $tmp317;
// line 236
frost$core$Int64 $tmp319 = frost$collections$HashMap$indexFor$frost$collections$HashMap$K$R$frost$core$Int64(param0, param1);
*(&local0) = $tmp319;
// line 237
frost$collections$HashMap$Entry*** $tmp320 = &param0->contents;
frost$collections$HashMap$Entry** $tmp321 = *$tmp320;
frost$core$Int64 $tmp322 = *(&local0);
int64_t $tmp323 = $tmp322.value;
frost$collections$HashMap$Entry* $tmp324 = $tmp321[$tmp323];
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$collections$HashMap$Entry* $tmp325 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local1) = $tmp324;
// line 239
frost$collections$HashMap$Entry* $tmp326 = *(&local1);
frost$core$Bit $tmp327 = frost$core$Bit$init$builtin_bit($tmp326 == NULL);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block1; else goto block2;
block1:;
// line 240
frost$collections$HashMap$Entry* $tmp329 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block2:;
// line 243
frost$collections$HashMap$Entry* $tmp330 = *(&local1);
frost$collections$Key** $tmp331 = &$tmp330->key;
frost$collections$Key* $tmp332 = *$tmp331;
ITable* $tmp333 = ((frost$core$Equatable*) $tmp332)->$class->itable;
while ($tmp333->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp333 = $tmp333->next;
}
$fn335 $tmp334 = $tmp333->methods[0];
frost$core$Bit $tmp336 = $tmp334(((frost$core$Equatable*) $tmp332), ((frost$core$Equatable*) param1));
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block3; else goto block4;
block3:;
// line 244
frost$collections$HashMap$Entry*** $tmp338 = &param0->contents;
frost$collections$HashMap$Entry** $tmp339 = *$tmp338;
frost$core$Int64 $tmp340 = *(&local0);
frost$collections$HashMap$Entry* $tmp341 = *(&local1);
frost$collections$HashMap$Entry** $tmp342 = &$tmp341->next;
frost$collections$HashMap$Entry* $tmp343 = *$tmp342;
int64_t $tmp344 = $tmp340.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$collections$HashMap$Entry* $tmp345 = $tmp339[$tmp344];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
$tmp339[$tmp344] = $tmp343;
// line 245
frost$core$Int64* $tmp346 = &param0->_count;
frost$core$Int64 $tmp347 = *$tmp346;
frost$core$Int64 $tmp348 = (frost$core$Int64) {1};
int64_t $tmp349 = $tmp347.value;
int64_t $tmp350 = $tmp348.value;
int64_t $tmp351 = $tmp349 - $tmp350;
frost$core$Int64 $tmp352 = (frost$core$Int64) {$tmp351};
frost$core$Int64* $tmp353 = &param0->_count;
*$tmp353 = $tmp352;
// line 246
frost$collections$HashMap$Entry* $tmp354 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block4:;
// line 248
goto block5;
block5:;
// line 249
frost$collections$HashMap$Entry* $tmp355 = *(&local1);
frost$collections$HashMap$Entry** $tmp356 = &$tmp355->next;
frost$collections$HashMap$Entry* $tmp357 = *$tmp356;
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$collections$HashMap$Entry* $tmp358 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local2) = $tmp357;
// line 250
frost$collections$HashMap$Entry* $tmp359 = *(&local2);
frost$core$Bit $tmp360 = frost$core$Bit$init$builtin_bit($tmp359 == NULL);
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block7; else goto block8;
block7:;
// line 252
frost$collections$HashMap$Entry* $tmp362 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// unreffing next
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp363 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;
block8:;
// line 254
frost$collections$HashMap$Entry* $tmp364 = *(&local2);
frost$collections$Key** $tmp365 = &$tmp364->key;
frost$collections$Key* $tmp366 = *$tmp365;
ITable* $tmp367 = ((frost$core$Equatable*) $tmp366)->$class->itable;
while ($tmp367->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp367 = $tmp367->next;
}
$fn369 $tmp368 = $tmp367->methods[0];
frost$core$Bit $tmp370 = $tmp368(((frost$core$Equatable*) $tmp366), ((frost$core$Equatable*) param1));
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block9; else goto block10;
block9:;
// line 256
frost$collections$HashMap$Entry* $tmp372 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
// unreffing next
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block6;
block10:;
// line 258
frost$collections$HashMap$Entry* $tmp373 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$collections$HashMap$Entry* $tmp374 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local1) = $tmp373;
frost$collections$HashMap$Entry* $tmp375 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// unreffing next
*(&local2) = ((frost$collections$HashMap$Entry*) NULL);
goto block5;
block6:;
// line 261
frost$collections$HashMap$Entry* $tmp376 = *(&local1);
frost$collections$HashMap$Entry** $tmp377 = &$tmp376->next;
frost$collections$HashMap$Entry* $tmp378 = *$tmp377;
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$collections$HashMap$Entry* $tmp379 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local3) = $tmp378;
// line 262
frost$collections$HashMap$Entry* $tmp380 = *(&local3);
frost$core$Bit $tmp381 = frost$core$Bit$init$builtin_bit($tmp380 != NULL);
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp383 = (frost$core$Int64) {262};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s384, $tmp383);
abort(); // unreachable
block11:;
// line 263
frost$collections$HashMap$Entry* $tmp385 = *(&local1);
frost$collections$HashMap$Entry* $tmp386 = *(&local3);
frost$collections$HashMap$Entry** $tmp387 = &$tmp386->next;
frost$collections$HashMap$Entry* $tmp388 = *$tmp387;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$collections$HashMap$Entry** $tmp389 = &$tmp385->next;
frost$collections$HashMap$Entry* $tmp390 = *$tmp389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$collections$HashMap$Entry** $tmp391 = &$tmp385->next;
*$tmp391 = $tmp388;
// line 264
frost$core$Int64* $tmp392 = &param0->_count;
frost$core$Int64 $tmp393 = *$tmp392;
frost$core$Int64 $tmp394 = (frost$core$Int64) {1};
int64_t $tmp395 = $tmp393.value;
int64_t $tmp396 = $tmp394.value;
int64_t $tmp397 = $tmp395 - $tmp396;
frost$core$Int64 $tmp398 = (frost$core$Int64) {$tmp397};
frost$core$Int64* $tmp399 = &param0->_count;
*$tmp399 = $tmp398;
frost$collections$HashMap$Entry* $tmp400 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// unreffing next
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$collections$HashMap$Entry* $tmp401 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// unreffing e
*(&local1) = ((frost$collections$HashMap$Entry*) NULL);
return;

}
void frost$collections$HashMap$clear(frost$collections$HashMap* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 268
frost$core$Int64* $tmp402 = &param0->changeCount;
frost$core$Int64 $tmp403 = *$tmp402;
frost$core$Int64 $tmp404 = (frost$core$Int64) {1};
int64_t $tmp405 = $tmp403.value;
int64_t $tmp406 = $tmp404.value;
int64_t $tmp407 = $tmp405 + $tmp406;
frost$core$Int64 $tmp408 = (frost$core$Int64) {$tmp407};
frost$core$Int64* $tmp409 = &param0->changeCount;
*$tmp409 = $tmp408;
// line 269
frost$core$Int64 $tmp410 = (frost$core$Int64) {0};
frost$core$Int64* $tmp411 = &param0->_count;
*$tmp411 = $tmp410;
// line 270
frost$core$Int64 $tmp412 = (frost$core$Int64) {0};
frost$core$Int64* $tmp413 = &param0->bucketCount;
frost$core$Int64 $tmp414 = *$tmp413;
frost$core$Bit $tmp415 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp416 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp412, $tmp414, $tmp415);
frost$core$Int64 $tmp417 = $tmp416.min;
*(&local0) = $tmp417;
frost$core$Int64 $tmp418 = $tmp416.max;
frost$core$Bit $tmp419 = $tmp416.inclusive;
bool $tmp420 = $tmp419.value;
frost$core$Int64 $tmp421 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp422 = frost$core$Int64$convert$R$frost$core$UInt64($tmp421);
if ($tmp420) goto block4; else goto block5;
block4:;
int64_t $tmp423 = $tmp417.value;
int64_t $tmp424 = $tmp418.value;
bool $tmp425 = $tmp423 <= $tmp424;
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block1; else goto block2;
block5:;
int64_t $tmp428 = $tmp417.value;
int64_t $tmp429 = $tmp418.value;
bool $tmp430 = $tmp428 < $tmp429;
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block1; else goto block2;
block1:;
// line 271
frost$collections$HashMap$Entry*** $tmp433 = &param0->contents;
frost$collections$HashMap$Entry** $tmp434 = *$tmp433;
frost$core$Int64 $tmp435 = *(&local0);
int64_t $tmp436 = $tmp435.value;
frost$collections$HashMap$Entry* $tmp437 = $tmp434[$tmp436];
frost$core$Bit $tmp438 = frost$core$Bit$init$builtin_bit($tmp437 != NULL);
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block6; else goto block7;
block6:;
// line 272
frost$collections$HashMap$Entry*** $tmp440 = &param0->contents;
frost$collections$HashMap$Entry** $tmp441 = *$tmp440;
frost$core$Int64 $tmp442 = *(&local0);
int64_t $tmp443 = $tmp442.value;
frost$collections$HashMap$Entry* $tmp444 = $tmp441[$tmp443];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
goto block7;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp445 = *(&local0);
int64_t $tmp446 = $tmp418.value;
int64_t $tmp447 = $tmp445.value;
int64_t $tmp448 = $tmp446 - $tmp447;
frost$core$Int64 $tmp449 = (frost$core$Int64) {$tmp448};
frost$core$UInt64 $tmp450 = frost$core$Int64$convert$R$frost$core$UInt64($tmp449);
if ($tmp420) goto block9; else goto block10;
block9:;
uint64_t $tmp451 = $tmp450.value;
uint64_t $tmp452 = $tmp422.value;
bool $tmp453 = $tmp451 >= $tmp452;
frost$core$Bit $tmp454 = (frost$core$Bit) {$tmp453};
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block8; else goto block2;
block10:;
uint64_t $tmp456 = $tmp450.value;
uint64_t $tmp457 = $tmp422.value;
bool $tmp458 = $tmp456 > $tmp457;
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block8; else goto block2;
block8:;
int64_t $tmp461 = $tmp445.value;
int64_t $tmp462 = $tmp421.value;
int64_t $tmp463 = $tmp461 + $tmp462;
frost$core$Int64 $tmp464 = (frost$core$Int64) {$tmp463};
*(&local0) = $tmp464;
goto block1;
block2:;
// line 275
frost$collections$HashMap$Entry*** $tmp465 = &param0->contents;
frost$collections$HashMap$Entry** $tmp466 = *$tmp465;
frostFree($tmp466);
// line 276
frost$core$Int64 $tmp467 = (frost$core$Int64) {16};
frost$core$Int64* $tmp468 = &param0->bucketCount;
*$tmp468 = $tmp467;
// line 277
frost$core$Int64* $tmp469 = &param0->bucketCount;
frost$core$Int64 $tmp470 = *$tmp469;
int64_t $tmp471 = $tmp470.value;
frost$collections$HashMap$Entry** $tmp472 = ((frost$collections$HashMap$Entry**) frostZAlloc($tmp471 * 8));
frost$collections$HashMap$Entry*** $tmp473 = &param0->contents;
*$tmp473 = $tmp472;
// line 278
frost$core$Int64 $tmp474 = (frost$core$Int64) {0};
frost$core$Int64* $tmp475 = &param0->bucketCount;
frost$core$Int64 $tmp476 = *$tmp475;
frost$core$Bit $tmp477 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp478 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp474, $tmp476, $tmp477);
frost$core$Int64 $tmp479 = $tmp478.min;
*(&local1) = $tmp479;
frost$core$Int64 $tmp480 = $tmp478.max;
frost$core$Bit $tmp481 = $tmp478.inclusive;
bool $tmp482 = $tmp481.value;
frost$core$Int64 $tmp483 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp484 = frost$core$Int64$convert$R$frost$core$UInt64($tmp483);
if ($tmp482) goto block14; else goto block15;
block14:;
int64_t $tmp485 = $tmp479.value;
int64_t $tmp486 = $tmp480.value;
bool $tmp487 = $tmp485 <= $tmp486;
frost$core$Bit $tmp488 = (frost$core$Bit) {$tmp487};
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block11; else goto block12;
block15:;
int64_t $tmp490 = $tmp479.value;
int64_t $tmp491 = $tmp480.value;
bool $tmp492 = $tmp490 < $tmp491;
frost$core$Bit $tmp493 = (frost$core$Bit) {$tmp492};
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block11; else goto block12;
block11:;
// line 279
frost$collections$HashMap$Entry*** $tmp495 = &param0->contents;
frost$collections$HashMap$Entry** $tmp496 = *$tmp495;
frost$core$Int64 $tmp497 = *(&local1);
int64_t $tmp498 = $tmp497.value;
frost$collections$HashMap$Entry* $tmp499 = $tmp496[$tmp498];
frost$core$Bit $tmp500 = frost$core$Bit$init$builtin_bit($tmp499 != NULL);
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block16; else goto block17;
block16:;
// line 280
frost$collections$HashMap$Entry*** $tmp502 = &param0->contents;
frost$collections$HashMap$Entry** $tmp503 = *$tmp502;
frost$core$Int64 $tmp504 = *(&local1);
int64_t $tmp505 = $tmp504.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp506 = $tmp503[$tmp505];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
$tmp503[$tmp505] = ((frost$collections$HashMap$Entry*) NULL);
goto block17;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp507 = *(&local1);
int64_t $tmp508 = $tmp480.value;
int64_t $tmp509 = $tmp507.value;
int64_t $tmp510 = $tmp508 - $tmp509;
frost$core$Int64 $tmp511 = (frost$core$Int64) {$tmp510};
frost$core$UInt64 $tmp512 = frost$core$Int64$convert$R$frost$core$UInt64($tmp511);
if ($tmp482) goto block19; else goto block20;
block19:;
uint64_t $tmp513 = $tmp512.value;
uint64_t $tmp514 = $tmp484.value;
bool $tmp515 = $tmp513 >= $tmp514;
frost$core$Bit $tmp516 = (frost$core$Bit) {$tmp515};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block18; else goto block12;
block20:;
uint64_t $tmp518 = $tmp512.value;
uint64_t $tmp519 = $tmp484.value;
bool $tmp520 = $tmp518 > $tmp519;
frost$core$Bit $tmp521 = (frost$core$Bit) {$tmp520};
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block18; else goto block12;
block18:;
int64_t $tmp523 = $tmp507.value;
int64_t $tmp524 = $tmp483.value;
int64_t $tmp525 = $tmp523 + $tmp524;
frost$core$Int64 $tmp526 = (frost$core$Int64) {$tmp525};
*(&local1) = $tmp526;
goto block11;
block12:;
// line 283
frost$core$Int64* $tmp527 = &param0->bucketCount;
frost$core$Int64 $tmp528 = *$tmp527;
frost$core$Int64 $tmp529 = (frost$core$Int64) {3};
int64_t $tmp530 = $tmp528.value;
int64_t $tmp531 = $tmp529.value;
int64_t $tmp532 = $tmp530 * $tmp531;
frost$core$Int64 $tmp533 = (frost$core$Int64) {$tmp532};
frost$core$Int64 $tmp534 = (frost$core$Int64) {4};
int64_t $tmp535 = $tmp533.value;
int64_t $tmp536 = $tmp534.value;
int64_t $tmp537 = $tmp535 / $tmp536;
frost$core$Int64 $tmp538 = (frost$core$Int64) {$tmp537};
frost$core$Int64* $tmp539 = &param0->threshold;
*$tmp539 = $tmp538;
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
frost$core$Int64* $tmp540 = &param0->_count;
frost$core$Int64 $tmp541 = *$tmp540;
frost$core$Int64 $tmp542 = (frost$core$Int64) {1};
int64_t $tmp543 = $tmp541.value;
int64_t $tmp544 = $tmp542.value;
int64_t $tmp545 = $tmp543 + $tmp544;
frost$core$Int64 $tmp546 = (frost$core$Int64) {$tmp545};
frost$core$Int64* $tmp547 = &param0->_count;
*$tmp547 = $tmp546;
// line 289
frost$core$Int64* $tmp548 = &param0->_count;
frost$core$Int64 $tmp549 = *$tmp548;
frost$core$Int64* $tmp550 = &param0->threshold;
frost$core$Int64 $tmp551 = *$tmp550;
int64_t $tmp552 = $tmp549.value;
int64_t $tmp553 = $tmp551.value;
bool $tmp554 = $tmp552 >= $tmp553;
frost$core$Bit $tmp555 = (frost$core$Bit) {$tmp554};
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block1; else goto block2;
block1:;
// line 290
frost$collections$HashMap$Entry*** $tmp557 = &param0->contents;
frost$collections$HashMap$Entry** $tmp558 = *$tmp557;
*(&local0) = $tmp558;
// line 291
frost$core$Int64* $tmp559 = &param0->bucketCount;
frost$core$Int64 $tmp560 = *$tmp559;
*(&local1) = $tmp560;
// line 292
frost$core$Int64* $tmp561 = &param0->bucketCount;
frost$core$Int64 $tmp562 = *$tmp561;
frost$core$Int64 $tmp563 = (frost$core$Int64) {2};
int64_t $tmp564 = $tmp562.value;
int64_t $tmp565 = $tmp563.value;
int64_t $tmp566 = $tmp564 * $tmp565;
frost$core$Int64 $tmp567 = (frost$core$Int64) {$tmp566};
frost$core$Int64* $tmp568 = &param0->bucketCount;
*$tmp568 = $tmp567;
// line 293
frost$core$Int64* $tmp569 = &param0->bucketCount;
frost$core$Int64 $tmp570 = *$tmp569;
int64_t $tmp571 = $tmp570.value;
frost$collections$HashMap$Entry** $tmp572 = ((frost$collections$HashMap$Entry**) frostZAlloc($tmp571 * 8));
frost$collections$HashMap$Entry*** $tmp573 = &param0->contents;
*$tmp573 = $tmp572;
// line 294
frost$core$Int64 $tmp574 = (frost$core$Int64) {0};
frost$core$Int64* $tmp575 = &param0->bucketCount;
frost$core$Int64 $tmp576 = *$tmp575;
frost$core$Bit $tmp577 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp578 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp574, $tmp576, $tmp577);
frost$core$Int64 $tmp579 = $tmp578.min;
*(&local2) = $tmp579;
frost$core$Int64 $tmp580 = $tmp578.max;
frost$core$Bit $tmp581 = $tmp578.inclusive;
bool $tmp582 = $tmp581.value;
frost$core$Int64 $tmp583 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp584 = frost$core$Int64$convert$R$frost$core$UInt64($tmp583);
if ($tmp582) goto block6; else goto block7;
block6:;
int64_t $tmp585 = $tmp579.value;
int64_t $tmp586 = $tmp580.value;
bool $tmp587 = $tmp585 <= $tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block3; else goto block4;
block7:;
int64_t $tmp590 = $tmp579.value;
int64_t $tmp591 = $tmp580.value;
bool $tmp592 = $tmp590 < $tmp591;
frost$core$Bit $tmp593 = (frost$core$Bit) {$tmp592};
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block3; else goto block4;
block3:;
// line 295
frost$collections$HashMap$Entry*** $tmp595 = &param0->contents;
frost$collections$HashMap$Entry** $tmp596 = *$tmp595;
frost$core$Int64 $tmp597 = *(&local2);
int64_t $tmp598 = $tmp597.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashMap$Entry*) NULL)));
frost$collections$HashMap$Entry* $tmp599 = $tmp596[$tmp598];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
$tmp596[$tmp598] = ((frost$collections$HashMap$Entry*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp600 = *(&local2);
int64_t $tmp601 = $tmp580.value;
int64_t $tmp602 = $tmp600.value;
int64_t $tmp603 = $tmp601 - $tmp602;
frost$core$Int64 $tmp604 = (frost$core$Int64) {$tmp603};
frost$core$UInt64 $tmp605 = frost$core$Int64$convert$R$frost$core$UInt64($tmp604);
if ($tmp582) goto block9; else goto block10;
block9:;
uint64_t $tmp606 = $tmp605.value;
uint64_t $tmp607 = $tmp584.value;
bool $tmp608 = $tmp606 >= $tmp607;
frost$core$Bit $tmp609 = (frost$core$Bit) {$tmp608};
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block8; else goto block4;
block10:;
uint64_t $tmp611 = $tmp605.value;
uint64_t $tmp612 = $tmp584.value;
bool $tmp613 = $tmp611 > $tmp612;
frost$core$Bit $tmp614 = (frost$core$Bit) {$tmp613};
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block8; else goto block4;
block8:;
int64_t $tmp616 = $tmp600.value;
int64_t $tmp617 = $tmp583.value;
int64_t $tmp618 = $tmp616 + $tmp617;
frost$core$Int64 $tmp619 = (frost$core$Int64) {$tmp618};
*(&local2) = $tmp619;
goto block3;
block4:;
// line 297
frost$core$Int64* $tmp620 = &param0->threshold;
frost$core$Int64 $tmp621 = *$tmp620;
frost$core$Int64 $tmp622 = (frost$core$Int64) {2};
int64_t $tmp623 = $tmp621.value;
int64_t $tmp624 = $tmp622.value;
int64_t $tmp625 = $tmp623 * $tmp624;
frost$core$Int64 $tmp626 = (frost$core$Int64) {$tmp625};
frost$core$Int64* $tmp627 = &param0->threshold;
*$tmp627 = $tmp626;
// line 298
frost$core$Int64 $tmp628 = (frost$core$Int64) {0};
frost$core$Int64* $tmp629 = &param0->_count;
*$tmp629 = $tmp628;
// line 299
frost$core$Int64 $tmp630 = (frost$core$Int64) {0};
frost$core$Int64 $tmp631 = *(&local1);
frost$core$Bit $tmp632 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp633 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp630, $tmp631, $tmp632);
frost$core$Int64 $tmp634 = $tmp633.min;
*(&local3) = $tmp634;
frost$core$Int64 $tmp635 = $tmp633.max;
frost$core$Bit $tmp636 = $tmp633.inclusive;
bool $tmp637 = $tmp636.value;
frost$core$Int64 $tmp638 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp639 = frost$core$Int64$convert$R$frost$core$UInt64($tmp638);
if ($tmp637) goto block14; else goto block15;
block14:;
int64_t $tmp640 = $tmp634.value;
int64_t $tmp641 = $tmp635.value;
bool $tmp642 = $tmp640 <= $tmp641;
frost$core$Bit $tmp643 = (frost$core$Bit) {$tmp642};
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block11; else goto block12;
block15:;
int64_t $tmp645 = $tmp634.value;
int64_t $tmp646 = $tmp635.value;
bool $tmp647 = $tmp645 < $tmp646;
frost$core$Bit $tmp648 = (frost$core$Bit) {$tmp647};
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block11; else goto block12;
block11:;
// line 300
frost$collections$HashMap$Entry** $tmp650 = *(&local0);
frost$core$Int64 $tmp651 = *(&local3);
int64_t $tmp652 = $tmp651.value;
frost$collections$HashMap$Entry* $tmp653 = $tmp650[$tmp652];
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$collections$HashMap$Entry* $tmp654 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local4) = $tmp653;
// line 301
goto block16;
block16:;
frost$collections$HashMap$Entry* $tmp655 = *(&local4);
frost$core$Bit $tmp656 = frost$core$Bit$init$builtin_bit($tmp655 != NULL);
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block17; else goto block18;
block17:;
// line 302
frost$collections$HashMap$Entry* $tmp658 = *(&local4);
frost$collections$Key** $tmp659 = &$tmp658->key;
frost$collections$Key* $tmp660 = *$tmp659;
frost$collections$HashMap$Entry* $tmp661 = *(&local4);
frost$core$Object** $tmp662 = &$tmp661->value;
frost$core$Object* $tmp663 = *$tmp662;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(param0, $tmp660, $tmp663);
// line 303
frost$collections$HashMap$Entry* $tmp664 = *(&local4);
frost$collections$HashMap$Entry** $tmp665 = &$tmp664->next;
frost$collections$HashMap$Entry* $tmp666 = *$tmp665;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$collections$HashMap$Entry* $tmp667 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local4) = $tmp666;
goto block16;
block18:;
frost$collections$HashMap$Entry* $tmp668 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
// unreffing e
*(&local4) = ((frost$collections$HashMap$Entry*) NULL);
goto block13;
block13:;
frost$core$Int64 $tmp669 = *(&local3);
int64_t $tmp670 = $tmp635.value;
int64_t $tmp671 = $tmp669.value;
int64_t $tmp672 = $tmp670 - $tmp671;
frost$core$Int64 $tmp673 = (frost$core$Int64) {$tmp672};
frost$core$UInt64 $tmp674 = frost$core$Int64$convert$R$frost$core$UInt64($tmp673);
if ($tmp637) goto block20; else goto block21;
block20:;
uint64_t $tmp675 = $tmp674.value;
uint64_t $tmp676 = $tmp639.value;
bool $tmp677 = $tmp675 >= $tmp676;
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677};
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block19; else goto block12;
block21:;
uint64_t $tmp680 = $tmp674.value;
uint64_t $tmp681 = $tmp639.value;
bool $tmp682 = $tmp680 > $tmp681;
frost$core$Bit $tmp683 = (frost$core$Bit) {$tmp682};
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block19; else goto block12;
block19:;
int64_t $tmp685 = $tmp669.value;
int64_t $tmp686 = $tmp638.value;
int64_t $tmp687 = $tmp685 + $tmp686;
frost$core$Int64 $tmp688 = (frost$core$Int64) {$tmp687};
*(&local3) = $tmp688;
goto block11;
block12:;
// line 306
frost$core$Int64 $tmp689 = (frost$core$Int64) {0};
frost$core$Int64 $tmp690 = *(&local1);
frost$core$Bit $tmp691 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp692 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp689, $tmp690, $tmp691);
frost$core$Int64 $tmp693 = $tmp692.min;
*(&local5) = $tmp693;
frost$core$Int64 $tmp694 = $tmp692.max;
frost$core$Bit $tmp695 = $tmp692.inclusive;
bool $tmp696 = $tmp695.value;
frost$core$Int64 $tmp697 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp698 = frost$core$Int64$convert$R$frost$core$UInt64($tmp697);
if ($tmp696) goto block25; else goto block26;
block25:;
int64_t $tmp699 = $tmp693.value;
int64_t $tmp700 = $tmp694.value;
bool $tmp701 = $tmp699 <= $tmp700;
frost$core$Bit $tmp702 = (frost$core$Bit) {$tmp701};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block22; else goto block23;
block26:;
int64_t $tmp704 = $tmp693.value;
int64_t $tmp705 = $tmp694.value;
bool $tmp706 = $tmp704 < $tmp705;
frost$core$Bit $tmp707 = (frost$core$Bit) {$tmp706};
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block22; else goto block23;
block22:;
// line 307
frost$collections$HashMap$Entry** $tmp709 = *(&local0);
frost$core$Int64 $tmp710 = *(&local5);
int64_t $tmp711 = $tmp710.value;
frost$collections$HashMap$Entry* $tmp712 = $tmp709[$tmp711];
frost$core$Bit $tmp713 = frost$core$Bit$init$builtin_bit($tmp712 != NULL);
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block27; else goto block28;
block27:;
// line 308
frost$collections$HashMap$Entry** $tmp715 = *(&local0);
frost$core$Int64 $tmp716 = *(&local5);
int64_t $tmp717 = $tmp716.value;
frost$collections$HashMap$Entry* $tmp718 = $tmp715[$tmp717];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
goto block28;
block28:;
goto block24;
block24:;
frost$core$Int64 $tmp719 = *(&local5);
int64_t $tmp720 = $tmp694.value;
int64_t $tmp721 = $tmp719.value;
int64_t $tmp722 = $tmp720 - $tmp721;
frost$core$Int64 $tmp723 = (frost$core$Int64) {$tmp722};
frost$core$UInt64 $tmp724 = frost$core$Int64$convert$R$frost$core$UInt64($tmp723);
if ($tmp696) goto block30; else goto block31;
block30:;
uint64_t $tmp725 = $tmp724.value;
uint64_t $tmp726 = $tmp698.value;
bool $tmp727 = $tmp725 >= $tmp726;
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block29; else goto block23;
block31:;
uint64_t $tmp730 = $tmp724.value;
uint64_t $tmp731 = $tmp698.value;
bool $tmp732 = $tmp730 > $tmp731;
frost$core$Bit $tmp733 = (frost$core$Bit) {$tmp732};
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block29; else goto block23;
block29:;
int64_t $tmp735 = $tmp719.value;
int64_t $tmp736 = $tmp697.value;
int64_t $tmp737 = $tmp735 + $tmp736;
frost$core$Int64 $tmp738 = (frost$core$Int64) {$tmp737};
*(&local5) = $tmp738;
goto block22;
block23:;
// line 311
frost$collections$HashMap$Entry** $tmp739 = *(&local0);
frostFree($tmp739);
goto block2;
block2:;
return;

}
frost$collections$Iterator* frost$collections$HashMap$get_keys$R$frost$collections$Iterator$LTfrost$collections$HashMap$K$GT(frost$collections$HashMap* param0) {

// line 317
frost$collections$HashMap$KeyIterator* $tmp740 = (frost$collections$HashMap$KeyIterator*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashMap$KeyIterator$class);
frost$collections$HashMap$KeyIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$KeyIterator$K$Cfrost$collections$HashMap$KeyIterator$V$GT($tmp740, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp740)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// unreffing REF($1:frost.collections.HashMap.KeyIterator<frost.collections.HashMap.K, frost.collections.HashMap.V>)
return ((frost$collections$Iterator*) $tmp740);

}
frost$collections$Iterator* frost$collections$HashMap$get_values$R$frost$collections$Iterator$LTfrost$collections$HashMap$V$GT(frost$collections$HashMap* param0) {

// line 322
frost$collections$HashMap$ValueIterator* $tmp741 = (frost$collections$HashMap$ValueIterator*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashMap$ValueIterator$class);
frost$collections$HashMap$ValueIterator$init$frost$collections$HashMap$LTfrost$collections$HashMap$ValueIterator$K$Cfrost$collections$HashMap$ValueIterator$V$GT($tmp741, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp741)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
// unreffing REF($1:frost.collections.HashMap.ValueIterator<frost.collections.HashMap.K, frost.collections.HashMap.V>)
return ((frost$collections$Iterator*) $tmp741);

}
frost$core$Int64 frost$collections$HashMap$get_count$R$frost$core$Int64(frost$collections$HashMap* param0) {

// line 327
frost$core$Int64* $tmp742 = &param0->_count;
frost$core$Int64 $tmp743 = *$tmp742;
return $tmp743;

}
frost$core$String* frost$collections$HashMap$convert$R$frost$core$String(frost$collections$HashMap* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$collections$HashMap$Entry* local3 = NULL;
// line 338
frost$core$MutableString* $tmp744 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp744);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$MutableString* $tmp745 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local0) = $tmp744;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// unreffing REF($1:frost.core.MutableString)
// line 339
frost$core$MutableString* $tmp746 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp746, &$s747);
// line 340
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s748));
frost$core$String* $tmp749 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local1) = &$s750;
// line 341
frost$core$Int64 $tmp751 = (frost$core$Int64) {0};
frost$core$Int64* $tmp752 = &param0->bucketCount;
frost$core$Int64 $tmp753 = *$tmp752;
frost$core$Bit $tmp754 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp755 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp751, $tmp753, $tmp754);
frost$core$Int64 $tmp756 = $tmp755.min;
*(&local2) = $tmp756;
frost$core$Int64 $tmp757 = $tmp755.max;
frost$core$Bit $tmp758 = $tmp755.inclusive;
bool $tmp759 = $tmp758.value;
frost$core$Int64 $tmp760 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp761 = frost$core$Int64$convert$R$frost$core$UInt64($tmp760);
if ($tmp759) goto block4; else goto block5;
block4:;
int64_t $tmp762 = $tmp756.value;
int64_t $tmp763 = $tmp757.value;
bool $tmp764 = $tmp762 <= $tmp763;
frost$core$Bit $tmp765 = (frost$core$Bit) {$tmp764};
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block1; else goto block2;
block5:;
int64_t $tmp767 = $tmp756.value;
int64_t $tmp768 = $tmp757.value;
bool $tmp769 = $tmp767 < $tmp768;
frost$core$Bit $tmp770 = (frost$core$Bit) {$tmp769};
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block1; else goto block2;
block1:;
// line 342
frost$collections$HashMap$Entry*** $tmp772 = &param0->contents;
frost$collections$HashMap$Entry** $tmp773 = *$tmp772;
frost$core$Int64 $tmp774 = *(&local2);
int64_t $tmp775 = $tmp774.value;
frost$collections$HashMap$Entry* $tmp776 = $tmp773[$tmp775];
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$collections$HashMap$Entry* $tmp777 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
*(&local3) = $tmp776;
// line 343
goto block6;
block6:;
frost$collections$HashMap$Entry* $tmp778 = *(&local3);
frost$core$Bit $tmp779 = frost$core$Bit$init$builtin_bit($tmp778 != NULL);
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block7; else goto block8;
block7:;
// line 344
frost$core$MutableString* $tmp781 = *(&local0);
frost$core$String* $tmp782 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp781, $tmp782);
// line 345
frost$collections$HashMap$Entry* $tmp783 = *(&local3);
frost$collections$Key** $tmp784 = &$tmp783->key;
frost$collections$Key* $tmp785 = *$tmp784;
frost$core$Bit $tmp786 = frost$core$Bit$init$builtin_bit(true);
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block9; else goto block11;
block9:;
// line 346
frost$core$MutableString* $tmp788 = *(&local0);
frost$collections$HashMap$Entry* $tmp789 = *(&local3);
frost$collections$Key** $tmp790 = &$tmp789->key;
frost$collections$Key* $tmp791 = *$tmp790;
frost$core$MutableString$append$frost$core$Object($tmp788, ((frost$core$Object*) $tmp791));
goto block10;
block11:;
// line 1
// line 349
frost$core$MutableString* $tmp792 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp792, &$s793);
goto block10;
block10:;
// line 351
frost$core$MutableString* $tmp794 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp794, &$s795);
// line 352
frost$collections$HashMap$Entry* $tmp796 = *(&local3);
frost$core$Object** $tmp797 = &$tmp796->value;
frost$core$Object* $tmp798 = *$tmp797;
frost$core$Bit $tmp799 = frost$core$Bit$init$builtin_bit(true);
bool $tmp800 = $tmp799.value;
if ($tmp800) goto block12; else goto block14;
block12:;
// line 353
frost$core$MutableString* $tmp801 = *(&local0);
frost$collections$HashMap$Entry* $tmp802 = *(&local3);
frost$core$Object** $tmp803 = &$tmp802->value;
frost$core$Object* $tmp804 = *$tmp803;
frost$core$MutableString$append$frost$core$Object($tmp801, $tmp804);
goto block13;
block14:;
// line 1
// line 356
frost$core$MutableString* $tmp805 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp805, &$s806);
goto block13;
block13:;
// line 358
frost$collections$HashMap$Entry* $tmp807 = *(&local3);
frost$collections$HashMap$Entry** $tmp808 = &$tmp807->next;
frost$collections$HashMap$Entry* $tmp809 = *$tmp808;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$collections$HashMap$Entry* $tmp810 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local3) = $tmp809;
// line 359
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s811));
frost$core$String* $tmp812 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local1) = &$s813;
goto block6;
block8:;
frost$collections$HashMap$Entry* $tmp814 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
// unreffing entry
*(&local3) = ((frost$collections$HashMap$Entry*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp815 = *(&local2);
int64_t $tmp816 = $tmp757.value;
int64_t $tmp817 = $tmp815.value;
int64_t $tmp818 = $tmp816 - $tmp817;
frost$core$Int64 $tmp819 = (frost$core$Int64) {$tmp818};
frost$core$UInt64 $tmp820 = frost$core$Int64$convert$R$frost$core$UInt64($tmp819);
if ($tmp759) goto block16; else goto block17;
block16:;
uint64_t $tmp821 = $tmp820.value;
uint64_t $tmp822 = $tmp761.value;
bool $tmp823 = $tmp821 >= $tmp822;
frost$core$Bit $tmp824 = (frost$core$Bit) {$tmp823};
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block15; else goto block2;
block17:;
uint64_t $tmp826 = $tmp820.value;
uint64_t $tmp827 = $tmp761.value;
bool $tmp828 = $tmp826 > $tmp827;
frost$core$Bit $tmp829 = (frost$core$Bit) {$tmp828};
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block15; else goto block2;
block15:;
int64_t $tmp831 = $tmp815.value;
int64_t $tmp832 = $tmp760.value;
int64_t $tmp833 = $tmp831 + $tmp832;
frost$core$Int64 $tmp834 = (frost$core$Int64) {$tmp833};
*(&local2) = $tmp834;
goto block1;
block2:;
// line 362
frost$core$MutableString* $tmp835 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp835, &$s836);
// line 363
frost$core$MutableString* $tmp837 = *(&local0);
frost$core$String* $tmp838 = frost$core$MutableString$finish$R$frost$core$String($tmp837);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
// unreffing REF($183:frost.core.String)
frost$core$String* $tmp839 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp840 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp838;

}

