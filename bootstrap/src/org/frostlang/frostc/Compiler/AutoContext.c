#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$AutoContext$class_type org$frostlang$frostc$Compiler$AutoContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$AutoContext$cleanup} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$String* (*$fn17)(frost$core$Object*);
typedef frost$core$String* (*$fn20)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x43\x6f\x6e\x74\x65\x78\x74", 41, -3079701472992325923, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x74\x6f\x70\x20\x6c\x65\x76\x65\x6c\x20\x63\x6f\x6e\x74\x65\x78\x74\x20\x74\x6f\x20\x62\x65\x20", 33, -8596321363108449265, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 3820956024483964812, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Compiler$EnclosingContext* param2) {
org$frostlang$frostc$Compiler$AutoContext* param0 = (org$frostlang$frostc$Compiler$AutoContext*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
frost$core$Object* _10;
org$frostlang$frostc$Compiler$EnclosingContext** _12;
org$frostlang$frostc$Compiler$EnclosingContext* _13;
frost$core$Object* _14;
org$frostlang$frostc$Compiler$EnclosingContext** _16;
frost$collections$Stack** _19;
frost$collections$Stack* _20;
frost$core$Object* _21;
frost$collections$Array** _24;
frost$collections$Array* _25;
frost$core$Object* _26;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:135
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->compiler;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:136
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->context;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->context;
*_16 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:137
_19 = &param1->enclosingContexts;
_20 = *_19;
_21 = ((frost$core$Object*) param2);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Compiler.frost:137:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_24 = &_20->contents;
_25 = *_24;
_26 = _21;
frost$collections$Array$add$frost$collections$Array$T(_25, _26);
return;

}
void org$frostlang$frostc$Compiler$AutoContext$cleanup(void* rawSelf) {
org$frostlang$frostc$Compiler$AutoContext* param0 = (org$frostlang$frostc$Compiler$AutoContext*) rawSelf;

org$frostlang$frostc$Compiler** _1;
org$frostlang$frostc$Compiler* _2;
frost$collections$Stack** _3;
frost$collections$Stack* _4;
frost$core$Int _5;
frost$core$Int _7;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _12;
frost$collections$Array** _16;
frost$collections$Array* _17;
frost$collections$CollectionView* _18;
$fn2 _19;
frost$core$Int _20;
int64_t _22;
int64_t _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Int _28;
frost$collections$Array** _32;
frost$collections$Array* _33;
frost$collections$CollectionView* _34;
$fn3 _35;
frost$core$Int _36;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$core$Int _43;
frost$collections$Array** _47;
frost$collections$Array* _48;
frost$collections$Array** _49;
frost$collections$Array* _50;
frost$collections$CollectionView* _51;
$fn4 _52;
frost$core$Int _53;
frost$core$Int _54;
int64_t _55;
int64_t _56;
int64_t _57;
frost$core$Int _58;
int64_t _59;
int64_t _60;
int64_t _61;
frost$core$Int _62;
frost$core$Int _64;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _69;
frost$collections$CollectionView* _71;
$fn5 _72;
frost$core$Int _73;
int64_t _74;
int64_t _75;
bool _76;
frost$core$Bit _77;
bool _78;
frost$core$Int _80;
frost$core$Object*** _84;
frost$core$Object** _85;
frost$core$Int64 _86;
int64_t _87;
frost$core$Object* _88;
frost$core$Object* _89;
frost$core$Object* _92;
frost$core$Object* _93;
frost$core$Object* _95;
org$frostlang$frostc$Compiler$EnclosingContext* _98;
org$frostlang$frostc$Compiler$EnclosingContext** _99;
org$frostlang$frostc$Compiler$EnclosingContext* _100;
bool _101;
frost$core$Bit _102;
bool _103;
frost$core$Int _105;
org$frostlang$frostc$Compiler$EnclosingContext** _106;
org$frostlang$frostc$Compiler$EnclosingContext* _107;
frost$core$Object* _108;
$fn6 _111;
frost$core$String* _112;
frost$core$String* _113;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$String* _121;
org$frostlang$frostc$Compiler** _122;
org$frostlang$frostc$Compiler* _123;
frost$collections$Stack** _124;
frost$collections$Stack* _125;
frost$core$Object* _126;
$fn7 _129;
frost$core$String* _130;
frost$core$String* _131;
frost$core$Object* _132;
frost$core$Object* _134;
frost$core$Object* _136;
frost$core$Object* _140;
frost$core$Object* _142;
frost$core$Object* _144;
frost$core$Object* _147;
org$frostlang$frostc$Compiler** _150;
org$frostlang$frostc$Compiler* _151;
frost$collections$Stack** _152;
frost$collections$Stack* _153;
frost$core$Object* _154;
org$frostlang$frostc$Compiler$EnclosingContext* _155;
frost$core$Object* _156;
frost$core$Object* _159;
org$frostlang$frostc$Compiler** _161;
org$frostlang$frostc$Compiler* _162;
frost$core$Object* _163;
org$frostlang$frostc$Compiler$EnclosingContext** _165;
org$frostlang$frostc$Compiler$EnclosingContext* _166;
frost$core$Object* _167;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:142
_1 = &param0->compiler;
_2 = *_1;
_3 = &_2->enclosingContexts;
_4 = *_3;
_5 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Compiler.frost:142:46
_7 = (frost$core$Int) {0u};
_8 = _5.value;
_9 = _7.value;
_10 = _8 >= _9;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_16 = &_4->contents;
_17 = *_16;
_18 = ((frost$collections$CollectionView*) _17);
ITable* $tmp8 = _18->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
_19 = $tmp8->methods[0];
_20 = _19(_18);
_22 = _5.value;
_23 = _20.value;
_24 = _22 < _23;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block2; else goto block3;
block3:;
_28 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _28, &$s10);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_32 = &_4->contents;
_33 = *_32;
_34 = ((frost$collections$CollectionView*) _33);
ITable* $tmp11 = _34->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
_35 = $tmp11->methods[0];
_36 = _35(_34);
_37 = _36.value;
_38 = _5.value;
_39 = _37 > _38;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block6; else goto block7;
block7:;
_43 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s12, _43);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_47 = &_4->contents;
_48 = *_47;
_49 = &_4->contents;
_50 = *_49;
_51 = ((frost$collections$CollectionView*) _50);
ITable* $tmp13 = _51->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_52 = $tmp13->methods[0];
_53 = _52(_51);
_54 = (frost$core$Int) {1u};
_55 = _53.value;
_56 = _54.value;
_57 = _55 - _56;
_58 = (frost$core$Int) {_57};
_59 = _58.value;
_60 = _5.value;
_61 = _59 - _60;
_62 = (frost$core$Int) {_61};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_64 = (frost$core$Int) {0u};
_65 = _62.value;
_66 = _64.value;
_67 = _65 >= _66;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block11; else goto block10;
block11:;
_71 = ((frost$collections$CollectionView*) _48);
ITable* $tmp14 = _71->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp14 = $tmp14->next;
}
_72 = $tmp14->methods[0];
_73 = _72(_71);
_74 = _62.value;
_75 = _73.value;
_76 = _74 < _75;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block9; else goto block10;
block10:;
_80 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, _80, &$s16);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_84 = &_48->data;
_85 = *_84;
_86 = frost$core$Int64$init$frost$core$Int(_62);
_87 = _86.value;
_88 = _85[_87];
_89 = _88;
frost$core$Frost$ref$frost$core$Object$Q(_89);
_92 = _88;
_93 = _92;
frost$core$Frost$ref$frost$core$Object$Q(_93);
_95 = _88;
frost$core$Frost$unref$frost$core$Object$Q(_95);
_98 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _92);
_99 = &param0->context;
_100 = *_99;
_101 = _98 == _100;
_102 = (frost$core$Bit) {_101};
_103 = _102.value;
if (_103) goto block12; else goto block13;
block13:;
_105 = (frost$core$Int) {142u};
_106 = &param0->context;
_107 = *_106;
_108 = ((frost$core$Object*) _107);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:143:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_111 = ($fn17) _108->$class->vtable[0];
_112 = _111(_108);
_113 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s18, _112);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_113, &$s19);
_122 = &param0->compiler;
_123 = *_122;
_124 = &_123->enclosingContexts;
_125 = *_124;
_126 = ((frost$core$Object*) _125);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:143:79
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_129 = ($fn20) _126->$class->vtable[0];
_130 = _129(_126);
_131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_121, _130);
_132 = ((frost$core$Object*) _131);
frost$core$Frost$ref$frost$core$Object$Q(_132);
_134 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_134);
_136 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_136);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, _105, _131);
_140 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_140);
_142 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_144);
abort(); // unreachable
block12:;
_147 = _92;
frost$core$Frost$unref$frost$core$Object$Q(_147);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:145
_150 = &param0->compiler;
_151 = *_150;
_152 = &_151->enclosingContexts;
_153 = *_152;
_154 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_153);
_155 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _154);
_156 = _154;
frost$core$Frost$unref$frost$core$Object$Q(_156);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:141
_159 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_159);
_161 = &param0->compiler;
_162 = *_161;
_163 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_163);
_165 = &param0->context;
_166 = *_165;
_167 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_167);
return;

}

