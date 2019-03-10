#include "org/frostlang/frost/Int8List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "frost/core/Int8.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int8.Cfrost/core/Int8.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Int32.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frost$Int8List$$IDX$frost$core$Int$R$frost$core$Int8$shim(org$frostlang$frost$Int8List* p0, frost$core$Int p1) {
    frost$core$Int8 result = org$frostlang$frost$Int8List$$IDX$frost$core$Int$R$frost$core$Int8(p0, p1);

    frost$core$Int8$wrapper* $tmp2;
    $tmp2 = (frost$core$Int8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Int8$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$Int8List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } org$frostlang$frost$Int8List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$Int8List$_frost$collections$Iterable, { org$frostlang$frost$Int8List$$IDX$frost$core$Int$R$frost$core$Int8$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } org$frostlang$frost$Int8List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlang$frost$Int8List$_frost$collections$ListView, { org$frostlang$frost$Int8List$get_count$R$frost$core$Int, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frost$Int8List$class_type org$frostlang$frost$Int8List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$Int8List$_frost$collections$CollectionView, { org$frostlang$frost$Int8List$get_asString$R$frost$core$String, org$frostlang$frost$Int8List$cleanup, org$frostlang$frost$Int8List$get_count$R$frost$core$Int, org$frostlang$frost$Int8List$$IDX$frost$core$Int$R$frost$core$Int8$shim} };

