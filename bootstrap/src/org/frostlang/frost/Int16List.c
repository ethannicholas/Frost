#include "org/frostlang/frost/Int16List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/Int16.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/core/SteppedRange.LTfrost/core/Int16.Cfrost/core/Int16.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Int32.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* org$frostlang$frost$Int16List$$IDX$frost$core$Int64$R$frost$core$Int16$shim(org$frostlang$frost$Int16List* p0, frost$core$Int64 p1) {
    frost$core$Int16 result = org$frostlang$frost$Int16List$$IDX$frost$core$Int64$R$frost$core$Int16(p0, p1);

    frost$core$Int16$wrapper* $tmp2;
    $tmp2 = (frost$core$Int16$wrapper*) frostObjectAlloc(18, (frost$core$Class*) &frost$core$Int16$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } org$frostlang$frost$Int16List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { org$frostlang$frost$Int16List$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } org$frostlang$frost$Int16List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$Int16List$_frost$collections$CollectionView, { org$frostlang$frost$Int16List$$IDX$frost$core$Int64$R$frost$core$Int16$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$Int16List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$Int16List$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
org$frostlang$frost$Int16List$class_type org$frostlang$frost$Int16List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$Int16List$_frost$collections$Iterable, { org$frostlang$frost$Int16List$get_asString$R$frost$core$String, org$frostlang$frost$Int16List$cleanup, org$frostlang$frost$Int16List$get_count$R$frost$core$Int64, org$frostlang$frost$Int16List$$IDX$frost$core$Int64$R$frost$core$Int16$shim} };

