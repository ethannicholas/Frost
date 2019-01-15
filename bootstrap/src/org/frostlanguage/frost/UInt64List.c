#include "org/frostlanguage/frost/UInt64List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt64.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt64.Cfrost/core/UInt64.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlanguage$frost$UInt64List$$IDX$frost$core$Int64$R$frost$core$UInt64$shim(org$frostlanguage$frost$UInt64List* p0, frost$core$Int64 p1) {
    frost$core$UInt64 result = org$frostlanguage$frost$UInt64List$$IDX$frost$core$Int64$R$frost$core$UInt64(p0, p1);

    frost$core$UInt64$wrapper* $tmp2;
    $tmp2 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } org$frostlanguage$frost$UInt64List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { org$frostlanguage$frost$UInt64List$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlanguage$frost$UInt64List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlanguage$frost$UInt64List$_frost$collections$CollectionView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } org$frostlanguage$frost$UInt64List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlanguage$frost$UInt64List$_frost$collections$Iterable, { org$frostlanguage$frost$UInt64List$$IDX$frost$core$Int64$R$frost$core$UInt64$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

static frost$core$String $s1;
org$frostlanguage$frost$UInt64List$class_type org$frostlanguage$frost$UInt64List$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlanguage$frost$UInt64List$_frost$collections$ListView, { org$frostlanguage$frost$UInt64List$convert$R$frost$core$String, org$frostlanguage$frost$UInt64List$cleanup, org$frostlanguage$frost$UInt64List$get_count$R$frost$core$Int64, org$frostlanguage$frost$UInt64List$$IDX$frost$core$Int64$R$frost$core$UInt64$shim} };

typedef frost$core$Int64 (*$fn90)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn118)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74", 34, -8501745776420499023, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, -6963972527162133793, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x63\x6f\x6d\x70\x75\x74\x65\x43\x6f\x75\x6e\x74\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 167, 4120386571069004311, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, -6963972527162133793, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 113, -2974763495254745004, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void org$frostlanguage$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT(org$frostlanguage$frost$UInt64List* param0, frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT param1) {

