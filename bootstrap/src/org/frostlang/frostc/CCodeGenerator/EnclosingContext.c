#include "org/frostlang/frostc/CCodeGenerator/EnclosingContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Map.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$CCodeGenerator$EnclosingContext$class_type org$frostlang$frostc$CCodeGenerator$EnclosingContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$CCodeGenerator$EnclosingContext$get_asString$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$EnclosingContext$cleanup} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn16)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 52, -8601812873085532932, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, -4488024136446187047, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x49\x4e\x41\x4c\x4c\x59\x28", 8, 2960125007830506560, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 4580239808655160548, NULL };

void org$frostlang$frostc$CCodeGenerator$EnclosingContext$cleanup(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$collections$Map* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$String** _13;
frost$core$String* _14;
frost$core$Object* _16;
frost$core$String* _18;
frost$core$Object* _19;
frost$core$String** _22;
frost$core$String* _23;
frost$core$Object* _25;
frost$core$String* _27;
frost$core$Object* _28;
frost$core$String** _31;
frost$core$String* _32;
frost$core$Object* _34;
frost$core$String* _36;
frost$core$Object* _37;
frost$core$String* _41;
frost$core$Object* _42;
frost$core$String* _45;
frost$core$Object* _46;
frost$core$String* _49;
frost$core$Object* _50;
frost$core$String* _52;
frost$core$Object* _53;
frost$core$String* _56;
frost$core$Object* _57;
frost$core$String* _60;
frost$core$Object* _61;
frost$core$Int _65;
int64_t _68;
int64_t _69;
bool _70;
frost$core$Bit _71;
bool _73;
frost$core$String** _75;
frost$core$String* _76;
frost$core$Object* _78;
frost$core$String* _80;
frost$core$Object* _81;
frost$collections$Map** _84;
frost$collections$Map* _85;
frost$core$Object* _87;
frost$collections$Map* _89;
frost$core$Object* _90;
frost$core$String** _93;
frost$core$String* _94;
frost$core$Object* _96;
frost$core$String* _98;
frost$core$Object* _99;
frost$core$String* _103;
frost$core$Object* _104;
frost$collections$Map* _107;
frost$core$Object* _108;
frost$core$String* _111;
frost$core$Object* _112;
frost$core$String* _114;
frost$core$Object* _115;
frost$collections$Map* _118;
frost$core$Object* _119;
frost$core$String* _122;
frost$core$Object* _123;
frost$core$Object* _128;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$core$String**) (param0->$data + 0);
_14 = *_13;
*(&local0) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = (frost$core$String**) (param0->$data + 8);
_23 = *_22;
*(&local1) = ((frost$core$String*) NULL);
_25 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local1);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = _23;
_31 = (frost$core$String**) (param0->$data + 16);
_32 = *_31;
*(&local2) = ((frost$core$String*) NULL);
_34 = ((frost$core$Object*) _32);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = *(&local2);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local2) = _32;
// <no location>
_41 = *(&local0);
_42 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_42);
// <no location>
_45 = *(&local1);
_46 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_46);
// <no location>
_49 = *(&local2);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = *(&local2);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local2) = ((frost$core$String*) NULL);
_56 = *(&local1);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local1) = ((frost$core$String*) NULL);
_60 = *(&local0);
_61 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_61);
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
_65 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_68 = _2.value;
_69 = _65.value;
_70 = _68 == _69;
_71 = (frost$core$Bit) {_70};
_73 = _71.value;
if (_73) goto block5; else goto block1;
block5:;
_75 = (frost$core$String**) (param0->$data + 0);
_76 = *_75;
*(&local3) = ((frost$core$String*) NULL);
_78 = ((frost$core$Object*) _76);
frost$core$Frost$ref$frost$core$Object$Q(_78);
_80 = *(&local3);
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
*(&local3) = _76;
_84 = (frost$collections$Map**) (param0->$data + 8);
_85 = *_84;
*(&local4) = ((frost$collections$Map*) NULL);
_87 = ((frost$core$Object*) _85);
frost$core$Frost$ref$frost$core$Object$Q(_87);
_89 = *(&local4);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local4) = _85;
_93 = (frost$core$String**) (param0->$data + 16);
_94 = *_93;
*(&local5) = ((frost$core$String*) NULL);
_96 = ((frost$core$Object*) _94);
frost$core$Frost$ref$frost$core$Object$Q(_96);
_98 = *(&local5);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
*(&local5) = _94;
// <no location>
_103 = *(&local3);
_104 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_104);
// <no location>
_107 = *(&local4);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_108);
// <no location>
_111 = *(&local5);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = *(&local5);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_115);
*(&local5) = ((frost$core$String*) NULL);
_118 = *(&local4);
_119 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_119);
*(&local4) = ((frost$collections$Map*) NULL);
_122 = *(&local3);
_123 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_123);
*(&local3) = ((frost$core$String*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_128 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_128);
return;

}
void org$frostlang$frostc$CCodeGenerator$EnclosingContext$init$frost$core$Int$frost$core$String$Q$frost$core$String$frost$core$String(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0, frost$core$Int param1, frost$core$String* param2, frost$core$String* param3, frost$core$String* param4) {

frost$core$Int* _1;
frost$core$Object* _4;
frost$core$String** _6;
frost$core$Object* _9;
frost$core$String** _11;
frost$core$Object* _14;
frost$core$String** _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (frost$core$String**) (param0->$data + 0);
*_6 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_9 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = (frost$core$String**) (param0->$data + 8);
*_11 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_14 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = (frost$core$String**) (param0->$data + 16);
*_16 = param4;
return;

}
void org$frostlang$frostc$CCodeGenerator$EnclosingContext$init$frost$core$Int$frost$core$String$frost$collections$Map$LTfrost$core$String$Corg$frostlang$frostc$Pair$LTfrost$core$Int$Cfrost$core$String$GT$GT$frost$core$String(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0, frost$core$Int param1, frost$core$String* param2, frost$collections$Map* param3, frost$core$String* param4) {

frost$core$Int* _1;
frost$core$Object* _4;
frost$core$String** _6;
frost$core$Object* _9;
frost$collections$Map** _11;
frost$core$Object* _14;
frost$core$String** _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (frost$core$String**) (param0->$data + 0);
*_6 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_9 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = (frost$collections$Map**) (param0->$data + 8);
*_11 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_14 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = (frost$core$String**) (param0->$data + 16);
*_16 = param4;
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$EnclosingContext$get_asString$R$frost$core$String(org$frostlang$frostc$CCodeGenerator$EnclosingContext* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
frost$collections$Map* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$String** _13;
frost$core$String* _14;
frost$core$Object* _16;
frost$core$String* _18;
frost$core$Object* _19;
frost$core$String** _22;
frost$core$String* _23;
frost$core$Object* _25;
frost$core$String* _27;
frost$core$Object* _28;
frost$core$String** _31;
frost$core$String* _32;
frost$core$Object* _34;
frost$core$String* _36;
frost$core$Object* _37;
frost$core$String* _41;
frost$core$Object* _42;
bool _45;
frost$core$Bit _46;
bool _47;
bool _50;
frost$core$Bit _51;
bool _52;
frost$core$Int _54;
frost$core$Object* _57;
$fn2 _58;
frost$core$String* _59;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Object* _65;
frost$core$Object* _69;
frost$core$Object* _72;
frost$core$String* _75;
frost$core$String* _76;
frost$core$String* _77;
frost$core$String* _78;
frost$core$String* _79;
frost$core$String* _80;
frost$core$String* _81;
frost$core$String* _82;
frost$core$String* _83;
frost$core$Object* _84;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$Object* _90;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$Object* _96;
frost$core$Object* _98;
frost$core$String* _100;
frost$core$Object* _101;
frost$core$String* _104;
frost$core$Object* _105;
frost$core$String* _108;
frost$core$Object* _109;
frost$core$String* _112;
frost$core$Object* _113;
frost$core$Int _117;
int64_t _120;
int64_t _121;
bool _122;
frost$core$Bit _123;
bool _125;
frost$core$String** _127;
frost$core$String* _128;
frost$core$Object* _130;
frost$core$String* _132;
frost$core$Object* _133;
frost$collections$Map** _136;
frost$collections$Map* _137;
frost$core$Object* _139;
frost$collections$Map* _141;
frost$core$Object* _142;
frost$core$String** _145;
frost$core$String* _146;
frost$core$Object* _148;
frost$core$String* _150;
frost$core$Object* _151;
frost$core$String* _155;
frost$core$String* _156;
frost$core$String* _157;
frost$collections$Map* _158;
frost$core$Object* _159;
$fn3 _162;
frost$core$String* _163;
frost$core$String* _164;
frost$core$Object* _165;
frost$core$Object* _167;
frost$core$Object* _169;
frost$core$String* _172;
frost$core$String* _173;
frost$core$String* _174;
frost$core$String* _175;
frost$core$Object* _176;
frost$core$Object* _178;
frost$core$Object* _180;
frost$core$Object* _182;
frost$core$Object* _184;
frost$core$Object* _186;
frost$core$Object* _188;
frost$core$String* _190;
frost$core$Object* _191;
frost$collections$Map* _194;
frost$core$Object* _195;
frost$core$String* _198;
frost$core$Object* _199;
frost$core$Int _204;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$core$String**) (param0->$data + 0);
_14 = *_13;
*(&local0) = ((frost$core$String*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = (frost$core$String**) (param0->$data + 8);
_23 = *_22;
*(&local1) = ((frost$core$String*) NULL);
_25 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local1);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = _23;
_31 = (frost$core$String**) (param0->$data + 16);
_32 = *_31;
*(&local2) = ((frost$core$String*) NULL);
_34 = ((frost$core$Object*) _32);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = *(&local2);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local2) = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_41 = *(&local0);
_42 = ((frost$core$Object*) _41);
// begin inline call to function frost.core.Frost.string(o:frost.core.Object?):frost.core.String from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
_45 = _42 != NULL;
_46 = (frost$core$Bit) {_45};
_47 = _46.value;
if (_47) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
_50 = _42 != NULL;
_51 = (frost$core$Bit) {_50};
_52 = _51.value;
if (_52) goto block8; else goto block9;
block9:;
_54 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _54, &$s5);
abort(); // unreachable
block8:;
_57 = _42;
_58 = ($fn6) _57->$class->vtable[0];
_59 = _58(_57);
_60 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_62);
*(&local3) = _59;
_65 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_65);
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
_69 = ((frost$core$Object*) &$s7);
frost$core$Frost$ref$frost$core$Object$Q(_69);
*(&local3) = &$s8;
_72 = ((frost$core$Object*) &$s9);
frost$core$Frost$ref$frost$core$Object$Q(_72);
goto block5;
block5:;
_75 = *(&local3);
_76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s10, _75);
_77 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_76, &$s11);
_78 = *(&local1);
_79 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_77, _78);
_80 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_79, &$s12);
_81 = *(&local2);
_82 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_80, _81);
_83 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_82, &$s13);
_84 = ((frost$core$Object*) _83);
frost$core$Frost$ref$frost$core$Object$Q(_84);
_86 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_96);
_98 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = *(&local3);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local3) = ((frost$core$String*) NULL);
_104 = *(&local2);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local2) = ((frost$core$String*) NULL);
_108 = *(&local1);
_109 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_109);
*(&local1) = ((frost$core$String*) NULL);
_112 = *(&local0);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_113);
*(&local0) = ((frost$core$String*) NULL);
return _83;
block3:;
_117 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_120 = _2.value;
_121 = _117.value;
_122 = _120 == _121;
_123 = (frost$core$Bit) {_122};
_125 = _123.value;
if (_125) goto block10; else goto block11;
block10:;
_127 = (frost$core$String**) (param0->$data + 0);
_128 = *_127;
*(&local4) = ((frost$core$String*) NULL);
_130 = ((frost$core$Object*) _128);
frost$core$Frost$ref$frost$core$Object$Q(_130);
_132 = *(&local4);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_133);
*(&local4) = _128;
_136 = (frost$collections$Map**) (param0->$data + 8);
_137 = *_136;
*(&local5) = ((frost$collections$Map*) NULL);
_139 = ((frost$core$Object*) _137);
frost$core$Frost$ref$frost$core$Object$Q(_139);
_141 = *(&local5);
_142 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_142);
*(&local5) = _137;
_145 = (frost$core$String**) (param0->$data + 16);
_146 = *_145;
*(&local6) = ((frost$core$String*) NULL);
_148 = ((frost$core$Object*) _146);
frost$core$Frost$ref$frost$core$Object$Q(_148);
_150 = *(&local6);
_151 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_151);
*(&local6) = _146;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_155 = *(&local4);
_156 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s14, _155);
_157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_156, &$s15);
_158 = *(&local5);
_159 = ((frost$core$Object*) _158);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from CCodeGenerator.frost:13:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_162 = ($fn16) _159->$class->vtable[0];
_163 = _162(_159);
_164 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_157, _163);
_165 = ((frost$core$Object*) _164);
frost$core$Frost$ref$frost$core$Object$Q(_165);
_167 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_167);
_169 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_169);
_172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_164, &$s17);
_173 = *(&local6);
_174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_172, _173);
_175 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_174, &$s18);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$ref$frost$core$Object$Q(_176);
_178 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_178);
_180 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_180);
_182 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_182);
_184 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_184);
_186 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_186);
_188 = ((frost$core$Object*) _156);
frost$core$Frost$unref$frost$core$Object$Q(_188);
_190 = *(&local6);
_191 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_191);
*(&local6) = ((frost$core$String*) NULL);
_194 = *(&local5);
_195 = ((frost$core$Object*) _194);
frost$core$Frost$unref$frost$core$Object$Q(_195);
*(&local5) = ((frost$collections$Map*) NULL);
_198 = *(&local4);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_199);
*(&local4) = ((frost$core$String*) NULL);
return _175;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:13
_204 = (frost$core$Int) {13u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s19, _204);
abort(); // unreachable
block1:;
goto block14;
block14:;

}

