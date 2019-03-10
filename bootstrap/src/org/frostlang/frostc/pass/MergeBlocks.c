#include "org/frostlang/frostc/pass/MergeBlocks.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/pass/Analyzer.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/pass/Analyzer/BlockExit.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$MergeBlocks$class_type org$frostlang$frostc$pass$MergeBlocks$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$MergeBlocks$cleanup, org$frostlang$frostc$pass$MergeBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit} };

typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn63)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn93)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn106)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn110)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn126)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn145)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73", 37, -1664802375534301975, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };

frost$core$Bit org$frostlang$frostc$pass$MergeBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$MergeBlocks* param0, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
frost$collections$HashSet* local3 = NULL;
org$frostlang$frostc$IR$Block* local4 = NULL;
frost$core$Int local5;
org$frostlang$frostc$Position local6;
org$frostlang$frostc$IR$Block$ID local7;
frost$core$Int local8;
frost$core$Int local9;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:7
frost$core$Bit $tmp2 = (frost$core$Bit) {false};
*(&local0) = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:8
frost$collections$Array** $tmp3 = &param1->blocks;
frost$collections$Array* $tmp4 = *$tmp3;
ITable* $tmp5 = ((frost$collections$CollectionView*) $tmp4)->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5 = $tmp5->next;
}
$fn7 $tmp6 = $tmp5->methods[0];
frost$core$Int $tmp8 = $tmp6(((frost$collections$CollectionView*) $tmp4));
frost$core$Int $tmp9 = (frost$core$Int) {1u};
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9.value;
int64_t $tmp12 = $tmp10 - $tmp11;
frost$core$Int $tmp13 = (frost$core$Int) {$tmp12};
frost$core$Int $tmp14 = (frost$core$Int) {0u};
frost$core$Int $tmp15 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp16 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp17 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp13, $tmp14, $tmp15, $tmp16);
frost$core$Int $tmp18 = $tmp17.start;
*(&local1) = $tmp18;
frost$core$Int $tmp19 = $tmp17.end;
frost$core$Int $tmp20 = $tmp17.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from MergeBlocks.frost:8:9
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:120
int64_t $tmp21 = $tmp20.value;
int64_t $tmp22 = -$tmp21;
frost$core$Int $tmp23 = (frost$core$Int) {$tmp22};
frost$core$Bit $tmp24 = $tmp17.inclusive;
bool $tmp25 = $tmp24.value;
frost$core$Int $tmp26 = (frost$core$Int) {0u};
int64_t $tmp27 = $tmp20.value;
int64_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 >= $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block5; else goto block6;
block5:;
if ($tmp25) goto block7; else goto block8;
block7:;
int64_t $tmp32 = $tmp18.value;
int64_t $tmp33 = $tmp19.value;
bool $tmp34 = $tmp32 <= $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block2; else goto block3;
block8:;
int64_t $tmp37 = $tmp18.value;
int64_t $tmp38 = $tmp19.value;
bool $tmp39 = $tmp37 < $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block2; else goto block3;
block6:;
if ($tmp25) goto block9; else goto block10;
block9:;
int64_t $tmp42 = $tmp18.value;
int64_t $tmp43 = $tmp19.value;
bool $tmp44 = $tmp42 >= $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block2; else goto block3;
block10:;
int64_t $tmp47 = $tmp18.value;
int64_t $tmp48 = $tmp19.value;
bool $tmp49 = $tmp47 > $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:9
frost$collections$Array** $tmp52 = &param1->blocks;
frost$collections$Array* $tmp53 = *$tmp52;
frost$core$Int $tmp54 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MergeBlocks.frost:9:31
frost$core$Int $tmp55 = (frost$core$Int) {0u};
int64_t $tmp56 = $tmp54.value;
int64_t $tmp57 = $tmp55.value;
bool $tmp58 = $tmp56 >= $tmp57;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block14; else goto block13;
block14:;
ITable* $tmp61 = ((frost$collections$CollectionView*) $tmp53)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[0];
frost$core$Int $tmp64 = $tmp62(((frost$collections$CollectionView*) $tmp53));
int64_t $tmp65 = $tmp54.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 < $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block12; else goto block13;
block13:;
frost$core$Int $tmp70 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp73 = &$tmp53->data;
frost$core$Object** $tmp74 = *$tmp73;
frost$core$Int64 $tmp75 = frost$core$Int64$init$frost$core$Int($tmp54);
int64_t $tmp76 = $tmp75.value;
frost$core$Object* $tmp77 = $tmp74[$tmp76];
frost$core$Frost$ref$frost$core$Object$Q($tmp77);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp77)));
org$frostlang$frostc$IR$Block* $tmp78 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local2) = ((org$frostlang$frostc$IR$Block*) $tmp77);
frost$core$Frost$unref$frost$core$Object$Q($tmp77);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:10
frost$collections$HashMap** $tmp79 = &param2->predecessors;
frost$collections$HashMap* $tmp80 = *$tmp79;
org$frostlang$frostc$IR$Block* $tmp81 = *(&local2);
org$frostlang$frostc$IR$Block$ID* $tmp82 = &$tmp81->id;
org$frostlang$frostc$IR$Block$ID $tmp83 = *$tmp82;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp84;
$tmp84 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp84->value = $tmp83;
frost$core$Object* $tmp85 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp80, ((frost$collections$Key*) $tmp84));
*(&local3) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp85)));
frost$collections$HashSet* $tmp86 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local3) = ((frost$collections$HashSet*) $tmp85);
frost$core$Frost$unref$frost$core$Object$Q($tmp85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp84)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:11
frost$collections$HashSet* $tmp87 = *(&local3);
frost$core$Bit $tmp88 = (frost$core$Bit) {$tmp87 != NULL};
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block17; else goto block16;
block17:;
frost$collections$HashSet* $tmp90 = *(&local3);
ITable* $tmp91 = ((frost$collections$CollectionView*) $tmp90)->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
frost$core$Int $tmp94 = $tmp92(((frost$collections$CollectionView*) $tmp90));
frost$core$Int $tmp95 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MergeBlocks.frost:11:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 == $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:12
frost$collections$HashMap** $tmp101 = &param2->blocks;
frost$collections$HashMap* $tmp102 = *$tmp101;
frost$collections$HashSet* $tmp103 = *(&local3);
ITable* $tmp104 = ((frost$collections$Iterable*) $tmp103)->$class->itable;
while ($tmp104->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp104 = $tmp104->next;
}
$fn106 $tmp105 = $tmp104->methods[0];
frost$collections$Iterator* $tmp107 = $tmp105(((frost$collections$Iterable*) $tmp103));
ITable* $tmp108 = $tmp107->$class->itable;
while ($tmp108->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp108 = $tmp108->next;
}
$fn110 $tmp109 = $tmp108->methods[1];
frost$core$Object* $tmp111 = $tmp109($tmp107);
org$frostlang$frostc$IR$Block$ID $tmp112 = ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp111)->value.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp113;
$tmp113 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp113->value = $tmp112;
frost$core$Object* $tmp114 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp102, ((frost$collections$Key*) $tmp113));
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp114)));
org$frostlang$frostc$IR$Block* $tmp115 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local4) = ((org$frostlang$frostc$IR$Block*) $tmp114);
frost$core$Frost$unref$frost$core$Object$Q($tmp114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp113)));
frost$core$Frost$unref$frost$core$Object$Q($tmp111);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:13
org$frostlang$frostc$IR$Block* $tmp116 = *(&local4);
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116 != NULL};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block19; else goto block20;
block20:;
frost$core$Int $tmp119 = (frost$core$Int) {13u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s120, $tmp119);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:14
org$frostlang$frostc$IR$Block* $tmp121 = *(&local4);
frost$collections$Array** $tmp122 = &$tmp121->statements;
frost$collections$Array* $tmp123 = *$tmp122;
ITable* $tmp124 = ((frost$collections$CollectionView*) $tmp123)->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[0];
frost$core$Int $tmp127 = $tmp125(((frost$collections$CollectionView*) $tmp123));
frost$core$Int $tmp128 = (frost$core$Int) {1u};
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129 - $tmp130;
frost$core$Int $tmp132 = (frost$core$Int) {$tmp131};
*(&local5) = $tmp132;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:15
org$frostlang$frostc$IR$Block* $tmp133 = *(&local4);
frost$collections$Array** $tmp134 = &$tmp133->statements;
frost$collections$Array* $tmp135 = *$tmp134;
frost$core$Int $tmp136 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MergeBlocks.frost:15:35
frost$core$Int $tmp137 = (frost$core$Int) {0u};
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137.value;
bool $tmp140 = $tmp138 >= $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block24; else goto block23;
block24:;
ITable* $tmp143 = ((frost$collections$CollectionView*) $tmp135)->$class->itable;
while ($tmp143->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp143 = $tmp143->next;
}
$fn145 $tmp144 = $tmp143->methods[0];
frost$core$Int $tmp146 = $tmp144(((frost$collections$CollectionView*) $tmp135));
int64_t $tmp147 = $tmp136.value;
int64_t $tmp148 = $tmp146.value;
bool $tmp149 = $tmp147 < $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block22; else goto block23;
block23:;
frost$core$Int $tmp152 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s153, $tmp152, &$s154);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp155 = &$tmp135->data;
frost$core$Object** $tmp156 = *$tmp155;
frost$core$Int64 $tmp157 = frost$core$Int64$init$frost$core$Int($tmp136);
int64_t $tmp158 = $tmp157.value;
frost$core$Object* $tmp159 = $tmp156[$tmp158];
frost$core$Frost$ref$frost$core$Object$Q($tmp159);
frost$core$Int64* $tmp160 = &((org$frostlang$frostc$IR$Statement*) $tmp159)->$rawValue;
frost$core$Int64 $tmp161 = *$tmp160;
frost$core$Int64 $tmp162 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MergeBlocks.frost:16:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp163 = $tmp161.value;
int64_t $tmp164 = $tmp162.value;
bool $tmp165 = $tmp163 == $tmp164;
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block26; else goto block25;
block26:;
org$frostlang$frostc$Position* $tmp168 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp159)->$data + 0);
org$frostlang$frostc$Position $tmp169 = *$tmp168;
*(&local6) = $tmp169;
org$frostlang$frostc$IR$Block$ID* $tmp170 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp159)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp171 = *$tmp170;
*(&local7) = $tmp171;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:17
org$frostlang$frostc$IR$Block$ID $tmp172 = *(&local7);
org$frostlang$frostc$IR$Block* $tmp173 = *(&local2);
org$frostlang$frostc$IR$Block$ID* $tmp174 = &$tmp173->id;
org$frostlang$frostc$IR$Block$ID $tmp175 = *$tmp174;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from MergeBlocks.frost:17:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp176 = $tmp172.value;
frost$core$Int $tmp177 = $tmp175.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp178 = $tmp176.value;
int64_t $tmp179 = $tmp177.value;
bool $tmp180 = $tmp178 == $tmp179;
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block30; else goto block31;
block31:;
frost$core$Int $tmp183 = (frost$core$Int) {17u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s184, $tmp183);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:18
org$frostlang$frostc$IR$Block* $tmp185 = *(&local4);
frost$collections$Array** $tmp186 = &$tmp185->statements;
frost$collections$Array* $tmp187 = *$tmp186;
frost$core$Int $tmp188 = *(&local5);
frost$core$Object* $tmp189 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp187, $tmp188);
frost$core$Frost$unref$frost$core$Object$Q($tmp189);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:19
org$frostlang$frostc$IR$Block* $tmp190 = *(&local4);
frost$collections$Array** $tmp191 = &$tmp190->ids;
frost$collections$Array* $tmp192 = *$tmp191;
frost$core$Int $tmp193 = *(&local5);
frost$core$Object* $tmp194 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp192, $tmp193);
frost$core$Frost$unref$frost$core$Object$Q($tmp194);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:20
org$frostlang$frostc$IR$Block* $tmp195 = *(&local4);
frost$collections$Array** $tmp196 = &$tmp195->statements;
frost$collections$Array* $tmp197 = *$tmp196;
org$frostlang$frostc$IR$Block* $tmp198 = *(&local2);
frost$collections$Array** $tmp199 = &$tmp198->statements;
frost$collections$Array* $tmp200 = *$tmp199;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp197, ((frost$collections$CollectionView*) $tmp200));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:21
org$frostlang$frostc$IR$Block* $tmp201 = *(&local4);
frost$collections$Array** $tmp202 = &$tmp201->ids;
frost$collections$Array* $tmp203 = *$tmp202;
org$frostlang$frostc$IR$Block* $tmp204 = *(&local2);
frost$collections$Array** $tmp205 = &$tmp204->ids;
frost$collections$Array* $tmp206 = *$tmp205;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp203, ((frost$collections$CollectionView*) $tmp206));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:22
org$frostlang$frostc$IR$Block* $tmp207 = *(&local2);
frost$collections$Array** $tmp208 = &$tmp207->statements;
frost$collections$Array* $tmp209 = *$tmp208;
// begin inline call to method frost.collections.Array.clear() from MergeBlocks.frost:22:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:139
frost$core$Int $tmp210 = (frost$core$Int) {0u};
frost$core$Int* $tmp211 = &$tmp209->_count;
*$tmp211 = $tmp210;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:140
frost$core$Int $tmp212 = (frost$core$Int) {0u};
frost$core$Int* $tmp213 = &$tmp209->capacity;
frost$core$Int $tmp214 = *$tmp213;
frost$core$Bit $tmp215 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp216 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp212, $tmp214, $tmp215);
frost$core$Int $tmp217 = $tmp216.min;
*(&local8) = $tmp217;
frost$core$Int $tmp218 = $tmp216.max;
frost$core$Bit $tmp219 = $tmp216.inclusive;
bool $tmp220 = $tmp219.value;
frost$core$Int $tmp221 = (frost$core$Int) {1u};
if ($tmp220) goto block36; else goto block37;
block36:;
int64_t $tmp222 = $tmp217.value;
int64_t $tmp223 = $tmp218.value;
bool $tmp224 = $tmp222 <= $tmp223;
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block33; else goto block34;
block37:;
int64_t $tmp227 = $tmp217.value;
int64_t $tmp228 = $tmp218.value;
bool $tmp229 = $tmp227 < $tmp228;
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp232 = &$tmp209->data;
frost$core$Object** $tmp233 = *$tmp232;
frost$core$Int $tmp234 = *(&local8);
frost$core$Int64 $tmp235 = frost$core$Int64$init$frost$core$Int($tmp234);
int64_t $tmp236 = $tmp235.value;
frost$core$Object* $tmp237 = $tmp233[$tmp236];
frost$core$Frost$unref$frost$core$Object$Q($tmp237);
$tmp233[$tmp236] = ((frost$core$Object*) NULL);
frost$core$Int $tmp238 = *(&local8);
int64_t $tmp239 = $tmp218.value;
int64_t $tmp240 = $tmp238.value;
int64_t $tmp241 = $tmp239 - $tmp240;
frost$core$Int $tmp242 = (frost$core$Int) {$tmp241};
if ($tmp220) goto block39; else goto block40;
block39:;
int64_t $tmp243 = $tmp242.value;
int64_t $tmp244 = $tmp221.value;
bool $tmp245 = $tmp243 >= $tmp244;
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block38; else goto block34;
block40:;
int64_t $tmp248 = $tmp242.value;
int64_t $tmp249 = $tmp221.value;
bool $tmp250 = $tmp248 > $tmp249;
frost$core$Bit $tmp251 = (frost$core$Bit) {$tmp250};
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block38; else goto block34;
block38:;
int64_t $tmp253 = $tmp238.value;
int64_t $tmp254 = $tmp221.value;
int64_t $tmp255 = $tmp253 + $tmp254;
frost$core$Int $tmp256 = (frost$core$Int) {$tmp255};
*(&local8) = $tmp256;
goto block33;
block34:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:23
org$frostlang$frostc$IR$Block* $tmp257 = *(&local2);
frost$collections$Array** $tmp258 = &$tmp257->ids;
frost$collections$Array* $tmp259 = *$tmp258;
// begin inline call to method frost.collections.Array.clear() from MergeBlocks.frost:23:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:139
frost$core$Int $tmp260 = (frost$core$Int) {0u};
frost$core$Int* $tmp261 = &$tmp259->_count;
*$tmp261 = $tmp260;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:140
frost$core$Int $tmp262 = (frost$core$Int) {0u};
frost$core$Int* $tmp263 = &$tmp259->capacity;
frost$core$Int $tmp264 = *$tmp263;
frost$core$Bit $tmp265 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp266 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp262, $tmp264, $tmp265);
frost$core$Int $tmp267 = $tmp266.min;
*(&local9) = $tmp267;
frost$core$Int $tmp268 = $tmp266.max;
frost$core$Bit $tmp269 = $tmp266.inclusive;
bool $tmp270 = $tmp269.value;
frost$core$Int $tmp271 = (frost$core$Int) {1u};
if ($tmp270) goto block45; else goto block46;
block45:;
int64_t $tmp272 = $tmp267.value;
int64_t $tmp273 = $tmp268.value;
bool $tmp274 = $tmp272 <= $tmp273;
frost$core$Bit $tmp275 = (frost$core$Bit) {$tmp274};
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block42; else goto block43;
block46:;
int64_t $tmp277 = $tmp267.value;
int64_t $tmp278 = $tmp268.value;
bool $tmp279 = $tmp277 < $tmp278;
frost$core$Bit $tmp280 = (frost$core$Bit) {$tmp279};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp282 = &$tmp259->data;
frost$core$Object** $tmp283 = *$tmp282;
frost$core$Int $tmp284 = *(&local9);
frost$core$Int64 $tmp285 = frost$core$Int64$init$frost$core$Int($tmp284);
int64_t $tmp286 = $tmp285.value;
frost$core$Object* $tmp287 = $tmp283[$tmp286];
frost$core$Frost$unref$frost$core$Object$Q($tmp287);
$tmp283[$tmp286] = ((frost$core$Object*) NULL);
frost$core$Int $tmp288 = *(&local9);
int64_t $tmp289 = $tmp268.value;
int64_t $tmp290 = $tmp288.value;
int64_t $tmp291 = $tmp289 - $tmp290;
frost$core$Int $tmp292 = (frost$core$Int) {$tmp291};
if ($tmp270) goto block48; else goto block49;
block48:;
int64_t $tmp293 = $tmp292.value;
int64_t $tmp294 = $tmp271.value;
bool $tmp295 = $tmp293 >= $tmp294;
frost$core$Bit $tmp296 = (frost$core$Bit) {$tmp295};
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block47; else goto block43;
block49:;
int64_t $tmp298 = $tmp292.value;
int64_t $tmp299 = $tmp271.value;
bool $tmp300 = $tmp298 > $tmp299;
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block47; else goto block43;
block47:;
int64_t $tmp303 = $tmp288.value;
int64_t $tmp304 = $tmp271.value;
int64_t $tmp305 = $tmp303 + $tmp304;
frost$core$Int $tmp306 = (frost$core$Int) {$tmp305};
*(&local9) = $tmp306;
goto block42;
block43:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:24
org$frostlang$frostc$IR$Block* $tmp307 = *(&local2);
frost$collections$Array** $tmp308 = &$tmp307->statements;
frost$collections$Array* $tmp309 = *$tmp308;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp310 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp311 = (frost$core$Int64) {28u};
org$frostlang$frostc$Position $tmp312 = *(&local6);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position($tmp310, $tmp311, $tmp312);
frost$collections$Array$add$frost$collections$Array$T($tmp309, ((frost$core$Object*) $tmp310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:25
frost$core$Bit $tmp313 = (frost$core$Bit) {true};
*(&local0) = $tmp313;
goto block25;
block25:;
frost$core$Frost$unref$frost$core$Object$Q($tmp159);
org$frostlang$frostc$IR$Block* $tmp314 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block16;
block16:;
frost$collections$HashSet* $tmp315 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local3) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$IR$Block* $tmp316 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Int $tmp317 = *(&local1);
if ($tmp31) goto block51; else goto block52;
block51:;
int64_t $tmp318 = $tmp19.value;
int64_t $tmp319 = $tmp317.value;
int64_t $tmp320 = $tmp318 - $tmp319;
frost$core$Int $tmp321 = (frost$core$Int) {$tmp320};
if ($tmp25) goto block53; else goto block54;
block53:;
int64_t $tmp322 = $tmp321.value;
int64_t $tmp323 = $tmp20.value;
bool $tmp324 = $tmp322 >= $tmp323;
frost$core$Bit $tmp325 = (frost$core$Bit) {$tmp324};
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block50; else goto block3;
block54:;
int64_t $tmp327 = $tmp321.value;
int64_t $tmp328 = $tmp20.value;
bool $tmp329 = $tmp327 > $tmp328;
frost$core$Bit $tmp330 = (frost$core$Bit) {$tmp329};
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block50; else goto block3;
block52:;
int64_t $tmp332 = $tmp317.value;
int64_t $tmp333 = $tmp19.value;
int64_t $tmp334 = $tmp332 - $tmp333;
frost$core$Int $tmp335 = (frost$core$Int) {$tmp334};
if ($tmp25) goto block55; else goto block56;
block55:;
int64_t $tmp336 = $tmp335.value;
int64_t $tmp337 = $tmp23.value;
bool $tmp338 = $tmp336 >= $tmp337;
frost$core$Bit $tmp339 = (frost$core$Bit) {$tmp338};
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block50; else goto block3;
block56:;
int64_t $tmp341 = $tmp335.value;
int64_t $tmp342 = $tmp23.value;
bool $tmp343 = $tmp341 > $tmp342;
frost$core$Bit $tmp344 = (frost$core$Bit) {$tmp343};
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block50; else goto block3;
block50:;
int64_t $tmp346 = $tmp317.value;
int64_t $tmp347 = $tmp20.value;
int64_t $tmp348 = $tmp346 + $tmp347;
frost$core$Int $tmp349 = (frost$core$Int) {$tmp348};
*(&local1) = $tmp349;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:30
frost$core$Bit $tmp350 = *(&local0);
return $tmp350;

}
void org$frostlang$frostc$pass$MergeBlocks$init(org$frostlang$frostc$pass$MergeBlocks* param0) {

return;

}
void org$frostlang$frostc$pass$MergeBlocks$cleanup(org$frostlang$frostc$pass$MergeBlocks* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

