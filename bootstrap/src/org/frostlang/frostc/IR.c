#include "org/frostlang/frostc/IR.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Type.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$class_type org$frostlang$frostc$IR$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$get_asString$R$frost$core$String, org$frostlang$frostc$IR$cleanup, org$frostlang$frostc$IR$add$org$frostlang$frostc$IR$Statement$R$org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$newBlock$frost$core$String$R$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$IR$setCurrentBlock$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn15)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn19)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn21)(org$frostlang$frostc$IR*);
typedef frost$collections$Iterator* (*$fn65)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn69)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn74)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn104)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn120)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn156)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn215)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52", 23, -468635677946240437, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x72\x74", 5, 22597562659, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x61\x64\x64\x28\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 133, -674949365776773623, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x67\x65\x74\x5f\x63\x75\x72\x72\x65\x6e\x74\x42\x6c\x6f\x63\x6b\x46\x69\x6e\x69\x73\x68\x65\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, -4830254643440828020, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };

void org$frostlang$frostc$IR$init(org$frostlang$frostc$IR* param0) {

// line 436
frost$collections$Array* $tmp2 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$Array** $tmp3 = &param0->locals;
frost$collections$Array* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array** $tmp5 = &param0->locals;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 438
frost$collections$Array* $tmp6 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Array** $tmp7 = &param0->blocks;
frost$collections$Array* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$Array** $tmp9 = &param0->blocks;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// unreffing REF($16:frost.collections.Array<org.frostlang.frostc.IR.Block>)
// line 441
frost$core$Int64 $tmp10 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64* $tmp11 = &param0->currentStatementId;
*$tmp11 = $tmp10;
// line 444
frost$core$Int64 $tmp12 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64* $tmp13 = &param0->currentBlockID;
*$tmp13 = $tmp12;
// line 452
$fn15 $tmp14 = ($fn15) param0->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp16 = $tmp14(param0, &$s17);
$fn19 $tmp18 = ($fn19) param0->$class->vtable[4];
$tmp18(param0, $tmp16);
return;

}
org$frostlang$frostc$IR$Statement$ID org$frostlang$frostc$IR$add$org$frostlang$frostc$IR$Statement$R$org$frostlang$frostc$IR$Statement$ID(org$frostlang$frostc$IR* param0, org$frostlang$frostc$IR$Statement* param1) {

org$frostlang$frostc$IR$Statement$ID local0;
$fn21 $tmp20 = ($fn21) param0->$class->vtable[5];
frost$core$Bit $tmp22 = $tmp20(param0);
frost$core$Bit $tmp23 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp25 = (frost$core$Int64) {459};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block1:;
// line 460
frost$core$Int64* $tmp28 = &param0->currentStatementId;
frost$core$Int64 $tmp29 = *$tmp28;
frost$core$Int64 $tmp30 = (frost$core$Int64) {1};
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31 + $tmp32;
frost$core$Int64 $tmp34 = (frost$core$Int64) {$tmp33};
frost$core$Int64* $tmp35 = &param0->currentStatementId;
*$tmp35 = $tmp34;
// line 461
frost$core$Int64* $tmp36 = &param0->currentStatementId;
frost$core$Int64 $tmp37 = *$tmp36;
org$frostlang$frostc$IR$Statement$ID $tmp38 = org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64($tmp37);
*(&local0) = $tmp38;
// line 462
org$frostlang$frostc$IR$Block** $tmp39 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp40 = *$tmp39;
frost$collections$Array** $tmp41 = &$tmp40->ids;
frost$collections$Array* $tmp42 = *$tmp41;
org$frostlang$frostc$IR$Statement$ID $tmp43 = *(&local0);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp44;
$tmp44 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp44->value = $tmp43;
frost$collections$Array$add$frost$collections$Array$T($tmp42, ((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// unreffing REF($30:frost.collections.Array.T)
// line 463
org$frostlang$frostc$IR$Block** $tmp45 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp46 = *$tmp45;
frost$collections$Array** $tmp47 = &$tmp46->statements;
frost$collections$Array* $tmp48 = *$tmp47;
frost$collections$Array$add$frost$collections$Array$T($tmp48, ((frost$core$Object*) param1));
// line 464
org$frostlang$frostc$IR$Statement$ID $tmp49 = *(&local0);
return $tmp49;

}
org$frostlang$frostc$IR$Block$ID org$frostlang$frostc$IR$newBlock$frost$core$String$R$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR* param0, frost$core$String* param1) {

// line 471
frost$core$Int64* $tmp50 = &param0->currentBlockID;
frost$core$Int64 $tmp51 = *$tmp50;
frost$core$Int64 $tmp52 = (frost$core$Int64) {1};
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53 + $tmp54;
frost$core$Int64 $tmp56 = (frost$core$Int64) {$tmp55};
frost$core$Int64* $tmp57 = &param0->currentBlockID;
*$tmp57 = $tmp56;
// line 472
frost$core$Int64* $tmp58 = &param0->currentBlockID;
frost$core$Int64 $tmp59 = *$tmp58;
org$frostlang$frostc$IR$Block$ID $tmp60 = org$frostlang$frostc$IR$Block$ID$init$frost$core$Int64($tmp59);
return $tmp60;

}
void org$frostlang$frostc$IR$setCurrentBlock$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR* param0, org$frostlang$frostc$IR$Block$ID param1) {

org$frostlang$frostc$IR$Block* local0 = NULL;
org$frostlang$frostc$IR$Block* local1 = NULL;
// line 476
frost$collections$Array** $tmp61 = &param0->blocks;
frost$collections$Array* $tmp62 = *$tmp61;
ITable* $tmp63 = ((frost$collections$Iterable*) $tmp62)->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[0];
frost$collections$Iterator* $tmp66 = $tmp64(((frost$collections$Iterable*) $tmp62));
goto block1;
block1:;
ITable* $tmp67 = $tmp66->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[0];
frost$core$Bit $tmp70 = $tmp68($tmp66);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp72 = $tmp66->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[1];
frost$core$Object* $tmp75 = $tmp73($tmp66);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp75)));
org$frostlang$frostc$IR$Block* $tmp76 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local0) = ((org$frostlang$frostc$IR$Block*) $tmp75);
// line 477
org$frostlang$frostc$IR$Block* $tmp77 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp78 = &$tmp77->id;
org$frostlang$frostc$IR$Block$ID $tmp79 = *$tmp78;
frost$core$Bit $tmp80 = org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit($tmp79, param1);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block4; else goto block5;
block4:;
// line 478
org$frostlang$frostc$IR$Block* $tmp82 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
org$frostlang$frostc$IR$Block** $tmp83 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp84 = *$tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
org$frostlang$frostc$IR$Block** $tmp85 = &param0->currentBlock;
*$tmp85 = $tmp82;
// line 479
frost$core$Frost$unref$frost$core$Object$Q($tmp75);
// unreffing REF($17:frost.collections.Iterator.T)
org$frostlang$frostc$IR$Block* $tmp86 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// unreffing b
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing REF($6:frost.collections.Iterator<frost.collections.Iterable.T>)
return;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp75);
// unreffing REF($17:frost.collections.Iterator.T)
org$frostlang$frostc$IR$Block* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// unreffing b
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing REF($6:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 482
org$frostlang$frostc$IR$Block* $tmp88 = (org$frostlang$frostc$IR$Block*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$IR$Block$class);
org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID($tmp88, param1);
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
org$frostlang$frostc$IR$Block* $tmp89 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local1) = $tmp88;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// unreffing REF($68:org.frostlang.frostc.IR.Block)
// line 483
frost$collections$Array** $tmp90 = &param0->blocks;
frost$collections$Array* $tmp91 = *$tmp90;
org$frostlang$frostc$IR$Block* $tmp92 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp91, ((frost$core$Object*) $tmp92));
// line 484
org$frostlang$frostc$IR$Block* $tmp93 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
org$frostlang$frostc$IR$Block** $tmp94 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp95 = *$tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
org$frostlang$frostc$IR$Block** $tmp96 = &param0->currentBlock;
*$tmp96 = $tmp93;
org$frostlang$frostc$IR$Block* $tmp97 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing newBlock
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit(org$frostlang$frostc$IR* param0) {

// line 488
org$frostlang$frostc$IR$Block** $tmp98 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp99 = *$tmp98;
frost$collections$Array** $tmp100 = &$tmp99->statements;
frost$collections$Array* $tmp101 = *$tmp100;
ITable* $tmp102 = ((frost$collections$CollectionView*) $tmp101)->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
frost$core$Int64 $tmp105 = $tmp103(((frost$collections$CollectionView*) $tmp101));
frost$core$Int64 $tmp106 = (frost$core$Int64) {0};
frost$core$Bit $tmp107 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp105, $tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block2;
block1:;
// line 489
frost$core$Bit $tmp109 = frost$core$Bit$init$builtin_bit(false);
return $tmp109;
block2:;
// line 491
org$frostlang$frostc$IR$Block** $tmp110 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp111 = *$tmp110;
frost$collections$Array** $tmp112 = &$tmp111->statements;
frost$collections$Array* $tmp113 = *$tmp112;
org$frostlang$frostc$IR$Block** $tmp114 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp115 = *$tmp114;
frost$collections$Array** $tmp116 = &$tmp115->statements;
frost$collections$Array* $tmp117 = *$tmp116;
ITable* $tmp118 = ((frost$collections$CollectionView*) $tmp117)->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[0];
frost$core$Int64 $tmp121 = $tmp119(((frost$collections$CollectionView*) $tmp117));
frost$core$Int64 $tmp122 = (frost$core$Int64) {1};
int64_t $tmp123 = $tmp121.value;
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123 - $tmp124;
frost$core$Int64 $tmp126 = (frost$core$Int64) {$tmp125};
frost$core$Object* $tmp127 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp113, $tmp126);
frost$core$Int64* $tmp128 = &((org$frostlang$frostc$IR$Statement*) $tmp127)->$rawValue;
frost$core$Int64 $tmp129 = *$tmp128;
frost$core$Int64 $tmp130 = (frost$core$Int64) {1};
frost$core$Bit $tmp131 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp129, $tmp130);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp133 = (frost$core$Int64) {5};
frost$core$Bit $tmp134 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp129, $tmp133);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp136 = (frost$core$Int64) {24};
frost$core$Bit $tmp137 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp129, $tmp136);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block4; else goto block7;
block7:;
frost$core$Int64 $tmp139 = (frost$core$Int64) {27};
frost$core$Bit $tmp140 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp129, $tmp139);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block4; else goto block8;
block4:;
// line 494
frost$core$Bit $tmp142 = frost$core$Bit$init$builtin_bit(true);
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
// unreffing REF($33:frost.collections.Array.T)
return $tmp142;
block8:;
// line 497
frost$core$Bit $tmp143 = frost$core$Bit$init$builtin_bit(false);
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
// unreffing REF($33:frost.collections.Array.T)
return $tmp143;
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
// unreffing REF($33:frost.collections.Array.T)
frost$core$Bit $tmp144 = frost$core$Bit$init$builtin_bit(false);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp146 = (frost$core$Int64) {487};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s147, $tmp146, &$s148);
abort(); // unreachable
block9:;
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$IR$get_asString$R$frost$core$String(org$frostlang$frostc$IR* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
// line 504
frost$core$MutableString* $tmp149 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp149);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$MutableString* $tmp150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local0) = $tmp149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing REF($1:frost.core.MutableString)
// line 505
frost$core$Int64 $tmp151 = (frost$core$Int64) {0};
frost$collections$Array** $tmp152 = &param0->locals;
frost$collections$Array* $tmp153 = *$tmp152;
ITable* $tmp154 = ((frost$collections$CollectionView*) $tmp153)->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[0];
frost$core$Int64 $tmp157 = $tmp155(((frost$collections$CollectionView*) $tmp153));
frost$core$Bit $tmp158 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp159 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp151, $tmp157, $tmp158);
frost$core$Int64 $tmp160 = $tmp159.min;
*(&local1) = $tmp160;
frost$core$Int64 $tmp161 = $tmp159.max;
frost$core$Bit $tmp162 = $tmp159.inclusive;
bool $tmp163 = $tmp162.value;
frost$core$Int64 $tmp164 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp165 = frost$core$Int64$convert$R$frost$core$UInt64($tmp164);
if ($tmp163) goto block4; else goto block5;
block4:;
int64_t $tmp166 = $tmp160.value;
int64_t $tmp167 = $tmp161.value;
bool $tmp168 = $tmp166 <= $tmp167;
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block1; else goto block2;
block5:;
int64_t $tmp171 = $tmp160.value;
int64_t $tmp172 = $tmp161.value;
bool $tmp173 = $tmp171 < $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block1; else goto block2;
block1:;
// line 506
frost$core$MutableString* $tmp176 = *(&local0);
frost$core$Int64 $tmp177 = *(&local1);
frost$core$Int64$wrapper* $tmp178;
$tmp178 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp178->value = $tmp177;
frost$core$String* $tmp179 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s180, ((frost$core$Object*) $tmp178));
frost$core$String* $tmp181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp179, &$s182);
frost$collections$Array** $tmp183 = &param0->locals;
frost$collections$Array* $tmp184 = *$tmp183;
frost$core$Int64 $tmp185 = *(&local1);
frost$core$Object* $tmp186 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp184, $tmp185);
frost$core$String* $tmp187 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp181, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp186)));
frost$core$String* $tmp188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp187, &$s189);
frost$core$MutableString$append$frost$core$String($tmp176, $tmp188);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// unreffing REF($55:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp186);
// unreffing REF($52:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
// unreffing REF($45:frost.core.Object)
goto block3;
block3:;
frost$core$Int64 $tmp190 = *(&local1);
int64_t $tmp191 = $tmp161.value;
int64_t $tmp192 = $tmp190.value;
int64_t $tmp193 = $tmp191 - $tmp192;
frost$core$Int64 $tmp194 = (frost$core$Int64) {$tmp193};
frost$core$UInt64 $tmp195 = frost$core$Int64$convert$R$frost$core$UInt64($tmp194);
if ($tmp163) goto block7; else goto block8;
block7:;
uint64_t $tmp196 = $tmp195.value;
uint64_t $tmp197 = $tmp165.value;
bool $tmp198 = $tmp196 >= $tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block6; else goto block2;
block8:;
uint64_t $tmp201 = $tmp195.value;
uint64_t $tmp202 = $tmp165.value;
bool $tmp203 = $tmp201 > $tmp202;
frost$core$Bit $tmp204 = (frost$core$Bit) {$tmp203};
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block6; else goto block2;
block6:;
int64_t $tmp206 = $tmp190.value;
int64_t $tmp207 = $tmp164.value;
int64_t $tmp208 = $tmp206 + $tmp207;
frost$core$Int64 $tmp209 = (frost$core$Int64) {$tmp208};
*(&local1) = $tmp209;
goto block1;
block2:;
// line 508
frost$core$MutableString* $tmp210 = *(&local0);
frost$collections$Array** $tmp211 = &param0->blocks;
frost$collections$Array* $tmp212 = *$tmp211;
ITable* $tmp213 = ((frost$collections$CollectionView*) $tmp212)->$class->itable;
while ($tmp213->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp213 = $tmp213->next;
}
$fn215 $tmp214 = $tmp213->methods[2];
frost$core$String* $tmp216 = $tmp214(((frost$collections$CollectionView*) $tmp212), &$s217);
frost$core$MutableString$append$frost$core$String($tmp210, $tmp216);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// unreffing REF($108:frost.core.String)
// line 509
frost$core$MutableString* $tmp218 = *(&local0);
frost$core$String* $tmp219 = frost$core$MutableString$finish$R$frost$core$String($tmp218);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing REF($115:frost.core.String)
frost$core$MutableString* $tmp220 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp219;

}
void org$frostlang$frostc$IR$cleanup(org$frostlang$frostc$IR* param0) {

// line 5
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp221 = &param0->locals;
frost$collections$Array* $tmp222 = *$tmp221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$collections$Array** $tmp223 = &param0->blocks;
frost$collections$Array* $tmp224 = *$tmp223;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
org$frostlang$frostc$IR$Block** $tmp225 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp226 = *$tmp225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
return;

}

