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
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/Type.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$class_type org$frostlang$frostc$IR$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$get_asString$R$frost$core$String, org$frostlang$frostc$IR$cleanup, org$frostlang$frostc$IR$add$org$frostlang$frostc$IR$Statement$R$org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$newBlock$frost$core$String$R$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$IR$setCurrentBlock$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn15)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn19)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn21)(org$frostlang$frostc$IR*);
typedef frost$core$Int64 (*$fn67)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn152)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn168)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn204)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn263)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52", 23, -468635677946240437, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x61\x72\x74", 5, 22597562659, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x61\x64\x64\x28\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 133, -674949365776773623, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x67\x65\x74\x5f\x63\x75\x72\x72\x65\x6e\x74\x42\x6c\x6f\x63\x6b\x46\x69\x6e\x69\x73\x68\x65\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, -4830254643440828020, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };

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

frost$core$Int64 local0;
frost$core$Int64 local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
org$frostlang$frostc$IR$Block* local3 = NULL;
// line 476
frost$core$Int64 $tmp61 = (frost$core$Int64) {0};
*(&local0) = $tmp61;
// line 477
frost$core$Int64 $tmp62 = (frost$core$Int64) {0};
frost$collections$Array** $tmp63 = &param0->blocks;
frost$collections$Array* $tmp64 = *$tmp63;
ITable* $tmp65 = ((frost$collections$CollectionView*) $tmp64)->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp65 = $tmp65->next;
}
$fn67 $tmp66 = $tmp65->methods[0];
frost$core$Int64 $tmp68 = $tmp66(((frost$collections$CollectionView*) $tmp64));
frost$core$Bit $tmp69 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp70 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp62, $tmp68, $tmp69);
frost$core$Int64 $tmp71 = $tmp70.min;
*(&local1) = $tmp71;
frost$core$Int64 $tmp72 = $tmp70.max;
frost$core$Bit $tmp73 = $tmp70.inclusive;
bool $tmp74 = $tmp73.value;
frost$core$Int64 $tmp75 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp76 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp75);
if ($tmp74) goto block4; else goto block5;
block4:;
int64_t $tmp77 = $tmp71.value;
int64_t $tmp78 = $tmp72.value;
bool $tmp79 = $tmp77 <= $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block1; else goto block2;
block5:;
int64_t $tmp82 = $tmp71.value;
int64_t $tmp83 = $tmp72.value;
bool $tmp84 = $tmp82 < $tmp83;
frost$core$Bit $tmp85 = (frost$core$Bit) {$tmp84};
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block1; else goto block2;
block1:;
// line 478
frost$collections$Array** $tmp87 = &param0->blocks;
frost$collections$Array* $tmp88 = *$tmp87;
frost$core$Int64 $tmp89 = *(&local1);
frost$core$Object* $tmp90 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp88, $tmp89);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp90)));
org$frostlang$frostc$IR$Block* $tmp91 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local2) = ((org$frostlang$frostc$IR$Block*) $tmp90);
frost$core$Frost$unref$frost$core$Object$Q($tmp90);
// unreffing REF($37:frost.collections.Array.T)
// line 479
org$frostlang$frostc$IR$Block* $tmp92 = *(&local2);
org$frostlang$frostc$IR$Block$ID* $tmp93 = &$tmp92->id;
org$frostlang$frostc$IR$Block$ID $tmp94 = *$tmp93;
frost$core$Bit $tmp95 = org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit($tmp94, param1);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block6; else goto block7;
block6:;
// line 480
org$frostlang$frostc$IR$Block* $tmp97 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
org$frostlang$frostc$IR$Block** $tmp98 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp99 = *$tmp98;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
org$frostlang$frostc$IR$Block** $tmp100 = &param0->currentBlock;
*$tmp100 = $tmp97;
// line 481
org$frostlang$frostc$IR$Block* $tmp101 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing b
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
return;
block7:;
// line 483
org$frostlang$frostc$IR$Block* $tmp102 = *(&local2);
org$frostlang$frostc$IR$Block** $tmp103 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp104 = *$tmp103;
bool $tmp105 = $tmp102 == $tmp104;
frost$core$Bit $tmp106 = frost$core$Bit$init$builtin_bit($tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block8; else goto block9;
block8:;
// line 484
frost$core$Int64 $tmp108 = *(&local1);
frost$core$Int64 $tmp109 = (frost$core$Int64) {1};
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110 + $tmp111;
frost$core$Int64 $tmp113 = (frost$core$Int64) {$tmp112};
*(&local0) = $tmp113;
goto block9;
block9:;
org$frostlang$frostc$IR$Block* $tmp114 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing b
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp115 = *(&local1);
int64_t $tmp116 = $tmp72.value;
int64_t $tmp117 = $tmp115.value;
int64_t $tmp118 = $tmp116 - $tmp117;
frost$core$Int64 $tmp119 = (frost$core$Int64) {$tmp118};
frost$core$UInt64 $tmp120 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp119);
if ($tmp74) goto block11; else goto block12;
block11:;
uint64_t $tmp121 = $tmp120.value;
uint64_t $tmp122 = $tmp76.value;
bool $tmp123 = $tmp121 >= $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block10; else goto block2;
block12:;
uint64_t $tmp126 = $tmp120.value;
uint64_t $tmp127 = $tmp76.value;
bool $tmp128 = $tmp126 > $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block10; else goto block2;
block10:;
int64_t $tmp131 = $tmp115.value;
int64_t $tmp132 = $tmp75.value;
int64_t $tmp133 = $tmp131 + $tmp132;
frost$core$Int64 $tmp134 = (frost$core$Int64) {$tmp133};
*(&local1) = $tmp134;
goto block1;
block2:;
// line 487
org$frostlang$frostc$IR$Block* $tmp135 = (org$frostlang$frostc$IR$Block*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$IR$Block$class);
org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID($tmp135, param1);
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
org$frostlang$frostc$IR$Block* $tmp136 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local3) = $tmp135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing REF($122:org.frostlang.frostc.IR.Block)
// line 488
frost$collections$Array** $tmp137 = &param0->blocks;
frost$collections$Array* $tmp138 = *$tmp137;
frost$core$Int64 $tmp139 = *(&local0);
org$frostlang$frostc$IR$Block* $tmp140 = *(&local3);
frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T($tmp138, $tmp139, ((frost$core$Object*) $tmp140));
// line 489
org$frostlang$frostc$IR$Block* $tmp141 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
org$frostlang$frostc$IR$Block** $tmp142 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp143 = *$tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
org$frostlang$frostc$IR$Block** $tmp144 = &param0->currentBlock;
*$tmp144 = $tmp141;
org$frostlang$frostc$IR$Block* $tmp145 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing newBlock
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit(org$frostlang$frostc$IR* param0) {

// line 493
org$frostlang$frostc$IR$Block** $tmp146 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp147 = *$tmp146;
frost$collections$Array** $tmp148 = &$tmp147->statements;
frost$collections$Array* $tmp149 = *$tmp148;
ITable* $tmp150 = ((frost$collections$CollectionView*) $tmp149)->$class->itable;
while ($tmp150->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp150 = $tmp150->next;
}
$fn152 $tmp151 = $tmp150->methods[0];
frost$core$Int64 $tmp153 = $tmp151(((frost$collections$CollectionView*) $tmp149));
frost$core$Int64 $tmp154 = (frost$core$Int64) {0};
frost$core$Bit $tmp155 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp153, $tmp154);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block1; else goto block2;
block1:;
// line 494
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit(false);
return $tmp157;
block2:;
// line 496
org$frostlang$frostc$IR$Block** $tmp158 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp159 = *$tmp158;
frost$collections$Array** $tmp160 = &$tmp159->statements;
frost$collections$Array* $tmp161 = *$tmp160;
org$frostlang$frostc$IR$Block** $tmp162 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp163 = *$tmp162;
frost$collections$Array** $tmp164 = &$tmp163->statements;
frost$collections$Array* $tmp165 = *$tmp164;
ITable* $tmp166 = ((frost$collections$CollectionView*) $tmp165)->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
frost$core$Int64 $tmp169 = $tmp167(((frost$collections$CollectionView*) $tmp165));
frost$core$Int64 $tmp170 = (frost$core$Int64) {1};
int64_t $tmp171 = $tmp169.value;
int64_t $tmp172 = $tmp170.value;
int64_t $tmp173 = $tmp171 - $tmp172;
frost$core$Int64 $tmp174 = (frost$core$Int64) {$tmp173};
frost$core$Object* $tmp175 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp161, $tmp174);
frost$core$Int64* $tmp176 = &((org$frostlang$frostc$IR$Statement*) $tmp175)->$rawValue;
frost$core$Int64 $tmp177 = *$tmp176;
frost$core$Int64 $tmp178 = (frost$core$Int64) {1};
frost$core$Bit $tmp179 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp177, $tmp178);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp181 = (frost$core$Int64) {5};
frost$core$Bit $tmp182 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp177, $tmp181);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block4; else goto block6;
block6:;
frost$core$Int64 $tmp184 = (frost$core$Int64) {24};
frost$core$Bit $tmp185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp177, $tmp184);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block4; else goto block7;
block7:;
frost$core$Int64 $tmp187 = (frost$core$Int64) {27};
frost$core$Bit $tmp188 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp177, $tmp187);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block4; else goto block8;
block4:;
// line 499
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit(true);
frost$core$Frost$unref$frost$core$Object$Q($tmp175);
// unreffing REF($33:frost.collections.Array.T)
return $tmp190;
block8:;
// line 502
frost$core$Bit $tmp191 = frost$core$Bit$init$builtin_bit(false);
frost$core$Frost$unref$frost$core$Object$Q($tmp175);
// unreffing REF($33:frost.collections.Array.T)
return $tmp191;
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp175);
// unreffing REF($33:frost.collections.Array.T)
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit(false);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp194 = (frost$core$Int64) {492};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s195, $tmp194, &$s196);
abort(); // unreachable
block9:;
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$IR$get_asString$R$frost$core$String(org$frostlang$frostc$IR* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
// line 509
frost$core$MutableString* $tmp197 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp197);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$MutableString* $tmp198 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local0) = $tmp197;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
// unreffing REF($1:frost.core.MutableString)
// line 510
frost$core$Int64 $tmp199 = (frost$core$Int64) {0};
frost$collections$Array** $tmp200 = &param0->locals;
frost$collections$Array* $tmp201 = *$tmp200;
ITable* $tmp202 = ((frost$collections$CollectionView*) $tmp201)->$class->itable;
while ($tmp202->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp202 = $tmp202->next;
}
$fn204 $tmp203 = $tmp202->methods[0];
frost$core$Int64 $tmp205 = $tmp203(((frost$collections$CollectionView*) $tmp201));
frost$core$Bit $tmp206 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp207 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp199, $tmp205, $tmp206);
frost$core$Int64 $tmp208 = $tmp207.min;
*(&local1) = $tmp208;
frost$core$Int64 $tmp209 = $tmp207.max;
frost$core$Bit $tmp210 = $tmp207.inclusive;
bool $tmp211 = $tmp210.value;
frost$core$Int64 $tmp212 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp213 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp212);
if ($tmp211) goto block4; else goto block5;
block4:;
int64_t $tmp214 = $tmp208.value;
int64_t $tmp215 = $tmp209.value;
bool $tmp216 = $tmp214 <= $tmp215;
frost$core$Bit $tmp217 = (frost$core$Bit) {$tmp216};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block1; else goto block2;
block5:;
int64_t $tmp219 = $tmp208.value;
int64_t $tmp220 = $tmp209.value;
bool $tmp221 = $tmp219 < $tmp220;
frost$core$Bit $tmp222 = (frost$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block1; else goto block2;
block1:;
// line 511
frost$core$MutableString* $tmp224 = *(&local0);
frost$core$Int64 $tmp225 = *(&local1);
frost$core$Int64$wrapper* $tmp226;
$tmp226 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp226->value = $tmp225;
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s228, ((frost$core$Object*) $tmp226));
frost$core$String* $tmp229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp227, &$s230);
frost$collections$Array** $tmp231 = &param0->locals;
frost$collections$Array* $tmp232 = *$tmp231;
frost$core$Int64 $tmp233 = *(&local1);
frost$core$Object* $tmp234 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp232, $tmp233);
frost$core$String* $tmp235 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp229, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp234)));
frost$core$String* $tmp236 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp235, &$s237);
frost$core$MutableString$append$frost$core$String($tmp224, $tmp236);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($55:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp234);
// unreffing REF($52:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing REF($45:frost.core.Object)
goto block3;
block3:;
frost$core$Int64 $tmp238 = *(&local1);
int64_t $tmp239 = $tmp209.value;
int64_t $tmp240 = $tmp238.value;
int64_t $tmp241 = $tmp239 - $tmp240;
frost$core$Int64 $tmp242 = (frost$core$Int64) {$tmp241};
frost$core$UInt64 $tmp243 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp242);
if ($tmp211) goto block7; else goto block8;
block7:;
uint64_t $tmp244 = $tmp243.value;
uint64_t $tmp245 = $tmp213.value;
bool $tmp246 = $tmp244 >= $tmp245;
frost$core$Bit $tmp247 = (frost$core$Bit) {$tmp246};
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block6; else goto block2;
block8:;
uint64_t $tmp249 = $tmp243.value;
uint64_t $tmp250 = $tmp213.value;
bool $tmp251 = $tmp249 > $tmp250;
frost$core$Bit $tmp252 = (frost$core$Bit) {$tmp251};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block6; else goto block2;
block6:;
int64_t $tmp254 = $tmp238.value;
int64_t $tmp255 = $tmp212.value;
int64_t $tmp256 = $tmp254 + $tmp255;
frost$core$Int64 $tmp257 = (frost$core$Int64) {$tmp256};
*(&local1) = $tmp257;
goto block1;
block2:;
// line 513
frost$core$MutableString* $tmp258 = *(&local0);
frost$collections$Array** $tmp259 = &param0->blocks;
frost$collections$Array* $tmp260 = *$tmp259;
ITable* $tmp261 = ((frost$collections$CollectionView*) $tmp260)->$class->itable;
while ($tmp261->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp261 = $tmp261->next;
}
$fn263 $tmp262 = $tmp261->methods[2];
frost$core$String* $tmp264 = $tmp262(((frost$collections$CollectionView*) $tmp260), &$s265);
frost$core$MutableString$append$frost$core$String($tmp258, $tmp264);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing REF($108:frost.core.String)
// line 514
frost$core$MutableString* $tmp266 = *(&local0);
frost$core$String* $tmp267 = frost$core$MutableString$finish$R$frost$core$String($tmp266);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing REF($115:frost.core.String)
frost$core$MutableString* $tmp268 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp267;

}
void org$frostlang$frostc$IR$cleanup(org$frostlang$frostc$IR* param0) {

// line 5
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp269 = &param0->locals;
frost$collections$Array* $tmp270 = *$tmp269;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$collections$Array** $tmp271 = &param0->blocks;
frost$collections$Array* $tmp272 = *$tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
org$frostlang$frostc$IR$Block** $tmp273 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp274 = *$tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
return;

}

