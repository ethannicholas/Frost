#include "org/frostlang/frost/Int64List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frost$Int64List$$IDX$frost$core$Int$R$frost$core$Int64$shim(org$frostlang$frost$Int64List* p0, frost$core$Int p1) {
    frost$core$Int64 result = org$frostlang$frost$Int64List$$IDX$frost$core$Int$R$frost$core$Int64(p0, p1);

    frost$core$Int64$wrapper* $tmp2;
    $tmp2 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frost$Int64List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { org$frostlang$frost$Int64List$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } org$frostlang$frost$Int64List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$Int64List$_frost$collections$CollectionView, { org$frostlang$frost$Int64List$$IDX$frost$core$Int$R$frost$core$Int64$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$Int64List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$Int64List$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
org$frostlang$frost$Int64List$class_type org$frostlang$frost$Int64List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$Int64List$_frost$collections$Iterable, { org$frostlang$frost$Int64List$get_asString$R$frost$core$String, org$frostlang$frost$Int64List$cleanup, org$frostlang$frost$Int64List$get_count$R$frost$core$Int, org$frostlang$frost$Int64List$$IDX$frost$core$Int$R$frost$core$Int64$shim} };

typedef frost$core$Int (*$fn129)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn157)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74", 29, 4836837640627173236, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 15, -1517823672231586076, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 105, 2728701585544647804, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT(org$frostlang$frost$Int64List* param0, frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT param1) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:16
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:17
frost$core$Int $tmp4 = org$frostlang$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int(param1);
frost$core$Int* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
frost$core$Int org$frostlang$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:22
frost$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:23
frost$core$Int64 $tmp8 = param0.step;
frost$core$Int64 $tmp9 = (frost$core$Int64) {0u};
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:24
frost$core$Int64 $tmp15 = param0.end;
frost$core$Int64 $tmp16 = param0.start;
int64_t $tmp17 = $tmp15.value;
int64_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 < $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:25
frost$core$Int $tmp22 = (frost$core$Int) {0u};
return $tmp22;
block8:;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:27
frost$core$Int64 $tmp23 = param0.end;
frost$core$Int64 $tmp24 = param0.start;
int64_t $tmp25 = $tmp23.value;
int64_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 > $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:28
frost$core$Int $tmp30 = (frost$core$Int) {0u};
return $tmp30;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:30
frost$core$Int64 $tmp31 = param0.end;
frost$core$Int64 $tmp32 = param0.start;
int64_t $tmp33 = $tmp31.value;
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33 - $tmp34;
frost$core$Int64 $tmp36 = (frost$core$Int64) {$tmp35};
frost$core$Int64 $tmp37 = param0.step;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37.value;
int64_t $tmp40 = $tmp38 / $tmp39;
frost$core$Int64 $tmp41 = (frost$core$Int64) {$tmp40};
frost$core$Int64 $tmp42 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from Int64List.frost:30:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:498
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 > $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:499
int64_t $tmp48 = $tmp41.value;
frost$core$Int64 $tmp49 = (frost$core$Int64) {$tmp48};
*(&local0) = $tmp49;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:501
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
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int64List.frost:30:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp58 = $tmp57.value;
frost$core$Int $tmp59 = (frost$core$Int) {((int64_t) $tmp58)};
return $tmp59;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:33
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:34
frost$core$Int64 $tmp60 = param0.step;
frost$core$Int64 $tmp61 = (frost$core$Int64) {0u};
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 > $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block15; else goto block17;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:35
frost$core$Int64 $tmp67 = param0.end;
frost$core$Int64 $tmp68 = param0.start;
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 <= $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:36
frost$core$Int $tmp74 = (frost$core$Int) {0u};
return $tmp74;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:38
frost$core$Int64 $tmp75 = (frost$core$Int64) {18446744073709551615u};
*(&local1) = $tmp75;
goto block16;
block17:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:40
frost$core$Int64 $tmp76 = param0.end;
frost$core$Int64 $tmp77 = param0.start;
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
bool $tmp80 = $tmp78 >= $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:41
frost$core$Int $tmp83 = (frost$core$Int) {0u};
return $tmp83;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:43
frost$core$Int64 $tmp84 = (frost$core$Int64) {1u};
*(&local1) = $tmp84;
goto block16;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:45
frost$core$Int64 $tmp85 = param0.end;
frost$core$Int64 $tmp86 = param0.start;
int64_t $tmp87 = $tmp85.value;
int64_t $tmp88 = $tmp86.value;
int64_t $tmp89 = $tmp87 - $tmp88;
frost$core$Int64 $tmp90 = (frost$core$Int64) {$tmp89};
frost$core$Int64 $tmp91 = *(&local1);
int64_t $tmp92 = $tmp90.value;
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = $tmp92 + $tmp93;
frost$core$Int64 $tmp95 = (frost$core$Int64) {$tmp94};
frost$core$Int64 $tmp96 = param0.step;
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97 / $tmp98;
frost$core$Int64 $tmp100 = (frost$core$Int64) {$tmp99};
frost$core$Int64 $tmp101 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from Int64List.frost:45:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:498
int64_t $tmp102 = $tmp100.value;
int64_t $tmp103 = $tmp101.value;
bool $tmp104 = $tmp102 > $tmp103;
frost$core$Bit $tmp105 = (frost$core$Bit) {$tmp104};
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:499
int64_t $tmp107 = $tmp100.value;
frost$core$Int64 $tmp108 = (frost$core$Int64) {$tmp107};
*(&local2) = $tmp108;
goto block22;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:501
int64_t $tmp109 = $tmp101.value;
frost$core$Int64 $tmp110 = (frost$core$Int64) {$tmp109};
*(&local2) = $tmp110;
goto block22;
block22:;
frost$core$Int64 $tmp111 = *(&local2);
frost$core$Int64 $tmp112 = (frost$core$Int64) {1u};
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113 + $tmp114;
frost$core$Int64 $tmp116 = (frost$core$Int64) {$tmp115};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int64List.frost:45:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp117 = $tmp116.value;
frost$core$Int $tmp118 = (frost$core$Int) {((int64_t) $tmp117)};
return $tmp118;
block2:;
goto block26;
block26:;

}
frost$core$Int org$frostlang$frost$Int64List$get_count$R$frost$core$Int(org$frostlang$frost$Int64List* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:51
frost$core$Int* $tmp119 = &param0->_count;
frost$core$Int $tmp120 = *$tmp119;
return $tmp120;

}
frost$core$Int64 org$frostlang$frost$Int64List$$IDX$frost$core$Int$R$frost$core$Int64(org$frostlang$frost$Int64List* param0, frost$core$Int param1) {

frost$core$Int $tmp121 = (frost$core$Int) {0u};
int64_t $tmp122 = param1.value;
int64_t $tmp123 = $tmp121.value;
bool $tmp124 = $tmp122 >= $tmp123;
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124};
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block3; else goto block2;
block3:;
ITable* $tmp127 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[0];
frost$core$Int $tmp130 = $tmp128(((frost$collections$CollectionView*) param0));
int64_t $tmp131 = param1.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 < $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block1; else goto block2;
block2:;
frost$core$Int $tmp136 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s137, $tmp136, &$s138);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:56
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT* $tmp139 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp140 = *$tmp139;
frost$core$Int64 $tmp141 = $tmp140.start;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT* $tmp142 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp143 = *$tmp142;
frost$core$Int64 $tmp144 = $tmp143.step;
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Int64List.frost:56:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
int64_t $tmp145 = param1.value;
frost$core$Int64 $tmp146 = (frost$core$Int64) {((int64_t) $tmp145)};
int64_t $tmp147 = $tmp144.value;
int64_t $tmp148 = $tmp146.value;
int64_t $tmp149 = $tmp147 * $tmp148;
frost$core$Int64 $tmp150 = (frost$core$Int64) {$tmp149};
int64_t $tmp151 = $tmp141.value;
int64_t $tmp152 = $tmp150.value;
int64_t $tmp153 = $tmp151 + $tmp152;
frost$core$Int64 $tmp154 = (frost$core$Int64) {$tmp153};
return $tmp154;

}
frost$core$String* org$frostlang$frost$Int64List$get_asString$R$frost$core$String(org$frostlang$frost$Int64List* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:61
ITable* $tmp155 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[3];
frost$core$String* $tmp158 = $tmp156(((frost$collections$CollectionView*) param0), &$s159);
frost$core$String* $tmp160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s161, $tmp158);
frost$core$String* $tmp162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp160, &$s163);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
return $tmp162;

}
void org$frostlang$frost$Int64List$cleanup(org$frostlang$frost$Int64List* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

