#include "frost/collections/ListView/CombinationIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/List.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/ListWriter.h"
#include "frost/collections/Iterable.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$shim(frost$collections$ListView$CombinationIterator* p0) {
    frost$collections$ListView* result = frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ListView$CombinationIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ListView$CombinationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ListView$CombinationIterator$class_type frost$collections$ListView$CombinationIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$CombinationIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ListView$CombinationIterator$cleanup, frost$collections$ListView$CombinationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$shim} };

typedef frost$core$Int64 (*$fn14)(frost$collections$CollectionView*);
typedef void (*$fn56)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$core$Int64 (*$fn82)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn107)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn113)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn123)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn159)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn172)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn184)(frost$collections$CollectionView*);
typedef void (*$fn204)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Int64 (*$fn211)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn233)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn240)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn244)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn249)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn257)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn267)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn305)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn318)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72", 46, 1395506112616240560, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x6c\x69\x73\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 183, -8968377119306831128, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 162, -6631964047809646503, NULL };

void frost$collections$ListView$CombinationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$frost$core$Int64(frost$collections$ListView$CombinationIterator* param0, frost$collections$ListView* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
// line 110
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->r;
*$tmp3 = $tmp2;
// line 112
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Int64* $tmp5 = &param0->index;
*$tmp5 = $tmp4;
frost$core$Int64 $tmp6 = (frost$core$Int64) {0};
int64_t $tmp7 = param2.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 >= $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block3; else goto block2;
block3:;
ITable* $tmp12 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
frost$core$Int64 $tmp15 = $tmp13(((frost$collections$CollectionView*) param1));
int64_t $tmp16 = param2.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 <= $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block1:;
// line 116
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ListView** $tmp24 = &param0->list;
frost$collections$ListView* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$collections$ListView** $tmp26 = &param0->list;
*$tmp26 = param1;
// line 117
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp27 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$core$Int64($tmp27, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$List*) $tmp27)));
frost$collections$List** $tmp28 = &param0->choices;
frost$collections$List* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$collections$List** $tmp30 = &param0->choices;
*$tmp30 = ((frost$collections$List*) $tmp27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// line 118
frost$core$Int64 $tmp31 = (frost$core$Int64) {0};
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp33 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp31, param2, $tmp32);
frost$core$Int64 $tmp34 = $tmp33.min;
*(&local0) = $tmp34;
frost$core$Int64 $tmp35 = $tmp33.max;
frost$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
frost$core$Int64 $tmp38 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp39 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp38);
if ($tmp37) goto block7; else goto block8;
block7:;
int64_t $tmp40 = $tmp34.value;
int64_t $tmp41 = $tmp35.value;
bool $tmp42 = $tmp40 <= $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block4; else goto block5;
block8:;
int64_t $tmp45 = $tmp34.value;
int64_t $tmp46 = $tmp35.value;
bool $tmp47 = $tmp45 < $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block4; else goto block5;
block4:;
// line 119
frost$collections$List** $tmp50 = &param0->choices;
frost$collections$List* $tmp51 = *$tmp50;
frost$core$Int64 $tmp52 = *(&local0);
frost$core$Int64$wrapper* $tmp53;
$tmp53 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp53->value = $tmp52;
ITable* $tmp54 = ((frost$collections$CollectionWriter*) $tmp51)->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
$tmp55(((frost$collections$CollectionWriter*) $tmp51), ((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
goto block6;
block6:;
frost$core$Int64 $tmp57 = *(&local0);
int64_t $tmp58 = $tmp35.value;
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58 - $tmp59;
frost$core$Int64 $tmp61 = (frost$core$Int64) {$tmp60};
frost$core$UInt64 $tmp62 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp61);
if ($tmp37) goto block10; else goto block11;
block10:;
uint64_t $tmp63 = $tmp62.value;
uint64_t $tmp64 = $tmp39.value;
bool $tmp65 = $tmp63 >= $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block9; else goto block5;
block11:;
uint64_t $tmp68 = $tmp62.value;
uint64_t $tmp69 = $tmp39.value;
bool $tmp70 = $tmp68 > $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block9; else goto block5;
block9:;
int64_t $tmp73 = $tmp57.value;
int64_t $tmp74 = $tmp38.value;
int64_t $tmp75 = $tmp73 + $tmp74;
frost$core$Int64 $tmp76 = (frost$core$Int64) {$tmp75};
*(&local0) = $tmp76;
goto block4;
block5:;
return;

}
frost$core$Bit frost$collections$ListView$CombinationIterator$get_done$R$frost$core$Bit(frost$collections$ListView$CombinationIterator* param0) {

frost$core$Int64 local0;
// line 125
frost$core$Int64 $tmp77 = (frost$core$Int64) {0};
frost$collections$List** $tmp78 = &param0->choices;
frost$collections$List* $tmp79 = *$tmp78;
ITable* $tmp80 = ((frost$collections$CollectionView*) $tmp79)->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[0];
frost$core$Int64 $tmp83 = $tmp81(((frost$collections$CollectionView*) $tmp79));
frost$core$Bit $tmp84 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp85 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp77, $tmp83, $tmp84);
frost$core$Int64 $tmp86 = $tmp85.min;
*(&local0) = $tmp86;
frost$core$Int64 $tmp87 = $tmp85.max;
frost$core$Bit $tmp88 = $tmp85.inclusive;
bool $tmp89 = $tmp88.value;
frost$core$Int64 $tmp90 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp91 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp90);
if ($tmp89) goto block4; else goto block5;
block4:;
int64_t $tmp92 = $tmp86.value;
int64_t $tmp93 = $tmp87.value;
bool $tmp94 = $tmp92 <= $tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block1; else goto block2;
block5:;
int64_t $tmp97 = $tmp86.value;
int64_t $tmp98 = $tmp87.value;
bool $tmp99 = $tmp97 < $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block1; else goto block2;
block1:;
// line 126
frost$collections$List** $tmp102 = &param0->choices;
frost$collections$List* $tmp103 = *$tmp102;
frost$core$Int64 $tmp104 = *(&local0);
ITable* $tmp105 = ((frost$collections$ListView*) $tmp103)->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
frost$core$Object* $tmp108 = $tmp106(((frost$collections$ListView*) $tmp103), $tmp104);
frost$collections$List** $tmp109 = &param0->choices;
frost$collections$List* $tmp110 = *$tmp109;
ITable* $tmp111 = ((frost$collections$CollectionView*) $tmp110)->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
frost$core$Int64 $tmp114 = $tmp112(((frost$collections$CollectionView*) $tmp110));
int64_t $tmp115 = ((frost$core$Int64$wrapper*) $tmp108)->value.value;
int64_t $tmp116 = $tmp114.value;
int64_t $tmp117 = $tmp115 + $tmp116;
frost$core$Int64 $tmp118 = (frost$core$Int64) {$tmp117};
frost$collections$ListView** $tmp119 = &param0->list;
frost$collections$ListView* $tmp120 = *$tmp119;
ITable* $tmp121 = ((frost$collections$CollectionView*) $tmp120)->$class->itable;
while ($tmp121->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp121 = $tmp121->next;
}
$fn123 $tmp122 = $tmp121->methods[0];
frost$core$Int64 $tmp124 = $tmp122(((frost$collections$CollectionView*) $tmp120));
frost$core$Int64 $tmp125 = *(&local0);
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126 - $tmp127;
frost$core$Int64 $tmp129 = (frost$core$Int64) {$tmp128};
int64_t $tmp130 = $tmp118.value;
int64_t $tmp131 = $tmp129.value;
bool $tmp132 = $tmp130 < $tmp131;
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132};
bool $tmp134 = $tmp133.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp108);
if ($tmp134) goto block6; else goto block7;
block6:;
// line 127
frost$core$Bit $tmp135 = frost$core$Bit$init$builtin_bit(false);
return $tmp135;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp136 = *(&local0);
int64_t $tmp137 = $tmp87.value;
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137 - $tmp138;
frost$core$Int64 $tmp140 = (frost$core$Int64) {$tmp139};
frost$core$UInt64 $tmp141 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp140);
if ($tmp89) goto block9; else goto block10;
block9:;
uint64_t $tmp142 = $tmp141.value;
uint64_t $tmp143 = $tmp91.value;
bool $tmp144 = $tmp142 >= $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block8; else goto block2;
block10:;
uint64_t $tmp147 = $tmp141.value;
uint64_t $tmp148 = $tmp91.value;
bool $tmp149 = $tmp147 > $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block8; else goto block2;
block8:;
int64_t $tmp152 = $tmp136.value;
int64_t $tmp153 = $tmp90.value;
int64_t $tmp154 = $tmp152 + $tmp153;
frost$core$Int64 $tmp155 = (frost$core$Int64) {$tmp154};
*(&local0) = $tmp155;
goto block1;
block2:;
// line 130
frost$core$Bit $tmp156 = frost$core$Bit$init$builtin_bit(true);
return $tmp156;

}
frost$collections$ListView* frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT(frost$collections$ListView$CombinationIterator* param0) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
ITable* $tmp157 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp157->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp157 = $tmp157->next;
}
$fn159 $tmp158 = $tmp157->methods[0];
frost$core$Bit $tmp160 = $tmp158(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp161 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp160);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp163 = (frost$core$Int64) {134};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s164, $tmp163, &$s165);
abort(); // unreachable
block1:;
// line 135
goto block3;
block3:;
// line 136
frost$core$Int64* $tmp166 = &param0->index;
frost$core$Int64 $tmp167 = *$tmp166;
frost$collections$ListView** $tmp168 = &param0->list;
frost$collections$ListView* $tmp169 = *$tmp168;
ITable* $tmp170 = ((frost$collections$CollectionView*) $tmp169)->$class->itable;
while ($tmp170->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp170 = $tmp170->next;
}
$fn172 $tmp171 = $tmp170->methods[0];
frost$core$Int64 $tmp173 = $tmp171(((frost$collections$CollectionView*) $tmp169));
frost$core$Int64* $tmp174 = &param0->r;
frost$core$Int64 $tmp175 = *$tmp174;
int64_t $tmp176 = $tmp173.value;
int64_t $tmp177 = $tmp175.value;
int64_t $tmp178 = $tmp176 + $tmp177;
frost$core$Int64 $tmp179 = (frost$core$Int64) {$tmp178};
frost$collections$List** $tmp180 = &param0->choices;
frost$collections$List* $tmp181 = *$tmp180;
ITable* $tmp182 = ((frost$collections$CollectionView*) $tmp181)->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
frost$core$Int64 $tmp185 = $tmp183(((frost$collections$CollectionView*) $tmp181));
int64_t $tmp186 = $tmp179.value;
int64_t $tmp187 = $tmp185.value;
int64_t $tmp188 = $tmp186 - $tmp187;
frost$core$Int64 $tmp189 = (frost$core$Int64) {$tmp188};
int64_t $tmp190 = $tmp167.value;
int64_t $tmp191 = $tmp189.value;
bool $tmp192 = $tmp190 <= $tmp191;
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block5; else goto block7;
block5:;
// line 137
frost$collections$List** $tmp195 = &param0->choices;
frost$collections$List* $tmp196 = *$tmp195;
frost$core$Int64* $tmp197 = &param0->r;
frost$core$Int64 $tmp198 = *$tmp197;
frost$core$Int64* $tmp199 = &param0->index;
frost$core$Int64 $tmp200 = *$tmp199;
frost$core$Int64$wrapper* $tmp201;
$tmp201 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp201->value = $tmp200;
ITable* $tmp202 = ((frost$collections$ListWriter*) $tmp196)->$class->itable;
while ($tmp202->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp202 = $tmp202->next;
}
$fn204 $tmp203 = $tmp202->methods[0];
$tmp203(((frost$collections$ListWriter*) $tmp196), $tmp198, ((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// line 138
frost$core$Int64* $tmp205 = &param0->r;
frost$core$Int64 $tmp206 = *$tmp205;
frost$collections$List** $tmp207 = &param0->choices;
frost$collections$List* $tmp208 = *$tmp207;
ITable* $tmp209 = ((frost$collections$CollectionView*) $tmp208)->$class->itable;
while ($tmp209->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp209 = $tmp209->next;
}
$fn211 $tmp210 = $tmp209->methods[0];
frost$core$Int64 $tmp212 = $tmp210(((frost$collections$CollectionView*) $tmp208));
frost$core$Int64 $tmp213 = (frost$core$Int64) {1};
int64_t $tmp214 = $tmp212.value;
int64_t $tmp215 = $tmp213.value;
int64_t $tmp216 = $tmp214 - $tmp215;
frost$core$Int64 $tmp217 = (frost$core$Int64) {$tmp216};
frost$core$Bit $tmp218 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp206, $tmp217);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block8; else goto block10;
block8:;
// line 139
frost$core$Int64* $tmp220 = &param0->index;
frost$core$Int64 $tmp221 = *$tmp220;
frost$core$Int64 $tmp222 = (frost$core$Int64) {1};
int64_t $tmp223 = $tmp221.value;
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223 + $tmp224;
frost$core$Int64 $tmp226 = (frost$core$Int64) {$tmp225};
frost$core$Int64* $tmp227 = &param0->index;
*$tmp227 = $tmp226;
// line 140
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp228 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$List** $tmp229 = &param0->choices;
frost$collections$List* $tmp230 = *$tmp229;
ITable* $tmp231 = ((frost$collections$CollectionView*) $tmp230)->$class->itable;
while ($tmp231->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp231 = $tmp231->next;
}
$fn233 $tmp232 = $tmp231->methods[0];
frost$core$Int64 $tmp234 = $tmp232(((frost$collections$CollectionView*) $tmp230));
frost$collections$Array$init$frost$core$Int64($tmp228, $tmp234);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$collections$Array* $tmp235 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local0) = $tmp228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// line 141
frost$collections$List** $tmp236 = &param0->choices;
frost$collections$List* $tmp237 = *$tmp236;
ITable* $tmp238 = ((frost$collections$Iterable*) $tmp237)->$class->itable;
while ($tmp238->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp238 = $tmp238->next;
}
$fn240 $tmp239 = $tmp238->methods[0];
frost$collections$Iterator* $tmp241 = $tmp239(((frost$collections$Iterable*) $tmp237));
goto block11;
block11:;
ITable* $tmp242 = $tmp241->$class->itable;
while ($tmp242->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
frost$core$Bit $tmp245 = $tmp243($tmp241);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block13; else goto block12;
block12:;
ITable* $tmp247 = $tmp241->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[1];
frost$core$Object* $tmp250 = $tmp248($tmp241);
*(&local1) = ((frost$core$Int64$wrapper*) $tmp250)->value;
// line 142
frost$collections$Array* $tmp251 = *(&local0);
frost$collections$ListView** $tmp252 = &param0->list;
frost$collections$ListView* $tmp253 = *$tmp252;
frost$core$Int64 $tmp254 = *(&local1);
ITable* $tmp255 = $tmp253->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[0];
frost$core$Object* $tmp258 = $tmp256($tmp253, $tmp254);
frost$collections$Array$add$frost$collections$Array$T($tmp251, $tmp258);
frost$core$Frost$unref$frost$core$Object$Q($tmp258);
frost$core$Frost$unref$frost$core$Object$Q($tmp250);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// line 144
frost$collections$Array* $tmp259 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp259)));
frost$collections$Array* $tmp260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp259);
block10:;
// line 1
// line 147
frost$collections$List** $tmp261 = &param0->choices;
frost$collections$List* $tmp262 = *$tmp261;
frost$core$Int64* $tmp263 = &param0->r;
frost$core$Int64 $tmp264 = *$tmp263;
ITable* $tmp265 = ((frost$collections$ListView*) $tmp262)->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[0];
frost$core$Object* $tmp268 = $tmp266(((frost$collections$ListView*) $tmp262), $tmp264);
frost$core$Int64 $tmp269 = (frost$core$Int64) {1};
int64_t $tmp270 = ((frost$core$Int64$wrapper*) $tmp268)->value.value;
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270 + $tmp271;
frost$core$Int64 $tmp273 = (frost$core$Int64) {$tmp272};
frost$core$Int64* $tmp274 = &param0->index;
*$tmp274 = $tmp273;
frost$core$Frost$unref$frost$core$Object$Q($tmp268);
// line 148
frost$core$Int64* $tmp275 = &param0->r;
frost$core$Int64 $tmp276 = *$tmp275;
frost$core$Int64 $tmp277 = (frost$core$Int64) {1};
int64_t $tmp278 = $tmp276.value;
int64_t $tmp279 = $tmp277.value;
int64_t $tmp280 = $tmp278 + $tmp279;
frost$core$Int64 $tmp281 = (frost$core$Int64) {$tmp280};
frost$core$Int64* $tmp282 = &param0->r;
*$tmp282 = $tmp281;
goto block9;
block9:;
goto block6;
block7:;
// line 1
// line 152
frost$core$Int64* $tmp283 = &param0->r;
frost$core$Int64 $tmp284 = *$tmp283;
frost$core$Int64 $tmp285 = (frost$core$Int64) {1};
int64_t $tmp286 = $tmp284.value;
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286 - $tmp287;
frost$core$Int64 $tmp289 = (frost$core$Int64) {$tmp288};
frost$core$Int64* $tmp290 = &param0->r;
*$tmp290 = $tmp289;
// line 153
frost$core$Int64* $tmp291 = &param0->r;
frost$core$Int64 $tmp292 = *$tmp291;
frost$core$Int64 $tmp293 = (frost$core$Int64) {0};
int64_t $tmp294 = $tmp292.value;
int64_t $tmp295 = $tmp293.value;
bool $tmp296 = $tmp294 > $tmp295;
frost$core$Bit $tmp297 = (frost$core$Bit) {$tmp296};
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block14; else goto block16;
block14:;
// line 154
frost$collections$List** $tmp299 = &param0->choices;
frost$collections$List* $tmp300 = *$tmp299;
frost$core$Int64* $tmp301 = &param0->r;
frost$core$Int64 $tmp302 = *$tmp301;
ITable* $tmp303 = ((frost$collections$ListView*) $tmp300)->$class->itable;
while ($tmp303->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp303 = $tmp303->next;
}
$fn305 $tmp304 = $tmp303->methods[0];
frost$core$Object* $tmp306 = $tmp304(((frost$collections$ListView*) $tmp300), $tmp302);
frost$core$Int64 $tmp307 = (frost$core$Int64) {1};
int64_t $tmp308 = ((frost$core$Int64$wrapper*) $tmp306)->value.value;
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308 + $tmp309;
frost$core$Int64 $tmp311 = (frost$core$Int64) {$tmp310};
frost$core$Int64* $tmp312 = &param0->index;
*$tmp312 = $tmp311;
frost$core$Frost$unref$frost$core$Object$Q($tmp306);
goto block15;
block16:;
// line 1
// line 157
frost$collections$List** $tmp313 = &param0->choices;
frost$collections$List* $tmp314 = *$tmp313;
frost$core$Int64 $tmp315 = (frost$core$Int64) {0};
ITable* $tmp316 = ((frost$collections$ListView*) $tmp314)->$class->itable;
while ($tmp316->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp316 = $tmp316->next;
}
$fn318 $tmp317 = $tmp316->methods[0];
frost$core$Object* $tmp319 = $tmp317(((frost$collections$ListView*) $tmp314), $tmp315);
frost$core$Int64 $tmp320 = (frost$core$Int64) {1};
int64_t $tmp321 = ((frost$core$Int64$wrapper*) $tmp319)->value.value;
int64_t $tmp322 = $tmp320.value;
int64_t $tmp323 = $tmp321 + $tmp322;
frost$core$Int64 $tmp324 = (frost$core$Int64) {$tmp323};
frost$core$Int64* $tmp325 = &param0->index;
*$tmp325 = $tmp324;
frost$core$Frost$unref$frost$core$Object$Q($tmp319);
goto block15;
block15:;
goto block6;
block6:;
goto block3;
block4:;
goto block17;
block17:;

}
void frost$collections$ListView$CombinationIterator$cleanup(frost$collections$ListView$CombinationIterator* param0) {

// line 105
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ListView** $tmp326 = &param0->list;
frost$collections$ListView* $tmp327 = *$tmp326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$collections$List** $tmp328 = &param0->choices;
frost$collections$List* $tmp329 = *$tmp328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
return;

}