// line 16
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
frost$core$Int64 $tmp4 = org$frostlanguage$frost$UInt64List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$core$Int64(param1);
frost$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
frost$core$Int64 org$frostlanguage$frost$UInt64List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$core$Int64(frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT param0) {

frost$core$UInt64 local0;
// line 22
frost$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// line 23
frost$core$UInt64 $tmp8 = param0.step;
frost$core$UInt64 $tmp9 = (frost$core$UInt64) {0};
uint64_t $tmp10 = $tmp8.value;
uint64_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// line 24
frost$core$UInt64 $tmp15 = param0.end;
frost$core$UInt64 $tmp16 = param0.start;
uint64_t $tmp17 = $tmp15.value;
uint64_t $tmp18 = $tmp16.value;
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
frost$core$UInt64 $tmp23 = param0.end;
frost$core$UInt64 $tmp24 = param0.start;
uint64_t $tmp25 = $tmp23.value;
uint64_t $tmp26 = $tmp24.value;
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
frost$core$UInt64 $tmp31 = param0.end;
frost$core$UInt64 $tmp32 = param0.start;
uint64_t $tmp33 = $tmp31.value;
uint64_t $tmp34 = $tmp32.value;
uint64_t $tmp35 = $tmp33 - $tmp34;
frost$core$UInt64 $tmp36 = (frost$core$UInt64) {$tmp35};
frost$core$UInt64 $tmp37 = param0.step;
uint64_t $tmp38 = $tmp36.value;
uint64_t $tmp39 = $tmp37.value;
uint64_t $tmp40 = $tmp38 / $tmp39;
frost$core$UInt64 $tmp41 = (frost$core$UInt64) {$tmp40};
frost$core$Int64 $tmp42 = frost$core$UInt64$convert$R$frost$core$Int64($tmp41);
frost$core$Int64 $tmp43 = (frost$core$Int64) {0};
frost$core$Int64 $tmp44 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp42, $tmp43);
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
frost$core$UInt64 $tmp50 = (frost$core$UInt64) {1};
*(&local0) = $tmp50;
// line 35
frost$core$UInt64 $tmp51 = param0.end;
frost$core$UInt64 $tmp52 = param0.start;
uint64_t $tmp53 = $tmp51.value;
uint64_t $tmp54 = $tmp52.value;
uint64_t $tmp55 = $tmp53 - $tmp54;
frost$core$UInt64 $tmp56 = (frost$core$UInt64) {$tmp55};
frost$core$UInt64 $tmp57 = *(&local0);
uint64_t $tmp58 = $tmp56.value;
uint64_t $tmp59 = $tmp57.value;
uint64_t $tmp60 = $tmp58 + $tmp59;
frost$core$UInt64 $tmp61 = (frost$core$UInt64) {$tmp60};
frost$core$UInt64 $tmp62 = param0.step;
uint64_t $tmp63 = $tmp61.value;
uint64_t $tmp64 = $tmp62.value;
uint64_t $tmp65 = $tmp63 / $tmp64;
frost$core$UInt64 $tmp66 = (frost$core$UInt64) {$tmp65};
frost$core$Int64 $tmp67 = frost$core$UInt64$convert$R$frost$core$Int64($tmp66);
frost$core$Int64 $tmp68 = (frost$core$Int64) {0};
frost$core$Int64 $tmp69 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp67, $tmp68);
frost$core$Int64 $tmp70 = (frost$core$Int64) {1};
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71 + $tmp72;
frost$core$Int64 $tmp74 = (frost$core$Int64) {$tmp73};
return $tmp74;
block2:;
frost$core$Bit $tmp75 = frost$core$Bit$init$builtin_bit(false);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp77 = (frost$core$Int64) {21};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block11:;
abort(); // unreachable

}
frost$core$Int64 org$frostlanguage$frost$UInt64List$get_count$R$frost$core$Int64(org$frostlanguage$frost$UInt64List* param0) {

// line 41
frost$core$Int64* $tmp80 = &param0->_count;
frost$core$Int64 $tmp81 = *$tmp80;
return $tmp81;

}
frost$core$UInt64 org$frostlanguage$frost$UInt64List$$IDX$frost$core$Int64$R$frost$core$UInt64(org$frostlanguage$frost$UInt64List* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp82 = (frost$core$Int64) {0};
int64_t $tmp83 = param1.value;
int64_t $tmp84 = $tmp82.value;
bool $tmp85 = $tmp83 >= $tmp84;
frost$core$Bit $tmp86 = (frost$core$Bit) {$tmp85};
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block1; else goto block2;
block1:;
ITable* $tmp88 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp88 = $tmp88->next;
}
$fn90 $tmp89 = $tmp88->methods[0];
frost$core$Int64 $tmp91 = $tmp89(((frost$collections$CollectionView*) param0));
int64_t $tmp92 = param1.value;
int64_t $tmp93 = $tmp91.value;
bool $tmp94 = $tmp92 < $tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94};
*(&local0) = $tmp95;
goto block3;
block2:;
*(&local0) = $tmp86;
goto block3;
block3:;
frost$core$Bit $tmp96 = *(&local0);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp98 = (frost$core$Int64) {45};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s99, $tmp98, &$s100);
abort(); // unreachable
block4:;
// line 46
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT* $tmp101 = &param0->range;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT $tmp102 = *$tmp101;
frost$core$UInt64 $tmp103 = $tmp102.start;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT* $tmp104 = &param0->range;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT $tmp105 = *$tmp104;
frost$core$UInt64 $tmp106 = $tmp105.step;
frost$core$UInt64 $tmp107 = frost$core$Int64$convert$R$frost$core$UInt64(param1);
uint64_t $tmp108 = $tmp106.value;
uint64_t $tmp109 = $tmp107.value;
uint64_t $tmp110 = $tmp108 * $tmp109;
frost$core$UInt64 $tmp111 = (frost$core$UInt64) {$tmp110};
uint64_t $tmp112 = $tmp103.value;
uint64_t $tmp113 = $tmp111.value;
uint64_t $tmp114 = $tmp112 + $tmp113;
frost$core$UInt64 $tmp115 = (frost$core$UInt64) {$tmp114};
return $tmp115;

}
frost$core$String* org$frostlanguage$frost$UInt64List$convert$R$frost$core$String(org$frostlanguage$frost$UInt64List* param0) {

// line 51
ITable* $tmp116 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[1];
frost$core$String* $tmp119 = $tmp117(((frost$collections$CollectionView*) param0));
frost$core$String* $tmp120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s121, $tmp119);
frost$core$String* $tmp122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp120, &$s123);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing REF($3:frost.core.String)
return $tmp122;

}
void org$frostlanguage$frost$UInt64List$cleanup(org$frostlanguage$frost$UInt64List* param0) {

// line 8
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

