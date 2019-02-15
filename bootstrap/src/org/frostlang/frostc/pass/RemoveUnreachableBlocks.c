#include "org/frostlang/frostc/pass/RemoveUnreachableBlocks.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/pass/Analyzer.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$RemoveUnreachableBlocks$class_type org$frostlang$frostc$pass$RemoveUnreachableBlocks$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$RemoveUnreachableBlocks$cleanup, org$frostlang$frostc$pass$RemoveUnreachableBlocks$isUnreachable$org$frostlang$frostc$IR$Block$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit, org$frostlang$frostc$pass$RemoveUnreachableBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit} };

typedef frost$core$Int64 (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn25)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn54)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn114)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn131)(org$frostlang$frostc$pass$RemoveUnreachableBlocks*, org$frostlang$frostc$IR$Block*, org$frostlang$frostc$pass$Analyzer*);
typedef void (*$fn136)(org$frostlang$frostc$pass$Analyzer*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x52\x65\x6d\x6f\x76\x65\x55\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x42\x6c\x6f\x63\x6b\x73", 49, -1383285895974991665, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };

frost$core$Bit org$frostlang$frostc$pass$RemoveUnreachableBlocks$isUnreachable$org$frostlang$frostc$IR$Block$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0, org$frostlang$frostc$IR$Block* param1, org$frostlang$frostc$pass$Analyzer* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:7
frost$collections$Array** $tmp2 = &param1->statements;
frost$collections$Array* $tmp3 = *$tmp2;
ITable* $tmp4 = ((frost$collections$CollectionView*) $tmp3)->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
$fn6 $tmp5 = $tmp4->methods[0];
frost$core$Int64 $tmp7 = $tmp5(((frost$collections$CollectionView*) $tmp3));
frost$core$Int64 $tmp8 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RemoveUnreachableBlocks.frost:7:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 == $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:8
frost$collections$Array** $tmp14 = &param1->statements;
frost$collections$Array* $tmp15 = *$tmp14;
frost$core$Int64 $tmp16 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from RemoveUnreachableBlocks.frost:8:31
frost$core$Int64 $tmp17 = (frost$core$Int64) {0u};
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
frost$core$Int64 $tmp26 = $tmp24(((frost$collections$CollectionView*) $tmp15));
int64_t $tmp27 = $tmp16.value;
int64_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 < $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp32 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s33, $tmp32, &$s34);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp35 = &$tmp15->data;
frost$core$Object** $tmp36 = *$tmp35;
int64_t $tmp37 = $tmp16.value;
frost$core$Object* $tmp38 = $tmp36[$tmp37];
frost$core$Frost$ref$frost$core$Object$Q($tmp38);
frost$core$Int64* $tmp39 = &((org$frostlang$frostc$IR$Statement*) $tmp38)->$rawValue;
frost$core$Int64 $tmp40 = *$tmp39;
frost$core$Int64 $tmp41 = (frost$core$Int64) {28u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RemoveUnreachableBlocks.frost:9:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 == $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block9; else goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:10
frost$core$Bit $tmp47 = (frost$core$Bit) {true};
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
return $tmp47;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:14
frost$core$Bit $tmp48 = (frost$core$Bit) {false};
return $tmp48;

}
frost$core$Bit org$frostlang$frostc$pass$RemoveUnreachableBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {

frost$core$Bit local0;
frost$core$Int64 local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:18
frost$core$Bit $tmp49 = (frost$core$Bit) {false};
*(&local0) = $tmp49;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:19
frost$collections$Array** $tmp50 = &param1->blocks;
frost$collections$Array* $tmp51 = *$tmp50;
ITable* $tmp52 = ((frost$collections$CollectionView*) $tmp51)->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[0];
frost$core$Int64 $tmp55 = $tmp53(((frost$collections$CollectionView*) $tmp51));
frost$core$Int64 $tmp56 = (frost$core$Int64) {1u};
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57 - $tmp58;
frost$core$Int64 $tmp60 = (frost$core$Int64) {$tmp59};
frost$core$Int64 $tmp61 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp62 = (frost$core$Int64) {18446744073709551615u};
frost$core$Bit $tmp63 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp64 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp60, $tmp61, $tmp62, $tmp63);
frost$core$Int64 $tmp65 = $tmp64.start;
*(&local1) = $tmp65;
frost$core$Int64 $tmp66 = $tmp64.end;
frost$core$Int64 $tmp67 = $tmp64.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp68 = $tmp67.value;
frost$core$UInt64 $tmp69 = (frost$core$UInt64) {((uint64_t) $tmp68)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from RemoveUnreachableBlocks.frost:19:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp70 = $tmp67.value;
int64_t $tmp71 = -$tmp70;
frost$core$Int64 $tmp72 = (frost$core$Int64) {$tmp71};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp73 = $tmp72.value;
frost$core$UInt64 $tmp74 = (frost$core$UInt64) {((uint64_t) $tmp73)};
frost$core$Bit $tmp75 = $tmp64.inclusive;
bool $tmp76 = $tmp75.value;
frost$core$Int64 $tmp77 = (frost$core$Int64) {0u};
int64_t $tmp78 = $tmp67.value;
int64_t $tmp79 = $tmp77.value;
bool $tmp80 = $tmp78 >= $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block7; else goto block8;
block7:;
if ($tmp76) goto block9; else goto block10;
block9:;
int64_t $tmp83 = $tmp65.value;
int64_t $tmp84 = $tmp66.value;
bool $tmp85 = $tmp83 <= $tmp84;
frost$core$Bit $tmp86 = (frost$core$Bit) {$tmp85};
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block4; else goto block5;
block10:;
int64_t $tmp88 = $tmp65.value;
int64_t $tmp89 = $tmp66.value;
bool $tmp90 = $tmp88 < $tmp89;
frost$core$Bit $tmp91 = (frost$core$Bit) {$tmp90};
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block4; else goto block5;
block8:;
if ($tmp76) goto block11; else goto block12;
block11:;
int64_t $tmp93 = $tmp65.value;
int64_t $tmp94 = $tmp66.value;
bool $tmp95 = $tmp93 >= $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block4; else goto block5;
block12:;
int64_t $tmp98 = $tmp65.value;
int64_t $tmp99 = $tmp66.value;
bool $tmp100 = $tmp98 > $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:20
frost$collections$Array** $tmp103 = &param1->blocks;
frost$collections$Array* $tmp104 = *$tmp103;
frost$core$Int64 $tmp105 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from RemoveUnreachableBlocks.frost:20:31
frost$core$Int64 $tmp106 = (frost$core$Int64) {0u};
int64_t $tmp107 = $tmp105.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 >= $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block16; else goto block15;
block16:;
ITable* $tmp112 = ((frost$collections$CollectionView*) $tmp104)->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[0];
frost$core$Int64 $tmp115 = $tmp113(((frost$collections$CollectionView*) $tmp104));
int64_t $tmp116 = $tmp105.value;
int64_t $tmp117 = $tmp115.value;
bool $tmp118 = $tmp116 < $tmp117;
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118};
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp121 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s122, $tmp121, &$s123);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp124 = &$tmp104->data;
frost$core$Object** $tmp125 = *$tmp124;
int64_t $tmp126 = $tmp105.value;
frost$core$Object* $tmp127 = $tmp125[$tmp126];
frost$core$Frost$ref$frost$core$Object$Q($tmp127);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp127)));
org$frostlang$frostc$IR$Block* $tmp128 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local2) = ((org$frostlang$frostc$IR$Block*) $tmp127);
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:21
org$frostlang$frostc$IR$Block* $tmp129 = *(&local2);
$fn131 $tmp130 = ($fn131) param0->$class->vtable[2];
frost$core$Bit $tmp132 = $tmp130(param0, $tmp129, param2);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:22
frost$core$Int64 $tmp134 = *(&local1);
$fn136 $tmp135 = ($fn136) param2->$class->vtable[12];
$tmp135(param2, $tmp134);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:23
frost$core$Bit $tmp137 = (frost$core$Bit) {true};
*(&local0) = $tmp137;
goto block18;
block18:;
org$frostlang$frostc$IR$Block* $tmp138 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Int64 $tmp139 = *(&local1);
if ($tmp82) goto block20; else goto block21;
block20:;
int64_t $tmp140 = $tmp66.value;
int64_t $tmp141 = $tmp139.value;
int64_t $tmp142 = $tmp140 - $tmp141;
frost$core$Int64 $tmp143 = (frost$core$Int64) {$tmp142};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp144 = $tmp143.value;
frost$core$UInt64 $tmp145 = (frost$core$UInt64) {((uint64_t) $tmp144)};
if ($tmp76) goto block23; else goto block24;
block23:;
uint64_t $tmp146 = $tmp145.value;
uint64_t $tmp147 = $tmp69.value;
bool $tmp148 = $tmp146 >= $tmp147;
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148};
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block19; else goto block5;
block24:;
uint64_t $tmp151 = $tmp145.value;
uint64_t $tmp152 = $tmp69.value;
bool $tmp153 = $tmp151 > $tmp152;
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153};
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block19; else goto block5;
block21:;
int64_t $tmp156 = $tmp139.value;
int64_t $tmp157 = $tmp66.value;
int64_t $tmp158 = $tmp156 - $tmp157;
frost$core$Int64 $tmp159 = (frost$core$Int64) {$tmp158};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp160 = $tmp159.value;
frost$core$UInt64 $tmp161 = (frost$core$UInt64) {((uint64_t) $tmp160)};
if ($tmp76) goto block26; else goto block27;
block26:;
uint64_t $tmp162 = $tmp161.value;
uint64_t $tmp163 = $tmp74.value;
bool $tmp164 = $tmp162 >= $tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block19; else goto block5;
block27:;
uint64_t $tmp167 = $tmp161.value;
uint64_t $tmp168 = $tmp74.value;
bool $tmp169 = $tmp167 > $tmp168;
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169};
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block19; else goto block5;
block19:;
int64_t $tmp172 = $tmp139.value;
int64_t $tmp173 = $tmp67.value;
int64_t $tmp174 = $tmp172 + $tmp173;
frost$core$Int64 $tmp175 = (frost$core$Int64) {$tmp174};
*(&local1) = $tmp175;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:26
frost$core$Bit $tmp176 = *(&local0);
return $tmp176;

}
void org$frostlang$frostc$pass$RemoveUnreachableBlocks$init(org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0) {

return;

}
void org$frostlang$frostc$pass$RemoveUnreachableBlocks$cleanup(org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

