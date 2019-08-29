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
typedef frost$core$Bit (*$fn111)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn116)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn126)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn131)(frost$collections$Iterator*);
typedef void (*$fn140)(frost$core$Object*);
typedef void (*$fn141)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn145)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn156)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn161)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn170)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn177)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn179)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn188)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn197)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn204)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn206)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, -1097572881872230442, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 161, -4860379017368185990, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 184, 1735570260536253795, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, 2762823990384886483, NULL };

frost$core$Int frost$collections$Iterator$count$R$frost$core$Int(frost$collections$Iterator* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:175
frost$core$Int $tmp2 = (frost$core$Int) {0u};
*(&local0) = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:176
goto block1;
block1:;
ITable* $tmp3 = param0->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3 = $tmp3->next;
}
$fn5 $tmp4 = $tmp3->methods[0];
frost$core$Bit $tmp6 = $tmp4(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:176:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp7 = $tmp6.value;
bool $tmp8 = !$tmp7;
frost$core$Bit $tmp9 = (frost$core$Bit) {$tmp8};
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:177
ITable* $tmp11 = param0->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[1];
frost$core$Object* $tmp14 = $tmp12(param0);
frost$core$Frost$unref$frost$core$Object$Q($tmp14);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:178
frost$core$Int $tmp15 = *(&local0);
frost$core$Int $tmp16 = (frost$core$Int) {1u};
int64_t $tmp17 = $tmp15.value;
int64_t $tmp18 = $tmp16.value;
int64_t $tmp19 = $tmp17 + $tmp18;
frost$core$Int $tmp20 = (frost$core$Int) {$tmp19};
*(&local0) = $tmp20;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:180
frost$core$Int $tmp21 = *(&local0);
return $tmp21;

}
frost$collections$Iterator* frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT(frost$collections$Iterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:192
FROST_ASSERT(32 == sizeof(frost$collections$Iterator$EnumerationIterator));
frost$collections$Iterator$EnumerationIterator* $tmp22 = (frost$collections$Iterator$EnumerationIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Iterator$EnumerationIterator$class);
frost$collections$Iterator$EnumerationIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$EnumerationIterator$T$GT($tmp22, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp22)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
return ((frost$collections$Iterator*) $tmp22);

}
frost$collections$Iterator* frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:202
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
frost$core$Bit $tmp28 = (frost$core$Bit) {$tmp27.nonnull};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block6; else goto block7;
block7:;
frost$core$Int $tmp30 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, $tmp30, &$s32);
abort(); // unreachable
block6:;
frost$core$Int $tmp33 = (frost$core$Int) {0u};
int64_t $tmp34 = ((frost$core$Int) $tmp27.value).value;
int64_t $tmp35 = $tmp33.value;
bool $tmp36 = $tmp34 >= $tmp35;
frost$core$Bit $tmp37 = (frost$core$Bit) {$tmp36};
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block5; else goto block3;
block5:;
frost$core$Int$nullable $tmp39 = param1.max;
frost$core$Bit $tmp40 = (frost$core$Bit) {!$tmp39.nonnull};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block1; else goto block3;
block3:;
frost$core$Int$nullable $tmp42 = param1.max;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42.nonnull};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block8; else goto block9;
block9:;
frost$core$Int $tmp45 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, $tmp45, &$s47);
abort(); // unreachable
block8:;
frost$core$Int $tmp48 = (frost$core$Int) {0u};
int64_t $tmp49 = ((frost$core$Int) $tmp42.value).value;
int64_t $tmp50 = $tmp48.value;
bool $tmp51 = $tmp49 >= $tmp50;
frost$core$Bit $tmp52 = (frost$core$Bit) {$tmp51};
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block1; else goto block2;
block2:;
frost$core$Int $tmp54 = (frost$core$Int) {222u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s55, $tmp54, &$s56);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:223
FROST_ASSERT(72 == sizeof(frost$collections$Iterator$RangeIterator));
frost$collections$Iterator$RangeIterator* $tmp57 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(72, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int$nullable $tmp58 = param1.min;
frost$core$Int$nullable $tmp59 = param1.max;
frost$core$Bit $tmp60 = param1.inclusive;
frost$core$Int $tmp61 = (frost$core$Int) {1u};
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit$frost$core$Int($tmp57, param0, $tmp58, $tmp59, $tmp60, $tmp61);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp57)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
return ((frost$collections$Iterator*) $tmp57);

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT param1) {

frost$core$Int$nullable $tmp62 = param1.start;
frost$core$Bit $tmp63 = (frost$core$Bit) {!$tmp62.nonnull};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block1; else goto block4;
block4:;
frost$core$Int$nullable $tmp65 = param1.start;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65.nonnull};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block6; else goto block7;
block7:;
frost$core$Int $tmp68 = (frost$core$Int) {238u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s69, $tmp68, &$s70);
abort(); // unreachable
block6:;
frost$core$Int $tmp71 = (frost$core$Int) {0u};
int64_t $tmp72 = ((frost$core$Int) $tmp65.value).value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 >= $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block5; else goto block3;
block5:;
frost$core$Int$nullable $tmp77 = param1.end;
frost$core$Bit $tmp78 = (frost$core$Bit) {!$tmp77.nonnull};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block1; else goto block3;
block3:;
frost$core$Int$nullable $tmp80 = param1.end;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80.nonnull};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block9; else goto block10;
block10:;
frost$core$Int $tmp83 = (frost$core$Int) {239u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s84, $tmp83, &$s85);
abort(); // unreachable
block9:;
frost$core$Int $tmp86 = (frost$core$Int) {0u};
int64_t $tmp87 = ((frost$core$Int) $tmp80.value).value;
int64_t $tmp88 = $tmp86.value;
bool $tmp89 = $tmp87 >= $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block8; else goto block2;
block8:;
frost$core$Int $tmp92 = param1.step;
frost$core$Int $tmp93 = (frost$core$Int) {0u};
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93.value;
bool $tmp96 = $tmp94 > $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block1; else goto block2;
block2:;
frost$core$Int $tmp99 = (frost$core$Int) {240u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s100, $tmp99, &$s101);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:241
FROST_ASSERT(72 == sizeof(frost$collections$Iterator$RangeIterator));
frost$collections$Iterator$RangeIterator* $tmp102 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(72, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int$nullable $tmp103 = param1.start;
frost$core$Int$nullable $tmp104 = param1.end;
frost$core$Bit $tmp105 = param1.inclusive;
frost$core$Int $tmp106 = param1.step;
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit$frost$core$Int($tmp102, param0, $tmp103, $tmp104, $tmp105, $tmp106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp102)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
return ((frost$collections$Iterator*) $tmp102);

}
frost$collections$Array* frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:251
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp107 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp107);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$collections$Array* $tmp108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local0) = $tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:252
goto block1;
block1:;
ITable* $tmp109 = param0->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
frost$core$Bit $tmp112 = $tmp110(param0);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp114 = param0->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[1];
frost$core$Object* $tmp117 = $tmp115(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp117);
frost$core$Object* $tmp118 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp118);
*(&local1) = $tmp117;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:253
frost$collections$Array* $tmp119 = *(&local0);
frost$core$Object* $tmp120 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp119, $tmp120);
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
frost$core$Object* $tmp121 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:255
frost$collections$Array* $tmp122 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$collections$Array* $tmp123 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp122;

}
void frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:269
goto block1;
block1:;
ITable* $tmp124 = param0->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[0];
frost$core$Bit $tmp127 = $tmp125(param0);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp129 = param0->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp129 = $tmp129->next;
}
$fn131 $tmp130 = $tmp129->methods[1];
frost$core$Object* $tmp132 = $tmp130(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp132);
frost$core$Object* $tmp133 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp133);
*(&local0) = $tmp132;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:270
frost$core$Object* $tmp134 = *(&local0);
frost$core$Int8** $tmp135 = &param1->pointer;
frost$core$Int8* $tmp136 = *$tmp135;
frost$core$Object** $tmp137 = &param1->target;
frost$core$Object* $tmp138 = *$tmp137;
bool $tmp139 = $tmp138 != ((frost$core$Object*) NULL);
if ($tmp139) goto block4; else goto block5;
block5:;
(($fn140) $tmp136)($tmp134);
goto block6;
block4:;
(($fn141) $tmp136)($tmp138, $tmp134);
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp132);
frost$core$Object* $tmp142 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp142);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
return;

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
ITable* $tmp143 = param0->$class->itable;
while ($tmp143->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp143 = $tmp143->next;
}
$fn145 $tmp144 = $tmp143->methods[0];
frost$core$Bit $tmp146 = $tmp144(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:299:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp147 = $tmp146.value;
bool $tmp148 = !$tmp147;
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148};
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block1; else goto block2;
block2:;
frost$core$Int $tmp151 = (frost$core$Int) {301u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s152, $tmp151, &$s153);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:302
ITable* $tmp154 = param0->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[1];
frost$core$Object* $tmp157 = $tmp155(param0);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp157);
frost$core$Object* $tmp158 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp158);
*(&local0) = $tmp157;
frost$core$Frost$unref$frost$core$Object$Q($tmp157);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:303
goto block4;
block4:;
ITable* $tmp159 = param0->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
frost$core$Bit $tmp162 = $tmp160(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:303:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp163 = $tmp162.value;
bool $tmp164 = !$tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:304
frost$core$Object* $tmp167 = *(&local0);
ITable* $tmp168 = param0->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[1];
frost$core$Object* $tmp171 = $tmp169(param0);
frost$core$Int8** $tmp172 = &param1->pointer;
frost$core$Int8* $tmp173 = *$tmp172;
frost$core$Object** $tmp174 = &param1->target;
frost$core$Object* $tmp175 = *$tmp174;
bool $tmp176 = $tmp175 != ((frost$core$Object*) NULL);
if ($tmp176) goto block8; else goto block9;
block9:;
frost$core$Object* $tmp178 = (($fn177) $tmp173)($tmp167, $tmp171);
*(&local1) = $tmp178;
goto block10;
block8:;
frost$core$Object* $tmp180 = (($fn179) $tmp173)($tmp175, $tmp167, $tmp171);
*(&local1) = $tmp180;
goto block10;
block10:;
frost$core$Object* $tmp181 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp181);
frost$core$Object* $tmp182 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp182);
*(&local0) = $tmp181;
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
frost$core$Frost$unref$frost$core$Object$Q($tmp171);
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:306
frost$core$Object* $tmp183 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp183);
frost$core$Object* $tmp184 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp183;

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:323
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp185);
*(&local0) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:324
goto block1;
block1:;
ITable* $tmp186 = param0->$class->itable;
while ($tmp186->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[0];
frost$core$Bit $tmp189 = $tmp187(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:324:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp190 = $tmp189.value;
bool $tmp191 = !$tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:325
frost$core$Object* $tmp194 = *(&local0);
ITable* $tmp195 = param0->$class->itable;
while ($tmp195->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp195 = $tmp195->next;
}
$fn197 $tmp196 = $tmp195->methods[1];
frost$core$Object* $tmp198 = $tmp196(param0);
frost$core$Int8** $tmp199 = &param1->pointer;
frost$core$Int8* $tmp200 = *$tmp199;
frost$core$Object** $tmp201 = &param1->target;
frost$core$Object* $tmp202 = *$tmp201;
bool $tmp203 = $tmp202 != ((frost$core$Object*) NULL);
if ($tmp203) goto block5; else goto block6;
block6:;
frost$core$Object* $tmp205 = (($fn204) $tmp200)($tmp194, $tmp198);
*(&local1) = $tmp205;
goto block7;
block5:;
frost$core$Object* $tmp207 = (($fn206) $tmp200)($tmp202, $tmp194, $tmp198);
*(&local1) = $tmp207;
goto block7;
block7:;
frost$core$Object* $tmp208 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp208);
frost$core$Object* $tmp209 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp209);
*(&local0) = $tmp208;
frost$core$Frost$unref$frost$core$Object$Q($tmp208);
frost$core$Frost$unref$frost$core$Object$Q($tmp198);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:327
frost$core$Object* $tmp210 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp210);
frost$core$Object* $tmp211 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp211);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp210;

}
frost$collections$Iterator* frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:340
FROST_ASSERT(32 == sizeof(frost$collections$Iterator$MapIterator));
frost$collections$Iterator$MapIterator* $tmp212 = (frost$collections$Iterator$MapIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Iterator$MapIterator$class);
frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$MapIterator$U$RP($tmp212, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp212)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
return ((frost$collections$Iterator*) $tmp212);

}

