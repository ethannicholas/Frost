#include "org/frostlang/frostc/Compiler/Target.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$Target$class_type org$frostlang$frostc$Compiler$Target$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Compiler$Target$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$Target$cleanup} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);
typedef frost$core$String* (*$fn15)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74", 36, 6339310601849254188, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45\x28", 9, 879407855100891767, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x55\x50\x4c\x45\x28", 6, -4921018790087704965, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$Target$cleanup(org$frostlang$frostc$Compiler$Target* param0) {

org$frostlang$frostc$Variable* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$Variable** _13;
org$frostlang$frostc$Variable* _14;
frost$core$Object* _16;
org$frostlang$frostc$Variable* _18;
frost$core$Object* _19;
org$frostlang$frostc$IR$Value** _22;
org$frostlang$frostc$IR$Value* _23;
frost$core$Object* _25;
org$frostlang$frostc$IR$Value* _27;
frost$core$Object* _28;
org$frostlang$frostc$Variable* _32;
frost$core$Object* _33;
org$frostlang$frostc$IR$Value* _36;
frost$core$Object* _37;
org$frostlang$frostc$IR$Value* _39;
frost$core$Object* _40;
org$frostlang$frostc$Variable* _43;
frost$core$Object* _44;
frost$core$Int _48;
int64_t _51;
int64_t _52;
bool _53;
frost$core$Bit _54;
bool _56;
org$frostlang$frostc$FixedArray** _58;
org$frostlang$frostc$FixedArray* _59;
frost$core$Object* _61;
org$frostlang$frostc$FixedArray* _63;
frost$core$Object* _64;
org$frostlang$frostc$FixedArray* _68;
frost$core$Object* _69;
org$frostlang$frostc$FixedArray* _71;
frost$core$Object* _72;
frost$core$Object* _77;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:124:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
_14 = *_13;
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = (org$frostlang$frostc$IR$Value**) (param0->$data + 8);
_23 = *_22;
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_25 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local1);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = _23;
// <no location>
_32 = *(&local0);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
// <no location>
_36 = *(&local1);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = *(&local1);
_40 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_40);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_43 = *(&local0);
_44 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_44);
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block3:;
_48 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:124:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_51 = _2.value;
_52 = _48.value;
_53 = _51 == _52;
_54 = (frost$core$Bit) {_53};
_56 = _54.value;
if (_56) goto block5; else goto block1;
block5:;
_58 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
_59 = *_58;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
_61 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = *(&local2);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
*(&local2) = _59;
// <no location>
_68 = *(&local2);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = *(&local2);
_72 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_72);
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
_77 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_77);
return;

}
void org$frostlang$frostc$Compiler$Target$init$frost$core$Int$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler$Target* param0, frost$core$Int param1, org$frostlang$frostc$Variable* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Int* _1;
frost$core$Object* _4;
org$frostlang$frostc$Variable** _6;
frost$core$Object* _9;
org$frostlang$frostc$IR$Value** _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*_6 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
_9 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = (org$frostlang$frostc$IR$Value**) (param0->$data + 8);
*_11 = param3;
return;

}
void org$frostlang$frostc$Compiler$Target$init$frost$core$Int$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Compiler$Target$GT(org$frostlang$frostc$Compiler$Target* param0, frost$core$Int param1, org$frostlang$frostc$FixedArray* param2) {

frost$core$Int* _1;
frost$core$Object* _4;
org$frostlang$frostc$FixedArray** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
*_6 = param2;
return;

}
frost$core$String* org$frostlang$frostc$Compiler$Target$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$Target* param0) {

org$frostlang$frostc$Variable* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$FixedArray* local3 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$Variable** _13;
org$frostlang$frostc$Variable* _14;
frost$core$Object* _16;
org$frostlang$frostc$Variable* _18;
frost$core$Object* _19;
org$frostlang$frostc$IR$Value** _22;
org$frostlang$frostc$IR$Value* _23;
frost$core$Object* _25;
org$frostlang$frostc$IR$Value* _27;
frost$core$Object* _28;
org$frostlang$frostc$Variable* _32;
frost$core$Object* _33;
$fn2 _36;
frost$core$String* _37;
frost$core$String* _38;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$String* _46;
org$frostlang$frostc$IR$Value* _47;
frost$core$Object* _48;
bool _51;
frost$core$Bit _52;
bool _53;
bool _56;
frost$core$Bit _57;
bool _58;
frost$core$Int _60;
frost$core$Object* _63;
$fn3 _64;
frost$core$String* _65;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Object* _71;
frost$core$Object* _75;
frost$core$Object* _78;
frost$core$String* _81;
frost$core$String* _82;
frost$core$String* _83;
frost$core$Object* _84;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$Object* _90;
frost$core$String* _92;
frost$core$Object* _93;
frost$core$Object* _96;
frost$core$Object* _98;
org$frostlang$frostc$IR$Value* _100;
frost$core$Object* _101;
org$frostlang$frostc$Variable* _104;
frost$core$Object* _105;
frost$core$Int _109;
int64_t _112;
int64_t _113;
bool _114;
frost$core$Bit _115;
bool _117;
org$frostlang$frostc$FixedArray** _119;
org$frostlang$frostc$FixedArray* _120;
frost$core$Object* _122;
org$frostlang$frostc$FixedArray* _124;
frost$core$Object* _125;
org$frostlang$frostc$FixedArray* _129;
frost$core$Object* _130;
$fn4 _133;
frost$core$String* _134;
frost$core$String* _135;
frost$core$Object* _136;
frost$core$Object* _138;
frost$core$Object* _140;
frost$core$String* _143;
frost$core$Object* _144;
frost$core$Object* _146;
frost$core$Object* _148;
org$frostlang$frostc$FixedArray* _150;
frost$core$Object* _151;
frost$core$Int _156;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:124:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
_14 = *_13;
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = (org$frostlang$frostc$IR$Value**) (param0->$data + 8);
_23 = *_22;
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_25 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local1);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
_32 = *(&local0);
_33 = ((frost$core$Object*) _32);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:124:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_36 = ($fn5) _33->$class->vtable[0];
_37 = _36(_33);
_38 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s6, _37);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_38, &$s7);
_47 = *(&local1);
_48 = ((frost$core$Object*) _47);
// begin inline call to function frost.core.Frost.string(o:frost.core.Object?):frost.core.String from Compiler.frost:124:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
_51 = _48 != NULL;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
_56 = _48 != NULL;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block9; else goto block10;
block10:;
_60 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _60, &$s9);
abort(); // unreachable
block9:;
_63 = _48;
_64 = ($fn10) _63->$class->vtable[0];
_65 = _64(_63);
_66 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_68);
*(&local2) = _65;
_71 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_71);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
_75 = ((frost$core$Object*) &$s11);
frost$core$Frost$ref$frost$core$Object$Q(_75);
*(&local2) = &$s12;
_78 = ((frost$core$Object*) &$s13);
frost$core$Frost$ref$frost$core$Object$Q(_78);
goto block6;
block6:;
_81 = *(&local2);
_82 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_46, _81);
_83 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_82, &$s14);
_84 = ((frost$core$Object*) _83);
frost$core$Frost$ref$frost$core$Object$Q(_84);
_86 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = *(&local2);
_93 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_93);
*(&local2) = ((frost$core$String*) NULL);
_96 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_96);
_98 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = *(&local1);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_104 = *(&local0);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
return _83;
block3:;
_109 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:124:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_112 = _2.value;
_113 = _109.value;
_114 = _112 == _113;
_115 = (frost$core$Bit) {_114};
_117 = _115.value;
if (_117) goto block11; else goto block12;
block11:;
_119 = (org$frostlang$frostc$FixedArray**) (param0->$data + 0);
_120 = *_119;
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
_122 = ((frost$core$Object*) _120);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_124 = *(&local3);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local3) = _120;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
_129 = *(&local3);
_130 = ((frost$core$Object*) _129);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:124:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_133 = ($fn15) _130->$class->vtable[0];
_134 = _133(_130);
_135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s16, _134);
_136 = ((frost$core$Object*) _135);
frost$core$Frost$ref$frost$core$Object$Q(_136);
_138 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_138);
_140 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_140);
_143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_135, &$s17);
_144 = ((frost$core$Object*) _143);
frost$core$Frost$ref$frost$core$Object$Q(_144);
_146 = ((frost$core$Object*) _143);
frost$core$Frost$unref$frost$core$Object$Q(_146);
_148 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_148);
_150 = *(&local3);
_151 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_151);
*(&local3) = ((org$frostlang$frostc$FixedArray*) NULL);
return _143;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:124
_156 = (frost$core$Int) {124u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s18, _156);
abort(); // unreachable
block1:;
goto block15;
block15:;

}