typedef frost$core$Int (*$fn132)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn165)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x38\x4c\x69\x73\x74", 28, 9102034065586978486, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 14, -3025721826988001350, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 103, -2730646019714363478, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frost$Int8List$init$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT(org$frostlang$frost$Int8List* param0, frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:16
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:17
frost$core$Int $tmp4 = org$frostlang$frost$Int8List$computeCount$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$R$frost$core$Int(param1);
frost$core$Int* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
frost$core$Int org$frostlang$frost$Int8List$computeCount$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT param0) {

frost$core$Int local0;
frost$core$Int8 local1;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:22
frost$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:23
frost$core$Int8 $tmp8 = param0.step;
frost$core$Int8 $tmp9 = (frost$core$Int8) {0u};
int8_t $tmp10 = $tmp8.value;
int8_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:24
frost$core$Int8 $tmp15 = param0.end;
frost$core$Int8 $tmp16 = param0.start;
int8_t $tmp17 = $tmp15.value;
int8_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 < $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:25
frost$core$Int $tmp22 = (frost$core$Int) {0u};
return $tmp22;
block8:;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:27
frost$core$Int8 $tmp23 = param0.end;
frost$core$Int8 $tmp24 = param0.start;
int8_t $tmp25 = $tmp23.value;
int8_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 > $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:28
frost$core$Int $tmp30 = (frost$core$Int) {0u};
return $tmp30;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:30
frost$core$Int8 $tmp31 = param0.end;
frost$core$Int32 $tmp32 = frost$core$Int32$init$frost$core$Int8($tmp31);
frost$core$Int8 $tmp33 = param0.start;
frost$core$Int32 $tmp34 = frost$core$Int32$init$frost$core$Int8($tmp33);
int32_t $tmp35 = $tmp32.value;
int32_t $tmp36 = $tmp34.value;
int32_t $tmp37 = $tmp35 - $tmp36;
frost$core$Int32 $tmp38 = (frost$core$Int32) {$tmp37};
frost$core$Int8 $tmp39 = param0.step;
frost$core$Int32 $tmp40 = frost$core$Int32$init$frost$core$Int8($tmp39);
int32_t $tmp41 = $tmp38.value;
int32_t $tmp42 = $tmp40.value;
int32_t $tmp43 = $tmp41 / $tmp42;
frost$core$Int32 $tmp44 = (frost$core$Int32) {$tmp43};
frost$core$Int $tmp45 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int32.max(other:frost.core.Int):frost.core.Int from Int8List.frost:30:66
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:857
int32_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45.value;
bool $tmp48 = ((int64_t) $tmp46) > $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:858
int32_t $tmp51 = $tmp44.value;
frost$core$Int $tmp52 = (frost$core$Int) {((int64_t) $tmp51)};
*(&local0) = $tmp52;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:860
int64_t $tmp53 = $tmp45.value;
frost$core$Int $tmp54 = (frost$core$Int) {$tmp53};
*(&local0) = $tmp54;
goto block11;
block11:;
frost$core$Int $tmp55 = *(&local0);
frost$core$Int $tmp56 = (frost$core$Int) {1u};
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57 + $tmp58;
frost$core$Int $tmp60 = (frost$core$Int) {$tmp59};
return $tmp60;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:34
frost$core$Int8 $tmp61 = param0.step;
frost$core$Int8 $tmp62 = (frost$core$Int8) {0u};
int8_t $tmp63 = $tmp61.value;
int8_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 > $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:35
frost$core$Int8 $tmp68 = param0.end;
frost$core$Int8 $tmp69 = param0.start;
int8_t $tmp70 = $tmp68.value;
int8_t $tmp71 = $tmp69.value;
bool $tmp72 = $tmp70 <= $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:36
frost$core$Int $tmp75 = (frost$core$Int) {0u};
return $tmp75;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:38
frost$core$Int8 $tmp76 = (frost$core$Int8) {18446744073709551615u};
*(&local1) = $tmp76;
goto block15;
block16:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:40
frost$core$Int8 $tmp77 = param0.end;
frost$core$Int8 $tmp78 = param0.start;
int8_t $tmp79 = $tmp77.value;
int8_t $tmp80 = $tmp78.value;
bool $tmp81 = $tmp79 >= $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:41
frost$core$Int $tmp84 = (frost$core$Int) {0u};
return $tmp84;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:43
frost$core$Int8 $tmp85 = (frost$core$Int8) {1u};
*(&local1) = $tmp85;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:45
frost$core$Int8 $tmp86 = param0.end;
frost$core$Int32 $tmp87 = frost$core$Int32$init$frost$core$Int8($tmp86);
frost$core$Int8 $tmp88 = param0.start;
frost$core$Int32 $tmp89 = frost$core$Int32$init$frost$core$Int8($tmp88);
int32_t $tmp90 = $tmp87.value;
int32_t $tmp91 = $tmp89.value;
int32_t $tmp92 = $tmp90 - $tmp91;
frost$core$Int32 $tmp93 = (frost$core$Int32) {$tmp92};
frost$core$Int8 $tmp94 = *(&local1);
frost$core$Int32 $tmp95 = frost$core$Int32$init$frost$core$Int8($tmp94);
int32_t $tmp96 = $tmp93.value;
int32_t $tmp97 = $tmp95.value;
int32_t $tmp98 = $tmp96 + $tmp97;
frost$core$Int32 $tmp99 = (frost$core$Int32) {$tmp98};
frost$core$Int8 $tmp100 = param0.step;
frost$core$Int32 $tmp101 = frost$core$Int32$init$frost$core$Int8($tmp100);
int32_t $tmp102 = $tmp99.value;
int32_t $tmp103 = $tmp101.value;
int32_t $tmp104 = $tmp102 / $tmp103;
frost$core$Int32 $tmp105 = (frost$core$Int32) {$tmp104};
frost$core$Int $tmp106 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int32.max(other:frost.core.Int):frost.core.Int from Int8List.frost:45:75
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:857
int32_t $tmp107 = $tmp105.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = ((int64_t) $tmp107) > $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:858
int32_t $tmp112 = $tmp105.value;
frost$core$Int $tmp113 = (frost$core$Int) {((int64_t) $tmp112)};
*(&local2) = $tmp113;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:860
int64_t $tmp114 = $tmp106.value;
frost$core$Int $tmp115 = (frost$core$Int) {$tmp114};
*(&local2) = $tmp115;
goto block21;
block21:;
frost$core$Int $tmp116 = *(&local2);
frost$core$Int $tmp117 = (frost$core$Int) {1u};
int64_t $tmp118 = $tmp116.value;
int64_t $tmp119 = $tmp117.value;
int64_t $tmp120 = $tmp118 + $tmp119;
frost$core$Int $tmp121 = (frost$core$Int) {$tmp120};
return $tmp121;
block2:;
goto block24;
block24:;

}
frost$core$Int org$frostlang$frost$Int8List$get_count$R$frost$core$Int(org$frostlang$frost$Int8List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:51
frost$core$Int* $tmp122 = &param0->_count;
frost$core$Int $tmp123 = *$tmp122;
return $tmp123;

}
frost$core$Int8 org$frostlang$frost$Int8List$$IDX$frost$core$Int$R$frost$core$Int8(org$frostlang$frost$Int8List* param0, frost$core$Int param1) {

frost$core$Int $tmp124 = (frost$core$Int) {0u};
int64_t $tmp125 = param1.value;
int64_t $tmp126 = $tmp124.value;
bool $tmp127 = $tmp125 >= $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block3; else goto block2;
block3:;
ITable* $tmp130 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp130->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp130 = $tmp130->next;
}
$fn132 $tmp131 = $tmp130->methods[0];
frost$core$Int $tmp133 = $tmp131(((frost$collections$CollectionView*) param0));
int64_t $tmp134 = param1.value;
int64_t $tmp135 = $tmp133.value;
bool $tmp136 = $tmp134 < $tmp135;
frost$core$Bit $tmp137 = (frost$core$Bit) {$tmp136};
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block1; else goto block2;
block2:;
frost$core$Int $tmp139 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s140, $tmp139, &$s141);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:56
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT* $tmp142 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT $tmp143 = *$tmp142;
frost$core$Int8 $tmp144 = $tmp143.start;
frost$core$Int32 $tmp145 = frost$core$Int32$init$frost$core$Int8($tmp144);
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT* $tmp146 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT $tmp147 = *$tmp146;
frost$core$Int8 $tmp148 = $tmp147.step;
frost$core$Int32 $tmp149 = frost$core$Int32$init$frost$core$Int8($tmp148);
// begin inline call to function frost.core.Int.get_asInt8():frost.core.Int8 from Int8List.frost:56:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:961
int64_t $tmp150 = param1.value;
frost$core$Int8 $tmp151 = (frost$core$Int8) {((int8_t) $tmp150)};
frost$core$Int32 $tmp152 = frost$core$Int32$init$frost$core$Int8($tmp151);
int32_t $tmp153 = $tmp149.value;
int32_t $tmp154 = $tmp152.value;
int32_t $tmp155 = $tmp153 * $tmp154;
frost$core$Int32 $tmp156 = (frost$core$Int32) {$tmp155};
int32_t $tmp157 = $tmp145.value;
int32_t $tmp158 = $tmp156.value;
int32_t $tmp159 = $tmp157 + $tmp158;
frost$core$Int32 $tmp160 = (frost$core$Int32) {$tmp159};
// begin inline call to function frost.core.Int32.get_asInt8():frost.core.Int8 from Int8List.frost:56:57
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:966
int32_t $tmp161 = $tmp160.value;
frost$core$Int8 $tmp162 = (frost$core$Int8) {((int8_t) $tmp161)};
return $tmp162;

}
frost$core$String* org$frostlang$frost$Int8List$get_asString$R$frost$core$String(org$frostlang$frost$Int8List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:61
ITable* $tmp163 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp163->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[2];
frost$core$String* $tmp166 = $tmp164(((frost$collections$CollectionView*) param0), &$s167);
frost$core$String* $tmp168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s169, $tmp166);
frost$core$String* $tmp170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp168, &$s171);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
return $tmp170;

}
void org$frostlang$frost$Int8List$cleanup(org$frostlang$frost$Int8List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/Int8List.frost:8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

