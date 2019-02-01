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
org$frostlang$frostc$IR$class_type org$frostlang$frostc$IR$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$get_asString$R$frost$core$String, org$frostlang$frostc$IR$cleanup, org$frostlang$frostc$IR$add$org$frostlang$frostc$IR$Statement$R$org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$newBlock$frost$core$String$R$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$IR$setCurrentBlock$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn15)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn19)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn21)(org$frostlang$frostc$IR*);
typedef frost$core$Int64 (*$fn67)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn152)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn168)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn202)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn261)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52", 23, -468635677946240437, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x61\x72\x74", 5, 22597562659, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x61\x64\x64\x28\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 133, -674949365776773623, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };

void org$frostlang$frostc$IR$init(org$frostlang$frostc$IR* param0) {

// line 555
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$Array** $tmp3 = &param0->locals;
frost$collections$Array* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array** $tmp5 = &param0->locals;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 557
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp6 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$Array** $tmp7 = &param0->blocks;
frost$collections$Array* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$Array** $tmp9 = &param0->blocks;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// line 560
frost$core$Int64 $tmp10 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64* $tmp11 = &param0->currentStatementId;
*$tmp11 = $tmp10;
// line 563
frost$core$Int64 $tmp12 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64* $tmp13 = &param0->currentBlockID;
*$tmp13 = $tmp12;
// line 571
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
frost$core$Int64 $tmp25 = (frost$core$Int64) {578};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block1:;
// line 579
frost$core$Int64* $tmp28 = &param0->currentStatementId;
frost$core$Int64 $tmp29 = *$tmp28;
frost$core$Int64 $tmp30 = (frost$core$Int64) {1};
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31 + $tmp32;
frost$core$Int64 $tmp34 = (frost$core$Int64) {$tmp33};
frost$core$Int64* $tmp35 = &param0->currentStatementId;
*$tmp35 = $tmp34;
// line 580
frost$core$Int64* $tmp36 = &param0->currentStatementId;
frost$core$Int64 $tmp37 = *$tmp36;
org$frostlang$frostc$IR$Statement$ID $tmp38 = org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64($tmp37);
*(&local0) = $tmp38;
// line 581
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
// line 582
org$frostlang$frostc$IR$Block** $tmp45 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp46 = *$tmp45;
frost$collections$Array** $tmp47 = &$tmp46->statements;
frost$collections$Array* $tmp48 = *$tmp47;
frost$collections$Array$add$frost$collections$Array$T($tmp48, ((frost$core$Object*) param1));
// line 583
org$frostlang$frostc$IR$Statement$ID $tmp49 = *(&local0);
return $tmp49;

}
org$frostlang$frostc$IR$Block$ID org$frostlang$frostc$IR$newBlock$frost$core$String$R$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR* param0, frost$core$String* param1) {

// line 590
frost$core$Int64* $tmp50 = &param0->currentBlockID;
frost$core$Int64 $tmp51 = *$tmp50;
frost$core$Int64 $tmp52 = (frost$core$Int64) {1};
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53 + $tmp54;
frost$core$Int64 $tmp56 = (frost$core$Int64) {$tmp55};
frost$core$Int64* $tmp57 = &param0->currentBlockID;
*$tmp57 = $tmp56;
// line 591
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
// line 595
frost$core$Int64 $tmp61 = (frost$core$Int64) {0};
*(&local0) = $tmp61;
// line 596
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
// line 597
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
// line 598
org$frostlang$frostc$IR$Block* $tmp92 = *(&local2);
org$frostlang$frostc$IR$Block$ID* $tmp93 = &$tmp92->id;
org$frostlang$frostc$IR$Block$ID $tmp94 = *$tmp93;
frost$core$Bit $tmp95 = org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit($tmp94, param1);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block6; else goto block7;
block6:;
// line 599
org$frostlang$frostc$IR$Block* $tmp97 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
org$frostlang$frostc$IR$Block** $tmp98 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp99 = *$tmp98;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
org$frostlang$frostc$IR$Block** $tmp100 = &param0->currentBlock;
*$tmp100 = $tmp97;
// line 600
org$frostlang$frostc$IR$Block* $tmp101 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
return;
block7:;
// line 602
org$frostlang$frostc$IR$Block* $tmp102 = *(&local2);
org$frostlang$frostc$IR$Block** $tmp103 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp104 = *$tmp103;
bool $tmp105 = $tmp102 == $tmp104;
frost$core$Bit $tmp106 = frost$core$Bit$init$builtin_bit($tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block8; else goto block9;
block8:;
// line 603
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
// line 606
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Block));
org$frostlang$frostc$IR$Block* $tmp135 = (org$frostlang$frostc$IR$Block*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Block$class);
org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID($tmp135, param1);
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
org$frostlang$frostc$IR$Block* $tmp136 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local3) = $tmp135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// line 607
frost$collections$Array** $tmp137 = &param0->blocks;
frost$collections$Array* $tmp138 = *$tmp137;
frost$core$Int64 $tmp139 = *(&local0);
org$frostlang$frostc$IR$Block* $tmp140 = *(&local3);
frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T($tmp138, $tmp139, ((frost$core$Object*) $tmp140));
// line 608
org$frostlang$frostc$IR$Block* $tmp141 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
org$frostlang$frostc$IR$Block** $tmp142 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp143 = *$tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
org$frostlang$frostc$IR$Block** $tmp144 = &param0->currentBlock;
*$tmp144 = $tmp141;
org$frostlang$frostc$IR$Block* $tmp145 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit(org$frostlang$frostc$IR* param0) {

// line 612
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
// line 613
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit(false);
return $tmp157;
block2:;
// line 615
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
frost$core$Int64 $tmp184 = (frost$core$Int64) {9};
frost$core$Bit $tmp185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp177, $tmp184);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block4; else goto block7;
block7:;
frost$core$Int64 $tmp187 = (frost$core$Int64) {25};
frost$core$Bit $tmp188 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp177, $tmp187);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block4; else goto block8;
block8:;
frost$core$Int64 $tmp190 = (frost$core$Int64) {28};
frost$core$Bit $tmp191 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp177, $tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block4; else goto block9;
block4:;
// line 618
frost$core$Bit $tmp193 = frost$core$Bit$init$builtin_bit(true);
frost$core$Frost$unref$frost$core$Object$Q($tmp175);
return $tmp193;
block9:;
// line 621
frost$core$Bit $tmp194 = frost$core$Bit$init$builtin_bit(false);
frost$core$Frost$unref$frost$core$Object$Q($tmp175);
return $tmp194;
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp175);
goto block10;
block10:;

}
frost$core$String* org$frostlang$frostc$IR$get_asString$R$frost$core$String(org$frostlang$frostc$IR* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
// line 628
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp195 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp195);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$MutableString* $tmp196 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local0) = $tmp195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// line 629
frost$core$Int64 $tmp197 = (frost$core$Int64) {0};
frost$collections$Array** $tmp198 = &param0->locals;
frost$collections$Array* $tmp199 = *$tmp198;
ITable* $tmp200 = ((frost$collections$CollectionView*) $tmp199)->$class->itable;
while ($tmp200->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp200 = $tmp200->next;
}
$fn202 $tmp201 = $tmp200->methods[0];
frost$core$Int64 $tmp203 = $tmp201(((frost$collections$CollectionView*) $tmp199));
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp205 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp197, $tmp203, $tmp204);
frost$core$Int64 $tmp206 = $tmp205.min;
*(&local1) = $tmp206;
frost$core$Int64 $tmp207 = $tmp205.max;
frost$core$Bit $tmp208 = $tmp205.inclusive;
bool $tmp209 = $tmp208.value;
frost$core$Int64 $tmp210 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp211 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp210);
if ($tmp209) goto block4; else goto block5;
block4:;
int64_t $tmp212 = $tmp206.value;
int64_t $tmp213 = $tmp207.value;
bool $tmp214 = $tmp212 <= $tmp213;
frost$core$Bit $tmp215 = (frost$core$Bit) {$tmp214};
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block1; else goto block2;
block5:;
int64_t $tmp217 = $tmp206.value;
int64_t $tmp218 = $tmp207.value;
bool $tmp219 = $tmp217 < $tmp218;
frost$core$Bit $tmp220 = (frost$core$Bit) {$tmp219};
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block1; else goto block2;
block1:;
// line 630
frost$core$MutableString* $tmp222 = *(&local0);
frost$core$Int64 $tmp223 = *(&local1);
frost$core$Int64$wrapper* $tmp224;
$tmp224 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp224->value = $tmp223;
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s226, ((frost$core$Object*) $tmp224));
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp225, &$s228);
frost$collections$Array** $tmp229 = &param0->locals;
frost$collections$Array* $tmp230 = *$tmp229;
frost$core$Int64 $tmp231 = *(&local1);
frost$core$Object* $tmp232 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp230, $tmp231);
frost$core$String* $tmp233 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp227, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp232)));
frost$core$String* $tmp234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp233, &$s235);
frost$core$MutableString$append$frost$core$String($tmp222, $tmp234);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q($tmp232);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
goto block3;
block3:;
frost$core$Int64 $tmp236 = *(&local1);
int64_t $tmp237 = $tmp207.value;
int64_t $tmp238 = $tmp236.value;
int64_t $tmp239 = $tmp237 - $tmp238;
frost$core$Int64 $tmp240 = (frost$core$Int64) {$tmp239};
frost$core$UInt64 $tmp241 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp240);
if ($tmp209) goto block7; else goto block8;
block7:;
uint64_t $tmp242 = $tmp241.value;
uint64_t $tmp243 = $tmp211.value;
bool $tmp244 = $tmp242 >= $tmp243;
frost$core$Bit $tmp245 = (frost$core$Bit) {$tmp244};
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block6; else goto block2;
block8:;
uint64_t $tmp247 = $tmp241.value;
uint64_t $tmp248 = $tmp211.value;
bool $tmp249 = $tmp247 > $tmp248;
frost$core$Bit $tmp250 = (frost$core$Bit) {$tmp249};
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block6; else goto block2;
block6:;
int64_t $tmp252 = $tmp236.value;
int64_t $tmp253 = $tmp210.value;
int64_t $tmp254 = $tmp252 + $tmp253;
frost$core$Int64 $tmp255 = (frost$core$Int64) {$tmp254};
*(&local1) = $tmp255;
goto block1;
block2:;
// line 632
frost$core$MutableString* $tmp256 = *(&local0);
frost$collections$Array** $tmp257 = &param0->blocks;
frost$collections$Array* $tmp258 = *$tmp257;
ITable* $tmp259 = ((frost$collections$CollectionView*) $tmp258)->$class->itable;
while ($tmp259->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[2];
frost$core$String* $tmp262 = $tmp260(((frost$collections$CollectionView*) $tmp258), &$s263);
frost$core$MutableString$append$frost$core$String($tmp256, $tmp262);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
// line 633
frost$core$MutableString* $tmp264 = *(&local0);
frost$core$String* $tmp265 = frost$core$MutableString$finish$R$frost$core$String($tmp264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$MutableString* $tmp266 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp265;

}
void org$frostlang$frostc$IR$cleanup(org$frostlang$frostc$IR* param0) {

// line 5
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp267 = &param0->locals;
frost$collections$Array* $tmp268 = *$tmp267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$collections$Array** $tmp269 = &param0->blocks;
frost$collections$Array* $tmp270 = *$tmp269;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
org$frostlang$frostc$IR$Block** $tmp271 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp272 = *$tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
return;

}

