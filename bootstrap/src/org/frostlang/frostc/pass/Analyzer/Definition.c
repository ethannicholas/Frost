#include "org/frostlang/frostc/pass/Analyzer/Definition.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$Definition$class_type org$frostlang$frostc$pass$Analyzer$Definition$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$pass$Analyzer$Definition$get_asString$R$frost$core$String, org$frostlang$frostc$pass$Analyzer$Definition$cleanup, org$frostlang$frostc$pass$Analyzer$Definition$matches$org$frostlang$frostc$pass$Analyzer$Definition$R$frost$core$Bit} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$String* (*$fn16)(frost$core$Object*);
typedef frost$core$Bit (*$fn22)(org$frostlang$frostc$pass$Analyzer$Definition*, org$frostlang$frostc$pass$Analyzer$Definition*);
typedef frost$core$Bit (*$fn23)(org$frostlang$frostc$pass$Analyzer$Definition*, org$frostlang$frostc$pass$Analyzer$Definition*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 45, -2258664296644250430, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x52\x55\x43\x54\x4f\x52\x28\x69\x64\x29", 15, 5840846683693172779, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x52\x55\x43\x54\x4f\x52\x28\x69\x64\x29", 15, 5840846683693172779, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x49\x45\x4c\x44\x28", 6, -2129528048268295747, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x43\x41\x4c\x28", 6, -1523601060637538272, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x52\x41\x4d\x45\x54\x45\x52\x28", 10, 8631742952335322280, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, -5143693783589769076, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x53\x50\x45\x43\x49\x46\x49\x45\x44", 11, -5143693783589769076, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };

frost$core$String* org$frostlang$frostc$pass$Analyzer$Definition$get_asString$R$frost$core$String(org$frostlang$frostc$pass$Analyzer$Definition* param0) {

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$pass$Analyzer$Definition* local1 = NULL;
org$frostlang$frostc$FieldDecl* local2 = NULL;
frost$core$Int local3;
frost$core$Int local4;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$IR$Statement$ID* _13;
org$frostlang$frostc$IR$Statement$ID _14;
frost$core$Object* _17;
frost$core$Int _20;
int64_t _23;
int64_t _24;
bool _25;
frost$core$Bit _26;
bool _28;
org$frostlang$frostc$pass$Analyzer$Definition** _30;
org$frostlang$frostc$pass$Analyzer$Definition* _31;
frost$core$Object* _33;
org$frostlang$frostc$pass$Analyzer$Definition* _35;
frost$core$Object* _36;
org$frostlang$frostc$FieldDecl** _39;
org$frostlang$frostc$FieldDecl* _40;
frost$core$Object* _42;
org$frostlang$frostc$FieldDecl* _44;
frost$core$Object* _45;
org$frostlang$frostc$pass$Analyzer$Definition* _49;
frost$core$Object* _50;
$fn2 _53;
frost$core$String* _54;
frost$core$String* _55;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$String* _63;
org$frostlang$frostc$FieldDecl* _64;
org$frostlang$frostc$Symbol* _65;
frost$core$String** _66;
frost$core$String* _67;
frost$core$String* _68;
frost$core$String* _69;
frost$core$Object* _70;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Object* _76;
frost$core$Object* _78;
org$frostlang$frostc$FieldDecl* _80;
frost$core$Object* _81;
org$frostlang$frostc$pass$Analyzer$Definition* _84;
frost$core$Object* _85;
frost$core$Int _89;
int64_t _92;
int64_t _93;
bool _94;
frost$core$Bit _95;
bool _97;
frost$core$Int* _99;
frost$core$Int _100;
frost$core$Int _103;
frost$core$Object* _104;
$fn3 _107;
frost$core$String* _108;
frost$core$String* _109;
frost$core$Object* _110;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$String* _117;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$Object* _122;
frost$core$Object* _124;
frost$core$Int _127;
int64_t _130;
int64_t _131;
bool _132;
frost$core$Bit _133;
bool _135;
frost$core$Int* _137;
frost$core$Int _138;
frost$core$Int _141;
frost$core$Object* _142;
$fn4 _145;
frost$core$String* _146;
frost$core$String* _147;
frost$core$Object* _148;
frost$core$Object* _150;
frost$core$Object* _152;
frost$core$String* _155;
frost$core$Object* _156;
frost$core$Object* _158;
frost$core$Object* _160;
frost$core$Object* _162;
frost$core$Int _165;
int64_t _168;
int64_t _169;
bool _170;
frost$core$Bit _171;
bool _173;
frost$core$Object* _176;
frost$core$Int _180;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:25
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:26:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
_14 = *_13;
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:27
_17 = ((frost$core$Object*) &$s5);
frost$core$Frost$ref$frost$core$Object$Q(_17);
return &$s6;
block3:;
_20 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:29:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_23 = _2.value;
_24 = _20.value;
_25 = _23 == _24;
_26 = (frost$core$Bit) {_25};
_28 = _26.value;
if (_28) goto block5; else goto block6;
block5:;
_30 = (org$frostlang$frostc$pass$Analyzer$Definition**) (param0->$data + 0);
_31 = *_30;
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
_33 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local1);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local1) = _31;
_39 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 8);
_40 = *_39;
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
_42 = ((frost$core$Object*) _40);
frost$core$Frost$ref$frost$core$Object$Q(_42);
_44 = *(&local2);
_45 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_45);
*(&local2) = _40;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:30
_49 = *(&local1);
_50 = ((frost$core$Object*) _49);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:30:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_53 = ($fn7) _50->$class->vtable[0];
_54 = _53(_50);
_55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s8, _54);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$ref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_63 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_55, &$s9);
_64 = *(&local2);
_65 = ((org$frostlang$frostc$Symbol*) _64);
_66 = &_65->name;
_67 = *_66;
_68 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_63, _67);
_69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_68, &$s10);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = *(&local2);
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
_84 = *(&local1);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
return _69;
block6:;
_89 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:32:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_92 = _2.value;
_93 = _89.value;
_94 = _92 == _93;
_95 = (frost$core$Bit) {_94};
_97 = _95.value;
if (_97) goto block9; else goto block10;
block9:;
_99 = (frost$core$Int*) (param0->$data + 0);
_100 = *_99;
*(&local3) = _100;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:33
_103 = *(&local3);
frost$core$Int$wrapper* $tmp11;
$tmp11 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp11->value = _103;
_104 = ((frost$core$Object*) $tmp11);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:33:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_107 = ($fn12) _104->$class->vtable[0];
_108 = _107(_104);
_109 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s13, _108);
_110 = ((frost$core$Object*) _109);
frost$core$Frost$ref$frost$core$Object$Q(_110);
_112 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_114);
_117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_109, &$s14);
_118 = ((frost$core$Object*) _117);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_122);
_124 = _104;
frost$core$Frost$unref$frost$core$Object$Q(_124);
return _117;
block10:;
_127 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:35:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_130 = _2.value;
_131 = _127.value;
_132 = _130 == _131;
_133 = (frost$core$Bit) {_132};
_135 = _133.value;
if (_135) goto block13; else goto block14;
block13:;
_137 = (frost$core$Int*) (param0->$data + 0);
_138 = *_137;
*(&local4) = _138;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:36
_141 = *(&local4);
frost$core$Int$wrapper* $tmp15;
$tmp15 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp15->value = _141;
_142 = ((frost$core$Object*) $tmp15);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:36:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_145 = ($fn16) _142->$class->vtable[0];
_146 = _145(_142);
_147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s17, _146);
_148 = ((frost$core$Object*) _147);
frost$core$Frost$ref$frost$core$Object$Q(_148);
_150 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_150);
_152 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_152);
_155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_147, &$s18);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$ref$frost$core$Object$Q(_156);
_158 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_158);
_160 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_160);
_162 = _142;
frost$core$Frost$unref$frost$core$Object$Q(_162);
return _155;
block14:;
_165 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:38:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_168 = _2.value;
_169 = _165.value;
_170 = _168 == _169;
_171 = (frost$core$Bit) {_170};
_173 = _171.value;
if (_173) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:39
_176 = ((frost$core$Object*) &$s19);
frost$core$Frost$ref$frost$core$Object$Q(_176);
return &$s20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:42
_180 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s21, _180);
abort(); // unreachable
block1:;
goto block20;
block20:;

}
frost$core$Bit org$frostlang$frostc$pass$Analyzer$Definition$matches$org$frostlang$frostc$pass$Analyzer$Definition$R$frost$core$Bit(org$frostlang$frostc$pass$Analyzer$Definition* param0, org$frostlang$frostc$pass$Analyzer$Definition* param1) {

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$IR$Statement$ID local1;
org$frostlang$frostc$pass$Analyzer$Definition* local2 = NULL;
org$frostlang$frostc$FieldDecl* local3 = NULL;
org$frostlang$frostc$pass$Analyzer$Definition* local4 = NULL;
org$frostlang$frostc$FieldDecl* local5 = NULL;
frost$core$Bit local6;
frost$core$Int local7;
frost$core$Int local8;
frost$core$Int local9;
frost$core$Int local10;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$IR$Statement$ID* _13;
org$frostlang$frostc$IR$Statement$ID _14;
frost$core$Int* _17;
frost$core$Int _18;
frost$core$Int _19;
int64_t _22;
int64_t _23;
bool _24;
frost$core$Bit _25;
bool _27;
org$frostlang$frostc$IR$Statement$ID* _29;
org$frostlang$frostc$IR$Statement$ID _30;
org$frostlang$frostc$IR$Statement$ID _33;
org$frostlang$frostc$IR$Statement$ID _34;
frost$core$Int _37;
frost$core$Int _38;
int64_t _41;
int64_t _42;
bool _43;
frost$core$Bit _44;
frost$core$Bit _49;
frost$core$Int _51;
int64_t _54;
int64_t _55;
bool _56;
frost$core$Bit _57;
bool _59;
org$frostlang$frostc$pass$Analyzer$Definition** _61;
org$frostlang$frostc$pass$Analyzer$Definition* _62;
frost$core$Object* _64;
org$frostlang$frostc$pass$Analyzer$Definition* _66;
frost$core$Object* _67;
org$frostlang$frostc$FieldDecl** _70;
org$frostlang$frostc$FieldDecl* _71;
frost$core$Object* _73;
org$frostlang$frostc$FieldDecl* _75;
frost$core$Object* _76;
frost$core$Int* _80;
frost$core$Int _81;
frost$core$Int _82;
int64_t _85;
int64_t _86;
bool _87;
frost$core$Bit _88;
bool _90;
org$frostlang$frostc$pass$Analyzer$Definition** _92;
org$frostlang$frostc$pass$Analyzer$Definition* _93;
frost$core$Object* _95;
org$frostlang$frostc$pass$Analyzer$Definition* _97;
frost$core$Object* _98;
org$frostlang$frostc$FieldDecl** _101;
org$frostlang$frostc$FieldDecl* _102;
frost$core$Object* _104;
org$frostlang$frostc$FieldDecl* _106;
frost$core$Object* _107;
org$frostlang$frostc$pass$Analyzer$Definition* _111;
org$frostlang$frostc$pass$Analyzer$Definition* _112;
$fn22 _113;
frost$core$Bit _114;
bool _115;
org$frostlang$frostc$FieldDecl* _117;
org$frostlang$frostc$FieldDecl* _118;
bool _119;
frost$core$Bit _120;
frost$core$Bit _125;
org$frostlang$frostc$FieldDecl* _126;
frost$core$Object* _127;
org$frostlang$frostc$pass$Analyzer$Definition* _130;
frost$core$Object* _131;
org$frostlang$frostc$FieldDecl* _134;
frost$core$Object* _135;
org$frostlang$frostc$pass$Analyzer$Definition* _138;
frost$core$Object* _139;
frost$core$Bit _144;
org$frostlang$frostc$FieldDecl* _145;
frost$core$Object* _146;
org$frostlang$frostc$pass$Analyzer$Definition* _149;
frost$core$Object* _150;
frost$core$Int _154;
int64_t _157;
int64_t _158;
bool _159;
frost$core$Bit _160;
bool _162;
frost$core$Int* _164;
frost$core$Int _165;
frost$core$Int* _168;
frost$core$Int _169;
frost$core$Int _170;
int64_t _173;
int64_t _174;
bool _175;
frost$core$Bit _176;
bool _178;
frost$core$Int* _180;
frost$core$Int _181;
frost$core$Int _184;
frost$core$Int _185;
int64_t _188;
int64_t _189;
bool _190;
frost$core$Bit _191;
frost$core$Bit _195;
frost$core$Int _197;
int64_t _200;
int64_t _201;
bool _202;
frost$core$Bit _203;
bool _205;
frost$core$Int* _207;
frost$core$Int _208;
frost$core$Int* _211;
frost$core$Int _212;
frost$core$Int _213;
int64_t _216;
int64_t _217;
bool _218;
frost$core$Bit _219;
bool _221;
frost$core$Int* _223;
frost$core$Int _224;
frost$core$Int _227;
frost$core$Int _228;
int64_t _231;
int64_t _232;
bool _233;
frost$core$Bit _234;
frost$core$Bit _238;
frost$core$Int _240;
int64_t _243;
int64_t _244;
bool _245;
frost$core$Bit _246;
bool _248;
frost$core$Int* _251;
frost$core$Int _252;
frost$core$Int _253;
int64_t _256;
int64_t _257;
bool _258;
frost$core$Bit _259;
bool _261;
frost$core$Bit _264;
frost$core$Bit _267;
frost$core$Int _270;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:48
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:49:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
_14 = *_13;
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:50
_17 = &param1->$rawValue;
_18 = *_17;
_19 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:51:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_22 = _18.value;
_23 = _19.value;
_24 = _22 == _23;
_25 = (frost$core$Bit) {_24};
_27 = _25.value;
if (_27) goto block6; else goto block5;
block6:;
_29 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
_30 = *_29;
*(&local1) = _30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:52
_33 = *(&local0);
_34 = *(&local1);
// begin inline call to function org.frostlang.frostc.IR.Statement.ID.=(other:org.frostlang.frostc.IR.Statement.ID):frost.core.Bit from Analyzer.frost:52:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:171
_37 = _33.value;
_38 = _34.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:171:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_41 = _37.value;
_42 = _38.value;
_43 = _41 == _42;
_44 = (frost$core$Bit) {_43};
return _44;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:55
_49 = (frost$core$Bit) {false};
return _49;
block3:;
_51 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:57:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_54 = _2.value;
_55 = _51.value;
_56 = _54 == _55;
_57 = (frost$core$Bit) {_56};
_59 = _57.value;
if (_59) goto block10; else goto block11;
block10:;
_61 = (org$frostlang$frostc$pass$Analyzer$Definition**) (param0->$data + 0);
_62 = *_61;
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
_64 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_64);
_66 = *(&local2);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local2) = _62;
_70 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 8);
_71 = *_70;
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
_73 = ((frost$core$Object*) _71);
frost$core$Frost$ref$frost$core$Object$Q(_73);
_75 = *(&local3);
_76 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_76);
*(&local3) = _71;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:58
_80 = &param1->$rawValue;
_81 = *_80;
_82 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:59:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_85 = _81.value;
_86 = _82.value;
_87 = _85 == _86;
_88 = (frost$core$Bit) {_87};
_90 = _88.value;
if (_90) goto block14; else goto block13;
block14:;
_92 = (org$frostlang$frostc$pass$Analyzer$Definition**) (param1->$data + 0);
_93 = *_92;
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
_95 = ((frost$core$Object*) _93);
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = *(&local4);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_98);
*(&local4) = _93;
_101 = (org$frostlang$frostc$FieldDecl**) (param1->$data + 8);
_102 = *_101;
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
_104 = ((frost$core$Object*) _102);
frost$core$Frost$ref$frost$core$Object$Q(_104);
_106 = *(&local5);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_107);
*(&local5) = _102;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:60
_111 = *(&local2);
_112 = *(&local4);
_113 = ($fn23) _111->$class->vtable[2];
_114 = _113(_111, _112);
_115 = _114.value;
if (_115) goto block16; else goto block17;
block16:;
_117 = *(&local3);
_118 = *(&local5);
_119 = _117 == _118;
_120 = (frost$core$Bit) {_119};
*(&local6) = _120;
goto block18;
block17:;
*(&local6) = _114;
goto block18;
block18:;
_125 = *(&local6);
_126 = *(&local5);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
*(&local5) = ((org$frostlang$frostc$FieldDecl*) NULL);
_130 = *(&local4);
_131 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_131);
*(&local4) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
_134 = *(&local3);
_135 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_135);
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
_138 = *(&local2);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_139);
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
return _125;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:63
_144 = (frost$core$Bit) {false};
_145 = *(&local3);
_146 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_146);
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
_149 = *(&local2);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local2) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
return _144;
block11:;
_154 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:65:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_157 = _2.value;
_158 = _154.value;
_159 = _157 == _158;
_160 = (frost$core$Bit) {_159};
_162 = _160.value;
if (_162) goto block19; else goto block20;
block19:;
_164 = (frost$core$Int*) (param0->$data + 0);
_165 = *_164;
*(&local7) = _165;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:66
_168 = &param1->$rawValue;
_169 = *_168;
_170 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:67:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_173 = _169.value;
_174 = _170.value;
_175 = _173 == _174;
_176 = (frost$core$Bit) {_175};
_178 = _176.value;
if (_178) goto block23; else goto block22;
block23:;
_180 = (frost$core$Int*) (param1->$data + 0);
_181 = *_180;
*(&local8) = _181;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:68
_184 = *(&local7);
_185 = *(&local8);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:68:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_188 = _184.value;
_189 = _185.value;
_190 = _188 == _189;
_191 = (frost$core$Bit) {_190};
return _191;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:71
_195 = (frost$core$Bit) {false};
return _195;
block20:;
_197 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:73:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_200 = _2.value;
_201 = _197.value;
_202 = _200 == _201;
_203 = (frost$core$Bit) {_202};
_205 = _203.value;
if (_205) goto block26; else goto block27;
block26:;
_207 = (frost$core$Int*) (param0->$data + 0);
_208 = *_207;
*(&local9) = _208;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:74
_211 = &param1->$rawValue;
_212 = *_211;
_213 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:75:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_216 = _212.value;
_217 = _213.value;
_218 = _216 == _217;
_219 = (frost$core$Bit) {_218};
_221 = _219.value;
if (_221) goto block30; else goto block29;
block30:;
_223 = (frost$core$Int*) (param1->$data + 0);
_224 = *_223;
*(&local10) = _224;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:76
_227 = *(&local9);
_228 = *(&local10);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:76:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_231 = _227.value;
_232 = _228.value;
_233 = _231 == _232;
_234 = (frost$core$Bit) {_233};
return _234;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:79
_238 = (frost$core$Bit) {false};
return _238;
block27:;
_240 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:81:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_243 = _2.value;
_244 = _240.value;
_245 = _243 == _244;
_246 = (frost$core$Bit) {_245};
_248 = _246.value;
if (_248) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:82
_251 = &param1->$rawValue;
_252 = *_251;
_253 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:83:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_256 = _252.value;
_257 = _253.value;
_258 = _256 == _257;
_259 = (frost$core$Bit) {_258};
_261 = _259.value;
if (_261) goto block37; else goto block36;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:84
_264 = (frost$core$Bit) {true};
return _264;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:87
_267 = (frost$core$Bit) {false};
return _267;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:90
_270 = (frost$core$Int) {90u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s24, _270);
abort(); // unreachable
block1:;
goto block39;
block39:;

}
void org$frostlang$frostc$pass$Analyzer$Definition$cleanup(org$frostlang$frostc$pass$Analyzer$Definition* param0) {

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$pass$Analyzer$Definition* local1 = NULL;
org$frostlang$frostc$FieldDecl* local2 = NULL;
frost$core$Int local3;
frost$core$Int local4;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$IR$Statement$ID* _13;
org$frostlang$frostc$IR$Statement$ID _14;
frost$core$Int _17;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _25;
org$frostlang$frostc$pass$Analyzer$Definition** _27;
org$frostlang$frostc$pass$Analyzer$Definition* _28;
frost$core$Object* _30;
org$frostlang$frostc$pass$Analyzer$Definition* _32;
frost$core$Object* _33;
org$frostlang$frostc$FieldDecl** _36;
org$frostlang$frostc$FieldDecl* _37;
frost$core$Object* _39;
org$frostlang$frostc$FieldDecl* _41;
frost$core$Object* _42;
org$frostlang$frostc$pass$Analyzer$Definition* _46;
frost$core$Object* _47;
org$frostlang$frostc$FieldDecl* _50;
frost$core$Object* _51;
org$frostlang$frostc$FieldDecl* _53;
frost$core$Object* _54;
org$frostlang$frostc$pass$Analyzer$Definition* _57;
frost$core$Object* _58;
frost$core$Int _62;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _70;
frost$core$Int* _72;
frost$core$Int _73;
frost$core$Int _76;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
bool _84;
frost$core$Int* _86;
frost$core$Int _87;
frost$core$Int _90;
int64_t _93;
int64_t _94;
bool _95;
frost$core$Bit _96;
bool _98;
frost$core$Object* _102;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:16:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
_14 = *_13;
*(&local0) = _14;
goto block1;
block3:;
_17 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:16:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_20 = _2.value;
_21 = _17.value;
_22 = _20 == _21;
_23 = (frost$core$Bit) {_22};
_25 = _23.value;
if (_25) goto block5; else goto block6;
block5:;
_27 = (org$frostlang$frostc$pass$Analyzer$Definition**) (param0->$data + 0);
_28 = *_27;
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
_30 = ((frost$core$Object*) _28);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local1);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local1) = _28;
_36 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 8);
_37 = *_36;
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
_39 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = *(&local2);
_42 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_42);
*(&local2) = _37;
// <no location>
_46 = *(&local1);
_47 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_47);
// <no location>
_50 = *(&local2);
_51 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = *(&local2);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local2) = ((org$frostlang$frostc$FieldDecl*) NULL);
_57 = *(&local1);
_58 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_58);
*(&local1) = ((org$frostlang$frostc$pass$Analyzer$Definition*) NULL);
goto block1;
block6:;
_62 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:16:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_65 = _2.value;
_66 = _62.value;
_67 = _65 == _66;
_68 = (frost$core$Bit) {_67};
_70 = _68.value;
if (_70) goto block8; else goto block9;
block8:;
_72 = (frost$core$Int*) (param0->$data + 0);
_73 = *_72;
*(&local3) = _73;
goto block1;
block9:;
_76 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:16:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_79 = _2.value;
_80 = _76.value;
_81 = _79 == _80;
_82 = (frost$core$Bit) {_81};
_84 = _82.value;
if (_84) goto block11; else goto block12;
block11:;
_86 = (frost$core$Int*) (param0->$data + 0);
_87 = *_86;
*(&local4) = _87;
goto block1;
block12:;
_90 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Analyzer.frost:16:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_93 = _2.value;
_94 = _90.value;
_95 = _93 == _94;
_96 = (frost$core$Bit) {_95};
_98 = _96.value;
if (_98) goto block14; else goto block1;
block14:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
_102 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_102);
return;

}
void org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID(org$frostlang$frostc$pass$Analyzer$Definition* param0, frost$core$Int param1, org$frostlang$frostc$IR$Statement$ID param2) {

frost$core$Int* _1;
org$frostlang$frostc$IR$Statement$ID* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
_4 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
*_4 = param2;
return;

}
void org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$org$frostlang$frostc$pass$Analyzer$Definition$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$pass$Analyzer$Definition* param0, frost$core$Int param1, org$frostlang$frostc$pass$Analyzer$Definition* param2, org$frostlang$frostc$FieldDecl* param3) {

frost$core$Int* _1;
frost$core$Object* _4;
org$frostlang$frostc$pass$Analyzer$Definition** _6;
frost$core$Object* _9;
org$frostlang$frostc$FieldDecl** _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (org$frostlang$frostc$pass$Analyzer$Definition**) (param0->$data + 0);
*_6 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
_9 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = (org$frostlang$frostc$FieldDecl**) (param0->$data + 8);
*_11 = param3;
return;

}
void org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int$frost$core$Int(org$frostlang$frostc$pass$Analyzer$Definition* param0, frost$core$Int param1, frost$core$Int param2) {

frost$core$Int* _1;
frost$core$Int* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
_4 = (frost$core$Int*) (param0->$data + 0);
*_4 = param2;
return;

}
void org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int(org$frostlang$frostc$pass$Analyzer$Definition* param0, frost$core$Int param1) {

frost$core$Int* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:16
_1 = &param0->$rawValue;
*_1 = param1;
return;

}

