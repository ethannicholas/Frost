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
typedef frost$core$Bit (*$fn95)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn100)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn110)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn115)(frost$collections$Iterator*);
typedef void (*$fn124)(frost$core$Object*);
typedef void (*$fn125)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn129)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn138)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn143)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn150)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn157)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn159)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn168)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn175)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn182)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn184)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 163, 296282750532941114, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 188, 7762577120242709379, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, 4205557322875300889, NULL };

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
frost$core$Int64 $tmp25 = (frost$core$Int64) {0};
int64_t $tmp26 = ((frost$core$Int64) $tmp24.value).value;
int64_t $tmp27 = $tmp25.value;
bool $tmp28 = $tmp26 >= $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block4; else goto block5;
block4:;
frost$core$Int64$nullable $tmp31 = param1.max;
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit(!$tmp31.nonnull);
*(&local2) = $tmp32;
goto block6;
block5:;
*(&local2) = $tmp29;
goto block6;
block6:;
frost$core$Bit $tmp33 = *(&local2);
*(&local1) = $tmp33;
goto block3;
block3:;
frost$core$Bit $tmp34 = *(&local1);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block7; else goto block8;
block7:;
*(&local0) = $tmp34;
goto block9;
block8:;
frost$core$Int64$nullable $tmp36 = param1.min;
frost$core$Int64 $tmp37 = (frost$core$Int64) {0};
int64_t $tmp38 = ((frost$core$Int64) $tmp36.value).value;
int64_t $tmp39 = $tmp37.value;
bool $tmp40 = $tmp38 >= $tmp39;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp40};
*(&local0) = $tmp41;
goto block9;
block9:;
frost$core$Bit $tmp42 = *(&local0);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {186};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s45, $tmp44, &$s46);
abort(); // unreachable
block10:;
// line 187
frost$collections$Iterator$RangeIterator* $tmp47 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(65, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int64$nullable $tmp48 = param1.min;
frost$core$Int64$nullable $tmp49 = param1.max;
frost$core$Bit $tmp50 = param1.inclusive;
frost$core$Int64 $tmp51 = (frost$core$Int64) {1};
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64($tmp47, param0, $tmp48, $tmp49, $tmp50, $tmp51);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp47)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing REF($47:frost.collections.Iterator.RangeIterator<frost.collections.Iterator.T>)
return ((frost$collections$Iterator*) $tmp47);

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Int64$nullable $tmp52 = param1.start;
frost$core$Bit $tmp53 = frost$core$Bit$init$builtin_bit(!$tmp52.nonnull);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block1; else goto block2;
block1:;
*(&local1) = $tmp53;
goto block3;
block2:;
frost$core$Int64$nullable $tmp55 = param1.start;
frost$core$Int64 $tmp56 = (frost$core$Int64) {0};
int64_t $tmp57 = ((frost$core$Int64) $tmp55.value).value;
int64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 >= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block4; else goto block5;
block4:;
frost$core$Int64$nullable $tmp62 = param1.end;
frost$core$Bit $tmp63 = frost$core$Bit$init$builtin_bit(!$tmp62.nonnull);
*(&local2) = $tmp63;
goto block6;
block5:;
*(&local2) = $tmp60;
goto block6;
block6:;
frost$core$Bit $tmp64 = *(&local2);
*(&local1) = $tmp64;
goto block3;
block3:;
frost$core$Bit $tmp65 = *(&local1);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block7; else goto block8;
block7:;
*(&local0) = $tmp65;
goto block9;
block8:;
frost$core$Int64$nullable $tmp67 = param1.end;
frost$core$Int64 $tmp68 = (frost$core$Int64) {0};
int64_t $tmp69 = ((frost$core$Int64) $tmp67.value).value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 >= $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block10; else goto block11;
block10:;
frost$core$Int64 $tmp74 = param1.step;
frost$core$Int64 $tmp75 = (frost$core$Int64) {0};
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 > $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
*(&local3) = $tmp79;
goto block12;
block11:;
*(&local3) = $tmp72;
goto block12;
block12:;
frost$core$Bit $tmp80 = *(&local3);
*(&local0) = $tmp80;
goto block9;
block9:;
frost$core$Bit $tmp81 = *(&local0);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp83 = (frost$core$Int64) {203};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s84, $tmp83, &$s85);
abort(); // unreachable
block13:;
// line 204
frost$collections$Iterator$RangeIterator* $tmp86 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(65, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int64$nullable $tmp87 = param1.start;
frost$core$Int64$nullable $tmp88 = param1.end;
frost$core$Bit $tmp89 = param1.inclusive;
frost$core$Int64 $tmp90 = param1.step;
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64($tmp86, param0, $tmp87, $tmp88, $tmp89, $tmp90);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp86)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// unreffing REF($60:frost.collections.Iterator.RangeIterator<frost.collections.Iterator.T>)
return ((frost$collections$Iterator*) $tmp86);

}
frost$collections$Array* frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
// line 214
frost$collections$Array* $tmp91 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp91);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$collections$Array* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local0) = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing REF($1:frost.collections.Array<frost.collections.Iterator.T>)
// line 215
goto block1;
block1:;
ITable* $tmp93 = param0->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
frost$core$Bit $tmp96 = $tmp94(param0);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp98 = param0->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[1];
frost$core$Object* $tmp101 = $tmp99(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp101);
frost$core$Object* $tmp102 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp102);
*(&local1) = $tmp101;
// line 216
frost$collections$Array* $tmp103 = *(&local0);
frost$core$Object* $tmp104 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp103, $tmp104);
frost$core$Frost$unref$frost$core$Object$Q($tmp101);
// unreffing REF($24:frost.collections.Iterator.T)
frost$core$Object* $tmp105 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
// unreffing v
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
// line 218
frost$collections$Array* $tmp106 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$collections$Array* $tmp107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp106;

}
void frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
// line 232
goto block1;
block1:;
ITable* $tmp108 = param0->$class->itable;
while ($tmp108->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp108 = $tmp108->next;
}
$fn110 $tmp109 = $tmp108->methods[0];
frost$core$Bit $tmp111 = $tmp109(param0);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp113 = param0->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[1];
frost$core$Object* $tmp116 = $tmp114(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp116);
frost$core$Object* $tmp117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
*(&local0) = $tmp116;
// line 233
frost$core$Object* $tmp118 = *(&local0);
frost$core$Int8** $tmp119 = &param1->pointer;
frost$core$Int8* $tmp120 = *$tmp119;
frost$core$Object** $tmp121 = &param1->target;
frost$core$Object* $tmp122 = *$tmp121;
bool $tmp123 = $tmp122 != ((frost$core$Object*) NULL);
if ($tmp123) goto block4; else goto block5;
block5:;
(($fn124) $tmp120)($tmp118);
goto block6;
block4:;
(($fn125) $tmp120)($tmp122, $tmp118);
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp116);
// unreffing REF($10:frost.collections.Iterator.T)
frost$core$Object* $tmp126 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp126);
// unreffing v
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
return;

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
ITable* $tmp127 = param0->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[0];
frost$core$Bit $tmp130 = $tmp128(param0);
frost$core$Bit $tmp131 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp130);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp133 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s134, $tmp133, &$s135);
abort(); // unreachable
block1:;
// line 265
ITable* $tmp136 = param0->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[1];
frost$core$Object* $tmp139 = $tmp137(param0);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp139);
frost$core$Object* $tmp140 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp140);
*(&local0) = $tmp139;
frost$core$Frost$unref$frost$core$Object$Q($tmp139);
// unreffing REF($12:frost.collections.Iterator.T)
// line 266
goto block3;
block3:;
ITable* $tmp141 = param0->$class->itable;
while ($tmp141->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp141 = $tmp141->next;
}
$fn143 $tmp142 = $tmp141->methods[0];
frost$core$Bit $tmp144 = $tmp142(param0);
frost$core$Bit $tmp145 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp144);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block4; else goto block5;
block4:;
// line 267
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
if ($tmp156) goto block6; else goto block7;
block7:;
frost$core$Object* $tmp158 = (($fn157) $tmp153)($tmp147, $tmp151);
*(&local1) = $tmp158;
goto block8;
block6:;
frost$core$Object* $tmp160 = (($fn159) $tmp153)($tmp155, $tmp147, $tmp151);
*(&local1) = $tmp160;
goto block8;
block8:;
frost$core$Object* $tmp161 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp161);
frost$core$Object* $tmp162 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp162);
*(&local0) = $tmp161;
frost$core$Frost$unref$frost$core$Object$Q($tmp161);
// unreffing REF($51:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp151);
// unreffing REF($35:frost.collections.Iterator.T)
goto block3;
block5:;
// line 269
frost$core$Object* $tmp163 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp163);
frost$core$Object* $tmp164 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp164);
// unreffing result
*(&local0) = ((frost$core$Object*) NULL);
return $tmp163;

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
// line 286
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp165 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp165);
*(&local0) = param2;
// line 287
goto block1;
block1:;
ITable* $tmp166 = param0->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
frost$core$Bit $tmp169 = $tmp167(param0);
frost$core$Bit $tmp170 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp169);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block2; else goto block3;
block2:;
// line 288
frost$core$Object* $tmp172 = *(&local0);
ITable* $tmp173 = param0->$class->itable;
while ($tmp173->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[1];
frost$core$Object* $tmp176 = $tmp174(param0);
frost$core$Int8** $tmp177 = &param1->pointer;
frost$core$Int8* $tmp178 = *$tmp177;
frost$core$Object** $tmp179 = &param1->target;
frost$core$Object* $tmp180 = *$tmp179;
bool $tmp181 = $tmp180 != ((frost$core$Object*) NULL);
if ($tmp181) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp183 = (($fn182) $tmp178)($tmp172, $tmp176);
*(&local1) = $tmp183;
goto block6;
block4:;
frost$core$Object* $tmp185 = (($fn184) $tmp178)($tmp180, $tmp172, $tmp176);
*(&local1) = $tmp185;
goto block6;
block6:;
frost$core$Object* $tmp186 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp186);
frost$core$Object* $tmp187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp187);
*(&local0) = $tmp186;
frost$core$Frost$unref$frost$core$Object$Q($tmp186);
// unreffing REF($36:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp176);
// unreffing REF($20:frost.collections.Iterator.T)
goto block1;
block3:;
// line 290
frost$core$Object* $tmp188 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp188);
frost$core$Object* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp189);
// unreffing result
*(&local0) = ((frost$core$Object*) NULL);
return $tmp188;

}
frost$collections$Iterator* frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

// line 295
frost$collections$Iterator$MapIterator* $tmp190 = (frost$collections$Iterator$MapIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Iterator$MapIterator$class);
frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$GT$LPfrost$collections$Iterator$MapIterator$U$RP($tmp190, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp190)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
// unreffing REF($1:frost.collections.Iterator.MapIterator<frost.collections.Iterator.T, frost.collections.Iterator.map.U>)
return ((frost$collections$Iterator*) $tmp190);

}

