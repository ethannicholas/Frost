#include "org/frostlang/frostc/pass/RemoveUnreachableBlocks.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/pass/Analyzer.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$RemoveUnreachableBlocks$class_type org$frostlang$frostc$pass$RemoveUnreachableBlocks$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$RemoveUnreachableBlocks$cleanup, org$frostlang$frostc$pass$RemoveUnreachableBlocks$isUnreachable$org$frostlang$frostc$IR$Block$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit, org$frostlang$frostc$pass$RemoveUnreachableBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit} };

typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn25)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn55)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn111)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn129)(org$frostlang$frostc$pass$RemoveUnreachableBlocks*, org$frostlang$frostc$IR$Block*, org$frostlang$frostc$pass$Analyzer*);
typedef void (*$fn134)(org$frostlang$frostc$pass$Analyzer*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x52\x65\x6d\x6f\x76\x65\x55\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x42\x6c\x6f\x63\x6b\x73", 49, -1383285895974991665, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

frost$core$Bit org$frostlang$frostc$pass$RemoveUnreachableBlocks$isUnreachable$org$frostlang$frostc$IR$Block$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0, org$frostlang$frostc$IR$Block* param1, org$frostlang$frostc$pass$Analyzer* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:7
frost$collections$Array** $tmp2 = &param1->statements;
frost$collections$Array* $tmp3 = *$tmp2;
ITable* $tmp4 = ((frost$collections$CollectionView*) $tmp3)->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
$fn6 $tmp5 = $tmp4->methods[0];
frost$core$Int $tmp7 = $tmp5(((frost$collections$CollectionView*) $tmp3));
frost$core$Int $tmp8 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RemoveUnreachableBlocks.frost:7:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 == $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:8
frost$collections$Array** $tmp14 = &param1->statements;
frost$collections$Array* $tmp15 = *$tmp14;
frost$core$Int $tmp16 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from RemoveUnreachableBlocks.frost:8:31
frost$core$Int $tmp17 = (frost$core$Int) {0u};
int64_t $tmp18 = $tmp16.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 >= $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block7; else goto block6;
block7:;
ITable* $tmp23 = ((frost$collections$CollectionView*) $tmp15)->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp23 = $tmp23->next;
}
$fn25 $tmp24 = $tmp23->methods[0];
frost$core$Int $tmp26 = $tmp24(((frost$collections$CollectionView*) $tmp15));
int64_t $tmp27 = $tmp16.value;
int64_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 < $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block5; else goto block6;
block6:;
frost$core$Int $tmp32 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s33, $tmp32, &$s34);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp35 = &$tmp15->data;
frost$core$Object** $tmp36 = *$tmp35;
frost$core$Int64 $tmp37 = frost$core$Int64$init$frost$core$Int($tmp16);
int64_t $tmp38 = $tmp37.value;
frost$core$Object* $tmp39 = $tmp36[$tmp38];
frost$core$Frost$ref$frost$core$Object$Q($tmp39);
frost$core$Int* $tmp40 = &((org$frostlang$frostc$IR$Statement*) $tmp39)->$rawValue;
frost$core$Int $tmp41 = *$tmp40;
frost$core$Int $tmp42 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RemoveUnreachableBlocks.frost:9:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42.value;
bool $tmp45 = $tmp43 == $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block9; else goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:10
frost$core$Bit $tmp48 = (frost$core$Bit) {true};
frost$core$Frost$unref$frost$core$Object$Q($tmp39);
return $tmp48;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp39);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:14
frost$core$Bit $tmp49 = (frost$core$Bit) {false};
return $tmp49;

}
frost$core$Bit org$frostlang$frostc$pass$RemoveUnreachableBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:18
frost$core$Bit $tmp50 = (frost$core$Bit) {false};
*(&local0) = $tmp50;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:19
frost$collections$Array** $tmp51 = &param1->blocks;
frost$collections$Array* $tmp52 = *$tmp51;
ITable* $tmp53 = ((frost$collections$CollectionView*) $tmp52)->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[0];
frost$core$Int $tmp56 = $tmp54(((frost$collections$CollectionView*) $tmp52));
frost$core$Int $tmp57 = (frost$core$Int) {1u};
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58 - $tmp59;
frost$core$Int $tmp61 = (frost$core$Int) {$tmp60};
frost$core$Int $tmp62 = (frost$core$Int) {1u};
frost$core$Int $tmp63 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp64 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp65 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp61, $tmp62, $tmp63, $tmp64);
frost$core$Int $tmp66 = $tmp65.start;
*(&local1) = $tmp66;
frost$core$Int $tmp67 = $tmp65.end;
frost$core$Int $tmp68 = $tmp65.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from RemoveUnreachableBlocks.frost:19:9
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:120
int64_t $tmp69 = $tmp68.value;
int64_t $tmp70 = -$tmp69;
frost$core$Int $tmp71 = (frost$core$Int) {$tmp70};
frost$core$Bit $tmp72 = $tmp65.inclusive;
bool $tmp73 = $tmp72.value;
frost$core$Int $tmp74 = (frost$core$Int) {0u};
int64_t $tmp75 = $tmp68.value;
int64_t $tmp76 = $tmp74.value;
bool $tmp77 = $tmp75 >= $tmp76;
frost$core$Bit $tmp78 = (frost$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block5; else goto block6;
block5:;
if ($tmp73) goto block7; else goto block8;
block7:;
int64_t $tmp80 = $tmp66.value;
int64_t $tmp81 = $tmp67.value;
bool $tmp82 = $tmp80 <= $tmp81;
frost$core$Bit $tmp83 = (frost$core$Bit) {$tmp82};
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block2; else goto block3;
block8:;
int64_t $tmp85 = $tmp66.value;
int64_t $tmp86 = $tmp67.value;
bool $tmp87 = $tmp85 < $tmp86;
frost$core$Bit $tmp88 = (frost$core$Bit) {$tmp87};
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block2; else goto block3;
block6:;
if ($tmp73) goto block9; else goto block10;
block9:;
int64_t $tmp90 = $tmp66.value;
int64_t $tmp91 = $tmp67.value;
bool $tmp92 = $tmp90 >= $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block2; else goto block3;
block10:;
int64_t $tmp95 = $tmp66.value;
int64_t $tmp96 = $tmp67.value;
bool $tmp97 = $tmp95 > $tmp96;
frost$core$Bit $tmp98 = (frost$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:20
frost$collections$Array** $tmp100 = &param1->blocks;
frost$collections$Array* $tmp101 = *$tmp100;
frost$core$Int $tmp102 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from RemoveUnreachableBlocks.frost:20:31
frost$core$Int $tmp103 = (frost$core$Int) {0u};
int64_t $tmp104 = $tmp102.value;
int64_t $tmp105 = $tmp103.value;
bool $tmp106 = $tmp104 >= $tmp105;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block14; else goto block13;
block14:;
ITable* $tmp109 = ((frost$collections$CollectionView*) $tmp101)->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
frost$core$Int $tmp112 = $tmp110(((frost$collections$CollectionView*) $tmp101));
int64_t $tmp113 = $tmp102.value;
int64_t $tmp114 = $tmp112.value;
bool $tmp115 = $tmp113 < $tmp114;
frost$core$Bit $tmp116 = (frost$core$Bit) {$tmp115};
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block12; else goto block13;
block13:;
frost$core$Int $tmp118 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s119, $tmp118, &$s120);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp121 = &$tmp101->data;
frost$core$Object** $tmp122 = *$tmp121;
frost$core$Int64 $tmp123 = frost$core$Int64$init$frost$core$Int($tmp102);
int64_t $tmp124 = $tmp123.value;
frost$core$Object* $tmp125 = $tmp122[$tmp124];
frost$core$Frost$ref$frost$core$Object$Q($tmp125);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp125)));
org$frostlang$frostc$IR$Block* $tmp126 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local2) = ((org$frostlang$frostc$IR$Block*) $tmp125);
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:21
org$frostlang$frostc$IR$Block* $tmp127 = *(&local2);
$fn129 $tmp128 = ($fn129) param0->$class->vtable[2];
frost$core$Bit $tmp130 = $tmp128(param0, $tmp127, param2);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:22
frost$core$Int $tmp132 = *(&local1);
$fn134 $tmp133 = ($fn134) param2->$class->vtable[12];
$tmp133(param2, $tmp132);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:23
frost$core$Bit $tmp135 = (frost$core$Bit) {true};
*(&local0) = $tmp135;
goto block16;
block16:;
org$frostlang$frostc$IR$Block* $tmp136 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Int $tmp137 = *(&local1);
if ($tmp79) goto block18; else goto block19;
block18:;
int64_t $tmp138 = $tmp67.value;
int64_t $tmp139 = $tmp137.value;
int64_t $tmp140 = $tmp138 - $tmp139;
frost$core$Int $tmp141 = (frost$core$Int) {$tmp140};
if ($tmp73) goto block20; else goto block21;
block20:;
int64_t $tmp142 = $tmp141.value;
int64_t $tmp143 = $tmp68.value;
bool $tmp144 = $tmp142 >= $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block17; else goto block3;
block21:;
int64_t $tmp147 = $tmp141.value;
int64_t $tmp148 = $tmp68.value;
bool $tmp149 = $tmp147 > $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block17; else goto block3;
block19:;
int64_t $tmp152 = $tmp137.value;
int64_t $tmp153 = $tmp67.value;
int64_t $tmp154 = $tmp152 - $tmp153;
frost$core$Int $tmp155 = (frost$core$Int) {$tmp154};
if ($tmp73) goto block22; else goto block23;
block22:;
int64_t $tmp156 = $tmp155.value;
int64_t $tmp157 = $tmp71.value;
bool $tmp158 = $tmp156 >= $tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block17; else goto block3;
block23:;
int64_t $tmp161 = $tmp155.value;
int64_t $tmp162 = $tmp71.value;
bool $tmp163 = $tmp161 > $tmp162;
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block17; else goto block3;
block17:;
int64_t $tmp166 = $tmp137.value;
int64_t $tmp167 = $tmp68.value;
int64_t $tmp168 = $tmp166 + $tmp167;
frost$core$Int $tmp169 = (frost$core$Int) {$tmp168};
*(&local1) = $tmp169;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:26
frost$core$Bit $tmp170 = *(&local0);
return $tmp170;

}
void org$frostlang$frostc$pass$RemoveUnreachableBlocks$init(org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0) {

return;

}
void org$frostlang$frostc$pass$RemoveUnreachableBlocks$cleanup(org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

