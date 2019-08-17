#include "org/frostlang/frostc/IR.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/LinkedList.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/Type.h"


static frost$core$String $s1;
org$frostlang$frostc$IR$class_type org$frostlang$frostc$IR$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$IR$get_asString$R$frost$core$String, org$frostlang$frostc$IR$cleanup, org$frostlang$frostc$IR$add$org$frostlang$frostc$IR$Statement$R$org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$newBlock$frost$core$String$R$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$IR$setCurrentBlock$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn15)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn19)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn21)(org$frostlang$frostc$IR*);
typedef void (*$fn50)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef void (*$fn56)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef frost$core$Int (*$fn77)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn107)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn187)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn201)(org$frostlang$frostc$LinkedList*);
typedef frost$core$Int (*$fn244)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn267)(frost$core$Object*);
typedef frost$core$Int (*$fn284)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn300)(frost$core$Object*);
typedef frost$core$String* (*$fn329)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52", 23, 1296235477144720067, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x61\x72\x74", 5, -1270692749394500321, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x61\x64\x64\x28\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 133, -5934919833545445361, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 2638862777294684392, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$frostc$IR$init(org$frostlang$frostc$IR* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:559
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:561
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:564
frost$core$Int $tmp10 = (frost$core$Int) {18446744073709551615u};
frost$core$Int* $tmp11 = &param0->currentStatementId;
*$tmp11 = $tmp10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:567
frost$core$Int $tmp12 = (frost$core$Int) {18446744073709551615u};
frost$core$Int* $tmp13 = &param0->currentBlockID;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:575
$fn15 $tmp14 = ($fn15) param0->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp16 = $tmp14(param0, &$s17);
$fn19 $tmp18 = ($fn19) param0->$class->vtable[4];
$tmp18(param0, $tmp16);
return;

}
org$frostlang$frostc$IR$Statement$ID org$frostlang$frostc$IR$add$org$frostlang$frostc$IR$Statement$R$org$frostlang$frostc$IR$Statement$ID(org$frostlang$frostc$IR* param0, org$frostlang$frostc$IR$Statement* param1) {

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$IR$Statement$ID local1;
org$frostlang$frostc$IR$Statement$ID local2;
$fn21 $tmp20 = ($fn21) param0->$class->vtable[5];
frost$core$Bit $tmp22 = $tmp20(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from IR.frost:581:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp23 = $tmp22.value;
bool $tmp24 = !$tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block1; else goto block2;
block2:;
frost$core$Int $tmp27 = (frost$core$Int) {582u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, $tmp27, &$s29);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:583
frost$core$Int* $tmp30 = &param0->currentStatementId;
frost$core$Int $tmp31 = *$tmp30;
frost$core$Int $tmp32 = (frost$core$Int) {1u};
int64_t $tmp33 = $tmp31.value;
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33 + $tmp34;
frost$core$Int $tmp36 = (frost$core$Int) {$tmp35};
frost$core$Int* $tmp37 = &param0->currentStatementId;
*$tmp37 = $tmp36;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:584
frost$core$Int* $tmp38 = &param0->currentStatementId;
frost$core$Int $tmp39 = *$tmp38;
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from IR.frost:584:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp40 = &(&local1)->value;
*$tmp40 = $tmp39;
org$frostlang$frostc$IR$Statement$ID $tmp41 = *(&local1);
*(&local0) = $tmp41;
org$frostlang$frostc$IR$Statement$ID $tmp42 = *(&local0);
*(&local2) = $tmp42;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:585
org$frostlang$frostc$IR$Block** $tmp43 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp44 = *$tmp43;
org$frostlang$frostc$LinkedList** $tmp45 = &$tmp44->ids;
org$frostlang$frostc$LinkedList* $tmp46 = *$tmp45;
org$frostlang$frostc$IR$Statement$ID $tmp47 = *(&local2);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp48;
$tmp48 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp48->value = $tmp47;
$fn50 $tmp49 = ($fn50) $tmp46->$class->vtable[4];
$tmp49($tmp46, ((frost$core$Object*) $tmp48));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:586
org$frostlang$frostc$IR$Block** $tmp51 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp52 = *$tmp51;
org$frostlang$frostc$LinkedList** $tmp53 = &$tmp52->statements;
org$frostlang$frostc$LinkedList* $tmp54 = *$tmp53;
$fn56 $tmp55 = ($fn56) $tmp54->$class->vtable[4];
$tmp55($tmp54, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:587
org$frostlang$frostc$IR$Statement$ID $tmp57 = *(&local2);
return $tmp57;

}
org$frostlang$frostc$IR$Block$ID org$frostlang$frostc$IR$newBlock$frost$core$String$R$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR* param0, frost$core$String* param1) {

org$frostlang$frostc$IR$Block$ID local0;
org$frostlang$frostc$IR$Block$ID local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:594
frost$core$Int* $tmp58 = &param0->currentBlockID;
frost$core$Int $tmp59 = *$tmp58;
frost$core$Int $tmp60 = (frost$core$Int) {1u};
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61 + $tmp62;
frost$core$Int $tmp64 = (frost$core$Int) {$tmp63};
frost$core$Int* $tmp65 = &param0->currentBlockID;
*$tmp65 = $tmp64;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:595
frost$core$Int* $tmp66 = &param0->currentBlockID;
frost$core$Int $tmp67 = *$tmp66;
// begin inline call to org.frostlang.frostc.IR.Block.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Block.ID from IR.frost:595:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:377
frost$core$Int* $tmp68 = &(&local1)->value;
*$tmp68 = $tmp67;
org$frostlang$frostc$IR$Block$ID $tmp69 = *(&local1);
*(&local0) = $tmp69;
org$frostlang$frostc$IR$Block$ID $tmp70 = *(&local0);
return $tmp70;

}
void org$frostlang$frostc$IR$setCurrentBlock$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR* param0, org$frostlang$frostc$IR$Block$ID param1) {

frost$core$Int local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
org$frostlang$frostc$IR$Block* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:599
frost$core$Int $tmp71 = (frost$core$Int) {0u};
*(&local0) = $tmp71;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:600
frost$core$Int $tmp72 = (frost$core$Int) {0u};
frost$collections$Array** $tmp73 = &param0->blocks;
frost$collections$Array* $tmp74 = *$tmp73;
ITable* $tmp75 = ((frost$collections$CollectionView*) $tmp74)->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
frost$core$Int $tmp78 = $tmp76(((frost$collections$CollectionView*) $tmp74));
frost$core$Bit $tmp79 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp80 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp72, $tmp78, $tmp79);
frost$core$Int $tmp81 = $tmp80.min;
*(&local1) = $tmp81;
frost$core$Int $tmp82 = $tmp80.max;
frost$core$Bit $tmp83 = $tmp80.inclusive;
bool $tmp84 = $tmp83.value;
frost$core$Int $tmp85 = (frost$core$Int) {1u};
if ($tmp84) goto block4; else goto block5;
block4:;
int64_t $tmp86 = $tmp81.value;
int64_t $tmp87 = $tmp82.value;
bool $tmp88 = $tmp86 <= $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block1; else goto block2;
block5:;
int64_t $tmp91 = $tmp81.value;
int64_t $tmp92 = $tmp82.value;
bool $tmp93 = $tmp91 < $tmp92;
frost$core$Bit $tmp94 = (frost$core$Bit) {$tmp93};
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:601
frost$collections$Array** $tmp96 = &param0->blocks;
frost$collections$Array* $tmp97 = *$tmp96;
frost$core$Int $tmp98 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IR.frost:601:28
frost$core$Int $tmp99 = (frost$core$Int) {0u};
int64_t $tmp100 = $tmp98.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 >= $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block9; else goto block8;
block9:;
ITable* $tmp105 = ((frost$collections$CollectionView*) $tmp97)->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
frost$core$Int $tmp108 = $tmp106(((frost$collections$CollectionView*) $tmp97));
int64_t $tmp109 = $tmp98.value;
int64_t $tmp110 = $tmp108.value;
bool $tmp111 = $tmp109 < $tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block7; else goto block8;
block8:;
frost$core$Int $tmp114 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s115, $tmp114, &$s116);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp117 = &$tmp97->data;
frost$core$Object** $tmp118 = *$tmp117;
frost$core$Int64 $tmp119 = frost$core$Int64$init$frost$core$Int($tmp98);
int64_t $tmp120 = $tmp119.value;
frost$core$Object* $tmp121 = $tmp118[$tmp120];
frost$core$Frost$ref$frost$core$Object$Q($tmp121);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp121)));
org$frostlang$frostc$IR$Block* $tmp122 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local2) = ((org$frostlang$frostc$IR$Block*) $tmp121);
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:602
org$frostlang$frostc$IR$Block* $tmp123 = *(&local2);
org$frostlang$frostc$IR$Block$ID* $tmp124 = &$tmp123->id;
org$frostlang$frostc$IR$Block$ID $tmp125 = *$tmp124;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from IR.frost:602:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp126 = $tmp125.value;
frost$core$Int $tmp127 = param1.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127.value;
bool $tmp130 = $tmp128 == $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:603
org$frostlang$frostc$IR$Block* $tmp133 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
org$frostlang$frostc$IR$Block** $tmp134 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp135 = *$tmp134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
org$frostlang$frostc$IR$Block** $tmp136 = &param0->currentBlock;
*$tmp136 = $tmp133;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:604
org$frostlang$frostc$IR$Block* $tmp137 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
return;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:606
org$frostlang$frostc$IR$Block* $tmp138 = *(&local2);
org$frostlang$frostc$IR$Block** $tmp139 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp140 = *$tmp139;
bool $tmp141 = $tmp138 == $tmp140;
frost$core$Bit $tmp142 = (frost$core$Bit) {$tmp141};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:607
frost$core$Int $tmp144 = *(&local1);
frost$core$Int $tmp145 = (frost$core$Int) {1u};
int64_t $tmp146 = $tmp144.value;
int64_t $tmp147 = $tmp145.value;
int64_t $tmp148 = $tmp146 + $tmp147;
frost$core$Int $tmp149 = (frost$core$Int) {$tmp148};
*(&local0) = $tmp149;
goto block15;
block15:;
org$frostlang$frostc$IR$Block* $tmp150 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Int $tmp151 = *(&local1);
int64_t $tmp152 = $tmp82.value;
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152 - $tmp153;
frost$core$Int $tmp155 = (frost$core$Int) {$tmp154};
if ($tmp84) goto block17; else goto block18;
block17:;
int64_t $tmp156 = $tmp155.value;
int64_t $tmp157 = $tmp85.value;
bool $tmp158 = $tmp156 >= $tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block16; else goto block2;
block18:;
int64_t $tmp161 = $tmp155.value;
int64_t $tmp162 = $tmp85.value;
bool $tmp163 = $tmp161 > $tmp162;
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block16; else goto block2;
block16:;
int64_t $tmp166 = $tmp151.value;
int64_t $tmp167 = $tmp85.value;
int64_t $tmp168 = $tmp166 + $tmp167;
frost$core$Int $tmp169 = (frost$core$Int) {$tmp168};
*(&local1) = $tmp169;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:610
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$IR$Block));
org$frostlang$frostc$IR$Block* $tmp170 = (org$frostlang$frostc$IR$Block*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$IR$Block$class);
org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID($tmp170, param1);
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
org$frostlang$frostc$IR$Block* $tmp171 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local3) = $tmp170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:611
frost$collections$Array** $tmp172 = &param0->blocks;
frost$collections$Array* $tmp173 = *$tmp172;
frost$core$Int $tmp174 = *(&local0);
org$frostlang$frostc$IR$Block* $tmp175 = *(&local3);
frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T($tmp173, $tmp174, ((frost$core$Object*) $tmp175));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:612
org$frostlang$frostc$IR$Block* $tmp176 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
org$frostlang$frostc$IR$Block** $tmp177 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp178 = *$tmp177;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
org$frostlang$frostc$IR$Block** $tmp179 = &param0->currentBlock;
*$tmp179 = $tmp176;
org$frostlang$frostc$IR$Block* $tmp180 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit(org$frostlang$frostc$IR* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:616
org$frostlang$frostc$IR$Block** $tmp181 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp182 = *$tmp181;
org$frostlang$frostc$LinkedList** $tmp183 = &$tmp182->statements;
org$frostlang$frostc$LinkedList* $tmp184 = *$tmp183;
ITable* $tmp185 = ((frost$collections$CollectionView*) $tmp184)->$class->itable;
while ($tmp185->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp185 = $tmp185->next;
}
$fn187 $tmp186 = $tmp185->methods[0];
frost$core$Int $tmp188 = $tmp186(((frost$collections$CollectionView*) $tmp184));
frost$core$Int $tmp189 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:616:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp190 = $tmp188.value;
int64_t $tmp191 = $tmp189.value;
bool $tmp192 = $tmp190 == $tmp191;
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:617
frost$core$Bit $tmp195 = (frost$core$Bit) {false};
return $tmp195;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:619
org$frostlang$frostc$IR$Block** $tmp196 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp197 = *$tmp196;
org$frostlang$frostc$LinkedList** $tmp198 = &$tmp197->statements;
org$frostlang$frostc$LinkedList* $tmp199 = *$tmp198;
$fn201 $tmp200 = ($fn201) $tmp199->$class->vtable[6];
frost$core$Object* $tmp202 = $tmp200($tmp199);
frost$core$Int* $tmp203 = &((org$frostlang$frostc$IR$Statement*) $tmp202)->$rawValue;
frost$core$Int $tmp204 = *$tmp203;
frost$core$Int $tmp205 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:620:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp206 = $tmp204.value;
int64_t $tmp207 = $tmp205.value;
bool $tmp208 = $tmp206 == $tmp207;
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block5; else goto block6;
block6:;
frost$core$Int $tmp211 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:620:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp212 = $tmp204.value;
int64_t $tmp213 = $tmp211.value;
bool $tmp214 = $tmp212 == $tmp213;
frost$core$Bit $tmp215 = (frost$core$Bit) {$tmp214};
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block5; else goto block8;
block8:;
frost$core$Int $tmp217 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:620:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp218 = $tmp204.value;
int64_t $tmp219 = $tmp217.value;
bool $tmp220 = $tmp218 == $tmp219;
frost$core$Bit $tmp221 = (frost$core$Bit) {$tmp220};
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block5; else goto block10;
block10:;
frost$core$Int $tmp223 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:620:90
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp224 = $tmp204.value;
int64_t $tmp225 = $tmp223.value;
bool $tmp226 = $tmp224 == $tmp225;
frost$core$Bit $tmp227 = (frost$core$Bit) {$tmp226};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block5; else goto block12;
block12:;
frost$core$Int $tmp229 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:621:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp230 = $tmp204.value;
int64_t $tmp231 = $tmp229.value;
bool $tmp232 = $tmp230 == $tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block5; else goto block14;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:622
frost$core$Bit $tmp235 = (frost$core$Bit) {true};
frost$core$Frost$unref$frost$core$Object$Q($tmp202);
return $tmp235;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:625
frost$core$Bit $tmp236 = (frost$core$Bit) {false};
frost$core$Frost$unref$frost$core$Object$Q($tmp202);
return $tmp236;
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp202);
goto block16;
block16:;

}
frost$core$String* org$frostlang$frostc$IR$get_asString$R$frost$core$String(org$frostlang$frostc$IR* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:632
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp237 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp237);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$MutableString* $tmp238 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local0) = $tmp237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:633
frost$core$Int $tmp239 = (frost$core$Int) {0u};
frost$collections$Array** $tmp240 = &param0->locals;
frost$collections$Array* $tmp241 = *$tmp240;
ITable* $tmp242 = ((frost$collections$CollectionView*) $tmp241)->$class->itable;
while ($tmp242->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
frost$core$Int $tmp245 = $tmp243(((frost$collections$CollectionView*) $tmp241));
frost$core$Bit $tmp246 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp247 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp239, $tmp245, $tmp246);
frost$core$Int $tmp248 = $tmp247.min;
*(&local1) = $tmp248;
frost$core$Int $tmp249 = $tmp247.max;
frost$core$Bit $tmp250 = $tmp247.inclusive;
bool $tmp251 = $tmp250.value;
frost$core$Int $tmp252 = (frost$core$Int) {1u};
if ($tmp251) goto block4; else goto block5;
block4:;
int64_t $tmp253 = $tmp248.value;
int64_t $tmp254 = $tmp249.value;
bool $tmp255 = $tmp253 <= $tmp254;
frost$core$Bit $tmp256 = (frost$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block1; else goto block2;
block5:;
int64_t $tmp258 = $tmp248.value;
int64_t $tmp259 = $tmp249.value;
bool $tmp260 = $tmp258 < $tmp259;
frost$core$Bit $tmp261 = (frost$core$Bit) {$tmp260};
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:634
frost$core$MutableString* $tmp263 = *(&local0);
frost$core$Int $tmp264 = *(&local1);
frost$core$Int$wrapper* $tmp265;
$tmp265 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp265->value = $tmp264;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:634:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn267 $tmp266 = ($fn267) ((frost$core$Object*) $tmp265)->$class->vtable[0];
frost$core$String* $tmp268 = $tmp266(((frost$core$Object*) $tmp265));
frost$core$String* $tmp269 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s270, $tmp268);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$String* $tmp271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp269, &$s272);
frost$collections$Array** $tmp273 = &param0->locals;
frost$collections$Array* $tmp274 = *$tmp273;
frost$core$Int $tmp275 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IR.frost:634:47
frost$core$Int $tmp276 = (frost$core$Int) {0u};
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276.value;
bool $tmp279 = $tmp277 >= $tmp278;
frost$core$Bit $tmp280 = (frost$core$Bit) {$tmp279};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block10; else goto block9;
block10:;
ITable* $tmp282 = ((frost$collections$CollectionView*) $tmp274)->$class->itable;
while ($tmp282->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp282 = $tmp282->next;
}
$fn284 $tmp283 = $tmp282->methods[0];
frost$core$Int $tmp285 = $tmp283(((frost$collections$CollectionView*) $tmp274));
int64_t $tmp286 = $tmp275.value;
int64_t $tmp287 = $tmp285.value;
bool $tmp288 = $tmp286 < $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block8; else goto block9;
block9:;
frost$core$Int $tmp291 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s292, $tmp291, &$s293);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp294 = &$tmp274->data;
frost$core$Object** $tmp295 = *$tmp294;
frost$core$Int64 $tmp296 = frost$core$Int64$init$frost$core$Int($tmp275);
int64_t $tmp297 = $tmp296.value;
frost$core$Object* $tmp298 = $tmp295[$tmp297];
frost$core$Frost$ref$frost$core$Object$Q($tmp298);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:634:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn300 $tmp299 = ($fn300) ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp298))->$class->vtable[0];
frost$core$String* $tmp301 = $tmp299(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp298)));
frost$core$String* $tmp302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp271, $tmp301);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$String* $tmp303 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp302, &$s304);
frost$core$MutableString$append$frost$core$String($tmp263, $tmp303);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q($tmp298);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Int $tmp305 = *(&local1);
int64_t $tmp306 = $tmp249.value;
int64_t $tmp307 = $tmp305.value;
int64_t $tmp308 = $tmp306 - $tmp307;
frost$core$Int $tmp309 = (frost$core$Int) {$tmp308};
if ($tmp251) goto block13; else goto block14;
block13:;
int64_t $tmp310 = $tmp309.value;
int64_t $tmp311 = $tmp252.value;
bool $tmp312 = $tmp310 >= $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block12; else goto block2;
block14:;
int64_t $tmp315 = $tmp309.value;
int64_t $tmp316 = $tmp252.value;
bool $tmp317 = $tmp315 > $tmp316;
frost$core$Bit $tmp318 = (frost$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block12; else goto block2;
block12:;
int64_t $tmp320 = $tmp305.value;
int64_t $tmp321 = $tmp252.value;
int64_t $tmp322 = $tmp320 + $tmp321;
frost$core$Int $tmp323 = (frost$core$Int) {$tmp322};
*(&local1) = $tmp323;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:636
frost$core$MutableString* $tmp324 = *(&local0);
frost$collections$Array** $tmp325 = &param0->blocks;
frost$collections$Array* $tmp326 = *$tmp325;
ITable* $tmp327 = ((frost$collections$CollectionView*) $tmp326)->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[3];
frost$core$String* $tmp330 = $tmp328(((frost$collections$CollectionView*) $tmp326), &$s331);
frost$core$MutableString$append$frost$core$String($tmp324, $tmp330);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:637
frost$core$MutableString* $tmp332 = *(&local0);
frost$core$String* $tmp333 = frost$core$MutableString$finish$R$frost$core$String($tmp332);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$MutableString* $tmp334 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp333;

}
void org$frostlang$frostc$IR$cleanup(org$frostlang$frostc$IR* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp335 = &param0->locals;
frost$collections$Array* $tmp336 = *$tmp335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$collections$Array** $tmp337 = &param0->blocks;
frost$collections$Array* $tmp338 = *$tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
org$frostlang$frostc$IR$Block** $tmp339 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp340 = *$tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
return;

}

