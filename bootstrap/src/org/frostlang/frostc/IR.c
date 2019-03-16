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
typedef frost$core$Int (*$fn73)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn103)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn183)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn202)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn217)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn273)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn296)(frost$core$Object*);
typedef frost$core$Int (*$fn313)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn329)(frost$core$Object*);
typedef frost$core$String* (*$fn358)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52", 23, 1296235477144720067, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x61\x72\x74", 5, -1270692749394500321, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x61\x64\x64\x28\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x44", 133, -5934919833545445361, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 2638862777294684392, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$frostc$IR$init(org$frostlang$frostc$IR* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:557
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:559
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:562
frost$core$Int $tmp10 = (frost$core$Int) {18446744073709551615u};
frost$core$Int* $tmp11 = &param0->currentStatementId;
*$tmp11 = $tmp10;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:565
frost$core$Int $tmp12 = (frost$core$Int) {18446744073709551615u};
frost$core$Int* $tmp13 = &param0->currentBlockID;
*$tmp13 = $tmp12;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:573
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp23 = $tmp22.value;
bool $tmp24 = !$tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block1; else goto block2;
block2:;
frost$core$Int $tmp27 = (frost$core$Int) {580u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, $tmp27, &$s29);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:581
frost$core$Int* $tmp30 = &param0->currentStatementId;
frost$core$Int $tmp31 = *$tmp30;
frost$core$Int $tmp32 = (frost$core$Int) {1u};
int64_t $tmp33 = $tmp31.value;
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33 + $tmp34;
frost$core$Int $tmp36 = (frost$core$Int) {$tmp35};
frost$core$Int* $tmp37 = &param0->currentStatementId;
*$tmp37 = $tmp36;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:582
frost$core$Int* $tmp38 = &param0->currentStatementId;
frost$core$Int $tmp39 = *$tmp38;
// begin inline call to org.frostlang.frostc.IR.Statement.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Statement.ID from IR.frost:582:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:161
frost$core$Int* $tmp40 = &(&local1)->value;
*$tmp40 = $tmp39;
org$frostlang$frostc$IR$Statement$ID $tmp41 = *(&local1);
*(&local0) = $tmp41;
org$frostlang$frostc$IR$Statement$ID $tmp42 = *(&local0);
*(&local2) = $tmp42;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:583
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:584
org$frostlang$frostc$IR$Block** $tmp49 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp50 = *$tmp49;
frost$collections$Array** $tmp51 = &$tmp50->statements;
frost$collections$Array* $tmp52 = *$tmp51;
frost$collections$Array$add$frost$collections$Array$T($tmp52, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:585
org$frostlang$frostc$IR$Statement$ID $tmp53 = *(&local2);
return $tmp53;

}
org$frostlang$frostc$IR$Block$ID org$frostlang$frostc$IR$newBlock$frost$core$String$R$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR* param0, frost$core$String* param1) {

org$frostlang$frostc$IR$Block$ID local0;
org$frostlang$frostc$IR$Block$ID local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:592
frost$core$Int* $tmp54 = &param0->currentBlockID;
frost$core$Int $tmp55 = *$tmp54;
frost$core$Int $tmp56 = (frost$core$Int) {1u};
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57 + $tmp58;
frost$core$Int $tmp60 = (frost$core$Int) {$tmp59};
frost$core$Int* $tmp61 = &param0->currentBlockID;
*$tmp61 = $tmp60;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:593
frost$core$Int* $tmp62 = &param0->currentBlockID;
frost$core$Int $tmp63 = *$tmp62;
// begin inline call to org.frostlang.frostc.IR.Block.ID.init(value:frost.core.Int):org.frostlang.frostc.IR.Block.ID from IR.frost:593:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:377
frost$core$Int* $tmp64 = &(&local1)->value;
*$tmp64 = $tmp63;
org$frostlang$frostc$IR$Block$ID $tmp65 = *(&local1);
*(&local0) = $tmp65;
org$frostlang$frostc$IR$Block$ID $tmp66 = *(&local0);
return $tmp66;

}
void org$frostlang$frostc$IR$setCurrentBlock$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR* param0, org$frostlang$frostc$IR$Block$ID param1) {

frost$core$Int local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
org$frostlang$frostc$IR$Block* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:597
frost$core$Int $tmp67 = (frost$core$Int) {0u};
*(&local0) = $tmp67;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:598
frost$core$Int $tmp68 = (frost$core$Int) {0u};
frost$collections$Array** $tmp69 = &param0->blocks;
frost$collections$Array* $tmp70 = *$tmp69;
ITable* $tmp71 = ((frost$collections$CollectionView*) $tmp70)->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[0];
frost$core$Int $tmp74 = $tmp72(((frost$collections$CollectionView*) $tmp70));
frost$core$Bit $tmp75 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp76 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp68, $tmp74, $tmp75);
frost$core$Int $tmp77 = $tmp76.min;
*(&local1) = $tmp77;
frost$core$Int $tmp78 = $tmp76.max;
frost$core$Bit $tmp79 = $tmp76.inclusive;
bool $tmp80 = $tmp79.value;
frost$core$Int $tmp81 = (frost$core$Int) {1u};
if ($tmp80) goto block4; else goto block5;
block4:;
int64_t $tmp82 = $tmp77.value;
int64_t $tmp83 = $tmp78.value;
bool $tmp84 = $tmp82 <= $tmp83;
frost$core$Bit $tmp85 = (frost$core$Bit) {$tmp84};
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block1; else goto block2;
block5:;
int64_t $tmp87 = $tmp77.value;
int64_t $tmp88 = $tmp78.value;
bool $tmp89 = $tmp87 < $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:599
frost$collections$Array** $tmp92 = &param0->blocks;
frost$collections$Array* $tmp93 = *$tmp92;
frost$core$Int $tmp94 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IR.frost:599:28
frost$core$Int $tmp95 = (frost$core$Int) {0u};
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 >= $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block9; else goto block8;
block9:;
ITable* $tmp101 = ((frost$collections$CollectionView*) $tmp93)->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[0];
frost$core$Int $tmp104 = $tmp102(((frost$collections$CollectionView*) $tmp93));
int64_t $tmp105 = $tmp94.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 < $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block7; else goto block8;
block8:;
frost$core$Int $tmp110 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s111, $tmp110, &$s112);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp113 = &$tmp93->data;
frost$core$Object** $tmp114 = *$tmp113;
frost$core$Int64 $tmp115 = frost$core$Int64$init$frost$core$Int($tmp94);
int64_t $tmp116 = $tmp115.value;
frost$core$Object* $tmp117 = $tmp114[$tmp116];
frost$core$Frost$ref$frost$core$Object$Q($tmp117);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp117)));
org$frostlang$frostc$IR$Block* $tmp118 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local2) = ((org$frostlang$frostc$IR$Block*) $tmp117);
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:600
org$frostlang$frostc$IR$Block* $tmp119 = *(&local2);
org$frostlang$frostc$IR$Block$ID* $tmp120 = &$tmp119->id;
org$frostlang$frostc$IR$Block$ID $tmp121 = *$tmp120;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from IR.frost:600:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp122 = $tmp121.value;
frost$core$Int $tmp123 = param1.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123.value;
bool $tmp126 = $tmp124 == $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:601
org$frostlang$frostc$IR$Block* $tmp129 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
org$frostlang$frostc$IR$Block** $tmp130 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp131 = *$tmp130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
org$frostlang$frostc$IR$Block** $tmp132 = &param0->currentBlock;
*$tmp132 = $tmp129;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:602
org$frostlang$frostc$IR$Block* $tmp133 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
return;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:604
org$frostlang$frostc$IR$Block* $tmp134 = *(&local2);
org$frostlang$frostc$IR$Block** $tmp135 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp136 = *$tmp135;
bool $tmp137 = $tmp134 == $tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:605
frost$core$Int $tmp140 = *(&local1);
frost$core$Int $tmp141 = (frost$core$Int) {1u};
int64_t $tmp142 = $tmp140.value;
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142 + $tmp143;
frost$core$Int $tmp145 = (frost$core$Int) {$tmp144};
*(&local0) = $tmp145;
goto block15;
block15:;
org$frostlang$frostc$IR$Block* $tmp146 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Int $tmp147 = *(&local1);
int64_t $tmp148 = $tmp78.value;
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148 - $tmp149;
frost$core$Int $tmp151 = (frost$core$Int) {$tmp150};
if ($tmp80) goto block17; else goto block18;
block17:;
int64_t $tmp152 = $tmp151.value;
int64_t $tmp153 = $tmp81.value;
bool $tmp154 = $tmp152 >= $tmp153;
frost$core$Bit $tmp155 = (frost$core$Bit) {$tmp154};
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block16; else goto block2;
block18:;
int64_t $tmp157 = $tmp151.value;
int64_t $tmp158 = $tmp81.value;
bool $tmp159 = $tmp157 > $tmp158;
frost$core$Bit $tmp160 = (frost$core$Bit) {$tmp159};
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block16; else goto block2;
block16:;
int64_t $tmp162 = $tmp147.value;
int64_t $tmp163 = $tmp81.value;
int64_t $tmp164 = $tmp162 + $tmp163;
frost$core$Int $tmp165 = (frost$core$Int) {$tmp164};
*(&local1) = $tmp165;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:608
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$IR$Block));
org$frostlang$frostc$IR$Block* $tmp166 = (org$frostlang$frostc$IR$Block*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$IR$Block$class);
org$frostlang$frostc$IR$Block$init$org$frostlang$frostc$IR$Block$ID($tmp166, param1);
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
org$frostlang$frostc$IR$Block* $tmp167 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local3) = $tmp166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:609
frost$collections$Array** $tmp168 = &param0->blocks;
frost$collections$Array* $tmp169 = *$tmp168;
frost$core$Int $tmp170 = *(&local0);
org$frostlang$frostc$IR$Block* $tmp171 = *(&local3);
frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T($tmp169, $tmp170, ((frost$core$Object*) $tmp171));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:610
org$frostlang$frostc$IR$Block* $tmp172 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
org$frostlang$frostc$IR$Block** $tmp173 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp174 = *$tmp173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$IR$Block** $tmp175 = &param0->currentBlock;
*$tmp175 = $tmp172;
org$frostlang$frostc$IR$Block* $tmp176 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local3) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit(org$frostlang$frostc$IR* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:614
org$frostlang$frostc$IR$Block** $tmp177 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp178 = *$tmp177;
frost$collections$Array** $tmp179 = &$tmp178->statements;
frost$collections$Array* $tmp180 = *$tmp179;
ITable* $tmp181 = ((frost$collections$CollectionView*) $tmp180)->$class->itable;
while ($tmp181->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp181 = $tmp181->next;
}
$fn183 $tmp182 = $tmp181->methods[0];
frost$core$Int $tmp184 = $tmp182(((frost$collections$CollectionView*) $tmp180));
frost$core$Int $tmp185 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:614:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp186 = $tmp184.value;
int64_t $tmp187 = $tmp185.value;
bool $tmp188 = $tmp186 == $tmp187;
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:615
frost$core$Bit $tmp191 = (frost$core$Bit) {false};
return $tmp191;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:617
org$frostlang$frostc$IR$Block** $tmp192 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp193 = *$tmp192;
frost$collections$Array** $tmp194 = &$tmp193->statements;
frost$collections$Array* $tmp195 = *$tmp194;
org$frostlang$frostc$IR$Block** $tmp196 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp197 = *$tmp196;
frost$collections$Array** $tmp198 = &$tmp197->statements;
frost$collections$Array* $tmp199 = *$tmp198;
ITable* $tmp200 = ((frost$collections$CollectionView*) $tmp199)->$class->itable;
while ($tmp200->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp200 = $tmp200->next;
}
$fn202 $tmp201 = $tmp200->methods[0];
frost$core$Int $tmp203 = $tmp201(((frost$collections$CollectionView*) $tmp199));
frost$core$Int $tmp204 = (frost$core$Int) {1u};
int64_t $tmp205 = $tmp203.value;
int64_t $tmp206 = $tmp204.value;
int64_t $tmp207 = $tmp205 - $tmp206;
frost$core$Int $tmp208 = (frost$core$Int) {$tmp207};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IR.frost:617:38
frost$core$Int $tmp209 = (frost$core$Int) {0u};
int64_t $tmp210 = $tmp208.value;
int64_t $tmp211 = $tmp209.value;
bool $tmp212 = $tmp210 >= $tmp211;
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212};
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block7; else goto block6;
block7:;
ITable* $tmp215 = ((frost$collections$CollectionView*) $tmp195)->$class->itable;
while ($tmp215->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp215 = $tmp215->next;
}
$fn217 $tmp216 = $tmp215->methods[0];
frost$core$Int $tmp218 = $tmp216(((frost$collections$CollectionView*) $tmp195));
int64_t $tmp219 = $tmp208.value;
int64_t $tmp220 = $tmp218.value;
bool $tmp221 = $tmp219 < $tmp220;
frost$core$Bit $tmp222 = (frost$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block5; else goto block6;
block6:;
frost$core$Int $tmp224 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s225, $tmp224, &$s226);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp227 = &$tmp195->data;
frost$core$Object** $tmp228 = *$tmp227;
frost$core$Int64 $tmp229 = frost$core$Int64$init$frost$core$Int($tmp208);
int64_t $tmp230 = $tmp229.value;
frost$core$Object* $tmp231 = $tmp228[$tmp230];
frost$core$Frost$ref$frost$core$Object$Q($tmp231);
frost$core$Int* $tmp232 = &((org$frostlang$frostc$IR$Statement*) $tmp231)->$rawValue;
frost$core$Int $tmp233 = *$tmp232;
frost$core$Int $tmp234 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:618:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp235 = $tmp233.value;
int64_t $tmp236 = $tmp234.value;
bool $tmp237 = $tmp235 == $tmp236;
frost$core$Bit $tmp238 = (frost$core$Bit) {$tmp237};
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block9; else goto block10;
block10:;
frost$core$Int $tmp240 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:618:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp241 = $tmp233.value;
int64_t $tmp242 = $tmp240.value;
bool $tmp243 = $tmp241 == $tmp242;
frost$core$Bit $tmp244 = (frost$core$Bit) {$tmp243};
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block9; else goto block12;
block12:;
frost$core$Int $tmp246 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:618:75
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp247 = $tmp233.value;
int64_t $tmp248 = $tmp246.value;
bool $tmp249 = $tmp247 == $tmp248;
frost$core$Bit $tmp250 = (frost$core$Bit) {$tmp249};
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block9; else goto block14;
block14:;
frost$core$Int $tmp252 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:618:90
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp253 = $tmp233.value;
int64_t $tmp254 = $tmp252.value;
bool $tmp255 = $tmp253 == $tmp254;
frost$core$Bit $tmp256 = (frost$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block9; else goto block16;
block16:;
frost$core$Int $tmp258 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:619:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp259 = $tmp233.value;
int64_t $tmp260 = $tmp258.value;
bool $tmp261 = $tmp259 == $tmp260;
frost$core$Bit $tmp262 = (frost$core$Bit) {$tmp261};
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block9; else goto block18;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:620
frost$core$Bit $tmp264 = (frost$core$Bit) {true};
frost$core$Frost$unref$frost$core$Object$Q($tmp231);
return $tmp264;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:623
frost$core$Bit $tmp265 = (frost$core$Bit) {false};
frost$core$Frost$unref$frost$core$Object$Q($tmp231);
return $tmp265;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp231);
goto block20;
block20:;

}
frost$core$String* org$frostlang$frostc$IR$get_asString$R$frost$core$String(org$frostlang$frostc$IR* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:630
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp266 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp266);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
frost$core$MutableString* $tmp267 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local0) = $tmp266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:631
frost$core$Int $tmp268 = (frost$core$Int) {0u};
frost$collections$Array** $tmp269 = &param0->locals;
frost$collections$Array* $tmp270 = *$tmp269;
ITable* $tmp271 = ((frost$collections$CollectionView*) $tmp270)->$class->itable;
while ($tmp271->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[0];
frost$core$Int $tmp274 = $tmp272(((frost$collections$CollectionView*) $tmp270));
frost$core$Bit $tmp275 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp276 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp268, $tmp274, $tmp275);
frost$core$Int $tmp277 = $tmp276.min;
*(&local1) = $tmp277;
frost$core$Int $tmp278 = $tmp276.max;
frost$core$Bit $tmp279 = $tmp276.inclusive;
bool $tmp280 = $tmp279.value;
frost$core$Int $tmp281 = (frost$core$Int) {1u};
if ($tmp280) goto block4; else goto block5;
block4:;
int64_t $tmp282 = $tmp277.value;
int64_t $tmp283 = $tmp278.value;
bool $tmp284 = $tmp282 <= $tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block1; else goto block2;
block5:;
int64_t $tmp287 = $tmp277.value;
int64_t $tmp288 = $tmp278.value;
bool $tmp289 = $tmp287 < $tmp288;
frost$core$Bit $tmp290 = (frost$core$Bit) {$tmp289};
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:632
frost$core$MutableString* $tmp292 = *(&local0);
frost$core$Int $tmp293 = *(&local1);
frost$core$Int$wrapper* $tmp294;
$tmp294 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp294->value = $tmp293;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:632:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn296 $tmp295 = ($fn296) ((frost$core$Object*) $tmp294)->$class->vtable[0];
frost$core$String* $tmp297 = $tmp295(((frost$core$Object*) $tmp294));
frost$core$String* $tmp298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s299, $tmp297);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$String* $tmp300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp298, &$s301);
frost$collections$Array** $tmp302 = &param0->locals;
frost$collections$Array* $tmp303 = *$tmp302;
frost$core$Int $tmp304 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from IR.frost:632:47
frost$core$Int $tmp305 = (frost$core$Int) {0u};
int64_t $tmp306 = $tmp304.value;
int64_t $tmp307 = $tmp305.value;
bool $tmp308 = $tmp306 >= $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block10; else goto block9;
block10:;
ITable* $tmp311 = ((frost$collections$CollectionView*) $tmp303)->$class->itable;
while ($tmp311->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp311 = $tmp311->next;
}
$fn313 $tmp312 = $tmp311->methods[0];
frost$core$Int $tmp314 = $tmp312(((frost$collections$CollectionView*) $tmp303));
int64_t $tmp315 = $tmp304.value;
int64_t $tmp316 = $tmp314.value;
bool $tmp317 = $tmp315 < $tmp316;
frost$core$Bit $tmp318 = (frost$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block8; else goto block9;
block9:;
frost$core$Int $tmp320 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s321, $tmp320, &$s322);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp323 = &$tmp303->data;
frost$core$Object** $tmp324 = *$tmp323;
frost$core$Int64 $tmp325 = frost$core$Int64$init$frost$core$Int($tmp304);
int64_t $tmp326 = $tmp325.value;
frost$core$Object* $tmp327 = $tmp324[$tmp326];
frost$core$Frost$ref$frost$core$Object$Q($tmp327);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:632:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn329 $tmp328 = ($fn329) ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp327))->$class->vtable[0];
frost$core$String* $tmp330 = $tmp328(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp327)));
frost$core$String* $tmp331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp300, $tmp330);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$String* $tmp332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp331, &$s333);
frost$core$MutableString$append$frost$core$String($tmp292, $tmp332);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q($tmp327);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Int $tmp334 = *(&local1);
int64_t $tmp335 = $tmp278.value;
int64_t $tmp336 = $tmp334.value;
int64_t $tmp337 = $tmp335 - $tmp336;
frost$core$Int $tmp338 = (frost$core$Int) {$tmp337};
if ($tmp280) goto block13; else goto block14;
block13:;
int64_t $tmp339 = $tmp338.value;
int64_t $tmp340 = $tmp281.value;
bool $tmp341 = $tmp339 >= $tmp340;
frost$core$Bit $tmp342 = (frost$core$Bit) {$tmp341};
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block12; else goto block2;
block14:;
int64_t $tmp344 = $tmp338.value;
int64_t $tmp345 = $tmp281.value;
bool $tmp346 = $tmp344 > $tmp345;
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block12; else goto block2;
block12:;
int64_t $tmp349 = $tmp334.value;
int64_t $tmp350 = $tmp281.value;
int64_t $tmp351 = $tmp349 + $tmp350;
frost$core$Int $tmp352 = (frost$core$Int) {$tmp351};
*(&local1) = $tmp352;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:634
frost$core$MutableString* $tmp353 = *(&local0);
frost$collections$Array** $tmp354 = &param0->blocks;
frost$collections$Array* $tmp355 = *$tmp354;
ITable* $tmp356 = ((frost$collections$CollectionView*) $tmp355)->$class->itable;
while ($tmp356->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp356 = $tmp356->next;
}
$fn358 $tmp357 = $tmp356->methods[2];
frost$core$String* $tmp359 = $tmp357(((frost$collections$CollectionView*) $tmp355), &$s360);
frost$core$MutableString$append$frost$core$String($tmp353, $tmp359);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:635
frost$core$MutableString* $tmp361 = *(&local0);
frost$core$String* $tmp362 = frost$core$MutableString$finish$R$frost$core$String($tmp361);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
frost$core$MutableString* $tmp363 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp362;

}
void org$frostlang$frostc$IR$cleanup(org$frostlang$frostc$IR* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Array** $tmp364 = &param0->locals;
frost$collections$Array* $tmp365 = *$tmp364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$collections$Array** $tmp366 = &param0->blocks;
frost$collections$Array* $tmp367 = *$tmp366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
org$frostlang$frostc$IR$Block** $tmp368 = &param0->currentBlock;
org$frostlang$frostc$IR$Block* $tmp369 = *$tmp368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
return;

}

