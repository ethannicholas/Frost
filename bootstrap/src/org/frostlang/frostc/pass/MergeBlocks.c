#include "org/frostlang/frostc/pass/MergeBlocks.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/pass/Analyzer.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/pass/Analyzer/BlockExit.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$MergeBlocks$class_type org$frostlang$frostc$pass$MergeBlocks$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$MergeBlocks$cleanup, org$frostlang$frostc$pass$MergeBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit} };

typedef frost$core$Int64 (*$fn7)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn67)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn96)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn109)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn113)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn129)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn148)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73", 37, -1664802375534301975, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };

frost$core$Bit org$frostlang$frostc$pass$MergeBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$MergeBlocks* param0, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {

frost$core$Bit local0;
frost$core$Int64 local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
frost$collections$HashSet* local3 = NULL;
org$frostlang$frostc$IR$Block* local4 = NULL;
frost$core$Int64 local5;
org$frostlang$frostc$Position local6;
org$frostlang$frostc$IR$Block$ID local7;
frost$core$Int64 local8;
frost$core$Int64 local9;
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
frost$core$Int64 $tmp8 = $tmp6(((frost$collections$CollectionView*) $tmp4));
frost$core$Int64 $tmp9 = (frost$core$Int64) {1u};
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9.value;
int64_t $tmp12 = $tmp10 - $tmp11;
frost$core$Int64 $tmp13 = (frost$core$Int64) {$tmp12};
frost$core$Int64 $tmp14 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp15 = (frost$core$Int64) {18446744073709551615u};
frost$core$Bit $tmp16 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp17 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp13, $tmp14, $tmp15, $tmp16);
frost$core$Int64 $tmp18 = $tmp17.start;
*(&local1) = $tmp18;
frost$core$Int64 $tmp19 = $tmp17.end;
frost$core$Int64 $tmp20 = $tmp17.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp21 = $tmp20.value;
frost$core$UInt64 $tmp22 = (frost$core$UInt64) {((uint64_t) $tmp21)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from MergeBlocks.frost:8:9
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:84
int64_t $tmp23 = $tmp20.value;
int64_t $tmp24 = -$tmp23;
frost$core$Int64 $tmp25 = (frost$core$Int64) {$tmp24};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp26 = $tmp25.value;
frost$core$UInt64 $tmp27 = (frost$core$UInt64) {((uint64_t) $tmp26)};
frost$core$Bit $tmp28 = $tmp17.inclusive;
bool $tmp29 = $tmp28.value;
frost$core$Int64 $tmp30 = (frost$core$Int64) {0u};
int64_t $tmp31 = $tmp20.value;
int64_t $tmp32 = $tmp30.value;
bool $tmp33 = $tmp31 >= $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block7; else goto block8;
block7:;
if ($tmp29) goto block9; else goto block10;
block9:;
int64_t $tmp36 = $tmp18.value;
int64_t $tmp37 = $tmp19.value;
bool $tmp38 = $tmp36 <= $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block4; else goto block5;
block10:;
int64_t $tmp41 = $tmp18.value;
int64_t $tmp42 = $tmp19.value;
bool $tmp43 = $tmp41 < $tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block4; else goto block5;
block8:;
if ($tmp29) goto block11; else goto block12;
block11:;
int64_t $tmp46 = $tmp18.value;
int64_t $tmp47 = $tmp19.value;
bool $tmp48 = $tmp46 >= $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block4; else goto block5;
block12:;
int64_t $tmp51 = $tmp18.value;
int64_t $tmp52 = $tmp19.value;
bool $tmp53 = $tmp51 > $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:9
frost$collections$Array** $tmp56 = &param1->blocks;
frost$collections$Array* $tmp57 = *$tmp56;
frost$core$Int64 $tmp58 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from MergeBlocks.frost:9:31
frost$core$Int64 $tmp59 = (frost$core$Int64) {0u};
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59.value;
bool $tmp62 = $tmp60 >= $tmp61;
frost$core$Bit $tmp63 = (frost$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block16; else goto block15;
block16:;
ITable* $tmp65 = ((frost$collections$CollectionView*) $tmp57)->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp65 = $tmp65->next;
}
$fn67 $tmp66 = $tmp65->methods[0];
frost$core$Int64 $tmp68 = $tmp66(((frost$collections$CollectionView*) $tmp57));
int64_t $tmp69 = $tmp58.value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 < $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp74 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s75, $tmp74, &$s76);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp77 = &$tmp57->data;
frost$core$Object** $tmp78 = *$tmp77;
int64_t $tmp79 = $tmp58.value;
frost$core$Object* $tmp80 = $tmp78[$tmp79];
frost$core$Frost$ref$frost$core$Object$Q($tmp80);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp80)));
org$frostlang$frostc$IR$Block* $tmp81 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local2) = ((org$frostlang$frostc$IR$Block*) $tmp80);
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:10
frost$collections$HashMap** $tmp82 = &param2->predecessors;
frost$collections$HashMap* $tmp83 = *$tmp82;
org$frostlang$frostc$IR$Block* $tmp84 = *(&local2);
org$frostlang$frostc$IR$Block$ID* $tmp85 = &$tmp84->id;
org$frostlang$frostc$IR$Block$ID $tmp86 = *$tmp85;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp87;
$tmp87 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp87->value = $tmp86;
frost$core$Object* $tmp88 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp83, ((frost$collections$Key*) $tmp87));
*(&local3) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp88)));
frost$collections$HashSet* $tmp89 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local3) = ((frost$collections$HashSet*) $tmp88);
frost$core$Frost$unref$frost$core$Object$Q($tmp88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp87)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:11
frost$collections$HashSet* $tmp90 = *(&local3);
frost$core$Bit $tmp91 = (frost$core$Bit) {$tmp90 != NULL};
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block19; else goto block18;
block19:;
frost$collections$HashSet* $tmp93 = *(&local3);
ITable* $tmp94 = ((frost$collections$CollectionView*) $tmp93)->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[0];
frost$core$Int64 $tmp97 = $tmp95(((frost$collections$CollectionView*) $tmp93));
frost$core$Int64 $tmp98 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MergeBlocks.frost:11:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp99 = $tmp97.value;
int64_t $tmp100 = $tmp98.value;
bool $tmp101 = $tmp99 == $tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:12
frost$collections$HashMap** $tmp104 = &param2->blocks;
frost$collections$HashMap* $tmp105 = *$tmp104;
frost$collections$HashSet* $tmp106 = *(&local3);
ITable* $tmp107 = ((frost$collections$Iterable*) $tmp106)->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$collections$Iterator* $tmp110 = $tmp108(((frost$collections$Iterable*) $tmp106));
ITable* $tmp111 = $tmp110->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[1];
frost$core$Object* $tmp114 = $tmp112($tmp110);
org$frostlang$frostc$IR$Block$ID $tmp115 = ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) $tmp114)->value.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp116;
$tmp116 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp116->value = $tmp115;
frost$core$Object* $tmp117 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp105, ((frost$collections$Key*) $tmp116));
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp117)));
org$frostlang$frostc$IR$Block* $tmp118 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local4) = ((org$frostlang$frostc$IR$Block*) $tmp117);
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp116)));
frost$core$Frost$unref$frost$core$Object$Q($tmp114);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:13
org$frostlang$frostc$IR$Block* $tmp119 = *(&local4);
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119 != NULL};
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp122 = (frost$core$Int64) {13u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s123, $tmp122);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:14
org$frostlang$frostc$IR$Block* $tmp124 = *(&local4);
frost$collections$Array** $tmp125 = &$tmp124->statements;
frost$collections$Array* $tmp126 = *$tmp125;
ITable* $tmp127 = ((frost$collections$CollectionView*) $tmp126)->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[0];
frost$core$Int64 $tmp130 = $tmp128(((frost$collections$CollectionView*) $tmp126));
frost$core$Int64 $tmp131 = (frost$core$Int64) {1u};
int64_t $tmp132 = $tmp130.value;
int64_t $tmp133 = $tmp131.value;
int64_t $tmp134 = $tmp132 - $tmp133;
frost$core$Int64 $tmp135 = (frost$core$Int64) {$tmp134};
*(&local5) = $tmp135;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:15
org$frostlang$frostc$IR$Block* $tmp136 = *(&local4);
frost$collections$Array** $tmp137 = &$tmp136->statements;
frost$collections$Array* $tmp138 = *$tmp137;
frost$core$Int64 $tmp139 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from MergeBlocks.frost:15:35
frost$core$Int64 $tmp140 = (frost$core$Int64) {0u};
int64_t $tmp141 = $tmp139.value;
int64_t $tmp142 = $tmp140.value;
bool $tmp143 = $tmp141 >= $tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block26; else goto block25;
block26:;
ITable* $tmp146 = ((frost$collections$CollectionView*) $tmp138)->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
frost$core$Int64 $tmp149 = $tmp147(((frost$collections$CollectionView*) $tmp138));
int64_t $tmp150 = $tmp139.value;
int64_t $tmp151 = $tmp149.value;
bool $tmp152 = $tmp150 < $tmp151;
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152};
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s156, $tmp155, &$s157);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp158 = &$tmp138->data;
frost$core$Object** $tmp159 = *$tmp158;
int64_t $tmp160 = $tmp139.value;
frost$core$Object* $tmp161 = $tmp159[$tmp160];
frost$core$Frost$ref$frost$core$Object$Q($tmp161);
frost$core$Int64* $tmp162 = &((org$frostlang$frostc$IR$Statement*) $tmp161)->$rawValue;
frost$core$Int64 $tmp163 = *$tmp162;
frost$core$Int64 $tmp164 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MergeBlocks.frost:16:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp165 = $tmp163.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 == $tmp166;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block28; else goto block27;
block28:;
org$frostlang$frostc$Position* $tmp170 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp161)->$data + 0);
org$frostlang$frostc$Position $tmp171 = *$tmp170;
*(&local6) = $tmp171;
org$frostlang$frostc$IR$Block$ID* $tmp172 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp161)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp173 = *$tmp172;
*(&local7) = $tmp173;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:17
org$frostlang$frostc$IR$Block$ID $tmp174 = *(&local7);
org$frostlang$frostc$IR$Block* $tmp175 = *(&local2);
org$frostlang$frostc$IR$Block$ID* $tmp176 = &$tmp175->id;
org$frostlang$frostc$IR$Block$ID $tmp177 = *$tmp176;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from MergeBlocks.frost:17:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/IR.frost:382
frost$core$Int64 $tmp178 = $tmp174.value;
frost$core$Int64 $tmp179 = $tmp177.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179.value;
bool $tmp182 = $tmp180 == $tmp181;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp185 = (frost$core$Int64) {17u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s186, $tmp185);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:18
org$frostlang$frostc$IR$Block* $tmp187 = *(&local4);
frost$collections$Array** $tmp188 = &$tmp187->statements;
frost$collections$Array* $tmp189 = *$tmp188;
frost$core$Int64 $tmp190 = *(&local5);
frost$core$Object* $tmp191 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp189, $tmp190);
frost$core$Frost$unref$frost$core$Object$Q($tmp191);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:19
org$frostlang$frostc$IR$Block* $tmp192 = *(&local4);
frost$collections$Array** $tmp193 = &$tmp192->ids;
frost$collections$Array* $tmp194 = *$tmp193;
frost$core$Int64 $tmp195 = *(&local5);
frost$core$Object* $tmp196 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp194, $tmp195);
frost$core$Frost$unref$frost$core$Object$Q($tmp196);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:20
org$frostlang$frostc$IR$Block* $tmp197 = *(&local4);
frost$collections$Array** $tmp198 = &$tmp197->statements;
frost$collections$Array* $tmp199 = *$tmp198;
org$frostlang$frostc$IR$Block* $tmp200 = *(&local2);
frost$collections$Array** $tmp201 = &$tmp200->statements;
frost$collections$Array* $tmp202 = *$tmp201;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp199, ((frost$collections$CollectionView*) $tmp202));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:21
org$frostlang$frostc$IR$Block* $tmp203 = *(&local4);
frost$collections$Array** $tmp204 = &$tmp203->ids;
frost$collections$Array* $tmp205 = *$tmp204;
org$frostlang$frostc$IR$Block* $tmp206 = *(&local2);
frost$collections$Array** $tmp207 = &$tmp206->ids;
frost$collections$Array* $tmp208 = *$tmp207;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp205, ((frost$collections$CollectionView*) $tmp208));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:22
org$frostlang$frostc$IR$Block* $tmp209 = *(&local2);
frost$collections$Array** $tmp210 = &$tmp209->statements;
frost$collections$Array* $tmp211 = *$tmp210;
// begin inline call to method frost.collections.Array.clear() from MergeBlocks.frost:22:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:139
frost$core$Int64 $tmp212 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp213 = &$tmp211->_count;
*$tmp213 = $tmp212;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:140
frost$core$Int64 $tmp214 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp215 = &$tmp211->capacity;
frost$core$Int64 $tmp216 = *$tmp215;
frost$core$Bit $tmp217 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp218 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp214, $tmp216, $tmp217);
frost$core$Int64 $tmp219 = $tmp218.min;
*(&local8) = $tmp219;
frost$core$Int64 $tmp220 = $tmp218.max;
frost$core$Bit $tmp221 = $tmp218.inclusive;
bool $tmp222 = $tmp221.value;
frost$core$Int64 $tmp223 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp224 = $tmp223.value;
frost$core$UInt64 $tmp225 = (frost$core$UInt64) {((uint64_t) $tmp224)};
if ($tmp222) goto block39; else goto block40;
block39:;
int64_t $tmp226 = $tmp219.value;
int64_t $tmp227 = $tmp220.value;
bool $tmp228 = $tmp226 <= $tmp227;
frost$core$Bit $tmp229 = (frost$core$Bit) {$tmp228};
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block36; else goto block37;
block40:;
int64_t $tmp231 = $tmp219.value;
int64_t $tmp232 = $tmp220.value;
bool $tmp233 = $tmp231 < $tmp232;
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp236 = &$tmp211->data;
frost$core$Object** $tmp237 = *$tmp236;
frost$core$Int64 $tmp238 = *(&local8);
int64_t $tmp239 = $tmp238.value;
frost$core$Object* $tmp240 = $tmp237[$tmp239];
frost$core$Frost$unref$frost$core$Object$Q($tmp240);
$tmp237[$tmp239] = ((frost$core$Object*) NULL);
frost$core$Int64 $tmp241 = *(&local8);
int64_t $tmp242 = $tmp220.value;
int64_t $tmp243 = $tmp241.value;
int64_t $tmp244 = $tmp242 - $tmp243;
frost$core$Int64 $tmp245 = (frost$core$Int64) {$tmp244};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp246 = $tmp245.value;
frost$core$UInt64 $tmp247 = (frost$core$UInt64) {((uint64_t) $tmp246)};
if ($tmp222) goto block43; else goto block44;
block43:;
uint64_t $tmp248 = $tmp247.value;
uint64_t $tmp249 = $tmp225.value;
bool $tmp250 = $tmp248 >= $tmp249;
frost$core$Bit $tmp251 = (frost$core$Bit) {$tmp250};
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block41; else goto block37;
block44:;
uint64_t $tmp253 = $tmp247.value;
uint64_t $tmp254 = $tmp225.value;
bool $tmp255 = $tmp253 > $tmp254;
frost$core$Bit $tmp256 = (frost$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block41; else goto block37;
block41:;
int64_t $tmp258 = $tmp241.value;
int64_t $tmp259 = $tmp223.value;
int64_t $tmp260 = $tmp258 + $tmp259;
frost$core$Int64 $tmp261 = (frost$core$Int64) {$tmp260};
*(&local8) = $tmp261;
goto block36;
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:23
org$frostlang$frostc$IR$Block* $tmp262 = *(&local2);
frost$collections$Array** $tmp263 = &$tmp262->ids;
frost$collections$Array* $tmp264 = *$tmp263;
// begin inline call to method frost.collections.Array.clear() from MergeBlocks.frost:23:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:139
frost$core$Int64 $tmp265 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp266 = &$tmp264->_count;
*$tmp266 = $tmp265;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:140
frost$core$Int64 $tmp267 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp268 = &$tmp264->capacity;
frost$core$Int64 $tmp269 = *$tmp268;
frost$core$Bit $tmp270 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp271 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp267, $tmp269, $tmp270);
frost$core$Int64 $tmp272 = $tmp271.min;
*(&local9) = $tmp272;
frost$core$Int64 $tmp273 = $tmp271.max;
frost$core$Bit $tmp274 = $tmp271.inclusive;
bool $tmp275 = $tmp274.value;
frost$core$Int64 $tmp276 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp277 = $tmp276.value;
frost$core$UInt64 $tmp278 = (frost$core$UInt64) {((uint64_t) $tmp277)};
if ($tmp275) goto block50; else goto block51;
block50:;
int64_t $tmp279 = $tmp272.value;
int64_t $tmp280 = $tmp273.value;
bool $tmp281 = $tmp279 <= $tmp280;
frost$core$Bit $tmp282 = (frost$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block47; else goto block48;
block51:;
int64_t $tmp284 = $tmp272.value;
int64_t $tmp285 = $tmp273.value;
bool $tmp286 = $tmp284 < $tmp285;
frost$core$Bit $tmp287 = (frost$core$Bit) {$tmp286};
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:141
frost$core$Object*** $tmp289 = &$tmp264->data;
frost$core$Object** $tmp290 = *$tmp289;
frost$core$Int64 $tmp291 = *(&local9);
int64_t $tmp292 = $tmp291.value;
frost$core$Object* $tmp293 = $tmp290[$tmp292];
frost$core$Frost$unref$frost$core$Object$Q($tmp293);
$tmp290[$tmp292] = ((frost$core$Object*) NULL);
frost$core$Int64 $tmp294 = *(&local9);
int64_t $tmp295 = $tmp273.value;
int64_t $tmp296 = $tmp294.value;
int64_t $tmp297 = $tmp295 - $tmp296;
frost$core$Int64 $tmp298 = (frost$core$Int64) {$tmp297};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp299 = $tmp298.value;
frost$core$UInt64 $tmp300 = (frost$core$UInt64) {((uint64_t) $tmp299)};
if ($tmp275) goto block54; else goto block55;
block54:;
uint64_t $tmp301 = $tmp300.value;
uint64_t $tmp302 = $tmp278.value;
bool $tmp303 = $tmp301 >= $tmp302;
frost$core$Bit $tmp304 = (frost$core$Bit) {$tmp303};
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block52; else goto block48;
block55:;
uint64_t $tmp306 = $tmp300.value;
uint64_t $tmp307 = $tmp278.value;
bool $tmp308 = $tmp306 > $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block52; else goto block48;
block52:;
int64_t $tmp311 = $tmp294.value;
int64_t $tmp312 = $tmp276.value;
int64_t $tmp313 = $tmp311 + $tmp312;
frost$core$Int64 $tmp314 = (frost$core$Int64) {$tmp313};
*(&local9) = $tmp314;
goto block47;
block48:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:24
org$frostlang$frostc$IR$Block* $tmp315 = *(&local2);
frost$collections$Array** $tmp316 = &$tmp315->statements;
frost$collections$Array* $tmp317 = *$tmp316;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp318 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp319 = (frost$core$Int64) {28u};
org$frostlang$frostc$Position $tmp320 = *(&local6);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position($tmp318, $tmp319, $tmp320);
frost$collections$Array$add$frost$collections$Array$T($tmp317, ((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:25
frost$core$Bit $tmp321 = (frost$core$Bit) {true};
*(&local0) = $tmp321;
goto block27;
block27:;
frost$core$Frost$unref$frost$core$Object$Q($tmp161);
org$frostlang$frostc$IR$Block* $tmp322 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block18;
block18:;
frost$collections$HashSet* $tmp323 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local3) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$IR$Block* $tmp324 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Int64 $tmp325 = *(&local1);
if ($tmp35) goto block57; else goto block58;
block57:;
int64_t $tmp326 = $tmp19.value;
int64_t $tmp327 = $tmp325.value;
int64_t $tmp328 = $tmp326 - $tmp327;
frost$core$Int64 $tmp329 = (frost$core$Int64) {$tmp328};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp330 = $tmp329.value;
frost$core$UInt64 $tmp331 = (frost$core$UInt64) {((uint64_t) $tmp330)};
if ($tmp29) goto block60; else goto block61;
block60:;
uint64_t $tmp332 = $tmp331.value;
uint64_t $tmp333 = $tmp22.value;
bool $tmp334 = $tmp332 >= $tmp333;
frost$core$Bit $tmp335 = (frost$core$Bit) {$tmp334};
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block56; else goto block5;
block61:;
uint64_t $tmp337 = $tmp331.value;
uint64_t $tmp338 = $tmp22.value;
bool $tmp339 = $tmp337 > $tmp338;
frost$core$Bit $tmp340 = (frost$core$Bit) {$tmp339};
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block56; else goto block5;
block58:;
int64_t $tmp342 = $tmp325.value;
int64_t $tmp343 = $tmp19.value;
int64_t $tmp344 = $tmp342 - $tmp343;
frost$core$Int64 $tmp345 = (frost$core$Int64) {$tmp344};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp346 = $tmp345.value;
frost$core$UInt64 $tmp347 = (frost$core$UInt64) {((uint64_t) $tmp346)};
if ($tmp29) goto block63; else goto block64;
block63:;
uint64_t $tmp348 = $tmp347.value;
uint64_t $tmp349 = $tmp27.value;
bool $tmp350 = $tmp348 >= $tmp349;
frost$core$Bit $tmp351 = (frost$core$Bit) {$tmp350};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block56; else goto block5;
block64:;
uint64_t $tmp353 = $tmp347.value;
uint64_t $tmp354 = $tmp27.value;
bool $tmp355 = $tmp353 > $tmp354;
frost$core$Bit $tmp356 = (frost$core$Bit) {$tmp355};
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block56; else goto block5;
block56:;
int64_t $tmp358 = $tmp325.value;
int64_t $tmp359 = $tmp20.value;
int64_t $tmp360 = $tmp358 + $tmp359;
frost$core$Int64 $tmp361 = (frost$core$Int64) {$tmp360};
*(&local1) = $tmp361;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:30
frost$core$Bit $tmp362 = *(&local0);
return $tmp362;

}
void org$frostlang$frostc$pass$MergeBlocks$init(org$frostlang$frostc$pass$MergeBlocks* param0) {

return;

}
void org$frostlang$frostc$pass$MergeBlocks$cleanup(org$frostlang$frostc$pass$MergeBlocks* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

