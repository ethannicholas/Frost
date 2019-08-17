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
#include "org/frostlang/frostc/LinkedList.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$MergeBlocks$class_type org$frostlang$frostc$pass$MergeBlocks$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$MergeBlocks$cleanup, org$frostlang$frostc$pass$MergeBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit} };

typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn63)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn93)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn106)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn110)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn125)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn156)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn161)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn169)(org$frostlang$frostc$LinkedList*, org$frostlang$frostc$LinkedList*);
typedef void (*$fn177)(org$frostlang$frostc$LinkedList*, org$frostlang$frostc$LinkedList*);
typedef void (*$fn185)(org$frostlang$frostc$LinkedList*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73", 37, -1664802375534301975, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };

frost$core$Bit org$frostlang$frostc$pass$MergeBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$MergeBlocks* param0, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
frost$collections$HashSet* local3 = NULL;
org$frostlang$frostc$IR$Block* local4 = NULL;
org$frostlang$frostc$Position local5;
org$frostlang$frostc$IR$Block$ID local6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:7
frost$core$Bit $tmp2 = (frost$core$Bit) {false};
*(&local0) = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:8
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:9
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:10
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:11
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 == $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:12
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:13
org$frostlang$frostc$IR$Block* $tmp116 = *(&local4);
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116 != NULL};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block19; else goto block20;
block20:;
frost$core$Int $tmp119 = (frost$core$Int) {13u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s120, $tmp119);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:14
org$frostlang$frostc$IR$Block* $tmp121 = *(&local4);
org$frostlang$frostc$LinkedList** $tmp122 = &$tmp121->statements;
org$frostlang$frostc$LinkedList* $tmp123 = *$tmp122;
$fn125 $tmp124 = ($fn125) $tmp123->$class->vtable[6];
frost$core$Object* $tmp126 = $tmp124($tmp123);
frost$core$Int* $tmp127 = &((org$frostlang$frostc$IR$Statement*) $tmp126)->$rawValue;
frost$core$Int $tmp128 = *$tmp127;
frost$core$Int $tmp129 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MergeBlocks.frost:15:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129.value;
bool $tmp132 = $tmp130 == $tmp131;
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132};
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block22; else goto block21;
block22:;
org$frostlang$frostc$Position* $tmp135 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp126)->$data + 0);
org$frostlang$frostc$Position $tmp136 = *$tmp135;
*(&local5) = $tmp136;
org$frostlang$frostc$IR$Block$ID* $tmp137 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp126)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp138 = *$tmp137;
*(&local6) = $tmp138;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:16
org$frostlang$frostc$IR$Block$ID $tmp139 = *(&local6);
org$frostlang$frostc$IR$Block* $tmp140 = *(&local2);
org$frostlang$frostc$IR$Block$ID* $tmp141 = &$tmp140->id;
org$frostlang$frostc$IR$Block$ID $tmp142 = *$tmp141;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from MergeBlocks.frost:16:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int $tmp143 = $tmp139.value;
frost$core$Int $tmp144 = $tmp142.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp145 = $tmp143.value;
int64_t $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 == $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block26; else goto block27;
block27:;
frost$core$Int $tmp150 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s151, $tmp150);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:17
org$frostlang$frostc$IR$Block* $tmp152 = *(&local4);
org$frostlang$frostc$LinkedList** $tmp153 = &$tmp152->statements;
org$frostlang$frostc$LinkedList* $tmp154 = *$tmp153;
$fn156 $tmp155 = ($fn156) $tmp154->$class->vtable[7];
$tmp155($tmp154);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:18
org$frostlang$frostc$IR$Block* $tmp157 = *(&local4);
org$frostlang$frostc$LinkedList** $tmp158 = &$tmp157->ids;
org$frostlang$frostc$LinkedList* $tmp159 = *$tmp158;
$fn161 $tmp160 = ($fn161) $tmp159->$class->vtable[7];
$tmp160($tmp159);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:19
org$frostlang$frostc$IR$Block* $tmp162 = *(&local4);
org$frostlang$frostc$LinkedList** $tmp163 = &$tmp162->statements;
org$frostlang$frostc$LinkedList* $tmp164 = *$tmp163;
org$frostlang$frostc$IR$Block* $tmp165 = *(&local2);
org$frostlang$frostc$LinkedList** $tmp166 = &$tmp165->statements;
org$frostlang$frostc$LinkedList* $tmp167 = *$tmp166;
$fn169 $tmp168 = ($fn169) $tmp164->$class->vtable[5];
$tmp168($tmp164, $tmp167);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:20
org$frostlang$frostc$IR$Block* $tmp170 = *(&local4);
org$frostlang$frostc$LinkedList** $tmp171 = &$tmp170->ids;
org$frostlang$frostc$LinkedList* $tmp172 = *$tmp171;
org$frostlang$frostc$IR$Block* $tmp173 = *(&local2);
org$frostlang$frostc$LinkedList** $tmp174 = &$tmp173->ids;
org$frostlang$frostc$LinkedList* $tmp175 = *$tmp174;
$fn177 $tmp176 = ($fn177) $tmp172->$class->vtable[5];
$tmp176($tmp172, $tmp175);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:21
org$frostlang$frostc$IR$Block* $tmp178 = *(&local2);
org$frostlang$frostc$LinkedList** $tmp179 = &$tmp178->statements;
org$frostlang$frostc$LinkedList* $tmp180 = *$tmp179;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp181 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp182 = (frost$core$Int) {28u};
org$frostlang$frostc$Position $tmp183 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position($tmp181, $tmp182, $tmp183);
$fn185 $tmp184 = ($fn185) $tmp180->$class->vtable[4];
$tmp184($tmp180, ((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:22
frost$core$Bit $tmp186 = (frost$core$Bit) {true};
*(&local0) = $tmp186;
goto block21;
block21:;
frost$core$Frost$unref$frost$core$Object$Q($tmp126);
org$frostlang$frostc$IR$Block* $tmp187 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block16;
block16:;
frost$collections$HashSet* $tmp188 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local3) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$IR$Block* $tmp189 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Int $tmp190 = *(&local1);
if ($tmp31) goto block29; else goto block30;
block29:;
int64_t $tmp191 = $tmp19.value;
int64_t $tmp192 = $tmp190.value;
int64_t $tmp193 = $tmp191 - $tmp192;
frost$core$Int $tmp194 = (frost$core$Int) {$tmp193};
if ($tmp25) goto block31; else goto block32;
block31:;
int64_t $tmp195 = $tmp194.value;
int64_t $tmp196 = $tmp20.value;
bool $tmp197 = $tmp195 >= $tmp196;
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block28; else goto block3;
block32:;
int64_t $tmp200 = $tmp194.value;
int64_t $tmp201 = $tmp20.value;
bool $tmp202 = $tmp200 > $tmp201;
frost$core$Bit $tmp203 = (frost$core$Bit) {$tmp202};
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block28; else goto block3;
block30:;
int64_t $tmp205 = $tmp190.value;
int64_t $tmp206 = $tmp19.value;
int64_t $tmp207 = $tmp205 - $tmp206;
frost$core$Int $tmp208 = (frost$core$Int) {$tmp207};
if ($tmp25) goto block33; else goto block34;
block33:;
int64_t $tmp209 = $tmp208.value;
int64_t $tmp210 = $tmp23.value;
bool $tmp211 = $tmp209 >= $tmp210;
frost$core$Bit $tmp212 = (frost$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block28; else goto block3;
block34:;
int64_t $tmp214 = $tmp208.value;
int64_t $tmp215 = $tmp23.value;
bool $tmp216 = $tmp214 > $tmp215;
frost$core$Bit $tmp217 = (frost$core$Bit) {$tmp216};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block28; else goto block3;
block28:;
int64_t $tmp219 = $tmp190.value;
int64_t $tmp220 = $tmp20.value;
int64_t $tmp221 = $tmp219 + $tmp220;
frost$core$Int $tmp222 = (frost$core$Int) {$tmp221};
*(&local1) = $tmp222;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:27
frost$core$Bit $tmp223 = *(&local0);
return $tmp223;

}
void org$frostlang$frostc$pass$MergeBlocks$init(org$frostlang$frostc$pass$MergeBlocks* param0) {

return;

}
void org$frostlang$frostc$pass$MergeBlocks$cleanup(org$frostlang$frostc$pass$MergeBlocks* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

