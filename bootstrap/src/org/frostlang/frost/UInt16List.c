#include "org/frostlang/frost/UInt16List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/UInt16.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt16.Cfrost/core/UInt16.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt32.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* org$frostlang$frost$UInt16List$$IDX$frost$core$Int$R$frost$core$UInt16$shim(org$frostlang$frost$UInt16List* p0, frost$core$Int p1) {
    frost$core$UInt16 result = org$frostlang$frost$UInt16List$$IDX$frost$core$Int$R$frost$core$UInt16(p0, p1);

    frost$core$UInt16$wrapper* $tmp2;
    $tmp2 = (frost$core$UInt16$wrapper*) frostObjectAlloc(18, (frost$core$Class*) &frost$core$UInt16$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } org$frostlang$frost$UInt16List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { org$frostlang$frost$UInt16List$$IDX$frost$core$Int$R$frost$core$UInt16$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$UInt16List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$UInt16List$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } org$frostlang$frost$UInt16List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlang$frost$UInt16List$_frost$collections$Iterable, { org$frostlang$frost$UInt16List$get_count$R$frost$core$Int, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frost$UInt16List$class_type org$frostlang$frost$UInt16List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$UInt16List$_frost$collections$CollectionView, { org$frostlang$frost$UInt16List$get_asString$R$frost$core$String, org$frostlang$frost$UInt16List$cleanup, org$frostlang$frost$UInt16List$get_count$R$frost$core$Int, org$frostlang$frost$UInt16List$$IDX$frost$core$Int$R$frost$core$UInt16$shim} };

