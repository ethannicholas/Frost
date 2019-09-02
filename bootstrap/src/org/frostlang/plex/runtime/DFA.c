#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "org/frostlang/plex/runtime/RawToken.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char8.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt8.h"
#include "frost/core/Frost.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"


static frost$core$String $s1;
org$frostlang$plex$runtime$DFA$class_type org$frostlang$plex$runtime$DFA$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$plex$runtime$DFA$cleanup, org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken} };

typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x44\x46\x41", 30, 7628876479569963457, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 7507302848059021343, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x46\x41\x2e\x66\x72\x6f\x73\x74", 9, -6532934594591490442, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };

void org$frostlang$plex$runtime$DFA$init$frost$core$Int$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int$GT(org$frostlang$plex$runtime$DFA* param0, frost$core$Int param1, frost$core$Int** param2, frost$core$Int* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:27
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int$GT(param0, &$s2, param1, param2, param3);
return;

}
void org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int$GT(org$frostlang$plex$runtime$DFA* param0, frost$core$String* param1, frost$core$Int param2, frost$core$Int** param3, frost$core$Int* param4) {

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int _5;
frost$core$Int* _6;
frost$core$Char8** _9;
frost$core$Char8* _10;
frost$core$Char8** _11;
frost$core$Int _14;
frost$core$Int* _15;
frost$core$Int* _20;
frost$core$Int _21;
frost$core$Int* _23;
frost$core$Int* _26;
frost$core$Int*** _29;
frost$core$Int** _32;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:22
_1 = (frost$core$Int) {1u};
_2 = &param0->line;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:24
_5 = (frost$core$Int) {1u};
_6 = &param0->column;
*_6 = _5;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:32
_9 = &param1->data;
_10 = *_9;
_11 = &param0->source;
*_11 = _10;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:33
_14 = (frost$core$Int) {0u};
_15 = &param0->offset;
*_15 = _14;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:34
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from DFA.frost:34:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:143
_20 = &param1->_length;
_21 = *_20;
_23 = &param0->sourceEnd;
*_23 = _21;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:35
_26 = &param0->stateCount;
*_26 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:36
_29 = &param0->transitions;
*_29 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:37
_32 = &param0->accepts;
*_32 = param4;
return;

}
org$frostlang$plex$runtime$RawToken org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken(org$frostlang$plex$runtime$DFA* param0) {

frost$core$Int local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$Int local5;
frost$core$Int local6;
frost$core$Int local7;
frost$core$Int local8;
frost$core$Int local9;
frost$core$Char8 local10;
frost$core$Int local11;
frost$core$String$Index local12;
frost$core$String$Index local13;
frost$core$String$Index local14;
frost$core$String$Index local15;
frost$core$Int _1;
frost$core$Int* _4;
frost$core$Int _5;
frost$core$Int* _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _15;
frost$core$Int _18;
frost$core$Int* _19;
frost$core$Int _20;
frost$core$Int* _23;
frost$core$String$Index _25;
frost$core$String$Index _28;
frost$core$Int* _29;
frost$core$Int _30;
frost$core$Int* _33;
frost$core$String$Index _35;
frost$core$String$Index _38;
frost$core$Int* _39;
frost$core$Int _40;
frost$core$Int* _41;
frost$core$Int _42;
org$frostlang$plex$runtime$RawToken _43;
frost$core$Int _46;
frost$core$Int* _49;
frost$core$Int _50;
frost$core$Int* _53;
frost$core$Int _54;
frost$core$Int* _57;
frost$core$Int _58;
frost$core$Int* _61;
frost$core$Int _62;
frost$core$Int* _66;
frost$core$Int _67;
frost$core$Int* _68;
frost$core$Int _69;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _74;
frost$core$Char8** _77;
frost$core$Char8* _78;
frost$core$Int* _79;
frost$core$Int _80;
frost$core$Int64 _81;
int64_t _82;
frost$core$Char8 _83;
frost$core$Char8 _86;
uint8_t _89;
frost$core$UInt8 _90;
frost$core$UInt8 _92;
uint8_t _93;
uint8_t _94;
bool _95;
frost$core$Bit _96;
bool _97;
frost$core$Char8 _100;
uint8_t _103;
frost$core$UInt8 _104;
frost$core$Object* _106;
$fn3 _109;
frost$core$String* _110;
frost$core$String* _111;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$String* _119;
frost$core$Object* _129;
frost$core$Object* _131;
frost$core$Object* _133;
frost$core$Int _136;
frost$core$Int _138;
frost$core$Int*** _142;
frost$core$Int** _143;
frost$core$Char8 _144;
uint8_t _147;
int64_t _148;
frost$core$Int _149;
frost$core$Int64 _151;
int64_t _152;
frost$core$Int* _153;
frost$core$Int _154;
frost$core$Int64 _155;
int64_t _156;
frost$core$Int _157;
frost$core$Int _160;
frost$core$Int _161;
int64_t _162;
int64_t _163;
bool _164;
frost$core$Bit _165;
bool _166;
frost$core$Int* _169;
frost$core$Int _170;
frost$core$Int _171;
int64_t _172;
int64_t _173;
int64_t _174;
frost$core$Int _175;
frost$core$Int* _176;
frost$core$Char8 _179;
uint8_t _182;
frost$core$UInt8 _183;
frost$core$UInt8 _185;
uint8_t _188;
uint8_t _189;
bool _190;
frost$core$Bit _191;
bool _193;
frost$core$Int* _196;
frost$core$Int _197;
frost$core$Int _198;
int64_t _199;
int64_t _200;
int64_t _201;
frost$core$Int _202;
frost$core$Int* _203;
frost$core$Int _206;
frost$core$Int* _207;
frost$core$UInt8 _210;
uint8_t _213;
uint8_t _214;
bool _215;
frost$core$Bit _216;
bool _218;
frost$core$Int* _221;
frost$core$Int _222;
frost$core$Int _223;
frost$core$Int* _224;
frost$core$Int _225;
frost$core$Int _226;
int64_t _229;
int64_t _230;
int64_t _231;
frost$core$Int _232;
int64_t _234;
int64_t _235;
int64_t _236;
frost$core$Int _237;
int64_t _238;
int64_t _239;
int64_t _240;
frost$core$Int _241;
frost$core$Int* _242;
frost$core$Int* _246;
frost$core$Int _247;
frost$core$Int _248;
int64_t _249;
int64_t _250;
int64_t _251;
frost$core$Int _252;
frost$core$Int* _253;
frost$core$Int** _257;
frost$core$Int* _258;
frost$core$Int _259;
frost$core$Int64 _260;
int64_t _261;
frost$core$Int _262;
frost$core$Int _265;
frost$core$Int _266;
int64_t _267;
int64_t _268;
bool _269;
frost$core$Bit _270;
bool _271;
frost$core$Int _274;
frost$core$Int* _277;
frost$core$Int _278;
frost$core$Int _287;
frost$core$Int* _288;
frost$core$Int _291;
frost$core$Int _292;
frost$core$Int* _295;
frost$core$String$Index _297;
frost$core$String$Index _300;
frost$core$Int _301;
frost$core$Int* _304;
frost$core$String$Index _306;
frost$core$String$Index _309;
frost$core$Int _310;
frost$core$Int _311;
org$frostlang$plex$runtime$RawToken _312;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:41
_1 = (frost$core$Int) {1u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:42
_4 = &param0->offset;
_5 = *_4;
_6 = &param0->sourceEnd;
_7 = *_6;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from DFA.frost:42:19
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_10 = _5.value;
_11 = _7.value;
_12 = _10 == _11;
_13 = (frost$core$Bit) {_12};
_15 = _13.value;
if (_15) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:43
_18 = (frost$core$Int) {0u};
_19 = &param0->offset;
_20 = *_19;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from DFA.frost:43:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
_23 = &(&local2)->value;
*_23 = _20;
_25 = *(&local2);
*(&local1) = _25;
_28 = *(&local1);
_29 = &param0->offset;
_30 = *_29;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from DFA.frost:43:66
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
_33 = &(&local4)->value;
*_33 = _30;
_35 = *(&local4);
*(&local3) = _35;
_38 = *(&local3);
_39 = &param0->line;
_40 = *_39;
_41 = &param0->column;
_42 = *_41;
_43 = org$frostlang$plex$runtime$RawToken$init$frost$core$Int$frost$core$String$Index$frost$core$String$Index$frost$core$Int$frost$core$Int(_18, _28, _38, _40, _42);
return _43;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:45
_46 = (frost$core$Int) {18446744073709551615u};
*(&local5) = _46;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:46
_49 = &param0->offset;
_50 = *_49;
*(&local6) = _50;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:47
_53 = &param0->offset;
_54 = *_53;
*(&local7) = _54;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:48
_57 = &param0->line;
_58 = *_57;
*(&local8) = _58;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:49
_61 = &param0->column;
_62 = *_61;
*(&local9) = _62;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:50
goto block6;
block6:;
_66 = &param0->offset;
_67 = *_66;
_68 = &param0->sourceEnd;
_69 = *_68;
_70 = _67.value;
_71 = _69.value;
_72 = _70 != _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:51
_77 = &param0->source;
_78 = *_77;
_79 = &param0->offset;
_80 = *_79;
_81 = frost$core$Int64$init$frost$core$Int(_80);
_82 = _81.value;
_83 = _78[_82];
*(&local10) = _83;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:52
_86 = *(&local10);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from DFA.frost:52:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Char8.stub:103
_89 = _86.value;
_90 = (frost$core$UInt8) {_89};
_92 = (frost$core$UInt8) {255u};
_93 = _90.value;
_94 = _92.value;
_95 = _93 > _94;
_96 = (frost$core$Bit) {_95};
_97 = _96.value;
if (_97) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:53
_100 = *(&local10);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from DFA.frost:53:53
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Char8.stub:103
_103 = _100.value;
_104 = (frost$core$UInt8) {_103};
frost$core$UInt8$wrapper* $tmp4;
$tmp4 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp4->value = _104;
_106 = ((frost$core$Object*) $tmp4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from DFA.frost:53:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_109 = ($fn5) _106->$class->vtable[0];
_110 = _109(_106);
_111 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s6, _110);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$ref$frost$core$Object$Q(_112);
_114 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_111, &$s7);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from DFA.frost:53:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String(_119);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s8);
_129 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_129);
_131 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_131);
_133 = _106;
frost$core$Frost$unref$frost$core$Object$Q(_133);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:54
_136 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_136);
_138 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _138, &$s10);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:56
_142 = &param0->transitions;
_143 = *_142;
_144 = *(&local10);
// begin inline call to function frost.core.Char8.get_asInt():frost.core.Int from DFA.frost:56:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Char8.stub:83
_147 = _144.value;
_148 = ((int64_t) _147);
_149 = (frost$core$Int) {_148};
_151 = frost$core$Int64$init$frost$core$Int(_149);
_152 = _151.value;
_153 = _143[_152];
_154 = *(&local0);
_155 = frost$core$Int64$init$frost$core$Int(_154);
_156 = _155.value;
_157 = _153[_156];
*(&local0) = _157;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:57
_160 = *(&local0);
_161 = (frost$core$Int) {0u};
_162 = _160.value;
_163 = _161.value;
_164 = _162 != _163;
_165 = (frost$core$Bit) {_164};
_166 = _165.value;
if (_166) goto block17; else goto block19;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:58
_169 = &param0->offset;
_170 = *_169;
_171 = (frost$core$Int) {1u};
_172 = _170.value;
_173 = _171.value;
_174 = _172 + _173;
_175 = (frost$core$Int) {_174};
_176 = &param0->offset;
*_176 = _175;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:59
_179 = *(&local10);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from DFA.frost:59:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Char8.stub:103
_182 = _179.value;
_183 = (frost$core$UInt8) {_182};
_185 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from DFA.frost:60:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt8.stub:542
_188 = _183.value;
_189 = _185.value;
_190 = _188 == _189;
_191 = (frost$core$Bit) {_190};
_193 = _191.value;
if (_193) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:61
_196 = &param0->line;
_197 = *_196;
_198 = (frost$core$Int) {1u};
_199 = _197.value;
_200 = _198.value;
_201 = _199 + _200;
_202 = (frost$core$Int) {_201};
_203 = &param0->line;
*_203 = _202;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:62
_206 = (frost$core$Int) {1u};
_207 = &param0->column;
*_207 = _206;
goto block21;
block23:;
_210 = (frost$core$UInt8) {9u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from DFA.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt8.stub:542
_213 = _183.value;
_214 = _210.value;
_215 = _213 == _214;
_216 = (frost$core$Bit) {_215};
_218 = _216.value;
if (_218) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:65
_221 = &param0->column;
_222 = *_221;
_223 = (frost$core$Int) {4u};
_224 = &param0->column;
_225 = *_224;
_226 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from DFA.frost:65:51
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:152
_229 = _225.value;
_230 = _226.value;
_231 = _229 % _230;
_232 = (frost$core$Int) {_231};
_234 = _223.value;
_235 = _232.value;
_236 = _234 - _235;
_237 = (frost$core$Int) {_236};
_238 = _222.value;
_239 = _237.value;
_240 = _238 + _239;
_241 = (frost$core$Int) {_240};
_242 = &param0->column;
*_242 = _241;
goto block21;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:68
_246 = &param0->column;
_247 = *_246;
_248 = (frost$core$Int) {1u};
_249 = _247.value;
_250 = _248.value;
_251 = _249 + _250;
_252 = (frost$core$Int) {_251};
_253 = &param0->column;
*_253 = _252;
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:71
_257 = &param0->accepts;
_258 = *_257;
_259 = *(&local0);
_260 = frost$core$Int64$init$frost$core$Int(_259);
_261 = _260.value;
_262 = _258[_261];
*(&local11) = _262;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:72
_265 = *(&local11);
_266 = (frost$core$Int) {18446744073709551615u};
_267 = _265.value;
_268 = _266.value;
_269 = _267 != _268;
_270 = (frost$core$Bit) {_269};
_271 = _270.value;
if (_271) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:73
_274 = *(&local11);
*(&local5) = _274;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:74
_277 = &param0->offset;
_278 = *_277;
*(&local7) = _278;
goto block30;
block30:;
goto block6;
block19:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:78
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:81
_287 = *(&local7);
_288 = &param0->offset;
*_288 = _287;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:82
_291 = *(&local5);
_292 = *(&local6);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from DFA.frost:82:43
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
_295 = &(&local13)->value;
*_295 = _292;
_297 = *(&local13);
*(&local12) = _297;
_300 = *(&local12);
_301 = *(&local7);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from DFA.frost:82:64
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
_304 = &(&local15)->value;
*_304 = _301;
_306 = *(&local15);
*(&local14) = _306;
_309 = *(&local14);
_310 = *(&local8);
_311 = *(&local9);
_312 = org$frostlang$plex$runtime$RawToken$init$frost$core$Int$frost$core$String$Index$frost$core$String$Index$frost$core$Int$frost$core$Int(_291, _300, _309, _310, _311);
return _312;

}
void org$frostlang$plex$runtime$DFA$cleanup(org$frostlang$plex$runtime$DFA* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:6
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






