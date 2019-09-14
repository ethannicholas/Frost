#include "org/frostlang/frostc/Compiler/Capture.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$Capture$class_type org$frostlang$frostc$Compiler$Capture$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Compiler$Capture$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$Capture$cleanup} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x43\x61\x70\x74\x75\x72\x65", 37, 7133353817263486725, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45\x28", 9, 879407855100891767, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x49\x45\x4c\x44\x28", 6, -2129528048268295747, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$Capture$cleanup(void* rawSelf) {
org$frostlang$frostc$Compiler$Capture* param0 = (org$frostlang$frostc$Compiler$Capture*) rawSelf;

org$frostlang$frostc$Variable* local0 = NULL;
org$frostlang$frostc$FieldDecl* local1 = NULL;
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
org$frostlang$frostc$Variable* _23;
frost$core$Object* _24;
org$frostlang$frostc$Variable* _26;
frost$core$Object* _27;
frost$core$Int _31;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _39;
org$frostlang$frostc$FieldDecl** _41;
org$frostlang$frostc$FieldDecl* _42;
frost$core$Object* _44;
org$frostlang$frostc$FieldDecl* _46;
frost$core$Object* _47;
org$frostlang$frostc$FieldDecl* _51;
frost$core$Object* _52;
org$frostlang$frostc$FieldDecl* _54;
frost$core$Object* _55;
frost$core$Int _59;
int64_t _62;
int64_t _63;
bool _64;
frost$core$Bit _65;
bool _67;
frost$core$Object* _71;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$VARIABLE.field0;
_14 = *_13;
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
// <no location>
_23 = *(&local0);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = *(&local0);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_27);
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block3:;
_31 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _2.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block5; else goto block6;
block5:;
_41 = &param0->$data.$FIELD.field0;
_42 = *_41;
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
_44 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = *(&local1);
_47 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_47);
*(&local1) = _42;
// <no location>
_51 = *(&local1);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = *(&local1);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block1;
block6:;
_59 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_62 = _2.value;
_63 = _59.value;
_64 = _62 == _63;
_65 = (frost$core$Bit) {_64};
_67 = _65.value;
if (_67) goto block8; else goto block1;
block8:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
_71 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_71);
return;

}
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int$org$frostlang$frostc$Variable(void* rawSelf, frost$core$Int param1, org$frostlang$frostc$Variable* param2) {
org$frostlang$frostc$Compiler$Capture* param0 = (org$frostlang$frostc$Compiler$Capture*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
org$frostlang$frostc$Variable** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$VARIABLE.field0;
*_6 = param2;
return;

}
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int$org$frostlang$frostc$FieldDecl(void* rawSelf, frost$core$Int param1, org$frostlang$frostc$FieldDecl* param2) {
org$frostlang$frostc$Compiler$Capture* param0 = (org$frostlang$frostc$Compiler$Capture*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
org$frostlang$frostc$FieldDecl** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$FIELD.field0;
*_6 = param2;
return;

}
void org$frostlang$frostc$Compiler$Capture$init$frost$core$Int(void* rawSelf, frost$core$Int param1) {
org$frostlang$frostc$Compiler$Capture* param0 = (org$frostlang$frostc$Compiler$Capture*) rawSelf;

frost$core$Int* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
_1 = &param0->$rawValue;
*_1 = param1;
return;

}
frost$core$String* org$frostlang$frostc$Compiler$Capture$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$Compiler$Capture* param0 = (org$frostlang$frostc$Compiler$Capture*) rawSelf;

org$frostlang$frostc$Variable* local0 = NULL;
org$frostlang$frostc$FieldDecl* local1 = NULL;
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
org$frostlang$frostc$Variable* _23;
frost$core$Object* _24;
$fn2 _27;
frost$core$String* _28;
frost$core$String* _29;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$String* _37;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _42;
org$frostlang$frostc$Variable* _44;
frost$core$Object* _45;
frost$core$Int _49;
int64_t _52;
int64_t _53;
bool _54;
frost$core$Bit _55;
bool _57;
org$frostlang$frostc$FieldDecl** _59;
org$frostlang$frostc$FieldDecl* _60;
frost$core$Object* _62;
org$frostlang$frostc$FieldDecl* _64;
frost$core$Object* _65;
org$frostlang$frostc$FieldDecl* _69;
frost$core$Object* _70;
$fn3 _73;
frost$core$String* _74;
frost$core$String* _75;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$Object* _80;
frost$core$String* _83;
frost$core$Object* _84;
frost$core$Object* _86;
frost$core$Object* _88;
org$frostlang$frostc$FieldDecl* _90;
frost$core$Object* _91;
frost$core$Int _95;
int64_t _98;
int64_t _99;
bool _100;
frost$core$Bit _101;
bool _103;
frost$core$Object* _106;
frost$core$Int _110;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$VARIABLE.field0;
_14 = *_13;
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
_23 = *(&local0);
_24 = ((frost$core$Object*) _23);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_27 = ($fn4) _24->$class->vtable[0];
_28 = _27(_24);
_29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5, _28);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_37 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_29, &$s6);
_38 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = *(&local0);
_45 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_45);
*(&local0) = ((org$frostlang$frostc$Variable*) NULL);
return _37;
block3:;
_49 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_52 = _2.value;
_53 = _49.value;
_54 = _52 == _53;
_55 = (frost$core$Bit) {_54};
_57 = _55.value;
if (_57) goto block6; else goto block7;
block6:;
_59 = &param0->$data.$FIELD.field0;
_60 = *_59;
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
_62 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = *(&local1);
_65 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_65);
*(&local1) = _60;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
_69 = *(&local1);
_70 = ((frost$core$Object*) _69);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_73 = ($fn7) _70->$class->vtable[0];
_74 = _73(_70);
_75 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s8, _74);
_76 = ((frost$core$Object*) _75);
frost$core$Frost$ref$frost$core$Object$Q(_76);
_78 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_83 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_75, &$s9);
_84 = ((frost$core$Object*) _83);
frost$core$Frost$ref$frost$core$Object$Q(_84);
_86 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = *(&local1);
_91 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_91);
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
return _83;
block7:;
_95 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:257:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_98 = _2.value;
_99 = _95.value;
_100 = _98 == _99;
_101 = (frost$core$Bit) {_100};
_103 = _101.value;
if (_103) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
_106 = ((frost$core$Object*) &$s10);
frost$core$Frost$ref$frost$core$Object$Q(_106);
return &$s11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:257
_110 = (frost$core$Int) {257u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s12, _110);
abort(); // unreachable
block1:;
goto block13;
block13:;

}