typedef frost$core$Int (*$fn112)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn145)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x31\x36\x4c\x69\x73\x74", 30, 4039612249519127878, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, -7249708953424587494, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 107, 3862250921498692770, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frost$UInt16List$init$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT(org$frostlang$frost$UInt16List* param0, frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:16
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:17
frost$core$Int $tmp4 = org$frostlang$frost$UInt16List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT$R$frost$core$Int(param1);
frost$core$Int* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
frost$core$Int org$frostlang$frost$UInt16List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT param0) {

frost$core$Int64 local0;
frost$core$UInt16 local1;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:22
frost$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:23
frost$core$UInt16 $tmp8 = param0.step;
frost$core$UInt16 $tmp9 = (frost$core$UInt16) {0u};
uint16_t $tmp10 = $tmp8.value;
uint16_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:24
frost$core$UInt16 $tmp15 = param0.end;
frost$core$UInt16 $tmp16 = param0.start;
uint16_t $tmp17 = $tmp15.value;
uint16_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 < $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:25
frost$core$Int $tmp22 = (frost$core$Int) {0u};
return $tmp22;
block8:;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:27
frost$core$UInt16 $tmp23 = param0.end;
frost$core$UInt16 $tmp24 = param0.start;
uint16_t $tmp25 = $tmp23.value;
uint16_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 > $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:28
frost$core$Int $tmp30 = (frost$core$Int) {0u};
return $tmp30;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:30
frost$core$UInt16 $tmp31 = param0.end;
frost$core$UInt32 $tmp32 = frost$core$UInt32$init$frost$core$UInt16($tmp31);
frost$core$UInt16 $tmp33 = param0.start;
frost$core$UInt32 $tmp34 = frost$core$UInt32$init$frost$core$UInt16($tmp33);
uint32_t $tmp35 = $tmp32.value;
uint32_t $tmp36 = $tmp34.value;
uint32_t $tmp37 = $tmp35 - $tmp36;
frost$core$UInt32 $tmp38 = (frost$core$UInt32) {$tmp37};
frost$core$UInt16 $tmp39 = param0.step;
frost$core$UInt32 $tmp40 = frost$core$UInt32$init$frost$core$UInt16($tmp39);
uint32_t $tmp41 = $tmp38.value;
uint32_t $tmp42 = $tmp40.value;
uint32_t $tmp43 = $tmp41 / $tmp42;
frost$core$UInt32 $tmp44 = (frost$core$UInt32) {$tmp43};
frost$core$Int $tmp45 = (frost$core$Int) {0u};
// begin inline call to function frost.core.UInt32.max(other:frost.core.Int):frost.core.Int64 from UInt16List.frost:30:66
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:828
uint32_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45.value;
bool $tmp48 = ((int64_t) $tmp46) > $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:829
uint32_t $tmp51 = $tmp44.value;
frost$core$Int64 $tmp52 = (frost$core$Int64) {((int64_t) $tmp51)};
*(&local0) = $tmp52;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:831
int64_t $tmp53 = $tmp45.value;
frost$core$Int64 $tmp54 = (frost$core$Int64) {$tmp53};
*(&local0) = $tmp54;
goto block11;
block11:;
frost$core$Int64 $tmp55 = *(&local0);
frost$core$Int64 $tmp56 = (frost$core$Int64) {1u};
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57 + $tmp58;
frost$core$Int64 $tmp60 = (frost$core$Int64) {$tmp59};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from UInt16List.frost:30:74
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp61 = $tmp60.value;
frost$core$Int $tmp62 = (frost$core$Int) {$tmp61};
return $tmp62;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:34
frost$core$UInt16 $tmp63 = (frost$core$UInt16) {1u};
*(&local1) = $tmp63;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:35
frost$core$UInt16 $tmp64 = param0.end;
frost$core$UInt32 $tmp65 = frost$core$UInt32$init$frost$core$UInt16($tmp64);
frost$core$UInt16 $tmp66 = param0.start;
frost$core$UInt32 $tmp67 = frost$core$UInt32$init$frost$core$UInt16($tmp66);
uint32_t $tmp68 = $tmp65.value;
uint32_t $tmp69 = $tmp67.value;
uint32_t $tmp70 = $tmp68 - $tmp69;
frost$core$UInt32 $tmp71 = (frost$core$UInt32) {$tmp70};
frost$core$UInt16 $tmp72 = *(&local1);
frost$core$UInt32 $tmp73 = frost$core$UInt32$init$frost$core$UInt16($tmp72);
uint32_t $tmp74 = $tmp71.value;
uint32_t $tmp75 = $tmp73.value;
uint32_t $tmp76 = $tmp74 + $tmp75;
frost$core$UInt32 $tmp77 = (frost$core$UInt32) {$tmp76};
frost$core$UInt16 $tmp78 = param0.step;
frost$core$UInt32 $tmp79 = frost$core$UInt32$init$frost$core$UInt16($tmp78);
uint32_t $tmp80 = $tmp77.value;
uint32_t $tmp81 = $tmp79.value;
uint32_t $tmp82 = $tmp80 / $tmp81;
frost$core$UInt32 $tmp83 = (frost$core$UInt32) {$tmp82};
frost$core$Int $tmp84 = (frost$core$Int) {0u};
// begin inline call to function frost.core.UInt32.max(other:frost.core.Int):frost.core.Int64 from UInt16List.frost:35:75
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:828
uint32_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84.value;
bool $tmp87 = ((int64_t) $tmp85) > $tmp86;
frost$core$Bit $tmp88 = (frost$core$Bit) {$tmp87};
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:829
uint32_t $tmp90 = $tmp83.value;
frost$core$Int64 $tmp91 = (frost$core$Int64) {((int64_t) $tmp90)};
*(&local2) = $tmp91;
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:831
int64_t $tmp92 = $tmp84.value;
frost$core$Int64 $tmp93 = (frost$core$Int64) {$tmp92};
*(&local2) = $tmp93;
goto block15;
block15:;
frost$core$Int64 $tmp94 = *(&local2);
frost$core$Int64 $tmp95 = (frost$core$Int64) {1u};
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96 + $tmp97;
frost$core$Int64 $tmp99 = (frost$core$Int64) {$tmp98};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from UInt16List.frost:35:83
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp100 = $tmp99.value;
frost$core$Int $tmp101 = (frost$core$Int) {$tmp100};
return $tmp101;
block2:;
goto block19;
block19:;

}
frost$core$Int org$frostlang$frost$UInt16List$get_count$R$frost$core$Int(org$frostlang$frost$UInt16List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:41
frost$core$Int* $tmp102 = &param0->_count;
frost$core$Int $tmp103 = *$tmp102;
return $tmp103;

}
frost$core$UInt16 org$frostlang$frost$UInt16List$$IDX$frost$core$Int$R$frost$core$UInt16(org$frostlang$frost$UInt16List* param0, frost$core$Int param1) {

frost$core$Int $tmp104 = (frost$core$Int) {0u};
int64_t $tmp105 = param1.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 >= $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block3; else goto block2;
block3:;
ITable* $tmp110 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp110->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp110 = $tmp110->next;
}
$fn112 $tmp111 = $tmp110->methods[0];
frost$core$Int $tmp113 = $tmp111(((frost$collections$CollectionView*) param0));
int64_t $tmp114 = param1.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 < $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block1; else goto block2;
block2:;
frost$core$Int $tmp119 = (frost$core$Int) {45u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s120, $tmp119, &$s121);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:46
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT* $tmp122 = &param0->range;
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT $tmp123 = *$tmp122;
frost$core$UInt16 $tmp124 = $tmp123.start;
frost$core$UInt32 $tmp125 = frost$core$UInt32$init$frost$core$UInt16($tmp124);
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT* $tmp126 = &param0->range;
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT $tmp127 = *$tmp126;
frost$core$UInt16 $tmp128 = $tmp127.step;
frost$core$UInt32 $tmp129 = frost$core$UInt32$init$frost$core$UInt16($tmp128);
// begin inline call to function frost.core.Int.get_asUInt16():frost.core.UInt16 from UInt16List.frost:46:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:997
int64_t $tmp130 = param1.value;
frost$core$UInt16 $tmp131 = (frost$core$UInt16) {((uint16_t) $tmp130)};
frost$core$UInt32 $tmp132 = frost$core$UInt32$init$frost$core$UInt16($tmp131);
uint32_t $tmp133 = $tmp129.value;
uint32_t $tmp134 = $tmp132.value;
uint32_t $tmp135 = $tmp133 * $tmp134;
frost$core$UInt32 $tmp136 = (frost$core$UInt32) {$tmp135};
uint32_t $tmp137 = $tmp125.value;
uint32_t $tmp138 = $tmp136.value;
uint32_t $tmp139 = $tmp137 + $tmp138;
frost$core$UInt32 $tmp140 = (frost$core$UInt32) {$tmp139};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from UInt16List.frost:46:59
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:972
uint32_t $tmp141 = $tmp140.value;
frost$core$UInt16 $tmp142 = (frost$core$UInt16) {((uint16_t) $tmp141)};
return $tmp142;

}
frost$core$String* org$frostlang$frost$UInt16List$get_asString$R$frost$core$String(org$frostlang$frost$UInt16List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:51
ITable* $tmp143 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp143->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp143 = $tmp143->next;
}
$fn145 $tmp144 = $tmp143->methods[2];
frost$core$String* $tmp146 = $tmp144(((frost$collections$CollectionView*) param0), &$s147);
frost$core$String* $tmp148 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s149, $tmp146);
frost$core$String* $tmp150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp148, &$s151);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
return $tmp150;

}
void org$frostlang$frost$UInt16List$cleanup(org$frostlang$frost$UInt16List* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/frost/UInt16List.frost:8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

