#include "frost/core/String/UTF32Iterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Char32.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Char8.h"
#include "frost/core/Int32.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Object* frost$core$String$UTF32Iterator$next$R$frost$core$Char32$shim(frost$core$String$UTF32Iterator* p0) {
    frost$core$Char32 result = frost$core$String$UTF32Iterator$next$R$frost$core$Char32(p0);

    frost$core$Char32$wrapper* $tmp2;
    $tmp2 = (frost$core$Char32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Char32$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$core$String$UTF32Iterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF32Iterator$next$R$frost$core$Char32$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$core$String$UTF32Iterator$class_type frost$core$String$UTF32Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$UTF32Iterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$UTF32Iterator$cleanup, frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF32Iterator$next$R$frost$core$Char32$shim} };

typedef frost$core$Bit (*$fn3)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -2661654210963896095, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 88, 2168974927089519619, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };

void frost$core$String$UTF32Iterator$init$frost$core$String(frost$core$String$UTF32Iterator* param0, frost$core$String* param1) {

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$String* _8;
frost$core$Object* _9;
frost$core$String** _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:154
_1 = (frost$core$Int) {0u};
_2 = &param0->index;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:159
_5 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->str;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->str;
*_11 = param1;
return;

}
frost$core$Bit frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit(frost$core$String$UTF32Iterator* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Int* _5;
frost$core$Int _6;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:164
_1 = &param0->index;
_2 = *_1;
_3 = &param0->str;
_4 = *_3;
_5 = &_4->_length;
_6 = *_5;
_7 = _2.value;
_8 = _6.value;
_9 = _7 >= _8;
_10 = (frost$core$Bit) {_9};
return _10;

}
frost$core$Char32 frost$core$String$UTF32Iterator$next$R$frost$core$Char32(frost$core$String$UTF32Iterator* param0) {

frost$core$Char8 local0;
frost$core$Int32 local1;
frost$collections$Iterator* _0;
$fn3 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$Int* _15;
frost$core$Int _16;
frost$core$String** _17;
frost$core$String* _18;
frost$core$Int* _19;
frost$core$Int _20;
int64_t _21;
int64_t _22;
bool _23;
frost$core$Bit _24;
bool _25;
frost$core$Int _27;
frost$core$String** _31;
frost$core$String* _32;
frost$core$Char8** _33;
frost$core$Char8* _34;
frost$core$Int* _35;
frost$core$Int _36;
frost$core$Int64 _37;
int64_t _38;
frost$core$Char8 _39;
frost$core$Char8 _42;
uint8_t _45;
int32_t _46;
int32_t _47;
frost$core$Int32 _48;
frost$core$Char8 _52;
uint8_t _53;
int64_t _54;
int64_t _55;
bool _56;
frost$core$Bit _57;
bool _58;
frost$core$Int* _61;
frost$core$Int _62;
frost$core$Int _63;
int64_t _64;
int64_t _65;
int64_t _66;
frost$core$Int _67;
frost$core$Int* _68;
frost$core$Int32 _71;
frost$core$Char32 _72;
frost$core$Char8 _75;
uint8_t _76;
int64_t _77;
int64_t _78;
bool _79;
frost$core$Bit _80;
bool _81;
frost$core$Int* _84;
frost$core$Int _85;
frost$core$Int _86;
int64_t _87;
int64_t _88;
int64_t _89;
frost$core$Int _90;
frost$core$String** _91;
frost$core$String* _92;
frost$core$Int* _93;
frost$core$Int _94;
int64_t _95;
int64_t _96;
bool _97;
frost$core$Bit _98;
bool _99;
frost$core$Int32 _102;
frost$core$Int32 _103;
int32_t _106;
int32_t _107;
int32_t _108;
frost$core$Int32 _109;
frost$core$String** _111;
frost$core$String* _112;
frost$core$Char8** _113;
frost$core$Char8* _114;
frost$core$Int* _115;
frost$core$Int _116;
frost$core$Int64 _117;
frost$core$Int64 _118;
int64_t _119;
int64_t _120;
int64_t _121;
frost$core$Int64 _122;
int64_t _123;
frost$core$Char8 _124;
uint8_t _127;
int32_t _128;
int32_t _129;
frost$core$Int32 _130;
frost$core$Int32 _132;
int32_t _135;
int32_t _136;
int32_t _137;
frost$core$Int32 _138;
int32_t _140;
int32_t _141;
int32_t _142;
frost$core$Int32 _143;
frost$core$Int32 _148;
frost$core$Int* _152;
frost$core$Int _153;
frost$core$Int _154;
int64_t _155;
int64_t _156;
int64_t _157;
frost$core$Int _158;
frost$core$Int* _159;
frost$core$Int32 _162;
frost$core$Char32 _163;
frost$core$Char8 _166;
uint8_t _167;
int64_t _168;
int64_t _169;
bool _170;
frost$core$Bit _171;
bool _172;
frost$core$Int* _175;
frost$core$Int _176;
frost$core$Int _177;
int64_t _178;
int64_t _179;
int64_t _180;
frost$core$Int _181;
frost$core$String** _182;
frost$core$String* _183;
frost$core$Int* _184;
frost$core$Int _185;
int64_t _186;
int64_t _187;
bool _188;
frost$core$Bit _189;
bool _190;
frost$core$Int32 _193;
frost$core$Int32 _194;
int32_t _197;
int32_t _198;
int32_t _199;
frost$core$Int32 _200;
frost$core$String** _202;
frost$core$String* _203;
frost$core$Char8** _204;
frost$core$Char8* _205;
frost$core$Int* _206;
frost$core$Int _207;
frost$core$Int64 _208;
frost$core$Int64 _209;
int64_t _210;
int64_t _211;
int64_t _212;
frost$core$Int64 _213;
int64_t _214;
frost$core$Char8 _215;
uint8_t _218;
int32_t _219;
int32_t _220;
frost$core$Int32 _221;
frost$core$Int32 _223;
int32_t _226;
int32_t _227;
int32_t _228;
frost$core$Int32 _229;
int32_t _231;
int32_t _232;
int32_t _233;
frost$core$Int32 _234;
frost$core$String** _235;
frost$core$String* _236;
frost$core$Char8** _237;
frost$core$Char8* _238;
frost$core$Int* _239;
frost$core$Int _240;
frost$core$Int64 _241;
frost$core$Int64 _242;
int64_t _243;
int64_t _244;
int64_t _245;
frost$core$Int64 _246;
int64_t _247;
frost$core$Char8 _248;
uint8_t _251;
int32_t _252;
int32_t _253;
frost$core$Int32 _254;
frost$core$Int32 _256;
int32_t _259;
int32_t _260;
int32_t _261;
frost$core$Int32 _262;
int32_t _264;
int32_t _265;
int32_t _266;
frost$core$Int32 _267;
frost$core$Int32 _272;
frost$core$Int* _276;
frost$core$Int _277;
frost$core$Int _278;
int64_t _279;
int64_t _280;
int64_t _281;
frost$core$Int _282;
frost$core$Int* _283;
frost$core$Int32 _286;
frost$core$Char32 _287;
frost$core$Int* _290;
frost$core$Int _291;
frost$core$Int _292;
int64_t _293;
int64_t _294;
int64_t _295;
frost$core$Int _296;
frost$core$String** _297;
frost$core$String* _298;
frost$core$Int* _299;
frost$core$Int _300;
int64_t _301;
int64_t _302;
bool _303;
frost$core$Bit _304;
bool _305;
frost$core$Int32 _308;
frost$core$Int32 _309;
int32_t _312;
int32_t _313;
int32_t _314;
frost$core$Int32 _315;
frost$core$String** _317;
frost$core$String* _318;
frost$core$Char8** _319;
frost$core$Char8* _320;
frost$core$Int* _321;
frost$core$Int _322;
frost$core$Int64 _323;
frost$core$Int64 _324;
int64_t _325;
int64_t _326;
int64_t _327;
frost$core$Int64 _328;
int64_t _329;
frost$core$Char8 _330;
uint8_t _333;
int32_t _334;
int32_t _335;
frost$core$Int32 _336;
frost$core$Int32 _338;
int32_t _341;
int32_t _342;
int32_t _343;
frost$core$Int32 _344;
int32_t _346;
int32_t _347;
int32_t _348;
frost$core$Int32 _349;
frost$core$String** _350;
frost$core$String* _351;
frost$core$Char8** _352;
frost$core$Char8* _353;
frost$core$Int* _354;
frost$core$Int _355;
frost$core$Int64 _356;
frost$core$Int64 _357;
int64_t _358;
int64_t _359;
int64_t _360;
frost$core$Int64 _361;
int64_t _362;
frost$core$Char8 _363;
uint8_t _366;
int32_t _367;
int32_t _368;
frost$core$Int32 _369;
frost$core$Int32 _371;
int32_t _374;
int32_t _375;
int32_t _376;
frost$core$Int32 _377;
int32_t _379;
int32_t _380;
int32_t _381;
frost$core$Int32 _382;
frost$core$String** _383;
frost$core$String* _384;
frost$core$Char8** _385;
frost$core$Char8* _386;
frost$core$Int* _387;
frost$core$Int _388;
frost$core$Int64 _389;
frost$core$Int64 _390;
int64_t _391;
int64_t _392;
int64_t _393;
frost$core$Int64 _394;
int64_t _395;
frost$core$Char8 _396;
uint8_t _399;
int32_t _400;
int32_t _401;
frost$core$Int32 _402;
frost$core$Int32 _404;
int32_t _407;
int32_t _408;
int32_t _409;
frost$core$Int32 _410;
int32_t _412;
int32_t _413;
int32_t _414;
frost$core$Int32 _415;
frost$core$Int32 _420;
frost$core$Int* _424;
frost$core$Int _425;
frost$core$Int _426;
int64_t _427;
int64_t _428;
int64_t _429;
frost$core$Int _430;
frost$core$Int* _431;
frost$core$Int32 _434;
frost$core$Char32 _435;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp4 = _0->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4 = $tmp4->next;
}
_1 = $tmp4->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.stub:47:6
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {168u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _11, &$s6);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:169
_15 = &param0->index;
_16 = *_15;
_17 = &param0->str;
_18 = *_17;
_19 = &_18->_length;
_20 = *_19;
_21 = _16.value;
_22 = _20.value;
_23 = _21 < _22;
_24 = (frost$core$Bit) {_23};
_25 = _24.value;
if (_25) goto block4; else goto block5;
block5:;
_27 = (frost$core$Int) {169u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s7, _27);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:170
_31 = &param0->str;
_32 = *_31;
_33 = &_32->data;
_34 = *_33;
_35 = &param0->index;
_36 = *_35;
_37 = frost$core$Int64$init$frost$core$Int(_36);
_38 = _37.value;
_39 = _34[_38];
*(&local0) = _39;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:171
_42 = *(&local0);
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:171:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_45 = _42.value;
_46 = ((int32_t) _45);
_47 = _46 & 255u;
_48 = (frost$core$Int32) {_47};
*(&local1) = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:172
_52 = *(&local0);
_53 = _52.value;
_54 = ((int64_t) _53);
_55 = _54 & 255u;
_56 = _55 < 128u;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:173
_61 = &param0->index;
_62 = *_61;
_63 = (frost$core$Int) {1u};
_64 = _62.value;
_65 = _63.value;
_66 = _64 + _65;
_67 = (frost$core$Int) {_66};
_68 = &param0->index;
*_68 = _67;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:174
_71 = *(&local1);
_72 = frost$core$Char32$init$frost$core$Int32(_71);
return _72;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:176
_75 = *(&local0);
_76 = _75.value;
_77 = ((int64_t) _76);
_78 = _77 & 255u;
_79 = _78 < 192u;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:177
_84 = &param0->index;
_85 = *_84;
_86 = (frost$core$Int) {1u};
_87 = _85.value;
_88 = _86.value;
_89 = _87 + _88;
_90 = (frost$core$Int) {_89};
_91 = &param0->str;
_92 = *_91;
_93 = &_92->_length;
_94 = *_93;
_95 = _90.value;
_96 = _94.value;
_97 = _95 < _96;
_98 = (frost$core$Bit) {_97};
_99 = _98.value;
if (_99) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:178
_102 = *(&local1);
_103 = (frost$core$Int32) {1984u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:178:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_106 = _102.value;
_107 = _103.value;
_108 = _106 & _107;
_109 = (frost$core$Int32) {_108};
_111 = &param0->str;
_112 = *_111;
_113 = &_112->data;
_114 = *_113;
_115 = &param0->index;
_116 = *_115;
_117 = frost$core$Int64$init$frost$core$Int(_116);
_118 = (frost$core$Int64) {1u};
_119 = _117.value;
_120 = _118.value;
_121 = _119 + _120;
_122 = (frost$core$Int64) {_121};
_123 = _122.value;
_124 = _114[_123];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:178:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_127 = _124.value;
_128 = ((int32_t) _127);
_129 = _128 & 255u;
_130 = (frost$core$Int32) {_129};
_132 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:178:84
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_135 = _130.value;
_136 = _132.value;
_137 = _135 & _136;
_138 = (frost$core$Int32) {_137};
_140 = _109.value;
_141 = _138.value;
_142 = _140 + _141;
_143 = (frost$core$Int32) {_142};
*(&local1) = _143;
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:182
_148 = (frost$core$Int32) {0u};
*(&local1) = _148;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:184
_152 = &param0->index;
_153 = *_152;
_154 = (frost$core$Int) {2u};
_155 = _153.value;
_156 = _154.value;
_157 = _155 + _156;
_158 = (frost$core$Int) {_157};
_159 = &param0->index;
*_159 = _158;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:185
_162 = *(&local1);
_163 = frost$core$Char32$init$frost$core$Int32(_162);
return _163;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:187
_166 = *(&local0);
_167 = _166.value;
_168 = ((int64_t) _167);
_169 = _168 & 255u;
_170 = _169 < 224u;
_171 = (frost$core$Bit) {_170};
_172 = _171.value;
if (_172) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:188
_175 = &param0->index;
_176 = *_175;
_177 = (frost$core$Int) {2u};
_178 = _176.value;
_179 = _177.value;
_180 = _178 + _179;
_181 = (frost$core$Int) {_180};
_182 = &param0->str;
_183 = *_182;
_184 = &_183->_length;
_185 = *_184;
_186 = _181.value;
_187 = _185.value;
_188 = _186 < _187;
_189 = (frost$core$Bit) {_188};
_190 = _189.value;
if (_190) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:189
_193 = *(&local1);
_194 = (frost$core$Int32) {61440u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:189:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_197 = _193.value;
_198 = _194.value;
_199 = _197 & _198;
_200 = (frost$core$Int32) {_199};
_202 = &param0->str;
_203 = *_202;
_204 = &_203->data;
_205 = *_204;
_206 = &param0->index;
_207 = *_206;
_208 = frost$core$Int64$init$frost$core$Int(_207);
_209 = (frost$core$Int64) {1u};
_210 = _208.value;
_211 = _209.value;
_212 = _210 + _211;
_213 = (frost$core$Int64) {_212};
_214 = _213.value;
_215 = _205[_214];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:189:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_218 = _215.value;
_219 = ((int32_t) _218);
_220 = _219 & 255u;
_221 = (frost$core$Int32) {_220};
_223 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:189:84
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_226 = _221.value;
_227 = _223.value;
_228 = _226 & _227;
_229 = (frost$core$Int32) {_228};
_231 = _200.value;
_232 = _229.value;
_233 = _231 + _232;
_234 = (frost$core$Int32) {_233};
_235 = &param0->str;
_236 = *_235;
_237 = &_236->data;
_238 = *_237;
_239 = &param0->index;
_240 = *_239;
_241 = frost$core$Int64$init$frost$core$Int(_240);
_242 = (frost$core$Int64) {2u};
_243 = _241.value;
_244 = _242.value;
_245 = _243 + _244;
_246 = (frost$core$Int64) {_245};
_247 = _246.value;
_248 = _238[_247];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:190:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_251 = _248.value;
_252 = ((int32_t) _251);
_253 = _252 & 255u;
_254 = (frost$core$Int32) {_253};
_256 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:190:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_259 = _254.value;
_260 = _256.value;
_261 = _259 & _260;
_262 = (frost$core$Int32) {_261};
_264 = _234.value;
_265 = _262.value;
_266 = _264 + _265;
_267 = (frost$core$Int32) {_266};
*(&local1) = _267;
goto block20;
block21:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:193
_272 = (frost$core$Int32) {0u};
*(&local1) = _272;
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:195
_276 = &param0->index;
_277 = *_276;
_278 = (frost$core$Int) {3u};
_279 = _277.value;
_280 = _278.value;
_281 = _279 + _280;
_282 = (frost$core$Int) {_281};
_283 = &param0->index;
*_283 = _282;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:196
_286 = *(&local1);
_287 = frost$core$Char32$init$frost$core$Int32(_286);
return _287;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:198
_290 = &param0->index;
_291 = *_290;
_292 = (frost$core$Int) {3u};
_293 = _291.value;
_294 = _292.value;
_295 = _293 + _294;
_296 = (frost$core$Int) {_295};
_297 = &param0->str;
_298 = *_297;
_299 = &_298->_length;
_300 = *_299;
_301 = _296.value;
_302 = _300.value;
_303 = _301 < _302;
_304 = (frost$core$Bit) {_303};
_305 = _304.value;
if (_305) goto block27; else goto block29;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:199
_308 = *(&local1);
_309 = (frost$core$Int32) {1835008u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:199:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_312 = _308.value;
_313 = _309.value;
_314 = _312 & _313;
_315 = (frost$core$Int32) {_314};
_317 = &param0->str;
_318 = *_317;
_319 = &_318->data;
_320 = *_319;
_321 = &param0->index;
_322 = *_321;
_323 = frost$core$Int64$init$frost$core$Int(_322);
_324 = (frost$core$Int64) {1u};
_325 = _323.value;
_326 = _324.value;
_327 = _325 + _326;
_328 = (frost$core$Int64) {_327};
_329 = _328.value;
_330 = _320[_329];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:199:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_333 = _330.value;
_334 = ((int32_t) _333);
_335 = _334 & 255u;
_336 = (frost$core$Int32) {_335};
_338 = (frost$core$Int32) {258048u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:199:79
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_341 = _336.value;
_342 = _338.value;
_343 = _341 & _342;
_344 = (frost$core$Int32) {_343};
_346 = _315.value;
_347 = _344.value;
_348 = _346 + _347;
_349 = (frost$core$Int32) {_348};
_350 = &param0->str;
_351 = *_350;
_352 = &_351->data;
_353 = *_352;
_354 = &param0->index;
_355 = *_354;
_356 = frost$core$Int64$init$frost$core$Int(_355);
_357 = (frost$core$Int64) {2u};
_358 = _356.value;
_359 = _357.value;
_360 = _358 + _359;
_361 = (frost$core$Int64) {_360};
_362 = _361.value;
_363 = _353[_362];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:200:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_366 = _363.value;
_367 = ((int32_t) _366);
_368 = _367 & 255u;
_369 = (frost$core$Int32) {_368};
_371 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:200:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_374 = _369.value;
_375 = _371.value;
_376 = _374 & _375;
_377 = (frost$core$Int32) {_376};
_379 = _349.value;
_380 = _377.value;
_381 = _379 + _380;
_382 = (frost$core$Int32) {_381};
_383 = &param0->str;
_384 = *_383;
_385 = &_384->data;
_386 = *_385;
_387 = &param0->index;
_388 = *_387;
_389 = frost$core$Int64$init$frost$core$Int(_388);
_390 = (frost$core$Int64) {3u};
_391 = _389.value;
_392 = _390.value;
_393 = _391 + _392;
_394 = (frost$core$Int64) {_393};
_395 = _394.value;
_396 = _386[_395];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:201:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_399 = _396.value;
_400 = ((int32_t) _399);
_401 = _400 & 255u;
_402 = (frost$core$Int32) {_401};
_404 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:201:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_407 = _402.value;
_408 = _404.value;
_409 = _407 & _408;
_410 = (frost$core$Int32) {_409};
_412 = _382.value;
_413 = _410.value;
_414 = _412 + _413;
_415 = (frost$core$Int32) {_414};
*(&local1) = _415;
goto block28;
block29:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:204
_420 = (frost$core$Int32) {0u};
*(&local1) = _420;
goto block28;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:206
_424 = &param0->index;
_425 = *_424;
_426 = (frost$core$Int) {4u};
_427 = _425.value;
_428 = _426.value;
_429 = _427 + _428;
_430 = (frost$core$Int) {_429};
_431 = &param0->index;
*_431 = _430;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:207
_434 = *(&local1);
_435 = frost$core$Char32$init$frost$core$Int32(_434);
return _435;

}
void frost$core$String$UTF32Iterator$cleanup(frost$core$String$UTF32Iterator* param0) {

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:153
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->str;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

