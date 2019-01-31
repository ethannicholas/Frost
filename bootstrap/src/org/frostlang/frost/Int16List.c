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

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frost$Int16List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$Int16List$_frost$collections$CollectionView, { org$frostlang$frost$Int16List$$IDX$frost$core$Int64$R$frost$core$Int16$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$Int16List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$Int16List$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
org$frostlang$frost$Int16List$class_type org$frostlang$frost$Int16List$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$Int16List$_frost$collections$Iterable, { org$frostlang$frost$Int16List$get_asString$R$frost$core$String, org$frostlang$frost$Int16List$cleanup, org$frostlang$frost$Int16List$get_count$R$frost$core$Int64, org$frostlang$frost$Int16List$$IDX$frost$core$Int64$R$frost$core$Int16$shim} };

typedef frost$core$Int64 (*$fn114)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn145)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74", 29, 8845844969412627187, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 15, 1244863148404851675, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 107, -903279776490533470, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void org$frostlang$frost$Int16List$init$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT(org$frostlang$frost$Int16List* param0, frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT param1) {

// line 16
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
frost$core$Int64 $tmp4 = org$frostlang$frost$Int16List$computeCount$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$R$frost$core$Int64(param1);
frost$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
frost$core$Int64 org$frostlang$frost$Int16List$computeCount$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT param0) {

frost$core$Int16 local0;
// line 22
frost$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// line 23
frost$core$Int16 $tmp8 = param0.step;
frost$core$Int16 $tmp9 = (frost$core$Int16) {0};
int16_t $tmp10 = $tmp8.value;
int16_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// line 24
frost$core$Int16 $tmp15 = param0.end;
frost$core$Int16 $tmp16 = param0.start;
int16_t $tmp17 = $tmp15.value;
int16_t $tmp18 = $tmp16.value;
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
frost$core$Int16 $tmp23 = param0.end;
frost$core$Int16 $tmp24 = param0.start;
int16_t $tmp25 = $tmp23.value;
int16_t $tmp26 = $tmp24.value;
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
frost$core$Int64 $tmp46 = frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64($tmp44, $tmp45);
frost$core$Int64 $tmp47 = (frost$core$Int64) {1};
int64_t $tmp48 = $tmp46.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 + $tmp49;
frost$core$Int64 $tmp51 = (frost$core$Int64) {$tmp50};
return $tmp51;
block3:;
// line 1
// line 33
// line 34
frost$core$Int16 $tmp52 = param0.step;
frost$core$Int16 $tmp53 = (frost$core$Int16) {0};
int16_t $tmp54 = $tmp52.value;
int16_t $tmp55 = $tmp53.value;
bool $tmp56 = $tmp54 > $tmp55;
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56};
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block11; else goto block13;
block11:;
// line 35
frost$core$Int16 $tmp59 = param0.end;
frost$core$Int16 $tmp60 = param0.start;
int16_t $tmp61 = $tmp59.value;
int16_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 <= $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block14; else goto block15;
block14:;
// line 36
frost$core$Int64 $tmp66 = (frost$core$Int64) {0};
return $tmp66;
block15:;
// line 38
frost$core$Int16 $tmp67 = (frost$core$Int16) {18446744073709551615};
*(&local0) = $tmp67;
goto block12;
block13:;
// line 1
// line 40
frost$core$Int16 $tmp68 = param0.end;
frost$core$Int16 $tmp69 = param0.start;
int16_t $tmp70 = $tmp68.value;
int16_t $tmp71 = $tmp69.value;
bool $tmp72 = $tmp70 >= $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block16; else goto block17;
block16:;
// line 41
frost$core$Int64 $tmp75 = (frost$core$Int64) {0};
return $tmp75;
block17:;
// line 43
frost$core$Int16 $tmp76 = (frost$core$Int16) {1};
*(&local0) = $tmp76;
goto block12;
block12:;
// line 45
frost$core$Int16 $tmp77 = param0.end;
frost$core$Int32 $tmp78 = frost$core$Int32$init$frost$core$Int16($tmp77);
frost$core$Int16 $tmp79 = param0.start;
frost$core$Int32 $tmp80 = frost$core$Int32$init$frost$core$Int16($tmp79);
int32_t $tmp81 = $tmp78.value;
int32_t $tmp82 = $tmp80.value;
int32_t $tmp83 = $tmp81 - $tmp82;
frost$core$Int32 $tmp84 = (frost$core$Int32) {$tmp83};
frost$core$Int16 $tmp85 = *(&local0);
frost$core$Int32 $tmp86 = frost$core$Int32$init$frost$core$Int16($tmp85);
int32_t $tmp87 = $tmp84.value;
int32_t $tmp88 = $tmp86.value;
int32_t $tmp89 = $tmp87 + $tmp88;
frost$core$Int32 $tmp90 = (frost$core$Int32) {$tmp89};
frost$core$Int16 $tmp91 = param0.step;
frost$core$Int32 $tmp92 = frost$core$Int32$init$frost$core$Int16($tmp91);
int32_t $tmp93 = $tmp90.value;
int32_t $tmp94 = $tmp92.value;
int32_t $tmp95 = $tmp93 / $tmp94;
frost$core$Int32 $tmp96 = (frost$core$Int32) {$tmp95};
frost$core$Int64 $tmp97 = (frost$core$Int64) {0};
frost$core$Int64 $tmp98 = frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64($tmp96, $tmp97);
frost$core$Int64 $tmp99 = (frost$core$Int64) {1};
int64_t $tmp100 = $tmp98.value;
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100 + $tmp101;
frost$core$Int64 $tmp103 = (frost$core$Int64) {$tmp102};
return $tmp103;
block2:;
goto block18;
block18:;

}
frost$core$Int64 org$frostlang$frost$Int16List$get_count$R$frost$core$Int64(org$frostlang$frost$Int16List* param0) {

// line 51
frost$core$Int64* $tmp104 = &param0->_count;
frost$core$Int64 $tmp105 = *$tmp104;
return $tmp105;

}
frost$core$Int16 org$frostlang$frost$Int16List$$IDX$frost$core$Int64$R$frost$core$Int16(org$frostlang$frost$Int16List* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp106 = (frost$core$Int64) {0};
int64_t $tmp107 = param1.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 >= $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block3; else goto block2;
block3:;
ITable* $tmp112 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[0];
frost$core$Int64 $tmp115 = $tmp113(((frost$collections$CollectionView*) param0));
int64_t $tmp116 = param1.value;
int64_t $tmp117 = $tmp115.value;
bool $tmp118 = $tmp116 < $tmp117;
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118};
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp121 = (frost$core$Int64) {55};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s122, $tmp121, &$s123);
abort(); // unreachable
block1:;
// line 56
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT* $tmp124 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT $tmp125 = *$tmp124;
frost$core$Int16 $tmp126 = $tmp125.start;
frost$core$Int32 $tmp127 = frost$core$Int32$init$frost$core$Int16($tmp126);
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT* $tmp128 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT $tmp129 = *$tmp128;
frost$core$Int16 $tmp130 = $tmp129.step;
frost$core$Int32 $tmp131 = frost$core$Int32$init$frost$core$Int16($tmp130);
frost$core$Int16 $tmp132 = frost$core$Int64$get_asInt16$R$frost$core$Int16(param1);
frost$core$Int32 $tmp133 = frost$core$Int32$init$frost$core$Int16($tmp132);
int32_t $tmp134 = $tmp131.value;
int32_t $tmp135 = $tmp133.value;
int32_t $tmp136 = $tmp134 * $tmp135;
frost$core$Int32 $tmp137 = (frost$core$Int32) {$tmp136};
int32_t $tmp138 = $tmp127.value;
int32_t $tmp139 = $tmp137.value;
int32_t $tmp140 = $tmp138 + $tmp139;
frost$core$Int32 $tmp141 = (frost$core$Int32) {$tmp140};
frost$core$Int16 $tmp142 = frost$core$Int32$get_asInt16$R$frost$core$Int16($tmp141);
return $tmp142;

}
frost$core$String* org$frostlang$frost$Int16List$get_asString$R$frost$core$String(org$frostlang$frost$Int16List* param0) {

// line 61
ITable* $tmp143 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp143->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp143 = $tmp143->next;
}
$fn145 $tmp144 = $tmp143->methods[1];
frost$core$String* $tmp146 = $tmp144(((frost$collections$CollectionView*) param0));
frost$core$String* $tmp147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s148, $tmp146);
frost$core$String* $tmp149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp147, &$s150);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
return $tmp149;

}
void org$frostlang$frost$Int16List$cleanup(org$frostlang$frost$Int16List* param0) {

// line 8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

