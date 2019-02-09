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
typedef frost$core$Int64 (*$fn73)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn105)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn186)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn205)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn220)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn275)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn300)(frost$core$Object*);
typedef frost$core$Int64 (*$fn317)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn332)(frost$core$Object*);
typedef frost$core$String* (*$fn363)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52", 23, -468635677946240437, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x61\x72\x74", 5, 22597562659, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, 18742693976393560, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x61\x64\x64\x28\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 133, -674949365776773623, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };

void org$frostlang$frostc$IR$init(org$frostlang$frostc$IR* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:557
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:559
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:562
frost$core$Int64 $tmp10 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64* $tmp11 = &param0->currentStatementId;
*$tmp11 = $tmp10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:565
frost$core$Int64 $tmp12 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64* $tmp13 = &param0->currentBlockID;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:573
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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from IR.frost:579:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp23 = $tmp22.value;
bool $tmp24 = !$tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp27 = (frost$core$Int64) {580};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s28, $tmp27, &$s29);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:581
frost$core$Int64* $tmp30 = &param0->currentStatementId;
frost$core$Int64 $tmp31 = *$tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {1};
int64_t $tmp33 = $tmp31.value;
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33 + $tmp34;
frost$core$Int64 $tmp36 = (frost$core$Int64) {$tmp35};
frost$core$Int64* $tmp37 = &param0->currentStatementId;
*$tmp37 = $tmp36;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:582
frost$core$Int64* $tmp38 = &param0->currentStatementId;
frost$core$Int64 $tmp39 = *$tmp38;
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int64):org.frostlang.frostc.IR.Statement.ID from IR.frost:582:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int64* $tmp40 = &(&local1)->value;
*$tmp40 = $tmp39;
org$frostlang$frostc$IR$Statement$ID $tmp41 = *(&local1);
*(&local0) = $tmp41;
org$frostlang$frostc$IR$Statement$ID $tmp42 = *(&local0);
*(&local2) = $tmp42;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:583
org$frostlang$frostc$IR$Block** $tmp43 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp44 = *$tmp43;
frost$collections$Array** $tmp45 = &$tmp44->ids;
frost$collections$Array* $tmp46 = *$tmp45;
org$frostlang$frostc$IR$Statement$ID $tmp47 = *(&local2);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp48;
$tmp48 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp48->value = $tmp47;
frost$collections$Array$add$frost$collections$Array$T($tmp46, ((frost$core$Object*) $tmp48));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:584
org$frostlang$frostc$IR$Block** $tmp49 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp50 = *$tmp49;
frost$collections$Array** $tmp51 = &$tmp50->statements;
frost$collections$Array* $tmp52 = *$tmp51;
frost$collections$Array$add$frost$collections$Array$T($tmp52, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:585
org$frostlang$frostc$IR$Statement$ID $tmp53 = *(&local2);
return $tmp53;

}
org$frostlang$frostc$IR$Block$ID org$frostlang$frostc$IR$newBlock$frost$core$String$R$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR* param0, frost$core$String* param1) {

org$frostlang$frostc$IR$Block$ID local0;
org$frostlang$frostc$IR$Block$ID local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:592
frost$core$Int64* $tmp54 = &param0->currentBlockID;
frost$core$Int64 $tmp55 = *$tmp54;
frost$core$Int64 $tmp56 = (frost$core$Int64) {1};
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57 + $tmp58;
frost$core$Int64 $tmp60 = (frost$core$Int64) {$tmp59};
frost$core$Int64* $tmp61 = &param0->currentBlockID;
*$tmp61 = $tmp60;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:593
frost$core$Int64* $tmp62 = &param0->currentBlockID;
frost$core$Int64 $tmp63 = *$tmp62;
// begin inline call to org.frostlang.frostc.IR.Block.ID.init(value:frost.core.Int64):org.frostlang.frostc.IR.Block.ID from IR.frost:593:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:377
frost$core$Int64* $tmp64 = &(&local1)->value;
*$tmp64 = $tmp63;
org$frostlang$frostc$IR$Block$ID $tmp65 = *(&local1);
*(&local0) = $tmp65;
org$frostlang$frostc$IR$Block$ID $tmp66 = *(&local0);
return $tmp66;

}
void org$frostlang$frostc$IR$setCurrentBlock$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR* param0, org$frostlang$frostc$IR$Block$ID param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
org$frostlang$frostc$IR$Block* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:597
frost$core$Int64 $tmp67 = (frost$core$Int64) {0};
*(&local0) = $tmp67;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:598
frost$core$Int64 $tmp68 = (frost$core$Int64) {0};
frost$collections$Array** $tmp69 = &param0->blocks;
frost$collections$Array* $tmp70 = *$tmp69;
ITable* $tmp71 = ((frost$collections$CollectionView*) $tmp70)->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[0];
frost$core$Int64 $tmp74 = $tmp72(((frost$collections$CollectionView*) $tmp70));
frost$core$Bit $tmp75 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp76 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp68, $tmp74, $tmp75);
frost$core$Int64 $tmp77 = $tmp76.min;
*(&local1) = $tmp77;
frost$core$Int64 $tmp78 = $tmp76.max;
frost$core$Bit $tmp79 = $tmp76.inclusive;
bool $tmp80 = $tmp79.value;
frost$core$Int64 $tmp81 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp82 = $tmp81.value;
frost$core$UInt64 $tmp83 = (frost$core$UInt64) {((uint64_t) $tmp82)};
if ($tmp80) goto block5; else goto block6;
block5:;
int64_t $tmp84 = $tmp77.value;
int64_t $tmp85 = $tmp78.value;
bool $tmp86 = $tmp84 <= $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block2; else goto block3;
block6:;
int64_t $tmp89 = $tmp77.value;
int64_t $tmp90 = $tmp78.value;
bool $tmp91 = $tmp89 < $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:599
frost$collections$Array** $tmp94 = &param0->blocks;
frost$collections$Array* $tmp95 = *$tmp94;
frost$core$Int64 $tmp96 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from IR.frost:599:28
frost$core$Int64 $tmp97 = (frost$core$Int64) {0};
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97.value;
bool $tmp100 = $tmp98 >= $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block10; else goto block9;
block10:;
ITable* $tmp103 = ((frost$collections$CollectionView*) $tmp95)->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[0];
frost$core$Int64 $tmp106 = $tmp104(((frost$collections$CollectionView*) $tmp95));
int64_t $tmp107 = $tmp96.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 < $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp112 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s113, $tmp112, &$s114);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp115 = &$tmp95->data;
frost$core$Object** $tmp116 = *$tmp115;
int64_t $tmp117 = $tmp96.value;
frost$core$Object* $tmp118 = $tmp116[$tmp117];
frost$core$Frost$ref$frost$core$Object$Q($tmp118);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp118)));
org$frostlang$frostc$IR$Block* $tmp119 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
*(&local2) = ((org$frostlang$frostc$IR$Block*) $tmp118);
frost$core$Frost$unref$frost$core$Object$Q($tmp118);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:600
org$frostlang$frostc$IR$Block* $tmp120 = *(&local2);
org$frostlang$frostc$IR$Block$ID* $tmp121 = &$tmp120->id;
org$frostlang$frostc$IR$Block$ID $tmp122 = *$tmp121;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from IR.frost:600:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int64 $tmp123 = $tmp122.value;
frost$core$Int64 $tmp124 = param1.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp125 = $tmp123.value;
int64_t $tmp126 = $tmp124.value;
bool $tmp127 = $tmp125 == $tmp126;
frost$core$Bit $tmp128 = frost$core$Bit$init$builtin_bit($tmp127);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:601
org$frostlang$frostc$IR$Block* $tmp130 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
org$frostlang$frostc$IR$Block** $tmp131 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp132 = *$tmp131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
org$frostlang$frostc$IR$Block** $tmp133 = &param0->currentBlock;
*$tmp133 = $tmp130;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:602
org$frostlang$frostc$IR$Block* $tmp134 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
return;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:604
org$frostlang$frostc$IR$Block* $tmp135 = *(&local2);
org$frostlang$frostc$IR$Block** $tmp136 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp137 = *$tmp136;
bool $tmp138 = $tmp135 == $tmp137;
frost$core$Bit $tmp139 = frost$core$Bit$init$builtin_bit($tmp138);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:605
frost$core$Int64 $tmp141 = *(&local1);
frost$core$Int64 $tmp142 = (frost$core$Int64) {1};
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142.value;
int64_t $tmp145 = $tmp143 + $tmp144;
frost$core$Int64 $tmp146 = (frost$core$Int64) {$tmp145};
*(&local0) = $tmp146;
goto block16;
block16:;
org$frostlang$frostc$IR$Block* $tmp147 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Int64 $tmp148 = *(&local1);
int64_t $tmp149 = $tmp78.value;
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149 - $tmp150;
frost$core$Int64 $tmp152 = (frost$core$Int64) {$tmp151};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp153 = $tmp152.value;
frost$core$UInt64 $tmp154 = (frost$core$UInt64) {((uint64_t) $tmp153)};
if ($tmp80) goto block19; else goto block20;
block19:;
uint64_t $tmp155 = $tmp154.value;
uint64_t $tmp156 = $tmp83.value;
bool $tmp157 = $tmp155 >= $tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block17; else goto block3;
block20:;
uint64_t $tmp160 = $tmp154.value;
uint64_t $tmp161 = $tmp83.value;
bool $tmp162 = $tmp160 > $tmp161;
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162};
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block17; else goto block3;
block17:;
int64_t $tmp165 = $tmp148.value;
int64_t $tmp166 = $tmp81.value;
int64_t $tmp167 = $tmp165 + $tmp166;
frost$core$Int64 $tmp168 = (frost$core$Int64) {$tmp167};
*(&local1) = $tmp168;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:608
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$IR$Block));
org$frostlang$frostc$IR$Block* $tmp169 = (org$frostlang$frostc$IR$Block*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$IR$Block$class);
org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID($tmp169, param1);
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
org$frostlang$frostc$IR$Block* $tmp170 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local3) = $tmp169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:609
frost$collections$Array** $tmp171 = &param0->blocks;
frost$collections$Array* $tmp172 = *$tmp171;
frost$core$Int64 $tmp173 = *(&local0);
org$frostlang$frostc$IR$Block* $tmp174 = *(&local3);
frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T($tmp172, $tmp173, ((frost$core$Object*) $tmp174));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:610
org$frostlang$frostc$IR$Block* $tmp175 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
org$frostlang$frostc$IR$Block** $tmp176 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp177 = *$tmp176;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
org$frostlang$frostc$IR$Block** $tmp178 = &param0->currentBlock;
*$tmp178 = $tmp175;
org$frostlang$frostc$IR$Block* $tmp179 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit(org$frostlang$frostc$IR* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:614
org$frostlang$frostc$IR$Block** $tmp180 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp181 = *$tmp180;
frost$collections$Array** $tmp182 = &$tmp181->statements;
frost$collections$Array* $tmp183 = *$tmp182;
ITable* $tmp184 = ((frost$collections$CollectionView*) $tmp183)->$class->itable;
while ($tmp184->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp184 = $tmp184->next;
}
$fn186 $tmp185 = $tmp184->methods[0];
frost$core$Int64 $tmp187 = $tmp185(((frost$collections$CollectionView*) $tmp183));
frost$core$Int64 $tmp188 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:614:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp189 = $tmp187.value;
int64_t $tmp190 = $tmp188.value;
bool $tmp191 = $tmp189 == $tmp190;
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit($tmp191);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:615
frost$core$Bit $tmp194 = frost$core$Bit$init$builtin_bit(false);
return $tmp194;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:617
org$frostlang$frostc$IR$Block** $tmp195 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp196 = *$tmp195;
frost$collections$Array** $tmp197 = &$tmp196->statements;
frost$collections$Array* $tmp198 = *$tmp197;
org$frostlang$frostc$IR$Block** $tmp199 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp200 = *$tmp199;
frost$collections$Array** $tmp201 = &$tmp200->statements;
frost$collections$Array* $tmp202 = *$tmp201;
ITable* $tmp203 = ((frost$collections$CollectionView*) $tmp202)->$class->itable;
while ($tmp203->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp203 = $tmp203->next;
}
$fn205 $tmp204 = $tmp203->methods[0];
frost$core$Int64 $tmp206 = $tmp204(((frost$collections$CollectionView*) $tmp202));
frost$core$Int64 $tmp207 = (frost$core$Int64) {1};
int64_t $tmp208 = $tmp206.value;
int64_t $tmp209 = $tmp207.value;
int64_t $tmp210 = $tmp208 - $tmp209;
frost$core$Int64 $tmp211 = (frost$core$Int64) {$tmp210};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from IR.frost:617:38
frost$core$Int64 $tmp212 = (frost$core$Int64) {0};
int64_t $tmp213 = $tmp211.value;
int64_t $tmp214 = $tmp212.value;
bool $tmp215 = $tmp213 >= $tmp214;
frost$core$Bit $tmp216 = (frost$core$Bit) {$tmp215};
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block7; else goto block6;
block7:;
ITable* $tmp218 = ((frost$collections$CollectionView*) $tmp198)->$class->itable;
while ($tmp218->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp218 = $tmp218->next;
}
$fn220 $tmp219 = $tmp218->methods[0];
frost$core$Int64 $tmp221 = $tmp219(((frost$collections$CollectionView*) $tmp198));
int64_t $tmp222 = $tmp211.value;
int64_t $tmp223 = $tmp221.value;
bool $tmp224 = $tmp222 < $tmp223;
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp227 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s228, $tmp227, &$s229);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp230 = &$tmp198->data;
frost$core$Object** $tmp231 = *$tmp230;
int64_t $tmp232 = $tmp211.value;
frost$core$Object* $tmp233 = $tmp231[$tmp232];
frost$core$Frost$ref$frost$core$Object$Q($tmp233);
frost$core$Int64* $tmp234 = &((org$frostlang$frostc$IR$Statement*) $tmp233)->$rawValue;
frost$core$Int64 $tmp235 = *$tmp234;
frost$core$Int64 $tmp236 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:618:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp237 = $tmp235.value;
int64_t $tmp238 = $tmp236.value;
bool $tmp239 = $tmp237 == $tmp238;
frost$core$Bit $tmp240 = frost$core$Bit$init$builtin_bit($tmp239);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp242 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:618:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp243 = $tmp235.value;
int64_t $tmp244 = $tmp242.value;
bool $tmp245 = $tmp243 == $tmp244;
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit($tmp245);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block9; else goto block12;
block12:;
frost$core$Int64 $tmp248 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:618:75
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp249 = $tmp235.value;
int64_t $tmp250 = $tmp248.value;
bool $tmp251 = $tmp249 == $tmp250;
frost$core$Bit $tmp252 = frost$core$Bit$init$builtin_bit($tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block9; else goto block14;
block14:;
frost$core$Int64 $tmp254 = (frost$core$Int64) {25};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:618:90
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp255 = $tmp235.value;
int64_t $tmp256 = $tmp254.value;
bool $tmp257 = $tmp255 == $tmp256;
frost$core$Bit $tmp258 = frost$core$Bit$init$builtin_bit($tmp257);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block9; else goto block16;
block16:;
frost$core$Int64 $tmp260 = (frost$core$Int64) {28};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:619:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp261 = $tmp235.value;
int64_t $tmp262 = $tmp260.value;
bool $tmp263 = $tmp261 == $tmp262;
frost$core$Bit $tmp264 = frost$core$Bit$init$builtin_bit($tmp263);
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block9; else goto block18;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:620
frost$core$Bit $tmp266 = frost$core$Bit$init$builtin_bit(true);
frost$core$Frost$unref$frost$core$Object$Q($tmp233);
return $tmp266;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:623
frost$core$Bit $tmp267 = frost$core$Bit$init$builtin_bit(false);
frost$core$Frost$unref$frost$core$Object$Q($tmp233);
return $tmp267;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp233);
goto block20;
block20:;

}
frost$core$String* org$frostlang$frostc$IR$get_asString$R$frost$core$String(org$frostlang$frostc$IR* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:630
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp268 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp268);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$MutableString* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local0) = $tmp268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:631
frost$core$Int64 $tmp270 = (frost$core$Int64) {0};
frost$collections$Array** $tmp271 = &param0->locals;
frost$collections$Array* $tmp272 = *$tmp271;
ITable* $tmp273 = ((frost$collections$CollectionView*) $tmp272)->$class->itable;
while ($tmp273->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp273 = $tmp273->next;
}
$fn275 $tmp274 = $tmp273->methods[0];
frost$core$Int64 $tmp276 = $tmp274(((frost$collections$CollectionView*) $tmp272));
frost$core$Bit $tmp277 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp278 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp270, $tmp276, $tmp277);
frost$core$Int64 $tmp279 = $tmp278.min;
*(&local1) = $tmp279;
frost$core$Int64 $tmp280 = $tmp278.max;
frost$core$Bit $tmp281 = $tmp278.inclusive;
bool $tmp282 = $tmp281.value;
frost$core$Int64 $tmp283 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp284 = $tmp283.value;
frost$core$UInt64 $tmp285 = (frost$core$UInt64) {((uint64_t) $tmp284)};
if ($tmp282) goto block5; else goto block6;
block5:;
int64_t $tmp286 = $tmp279.value;
int64_t $tmp287 = $tmp280.value;
bool $tmp288 = $tmp286 <= $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block2; else goto block3;
block6:;
int64_t $tmp291 = $tmp279.value;
int64_t $tmp292 = $tmp280.value;
bool $tmp293 = $tmp291 < $tmp292;
frost$core$Bit $tmp294 = (frost$core$Bit) {$tmp293};
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:632
frost$core$MutableString* $tmp296 = *(&local0);
frost$core$Int64 $tmp297 = *(&local1);
frost$core$Int64$wrapper* $tmp298;
$tmp298 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp298->value = $tmp297;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:632:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn300 $tmp299 = ($fn300) ((frost$core$Object*) $tmp298)->$class->vtable[0];
frost$core$String* $tmp301 = $tmp299(((frost$core$Object*) $tmp298));
frost$core$String* $tmp302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s303, $tmp301);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$String* $tmp304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp302, &$s305);
frost$collections$Array** $tmp306 = &param0->locals;
frost$collections$Array* $tmp307 = *$tmp306;
frost$core$Int64 $tmp308 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from IR.frost:632:47
frost$core$Int64 $tmp309 = (frost$core$Int64) {0};
int64_t $tmp310 = $tmp308.value;
int64_t $tmp311 = $tmp309.value;
bool $tmp312 = $tmp310 >= $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block11; else goto block10;
block11:;
ITable* $tmp315 = ((frost$collections$CollectionView*) $tmp307)->$class->itable;
while ($tmp315->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp315 = $tmp315->next;
}
$fn317 $tmp316 = $tmp315->methods[0];
frost$core$Int64 $tmp318 = $tmp316(((frost$collections$CollectionView*) $tmp307));
int64_t $tmp319 = $tmp308.value;
int64_t $tmp320 = $tmp318.value;
bool $tmp321 = $tmp319 < $tmp320;
frost$core$Bit $tmp322 = (frost$core$Bit) {$tmp321};
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp324 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s325, $tmp324, &$s326);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp327 = &$tmp307->data;
frost$core$Object** $tmp328 = *$tmp327;
int64_t $tmp329 = $tmp308.value;
frost$core$Object* $tmp330 = $tmp328[$tmp329];
frost$core$Frost$ref$frost$core$Object$Q($tmp330);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:632:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn332 $tmp331 = ($fn332) ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp330))->$class->vtable[0];
frost$core$String* $tmp333 = $tmp331(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp330)));
frost$core$String* $tmp334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp304, $tmp333);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$String* $tmp335 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp334, &$s336);
frost$core$MutableString$append$frost$core$String($tmp296, $tmp335);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q($tmp330);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Int64 $tmp337 = *(&local1);
int64_t $tmp338 = $tmp280.value;
int64_t $tmp339 = $tmp337.value;
int64_t $tmp340 = $tmp338 - $tmp339;
frost$core$Int64 $tmp341 = (frost$core$Int64) {$tmp340};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp342 = $tmp341.value;
frost$core$UInt64 $tmp343 = (frost$core$UInt64) {((uint64_t) $tmp342)};
if ($tmp282) goto block15; else goto block16;
block15:;
uint64_t $tmp344 = $tmp343.value;
uint64_t $tmp345 = $tmp285.value;
bool $tmp346 = $tmp344 >= $tmp345;
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block13; else goto block3;
block16:;
uint64_t $tmp349 = $tmp343.value;
uint64_t $tmp350 = $tmp285.value;
bool $tmp351 = $tmp349 > $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block13; else goto block3;
block13:;
int64_t $tmp354 = $tmp337.value;
int64_t $tmp355 = $tmp283.value;
int64_t $tmp356 = $tmp354 + $tmp355;
frost$core$Int64 $tmp357 = (frost$core$Int64) {$tmp356};
*(&local1) = $tmp357;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:634
frost$core$MutableString* $tmp358 = *(&local0);
frost$collections$Array** $tmp359 = &param0->blocks;
frost$collections$Array* $tmp360 = *$tmp359;
ITable* $tmp361 = ((frost$collections$CollectionView*) $tmp360)->$class->itable;
while ($tmp361->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp361 = $tmp361->next;
}
$fn363 $tmp362 = $tmp361->methods[2];
frost$core$String* $tmp364 = $tmp362(((frost$collections$CollectionView*) $tmp360), &$s365);
frost$core$MutableString$append$frost$core$String($tmp358, $tmp364);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:635
frost$core$MutableString* $tmp366 = *(&local0);
frost$core$String* $tmp367 = frost$core$MutableString$finish$R$frost$core$String($tmp366);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$core$MutableString* $tmp368 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp367;

}
void org$frostlang$frostc$IR$cleanup(org$frostlang$frostc$IR* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp369 = &param0->locals;
frost$collections$Array* $tmp370 = *$tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$collections$Array** $tmp371 = &param0->blocks;
frost$collections$Array* $tmp372 = *$tmp371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
org$frostlang$frostc$IR$Block** $tmp373 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp374 = *$tmp373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
return;

}

