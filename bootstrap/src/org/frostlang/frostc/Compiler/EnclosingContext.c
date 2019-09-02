#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Compiler/InlineReturn.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$EnclosingContext$class_type org$frostlang$frostc$Compiler$EnclosingContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Compiler$EnclosingContext$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$EnclosingContext$cleanup} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$String* (*$fn8)(frost$core$Object*);
typedef frost$core$String* (*$fn9)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$String* (*$fn13)(frost$core$Object*);
typedef frost$core$String* (*$fn17)(frost$core$Object*);
typedef frost$core$String* (*$fn19)(frost$core$Object*);
typedef frost$core$String* (*$fn22)(frost$core$Object*);
typedef frost$core$String* (*$fn26)(frost$core$Object*);
typedef frost$core$String* (*$fn33)(frost$core$Object*);
typedef frost$core$String* (*$fn36)(frost$core$Object*);
typedef frost$core$String* (*$fn40)(frost$core$Object*);
typedef frost$core$String* (*$fn43)(frost$core$Object*);
typedef frost$core$String* (*$fn50)(frost$core$Object*);
typedef frost$core$String* (*$fn58)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x45\x6e\x63\x6c\x6f\x73\x69\x6e\x67\x43\x6f\x6e\x74\x65\x78\x74", 46, 1025801744820392180, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x4c\x49\x4e\x45\x5f\x43\x4f\x4e\x54\x45\x58\x54\x28", 15, 6901418708807479792, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50\x28", 5, -4488024136446187047, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 7586725163111525995, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x43\x4f\x50\x45", 5, 7586725163111525995, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52\x49\x41\x42\x4c\x45\x5f\x53\x43\x4f\x50\x45\x28", 15, -9160082597147216730, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x4c\x55\x45\x5f\x53\x43\x4f\x50\x45\x28", 12, 5025722873366972767, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x59\x5f\x53\x43\x4f\x50\x45\x28", 10, -1116473329767910717, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -5225481299595787999, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };

