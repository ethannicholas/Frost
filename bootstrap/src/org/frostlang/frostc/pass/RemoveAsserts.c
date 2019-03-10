#include "org/frostlang/frostc/pass/RemoveAsserts.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Weak.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/pass/Analyzer.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$RemoveAsserts$class_type org$frostlang$frostc$pass$RemoveAsserts$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$RemoveAsserts$cleanup, org$frostlang$frostc$pass$RemoveAsserts$isAssertionFail$org$frostlang$frostc$IR$Statement$R$frost$core$Bit, org$frostlang$frostc$pass$RemoveAsserts$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit} };

typedef frost$core$Int (*$fn45)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn101)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn122)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn126)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn131)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn136)(org$frostlang$frostc$pass$RemoveAsserts*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn141)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x52\x65\x6d\x6f\x76\x65\x41\x73\x73\x65\x72\x74\x73", 39, 2675365451163764056, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, -1047342833001589897, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, 4237142976622831502, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

frost$core$Bit org$frostlang$frostc$pass$RemoveAsserts$isAssertionFail$org$frostlang$frostc$IR$Statement$R$frost$core$Bit(org$frostlang$frostc$pass$RemoveAsserts* param0, org$frostlang$frostc$IR$Statement* param1) {

org$frostlang$frostc$MethodDecl* local0 = NULL;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:7
frost$core$Int64* $tmp2 = &param1->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {26u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RemoveAsserts.frost:8:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp10 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp11 = *$tmp10;
org$frostlang$frostc$MethodDecl** $tmp12 = (org$frostlang$frostc$MethodDecl**) (param1->$data + 24);
org$frostlang$frostc$MethodDecl* $tmp13 = *$tmp12;
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
org$frostlang$frostc$MethodDecl* $tmp14 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local0) = $tmp13;
org$frostlang$frostc$FixedArray** $tmp15 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp16 = *$tmp15;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:9
org$frostlang$frostc$MethodDecl* $tmp17 = *(&local0);
frost$core$String** $tmp18 = &((org$frostlang$frostc$Symbol*) $tmp17)->name;
frost$core$String* $tmp19 = *$tmp18;
frost$core$Bit $tmp20 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp19, &$s21);
bool $tmp22 = $tmp20.value;
if ($tmp22) goto block5; else goto block6;
block5:;
org$frostlang$frostc$MethodDecl* $tmp23 = *(&local0);
frost$core$Weak** $tmp24 = &$tmp23->owner;
frost$core$Weak* $tmp25 = *$tmp24;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from RemoveAsserts.frost:9:55
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp26 = &$tmp25->_valid;
frost$core$Bit $tmp27 = *$tmp26;
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block10; else goto block11;
block11:;
frost$core$Int $tmp29 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s30, $tmp29);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp31 = &$tmp25->value;
frost$core$Object* $tmp32 = *$tmp31;
frost$core$Frost$ref$frost$core$Object$Q($tmp32);
frost$core$String** $tmp33 = &((org$frostlang$frostc$ClassDecl*) $tmp32)->name;
frost$core$String* $tmp34 = *$tmp33;
frost$core$Bit $tmp35 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp34, &$s36);
frost$core$Frost$unref$frost$core$Object$Q($tmp32);
*(&local1) = $tmp35;
goto block7;
block6:;
*(&local1) = $tmp20;
goto block7;
block7:;
frost$core$Bit $tmp37 = *(&local1);
org$frostlang$frostc$MethodDecl* $tmp38 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp37;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:12
frost$core$Bit $tmp39 = (frost$core$Bit) {false};
return $tmp39;
block1:;
goto block12;
block12:;

}
frost$core$Bit org$frostlang$frostc$pass$RemoveAsserts$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$RemoveAsserts* param0, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
org$frostlang$frostc$IR$Statement* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:18
frost$core$Bit $tmp40 = (frost$core$Bit) {false};
*(&local0) = $tmp40;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:19
frost$collections$Array** $tmp41 = &param1->blocks;
frost$collections$Array* $tmp42 = *$tmp41;
ITable* $tmp43 = ((frost$collections$CollectionView*) $tmp42)->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[0];
frost$core$Int $tmp46 = $tmp44(((frost$collections$CollectionView*) $tmp42));
frost$core$Int $tmp47 = (frost$core$Int) {1u};
int64_t $tmp48 = $tmp46.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 - $tmp49;
frost$core$Int $tmp51 = (frost$core$Int) {$tmp50};
frost$core$Int $tmp52 = (frost$core$Int) {0u};
frost$core$Int $tmp53 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp54 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp55 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp51, $tmp52, $tmp53, $tmp54);
frost$core$Int $tmp56 = $tmp55.start;
*(&local1) = $tmp56;
frost$core$Int $tmp57 = $tmp55.end;
frost$core$Int $tmp58 = $tmp55.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from RemoveAsserts.frost:19:9
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:120
int64_t $tmp59 = $tmp58.value;
int64_t $tmp60 = -$tmp59;
frost$core$Int $tmp61 = (frost$core$Int) {$tmp60};
frost$core$Bit $tmp62 = $tmp55.inclusive;
bool $tmp63 = $tmp62.value;
frost$core$Int $tmp64 = (frost$core$Int) {0u};
int64_t $tmp65 = $tmp58.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 >= $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block5; else goto block6;
block5:;
if ($tmp63) goto block7; else goto block8;
block7:;
int64_t $tmp70 = $tmp56.value;
int64_t $tmp71 = $tmp57.value;
bool $tmp72 = $tmp70 <= $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block2; else goto block3;
block8:;
int64_t $tmp75 = $tmp56.value;
int64_t $tmp76 = $tmp57.value;
bool $tmp77 = $tmp75 < $tmp76;
frost$core$Bit $tmp78 = (frost$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block2; else goto block3;
block6:;
if ($tmp63) goto block9; else goto block10;
block9:;
int64_t $tmp80 = $tmp56.value;
int64_t $tmp81 = $tmp57.value;
bool $tmp82 = $tmp80 >= $tmp81;
frost$core$Bit $tmp83 = (frost$core$Bit) {$tmp82};
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block2; else goto block3;
block10:;
int64_t $tmp85 = $tmp56.value;
int64_t $tmp86 = $tmp57.value;
bool $tmp87 = $tmp85 > $tmp86;
frost$core$Bit $tmp88 = (frost$core$Bit) {$tmp87};
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:20
frost$collections$Array** $tmp90 = &param1->blocks;
frost$collections$Array* $tmp91 = *$tmp90;
frost$core$Int $tmp92 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from RemoveAsserts.frost:20:31
frost$core$Int $tmp93 = (frost$core$Int) {0u};
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93.value;
bool $tmp96 = $tmp94 >= $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block14; else goto block13;
block14:;
ITable* $tmp99 = ((frost$collections$CollectionView*) $tmp91)->$class->itable;
while ($tmp99->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp99 = $tmp99->next;
}
$fn101 $tmp100 = $tmp99->methods[0];
frost$core$Int $tmp102 = $tmp100(((frost$collections$CollectionView*) $tmp91));
int64_t $tmp103 = $tmp92.value;
int64_t $tmp104 = $tmp102.value;
bool $tmp105 = $tmp103 < $tmp104;
frost$core$Bit $tmp106 = (frost$core$Bit) {$tmp105};
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block12; else goto block13;
block13:;
frost$core$Int $tmp108 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s109, $tmp108, &$s110);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp111 = &$tmp91->data;
frost$core$Object** $tmp112 = *$tmp111;
frost$core$Int64 $tmp113 = frost$core$Int64$init$frost$core$Int($tmp92);
int64_t $tmp114 = $tmp113.value;
frost$core$Object* $tmp115 = $tmp112[$tmp114];
frost$core$Frost$ref$frost$core$Object$Q($tmp115);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp115)));
org$frostlang$frostc$IR$Block* $tmp116 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local2) = ((org$frostlang$frostc$IR$Block*) $tmp115);
frost$core$Frost$unref$frost$core$Object$Q($tmp115);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:21
org$frostlang$frostc$IR$Block* $tmp117 = *(&local2);
frost$collections$Array** $tmp118 = &$tmp117->statements;
frost$collections$Array* $tmp119 = *$tmp118;
ITable* $tmp120 = ((frost$collections$Iterable*) $tmp119)->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp120 = $tmp120->next;
}
$fn122 $tmp121 = $tmp120->methods[0];
frost$collections$Iterator* $tmp123 = $tmp121(((frost$collections$Iterable*) $tmp119));
goto block15;
block15:;
ITable* $tmp124 = $tmp123->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[0];
frost$core$Bit $tmp127 = $tmp125($tmp123);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block17; else goto block16;
block16:;
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
ITable* $tmp129 = $tmp123->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp129 = $tmp129->next;
}
$fn131 $tmp130 = $tmp129->methods[1];
frost$core$Object* $tmp132 = $tmp130($tmp123);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp132)));
org$frostlang$frostc$IR$Statement* $tmp133 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) $tmp132);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:22
org$frostlang$frostc$IR$Statement* $tmp134 = *(&local3);
$fn136 $tmp135 = ($fn136) param0->$class->vtable[2];
frost$core$Bit $tmp137 = $tmp135(param0, $tmp134);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:23
org$frostlang$frostc$IR$Block* $tmp139 = *(&local2);
$fn141 $tmp140 = ($fn141) param2->$class->vtable[11];
$tmp140(param2, $tmp139);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:24
frost$core$Bit $tmp142 = (frost$core$Bit) {true};
*(&local0) = $tmp142;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:25
frost$core$Frost$unref$frost$core$Object$Q($tmp132);
org$frostlang$frostc$IR$Statement* $tmp143 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q($tmp132);
org$frostlang$frostc$IR$Statement* $tmp144 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block15;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
org$frostlang$frostc$IR$Block* $tmp145 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Int $tmp146 = *(&local1);
if ($tmp69) goto block21; else goto block22;
block21:;
int64_t $tmp147 = $tmp57.value;
int64_t $tmp148 = $tmp146.value;
int64_t $tmp149 = $tmp147 - $tmp148;
frost$core$Int $tmp150 = (frost$core$Int) {$tmp149};
if ($tmp63) goto block23; else goto block24;
block23:;
int64_t $tmp151 = $tmp150.value;
int64_t $tmp152 = $tmp58.value;
bool $tmp153 = $tmp151 >= $tmp152;
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153};
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block20; else goto block3;
block24:;
int64_t $tmp156 = $tmp150.value;
int64_t $tmp157 = $tmp58.value;
bool $tmp158 = $tmp156 > $tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block20; else goto block3;
block22:;
int64_t $tmp161 = $tmp146.value;
int64_t $tmp162 = $tmp57.value;
int64_t $tmp163 = $tmp161 - $tmp162;
frost$core$Int $tmp164 = (frost$core$Int) {$tmp163};
if ($tmp63) goto block25; else goto block26;
block25:;
int64_t $tmp165 = $tmp164.value;
int64_t $tmp166 = $tmp61.value;
bool $tmp167 = $tmp165 >= $tmp166;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block20; else goto block3;
block26:;
int64_t $tmp170 = $tmp164.value;
int64_t $tmp171 = $tmp61.value;
bool $tmp172 = $tmp170 > $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block20; else goto block3;
block20:;
int64_t $tmp175 = $tmp146.value;
int64_t $tmp176 = $tmp58.value;
int64_t $tmp177 = $tmp175 + $tmp176;
frost$core$Int $tmp178 = (frost$core$Int) {$tmp177};
*(&local1) = $tmp178;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:29
frost$core$Bit $tmp179 = *(&local0);
return $tmp179;

}
void org$frostlang$frostc$pass$RemoveAsserts$init(org$frostlang$frostc$pass$RemoveAsserts* param0) {

return;

}
void org$frostlang$frostc$pass$RemoveAsserts$cleanup(org$frostlang$frostc$pass$RemoveAsserts* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

