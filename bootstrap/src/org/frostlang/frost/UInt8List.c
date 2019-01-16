#include "org/frostlang/frost/UInt8List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt8.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt8.Cfrost/core/UInt8.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt32.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frost$UInt8List$$IDX$frost$core$Int64$R$frost$core$UInt8$shim(org$frostlang$frost$UInt8List* p0, frost$core$Int64 p1) {
    frost$core$UInt8 result = org$frostlang$frost$UInt8List$$IDX$frost$core$Int64$R$frost$core$UInt8(p0, p1);

    frost$core$UInt8$wrapper* $tmp2;
    $tmp2 = (frost$core$UInt8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } org$frostlang$frost$UInt8List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { org$frostlang$frost$UInt8List$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$UInt8List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$UInt8List$_frost$collections$CollectionView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } org$frostlang$frost$UInt8List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$UInt8List$_frost$collections$Iterable, { org$frostlang$frost$UInt8List$$IDX$frost$core$Int64$R$frost$core$UInt8$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

static frost$core$String $s1;
org$frostlang$frost$UInt8List$class_type org$frostlang$frost$UInt8List$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$UInt8List$_frost$collections$ListView, { org$frostlang$frost$UInt8List$convert$R$frost$core$String, org$frostlang$frost$UInt8List$cleanup, org$frostlang$frost$UInt8List$get_count$R$frost$core$Int64, org$frostlang$frost$UInt8List$$IDX$frost$core$Int64$R$frost$core$UInt8$shim} };

typedef frost$core$Int64 (*$fn97)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn129)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x38\x4c\x69\x73\x74", 29, 8971815208549151625, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 15, 1218913291890390689, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x63\x6f\x6d\x70\x75\x74\x65\x43\x6f\x75\x6e\x74\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 160, 2484195381810765519, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 15, 1218913291890390689, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 107, -1292478199251568370, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void org$frostlang$frost$UInt8List$init$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT(org$frostlang$frost$UInt8List* param0, frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT param1) {

