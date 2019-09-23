#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/unsafe/NewPointer.h"
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

void org$frostlang$plex$runtime$DFA$init$frost$core$Int$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$LTfrost$core$Int$GT$GT$frost$unsafe$NewPointer$LTfrost$core$Int$GT(void* rawSelf, frost$core$Int param1, frost$unsafe$NewPointer param2, frost$unsafe$NewPointer param3) {
org$frostlang$plex$runtime$DFA* param0 = (org$frostlang$plex$runtime$DFA*) rawSelf;

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:27
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$LTfrost$core$Int$GT$GT$frost$unsafe$NewPointer$LTfrost$core$Int$GT(param0, &$s2, param1, param2, param3);
return;

}
void org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$LTfrost$core$Int$GT$GT$frost$unsafe$NewPointer$LTfrost$core$Int$GT(void* rawSelf, frost$core$String* param1, frost$core$Int param2, frost$unsafe$NewPointer param3, frost$unsafe$NewPointer param4) {
org$frostlang$plex$runtime$DFA* param0 = (org$frostlang$plex$runtime$DFA*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int _5;
frost$core$Int* _6;
frost$unsafe$NewPointer* _9;
frost$unsafe$NewPointer _10;
frost$unsafe$NewPointer* _11;
frost$core$Int _14;
frost$core$Int* _15;
frost$core$Int* _20;
frost$core$Int _21;
frost$core$Int* _23;
frost$core$Int* _26;
frost$unsafe$NewPointer* _29;
frost$unsafe$NewPointer* _32;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
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
org$frostlang$plex$runtime$RawToken org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken(void* rawSelf) {
org$frostlang$plex$runtime$DFA* param0 = (org$frostlang$plex$runtime$DFA*) rawSelf;

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
frost$unsafe$NewPointer* _77;
frost$unsafe$NewPointer _78;
int64_t _79;
frost$core$Int* _80;
frost$core$Int _81;
frost$core$Int64 _82;
int64_t _83;
frost$core$Char8 _84;
frost$core$Char8 _87;
uint8_t _90;
frost$core$UInt8 _91;
frost$core$UInt8 _93;
uint8_t _94;
uint8_t _95;
bool _96;
frost$core$Bit _97;
bool _98;
frost$core$Char8 _101;
uint8_t _104;
frost$core$UInt8 _105;
frost$core$Object* _107;
$fn3 _110;
frost$core$String* _111;
frost$core$String* _112;
frost$core$Object* _113;
frost$core$Object* _115;
frost$core$Object* _117;
frost$core$String* _120;
frost$core$Object* _130;
frost$core$Object* _132;
frost$core$Object* _134;
frost$core$Int _137;
frost$core$Int _139;
frost$unsafe$NewPointer* _143;
frost$unsafe$NewPointer _144;
int64_t _145;
frost$core$Char8 _146;
uint8_t _149;
int64_t _150;
frost$core$Int _151;
frost$core$Int64 _153;
int64_t _154;
frost$unsafe$NewPointer _155;
int64_t _156;
frost$core$Int _157;
frost$core$Int64 _158;
int64_t _159;
frost$core$Int _160;
frost$core$Int _163;
frost$core$Int _164;
int64_t _165;
int64_t _166;
bool _167;
frost$core$Bit _168;
bool _169;
frost$core$Int* _172;
frost$core$Int _173;
frost$core$Int _174;
int64_t _175;
int64_t _176;
int64_t _177;
frost$core$Int _178;
frost$core$Int* _179;
frost$core$Char8 _182;
uint8_t _185;
frost$core$UInt8 _186;
frost$core$UInt8 _188;
uint8_t _191;
uint8_t _192;
bool _193;
frost$core$Bit _194;
bool _196;
frost$core$Int* _199;
frost$core$Int _200;
frost$core$Int _201;
int64_t _202;
int64_t _203;
int64_t _204;
frost$core$Int _205;
frost$core$Int* _206;
frost$core$Int _209;
frost$core$Int* _210;
frost$core$UInt8 _213;
uint8_t _216;
uint8_t _217;
bool _218;
frost$core$Bit _219;
bool _221;
frost$core$Int* _224;
frost$core$Int _225;
frost$core$Int _226;
frost$core$Int* _227;
frost$core$Int _228;
frost$core$Int _229;
int64_t _232;
int64_t _233;
int64_t _234;
frost$core$Int _235;
int64_t _237;
int64_t _238;
int64_t _239;
frost$core$Int _240;
int64_t _241;
int64_t _242;
int64_t _243;
frost$core$Int _244;
frost$core$Int* _245;
frost$core$Int* _249;
frost$core$Int _250;
frost$core$Int _251;
int64_t _252;
int64_t _253;
int64_t _254;
frost$core$Int _255;
frost$core$Int* _256;
frost$unsafe$NewPointer* _260;
frost$unsafe$NewPointer _261;
int64_t _262;
frost$core$Int _263;
frost$core$Int64 _264;
int64_t _265;
frost$core$Int _266;
frost$core$Int _269;
frost$core$Int _270;
int64_t _271;
int64_t _272;
bool _273;
frost$core$Bit _274;
bool _275;
frost$core$Int _278;
frost$core$Int* _281;
frost$core$Int _282;
frost$core$Int _291;
frost$core$Int* _292;
frost$core$Int _295;
frost$core$Int _296;
frost$core$Int* _299;
frost$core$String$Index _301;
frost$core$String$Index _304;
frost$core$Int _305;
frost$core$Int* _308;
frost$core$String$Index _310;
frost$core$String$Index _313;
frost$core$Int _314;
frost$core$Int _315;
org$frostlang$plex$runtime$RawToken _316;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:41
_1 = (frost$core$Int) {1u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:42
_4 = &param0->offset;
_5 = *_4;
_6 = &param0->sourceEnd;
_7 = *_6;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from DFA.frost:42:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_23 = &(&local2)->value;
*_23 = _20;
_25 = *(&local2);
*(&local1) = _25;
_28 = *(&local1);
_29 = &param0->offset;
_30 = *_29;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from DFA.frost:43:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
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
_79 = _78.value;
_80 = &param0->offset;
_81 = *_80;
_82 = frost$core$Int64$init$frost$core$Int(_81);
_83 = _82.value;
_84 = ((frost$core$Char8*)_79)[_83];
*(&local10) = _84;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:52
_87 = *(&local10);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from DFA.frost:52:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_90 = _87.value;
_91 = (frost$core$UInt8) {_90};
_93 = (frost$core$UInt8) {255u};
_94 = _91.value;
_95 = _93.value;
_96 = _94 > _95;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:53
_101 = *(&local10);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from DFA.frost:53:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_104 = _101.value;
_105 = (frost$core$UInt8) {_104};
frost$core$UInt8$wrapper* $tmp4;
$tmp4 = (frost$core$UInt8$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt8$wrapper), (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp4->value = _105;
_107 = ((frost$core$Object*) $tmp4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from DFA.frost:53:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_110 = ($fn5) _107->$class->vtable[0];
_111 = _110(_107);
_112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s6, _111);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$ref$frost$core$Object$Q(_113);
_115 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_115);
_117 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_117);
_120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_112, &$s7);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from DFA.frost:53:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_120);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s8);
_130 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_130);
_132 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_132);
_134 = _107;
frost$core$Frost$unref$frost$core$Object$Q(_134);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:54
_137 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_137);
_139 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _139, &$s10);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:56
_143 = &param0->transitions;
_144 = *_143;
_145 = _144.value;
_146 = *(&local10);
// begin inline call to function frost.core.Char8.get_asInt():frost.core.Int from DFA.frost:56:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:101
_149 = _146.value;
_150 = ((int64_t) _149);
_151 = (frost$core$Int) {_150};
_153 = frost$core$Int64$init$frost$core$Int(_151);
_154 = _153.value;
_155 = ((frost$unsafe$NewPointer*)_145)[_154];
_156 = _155.value;
_157 = *(&local0);
_158 = frost$core$Int64$init$frost$core$Int(_157);
_159 = _158.value;
_160 = ((frost$core$Int*)_156)[_159];
*(&local0) = _160;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:57
_163 = *(&local0);
_164 = (frost$core$Int) {0u};
_165 = _163.value;
_166 = _164.value;
_167 = _165 != _166;
_168 = (frost$core$Bit) {_167};
_169 = _168.value;
if (_169) goto block17; else goto block19;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:58
_172 = &param0->offset;
_173 = *_172;
_174 = (frost$core$Int) {1u};
_175 = _173.value;
_176 = _174.value;
_177 = _175 + _176;
_178 = (frost$core$Int) {_177};
_179 = &param0->offset;
*_179 = _178;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:59
_182 = *(&local10);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from DFA.frost:59:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_185 = _182.value;
_186 = (frost$core$UInt8) {_185};
_188 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from DFA.frost:60:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:643
_191 = _186.value;
_192 = _188.value;
_193 = _191 == _192;
_194 = (frost$core$Bit) {_193};
_196 = _194.value;
if (_196) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:61
_199 = &param0->line;
_200 = *_199;
_201 = (frost$core$Int) {1u};
_202 = _200.value;
_203 = _201.value;
_204 = _202 + _203;
_205 = (frost$core$Int) {_204};
_206 = &param0->line;
*_206 = _205;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:62
_209 = (frost$core$Int) {1u};
_210 = &param0->column;
*_210 = _209;
goto block21;
block23:;
_213 = (frost$core$UInt8) {9u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from DFA.frost:64:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:643
_216 = _186.value;
_217 = _213.value;
_218 = _216 == _217;
_219 = (frost$core$Bit) {_218};
_221 = _219.value;
if (_221) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:65
_224 = &param0->column;
_225 = *_224;
_226 = (frost$core$Int) {4u};
_227 = &param0->column;
_228 = *_227;
_229 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from DFA.frost:65:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_232 = _228.value;
_233 = _229.value;
_234 = _232 % _233;
_235 = (frost$core$Int) {_234};
_237 = _226.value;
_238 = _235.value;
_239 = _237 - _238;
_240 = (frost$core$Int) {_239};
_241 = _225.value;
_242 = _240.value;
_243 = _241 + _242;
_244 = (frost$core$Int) {_243};
_245 = &param0->column;
*_245 = _244;
goto block21;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:68
_249 = &param0->column;
_250 = *_249;
_251 = (frost$core$Int) {1u};
_252 = _250.value;
_253 = _251.value;
_254 = _252 + _253;
_255 = (frost$core$Int) {_254};
_256 = &param0->column;
*_256 = _255;
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:71
_260 = &param0->accepts;
_261 = *_260;
_262 = _261.value;
_263 = *(&local0);
_264 = frost$core$Int64$init$frost$core$Int(_263);
_265 = _264.value;
_266 = ((frost$core$Int*)_262)[_265];
*(&local11) = _266;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:72
_269 = *(&local11);
_270 = (frost$core$Int) {18446744073709551615u};
_271 = _269.value;
_272 = _270.value;
_273 = _271 != _272;
_274 = (frost$core$Bit) {_273};
_275 = _274.value;
if (_275) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:73
_278 = *(&local11);
*(&local5) = _278;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:74
_281 = &param0->offset;
_282 = *_281;
*(&local7) = _282;
goto block30;
block30:;
goto block6;
block19:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:78
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:81
_291 = *(&local7);
_292 = &param0->offset;
*_292 = _291;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:82
_295 = *(&local5);
_296 = *(&local6);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from DFA.frost:82:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_299 = &(&local13)->value;
*_299 = _296;
_301 = *(&local13);
*(&local12) = _301;
_304 = *(&local12);
_305 = *(&local7);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from DFA.frost:82:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_308 = &(&local15)->value;
*_308 = _305;
_310 = *(&local15);
*(&local14) = _310;
_313 = *(&local14);
_314 = *(&local8);
_315 = *(&local9);
_316 = org$frostlang$plex$runtime$RawToken$init$frost$core$Int$frost$core$String$Index$frost$core$String$Index$frost$core$Int$frost$core$Int(_295, _304, _313, _314, _315);
return _316;

}
void org$frostlang$plex$runtime$DFA$cleanup(void* rawSelf) {
org$frostlang$plex$runtime$DFA* param0 = (org$frostlang$plex$runtime$DFA*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/DFA.frost:6
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






