#include "org/frostlang/frost/UInt32List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/UInt32.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt32.Cfrost/core/UInt32.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frost$UInt32List$$IDX$frost$core$Int$R$frost$core$UInt32$shim(org$frostlang$frost$UInt32List* p0, frost$core$Int p1) {
    frost$core$UInt32 result = org$frostlang$frost$UInt32List$$IDX$frost$core$Int$R$frost$core$UInt32(p0, p1);

    frost$core$UInt32$wrapper* $tmp2;
    $tmp2 = (frost$core$UInt32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$UInt32$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$UInt32List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } org$frostlang$frost$UInt32List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlang$frost$UInt32List$_frost$collections$Iterable, { org$frostlang$frost$UInt32List$get_count$R$frost$core$Int, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } org$frostlang$frost$UInt32List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$UInt32List$_frost$collections$CollectionView, { org$frostlang$frost$UInt32List$$IDX$frost$core$Int$R$frost$core$UInt32$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

static frost$core$String $s1;
org$frostlang$frost$UInt32List$class_type org$frostlang$frost$UInt32List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$UInt32List$_frost$collections$ListView, { org$frostlang$frost$UInt32List$get_asString$R$frost$core$String, org$frostlang$frost$UInt32List$cleanup, org$frostlang$frost$UInt32List$get_count$R$frost$core$Int, org$frostlang$frost$UInt32List$$IDX$frost$core$Int$R$frost$core$UInt32$shim} };

