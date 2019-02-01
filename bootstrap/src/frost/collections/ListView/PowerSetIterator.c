#include "frost/collections/ListView/PowerSetIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT$shim(frost$collections$ListView$PowerSetIterator* p0) {
    frost$collections$ListView* result = frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ListView$PowerSetIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ListView$PowerSetIterator$class_type frost$collections$ListView$PowerSetIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$PowerSetIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ListView$PowerSetIterator$cleanup, frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT$shim} };

typedef frost$core$Int64 (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn22)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn36)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn67)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x6f\x77\x65\x72\x53\x65\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 43, 2408700230285149002, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x6f\x77\x65\x72\x53\x65\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x6f\x77\x65\x72\x53\x65\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 156, 8717723379661372697, NULL };

void frost$collections$ListView$PowerSetIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(frost$collections$ListView$PowerSetIterator* param0, frost$collections$ListView* param1) {

// line 142
frost$core$UInt64 $tmp2 = (frost$core$UInt64) {0};
frost$core$UInt64* $tmp3 = &param0->bits;
*$tmp3 = $tmp2;
// line 147
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ListView** $tmp4 = &param0->list;
frost$collections$ListView* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$ListView** $tmp6 = &param0->list;
*$tmp6 = param1;
// line 148
frost$core$Int64 $tmp7 = (frost$core$Int64) {1};
ITable* $tmp8 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Int64 $tmp11 = $tmp9(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp12 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp7, $tmp11);
frost$core$UInt64 $tmp13 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp12);
frost$core$UInt64* $tmp14 = &param0->stop;
*$tmp14 = $tmp13;
return;

}
frost$core$Bit frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit(frost$collections$ListView$PowerSetIterator* param0) {

// line 153
frost$core$UInt64* $tmp15 = &param0->bits;
frost$core$UInt64 $tmp16 = *$tmp15;
frost$core$UInt64* $tmp17 = &param0->stop;
frost$core$UInt64 $tmp18 = *$tmp17;
frost$core$Bit $tmp19 = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit($tmp16, $tmp18);
return $tmp19;

}
frost$collections$ListView* frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(frost$collections$ListView$PowerSetIterator* param0) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
ITable* $tmp20 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Bit $tmp23 = $tmp21(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp24 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp23);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp26 = (frost$core$Int64) {157};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block1:;
// line 158
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp29 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp29);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$collections$Array* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local0) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// line 159
frost$core$Int64 $tmp31 = (frost$core$Int64) {0};
frost$collections$ListView** $tmp32 = &param0->list;
frost$collections$ListView* $tmp33 = *$tmp32;
ITable* $tmp34 = ((frost$collections$CollectionView*) $tmp33)->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[0];
frost$core$Int64 $tmp37 = $tmp35(((frost$collections$CollectionView*) $tmp33));
frost$core$Bit $tmp38 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp39 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp31, $tmp37, $tmp38);
frost$core$Int64 $tmp40 = $tmp39.min;
*(&local1) = $tmp40;
frost$core$Int64 $tmp41 = $tmp39.max;
frost$core$Bit $tmp42 = $tmp39.inclusive;
bool $tmp43 = $tmp42.value;
frost$core$Int64 $tmp44 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp45 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp44);
if ($tmp43) goto block6; else goto block7;
block6:;
int64_t $tmp46 = $tmp40.value;
int64_t $tmp47 = $tmp41.value;
bool $tmp48 = $tmp46 <= $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block3; else goto block4;
block7:;
int64_t $tmp51 = $tmp40.value;
int64_t $tmp52 = $tmp41.value;
bool $tmp53 = $tmp51 < $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block3; else goto block4;
block3:;
// line 160
frost$core$UInt64* $tmp56 = &param0->bits;
frost$core$UInt64 $tmp57 = *$tmp56;
frost$core$Int64 $tmp58 = *(&local1);
frost$core$Bit $tmp59 = frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit($tmp57, $tmp58);
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block8; else goto block9;
block8:;
// line 161
frost$collections$Array* $tmp61 = *(&local0);
frost$collections$ListView** $tmp62 = &param0->list;
frost$collections$ListView* $tmp63 = *$tmp62;
frost$core$Int64 $tmp64 = *(&local1);
ITable* $tmp65 = $tmp63->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp65 = $tmp65->next;
}
$fn67 $tmp66 = $tmp65->methods[0];
frost$core$Object* $tmp68 = $tmp66($tmp63, $tmp64);
frost$collections$Array$add$frost$collections$Array$T($tmp61, $tmp68);
frost$core$Frost$unref$frost$core$Object$Q($tmp68);
goto block9;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp69 = *(&local1);
int64_t $tmp70 = $tmp41.value;
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70 - $tmp71;
frost$core$Int64 $tmp73 = (frost$core$Int64) {$tmp72};
frost$core$UInt64 $tmp74 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp73);
if ($tmp43) goto block11; else goto block12;
block11:;
uint64_t $tmp75 = $tmp74.value;
uint64_t $tmp76 = $tmp45.value;
bool $tmp77 = $tmp75 >= $tmp76;
frost$core$Bit $tmp78 = (frost$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block10; else goto block4;
block12:;
uint64_t $tmp80 = $tmp74.value;
uint64_t $tmp81 = $tmp45.value;
bool $tmp82 = $tmp80 > $tmp81;
frost$core$Bit $tmp83 = (frost$core$Bit) {$tmp82};
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block10; else goto block4;
block10:;
int64_t $tmp85 = $tmp69.value;
int64_t $tmp86 = $tmp44.value;
int64_t $tmp87 = $tmp85 + $tmp86;
frost$core$Int64 $tmp88 = (frost$core$Int64) {$tmp87};
*(&local1) = $tmp88;
goto block3;
block4:;
// line 164
frost$core$UInt64* $tmp89 = &param0->bits;
frost$core$UInt64 $tmp90 = *$tmp89;
frost$core$UInt64 $tmp91 = (frost$core$UInt64) {1};
uint64_t $tmp92 = $tmp90.value;
uint64_t $tmp93 = $tmp91.value;
uint64_t $tmp94 = $tmp92 + $tmp93;
frost$core$UInt64 $tmp95 = (frost$core$UInt64) {$tmp94};
frost$core$UInt64* $tmp96 = &param0->bits;
*$tmp96 = $tmp95;
// line 165
frost$collections$Array* $tmp97 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp97)));
frost$collections$Array* $tmp98 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp97);

}
void frost$collections$ListView$PowerSetIterator$cleanup(frost$collections$ListView$PowerSetIterator* param0) {

// line 139
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ListView** $tmp99 = &param0->list;
frost$collections$ListView* $tmp100 = *$tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
return;

}






