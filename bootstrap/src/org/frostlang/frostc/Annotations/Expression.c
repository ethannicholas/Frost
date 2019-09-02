#include "org/frostlang/frostc/Annotations/Expression.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Annotations$Expression$class_type org$frostlang$frostc$Annotations$Expression$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Annotations$Expression$get_asString$R$frost$core$String, org$frostlang$frostc$Annotations$Expression$cleanup} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);
typedef frost$core$String* (*$fn13)(frost$core$Object*);
typedef frost$core$String* (*$fn16)(frost$core$Object*);
typedef frost$core$String* (*$fn19)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 43, 1213590712351619310, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x28", 5, -3005768931565142592, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72\x28", 7, 8507669291200671751, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x28", 6, -7748712806728186949, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64\x28", 9, -7791594326291061002, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79\x28", 10, -822412385073170115, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x66\x72\x6f\x73\x74", 17, 6603721120407380261, NULL };

frost$core$String* org$frostlang$frostc$Annotations$Expression$get_asString$R$frost$core$String(org$frostlang$frostc$Annotations$Expression* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
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
org$frostlang$frostc$ASTNode** _15;
org$frostlang$frostc$ASTNode* _16;
frost$core$Object* _18;
org$frostlang$frostc$ASTNode* _20;
frost$core$Object* _21;
org$frostlang$frostc$ASTNode* _25;
frost$core$Object* _26;
$fn2 _29;
frost$core$String* _30;
frost$core$String* _31;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$String* _39;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _44;
org$frostlang$frostc$ASTNode* _46;
frost$core$Object* _47;
frost$core$Int _51;
int64_t _54;
int64_t _55;
bool _56;
frost$core$Bit _57;
bool _59;
frost$core$String** _61;
frost$core$String* _62;
org$frostlang$frostc$ASTNode** _63;
org$frostlang$frostc$ASTNode* _64;
frost$core$Object* _66;
org$frostlang$frostc$ASTNode* _68;
frost$core$Object* _69;
org$frostlang$frostc$ASTNode* _73;
frost$core$Object* _74;
$fn3 _77;
frost$core$String* _78;
frost$core$String* _79;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Object* _84;
frost$core$String* _87;
frost$core$Object* _88;
frost$core$Object* _90;
frost$core$Object* _92;
org$frostlang$frostc$ASTNode* _94;
frost$core$Object* _95;
frost$core$Int _99;
int64_t _102;
int64_t _103;
bool _104;
frost$core$Bit _105;
bool _107;
frost$core$String** _109;
frost$core$String* _110;
org$frostlang$frostc$ASTNode** _111;
org$frostlang$frostc$ASTNode* _112;
frost$core$Object* _114;
org$frostlang$frostc$ASTNode* _116;
frost$core$Object* _117;
org$frostlang$frostc$ASTNode* _121;
frost$core$Object* _122;
$fn4 _125;
frost$core$String* _126;
frost$core$String* _127;
frost$core$Object* _128;
frost$core$Object* _130;
frost$core$Object* _132;
frost$core$String* _135;
frost$core$Object* _136;
frost$core$Object* _138;
frost$core$Object* _140;
org$frostlang$frostc$ASTNode* _142;
frost$core$Object* _143;
frost$core$Int _147;
int64_t _150;
int64_t _151;
bool _152;
frost$core$Bit _153;
bool _155;
frost$core$String** _157;
frost$core$String* _158;
org$frostlang$frostc$ASTNode** _159;
org$frostlang$frostc$ASTNode* _160;
frost$core$Object* _162;
org$frostlang$frostc$ASTNode* _164;
frost$core$Object* _165;
org$frostlang$frostc$ASTNode* _169;
frost$core$Object* _170;
$fn5 _173;
frost$core$String* _174;
frost$core$String* _175;
frost$core$Object* _176;
frost$core$Object* _178;
frost$core$Object* _180;
frost$core$String* _183;
frost$core$Object* _184;
frost$core$Object* _186;
frost$core$Object* _188;
org$frostlang$frostc$ASTNode* _190;
frost$core$Object* _191;
frost$core$Int _195;
int64_t _198;
int64_t _199;
bool _200;
frost$core$Bit _201;
bool _203;
frost$core$String** _205;
frost$core$String* _206;
org$frostlang$frostc$ASTNode** _207;
org$frostlang$frostc$ASTNode* _208;
frost$core$Object* _210;
org$frostlang$frostc$ASTNode* _212;
frost$core$Object* _213;
org$frostlang$frostc$ASTNode* _217;
frost$core$Object* _218;
$fn6 _221;
frost$core$String* _222;
frost$core$String* _223;
frost$core$Object* _224;
frost$core$Object* _226;
frost$core$Object* _228;
frost$core$String* _231;
frost$core$Object* _232;
frost$core$Object* _234;
frost$core$Object* _236;
org$frostlang$frostc$ASTNode* _238;
frost$core$Object* _239;
frost$core$Int _244;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:36
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Annotations.frost:37:22
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
_15 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
_16 = *_15;
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
_18 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = *(&local0);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:37
_25 = *(&local0);
_26 = ((frost$core$Object*) _25);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Annotations.frost:37:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_29 = ($fn7) _26->$class->vtable[0];
_30 = _29(_26);
_31 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s8, _30);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_31, &$s9);
_40 = ((frost$core$Object*) _39);
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = *(&local0);
_47 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_47);
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return _39;
block3:;
_51 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Annotations.frost:38:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_54 = _2.value;
_55 = _51.value;
_56 = _54 == _55;
_57 = (frost$core$Bit) {_56};
_59 = _57.value;
if (_59) goto block6; else goto block7;
block6:;
_61 = (frost$core$String**) (param0->$data + 0);
_62 = *_61;
_63 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
_64 = *_63;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_66 = ((frost$core$Object*) _64);
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = *(&local1);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local1) = _64;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:38
_73 = *(&local1);
_74 = ((frost$core$Object*) _73);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Annotations.frost:38:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_77 = ($fn10) _74->$class->vtable[0];
_78 = _77(_74);
_79 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s11, _78);
_80 = ((frost$core$Object*) _79);
frost$core$Frost$ref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_82);
_84 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_84);
_87 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_79, &$s12);
_88 = ((frost$core$Object*) _87);
frost$core$Frost$ref$frost$core$Object$Q(_88);
_90 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = *(&local1);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_95);
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return _87;
block7:;
_99 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Annotations.frost:39:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_102 = _2.value;
_103 = _99.value;
_104 = _102 == _103;
_105 = (frost$core$Bit) {_104};
_107 = _105.value;
if (_107) goto block10; else goto block11;
block10:;
_109 = (frost$core$String**) (param0->$data + 0);
_110 = *_109;
_111 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
_112 = *_111;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
_114 = ((frost$core$Object*) _112);
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = *(&local2);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
*(&local2) = _112;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:39
_121 = *(&local2);
_122 = ((frost$core$Object*) _121);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Annotations.frost:39:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_125 = ($fn13) _122->$class->vtable[0];
_126 = _125(_122);
_127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s14, _126);
_128 = ((frost$core$Object*) _127);
frost$core$Frost$ref$frost$core$Object$Q(_128);
_130 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_130);
_132 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_132);
_135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_127, &$s15);
_136 = ((frost$core$Object*) _135);
frost$core$Frost$ref$frost$core$Object$Q(_136);
_138 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_138);
_140 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_140);
_142 = *(&local2);
_143 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_143);
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
return _135;
block11:;
_147 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Annotations.frost:40:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_150 = _2.value;
_151 = _147.value;
_152 = _150 == _151;
_153 = (frost$core$Bit) {_152};
_155 = _153.value;
if (_155) goto block14; else goto block15;
block14:;
_157 = (frost$core$String**) (param0->$data + 0);
_158 = *_157;
_159 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
_160 = *_159;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
_162 = ((frost$core$Object*) _160);
frost$core$Frost$ref$frost$core$Object$Q(_162);
_164 = *(&local3);
_165 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_165);
*(&local3) = _160;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:40
_169 = *(&local3);
_170 = ((frost$core$Object*) _169);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Annotations.frost:40:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_173 = ($fn16) _170->$class->vtable[0];
_174 = _173(_170);
_175 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s17, _174);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$ref$frost$core$Object$Q(_176);
_178 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_178);
_180 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_180);
_183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_175, &$s18);
_184 = ((frost$core$Object*) _183);
frost$core$Frost$ref$frost$core$Object$Q(_184);
_186 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_186);
_188 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_188);
_190 = *(&local3);
_191 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_191);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return _183;
block15:;
_195 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Annotations.frost:41:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_198 = _2.value;
_199 = _195.value;
_200 = _198 == _199;
_201 = (frost$core$Bit) {_200};
_203 = _201.value;
if (_203) goto block18; else goto block1;
block18:;
_205 = (frost$core$String**) (param0->$data + 0);
_206 = *_205;
_207 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
_208 = *_207;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
_210 = ((frost$core$Object*) _208);
frost$core$Frost$ref$frost$core$Object$Q(_210);
_212 = *(&local4);
_213 = ((frost$core$Object*) _212);
frost$core$Frost$unref$frost$core$Object$Q(_213);
*(&local4) = _208;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:41
_217 = *(&local4);
_218 = ((frost$core$Object*) _217);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Annotations.frost:41:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_221 = ($fn19) _218->$class->vtable[0];
_222 = _221(_218);
_223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s20, _222);
_224 = ((frost$core$Object*) _223);
frost$core$Frost$ref$frost$core$Object$Q(_224);
_226 = ((frost$core$Object*) _223);
frost$core$Frost$unref$frost$core$Object$Q(_226);
_228 = ((frost$core$Object*) _222);
frost$core$Frost$unref$frost$core$Object$Q(_228);
_231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_223, &$s21);
_232 = ((frost$core$Object*) _231);
frost$core$Frost$ref$frost$core$Object$Q(_232);
_234 = ((frost$core$Object*) _231);
frost$core$Frost$unref$frost$core$Object$Q(_234);
_236 = ((frost$core$Object*) _223);
frost$core$Frost$unref$frost$core$Object$Q(_236);
_238 = *(&local4);
_239 = ((frost$core$Object*) _238);
frost$core$Frost$unref$frost$core$Object$Q(_239);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return _231;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:43
_244 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s22, _244);
abort(); // unreachable

}
void org$frostlang$frostc$Annotations$Expression$cleanup(org$frostlang$frostc$Annotations$Expression* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$core$String* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
frost$core$String* local6 = NULL;
org$frostlang$frostc$ASTNode* local7 = NULL;
frost$core$String* local8 = NULL;
org$frostlang$frostc$ASTNode* local9 = NULL;
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
org$frostlang$frostc$ASTNode** _22;
org$frostlang$frostc$ASTNode* _23;
frost$core$Object* _25;
org$frostlang$frostc$ASTNode* _27;
frost$core$Object* _28;
frost$core$String* _32;
frost$core$Object* _33;
org$frostlang$frostc$ASTNode* _36;
frost$core$Object* _37;
org$frostlang$frostc$ASTNode* _39;
frost$core$Object* _40;
frost$core$String* _43;
frost$core$Object* _44;
frost$core$Int _48;
int64_t _51;
int64_t _52;
bool _53;
frost$core$Bit _54;
bool _56;
frost$core$String** _58;
frost$core$String* _59;
frost$core$Object* _61;
frost$core$String* _63;
frost$core$Object* _64;
org$frostlang$frostc$ASTNode** _67;
org$frostlang$frostc$ASTNode* _68;
frost$core$Object* _70;
org$frostlang$frostc$ASTNode* _72;
frost$core$Object* _73;
frost$core$String* _77;
frost$core$Object* _78;
org$frostlang$frostc$ASTNode* _81;
frost$core$Object* _82;
org$frostlang$frostc$ASTNode* _84;
frost$core$Object* _85;
frost$core$String* _88;
frost$core$Object* _89;
frost$core$Int _93;
int64_t _96;
int64_t _97;
bool _98;
frost$core$Bit _99;
bool _101;
frost$core$String** _103;
frost$core$String* _104;
frost$core$Object* _106;
frost$core$String* _108;
frost$core$Object* _109;
org$frostlang$frostc$ASTNode** _112;
org$frostlang$frostc$ASTNode* _113;
frost$core$Object* _115;
org$frostlang$frostc$ASTNode* _117;
frost$core$Object* _118;
frost$core$String* _122;
frost$core$Object* _123;
org$frostlang$frostc$ASTNode* _126;
frost$core$Object* _127;
org$frostlang$frostc$ASTNode* _129;
frost$core$Object* _130;
frost$core$String* _133;
frost$core$Object* _134;
frost$core$Int _138;
int64_t _141;
int64_t _142;
bool _143;
frost$core$Bit _144;
bool _146;
frost$core$String** _148;
frost$core$String* _149;
frost$core$Object* _151;
frost$core$String* _153;
frost$core$Object* _154;
org$frostlang$frostc$ASTNode** _157;
org$frostlang$frostc$ASTNode* _158;
frost$core$Object* _160;
org$frostlang$frostc$ASTNode* _162;
frost$core$Object* _163;
frost$core$String* _167;
frost$core$Object* _168;
org$frostlang$frostc$ASTNode* _171;
frost$core$Object* _172;
org$frostlang$frostc$ASTNode* _174;
frost$core$Object* _175;
frost$core$String* _178;
frost$core$Object* _179;
frost$core$Int _183;
int64_t _186;
int64_t _187;
bool _188;
frost$core$Bit _189;
bool _191;
frost$core$String** _193;
frost$core$String* _194;
frost$core$Object* _196;
frost$core$String* _198;
frost$core$Object* _199;
org$frostlang$frostc$ASTNode** _202;
org$frostlang$frostc$ASTNode* _203;
frost$core$Object* _205;
org$frostlang$frostc$ASTNode* _207;
frost$core$Object* _208;
frost$core$String* _212;
frost$core$Object* _213;
org$frostlang$frostc$ASTNode* _216;
frost$core$Object* _217;
org$frostlang$frostc$ASTNode* _219;
frost$core$Object* _220;
frost$core$String* _223;
frost$core$Object* _224;
frost$core$Object* _229;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:27
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Annotations.frost:27:5
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
_22 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
_23 = *_22;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
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
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
_43 = *(&local0);
_44 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_44);
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
_48 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Annotations.frost:27:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_51 = _2.value;
_52 = _48.value;
_53 = _51 == _52;
_54 = (frost$core$Bit) {_53};
_56 = _54.value;
if (_56) goto block5; else goto block6;
block5:;
_58 = (frost$core$String**) (param0->$data + 0);
_59 = *_58;
*(&local2) = ((frost$core$String*) NULL);
_61 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = *(&local2);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
*(&local2) = _59;
_67 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
_68 = *_67;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
_70 = ((frost$core$Object*) _68);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = *(&local3);
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local3) = _68;
// <no location>
_77 = *(&local2);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_78);
// <no location>
_81 = *(&local3);
_82 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_82);
_84 = *(&local3);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
_88 = *(&local2);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block6:;
_93 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Annotations.frost:27:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_96 = _2.value;
_97 = _93.value;
_98 = _96 == _97;
_99 = (frost$core$Bit) {_98};
_101 = _99.value;
if (_101) goto block8; else goto block9;
block8:;
_103 = (frost$core$String**) (param0->$data + 0);
_104 = *_103;
*(&local4) = ((frost$core$String*) NULL);
_106 = ((frost$core$Object*) _104);
frost$core$Frost$ref$frost$core$Object$Q(_106);
_108 = *(&local4);
_109 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_109);
*(&local4) = _104;
_112 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
_113 = *_112;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
_115 = ((frost$core$Object*) _113);
frost$core$Frost$ref$frost$core$Object$Q(_115);
_117 = *(&local5);
_118 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_118);
*(&local5) = _113;
// <no location>
_122 = *(&local4);
_123 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_123);
// <no location>
_126 = *(&local5);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = *(&local5);
_130 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_130);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
_133 = *(&local4);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_134);
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block9:;
_138 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Annotations.frost:27:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_141 = _2.value;
_142 = _138.value;
_143 = _141 == _142;
_144 = (frost$core$Bit) {_143};
_146 = _144.value;
if (_146) goto block11; else goto block12;
block11:;
_148 = (frost$core$String**) (param0->$data + 0);
_149 = *_148;
*(&local6) = ((frost$core$String*) NULL);
_151 = ((frost$core$Object*) _149);
frost$core$Frost$ref$frost$core$Object$Q(_151);
_153 = *(&local6);
_154 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_154);
*(&local6) = _149;
_157 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
_158 = *_157;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
_160 = ((frost$core$Object*) _158);
frost$core$Frost$ref$frost$core$Object$Q(_160);
_162 = *(&local7);
_163 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_163);
*(&local7) = _158;
// <no location>
_167 = *(&local6);
_168 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_168);
// <no location>
_171 = *(&local7);
_172 = ((frost$core$Object*) _171);
frost$core$Frost$unref$frost$core$Object$Q(_172);
_174 = *(&local7);
_175 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_175);
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
_178 = *(&local6);
_179 = ((frost$core$Object*) _178);
frost$core$Frost$unref$frost$core$Object$Q(_179);
*(&local6) = ((frost$core$String*) NULL);
goto block1;
block12:;
_183 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Annotations.frost:27:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_186 = _2.value;
_187 = _183.value;
_188 = _186 == _187;
_189 = (frost$core$Bit) {_188};
_191 = _189.value;
if (_191) goto block14; else goto block1;
block14:;
_193 = (frost$core$String**) (param0->$data + 0);
_194 = *_193;
*(&local8) = ((frost$core$String*) NULL);
_196 = ((frost$core$Object*) _194);
frost$core$Frost$ref$frost$core$Object$Q(_196);
_198 = *(&local8);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_199);
*(&local8) = _194;
_202 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
_203 = *_202;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
_205 = ((frost$core$Object*) _203);
frost$core$Frost$ref$frost$core$Object$Q(_205);
_207 = *(&local9);
_208 = ((frost$core$Object*) _207);
frost$core$Frost$unref$frost$core$Object$Q(_208);
*(&local9) = _203;
// <no location>
_212 = *(&local8);
_213 = ((frost$core$Object*) _212);
frost$core$Frost$unref$frost$core$Object$Q(_213);
// <no location>
_216 = *(&local9);
_217 = ((frost$core$Object*) _216);
frost$core$Frost$unref$frost$core$Object$Q(_217);
_219 = *(&local9);
_220 = ((frost$core$Object*) _219);
frost$core$Frost$unref$frost$core$Object$Q(_220);
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
_223 = *(&local8);
_224 = ((frost$core$Object*) _223);
frost$core$Frost$unref$frost$core$Object$Q(_224);
*(&local8) = ((frost$core$String*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:27
_229 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_229);
return;

}
void org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Annotations$Expression* param0, frost$core$Int param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3) {

frost$core$Int* _1;
frost$core$Object* _4;
frost$core$String** _6;
frost$core$Object* _9;
org$frostlang$frostc$ASTNode** _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:27
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:27
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = (frost$core$String**) (param0->$data + 0);
*_6 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:27
_9 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
*_11 = param3;
return;

}






