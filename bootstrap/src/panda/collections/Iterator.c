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
#include "panda/collections/Iterator/MapIterator.h"


struct { panda$core$Class* cl; ITable* next; void* methods[11]; } panda$collections$Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { NULL, NULL, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
panda$collections$Iterator$class_type panda$collections$Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

typedef panda$core$Bit (*$fn5)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn11)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn115)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn120)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn130)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn135)(panda$collections$Iterator*);
typedef void (*$fn144)(panda$core$Object*);
typedef void (*$fn145)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn149)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn158)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn170)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn177)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn179)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn188)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn195)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn202)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn204)(panda$core$Object*, panda$core$Object*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 163, -6814385964810289208, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 188, -3998816657593608985, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, -7677722807381227033, NULL };

panda$core$Int64 panda$collections$Iterator$count$R$panda$core$Int64(panda$collections$Iterator* param0) {

panda$core$Int64 local0;
// line 151
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
*(&local0) = $tmp2;
// line 152
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
// line 153
ITable* $tmp9 = param0->$class->itable;
while ($tmp9->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[1];
panda$core$Object* $tmp12 = $tmp10(param0);
panda$core$Panda$unref$panda$core$Object$Q($tmp12);
// unreffing REF($14:panda.collections.Iterator.T)
// line 154
panda$core$Int64 $tmp13 = *(&local0);
panda$core$Int64 $tmp14 = (panda$core$Int64) {1};
int64_t $tmp15 = $tmp13.value;
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15 + $tmp16;
panda$core$Int64 $tmp18 = (panda$core$Int64) {$tmp17};
*(&local0) = $tmp18;
goto block1;
block3:;
// line 156
panda$core$Int64 $tmp19 = *(&local0);
return $tmp19;

}
panda$collections$Iterator* panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* param0, panda$core$MutableMethod* param1) {

// line 166
panda$collections$Iterator$FilterIterator* $tmp20 = (panda$collections$Iterator$FilterIterator*) frostObjectAlloc(48, (panda$core$Class*) &panda$collections$Iterator$FilterIterator$class);
panda$collections$Iterator$FilterIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$FilterIterator$T$GT$$LPpanda$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPpanda$core$Bit$RP($tmp20, param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp20)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($1:panda.collections.Iterator.FilterIterator<panda.collections.Iterator.T>)
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
panda$core$Bit $tmp25 = panda$core$Bit$init$builtin_bit($tmp24.nonnull);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp27 = (panda$core$Int64) {185};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s28, $tmp27, &$s29);
abort(); // unreachable
block4:;
panda$core$Int64 $tmp30 = (panda$core$Int64) {0};
int64_t $tmp31 = ((panda$core$Int64) $tmp24.value).value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 >= $tmp32;
panda$core$Bit $tmp34 = (panda$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block6; else goto block7;
block6:;
panda$core$Int64$nullable $tmp36 = param1.max;
panda$core$Bit $tmp37 = panda$core$Bit$init$builtin_bit(!$tmp36.nonnull);
*(&local2) = $tmp37;
goto block8;
block7:;
*(&local2) = $tmp34;
goto block8;
block8:;
panda$core$Bit $tmp38 = *(&local2);
*(&local1) = $tmp38;
goto block3;
block3:;
panda$core$Bit $tmp39 = *(&local1);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block9; else goto block10;
block9:;
*(&local0) = $tmp39;
goto block11;
block10:;
panda$core$Int64$nullable $tmp41 = param1.min;
panda$core$Bit $tmp42 = panda$core$Bit$init$builtin_bit($tmp41.nonnull);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp44 = (panda$core$Int64) {185};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s45, $tmp44, &$s46);
abort(); // unreachable
block12:;
panda$core$Int64 $tmp47 = (panda$core$Int64) {0};
int64_t $tmp48 = ((panda$core$Int64) $tmp41.value).value;
int64_t $tmp49 = $tmp47.value;
bool $tmp50 = $tmp48 >= $tmp49;
panda$core$Bit $tmp51 = (panda$core$Bit) {$tmp50};
*(&local0) = $tmp51;
goto block11;
block11:;
panda$core$Bit $tmp52 = *(&local0);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp54 = (panda$core$Int64) {186};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s55, $tmp54, &$s56);
abort(); // unreachable
block14:;
// line 187
panda$collections$Iterator$RangeIterator* $tmp57 = (panda$collections$Iterator$RangeIterator*) frostObjectAlloc(65, (panda$core$Class*) &panda$collections$Iterator$RangeIterator$class);
panda$core$Int64$nullable $tmp58 = param1.min;
panda$core$Int64$nullable $tmp59 = param1.max;
panda$core$Bit $tmp60 = param1.inclusive;
panda$core$Int64 $tmp61 = (panda$core$Int64) {1};
panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64($tmp57, param0, $tmp58, $tmp59, $tmp60, $tmp61);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp57)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
// unreffing REF($61:panda.collections.Iterator.RangeIterator<panda.collections.Iterator.T>)
return ((panda$collections$Iterator*) $tmp57);

}
panda$collections$Iterator* panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* param0, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Int64$nullable $tmp62 = param1.start;
panda$core$Bit $tmp63 = panda$core$Bit$init$builtin_bit(!$tmp62.nonnull);
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block1; else goto block2;
block1:;
*(&local1) = $tmp63;
goto block3;
block2:;
panda$core$Int64$nullable $tmp65 = param1.start;
panda$core$Bit $tmp66 = panda$core$Bit$init$builtin_bit($tmp65.nonnull);
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp68 = (panda$core$Int64) {202};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s69, $tmp68, &$s70);
abort(); // unreachable
block4:;
panda$core$Int64 $tmp71 = (panda$core$Int64) {0};
int64_t $tmp72 = ((panda$core$Int64) $tmp65.value).value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 >= $tmp73;
panda$core$Bit $tmp75 = (panda$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block6; else goto block7;
block6:;
panda$core$Int64$nullable $tmp77 = param1.end;
panda$core$Bit $tmp78 = panda$core$Bit$init$builtin_bit(!$tmp77.nonnull);
*(&local2) = $tmp78;
goto block8;
block7:;
*(&local2) = $tmp75;
goto block8;
block8:;
panda$core$Bit $tmp79 = *(&local2);
*(&local1) = $tmp79;
goto block3;
block3:;
panda$core$Bit $tmp80 = *(&local1);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block9; else goto block10;
block9:;
*(&local0) = $tmp80;
goto block11;
block10:;
panda$core$Int64$nullable $tmp82 = param1.end;
panda$core$Bit $tmp83 = panda$core$Bit$init$builtin_bit($tmp82.nonnull);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp85 = (panda$core$Int64) {202};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s86, $tmp85, &$s87);
abort(); // unreachable
block12:;
panda$core$Int64 $tmp88 = (panda$core$Int64) {0};
int64_t $tmp89 = ((panda$core$Int64) $tmp82.value).value;
int64_t $tmp90 = $tmp88.value;
bool $tmp91 = $tmp89 >= $tmp90;
panda$core$Bit $tmp92 = (panda$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block14; else goto block15;
block14:;
panda$core$Int64 $tmp94 = param1.step;
panda$core$Int64 $tmp95 = (panda$core$Int64) {0};
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 > $tmp97;
panda$core$Bit $tmp99 = (panda$core$Bit) {$tmp98};
*(&local3) = $tmp99;
goto block16;
block15:;
*(&local3) = $tmp92;
goto block16;
block16:;
panda$core$Bit $tmp100 = *(&local3);
*(&local0) = $tmp100;
goto block11;
block11:;
panda$core$Bit $tmp101 = *(&local0);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp103 = (panda$core$Int64) {203};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s104, $tmp103, &$s105);
abort(); // unreachable
block17:;
// line 204
panda$collections$Iterator$RangeIterator* $tmp106 = (panda$collections$Iterator$RangeIterator*) frostObjectAlloc(65, (panda$core$Class*) &panda$collections$Iterator$RangeIterator$class);
panda$core$Int64$nullable $tmp107 = param1.start;
panda$core$Int64$nullable $tmp108 = param1.end;
panda$core$Bit $tmp109 = param1.inclusive;
panda$core$Int64 $tmp110 = param1.step;
panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64($tmp106, param0, $tmp107, $tmp108, $tmp109, $tmp110);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp106)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing REF($74:panda.collections.Iterator.RangeIterator<panda.collections.Iterator.T>)
return ((panda$collections$Iterator*) $tmp106);

}
panda$collections$Array* panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* param0) {

panda$collections$Array* local0 = NULL;
panda$core$Object* local1 = NULL;
// line 214
panda$collections$Array* $tmp111 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp111);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
panda$collections$Array* $tmp112 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
*(&local0) = $tmp111;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($1:panda.collections.Array<panda.collections.Iterator.T>)
// line 215
goto block1;
block1:;
ITable* $tmp113 = param0->$class->itable;
while ($tmp113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[0];
panda$core$Bit $tmp116 = $tmp114(param0);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block3; else goto block2;
block2:;
*(&local1) = ((panda$core$Object*) NULL);
ITable* $tmp118 = param0->$class->itable;
while ($tmp118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
panda$core$Object* $tmp121 = $tmp119(param0);
panda$core$Panda$ref$panda$core$Object$Q($tmp121);
panda$core$Object* $tmp122 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp122);
*(&local1) = $tmp121;
// line 216
panda$collections$Array* $tmp123 = *(&local0);
panda$core$Object* $tmp124 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp123, $tmp124);
panda$core$Panda$unref$panda$core$Object$Q($tmp121);
// unreffing REF($24:panda.collections.Iterator.T)
panda$core$Object* $tmp125 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp125);
// unreffing v
*(&local1) = ((panda$core$Object*) NULL);
goto block1;
block3:;
// line 218
panda$collections$Array* $tmp126 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
panda$collections$Array* $tmp127 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp126;

}
void panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(panda$collections$Iterator* param0, panda$core$MutableMethod* param1) {

panda$core$Object* local0 = NULL;
// line 232
goto block1;
block1:;
ITable* $tmp128 = param0->$class->itable;
while ($tmp128->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp128 = $tmp128->next;
}
$fn130 $tmp129 = $tmp128->methods[0];
panda$core$Bit $tmp131 = $tmp129(param0);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block3; else goto block2;
block2:;
*(&local0) = ((panda$core$Object*) NULL);
ITable* $tmp133 = param0->$class->itable;
while ($tmp133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp133 = $tmp133->next;
}
$fn135 $tmp134 = $tmp133->methods[1];
panda$core$Object* $tmp136 = $tmp134(param0);
panda$core$Panda$ref$panda$core$Object$Q($tmp136);
panda$core$Object* $tmp137 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp137);
*(&local0) = $tmp136;
// line 233
panda$core$Object* $tmp138 = *(&local0);
panda$core$Int8** $tmp139 = &param1->pointer;
panda$core$Int8* $tmp140 = *$tmp139;
panda$core$Object** $tmp141 = &param1->target;
panda$core$Object* $tmp142 = *$tmp141;
bool $tmp143 = $tmp142 != ((panda$core$Object*) NULL);
if ($tmp143) goto block4; else goto block5;
block5:;
(($fn144) $tmp140)($tmp138);
goto block6;
block4:;
(($fn145) $tmp140)($tmp142, $tmp138);
goto block6;
block6:;
panda$core$Panda$unref$panda$core$Object$Q($tmp136);
// unreffing REF($10:panda.collections.Iterator.T)
panda$core$Object* $tmp146 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp146);
// unreffing v
*(&local0) = ((panda$core$Object*) NULL);
goto block1;
block3:;
return;

}
panda$core$Object* panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T(panda$collections$Iterator* param0, panda$core$MutableMethod* param1) {

panda$core$Object* local0 = NULL;
panda$core$Object* local1 = NULL;
ITable* $tmp147 = param0->$class->itable;
while ($tmp147->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[0];
panda$core$Bit $tmp150 = $tmp148(param0);
panda$core$Bit $tmp151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp153 = (panda$core$Int64) {264};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s154, $tmp153, &$s155);
abort(); // unreachable
block1:;
// line 265
ITable* $tmp156 = param0->$class->itable;
while ($tmp156->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[1];
panda$core$Object* $tmp159 = $tmp157(param0);
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Panda$ref$panda$core$Object$Q($tmp159);
panda$core$Object* $tmp160 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp160);
*(&local0) = $tmp159;
panda$core$Panda$unref$panda$core$Object$Q($tmp159);
// unreffing REF($12:panda.collections.Iterator.T)
// line 266
goto block3;
block3:;
ITable* $tmp161 = param0->$class->itable;
while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[0];
panda$core$Bit $tmp164 = $tmp162(param0);
panda$core$Bit $tmp165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp164);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block4; else goto block5;
block4:;
// line 267
panda$core$Object* $tmp167 = *(&local0);
ITable* $tmp168 = param0->$class->itable;
while ($tmp168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[1];
panda$core$Object* $tmp171 = $tmp169(param0);
panda$core$Int8** $tmp172 = &param1->pointer;
panda$core$Int8* $tmp173 = *$tmp172;
panda$core$Object** $tmp174 = &param1->target;
panda$core$Object* $tmp175 = *$tmp174;
bool $tmp176 = $tmp175 != ((panda$core$Object*) NULL);
if ($tmp176) goto block6; else goto block7;
block7:;
panda$core$Object* $tmp178 = (($fn177) $tmp173)($tmp167, $tmp171);
*(&local1) = $tmp178;
goto block8;
block6:;
panda$core$Object* $tmp180 = (($fn179) $tmp173)($tmp175, $tmp167, $tmp171);
*(&local1) = $tmp180;
goto block8;
block8:;
panda$core$Object* $tmp181 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q($tmp181);
panda$core$Object* $tmp182 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp182);
*(&local0) = $tmp181;
panda$core$Panda$unref$panda$core$Object$Q($tmp181);
// unreffing REF($51:panda.collections.Iterator.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp171);
// unreffing REF($35:panda.collections.Iterator.T)
goto block3;
block5:;
// line 269
panda$core$Object* $tmp183 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp183);
panda$core$Object* $tmp184 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp184);
// unreffing result
*(&local0) = ((panda$core$Object*) NULL);
return $tmp183;

}
panda$core$Object* panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T(panda$collections$Iterator* param0, panda$core$MutableMethod* param1, panda$core$Object* param2) {

panda$core$Object* local0 = NULL;
panda$core$Object* local1 = NULL;
// line 286
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(param2);
panda$core$Object* $tmp185 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp185);
*(&local0) = param2;
// line 287
goto block1;
block1:;
ITable* $tmp186 = param0->$class->itable;
while ($tmp186->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[0];
panda$core$Bit $tmp189 = $tmp187(param0);
panda$core$Bit $tmp190 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block2; else goto block3;
block2:;
// line 288
panda$core$Object* $tmp192 = *(&local0);
ITable* $tmp193 = param0->$class->itable;
while ($tmp193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[1];
panda$core$Object* $tmp196 = $tmp194(param0);
panda$core$Int8** $tmp197 = &param1->pointer;
panda$core$Int8* $tmp198 = *$tmp197;
panda$core$Object** $tmp199 = &param1->target;
panda$core$Object* $tmp200 = *$tmp199;
bool $tmp201 = $tmp200 != ((panda$core$Object*) NULL);
if ($tmp201) goto block4; else goto block5;
block5:;
panda$core$Object* $tmp203 = (($fn202) $tmp198)($tmp192, $tmp196);
*(&local1) = $tmp203;
goto block6;
block4:;
panda$core$Object* $tmp205 = (($fn204) $tmp198)($tmp200, $tmp192, $tmp196);
*(&local1) = $tmp205;
goto block6;
block6:;
panda$core$Object* $tmp206 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q($tmp206);
panda$core$Object* $tmp207 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp207);
*(&local0) = $tmp206;
panda$core$Panda$unref$panda$core$Object$Q($tmp206);
// unreffing REF($36:panda.collections.Iterator.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp196);
// unreffing REF($20:panda.collections.Iterator.T)
goto block1;
block3:;
// line 290
panda$core$Object* $tmp208 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp208);
panda$core$Object* $tmp209 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp209);
// unreffing result
*(&local0) = ((panda$core$Object*) NULL);
return $tmp208;

}
panda$collections$Iterator* panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT(panda$collections$Iterator* param0, panda$core$MutableMethod* param1) {

// line 295
panda$collections$Iterator$MapIterator* $tmp210 = (panda$collections$Iterator$MapIterator*) frostObjectAlloc(32, (panda$core$Class*) &panda$collections$Iterator$MapIterator$class);
panda$collections$Iterator$MapIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$MapIterator$T$GT$$LPpanda$collections$Iterator$MapIterator$T$RP$EQ$GT$LPpanda$collections$Iterator$MapIterator$U$RP($tmp210, param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp210)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
// unreffing REF($1:panda.collections.Iterator.MapIterator<panda.collections.Iterator.T, panda.collections.Iterator.map.U>)
return ((panda$collections$Iterator*) $tmp210);

}

