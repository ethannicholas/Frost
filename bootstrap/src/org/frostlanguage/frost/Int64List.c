#include "org/frostlanguage/frost/Int64List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* org$frostlanguage$frost$Int64List$$IDX$frost$core$Int64$R$frost$core$Int64$shim(org$frostlanguage$frost$Int64List* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = org$frostlanguage$frost$Int64List$$IDX$frost$core$Int64$R$frost$core$Int64(p0, p1);

    frost$core$Int64$wrapper* $tmp2;
    $tmp2 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } org$frostlanguage$frost$Int64List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { org$frostlanguage$frost$Int64List$$IDX$frost$core$Int64$R$frost$core$Int64$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlanguage$frost$Int64List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlanguage$frost$Int64List$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } org$frostlanguage$frost$Int64List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlanguage$frost$Int64List$_frost$collections$Iterable, { org$frostlanguage$frost$Int64List$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
org$frostlanguage$frost$Int64List$class_type org$frostlanguage$frost$Int64List$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlanguage$frost$Int64List$_frost$collections$CollectionView, { org$frostlanguage$frost$Int64List$convert$R$frost$core$String, org$frostlanguage$frost$Int64List$cleanup, org$frostlanguage$frost$Int64List$get_count$R$frost$core$Int64, org$frostlanguage$frost$Int64List$$IDX$frost$core$Int64$R$frost$core$Int64$shim} };

typedef frost$core$Int64 (*$fn112)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn139)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74", 33, 4538520903934327308, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 15, 2144621318822237786, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x63\x6f\x6d\x70\x75\x74\x65\x43\x6f\x75\x6e\x74\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 164, -4448080734048106092, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 15, 2144621318822237786, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 111, 3764512052627001490, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void org$frostlanguage$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT(org$frostlanguage$frost$Int64List* param0, frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT param1) {

// line 16
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
frost$core$Int64 $tmp4 = org$frostlanguage$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int64(param1);
frost$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
frost$core$Int64 org$frostlanguage$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT param0) {

frost$core$Int64 local0;
// line 22
frost$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// line 23
frost$core$Int64 $tmp8 = param0.step;
frost$core$Int64 $tmp9 = (frost$core$Int64) {0};
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// line 24
frost$core$Int64 $tmp15 = param0.end;
frost$core$Int64 $tmp16 = param0.start;
int64_t $tmp17 = $tmp15.value;
int64_t $tmp18 = $tmp16.value;
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
frost$core$Int64 $tmp23 = param0.end;
frost$core$Int64 $tmp24 = param0.start;
int64_t $tmp25 = $tmp23.value;
int64_t $tmp26 = $tmp24.value;
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
frost$core$Int64 $tmp42 = (frost$core$Int64) {0};
frost$core$Int64 $tmp43 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp41, $tmp42);
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
frost$core$Int64 $tmp49 = param0.step;
frost$core$Int64 $tmp50 = (frost$core$Int64) {0};
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50.value;
bool $tmp53 = $tmp51 > $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block11; else goto block13;
block11:;
// line 35
frost$core$Int64 $tmp56 = param0.end;
frost$core$Int64 $tmp57 = param0.start;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57.value;
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
frost$core$Int64 $tmp64 = (frost$core$Int64) {18446744073709551615};
*(&local0) = $tmp64;
goto block12;
block13:;
// line 1
// line 40
frost$core$Int64 $tmp65 = param0.end;
frost$core$Int64 $tmp66 = param0.start;
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66.value;
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
frost$core$Int64 $tmp73 = (frost$core$Int64) {1};
*(&local0) = $tmp73;
goto block12;
block12:;
// line 45
frost$core$Int64 $tmp74 = param0.end;
frost$core$Int64 $tmp75 = param0.start;
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76 - $tmp77;
frost$core$Int64 $tmp79 = (frost$core$Int64) {$tmp78};
frost$core$Int64 $tmp80 = *(&local0);
int64_t $tmp81 = $tmp79.value;
int64_t $tmp82 = $tmp80.value;
int64_t $tmp83 = $tmp81 + $tmp82;
frost$core$Int64 $tmp84 = (frost$core$Int64) {$tmp83};
frost$core$Int64 $tmp85 = param0.step;
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85.value;
int64_t $tmp88 = $tmp86 / $tmp87;
frost$core$Int64 $tmp89 = (frost$core$Int64) {$tmp88};
frost$core$Int64 $tmp90 = (frost$core$Int64) {0};
frost$core$Int64 $tmp91 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp89, $tmp90);
frost$core$Int64 $tmp92 = (frost$core$Int64) {1};
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93 + $tmp94;
frost$core$Int64 $tmp96 = (frost$core$Int64) {$tmp95};
return $tmp96;
block2:;
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit(false);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp99 = (frost$core$Int64) {21};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s100, $tmp99, &$s101);
abort(); // unreachable
block18:;
abort(); // unreachable

}
frost$core$Int64 org$frostlanguage$frost$Int64List$get_count$R$frost$core$Int64(org$frostlanguage$frost$Int64List* param0) {

// line 51
frost$core$Int64* $tmp102 = &param0->_count;
frost$core$Int64 $tmp103 = *$tmp102;
return $tmp103;

}
frost$core$Int64 org$frostlanguage$frost$Int64List$$IDX$frost$core$Int64$R$frost$core$Int64(org$frostlanguage$frost$Int64List* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp104 = (frost$core$Int64) {0};
int64_t $tmp105 = param1.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 >= $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block1; else goto block2;
block1:;
ITable* $tmp110 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp110->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp110 = $tmp110->next;
}
$fn112 $tmp111 = $tmp110->methods[0];
frost$core$Int64 $tmp113 = $tmp111(((frost$collections$CollectionView*) param0));
int64_t $tmp114 = param1.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 < $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
*(&local0) = $tmp117;
goto block3;
block2:;
*(&local0) = $tmp108;
goto block3;
block3:;
frost$core$Bit $tmp118 = *(&local0);
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp120 = (frost$core$Int64) {55};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s121, $tmp120, &$s122);
abort(); // unreachable
block4:;
// line 56
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT* $tmp123 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp124 = *$tmp123;
frost$core$Int64 $tmp125 = $tmp124.start;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT* $tmp126 = &param0->range;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp127 = *$tmp126;
frost$core$Int64 $tmp128 = $tmp127.step;
int64_t $tmp129 = $tmp128.value;
int64_t $tmp130 = param1.value;
int64_t $tmp131 = $tmp129 * $tmp130;
frost$core$Int64 $tmp132 = (frost$core$Int64) {$tmp131};
int64_t $tmp133 = $tmp125.value;
int64_t $tmp134 = $tmp132.value;
int64_t $tmp135 = $tmp133 + $tmp134;
frost$core$Int64 $tmp136 = (frost$core$Int64) {$tmp135};
return $tmp136;

}
frost$core$String* org$frostlanguage$frost$Int64List$convert$R$frost$core$String(org$frostlanguage$frost$Int64List* param0) {

// line 61
ITable* $tmp137 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp137->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[1];
frost$core$String* $tmp140 = $tmp138(((frost$collections$CollectionView*) param0));
frost$core$String* $tmp141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s142, $tmp140);
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp141, &$s144);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing REF($3:frost.core.String)
return $tmp143;

}
void org$frostlanguage$frost$Int64List$cleanup(org$frostlanguage$frost$Int64List* param0) {

// line 8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

