#include "frost/collections/ListView/CombinationIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/List.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/ListWriter.h"
#include "frost/collections/Iterable.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$shim(frost$collections$ListView$CombinationIterator* p0) {
    frost$collections$ListView* result = frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ListView$CombinationIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ListView$CombinationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ListView$CombinationIterator$class_type frost$collections$ListView$CombinationIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$CombinationIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ListView$CombinationIterator$cleanup, frost$collections$ListView$CombinationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$shim} };

typedef frost$core$Int (*$fn14)(frost$collections$CollectionView*);
typedef void (*$fn55)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$core$Int (*$fn80)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn104)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn110)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn120)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn155)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn170)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn182)(frost$collections$CollectionView*);
typedef void (*$fn202)(frost$collections$ListWriter*, frost$core$Int, frost$core$Object*);
typedef frost$core$Int (*$fn209)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn234)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn241)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn245)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn250)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn258)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn268)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn306)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn319)(frost$collections$ListView*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72", 46, 5127267990547660822, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x6c\x69\x73\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 181, 2754022719883816286, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 162, -4732234487307000635, NULL };

void frost$collections$ListView$CombinationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$frost$core$Int(frost$collections$ListView$CombinationIterator* param0, frost$collections$ListView* param1, frost$core$Int param2) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:112
frost$core$Int $tmp2 = (frost$core$Int) {0u};
frost$core$Int* $tmp3 = &param0->r;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:114
frost$core$Int $tmp4 = (frost$core$Int) {0u};
frost$core$Int* $tmp5 = &param0->index;
*$tmp5 = $tmp4;
frost$core$Int $tmp6 = (frost$core$Int) {0u};
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
frost$core$Int $tmp15 = $tmp13(((frost$collections$CollectionView*) param1));
int64_t $tmp16 = param2.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 <= $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
frost$core$Int $tmp21 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:118
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ListView** $tmp24 = &param0->list;
frost$collections$ListView* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$collections$ListView** $tmp26 = &param0->list;
*$tmp26 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:119
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp27 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$core$Int($tmp27, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$List*) $tmp27)));
frost$collections$List** $tmp28 = &param0->choices;
frost$collections$List* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$collections$List** $tmp30 = &param0->choices;
*$tmp30 = ((frost$collections$List*) $tmp27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:120
frost$core$Int $tmp31 = (frost$core$Int) {0u};
frost$core$Bit $tmp32 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp33 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp31, param2, $tmp32);
frost$core$Int $tmp34 = $tmp33.min;
*(&local0) = $tmp34;
frost$core$Int $tmp35 = $tmp33.max;
frost$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
frost$core$Int $tmp38 = (frost$core$Int) {1u};
if ($tmp37) goto block7; else goto block8;
block7:;
int64_t $tmp39 = $tmp34.value;
int64_t $tmp40 = $tmp35.value;
bool $tmp41 = $tmp39 <= $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block4; else goto block5;
block8:;
int64_t $tmp44 = $tmp34.value;
int64_t $tmp45 = $tmp35.value;
bool $tmp46 = $tmp44 < $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:121
frost$collections$List** $tmp49 = &param0->choices;
frost$collections$List* $tmp50 = *$tmp49;
frost$core$Int $tmp51 = *(&local0);
frost$core$Int$wrapper* $tmp52;
$tmp52 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp52->value = $tmp51;
ITable* $tmp53 = ((frost$collections$CollectionWriter*) $tmp50)->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[1];
$tmp54(((frost$collections$CollectionWriter*) $tmp50), ((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Int $tmp56 = *(&local0);
int64_t $tmp57 = $tmp35.value;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57 - $tmp58;
frost$core$Int $tmp60 = (frost$core$Int) {$tmp59};
if ($tmp37) goto block10; else goto block11;
block10:;
int64_t $tmp61 = $tmp60.value;
int64_t $tmp62 = $tmp38.value;
bool $tmp63 = $tmp61 >= $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block9; else goto block5;
block11:;
int64_t $tmp66 = $tmp60.value;
int64_t $tmp67 = $tmp38.value;
bool $tmp68 = $tmp66 > $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block9; else goto block5;
block9:;
int64_t $tmp71 = $tmp56.value;
int64_t $tmp72 = $tmp38.value;
int64_t $tmp73 = $tmp71 + $tmp72;
frost$core$Int $tmp74 = (frost$core$Int) {$tmp73};
*(&local0) = $tmp74;
goto block4;
block5:;
return;

}
frost$core$Bit frost$collections$ListView$CombinationIterator$get_done$R$frost$core$Bit(frost$collections$ListView$CombinationIterator* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:127
frost$core$Int $tmp75 = (frost$core$Int) {0u};
frost$collections$List** $tmp76 = &param0->choices;
frost$collections$List* $tmp77 = *$tmp76;
ITable* $tmp78 = ((frost$collections$CollectionView*) $tmp77)->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp78 = $tmp78->next;
}
$fn80 $tmp79 = $tmp78->methods[0];
frost$core$Int $tmp81 = $tmp79(((frost$collections$CollectionView*) $tmp77));
frost$core$Bit $tmp82 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp83 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp75, $tmp81, $tmp82);
frost$core$Int $tmp84 = $tmp83.min;
*(&local0) = $tmp84;
frost$core$Int $tmp85 = $tmp83.max;
frost$core$Bit $tmp86 = $tmp83.inclusive;
bool $tmp87 = $tmp86.value;
frost$core$Int $tmp88 = (frost$core$Int) {1u};
if ($tmp87) goto block4; else goto block5;
block4:;
int64_t $tmp89 = $tmp84.value;
int64_t $tmp90 = $tmp85.value;
bool $tmp91 = $tmp89 <= $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block1; else goto block2;
block5:;
int64_t $tmp94 = $tmp84.value;
int64_t $tmp95 = $tmp85.value;
bool $tmp96 = $tmp94 < $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:128
frost$collections$List** $tmp99 = &param0->choices;
frost$collections$List* $tmp100 = *$tmp99;
frost$core$Int $tmp101 = *(&local0);
ITable* $tmp102 = ((frost$collections$ListView*) $tmp100)->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
frost$core$Object* $tmp105 = $tmp103(((frost$collections$ListView*) $tmp100), $tmp101);
frost$collections$List** $tmp106 = &param0->choices;
frost$collections$List* $tmp107 = *$tmp106;
ITable* $tmp108 = ((frost$collections$CollectionView*) $tmp107)->$class->itable;
while ($tmp108->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp108 = $tmp108->next;
}
$fn110 $tmp109 = $tmp108->methods[0];
frost$core$Int $tmp111 = $tmp109(((frost$collections$CollectionView*) $tmp107));
int64_t $tmp112 = ((frost$core$Int$wrapper*) $tmp105)->value.value;
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112 + $tmp113;
frost$core$Int $tmp115 = (frost$core$Int) {$tmp114};
frost$collections$ListView** $tmp116 = &param0->list;
frost$collections$ListView* $tmp117 = *$tmp116;
ITable* $tmp118 = ((frost$collections$CollectionView*) $tmp117)->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[0];
frost$core$Int $tmp121 = $tmp119(((frost$collections$CollectionView*) $tmp117));
frost$core$Int $tmp122 = *(&local0);
int64_t $tmp123 = $tmp121.value;
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123 - $tmp124;
frost$core$Int $tmp126 = (frost$core$Int) {$tmp125};
int64_t $tmp127 = $tmp115.value;
int64_t $tmp128 = $tmp126.value;
bool $tmp129 = $tmp127 < $tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129};
bool $tmp131 = $tmp130.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
if ($tmp131) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:129
frost$core$Bit $tmp132 = (frost$core$Bit) {false};
return $tmp132;
block7:;
frost$core$Int $tmp133 = *(&local0);
int64_t $tmp134 = $tmp85.value;
int64_t $tmp135 = $tmp133.value;
int64_t $tmp136 = $tmp134 - $tmp135;
frost$core$Int $tmp137 = (frost$core$Int) {$tmp136};
if ($tmp87) goto block9; else goto block10;
block9:;
int64_t $tmp138 = $tmp137.value;
int64_t $tmp139 = $tmp88.value;
bool $tmp140 = $tmp138 >= $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block8; else goto block2;
block10:;
int64_t $tmp143 = $tmp137.value;
int64_t $tmp144 = $tmp88.value;
bool $tmp145 = $tmp143 > $tmp144;
frost$core$Bit $tmp146 = (frost$core$Bit) {$tmp145};
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block8; else goto block2;
block8:;
int64_t $tmp148 = $tmp133.value;
int64_t $tmp149 = $tmp88.value;
int64_t $tmp150 = $tmp148 + $tmp149;
frost$core$Int $tmp151 = (frost$core$Int) {$tmp150};
*(&local0) = $tmp151;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:132
frost$core$Bit $tmp152 = (frost$core$Bit) {true};
return $tmp152;

}
frost$collections$ListView* frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT(frost$collections$ListView$CombinationIterator* param0) {

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
ITable* $tmp153 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp153->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp153 = $tmp153->next;
}
$fn155 $tmp154 = $tmp153->methods[0];
frost$core$Bit $tmp156 = $tmp154(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp157 = $tmp156.value;
bool $tmp158 = !$tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block1; else goto block2;
block2:;
frost$core$Int $tmp161 = (frost$core$Int) {136u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s162, $tmp161, &$s163);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:137
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:138
frost$core$Int* $tmp164 = &param0->index;
frost$core$Int $tmp165 = *$tmp164;
frost$collections$ListView** $tmp166 = &param0->list;
frost$collections$ListView* $tmp167 = *$tmp166;
ITable* $tmp168 = ((frost$collections$CollectionView*) $tmp167)->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
frost$core$Int $tmp171 = $tmp169(((frost$collections$CollectionView*) $tmp167));
frost$core$Int* $tmp172 = &param0->r;
frost$core$Int $tmp173 = *$tmp172;
int64_t $tmp174 = $tmp171.value;
int64_t $tmp175 = $tmp173.value;
int64_t $tmp176 = $tmp174 + $tmp175;
frost$core$Int $tmp177 = (frost$core$Int) {$tmp176};
frost$collections$List** $tmp178 = &param0->choices;
frost$collections$List* $tmp179 = *$tmp178;
ITable* $tmp180 = ((frost$collections$CollectionView*) $tmp179)->$class->itable;
while ($tmp180->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[0];
frost$core$Int $tmp183 = $tmp181(((frost$collections$CollectionView*) $tmp179));
int64_t $tmp184 = $tmp177.value;
int64_t $tmp185 = $tmp183.value;
int64_t $tmp186 = $tmp184 - $tmp185;
frost$core$Int $tmp187 = (frost$core$Int) {$tmp186};
int64_t $tmp188 = $tmp165.value;
int64_t $tmp189 = $tmp187.value;
bool $tmp190 = $tmp188 <= $tmp189;
frost$core$Bit $tmp191 = (frost$core$Bit) {$tmp190};
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:139
frost$collections$List** $tmp193 = &param0->choices;
frost$collections$List* $tmp194 = *$tmp193;
frost$core$Int* $tmp195 = &param0->r;
frost$core$Int $tmp196 = *$tmp195;
frost$core$Int* $tmp197 = &param0->index;
frost$core$Int $tmp198 = *$tmp197;
frost$core$Int$wrapper* $tmp199;
$tmp199 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp199->value = $tmp198;
ITable* $tmp200 = ((frost$collections$ListWriter*) $tmp194)->$class->itable;
while ($tmp200->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp200 = $tmp200->next;
}
$fn202 $tmp201 = $tmp200->methods[0];
$tmp201(((frost$collections$ListWriter*) $tmp194), $tmp196, ((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:140
frost$core$Int* $tmp203 = &param0->r;
frost$core$Int $tmp204 = *$tmp203;
frost$collections$List** $tmp205 = &param0->choices;
frost$collections$List* $tmp206 = *$tmp205;
ITable* $tmp207 = ((frost$collections$CollectionView*) $tmp206)->$class->itable;
while ($tmp207->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp207 = $tmp207->next;
}
$fn209 $tmp208 = $tmp207->methods[0];
frost$core$Int $tmp210 = $tmp208(((frost$collections$CollectionView*) $tmp206));
frost$core$Int $tmp211 = (frost$core$Int) {1u};
int64_t $tmp212 = $tmp210.value;
int64_t $tmp213 = $tmp211.value;
int64_t $tmp214 = $tmp212 - $tmp213;
frost$core$Int $tmp215 = (frost$core$Int) {$tmp214};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:140:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp216 = $tmp204.value;
int64_t $tmp217 = $tmp215.value;
bool $tmp218 = $tmp216 == $tmp217;
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:141
frost$core$Int* $tmp221 = &param0->index;
frost$core$Int $tmp222 = *$tmp221;
frost$core$Int $tmp223 = (frost$core$Int) {1u};
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223.value;
int64_t $tmp226 = $tmp224 + $tmp225;
frost$core$Int $tmp227 = (frost$core$Int) {$tmp226};
frost$core$Int* $tmp228 = &param0->index;
*$tmp228 = $tmp227;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:142
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp229 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$List** $tmp230 = &param0->choices;
frost$collections$List* $tmp231 = *$tmp230;
ITable* $tmp232 = ((frost$collections$CollectionView*) $tmp231)->$class->itable;
while ($tmp232->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp232 = $tmp232->next;
}
$fn234 $tmp233 = $tmp232->methods[0];
frost$core$Int $tmp235 = $tmp233(((frost$collections$CollectionView*) $tmp231));
frost$collections$Array$init$frost$core$Int($tmp229, $tmp235);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$collections$Array* $tmp236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local0) = $tmp229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:143
frost$collections$List** $tmp237 = &param0->choices;
frost$collections$List* $tmp238 = *$tmp237;
ITable* $tmp239 = ((frost$collections$Iterable*) $tmp238)->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[0];
frost$collections$Iterator* $tmp242 = $tmp240(((frost$collections$Iterable*) $tmp238));
goto block13;
block13:;
ITable* $tmp243 = $tmp242->$class->itable;
while ($tmp243->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp243 = $tmp243->next;
}
$fn245 $tmp244 = $tmp243->methods[0];
frost$core$Bit $tmp246 = $tmp244($tmp242);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block15; else goto block14;
block14:;
ITable* $tmp248 = $tmp242->$class->itable;
while ($tmp248->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp248 = $tmp248->next;
}
$fn250 $tmp249 = $tmp248->methods[1];
frost$core$Object* $tmp251 = $tmp249($tmp242);
*(&local1) = ((frost$core$Int$wrapper*) $tmp251)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:144
frost$collections$Array* $tmp252 = *(&local0);
frost$collections$ListView** $tmp253 = &param0->list;
frost$collections$ListView* $tmp254 = *$tmp253;
frost$core$Int $tmp255 = *(&local1);
ITable* $tmp256 = $tmp254->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[0];
frost$core$Object* $tmp259 = $tmp257($tmp254, $tmp255);
frost$collections$Array$add$frost$collections$Array$T($tmp252, $tmp259);
frost$core$Frost$unref$frost$core$Object$Q($tmp259);
frost$core$Frost$unref$frost$core$Object$Q($tmp251);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:146
frost$collections$Array* $tmp260 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp260)));
frost$collections$Array* $tmp261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp260);
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:149
frost$collections$List** $tmp262 = &param0->choices;
frost$collections$List* $tmp263 = *$tmp262;
frost$core$Int* $tmp264 = &param0->r;
frost$core$Int $tmp265 = *$tmp264;
ITable* $tmp266 = ((frost$collections$ListView*) $tmp263)->$class->itable;
while ($tmp266->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp266 = $tmp266->next;
}
$fn268 $tmp267 = $tmp266->methods[0];
frost$core$Object* $tmp269 = $tmp267(((frost$collections$ListView*) $tmp263), $tmp265);
frost$core$Int $tmp270 = (frost$core$Int) {1u};
int64_t $tmp271 = ((frost$core$Int$wrapper*) $tmp269)->value.value;
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271 + $tmp272;
frost$core$Int $tmp274 = (frost$core$Int) {$tmp273};
frost$core$Int* $tmp275 = &param0->index;
*$tmp275 = $tmp274;
frost$core$Frost$unref$frost$core$Object$Q($tmp269);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:150
frost$core$Int* $tmp276 = &param0->r;
frost$core$Int $tmp277 = *$tmp276;
frost$core$Int $tmp278 = (frost$core$Int) {1u};
int64_t $tmp279 = $tmp277.value;
int64_t $tmp280 = $tmp278.value;
int64_t $tmp281 = $tmp279 + $tmp280;
frost$core$Int $tmp282 = (frost$core$Int) {$tmp281};
frost$core$Int* $tmp283 = &param0->r;
*$tmp283 = $tmp282;
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:154
frost$core$Int* $tmp284 = &param0->r;
frost$core$Int $tmp285 = *$tmp284;
frost$core$Int $tmp286 = (frost$core$Int) {1u};
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286.value;
int64_t $tmp289 = $tmp287 - $tmp288;
frost$core$Int $tmp290 = (frost$core$Int) {$tmp289};
frost$core$Int* $tmp291 = &param0->r;
*$tmp291 = $tmp290;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:155
frost$core$Int* $tmp292 = &param0->r;
frost$core$Int $tmp293 = *$tmp292;
frost$core$Int $tmp294 = (frost$core$Int) {0u};
int64_t $tmp295 = $tmp293.value;
int64_t $tmp296 = $tmp294.value;
bool $tmp297 = $tmp295 > $tmp296;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:156
frost$collections$List** $tmp300 = &param0->choices;
frost$collections$List* $tmp301 = *$tmp300;
frost$core$Int* $tmp302 = &param0->r;
frost$core$Int $tmp303 = *$tmp302;
ITable* $tmp304 = ((frost$collections$ListView*) $tmp301)->$class->itable;
while ($tmp304->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp304 = $tmp304->next;
}
$fn306 $tmp305 = $tmp304->methods[0];
frost$core$Object* $tmp307 = $tmp305(((frost$collections$ListView*) $tmp301), $tmp303);
frost$core$Int $tmp308 = (frost$core$Int) {1u};
int64_t $tmp309 = ((frost$core$Int$wrapper*) $tmp307)->value.value;
int64_t $tmp310 = $tmp308.value;
int64_t $tmp311 = $tmp309 + $tmp310;
frost$core$Int $tmp312 = (frost$core$Int) {$tmp311};
frost$core$Int* $tmp313 = &param0->index;
*$tmp313 = $tmp312;
frost$core$Frost$unref$frost$core$Object$Q($tmp307);
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:159
frost$collections$List** $tmp314 = &param0->choices;
frost$collections$List* $tmp315 = *$tmp314;
frost$core$Int $tmp316 = (frost$core$Int) {0u};
ITable* $tmp317 = ((frost$collections$ListView*) $tmp315)->$class->itable;
while ($tmp317->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp317 = $tmp317->next;
}
$fn319 $tmp318 = $tmp317->methods[0];
frost$core$Object* $tmp320 = $tmp318(((frost$collections$ListView*) $tmp315), $tmp316);
frost$core$Int $tmp321 = (frost$core$Int) {1u};
int64_t $tmp322 = ((frost$core$Int$wrapper*) $tmp320)->value.value;
int64_t $tmp323 = $tmp321.value;
int64_t $tmp324 = $tmp322 + $tmp323;
frost$core$Int $tmp325 = (frost$core$Int) {$tmp324};
frost$core$Int* $tmp326 = &param0->index;
*$tmp326 = $tmp325;
frost$core$Frost$unref$frost$core$Object$Q($tmp320);
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

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:107
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ListView** $tmp327 = &param0->list;
frost$collections$ListView* $tmp328 = *$tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$collections$List** $tmp329 = &param0->choices;
frost$collections$List* $tmp330 = *$tmp329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
return;

}

