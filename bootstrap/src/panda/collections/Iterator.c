#include "panda/collections/Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableMethod.h"
#include "panda/collections/Iterator/FilterIterator.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/Iterator/RangeIterator.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/Array.h"


struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { NULL, NULL, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$Iterator$class_type panda$collections$Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

typedef panda$core$Bit (*$fn5)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn11)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn95)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn100)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn110)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn115)(panda$collections$Iterator*);
typedef void (*$fn124)(panda$core$Object*);
typedef void (*$fn125)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn129)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn138)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn143)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn150)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn157)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn159)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn175)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn182)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn184)(panda$core$Object*, panda$core$Object*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 163, -6814385964810289208, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 188, -3998816657593608985, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, -7677722807381227033, NULL };

panda$core$Int64 panda$collections$Iterator$count$R$panda$core$Int64(panda$collections$Iterator* param0) {

panda$core$Int64 local0;
// line 129
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
*(&local0) = $tmp2;
// line 130
goto block1;
block1:;
ITable* $tmp3 = param0->$class->itable;
while ($tmp3->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp3 = $tmp3->next;
}
$fn5 $tmp4 = $tmp3->methods[0];
panda$core$Bit $tmp6 = $tmp4(param0);
panda$core$Bit $tmp7 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block2; else goto block3;
block2:;
// line 131
ITable* $tmp9 = param0->$class->itable;
while ($tmp9->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[1];
panda$core$Object* $tmp12 = $tmp10(param0);
panda$core$Panda$unref$panda$core$Object$Q($tmp12);
// line 132
panda$core$Int64 $tmp13 = *(&local0);
panda$core$Int64 $tmp14 = (panda$core$Int64) {1};
int64_t $tmp15 = $tmp13.value;
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15 + $tmp16;
panda$core$Int64 $tmp18 = (panda$core$Int64) {$tmp17};
*(&local0) = $tmp18;
goto block1;
block3:;
// line 134
panda$core$Int64 $tmp19 = *(&local0);
return $tmp19;

}
panda$collections$Iterator* panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* param0, panda$core$MutableMethod* param1) {

// line 144
panda$collections$Iterator$FilterIterator* $tmp20 = (panda$collections$Iterator$FilterIterator*) pandaObjectAlloc(48, (panda$core$Class*) &panda$collections$Iterator$FilterIterator$class);
panda$collections$Iterator$FilterIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$FilterIterator$T$GT$$LPpanda$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPpanda$core$Bit$RP($tmp20, param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp20)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
return ((panda$collections$Iterator*) $tmp20);

}
panda$collections$Iterator* panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* param0, panda$core$Range$LTpanda$core$Int64$Q$GT param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Int64$nullable $tmp21 = param1.min;
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit(!$tmp21.nonnull);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block2;
block1:;
*(&local1) = $tmp22;
goto block3;
block2:;
panda$core$Int64$nullable $tmp24 = param1.min;
panda$core$Int64 $tmp25 = (panda$core$Int64) {0};
int64_t $tmp26 = ((panda$core$Int64) $tmp24.value).value;
int64_t $tmp27 = $tmp25.value;
bool $tmp28 = $tmp26 >= $tmp27;
panda$core$Bit $tmp29 = (panda$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block4; else goto block5;
block4:;
panda$core$Int64$nullable $tmp31 = param1.max;
panda$core$Bit $tmp32 = panda$core$Bit$init$builtin_bit(!$tmp31.nonnull);
*(&local2) = $tmp32;
goto block6;
block5:;
*(&local2) = $tmp29;
goto block6;
block6:;
panda$core$Bit $tmp33 = *(&local2);
*(&local1) = $tmp33;
goto block3;
block3:;
panda$core$Bit $tmp34 = *(&local1);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block7; else goto block8;
block7:;
*(&local0) = $tmp34;
goto block9;
block8:;
panda$core$Int64$nullable $tmp36 = param1.min;
panda$core$Int64 $tmp37 = (panda$core$Int64) {0};
int64_t $tmp38 = ((panda$core$Int64) $tmp36.value).value;
int64_t $tmp39 = $tmp37.value;
bool $tmp40 = $tmp38 >= $tmp39;
panda$core$Bit $tmp41 = (panda$core$Bit) {$tmp40};
*(&local0) = $tmp41;
goto block9;
block9:;
panda$core$Bit $tmp42 = *(&local0);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp44 = (panda$core$Int64) {164};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s45, $tmp44, &$s46);
abort(); // unreachable
block10:;
// line 165
panda$collections$Iterator$RangeIterator* $tmp47 = (panda$collections$Iterator$RangeIterator*) pandaObjectAlloc(65, (panda$core$Class*) &panda$collections$Iterator$RangeIterator$class);
panda$core$Int64$nullable $tmp48 = param1.min;
panda$core$Int64$nullable $tmp49 = param1.max;
panda$core$Bit $tmp50 = param1.inclusive;
panda$core$Int64 $tmp51 = (panda$core$Int64) {1};
panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64($tmp47, param0, $tmp48, $tmp49, $tmp50, $tmp51);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp47)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
return ((panda$collections$Iterator*) $tmp47);

}
panda$collections$Iterator* panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* param0, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Int64$nullable $tmp52 = param1.start;
panda$core$Bit $tmp53 = panda$core$Bit$init$builtin_bit(!$tmp52.nonnull);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block1; else goto block2;
block1:;
*(&local1) = $tmp53;
goto block3;
block2:;
panda$core$Int64$nullable $tmp55 = param1.start;
panda$core$Int64 $tmp56 = (panda$core$Int64) {0};
int64_t $tmp57 = ((panda$core$Int64) $tmp55.value).value;
int64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 >= $tmp58;
panda$core$Bit $tmp60 = (panda$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block4; else goto block5;
block4:;
panda$core$Int64$nullable $tmp62 = param1.end;
panda$core$Bit $tmp63 = panda$core$Bit$init$builtin_bit(!$tmp62.nonnull);
*(&local2) = $tmp63;
goto block6;
block5:;
*(&local2) = $tmp60;
goto block6;
block6:;
panda$core$Bit $tmp64 = *(&local2);
*(&local1) = $tmp64;
goto block3;
block3:;
panda$core$Bit $tmp65 = *(&local1);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block7; else goto block8;
block7:;
*(&local0) = $tmp65;
goto block9;
block8:;
panda$core$Int64$nullable $tmp67 = param1.end;
panda$core$Int64 $tmp68 = (panda$core$Int64) {0};
int64_t $tmp69 = ((panda$core$Int64) $tmp67.value).value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 >= $tmp70;
panda$core$Bit $tmp72 = (panda$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block10; else goto block11;
block10:;
panda$core$Int64 $tmp74 = param1.step;
panda$core$Int64 $tmp75 = (panda$core$Int64) {0};
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 > $tmp77;
panda$core$Bit $tmp79 = (panda$core$Bit) {$tmp78};
*(&local3) = $tmp79;
goto block12;
block11:;
*(&local3) = $tmp72;
goto block12;
block12:;
panda$core$Bit $tmp80 = *(&local3);
*(&local0) = $tmp80;
goto block9;
block9:;
panda$core$Bit $tmp81 = *(&local0);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp83 = (panda$core$Int64) {181};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s84, $tmp83, &$s85);
abort(); // unreachable
block13:;
// line 182
panda$collections$Iterator$RangeIterator* $tmp86 = (panda$collections$Iterator$RangeIterator*) pandaObjectAlloc(65, (panda$core$Class*) &panda$collections$Iterator$RangeIterator$class);
panda$core$Int64$nullable $tmp87 = param1.start;
panda$core$Int64$nullable $tmp88 = param1.end;
panda$core$Bit $tmp89 = param1.inclusive;
panda$core$Int64 $tmp90 = param1.step;
panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64($tmp86, param0, $tmp87, $tmp88, $tmp89, $tmp90);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp86)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
return ((panda$collections$Iterator*) $tmp86);

}
panda$collections$Array* panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* param0) {

panda$collections$Array* local0 = NULL;
panda$core$Object* local1 = NULL;
// line 192
panda$collections$Array* $tmp91 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp91);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp92 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
*(&local0) = $tmp91;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// line 193
goto block1;
block1:;
ITable* $tmp93 = param0->$class->itable;
while ($tmp93->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
panda$core$Bit $tmp96 = $tmp94(param0);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block3; else goto block2;
block2:;
*(&local1) = ((panda$core$Object*) NULL);
ITable* $tmp98 = param0->$class->itable;
while ($tmp98->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[1];
panda$core$Object* $tmp101 = $tmp99(param0);
panda$core$Panda$unref$panda$core$Object$Q($tmp101);
panda$core$Object* $tmp102 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp102);
panda$core$Panda$ref$panda$core$Object$Q($tmp101);
*(&local1) = $tmp101;
// line 194
panda$collections$Array* $tmp103 = *(&local0);
panda$core$Object* $tmp104 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp103, $tmp104);
panda$core$Object* $tmp105 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp105);
// unreffing v
*(&local1) = ((panda$core$Object*) NULL);
goto block1;
block3:;
// line 196
panda$collections$Array* $tmp106 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$collections$Array* $tmp107 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp106;

}
void panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(panda$collections$Iterator* param0, panda$core$MutableMethod* param1) {

panda$core$Object* local0 = NULL;
// line 210
goto block1;
block1:;
ITable* $tmp108 = param0->$class->itable;
while ($tmp108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp108 = $tmp108->next;
}
$fn110 $tmp109 = $tmp108->methods[0];
panda$core$Bit $tmp111 = $tmp109(param0);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block3; else goto block2;
block2:;
*(&local0) = ((panda$core$Object*) NULL);
ITable* $tmp113 = param0->$class->itable;
while ($tmp113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[1];
panda$core$Object* $tmp116 = $tmp114(param0);
panda$core$Panda$unref$panda$core$Object$Q($tmp116);
panda$core$Object* $tmp117 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp117);
panda$core$Panda$ref$panda$core$Object$Q($tmp116);
*(&local0) = $tmp116;
// line 211
panda$core$Object* $tmp118 = *(&local0);
panda$core$Int8** $tmp119 = &param1->pointer;
panda$core$Int8* $tmp120 = *$tmp119;
panda$core$Object** $tmp121 = &param1->target;
panda$core$Object* $tmp122 = *$tmp121;
bool $tmp123 = $tmp122 != ((panda$core$Object*) NULL);
if ($tmp123) goto block4; else goto block5;
block5:;
(($fn124) $tmp120)($tmp118);
goto block6;
block4:;
(($fn125) $tmp120)($tmp122, $tmp118);
goto block6;
block6:;
panda$core$Object* $tmp126 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp126);
// unreffing v
*(&local0) = ((panda$core$Object*) NULL);
goto block1;
block3:;
return;

}
panda$core$Object* panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T(panda$collections$Iterator* param0, panda$core$MutableMethod* param1) {

panda$core$Object* local0 = NULL;
panda$core$Object* local1 = NULL;
ITable* $tmp127 = param0->$class->itable;
while ($tmp127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[0];
panda$core$Bit $tmp130 = $tmp128(param0);
panda$core$Bit $tmp131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp130);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp133 = (panda$core$Int64) {242};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s134, $tmp133, &$s135);
abort(); // unreachable
block1:;
// line 243
ITable* $tmp136 = param0->$class->itable;
while ($tmp136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[1];
panda$core$Object* $tmp139 = $tmp137(param0);
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Object* $tmp140 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp140);
panda$core$Panda$ref$panda$core$Object$Q($tmp139);
*(&local0) = $tmp139;
panda$core$Panda$unref$panda$core$Object$Q($tmp139);
// line 244
goto block3;
block3:;
ITable* $tmp141 = param0->$class->itable;
while ($tmp141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp141 = $tmp141->next;
}
$fn143 $tmp142 = $tmp141->methods[0];
panda$core$Bit $tmp144 = $tmp142(param0);
panda$core$Bit $tmp145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp144);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block4; else goto block5;
block4:;
// line 245
panda$core$Object* $tmp147 = *(&local0);
ITable* $tmp148 = param0->$class->itable;
while ($tmp148->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[1];
panda$core$Object* $tmp151 = $tmp149(param0);
panda$core$Int8** $tmp152 = &param1->pointer;
panda$core$Int8* $tmp153 = *$tmp152;
panda$core$Object** $tmp154 = &param1->target;
panda$core$Object* $tmp155 = *$tmp154;
bool $tmp156 = $tmp155 != ((panda$core$Object*) NULL);
if ($tmp156) goto block6; else goto block7;
block7:;
panda$core$Object* $tmp158 = (($fn157) $tmp153)($tmp147, $tmp151);
*(&local1) = $tmp158;
goto block8;
block6:;
panda$core$Object* $tmp160 = (($fn159) $tmp153)($tmp155, $tmp147, $tmp151);
*(&local1) = $tmp160;
goto block8;
block8:;
panda$core$Object* $tmp161 = *(&local1);
panda$core$Object* $tmp162 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp162);
panda$core$Panda$ref$panda$core$Object$Q($tmp161);
*(&local0) = $tmp161;
panda$core$Panda$unref$panda$core$Object$Q($tmp151);
panda$core$Panda$unref$panda$core$Object$Q($tmp161);
goto block3;
block5:;
// line 247
panda$core$Object* $tmp163 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp163);
panda$core$Object* $tmp164 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp164);
// unreffing result
*(&local0) = ((panda$core$Object*) NULL);
return $tmp163;

}
panda$core$Object* panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T(panda$collections$Iterator* param0, panda$core$MutableMethod* param1, panda$core$Object* param2) {

panda$core$Object* local0 = NULL;
panda$core$Object* local1 = NULL;
// line 264
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Object* $tmp165 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp165);
panda$core$Panda$ref$panda$core$Object$Q(param2);
*(&local0) = param2;
// line 265
goto block1;
block1:;
ITable* $tmp166 = param0->$class->itable;
while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
panda$core$Bit $tmp169 = $tmp167(param0);
panda$core$Bit $tmp170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp169);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block2; else goto block3;
block2:;
// line 266
panda$core$Object* $tmp172 = *(&local0);
ITable* $tmp173 = param0->$class->itable;
while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[1];
panda$core$Object* $tmp176 = $tmp174(param0);
panda$core$Int8** $tmp177 = &param1->pointer;
panda$core$Int8* $tmp178 = *$tmp177;
panda$core$Object** $tmp179 = &param1->target;
panda$core$Object* $tmp180 = *$tmp179;
bool $tmp181 = $tmp180 != ((panda$core$Object*) NULL);
if ($tmp181) goto block4; else goto block5;
block5:;
panda$core$Object* $tmp183 = (($fn182) $tmp178)($tmp172, $tmp176);
*(&local1) = $tmp183;
goto block6;
block4:;
panda$core$Object* $tmp185 = (($fn184) $tmp178)($tmp180, $tmp172, $tmp176);
*(&local1) = $tmp185;
goto block6;
block6:;
panda$core$Object* $tmp186 = *(&local1);
panda$core$Object* $tmp187 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp187);
panda$core$Panda$ref$panda$core$Object$Q($tmp186);
*(&local0) = $tmp186;
panda$core$Panda$unref$panda$core$Object$Q($tmp176);
panda$core$Panda$unref$panda$core$Object$Q($tmp186);
goto block1;
block3:;
// line 268
panda$core$Object* $tmp188 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp188);
panda$core$Object* $tmp189 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp189);
// unreffing result
*(&local0) = ((panda$core$Object*) NULL);
return $tmp188;

}