typedef frost$core$Int64 (*$fn132)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn165)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74", 29, 8845844969412627187, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 15, 1244863148404851675, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 107, -903279776490533470, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void org$frostlang$frost$Int16List$init$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT(org$frostlang$frost$Int16List* param0, frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT param1) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:16
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:17
frost$core$Int64 $tmp4 = org$frostlang$frost$Int16List$computeCount$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$R$frost$core$Int64(param1);
frost$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
frost$core$Int64 org$frostlang$frost$Int16List$computeCount$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT param0) {

frost$core$Int64 local0;
frost$core$Int16 local1;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:22
frost$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:23
frost$core$Int16 $tmp8 = param0.step;
frost$core$Int16 $tmp9 = (frost$core$Int16) {0};
int16_t $tmp10 = $tmp8.value;
int16_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:24
frost$core$Int16 $tmp15 = param0.end;
frost$core$Int16 $tmp16 = param0.start;
int16_t $tmp17 = $tmp15.value;
int16_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 < $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:25
frost$core$Int64 $tmp22 = (frost$core$Int64) {0};
return $tmp22;
block8:;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:27
frost$core$Int16 $tmp23 = param0.end;
frost$core$Int16 $tmp24 = param0.start;
int16_t $tmp25 = $tmp23.value;
int16_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 > $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:28
frost$core$Int64 $tmp30 = (frost$core$Int64) {0};
return $tmp30;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:30
frost$core$Int16 $tmp31 = param0.end;
frost$core$Int32 $tmp32 = frost$core$Int32$init$frost$core$Int16($tmp31);
frost$core$Int16 $tmp33 = param0.start;
frost$core$Int32 $tmp34 = frost$core$Int32$init$frost$core$Int16($tmp33);
int32_t $tmp35 = $tmp32.value;
int32_t $tmp36 = $tmp34.value;
int32_t $tmp37 = $tmp35 - $tmp36;
frost$core$Int32 $tmp38 = (frost$core$Int32) {$tmp37};
frost$core$Int16 $tmp39 = param0.step;
frost$core$Int32 $tmp40 = frost$core$Int32$init$frost$core$Int16($tmp39);
int32_t $tmp41 = $tmp38.value;
int32_t $tmp42 = $tmp40.value;
int32_t $tmp43 = $tmp41 / $tmp42;
frost$core$Int32 $tmp44 = (frost$core$Int32) {$tmp43};
frost$core$Int64 $tmp45 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int32.max(other:frost.core.Int64):frost.core.Int64 from Int16List.frost:30:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:662
int32_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45.value;
bool $tmp48 = ((int64_t) $tmp46) > $tmp47;
frost$core$Bit $tmp49 = frost$core$Bit$init$builtin_bit($tmp48);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:663
int32_t $tmp51 = $tmp44.value;
frost$core$Int64 $tmp52 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp51));
*(&local0) = $tmp52;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:665
int64_t $tmp53 = $tmp45.value;
frost$core$Int64 $tmp54 = frost$core$Int64$init$builtin_int64($tmp53);
*(&local0) = $tmp54;
goto block11;
block11:;
frost$core$Int64 $tmp55 = *(&local0);
frost$core$Int64 $tmp56 = (frost$core$Int64) {1};
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57 + $tmp58;
frost$core$Int64 $tmp60 = (frost$core$Int64) {$tmp59};
return $tmp60;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:33
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:34
frost$core$Int16 $tmp61 = param0.step;
frost$core$Int16 $tmp62 = (frost$core$Int16) {0};
int16_t $tmp63 = $tmp61.value;
int16_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 > $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:35
frost$core$Int16 $tmp68 = param0.end;
frost$core$Int16 $tmp69 = param0.start;
int16_t $tmp70 = $tmp68.value;
int16_t $tmp71 = $tmp69.value;
bool $tmp72 = $tmp70 <= $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:36
frost$core$Int64 $tmp75 = (frost$core$Int64) {0};
return $tmp75;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:38
frost$core$Int16 $tmp76 = (frost$core$Int16) {18446744073709551615};
*(&local1) = $tmp76;
goto block15;
block16:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:40
frost$core$Int16 $tmp77 = param0.end;
frost$core$Int16 $tmp78 = param0.start;
int16_t $tmp79 = $tmp77.value;
int16_t $tmp80 = $tmp78.value;
bool $tmp81 = $tmp79 >= $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:41
frost$core$Int64 $tmp84 = (frost$core$Int64) {0};
return $tmp84;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:43
frost$core$Int16 $tmp85 = (frost$core$Int16) {1};
*(&local1) = $tmp85;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:45
frost$core$Int16 $tmp86 = param0.end;
frost$core$Int32 $tmp87 = frost$core$Int32$init$frost$core$Int16($tmp86);
frost$core$Int16 $tmp88 = param0.start;
frost$core$Int32 $tmp89 = frost$core$Int32$init$frost$core$Int16($tmp88);
int32_t $tmp90 = $tmp87.value;
int32_t $tmp91 = $tmp89.value;
int32_t $tmp92 = $tmp90 - $tmp91;
frost$core$Int32 $tmp93 = (frost$core$Int32) {$tmp92};
frost$core$Int16 $tmp94 = *(&local1);
frost$core$Int32 $tmp95 = frost$core$Int32$init$frost$core$Int16($tmp94);
int32_t $tmp96 = $tmp93.value;
int32_t $tmp97 = $tmp95.value;
int32_t $tmp98 = $tmp96 + $tmp97;
frost$core$Int32 $tmp99 = (frost$core$Int32) {$tmp98};
frost$core$Int16 $tmp100 = param0.step;
frost$core$Int32 $tmp101 = frost$core$Int32$init$frost$core$Int16($tmp100);
int32_t $tmp102 = $tmp99.value;
int32_t $tmp103 = $tmp101.value;
int32_t $tmp104 = $tmp102 / $tmp103;
frost$core$Int32 $tmp105 = (frost$core$Int32) {$tmp104};
frost$core$Int64 $tmp106 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int32.max(other:frost.core.Int64):frost.core.Int64 from Int16List.frost:45:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:662
int32_t $tmp107 = $tmp105.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = ((int64_t) $tmp107) > $tmp108;
frost$core$Bit $tmp110 = frost$core$Bit$init$builtin_bit($tmp109);
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:663
int32_t $tmp112 = $tmp105.value;
frost$core$Int64 $tmp113 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp112));
*(&local2) = $tmp113;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:665
int64_t $tmp114 = $tmp106.value;
frost$core$Int64 $tmp115 = frost$core$Int64$init$builtin_int64($tmp114);
*(&local2) = $tmp115;
goto block21;
block21:;
frost$core$Int64 $tmp116 = *(&local2);
frost$core$Int64 $tmp117 = (frost$core$Int64) {1};
int64_t $tmp118 = $tmp116.value;
int64_t $tmp119 = $tmp117.value;
int64_t $tmp120 = $tmp118 + $tmp119;
frost$core$Int64 $tmp121 = (frost$core$Int64) {$tmp120};
return $tmp121;
block2:;
goto block24;
block24:;

}
frost$core$Int64 org$frostlang$frost$Int16List$get_count$R$frost$core$Int64(org$frostlang$frost$Int16List* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:51
frost$core$Int64* $tmp122 = &param0->_count;
frost$core$Int64 $tmp123 = *$tmp122;
return $tmp123;

}
frost$core$Int16 org$frostlang$frost$Int16List$$IDX$frost$core$Int64$R$frost$core$Int16(org$frostlang$frost$Int16List* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp124 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp133 = $tmp131(((frost$collections$CollectionView*) param0));
int64_t $tmp134 = param1.value;
int64_t $tmp135 = $tmp133.value;
bool $tmp136 = $tmp134 < $tmp135;
frost$core$Bit $tmp137 = (frost$core$Bit) {$tmp136};
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp139 = (frost$core$Int64) {55};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s140, $tmp139, &$s141);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:56
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT* $tmp142 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT $tmp143 = *$tmp142;
frost$core$Int16 $tmp144 = $tmp143.start;
frost$core$Int32 $tmp145 = frost$core$Int32$init$frost$core$Int16($tmp144);
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT* $tmp146 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT $tmp147 = *$tmp146;
frost$core$Int16 $tmp148 = $tmp147.step;
frost$core$Int32 $tmp149 = frost$core$Int32$init$frost$core$Int16($tmp148);
// begin inline call to function frost.core.Int64.get_asInt16():frost.core.Int16 from Int16List.frost:56:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:402
int64_t $tmp150 = param1.value;
frost$core$Int16 $tmp151 = (frost$core$Int16) {((int16_t) $tmp150)};
frost$core$Int32 $tmp152 = frost$core$Int32$init$frost$core$Int16($tmp151);
int32_t $tmp153 = $tmp149.value;
int32_t $tmp154 = $tmp152.value;
int32_t $tmp155 = $tmp153 * $tmp154;
frost$core$Int32 $tmp156 = (frost$core$Int32) {$tmp155};
int32_t $tmp157 = $tmp145.value;
int32_t $tmp158 = $tmp156.value;
int32_t $tmp159 = $tmp157 + $tmp158;
frost$core$Int32 $tmp160 = (frost$core$Int32) {$tmp159};
// begin inline call to function frost.core.Int32.get_asInt16():frost.core.Int16 from Int16List.frost:56:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:762
int32_t $tmp161 = $tmp160.value;
frost$core$Int16 $tmp162 = (frost$core$Int16) {((int16_t) $tmp161)};
return $tmp162;

}
frost$core$String* org$frostlang$frost$Int16List$get_asString$R$frost$core$String(org$frostlang$frost$Int16List* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:61
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
void org$frostlang$frost$Int16List$cleanup(org$frostlang$frost$Int16List* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

