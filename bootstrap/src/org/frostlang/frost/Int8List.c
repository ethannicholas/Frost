#include "org/frostlang/frost/Int8List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/Int8.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int8.Cfrost/core/Int8.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Int32.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* org$frostlang$frost$Int8List$$IDX$frost$core$Int64$R$frost$core$Int8$shim(org$frostlang$frost$Int8List* p0, frost$core$Int64 p1) {
    frost$core$Int8 result = org$frostlang$frost$Int8List$$IDX$frost$core$Int64$R$frost$core$Int8(p0, p1);

    frost$core$Int8$wrapper* $tmp2;
    $tmp2 = (frost$core$Int8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Int8$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } org$frostlang$frost$Int8List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { org$frostlang$frost$Int8List$$IDX$frost$core$Int64$R$frost$core$Int8$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$Int8List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$Int8List$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } org$frostlang$frost$Int8List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlang$frost$Int8List$_frost$collections$Iterable, { org$frostlang$frost$Int8List$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frost$Int8List$class_type org$frostlang$frost$Int8List$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$Int8List$_frost$collections$CollectionView, { org$frostlang$frost$Int8List$convert$R$frost$core$String, org$frostlang$frost$Int8List$cleanup, org$frostlang$frost$Int8List$get_count$R$frost$core$Int64, org$frostlang$frost$Int8List$$IDX$frost$core$Int64$R$frost$core$Int8$shim} };

typedef frost$core$Int64 (*$fn119)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn151)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x38\x4c\x69\x73\x74", 28, 5201531476328416688, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 14, 5509841089329044736, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x63\x6f\x6d\x70\x75\x74\x65\x43\x6f\x75\x6e\x74\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 157, 2134157419324774548, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 14, 5509841089329044736, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 105, 702209438279319376, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void org$frostlang$frost$Int8List$init$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT(org$frostlang$frost$Int8List* param0, frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT param1) {

