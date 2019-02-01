#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/FixedArray/FixedArrayIterator.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$collections$Iterator* org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT$shim(org$frostlang$frostc$FixedArray* p0) {
    frost$collections$Iterator* result = org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T$shim(org$frostlang$frostc$FixedArray* p0, frost$core$Int64 p1) {
    frost$core$Object* result = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(p0, p1);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$FixedArray$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } org$frostlang$frostc$FixedArray$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlang$frostc$FixedArray$_frost$collections$Iterable, { org$frostlang$frostc$FixedArray$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[13]; } org$frostlang$frostc$FixedArray$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frostc$FixedArray$_frost$collections$CollectionView, { org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

static frost$core$String $s1;
org$frostlang$frostc$FixedArray$class_type org$frostlang$frostc$FixedArray$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$FixedArray$_frost$collections$ListView, { org$frostlang$frostc$FixedArray$get_asString$R$frost$core$String, org$frostlang$frostc$FixedArray$cleanup, org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T$shim, org$frostlang$frostc$FixedArray$get_count$R$frost$core$Int64, org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT$shim} };

typedef frost$core$Int64 (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn21)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn47)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn94)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn149)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn167)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn193)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn197)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn202)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79", 31, 6209144956536894567, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 16, -8229053722048301132, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x54", 126, -7238361873099462339, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 16, -8229053722048301132, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void org$frostlang$frostc$FixedArray$init(org$frostlang$frostc$FixedArray* param0) {

// line 39
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->_count;
*$tmp3 = $tmp2;
// line 40
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
int64_t $tmp5 = $tmp4.value;
frost$core$Object** $tmp6 = ((frost$core$Object**) frostAlloc($tmp5 * 8));
frost$core$Object*** $tmp7 = &param0->data;
*$tmp7 = $tmp6;
return;

}
void org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT(org$frostlang$frostc$FixedArray* param0, frost$collections$ListView* param1) {

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
frost$core$Object** $tmp16 = ((frost$core$Object**) frostAlloc($tmp15 * 8));
frost$core$Object*** $tmp17 = &param0->data;
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
frost$core$UInt64 $tmp30 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp29);
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
frost$core$Object*** $tmp41 = &param0->data;
frost$core$Object** $tmp42 = *$tmp41;
frost$core$Int64 $tmp43 = *(&local0);
frost$core$Int64 $tmp44 = *(&local0);
ITable* $tmp45 = param1->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Object* $tmp48 = $tmp46(param1, $tmp44);
int64_t $tmp49 = $tmp43.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp48);
frost$core$Object* $tmp50 = $tmp42[$tmp49];
frost$core$Frost$unref$frost$core$Object$Q($tmp50);
$tmp42[$tmp49] = $tmp48;
frost$core$Frost$unref$frost$core$Object$Q($tmp48);
goto block3;
block3:;
frost$core$Int64 $tmp51 = *(&local0);
int64_t $tmp52 = $tmp26.value;
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52 - $tmp53;
frost$core$Int64 $tmp55 = (frost$core$Int64) {$tmp54};
frost$core$UInt64 $tmp56 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp55);
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
void org$frostlang$frostc$FixedArray$init$frost$unsafe$Pointer$LTorg$frostlang$frostc$FixedArray$T$GT$frost$core$Int64(org$frostlang$frostc$FixedArray* param0, frost$core$Object** param1, frost$core$Int64 param2) {

// line 53
frost$core$Object*** $tmp71 = &param0->data;
*$tmp71 = param1;
// line 54
frost$core$Int64* $tmp72 = &param0->_count;
*$tmp72 = param2;
return;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(frost$collections$Array* param0) {

// line 67
frost$core$Object*** $tmp73 = &param0->data;
frost$core$Object** $tmp74 = *$tmp73;
frost$core$Int64* $tmp75 = &param0->capacity;
frost$core$Int64 $tmp76 = *$tmp75;
frost$core$Int64* $tmp77 = &param0->_count;
frost$core$Int64 $tmp78 = *$tmp77;
int64_t $tmp79 = $tmp76.value;
int64_t $tmp80 = $tmp78.value;
frost$core$Object** $tmp81 = (frost$core$Object**) frostRealloc($tmp74, $tmp79 * 8, $tmp80 * 8);
frost$core$Object*** $tmp82 = &param0->data;
*$tmp82 = $tmp81;
// line 68
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp83 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp83);
frost$core$Class** $tmp84 = &((frost$core$Object*) $tmp83)->$class;
frost$core$Class* $tmp85 = *$tmp84;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Class** $tmp86 = &((frost$core$Object*) param0)->$class;
frost$core$Class* $tmp87 = *$tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Class** $tmp88 = &((frost$core$Object*) param0)->$class;
*$tmp88 = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// line 69
frost$core$Int64 $tmp89 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64* $tmp90 = &param0->capacity;
*$tmp90 = $tmp89;
// line 70
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) ((frost$core$Object*) param0))));
return ((org$frostlang$frostc$FixedArray*) ((frost$core$Object*) param0));

}
void org$frostlang$frostc$FixedArray$cleanup(org$frostlang$frostc$FixedArray* param0) {

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
frost$core$UInt64 $tmp103 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp102);
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
frost$core$Object*** $tmp114 = &param0->data;
frost$core$Object** $tmp115 = *$tmp114;
frost$core$Int64 $tmp116 = *(&local0);
int64_t $tmp117 = $tmp116.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$core$Object* $tmp118 = $tmp115[$tmp117];
frost$core$Frost$unref$frost$core$Object$Q($tmp118);
$tmp115[$tmp117] = ((frost$core$Object*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp119 = *(&local0);
int64_t $tmp120 = $tmp99.value;
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120 - $tmp121;
frost$core$Int64 $tmp123 = (frost$core$Int64) {$tmp122};
frost$core$UInt64 $tmp124 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp123);
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
frost$core$Object*** $tmp139 = &param0->data;
frost$core$Object** $tmp140 = *$tmp139;
frostFree($tmp140);
// line 74
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Object* org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(org$frostlang$frostc$FixedArray* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp141 = (frost$core$Int64) {0};
int64_t $tmp142 = param1.value;
int64_t $tmp143 = $tmp141.value;
bool $tmp144 = $tmp142 >= $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block3; else goto block2;
block3:;
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
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp156 = (frost$core$Int64) {82};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s157, $tmp156, &$s158);
abort(); // unreachable
block1:;
// line 83
frost$core$Int64 $tmp159 = (frost$core$Int64) {0};
int64_t $tmp160 = param1.value;
int64_t $tmp161 = $tmp159.value;
bool $tmp162 = $tmp160 >= $tmp161;
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162};
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block4; else goto block5;
block4:;
ITable* $tmp165 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp165->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp165 = $tmp165->next;
}
$fn167 $tmp166 = $tmp165->methods[0];
frost$core$Int64 $tmp168 = $tmp166(((frost$collections$CollectionView*) param0));
int64_t $tmp169 = param1.value;
int64_t $tmp170 = $tmp168.value;
bool $tmp171 = $tmp169 < $tmp170;
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171};
*(&local0) = $tmp172;
goto block6;
block5:;
*(&local0) = $tmp163;
goto block6;
block6:;
frost$core$Bit $tmp173 = *(&local0);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp175 = (frost$core$Int64) {83};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s176, $tmp175);
abort(); // unreachable
block7:;
// line 84
frost$core$Object*** $tmp177 = &param0->data;
frost$core$Object** $tmp178 = *$tmp177;
int64_t $tmp179 = param1.value;
frost$core$Object* $tmp180 = $tmp178[$tmp179];
frost$core$Frost$ref$frost$core$Object$Q($tmp180);
return $tmp180;

}
frost$core$Int64 org$frostlang$frostc$FixedArray$get_count$R$frost$core$Int64(org$frostlang$frostc$FixedArray* param0) {

// line 89
frost$core$Int64* $tmp181 = &param0->_count;
frost$core$Int64 $tmp182 = *$tmp181;
return $tmp182;

}
frost$collections$Iterator* org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT(org$frostlang$frostc$FixedArray* param0) {

// line 94
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$FixedArray$FixedArrayIterator));
org$frostlang$frostc$FixedArray$FixedArrayIterator* $tmp183 = (org$frostlang$frostc$FixedArray$FixedArrayIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$FixedArray$FixedArrayIterator$class);
org$frostlang$frostc$FixedArray$FixedArrayIterator$init$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$FixedArrayIterator$T$GT($tmp183, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp183)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
return ((frost$collections$Iterator*) $tmp183);

}
frost$core$String* org$frostlang$frostc$FixedArray$get_asString$R$frost$core$String(org$frostlang$frostc$FixedArray* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 99
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp184 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp184);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$MutableString* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local0) = $tmp184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// line 100
frost$core$MutableString* $tmp186 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp186, &$s187);
// line 101
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s188));
frost$core$String* $tmp189 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local1) = &$s190;
// line 102
ITable* $tmp191 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[0];
frost$collections$Iterator* $tmp194 = $tmp192(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp195 = $tmp194->$class->itable;
while ($tmp195->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp195 = $tmp195->next;
}
$fn197 $tmp196 = $tmp195->methods[0];
frost$core$Bit $tmp198 = $tmp196($tmp194);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp200 = $tmp194->$class->itable;
while ($tmp200->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp200 = $tmp200->next;
}
$fn202 $tmp201 = $tmp200->methods[1];
frost$core$Object* $tmp203 = $tmp201($tmp194);
frost$core$Frost$ref$frost$core$Object$Q($tmp203);
frost$core$Object* $tmp204 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp204);
*(&local2) = $tmp203;
// line 103
frost$core$MutableString* $tmp205 = *(&local0);
frost$core$String* $tmp206 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp205, $tmp206);
// line 104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s207));
frost$core$String* $tmp208 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local1) = &$s209;
// line 105
frost$core$Object* $tmp210 = *(&local2);
frost$core$Bit $tmp211 = frost$core$Bit$init$builtin_bit(true);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block4; else goto block6;
block4:;
// line 106
frost$core$MutableString* $tmp213 = *(&local0);
frost$core$Object* $tmp214 = *(&local2);
frost$core$MutableString$append$frost$core$Object($tmp213, $tmp214);
goto block5;
block6:;
// line 1
// line 109
frost$core$MutableString* $tmp215 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp215, &$s216);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp203);
frost$core$Object* $tmp217 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp217);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// line 112
frost$core$MutableString* $tmp218 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp218, &$s219);
// line 113
frost$core$MutableString* $tmp220 = *(&local0);
frost$core$String* $tmp221 = frost$core$MutableString$finish$R$frost$core$String($tmp220);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$String* $tmp222 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp223 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp221;

}

