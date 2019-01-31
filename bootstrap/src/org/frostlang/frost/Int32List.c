#include "org/frostlang/frost/Int32List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int64.h"
#include "frost/core/Int32.h"
#include "frost/core/SteppedRange.LTfrost/core/Int32.Cfrost/core/Int32.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frost$Int32List$$IDX$frost$core$Int64$R$frost$core$Int32$shim(org$frostlang$frost$Int32List* p0, frost$core$Int64 p1) {
    frost$core$Int32 result = org$frostlang$frost$Int32List$$IDX$frost$core$Int64$R$frost$core$Int32(p0, p1);

    frost$core$Int32$wrapper* $tmp2;
    $tmp2 = (frost$core$Int32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Int32$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } org$frostlang$frost$Int32List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { org$frostlang$frost$Int32List$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$Int32List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$Int32List$_frost$collections$CollectionView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frost$Int32List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$Int32List$_frost$collections$Iterable, { org$frostlang$frost$Int32List$$IDX$frost$core$Int64$R$frost$core$Int32$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

static frost$core$String $s1;
org$frostlang$frost$Int32List$class_type org$frostlang$frost$Int32List$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$Int32List$_frost$collections$ListView, { org$frostlang$frost$Int32List$get_asString$R$frost$core$String, org$frostlang$frost$Int32List$cleanup, org$frostlang$frost$Int32List$get_count$R$frost$core$Int64, org$frostlang$frost$Int32List$$IDX$frost$core$Int64$R$frost$core$Int32$shim} };

typedef frost$core$Int64 (*$fn107)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn134)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x33\x32\x4c\x69\x73\x74", 29, 8845844990016586585, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 15, -5075525129274066703, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 107, 754691947171411630, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void org$frostlang$frost$Int32List$init$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT(org$frostlang$frost$Int32List* param0, frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT param1) {

