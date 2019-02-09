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
typedef void (*$fn57)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$core$Int64 (*$fn84)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn110)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn116)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn126)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn163)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn178)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn190)(frost$collections$CollectionView*);
typedef void (*$fn210)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Int64 (*$fn217)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn242)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn249)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn253)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn258)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn266)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn276)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn314)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn327)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72", 46, 1395506112616240560, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x6c\x69\x73\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 183, -8968377119306831128, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 162, -6631964047809646503, NULL };

void frost$collections$ListView$CombinationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$frost$core$Int64(frost$collections$ListView$CombinationIterator* param0, frost$collections$ListView* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:110
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->r;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:112
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:116
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ListView** $tmp24 = &param0->list;
frost$collections$ListView* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$collections$ListView** $tmp26 = &param0->list;
*$tmp26 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:117
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:118
frost$core$Int64 $tmp31 = (frost$core$Int64) {0};
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp33 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp31, param2, $tmp32);
frost$core$Int64 $tmp34 = $tmp33.min;
*(&local0) = $tmp34;
frost$core$Int64 $tmp35 = $tmp33.max;
frost$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
frost$core$Int64 $tmp38 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp39 = $tmp38.value;
frost$core$UInt64 $tmp40 = (frost$core$UInt64) {((uint64_t) $tmp39)};
if ($tmp37) goto block8; else goto block9;
block8:;
int64_t $tmp41 = $tmp34.value;
int64_t $tmp42 = $tmp35.value;
bool $tmp43 = $tmp41 <= $tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block5; else goto block6;
block9:;
int64_t $tmp46 = $tmp34.value;
int64_t $tmp47 = $tmp35.value;
bool $tmp48 = $tmp46 < $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:119
frost$collections$List** $tmp51 = &param0->choices;
frost$collections$List* $tmp52 = *$tmp51;
frost$core$Int64 $tmp53 = *(&local0);
frost$core$Int64$wrapper* $tmp54;
$tmp54 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp54->value = $tmp53;
ITable* $tmp55 = ((frost$collections$CollectionWriter*) $tmp52)->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp55 = $tmp55->next;
}
$fn57 $tmp56 = $tmp55->methods[0];
$tmp56(((frost$collections$CollectionWriter*) $tmp52), ((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Int64 $tmp58 = *(&local0);
int64_t $tmp59 = $tmp35.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 - $tmp60;
frost$core$Int64 $tmp62 = (frost$core$Int64) {$tmp61};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp63 = $tmp62.value;
frost$core$UInt64 $tmp64 = (frost$core$UInt64) {((uint64_t) $tmp63)};
if ($tmp37) goto block12; else goto block13;
block12:;
uint64_t $tmp65 = $tmp64.value;
uint64_t $tmp66 = $tmp40.value;
bool $tmp67 = $tmp65 >= $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block10; else goto block6;
block13:;
uint64_t $tmp70 = $tmp64.value;
uint64_t $tmp71 = $tmp40.value;
bool $tmp72 = $tmp70 > $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block10; else goto block6;
block10:;
int64_t $tmp75 = $tmp58.value;
int64_t $tmp76 = $tmp38.value;
int64_t $tmp77 = $tmp75 + $tmp76;
frost$core$Int64 $tmp78 = (frost$core$Int64) {$tmp77};
*(&local0) = $tmp78;
goto block5;
block6:;
return;

}
frost$core$Bit frost$collections$ListView$CombinationIterator$get_done$R$frost$core$Bit(frost$collections$ListView$CombinationIterator* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:125
frost$core$Int64 $tmp79 = (frost$core$Int64) {0};
frost$collections$List** $tmp80 = &param0->choices;
frost$collections$List* $tmp81 = *$tmp80;
ITable* $tmp82 = ((frost$collections$CollectionView*) $tmp81)->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp82 = $tmp82->next;
}
$fn84 $tmp83 = $tmp82->methods[0];
frost$core$Int64 $tmp85 = $tmp83(((frost$collections$CollectionView*) $tmp81));
frost$core$Bit $tmp86 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp87 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp79, $tmp85, $tmp86);
frost$core$Int64 $tmp88 = $tmp87.min;
*(&local0) = $tmp88;
frost$core$Int64 $tmp89 = $tmp87.max;
frost$core$Bit $tmp90 = $tmp87.inclusive;
bool $tmp91 = $tmp90.value;
frost$core$Int64 $tmp92 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp93 = $tmp92.value;
frost$core$UInt64 $tmp94 = (frost$core$UInt64) {((uint64_t) $tmp93)};
if ($tmp91) goto block5; else goto block6;
block5:;
int64_t $tmp95 = $tmp88.value;
int64_t $tmp96 = $tmp89.value;
bool $tmp97 = $tmp95 <= $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block2; else goto block3;
block6:;
int64_t $tmp100 = $tmp88.value;
int64_t $tmp101 = $tmp89.value;
bool $tmp102 = $tmp100 < $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:126
frost$collections$List** $tmp105 = &param0->choices;
frost$collections$List* $tmp106 = *$tmp105;
frost$core$Int64 $tmp107 = *(&local0);
ITable* $tmp108 = ((frost$collections$ListView*) $tmp106)->$class->itable;
while ($tmp108->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp108 = $tmp108->next;
}
$fn110 $tmp109 = $tmp108->methods[0];
frost$core$Object* $tmp111 = $tmp109(((frost$collections$ListView*) $tmp106), $tmp107);
frost$collections$List** $tmp112 = &param0->choices;
frost$collections$List* $tmp113 = *$tmp112;
ITable* $tmp114 = ((frost$collections$CollectionView*) $tmp113)->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[0];
frost$core$Int64 $tmp117 = $tmp115(((frost$collections$CollectionView*) $tmp113));
int64_t $tmp118 = ((frost$core$Int64$wrapper*) $tmp111)->value.value;
int64_t $tmp119 = $tmp117.value;
int64_t $tmp120 = $tmp118 + $tmp119;
frost$core$Int64 $tmp121 = (frost$core$Int64) {$tmp120};
frost$collections$ListView** $tmp122 = &param0->list;
frost$collections$ListView* $tmp123 = *$tmp122;
ITable* $tmp124 = ((frost$collections$CollectionView*) $tmp123)->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[0];
frost$core$Int64 $tmp127 = $tmp125(((frost$collections$CollectionView*) $tmp123));
frost$core$Int64 $tmp128 = *(&local0);
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129 - $tmp130;
frost$core$Int64 $tmp132 = (frost$core$Int64) {$tmp131};
int64_t $tmp133 = $tmp121.value;
int64_t $tmp134 = $tmp132.value;
bool $tmp135 = $tmp133 < $tmp134;
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135};
bool $tmp137 = $tmp136.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp111);
if ($tmp137) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:127
frost$core$Bit $tmp138 = frost$core$Bit$init$builtin_bit(false);
return $tmp138;
block8:;
frost$core$Int64 $tmp139 = *(&local0);
int64_t $tmp140 = $tmp89.value;
int64_t $tmp141 = $tmp139.value;
int64_t $tmp142 = $tmp140 - $tmp141;
frost$core$Int64 $tmp143 = (frost$core$Int64) {$tmp142};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp144 = $tmp143.value;
frost$core$UInt64 $tmp145 = (frost$core$UInt64) {((uint64_t) $tmp144)};
if ($tmp91) goto block11; else goto block12;
block11:;
uint64_t $tmp146 = $tmp145.value;
uint64_t $tmp147 = $tmp94.value;
bool $tmp148 = $tmp146 >= $tmp147;
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148};
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block9; else goto block3;
block12:;
uint64_t $tmp151 = $tmp145.value;
uint64_t $tmp152 = $tmp94.value;
bool $tmp153 = $tmp151 > $tmp152;
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153};
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block9; else goto block3;
block9:;
int64_t $tmp156 = $tmp139.value;
int64_t $tmp157 = $tmp92.value;
int64_t $tmp158 = $tmp156 + $tmp157;
frost$core$Int64 $tmp159 = (frost$core$Int64) {$tmp158};
*(&local0) = $tmp159;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:130
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit(true);
return $tmp160;

}
frost$collections$ListView* frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT(frost$collections$ListView$CombinationIterator* param0) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
ITable* $tmp161 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[0];
frost$core$Bit $tmp164 = $tmp162(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp165 = $tmp164.value;
bool $tmp166 = !$tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp169 = (frost$core$Int64) {134};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s170, $tmp169, &$s171);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:135
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:136
frost$core$Int64* $tmp172 = &param0->index;
frost$core$Int64 $tmp173 = *$tmp172;
frost$collections$ListView** $tmp174 = &param0->list;
frost$collections$ListView* $tmp175 = *$tmp174;
ITable* $tmp176 = ((frost$collections$CollectionView*) $tmp175)->$class->itable;
while ($tmp176->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp176 = $tmp176->next;
}
$fn178 $tmp177 = $tmp176->methods[0];
frost$core$Int64 $tmp179 = $tmp177(((frost$collections$CollectionView*) $tmp175));
frost$core$Int64* $tmp180 = &param0->r;
frost$core$Int64 $tmp181 = *$tmp180;
int64_t $tmp182 = $tmp179.value;
int64_t $tmp183 = $tmp181.value;
int64_t $tmp184 = $tmp182 + $tmp183;
frost$core$Int64 $tmp185 = (frost$core$Int64) {$tmp184};
frost$collections$List** $tmp186 = &param0->choices;
frost$collections$List* $tmp187 = *$tmp186;
ITable* $tmp188 = ((frost$collections$CollectionView*) $tmp187)->$class->itable;
while ($tmp188->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp188 = $tmp188->next;
}
$fn190 $tmp189 = $tmp188->methods[0];
frost$core$Int64 $tmp191 = $tmp189(((frost$collections$CollectionView*) $tmp187));
int64_t $tmp192 = $tmp185.value;
int64_t $tmp193 = $tmp191.value;
int64_t $tmp194 = $tmp192 - $tmp193;
frost$core$Int64 $tmp195 = (frost$core$Int64) {$tmp194};
int64_t $tmp196 = $tmp173.value;
int64_t $tmp197 = $tmp195.value;
bool $tmp198 = $tmp196 <= $tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:137
frost$collections$List** $tmp201 = &param0->choices;
frost$collections$List* $tmp202 = *$tmp201;
frost$core$Int64* $tmp203 = &param0->r;
frost$core$Int64 $tmp204 = *$tmp203;
frost$core$Int64* $tmp205 = &param0->index;
frost$core$Int64 $tmp206 = *$tmp205;
frost$core$Int64$wrapper* $tmp207;
$tmp207 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp207->value = $tmp206;
ITable* $tmp208 = ((frost$collections$ListWriter*) $tmp202)->$class->itable;
while ($tmp208->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp208 = $tmp208->next;
}
$fn210 $tmp209 = $tmp208->methods[0];
$tmp209(((frost$collections$ListWriter*) $tmp202), $tmp204, ((frost$core$Object*) $tmp207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:138
frost$core$Int64* $tmp211 = &param0->r;
frost$core$Int64 $tmp212 = *$tmp211;
frost$collections$List** $tmp213 = &param0->choices;
frost$collections$List* $tmp214 = *$tmp213;
ITable* $tmp215 = ((frost$collections$CollectionView*) $tmp214)->$class->itable;
while ($tmp215->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp215 = $tmp215->next;
}
$fn217 $tmp216 = $tmp215->methods[0];
frost$core$Int64 $tmp218 = $tmp216(((frost$collections$CollectionView*) $tmp214));
frost$core$Int64 $tmp219 = (frost$core$Int64) {1};
int64_t $tmp220 = $tmp218.value;
int64_t $tmp221 = $tmp219.value;
int64_t $tmp222 = $tmp220 - $tmp221;
frost$core$Int64 $tmp223 = (frost$core$Int64) {$tmp222};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from ListView.frost:138:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp224 = $tmp212.value;
int64_t $tmp225 = $tmp223.value;
bool $tmp226 = $tmp224 == $tmp225;
frost$core$Bit $tmp227 = frost$core$Bit$init$builtin_bit($tmp226);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:139
frost$core$Int64* $tmp229 = &param0->index;
frost$core$Int64 $tmp230 = *$tmp229;
frost$core$Int64 $tmp231 = (frost$core$Int64) {1};
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231.value;
int64_t $tmp234 = $tmp232 + $tmp233;
frost$core$Int64 $tmp235 = (frost$core$Int64) {$tmp234};
frost$core$Int64* $tmp236 = &param0->index;
*$tmp236 = $tmp235;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:140
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp237 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$List** $tmp238 = &param0->choices;
frost$collections$List* $tmp239 = *$tmp238;
ITable* $tmp240 = ((frost$collections$CollectionView*) $tmp239)->$class->itable;
while ($tmp240->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp240 = $tmp240->next;
}
$fn242 $tmp241 = $tmp240->methods[0];
frost$core$Int64 $tmp243 = $tmp241(((frost$collections$CollectionView*) $tmp239));
frost$collections$Array$init$frost$core$Int64($tmp237, $tmp243);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$collections$Array* $tmp244 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local0) = $tmp237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:141
frost$collections$List** $tmp245 = &param0->choices;
frost$collections$List* $tmp246 = *$tmp245;
ITable* $tmp247 = ((frost$collections$Iterable*) $tmp246)->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
frost$collections$Iterator* $tmp250 = $tmp248(((frost$collections$Iterable*) $tmp246));
goto block13;
block13:;
ITable* $tmp251 = $tmp250->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
frost$core$Bit $tmp254 = $tmp252($tmp250);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block15; else goto block14;
block14:;
ITable* $tmp256 = $tmp250->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[1];
frost$core$Object* $tmp259 = $tmp257($tmp250);
*(&local1) = ((frost$core$Int64$wrapper*) $tmp259)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:142
frost$collections$Array* $tmp260 = *(&local0);
frost$collections$ListView** $tmp261 = &param0->list;
frost$collections$ListView* $tmp262 = *$tmp261;
frost$core$Int64 $tmp263 = *(&local1);
ITable* $tmp264 = $tmp262->$class->itable;
while ($tmp264->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[0];
frost$core$Object* $tmp267 = $tmp265($tmp262, $tmp263);
frost$collections$Array$add$frost$collections$Array$T($tmp260, $tmp267);
frost$core$Frost$unref$frost$core$Object$Q($tmp267);
frost$core$Frost$unref$frost$core$Object$Q($tmp259);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:144
frost$collections$Array* $tmp268 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp268)));
frost$collections$Array* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp268);
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:147
frost$collections$List** $tmp270 = &param0->choices;
frost$collections$List* $tmp271 = *$tmp270;
frost$core$Int64* $tmp272 = &param0->r;
frost$core$Int64 $tmp273 = *$tmp272;
ITable* $tmp274 = ((frost$collections$ListView*) $tmp271)->$class->itable;
while ($tmp274->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp274 = $tmp274->next;
}
$fn276 $tmp275 = $tmp274->methods[0];
frost$core$Object* $tmp277 = $tmp275(((frost$collections$ListView*) $tmp271), $tmp273);
frost$core$Int64 $tmp278 = (frost$core$Int64) {1};
int64_t $tmp279 = ((frost$core$Int64$wrapper*) $tmp277)->value.value;
int64_t $tmp280 = $tmp278.value;
int64_t $tmp281 = $tmp279 + $tmp280;
frost$core$Int64 $tmp282 = (frost$core$Int64) {$tmp281};
frost$core$Int64* $tmp283 = &param0->index;
*$tmp283 = $tmp282;
frost$core$Frost$unref$frost$core$Object$Q($tmp277);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:148
frost$core$Int64* $tmp284 = &param0->r;
frost$core$Int64 $tmp285 = *$tmp284;
frost$core$Int64 $tmp286 = (frost$core$Int64) {1};
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286.value;
int64_t $tmp289 = $tmp287 + $tmp288;
frost$core$Int64 $tmp290 = (frost$core$Int64) {$tmp289};
frost$core$Int64* $tmp291 = &param0->r;
*$tmp291 = $tmp290;
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:152
frost$core$Int64* $tmp292 = &param0->r;
frost$core$Int64 $tmp293 = *$tmp292;
frost$core$Int64 $tmp294 = (frost$core$Int64) {1};
int64_t $tmp295 = $tmp293.value;
int64_t $tmp296 = $tmp294.value;
int64_t $tmp297 = $tmp295 - $tmp296;
frost$core$Int64 $tmp298 = (frost$core$Int64) {$tmp297};
frost$core$Int64* $tmp299 = &param0->r;
*$tmp299 = $tmp298;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:153
frost$core$Int64* $tmp300 = &param0->r;
frost$core$Int64 $tmp301 = *$tmp300;
frost$core$Int64 $tmp302 = (frost$core$Int64) {0};
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302.value;
bool $tmp305 = $tmp303 > $tmp304;
frost$core$Bit $tmp306 = (frost$core$Bit) {$tmp305};
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:154
frost$collections$List** $tmp308 = &param0->choices;
frost$collections$List* $tmp309 = *$tmp308;
frost$core$Int64* $tmp310 = &param0->r;
frost$core$Int64 $tmp311 = *$tmp310;
ITable* $tmp312 = ((frost$collections$ListView*) $tmp309)->$class->itable;
while ($tmp312->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp312 = $tmp312->next;
}
$fn314 $tmp313 = $tmp312->methods[0];
frost$core$Object* $tmp315 = $tmp313(((frost$collections$ListView*) $tmp309), $tmp311);
frost$core$Int64 $tmp316 = (frost$core$Int64) {1};
int64_t $tmp317 = ((frost$core$Int64$wrapper*) $tmp315)->value.value;
int64_t $tmp318 = $tmp316.value;
int64_t $tmp319 = $tmp317 + $tmp318;
frost$core$Int64 $tmp320 = (frost$core$Int64) {$tmp319};
frost$core$Int64* $tmp321 = &param0->index;
*$tmp321 = $tmp320;
frost$core$Frost$unref$frost$core$Object$Q($tmp315);
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:157
frost$collections$List** $tmp322 = &param0->choices;
frost$collections$List* $tmp323 = *$tmp322;
frost$core$Int64 $tmp324 = (frost$core$Int64) {0};
ITable* $tmp325 = ((frost$collections$ListView*) $tmp323)->$class->itable;
while ($tmp325->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp325 = $tmp325->next;
}
$fn327 $tmp326 = $tmp325->methods[0];
frost$core$Object* $tmp328 = $tmp326(((frost$collections$ListView*) $tmp323), $tmp324);
frost$core$Int64 $tmp329 = (frost$core$Int64) {1};
int64_t $tmp330 = ((frost$core$Int64$wrapper*) $tmp328)->value.value;
int64_t $tmp331 = $tmp329.value;
int64_t $tmp332 = $tmp330 + $tmp331;
frost$core$Int64 $tmp333 = (frost$core$Int64) {$tmp332};
frost$core$Int64* $tmp334 = &param0->index;
*$tmp334 = $tmp333;
frost$core$Frost$unref$frost$core$Object$Q($tmp328);
goto block17;
block17:;
goto block7;
block7:;
goto block4;
block5:;
goto block19;
block19:;

}
void frost$collections$ListView$CombinationIterator$cleanup(frost$collections$ListView$CombinationIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:105
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ListView** $tmp335 = &param0->list;
frost$collections$ListView* $tmp336 = *$tmp335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$collections$List** $tmp337 = &param0->choices;
frost$collections$List* $tmp338 = *$tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
return;

}

