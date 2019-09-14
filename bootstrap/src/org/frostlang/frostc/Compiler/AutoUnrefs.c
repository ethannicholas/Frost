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
frost$collections$Stack* _12;
frost$collections$Array** _15;
frost$collections$Array* _16;
frost$collections$CollectionView* _17;
$fn2 _18;
frost$core$Int _19;
frost$core$Int* _21;
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
_12 = _11;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Compiler.frost:156:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_15 = &_12->contents;
_16 = *_15;
_17 = ((frost$collections$CollectionView*) _16);
ITable* $tmp3 = _17->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3 = $tmp3->next;
}
_18 = $tmp3->methods[0];
_19 = _18(_17);
_21 = &param0->depth;
*_21 = _19;
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
frost$collections$Stack* _6;
frost$collections$Array** _9;
frost$collections$Array* _10;
frost$collections$CollectionView* _11;
$fn4 _12;
frost$core$Int _13;
frost$core$Int* _15;
frost$core$Int _16;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _21;
org$frostlang$frostc$Compiler** _24;
org$frostlang$frostc$Compiler* _25;
frost$collections$Stack** _26;
frost$collections$Stack* _27;
frost$collections$Stack* _28;
frost$core$Int _29;
frost$core$Int _31;
int64_t _32;
int64_t _33;
bool _34;
frost$core$Bit _35;
bool _36;
frost$collections$Array** _40;
frost$collections$Array* _41;
frost$collections$CollectionView* _42;
$fn5 _43;
frost$core$Int _44;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$core$Int _52;
frost$collections$Array** _56;
frost$collections$Array* _57;
frost$collections$CollectionView* _58;
$fn6 _59;
frost$core$Int _60;
int64_t _61;
int64_t _62;
bool _63;
frost$core$Bit _64;
bool _65;
frost$core$Int _67;
frost$collections$Array** _71;
frost$collections$Array* _72;
frost$collections$Array* _73;
frost$collections$Array** _74;
frost$collections$Array* _75;
frost$collections$CollectionView* _76;
$fn7 _77;
frost$core$Int _78;
frost$core$Int _79;
int64_t _80;
int64_t _81;
int64_t _82;
frost$core$Int _83;
int64_t _84;
int64_t _85;
int64_t _86;
frost$core$Int _87;
frost$core$Int _89;
int64_t _90;
int64_t _91;
bool _92;
frost$core$Bit _93;
bool _94;
frost$collections$CollectionView* _96;
$fn8 _97;
frost$core$Int _98;
int64_t _99;
int64_t _100;
bool _101;
frost$core$Bit _102;
bool _103;
frost$core$Int _105;
frost$core$Object*** _109;
frost$core$Object** _110;
frost$core$Int64 _111;
int64_t _112;
frost$core$Object* _113;
frost$core$Object* _114;
frost$core$Object* _117;
frost$core$Object* _118;
frost$core$Object* _120;
org$frostlang$frostc$Compiler$EnclosingContext* _123;
frost$core$Object* _125;
org$frostlang$frostc$Compiler$EnclosingContext* _127;
frost$core$Object* _128;
frost$core$Object* _131;
org$frostlang$frostc$Compiler$EnclosingContext* _134;
frost$core$Int* _135;
frost$core$Int _136;
frost$core$Int _137;
int64_t _140;
int64_t _141;
bool _142;
frost$core$Bit _143;
bool _145;
org$frostlang$frostc$IR$Value** _147;
org$frostlang$frostc$IR$Value* _148;
frost$core$Object* _150;
org$frostlang$frostc$IR$Value* _152;
frost$core$Object* _153;
org$frostlang$frostc$Compiler** _157;
org$frostlang$frostc$Compiler* _158;
org$frostlang$frostc$Compiler$EnclosingContext* _159;
org$frostlang$frostc$Compiler** _162;
org$frostlang$frostc$Compiler* _163;
frost$collections$Stack** _164;
frost$collections$Stack* _165;
frost$collections$Stack* _166;
frost$core$Object* _167;
org$frostlang$frostc$Compiler$EnclosingContext* _168;
frost$core$Object* _169;
org$frostlang$frostc$IR$Value* _171;
frost$core$Object* _172;
org$frostlang$frostc$Compiler$EnclosingContext* _182;
frost$core$Object* _183;
org$frostlang$frostc$Compiler$EnclosingContext* _177;
frost$core$Object* _178;
frost$core$Object* _188;
org$frostlang$frostc$Compiler** _190;
org$frostlang$frostc$Compiler* _191;
frost$core$Object* _192;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:161
goto block1;
block1:;
_2 = &param0->compiler;
_3 = *_2;
_4 = &_3->enclosingContexts;
_5 = *_4;
_6 = _5;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Compiler.frost:161:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_9 = &_6->contents;
_10 = *_9;
_11 = ((frost$collections$CollectionView*) _10);
ITable* $tmp9 = _11->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
_12 = $tmp9->methods[0];
_13 = _12(_11);
_15 = &param0->depth;
_16 = *_15;
_17 = _13.value;
_18 = _16.value;
_19 = _17 > _18;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:162
_24 = &param0->compiler;
_25 = *_24;
_26 = &_25->enclosingContexts;
_27 = *_26;
_28 = _27;
_29 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Compiler.frost:162:56
_31 = (frost$core$Int) {0u};
_32 = _29.value;
_33 = _31.value;
_34 = _32 >= _33;
_35 = (frost$core$Bit) {_34};
_36 = _35.value;
if (_36) goto block8; else goto block7;
block8:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_40 = &_28->contents;
_41 = *_40;
_42 = ((frost$collections$CollectionView*) _41);
ITable* $tmp10 = _42->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
_43 = $tmp10->methods[0];
_44 = _43(_42);
_46 = _29.value;
_47 = _44.value;
_48 = _46 < _47;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block6; else goto block7;
block7:;
_52 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _52, &$s12);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_56 = &_28->contents;
_57 = *_56;
_58 = ((frost$collections$CollectionView*) _57);
ITable* $tmp13 = _58->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_59 = $tmp13->methods[0];
_60 = _59(_58);
_61 = _60.value;
_62 = _29.value;
_63 = _61 > _62;
_64 = (frost$core$Bit) {_63};
_65 = _64.value;
if (_65) goto block10; else goto block11;
block11:;
_67 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s14, _67);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_71 = &_28->contents;
_72 = *_71;
_73 = _72;
_74 = &_28->contents;
_75 = *_74;
_76 = ((frost$collections$CollectionView*) _75);
ITable* $tmp15 = _76->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
_77 = $tmp15->methods[0];
_78 = _77(_76);
_79 = (frost$core$Int) {1u};
_80 = _78.value;
_81 = _79.value;
_82 = _80 - _81;
_83 = (frost$core$Int) {_82};
_84 = _83.value;
_85 = _29.value;
_86 = _84 - _85;
_87 = (frost$core$Int) {_86};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_89 = (frost$core$Int) {0u};
_90 = _87.value;
_91 = _89.value;
_92 = _90 >= _91;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block15; else goto block14;
block15:;
_96 = ((frost$collections$CollectionView*) _73);
ITable* $tmp16 = _96->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
_97 = $tmp16->methods[0];
_98 = _97(_96);
_99 = _87.value;
_100 = _98.value;
_101 = _99 < _100;
_102 = (frost$core$Bit) {_101};
_103 = _102.value;
if (_103) goto block13; else goto block14;
block14:;
_105 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _105, &$s18);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_109 = &_73->data;
_110 = *_109;
_111 = frost$core$Int64$init$frost$core$Int(_87);
_112 = _111.value;
_113 = _110[_112];
_114 = _113;
frost$core$Frost$ref$frost$core$Object$Q(_114);
_117 = _113;
_118 = _117;
frost$core$Frost$ref$frost$core$Object$Q(_118);
_120 = _113;
frost$core$Frost$unref$frost$core$Object$Q(_120);
_123 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _117);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
_125 = ((frost$core$Object*) _123);
frost$core$Frost$ref$frost$core$Object$Q(_125);
_127 = *(&local0);
_128 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_128);
*(&local0) = _123;
_131 = _117;
frost$core$Frost$unref$frost$core$Object$Q(_131);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:163
_134 = *(&local0);
_135 = &_134->$rawValue;
_136 = *_135;
_137 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:164:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_140 = _136.value;
_141 = _137.value;
_142 = _140 == _141;
_143 = (frost$core$Bit) {_142};
_145 = _143.value;
if (_145) goto block17; else goto block18;
block17:;
_147 = &_134->$data.$VALUE_SCOPE.field0;
_148 = *_147;
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_150 = ((frost$core$Object*) _148);
frost$core$Frost$ref$frost$core$Object$Q(_150);
_152 = *(&local1);
_153 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_153);
*(&local1) = _148;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:165
_157 = &param0->compiler;
_158 = *_157;
_159 = *(&local0);
org$frostlang$frostc$Compiler$leaveScope$org$frostlang$frostc$Compiler$EnclosingContext(_158, _159);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:166
_162 = &param0->compiler;
_163 = *_162;
_164 = &_163->enclosingContexts;
_165 = *_164;
_166 = _165;
_167 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_166);
_168 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _167);
_169 = _167;
frost$core$Frost$unref$frost$core$Object$Q(_169);
_171 = *(&local1);
_172 = ((frost$core$Object*) _171);
frost$core$Frost$unref$frost$core$Object$Q(_172);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_182 = *(&local0);
_183 = ((frost$core$Object*) _182);
frost$core$Frost$unref$frost$core$Object$Q(_183);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block1;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:169
_177 = *(&local0);
_178 = ((frost$core$Object*) _177);
frost$core$Frost$unref$frost$core$Object$Q(_178);
*(&local0) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:160
_188 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_188);
_190 = &param0->compiler;
_191 = *_190;
_192 = ((frost$core$Object*) _191);
frost$core$Frost$unref$frost$core$Object$Q(_192);
return;

}

