#include "org/pandalanguage/pandac/IR/Block.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/IR/Statement.h"


static panda$core$String $s1;
org$pandalanguage$pandac$IR$Block$class_type org$pandalanguage$pandac$IR$Block$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IR$Block$convert$R$panda$core$String, org$pandalanguage$pandac$IR$Block$cleanup} };

typedef panda$core$Int64 (*$fn23)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 33, -8055294520570775034, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$IR$Block$init$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$IR$Block* param0, org$pandalanguage$pandac$IR$Block$ID param1) {

// line 287
panda$collections$Array* $tmp2 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2);
panda$collections$Array** $tmp3 = &param0->ids;
panda$collections$Array* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$collections$Array** $tmp5 = &param0->ids;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// line 289
panda$collections$Array* $tmp6 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp6);
panda$collections$Array** $tmp7 = &param0->statements;
panda$collections$Array* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$Array** $tmp9 = &param0->statements;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// line 292
org$pandalanguage$pandac$IR$Block$ID* $tmp10 = &param0->id;
*$tmp10 = param1;
return;

}
panda$core$String* org$pandalanguage$pandac$IR$Block$convert$R$panda$core$String(org$pandalanguage$pandac$IR$Block* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
// line 297
panda$core$MutableString* $tmp11 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$IR$Block$ID* $tmp12 = &param0->id;
org$pandalanguage$pandac$IR$Block$ID $tmp13 = *$tmp12;
panda$core$String* $tmp14 = org$pandalanguage$pandac$IR$Block$ID$convert$R$panda$core$String($tmp13);
panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp14, &$s16);
panda$core$MutableString$init$panda$core$String($tmp11, $tmp15);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp17 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
*(&local0) = $tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// line 298
panda$core$Int64 $tmp18 = (panda$core$Int64) {0};
panda$collections$Array** $tmp19 = &param0->statements;
panda$collections$Array* $tmp20 = *$tmp19;
ITable* $tmp21 = ((panda$collections$CollectionView*) $tmp20)->$class->itable;
while ($tmp21->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[0];
panda$core$Int64 $tmp24 = $tmp22(((panda$collections$CollectionView*) $tmp20));
panda$core$Bit $tmp25 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp26 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp18, $tmp24, $tmp25);
panda$core$Int64 $tmp27 = $tmp26.min;
*(&local1) = $tmp27;
panda$core$Int64 $tmp28 = $tmp26.max;
panda$core$Bit $tmp29 = $tmp26.inclusive;
bool $tmp30 = $tmp29.value;
panda$core$Int64 $tmp31 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp32 = panda$core$Int64$convert$R$panda$core$UInt64($tmp31);
if ($tmp30) goto block4; else goto block5;
block4:;
int64_t $tmp33 = $tmp27.value;
int64_t $tmp34 = $tmp28.value;
bool $tmp35 = $tmp33 <= $tmp34;
panda$core$Bit $tmp36 = (panda$core$Bit) {$tmp35};
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block1; else goto block2;
block5:;
int64_t $tmp38 = $tmp27.value;
int64_t $tmp39 = $tmp28.value;
bool $tmp40 = $tmp38 < $tmp39;
panda$core$Bit $tmp41 = (panda$core$Bit) {$tmp40};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block1; else goto block2;
block1:;
// line 299
panda$core$MutableString* $tmp43 = *(&local0);
panda$collections$Array** $tmp44 = &param0->ids;
panda$collections$Array* $tmp45 = *$tmp44;
panda$core$Int64 $tmp46 = *(&local1);
panda$core$Object* $tmp47 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp45, $tmp46);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp48;
$tmp48 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp48->value = ((org$pandalanguage$pandac$IR$Statement$ID$wrapper*) $tmp47)->value;
panda$core$MutableString$append$panda$core$Object($tmp43, ((panda$core$Object*) $tmp48));
panda$core$Panda$unref$panda$core$Object$Q($tmp47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
// line 300
panda$core$MutableString* $tmp49 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp49, &$s50);
// line 301
panda$core$MutableString* $tmp51 = *(&local0);
panda$collections$Array** $tmp52 = &param0->statements;
panda$collections$Array* $tmp53 = *$tmp52;
panda$core$Int64 $tmp54 = *(&local1);
panda$core$Object* $tmp55 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp53, $tmp54);
panda$core$MutableString$append$panda$core$Object($tmp51, ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Statement*) $tmp55)));
panda$core$Panda$unref$panda$core$Object$Q($tmp55);
// line 302
panda$core$MutableString* $tmp56 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp56, &$s57);
goto block3;
block3:;
panda$core$Int64 $tmp58 = *(&local1);
int64_t $tmp59 = $tmp28.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 - $tmp60;
panda$core$Int64 $tmp62 = (panda$core$Int64) {$tmp61};
panda$core$UInt64 $tmp63 = panda$core$Int64$convert$R$panda$core$UInt64($tmp62);
if ($tmp30) goto block7; else goto block8;
block7:;
uint64_t $tmp64 = $tmp63.value;
uint64_t $tmp65 = $tmp32.value;
bool $tmp66 = $tmp64 >= $tmp65;
panda$core$Bit $tmp67 = (panda$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block6; else goto block2;
block8:;
uint64_t $tmp69 = $tmp63.value;
uint64_t $tmp70 = $tmp32.value;
bool $tmp71 = $tmp69 > $tmp70;
panda$core$Bit $tmp72 = (panda$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block6; else goto block2;
block6:;
int64_t $tmp74 = $tmp58.value;
int64_t $tmp75 = $tmp31.value;
int64_t $tmp76 = $tmp74 + $tmp75;
panda$core$Int64 $tmp77 = (panda$core$Int64) {$tmp76};
*(&local1) = $tmp77;
goto block1;
block2:;
// line 304
panda$core$MutableString* $tmp78 = *(&local0);
panda$core$String* $tmp79 = panda$core$MutableString$finish$R$panda$core$String($tmp78);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$MutableString* $tmp80 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp79;

}
void org$pandalanguage$pandac$IR$Block$cleanup(org$pandalanguage$pandac$IR$Block* param0) {

panda$collections$Array** $tmp81 = &param0->ids;
panda$collections$Array* $tmp82 = *$tmp81;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
panda$collections$Array** $tmp83 = &param0->statements;
panda$collections$Array* $tmp84 = *$tmp83;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
return;

}

