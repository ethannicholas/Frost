#include "org/frostlang/frost/UInt32List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt32.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt32.Cfrost/core/UInt32.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frost$UInt32List$$IDX$frost$core$Int64$R$frost$core$UInt32$shim(org$frostlang$frost$UInt32List* p0, frost$core$Int64 p1) {
    frost$core$UInt32 result = org$frostlang$frost$UInt32List$$IDX$frost$core$Int64$R$frost$core$UInt32(p0, p1);

    frost$core$UInt32$wrapper* $tmp2;
    $tmp2 = (frost$core$UInt32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$UInt32$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$UInt32List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } org$frostlang$frost$UInt32List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlang$frost$UInt32List$_frost$collections$Iterable, { org$frostlang$frost$UInt32List$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frost$UInt32List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$UInt32List$_frost$collections$CollectionView, { org$frostlang$frost$UInt32List$$IDX$frost$core$Int64$R$frost$core$UInt32$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

static frost$core$String $s1;
org$frostlang$frost$UInt32List$class_type org$frostlang$frost$UInt32List$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$UInt32List$_frost$collections$ListView, { org$frostlang$frost$UInt32List$get_asString$R$frost$core$String, org$frostlang$frost$UInt32List$cleanup, org$frostlang$frost$UInt32List$get_count$R$frost$core$Int64, org$frostlang$frost$UInt32List$$IDX$frost$core$Int64$R$frost$core$UInt32$shim} };

typedef frost$core$Int64 (*$fn85)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn112)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x33\x32\x4c\x69\x73\x74", 30, 2262876396410231286, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, 4262625098451113334, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 109, 1504902547596135580, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void org$frostlang$frost$UInt32List$init$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT(org$frostlang$frost$UInt32List* param0, frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT param1) {

// line 16
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
frost$core$Int64 $tmp4 = org$frostlang$frost$UInt32List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$R$frost$core$Int64(param1);
frost$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
frost$core$Int64 org$frostlang$frost$UInt32List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT param0) {

frost$core$UInt32 local0;
// line 22
frost$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// line 23
frost$core$UInt32 $tmp8 = param0.step;
frost$core$UInt32 $tmp9 = (frost$core$UInt32) {0};
uint32_t $tmp10 = $tmp8.value;
uint32_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// line 24
frost$core$UInt32 $tmp15 = param0.end;
frost$core$UInt32 $tmp16 = param0.start;
uint32_t $tmp17 = $tmp15.value;
uint32_t $tmp18 = $tmp16.value;
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
frost$core$UInt32 $tmp23 = param0.end;
frost$core$UInt32 $tmp24 = param0.start;
uint32_t $tmp25 = $tmp23.value;
uint32_t $tmp26 = $tmp24.value;
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
frost$core$UInt32 $tmp42 = (frost$core$UInt32) {0};
frost$core$UInt32 $tmp43 = frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32($tmp41, $tmp42);
frost$core$Int64 $tmp44 = frost$core$Int64$init$frost$core$UInt32($tmp43);
frost$core$Int64 $tmp45 = (frost$core$Int64) {1};
int64_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46 + $tmp47;
frost$core$Int64 $tmp49 = (frost$core$Int64) {$tmp48};
return $tmp49;
block3:;
// line 1
// line 33
// line 34
frost$core$UInt32 $tmp50 = (frost$core$UInt32) {1};
*(&local0) = $tmp50;
// line 35
frost$core$UInt32 $tmp51 = param0.end;
frost$core$UInt32 $tmp52 = param0.start;
uint32_t $tmp53 = $tmp51.value;
uint32_t $tmp54 = $tmp52.value;
uint32_t $tmp55 = $tmp53 - $tmp54;
frost$core$UInt32 $tmp56 = (frost$core$UInt32) {$tmp55};
frost$core$UInt32 $tmp57 = *(&local0);
uint32_t $tmp58 = $tmp56.value;
uint32_t $tmp59 = $tmp57.value;
uint32_t $tmp60 = $tmp58 + $tmp59;
frost$core$UInt32 $tmp61 = (frost$core$UInt32) {$tmp60};
frost$core$UInt32 $tmp62 = param0.step;
uint32_t $tmp63 = $tmp61.value;
uint32_t $tmp64 = $tmp62.value;
uint32_t $tmp65 = $tmp63 / $tmp64;
frost$core$UInt32 $tmp66 = (frost$core$UInt32) {$tmp65};
frost$core$UInt32 $tmp67 = (frost$core$UInt32) {0};
frost$core$UInt32 $tmp68 = frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32($tmp66, $tmp67);
frost$core$Int64 $tmp69 = frost$core$Int64$init$frost$core$UInt32($tmp68);
frost$core$Int64 $tmp70 = (frost$core$Int64) {1};
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71 + $tmp72;
frost$core$Int64 $tmp74 = (frost$core$Int64) {$tmp73};
return $tmp74;
block2:;
goto block11;
block11:;

}
frost$core$Int64 org$frostlang$frost$UInt32List$get_count$R$frost$core$Int64(org$frostlang$frost$UInt32List* param0) {

// line 41
frost$core$Int64* $tmp75 = &param0->_count;
frost$core$Int64 $tmp76 = *$tmp75;
return $tmp76;

}
frost$core$UInt32 org$frostlang$frost$UInt32List$$IDX$frost$core$Int64$R$frost$core$UInt32(org$frostlang$frost$UInt32List* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp77 = (frost$core$Int64) {0};
int64_t $tmp78 = param1.value;
int64_t $tmp79 = $tmp77.value;
bool $tmp80 = $tmp78 >= $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block3; else goto block2;
block3:;
ITable* $tmp83 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[0];
frost$core$Int64 $tmp86 = $tmp84(((frost$collections$CollectionView*) param0));
int64_t $tmp87 = param1.value;
int64_t $tmp88 = $tmp86.value;
bool $tmp89 = $tmp87 < $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {45};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s93, $tmp92, &$s94);
abort(); // unreachable
block1:;
// line 46
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT* $tmp95 = &param0->range;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT $tmp96 = *$tmp95;
frost$core$UInt32 $tmp97 = $tmp96.start;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT* $tmp98 = &param0->range;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT $tmp99 = *$tmp98;
frost$core$UInt32 $tmp100 = $tmp99.step;
frost$core$UInt32 $tmp101 = frost$core$Int64$get_asUInt32$R$frost$core$UInt32(param1);
uint32_t $tmp102 = $tmp100.value;
uint32_t $tmp103 = $tmp101.value;
uint32_t $tmp104 = $tmp102 * $tmp103;
frost$core$UInt32 $tmp105 = (frost$core$UInt32) {$tmp104};
uint32_t $tmp106 = $tmp97.value;
uint32_t $tmp107 = $tmp105.value;
uint32_t $tmp108 = $tmp106 + $tmp107;
frost$core$UInt32 $tmp109 = (frost$core$UInt32) {$tmp108};
return $tmp109;

}
frost$core$String* org$frostlang$frost$UInt32List$get_asString$R$frost$core$String(org$frostlang$frost$UInt32List* param0) {

// line 51
ITable* $tmp110 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp110->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp110 = $tmp110->next;
}
$fn112 $tmp111 = $tmp110->methods[1];
frost$core$String* $tmp113 = $tmp111(((frost$collections$CollectionView*) param0));
frost$core$String* $tmp114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s115, $tmp113);
frost$core$String* $tmp116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp114, &$s117);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
return $tmp116;

}
void org$frostlang$frost$UInt32List$cleanup(org$frostlang$frost$UInt32List* param0) {

// line 8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

