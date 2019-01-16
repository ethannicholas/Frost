#include "frost/collections/Iterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Iterator/FilterIterator.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/collections/Iterator/RangeIterator.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterator/MapIterator.h"


struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$Iterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { NULL, NULL, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$class_type frost$collections$Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$_frost$collections$Iterator, { frost$core$Object$convert$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

typedef frost$core$Bit (*$fn5)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn11)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn115)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn120)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn130)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn135)(frost$collections$Iterator*);
typedef void (*$fn144)(frost$core$Object*);
typedef void (*$fn145)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn149)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn158)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn163)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn170)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn177)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn179)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn188)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn195)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn202)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn204)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 163, 296282750532941114, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 188, 7762577120242709379, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, 4205557322875300889, NULL };

frost$core$Int64 frost$collections$Iterator$count$R$frost$core$Int64(frost$collections$Iterator* param0) {

frost$core$Int64 local0;
// line 151
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
*(&local0) = $tmp2;
// line 152
goto block1;
block1:;
ITable* $tmp3 = param0->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3 = $tmp3->next;
}
$fn5 $tmp4 = $tmp3->methods[0];
frost$core$Bit $tmp6 = $tmp4(param0);
frost$core$Bit $tmp7 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp6);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block2; else goto block3;
block2:;
// line 153
ITable* $tmp9 = param0->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[1];
frost$core$Object* $tmp12 = $tmp10(param0);
frost$core$Frost$unref$frost$core$Object$Q($tmp12);
// unreffing REF($14:frost.collections.Iterator.T)
// line 154
frost$core$Int64 $tmp13 = *(&local0);
frost$core$Int64 $tmp14 = (frost$core$Int64) {1};
int64_t $tmp15 = $tmp13.value;
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15 + $tmp16;
frost$core$Int64 $tmp18 = (frost$core$Int64) {$tmp17};
*(&local0) = $tmp18;
goto block1;
block3:;
// line 156
frost$core$Int64 $tmp19 = *(&local0);
return $tmp19;

}
frost$collections$Iterator* frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