void org$frostlang$frostc$Compiler$EnclosingContext$cleanup(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$collections$ListView* local0 = NULL;
frost$core$Int local1;
org$frostlang$frostc$Compiler$InlineReturn* local2 = NULL;
org$frostlang$frostc$IR$Block$ID local3;
frost$core$String* local4 = NULL;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Block$ID local6;
org$frostlang$frostc$Variable* local7 = NULL;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$IR$Block$ID$nullable local9;
org$frostlang$frostc$Variable* local10 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$collections$ListView** _13;
frost$collections$ListView* _14;
frost$core$Object* _16;
frost$collections$ListView* _18;
frost$core$Object* _19;
frost$core$Int* _22;
frost$core$Int _23;
org$frostlang$frostc$Compiler$InlineReturn** _25;
org$frostlang$frostc$Compiler$InlineReturn* _26;
frost$core$Object* _28;
org$frostlang$frostc$Compiler$InlineReturn* _30;
frost$core$Object* _31;
org$frostlang$frostc$IR$Block$ID* _34;
org$frostlang$frostc$IR$Block$ID _35;
frost$collections$ListView* _38;
frost$core$Object* _39;
org$frostlang$frostc$Compiler$InlineReturn* _42;
frost$core$Object* _43;
org$frostlang$frostc$Compiler$InlineReturn* _45;
frost$core$Object* _46;
frost$collections$ListView* _49;
frost$core$Object* _50;
frost$core$Int _54;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _62;
frost$core$String** _64;
frost$core$String* _65;
frost$core$Object* _67;
frost$core$String* _69;
frost$core$Object* _70;
org$frostlang$frostc$IR$Block$ID* _73;
org$frostlang$frostc$IR$Block$ID _74;
org$frostlang$frostc$IR$Block$ID* _76;
org$frostlang$frostc$IR$Block$ID _77;
frost$core$String* _80;
frost$core$Object* _81;
frost$core$String* _83;
frost$core$Object* _84;
frost$core$Int _88;
int64_t _91;
int64_t _92;
bool _93;
frost$core$Bit _94;
bool _96;
frost$core$Int _99;
int64_t _102;
int64_t _103;
bool _104;
frost$core$Bit _105;
bool _107;
org$frostlang$frostc$Variable** _109;
org$frostlang$frostc$Variable* _110;
frost$core$Object* _112;
org$frostlang$frostc$Variable* _114;
frost$core$Object* _115;
org$frostlang$frostc$Variable* _119;
frost$core$Object* _120;
org$frostlang$frostc$Variable* _122;
frost$core$Object* _123;
frost$core$Int _127;
int64_t _130;
int64_t _131;
bool _132;
frost$core$Bit _133;
bool _135;
org$frostlang$frostc$IR$Value** _137;
org$frostlang$frostc$IR$Value* _138;
frost$core$Object* _140;
org$frostlang$frostc$IR$Value* _142;
frost$core$Object* _143;
org$frostlang$frostc$IR$Value* _147;
frost$core$Object* _148;
org$frostlang$frostc$IR$Value* _150;
frost$core$Object* _151;
frost$core$Int _155;
int64_t _158;
int64_t _159;
bool _160;
frost$core$Bit _161;
bool _163;
org$frostlang$frostc$IR$Block$ID$nullable* _165;
org$frostlang$frostc$IR$Block$ID$nullable _166;
org$frostlang$frostc$Variable** _168;
org$frostlang$frostc$Variable* _169;
frost$core$Object* _171;
org$frostlang$frostc$Variable* _173;
frost$core$Object* _174;
org$frostlang$frostc$Variable* _178;
frost$core$Object* _179;
org$frostlang$frostc$Variable* _181;
frost$core$Object* _182;
frost$core$Object* _187;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$collections$ListView**) (param0->$data + 0);
_14 = *_13;
*(&local0) = ((frost$collections$ListView*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = (frost$core$Int*) (param0->$data + 8);
_23 = *_22;
*(&local1) = _23;
_25 = (org$frostlang$frostc$Compiler$InlineReturn**) (param0->$data + 16);
_26 = *_25;
*(&local2) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
_28 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = *(&local2);
_31 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_31);
*(&local2) = _26;
_34 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
_35 = *_34;
*(&local3) = _35;
// <no location>
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
// <no location>
_42 = *(&local2);
_43 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = *(&local2);
_46 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_46);
*(&local2) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
_49 = *(&local0);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
*(&local0) = ((frost$collections$ListView*) NULL);
goto block1;
block3:;
_54 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_57 = _2.value;
_58 = _54.value;
_59 = _57 == _58;
_60 = (frost$core$Bit) {_59};
_62 = _60.value;
if (_62) goto block5; else goto block6;
block5:;
_64 = (frost$core$String**) (param0->$data + 0);
_65 = *_64;
*(&local4) = ((frost$core$String*) NULL);
_67 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = *(&local4);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
*(&local4) = _65;
_73 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
_74 = *_73;
*(&local5) = _74;
_76 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
_77 = *_76;
*(&local6) = _77;
// <no location>
_80 = *(&local4);
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
_83 = *(&local4);
_84 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_84);
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block6:;
_88 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_91 = _2.value;
_92 = _88.value;
_93 = _91 == _92;
_94 = (frost$core$Bit) {_93};
_96 = _94.value;
if (_96) goto block8; else goto block9;
block8:;
goto block1;
block9:;
_99 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_102 = _2.value;
_103 = _99.value;
_104 = _102 == _103;
_105 = (frost$core$Bit) {_104};
_107 = _105.value;
if (_107) goto block11; else goto block12;
block11:;
_109 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
_110 = *_109;
*(&local7) = ((org$frostlang$frostc$Variable*) NULL);
_112 = ((frost$core$Object*) _110);
frost$core$Frost$ref$frost$core$Object$Q(_112);
_114 = *(&local7);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_115);
*(&local7) = _110;
// <no location>
_119 = *(&local7);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = *(&local7);
_123 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_123);
*(&local7) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block12:;
_127 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_130 = _2.value;
_131 = _127.value;
_132 = _130 == _131;
_133 = (frost$core$Bit) {_132};
_135 = _133.value;
if (_135) goto block14; else goto block15;
block14:;
_137 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
_138 = *_137;
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
_140 = ((frost$core$Object*) _138);
frost$core$Frost$ref$frost$core$Object$Q(_140);
_142 = *(&local8);
_143 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_143);
*(&local8) = _138;
// <no location>
_147 = *(&local8);
_148 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_148);
_150 = *(&local8);
_151 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_151);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block15:;
_155 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_158 = _2.value;
_159 = _155.value;
_160 = _158 == _159;
_161 = (frost$core$Bit) {_160};
_163 = _161.value;
if (_163) goto block17; else goto block1;
block17:;
_165 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
_166 = *_165;
*(&local9) = _166;
_168 = (org$frostlang$frostc$Variable**) (param0->$data + 16);
_169 = *_168;
*(&local10) = ((org$frostlang$frostc$Variable*) NULL);
_171 = ((frost$core$Object*) _169);
frost$core$Frost$ref$frost$core$Object$Q(_171);
_173 = *(&local10);
_174 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_174);
*(&local10) = _169;
// <no location>
_178 = *(&local10);
_179 = ((frost$core$Object*) _178);
frost$core$Frost$unref$frost$core$Object$Q(_179);
_181 = *(&local10);
_182 = ((frost$core$Object*) _181);
frost$core$Frost$unref$frost$core$Object$Q(_182);
*(&local10) = ((org$frostlang$frostc$Variable*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_187 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_187);
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT$frost$core$Int$org$frostlang$frostc$Compiler$InlineReturn$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, frost$collections$ListView* param2, frost$core$Int param3, org$frostlang$frostc$Compiler$InlineReturn* param4, org$frostlang$frostc$IR$Block$ID param5) {

frost$core$Int* _1;
frost$core$Object* _4;
frost$collections$ListView** _6;
frost$core$Int* _9;
frost$core$Object* _12;
org$frostlang$frostc$Compiler$InlineReturn** _14;
org$frostlang$frostc$IR$Block$ID* _17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (frost$collections$ListView**) (param0->$data + 0);
*_6 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_9 = (frost$core$Int*) (param0->$data + 8);
*_9 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_12 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = (org$frostlang$frostc$Compiler$InlineReturn**) (param0->$data + 16);
*_14 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_17 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
*_17 = param5;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, frost$core$String* param2, org$frostlang$frostc$IR$Block$ID param3, org$frostlang$frostc$IR$Block$ID param4) {

frost$core$Int* _1;
frost$core$Object* _4;
frost$core$String** _6;
org$frostlang$frostc$IR$Block$ID* _9;
org$frostlang$frostc$IR$Block$ID* _12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (frost$core$String**) (param0->$data + 0);
*_6 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_9 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
*_9 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_12 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
*_12 = param4;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1) {

frost$core$Int* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_1 = &param0->$rawValue;
*_1 = param1;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$Variable(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, org$frostlang$frostc$Variable* param2) {

frost$core$Int* _1;
frost$core$Object* _4;
org$frostlang$frostc$Variable** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
*_6 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$IR$Value(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Int* _1;
frost$core$Object* _4;
org$frostlang$frostc$IR$Value** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*_6 = param2;
return;

}
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q(org$frostlang$frostc$Compiler$EnclosingContext* param0, frost$core$Int param1, org$frostlang$frostc$IR$Block$ID$nullable param2, org$frostlang$frostc$Variable* param3) {

frost$core$Int* _1;
org$frostlang$frostc$IR$Block$ID$nullable* _4;
frost$core$Object* _7;
org$frostlang$frostc$Variable** _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_4 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
*_4 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_7 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = (org$frostlang$frostc$Variable**) (param0->$data + 16);
*_9 = param3;
return;

}
frost$core$String* org$frostlang$frostc$Compiler$EnclosingContext$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$EnclosingContext* param0) {

frost$collections$ListView* local0 = NULL;
frost$core$Int local1;
org$frostlang$frostc$Compiler$InlineReturn* local2 = NULL;
org$frostlang$frostc$IR$Block$ID local3;
frost$core$String* local4 = NULL;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Block$ID local6;
frost$core$String* local7 = NULL;
org$frostlang$frostc$Variable* local8 = NULL;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$IR$Block$ID$nullable local10;
org$frostlang$frostc$Variable* local11 = NULL;
frost$core$String* local12 = NULL;
frost$core$String* local13 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$collections$ListView** _13;
frost$collections$ListView* _14;
frost$core$Object* _16;
frost$collections$ListView* _18;
frost$core$Object* _19;
frost$core$Int* _22;
frost$core$Int _23;
org$frostlang$frostc$Compiler$InlineReturn** _25;
org$frostlang$frostc$Compiler$InlineReturn* _26;
frost$core$Object* _28;
org$frostlang$frostc$Compiler$InlineReturn* _30;
frost$core$Object* _31;
org$frostlang$frostc$IR$Block$ID* _34;
org$frostlang$frostc$IR$Block$ID _35;
frost$collections$ListView* _38;
frost$core$Object* _39;
$fn2 _42;
frost$core$String* _43;
frost$core$String* _44;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$String* _52;
frost$core$Int _53;
frost$core$Object* _54;
$fn3 _57;
frost$core$String* _58;
frost$core$String* _59;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Object* _64;
frost$core$String* _67;
org$frostlang$frostc$Compiler$InlineReturn* _68;
frost$core$Object* _69;
$fn4 _72;
frost$core$String* _73;
frost$core$String* _74;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$String* _82;
org$frostlang$frostc$IR$Block$ID _83;
frost$core$Object* _84;
$fn5 _87;
frost$core$String* _88;
frost$core$String* _89;
frost$core$Object* _90;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$String* _97;
frost$core$Object* _98;
frost$core$Object* _100;
frost$core$Object* _102;
frost$core$Object* _104;
frost$core$Object* _106;
frost$core$Object* _108;
frost$core$Object* _110;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Object* _118;
org$frostlang$frostc$Compiler$InlineReturn* _120;
frost$core$Object* _121;
frost$collections$ListView* _124;
frost$core$Object* _125;
frost$core$Int _129;
int64_t _132;
int64_t _133;
bool _134;
frost$core$Bit _135;
bool _137;
frost$core$String** _139;
frost$core$String* _140;
frost$core$Object* _142;
frost$core$String* _144;
frost$core$Object* _145;
org$frostlang$frostc$IR$Block$ID* _148;
org$frostlang$frostc$IR$Block$ID _149;
org$frostlang$frostc$IR$Block$ID* _151;
org$frostlang$frostc$IR$Block$ID _152;
frost$core$String* _155;
frost$core$Object* _156;
bool _159;
frost$core$Bit _160;
bool _161;
bool _164;
frost$core$Bit _165;
bool _166;
frost$core$Int _168;
frost$core$Object* _171;
$fn6 _172;
frost$core$String* _173;
frost$core$Object* _174;
frost$core$Object* _176;
frost$core$Object* _179;
frost$core$Object* _183;
frost$core$Object* _186;
frost$core$String* _189;
frost$core$String* _190;
frost$core$String* _191;
org$frostlang$frostc$IR$Block$ID _192;
frost$core$Object* _193;
$fn7 _196;
frost$core$String* _197;
frost$core$String* _198;
frost$core$Object* _199;
frost$core$Object* _201;
frost$core$Object* _203;
frost$core$String* _206;
org$frostlang$frostc$IR$Block$ID _207;
frost$core$Object* _208;
$fn8 _211;
frost$core$String* _212;
frost$core$String* _213;
frost$core$Object* _214;
frost$core$Object* _216;
frost$core$Object* _218;
frost$core$String* _221;
frost$core$Object* _222;
frost$core$Object* _224;
frost$core$Object* _226;
frost$core$Object* _228;
frost$core$Object* _230;
frost$core$Object* _232;
frost$core$Object* _234;
frost$core$Object* _236;
frost$core$Object* _238;
frost$core$Object* _240;
frost$core$String* _242;
frost$core$Object* _243;
frost$core$String* _246;
frost$core$Object* _247;
frost$core$Int _251;
int64_t _254;
int64_t _255;
bool _256;
frost$core$Bit _257;
bool _259;
frost$core$Object* _262;
frost$core$Int _265;
int64_t _268;
int64_t _269;
bool _270;
frost$core$Bit _271;
bool _273;
org$frostlang$frostc$Variable** _275;
org$frostlang$frostc$Variable* _276;
frost$core$Object* _278;
org$frostlang$frostc$Variable* _280;
frost$core$Object* _281;
org$frostlang$frostc$Variable* _285;
frost$core$Object* _286;
$fn9 _289;
frost$core$String* _290;
frost$core$String* _291;
frost$core$Object* _292;
frost$core$Object* _294;
frost$core$Object* _296;
frost$core$String* _299;
frost$core$Object* _300;
frost$core$Object* _302;
frost$core$Object* _304;
org$frostlang$frostc$Variable* _306;
frost$core$Object* _307;
frost$core$Int _311;
int64_t _314;
int64_t _315;
bool _316;
frost$core$Bit _317;
bool _319;
org$frostlang$frostc$IR$Value** _321;
org$frostlang$frostc$IR$Value* _322;
frost$core$Object* _324;
org$frostlang$frostc$IR$Value* _326;
frost$core$Object* _327;
org$frostlang$frostc$IR$Value* _331;
frost$core$Object* _332;
$fn10 _335;
frost$core$String* _336;
frost$core$String* _337;
frost$core$Object* _338;
frost$core$Object* _340;
frost$core$Object* _342;
frost$core$String* _345;
frost$core$Object* _346;
frost$core$Object* _348;
frost$core$Object* _350;
org$frostlang$frostc$IR$Value* _352;
frost$core$Object* _353;
frost$core$Int _357;
int64_t _360;
int64_t _361;
bool _362;
frost$core$Bit _363;
bool _365;
org$frostlang$frostc$IR$Block$ID$nullable* _367;
org$frostlang$frostc$IR$Block$ID$nullable _368;
org$frostlang$frostc$Variable** _370;
org$frostlang$frostc$Variable* _371;
frost$core$Object* _373;
org$frostlang$frostc$Variable* _375;
frost$core$Object* _376;
org$frostlang$frostc$IR$Block$ID$nullable _380;
frost$core$Object* _381;
bool _384;
frost$core$Bit _385;
bool _386;
bool _389;
frost$core$Bit _390;
bool _391;
frost$core$Int _393;
frost$core$Object* _396;
$fn11 _397;
frost$core$String* _398;
frost$core$Object* _399;
frost$core$Object* _401;
frost$core$Object* _404;
frost$core$Object* _408;
frost$core$Object* _411;
frost$core$String* _414;
frost$core$String* _415;
frost$core$String* _416;
org$frostlang$frostc$Variable* _417;
frost$core$Object* _418;
bool _421;
frost$core$Bit _422;
bool _423;
bool _426;
frost$core$Bit _427;
bool _428;
frost$core$Int _430;
frost$core$Object* _433;
$fn12 _434;
frost$core$String* _435;
frost$core$Object* _436;
frost$core$Object* _438;
frost$core$Object* _441;
frost$core$Object* _445;
frost$core$Object* _448;
frost$core$String* _451;
frost$core$String* _452;
frost$core$String* _453;
frost$core$Object* _454;
frost$core$Object* _456;
frost$core$Object* _458;
frost$core$Object* _460;
frost$core$String* _462;
frost$core$Object* _463;
frost$core$Object* _466;
frost$core$Object* _468;
frost$core$Object* _470;
frost$core$String* _472;
frost$core$Object* _473;
org$frostlang$frostc$Variable* _477;
frost$core$Object* _478;
frost$core$Int _483;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (frost$collections$ListView**) (param0->$data + 0);
_14 = *_13;
*(&local0) = ((frost$collections$ListView*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = (frost$core$Int*) (param0->$data + 8);
_23 = *_22;
*(&local1) = _23;
_25 = (org$frostlang$frostc$Compiler$InlineReturn**) (param0->$data + 16);
_26 = *_25;
*(&local2) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
_28 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = *(&local2);
_31 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_31);
*(&local2) = _26;
_34 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 24);
_35 = *_34;
*(&local3) = _35;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_38 = *(&local0);
_39 = ((frost$core$Object*) _38);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_42 = ($fn13) _39->$class->vtable[0];
_43 = _42(_39);
_44 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s14, _43);
_45 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_52 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_44, &$s15);
_53 = *(&local1);
frost$core$Int$wrapper* $tmp16;
$tmp16 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp16->value = _53;
_54 = ((frost$core$Object*) $tmp16);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_57 = ($fn17) _54->$class->vtable[0];
_58 = _57(_54);
_59 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_52, _58);
_60 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_67 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_59, &$s18);
_68 = *(&local2);
_69 = ((frost$core$Object*) _68);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_72 = ($fn19) _69->$class->vtable[0];
_73 = _72(_69);
_74 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_67, _73);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_82 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_74, &$s20);
_83 = *(&local3);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp21;
$tmp21 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp21->value = _83;
_84 = ((frost$core$Object*) $tmp21);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_87 = ($fn22) _84->$class->vtable[0];
_88 = _87(_84);
_89 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_82, _88);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$ref$frost$core$Object$Q(_90);
_92 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_89, &$s23);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$ref$frost$core$Object$Q(_98);
_100 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_100);
_102 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = _84;
frost$core$Frost$unref$frost$core$Object$Q(_104);
_106 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_106);
_108 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_108);
_110 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_110);
_112 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = _54;
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = *(&local2);
_121 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_121);
*(&local2) = ((org$frostlang$frostc$Compiler$InlineReturn*) NULL);
_124 = *(&local0);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local0) = ((frost$collections$ListView*) NULL);
return _97;
block3:;
_129 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_132 = _2.value;
_133 = _129.value;
_134 = _132 == _133;
_135 = (frost$core$Bit) {_134};
_137 = _135.value;
if (_137) goto block9; else goto block10;
block9:;
_139 = (frost$core$String**) (param0->$data + 0);
_140 = *_139;
*(&local4) = ((frost$core$String*) NULL);
_142 = ((frost$core$Object*) _140);
frost$core$Frost$ref$frost$core$Object$Q(_142);
_144 = *(&local4);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
*(&local4) = _140;
_148 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 8);
_149 = *_148;
*(&local5) = _149;
_151 = (org$frostlang$frostc$IR$Block$ID*) (param0->$data + 16);
_152 = *_151;
*(&local6) = _152;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_155 = *(&local4);
_156 = ((frost$core$Object*) _155);
// begin inline call to function frost.core.Frost.string(o:frost.core.Object?):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
_159 = _156 != NULL;
_160 = (frost$core$Bit) {_159};
_161 = _160.value;
if (_161) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
_164 = _156 != NULL;
_165 = (frost$core$Bit) {_164};
_166 = _165.value;
if (_166) goto block15; else goto block16;
block16:;
_168 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _168, &$s25);
abort(); // unreachable
block15:;
_171 = _156;
_172 = ($fn26) _171->$class->vtable[0];
_173 = _172(_171);
_174 = ((frost$core$Object*) _173);
frost$core$Frost$ref$frost$core$Object$Q(_174);
_176 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_176);
*(&local7) = _173;
_179 = ((frost$core$Object*) _173);
frost$core$Frost$ref$frost$core$Object$Q(_179);
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
_183 = ((frost$core$Object*) &$s27);
frost$core$Frost$ref$frost$core$Object$Q(_183);
*(&local7) = &$s28;
_186 = ((frost$core$Object*) &$s29);
frost$core$Frost$ref$frost$core$Object$Q(_186);
goto block12;
block12:;
_189 = *(&local7);
_190 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s30, _189);
_191 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_190, &$s31);
_192 = *(&local5);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp32;
$tmp32 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp32->value = _192;
_193 = ((frost$core$Object*) $tmp32);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_196 = ($fn33) _193->$class->vtable[0];
_197 = _196(_193);
_198 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_191, _197);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$ref$frost$core$Object$Q(_199);
_201 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_201);
_203 = ((frost$core$Object*) _197);
frost$core$Frost$unref$frost$core$Object$Q(_203);
_206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_198, &$s34);
_207 = *(&local6);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp35;
$tmp35 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp35->value = _207;
_208 = ((frost$core$Object*) $tmp35);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_211 = ($fn36) _208->$class->vtable[0];
_212 = _211(_208);
_213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_206, _212);
_214 = ((frost$core$Object*) _213);
frost$core$Frost$ref$frost$core$Object$Q(_214);
_216 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_216);
_218 = ((frost$core$Object*) _212);
frost$core$Frost$unref$frost$core$Object$Q(_218);
_221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_213, &$s37);
_222 = ((frost$core$Object*) _221);
frost$core$Frost$ref$frost$core$Object$Q(_222);
_224 = ((frost$core$Object*) _221);
frost$core$Frost$unref$frost$core$Object$Q(_224);
_226 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_226);
_228 = _208;
frost$core$Frost$unref$frost$core$Object$Q(_228);
_230 = ((frost$core$Object*) _206);
frost$core$Frost$unref$frost$core$Object$Q(_230);
_232 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_232);
_234 = _193;
frost$core$Frost$unref$frost$core$Object$Q(_234);
_236 = ((frost$core$Object*) _191);
frost$core$Frost$unref$frost$core$Object$Q(_236);
_238 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_238);
_240 = ((frost$core$Object*) _189);
frost$core$Frost$unref$frost$core$Object$Q(_240);
_242 = *(&local7);
_243 = ((frost$core$Object*) _242);
frost$core$Frost$unref$frost$core$Object$Q(_243);
*(&local7) = ((frost$core$String*) NULL);
_246 = *(&local4);
_247 = ((frost$core$Object*) _246);
frost$core$Frost$unref$frost$core$Object$Q(_247);
*(&local4) = ((frost$core$String*) NULL);
return _221;
block10:;
_251 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_254 = _2.value;
_255 = _251.value;
_256 = _254 == _255;
_257 = (frost$core$Bit) {_256};
_259 = _257.value;
if (_259) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_262 = ((frost$core$Object*) &$s38);
frost$core$Frost$ref$frost$core$Object$Q(_262);
return &$s39;
block20:;
_265 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_268 = _2.value;
_269 = _265.value;
_270 = _268 == _269;
_271 = (frost$core$Bit) {_270};
_273 = _271.value;
if (_273) goto block22; else goto block23;
block22:;
_275 = (org$frostlang$frostc$Variable**) (param0->$data + 0);
_276 = *_275;
*(&local8) = ((org$frostlang$frostc$Variable*) NULL);
_278 = ((frost$core$Object*) _276);
frost$core$Frost$ref$frost$core$Object$Q(_278);
_280 = *(&local8);
_281 = ((frost$core$Object*) _280);
frost$core$Frost$unref$frost$core$Object$Q(_281);
*(&local8) = _276;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_285 = *(&local8);
_286 = ((frost$core$Object*) _285);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_289 = ($fn40) _286->$class->vtable[0];
_290 = _289(_286);
_291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s41, _290);
_292 = ((frost$core$Object*) _291);
frost$core$Frost$ref$frost$core$Object$Q(_292);
_294 = ((frost$core$Object*) _291);
frost$core$Frost$unref$frost$core$Object$Q(_294);
_296 = ((frost$core$Object*) _290);
frost$core$Frost$unref$frost$core$Object$Q(_296);
_299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_291, &$s42);
_300 = ((frost$core$Object*) _299);
frost$core$Frost$ref$frost$core$Object$Q(_300);
_302 = ((frost$core$Object*) _299);
frost$core$Frost$unref$frost$core$Object$Q(_302);
_304 = ((frost$core$Object*) _291);
frost$core$Frost$unref$frost$core$Object$Q(_304);
_306 = *(&local8);
_307 = ((frost$core$Object*) _306);
frost$core$Frost$unref$frost$core$Object$Q(_307);
*(&local8) = ((org$frostlang$frostc$Variable*) NULL);
return _299;
block23:;
_311 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_314 = _2.value;
_315 = _311.value;
_316 = _314 == _315;
_317 = (frost$core$Bit) {_316};
_319 = _317.value;
if (_319) goto block26; else goto block27;
block26:;
_321 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
_322 = *_321;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_324 = ((frost$core$Object*) _322);
frost$core$Frost$ref$frost$core$Object$Q(_324);
_326 = *(&local9);
_327 = ((frost$core$Object*) _326);
frost$core$Frost$unref$frost$core$Object$Q(_327);
*(&local9) = _322;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_331 = *(&local9);
_332 = ((frost$core$Object*) _331);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_335 = ($fn43) _332->$class->vtable[0];
_336 = _335(_332);
_337 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s44, _336);
_338 = ((frost$core$Object*) _337);
frost$core$Frost$ref$frost$core$Object$Q(_338);
_340 = ((frost$core$Object*) _337);
frost$core$Frost$unref$frost$core$Object$Q(_340);
_342 = ((frost$core$Object*) _336);
frost$core$Frost$unref$frost$core$Object$Q(_342);
_345 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_337, &$s45);
_346 = ((frost$core$Object*) _345);
frost$core$Frost$ref$frost$core$Object$Q(_346);
_348 = ((frost$core$Object*) _345);
frost$core$Frost$unref$frost$core$Object$Q(_348);
_350 = ((frost$core$Object*) _337);
frost$core$Frost$unref$frost$core$Object$Q(_350);
_352 = *(&local9);
_353 = ((frost$core$Object*) _352);
frost$core$Frost$unref$frost$core$Object$Q(_353);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
return _345;
block27:;
_357 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_360 = _2.value;
_361 = _357.value;
_362 = _360 == _361;
_363 = (frost$core$Bit) {_362};
_365 = _363.value;
if (_365) goto block30; else goto block31;
block30:;
_367 = (org$frostlang$frostc$IR$Block$ID$nullable*) (param0->$data + 0);
_368 = *_367;
*(&local10) = _368;
_370 = (org$frostlang$frostc$Variable**) (param0->$data + 16);
_371 = *_370;
*(&local11) = ((org$frostlang$frostc$Variable*) NULL);
_373 = ((frost$core$Object*) _371);
frost$core$Frost$ref$frost$core$Object$Q(_373);
_375 = *(&local11);
_376 = ((frost$core$Object*) _375);
frost$core$Frost$unref$frost$core$Object$Q(_376);
*(&local11) = _371;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_380 = *(&local10);
frost$core$Object* $tmp46;
if (_380.nonnull) {
    org$frostlang$frostc$IR$Block$ID$wrapper* $tmp47;
    $tmp47 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
    $tmp47->value = ((org$frostlang$frostc$IR$Block$ID) _380.value);
    $tmp46 = ((frost$core$Object*) $tmp47);
}
else {
    $tmp46 = NULL;
}
_381 = $tmp46;
// begin inline call to function frost.core.Frost.string(o:frost.core.Object?):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
_384 = _381 != NULL;
_385 = (frost$core$Bit) {_384};
_386 = _385.value;
if (_386) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
_389 = _381 != NULL;
_390 = (frost$core$Bit) {_389};
_391 = _390.value;
if (_391) goto block36; else goto block37;
block37:;
_393 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _393, &$s49);
abort(); // unreachable
block36:;
_396 = _381;
_397 = ($fn50) _396->$class->vtable[0];
_398 = _397(_396);
_399 = ((frost$core$Object*) _398);
frost$core$Frost$ref$frost$core$Object$Q(_399);
_401 = ((frost$core$Object*) _398);
frost$core$Frost$unref$frost$core$Object$Q(_401);
*(&local12) = _398;
_404 = ((frost$core$Object*) _398);
frost$core$Frost$ref$frost$core$Object$Q(_404);
goto block33;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
_408 = ((frost$core$Object*) &$s51);
frost$core$Frost$ref$frost$core$Object$Q(_408);
*(&local12) = &$s52;
_411 = ((frost$core$Object*) &$s53);
frost$core$Frost$ref$frost$core$Object$Q(_411);
goto block33;
block33:;
_414 = *(&local12);
_415 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s54, _414);
_416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_415, &$s55);
_417 = *(&local11);
_418 = ((frost$core$Object*) _417);
// begin inline call to function frost.core.Frost.string(o:frost.core.Object?):frost.core.String from Compiler.frost:114:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:261
_421 = _418 != NULL;
_422 = (frost$core$Bit) {_421};
_423 = _422.value;
if (_423) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:262
_426 = _418 != NULL;
_427 = (frost$core$Bit) {_426};
_428 = _427.value;
if (_428) goto block41; else goto block42;
block42:;
_430 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s56, _430, &$s57);
abort(); // unreachable
block41:;
_433 = _418;
_434 = ($fn58) _433->$class->vtable[0];
_435 = _434(_433);
_436 = ((frost$core$Object*) _435);
frost$core$Frost$ref$frost$core$Object$Q(_436);
_438 = ((frost$core$Object*) _435);
frost$core$Frost$unref$frost$core$Object$Q(_438);
*(&local13) = _435;
_441 = ((frost$core$Object*) _435);
frost$core$Frost$ref$frost$core$Object$Q(_441);
goto block38;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Frost.frost:264
_445 = ((frost$core$Object*) &$s59);
frost$core$Frost$ref$frost$core$Object$Q(_445);
*(&local13) = &$s60;
_448 = ((frost$core$Object*) &$s61);
frost$core$Frost$ref$frost$core$Object$Q(_448);
goto block38;
block38:;
_451 = *(&local13);
_452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_416, _451);
_453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_452, &$s62);
_454 = ((frost$core$Object*) _453);
frost$core$Frost$ref$frost$core$Object$Q(_454);
_456 = ((frost$core$Object*) _453);
frost$core$Frost$unref$frost$core$Object$Q(_456);
_458 = ((frost$core$Object*) _452);
frost$core$Frost$unref$frost$core$Object$Q(_458);
_460 = ((frost$core$Object*) _451);
frost$core$Frost$unref$frost$core$Object$Q(_460);
_462 = *(&local13);
_463 = ((frost$core$Object*) _462);
frost$core$Frost$unref$frost$core$Object$Q(_463);
*(&local13) = ((frost$core$String*) NULL);
_466 = ((frost$core$Object*) _416);
frost$core$Frost$unref$frost$core$Object$Q(_466);
_468 = ((frost$core$Object*) _415);
frost$core$Frost$unref$frost$core$Object$Q(_468);
_470 = ((frost$core$Object*) _414);
frost$core$Frost$unref$frost$core$Object$Q(_470);
_472 = *(&local12);
_473 = ((frost$core$Object*) _472);
frost$core$Frost$unref$frost$core$Object$Q(_473);
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(_381);
_477 = *(&local11);
_478 = ((frost$core$Object*) _477);
frost$core$Frost$unref$frost$core$Object$Q(_478);
*(&local11) = ((org$frostlang$frostc$Variable*) NULL);
return _453;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:114
_483 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s63, _483);
abort(); // unreachable
block1:;
goto block43;
block43:;

}

