#include "org/frostlang/frostc/pass/RemoveUnreachableBlocks.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/pass/Analyzer.h"
#include "org/frostlang/frostc/LinkedList.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/collections/Array.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$RemoveUnreachableBlocks$class_type org$frostlang$frostc$pass$RemoveUnreachableBlocks$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$RemoveUnreachableBlocks$cleanup, org$frostlang$frostc$pass$RemoveUnreachableBlocks$isUnreachable$org$frostlang$frostc$IR$Block$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit, org$frostlang$frostc$pass$RemoveUnreachableBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit} };

typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn18)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn35)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn91)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn109)(org$frostlang$frostc$pass$RemoveUnreachableBlocks*, org$frostlang$frostc$IR$Block*, org$frostlang$frostc$pass$Analyzer*);
typedef void (*$fn114)(org$frostlang$frostc$pass$Analyzer*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x52\x65\x6d\x6f\x76\x65\x55\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x42\x6c\x6f\x63\x6b\x73", 49, -1383285895974991665, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

frost$core$Bit org$frostlang$frostc$pass$RemoveUnreachableBlocks$isUnreachable$org$frostlang$frostc$IR$Block$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0, org$frostlang$frostc$IR$Block* param1, org$frostlang$frostc$pass$Analyzer* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:7
org$frostlang$frostc$LinkedList** $tmp2 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp3 = *$tmp2;
ITable* $tmp4 = ((frost$collections$CollectionView*) $tmp3)->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
$fn6 $tmp5 = $tmp4->methods[0];
frost$core$Int $tmp7 = $tmp5(((frost$collections$CollectionView*) $tmp3));
frost$core$Int $tmp8 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RemoveUnreachableBlocks.frost:7:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 == $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:8
org$frostlang$frostc$LinkedList** $tmp14 = &param1->statements;
org$frostlang$frostc$LinkedList* $tmp15 = *$tmp14;
ITable* $tmp16 = ((frost$collections$CollectionView*) $tmp15)->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[1];
frost$core$Object* $tmp19 = $tmp17(((frost$collections$CollectionView*) $tmp15));
frost$core$Int* $tmp20 = &((org$frostlang$frostc$IR$Statement*) $tmp19)->$rawValue;
frost$core$Int $tmp21 = *$tmp20;
frost$core$Int $tmp22 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RemoveUnreachableBlocks.frost:9:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp23 = $tmp21.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block5; else goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:10
frost$core$Bit $tmp28 = (frost$core$Bit) {true};
frost$core$Frost$unref$frost$core$Object$Q($tmp19);
return $tmp28;
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp19);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:14
frost$core$Bit $tmp29 = (frost$core$Bit) {false};
return $tmp29;

}
frost$core$Bit org$frostlang$frostc$pass$RemoveUnreachableBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:18
frost$core$Bit $tmp30 = (frost$core$Bit) {false};
*(&local0) = $tmp30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:19
frost$collections$Array** $tmp31 = &param1->blocks;
frost$collections$Array* $tmp32 = *$tmp31;
ITable* $tmp33 = ((frost$collections$CollectionView*) $tmp32)->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp33 = $tmp33->next;
}
$fn35 $tmp34 = $tmp33->methods[0];
frost$core$Int $tmp36 = $tmp34(((frost$collections$CollectionView*) $tmp32));
frost$core$Int $tmp37 = (frost$core$Int) {1u};
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37.value;
int64_t $tmp40 = $tmp38 - $tmp39;
frost$core$Int $tmp41 = (frost$core$Int) {$tmp40};
frost$core$Int $tmp42 = (frost$core$Int) {1u};
frost$core$Int $tmp43 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp44 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp45 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp41, $tmp42, $tmp43, $tmp44);
frost$core$Int $tmp46 = $tmp45.start;
*(&local1) = $tmp46;
frost$core$Int $tmp47 = $tmp45.end;
frost$core$Int $tmp48 = $tmp45.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from RemoveUnreachableBlocks.frost:19:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp49 = $tmp48.value;
int64_t $tmp50 = -$tmp49;
frost$core$Int $tmp51 = (frost$core$Int) {$tmp50};
frost$core$Bit $tmp52 = $tmp45.inclusive;
bool $tmp53 = $tmp52.value;
frost$core$Int $tmp54 = (frost$core$Int) {0u};
int64_t $tmp55 = $tmp48.value;
int64_t $tmp56 = $tmp54.value;
bool $tmp57 = $tmp55 >= $tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block5; else goto block6;
block5:;
if ($tmp53) goto block7; else goto block8;
block7:;
int64_t $tmp60 = $tmp46.value;
int64_t $tmp61 = $tmp47.value;
bool $tmp62 = $tmp60 <= $tmp61;
frost$core$Bit $tmp63 = (frost$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block2; else goto block3;
block8:;
int64_t $tmp65 = $tmp46.value;
int64_t $tmp66 = $tmp47.value;
bool $tmp67 = $tmp65 < $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block2; else goto block3;
block6:;
if ($tmp53) goto block9; else goto block10;
block9:;
int64_t $tmp70 = $tmp46.value;
int64_t $tmp71 = $tmp47.value;
bool $tmp72 = $tmp70 >= $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block2; else goto block3;
block10:;
int64_t $tmp75 = $tmp46.value;
int64_t $tmp76 = $tmp47.value;
bool $tmp77 = $tmp75 > $tmp76;
frost$core$Bit $tmp78 = (frost$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:20
frost$collections$Array** $tmp80 = &param1->blocks;
frost$collections$Array* $tmp81 = *$tmp80;
frost$core$Int $tmp82 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from RemoveUnreachableBlocks.frost:20:31
frost$core$Int $tmp83 = (frost$core$Int) {0u};
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 >= $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block14; else goto block13;
block14:;
ITable* $tmp89 = ((frost$collections$CollectionView*) $tmp81)->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
frost$core$Int $tmp92 = $tmp90(((frost$collections$CollectionView*) $tmp81));
int64_t $tmp93 = $tmp82.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 < $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block12; else goto block13;
block13:;
frost$core$Int $tmp98 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s99, $tmp98, &$s100);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp101 = &$tmp81->data;
frost$core$Object** $tmp102 = *$tmp101;
frost$core$Int64 $tmp103 = frost$core$Int64$init$frost$core$Int($tmp82);
int64_t $tmp104 = $tmp103.value;
frost$core$Object* $tmp105 = $tmp102[$tmp104];
frost$core$Frost$ref$frost$core$Object$Q($tmp105);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp105)));
org$frostlang$frostc$IR$Block* $tmp106 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local2) = ((org$frostlang$frostc$IR$Block*) $tmp105);
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:21
org$frostlang$frostc$IR$Block* $tmp107 = *(&local2);
$fn109 $tmp108 = ($fn109) param0->$class->vtable[2];
frost$core$Bit $tmp110 = $tmp108(param0, $tmp107, param2);
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:22
frost$core$Int $tmp112 = *(&local1);
$fn114 $tmp113 = ($fn114) param2->$class->vtable[14];
$tmp113(param2, $tmp112);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:23
frost$core$Bit $tmp115 = (frost$core$Bit) {true};
*(&local0) = $tmp115;
goto block16;
block16:;
org$frostlang$frostc$IR$Block* $tmp116 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Int $tmp117 = *(&local1);
if ($tmp59) goto block18; else goto block19;
block18:;
int64_t $tmp118 = $tmp47.value;
int64_t $tmp119 = $tmp117.value;
int64_t $tmp120 = $tmp118 - $tmp119;
frost$core$Int $tmp121 = (frost$core$Int) {$tmp120};
if ($tmp53) goto block20; else goto block21;
block20:;
int64_t $tmp122 = $tmp121.value;
int64_t $tmp123 = $tmp48.value;
bool $tmp124 = $tmp122 >= $tmp123;
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124};
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block17; else goto block3;
block21:;
int64_t $tmp127 = $tmp121.value;
int64_t $tmp128 = $tmp48.value;
bool $tmp129 = $tmp127 > $tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block17; else goto block3;
block19:;
int64_t $tmp132 = $tmp117.value;
int64_t $tmp133 = $tmp47.value;
int64_t $tmp134 = $tmp132 - $tmp133;
frost$core$Int $tmp135 = (frost$core$Int) {$tmp134};
if ($tmp53) goto block22; else goto block23;
block22:;
int64_t $tmp136 = $tmp135.value;
int64_t $tmp137 = $tmp51.value;
bool $tmp138 = $tmp136 >= $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block17; else goto block3;
block23:;
int64_t $tmp141 = $tmp135.value;
int64_t $tmp142 = $tmp51.value;
bool $tmp143 = $tmp141 > $tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block17; else goto block3;
block17:;
int64_t $tmp146 = $tmp117.value;
int64_t $tmp147 = $tmp48.value;
int64_t $tmp148 = $tmp146 + $tmp147;
frost$core$Int $tmp149 = (frost$core$Int) {$tmp148};
*(&local1) = $tmp149;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:26
frost$core$Bit $tmp150 = *(&local0);
return $tmp150;

}
void org$frostlang$frostc$pass$RemoveUnreachableBlocks$init(org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0) {

return;

}
void org$frostlang$frostc$pass$RemoveUnreachableBlocks$cleanup(org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

