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
frost$core$Int32 _111;
int32_t _114;
int32_t _115;
int32_t _116;
frost$core$Int32 _117;
frost$core$String** _119;
frost$core$String* _120;
frost$core$Char8** _121;
frost$core$Char8* _122;
frost$core$Int* _123;
frost$core$Int _124;
frost$core$Int64 _125;
frost$core$Int64 _126;
int64_t _127;
int64_t _128;
int64_t _129;
frost$core$Int64 _130;
int64_t _131;
frost$core$Char8 _132;
uint8_t _135;
int32_t _136;
int32_t _137;
frost$core$Int32 _138;
frost$core$Int32 _140;
int32_t _143;
int32_t _144;
int32_t _145;
frost$core$Int32 _146;
int32_t _148;
int32_t _149;
int32_t _150;
frost$core$Int32 _151;
frost$core$Int32 _156;
frost$core$Int* _160;
frost$core$Int _161;
frost$core$Int _162;
int64_t _163;
int64_t _164;
int64_t _165;
frost$core$Int _166;
frost$core$Int* _167;
frost$core$Int32 _170;
frost$core$Char32 _171;
frost$core$Char8 _174;
uint8_t _175;
int64_t _176;
int64_t _177;
bool _178;
frost$core$Bit _179;
bool _180;
frost$core$Int* _183;
frost$core$Int _184;
frost$core$Int _185;
int64_t _186;
int64_t _187;
int64_t _188;
frost$core$Int _189;
frost$core$String** _190;
frost$core$String* _191;
frost$core$Int* _192;
frost$core$Int _193;
int64_t _194;
int64_t _195;
bool _196;
frost$core$Bit _197;
bool _198;
frost$core$Int32 _201;
frost$core$Int32 _202;
int32_t _205;
int32_t _206;
int32_t _207;
frost$core$Int32 _208;
frost$core$Int32 _210;
int32_t _213;
int32_t _214;
int32_t _215;
frost$core$Int32 _216;
frost$core$String** _218;
frost$core$String* _219;
frost$core$Char8** _220;
frost$core$Char8* _221;
frost$core$Int* _222;
frost$core$Int _223;
frost$core$Int64 _224;
frost$core$Int64 _225;
int64_t _226;
int64_t _227;
int64_t _228;
frost$core$Int64 _229;
int64_t _230;
frost$core$Char8 _231;
uint8_t _234;
int32_t _235;
int32_t _236;
frost$core$Int32 _237;
frost$core$Int32 _239;
int32_t _242;
int32_t _243;
int32_t _244;
frost$core$Int32 _245;
frost$core$Int32 _247;
int32_t _250;
int32_t _251;
int32_t _252;
frost$core$Int32 _253;
int32_t _255;
int32_t _256;
int32_t _257;
frost$core$Int32 _258;
frost$core$String** _259;
frost$core$String* _260;
frost$core$Char8** _261;
frost$core$Char8* _262;
frost$core$Int* _263;
frost$core$Int _264;
frost$core$Int64 _265;
frost$core$Int64 _266;
int64_t _267;
int64_t _268;
int64_t _269;
frost$core$Int64 _270;
int64_t _271;
frost$core$Char8 _272;
uint8_t _275;
int32_t _276;
int32_t _277;
frost$core$Int32 _278;
frost$core$Int32 _280;
int32_t _283;
int32_t _284;
int32_t _285;
frost$core$Int32 _286;
int32_t _288;
int32_t _289;
int32_t _290;
frost$core$Int32 _291;
frost$core$Int32 _296;
frost$core$Int* _300;
frost$core$Int _301;
frost$core$Int _302;
int64_t _303;
int64_t _304;
int64_t _305;
frost$core$Int _306;
frost$core$Int* _307;
frost$core$Int32 _310;
frost$core$Char32 _311;
frost$core$Int* _314;
frost$core$Int _315;
frost$core$Int _316;
int64_t _317;
int64_t _318;
int64_t _319;
frost$core$Int _320;
frost$core$String** _321;
frost$core$String* _322;
frost$core$Int* _323;
frost$core$Int _324;
int64_t _325;
int64_t _326;
bool _327;
frost$core$Bit _328;
bool _329;
frost$core$Int32 _332;
frost$core$Int32 _333;
int32_t _336;
int32_t _337;
int32_t _338;
frost$core$Int32 _339;
frost$core$Int32 _341;
int32_t _344;
int32_t _345;
int32_t _346;
frost$core$Int32 _347;
frost$core$String** _349;
frost$core$String* _350;
frost$core$Char8** _351;
frost$core$Char8* _352;
frost$core$Int* _353;
frost$core$Int _354;
frost$core$Int64 _355;
frost$core$Int64 _356;
int64_t _357;
int64_t _358;
int64_t _359;
frost$core$Int64 _360;
int64_t _361;
frost$core$Char8 _362;
uint8_t _365;
int32_t _366;
int32_t _367;
frost$core$Int32 _368;
frost$core$Int32 _370;
int32_t _373;
int32_t _374;
int32_t _375;
frost$core$Int32 _376;
frost$core$Int32 _378;
int32_t _381;
int32_t _382;
int32_t _383;
frost$core$Int32 _384;
int32_t _386;
int32_t _387;
int32_t _388;
frost$core$Int32 _389;
frost$core$String** _390;
frost$core$String* _391;
frost$core$Char8** _392;
frost$core$Char8* _393;
frost$core$Int* _394;
frost$core$Int _395;
frost$core$Int64 _396;
frost$core$Int64 _397;
int64_t _398;
int64_t _399;
int64_t _400;
frost$core$Int64 _401;
int64_t _402;
frost$core$Char8 _403;
uint8_t _406;
int32_t _407;
int32_t _408;
frost$core$Int32 _409;
frost$core$Int32 _411;
int32_t _414;
int32_t _415;
int32_t _416;
frost$core$Int32 _417;
frost$core$Int32 _419;
int32_t _422;
int32_t _423;
int32_t _424;
frost$core$Int32 _425;
int32_t _427;
int32_t _428;
int32_t _429;
frost$core$Int32 _430;
frost$core$String** _431;
frost$core$String* _432;
frost$core$Char8** _433;
frost$core$Char8* _434;
frost$core$Int* _435;
frost$core$Int _436;
frost$core$Int64 _437;
frost$core$Int64 _438;
int64_t _439;
int64_t _440;
int64_t _441;
frost$core$Int64 _442;
int64_t _443;
frost$core$Char8 _444;
uint8_t _447;
int32_t _448;
int32_t _449;
frost$core$Int32 _450;
frost$core$Int32 _452;
int32_t _455;
int32_t _456;
int32_t _457;
frost$core$Int32 _458;
int32_t _460;
int32_t _461;
int32_t _462;
frost$core$Int32 _463;
frost$core$Int32 _468;
frost$core$Int* _472;
frost$core$Int _473;
frost$core$Int _474;
int64_t _475;
int64_t _476;
int64_t _477;
frost$core$Int _478;
frost$core$Int* _479;
frost$core$Int32 _482;
frost$core$Char32 _483;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp4 = _0->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4 = $tmp4->next;
}
_1 = $tmp4->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
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
_103 = (frost$core$Int32) {31u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:178:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_106 = _102.value;
_107 = _103.value;
_108 = _106 & _107;
_109 = (frost$core$Int32) {_108};
_111 = (frost$core$Int32) {6u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:178:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_114 = _109.value;
_115 = _111.value;
_116 = _114 << _115;
_117 = (frost$core$Int32) {_116};
_119 = &param0->str;
_120 = *_119;
_121 = &_120->data;
_122 = *_121;
_123 = &param0->index;
_124 = *_123;
_125 = frost$core$Int64$init$frost$core$Int(_124);
_126 = (frost$core$Int64) {1u};
_127 = _125.value;
_128 = _126.value;
_129 = _127 + _128;
_130 = (frost$core$Int64) {_129};
_131 = _130.value;
_132 = _122[_131];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:178:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_135 = _132.value;
_136 = ((int32_t) _135);
_137 = _136 & 255u;
_138 = (frost$core$Int32) {_137};
_140 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:178:86
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_143 = _138.value;
_144 = _140.value;
_145 = _143 & _144;
_146 = (frost$core$Int32) {_145};
_148 = _117.value;
_149 = _146.value;
_150 = _148 + _149;
_151 = (frost$core$Int32) {_150};
*(&local1) = _151;
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:182
_156 = (frost$core$Int32) {0u};
*(&local1) = _156;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:184
_160 = &param0->index;
_161 = *_160;
_162 = (frost$core$Int) {2u};
_163 = _161.value;
_164 = _162.value;
_165 = _163 + _164;
_166 = (frost$core$Int) {_165};
_167 = &param0->index;
*_167 = _166;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:185
_170 = *(&local1);
_171 = frost$core$Char32$init$frost$core$Int32(_170);
return _171;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:187
_174 = *(&local0);
_175 = _174.value;
_176 = ((int64_t) _175);
_177 = _176 & 255u;
_178 = _177 < 224u;
_179 = (frost$core$Bit) {_178};
_180 = _179.value;
if (_180) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:188
_183 = &param0->index;
_184 = *_183;
_185 = (frost$core$Int) {2u};
_186 = _184.value;
_187 = _185.value;
_188 = _186 + _187;
_189 = (frost$core$Int) {_188};
_190 = &param0->str;
_191 = *_190;
_192 = &_191->_length;
_193 = *_192;
_194 = _189.value;
_195 = _193.value;
_196 = _194 < _195;
_197 = (frost$core$Bit) {_196};
_198 = _197.value;
if (_198) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:189
_201 = *(&local1);
_202 = (frost$core$Int32) {15u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:189:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_205 = _201.value;
_206 = _202.value;
_207 = _205 & _206;
_208 = (frost$core$Int32) {_207};
_210 = (frost$core$Int32) {12u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:189:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_213 = _208.value;
_214 = _210.value;
_215 = _213 << _214;
_216 = (frost$core$Int32) {_215};
_218 = &param0->str;
_219 = *_218;
_220 = &_219->data;
_221 = *_220;
_222 = &param0->index;
_223 = *_222;
_224 = frost$core$Int64$init$frost$core$Int(_223);
_225 = (frost$core$Int64) {1u};
_226 = _224.value;
_227 = _225.value;
_228 = _226 + _227;
_229 = (frost$core$Int64) {_228};
_230 = _229.value;
_231 = _221[_230];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:189:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_234 = _231.value;
_235 = ((int32_t) _234);
_236 = _235 & 255u;
_237 = (frost$core$Int32) {_236};
_239 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:189:87
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_242 = _237.value;
_243 = _239.value;
_244 = _242 & _243;
_245 = (frost$core$Int32) {_244};
_247 = (frost$core$Int32) {6u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:190:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_250 = _245.value;
_251 = _247.value;
_252 = _250 << _251;
_253 = (frost$core$Int32) {_252};
_255 = _216.value;
_256 = _253.value;
_257 = _255 + _256;
_258 = (frost$core$Int32) {_257};
_259 = &param0->str;
_260 = *_259;
_261 = &_260->data;
_262 = *_261;
_263 = &param0->index;
_264 = *_263;
_265 = frost$core$Int64$init$frost$core$Int(_264);
_266 = (frost$core$Int64) {2u};
_267 = _265.value;
_268 = _266.value;
_269 = _267 + _268;
_270 = (frost$core$Int64) {_269};
_271 = _270.value;
_272 = _262[_271];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:190:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_275 = _272.value;
_276 = ((int32_t) _275);
_277 = _276 & 255u;
_278 = (frost$core$Int32) {_277};
_280 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:190:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_283 = _278.value;
_284 = _280.value;
_285 = _283 & _284;
_286 = (frost$core$Int32) {_285};
_288 = _258.value;
_289 = _286.value;
_290 = _288 + _289;
_291 = (frost$core$Int32) {_290};
*(&local1) = _291;
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:193
_296 = (frost$core$Int32) {0u};
*(&local1) = _296;
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:195
_300 = &param0->index;
_301 = *_300;
_302 = (frost$core$Int) {3u};
_303 = _301.value;
_304 = _302.value;
_305 = _303 + _304;
_306 = (frost$core$Int) {_305};
_307 = &param0->index;
*_307 = _306;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:196
_310 = *(&local1);
_311 = frost$core$Char32$init$frost$core$Int32(_310);
return _311;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:198
_314 = &param0->index;
_315 = *_314;
_316 = (frost$core$Int) {3u};
_317 = _315.value;
_318 = _316.value;
_319 = _317 + _318;
_320 = (frost$core$Int) {_319};
_321 = &param0->str;
_322 = *_321;
_323 = &_322->_length;
_324 = *_323;
_325 = _320.value;
_326 = _324.value;
_327 = _325 < _326;
_328 = (frost$core$Bit) {_327};
_329 = _328.value;
if (_329) goto block30; else goto block32;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:199
_332 = *(&local1);
_333 = (frost$core$Int32) {7u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:199:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_336 = _332.value;
_337 = _333.value;
_338 = _336 & _337;
_339 = (frost$core$Int32) {_338};
_341 = (frost$core$Int32) {18u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:199:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_344 = _339.value;
_345 = _341.value;
_346 = _344 << _345;
_347 = (frost$core$Int32) {_346};
_349 = &param0->str;
_350 = *_349;
_351 = &_350->data;
_352 = *_351;
_353 = &param0->index;
_354 = *_353;
_355 = frost$core$Int64$init$frost$core$Int(_354);
_356 = (frost$core$Int64) {1u};
_357 = _355.value;
_358 = _356.value;
_359 = _357 + _358;
_360 = (frost$core$Int64) {_359};
_361 = _360.value;
_362 = _352[_361];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:199:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_365 = _362.value;
_366 = ((int32_t) _365);
_367 = _366 & 255u;
_368 = (frost$core$Int32) {_367};
_370 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:199:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_373 = _368.value;
_374 = _370.value;
_375 = _373 & _374;
_376 = (frost$core$Int32) {_375};
_378 = (frost$core$Int32) {12u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:200:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_381 = _376.value;
_382 = _378.value;
_383 = _381 << _382;
_384 = (frost$core$Int32) {_383};
_386 = _347.value;
_387 = _384.value;
_388 = _386 + _387;
_389 = (frost$core$Int32) {_388};
_390 = &param0->str;
_391 = *_390;
_392 = &_391->data;
_393 = *_392;
_394 = &param0->index;
_395 = *_394;
_396 = frost$core$Int64$init$frost$core$Int(_395);
_397 = (frost$core$Int64) {2u};
_398 = _396.value;
_399 = _397.value;
_400 = _398 + _399;
_401 = (frost$core$Int64) {_400};
_402 = _401.value;
_403 = _393[_402];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:200:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_406 = _403.value;
_407 = ((int32_t) _406);
_408 = _407 & 255u;
_409 = (frost$core$Int32) {_408};
_411 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:200:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_414 = _409.value;
_415 = _411.value;
_416 = _414 & _415;
_417 = (frost$core$Int32) {_416};
_419 = (frost$core$Int32) {6u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:200:85
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_422 = _417.value;
_423 = _419.value;
_424 = _422 << _423;
_425 = (frost$core$Int32) {_424};
_427 = _389.value;
_428 = _425.value;
_429 = _427 + _428;
_430 = (frost$core$Int32) {_429};
_431 = &param0->str;
_432 = *_431;
_433 = &_432->data;
_434 = *_433;
_435 = &param0->index;
_436 = *_435;
_437 = frost$core$Int64$init$frost$core$Int(_436);
_438 = (frost$core$Int64) {3u};
_439 = _437.value;
_440 = _438.value;
_441 = _439 + _440;
_442 = (frost$core$Int64) {_441};
_443 = _442.value;
_444 = _434[_443];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:201:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_447 = _444.value;
_448 = ((int32_t) _447);
_449 = _448 & 255u;
_450 = (frost$core$Int32) {_449};
_452 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:201:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_455 = _450.value;
_456 = _452.value;
_457 = _455 & _456;
_458 = (frost$core$Int32) {_457};
_460 = _430.value;
_461 = _458.value;
_462 = _460 + _461;
_463 = (frost$core$Int32) {_462};
*(&local1) = _463;
goto block31;
block32:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:204
_468 = (frost$core$Int32) {0u};
*(&local1) = _468;
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:206
_472 = &param0->index;
_473 = *_472;
_474 = (frost$core$Int) {4u};
_475 = _473.value;
_476 = _474.value;
_477 = _475 + _476;
_478 = (frost$core$Int) {_477};
_479 = &param0->index;
*_479 = _478;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:207
_482 = *(&local1);
_483 = frost$core$Char32$init$frost$core$Int32(_482);
return _483;

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

