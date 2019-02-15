#include "org/frostlang/json/Lexer.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/json/Token.h"
#include "org/frostlang/plex/runtime/RawToken.h"
#include "org/frostlang/json/Token/Kind.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/json/Position.h"


static frost$core$String $s1;
org$frostlang$json$Lexer$class_type org$frostlang$json$Lexer$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$json$Lexer$cleanup, org$frostlang$json$Lexer$start$frost$core$String, org$frostlang$json$Lexer$next$R$org$frostlang$json$Token} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x4c\x65\x78\x65\x72", 24, 5960953331362814559, NULL };

void org$frostlang$json$Lexer$start$frost$core$String(org$frostlang$json$Lexer* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:20
FROST_ASSERT(80 == sizeof(org$frostlang$plex$runtime$DFA));
org$frostlang$plex$runtime$DFA* $tmp2 = (org$frostlang$plex$runtime$DFA*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$plex$runtime$DFA$class);
frost$core$Int64 $tmp3 = (frost$core$Int64) {31u};
frost$core$Int64*** $tmp4 = &param0->transitions;
frost$core$Int64** $tmp5 = *$tmp4;
frost$core$Int64** $tmp6 = &param0->accepts;
frost$core$Int64* $tmp7 = *$tmp6;
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int64$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp2, param1, $tmp3, $tmp5, $tmp7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$plex$runtime$DFA** $tmp8 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$plex$runtime$DFA** $tmp10 = &param0->dfa;
*$tmp10 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return;

}
frost$core$Int64* org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT(frost$core$Int64 param0, frost$core$Int64 param1) {

frost$core$Int64* local0;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp11 = param0.value;
frost$core$Int64* $tmp12 = ((frost$core$Int64*) frostAlloc($tmp11 * 8));
*(&local0) = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp13 = (frost$core$Int64) {0u};
frost$core$Bit $tmp14 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp15 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp13, param0, $tmp14);
frost$core$Int64 $tmp16 = $tmp15.min;
*(&local1) = $tmp16;
frost$core$Int64 $tmp17 = $tmp15.max;
frost$core$Bit $tmp18 = $tmp15.inclusive;
bool $tmp19 = $tmp18.value;
frost$core$Int64 $tmp20 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp21 = $tmp20.value;
frost$core$UInt64 $tmp22 = (frost$core$UInt64) {((uint64_t) $tmp21)};
if ($tmp19) goto block5; else goto block6;
block5:;
int64_t $tmp23 = $tmp16.value;
int64_t $tmp24 = $tmp17.value;
bool $tmp25 = $tmp23 <= $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block2; else goto block3;
block6:;
int64_t $tmp28 = $tmp16.value;
int64_t $tmp29 = $tmp17.value;
bool $tmp30 = $tmp28 < $tmp29;
frost$core$Bit $tmp31 = (frost$core$Bit) {$tmp30};
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp33 = *(&local0);
frost$core$Int64 $tmp34 = *(&local1);
int64_t $tmp35 = $tmp34.value;
$tmp33[$tmp35] = param1;
frost$core$Int64 $tmp36 = *(&local1);
int64_t $tmp37 = $tmp17.value;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37 - $tmp38;
frost$core$Int64 $tmp40 = (frost$core$Int64) {$tmp39};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp41 = $tmp40.value;
frost$core$UInt64 $tmp42 = (frost$core$UInt64) {((uint64_t) $tmp41)};
if ($tmp19) goto block9; else goto block10;
block9:;
uint64_t $tmp43 = $tmp42.value;
uint64_t $tmp44 = $tmp22.value;
bool $tmp45 = $tmp43 >= $tmp44;
frost$core$Bit $tmp46 = (frost$core$Bit) {$tmp45};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block7; else goto block3;
block10:;
uint64_t $tmp48 = $tmp42.value;
uint64_t $tmp49 = $tmp22.value;
bool $tmp50 = $tmp48 > $tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50};
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block7; else goto block3;
block7:;
int64_t $tmp53 = $tmp36.value;
int64_t $tmp54 = $tmp20.value;
int64_t $tmp55 = $tmp53 + $tmp54;
frost$core$Int64 $tmp56 = (frost$core$Int64) {$tmp55};
*(&local1) = $tmp56;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp57 = *(&local0);
return $tmp57;

}
frost$core$Int64** org$frostlang$json$Lexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT() {

frost$core$Int64** local0;
frost$core$Int64* local1;
frost$core$Int64 local2;
frost$core$Int64* local3;
frost$core$Int64 local4;
frost$core$Int64* local5;
frost$core$Int64 local6;
frost$core$Int64* local7;
frost$core$Int64 local8;
frost$core$Int64* local9;
frost$core$Int64 local10;
frost$core$Int64* local11;
frost$core$Int64 local12;
frost$core$Int64* local13;
frost$core$Int64 local14;
frost$core$Int64* local15;
frost$core$Int64 local16;
frost$core$Int64* local17;
frost$core$Int64 local18;
frost$core$Int64* local19;
frost$core$Int64 local20;
frost$core$Int64* local21;
frost$core$Int64 local22;
frost$core$Int64* local23;
frost$core$Int64 local24;
frost$core$Int64* local25;
frost$core$Int64 local26;
frost$core$Int64* local27;
frost$core$Int64 local28;
frost$core$Int64* local29;
frost$core$Int64 local30;
frost$core$Int64* local31;
frost$core$Int64 local32;
frost$core$Int64* local33;
frost$core$Int64 local34;
frost$core$Int64* local35;
frost$core$Int64 local36;
frost$core$Int64* local37;
frost$core$Int64 local38;
frost$core$Int64* local39;
frost$core$Int64 local40;
frost$core$Int64* local41;
frost$core$Int64 local42;
frost$core$Int64* local43;
frost$core$Int64 local44;
frost$core$Int64* local45;
frost$core$Int64 local46;
frost$core$Int64* local47;
frost$core$Int64 local48;
frost$core$Int64* local49;
frost$core$Int64 local50;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:34
frost$core$Int64 $tmp58 = (frost$core$Int64) {256u};
int64_t $tmp59 = $tmp58.value;
frost$core$Int64** $tmp60 = ((frost$core$Int64**) frostAlloc($tmp59 * 8));
*(&local0) = $tmp60;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:35
frost$core$Int64** $tmp61 = *(&local0);
frost$core$Int64 $tmp62 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp63 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp64 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:35:27
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp65 = $tmp63.value;
frost$core$Int64* $tmp66 = ((frost$core$Int64*) frostAlloc($tmp65 * 8));
*(&local1) = $tmp66;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp67 = (frost$core$Int64) {0u};
frost$core$Bit $tmp68 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp69 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp67, $tmp63, $tmp68);
frost$core$Int64 $tmp70 = $tmp69.min;
*(&local2) = $tmp70;
frost$core$Int64 $tmp71 = $tmp69.max;
frost$core$Bit $tmp72 = $tmp69.inclusive;
bool $tmp73 = $tmp72.value;
frost$core$Int64 $tmp74 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp75 = $tmp74.value;
frost$core$UInt64 $tmp76 = (frost$core$UInt64) {((uint64_t) $tmp75)};
if ($tmp73) goto block6; else goto block7;
block6:;
int64_t $tmp77 = $tmp70.value;
int64_t $tmp78 = $tmp71.value;
bool $tmp79 = $tmp77 <= $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block3; else goto block4;
block7:;
int64_t $tmp82 = $tmp70.value;
int64_t $tmp83 = $tmp71.value;
bool $tmp84 = $tmp82 < $tmp83;
frost$core$Bit $tmp85 = (frost$core$Bit) {$tmp84};
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp87 = *(&local1);
frost$core$Int64 $tmp88 = *(&local2);
int64_t $tmp89 = $tmp88.value;
$tmp87[$tmp89] = $tmp64;
frost$core$Int64 $tmp90 = *(&local2);
int64_t $tmp91 = $tmp71.value;
int64_t $tmp92 = $tmp90.value;
int64_t $tmp93 = $tmp91 - $tmp92;
frost$core$Int64 $tmp94 = (frost$core$Int64) {$tmp93};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp95 = $tmp94.value;
frost$core$UInt64 $tmp96 = (frost$core$UInt64) {((uint64_t) $tmp95)};
if ($tmp73) goto block10; else goto block11;
block10:;
uint64_t $tmp97 = $tmp96.value;
uint64_t $tmp98 = $tmp76.value;
bool $tmp99 = $tmp97 >= $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block8; else goto block4;
block11:;
uint64_t $tmp102 = $tmp96.value;
uint64_t $tmp103 = $tmp76.value;
bool $tmp104 = $tmp102 > $tmp103;
frost$core$Bit $tmp105 = (frost$core$Bit) {$tmp104};
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block8; else goto block4;
block8:;
int64_t $tmp107 = $tmp90.value;
int64_t $tmp108 = $tmp74.value;
int64_t $tmp109 = $tmp107 + $tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {$tmp109};
*(&local2) = $tmp110;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp111 = *(&local1);
int64_t $tmp112 = $tmp62.value;
$tmp61[$tmp112] = $tmp111;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:36
frost$core$Int64** $tmp113 = *(&local0);
frost$core$Int64 $tmp114 = (frost$core$Int64) {0u};
int64_t $tmp115 = $tmp114.value;
frost$core$Int64* $tmp116 = $tmp113[$tmp115];
frost$core$Int64 $tmp117 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp118 = (frost$core$Int64) {3u};
int64_t $tmp119 = $tmp117.value;
$tmp116[$tmp119] = $tmp118;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:37
frost$core$Int64** $tmp120 = *(&local0);
frost$core$Int64 $tmp121 = (frost$core$Int64) {1u};
frost$core$Int64** $tmp122 = *(&local0);
frost$core$Int64 $tmp123 = (frost$core$Int64) {0u};
int64_t $tmp124 = $tmp123.value;
frost$core$Int64* $tmp125 = $tmp122[$tmp124];
int64_t $tmp126 = $tmp121.value;
$tmp120[$tmp126] = $tmp125;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:38
frost$core$Int64** $tmp127 = *(&local0);
frost$core$Int64 $tmp128 = (frost$core$Int64) {2u};
frost$core$Int64** $tmp129 = *(&local0);
frost$core$Int64 $tmp130 = (frost$core$Int64) {0u};
int64_t $tmp131 = $tmp130.value;
frost$core$Int64* $tmp132 = $tmp129[$tmp131];
int64_t $tmp133 = $tmp128.value;
$tmp127[$tmp133] = $tmp132;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:39
frost$core$Int64** $tmp134 = *(&local0);
frost$core$Int64 $tmp135 = (frost$core$Int64) {3u};
frost$core$Int64** $tmp136 = *(&local0);
frost$core$Int64 $tmp137 = (frost$core$Int64) {0u};
int64_t $tmp138 = $tmp137.value;
frost$core$Int64* $tmp139 = $tmp136[$tmp138];
int64_t $tmp140 = $tmp135.value;
$tmp134[$tmp140] = $tmp139;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:40
frost$core$Int64** $tmp141 = *(&local0);
frost$core$Int64 $tmp142 = (frost$core$Int64) {4u};
frost$core$Int64** $tmp143 = *(&local0);
frost$core$Int64 $tmp144 = (frost$core$Int64) {0u};
int64_t $tmp145 = $tmp144.value;
frost$core$Int64* $tmp146 = $tmp143[$tmp145];
int64_t $tmp147 = $tmp142.value;
$tmp141[$tmp147] = $tmp146;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:41
frost$core$Int64** $tmp148 = *(&local0);
frost$core$Int64 $tmp149 = (frost$core$Int64) {5u};
frost$core$Int64** $tmp150 = *(&local0);
frost$core$Int64 $tmp151 = (frost$core$Int64) {0u};
int64_t $tmp152 = $tmp151.value;
frost$core$Int64* $tmp153 = $tmp150[$tmp152];
int64_t $tmp154 = $tmp149.value;
$tmp148[$tmp154] = $tmp153;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:42
frost$core$Int64** $tmp155 = *(&local0);
frost$core$Int64 $tmp156 = (frost$core$Int64) {6u};
frost$core$Int64** $tmp157 = *(&local0);
frost$core$Int64 $tmp158 = (frost$core$Int64) {0u};
int64_t $tmp159 = $tmp158.value;
frost$core$Int64* $tmp160 = $tmp157[$tmp159];
int64_t $tmp161 = $tmp156.value;
$tmp155[$tmp161] = $tmp160;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:43
frost$core$Int64** $tmp162 = *(&local0);
frost$core$Int64 $tmp163 = (frost$core$Int64) {7u};
frost$core$Int64** $tmp164 = *(&local0);
frost$core$Int64 $tmp165 = (frost$core$Int64) {0u};
int64_t $tmp166 = $tmp165.value;
frost$core$Int64* $tmp167 = $tmp164[$tmp166];
int64_t $tmp168 = $tmp163.value;
$tmp162[$tmp168] = $tmp167;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:44
frost$core$Int64** $tmp169 = *(&local0);
frost$core$Int64 $tmp170 = (frost$core$Int64) {8u};
frost$core$Int64** $tmp171 = *(&local0);
frost$core$Int64 $tmp172 = (frost$core$Int64) {0u};
int64_t $tmp173 = $tmp172.value;
frost$core$Int64* $tmp174 = $tmp171[$tmp173];
int64_t $tmp175 = $tmp170.value;
$tmp169[$tmp175] = $tmp174;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:45
frost$core$Int64** $tmp176 = *(&local0);
frost$core$Int64 $tmp177 = (frost$core$Int64) {9u};
frost$core$Int64 $tmp178 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp179 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:45:27
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp180 = $tmp178.value;
frost$core$Int64* $tmp181 = ((frost$core$Int64*) frostAlloc($tmp180 * 8));
*(&local3) = $tmp181;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp182 = (frost$core$Int64) {0u};
frost$core$Bit $tmp183 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp184 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp182, $tmp178, $tmp183);
frost$core$Int64 $tmp185 = $tmp184.min;
*(&local4) = $tmp185;
frost$core$Int64 $tmp186 = $tmp184.max;
frost$core$Bit $tmp187 = $tmp184.inclusive;
bool $tmp188 = $tmp187.value;
frost$core$Int64 $tmp189 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp190 = $tmp189.value;
frost$core$UInt64 $tmp191 = (frost$core$UInt64) {((uint64_t) $tmp190)};
if ($tmp188) goto block17; else goto block18;
block17:;
int64_t $tmp192 = $tmp185.value;
int64_t $tmp193 = $tmp186.value;
bool $tmp194 = $tmp192 <= $tmp193;
frost$core$Bit $tmp195 = (frost$core$Bit) {$tmp194};
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block14; else goto block15;
block18:;
int64_t $tmp197 = $tmp185.value;
int64_t $tmp198 = $tmp186.value;
bool $tmp199 = $tmp197 < $tmp198;
frost$core$Bit $tmp200 = (frost$core$Bit) {$tmp199};
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp202 = *(&local3);
frost$core$Int64 $tmp203 = *(&local4);
int64_t $tmp204 = $tmp203.value;
$tmp202[$tmp204] = $tmp179;
frost$core$Int64 $tmp205 = *(&local4);
int64_t $tmp206 = $tmp186.value;
int64_t $tmp207 = $tmp205.value;
int64_t $tmp208 = $tmp206 - $tmp207;
frost$core$Int64 $tmp209 = (frost$core$Int64) {$tmp208};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp210 = $tmp209.value;
frost$core$UInt64 $tmp211 = (frost$core$UInt64) {((uint64_t) $tmp210)};
if ($tmp188) goto block21; else goto block22;
block21:;
uint64_t $tmp212 = $tmp211.value;
uint64_t $tmp213 = $tmp191.value;
bool $tmp214 = $tmp212 >= $tmp213;
frost$core$Bit $tmp215 = (frost$core$Bit) {$tmp214};
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block19; else goto block15;
block22:;
uint64_t $tmp217 = $tmp211.value;
uint64_t $tmp218 = $tmp191.value;
bool $tmp219 = $tmp217 > $tmp218;
frost$core$Bit $tmp220 = (frost$core$Bit) {$tmp219};
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block19; else goto block15;
block19:;
int64_t $tmp222 = $tmp205.value;
int64_t $tmp223 = $tmp189.value;
int64_t $tmp224 = $tmp222 + $tmp223;
frost$core$Int64 $tmp225 = (frost$core$Int64) {$tmp224};
*(&local4) = $tmp225;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp226 = *(&local3);
int64_t $tmp227 = $tmp177.value;
$tmp176[$tmp227] = $tmp226;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:46
frost$core$Int64** $tmp228 = *(&local0);
frost$core$Int64 $tmp229 = (frost$core$Int64) {9u};
int64_t $tmp230 = $tmp229.value;
frost$core$Int64* $tmp231 = $tmp228[$tmp230];
frost$core$Int64 $tmp232 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp233 = (frost$core$Int64) {2u};
int64_t $tmp234 = $tmp232.value;
$tmp231[$tmp234] = $tmp233;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:47
frost$core$Int64** $tmp235 = *(&local0);
frost$core$Int64 $tmp236 = (frost$core$Int64) {9u};
int64_t $tmp237 = $tmp236.value;
frost$core$Int64* $tmp238 = $tmp235[$tmp237];
frost$core$Int64 $tmp239 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp240 = (frost$core$Int64) {2u};
int64_t $tmp241 = $tmp239.value;
$tmp238[$tmp241] = $tmp240;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:48
frost$core$Int64** $tmp242 = *(&local0);
frost$core$Int64 $tmp243 = (frost$core$Int64) {9u};
int64_t $tmp244 = $tmp243.value;
frost$core$Int64* $tmp245 = $tmp242[$tmp244];
frost$core$Int64 $tmp246 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp247 = (frost$core$Int64) {3u};
int64_t $tmp248 = $tmp246.value;
$tmp245[$tmp248] = $tmp247;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:49
frost$core$Int64** $tmp249 = *(&local0);
frost$core$Int64 $tmp250 = (frost$core$Int64) {10u};
frost$core$Int64** $tmp251 = *(&local0);
frost$core$Int64 $tmp252 = (frost$core$Int64) {9u};
int64_t $tmp253 = $tmp252.value;
frost$core$Int64* $tmp254 = $tmp251[$tmp253];
int64_t $tmp255 = $tmp250.value;
$tmp249[$tmp255] = $tmp254;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:50
frost$core$Int64** $tmp256 = *(&local0);
frost$core$Int64 $tmp257 = (frost$core$Int64) {11u};
frost$core$Int64** $tmp258 = *(&local0);
frost$core$Int64 $tmp259 = (frost$core$Int64) {0u};
int64_t $tmp260 = $tmp259.value;
frost$core$Int64* $tmp261 = $tmp258[$tmp260];
int64_t $tmp262 = $tmp257.value;
$tmp256[$tmp262] = $tmp261;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:51
frost$core$Int64** $tmp263 = *(&local0);
frost$core$Int64 $tmp264 = (frost$core$Int64) {12u};
frost$core$Int64** $tmp265 = *(&local0);
frost$core$Int64 $tmp266 = (frost$core$Int64) {0u};
int64_t $tmp267 = $tmp266.value;
frost$core$Int64* $tmp268 = $tmp265[$tmp267];
int64_t $tmp269 = $tmp264.value;
$tmp263[$tmp269] = $tmp268;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:52
frost$core$Int64** $tmp270 = *(&local0);
frost$core$Int64 $tmp271 = (frost$core$Int64) {13u};
frost$core$Int64** $tmp272 = *(&local0);
frost$core$Int64 $tmp273 = (frost$core$Int64) {9u};
int64_t $tmp274 = $tmp273.value;
frost$core$Int64* $tmp275 = $tmp272[$tmp274];
int64_t $tmp276 = $tmp271.value;
$tmp270[$tmp276] = $tmp275;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:53
frost$core$Int64** $tmp277 = *(&local0);
frost$core$Int64 $tmp278 = (frost$core$Int64) {14u};
frost$core$Int64** $tmp279 = *(&local0);
frost$core$Int64 $tmp280 = (frost$core$Int64) {0u};
int64_t $tmp281 = $tmp280.value;
frost$core$Int64* $tmp282 = $tmp279[$tmp281];
int64_t $tmp283 = $tmp278.value;
$tmp277[$tmp283] = $tmp282;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:54
frost$core$Int64** $tmp284 = *(&local0);
frost$core$Int64 $tmp285 = (frost$core$Int64) {15u};
frost$core$Int64** $tmp286 = *(&local0);
frost$core$Int64 $tmp287 = (frost$core$Int64) {0u};
int64_t $tmp288 = $tmp287.value;
frost$core$Int64* $tmp289 = $tmp286[$tmp288];
int64_t $tmp290 = $tmp285.value;
$tmp284[$tmp290] = $tmp289;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:55
frost$core$Int64** $tmp291 = *(&local0);
frost$core$Int64 $tmp292 = (frost$core$Int64) {16u};
frost$core$Int64** $tmp293 = *(&local0);
frost$core$Int64 $tmp294 = (frost$core$Int64) {0u};
int64_t $tmp295 = $tmp294.value;
frost$core$Int64* $tmp296 = $tmp293[$tmp295];
int64_t $tmp297 = $tmp292.value;
$tmp291[$tmp297] = $tmp296;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:56
frost$core$Int64** $tmp298 = *(&local0);
frost$core$Int64 $tmp299 = (frost$core$Int64) {17u};
frost$core$Int64** $tmp300 = *(&local0);
frost$core$Int64 $tmp301 = (frost$core$Int64) {0u};
int64_t $tmp302 = $tmp301.value;
frost$core$Int64* $tmp303 = $tmp300[$tmp302];
int64_t $tmp304 = $tmp299.value;
$tmp298[$tmp304] = $tmp303;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:57
frost$core$Int64** $tmp305 = *(&local0);
frost$core$Int64 $tmp306 = (frost$core$Int64) {18u};
frost$core$Int64** $tmp307 = *(&local0);
frost$core$Int64 $tmp308 = (frost$core$Int64) {0u};
int64_t $tmp309 = $tmp308.value;
frost$core$Int64* $tmp310 = $tmp307[$tmp309];
int64_t $tmp311 = $tmp306.value;
$tmp305[$tmp311] = $tmp310;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:58
frost$core$Int64** $tmp312 = *(&local0);
frost$core$Int64 $tmp313 = (frost$core$Int64) {19u};
frost$core$Int64** $tmp314 = *(&local0);
frost$core$Int64 $tmp315 = (frost$core$Int64) {0u};
int64_t $tmp316 = $tmp315.value;
frost$core$Int64* $tmp317 = $tmp314[$tmp316];
int64_t $tmp318 = $tmp313.value;
$tmp312[$tmp318] = $tmp317;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:59
frost$core$Int64** $tmp319 = *(&local0);
frost$core$Int64 $tmp320 = (frost$core$Int64) {20u};
frost$core$Int64** $tmp321 = *(&local0);
frost$core$Int64 $tmp322 = (frost$core$Int64) {0u};
int64_t $tmp323 = $tmp322.value;
frost$core$Int64* $tmp324 = $tmp321[$tmp323];
int64_t $tmp325 = $tmp320.value;
$tmp319[$tmp325] = $tmp324;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:60
frost$core$Int64** $tmp326 = *(&local0);
frost$core$Int64 $tmp327 = (frost$core$Int64) {21u};
frost$core$Int64** $tmp328 = *(&local0);
frost$core$Int64 $tmp329 = (frost$core$Int64) {0u};
int64_t $tmp330 = $tmp329.value;
frost$core$Int64* $tmp331 = $tmp328[$tmp330];
int64_t $tmp332 = $tmp327.value;
$tmp326[$tmp332] = $tmp331;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:61
frost$core$Int64** $tmp333 = *(&local0);
frost$core$Int64 $tmp334 = (frost$core$Int64) {22u};
frost$core$Int64** $tmp335 = *(&local0);
frost$core$Int64 $tmp336 = (frost$core$Int64) {0u};
int64_t $tmp337 = $tmp336.value;
frost$core$Int64* $tmp338 = $tmp335[$tmp337];
int64_t $tmp339 = $tmp334.value;
$tmp333[$tmp339] = $tmp338;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:62
frost$core$Int64** $tmp340 = *(&local0);
frost$core$Int64 $tmp341 = (frost$core$Int64) {23u};
frost$core$Int64** $tmp342 = *(&local0);
frost$core$Int64 $tmp343 = (frost$core$Int64) {0u};
int64_t $tmp344 = $tmp343.value;
frost$core$Int64* $tmp345 = $tmp342[$tmp344];
int64_t $tmp346 = $tmp341.value;
$tmp340[$tmp346] = $tmp345;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:63
frost$core$Int64** $tmp347 = *(&local0);
frost$core$Int64 $tmp348 = (frost$core$Int64) {24u};
frost$core$Int64** $tmp349 = *(&local0);
frost$core$Int64 $tmp350 = (frost$core$Int64) {0u};
int64_t $tmp351 = $tmp350.value;
frost$core$Int64* $tmp352 = $tmp349[$tmp351];
int64_t $tmp353 = $tmp348.value;
$tmp347[$tmp353] = $tmp352;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:64
frost$core$Int64** $tmp354 = *(&local0);
frost$core$Int64 $tmp355 = (frost$core$Int64) {25u};
frost$core$Int64** $tmp356 = *(&local0);
frost$core$Int64 $tmp357 = (frost$core$Int64) {0u};
int64_t $tmp358 = $tmp357.value;
frost$core$Int64* $tmp359 = $tmp356[$tmp358];
int64_t $tmp360 = $tmp355.value;
$tmp354[$tmp360] = $tmp359;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:65
frost$core$Int64** $tmp361 = *(&local0);
frost$core$Int64 $tmp362 = (frost$core$Int64) {26u};
frost$core$Int64** $tmp363 = *(&local0);
frost$core$Int64 $tmp364 = (frost$core$Int64) {0u};
int64_t $tmp365 = $tmp364.value;
frost$core$Int64* $tmp366 = $tmp363[$tmp365];
int64_t $tmp367 = $tmp362.value;
$tmp361[$tmp367] = $tmp366;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:66
frost$core$Int64** $tmp368 = *(&local0);
frost$core$Int64 $tmp369 = (frost$core$Int64) {27u};
frost$core$Int64** $tmp370 = *(&local0);
frost$core$Int64 $tmp371 = (frost$core$Int64) {0u};
int64_t $tmp372 = $tmp371.value;
frost$core$Int64* $tmp373 = $tmp370[$tmp372];
int64_t $tmp374 = $tmp369.value;
$tmp368[$tmp374] = $tmp373;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:67
frost$core$Int64** $tmp375 = *(&local0);
frost$core$Int64 $tmp376 = (frost$core$Int64) {28u};
frost$core$Int64** $tmp377 = *(&local0);
frost$core$Int64 $tmp378 = (frost$core$Int64) {0u};
int64_t $tmp379 = $tmp378.value;
frost$core$Int64* $tmp380 = $tmp377[$tmp379];
int64_t $tmp381 = $tmp376.value;
$tmp375[$tmp381] = $tmp380;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:68
frost$core$Int64** $tmp382 = *(&local0);
frost$core$Int64 $tmp383 = (frost$core$Int64) {29u};
frost$core$Int64** $tmp384 = *(&local0);
frost$core$Int64 $tmp385 = (frost$core$Int64) {0u};
int64_t $tmp386 = $tmp385.value;
frost$core$Int64* $tmp387 = $tmp384[$tmp386];
int64_t $tmp388 = $tmp383.value;
$tmp382[$tmp388] = $tmp387;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:69
frost$core$Int64** $tmp389 = *(&local0);
frost$core$Int64 $tmp390 = (frost$core$Int64) {30u};
frost$core$Int64** $tmp391 = *(&local0);
frost$core$Int64 $tmp392 = (frost$core$Int64) {0u};
int64_t $tmp393 = $tmp392.value;
frost$core$Int64* $tmp394 = $tmp391[$tmp393];
int64_t $tmp395 = $tmp390.value;
$tmp389[$tmp395] = $tmp394;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:70
frost$core$Int64** $tmp396 = *(&local0);
frost$core$Int64 $tmp397 = (frost$core$Int64) {31u};
frost$core$Int64** $tmp398 = *(&local0);
frost$core$Int64 $tmp399 = (frost$core$Int64) {0u};
int64_t $tmp400 = $tmp399.value;
frost$core$Int64* $tmp401 = $tmp398[$tmp400];
int64_t $tmp402 = $tmp397.value;
$tmp396[$tmp402] = $tmp401;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:71
frost$core$Int64** $tmp403 = *(&local0);
frost$core$Int64 $tmp404 = (frost$core$Int64) {32u};
frost$core$Int64** $tmp405 = *(&local0);
frost$core$Int64 $tmp406 = (frost$core$Int64) {9u};
int64_t $tmp407 = $tmp406.value;
frost$core$Int64* $tmp408 = $tmp405[$tmp407];
int64_t $tmp409 = $tmp404.value;
$tmp403[$tmp409] = $tmp408;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:72
frost$core$Int64** $tmp410 = *(&local0);
frost$core$Int64 $tmp411 = (frost$core$Int64) {33u};
frost$core$Int64** $tmp412 = *(&local0);
frost$core$Int64 $tmp413 = (frost$core$Int64) {0u};
int64_t $tmp414 = $tmp413.value;
frost$core$Int64* $tmp415 = $tmp412[$tmp414];
int64_t $tmp416 = $tmp411.value;
$tmp410[$tmp416] = $tmp415;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:73
frost$core$Int64** $tmp417 = *(&local0);
frost$core$Int64 $tmp418 = (frost$core$Int64) {34u};
frost$core$Int64 $tmp419 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp420 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:73:28
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp421 = $tmp419.value;
frost$core$Int64* $tmp422 = ((frost$core$Int64*) frostAlloc($tmp421 * 8));
*(&local5) = $tmp422;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp423 = (frost$core$Int64) {0u};
frost$core$Bit $tmp424 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp425 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp423, $tmp419, $tmp424);
frost$core$Int64 $tmp426 = $tmp425.min;
*(&local6) = $tmp426;
frost$core$Int64 $tmp427 = $tmp425.max;
frost$core$Bit $tmp428 = $tmp425.inclusive;
bool $tmp429 = $tmp428.value;
frost$core$Int64 $tmp430 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp431 = $tmp430.value;
frost$core$UInt64 $tmp432 = (frost$core$UInt64) {((uint64_t) $tmp431)};
if ($tmp429) goto block28; else goto block29;
block28:;
int64_t $tmp433 = $tmp426.value;
int64_t $tmp434 = $tmp427.value;
bool $tmp435 = $tmp433 <= $tmp434;
frost$core$Bit $tmp436 = (frost$core$Bit) {$tmp435};
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block25; else goto block26;
block29:;
int64_t $tmp438 = $tmp426.value;
int64_t $tmp439 = $tmp427.value;
bool $tmp440 = $tmp438 < $tmp439;
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp443 = *(&local5);
frost$core$Int64 $tmp444 = *(&local6);
int64_t $tmp445 = $tmp444.value;
$tmp443[$tmp445] = $tmp420;
frost$core$Int64 $tmp446 = *(&local6);
int64_t $tmp447 = $tmp427.value;
int64_t $tmp448 = $tmp446.value;
int64_t $tmp449 = $tmp447 - $tmp448;
frost$core$Int64 $tmp450 = (frost$core$Int64) {$tmp449};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp451 = $tmp450.value;
frost$core$UInt64 $tmp452 = (frost$core$UInt64) {((uint64_t) $tmp451)};
if ($tmp429) goto block32; else goto block33;
block32:;
uint64_t $tmp453 = $tmp452.value;
uint64_t $tmp454 = $tmp432.value;
bool $tmp455 = $tmp453 >= $tmp454;
frost$core$Bit $tmp456 = (frost$core$Bit) {$tmp455};
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block30; else goto block26;
block33:;
uint64_t $tmp458 = $tmp452.value;
uint64_t $tmp459 = $tmp432.value;
bool $tmp460 = $tmp458 > $tmp459;
frost$core$Bit $tmp461 = (frost$core$Bit) {$tmp460};
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block30; else goto block26;
block30:;
int64_t $tmp463 = $tmp446.value;
int64_t $tmp464 = $tmp430.value;
int64_t $tmp465 = $tmp463 + $tmp464;
frost$core$Int64 $tmp466 = (frost$core$Int64) {$tmp465};
*(&local6) = $tmp466;
goto block25;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp467 = *(&local5);
int64_t $tmp468 = $tmp418.value;
$tmp417[$tmp468] = $tmp467;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:74
frost$core$Int64** $tmp469 = *(&local0);
frost$core$Int64 $tmp470 = (frost$core$Int64) {34u};
int64_t $tmp471 = $tmp470.value;
frost$core$Int64* $tmp472 = $tmp469[$tmp471];
frost$core$Int64 $tmp473 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp474 = (frost$core$Int64) {3u};
int64_t $tmp475 = $tmp473.value;
$tmp472[$tmp475] = $tmp474;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:75
frost$core$Int64** $tmp476 = *(&local0);
frost$core$Int64 $tmp477 = (frost$core$Int64) {34u};
int64_t $tmp478 = $tmp477.value;
frost$core$Int64* $tmp479 = $tmp476[$tmp478];
frost$core$Int64 $tmp480 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp481 = (frost$core$Int64) {4u};
int64_t $tmp482 = $tmp480.value;
$tmp479[$tmp482] = $tmp481;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:76
frost$core$Int64** $tmp483 = *(&local0);
frost$core$Int64 $tmp484 = (frost$core$Int64) {34u};
int64_t $tmp485 = $tmp484.value;
frost$core$Int64* $tmp486 = $tmp483[$tmp485];
frost$core$Int64 $tmp487 = (frost$core$Int64) {5u};
frost$core$Int64 $tmp488 = (frost$core$Int64) {3u};
int64_t $tmp489 = $tmp487.value;
$tmp486[$tmp489] = $tmp488;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:77
frost$core$Int64** $tmp490 = *(&local0);
frost$core$Int64 $tmp491 = (frost$core$Int64) {35u};
frost$core$Int64** $tmp492 = *(&local0);
frost$core$Int64 $tmp493 = (frost$core$Int64) {0u};
int64_t $tmp494 = $tmp493.value;
frost$core$Int64* $tmp495 = $tmp492[$tmp494];
int64_t $tmp496 = $tmp491.value;
$tmp490[$tmp496] = $tmp495;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:78
frost$core$Int64** $tmp497 = *(&local0);
frost$core$Int64 $tmp498 = (frost$core$Int64) {36u};
frost$core$Int64** $tmp499 = *(&local0);
frost$core$Int64 $tmp500 = (frost$core$Int64) {0u};
int64_t $tmp501 = $tmp500.value;
frost$core$Int64* $tmp502 = $tmp499[$tmp501];
int64_t $tmp503 = $tmp498.value;
$tmp497[$tmp503] = $tmp502;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:79
frost$core$Int64** $tmp504 = *(&local0);
frost$core$Int64 $tmp505 = (frost$core$Int64) {37u};
frost$core$Int64** $tmp506 = *(&local0);
frost$core$Int64 $tmp507 = (frost$core$Int64) {0u};
int64_t $tmp508 = $tmp507.value;
frost$core$Int64* $tmp509 = $tmp506[$tmp508];
int64_t $tmp510 = $tmp505.value;
$tmp504[$tmp510] = $tmp509;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:80
frost$core$Int64** $tmp511 = *(&local0);
frost$core$Int64 $tmp512 = (frost$core$Int64) {38u};
frost$core$Int64** $tmp513 = *(&local0);
frost$core$Int64 $tmp514 = (frost$core$Int64) {0u};
int64_t $tmp515 = $tmp514.value;
frost$core$Int64* $tmp516 = $tmp513[$tmp515];
int64_t $tmp517 = $tmp512.value;
$tmp511[$tmp517] = $tmp516;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:81
frost$core$Int64** $tmp518 = *(&local0);
frost$core$Int64 $tmp519 = (frost$core$Int64) {39u};
frost$core$Int64** $tmp520 = *(&local0);
frost$core$Int64 $tmp521 = (frost$core$Int64) {0u};
int64_t $tmp522 = $tmp521.value;
frost$core$Int64* $tmp523 = $tmp520[$tmp522];
int64_t $tmp524 = $tmp519.value;
$tmp518[$tmp524] = $tmp523;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:82
frost$core$Int64** $tmp525 = *(&local0);
frost$core$Int64 $tmp526 = (frost$core$Int64) {40u};
frost$core$Int64** $tmp527 = *(&local0);
frost$core$Int64 $tmp528 = (frost$core$Int64) {0u};
int64_t $tmp529 = $tmp528.value;
frost$core$Int64* $tmp530 = $tmp527[$tmp529];
int64_t $tmp531 = $tmp526.value;
$tmp525[$tmp531] = $tmp530;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:83
frost$core$Int64** $tmp532 = *(&local0);
frost$core$Int64 $tmp533 = (frost$core$Int64) {41u};
frost$core$Int64** $tmp534 = *(&local0);
frost$core$Int64 $tmp535 = (frost$core$Int64) {0u};
int64_t $tmp536 = $tmp535.value;
frost$core$Int64* $tmp537 = $tmp534[$tmp536];
int64_t $tmp538 = $tmp533.value;
$tmp532[$tmp538] = $tmp537;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:84
frost$core$Int64** $tmp539 = *(&local0);
frost$core$Int64 $tmp540 = (frost$core$Int64) {42u};
frost$core$Int64** $tmp541 = *(&local0);
frost$core$Int64 $tmp542 = (frost$core$Int64) {0u};
int64_t $tmp543 = $tmp542.value;
frost$core$Int64* $tmp544 = $tmp541[$tmp543];
int64_t $tmp545 = $tmp540.value;
$tmp539[$tmp545] = $tmp544;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:85
frost$core$Int64** $tmp546 = *(&local0);
frost$core$Int64 $tmp547 = (frost$core$Int64) {43u};
frost$core$Int64 $tmp548 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp549 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:85:28
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp550 = $tmp548.value;
frost$core$Int64* $tmp551 = ((frost$core$Int64*) frostAlloc($tmp550 * 8));
*(&local7) = $tmp551;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp552 = (frost$core$Int64) {0u};
frost$core$Bit $tmp553 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp554 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp552, $tmp548, $tmp553);
frost$core$Int64 $tmp555 = $tmp554.min;
*(&local8) = $tmp555;
frost$core$Int64 $tmp556 = $tmp554.max;
frost$core$Bit $tmp557 = $tmp554.inclusive;
bool $tmp558 = $tmp557.value;
frost$core$Int64 $tmp559 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp560 = $tmp559.value;
frost$core$UInt64 $tmp561 = (frost$core$UInt64) {((uint64_t) $tmp560)};
if ($tmp558) goto block39; else goto block40;
block39:;
int64_t $tmp562 = $tmp555.value;
int64_t $tmp563 = $tmp556.value;
bool $tmp564 = $tmp562 <= $tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block36; else goto block37;
block40:;
int64_t $tmp567 = $tmp555.value;
int64_t $tmp568 = $tmp556.value;
bool $tmp569 = $tmp567 < $tmp568;
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp572 = *(&local7);
frost$core$Int64 $tmp573 = *(&local8);
int64_t $tmp574 = $tmp573.value;
$tmp572[$tmp574] = $tmp549;
frost$core$Int64 $tmp575 = *(&local8);
int64_t $tmp576 = $tmp556.value;
int64_t $tmp577 = $tmp575.value;
int64_t $tmp578 = $tmp576 - $tmp577;
frost$core$Int64 $tmp579 = (frost$core$Int64) {$tmp578};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp580 = $tmp579.value;
frost$core$UInt64 $tmp581 = (frost$core$UInt64) {((uint64_t) $tmp580)};
if ($tmp558) goto block43; else goto block44;
block43:;
uint64_t $tmp582 = $tmp581.value;
uint64_t $tmp583 = $tmp561.value;
bool $tmp584 = $tmp582 >= $tmp583;
frost$core$Bit $tmp585 = (frost$core$Bit) {$tmp584};
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block41; else goto block37;
block44:;
uint64_t $tmp587 = $tmp581.value;
uint64_t $tmp588 = $tmp561.value;
bool $tmp589 = $tmp587 > $tmp588;
frost$core$Bit $tmp590 = (frost$core$Bit) {$tmp589};
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block41; else goto block37;
block41:;
int64_t $tmp592 = $tmp575.value;
int64_t $tmp593 = $tmp559.value;
int64_t $tmp594 = $tmp592 + $tmp593;
frost$core$Int64 $tmp595 = (frost$core$Int64) {$tmp594};
*(&local8) = $tmp595;
goto block36;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp596 = *(&local7);
int64_t $tmp597 = $tmp547.value;
$tmp546[$tmp597] = $tmp596;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:86
frost$core$Int64** $tmp598 = *(&local0);
frost$core$Int64 $tmp599 = (frost$core$Int64) {43u};
int64_t $tmp600 = $tmp599.value;
frost$core$Int64* $tmp601 = $tmp598[$tmp600];
frost$core$Int64 $tmp602 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp603 = (frost$core$Int64) {3u};
int64_t $tmp604 = $tmp602.value;
$tmp601[$tmp604] = $tmp603;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:87
frost$core$Int64** $tmp605 = *(&local0);
frost$core$Int64 $tmp606 = (frost$core$Int64) {43u};
int64_t $tmp607 = $tmp606.value;
frost$core$Int64* $tmp608 = $tmp605[$tmp607];
frost$core$Int64 $tmp609 = (frost$core$Int64) {10u};
frost$core$Int64 $tmp610 = (frost$core$Int64) {11u};
int64_t $tmp611 = $tmp609.value;
$tmp608[$tmp611] = $tmp610;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:88
frost$core$Int64** $tmp612 = *(&local0);
frost$core$Int64 $tmp613 = (frost$core$Int64) {44u};
frost$core$Int64 $tmp614 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp615 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:88:28
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp616 = $tmp614.value;
frost$core$Int64* $tmp617 = ((frost$core$Int64*) frostAlloc($tmp616 * 8));
*(&local9) = $tmp617;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp618 = (frost$core$Int64) {0u};
frost$core$Bit $tmp619 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp620 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp618, $tmp614, $tmp619);
frost$core$Int64 $tmp621 = $tmp620.min;
*(&local10) = $tmp621;
frost$core$Int64 $tmp622 = $tmp620.max;
frost$core$Bit $tmp623 = $tmp620.inclusive;
bool $tmp624 = $tmp623.value;
frost$core$Int64 $tmp625 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp626 = $tmp625.value;
frost$core$UInt64 $tmp627 = (frost$core$UInt64) {((uint64_t) $tmp626)};
if ($tmp624) goto block50; else goto block51;
block50:;
int64_t $tmp628 = $tmp621.value;
int64_t $tmp629 = $tmp622.value;
bool $tmp630 = $tmp628 <= $tmp629;
frost$core$Bit $tmp631 = (frost$core$Bit) {$tmp630};
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block47; else goto block48;
block51:;
int64_t $tmp633 = $tmp621.value;
int64_t $tmp634 = $tmp622.value;
bool $tmp635 = $tmp633 < $tmp634;
frost$core$Bit $tmp636 = (frost$core$Bit) {$tmp635};
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp638 = *(&local9);
frost$core$Int64 $tmp639 = *(&local10);
int64_t $tmp640 = $tmp639.value;
$tmp638[$tmp640] = $tmp615;
frost$core$Int64 $tmp641 = *(&local10);
int64_t $tmp642 = $tmp622.value;
int64_t $tmp643 = $tmp641.value;
int64_t $tmp644 = $tmp642 - $tmp643;
frost$core$Int64 $tmp645 = (frost$core$Int64) {$tmp644};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp646 = $tmp645.value;
frost$core$UInt64 $tmp647 = (frost$core$UInt64) {((uint64_t) $tmp646)};
if ($tmp624) goto block54; else goto block55;
block54:;
uint64_t $tmp648 = $tmp647.value;
uint64_t $tmp649 = $tmp627.value;
bool $tmp650 = $tmp648 >= $tmp649;
frost$core$Bit $tmp651 = (frost$core$Bit) {$tmp650};
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block52; else goto block48;
block55:;
uint64_t $tmp653 = $tmp647.value;
uint64_t $tmp654 = $tmp627.value;
bool $tmp655 = $tmp653 > $tmp654;
frost$core$Bit $tmp656 = (frost$core$Bit) {$tmp655};
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block52; else goto block48;
block52:;
int64_t $tmp658 = $tmp641.value;
int64_t $tmp659 = $tmp625.value;
int64_t $tmp660 = $tmp658 + $tmp659;
frost$core$Int64 $tmp661 = (frost$core$Int64) {$tmp660};
*(&local10) = $tmp661;
goto block47;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp662 = *(&local9);
int64_t $tmp663 = $tmp613.value;
$tmp612[$tmp663] = $tmp662;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:89
frost$core$Int64** $tmp664 = *(&local0);
frost$core$Int64 $tmp665 = (frost$core$Int64) {44u};
int64_t $tmp666 = $tmp665.value;
frost$core$Int64* $tmp667 = $tmp664[$tmp666];
frost$core$Int64 $tmp668 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp669 = (frost$core$Int64) {6u};
int64_t $tmp670 = $tmp668.value;
$tmp667[$tmp670] = $tmp669;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:90
frost$core$Int64** $tmp671 = *(&local0);
frost$core$Int64 $tmp672 = (frost$core$Int64) {44u};
int64_t $tmp673 = $tmp672.value;
frost$core$Int64* $tmp674 = $tmp671[$tmp673];
frost$core$Int64 $tmp675 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp676 = (frost$core$Int64) {3u};
int64_t $tmp677 = $tmp675.value;
$tmp674[$tmp677] = $tmp676;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:91
frost$core$Int64** $tmp678 = *(&local0);
frost$core$Int64 $tmp679 = (frost$core$Int64) {45u};
frost$core$Int64 $tmp680 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp681 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:91:28
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp682 = $tmp680.value;
frost$core$Int64* $tmp683 = ((frost$core$Int64*) frostAlloc($tmp682 * 8));
*(&local11) = $tmp683;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp684 = (frost$core$Int64) {0u};
frost$core$Bit $tmp685 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp686 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp684, $tmp680, $tmp685);
frost$core$Int64 $tmp687 = $tmp686.min;
*(&local12) = $tmp687;
frost$core$Int64 $tmp688 = $tmp686.max;
frost$core$Bit $tmp689 = $tmp686.inclusive;
bool $tmp690 = $tmp689.value;
frost$core$Int64 $tmp691 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp692 = $tmp691.value;
frost$core$UInt64 $tmp693 = (frost$core$UInt64) {((uint64_t) $tmp692)};
if ($tmp690) goto block61; else goto block62;
block61:;
int64_t $tmp694 = $tmp687.value;
int64_t $tmp695 = $tmp688.value;
bool $tmp696 = $tmp694 <= $tmp695;
frost$core$Bit $tmp697 = (frost$core$Bit) {$tmp696};
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block58; else goto block59;
block62:;
int64_t $tmp699 = $tmp687.value;
int64_t $tmp700 = $tmp688.value;
bool $tmp701 = $tmp699 < $tmp700;
frost$core$Bit $tmp702 = (frost$core$Bit) {$tmp701};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp704 = *(&local11);
frost$core$Int64 $tmp705 = *(&local12);
int64_t $tmp706 = $tmp705.value;
$tmp704[$tmp706] = $tmp681;
frost$core$Int64 $tmp707 = *(&local12);
int64_t $tmp708 = $tmp688.value;
int64_t $tmp709 = $tmp707.value;
int64_t $tmp710 = $tmp708 - $tmp709;
frost$core$Int64 $tmp711 = (frost$core$Int64) {$tmp710};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp712 = $tmp711.value;
frost$core$UInt64 $tmp713 = (frost$core$UInt64) {((uint64_t) $tmp712)};
if ($tmp690) goto block65; else goto block66;
block65:;
uint64_t $tmp714 = $tmp713.value;
uint64_t $tmp715 = $tmp693.value;
bool $tmp716 = $tmp714 >= $tmp715;
frost$core$Bit $tmp717 = (frost$core$Bit) {$tmp716};
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block63; else goto block59;
block66:;
uint64_t $tmp719 = $tmp713.value;
uint64_t $tmp720 = $tmp693.value;
bool $tmp721 = $tmp719 > $tmp720;
frost$core$Bit $tmp722 = (frost$core$Bit) {$tmp721};
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block63; else goto block59;
block63:;
int64_t $tmp724 = $tmp707.value;
int64_t $tmp725 = $tmp691.value;
int64_t $tmp726 = $tmp724 + $tmp725;
frost$core$Int64 $tmp727 = (frost$core$Int64) {$tmp726};
*(&local12) = $tmp727;
goto block58;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp728 = *(&local11);
int64_t $tmp729 = $tmp679.value;
$tmp678[$tmp729] = $tmp728;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:92
frost$core$Int64** $tmp730 = *(&local0);
frost$core$Int64 $tmp731 = (frost$core$Int64) {45u};
int64_t $tmp732 = $tmp731.value;
frost$core$Int64* $tmp733 = $tmp730[$tmp732];
frost$core$Int64 $tmp734 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp735 = (frost$core$Int64) {7u};
int64_t $tmp736 = $tmp734.value;
$tmp733[$tmp736] = $tmp735;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:93
frost$core$Int64** $tmp737 = *(&local0);
frost$core$Int64 $tmp738 = (frost$core$Int64) {45u};
int64_t $tmp739 = $tmp738.value;
frost$core$Int64* $tmp740 = $tmp737[$tmp739];
frost$core$Int64 $tmp741 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp742 = (frost$core$Int64) {3u};
int64_t $tmp743 = $tmp741.value;
$tmp740[$tmp743] = $tmp742;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:94
frost$core$Int64** $tmp744 = *(&local0);
frost$core$Int64 $tmp745 = (frost$core$Int64) {45u};
int64_t $tmp746 = $tmp745.value;
frost$core$Int64* $tmp747 = $tmp744[$tmp746];
frost$core$Int64 $tmp748 = (frost$core$Int64) {10u};
frost$core$Int64 $tmp749 = (frost$core$Int64) {11u};
int64_t $tmp750 = $tmp748.value;
$tmp747[$tmp750] = $tmp749;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:95
frost$core$Int64** $tmp751 = *(&local0);
frost$core$Int64 $tmp752 = (frost$core$Int64) {46u};
frost$core$Int64 $tmp753 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp754 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:95:28
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp755 = $tmp753.value;
frost$core$Int64* $tmp756 = ((frost$core$Int64*) frostAlloc($tmp755 * 8));
*(&local13) = $tmp756;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp757 = (frost$core$Int64) {0u};
frost$core$Bit $tmp758 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp759 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp757, $tmp753, $tmp758);
frost$core$Int64 $tmp760 = $tmp759.min;
*(&local14) = $tmp760;
frost$core$Int64 $tmp761 = $tmp759.max;
frost$core$Bit $tmp762 = $tmp759.inclusive;
bool $tmp763 = $tmp762.value;
frost$core$Int64 $tmp764 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp765 = $tmp764.value;
frost$core$UInt64 $tmp766 = (frost$core$UInt64) {((uint64_t) $tmp765)};
if ($tmp763) goto block72; else goto block73;
block72:;
int64_t $tmp767 = $tmp760.value;
int64_t $tmp768 = $tmp761.value;
bool $tmp769 = $tmp767 <= $tmp768;
frost$core$Bit $tmp770 = (frost$core$Bit) {$tmp769};
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block69; else goto block70;
block73:;
int64_t $tmp772 = $tmp760.value;
int64_t $tmp773 = $tmp761.value;
bool $tmp774 = $tmp772 < $tmp773;
frost$core$Bit $tmp775 = (frost$core$Bit) {$tmp774};
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp777 = *(&local13);
frost$core$Int64 $tmp778 = *(&local14);
int64_t $tmp779 = $tmp778.value;
$tmp777[$tmp779] = $tmp754;
frost$core$Int64 $tmp780 = *(&local14);
int64_t $tmp781 = $tmp761.value;
int64_t $tmp782 = $tmp780.value;
int64_t $tmp783 = $tmp781 - $tmp782;
frost$core$Int64 $tmp784 = (frost$core$Int64) {$tmp783};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp785 = $tmp784.value;
frost$core$UInt64 $tmp786 = (frost$core$UInt64) {((uint64_t) $tmp785)};
if ($tmp763) goto block76; else goto block77;
block76:;
uint64_t $tmp787 = $tmp786.value;
uint64_t $tmp788 = $tmp766.value;
bool $tmp789 = $tmp787 >= $tmp788;
frost$core$Bit $tmp790 = (frost$core$Bit) {$tmp789};
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block74; else goto block70;
block77:;
uint64_t $tmp792 = $tmp786.value;
uint64_t $tmp793 = $tmp766.value;
bool $tmp794 = $tmp792 > $tmp793;
frost$core$Bit $tmp795 = (frost$core$Bit) {$tmp794};
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block74; else goto block70;
block74:;
int64_t $tmp797 = $tmp780.value;
int64_t $tmp798 = $tmp764.value;
int64_t $tmp799 = $tmp797 + $tmp798;
frost$core$Int64 $tmp800 = (frost$core$Int64) {$tmp799};
*(&local14) = $tmp800;
goto block69;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp801 = *(&local13);
int64_t $tmp802 = $tmp752.value;
$tmp751[$tmp802] = $tmp801;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:96
frost$core$Int64** $tmp803 = *(&local0);
frost$core$Int64 $tmp804 = (frost$core$Int64) {46u};
int64_t $tmp805 = $tmp804.value;
frost$core$Int64* $tmp806 = $tmp803[$tmp805];
frost$core$Int64 $tmp807 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp808 = (frost$core$Int64) {9u};
int64_t $tmp809 = $tmp807.value;
$tmp806[$tmp809] = $tmp808;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:97
frost$core$Int64** $tmp810 = *(&local0);
frost$core$Int64 $tmp811 = (frost$core$Int64) {46u};
int64_t $tmp812 = $tmp811.value;
frost$core$Int64* $tmp813 = $tmp810[$tmp812];
frost$core$Int64 $tmp814 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp815 = (frost$core$Int64) {3u};
int64_t $tmp816 = $tmp814.value;
$tmp813[$tmp816] = $tmp815;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:98
frost$core$Int64** $tmp817 = *(&local0);
frost$core$Int64 $tmp818 = (frost$core$Int64) {46u};
int64_t $tmp819 = $tmp818.value;
frost$core$Int64* $tmp820 = $tmp817[$tmp819];
frost$core$Int64 $tmp821 = (frost$core$Int64) {8u};
frost$core$Int64 $tmp822 = (frost$core$Int64) {9u};
int64_t $tmp823 = $tmp821.value;
$tmp820[$tmp823] = $tmp822;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:99
frost$core$Int64** $tmp824 = *(&local0);
frost$core$Int64 $tmp825 = (frost$core$Int64) {47u};
frost$core$Int64** $tmp826 = *(&local0);
frost$core$Int64 $tmp827 = (frost$core$Int64) {0u};
int64_t $tmp828 = $tmp827.value;
frost$core$Int64* $tmp829 = $tmp826[$tmp828];
int64_t $tmp830 = $tmp825.value;
$tmp824[$tmp830] = $tmp829;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:100
frost$core$Int64** $tmp831 = *(&local0);
frost$core$Int64 $tmp832 = (frost$core$Int64) {48u};
frost$core$Int64 $tmp833 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp834 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:100:28
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp835 = $tmp833.value;
frost$core$Int64* $tmp836 = ((frost$core$Int64*) frostAlloc($tmp835 * 8));
*(&local15) = $tmp836;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp837 = (frost$core$Int64) {0u};
frost$core$Bit $tmp838 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp839 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp837, $tmp833, $tmp838);
frost$core$Int64 $tmp840 = $tmp839.min;
*(&local16) = $tmp840;
frost$core$Int64 $tmp841 = $tmp839.max;
frost$core$Bit $tmp842 = $tmp839.inclusive;
bool $tmp843 = $tmp842.value;
frost$core$Int64 $tmp844 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp845 = $tmp844.value;
frost$core$UInt64 $tmp846 = (frost$core$UInt64) {((uint64_t) $tmp845)};
if ($tmp843) goto block83; else goto block84;
block83:;
int64_t $tmp847 = $tmp840.value;
int64_t $tmp848 = $tmp841.value;
bool $tmp849 = $tmp847 <= $tmp848;
frost$core$Bit $tmp850 = (frost$core$Bit) {$tmp849};
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block80; else goto block81;
block84:;
int64_t $tmp852 = $tmp840.value;
int64_t $tmp853 = $tmp841.value;
bool $tmp854 = $tmp852 < $tmp853;
frost$core$Bit $tmp855 = (frost$core$Bit) {$tmp854};
bool $tmp856 = $tmp855.value;
if ($tmp856) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp857 = *(&local15);
frost$core$Int64 $tmp858 = *(&local16);
int64_t $tmp859 = $tmp858.value;
$tmp857[$tmp859] = $tmp834;
frost$core$Int64 $tmp860 = *(&local16);
int64_t $tmp861 = $tmp841.value;
int64_t $tmp862 = $tmp860.value;
int64_t $tmp863 = $tmp861 - $tmp862;
frost$core$Int64 $tmp864 = (frost$core$Int64) {$tmp863};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp865 = $tmp864.value;
frost$core$UInt64 $tmp866 = (frost$core$UInt64) {((uint64_t) $tmp865)};
if ($tmp843) goto block87; else goto block88;
block87:;
uint64_t $tmp867 = $tmp866.value;
uint64_t $tmp868 = $tmp846.value;
bool $tmp869 = $tmp867 >= $tmp868;
frost$core$Bit $tmp870 = (frost$core$Bit) {$tmp869};
bool $tmp871 = $tmp870.value;
if ($tmp871) goto block85; else goto block81;
block88:;
uint64_t $tmp872 = $tmp866.value;
uint64_t $tmp873 = $tmp846.value;
bool $tmp874 = $tmp872 > $tmp873;
frost$core$Bit $tmp875 = (frost$core$Bit) {$tmp874};
bool $tmp876 = $tmp875.value;
if ($tmp876) goto block85; else goto block81;
block85:;
int64_t $tmp877 = $tmp860.value;
int64_t $tmp878 = $tmp844.value;
int64_t $tmp879 = $tmp877 + $tmp878;
frost$core$Int64 $tmp880 = (frost$core$Int64) {$tmp879};
*(&local16) = $tmp880;
goto block80;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp881 = *(&local15);
int64_t $tmp882 = $tmp832.value;
$tmp831[$tmp882] = $tmp881;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:101
frost$core$Int64** $tmp883 = *(&local0);
frost$core$Int64 $tmp884 = (frost$core$Int64) {48u};
int64_t $tmp885 = $tmp884.value;
frost$core$Int64* $tmp886 = $tmp883[$tmp885];
frost$core$Int64 $tmp887 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp888 = (frost$core$Int64) {8u};
int64_t $tmp889 = $tmp887.value;
$tmp886[$tmp889] = $tmp888;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:102
frost$core$Int64** $tmp890 = *(&local0);
frost$core$Int64 $tmp891 = (frost$core$Int64) {48u};
int64_t $tmp892 = $tmp891.value;
frost$core$Int64* $tmp893 = $tmp890[$tmp892];
frost$core$Int64 $tmp894 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp895 = (frost$core$Int64) {3u};
int64_t $tmp896 = $tmp894.value;
$tmp893[$tmp896] = $tmp895;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:103
frost$core$Int64** $tmp897 = *(&local0);
frost$core$Int64 $tmp898 = (frost$core$Int64) {48u};
int64_t $tmp899 = $tmp898.value;
frost$core$Int64* $tmp900 = $tmp897[$tmp899];
frost$core$Int64 $tmp901 = (frost$core$Int64) {7u};
frost$core$Int64 $tmp902 = (frost$core$Int64) {8u};
int64_t $tmp903 = $tmp901.value;
$tmp900[$tmp903] = $tmp902;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:104
frost$core$Int64** $tmp904 = *(&local0);
frost$core$Int64 $tmp905 = (frost$core$Int64) {48u};
int64_t $tmp906 = $tmp905.value;
frost$core$Int64* $tmp907 = $tmp904[$tmp906];
frost$core$Int64 $tmp908 = (frost$core$Int64) {8u};
frost$core$Int64 $tmp909 = (frost$core$Int64) {8u};
int64_t $tmp910 = $tmp908.value;
$tmp907[$tmp910] = $tmp909;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:105
frost$core$Int64** $tmp911 = *(&local0);
frost$core$Int64 $tmp912 = (frost$core$Int64) {48u};
int64_t $tmp913 = $tmp912.value;
frost$core$Int64* $tmp914 = $tmp911[$tmp913];
frost$core$Int64 $tmp915 = (frost$core$Int64) {9u};
frost$core$Int64 $tmp916 = (frost$core$Int64) {9u};
int64_t $tmp917 = $tmp915.value;
$tmp914[$tmp917] = $tmp916;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:106
frost$core$Int64** $tmp918 = *(&local0);
frost$core$Int64 $tmp919 = (frost$core$Int64) {48u};
int64_t $tmp920 = $tmp919.value;
frost$core$Int64* $tmp921 = $tmp918[$tmp920];
frost$core$Int64 $tmp922 = (frost$core$Int64) {10u};
frost$core$Int64 $tmp923 = (frost$core$Int64) {12u};
int64_t $tmp924 = $tmp922.value;
$tmp921[$tmp924] = $tmp923;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:107
frost$core$Int64** $tmp925 = *(&local0);
frost$core$Int64 $tmp926 = (frost$core$Int64) {48u};
int64_t $tmp927 = $tmp926.value;
frost$core$Int64* $tmp928 = $tmp925[$tmp927];
frost$core$Int64 $tmp929 = (frost$core$Int64) {11u};
frost$core$Int64 $tmp930 = (frost$core$Int64) {12u};
int64_t $tmp931 = $tmp929.value;
$tmp928[$tmp931] = $tmp930;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:108
frost$core$Int64** $tmp932 = *(&local0);
frost$core$Int64 $tmp933 = (frost$core$Int64) {48u};
int64_t $tmp934 = $tmp933.value;
frost$core$Int64* $tmp935 = $tmp932[$tmp934];
frost$core$Int64 $tmp936 = (frost$core$Int64) {12u};
frost$core$Int64 $tmp937 = (frost$core$Int64) {12u};
int64_t $tmp938 = $tmp936.value;
$tmp935[$tmp938] = $tmp937;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:109
frost$core$Int64** $tmp939 = *(&local0);
frost$core$Int64 $tmp940 = (frost$core$Int64) {49u};
frost$core$Int64** $tmp941 = *(&local0);
frost$core$Int64 $tmp942 = (frost$core$Int64) {48u};
int64_t $tmp943 = $tmp942.value;
frost$core$Int64* $tmp944 = $tmp941[$tmp943];
int64_t $tmp945 = $tmp940.value;
$tmp939[$tmp945] = $tmp944;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:110
frost$core$Int64** $tmp946 = *(&local0);
frost$core$Int64 $tmp947 = (frost$core$Int64) {50u};
frost$core$Int64** $tmp948 = *(&local0);
frost$core$Int64 $tmp949 = (frost$core$Int64) {48u};
int64_t $tmp950 = $tmp949.value;
frost$core$Int64* $tmp951 = $tmp948[$tmp950];
int64_t $tmp952 = $tmp947.value;
$tmp946[$tmp952] = $tmp951;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:111
frost$core$Int64** $tmp953 = *(&local0);
frost$core$Int64 $tmp954 = (frost$core$Int64) {51u};
frost$core$Int64** $tmp955 = *(&local0);
frost$core$Int64 $tmp956 = (frost$core$Int64) {48u};
int64_t $tmp957 = $tmp956.value;
frost$core$Int64* $tmp958 = $tmp955[$tmp957];
int64_t $tmp959 = $tmp954.value;
$tmp953[$tmp959] = $tmp958;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:112
frost$core$Int64** $tmp960 = *(&local0);
frost$core$Int64 $tmp961 = (frost$core$Int64) {52u};
frost$core$Int64** $tmp962 = *(&local0);
frost$core$Int64 $tmp963 = (frost$core$Int64) {48u};
int64_t $tmp964 = $tmp963.value;
frost$core$Int64* $tmp965 = $tmp962[$tmp964];
int64_t $tmp966 = $tmp961.value;
$tmp960[$tmp966] = $tmp965;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:113
frost$core$Int64** $tmp967 = *(&local0);
frost$core$Int64 $tmp968 = (frost$core$Int64) {53u};
frost$core$Int64** $tmp969 = *(&local0);
frost$core$Int64 $tmp970 = (frost$core$Int64) {48u};
int64_t $tmp971 = $tmp970.value;
frost$core$Int64* $tmp972 = $tmp969[$tmp971];
int64_t $tmp973 = $tmp968.value;
$tmp967[$tmp973] = $tmp972;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:114
frost$core$Int64** $tmp974 = *(&local0);
frost$core$Int64 $tmp975 = (frost$core$Int64) {54u};
frost$core$Int64** $tmp976 = *(&local0);
frost$core$Int64 $tmp977 = (frost$core$Int64) {48u};
int64_t $tmp978 = $tmp977.value;
frost$core$Int64* $tmp979 = $tmp976[$tmp978];
int64_t $tmp980 = $tmp975.value;
$tmp974[$tmp980] = $tmp979;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:115
frost$core$Int64** $tmp981 = *(&local0);
frost$core$Int64 $tmp982 = (frost$core$Int64) {55u};
frost$core$Int64** $tmp983 = *(&local0);
frost$core$Int64 $tmp984 = (frost$core$Int64) {48u};
int64_t $tmp985 = $tmp984.value;
frost$core$Int64* $tmp986 = $tmp983[$tmp985];
int64_t $tmp987 = $tmp982.value;
$tmp981[$tmp987] = $tmp986;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:116
frost$core$Int64** $tmp988 = *(&local0);
frost$core$Int64 $tmp989 = (frost$core$Int64) {56u};
frost$core$Int64** $tmp990 = *(&local0);
frost$core$Int64 $tmp991 = (frost$core$Int64) {48u};
int64_t $tmp992 = $tmp991.value;
frost$core$Int64* $tmp993 = $tmp990[$tmp992];
int64_t $tmp994 = $tmp989.value;
$tmp988[$tmp994] = $tmp993;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:117
frost$core$Int64** $tmp995 = *(&local0);
frost$core$Int64 $tmp996 = (frost$core$Int64) {57u};
frost$core$Int64** $tmp997 = *(&local0);
frost$core$Int64 $tmp998 = (frost$core$Int64) {48u};
int64_t $tmp999 = $tmp998.value;
frost$core$Int64* $tmp1000 = $tmp997[$tmp999];
int64_t $tmp1001 = $tmp996.value;
$tmp995[$tmp1001] = $tmp1000;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:118
frost$core$Int64** $tmp1002 = *(&local0);
frost$core$Int64 $tmp1003 = (frost$core$Int64) {58u};
frost$core$Int64 $tmp1004 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp1005 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:118:28
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp1006 = $tmp1004.value;
frost$core$Int64* $tmp1007 = ((frost$core$Int64*) frostAlloc($tmp1006 * 8));
*(&local17) = $tmp1007;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp1008 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1009 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1010 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1008, $tmp1004, $tmp1009);
frost$core$Int64 $tmp1011 = $tmp1010.min;
*(&local18) = $tmp1011;
frost$core$Int64 $tmp1012 = $tmp1010.max;
frost$core$Bit $tmp1013 = $tmp1010.inclusive;
bool $tmp1014 = $tmp1013.value;
frost$core$Int64 $tmp1015 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1016 = $tmp1015.value;
frost$core$UInt64 $tmp1017 = (frost$core$UInt64) {((uint64_t) $tmp1016)};
if ($tmp1014) goto block94; else goto block95;
block94:;
int64_t $tmp1018 = $tmp1011.value;
int64_t $tmp1019 = $tmp1012.value;
bool $tmp1020 = $tmp1018 <= $tmp1019;
frost$core$Bit $tmp1021 = (frost$core$Bit) {$tmp1020};
bool $tmp1022 = $tmp1021.value;
if ($tmp1022) goto block91; else goto block92;
block95:;
int64_t $tmp1023 = $tmp1011.value;
int64_t $tmp1024 = $tmp1012.value;
bool $tmp1025 = $tmp1023 < $tmp1024;
frost$core$Bit $tmp1026 = (frost$core$Bit) {$tmp1025};
bool $tmp1027 = $tmp1026.value;
if ($tmp1027) goto block91; else goto block92;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp1028 = *(&local17);
frost$core$Int64 $tmp1029 = *(&local18);
int64_t $tmp1030 = $tmp1029.value;
$tmp1028[$tmp1030] = $tmp1005;
frost$core$Int64 $tmp1031 = *(&local18);
int64_t $tmp1032 = $tmp1012.value;
int64_t $tmp1033 = $tmp1031.value;
int64_t $tmp1034 = $tmp1032 - $tmp1033;
frost$core$Int64 $tmp1035 = (frost$core$Int64) {$tmp1034};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1036 = $tmp1035.value;
frost$core$UInt64 $tmp1037 = (frost$core$UInt64) {((uint64_t) $tmp1036)};
if ($tmp1014) goto block98; else goto block99;
block98:;
uint64_t $tmp1038 = $tmp1037.value;
uint64_t $tmp1039 = $tmp1017.value;
bool $tmp1040 = $tmp1038 >= $tmp1039;
frost$core$Bit $tmp1041 = (frost$core$Bit) {$tmp1040};
bool $tmp1042 = $tmp1041.value;
if ($tmp1042) goto block96; else goto block92;
block99:;
uint64_t $tmp1043 = $tmp1037.value;
uint64_t $tmp1044 = $tmp1017.value;
bool $tmp1045 = $tmp1043 > $tmp1044;
frost$core$Bit $tmp1046 = (frost$core$Bit) {$tmp1045};
bool $tmp1047 = $tmp1046.value;
if ($tmp1047) goto block96; else goto block92;
block96:;
int64_t $tmp1048 = $tmp1031.value;
int64_t $tmp1049 = $tmp1015.value;
int64_t $tmp1050 = $tmp1048 + $tmp1049;
frost$core$Int64 $tmp1051 = (frost$core$Int64) {$tmp1050};
*(&local18) = $tmp1051;
goto block91;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp1052 = *(&local17);
int64_t $tmp1053 = $tmp1003.value;
$tmp1002[$tmp1053] = $tmp1052;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:119
frost$core$Int64** $tmp1054 = *(&local0);
frost$core$Int64 $tmp1055 = (frost$core$Int64) {58u};
int64_t $tmp1056 = $tmp1055.value;
frost$core$Int64* $tmp1057 = $tmp1054[$tmp1056];
frost$core$Int64 $tmp1058 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1059 = (frost$core$Int64) {13u};
int64_t $tmp1060 = $tmp1058.value;
$tmp1057[$tmp1060] = $tmp1059;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:120
frost$core$Int64** $tmp1061 = *(&local0);
frost$core$Int64 $tmp1062 = (frost$core$Int64) {58u};
int64_t $tmp1063 = $tmp1062.value;
frost$core$Int64* $tmp1064 = $tmp1061[$tmp1063];
frost$core$Int64 $tmp1065 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp1066 = (frost$core$Int64) {3u};
int64_t $tmp1067 = $tmp1065.value;
$tmp1064[$tmp1067] = $tmp1066;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:121
frost$core$Int64** $tmp1068 = *(&local0);
frost$core$Int64 $tmp1069 = (frost$core$Int64) {59u};
frost$core$Int64** $tmp1070 = *(&local0);
frost$core$Int64 $tmp1071 = (frost$core$Int64) {0u};
int64_t $tmp1072 = $tmp1071.value;
frost$core$Int64* $tmp1073 = $tmp1070[$tmp1072];
int64_t $tmp1074 = $tmp1069.value;
$tmp1068[$tmp1074] = $tmp1073;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:122
frost$core$Int64** $tmp1075 = *(&local0);
frost$core$Int64 $tmp1076 = (frost$core$Int64) {60u};
frost$core$Int64** $tmp1077 = *(&local0);
frost$core$Int64 $tmp1078 = (frost$core$Int64) {0u};
int64_t $tmp1079 = $tmp1078.value;
frost$core$Int64* $tmp1080 = $tmp1077[$tmp1079];
int64_t $tmp1081 = $tmp1076.value;
$tmp1075[$tmp1081] = $tmp1080;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:123
frost$core$Int64** $tmp1082 = *(&local0);
frost$core$Int64 $tmp1083 = (frost$core$Int64) {61u};
frost$core$Int64** $tmp1084 = *(&local0);
frost$core$Int64 $tmp1085 = (frost$core$Int64) {0u};
int64_t $tmp1086 = $tmp1085.value;
frost$core$Int64* $tmp1087 = $tmp1084[$tmp1086];
int64_t $tmp1088 = $tmp1083.value;
$tmp1082[$tmp1088] = $tmp1087;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:124
frost$core$Int64** $tmp1089 = *(&local0);
frost$core$Int64 $tmp1090 = (frost$core$Int64) {62u};
frost$core$Int64** $tmp1091 = *(&local0);
frost$core$Int64 $tmp1092 = (frost$core$Int64) {0u};
int64_t $tmp1093 = $tmp1092.value;
frost$core$Int64* $tmp1094 = $tmp1091[$tmp1093];
int64_t $tmp1095 = $tmp1090.value;
$tmp1089[$tmp1095] = $tmp1094;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:125
frost$core$Int64** $tmp1096 = *(&local0);
frost$core$Int64 $tmp1097 = (frost$core$Int64) {63u};
frost$core$Int64** $tmp1098 = *(&local0);
frost$core$Int64 $tmp1099 = (frost$core$Int64) {0u};
int64_t $tmp1100 = $tmp1099.value;
frost$core$Int64* $tmp1101 = $tmp1098[$tmp1100];
int64_t $tmp1102 = $tmp1097.value;
$tmp1096[$tmp1102] = $tmp1101;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:126
frost$core$Int64** $tmp1103 = *(&local0);
frost$core$Int64 $tmp1104 = (frost$core$Int64) {64u};
frost$core$Int64** $tmp1105 = *(&local0);
frost$core$Int64 $tmp1106 = (frost$core$Int64) {0u};
int64_t $tmp1107 = $tmp1106.value;
frost$core$Int64* $tmp1108 = $tmp1105[$tmp1107];
int64_t $tmp1109 = $tmp1104.value;
$tmp1103[$tmp1109] = $tmp1108;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:127
frost$core$Int64** $tmp1110 = *(&local0);
frost$core$Int64 $tmp1111 = (frost$core$Int64) {65u};
frost$core$Int64** $tmp1112 = *(&local0);
frost$core$Int64 $tmp1113 = (frost$core$Int64) {0u};
int64_t $tmp1114 = $tmp1113.value;
frost$core$Int64* $tmp1115 = $tmp1112[$tmp1114];
int64_t $tmp1116 = $tmp1111.value;
$tmp1110[$tmp1116] = $tmp1115;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:128
frost$core$Int64** $tmp1117 = *(&local0);
frost$core$Int64 $tmp1118 = (frost$core$Int64) {66u};
frost$core$Int64** $tmp1119 = *(&local0);
frost$core$Int64 $tmp1120 = (frost$core$Int64) {0u};
int64_t $tmp1121 = $tmp1120.value;
frost$core$Int64* $tmp1122 = $tmp1119[$tmp1121];
int64_t $tmp1123 = $tmp1118.value;
$tmp1117[$tmp1123] = $tmp1122;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:129
frost$core$Int64** $tmp1124 = *(&local0);
frost$core$Int64 $tmp1125 = (frost$core$Int64) {67u};
frost$core$Int64** $tmp1126 = *(&local0);
frost$core$Int64 $tmp1127 = (frost$core$Int64) {0u};
int64_t $tmp1128 = $tmp1127.value;
frost$core$Int64* $tmp1129 = $tmp1126[$tmp1128];
int64_t $tmp1130 = $tmp1125.value;
$tmp1124[$tmp1130] = $tmp1129;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:130
frost$core$Int64** $tmp1131 = *(&local0);
frost$core$Int64 $tmp1132 = (frost$core$Int64) {68u};
frost$core$Int64** $tmp1133 = *(&local0);
frost$core$Int64 $tmp1134 = (frost$core$Int64) {0u};
int64_t $tmp1135 = $tmp1134.value;
frost$core$Int64* $tmp1136 = $tmp1133[$tmp1135];
int64_t $tmp1137 = $tmp1132.value;
$tmp1131[$tmp1137] = $tmp1136;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:131
frost$core$Int64** $tmp1138 = *(&local0);
frost$core$Int64 $tmp1139 = (frost$core$Int64) {69u};
frost$core$Int64 $tmp1140 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp1141 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:131:28
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp1142 = $tmp1140.value;
frost$core$Int64* $tmp1143 = ((frost$core$Int64*) frostAlloc($tmp1142 * 8));
*(&local19) = $tmp1143;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp1144 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1145 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1146 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1144, $tmp1140, $tmp1145);
frost$core$Int64 $tmp1147 = $tmp1146.min;
*(&local20) = $tmp1147;
frost$core$Int64 $tmp1148 = $tmp1146.max;
frost$core$Bit $tmp1149 = $tmp1146.inclusive;
bool $tmp1150 = $tmp1149.value;
frost$core$Int64 $tmp1151 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1152 = $tmp1151.value;
frost$core$UInt64 $tmp1153 = (frost$core$UInt64) {((uint64_t) $tmp1152)};
if ($tmp1150) goto block105; else goto block106;
block105:;
int64_t $tmp1154 = $tmp1147.value;
int64_t $tmp1155 = $tmp1148.value;
bool $tmp1156 = $tmp1154 <= $tmp1155;
frost$core$Bit $tmp1157 = (frost$core$Bit) {$tmp1156};
bool $tmp1158 = $tmp1157.value;
if ($tmp1158) goto block102; else goto block103;
block106:;
int64_t $tmp1159 = $tmp1147.value;
int64_t $tmp1160 = $tmp1148.value;
bool $tmp1161 = $tmp1159 < $tmp1160;
frost$core$Bit $tmp1162 = (frost$core$Bit) {$tmp1161};
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block102; else goto block103;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp1164 = *(&local19);
frost$core$Int64 $tmp1165 = *(&local20);
int64_t $tmp1166 = $tmp1165.value;
$tmp1164[$tmp1166] = $tmp1141;
frost$core$Int64 $tmp1167 = *(&local20);
int64_t $tmp1168 = $tmp1148.value;
int64_t $tmp1169 = $tmp1167.value;
int64_t $tmp1170 = $tmp1168 - $tmp1169;
frost$core$Int64 $tmp1171 = (frost$core$Int64) {$tmp1170};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1172 = $tmp1171.value;
frost$core$UInt64 $tmp1173 = (frost$core$UInt64) {((uint64_t) $tmp1172)};
if ($tmp1150) goto block109; else goto block110;
block109:;
uint64_t $tmp1174 = $tmp1173.value;
uint64_t $tmp1175 = $tmp1153.value;
bool $tmp1176 = $tmp1174 >= $tmp1175;
frost$core$Bit $tmp1177 = (frost$core$Bit) {$tmp1176};
bool $tmp1178 = $tmp1177.value;
if ($tmp1178) goto block107; else goto block103;
block110:;
uint64_t $tmp1179 = $tmp1173.value;
uint64_t $tmp1180 = $tmp1153.value;
bool $tmp1181 = $tmp1179 > $tmp1180;
frost$core$Bit $tmp1182 = (frost$core$Bit) {$tmp1181};
bool $tmp1183 = $tmp1182.value;
if ($tmp1183) goto block107; else goto block103;
block107:;
int64_t $tmp1184 = $tmp1167.value;
int64_t $tmp1185 = $tmp1151.value;
int64_t $tmp1186 = $tmp1184 + $tmp1185;
frost$core$Int64 $tmp1187 = (frost$core$Int64) {$tmp1186};
*(&local20) = $tmp1187;
goto block102;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp1188 = *(&local19);
int64_t $tmp1189 = $tmp1139.value;
$tmp1138[$tmp1189] = $tmp1188;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:132
frost$core$Int64** $tmp1190 = *(&local0);
frost$core$Int64 $tmp1191 = (frost$core$Int64) {69u};
int64_t $tmp1192 = $tmp1191.value;
frost$core$Int64* $tmp1193 = $tmp1190[$tmp1192];
frost$core$Int64 $tmp1194 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp1195 = (frost$core$Int64) {3u};
int64_t $tmp1196 = $tmp1194.value;
$tmp1193[$tmp1196] = $tmp1195;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:133
frost$core$Int64** $tmp1197 = *(&local0);
frost$core$Int64 $tmp1198 = (frost$core$Int64) {69u};
int64_t $tmp1199 = $tmp1198.value;
frost$core$Int64* $tmp1200 = $tmp1197[$tmp1199];
frost$core$Int64 $tmp1201 = (frost$core$Int64) {9u};
frost$core$Int64 $tmp1202 = (frost$core$Int64) {10u};
int64_t $tmp1203 = $tmp1201.value;
$tmp1200[$tmp1203] = $tmp1202;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:134
frost$core$Int64** $tmp1204 = *(&local0);
frost$core$Int64 $tmp1205 = (frost$core$Int64) {70u};
frost$core$Int64** $tmp1206 = *(&local0);
frost$core$Int64 $tmp1207 = (frost$core$Int64) {0u};
int64_t $tmp1208 = $tmp1207.value;
frost$core$Int64* $tmp1209 = $tmp1206[$tmp1208];
int64_t $tmp1210 = $tmp1205.value;
$tmp1204[$tmp1210] = $tmp1209;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:135
frost$core$Int64** $tmp1211 = *(&local0);
frost$core$Int64 $tmp1212 = (frost$core$Int64) {71u};
frost$core$Int64** $tmp1213 = *(&local0);
frost$core$Int64 $tmp1214 = (frost$core$Int64) {0u};
int64_t $tmp1215 = $tmp1214.value;
frost$core$Int64* $tmp1216 = $tmp1213[$tmp1215];
int64_t $tmp1217 = $tmp1212.value;
$tmp1211[$tmp1217] = $tmp1216;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:136
frost$core$Int64** $tmp1218 = *(&local0);
frost$core$Int64 $tmp1219 = (frost$core$Int64) {72u};
frost$core$Int64** $tmp1220 = *(&local0);
frost$core$Int64 $tmp1221 = (frost$core$Int64) {0u};
int64_t $tmp1222 = $tmp1221.value;
frost$core$Int64* $tmp1223 = $tmp1220[$tmp1222];
int64_t $tmp1224 = $tmp1219.value;
$tmp1218[$tmp1224] = $tmp1223;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:137
frost$core$Int64** $tmp1225 = *(&local0);
frost$core$Int64 $tmp1226 = (frost$core$Int64) {73u};
frost$core$Int64** $tmp1227 = *(&local0);
frost$core$Int64 $tmp1228 = (frost$core$Int64) {0u};
int64_t $tmp1229 = $tmp1228.value;
frost$core$Int64* $tmp1230 = $tmp1227[$tmp1229];
int64_t $tmp1231 = $tmp1226.value;
$tmp1225[$tmp1231] = $tmp1230;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:138
frost$core$Int64** $tmp1232 = *(&local0);
frost$core$Int64 $tmp1233 = (frost$core$Int64) {74u};
frost$core$Int64** $tmp1234 = *(&local0);
frost$core$Int64 $tmp1235 = (frost$core$Int64) {0u};
int64_t $tmp1236 = $tmp1235.value;
frost$core$Int64* $tmp1237 = $tmp1234[$tmp1236];
int64_t $tmp1238 = $tmp1233.value;
$tmp1232[$tmp1238] = $tmp1237;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:139
frost$core$Int64** $tmp1239 = *(&local0);
frost$core$Int64 $tmp1240 = (frost$core$Int64) {75u};
frost$core$Int64** $tmp1241 = *(&local0);
frost$core$Int64 $tmp1242 = (frost$core$Int64) {0u};
int64_t $tmp1243 = $tmp1242.value;
frost$core$Int64* $tmp1244 = $tmp1241[$tmp1243];
int64_t $tmp1245 = $tmp1240.value;
$tmp1239[$tmp1245] = $tmp1244;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:140
frost$core$Int64** $tmp1246 = *(&local0);
frost$core$Int64 $tmp1247 = (frost$core$Int64) {76u};
frost$core$Int64** $tmp1248 = *(&local0);
frost$core$Int64 $tmp1249 = (frost$core$Int64) {0u};
int64_t $tmp1250 = $tmp1249.value;
frost$core$Int64* $tmp1251 = $tmp1248[$tmp1250];
int64_t $tmp1252 = $tmp1247.value;
$tmp1246[$tmp1252] = $tmp1251;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:141
frost$core$Int64** $tmp1253 = *(&local0);
frost$core$Int64 $tmp1254 = (frost$core$Int64) {77u};
frost$core$Int64** $tmp1255 = *(&local0);
frost$core$Int64 $tmp1256 = (frost$core$Int64) {0u};
int64_t $tmp1257 = $tmp1256.value;
frost$core$Int64* $tmp1258 = $tmp1255[$tmp1257];
int64_t $tmp1259 = $tmp1254.value;
$tmp1253[$tmp1259] = $tmp1258;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:142
frost$core$Int64** $tmp1260 = *(&local0);
frost$core$Int64 $tmp1261 = (frost$core$Int64) {78u};
frost$core$Int64** $tmp1262 = *(&local0);
frost$core$Int64 $tmp1263 = (frost$core$Int64) {0u};
int64_t $tmp1264 = $tmp1263.value;
frost$core$Int64* $tmp1265 = $tmp1262[$tmp1264];
int64_t $tmp1266 = $tmp1261.value;
$tmp1260[$tmp1266] = $tmp1265;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:143
frost$core$Int64** $tmp1267 = *(&local0);
frost$core$Int64 $tmp1268 = (frost$core$Int64) {79u};
frost$core$Int64** $tmp1269 = *(&local0);
frost$core$Int64 $tmp1270 = (frost$core$Int64) {0u};
int64_t $tmp1271 = $tmp1270.value;
frost$core$Int64* $tmp1272 = $tmp1269[$tmp1271];
int64_t $tmp1273 = $tmp1268.value;
$tmp1267[$tmp1273] = $tmp1272;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:144
frost$core$Int64** $tmp1274 = *(&local0);
frost$core$Int64 $tmp1275 = (frost$core$Int64) {80u};
frost$core$Int64** $tmp1276 = *(&local0);
frost$core$Int64 $tmp1277 = (frost$core$Int64) {0u};
int64_t $tmp1278 = $tmp1277.value;
frost$core$Int64* $tmp1279 = $tmp1276[$tmp1278];
int64_t $tmp1280 = $tmp1275.value;
$tmp1274[$tmp1280] = $tmp1279;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:145
frost$core$Int64** $tmp1281 = *(&local0);
frost$core$Int64 $tmp1282 = (frost$core$Int64) {81u};
frost$core$Int64** $tmp1283 = *(&local0);
frost$core$Int64 $tmp1284 = (frost$core$Int64) {0u};
int64_t $tmp1285 = $tmp1284.value;
frost$core$Int64* $tmp1286 = $tmp1283[$tmp1285];
int64_t $tmp1287 = $tmp1282.value;
$tmp1281[$tmp1287] = $tmp1286;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:146
frost$core$Int64** $tmp1288 = *(&local0);
frost$core$Int64 $tmp1289 = (frost$core$Int64) {82u};
frost$core$Int64** $tmp1290 = *(&local0);
frost$core$Int64 $tmp1291 = (frost$core$Int64) {0u};
int64_t $tmp1292 = $tmp1291.value;
frost$core$Int64* $tmp1293 = $tmp1290[$tmp1292];
int64_t $tmp1294 = $tmp1289.value;
$tmp1288[$tmp1294] = $tmp1293;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:147
frost$core$Int64** $tmp1295 = *(&local0);
frost$core$Int64 $tmp1296 = (frost$core$Int64) {83u};
frost$core$Int64** $tmp1297 = *(&local0);
frost$core$Int64 $tmp1298 = (frost$core$Int64) {0u};
int64_t $tmp1299 = $tmp1298.value;
frost$core$Int64* $tmp1300 = $tmp1297[$tmp1299];
int64_t $tmp1301 = $tmp1296.value;
$tmp1295[$tmp1301] = $tmp1300;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:148
frost$core$Int64** $tmp1302 = *(&local0);
frost$core$Int64 $tmp1303 = (frost$core$Int64) {84u};
frost$core$Int64** $tmp1304 = *(&local0);
frost$core$Int64 $tmp1305 = (frost$core$Int64) {0u};
int64_t $tmp1306 = $tmp1305.value;
frost$core$Int64* $tmp1307 = $tmp1304[$tmp1306];
int64_t $tmp1308 = $tmp1303.value;
$tmp1302[$tmp1308] = $tmp1307;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:149
frost$core$Int64** $tmp1309 = *(&local0);
frost$core$Int64 $tmp1310 = (frost$core$Int64) {85u};
frost$core$Int64** $tmp1311 = *(&local0);
frost$core$Int64 $tmp1312 = (frost$core$Int64) {0u};
int64_t $tmp1313 = $tmp1312.value;
frost$core$Int64* $tmp1314 = $tmp1311[$tmp1313];
int64_t $tmp1315 = $tmp1310.value;
$tmp1309[$tmp1315] = $tmp1314;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:150
frost$core$Int64** $tmp1316 = *(&local0);
frost$core$Int64 $tmp1317 = (frost$core$Int64) {86u};
frost$core$Int64** $tmp1318 = *(&local0);
frost$core$Int64 $tmp1319 = (frost$core$Int64) {0u};
int64_t $tmp1320 = $tmp1319.value;
frost$core$Int64* $tmp1321 = $tmp1318[$tmp1320];
int64_t $tmp1322 = $tmp1317.value;
$tmp1316[$tmp1322] = $tmp1321;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:151
frost$core$Int64** $tmp1323 = *(&local0);
frost$core$Int64 $tmp1324 = (frost$core$Int64) {87u};
frost$core$Int64** $tmp1325 = *(&local0);
frost$core$Int64 $tmp1326 = (frost$core$Int64) {0u};
int64_t $tmp1327 = $tmp1326.value;
frost$core$Int64* $tmp1328 = $tmp1325[$tmp1327];
int64_t $tmp1329 = $tmp1324.value;
$tmp1323[$tmp1329] = $tmp1328;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:152
frost$core$Int64** $tmp1330 = *(&local0);
frost$core$Int64 $tmp1331 = (frost$core$Int64) {88u};
frost$core$Int64** $tmp1332 = *(&local0);
frost$core$Int64 $tmp1333 = (frost$core$Int64) {0u};
int64_t $tmp1334 = $tmp1333.value;
frost$core$Int64* $tmp1335 = $tmp1332[$tmp1334];
int64_t $tmp1336 = $tmp1331.value;
$tmp1330[$tmp1336] = $tmp1335;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:153
frost$core$Int64** $tmp1337 = *(&local0);
frost$core$Int64 $tmp1338 = (frost$core$Int64) {89u};
frost$core$Int64** $tmp1339 = *(&local0);
frost$core$Int64 $tmp1340 = (frost$core$Int64) {0u};
int64_t $tmp1341 = $tmp1340.value;
frost$core$Int64* $tmp1342 = $tmp1339[$tmp1341];
int64_t $tmp1343 = $tmp1338.value;
$tmp1337[$tmp1343] = $tmp1342;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:154
frost$core$Int64** $tmp1344 = *(&local0);
frost$core$Int64 $tmp1345 = (frost$core$Int64) {90u};
frost$core$Int64** $tmp1346 = *(&local0);
frost$core$Int64 $tmp1347 = (frost$core$Int64) {0u};
int64_t $tmp1348 = $tmp1347.value;
frost$core$Int64* $tmp1349 = $tmp1346[$tmp1348];
int64_t $tmp1350 = $tmp1345.value;
$tmp1344[$tmp1350] = $tmp1349;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:155
frost$core$Int64** $tmp1351 = *(&local0);
frost$core$Int64 $tmp1352 = (frost$core$Int64) {91u};
frost$core$Int64 $tmp1353 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp1354 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:155:28
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp1355 = $tmp1353.value;
frost$core$Int64* $tmp1356 = ((frost$core$Int64*) frostAlloc($tmp1355 * 8));
*(&local21) = $tmp1356;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp1357 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1358 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1359 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1357, $tmp1353, $tmp1358);
frost$core$Int64 $tmp1360 = $tmp1359.min;
*(&local22) = $tmp1360;
frost$core$Int64 $tmp1361 = $tmp1359.max;
frost$core$Bit $tmp1362 = $tmp1359.inclusive;
bool $tmp1363 = $tmp1362.value;
frost$core$Int64 $tmp1364 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1365 = $tmp1364.value;
frost$core$UInt64 $tmp1366 = (frost$core$UInt64) {((uint64_t) $tmp1365)};
if ($tmp1363) goto block116; else goto block117;
block116:;
int64_t $tmp1367 = $tmp1360.value;
int64_t $tmp1368 = $tmp1361.value;
bool $tmp1369 = $tmp1367 <= $tmp1368;
frost$core$Bit $tmp1370 = (frost$core$Bit) {$tmp1369};
bool $tmp1371 = $tmp1370.value;
if ($tmp1371) goto block113; else goto block114;
block117:;
int64_t $tmp1372 = $tmp1360.value;
int64_t $tmp1373 = $tmp1361.value;
bool $tmp1374 = $tmp1372 < $tmp1373;
frost$core$Bit $tmp1375 = (frost$core$Bit) {$tmp1374};
bool $tmp1376 = $tmp1375.value;
if ($tmp1376) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp1377 = *(&local21);
frost$core$Int64 $tmp1378 = *(&local22);
int64_t $tmp1379 = $tmp1378.value;
$tmp1377[$tmp1379] = $tmp1354;
frost$core$Int64 $tmp1380 = *(&local22);
int64_t $tmp1381 = $tmp1361.value;
int64_t $tmp1382 = $tmp1380.value;
int64_t $tmp1383 = $tmp1381 - $tmp1382;
frost$core$Int64 $tmp1384 = (frost$core$Int64) {$tmp1383};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1385 = $tmp1384.value;
frost$core$UInt64 $tmp1386 = (frost$core$UInt64) {((uint64_t) $tmp1385)};
if ($tmp1363) goto block120; else goto block121;
block120:;
uint64_t $tmp1387 = $tmp1386.value;
uint64_t $tmp1388 = $tmp1366.value;
bool $tmp1389 = $tmp1387 >= $tmp1388;
frost$core$Bit $tmp1390 = (frost$core$Bit) {$tmp1389};
bool $tmp1391 = $tmp1390.value;
if ($tmp1391) goto block118; else goto block114;
block121:;
uint64_t $tmp1392 = $tmp1386.value;
uint64_t $tmp1393 = $tmp1366.value;
bool $tmp1394 = $tmp1392 > $tmp1393;
frost$core$Bit $tmp1395 = (frost$core$Bit) {$tmp1394};
bool $tmp1396 = $tmp1395.value;
if ($tmp1396) goto block118; else goto block114;
block118:;
int64_t $tmp1397 = $tmp1380.value;
int64_t $tmp1398 = $tmp1364.value;
int64_t $tmp1399 = $tmp1397 + $tmp1398;
frost$core$Int64 $tmp1400 = (frost$core$Int64) {$tmp1399};
*(&local22) = $tmp1400;
goto block113;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp1401 = *(&local21);
int64_t $tmp1402 = $tmp1352.value;
$tmp1351[$tmp1402] = $tmp1401;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:156
frost$core$Int64** $tmp1403 = *(&local0);
frost$core$Int64 $tmp1404 = (frost$core$Int64) {91u};
int64_t $tmp1405 = $tmp1404.value;
frost$core$Int64* $tmp1406 = $tmp1403[$tmp1405];
frost$core$Int64 $tmp1407 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1408 = (frost$core$Int64) {14u};
int64_t $tmp1409 = $tmp1407.value;
$tmp1406[$tmp1409] = $tmp1408;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:157
frost$core$Int64** $tmp1410 = *(&local0);
frost$core$Int64 $tmp1411 = (frost$core$Int64) {91u};
int64_t $tmp1412 = $tmp1411.value;
frost$core$Int64* $tmp1413 = $tmp1410[$tmp1412];
frost$core$Int64 $tmp1414 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp1415 = (frost$core$Int64) {3u};
int64_t $tmp1416 = $tmp1414.value;
$tmp1413[$tmp1416] = $tmp1415;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:158
frost$core$Int64** $tmp1417 = *(&local0);
frost$core$Int64 $tmp1418 = (frost$core$Int64) {92u};
frost$core$Int64 $tmp1419 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp1420 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:158:28
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp1421 = $tmp1419.value;
frost$core$Int64* $tmp1422 = ((frost$core$Int64*) frostAlloc($tmp1421 * 8));
*(&local23) = $tmp1422;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp1423 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1424 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1425 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1423, $tmp1419, $tmp1424);
frost$core$Int64 $tmp1426 = $tmp1425.min;
*(&local24) = $tmp1426;
frost$core$Int64 $tmp1427 = $tmp1425.max;
frost$core$Bit $tmp1428 = $tmp1425.inclusive;
bool $tmp1429 = $tmp1428.value;
frost$core$Int64 $tmp1430 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1431 = $tmp1430.value;
frost$core$UInt64 $tmp1432 = (frost$core$UInt64) {((uint64_t) $tmp1431)};
if ($tmp1429) goto block127; else goto block128;
block127:;
int64_t $tmp1433 = $tmp1426.value;
int64_t $tmp1434 = $tmp1427.value;
bool $tmp1435 = $tmp1433 <= $tmp1434;
frost$core$Bit $tmp1436 = (frost$core$Bit) {$tmp1435};
bool $tmp1437 = $tmp1436.value;
if ($tmp1437) goto block124; else goto block125;
block128:;
int64_t $tmp1438 = $tmp1426.value;
int64_t $tmp1439 = $tmp1427.value;
bool $tmp1440 = $tmp1438 < $tmp1439;
frost$core$Bit $tmp1441 = (frost$core$Bit) {$tmp1440};
bool $tmp1442 = $tmp1441.value;
if ($tmp1442) goto block124; else goto block125;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp1443 = *(&local23);
frost$core$Int64 $tmp1444 = *(&local24);
int64_t $tmp1445 = $tmp1444.value;
$tmp1443[$tmp1445] = $tmp1420;
frost$core$Int64 $tmp1446 = *(&local24);
int64_t $tmp1447 = $tmp1427.value;
int64_t $tmp1448 = $tmp1446.value;
int64_t $tmp1449 = $tmp1447 - $tmp1448;
frost$core$Int64 $tmp1450 = (frost$core$Int64) {$tmp1449};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1451 = $tmp1450.value;
frost$core$UInt64 $tmp1452 = (frost$core$UInt64) {((uint64_t) $tmp1451)};
if ($tmp1429) goto block131; else goto block132;
block131:;
uint64_t $tmp1453 = $tmp1452.value;
uint64_t $tmp1454 = $tmp1432.value;
bool $tmp1455 = $tmp1453 >= $tmp1454;
frost$core$Bit $tmp1456 = (frost$core$Bit) {$tmp1455};
bool $tmp1457 = $tmp1456.value;
if ($tmp1457) goto block129; else goto block125;
block132:;
uint64_t $tmp1458 = $tmp1452.value;
uint64_t $tmp1459 = $tmp1432.value;
bool $tmp1460 = $tmp1458 > $tmp1459;
frost$core$Bit $tmp1461 = (frost$core$Bit) {$tmp1460};
bool $tmp1462 = $tmp1461.value;
if ($tmp1462) goto block129; else goto block125;
block129:;
int64_t $tmp1463 = $tmp1446.value;
int64_t $tmp1464 = $tmp1430.value;
int64_t $tmp1465 = $tmp1463 + $tmp1464;
frost$core$Int64 $tmp1466 = (frost$core$Int64) {$tmp1465};
*(&local24) = $tmp1466;
goto block124;
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp1467 = *(&local23);
int64_t $tmp1468 = $tmp1418.value;
$tmp1417[$tmp1468] = $tmp1467;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:159
frost$core$Int64** $tmp1469 = *(&local0);
frost$core$Int64 $tmp1470 = (frost$core$Int64) {92u};
int64_t $tmp1471 = $tmp1470.value;
frost$core$Int64* $tmp1472 = $tmp1469[$tmp1471];
frost$core$Int64 $tmp1473 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp1474 = (frost$core$Int64) {5u};
int64_t $tmp1475 = $tmp1473.value;
$tmp1472[$tmp1475] = $tmp1474;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:160
frost$core$Int64** $tmp1476 = *(&local0);
frost$core$Int64 $tmp1477 = (frost$core$Int64) {92u};
int64_t $tmp1478 = $tmp1477.value;
frost$core$Int64* $tmp1479 = $tmp1476[$tmp1478];
frost$core$Int64 $tmp1480 = (frost$core$Int64) {5u};
frost$core$Int64 $tmp1481 = (frost$core$Int64) {3u};
int64_t $tmp1482 = $tmp1480.value;
$tmp1479[$tmp1482] = $tmp1481;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:161
frost$core$Int64** $tmp1483 = *(&local0);
frost$core$Int64 $tmp1484 = (frost$core$Int64) {93u};
frost$core$Int64 $tmp1485 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp1486 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:161:28
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp1487 = $tmp1485.value;
frost$core$Int64* $tmp1488 = ((frost$core$Int64*) frostAlloc($tmp1487 * 8));
*(&local25) = $tmp1488;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp1489 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1490 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1491 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1489, $tmp1485, $tmp1490);
frost$core$Int64 $tmp1492 = $tmp1491.min;
*(&local26) = $tmp1492;
frost$core$Int64 $tmp1493 = $tmp1491.max;
frost$core$Bit $tmp1494 = $tmp1491.inclusive;
bool $tmp1495 = $tmp1494.value;
frost$core$Int64 $tmp1496 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1497 = $tmp1496.value;
frost$core$UInt64 $tmp1498 = (frost$core$UInt64) {((uint64_t) $tmp1497)};
if ($tmp1495) goto block138; else goto block139;
block138:;
int64_t $tmp1499 = $tmp1492.value;
int64_t $tmp1500 = $tmp1493.value;
bool $tmp1501 = $tmp1499 <= $tmp1500;
frost$core$Bit $tmp1502 = (frost$core$Bit) {$tmp1501};
bool $tmp1503 = $tmp1502.value;
if ($tmp1503) goto block135; else goto block136;
block139:;
int64_t $tmp1504 = $tmp1492.value;
int64_t $tmp1505 = $tmp1493.value;
bool $tmp1506 = $tmp1504 < $tmp1505;
frost$core$Bit $tmp1507 = (frost$core$Bit) {$tmp1506};
bool $tmp1508 = $tmp1507.value;
if ($tmp1508) goto block135; else goto block136;
block135:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp1509 = *(&local25);
frost$core$Int64 $tmp1510 = *(&local26);
int64_t $tmp1511 = $tmp1510.value;
$tmp1509[$tmp1511] = $tmp1486;
frost$core$Int64 $tmp1512 = *(&local26);
int64_t $tmp1513 = $tmp1493.value;
int64_t $tmp1514 = $tmp1512.value;
int64_t $tmp1515 = $tmp1513 - $tmp1514;
frost$core$Int64 $tmp1516 = (frost$core$Int64) {$tmp1515};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1517 = $tmp1516.value;
frost$core$UInt64 $tmp1518 = (frost$core$UInt64) {((uint64_t) $tmp1517)};
if ($tmp1495) goto block142; else goto block143;
block142:;
uint64_t $tmp1519 = $tmp1518.value;
uint64_t $tmp1520 = $tmp1498.value;
bool $tmp1521 = $tmp1519 >= $tmp1520;
frost$core$Bit $tmp1522 = (frost$core$Bit) {$tmp1521};
bool $tmp1523 = $tmp1522.value;
if ($tmp1523) goto block140; else goto block136;
block143:;
uint64_t $tmp1524 = $tmp1518.value;
uint64_t $tmp1525 = $tmp1498.value;
bool $tmp1526 = $tmp1524 > $tmp1525;
frost$core$Bit $tmp1527 = (frost$core$Bit) {$tmp1526};
bool $tmp1528 = $tmp1527.value;
if ($tmp1528) goto block140; else goto block136;
block140:;
int64_t $tmp1529 = $tmp1512.value;
int64_t $tmp1530 = $tmp1496.value;
int64_t $tmp1531 = $tmp1529 + $tmp1530;
frost$core$Int64 $tmp1532 = (frost$core$Int64) {$tmp1531};
*(&local26) = $tmp1532;
goto block135;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp1533 = *(&local25);
int64_t $tmp1534 = $tmp1484.value;
$tmp1483[$tmp1534] = $tmp1533;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:162
frost$core$Int64** $tmp1535 = *(&local0);
frost$core$Int64 $tmp1536 = (frost$core$Int64) {93u};
int64_t $tmp1537 = $tmp1536.value;
frost$core$Int64* $tmp1538 = $tmp1535[$tmp1537];
frost$core$Int64 $tmp1539 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1540 = (frost$core$Int64) {15u};
int64_t $tmp1541 = $tmp1539.value;
$tmp1538[$tmp1541] = $tmp1540;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:163
frost$core$Int64** $tmp1542 = *(&local0);
frost$core$Int64 $tmp1543 = (frost$core$Int64) {93u};
int64_t $tmp1544 = $tmp1543.value;
frost$core$Int64* $tmp1545 = $tmp1542[$tmp1544];
frost$core$Int64 $tmp1546 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp1547 = (frost$core$Int64) {3u};
int64_t $tmp1548 = $tmp1546.value;
$tmp1545[$tmp1548] = $tmp1547;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:164
frost$core$Int64** $tmp1549 = *(&local0);
frost$core$Int64 $tmp1550 = (frost$core$Int64) {94u};
frost$core$Int64** $tmp1551 = *(&local0);
frost$core$Int64 $tmp1552 = (frost$core$Int64) {0u};
int64_t $tmp1553 = $tmp1552.value;
frost$core$Int64* $tmp1554 = $tmp1551[$tmp1553];
int64_t $tmp1555 = $tmp1550.value;
$tmp1549[$tmp1555] = $tmp1554;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:165
frost$core$Int64** $tmp1556 = *(&local0);
frost$core$Int64 $tmp1557 = (frost$core$Int64) {95u};
frost$core$Int64** $tmp1558 = *(&local0);
frost$core$Int64 $tmp1559 = (frost$core$Int64) {0u};
int64_t $tmp1560 = $tmp1559.value;
frost$core$Int64* $tmp1561 = $tmp1558[$tmp1560];
int64_t $tmp1562 = $tmp1557.value;
$tmp1556[$tmp1562] = $tmp1561;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:166
frost$core$Int64** $tmp1563 = *(&local0);
frost$core$Int64 $tmp1564 = (frost$core$Int64) {96u};
frost$core$Int64** $tmp1565 = *(&local0);
frost$core$Int64 $tmp1566 = (frost$core$Int64) {0u};
int64_t $tmp1567 = $tmp1566.value;
frost$core$Int64* $tmp1568 = $tmp1565[$tmp1567];
int64_t $tmp1569 = $tmp1564.value;
$tmp1563[$tmp1569] = $tmp1568;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:167
frost$core$Int64** $tmp1570 = *(&local0);
frost$core$Int64 $tmp1571 = (frost$core$Int64) {97u};
frost$core$Int64 $tmp1572 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp1573 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:167:28
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp1574 = $tmp1572.value;
frost$core$Int64* $tmp1575 = ((frost$core$Int64*) frostAlloc($tmp1574 * 8));
*(&local27) = $tmp1575;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp1576 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1577 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1578 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1576, $tmp1572, $tmp1577);
frost$core$Int64 $tmp1579 = $tmp1578.min;
*(&local28) = $tmp1579;
frost$core$Int64 $tmp1580 = $tmp1578.max;
frost$core$Bit $tmp1581 = $tmp1578.inclusive;
bool $tmp1582 = $tmp1581.value;
frost$core$Int64 $tmp1583 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1584 = $tmp1583.value;
frost$core$UInt64 $tmp1585 = (frost$core$UInt64) {((uint64_t) $tmp1584)};
if ($tmp1582) goto block149; else goto block150;
block149:;
int64_t $tmp1586 = $tmp1579.value;
int64_t $tmp1587 = $tmp1580.value;
bool $tmp1588 = $tmp1586 <= $tmp1587;
frost$core$Bit $tmp1589 = (frost$core$Bit) {$tmp1588};
bool $tmp1590 = $tmp1589.value;
if ($tmp1590) goto block146; else goto block147;
block150:;
int64_t $tmp1591 = $tmp1579.value;
int64_t $tmp1592 = $tmp1580.value;
bool $tmp1593 = $tmp1591 < $tmp1592;
frost$core$Bit $tmp1594 = (frost$core$Bit) {$tmp1593};
bool $tmp1595 = $tmp1594.value;
if ($tmp1595) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp1596 = *(&local27);
frost$core$Int64 $tmp1597 = *(&local28);
int64_t $tmp1598 = $tmp1597.value;
$tmp1596[$tmp1598] = $tmp1573;
frost$core$Int64 $tmp1599 = *(&local28);
int64_t $tmp1600 = $tmp1580.value;
int64_t $tmp1601 = $tmp1599.value;
int64_t $tmp1602 = $tmp1600 - $tmp1601;
frost$core$Int64 $tmp1603 = (frost$core$Int64) {$tmp1602};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1604 = $tmp1603.value;
frost$core$UInt64 $tmp1605 = (frost$core$UInt64) {((uint64_t) $tmp1604)};
if ($tmp1582) goto block153; else goto block154;
block153:;
uint64_t $tmp1606 = $tmp1605.value;
uint64_t $tmp1607 = $tmp1585.value;
bool $tmp1608 = $tmp1606 >= $tmp1607;
frost$core$Bit $tmp1609 = (frost$core$Bit) {$tmp1608};
bool $tmp1610 = $tmp1609.value;
if ($tmp1610) goto block151; else goto block147;
block154:;
uint64_t $tmp1611 = $tmp1605.value;
uint64_t $tmp1612 = $tmp1585.value;
bool $tmp1613 = $tmp1611 > $tmp1612;
frost$core$Bit $tmp1614 = (frost$core$Bit) {$tmp1613};
bool $tmp1615 = $tmp1614.value;
if ($tmp1615) goto block151; else goto block147;
block151:;
int64_t $tmp1616 = $tmp1599.value;
int64_t $tmp1617 = $tmp1583.value;
int64_t $tmp1618 = $tmp1616 + $tmp1617;
frost$core$Int64 $tmp1619 = (frost$core$Int64) {$tmp1618};
*(&local28) = $tmp1619;
goto block146;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp1620 = *(&local27);
int64_t $tmp1621 = $tmp1571.value;
$tmp1570[$tmp1621] = $tmp1620;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:168
frost$core$Int64** $tmp1622 = *(&local0);
frost$core$Int64 $tmp1623 = (frost$core$Int64) {97u};
int64_t $tmp1624 = $tmp1623.value;
frost$core$Int64* $tmp1625 = $tmp1622[$tmp1624];
frost$core$Int64 $tmp1626 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp1627 = (frost$core$Int64) {3u};
int64_t $tmp1628 = $tmp1626.value;
$tmp1625[$tmp1628] = $tmp1627;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:169
frost$core$Int64** $tmp1629 = *(&local0);
frost$core$Int64 $tmp1630 = (frost$core$Int64) {97u};
int64_t $tmp1631 = $tmp1630.value;
frost$core$Int64* $tmp1632 = $tmp1629[$tmp1631];
frost$core$Int64 $tmp1633 = (frost$core$Int64) {16u};
frost$core$Int64 $tmp1634 = (frost$core$Int64) {17u};
int64_t $tmp1635 = $tmp1633.value;
$tmp1632[$tmp1635] = $tmp1634;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:170
frost$core$Int64** $tmp1636 = *(&local0);
frost$core$Int64 $tmp1637 = (frost$core$Int64) {98u};
frost$core$Int64 $tmp1638 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp1639 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:170:28
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp1640 = $tmp1638.value;
frost$core$Int64* $tmp1641 = ((frost$core$Int64*) frostAlloc($tmp1640 * 8));
*(&local29) = $tmp1641;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp1642 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1643 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1644 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1642, $tmp1638, $tmp1643);
frost$core$Int64 $tmp1645 = $tmp1644.min;
*(&local30) = $tmp1645;
frost$core$Int64 $tmp1646 = $tmp1644.max;
frost$core$Bit $tmp1647 = $tmp1644.inclusive;
bool $tmp1648 = $tmp1647.value;
frost$core$Int64 $tmp1649 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1650 = $tmp1649.value;
frost$core$UInt64 $tmp1651 = (frost$core$UInt64) {((uint64_t) $tmp1650)};
if ($tmp1648) goto block160; else goto block161;
block160:;
int64_t $tmp1652 = $tmp1645.value;
int64_t $tmp1653 = $tmp1646.value;
bool $tmp1654 = $tmp1652 <= $tmp1653;
frost$core$Bit $tmp1655 = (frost$core$Bit) {$tmp1654};
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block157; else goto block158;
block161:;
int64_t $tmp1657 = $tmp1645.value;
int64_t $tmp1658 = $tmp1646.value;
bool $tmp1659 = $tmp1657 < $tmp1658;
frost$core$Bit $tmp1660 = (frost$core$Bit) {$tmp1659};
bool $tmp1661 = $tmp1660.value;
if ($tmp1661) goto block157; else goto block158;
block157:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp1662 = *(&local29);
frost$core$Int64 $tmp1663 = *(&local30);
int64_t $tmp1664 = $tmp1663.value;
$tmp1662[$tmp1664] = $tmp1639;
frost$core$Int64 $tmp1665 = *(&local30);
int64_t $tmp1666 = $tmp1646.value;
int64_t $tmp1667 = $tmp1665.value;
int64_t $tmp1668 = $tmp1666 - $tmp1667;
frost$core$Int64 $tmp1669 = (frost$core$Int64) {$tmp1668};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1670 = $tmp1669.value;
frost$core$UInt64 $tmp1671 = (frost$core$UInt64) {((uint64_t) $tmp1670)};
if ($tmp1648) goto block164; else goto block165;
block164:;
uint64_t $tmp1672 = $tmp1671.value;
uint64_t $tmp1673 = $tmp1651.value;
bool $tmp1674 = $tmp1672 >= $tmp1673;
frost$core$Bit $tmp1675 = (frost$core$Bit) {$tmp1674};
bool $tmp1676 = $tmp1675.value;
if ($tmp1676) goto block162; else goto block158;
block165:;
uint64_t $tmp1677 = $tmp1671.value;
uint64_t $tmp1678 = $tmp1651.value;
bool $tmp1679 = $tmp1677 > $tmp1678;
frost$core$Bit $tmp1680 = (frost$core$Bit) {$tmp1679};
bool $tmp1681 = $tmp1680.value;
if ($tmp1681) goto block162; else goto block158;
block162:;
int64_t $tmp1682 = $tmp1665.value;
int64_t $tmp1683 = $tmp1649.value;
int64_t $tmp1684 = $tmp1682 + $tmp1683;
frost$core$Int64 $tmp1685 = (frost$core$Int64) {$tmp1684};
*(&local30) = $tmp1685;
goto block157;
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp1686 = *(&local29);
int64_t $tmp1687 = $tmp1637.value;
$tmp1636[$tmp1687] = $tmp1686;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:171
frost$core$Int64** $tmp1688 = *(&local0);
frost$core$Int64 $tmp1689 = (frost$core$Int64) {98u};
int64_t $tmp1690 = $tmp1689.value;
frost$core$Int64* $tmp1691 = $tmp1688[$tmp1690];
frost$core$Int64 $tmp1692 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp1693 = (frost$core$Int64) {3u};
int64_t $tmp1694 = $tmp1692.value;
$tmp1691[$tmp1694] = $tmp1693;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:172
frost$core$Int64** $tmp1695 = *(&local0);
frost$core$Int64 $tmp1696 = (frost$core$Int64) {98u};
int64_t $tmp1697 = $tmp1696.value;
frost$core$Int64* $tmp1698 = $tmp1695[$tmp1697];
frost$core$Int64 $tmp1699 = (frost$core$Int64) {5u};
frost$core$Int64 $tmp1700 = (frost$core$Int64) {3u};
int64_t $tmp1701 = $tmp1699.value;
$tmp1698[$tmp1701] = $tmp1700;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:173
frost$core$Int64** $tmp1702 = *(&local0);
frost$core$Int64 $tmp1703 = (frost$core$Int64) {99u};
frost$core$Int64** $tmp1704 = *(&local0);
frost$core$Int64 $tmp1705 = (frost$core$Int64) {0u};
int64_t $tmp1706 = $tmp1705.value;
frost$core$Int64* $tmp1707 = $tmp1704[$tmp1706];
int64_t $tmp1708 = $tmp1703.value;
$tmp1702[$tmp1708] = $tmp1707;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:174
frost$core$Int64** $tmp1709 = *(&local0);
frost$core$Int64 $tmp1710 = (frost$core$Int64) {100u};
frost$core$Int64** $tmp1711 = *(&local0);
frost$core$Int64 $tmp1712 = (frost$core$Int64) {0u};
int64_t $tmp1713 = $tmp1712.value;
frost$core$Int64* $tmp1714 = $tmp1711[$tmp1713];
int64_t $tmp1715 = $tmp1710.value;
$tmp1709[$tmp1715] = $tmp1714;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:175
frost$core$Int64** $tmp1716 = *(&local0);
frost$core$Int64 $tmp1717 = (frost$core$Int64) {101u};
frost$core$Int64 $tmp1718 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp1719 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:175:29
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp1720 = $tmp1718.value;
frost$core$Int64* $tmp1721 = ((frost$core$Int64*) frostAlloc($tmp1720 * 8));
*(&local31) = $tmp1721;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp1722 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1723 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1724 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1722, $tmp1718, $tmp1723);
frost$core$Int64 $tmp1725 = $tmp1724.min;
*(&local32) = $tmp1725;
frost$core$Int64 $tmp1726 = $tmp1724.max;
frost$core$Bit $tmp1727 = $tmp1724.inclusive;
bool $tmp1728 = $tmp1727.value;
frost$core$Int64 $tmp1729 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1730 = $tmp1729.value;
frost$core$UInt64 $tmp1731 = (frost$core$UInt64) {((uint64_t) $tmp1730)};
if ($tmp1728) goto block171; else goto block172;
block171:;
int64_t $tmp1732 = $tmp1725.value;
int64_t $tmp1733 = $tmp1726.value;
bool $tmp1734 = $tmp1732 <= $tmp1733;
frost$core$Bit $tmp1735 = (frost$core$Bit) {$tmp1734};
bool $tmp1736 = $tmp1735.value;
if ($tmp1736) goto block168; else goto block169;
block172:;
int64_t $tmp1737 = $tmp1725.value;
int64_t $tmp1738 = $tmp1726.value;
bool $tmp1739 = $tmp1737 < $tmp1738;
frost$core$Bit $tmp1740 = (frost$core$Bit) {$tmp1739};
bool $tmp1741 = $tmp1740.value;
if ($tmp1741) goto block168; else goto block169;
block168:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp1742 = *(&local31);
frost$core$Int64 $tmp1743 = *(&local32);
int64_t $tmp1744 = $tmp1743.value;
$tmp1742[$tmp1744] = $tmp1719;
frost$core$Int64 $tmp1745 = *(&local32);
int64_t $tmp1746 = $tmp1726.value;
int64_t $tmp1747 = $tmp1745.value;
int64_t $tmp1748 = $tmp1746 - $tmp1747;
frost$core$Int64 $tmp1749 = (frost$core$Int64) {$tmp1748};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1750 = $tmp1749.value;
frost$core$UInt64 $tmp1751 = (frost$core$UInt64) {((uint64_t) $tmp1750)};
if ($tmp1728) goto block175; else goto block176;
block175:;
uint64_t $tmp1752 = $tmp1751.value;
uint64_t $tmp1753 = $tmp1731.value;
bool $tmp1754 = $tmp1752 >= $tmp1753;
frost$core$Bit $tmp1755 = (frost$core$Bit) {$tmp1754};
bool $tmp1756 = $tmp1755.value;
if ($tmp1756) goto block173; else goto block169;
block176:;
uint64_t $tmp1757 = $tmp1751.value;
uint64_t $tmp1758 = $tmp1731.value;
bool $tmp1759 = $tmp1757 > $tmp1758;
frost$core$Bit $tmp1760 = (frost$core$Bit) {$tmp1759};
bool $tmp1761 = $tmp1760.value;
if ($tmp1761) goto block173; else goto block169;
block173:;
int64_t $tmp1762 = $tmp1745.value;
int64_t $tmp1763 = $tmp1729.value;
int64_t $tmp1764 = $tmp1762 + $tmp1763;
frost$core$Int64 $tmp1765 = (frost$core$Int64) {$tmp1764};
*(&local32) = $tmp1765;
goto block168;
block169:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp1766 = *(&local31);
int64_t $tmp1767 = $tmp1717.value;
$tmp1716[$tmp1767] = $tmp1766;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:176
frost$core$Int64** $tmp1768 = *(&local0);
frost$core$Int64 $tmp1769 = (frost$core$Int64) {101u};
int64_t $tmp1770 = $tmp1769.value;
frost$core$Int64* $tmp1771 = $tmp1768[$tmp1770];
frost$core$Int64 $tmp1772 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp1773 = (frost$core$Int64) {3u};
int64_t $tmp1774 = $tmp1772.value;
$tmp1771[$tmp1774] = $tmp1773;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:177
frost$core$Int64** $tmp1775 = *(&local0);
frost$core$Int64 $tmp1776 = (frost$core$Int64) {101u};
int64_t $tmp1777 = $tmp1776.value;
frost$core$Int64* $tmp1778 = $tmp1775[$tmp1777];
frost$core$Int64 $tmp1779 = (frost$core$Int64) {9u};
frost$core$Int64 $tmp1780 = (frost$core$Int64) {10u};
int64_t $tmp1781 = $tmp1779.value;
$tmp1778[$tmp1781] = $tmp1780;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:178
frost$core$Int64** $tmp1782 = *(&local0);
frost$core$Int64 $tmp1783 = (frost$core$Int64) {101u};
int64_t $tmp1784 = $tmp1783.value;
frost$core$Int64* $tmp1785 = $tmp1782[$tmp1784];
frost$core$Int64 $tmp1786 = (frost$core$Int64) {19u};
frost$core$Int64 $tmp1787 = (frost$core$Int64) {20u};
int64_t $tmp1788 = $tmp1786.value;
$tmp1785[$tmp1788] = $tmp1787;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:179
frost$core$Int64** $tmp1789 = *(&local0);
frost$core$Int64 $tmp1790 = (frost$core$Int64) {101u};
int64_t $tmp1791 = $tmp1790.value;
frost$core$Int64* $tmp1792 = $tmp1789[$tmp1791];
frost$core$Int64 $tmp1793 = (frost$core$Int64) {27u};
frost$core$Int64 $tmp1794 = (frost$core$Int64) {28u};
int64_t $tmp1795 = $tmp1793.value;
$tmp1792[$tmp1795] = $tmp1794;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:180
frost$core$Int64** $tmp1796 = *(&local0);
frost$core$Int64 $tmp1797 = (frost$core$Int64) {102u};
frost$core$Int64 $tmp1798 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp1799 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:180:29
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp1800 = $tmp1798.value;
frost$core$Int64* $tmp1801 = ((frost$core$Int64*) frostAlloc($tmp1800 * 8));
*(&local33) = $tmp1801;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp1802 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1803 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1804 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1802, $tmp1798, $tmp1803);
frost$core$Int64 $tmp1805 = $tmp1804.min;
*(&local34) = $tmp1805;
frost$core$Int64 $tmp1806 = $tmp1804.max;
frost$core$Bit $tmp1807 = $tmp1804.inclusive;
bool $tmp1808 = $tmp1807.value;
frost$core$Int64 $tmp1809 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1810 = $tmp1809.value;
frost$core$UInt64 $tmp1811 = (frost$core$UInt64) {((uint64_t) $tmp1810)};
if ($tmp1808) goto block182; else goto block183;
block182:;
int64_t $tmp1812 = $tmp1805.value;
int64_t $tmp1813 = $tmp1806.value;
bool $tmp1814 = $tmp1812 <= $tmp1813;
frost$core$Bit $tmp1815 = (frost$core$Bit) {$tmp1814};
bool $tmp1816 = $tmp1815.value;
if ($tmp1816) goto block179; else goto block180;
block183:;
int64_t $tmp1817 = $tmp1805.value;
int64_t $tmp1818 = $tmp1806.value;
bool $tmp1819 = $tmp1817 < $tmp1818;
frost$core$Bit $tmp1820 = (frost$core$Bit) {$tmp1819};
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block179; else goto block180;
block179:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp1822 = *(&local33);
frost$core$Int64 $tmp1823 = *(&local34);
int64_t $tmp1824 = $tmp1823.value;
$tmp1822[$tmp1824] = $tmp1799;
frost$core$Int64 $tmp1825 = *(&local34);
int64_t $tmp1826 = $tmp1806.value;
int64_t $tmp1827 = $tmp1825.value;
int64_t $tmp1828 = $tmp1826 - $tmp1827;
frost$core$Int64 $tmp1829 = (frost$core$Int64) {$tmp1828};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1830 = $tmp1829.value;
frost$core$UInt64 $tmp1831 = (frost$core$UInt64) {((uint64_t) $tmp1830)};
if ($tmp1808) goto block186; else goto block187;
block186:;
uint64_t $tmp1832 = $tmp1831.value;
uint64_t $tmp1833 = $tmp1811.value;
bool $tmp1834 = $tmp1832 >= $tmp1833;
frost$core$Bit $tmp1835 = (frost$core$Bit) {$tmp1834};
bool $tmp1836 = $tmp1835.value;
if ($tmp1836) goto block184; else goto block180;
block187:;
uint64_t $tmp1837 = $tmp1831.value;
uint64_t $tmp1838 = $tmp1811.value;
bool $tmp1839 = $tmp1837 > $tmp1838;
frost$core$Bit $tmp1840 = (frost$core$Bit) {$tmp1839};
bool $tmp1841 = $tmp1840.value;
if ($tmp1841) goto block184; else goto block180;
block184:;
int64_t $tmp1842 = $tmp1825.value;
int64_t $tmp1843 = $tmp1809.value;
int64_t $tmp1844 = $tmp1842 + $tmp1843;
frost$core$Int64 $tmp1845 = (frost$core$Int64) {$tmp1844};
*(&local34) = $tmp1845;
goto block179;
block180:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp1846 = *(&local33);
int64_t $tmp1847 = $tmp1797.value;
$tmp1796[$tmp1847] = $tmp1846;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:181
frost$core$Int64** $tmp1848 = *(&local0);
frost$core$Int64 $tmp1849 = (frost$core$Int64) {102u};
int64_t $tmp1850 = $tmp1849.value;
frost$core$Int64* $tmp1851 = $tmp1848[$tmp1850];
frost$core$Int64 $tmp1852 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1853 = (frost$core$Int64) {16u};
int64_t $tmp1854 = $tmp1852.value;
$tmp1851[$tmp1854] = $tmp1853;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:182
frost$core$Int64** $tmp1855 = *(&local0);
frost$core$Int64 $tmp1856 = (frost$core$Int64) {102u};
int64_t $tmp1857 = $tmp1856.value;
frost$core$Int64* $tmp1858 = $tmp1855[$tmp1857];
frost$core$Int64 $tmp1859 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp1860 = (frost$core$Int64) {3u};
int64_t $tmp1861 = $tmp1859.value;
$tmp1858[$tmp1861] = $tmp1860;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:183
frost$core$Int64** $tmp1862 = *(&local0);
frost$core$Int64 $tmp1863 = (frost$core$Int64) {102u};
int64_t $tmp1864 = $tmp1863.value;
frost$core$Int64* $tmp1865 = $tmp1862[$tmp1864];
frost$core$Int64 $tmp1866 = (frost$core$Int64) {5u};
frost$core$Int64 $tmp1867 = (frost$core$Int64) {3u};
int64_t $tmp1868 = $tmp1866.value;
$tmp1865[$tmp1868] = $tmp1867;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:184
frost$core$Int64** $tmp1869 = *(&local0);
frost$core$Int64 $tmp1870 = (frost$core$Int64) {103u};
frost$core$Int64** $tmp1871 = *(&local0);
frost$core$Int64 $tmp1872 = (frost$core$Int64) {0u};
int64_t $tmp1873 = $tmp1872.value;
frost$core$Int64* $tmp1874 = $tmp1871[$tmp1873];
int64_t $tmp1875 = $tmp1870.value;
$tmp1869[$tmp1875] = $tmp1874;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:185
frost$core$Int64** $tmp1876 = *(&local0);
frost$core$Int64 $tmp1877 = (frost$core$Int64) {104u};
frost$core$Int64** $tmp1878 = *(&local0);
frost$core$Int64 $tmp1879 = (frost$core$Int64) {0u};
int64_t $tmp1880 = $tmp1879.value;
frost$core$Int64* $tmp1881 = $tmp1878[$tmp1880];
int64_t $tmp1882 = $tmp1877.value;
$tmp1876[$tmp1882] = $tmp1881;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:186
frost$core$Int64** $tmp1883 = *(&local0);
frost$core$Int64 $tmp1884 = (frost$core$Int64) {105u};
frost$core$Int64** $tmp1885 = *(&local0);
frost$core$Int64 $tmp1886 = (frost$core$Int64) {0u};
int64_t $tmp1887 = $tmp1886.value;
frost$core$Int64* $tmp1888 = $tmp1885[$tmp1887];
int64_t $tmp1889 = $tmp1884.value;
$tmp1883[$tmp1889] = $tmp1888;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:187
frost$core$Int64** $tmp1890 = *(&local0);
frost$core$Int64 $tmp1891 = (frost$core$Int64) {106u};
frost$core$Int64** $tmp1892 = *(&local0);
frost$core$Int64 $tmp1893 = (frost$core$Int64) {0u};
int64_t $tmp1894 = $tmp1893.value;
frost$core$Int64* $tmp1895 = $tmp1892[$tmp1894];
int64_t $tmp1896 = $tmp1891.value;
$tmp1890[$tmp1896] = $tmp1895;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:188
frost$core$Int64** $tmp1897 = *(&local0);
frost$core$Int64 $tmp1898 = (frost$core$Int64) {107u};
frost$core$Int64** $tmp1899 = *(&local0);
frost$core$Int64 $tmp1900 = (frost$core$Int64) {0u};
int64_t $tmp1901 = $tmp1900.value;
frost$core$Int64* $tmp1902 = $tmp1899[$tmp1901];
int64_t $tmp1903 = $tmp1898.value;
$tmp1897[$tmp1903] = $tmp1902;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:189
frost$core$Int64** $tmp1904 = *(&local0);
frost$core$Int64 $tmp1905 = (frost$core$Int64) {108u};
frost$core$Int64 $tmp1906 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp1907 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:189:29
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp1908 = $tmp1906.value;
frost$core$Int64* $tmp1909 = ((frost$core$Int64*) frostAlloc($tmp1908 * 8));
*(&local35) = $tmp1909;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp1910 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1911 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1912 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1910, $tmp1906, $tmp1911);
frost$core$Int64 $tmp1913 = $tmp1912.min;
*(&local36) = $tmp1913;
frost$core$Int64 $tmp1914 = $tmp1912.max;
frost$core$Bit $tmp1915 = $tmp1912.inclusive;
bool $tmp1916 = $tmp1915.value;
frost$core$Int64 $tmp1917 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1918 = $tmp1917.value;
frost$core$UInt64 $tmp1919 = (frost$core$UInt64) {((uint64_t) $tmp1918)};
if ($tmp1916) goto block193; else goto block194;
block193:;
int64_t $tmp1920 = $tmp1913.value;
int64_t $tmp1921 = $tmp1914.value;
bool $tmp1922 = $tmp1920 <= $tmp1921;
frost$core$Bit $tmp1923 = (frost$core$Bit) {$tmp1922};
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block190; else goto block191;
block194:;
int64_t $tmp1925 = $tmp1913.value;
int64_t $tmp1926 = $tmp1914.value;
bool $tmp1927 = $tmp1925 < $tmp1926;
frost$core$Bit $tmp1928 = (frost$core$Bit) {$tmp1927};
bool $tmp1929 = $tmp1928.value;
if ($tmp1929) goto block190; else goto block191;
block190:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp1930 = *(&local35);
frost$core$Int64 $tmp1931 = *(&local36);
int64_t $tmp1932 = $tmp1931.value;
$tmp1930[$tmp1932] = $tmp1907;
frost$core$Int64 $tmp1933 = *(&local36);
int64_t $tmp1934 = $tmp1914.value;
int64_t $tmp1935 = $tmp1933.value;
int64_t $tmp1936 = $tmp1934 - $tmp1935;
frost$core$Int64 $tmp1937 = (frost$core$Int64) {$tmp1936};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1938 = $tmp1937.value;
frost$core$UInt64 $tmp1939 = (frost$core$UInt64) {((uint64_t) $tmp1938)};
if ($tmp1916) goto block197; else goto block198;
block197:;
uint64_t $tmp1940 = $tmp1939.value;
uint64_t $tmp1941 = $tmp1919.value;
bool $tmp1942 = $tmp1940 >= $tmp1941;
frost$core$Bit $tmp1943 = (frost$core$Bit) {$tmp1942};
bool $tmp1944 = $tmp1943.value;
if ($tmp1944) goto block195; else goto block191;
block198:;
uint64_t $tmp1945 = $tmp1939.value;
uint64_t $tmp1946 = $tmp1919.value;
bool $tmp1947 = $tmp1945 > $tmp1946;
frost$core$Bit $tmp1948 = (frost$core$Bit) {$tmp1947};
bool $tmp1949 = $tmp1948.value;
if ($tmp1949) goto block195; else goto block191;
block195:;
int64_t $tmp1950 = $tmp1933.value;
int64_t $tmp1951 = $tmp1917.value;
int64_t $tmp1952 = $tmp1950 + $tmp1951;
frost$core$Int64 $tmp1953 = (frost$core$Int64) {$tmp1952};
*(&local36) = $tmp1953;
goto block190;
block191:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp1954 = *(&local35);
int64_t $tmp1955 = $tmp1905.value;
$tmp1904[$tmp1955] = $tmp1954;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:190
frost$core$Int64** $tmp1956 = *(&local0);
frost$core$Int64 $tmp1957 = (frost$core$Int64) {108u};
int64_t $tmp1958 = $tmp1957.value;
frost$core$Int64* $tmp1959 = $tmp1956[$tmp1958];
frost$core$Int64 $tmp1960 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp1961 = (frost$core$Int64) {3u};
int64_t $tmp1962 = $tmp1960.value;
$tmp1959[$tmp1962] = $tmp1961;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:191
frost$core$Int64** $tmp1963 = *(&local0);
frost$core$Int64 $tmp1964 = (frost$core$Int64) {108u};
int64_t $tmp1965 = $tmp1964.value;
frost$core$Int64* $tmp1966 = $tmp1963[$tmp1965];
frost$core$Int64 $tmp1967 = (frost$core$Int64) {17u};
frost$core$Int64 $tmp1968 = (frost$core$Int64) {18u};
int64_t $tmp1969 = $tmp1967.value;
$tmp1966[$tmp1969] = $tmp1968;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:192
frost$core$Int64** $tmp1970 = *(&local0);
frost$core$Int64 $tmp1971 = (frost$core$Int64) {108u};
int64_t $tmp1972 = $tmp1971.value;
frost$core$Int64* $tmp1973 = $tmp1970[$tmp1972];
frost$core$Int64 $tmp1974 = (frost$core$Int64) {22u};
frost$core$Int64 $tmp1975 = (frost$core$Int64) {23u};
int64_t $tmp1976 = $tmp1974.value;
$tmp1973[$tmp1976] = $tmp1975;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:193
frost$core$Int64** $tmp1977 = *(&local0);
frost$core$Int64 $tmp1978 = (frost$core$Int64) {108u};
int64_t $tmp1979 = $tmp1978.value;
frost$core$Int64* $tmp1980 = $tmp1977[$tmp1979];
frost$core$Int64 $tmp1981 = (frost$core$Int64) {23u};
frost$core$Int64 $tmp1982 = (frost$core$Int64) {24u};
int64_t $tmp1983 = $tmp1981.value;
$tmp1980[$tmp1983] = $tmp1982;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:194
frost$core$Int64** $tmp1984 = *(&local0);
frost$core$Int64 $tmp1985 = (frost$core$Int64) {109u};
frost$core$Int64** $tmp1986 = *(&local0);
frost$core$Int64 $tmp1987 = (frost$core$Int64) {0u};
int64_t $tmp1988 = $tmp1987.value;
frost$core$Int64* $tmp1989 = $tmp1986[$tmp1988];
int64_t $tmp1990 = $tmp1985.value;
$tmp1984[$tmp1990] = $tmp1989;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:195
frost$core$Int64** $tmp1991 = *(&local0);
frost$core$Int64 $tmp1992 = (frost$core$Int64) {110u};
frost$core$Int64 $tmp1993 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp1994 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:195:29
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp1995 = $tmp1993.value;
frost$core$Int64* $tmp1996 = ((frost$core$Int64*) frostAlloc($tmp1995 * 8));
*(&local37) = $tmp1996;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp1997 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1998 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1999 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1997, $tmp1993, $tmp1998);
frost$core$Int64 $tmp2000 = $tmp1999.min;
*(&local38) = $tmp2000;
frost$core$Int64 $tmp2001 = $tmp1999.max;
frost$core$Bit $tmp2002 = $tmp1999.inclusive;
bool $tmp2003 = $tmp2002.value;
frost$core$Int64 $tmp2004 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2005 = $tmp2004.value;
frost$core$UInt64 $tmp2006 = (frost$core$UInt64) {((uint64_t) $tmp2005)};
if ($tmp2003) goto block204; else goto block205;
block204:;
int64_t $tmp2007 = $tmp2000.value;
int64_t $tmp2008 = $tmp2001.value;
bool $tmp2009 = $tmp2007 <= $tmp2008;
frost$core$Bit $tmp2010 = (frost$core$Bit) {$tmp2009};
bool $tmp2011 = $tmp2010.value;
if ($tmp2011) goto block201; else goto block202;
block205:;
int64_t $tmp2012 = $tmp2000.value;
int64_t $tmp2013 = $tmp2001.value;
bool $tmp2014 = $tmp2012 < $tmp2013;
frost$core$Bit $tmp2015 = (frost$core$Bit) {$tmp2014};
bool $tmp2016 = $tmp2015.value;
if ($tmp2016) goto block201; else goto block202;
block201:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp2017 = *(&local37);
frost$core$Int64 $tmp2018 = *(&local38);
int64_t $tmp2019 = $tmp2018.value;
$tmp2017[$tmp2019] = $tmp1994;
frost$core$Int64 $tmp2020 = *(&local38);
int64_t $tmp2021 = $tmp2001.value;
int64_t $tmp2022 = $tmp2020.value;
int64_t $tmp2023 = $tmp2021 - $tmp2022;
frost$core$Int64 $tmp2024 = (frost$core$Int64) {$tmp2023};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2025 = $tmp2024.value;
frost$core$UInt64 $tmp2026 = (frost$core$UInt64) {((uint64_t) $tmp2025)};
if ($tmp2003) goto block208; else goto block209;
block208:;
uint64_t $tmp2027 = $tmp2026.value;
uint64_t $tmp2028 = $tmp2006.value;
bool $tmp2029 = $tmp2027 >= $tmp2028;
frost$core$Bit $tmp2030 = (frost$core$Bit) {$tmp2029};
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block206; else goto block202;
block209:;
uint64_t $tmp2032 = $tmp2026.value;
uint64_t $tmp2033 = $tmp2006.value;
bool $tmp2034 = $tmp2032 > $tmp2033;
frost$core$Bit $tmp2035 = (frost$core$Bit) {$tmp2034};
bool $tmp2036 = $tmp2035.value;
if ($tmp2036) goto block206; else goto block202;
block206:;
int64_t $tmp2037 = $tmp2020.value;
int64_t $tmp2038 = $tmp2004.value;
int64_t $tmp2039 = $tmp2037 + $tmp2038;
frost$core$Int64 $tmp2040 = (frost$core$Int64) {$tmp2039};
*(&local38) = $tmp2040;
goto block201;
block202:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp2041 = *(&local37);
int64_t $tmp2042 = $tmp1992.value;
$tmp1991[$tmp2042] = $tmp2041;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:196
frost$core$Int64** $tmp2043 = *(&local0);
frost$core$Int64 $tmp2044 = (frost$core$Int64) {110u};
int64_t $tmp2045 = $tmp2044.value;
frost$core$Int64* $tmp2046 = $tmp2043[$tmp2045];
frost$core$Int64 $tmp2047 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp2048 = (frost$core$Int64) {21u};
int64_t $tmp2049 = $tmp2047.value;
$tmp2046[$tmp2049] = $tmp2048;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:197
frost$core$Int64** $tmp2050 = *(&local0);
frost$core$Int64 $tmp2051 = (frost$core$Int64) {110u};
int64_t $tmp2052 = $tmp2051.value;
frost$core$Int64* $tmp2053 = $tmp2050[$tmp2052];
frost$core$Int64 $tmp2054 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp2055 = (frost$core$Int64) {3u};
int64_t $tmp2056 = $tmp2054.value;
$tmp2053[$tmp2056] = $tmp2055;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:198
frost$core$Int64** $tmp2057 = *(&local0);
frost$core$Int64 $tmp2058 = (frost$core$Int64) {110u};
int64_t $tmp2059 = $tmp2058.value;
frost$core$Int64* $tmp2060 = $tmp2057[$tmp2059];
frost$core$Int64 $tmp2061 = (frost$core$Int64) {5u};
frost$core$Int64 $tmp2062 = (frost$core$Int64) {3u};
int64_t $tmp2063 = $tmp2061.value;
$tmp2060[$tmp2063] = $tmp2062;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:199
frost$core$Int64** $tmp2064 = *(&local0);
frost$core$Int64 $tmp2065 = (frost$core$Int64) {111u};
frost$core$Int64** $tmp2066 = *(&local0);
frost$core$Int64 $tmp2067 = (frost$core$Int64) {0u};
int64_t $tmp2068 = $tmp2067.value;
frost$core$Int64* $tmp2069 = $tmp2066[$tmp2068];
int64_t $tmp2070 = $tmp2065.value;
$tmp2064[$tmp2070] = $tmp2069;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:200
frost$core$Int64** $tmp2071 = *(&local0);
frost$core$Int64 $tmp2072 = (frost$core$Int64) {112u};
frost$core$Int64** $tmp2073 = *(&local0);
frost$core$Int64 $tmp2074 = (frost$core$Int64) {0u};
int64_t $tmp2075 = $tmp2074.value;
frost$core$Int64* $tmp2076 = $tmp2073[$tmp2075];
int64_t $tmp2077 = $tmp2072.value;
$tmp2071[$tmp2077] = $tmp2076;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:201
frost$core$Int64** $tmp2078 = *(&local0);
frost$core$Int64 $tmp2079 = (frost$core$Int64) {113u};
frost$core$Int64** $tmp2080 = *(&local0);
frost$core$Int64 $tmp2081 = (frost$core$Int64) {0u};
int64_t $tmp2082 = $tmp2081.value;
frost$core$Int64* $tmp2083 = $tmp2080[$tmp2082];
int64_t $tmp2084 = $tmp2079.value;
$tmp2078[$tmp2084] = $tmp2083;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:202
frost$core$Int64** $tmp2085 = *(&local0);
frost$core$Int64 $tmp2086 = (frost$core$Int64) {114u};
frost$core$Int64 $tmp2087 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp2088 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:202:29
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp2089 = $tmp2087.value;
frost$core$Int64* $tmp2090 = ((frost$core$Int64*) frostAlloc($tmp2089 * 8));
*(&local39) = $tmp2090;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp2091 = (frost$core$Int64) {0u};
frost$core$Bit $tmp2092 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2093 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2091, $tmp2087, $tmp2092);
frost$core$Int64 $tmp2094 = $tmp2093.min;
*(&local40) = $tmp2094;
frost$core$Int64 $tmp2095 = $tmp2093.max;
frost$core$Bit $tmp2096 = $tmp2093.inclusive;
bool $tmp2097 = $tmp2096.value;
frost$core$Int64 $tmp2098 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2099 = $tmp2098.value;
frost$core$UInt64 $tmp2100 = (frost$core$UInt64) {((uint64_t) $tmp2099)};
if ($tmp2097) goto block215; else goto block216;
block215:;
int64_t $tmp2101 = $tmp2094.value;
int64_t $tmp2102 = $tmp2095.value;
bool $tmp2103 = $tmp2101 <= $tmp2102;
frost$core$Bit $tmp2104 = (frost$core$Bit) {$tmp2103};
bool $tmp2105 = $tmp2104.value;
if ($tmp2105) goto block212; else goto block213;
block216:;
int64_t $tmp2106 = $tmp2094.value;
int64_t $tmp2107 = $tmp2095.value;
bool $tmp2108 = $tmp2106 < $tmp2107;
frost$core$Bit $tmp2109 = (frost$core$Bit) {$tmp2108};
bool $tmp2110 = $tmp2109.value;
if ($tmp2110) goto block212; else goto block213;
block212:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp2111 = *(&local39);
frost$core$Int64 $tmp2112 = *(&local40);
int64_t $tmp2113 = $tmp2112.value;
$tmp2111[$tmp2113] = $tmp2088;
frost$core$Int64 $tmp2114 = *(&local40);
int64_t $tmp2115 = $tmp2095.value;
int64_t $tmp2116 = $tmp2114.value;
int64_t $tmp2117 = $tmp2115 - $tmp2116;
frost$core$Int64 $tmp2118 = (frost$core$Int64) {$tmp2117};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2119 = $tmp2118.value;
frost$core$UInt64 $tmp2120 = (frost$core$UInt64) {((uint64_t) $tmp2119)};
if ($tmp2097) goto block219; else goto block220;
block219:;
uint64_t $tmp2121 = $tmp2120.value;
uint64_t $tmp2122 = $tmp2100.value;
bool $tmp2123 = $tmp2121 >= $tmp2122;
frost$core$Bit $tmp2124 = (frost$core$Bit) {$tmp2123};
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block217; else goto block213;
block220:;
uint64_t $tmp2126 = $tmp2120.value;
uint64_t $tmp2127 = $tmp2100.value;
bool $tmp2128 = $tmp2126 > $tmp2127;
frost$core$Bit $tmp2129 = (frost$core$Bit) {$tmp2128};
bool $tmp2130 = $tmp2129.value;
if ($tmp2130) goto block217; else goto block213;
block217:;
int64_t $tmp2131 = $tmp2114.value;
int64_t $tmp2132 = $tmp2098.value;
int64_t $tmp2133 = $tmp2131 + $tmp2132;
frost$core$Int64 $tmp2134 = (frost$core$Int64) {$tmp2133};
*(&local40) = $tmp2134;
goto block212;
block213:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp2135 = *(&local39);
int64_t $tmp2136 = $tmp2086.value;
$tmp2085[$tmp2136] = $tmp2135;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:203
frost$core$Int64** $tmp2137 = *(&local0);
frost$core$Int64 $tmp2138 = (frost$core$Int64) {114u};
int64_t $tmp2139 = $tmp2138.value;
frost$core$Int64* $tmp2140 = $tmp2137[$tmp2139];
frost$core$Int64 $tmp2141 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp2142 = (frost$core$Int64) {3u};
int64_t $tmp2143 = $tmp2141.value;
$tmp2140[$tmp2143] = $tmp2142;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:204
frost$core$Int64** $tmp2144 = *(&local0);
frost$core$Int64 $tmp2145 = (frost$core$Int64) {114u};
int64_t $tmp2146 = $tmp2145.value;
frost$core$Int64* $tmp2147 = $tmp2144[$tmp2146];
frost$core$Int64 $tmp2148 = (frost$core$Int64) {5u};
frost$core$Int64 $tmp2149 = (frost$core$Int64) {3u};
int64_t $tmp2150 = $tmp2148.value;
$tmp2147[$tmp2150] = $tmp2149;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:205
frost$core$Int64** $tmp2151 = *(&local0);
frost$core$Int64 $tmp2152 = (frost$core$Int64) {114u};
int64_t $tmp2153 = $tmp2152.value;
frost$core$Int64* $tmp2154 = $tmp2151[$tmp2153];
frost$core$Int64 $tmp2155 = (frost$core$Int64) {25u};
frost$core$Int64 $tmp2156 = (frost$core$Int64) {26u};
int64_t $tmp2157 = $tmp2155.value;
$tmp2154[$tmp2157] = $tmp2156;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:206
frost$core$Int64** $tmp2158 = *(&local0);
frost$core$Int64 $tmp2159 = (frost$core$Int64) {115u};
frost$core$Int64 $tmp2160 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp2161 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:206:29
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp2162 = $tmp2160.value;
frost$core$Int64* $tmp2163 = ((frost$core$Int64*) frostAlloc($tmp2162 * 8));
*(&local41) = $tmp2163;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp2164 = (frost$core$Int64) {0u};
frost$core$Bit $tmp2165 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2166 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2164, $tmp2160, $tmp2165);
frost$core$Int64 $tmp2167 = $tmp2166.min;
*(&local42) = $tmp2167;
frost$core$Int64 $tmp2168 = $tmp2166.max;
frost$core$Bit $tmp2169 = $tmp2166.inclusive;
bool $tmp2170 = $tmp2169.value;
frost$core$Int64 $tmp2171 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2172 = $tmp2171.value;
frost$core$UInt64 $tmp2173 = (frost$core$UInt64) {((uint64_t) $tmp2172)};
if ($tmp2170) goto block226; else goto block227;
block226:;
int64_t $tmp2174 = $tmp2167.value;
int64_t $tmp2175 = $tmp2168.value;
bool $tmp2176 = $tmp2174 <= $tmp2175;
frost$core$Bit $tmp2177 = (frost$core$Bit) {$tmp2176};
bool $tmp2178 = $tmp2177.value;
if ($tmp2178) goto block223; else goto block224;
block227:;
int64_t $tmp2179 = $tmp2167.value;
int64_t $tmp2180 = $tmp2168.value;
bool $tmp2181 = $tmp2179 < $tmp2180;
frost$core$Bit $tmp2182 = (frost$core$Bit) {$tmp2181};
bool $tmp2183 = $tmp2182.value;
if ($tmp2183) goto block223; else goto block224;
block223:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp2184 = *(&local41);
frost$core$Int64 $tmp2185 = *(&local42);
int64_t $tmp2186 = $tmp2185.value;
$tmp2184[$tmp2186] = $tmp2161;
frost$core$Int64 $tmp2187 = *(&local42);
int64_t $tmp2188 = $tmp2168.value;
int64_t $tmp2189 = $tmp2187.value;
int64_t $tmp2190 = $tmp2188 - $tmp2189;
frost$core$Int64 $tmp2191 = (frost$core$Int64) {$tmp2190};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2192 = $tmp2191.value;
frost$core$UInt64 $tmp2193 = (frost$core$UInt64) {((uint64_t) $tmp2192)};
if ($tmp2170) goto block230; else goto block231;
block230:;
uint64_t $tmp2194 = $tmp2193.value;
uint64_t $tmp2195 = $tmp2173.value;
bool $tmp2196 = $tmp2194 >= $tmp2195;
frost$core$Bit $tmp2197 = (frost$core$Bit) {$tmp2196};
bool $tmp2198 = $tmp2197.value;
if ($tmp2198) goto block228; else goto block224;
block231:;
uint64_t $tmp2199 = $tmp2193.value;
uint64_t $tmp2200 = $tmp2173.value;
bool $tmp2201 = $tmp2199 > $tmp2200;
frost$core$Bit $tmp2202 = (frost$core$Bit) {$tmp2201};
bool $tmp2203 = $tmp2202.value;
if ($tmp2203) goto block228; else goto block224;
block228:;
int64_t $tmp2204 = $tmp2187.value;
int64_t $tmp2205 = $tmp2171.value;
int64_t $tmp2206 = $tmp2204 + $tmp2205;
frost$core$Int64 $tmp2207 = (frost$core$Int64) {$tmp2206};
*(&local42) = $tmp2207;
goto block223;
block224:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp2208 = *(&local41);
int64_t $tmp2209 = $tmp2159.value;
$tmp2158[$tmp2209] = $tmp2208;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:207
frost$core$Int64** $tmp2210 = *(&local0);
frost$core$Int64 $tmp2211 = (frost$core$Int64) {115u};
int64_t $tmp2212 = $tmp2211.value;
frost$core$Int64* $tmp2213 = $tmp2210[$tmp2212];
frost$core$Int64 $tmp2214 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp2215 = (frost$core$Int64) {3u};
int64_t $tmp2216 = $tmp2214.value;
$tmp2213[$tmp2216] = $tmp2215;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:208
frost$core$Int64** $tmp2217 = *(&local0);
frost$core$Int64 $tmp2218 = (frost$core$Int64) {115u};
int64_t $tmp2219 = $tmp2218.value;
frost$core$Int64* $tmp2220 = $tmp2217[$tmp2219];
frost$core$Int64 $tmp2221 = (frost$core$Int64) {18u};
frost$core$Int64 $tmp2222 = (frost$core$Int64) {19u};
int64_t $tmp2223 = $tmp2221.value;
$tmp2220[$tmp2223] = $tmp2222;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:209
frost$core$Int64** $tmp2224 = *(&local0);
frost$core$Int64 $tmp2225 = (frost$core$Int64) {116u};
frost$core$Int64 $tmp2226 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp2227 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:209:29
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp2228 = $tmp2226.value;
frost$core$Int64* $tmp2229 = ((frost$core$Int64*) frostAlloc($tmp2228 * 8));
*(&local43) = $tmp2229;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp2230 = (frost$core$Int64) {0u};
frost$core$Bit $tmp2231 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2232 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2230, $tmp2226, $tmp2231);
frost$core$Int64 $tmp2233 = $tmp2232.min;
*(&local44) = $tmp2233;
frost$core$Int64 $tmp2234 = $tmp2232.max;
frost$core$Bit $tmp2235 = $tmp2232.inclusive;
bool $tmp2236 = $tmp2235.value;
frost$core$Int64 $tmp2237 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2238 = $tmp2237.value;
frost$core$UInt64 $tmp2239 = (frost$core$UInt64) {((uint64_t) $tmp2238)};
if ($tmp2236) goto block237; else goto block238;
block237:;
int64_t $tmp2240 = $tmp2233.value;
int64_t $tmp2241 = $tmp2234.value;
bool $tmp2242 = $tmp2240 <= $tmp2241;
frost$core$Bit $tmp2243 = (frost$core$Bit) {$tmp2242};
bool $tmp2244 = $tmp2243.value;
if ($tmp2244) goto block234; else goto block235;
block238:;
int64_t $tmp2245 = $tmp2233.value;
int64_t $tmp2246 = $tmp2234.value;
bool $tmp2247 = $tmp2245 < $tmp2246;
frost$core$Bit $tmp2248 = (frost$core$Bit) {$tmp2247};
bool $tmp2249 = $tmp2248.value;
if ($tmp2249) goto block234; else goto block235;
block234:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp2250 = *(&local43);
frost$core$Int64 $tmp2251 = *(&local44);
int64_t $tmp2252 = $tmp2251.value;
$tmp2250[$tmp2252] = $tmp2227;
frost$core$Int64 $tmp2253 = *(&local44);
int64_t $tmp2254 = $tmp2234.value;
int64_t $tmp2255 = $tmp2253.value;
int64_t $tmp2256 = $tmp2254 - $tmp2255;
frost$core$Int64 $tmp2257 = (frost$core$Int64) {$tmp2256};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2258 = $tmp2257.value;
frost$core$UInt64 $tmp2259 = (frost$core$UInt64) {((uint64_t) $tmp2258)};
if ($tmp2236) goto block241; else goto block242;
block241:;
uint64_t $tmp2260 = $tmp2259.value;
uint64_t $tmp2261 = $tmp2239.value;
bool $tmp2262 = $tmp2260 >= $tmp2261;
frost$core$Bit $tmp2263 = (frost$core$Bit) {$tmp2262};
bool $tmp2264 = $tmp2263.value;
if ($tmp2264) goto block239; else goto block235;
block242:;
uint64_t $tmp2265 = $tmp2259.value;
uint64_t $tmp2266 = $tmp2239.value;
bool $tmp2267 = $tmp2265 > $tmp2266;
frost$core$Bit $tmp2268 = (frost$core$Bit) {$tmp2267};
bool $tmp2269 = $tmp2268.value;
if ($tmp2269) goto block239; else goto block235;
block239:;
int64_t $tmp2270 = $tmp2253.value;
int64_t $tmp2271 = $tmp2237.value;
int64_t $tmp2272 = $tmp2270 + $tmp2271;
frost$core$Int64 $tmp2273 = (frost$core$Int64) {$tmp2272};
*(&local44) = $tmp2273;
goto block234;
block235:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp2274 = *(&local43);
int64_t $tmp2275 = $tmp2225.value;
$tmp2224[$tmp2275] = $tmp2274;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:210
frost$core$Int64** $tmp2276 = *(&local0);
frost$core$Int64 $tmp2277 = (frost$core$Int64) {116u};
int64_t $tmp2278 = $tmp2277.value;
frost$core$Int64* $tmp2279 = $tmp2276[$tmp2278];
frost$core$Int64 $tmp2280 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp2281 = (frost$core$Int64) {25u};
int64_t $tmp2282 = $tmp2280.value;
$tmp2279[$tmp2282] = $tmp2281;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:211
frost$core$Int64** $tmp2283 = *(&local0);
frost$core$Int64 $tmp2284 = (frost$core$Int64) {116u};
int64_t $tmp2285 = $tmp2284.value;
frost$core$Int64* $tmp2286 = $tmp2283[$tmp2285];
frost$core$Int64 $tmp2287 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp2288 = (frost$core$Int64) {3u};
int64_t $tmp2289 = $tmp2287.value;
$tmp2286[$tmp2289] = $tmp2288;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:212
frost$core$Int64** $tmp2290 = *(&local0);
frost$core$Int64 $tmp2291 = (frost$core$Int64) {116u};
int64_t $tmp2292 = $tmp2291.value;
frost$core$Int64* $tmp2293 = $tmp2290[$tmp2292];
frost$core$Int64 $tmp2294 = (frost$core$Int64) {5u};
frost$core$Int64 $tmp2295 = (frost$core$Int64) {3u};
int64_t $tmp2296 = $tmp2294.value;
$tmp2293[$tmp2296] = $tmp2295;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:213
frost$core$Int64** $tmp2297 = *(&local0);
frost$core$Int64 $tmp2298 = (frost$core$Int64) {117u};
frost$core$Int64 $tmp2299 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp2300 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:213:29
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp2301 = $tmp2299.value;
frost$core$Int64* $tmp2302 = ((frost$core$Int64*) frostAlloc($tmp2301 * 8));
*(&local45) = $tmp2302;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp2303 = (frost$core$Int64) {0u};
frost$core$Bit $tmp2304 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2305 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2303, $tmp2299, $tmp2304);
frost$core$Int64 $tmp2306 = $tmp2305.min;
*(&local46) = $tmp2306;
frost$core$Int64 $tmp2307 = $tmp2305.max;
frost$core$Bit $tmp2308 = $tmp2305.inclusive;
bool $tmp2309 = $tmp2308.value;
frost$core$Int64 $tmp2310 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2311 = $tmp2310.value;
frost$core$UInt64 $tmp2312 = (frost$core$UInt64) {((uint64_t) $tmp2311)};
if ($tmp2309) goto block248; else goto block249;
block248:;
int64_t $tmp2313 = $tmp2306.value;
int64_t $tmp2314 = $tmp2307.value;
bool $tmp2315 = $tmp2313 <= $tmp2314;
frost$core$Bit $tmp2316 = (frost$core$Bit) {$tmp2315};
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block245; else goto block246;
block249:;
int64_t $tmp2318 = $tmp2306.value;
int64_t $tmp2319 = $tmp2307.value;
bool $tmp2320 = $tmp2318 < $tmp2319;
frost$core$Bit $tmp2321 = (frost$core$Bit) {$tmp2320};
bool $tmp2322 = $tmp2321.value;
if ($tmp2322) goto block245; else goto block246;
block245:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp2323 = *(&local45);
frost$core$Int64 $tmp2324 = *(&local46);
int64_t $tmp2325 = $tmp2324.value;
$tmp2323[$tmp2325] = $tmp2300;
frost$core$Int64 $tmp2326 = *(&local46);
int64_t $tmp2327 = $tmp2307.value;
int64_t $tmp2328 = $tmp2326.value;
int64_t $tmp2329 = $tmp2327 - $tmp2328;
frost$core$Int64 $tmp2330 = (frost$core$Int64) {$tmp2329};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2331 = $tmp2330.value;
frost$core$UInt64 $tmp2332 = (frost$core$UInt64) {((uint64_t) $tmp2331)};
if ($tmp2309) goto block252; else goto block253;
block252:;
uint64_t $tmp2333 = $tmp2332.value;
uint64_t $tmp2334 = $tmp2312.value;
bool $tmp2335 = $tmp2333 >= $tmp2334;
frost$core$Bit $tmp2336 = (frost$core$Bit) {$tmp2335};
bool $tmp2337 = $tmp2336.value;
if ($tmp2337) goto block250; else goto block246;
block253:;
uint64_t $tmp2338 = $tmp2332.value;
uint64_t $tmp2339 = $tmp2312.value;
bool $tmp2340 = $tmp2338 > $tmp2339;
frost$core$Bit $tmp2341 = (frost$core$Bit) {$tmp2340};
bool $tmp2342 = $tmp2341.value;
if ($tmp2342) goto block250; else goto block246;
block250:;
int64_t $tmp2343 = $tmp2326.value;
int64_t $tmp2344 = $tmp2310.value;
int64_t $tmp2345 = $tmp2343 + $tmp2344;
frost$core$Int64 $tmp2346 = (frost$core$Int64) {$tmp2345};
*(&local46) = $tmp2346;
goto block245;
block246:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp2347 = *(&local45);
int64_t $tmp2348 = $tmp2298.value;
$tmp2297[$tmp2348] = $tmp2347;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:214
frost$core$Int64** $tmp2349 = *(&local0);
frost$core$Int64 $tmp2350 = (frost$core$Int64) {117u};
int64_t $tmp2351 = $tmp2350.value;
frost$core$Int64* $tmp2352 = $tmp2349[$tmp2351];
frost$core$Int64 $tmp2353 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp2354 = (frost$core$Int64) {3u};
int64_t $tmp2355 = $tmp2353.value;
$tmp2352[$tmp2355] = $tmp2354;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:215
frost$core$Int64** $tmp2356 = *(&local0);
frost$core$Int64 $tmp2357 = (frost$core$Int64) {117u};
int64_t $tmp2358 = $tmp2357.value;
frost$core$Int64* $tmp2359 = $tmp2356[$tmp2358];
frost$core$Int64 $tmp2360 = (frost$core$Int64) {21u};
frost$core$Int64 $tmp2361 = (frost$core$Int64) {22u};
int64_t $tmp2362 = $tmp2360.value;
$tmp2359[$tmp2362] = $tmp2361;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:216
frost$core$Int64** $tmp2363 = *(&local0);
frost$core$Int64 $tmp2364 = (frost$core$Int64) {117u};
int64_t $tmp2365 = $tmp2364.value;
frost$core$Int64* $tmp2366 = $tmp2363[$tmp2365];
frost$core$Int64 $tmp2367 = (frost$core$Int64) {26u};
frost$core$Int64 $tmp2368 = (frost$core$Int64) {27u};
int64_t $tmp2369 = $tmp2367.value;
$tmp2366[$tmp2369] = $tmp2368;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:217
frost$core$Int64** $tmp2370 = *(&local0);
frost$core$Int64 $tmp2371 = (frost$core$Int64) {118u};
frost$core$Int64** $tmp2372 = *(&local0);
frost$core$Int64 $tmp2373 = (frost$core$Int64) {0u};
int64_t $tmp2374 = $tmp2373.value;
frost$core$Int64* $tmp2375 = $tmp2372[$tmp2374];
int64_t $tmp2376 = $tmp2371.value;
$tmp2370[$tmp2376] = $tmp2375;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:218
frost$core$Int64** $tmp2377 = *(&local0);
frost$core$Int64 $tmp2378 = (frost$core$Int64) {119u};
frost$core$Int64** $tmp2379 = *(&local0);
frost$core$Int64 $tmp2380 = (frost$core$Int64) {0u};
int64_t $tmp2381 = $tmp2380.value;
frost$core$Int64* $tmp2382 = $tmp2379[$tmp2381];
int64_t $tmp2383 = $tmp2378.value;
$tmp2377[$tmp2383] = $tmp2382;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:219
frost$core$Int64** $tmp2384 = *(&local0);
frost$core$Int64 $tmp2385 = (frost$core$Int64) {120u};
frost$core$Int64** $tmp2386 = *(&local0);
frost$core$Int64 $tmp2387 = (frost$core$Int64) {0u};
int64_t $tmp2388 = $tmp2387.value;
frost$core$Int64* $tmp2389 = $tmp2386[$tmp2388];
int64_t $tmp2390 = $tmp2385.value;
$tmp2384[$tmp2390] = $tmp2389;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:220
frost$core$Int64** $tmp2391 = *(&local0);
frost$core$Int64 $tmp2392 = (frost$core$Int64) {121u};
frost$core$Int64** $tmp2393 = *(&local0);
frost$core$Int64 $tmp2394 = (frost$core$Int64) {0u};
int64_t $tmp2395 = $tmp2394.value;
frost$core$Int64* $tmp2396 = $tmp2393[$tmp2395];
int64_t $tmp2397 = $tmp2392.value;
$tmp2391[$tmp2397] = $tmp2396;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:221
frost$core$Int64** $tmp2398 = *(&local0);
frost$core$Int64 $tmp2399 = (frost$core$Int64) {122u};
frost$core$Int64** $tmp2400 = *(&local0);
frost$core$Int64 $tmp2401 = (frost$core$Int64) {0u};
int64_t $tmp2402 = $tmp2401.value;
frost$core$Int64* $tmp2403 = $tmp2400[$tmp2402];
int64_t $tmp2404 = $tmp2399.value;
$tmp2398[$tmp2404] = $tmp2403;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:222
frost$core$Int64** $tmp2405 = *(&local0);
frost$core$Int64 $tmp2406 = (frost$core$Int64) {123u};
frost$core$Int64 $tmp2407 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp2408 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:222:29
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp2409 = $tmp2407.value;
frost$core$Int64* $tmp2410 = ((frost$core$Int64*) frostAlloc($tmp2409 * 8));
*(&local47) = $tmp2410;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp2411 = (frost$core$Int64) {0u};
frost$core$Bit $tmp2412 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2413 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2411, $tmp2407, $tmp2412);
frost$core$Int64 $tmp2414 = $tmp2413.min;
*(&local48) = $tmp2414;
frost$core$Int64 $tmp2415 = $tmp2413.max;
frost$core$Bit $tmp2416 = $tmp2413.inclusive;
bool $tmp2417 = $tmp2416.value;
frost$core$Int64 $tmp2418 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2419 = $tmp2418.value;
frost$core$UInt64 $tmp2420 = (frost$core$UInt64) {((uint64_t) $tmp2419)};
if ($tmp2417) goto block259; else goto block260;
block259:;
int64_t $tmp2421 = $tmp2414.value;
int64_t $tmp2422 = $tmp2415.value;
bool $tmp2423 = $tmp2421 <= $tmp2422;
frost$core$Bit $tmp2424 = (frost$core$Bit) {$tmp2423};
bool $tmp2425 = $tmp2424.value;
if ($tmp2425) goto block256; else goto block257;
block260:;
int64_t $tmp2426 = $tmp2414.value;
int64_t $tmp2427 = $tmp2415.value;
bool $tmp2428 = $tmp2426 < $tmp2427;
frost$core$Bit $tmp2429 = (frost$core$Bit) {$tmp2428};
bool $tmp2430 = $tmp2429.value;
if ($tmp2430) goto block256; else goto block257;
block256:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp2431 = *(&local47);
frost$core$Int64 $tmp2432 = *(&local48);
int64_t $tmp2433 = $tmp2432.value;
$tmp2431[$tmp2433] = $tmp2408;
frost$core$Int64 $tmp2434 = *(&local48);
int64_t $tmp2435 = $tmp2415.value;
int64_t $tmp2436 = $tmp2434.value;
int64_t $tmp2437 = $tmp2435 - $tmp2436;
frost$core$Int64 $tmp2438 = (frost$core$Int64) {$tmp2437};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2439 = $tmp2438.value;
frost$core$UInt64 $tmp2440 = (frost$core$UInt64) {((uint64_t) $tmp2439)};
if ($tmp2417) goto block263; else goto block264;
block263:;
uint64_t $tmp2441 = $tmp2440.value;
uint64_t $tmp2442 = $tmp2420.value;
bool $tmp2443 = $tmp2441 >= $tmp2442;
frost$core$Bit $tmp2444 = (frost$core$Bit) {$tmp2443};
bool $tmp2445 = $tmp2444.value;
if ($tmp2445) goto block261; else goto block257;
block264:;
uint64_t $tmp2446 = $tmp2440.value;
uint64_t $tmp2447 = $tmp2420.value;
bool $tmp2448 = $tmp2446 > $tmp2447;
frost$core$Bit $tmp2449 = (frost$core$Bit) {$tmp2448};
bool $tmp2450 = $tmp2449.value;
if ($tmp2450) goto block261; else goto block257;
block261:;
int64_t $tmp2451 = $tmp2434.value;
int64_t $tmp2452 = $tmp2418.value;
int64_t $tmp2453 = $tmp2451 + $tmp2452;
frost$core$Int64 $tmp2454 = (frost$core$Int64) {$tmp2453};
*(&local48) = $tmp2454;
goto block256;
block257:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp2455 = *(&local47);
int64_t $tmp2456 = $tmp2406.value;
$tmp2405[$tmp2456] = $tmp2455;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:223
frost$core$Int64** $tmp2457 = *(&local0);
frost$core$Int64 $tmp2458 = (frost$core$Int64) {123u};
int64_t $tmp2459 = $tmp2458.value;
frost$core$Int64* $tmp2460 = $tmp2457[$tmp2459];
frost$core$Int64 $tmp2461 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp2462 = (frost$core$Int64) {29u};
int64_t $tmp2463 = $tmp2461.value;
$tmp2460[$tmp2463] = $tmp2462;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:224
frost$core$Int64** $tmp2464 = *(&local0);
frost$core$Int64 $tmp2465 = (frost$core$Int64) {123u};
int64_t $tmp2466 = $tmp2465.value;
frost$core$Int64* $tmp2467 = $tmp2464[$tmp2466];
frost$core$Int64 $tmp2468 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp2469 = (frost$core$Int64) {3u};
int64_t $tmp2470 = $tmp2468.value;
$tmp2467[$tmp2470] = $tmp2469;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:225
frost$core$Int64** $tmp2471 = *(&local0);
frost$core$Int64 $tmp2472 = (frost$core$Int64) {124u};
frost$core$Int64** $tmp2473 = *(&local0);
frost$core$Int64 $tmp2474 = (frost$core$Int64) {0u};
int64_t $tmp2475 = $tmp2474.value;
frost$core$Int64* $tmp2476 = $tmp2473[$tmp2475];
int64_t $tmp2477 = $tmp2472.value;
$tmp2471[$tmp2477] = $tmp2476;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:226
frost$core$Int64** $tmp2478 = *(&local0);
frost$core$Int64 $tmp2479 = (frost$core$Int64) {125u};
frost$core$Int64 $tmp2480 = (frost$core$Int64) {31u};
frost$core$Int64 $tmp2481 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.json.Lexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from Lexer.frost:226:29
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:25
int64_t $tmp2482 = $tmp2480.value;
frost$core$Int64* $tmp2483 = ((frost$core$Int64*) frostAlloc($tmp2482 * 8));
*(&local49) = $tmp2483;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:26
frost$core$Int64 $tmp2484 = (frost$core$Int64) {0u};
frost$core$Bit $tmp2485 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2486 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2484, $tmp2480, $tmp2485);
frost$core$Int64 $tmp2487 = $tmp2486.min;
*(&local50) = $tmp2487;
frost$core$Int64 $tmp2488 = $tmp2486.max;
frost$core$Bit $tmp2489 = $tmp2486.inclusive;
bool $tmp2490 = $tmp2489.value;
frost$core$Int64 $tmp2491 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2492 = $tmp2491.value;
frost$core$UInt64 $tmp2493 = (frost$core$UInt64) {((uint64_t) $tmp2492)};
if ($tmp2490) goto block270; else goto block271;
block270:;
int64_t $tmp2494 = $tmp2487.value;
int64_t $tmp2495 = $tmp2488.value;
bool $tmp2496 = $tmp2494 <= $tmp2495;
frost$core$Bit $tmp2497 = (frost$core$Bit) {$tmp2496};
bool $tmp2498 = $tmp2497.value;
if ($tmp2498) goto block267; else goto block268;
block271:;
int64_t $tmp2499 = $tmp2487.value;
int64_t $tmp2500 = $tmp2488.value;
bool $tmp2501 = $tmp2499 < $tmp2500;
frost$core$Bit $tmp2502 = (frost$core$Bit) {$tmp2501};
bool $tmp2503 = $tmp2502.value;
if ($tmp2503) goto block267; else goto block268;
block267:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:27
frost$core$Int64* $tmp2504 = *(&local49);
frost$core$Int64 $tmp2505 = *(&local50);
int64_t $tmp2506 = $tmp2505.value;
$tmp2504[$tmp2506] = $tmp2481;
frost$core$Int64 $tmp2507 = *(&local50);
int64_t $tmp2508 = $tmp2488.value;
int64_t $tmp2509 = $tmp2507.value;
int64_t $tmp2510 = $tmp2508 - $tmp2509;
frost$core$Int64 $tmp2511 = (frost$core$Int64) {$tmp2510};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp2512 = $tmp2511.value;
frost$core$UInt64 $tmp2513 = (frost$core$UInt64) {((uint64_t) $tmp2512)};
if ($tmp2490) goto block274; else goto block275;
block274:;
uint64_t $tmp2514 = $tmp2513.value;
uint64_t $tmp2515 = $tmp2493.value;
bool $tmp2516 = $tmp2514 >= $tmp2515;
frost$core$Bit $tmp2517 = (frost$core$Bit) {$tmp2516};
bool $tmp2518 = $tmp2517.value;
if ($tmp2518) goto block272; else goto block268;
block275:;
uint64_t $tmp2519 = $tmp2513.value;
uint64_t $tmp2520 = $tmp2493.value;
bool $tmp2521 = $tmp2519 > $tmp2520;
frost$core$Bit $tmp2522 = (frost$core$Bit) {$tmp2521};
bool $tmp2523 = $tmp2522.value;
if ($tmp2523) goto block272; else goto block268;
block272:;
int64_t $tmp2524 = $tmp2507.value;
int64_t $tmp2525 = $tmp2491.value;
int64_t $tmp2526 = $tmp2524 + $tmp2525;
frost$core$Int64 $tmp2527 = (frost$core$Int64) {$tmp2526};
*(&local50) = $tmp2527;
goto block267;
block268:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:29
frost$core$Int64* $tmp2528 = *(&local49);
int64_t $tmp2529 = $tmp2479.value;
$tmp2478[$tmp2529] = $tmp2528;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:227
frost$core$Int64** $tmp2530 = *(&local0);
frost$core$Int64 $tmp2531 = (frost$core$Int64) {125u};
int64_t $tmp2532 = $tmp2531.value;
frost$core$Int64* $tmp2533 = $tmp2530[$tmp2532];
frost$core$Int64 $tmp2534 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp2535 = (frost$core$Int64) {30u};
int64_t $tmp2536 = $tmp2534.value;
$tmp2533[$tmp2536] = $tmp2535;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:228
frost$core$Int64** $tmp2537 = *(&local0);
frost$core$Int64 $tmp2538 = (frost$core$Int64) {125u};
int64_t $tmp2539 = $tmp2538.value;
frost$core$Int64* $tmp2540 = $tmp2537[$tmp2539];
frost$core$Int64 $tmp2541 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp2542 = (frost$core$Int64) {3u};
int64_t $tmp2543 = $tmp2541.value;
$tmp2540[$tmp2543] = $tmp2542;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:229
frost$core$Int64** $tmp2544 = *(&local0);
frost$core$Int64 $tmp2545 = (frost$core$Int64) {126u};
frost$core$Int64** $tmp2546 = *(&local0);
frost$core$Int64 $tmp2547 = (frost$core$Int64) {0u};
int64_t $tmp2548 = $tmp2547.value;
frost$core$Int64* $tmp2549 = $tmp2546[$tmp2548];
int64_t $tmp2550 = $tmp2545.value;
$tmp2544[$tmp2550] = $tmp2549;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:230
frost$core$Int64** $tmp2551 = *(&local0);
frost$core$Int64 $tmp2552 = (frost$core$Int64) {127u};
frost$core$Int64** $tmp2553 = *(&local0);
frost$core$Int64 $tmp2554 = (frost$core$Int64) {0u};
int64_t $tmp2555 = $tmp2554.value;
frost$core$Int64* $tmp2556 = $tmp2553[$tmp2555];
int64_t $tmp2557 = $tmp2552.value;
$tmp2551[$tmp2557] = $tmp2556;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:231
frost$core$Int64** $tmp2558 = *(&local0);
frost$core$Int64 $tmp2559 = (frost$core$Int64) {128u};
frost$core$Int64** $tmp2560 = *(&local0);
frost$core$Int64 $tmp2561 = (frost$core$Int64) {0u};
int64_t $tmp2562 = $tmp2561.value;
frost$core$Int64* $tmp2563 = $tmp2560[$tmp2562];
int64_t $tmp2564 = $tmp2559.value;
$tmp2558[$tmp2564] = $tmp2563;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:232
frost$core$Int64** $tmp2565 = *(&local0);
frost$core$Int64 $tmp2566 = (frost$core$Int64) {129u};
frost$core$Int64** $tmp2567 = *(&local0);
frost$core$Int64 $tmp2568 = (frost$core$Int64) {0u};
int64_t $tmp2569 = $tmp2568.value;
frost$core$Int64* $tmp2570 = $tmp2567[$tmp2569];
int64_t $tmp2571 = $tmp2566.value;
$tmp2565[$tmp2571] = $tmp2570;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:233
frost$core$Int64** $tmp2572 = *(&local0);
frost$core$Int64 $tmp2573 = (frost$core$Int64) {130u};
frost$core$Int64** $tmp2574 = *(&local0);
frost$core$Int64 $tmp2575 = (frost$core$Int64) {0u};
int64_t $tmp2576 = $tmp2575.value;
frost$core$Int64* $tmp2577 = $tmp2574[$tmp2576];
int64_t $tmp2578 = $tmp2573.value;
$tmp2572[$tmp2578] = $tmp2577;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:234
frost$core$Int64** $tmp2579 = *(&local0);
frost$core$Int64 $tmp2580 = (frost$core$Int64) {131u};
frost$core$Int64** $tmp2581 = *(&local0);
frost$core$Int64 $tmp2582 = (frost$core$Int64) {0u};
int64_t $tmp2583 = $tmp2582.value;
frost$core$Int64* $tmp2584 = $tmp2581[$tmp2583];
int64_t $tmp2585 = $tmp2580.value;
$tmp2579[$tmp2585] = $tmp2584;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:235
frost$core$Int64** $tmp2586 = *(&local0);
frost$core$Int64 $tmp2587 = (frost$core$Int64) {132u};
frost$core$Int64** $tmp2588 = *(&local0);
frost$core$Int64 $tmp2589 = (frost$core$Int64) {0u};
int64_t $tmp2590 = $tmp2589.value;
frost$core$Int64* $tmp2591 = $tmp2588[$tmp2590];
int64_t $tmp2592 = $tmp2587.value;
$tmp2586[$tmp2592] = $tmp2591;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:236
frost$core$Int64** $tmp2593 = *(&local0);
frost$core$Int64 $tmp2594 = (frost$core$Int64) {133u};
frost$core$Int64** $tmp2595 = *(&local0);
frost$core$Int64 $tmp2596 = (frost$core$Int64) {0u};
int64_t $tmp2597 = $tmp2596.value;
frost$core$Int64* $tmp2598 = $tmp2595[$tmp2597];
int64_t $tmp2599 = $tmp2594.value;
$tmp2593[$tmp2599] = $tmp2598;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:237
frost$core$Int64** $tmp2600 = *(&local0);
frost$core$Int64 $tmp2601 = (frost$core$Int64) {134u};
frost$core$Int64** $tmp2602 = *(&local0);
frost$core$Int64 $tmp2603 = (frost$core$Int64) {0u};
int64_t $tmp2604 = $tmp2603.value;
frost$core$Int64* $tmp2605 = $tmp2602[$tmp2604];
int64_t $tmp2606 = $tmp2601.value;
$tmp2600[$tmp2606] = $tmp2605;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:238
frost$core$Int64** $tmp2607 = *(&local0);
frost$core$Int64 $tmp2608 = (frost$core$Int64) {135u};
frost$core$Int64** $tmp2609 = *(&local0);
frost$core$Int64 $tmp2610 = (frost$core$Int64) {0u};
int64_t $tmp2611 = $tmp2610.value;
frost$core$Int64* $tmp2612 = $tmp2609[$tmp2611];
int64_t $tmp2613 = $tmp2608.value;
$tmp2607[$tmp2613] = $tmp2612;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:239
frost$core$Int64** $tmp2614 = *(&local0);
frost$core$Int64 $tmp2615 = (frost$core$Int64) {136u};
frost$core$Int64** $tmp2616 = *(&local0);
frost$core$Int64 $tmp2617 = (frost$core$Int64) {0u};
int64_t $tmp2618 = $tmp2617.value;
frost$core$Int64* $tmp2619 = $tmp2616[$tmp2618];
int64_t $tmp2620 = $tmp2615.value;
$tmp2614[$tmp2620] = $tmp2619;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:240
frost$core$Int64** $tmp2621 = *(&local0);
frost$core$Int64 $tmp2622 = (frost$core$Int64) {137u};
frost$core$Int64** $tmp2623 = *(&local0);
frost$core$Int64 $tmp2624 = (frost$core$Int64) {0u};
int64_t $tmp2625 = $tmp2624.value;
frost$core$Int64* $tmp2626 = $tmp2623[$tmp2625];
int64_t $tmp2627 = $tmp2622.value;
$tmp2621[$tmp2627] = $tmp2626;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:241
frost$core$Int64** $tmp2628 = *(&local0);
frost$core$Int64 $tmp2629 = (frost$core$Int64) {138u};
frost$core$Int64** $tmp2630 = *(&local0);
frost$core$Int64 $tmp2631 = (frost$core$Int64) {0u};
int64_t $tmp2632 = $tmp2631.value;
frost$core$Int64* $tmp2633 = $tmp2630[$tmp2632];
int64_t $tmp2634 = $tmp2629.value;
$tmp2628[$tmp2634] = $tmp2633;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:242
frost$core$Int64** $tmp2635 = *(&local0);
frost$core$Int64 $tmp2636 = (frost$core$Int64) {139u};
frost$core$Int64** $tmp2637 = *(&local0);
frost$core$Int64 $tmp2638 = (frost$core$Int64) {0u};
int64_t $tmp2639 = $tmp2638.value;
frost$core$Int64* $tmp2640 = $tmp2637[$tmp2639];
int64_t $tmp2641 = $tmp2636.value;
$tmp2635[$tmp2641] = $tmp2640;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:243
frost$core$Int64** $tmp2642 = *(&local0);
frost$core$Int64 $tmp2643 = (frost$core$Int64) {140u};
frost$core$Int64** $tmp2644 = *(&local0);
frost$core$Int64 $tmp2645 = (frost$core$Int64) {0u};
int64_t $tmp2646 = $tmp2645.value;
frost$core$Int64* $tmp2647 = $tmp2644[$tmp2646];
int64_t $tmp2648 = $tmp2643.value;
$tmp2642[$tmp2648] = $tmp2647;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:244
frost$core$Int64** $tmp2649 = *(&local0);
frost$core$Int64 $tmp2650 = (frost$core$Int64) {141u};
frost$core$Int64** $tmp2651 = *(&local0);
frost$core$Int64 $tmp2652 = (frost$core$Int64) {0u};
int64_t $tmp2653 = $tmp2652.value;
frost$core$Int64* $tmp2654 = $tmp2651[$tmp2653];
int64_t $tmp2655 = $tmp2650.value;
$tmp2649[$tmp2655] = $tmp2654;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:245
frost$core$Int64** $tmp2656 = *(&local0);
frost$core$Int64 $tmp2657 = (frost$core$Int64) {142u};
frost$core$Int64** $tmp2658 = *(&local0);
frost$core$Int64 $tmp2659 = (frost$core$Int64) {0u};
int64_t $tmp2660 = $tmp2659.value;
frost$core$Int64* $tmp2661 = $tmp2658[$tmp2660];
int64_t $tmp2662 = $tmp2657.value;
$tmp2656[$tmp2662] = $tmp2661;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:246
frost$core$Int64** $tmp2663 = *(&local0);
frost$core$Int64 $tmp2664 = (frost$core$Int64) {143u};
frost$core$Int64** $tmp2665 = *(&local0);
frost$core$Int64 $tmp2666 = (frost$core$Int64) {0u};
int64_t $tmp2667 = $tmp2666.value;
frost$core$Int64* $tmp2668 = $tmp2665[$tmp2667];
int64_t $tmp2669 = $tmp2664.value;
$tmp2663[$tmp2669] = $tmp2668;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:247
frost$core$Int64** $tmp2670 = *(&local0);
frost$core$Int64 $tmp2671 = (frost$core$Int64) {144u};
frost$core$Int64** $tmp2672 = *(&local0);
frost$core$Int64 $tmp2673 = (frost$core$Int64) {0u};
int64_t $tmp2674 = $tmp2673.value;
frost$core$Int64* $tmp2675 = $tmp2672[$tmp2674];
int64_t $tmp2676 = $tmp2671.value;
$tmp2670[$tmp2676] = $tmp2675;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:248
frost$core$Int64** $tmp2677 = *(&local0);
frost$core$Int64 $tmp2678 = (frost$core$Int64) {145u};
frost$core$Int64** $tmp2679 = *(&local0);
frost$core$Int64 $tmp2680 = (frost$core$Int64) {0u};
int64_t $tmp2681 = $tmp2680.value;
frost$core$Int64* $tmp2682 = $tmp2679[$tmp2681];
int64_t $tmp2683 = $tmp2678.value;
$tmp2677[$tmp2683] = $tmp2682;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:249
frost$core$Int64** $tmp2684 = *(&local0);
frost$core$Int64 $tmp2685 = (frost$core$Int64) {146u};
frost$core$Int64** $tmp2686 = *(&local0);
frost$core$Int64 $tmp2687 = (frost$core$Int64) {0u};
int64_t $tmp2688 = $tmp2687.value;
frost$core$Int64* $tmp2689 = $tmp2686[$tmp2688];
int64_t $tmp2690 = $tmp2685.value;
$tmp2684[$tmp2690] = $tmp2689;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:250
frost$core$Int64** $tmp2691 = *(&local0);
frost$core$Int64 $tmp2692 = (frost$core$Int64) {147u};
frost$core$Int64** $tmp2693 = *(&local0);
frost$core$Int64 $tmp2694 = (frost$core$Int64) {0u};
int64_t $tmp2695 = $tmp2694.value;
frost$core$Int64* $tmp2696 = $tmp2693[$tmp2695];
int64_t $tmp2697 = $tmp2692.value;
$tmp2691[$tmp2697] = $tmp2696;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:251
frost$core$Int64** $tmp2698 = *(&local0);
frost$core$Int64 $tmp2699 = (frost$core$Int64) {148u};
frost$core$Int64** $tmp2700 = *(&local0);
frost$core$Int64 $tmp2701 = (frost$core$Int64) {0u};
int64_t $tmp2702 = $tmp2701.value;
frost$core$Int64* $tmp2703 = $tmp2700[$tmp2702];
int64_t $tmp2704 = $tmp2699.value;
$tmp2698[$tmp2704] = $tmp2703;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:252
frost$core$Int64** $tmp2705 = *(&local0);
frost$core$Int64 $tmp2706 = (frost$core$Int64) {149u};
frost$core$Int64** $tmp2707 = *(&local0);
frost$core$Int64 $tmp2708 = (frost$core$Int64) {0u};
int64_t $tmp2709 = $tmp2708.value;
frost$core$Int64* $tmp2710 = $tmp2707[$tmp2709];
int64_t $tmp2711 = $tmp2706.value;
$tmp2705[$tmp2711] = $tmp2710;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:253
frost$core$Int64** $tmp2712 = *(&local0);
frost$core$Int64 $tmp2713 = (frost$core$Int64) {150u};
frost$core$Int64** $tmp2714 = *(&local0);
frost$core$Int64 $tmp2715 = (frost$core$Int64) {0u};
int64_t $tmp2716 = $tmp2715.value;
frost$core$Int64* $tmp2717 = $tmp2714[$tmp2716];
int64_t $tmp2718 = $tmp2713.value;
$tmp2712[$tmp2718] = $tmp2717;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:254
frost$core$Int64** $tmp2719 = *(&local0);
frost$core$Int64 $tmp2720 = (frost$core$Int64) {151u};
frost$core$Int64** $tmp2721 = *(&local0);
frost$core$Int64 $tmp2722 = (frost$core$Int64) {0u};
int64_t $tmp2723 = $tmp2722.value;
frost$core$Int64* $tmp2724 = $tmp2721[$tmp2723];
int64_t $tmp2725 = $tmp2720.value;
$tmp2719[$tmp2725] = $tmp2724;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:255
frost$core$Int64** $tmp2726 = *(&local0);
frost$core$Int64 $tmp2727 = (frost$core$Int64) {152u};
frost$core$Int64** $tmp2728 = *(&local0);
frost$core$Int64 $tmp2729 = (frost$core$Int64) {0u};
int64_t $tmp2730 = $tmp2729.value;
frost$core$Int64* $tmp2731 = $tmp2728[$tmp2730];
int64_t $tmp2732 = $tmp2727.value;
$tmp2726[$tmp2732] = $tmp2731;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:256
frost$core$Int64** $tmp2733 = *(&local0);
frost$core$Int64 $tmp2734 = (frost$core$Int64) {153u};
frost$core$Int64** $tmp2735 = *(&local0);
frost$core$Int64 $tmp2736 = (frost$core$Int64) {0u};
int64_t $tmp2737 = $tmp2736.value;
frost$core$Int64* $tmp2738 = $tmp2735[$tmp2737];
int64_t $tmp2739 = $tmp2734.value;
$tmp2733[$tmp2739] = $tmp2738;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:257
frost$core$Int64** $tmp2740 = *(&local0);
frost$core$Int64 $tmp2741 = (frost$core$Int64) {154u};
frost$core$Int64** $tmp2742 = *(&local0);
frost$core$Int64 $tmp2743 = (frost$core$Int64) {0u};
int64_t $tmp2744 = $tmp2743.value;
frost$core$Int64* $tmp2745 = $tmp2742[$tmp2744];
int64_t $tmp2746 = $tmp2741.value;
$tmp2740[$tmp2746] = $tmp2745;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:258
frost$core$Int64** $tmp2747 = *(&local0);
frost$core$Int64 $tmp2748 = (frost$core$Int64) {155u};
frost$core$Int64** $tmp2749 = *(&local0);
frost$core$Int64 $tmp2750 = (frost$core$Int64) {0u};
int64_t $tmp2751 = $tmp2750.value;
frost$core$Int64* $tmp2752 = $tmp2749[$tmp2751];
int64_t $tmp2753 = $tmp2748.value;
$tmp2747[$tmp2753] = $tmp2752;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:259
frost$core$Int64** $tmp2754 = *(&local0);
frost$core$Int64 $tmp2755 = (frost$core$Int64) {156u};
frost$core$Int64** $tmp2756 = *(&local0);
frost$core$Int64 $tmp2757 = (frost$core$Int64) {0u};
int64_t $tmp2758 = $tmp2757.value;
frost$core$Int64* $tmp2759 = $tmp2756[$tmp2758];
int64_t $tmp2760 = $tmp2755.value;
$tmp2754[$tmp2760] = $tmp2759;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:260
frost$core$Int64** $tmp2761 = *(&local0);
frost$core$Int64 $tmp2762 = (frost$core$Int64) {157u};
frost$core$Int64** $tmp2763 = *(&local0);
frost$core$Int64 $tmp2764 = (frost$core$Int64) {0u};
int64_t $tmp2765 = $tmp2764.value;
frost$core$Int64* $tmp2766 = $tmp2763[$tmp2765];
int64_t $tmp2767 = $tmp2762.value;
$tmp2761[$tmp2767] = $tmp2766;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:261
frost$core$Int64** $tmp2768 = *(&local0);
frost$core$Int64 $tmp2769 = (frost$core$Int64) {158u};
frost$core$Int64** $tmp2770 = *(&local0);
frost$core$Int64 $tmp2771 = (frost$core$Int64) {0u};
int64_t $tmp2772 = $tmp2771.value;
frost$core$Int64* $tmp2773 = $tmp2770[$tmp2772];
int64_t $tmp2774 = $tmp2769.value;
$tmp2768[$tmp2774] = $tmp2773;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:262
frost$core$Int64** $tmp2775 = *(&local0);
frost$core$Int64 $tmp2776 = (frost$core$Int64) {159u};
frost$core$Int64** $tmp2777 = *(&local0);
frost$core$Int64 $tmp2778 = (frost$core$Int64) {0u};
int64_t $tmp2779 = $tmp2778.value;
frost$core$Int64* $tmp2780 = $tmp2777[$tmp2779];
int64_t $tmp2781 = $tmp2776.value;
$tmp2775[$tmp2781] = $tmp2780;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:263
frost$core$Int64** $tmp2782 = *(&local0);
frost$core$Int64 $tmp2783 = (frost$core$Int64) {160u};
frost$core$Int64** $tmp2784 = *(&local0);
frost$core$Int64 $tmp2785 = (frost$core$Int64) {0u};
int64_t $tmp2786 = $tmp2785.value;
frost$core$Int64* $tmp2787 = $tmp2784[$tmp2786];
int64_t $tmp2788 = $tmp2783.value;
$tmp2782[$tmp2788] = $tmp2787;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:264
frost$core$Int64** $tmp2789 = *(&local0);
frost$core$Int64 $tmp2790 = (frost$core$Int64) {161u};
frost$core$Int64** $tmp2791 = *(&local0);
frost$core$Int64 $tmp2792 = (frost$core$Int64) {0u};
int64_t $tmp2793 = $tmp2792.value;
frost$core$Int64* $tmp2794 = $tmp2791[$tmp2793];
int64_t $tmp2795 = $tmp2790.value;
$tmp2789[$tmp2795] = $tmp2794;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:265
frost$core$Int64** $tmp2796 = *(&local0);
frost$core$Int64 $tmp2797 = (frost$core$Int64) {162u};
frost$core$Int64** $tmp2798 = *(&local0);
frost$core$Int64 $tmp2799 = (frost$core$Int64) {0u};
int64_t $tmp2800 = $tmp2799.value;
frost$core$Int64* $tmp2801 = $tmp2798[$tmp2800];
int64_t $tmp2802 = $tmp2797.value;
$tmp2796[$tmp2802] = $tmp2801;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:266
frost$core$Int64** $tmp2803 = *(&local0);
frost$core$Int64 $tmp2804 = (frost$core$Int64) {163u};
frost$core$Int64** $tmp2805 = *(&local0);
frost$core$Int64 $tmp2806 = (frost$core$Int64) {0u};
int64_t $tmp2807 = $tmp2806.value;
frost$core$Int64* $tmp2808 = $tmp2805[$tmp2807];
int64_t $tmp2809 = $tmp2804.value;
$tmp2803[$tmp2809] = $tmp2808;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:267
frost$core$Int64** $tmp2810 = *(&local0);
frost$core$Int64 $tmp2811 = (frost$core$Int64) {164u};
frost$core$Int64** $tmp2812 = *(&local0);
frost$core$Int64 $tmp2813 = (frost$core$Int64) {0u};
int64_t $tmp2814 = $tmp2813.value;
frost$core$Int64* $tmp2815 = $tmp2812[$tmp2814];
int64_t $tmp2816 = $tmp2811.value;
$tmp2810[$tmp2816] = $tmp2815;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:268
frost$core$Int64** $tmp2817 = *(&local0);
frost$core$Int64 $tmp2818 = (frost$core$Int64) {165u};
frost$core$Int64** $tmp2819 = *(&local0);
frost$core$Int64 $tmp2820 = (frost$core$Int64) {0u};
int64_t $tmp2821 = $tmp2820.value;
frost$core$Int64* $tmp2822 = $tmp2819[$tmp2821];
int64_t $tmp2823 = $tmp2818.value;
$tmp2817[$tmp2823] = $tmp2822;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:269
frost$core$Int64** $tmp2824 = *(&local0);
frost$core$Int64 $tmp2825 = (frost$core$Int64) {166u};
frost$core$Int64** $tmp2826 = *(&local0);
frost$core$Int64 $tmp2827 = (frost$core$Int64) {0u};
int64_t $tmp2828 = $tmp2827.value;
frost$core$Int64* $tmp2829 = $tmp2826[$tmp2828];
int64_t $tmp2830 = $tmp2825.value;
$tmp2824[$tmp2830] = $tmp2829;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:270
frost$core$Int64** $tmp2831 = *(&local0);
frost$core$Int64 $tmp2832 = (frost$core$Int64) {167u};
frost$core$Int64** $tmp2833 = *(&local0);
frost$core$Int64 $tmp2834 = (frost$core$Int64) {0u};
int64_t $tmp2835 = $tmp2834.value;
frost$core$Int64* $tmp2836 = $tmp2833[$tmp2835];
int64_t $tmp2837 = $tmp2832.value;
$tmp2831[$tmp2837] = $tmp2836;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:271
frost$core$Int64** $tmp2838 = *(&local0);
frost$core$Int64 $tmp2839 = (frost$core$Int64) {168u};
frost$core$Int64** $tmp2840 = *(&local0);
frost$core$Int64 $tmp2841 = (frost$core$Int64) {0u};
int64_t $tmp2842 = $tmp2841.value;
frost$core$Int64* $tmp2843 = $tmp2840[$tmp2842];
int64_t $tmp2844 = $tmp2839.value;
$tmp2838[$tmp2844] = $tmp2843;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:272
frost$core$Int64** $tmp2845 = *(&local0);
frost$core$Int64 $tmp2846 = (frost$core$Int64) {169u};
frost$core$Int64** $tmp2847 = *(&local0);
frost$core$Int64 $tmp2848 = (frost$core$Int64) {0u};
int64_t $tmp2849 = $tmp2848.value;
frost$core$Int64* $tmp2850 = $tmp2847[$tmp2849];
int64_t $tmp2851 = $tmp2846.value;
$tmp2845[$tmp2851] = $tmp2850;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:273
frost$core$Int64** $tmp2852 = *(&local0);
frost$core$Int64 $tmp2853 = (frost$core$Int64) {170u};
frost$core$Int64** $tmp2854 = *(&local0);
frost$core$Int64 $tmp2855 = (frost$core$Int64) {0u};
int64_t $tmp2856 = $tmp2855.value;
frost$core$Int64* $tmp2857 = $tmp2854[$tmp2856];
int64_t $tmp2858 = $tmp2853.value;
$tmp2852[$tmp2858] = $tmp2857;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:274
frost$core$Int64** $tmp2859 = *(&local0);
frost$core$Int64 $tmp2860 = (frost$core$Int64) {171u};
frost$core$Int64** $tmp2861 = *(&local0);
frost$core$Int64 $tmp2862 = (frost$core$Int64) {0u};
int64_t $tmp2863 = $tmp2862.value;
frost$core$Int64* $tmp2864 = $tmp2861[$tmp2863];
int64_t $tmp2865 = $tmp2860.value;
$tmp2859[$tmp2865] = $tmp2864;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:275
frost$core$Int64** $tmp2866 = *(&local0);
frost$core$Int64 $tmp2867 = (frost$core$Int64) {172u};
frost$core$Int64** $tmp2868 = *(&local0);
frost$core$Int64 $tmp2869 = (frost$core$Int64) {0u};
int64_t $tmp2870 = $tmp2869.value;
frost$core$Int64* $tmp2871 = $tmp2868[$tmp2870];
int64_t $tmp2872 = $tmp2867.value;
$tmp2866[$tmp2872] = $tmp2871;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:276
frost$core$Int64** $tmp2873 = *(&local0);
frost$core$Int64 $tmp2874 = (frost$core$Int64) {173u};
frost$core$Int64** $tmp2875 = *(&local0);
frost$core$Int64 $tmp2876 = (frost$core$Int64) {0u};
int64_t $tmp2877 = $tmp2876.value;
frost$core$Int64* $tmp2878 = $tmp2875[$tmp2877];
int64_t $tmp2879 = $tmp2874.value;
$tmp2873[$tmp2879] = $tmp2878;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:277
frost$core$Int64** $tmp2880 = *(&local0);
frost$core$Int64 $tmp2881 = (frost$core$Int64) {174u};
frost$core$Int64** $tmp2882 = *(&local0);
frost$core$Int64 $tmp2883 = (frost$core$Int64) {0u};
int64_t $tmp2884 = $tmp2883.value;
frost$core$Int64* $tmp2885 = $tmp2882[$tmp2884];
int64_t $tmp2886 = $tmp2881.value;
$tmp2880[$tmp2886] = $tmp2885;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:278
frost$core$Int64** $tmp2887 = *(&local0);
frost$core$Int64 $tmp2888 = (frost$core$Int64) {175u};
frost$core$Int64** $tmp2889 = *(&local0);
frost$core$Int64 $tmp2890 = (frost$core$Int64) {0u};
int64_t $tmp2891 = $tmp2890.value;
frost$core$Int64* $tmp2892 = $tmp2889[$tmp2891];
int64_t $tmp2893 = $tmp2888.value;
$tmp2887[$tmp2893] = $tmp2892;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:279
frost$core$Int64** $tmp2894 = *(&local0);
frost$core$Int64 $tmp2895 = (frost$core$Int64) {176u};
frost$core$Int64** $tmp2896 = *(&local0);
frost$core$Int64 $tmp2897 = (frost$core$Int64) {0u};
int64_t $tmp2898 = $tmp2897.value;
frost$core$Int64* $tmp2899 = $tmp2896[$tmp2898];
int64_t $tmp2900 = $tmp2895.value;
$tmp2894[$tmp2900] = $tmp2899;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:280
frost$core$Int64** $tmp2901 = *(&local0);
frost$core$Int64 $tmp2902 = (frost$core$Int64) {177u};
frost$core$Int64** $tmp2903 = *(&local0);
frost$core$Int64 $tmp2904 = (frost$core$Int64) {0u};
int64_t $tmp2905 = $tmp2904.value;
frost$core$Int64* $tmp2906 = $tmp2903[$tmp2905];
int64_t $tmp2907 = $tmp2902.value;
$tmp2901[$tmp2907] = $tmp2906;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:281
frost$core$Int64** $tmp2908 = *(&local0);
frost$core$Int64 $tmp2909 = (frost$core$Int64) {178u};
frost$core$Int64** $tmp2910 = *(&local0);
frost$core$Int64 $tmp2911 = (frost$core$Int64) {0u};
int64_t $tmp2912 = $tmp2911.value;
frost$core$Int64* $tmp2913 = $tmp2910[$tmp2912];
int64_t $tmp2914 = $tmp2909.value;
$tmp2908[$tmp2914] = $tmp2913;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:282
frost$core$Int64** $tmp2915 = *(&local0);
frost$core$Int64 $tmp2916 = (frost$core$Int64) {179u};
frost$core$Int64** $tmp2917 = *(&local0);
frost$core$Int64 $tmp2918 = (frost$core$Int64) {0u};
int64_t $tmp2919 = $tmp2918.value;
frost$core$Int64* $tmp2920 = $tmp2917[$tmp2919];
int64_t $tmp2921 = $tmp2916.value;
$tmp2915[$tmp2921] = $tmp2920;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:283
frost$core$Int64** $tmp2922 = *(&local0);
frost$core$Int64 $tmp2923 = (frost$core$Int64) {180u};
frost$core$Int64** $tmp2924 = *(&local0);
frost$core$Int64 $tmp2925 = (frost$core$Int64) {0u};
int64_t $tmp2926 = $tmp2925.value;
frost$core$Int64* $tmp2927 = $tmp2924[$tmp2926];
int64_t $tmp2928 = $tmp2923.value;
$tmp2922[$tmp2928] = $tmp2927;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:284
frost$core$Int64** $tmp2929 = *(&local0);
frost$core$Int64 $tmp2930 = (frost$core$Int64) {181u};
frost$core$Int64** $tmp2931 = *(&local0);
frost$core$Int64 $tmp2932 = (frost$core$Int64) {0u};
int64_t $tmp2933 = $tmp2932.value;
frost$core$Int64* $tmp2934 = $tmp2931[$tmp2933];
int64_t $tmp2935 = $tmp2930.value;
$tmp2929[$tmp2935] = $tmp2934;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:285
frost$core$Int64** $tmp2936 = *(&local0);
frost$core$Int64 $tmp2937 = (frost$core$Int64) {182u};
frost$core$Int64** $tmp2938 = *(&local0);
frost$core$Int64 $tmp2939 = (frost$core$Int64) {0u};
int64_t $tmp2940 = $tmp2939.value;
frost$core$Int64* $tmp2941 = $tmp2938[$tmp2940];
int64_t $tmp2942 = $tmp2937.value;
$tmp2936[$tmp2942] = $tmp2941;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:286
frost$core$Int64** $tmp2943 = *(&local0);
frost$core$Int64 $tmp2944 = (frost$core$Int64) {183u};
frost$core$Int64** $tmp2945 = *(&local0);
frost$core$Int64 $tmp2946 = (frost$core$Int64) {0u};
int64_t $tmp2947 = $tmp2946.value;
frost$core$Int64* $tmp2948 = $tmp2945[$tmp2947];
int64_t $tmp2949 = $tmp2944.value;
$tmp2943[$tmp2949] = $tmp2948;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:287
frost$core$Int64** $tmp2950 = *(&local0);
frost$core$Int64 $tmp2951 = (frost$core$Int64) {184u};
frost$core$Int64** $tmp2952 = *(&local0);
frost$core$Int64 $tmp2953 = (frost$core$Int64) {0u};
int64_t $tmp2954 = $tmp2953.value;
frost$core$Int64* $tmp2955 = $tmp2952[$tmp2954];
int64_t $tmp2956 = $tmp2951.value;
$tmp2950[$tmp2956] = $tmp2955;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:288
frost$core$Int64** $tmp2957 = *(&local0);
frost$core$Int64 $tmp2958 = (frost$core$Int64) {185u};
frost$core$Int64** $tmp2959 = *(&local0);
frost$core$Int64 $tmp2960 = (frost$core$Int64) {0u};
int64_t $tmp2961 = $tmp2960.value;
frost$core$Int64* $tmp2962 = $tmp2959[$tmp2961];
int64_t $tmp2963 = $tmp2958.value;
$tmp2957[$tmp2963] = $tmp2962;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:289
frost$core$Int64** $tmp2964 = *(&local0);
frost$core$Int64 $tmp2965 = (frost$core$Int64) {186u};
frost$core$Int64** $tmp2966 = *(&local0);
frost$core$Int64 $tmp2967 = (frost$core$Int64) {0u};
int64_t $tmp2968 = $tmp2967.value;
frost$core$Int64* $tmp2969 = $tmp2966[$tmp2968];
int64_t $tmp2970 = $tmp2965.value;
$tmp2964[$tmp2970] = $tmp2969;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:290
frost$core$Int64** $tmp2971 = *(&local0);
frost$core$Int64 $tmp2972 = (frost$core$Int64) {187u};
frost$core$Int64** $tmp2973 = *(&local0);
frost$core$Int64 $tmp2974 = (frost$core$Int64) {0u};
int64_t $tmp2975 = $tmp2974.value;
frost$core$Int64* $tmp2976 = $tmp2973[$tmp2975];
int64_t $tmp2977 = $tmp2972.value;
$tmp2971[$tmp2977] = $tmp2976;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:291
frost$core$Int64** $tmp2978 = *(&local0);
frost$core$Int64 $tmp2979 = (frost$core$Int64) {188u};
frost$core$Int64** $tmp2980 = *(&local0);
frost$core$Int64 $tmp2981 = (frost$core$Int64) {0u};
int64_t $tmp2982 = $tmp2981.value;
frost$core$Int64* $tmp2983 = $tmp2980[$tmp2982];
int64_t $tmp2984 = $tmp2979.value;
$tmp2978[$tmp2984] = $tmp2983;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:292
frost$core$Int64** $tmp2985 = *(&local0);
frost$core$Int64 $tmp2986 = (frost$core$Int64) {189u};
frost$core$Int64** $tmp2987 = *(&local0);
frost$core$Int64 $tmp2988 = (frost$core$Int64) {0u};
int64_t $tmp2989 = $tmp2988.value;
frost$core$Int64* $tmp2990 = $tmp2987[$tmp2989];
int64_t $tmp2991 = $tmp2986.value;
$tmp2985[$tmp2991] = $tmp2990;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:293
frost$core$Int64** $tmp2992 = *(&local0);
frost$core$Int64 $tmp2993 = (frost$core$Int64) {190u};
frost$core$Int64** $tmp2994 = *(&local0);
frost$core$Int64 $tmp2995 = (frost$core$Int64) {0u};
int64_t $tmp2996 = $tmp2995.value;
frost$core$Int64* $tmp2997 = $tmp2994[$tmp2996];
int64_t $tmp2998 = $tmp2993.value;
$tmp2992[$tmp2998] = $tmp2997;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:294
frost$core$Int64** $tmp2999 = *(&local0);
frost$core$Int64 $tmp3000 = (frost$core$Int64) {191u};
frost$core$Int64** $tmp3001 = *(&local0);
frost$core$Int64 $tmp3002 = (frost$core$Int64) {0u};
int64_t $tmp3003 = $tmp3002.value;
frost$core$Int64* $tmp3004 = $tmp3001[$tmp3003];
int64_t $tmp3005 = $tmp3000.value;
$tmp2999[$tmp3005] = $tmp3004;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:295
frost$core$Int64** $tmp3006 = *(&local0);
frost$core$Int64 $tmp3007 = (frost$core$Int64) {192u};
frost$core$Int64** $tmp3008 = *(&local0);
frost$core$Int64 $tmp3009 = (frost$core$Int64) {0u};
int64_t $tmp3010 = $tmp3009.value;
frost$core$Int64* $tmp3011 = $tmp3008[$tmp3010];
int64_t $tmp3012 = $tmp3007.value;
$tmp3006[$tmp3012] = $tmp3011;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:296
frost$core$Int64** $tmp3013 = *(&local0);
frost$core$Int64 $tmp3014 = (frost$core$Int64) {193u};
frost$core$Int64** $tmp3015 = *(&local0);
frost$core$Int64 $tmp3016 = (frost$core$Int64) {0u};
int64_t $tmp3017 = $tmp3016.value;
frost$core$Int64* $tmp3018 = $tmp3015[$tmp3017];
int64_t $tmp3019 = $tmp3014.value;
$tmp3013[$tmp3019] = $tmp3018;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:297
frost$core$Int64** $tmp3020 = *(&local0);
frost$core$Int64 $tmp3021 = (frost$core$Int64) {194u};
frost$core$Int64** $tmp3022 = *(&local0);
frost$core$Int64 $tmp3023 = (frost$core$Int64) {0u};
int64_t $tmp3024 = $tmp3023.value;
frost$core$Int64* $tmp3025 = $tmp3022[$tmp3024];
int64_t $tmp3026 = $tmp3021.value;
$tmp3020[$tmp3026] = $tmp3025;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:298
frost$core$Int64** $tmp3027 = *(&local0);
frost$core$Int64 $tmp3028 = (frost$core$Int64) {195u};
frost$core$Int64** $tmp3029 = *(&local0);
frost$core$Int64 $tmp3030 = (frost$core$Int64) {0u};
int64_t $tmp3031 = $tmp3030.value;
frost$core$Int64* $tmp3032 = $tmp3029[$tmp3031];
int64_t $tmp3033 = $tmp3028.value;
$tmp3027[$tmp3033] = $tmp3032;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:299
frost$core$Int64** $tmp3034 = *(&local0);
frost$core$Int64 $tmp3035 = (frost$core$Int64) {196u};
frost$core$Int64** $tmp3036 = *(&local0);
frost$core$Int64 $tmp3037 = (frost$core$Int64) {0u};
int64_t $tmp3038 = $tmp3037.value;
frost$core$Int64* $tmp3039 = $tmp3036[$tmp3038];
int64_t $tmp3040 = $tmp3035.value;
$tmp3034[$tmp3040] = $tmp3039;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:300
frost$core$Int64** $tmp3041 = *(&local0);
frost$core$Int64 $tmp3042 = (frost$core$Int64) {197u};
frost$core$Int64** $tmp3043 = *(&local0);
frost$core$Int64 $tmp3044 = (frost$core$Int64) {0u};
int64_t $tmp3045 = $tmp3044.value;
frost$core$Int64* $tmp3046 = $tmp3043[$tmp3045];
int64_t $tmp3047 = $tmp3042.value;
$tmp3041[$tmp3047] = $tmp3046;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:301
frost$core$Int64** $tmp3048 = *(&local0);
frost$core$Int64 $tmp3049 = (frost$core$Int64) {198u};
frost$core$Int64** $tmp3050 = *(&local0);
frost$core$Int64 $tmp3051 = (frost$core$Int64) {0u};
int64_t $tmp3052 = $tmp3051.value;
frost$core$Int64* $tmp3053 = $tmp3050[$tmp3052];
int64_t $tmp3054 = $tmp3049.value;
$tmp3048[$tmp3054] = $tmp3053;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:302
frost$core$Int64** $tmp3055 = *(&local0);
frost$core$Int64 $tmp3056 = (frost$core$Int64) {199u};
frost$core$Int64** $tmp3057 = *(&local0);
frost$core$Int64 $tmp3058 = (frost$core$Int64) {0u};
int64_t $tmp3059 = $tmp3058.value;
frost$core$Int64* $tmp3060 = $tmp3057[$tmp3059];
int64_t $tmp3061 = $tmp3056.value;
$tmp3055[$tmp3061] = $tmp3060;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:303
frost$core$Int64** $tmp3062 = *(&local0);
frost$core$Int64 $tmp3063 = (frost$core$Int64) {200u};
frost$core$Int64** $tmp3064 = *(&local0);
frost$core$Int64 $tmp3065 = (frost$core$Int64) {0u};
int64_t $tmp3066 = $tmp3065.value;
frost$core$Int64* $tmp3067 = $tmp3064[$tmp3066];
int64_t $tmp3068 = $tmp3063.value;
$tmp3062[$tmp3068] = $tmp3067;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:304
frost$core$Int64** $tmp3069 = *(&local0);
frost$core$Int64 $tmp3070 = (frost$core$Int64) {201u};
frost$core$Int64** $tmp3071 = *(&local0);
frost$core$Int64 $tmp3072 = (frost$core$Int64) {0u};
int64_t $tmp3073 = $tmp3072.value;
frost$core$Int64* $tmp3074 = $tmp3071[$tmp3073];
int64_t $tmp3075 = $tmp3070.value;
$tmp3069[$tmp3075] = $tmp3074;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:305
frost$core$Int64** $tmp3076 = *(&local0);
frost$core$Int64 $tmp3077 = (frost$core$Int64) {202u};
frost$core$Int64** $tmp3078 = *(&local0);
frost$core$Int64 $tmp3079 = (frost$core$Int64) {0u};
int64_t $tmp3080 = $tmp3079.value;
frost$core$Int64* $tmp3081 = $tmp3078[$tmp3080];
int64_t $tmp3082 = $tmp3077.value;
$tmp3076[$tmp3082] = $tmp3081;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:306
frost$core$Int64** $tmp3083 = *(&local0);
frost$core$Int64 $tmp3084 = (frost$core$Int64) {203u};
frost$core$Int64** $tmp3085 = *(&local0);
frost$core$Int64 $tmp3086 = (frost$core$Int64) {0u};
int64_t $tmp3087 = $tmp3086.value;
frost$core$Int64* $tmp3088 = $tmp3085[$tmp3087];
int64_t $tmp3089 = $tmp3084.value;
$tmp3083[$tmp3089] = $tmp3088;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:307
frost$core$Int64** $tmp3090 = *(&local0);
frost$core$Int64 $tmp3091 = (frost$core$Int64) {204u};
frost$core$Int64** $tmp3092 = *(&local0);
frost$core$Int64 $tmp3093 = (frost$core$Int64) {0u};
int64_t $tmp3094 = $tmp3093.value;
frost$core$Int64* $tmp3095 = $tmp3092[$tmp3094];
int64_t $tmp3096 = $tmp3091.value;
$tmp3090[$tmp3096] = $tmp3095;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:308
frost$core$Int64** $tmp3097 = *(&local0);
frost$core$Int64 $tmp3098 = (frost$core$Int64) {205u};
frost$core$Int64** $tmp3099 = *(&local0);
frost$core$Int64 $tmp3100 = (frost$core$Int64) {0u};
int64_t $tmp3101 = $tmp3100.value;
frost$core$Int64* $tmp3102 = $tmp3099[$tmp3101];
int64_t $tmp3103 = $tmp3098.value;
$tmp3097[$tmp3103] = $tmp3102;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:309
frost$core$Int64** $tmp3104 = *(&local0);
frost$core$Int64 $tmp3105 = (frost$core$Int64) {206u};
frost$core$Int64** $tmp3106 = *(&local0);
frost$core$Int64 $tmp3107 = (frost$core$Int64) {0u};
int64_t $tmp3108 = $tmp3107.value;
frost$core$Int64* $tmp3109 = $tmp3106[$tmp3108];
int64_t $tmp3110 = $tmp3105.value;
$tmp3104[$tmp3110] = $tmp3109;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:310
frost$core$Int64** $tmp3111 = *(&local0);
frost$core$Int64 $tmp3112 = (frost$core$Int64) {207u};
frost$core$Int64** $tmp3113 = *(&local0);
frost$core$Int64 $tmp3114 = (frost$core$Int64) {0u};
int64_t $tmp3115 = $tmp3114.value;
frost$core$Int64* $tmp3116 = $tmp3113[$tmp3115];
int64_t $tmp3117 = $tmp3112.value;
$tmp3111[$tmp3117] = $tmp3116;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:311
frost$core$Int64** $tmp3118 = *(&local0);
frost$core$Int64 $tmp3119 = (frost$core$Int64) {208u};
frost$core$Int64** $tmp3120 = *(&local0);
frost$core$Int64 $tmp3121 = (frost$core$Int64) {0u};
int64_t $tmp3122 = $tmp3121.value;
frost$core$Int64* $tmp3123 = $tmp3120[$tmp3122];
int64_t $tmp3124 = $tmp3119.value;
$tmp3118[$tmp3124] = $tmp3123;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:312
frost$core$Int64** $tmp3125 = *(&local0);
frost$core$Int64 $tmp3126 = (frost$core$Int64) {209u};
frost$core$Int64** $tmp3127 = *(&local0);
frost$core$Int64 $tmp3128 = (frost$core$Int64) {0u};
int64_t $tmp3129 = $tmp3128.value;
frost$core$Int64* $tmp3130 = $tmp3127[$tmp3129];
int64_t $tmp3131 = $tmp3126.value;
$tmp3125[$tmp3131] = $tmp3130;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:313
frost$core$Int64** $tmp3132 = *(&local0);
frost$core$Int64 $tmp3133 = (frost$core$Int64) {210u};
frost$core$Int64** $tmp3134 = *(&local0);
frost$core$Int64 $tmp3135 = (frost$core$Int64) {0u};
int64_t $tmp3136 = $tmp3135.value;
frost$core$Int64* $tmp3137 = $tmp3134[$tmp3136];
int64_t $tmp3138 = $tmp3133.value;
$tmp3132[$tmp3138] = $tmp3137;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:314
frost$core$Int64** $tmp3139 = *(&local0);
frost$core$Int64 $tmp3140 = (frost$core$Int64) {211u};
frost$core$Int64** $tmp3141 = *(&local0);
frost$core$Int64 $tmp3142 = (frost$core$Int64) {0u};
int64_t $tmp3143 = $tmp3142.value;
frost$core$Int64* $tmp3144 = $tmp3141[$tmp3143];
int64_t $tmp3145 = $tmp3140.value;
$tmp3139[$tmp3145] = $tmp3144;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:315
frost$core$Int64** $tmp3146 = *(&local0);
frost$core$Int64 $tmp3147 = (frost$core$Int64) {212u};
frost$core$Int64** $tmp3148 = *(&local0);
frost$core$Int64 $tmp3149 = (frost$core$Int64) {0u};
int64_t $tmp3150 = $tmp3149.value;
frost$core$Int64* $tmp3151 = $tmp3148[$tmp3150];
int64_t $tmp3152 = $tmp3147.value;
$tmp3146[$tmp3152] = $tmp3151;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:316
frost$core$Int64** $tmp3153 = *(&local0);
frost$core$Int64 $tmp3154 = (frost$core$Int64) {213u};
frost$core$Int64** $tmp3155 = *(&local0);
frost$core$Int64 $tmp3156 = (frost$core$Int64) {0u};
int64_t $tmp3157 = $tmp3156.value;
frost$core$Int64* $tmp3158 = $tmp3155[$tmp3157];
int64_t $tmp3159 = $tmp3154.value;
$tmp3153[$tmp3159] = $tmp3158;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:317
frost$core$Int64** $tmp3160 = *(&local0);
frost$core$Int64 $tmp3161 = (frost$core$Int64) {214u};
frost$core$Int64** $tmp3162 = *(&local0);
frost$core$Int64 $tmp3163 = (frost$core$Int64) {0u};
int64_t $tmp3164 = $tmp3163.value;
frost$core$Int64* $tmp3165 = $tmp3162[$tmp3164];
int64_t $tmp3166 = $tmp3161.value;
$tmp3160[$tmp3166] = $tmp3165;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:318
frost$core$Int64** $tmp3167 = *(&local0);
frost$core$Int64 $tmp3168 = (frost$core$Int64) {215u};
frost$core$Int64** $tmp3169 = *(&local0);
frost$core$Int64 $tmp3170 = (frost$core$Int64) {0u};
int64_t $tmp3171 = $tmp3170.value;
frost$core$Int64* $tmp3172 = $tmp3169[$tmp3171];
int64_t $tmp3173 = $tmp3168.value;
$tmp3167[$tmp3173] = $tmp3172;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:319
frost$core$Int64** $tmp3174 = *(&local0);
frost$core$Int64 $tmp3175 = (frost$core$Int64) {216u};
frost$core$Int64** $tmp3176 = *(&local0);
frost$core$Int64 $tmp3177 = (frost$core$Int64) {0u};
int64_t $tmp3178 = $tmp3177.value;
frost$core$Int64* $tmp3179 = $tmp3176[$tmp3178];
int64_t $tmp3180 = $tmp3175.value;
$tmp3174[$tmp3180] = $tmp3179;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:320
frost$core$Int64** $tmp3181 = *(&local0);
frost$core$Int64 $tmp3182 = (frost$core$Int64) {217u};
frost$core$Int64** $tmp3183 = *(&local0);
frost$core$Int64 $tmp3184 = (frost$core$Int64) {0u};
int64_t $tmp3185 = $tmp3184.value;
frost$core$Int64* $tmp3186 = $tmp3183[$tmp3185];
int64_t $tmp3187 = $tmp3182.value;
$tmp3181[$tmp3187] = $tmp3186;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:321
frost$core$Int64** $tmp3188 = *(&local0);
frost$core$Int64 $tmp3189 = (frost$core$Int64) {218u};
frost$core$Int64** $tmp3190 = *(&local0);
frost$core$Int64 $tmp3191 = (frost$core$Int64) {0u};
int64_t $tmp3192 = $tmp3191.value;
frost$core$Int64* $tmp3193 = $tmp3190[$tmp3192];
int64_t $tmp3194 = $tmp3189.value;
$tmp3188[$tmp3194] = $tmp3193;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:322
frost$core$Int64** $tmp3195 = *(&local0);
frost$core$Int64 $tmp3196 = (frost$core$Int64) {219u};
frost$core$Int64** $tmp3197 = *(&local0);
frost$core$Int64 $tmp3198 = (frost$core$Int64) {0u};
int64_t $tmp3199 = $tmp3198.value;
frost$core$Int64* $tmp3200 = $tmp3197[$tmp3199];
int64_t $tmp3201 = $tmp3196.value;
$tmp3195[$tmp3201] = $tmp3200;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:323
frost$core$Int64** $tmp3202 = *(&local0);
frost$core$Int64 $tmp3203 = (frost$core$Int64) {220u};
frost$core$Int64** $tmp3204 = *(&local0);
frost$core$Int64 $tmp3205 = (frost$core$Int64) {0u};
int64_t $tmp3206 = $tmp3205.value;
frost$core$Int64* $tmp3207 = $tmp3204[$tmp3206];
int64_t $tmp3208 = $tmp3203.value;
$tmp3202[$tmp3208] = $tmp3207;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:324
frost$core$Int64** $tmp3209 = *(&local0);
frost$core$Int64 $tmp3210 = (frost$core$Int64) {221u};
frost$core$Int64** $tmp3211 = *(&local0);
frost$core$Int64 $tmp3212 = (frost$core$Int64) {0u};
int64_t $tmp3213 = $tmp3212.value;
frost$core$Int64* $tmp3214 = $tmp3211[$tmp3213];
int64_t $tmp3215 = $tmp3210.value;
$tmp3209[$tmp3215] = $tmp3214;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:325
frost$core$Int64** $tmp3216 = *(&local0);
frost$core$Int64 $tmp3217 = (frost$core$Int64) {222u};
frost$core$Int64** $tmp3218 = *(&local0);
frost$core$Int64 $tmp3219 = (frost$core$Int64) {0u};
int64_t $tmp3220 = $tmp3219.value;
frost$core$Int64* $tmp3221 = $tmp3218[$tmp3220];
int64_t $tmp3222 = $tmp3217.value;
$tmp3216[$tmp3222] = $tmp3221;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:326
frost$core$Int64** $tmp3223 = *(&local0);
frost$core$Int64 $tmp3224 = (frost$core$Int64) {223u};
frost$core$Int64** $tmp3225 = *(&local0);
frost$core$Int64 $tmp3226 = (frost$core$Int64) {0u};
int64_t $tmp3227 = $tmp3226.value;
frost$core$Int64* $tmp3228 = $tmp3225[$tmp3227];
int64_t $tmp3229 = $tmp3224.value;
$tmp3223[$tmp3229] = $tmp3228;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:327
frost$core$Int64** $tmp3230 = *(&local0);
frost$core$Int64 $tmp3231 = (frost$core$Int64) {224u};
frost$core$Int64** $tmp3232 = *(&local0);
frost$core$Int64 $tmp3233 = (frost$core$Int64) {0u};
int64_t $tmp3234 = $tmp3233.value;
frost$core$Int64* $tmp3235 = $tmp3232[$tmp3234];
int64_t $tmp3236 = $tmp3231.value;
$tmp3230[$tmp3236] = $tmp3235;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:328
frost$core$Int64** $tmp3237 = *(&local0);
frost$core$Int64 $tmp3238 = (frost$core$Int64) {225u};
frost$core$Int64** $tmp3239 = *(&local0);
frost$core$Int64 $tmp3240 = (frost$core$Int64) {0u};
int64_t $tmp3241 = $tmp3240.value;
frost$core$Int64* $tmp3242 = $tmp3239[$tmp3241];
int64_t $tmp3243 = $tmp3238.value;
$tmp3237[$tmp3243] = $tmp3242;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:329
frost$core$Int64** $tmp3244 = *(&local0);
frost$core$Int64 $tmp3245 = (frost$core$Int64) {226u};
frost$core$Int64** $tmp3246 = *(&local0);
frost$core$Int64 $tmp3247 = (frost$core$Int64) {0u};
int64_t $tmp3248 = $tmp3247.value;
frost$core$Int64* $tmp3249 = $tmp3246[$tmp3248];
int64_t $tmp3250 = $tmp3245.value;
$tmp3244[$tmp3250] = $tmp3249;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:330
frost$core$Int64** $tmp3251 = *(&local0);
frost$core$Int64 $tmp3252 = (frost$core$Int64) {227u};
frost$core$Int64** $tmp3253 = *(&local0);
frost$core$Int64 $tmp3254 = (frost$core$Int64) {0u};
int64_t $tmp3255 = $tmp3254.value;
frost$core$Int64* $tmp3256 = $tmp3253[$tmp3255];
int64_t $tmp3257 = $tmp3252.value;
$tmp3251[$tmp3257] = $tmp3256;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:331
frost$core$Int64** $tmp3258 = *(&local0);
frost$core$Int64 $tmp3259 = (frost$core$Int64) {228u};
frost$core$Int64** $tmp3260 = *(&local0);
frost$core$Int64 $tmp3261 = (frost$core$Int64) {0u};
int64_t $tmp3262 = $tmp3261.value;
frost$core$Int64* $tmp3263 = $tmp3260[$tmp3262];
int64_t $tmp3264 = $tmp3259.value;
$tmp3258[$tmp3264] = $tmp3263;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:332
frost$core$Int64** $tmp3265 = *(&local0);
frost$core$Int64 $tmp3266 = (frost$core$Int64) {229u};
frost$core$Int64** $tmp3267 = *(&local0);
frost$core$Int64 $tmp3268 = (frost$core$Int64) {0u};
int64_t $tmp3269 = $tmp3268.value;
frost$core$Int64* $tmp3270 = $tmp3267[$tmp3269];
int64_t $tmp3271 = $tmp3266.value;
$tmp3265[$tmp3271] = $tmp3270;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:333
frost$core$Int64** $tmp3272 = *(&local0);
frost$core$Int64 $tmp3273 = (frost$core$Int64) {230u};
frost$core$Int64** $tmp3274 = *(&local0);
frost$core$Int64 $tmp3275 = (frost$core$Int64) {0u};
int64_t $tmp3276 = $tmp3275.value;
frost$core$Int64* $tmp3277 = $tmp3274[$tmp3276];
int64_t $tmp3278 = $tmp3273.value;
$tmp3272[$tmp3278] = $tmp3277;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:334
frost$core$Int64** $tmp3279 = *(&local0);
frost$core$Int64 $tmp3280 = (frost$core$Int64) {231u};
frost$core$Int64** $tmp3281 = *(&local0);
frost$core$Int64 $tmp3282 = (frost$core$Int64) {0u};
int64_t $tmp3283 = $tmp3282.value;
frost$core$Int64* $tmp3284 = $tmp3281[$tmp3283];
int64_t $tmp3285 = $tmp3280.value;
$tmp3279[$tmp3285] = $tmp3284;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:335
frost$core$Int64** $tmp3286 = *(&local0);
frost$core$Int64 $tmp3287 = (frost$core$Int64) {232u};
frost$core$Int64** $tmp3288 = *(&local0);
frost$core$Int64 $tmp3289 = (frost$core$Int64) {0u};
int64_t $tmp3290 = $tmp3289.value;
frost$core$Int64* $tmp3291 = $tmp3288[$tmp3290];
int64_t $tmp3292 = $tmp3287.value;
$tmp3286[$tmp3292] = $tmp3291;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:336
frost$core$Int64** $tmp3293 = *(&local0);
frost$core$Int64 $tmp3294 = (frost$core$Int64) {233u};
frost$core$Int64** $tmp3295 = *(&local0);
frost$core$Int64 $tmp3296 = (frost$core$Int64) {0u};
int64_t $tmp3297 = $tmp3296.value;
frost$core$Int64* $tmp3298 = $tmp3295[$tmp3297];
int64_t $tmp3299 = $tmp3294.value;
$tmp3293[$tmp3299] = $tmp3298;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:337
frost$core$Int64** $tmp3300 = *(&local0);
frost$core$Int64 $tmp3301 = (frost$core$Int64) {234u};
frost$core$Int64** $tmp3302 = *(&local0);
frost$core$Int64 $tmp3303 = (frost$core$Int64) {0u};
int64_t $tmp3304 = $tmp3303.value;
frost$core$Int64* $tmp3305 = $tmp3302[$tmp3304];
int64_t $tmp3306 = $tmp3301.value;
$tmp3300[$tmp3306] = $tmp3305;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:338
frost$core$Int64** $tmp3307 = *(&local0);
frost$core$Int64 $tmp3308 = (frost$core$Int64) {235u};
frost$core$Int64** $tmp3309 = *(&local0);
frost$core$Int64 $tmp3310 = (frost$core$Int64) {0u};
int64_t $tmp3311 = $tmp3310.value;
frost$core$Int64* $tmp3312 = $tmp3309[$tmp3311];
int64_t $tmp3313 = $tmp3308.value;
$tmp3307[$tmp3313] = $tmp3312;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:339
frost$core$Int64** $tmp3314 = *(&local0);
frost$core$Int64 $tmp3315 = (frost$core$Int64) {236u};
frost$core$Int64** $tmp3316 = *(&local0);
frost$core$Int64 $tmp3317 = (frost$core$Int64) {0u};
int64_t $tmp3318 = $tmp3317.value;
frost$core$Int64* $tmp3319 = $tmp3316[$tmp3318];
int64_t $tmp3320 = $tmp3315.value;
$tmp3314[$tmp3320] = $tmp3319;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:340
frost$core$Int64** $tmp3321 = *(&local0);
frost$core$Int64 $tmp3322 = (frost$core$Int64) {237u};
frost$core$Int64** $tmp3323 = *(&local0);
frost$core$Int64 $tmp3324 = (frost$core$Int64) {0u};
int64_t $tmp3325 = $tmp3324.value;
frost$core$Int64* $tmp3326 = $tmp3323[$tmp3325];
int64_t $tmp3327 = $tmp3322.value;
$tmp3321[$tmp3327] = $tmp3326;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:341
frost$core$Int64** $tmp3328 = *(&local0);
frost$core$Int64 $tmp3329 = (frost$core$Int64) {238u};
frost$core$Int64** $tmp3330 = *(&local0);
frost$core$Int64 $tmp3331 = (frost$core$Int64) {0u};
int64_t $tmp3332 = $tmp3331.value;
frost$core$Int64* $tmp3333 = $tmp3330[$tmp3332];
int64_t $tmp3334 = $tmp3329.value;
$tmp3328[$tmp3334] = $tmp3333;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:342
frost$core$Int64** $tmp3335 = *(&local0);
frost$core$Int64 $tmp3336 = (frost$core$Int64) {239u};
frost$core$Int64** $tmp3337 = *(&local0);
frost$core$Int64 $tmp3338 = (frost$core$Int64) {0u};
int64_t $tmp3339 = $tmp3338.value;
frost$core$Int64* $tmp3340 = $tmp3337[$tmp3339];
int64_t $tmp3341 = $tmp3336.value;
$tmp3335[$tmp3341] = $tmp3340;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:343
frost$core$Int64** $tmp3342 = *(&local0);
frost$core$Int64 $tmp3343 = (frost$core$Int64) {240u};
frost$core$Int64** $tmp3344 = *(&local0);
frost$core$Int64 $tmp3345 = (frost$core$Int64) {0u};
int64_t $tmp3346 = $tmp3345.value;
frost$core$Int64* $tmp3347 = $tmp3344[$tmp3346];
int64_t $tmp3348 = $tmp3343.value;
$tmp3342[$tmp3348] = $tmp3347;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:344
frost$core$Int64** $tmp3349 = *(&local0);
frost$core$Int64 $tmp3350 = (frost$core$Int64) {241u};
frost$core$Int64** $tmp3351 = *(&local0);
frost$core$Int64 $tmp3352 = (frost$core$Int64) {0u};
int64_t $tmp3353 = $tmp3352.value;
frost$core$Int64* $tmp3354 = $tmp3351[$tmp3353];
int64_t $tmp3355 = $tmp3350.value;
$tmp3349[$tmp3355] = $tmp3354;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:345
frost$core$Int64** $tmp3356 = *(&local0);
frost$core$Int64 $tmp3357 = (frost$core$Int64) {242u};
frost$core$Int64** $tmp3358 = *(&local0);
frost$core$Int64 $tmp3359 = (frost$core$Int64) {0u};
int64_t $tmp3360 = $tmp3359.value;
frost$core$Int64* $tmp3361 = $tmp3358[$tmp3360];
int64_t $tmp3362 = $tmp3357.value;
$tmp3356[$tmp3362] = $tmp3361;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:346
frost$core$Int64** $tmp3363 = *(&local0);
frost$core$Int64 $tmp3364 = (frost$core$Int64) {243u};
frost$core$Int64** $tmp3365 = *(&local0);
frost$core$Int64 $tmp3366 = (frost$core$Int64) {0u};
int64_t $tmp3367 = $tmp3366.value;
frost$core$Int64* $tmp3368 = $tmp3365[$tmp3367];
int64_t $tmp3369 = $tmp3364.value;
$tmp3363[$tmp3369] = $tmp3368;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:347
frost$core$Int64** $tmp3370 = *(&local0);
frost$core$Int64 $tmp3371 = (frost$core$Int64) {244u};
frost$core$Int64** $tmp3372 = *(&local0);
frost$core$Int64 $tmp3373 = (frost$core$Int64) {0u};
int64_t $tmp3374 = $tmp3373.value;
frost$core$Int64* $tmp3375 = $tmp3372[$tmp3374];
int64_t $tmp3376 = $tmp3371.value;
$tmp3370[$tmp3376] = $tmp3375;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:348
frost$core$Int64** $tmp3377 = *(&local0);
frost$core$Int64 $tmp3378 = (frost$core$Int64) {245u};
frost$core$Int64** $tmp3379 = *(&local0);
frost$core$Int64 $tmp3380 = (frost$core$Int64) {0u};
int64_t $tmp3381 = $tmp3380.value;
frost$core$Int64* $tmp3382 = $tmp3379[$tmp3381];
int64_t $tmp3383 = $tmp3378.value;
$tmp3377[$tmp3383] = $tmp3382;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:349
frost$core$Int64** $tmp3384 = *(&local0);
frost$core$Int64 $tmp3385 = (frost$core$Int64) {246u};
frost$core$Int64** $tmp3386 = *(&local0);
frost$core$Int64 $tmp3387 = (frost$core$Int64) {0u};
int64_t $tmp3388 = $tmp3387.value;
frost$core$Int64* $tmp3389 = $tmp3386[$tmp3388];
int64_t $tmp3390 = $tmp3385.value;
$tmp3384[$tmp3390] = $tmp3389;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:350
frost$core$Int64** $tmp3391 = *(&local0);
frost$core$Int64 $tmp3392 = (frost$core$Int64) {247u};
frost$core$Int64** $tmp3393 = *(&local0);
frost$core$Int64 $tmp3394 = (frost$core$Int64) {0u};
int64_t $tmp3395 = $tmp3394.value;
frost$core$Int64* $tmp3396 = $tmp3393[$tmp3395];
int64_t $tmp3397 = $tmp3392.value;
$tmp3391[$tmp3397] = $tmp3396;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:351
frost$core$Int64** $tmp3398 = *(&local0);
frost$core$Int64 $tmp3399 = (frost$core$Int64) {248u};
frost$core$Int64** $tmp3400 = *(&local0);
frost$core$Int64 $tmp3401 = (frost$core$Int64) {0u};
int64_t $tmp3402 = $tmp3401.value;
frost$core$Int64* $tmp3403 = $tmp3400[$tmp3402];
int64_t $tmp3404 = $tmp3399.value;
$tmp3398[$tmp3404] = $tmp3403;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:352
frost$core$Int64** $tmp3405 = *(&local0);
frost$core$Int64 $tmp3406 = (frost$core$Int64) {249u};
frost$core$Int64** $tmp3407 = *(&local0);
frost$core$Int64 $tmp3408 = (frost$core$Int64) {0u};
int64_t $tmp3409 = $tmp3408.value;
frost$core$Int64* $tmp3410 = $tmp3407[$tmp3409];
int64_t $tmp3411 = $tmp3406.value;
$tmp3405[$tmp3411] = $tmp3410;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:353
frost$core$Int64** $tmp3412 = *(&local0);
frost$core$Int64 $tmp3413 = (frost$core$Int64) {250u};
frost$core$Int64** $tmp3414 = *(&local0);
frost$core$Int64 $tmp3415 = (frost$core$Int64) {0u};
int64_t $tmp3416 = $tmp3415.value;
frost$core$Int64* $tmp3417 = $tmp3414[$tmp3416];
int64_t $tmp3418 = $tmp3413.value;
$tmp3412[$tmp3418] = $tmp3417;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:354
frost$core$Int64** $tmp3419 = *(&local0);
frost$core$Int64 $tmp3420 = (frost$core$Int64) {251u};
frost$core$Int64** $tmp3421 = *(&local0);
frost$core$Int64 $tmp3422 = (frost$core$Int64) {0u};
int64_t $tmp3423 = $tmp3422.value;
frost$core$Int64* $tmp3424 = $tmp3421[$tmp3423];
int64_t $tmp3425 = $tmp3420.value;
$tmp3419[$tmp3425] = $tmp3424;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:355
frost$core$Int64** $tmp3426 = *(&local0);
frost$core$Int64 $tmp3427 = (frost$core$Int64) {252u};
frost$core$Int64** $tmp3428 = *(&local0);
frost$core$Int64 $tmp3429 = (frost$core$Int64) {0u};
int64_t $tmp3430 = $tmp3429.value;
frost$core$Int64* $tmp3431 = $tmp3428[$tmp3430];
int64_t $tmp3432 = $tmp3427.value;
$tmp3426[$tmp3432] = $tmp3431;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:356
frost$core$Int64** $tmp3433 = *(&local0);
frost$core$Int64 $tmp3434 = (frost$core$Int64) {253u};
frost$core$Int64** $tmp3435 = *(&local0);
frost$core$Int64 $tmp3436 = (frost$core$Int64) {0u};
int64_t $tmp3437 = $tmp3436.value;
frost$core$Int64* $tmp3438 = $tmp3435[$tmp3437];
int64_t $tmp3439 = $tmp3434.value;
$tmp3433[$tmp3439] = $tmp3438;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:357
frost$core$Int64** $tmp3440 = *(&local0);
frost$core$Int64 $tmp3441 = (frost$core$Int64) {254u};
frost$core$Int64** $tmp3442 = *(&local0);
frost$core$Int64 $tmp3443 = (frost$core$Int64) {0u};
int64_t $tmp3444 = $tmp3443.value;
frost$core$Int64* $tmp3445 = $tmp3442[$tmp3444];
int64_t $tmp3446 = $tmp3441.value;
$tmp3440[$tmp3446] = $tmp3445;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:358
frost$core$Int64** $tmp3447 = *(&local0);
frost$core$Int64 $tmp3448 = (frost$core$Int64) {255u};
frost$core$Int64** $tmp3449 = *(&local0);
frost$core$Int64 $tmp3450 = (frost$core$Int64) {0u};
int64_t $tmp3451 = $tmp3450.value;
frost$core$Int64* $tmp3452 = $tmp3449[$tmp3451];
int64_t $tmp3453 = $tmp3448.value;
$tmp3447[$tmp3453] = $tmp3452;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:359
frost$core$Int64** $tmp3454 = *(&local0);
return $tmp3454;

}
frost$core$Int64* org$frostlang$json$Lexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT() {

frost$core$Int64* local0;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:364
frost$core$Int64 $tmp3455 = (frost$core$Int64) {31u};
int64_t $tmp3456 = $tmp3455.value;
frost$core$Int64* $tmp3457 = ((frost$core$Int64*) frostAlloc($tmp3456 * 8));
*(&local0) = $tmp3457;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:365
frost$core$Int64* $tmp3458 = *(&local0);
frost$core$Int64 $tmp3459 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp3460 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3461 = $tmp3459.value;
$tmp3458[$tmp3461] = $tmp3460;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:366
frost$core$Int64* $tmp3462 = *(&local0);
frost$core$Int64 $tmp3463 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp3464 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3465 = $tmp3463.value;
$tmp3462[$tmp3465] = $tmp3464;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:367
frost$core$Int64* $tmp3466 = *(&local0);
frost$core$Int64 $tmp3467 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp3468 = (frost$core$Int64) {6u};
int64_t $tmp3469 = $tmp3467.value;
$tmp3466[$tmp3469] = $tmp3468;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:368
frost$core$Int64* $tmp3470 = *(&local0);
frost$core$Int64 $tmp3471 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp3472 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3473 = $tmp3471.value;
$tmp3470[$tmp3473] = $tmp3472;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:369
frost$core$Int64* $tmp3474 = *(&local0);
frost$core$Int64 $tmp3475 = (frost$core$Int64) {4u};
frost$core$Int64 $tmp3476 = (frost$core$Int64) {3u};
int64_t $tmp3477 = $tmp3475.value;
$tmp3474[$tmp3477] = $tmp3476;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:370
frost$core$Int64* $tmp3478 = *(&local0);
frost$core$Int64 $tmp3479 = (frost$core$Int64) {5u};
frost$core$Int64 $tmp3480 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3481 = $tmp3479.value;
$tmp3478[$tmp3481] = $tmp3480;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:371
frost$core$Int64* $tmp3482 = *(&local0);
frost$core$Int64 $tmp3483 = (frost$core$Int64) {6u};
frost$core$Int64 $tmp3484 = (frost$core$Int64) {14u};
int64_t $tmp3485 = $tmp3483.value;
$tmp3482[$tmp3485] = $tmp3484;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:372
frost$core$Int64* $tmp3486 = *(&local0);
frost$core$Int64 $tmp3487 = (frost$core$Int64) {7u};
frost$core$Int64 $tmp3488 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3489 = $tmp3487.value;
$tmp3486[$tmp3489] = $tmp3488;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:373
frost$core$Int64* $tmp3490 = *(&local0);
frost$core$Int64 $tmp3491 = (frost$core$Int64) {8u};
frost$core$Int64 $tmp3492 = (frost$core$Int64) {4u};
int64_t $tmp3493 = $tmp3491.value;
$tmp3490[$tmp3493] = $tmp3492;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:374
frost$core$Int64* $tmp3494 = *(&local0);
frost$core$Int64 $tmp3495 = (frost$core$Int64) {9u};
frost$core$Int64 $tmp3496 = (frost$core$Int64) {5u};
int64_t $tmp3497 = $tmp3495.value;
$tmp3494[$tmp3497] = $tmp3496;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:375
frost$core$Int64* $tmp3498 = *(&local0);
frost$core$Int64 $tmp3499 = (frost$core$Int64) {10u};
frost$core$Int64 $tmp3500 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3501 = $tmp3499.value;
$tmp3498[$tmp3501] = $tmp3500;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:376
frost$core$Int64* $tmp3502 = *(&local0);
frost$core$Int64 $tmp3503 = (frost$core$Int64) {11u};
frost$core$Int64 $tmp3504 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3505 = $tmp3503.value;
$tmp3502[$tmp3505] = $tmp3504;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:377
frost$core$Int64* $tmp3506 = *(&local0);
frost$core$Int64 $tmp3507 = (frost$core$Int64) {12u};
frost$core$Int64 $tmp3508 = (frost$core$Int64) {5u};
int64_t $tmp3509 = $tmp3507.value;
$tmp3506[$tmp3509] = $tmp3508;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:378
frost$core$Int64* $tmp3510 = *(&local0);
frost$core$Int64 $tmp3511 = (frost$core$Int64) {13u};
frost$core$Int64 $tmp3512 = (frost$core$Int64) {15u};
int64_t $tmp3513 = $tmp3511.value;
$tmp3510[$tmp3513] = $tmp3512;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:379
frost$core$Int64* $tmp3514 = *(&local0);
frost$core$Int64 $tmp3515 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp3516 = (frost$core$Int64) {12u};
int64_t $tmp3517 = $tmp3515.value;
$tmp3514[$tmp3517] = $tmp3516;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:380
frost$core$Int64* $tmp3518 = *(&local0);
frost$core$Int64 $tmp3519 = (frost$core$Int64) {15u};
frost$core$Int64 $tmp3520 = (frost$core$Int64) {13u};
int64_t $tmp3521 = $tmp3519.value;
$tmp3518[$tmp3521] = $tmp3520;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:381
frost$core$Int64* $tmp3522 = *(&local0);
frost$core$Int64 $tmp3523 = (frost$core$Int64) {16u};
frost$core$Int64 $tmp3524 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3525 = $tmp3523.value;
$tmp3522[$tmp3525] = $tmp3524;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:382
frost$core$Int64* $tmp3526 = *(&local0);
frost$core$Int64 $tmp3527 = (frost$core$Int64) {17u};
frost$core$Int64 $tmp3528 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3529 = $tmp3527.value;
$tmp3526[$tmp3529] = $tmp3528;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:383
frost$core$Int64* $tmp3530 = *(&local0);
frost$core$Int64 $tmp3531 = (frost$core$Int64) {18u};
frost$core$Int64 $tmp3532 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3533 = $tmp3531.value;
$tmp3530[$tmp3533] = $tmp3532;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:384
frost$core$Int64* $tmp3534 = *(&local0);
frost$core$Int64 $tmp3535 = (frost$core$Int64) {19u};
frost$core$Int64 $tmp3536 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3537 = $tmp3535.value;
$tmp3534[$tmp3537] = $tmp3536;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:385
frost$core$Int64* $tmp3538 = *(&local0);
frost$core$Int64 $tmp3539 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp3540 = (frost$core$Int64) {8u};
int64_t $tmp3541 = $tmp3539.value;
$tmp3538[$tmp3541] = $tmp3540;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:386
frost$core$Int64* $tmp3542 = *(&local0);
frost$core$Int64 $tmp3543 = (frost$core$Int64) {21u};
frost$core$Int64 $tmp3544 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3545 = $tmp3543.value;
$tmp3542[$tmp3545] = $tmp3544;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:387
frost$core$Int64* $tmp3546 = *(&local0);
frost$core$Int64 $tmp3547 = (frost$core$Int64) {22u};
frost$core$Int64 $tmp3548 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3549 = $tmp3547.value;
$tmp3546[$tmp3549] = $tmp3548;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:388
frost$core$Int64* $tmp3550 = *(&local0);
frost$core$Int64 $tmp3551 = (frost$core$Int64) {23u};
frost$core$Int64 $tmp3552 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3553 = $tmp3551.value;
$tmp3550[$tmp3553] = $tmp3552;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:389
frost$core$Int64* $tmp3554 = *(&local0);
frost$core$Int64 $tmp3555 = (frost$core$Int64) {24u};
frost$core$Int64 $tmp3556 = (frost$core$Int64) {9u};
int64_t $tmp3557 = $tmp3555.value;
$tmp3554[$tmp3557] = $tmp3556;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:390
frost$core$Int64* $tmp3558 = *(&local0);
frost$core$Int64 $tmp3559 = (frost$core$Int64) {25u};
frost$core$Int64 $tmp3560 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3561 = $tmp3559.value;
$tmp3558[$tmp3561] = $tmp3560;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:391
frost$core$Int64* $tmp3562 = *(&local0);
frost$core$Int64 $tmp3563 = (frost$core$Int64) {26u};
frost$core$Int64 $tmp3564 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3565 = $tmp3563.value;
$tmp3562[$tmp3565] = $tmp3564;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:392
frost$core$Int64* $tmp3566 = *(&local0);
frost$core$Int64 $tmp3567 = (frost$core$Int64) {27u};
frost$core$Int64 $tmp3568 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp3569 = $tmp3567.value;
$tmp3566[$tmp3569] = $tmp3568;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:393
frost$core$Int64* $tmp3570 = *(&local0);
frost$core$Int64 $tmp3571 = (frost$core$Int64) {28u};
frost$core$Int64 $tmp3572 = (frost$core$Int64) {7u};
int64_t $tmp3573 = $tmp3571.value;
$tmp3570[$tmp3573] = $tmp3572;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:394
frost$core$Int64* $tmp3574 = *(&local0);
frost$core$Int64 $tmp3575 = (frost$core$Int64) {29u};
frost$core$Int64 $tmp3576 = (frost$core$Int64) {10u};
int64_t $tmp3577 = $tmp3575.value;
$tmp3574[$tmp3577] = $tmp3576;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:395
frost$core$Int64* $tmp3578 = *(&local0);
frost$core$Int64 $tmp3579 = (frost$core$Int64) {30u};
frost$core$Int64 $tmp3580 = (frost$core$Int64) {11u};
int64_t $tmp3581 = $tmp3579.value;
$tmp3578[$tmp3581] = $tmp3580;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:396
frost$core$Int64* $tmp3582 = *(&local0);
return $tmp3582;

}
void org$frostlang$json$Lexer$cleanup(org$frostlang$json$Lexer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:401
frost$core$Int64*** $tmp3583 = &param0->transitions;
frost$core$Int64** $tmp3584 = *$tmp3583;
frost$core$Int64 $tmp3585 = (frost$core$Int64) {0u};
int64_t $tmp3586 = $tmp3585.value;
frost$core$Int64* $tmp3587 = $tmp3584[$tmp3586];
frostFree($tmp3587);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:402
frost$core$Int64*** $tmp3588 = &param0->transitions;
frost$core$Int64** $tmp3589 = *$tmp3588;
frost$core$Int64 $tmp3590 = (frost$core$Int64) {9u};
int64_t $tmp3591 = $tmp3590.value;
frost$core$Int64* $tmp3592 = $tmp3589[$tmp3591];
frostFree($tmp3592);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:403
frost$core$Int64*** $tmp3593 = &param0->transitions;
frost$core$Int64** $tmp3594 = *$tmp3593;
frost$core$Int64 $tmp3595 = (frost$core$Int64) {34u};
int64_t $tmp3596 = $tmp3595.value;
frost$core$Int64* $tmp3597 = $tmp3594[$tmp3596];
frostFree($tmp3597);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:404
frost$core$Int64*** $tmp3598 = &param0->transitions;
frost$core$Int64** $tmp3599 = *$tmp3598;
frost$core$Int64 $tmp3600 = (frost$core$Int64) {43u};
int64_t $tmp3601 = $tmp3600.value;
frost$core$Int64* $tmp3602 = $tmp3599[$tmp3601];
frostFree($tmp3602);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:405
frost$core$Int64*** $tmp3603 = &param0->transitions;
frost$core$Int64** $tmp3604 = *$tmp3603;
frost$core$Int64 $tmp3605 = (frost$core$Int64) {44u};
int64_t $tmp3606 = $tmp3605.value;
frost$core$Int64* $tmp3607 = $tmp3604[$tmp3606];
frostFree($tmp3607);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:406
frost$core$Int64*** $tmp3608 = &param0->transitions;
frost$core$Int64** $tmp3609 = *$tmp3608;
frost$core$Int64 $tmp3610 = (frost$core$Int64) {45u};
int64_t $tmp3611 = $tmp3610.value;
frost$core$Int64* $tmp3612 = $tmp3609[$tmp3611];
frostFree($tmp3612);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:407
frost$core$Int64*** $tmp3613 = &param0->transitions;
frost$core$Int64** $tmp3614 = *$tmp3613;
frost$core$Int64 $tmp3615 = (frost$core$Int64) {46u};
int64_t $tmp3616 = $tmp3615.value;
frost$core$Int64* $tmp3617 = $tmp3614[$tmp3616];
frostFree($tmp3617);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:408
frost$core$Int64*** $tmp3618 = &param0->transitions;
frost$core$Int64** $tmp3619 = *$tmp3618;
frost$core$Int64 $tmp3620 = (frost$core$Int64) {48u};
int64_t $tmp3621 = $tmp3620.value;
frost$core$Int64* $tmp3622 = $tmp3619[$tmp3621];
frostFree($tmp3622);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:409
frost$core$Int64*** $tmp3623 = &param0->transitions;
frost$core$Int64** $tmp3624 = *$tmp3623;
frost$core$Int64 $tmp3625 = (frost$core$Int64) {58u};
int64_t $tmp3626 = $tmp3625.value;
frost$core$Int64* $tmp3627 = $tmp3624[$tmp3626];
frostFree($tmp3627);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:410
frost$core$Int64*** $tmp3628 = &param0->transitions;
frost$core$Int64** $tmp3629 = *$tmp3628;
frost$core$Int64 $tmp3630 = (frost$core$Int64) {69u};
int64_t $tmp3631 = $tmp3630.value;
frost$core$Int64* $tmp3632 = $tmp3629[$tmp3631];
frostFree($tmp3632);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:411
frost$core$Int64*** $tmp3633 = &param0->transitions;
frost$core$Int64** $tmp3634 = *$tmp3633;
frost$core$Int64 $tmp3635 = (frost$core$Int64) {91u};
int64_t $tmp3636 = $tmp3635.value;
frost$core$Int64* $tmp3637 = $tmp3634[$tmp3636];
frostFree($tmp3637);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:412
frost$core$Int64*** $tmp3638 = &param0->transitions;
frost$core$Int64** $tmp3639 = *$tmp3638;
frost$core$Int64 $tmp3640 = (frost$core$Int64) {92u};
int64_t $tmp3641 = $tmp3640.value;
frost$core$Int64* $tmp3642 = $tmp3639[$tmp3641];
frostFree($tmp3642);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:413
frost$core$Int64*** $tmp3643 = &param0->transitions;
frost$core$Int64** $tmp3644 = *$tmp3643;
frost$core$Int64 $tmp3645 = (frost$core$Int64) {93u};
int64_t $tmp3646 = $tmp3645.value;
frost$core$Int64* $tmp3647 = $tmp3644[$tmp3646];
frostFree($tmp3647);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:414
frost$core$Int64*** $tmp3648 = &param0->transitions;
frost$core$Int64** $tmp3649 = *$tmp3648;
frost$core$Int64 $tmp3650 = (frost$core$Int64) {97u};
int64_t $tmp3651 = $tmp3650.value;
frost$core$Int64* $tmp3652 = $tmp3649[$tmp3651];
frostFree($tmp3652);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:415
frost$core$Int64*** $tmp3653 = &param0->transitions;
frost$core$Int64** $tmp3654 = *$tmp3653;
frost$core$Int64 $tmp3655 = (frost$core$Int64) {98u};
int64_t $tmp3656 = $tmp3655.value;
frost$core$Int64* $tmp3657 = $tmp3654[$tmp3656];
frostFree($tmp3657);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:416
frost$core$Int64*** $tmp3658 = &param0->transitions;
frost$core$Int64** $tmp3659 = *$tmp3658;
frost$core$Int64 $tmp3660 = (frost$core$Int64) {101u};
int64_t $tmp3661 = $tmp3660.value;
frost$core$Int64* $tmp3662 = $tmp3659[$tmp3661];
frostFree($tmp3662);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:417
frost$core$Int64*** $tmp3663 = &param0->transitions;
frost$core$Int64** $tmp3664 = *$tmp3663;
frost$core$Int64 $tmp3665 = (frost$core$Int64) {102u};
int64_t $tmp3666 = $tmp3665.value;
frost$core$Int64* $tmp3667 = $tmp3664[$tmp3666];
frostFree($tmp3667);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:418
frost$core$Int64*** $tmp3668 = &param0->transitions;
frost$core$Int64** $tmp3669 = *$tmp3668;
frost$core$Int64 $tmp3670 = (frost$core$Int64) {108u};
int64_t $tmp3671 = $tmp3670.value;
frost$core$Int64* $tmp3672 = $tmp3669[$tmp3671];
frostFree($tmp3672);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:419
frost$core$Int64*** $tmp3673 = &param0->transitions;
frost$core$Int64** $tmp3674 = *$tmp3673;
frost$core$Int64 $tmp3675 = (frost$core$Int64) {110u};
int64_t $tmp3676 = $tmp3675.value;
frost$core$Int64* $tmp3677 = $tmp3674[$tmp3676];
frostFree($tmp3677);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:420
frost$core$Int64*** $tmp3678 = &param0->transitions;
frost$core$Int64** $tmp3679 = *$tmp3678;
frost$core$Int64 $tmp3680 = (frost$core$Int64) {114u};
int64_t $tmp3681 = $tmp3680.value;
frost$core$Int64* $tmp3682 = $tmp3679[$tmp3681];
frostFree($tmp3682);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:421
frost$core$Int64*** $tmp3683 = &param0->transitions;
frost$core$Int64** $tmp3684 = *$tmp3683;
frost$core$Int64 $tmp3685 = (frost$core$Int64) {115u};
int64_t $tmp3686 = $tmp3685.value;
frost$core$Int64* $tmp3687 = $tmp3684[$tmp3686];
frostFree($tmp3687);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:422
frost$core$Int64*** $tmp3688 = &param0->transitions;
frost$core$Int64** $tmp3689 = *$tmp3688;
frost$core$Int64 $tmp3690 = (frost$core$Int64) {116u};
int64_t $tmp3691 = $tmp3690.value;
frost$core$Int64* $tmp3692 = $tmp3689[$tmp3691];
frostFree($tmp3692);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:423
frost$core$Int64*** $tmp3693 = &param0->transitions;
frost$core$Int64** $tmp3694 = *$tmp3693;
frost$core$Int64 $tmp3695 = (frost$core$Int64) {117u};
int64_t $tmp3696 = $tmp3695.value;
frost$core$Int64* $tmp3697 = $tmp3694[$tmp3696];
frostFree($tmp3697);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:424
frost$core$Int64*** $tmp3698 = &param0->transitions;
frost$core$Int64** $tmp3699 = *$tmp3698;
frost$core$Int64 $tmp3700 = (frost$core$Int64) {123u};
int64_t $tmp3701 = $tmp3700.value;
frost$core$Int64* $tmp3702 = $tmp3699[$tmp3701];
frostFree($tmp3702);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:425
frost$core$Int64*** $tmp3703 = &param0->transitions;
frost$core$Int64** $tmp3704 = *$tmp3703;
frost$core$Int64 $tmp3705 = (frost$core$Int64) {125u};
int64_t $tmp3706 = $tmp3705.value;
frost$core$Int64* $tmp3707 = $tmp3704[$tmp3706];
frostFree($tmp3707);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:426
frost$core$Int64*** $tmp3708 = &param0->transitions;
frost$core$Int64** $tmp3709 = *$tmp3708;
frostFree($tmp3709);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:427
frost$core$Int64** $tmp3710 = &param0->accepts;
frost$core$Int64* $tmp3711 = *$tmp3710;
frostFree($tmp3711);
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:400
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$plex$runtime$DFA** $tmp3712 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp3713 = *$tmp3712;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3713));
return;

}
org$frostlang$json$Token org$frostlang$json$Lexer$next$R$org$frostlang$json$Token(org$frostlang$json$Lexer* param0) {

org$frostlang$plex$runtime$RawToken local0;
org$frostlang$json$Token$Kind local1;
org$frostlang$json$Token$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:431
org$frostlang$plex$runtime$DFA** $tmp3714 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp3715 = *$tmp3714;
org$frostlang$plex$runtime$RawToken $tmp3716 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp3715);
*(&local0) = $tmp3716;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:432
org$frostlang$plex$runtime$RawToken $tmp3717 = *(&local0);
frost$core$Int64 $tmp3718 = $tmp3717.kind;
// begin inline call to org.frostlang.json.Token.Kind.init(rv:frost.core.Int64):org.frostlang.json.Token.Kind from Lexer.frost:432:70
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:11
frost$core$Int64* $tmp3719 = &(&local2)->$rawValue;
*$tmp3719 = $tmp3718;
org$frostlang$json$Token$Kind $tmp3720 = *(&local2);
*(&local1) = $tmp3720;
org$frostlang$json$Token$Kind $tmp3721 = *(&local1);
org$frostlang$plex$runtime$RawToken $tmp3722 = *(&local0);
frost$core$String$Index $tmp3723 = $tmp3722.start;
org$frostlang$plex$runtime$RawToken $tmp3724 = *(&local0);
frost$core$String$Index $tmp3725 = $tmp3724.end;
org$frostlang$plex$runtime$RawToken $tmp3726 = *(&local0);
frost$core$Int64 $tmp3727 = $tmp3726.line;
org$frostlang$plex$runtime$RawToken $tmp3728 = *(&local0);
frost$core$Int64 $tmp3729 = $tmp3728.column;
org$frostlang$json$Position $tmp3730 = org$frostlang$json$Position$init$frost$core$Int64$frost$core$Int64($tmp3727, $tmp3729);
org$frostlang$json$Token $tmp3731 = org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position($tmp3721, $tmp3723, $tmp3725, $tmp3730);
return $tmp3731;

}
void org$frostlang$json$Lexer$init(org$frostlang$json$Lexer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:15
frost$core$Int64** $tmp3732 = org$frostlang$json$Lexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT();
frost$core$Int64*** $tmp3733 = &param0->transitions;
*$tmp3733 = $tmp3732;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Lexer.frost:17
frost$core$Int64* $tmp3734 = org$frostlang$json$Lexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT();
frost$core$Int64** $tmp3735 = &param0->accepts;
*$tmp3735 = $tmp3734;
return;

}

