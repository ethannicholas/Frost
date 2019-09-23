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

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn8)(org$frostlang$frostc$pass$RemoveUnreachableBlocks*, org$frostlang$frostc$IR$Block*, org$frostlang$frostc$pass$Analyzer*);
typedef void (*$fn9)(org$frostlang$frostc$pass$Analyzer*, frost$core$Int);
typedef frost$core$Bit (*$fn14)(org$frostlang$frostc$pass$RemoveUnreachableBlocks*, org$frostlang$frostc$IR$Block*, org$frostlang$frostc$pass$Analyzer*);
typedef void (*$fn15)(org$frostlang$frostc$pass$Analyzer*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x52\x65\x6d\x6f\x76\x65\x55\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65\x42\x6c\x6f\x63\x6b\x73", 49, -1383285895974991665, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

frost$core$Bit org$frostlang$frostc$pass$RemoveUnreachableBlocks$isUnreachable$org$frostlang$frostc$IR$Block$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$IR$Block* param1, org$frostlang$frostc$pass$Analyzer* param2) {
org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0 = (org$frostlang$frostc$pass$RemoveUnreachableBlocks*) rawSelf;

org$frostlang$frostc$LinkedList** _1;
org$frostlang$frostc$LinkedList* _2;
frost$collections$CollectionView* _3;
$fn2 _4;
frost$core$Int _5;
frost$core$Int _6;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _14;
org$frostlang$frostc$LinkedList** _17;
org$frostlang$frostc$LinkedList* _18;
frost$collections$CollectionView* _19;
$fn3 _20;
frost$core$Object* _21;
org$frostlang$frostc$IR$Statement* _22;
frost$core$Int* _23;
frost$core$Int _24;
frost$core$Int _25;
int64_t _28;
int64_t _29;
bool _30;
frost$core$Bit _31;
bool _33;
frost$core$Bit _36;
frost$core$Object* _37;
frost$core$Object* _40;
frost$core$Bit _44;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:7
_1 = &param1->statements;
_2 = *_1;
_3 = ((frost$collections$CollectionView*) _2);
ITable* $tmp4 = _3->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
_4 = $tmp4->methods[0];
_5 = _4(_3);
_6 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RemoveUnreachableBlocks.frost:7:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_9 = _5.value;
_10 = _6.value;
_11 = _9 == _10;
_12 = (frost$core$Bit) {_11};
_14 = _12.value;
if (_14) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:8
_17 = &param1->statements;
_18 = *_17;
_19 = ((frost$collections$CollectionView*) _18);
ITable* $tmp5 = _19->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5 = $tmp5->next;
}
_20 = $tmp5->methods[1];
_21 = _20(_19);
_22 = ((org$frostlang$frostc$IR$Statement*) _21);
_23 = &_22->$rawValue;
_24 = *_23;
_25 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RemoveUnreachableBlocks.frost:9:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_28 = _24.value;
_29 = _25.value;
_30 = _28 == _29;
_31 = (frost$core$Bit) {_30};
_33 = _31.value;
if (_33) goto block5; else goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:10
_36 = (frost$core$Bit) {true};
_37 = _21;
frost$core$Frost$unref$frost$core$Object$Q(_37);
return _36;
block4:;
_40 = _21;
frost$core$Frost$unref$frost$core$Object$Q(_40);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:14
_44 = (frost$core$Bit) {false};
return _44;

}
frost$core$Bit org$frostlang$frostc$pass$RemoveUnreachableBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {
org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0 = (org$frostlang$frostc$pass$RemoveUnreachableBlocks*) rawSelf;

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
frost$core$Bit _1;
frost$collections$Array** _4;
frost$collections$Array* _5;
frost$collections$CollectionView* _6;
$fn6 _7;
frost$core$Int _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
int64_t _12;
frost$core$Int _13;
frost$core$Int _14;
frost$core$Int _15;
frost$core$Bit _16;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _17;
frost$core$Int _18;
frost$core$Int _20;
frost$core$Int _21;
int64_t _24;
int64_t _25;
frost$core$Int _26;
frost$core$Bit _28;
bool _29;
frost$core$Int _30;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _35;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
int64_t _51;
int64_t _52;
bool _53;
frost$core$Bit _54;
bool _55;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _61;
frost$collections$Array** _64;
frost$collections$Array* _65;
frost$core$Int _66;
frost$core$Int _68;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _73;
frost$collections$CollectionView* _75;
$fn7 _76;
frost$core$Int _77;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _82;
frost$core$Int _84;
frost$core$Object*** _88;
frost$core$Object** _89;
frost$core$Int64 _90;
int64_t _91;
frost$core$Object* _92;
frost$core$Object* _93;
org$frostlang$frostc$IR$Block* _96;
frost$core$Object* _98;
org$frostlang$frostc$IR$Block* _100;
frost$core$Object* _101;
frost$core$Object* _104;
org$frostlang$frostc$IR$Block* _107;
$fn8 _108;
frost$core$Bit _109;
bool _110;
frost$core$Int _113;
$fn9 _114;
frost$core$Bit _117;
org$frostlang$frostc$IR$Block* _120;
frost$core$Object* _121;
frost$core$Int _125;
int64_t _127;
int64_t _128;
int64_t _129;
frost$core$Int _130;
int64_t _132;
int64_t _133;
bool _134;
frost$core$Bit _135;
bool _136;
int64_t _138;
int64_t _139;
bool _140;
frost$core$Bit _141;
bool _142;
int64_t _144;
int64_t _145;
int64_t _146;
frost$core$Int _147;
int64_t _149;
int64_t _150;
bool _151;
frost$core$Bit _152;
bool _153;
int64_t _155;
int64_t _156;
bool _157;
frost$core$Bit _158;
bool _159;
int64_t _161;
int64_t _162;
int64_t _163;
frost$core$Int _164;
frost$core$Bit _168;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:18
_1 = (frost$core$Bit) {false};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:19
_4 = &param1->blocks;
_5 = *_4;
_6 = ((frost$collections$CollectionView*) _5);
ITable* $tmp10 = _6->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
_7 = $tmp10->methods[0];
_8 = _7(_6);
_9 = (frost$core$Int) {1u};
_10 = _8.value;
_11 = _9.value;
_12 = _10 - _11;
_13 = (frost$core$Int) {_12};
_14 = (frost$core$Int) {1u};
_15 = (frost$core$Int) {18446744073709551615u};
_16 = (frost$core$Bit) {true};
_17 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_13, _14, _15, _16);
_18 = _17.start;
*(&local1) = _18;
_20 = _17.end;
_21 = _17.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from RemoveUnreachableBlocks.frost:19:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_24 = _21.value;
_25 = -_24;
_26 = (frost$core$Int) {_25};
_28 = _17.inclusive;
_29 = _28.value;
_30 = (frost$core$Int) {0u};
_31 = _21.value;
_32 = _30.value;
_33 = _31 >= _32;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block5; else goto block6;
block5:;
if (_29) goto block7; else goto block8;
block7:;
_38 = _18.value;
_39 = _20.value;
_40 = _38 <= _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block2; else goto block3;
block8:;
_44 = _18.value;
_45 = _20.value;
_46 = _44 < _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block2; else goto block3;
block6:;
if (_29) goto block9; else goto block10;
block9:;
_51 = _18.value;
_52 = _20.value;
_53 = _51 >= _52;
_54 = (frost$core$Bit) {_53};
_55 = _54.value;
if (_55) goto block2; else goto block3;
block10:;
_57 = _18.value;
_58 = _20.value;
_59 = _57 > _58;
_60 = (frost$core$Bit) {_59};
_61 = _60.value;
if (_61) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:20
_64 = &param1->blocks;
_65 = *_64;
_66 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from RemoveUnreachableBlocks.frost:20:31
_68 = (frost$core$Int) {0u};
_69 = _66.value;
_70 = _68.value;
_71 = _69 >= _70;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block14; else goto block13;
block14:;
_75 = ((frost$collections$CollectionView*) _65);
ITable* $tmp11 = _75->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
_76 = $tmp11->methods[0];
_77 = _76(_75);
_78 = _66.value;
_79 = _77.value;
_80 = _78 < _79;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block12; else goto block13;
block13:;
_84 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _84, &$s13);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_88 = &_65->data;
_89 = *_88;
_90 = frost$core$Int64$init$frost$core$Int(_66);
_91 = _90.value;
_92 = _89[_91];
_93 = _92;
frost$core$Frost$ref$frost$core$Object$Q(_93);
_96 = ((org$frostlang$frostc$IR$Block*) _92);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_98 = ((frost$core$Object*) _96);
frost$core$Frost$ref$frost$core$Object$Q(_98);
_100 = *(&local2);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local2) = _96;
_104 = _92;
frost$core$Frost$unref$frost$core$Object$Q(_104);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:21
_107 = *(&local2);
_108 = ($fn14) param0->$class->vtable[2];
_109 = _108(param0, _107, param2);
_110 = _109.value;
if (_110) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:22
_113 = *(&local1);
_114 = ($fn15) param2->$class->vtable[14];
_114(param2, _113);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:23
_117 = (frost$core$Bit) {true};
*(&local0) = _117;
goto block16;
block16:;
_120 = *(&local2);
_121 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_121);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_125 = *(&local1);
if (_35) goto block18; else goto block19;
block18:;
_127 = _20.value;
_128 = _125.value;
_129 = _127 - _128;
_130 = (frost$core$Int) {_129};
if (_29) goto block20; else goto block21;
block20:;
_132 = _130.value;
_133 = _21.value;
_134 = _132 >= _133;
_135 = (frost$core$Bit) {_134};
_136 = _135.value;
if (_136) goto block17; else goto block3;
block21:;
_138 = _130.value;
_139 = _21.value;
_140 = _138 > _139;
_141 = (frost$core$Bit) {_140};
_142 = _141.value;
if (_142) goto block17; else goto block3;
block19:;
_144 = _125.value;
_145 = _20.value;
_146 = _144 - _145;
_147 = (frost$core$Int) {_146};
if (_29) goto block22; else goto block23;
block22:;
_149 = _147.value;
_150 = _26.value;
_151 = _149 >= _150;
_152 = (frost$core$Bit) {_151};
_153 = _152.value;
if (_153) goto block17; else goto block3;
block23:;
_155 = _147.value;
_156 = _26.value;
_157 = _155 > _156;
_158 = (frost$core$Bit) {_157};
_159 = _158.value;
if (_159) goto block17; else goto block3;
block17:;
_161 = _125.value;
_162 = _21.value;
_163 = _161 + _162;
_164 = (frost$core$Int) {_163};
*(&local1) = _164;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:26
_168 = *(&local0);
return _168;

}
void org$frostlang$frostc$pass$RemoveUnreachableBlocks$init(void* rawSelf) {
org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0 = (org$frostlang$frostc$pass$RemoveUnreachableBlocks*) rawSelf;

return;

}
void org$frostlang$frostc$pass$RemoveUnreachableBlocks$cleanup(void* rawSelf) {
org$frostlang$frostc$pass$RemoveUnreachableBlocks* param0 = (org$frostlang$frostc$pass$RemoveUnreachableBlocks*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveUnreachableBlocks.frost:5
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