// line 166
frost$collections$Iterator$FilterIterator* $tmp20 = (frost$collections$Iterator$FilterIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$collections$Iterator$FilterIterator$class);
frost$collections$Iterator$FilterIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$FilterIterator$T$GT$$LPfrost$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPfrost$core$Bit$RP($tmp20, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp20)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($1:frost.collections.Iterator.FilterIterator<frost.collections.Iterator.T>)
return ((frost$collections$Iterator*) $tmp20);

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Int64$nullable $tmp21 = param1.min;
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit(!$tmp21.nonnull);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block2;
block1:;
*(&local1) = $tmp22;
goto block3;
block2:;
frost$core$Int64$nullable $tmp24 = param1.min;
frost$core$Bit $tmp25 = frost$core$Bit$init$builtin_bit($tmp24.nonnull);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp27 = (frost$core$Int64) {185};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s28, $tmp27, &$s29);
abort(); // unreachable
block4:;
frost$core$Int64 $tmp30 = (frost$core$Int64) {0};
int64_t $tmp31 = ((frost$core$Int64) $tmp24.value).value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 >= $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block6; else goto block7;
block6:;
frost$core$Int64$nullable $tmp36 = param1.max;
frost$core$Bit $tmp37 = frost$core$Bit$init$builtin_bit(!$tmp36.nonnull);
*(&local2) = $tmp37;
goto block8;
block7:;
*(&local2) = $tmp34;
goto block8;
block8:;
frost$core$Bit $tmp38 = *(&local2);
*(&local1) = $tmp38;
goto block3;
block3:;
frost$core$Bit $tmp39 = *(&local1);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block9; else goto block10;
block9:;
*(&local0) = $tmp39;
goto block11;
block10:;
frost$core$Int64$nullable $tmp41 = param1.min;
frost$core$Bit $tmp42 = frost$core$Bit$init$builtin_bit($tmp41.nonnull);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {185};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s45, $tmp44, &$s46);
abort(); // unreachable
block12:;
frost$core$Int64 $tmp47 = (frost$core$Int64) {0};
int64_t $tmp48 = ((frost$core$Int64) $tmp41.value).value;
int64_t $tmp49 = $tmp47.value;
bool $tmp50 = $tmp48 >= $tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50};
*(&local0) = $tmp51;
goto block11;
block11:;
frost$core$Bit $tmp52 = *(&local0);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {186};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s55, $tmp54, &$s56);
abort(); // unreachable
block14:;
// line 187
frost$collections$Iterator$RangeIterator* $tmp57 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(65, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int64$nullable $tmp58 = param1.min;
frost$core$Int64$nullable $tmp59 = param1.max;
frost$core$Bit $tmp60 = param1.inclusive;
frost$core$Int64 $tmp61 = (frost$core$Int64) {1};
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64($tmp57, param0, $tmp58, $tmp59, $tmp60, $tmp61);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp57)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing REF($61:frost.collections.Iterator.RangeIterator<frost.collections.Iterator.T>)
return ((frost$collections$Iterator*) $tmp57);

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Int64$nullable $tmp62 = param1.start;
frost$core$Bit $tmp63 = frost$core$Bit$init$builtin_bit(!$tmp62.nonnull);
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block1; else goto block2;
block1:;
*(&local1) = $tmp63;
goto block3;
block2:;
frost$core$Int64$nullable $tmp65 = param1.start;
frost$core$Bit $tmp66 = frost$core$Bit$init$builtin_bit($tmp65.nonnull);
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp68 = (frost$core$Int64) {202};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s69, $tmp68, &$s70);
abort(); // unreachable
block4:;
frost$core$Int64 $tmp71 = (frost$core$Int64) {0};
int64_t $tmp72 = ((frost$core$Int64) $tmp65.value).value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 >= $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block6; else goto block7;
block6:;
frost$core$Int64$nullable $tmp77 = param1.end;
frost$core$Bit $tmp78 = frost$core$Bit$init$builtin_bit(!$tmp77.nonnull);
*(&local2) = $tmp78;
goto block8;
block7:;
*(&local2) = $tmp75;
goto block8;
block8:;
frost$core$Bit $tmp79 = *(&local2);
*(&local1) = $tmp79;
goto block3;
block3:;
frost$core$Bit $tmp80 = *(&local1);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block9; else goto block10;
block9:;
*(&local0) = $tmp80;
goto block11;
block10:;
frost$core$Int64$nullable $tmp82 = param1.end;
frost$core$Bit $tmp83 = frost$core$Bit$init$builtin_bit($tmp82.nonnull);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp85 = (frost$core$Int64) {202};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s86, $tmp85, &$s87);
abort(); // unreachable
block12:;
frost$core$Int64 $tmp88 = (frost$core$Int64) {0};
int64_t $tmp89 = ((frost$core$Int64) $tmp82.value).value;
int64_t $tmp90 = $tmp88.value;
bool $tmp91 = $tmp89 >= $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block14; else goto block15;
block14:;
frost$core$Int64 $tmp94 = param1.step;
frost$core$Int64 $tmp95 = (frost$core$Int64) {0};
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 > $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
*(&local3) = $tmp99;
goto block16;
block15:;
*(&local3) = $tmp92;
goto block16;
block16:;
frost$core$Bit $tmp100 = *(&local3);
*(&local0) = $tmp100;
goto block11;
block11:;
frost$core$Bit $tmp101 = *(&local0);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp103 = (frost$core$Int64) {203};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s104, $tmp103, &$s105);
abort(); // unreachable
block17:;
// line 204
frost$collections$Iterator$RangeIterator* $tmp106 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(65, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int64$nullable $tmp107 = param1.start;
frost$core$Int64$nullable $tmp108 = param1.end;
frost$core$Bit $tmp109 = param1.inclusive;
frost$core$Int64 $tmp110 = param1.step;
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64($tmp106, param0, $tmp107, $tmp108, $tmp109, $tmp110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp106)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing REF($74:frost.collections.Iterator.RangeIterator<frost.collections.Iterator.T>)
return ((frost$collections$Iterator*) $tmp106);

}
frost$collections$Array* frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
// line 214
frost$collections$Array* $tmp111 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp111);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$collections$Array* $tmp112 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local0) = $tmp111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing REF($1:frost.collections.Array<frost.collections.Iterator.T>)
// line 215
goto block1;
block1:;
ITable* $tmp113 = param0->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[0];
frost$core$Bit $tmp116 = $tmp114(param0);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp118 = param0->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
frost$core$Object* $tmp121 = $tmp119(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp121);
frost$core$Object* $tmp122 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp122);
*(&local1) = $tmp121;
// line 216
frost$collections$Array* $tmp123 = *(&local0);
frost$core$Object* $tmp124 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp123, $tmp124);
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
// unreffing REF($24:frost.collections.Iterator.T)
frost$core$Object* $tmp125 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
// unreffing v
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
// line 218
frost$collections$Array* $tmp126 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$collections$Array* $tmp127 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp126;

}
void frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
// line 232
goto block1;
block1:;
ITable* $tmp128 = param0->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp128 = $tmp128->next;
}
$fn130 $tmp129 = $tmp128->methods[0];
frost$core$Bit $tmp131 = $tmp129(param0);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp133 = param0->$class->itable;
while ($tmp133->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp133 = $tmp133->next;
}
$fn135 $tmp134 = $tmp133->methods[1];
frost$core$Object* $tmp136 = $tmp134(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp136);
frost$core$Object* $tmp137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp137);
*(&local0) = $tmp136;
// line 233
frost$core$Object* $tmp138 = *(&local0);
frost$core$Int8** $tmp139 = &param1->pointer;
frost$core$Int8* $tmp140 = *$tmp139;
frost$core$Object** $tmp141 = &param1->target;
frost$core$Object* $tmp142 = *$tmp141;
bool $tmp143 = $tmp142 != ((frost$core$Object*) NULL);
if ($tmp143) goto block4; else goto block5;
block5:;
(($fn144) $tmp140)($tmp138);
goto block6;
block4:;
(($fn145) $tmp140)($tmp142, $tmp138);
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp136);
// unreffing REF($10:frost.collections.Iterator.T)
frost$core$Object* $tmp146 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp146);
// unreffing v
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
return;

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
ITable* $tmp147 = param0->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[0];
frost$core$Bit $tmp150 = $tmp148(param0);
frost$core$Bit $tmp151 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp153 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s154, $tmp153, &$s155);
abort(); // unreachable
block1:;
// line 265
ITable* $tmp156 = param0->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[1];
frost$core$Object* $tmp159 = $tmp157(param0);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp159);
frost$core$Object* $tmp160 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp160);
*(&local0) = $tmp159;
frost$core$Frost$unref$frost$core$Object$Q($tmp159);
// unreffing REF($12:frost.collections.Iterator.T)
// line 266
goto block3;
block3:;
ITable* $tmp161 = param0->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[0];
frost$core$Bit $tmp164 = $tmp162(param0);
frost$core$Bit $tmp165 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp164);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block4; else goto block5;
block4:;
// line 267
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
if ($tmp176) goto block6; else goto block7;
block7:;
frost$core$Object* $tmp178 = (($fn177) $tmp173)($tmp167, $tmp171);
*(&local1) = $tmp178;
goto block8;
block6:;
frost$core$Object* $tmp180 = (($fn179) $tmp173)($tmp175, $tmp167, $tmp171);
*(&local1) = $tmp180;
goto block8;
block8:;
frost$core$Object* $tmp181 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp181);
frost$core$Object* $tmp182 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp182);
*(&local0) = $tmp181;
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
// unreffing REF($51:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp171);
// unreffing REF($35:frost.collections.Iterator.T)
goto block3;
block5:;
// line 269
frost$core$Object* $tmp183 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp183);
frost$core$Object* $tmp184 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
// unreffing result
*(&local0) = ((frost$core$Object*) NULL);
return $tmp183;

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
// line 286
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp185);
*(&local0) = param2;
// line 287
goto block1;
block1:;
ITable* $tmp186 = param0->$class->itable;
while ($tmp186->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[0];
frost$core$Bit $tmp189 = $tmp187(param0);
frost$core$Bit $tmp190 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block2; else goto block3;
block2:;
// line 288
frost$core$Object* $tmp192 = *(&local0);
ITable* $tmp193 = param0->$class->itable;
while ($tmp193->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[1];
frost$core$Object* $tmp196 = $tmp194(param0);
frost$core$Int8** $tmp197 = &param1->pointer;
frost$core$Int8* $tmp198 = *$tmp197;
frost$core$Object** $tmp199 = &param1->target;
frost$core$Object* $tmp200 = *$tmp199;
bool $tmp201 = $tmp200 != ((frost$core$Object*) NULL);
if ($tmp201) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp203 = (($fn202) $tmp198)($tmp192, $tmp196);
*(&local1) = $tmp203;
goto block6;
block4:;
frost$core$Object* $tmp205 = (($fn204) $tmp198)($tmp200, $tmp192, $tmp196);
*(&local1) = $tmp205;
goto block6;
block6:;
frost$core$Object* $tmp206 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp206);
frost$core$Object* $tmp207 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp207);
*(&local0) = $tmp206;
frost$core$Frost$unref$frost$core$Object$Q($tmp206);
// unreffing REF($36:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp196);
// unreffing REF($20:frost.collections.Iterator.T)
goto block1;
block3:;
// line 290
frost$core$Object* $tmp208 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp208);
frost$core$Object* $tmp209 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp209);
// unreffing result
*(&local0) = ((frost$core$Object*) NULL);
return $tmp208;

}
frost$collections$Iterator* frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

// line 295
frost$collections$Iterator$MapIterator* $tmp210 = (frost$collections$Iterator$MapIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Iterator$MapIterator$class);
frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$GT$LPfrost$collections$Iterator$MapIterator$U$RP($tmp210, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp210)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing REF($1:frost.collections.Iterator.MapIterator<frost.collections.Iterator.T, frost.collections.Iterator.map.U>)
return ((frost$collections$Iterator*) $tmp210);

}

