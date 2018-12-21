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
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"


static panda$core$String $s1;
org$pandalanguage$pandac$IR$Block$class_type org$pandalanguage$pandac$IR$Block$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IR$Block$convert$R$panda$core$String, org$pandalanguage$pandac$IR$Block$cleanup} };

typedef panda$core$Int64 (*$fn23)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 33, -8055294520570775034, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$IR$Block$init$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$IR$Block* param0, org$pandalanguage$pandac$IR$Block$ID param1) {

// line 251
panda$collections$Array* $tmp2 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2);
panda$collections$Array** $tmp3 = &param0->ids;
panda$collections$Array* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$collections$Array** $tmp5 = &param0->ids;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// line 253
panda$collections$Array* $tmp6 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp6);
panda$collections$Array** $tmp7 = &param0->statements;
panda$collections$Array* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$Array** $tmp9 = &param0->statements;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// line 256
org$pandalanguage$pandac$IR$Block$ID* $tmp10 = &param0->id;
*$tmp10 = param1;
return;

}
panda$core$String* org$pandalanguage$pandac$IR$Block$convert$R$panda$core$String(org$pandalanguage$pandac$IR$Block* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
// line 261
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
// line 262
panda$core$Int64 $tmp18 = panda$core$Int64$init$builtin_int64(0);
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
panda$core$Int64 $tmp31 = panda$core$Int64$init$builtin_int64(1);
panda$core$UInt64 $tmp32 = panda$core$Int64$convert$R$panda$core$UInt64($tmp31);
if ($tmp30) goto block4; else goto block5;
block4:;
panda$core$Bit $tmp33 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp27, $tmp28);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block2;
block5:;
panda$core$Bit $tmp35 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp27, $tmp28);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block2;
block1:;
// line 263
panda$core$MutableString* $tmp37 = *(&local0);
panda$collections$Array** $tmp38 = &param0->ids;
panda$collections$Array* $tmp39 = *$tmp38;
panda$core$Int64 $tmp40 = *(&local1);
panda$core$Object* $tmp41 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp39, $tmp40);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp42;
$tmp42 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp42->value = ((org$pandalanguage$pandac$IR$Statement$ID$wrapper*) $tmp41)->value;
panda$core$MutableString$append$panda$core$Object($tmp37, ((panda$core$Object*) $tmp42));
panda$core$Panda$unref$panda$core$Object$Q($tmp41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// line 264
panda$core$MutableString* $tmp43 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp43, &$s44);
// line 265
panda$core$MutableString* $tmp45 = *(&local0);
panda$collections$Array** $tmp46 = &param0->statements;
panda$collections$Array* $tmp47 = *$tmp46;
panda$core$Int64 $tmp48 = *(&local1);
panda$core$Object* $tmp49 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp47, $tmp48);
panda$core$MutableString$append$panda$core$Object($tmp45, ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Statement*) $tmp49)));
panda$core$Panda$unref$panda$core$Object$Q($tmp49);
// line 266
panda$core$MutableString* $tmp50 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp50, &$s51);
goto block3;
block3:;
panda$core$Int64 $tmp52 = *(&local1);
int64_t $tmp53 = $tmp28.value;
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53 - $tmp54;
panda$core$Int64 $tmp56 = panda$core$Int64$init$builtin_int64($tmp55);
panda$core$UInt64 $tmp57 = panda$core$Int64$convert$R$panda$core$UInt64($tmp56);
if ($tmp30) goto block7; else goto block8;
block7:;
panda$core$Bit $tmp58 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit($tmp57, $tmp32);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block6; else goto block2;
block8:;
panda$core$Bit $tmp60 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit($tmp57, $tmp32);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block6; else goto block2;
block6:;
int64_t $tmp62 = $tmp52.value;
int64_t $tmp63 = $tmp31.value;
int64_t $tmp64 = $tmp62 + $tmp63;
panda$core$Int64 $tmp65 = panda$core$Int64$init$builtin_int64($tmp64);
*(&local1) = $tmp65;
goto block1;
block2:;
// line 268
panda$core$MutableString* $tmp66 = *(&local0);
panda$core$String* $tmp67 = panda$core$MutableString$finish$R$panda$core$String($tmp66);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$core$MutableString* $tmp68 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp67;

}
void org$pandalanguage$pandac$IR$Block$cleanup(org$pandalanguage$pandac$IR$Block* param0) {

panda$collections$Array** $tmp69 = &param0->ids;
panda$collections$Array* $tmp70 = *$tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
panda$collections$Array** $tmp71 = &param0->statements;
panda$collections$Array* $tmp72 = *$tmp71;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
return;

}

