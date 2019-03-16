#include "org/frostlang/json/Lexer.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "org/frostlang/json/Token.h"
#include "org/frostlang/plex/runtime/RawToken.h"
#include "org/frostlang/json/Token/Kind.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/json/Position.h"


static frost$core$String $s1;
org$frostlang$json$Lexer$class_type org$frostlang$json$Lexer$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$json$Lexer$cleanup, org$frostlang$json$Lexer$start$frost$core$String, org$frostlang$json$Lexer$next$R$org$frostlang$json$Token} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x4c\x65\x78\x65\x72", 24, 5960953331362814559, NULL };

void org$frostlang$json$Lexer$start$frost$core$String(org$frostlang$json$Lexer* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:20
FROST_ASSERT(80 == sizeof(org$frostlang$plex$runtime$DFA));
org$frostlang$plex$runtime$DFA* $tmp2 = (org$frostlang$plex$runtime$DFA*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$plex$runtime$DFA$class);
frost$core$Int $tmp3 = (frost$core$Int) {31u};
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
frost$core$Int* org$frostlang$json$Lexer$alloc$frost$core$Int$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$core$Int$GT(frost$core$Int param0, frost$core$Int param1) {

frost$core$Int* local0;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp11 = frost$core$Int64$init$frost$core$Int(param0);
int64_t $tmp12 = $tmp11.value;
frost$core$Int* $tmp13 = ((frost$core$Int*) frostAlloc($tmp12 * 8));
*(&local0) = $tmp13;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp55 = *(&local0);
return $tmp55;

}
frost$core$Int** org$frostlang$json$Lexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT() {

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
frost$core$Int* local39;
frost$core$Int local40;
frost$core$Int* local41;
frost$core$Int local42;
frost$core$Int* local43;
frost$core$Int local44;
frost$core$Int* local45;
frost$core$Int local46;
frost$core$Int* local47;
frost$core$Int local48;
frost$core$Int* local49;
frost$core$Int local50;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:34
frost$core$Int64 $tmp56 = (frost$core$Int64) {256u};
int64_t $tmp57 = $tmp56.value;
frost$core$Int** $tmp58 = ((frost$core$Int**) frostAlloc($tmp57 * 8));
*(&local0) = $tmp58;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:35
frost$core$Int** $tmp59 = *(&local0);
frost$core$Int64 $tmp60 = (frost$core$Int64) {0u};
frost$core$Int $tmp61 = (frost$core$Int) {31u};
frost$core$Int $tmp62 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:35:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp63 = frost$core$Int64$init$frost$core$Int($tmp61);
int64_t $tmp64 = $tmp63.value;
frost$core$Int* $tmp65 = ((frost$core$Int*) frostAlloc($tmp64 * 8));
*(&local1) = $tmp65;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp107 = *(&local1);
int64_t $tmp108 = $tmp60.value;
$tmp59[$tmp108] = $tmp107;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:36
frost$core$Int** $tmp109 = *(&local0);
frost$core$Int64 $tmp110 = (frost$core$Int64) {0u};
int64_t $tmp111 = $tmp110.value;
frost$core$Int* $tmp112 = $tmp109[$tmp111];
frost$core$Int64 $tmp113 = (frost$core$Int64) {3u};
frost$core$Int $tmp114 = (frost$core$Int) {3u};
int64_t $tmp115 = $tmp113.value;
$tmp112[$tmp115] = $tmp114;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:37
frost$core$Int** $tmp116 = *(&local0);
frost$core$Int64 $tmp117 = (frost$core$Int64) {1u};
frost$core$Int** $tmp118 = *(&local0);
frost$core$Int64 $tmp119 = (frost$core$Int64) {0u};
int64_t $tmp120 = $tmp119.value;
frost$core$Int* $tmp121 = $tmp118[$tmp120];
int64_t $tmp122 = $tmp117.value;
$tmp116[$tmp122] = $tmp121;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:38
frost$core$Int** $tmp123 = *(&local0);
frost$core$Int64 $tmp124 = (frost$core$Int64) {2u};
frost$core$Int** $tmp125 = *(&local0);
frost$core$Int64 $tmp126 = (frost$core$Int64) {0u};
int64_t $tmp127 = $tmp126.value;
frost$core$Int* $tmp128 = $tmp125[$tmp127];
int64_t $tmp129 = $tmp124.value;
$tmp123[$tmp129] = $tmp128;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:39
frost$core$Int** $tmp130 = *(&local0);
frost$core$Int64 $tmp131 = (frost$core$Int64) {3u};
frost$core$Int** $tmp132 = *(&local0);
frost$core$Int64 $tmp133 = (frost$core$Int64) {0u};
int64_t $tmp134 = $tmp133.value;
frost$core$Int* $tmp135 = $tmp132[$tmp134];
int64_t $tmp136 = $tmp131.value;
$tmp130[$tmp136] = $tmp135;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:40
frost$core$Int** $tmp137 = *(&local0);
frost$core$Int64 $tmp138 = (frost$core$Int64) {4u};
frost$core$Int** $tmp139 = *(&local0);
frost$core$Int64 $tmp140 = (frost$core$Int64) {0u};
int64_t $tmp141 = $tmp140.value;
frost$core$Int* $tmp142 = $tmp139[$tmp141];
int64_t $tmp143 = $tmp138.value;
$tmp137[$tmp143] = $tmp142;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:41
frost$core$Int** $tmp144 = *(&local0);
frost$core$Int64 $tmp145 = (frost$core$Int64) {5u};
frost$core$Int** $tmp146 = *(&local0);
frost$core$Int64 $tmp147 = (frost$core$Int64) {0u};
int64_t $tmp148 = $tmp147.value;
frost$core$Int* $tmp149 = $tmp146[$tmp148];
int64_t $tmp150 = $tmp145.value;
$tmp144[$tmp150] = $tmp149;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:42
frost$core$Int** $tmp151 = *(&local0);
frost$core$Int64 $tmp152 = (frost$core$Int64) {6u};
frost$core$Int** $tmp153 = *(&local0);
frost$core$Int64 $tmp154 = (frost$core$Int64) {0u};
int64_t $tmp155 = $tmp154.value;
frost$core$Int* $tmp156 = $tmp153[$tmp155];
int64_t $tmp157 = $tmp152.value;
$tmp151[$tmp157] = $tmp156;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:43
frost$core$Int** $tmp158 = *(&local0);
frost$core$Int64 $tmp159 = (frost$core$Int64) {7u};
frost$core$Int** $tmp160 = *(&local0);
frost$core$Int64 $tmp161 = (frost$core$Int64) {0u};
int64_t $tmp162 = $tmp161.value;
frost$core$Int* $tmp163 = $tmp160[$tmp162];
int64_t $tmp164 = $tmp159.value;
$tmp158[$tmp164] = $tmp163;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:44
frost$core$Int** $tmp165 = *(&local0);
frost$core$Int64 $tmp166 = (frost$core$Int64) {8u};
frost$core$Int** $tmp167 = *(&local0);
frost$core$Int64 $tmp168 = (frost$core$Int64) {0u};
int64_t $tmp169 = $tmp168.value;
frost$core$Int* $tmp170 = $tmp167[$tmp169];
int64_t $tmp171 = $tmp166.value;
$tmp165[$tmp171] = $tmp170;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:45
frost$core$Int** $tmp172 = *(&local0);
frost$core$Int64 $tmp173 = (frost$core$Int64) {9u};
frost$core$Int $tmp174 = (frost$core$Int) {31u};
frost$core$Int $tmp175 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:45:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp176 = frost$core$Int64$init$frost$core$Int($tmp174);
int64_t $tmp177 = $tmp176.value;
frost$core$Int* $tmp178 = ((frost$core$Int*) frostAlloc($tmp177 * 8));
*(&local3) = $tmp178;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp179 = (frost$core$Int) {0u};
frost$core$Bit $tmp180 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp181 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp179, $tmp174, $tmp180);
frost$core$Int $tmp182 = $tmp181.min;
*(&local4) = $tmp182;
frost$core$Int $tmp183 = $tmp181.max;
frost$core$Bit $tmp184 = $tmp181.inclusive;
bool $tmp185 = $tmp184.value;
frost$core$Int $tmp186 = (frost$core$Int) {1u};
if ($tmp185) goto block14; else goto block15;
block14:;
int64_t $tmp187 = $tmp182.value;
int64_t $tmp188 = $tmp183.value;
bool $tmp189 = $tmp187 <= $tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block11; else goto block12;
block15:;
int64_t $tmp192 = $tmp182.value;
int64_t $tmp193 = $tmp183.value;
bool $tmp194 = $tmp192 < $tmp193;
frost$core$Bit $tmp195 = (frost$core$Bit) {$tmp194};
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp197 = *(&local3);
frost$core$Int $tmp198 = *(&local4);
frost$core$Int64 $tmp199 = frost$core$Int64$init$frost$core$Int($tmp198);
int64_t $tmp200 = $tmp199.value;
$tmp197[$tmp200] = $tmp175;
frost$core$Int $tmp201 = *(&local4);
int64_t $tmp202 = $tmp183.value;
int64_t $tmp203 = $tmp201.value;
int64_t $tmp204 = $tmp202 - $tmp203;
frost$core$Int $tmp205 = (frost$core$Int) {$tmp204};
if ($tmp185) goto block17; else goto block18;
block17:;
int64_t $tmp206 = $tmp205.value;
int64_t $tmp207 = $tmp186.value;
bool $tmp208 = $tmp206 >= $tmp207;
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block16; else goto block12;
block18:;
int64_t $tmp211 = $tmp205.value;
int64_t $tmp212 = $tmp186.value;
bool $tmp213 = $tmp211 > $tmp212;
frost$core$Bit $tmp214 = (frost$core$Bit) {$tmp213};
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block16; else goto block12;
block16:;
int64_t $tmp216 = $tmp201.value;
int64_t $tmp217 = $tmp186.value;
int64_t $tmp218 = $tmp216 + $tmp217;
frost$core$Int $tmp219 = (frost$core$Int) {$tmp218};
*(&local4) = $tmp219;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp220 = *(&local3);
int64_t $tmp221 = $tmp173.value;
$tmp172[$tmp221] = $tmp220;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:46
frost$core$Int** $tmp222 = *(&local0);
frost$core$Int64 $tmp223 = (frost$core$Int64) {9u};
int64_t $tmp224 = $tmp223.value;
frost$core$Int* $tmp225 = $tmp222[$tmp224];
frost$core$Int64 $tmp226 = (frost$core$Int64) {1u};
frost$core$Int $tmp227 = (frost$core$Int) {2u};
int64_t $tmp228 = $tmp226.value;
$tmp225[$tmp228] = $tmp227;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:47
frost$core$Int** $tmp229 = *(&local0);
frost$core$Int64 $tmp230 = (frost$core$Int64) {9u};
int64_t $tmp231 = $tmp230.value;
frost$core$Int* $tmp232 = $tmp229[$tmp231];
frost$core$Int64 $tmp233 = (frost$core$Int64) {2u};
frost$core$Int $tmp234 = (frost$core$Int) {2u};
int64_t $tmp235 = $tmp233.value;
$tmp232[$tmp235] = $tmp234;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:48
frost$core$Int** $tmp236 = *(&local0);
frost$core$Int64 $tmp237 = (frost$core$Int64) {9u};
int64_t $tmp238 = $tmp237.value;
frost$core$Int* $tmp239 = $tmp236[$tmp238];
frost$core$Int64 $tmp240 = (frost$core$Int64) {3u};
frost$core$Int $tmp241 = (frost$core$Int) {3u};
int64_t $tmp242 = $tmp240.value;
$tmp239[$tmp242] = $tmp241;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:49
frost$core$Int** $tmp243 = *(&local0);
frost$core$Int64 $tmp244 = (frost$core$Int64) {10u};
frost$core$Int** $tmp245 = *(&local0);
frost$core$Int64 $tmp246 = (frost$core$Int64) {9u};
int64_t $tmp247 = $tmp246.value;
frost$core$Int* $tmp248 = $tmp245[$tmp247];
int64_t $tmp249 = $tmp244.value;
$tmp243[$tmp249] = $tmp248;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:50
frost$core$Int** $tmp250 = *(&local0);
frost$core$Int64 $tmp251 = (frost$core$Int64) {11u};
frost$core$Int** $tmp252 = *(&local0);
frost$core$Int64 $tmp253 = (frost$core$Int64) {0u};
int64_t $tmp254 = $tmp253.value;
frost$core$Int* $tmp255 = $tmp252[$tmp254];
int64_t $tmp256 = $tmp251.value;
$tmp250[$tmp256] = $tmp255;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:51
frost$core$Int** $tmp257 = *(&local0);
frost$core$Int64 $tmp258 = (frost$core$Int64) {12u};
frost$core$Int** $tmp259 = *(&local0);
frost$core$Int64 $tmp260 = (frost$core$Int64) {0u};
int64_t $tmp261 = $tmp260.value;
frost$core$Int* $tmp262 = $tmp259[$tmp261];
int64_t $tmp263 = $tmp258.value;
$tmp257[$tmp263] = $tmp262;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:52
frost$core$Int** $tmp264 = *(&local0);
frost$core$Int64 $tmp265 = (frost$core$Int64) {13u};
frost$core$Int** $tmp266 = *(&local0);
frost$core$Int64 $tmp267 = (frost$core$Int64) {9u};
int64_t $tmp268 = $tmp267.value;
frost$core$Int* $tmp269 = $tmp266[$tmp268];
int64_t $tmp270 = $tmp265.value;
$tmp264[$tmp270] = $tmp269;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:53
frost$core$Int** $tmp271 = *(&local0);
frost$core$Int64 $tmp272 = (frost$core$Int64) {14u};
frost$core$Int** $tmp273 = *(&local0);
frost$core$Int64 $tmp274 = (frost$core$Int64) {0u};
int64_t $tmp275 = $tmp274.value;
frost$core$Int* $tmp276 = $tmp273[$tmp275];
int64_t $tmp277 = $tmp272.value;
$tmp271[$tmp277] = $tmp276;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:54
frost$core$Int** $tmp278 = *(&local0);
frost$core$Int64 $tmp279 = (frost$core$Int64) {15u};
frost$core$Int** $tmp280 = *(&local0);
frost$core$Int64 $tmp281 = (frost$core$Int64) {0u};
int64_t $tmp282 = $tmp281.value;
frost$core$Int* $tmp283 = $tmp280[$tmp282];
int64_t $tmp284 = $tmp279.value;
$tmp278[$tmp284] = $tmp283;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:55
frost$core$Int** $tmp285 = *(&local0);
frost$core$Int64 $tmp286 = (frost$core$Int64) {16u};
frost$core$Int** $tmp287 = *(&local0);
frost$core$Int64 $tmp288 = (frost$core$Int64) {0u};
int64_t $tmp289 = $tmp288.value;
frost$core$Int* $tmp290 = $tmp287[$tmp289];
int64_t $tmp291 = $tmp286.value;
$tmp285[$tmp291] = $tmp290;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:56
frost$core$Int** $tmp292 = *(&local0);
frost$core$Int64 $tmp293 = (frost$core$Int64) {17u};
frost$core$Int** $tmp294 = *(&local0);
frost$core$Int64 $tmp295 = (frost$core$Int64) {0u};
int64_t $tmp296 = $tmp295.value;
frost$core$Int* $tmp297 = $tmp294[$tmp296];
int64_t $tmp298 = $tmp293.value;
$tmp292[$tmp298] = $tmp297;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:57
frost$core$Int** $tmp299 = *(&local0);
frost$core$Int64 $tmp300 = (frost$core$Int64) {18u};
frost$core$Int** $tmp301 = *(&local0);
frost$core$Int64 $tmp302 = (frost$core$Int64) {0u};
int64_t $tmp303 = $tmp302.value;
frost$core$Int* $tmp304 = $tmp301[$tmp303];
int64_t $tmp305 = $tmp300.value;
$tmp299[$tmp305] = $tmp304;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:58
frost$core$Int** $tmp306 = *(&local0);
frost$core$Int64 $tmp307 = (frost$core$Int64) {19u};
frost$core$Int** $tmp308 = *(&local0);
frost$core$Int64 $tmp309 = (frost$core$Int64) {0u};
int64_t $tmp310 = $tmp309.value;
frost$core$Int* $tmp311 = $tmp308[$tmp310];
int64_t $tmp312 = $tmp307.value;
$tmp306[$tmp312] = $tmp311;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:59
frost$core$Int** $tmp313 = *(&local0);
frost$core$Int64 $tmp314 = (frost$core$Int64) {20u};
frost$core$Int** $tmp315 = *(&local0);
frost$core$Int64 $tmp316 = (frost$core$Int64) {0u};
int64_t $tmp317 = $tmp316.value;
frost$core$Int* $tmp318 = $tmp315[$tmp317];
int64_t $tmp319 = $tmp314.value;
$tmp313[$tmp319] = $tmp318;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:60
frost$core$Int** $tmp320 = *(&local0);
frost$core$Int64 $tmp321 = (frost$core$Int64) {21u};
frost$core$Int** $tmp322 = *(&local0);
frost$core$Int64 $tmp323 = (frost$core$Int64) {0u};
int64_t $tmp324 = $tmp323.value;
frost$core$Int* $tmp325 = $tmp322[$tmp324];
int64_t $tmp326 = $tmp321.value;
$tmp320[$tmp326] = $tmp325;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:61
frost$core$Int** $tmp327 = *(&local0);
frost$core$Int64 $tmp328 = (frost$core$Int64) {22u};
frost$core$Int** $tmp329 = *(&local0);
frost$core$Int64 $tmp330 = (frost$core$Int64) {0u};
int64_t $tmp331 = $tmp330.value;
frost$core$Int* $tmp332 = $tmp329[$tmp331];
int64_t $tmp333 = $tmp328.value;
$tmp327[$tmp333] = $tmp332;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:62
frost$core$Int** $tmp334 = *(&local0);
frost$core$Int64 $tmp335 = (frost$core$Int64) {23u};
frost$core$Int** $tmp336 = *(&local0);
frost$core$Int64 $tmp337 = (frost$core$Int64) {0u};
int64_t $tmp338 = $tmp337.value;
frost$core$Int* $tmp339 = $tmp336[$tmp338];
int64_t $tmp340 = $tmp335.value;
$tmp334[$tmp340] = $tmp339;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:63
frost$core$Int** $tmp341 = *(&local0);
frost$core$Int64 $tmp342 = (frost$core$Int64) {24u};
frost$core$Int** $tmp343 = *(&local0);
frost$core$Int64 $tmp344 = (frost$core$Int64) {0u};
int64_t $tmp345 = $tmp344.value;
frost$core$Int* $tmp346 = $tmp343[$tmp345];
int64_t $tmp347 = $tmp342.value;
$tmp341[$tmp347] = $tmp346;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:64
frost$core$Int** $tmp348 = *(&local0);
frost$core$Int64 $tmp349 = (frost$core$Int64) {25u};
frost$core$Int** $tmp350 = *(&local0);
frost$core$Int64 $tmp351 = (frost$core$Int64) {0u};
int64_t $tmp352 = $tmp351.value;
frost$core$Int* $tmp353 = $tmp350[$tmp352];
int64_t $tmp354 = $tmp349.value;
$tmp348[$tmp354] = $tmp353;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:65
frost$core$Int** $tmp355 = *(&local0);
frost$core$Int64 $tmp356 = (frost$core$Int64) {26u};
frost$core$Int** $tmp357 = *(&local0);
frost$core$Int64 $tmp358 = (frost$core$Int64) {0u};
int64_t $tmp359 = $tmp358.value;
frost$core$Int* $tmp360 = $tmp357[$tmp359];
int64_t $tmp361 = $tmp356.value;
$tmp355[$tmp361] = $tmp360;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:66
frost$core$Int** $tmp362 = *(&local0);
frost$core$Int64 $tmp363 = (frost$core$Int64) {27u};
frost$core$Int** $tmp364 = *(&local0);
frost$core$Int64 $tmp365 = (frost$core$Int64) {0u};
int64_t $tmp366 = $tmp365.value;
frost$core$Int* $tmp367 = $tmp364[$tmp366];
int64_t $tmp368 = $tmp363.value;
$tmp362[$tmp368] = $tmp367;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:67
frost$core$Int** $tmp369 = *(&local0);
frost$core$Int64 $tmp370 = (frost$core$Int64) {28u};
frost$core$Int** $tmp371 = *(&local0);
frost$core$Int64 $tmp372 = (frost$core$Int64) {0u};
int64_t $tmp373 = $tmp372.value;
frost$core$Int* $tmp374 = $tmp371[$tmp373];
int64_t $tmp375 = $tmp370.value;
$tmp369[$tmp375] = $tmp374;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:68
frost$core$Int** $tmp376 = *(&local0);
frost$core$Int64 $tmp377 = (frost$core$Int64) {29u};
frost$core$Int** $tmp378 = *(&local0);
frost$core$Int64 $tmp379 = (frost$core$Int64) {0u};
int64_t $tmp380 = $tmp379.value;
frost$core$Int* $tmp381 = $tmp378[$tmp380];
int64_t $tmp382 = $tmp377.value;
$tmp376[$tmp382] = $tmp381;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:69
frost$core$Int** $tmp383 = *(&local0);
frost$core$Int64 $tmp384 = (frost$core$Int64) {30u};
frost$core$Int** $tmp385 = *(&local0);
frost$core$Int64 $tmp386 = (frost$core$Int64) {0u};
int64_t $tmp387 = $tmp386.value;
frost$core$Int* $tmp388 = $tmp385[$tmp387];
int64_t $tmp389 = $tmp384.value;
$tmp383[$tmp389] = $tmp388;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:70
frost$core$Int** $tmp390 = *(&local0);
frost$core$Int64 $tmp391 = (frost$core$Int64) {31u};
frost$core$Int** $tmp392 = *(&local0);
frost$core$Int64 $tmp393 = (frost$core$Int64) {0u};
int64_t $tmp394 = $tmp393.value;
frost$core$Int* $tmp395 = $tmp392[$tmp394];
int64_t $tmp396 = $tmp391.value;
$tmp390[$tmp396] = $tmp395;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:71
frost$core$Int** $tmp397 = *(&local0);
frost$core$Int64 $tmp398 = (frost$core$Int64) {32u};
frost$core$Int** $tmp399 = *(&local0);
frost$core$Int64 $tmp400 = (frost$core$Int64) {9u};
int64_t $tmp401 = $tmp400.value;
frost$core$Int* $tmp402 = $tmp399[$tmp401];
int64_t $tmp403 = $tmp398.value;
$tmp397[$tmp403] = $tmp402;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:72
frost$core$Int** $tmp404 = *(&local0);
frost$core$Int64 $tmp405 = (frost$core$Int64) {33u};
frost$core$Int** $tmp406 = *(&local0);
frost$core$Int64 $tmp407 = (frost$core$Int64) {0u};
int64_t $tmp408 = $tmp407.value;
frost$core$Int* $tmp409 = $tmp406[$tmp408];
int64_t $tmp410 = $tmp405.value;
$tmp404[$tmp410] = $tmp409;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:73
frost$core$Int** $tmp411 = *(&local0);
frost$core$Int64 $tmp412 = (frost$core$Int64) {34u};
frost$core$Int $tmp413 = (frost$core$Int) {31u};
frost$core$Int $tmp414 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:73:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp415 = frost$core$Int64$init$frost$core$Int($tmp413);
int64_t $tmp416 = $tmp415.value;
frost$core$Int* $tmp417 = ((frost$core$Int*) frostAlloc($tmp416 * 8));
*(&local5) = $tmp417;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp418 = (frost$core$Int) {0u};
frost$core$Bit $tmp419 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp420 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp418, $tmp413, $tmp419);
frost$core$Int $tmp421 = $tmp420.min;
*(&local6) = $tmp421;
frost$core$Int $tmp422 = $tmp420.max;
frost$core$Bit $tmp423 = $tmp420.inclusive;
bool $tmp424 = $tmp423.value;
frost$core$Int $tmp425 = (frost$core$Int) {1u};
if ($tmp424) goto block23; else goto block24;
block23:;
int64_t $tmp426 = $tmp421.value;
int64_t $tmp427 = $tmp422.value;
bool $tmp428 = $tmp426 <= $tmp427;
frost$core$Bit $tmp429 = (frost$core$Bit) {$tmp428};
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block20; else goto block21;
block24:;
int64_t $tmp431 = $tmp421.value;
int64_t $tmp432 = $tmp422.value;
bool $tmp433 = $tmp431 < $tmp432;
frost$core$Bit $tmp434 = (frost$core$Bit) {$tmp433};
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp436 = *(&local5);
frost$core$Int $tmp437 = *(&local6);
frost$core$Int64 $tmp438 = frost$core$Int64$init$frost$core$Int($tmp437);
int64_t $tmp439 = $tmp438.value;
$tmp436[$tmp439] = $tmp414;
frost$core$Int $tmp440 = *(&local6);
int64_t $tmp441 = $tmp422.value;
int64_t $tmp442 = $tmp440.value;
int64_t $tmp443 = $tmp441 - $tmp442;
frost$core$Int $tmp444 = (frost$core$Int) {$tmp443};
if ($tmp424) goto block26; else goto block27;
block26:;
int64_t $tmp445 = $tmp444.value;
int64_t $tmp446 = $tmp425.value;
bool $tmp447 = $tmp445 >= $tmp446;
frost$core$Bit $tmp448 = (frost$core$Bit) {$tmp447};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block25; else goto block21;
block27:;
int64_t $tmp450 = $tmp444.value;
int64_t $tmp451 = $tmp425.value;
bool $tmp452 = $tmp450 > $tmp451;
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block25; else goto block21;
block25:;
int64_t $tmp455 = $tmp440.value;
int64_t $tmp456 = $tmp425.value;
int64_t $tmp457 = $tmp455 + $tmp456;
frost$core$Int $tmp458 = (frost$core$Int) {$tmp457};
*(&local6) = $tmp458;
goto block20;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp459 = *(&local5);
int64_t $tmp460 = $tmp412.value;
$tmp411[$tmp460] = $tmp459;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:74
frost$core$Int** $tmp461 = *(&local0);
frost$core$Int64 $tmp462 = (frost$core$Int64) {34u};
int64_t $tmp463 = $tmp462.value;
frost$core$Int* $tmp464 = $tmp461[$tmp463];
frost$core$Int64 $tmp465 = (frost$core$Int64) {1u};
frost$core$Int $tmp466 = (frost$core$Int) {3u};
int64_t $tmp467 = $tmp465.value;
$tmp464[$tmp467] = $tmp466;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:75
frost$core$Int** $tmp468 = *(&local0);
frost$core$Int64 $tmp469 = (frost$core$Int64) {34u};
int64_t $tmp470 = $tmp469.value;
frost$core$Int* $tmp471 = $tmp468[$tmp470];
frost$core$Int64 $tmp472 = (frost$core$Int64) {3u};
frost$core$Int $tmp473 = (frost$core$Int) {4u};
int64_t $tmp474 = $tmp472.value;
$tmp471[$tmp474] = $tmp473;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:76
frost$core$Int** $tmp475 = *(&local0);
frost$core$Int64 $tmp476 = (frost$core$Int64) {34u};
int64_t $tmp477 = $tmp476.value;
frost$core$Int* $tmp478 = $tmp475[$tmp477];
frost$core$Int64 $tmp479 = (frost$core$Int64) {5u};
frost$core$Int $tmp480 = (frost$core$Int) {3u};
int64_t $tmp481 = $tmp479.value;
$tmp478[$tmp481] = $tmp480;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:77
frost$core$Int** $tmp482 = *(&local0);
frost$core$Int64 $tmp483 = (frost$core$Int64) {35u};
frost$core$Int** $tmp484 = *(&local0);
frost$core$Int64 $tmp485 = (frost$core$Int64) {0u};
int64_t $tmp486 = $tmp485.value;
frost$core$Int* $tmp487 = $tmp484[$tmp486];
int64_t $tmp488 = $tmp483.value;
$tmp482[$tmp488] = $tmp487;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:78
frost$core$Int** $tmp489 = *(&local0);
frost$core$Int64 $tmp490 = (frost$core$Int64) {36u};
frost$core$Int** $tmp491 = *(&local0);
frost$core$Int64 $tmp492 = (frost$core$Int64) {0u};
int64_t $tmp493 = $tmp492.value;
frost$core$Int* $tmp494 = $tmp491[$tmp493];
int64_t $tmp495 = $tmp490.value;
$tmp489[$tmp495] = $tmp494;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:79
frost$core$Int** $tmp496 = *(&local0);
frost$core$Int64 $tmp497 = (frost$core$Int64) {37u};
frost$core$Int** $tmp498 = *(&local0);
frost$core$Int64 $tmp499 = (frost$core$Int64) {0u};
int64_t $tmp500 = $tmp499.value;
frost$core$Int* $tmp501 = $tmp498[$tmp500];
int64_t $tmp502 = $tmp497.value;
$tmp496[$tmp502] = $tmp501;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:80
frost$core$Int** $tmp503 = *(&local0);
frost$core$Int64 $tmp504 = (frost$core$Int64) {38u};
frost$core$Int** $tmp505 = *(&local0);
frost$core$Int64 $tmp506 = (frost$core$Int64) {0u};
int64_t $tmp507 = $tmp506.value;
frost$core$Int* $tmp508 = $tmp505[$tmp507];
int64_t $tmp509 = $tmp504.value;
$tmp503[$tmp509] = $tmp508;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:81
frost$core$Int** $tmp510 = *(&local0);
frost$core$Int64 $tmp511 = (frost$core$Int64) {39u};
frost$core$Int** $tmp512 = *(&local0);
frost$core$Int64 $tmp513 = (frost$core$Int64) {0u};
int64_t $tmp514 = $tmp513.value;
frost$core$Int* $tmp515 = $tmp512[$tmp514];
int64_t $tmp516 = $tmp511.value;
$tmp510[$tmp516] = $tmp515;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:82
frost$core$Int** $tmp517 = *(&local0);
frost$core$Int64 $tmp518 = (frost$core$Int64) {40u};
frost$core$Int** $tmp519 = *(&local0);
frost$core$Int64 $tmp520 = (frost$core$Int64) {0u};
int64_t $tmp521 = $tmp520.value;
frost$core$Int* $tmp522 = $tmp519[$tmp521];
int64_t $tmp523 = $tmp518.value;
$tmp517[$tmp523] = $tmp522;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:83
frost$core$Int** $tmp524 = *(&local0);
frost$core$Int64 $tmp525 = (frost$core$Int64) {41u};
frost$core$Int** $tmp526 = *(&local0);
frost$core$Int64 $tmp527 = (frost$core$Int64) {0u};
int64_t $tmp528 = $tmp527.value;
frost$core$Int* $tmp529 = $tmp526[$tmp528];
int64_t $tmp530 = $tmp525.value;
$tmp524[$tmp530] = $tmp529;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:84
frost$core$Int** $tmp531 = *(&local0);
frost$core$Int64 $tmp532 = (frost$core$Int64) {42u};
frost$core$Int** $tmp533 = *(&local0);
frost$core$Int64 $tmp534 = (frost$core$Int64) {0u};
int64_t $tmp535 = $tmp534.value;
frost$core$Int* $tmp536 = $tmp533[$tmp535];
int64_t $tmp537 = $tmp532.value;
$tmp531[$tmp537] = $tmp536;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:85
frost$core$Int** $tmp538 = *(&local0);
frost$core$Int64 $tmp539 = (frost$core$Int64) {43u};
frost$core$Int $tmp540 = (frost$core$Int) {31u};
frost$core$Int $tmp541 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:85:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp542 = frost$core$Int64$init$frost$core$Int($tmp540);
int64_t $tmp543 = $tmp542.value;
frost$core$Int* $tmp544 = ((frost$core$Int*) frostAlloc($tmp543 * 8));
*(&local7) = $tmp544;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp545 = (frost$core$Int) {0u};
frost$core$Bit $tmp546 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp547 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp545, $tmp540, $tmp546);
frost$core$Int $tmp548 = $tmp547.min;
*(&local8) = $tmp548;
frost$core$Int $tmp549 = $tmp547.max;
frost$core$Bit $tmp550 = $tmp547.inclusive;
bool $tmp551 = $tmp550.value;
frost$core$Int $tmp552 = (frost$core$Int) {1u};
if ($tmp551) goto block32; else goto block33;
block32:;
int64_t $tmp553 = $tmp548.value;
int64_t $tmp554 = $tmp549.value;
bool $tmp555 = $tmp553 <= $tmp554;
frost$core$Bit $tmp556 = (frost$core$Bit) {$tmp555};
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block29; else goto block30;
block33:;
int64_t $tmp558 = $tmp548.value;
int64_t $tmp559 = $tmp549.value;
bool $tmp560 = $tmp558 < $tmp559;
frost$core$Bit $tmp561 = (frost$core$Bit) {$tmp560};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp563 = *(&local7);
frost$core$Int $tmp564 = *(&local8);
frost$core$Int64 $tmp565 = frost$core$Int64$init$frost$core$Int($tmp564);
int64_t $tmp566 = $tmp565.value;
$tmp563[$tmp566] = $tmp541;
frost$core$Int $tmp567 = *(&local8);
int64_t $tmp568 = $tmp549.value;
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568 - $tmp569;
frost$core$Int $tmp571 = (frost$core$Int) {$tmp570};
if ($tmp551) goto block35; else goto block36;
block35:;
int64_t $tmp572 = $tmp571.value;
int64_t $tmp573 = $tmp552.value;
bool $tmp574 = $tmp572 >= $tmp573;
frost$core$Bit $tmp575 = (frost$core$Bit) {$tmp574};
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block34; else goto block30;
block36:;
int64_t $tmp577 = $tmp571.value;
int64_t $tmp578 = $tmp552.value;
bool $tmp579 = $tmp577 > $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block34; else goto block30;
block34:;
int64_t $tmp582 = $tmp567.value;
int64_t $tmp583 = $tmp552.value;
int64_t $tmp584 = $tmp582 + $tmp583;
frost$core$Int $tmp585 = (frost$core$Int) {$tmp584};
*(&local8) = $tmp585;
goto block29;
block30:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp586 = *(&local7);
int64_t $tmp587 = $tmp539.value;
$tmp538[$tmp587] = $tmp586;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:86
frost$core$Int** $tmp588 = *(&local0);
frost$core$Int64 $tmp589 = (frost$core$Int64) {43u};
int64_t $tmp590 = $tmp589.value;
frost$core$Int* $tmp591 = $tmp588[$tmp590];
frost$core$Int64 $tmp592 = (frost$core$Int64) {3u};
frost$core$Int $tmp593 = (frost$core$Int) {3u};
int64_t $tmp594 = $tmp592.value;
$tmp591[$tmp594] = $tmp593;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:87
frost$core$Int** $tmp595 = *(&local0);
frost$core$Int64 $tmp596 = (frost$core$Int64) {43u};
int64_t $tmp597 = $tmp596.value;
frost$core$Int* $tmp598 = $tmp595[$tmp597];
frost$core$Int64 $tmp599 = (frost$core$Int64) {10u};
frost$core$Int $tmp600 = (frost$core$Int) {11u};
int64_t $tmp601 = $tmp599.value;
$tmp598[$tmp601] = $tmp600;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:88
frost$core$Int** $tmp602 = *(&local0);
frost$core$Int64 $tmp603 = (frost$core$Int64) {44u};
frost$core$Int $tmp604 = (frost$core$Int) {31u};
frost$core$Int $tmp605 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:88:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp606 = frost$core$Int64$init$frost$core$Int($tmp604);
int64_t $tmp607 = $tmp606.value;
frost$core$Int* $tmp608 = ((frost$core$Int*) frostAlloc($tmp607 * 8));
*(&local9) = $tmp608;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp609 = (frost$core$Int) {0u};
frost$core$Bit $tmp610 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp611 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp609, $tmp604, $tmp610);
frost$core$Int $tmp612 = $tmp611.min;
*(&local10) = $tmp612;
frost$core$Int $tmp613 = $tmp611.max;
frost$core$Bit $tmp614 = $tmp611.inclusive;
bool $tmp615 = $tmp614.value;
frost$core$Int $tmp616 = (frost$core$Int) {1u};
if ($tmp615) goto block41; else goto block42;
block41:;
int64_t $tmp617 = $tmp612.value;
int64_t $tmp618 = $tmp613.value;
bool $tmp619 = $tmp617 <= $tmp618;
frost$core$Bit $tmp620 = (frost$core$Bit) {$tmp619};
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block38; else goto block39;
block42:;
int64_t $tmp622 = $tmp612.value;
int64_t $tmp623 = $tmp613.value;
bool $tmp624 = $tmp622 < $tmp623;
frost$core$Bit $tmp625 = (frost$core$Bit) {$tmp624};
bool $tmp626 = $tmp625.value;
if ($tmp626) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp627 = *(&local9);
frost$core$Int $tmp628 = *(&local10);
frost$core$Int64 $tmp629 = frost$core$Int64$init$frost$core$Int($tmp628);
int64_t $tmp630 = $tmp629.value;
$tmp627[$tmp630] = $tmp605;
frost$core$Int $tmp631 = *(&local10);
int64_t $tmp632 = $tmp613.value;
int64_t $tmp633 = $tmp631.value;
int64_t $tmp634 = $tmp632 - $tmp633;
frost$core$Int $tmp635 = (frost$core$Int) {$tmp634};
if ($tmp615) goto block44; else goto block45;
block44:;
int64_t $tmp636 = $tmp635.value;
int64_t $tmp637 = $tmp616.value;
bool $tmp638 = $tmp636 >= $tmp637;
frost$core$Bit $tmp639 = (frost$core$Bit) {$tmp638};
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block43; else goto block39;
block45:;
int64_t $tmp641 = $tmp635.value;
int64_t $tmp642 = $tmp616.value;
bool $tmp643 = $tmp641 > $tmp642;
frost$core$Bit $tmp644 = (frost$core$Bit) {$tmp643};
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block43; else goto block39;
block43:;
int64_t $tmp646 = $tmp631.value;
int64_t $tmp647 = $tmp616.value;
int64_t $tmp648 = $tmp646 + $tmp647;
frost$core$Int $tmp649 = (frost$core$Int) {$tmp648};
*(&local10) = $tmp649;
goto block38;
block39:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp650 = *(&local9);
int64_t $tmp651 = $tmp603.value;
$tmp602[$tmp651] = $tmp650;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:89
frost$core$Int** $tmp652 = *(&local0);
frost$core$Int64 $tmp653 = (frost$core$Int64) {44u};
int64_t $tmp654 = $tmp653.value;
frost$core$Int* $tmp655 = $tmp652[$tmp654];
frost$core$Int64 $tmp656 = (frost$core$Int64) {1u};
frost$core$Int $tmp657 = (frost$core$Int) {6u};
int64_t $tmp658 = $tmp656.value;
$tmp655[$tmp658] = $tmp657;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:90
frost$core$Int** $tmp659 = *(&local0);
frost$core$Int64 $tmp660 = (frost$core$Int64) {44u};
int64_t $tmp661 = $tmp660.value;
frost$core$Int* $tmp662 = $tmp659[$tmp661];
frost$core$Int64 $tmp663 = (frost$core$Int64) {3u};
frost$core$Int $tmp664 = (frost$core$Int) {3u};
int64_t $tmp665 = $tmp663.value;
$tmp662[$tmp665] = $tmp664;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:91
frost$core$Int** $tmp666 = *(&local0);
frost$core$Int64 $tmp667 = (frost$core$Int64) {45u};
frost$core$Int $tmp668 = (frost$core$Int) {31u};
frost$core$Int $tmp669 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:91:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp670 = frost$core$Int64$init$frost$core$Int($tmp668);
int64_t $tmp671 = $tmp670.value;
frost$core$Int* $tmp672 = ((frost$core$Int*) frostAlloc($tmp671 * 8));
*(&local11) = $tmp672;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp673 = (frost$core$Int) {0u};
frost$core$Bit $tmp674 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp675 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp673, $tmp668, $tmp674);
frost$core$Int $tmp676 = $tmp675.min;
*(&local12) = $tmp676;
frost$core$Int $tmp677 = $tmp675.max;
frost$core$Bit $tmp678 = $tmp675.inclusive;
bool $tmp679 = $tmp678.value;
frost$core$Int $tmp680 = (frost$core$Int) {1u};
if ($tmp679) goto block50; else goto block51;
block50:;
int64_t $tmp681 = $tmp676.value;
int64_t $tmp682 = $tmp677.value;
bool $tmp683 = $tmp681 <= $tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block47; else goto block48;
block51:;
int64_t $tmp686 = $tmp676.value;
int64_t $tmp687 = $tmp677.value;
bool $tmp688 = $tmp686 < $tmp687;
frost$core$Bit $tmp689 = (frost$core$Bit) {$tmp688};
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp691 = *(&local11);
frost$core$Int $tmp692 = *(&local12);
frost$core$Int64 $tmp693 = frost$core$Int64$init$frost$core$Int($tmp692);
int64_t $tmp694 = $tmp693.value;
$tmp691[$tmp694] = $tmp669;
frost$core$Int $tmp695 = *(&local12);
int64_t $tmp696 = $tmp677.value;
int64_t $tmp697 = $tmp695.value;
int64_t $tmp698 = $tmp696 - $tmp697;
frost$core$Int $tmp699 = (frost$core$Int) {$tmp698};
if ($tmp679) goto block53; else goto block54;
block53:;
int64_t $tmp700 = $tmp699.value;
int64_t $tmp701 = $tmp680.value;
bool $tmp702 = $tmp700 >= $tmp701;
frost$core$Bit $tmp703 = (frost$core$Bit) {$tmp702};
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block52; else goto block48;
block54:;
int64_t $tmp705 = $tmp699.value;
int64_t $tmp706 = $tmp680.value;
bool $tmp707 = $tmp705 > $tmp706;
frost$core$Bit $tmp708 = (frost$core$Bit) {$tmp707};
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block52; else goto block48;
block52:;
int64_t $tmp710 = $tmp695.value;
int64_t $tmp711 = $tmp680.value;
int64_t $tmp712 = $tmp710 + $tmp711;
frost$core$Int $tmp713 = (frost$core$Int) {$tmp712};
*(&local12) = $tmp713;
goto block47;
block48:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp714 = *(&local11);
int64_t $tmp715 = $tmp667.value;
$tmp666[$tmp715] = $tmp714;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:92
frost$core$Int** $tmp716 = *(&local0);
frost$core$Int64 $tmp717 = (frost$core$Int64) {45u};
int64_t $tmp718 = $tmp717.value;
frost$core$Int* $tmp719 = $tmp716[$tmp718];
frost$core$Int64 $tmp720 = (frost$core$Int64) {1u};
frost$core$Int $tmp721 = (frost$core$Int) {7u};
int64_t $tmp722 = $tmp720.value;
$tmp719[$tmp722] = $tmp721;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:93
frost$core$Int** $tmp723 = *(&local0);
frost$core$Int64 $tmp724 = (frost$core$Int64) {45u};
int64_t $tmp725 = $tmp724.value;
frost$core$Int* $tmp726 = $tmp723[$tmp725];
frost$core$Int64 $tmp727 = (frost$core$Int64) {3u};
frost$core$Int $tmp728 = (frost$core$Int) {3u};
int64_t $tmp729 = $tmp727.value;
$tmp726[$tmp729] = $tmp728;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:94
frost$core$Int** $tmp730 = *(&local0);
frost$core$Int64 $tmp731 = (frost$core$Int64) {45u};
int64_t $tmp732 = $tmp731.value;
frost$core$Int* $tmp733 = $tmp730[$tmp732];
frost$core$Int64 $tmp734 = (frost$core$Int64) {10u};
frost$core$Int $tmp735 = (frost$core$Int) {11u};
int64_t $tmp736 = $tmp734.value;
$tmp733[$tmp736] = $tmp735;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:95
frost$core$Int** $tmp737 = *(&local0);
frost$core$Int64 $tmp738 = (frost$core$Int64) {46u};
frost$core$Int $tmp739 = (frost$core$Int) {31u};
frost$core$Int $tmp740 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:95:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp741 = frost$core$Int64$init$frost$core$Int($tmp739);
int64_t $tmp742 = $tmp741.value;
frost$core$Int* $tmp743 = ((frost$core$Int*) frostAlloc($tmp742 * 8));
*(&local13) = $tmp743;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp744 = (frost$core$Int) {0u};
frost$core$Bit $tmp745 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp746 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp744, $tmp739, $tmp745);
frost$core$Int $tmp747 = $tmp746.min;
*(&local14) = $tmp747;
frost$core$Int $tmp748 = $tmp746.max;
frost$core$Bit $tmp749 = $tmp746.inclusive;
bool $tmp750 = $tmp749.value;
frost$core$Int $tmp751 = (frost$core$Int) {1u};
if ($tmp750) goto block59; else goto block60;
block59:;
int64_t $tmp752 = $tmp747.value;
int64_t $tmp753 = $tmp748.value;
bool $tmp754 = $tmp752 <= $tmp753;
frost$core$Bit $tmp755 = (frost$core$Bit) {$tmp754};
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block56; else goto block57;
block60:;
int64_t $tmp757 = $tmp747.value;
int64_t $tmp758 = $tmp748.value;
bool $tmp759 = $tmp757 < $tmp758;
frost$core$Bit $tmp760 = (frost$core$Bit) {$tmp759};
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp762 = *(&local13);
frost$core$Int $tmp763 = *(&local14);
frost$core$Int64 $tmp764 = frost$core$Int64$init$frost$core$Int($tmp763);
int64_t $tmp765 = $tmp764.value;
$tmp762[$tmp765] = $tmp740;
frost$core$Int $tmp766 = *(&local14);
int64_t $tmp767 = $tmp748.value;
int64_t $tmp768 = $tmp766.value;
int64_t $tmp769 = $tmp767 - $tmp768;
frost$core$Int $tmp770 = (frost$core$Int) {$tmp769};
if ($tmp750) goto block62; else goto block63;
block62:;
int64_t $tmp771 = $tmp770.value;
int64_t $tmp772 = $tmp751.value;
bool $tmp773 = $tmp771 >= $tmp772;
frost$core$Bit $tmp774 = (frost$core$Bit) {$tmp773};
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block61; else goto block57;
block63:;
int64_t $tmp776 = $tmp770.value;
int64_t $tmp777 = $tmp751.value;
bool $tmp778 = $tmp776 > $tmp777;
frost$core$Bit $tmp779 = (frost$core$Bit) {$tmp778};
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block61; else goto block57;
block61:;
int64_t $tmp781 = $tmp766.value;
int64_t $tmp782 = $tmp751.value;
int64_t $tmp783 = $tmp781 + $tmp782;
frost$core$Int $tmp784 = (frost$core$Int) {$tmp783};
*(&local14) = $tmp784;
goto block56;
block57:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp785 = *(&local13);
int64_t $tmp786 = $tmp738.value;
$tmp737[$tmp786] = $tmp785;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:96
frost$core$Int** $tmp787 = *(&local0);
frost$core$Int64 $tmp788 = (frost$core$Int64) {46u};
int64_t $tmp789 = $tmp788.value;
frost$core$Int* $tmp790 = $tmp787[$tmp789];
frost$core$Int64 $tmp791 = (frost$core$Int64) {1u};
frost$core$Int $tmp792 = (frost$core$Int) {9u};
int64_t $tmp793 = $tmp791.value;
$tmp790[$tmp793] = $tmp792;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:97
frost$core$Int** $tmp794 = *(&local0);
frost$core$Int64 $tmp795 = (frost$core$Int64) {46u};
int64_t $tmp796 = $tmp795.value;
frost$core$Int* $tmp797 = $tmp794[$tmp796];
frost$core$Int64 $tmp798 = (frost$core$Int64) {3u};
frost$core$Int $tmp799 = (frost$core$Int) {3u};
int64_t $tmp800 = $tmp798.value;
$tmp797[$tmp800] = $tmp799;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:98
frost$core$Int** $tmp801 = *(&local0);
frost$core$Int64 $tmp802 = (frost$core$Int64) {46u};
int64_t $tmp803 = $tmp802.value;
frost$core$Int* $tmp804 = $tmp801[$tmp803];
frost$core$Int64 $tmp805 = (frost$core$Int64) {8u};
frost$core$Int $tmp806 = (frost$core$Int) {9u};
int64_t $tmp807 = $tmp805.value;
$tmp804[$tmp807] = $tmp806;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:99
frost$core$Int** $tmp808 = *(&local0);
frost$core$Int64 $tmp809 = (frost$core$Int64) {47u};
frost$core$Int** $tmp810 = *(&local0);
frost$core$Int64 $tmp811 = (frost$core$Int64) {0u};
int64_t $tmp812 = $tmp811.value;
frost$core$Int* $tmp813 = $tmp810[$tmp812];
int64_t $tmp814 = $tmp809.value;
$tmp808[$tmp814] = $tmp813;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:100
frost$core$Int** $tmp815 = *(&local0);
frost$core$Int64 $tmp816 = (frost$core$Int64) {48u};
frost$core$Int $tmp817 = (frost$core$Int) {31u};
frost$core$Int $tmp818 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:100:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp819 = frost$core$Int64$init$frost$core$Int($tmp817);
int64_t $tmp820 = $tmp819.value;
frost$core$Int* $tmp821 = ((frost$core$Int*) frostAlloc($tmp820 * 8));
*(&local15) = $tmp821;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp822 = (frost$core$Int) {0u};
frost$core$Bit $tmp823 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp824 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp822, $tmp817, $tmp823);
frost$core$Int $tmp825 = $tmp824.min;
*(&local16) = $tmp825;
frost$core$Int $tmp826 = $tmp824.max;
frost$core$Bit $tmp827 = $tmp824.inclusive;
bool $tmp828 = $tmp827.value;
frost$core$Int $tmp829 = (frost$core$Int) {1u};
if ($tmp828) goto block68; else goto block69;
block68:;
int64_t $tmp830 = $tmp825.value;
int64_t $tmp831 = $tmp826.value;
bool $tmp832 = $tmp830 <= $tmp831;
frost$core$Bit $tmp833 = (frost$core$Bit) {$tmp832};
bool $tmp834 = $tmp833.value;
if ($tmp834) goto block65; else goto block66;
block69:;
int64_t $tmp835 = $tmp825.value;
int64_t $tmp836 = $tmp826.value;
bool $tmp837 = $tmp835 < $tmp836;
frost$core$Bit $tmp838 = (frost$core$Bit) {$tmp837};
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp840 = *(&local15);
frost$core$Int $tmp841 = *(&local16);
frost$core$Int64 $tmp842 = frost$core$Int64$init$frost$core$Int($tmp841);
int64_t $tmp843 = $tmp842.value;
$tmp840[$tmp843] = $tmp818;
frost$core$Int $tmp844 = *(&local16);
int64_t $tmp845 = $tmp826.value;
int64_t $tmp846 = $tmp844.value;
int64_t $tmp847 = $tmp845 - $tmp846;
frost$core$Int $tmp848 = (frost$core$Int) {$tmp847};
if ($tmp828) goto block71; else goto block72;
block71:;
int64_t $tmp849 = $tmp848.value;
int64_t $tmp850 = $tmp829.value;
bool $tmp851 = $tmp849 >= $tmp850;
frost$core$Bit $tmp852 = (frost$core$Bit) {$tmp851};
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block70; else goto block66;
block72:;
int64_t $tmp854 = $tmp848.value;
int64_t $tmp855 = $tmp829.value;
bool $tmp856 = $tmp854 > $tmp855;
frost$core$Bit $tmp857 = (frost$core$Bit) {$tmp856};
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block70; else goto block66;
block70:;
int64_t $tmp859 = $tmp844.value;
int64_t $tmp860 = $tmp829.value;
int64_t $tmp861 = $tmp859 + $tmp860;
frost$core$Int $tmp862 = (frost$core$Int) {$tmp861};
*(&local16) = $tmp862;
goto block65;
block66:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp863 = *(&local15);
int64_t $tmp864 = $tmp816.value;
$tmp815[$tmp864] = $tmp863;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:101
frost$core$Int** $tmp865 = *(&local0);
frost$core$Int64 $tmp866 = (frost$core$Int64) {48u};
int64_t $tmp867 = $tmp866.value;
frost$core$Int* $tmp868 = $tmp865[$tmp867];
frost$core$Int64 $tmp869 = (frost$core$Int64) {1u};
frost$core$Int $tmp870 = (frost$core$Int) {8u};
int64_t $tmp871 = $tmp869.value;
$tmp868[$tmp871] = $tmp870;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:102
frost$core$Int** $tmp872 = *(&local0);
frost$core$Int64 $tmp873 = (frost$core$Int64) {48u};
int64_t $tmp874 = $tmp873.value;
frost$core$Int* $tmp875 = $tmp872[$tmp874];
frost$core$Int64 $tmp876 = (frost$core$Int64) {3u};
frost$core$Int $tmp877 = (frost$core$Int) {3u};
int64_t $tmp878 = $tmp876.value;
$tmp875[$tmp878] = $tmp877;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:103
frost$core$Int** $tmp879 = *(&local0);
frost$core$Int64 $tmp880 = (frost$core$Int64) {48u};
int64_t $tmp881 = $tmp880.value;
frost$core$Int* $tmp882 = $tmp879[$tmp881];
frost$core$Int64 $tmp883 = (frost$core$Int64) {7u};
frost$core$Int $tmp884 = (frost$core$Int) {8u};
int64_t $tmp885 = $tmp883.value;
$tmp882[$tmp885] = $tmp884;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:104
frost$core$Int** $tmp886 = *(&local0);
frost$core$Int64 $tmp887 = (frost$core$Int64) {48u};
int64_t $tmp888 = $tmp887.value;
frost$core$Int* $tmp889 = $tmp886[$tmp888];
frost$core$Int64 $tmp890 = (frost$core$Int64) {8u};
frost$core$Int $tmp891 = (frost$core$Int) {8u};
int64_t $tmp892 = $tmp890.value;
$tmp889[$tmp892] = $tmp891;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:105
frost$core$Int** $tmp893 = *(&local0);
frost$core$Int64 $tmp894 = (frost$core$Int64) {48u};
int64_t $tmp895 = $tmp894.value;
frost$core$Int* $tmp896 = $tmp893[$tmp895];
frost$core$Int64 $tmp897 = (frost$core$Int64) {9u};
frost$core$Int $tmp898 = (frost$core$Int) {9u};
int64_t $tmp899 = $tmp897.value;
$tmp896[$tmp899] = $tmp898;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:106
frost$core$Int** $tmp900 = *(&local0);
frost$core$Int64 $tmp901 = (frost$core$Int64) {48u};
int64_t $tmp902 = $tmp901.value;
frost$core$Int* $tmp903 = $tmp900[$tmp902];
frost$core$Int64 $tmp904 = (frost$core$Int64) {10u};
frost$core$Int $tmp905 = (frost$core$Int) {12u};
int64_t $tmp906 = $tmp904.value;
$tmp903[$tmp906] = $tmp905;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:107
frost$core$Int** $tmp907 = *(&local0);
frost$core$Int64 $tmp908 = (frost$core$Int64) {48u};
int64_t $tmp909 = $tmp908.value;
frost$core$Int* $tmp910 = $tmp907[$tmp909];
frost$core$Int64 $tmp911 = (frost$core$Int64) {11u};
frost$core$Int $tmp912 = (frost$core$Int) {12u};
int64_t $tmp913 = $tmp911.value;
$tmp910[$tmp913] = $tmp912;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:108
frost$core$Int** $tmp914 = *(&local0);
frost$core$Int64 $tmp915 = (frost$core$Int64) {48u};
int64_t $tmp916 = $tmp915.value;
frost$core$Int* $tmp917 = $tmp914[$tmp916];
frost$core$Int64 $tmp918 = (frost$core$Int64) {12u};
frost$core$Int $tmp919 = (frost$core$Int) {12u};
int64_t $tmp920 = $tmp918.value;
$tmp917[$tmp920] = $tmp919;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:109
frost$core$Int** $tmp921 = *(&local0);
frost$core$Int64 $tmp922 = (frost$core$Int64) {49u};
frost$core$Int** $tmp923 = *(&local0);
frost$core$Int64 $tmp924 = (frost$core$Int64) {48u};
int64_t $tmp925 = $tmp924.value;
frost$core$Int* $tmp926 = $tmp923[$tmp925];
int64_t $tmp927 = $tmp922.value;
$tmp921[$tmp927] = $tmp926;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:110
frost$core$Int** $tmp928 = *(&local0);
frost$core$Int64 $tmp929 = (frost$core$Int64) {50u};
frost$core$Int** $tmp930 = *(&local0);
frost$core$Int64 $tmp931 = (frost$core$Int64) {48u};
int64_t $tmp932 = $tmp931.value;
frost$core$Int* $tmp933 = $tmp930[$tmp932];
int64_t $tmp934 = $tmp929.value;
$tmp928[$tmp934] = $tmp933;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:111
frost$core$Int** $tmp935 = *(&local0);
frost$core$Int64 $tmp936 = (frost$core$Int64) {51u};
frost$core$Int** $tmp937 = *(&local0);
frost$core$Int64 $tmp938 = (frost$core$Int64) {48u};
int64_t $tmp939 = $tmp938.value;
frost$core$Int* $tmp940 = $tmp937[$tmp939];
int64_t $tmp941 = $tmp936.value;
$tmp935[$tmp941] = $tmp940;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:112
frost$core$Int** $tmp942 = *(&local0);
frost$core$Int64 $tmp943 = (frost$core$Int64) {52u};
frost$core$Int** $tmp944 = *(&local0);
frost$core$Int64 $tmp945 = (frost$core$Int64) {48u};
int64_t $tmp946 = $tmp945.value;
frost$core$Int* $tmp947 = $tmp944[$tmp946];
int64_t $tmp948 = $tmp943.value;
$tmp942[$tmp948] = $tmp947;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:113
frost$core$Int** $tmp949 = *(&local0);
frost$core$Int64 $tmp950 = (frost$core$Int64) {53u};
frost$core$Int** $tmp951 = *(&local0);
frost$core$Int64 $tmp952 = (frost$core$Int64) {48u};
int64_t $tmp953 = $tmp952.value;
frost$core$Int* $tmp954 = $tmp951[$tmp953];
int64_t $tmp955 = $tmp950.value;
$tmp949[$tmp955] = $tmp954;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:114
frost$core$Int** $tmp956 = *(&local0);
frost$core$Int64 $tmp957 = (frost$core$Int64) {54u};
frost$core$Int** $tmp958 = *(&local0);
frost$core$Int64 $tmp959 = (frost$core$Int64) {48u};
int64_t $tmp960 = $tmp959.value;
frost$core$Int* $tmp961 = $tmp958[$tmp960];
int64_t $tmp962 = $tmp957.value;
$tmp956[$tmp962] = $tmp961;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:115
frost$core$Int** $tmp963 = *(&local0);
frost$core$Int64 $tmp964 = (frost$core$Int64) {55u};
frost$core$Int** $tmp965 = *(&local0);
frost$core$Int64 $tmp966 = (frost$core$Int64) {48u};
int64_t $tmp967 = $tmp966.value;
frost$core$Int* $tmp968 = $tmp965[$tmp967];
int64_t $tmp969 = $tmp964.value;
$tmp963[$tmp969] = $tmp968;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:116
frost$core$Int** $tmp970 = *(&local0);
frost$core$Int64 $tmp971 = (frost$core$Int64) {56u};
frost$core$Int** $tmp972 = *(&local0);
frost$core$Int64 $tmp973 = (frost$core$Int64) {48u};
int64_t $tmp974 = $tmp973.value;
frost$core$Int* $tmp975 = $tmp972[$tmp974];
int64_t $tmp976 = $tmp971.value;
$tmp970[$tmp976] = $tmp975;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:117
frost$core$Int** $tmp977 = *(&local0);
frost$core$Int64 $tmp978 = (frost$core$Int64) {57u};
frost$core$Int** $tmp979 = *(&local0);
frost$core$Int64 $tmp980 = (frost$core$Int64) {48u};
int64_t $tmp981 = $tmp980.value;
frost$core$Int* $tmp982 = $tmp979[$tmp981];
int64_t $tmp983 = $tmp978.value;
$tmp977[$tmp983] = $tmp982;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:118
frost$core$Int** $tmp984 = *(&local0);
frost$core$Int64 $tmp985 = (frost$core$Int64) {58u};
frost$core$Int $tmp986 = (frost$core$Int) {31u};
frost$core$Int $tmp987 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:118:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp988 = frost$core$Int64$init$frost$core$Int($tmp986);
int64_t $tmp989 = $tmp988.value;
frost$core$Int* $tmp990 = ((frost$core$Int*) frostAlloc($tmp989 * 8));
*(&local17) = $tmp990;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp991 = (frost$core$Int) {0u};
frost$core$Bit $tmp992 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp993 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp991, $tmp986, $tmp992);
frost$core$Int $tmp994 = $tmp993.min;
*(&local18) = $tmp994;
frost$core$Int $tmp995 = $tmp993.max;
frost$core$Bit $tmp996 = $tmp993.inclusive;
bool $tmp997 = $tmp996.value;
frost$core$Int $tmp998 = (frost$core$Int) {1u};
if ($tmp997) goto block77; else goto block78;
block77:;
int64_t $tmp999 = $tmp994.value;
int64_t $tmp1000 = $tmp995.value;
bool $tmp1001 = $tmp999 <= $tmp1000;
frost$core$Bit $tmp1002 = (frost$core$Bit) {$tmp1001};
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block74; else goto block75;
block78:;
int64_t $tmp1004 = $tmp994.value;
int64_t $tmp1005 = $tmp995.value;
bool $tmp1006 = $tmp1004 < $tmp1005;
frost$core$Bit $tmp1007 = (frost$core$Bit) {$tmp1006};
bool $tmp1008 = $tmp1007.value;
if ($tmp1008) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp1009 = *(&local17);
frost$core$Int $tmp1010 = *(&local18);
frost$core$Int64 $tmp1011 = frost$core$Int64$init$frost$core$Int($tmp1010);
int64_t $tmp1012 = $tmp1011.value;
$tmp1009[$tmp1012] = $tmp987;
frost$core$Int $tmp1013 = *(&local18);
int64_t $tmp1014 = $tmp995.value;
int64_t $tmp1015 = $tmp1013.value;
int64_t $tmp1016 = $tmp1014 - $tmp1015;
frost$core$Int $tmp1017 = (frost$core$Int) {$tmp1016};
if ($tmp997) goto block80; else goto block81;
block80:;
int64_t $tmp1018 = $tmp1017.value;
int64_t $tmp1019 = $tmp998.value;
bool $tmp1020 = $tmp1018 >= $tmp1019;
frost$core$Bit $tmp1021 = (frost$core$Bit) {$tmp1020};
bool $tmp1022 = $tmp1021.value;
if ($tmp1022) goto block79; else goto block75;
block81:;
int64_t $tmp1023 = $tmp1017.value;
int64_t $tmp1024 = $tmp998.value;
bool $tmp1025 = $tmp1023 > $tmp1024;
frost$core$Bit $tmp1026 = (frost$core$Bit) {$tmp1025};
bool $tmp1027 = $tmp1026.value;
if ($tmp1027) goto block79; else goto block75;
block79:;
int64_t $tmp1028 = $tmp1013.value;
int64_t $tmp1029 = $tmp998.value;
int64_t $tmp1030 = $tmp1028 + $tmp1029;
frost$core$Int $tmp1031 = (frost$core$Int) {$tmp1030};
*(&local18) = $tmp1031;
goto block74;
block75:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp1032 = *(&local17);
int64_t $tmp1033 = $tmp985.value;
$tmp984[$tmp1033] = $tmp1032;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:119
frost$core$Int** $tmp1034 = *(&local0);
frost$core$Int64 $tmp1035 = (frost$core$Int64) {58u};
int64_t $tmp1036 = $tmp1035.value;
frost$core$Int* $tmp1037 = $tmp1034[$tmp1036];
frost$core$Int64 $tmp1038 = (frost$core$Int64) {1u};
frost$core$Int $tmp1039 = (frost$core$Int) {13u};
int64_t $tmp1040 = $tmp1038.value;
$tmp1037[$tmp1040] = $tmp1039;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:120
frost$core$Int** $tmp1041 = *(&local0);
frost$core$Int64 $tmp1042 = (frost$core$Int64) {58u};
int64_t $tmp1043 = $tmp1042.value;
frost$core$Int* $tmp1044 = $tmp1041[$tmp1043];
frost$core$Int64 $tmp1045 = (frost$core$Int64) {3u};
frost$core$Int $tmp1046 = (frost$core$Int) {3u};
int64_t $tmp1047 = $tmp1045.value;
$tmp1044[$tmp1047] = $tmp1046;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:121
frost$core$Int** $tmp1048 = *(&local0);
frost$core$Int64 $tmp1049 = (frost$core$Int64) {59u};
frost$core$Int** $tmp1050 = *(&local0);
frost$core$Int64 $tmp1051 = (frost$core$Int64) {0u};
int64_t $tmp1052 = $tmp1051.value;
frost$core$Int* $tmp1053 = $tmp1050[$tmp1052];
int64_t $tmp1054 = $tmp1049.value;
$tmp1048[$tmp1054] = $tmp1053;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:122
frost$core$Int** $tmp1055 = *(&local0);
frost$core$Int64 $tmp1056 = (frost$core$Int64) {60u};
frost$core$Int** $tmp1057 = *(&local0);
frost$core$Int64 $tmp1058 = (frost$core$Int64) {0u};
int64_t $tmp1059 = $tmp1058.value;
frost$core$Int* $tmp1060 = $tmp1057[$tmp1059];
int64_t $tmp1061 = $tmp1056.value;
$tmp1055[$tmp1061] = $tmp1060;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:123
frost$core$Int** $tmp1062 = *(&local0);
frost$core$Int64 $tmp1063 = (frost$core$Int64) {61u};
frost$core$Int** $tmp1064 = *(&local0);
frost$core$Int64 $tmp1065 = (frost$core$Int64) {0u};
int64_t $tmp1066 = $tmp1065.value;
frost$core$Int* $tmp1067 = $tmp1064[$tmp1066];
int64_t $tmp1068 = $tmp1063.value;
$tmp1062[$tmp1068] = $tmp1067;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:124
frost$core$Int** $tmp1069 = *(&local0);
frost$core$Int64 $tmp1070 = (frost$core$Int64) {62u};
frost$core$Int** $tmp1071 = *(&local0);
frost$core$Int64 $tmp1072 = (frost$core$Int64) {0u};
int64_t $tmp1073 = $tmp1072.value;
frost$core$Int* $tmp1074 = $tmp1071[$tmp1073];
int64_t $tmp1075 = $tmp1070.value;
$tmp1069[$tmp1075] = $tmp1074;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:125
frost$core$Int** $tmp1076 = *(&local0);
frost$core$Int64 $tmp1077 = (frost$core$Int64) {63u};
frost$core$Int** $tmp1078 = *(&local0);
frost$core$Int64 $tmp1079 = (frost$core$Int64) {0u};
int64_t $tmp1080 = $tmp1079.value;
frost$core$Int* $tmp1081 = $tmp1078[$tmp1080];
int64_t $tmp1082 = $tmp1077.value;
$tmp1076[$tmp1082] = $tmp1081;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:126
frost$core$Int** $tmp1083 = *(&local0);
frost$core$Int64 $tmp1084 = (frost$core$Int64) {64u};
frost$core$Int** $tmp1085 = *(&local0);
frost$core$Int64 $tmp1086 = (frost$core$Int64) {0u};
int64_t $tmp1087 = $tmp1086.value;
frost$core$Int* $tmp1088 = $tmp1085[$tmp1087];
int64_t $tmp1089 = $tmp1084.value;
$tmp1083[$tmp1089] = $tmp1088;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:127
frost$core$Int** $tmp1090 = *(&local0);
frost$core$Int64 $tmp1091 = (frost$core$Int64) {65u};
frost$core$Int** $tmp1092 = *(&local0);
frost$core$Int64 $tmp1093 = (frost$core$Int64) {0u};
int64_t $tmp1094 = $tmp1093.value;
frost$core$Int* $tmp1095 = $tmp1092[$tmp1094];
int64_t $tmp1096 = $tmp1091.value;
$tmp1090[$tmp1096] = $tmp1095;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:128
frost$core$Int** $tmp1097 = *(&local0);
frost$core$Int64 $tmp1098 = (frost$core$Int64) {66u};
frost$core$Int** $tmp1099 = *(&local0);
frost$core$Int64 $tmp1100 = (frost$core$Int64) {0u};
int64_t $tmp1101 = $tmp1100.value;
frost$core$Int* $tmp1102 = $tmp1099[$tmp1101];
int64_t $tmp1103 = $tmp1098.value;
$tmp1097[$tmp1103] = $tmp1102;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:129
frost$core$Int** $tmp1104 = *(&local0);
frost$core$Int64 $tmp1105 = (frost$core$Int64) {67u};
frost$core$Int** $tmp1106 = *(&local0);
frost$core$Int64 $tmp1107 = (frost$core$Int64) {0u};
int64_t $tmp1108 = $tmp1107.value;
frost$core$Int* $tmp1109 = $tmp1106[$tmp1108];
int64_t $tmp1110 = $tmp1105.value;
$tmp1104[$tmp1110] = $tmp1109;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:130
frost$core$Int** $tmp1111 = *(&local0);
frost$core$Int64 $tmp1112 = (frost$core$Int64) {68u};
frost$core$Int** $tmp1113 = *(&local0);
frost$core$Int64 $tmp1114 = (frost$core$Int64) {0u};
int64_t $tmp1115 = $tmp1114.value;
frost$core$Int* $tmp1116 = $tmp1113[$tmp1115];
int64_t $tmp1117 = $tmp1112.value;
$tmp1111[$tmp1117] = $tmp1116;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:131
frost$core$Int** $tmp1118 = *(&local0);
frost$core$Int64 $tmp1119 = (frost$core$Int64) {69u};
frost$core$Int $tmp1120 = (frost$core$Int) {31u};
frost$core$Int $tmp1121 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:131:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp1122 = frost$core$Int64$init$frost$core$Int($tmp1120);
int64_t $tmp1123 = $tmp1122.value;
frost$core$Int* $tmp1124 = ((frost$core$Int*) frostAlloc($tmp1123 * 8));
*(&local19) = $tmp1124;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp1125 = (frost$core$Int) {0u};
frost$core$Bit $tmp1126 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1127 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1125, $tmp1120, $tmp1126);
frost$core$Int $tmp1128 = $tmp1127.min;
*(&local20) = $tmp1128;
frost$core$Int $tmp1129 = $tmp1127.max;
frost$core$Bit $tmp1130 = $tmp1127.inclusive;
bool $tmp1131 = $tmp1130.value;
frost$core$Int $tmp1132 = (frost$core$Int) {1u};
if ($tmp1131) goto block86; else goto block87;
block86:;
int64_t $tmp1133 = $tmp1128.value;
int64_t $tmp1134 = $tmp1129.value;
bool $tmp1135 = $tmp1133 <= $tmp1134;
frost$core$Bit $tmp1136 = (frost$core$Bit) {$tmp1135};
bool $tmp1137 = $tmp1136.value;
if ($tmp1137) goto block83; else goto block84;
block87:;
int64_t $tmp1138 = $tmp1128.value;
int64_t $tmp1139 = $tmp1129.value;
bool $tmp1140 = $tmp1138 < $tmp1139;
frost$core$Bit $tmp1141 = (frost$core$Bit) {$tmp1140};
bool $tmp1142 = $tmp1141.value;
if ($tmp1142) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp1143 = *(&local19);
frost$core$Int $tmp1144 = *(&local20);
frost$core$Int64 $tmp1145 = frost$core$Int64$init$frost$core$Int($tmp1144);
int64_t $tmp1146 = $tmp1145.value;
$tmp1143[$tmp1146] = $tmp1121;
frost$core$Int $tmp1147 = *(&local20);
int64_t $tmp1148 = $tmp1129.value;
int64_t $tmp1149 = $tmp1147.value;
int64_t $tmp1150 = $tmp1148 - $tmp1149;
frost$core$Int $tmp1151 = (frost$core$Int) {$tmp1150};
if ($tmp1131) goto block89; else goto block90;
block89:;
int64_t $tmp1152 = $tmp1151.value;
int64_t $tmp1153 = $tmp1132.value;
bool $tmp1154 = $tmp1152 >= $tmp1153;
frost$core$Bit $tmp1155 = (frost$core$Bit) {$tmp1154};
bool $tmp1156 = $tmp1155.value;
if ($tmp1156) goto block88; else goto block84;
block90:;
int64_t $tmp1157 = $tmp1151.value;
int64_t $tmp1158 = $tmp1132.value;
bool $tmp1159 = $tmp1157 > $tmp1158;
frost$core$Bit $tmp1160 = (frost$core$Bit) {$tmp1159};
bool $tmp1161 = $tmp1160.value;
if ($tmp1161) goto block88; else goto block84;
block88:;
int64_t $tmp1162 = $tmp1147.value;
int64_t $tmp1163 = $tmp1132.value;
int64_t $tmp1164 = $tmp1162 + $tmp1163;
frost$core$Int $tmp1165 = (frost$core$Int) {$tmp1164};
*(&local20) = $tmp1165;
goto block83;
block84:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp1166 = *(&local19);
int64_t $tmp1167 = $tmp1119.value;
$tmp1118[$tmp1167] = $tmp1166;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:132
frost$core$Int** $tmp1168 = *(&local0);
frost$core$Int64 $tmp1169 = (frost$core$Int64) {69u};
int64_t $tmp1170 = $tmp1169.value;
frost$core$Int* $tmp1171 = $tmp1168[$tmp1170];
frost$core$Int64 $tmp1172 = (frost$core$Int64) {3u};
frost$core$Int $tmp1173 = (frost$core$Int) {3u};
int64_t $tmp1174 = $tmp1172.value;
$tmp1171[$tmp1174] = $tmp1173;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:133
frost$core$Int** $tmp1175 = *(&local0);
frost$core$Int64 $tmp1176 = (frost$core$Int64) {69u};
int64_t $tmp1177 = $tmp1176.value;
frost$core$Int* $tmp1178 = $tmp1175[$tmp1177];
frost$core$Int64 $tmp1179 = (frost$core$Int64) {9u};
frost$core$Int $tmp1180 = (frost$core$Int) {10u};
int64_t $tmp1181 = $tmp1179.value;
$tmp1178[$tmp1181] = $tmp1180;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:134
frost$core$Int** $tmp1182 = *(&local0);
frost$core$Int64 $tmp1183 = (frost$core$Int64) {70u};
frost$core$Int** $tmp1184 = *(&local0);
frost$core$Int64 $tmp1185 = (frost$core$Int64) {0u};
int64_t $tmp1186 = $tmp1185.value;
frost$core$Int* $tmp1187 = $tmp1184[$tmp1186];
int64_t $tmp1188 = $tmp1183.value;
$tmp1182[$tmp1188] = $tmp1187;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:135
frost$core$Int** $tmp1189 = *(&local0);
frost$core$Int64 $tmp1190 = (frost$core$Int64) {71u};
frost$core$Int** $tmp1191 = *(&local0);
frost$core$Int64 $tmp1192 = (frost$core$Int64) {0u};
int64_t $tmp1193 = $tmp1192.value;
frost$core$Int* $tmp1194 = $tmp1191[$tmp1193];
int64_t $tmp1195 = $tmp1190.value;
$tmp1189[$tmp1195] = $tmp1194;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:136
frost$core$Int** $tmp1196 = *(&local0);
frost$core$Int64 $tmp1197 = (frost$core$Int64) {72u};
frost$core$Int** $tmp1198 = *(&local0);
frost$core$Int64 $tmp1199 = (frost$core$Int64) {0u};
int64_t $tmp1200 = $tmp1199.value;
frost$core$Int* $tmp1201 = $tmp1198[$tmp1200];
int64_t $tmp1202 = $tmp1197.value;
$tmp1196[$tmp1202] = $tmp1201;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:137
frost$core$Int** $tmp1203 = *(&local0);
frost$core$Int64 $tmp1204 = (frost$core$Int64) {73u};
frost$core$Int** $tmp1205 = *(&local0);
frost$core$Int64 $tmp1206 = (frost$core$Int64) {0u};
int64_t $tmp1207 = $tmp1206.value;
frost$core$Int* $tmp1208 = $tmp1205[$tmp1207];
int64_t $tmp1209 = $tmp1204.value;
$tmp1203[$tmp1209] = $tmp1208;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:138
frost$core$Int** $tmp1210 = *(&local0);
frost$core$Int64 $tmp1211 = (frost$core$Int64) {74u};
frost$core$Int** $tmp1212 = *(&local0);
frost$core$Int64 $tmp1213 = (frost$core$Int64) {0u};
int64_t $tmp1214 = $tmp1213.value;
frost$core$Int* $tmp1215 = $tmp1212[$tmp1214];
int64_t $tmp1216 = $tmp1211.value;
$tmp1210[$tmp1216] = $tmp1215;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:139
frost$core$Int** $tmp1217 = *(&local0);
frost$core$Int64 $tmp1218 = (frost$core$Int64) {75u};
frost$core$Int** $tmp1219 = *(&local0);
frost$core$Int64 $tmp1220 = (frost$core$Int64) {0u};
int64_t $tmp1221 = $tmp1220.value;
frost$core$Int* $tmp1222 = $tmp1219[$tmp1221];
int64_t $tmp1223 = $tmp1218.value;
$tmp1217[$tmp1223] = $tmp1222;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:140
frost$core$Int** $tmp1224 = *(&local0);
frost$core$Int64 $tmp1225 = (frost$core$Int64) {76u};
frost$core$Int** $tmp1226 = *(&local0);
frost$core$Int64 $tmp1227 = (frost$core$Int64) {0u};
int64_t $tmp1228 = $tmp1227.value;
frost$core$Int* $tmp1229 = $tmp1226[$tmp1228];
int64_t $tmp1230 = $tmp1225.value;
$tmp1224[$tmp1230] = $tmp1229;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:141
frost$core$Int** $tmp1231 = *(&local0);
frost$core$Int64 $tmp1232 = (frost$core$Int64) {77u};
frost$core$Int** $tmp1233 = *(&local0);
frost$core$Int64 $tmp1234 = (frost$core$Int64) {0u};
int64_t $tmp1235 = $tmp1234.value;
frost$core$Int* $tmp1236 = $tmp1233[$tmp1235];
int64_t $tmp1237 = $tmp1232.value;
$tmp1231[$tmp1237] = $tmp1236;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:142
frost$core$Int** $tmp1238 = *(&local0);
frost$core$Int64 $tmp1239 = (frost$core$Int64) {78u};
frost$core$Int** $tmp1240 = *(&local0);
frost$core$Int64 $tmp1241 = (frost$core$Int64) {0u};
int64_t $tmp1242 = $tmp1241.value;
frost$core$Int* $tmp1243 = $tmp1240[$tmp1242];
int64_t $tmp1244 = $tmp1239.value;
$tmp1238[$tmp1244] = $tmp1243;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:143
frost$core$Int** $tmp1245 = *(&local0);
frost$core$Int64 $tmp1246 = (frost$core$Int64) {79u};
frost$core$Int** $tmp1247 = *(&local0);
frost$core$Int64 $tmp1248 = (frost$core$Int64) {0u};
int64_t $tmp1249 = $tmp1248.value;
frost$core$Int* $tmp1250 = $tmp1247[$tmp1249];
int64_t $tmp1251 = $tmp1246.value;
$tmp1245[$tmp1251] = $tmp1250;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:144
frost$core$Int** $tmp1252 = *(&local0);
frost$core$Int64 $tmp1253 = (frost$core$Int64) {80u};
frost$core$Int** $tmp1254 = *(&local0);
frost$core$Int64 $tmp1255 = (frost$core$Int64) {0u};
int64_t $tmp1256 = $tmp1255.value;
frost$core$Int* $tmp1257 = $tmp1254[$tmp1256];
int64_t $tmp1258 = $tmp1253.value;
$tmp1252[$tmp1258] = $tmp1257;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:145
frost$core$Int** $tmp1259 = *(&local0);
frost$core$Int64 $tmp1260 = (frost$core$Int64) {81u};
frost$core$Int** $tmp1261 = *(&local0);
frost$core$Int64 $tmp1262 = (frost$core$Int64) {0u};
int64_t $tmp1263 = $tmp1262.value;
frost$core$Int* $tmp1264 = $tmp1261[$tmp1263];
int64_t $tmp1265 = $tmp1260.value;
$tmp1259[$tmp1265] = $tmp1264;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:146
frost$core$Int** $tmp1266 = *(&local0);
frost$core$Int64 $tmp1267 = (frost$core$Int64) {82u};
frost$core$Int** $tmp1268 = *(&local0);
frost$core$Int64 $tmp1269 = (frost$core$Int64) {0u};
int64_t $tmp1270 = $tmp1269.value;
frost$core$Int* $tmp1271 = $tmp1268[$tmp1270];
int64_t $tmp1272 = $tmp1267.value;
$tmp1266[$tmp1272] = $tmp1271;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:147
frost$core$Int** $tmp1273 = *(&local0);
frost$core$Int64 $tmp1274 = (frost$core$Int64) {83u};
frost$core$Int** $tmp1275 = *(&local0);
frost$core$Int64 $tmp1276 = (frost$core$Int64) {0u};
int64_t $tmp1277 = $tmp1276.value;
frost$core$Int* $tmp1278 = $tmp1275[$tmp1277];
int64_t $tmp1279 = $tmp1274.value;
$tmp1273[$tmp1279] = $tmp1278;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:148
frost$core$Int** $tmp1280 = *(&local0);
frost$core$Int64 $tmp1281 = (frost$core$Int64) {84u};
frost$core$Int** $tmp1282 = *(&local0);
frost$core$Int64 $tmp1283 = (frost$core$Int64) {0u};
int64_t $tmp1284 = $tmp1283.value;
frost$core$Int* $tmp1285 = $tmp1282[$tmp1284];
int64_t $tmp1286 = $tmp1281.value;
$tmp1280[$tmp1286] = $tmp1285;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:149
frost$core$Int** $tmp1287 = *(&local0);
frost$core$Int64 $tmp1288 = (frost$core$Int64) {85u};
frost$core$Int** $tmp1289 = *(&local0);
frost$core$Int64 $tmp1290 = (frost$core$Int64) {0u};
int64_t $tmp1291 = $tmp1290.value;
frost$core$Int* $tmp1292 = $tmp1289[$tmp1291];
int64_t $tmp1293 = $tmp1288.value;
$tmp1287[$tmp1293] = $tmp1292;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:150
frost$core$Int** $tmp1294 = *(&local0);
frost$core$Int64 $tmp1295 = (frost$core$Int64) {86u};
frost$core$Int** $tmp1296 = *(&local0);
frost$core$Int64 $tmp1297 = (frost$core$Int64) {0u};
int64_t $tmp1298 = $tmp1297.value;
frost$core$Int* $tmp1299 = $tmp1296[$tmp1298];
int64_t $tmp1300 = $tmp1295.value;
$tmp1294[$tmp1300] = $tmp1299;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:151
frost$core$Int** $tmp1301 = *(&local0);
frost$core$Int64 $tmp1302 = (frost$core$Int64) {87u};
frost$core$Int** $tmp1303 = *(&local0);
frost$core$Int64 $tmp1304 = (frost$core$Int64) {0u};
int64_t $tmp1305 = $tmp1304.value;
frost$core$Int* $tmp1306 = $tmp1303[$tmp1305];
int64_t $tmp1307 = $tmp1302.value;
$tmp1301[$tmp1307] = $tmp1306;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:152
frost$core$Int** $tmp1308 = *(&local0);
frost$core$Int64 $tmp1309 = (frost$core$Int64) {88u};
frost$core$Int** $tmp1310 = *(&local0);
frost$core$Int64 $tmp1311 = (frost$core$Int64) {0u};
int64_t $tmp1312 = $tmp1311.value;
frost$core$Int* $tmp1313 = $tmp1310[$tmp1312];
int64_t $tmp1314 = $tmp1309.value;
$tmp1308[$tmp1314] = $tmp1313;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:153
frost$core$Int** $tmp1315 = *(&local0);
frost$core$Int64 $tmp1316 = (frost$core$Int64) {89u};
frost$core$Int** $tmp1317 = *(&local0);
frost$core$Int64 $tmp1318 = (frost$core$Int64) {0u};
int64_t $tmp1319 = $tmp1318.value;
frost$core$Int* $tmp1320 = $tmp1317[$tmp1319];
int64_t $tmp1321 = $tmp1316.value;
$tmp1315[$tmp1321] = $tmp1320;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:154
frost$core$Int** $tmp1322 = *(&local0);
frost$core$Int64 $tmp1323 = (frost$core$Int64) {90u};
frost$core$Int** $tmp1324 = *(&local0);
frost$core$Int64 $tmp1325 = (frost$core$Int64) {0u};
int64_t $tmp1326 = $tmp1325.value;
frost$core$Int* $tmp1327 = $tmp1324[$tmp1326];
int64_t $tmp1328 = $tmp1323.value;
$tmp1322[$tmp1328] = $tmp1327;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:155
frost$core$Int** $tmp1329 = *(&local0);
frost$core$Int64 $tmp1330 = (frost$core$Int64) {91u};
frost$core$Int $tmp1331 = (frost$core$Int) {31u};
frost$core$Int $tmp1332 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:155:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp1333 = frost$core$Int64$init$frost$core$Int($tmp1331);
int64_t $tmp1334 = $tmp1333.value;
frost$core$Int* $tmp1335 = ((frost$core$Int*) frostAlloc($tmp1334 * 8));
*(&local21) = $tmp1335;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp1336 = (frost$core$Int) {0u};
frost$core$Bit $tmp1337 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1338 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1336, $tmp1331, $tmp1337);
frost$core$Int $tmp1339 = $tmp1338.min;
*(&local22) = $tmp1339;
frost$core$Int $tmp1340 = $tmp1338.max;
frost$core$Bit $tmp1341 = $tmp1338.inclusive;
bool $tmp1342 = $tmp1341.value;
frost$core$Int $tmp1343 = (frost$core$Int) {1u};
if ($tmp1342) goto block95; else goto block96;
block95:;
int64_t $tmp1344 = $tmp1339.value;
int64_t $tmp1345 = $tmp1340.value;
bool $tmp1346 = $tmp1344 <= $tmp1345;
frost$core$Bit $tmp1347 = (frost$core$Bit) {$tmp1346};
bool $tmp1348 = $tmp1347.value;
if ($tmp1348) goto block92; else goto block93;
block96:;
int64_t $tmp1349 = $tmp1339.value;
int64_t $tmp1350 = $tmp1340.value;
bool $tmp1351 = $tmp1349 < $tmp1350;
frost$core$Bit $tmp1352 = (frost$core$Bit) {$tmp1351};
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp1354 = *(&local21);
frost$core$Int $tmp1355 = *(&local22);
frost$core$Int64 $tmp1356 = frost$core$Int64$init$frost$core$Int($tmp1355);
int64_t $tmp1357 = $tmp1356.value;
$tmp1354[$tmp1357] = $tmp1332;
frost$core$Int $tmp1358 = *(&local22);
int64_t $tmp1359 = $tmp1340.value;
int64_t $tmp1360 = $tmp1358.value;
int64_t $tmp1361 = $tmp1359 - $tmp1360;
frost$core$Int $tmp1362 = (frost$core$Int) {$tmp1361};
if ($tmp1342) goto block98; else goto block99;
block98:;
int64_t $tmp1363 = $tmp1362.value;
int64_t $tmp1364 = $tmp1343.value;
bool $tmp1365 = $tmp1363 >= $tmp1364;
frost$core$Bit $tmp1366 = (frost$core$Bit) {$tmp1365};
bool $tmp1367 = $tmp1366.value;
if ($tmp1367) goto block97; else goto block93;
block99:;
int64_t $tmp1368 = $tmp1362.value;
int64_t $tmp1369 = $tmp1343.value;
bool $tmp1370 = $tmp1368 > $tmp1369;
frost$core$Bit $tmp1371 = (frost$core$Bit) {$tmp1370};
bool $tmp1372 = $tmp1371.value;
if ($tmp1372) goto block97; else goto block93;
block97:;
int64_t $tmp1373 = $tmp1358.value;
int64_t $tmp1374 = $tmp1343.value;
int64_t $tmp1375 = $tmp1373 + $tmp1374;
frost$core$Int $tmp1376 = (frost$core$Int) {$tmp1375};
*(&local22) = $tmp1376;
goto block92;
block93:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp1377 = *(&local21);
int64_t $tmp1378 = $tmp1330.value;
$tmp1329[$tmp1378] = $tmp1377;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:156
frost$core$Int** $tmp1379 = *(&local0);
frost$core$Int64 $tmp1380 = (frost$core$Int64) {91u};
int64_t $tmp1381 = $tmp1380.value;
frost$core$Int* $tmp1382 = $tmp1379[$tmp1381];
frost$core$Int64 $tmp1383 = (frost$core$Int64) {1u};
frost$core$Int $tmp1384 = (frost$core$Int) {14u};
int64_t $tmp1385 = $tmp1383.value;
$tmp1382[$tmp1385] = $tmp1384;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:157
frost$core$Int** $tmp1386 = *(&local0);
frost$core$Int64 $tmp1387 = (frost$core$Int64) {91u};
int64_t $tmp1388 = $tmp1387.value;
frost$core$Int* $tmp1389 = $tmp1386[$tmp1388];
frost$core$Int64 $tmp1390 = (frost$core$Int64) {3u};
frost$core$Int $tmp1391 = (frost$core$Int) {3u};
int64_t $tmp1392 = $tmp1390.value;
$tmp1389[$tmp1392] = $tmp1391;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:158
frost$core$Int** $tmp1393 = *(&local0);
frost$core$Int64 $tmp1394 = (frost$core$Int64) {92u};
frost$core$Int $tmp1395 = (frost$core$Int) {31u};
frost$core$Int $tmp1396 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:158:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp1397 = frost$core$Int64$init$frost$core$Int($tmp1395);
int64_t $tmp1398 = $tmp1397.value;
frost$core$Int* $tmp1399 = ((frost$core$Int*) frostAlloc($tmp1398 * 8));
*(&local23) = $tmp1399;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp1400 = (frost$core$Int) {0u};
frost$core$Bit $tmp1401 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1402 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1400, $tmp1395, $tmp1401);
frost$core$Int $tmp1403 = $tmp1402.min;
*(&local24) = $tmp1403;
frost$core$Int $tmp1404 = $tmp1402.max;
frost$core$Bit $tmp1405 = $tmp1402.inclusive;
bool $tmp1406 = $tmp1405.value;
frost$core$Int $tmp1407 = (frost$core$Int) {1u};
if ($tmp1406) goto block104; else goto block105;
block104:;
int64_t $tmp1408 = $tmp1403.value;
int64_t $tmp1409 = $tmp1404.value;
bool $tmp1410 = $tmp1408 <= $tmp1409;
frost$core$Bit $tmp1411 = (frost$core$Bit) {$tmp1410};
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block101; else goto block102;
block105:;
int64_t $tmp1413 = $tmp1403.value;
int64_t $tmp1414 = $tmp1404.value;
bool $tmp1415 = $tmp1413 < $tmp1414;
frost$core$Bit $tmp1416 = (frost$core$Bit) {$tmp1415};
bool $tmp1417 = $tmp1416.value;
if ($tmp1417) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp1418 = *(&local23);
frost$core$Int $tmp1419 = *(&local24);
frost$core$Int64 $tmp1420 = frost$core$Int64$init$frost$core$Int($tmp1419);
int64_t $tmp1421 = $tmp1420.value;
$tmp1418[$tmp1421] = $tmp1396;
frost$core$Int $tmp1422 = *(&local24);
int64_t $tmp1423 = $tmp1404.value;
int64_t $tmp1424 = $tmp1422.value;
int64_t $tmp1425 = $tmp1423 - $tmp1424;
frost$core$Int $tmp1426 = (frost$core$Int) {$tmp1425};
if ($tmp1406) goto block107; else goto block108;
block107:;
int64_t $tmp1427 = $tmp1426.value;
int64_t $tmp1428 = $tmp1407.value;
bool $tmp1429 = $tmp1427 >= $tmp1428;
frost$core$Bit $tmp1430 = (frost$core$Bit) {$tmp1429};
bool $tmp1431 = $tmp1430.value;
if ($tmp1431) goto block106; else goto block102;
block108:;
int64_t $tmp1432 = $tmp1426.value;
int64_t $tmp1433 = $tmp1407.value;
bool $tmp1434 = $tmp1432 > $tmp1433;
frost$core$Bit $tmp1435 = (frost$core$Bit) {$tmp1434};
bool $tmp1436 = $tmp1435.value;
if ($tmp1436) goto block106; else goto block102;
block106:;
int64_t $tmp1437 = $tmp1422.value;
int64_t $tmp1438 = $tmp1407.value;
int64_t $tmp1439 = $tmp1437 + $tmp1438;
frost$core$Int $tmp1440 = (frost$core$Int) {$tmp1439};
*(&local24) = $tmp1440;
goto block101;
block102:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp1441 = *(&local23);
int64_t $tmp1442 = $tmp1394.value;
$tmp1393[$tmp1442] = $tmp1441;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:159
frost$core$Int** $tmp1443 = *(&local0);
frost$core$Int64 $tmp1444 = (frost$core$Int64) {92u};
int64_t $tmp1445 = $tmp1444.value;
frost$core$Int* $tmp1446 = $tmp1443[$tmp1445];
frost$core$Int64 $tmp1447 = (frost$core$Int64) {3u};
frost$core$Int $tmp1448 = (frost$core$Int) {5u};
int64_t $tmp1449 = $tmp1447.value;
$tmp1446[$tmp1449] = $tmp1448;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:160
frost$core$Int** $tmp1450 = *(&local0);
frost$core$Int64 $tmp1451 = (frost$core$Int64) {92u};
int64_t $tmp1452 = $tmp1451.value;
frost$core$Int* $tmp1453 = $tmp1450[$tmp1452];
frost$core$Int64 $tmp1454 = (frost$core$Int64) {5u};
frost$core$Int $tmp1455 = (frost$core$Int) {3u};
int64_t $tmp1456 = $tmp1454.value;
$tmp1453[$tmp1456] = $tmp1455;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:161
frost$core$Int** $tmp1457 = *(&local0);
frost$core$Int64 $tmp1458 = (frost$core$Int64) {93u};
frost$core$Int $tmp1459 = (frost$core$Int) {31u};
frost$core$Int $tmp1460 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:161:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp1461 = frost$core$Int64$init$frost$core$Int($tmp1459);
int64_t $tmp1462 = $tmp1461.value;
frost$core$Int* $tmp1463 = ((frost$core$Int*) frostAlloc($tmp1462 * 8));
*(&local25) = $tmp1463;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp1464 = (frost$core$Int) {0u};
frost$core$Bit $tmp1465 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1466 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1464, $tmp1459, $tmp1465);
frost$core$Int $tmp1467 = $tmp1466.min;
*(&local26) = $tmp1467;
frost$core$Int $tmp1468 = $tmp1466.max;
frost$core$Bit $tmp1469 = $tmp1466.inclusive;
bool $tmp1470 = $tmp1469.value;
frost$core$Int $tmp1471 = (frost$core$Int) {1u};
if ($tmp1470) goto block113; else goto block114;
block113:;
int64_t $tmp1472 = $tmp1467.value;
int64_t $tmp1473 = $tmp1468.value;
bool $tmp1474 = $tmp1472 <= $tmp1473;
frost$core$Bit $tmp1475 = (frost$core$Bit) {$tmp1474};
bool $tmp1476 = $tmp1475.value;
if ($tmp1476) goto block110; else goto block111;
block114:;
int64_t $tmp1477 = $tmp1467.value;
int64_t $tmp1478 = $tmp1468.value;
bool $tmp1479 = $tmp1477 < $tmp1478;
frost$core$Bit $tmp1480 = (frost$core$Bit) {$tmp1479};
bool $tmp1481 = $tmp1480.value;
if ($tmp1481) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp1482 = *(&local25);
frost$core$Int $tmp1483 = *(&local26);
frost$core$Int64 $tmp1484 = frost$core$Int64$init$frost$core$Int($tmp1483);
int64_t $tmp1485 = $tmp1484.value;
$tmp1482[$tmp1485] = $tmp1460;
frost$core$Int $tmp1486 = *(&local26);
int64_t $tmp1487 = $tmp1468.value;
int64_t $tmp1488 = $tmp1486.value;
int64_t $tmp1489 = $tmp1487 - $tmp1488;
frost$core$Int $tmp1490 = (frost$core$Int) {$tmp1489};
if ($tmp1470) goto block116; else goto block117;
block116:;
int64_t $tmp1491 = $tmp1490.value;
int64_t $tmp1492 = $tmp1471.value;
bool $tmp1493 = $tmp1491 >= $tmp1492;
frost$core$Bit $tmp1494 = (frost$core$Bit) {$tmp1493};
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block115; else goto block111;
block117:;
int64_t $tmp1496 = $tmp1490.value;
int64_t $tmp1497 = $tmp1471.value;
bool $tmp1498 = $tmp1496 > $tmp1497;
frost$core$Bit $tmp1499 = (frost$core$Bit) {$tmp1498};
bool $tmp1500 = $tmp1499.value;
if ($tmp1500) goto block115; else goto block111;
block115:;
int64_t $tmp1501 = $tmp1486.value;
int64_t $tmp1502 = $tmp1471.value;
int64_t $tmp1503 = $tmp1501 + $tmp1502;
frost$core$Int $tmp1504 = (frost$core$Int) {$tmp1503};
*(&local26) = $tmp1504;
goto block110;
block111:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp1505 = *(&local25);
int64_t $tmp1506 = $tmp1458.value;
$tmp1457[$tmp1506] = $tmp1505;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:162
frost$core$Int** $tmp1507 = *(&local0);
frost$core$Int64 $tmp1508 = (frost$core$Int64) {93u};
int64_t $tmp1509 = $tmp1508.value;
frost$core$Int* $tmp1510 = $tmp1507[$tmp1509];
frost$core$Int64 $tmp1511 = (frost$core$Int64) {1u};
frost$core$Int $tmp1512 = (frost$core$Int) {15u};
int64_t $tmp1513 = $tmp1511.value;
$tmp1510[$tmp1513] = $tmp1512;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:163
frost$core$Int** $tmp1514 = *(&local0);
frost$core$Int64 $tmp1515 = (frost$core$Int64) {93u};
int64_t $tmp1516 = $tmp1515.value;
frost$core$Int* $tmp1517 = $tmp1514[$tmp1516];
frost$core$Int64 $tmp1518 = (frost$core$Int64) {3u};
frost$core$Int $tmp1519 = (frost$core$Int) {3u};
int64_t $tmp1520 = $tmp1518.value;
$tmp1517[$tmp1520] = $tmp1519;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:164
frost$core$Int** $tmp1521 = *(&local0);
frost$core$Int64 $tmp1522 = (frost$core$Int64) {94u};
frost$core$Int** $tmp1523 = *(&local0);
frost$core$Int64 $tmp1524 = (frost$core$Int64) {0u};
int64_t $tmp1525 = $tmp1524.value;
frost$core$Int* $tmp1526 = $tmp1523[$tmp1525];
int64_t $tmp1527 = $tmp1522.value;
$tmp1521[$tmp1527] = $tmp1526;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:165
frost$core$Int** $tmp1528 = *(&local0);
frost$core$Int64 $tmp1529 = (frost$core$Int64) {95u};
frost$core$Int** $tmp1530 = *(&local0);
frost$core$Int64 $tmp1531 = (frost$core$Int64) {0u};
int64_t $tmp1532 = $tmp1531.value;
frost$core$Int* $tmp1533 = $tmp1530[$tmp1532];
int64_t $tmp1534 = $tmp1529.value;
$tmp1528[$tmp1534] = $tmp1533;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:166
frost$core$Int** $tmp1535 = *(&local0);
frost$core$Int64 $tmp1536 = (frost$core$Int64) {96u};
frost$core$Int** $tmp1537 = *(&local0);
frost$core$Int64 $tmp1538 = (frost$core$Int64) {0u};
int64_t $tmp1539 = $tmp1538.value;
frost$core$Int* $tmp1540 = $tmp1537[$tmp1539];
int64_t $tmp1541 = $tmp1536.value;
$tmp1535[$tmp1541] = $tmp1540;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:167
frost$core$Int** $tmp1542 = *(&local0);
frost$core$Int64 $tmp1543 = (frost$core$Int64) {97u};
frost$core$Int $tmp1544 = (frost$core$Int) {31u};
frost$core$Int $tmp1545 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:167:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp1546 = frost$core$Int64$init$frost$core$Int($tmp1544);
int64_t $tmp1547 = $tmp1546.value;
frost$core$Int* $tmp1548 = ((frost$core$Int*) frostAlloc($tmp1547 * 8));
*(&local27) = $tmp1548;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp1549 = (frost$core$Int) {0u};
frost$core$Bit $tmp1550 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1551 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1549, $tmp1544, $tmp1550);
frost$core$Int $tmp1552 = $tmp1551.min;
*(&local28) = $tmp1552;
frost$core$Int $tmp1553 = $tmp1551.max;
frost$core$Bit $tmp1554 = $tmp1551.inclusive;
bool $tmp1555 = $tmp1554.value;
frost$core$Int $tmp1556 = (frost$core$Int) {1u};
if ($tmp1555) goto block122; else goto block123;
block122:;
int64_t $tmp1557 = $tmp1552.value;
int64_t $tmp1558 = $tmp1553.value;
bool $tmp1559 = $tmp1557 <= $tmp1558;
frost$core$Bit $tmp1560 = (frost$core$Bit) {$tmp1559};
bool $tmp1561 = $tmp1560.value;
if ($tmp1561) goto block119; else goto block120;
block123:;
int64_t $tmp1562 = $tmp1552.value;
int64_t $tmp1563 = $tmp1553.value;
bool $tmp1564 = $tmp1562 < $tmp1563;
frost$core$Bit $tmp1565 = (frost$core$Bit) {$tmp1564};
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp1567 = *(&local27);
frost$core$Int $tmp1568 = *(&local28);
frost$core$Int64 $tmp1569 = frost$core$Int64$init$frost$core$Int($tmp1568);
int64_t $tmp1570 = $tmp1569.value;
$tmp1567[$tmp1570] = $tmp1545;
frost$core$Int $tmp1571 = *(&local28);
int64_t $tmp1572 = $tmp1553.value;
int64_t $tmp1573 = $tmp1571.value;
int64_t $tmp1574 = $tmp1572 - $tmp1573;
frost$core$Int $tmp1575 = (frost$core$Int) {$tmp1574};
if ($tmp1555) goto block125; else goto block126;
block125:;
int64_t $tmp1576 = $tmp1575.value;
int64_t $tmp1577 = $tmp1556.value;
bool $tmp1578 = $tmp1576 >= $tmp1577;
frost$core$Bit $tmp1579 = (frost$core$Bit) {$tmp1578};
bool $tmp1580 = $tmp1579.value;
if ($tmp1580) goto block124; else goto block120;
block126:;
int64_t $tmp1581 = $tmp1575.value;
int64_t $tmp1582 = $tmp1556.value;
bool $tmp1583 = $tmp1581 > $tmp1582;
frost$core$Bit $tmp1584 = (frost$core$Bit) {$tmp1583};
bool $tmp1585 = $tmp1584.value;
if ($tmp1585) goto block124; else goto block120;
block124:;
int64_t $tmp1586 = $tmp1571.value;
int64_t $tmp1587 = $tmp1556.value;
int64_t $tmp1588 = $tmp1586 + $tmp1587;
frost$core$Int $tmp1589 = (frost$core$Int) {$tmp1588};
*(&local28) = $tmp1589;
goto block119;
block120:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp1590 = *(&local27);
int64_t $tmp1591 = $tmp1543.value;
$tmp1542[$tmp1591] = $tmp1590;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:168
frost$core$Int** $tmp1592 = *(&local0);
frost$core$Int64 $tmp1593 = (frost$core$Int64) {97u};
int64_t $tmp1594 = $tmp1593.value;
frost$core$Int* $tmp1595 = $tmp1592[$tmp1594];
frost$core$Int64 $tmp1596 = (frost$core$Int64) {3u};
frost$core$Int $tmp1597 = (frost$core$Int) {3u};
int64_t $tmp1598 = $tmp1596.value;
$tmp1595[$tmp1598] = $tmp1597;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:169
frost$core$Int** $tmp1599 = *(&local0);
frost$core$Int64 $tmp1600 = (frost$core$Int64) {97u};
int64_t $tmp1601 = $tmp1600.value;
frost$core$Int* $tmp1602 = $tmp1599[$tmp1601];
frost$core$Int64 $tmp1603 = (frost$core$Int64) {16u};
frost$core$Int $tmp1604 = (frost$core$Int) {17u};
int64_t $tmp1605 = $tmp1603.value;
$tmp1602[$tmp1605] = $tmp1604;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:170
frost$core$Int** $tmp1606 = *(&local0);
frost$core$Int64 $tmp1607 = (frost$core$Int64) {98u};
frost$core$Int $tmp1608 = (frost$core$Int) {31u};
frost$core$Int $tmp1609 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:170:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp1610 = frost$core$Int64$init$frost$core$Int($tmp1608);
int64_t $tmp1611 = $tmp1610.value;
frost$core$Int* $tmp1612 = ((frost$core$Int*) frostAlloc($tmp1611 * 8));
*(&local29) = $tmp1612;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp1613 = (frost$core$Int) {0u};
frost$core$Bit $tmp1614 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1615 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1613, $tmp1608, $tmp1614);
frost$core$Int $tmp1616 = $tmp1615.min;
*(&local30) = $tmp1616;
frost$core$Int $tmp1617 = $tmp1615.max;
frost$core$Bit $tmp1618 = $tmp1615.inclusive;
bool $tmp1619 = $tmp1618.value;
frost$core$Int $tmp1620 = (frost$core$Int) {1u};
if ($tmp1619) goto block131; else goto block132;
block131:;
int64_t $tmp1621 = $tmp1616.value;
int64_t $tmp1622 = $tmp1617.value;
bool $tmp1623 = $tmp1621 <= $tmp1622;
frost$core$Bit $tmp1624 = (frost$core$Bit) {$tmp1623};
bool $tmp1625 = $tmp1624.value;
if ($tmp1625) goto block128; else goto block129;
block132:;
int64_t $tmp1626 = $tmp1616.value;
int64_t $tmp1627 = $tmp1617.value;
bool $tmp1628 = $tmp1626 < $tmp1627;
frost$core$Bit $tmp1629 = (frost$core$Bit) {$tmp1628};
bool $tmp1630 = $tmp1629.value;
if ($tmp1630) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp1631 = *(&local29);
frost$core$Int $tmp1632 = *(&local30);
frost$core$Int64 $tmp1633 = frost$core$Int64$init$frost$core$Int($tmp1632);
int64_t $tmp1634 = $tmp1633.value;
$tmp1631[$tmp1634] = $tmp1609;
frost$core$Int $tmp1635 = *(&local30);
int64_t $tmp1636 = $tmp1617.value;
int64_t $tmp1637 = $tmp1635.value;
int64_t $tmp1638 = $tmp1636 - $tmp1637;
frost$core$Int $tmp1639 = (frost$core$Int) {$tmp1638};
if ($tmp1619) goto block134; else goto block135;
block134:;
int64_t $tmp1640 = $tmp1639.value;
int64_t $tmp1641 = $tmp1620.value;
bool $tmp1642 = $tmp1640 >= $tmp1641;
frost$core$Bit $tmp1643 = (frost$core$Bit) {$tmp1642};
bool $tmp1644 = $tmp1643.value;
if ($tmp1644) goto block133; else goto block129;
block135:;
int64_t $tmp1645 = $tmp1639.value;
int64_t $tmp1646 = $tmp1620.value;
bool $tmp1647 = $tmp1645 > $tmp1646;
frost$core$Bit $tmp1648 = (frost$core$Bit) {$tmp1647};
bool $tmp1649 = $tmp1648.value;
if ($tmp1649) goto block133; else goto block129;
block133:;
int64_t $tmp1650 = $tmp1635.value;
int64_t $tmp1651 = $tmp1620.value;
int64_t $tmp1652 = $tmp1650 + $tmp1651;
frost$core$Int $tmp1653 = (frost$core$Int) {$tmp1652};
*(&local30) = $tmp1653;
goto block128;
block129:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp1654 = *(&local29);
int64_t $tmp1655 = $tmp1607.value;
$tmp1606[$tmp1655] = $tmp1654;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:171
frost$core$Int** $tmp1656 = *(&local0);
frost$core$Int64 $tmp1657 = (frost$core$Int64) {98u};
int64_t $tmp1658 = $tmp1657.value;
frost$core$Int* $tmp1659 = $tmp1656[$tmp1658];
frost$core$Int64 $tmp1660 = (frost$core$Int64) {3u};
frost$core$Int $tmp1661 = (frost$core$Int) {3u};
int64_t $tmp1662 = $tmp1660.value;
$tmp1659[$tmp1662] = $tmp1661;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:172
frost$core$Int** $tmp1663 = *(&local0);
frost$core$Int64 $tmp1664 = (frost$core$Int64) {98u};
int64_t $tmp1665 = $tmp1664.value;
frost$core$Int* $tmp1666 = $tmp1663[$tmp1665];
frost$core$Int64 $tmp1667 = (frost$core$Int64) {5u};
frost$core$Int $tmp1668 = (frost$core$Int) {3u};
int64_t $tmp1669 = $tmp1667.value;
$tmp1666[$tmp1669] = $tmp1668;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:173
frost$core$Int** $tmp1670 = *(&local0);
frost$core$Int64 $tmp1671 = (frost$core$Int64) {99u};
frost$core$Int** $tmp1672 = *(&local0);
frost$core$Int64 $tmp1673 = (frost$core$Int64) {0u};
int64_t $tmp1674 = $tmp1673.value;
frost$core$Int* $tmp1675 = $tmp1672[$tmp1674];
int64_t $tmp1676 = $tmp1671.value;
$tmp1670[$tmp1676] = $tmp1675;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:174
frost$core$Int** $tmp1677 = *(&local0);
frost$core$Int64 $tmp1678 = (frost$core$Int64) {100u};
frost$core$Int** $tmp1679 = *(&local0);
frost$core$Int64 $tmp1680 = (frost$core$Int64) {0u};
int64_t $tmp1681 = $tmp1680.value;
frost$core$Int* $tmp1682 = $tmp1679[$tmp1681];
int64_t $tmp1683 = $tmp1678.value;
$tmp1677[$tmp1683] = $tmp1682;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:175
frost$core$Int** $tmp1684 = *(&local0);
frost$core$Int64 $tmp1685 = (frost$core$Int64) {101u};
frost$core$Int $tmp1686 = (frost$core$Int) {31u};
frost$core$Int $tmp1687 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:175:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp1688 = frost$core$Int64$init$frost$core$Int($tmp1686);
int64_t $tmp1689 = $tmp1688.value;
frost$core$Int* $tmp1690 = ((frost$core$Int*) frostAlloc($tmp1689 * 8));
*(&local31) = $tmp1690;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp1691 = (frost$core$Int) {0u};
frost$core$Bit $tmp1692 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1693 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1691, $tmp1686, $tmp1692);
frost$core$Int $tmp1694 = $tmp1693.min;
*(&local32) = $tmp1694;
frost$core$Int $tmp1695 = $tmp1693.max;
frost$core$Bit $tmp1696 = $tmp1693.inclusive;
bool $tmp1697 = $tmp1696.value;
frost$core$Int $tmp1698 = (frost$core$Int) {1u};
if ($tmp1697) goto block140; else goto block141;
block140:;
int64_t $tmp1699 = $tmp1694.value;
int64_t $tmp1700 = $tmp1695.value;
bool $tmp1701 = $tmp1699 <= $tmp1700;
frost$core$Bit $tmp1702 = (frost$core$Bit) {$tmp1701};
bool $tmp1703 = $tmp1702.value;
if ($tmp1703) goto block137; else goto block138;
block141:;
int64_t $tmp1704 = $tmp1694.value;
int64_t $tmp1705 = $tmp1695.value;
bool $tmp1706 = $tmp1704 < $tmp1705;
frost$core$Bit $tmp1707 = (frost$core$Bit) {$tmp1706};
bool $tmp1708 = $tmp1707.value;
if ($tmp1708) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp1709 = *(&local31);
frost$core$Int $tmp1710 = *(&local32);
frost$core$Int64 $tmp1711 = frost$core$Int64$init$frost$core$Int($tmp1710);
int64_t $tmp1712 = $tmp1711.value;
$tmp1709[$tmp1712] = $tmp1687;
frost$core$Int $tmp1713 = *(&local32);
int64_t $tmp1714 = $tmp1695.value;
int64_t $tmp1715 = $tmp1713.value;
int64_t $tmp1716 = $tmp1714 - $tmp1715;
frost$core$Int $tmp1717 = (frost$core$Int) {$tmp1716};
if ($tmp1697) goto block143; else goto block144;
block143:;
int64_t $tmp1718 = $tmp1717.value;
int64_t $tmp1719 = $tmp1698.value;
bool $tmp1720 = $tmp1718 >= $tmp1719;
frost$core$Bit $tmp1721 = (frost$core$Bit) {$tmp1720};
bool $tmp1722 = $tmp1721.value;
if ($tmp1722) goto block142; else goto block138;
block144:;
int64_t $tmp1723 = $tmp1717.value;
int64_t $tmp1724 = $tmp1698.value;
bool $tmp1725 = $tmp1723 > $tmp1724;
frost$core$Bit $tmp1726 = (frost$core$Bit) {$tmp1725};
bool $tmp1727 = $tmp1726.value;
if ($tmp1727) goto block142; else goto block138;
block142:;
int64_t $tmp1728 = $tmp1713.value;
int64_t $tmp1729 = $tmp1698.value;
int64_t $tmp1730 = $tmp1728 + $tmp1729;
frost$core$Int $tmp1731 = (frost$core$Int) {$tmp1730};
*(&local32) = $tmp1731;
goto block137;
block138:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp1732 = *(&local31);
int64_t $tmp1733 = $tmp1685.value;
$tmp1684[$tmp1733] = $tmp1732;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:176
frost$core$Int** $tmp1734 = *(&local0);
frost$core$Int64 $tmp1735 = (frost$core$Int64) {101u};
int64_t $tmp1736 = $tmp1735.value;
frost$core$Int* $tmp1737 = $tmp1734[$tmp1736];
frost$core$Int64 $tmp1738 = (frost$core$Int64) {3u};
frost$core$Int $tmp1739 = (frost$core$Int) {3u};
int64_t $tmp1740 = $tmp1738.value;
$tmp1737[$tmp1740] = $tmp1739;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:177
frost$core$Int** $tmp1741 = *(&local0);
frost$core$Int64 $tmp1742 = (frost$core$Int64) {101u};
int64_t $tmp1743 = $tmp1742.value;
frost$core$Int* $tmp1744 = $tmp1741[$tmp1743];
frost$core$Int64 $tmp1745 = (frost$core$Int64) {9u};
frost$core$Int $tmp1746 = (frost$core$Int) {10u};
int64_t $tmp1747 = $tmp1745.value;
$tmp1744[$tmp1747] = $tmp1746;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:178
frost$core$Int** $tmp1748 = *(&local0);
frost$core$Int64 $tmp1749 = (frost$core$Int64) {101u};
int64_t $tmp1750 = $tmp1749.value;
frost$core$Int* $tmp1751 = $tmp1748[$tmp1750];
frost$core$Int64 $tmp1752 = (frost$core$Int64) {19u};
frost$core$Int $tmp1753 = (frost$core$Int) {20u};
int64_t $tmp1754 = $tmp1752.value;
$tmp1751[$tmp1754] = $tmp1753;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:179
frost$core$Int** $tmp1755 = *(&local0);
frost$core$Int64 $tmp1756 = (frost$core$Int64) {101u};
int64_t $tmp1757 = $tmp1756.value;
frost$core$Int* $tmp1758 = $tmp1755[$tmp1757];
frost$core$Int64 $tmp1759 = (frost$core$Int64) {27u};
frost$core$Int $tmp1760 = (frost$core$Int) {28u};
int64_t $tmp1761 = $tmp1759.value;
$tmp1758[$tmp1761] = $tmp1760;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:180
frost$core$Int** $tmp1762 = *(&local0);
frost$core$Int64 $tmp1763 = (frost$core$Int64) {102u};
frost$core$Int $tmp1764 = (frost$core$Int) {31u};
frost$core$Int $tmp1765 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:180:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp1766 = frost$core$Int64$init$frost$core$Int($tmp1764);
int64_t $tmp1767 = $tmp1766.value;
frost$core$Int* $tmp1768 = ((frost$core$Int*) frostAlloc($tmp1767 * 8));
*(&local33) = $tmp1768;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp1769 = (frost$core$Int) {0u};
frost$core$Bit $tmp1770 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1771 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1769, $tmp1764, $tmp1770);
frost$core$Int $tmp1772 = $tmp1771.min;
*(&local34) = $tmp1772;
frost$core$Int $tmp1773 = $tmp1771.max;
frost$core$Bit $tmp1774 = $tmp1771.inclusive;
bool $tmp1775 = $tmp1774.value;
frost$core$Int $tmp1776 = (frost$core$Int) {1u};
if ($tmp1775) goto block149; else goto block150;
block149:;
int64_t $tmp1777 = $tmp1772.value;
int64_t $tmp1778 = $tmp1773.value;
bool $tmp1779 = $tmp1777 <= $tmp1778;
frost$core$Bit $tmp1780 = (frost$core$Bit) {$tmp1779};
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block146; else goto block147;
block150:;
int64_t $tmp1782 = $tmp1772.value;
int64_t $tmp1783 = $tmp1773.value;
bool $tmp1784 = $tmp1782 < $tmp1783;
frost$core$Bit $tmp1785 = (frost$core$Bit) {$tmp1784};
bool $tmp1786 = $tmp1785.value;
if ($tmp1786) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp1787 = *(&local33);
frost$core$Int $tmp1788 = *(&local34);
frost$core$Int64 $tmp1789 = frost$core$Int64$init$frost$core$Int($tmp1788);
int64_t $tmp1790 = $tmp1789.value;
$tmp1787[$tmp1790] = $tmp1765;
frost$core$Int $tmp1791 = *(&local34);
int64_t $tmp1792 = $tmp1773.value;
int64_t $tmp1793 = $tmp1791.value;
int64_t $tmp1794 = $tmp1792 - $tmp1793;
frost$core$Int $tmp1795 = (frost$core$Int) {$tmp1794};
if ($tmp1775) goto block152; else goto block153;
block152:;
int64_t $tmp1796 = $tmp1795.value;
int64_t $tmp1797 = $tmp1776.value;
bool $tmp1798 = $tmp1796 >= $tmp1797;
frost$core$Bit $tmp1799 = (frost$core$Bit) {$tmp1798};
bool $tmp1800 = $tmp1799.value;
if ($tmp1800) goto block151; else goto block147;
block153:;
int64_t $tmp1801 = $tmp1795.value;
int64_t $tmp1802 = $tmp1776.value;
bool $tmp1803 = $tmp1801 > $tmp1802;
frost$core$Bit $tmp1804 = (frost$core$Bit) {$tmp1803};
bool $tmp1805 = $tmp1804.value;
if ($tmp1805) goto block151; else goto block147;
block151:;
int64_t $tmp1806 = $tmp1791.value;
int64_t $tmp1807 = $tmp1776.value;
int64_t $tmp1808 = $tmp1806 + $tmp1807;
frost$core$Int $tmp1809 = (frost$core$Int) {$tmp1808};
*(&local34) = $tmp1809;
goto block146;
block147:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp1810 = *(&local33);
int64_t $tmp1811 = $tmp1763.value;
$tmp1762[$tmp1811] = $tmp1810;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:181
frost$core$Int** $tmp1812 = *(&local0);
frost$core$Int64 $tmp1813 = (frost$core$Int64) {102u};
int64_t $tmp1814 = $tmp1813.value;
frost$core$Int* $tmp1815 = $tmp1812[$tmp1814];
frost$core$Int64 $tmp1816 = (frost$core$Int64) {1u};
frost$core$Int $tmp1817 = (frost$core$Int) {16u};
int64_t $tmp1818 = $tmp1816.value;
$tmp1815[$tmp1818] = $tmp1817;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:182
frost$core$Int** $tmp1819 = *(&local0);
frost$core$Int64 $tmp1820 = (frost$core$Int64) {102u};
int64_t $tmp1821 = $tmp1820.value;
frost$core$Int* $tmp1822 = $tmp1819[$tmp1821];
frost$core$Int64 $tmp1823 = (frost$core$Int64) {3u};
frost$core$Int $tmp1824 = (frost$core$Int) {3u};
int64_t $tmp1825 = $tmp1823.value;
$tmp1822[$tmp1825] = $tmp1824;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:183
frost$core$Int** $tmp1826 = *(&local0);
frost$core$Int64 $tmp1827 = (frost$core$Int64) {102u};
int64_t $tmp1828 = $tmp1827.value;
frost$core$Int* $tmp1829 = $tmp1826[$tmp1828];
frost$core$Int64 $tmp1830 = (frost$core$Int64) {5u};
frost$core$Int $tmp1831 = (frost$core$Int) {3u};
int64_t $tmp1832 = $tmp1830.value;
$tmp1829[$tmp1832] = $tmp1831;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:184
frost$core$Int** $tmp1833 = *(&local0);
frost$core$Int64 $tmp1834 = (frost$core$Int64) {103u};
frost$core$Int** $tmp1835 = *(&local0);
frost$core$Int64 $tmp1836 = (frost$core$Int64) {0u};
int64_t $tmp1837 = $tmp1836.value;
frost$core$Int* $tmp1838 = $tmp1835[$tmp1837];
int64_t $tmp1839 = $tmp1834.value;
$tmp1833[$tmp1839] = $tmp1838;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:185
frost$core$Int** $tmp1840 = *(&local0);
frost$core$Int64 $tmp1841 = (frost$core$Int64) {104u};
frost$core$Int** $tmp1842 = *(&local0);
frost$core$Int64 $tmp1843 = (frost$core$Int64) {0u};
int64_t $tmp1844 = $tmp1843.value;
frost$core$Int* $tmp1845 = $tmp1842[$tmp1844];
int64_t $tmp1846 = $tmp1841.value;
$tmp1840[$tmp1846] = $tmp1845;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:186
frost$core$Int** $tmp1847 = *(&local0);
frost$core$Int64 $tmp1848 = (frost$core$Int64) {105u};
frost$core$Int** $tmp1849 = *(&local0);
frost$core$Int64 $tmp1850 = (frost$core$Int64) {0u};
int64_t $tmp1851 = $tmp1850.value;
frost$core$Int* $tmp1852 = $tmp1849[$tmp1851];
int64_t $tmp1853 = $tmp1848.value;
$tmp1847[$tmp1853] = $tmp1852;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:187
frost$core$Int** $tmp1854 = *(&local0);
frost$core$Int64 $tmp1855 = (frost$core$Int64) {106u};
frost$core$Int** $tmp1856 = *(&local0);
frost$core$Int64 $tmp1857 = (frost$core$Int64) {0u};
int64_t $tmp1858 = $tmp1857.value;
frost$core$Int* $tmp1859 = $tmp1856[$tmp1858];
int64_t $tmp1860 = $tmp1855.value;
$tmp1854[$tmp1860] = $tmp1859;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:188
frost$core$Int** $tmp1861 = *(&local0);
frost$core$Int64 $tmp1862 = (frost$core$Int64) {107u};
frost$core$Int** $tmp1863 = *(&local0);
frost$core$Int64 $tmp1864 = (frost$core$Int64) {0u};
int64_t $tmp1865 = $tmp1864.value;
frost$core$Int* $tmp1866 = $tmp1863[$tmp1865];
int64_t $tmp1867 = $tmp1862.value;
$tmp1861[$tmp1867] = $tmp1866;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:189
frost$core$Int** $tmp1868 = *(&local0);
frost$core$Int64 $tmp1869 = (frost$core$Int64) {108u};
frost$core$Int $tmp1870 = (frost$core$Int) {31u};
frost$core$Int $tmp1871 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:189:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp1872 = frost$core$Int64$init$frost$core$Int($tmp1870);
int64_t $tmp1873 = $tmp1872.value;
frost$core$Int* $tmp1874 = ((frost$core$Int*) frostAlloc($tmp1873 * 8));
*(&local35) = $tmp1874;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp1875 = (frost$core$Int) {0u};
frost$core$Bit $tmp1876 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1877 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1875, $tmp1870, $tmp1876);
frost$core$Int $tmp1878 = $tmp1877.min;
*(&local36) = $tmp1878;
frost$core$Int $tmp1879 = $tmp1877.max;
frost$core$Bit $tmp1880 = $tmp1877.inclusive;
bool $tmp1881 = $tmp1880.value;
frost$core$Int $tmp1882 = (frost$core$Int) {1u};
if ($tmp1881) goto block158; else goto block159;
block158:;
int64_t $tmp1883 = $tmp1878.value;
int64_t $tmp1884 = $tmp1879.value;
bool $tmp1885 = $tmp1883 <= $tmp1884;
frost$core$Bit $tmp1886 = (frost$core$Bit) {$tmp1885};
bool $tmp1887 = $tmp1886.value;
if ($tmp1887) goto block155; else goto block156;
block159:;
int64_t $tmp1888 = $tmp1878.value;
int64_t $tmp1889 = $tmp1879.value;
bool $tmp1890 = $tmp1888 < $tmp1889;
frost$core$Bit $tmp1891 = (frost$core$Bit) {$tmp1890};
bool $tmp1892 = $tmp1891.value;
if ($tmp1892) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp1893 = *(&local35);
frost$core$Int $tmp1894 = *(&local36);
frost$core$Int64 $tmp1895 = frost$core$Int64$init$frost$core$Int($tmp1894);
int64_t $tmp1896 = $tmp1895.value;
$tmp1893[$tmp1896] = $tmp1871;
frost$core$Int $tmp1897 = *(&local36);
int64_t $tmp1898 = $tmp1879.value;
int64_t $tmp1899 = $tmp1897.value;
int64_t $tmp1900 = $tmp1898 - $tmp1899;
frost$core$Int $tmp1901 = (frost$core$Int) {$tmp1900};
if ($tmp1881) goto block161; else goto block162;
block161:;
int64_t $tmp1902 = $tmp1901.value;
int64_t $tmp1903 = $tmp1882.value;
bool $tmp1904 = $tmp1902 >= $tmp1903;
frost$core$Bit $tmp1905 = (frost$core$Bit) {$tmp1904};
bool $tmp1906 = $tmp1905.value;
if ($tmp1906) goto block160; else goto block156;
block162:;
int64_t $tmp1907 = $tmp1901.value;
int64_t $tmp1908 = $tmp1882.value;
bool $tmp1909 = $tmp1907 > $tmp1908;
frost$core$Bit $tmp1910 = (frost$core$Bit) {$tmp1909};
bool $tmp1911 = $tmp1910.value;
if ($tmp1911) goto block160; else goto block156;
block160:;
int64_t $tmp1912 = $tmp1897.value;
int64_t $tmp1913 = $tmp1882.value;
int64_t $tmp1914 = $tmp1912 + $tmp1913;
frost$core$Int $tmp1915 = (frost$core$Int) {$tmp1914};
*(&local36) = $tmp1915;
goto block155;
block156:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp1916 = *(&local35);
int64_t $tmp1917 = $tmp1869.value;
$tmp1868[$tmp1917] = $tmp1916;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:190
frost$core$Int** $tmp1918 = *(&local0);
frost$core$Int64 $tmp1919 = (frost$core$Int64) {108u};
int64_t $tmp1920 = $tmp1919.value;
frost$core$Int* $tmp1921 = $tmp1918[$tmp1920];
frost$core$Int64 $tmp1922 = (frost$core$Int64) {3u};
frost$core$Int $tmp1923 = (frost$core$Int) {3u};
int64_t $tmp1924 = $tmp1922.value;
$tmp1921[$tmp1924] = $tmp1923;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:191
frost$core$Int** $tmp1925 = *(&local0);
frost$core$Int64 $tmp1926 = (frost$core$Int64) {108u};
int64_t $tmp1927 = $tmp1926.value;
frost$core$Int* $tmp1928 = $tmp1925[$tmp1927];
frost$core$Int64 $tmp1929 = (frost$core$Int64) {17u};
frost$core$Int $tmp1930 = (frost$core$Int) {18u};
int64_t $tmp1931 = $tmp1929.value;
$tmp1928[$tmp1931] = $tmp1930;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:192
frost$core$Int** $tmp1932 = *(&local0);
frost$core$Int64 $tmp1933 = (frost$core$Int64) {108u};
int64_t $tmp1934 = $tmp1933.value;
frost$core$Int* $tmp1935 = $tmp1932[$tmp1934];
frost$core$Int64 $tmp1936 = (frost$core$Int64) {22u};
frost$core$Int $tmp1937 = (frost$core$Int) {23u};
int64_t $tmp1938 = $tmp1936.value;
$tmp1935[$tmp1938] = $tmp1937;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:193
frost$core$Int** $tmp1939 = *(&local0);
frost$core$Int64 $tmp1940 = (frost$core$Int64) {108u};
int64_t $tmp1941 = $tmp1940.value;
frost$core$Int* $tmp1942 = $tmp1939[$tmp1941];
frost$core$Int64 $tmp1943 = (frost$core$Int64) {23u};
frost$core$Int $tmp1944 = (frost$core$Int) {24u};
int64_t $tmp1945 = $tmp1943.value;
$tmp1942[$tmp1945] = $tmp1944;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:194
frost$core$Int** $tmp1946 = *(&local0);
frost$core$Int64 $tmp1947 = (frost$core$Int64) {109u};
frost$core$Int** $tmp1948 = *(&local0);
frost$core$Int64 $tmp1949 = (frost$core$Int64) {0u};
int64_t $tmp1950 = $tmp1949.value;
frost$core$Int* $tmp1951 = $tmp1948[$tmp1950];
int64_t $tmp1952 = $tmp1947.value;
$tmp1946[$tmp1952] = $tmp1951;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:195
frost$core$Int** $tmp1953 = *(&local0);
frost$core$Int64 $tmp1954 = (frost$core$Int64) {110u};
frost$core$Int $tmp1955 = (frost$core$Int) {31u};
frost$core$Int $tmp1956 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:195:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp1957 = frost$core$Int64$init$frost$core$Int($tmp1955);
int64_t $tmp1958 = $tmp1957.value;
frost$core$Int* $tmp1959 = ((frost$core$Int*) frostAlloc($tmp1958 * 8));
*(&local37) = $tmp1959;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp2001 = *(&local37);
int64_t $tmp2002 = $tmp1954.value;
$tmp1953[$tmp2002] = $tmp2001;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:196
frost$core$Int** $tmp2003 = *(&local0);
frost$core$Int64 $tmp2004 = (frost$core$Int64) {110u};
int64_t $tmp2005 = $tmp2004.value;
frost$core$Int* $tmp2006 = $tmp2003[$tmp2005];
frost$core$Int64 $tmp2007 = (frost$core$Int64) {1u};
frost$core$Int $tmp2008 = (frost$core$Int) {21u};
int64_t $tmp2009 = $tmp2007.value;
$tmp2006[$tmp2009] = $tmp2008;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:197
frost$core$Int** $tmp2010 = *(&local0);
frost$core$Int64 $tmp2011 = (frost$core$Int64) {110u};
int64_t $tmp2012 = $tmp2011.value;
frost$core$Int* $tmp2013 = $tmp2010[$tmp2012];
frost$core$Int64 $tmp2014 = (frost$core$Int64) {3u};
frost$core$Int $tmp2015 = (frost$core$Int) {3u};
int64_t $tmp2016 = $tmp2014.value;
$tmp2013[$tmp2016] = $tmp2015;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:198
frost$core$Int** $tmp2017 = *(&local0);
frost$core$Int64 $tmp2018 = (frost$core$Int64) {110u};
int64_t $tmp2019 = $tmp2018.value;
frost$core$Int* $tmp2020 = $tmp2017[$tmp2019];
frost$core$Int64 $tmp2021 = (frost$core$Int64) {5u};
frost$core$Int $tmp2022 = (frost$core$Int) {3u};
int64_t $tmp2023 = $tmp2021.value;
$tmp2020[$tmp2023] = $tmp2022;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:199
frost$core$Int** $tmp2024 = *(&local0);
frost$core$Int64 $tmp2025 = (frost$core$Int64) {111u};
frost$core$Int** $tmp2026 = *(&local0);
frost$core$Int64 $tmp2027 = (frost$core$Int64) {0u};
int64_t $tmp2028 = $tmp2027.value;
frost$core$Int* $tmp2029 = $tmp2026[$tmp2028];
int64_t $tmp2030 = $tmp2025.value;
$tmp2024[$tmp2030] = $tmp2029;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:200
frost$core$Int** $tmp2031 = *(&local0);
frost$core$Int64 $tmp2032 = (frost$core$Int64) {112u};
frost$core$Int** $tmp2033 = *(&local0);
frost$core$Int64 $tmp2034 = (frost$core$Int64) {0u};
int64_t $tmp2035 = $tmp2034.value;
frost$core$Int* $tmp2036 = $tmp2033[$tmp2035];
int64_t $tmp2037 = $tmp2032.value;
$tmp2031[$tmp2037] = $tmp2036;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:201
frost$core$Int** $tmp2038 = *(&local0);
frost$core$Int64 $tmp2039 = (frost$core$Int64) {113u};
frost$core$Int** $tmp2040 = *(&local0);
frost$core$Int64 $tmp2041 = (frost$core$Int64) {0u};
int64_t $tmp2042 = $tmp2041.value;
frost$core$Int* $tmp2043 = $tmp2040[$tmp2042];
int64_t $tmp2044 = $tmp2039.value;
$tmp2038[$tmp2044] = $tmp2043;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:202
frost$core$Int** $tmp2045 = *(&local0);
frost$core$Int64 $tmp2046 = (frost$core$Int64) {114u};
frost$core$Int $tmp2047 = (frost$core$Int) {31u};
frost$core$Int $tmp2048 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:202:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp2049 = frost$core$Int64$init$frost$core$Int($tmp2047);
int64_t $tmp2050 = $tmp2049.value;
frost$core$Int* $tmp2051 = ((frost$core$Int*) frostAlloc($tmp2050 * 8));
*(&local39) = $tmp2051;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp2052 = (frost$core$Int) {0u};
frost$core$Bit $tmp2053 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2054 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2052, $tmp2047, $tmp2053);
frost$core$Int $tmp2055 = $tmp2054.min;
*(&local40) = $tmp2055;
frost$core$Int $tmp2056 = $tmp2054.max;
frost$core$Bit $tmp2057 = $tmp2054.inclusive;
bool $tmp2058 = $tmp2057.value;
frost$core$Int $tmp2059 = (frost$core$Int) {1u};
if ($tmp2058) goto block176; else goto block177;
block176:;
int64_t $tmp2060 = $tmp2055.value;
int64_t $tmp2061 = $tmp2056.value;
bool $tmp2062 = $tmp2060 <= $tmp2061;
frost$core$Bit $tmp2063 = (frost$core$Bit) {$tmp2062};
bool $tmp2064 = $tmp2063.value;
if ($tmp2064) goto block173; else goto block174;
block177:;
int64_t $tmp2065 = $tmp2055.value;
int64_t $tmp2066 = $tmp2056.value;
bool $tmp2067 = $tmp2065 < $tmp2066;
frost$core$Bit $tmp2068 = (frost$core$Bit) {$tmp2067};
bool $tmp2069 = $tmp2068.value;
if ($tmp2069) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp2070 = *(&local39);
frost$core$Int $tmp2071 = *(&local40);
frost$core$Int64 $tmp2072 = frost$core$Int64$init$frost$core$Int($tmp2071);
int64_t $tmp2073 = $tmp2072.value;
$tmp2070[$tmp2073] = $tmp2048;
frost$core$Int $tmp2074 = *(&local40);
int64_t $tmp2075 = $tmp2056.value;
int64_t $tmp2076 = $tmp2074.value;
int64_t $tmp2077 = $tmp2075 - $tmp2076;
frost$core$Int $tmp2078 = (frost$core$Int) {$tmp2077};
if ($tmp2058) goto block179; else goto block180;
block179:;
int64_t $tmp2079 = $tmp2078.value;
int64_t $tmp2080 = $tmp2059.value;
bool $tmp2081 = $tmp2079 >= $tmp2080;
frost$core$Bit $tmp2082 = (frost$core$Bit) {$tmp2081};
bool $tmp2083 = $tmp2082.value;
if ($tmp2083) goto block178; else goto block174;
block180:;
int64_t $tmp2084 = $tmp2078.value;
int64_t $tmp2085 = $tmp2059.value;
bool $tmp2086 = $tmp2084 > $tmp2085;
frost$core$Bit $tmp2087 = (frost$core$Bit) {$tmp2086};
bool $tmp2088 = $tmp2087.value;
if ($tmp2088) goto block178; else goto block174;
block178:;
int64_t $tmp2089 = $tmp2074.value;
int64_t $tmp2090 = $tmp2059.value;
int64_t $tmp2091 = $tmp2089 + $tmp2090;
frost$core$Int $tmp2092 = (frost$core$Int) {$tmp2091};
*(&local40) = $tmp2092;
goto block173;
block174:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp2093 = *(&local39);
int64_t $tmp2094 = $tmp2046.value;
$tmp2045[$tmp2094] = $tmp2093;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:203
frost$core$Int** $tmp2095 = *(&local0);
frost$core$Int64 $tmp2096 = (frost$core$Int64) {114u};
int64_t $tmp2097 = $tmp2096.value;
frost$core$Int* $tmp2098 = $tmp2095[$tmp2097];
frost$core$Int64 $tmp2099 = (frost$core$Int64) {3u};
frost$core$Int $tmp2100 = (frost$core$Int) {3u};
int64_t $tmp2101 = $tmp2099.value;
$tmp2098[$tmp2101] = $tmp2100;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:204
frost$core$Int** $tmp2102 = *(&local0);
frost$core$Int64 $tmp2103 = (frost$core$Int64) {114u};
int64_t $tmp2104 = $tmp2103.value;
frost$core$Int* $tmp2105 = $tmp2102[$tmp2104];
frost$core$Int64 $tmp2106 = (frost$core$Int64) {5u};
frost$core$Int $tmp2107 = (frost$core$Int) {3u};
int64_t $tmp2108 = $tmp2106.value;
$tmp2105[$tmp2108] = $tmp2107;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:205
frost$core$Int** $tmp2109 = *(&local0);
frost$core$Int64 $tmp2110 = (frost$core$Int64) {114u};
int64_t $tmp2111 = $tmp2110.value;
frost$core$Int* $tmp2112 = $tmp2109[$tmp2111];
frost$core$Int64 $tmp2113 = (frost$core$Int64) {25u};
frost$core$Int $tmp2114 = (frost$core$Int) {26u};
int64_t $tmp2115 = $tmp2113.value;
$tmp2112[$tmp2115] = $tmp2114;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:206
frost$core$Int** $tmp2116 = *(&local0);
frost$core$Int64 $tmp2117 = (frost$core$Int64) {115u};
frost$core$Int $tmp2118 = (frost$core$Int) {31u};
frost$core$Int $tmp2119 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:206:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp2120 = frost$core$Int64$init$frost$core$Int($tmp2118);
int64_t $tmp2121 = $tmp2120.value;
frost$core$Int* $tmp2122 = ((frost$core$Int*) frostAlloc($tmp2121 * 8));
*(&local41) = $tmp2122;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp2123 = (frost$core$Int) {0u};
frost$core$Bit $tmp2124 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2125 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2123, $tmp2118, $tmp2124);
frost$core$Int $tmp2126 = $tmp2125.min;
*(&local42) = $tmp2126;
frost$core$Int $tmp2127 = $tmp2125.max;
frost$core$Bit $tmp2128 = $tmp2125.inclusive;
bool $tmp2129 = $tmp2128.value;
frost$core$Int $tmp2130 = (frost$core$Int) {1u};
if ($tmp2129) goto block185; else goto block186;
block185:;
int64_t $tmp2131 = $tmp2126.value;
int64_t $tmp2132 = $tmp2127.value;
bool $tmp2133 = $tmp2131 <= $tmp2132;
frost$core$Bit $tmp2134 = (frost$core$Bit) {$tmp2133};
bool $tmp2135 = $tmp2134.value;
if ($tmp2135) goto block182; else goto block183;
block186:;
int64_t $tmp2136 = $tmp2126.value;
int64_t $tmp2137 = $tmp2127.value;
bool $tmp2138 = $tmp2136 < $tmp2137;
frost$core$Bit $tmp2139 = (frost$core$Bit) {$tmp2138};
bool $tmp2140 = $tmp2139.value;
if ($tmp2140) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp2141 = *(&local41);
frost$core$Int $tmp2142 = *(&local42);
frost$core$Int64 $tmp2143 = frost$core$Int64$init$frost$core$Int($tmp2142);
int64_t $tmp2144 = $tmp2143.value;
$tmp2141[$tmp2144] = $tmp2119;
frost$core$Int $tmp2145 = *(&local42);
int64_t $tmp2146 = $tmp2127.value;
int64_t $tmp2147 = $tmp2145.value;
int64_t $tmp2148 = $tmp2146 - $tmp2147;
frost$core$Int $tmp2149 = (frost$core$Int) {$tmp2148};
if ($tmp2129) goto block188; else goto block189;
block188:;
int64_t $tmp2150 = $tmp2149.value;
int64_t $tmp2151 = $tmp2130.value;
bool $tmp2152 = $tmp2150 >= $tmp2151;
frost$core$Bit $tmp2153 = (frost$core$Bit) {$tmp2152};
bool $tmp2154 = $tmp2153.value;
if ($tmp2154) goto block187; else goto block183;
block189:;
int64_t $tmp2155 = $tmp2149.value;
int64_t $tmp2156 = $tmp2130.value;
bool $tmp2157 = $tmp2155 > $tmp2156;
frost$core$Bit $tmp2158 = (frost$core$Bit) {$tmp2157};
bool $tmp2159 = $tmp2158.value;
if ($tmp2159) goto block187; else goto block183;
block187:;
int64_t $tmp2160 = $tmp2145.value;
int64_t $tmp2161 = $tmp2130.value;
int64_t $tmp2162 = $tmp2160 + $tmp2161;
frost$core$Int $tmp2163 = (frost$core$Int) {$tmp2162};
*(&local42) = $tmp2163;
goto block182;
block183:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp2164 = *(&local41);
int64_t $tmp2165 = $tmp2117.value;
$tmp2116[$tmp2165] = $tmp2164;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:207
frost$core$Int** $tmp2166 = *(&local0);
frost$core$Int64 $tmp2167 = (frost$core$Int64) {115u};
int64_t $tmp2168 = $tmp2167.value;
frost$core$Int* $tmp2169 = $tmp2166[$tmp2168];
frost$core$Int64 $tmp2170 = (frost$core$Int64) {3u};
frost$core$Int $tmp2171 = (frost$core$Int) {3u};
int64_t $tmp2172 = $tmp2170.value;
$tmp2169[$tmp2172] = $tmp2171;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:208
frost$core$Int** $tmp2173 = *(&local0);
frost$core$Int64 $tmp2174 = (frost$core$Int64) {115u};
int64_t $tmp2175 = $tmp2174.value;
frost$core$Int* $tmp2176 = $tmp2173[$tmp2175];
frost$core$Int64 $tmp2177 = (frost$core$Int64) {18u};
frost$core$Int $tmp2178 = (frost$core$Int) {19u};
int64_t $tmp2179 = $tmp2177.value;
$tmp2176[$tmp2179] = $tmp2178;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:209
frost$core$Int** $tmp2180 = *(&local0);
frost$core$Int64 $tmp2181 = (frost$core$Int64) {116u};
frost$core$Int $tmp2182 = (frost$core$Int) {31u};
frost$core$Int $tmp2183 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:209:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp2184 = frost$core$Int64$init$frost$core$Int($tmp2182);
int64_t $tmp2185 = $tmp2184.value;
frost$core$Int* $tmp2186 = ((frost$core$Int*) frostAlloc($tmp2185 * 8));
*(&local43) = $tmp2186;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp2187 = (frost$core$Int) {0u};
frost$core$Bit $tmp2188 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2189 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2187, $tmp2182, $tmp2188);
frost$core$Int $tmp2190 = $tmp2189.min;
*(&local44) = $tmp2190;
frost$core$Int $tmp2191 = $tmp2189.max;
frost$core$Bit $tmp2192 = $tmp2189.inclusive;
bool $tmp2193 = $tmp2192.value;
frost$core$Int $tmp2194 = (frost$core$Int) {1u};
if ($tmp2193) goto block194; else goto block195;
block194:;
int64_t $tmp2195 = $tmp2190.value;
int64_t $tmp2196 = $tmp2191.value;
bool $tmp2197 = $tmp2195 <= $tmp2196;
frost$core$Bit $tmp2198 = (frost$core$Bit) {$tmp2197};
bool $tmp2199 = $tmp2198.value;
if ($tmp2199) goto block191; else goto block192;
block195:;
int64_t $tmp2200 = $tmp2190.value;
int64_t $tmp2201 = $tmp2191.value;
bool $tmp2202 = $tmp2200 < $tmp2201;
frost$core$Bit $tmp2203 = (frost$core$Bit) {$tmp2202};
bool $tmp2204 = $tmp2203.value;
if ($tmp2204) goto block191; else goto block192;
block191:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp2205 = *(&local43);
frost$core$Int $tmp2206 = *(&local44);
frost$core$Int64 $tmp2207 = frost$core$Int64$init$frost$core$Int($tmp2206);
int64_t $tmp2208 = $tmp2207.value;
$tmp2205[$tmp2208] = $tmp2183;
frost$core$Int $tmp2209 = *(&local44);
int64_t $tmp2210 = $tmp2191.value;
int64_t $tmp2211 = $tmp2209.value;
int64_t $tmp2212 = $tmp2210 - $tmp2211;
frost$core$Int $tmp2213 = (frost$core$Int) {$tmp2212};
if ($tmp2193) goto block197; else goto block198;
block197:;
int64_t $tmp2214 = $tmp2213.value;
int64_t $tmp2215 = $tmp2194.value;
bool $tmp2216 = $tmp2214 >= $tmp2215;
frost$core$Bit $tmp2217 = (frost$core$Bit) {$tmp2216};
bool $tmp2218 = $tmp2217.value;
if ($tmp2218) goto block196; else goto block192;
block198:;
int64_t $tmp2219 = $tmp2213.value;
int64_t $tmp2220 = $tmp2194.value;
bool $tmp2221 = $tmp2219 > $tmp2220;
frost$core$Bit $tmp2222 = (frost$core$Bit) {$tmp2221};
bool $tmp2223 = $tmp2222.value;
if ($tmp2223) goto block196; else goto block192;
block196:;
int64_t $tmp2224 = $tmp2209.value;
int64_t $tmp2225 = $tmp2194.value;
int64_t $tmp2226 = $tmp2224 + $tmp2225;
frost$core$Int $tmp2227 = (frost$core$Int) {$tmp2226};
*(&local44) = $tmp2227;
goto block191;
block192:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp2228 = *(&local43);
int64_t $tmp2229 = $tmp2181.value;
$tmp2180[$tmp2229] = $tmp2228;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:210
frost$core$Int** $tmp2230 = *(&local0);
frost$core$Int64 $tmp2231 = (frost$core$Int64) {116u};
int64_t $tmp2232 = $tmp2231.value;
frost$core$Int* $tmp2233 = $tmp2230[$tmp2232];
frost$core$Int64 $tmp2234 = (frost$core$Int64) {1u};
frost$core$Int $tmp2235 = (frost$core$Int) {25u};
int64_t $tmp2236 = $tmp2234.value;
$tmp2233[$tmp2236] = $tmp2235;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:211
frost$core$Int** $tmp2237 = *(&local0);
frost$core$Int64 $tmp2238 = (frost$core$Int64) {116u};
int64_t $tmp2239 = $tmp2238.value;
frost$core$Int* $tmp2240 = $tmp2237[$tmp2239];
frost$core$Int64 $tmp2241 = (frost$core$Int64) {3u};
frost$core$Int $tmp2242 = (frost$core$Int) {3u};
int64_t $tmp2243 = $tmp2241.value;
$tmp2240[$tmp2243] = $tmp2242;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:212
frost$core$Int** $tmp2244 = *(&local0);
frost$core$Int64 $tmp2245 = (frost$core$Int64) {116u};
int64_t $tmp2246 = $tmp2245.value;
frost$core$Int* $tmp2247 = $tmp2244[$tmp2246];
frost$core$Int64 $tmp2248 = (frost$core$Int64) {5u};
frost$core$Int $tmp2249 = (frost$core$Int) {3u};
int64_t $tmp2250 = $tmp2248.value;
$tmp2247[$tmp2250] = $tmp2249;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:213
frost$core$Int** $tmp2251 = *(&local0);
frost$core$Int64 $tmp2252 = (frost$core$Int64) {117u};
frost$core$Int $tmp2253 = (frost$core$Int) {31u};
frost$core$Int $tmp2254 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:213:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp2255 = frost$core$Int64$init$frost$core$Int($tmp2253);
int64_t $tmp2256 = $tmp2255.value;
frost$core$Int* $tmp2257 = ((frost$core$Int*) frostAlloc($tmp2256 * 8));
*(&local45) = $tmp2257;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp2258 = (frost$core$Int) {0u};
frost$core$Bit $tmp2259 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2260 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2258, $tmp2253, $tmp2259);
frost$core$Int $tmp2261 = $tmp2260.min;
*(&local46) = $tmp2261;
frost$core$Int $tmp2262 = $tmp2260.max;
frost$core$Bit $tmp2263 = $tmp2260.inclusive;
bool $tmp2264 = $tmp2263.value;
frost$core$Int $tmp2265 = (frost$core$Int) {1u};
if ($tmp2264) goto block203; else goto block204;
block203:;
int64_t $tmp2266 = $tmp2261.value;
int64_t $tmp2267 = $tmp2262.value;
bool $tmp2268 = $tmp2266 <= $tmp2267;
frost$core$Bit $tmp2269 = (frost$core$Bit) {$tmp2268};
bool $tmp2270 = $tmp2269.value;
if ($tmp2270) goto block200; else goto block201;
block204:;
int64_t $tmp2271 = $tmp2261.value;
int64_t $tmp2272 = $tmp2262.value;
bool $tmp2273 = $tmp2271 < $tmp2272;
frost$core$Bit $tmp2274 = (frost$core$Bit) {$tmp2273};
bool $tmp2275 = $tmp2274.value;
if ($tmp2275) goto block200; else goto block201;
block200:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp2276 = *(&local45);
frost$core$Int $tmp2277 = *(&local46);
frost$core$Int64 $tmp2278 = frost$core$Int64$init$frost$core$Int($tmp2277);
int64_t $tmp2279 = $tmp2278.value;
$tmp2276[$tmp2279] = $tmp2254;
frost$core$Int $tmp2280 = *(&local46);
int64_t $tmp2281 = $tmp2262.value;
int64_t $tmp2282 = $tmp2280.value;
int64_t $tmp2283 = $tmp2281 - $tmp2282;
frost$core$Int $tmp2284 = (frost$core$Int) {$tmp2283};
if ($tmp2264) goto block206; else goto block207;
block206:;
int64_t $tmp2285 = $tmp2284.value;
int64_t $tmp2286 = $tmp2265.value;
bool $tmp2287 = $tmp2285 >= $tmp2286;
frost$core$Bit $tmp2288 = (frost$core$Bit) {$tmp2287};
bool $tmp2289 = $tmp2288.value;
if ($tmp2289) goto block205; else goto block201;
block207:;
int64_t $tmp2290 = $tmp2284.value;
int64_t $tmp2291 = $tmp2265.value;
bool $tmp2292 = $tmp2290 > $tmp2291;
frost$core$Bit $tmp2293 = (frost$core$Bit) {$tmp2292};
bool $tmp2294 = $tmp2293.value;
if ($tmp2294) goto block205; else goto block201;
block205:;
int64_t $tmp2295 = $tmp2280.value;
int64_t $tmp2296 = $tmp2265.value;
int64_t $tmp2297 = $tmp2295 + $tmp2296;
frost$core$Int $tmp2298 = (frost$core$Int) {$tmp2297};
*(&local46) = $tmp2298;
goto block200;
block201:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp2299 = *(&local45);
int64_t $tmp2300 = $tmp2252.value;
$tmp2251[$tmp2300] = $tmp2299;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:214
frost$core$Int** $tmp2301 = *(&local0);
frost$core$Int64 $tmp2302 = (frost$core$Int64) {117u};
int64_t $tmp2303 = $tmp2302.value;
frost$core$Int* $tmp2304 = $tmp2301[$tmp2303];
frost$core$Int64 $tmp2305 = (frost$core$Int64) {3u};
frost$core$Int $tmp2306 = (frost$core$Int) {3u};
int64_t $tmp2307 = $tmp2305.value;
$tmp2304[$tmp2307] = $tmp2306;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:215
frost$core$Int** $tmp2308 = *(&local0);
frost$core$Int64 $tmp2309 = (frost$core$Int64) {117u};
int64_t $tmp2310 = $tmp2309.value;
frost$core$Int* $tmp2311 = $tmp2308[$tmp2310];
frost$core$Int64 $tmp2312 = (frost$core$Int64) {21u};
frost$core$Int $tmp2313 = (frost$core$Int) {22u};
int64_t $tmp2314 = $tmp2312.value;
$tmp2311[$tmp2314] = $tmp2313;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:216
frost$core$Int** $tmp2315 = *(&local0);
frost$core$Int64 $tmp2316 = (frost$core$Int64) {117u};
int64_t $tmp2317 = $tmp2316.value;
frost$core$Int* $tmp2318 = $tmp2315[$tmp2317];
frost$core$Int64 $tmp2319 = (frost$core$Int64) {26u};
frost$core$Int $tmp2320 = (frost$core$Int) {27u};
int64_t $tmp2321 = $tmp2319.value;
$tmp2318[$tmp2321] = $tmp2320;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:217
frost$core$Int** $tmp2322 = *(&local0);
frost$core$Int64 $tmp2323 = (frost$core$Int64) {118u};
frost$core$Int** $tmp2324 = *(&local0);
frost$core$Int64 $tmp2325 = (frost$core$Int64) {0u};
int64_t $tmp2326 = $tmp2325.value;
frost$core$Int* $tmp2327 = $tmp2324[$tmp2326];
int64_t $tmp2328 = $tmp2323.value;
$tmp2322[$tmp2328] = $tmp2327;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:218
frost$core$Int** $tmp2329 = *(&local0);
frost$core$Int64 $tmp2330 = (frost$core$Int64) {119u};
frost$core$Int** $tmp2331 = *(&local0);
frost$core$Int64 $tmp2332 = (frost$core$Int64) {0u};
int64_t $tmp2333 = $tmp2332.value;
frost$core$Int* $tmp2334 = $tmp2331[$tmp2333];
int64_t $tmp2335 = $tmp2330.value;
$tmp2329[$tmp2335] = $tmp2334;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:219
frost$core$Int** $tmp2336 = *(&local0);
frost$core$Int64 $tmp2337 = (frost$core$Int64) {120u};
frost$core$Int** $tmp2338 = *(&local0);
frost$core$Int64 $tmp2339 = (frost$core$Int64) {0u};
int64_t $tmp2340 = $tmp2339.value;
frost$core$Int* $tmp2341 = $tmp2338[$tmp2340];
int64_t $tmp2342 = $tmp2337.value;
$tmp2336[$tmp2342] = $tmp2341;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:220
frost$core$Int** $tmp2343 = *(&local0);
frost$core$Int64 $tmp2344 = (frost$core$Int64) {121u};
frost$core$Int** $tmp2345 = *(&local0);
frost$core$Int64 $tmp2346 = (frost$core$Int64) {0u};
int64_t $tmp2347 = $tmp2346.value;
frost$core$Int* $tmp2348 = $tmp2345[$tmp2347];
int64_t $tmp2349 = $tmp2344.value;
$tmp2343[$tmp2349] = $tmp2348;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:221
frost$core$Int** $tmp2350 = *(&local0);
frost$core$Int64 $tmp2351 = (frost$core$Int64) {122u};
frost$core$Int** $tmp2352 = *(&local0);
frost$core$Int64 $tmp2353 = (frost$core$Int64) {0u};
int64_t $tmp2354 = $tmp2353.value;
frost$core$Int* $tmp2355 = $tmp2352[$tmp2354];
int64_t $tmp2356 = $tmp2351.value;
$tmp2350[$tmp2356] = $tmp2355;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:222
frost$core$Int** $tmp2357 = *(&local0);
frost$core$Int64 $tmp2358 = (frost$core$Int64) {123u};
frost$core$Int $tmp2359 = (frost$core$Int) {31u};
frost$core$Int $tmp2360 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:222:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp2361 = frost$core$Int64$init$frost$core$Int($tmp2359);
int64_t $tmp2362 = $tmp2361.value;
frost$core$Int* $tmp2363 = ((frost$core$Int*) frostAlloc($tmp2362 * 8));
*(&local47) = $tmp2363;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp2364 = (frost$core$Int) {0u};
frost$core$Bit $tmp2365 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2366 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2364, $tmp2359, $tmp2365);
frost$core$Int $tmp2367 = $tmp2366.min;
*(&local48) = $tmp2367;
frost$core$Int $tmp2368 = $tmp2366.max;
frost$core$Bit $tmp2369 = $tmp2366.inclusive;
bool $tmp2370 = $tmp2369.value;
frost$core$Int $tmp2371 = (frost$core$Int) {1u};
if ($tmp2370) goto block212; else goto block213;
block212:;
int64_t $tmp2372 = $tmp2367.value;
int64_t $tmp2373 = $tmp2368.value;
bool $tmp2374 = $tmp2372 <= $tmp2373;
frost$core$Bit $tmp2375 = (frost$core$Bit) {$tmp2374};
bool $tmp2376 = $tmp2375.value;
if ($tmp2376) goto block209; else goto block210;
block213:;
int64_t $tmp2377 = $tmp2367.value;
int64_t $tmp2378 = $tmp2368.value;
bool $tmp2379 = $tmp2377 < $tmp2378;
frost$core$Bit $tmp2380 = (frost$core$Bit) {$tmp2379};
bool $tmp2381 = $tmp2380.value;
if ($tmp2381) goto block209; else goto block210;
block209:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp2382 = *(&local47);
frost$core$Int $tmp2383 = *(&local48);
frost$core$Int64 $tmp2384 = frost$core$Int64$init$frost$core$Int($tmp2383);
int64_t $tmp2385 = $tmp2384.value;
$tmp2382[$tmp2385] = $tmp2360;
frost$core$Int $tmp2386 = *(&local48);
int64_t $tmp2387 = $tmp2368.value;
int64_t $tmp2388 = $tmp2386.value;
int64_t $tmp2389 = $tmp2387 - $tmp2388;
frost$core$Int $tmp2390 = (frost$core$Int) {$tmp2389};
if ($tmp2370) goto block215; else goto block216;
block215:;
int64_t $tmp2391 = $tmp2390.value;
int64_t $tmp2392 = $tmp2371.value;
bool $tmp2393 = $tmp2391 >= $tmp2392;
frost$core$Bit $tmp2394 = (frost$core$Bit) {$tmp2393};
bool $tmp2395 = $tmp2394.value;
if ($tmp2395) goto block214; else goto block210;
block216:;
int64_t $tmp2396 = $tmp2390.value;
int64_t $tmp2397 = $tmp2371.value;
bool $tmp2398 = $tmp2396 > $tmp2397;
frost$core$Bit $tmp2399 = (frost$core$Bit) {$tmp2398};
bool $tmp2400 = $tmp2399.value;
if ($tmp2400) goto block214; else goto block210;
block214:;
int64_t $tmp2401 = $tmp2386.value;
int64_t $tmp2402 = $tmp2371.value;
int64_t $tmp2403 = $tmp2401 + $tmp2402;
frost$core$Int $tmp2404 = (frost$core$Int) {$tmp2403};
*(&local48) = $tmp2404;
goto block209;
block210:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp2405 = *(&local47);
int64_t $tmp2406 = $tmp2358.value;
$tmp2357[$tmp2406] = $tmp2405;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:223
frost$core$Int** $tmp2407 = *(&local0);
frost$core$Int64 $tmp2408 = (frost$core$Int64) {123u};
int64_t $tmp2409 = $tmp2408.value;
frost$core$Int* $tmp2410 = $tmp2407[$tmp2409];
frost$core$Int64 $tmp2411 = (frost$core$Int64) {1u};
frost$core$Int $tmp2412 = (frost$core$Int) {29u};
int64_t $tmp2413 = $tmp2411.value;
$tmp2410[$tmp2413] = $tmp2412;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:224
frost$core$Int** $tmp2414 = *(&local0);
frost$core$Int64 $tmp2415 = (frost$core$Int64) {123u};
int64_t $tmp2416 = $tmp2415.value;
frost$core$Int* $tmp2417 = $tmp2414[$tmp2416];
frost$core$Int64 $tmp2418 = (frost$core$Int64) {3u};
frost$core$Int $tmp2419 = (frost$core$Int) {3u};
int64_t $tmp2420 = $tmp2418.value;
$tmp2417[$tmp2420] = $tmp2419;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:225
frost$core$Int** $tmp2421 = *(&local0);
frost$core$Int64 $tmp2422 = (frost$core$Int64) {124u};
frost$core$Int** $tmp2423 = *(&local0);
frost$core$Int64 $tmp2424 = (frost$core$Int64) {0u};
int64_t $tmp2425 = $tmp2424.value;
frost$core$Int* $tmp2426 = $tmp2423[$tmp2425];
int64_t $tmp2427 = $tmp2422.value;
$tmp2421[$tmp2427] = $tmp2426;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:226
frost$core$Int** $tmp2428 = *(&local0);
frost$core$Int64 $tmp2429 = (frost$core$Int64) {125u};
frost$core$Int $tmp2430 = (frost$core$Int) {31u};
frost$core$Int $tmp2431 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int, fill:frost.core.Int):frost.unsafe.Pointer<frost.core.Int> from Lexer.frost:226:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:25
frost$core$Int64 $tmp2432 = frost$core$Int64$init$frost$core$Int($tmp2430);
int64_t $tmp2433 = $tmp2432.value;
frost$core$Int* $tmp2434 = ((frost$core$Int*) frostAlloc($tmp2433 * 8));
*(&local49) = $tmp2434;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:26
frost$core$Int $tmp2435 = (frost$core$Int) {0u};
frost$core$Bit $tmp2436 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp2437 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp2435, $tmp2430, $tmp2436);
frost$core$Int $tmp2438 = $tmp2437.min;
*(&local50) = $tmp2438;
frost$core$Int $tmp2439 = $tmp2437.max;
frost$core$Bit $tmp2440 = $tmp2437.inclusive;
bool $tmp2441 = $tmp2440.value;
frost$core$Int $tmp2442 = (frost$core$Int) {1u};
if ($tmp2441) goto block221; else goto block222;
block221:;
int64_t $tmp2443 = $tmp2438.value;
int64_t $tmp2444 = $tmp2439.value;
bool $tmp2445 = $tmp2443 <= $tmp2444;
frost$core$Bit $tmp2446 = (frost$core$Bit) {$tmp2445};
bool $tmp2447 = $tmp2446.value;
if ($tmp2447) goto block218; else goto block219;
block222:;
int64_t $tmp2448 = $tmp2438.value;
int64_t $tmp2449 = $tmp2439.value;
bool $tmp2450 = $tmp2448 < $tmp2449;
frost$core$Bit $tmp2451 = (frost$core$Bit) {$tmp2450};
bool $tmp2452 = $tmp2451.value;
if ($tmp2452) goto block218; else goto block219;
block218:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:27
frost$core$Int* $tmp2453 = *(&local49);
frost$core$Int $tmp2454 = *(&local50);
frost$core$Int64 $tmp2455 = frost$core$Int64$init$frost$core$Int($tmp2454);
int64_t $tmp2456 = $tmp2455.value;
$tmp2453[$tmp2456] = $tmp2431;
frost$core$Int $tmp2457 = *(&local50);
int64_t $tmp2458 = $tmp2439.value;
int64_t $tmp2459 = $tmp2457.value;
int64_t $tmp2460 = $tmp2458 - $tmp2459;
frost$core$Int $tmp2461 = (frost$core$Int) {$tmp2460};
if ($tmp2441) goto block224; else goto block225;
block224:;
int64_t $tmp2462 = $tmp2461.value;
int64_t $tmp2463 = $tmp2442.value;
bool $tmp2464 = $tmp2462 >= $tmp2463;
frost$core$Bit $tmp2465 = (frost$core$Bit) {$tmp2464};
bool $tmp2466 = $tmp2465.value;
if ($tmp2466) goto block223; else goto block219;
block225:;
int64_t $tmp2467 = $tmp2461.value;
int64_t $tmp2468 = $tmp2442.value;
bool $tmp2469 = $tmp2467 > $tmp2468;
frost$core$Bit $tmp2470 = (frost$core$Bit) {$tmp2469};
bool $tmp2471 = $tmp2470.value;
if ($tmp2471) goto block223; else goto block219;
block223:;
int64_t $tmp2472 = $tmp2457.value;
int64_t $tmp2473 = $tmp2442.value;
int64_t $tmp2474 = $tmp2472 + $tmp2473;
frost$core$Int $tmp2475 = (frost$core$Int) {$tmp2474};
*(&local50) = $tmp2475;
goto block218;
block219:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:29
frost$core$Int* $tmp2476 = *(&local49);
int64_t $tmp2477 = $tmp2429.value;
$tmp2428[$tmp2477] = $tmp2476;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:227
frost$core$Int** $tmp2478 = *(&local0);
frost$core$Int64 $tmp2479 = (frost$core$Int64) {125u};
int64_t $tmp2480 = $tmp2479.value;
frost$core$Int* $tmp2481 = $tmp2478[$tmp2480];
frost$core$Int64 $tmp2482 = (frost$core$Int64) {1u};
frost$core$Int $tmp2483 = (frost$core$Int) {30u};
int64_t $tmp2484 = $tmp2482.value;
$tmp2481[$tmp2484] = $tmp2483;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:228
frost$core$Int** $tmp2485 = *(&local0);
frost$core$Int64 $tmp2486 = (frost$core$Int64) {125u};
int64_t $tmp2487 = $tmp2486.value;
frost$core$Int* $tmp2488 = $tmp2485[$tmp2487];
frost$core$Int64 $tmp2489 = (frost$core$Int64) {3u};
frost$core$Int $tmp2490 = (frost$core$Int) {3u};
int64_t $tmp2491 = $tmp2489.value;
$tmp2488[$tmp2491] = $tmp2490;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:229
frost$core$Int** $tmp2492 = *(&local0);
frost$core$Int64 $tmp2493 = (frost$core$Int64) {126u};
frost$core$Int** $tmp2494 = *(&local0);
frost$core$Int64 $tmp2495 = (frost$core$Int64) {0u};
int64_t $tmp2496 = $tmp2495.value;
frost$core$Int* $tmp2497 = $tmp2494[$tmp2496];
int64_t $tmp2498 = $tmp2493.value;
$tmp2492[$tmp2498] = $tmp2497;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:230
frost$core$Int** $tmp2499 = *(&local0);
frost$core$Int64 $tmp2500 = (frost$core$Int64) {127u};
frost$core$Int** $tmp2501 = *(&local0);
frost$core$Int64 $tmp2502 = (frost$core$Int64) {0u};
int64_t $tmp2503 = $tmp2502.value;
frost$core$Int* $tmp2504 = $tmp2501[$tmp2503];
int64_t $tmp2505 = $tmp2500.value;
$tmp2499[$tmp2505] = $tmp2504;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:231
frost$core$Int** $tmp2506 = *(&local0);
frost$core$Int64 $tmp2507 = (frost$core$Int64) {128u};
frost$core$Int** $tmp2508 = *(&local0);
frost$core$Int64 $tmp2509 = (frost$core$Int64) {0u};
int64_t $tmp2510 = $tmp2509.value;
frost$core$Int* $tmp2511 = $tmp2508[$tmp2510];
int64_t $tmp2512 = $tmp2507.value;
$tmp2506[$tmp2512] = $tmp2511;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:232
frost$core$Int** $tmp2513 = *(&local0);
frost$core$Int64 $tmp2514 = (frost$core$Int64) {129u};
frost$core$Int** $tmp2515 = *(&local0);
frost$core$Int64 $tmp2516 = (frost$core$Int64) {0u};
int64_t $tmp2517 = $tmp2516.value;
frost$core$Int* $tmp2518 = $tmp2515[$tmp2517];
int64_t $tmp2519 = $tmp2514.value;
$tmp2513[$tmp2519] = $tmp2518;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:233
frost$core$Int** $tmp2520 = *(&local0);
frost$core$Int64 $tmp2521 = (frost$core$Int64) {130u};
frost$core$Int** $tmp2522 = *(&local0);
frost$core$Int64 $tmp2523 = (frost$core$Int64) {0u};
int64_t $tmp2524 = $tmp2523.value;
frost$core$Int* $tmp2525 = $tmp2522[$tmp2524];
int64_t $tmp2526 = $tmp2521.value;
$tmp2520[$tmp2526] = $tmp2525;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:234
frost$core$Int** $tmp2527 = *(&local0);
frost$core$Int64 $tmp2528 = (frost$core$Int64) {131u};
frost$core$Int** $tmp2529 = *(&local0);
frost$core$Int64 $tmp2530 = (frost$core$Int64) {0u};
int64_t $tmp2531 = $tmp2530.value;
frost$core$Int* $tmp2532 = $tmp2529[$tmp2531];
int64_t $tmp2533 = $tmp2528.value;
$tmp2527[$tmp2533] = $tmp2532;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:235
frost$core$Int** $tmp2534 = *(&local0);
frost$core$Int64 $tmp2535 = (frost$core$Int64) {132u};
frost$core$Int** $tmp2536 = *(&local0);
frost$core$Int64 $tmp2537 = (frost$core$Int64) {0u};
int64_t $tmp2538 = $tmp2537.value;
frost$core$Int* $tmp2539 = $tmp2536[$tmp2538];
int64_t $tmp2540 = $tmp2535.value;
$tmp2534[$tmp2540] = $tmp2539;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:236
frost$core$Int** $tmp2541 = *(&local0);
frost$core$Int64 $tmp2542 = (frost$core$Int64) {133u};
frost$core$Int** $tmp2543 = *(&local0);
frost$core$Int64 $tmp2544 = (frost$core$Int64) {0u};
int64_t $tmp2545 = $tmp2544.value;
frost$core$Int* $tmp2546 = $tmp2543[$tmp2545];
int64_t $tmp2547 = $tmp2542.value;
$tmp2541[$tmp2547] = $tmp2546;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:237
frost$core$Int** $tmp2548 = *(&local0);
frost$core$Int64 $tmp2549 = (frost$core$Int64) {134u};
frost$core$Int** $tmp2550 = *(&local0);
frost$core$Int64 $tmp2551 = (frost$core$Int64) {0u};
int64_t $tmp2552 = $tmp2551.value;
frost$core$Int* $tmp2553 = $tmp2550[$tmp2552];
int64_t $tmp2554 = $tmp2549.value;
$tmp2548[$tmp2554] = $tmp2553;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:238
frost$core$Int** $tmp2555 = *(&local0);
frost$core$Int64 $tmp2556 = (frost$core$Int64) {135u};
frost$core$Int** $tmp2557 = *(&local0);
frost$core$Int64 $tmp2558 = (frost$core$Int64) {0u};
int64_t $tmp2559 = $tmp2558.value;
frost$core$Int* $tmp2560 = $tmp2557[$tmp2559];
int64_t $tmp2561 = $tmp2556.value;
$tmp2555[$tmp2561] = $tmp2560;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:239
frost$core$Int** $tmp2562 = *(&local0);
frost$core$Int64 $tmp2563 = (frost$core$Int64) {136u};
frost$core$Int** $tmp2564 = *(&local0);
frost$core$Int64 $tmp2565 = (frost$core$Int64) {0u};
int64_t $tmp2566 = $tmp2565.value;
frost$core$Int* $tmp2567 = $tmp2564[$tmp2566];
int64_t $tmp2568 = $tmp2563.value;
$tmp2562[$tmp2568] = $tmp2567;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:240
frost$core$Int** $tmp2569 = *(&local0);
frost$core$Int64 $tmp2570 = (frost$core$Int64) {137u};
frost$core$Int** $tmp2571 = *(&local0);
frost$core$Int64 $tmp2572 = (frost$core$Int64) {0u};
int64_t $tmp2573 = $tmp2572.value;
frost$core$Int* $tmp2574 = $tmp2571[$tmp2573];
int64_t $tmp2575 = $tmp2570.value;
$tmp2569[$tmp2575] = $tmp2574;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:241
frost$core$Int** $tmp2576 = *(&local0);
frost$core$Int64 $tmp2577 = (frost$core$Int64) {138u};
frost$core$Int** $tmp2578 = *(&local0);
frost$core$Int64 $tmp2579 = (frost$core$Int64) {0u};
int64_t $tmp2580 = $tmp2579.value;
frost$core$Int* $tmp2581 = $tmp2578[$tmp2580];
int64_t $tmp2582 = $tmp2577.value;
$tmp2576[$tmp2582] = $tmp2581;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:242
frost$core$Int** $tmp2583 = *(&local0);
frost$core$Int64 $tmp2584 = (frost$core$Int64) {139u};
frost$core$Int** $tmp2585 = *(&local0);
frost$core$Int64 $tmp2586 = (frost$core$Int64) {0u};
int64_t $tmp2587 = $tmp2586.value;
frost$core$Int* $tmp2588 = $tmp2585[$tmp2587];
int64_t $tmp2589 = $tmp2584.value;
$tmp2583[$tmp2589] = $tmp2588;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:243
frost$core$Int** $tmp2590 = *(&local0);
frost$core$Int64 $tmp2591 = (frost$core$Int64) {140u};
frost$core$Int** $tmp2592 = *(&local0);
frost$core$Int64 $tmp2593 = (frost$core$Int64) {0u};
int64_t $tmp2594 = $tmp2593.value;
frost$core$Int* $tmp2595 = $tmp2592[$tmp2594];
int64_t $tmp2596 = $tmp2591.value;
$tmp2590[$tmp2596] = $tmp2595;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:244
frost$core$Int** $tmp2597 = *(&local0);
frost$core$Int64 $tmp2598 = (frost$core$Int64) {141u};
frost$core$Int** $tmp2599 = *(&local0);
frost$core$Int64 $tmp2600 = (frost$core$Int64) {0u};
int64_t $tmp2601 = $tmp2600.value;
frost$core$Int* $tmp2602 = $tmp2599[$tmp2601];
int64_t $tmp2603 = $tmp2598.value;
$tmp2597[$tmp2603] = $tmp2602;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:245
frost$core$Int** $tmp2604 = *(&local0);
frost$core$Int64 $tmp2605 = (frost$core$Int64) {142u};
frost$core$Int** $tmp2606 = *(&local0);
frost$core$Int64 $tmp2607 = (frost$core$Int64) {0u};
int64_t $tmp2608 = $tmp2607.value;
frost$core$Int* $tmp2609 = $tmp2606[$tmp2608];
int64_t $tmp2610 = $tmp2605.value;
$tmp2604[$tmp2610] = $tmp2609;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:246
frost$core$Int** $tmp2611 = *(&local0);
frost$core$Int64 $tmp2612 = (frost$core$Int64) {143u};
frost$core$Int** $tmp2613 = *(&local0);
frost$core$Int64 $tmp2614 = (frost$core$Int64) {0u};
int64_t $tmp2615 = $tmp2614.value;
frost$core$Int* $tmp2616 = $tmp2613[$tmp2615];
int64_t $tmp2617 = $tmp2612.value;
$tmp2611[$tmp2617] = $tmp2616;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:247
frost$core$Int** $tmp2618 = *(&local0);
frost$core$Int64 $tmp2619 = (frost$core$Int64) {144u};
frost$core$Int** $tmp2620 = *(&local0);
frost$core$Int64 $tmp2621 = (frost$core$Int64) {0u};
int64_t $tmp2622 = $tmp2621.value;
frost$core$Int* $tmp2623 = $tmp2620[$tmp2622];
int64_t $tmp2624 = $tmp2619.value;
$tmp2618[$tmp2624] = $tmp2623;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:248
frost$core$Int** $tmp2625 = *(&local0);
frost$core$Int64 $tmp2626 = (frost$core$Int64) {145u};
frost$core$Int** $tmp2627 = *(&local0);
frost$core$Int64 $tmp2628 = (frost$core$Int64) {0u};
int64_t $tmp2629 = $tmp2628.value;
frost$core$Int* $tmp2630 = $tmp2627[$tmp2629];
int64_t $tmp2631 = $tmp2626.value;
$tmp2625[$tmp2631] = $tmp2630;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:249
frost$core$Int** $tmp2632 = *(&local0);
frost$core$Int64 $tmp2633 = (frost$core$Int64) {146u};
frost$core$Int** $tmp2634 = *(&local0);
frost$core$Int64 $tmp2635 = (frost$core$Int64) {0u};
int64_t $tmp2636 = $tmp2635.value;
frost$core$Int* $tmp2637 = $tmp2634[$tmp2636];
int64_t $tmp2638 = $tmp2633.value;
$tmp2632[$tmp2638] = $tmp2637;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:250
frost$core$Int** $tmp2639 = *(&local0);
frost$core$Int64 $tmp2640 = (frost$core$Int64) {147u};
frost$core$Int** $tmp2641 = *(&local0);
frost$core$Int64 $tmp2642 = (frost$core$Int64) {0u};
int64_t $tmp2643 = $tmp2642.value;
frost$core$Int* $tmp2644 = $tmp2641[$tmp2643];
int64_t $tmp2645 = $tmp2640.value;
$tmp2639[$tmp2645] = $tmp2644;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:251
frost$core$Int** $tmp2646 = *(&local0);
frost$core$Int64 $tmp2647 = (frost$core$Int64) {148u};
frost$core$Int** $tmp2648 = *(&local0);
frost$core$Int64 $tmp2649 = (frost$core$Int64) {0u};
int64_t $tmp2650 = $tmp2649.value;
frost$core$Int* $tmp2651 = $tmp2648[$tmp2650];
int64_t $tmp2652 = $tmp2647.value;
$tmp2646[$tmp2652] = $tmp2651;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:252
frost$core$Int** $tmp2653 = *(&local0);
frost$core$Int64 $tmp2654 = (frost$core$Int64) {149u};
frost$core$Int** $tmp2655 = *(&local0);
frost$core$Int64 $tmp2656 = (frost$core$Int64) {0u};
int64_t $tmp2657 = $tmp2656.value;
frost$core$Int* $tmp2658 = $tmp2655[$tmp2657];
int64_t $tmp2659 = $tmp2654.value;
$tmp2653[$tmp2659] = $tmp2658;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:253
frost$core$Int** $tmp2660 = *(&local0);
frost$core$Int64 $tmp2661 = (frost$core$Int64) {150u};
frost$core$Int** $tmp2662 = *(&local0);
frost$core$Int64 $tmp2663 = (frost$core$Int64) {0u};
int64_t $tmp2664 = $tmp2663.value;
frost$core$Int* $tmp2665 = $tmp2662[$tmp2664];
int64_t $tmp2666 = $tmp2661.value;
$tmp2660[$tmp2666] = $tmp2665;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:254
frost$core$Int** $tmp2667 = *(&local0);
frost$core$Int64 $tmp2668 = (frost$core$Int64) {151u};
frost$core$Int** $tmp2669 = *(&local0);
frost$core$Int64 $tmp2670 = (frost$core$Int64) {0u};
int64_t $tmp2671 = $tmp2670.value;
frost$core$Int* $tmp2672 = $tmp2669[$tmp2671];
int64_t $tmp2673 = $tmp2668.value;
$tmp2667[$tmp2673] = $tmp2672;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:255
frost$core$Int** $tmp2674 = *(&local0);
frost$core$Int64 $tmp2675 = (frost$core$Int64) {152u};
frost$core$Int** $tmp2676 = *(&local0);
frost$core$Int64 $tmp2677 = (frost$core$Int64) {0u};
int64_t $tmp2678 = $tmp2677.value;
frost$core$Int* $tmp2679 = $tmp2676[$tmp2678];
int64_t $tmp2680 = $tmp2675.value;
$tmp2674[$tmp2680] = $tmp2679;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:256
frost$core$Int** $tmp2681 = *(&local0);
frost$core$Int64 $tmp2682 = (frost$core$Int64) {153u};
frost$core$Int** $tmp2683 = *(&local0);
frost$core$Int64 $tmp2684 = (frost$core$Int64) {0u};
int64_t $tmp2685 = $tmp2684.value;
frost$core$Int* $tmp2686 = $tmp2683[$tmp2685];
int64_t $tmp2687 = $tmp2682.value;
$tmp2681[$tmp2687] = $tmp2686;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:257
frost$core$Int** $tmp2688 = *(&local0);
frost$core$Int64 $tmp2689 = (frost$core$Int64) {154u};
frost$core$Int** $tmp2690 = *(&local0);
frost$core$Int64 $tmp2691 = (frost$core$Int64) {0u};
int64_t $tmp2692 = $tmp2691.value;
frost$core$Int* $tmp2693 = $tmp2690[$tmp2692];
int64_t $tmp2694 = $tmp2689.value;
$tmp2688[$tmp2694] = $tmp2693;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:258
frost$core$Int** $tmp2695 = *(&local0);
frost$core$Int64 $tmp2696 = (frost$core$Int64) {155u};
frost$core$Int** $tmp2697 = *(&local0);
frost$core$Int64 $tmp2698 = (frost$core$Int64) {0u};
int64_t $tmp2699 = $tmp2698.value;
frost$core$Int* $tmp2700 = $tmp2697[$tmp2699];
int64_t $tmp2701 = $tmp2696.value;
$tmp2695[$tmp2701] = $tmp2700;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:259
frost$core$Int** $tmp2702 = *(&local0);
frost$core$Int64 $tmp2703 = (frost$core$Int64) {156u};
frost$core$Int** $tmp2704 = *(&local0);
frost$core$Int64 $tmp2705 = (frost$core$Int64) {0u};
int64_t $tmp2706 = $tmp2705.value;
frost$core$Int* $tmp2707 = $tmp2704[$tmp2706];
int64_t $tmp2708 = $tmp2703.value;
$tmp2702[$tmp2708] = $tmp2707;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:260
frost$core$Int** $tmp2709 = *(&local0);
frost$core$Int64 $tmp2710 = (frost$core$Int64) {157u};
frost$core$Int** $tmp2711 = *(&local0);
frost$core$Int64 $tmp2712 = (frost$core$Int64) {0u};
int64_t $tmp2713 = $tmp2712.value;
frost$core$Int* $tmp2714 = $tmp2711[$tmp2713];
int64_t $tmp2715 = $tmp2710.value;
$tmp2709[$tmp2715] = $tmp2714;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:261
frost$core$Int** $tmp2716 = *(&local0);
frost$core$Int64 $tmp2717 = (frost$core$Int64) {158u};
frost$core$Int** $tmp2718 = *(&local0);
frost$core$Int64 $tmp2719 = (frost$core$Int64) {0u};
int64_t $tmp2720 = $tmp2719.value;
frost$core$Int* $tmp2721 = $tmp2718[$tmp2720];
int64_t $tmp2722 = $tmp2717.value;
$tmp2716[$tmp2722] = $tmp2721;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:262
frost$core$Int** $tmp2723 = *(&local0);
frost$core$Int64 $tmp2724 = (frost$core$Int64) {159u};
frost$core$Int** $tmp2725 = *(&local0);
frost$core$Int64 $tmp2726 = (frost$core$Int64) {0u};
int64_t $tmp2727 = $tmp2726.value;
frost$core$Int* $tmp2728 = $tmp2725[$tmp2727];
int64_t $tmp2729 = $tmp2724.value;
$tmp2723[$tmp2729] = $tmp2728;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:263
frost$core$Int** $tmp2730 = *(&local0);
frost$core$Int64 $tmp2731 = (frost$core$Int64) {160u};
frost$core$Int** $tmp2732 = *(&local0);
frost$core$Int64 $tmp2733 = (frost$core$Int64) {0u};
int64_t $tmp2734 = $tmp2733.value;
frost$core$Int* $tmp2735 = $tmp2732[$tmp2734];
int64_t $tmp2736 = $tmp2731.value;
$tmp2730[$tmp2736] = $tmp2735;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:264
frost$core$Int** $tmp2737 = *(&local0);
frost$core$Int64 $tmp2738 = (frost$core$Int64) {161u};
frost$core$Int** $tmp2739 = *(&local0);
frost$core$Int64 $tmp2740 = (frost$core$Int64) {0u};
int64_t $tmp2741 = $tmp2740.value;
frost$core$Int* $tmp2742 = $tmp2739[$tmp2741];
int64_t $tmp2743 = $tmp2738.value;
$tmp2737[$tmp2743] = $tmp2742;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:265
frost$core$Int** $tmp2744 = *(&local0);
frost$core$Int64 $tmp2745 = (frost$core$Int64) {162u};
frost$core$Int** $tmp2746 = *(&local0);
frost$core$Int64 $tmp2747 = (frost$core$Int64) {0u};
int64_t $tmp2748 = $tmp2747.value;
frost$core$Int* $tmp2749 = $tmp2746[$tmp2748];
int64_t $tmp2750 = $tmp2745.value;
$tmp2744[$tmp2750] = $tmp2749;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:266
frost$core$Int** $tmp2751 = *(&local0);
frost$core$Int64 $tmp2752 = (frost$core$Int64) {163u};
frost$core$Int** $tmp2753 = *(&local0);
frost$core$Int64 $tmp2754 = (frost$core$Int64) {0u};
int64_t $tmp2755 = $tmp2754.value;
frost$core$Int* $tmp2756 = $tmp2753[$tmp2755];
int64_t $tmp2757 = $tmp2752.value;
$tmp2751[$tmp2757] = $tmp2756;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:267
frost$core$Int** $tmp2758 = *(&local0);
frost$core$Int64 $tmp2759 = (frost$core$Int64) {164u};
frost$core$Int** $tmp2760 = *(&local0);
frost$core$Int64 $tmp2761 = (frost$core$Int64) {0u};
int64_t $tmp2762 = $tmp2761.value;
frost$core$Int* $tmp2763 = $tmp2760[$tmp2762];
int64_t $tmp2764 = $tmp2759.value;
$tmp2758[$tmp2764] = $tmp2763;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:268
frost$core$Int** $tmp2765 = *(&local0);
frost$core$Int64 $tmp2766 = (frost$core$Int64) {165u};
frost$core$Int** $tmp2767 = *(&local0);
frost$core$Int64 $tmp2768 = (frost$core$Int64) {0u};
int64_t $tmp2769 = $tmp2768.value;
frost$core$Int* $tmp2770 = $tmp2767[$tmp2769];
int64_t $tmp2771 = $tmp2766.value;
$tmp2765[$tmp2771] = $tmp2770;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:269
frost$core$Int** $tmp2772 = *(&local0);
frost$core$Int64 $tmp2773 = (frost$core$Int64) {166u};
frost$core$Int** $tmp2774 = *(&local0);
frost$core$Int64 $tmp2775 = (frost$core$Int64) {0u};
int64_t $tmp2776 = $tmp2775.value;
frost$core$Int* $tmp2777 = $tmp2774[$tmp2776];
int64_t $tmp2778 = $tmp2773.value;
$tmp2772[$tmp2778] = $tmp2777;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:270
frost$core$Int** $tmp2779 = *(&local0);
frost$core$Int64 $tmp2780 = (frost$core$Int64) {167u};
frost$core$Int** $tmp2781 = *(&local0);
frost$core$Int64 $tmp2782 = (frost$core$Int64) {0u};
int64_t $tmp2783 = $tmp2782.value;
frost$core$Int* $tmp2784 = $tmp2781[$tmp2783];
int64_t $tmp2785 = $tmp2780.value;
$tmp2779[$tmp2785] = $tmp2784;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:271
frost$core$Int** $tmp2786 = *(&local0);
frost$core$Int64 $tmp2787 = (frost$core$Int64) {168u};
frost$core$Int** $tmp2788 = *(&local0);
frost$core$Int64 $tmp2789 = (frost$core$Int64) {0u};
int64_t $tmp2790 = $tmp2789.value;
frost$core$Int* $tmp2791 = $tmp2788[$tmp2790];
int64_t $tmp2792 = $tmp2787.value;
$tmp2786[$tmp2792] = $tmp2791;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:272
frost$core$Int** $tmp2793 = *(&local0);
frost$core$Int64 $tmp2794 = (frost$core$Int64) {169u};
frost$core$Int** $tmp2795 = *(&local0);
frost$core$Int64 $tmp2796 = (frost$core$Int64) {0u};
int64_t $tmp2797 = $tmp2796.value;
frost$core$Int* $tmp2798 = $tmp2795[$tmp2797];
int64_t $tmp2799 = $tmp2794.value;
$tmp2793[$tmp2799] = $tmp2798;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:273
frost$core$Int** $tmp2800 = *(&local0);
frost$core$Int64 $tmp2801 = (frost$core$Int64) {170u};
frost$core$Int** $tmp2802 = *(&local0);
frost$core$Int64 $tmp2803 = (frost$core$Int64) {0u};
int64_t $tmp2804 = $tmp2803.value;
frost$core$Int* $tmp2805 = $tmp2802[$tmp2804];
int64_t $tmp2806 = $tmp2801.value;
$tmp2800[$tmp2806] = $tmp2805;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:274
frost$core$Int** $tmp2807 = *(&local0);
frost$core$Int64 $tmp2808 = (frost$core$Int64) {171u};
frost$core$Int** $tmp2809 = *(&local0);
frost$core$Int64 $tmp2810 = (frost$core$Int64) {0u};
int64_t $tmp2811 = $tmp2810.value;
frost$core$Int* $tmp2812 = $tmp2809[$tmp2811];
int64_t $tmp2813 = $tmp2808.value;
$tmp2807[$tmp2813] = $tmp2812;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:275
frost$core$Int** $tmp2814 = *(&local0);
frost$core$Int64 $tmp2815 = (frost$core$Int64) {172u};
frost$core$Int** $tmp2816 = *(&local0);
frost$core$Int64 $tmp2817 = (frost$core$Int64) {0u};
int64_t $tmp2818 = $tmp2817.value;
frost$core$Int* $tmp2819 = $tmp2816[$tmp2818];
int64_t $tmp2820 = $tmp2815.value;
$tmp2814[$tmp2820] = $tmp2819;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:276
frost$core$Int** $tmp2821 = *(&local0);
frost$core$Int64 $tmp2822 = (frost$core$Int64) {173u};
frost$core$Int** $tmp2823 = *(&local0);
frost$core$Int64 $tmp2824 = (frost$core$Int64) {0u};
int64_t $tmp2825 = $tmp2824.value;
frost$core$Int* $tmp2826 = $tmp2823[$tmp2825];
int64_t $tmp2827 = $tmp2822.value;
$tmp2821[$tmp2827] = $tmp2826;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:277
frost$core$Int** $tmp2828 = *(&local0);
frost$core$Int64 $tmp2829 = (frost$core$Int64) {174u};
frost$core$Int** $tmp2830 = *(&local0);
frost$core$Int64 $tmp2831 = (frost$core$Int64) {0u};
int64_t $tmp2832 = $tmp2831.value;
frost$core$Int* $tmp2833 = $tmp2830[$tmp2832];
int64_t $tmp2834 = $tmp2829.value;
$tmp2828[$tmp2834] = $tmp2833;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:278
frost$core$Int** $tmp2835 = *(&local0);
frost$core$Int64 $tmp2836 = (frost$core$Int64) {175u};
frost$core$Int** $tmp2837 = *(&local0);
frost$core$Int64 $tmp2838 = (frost$core$Int64) {0u};
int64_t $tmp2839 = $tmp2838.value;
frost$core$Int* $tmp2840 = $tmp2837[$tmp2839];
int64_t $tmp2841 = $tmp2836.value;
$tmp2835[$tmp2841] = $tmp2840;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:279
frost$core$Int** $tmp2842 = *(&local0);
frost$core$Int64 $tmp2843 = (frost$core$Int64) {176u};
frost$core$Int** $tmp2844 = *(&local0);
frost$core$Int64 $tmp2845 = (frost$core$Int64) {0u};
int64_t $tmp2846 = $tmp2845.value;
frost$core$Int* $tmp2847 = $tmp2844[$tmp2846];
int64_t $tmp2848 = $tmp2843.value;
$tmp2842[$tmp2848] = $tmp2847;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:280
frost$core$Int** $tmp2849 = *(&local0);
frost$core$Int64 $tmp2850 = (frost$core$Int64) {177u};
frost$core$Int** $tmp2851 = *(&local0);
frost$core$Int64 $tmp2852 = (frost$core$Int64) {0u};
int64_t $tmp2853 = $tmp2852.value;
frost$core$Int* $tmp2854 = $tmp2851[$tmp2853];
int64_t $tmp2855 = $tmp2850.value;
$tmp2849[$tmp2855] = $tmp2854;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:281
frost$core$Int** $tmp2856 = *(&local0);
frost$core$Int64 $tmp2857 = (frost$core$Int64) {178u};
frost$core$Int** $tmp2858 = *(&local0);
frost$core$Int64 $tmp2859 = (frost$core$Int64) {0u};
int64_t $tmp2860 = $tmp2859.value;
frost$core$Int* $tmp2861 = $tmp2858[$tmp2860];
int64_t $tmp2862 = $tmp2857.value;
$tmp2856[$tmp2862] = $tmp2861;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:282
frost$core$Int** $tmp2863 = *(&local0);
frost$core$Int64 $tmp2864 = (frost$core$Int64) {179u};
frost$core$Int** $tmp2865 = *(&local0);
frost$core$Int64 $tmp2866 = (frost$core$Int64) {0u};
int64_t $tmp2867 = $tmp2866.value;
frost$core$Int* $tmp2868 = $tmp2865[$tmp2867];
int64_t $tmp2869 = $tmp2864.value;
$tmp2863[$tmp2869] = $tmp2868;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:283
frost$core$Int** $tmp2870 = *(&local0);
frost$core$Int64 $tmp2871 = (frost$core$Int64) {180u};
frost$core$Int** $tmp2872 = *(&local0);
frost$core$Int64 $tmp2873 = (frost$core$Int64) {0u};
int64_t $tmp2874 = $tmp2873.value;
frost$core$Int* $tmp2875 = $tmp2872[$tmp2874];
int64_t $tmp2876 = $tmp2871.value;
$tmp2870[$tmp2876] = $tmp2875;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:284
frost$core$Int** $tmp2877 = *(&local0);
frost$core$Int64 $tmp2878 = (frost$core$Int64) {181u};
frost$core$Int** $tmp2879 = *(&local0);
frost$core$Int64 $tmp2880 = (frost$core$Int64) {0u};
int64_t $tmp2881 = $tmp2880.value;
frost$core$Int* $tmp2882 = $tmp2879[$tmp2881];
int64_t $tmp2883 = $tmp2878.value;
$tmp2877[$tmp2883] = $tmp2882;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:285
frost$core$Int** $tmp2884 = *(&local0);
frost$core$Int64 $tmp2885 = (frost$core$Int64) {182u};
frost$core$Int** $tmp2886 = *(&local0);
frost$core$Int64 $tmp2887 = (frost$core$Int64) {0u};
int64_t $tmp2888 = $tmp2887.value;
frost$core$Int* $tmp2889 = $tmp2886[$tmp2888];
int64_t $tmp2890 = $tmp2885.value;
$tmp2884[$tmp2890] = $tmp2889;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:286
frost$core$Int** $tmp2891 = *(&local0);
frost$core$Int64 $tmp2892 = (frost$core$Int64) {183u};
frost$core$Int** $tmp2893 = *(&local0);
frost$core$Int64 $tmp2894 = (frost$core$Int64) {0u};
int64_t $tmp2895 = $tmp2894.value;
frost$core$Int* $tmp2896 = $tmp2893[$tmp2895];
int64_t $tmp2897 = $tmp2892.value;
$tmp2891[$tmp2897] = $tmp2896;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:287
frost$core$Int** $tmp2898 = *(&local0);
frost$core$Int64 $tmp2899 = (frost$core$Int64) {184u};
frost$core$Int** $tmp2900 = *(&local0);
frost$core$Int64 $tmp2901 = (frost$core$Int64) {0u};
int64_t $tmp2902 = $tmp2901.value;
frost$core$Int* $tmp2903 = $tmp2900[$tmp2902];
int64_t $tmp2904 = $tmp2899.value;
$tmp2898[$tmp2904] = $tmp2903;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:288
frost$core$Int** $tmp2905 = *(&local0);
frost$core$Int64 $tmp2906 = (frost$core$Int64) {185u};
frost$core$Int** $tmp2907 = *(&local0);
frost$core$Int64 $tmp2908 = (frost$core$Int64) {0u};
int64_t $tmp2909 = $tmp2908.value;
frost$core$Int* $tmp2910 = $tmp2907[$tmp2909];
int64_t $tmp2911 = $tmp2906.value;
$tmp2905[$tmp2911] = $tmp2910;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:289
frost$core$Int** $tmp2912 = *(&local0);
frost$core$Int64 $tmp2913 = (frost$core$Int64) {186u};
frost$core$Int** $tmp2914 = *(&local0);
frost$core$Int64 $tmp2915 = (frost$core$Int64) {0u};
int64_t $tmp2916 = $tmp2915.value;
frost$core$Int* $tmp2917 = $tmp2914[$tmp2916];
int64_t $tmp2918 = $tmp2913.value;
$tmp2912[$tmp2918] = $tmp2917;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:290
frost$core$Int** $tmp2919 = *(&local0);
frost$core$Int64 $tmp2920 = (frost$core$Int64) {187u};
frost$core$Int** $tmp2921 = *(&local0);
frost$core$Int64 $tmp2922 = (frost$core$Int64) {0u};
int64_t $tmp2923 = $tmp2922.value;
frost$core$Int* $tmp2924 = $tmp2921[$tmp2923];
int64_t $tmp2925 = $tmp2920.value;
$tmp2919[$tmp2925] = $tmp2924;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:291
frost$core$Int** $tmp2926 = *(&local0);
frost$core$Int64 $tmp2927 = (frost$core$Int64) {188u};
frost$core$Int** $tmp2928 = *(&local0);
frost$core$Int64 $tmp2929 = (frost$core$Int64) {0u};
int64_t $tmp2930 = $tmp2929.value;
frost$core$Int* $tmp2931 = $tmp2928[$tmp2930];
int64_t $tmp2932 = $tmp2927.value;
$tmp2926[$tmp2932] = $tmp2931;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:292
frost$core$Int** $tmp2933 = *(&local0);
frost$core$Int64 $tmp2934 = (frost$core$Int64) {189u};
frost$core$Int** $tmp2935 = *(&local0);
frost$core$Int64 $tmp2936 = (frost$core$Int64) {0u};
int64_t $tmp2937 = $tmp2936.value;
frost$core$Int* $tmp2938 = $tmp2935[$tmp2937];
int64_t $tmp2939 = $tmp2934.value;
$tmp2933[$tmp2939] = $tmp2938;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:293
frost$core$Int** $tmp2940 = *(&local0);
frost$core$Int64 $tmp2941 = (frost$core$Int64) {190u};
frost$core$Int** $tmp2942 = *(&local0);
frost$core$Int64 $tmp2943 = (frost$core$Int64) {0u};
int64_t $tmp2944 = $tmp2943.value;
frost$core$Int* $tmp2945 = $tmp2942[$tmp2944];
int64_t $tmp2946 = $tmp2941.value;
$tmp2940[$tmp2946] = $tmp2945;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:294
frost$core$Int** $tmp2947 = *(&local0);
frost$core$Int64 $tmp2948 = (frost$core$Int64) {191u};
frost$core$Int** $tmp2949 = *(&local0);
frost$core$Int64 $tmp2950 = (frost$core$Int64) {0u};
int64_t $tmp2951 = $tmp2950.value;
frost$core$Int* $tmp2952 = $tmp2949[$tmp2951];
int64_t $tmp2953 = $tmp2948.value;
$tmp2947[$tmp2953] = $tmp2952;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:295
frost$core$Int** $tmp2954 = *(&local0);
frost$core$Int64 $tmp2955 = (frost$core$Int64) {192u};
frost$core$Int** $tmp2956 = *(&local0);
frost$core$Int64 $tmp2957 = (frost$core$Int64) {0u};
int64_t $tmp2958 = $tmp2957.value;
frost$core$Int* $tmp2959 = $tmp2956[$tmp2958];
int64_t $tmp2960 = $tmp2955.value;
$tmp2954[$tmp2960] = $tmp2959;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:296
frost$core$Int** $tmp2961 = *(&local0);
frost$core$Int64 $tmp2962 = (frost$core$Int64) {193u};
frost$core$Int** $tmp2963 = *(&local0);
frost$core$Int64 $tmp2964 = (frost$core$Int64) {0u};
int64_t $tmp2965 = $tmp2964.value;
frost$core$Int* $tmp2966 = $tmp2963[$tmp2965];
int64_t $tmp2967 = $tmp2962.value;
$tmp2961[$tmp2967] = $tmp2966;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:297
frost$core$Int** $tmp2968 = *(&local0);
frost$core$Int64 $tmp2969 = (frost$core$Int64) {194u};
frost$core$Int** $tmp2970 = *(&local0);
frost$core$Int64 $tmp2971 = (frost$core$Int64) {0u};
int64_t $tmp2972 = $tmp2971.value;
frost$core$Int* $tmp2973 = $tmp2970[$tmp2972];
int64_t $tmp2974 = $tmp2969.value;
$tmp2968[$tmp2974] = $tmp2973;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:298
frost$core$Int** $tmp2975 = *(&local0);
frost$core$Int64 $tmp2976 = (frost$core$Int64) {195u};
frost$core$Int** $tmp2977 = *(&local0);
frost$core$Int64 $tmp2978 = (frost$core$Int64) {0u};
int64_t $tmp2979 = $tmp2978.value;
frost$core$Int* $tmp2980 = $tmp2977[$tmp2979];
int64_t $tmp2981 = $tmp2976.value;
$tmp2975[$tmp2981] = $tmp2980;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:299
frost$core$Int** $tmp2982 = *(&local0);
frost$core$Int64 $tmp2983 = (frost$core$Int64) {196u};
frost$core$Int** $tmp2984 = *(&local0);
frost$core$Int64 $tmp2985 = (frost$core$Int64) {0u};
int64_t $tmp2986 = $tmp2985.value;
frost$core$Int* $tmp2987 = $tmp2984[$tmp2986];
int64_t $tmp2988 = $tmp2983.value;
$tmp2982[$tmp2988] = $tmp2987;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:300
frost$core$Int** $tmp2989 = *(&local0);
frost$core$Int64 $tmp2990 = (frost$core$Int64) {197u};
frost$core$Int** $tmp2991 = *(&local0);
frost$core$Int64 $tmp2992 = (frost$core$Int64) {0u};
int64_t $tmp2993 = $tmp2992.value;
frost$core$Int* $tmp2994 = $tmp2991[$tmp2993];
int64_t $tmp2995 = $tmp2990.value;
$tmp2989[$tmp2995] = $tmp2994;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:301
frost$core$Int** $tmp2996 = *(&local0);
frost$core$Int64 $tmp2997 = (frost$core$Int64) {198u};
frost$core$Int** $tmp2998 = *(&local0);
frost$core$Int64 $tmp2999 = (frost$core$Int64) {0u};
int64_t $tmp3000 = $tmp2999.value;
frost$core$Int* $tmp3001 = $tmp2998[$tmp3000];
int64_t $tmp3002 = $tmp2997.value;
$tmp2996[$tmp3002] = $tmp3001;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:302
frost$core$Int** $tmp3003 = *(&local0);
frost$core$Int64 $tmp3004 = (frost$core$Int64) {199u};
frost$core$Int** $tmp3005 = *(&local0);
frost$core$Int64 $tmp3006 = (frost$core$Int64) {0u};
int64_t $tmp3007 = $tmp3006.value;
frost$core$Int* $tmp3008 = $tmp3005[$tmp3007];
int64_t $tmp3009 = $tmp3004.value;
$tmp3003[$tmp3009] = $tmp3008;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:303
frost$core$Int** $tmp3010 = *(&local0);
frost$core$Int64 $tmp3011 = (frost$core$Int64) {200u};
frost$core$Int** $tmp3012 = *(&local0);
frost$core$Int64 $tmp3013 = (frost$core$Int64) {0u};
int64_t $tmp3014 = $tmp3013.value;
frost$core$Int* $tmp3015 = $tmp3012[$tmp3014];
int64_t $tmp3016 = $tmp3011.value;
$tmp3010[$tmp3016] = $tmp3015;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:304
frost$core$Int** $tmp3017 = *(&local0);
frost$core$Int64 $tmp3018 = (frost$core$Int64) {201u};
frost$core$Int** $tmp3019 = *(&local0);
frost$core$Int64 $tmp3020 = (frost$core$Int64) {0u};
int64_t $tmp3021 = $tmp3020.value;
frost$core$Int* $tmp3022 = $tmp3019[$tmp3021];
int64_t $tmp3023 = $tmp3018.value;
$tmp3017[$tmp3023] = $tmp3022;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:305
frost$core$Int** $tmp3024 = *(&local0);
frost$core$Int64 $tmp3025 = (frost$core$Int64) {202u};
frost$core$Int** $tmp3026 = *(&local0);
frost$core$Int64 $tmp3027 = (frost$core$Int64) {0u};
int64_t $tmp3028 = $tmp3027.value;
frost$core$Int* $tmp3029 = $tmp3026[$tmp3028];
int64_t $tmp3030 = $tmp3025.value;
$tmp3024[$tmp3030] = $tmp3029;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:306
frost$core$Int** $tmp3031 = *(&local0);
frost$core$Int64 $tmp3032 = (frost$core$Int64) {203u};
frost$core$Int** $tmp3033 = *(&local0);
frost$core$Int64 $tmp3034 = (frost$core$Int64) {0u};
int64_t $tmp3035 = $tmp3034.value;
frost$core$Int* $tmp3036 = $tmp3033[$tmp3035];
int64_t $tmp3037 = $tmp3032.value;
$tmp3031[$tmp3037] = $tmp3036;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:307
frost$core$Int** $tmp3038 = *(&local0);
frost$core$Int64 $tmp3039 = (frost$core$Int64) {204u};
frost$core$Int** $tmp3040 = *(&local0);
frost$core$Int64 $tmp3041 = (frost$core$Int64) {0u};
int64_t $tmp3042 = $tmp3041.value;
frost$core$Int* $tmp3043 = $tmp3040[$tmp3042];
int64_t $tmp3044 = $tmp3039.value;
$tmp3038[$tmp3044] = $tmp3043;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:308
frost$core$Int** $tmp3045 = *(&local0);
frost$core$Int64 $tmp3046 = (frost$core$Int64) {205u};
frost$core$Int** $tmp3047 = *(&local0);
frost$core$Int64 $tmp3048 = (frost$core$Int64) {0u};
int64_t $tmp3049 = $tmp3048.value;
frost$core$Int* $tmp3050 = $tmp3047[$tmp3049];
int64_t $tmp3051 = $tmp3046.value;
$tmp3045[$tmp3051] = $tmp3050;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:309
frost$core$Int** $tmp3052 = *(&local0);
frost$core$Int64 $tmp3053 = (frost$core$Int64) {206u};
frost$core$Int** $tmp3054 = *(&local0);
frost$core$Int64 $tmp3055 = (frost$core$Int64) {0u};
int64_t $tmp3056 = $tmp3055.value;
frost$core$Int* $tmp3057 = $tmp3054[$tmp3056];
int64_t $tmp3058 = $tmp3053.value;
$tmp3052[$tmp3058] = $tmp3057;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:310
frost$core$Int** $tmp3059 = *(&local0);
frost$core$Int64 $tmp3060 = (frost$core$Int64) {207u};
frost$core$Int** $tmp3061 = *(&local0);
frost$core$Int64 $tmp3062 = (frost$core$Int64) {0u};
int64_t $tmp3063 = $tmp3062.value;
frost$core$Int* $tmp3064 = $tmp3061[$tmp3063];
int64_t $tmp3065 = $tmp3060.value;
$tmp3059[$tmp3065] = $tmp3064;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:311
frost$core$Int** $tmp3066 = *(&local0);
frost$core$Int64 $tmp3067 = (frost$core$Int64) {208u};
frost$core$Int** $tmp3068 = *(&local0);
frost$core$Int64 $tmp3069 = (frost$core$Int64) {0u};
int64_t $tmp3070 = $tmp3069.value;
frost$core$Int* $tmp3071 = $tmp3068[$tmp3070];
int64_t $tmp3072 = $tmp3067.value;
$tmp3066[$tmp3072] = $tmp3071;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:312
frost$core$Int** $tmp3073 = *(&local0);
frost$core$Int64 $tmp3074 = (frost$core$Int64) {209u};
frost$core$Int** $tmp3075 = *(&local0);
frost$core$Int64 $tmp3076 = (frost$core$Int64) {0u};
int64_t $tmp3077 = $tmp3076.value;
frost$core$Int* $tmp3078 = $tmp3075[$tmp3077];
int64_t $tmp3079 = $tmp3074.value;
$tmp3073[$tmp3079] = $tmp3078;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:313
frost$core$Int** $tmp3080 = *(&local0);
frost$core$Int64 $tmp3081 = (frost$core$Int64) {210u};
frost$core$Int** $tmp3082 = *(&local0);
frost$core$Int64 $tmp3083 = (frost$core$Int64) {0u};
int64_t $tmp3084 = $tmp3083.value;
frost$core$Int* $tmp3085 = $tmp3082[$tmp3084];
int64_t $tmp3086 = $tmp3081.value;
$tmp3080[$tmp3086] = $tmp3085;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:314
frost$core$Int** $tmp3087 = *(&local0);
frost$core$Int64 $tmp3088 = (frost$core$Int64) {211u};
frost$core$Int** $tmp3089 = *(&local0);
frost$core$Int64 $tmp3090 = (frost$core$Int64) {0u};
int64_t $tmp3091 = $tmp3090.value;
frost$core$Int* $tmp3092 = $tmp3089[$tmp3091];
int64_t $tmp3093 = $tmp3088.value;
$tmp3087[$tmp3093] = $tmp3092;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:315
frost$core$Int** $tmp3094 = *(&local0);
frost$core$Int64 $tmp3095 = (frost$core$Int64) {212u};
frost$core$Int** $tmp3096 = *(&local0);
frost$core$Int64 $tmp3097 = (frost$core$Int64) {0u};
int64_t $tmp3098 = $tmp3097.value;
frost$core$Int* $tmp3099 = $tmp3096[$tmp3098];
int64_t $tmp3100 = $tmp3095.value;
$tmp3094[$tmp3100] = $tmp3099;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:316
frost$core$Int** $tmp3101 = *(&local0);
frost$core$Int64 $tmp3102 = (frost$core$Int64) {213u};
frost$core$Int** $tmp3103 = *(&local0);
frost$core$Int64 $tmp3104 = (frost$core$Int64) {0u};
int64_t $tmp3105 = $tmp3104.value;
frost$core$Int* $tmp3106 = $tmp3103[$tmp3105];
int64_t $tmp3107 = $tmp3102.value;
$tmp3101[$tmp3107] = $tmp3106;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:317
frost$core$Int** $tmp3108 = *(&local0);
frost$core$Int64 $tmp3109 = (frost$core$Int64) {214u};
frost$core$Int** $tmp3110 = *(&local0);
frost$core$Int64 $tmp3111 = (frost$core$Int64) {0u};
int64_t $tmp3112 = $tmp3111.value;
frost$core$Int* $tmp3113 = $tmp3110[$tmp3112];
int64_t $tmp3114 = $tmp3109.value;
$tmp3108[$tmp3114] = $tmp3113;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:318
frost$core$Int** $tmp3115 = *(&local0);
frost$core$Int64 $tmp3116 = (frost$core$Int64) {215u};
frost$core$Int** $tmp3117 = *(&local0);
frost$core$Int64 $tmp3118 = (frost$core$Int64) {0u};
int64_t $tmp3119 = $tmp3118.value;
frost$core$Int* $tmp3120 = $tmp3117[$tmp3119];
int64_t $tmp3121 = $tmp3116.value;
$tmp3115[$tmp3121] = $tmp3120;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:319
frost$core$Int** $tmp3122 = *(&local0);
frost$core$Int64 $tmp3123 = (frost$core$Int64) {216u};
frost$core$Int** $tmp3124 = *(&local0);
frost$core$Int64 $tmp3125 = (frost$core$Int64) {0u};
int64_t $tmp3126 = $tmp3125.value;
frost$core$Int* $tmp3127 = $tmp3124[$tmp3126];
int64_t $tmp3128 = $tmp3123.value;
$tmp3122[$tmp3128] = $tmp3127;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:320
frost$core$Int** $tmp3129 = *(&local0);
frost$core$Int64 $tmp3130 = (frost$core$Int64) {217u};
frost$core$Int** $tmp3131 = *(&local0);
frost$core$Int64 $tmp3132 = (frost$core$Int64) {0u};
int64_t $tmp3133 = $tmp3132.value;
frost$core$Int* $tmp3134 = $tmp3131[$tmp3133];
int64_t $tmp3135 = $tmp3130.value;
$tmp3129[$tmp3135] = $tmp3134;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:321
frost$core$Int** $tmp3136 = *(&local0);
frost$core$Int64 $tmp3137 = (frost$core$Int64) {218u};
frost$core$Int** $tmp3138 = *(&local0);
frost$core$Int64 $tmp3139 = (frost$core$Int64) {0u};
int64_t $tmp3140 = $tmp3139.value;
frost$core$Int* $tmp3141 = $tmp3138[$tmp3140];
int64_t $tmp3142 = $tmp3137.value;
$tmp3136[$tmp3142] = $tmp3141;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:322
frost$core$Int** $tmp3143 = *(&local0);
frost$core$Int64 $tmp3144 = (frost$core$Int64) {219u};
frost$core$Int** $tmp3145 = *(&local0);
frost$core$Int64 $tmp3146 = (frost$core$Int64) {0u};
int64_t $tmp3147 = $tmp3146.value;
frost$core$Int* $tmp3148 = $tmp3145[$tmp3147];
int64_t $tmp3149 = $tmp3144.value;
$tmp3143[$tmp3149] = $tmp3148;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:323
frost$core$Int** $tmp3150 = *(&local0);
frost$core$Int64 $tmp3151 = (frost$core$Int64) {220u};
frost$core$Int** $tmp3152 = *(&local0);
frost$core$Int64 $tmp3153 = (frost$core$Int64) {0u};
int64_t $tmp3154 = $tmp3153.value;
frost$core$Int* $tmp3155 = $tmp3152[$tmp3154];
int64_t $tmp3156 = $tmp3151.value;
$tmp3150[$tmp3156] = $tmp3155;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:324
frost$core$Int** $tmp3157 = *(&local0);
frost$core$Int64 $tmp3158 = (frost$core$Int64) {221u};
frost$core$Int** $tmp3159 = *(&local0);
frost$core$Int64 $tmp3160 = (frost$core$Int64) {0u};
int64_t $tmp3161 = $tmp3160.value;
frost$core$Int* $tmp3162 = $tmp3159[$tmp3161];
int64_t $tmp3163 = $tmp3158.value;
$tmp3157[$tmp3163] = $tmp3162;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:325
frost$core$Int** $tmp3164 = *(&local0);
frost$core$Int64 $tmp3165 = (frost$core$Int64) {222u};
frost$core$Int** $tmp3166 = *(&local0);
frost$core$Int64 $tmp3167 = (frost$core$Int64) {0u};
int64_t $tmp3168 = $tmp3167.value;
frost$core$Int* $tmp3169 = $tmp3166[$tmp3168];
int64_t $tmp3170 = $tmp3165.value;
$tmp3164[$tmp3170] = $tmp3169;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:326
frost$core$Int** $tmp3171 = *(&local0);
frost$core$Int64 $tmp3172 = (frost$core$Int64) {223u};
frost$core$Int** $tmp3173 = *(&local0);
frost$core$Int64 $tmp3174 = (frost$core$Int64) {0u};
int64_t $tmp3175 = $tmp3174.value;
frost$core$Int* $tmp3176 = $tmp3173[$tmp3175];
int64_t $tmp3177 = $tmp3172.value;
$tmp3171[$tmp3177] = $tmp3176;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:327
frost$core$Int** $tmp3178 = *(&local0);
frost$core$Int64 $tmp3179 = (frost$core$Int64) {224u};
frost$core$Int** $tmp3180 = *(&local0);
frost$core$Int64 $tmp3181 = (frost$core$Int64) {0u};
int64_t $tmp3182 = $tmp3181.value;
frost$core$Int* $tmp3183 = $tmp3180[$tmp3182];
int64_t $tmp3184 = $tmp3179.value;
$tmp3178[$tmp3184] = $tmp3183;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:328
frost$core$Int** $tmp3185 = *(&local0);
frost$core$Int64 $tmp3186 = (frost$core$Int64) {225u};
frost$core$Int** $tmp3187 = *(&local0);
frost$core$Int64 $tmp3188 = (frost$core$Int64) {0u};
int64_t $tmp3189 = $tmp3188.value;
frost$core$Int* $tmp3190 = $tmp3187[$tmp3189];
int64_t $tmp3191 = $tmp3186.value;
$tmp3185[$tmp3191] = $tmp3190;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:329
frost$core$Int** $tmp3192 = *(&local0);
frost$core$Int64 $tmp3193 = (frost$core$Int64) {226u};
frost$core$Int** $tmp3194 = *(&local0);
frost$core$Int64 $tmp3195 = (frost$core$Int64) {0u};
int64_t $tmp3196 = $tmp3195.value;
frost$core$Int* $tmp3197 = $tmp3194[$tmp3196];
int64_t $tmp3198 = $tmp3193.value;
$tmp3192[$tmp3198] = $tmp3197;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:330
frost$core$Int** $tmp3199 = *(&local0);
frost$core$Int64 $tmp3200 = (frost$core$Int64) {227u};
frost$core$Int** $tmp3201 = *(&local0);
frost$core$Int64 $tmp3202 = (frost$core$Int64) {0u};
int64_t $tmp3203 = $tmp3202.value;
frost$core$Int* $tmp3204 = $tmp3201[$tmp3203];
int64_t $tmp3205 = $tmp3200.value;
$tmp3199[$tmp3205] = $tmp3204;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:331
frost$core$Int** $tmp3206 = *(&local0);
frost$core$Int64 $tmp3207 = (frost$core$Int64) {228u};
frost$core$Int** $tmp3208 = *(&local0);
frost$core$Int64 $tmp3209 = (frost$core$Int64) {0u};
int64_t $tmp3210 = $tmp3209.value;
frost$core$Int* $tmp3211 = $tmp3208[$tmp3210];
int64_t $tmp3212 = $tmp3207.value;
$tmp3206[$tmp3212] = $tmp3211;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:332
frost$core$Int** $tmp3213 = *(&local0);
frost$core$Int64 $tmp3214 = (frost$core$Int64) {229u};
frost$core$Int** $tmp3215 = *(&local0);
frost$core$Int64 $tmp3216 = (frost$core$Int64) {0u};
int64_t $tmp3217 = $tmp3216.value;
frost$core$Int* $tmp3218 = $tmp3215[$tmp3217];
int64_t $tmp3219 = $tmp3214.value;
$tmp3213[$tmp3219] = $tmp3218;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:333
frost$core$Int** $tmp3220 = *(&local0);
frost$core$Int64 $tmp3221 = (frost$core$Int64) {230u};
frost$core$Int** $tmp3222 = *(&local0);
frost$core$Int64 $tmp3223 = (frost$core$Int64) {0u};
int64_t $tmp3224 = $tmp3223.value;
frost$core$Int* $tmp3225 = $tmp3222[$tmp3224];
int64_t $tmp3226 = $tmp3221.value;
$tmp3220[$tmp3226] = $tmp3225;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:334
frost$core$Int** $tmp3227 = *(&local0);
frost$core$Int64 $tmp3228 = (frost$core$Int64) {231u};
frost$core$Int** $tmp3229 = *(&local0);
frost$core$Int64 $tmp3230 = (frost$core$Int64) {0u};
int64_t $tmp3231 = $tmp3230.value;
frost$core$Int* $tmp3232 = $tmp3229[$tmp3231];
int64_t $tmp3233 = $tmp3228.value;
$tmp3227[$tmp3233] = $tmp3232;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:335
frost$core$Int** $tmp3234 = *(&local0);
frost$core$Int64 $tmp3235 = (frost$core$Int64) {232u};
frost$core$Int** $tmp3236 = *(&local0);
frost$core$Int64 $tmp3237 = (frost$core$Int64) {0u};
int64_t $tmp3238 = $tmp3237.value;
frost$core$Int* $tmp3239 = $tmp3236[$tmp3238];
int64_t $tmp3240 = $tmp3235.value;
$tmp3234[$tmp3240] = $tmp3239;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:336
frost$core$Int** $tmp3241 = *(&local0);
frost$core$Int64 $tmp3242 = (frost$core$Int64) {233u};
frost$core$Int** $tmp3243 = *(&local0);
frost$core$Int64 $tmp3244 = (frost$core$Int64) {0u};
int64_t $tmp3245 = $tmp3244.value;
frost$core$Int* $tmp3246 = $tmp3243[$tmp3245];
int64_t $tmp3247 = $tmp3242.value;
$tmp3241[$tmp3247] = $tmp3246;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:337
frost$core$Int** $tmp3248 = *(&local0);
frost$core$Int64 $tmp3249 = (frost$core$Int64) {234u};
frost$core$Int** $tmp3250 = *(&local0);
frost$core$Int64 $tmp3251 = (frost$core$Int64) {0u};
int64_t $tmp3252 = $tmp3251.value;
frost$core$Int* $tmp3253 = $tmp3250[$tmp3252];
int64_t $tmp3254 = $tmp3249.value;
$tmp3248[$tmp3254] = $tmp3253;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:338
frost$core$Int** $tmp3255 = *(&local0);
frost$core$Int64 $tmp3256 = (frost$core$Int64) {235u};
frost$core$Int** $tmp3257 = *(&local0);
frost$core$Int64 $tmp3258 = (frost$core$Int64) {0u};
int64_t $tmp3259 = $tmp3258.value;
frost$core$Int* $tmp3260 = $tmp3257[$tmp3259];
int64_t $tmp3261 = $tmp3256.value;
$tmp3255[$tmp3261] = $tmp3260;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:339
frost$core$Int** $tmp3262 = *(&local0);
frost$core$Int64 $tmp3263 = (frost$core$Int64) {236u};
frost$core$Int** $tmp3264 = *(&local0);
frost$core$Int64 $tmp3265 = (frost$core$Int64) {0u};
int64_t $tmp3266 = $tmp3265.value;
frost$core$Int* $tmp3267 = $tmp3264[$tmp3266];
int64_t $tmp3268 = $tmp3263.value;
$tmp3262[$tmp3268] = $tmp3267;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:340
frost$core$Int** $tmp3269 = *(&local0);
frost$core$Int64 $tmp3270 = (frost$core$Int64) {237u};
frost$core$Int** $tmp3271 = *(&local0);
frost$core$Int64 $tmp3272 = (frost$core$Int64) {0u};
int64_t $tmp3273 = $tmp3272.value;
frost$core$Int* $tmp3274 = $tmp3271[$tmp3273];
int64_t $tmp3275 = $tmp3270.value;
$tmp3269[$tmp3275] = $tmp3274;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:341
frost$core$Int** $tmp3276 = *(&local0);
frost$core$Int64 $tmp3277 = (frost$core$Int64) {238u};
frost$core$Int** $tmp3278 = *(&local0);
frost$core$Int64 $tmp3279 = (frost$core$Int64) {0u};
int64_t $tmp3280 = $tmp3279.value;
frost$core$Int* $tmp3281 = $tmp3278[$tmp3280];
int64_t $tmp3282 = $tmp3277.value;
$tmp3276[$tmp3282] = $tmp3281;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:342
frost$core$Int** $tmp3283 = *(&local0);
frost$core$Int64 $tmp3284 = (frost$core$Int64) {239u};
frost$core$Int** $tmp3285 = *(&local0);
frost$core$Int64 $tmp3286 = (frost$core$Int64) {0u};
int64_t $tmp3287 = $tmp3286.value;
frost$core$Int* $tmp3288 = $tmp3285[$tmp3287];
int64_t $tmp3289 = $tmp3284.value;
$tmp3283[$tmp3289] = $tmp3288;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:343
frost$core$Int** $tmp3290 = *(&local0);
frost$core$Int64 $tmp3291 = (frost$core$Int64) {240u};
frost$core$Int** $tmp3292 = *(&local0);
frost$core$Int64 $tmp3293 = (frost$core$Int64) {0u};
int64_t $tmp3294 = $tmp3293.value;
frost$core$Int* $tmp3295 = $tmp3292[$tmp3294];
int64_t $tmp3296 = $tmp3291.value;
$tmp3290[$tmp3296] = $tmp3295;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:344
frost$core$Int** $tmp3297 = *(&local0);
frost$core$Int64 $tmp3298 = (frost$core$Int64) {241u};
frost$core$Int** $tmp3299 = *(&local0);
frost$core$Int64 $tmp3300 = (frost$core$Int64) {0u};
int64_t $tmp3301 = $tmp3300.value;
frost$core$Int* $tmp3302 = $tmp3299[$tmp3301];
int64_t $tmp3303 = $tmp3298.value;
$tmp3297[$tmp3303] = $tmp3302;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:345
frost$core$Int** $tmp3304 = *(&local0);
frost$core$Int64 $tmp3305 = (frost$core$Int64) {242u};
frost$core$Int** $tmp3306 = *(&local0);
frost$core$Int64 $tmp3307 = (frost$core$Int64) {0u};
int64_t $tmp3308 = $tmp3307.value;
frost$core$Int* $tmp3309 = $tmp3306[$tmp3308];
int64_t $tmp3310 = $tmp3305.value;
$tmp3304[$tmp3310] = $tmp3309;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:346
frost$core$Int** $tmp3311 = *(&local0);
frost$core$Int64 $tmp3312 = (frost$core$Int64) {243u};
frost$core$Int** $tmp3313 = *(&local0);
frost$core$Int64 $tmp3314 = (frost$core$Int64) {0u};
int64_t $tmp3315 = $tmp3314.value;
frost$core$Int* $tmp3316 = $tmp3313[$tmp3315];
int64_t $tmp3317 = $tmp3312.value;
$tmp3311[$tmp3317] = $tmp3316;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:347
frost$core$Int** $tmp3318 = *(&local0);
frost$core$Int64 $tmp3319 = (frost$core$Int64) {244u};
frost$core$Int** $tmp3320 = *(&local0);
frost$core$Int64 $tmp3321 = (frost$core$Int64) {0u};
int64_t $tmp3322 = $tmp3321.value;
frost$core$Int* $tmp3323 = $tmp3320[$tmp3322];
int64_t $tmp3324 = $tmp3319.value;
$tmp3318[$tmp3324] = $tmp3323;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:348
frost$core$Int** $tmp3325 = *(&local0);
frost$core$Int64 $tmp3326 = (frost$core$Int64) {245u};
frost$core$Int** $tmp3327 = *(&local0);
frost$core$Int64 $tmp3328 = (frost$core$Int64) {0u};
int64_t $tmp3329 = $tmp3328.value;
frost$core$Int* $tmp3330 = $tmp3327[$tmp3329];
int64_t $tmp3331 = $tmp3326.value;
$tmp3325[$tmp3331] = $tmp3330;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:349
frost$core$Int** $tmp3332 = *(&local0);
frost$core$Int64 $tmp3333 = (frost$core$Int64) {246u};
frost$core$Int** $tmp3334 = *(&local0);
frost$core$Int64 $tmp3335 = (frost$core$Int64) {0u};
int64_t $tmp3336 = $tmp3335.value;
frost$core$Int* $tmp3337 = $tmp3334[$tmp3336];
int64_t $tmp3338 = $tmp3333.value;
$tmp3332[$tmp3338] = $tmp3337;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:350
frost$core$Int** $tmp3339 = *(&local0);
frost$core$Int64 $tmp3340 = (frost$core$Int64) {247u};
frost$core$Int** $tmp3341 = *(&local0);
frost$core$Int64 $tmp3342 = (frost$core$Int64) {0u};
int64_t $tmp3343 = $tmp3342.value;
frost$core$Int* $tmp3344 = $tmp3341[$tmp3343];
int64_t $tmp3345 = $tmp3340.value;
$tmp3339[$tmp3345] = $tmp3344;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:351
frost$core$Int** $tmp3346 = *(&local0);
frost$core$Int64 $tmp3347 = (frost$core$Int64) {248u};
frost$core$Int** $tmp3348 = *(&local0);
frost$core$Int64 $tmp3349 = (frost$core$Int64) {0u};
int64_t $tmp3350 = $tmp3349.value;
frost$core$Int* $tmp3351 = $tmp3348[$tmp3350];
int64_t $tmp3352 = $tmp3347.value;
$tmp3346[$tmp3352] = $tmp3351;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:352
frost$core$Int** $tmp3353 = *(&local0);
frost$core$Int64 $tmp3354 = (frost$core$Int64) {249u};
frost$core$Int** $tmp3355 = *(&local0);
frost$core$Int64 $tmp3356 = (frost$core$Int64) {0u};
int64_t $tmp3357 = $tmp3356.value;
frost$core$Int* $tmp3358 = $tmp3355[$tmp3357];
int64_t $tmp3359 = $tmp3354.value;
$tmp3353[$tmp3359] = $tmp3358;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:353
frost$core$Int** $tmp3360 = *(&local0);
frost$core$Int64 $tmp3361 = (frost$core$Int64) {250u};
frost$core$Int** $tmp3362 = *(&local0);
frost$core$Int64 $tmp3363 = (frost$core$Int64) {0u};
int64_t $tmp3364 = $tmp3363.value;
frost$core$Int* $tmp3365 = $tmp3362[$tmp3364];
int64_t $tmp3366 = $tmp3361.value;
$tmp3360[$tmp3366] = $tmp3365;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:354
frost$core$Int** $tmp3367 = *(&local0);
frost$core$Int64 $tmp3368 = (frost$core$Int64) {251u};
frost$core$Int** $tmp3369 = *(&local0);
frost$core$Int64 $tmp3370 = (frost$core$Int64) {0u};
int64_t $tmp3371 = $tmp3370.value;
frost$core$Int* $tmp3372 = $tmp3369[$tmp3371];
int64_t $tmp3373 = $tmp3368.value;
$tmp3367[$tmp3373] = $tmp3372;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:355
frost$core$Int** $tmp3374 = *(&local0);
frost$core$Int64 $tmp3375 = (frost$core$Int64) {252u};
frost$core$Int** $tmp3376 = *(&local0);
frost$core$Int64 $tmp3377 = (frost$core$Int64) {0u};
int64_t $tmp3378 = $tmp3377.value;
frost$core$Int* $tmp3379 = $tmp3376[$tmp3378];
int64_t $tmp3380 = $tmp3375.value;
$tmp3374[$tmp3380] = $tmp3379;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:356
frost$core$Int** $tmp3381 = *(&local0);
frost$core$Int64 $tmp3382 = (frost$core$Int64) {253u};
frost$core$Int** $tmp3383 = *(&local0);
frost$core$Int64 $tmp3384 = (frost$core$Int64) {0u};
int64_t $tmp3385 = $tmp3384.value;
frost$core$Int* $tmp3386 = $tmp3383[$tmp3385];
int64_t $tmp3387 = $tmp3382.value;
$tmp3381[$tmp3387] = $tmp3386;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:357
frost$core$Int** $tmp3388 = *(&local0);
frost$core$Int64 $tmp3389 = (frost$core$Int64) {254u};
frost$core$Int** $tmp3390 = *(&local0);
frost$core$Int64 $tmp3391 = (frost$core$Int64) {0u};
int64_t $tmp3392 = $tmp3391.value;
frost$core$Int* $tmp3393 = $tmp3390[$tmp3392];
int64_t $tmp3394 = $tmp3389.value;
$tmp3388[$tmp3394] = $tmp3393;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:358
frost$core$Int** $tmp3395 = *(&local0);
frost$core$Int64 $tmp3396 = (frost$core$Int64) {255u};
frost$core$Int** $tmp3397 = *(&local0);
frost$core$Int64 $tmp3398 = (frost$core$Int64) {0u};
int64_t $tmp3399 = $tmp3398.value;
frost$core$Int* $tmp3400 = $tmp3397[$tmp3399];
int64_t $tmp3401 = $tmp3396.value;
$tmp3395[$tmp3401] = $tmp3400;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:359
frost$core$Int** $tmp3402 = *(&local0);
return $tmp3402;

}
frost$core$Int* org$frostlang$json$Lexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int$GT() {

frost$core$Int* local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:364
frost$core$Int64 $tmp3403 = (frost$core$Int64) {31u};
int64_t $tmp3404 = $tmp3403.value;
frost$core$Int* $tmp3405 = ((frost$core$Int*) frostAlloc($tmp3404 * 8));
*(&local0) = $tmp3405;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:365
frost$core$Int* $tmp3406 = *(&local0);
frost$core$Int64 $tmp3407 = (frost$core$Int64) {0u};
frost$core$Int $tmp3408 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3409 = $tmp3407.value;
$tmp3406[$tmp3409] = $tmp3408;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:366
frost$core$Int* $tmp3410 = *(&local0);
frost$core$Int64 $tmp3411 = (frost$core$Int64) {1u};
frost$core$Int $tmp3412 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3413 = $tmp3411.value;
$tmp3410[$tmp3413] = $tmp3412;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:367
frost$core$Int* $tmp3414 = *(&local0);
frost$core$Int64 $tmp3415 = (frost$core$Int64) {2u};
frost$core$Int $tmp3416 = (frost$core$Int) {6u};
int64_t $tmp3417 = $tmp3415.value;
$tmp3414[$tmp3417] = $tmp3416;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:368
frost$core$Int* $tmp3418 = *(&local0);
frost$core$Int64 $tmp3419 = (frost$core$Int64) {3u};
frost$core$Int $tmp3420 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3421 = $tmp3419.value;
$tmp3418[$tmp3421] = $tmp3420;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:369
frost$core$Int* $tmp3422 = *(&local0);
frost$core$Int64 $tmp3423 = (frost$core$Int64) {4u};
frost$core$Int $tmp3424 = (frost$core$Int) {3u};
int64_t $tmp3425 = $tmp3423.value;
$tmp3422[$tmp3425] = $tmp3424;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:370
frost$core$Int* $tmp3426 = *(&local0);
frost$core$Int64 $tmp3427 = (frost$core$Int64) {5u};
frost$core$Int $tmp3428 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3429 = $tmp3427.value;
$tmp3426[$tmp3429] = $tmp3428;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:371
frost$core$Int* $tmp3430 = *(&local0);
frost$core$Int64 $tmp3431 = (frost$core$Int64) {6u};
frost$core$Int $tmp3432 = (frost$core$Int) {14u};
int64_t $tmp3433 = $tmp3431.value;
$tmp3430[$tmp3433] = $tmp3432;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:372
frost$core$Int* $tmp3434 = *(&local0);
frost$core$Int64 $tmp3435 = (frost$core$Int64) {7u};
frost$core$Int $tmp3436 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3437 = $tmp3435.value;
$tmp3434[$tmp3437] = $tmp3436;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:373
frost$core$Int* $tmp3438 = *(&local0);
frost$core$Int64 $tmp3439 = (frost$core$Int64) {8u};
frost$core$Int $tmp3440 = (frost$core$Int) {4u};
int64_t $tmp3441 = $tmp3439.value;
$tmp3438[$tmp3441] = $tmp3440;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:374
frost$core$Int* $tmp3442 = *(&local0);
frost$core$Int64 $tmp3443 = (frost$core$Int64) {9u};
frost$core$Int $tmp3444 = (frost$core$Int) {5u};
int64_t $tmp3445 = $tmp3443.value;
$tmp3442[$tmp3445] = $tmp3444;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:375
frost$core$Int* $tmp3446 = *(&local0);
frost$core$Int64 $tmp3447 = (frost$core$Int64) {10u};
frost$core$Int $tmp3448 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3449 = $tmp3447.value;
$tmp3446[$tmp3449] = $tmp3448;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:376
frost$core$Int* $tmp3450 = *(&local0);
frost$core$Int64 $tmp3451 = (frost$core$Int64) {11u};
frost$core$Int $tmp3452 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3453 = $tmp3451.value;
$tmp3450[$tmp3453] = $tmp3452;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:377
frost$core$Int* $tmp3454 = *(&local0);
frost$core$Int64 $tmp3455 = (frost$core$Int64) {12u};
frost$core$Int $tmp3456 = (frost$core$Int) {5u};
int64_t $tmp3457 = $tmp3455.value;
$tmp3454[$tmp3457] = $tmp3456;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:378
frost$core$Int* $tmp3458 = *(&local0);
frost$core$Int64 $tmp3459 = (frost$core$Int64) {13u};
frost$core$Int $tmp3460 = (frost$core$Int) {15u};
int64_t $tmp3461 = $tmp3459.value;
$tmp3458[$tmp3461] = $tmp3460;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:379
frost$core$Int* $tmp3462 = *(&local0);
frost$core$Int64 $tmp3463 = (frost$core$Int64) {14u};
frost$core$Int $tmp3464 = (frost$core$Int) {12u};
int64_t $tmp3465 = $tmp3463.value;
$tmp3462[$tmp3465] = $tmp3464;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:380
frost$core$Int* $tmp3466 = *(&local0);
frost$core$Int64 $tmp3467 = (frost$core$Int64) {15u};
frost$core$Int $tmp3468 = (frost$core$Int) {13u};
int64_t $tmp3469 = $tmp3467.value;
$tmp3466[$tmp3469] = $tmp3468;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:381
frost$core$Int* $tmp3470 = *(&local0);
frost$core$Int64 $tmp3471 = (frost$core$Int64) {16u};
frost$core$Int $tmp3472 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3473 = $tmp3471.value;
$tmp3470[$tmp3473] = $tmp3472;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:382
frost$core$Int* $tmp3474 = *(&local0);
frost$core$Int64 $tmp3475 = (frost$core$Int64) {17u};
frost$core$Int $tmp3476 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3477 = $tmp3475.value;
$tmp3474[$tmp3477] = $tmp3476;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:383
frost$core$Int* $tmp3478 = *(&local0);
frost$core$Int64 $tmp3479 = (frost$core$Int64) {18u};
frost$core$Int $tmp3480 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3481 = $tmp3479.value;
$tmp3478[$tmp3481] = $tmp3480;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:384
frost$core$Int* $tmp3482 = *(&local0);
frost$core$Int64 $tmp3483 = (frost$core$Int64) {19u};
frost$core$Int $tmp3484 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3485 = $tmp3483.value;
$tmp3482[$tmp3485] = $tmp3484;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:385
frost$core$Int* $tmp3486 = *(&local0);
frost$core$Int64 $tmp3487 = (frost$core$Int64) {20u};
frost$core$Int $tmp3488 = (frost$core$Int) {8u};
int64_t $tmp3489 = $tmp3487.value;
$tmp3486[$tmp3489] = $tmp3488;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:386
frost$core$Int* $tmp3490 = *(&local0);
frost$core$Int64 $tmp3491 = (frost$core$Int64) {21u};
frost$core$Int $tmp3492 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3493 = $tmp3491.value;
$tmp3490[$tmp3493] = $tmp3492;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:387
frost$core$Int* $tmp3494 = *(&local0);
frost$core$Int64 $tmp3495 = (frost$core$Int64) {22u};
frost$core$Int $tmp3496 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3497 = $tmp3495.value;
$tmp3494[$tmp3497] = $tmp3496;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:388
frost$core$Int* $tmp3498 = *(&local0);
frost$core$Int64 $tmp3499 = (frost$core$Int64) {23u};
frost$core$Int $tmp3500 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3501 = $tmp3499.value;
$tmp3498[$tmp3501] = $tmp3500;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:389
frost$core$Int* $tmp3502 = *(&local0);
frost$core$Int64 $tmp3503 = (frost$core$Int64) {24u};
frost$core$Int $tmp3504 = (frost$core$Int) {9u};
int64_t $tmp3505 = $tmp3503.value;
$tmp3502[$tmp3505] = $tmp3504;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:390
frost$core$Int* $tmp3506 = *(&local0);
frost$core$Int64 $tmp3507 = (frost$core$Int64) {25u};
frost$core$Int $tmp3508 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3509 = $tmp3507.value;
$tmp3506[$tmp3509] = $tmp3508;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:391
frost$core$Int* $tmp3510 = *(&local0);
frost$core$Int64 $tmp3511 = (frost$core$Int64) {26u};
frost$core$Int $tmp3512 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3513 = $tmp3511.value;
$tmp3510[$tmp3513] = $tmp3512;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:392
frost$core$Int* $tmp3514 = *(&local0);
frost$core$Int64 $tmp3515 = (frost$core$Int64) {27u};
frost$core$Int $tmp3516 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp3517 = $tmp3515.value;
$tmp3514[$tmp3517] = $tmp3516;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:393
frost$core$Int* $tmp3518 = *(&local0);
frost$core$Int64 $tmp3519 = (frost$core$Int64) {28u};
frost$core$Int $tmp3520 = (frost$core$Int) {7u};
int64_t $tmp3521 = $tmp3519.value;
$tmp3518[$tmp3521] = $tmp3520;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:394
frost$core$Int* $tmp3522 = *(&local0);
frost$core$Int64 $tmp3523 = (frost$core$Int64) {29u};
frost$core$Int $tmp3524 = (frost$core$Int) {10u};
int64_t $tmp3525 = $tmp3523.value;
$tmp3522[$tmp3525] = $tmp3524;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:395
frost$core$Int* $tmp3526 = *(&local0);
frost$core$Int64 $tmp3527 = (frost$core$Int64) {30u};
frost$core$Int $tmp3528 = (frost$core$Int) {11u};
int64_t $tmp3529 = $tmp3527.value;
$tmp3526[$tmp3529] = $tmp3528;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:396
frost$core$Int* $tmp3530 = *(&local0);
return $tmp3530;

}
void org$frostlang$json$Lexer$cleanup(org$frostlang$json$Lexer* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:401
frost$core$Int*** $tmp3531 = &param0->transitions;
frost$core$Int** $tmp3532 = *$tmp3531;
frost$core$Int64 $tmp3533 = (frost$core$Int64) {0u};
int64_t $tmp3534 = $tmp3533.value;
frost$core$Int* $tmp3535 = $tmp3532[$tmp3534];
frostFree($tmp3535);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:402
frost$core$Int*** $tmp3536 = &param0->transitions;
frost$core$Int** $tmp3537 = *$tmp3536;
frost$core$Int64 $tmp3538 = (frost$core$Int64) {9u};
int64_t $tmp3539 = $tmp3538.value;
frost$core$Int* $tmp3540 = $tmp3537[$tmp3539];
frostFree($tmp3540);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:403
frost$core$Int*** $tmp3541 = &param0->transitions;
frost$core$Int** $tmp3542 = *$tmp3541;
frost$core$Int64 $tmp3543 = (frost$core$Int64) {34u};
int64_t $tmp3544 = $tmp3543.value;
frost$core$Int* $tmp3545 = $tmp3542[$tmp3544];
frostFree($tmp3545);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:404
frost$core$Int*** $tmp3546 = &param0->transitions;
frost$core$Int** $tmp3547 = *$tmp3546;
frost$core$Int64 $tmp3548 = (frost$core$Int64) {43u};
int64_t $tmp3549 = $tmp3548.value;
frost$core$Int* $tmp3550 = $tmp3547[$tmp3549];
frostFree($tmp3550);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:405
frost$core$Int*** $tmp3551 = &param0->transitions;
frost$core$Int** $tmp3552 = *$tmp3551;
frost$core$Int64 $tmp3553 = (frost$core$Int64) {44u};
int64_t $tmp3554 = $tmp3553.value;
frost$core$Int* $tmp3555 = $tmp3552[$tmp3554];
frostFree($tmp3555);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:406
frost$core$Int*** $tmp3556 = &param0->transitions;
frost$core$Int** $tmp3557 = *$tmp3556;
frost$core$Int64 $tmp3558 = (frost$core$Int64) {45u};
int64_t $tmp3559 = $tmp3558.value;
frost$core$Int* $tmp3560 = $tmp3557[$tmp3559];
frostFree($tmp3560);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:407
frost$core$Int*** $tmp3561 = &param0->transitions;
frost$core$Int** $tmp3562 = *$tmp3561;
frost$core$Int64 $tmp3563 = (frost$core$Int64) {46u};
int64_t $tmp3564 = $tmp3563.value;
frost$core$Int* $tmp3565 = $tmp3562[$tmp3564];
frostFree($tmp3565);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:408
frost$core$Int*** $tmp3566 = &param0->transitions;
frost$core$Int** $tmp3567 = *$tmp3566;
frost$core$Int64 $tmp3568 = (frost$core$Int64) {48u};
int64_t $tmp3569 = $tmp3568.value;
frost$core$Int* $tmp3570 = $tmp3567[$tmp3569];
frostFree($tmp3570);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:409
frost$core$Int*** $tmp3571 = &param0->transitions;
frost$core$Int** $tmp3572 = *$tmp3571;
frost$core$Int64 $tmp3573 = (frost$core$Int64) {58u};
int64_t $tmp3574 = $tmp3573.value;
frost$core$Int* $tmp3575 = $tmp3572[$tmp3574];
frostFree($tmp3575);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:410
frost$core$Int*** $tmp3576 = &param0->transitions;
frost$core$Int** $tmp3577 = *$tmp3576;
frost$core$Int64 $tmp3578 = (frost$core$Int64) {69u};
int64_t $tmp3579 = $tmp3578.value;
frost$core$Int* $tmp3580 = $tmp3577[$tmp3579];
frostFree($tmp3580);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:411
frost$core$Int*** $tmp3581 = &param0->transitions;
frost$core$Int** $tmp3582 = *$tmp3581;
frost$core$Int64 $tmp3583 = (frost$core$Int64) {91u};
int64_t $tmp3584 = $tmp3583.value;
frost$core$Int* $tmp3585 = $tmp3582[$tmp3584];
frostFree($tmp3585);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:412
frost$core$Int*** $tmp3586 = &param0->transitions;
frost$core$Int** $tmp3587 = *$tmp3586;
frost$core$Int64 $tmp3588 = (frost$core$Int64) {92u};
int64_t $tmp3589 = $tmp3588.value;
frost$core$Int* $tmp3590 = $tmp3587[$tmp3589];
frostFree($tmp3590);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:413
frost$core$Int*** $tmp3591 = &param0->transitions;
frost$core$Int** $tmp3592 = *$tmp3591;
frost$core$Int64 $tmp3593 = (frost$core$Int64) {93u};
int64_t $tmp3594 = $tmp3593.value;
frost$core$Int* $tmp3595 = $tmp3592[$tmp3594];
frostFree($tmp3595);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:414
frost$core$Int*** $tmp3596 = &param0->transitions;
frost$core$Int** $tmp3597 = *$tmp3596;
frost$core$Int64 $tmp3598 = (frost$core$Int64) {97u};
int64_t $tmp3599 = $tmp3598.value;
frost$core$Int* $tmp3600 = $tmp3597[$tmp3599];
frostFree($tmp3600);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:415
frost$core$Int*** $tmp3601 = &param0->transitions;
frost$core$Int** $tmp3602 = *$tmp3601;
frost$core$Int64 $tmp3603 = (frost$core$Int64) {98u};
int64_t $tmp3604 = $tmp3603.value;
frost$core$Int* $tmp3605 = $tmp3602[$tmp3604];
frostFree($tmp3605);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:416
frost$core$Int*** $tmp3606 = &param0->transitions;
frost$core$Int** $tmp3607 = *$tmp3606;
frost$core$Int64 $tmp3608 = (frost$core$Int64) {101u};
int64_t $tmp3609 = $tmp3608.value;
frost$core$Int* $tmp3610 = $tmp3607[$tmp3609];
frostFree($tmp3610);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:417
frost$core$Int*** $tmp3611 = &param0->transitions;
frost$core$Int** $tmp3612 = *$tmp3611;
frost$core$Int64 $tmp3613 = (frost$core$Int64) {102u};
int64_t $tmp3614 = $tmp3613.value;
frost$core$Int* $tmp3615 = $tmp3612[$tmp3614];
frostFree($tmp3615);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:418
frost$core$Int*** $tmp3616 = &param0->transitions;
frost$core$Int** $tmp3617 = *$tmp3616;
frost$core$Int64 $tmp3618 = (frost$core$Int64) {108u};
int64_t $tmp3619 = $tmp3618.value;
frost$core$Int* $tmp3620 = $tmp3617[$tmp3619];
frostFree($tmp3620);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:419
frost$core$Int*** $tmp3621 = &param0->transitions;
frost$core$Int** $tmp3622 = *$tmp3621;
frost$core$Int64 $tmp3623 = (frost$core$Int64) {110u};
int64_t $tmp3624 = $tmp3623.value;
frost$core$Int* $tmp3625 = $tmp3622[$tmp3624];
frostFree($tmp3625);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:420
frost$core$Int*** $tmp3626 = &param0->transitions;
frost$core$Int** $tmp3627 = *$tmp3626;
frost$core$Int64 $tmp3628 = (frost$core$Int64) {114u};
int64_t $tmp3629 = $tmp3628.value;
frost$core$Int* $tmp3630 = $tmp3627[$tmp3629];
frostFree($tmp3630);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:421
frost$core$Int*** $tmp3631 = &param0->transitions;
frost$core$Int** $tmp3632 = *$tmp3631;
frost$core$Int64 $tmp3633 = (frost$core$Int64) {115u};
int64_t $tmp3634 = $tmp3633.value;
frost$core$Int* $tmp3635 = $tmp3632[$tmp3634];
frostFree($tmp3635);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:422
frost$core$Int*** $tmp3636 = &param0->transitions;
frost$core$Int** $tmp3637 = *$tmp3636;
frost$core$Int64 $tmp3638 = (frost$core$Int64) {116u};
int64_t $tmp3639 = $tmp3638.value;
frost$core$Int* $tmp3640 = $tmp3637[$tmp3639];
frostFree($tmp3640);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:423
frost$core$Int*** $tmp3641 = &param0->transitions;
frost$core$Int** $tmp3642 = *$tmp3641;
frost$core$Int64 $tmp3643 = (frost$core$Int64) {117u};
int64_t $tmp3644 = $tmp3643.value;
frost$core$Int* $tmp3645 = $tmp3642[$tmp3644];
frostFree($tmp3645);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:424
frost$core$Int*** $tmp3646 = &param0->transitions;
frost$core$Int** $tmp3647 = *$tmp3646;
frost$core$Int64 $tmp3648 = (frost$core$Int64) {123u};
int64_t $tmp3649 = $tmp3648.value;
frost$core$Int* $tmp3650 = $tmp3647[$tmp3649];
frostFree($tmp3650);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:425
frost$core$Int*** $tmp3651 = &param0->transitions;
frost$core$Int** $tmp3652 = *$tmp3651;
frost$core$Int64 $tmp3653 = (frost$core$Int64) {125u};
int64_t $tmp3654 = $tmp3653.value;
frost$core$Int* $tmp3655 = $tmp3652[$tmp3654];
frostFree($tmp3655);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:426
frost$core$Int*** $tmp3656 = &param0->transitions;
frost$core$Int** $tmp3657 = *$tmp3656;
frostFree($tmp3657);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:427
frost$core$Int** $tmp3658 = &param0->accepts;
frost$core$Int* $tmp3659 = *$tmp3658;
frostFree($tmp3659);
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:400
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$plex$runtime$DFA** $tmp3660 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp3661 = *$tmp3660;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3661));
return;

}
org$frostlang$json$Token org$frostlang$json$Lexer$next$R$org$frostlang$json$Token(org$frostlang$json$Lexer* param0) {

org$frostlang$plex$runtime$RawToken local0;
org$frostlang$json$Token$Kind local1;
org$frostlang$json$Token$Kind local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:431
org$frostlang$plex$runtime$DFA** $tmp3662 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp3663 = *$tmp3662;
org$frostlang$plex$runtime$RawToken $tmp3664 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp3663);
*(&local0) = $tmp3664;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:432
org$frostlang$plex$runtime$RawToken $tmp3665 = *(&local0);
frost$core$Int $tmp3666 = $tmp3665.kind;
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int):org.frostlang.json.Token.Kind from Lexer.frost:432:70
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Token.frost:11
frost$core$Int* $tmp3667 = &(&local2)->$rawValue;
*$tmp3667 = $tmp3666;
org$frostlang$json$Token$Kind $tmp3668 = *(&local2);
*(&local1) = $tmp3668;
org$frostlang$json$Token$Kind $tmp3669 = *(&local1);
org$frostlang$plex$runtime$RawToken $tmp3670 = *(&local0);
frost$core$String$Index $tmp3671 = $tmp3670.start;
org$frostlang$plex$runtime$RawToken $tmp3672 = *(&local0);
frost$core$String$Index $tmp3673 = $tmp3672.end;
org$frostlang$plex$runtime$RawToken $tmp3674 = *(&local0);
frost$core$Int $tmp3675 = $tmp3674.line;
org$frostlang$plex$runtime$RawToken $tmp3676 = *(&local0);
frost$core$Int $tmp3677 = $tmp3676.column;
org$frostlang$json$Position $tmp3678 = org$frostlang$json$Position$init$frost$core$Int$frost$core$Int($tmp3675, $tmp3677);
org$frostlang$json$Token $tmp3679 = org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position($tmp3669, $tmp3671, $tmp3673, $tmp3678);
return $tmp3679;

}
void org$frostlang$json$Lexer$init(org$frostlang$json$Lexer* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:15
frost$core$Int** $tmp3680 = org$frostlang$json$Lexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT();
frost$core$Int*** $tmp3681 = &param0->transitions;
*$tmp3681 = $tmp3680;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/json/Lexer.frost:17
frost$core$Int* $tmp3682 = org$frostlang$json$Lexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int$GT();
frost$core$Int** $tmp3683 = &param0->accepts;
*$tmp3683 = $tmp3682;
return;

}

