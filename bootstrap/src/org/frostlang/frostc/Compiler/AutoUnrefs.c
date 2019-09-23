#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$AutoUnrefs$class_type org$frostlang$frostc$Compiler$AutoUnrefs$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$AutoUnrefs$cleanup} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x55\x6e\x72\x65\x66\x73", 40, -6018723246798040577, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

void org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* param1) {
org$frostlang$frostc$Compiler$AutoUnrefs* param0 = (org$frostlang$frostc$Compiler$AutoUnrefs*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
frost$collections$Stack** _10;
frost$collections$Stack* _11;
frost$collections$Array** _14;
frost$collections$Array* _15;
frost$collections$CollectionView* _16;
$fn2 _17;
frost$core$Int _18;
frost$core$Int* _20;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:155
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->compiler;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:156
_10 = &param1->enclosingContexts;
_11 = *_10;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Compiler.frost:156:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_14 = &_11->contents;
_15 = *_14;
_16 = ((frost$collections$CollectionView*) _15);
ITable* $tmp3 = _16->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3 = $tmp3->next;
}
_17 = $tmp3->methods[0];
_18 = _17(_16);
_20 = &param0->depth;
*_20 = _18;
return;

}
void org$frostlang$frostc$Compiler$AutoUnrefs$cleanup(void* rawSelf) {
org$frostlang$frostc$Compiler$AutoUnrefs* param0 = (org$frostlang$frostc$Compiler$AutoUnrefs*) rawSelf;

org$frostlang$frostc$Compiler$EnclosingContext* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$Compiler** _2;
org$frostlang$frostc$Compiler* _3;
frost$collections$Stack** _4;
frost$collections$Stack* _5;
frost$collections$Array** _8;
frost$collections$Array* _9;
frost$collections$CollectionView* _10;
$fn4 _11;
frost$core$Int _12;
frost$core$Int* _14;
frost$core$Int _15;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _20;
org$frostlang$frostc$Compiler** _23;
org$frostlang$frostc$Compiler* _24;
frost$collections$Stack** _25;
frost$collections$Stack* _26;
frost$core$Int _27;
frost$core$Int _29;
int64_t _30;
int64_t _31;
bool _32;
frost$core$Bit _33;
bool _34;
frost$collections$Array** _38;
frost$collections$Array* _39;
frost$collections$CollectionView* _40;
$fn5 _41;
frost$core$Int _42;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
frost$core$Int _50;
frost$collections$Array** _54;
frost$collections$Array* _55;
frost$collections$CollectionView* _56;
$fn6 _57;
frost$core$Int _58;
int64_t _59;
int64_t _60;
bool _61;
frost$core$Bit _62;
bool _63;
frost$core$Int _65;
frost$collections$Array** _69;
frost$collections$Array* _70;
frost$collections$Array** _71;
frost$collections$Array* _72;
frost$collections$CollectionView* _73;
$fn7 _74;
frost$core$Int _75;
frost$core$Int _76;
int64_t _77;
int64_t _78;
int64_t _79;
frost$core$Int _80;
int64_t _81;
int64_t _82;
int64_t _83;
frost$core$Int _84;
frost$core$Int _86;
int64_t _87;
int64_t _88;
bool _89;
frost$core$Bit _90;
bool _91;
frost$collections$CollectionView* _93;
$fn8 _94;
frost$core$Int _95;
int64_t _96;
int64_t _97;
bool _98;
frost$core$Bit _99;
bool _100;
frost$core$Int _102;
frost$core$Object*** _106;
frost$core$Object** _107;
frost$core$Int64 _108;
int64_t _109;
frost$core$Object* _110;
frost$core$Object* _111;
frost$core$Object* _114;
frost$core$Object* _115;
frost$core$Object* _117;
org$frostlang$frostc$Compiler$EnclosingContext* _120;
frost$core$Object* _122;
org$frostlang$frostc$Compiler$EnclosingContext* _124;
frost$core$Object* _125;
frost$core$Object* _128;
org$frostlang$frostc$Compiler$EnclosingContext* _131;
frost$core$Int* _132;
frost$core$Int _133;
frost$core$Int _134;
int64_t _137;
int64_t _138;
bool _139;
frost$core$Bit _140;
bool _142;
org$frostlang$frostc$IR$Value** _144;
org$frostlang$frostc$IR$Value* _145;
frost$core$Object* _147;
org$frostlang$frostc$IR$Value* _149;
frost$core$Object* _150;
org$frostlang$frostc$Compiler** _154;
org$frostlang$frostc$Compiler* _155;
org$frostlang$frostc$Compiler$EnclosingContext* _156;
org$frostlang$frostc$Compiler** _159;
org$frostlang$frostc$Compiler* _160;
frost$collections$Stack** _161;
frost$collections$Stack* _162;
frost$core$Object* _163;
org$frostlang$frostc$Compiler$EnclosingContext* _164;
frost$core$Object* _165;
org$frostlang$frostc$IR$Value* _167;
frost$core$Object* _168;
org$frostlang$frostc$Compiler$EnclosingContext* _178;
frost$core$Object* _179;
org$frostlang$frostc$Compiler$EnclosingContext* _173;
frost$core$Object* _174;
frost$core$Object* _184;
org$frostlang$frostc$Compiler** _186;
org$frostlang$frostc$Compiler* _187;
frost$core$Object* _188;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:161
goto block1;
block1:;
_2 = &param0->compiler;
_3 = *_2;
_4 = &_3->enclosingContexts;
_5 = *_4;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Compiler.frost:161:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_8 = &_5->contents;
_9 = *_8;
_10 = ((frost$collections$CollectionView*) _9);
ITable* $tmp9 = _10->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
_11 = $tmp9->methods[0];
_12 = _11(_10);
_14 = &param0->depth;
_15 = *_14;
_16 = _12.value;
_17 = _15.value;
_18 = _16 > _17;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:162
_23 = &param0->compiler;
_24 = *_23;
_25 = &_24->enclosingContexts;
_26 = *_25;
_27 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Compiler.frost:162:56
_29 = (frost$core$Int) {0u};
_30 = _27.value;
_31 = _29.value;
_32 = _30 >= _31;
_33 = (frost$core$Bit) {_32};
_34 = _33.value;
if (_34) goto block8; else goto block7;
block8:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_38 = &_26->contents;
_39 = *_38;
_40 = ((frost$collections$CollectionView*) _39);
ITable* $tmp10 = _40->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
_41 = $tmp10->methods[0];
_42 = _41(_40);
_44 = _27.value;
_45 = _42.value;
_46 = _44 < _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block6; else goto block7;
block7:;
_50 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _50, &$s12);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_54 = &_26->contents;
_55 = *_54;
_56 = ((frost$collections$CollectionView*) _55);
ITable* $tmp13 = _56->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_57 = $tmp13->methods[0];
_58 = _57(_56);
_59 = _58.value;
_60 = _27.value;
_61 = _59 > _60;
_62 = (frost$core$Bit) {_61};
_63 = _62.value;
if (_63) goto block10; else goto block11;
block11:;
_65 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s14, _65);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_69 = &_26->contents;
_70 = *_69;
_71 = &_26->contents;
_72 = *_71;
_73 = ((frost$collections$CollectionView*) _72);
ITable* $tmp15 = _73->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
_74 = $tmp15->methods[0];
_75 = _74(_73);
_76 = (frost$core$Int) {1u};
_77 = _75.value;
_78 = _76.value;
_79 = _77 - _78;
_80 = (frost$core$Int) {_79};
_81 = _80.value;
_82 = _27.value;
_83 = _81 - _82;
_84 = (frost$core$Int) {_83};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_86 = (frost$core$Int) {0u};
_87 = _84.value;
_88 = _86.value;
_89 = _87 >= _88;
_90 = (frost$core$Bit) {_89};
_91 = _90.value;
if (_91) goto block15; else goto block14;
block15:;
_93 = ((frost$collections$CollectionView*) _70);
ITable* $tmp16 = _93->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
_94 = $tmp16->methods[0];
_95 = _94(_93);
_96 = _84.value;
_97 = _95.value;
_98 = _96 < _97;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block13; else goto block14;
block14:;
_102 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _102, &$s18);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_106 = &_70->data;
_107 = *_106;
_108 = frost$core$Int64$init$frost$core$Int(_84);
_109 = _108.value;
_110 = _107[_109];
_111 = _110;
frost$core$Frost$ref$frost$core$Object$Q(_111);
_114 = _110;
_115 = _114;
frost$core$Frost$ref$frost$core$Object$Q(_115);
_117 = _110;
frost$core$Frost$unref$frost$core$Object$Q(_117);
_120 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _114);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_122 = ((frost$core$Object*) _120);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_124 = *(&local0);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local0) = _120;
_128 = _114;
frost$core$Frost$unref$frost$core$Object$Q(_128);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:163
_131 = *(&local0);
_132 = &_131->$rawValue;
_133 = *_132;
_134 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:164:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_137 = _133.value;
_138 = _134.value;
_139 = _137 == _138;
_140 = (frost$core$Bit) {_139};
_142 = _140.value;
if (_142) goto block17; else goto block18;
block17:;
_144 = &_131->$data.$VALUE_SCOPE.field0;
_145 = *_144;
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_147 = ((frost$core$Object*) _145);
frost$core$Frost$ref$frost$core$Object$Q(_147);
_149 = *(&local1);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local1) = _145;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:165
_154 = &param0->compiler;
_155 = *_154;
_156 = *(&local0);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(_155, _156);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:166
_159 = &param0->compiler;
_160 = *_159;
_161 = &_160->enclosingContexts;
_162 = *_161;
_163 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_162);
_164 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _163);
_165 = _163;
frost$core$Frost$unref$frost$core$Object$Q(_165);
_167 = *(&local1);
_168 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_168);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_178 = *(&local0);
_179 = ((frost$core$Object*) _178);
frost$core$Frost$unref$frost$core$Object$Q(_179);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block1;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:169
_173 = *(&local0);
_174 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_174);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:160
_184 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_184);
_186 = &param0->compiler;
_187 = *_186;
_188 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_188);
return;

}

