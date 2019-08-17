#include "org/frostlang/regex/RegexLexer.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "org/frostlang/regex/RegexToken.h"
#include "org/frostlang/plex/runtime/RawToken.h"
#include "org/frostlang/regex/RegexToken/Kind.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/frostc/Position.h"


static frost$core$String $s1;
org$frostlang$regex$RegexLexer$class_type org$frostlang$regex$RegexLexer$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$regex$RegexLexer$cleanup, org$frostlang$regex$RegexLexer$start$frost$core$String, org$frostlang$regex$RegexLexer$next$R$org$frostlang$regex$RegexToken} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x4c\x65\x78\x65\x72", 30, -8429808340333666611, NULL };

void org$frostlang$regex$RegexLexer$start$frost$core$String(org$frostlang$regex$RegexLexer* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:21
FROST_ASSERT(80 == sizeof(org$frostlang$plex$runtime$DFA));
org$frostlang$plex$runtime$DFA* $tmp2 = (org$frostlang$plex$runtime$DFA*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$plex$runtime$DFA$class);
frost$core$Int $tmp3 = (frost$core$Int) {20u};
frost$core$Int*** $tmp4 = &param0->transitions;
frost$core$Int** $tmp5 = *$tmp4;
frost$core$Int** $tmp6 = &param0->accepts;
frost$core$Int* $tmp7 = *$tmp6;
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int$GT($tmp2, param1, $tmp3, $tmp5, $tmp7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$plex$runtime$DFA** $tmp8 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$plex$runtime$DFA** $tmp10 = &param0->dfa;
*$tmp10 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return;

}
frost$core$Int* org$frostlang$regex$RegexLexer$alloc$frost$core$Int$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$core$Int$GT(frost$core$Int param0, frost$core$Int param1) {

frost$core$Int* local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp11 = frost$core$Int64$init$frost$core$Int(param0);
int64_t $tmp12 = $tmp11.value;
frost$core$Int* $tmp13 = ((frost$core$Int*) frostAlloc($tmp12 * 8));
*(&local0) = $tmp13;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp14 = (frost$core$Int) {0u};
frost$core$Bit $tmp15 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp16 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp14, param0, $tmp15);
frost$core$Int $tmp17 = $tmp16.min;
*(&local1) = $tmp17;
frost$core$Int $tmp18 = $tmp16.max;
frost$core$Bit $tmp19 = $tmp16.inclusive;
bool $tmp20 = $tmp19.value;
frost$core$Int $tmp21 = (frost$core$Int) {1u};
if ($tmp20) goto block4; else goto block5;
block4:;
int64_t $tmp22 = $tmp17.value;
int64_t $tmp23 = $tmp18.value;
bool $tmp24 = $tmp22 <= $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block1; else goto block2;
block5:;
int64_t $tmp27 = $tmp17.value;
int64_t $tmp28 = $tmp18.value;
bool $tmp29 = $tmp27 < $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp32 = *(&local0);
frost$core$Int $tmp33 = *(&local1);
frost$core$Int64 $tmp34 = frost$core$Int64$init$frost$core$Int($tmp33);
int64_t $tmp35 = $tmp34.value;
$tmp32[$tmp35] = param1;
frost$core$Int $tmp36 = *(&local1);
int64_t $tmp37 = $tmp18.value;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37 - $tmp38;
frost$core$Int $tmp40 = (frost$core$Int) {$tmp39};
if ($tmp20) goto block7; else goto block8;
block7:;
int64_t $tmp41 = $tmp40.value;
int64_t $tmp42 = $tmp21.value;
bool $tmp43 = $tmp41 >= $tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block6; else goto block2;
block8:;
int64_t $tmp46 = $tmp40.value;
int64_t $tmp47 = $tmp21.value;
bool $tmp48 = $tmp46 > $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block6; else goto block2;
block6:;
int64_t $tmp51 = $tmp36.value;
int64_t $tmp52 = $tmp21.value;
int64_t $tmp53 = $tmp51 + $tmp52;
frost$core$Int $tmp54 = (frost$core$Int) {$tmp53};
*(&local1) = $tmp54;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp55 = *(&local0);
return $tmp55;

}
frost$core$Int** org$frostlang$regex$RegexLexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT() {

frost$core$Int** local0;
frost$core$Int* local1;
frost$core$Int local2;
frost$core$Int* local3;
frost$core$Int local4;
frost$core$Int* local5;
frost$core$Int local6;
frost$core$Int* local7;
frost$core$Int local8;
frost$core$Int* local9;
frost$core$Int local10;
frost$core$Int* local11;
frost$core$Int local12;
frost$core$Int* local13;
frost$core$Int local14;
frost$core$Int* local15;
frost$core$Int local16;
frost$core$Int* local17;
frost$core$Int local18;
frost$core$Int* local19;
frost$core$Int local20;
frost$core$Int* local21;
frost$core$Int local22;
frost$core$Int* local23;
frost$core$Int local24;
frost$core$Int* local25;
frost$core$Int local26;
frost$core$Int* local27;
frost$core$Int local28;
frost$core$Int* local29;
frost$core$Int local30;
frost$core$Int* local31;
frost$core$Int local32;
frost$core$Int* local33;
frost$core$Int local34;
frost$core$Int* local35;
frost$core$Int local36;
frost$core$Int* local37;
frost$core$Int local38;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:35
frost$core$Int64 $tmp56 = (frost$core$Int64) {256u};
int64_t $tmp57 = $tmp56.value;
frost$core$Int** $tmp58 = ((frost$core$Int**) frostAlloc($tmp57 * 8));
*(&local0) = $tmp58;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:36
frost$core$Int** $tmp59 = *(&local0);
frost$core$Int64 $tmp60 = (frost$core$Int64) {0u};
frost$core$Int $tmp61 = (frost$core$Int) {20u};
frost$core$Int $tmp62 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:36:27
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp63 = frost$core$Int64$init$frost$core$Int($tmp61);
int64_t $tmp64 = $tmp63.value;
frost$core$Int* $tmp65 = ((frost$core$Int*) frostAlloc($tmp64 * 8));
*(&local1) = $tmp65;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp66 = (frost$core$Int) {0u};
frost$core$Bit $tmp67 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp68 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp66, $tmp61, $tmp67);
frost$core$Int $tmp69 = $tmp68.min;
*(&local2) = $tmp69;
frost$core$Int $tmp70 = $tmp68.max;
frost$core$Bit $tmp71 = $tmp68.inclusive;
bool $tmp72 = $tmp71.value;
frost$core$Int $tmp73 = (frost$core$Int) {1u};
if ($tmp72) goto block5; else goto block6;
block5:;
int64_t $tmp74 = $tmp69.value;
int64_t $tmp75 = $tmp70.value;
bool $tmp76 = $tmp74 <= $tmp75;
frost$core$Bit $tmp77 = (frost$core$Bit) {$tmp76};
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block2; else goto block3;
block6:;
int64_t $tmp79 = $tmp69.value;
int64_t $tmp80 = $tmp70.value;
bool $tmp81 = $tmp79 < $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp84 = *(&local1);
frost$core$Int $tmp85 = *(&local2);
frost$core$Int64 $tmp86 = frost$core$Int64$init$frost$core$Int($tmp85);
int64_t $tmp87 = $tmp86.value;
$tmp84[$tmp87] = $tmp62;
frost$core$Int $tmp88 = *(&local2);
int64_t $tmp89 = $tmp70.value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 - $tmp90;
frost$core$Int $tmp92 = (frost$core$Int) {$tmp91};
if ($tmp72) goto block8; else goto block9;
block8:;
int64_t $tmp93 = $tmp92.value;
int64_t $tmp94 = $tmp73.value;
bool $tmp95 = $tmp93 >= $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block7; else goto block3;
block9:;
int64_t $tmp98 = $tmp92.value;
int64_t $tmp99 = $tmp73.value;
bool $tmp100 = $tmp98 > $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block7; else goto block3;
block7:;
int64_t $tmp103 = $tmp88.value;
int64_t $tmp104 = $tmp73.value;
int64_t $tmp105 = $tmp103 + $tmp104;
frost$core$Int $tmp106 = (frost$core$Int) {$tmp105};
*(&local2) = $tmp106;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp107 = *(&local1);
int64_t $tmp108 = $tmp60.value;
$tmp59[$tmp108] = $tmp107;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:37
frost$core$Int** $tmp109 = *(&local0);
frost$core$Int64 $tmp110 = (frost$core$Int64) {0u};
int64_t $tmp111 = $tmp110.value;
frost$core$Int* $tmp112 = $tmp109[$tmp111];
frost$core$Int64 $tmp113 = (frost$core$Int64) {1u};
frost$core$Int $tmp114 = (frost$core$Int) {2u};
int64_t $tmp115 = $tmp113.value;
$tmp112[$tmp115] = $tmp114;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:38
frost$core$Int** $tmp116 = *(&local0);
frost$core$Int64 $tmp117 = (frost$core$Int64) {0u};
int64_t $tmp118 = $tmp117.value;
frost$core$Int* $tmp119 = $tmp116[$tmp118];
frost$core$Int64 $tmp120 = (frost$core$Int64) {14u};
frost$core$Int $tmp121 = (frost$core$Int) {2u};
int64_t $tmp122 = $tmp120.value;
$tmp119[$tmp122] = $tmp121;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:39
frost$core$Int** $tmp123 = *(&local0);
frost$core$Int64 $tmp124 = (frost$core$Int64) {1u};
frost$core$Int** $tmp125 = *(&local0);
frost$core$Int64 $tmp126 = (frost$core$Int64) {0u};
int64_t $tmp127 = $tmp126.value;
frost$core$Int* $tmp128 = $tmp125[$tmp127];
int64_t $tmp129 = $tmp124.value;
$tmp123[$tmp129] = $tmp128;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:40
frost$core$Int** $tmp130 = *(&local0);
frost$core$Int64 $tmp131 = (frost$core$Int64) {2u};
frost$core$Int** $tmp132 = *(&local0);
frost$core$Int64 $tmp133 = (frost$core$Int64) {0u};
int64_t $tmp134 = $tmp133.value;
frost$core$Int* $tmp135 = $tmp132[$tmp134];
int64_t $tmp136 = $tmp131.value;
$tmp130[$tmp136] = $tmp135;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:41
frost$core$Int** $tmp137 = *(&local0);
frost$core$Int64 $tmp138 = (frost$core$Int64) {3u};
frost$core$Int** $tmp139 = *(&local0);
frost$core$Int64 $tmp140 = (frost$core$Int64) {0u};
int64_t $tmp141 = $tmp140.value;
frost$core$Int* $tmp142 = $tmp139[$tmp141];
int64_t $tmp143 = $tmp138.value;
$tmp137[$tmp143] = $tmp142;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:42
frost$core$Int** $tmp144 = *(&local0);
frost$core$Int64 $tmp145 = (frost$core$Int64) {4u};
frost$core$Int** $tmp146 = *(&local0);
frost$core$Int64 $tmp147 = (frost$core$Int64) {0u};
int64_t $tmp148 = $tmp147.value;
frost$core$Int* $tmp149 = $tmp146[$tmp148];
int64_t $tmp150 = $tmp145.value;
$tmp144[$tmp150] = $tmp149;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:43
frost$core$Int** $tmp151 = *(&local0);
frost$core$Int64 $tmp152 = (frost$core$Int64) {5u};
frost$core$Int** $tmp153 = *(&local0);
frost$core$Int64 $tmp154 = (frost$core$Int64) {0u};
int64_t $tmp155 = $tmp154.value;
frost$core$Int* $tmp156 = $tmp153[$tmp155];
int64_t $tmp157 = $tmp152.value;
$tmp151[$tmp157] = $tmp156;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:44
frost$core$Int** $tmp158 = *(&local0);
frost$core$Int64 $tmp159 = (frost$core$Int64) {6u};
frost$core$Int** $tmp160 = *(&local0);
frost$core$Int64 $tmp161 = (frost$core$Int64) {0u};
int64_t $tmp162 = $tmp161.value;
frost$core$Int* $tmp163 = $tmp160[$tmp162];
int64_t $tmp164 = $tmp159.value;
$tmp158[$tmp164] = $tmp163;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:45
frost$core$Int** $tmp165 = *(&local0);
frost$core$Int64 $tmp166 = (frost$core$Int64) {7u};
frost$core$Int** $tmp167 = *(&local0);
frost$core$Int64 $tmp168 = (frost$core$Int64) {0u};
int64_t $tmp169 = $tmp168.value;
frost$core$Int* $tmp170 = $tmp167[$tmp169];
int64_t $tmp171 = $tmp166.value;
$tmp165[$tmp171] = $tmp170;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:46
frost$core$Int** $tmp172 = *(&local0);
frost$core$Int64 $tmp173 = (frost$core$Int64) {8u};
frost$core$Int** $tmp174 = *(&local0);
frost$core$Int64 $tmp175 = (frost$core$Int64) {0u};
int64_t $tmp176 = $tmp175.value;
frost$core$Int* $tmp177 = $tmp174[$tmp176];
int64_t $tmp178 = $tmp173.value;
$tmp172[$tmp178] = $tmp177;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:47
frost$core$Int** $tmp179 = *(&local0);
frost$core$Int64 $tmp180 = (frost$core$Int64) {9u};
frost$core$Int** $tmp181 = *(&local0);
frost$core$Int64 $tmp182 = (frost$core$Int64) {0u};
int64_t $tmp183 = $tmp182.value;
frost$core$Int* $tmp184 = $tmp181[$tmp183];
int64_t $tmp185 = $tmp180.value;
$tmp179[$tmp185] = $tmp184;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:48
frost$core$Int** $tmp186 = *(&local0);
frost$core$Int64 $tmp187 = (frost$core$Int64) {10u};
frost$core$Int $tmp188 = (frost$core$Int) {20u};
frost$core$Int $tmp189 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp190 = frost$core$Int64$init$frost$core$Int($tmp188);
int64_t $tmp191 = $tmp190.value;
frost$core$Int* $tmp192 = ((frost$core$Int*) frostAlloc($tmp191 * 8));
*(&local3) = $tmp192;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp193 = (frost$core$Int) {0u};
frost$core$Bit $tmp194 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp195 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp193, $tmp188, $tmp194);
frost$core$Int $tmp196 = $tmp195.min;
*(&local4) = $tmp196;
frost$core$Int $tmp197 = $tmp195.max;
frost$core$Bit $tmp198 = $tmp195.inclusive;
bool $tmp199 = $tmp198.value;
frost$core$Int $tmp200 = (frost$core$Int) {1u};
if ($tmp199) goto block14; else goto block15;
block14:;
int64_t $tmp201 = $tmp196.value;
int64_t $tmp202 = $tmp197.value;
bool $tmp203 = $tmp201 <= $tmp202;
frost$core$Bit $tmp204 = (frost$core$Bit) {$tmp203};
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block11; else goto block12;
block15:;
int64_t $tmp206 = $tmp196.value;
int64_t $tmp207 = $tmp197.value;
bool $tmp208 = $tmp206 < $tmp207;
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp211 = *(&local3);
frost$core$Int $tmp212 = *(&local4);
frost$core$Int64 $tmp213 = frost$core$Int64$init$frost$core$Int($tmp212);
int64_t $tmp214 = $tmp213.value;
$tmp211[$tmp214] = $tmp189;
frost$core$Int $tmp215 = *(&local4);
int64_t $tmp216 = $tmp197.value;
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216 - $tmp217;
frost$core$Int $tmp219 = (frost$core$Int) {$tmp218};
if ($tmp199) goto block17; else goto block18;
block17:;
int64_t $tmp220 = $tmp219.value;
int64_t $tmp221 = $tmp200.value;
bool $tmp222 = $tmp220 >= $tmp221;
frost$core$Bit $tmp223 = (frost$core$Bit) {$tmp222};
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block16; else goto block12;
block18:;
int64_t $tmp225 = $tmp219.value;
int64_t $tmp226 = $tmp200.value;
bool $tmp227 = $tmp225 > $tmp226;
frost$core$Bit $tmp228 = (frost$core$Bit) {$tmp227};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block16; else goto block12;
block16:;
int64_t $tmp230 = $tmp215.value;
int64_t $tmp231 = $tmp200.value;
int64_t $tmp232 = $tmp230 + $tmp231;
frost$core$Int $tmp233 = (frost$core$Int) {$tmp232};
*(&local4) = $tmp233;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp234 = *(&local3);
int64_t $tmp235 = $tmp187.value;
$tmp186[$tmp235] = $tmp234;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:49
frost$core$Int** $tmp236 = *(&local0);
frost$core$Int64 $tmp237 = (frost$core$Int64) {10u};
int64_t $tmp238 = $tmp237.value;
frost$core$Int* $tmp239 = $tmp236[$tmp238];
frost$core$Int64 $tmp240 = (frost$core$Int64) {1u};
frost$core$Int $tmp241 = (frost$core$Int) {2u};
int64_t $tmp242 = $tmp240.value;
$tmp239[$tmp242] = $tmp241;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:50
frost$core$Int** $tmp243 = *(&local0);
frost$core$Int64 $tmp244 = (frost$core$Int64) {11u};
frost$core$Int** $tmp245 = *(&local0);
frost$core$Int64 $tmp246 = (frost$core$Int64) {0u};
int64_t $tmp247 = $tmp246.value;
frost$core$Int* $tmp248 = $tmp245[$tmp247];
int64_t $tmp249 = $tmp244.value;
$tmp243[$tmp249] = $tmp248;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:51
frost$core$Int** $tmp250 = *(&local0);
frost$core$Int64 $tmp251 = (frost$core$Int64) {12u};
frost$core$Int** $tmp252 = *(&local0);
frost$core$Int64 $tmp253 = (frost$core$Int64) {0u};
int64_t $tmp254 = $tmp253.value;
frost$core$Int* $tmp255 = $tmp252[$tmp254];
int64_t $tmp256 = $tmp251.value;
$tmp250[$tmp256] = $tmp255;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:52
frost$core$Int** $tmp257 = *(&local0);
frost$core$Int64 $tmp258 = (frost$core$Int64) {13u};
frost$core$Int** $tmp259 = *(&local0);
frost$core$Int64 $tmp260 = (frost$core$Int64) {0u};
int64_t $tmp261 = $tmp260.value;
frost$core$Int* $tmp262 = $tmp259[$tmp261];
int64_t $tmp263 = $tmp258.value;
$tmp257[$tmp263] = $tmp262;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:53
frost$core$Int** $tmp264 = *(&local0);
frost$core$Int64 $tmp265 = (frost$core$Int64) {14u};
frost$core$Int** $tmp266 = *(&local0);
frost$core$Int64 $tmp267 = (frost$core$Int64) {0u};
int64_t $tmp268 = $tmp267.value;
frost$core$Int* $tmp269 = $tmp266[$tmp268];
int64_t $tmp270 = $tmp265.value;
$tmp264[$tmp270] = $tmp269;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:54
frost$core$Int** $tmp271 = *(&local0);
frost$core$Int64 $tmp272 = (frost$core$Int64) {15u};
frost$core$Int** $tmp273 = *(&local0);
frost$core$Int64 $tmp274 = (frost$core$Int64) {0u};
int64_t $tmp275 = $tmp274.value;
frost$core$Int* $tmp276 = $tmp273[$tmp275];
int64_t $tmp277 = $tmp272.value;
$tmp271[$tmp277] = $tmp276;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:55
frost$core$Int** $tmp278 = *(&local0);
frost$core$Int64 $tmp279 = (frost$core$Int64) {16u};
frost$core$Int** $tmp280 = *(&local0);
frost$core$Int64 $tmp281 = (frost$core$Int64) {0u};
int64_t $tmp282 = $tmp281.value;
frost$core$Int* $tmp283 = $tmp280[$tmp282];
int64_t $tmp284 = $tmp279.value;
$tmp278[$tmp284] = $tmp283;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:56
frost$core$Int** $tmp285 = *(&local0);
frost$core$Int64 $tmp286 = (frost$core$Int64) {17u};
frost$core$Int** $tmp287 = *(&local0);
frost$core$Int64 $tmp288 = (frost$core$Int64) {0u};
int64_t $tmp289 = $tmp288.value;
frost$core$Int* $tmp290 = $tmp287[$tmp289];
int64_t $tmp291 = $tmp286.value;
$tmp285[$tmp291] = $tmp290;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:57
frost$core$Int** $tmp292 = *(&local0);
frost$core$Int64 $tmp293 = (frost$core$Int64) {18u};
frost$core$Int** $tmp294 = *(&local0);
frost$core$Int64 $tmp295 = (frost$core$Int64) {0u};
int64_t $tmp296 = $tmp295.value;
frost$core$Int* $tmp297 = $tmp294[$tmp296];
int64_t $tmp298 = $tmp293.value;
$tmp292[$tmp298] = $tmp297;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:58
frost$core$Int** $tmp299 = *(&local0);
frost$core$Int64 $tmp300 = (frost$core$Int64) {19u};
frost$core$Int** $tmp301 = *(&local0);
frost$core$Int64 $tmp302 = (frost$core$Int64) {0u};
int64_t $tmp303 = $tmp302.value;
frost$core$Int* $tmp304 = $tmp301[$tmp303];
int64_t $tmp305 = $tmp300.value;
$tmp299[$tmp305] = $tmp304;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:59
frost$core$Int** $tmp306 = *(&local0);
frost$core$Int64 $tmp307 = (frost$core$Int64) {20u};
frost$core$Int** $tmp308 = *(&local0);
frost$core$Int64 $tmp309 = (frost$core$Int64) {0u};
int64_t $tmp310 = $tmp309.value;
frost$core$Int* $tmp311 = $tmp308[$tmp310];
int64_t $tmp312 = $tmp307.value;
$tmp306[$tmp312] = $tmp311;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:60
frost$core$Int** $tmp313 = *(&local0);
frost$core$Int64 $tmp314 = (frost$core$Int64) {21u};
frost$core$Int** $tmp315 = *(&local0);
frost$core$Int64 $tmp316 = (frost$core$Int64) {0u};
int64_t $tmp317 = $tmp316.value;
frost$core$Int* $tmp318 = $tmp315[$tmp317];
int64_t $tmp319 = $tmp314.value;
$tmp313[$tmp319] = $tmp318;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:61
frost$core$Int** $tmp320 = *(&local0);
frost$core$Int64 $tmp321 = (frost$core$Int64) {22u};
frost$core$Int** $tmp322 = *(&local0);
frost$core$Int64 $tmp323 = (frost$core$Int64) {0u};
int64_t $tmp324 = $tmp323.value;
frost$core$Int* $tmp325 = $tmp322[$tmp324];
int64_t $tmp326 = $tmp321.value;
$tmp320[$tmp326] = $tmp325;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:62
frost$core$Int** $tmp327 = *(&local0);
frost$core$Int64 $tmp328 = (frost$core$Int64) {23u};
frost$core$Int** $tmp329 = *(&local0);
frost$core$Int64 $tmp330 = (frost$core$Int64) {0u};
int64_t $tmp331 = $tmp330.value;
frost$core$Int* $tmp332 = $tmp329[$tmp331];
int64_t $tmp333 = $tmp328.value;
$tmp327[$tmp333] = $tmp332;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:63
frost$core$Int** $tmp334 = *(&local0);
frost$core$Int64 $tmp335 = (frost$core$Int64) {24u};
frost$core$Int** $tmp336 = *(&local0);
frost$core$Int64 $tmp337 = (frost$core$Int64) {0u};
int64_t $tmp338 = $tmp337.value;
frost$core$Int* $tmp339 = $tmp336[$tmp338];
int64_t $tmp340 = $tmp335.value;
$tmp334[$tmp340] = $tmp339;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:64
frost$core$Int** $tmp341 = *(&local0);
frost$core$Int64 $tmp342 = (frost$core$Int64) {25u};
frost$core$Int** $tmp343 = *(&local0);
frost$core$Int64 $tmp344 = (frost$core$Int64) {0u};
int64_t $tmp345 = $tmp344.value;
frost$core$Int* $tmp346 = $tmp343[$tmp345];
int64_t $tmp347 = $tmp342.value;
$tmp341[$tmp347] = $tmp346;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:65
frost$core$Int** $tmp348 = *(&local0);
frost$core$Int64 $tmp349 = (frost$core$Int64) {26u};
frost$core$Int** $tmp350 = *(&local0);
frost$core$Int64 $tmp351 = (frost$core$Int64) {0u};
int64_t $tmp352 = $tmp351.value;
frost$core$Int* $tmp353 = $tmp350[$tmp352];
int64_t $tmp354 = $tmp349.value;
$tmp348[$tmp354] = $tmp353;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:66
frost$core$Int** $tmp355 = *(&local0);
frost$core$Int64 $tmp356 = (frost$core$Int64) {27u};
frost$core$Int** $tmp357 = *(&local0);
frost$core$Int64 $tmp358 = (frost$core$Int64) {0u};
int64_t $tmp359 = $tmp358.value;
frost$core$Int* $tmp360 = $tmp357[$tmp359];
int64_t $tmp361 = $tmp356.value;
$tmp355[$tmp361] = $tmp360;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:67
frost$core$Int** $tmp362 = *(&local0);
frost$core$Int64 $tmp363 = (frost$core$Int64) {28u};
frost$core$Int** $tmp364 = *(&local0);
frost$core$Int64 $tmp365 = (frost$core$Int64) {0u};
int64_t $tmp366 = $tmp365.value;
frost$core$Int* $tmp367 = $tmp364[$tmp366];
int64_t $tmp368 = $tmp363.value;
$tmp362[$tmp368] = $tmp367;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:68
frost$core$Int** $tmp369 = *(&local0);
frost$core$Int64 $tmp370 = (frost$core$Int64) {29u};
frost$core$Int** $tmp371 = *(&local0);
frost$core$Int64 $tmp372 = (frost$core$Int64) {0u};
int64_t $tmp373 = $tmp372.value;
frost$core$Int* $tmp374 = $tmp371[$tmp373];
int64_t $tmp375 = $tmp370.value;
$tmp369[$tmp375] = $tmp374;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:69
frost$core$Int** $tmp376 = *(&local0);
frost$core$Int64 $tmp377 = (frost$core$Int64) {30u};
frost$core$Int** $tmp378 = *(&local0);
frost$core$Int64 $tmp379 = (frost$core$Int64) {0u};
int64_t $tmp380 = $tmp379.value;
frost$core$Int* $tmp381 = $tmp378[$tmp380];
int64_t $tmp382 = $tmp377.value;
$tmp376[$tmp382] = $tmp381;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:70
frost$core$Int** $tmp383 = *(&local0);
frost$core$Int64 $tmp384 = (frost$core$Int64) {31u};
frost$core$Int** $tmp385 = *(&local0);
frost$core$Int64 $tmp386 = (frost$core$Int64) {0u};
int64_t $tmp387 = $tmp386.value;
frost$core$Int* $tmp388 = $tmp385[$tmp387];
int64_t $tmp389 = $tmp384.value;
$tmp383[$tmp389] = $tmp388;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:71
frost$core$Int** $tmp390 = *(&local0);
frost$core$Int64 $tmp391 = (frost$core$Int64) {32u};
frost$core$Int** $tmp392 = *(&local0);
frost$core$Int64 $tmp393 = (frost$core$Int64) {0u};
int64_t $tmp394 = $tmp393.value;
frost$core$Int* $tmp395 = $tmp392[$tmp394];
int64_t $tmp396 = $tmp391.value;
$tmp390[$tmp396] = $tmp395;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:72
frost$core$Int** $tmp397 = *(&local0);
frost$core$Int64 $tmp398 = (frost$core$Int64) {33u};
frost$core$Int** $tmp399 = *(&local0);
frost$core$Int64 $tmp400 = (frost$core$Int64) {0u};
int64_t $tmp401 = $tmp400.value;
frost$core$Int* $tmp402 = $tmp399[$tmp401];
int64_t $tmp403 = $tmp398.value;
$tmp397[$tmp403] = $tmp402;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:73
frost$core$Int** $tmp404 = *(&local0);
frost$core$Int64 $tmp405 = (frost$core$Int64) {34u};
frost$core$Int** $tmp406 = *(&local0);
frost$core$Int64 $tmp407 = (frost$core$Int64) {0u};
int64_t $tmp408 = $tmp407.value;
frost$core$Int* $tmp409 = $tmp406[$tmp408];
int64_t $tmp410 = $tmp405.value;
$tmp404[$tmp410] = $tmp409;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:74
frost$core$Int** $tmp411 = *(&local0);
frost$core$Int64 $tmp412 = (frost$core$Int64) {35u};
frost$core$Int** $tmp413 = *(&local0);
frost$core$Int64 $tmp414 = (frost$core$Int64) {0u};
int64_t $tmp415 = $tmp414.value;
frost$core$Int* $tmp416 = $tmp413[$tmp415];
int64_t $tmp417 = $tmp412.value;
$tmp411[$tmp417] = $tmp416;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:75
frost$core$Int** $tmp418 = *(&local0);
frost$core$Int64 $tmp419 = (frost$core$Int64) {36u};
frost$core$Int $tmp420 = (frost$core$Int) {20u};
frost$core$Int $tmp421 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:75:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp422 = frost$core$Int64$init$frost$core$Int($tmp420);
int64_t $tmp423 = $tmp422.value;
frost$core$Int* $tmp424 = ((frost$core$Int*) frostAlloc($tmp423 * 8));
*(&local5) = $tmp424;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp425 = (frost$core$Int) {0u};
frost$core$Bit $tmp426 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp427 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp425, $tmp420, $tmp426);
frost$core$Int $tmp428 = $tmp427.min;
*(&local6) = $tmp428;
frost$core$Int $tmp429 = $tmp427.max;
frost$core$Bit $tmp430 = $tmp427.inclusive;
bool $tmp431 = $tmp430.value;
frost$core$Int $tmp432 = (frost$core$Int) {1u};
if ($tmp431) goto block23; else goto block24;
block23:;
int64_t $tmp433 = $tmp428.value;
int64_t $tmp434 = $tmp429.value;
bool $tmp435 = $tmp433 <= $tmp434;
frost$core$Bit $tmp436 = (frost$core$Bit) {$tmp435};
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block20; else goto block21;
block24:;
int64_t $tmp438 = $tmp428.value;
int64_t $tmp439 = $tmp429.value;
bool $tmp440 = $tmp438 < $tmp439;
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp443 = *(&local5);
frost$core$Int $tmp444 = *(&local6);
frost$core$Int64 $tmp445 = frost$core$Int64$init$frost$core$Int($tmp444);
int64_t $tmp446 = $tmp445.value;
$tmp443[$tmp446] = $tmp421;
frost$core$Int $tmp447 = *(&local6);
int64_t $tmp448 = $tmp429.value;
int64_t $tmp449 = $tmp447.value;
int64_t $tmp450 = $tmp448 - $tmp449;
frost$core$Int $tmp451 = (frost$core$Int) {$tmp450};
if ($tmp431) goto block26; else goto block27;
block26:;
int64_t $tmp452 = $tmp451.value;
int64_t $tmp453 = $tmp432.value;
bool $tmp454 = $tmp452 >= $tmp453;
frost$core$Bit $tmp455 = (frost$core$Bit) {$tmp454};
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block25; else goto block21;
block27:;
int64_t $tmp457 = $tmp451.value;
int64_t $tmp458 = $tmp432.value;
bool $tmp459 = $tmp457 > $tmp458;
frost$core$Bit $tmp460 = (frost$core$Bit) {$tmp459};
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block25; else goto block21;
block25:;
int64_t $tmp462 = $tmp447.value;
int64_t $tmp463 = $tmp432.value;
int64_t $tmp464 = $tmp462 + $tmp463;
frost$core$Int $tmp465 = (frost$core$Int) {$tmp464};
*(&local6) = $tmp465;
goto block20;
block21:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp466 = *(&local5);
int64_t $tmp467 = $tmp419.value;
$tmp418[$tmp467] = $tmp466;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:76
frost$core$Int** $tmp468 = *(&local0);
frost$core$Int64 $tmp469 = (frost$core$Int64) {36u};
int64_t $tmp470 = $tmp469.value;
frost$core$Int* $tmp471 = $tmp468[$tmp470];
frost$core$Int64 $tmp472 = (frost$core$Int64) {1u};
frost$core$Int $tmp473 = (frost$core$Int) {3u};
int64_t $tmp474 = $tmp472.value;
$tmp471[$tmp474] = $tmp473;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:77
frost$core$Int** $tmp475 = *(&local0);
frost$core$Int64 $tmp476 = (frost$core$Int64) {36u};
int64_t $tmp477 = $tmp476.value;
frost$core$Int* $tmp478 = $tmp475[$tmp477];
frost$core$Int64 $tmp479 = (frost$core$Int64) {14u};
frost$core$Int $tmp480 = (frost$core$Int) {2u};
int64_t $tmp481 = $tmp479.value;
$tmp478[$tmp481] = $tmp480;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:78
frost$core$Int** $tmp482 = *(&local0);
frost$core$Int64 $tmp483 = (frost$core$Int64) {37u};
frost$core$Int** $tmp484 = *(&local0);
frost$core$Int64 $tmp485 = (frost$core$Int64) {0u};
int64_t $tmp486 = $tmp485.value;
frost$core$Int* $tmp487 = $tmp484[$tmp486];
int64_t $tmp488 = $tmp483.value;
$tmp482[$tmp488] = $tmp487;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:79
frost$core$Int** $tmp489 = *(&local0);
frost$core$Int64 $tmp490 = (frost$core$Int64) {38u};
frost$core$Int** $tmp491 = *(&local0);
frost$core$Int64 $tmp492 = (frost$core$Int64) {0u};
int64_t $tmp493 = $tmp492.value;
frost$core$Int* $tmp494 = $tmp491[$tmp493];
int64_t $tmp495 = $tmp490.value;
$tmp489[$tmp495] = $tmp494;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:80
frost$core$Int** $tmp496 = *(&local0);
frost$core$Int64 $tmp497 = (frost$core$Int64) {39u};
frost$core$Int $tmp498 = (frost$core$Int) {20u};
frost$core$Int $tmp499 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:80:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp500 = frost$core$Int64$init$frost$core$Int($tmp498);
int64_t $tmp501 = $tmp500.value;
frost$core$Int* $tmp502 = ((frost$core$Int*) frostAlloc($tmp501 * 8));
*(&local7) = $tmp502;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp503 = (frost$core$Int) {0u};
frost$core$Bit $tmp504 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp505 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp503, $tmp498, $tmp504);
frost$core$Int $tmp506 = $tmp505.min;
*(&local8) = $tmp506;
frost$core$Int $tmp507 = $tmp505.max;
frost$core$Bit $tmp508 = $tmp505.inclusive;
bool $tmp509 = $tmp508.value;
frost$core$Int $tmp510 = (frost$core$Int) {1u};
if ($tmp509) goto block32; else goto block33;
block32:;
int64_t $tmp511 = $tmp506.value;
int64_t $tmp512 = $tmp507.value;
bool $tmp513 = $tmp511 <= $tmp512;
frost$core$Bit $tmp514 = (frost$core$Bit) {$tmp513};
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block29; else goto block30;
block33:;
int64_t $tmp516 = $tmp506.value;
int64_t $tmp517 = $tmp507.value;
bool $tmp518 = $tmp516 < $tmp517;
frost$core$Bit $tmp519 = (frost$core$Bit) {$tmp518};
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp521 = *(&local7);
frost$core$Int $tmp522 = *(&local8);
frost$core$Int64 $tmp523 = frost$core$Int64$init$frost$core$Int($tmp522);
int64_t $tmp524 = $tmp523.value;
$tmp521[$tmp524] = $tmp499;
frost$core$Int $tmp525 = *(&local8);
int64_t $tmp526 = $tmp507.value;
int64_t $tmp527 = $tmp525.value;
int64_t $tmp528 = $tmp526 - $tmp527;
frost$core$Int $tmp529 = (frost$core$Int) {$tmp528};
if ($tmp509) goto block35; else goto block36;
block35:;
int64_t $tmp530 = $tmp529.value;
int64_t $tmp531 = $tmp510.value;
bool $tmp532 = $tmp530 >= $tmp531;
frost$core$Bit $tmp533 = (frost$core$Bit) {$tmp532};
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block34; else goto block30;
block36:;
int64_t $tmp535 = $tmp529.value;
int64_t $tmp536 = $tmp510.value;
bool $tmp537 = $tmp535 > $tmp536;
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537};
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block34; else goto block30;
block34:;
int64_t $tmp540 = $tmp525.value;
int64_t $tmp541 = $tmp510.value;
int64_t $tmp542 = $tmp540 + $tmp541;
frost$core$Int $tmp543 = (frost$core$Int) {$tmp542};
*(&local8) = $tmp543;
goto block29;
block30:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp544 = *(&local7);
int64_t $tmp545 = $tmp497.value;
$tmp496[$tmp545] = $tmp544;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:81
frost$core$Int** $tmp546 = *(&local0);
frost$core$Int64 $tmp547 = (frost$core$Int64) {39u};
int64_t $tmp548 = $tmp547.value;
frost$core$Int* $tmp549 = $tmp546[$tmp548];
frost$core$Int64 $tmp550 = (frost$core$Int64) {1u};
frost$core$Int $tmp551 = (frost$core$Int) {4u};
int64_t $tmp552 = $tmp550.value;
$tmp549[$tmp552] = $tmp551;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:82
frost$core$Int** $tmp553 = *(&local0);
frost$core$Int64 $tmp554 = (frost$core$Int64) {39u};
int64_t $tmp555 = $tmp554.value;
frost$core$Int* $tmp556 = $tmp553[$tmp555];
frost$core$Int64 $tmp557 = (frost$core$Int64) {14u};
frost$core$Int $tmp558 = (frost$core$Int) {2u};
int64_t $tmp559 = $tmp557.value;
$tmp556[$tmp559] = $tmp558;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:83
frost$core$Int** $tmp560 = *(&local0);
frost$core$Int64 $tmp561 = (frost$core$Int64) {40u};
frost$core$Int $tmp562 = (frost$core$Int) {20u};
frost$core$Int $tmp563 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:83:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp564 = frost$core$Int64$init$frost$core$Int($tmp562);
int64_t $tmp565 = $tmp564.value;
frost$core$Int* $tmp566 = ((frost$core$Int*) frostAlloc($tmp565 * 8));
*(&local9) = $tmp566;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp567 = (frost$core$Int) {0u};
frost$core$Bit $tmp568 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp569 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp567, $tmp562, $tmp568);
frost$core$Int $tmp570 = $tmp569.min;
*(&local10) = $tmp570;
frost$core$Int $tmp571 = $tmp569.max;
frost$core$Bit $tmp572 = $tmp569.inclusive;
bool $tmp573 = $tmp572.value;
frost$core$Int $tmp574 = (frost$core$Int) {1u};
if ($tmp573) goto block41; else goto block42;
block41:;
int64_t $tmp575 = $tmp570.value;
int64_t $tmp576 = $tmp571.value;
bool $tmp577 = $tmp575 <= $tmp576;
frost$core$Bit $tmp578 = (frost$core$Bit) {$tmp577};
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block38; else goto block39;
block42:;
int64_t $tmp580 = $tmp570.value;
int64_t $tmp581 = $tmp571.value;
bool $tmp582 = $tmp580 < $tmp581;
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp585 = *(&local9);
frost$core$Int $tmp586 = *(&local10);
frost$core$Int64 $tmp587 = frost$core$Int64$init$frost$core$Int($tmp586);
int64_t $tmp588 = $tmp587.value;
$tmp585[$tmp588] = $tmp563;
frost$core$Int $tmp589 = *(&local10);
int64_t $tmp590 = $tmp571.value;
int64_t $tmp591 = $tmp589.value;
int64_t $tmp592 = $tmp590 - $tmp591;
frost$core$Int $tmp593 = (frost$core$Int) {$tmp592};
if ($tmp573) goto block44; else goto block45;
block44:;
int64_t $tmp594 = $tmp593.value;
int64_t $tmp595 = $tmp574.value;
bool $tmp596 = $tmp594 >= $tmp595;
frost$core$Bit $tmp597 = (frost$core$Bit) {$tmp596};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block43; else goto block39;
block45:;
int64_t $tmp599 = $tmp593.value;
int64_t $tmp600 = $tmp574.value;
bool $tmp601 = $tmp599 > $tmp600;
frost$core$Bit $tmp602 = (frost$core$Bit) {$tmp601};
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block43; else goto block39;
block43:;
int64_t $tmp604 = $tmp589.value;
int64_t $tmp605 = $tmp574.value;
int64_t $tmp606 = $tmp604 + $tmp605;
frost$core$Int $tmp607 = (frost$core$Int) {$tmp606};
*(&local10) = $tmp607;
goto block38;
block39:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp608 = *(&local9);
int64_t $tmp609 = $tmp561.value;
$tmp560[$tmp609] = $tmp608;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:84
frost$core$Int** $tmp610 = *(&local0);
frost$core$Int64 $tmp611 = (frost$core$Int64) {40u};
int64_t $tmp612 = $tmp611.value;
frost$core$Int* $tmp613 = $tmp610[$tmp612];
frost$core$Int64 $tmp614 = (frost$core$Int64) {1u};
frost$core$Int $tmp615 = (frost$core$Int) {5u};
int64_t $tmp616 = $tmp614.value;
$tmp613[$tmp616] = $tmp615;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:85
frost$core$Int** $tmp617 = *(&local0);
frost$core$Int64 $tmp618 = (frost$core$Int64) {40u};
int64_t $tmp619 = $tmp618.value;
frost$core$Int* $tmp620 = $tmp617[$tmp619];
frost$core$Int64 $tmp621 = (frost$core$Int64) {14u};
frost$core$Int $tmp622 = (frost$core$Int) {2u};
int64_t $tmp623 = $tmp621.value;
$tmp620[$tmp623] = $tmp622;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:86
frost$core$Int** $tmp624 = *(&local0);
frost$core$Int64 $tmp625 = (frost$core$Int64) {41u};
frost$core$Int $tmp626 = (frost$core$Int) {20u};
frost$core$Int $tmp627 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:86:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp628 = frost$core$Int64$init$frost$core$Int($tmp626);
int64_t $tmp629 = $tmp628.value;
frost$core$Int* $tmp630 = ((frost$core$Int*) frostAlloc($tmp629 * 8));
*(&local11) = $tmp630;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp631 = (frost$core$Int) {0u};
frost$core$Bit $tmp632 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp633 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp631, $tmp626, $tmp632);
frost$core$Int $tmp634 = $tmp633.min;
*(&local12) = $tmp634;
frost$core$Int $tmp635 = $tmp633.max;
frost$core$Bit $tmp636 = $tmp633.inclusive;
bool $tmp637 = $tmp636.value;
frost$core$Int $tmp638 = (frost$core$Int) {1u};
if ($tmp637) goto block50; else goto block51;
block50:;
int64_t $tmp639 = $tmp634.value;
int64_t $tmp640 = $tmp635.value;
bool $tmp641 = $tmp639 <= $tmp640;
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block47; else goto block48;
block51:;
int64_t $tmp644 = $tmp634.value;
int64_t $tmp645 = $tmp635.value;
bool $tmp646 = $tmp644 < $tmp645;
frost$core$Bit $tmp647 = (frost$core$Bit) {$tmp646};
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp649 = *(&local11);
frost$core$Int $tmp650 = *(&local12);
frost$core$Int64 $tmp651 = frost$core$Int64$init$frost$core$Int($tmp650);
int64_t $tmp652 = $tmp651.value;
$tmp649[$tmp652] = $tmp627;
frost$core$Int $tmp653 = *(&local12);
int64_t $tmp654 = $tmp635.value;
int64_t $tmp655 = $tmp653.value;
int64_t $tmp656 = $tmp654 - $tmp655;
frost$core$Int $tmp657 = (frost$core$Int) {$tmp656};
if ($tmp637) goto block53; else goto block54;
block53:;
int64_t $tmp658 = $tmp657.value;
int64_t $tmp659 = $tmp638.value;
bool $tmp660 = $tmp658 >= $tmp659;
frost$core$Bit $tmp661 = (frost$core$Bit) {$tmp660};
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block52; else goto block48;
block54:;
int64_t $tmp663 = $tmp657.value;
int64_t $tmp664 = $tmp638.value;
bool $tmp665 = $tmp663 > $tmp664;
frost$core$Bit $tmp666 = (frost$core$Bit) {$tmp665};
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block52; else goto block48;
block52:;
int64_t $tmp668 = $tmp653.value;
int64_t $tmp669 = $tmp638.value;
int64_t $tmp670 = $tmp668 + $tmp669;
frost$core$Int $tmp671 = (frost$core$Int) {$tmp670};
*(&local12) = $tmp671;
goto block47;
block48:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp672 = *(&local11);
int64_t $tmp673 = $tmp625.value;
$tmp624[$tmp673] = $tmp672;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:87
frost$core$Int** $tmp674 = *(&local0);
frost$core$Int64 $tmp675 = (frost$core$Int64) {41u};
int64_t $tmp676 = $tmp675.value;
frost$core$Int* $tmp677 = $tmp674[$tmp676];
frost$core$Int64 $tmp678 = (frost$core$Int64) {1u};
frost$core$Int $tmp679 = (frost$core$Int) {6u};
int64_t $tmp680 = $tmp678.value;
$tmp677[$tmp680] = $tmp679;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:88
frost$core$Int** $tmp681 = *(&local0);
frost$core$Int64 $tmp682 = (frost$core$Int64) {41u};
int64_t $tmp683 = $tmp682.value;
frost$core$Int* $tmp684 = $tmp681[$tmp683];
frost$core$Int64 $tmp685 = (frost$core$Int64) {14u};
frost$core$Int $tmp686 = (frost$core$Int) {2u};
int64_t $tmp687 = $tmp685.value;
$tmp684[$tmp687] = $tmp686;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:89
frost$core$Int** $tmp688 = *(&local0);
frost$core$Int64 $tmp689 = (frost$core$Int64) {42u};
frost$core$Int $tmp690 = (frost$core$Int) {20u};
frost$core$Int $tmp691 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:89:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp692 = frost$core$Int64$init$frost$core$Int($tmp690);
int64_t $tmp693 = $tmp692.value;
frost$core$Int* $tmp694 = ((frost$core$Int*) frostAlloc($tmp693 * 8));
*(&local13) = $tmp694;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp695 = (frost$core$Int) {0u};
frost$core$Bit $tmp696 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp697 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp695, $tmp690, $tmp696);
frost$core$Int $tmp698 = $tmp697.min;
*(&local14) = $tmp698;
frost$core$Int $tmp699 = $tmp697.max;
frost$core$Bit $tmp700 = $tmp697.inclusive;
bool $tmp701 = $tmp700.value;
frost$core$Int $tmp702 = (frost$core$Int) {1u};
if ($tmp701) goto block59; else goto block60;
block59:;
int64_t $tmp703 = $tmp698.value;
int64_t $tmp704 = $tmp699.value;
bool $tmp705 = $tmp703 <= $tmp704;
frost$core$Bit $tmp706 = (frost$core$Bit) {$tmp705};
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block56; else goto block57;
block60:;
int64_t $tmp708 = $tmp698.value;
int64_t $tmp709 = $tmp699.value;
bool $tmp710 = $tmp708 < $tmp709;
frost$core$Bit $tmp711 = (frost$core$Bit) {$tmp710};
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp713 = *(&local13);
frost$core$Int $tmp714 = *(&local14);
frost$core$Int64 $tmp715 = frost$core$Int64$init$frost$core$Int($tmp714);
int64_t $tmp716 = $tmp715.value;
$tmp713[$tmp716] = $tmp691;
frost$core$Int $tmp717 = *(&local14);
int64_t $tmp718 = $tmp699.value;
int64_t $tmp719 = $tmp717.value;
int64_t $tmp720 = $tmp718 - $tmp719;
frost$core$Int $tmp721 = (frost$core$Int) {$tmp720};
if ($tmp701) goto block62; else goto block63;
block62:;
int64_t $tmp722 = $tmp721.value;
int64_t $tmp723 = $tmp702.value;
bool $tmp724 = $tmp722 >= $tmp723;
frost$core$Bit $tmp725 = (frost$core$Bit) {$tmp724};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block61; else goto block57;
block63:;
int64_t $tmp727 = $tmp721.value;
int64_t $tmp728 = $tmp702.value;
bool $tmp729 = $tmp727 > $tmp728;
frost$core$Bit $tmp730 = (frost$core$Bit) {$tmp729};
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block61; else goto block57;
block61:;
int64_t $tmp732 = $tmp717.value;
int64_t $tmp733 = $tmp702.value;
int64_t $tmp734 = $tmp732 + $tmp733;
frost$core$Int $tmp735 = (frost$core$Int) {$tmp734};
*(&local14) = $tmp735;
goto block56;
block57:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp736 = *(&local13);
int64_t $tmp737 = $tmp689.value;
$tmp688[$tmp737] = $tmp736;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:90
frost$core$Int** $tmp738 = *(&local0);
frost$core$Int64 $tmp739 = (frost$core$Int64) {42u};
int64_t $tmp740 = $tmp739.value;
frost$core$Int* $tmp741 = $tmp738[$tmp740];
frost$core$Int64 $tmp742 = (frost$core$Int64) {1u};
frost$core$Int $tmp743 = (frost$core$Int) {7u};
int64_t $tmp744 = $tmp742.value;
$tmp741[$tmp744] = $tmp743;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:91
frost$core$Int** $tmp745 = *(&local0);
frost$core$Int64 $tmp746 = (frost$core$Int64) {42u};
int64_t $tmp747 = $tmp746.value;
frost$core$Int* $tmp748 = $tmp745[$tmp747];
frost$core$Int64 $tmp749 = (frost$core$Int64) {14u};
frost$core$Int $tmp750 = (frost$core$Int) {2u};
int64_t $tmp751 = $tmp749.value;
$tmp748[$tmp751] = $tmp750;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:92
frost$core$Int** $tmp752 = *(&local0);
frost$core$Int64 $tmp753 = (frost$core$Int64) {43u};
frost$core$Int $tmp754 = (frost$core$Int) {20u};
frost$core$Int $tmp755 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:92:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp756 = frost$core$Int64$init$frost$core$Int($tmp754);
int64_t $tmp757 = $tmp756.value;
frost$core$Int* $tmp758 = ((frost$core$Int*) frostAlloc($tmp757 * 8));
*(&local15) = $tmp758;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp759 = (frost$core$Int) {0u};
frost$core$Bit $tmp760 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp761 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp759, $tmp754, $tmp760);
frost$core$Int $tmp762 = $tmp761.min;
*(&local16) = $tmp762;
frost$core$Int $tmp763 = $tmp761.max;
frost$core$Bit $tmp764 = $tmp761.inclusive;
bool $tmp765 = $tmp764.value;
frost$core$Int $tmp766 = (frost$core$Int) {1u};
if ($tmp765) goto block68; else goto block69;
block68:;
int64_t $tmp767 = $tmp762.value;
int64_t $tmp768 = $tmp763.value;
bool $tmp769 = $tmp767 <= $tmp768;
frost$core$Bit $tmp770 = (frost$core$Bit) {$tmp769};
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block65; else goto block66;
block69:;
int64_t $tmp772 = $tmp762.value;
int64_t $tmp773 = $tmp763.value;
bool $tmp774 = $tmp772 < $tmp773;
frost$core$Bit $tmp775 = (frost$core$Bit) {$tmp774};
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp777 = *(&local15);
frost$core$Int $tmp778 = *(&local16);
frost$core$Int64 $tmp779 = frost$core$Int64$init$frost$core$Int($tmp778);
int64_t $tmp780 = $tmp779.value;
$tmp777[$tmp780] = $tmp755;
frost$core$Int $tmp781 = *(&local16);
int64_t $tmp782 = $tmp763.value;
int64_t $tmp783 = $tmp781.value;
int64_t $tmp784 = $tmp782 - $tmp783;
frost$core$Int $tmp785 = (frost$core$Int) {$tmp784};
if ($tmp765) goto block71; else goto block72;
block71:;
int64_t $tmp786 = $tmp785.value;
int64_t $tmp787 = $tmp766.value;
bool $tmp788 = $tmp786 >= $tmp787;
frost$core$Bit $tmp789 = (frost$core$Bit) {$tmp788};
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block70; else goto block66;
block72:;
int64_t $tmp791 = $tmp785.value;
int64_t $tmp792 = $tmp766.value;
bool $tmp793 = $tmp791 > $tmp792;
frost$core$Bit $tmp794 = (frost$core$Bit) {$tmp793};
bool $tmp795 = $tmp794.value;
if ($tmp795) goto block70; else goto block66;
block70:;
int64_t $tmp796 = $tmp781.value;
int64_t $tmp797 = $tmp766.value;
int64_t $tmp798 = $tmp796 + $tmp797;
frost$core$Int $tmp799 = (frost$core$Int) {$tmp798};
*(&local16) = $tmp799;
goto block65;
block66:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp800 = *(&local15);
int64_t $tmp801 = $tmp753.value;
$tmp752[$tmp801] = $tmp800;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:93
frost$core$Int** $tmp802 = *(&local0);
frost$core$Int64 $tmp803 = (frost$core$Int64) {43u};
int64_t $tmp804 = $tmp803.value;
frost$core$Int* $tmp805 = $tmp802[$tmp804];
frost$core$Int64 $tmp806 = (frost$core$Int64) {1u};
frost$core$Int $tmp807 = (frost$core$Int) {8u};
int64_t $tmp808 = $tmp806.value;
$tmp805[$tmp808] = $tmp807;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:94
frost$core$Int** $tmp809 = *(&local0);
frost$core$Int64 $tmp810 = (frost$core$Int64) {43u};
int64_t $tmp811 = $tmp810.value;
frost$core$Int* $tmp812 = $tmp809[$tmp811];
frost$core$Int64 $tmp813 = (frost$core$Int64) {14u};
frost$core$Int $tmp814 = (frost$core$Int) {2u};
int64_t $tmp815 = $tmp813.value;
$tmp812[$tmp815] = $tmp814;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:95
frost$core$Int** $tmp816 = *(&local0);
frost$core$Int64 $tmp817 = (frost$core$Int64) {44u};
frost$core$Int $tmp818 = (frost$core$Int) {20u};
frost$core$Int $tmp819 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:95:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp820 = frost$core$Int64$init$frost$core$Int($tmp818);
int64_t $tmp821 = $tmp820.value;
frost$core$Int* $tmp822 = ((frost$core$Int*) frostAlloc($tmp821 * 8));
*(&local17) = $tmp822;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp823 = (frost$core$Int) {0u};
frost$core$Bit $tmp824 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp825 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp823, $tmp818, $tmp824);
frost$core$Int $tmp826 = $tmp825.min;
*(&local18) = $tmp826;
frost$core$Int $tmp827 = $tmp825.max;
frost$core$Bit $tmp828 = $tmp825.inclusive;
bool $tmp829 = $tmp828.value;
frost$core$Int $tmp830 = (frost$core$Int) {1u};
if ($tmp829) goto block77; else goto block78;
block77:;
int64_t $tmp831 = $tmp826.value;
int64_t $tmp832 = $tmp827.value;
bool $tmp833 = $tmp831 <= $tmp832;
frost$core$Bit $tmp834 = (frost$core$Bit) {$tmp833};
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block74; else goto block75;
block78:;
int64_t $tmp836 = $tmp826.value;
int64_t $tmp837 = $tmp827.value;
bool $tmp838 = $tmp836 < $tmp837;
frost$core$Bit $tmp839 = (frost$core$Bit) {$tmp838};
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp841 = *(&local17);
frost$core$Int $tmp842 = *(&local18);
frost$core$Int64 $tmp843 = frost$core$Int64$init$frost$core$Int($tmp842);
int64_t $tmp844 = $tmp843.value;
$tmp841[$tmp844] = $tmp819;
frost$core$Int $tmp845 = *(&local18);
int64_t $tmp846 = $tmp827.value;
int64_t $tmp847 = $tmp845.value;
int64_t $tmp848 = $tmp846 - $tmp847;
frost$core$Int $tmp849 = (frost$core$Int) {$tmp848};
if ($tmp829) goto block80; else goto block81;
block80:;
int64_t $tmp850 = $tmp849.value;
int64_t $tmp851 = $tmp830.value;
bool $tmp852 = $tmp850 >= $tmp851;
frost$core$Bit $tmp853 = (frost$core$Bit) {$tmp852};
bool $tmp854 = $tmp853.value;
if ($tmp854) goto block79; else goto block75;
block81:;
int64_t $tmp855 = $tmp849.value;
int64_t $tmp856 = $tmp830.value;
bool $tmp857 = $tmp855 > $tmp856;
frost$core$Bit $tmp858 = (frost$core$Bit) {$tmp857};
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block79; else goto block75;
block79:;
int64_t $tmp860 = $tmp845.value;
int64_t $tmp861 = $tmp830.value;
int64_t $tmp862 = $tmp860 + $tmp861;
frost$core$Int $tmp863 = (frost$core$Int) {$tmp862};
*(&local18) = $tmp863;
goto block74;
block75:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp864 = *(&local17);
int64_t $tmp865 = $tmp817.value;
$tmp816[$tmp865] = $tmp864;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:96
frost$core$Int** $tmp866 = *(&local0);
frost$core$Int64 $tmp867 = (frost$core$Int64) {44u};
int64_t $tmp868 = $tmp867.value;
frost$core$Int* $tmp869 = $tmp866[$tmp868];
frost$core$Int64 $tmp870 = (frost$core$Int64) {1u};
frost$core$Int $tmp871 = (frost$core$Int) {9u};
int64_t $tmp872 = $tmp870.value;
$tmp869[$tmp872] = $tmp871;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:97
frost$core$Int** $tmp873 = *(&local0);
frost$core$Int64 $tmp874 = (frost$core$Int64) {44u};
int64_t $tmp875 = $tmp874.value;
frost$core$Int* $tmp876 = $tmp873[$tmp875];
frost$core$Int64 $tmp877 = (frost$core$Int64) {14u};
frost$core$Int $tmp878 = (frost$core$Int) {2u};
int64_t $tmp879 = $tmp877.value;
$tmp876[$tmp879] = $tmp878;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:98
frost$core$Int** $tmp880 = *(&local0);
frost$core$Int64 $tmp881 = (frost$core$Int64) {45u};
frost$core$Int** $tmp882 = *(&local0);
frost$core$Int64 $tmp883 = (frost$core$Int64) {0u};
int64_t $tmp884 = $tmp883.value;
frost$core$Int* $tmp885 = $tmp882[$tmp884];
int64_t $tmp886 = $tmp881.value;
$tmp880[$tmp886] = $tmp885;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:99
frost$core$Int** $tmp887 = *(&local0);
frost$core$Int64 $tmp888 = (frost$core$Int64) {46u};
frost$core$Int** $tmp889 = *(&local0);
frost$core$Int64 $tmp890 = (frost$core$Int64) {0u};
int64_t $tmp891 = $tmp890.value;
frost$core$Int* $tmp892 = $tmp889[$tmp891];
int64_t $tmp893 = $tmp888.value;
$tmp887[$tmp893] = $tmp892;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:100
frost$core$Int** $tmp894 = *(&local0);
frost$core$Int64 $tmp895 = (frost$core$Int64) {47u};
frost$core$Int $tmp896 = (frost$core$Int) {20u};
frost$core$Int $tmp897 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:100:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp898 = frost$core$Int64$init$frost$core$Int($tmp896);
int64_t $tmp899 = $tmp898.value;
frost$core$Int* $tmp900 = ((frost$core$Int*) frostAlloc($tmp899 * 8));
*(&local19) = $tmp900;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp901 = (frost$core$Int) {0u};
frost$core$Bit $tmp902 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp903 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp901, $tmp896, $tmp902);
frost$core$Int $tmp904 = $tmp903.min;
*(&local20) = $tmp904;
frost$core$Int $tmp905 = $tmp903.max;
frost$core$Bit $tmp906 = $tmp903.inclusive;
bool $tmp907 = $tmp906.value;
frost$core$Int $tmp908 = (frost$core$Int) {1u};
if ($tmp907) goto block86; else goto block87;
block86:;
int64_t $tmp909 = $tmp904.value;
int64_t $tmp910 = $tmp905.value;
bool $tmp911 = $tmp909 <= $tmp910;
frost$core$Bit $tmp912 = (frost$core$Bit) {$tmp911};
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block83; else goto block84;
block87:;
int64_t $tmp914 = $tmp904.value;
int64_t $tmp915 = $tmp905.value;
bool $tmp916 = $tmp914 < $tmp915;
frost$core$Bit $tmp917 = (frost$core$Bit) {$tmp916};
bool $tmp918 = $tmp917.value;
if ($tmp918) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp919 = *(&local19);
frost$core$Int $tmp920 = *(&local20);
frost$core$Int64 $tmp921 = frost$core$Int64$init$frost$core$Int($tmp920);
int64_t $tmp922 = $tmp921.value;
$tmp919[$tmp922] = $tmp897;
frost$core$Int $tmp923 = *(&local20);
int64_t $tmp924 = $tmp905.value;
int64_t $tmp925 = $tmp923.value;
int64_t $tmp926 = $tmp924 - $tmp925;
frost$core$Int $tmp927 = (frost$core$Int) {$tmp926};
if ($tmp907) goto block89; else goto block90;
block89:;
int64_t $tmp928 = $tmp927.value;
int64_t $tmp929 = $tmp908.value;
bool $tmp930 = $tmp928 >= $tmp929;
frost$core$Bit $tmp931 = (frost$core$Bit) {$tmp930};
bool $tmp932 = $tmp931.value;
if ($tmp932) goto block88; else goto block84;
block90:;
int64_t $tmp933 = $tmp927.value;
int64_t $tmp934 = $tmp908.value;
bool $tmp935 = $tmp933 > $tmp934;
frost$core$Bit $tmp936 = (frost$core$Bit) {$tmp935};
bool $tmp937 = $tmp936.value;
if ($tmp937) goto block88; else goto block84;
block88:;
int64_t $tmp938 = $tmp923.value;
int64_t $tmp939 = $tmp908.value;
int64_t $tmp940 = $tmp938 + $tmp939;
frost$core$Int $tmp941 = (frost$core$Int) {$tmp940};
*(&local20) = $tmp941;
goto block83;
block84:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp942 = *(&local19);
int64_t $tmp943 = $tmp895.value;
$tmp894[$tmp943] = $tmp942;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:101
frost$core$Int** $tmp944 = *(&local0);
frost$core$Int64 $tmp945 = (frost$core$Int64) {47u};
int64_t $tmp946 = $tmp945.value;
frost$core$Int* $tmp947 = $tmp944[$tmp946];
frost$core$Int64 $tmp948 = (frost$core$Int64) {1u};
frost$core$Int $tmp949 = (frost$core$Int) {10u};
int64_t $tmp950 = $tmp948.value;
$tmp947[$tmp950] = $tmp949;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:102
frost$core$Int** $tmp951 = *(&local0);
frost$core$Int64 $tmp952 = (frost$core$Int64) {47u};
int64_t $tmp953 = $tmp952.value;
frost$core$Int* $tmp954 = $tmp951[$tmp953];
frost$core$Int64 $tmp955 = (frost$core$Int64) {14u};
frost$core$Int $tmp956 = (frost$core$Int) {2u};
int64_t $tmp957 = $tmp955.value;
$tmp954[$tmp957] = $tmp956;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:103
frost$core$Int** $tmp958 = *(&local0);
frost$core$Int64 $tmp959 = (frost$core$Int64) {48u};
frost$core$Int $tmp960 = (frost$core$Int) {20u};
frost$core$Int $tmp961 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:103:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp962 = frost$core$Int64$init$frost$core$Int($tmp960);
int64_t $tmp963 = $tmp962.value;
frost$core$Int* $tmp964 = ((frost$core$Int*) frostAlloc($tmp963 * 8));
*(&local21) = $tmp964;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp965 = (frost$core$Int) {0u};
frost$core$Bit $tmp966 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp967 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp965, $tmp960, $tmp966);
frost$core$Int $tmp968 = $tmp967.min;
*(&local22) = $tmp968;
frost$core$Int $tmp969 = $tmp967.max;
frost$core$Bit $tmp970 = $tmp967.inclusive;
bool $tmp971 = $tmp970.value;
frost$core$Int $tmp972 = (frost$core$Int) {1u};
if ($tmp971) goto block95; else goto block96;
block95:;
int64_t $tmp973 = $tmp968.value;
int64_t $tmp974 = $tmp969.value;
bool $tmp975 = $tmp973 <= $tmp974;
frost$core$Bit $tmp976 = (frost$core$Bit) {$tmp975};
bool $tmp977 = $tmp976.value;
if ($tmp977) goto block92; else goto block93;
block96:;
int64_t $tmp978 = $tmp968.value;
int64_t $tmp979 = $tmp969.value;
bool $tmp980 = $tmp978 < $tmp979;
frost$core$Bit $tmp981 = (frost$core$Bit) {$tmp980};
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp983 = *(&local21);
frost$core$Int $tmp984 = *(&local22);
frost$core$Int64 $tmp985 = frost$core$Int64$init$frost$core$Int($tmp984);
int64_t $tmp986 = $tmp985.value;
$tmp983[$tmp986] = $tmp961;
frost$core$Int $tmp987 = *(&local22);
int64_t $tmp988 = $tmp969.value;
int64_t $tmp989 = $tmp987.value;
int64_t $tmp990 = $tmp988 - $tmp989;
frost$core$Int $tmp991 = (frost$core$Int) {$tmp990};
if ($tmp971) goto block98; else goto block99;
block98:;
int64_t $tmp992 = $tmp991.value;
int64_t $tmp993 = $tmp972.value;
bool $tmp994 = $tmp992 >= $tmp993;
frost$core$Bit $tmp995 = (frost$core$Bit) {$tmp994};
bool $tmp996 = $tmp995.value;
if ($tmp996) goto block97; else goto block93;
block99:;
int64_t $tmp997 = $tmp991.value;
int64_t $tmp998 = $tmp972.value;
bool $tmp999 = $tmp997 > $tmp998;
frost$core$Bit $tmp1000 = (frost$core$Bit) {$tmp999};
bool $tmp1001 = $tmp1000.value;
if ($tmp1001) goto block97; else goto block93;
block97:;
int64_t $tmp1002 = $tmp987.value;
int64_t $tmp1003 = $tmp972.value;
int64_t $tmp1004 = $tmp1002 + $tmp1003;
frost$core$Int $tmp1005 = (frost$core$Int) {$tmp1004};
*(&local22) = $tmp1005;
goto block92;
block93:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp1006 = *(&local21);
int64_t $tmp1007 = $tmp959.value;
$tmp958[$tmp1007] = $tmp1006;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:104
frost$core$Int** $tmp1008 = *(&local0);
frost$core$Int64 $tmp1009 = (frost$core$Int64) {48u};
int64_t $tmp1010 = $tmp1009.value;
frost$core$Int* $tmp1011 = $tmp1008[$tmp1010];
frost$core$Int64 $tmp1012 = (frost$core$Int64) {1u};
frost$core$Int $tmp1013 = (frost$core$Int) {11u};
int64_t $tmp1014 = $tmp1012.value;
$tmp1011[$tmp1014] = $tmp1013;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:105
frost$core$Int** $tmp1015 = *(&local0);
frost$core$Int64 $tmp1016 = (frost$core$Int64) {48u};
int64_t $tmp1017 = $tmp1016.value;
frost$core$Int* $tmp1018 = $tmp1015[$tmp1017];
frost$core$Int64 $tmp1019 = (frost$core$Int64) {14u};
frost$core$Int $tmp1020 = (frost$core$Int) {2u};
int64_t $tmp1021 = $tmp1019.value;
$tmp1018[$tmp1021] = $tmp1020;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:106
frost$core$Int** $tmp1022 = *(&local0);
frost$core$Int64 $tmp1023 = (frost$core$Int64) {49u};
frost$core$Int** $tmp1024 = *(&local0);
frost$core$Int64 $tmp1025 = (frost$core$Int64) {48u};
int64_t $tmp1026 = $tmp1025.value;
frost$core$Int* $tmp1027 = $tmp1024[$tmp1026];
int64_t $tmp1028 = $tmp1023.value;
$tmp1022[$tmp1028] = $tmp1027;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:107
frost$core$Int** $tmp1029 = *(&local0);
frost$core$Int64 $tmp1030 = (frost$core$Int64) {50u};
frost$core$Int** $tmp1031 = *(&local0);
frost$core$Int64 $tmp1032 = (frost$core$Int64) {48u};
int64_t $tmp1033 = $tmp1032.value;
frost$core$Int* $tmp1034 = $tmp1031[$tmp1033];
int64_t $tmp1035 = $tmp1030.value;
$tmp1029[$tmp1035] = $tmp1034;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:108
frost$core$Int** $tmp1036 = *(&local0);
frost$core$Int64 $tmp1037 = (frost$core$Int64) {51u};
frost$core$Int** $tmp1038 = *(&local0);
frost$core$Int64 $tmp1039 = (frost$core$Int64) {48u};
int64_t $tmp1040 = $tmp1039.value;
frost$core$Int* $tmp1041 = $tmp1038[$tmp1040];
int64_t $tmp1042 = $tmp1037.value;
$tmp1036[$tmp1042] = $tmp1041;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:109
frost$core$Int** $tmp1043 = *(&local0);
frost$core$Int64 $tmp1044 = (frost$core$Int64) {52u};
frost$core$Int** $tmp1045 = *(&local0);
frost$core$Int64 $tmp1046 = (frost$core$Int64) {48u};
int64_t $tmp1047 = $tmp1046.value;
frost$core$Int* $tmp1048 = $tmp1045[$tmp1047];
int64_t $tmp1049 = $tmp1044.value;
$tmp1043[$tmp1049] = $tmp1048;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:110
frost$core$Int** $tmp1050 = *(&local0);
frost$core$Int64 $tmp1051 = (frost$core$Int64) {53u};
frost$core$Int** $tmp1052 = *(&local0);
frost$core$Int64 $tmp1053 = (frost$core$Int64) {48u};
int64_t $tmp1054 = $tmp1053.value;
frost$core$Int* $tmp1055 = $tmp1052[$tmp1054];
int64_t $tmp1056 = $tmp1051.value;
$tmp1050[$tmp1056] = $tmp1055;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:111
frost$core$Int** $tmp1057 = *(&local0);
frost$core$Int64 $tmp1058 = (frost$core$Int64) {54u};
frost$core$Int** $tmp1059 = *(&local0);
frost$core$Int64 $tmp1060 = (frost$core$Int64) {48u};
int64_t $tmp1061 = $tmp1060.value;
frost$core$Int* $tmp1062 = $tmp1059[$tmp1061];
int64_t $tmp1063 = $tmp1058.value;
$tmp1057[$tmp1063] = $tmp1062;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:112
frost$core$Int** $tmp1064 = *(&local0);
frost$core$Int64 $tmp1065 = (frost$core$Int64) {55u};
frost$core$Int** $tmp1066 = *(&local0);
frost$core$Int64 $tmp1067 = (frost$core$Int64) {48u};
int64_t $tmp1068 = $tmp1067.value;
frost$core$Int* $tmp1069 = $tmp1066[$tmp1068];
int64_t $tmp1070 = $tmp1065.value;
$tmp1064[$tmp1070] = $tmp1069;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:113
frost$core$Int** $tmp1071 = *(&local0);
frost$core$Int64 $tmp1072 = (frost$core$Int64) {56u};
frost$core$Int** $tmp1073 = *(&local0);
frost$core$Int64 $tmp1074 = (frost$core$Int64) {48u};
int64_t $tmp1075 = $tmp1074.value;
frost$core$Int* $tmp1076 = $tmp1073[$tmp1075];
int64_t $tmp1077 = $tmp1072.value;
$tmp1071[$tmp1077] = $tmp1076;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:114
frost$core$Int** $tmp1078 = *(&local0);
frost$core$Int64 $tmp1079 = (frost$core$Int64) {57u};
frost$core$Int** $tmp1080 = *(&local0);
frost$core$Int64 $tmp1081 = (frost$core$Int64) {48u};
int64_t $tmp1082 = $tmp1081.value;
frost$core$Int* $tmp1083 = $tmp1080[$tmp1082];
int64_t $tmp1084 = $tmp1079.value;
$tmp1078[$tmp1084] = $tmp1083;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:115
frost$core$Int** $tmp1085 = *(&local0);
frost$core$Int64 $tmp1086 = (frost$core$Int64) {58u};
frost$core$Int** $tmp1087 = *(&local0);
frost$core$Int64 $tmp1088 = (frost$core$Int64) {0u};
int64_t $tmp1089 = $tmp1088.value;
frost$core$Int* $tmp1090 = $tmp1087[$tmp1089];
int64_t $tmp1091 = $tmp1086.value;
$tmp1085[$tmp1091] = $tmp1090;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:116
frost$core$Int** $tmp1092 = *(&local0);
frost$core$Int64 $tmp1093 = (frost$core$Int64) {59u};
frost$core$Int** $tmp1094 = *(&local0);
frost$core$Int64 $tmp1095 = (frost$core$Int64) {0u};
int64_t $tmp1096 = $tmp1095.value;
frost$core$Int* $tmp1097 = $tmp1094[$tmp1096];
int64_t $tmp1098 = $tmp1093.value;
$tmp1092[$tmp1098] = $tmp1097;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:117
frost$core$Int** $tmp1099 = *(&local0);
frost$core$Int64 $tmp1100 = (frost$core$Int64) {60u};
frost$core$Int** $tmp1101 = *(&local0);
frost$core$Int64 $tmp1102 = (frost$core$Int64) {0u};
int64_t $tmp1103 = $tmp1102.value;
frost$core$Int* $tmp1104 = $tmp1101[$tmp1103];
int64_t $tmp1105 = $tmp1100.value;
$tmp1099[$tmp1105] = $tmp1104;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:118
frost$core$Int** $tmp1106 = *(&local0);
frost$core$Int64 $tmp1107 = (frost$core$Int64) {61u};
frost$core$Int** $tmp1108 = *(&local0);
frost$core$Int64 $tmp1109 = (frost$core$Int64) {0u};
int64_t $tmp1110 = $tmp1109.value;
frost$core$Int* $tmp1111 = $tmp1108[$tmp1110];
int64_t $tmp1112 = $tmp1107.value;
$tmp1106[$tmp1112] = $tmp1111;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:119
frost$core$Int** $tmp1113 = *(&local0);
frost$core$Int64 $tmp1114 = (frost$core$Int64) {62u};
frost$core$Int** $tmp1115 = *(&local0);
frost$core$Int64 $tmp1116 = (frost$core$Int64) {0u};
int64_t $tmp1117 = $tmp1116.value;
frost$core$Int* $tmp1118 = $tmp1115[$tmp1117];
int64_t $tmp1119 = $tmp1114.value;
$tmp1113[$tmp1119] = $tmp1118;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:120
frost$core$Int** $tmp1120 = *(&local0);
frost$core$Int64 $tmp1121 = (frost$core$Int64) {63u};
frost$core$Int $tmp1122 = (frost$core$Int) {20u};
frost$core$Int $tmp1123 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:120:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp1124 = frost$core$Int64$init$frost$core$Int($tmp1122);
int64_t $tmp1125 = $tmp1124.value;
frost$core$Int* $tmp1126 = ((frost$core$Int*) frostAlloc($tmp1125 * 8));
*(&local23) = $tmp1126;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp1127 = (frost$core$Int) {0u};
frost$core$Bit $tmp1128 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1129 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1127, $tmp1122, $tmp1128);
frost$core$Int $tmp1130 = $tmp1129.min;
*(&local24) = $tmp1130;
frost$core$Int $tmp1131 = $tmp1129.max;
frost$core$Bit $tmp1132 = $tmp1129.inclusive;
bool $tmp1133 = $tmp1132.value;
frost$core$Int $tmp1134 = (frost$core$Int) {1u};
if ($tmp1133) goto block104; else goto block105;
block104:;
int64_t $tmp1135 = $tmp1130.value;
int64_t $tmp1136 = $tmp1131.value;
bool $tmp1137 = $tmp1135 <= $tmp1136;
frost$core$Bit $tmp1138 = (frost$core$Bit) {$tmp1137};
bool $tmp1139 = $tmp1138.value;
if ($tmp1139) goto block101; else goto block102;
block105:;
int64_t $tmp1140 = $tmp1130.value;
int64_t $tmp1141 = $tmp1131.value;
bool $tmp1142 = $tmp1140 < $tmp1141;
frost$core$Bit $tmp1143 = (frost$core$Bit) {$tmp1142};
bool $tmp1144 = $tmp1143.value;
if ($tmp1144) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp1145 = *(&local23);
frost$core$Int $tmp1146 = *(&local24);
frost$core$Int64 $tmp1147 = frost$core$Int64$init$frost$core$Int($tmp1146);
int64_t $tmp1148 = $tmp1147.value;
$tmp1145[$tmp1148] = $tmp1123;
frost$core$Int $tmp1149 = *(&local24);
int64_t $tmp1150 = $tmp1131.value;
int64_t $tmp1151 = $tmp1149.value;
int64_t $tmp1152 = $tmp1150 - $tmp1151;
frost$core$Int $tmp1153 = (frost$core$Int) {$tmp1152};
if ($tmp1133) goto block107; else goto block108;
block107:;
int64_t $tmp1154 = $tmp1153.value;
int64_t $tmp1155 = $tmp1134.value;
bool $tmp1156 = $tmp1154 >= $tmp1155;
frost$core$Bit $tmp1157 = (frost$core$Bit) {$tmp1156};
bool $tmp1158 = $tmp1157.value;
if ($tmp1158) goto block106; else goto block102;
block108:;
int64_t $tmp1159 = $tmp1153.value;
int64_t $tmp1160 = $tmp1134.value;
bool $tmp1161 = $tmp1159 > $tmp1160;
frost$core$Bit $tmp1162 = (frost$core$Bit) {$tmp1161};
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block106; else goto block102;
block106:;
int64_t $tmp1164 = $tmp1149.value;
int64_t $tmp1165 = $tmp1134.value;
int64_t $tmp1166 = $tmp1164 + $tmp1165;
frost$core$Int $tmp1167 = (frost$core$Int) {$tmp1166};
*(&local24) = $tmp1167;
goto block101;
block102:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp1168 = *(&local23);
int64_t $tmp1169 = $tmp1121.value;
$tmp1120[$tmp1169] = $tmp1168;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:121
frost$core$Int** $tmp1170 = *(&local0);
frost$core$Int64 $tmp1171 = (frost$core$Int64) {63u};
int64_t $tmp1172 = $tmp1171.value;
frost$core$Int* $tmp1173 = $tmp1170[$tmp1172];
frost$core$Int64 $tmp1174 = (frost$core$Int64) {1u};
frost$core$Int $tmp1175 = (frost$core$Int) {12u};
int64_t $tmp1176 = $tmp1174.value;
$tmp1173[$tmp1176] = $tmp1175;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:122
frost$core$Int** $tmp1177 = *(&local0);
frost$core$Int64 $tmp1178 = (frost$core$Int64) {63u};
int64_t $tmp1179 = $tmp1178.value;
frost$core$Int* $tmp1180 = $tmp1177[$tmp1179];
frost$core$Int64 $tmp1181 = (frost$core$Int64) {14u};
frost$core$Int $tmp1182 = (frost$core$Int) {2u};
int64_t $tmp1183 = $tmp1181.value;
$tmp1180[$tmp1183] = $tmp1182;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:123
frost$core$Int** $tmp1184 = *(&local0);
frost$core$Int64 $tmp1185 = (frost$core$Int64) {64u};
frost$core$Int** $tmp1186 = *(&local0);
frost$core$Int64 $tmp1187 = (frost$core$Int64) {0u};
int64_t $tmp1188 = $tmp1187.value;
frost$core$Int* $tmp1189 = $tmp1186[$tmp1188];
int64_t $tmp1190 = $tmp1185.value;
$tmp1184[$tmp1190] = $tmp1189;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:124
frost$core$Int** $tmp1191 = *(&local0);
frost$core$Int64 $tmp1192 = (frost$core$Int64) {65u};
frost$core$Int** $tmp1193 = *(&local0);
frost$core$Int64 $tmp1194 = (frost$core$Int64) {0u};
int64_t $tmp1195 = $tmp1194.value;
frost$core$Int* $tmp1196 = $tmp1193[$tmp1195];
int64_t $tmp1197 = $tmp1192.value;
$tmp1191[$tmp1197] = $tmp1196;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:125
frost$core$Int** $tmp1198 = *(&local0);
frost$core$Int64 $tmp1199 = (frost$core$Int64) {66u};
frost$core$Int** $tmp1200 = *(&local0);
frost$core$Int64 $tmp1201 = (frost$core$Int64) {0u};
int64_t $tmp1202 = $tmp1201.value;
frost$core$Int* $tmp1203 = $tmp1200[$tmp1202];
int64_t $tmp1204 = $tmp1199.value;
$tmp1198[$tmp1204] = $tmp1203;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:126
frost$core$Int** $tmp1205 = *(&local0);
frost$core$Int64 $tmp1206 = (frost$core$Int64) {67u};
frost$core$Int** $tmp1207 = *(&local0);
frost$core$Int64 $tmp1208 = (frost$core$Int64) {0u};
int64_t $tmp1209 = $tmp1208.value;
frost$core$Int* $tmp1210 = $tmp1207[$tmp1209];
int64_t $tmp1211 = $tmp1206.value;
$tmp1205[$tmp1211] = $tmp1210;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:127
frost$core$Int** $tmp1212 = *(&local0);
frost$core$Int64 $tmp1213 = (frost$core$Int64) {68u};
frost$core$Int** $tmp1214 = *(&local0);
frost$core$Int64 $tmp1215 = (frost$core$Int64) {0u};
int64_t $tmp1216 = $tmp1215.value;
frost$core$Int* $tmp1217 = $tmp1214[$tmp1216];
int64_t $tmp1218 = $tmp1213.value;
$tmp1212[$tmp1218] = $tmp1217;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:128
frost$core$Int** $tmp1219 = *(&local0);
frost$core$Int64 $tmp1220 = (frost$core$Int64) {69u};
frost$core$Int** $tmp1221 = *(&local0);
frost$core$Int64 $tmp1222 = (frost$core$Int64) {0u};
int64_t $tmp1223 = $tmp1222.value;
frost$core$Int* $tmp1224 = $tmp1221[$tmp1223];
int64_t $tmp1225 = $tmp1220.value;
$tmp1219[$tmp1225] = $tmp1224;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:129
frost$core$Int** $tmp1226 = *(&local0);
frost$core$Int64 $tmp1227 = (frost$core$Int64) {70u};
frost$core$Int** $tmp1228 = *(&local0);
frost$core$Int64 $tmp1229 = (frost$core$Int64) {0u};
int64_t $tmp1230 = $tmp1229.value;
frost$core$Int* $tmp1231 = $tmp1228[$tmp1230];
int64_t $tmp1232 = $tmp1227.value;
$tmp1226[$tmp1232] = $tmp1231;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:130
frost$core$Int** $tmp1233 = *(&local0);
frost$core$Int64 $tmp1234 = (frost$core$Int64) {71u};
frost$core$Int** $tmp1235 = *(&local0);
frost$core$Int64 $tmp1236 = (frost$core$Int64) {0u};
int64_t $tmp1237 = $tmp1236.value;
frost$core$Int* $tmp1238 = $tmp1235[$tmp1237];
int64_t $tmp1239 = $tmp1234.value;
$tmp1233[$tmp1239] = $tmp1238;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:131
frost$core$Int** $tmp1240 = *(&local0);
frost$core$Int64 $tmp1241 = (frost$core$Int64) {72u};
frost$core$Int** $tmp1242 = *(&local0);
frost$core$Int64 $tmp1243 = (frost$core$Int64) {0u};
int64_t $tmp1244 = $tmp1243.value;
frost$core$Int* $tmp1245 = $tmp1242[$tmp1244];
int64_t $tmp1246 = $tmp1241.value;
$tmp1240[$tmp1246] = $tmp1245;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:132
frost$core$Int** $tmp1247 = *(&local0);
frost$core$Int64 $tmp1248 = (frost$core$Int64) {73u};
frost$core$Int** $tmp1249 = *(&local0);
frost$core$Int64 $tmp1250 = (frost$core$Int64) {0u};
int64_t $tmp1251 = $tmp1250.value;
frost$core$Int* $tmp1252 = $tmp1249[$tmp1251];
int64_t $tmp1253 = $tmp1248.value;
$tmp1247[$tmp1253] = $tmp1252;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:133
frost$core$Int** $tmp1254 = *(&local0);
frost$core$Int64 $tmp1255 = (frost$core$Int64) {74u};
frost$core$Int** $tmp1256 = *(&local0);
frost$core$Int64 $tmp1257 = (frost$core$Int64) {0u};
int64_t $tmp1258 = $tmp1257.value;
frost$core$Int* $tmp1259 = $tmp1256[$tmp1258];
int64_t $tmp1260 = $tmp1255.value;
$tmp1254[$tmp1260] = $tmp1259;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:134
frost$core$Int** $tmp1261 = *(&local0);
frost$core$Int64 $tmp1262 = (frost$core$Int64) {75u};
frost$core$Int** $tmp1263 = *(&local0);
frost$core$Int64 $tmp1264 = (frost$core$Int64) {0u};
int64_t $tmp1265 = $tmp1264.value;
frost$core$Int* $tmp1266 = $tmp1263[$tmp1265];
int64_t $tmp1267 = $tmp1262.value;
$tmp1261[$tmp1267] = $tmp1266;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:135
frost$core$Int** $tmp1268 = *(&local0);
frost$core$Int64 $tmp1269 = (frost$core$Int64) {76u};
frost$core$Int** $tmp1270 = *(&local0);
frost$core$Int64 $tmp1271 = (frost$core$Int64) {0u};
int64_t $tmp1272 = $tmp1271.value;
frost$core$Int* $tmp1273 = $tmp1270[$tmp1272];
int64_t $tmp1274 = $tmp1269.value;
$tmp1268[$tmp1274] = $tmp1273;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:136
frost$core$Int** $tmp1275 = *(&local0);
frost$core$Int64 $tmp1276 = (frost$core$Int64) {77u};
frost$core$Int** $tmp1277 = *(&local0);
frost$core$Int64 $tmp1278 = (frost$core$Int64) {0u};
int64_t $tmp1279 = $tmp1278.value;
frost$core$Int* $tmp1280 = $tmp1277[$tmp1279];
int64_t $tmp1281 = $tmp1276.value;
$tmp1275[$tmp1281] = $tmp1280;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:137
frost$core$Int** $tmp1282 = *(&local0);
frost$core$Int64 $tmp1283 = (frost$core$Int64) {78u};
frost$core$Int** $tmp1284 = *(&local0);
frost$core$Int64 $tmp1285 = (frost$core$Int64) {0u};
int64_t $tmp1286 = $tmp1285.value;
frost$core$Int* $tmp1287 = $tmp1284[$tmp1286];
int64_t $tmp1288 = $tmp1283.value;
$tmp1282[$tmp1288] = $tmp1287;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:138
frost$core$Int** $tmp1289 = *(&local0);
frost$core$Int64 $tmp1290 = (frost$core$Int64) {79u};
frost$core$Int** $tmp1291 = *(&local0);
frost$core$Int64 $tmp1292 = (frost$core$Int64) {0u};
int64_t $tmp1293 = $tmp1292.value;
frost$core$Int* $tmp1294 = $tmp1291[$tmp1293];
int64_t $tmp1295 = $tmp1290.value;
$tmp1289[$tmp1295] = $tmp1294;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:139
frost$core$Int** $tmp1296 = *(&local0);
frost$core$Int64 $tmp1297 = (frost$core$Int64) {80u};
frost$core$Int** $tmp1298 = *(&local0);
frost$core$Int64 $tmp1299 = (frost$core$Int64) {0u};
int64_t $tmp1300 = $tmp1299.value;
frost$core$Int* $tmp1301 = $tmp1298[$tmp1300];
int64_t $tmp1302 = $tmp1297.value;
$tmp1296[$tmp1302] = $tmp1301;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:140
frost$core$Int** $tmp1303 = *(&local0);
frost$core$Int64 $tmp1304 = (frost$core$Int64) {81u};
frost$core$Int** $tmp1305 = *(&local0);
frost$core$Int64 $tmp1306 = (frost$core$Int64) {0u};
int64_t $tmp1307 = $tmp1306.value;
frost$core$Int* $tmp1308 = $tmp1305[$tmp1307];
int64_t $tmp1309 = $tmp1304.value;
$tmp1303[$tmp1309] = $tmp1308;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:141
frost$core$Int** $tmp1310 = *(&local0);
frost$core$Int64 $tmp1311 = (frost$core$Int64) {82u};
frost$core$Int** $tmp1312 = *(&local0);
frost$core$Int64 $tmp1313 = (frost$core$Int64) {0u};
int64_t $tmp1314 = $tmp1313.value;
frost$core$Int* $tmp1315 = $tmp1312[$tmp1314];
int64_t $tmp1316 = $tmp1311.value;
$tmp1310[$tmp1316] = $tmp1315;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:142
frost$core$Int** $tmp1317 = *(&local0);
frost$core$Int64 $tmp1318 = (frost$core$Int64) {83u};
frost$core$Int** $tmp1319 = *(&local0);
frost$core$Int64 $tmp1320 = (frost$core$Int64) {0u};
int64_t $tmp1321 = $tmp1320.value;
frost$core$Int* $tmp1322 = $tmp1319[$tmp1321];
int64_t $tmp1323 = $tmp1318.value;
$tmp1317[$tmp1323] = $tmp1322;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:143
frost$core$Int** $tmp1324 = *(&local0);
frost$core$Int64 $tmp1325 = (frost$core$Int64) {84u};
frost$core$Int** $tmp1326 = *(&local0);
frost$core$Int64 $tmp1327 = (frost$core$Int64) {0u};
int64_t $tmp1328 = $tmp1327.value;
frost$core$Int* $tmp1329 = $tmp1326[$tmp1328];
int64_t $tmp1330 = $tmp1325.value;
$tmp1324[$tmp1330] = $tmp1329;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:144
frost$core$Int** $tmp1331 = *(&local0);
frost$core$Int64 $tmp1332 = (frost$core$Int64) {85u};
frost$core$Int** $tmp1333 = *(&local0);
frost$core$Int64 $tmp1334 = (frost$core$Int64) {0u};
int64_t $tmp1335 = $tmp1334.value;
frost$core$Int* $tmp1336 = $tmp1333[$tmp1335];
int64_t $tmp1337 = $tmp1332.value;
$tmp1331[$tmp1337] = $tmp1336;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:145
frost$core$Int** $tmp1338 = *(&local0);
frost$core$Int64 $tmp1339 = (frost$core$Int64) {86u};
frost$core$Int** $tmp1340 = *(&local0);
frost$core$Int64 $tmp1341 = (frost$core$Int64) {0u};
int64_t $tmp1342 = $tmp1341.value;
frost$core$Int* $tmp1343 = $tmp1340[$tmp1342];
int64_t $tmp1344 = $tmp1339.value;
$tmp1338[$tmp1344] = $tmp1343;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:146
frost$core$Int** $tmp1345 = *(&local0);
frost$core$Int64 $tmp1346 = (frost$core$Int64) {87u};
frost$core$Int** $tmp1347 = *(&local0);
frost$core$Int64 $tmp1348 = (frost$core$Int64) {0u};
int64_t $tmp1349 = $tmp1348.value;
frost$core$Int* $tmp1350 = $tmp1347[$tmp1349];
int64_t $tmp1351 = $tmp1346.value;
$tmp1345[$tmp1351] = $tmp1350;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:147
frost$core$Int** $tmp1352 = *(&local0);
frost$core$Int64 $tmp1353 = (frost$core$Int64) {88u};
frost$core$Int** $tmp1354 = *(&local0);
frost$core$Int64 $tmp1355 = (frost$core$Int64) {0u};
int64_t $tmp1356 = $tmp1355.value;
frost$core$Int* $tmp1357 = $tmp1354[$tmp1356];
int64_t $tmp1358 = $tmp1353.value;
$tmp1352[$tmp1358] = $tmp1357;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:148
frost$core$Int** $tmp1359 = *(&local0);
frost$core$Int64 $tmp1360 = (frost$core$Int64) {89u};
frost$core$Int** $tmp1361 = *(&local0);
frost$core$Int64 $tmp1362 = (frost$core$Int64) {0u};
int64_t $tmp1363 = $tmp1362.value;
frost$core$Int* $tmp1364 = $tmp1361[$tmp1363];
int64_t $tmp1365 = $tmp1360.value;
$tmp1359[$tmp1365] = $tmp1364;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:149
frost$core$Int** $tmp1366 = *(&local0);
frost$core$Int64 $tmp1367 = (frost$core$Int64) {90u};
frost$core$Int** $tmp1368 = *(&local0);
frost$core$Int64 $tmp1369 = (frost$core$Int64) {0u};
int64_t $tmp1370 = $tmp1369.value;
frost$core$Int* $tmp1371 = $tmp1368[$tmp1370];
int64_t $tmp1372 = $tmp1367.value;
$tmp1366[$tmp1372] = $tmp1371;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:150
frost$core$Int** $tmp1373 = *(&local0);
frost$core$Int64 $tmp1374 = (frost$core$Int64) {91u};
frost$core$Int $tmp1375 = (frost$core$Int) {20u};
frost$core$Int $tmp1376 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:150:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp1377 = frost$core$Int64$init$frost$core$Int($tmp1375);
int64_t $tmp1378 = $tmp1377.value;
frost$core$Int* $tmp1379 = ((frost$core$Int*) frostAlloc($tmp1378 * 8));
*(&local25) = $tmp1379;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp1380 = (frost$core$Int) {0u};
frost$core$Bit $tmp1381 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1382 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1380, $tmp1375, $tmp1381);
frost$core$Int $tmp1383 = $tmp1382.min;
*(&local26) = $tmp1383;
frost$core$Int $tmp1384 = $tmp1382.max;
frost$core$Bit $tmp1385 = $tmp1382.inclusive;
bool $tmp1386 = $tmp1385.value;
frost$core$Int $tmp1387 = (frost$core$Int) {1u};
if ($tmp1386) goto block113; else goto block114;
block113:;
int64_t $tmp1388 = $tmp1383.value;
int64_t $tmp1389 = $tmp1384.value;
bool $tmp1390 = $tmp1388 <= $tmp1389;
frost$core$Bit $tmp1391 = (frost$core$Bit) {$tmp1390};
bool $tmp1392 = $tmp1391.value;
if ($tmp1392) goto block110; else goto block111;
block114:;
int64_t $tmp1393 = $tmp1383.value;
int64_t $tmp1394 = $tmp1384.value;
bool $tmp1395 = $tmp1393 < $tmp1394;
frost$core$Bit $tmp1396 = (frost$core$Bit) {$tmp1395};
bool $tmp1397 = $tmp1396.value;
if ($tmp1397) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp1398 = *(&local25);
frost$core$Int $tmp1399 = *(&local26);
frost$core$Int64 $tmp1400 = frost$core$Int64$init$frost$core$Int($tmp1399);
int64_t $tmp1401 = $tmp1400.value;
$tmp1398[$tmp1401] = $tmp1376;
frost$core$Int $tmp1402 = *(&local26);
int64_t $tmp1403 = $tmp1384.value;
int64_t $tmp1404 = $tmp1402.value;
int64_t $tmp1405 = $tmp1403 - $tmp1404;
frost$core$Int $tmp1406 = (frost$core$Int) {$tmp1405};
if ($tmp1386) goto block116; else goto block117;
block116:;
int64_t $tmp1407 = $tmp1406.value;
int64_t $tmp1408 = $tmp1387.value;
bool $tmp1409 = $tmp1407 >= $tmp1408;
frost$core$Bit $tmp1410 = (frost$core$Bit) {$tmp1409};
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block115; else goto block111;
block117:;
int64_t $tmp1412 = $tmp1406.value;
int64_t $tmp1413 = $tmp1387.value;
bool $tmp1414 = $tmp1412 > $tmp1413;
frost$core$Bit $tmp1415 = (frost$core$Bit) {$tmp1414};
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block115; else goto block111;
block115:;
int64_t $tmp1417 = $tmp1402.value;
int64_t $tmp1418 = $tmp1387.value;
int64_t $tmp1419 = $tmp1417 + $tmp1418;
frost$core$Int $tmp1420 = (frost$core$Int) {$tmp1419};
*(&local26) = $tmp1420;
goto block110;
block111:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp1421 = *(&local25);
int64_t $tmp1422 = $tmp1374.value;
$tmp1373[$tmp1422] = $tmp1421;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:151
frost$core$Int** $tmp1423 = *(&local0);
frost$core$Int64 $tmp1424 = (frost$core$Int64) {91u};
int64_t $tmp1425 = $tmp1424.value;
frost$core$Int* $tmp1426 = $tmp1423[$tmp1425];
frost$core$Int64 $tmp1427 = (frost$core$Int64) {1u};
frost$core$Int $tmp1428 = (frost$core$Int) {13u};
int64_t $tmp1429 = $tmp1427.value;
$tmp1426[$tmp1429] = $tmp1428;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:152
frost$core$Int** $tmp1430 = *(&local0);
frost$core$Int64 $tmp1431 = (frost$core$Int64) {91u};
int64_t $tmp1432 = $tmp1431.value;
frost$core$Int* $tmp1433 = $tmp1430[$tmp1432];
frost$core$Int64 $tmp1434 = (frost$core$Int64) {14u};
frost$core$Int $tmp1435 = (frost$core$Int) {2u};
int64_t $tmp1436 = $tmp1434.value;
$tmp1433[$tmp1436] = $tmp1435;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:153
frost$core$Int** $tmp1437 = *(&local0);
frost$core$Int64 $tmp1438 = (frost$core$Int64) {92u};
frost$core$Int $tmp1439 = (frost$core$Int) {20u};
frost$core$Int $tmp1440 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:153:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp1441 = frost$core$Int64$init$frost$core$Int($tmp1439);
int64_t $tmp1442 = $tmp1441.value;
frost$core$Int* $tmp1443 = ((frost$core$Int*) frostAlloc($tmp1442 * 8));
*(&local27) = $tmp1443;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp1444 = (frost$core$Int) {0u};
frost$core$Bit $tmp1445 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1446 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1444, $tmp1439, $tmp1445);
frost$core$Int $tmp1447 = $tmp1446.min;
*(&local28) = $tmp1447;
frost$core$Int $tmp1448 = $tmp1446.max;
frost$core$Bit $tmp1449 = $tmp1446.inclusive;
bool $tmp1450 = $tmp1449.value;
frost$core$Int $tmp1451 = (frost$core$Int) {1u};
if ($tmp1450) goto block122; else goto block123;
block122:;
int64_t $tmp1452 = $tmp1447.value;
int64_t $tmp1453 = $tmp1448.value;
bool $tmp1454 = $tmp1452 <= $tmp1453;
frost$core$Bit $tmp1455 = (frost$core$Bit) {$tmp1454};
bool $tmp1456 = $tmp1455.value;
if ($tmp1456) goto block119; else goto block120;
block123:;
int64_t $tmp1457 = $tmp1447.value;
int64_t $tmp1458 = $tmp1448.value;
bool $tmp1459 = $tmp1457 < $tmp1458;
frost$core$Bit $tmp1460 = (frost$core$Bit) {$tmp1459};
bool $tmp1461 = $tmp1460.value;
if ($tmp1461) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp1462 = *(&local27);
frost$core$Int $tmp1463 = *(&local28);
frost$core$Int64 $tmp1464 = frost$core$Int64$init$frost$core$Int($tmp1463);
int64_t $tmp1465 = $tmp1464.value;
$tmp1462[$tmp1465] = $tmp1440;
frost$core$Int $tmp1466 = *(&local28);
int64_t $tmp1467 = $tmp1448.value;
int64_t $tmp1468 = $tmp1466.value;
int64_t $tmp1469 = $tmp1467 - $tmp1468;
frost$core$Int $tmp1470 = (frost$core$Int) {$tmp1469};
if ($tmp1450) goto block125; else goto block126;
block125:;
int64_t $tmp1471 = $tmp1470.value;
int64_t $tmp1472 = $tmp1451.value;
bool $tmp1473 = $tmp1471 >= $tmp1472;
frost$core$Bit $tmp1474 = (frost$core$Bit) {$tmp1473};
bool $tmp1475 = $tmp1474.value;
if ($tmp1475) goto block124; else goto block120;
block126:;
int64_t $tmp1476 = $tmp1470.value;
int64_t $tmp1477 = $tmp1451.value;
bool $tmp1478 = $tmp1476 > $tmp1477;
frost$core$Bit $tmp1479 = (frost$core$Bit) {$tmp1478};
bool $tmp1480 = $tmp1479.value;
if ($tmp1480) goto block124; else goto block120;
block124:;
int64_t $tmp1481 = $tmp1466.value;
int64_t $tmp1482 = $tmp1451.value;
int64_t $tmp1483 = $tmp1481 + $tmp1482;
frost$core$Int $tmp1484 = (frost$core$Int) {$tmp1483};
*(&local28) = $tmp1484;
goto block119;
block120:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp1485 = *(&local27);
int64_t $tmp1486 = $tmp1438.value;
$tmp1437[$tmp1486] = $tmp1485;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:154
frost$core$Int** $tmp1487 = *(&local0);
frost$core$Int64 $tmp1488 = (frost$core$Int64) {92u};
int64_t $tmp1489 = $tmp1488.value;
frost$core$Int* $tmp1490 = $tmp1487[$tmp1489];
frost$core$Int64 $tmp1491 = (frost$core$Int64) {1u};
frost$core$Int $tmp1492 = (frost$core$Int) {14u};
int64_t $tmp1493 = $tmp1491.value;
$tmp1490[$tmp1493] = $tmp1492;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:155
frost$core$Int** $tmp1494 = *(&local0);
frost$core$Int64 $tmp1495 = (frost$core$Int64) {92u};
int64_t $tmp1496 = $tmp1495.value;
frost$core$Int* $tmp1497 = $tmp1494[$tmp1496];
frost$core$Int64 $tmp1498 = (frost$core$Int64) {14u};
frost$core$Int $tmp1499 = (frost$core$Int) {2u};
int64_t $tmp1500 = $tmp1498.value;
$tmp1497[$tmp1500] = $tmp1499;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:156
frost$core$Int** $tmp1501 = *(&local0);
frost$core$Int64 $tmp1502 = (frost$core$Int64) {93u};
frost$core$Int $tmp1503 = (frost$core$Int) {20u};
frost$core$Int $tmp1504 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:156:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp1505 = frost$core$Int64$init$frost$core$Int($tmp1503);
int64_t $tmp1506 = $tmp1505.value;
frost$core$Int* $tmp1507 = ((frost$core$Int*) frostAlloc($tmp1506 * 8));
*(&local29) = $tmp1507;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp1508 = (frost$core$Int) {0u};
frost$core$Bit $tmp1509 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1510 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1508, $tmp1503, $tmp1509);
frost$core$Int $tmp1511 = $tmp1510.min;
*(&local30) = $tmp1511;
frost$core$Int $tmp1512 = $tmp1510.max;
frost$core$Bit $tmp1513 = $tmp1510.inclusive;
bool $tmp1514 = $tmp1513.value;
frost$core$Int $tmp1515 = (frost$core$Int) {1u};
if ($tmp1514) goto block131; else goto block132;
block131:;
int64_t $tmp1516 = $tmp1511.value;
int64_t $tmp1517 = $tmp1512.value;
bool $tmp1518 = $tmp1516 <= $tmp1517;
frost$core$Bit $tmp1519 = (frost$core$Bit) {$tmp1518};
bool $tmp1520 = $tmp1519.value;
if ($tmp1520) goto block128; else goto block129;
block132:;
int64_t $tmp1521 = $tmp1511.value;
int64_t $tmp1522 = $tmp1512.value;
bool $tmp1523 = $tmp1521 < $tmp1522;
frost$core$Bit $tmp1524 = (frost$core$Bit) {$tmp1523};
bool $tmp1525 = $tmp1524.value;
if ($tmp1525) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp1526 = *(&local29);
frost$core$Int $tmp1527 = *(&local30);
frost$core$Int64 $tmp1528 = frost$core$Int64$init$frost$core$Int($tmp1527);
int64_t $tmp1529 = $tmp1528.value;
$tmp1526[$tmp1529] = $tmp1504;
frost$core$Int $tmp1530 = *(&local30);
int64_t $tmp1531 = $tmp1512.value;
int64_t $tmp1532 = $tmp1530.value;
int64_t $tmp1533 = $tmp1531 - $tmp1532;
frost$core$Int $tmp1534 = (frost$core$Int) {$tmp1533};
if ($tmp1514) goto block134; else goto block135;
block134:;
int64_t $tmp1535 = $tmp1534.value;
int64_t $tmp1536 = $tmp1515.value;
bool $tmp1537 = $tmp1535 >= $tmp1536;
frost$core$Bit $tmp1538 = (frost$core$Bit) {$tmp1537};
bool $tmp1539 = $tmp1538.value;
if ($tmp1539) goto block133; else goto block129;
block135:;
int64_t $tmp1540 = $tmp1534.value;
int64_t $tmp1541 = $tmp1515.value;
bool $tmp1542 = $tmp1540 > $tmp1541;
frost$core$Bit $tmp1543 = (frost$core$Bit) {$tmp1542};
bool $tmp1544 = $tmp1543.value;
if ($tmp1544) goto block133; else goto block129;
block133:;
int64_t $tmp1545 = $tmp1530.value;
int64_t $tmp1546 = $tmp1515.value;
int64_t $tmp1547 = $tmp1545 + $tmp1546;
frost$core$Int $tmp1548 = (frost$core$Int) {$tmp1547};
*(&local30) = $tmp1548;
goto block128;
block129:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp1549 = *(&local29);
int64_t $tmp1550 = $tmp1502.value;
$tmp1501[$tmp1550] = $tmp1549;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:157
frost$core$Int** $tmp1551 = *(&local0);
frost$core$Int64 $tmp1552 = (frost$core$Int64) {93u};
int64_t $tmp1553 = $tmp1552.value;
frost$core$Int* $tmp1554 = $tmp1551[$tmp1553];
frost$core$Int64 $tmp1555 = (frost$core$Int64) {1u};
frost$core$Int $tmp1556 = (frost$core$Int) {15u};
int64_t $tmp1557 = $tmp1555.value;
$tmp1554[$tmp1557] = $tmp1556;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:158
frost$core$Int** $tmp1558 = *(&local0);
frost$core$Int64 $tmp1559 = (frost$core$Int64) {93u};
int64_t $tmp1560 = $tmp1559.value;
frost$core$Int* $tmp1561 = $tmp1558[$tmp1560];
frost$core$Int64 $tmp1562 = (frost$core$Int64) {14u};
frost$core$Int $tmp1563 = (frost$core$Int) {2u};
int64_t $tmp1564 = $tmp1562.value;
$tmp1561[$tmp1564] = $tmp1563;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:159
frost$core$Int** $tmp1565 = *(&local0);
frost$core$Int64 $tmp1566 = (frost$core$Int64) {94u};
frost$core$Int $tmp1567 = (frost$core$Int) {20u};
frost$core$Int $tmp1568 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:159:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp1569 = frost$core$Int64$init$frost$core$Int($tmp1567);
int64_t $tmp1570 = $tmp1569.value;
frost$core$Int* $tmp1571 = ((frost$core$Int*) frostAlloc($tmp1570 * 8));
*(&local31) = $tmp1571;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp1572 = (frost$core$Int) {0u};
frost$core$Bit $tmp1573 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1574 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1572, $tmp1567, $tmp1573);
frost$core$Int $tmp1575 = $tmp1574.min;
*(&local32) = $tmp1575;
frost$core$Int $tmp1576 = $tmp1574.max;
frost$core$Bit $tmp1577 = $tmp1574.inclusive;
bool $tmp1578 = $tmp1577.value;
frost$core$Int $tmp1579 = (frost$core$Int) {1u};
if ($tmp1578) goto block140; else goto block141;
block140:;
int64_t $tmp1580 = $tmp1575.value;
int64_t $tmp1581 = $tmp1576.value;
bool $tmp1582 = $tmp1580 <= $tmp1581;
frost$core$Bit $tmp1583 = (frost$core$Bit) {$tmp1582};
bool $tmp1584 = $tmp1583.value;
if ($tmp1584) goto block137; else goto block138;
block141:;
int64_t $tmp1585 = $tmp1575.value;
int64_t $tmp1586 = $tmp1576.value;
bool $tmp1587 = $tmp1585 < $tmp1586;
frost$core$Bit $tmp1588 = (frost$core$Bit) {$tmp1587};
bool $tmp1589 = $tmp1588.value;
if ($tmp1589) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp1590 = *(&local31);
frost$core$Int $tmp1591 = *(&local32);
frost$core$Int64 $tmp1592 = frost$core$Int64$init$frost$core$Int($tmp1591);
int64_t $tmp1593 = $tmp1592.value;
$tmp1590[$tmp1593] = $tmp1568;
frost$core$Int $tmp1594 = *(&local32);
int64_t $tmp1595 = $tmp1576.value;
int64_t $tmp1596 = $tmp1594.value;
int64_t $tmp1597 = $tmp1595 - $tmp1596;
frost$core$Int $tmp1598 = (frost$core$Int) {$tmp1597};
if ($tmp1578) goto block143; else goto block144;
block143:;
int64_t $tmp1599 = $tmp1598.value;
int64_t $tmp1600 = $tmp1579.value;
bool $tmp1601 = $tmp1599 >= $tmp1600;
frost$core$Bit $tmp1602 = (frost$core$Bit) {$tmp1601};
bool $tmp1603 = $tmp1602.value;
if ($tmp1603) goto block142; else goto block138;
block144:;
int64_t $tmp1604 = $tmp1598.value;
int64_t $tmp1605 = $tmp1579.value;
bool $tmp1606 = $tmp1604 > $tmp1605;
frost$core$Bit $tmp1607 = (frost$core$Bit) {$tmp1606};
bool $tmp1608 = $tmp1607.value;
if ($tmp1608) goto block142; else goto block138;
block142:;
int64_t $tmp1609 = $tmp1594.value;
int64_t $tmp1610 = $tmp1579.value;
int64_t $tmp1611 = $tmp1609 + $tmp1610;
frost$core$Int $tmp1612 = (frost$core$Int) {$tmp1611};
*(&local32) = $tmp1612;
goto block137;
block138:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp1613 = *(&local31);
int64_t $tmp1614 = $tmp1566.value;
$tmp1565[$tmp1614] = $tmp1613;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:160
frost$core$Int** $tmp1615 = *(&local0);
frost$core$Int64 $tmp1616 = (frost$core$Int64) {94u};
int64_t $tmp1617 = $tmp1616.value;
frost$core$Int* $tmp1618 = $tmp1615[$tmp1617];
frost$core$Int64 $tmp1619 = (frost$core$Int64) {1u};
frost$core$Int $tmp1620 = (frost$core$Int) {16u};
int64_t $tmp1621 = $tmp1619.value;
$tmp1618[$tmp1621] = $tmp1620;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:161
frost$core$Int** $tmp1622 = *(&local0);
frost$core$Int64 $tmp1623 = (frost$core$Int64) {94u};
int64_t $tmp1624 = $tmp1623.value;
frost$core$Int* $tmp1625 = $tmp1622[$tmp1624];
frost$core$Int64 $tmp1626 = (frost$core$Int64) {14u};
frost$core$Int $tmp1627 = (frost$core$Int) {2u};
int64_t $tmp1628 = $tmp1626.value;
$tmp1625[$tmp1628] = $tmp1627;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:162
frost$core$Int** $tmp1629 = *(&local0);
frost$core$Int64 $tmp1630 = (frost$core$Int64) {95u};
frost$core$Int** $tmp1631 = *(&local0);
frost$core$Int64 $tmp1632 = (frost$core$Int64) {0u};
int64_t $tmp1633 = $tmp1632.value;
frost$core$Int* $tmp1634 = $tmp1631[$tmp1633];
int64_t $tmp1635 = $tmp1630.value;
$tmp1629[$tmp1635] = $tmp1634;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:163
frost$core$Int** $tmp1636 = *(&local0);
frost$core$Int64 $tmp1637 = (frost$core$Int64) {96u};
frost$core$Int $tmp1638 = (frost$core$Int) {20u};
frost$core$Int $tmp1639 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:163:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp1640 = frost$core$Int64$init$frost$core$Int($tmp1638);
int64_t $tmp1641 = $tmp1640.value;
frost$core$Int* $tmp1642 = ((frost$core$Int*) frostAlloc($tmp1641 * 8));
*(&local33) = $tmp1642;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp1643 = (frost$core$Int) {0u};
frost$core$Bit $tmp1644 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1645 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1643, $tmp1638, $tmp1644);
frost$core$Int $tmp1646 = $tmp1645.min;
*(&local34) = $tmp1646;
frost$core$Int $tmp1647 = $tmp1645.max;
frost$core$Bit $tmp1648 = $tmp1645.inclusive;
bool $tmp1649 = $tmp1648.value;
frost$core$Int $tmp1650 = (frost$core$Int) {1u};
if ($tmp1649) goto block149; else goto block150;
block149:;
int64_t $tmp1651 = $tmp1646.value;
int64_t $tmp1652 = $tmp1647.value;
bool $tmp1653 = $tmp1651 <= $tmp1652;
frost$core$Bit $tmp1654 = (frost$core$Bit) {$tmp1653};
bool $tmp1655 = $tmp1654.value;
if ($tmp1655) goto block146; else goto block147;
block150:;
int64_t $tmp1656 = $tmp1646.value;
int64_t $tmp1657 = $tmp1647.value;
bool $tmp1658 = $tmp1656 < $tmp1657;
frost$core$Bit $tmp1659 = (frost$core$Bit) {$tmp1658};
bool $tmp1660 = $tmp1659.value;
if ($tmp1660) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp1661 = *(&local33);
frost$core$Int $tmp1662 = *(&local34);
frost$core$Int64 $tmp1663 = frost$core$Int64$init$frost$core$Int($tmp1662);
int64_t $tmp1664 = $tmp1663.value;
$tmp1661[$tmp1664] = $tmp1639;
frost$core$Int $tmp1665 = *(&local34);
int64_t $tmp1666 = $tmp1647.value;
int64_t $tmp1667 = $tmp1665.value;
int64_t $tmp1668 = $tmp1666 - $tmp1667;
frost$core$Int $tmp1669 = (frost$core$Int) {$tmp1668};
if ($tmp1649) goto block152; else goto block153;
block152:;
int64_t $tmp1670 = $tmp1669.value;
int64_t $tmp1671 = $tmp1650.value;
bool $tmp1672 = $tmp1670 >= $tmp1671;
frost$core$Bit $tmp1673 = (frost$core$Bit) {$tmp1672};
bool $tmp1674 = $tmp1673.value;
if ($tmp1674) goto block151; else goto block147;
block153:;
int64_t $tmp1675 = $tmp1669.value;
int64_t $tmp1676 = $tmp1650.value;
bool $tmp1677 = $tmp1675 > $tmp1676;
frost$core$Bit $tmp1678 = (frost$core$Bit) {$tmp1677};
bool $tmp1679 = $tmp1678.value;
if ($tmp1679) goto block151; else goto block147;
block151:;
int64_t $tmp1680 = $tmp1665.value;
int64_t $tmp1681 = $tmp1650.value;
int64_t $tmp1682 = $tmp1680 + $tmp1681;
frost$core$Int $tmp1683 = (frost$core$Int) {$tmp1682};
*(&local34) = $tmp1683;
goto block146;
block147:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp1684 = *(&local33);
int64_t $tmp1685 = $tmp1637.value;
$tmp1636[$tmp1685] = $tmp1684;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:164
frost$core$Int** $tmp1686 = *(&local0);
frost$core$Int64 $tmp1687 = (frost$core$Int64) {96u};
int64_t $tmp1688 = $tmp1687.value;
frost$core$Int* $tmp1689 = $tmp1686[$tmp1688];
frost$core$Int64 $tmp1690 = (frost$core$Int64) {1u};
frost$core$Int $tmp1691 = (frost$core$Int) {17u};
int64_t $tmp1692 = $tmp1690.value;
$tmp1689[$tmp1692] = $tmp1691;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:165
frost$core$Int** $tmp1693 = *(&local0);
frost$core$Int64 $tmp1694 = (frost$core$Int64) {96u};
int64_t $tmp1695 = $tmp1694.value;
frost$core$Int* $tmp1696 = $tmp1693[$tmp1695];
frost$core$Int64 $tmp1697 = (frost$core$Int64) {14u};
frost$core$Int $tmp1698 = (frost$core$Int) {2u};
int64_t $tmp1699 = $tmp1697.value;
$tmp1696[$tmp1699] = $tmp1698;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:166
frost$core$Int** $tmp1700 = *(&local0);
frost$core$Int64 $tmp1701 = (frost$core$Int64) {97u};
frost$core$Int** $tmp1702 = *(&local0);
frost$core$Int64 $tmp1703 = (frost$core$Int64) {0u};
int64_t $tmp1704 = $tmp1703.value;
frost$core$Int* $tmp1705 = $tmp1702[$tmp1704];
int64_t $tmp1706 = $tmp1701.value;
$tmp1700[$tmp1706] = $tmp1705;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:167
frost$core$Int** $tmp1707 = *(&local0);
frost$core$Int64 $tmp1708 = (frost$core$Int64) {98u};
frost$core$Int** $tmp1709 = *(&local0);
frost$core$Int64 $tmp1710 = (frost$core$Int64) {0u};
int64_t $tmp1711 = $tmp1710.value;
frost$core$Int* $tmp1712 = $tmp1709[$tmp1711];
int64_t $tmp1713 = $tmp1708.value;
$tmp1707[$tmp1713] = $tmp1712;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:168
frost$core$Int** $tmp1714 = *(&local0);
frost$core$Int64 $tmp1715 = (frost$core$Int64) {99u};
frost$core$Int** $tmp1716 = *(&local0);
frost$core$Int64 $tmp1717 = (frost$core$Int64) {0u};
int64_t $tmp1718 = $tmp1717.value;
frost$core$Int* $tmp1719 = $tmp1716[$tmp1718];
int64_t $tmp1720 = $tmp1715.value;
$tmp1714[$tmp1720] = $tmp1719;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:169
frost$core$Int** $tmp1721 = *(&local0);
frost$core$Int64 $tmp1722 = (frost$core$Int64) {100u};
frost$core$Int** $tmp1723 = *(&local0);
frost$core$Int64 $tmp1724 = (frost$core$Int64) {0u};
int64_t $tmp1725 = $tmp1724.value;
frost$core$Int* $tmp1726 = $tmp1723[$tmp1725];
int64_t $tmp1727 = $tmp1722.value;
$tmp1721[$tmp1727] = $tmp1726;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:170
frost$core$Int** $tmp1728 = *(&local0);
frost$core$Int64 $tmp1729 = (frost$core$Int64) {101u};
frost$core$Int** $tmp1730 = *(&local0);
frost$core$Int64 $tmp1731 = (frost$core$Int64) {0u};
int64_t $tmp1732 = $tmp1731.value;
frost$core$Int* $tmp1733 = $tmp1730[$tmp1732];
int64_t $tmp1734 = $tmp1729.value;
$tmp1728[$tmp1734] = $tmp1733;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:171
frost$core$Int** $tmp1735 = *(&local0);
frost$core$Int64 $tmp1736 = (frost$core$Int64) {102u};
frost$core$Int** $tmp1737 = *(&local0);
frost$core$Int64 $tmp1738 = (frost$core$Int64) {0u};
int64_t $tmp1739 = $tmp1738.value;
frost$core$Int* $tmp1740 = $tmp1737[$tmp1739];
int64_t $tmp1741 = $tmp1736.value;
$tmp1735[$tmp1741] = $tmp1740;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:172
frost$core$Int** $tmp1742 = *(&local0);
frost$core$Int64 $tmp1743 = (frost$core$Int64) {103u};
frost$core$Int** $tmp1744 = *(&local0);
frost$core$Int64 $tmp1745 = (frost$core$Int64) {0u};
int64_t $tmp1746 = $tmp1745.value;
frost$core$Int* $tmp1747 = $tmp1744[$tmp1746];
int64_t $tmp1748 = $tmp1743.value;
$tmp1742[$tmp1748] = $tmp1747;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:173
frost$core$Int** $tmp1749 = *(&local0);
frost$core$Int64 $tmp1750 = (frost$core$Int64) {104u};
frost$core$Int** $tmp1751 = *(&local0);
frost$core$Int64 $tmp1752 = (frost$core$Int64) {0u};
int64_t $tmp1753 = $tmp1752.value;
frost$core$Int* $tmp1754 = $tmp1751[$tmp1753];
int64_t $tmp1755 = $tmp1750.value;
$tmp1749[$tmp1755] = $tmp1754;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:174
frost$core$Int** $tmp1756 = *(&local0);
frost$core$Int64 $tmp1757 = (frost$core$Int64) {105u};
frost$core$Int** $tmp1758 = *(&local0);
frost$core$Int64 $tmp1759 = (frost$core$Int64) {0u};
int64_t $tmp1760 = $tmp1759.value;
frost$core$Int* $tmp1761 = $tmp1758[$tmp1760];
int64_t $tmp1762 = $tmp1757.value;
$tmp1756[$tmp1762] = $tmp1761;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:175
frost$core$Int** $tmp1763 = *(&local0);
frost$core$Int64 $tmp1764 = (frost$core$Int64) {106u};
frost$core$Int** $tmp1765 = *(&local0);
frost$core$Int64 $tmp1766 = (frost$core$Int64) {0u};
int64_t $tmp1767 = $tmp1766.value;
frost$core$Int* $tmp1768 = $tmp1765[$tmp1767];
int64_t $tmp1769 = $tmp1764.value;
$tmp1763[$tmp1769] = $tmp1768;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:176
frost$core$Int** $tmp1770 = *(&local0);
frost$core$Int64 $tmp1771 = (frost$core$Int64) {107u};
frost$core$Int** $tmp1772 = *(&local0);
frost$core$Int64 $tmp1773 = (frost$core$Int64) {0u};
int64_t $tmp1774 = $tmp1773.value;
frost$core$Int* $tmp1775 = $tmp1772[$tmp1774];
int64_t $tmp1776 = $tmp1771.value;
$tmp1770[$tmp1776] = $tmp1775;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:177
frost$core$Int** $tmp1777 = *(&local0);
frost$core$Int64 $tmp1778 = (frost$core$Int64) {108u};
frost$core$Int** $tmp1779 = *(&local0);
frost$core$Int64 $tmp1780 = (frost$core$Int64) {0u};
int64_t $tmp1781 = $tmp1780.value;
frost$core$Int* $tmp1782 = $tmp1779[$tmp1781];
int64_t $tmp1783 = $tmp1778.value;
$tmp1777[$tmp1783] = $tmp1782;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:178
frost$core$Int** $tmp1784 = *(&local0);
frost$core$Int64 $tmp1785 = (frost$core$Int64) {109u};
frost$core$Int** $tmp1786 = *(&local0);
frost$core$Int64 $tmp1787 = (frost$core$Int64) {0u};
int64_t $tmp1788 = $tmp1787.value;
frost$core$Int* $tmp1789 = $tmp1786[$tmp1788];
int64_t $tmp1790 = $tmp1785.value;
$tmp1784[$tmp1790] = $tmp1789;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:179
frost$core$Int** $tmp1791 = *(&local0);
frost$core$Int64 $tmp1792 = (frost$core$Int64) {110u};
frost$core$Int** $tmp1793 = *(&local0);
frost$core$Int64 $tmp1794 = (frost$core$Int64) {0u};
int64_t $tmp1795 = $tmp1794.value;
frost$core$Int* $tmp1796 = $tmp1793[$tmp1795];
int64_t $tmp1797 = $tmp1792.value;
$tmp1791[$tmp1797] = $tmp1796;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:180
frost$core$Int** $tmp1798 = *(&local0);
frost$core$Int64 $tmp1799 = (frost$core$Int64) {111u};
frost$core$Int** $tmp1800 = *(&local0);
frost$core$Int64 $tmp1801 = (frost$core$Int64) {0u};
int64_t $tmp1802 = $tmp1801.value;
frost$core$Int* $tmp1803 = $tmp1800[$tmp1802];
int64_t $tmp1804 = $tmp1799.value;
$tmp1798[$tmp1804] = $tmp1803;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:181
frost$core$Int** $tmp1805 = *(&local0);
frost$core$Int64 $tmp1806 = (frost$core$Int64) {112u};
frost$core$Int** $tmp1807 = *(&local0);
frost$core$Int64 $tmp1808 = (frost$core$Int64) {0u};
int64_t $tmp1809 = $tmp1808.value;
frost$core$Int* $tmp1810 = $tmp1807[$tmp1809];
int64_t $tmp1811 = $tmp1806.value;
$tmp1805[$tmp1811] = $tmp1810;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:182
frost$core$Int** $tmp1812 = *(&local0);
frost$core$Int64 $tmp1813 = (frost$core$Int64) {113u};
frost$core$Int** $tmp1814 = *(&local0);
frost$core$Int64 $tmp1815 = (frost$core$Int64) {0u};
int64_t $tmp1816 = $tmp1815.value;
frost$core$Int* $tmp1817 = $tmp1814[$tmp1816];
int64_t $tmp1818 = $tmp1813.value;
$tmp1812[$tmp1818] = $tmp1817;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:183
frost$core$Int** $tmp1819 = *(&local0);
frost$core$Int64 $tmp1820 = (frost$core$Int64) {114u};
frost$core$Int** $tmp1821 = *(&local0);
frost$core$Int64 $tmp1822 = (frost$core$Int64) {0u};
int64_t $tmp1823 = $tmp1822.value;
frost$core$Int* $tmp1824 = $tmp1821[$tmp1823];
int64_t $tmp1825 = $tmp1820.value;
$tmp1819[$tmp1825] = $tmp1824;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:184
frost$core$Int** $tmp1826 = *(&local0);
frost$core$Int64 $tmp1827 = (frost$core$Int64) {115u};
frost$core$Int** $tmp1828 = *(&local0);
frost$core$Int64 $tmp1829 = (frost$core$Int64) {0u};
int64_t $tmp1830 = $tmp1829.value;
frost$core$Int* $tmp1831 = $tmp1828[$tmp1830];
int64_t $tmp1832 = $tmp1827.value;
$tmp1826[$tmp1832] = $tmp1831;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:185
frost$core$Int** $tmp1833 = *(&local0);
frost$core$Int64 $tmp1834 = (frost$core$Int64) {116u};
frost$core$Int** $tmp1835 = *(&local0);
frost$core$Int64 $tmp1836 = (frost$core$Int64) {0u};
int64_t $tmp1837 = $tmp1836.value;
frost$core$Int* $tmp1838 = $tmp1835[$tmp1837];
int64_t $tmp1839 = $tmp1834.value;
$tmp1833[$tmp1839] = $tmp1838;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:186
frost$core$Int** $tmp1840 = *(&local0);
frost$core$Int64 $tmp1841 = (frost$core$Int64) {117u};
frost$core$Int** $tmp1842 = *(&local0);
frost$core$Int64 $tmp1843 = (frost$core$Int64) {0u};
int64_t $tmp1844 = $tmp1843.value;
frost$core$Int* $tmp1845 = $tmp1842[$tmp1844];
int64_t $tmp1846 = $tmp1841.value;
$tmp1840[$tmp1846] = $tmp1845;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:187
frost$core$Int** $tmp1847 = *(&local0);
frost$core$Int64 $tmp1848 = (frost$core$Int64) {118u};
frost$core$Int** $tmp1849 = *(&local0);
frost$core$Int64 $tmp1850 = (frost$core$Int64) {0u};
int64_t $tmp1851 = $tmp1850.value;
frost$core$Int* $tmp1852 = $tmp1849[$tmp1851];
int64_t $tmp1853 = $tmp1848.value;
$tmp1847[$tmp1853] = $tmp1852;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:188
frost$core$Int** $tmp1854 = *(&local0);
frost$core$Int64 $tmp1855 = (frost$core$Int64) {119u};
frost$core$Int** $tmp1856 = *(&local0);
frost$core$Int64 $tmp1857 = (frost$core$Int64) {0u};
int64_t $tmp1858 = $tmp1857.value;
frost$core$Int* $tmp1859 = $tmp1856[$tmp1858];
int64_t $tmp1860 = $tmp1855.value;
$tmp1854[$tmp1860] = $tmp1859;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:189
frost$core$Int** $tmp1861 = *(&local0);
frost$core$Int64 $tmp1862 = (frost$core$Int64) {120u};
frost$core$Int** $tmp1863 = *(&local0);
frost$core$Int64 $tmp1864 = (frost$core$Int64) {0u};
int64_t $tmp1865 = $tmp1864.value;
frost$core$Int* $tmp1866 = $tmp1863[$tmp1865];
int64_t $tmp1867 = $tmp1862.value;
$tmp1861[$tmp1867] = $tmp1866;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:190
frost$core$Int** $tmp1868 = *(&local0);
frost$core$Int64 $tmp1869 = (frost$core$Int64) {121u};
frost$core$Int** $tmp1870 = *(&local0);
frost$core$Int64 $tmp1871 = (frost$core$Int64) {0u};
int64_t $tmp1872 = $tmp1871.value;
frost$core$Int* $tmp1873 = $tmp1870[$tmp1872];
int64_t $tmp1874 = $tmp1869.value;
$tmp1868[$tmp1874] = $tmp1873;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:191
frost$core$Int** $tmp1875 = *(&local0);
frost$core$Int64 $tmp1876 = (frost$core$Int64) {122u};
frost$core$Int** $tmp1877 = *(&local0);
frost$core$Int64 $tmp1878 = (frost$core$Int64) {0u};
int64_t $tmp1879 = $tmp1878.value;
frost$core$Int* $tmp1880 = $tmp1877[$tmp1879];
int64_t $tmp1881 = $tmp1876.value;
$tmp1875[$tmp1881] = $tmp1880;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:192
frost$core$Int** $tmp1882 = *(&local0);
frost$core$Int64 $tmp1883 = (frost$core$Int64) {123u};
frost$core$Int $tmp1884 = (frost$core$Int) {20u};
frost$core$Int $tmp1885 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:192:29
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp1886 = frost$core$Int64$init$frost$core$Int($tmp1884);
int64_t $tmp1887 = $tmp1886.value;
frost$core$Int* $tmp1888 = ((frost$core$Int*) frostAlloc($tmp1887 * 8));
*(&local35) = $tmp1888;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp1889 = (frost$core$Int) {0u};
frost$core$Bit $tmp1890 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1891 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1889, $tmp1884, $tmp1890);
frost$core$Int $tmp1892 = $tmp1891.min;
*(&local36) = $tmp1892;
frost$core$Int $tmp1893 = $tmp1891.max;
frost$core$Bit $tmp1894 = $tmp1891.inclusive;
bool $tmp1895 = $tmp1894.value;
frost$core$Int $tmp1896 = (frost$core$Int) {1u};
if ($tmp1895) goto block158; else goto block159;
block158:;
int64_t $tmp1897 = $tmp1892.value;
int64_t $tmp1898 = $tmp1893.value;
bool $tmp1899 = $tmp1897 <= $tmp1898;
frost$core$Bit $tmp1900 = (frost$core$Bit) {$tmp1899};
bool $tmp1901 = $tmp1900.value;
if ($tmp1901) goto block155; else goto block156;
block159:;
int64_t $tmp1902 = $tmp1892.value;
int64_t $tmp1903 = $tmp1893.value;
bool $tmp1904 = $tmp1902 < $tmp1903;
frost$core$Bit $tmp1905 = (frost$core$Bit) {$tmp1904};
bool $tmp1906 = $tmp1905.value;
if ($tmp1906) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp1907 = *(&local35);
frost$core$Int $tmp1908 = *(&local36);
frost$core$Int64 $tmp1909 = frost$core$Int64$init$frost$core$Int($tmp1908);
int64_t $tmp1910 = $tmp1909.value;
$tmp1907[$tmp1910] = $tmp1885;
frost$core$Int $tmp1911 = *(&local36);
int64_t $tmp1912 = $tmp1893.value;
int64_t $tmp1913 = $tmp1911.value;
int64_t $tmp1914 = $tmp1912 - $tmp1913;
frost$core$Int $tmp1915 = (frost$core$Int) {$tmp1914};
if ($tmp1895) goto block161; else goto block162;
block161:;
int64_t $tmp1916 = $tmp1915.value;
int64_t $tmp1917 = $tmp1896.value;
bool $tmp1918 = $tmp1916 >= $tmp1917;
frost$core$Bit $tmp1919 = (frost$core$Bit) {$tmp1918};
bool $tmp1920 = $tmp1919.value;
if ($tmp1920) goto block160; else goto block156;
block162:;
int64_t $tmp1921 = $tmp1915.value;
int64_t $tmp1922 = $tmp1896.value;
bool $tmp1923 = $tmp1921 > $tmp1922;
frost$core$Bit $tmp1924 = (frost$core$Bit) {$tmp1923};
bool $tmp1925 = $tmp1924.value;
if ($tmp1925) goto block160; else goto block156;
block160:;
int64_t $tmp1926 = $tmp1911.value;
int64_t $tmp1927 = $tmp1896.value;
int64_t $tmp1928 = $tmp1926 + $tmp1927;
frost$core$Int $tmp1929 = (frost$core$Int) {$tmp1928};
*(&local36) = $tmp1929;
goto block155;
block156:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp1930 = *(&local35);
int64_t $tmp1931 = $tmp1883.value;
$tmp1882[$tmp1931] = $tmp1930;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:193
frost$core$Int** $tmp1932 = *(&local0);
frost$core$Int64 $tmp1933 = (frost$core$Int64) {123u};
int64_t $tmp1934 = $tmp1933.value;
frost$core$Int* $tmp1935 = $tmp1932[$tmp1934];
frost$core$Int64 $tmp1936 = (frost$core$Int64) {1u};
frost$core$Int $tmp1937 = (frost$core$Int) {18u};
int64_t $tmp1938 = $tmp1936.value;
$tmp1935[$tmp1938] = $tmp1937;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:194
frost$core$Int** $tmp1939 = *(&local0);
frost$core$Int64 $tmp1940 = (frost$core$Int64) {123u};
int64_t $tmp1941 = $tmp1940.value;
frost$core$Int* $tmp1942 = $tmp1939[$tmp1941];
frost$core$Int64 $tmp1943 = (frost$core$Int64) {14u};
frost$core$Int $tmp1944 = (frost$core$Int) {2u};
int64_t $tmp1945 = $tmp1943.value;
$tmp1942[$tmp1945] = $tmp1944;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:195
frost$core$Int** $tmp1946 = *(&local0);
frost$core$Int64 $tmp1947 = (frost$core$Int64) {124u};
frost$core$Int** $tmp1948 = *(&local0);
frost$core$Int64 $tmp1949 = (frost$core$Int64) {0u};
int64_t $tmp1950 = $tmp1949.value;
frost$core$Int* $tmp1951 = $tmp1948[$tmp1950];
int64_t $tmp1952 = $tmp1947.value;
$tmp1946[$tmp1952] = $tmp1951;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:196
frost$core$Int** $tmp1953 = *(&local0);
frost$core$Int64 $tmp1954 = (frost$core$Int64) {125u};
frost$core$Int $tmp1955 = (frost$core$Int) {20u};
frost$core$Int $tmp1956 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from RegexLexer.frost:196:29
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
frost$core$Int64 $tmp1957 = frost$core$Int64$init$frost$core$Int($tmp1955);
int64_t $tmp1958 = $tmp1957.value;
frost$core$Int* $tmp1959 = ((frost$core$Int*) frostAlloc($tmp1958 * 8));
*(&local37) = $tmp1959;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int $tmp1960 = (frost$core$Int) {0u};
frost$core$Bit $tmp1961 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1962 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1960, $tmp1955, $tmp1961);
frost$core$Int $tmp1963 = $tmp1962.min;
*(&local38) = $tmp1963;
frost$core$Int $tmp1964 = $tmp1962.max;
frost$core$Bit $tmp1965 = $tmp1962.inclusive;
bool $tmp1966 = $tmp1965.value;
frost$core$Int $tmp1967 = (frost$core$Int) {1u};
if ($tmp1966) goto block167; else goto block168;
block167:;
int64_t $tmp1968 = $tmp1963.value;
int64_t $tmp1969 = $tmp1964.value;
bool $tmp1970 = $tmp1968 <= $tmp1969;
frost$core$Bit $tmp1971 = (frost$core$Bit) {$tmp1970};
bool $tmp1972 = $tmp1971.value;
if ($tmp1972) goto block164; else goto block165;
block168:;
int64_t $tmp1973 = $tmp1963.value;
int64_t $tmp1974 = $tmp1964.value;
bool $tmp1975 = $tmp1973 < $tmp1974;
frost$core$Bit $tmp1976 = (frost$core$Bit) {$tmp1975};
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int* $tmp1978 = *(&local37);
frost$core$Int $tmp1979 = *(&local38);
frost$core$Int64 $tmp1980 = frost$core$Int64$init$frost$core$Int($tmp1979);
int64_t $tmp1981 = $tmp1980.value;
$tmp1978[$tmp1981] = $tmp1956;
frost$core$Int $tmp1982 = *(&local38);
int64_t $tmp1983 = $tmp1964.value;
int64_t $tmp1984 = $tmp1982.value;
int64_t $tmp1985 = $tmp1983 - $tmp1984;
frost$core$Int $tmp1986 = (frost$core$Int) {$tmp1985};
if ($tmp1966) goto block170; else goto block171;
block170:;
int64_t $tmp1987 = $tmp1986.value;
int64_t $tmp1988 = $tmp1967.value;
bool $tmp1989 = $tmp1987 >= $tmp1988;
frost$core$Bit $tmp1990 = (frost$core$Bit) {$tmp1989};
bool $tmp1991 = $tmp1990.value;
if ($tmp1991) goto block169; else goto block165;
block171:;
int64_t $tmp1992 = $tmp1986.value;
int64_t $tmp1993 = $tmp1967.value;
bool $tmp1994 = $tmp1992 > $tmp1993;
frost$core$Bit $tmp1995 = (frost$core$Bit) {$tmp1994};
bool $tmp1996 = $tmp1995.value;
if ($tmp1996) goto block169; else goto block165;
block169:;
int64_t $tmp1997 = $tmp1982.value;
int64_t $tmp1998 = $tmp1967.value;
int64_t $tmp1999 = $tmp1997 + $tmp1998;
frost$core$Int $tmp2000 = (frost$core$Int) {$tmp1999};
*(&local38) = $tmp2000;
goto block164;
block165:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int* $tmp2001 = *(&local37);
int64_t $tmp2002 = $tmp1954.value;
$tmp1953[$tmp2002] = $tmp2001;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:197
frost$core$Int** $tmp2003 = *(&local0);
frost$core$Int64 $tmp2004 = (frost$core$Int64) {125u};
int64_t $tmp2005 = $tmp2004.value;
frost$core$Int* $tmp2006 = $tmp2003[$tmp2005];
frost$core$Int64 $tmp2007 = (frost$core$Int64) {1u};
frost$core$Int $tmp2008 = (frost$core$Int) {19u};
int64_t $tmp2009 = $tmp2007.value;
$tmp2006[$tmp2009] = $tmp2008;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:198
frost$core$Int** $tmp2010 = *(&local0);
frost$core$Int64 $tmp2011 = (frost$core$Int64) {125u};
int64_t $tmp2012 = $tmp2011.value;
frost$core$Int* $tmp2013 = $tmp2010[$tmp2012];
frost$core$Int64 $tmp2014 = (frost$core$Int64) {14u};
frost$core$Int $tmp2015 = (frost$core$Int) {2u};
int64_t $tmp2016 = $tmp2014.value;
$tmp2013[$tmp2016] = $tmp2015;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:199
frost$core$Int** $tmp2017 = *(&local0);
frost$core$Int64 $tmp2018 = (frost$core$Int64) {126u};
frost$core$Int** $tmp2019 = *(&local0);
frost$core$Int64 $tmp2020 = (frost$core$Int64) {0u};
int64_t $tmp2021 = $tmp2020.value;
frost$core$Int* $tmp2022 = $tmp2019[$tmp2021];
int64_t $tmp2023 = $tmp2018.value;
$tmp2017[$tmp2023] = $tmp2022;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:200
frost$core$Int** $tmp2024 = *(&local0);
frost$core$Int64 $tmp2025 = (frost$core$Int64) {127u};
frost$core$Int** $tmp2026 = *(&local0);
frost$core$Int64 $tmp2027 = (frost$core$Int64) {0u};
int64_t $tmp2028 = $tmp2027.value;
frost$core$Int* $tmp2029 = $tmp2026[$tmp2028];
int64_t $tmp2030 = $tmp2025.value;
$tmp2024[$tmp2030] = $tmp2029;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:201
frost$core$Int** $tmp2031 = *(&local0);
frost$core$Int64 $tmp2032 = (frost$core$Int64) {128u};
frost$core$Int** $tmp2033 = *(&local0);
frost$core$Int64 $tmp2034 = (frost$core$Int64) {0u};
int64_t $tmp2035 = $tmp2034.value;
frost$core$Int* $tmp2036 = $tmp2033[$tmp2035];
int64_t $tmp2037 = $tmp2032.value;
$tmp2031[$tmp2037] = $tmp2036;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:202
frost$core$Int** $tmp2038 = *(&local0);
frost$core$Int64 $tmp2039 = (frost$core$Int64) {129u};
frost$core$Int** $tmp2040 = *(&local0);
frost$core$Int64 $tmp2041 = (frost$core$Int64) {0u};
int64_t $tmp2042 = $tmp2041.value;
frost$core$Int* $tmp2043 = $tmp2040[$tmp2042];
int64_t $tmp2044 = $tmp2039.value;
$tmp2038[$tmp2044] = $tmp2043;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:203
frost$core$Int** $tmp2045 = *(&local0);
frost$core$Int64 $tmp2046 = (frost$core$Int64) {130u};
frost$core$Int** $tmp2047 = *(&local0);
frost$core$Int64 $tmp2048 = (frost$core$Int64) {0u};
int64_t $tmp2049 = $tmp2048.value;
frost$core$Int* $tmp2050 = $tmp2047[$tmp2049];
int64_t $tmp2051 = $tmp2046.value;
$tmp2045[$tmp2051] = $tmp2050;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:204
frost$core$Int** $tmp2052 = *(&local0);
frost$core$Int64 $tmp2053 = (frost$core$Int64) {131u};
frost$core$Int** $tmp2054 = *(&local0);
frost$core$Int64 $tmp2055 = (frost$core$Int64) {0u};
int64_t $tmp2056 = $tmp2055.value;
frost$core$Int* $tmp2057 = $tmp2054[$tmp2056];
int64_t $tmp2058 = $tmp2053.value;
$tmp2052[$tmp2058] = $tmp2057;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:205
frost$core$Int** $tmp2059 = *(&local0);
frost$core$Int64 $tmp2060 = (frost$core$Int64) {132u};
frost$core$Int** $tmp2061 = *(&local0);
frost$core$Int64 $tmp2062 = (frost$core$Int64) {0u};
int64_t $tmp2063 = $tmp2062.value;
frost$core$Int* $tmp2064 = $tmp2061[$tmp2063];
int64_t $tmp2065 = $tmp2060.value;
$tmp2059[$tmp2065] = $tmp2064;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:206
frost$core$Int** $tmp2066 = *(&local0);
frost$core$Int64 $tmp2067 = (frost$core$Int64) {133u};
frost$core$Int** $tmp2068 = *(&local0);
frost$core$Int64 $tmp2069 = (frost$core$Int64) {0u};
int64_t $tmp2070 = $tmp2069.value;
frost$core$Int* $tmp2071 = $tmp2068[$tmp2070];
int64_t $tmp2072 = $tmp2067.value;
$tmp2066[$tmp2072] = $tmp2071;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:207
frost$core$Int** $tmp2073 = *(&local0);
frost$core$Int64 $tmp2074 = (frost$core$Int64) {134u};
frost$core$Int** $tmp2075 = *(&local0);
frost$core$Int64 $tmp2076 = (frost$core$Int64) {0u};
int64_t $tmp2077 = $tmp2076.value;
frost$core$Int* $tmp2078 = $tmp2075[$tmp2077];
int64_t $tmp2079 = $tmp2074.value;
$tmp2073[$tmp2079] = $tmp2078;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:208
frost$core$Int** $tmp2080 = *(&local0);
frost$core$Int64 $tmp2081 = (frost$core$Int64) {135u};
frost$core$Int** $tmp2082 = *(&local0);
frost$core$Int64 $tmp2083 = (frost$core$Int64) {0u};
int64_t $tmp2084 = $tmp2083.value;
frost$core$Int* $tmp2085 = $tmp2082[$tmp2084];
int64_t $tmp2086 = $tmp2081.value;
$tmp2080[$tmp2086] = $tmp2085;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:209
frost$core$Int** $tmp2087 = *(&local0);
frost$core$Int64 $tmp2088 = (frost$core$Int64) {136u};
frost$core$Int** $tmp2089 = *(&local0);
frost$core$Int64 $tmp2090 = (frost$core$Int64) {0u};
int64_t $tmp2091 = $tmp2090.value;
frost$core$Int* $tmp2092 = $tmp2089[$tmp2091];
int64_t $tmp2093 = $tmp2088.value;
$tmp2087[$tmp2093] = $tmp2092;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:210
frost$core$Int** $tmp2094 = *(&local0);
frost$core$Int64 $tmp2095 = (frost$core$Int64) {137u};
frost$core$Int** $tmp2096 = *(&local0);
frost$core$Int64 $tmp2097 = (frost$core$Int64) {0u};
int64_t $tmp2098 = $tmp2097.value;
frost$core$Int* $tmp2099 = $tmp2096[$tmp2098];
int64_t $tmp2100 = $tmp2095.value;
$tmp2094[$tmp2100] = $tmp2099;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:211
frost$core$Int** $tmp2101 = *(&local0);
frost$core$Int64 $tmp2102 = (frost$core$Int64) {138u};
frost$core$Int** $tmp2103 = *(&local0);
frost$core$Int64 $tmp2104 = (frost$core$Int64) {0u};
int64_t $tmp2105 = $tmp2104.value;
frost$core$Int* $tmp2106 = $tmp2103[$tmp2105];
int64_t $tmp2107 = $tmp2102.value;
$tmp2101[$tmp2107] = $tmp2106;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:212
frost$core$Int** $tmp2108 = *(&local0);
frost$core$Int64 $tmp2109 = (frost$core$Int64) {139u};
frost$core$Int** $tmp2110 = *(&local0);
frost$core$Int64 $tmp2111 = (frost$core$Int64) {0u};
int64_t $tmp2112 = $tmp2111.value;
frost$core$Int* $tmp2113 = $tmp2110[$tmp2112];
int64_t $tmp2114 = $tmp2109.value;
$tmp2108[$tmp2114] = $tmp2113;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:213
frost$core$Int** $tmp2115 = *(&local0);
frost$core$Int64 $tmp2116 = (frost$core$Int64) {140u};
frost$core$Int** $tmp2117 = *(&local0);
frost$core$Int64 $tmp2118 = (frost$core$Int64) {0u};
int64_t $tmp2119 = $tmp2118.value;
frost$core$Int* $tmp2120 = $tmp2117[$tmp2119];
int64_t $tmp2121 = $tmp2116.value;
$tmp2115[$tmp2121] = $tmp2120;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:214
frost$core$Int** $tmp2122 = *(&local0);
frost$core$Int64 $tmp2123 = (frost$core$Int64) {141u};
frost$core$Int** $tmp2124 = *(&local0);
frost$core$Int64 $tmp2125 = (frost$core$Int64) {0u};
int64_t $tmp2126 = $tmp2125.value;
frost$core$Int* $tmp2127 = $tmp2124[$tmp2126];
int64_t $tmp2128 = $tmp2123.value;
$tmp2122[$tmp2128] = $tmp2127;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:215
frost$core$Int** $tmp2129 = *(&local0);
frost$core$Int64 $tmp2130 = (frost$core$Int64) {142u};
frost$core$Int** $tmp2131 = *(&local0);
frost$core$Int64 $tmp2132 = (frost$core$Int64) {0u};
int64_t $tmp2133 = $tmp2132.value;
frost$core$Int* $tmp2134 = $tmp2131[$tmp2133];
int64_t $tmp2135 = $tmp2130.value;
$tmp2129[$tmp2135] = $tmp2134;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:216
frost$core$Int** $tmp2136 = *(&local0);
frost$core$Int64 $tmp2137 = (frost$core$Int64) {143u};
frost$core$Int** $tmp2138 = *(&local0);
frost$core$Int64 $tmp2139 = (frost$core$Int64) {0u};
int64_t $tmp2140 = $tmp2139.value;
frost$core$Int* $tmp2141 = $tmp2138[$tmp2140];
int64_t $tmp2142 = $tmp2137.value;
$tmp2136[$tmp2142] = $tmp2141;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:217
frost$core$Int** $tmp2143 = *(&local0);
frost$core$Int64 $tmp2144 = (frost$core$Int64) {144u};
frost$core$Int** $tmp2145 = *(&local0);
frost$core$Int64 $tmp2146 = (frost$core$Int64) {0u};
int64_t $tmp2147 = $tmp2146.value;
frost$core$Int* $tmp2148 = $tmp2145[$tmp2147];
int64_t $tmp2149 = $tmp2144.value;
$tmp2143[$tmp2149] = $tmp2148;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:218
frost$core$Int** $tmp2150 = *(&local0);
frost$core$Int64 $tmp2151 = (frost$core$Int64) {145u};
frost$core$Int** $tmp2152 = *(&local0);
frost$core$Int64 $tmp2153 = (frost$core$Int64) {0u};
int64_t $tmp2154 = $tmp2153.value;
frost$core$Int* $tmp2155 = $tmp2152[$tmp2154];
int64_t $tmp2156 = $tmp2151.value;
$tmp2150[$tmp2156] = $tmp2155;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:219
frost$core$Int** $tmp2157 = *(&local0);
frost$core$Int64 $tmp2158 = (frost$core$Int64) {146u};
frost$core$Int** $tmp2159 = *(&local0);
frost$core$Int64 $tmp2160 = (frost$core$Int64) {0u};
int64_t $tmp2161 = $tmp2160.value;
frost$core$Int* $tmp2162 = $tmp2159[$tmp2161];
int64_t $tmp2163 = $tmp2158.value;
$tmp2157[$tmp2163] = $tmp2162;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:220
frost$core$Int** $tmp2164 = *(&local0);
frost$core$Int64 $tmp2165 = (frost$core$Int64) {147u};
frost$core$Int** $tmp2166 = *(&local0);
frost$core$Int64 $tmp2167 = (frost$core$Int64) {0u};
int64_t $tmp2168 = $tmp2167.value;
frost$core$Int* $tmp2169 = $tmp2166[$tmp2168];
int64_t $tmp2170 = $tmp2165.value;
$tmp2164[$tmp2170] = $tmp2169;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:221
frost$core$Int** $tmp2171 = *(&local0);
frost$core$Int64 $tmp2172 = (frost$core$Int64) {148u};
frost$core$Int** $tmp2173 = *(&local0);
frost$core$Int64 $tmp2174 = (frost$core$Int64) {0u};
int64_t $tmp2175 = $tmp2174.value;
frost$core$Int* $tmp2176 = $tmp2173[$tmp2175];
int64_t $tmp2177 = $tmp2172.value;
$tmp2171[$tmp2177] = $tmp2176;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:222
frost$core$Int** $tmp2178 = *(&local0);
frost$core$Int64 $tmp2179 = (frost$core$Int64) {149u};
frost$core$Int** $tmp2180 = *(&local0);
frost$core$Int64 $tmp2181 = (frost$core$Int64) {0u};
int64_t $tmp2182 = $tmp2181.value;
frost$core$Int* $tmp2183 = $tmp2180[$tmp2182];
int64_t $tmp2184 = $tmp2179.value;
$tmp2178[$tmp2184] = $tmp2183;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:223
frost$core$Int** $tmp2185 = *(&local0);
frost$core$Int64 $tmp2186 = (frost$core$Int64) {150u};
frost$core$Int** $tmp2187 = *(&local0);
frost$core$Int64 $tmp2188 = (frost$core$Int64) {0u};
int64_t $tmp2189 = $tmp2188.value;
frost$core$Int* $tmp2190 = $tmp2187[$tmp2189];
int64_t $tmp2191 = $tmp2186.value;
$tmp2185[$tmp2191] = $tmp2190;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:224
frost$core$Int** $tmp2192 = *(&local0);
frost$core$Int64 $tmp2193 = (frost$core$Int64) {151u};
frost$core$Int** $tmp2194 = *(&local0);
frost$core$Int64 $tmp2195 = (frost$core$Int64) {0u};
int64_t $tmp2196 = $tmp2195.value;
frost$core$Int* $tmp2197 = $tmp2194[$tmp2196];
int64_t $tmp2198 = $tmp2193.value;
$tmp2192[$tmp2198] = $tmp2197;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:225
frost$core$Int** $tmp2199 = *(&local0);
frost$core$Int64 $tmp2200 = (frost$core$Int64) {152u};
frost$core$Int** $tmp2201 = *(&local0);
frost$core$Int64 $tmp2202 = (frost$core$Int64) {0u};
int64_t $tmp2203 = $tmp2202.value;
frost$core$Int* $tmp2204 = $tmp2201[$tmp2203];
int64_t $tmp2205 = $tmp2200.value;
$tmp2199[$tmp2205] = $tmp2204;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:226
frost$core$Int** $tmp2206 = *(&local0);
frost$core$Int64 $tmp2207 = (frost$core$Int64) {153u};
frost$core$Int** $tmp2208 = *(&local0);
frost$core$Int64 $tmp2209 = (frost$core$Int64) {0u};
int64_t $tmp2210 = $tmp2209.value;
frost$core$Int* $tmp2211 = $tmp2208[$tmp2210];
int64_t $tmp2212 = $tmp2207.value;
$tmp2206[$tmp2212] = $tmp2211;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:227
frost$core$Int** $tmp2213 = *(&local0);
frost$core$Int64 $tmp2214 = (frost$core$Int64) {154u};
frost$core$Int** $tmp2215 = *(&local0);
frost$core$Int64 $tmp2216 = (frost$core$Int64) {0u};
int64_t $tmp2217 = $tmp2216.value;
frost$core$Int* $tmp2218 = $tmp2215[$tmp2217];
int64_t $tmp2219 = $tmp2214.value;
$tmp2213[$tmp2219] = $tmp2218;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:228
frost$core$Int** $tmp2220 = *(&local0);
frost$core$Int64 $tmp2221 = (frost$core$Int64) {155u};
frost$core$Int** $tmp2222 = *(&local0);
frost$core$Int64 $tmp2223 = (frost$core$Int64) {0u};
int64_t $tmp2224 = $tmp2223.value;
frost$core$Int* $tmp2225 = $tmp2222[$tmp2224];
int64_t $tmp2226 = $tmp2221.value;
$tmp2220[$tmp2226] = $tmp2225;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:229
frost$core$Int** $tmp2227 = *(&local0);
frost$core$Int64 $tmp2228 = (frost$core$Int64) {156u};
frost$core$Int** $tmp2229 = *(&local0);
frost$core$Int64 $tmp2230 = (frost$core$Int64) {0u};
int64_t $tmp2231 = $tmp2230.value;
frost$core$Int* $tmp2232 = $tmp2229[$tmp2231];
int64_t $tmp2233 = $tmp2228.value;
$tmp2227[$tmp2233] = $tmp2232;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:230
frost$core$Int** $tmp2234 = *(&local0);
frost$core$Int64 $tmp2235 = (frost$core$Int64) {157u};
frost$core$Int** $tmp2236 = *(&local0);
frost$core$Int64 $tmp2237 = (frost$core$Int64) {0u};
int64_t $tmp2238 = $tmp2237.value;
frost$core$Int* $tmp2239 = $tmp2236[$tmp2238];
int64_t $tmp2240 = $tmp2235.value;
$tmp2234[$tmp2240] = $tmp2239;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:231
frost$core$Int** $tmp2241 = *(&local0);
frost$core$Int64 $tmp2242 = (frost$core$Int64) {158u};
frost$core$Int** $tmp2243 = *(&local0);
frost$core$Int64 $tmp2244 = (frost$core$Int64) {0u};
int64_t $tmp2245 = $tmp2244.value;
frost$core$Int* $tmp2246 = $tmp2243[$tmp2245];
int64_t $tmp2247 = $tmp2242.value;
$tmp2241[$tmp2247] = $tmp2246;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:232
frost$core$Int** $tmp2248 = *(&local0);
frost$core$Int64 $tmp2249 = (frost$core$Int64) {159u};
frost$core$Int** $tmp2250 = *(&local0);
frost$core$Int64 $tmp2251 = (frost$core$Int64) {0u};
int64_t $tmp2252 = $tmp2251.value;
frost$core$Int* $tmp2253 = $tmp2250[$tmp2252];
int64_t $tmp2254 = $tmp2249.value;
$tmp2248[$tmp2254] = $tmp2253;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:233
frost$core$Int** $tmp2255 = *(&local0);
frost$core$Int64 $tmp2256 = (frost$core$Int64) {160u};
frost$core$Int** $tmp2257 = *(&local0);
frost$core$Int64 $tmp2258 = (frost$core$Int64) {0u};
int64_t $tmp2259 = $tmp2258.value;
frost$core$Int* $tmp2260 = $tmp2257[$tmp2259];
int64_t $tmp2261 = $tmp2256.value;
$tmp2255[$tmp2261] = $tmp2260;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:234
frost$core$Int** $tmp2262 = *(&local0);
frost$core$Int64 $tmp2263 = (frost$core$Int64) {161u};
frost$core$Int** $tmp2264 = *(&local0);
frost$core$Int64 $tmp2265 = (frost$core$Int64) {0u};
int64_t $tmp2266 = $tmp2265.value;
frost$core$Int* $tmp2267 = $tmp2264[$tmp2266];
int64_t $tmp2268 = $tmp2263.value;
$tmp2262[$tmp2268] = $tmp2267;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:235
frost$core$Int** $tmp2269 = *(&local0);
frost$core$Int64 $tmp2270 = (frost$core$Int64) {162u};
frost$core$Int** $tmp2271 = *(&local0);
frost$core$Int64 $tmp2272 = (frost$core$Int64) {0u};
int64_t $tmp2273 = $tmp2272.value;
frost$core$Int* $tmp2274 = $tmp2271[$tmp2273];
int64_t $tmp2275 = $tmp2270.value;
$tmp2269[$tmp2275] = $tmp2274;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:236
frost$core$Int** $tmp2276 = *(&local0);
frost$core$Int64 $tmp2277 = (frost$core$Int64) {163u};
frost$core$Int** $tmp2278 = *(&local0);
frost$core$Int64 $tmp2279 = (frost$core$Int64) {0u};
int64_t $tmp2280 = $tmp2279.value;
frost$core$Int* $tmp2281 = $tmp2278[$tmp2280];
int64_t $tmp2282 = $tmp2277.value;
$tmp2276[$tmp2282] = $tmp2281;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:237
frost$core$Int** $tmp2283 = *(&local0);
frost$core$Int64 $tmp2284 = (frost$core$Int64) {164u};
frost$core$Int** $tmp2285 = *(&local0);
frost$core$Int64 $tmp2286 = (frost$core$Int64) {0u};
int64_t $tmp2287 = $tmp2286.value;
frost$core$Int* $tmp2288 = $tmp2285[$tmp2287];
int64_t $tmp2289 = $tmp2284.value;
$tmp2283[$tmp2289] = $tmp2288;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:238
frost$core$Int** $tmp2290 = *(&local0);
frost$core$Int64 $tmp2291 = (frost$core$Int64) {165u};
frost$core$Int** $tmp2292 = *(&local0);
frost$core$Int64 $tmp2293 = (frost$core$Int64) {0u};
int64_t $tmp2294 = $tmp2293.value;
frost$core$Int* $tmp2295 = $tmp2292[$tmp2294];
int64_t $tmp2296 = $tmp2291.value;
$tmp2290[$tmp2296] = $tmp2295;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:239
frost$core$Int** $tmp2297 = *(&local0);
frost$core$Int64 $tmp2298 = (frost$core$Int64) {166u};
frost$core$Int** $tmp2299 = *(&local0);
frost$core$Int64 $tmp2300 = (frost$core$Int64) {0u};
int64_t $tmp2301 = $tmp2300.value;
frost$core$Int* $tmp2302 = $tmp2299[$tmp2301];
int64_t $tmp2303 = $tmp2298.value;
$tmp2297[$tmp2303] = $tmp2302;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:240
frost$core$Int** $tmp2304 = *(&local0);
frost$core$Int64 $tmp2305 = (frost$core$Int64) {167u};
frost$core$Int** $tmp2306 = *(&local0);
frost$core$Int64 $tmp2307 = (frost$core$Int64) {0u};
int64_t $tmp2308 = $tmp2307.value;
frost$core$Int* $tmp2309 = $tmp2306[$tmp2308];
int64_t $tmp2310 = $tmp2305.value;
$tmp2304[$tmp2310] = $tmp2309;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:241
frost$core$Int** $tmp2311 = *(&local0);
frost$core$Int64 $tmp2312 = (frost$core$Int64) {168u};
frost$core$Int** $tmp2313 = *(&local0);
frost$core$Int64 $tmp2314 = (frost$core$Int64) {0u};
int64_t $tmp2315 = $tmp2314.value;
frost$core$Int* $tmp2316 = $tmp2313[$tmp2315];
int64_t $tmp2317 = $tmp2312.value;
$tmp2311[$tmp2317] = $tmp2316;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:242
frost$core$Int** $tmp2318 = *(&local0);
frost$core$Int64 $tmp2319 = (frost$core$Int64) {169u};
frost$core$Int** $tmp2320 = *(&local0);
frost$core$Int64 $tmp2321 = (frost$core$Int64) {0u};
int64_t $tmp2322 = $tmp2321.value;
frost$core$Int* $tmp2323 = $tmp2320[$tmp2322];
int64_t $tmp2324 = $tmp2319.value;
$tmp2318[$tmp2324] = $tmp2323;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:243
frost$core$Int** $tmp2325 = *(&local0);
frost$core$Int64 $tmp2326 = (frost$core$Int64) {170u};
frost$core$Int** $tmp2327 = *(&local0);
frost$core$Int64 $tmp2328 = (frost$core$Int64) {0u};
int64_t $tmp2329 = $tmp2328.value;
frost$core$Int* $tmp2330 = $tmp2327[$tmp2329];
int64_t $tmp2331 = $tmp2326.value;
$tmp2325[$tmp2331] = $tmp2330;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:244
frost$core$Int** $tmp2332 = *(&local0);
frost$core$Int64 $tmp2333 = (frost$core$Int64) {171u};
frost$core$Int** $tmp2334 = *(&local0);
frost$core$Int64 $tmp2335 = (frost$core$Int64) {0u};
int64_t $tmp2336 = $tmp2335.value;
frost$core$Int* $tmp2337 = $tmp2334[$tmp2336];
int64_t $tmp2338 = $tmp2333.value;
$tmp2332[$tmp2338] = $tmp2337;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:245
frost$core$Int** $tmp2339 = *(&local0);
frost$core$Int64 $tmp2340 = (frost$core$Int64) {172u};
frost$core$Int** $tmp2341 = *(&local0);
frost$core$Int64 $tmp2342 = (frost$core$Int64) {0u};
int64_t $tmp2343 = $tmp2342.value;
frost$core$Int* $tmp2344 = $tmp2341[$tmp2343];
int64_t $tmp2345 = $tmp2340.value;
$tmp2339[$tmp2345] = $tmp2344;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:246
frost$core$Int** $tmp2346 = *(&local0);
frost$core$Int64 $tmp2347 = (frost$core$Int64) {173u};
frost$core$Int** $tmp2348 = *(&local0);
frost$core$Int64 $tmp2349 = (frost$core$Int64) {0u};
int64_t $tmp2350 = $tmp2349.value;
frost$core$Int* $tmp2351 = $tmp2348[$tmp2350];
int64_t $tmp2352 = $tmp2347.value;
$tmp2346[$tmp2352] = $tmp2351;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:247
frost$core$Int** $tmp2353 = *(&local0);
frost$core$Int64 $tmp2354 = (frost$core$Int64) {174u};
frost$core$Int** $tmp2355 = *(&local0);
frost$core$Int64 $tmp2356 = (frost$core$Int64) {0u};
int64_t $tmp2357 = $tmp2356.value;
frost$core$Int* $tmp2358 = $tmp2355[$tmp2357];
int64_t $tmp2359 = $tmp2354.value;
$tmp2353[$tmp2359] = $tmp2358;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:248
frost$core$Int** $tmp2360 = *(&local0);
frost$core$Int64 $tmp2361 = (frost$core$Int64) {175u};
frost$core$Int** $tmp2362 = *(&local0);
frost$core$Int64 $tmp2363 = (frost$core$Int64) {0u};
int64_t $tmp2364 = $tmp2363.value;
frost$core$Int* $tmp2365 = $tmp2362[$tmp2364];
int64_t $tmp2366 = $tmp2361.value;
$tmp2360[$tmp2366] = $tmp2365;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:249
frost$core$Int** $tmp2367 = *(&local0);
frost$core$Int64 $tmp2368 = (frost$core$Int64) {176u};
frost$core$Int** $tmp2369 = *(&local0);
frost$core$Int64 $tmp2370 = (frost$core$Int64) {0u};
int64_t $tmp2371 = $tmp2370.value;
frost$core$Int* $tmp2372 = $tmp2369[$tmp2371];
int64_t $tmp2373 = $tmp2368.value;
$tmp2367[$tmp2373] = $tmp2372;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:250
frost$core$Int** $tmp2374 = *(&local0);
frost$core$Int64 $tmp2375 = (frost$core$Int64) {177u};
frost$core$Int** $tmp2376 = *(&local0);
frost$core$Int64 $tmp2377 = (frost$core$Int64) {0u};
int64_t $tmp2378 = $tmp2377.value;
frost$core$Int* $tmp2379 = $tmp2376[$tmp2378];
int64_t $tmp2380 = $tmp2375.value;
$tmp2374[$tmp2380] = $tmp2379;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:251
frost$core$Int** $tmp2381 = *(&local0);
frost$core$Int64 $tmp2382 = (frost$core$Int64) {178u};
frost$core$Int** $tmp2383 = *(&local0);
frost$core$Int64 $tmp2384 = (frost$core$Int64) {0u};
int64_t $tmp2385 = $tmp2384.value;
frost$core$Int* $tmp2386 = $tmp2383[$tmp2385];
int64_t $tmp2387 = $tmp2382.value;
$tmp2381[$tmp2387] = $tmp2386;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:252
frost$core$Int** $tmp2388 = *(&local0);
frost$core$Int64 $tmp2389 = (frost$core$Int64) {179u};
frost$core$Int** $tmp2390 = *(&local0);
frost$core$Int64 $tmp2391 = (frost$core$Int64) {0u};
int64_t $tmp2392 = $tmp2391.value;
frost$core$Int* $tmp2393 = $tmp2390[$tmp2392];
int64_t $tmp2394 = $tmp2389.value;
$tmp2388[$tmp2394] = $tmp2393;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:253
frost$core$Int** $tmp2395 = *(&local0);
frost$core$Int64 $tmp2396 = (frost$core$Int64) {180u};
frost$core$Int** $tmp2397 = *(&local0);
frost$core$Int64 $tmp2398 = (frost$core$Int64) {0u};
int64_t $tmp2399 = $tmp2398.value;
frost$core$Int* $tmp2400 = $tmp2397[$tmp2399];
int64_t $tmp2401 = $tmp2396.value;
$tmp2395[$tmp2401] = $tmp2400;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:254
frost$core$Int** $tmp2402 = *(&local0);
frost$core$Int64 $tmp2403 = (frost$core$Int64) {181u};
frost$core$Int** $tmp2404 = *(&local0);
frost$core$Int64 $tmp2405 = (frost$core$Int64) {0u};
int64_t $tmp2406 = $tmp2405.value;
frost$core$Int* $tmp2407 = $tmp2404[$tmp2406];
int64_t $tmp2408 = $tmp2403.value;
$tmp2402[$tmp2408] = $tmp2407;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:255
frost$core$Int** $tmp2409 = *(&local0);
frost$core$Int64 $tmp2410 = (frost$core$Int64) {182u};
frost$core$Int** $tmp2411 = *(&local0);
frost$core$Int64 $tmp2412 = (frost$core$Int64) {0u};
int64_t $tmp2413 = $tmp2412.value;
frost$core$Int* $tmp2414 = $tmp2411[$tmp2413];
int64_t $tmp2415 = $tmp2410.value;
$tmp2409[$tmp2415] = $tmp2414;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:256
frost$core$Int** $tmp2416 = *(&local0);
frost$core$Int64 $tmp2417 = (frost$core$Int64) {183u};
frost$core$Int** $tmp2418 = *(&local0);
frost$core$Int64 $tmp2419 = (frost$core$Int64) {0u};
int64_t $tmp2420 = $tmp2419.value;
frost$core$Int* $tmp2421 = $tmp2418[$tmp2420];
int64_t $tmp2422 = $tmp2417.value;
$tmp2416[$tmp2422] = $tmp2421;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:257
frost$core$Int** $tmp2423 = *(&local0);
frost$core$Int64 $tmp2424 = (frost$core$Int64) {184u};
frost$core$Int** $tmp2425 = *(&local0);
frost$core$Int64 $tmp2426 = (frost$core$Int64) {0u};
int64_t $tmp2427 = $tmp2426.value;
frost$core$Int* $tmp2428 = $tmp2425[$tmp2427];
int64_t $tmp2429 = $tmp2424.value;
$tmp2423[$tmp2429] = $tmp2428;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:258
frost$core$Int** $tmp2430 = *(&local0);
frost$core$Int64 $tmp2431 = (frost$core$Int64) {185u};
frost$core$Int** $tmp2432 = *(&local0);
frost$core$Int64 $tmp2433 = (frost$core$Int64) {0u};
int64_t $tmp2434 = $tmp2433.value;
frost$core$Int* $tmp2435 = $tmp2432[$tmp2434];
int64_t $tmp2436 = $tmp2431.value;
$tmp2430[$tmp2436] = $tmp2435;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:259
frost$core$Int** $tmp2437 = *(&local0);
frost$core$Int64 $tmp2438 = (frost$core$Int64) {186u};
frost$core$Int** $tmp2439 = *(&local0);
frost$core$Int64 $tmp2440 = (frost$core$Int64) {0u};
int64_t $tmp2441 = $tmp2440.value;
frost$core$Int* $tmp2442 = $tmp2439[$tmp2441];
int64_t $tmp2443 = $tmp2438.value;
$tmp2437[$tmp2443] = $tmp2442;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:260
frost$core$Int** $tmp2444 = *(&local0);
frost$core$Int64 $tmp2445 = (frost$core$Int64) {187u};
frost$core$Int** $tmp2446 = *(&local0);
frost$core$Int64 $tmp2447 = (frost$core$Int64) {0u};
int64_t $tmp2448 = $tmp2447.value;
frost$core$Int* $tmp2449 = $tmp2446[$tmp2448];
int64_t $tmp2450 = $tmp2445.value;
$tmp2444[$tmp2450] = $tmp2449;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:261
frost$core$Int** $tmp2451 = *(&local0);
frost$core$Int64 $tmp2452 = (frost$core$Int64) {188u};
frost$core$Int** $tmp2453 = *(&local0);
frost$core$Int64 $tmp2454 = (frost$core$Int64) {0u};
int64_t $tmp2455 = $tmp2454.value;
frost$core$Int* $tmp2456 = $tmp2453[$tmp2455];
int64_t $tmp2457 = $tmp2452.value;
$tmp2451[$tmp2457] = $tmp2456;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:262
frost$core$Int** $tmp2458 = *(&local0);
frost$core$Int64 $tmp2459 = (frost$core$Int64) {189u};
frost$core$Int** $tmp2460 = *(&local0);
frost$core$Int64 $tmp2461 = (frost$core$Int64) {0u};
int64_t $tmp2462 = $tmp2461.value;
frost$core$Int* $tmp2463 = $tmp2460[$tmp2462];
int64_t $tmp2464 = $tmp2459.value;
$tmp2458[$tmp2464] = $tmp2463;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:263
frost$core$Int** $tmp2465 = *(&local0);
frost$core$Int64 $tmp2466 = (frost$core$Int64) {190u};
frost$core$Int** $tmp2467 = *(&local0);
frost$core$Int64 $tmp2468 = (frost$core$Int64) {0u};
int64_t $tmp2469 = $tmp2468.value;
frost$core$Int* $tmp2470 = $tmp2467[$tmp2469];
int64_t $tmp2471 = $tmp2466.value;
$tmp2465[$tmp2471] = $tmp2470;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:264
frost$core$Int** $tmp2472 = *(&local0);
frost$core$Int64 $tmp2473 = (frost$core$Int64) {191u};
frost$core$Int** $tmp2474 = *(&local0);
frost$core$Int64 $tmp2475 = (frost$core$Int64) {0u};
int64_t $tmp2476 = $tmp2475.value;
frost$core$Int* $tmp2477 = $tmp2474[$tmp2476];
int64_t $tmp2478 = $tmp2473.value;
$tmp2472[$tmp2478] = $tmp2477;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:265
frost$core$Int** $tmp2479 = *(&local0);
frost$core$Int64 $tmp2480 = (frost$core$Int64) {192u};
frost$core$Int** $tmp2481 = *(&local0);
frost$core$Int64 $tmp2482 = (frost$core$Int64) {0u};
int64_t $tmp2483 = $tmp2482.value;
frost$core$Int* $tmp2484 = $tmp2481[$tmp2483];
int64_t $tmp2485 = $tmp2480.value;
$tmp2479[$tmp2485] = $tmp2484;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:266
frost$core$Int** $tmp2486 = *(&local0);
frost$core$Int64 $tmp2487 = (frost$core$Int64) {193u};
frost$core$Int** $tmp2488 = *(&local0);
frost$core$Int64 $tmp2489 = (frost$core$Int64) {0u};
int64_t $tmp2490 = $tmp2489.value;
frost$core$Int* $tmp2491 = $tmp2488[$tmp2490];
int64_t $tmp2492 = $tmp2487.value;
$tmp2486[$tmp2492] = $tmp2491;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:267
frost$core$Int** $tmp2493 = *(&local0);
frost$core$Int64 $tmp2494 = (frost$core$Int64) {194u};
frost$core$Int** $tmp2495 = *(&local0);
frost$core$Int64 $tmp2496 = (frost$core$Int64) {0u};
int64_t $tmp2497 = $tmp2496.value;
frost$core$Int* $tmp2498 = $tmp2495[$tmp2497];
int64_t $tmp2499 = $tmp2494.value;
$tmp2493[$tmp2499] = $tmp2498;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:268
frost$core$Int** $tmp2500 = *(&local0);
frost$core$Int64 $tmp2501 = (frost$core$Int64) {195u};
frost$core$Int** $tmp2502 = *(&local0);
frost$core$Int64 $tmp2503 = (frost$core$Int64) {0u};
int64_t $tmp2504 = $tmp2503.value;
frost$core$Int* $tmp2505 = $tmp2502[$tmp2504];
int64_t $tmp2506 = $tmp2501.value;
$tmp2500[$tmp2506] = $tmp2505;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:269
frost$core$Int** $tmp2507 = *(&local0);
frost$core$Int64 $tmp2508 = (frost$core$Int64) {196u};
frost$core$Int** $tmp2509 = *(&local0);
frost$core$Int64 $tmp2510 = (frost$core$Int64) {0u};
int64_t $tmp2511 = $tmp2510.value;
frost$core$Int* $tmp2512 = $tmp2509[$tmp2511];
int64_t $tmp2513 = $tmp2508.value;
$tmp2507[$tmp2513] = $tmp2512;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:270
frost$core$Int** $tmp2514 = *(&local0);
frost$core$Int64 $tmp2515 = (frost$core$Int64) {197u};
frost$core$Int** $tmp2516 = *(&local0);
frost$core$Int64 $tmp2517 = (frost$core$Int64) {0u};
int64_t $tmp2518 = $tmp2517.value;
frost$core$Int* $tmp2519 = $tmp2516[$tmp2518];
int64_t $tmp2520 = $tmp2515.value;
$tmp2514[$tmp2520] = $tmp2519;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:271
frost$core$Int** $tmp2521 = *(&local0);
frost$core$Int64 $tmp2522 = (frost$core$Int64) {198u};
frost$core$Int** $tmp2523 = *(&local0);
frost$core$Int64 $tmp2524 = (frost$core$Int64) {0u};
int64_t $tmp2525 = $tmp2524.value;
frost$core$Int* $tmp2526 = $tmp2523[$tmp2525];
int64_t $tmp2527 = $tmp2522.value;
$tmp2521[$tmp2527] = $tmp2526;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:272
frost$core$Int** $tmp2528 = *(&local0);
frost$core$Int64 $tmp2529 = (frost$core$Int64) {199u};
frost$core$Int** $tmp2530 = *(&local0);
frost$core$Int64 $tmp2531 = (frost$core$Int64) {0u};
int64_t $tmp2532 = $tmp2531.value;
frost$core$Int* $tmp2533 = $tmp2530[$tmp2532];
int64_t $tmp2534 = $tmp2529.value;
$tmp2528[$tmp2534] = $tmp2533;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:273
frost$core$Int** $tmp2535 = *(&local0);
frost$core$Int64 $tmp2536 = (frost$core$Int64) {200u};
frost$core$Int** $tmp2537 = *(&local0);
frost$core$Int64 $tmp2538 = (frost$core$Int64) {0u};
int64_t $tmp2539 = $tmp2538.value;
frost$core$Int* $tmp2540 = $tmp2537[$tmp2539];
int64_t $tmp2541 = $tmp2536.value;
$tmp2535[$tmp2541] = $tmp2540;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:274
frost$core$Int** $tmp2542 = *(&local0);
frost$core$Int64 $tmp2543 = (frost$core$Int64) {201u};
frost$core$Int** $tmp2544 = *(&local0);
frost$core$Int64 $tmp2545 = (frost$core$Int64) {0u};
int64_t $tmp2546 = $tmp2545.value;
frost$core$Int* $tmp2547 = $tmp2544[$tmp2546];
int64_t $tmp2548 = $tmp2543.value;
$tmp2542[$tmp2548] = $tmp2547;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:275
frost$core$Int** $tmp2549 = *(&local0);
frost$core$Int64 $tmp2550 = (frost$core$Int64) {202u};
frost$core$Int** $tmp2551 = *(&local0);
frost$core$Int64 $tmp2552 = (frost$core$Int64) {0u};
int64_t $tmp2553 = $tmp2552.value;
frost$core$Int* $tmp2554 = $tmp2551[$tmp2553];
int64_t $tmp2555 = $tmp2550.value;
$tmp2549[$tmp2555] = $tmp2554;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:276
frost$core$Int** $tmp2556 = *(&local0);
frost$core$Int64 $tmp2557 = (frost$core$Int64) {203u};
frost$core$Int** $tmp2558 = *(&local0);
frost$core$Int64 $tmp2559 = (frost$core$Int64) {0u};
int64_t $tmp2560 = $tmp2559.value;
frost$core$Int* $tmp2561 = $tmp2558[$tmp2560];
int64_t $tmp2562 = $tmp2557.value;
$tmp2556[$tmp2562] = $tmp2561;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:277
frost$core$Int** $tmp2563 = *(&local0);
frost$core$Int64 $tmp2564 = (frost$core$Int64) {204u};
frost$core$Int** $tmp2565 = *(&local0);
frost$core$Int64 $tmp2566 = (frost$core$Int64) {0u};
int64_t $tmp2567 = $tmp2566.value;
frost$core$Int* $tmp2568 = $tmp2565[$tmp2567];
int64_t $tmp2569 = $tmp2564.value;
$tmp2563[$tmp2569] = $tmp2568;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:278
frost$core$Int** $tmp2570 = *(&local0);
frost$core$Int64 $tmp2571 = (frost$core$Int64) {205u};
frost$core$Int** $tmp2572 = *(&local0);
frost$core$Int64 $tmp2573 = (frost$core$Int64) {0u};
int64_t $tmp2574 = $tmp2573.value;
frost$core$Int* $tmp2575 = $tmp2572[$tmp2574];
int64_t $tmp2576 = $tmp2571.value;
$tmp2570[$tmp2576] = $tmp2575;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:279
frost$core$Int** $tmp2577 = *(&local0);
frost$core$Int64 $tmp2578 = (frost$core$Int64) {206u};
frost$core$Int** $tmp2579 = *(&local0);
frost$core$Int64 $tmp2580 = (frost$core$Int64) {0u};
int64_t $tmp2581 = $tmp2580.value;
frost$core$Int* $tmp2582 = $tmp2579[$tmp2581];
int64_t $tmp2583 = $tmp2578.value;
$tmp2577[$tmp2583] = $tmp2582;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:280
frost$core$Int** $tmp2584 = *(&local0);
frost$core$Int64 $tmp2585 = (frost$core$Int64) {207u};
frost$core$Int** $tmp2586 = *(&local0);
frost$core$Int64 $tmp2587 = (frost$core$Int64) {0u};
int64_t $tmp2588 = $tmp2587.value;
frost$core$Int* $tmp2589 = $tmp2586[$tmp2588];
int64_t $tmp2590 = $tmp2585.value;
$tmp2584[$tmp2590] = $tmp2589;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:281
frost$core$Int** $tmp2591 = *(&local0);
frost$core$Int64 $tmp2592 = (frost$core$Int64) {208u};
frost$core$Int** $tmp2593 = *(&local0);
frost$core$Int64 $tmp2594 = (frost$core$Int64) {0u};
int64_t $tmp2595 = $tmp2594.value;
frost$core$Int* $tmp2596 = $tmp2593[$tmp2595];
int64_t $tmp2597 = $tmp2592.value;
$tmp2591[$tmp2597] = $tmp2596;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:282
frost$core$Int** $tmp2598 = *(&local0);
frost$core$Int64 $tmp2599 = (frost$core$Int64) {209u};
frost$core$Int** $tmp2600 = *(&local0);
frost$core$Int64 $tmp2601 = (frost$core$Int64) {0u};
int64_t $tmp2602 = $tmp2601.value;
frost$core$Int* $tmp2603 = $tmp2600[$tmp2602];
int64_t $tmp2604 = $tmp2599.value;
$tmp2598[$tmp2604] = $tmp2603;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:283
frost$core$Int** $tmp2605 = *(&local0);
frost$core$Int64 $tmp2606 = (frost$core$Int64) {210u};
frost$core$Int** $tmp2607 = *(&local0);
frost$core$Int64 $tmp2608 = (frost$core$Int64) {0u};
int64_t $tmp2609 = $tmp2608.value;
frost$core$Int* $tmp2610 = $tmp2607[$tmp2609];
int64_t $tmp2611 = $tmp2606.value;
$tmp2605[$tmp2611] = $tmp2610;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:284
frost$core$Int** $tmp2612 = *(&local0);
frost$core$Int64 $tmp2613 = (frost$core$Int64) {211u};
frost$core$Int** $tmp2614 = *(&local0);
frost$core$Int64 $tmp2615 = (frost$core$Int64) {0u};
int64_t $tmp2616 = $tmp2615.value;
frost$core$Int* $tmp2617 = $tmp2614[$tmp2616];
int64_t $tmp2618 = $tmp2613.value;
$tmp2612[$tmp2618] = $tmp2617;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:285
frost$core$Int** $tmp2619 = *(&local0);
frost$core$Int64 $tmp2620 = (frost$core$Int64) {212u};
frost$core$Int** $tmp2621 = *(&local0);
frost$core$Int64 $tmp2622 = (frost$core$Int64) {0u};
int64_t $tmp2623 = $tmp2622.value;
frost$core$Int* $tmp2624 = $tmp2621[$tmp2623];
int64_t $tmp2625 = $tmp2620.value;
$tmp2619[$tmp2625] = $tmp2624;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:286
frost$core$Int** $tmp2626 = *(&local0);
frost$core$Int64 $tmp2627 = (frost$core$Int64) {213u};
frost$core$Int** $tmp2628 = *(&local0);
frost$core$Int64 $tmp2629 = (frost$core$Int64) {0u};
int64_t $tmp2630 = $tmp2629.value;
frost$core$Int* $tmp2631 = $tmp2628[$tmp2630];
int64_t $tmp2632 = $tmp2627.value;
$tmp2626[$tmp2632] = $tmp2631;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:287
frost$core$Int** $tmp2633 = *(&local0);
frost$core$Int64 $tmp2634 = (frost$core$Int64) {214u};
frost$core$Int** $tmp2635 = *(&local0);
frost$core$Int64 $tmp2636 = (frost$core$Int64) {0u};
int64_t $tmp2637 = $tmp2636.value;
frost$core$Int* $tmp2638 = $tmp2635[$tmp2637];
int64_t $tmp2639 = $tmp2634.value;
$tmp2633[$tmp2639] = $tmp2638;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:288
frost$core$Int** $tmp2640 = *(&local0);
frost$core$Int64 $tmp2641 = (frost$core$Int64) {215u};
frost$core$Int** $tmp2642 = *(&local0);
frost$core$Int64 $tmp2643 = (frost$core$Int64) {0u};
int64_t $tmp2644 = $tmp2643.value;
frost$core$Int* $tmp2645 = $tmp2642[$tmp2644];
int64_t $tmp2646 = $tmp2641.value;
$tmp2640[$tmp2646] = $tmp2645;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:289
frost$core$Int** $tmp2647 = *(&local0);
frost$core$Int64 $tmp2648 = (frost$core$Int64) {216u};
frost$core$Int** $tmp2649 = *(&local0);
frost$core$Int64 $tmp2650 = (frost$core$Int64) {0u};
int64_t $tmp2651 = $tmp2650.value;
frost$core$Int* $tmp2652 = $tmp2649[$tmp2651];
int64_t $tmp2653 = $tmp2648.value;
$tmp2647[$tmp2653] = $tmp2652;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:290
frost$core$Int** $tmp2654 = *(&local0);
frost$core$Int64 $tmp2655 = (frost$core$Int64) {217u};
frost$core$Int** $tmp2656 = *(&local0);
frost$core$Int64 $tmp2657 = (frost$core$Int64) {0u};
int64_t $tmp2658 = $tmp2657.value;
frost$core$Int* $tmp2659 = $tmp2656[$tmp2658];
int64_t $tmp2660 = $tmp2655.value;
$tmp2654[$tmp2660] = $tmp2659;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:291
frost$core$Int** $tmp2661 = *(&local0);
frost$core$Int64 $tmp2662 = (frost$core$Int64) {218u};
frost$core$Int** $tmp2663 = *(&local0);
frost$core$Int64 $tmp2664 = (frost$core$Int64) {0u};
int64_t $tmp2665 = $tmp2664.value;
frost$core$Int* $tmp2666 = $tmp2663[$tmp2665];
int64_t $tmp2667 = $tmp2662.value;
$tmp2661[$tmp2667] = $tmp2666;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:292
frost$core$Int** $tmp2668 = *(&local0);
frost$core$Int64 $tmp2669 = (frost$core$Int64) {219u};
frost$core$Int** $tmp2670 = *(&local0);
frost$core$Int64 $tmp2671 = (frost$core$Int64) {0u};
int64_t $tmp2672 = $tmp2671.value;
frost$core$Int* $tmp2673 = $tmp2670[$tmp2672];
int64_t $tmp2674 = $tmp2669.value;
$tmp2668[$tmp2674] = $tmp2673;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:293
frost$core$Int** $tmp2675 = *(&local0);
frost$core$Int64 $tmp2676 = (frost$core$Int64) {220u};
frost$core$Int** $tmp2677 = *(&local0);
frost$core$Int64 $tmp2678 = (frost$core$Int64) {0u};
int64_t $tmp2679 = $tmp2678.value;
frost$core$Int* $tmp2680 = $tmp2677[$tmp2679];
int64_t $tmp2681 = $tmp2676.value;
$tmp2675[$tmp2681] = $tmp2680;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:294
frost$core$Int** $tmp2682 = *(&local0);
frost$core$Int64 $tmp2683 = (frost$core$Int64) {221u};
frost$core$Int** $tmp2684 = *(&local0);
frost$core$Int64 $tmp2685 = (frost$core$Int64) {0u};
int64_t $tmp2686 = $tmp2685.value;
frost$core$Int* $tmp2687 = $tmp2684[$tmp2686];
int64_t $tmp2688 = $tmp2683.value;
$tmp2682[$tmp2688] = $tmp2687;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:295
frost$core$Int** $tmp2689 = *(&local0);
frost$core$Int64 $tmp2690 = (frost$core$Int64) {222u};
frost$core$Int** $tmp2691 = *(&local0);
frost$core$Int64 $tmp2692 = (frost$core$Int64) {0u};
int64_t $tmp2693 = $tmp2692.value;
frost$core$Int* $tmp2694 = $tmp2691[$tmp2693];
int64_t $tmp2695 = $tmp2690.value;
$tmp2689[$tmp2695] = $tmp2694;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:296
frost$core$Int** $tmp2696 = *(&local0);
frost$core$Int64 $tmp2697 = (frost$core$Int64) {223u};
frost$core$Int** $tmp2698 = *(&local0);
frost$core$Int64 $tmp2699 = (frost$core$Int64) {0u};
int64_t $tmp2700 = $tmp2699.value;
frost$core$Int* $tmp2701 = $tmp2698[$tmp2700];
int64_t $tmp2702 = $tmp2697.value;
$tmp2696[$tmp2702] = $tmp2701;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:297
frost$core$Int** $tmp2703 = *(&local0);
frost$core$Int64 $tmp2704 = (frost$core$Int64) {224u};
frost$core$Int** $tmp2705 = *(&local0);
frost$core$Int64 $tmp2706 = (frost$core$Int64) {0u};
int64_t $tmp2707 = $tmp2706.value;
frost$core$Int* $tmp2708 = $tmp2705[$tmp2707];
int64_t $tmp2709 = $tmp2704.value;
$tmp2703[$tmp2709] = $tmp2708;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:298
frost$core$Int** $tmp2710 = *(&local0);
frost$core$Int64 $tmp2711 = (frost$core$Int64) {225u};
frost$core$Int** $tmp2712 = *(&local0);
frost$core$Int64 $tmp2713 = (frost$core$Int64) {0u};
int64_t $tmp2714 = $tmp2713.value;
frost$core$Int* $tmp2715 = $tmp2712[$tmp2714];
int64_t $tmp2716 = $tmp2711.value;
$tmp2710[$tmp2716] = $tmp2715;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:299
frost$core$Int** $tmp2717 = *(&local0);
frost$core$Int64 $tmp2718 = (frost$core$Int64) {226u};
frost$core$Int** $tmp2719 = *(&local0);
frost$core$Int64 $tmp2720 = (frost$core$Int64) {0u};
int64_t $tmp2721 = $tmp2720.value;
frost$core$Int* $tmp2722 = $tmp2719[$tmp2721];
int64_t $tmp2723 = $tmp2718.value;
$tmp2717[$tmp2723] = $tmp2722;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:300
frost$core$Int** $tmp2724 = *(&local0);
frost$core$Int64 $tmp2725 = (frost$core$Int64) {227u};
frost$core$Int** $tmp2726 = *(&local0);
frost$core$Int64 $tmp2727 = (frost$core$Int64) {0u};
int64_t $tmp2728 = $tmp2727.value;
frost$core$Int* $tmp2729 = $tmp2726[$tmp2728];
int64_t $tmp2730 = $tmp2725.value;
$tmp2724[$tmp2730] = $tmp2729;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:301
frost$core$Int** $tmp2731 = *(&local0);
frost$core$Int64 $tmp2732 = (frost$core$Int64) {228u};
frost$core$Int** $tmp2733 = *(&local0);
frost$core$Int64 $tmp2734 = (frost$core$Int64) {0u};
int64_t $tmp2735 = $tmp2734.value;
frost$core$Int* $tmp2736 = $tmp2733[$tmp2735];
int64_t $tmp2737 = $tmp2732.value;
$tmp2731[$tmp2737] = $tmp2736;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:302
frost$core$Int** $tmp2738 = *(&local0);
frost$core$Int64 $tmp2739 = (frost$core$Int64) {229u};
frost$core$Int** $tmp2740 = *(&local0);
frost$core$Int64 $tmp2741 = (frost$core$Int64) {0u};
int64_t $tmp2742 = $tmp2741.value;
frost$core$Int* $tmp2743 = $tmp2740[$tmp2742];
int64_t $tmp2744 = $tmp2739.value;
$tmp2738[$tmp2744] = $tmp2743;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:303
frost$core$Int** $tmp2745 = *(&local0);
frost$core$Int64 $tmp2746 = (frost$core$Int64) {230u};
frost$core$Int** $tmp2747 = *(&local0);
frost$core$Int64 $tmp2748 = (frost$core$Int64) {0u};
int64_t $tmp2749 = $tmp2748.value;
frost$core$Int* $tmp2750 = $tmp2747[$tmp2749];
int64_t $tmp2751 = $tmp2746.value;
$tmp2745[$tmp2751] = $tmp2750;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:304
frost$core$Int** $tmp2752 = *(&local0);
frost$core$Int64 $tmp2753 = (frost$core$Int64) {231u};
frost$core$Int** $tmp2754 = *(&local0);
frost$core$Int64 $tmp2755 = (frost$core$Int64) {0u};
int64_t $tmp2756 = $tmp2755.value;
frost$core$Int* $tmp2757 = $tmp2754[$tmp2756];
int64_t $tmp2758 = $tmp2753.value;
$tmp2752[$tmp2758] = $tmp2757;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:305
frost$core$Int** $tmp2759 = *(&local0);
frost$core$Int64 $tmp2760 = (frost$core$Int64) {232u};
frost$core$Int** $tmp2761 = *(&local0);
frost$core$Int64 $tmp2762 = (frost$core$Int64) {0u};
int64_t $tmp2763 = $tmp2762.value;
frost$core$Int* $tmp2764 = $tmp2761[$tmp2763];
int64_t $tmp2765 = $tmp2760.value;
$tmp2759[$tmp2765] = $tmp2764;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:306
frost$core$Int** $tmp2766 = *(&local0);
frost$core$Int64 $tmp2767 = (frost$core$Int64) {233u};
frost$core$Int** $tmp2768 = *(&local0);
frost$core$Int64 $tmp2769 = (frost$core$Int64) {0u};
int64_t $tmp2770 = $tmp2769.value;
frost$core$Int* $tmp2771 = $tmp2768[$tmp2770];
int64_t $tmp2772 = $tmp2767.value;
$tmp2766[$tmp2772] = $tmp2771;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:307
frost$core$Int** $tmp2773 = *(&local0);
frost$core$Int64 $tmp2774 = (frost$core$Int64) {234u};
frost$core$Int** $tmp2775 = *(&local0);
frost$core$Int64 $tmp2776 = (frost$core$Int64) {0u};
int64_t $tmp2777 = $tmp2776.value;
frost$core$Int* $tmp2778 = $tmp2775[$tmp2777];
int64_t $tmp2779 = $tmp2774.value;
$tmp2773[$tmp2779] = $tmp2778;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:308
frost$core$Int** $tmp2780 = *(&local0);
frost$core$Int64 $tmp2781 = (frost$core$Int64) {235u};
frost$core$Int** $tmp2782 = *(&local0);
frost$core$Int64 $tmp2783 = (frost$core$Int64) {0u};
int64_t $tmp2784 = $tmp2783.value;
frost$core$Int* $tmp2785 = $tmp2782[$tmp2784];
int64_t $tmp2786 = $tmp2781.value;
$tmp2780[$tmp2786] = $tmp2785;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:309
frost$core$Int** $tmp2787 = *(&local0);
frost$core$Int64 $tmp2788 = (frost$core$Int64) {236u};
frost$core$Int** $tmp2789 = *(&local0);
frost$core$Int64 $tmp2790 = (frost$core$Int64) {0u};
int64_t $tmp2791 = $tmp2790.value;
frost$core$Int* $tmp2792 = $tmp2789[$tmp2791];
int64_t $tmp2793 = $tmp2788.value;
$tmp2787[$tmp2793] = $tmp2792;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:310
frost$core$Int** $tmp2794 = *(&local0);
frost$core$Int64 $tmp2795 = (frost$core$Int64) {237u};
frost$core$Int** $tmp2796 = *(&local0);
frost$core$Int64 $tmp2797 = (frost$core$Int64) {0u};
int64_t $tmp2798 = $tmp2797.value;
frost$core$Int* $tmp2799 = $tmp2796[$tmp2798];
int64_t $tmp2800 = $tmp2795.value;
$tmp2794[$tmp2800] = $tmp2799;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:311
frost$core$Int** $tmp2801 = *(&local0);
frost$core$Int64 $tmp2802 = (frost$core$Int64) {238u};
frost$core$Int** $tmp2803 = *(&local0);
frost$core$Int64 $tmp2804 = (frost$core$Int64) {0u};
int64_t $tmp2805 = $tmp2804.value;
frost$core$Int* $tmp2806 = $tmp2803[$tmp2805];
int64_t $tmp2807 = $tmp2802.value;
$tmp2801[$tmp2807] = $tmp2806;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:312
frost$core$Int** $tmp2808 = *(&local0);
frost$core$Int64 $tmp2809 = (frost$core$Int64) {239u};
frost$core$Int** $tmp2810 = *(&local0);
frost$core$Int64 $tmp2811 = (frost$core$Int64) {0u};
int64_t $tmp2812 = $tmp2811.value;
frost$core$Int* $tmp2813 = $tmp2810[$tmp2812];
int64_t $tmp2814 = $tmp2809.value;
$tmp2808[$tmp2814] = $tmp2813;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:313
frost$core$Int** $tmp2815 = *(&local0);
frost$core$Int64 $tmp2816 = (frost$core$Int64) {240u};
frost$core$Int** $tmp2817 = *(&local0);
frost$core$Int64 $tmp2818 = (frost$core$Int64) {0u};
int64_t $tmp2819 = $tmp2818.value;
frost$core$Int* $tmp2820 = $tmp2817[$tmp2819];
int64_t $tmp2821 = $tmp2816.value;
$tmp2815[$tmp2821] = $tmp2820;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:314
frost$core$Int** $tmp2822 = *(&local0);
frost$core$Int64 $tmp2823 = (frost$core$Int64) {241u};
frost$core$Int** $tmp2824 = *(&local0);
frost$core$Int64 $tmp2825 = (frost$core$Int64) {0u};
int64_t $tmp2826 = $tmp2825.value;
frost$core$Int* $tmp2827 = $tmp2824[$tmp2826];
int64_t $tmp2828 = $tmp2823.value;
$tmp2822[$tmp2828] = $tmp2827;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:315
frost$core$Int** $tmp2829 = *(&local0);
frost$core$Int64 $tmp2830 = (frost$core$Int64) {242u};
frost$core$Int** $tmp2831 = *(&local0);
frost$core$Int64 $tmp2832 = (frost$core$Int64) {0u};
int64_t $tmp2833 = $tmp2832.value;
frost$core$Int* $tmp2834 = $tmp2831[$tmp2833];
int64_t $tmp2835 = $tmp2830.value;
$tmp2829[$tmp2835] = $tmp2834;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:316
frost$core$Int** $tmp2836 = *(&local0);
frost$core$Int64 $tmp2837 = (frost$core$Int64) {243u};
frost$core$Int** $tmp2838 = *(&local0);
frost$core$Int64 $tmp2839 = (frost$core$Int64) {0u};
int64_t $tmp2840 = $tmp2839.value;
frost$core$Int* $tmp2841 = $tmp2838[$tmp2840];
int64_t $tmp2842 = $tmp2837.value;
$tmp2836[$tmp2842] = $tmp2841;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:317
frost$core$Int** $tmp2843 = *(&local0);
frost$core$Int64 $tmp2844 = (frost$core$Int64) {244u};
frost$core$Int** $tmp2845 = *(&local0);
frost$core$Int64 $tmp2846 = (frost$core$Int64) {0u};
int64_t $tmp2847 = $tmp2846.value;
frost$core$Int* $tmp2848 = $tmp2845[$tmp2847];
int64_t $tmp2849 = $tmp2844.value;
$tmp2843[$tmp2849] = $tmp2848;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:318
frost$core$Int** $tmp2850 = *(&local0);
frost$core$Int64 $tmp2851 = (frost$core$Int64) {245u};
frost$core$Int** $tmp2852 = *(&local0);
frost$core$Int64 $tmp2853 = (frost$core$Int64) {0u};
int64_t $tmp2854 = $tmp2853.value;
frost$core$Int* $tmp2855 = $tmp2852[$tmp2854];
int64_t $tmp2856 = $tmp2851.value;
$tmp2850[$tmp2856] = $tmp2855;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:319
frost$core$Int** $tmp2857 = *(&local0);
frost$core$Int64 $tmp2858 = (frost$core$Int64) {246u};
frost$core$Int** $tmp2859 = *(&local0);
frost$core$Int64 $tmp2860 = (frost$core$Int64) {0u};
int64_t $tmp2861 = $tmp2860.value;
frost$core$Int* $tmp2862 = $tmp2859[$tmp2861];
int64_t $tmp2863 = $tmp2858.value;
$tmp2857[$tmp2863] = $tmp2862;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:320
frost$core$Int** $tmp2864 = *(&local0);
frost$core$Int64 $tmp2865 = (frost$core$Int64) {247u};
frost$core$Int** $tmp2866 = *(&local0);
frost$core$Int64 $tmp2867 = (frost$core$Int64) {0u};
int64_t $tmp2868 = $tmp2867.value;
frost$core$Int* $tmp2869 = $tmp2866[$tmp2868];
int64_t $tmp2870 = $tmp2865.value;
$tmp2864[$tmp2870] = $tmp2869;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:321
frost$core$Int** $tmp2871 = *(&local0);
frost$core$Int64 $tmp2872 = (frost$core$Int64) {248u};
frost$core$Int** $tmp2873 = *(&local0);
frost$core$Int64 $tmp2874 = (frost$core$Int64) {0u};
int64_t $tmp2875 = $tmp2874.value;
frost$core$Int* $tmp2876 = $tmp2873[$tmp2875];
int64_t $tmp2877 = $tmp2872.value;
$tmp2871[$tmp2877] = $tmp2876;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:322
frost$core$Int** $tmp2878 = *(&local0);
frost$core$Int64 $tmp2879 = (frost$core$Int64) {249u};
frost$core$Int** $tmp2880 = *(&local0);
frost$core$Int64 $tmp2881 = (frost$core$Int64) {0u};
int64_t $tmp2882 = $tmp2881.value;
frost$core$Int* $tmp2883 = $tmp2880[$tmp2882];
int64_t $tmp2884 = $tmp2879.value;
$tmp2878[$tmp2884] = $tmp2883;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:323
frost$core$Int** $tmp2885 = *(&local0);
frost$core$Int64 $tmp2886 = (frost$core$Int64) {250u};
frost$core$Int** $tmp2887 = *(&local0);
frost$core$Int64 $tmp2888 = (frost$core$Int64) {0u};
int64_t $tmp2889 = $tmp2888.value;
frost$core$Int* $tmp2890 = $tmp2887[$tmp2889];
int64_t $tmp2891 = $tmp2886.value;
$tmp2885[$tmp2891] = $tmp2890;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:324
frost$core$Int** $tmp2892 = *(&local0);
frost$core$Int64 $tmp2893 = (frost$core$Int64) {251u};
frost$core$Int** $tmp2894 = *(&local0);
frost$core$Int64 $tmp2895 = (frost$core$Int64) {0u};
int64_t $tmp2896 = $tmp2895.value;
frost$core$Int* $tmp2897 = $tmp2894[$tmp2896];
int64_t $tmp2898 = $tmp2893.value;
$tmp2892[$tmp2898] = $tmp2897;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:325
frost$core$Int** $tmp2899 = *(&local0);
frost$core$Int64 $tmp2900 = (frost$core$Int64) {252u};
frost$core$Int** $tmp2901 = *(&local0);
frost$core$Int64 $tmp2902 = (frost$core$Int64) {0u};
int64_t $tmp2903 = $tmp2902.value;
frost$core$Int* $tmp2904 = $tmp2901[$tmp2903];
int64_t $tmp2905 = $tmp2900.value;
$tmp2899[$tmp2905] = $tmp2904;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:326
frost$core$Int** $tmp2906 = *(&local0);
frost$core$Int64 $tmp2907 = (frost$core$Int64) {253u};
frost$core$Int** $tmp2908 = *(&local0);
frost$core$Int64 $tmp2909 = (frost$core$Int64) {0u};
int64_t $tmp2910 = $tmp2909.value;
frost$core$Int* $tmp2911 = $tmp2908[$tmp2910];
int64_t $tmp2912 = $tmp2907.value;
$tmp2906[$tmp2912] = $tmp2911;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:327
frost$core$Int** $tmp2913 = *(&local0);
frost$core$Int64 $tmp2914 = (frost$core$Int64) {254u};
frost$core$Int** $tmp2915 = *(&local0);
frost$core$Int64 $tmp2916 = (frost$core$Int64) {0u};
int64_t $tmp2917 = $tmp2916.value;
frost$core$Int* $tmp2918 = $tmp2915[$tmp2917];
int64_t $tmp2919 = $tmp2914.value;
$tmp2913[$tmp2919] = $tmp2918;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:328
frost$core$Int** $tmp2920 = *(&local0);
frost$core$Int64 $tmp2921 = (frost$core$Int64) {255u};
frost$core$Int** $tmp2922 = *(&local0);
frost$core$Int64 $tmp2923 = (frost$core$Int64) {0u};
int64_t $tmp2924 = $tmp2923.value;
frost$core$Int* $tmp2925 = $tmp2922[$tmp2924];
int64_t $tmp2926 = $tmp2921.value;
$tmp2920[$tmp2926] = $tmp2925;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:329
frost$core$Int** $tmp2927 = *(&local0);
return $tmp2927;

}
frost$core$Int* org$frostlang$regex$RegexLexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int$GT() {

frost$core$Int* local0;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:334
frost$core$Int64 $tmp2928 = (frost$core$Int64) {20u};
int64_t $tmp2929 = $tmp2928.value;
frost$core$Int* $tmp2930 = ((frost$core$Int*) frostAlloc($tmp2929 * 8));
*(&local0) = $tmp2930;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:335
frost$core$Int* $tmp2931 = *(&local0);
frost$core$Int64 $tmp2932 = (frost$core$Int64) {0u};
frost$core$Int $tmp2933 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp2934 = $tmp2932.value;
$tmp2931[$tmp2934] = $tmp2933;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:336
frost$core$Int* $tmp2935 = *(&local0);
frost$core$Int64 $tmp2936 = (frost$core$Int64) {1u};
frost$core$Int $tmp2937 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp2938 = $tmp2936.value;
$tmp2935[$tmp2938] = $tmp2937;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:337
frost$core$Int* $tmp2939 = *(&local0);
frost$core$Int64 $tmp2940 = (frost$core$Int64) {2u};
frost$core$Int $tmp2941 = (frost$core$Int) {3u};
int64_t $tmp2942 = $tmp2940.value;
$tmp2939[$tmp2942] = $tmp2941;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:338
frost$core$Int* $tmp2943 = *(&local0);
frost$core$Int64 $tmp2944 = (frost$core$Int64) {3u};
frost$core$Int $tmp2945 = (frost$core$Int) {3u};
int64_t $tmp2946 = $tmp2944.value;
$tmp2943[$tmp2946] = $tmp2945;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:339
frost$core$Int* $tmp2947 = *(&local0);
frost$core$Int64 $tmp2948 = (frost$core$Int64) {4u};
frost$core$Int $tmp2949 = (frost$core$Int) {3u};
int64_t $tmp2950 = $tmp2948.value;
$tmp2947[$tmp2950] = $tmp2949;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:340
frost$core$Int* $tmp2951 = *(&local0);
frost$core$Int64 $tmp2952 = (frost$core$Int64) {5u};
frost$core$Int $tmp2953 = (frost$core$Int) {8u};
int64_t $tmp2954 = $tmp2952.value;
$tmp2951[$tmp2954] = $tmp2953;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:341
frost$core$Int* $tmp2955 = *(&local0);
frost$core$Int64 $tmp2956 = (frost$core$Int64) {6u};
frost$core$Int $tmp2957 = (frost$core$Int) {9u};
int64_t $tmp2958 = $tmp2956.value;
$tmp2955[$tmp2958] = $tmp2957;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:342
frost$core$Int* $tmp2959 = *(&local0);
frost$core$Int64 $tmp2960 = (frost$core$Int64) {7u};
frost$core$Int $tmp2961 = (frost$core$Int) {6u};
int64_t $tmp2962 = $tmp2960.value;
$tmp2959[$tmp2962] = $tmp2961;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:343
frost$core$Int* $tmp2963 = *(&local0);
frost$core$Int64 $tmp2964 = (frost$core$Int64) {8u};
frost$core$Int $tmp2965 = (frost$core$Int) {5u};
int64_t $tmp2966 = $tmp2964.value;
$tmp2963[$tmp2966] = $tmp2965;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:344
frost$core$Int* $tmp2967 = *(&local0);
frost$core$Int64 $tmp2968 = (frost$core$Int64) {9u};
frost$core$Int $tmp2969 = (frost$core$Int) {3u};
int64_t $tmp2970 = $tmp2968.value;
$tmp2967[$tmp2970] = $tmp2969;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:345
frost$core$Int* $tmp2971 = *(&local0);
frost$core$Int64 $tmp2972 = (frost$core$Int64) {10u};
frost$core$Int $tmp2973 = (frost$core$Int) {15u};
int64_t $tmp2974 = $tmp2972.value;
$tmp2971[$tmp2974] = $tmp2973;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:346
frost$core$Int* $tmp2975 = *(&local0);
frost$core$Int64 $tmp2976 = (frost$core$Int64) {11u};
frost$core$Int $tmp2977 = (frost$core$Int) {3u};
int64_t $tmp2978 = $tmp2976.value;
$tmp2975[$tmp2978] = $tmp2977;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:347
frost$core$Int* $tmp2979 = *(&local0);
frost$core$Int64 $tmp2980 = (frost$core$Int64) {12u};
frost$core$Int $tmp2981 = (frost$core$Int) {7u};
int64_t $tmp2982 = $tmp2980.value;
$tmp2979[$tmp2982] = $tmp2981;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:348
frost$core$Int* $tmp2983 = *(&local0);
frost$core$Int64 $tmp2984 = (frost$core$Int64) {13u};
frost$core$Int $tmp2985 = (frost$core$Int) {12u};
int64_t $tmp2986 = $tmp2984.value;
$tmp2983[$tmp2986] = $tmp2985;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:349
frost$core$Int* $tmp2987 = *(&local0);
frost$core$Int64 $tmp2988 = (frost$core$Int64) {14u};
frost$core$Int $tmp2989 = (frost$core$Int) {3u};
int64_t $tmp2990 = $tmp2988.value;
$tmp2987[$tmp2990] = $tmp2989;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:350
frost$core$Int* $tmp2991 = *(&local0);
frost$core$Int64 $tmp2992 = (frost$core$Int64) {15u};
frost$core$Int $tmp2993 = (frost$core$Int) {13u};
int64_t $tmp2994 = $tmp2992.value;
$tmp2991[$tmp2994] = $tmp2993;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:351
frost$core$Int* $tmp2995 = *(&local0);
frost$core$Int64 $tmp2996 = (frost$core$Int64) {16u};
frost$core$Int $tmp2997 = (frost$core$Int) {3u};
int64_t $tmp2998 = $tmp2996.value;
$tmp2995[$tmp2998] = $tmp2997;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:352
frost$core$Int* $tmp2999 = *(&local0);
frost$core$Int64 $tmp3000 = (frost$core$Int64) {17u};
frost$core$Int $tmp3001 = (frost$core$Int) {3u};
int64_t $tmp3002 = $tmp3000.value;
$tmp2999[$tmp3002] = $tmp3001;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:353
frost$core$Int* $tmp3003 = *(&local0);
frost$core$Int64 $tmp3004 = (frost$core$Int64) {18u};
frost$core$Int $tmp3005 = (frost$core$Int) {3u};
int64_t $tmp3006 = $tmp3004.value;
$tmp3003[$tmp3006] = $tmp3005;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:354
frost$core$Int* $tmp3007 = *(&local0);
frost$core$Int64 $tmp3008 = (frost$core$Int64) {19u};
frost$core$Int $tmp3009 = (frost$core$Int) {3u};
int64_t $tmp3010 = $tmp3008.value;
$tmp3007[$tmp3010] = $tmp3009;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:355
frost$core$Int* $tmp3011 = *(&local0);
return $tmp3011;

}
void org$frostlang$regex$RegexLexer$cleanup(org$frostlang$regex$RegexLexer* param0) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:360
frost$core$Int*** $tmp3012 = &param0->transitions;
frost$core$Int** $tmp3013 = *$tmp3012;
frost$core$Int64 $tmp3014 = (frost$core$Int64) {0u};
int64_t $tmp3015 = $tmp3014.value;
frost$core$Int* $tmp3016 = $tmp3013[$tmp3015];
frostFree($tmp3016);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:361
frost$core$Int*** $tmp3017 = &param0->transitions;
frost$core$Int** $tmp3018 = *$tmp3017;
frost$core$Int64 $tmp3019 = (frost$core$Int64) {10u};
int64_t $tmp3020 = $tmp3019.value;
frost$core$Int* $tmp3021 = $tmp3018[$tmp3020];
frostFree($tmp3021);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:362
frost$core$Int*** $tmp3022 = &param0->transitions;
frost$core$Int** $tmp3023 = *$tmp3022;
frost$core$Int64 $tmp3024 = (frost$core$Int64) {36u};
int64_t $tmp3025 = $tmp3024.value;
frost$core$Int* $tmp3026 = $tmp3023[$tmp3025];
frostFree($tmp3026);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:363
frost$core$Int*** $tmp3027 = &param0->transitions;
frost$core$Int** $tmp3028 = *$tmp3027;
frost$core$Int64 $tmp3029 = (frost$core$Int64) {39u};
int64_t $tmp3030 = $tmp3029.value;
frost$core$Int* $tmp3031 = $tmp3028[$tmp3030];
frostFree($tmp3031);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:364
frost$core$Int*** $tmp3032 = &param0->transitions;
frost$core$Int** $tmp3033 = *$tmp3032;
frost$core$Int64 $tmp3034 = (frost$core$Int64) {40u};
int64_t $tmp3035 = $tmp3034.value;
frost$core$Int* $tmp3036 = $tmp3033[$tmp3035];
frostFree($tmp3036);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:365
frost$core$Int*** $tmp3037 = &param0->transitions;
frost$core$Int** $tmp3038 = *$tmp3037;
frost$core$Int64 $tmp3039 = (frost$core$Int64) {41u};
int64_t $tmp3040 = $tmp3039.value;
frost$core$Int* $tmp3041 = $tmp3038[$tmp3040];
frostFree($tmp3041);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:366
frost$core$Int*** $tmp3042 = &param0->transitions;
frost$core$Int** $tmp3043 = *$tmp3042;
frost$core$Int64 $tmp3044 = (frost$core$Int64) {42u};
int64_t $tmp3045 = $tmp3044.value;
frost$core$Int* $tmp3046 = $tmp3043[$tmp3045];
frostFree($tmp3046);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:367
frost$core$Int*** $tmp3047 = &param0->transitions;
frost$core$Int** $tmp3048 = *$tmp3047;
frost$core$Int64 $tmp3049 = (frost$core$Int64) {43u};
int64_t $tmp3050 = $tmp3049.value;
frost$core$Int* $tmp3051 = $tmp3048[$tmp3050];
frostFree($tmp3051);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:368
frost$core$Int*** $tmp3052 = &param0->transitions;
frost$core$Int** $tmp3053 = *$tmp3052;
frost$core$Int64 $tmp3054 = (frost$core$Int64) {44u};
int64_t $tmp3055 = $tmp3054.value;
frost$core$Int* $tmp3056 = $tmp3053[$tmp3055];
frostFree($tmp3056);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:369
frost$core$Int*** $tmp3057 = &param0->transitions;
frost$core$Int** $tmp3058 = *$tmp3057;
frost$core$Int64 $tmp3059 = (frost$core$Int64) {47u};
int64_t $tmp3060 = $tmp3059.value;
frost$core$Int* $tmp3061 = $tmp3058[$tmp3060];
frostFree($tmp3061);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:370
frost$core$Int*** $tmp3062 = &param0->transitions;
frost$core$Int** $tmp3063 = *$tmp3062;
frost$core$Int64 $tmp3064 = (frost$core$Int64) {48u};
int64_t $tmp3065 = $tmp3064.value;
frost$core$Int* $tmp3066 = $tmp3063[$tmp3065];
frostFree($tmp3066);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:371
frost$core$Int*** $tmp3067 = &param0->transitions;
frost$core$Int** $tmp3068 = *$tmp3067;
frost$core$Int64 $tmp3069 = (frost$core$Int64) {63u};
int64_t $tmp3070 = $tmp3069.value;
frost$core$Int* $tmp3071 = $tmp3068[$tmp3070];
frostFree($tmp3071);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:372
frost$core$Int*** $tmp3072 = &param0->transitions;
frost$core$Int** $tmp3073 = *$tmp3072;
frost$core$Int64 $tmp3074 = (frost$core$Int64) {91u};
int64_t $tmp3075 = $tmp3074.value;
frost$core$Int* $tmp3076 = $tmp3073[$tmp3075];
frostFree($tmp3076);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:373
frost$core$Int*** $tmp3077 = &param0->transitions;
frost$core$Int** $tmp3078 = *$tmp3077;
frost$core$Int64 $tmp3079 = (frost$core$Int64) {92u};
int64_t $tmp3080 = $tmp3079.value;
frost$core$Int* $tmp3081 = $tmp3078[$tmp3080];
frostFree($tmp3081);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:374
frost$core$Int*** $tmp3082 = &param0->transitions;
frost$core$Int** $tmp3083 = *$tmp3082;
frost$core$Int64 $tmp3084 = (frost$core$Int64) {93u};
int64_t $tmp3085 = $tmp3084.value;
frost$core$Int* $tmp3086 = $tmp3083[$tmp3085];
frostFree($tmp3086);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:375
frost$core$Int*** $tmp3087 = &param0->transitions;
frost$core$Int** $tmp3088 = *$tmp3087;
frost$core$Int64 $tmp3089 = (frost$core$Int64) {94u};
int64_t $tmp3090 = $tmp3089.value;
frost$core$Int* $tmp3091 = $tmp3088[$tmp3090];
frostFree($tmp3091);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:376
frost$core$Int*** $tmp3092 = &param0->transitions;
frost$core$Int** $tmp3093 = *$tmp3092;
frost$core$Int64 $tmp3094 = (frost$core$Int64) {96u};
int64_t $tmp3095 = $tmp3094.value;
frost$core$Int* $tmp3096 = $tmp3093[$tmp3095];
frostFree($tmp3096);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:377
frost$core$Int*** $tmp3097 = &param0->transitions;
frost$core$Int** $tmp3098 = *$tmp3097;
frost$core$Int64 $tmp3099 = (frost$core$Int64) {123u};
int64_t $tmp3100 = $tmp3099.value;
frost$core$Int* $tmp3101 = $tmp3098[$tmp3100];
frostFree($tmp3101);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:378
frost$core$Int*** $tmp3102 = &param0->transitions;
frost$core$Int** $tmp3103 = *$tmp3102;
frost$core$Int64 $tmp3104 = (frost$core$Int64) {125u};
int64_t $tmp3105 = $tmp3104.value;
frost$core$Int* $tmp3106 = $tmp3103[$tmp3105];
frostFree($tmp3106);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:379
frost$core$Int*** $tmp3107 = &param0->transitions;
frost$core$Int** $tmp3108 = *$tmp3107;
frostFree($tmp3108);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:380
frost$core$Int** $tmp3109 = &param0->accepts;
frost$core$Int* $tmp3110 = *$tmp3109;
frostFree($tmp3110);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:359
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$plex$runtime$DFA** $tmp3111 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp3112 = *$tmp3111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
return;

}
org$frostlang$regex$RegexToken org$frostlang$regex$RegexLexer$next$R$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexLexer* param0) {

org$frostlang$plex$runtime$RawToken local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:384
org$frostlang$plex$runtime$DFA** $tmp3113 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp3114 = *$tmp3113;
org$frostlang$plex$runtime$RawToken $tmp3115 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp3114);
*(&local0) = $tmp3115;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:385
org$frostlang$plex$runtime$RawToken $tmp3116 = *(&local0);
frost$core$Int $tmp3117 = $tmp3116.kind;
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexLexer.frost:385:82
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp3118 = &(&local2)->$rawValue;
*$tmp3118 = $tmp3117;
org$frostlang$regex$RegexToken$Kind $tmp3119 = *(&local2);
*(&local1) = $tmp3119;
org$frostlang$regex$RegexToken$Kind $tmp3120 = *(&local1);
org$frostlang$plex$runtime$RawToken $tmp3121 = *(&local0);
frost$core$String$Index $tmp3122 = $tmp3121.start;
org$frostlang$plex$runtime$RawToken $tmp3123 = *(&local0);
frost$core$String$Index $tmp3124 = $tmp3123.end;
frost$core$Int* $tmp3125 = &param0->file;
frost$core$Int $tmp3126 = *$tmp3125;
org$frostlang$plex$runtime$RawToken $tmp3127 = *(&local0);
frost$core$Int $tmp3128 = $tmp3127.line;
org$frostlang$plex$runtime$RawToken $tmp3129 = *(&local0);
frost$core$Int $tmp3130 = $tmp3129.column;
org$frostlang$frostc$Position $tmp3131 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int($tmp3126, $tmp3128, $tmp3130);
org$frostlang$regex$RegexToken $tmp3132 = org$frostlang$regex$RegexToken$init$org$frostlang$regex$RegexToken$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position($tmp3120, $tmp3122, $tmp3124, $tmp3131);
return $tmp3132;

}
void org$frostlang$regex$RegexLexer$init(org$frostlang$regex$RegexLexer* param0) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:15
frost$core$Int** $tmp3133 = org$frostlang$regex$RegexLexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT();
frost$core$Int*** $tmp3134 = &param0->transitions;
*$tmp3134 = $tmp3133;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:17
frost$core$Int* $tmp3135 = org$frostlang$regex$RegexLexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int$GT();
frost$core$Int** $tmp3136 = &param0->accepts;
*$tmp3136 = $tmp3135;
return;

}