// line 16
frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
frost$core$Int64 $tmp4 = org$frostlang$frost$UInt8List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$R$frost$core$Int64(param1);
frost$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
frost$core$Int64 org$frostlang$frost$UInt8List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT param0) {

frost$core$UInt8 local0;
// line 22
frost$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// line 23
frost$core$UInt8 $tmp8 = param0.step;
frost$core$UInt8 $tmp9 = (frost$core$UInt8) {0};
uint8_t $tmp10 = $tmp8.value;
uint8_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// line 24
frost$core$UInt8 $tmp15 = param0.end;
frost$core$UInt8 $tmp16 = param0.start;
uint8_t $tmp17 = $tmp15.value;
uint8_t $tmp18 = $tmp16.value;
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
frost$core$UInt8 $tmp23 = param0.end;
frost$core$UInt8 $tmp24 = param0.start;
uint8_t $tmp25 = $tmp23.value;
uint8_t $tmp26 = $tmp24.value;
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
frost$core$UInt8 $tmp31 = param0.end;
frost$core$UInt32 $tmp32 = frost$core$UInt32$init$frost$core$UInt8($tmp31);
frost$core$UInt8 $tmp33 = param0.start;
frost$core$UInt32 $tmp34 = frost$core$UInt32$init$frost$core$UInt8($tmp33);
uint32_t $tmp35 = $tmp32.value;
uint32_t $tmp36 = $tmp34.value;
uint32_t $tmp37 = $tmp35 - $tmp36;
frost$core$UInt32 $tmp38 = (frost$core$UInt32) {$tmp37};
frost$core$UInt8 $tmp39 = param0.step;
frost$core$UInt32 $tmp40 = frost$core$UInt32$init$frost$core$UInt8($tmp39);
uint32_t $tmp41 = $tmp38.value;
uint32_t $tmp42 = $tmp40.value;
uint32_t $tmp43 = $tmp41 / $tmp42;
frost$core$UInt32 $tmp44 = (frost$core$UInt32) {$tmp43};
frost$core$UInt32 $tmp45 = (frost$core$UInt32) {0};
frost$core$UInt32 $tmp46 = frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32($tmp44, $tmp45);
frost$core$Int64 $tmp47 = frost$core$Int64$init$frost$core$UInt32($tmp46);
frost$core$Int64 $tmp48 = (frost$core$Int64) {1};
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49 + $tmp50;
frost$core$Int64 $tmp52 = (frost$core$Int64) {$tmp51};
return $tmp52;
block3:;
// line 1
// line 33
// line 34
frost$core$UInt8 $tmp53 = (frost$core$UInt8) {1};
*(&local0) = $tmp53;
// line 35
frost$core$UInt8 $tmp54 = param0.end;
frost$core$UInt32 $tmp55 = frost$core$UInt32$init$frost$core$UInt8($tmp54);
frost$core$UInt8 $tmp56 = param0.start;
frost$core$UInt32 $tmp57 = frost$core$UInt32$init$frost$core$UInt8($tmp56);
uint32_t $tmp58 = $tmp55.value;
uint32_t $tmp59 = $tmp57.value;
uint32_t $tmp60 = $tmp58 - $tmp59;
frost$core$UInt32 $tmp61 = (frost$core$UInt32) {$tmp60};
frost$core$UInt8 $tmp62 = *(&local0);
frost$core$UInt32 $tmp63 = frost$core$UInt32$init$frost$core$UInt8($tmp62);
uint32_t $tmp64 = $tmp61.value;
uint32_t $tmp65 = $tmp63.value;
uint32_t $tmp66 = $tmp64 + $tmp65;
frost$core$UInt32 $tmp67 = (frost$core$UInt32) {$tmp66};
frost$core$UInt8 $tmp68 = param0.step;
frost$core$UInt32 $tmp69 = frost$core$UInt32$init$frost$core$UInt8($tmp68);
uint32_t $tmp70 = $tmp67.value;
uint32_t $tmp71 = $tmp69.value;
uint32_t $tmp72 = $tmp70 / $tmp71;
frost$core$UInt32 $tmp73 = (frost$core$UInt32) {$tmp72};
frost$core$UInt32 $tmp74 = (frost$core$UInt32) {0};
frost$core$UInt32 $tmp75 = frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32($tmp73, $tmp74);
frost$core$Int64 $tmp76 = frost$core$Int64$init$frost$core$UInt32($tmp75);
frost$core$Int64 $tmp77 = (frost$core$Int64) {1};
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78 + $tmp79;
frost$core$Int64 $tmp81 = (frost$core$Int64) {$tmp80};
return $tmp81;
block2:;
frost$core$Bit $tmp82 = frost$core$Bit$init$builtin_bit(false);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp84 = (frost$core$Int64) {21};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s85, $tmp84, &$s86);
abort(); // unreachable
block11:;
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frost$UInt8List$get_count$R$frost$core$Int64(org$frostlang$frost$UInt8List* param0) {

// line 41
frost$core$Int64* $tmp87 = &param0->_count;
frost$core$Int64 $tmp88 = *$tmp87;
return $tmp88;

}
frost$core$UInt8 org$frostlang$frost$UInt8List$$IDX$frost$core$Int64$R$frost$core$UInt8(org$frostlang$frost$UInt8List* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp89 = (frost$core$Int64) {0};
int64_t $tmp90 = param1.value;
int64_t $tmp91 = $tmp89.value;
bool $tmp92 = $tmp90 >= $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block1; else goto block2;
block1:;
ITable* $tmp95 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
frost$core$Int64 $tmp98 = $tmp96(((frost$collections$CollectionView*) param0));
int64_t $tmp99 = param1.value;
int64_t $tmp100 = $tmp98.value;
bool $tmp101 = $tmp99 < $tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101};
*(&local0) = $tmp102;
goto block3;
block2:;
*(&local0) = $tmp93;
goto block3;
block3:;
frost$core$Bit $tmp103 = *(&local0);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp105 = (frost$core$Int64) {45};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s106, $tmp105, &$s107);
abort(); // unreachable
block4:;
// line 46
frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT* $tmp108 = &param0->range;
frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT $tmp109 = *$tmp108;
frost$core$UInt8 $tmp110 = $tmp109.start;
frost$core$UInt32 $tmp111 = frost$core$UInt32$init$frost$core$UInt8($tmp110);
frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT* $tmp112 = &param0->range;
frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT $tmp113 = *$tmp112;
frost$core$UInt8 $tmp114 = $tmp113.step;
frost$core$UInt32 $tmp115 = frost$core$UInt32$init$frost$core$UInt8($tmp114);
frost$core$UInt8 $tmp116 = frost$core$Int64$convert$R$frost$core$UInt8(param1);
frost$core$UInt32 $tmp117 = frost$core$UInt32$init$frost$core$UInt8($tmp116);
uint32_t $tmp118 = $tmp115.value;
uint32_t $tmp119 = $tmp117.value;
uint32_t $tmp120 = $tmp118 * $tmp119;
frost$core$UInt32 $tmp121 = (frost$core$UInt32) {$tmp120};
uint32_t $tmp122 = $tmp111.value;
uint32_t $tmp123 = $tmp121.value;
uint32_t $tmp124 = $tmp122 + $tmp123;
frost$core$UInt32 $tmp125 = (frost$core$UInt32) {$tmp124};
frost$core$UInt8 $tmp126 = frost$core$UInt32$convert$R$frost$core$UInt8($tmp125);
return $tmp126;

}
frost$core$String* org$frostlang$frost$UInt8List$convert$R$frost$core$String(org$frostlang$frost$UInt8List* param0) {

// line 51
ITable* $tmp127 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[1];
frost$core$String* $tmp130 = $tmp128(((frost$collections$CollectionView*) param0));
frost$core$String* $tmp131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s132, $tmp130);
frost$core$String* $tmp133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp131, &$s134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($3:frost.core.String)
return $tmp133;

}
void org$frostlang$frost$UInt8List$cleanup(org$frostlang$frost$UInt8List* param0) {

// line 8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

