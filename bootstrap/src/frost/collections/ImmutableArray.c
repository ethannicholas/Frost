#include "frost/collections/ImmutableArray.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Int64 frost$collections$ImmutableArray$get_count$R$frost$core$Int64$shim(frost$collections$ImmutableArray* p0) {
    frost$core$Int64 result = frost$collections$ImmutableArray$get_count$R$frost$core$Int64(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT$shim(frost$collections$ImmutableArray* p0) {
    frost$collections$Iterator* result = frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T$shim(frost$collections$ImmutableArray* p0, frost$core$Int64 p1) {
    frost$core$Immutable* result = frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T(p0, p1);

    return ((frost$core$Object*) result);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$String* frost$collections$ImmutableArray$convert$R$frost$core$String$shim(frost$collections$ImmutableArray* p0) {
    frost$core$String* result = frost$collections$ImmutableArray$convert$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$collections$ImmutableArray$cleanup$shim(frost$collections$ImmutableArray* p0) {
    frost$collections$ImmutableArray$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$collections$ImmutableArray$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$collections$ImmutableArray$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$ImmutableArray$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$ImmutableArray$_frost$collections$CollectionView, { frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$collections$ImmutableArray$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$ImmutableArray$_frost$collections$Iterable, { frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

static frost$core$String $s1;
frost$collections$ImmutableArray$class_type frost$collections$ImmutableArray$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$collections$ImmutableArray$_frost$collections$ListView, { frost$collections$ImmutableArray$convert$R$frost$core$String$shim, frost$collections$ImmutableArray$cleanup$shim, frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T$shim, frost$collections$ImmutableArray$get_count$R$frost$core$Int64$shim, frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT$shim} };

typedef frost$core$Int64 (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn21)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn47)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn94)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn149)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn168)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn194)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn198)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn203)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 20, -475546343703461448, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x54", 128, -109635805114273339, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 20, -475546343703461448, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void frost$collections$ImmutableArray$init(frost$collections$ImmutableArray* param0) {

