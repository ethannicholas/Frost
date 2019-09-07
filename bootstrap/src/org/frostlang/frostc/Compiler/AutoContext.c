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

void org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext(org$frostlang$frostc$Compiler$AutoContext* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Compiler$EnclosingContext* param2) {

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
frost$collections$Stack* _21;
frost$core$Object* _22;
frost$collections$Array** _25;
frost$collections$Array* _26;
frost$collections$Array* _27;
frost$core$Object* _28;
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
_21 = _20;
_22 = ((frost$core$Object*) param2);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Compiler.frost:137:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_25 = &_21->contents;
_26 = *_25;
_27 = _26;
_28 = _22;
frost$collections$Array$add$frost$collections$Array$T(_27, _28);
return;

}
void org$frostlang$frostc$Compiler$AutoContext$cleanup(org$frostlang$frostc$Compiler$AutoContext* param0) {

org$frostlang$frostc$Compiler** _1;
org$frostlang$frostc$Compiler* _2;
frost$collections$Stack** _3;
frost$collections$Stack* _4;
frost$collections$Stack* _5;
frost$core$Int _6;
frost$core$Int _8;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _13;
frost$collections$Array** _17;
frost$collections$Array* _18;
frost$collections$CollectionView* _19;
$fn2 _20;
frost$core$Int _21;
int64_t _23;
int64_t _24;
bool _25;
frost$core$Bit _26;
bool _27;
frost$core$Int _29;
frost$collections$Array** _33;
frost$collections$Array* _34;
frost$collections$CollectionView* _35;
$fn3 _36;
frost$core$Int _37;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _44;
frost$collections$Array** _48;
frost$collections$Array* _49;
frost$collections$Array* _50;
frost$collections$Array** _51;
frost$collections$Array* _52;
frost$collections$CollectionView* _53;
$fn4 _54;
frost$core$Int _55;
frost$core$Int _56;
int64_t _57;
int64_t _58;
int64_t _59;
frost$core$Int _60;
int64_t _61;
int64_t _62;
int64_t _63;
frost$core$Int _64;
frost$core$Int _66;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _71;
frost$collections$CollectionView* _73;
$fn5 _74;
frost$core$Int _75;
int64_t _76;
int64_t _77;
bool _78;
frost$core$Bit _79;
bool _80;
frost$core$Int _82;
frost$core$Object*** _86;
frost$core$Object** _87;
frost$core$Int64 _88;
int64_t _89;
frost$core$Object* _90;
frost$core$Object* _91;
frost$core$Object* _94;
frost$core$Object* _95;
frost$core$Object* _97;
org$frostlang$frostc$Compiler$EnclosingContext* _100;
org$frostlang$frostc$Compiler$EnclosingContext** _101;
org$frostlang$frostc$Compiler$EnclosingContext* _102;
bool _103;
frost$core$Bit _104;
bool _105;
frost$core$Int _107;
org$frostlang$frostc$Compiler$EnclosingContext** _108;
org$frostlang$frostc$Compiler$EnclosingContext* _109;
frost$core$Object* _110;
$fn6 _113;
frost$core$String* _114;
frost$core$String* _115;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$String* _123;
org$frostlang$frostc$Compiler** _124;
org$frostlang$frostc$Compiler* _125;
frost$collections$Stack** _126;
frost$collections$Stack* _127;
frost$core$Object* _128;
$fn7 _131;
frost$core$String* _132;
frost$core$String* _133;
frost$core$Object* _134;
frost$core$Object* _136;
frost$core$Object* _138;
frost$core$Object* _142;
frost$core$Object* _144;
frost$core$Object* _146;
frost$core$Object* _149;
org$frostlang$frostc$Compiler** _152;
org$frostlang$frostc$Compiler* _153;
frost$collections$Stack** _154;
frost$collections$Stack* _155;
frost$collections$Stack* _156;
frost$core$Object* _157;
org$frostlang$frostc$Compiler$EnclosingContext* _158;
frost$core$Object* _159;
frost$core$Object* _162;
org$frostlang$frostc$Compiler** _164;
org$frostlang$frostc$Compiler* _165;
frost$core$Object* _166;
org$frostlang$frostc$Compiler$EnclosingContext** _168;
org$frostlang$frostc$Compiler$EnclosingContext* _169;
frost$core$Object* _170;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:142
_1 = &param0->compiler;
_2 = *_1;
_3 = &_2->enclosingContexts;
_4 = *_3;
_5 = _4;
_6 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Compiler.frost:142:46
_8 = (frost$core$Int) {0u};
_9 = _6.value;
_10 = _8.value;
_11 = _9 >= _10;
_12 = (frost$core$Bit) {_11};
_13 = _12.value;
if (_13) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_17 = &_5->contents;
_18 = *_17;
_19 = ((frost$collections$CollectionView*) _18);
ITable* $tmp8 = _19->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
_20 = $tmp8->methods[0];
_21 = _20(_19);
_23 = _6.value;
_24 = _21.value;
_25 = _23 < _24;
_26 = (frost$core$Bit) {_25};
_27 = _26.value;
if (_27) goto block2; else goto block3;
block3:;
_29 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _29, &$s10);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_33 = &_5->contents;
_34 = *_33;
_35 = ((frost$collections$CollectionView*) _34);
ITable* $tmp11 = _35->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
_36 = $tmp11->methods[0];
_37 = _36(_35);
_38 = _37.value;
_39 = _6.value;
_40 = _38 > _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block6; else goto block7;
block7:;
_44 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s12, _44);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_48 = &_5->contents;
_49 = *_48;
_50 = _49;
_51 = &_5->contents;
_52 = *_51;
_53 = ((frost$collections$CollectionView*) _52);
ITable* $tmp13 = _53->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_54 = $tmp13->methods[0];
_55 = _54(_53);
_56 = (frost$core$Int) {1u};
_57 = _55.value;
_58 = _56.value;
_59 = _57 - _58;
_60 = (frost$core$Int) {_59};
_61 = _60.value;
_62 = _6.value;
_63 = _61 - _62;
_64 = (frost$core$Int) {_63};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_66 = (frost$core$Int) {0u};
_67 = _64.value;
_68 = _66.value;
_69 = _67 >= _68;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block11; else goto block10;
block11:;
_73 = ((frost$collections$CollectionView*) _50);
ITable* $tmp14 = _73->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp14 = $tmp14->next;
}
_74 = $tmp14->methods[0];
_75 = _74(_73);
_76 = _64.value;
_77 = _75.value;
_78 = _76 < _77;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block9; else goto block10;
block10:;
_82 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, _82, &$s16);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_86 = &_50->data;
_87 = *_86;
_88 = frost$core$Int64$init$frost$core$Int(_64);
_89 = _88.value;
_90 = _87[_89];
_91 = _90;
frost$core$Frost$ref$frost$core$Object$Q(_91);
_94 = _90;
_95 = _94;
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = _90;
frost$core$Frost$unref$frost$core$Object$Q(_97);
_100 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _94);
_101 = &param0->context;
_102 = *_101;
_103 = _100 == _102;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block12; else goto block13;
block13:;
_107 = (frost$core$Int) {142u};
_108 = &param0->context;
_109 = *_108;
_110 = ((frost$core$Object*) _109);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:143:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_113 = ($fn17) _110->$class->vtable[0];
_114 = _113(_110);
_115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s18, _114);
_116 = ((frost$core$Object*) _115);
frost$core$Frost$ref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_115, &$s19);
_124 = &param0->compiler;
_125 = *_124;
_126 = &_125->enclosingContexts;
_127 = *_126;
_128 = ((frost$core$Object*) _127);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:143:79
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_131 = ($fn20) _128->$class->vtable[0];
_132 = _131(_128);
_133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_123, _132);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$ref$frost$core$Object$Q(_134);
_136 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_136);
_138 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_138);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, _107, _133);
_142 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_144);
_146 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_146);
abort(); // unreachable
block12:;
_149 = _94;
frost$core$Frost$unref$frost$core$Object$Q(_149);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:145
_152 = &param0->compiler;
_153 = *_152;
_154 = &_153->enclosingContexts;
_155 = *_154;
_156 = _155;
_157 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_156);
_158 = ((org$frostlang$frostc$Compiler$EnclosingContext*) _157);
_159 = _157;
frost$core$Frost$unref$frost$core$Object$Q(_159);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:141
_162 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_162);
_164 = &param0->compiler;
_165 = *_164;
_166 = ((frost$core$Object*) _165);
frost$core$Frost$unref$frost$core$Object$Q(_166);
_168 = &param0->context;
_169 = *_168;
_170 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_170);
return;

}