// line 16
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
frost$core$Int64 $tmp4 = org$frostlang$frost$Int8List$computeCount$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$R$frost$core$Int64(param1);
frost$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
frost$core$Int64 org$frostlang$frost$Int8List$computeCount$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT param0) {

frost$core$Int8 local0;
// line 22
frost$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// line 23
frost$core$Int8 $tmp8 = param0.step;
frost$core$Int8 $tmp9 = (frost$core$Int8) {0};
int8_t $tmp10 = $tmp8.value;
int8_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// line 24
frost$core$Int8 $tmp15 = param0.end;
frost$core$Int8 $tmp16 = param0.start;
int8_t $tmp17 = $tmp15.value;
int8_t $tmp18 = $tmp16.value;
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
frost$core$Int8 $tmp23 = param0.end;
frost$core$Int8 $tmp24 = param0.start;
int8_t $tmp25 = $tmp23.value;
int8_t $tmp26 = $tmp24.value;
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
frost$core$Int8 $tmp52 = param0.step;
frost$core$Int8 $tmp53 = (frost$core$Int8) {0};
int8_t $tmp54 = $tmp52.value;
int8_t $tmp55 = $tmp53.value;
bool $tmp56 = $tmp54 > $tmp55;
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56};
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block11; else goto block13;
block11:;
// line 35
frost$core$Int8 $tmp59 = param0.end;
frost$core$Int8 $tmp60 = param0.start;
int8_t $tmp61 = $tmp59.value;
int8_t $tmp62 = $tmp60.value;
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
frost$core$Int8 $tmp67 = (frost$core$Int8) {18446744073709551615};
*(&local0) = $tmp67;
goto block12;
block13:;
// line 1
// line 40
frost$core$Int8 $tmp68 = param0.end;
frost$core$Int8 $tmp69 = param0.start;
int8_t $tmp70 = $tmp68.value;
int8_t $tmp71 = $tmp69.value;
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
frost$core$Int8 $tmp76 = (frost$core$Int8) {1};
*(&local0) = $tmp76;
goto block12;
block12:;
// line 45
frost$core$Int8 $tmp77 = param0.end;
frost$core$Int32 $tmp78 = frost$core$Int32$init$frost$core$Int8($tmp77);
frost$core$Int8 $tmp79 = param0.start;
frost$core$Int32 $tmp80 = frost$core$Int32$init$frost$core$Int8($tmp79);
int32_t $tmp81 = $tmp78.value;
int32_t $tmp82 = $tmp80.value;
int32_t $tmp83 = $tmp81 - $tmp82;
frost$core$Int32 $tmp84 = (frost$core$Int32) {$tmp83};
frost$core$Int8 $tmp85 = *(&local0);
frost$core$Int32 $tmp86 = frost$core$Int32$init$frost$core$Int8($tmp85);
int32_t $tmp87 = $tmp84.value;
int32_t $tmp88 = $tmp86.value;
int32_t $tmp89 = $tmp87 + $tmp88;
frost$core$Int32 $tmp90 = (frost$core$Int32) {$tmp89};
frost$core$Int8 $tmp91 = param0.step;
frost$core$Int32 $tmp92 = frost$core$Int32$init$frost$core$Int8($tmp91);
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
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit(false);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp106 = (frost$core$Int64) {21};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s107, $tmp106, &$s108);
abort(); // unreachable
block18:;
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frost$Int8List$get_count$R$frost$core$Int64(org$frostlang$frost$Int8List* param0) {

// line 51
frost$core$Int64* $tmp109 = &param0->_count;
frost$core$Int64 $tmp110 = *$tmp109;
return $tmp110;

}
frost$core$Int8 org$frostlang$frost$Int8List$$IDX$frost$core$Int64$R$frost$core$Int8(org$frostlang$frost$Int8List* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp111 = (frost$core$Int64) {0};
int64_t $tmp112 = param1.value;
int64_t $tmp113 = $tmp111.value;
bool $tmp114 = $tmp112 >= $tmp113;
frost$core$Bit $tmp115 = (frost$core$Bit) {$tmp114};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block1; else goto block2;
block1:;
ITable* $tmp117 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp117->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp117 = $tmp117->next;
}
$fn119 $tmp118 = $tmp117->methods[0];
frost$core$Int64 $tmp120 = $tmp118(((frost$collections$CollectionView*) param0));
int64_t $tmp121 = param1.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 < $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
*(&local0) = $tmp124;
goto block3;
block2:;
*(&local0) = $tmp115;
goto block3;
block3:;
frost$core$Bit $tmp125 = *(&local0);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp127 = (frost$core$Int64) {55};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s128, $tmp127, &$s129);
abort(); // unreachable
block4:;
// line 56
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT* $tmp130 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT $tmp131 = *$tmp130;
frost$core$Int8 $tmp132 = $tmp131.start;
frost$core$Int32 $tmp133 = frost$core$Int32$init$frost$core$Int8($tmp132);
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT* $tmp134 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT $tmp135 = *$tmp134;
frost$core$Int8 $tmp136 = $tmp135.step;
frost$core$Int32 $tmp137 = frost$core$Int32$init$frost$core$Int8($tmp136);
frost$core$Int8 $tmp138 = frost$core$Int64$convert$R$frost$core$Int8(param1);
frost$core$Int32 $tmp139 = frost$core$Int32$init$frost$core$Int8($tmp138);
int32_t $tmp140 = $tmp137.value;
int32_t $tmp141 = $tmp139.value;
int32_t $tmp142 = $tmp140 * $tmp141;
frost$core$Int32 $tmp143 = (frost$core$Int32) {$tmp142};
int32_t $tmp144 = $tmp133.value;
int32_t $tmp145 = $tmp143.value;
int32_t $tmp146 = $tmp144 + $tmp145;
frost$core$Int32 $tmp147 = (frost$core$Int32) {$tmp146};
frost$core$Int8 $tmp148 = frost$core$Int32$convert$R$frost$core$Int8($tmp147);
return $tmp148;

}
frost$core$String* org$frostlang$frost$Int8List$convert$R$frost$core$String(org$frostlang$frost$Int8List* param0) {

// line 61
ITable* $tmp149 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp149->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp149 = $tmp149->next;
}
$fn151 $tmp150 = $tmp149->methods[1];
frost$core$String* $tmp152 = $tmp150(((frost$collections$CollectionView*) param0));
frost$core$String* $tmp153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s154, $tmp152);
frost$core$String* $tmp155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp153, &$s156);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing REF($3:frost.core.String)
return $tmp155;

}
void org$frostlang$frost$Int8List$cleanup(org$frostlang$frost$Int8List* param0) {

// line 8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

