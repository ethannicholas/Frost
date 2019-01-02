#include "org/pandalanguage/pandac/IR.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IR/Block.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/Type.h"


static panda$core$String $s1;
org$pandalanguage$pandac$IR$class_type org$pandalanguage$pandac$IR$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IR$convert$R$panda$core$String, org$pandalanguage$pandac$IR$cleanup, org$pandalanguage$pandac$IR$add$org$pandalanguage$pandac$IR$Statement$R$org$pandalanguage$pandac$IR$Statement$ID, org$pandalanguage$pandac$IR$newBlock$panda$core$String$R$org$pandalanguage$pandac$IR$Block$ID, org$pandalanguage$pandac$IR$setCurrentBlock$org$pandalanguage$pandac$IR$Block$ID, org$pandalanguage$pandac$IR$get_currentBlockFinished$R$panda$core$Bit} };

typedef org$pandalanguage$pandac$IR$Block$ID (*$fn15)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef void (*$fn19)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$core$Bit (*$fn21)(org$pandalanguage$pandac$IR*);
typedef panda$collections$Iterator* (*$fn65)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn69)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn74)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn104)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn120)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn156)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn215)(panda$collections$CollectionView*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52", 27, -5571774053014018871, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x74\x61\x72\x74", 5, 22597562659, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x70\x61\x6e\x64\x61", 8, 18742694999470718, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x61\x64\x64\x28\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 145, -5489409831656505781, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x2e\x70\x61\x6e\x64\x61", 8, 18742694999470718, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x67\x65\x74\x5f\x63\x75\x72\x72\x65\x6e\x74\x42\x6c\x6f\x63\x6b\x46\x69\x6e\x69\x73\x68\x65\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 103, -1829766361293866200, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$IR$init(org$pandalanguage$pandac$IR* param0) {

// line 422
panda$collections$Array* $tmp2 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2);
panda$collections$Array** $tmp3 = &param0->locals;
panda$collections$Array* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$collections$Array** $tmp5 = &param0->locals;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// line 424
panda$collections$Array* $tmp6 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp6);
panda$collections$Array** $tmp7 = &param0->blocks;
panda$collections$Array* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$Array** $tmp9 = &param0->blocks;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// line 427
panda$core$Int64 $tmp10 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64* $tmp11 = &param0->currentStatementId;
*$tmp11 = $tmp10;
// line 430
panda$core$Int64 $tmp12 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64* $tmp13 = &param0->currentBlockID;
*$tmp13 = $tmp12;
// line 438
$fn15 $tmp14 = ($fn15) param0->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp16 = $tmp14(param0, &$s17);
$fn19 $tmp18 = ($fn19) param0->$class->vtable[4];
$tmp18(param0, $tmp16);
return;

}
org$pandalanguage$pandac$IR$Statement$ID org$pandalanguage$pandac$IR$add$org$pandalanguage$pandac$IR$Statement$R$org$pandalanguage$pandac$IR$Statement$ID(org$pandalanguage$pandac$IR* param0, org$pandalanguage$pandac$IR$Statement* param1) {

org$pandalanguage$pandac$IR$Statement$ID local0;
$fn21 $tmp20 = ($fn21) param0->$class->vtable[5];
panda$core$Bit $tmp22 = $tmp20(param0);
panda$core$Bit $tmp23 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp25 = (panda$core$Int64) {445};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block1:;
// line 446
panda$core$Int64* $tmp28 = &param0->currentStatementId;
panda$core$Int64 $tmp29 = *$tmp28;
panda$core$Int64 $tmp30 = (panda$core$Int64) {1};
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31 + $tmp32;
panda$core$Int64 $tmp34 = (panda$core$Int64) {$tmp33};
panda$core$Int64* $tmp35 = &param0->currentStatementId;
*$tmp35 = $tmp34;
// line 447
panda$core$Int64* $tmp36 = &param0->currentStatementId;
panda$core$Int64 $tmp37 = *$tmp36;
org$pandalanguage$pandac$IR$Statement$ID $tmp38 = org$pandalanguage$pandac$IR$Statement$ID$init$panda$core$Int64($tmp37);
*(&local0) = $tmp38;
// line 448
org$pandalanguage$pandac$IR$Block** $tmp39 = &param0->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp40 = *$tmp39;
panda$collections$Array** $tmp41 = &$tmp40->ids;
panda$collections$Array* $tmp42 = *$tmp41;
org$pandalanguage$pandac$IR$Statement$ID $tmp43 = *(&local0);
org$pandalanguage$pandac$IR$Statement$ID$wrapper* $tmp44;
$tmp44 = (org$pandalanguage$pandac$IR$Statement$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$ID$wrapperclass);
$tmp44->value = $tmp43;
panda$collections$Array$add$panda$collections$Array$T($tmp42, ((panda$core$Object*) $tmp44));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// line 449
org$pandalanguage$pandac$IR$Block** $tmp45 = &param0->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp46 = *$tmp45;
panda$collections$Array** $tmp47 = &$tmp46->statements;
panda$collections$Array* $tmp48 = *$tmp47;
panda$collections$Array$add$panda$collections$Array$T($tmp48, ((panda$core$Object*) param1));
// line 450
org$pandalanguage$pandac$IR$Statement$ID $tmp49 = *(&local0);
return $tmp49;

}
org$pandalanguage$pandac$IR$Block$ID org$pandalanguage$pandac$IR$newBlock$panda$core$String$R$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$IR* param0, panda$core$String* param1) {

// line 457
panda$core$Int64* $tmp50 = &param0->currentBlockID;
panda$core$Int64 $tmp51 = *$tmp50;
panda$core$Int64 $tmp52 = (panda$core$Int64) {1};
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53 + $tmp54;
panda$core$Int64 $tmp56 = (panda$core$Int64) {$tmp55};
panda$core$Int64* $tmp57 = &param0->currentBlockID;
*$tmp57 = $tmp56;
// line 458
panda$core$Int64* $tmp58 = &param0->currentBlockID;
panda$core$Int64 $tmp59 = *$tmp58;
org$pandalanguage$pandac$IR$Block$ID $tmp60 = org$pandalanguage$pandac$IR$Block$ID$init$panda$core$Int64($tmp59);
return $tmp60;

}
void org$pandalanguage$pandac$IR$setCurrentBlock$org$pandalanguage$pandac$IR$Block$ID(org$pandalanguage$pandac$IR* param0, org$pandalanguage$pandac$IR$Block$ID param1) {

org$pandalanguage$pandac$IR$Block* local0 = NULL;
org$pandalanguage$pandac$IR$Block* local1 = NULL;
// line 462
panda$collections$Array** $tmp61 = &param0->blocks;
panda$collections$Array* $tmp62 = *$tmp61;
ITable* $tmp63 = ((panda$collections$Iterable*) $tmp62)->$class->itable;
while ($tmp63->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[0];
panda$collections$Iterator* $tmp66 = $tmp64(((panda$collections$Iterable*) $tmp62));
goto block1;
block1:;
ITable* $tmp67 = $tmp66->$class->itable;
while ($tmp67->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[0];
panda$core$Bit $tmp70 = $tmp68($tmp66);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block3; else goto block2;
block2:;
*(&local0) = ((org$pandalanguage$pandac$IR$Block*) NULL);
ITable* $tmp72 = $tmp66->$class->itable;
while ($tmp72->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[1];
panda$core$Object* $tmp75 = $tmp73($tmp66);
panda$core$Panda$unref$panda$core$Object$Q($tmp75);
org$pandalanguage$pandac$IR$Block* $tmp76 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Block*) $tmp75)));
*(&local0) = ((org$pandalanguage$pandac$IR$Block*) $tmp75);
// line 463
org$pandalanguage$pandac$IR$Block* $tmp77 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID* $tmp78 = &$tmp77->id;
org$pandalanguage$pandac$IR$Block$ID $tmp79 = *$tmp78;
panda$core$Bit $tmp80 = org$pandalanguage$pandac$IR$Block$ID$$EQ$org$pandalanguage$pandac$IR$Block$ID$R$panda$core$Bit($tmp79, param1);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block4; else goto block5;
block4:;
// line 464
org$pandalanguage$pandac$IR$Block* $tmp82 = *(&local0);
org$pandalanguage$pandac$IR$Block** $tmp83 = &param0->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp84 = *$tmp83;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
org$pandalanguage$pandac$IR$Block** $tmp85 = &param0->currentBlock;
*$tmp85 = $tmp82;
// line 465
org$pandalanguage$pandac$IR$Block* $tmp86 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
// unreffing b
*(&local0) = ((org$pandalanguage$pandac$IR$Block*) NULL);
return;
block5:;
org$pandalanguage$pandac$IR$Block* $tmp87 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing b
*(&local0) = ((org$pandalanguage$pandac$IR$Block*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// line 468
org$pandalanguage$pandac$IR$Block* $tmp88 = (org$pandalanguage$pandac$IR$Block*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$class);
org$pandalanguage$pandac$IR$Block$init$org$pandalanguage$pandac$IR$Block$ID($tmp88, param1);
*(&local1) = ((org$pandalanguage$pandac$IR$Block*) NULL);
org$pandalanguage$pandac$IR$Block* $tmp89 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
*(&local1) = $tmp88;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
// line 469
panda$collections$Array** $tmp90 = &param0->blocks;
panda$collections$Array* $tmp91 = *$tmp90;
org$pandalanguage$pandac$IR$Block* $tmp92 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp91, ((panda$core$Object*) $tmp92));
// line 470
org$pandalanguage$pandac$IR$Block* $tmp93 = *(&local1);
org$pandalanguage$pandac$IR$Block** $tmp94 = &param0->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp95 = *$tmp94;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
org$pandalanguage$pandac$IR$Block** $tmp96 = &param0->currentBlock;
*$tmp96 = $tmp93;
org$pandalanguage$pandac$IR$Block* $tmp97 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing newBlock
*(&local1) = ((org$pandalanguage$pandac$IR$Block*) NULL);
return;

}
panda$core$Bit org$pandalanguage$pandac$IR$get_currentBlockFinished$R$panda$core$Bit(org$pandalanguage$pandac$IR* param0) {

// line 474
org$pandalanguage$pandac$IR$Block** $tmp98 = &param0->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp99 = *$tmp98;
panda$collections$Array** $tmp100 = &$tmp99->statements;
panda$collections$Array* $tmp101 = *$tmp100;
ITable* $tmp102 = ((panda$collections$CollectionView*) $tmp101)->$class->itable;
while ($tmp102->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
panda$core$Int64 $tmp105 = $tmp103(((panda$collections$CollectionView*) $tmp101));
panda$core$Int64 $tmp106 = (panda$core$Int64) {0};
panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp105, $tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block2;
block1:;
// line 475
panda$core$Bit $tmp109 = panda$core$Bit$init$builtin_bit(false);
return $tmp109;
block2:;
// line 477
org$pandalanguage$pandac$IR$Block** $tmp110 = &param0->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp111 = *$tmp110;
panda$collections$Array** $tmp112 = &$tmp111->statements;
panda$collections$Array* $tmp113 = *$tmp112;
org$pandalanguage$pandac$IR$Block** $tmp114 = &param0->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp115 = *$tmp114;
panda$collections$Array** $tmp116 = &$tmp115->statements;
panda$collections$Array* $tmp117 = *$tmp116;
ITable* $tmp118 = ((panda$collections$CollectionView*) $tmp117)->$class->itable;
while ($tmp118->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[0];
panda$core$Int64 $tmp121 = $tmp119(((panda$collections$CollectionView*) $tmp117));
panda$core$Int64 $tmp122 = (panda$core$Int64) {1};
int64_t $tmp123 = $tmp121.value;
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123 - $tmp124;
panda$core$Int64 $tmp126 = (panda$core$Int64) {$tmp125};
panda$core$Object* $tmp127 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp113, $tmp126);
panda$core$Int64* $tmp128 = &((org$pandalanguage$pandac$IR$Statement*) $tmp127)->$rawValue;
panda$core$Int64 $tmp129 = *$tmp128;
panda$core$Int64 $tmp130 = (panda$core$Int64) {1};
panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp129, $tmp130);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp133 = (panda$core$Int64) {5};
panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp129, $tmp133);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block4; else goto block6;
block6:;
panda$core$Int64 $tmp136 = (panda$core$Int64) {24};
panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp129, $tmp136);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block4; else goto block7;
block7:;
panda$core$Int64 $tmp139 = (panda$core$Int64) {27};
panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp129, $tmp139);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block4; else goto block8;
block4:;
// line 480
panda$core$Bit $tmp142 = panda$core$Bit$init$builtin_bit(true);
return $tmp142;
block8:;
// line 483
panda$core$Bit $tmp143 = panda$core$Bit$init$builtin_bit(false);
return $tmp143;
block3:;
panda$core$Panda$unref$panda$core$Object$Q($tmp127);
panda$core$Bit $tmp144 = panda$core$Bit$init$builtin_bit(false);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp146 = (panda$core$Int64) {473};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s147, $tmp146, &$s148);
abort(); // unreachable
block9:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$IR$convert$R$panda$core$String(org$pandalanguage$pandac$IR* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$Int64 local1;
// line 490
panda$core$MutableString* $tmp149 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp149);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp150 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
*(&local0) = $tmp149;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
// line 491
panda$core$Int64 $tmp151 = (panda$core$Int64) {0};
panda$collections$Array** $tmp152 = &param0->locals;
panda$collections$Array* $tmp153 = *$tmp152;
ITable* $tmp154 = ((panda$collections$CollectionView*) $tmp153)->$class->itable;
while ($tmp154->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[0];
panda$core$Int64 $tmp157 = $tmp155(((panda$collections$CollectionView*) $tmp153));
panda$core$Bit $tmp158 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp159 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp151, $tmp157, $tmp158);
panda$core$Int64 $tmp160 = $tmp159.min;
*(&local1) = $tmp160;
panda$core$Int64 $tmp161 = $tmp159.max;
panda$core$Bit $tmp162 = $tmp159.inclusive;
bool $tmp163 = $tmp162.value;
panda$core$Int64 $tmp164 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp165 = panda$core$Int64$convert$R$panda$core$UInt64($tmp164);
if ($tmp163) goto block4; else goto block5;
block4:;
int64_t $tmp166 = $tmp160.value;
int64_t $tmp167 = $tmp161.value;
bool $tmp168 = $tmp166 <= $tmp167;
panda$core$Bit $tmp169 = (panda$core$Bit) {$tmp168};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block1; else goto block2;
block5:;
int64_t $tmp171 = $tmp160.value;
int64_t $tmp172 = $tmp161.value;
bool $tmp173 = $tmp171 < $tmp172;
panda$core$Bit $tmp174 = (panda$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block1; else goto block2;
block1:;
// line 492
panda$core$MutableString* $tmp176 = *(&local0);
panda$core$Int64 $tmp177 = *(&local1);
panda$core$Int64$wrapper* $tmp178;
$tmp178 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp178->value = $tmp177;
panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s180, ((panda$core$Object*) $tmp178));
panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp179, &$s182);
panda$collections$Array** $tmp183 = &param0->locals;
panda$collections$Array* $tmp184 = *$tmp183;
panda$core$Int64 $tmp185 = *(&local1);
panda$core$Object* $tmp186 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp184, $tmp185);
panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp181, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp186)));
panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s189);
panda$core$MutableString$append$panda$core$String($tmp176, $tmp188);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
panda$core$Panda$unref$panda$core$Object$Q($tmp186);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
goto block3;
block3:;
panda$core$Int64 $tmp190 = *(&local1);
int64_t $tmp191 = $tmp161.value;
int64_t $tmp192 = $tmp190.value;
int64_t $tmp193 = $tmp191 - $tmp192;
panda$core$Int64 $tmp194 = (panda$core$Int64) {$tmp193};
panda$core$UInt64 $tmp195 = panda$core$Int64$convert$R$panda$core$UInt64($tmp194);
if ($tmp163) goto block7; else goto block8;
block7:;
uint64_t $tmp196 = $tmp195.value;
uint64_t $tmp197 = $tmp165.value;
bool $tmp198 = $tmp196 >= $tmp197;
panda$core$Bit $tmp199 = (panda$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block6; else goto block2;
block8:;
uint64_t $tmp201 = $tmp195.value;
uint64_t $tmp202 = $tmp165.value;
bool $tmp203 = $tmp201 > $tmp202;
panda$core$Bit $tmp204 = (panda$core$Bit) {$tmp203};
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block6; else goto block2;
block6:;
int64_t $tmp206 = $tmp190.value;
int64_t $tmp207 = $tmp164.value;
int64_t $tmp208 = $tmp206 + $tmp207;
panda$core$Int64 $tmp209 = (panda$core$Int64) {$tmp208};
*(&local1) = $tmp209;
goto block1;
block2:;
// line 494
panda$core$MutableString* $tmp210 = *(&local0);
panda$collections$Array** $tmp211 = &param0->blocks;
panda$collections$Array* $tmp212 = *$tmp211;
ITable* $tmp213 = ((panda$collections$CollectionView*) $tmp212)->$class->itable;
while ($tmp213->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp213 = $tmp213->next;
}
$fn215 $tmp214 = $tmp213->methods[2];
panda$core$String* $tmp216 = $tmp214(((panda$collections$CollectionView*) $tmp212), &$s217);
panda$core$MutableString$append$panda$core$String($tmp210, $tmp216);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
// line 495
panda$core$MutableString* $tmp218 = *(&local0);
panda$core$String* $tmp219 = panda$core$MutableString$finish$R$panda$core$String($tmp218);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
panda$core$MutableString* $tmp220 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp219;

}
void org$pandalanguage$pandac$IR$cleanup(org$pandalanguage$pandac$IR* param0) {

panda$collections$Array** $tmp221 = &param0->locals;
panda$collections$Array* $tmp222 = *$tmp221;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
panda$collections$Array** $tmp223 = &param0->blocks;
panda$collections$Array* $tmp224 = *$tmp223;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
org$pandalanguage$pandac$IR$Block** $tmp225 = &param0->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp226 = *$tmp225;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
return;

}

