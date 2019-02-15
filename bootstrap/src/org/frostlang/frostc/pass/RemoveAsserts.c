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
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/pass/Analyzer.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$RemoveAsserts$class_type org$frostlang$frostc$pass$RemoveAsserts$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$RemoveAsserts$cleanup, org$frostlang$frostc$pass$RemoveAsserts$isAssertionFail$org$frostlang$frostc$IR$Statement$R$frost$core$Bit, org$frostlang$frostc$pass$RemoveAsserts$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit} };

typedef frost$core$Int64 (*$fn45)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn105)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn125)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn129)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn134)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn139)(org$frostlang$frostc$pass$RemoveAsserts*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn144)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x52\x65\x6d\x6f\x76\x65\x41\x73\x73\x65\x72\x74\x73", 39, 2675365451163764056, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, -1047342833001589897, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, 4237142976622831502, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };

frost$core$Bit org$frostlang$frostc$pass$RemoveAsserts$isAssertionFail$org$frostlang$frostc$IR$Statement$R$frost$core$Bit(org$frostlang$frostc$pass$RemoveAsserts* param0, org$frostlang$frostc$IR$Statement* param1) {

org$frostlang$frostc$MethodDecl* local0 = NULL;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:7
frost$core$Int64* $tmp2 = &param1->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {26u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RemoveAsserts.frost:8:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:9
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp26 = &$tmp25->_valid;
frost$core$Bit $tmp27 = *$tmp26;
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s30, $tmp29);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:12
frost$core$Bit $tmp39 = (frost$core$Bit) {false};
return $tmp39;
block1:;
goto block12;
block12:;

}
frost$core$Bit org$frostlang$frostc$pass$RemoveAsserts$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$RemoveAsserts* param0, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {

frost$core$Bit local0;
frost$core$Int64 local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
org$frostlang$frostc$IR$Statement* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:18
frost$core$Bit $tmp40 = (frost$core$Bit) {false};
*(&local0) = $tmp40;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:19
frost$collections$Array** $tmp41 = &param1->blocks;
frost$collections$Array* $tmp42 = *$tmp41;
ITable* $tmp43 = ((frost$collections$CollectionView*) $tmp42)->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[0];
frost$core$Int64 $tmp46 = $tmp44(((frost$collections$CollectionView*) $tmp42));
frost$core$Int64 $tmp47 = (frost$core$Int64) {1u};
int64_t $tmp48 = $tmp46.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 - $tmp49;
frost$core$Int64 $tmp51 = (frost$core$Int64) {$tmp50};
frost$core$Int64 $tmp52 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp53 = (frost$core$Int64) {18446744073709551615u};
frost$core$Bit $tmp54 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp55 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp51, $tmp52, $tmp53, $tmp54);
frost$core$Int64 $tmp56 = $tmp55.start;
*(&local1) = $tmp56;
frost$core$Int64 $tmp57 = $tmp55.end;
frost$core$Int64 $tmp58 = $tmp55.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp59 = $tmp58.value;
frost$core$UInt64 $tmp60 = (frost$core$UInt64) {((uint64_t) $tmp59)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from RemoveAsserts.frost:19:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp61 = $tmp58.value;
int64_t $tmp62 = -$tmp61;
frost$core$Int64 $tmp63 = (frost$core$Int64) {$tmp62};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp64 = $tmp63.value;
frost$core$UInt64 $tmp65 = (frost$core$UInt64) {((uint64_t) $tmp64)};
frost$core$Bit $tmp66 = $tmp55.inclusive;
bool $tmp67 = $tmp66.value;
frost$core$Int64 $tmp68 = (frost$core$Int64) {0u};
int64_t $tmp69 = $tmp58.value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 >= $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block7; else goto block8;
block7:;
if ($tmp67) goto block9; else goto block10;
block9:;
int64_t $tmp74 = $tmp56.value;
int64_t $tmp75 = $tmp57.value;
bool $tmp76 = $tmp74 <= $tmp75;
frost$core$Bit $tmp77 = (frost$core$Bit) {$tmp76};
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block4; else goto block5;
block10:;
int64_t $tmp79 = $tmp56.value;
int64_t $tmp80 = $tmp57.value;
bool $tmp81 = $tmp79 < $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block4; else goto block5;
block8:;
if ($tmp67) goto block11; else goto block12;
block11:;
int64_t $tmp84 = $tmp56.value;
int64_t $tmp85 = $tmp57.value;
bool $tmp86 = $tmp84 >= $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block4; else goto block5;
block12:;
int64_t $tmp89 = $tmp56.value;
int64_t $tmp90 = $tmp57.value;
bool $tmp91 = $tmp89 > $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:20
frost$collections$Array** $tmp94 = &param1->blocks;
frost$collections$Array* $tmp95 = *$tmp94;
frost$core$Int64 $tmp96 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from RemoveAsserts.frost:20:31
frost$core$Int64 $tmp97 = (frost$core$Int64) {0u};
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97.value;
bool $tmp100 = $tmp98 >= $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block16; else goto block15;
block16:;
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
if ($tmp111) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp112 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s113, $tmp112, &$s114);
abort(); // unreachable
block14:;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:21
org$frostlang$frostc$IR$Block* $tmp120 = *(&local2);
frost$collections$Array** $tmp121 = &$tmp120->statements;
frost$collections$Array* $tmp122 = *$tmp121;
ITable* $tmp123 = ((frost$collections$Iterable*) $tmp122)->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp123 = $tmp123->next;
}
$fn125 $tmp124 = $tmp123->methods[0];
frost$collections$Iterator* $tmp126 = $tmp124(((frost$collections$Iterable*) $tmp122));
goto block17;
block17:;
ITable* $tmp127 = $tmp126->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[0];
frost$core$Bit $tmp130 = $tmp128($tmp126);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block19; else goto block18;
block18:;
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
ITable* $tmp132 = $tmp126->$class->itable;
while ($tmp132->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[1];
frost$core$Object* $tmp135 = $tmp133($tmp126);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp135)));
org$frostlang$frostc$IR$Statement* $tmp136 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) $tmp135);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:22
org$frostlang$frostc$IR$Statement* $tmp137 = *(&local3);
$fn139 $tmp138 = ($fn139) param0->$class->vtable[2];
frost$core$Bit $tmp140 = $tmp138(param0, $tmp137);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:23
org$frostlang$frostc$IR$Block* $tmp142 = *(&local2);
$fn144 $tmp143 = ($fn144) param2->$class->vtable[11];
$tmp143(param2, $tmp142);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:24
frost$core$Bit $tmp145 = (frost$core$Bit) {true};
*(&local0) = $tmp145;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:25
frost$core$Frost$unref$frost$core$Object$Q($tmp135);
org$frostlang$frostc$IR$Statement* $tmp146 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q($tmp135);
org$frostlang$frostc$IR$Statement* $tmp147 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
org$frostlang$frostc$IR$Block* $tmp148 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Int64 $tmp149 = *(&local1);
if ($tmp73) goto block23; else goto block24;
block23:;
int64_t $tmp150 = $tmp57.value;
int64_t $tmp151 = $tmp149.value;
int64_t $tmp152 = $tmp150 - $tmp151;
frost$core$Int64 $tmp153 = (frost$core$Int64) {$tmp152};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp154 = $tmp153.value;
frost$core$UInt64 $tmp155 = (frost$core$UInt64) {((uint64_t) $tmp154)};
if ($tmp67) goto block26; else goto block27;
block26:;
uint64_t $tmp156 = $tmp155.value;
uint64_t $tmp157 = $tmp60.value;
bool $tmp158 = $tmp156 >= $tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block22; else goto block5;
block27:;
uint64_t $tmp161 = $tmp155.value;
uint64_t $tmp162 = $tmp60.value;
bool $tmp163 = $tmp161 > $tmp162;
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block22; else goto block5;
block24:;
int64_t $tmp166 = $tmp149.value;
int64_t $tmp167 = $tmp57.value;
int64_t $tmp168 = $tmp166 - $tmp167;
frost$core$Int64 $tmp169 = (frost$core$Int64) {$tmp168};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp170 = $tmp169.value;
frost$core$UInt64 $tmp171 = (frost$core$UInt64) {((uint64_t) $tmp170)};
if ($tmp67) goto block29; else goto block30;
block29:;
uint64_t $tmp172 = $tmp171.value;
uint64_t $tmp173 = $tmp65.value;
bool $tmp174 = $tmp172 >= $tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block22; else goto block5;
block30:;
uint64_t $tmp177 = $tmp171.value;
uint64_t $tmp178 = $tmp65.value;
bool $tmp179 = $tmp177 > $tmp178;
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179};
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block22; else goto block5;
block22:;
int64_t $tmp182 = $tmp149.value;
int64_t $tmp183 = $tmp58.value;
int64_t $tmp184 = $tmp182 + $tmp183;
frost$core$Int64 $tmp185 = (frost$core$Int64) {$tmp184};
*(&local1) = $tmp185;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:29
frost$core$Bit $tmp186 = *(&local0);
return $tmp186;

}
void org$frostlang$frostc$pass$RemoveAsserts$init(org$frostlang$frostc$pass$RemoveAsserts* param0) {

return;

}
void org$frostlang$frostc$pass$RemoveAsserts$cleanup(org$frostlang$frostc$pass$RemoveAsserts* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:5
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

