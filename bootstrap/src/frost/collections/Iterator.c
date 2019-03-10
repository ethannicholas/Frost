#include "frost/collections/Iterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/collections/Iterator/EnumerationIterator.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Iterator/FilterIterator.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/collections/Iterator/RangeIterator.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Q.Cfrost/core/Int.GT.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterator/MapIterator.h"


struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { NULL, NULL, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$class_type frost$collections$Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

typedef frost$core$Bit (*$fn5)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn13)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn96)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn106)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn111)(frost$collections$Iterator*);
typedef void (*$fn120)(frost$core$Object*);
typedef void (*$fn121)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn125)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn136)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn141)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn150)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn157)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn159)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn168)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn177)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn184)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn186)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, -1097572881872230442, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 161, -4860379017368185990, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 184, 1735570260536253795, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, 2762823990384886483, NULL };

frost$core$Int frost$collections$Iterator$count$R$frost$core$Int(frost$collections$Iterator* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:175
frost$core$Int $tmp2 = (frost$core$Int) {0u};
*(&local0) = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:176
goto block1;
block1:;
ITable* $tmp3 = param0->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3 = $tmp3->next;
}
$fn5 $tmp4 = $tmp3->methods[0];
frost$core$Bit $tmp6 = $tmp4(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:176:15
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp7 = $tmp6.value;
bool $tmp8 = !$tmp7;
frost$core$Bit $tmp9 = (frost$core$Bit) {$tmp8};
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:177
ITable* $tmp11 = param0->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[1];
frost$core$Object* $tmp14 = $tmp12(param0);
frost$core$Frost$unref$frost$core$Object$Q($tmp14);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:178
frost$core$Int $tmp15 = *(&local0);
frost$core$Int $tmp16 = (frost$core$Int) {1u};
int64_t $tmp17 = $tmp15.value;
int64_t $tmp18 = $tmp16.value;
int64_t $tmp19 = $tmp17 + $tmp18;
frost$core$Int $tmp20 = (frost$core$Int) {$tmp19};
*(&local0) = $tmp20;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:180
frost$core$Int $tmp21 = *(&local0);
return $tmp21;

}
frost$collections$Iterator* frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT(frost$collections$Iterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:192
FROST_ASSERT(32 == sizeof(frost$collections$Iterator$EnumerationIterator));
frost$collections$Iterator$EnumerationIterator* $tmp22 = (frost$collections$Iterator$EnumerationIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Iterator$EnumerationIterator$class);
frost$collections$Iterator$EnumerationIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$EnumerationIterator$T$GT($tmp22, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp22)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
return ((frost$collections$Iterator*) $tmp22);

}
frost$collections$Iterator* frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:202
FROST_ASSERT(48 == sizeof(frost$collections$Iterator$FilterIterator));
frost$collections$Iterator$FilterIterator* $tmp23 = (frost$collections$Iterator$FilterIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$collections$Iterator$FilterIterator$class);
frost$collections$Iterator$FilterIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$FilterIterator$T$GT$$LPfrost$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPfrost$core$Bit$RP($tmp23, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp23)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
return ((frost$collections$Iterator*) $tmp23);

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$Range$LTfrost$core$Int$Q$GT param1) {

frost$core$Int$nullable $tmp24 = param1.min;
frost$core$Bit $tmp25 = (frost$core$Bit) {!$tmp24.nonnull};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block1; else goto block4;
block4:;
frost$core$Int$nullable $tmp27 = param1.min;
frost$core$Int $tmp28 = (frost$core$Int) {0u};
int64_t $tmp29 = ((frost$core$Int) $tmp27.value).value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 >= $tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block5; else goto block3;
block5:;
frost$core$Int$nullable $tmp34 = param1.max;
frost$core$Bit $tmp35 = (frost$core$Bit) {!$tmp34.nonnull};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block3;
block3:;
frost$core$Int$nullable $tmp37 = param1.min;
frost$core$Int $tmp38 = (frost$core$Int) {0u};
int64_t $tmp39 = ((frost$core$Int) $tmp37.value).value;
int64_t $tmp40 = $tmp38.value;
bool $tmp41 = $tmp39 >= $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block2:;
frost$core$Int $tmp44 = (frost$core$Int) {222u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s45, $tmp44, &$s46);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:223
FROST_ASSERT(72 == sizeof(frost$collections$Iterator$RangeIterator));
frost$collections$Iterator$RangeIterator* $tmp47 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(72, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int$nullable $tmp48 = param1.min;
frost$core$Int$nullable $tmp49 = param1.max;
frost$core$Bit $tmp50 = param1.inclusive;
frost$core$Int $tmp51 = (frost$core$Int) {1u};
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit$frost$core$Int($tmp47, param0, $tmp48, $tmp49, $tmp50, $tmp51);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp47)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
return ((frost$collections$Iterator*) $tmp47);

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param1) {

frost$core$Int$nullable $tmp52 = param1.start;
frost$core$Bit $tmp53 = (frost$core$Bit) {!$tmp52.nonnull};
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block1; else goto block4;
block4:;
frost$core$Int$nullable $tmp55 = param1.start;
frost$core$Int $tmp56 = (frost$core$Int) {0u};
int64_t $tmp57 = ((frost$core$Int) $tmp55.value).value;
int64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 >= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block5; else goto block3;
block5:;
frost$core$Int$nullable $tmp62 = param1.end;
frost$core$Bit $tmp63 = (frost$core$Bit) {!$tmp62.nonnull};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block1; else goto block3;
block3:;
frost$core$Int$nullable $tmp65 = param1.end;
frost$core$Int $tmp66 = (frost$core$Int) {0u};
int64_t $tmp67 = ((frost$core$Int) $tmp65.value).value;
int64_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 >= $tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block6; else goto block2;
block6:;
frost$core$Int $tmp72 = param1.step;
frost$core$Int $tmp73 = (frost$core$Int) {0u};
int64_t $tmp74 = $tmp72.value;
int64_t $tmp75 = $tmp73.value;
bool $tmp76 = $tmp74 > $tmp75;
frost$core$Bit $tmp77 = (frost$core$Bit) {$tmp76};
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block1; else goto block2;
block2:;
frost$core$Int $tmp79 = (frost$core$Int) {239u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s80, $tmp79, &$s81);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:240
FROST_ASSERT(72 == sizeof(frost$collections$Iterator$RangeIterator));
frost$collections$Iterator$RangeIterator* $tmp82 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(72, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int$nullable $tmp83 = param1.start;
frost$core$Int$nullable $tmp84 = param1.end;
frost$core$Bit $tmp85 = param1.inclusive;
frost$core$Int $tmp86 = param1.step;
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit$frost$core$Int($tmp82, param0, $tmp83, $tmp84, $tmp85, $tmp86);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp82)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
return ((frost$collections$Iterator*) $tmp82);

}
frost$collections$Array* frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:250
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp87 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp87);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$collections$Array* $tmp88 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local0) = $tmp87;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:251
goto block1;
block1:;
ITable* $tmp89 = param0->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
frost$core$Bit $tmp92 = $tmp90(param0);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp94 = param0->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[1];
frost$core$Object* $tmp97 = $tmp95(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp97);
frost$core$Object* $tmp98 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp98);
*(&local1) = $tmp97;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:252
frost$collections$Array* $tmp99 = *(&local0);
frost$core$Object* $tmp100 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp99, $tmp100);
frost$core$Frost$unref$frost$core$Object$Q($tmp97);
frost$core$Object* $tmp101 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp101);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:254
frost$collections$Array* $tmp102 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$collections$Array* $tmp103 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp102;

}
void frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:268
goto block1;
block1:;
ITable* $tmp104 = param0->$class->itable;
while ($tmp104->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp104 = $tmp104->next;
}
$fn106 $tmp105 = $tmp104->methods[0];
frost$core$Bit $tmp107 = $tmp105(param0);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp109 = param0->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[1];
frost$core$Object* $tmp112 = $tmp110(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp112);
frost$core$Object* $tmp113 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
*(&local0) = $tmp112;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:269
frost$core$Object* $tmp114 = *(&local0);
frost$core$Int8** $tmp115 = &param1->pointer;
frost$core$Int8* $tmp116 = *$tmp115;
frost$core$Object** $tmp117 = &param1->target;
frost$core$Object* $tmp118 = *$tmp117;
bool $tmp119 = $tmp118 != ((frost$core$Object*) NULL);
if ($tmp119) goto block4; else goto block5;
block5:;
(($fn120) $tmp116)($tmp114);
goto block6;
block4:;
(($fn121) $tmp116)($tmp118, $tmp114);
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp112);
frost$core$Object* $tmp122 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp122);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
return;

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
ITable* $tmp123 = param0->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp123 = $tmp123->next;
}
$fn125 $tmp124 = $tmp123->methods[0];
frost$core$Bit $tmp126 = $tmp124(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:298:10
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp127 = $tmp126.value;
bool $tmp128 = !$tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block1; else goto block2;
block2:;
frost$core$Int $tmp131 = (frost$core$Int) {300u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s132, $tmp131, &$s133);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:301
ITable* $tmp134 = param0->$class->itable;
while ($tmp134->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp134 = $tmp134->next;
}
$fn136 $tmp135 = $tmp134->methods[1];
frost$core$Object* $tmp137 = $tmp135(param0);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp137);
frost$core$Object* $tmp138 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp138);
*(&local0) = $tmp137;
frost$core$Frost$unref$frost$core$Object$Q($tmp137);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:302
goto block4;
block4:;
ITable* $tmp139 = param0->$class->itable;
while ($tmp139->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp139 = $tmp139->next;
}
$fn141 $tmp140 = $tmp139->methods[0];
frost$core$Bit $tmp142 = $tmp140(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:302:15
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp143 = $tmp142.value;
bool $tmp144 = !$tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:303
frost$core$Object* $tmp147 = *(&local0);
ITable* $tmp148 = param0->$class->itable;
while ($tmp148->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[1];
frost$core$Object* $tmp151 = $tmp149(param0);
frost$core$Int8** $tmp152 = &param1->pointer;
frost$core$Int8* $tmp153 = *$tmp152;
frost$core$Object** $tmp154 = &param1->target;
frost$core$Object* $tmp155 = *$tmp154;
bool $tmp156 = $tmp155 != ((frost$core$Object*) NULL);
if ($tmp156) goto block8; else goto block9;
block9:;
frost$core$Object* $tmp158 = (($fn157) $tmp153)($tmp147, $tmp151);
*(&local1) = $tmp158;
goto block10;
block8:;
frost$core$Object* $tmp160 = (($fn159) $tmp153)($tmp155, $tmp147, $tmp151);
*(&local1) = $tmp160;
goto block10;
block10:;
frost$core$Object* $tmp161 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp161);
frost$core$Object* $tmp162 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp162);
*(&local0) = $tmp161;
frost$core$Frost$unref$frost$core$Object$Q($tmp161);
frost$core$Frost$unref$frost$core$Object$Q($tmp151);
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:305
frost$core$Object* $tmp163 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp163);
frost$core$Object* $tmp164 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp164);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp163;

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:322
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp165 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp165);
*(&local0) = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:323
goto block1;
block1:;
ITable* $tmp166 = param0->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
frost$core$Bit $tmp169 = $tmp167(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:323:15
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp170 = $tmp169.value;
bool $tmp171 = !$tmp170;
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171};
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:324
frost$core$Object* $tmp174 = *(&local0);
ITable* $tmp175 = param0->$class->itable;
while ($tmp175->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp175 = $tmp175->next;
}
$fn177 $tmp176 = $tmp175->methods[1];
frost$core$Object* $tmp178 = $tmp176(param0);
frost$core$Int8** $tmp179 = &param1->pointer;
frost$core$Int8* $tmp180 = *$tmp179;
frost$core$Object** $tmp181 = &param1->target;
frost$core$Object* $tmp182 = *$tmp181;
bool $tmp183 = $tmp182 != ((frost$core$Object*) NULL);
if ($tmp183) goto block5; else goto block6;
block6:;
frost$core$Object* $tmp185 = (($fn184) $tmp180)($tmp174, $tmp178);
*(&local1) = $tmp185;
goto block7;
block5:;
frost$core$Object* $tmp187 = (($fn186) $tmp180)($tmp182, $tmp174, $tmp178);
*(&local1) = $tmp187;
goto block7;
block7:;
frost$core$Object* $tmp188 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp188);
frost$core$Object* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp189);
*(&local0) = $tmp188;
frost$core$Frost$unref$frost$core$Object$Q($tmp188);
frost$core$Frost$unref$frost$core$Object$Q($tmp178);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:326
frost$core$Object* $tmp190 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp190);
frost$core$Object* $tmp191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp191);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp190;

}
frost$collections$Iterator* frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:339
FROST_ASSERT(32 == sizeof(frost$collections$Iterator$MapIterator));
frost$collections$Iterator$MapIterator* $tmp192 = (frost$collections$Iterator$MapIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Iterator$MapIterator$class);
frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$MapIterator$U$RP($tmp192, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp192)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
return ((frost$collections$Iterator*) $tmp192);

}