// line 16
frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
frost$core$Int64 $tmp4 = org$frostlang$frost$Int32List$computeCount$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$R$frost$core$Int64(param1);
frost$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
frost$core$Int64 org$frostlang$frost$Int32List$computeCount$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT param0) {

frost$core$Int32 local0;
// line 22
frost$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// line 23
frost$core$Int32 $tmp8 = param0.step;
frost$core$Int32 $tmp9 = (frost$core$Int32) {0};
int32_t $tmp10 = $tmp8.value;
int32_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// line 24
frost$core$Int32 $tmp15 = param0.end;
frost$core$Int32 $tmp16 = param0.start;
int32_t $tmp17 = $tmp15.value;
int32_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 < $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
// line 25
frost$core$Int64 $tmp22 = (frost$core$Int64) {0};
return $tmp22;
block8:;
goto block5;
block6:;
// line 27
frost$core$Int32 $tmp23 = param0.end;
frost$core$Int32 $tmp24 = param0.start;
int32_t $tmp25 = $tmp23.value;
int32_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 > $tmp26;
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block9; else goto block10;
block9:;
// line 28
frost$core$Int64 $tmp30 = (frost$core$Int64) {0};
return $tmp30;
block10:;
goto block5;
block5:;
// line 30
frost$core$Int32 $tmp31 = param0.end;
frost$core$Int32 $tmp32 = param0.start;
int32_t $tmp33 = $tmp31.value;
int32_t $tmp34 = $tmp32.value;
int32_t $tmp35 = $tmp33 - $tmp34;
frost$core$Int32 $tmp36 = (frost$core$Int32) {$tmp35};
frost$core$Int32 $tmp37 = param0.step;
int32_t $tmp38 = $tmp36.value;
int32_t $tmp39 = $tmp37.value;
int32_t $tmp40 = $tmp38 / $tmp39;
frost$core$Int32 $tmp41 = (frost$core$Int32) {$tmp40};
frost$core$Int64 $tmp42 = (frost$core$Int64) {0};
frost$core$Int64 $tmp43 = frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64($tmp41, $tmp42);
frost$core$Int64 $tmp44 = (frost$core$Int64) {1};
int64_t $tmp45 = $tmp43.value;
int64_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45 + $tmp46;
frost$core$Int64 $tmp48 = (frost$core$Int64) {$tmp47};
return $tmp48;
block3:;
// line 1
// line 33
// line 34
frost$core$Int32 $tmp49 = param0.step;
frost$core$Int32 $tmp50 = (frost$core$Int32) {0};
int32_t $tmp51 = $tmp49.value;
int32_t $tmp52 = $tmp50.value;
bool $tmp53 = $tmp51 > $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block11; else goto block13;
block11:;
// line 35
frost$core$Int32 $tmp56 = param0.end;
frost$core$Int32 $tmp57 = param0.start;
int32_t $tmp58 = $tmp56.value;
int32_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 <= $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block14; else goto block15;
block14:;
// line 36
frost$core$Int64 $tmp63 = (frost$core$Int64) {0};
return $tmp63;
block15:;
// line 38
frost$core$Int32 $tmp64 = (frost$core$Int32) {18446744073709551615};
*(&local0) = $tmp64;
goto block12;
block13:;
// line 1
// line 40
frost$core$Int32 $tmp65 = param0.end;
frost$core$Int32 $tmp66 = param0.start;
int32_t $tmp67 = $tmp65.value;
int32_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 >= $tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block16; else goto block17;
block16:;
// line 41
frost$core$Int64 $tmp72 = (frost$core$Int64) {0};
return $tmp72;
block17:;
// line 43
frost$core$Int32 $tmp73 = (frost$core$Int32) {1};
*(&local0) = $tmp73;
goto block12;
block12:;
// line 45
frost$core$Int32 $tmp74 = param0.end;
frost$core$Int32 $tmp75 = param0.start;
int32_t $tmp76 = $tmp74.value;
int32_t $tmp77 = $tmp75.value;
int32_t $tmp78 = $tmp76 - $tmp77;
frost$core$Int32 $tmp79 = (frost$core$Int32) {$tmp78};
frost$core$Int32 $tmp80 = *(&local0);
int32_t $tmp81 = $tmp79.value;
int32_t $tmp82 = $tmp80.value;
int32_t $tmp83 = $tmp81 + $tmp82;
frost$core$Int32 $tmp84 = (frost$core$Int32) {$tmp83};
frost$core$Int32 $tmp85 = param0.step;
int32_t $tmp86 = $tmp84.value;
int32_t $tmp87 = $tmp85.value;
int32_t $tmp88 = $tmp86 / $tmp87;
frost$core$Int32 $tmp89 = (frost$core$Int32) {$tmp88};
frost$core$Int64 $tmp90 = (frost$core$Int64) {0};
frost$core$Int64 $tmp91 = frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64($tmp89, $tmp90);
frost$core$Int64 $tmp92 = (frost$core$Int64) {1};
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93 + $tmp94;
frost$core$Int64 $tmp96 = (frost$core$Int64) {$tmp95};
return $tmp96;
block2:;
goto block18;
block18:;

}
frost$core$Int64 org$frostlang$frost$Int32List$get_count$R$frost$core$Int64(org$frostlang$frost$Int32List* param0) {

// line 51
frost$core$Int64* $tmp97 = &param0->_count;
frost$core$Int64 $tmp98 = *$tmp97;
return $tmp98;

}
frost$core$Int32 org$frostlang$frost$Int32List$$IDX$frost$core$Int64$R$frost$core$Int32(org$frostlang$frost$Int32List* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp99 = (frost$core$Int64) {0};
int64_t $tmp100 = param1.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 >= $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block3; else goto block2;
block3:;
ITable* $tmp105 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
frost$core$Int64 $tmp108 = $tmp106(((frost$collections$CollectionView*) param0));
int64_t $tmp109 = param1.value;
int64_t $tmp110 = $tmp108.value;
bool $tmp111 = $tmp109 < $tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp114 = (frost$core$Int64) {55};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s115, $tmp114, &$s116);
abort(); // unreachable
block1:;
// line 56
frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT* $tmp117 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT $tmp118 = *$tmp117;
frost$core$Int32 $tmp119 = $tmp118.start;
frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT* $tmp120 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT $tmp121 = *$tmp120;
frost$core$Int32 $tmp122 = $tmp121.step;
frost$core$Int32 $tmp123 = frost$core$Int64$get_asInt32$R$frost$core$Int32(param1);
int32_t $tmp124 = $tmp122.value;
int32_t $tmp125 = $tmp123.value;
int32_t $tmp126 = $tmp124 * $tmp125;
frost$core$Int32 $tmp127 = (frost$core$Int32) {$tmp126};
int32_t $tmp128 = $tmp119.value;
int32_t $tmp129 = $tmp127.value;
int32_t $tmp130 = $tmp128 + $tmp129;
frost$core$Int32 $tmp131 = (frost$core$Int32) {$tmp130};
return $tmp131;

}
frost$core$String* org$frostlang$frost$Int32List$get_asString$R$frost$core$String(org$frostlang$frost$Int32List* param0) {

// line 61
ITable* $tmp132 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp132->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[1];
frost$core$String* $tmp135 = $tmp133(((frost$collections$CollectionView*) param0));
frost$core$String* $tmp136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s137, $tmp135);
frost$core$String* $tmp138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp136, &$s139);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
return $tmp138;

}
void org$frostlang$frost$Int32List$cleanup(org$frostlang$frost$Int32List* param0) {

// line 8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

