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
#include "frost/unsafe/Pointer.h"
#include "frost/core/Int64.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* frost$core$String$UTF32Iterator$next$R$frost$core$Char32$shim(frost$core$String$UTF32Iterator* p0) {
    frost$core$Char32 result = frost$core$String$UTF32Iterator$next$R$frost$core$Char32(p0);

    frost$core$Char32$wrapper* $tmp2;
    $tmp2 = (frost$core$Char32$wrapper*) frostObjectAlloc(sizeof(frost$core$Char32$wrapper), (frost$core$Class*) &frost$core$Char32$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$core$String$UTF32Iterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF32Iterator$next$R$frost$core$Char32$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$core$String$UTF32Iterator$class_type frost$core$String$UTF32Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$UTF32Iterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$UTF32Iterator$cleanup, frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF32Iterator$next$R$frost$core$Char32$shim} };

typedef frost$core$Bit (*$fn3)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -2661654210963896095, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 88, 2168974927089519619, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };

void frost$core$String$UTF32Iterator$init$frost$core$String(void* rawSelf, frost$core$String* param1) {
frost$core$String$UTF32Iterator* param0 = (frost$core$String$UTF32Iterator*) rawSelf;

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
frost$core$Bit frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$core$String$UTF32Iterator* param0 = (frost$core$String$UTF32Iterator*) rawSelf;

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
frost$core$Char32 frost$core$String$UTF32Iterator$next$R$frost$core$Char32(void* rawSelf) {
frost$core$String$UTF32Iterator* param0 = (frost$core$String$UTF32Iterator*) rawSelf;

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
frost$unsafe$Pointer* _33;
frost$unsafe$Pointer _34;
int64_t _35;
frost$core$Int* _36;
frost$core$Int _37;
frost$core$Int64 _38;
int64_t _39;
frost$core$Char8 _40;
frost$core$Char8 _43;
uint8_t _46;
int32_t _47;
int32_t _48;
frost$core$Int32 _49;
frost$core$Char8 _53;
uint8_t _54;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _59;
frost$core$Int* _62;
frost$core$Int _63;
frost$core$Int _64;
int64_t _65;
int64_t _66;
int64_t _67;
frost$core$Int _68;
frost$core$Int* _69;
frost$core$Int32 _72;
frost$core$Char32 _73;
frost$core$Char8 _76;
uint8_t _77;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _82;
frost$core$Int* _85;
frost$core$Int _86;
frost$core$Int _87;
int64_t _88;
int64_t _89;
int64_t _90;
frost$core$Int _91;
frost$core$String** _92;
frost$core$String* _93;
frost$core$Int* _94;
frost$core$Int _95;
int64_t _96;
int64_t _97;
bool _98;
frost$core$Bit _99;
bool _100;
frost$core$Int32 _103;
frost$core$Int32 _104;
int32_t _107;
int32_t _108;
int32_t _109;
frost$core$Int32 _110;
frost$core$Int32 _112;
int32_t _115;
int32_t _116;
int32_t _117;
frost$core$Int32 _118;
frost$core$String** _120;
frost$core$String* _121;
frost$unsafe$Pointer* _122;
frost$unsafe$Pointer _123;
int64_t _124;
frost$core$Int* _125;
frost$core$Int _126;
frost$core$Int64 _127;
frost$core$Int64 _128;
int64_t _129;
int64_t _130;
int64_t _131;
frost$core$Int64 _132;
int64_t _133;
frost$core$Char8 _134;
uint8_t _137;
int32_t _138;
int32_t _139;
frost$core$Int32 _140;
frost$core$Int32 _142;
int32_t _145;
int32_t _146;
int32_t _147;
frost$core$Int32 _148;
int32_t _150;
int32_t _151;
int32_t _152;
frost$core$Int32 _153;
frost$core$Int32 _158;
frost$core$Int* _162;
frost$core$Int _163;
frost$core$Int _164;
int64_t _165;
int64_t _166;
int64_t _167;
frost$core$Int _168;
frost$core$Int* _169;
frost$core$Int32 _172;
frost$core$Char32 _173;
frost$core$Char8 _176;
uint8_t _177;
int64_t _178;
int64_t _179;
bool _180;
frost$core$Bit _181;
bool _182;
frost$core$Int* _185;
frost$core$Int _186;
frost$core$Int _187;
int64_t _188;
int64_t _189;
int64_t _190;
frost$core$Int _191;
frost$core$String** _192;
frost$core$String* _193;
frost$core$Int* _194;
frost$core$Int _195;
int64_t _196;
int64_t _197;
bool _198;
frost$core$Bit _199;
bool _200;
frost$core$Int32 _203;
frost$core$Int32 _204;
int32_t _207;
int32_t _208;
int32_t _209;
frost$core$Int32 _210;
frost$core$Int32 _212;
int32_t _215;
int32_t _216;
int32_t _217;
frost$core$Int32 _218;
frost$core$String** _220;
frost$core$String* _221;
frost$unsafe$Pointer* _222;
frost$unsafe$Pointer _223;
int64_t _224;
frost$core$Int* _225;
frost$core$Int _226;
frost$core$Int64 _227;
frost$core$Int64 _228;
int64_t _229;
int64_t _230;
int64_t _231;
frost$core$Int64 _232;
int64_t _233;
frost$core$Char8 _234;
uint8_t _237;
int32_t _238;
int32_t _239;
frost$core$Int32 _240;
frost$core$Int32 _242;
int32_t _245;
int32_t _246;
int32_t _247;
frost$core$Int32 _248;
frost$core$Int32 _250;
int32_t _253;
int32_t _254;
int32_t _255;
frost$core$Int32 _256;
int32_t _258;
int32_t _259;
int32_t _260;
frost$core$Int32 _261;
frost$core$String** _262;
frost$core$String* _263;
frost$unsafe$Pointer* _264;
frost$unsafe$Pointer _265;
int64_t _266;
frost$core$Int* _267;
frost$core$Int _268;
frost$core$Int64 _269;
frost$core$Int64 _270;
int64_t _271;
int64_t _272;
int64_t _273;
frost$core$Int64 _274;
int64_t _275;
frost$core$Char8 _276;
uint8_t _279;
int32_t _280;
int32_t _281;
frost$core$Int32 _282;
frost$core$Int32 _284;
int32_t _287;
int32_t _288;
int32_t _289;
frost$core$Int32 _290;
int32_t _292;
int32_t _293;
int32_t _294;
frost$core$Int32 _295;
frost$core$Int32 _300;
frost$core$Int* _304;
frost$core$Int _305;
frost$core$Int _306;
int64_t _307;
int64_t _308;
int64_t _309;
frost$core$Int _310;
frost$core$Int* _311;
frost$core$Int32 _314;
frost$core$Char32 _315;
frost$core$Int* _318;
frost$core$Int _319;
frost$core$Int _320;
int64_t _321;
int64_t _322;
int64_t _323;
frost$core$Int _324;
frost$core$String** _325;
frost$core$String* _326;
frost$core$Int* _327;
frost$core$Int _328;
int64_t _329;
int64_t _330;
bool _331;
frost$core$Bit _332;
bool _333;
frost$core$Int32 _336;
frost$core$Int32 _337;
int32_t _340;
int32_t _341;
int32_t _342;
frost$core$Int32 _343;
frost$core$Int32 _345;
int32_t _348;
int32_t _349;
int32_t _350;
frost$core$Int32 _351;
frost$core$String** _353;
frost$core$String* _354;
frost$unsafe$Pointer* _355;
frost$unsafe$Pointer _356;
int64_t _357;
frost$core$Int* _358;
frost$core$Int _359;
frost$core$Int64 _360;
frost$core$Int64 _361;
int64_t _362;
int64_t _363;
int64_t _364;
frost$core$Int64 _365;
int64_t _366;
frost$core$Char8 _367;
uint8_t _370;
int32_t _371;
int32_t _372;
frost$core$Int32 _373;
frost$core$Int32 _375;
int32_t _378;
int32_t _379;
int32_t _380;
frost$core$Int32 _381;
frost$core$Int32 _383;
int32_t _386;
int32_t _387;
int32_t _388;
frost$core$Int32 _389;
int32_t _391;
int32_t _392;
int32_t _393;
frost$core$Int32 _394;
frost$core$String** _395;
frost$core$String* _396;
frost$unsafe$Pointer* _397;
frost$unsafe$Pointer _398;
int64_t _399;
frost$core$Int* _400;
frost$core$Int _401;
frost$core$Int64 _402;
frost$core$Int64 _403;
int64_t _404;
int64_t _405;
int64_t _406;
frost$core$Int64 _407;
int64_t _408;
frost$core$Char8 _409;
uint8_t _412;
int32_t _413;
int32_t _414;
frost$core$Int32 _415;
frost$core$Int32 _417;
int32_t _420;
int32_t _421;
int32_t _422;
frost$core$Int32 _423;
frost$core$Int32 _425;
int32_t _428;
int32_t _429;
int32_t _430;
frost$core$Int32 _431;
int32_t _433;
int32_t _434;
int32_t _435;
frost$core$Int32 _436;
frost$core$String** _437;
frost$core$String* _438;
frost$unsafe$Pointer* _439;
frost$unsafe$Pointer _440;
int64_t _441;
frost$core$Int* _442;
frost$core$Int _443;
frost$core$Int64 _444;
frost$core$Int64 _445;
int64_t _446;
int64_t _447;
int64_t _448;
frost$core$Int64 _449;
int64_t _450;
frost$core$Char8 _451;
uint8_t _454;
int32_t _455;
int32_t _456;
frost$core$Int32 _457;
frost$core$Int32 _459;
int32_t _462;
int32_t _463;
int32_t _464;
frost$core$Int32 _465;
int32_t _467;
int32_t _468;
int32_t _469;
frost$core$Int32 _470;
frost$core$Int32 _475;
frost$core$Int* _479;
frost$core$Int _480;
frost$core$Int _481;
int64_t _482;
int64_t _483;
int64_t _484;
frost$core$Int _485;
frost$core$Int* _486;
frost$core$Int32 _489;
frost$core$Char32 _490;
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
_35 = _34.value;
_36 = &param0->index;
_37 = *_36;
_38 = frost$core$Int64$init$frost$core$Int(_37);
_39 = _38.value;
_40 = ((frost$core$Char8*)_35)[_39];
*(&local0) = _40;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:171
_43 = *(&local0);
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:171:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_46 = _43.value;
_47 = ((int32_t) _46);
_48 = _47 & 255u;
_49 = (frost$core$Int32) {_48};
*(&local1) = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:172
_53 = *(&local0);
_54 = _53.value;
_55 = ((int64_t) _54);
_56 = _55 & 255u;
_57 = _56 < 128u;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:173
_62 = &param0->index;
_63 = *_62;
_64 = (frost$core$Int) {1u};
_65 = _63.value;
_66 = _64.value;
_67 = _65 + _66;
_68 = (frost$core$Int) {_67};
_69 = &param0->index;
*_69 = _68;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:174
_72 = *(&local1);
_73 = frost$core$Char32$init$frost$core$Int32(_72);
return _73;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:176
_76 = *(&local0);
_77 = _76.value;
_78 = ((int64_t) _77);
_79 = _78 & 255u;
_80 = _79 < 192u;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:177
_85 = &param0->index;
_86 = *_85;
_87 = (frost$core$Int) {1u};
_88 = _86.value;
_89 = _87.value;
_90 = _88 + _89;
_91 = (frost$core$Int) {_90};
_92 = &param0->str;
_93 = *_92;
_94 = &_93->_length;
_95 = *_94;
_96 = _91.value;
_97 = _95.value;
_98 = _96 < _97;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:178
_103 = *(&local1);
_104 = (frost$core$Int32) {31u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:178:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_107 = _103.value;
_108 = _104.value;
_109 = _107 & _108;
_110 = (frost$core$Int32) {_109};
_112 = (frost$core$Int32) {6u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:178:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_115 = _110.value;
_116 = _112.value;
_117 = _115 << _116;
_118 = (frost$core$Int32) {_117};
_120 = &param0->str;
_121 = *_120;
_122 = &_121->data;
_123 = *_122;
_124 = _123.value;
_125 = &param0->index;
_126 = *_125;
_127 = frost$core$Int64$init$frost$core$Int(_126);
_128 = (frost$core$Int64) {1u};
_129 = _127.value;
_130 = _128.value;
_131 = _129 + _130;
_132 = (frost$core$Int64) {_131};
_133 = _132.value;
_134 = ((frost$core$Char8*)_124)[_133];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:178:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_137 = _134.value;
_138 = ((int32_t) _137);
_139 = _138 & 255u;
_140 = (frost$core$Int32) {_139};
_142 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:178:86
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_145 = _140.value;
_146 = _142.value;
_147 = _145 & _146;
_148 = (frost$core$Int32) {_147};
_150 = _118.value;
_151 = _148.value;
_152 = _150 + _151;
_153 = (frost$core$Int32) {_152};
*(&local1) = _153;
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:182
_158 = (frost$core$Int32) {0u};
*(&local1) = _158;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:184
_162 = &param0->index;
_163 = *_162;
_164 = (frost$core$Int) {2u};
_165 = _163.value;
_166 = _164.value;
_167 = _165 + _166;
_168 = (frost$core$Int) {_167};
_169 = &param0->index;
*_169 = _168;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:185
_172 = *(&local1);
_173 = frost$core$Char32$init$frost$core$Int32(_172);
return _173;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:187
_176 = *(&local0);
_177 = _176.value;
_178 = ((int64_t) _177);
_179 = _178 & 255u;
_180 = _179 < 224u;
_181 = (frost$core$Bit) {_180};
_182 = _181.value;
if (_182) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:188
_185 = &param0->index;
_186 = *_185;
_187 = (frost$core$Int) {2u};
_188 = _186.value;
_189 = _187.value;
_190 = _188 + _189;
_191 = (frost$core$Int) {_190};
_192 = &param0->str;
_193 = *_192;
_194 = &_193->_length;
_195 = *_194;
_196 = _191.value;
_197 = _195.value;
_198 = _196 < _197;
_199 = (frost$core$Bit) {_198};
_200 = _199.value;
if (_200) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:189
_203 = *(&local1);
_204 = (frost$core$Int32) {15u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:189:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_207 = _203.value;
_208 = _204.value;
_209 = _207 & _208;
_210 = (frost$core$Int32) {_209};
_212 = (frost$core$Int32) {12u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:189:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_215 = _210.value;
_216 = _212.value;
_217 = _215 << _216;
_218 = (frost$core$Int32) {_217};
_220 = &param0->str;
_221 = *_220;
_222 = &_221->data;
_223 = *_222;
_224 = _223.value;
_225 = &param0->index;
_226 = *_225;
_227 = frost$core$Int64$init$frost$core$Int(_226);
_228 = (frost$core$Int64) {1u};
_229 = _227.value;
_230 = _228.value;
_231 = _229 + _230;
_232 = (frost$core$Int64) {_231};
_233 = _232.value;
_234 = ((frost$core$Char8*)_224)[_233];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:189:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_237 = _234.value;
_238 = ((int32_t) _237);
_239 = _238 & 255u;
_240 = (frost$core$Int32) {_239};
_242 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:189:87
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_245 = _240.value;
_246 = _242.value;
_247 = _245 & _246;
_248 = (frost$core$Int32) {_247};
_250 = (frost$core$Int32) {6u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:190:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_253 = _248.value;
_254 = _250.value;
_255 = _253 << _254;
_256 = (frost$core$Int32) {_255};
_258 = _218.value;
_259 = _256.value;
_260 = _258 + _259;
_261 = (frost$core$Int32) {_260};
_262 = &param0->str;
_263 = *_262;
_264 = &_263->data;
_265 = *_264;
_266 = _265.value;
_267 = &param0->index;
_268 = *_267;
_269 = frost$core$Int64$init$frost$core$Int(_268);
_270 = (frost$core$Int64) {2u};
_271 = _269.value;
_272 = _270.value;
_273 = _271 + _272;
_274 = (frost$core$Int64) {_273};
_275 = _274.value;
_276 = ((frost$core$Char8*)_266)[_275];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:190:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_279 = _276.value;
_280 = ((int32_t) _279);
_281 = _280 & 255u;
_282 = (frost$core$Int32) {_281};
_284 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:190:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_287 = _282.value;
_288 = _284.value;
_289 = _287 & _288;
_290 = (frost$core$Int32) {_289};
_292 = _261.value;
_293 = _290.value;
_294 = _292 + _293;
_295 = (frost$core$Int32) {_294};
*(&local1) = _295;
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:193
_300 = (frost$core$Int32) {0u};
*(&local1) = _300;
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:195
_304 = &param0->index;
_305 = *_304;
_306 = (frost$core$Int) {3u};
_307 = _305.value;
_308 = _306.value;
_309 = _307 + _308;
_310 = (frost$core$Int) {_309};
_311 = &param0->index;
*_311 = _310;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:196
_314 = *(&local1);
_315 = frost$core$Char32$init$frost$core$Int32(_314);
return _315;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:198
_318 = &param0->index;
_319 = *_318;
_320 = (frost$core$Int) {3u};
_321 = _319.value;
_322 = _320.value;
_323 = _321 + _322;
_324 = (frost$core$Int) {_323};
_325 = &param0->str;
_326 = *_325;
_327 = &_326->_length;
_328 = *_327;
_329 = _324.value;
_330 = _328.value;
_331 = _329 < _330;
_332 = (frost$core$Bit) {_331};
_333 = _332.value;
if (_333) goto block30; else goto block32;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:199
_336 = *(&local1);
_337 = (frost$core$Int32) {7u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:199:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_340 = _336.value;
_341 = _337.value;
_342 = _340 & _341;
_343 = (frost$core$Int32) {_342};
_345 = (frost$core$Int32) {18u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:199:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_348 = _343.value;
_349 = _345.value;
_350 = _348 << _349;
_351 = (frost$core$Int32) {_350};
_353 = &param0->str;
_354 = *_353;
_355 = &_354->data;
_356 = *_355;
_357 = _356.value;
_358 = &param0->index;
_359 = *_358;
_360 = frost$core$Int64$init$frost$core$Int(_359);
_361 = (frost$core$Int64) {1u};
_362 = _360.value;
_363 = _361.value;
_364 = _362 + _363;
_365 = (frost$core$Int64) {_364};
_366 = _365.value;
_367 = ((frost$core$Char8*)_357)[_366];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:199:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_370 = _367.value;
_371 = ((int32_t) _370);
_372 = _371 & 255u;
_373 = (frost$core$Int32) {_372};
_375 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:199:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_378 = _373.value;
_379 = _375.value;
_380 = _378 & _379;
_381 = (frost$core$Int32) {_380};
_383 = (frost$core$Int32) {12u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:200:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_386 = _381.value;
_387 = _383.value;
_388 = _386 << _387;
_389 = (frost$core$Int32) {_388};
_391 = _351.value;
_392 = _389.value;
_393 = _391 + _392;
_394 = (frost$core$Int32) {_393};
_395 = &param0->str;
_396 = *_395;
_397 = &_396->data;
_398 = *_397;
_399 = _398.value;
_400 = &param0->index;
_401 = *_400;
_402 = frost$core$Int64$init$frost$core$Int(_401);
_403 = (frost$core$Int64) {2u};
_404 = _402.value;
_405 = _403.value;
_406 = _404 + _405;
_407 = (frost$core$Int64) {_406};
_408 = _407.value;
_409 = ((frost$core$Char8*)_399)[_408];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:200:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_412 = _409.value;
_413 = ((int32_t) _412);
_414 = _413 & 255u;
_415 = (frost$core$Int32) {_414};
_417 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:200:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_420 = _415.value;
_421 = _417.value;
_422 = _420 & _421;
_423 = (frost$core$Int32) {_422};
_425 = (frost$core$Int32) {6u};
// begin inline call to function frost.core.Int32.<<(other:frost.core.Int32):frost.core.Int32 from String.frost:200:85
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
_428 = _423.value;
_429 = _425.value;
_430 = _428 << _429;
_431 = (frost$core$Int32) {_430};
_433 = _394.value;
_434 = _431.value;
_435 = _433 + _434;
_436 = (frost$core$Int32) {_435};
_437 = &param0->str;
_438 = *_437;
_439 = &_438->data;
_440 = *_439;
_441 = _440.value;
_442 = &param0->index;
_443 = *_442;
_444 = frost$core$Int64$init$frost$core$Int(_443);
_445 = (frost$core$Int64) {3u};
_446 = _444.value;
_447 = _445.value;
_448 = _446 + _447;
_449 = (frost$core$Int64) {_448};
_450 = _449.value;
_451 = ((frost$core$Char8*)_441)[_450];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:201:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
_454 = _451.value;
_455 = ((int32_t) _454);
_456 = _455 & 255u;
_457 = (frost$core$Int32) {_456};
_459 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:201:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
_462 = _457.value;
_463 = _459.value;
_464 = _462 & _463;
_465 = (frost$core$Int32) {_464};
_467 = _436.value;
_468 = _465.value;
_469 = _467 + _468;
_470 = (frost$core$Int32) {_469};
*(&local1) = _470;
goto block31;
block32:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:204
_475 = (frost$core$Int32) {0u};
*(&local1) = _475;
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:206
_479 = &param0->index;
_480 = *_479;
_481 = (frost$core$Int) {4u};
_482 = _480.value;
_483 = _481.value;
_484 = _482 + _483;
_485 = (frost$core$Int) {_484};
_486 = &param0->index;
*_486 = _485;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:207
_489 = *(&local1);
_490 = frost$core$Char32$init$frost$core$Int32(_489);
return _490;

}
void frost$core$String$UTF32Iterator$cleanup(void* rawSelf) {
frost$core$String$UTF32Iterator* param0 = (frost$core$String$UTF32Iterator*) rawSelf;

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