// line 39
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->_count;
*$tmp3 = $tmp2;
// line 40
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
int64_t $tmp5 = $tmp4.value;
frost$core$Immutable** $tmp6 = ((frost$core$Immutable**) frostAlloc($tmp5 * 8));
frost$core$Immutable*** $tmp7 = &param0->data;
*$tmp7 = $tmp6;
return;

}
void frost$collections$ImmutableArray$init$frost$collections$ListView$LTfrost$collections$ImmutableArray$T$GT(frost$collections$ImmutableArray* param0, frost$collections$ListView* param1) {

frost$core$Int64 local0;
// line 44
ITable* $tmp8 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Int64 $tmp11 = $tmp9(((frost$collections$CollectionView*) param1));
frost$core$Int64* $tmp12 = &param0->_count;
*$tmp12 = $tmp11;
// line 45
frost$core$Int64* $tmp13 = &param0->_count;
frost$core$Int64 $tmp14 = *$tmp13;
int64_t $tmp15 = $tmp14.value;
frost$core$Immutable** $tmp16 = ((frost$core$Immutable**) frostAlloc($tmp15 * 8));
frost$core$Immutable*** $tmp17 = &param0->data;
*$tmp17 = $tmp16;
// line 46
frost$core$Int64 $tmp18 = (frost$core$Int64) {0};
ITable* $tmp19 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp19 = $tmp19->next;
}
$fn21 $tmp20 = $tmp19->methods[0];
frost$core$Int64 $tmp22 = $tmp20(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp23 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp24 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp18, $tmp22, $tmp23);
frost$core$Int64 $tmp25 = $tmp24.min;
*(&local0) = $tmp25;
frost$core$Int64 $tmp26 = $tmp24.max;
frost$core$Bit $tmp27 = $tmp24.inclusive;
bool $tmp28 = $tmp27.value;
frost$core$Int64 $tmp29 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp30 = frost$core$Int64$convert$R$frost$core$UInt64($tmp29);
if ($tmp28) goto block4; else goto block5;
block4:;
int64_t $tmp31 = $tmp25.value;
int64_t $tmp32 = $tmp26.value;
bool $tmp33 = $tmp31 <= $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block1; else goto block2;
block5:;
int64_t $tmp36 = $tmp25.value;
int64_t $tmp37 = $tmp26.value;
bool $tmp38 = $tmp36 < $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block1; else goto block2;
block1:;
// line 47
frost$core$Immutable*** $tmp41 = &param0->data;
frost$core$Immutable** $tmp42 = *$tmp41;
frost$core$Int64 $tmp43 = *(&local0);
frost$core$Int64 $tmp44 = *(&local0);
ITable* $tmp45 = param1->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Object* $tmp48 = $tmp46(param1, $tmp44);
int64_t $tmp49 = $tmp43.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) $tmp48)));
frost$core$Immutable* $tmp50 = $tmp42[$tmp49];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
$tmp42[$tmp49] = ((frost$core$Immutable*) $tmp48);
frost$core$Frost$unref$frost$core$Object$Q($tmp48);
// unreffing REF($51:frost.collections.ListView.T)
goto block3;
block3:;
frost$core$Int64 $tmp51 = *(&local0);
int64_t $tmp52 = $tmp26.value;
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52 - $tmp53;
frost$core$Int64 $tmp55 = (frost$core$Int64) {$tmp54};
frost$core$UInt64 $tmp56 = frost$core$Int64$convert$R$frost$core$UInt64($tmp55);
if ($tmp28) goto block7; else goto block8;
block7:;
uint64_t $tmp57 = $tmp56.value;
uint64_t $tmp58 = $tmp30.value;
bool $tmp59 = $tmp57 >= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block6; else goto block2;
block8:;
uint64_t $tmp62 = $tmp56.value;
uint64_t $tmp63 = $tmp30.value;
bool $tmp64 = $tmp62 > $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block6; else goto block2;
block6:;
int64_t $tmp67 = $tmp51.value;
int64_t $tmp68 = $tmp29.value;
int64_t $tmp69 = $tmp67 + $tmp68;
frost$core$Int64 $tmp70 = (frost$core$Int64) {$tmp69};
*(&local0) = $tmp70;
goto block1;
block2:;
return;

}
void frost$collections$ImmutableArray$init$frost$unsafe$Pointer$LTfrost$collections$ImmutableArray$T$GT$frost$core$Int64(frost$collections$ImmutableArray* param0, frost$core$Immutable** param1, frost$core$Int64 param2) {

// line 53
frost$core$Immutable*** $tmp71 = &param0->data;
*$tmp71 = param1;
// line 54
frost$core$Int64* $tmp72 = &param0->_count;
*$tmp72 = param2;
return;

}
frost$collections$ImmutableArray* frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT(frost$collections$Array* param0) {

// line 67
frost$core$Object*** $tmp73 = &param0->data;
frost$core$Object** $tmp74 = *$tmp73;
frost$core$Int64* $tmp75 = &param0->capacity;
frost$core$Int64 $tmp76 = *$tmp75;
frost$core$Int64* $tmp77 = &param0->_count;
frost$core$Int64 $tmp78 = *$tmp77;
int64_t $tmp79 = $tmp76.value;
int64_t $tmp80 = $tmp78.value;
frost$core$Immutable** $tmp81 = (frost$core$Immutable**) frostRealloc(((frost$core$Immutable**) $tmp74), $tmp79 * 8, $tmp80 * 8);
frost$core$Object*** $tmp82 = &param0->data;
*$tmp82 = ((frost$core$Object**) $tmp81);
// line 68
frost$collections$ImmutableArray* $tmp83 = (frost$collections$ImmutableArray*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$ImmutableArray$class);
frost$collections$ImmutableArray$init($tmp83);
frost$core$Class** $tmp84 = &((frost$core$Object*) $tmp83)->$class;
frost$core$Class* $tmp85 = *$tmp84;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Class** $tmp86 = &((frost$core$Object*) param0)->$class;
frost$core$Class* $tmp87 = *$tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Class** $tmp88 = &((frost$core$Object*) param0)->$class;
*$tmp88 = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing REF($20:frost.collections.ImmutableArray<frost.collections.ImmutableArray.T>)
// line 69
frost$core$Int64 $tmp89 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64* $tmp90 = &param0->capacity;
*$tmp90 = $tmp89;
// line 70
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ImmutableArray*) ((frost$core$Object*) param0))));
return ((frost$collections$ImmutableArray*) ((frost$core$Object*) param0));

}
void frost$collections$ImmutableArray$cleanup(frost$collections$ImmutableArray* param0) {

frost$core$Int64 local0;
// line 75
frost$core$Int64 $tmp91 = (frost$core$Int64) {0};
ITable* $tmp92 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
frost$core$Int64 $tmp95 = $tmp93(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp96 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp97 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp91, $tmp95, $tmp96);
frost$core$Int64 $tmp98 = $tmp97.min;
*(&local0) = $tmp98;
frost$core$Int64 $tmp99 = $tmp97.max;
frost$core$Bit $tmp100 = $tmp97.inclusive;
bool $tmp101 = $tmp100.value;
frost$core$Int64 $tmp102 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp103 = frost$core$Int64$convert$R$frost$core$UInt64($tmp102);
if ($tmp101) goto block4; else goto block5;
block4:;
int64_t $tmp104 = $tmp98.value;
int64_t $tmp105 = $tmp99.value;
bool $tmp106 = $tmp104 <= $tmp105;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block2;
block5:;
int64_t $tmp109 = $tmp98.value;
int64_t $tmp110 = $tmp99.value;
bool $tmp111 = $tmp109 < $tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block1; else goto block2;
block1:;
// line 76
frost$core$Immutable*** $tmp114 = &param0->data;
frost$core$Immutable** $tmp115 = *$tmp114;
frost$core$Int64 $tmp116 = *(&local0);
int64_t $tmp117 = $tmp116.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable* $tmp118 = $tmp115[$tmp117];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
$tmp115[$tmp117] = ((frost$core$Immutable*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp119 = *(&local0);
int64_t $tmp120 = $tmp99.value;
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120 - $tmp121;
frost$core$Int64 $tmp123 = (frost$core$Int64) {$tmp122};
frost$core$UInt64 $tmp124 = frost$core$Int64$convert$R$frost$core$UInt64($tmp123);
if ($tmp101) goto block7; else goto block8;
block7:;
uint64_t $tmp125 = $tmp124.value;
uint64_t $tmp126 = $tmp103.value;
bool $tmp127 = $tmp125 >= $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block6; else goto block2;
block8:;
uint64_t $tmp130 = $tmp124.value;
uint64_t $tmp131 = $tmp103.value;
bool $tmp132 = $tmp130 > $tmp131;
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132};
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block6; else goto block2;
block6:;
int64_t $tmp135 = $tmp119.value;
int64_t $tmp136 = $tmp102.value;
int64_t $tmp137 = $tmp135 + $tmp136;
frost$core$Int64 $tmp138 = (frost$core$Int64) {$tmp137};
*(&local0) = $tmp138;
goto block1;
block2:;
// line 78
frost$core$Immutable*** $tmp139 = &param0->data;
frost$core$Immutable** $tmp140 = *$tmp139;
frostFree($tmp140);
// line 74
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
frost$core$Immutable* frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T(frost$collections$ImmutableArray* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Int64 $tmp141 = (frost$core$Int64) {0};
int64_t $tmp142 = param1.value;
int64_t $tmp143 = $tmp141.value;
bool $tmp144 = $tmp142 >= $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block1; else goto block2;
block1:;
ITable* $tmp147 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[0];
frost$core$Int64 $tmp150 = $tmp148(((frost$collections$CollectionView*) param0));
int64_t $tmp151 = param1.value;
int64_t $tmp152 = $tmp150.value;
bool $tmp153 = $tmp151 < $tmp152;
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153};
*(&local0) = $tmp154;
goto block3;
block2:;
*(&local0) = $tmp145;
goto block3;
block3:;
frost$core$Bit $tmp155 = *(&local0);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp157 = (frost$core$Int64) {82};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s158, $tmp157, &$s159);
abort(); // unreachable
block4:;
// line 83
frost$core$Int64 $tmp160 = (frost$core$Int64) {0};
int64_t $tmp161 = param1.value;
int64_t $tmp162 = $tmp160.value;
bool $tmp163 = $tmp161 >= $tmp162;
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block6; else goto block7;
block6:;
ITable* $tmp166 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
frost$core$Int64 $tmp169 = $tmp167(((frost$collections$CollectionView*) param0));
int64_t $tmp170 = param1.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 < $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
*(&local1) = $tmp173;
goto block8;
block7:;
*(&local1) = $tmp164;
goto block8;
block8:;
frost$core$Bit $tmp174 = *(&local1);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp176 = (frost$core$Int64) {83};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s177, $tmp176);
abort(); // unreachable
block9:;
// line 84
frost$core$Immutable*** $tmp178 = &param0->data;
frost$core$Immutable** $tmp179 = *$tmp178;
int64_t $tmp180 = param1.value;
frost$core$Immutable* $tmp181 = $tmp179[$tmp180];
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
return $tmp181;

}
frost$core$Int64 frost$collections$ImmutableArray$get_count$R$frost$core$Int64(frost$collections$ImmutableArray* param0) {

// line 89
frost$core$Int64* $tmp182 = &param0->_count;
frost$core$Int64 $tmp183 = *$tmp182;
return $tmp183;

}
frost$collections$Iterator* frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT(frost$collections$ImmutableArray* param0) {

// line 94
frost$collections$ImmutableArray$ImmutableArrayIterator* $tmp184 = (frost$collections$ImmutableArray$ImmutableArrayIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ImmutableArray$ImmutableArrayIterator$class);
frost$collections$ImmutableArray$ImmutableArrayIterator$init$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp184, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp184)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing REF($1:frost.collections.ImmutableArray.ImmutableArrayIterator<frost.collections.ImmutableArray.T>)
return ((frost$collections$Iterator*) $tmp184);

}
frost$core$String* frost$collections$ImmutableArray$convert$R$frost$core$String(frost$collections$ImmutableArray* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Immutable* local2 = NULL;
// line 99
frost$core$MutableString* $tmp185 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp185);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$MutableString* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local0) = $tmp185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing REF($1:frost.core.MutableString)
// line 100
frost$core$MutableString* $tmp187 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp187, &$s188);
// line 101
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s189));
frost$core$String* $tmp190 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local1) = &$s191;
// line 102
ITable* $tmp192 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp192->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp192 = $tmp192->next;
}
$fn194 $tmp193 = $tmp192->methods[0];
frost$collections$Iterator* $tmp195 = $tmp193(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp196 = $tmp195->$class->itable;
while ($tmp196->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp196 = $tmp196->next;
}
$fn198 $tmp197 = $tmp196->methods[0];
frost$core$Bit $tmp199 = $tmp197($tmp195);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Immutable*) NULL);
ITable* $tmp201 = $tmp195->$class->itable;
while ($tmp201->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp201 = $tmp201->next;
}
$fn203 $tmp202 = $tmp201->methods[1];
frost$core$Object* $tmp204 = $tmp202($tmp195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) $tmp204)));
frost$core$Immutable* $tmp205 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local2) = ((frost$core$Immutable*) $tmp204);
// line 103
frost$core$MutableString* $tmp206 = *(&local0);
frost$core$String* $tmp207 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp206, $tmp207);
// line 104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s208));
frost$core$String* $tmp209 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local1) = &$s210;
// line 105
frost$core$Immutable* $tmp211 = *(&local2);
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit(true);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block4; else goto block6;
block4:;
// line 106
frost$core$MutableString* $tmp214 = *(&local0);
frost$core$Immutable* $tmp215 = *(&local2);
frost$core$MutableString$append$frost$core$Object($tmp214, ((frost$core$Object*) $tmp215));
goto block5;
block6:;
// line 1
// line 109
frost$core$MutableString* $tmp216 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp216, &$s217);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp204);
// unreffing REF($39:frost.collections.Iterator.T)
frost$core$Immutable* $tmp218 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing v
*(&local2) = ((frost$core$Immutable*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// unreffing REF($28:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 112
frost$core$MutableString* $tmp219 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp219, &$s220);
// line 113
frost$core$MutableString* $tmp221 = *(&local0);
frost$core$String* $tmp222 = frost$core$MutableString$finish$R$frost$core$String($tmp221);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($91:frost.core.String)
frost$core$String* $tmp223 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp224 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp222;

}