typedef frost$core$Int (*$fn105)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn133)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x33\x32\x4c\x69\x73\x74", 30, 6333872955516600108, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 3186802054945982156, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 107, -1738340927611061906, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frost$UInt32List$init$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT(org$frostlang$frost$UInt32List* param0, frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:16
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:17
frost$core$Int $tmp4 = org$frostlang$frost$UInt32List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$R$frost$core$Int(param1);
frost$core$Int* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
frost$core$Int org$frostlang$frost$UInt32List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT param0) {

frost$core$Int64 local0;
frost$core$UInt32 local1;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:22
frost$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:23
frost$core$UInt32 $tmp8 = param0.step;
frost$core$UInt32 $tmp9 = (frost$core$UInt32) {0u};
uint32_t $tmp10 = $tmp8.value;
uint32_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:24
frost$core$UInt32 $tmp15 = param0.end;
frost$core$UInt32 $tmp16 = param0.start;
uint32_t $tmp17 = $tmp15.value;
uint32_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 < $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:25
frost$core$Int $tmp22 = (frost$core$Int) {0u};
return $tmp22;
block8:;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:27
frost$core$UInt32 $tmp23 = param0.end;
frost$core$UInt32 $tmp24 = param0.start;
uint32_t $tmp25 = $tmp23.value;
uint32_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 > $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:28
frost$core$Int $tmp30 = (frost$core$Int) {0u};
return $tmp30;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:30
frost$core$UInt32 $tmp31 = param0.end;
frost$core$UInt32 $tmp32 = param0.start;
uint32_t $tmp33 = $tmp31.value;
uint32_t $tmp34 = $tmp32.value;
uint32_t $tmp35 = $tmp33 - $tmp34;
frost$core$UInt32 $tmp36 = (frost$core$UInt32) {$tmp35};
frost$core$UInt32 $tmp37 = param0.step;
uint32_t $tmp38 = $tmp36.value;
uint32_t $tmp39 = $tmp37.value;
uint32_t $tmp40 = $tmp38 / $tmp39;
frost$core$UInt32 $tmp41 = (frost$core$UInt32) {$tmp40};
frost$core$Int $tmp42 = (frost$core$Int) {0u};
// begin inline call to function frost.core.UInt32.max(other:frost.core.Int):frost.core.Int64 from UInt32List.frost:30:66
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:828
uint32_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42.value;
bool $tmp45 = ((int64_t) $tmp43) > $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:829
uint32_t $tmp48 = $tmp41.value;
frost$core$Int64 $tmp49 = (frost$core$Int64) {((int64_t) $tmp48)};
*(&local0) = $tmp49;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:831
int64_t $tmp50 = $tmp42.value;
frost$core$Int64 $tmp51 = (frost$core$Int64) {$tmp50};
*(&local0) = $tmp51;
goto block11;
block11:;
frost$core$Int64 $tmp52 = *(&local0);
frost$core$Int64 $tmp53 = (frost$core$Int64) {1u};
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54 + $tmp55;
frost$core$Int64 $tmp57 = (frost$core$Int64) {$tmp56};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from UInt32List.frost:30:74
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp58 = $tmp57.value;
frost$core$Int $tmp59 = (frost$core$Int) {$tmp58};
return $tmp59;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:34
frost$core$UInt32 $tmp60 = (frost$core$UInt32) {1u};
*(&local1) = $tmp60;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:35
frost$core$UInt32 $tmp61 = param0.end;
frost$core$UInt32 $tmp62 = param0.start;
uint32_t $tmp63 = $tmp61.value;
uint32_t $tmp64 = $tmp62.value;
uint32_t $tmp65 = $tmp63 - $tmp64;
frost$core$UInt32 $tmp66 = (frost$core$UInt32) {$tmp65};
frost$core$UInt32 $tmp67 = *(&local1);
uint32_t $tmp68 = $tmp66.value;
uint32_t $tmp69 = $tmp67.value;
uint32_t $tmp70 = $tmp68 + $tmp69;
frost$core$UInt32 $tmp71 = (frost$core$UInt32) {$tmp70};
frost$core$UInt32 $tmp72 = param0.step;
uint32_t $tmp73 = $tmp71.value;
uint32_t $tmp74 = $tmp72.value;
uint32_t $tmp75 = $tmp73 / $tmp74;
frost$core$UInt32 $tmp76 = (frost$core$UInt32) {$tmp75};
frost$core$Int $tmp77 = (frost$core$Int) {0u};
// begin inline call to function frost.core.UInt32.max(other:frost.core.Int):frost.core.Int64 from UInt32List.frost:35:75
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:828
uint32_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
bool $tmp80 = ((int64_t) $tmp78) > $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:829
uint32_t $tmp83 = $tmp76.value;
frost$core$Int64 $tmp84 = (frost$core$Int64) {((int64_t) $tmp83)};
*(&local2) = $tmp84;
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:831
int64_t $tmp85 = $tmp77.value;
frost$core$Int64 $tmp86 = (frost$core$Int64) {$tmp85};
*(&local2) = $tmp86;
goto block15;
block15:;
frost$core$Int64 $tmp87 = *(&local2);
frost$core$Int64 $tmp88 = (frost$core$Int64) {1u};
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 + $tmp90;
frost$core$Int64 $tmp92 = (frost$core$Int64) {$tmp91};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from UInt32List.frost:35:83
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp93 = $tmp92.value;
frost$core$Int $tmp94 = (frost$core$Int) {$tmp93};
return $tmp94;
block2:;
goto block19;
block19:;

}
frost$core$Int org$frostlang$frost$UInt32List$get_count$R$frost$core$Int(org$frostlang$frost$UInt32List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:41
frost$core$Int* $tmp95 = &param0->_count;
frost$core$Int $tmp96 = *$tmp95;
return $tmp96;

}
frost$core$UInt32 org$frostlang$frost$UInt32List$$IDX$frost$core$Int$R$frost$core$UInt32(org$frostlang$frost$UInt32List* param0, frost$core$Int param1) {

frost$core$Int $tmp97 = (frost$core$Int) {0u};
int64_t $tmp98 = param1.value;
int64_t $tmp99 = $tmp97.value;
bool $tmp100 = $tmp98 >= $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block3; else goto block2;
block3:;
ITable* $tmp103 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[0];
frost$core$Int $tmp106 = $tmp104(((frost$collections$CollectionView*) param0));
int64_t $tmp107 = param1.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 < $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block1; else goto block2;
block2:;
frost$core$Int $tmp112 = (frost$core$Int) {45u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s113, $tmp112, &$s114);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:46
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT* $tmp115 = &param0->range;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT $tmp116 = *$tmp115;
frost$core$UInt32 $tmp117 = $tmp116.start;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT* $tmp118 = &param0->range;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT $tmp119 = *$tmp118;
frost$core$UInt32 $tmp120 = $tmp119.step;
// begin inline call to function frost.core.Int.get_asUInt32():frost.core.UInt32 from UInt32List.frost:46:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:1003
int64_t $tmp121 = param1.value;
frost$core$UInt32 $tmp122 = (frost$core$UInt32) {((uint32_t) $tmp121)};
uint32_t $tmp123 = $tmp120.value;
uint32_t $tmp124 = $tmp122.value;
uint32_t $tmp125 = $tmp123 * $tmp124;
frost$core$UInt32 $tmp126 = (frost$core$UInt32) {$tmp125};
uint32_t $tmp127 = $tmp117.value;
uint32_t $tmp128 = $tmp126.value;
uint32_t $tmp129 = $tmp127 + $tmp128;
frost$core$UInt32 $tmp130 = (frost$core$UInt32) {$tmp129};
return $tmp130;

}
frost$core$String* org$frostlang$frost$UInt32List$get_asString$R$frost$core$String(org$frostlang$frost$UInt32List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:51
ITable* $tmp131 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp131 = $tmp131->next;
}
$fn133 $tmp132 = $tmp131->methods[2];
frost$core$String* $tmp134 = $tmp132(((frost$collections$CollectionView*) param0), &$s135);
frost$core$String* $tmp136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s137, $tmp134);
frost$core$String* $tmp138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp136, &$s139);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
return $tmp138;

}
void org$frostlang$frost$UInt32List$cleanup(org$frostlang$frost$UInt32List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt32List.frost:8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

