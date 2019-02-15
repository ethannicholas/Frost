#include "org/frostlang/regex/RegexLexer.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
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
frost$core$Int64 $tmp3 = (frost$core$Int64) {20u};
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
frost$core$Int64* org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT(frost$core$Int64 param0, frost$core$Int64 param1) {

frost$core$Int64* local0;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp11 = param0.value;
frost$core$Int64* $tmp12 = ((frost$core$Int64*) frostAlloc($tmp11 * 8));
*(&local0) = $tmp12;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
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
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
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
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp57 = *(&local0);
return $tmp57;

}
frost$core$Int64** org$frostlang$regex$RegexLexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT() {

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
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:35
frost$core$Int64 $tmp58 = (frost$core$Int64) {256u};
int64_t $tmp59 = $tmp58.value;
frost$core$Int64** $tmp60 = ((frost$core$Int64**) frostAlloc($tmp59 * 8));
*(&local0) = $tmp60;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:36
frost$core$Int64** $tmp61 = *(&local0);
frost$core$Int64 $tmp62 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp63 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp64 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:36:27
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp65 = $tmp63.value;
frost$core$Int64* $tmp66 = ((frost$core$Int64*) frostAlloc($tmp65 * 8));
*(&local1) = $tmp66;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
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
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
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
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp111 = *(&local1);
int64_t $tmp112 = $tmp62.value;
$tmp61[$tmp112] = $tmp111;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:37
frost$core$Int64** $tmp113 = *(&local0);
frost$core$Int64 $tmp114 = (frost$core$Int64) {0u};
int64_t $tmp115 = $tmp114.value;
frost$core$Int64* $tmp116 = $tmp113[$tmp115];
frost$core$Int64 $tmp117 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp118 = (frost$core$Int64) {2u};
int64_t $tmp119 = $tmp117.value;
$tmp116[$tmp119] = $tmp118;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:38
frost$core$Int64** $tmp120 = *(&local0);
frost$core$Int64 $tmp121 = (frost$core$Int64) {0u};
int64_t $tmp122 = $tmp121.value;
frost$core$Int64* $tmp123 = $tmp120[$tmp122];
frost$core$Int64 $tmp124 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp125 = (frost$core$Int64) {2u};
int64_t $tmp126 = $tmp124.value;
$tmp123[$tmp126] = $tmp125;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:39
frost$core$Int64** $tmp127 = *(&local0);
frost$core$Int64 $tmp128 = (frost$core$Int64) {1u};
frost$core$Int64** $tmp129 = *(&local0);
frost$core$Int64 $tmp130 = (frost$core$Int64) {0u};
int64_t $tmp131 = $tmp130.value;
frost$core$Int64* $tmp132 = $tmp129[$tmp131];
int64_t $tmp133 = $tmp128.value;
$tmp127[$tmp133] = $tmp132;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:40
frost$core$Int64** $tmp134 = *(&local0);
frost$core$Int64 $tmp135 = (frost$core$Int64) {2u};
frost$core$Int64** $tmp136 = *(&local0);
frost$core$Int64 $tmp137 = (frost$core$Int64) {0u};
int64_t $tmp138 = $tmp137.value;
frost$core$Int64* $tmp139 = $tmp136[$tmp138];
int64_t $tmp140 = $tmp135.value;
$tmp134[$tmp140] = $tmp139;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:41
frost$core$Int64** $tmp141 = *(&local0);
frost$core$Int64 $tmp142 = (frost$core$Int64) {3u};
frost$core$Int64** $tmp143 = *(&local0);
frost$core$Int64 $tmp144 = (frost$core$Int64) {0u};
int64_t $tmp145 = $tmp144.value;
frost$core$Int64* $tmp146 = $tmp143[$tmp145];
int64_t $tmp147 = $tmp142.value;
$tmp141[$tmp147] = $tmp146;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:42
frost$core$Int64** $tmp148 = *(&local0);
frost$core$Int64 $tmp149 = (frost$core$Int64) {4u};
frost$core$Int64** $tmp150 = *(&local0);
frost$core$Int64 $tmp151 = (frost$core$Int64) {0u};
int64_t $tmp152 = $tmp151.value;
frost$core$Int64* $tmp153 = $tmp150[$tmp152];
int64_t $tmp154 = $tmp149.value;
$tmp148[$tmp154] = $tmp153;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:43
frost$core$Int64** $tmp155 = *(&local0);
frost$core$Int64 $tmp156 = (frost$core$Int64) {5u};
frost$core$Int64** $tmp157 = *(&local0);
frost$core$Int64 $tmp158 = (frost$core$Int64) {0u};
int64_t $tmp159 = $tmp158.value;
frost$core$Int64* $tmp160 = $tmp157[$tmp159];
int64_t $tmp161 = $tmp156.value;
$tmp155[$tmp161] = $tmp160;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:44
frost$core$Int64** $tmp162 = *(&local0);
frost$core$Int64 $tmp163 = (frost$core$Int64) {6u};
frost$core$Int64** $tmp164 = *(&local0);
frost$core$Int64 $tmp165 = (frost$core$Int64) {0u};
int64_t $tmp166 = $tmp165.value;
frost$core$Int64* $tmp167 = $tmp164[$tmp166];
int64_t $tmp168 = $tmp163.value;
$tmp162[$tmp168] = $tmp167;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:45
frost$core$Int64** $tmp169 = *(&local0);
frost$core$Int64 $tmp170 = (frost$core$Int64) {7u};
frost$core$Int64** $tmp171 = *(&local0);
frost$core$Int64 $tmp172 = (frost$core$Int64) {0u};
int64_t $tmp173 = $tmp172.value;
frost$core$Int64* $tmp174 = $tmp171[$tmp173];
int64_t $tmp175 = $tmp170.value;
$tmp169[$tmp175] = $tmp174;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:46
frost$core$Int64** $tmp176 = *(&local0);
frost$core$Int64 $tmp177 = (frost$core$Int64) {8u};
frost$core$Int64** $tmp178 = *(&local0);
frost$core$Int64 $tmp179 = (frost$core$Int64) {0u};
int64_t $tmp180 = $tmp179.value;
frost$core$Int64* $tmp181 = $tmp178[$tmp180];
int64_t $tmp182 = $tmp177.value;
$tmp176[$tmp182] = $tmp181;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:47
frost$core$Int64** $tmp183 = *(&local0);
frost$core$Int64 $tmp184 = (frost$core$Int64) {9u};
frost$core$Int64** $tmp185 = *(&local0);
frost$core$Int64 $tmp186 = (frost$core$Int64) {0u};
int64_t $tmp187 = $tmp186.value;
frost$core$Int64* $tmp188 = $tmp185[$tmp187];
int64_t $tmp189 = $tmp184.value;
$tmp183[$tmp189] = $tmp188;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:48
frost$core$Int64** $tmp190 = *(&local0);
frost$core$Int64 $tmp191 = (frost$core$Int64) {10u};
frost$core$Int64 $tmp192 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp193 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:48:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp194 = $tmp192.value;
frost$core$Int64* $tmp195 = ((frost$core$Int64*) frostAlloc($tmp194 * 8));
*(&local3) = $tmp195;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp196 = (frost$core$Int64) {0u};
frost$core$Bit $tmp197 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp198 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp196, $tmp192, $tmp197);
frost$core$Int64 $tmp199 = $tmp198.min;
*(&local4) = $tmp199;
frost$core$Int64 $tmp200 = $tmp198.max;
frost$core$Bit $tmp201 = $tmp198.inclusive;
bool $tmp202 = $tmp201.value;
frost$core$Int64 $tmp203 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp204 = $tmp203.value;
frost$core$UInt64 $tmp205 = (frost$core$UInt64) {((uint64_t) $tmp204)};
if ($tmp202) goto block17; else goto block18;
block17:;
int64_t $tmp206 = $tmp199.value;
int64_t $tmp207 = $tmp200.value;
bool $tmp208 = $tmp206 <= $tmp207;
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block14; else goto block15;
block18:;
int64_t $tmp211 = $tmp199.value;
int64_t $tmp212 = $tmp200.value;
bool $tmp213 = $tmp211 < $tmp212;
frost$core$Bit $tmp214 = (frost$core$Bit) {$tmp213};
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp216 = *(&local3);
frost$core$Int64 $tmp217 = *(&local4);
int64_t $tmp218 = $tmp217.value;
$tmp216[$tmp218] = $tmp193;
frost$core$Int64 $tmp219 = *(&local4);
int64_t $tmp220 = $tmp200.value;
int64_t $tmp221 = $tmp219.value;
int64_t $tmp222 = $tmp220 - $tmp221;
frost$core$Int64 $tmp223 = (frost$core$Int64) {$tmp222};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp224 = $tmp223.value;
frost$core$UInt64 $tmp225 = (frost$core$UInt64) {((uint64_t) $tmp224)};
if ($tmp202) goto block21; else goto block22;
block21:;
uint64_t $tmp226 = $tmp225.value;
uint64_t $tmp227 = $tmp205.value;
bool $tmp228 = $tmp226 >= $tmp227;
frost$core$Bit $tmp229 = (frost$core$Bit) {$tmp228};
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block19; else goto block15;
block22:;
uint64_t $tmp231 = $tmp225.value;
uint64_t $tmp232 = $tmp205.value;
bool $tmp233 = $tmp231 > $tmp232;
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block19; else goto block15;
block19:;
int64_t $tmp236 = $tmp219.value;
int64_t $tmp237 = $tmp203.value;
int64_t $tmp238 = $tmp236 + $tmp237;
frost$core$Int64 $tmp239 = (frost$core$Int64) {$tmp238};
*(&local4) = $tmp239;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp240 = *(&local3);
int64_t $tmp241 = $tmp191.value;
$tmp190[$tmp241] = $tmp240;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:49
frost$core$Int64** $tmp242 = *(&local0);
frost$core$Int64 $tmp243 = (frost$core$Int64) {10u};
int64_t $tmp244 = $tmp243.value;
frost$core$Int64* $tmp245 = $tmp242[$tmp244];
frost$core$Int64 $tmp246 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp247 = (frost$core$Int64) {2u};
int64_t $tmp248 = $tmp246.value;
$tmp245[$tmp248] = $tmp247;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:50
frost$core$Int64** $tmp249 = *(&local0);
frost$core$Int64 $tmp250 = (frost$core$Int64) {11u};
frost$core$Int64** $tmp251 = *(&local0);
frost$core$Int64 $tmp252 = (frost$core$Int64) {0u};
int64_t $tmp253 = $tmp252.value;
frost$core$Int64* $tmp254 = $tmp251[$tmp253];
int64_t $tmp255 = $tmp250.value;
$tmp249[$tmp255] = $tmp254;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:51
frost$core$Int64** $tmp256 = *(&local0);
frost$core$Int64 $tmp257 = (frost$core$Int64) {12u};
frost$core$Int64** $tmp258 = *(&local0);
frost$core$Int64 $tmp259 = (frost$core$Int64) {0u};
int64_t $tmp260 = $tmp259.value;
frost$core$Int64* $tmp261 = $tmp258[$tmp260];
int64_t $tmp262 = $tmp257.value;
$tmp256[$tmp262] = $tmp261;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:52
frost$core$Int64** $tmp263 = *(&local0);
frost$core$Int64 $tmp264 = (frost$core$Int64) {13u};
frost$core$Int64** $tmp265 = *(&local0);
frost$core$Int64 $tmp266 = (frost$core$Int64) {0u};
int64_t $tmp267 = $tmp266.value;
frost$core$Int64* $tmp268 = $tmp265[$tmp267];
int64_t $tmp269 = $tmp264.value;
$tmp263[$tmp269] = $tmp268;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:53
frost$core$Int64** $tmp270 = *(&local0);
frost$core$Int64 $tmp271 = (frost$core$Int64) {14u};
frost$core$Int64** $tmp272 = *(&local0);
frost$core$Int64 $tmp273 = (frost$core$Int64) {0u};
int64_t $tmp274 = $tmp273.value;
frost$core$Int64* $tmp275 = $tmp272[$tmp274];
int64_t $tmp276 = $tmp271.value;
$tmp270[$tmp276] = $tmp275;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:54
frost$core$Int64** $tmp277 = *(&local0);
frost$core$Int64 $tmp278 = (frost$core$Int64) {15u};
frost$core$Int64** $tmp279 = *(&local0);
frost$core$Int64 $tmp280 = (frost$core$Int64) {0u};
int64_t $tmp281 = $tmp280.value;
frost$core$Int64* $tmp282 = $tmp279[$tmp281];
int64_t $tmp283 = $tmp278.value;
$tmp277[$tmp283] = $tmp282;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:55
frost$core$Int64** $tmp284 = *(&local0);
frost$core$Int64 $tmp285 = (frost$core$Int64) {16u};
frost$core$Int64** $tmp286 = *(&local0);
frost$core$Int64 $tmp287 = (frost$core$Int64) {0u};
int64_t $tmp288 = $tmp287.value;
frost$core$Int64* $tmp289 = $tmp286[$tmp288];
int64_t $tmp290 = $tmp285.value;
$tmp284[$tmp290] = $tmp289;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:56
frost$core$Int64** $tmp291 = *(&local0);
frost$core$Int64 $tmp292 = (frost$core$Int64) {17u};
frost$core$Int64** $tmp293 = *(&local0);
frost$core$Int64 $tmp294 = (frost$core$Int64) {0u};
int64_t $tmp295 = $tmp294.value;
frost$core$Int64* $tmp296 = $tmp293[$tmp295];
int64_t $tmp297 = $tmp292.value;
$tmp291[$tmp297] = $tmp296;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:57
frost$core$Int64** $tmp298 = *(&local0);
frost$core$Int64 $tmp299 = (frost$core$Int64) {18u};
frost$core$Int64** $tmp300 = *(&local0);
frost$core$Int64 $tmp301 = (frost$core$Int64) {0u};
int64_t $tmp302 = $tmp301.value;
frost$core$Int64* $tmp303 = $tmp300[$tmp302];
int64_t $tmp304 = $tmp299.value;
$tmp298[$tmp304] = $tmp303;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:58
frost$core$Int64** $tmp305 = *(&local0);
frost$core$Int64 $tmp306 = (frost$core$Int64) {19u};
frost$core$Int64** $tmp307 = *(&local0);
frost$core$Int64 $tmp308 = (frost$core$Int64) {0u};
int64_t $tmp309 = $tmp308.value;
frost$core$Int64* $tmp310 = $tmp307[$tmp309];
int64_t $tmp311 = $tmp306.value;
$tmp305[$tmp311] = $tmp310;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:59
frost$core$Int64** $tmp312 = *(&local0);
frost$core$Int64 $tmp313 = (frost$core$Int64) {20u};
frost$core$Int64** $tmp314 = *(&local0);
frost$core$Int64 $tmp315 = (frost$core$Int64) {0u};
int64_t $tmp316 = $tmp315.value;
frost$core$Int64* $tmp317 = $tmp314[$tmp316];
int64_t $tmp318 = $tmp313.value;
$tmp312[$tmp318] = $tmp317;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:60
frost$core$Int64** $tmp319 = *(&local0);
frost$core$Int64 $tmp320 = (frost$core$Int64) {21u};
frost$core$Int64** $tmp321 = *(&local0);
frost$core$Int64 $tmp322 = (frost$core$Int64) {0u};
int64_t $tmp323 = $tmp322.value;
frost$core$Int64* $tmp324 = $tmp321[$tmp323];
int64_t $tmp325 = $tmp320.value;
$tmp319[$tmp325] = $tmp324;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:61
frost$core$Int64** $tmp326 = *(&local0);
frost$core$Int64 $tmp327 = (frost$core$Int64) {22u};
frost$core$Int64** $tmp328 = *(&local0);
frost$core$Int64 $tmp329 = (frost$core$Int64) {0u};
int64_t $tmp330 = $tmp329.value;
frost$core$Int64* $tmp331 = $tmp328[$tmp330];
int64_t $tmp332 = $tmp327.value;
$tmp326[$tmp332] = $tmp331;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:62
frost$core$Int64** $tmp333 = *(&local0);
frost$core$Int64 $tmp334 = (frost$core$Int64) {23u};
frost$core$Int64** $tmp335 = *(&local0);
frost$core$Int64 $tmp336 = (frost$core$Int64) {0u};
int64_t $tmp337 = $tmp336.value;
frost$core$Int64* $tmp338 = $tmp335[$tmp337];
int64_t $tmp339 = $tmp334.value;
$tmp333[$tmp339] = $tmp338;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:63
frost$core$Int64** $tmp340 = *(&local0);
frost$core$Int64 $tmp341 = (frost$core$Int64) {24u};
frost$core$Int64** $tmp342 = *(&local0);
frost$core$Int64 $tmp343 = (frost$core$Int64) {0u};
int64_t $tmp344 = $tmp343.value;
frost$core$Int64* $tmp345 = $tmp342[$tmp344];
int64_t $tmp346 = $tmp341.value;
$tmp340[$tmp346] = $tmp345;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:64
frost$core$Int64** $tmp347 = *(&local0);
frost$core$Int64 $tmp348 = (frost$core$Int64) {25u};
frost$core$Int64** $tmp349 = *(&local0);
frost$core$Int64 $tmp350 = (frost$core$Int64) {0u};
int64_t $tmp351 = $tmp350.value;
frost$core$Int64* $tmp352 = $tmp349[$tmp351];
int64_t $tmp353 = $tmp348.value;
$tmp347[$tmp353] = $tmp352;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:65
frost$core$Int64** $tmp354 = *(&local0);
frost$core$Int64 $tmp355 = (frost$core$Int64) {26u};
frost$core$Int64** $tmp356 = *(&local0);
frost$core$Int64 $tmp357 = (frost$core$Int64) {0u};
int64_t $tmp358 = $tmp357.value;
frost$core$Int64* $tmp359 = $tmp356[$tmp358];
int64_t $tmp360 = $tmp355.value;
$tmp354[$tmp360] = $tmp359;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:66
frost$core$Int64** $tmp361 = *(&local0);
frost$core$Int64 $tmp362 = (frost$core$Int64) {27u};
frost$core$Int64** $tmp363 = *(&local0);
frost$core$Int64 $tmp364 = (frost$core$Int64) {0u};
int64_t $tmp365 = $tmp364.value;
frost$core$Int64* $tmp366 = $tmp363[$tmp365];
int64_t $tmp367 = $tmp362.value;
$tmp361[$tmp367] = $tmp366;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:67
frost$core$Int64** $tmp368 = *(&local0);
frost$core$Int64 $tmp369 = (frost$core$Int64) {28u};
frost$core$Int64** $tmp370 = *(&local0);
frost$core$Int64 $tmp371 = (frost$core$Int64) {0u};
int64_t $tmp372 = $tmp371.value;
frost$core$Int64* $tmp373 = $tmp370[$tmp372];
int64_t $tmp374 = $tmp369.value;
$tmp368[$tmp374] = $tmp373;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:68
frost$core$Int64** $tmp375 = *(&local0);
frost$core$Int64 $tmp376 = (frost$core$Int64) {29u};
frost$core$Int64** $tmp377 = *(&local0);
frost$core$Int64 $tmp378 = (frost$core$Int64) {0u};
int64_t $tmp379 = $tmp378.value;
frost$core$Int64* $tmp380 = $tmp377[$tmp379];
int64_t $tmp381 = $tmp376.value;
$tmp375[$tmp381] = $tmp380;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:69
frost$core$Int64** $tmp382 = *(&local0);
frost$core$Int64 $tmp383 = (frost$core$Int64) {30u};
frost$core$Int64** $tmp384 = *(&local0);
frost$core$Int64 $tmp385 = (frost$core$Int64) {0u};
int64_t $tmp386 = $tmp385.value;
frost$core$Int64* $tmp387 = $tmp384[$tmp386];
int64_t $tmp388 = $tmp383.value;
$tmp382[$tmp388] = $tmp387;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:70
frost$core$Int64** $tmp389 = *(&local0);
frost$core$Int64 $tmp390 = (frost$core$Int64) {31u};
frost$core$Int64** $tmp391 = *(&local0);
frost$core$Int64 $tmp392 = (frost$core$Int64) {0u};
int64_t $tmp393 = $tmp392.value;
frost$core$Int64* $tmp394 = $tmp391[$tmp393];
int64_t $tmp395 = $tmp390.value;
$tmp389[$tmp395] = $tmp394;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:71
frost$core$Int64** $tmp396 = *(&local0);
frost$core$Int64 $tmp397 = (frost$core$Int64) {32u};
frost$core$Int64** $tmp398 = *(&local0);
frost$core$Int64 $tmp399 = (frost$core$Int64) {0u};
int64_t $tmp400 = $tmp399.value;
frost$core$Int64* $tmp401 = $tmp398[$tmp400];
int64_t $tmp402 = $tmp397.value;
$tmp396[$tmp402] = $tmp401;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:72
frost$core$Int64** $tmp403 = *(&local0);
frost$core$Int64 $tmp404 = (frost$core$Int64) {33u};
frost$core$Int64** $tmp405 = *(&local0);
frost$core$Int64 $tmp406 = (frost$core$Int64) {0u};
int64_t $tmp407 = $tmp406.value;
frost$core$Int64* $tmp408 = $tmp405[$tmp407];
int64_t $tmp409 = $tmp404.value;
$tmp403[$tmp409] = $tmp408;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:73
frost$core$Int64** $tmp410 = *(&local0);
frost$core$Int64 $tmp411 = (frost$core$Int64) {34u};
frost$core$Int64** $tmp412 = *(&local0);
frost$core$Int64 $tmp413 = (frost$core$Int64) {0u};
int64_t $tmp414 = $tmp413.value;
frost$core$Int64* $tmp415 = $tmp412[$tmp414];
int64_t $tmp416 = $tmp411.value;
$tmp410[$tmp416] = $tmp415;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:74
frost$core$Int64** $tmp417 = *(&local0);
frost$core$Int64 $tmp418 = (frost$core$Int64) {35u};
frost$core$Int64** $tmp419 = *(&local0);
frost$core$Int64 $tmp420 = (frost$core$Int64) {0u};
int64_t $tmp421 = $tmp420.value;
frost$core$Int64* $tmp422 = $tmp419[$tmp421];
int64_t $tmp423 = $tmp418.value;
$tmp417[$tmp423] = $tmp422;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:75
frost$core$Int64** $tmp424 = *(&local0);
frost$core$Int64 $tmp425 = (frost$core$Int64) {36u};
frost$core$Int64 $tmp426 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp427 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:75:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp428 = $tmp426.value;
frost$core$Int64* $tmp429 = ((frost$core$Int64*) frostAlloc($tmp428 * 8));
*(&local5) = $tmp429;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp430 = (frost$core$Int64) {0u};
frost$core$Bit $tmp431 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp432 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp430, $tmp426, $tmp431);
frost$core$Int64 $tmp433 = $tmp432.min;
*(&local6) = $tmp433;
frost$core$Int64 $tmp434 = $tmp432.max;
frost$core$Bit $tmp435 = $tmp432.inclusive;
bool $tmp436 = $tmp435.value;
frost$core$Int64 $tmp437 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp438 = $tmp437.value;
frost$core$UInt64 $tmp439 = (frost$core$UInt64) {((uint64_t) $tmp438)};
if ($tmp436) goto block28; else goto block29;
block28:;
int64_t $tmp440 = $tmp433.value;
int64_t $tmp441 = $tmp434.value;
bool $tmp442 = $tmp440 <= $tmp441;
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block25; else goto block26;
block29:;
int64_t $tmp445 = $tmp433.value;
int64_t $tmp446 = $tmp434.value;
bool $tmp447 = $tmp445 < $tmp446;
frost$core$Bit $tmp448 = (frost$core$Bit) {$tmp447};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp450 = *(&local5);
frost$core$Int64 $tmp451 = *(&local6);
int64_t $tmp452 = $tmp451.value;
$tmp450[$tmp452] = $tmp427;
frost$core$Int64 $tmp453 = *(&local6);
int64_t $tmp454 = $tmp434.value;
int64_t $tmp455 = $tmp453.value;
int64_t $tmp456 = $tmp454 - $tmp455;
frost$core$Int64 $tmp457 = (frost$core$Int64) {$tmp456};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp458 = $tmp457.value;
frost$core$UInt64 $tmp459 = (frost$core$UInt64) {((uint64_t) $tmp458)};
if ($tmp436) goto block32; else goto block33;
block32:;
uint64_t $tmp460 = $tmp459.value;
uint64_t $tmp461 = $tmp439.value;
bool $tmp462 = $tmp460 >= $tmp461;
frost$core$Bit $tmp463 = (frost$core$Bit) {$tmp462};
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block30; else goto block26;
block33:;
uint64_t $tmp465 = $tmp459.value;
uint64_t $tmp466 = $tmp439.value;
bool $tmp467 = $tmp465 > $tmp466;
frost$core$Bit $tmp468 = (frost$core$Bit) {$tmp467};
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block30; else goto block26;
block30:;
int64_t $tmp470 = $tmp453.value;
int64_t $tmp471 = $tmp437.value;
int64_t $tmp472 = $tmp470 + $tmp471;
frost$core$Int64 $tmp473 = (frost$core$Int64) {$tmp472};
*(&local6) = $tmp473;
goto block25;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp474 = *(&local5);
int64_t $tmp475 = $tmp425.value;
$tmp424[$tmp475] = $tmp474;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:76
frost$core$Int64** $tmp476 = *(&local0);
frost$core$Int64 $tmp477 = (frost$core$Int64) {36u};
int64_t $tmp478 = $tmp477.value;
frost$core$Int64* $tmp479 = $tmp476[$tmp478];
frost$core$Int64 $tmp480 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp481 = (frost$core$Int64) {3u};
int64_t $tmp482 = $tmp480.value;
$tmp479[$tmp482] = $tmp481;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:77
frost$core$Int64** $tmp483 = *(&local0);
frost$core$Int64 $tmp484 = (frost$core$Int64) {36u};
int64_t $tmp485 = $tmp484.value;
frost$core$Int64* $tmp486 = $tmp483[$tmp485];
frost$core$Int64 $tmp487 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp488 = (frost$core$Int64) {2u};
int64_t $tmp489 = $tmp487.value;
$tmp486[$tmp489] = $tmp488;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:78
frost$core$Int64** $tmp490 = *(&local0);
frost$core$Int64 $tmp491 = (frost$core$Int64) {37u};
frost$core$Int64** $tmp492 = *(&local0);
frost$core$Int64 $tmp493 = (frost$core$Int64) {0u};
int64_t $tmp494 = $tmp493.value;
frost$core$Int64* $tmp495 = $tmp492[$tmp494];
int64_t $tmp496 = $tmp491.value;
$tmp490[$tmp496] = $tmp495;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:79
frost$core$Int64** $tmp497 = *(&local0);
frost$core$Int64 $tmp498 = (frost$core$Int64) {38u};
frost$core$Int64** $tmp499 = *(&local0);
frost$core$Int64 $tmp500 = (frost$core$Int64) {0u};
int64_t $tmp501 = $tmp500.value;
frost$core$Int64* $tmp502 = $tmp499[$tmp501];
int64_t $tmp503 = $tmp498.value;
$tmp497[$tmp503] = $tmp502;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:80
frost$core$Int64** $tmp504 = *(&local0);
frost$core$Int64 $tmp505 = (frost$core$Int64) {39u};
frost$core$Int64 $tmp506 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp507 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:80:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp508 = $tmp506.value;
frost$core$Int64* $tmp509 = ((frost$core$Int64*) frostAlloc($tmp508 * 8));
*(&local7) = $tmp509;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp510 = (frost$core$Int64) {0u};
frost$core$Bit $tmp511 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp512 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp510, $tmp506, $tmp511);
frost$core$Int64 $tmp513 = $tmp512.min;
*(&local8) = $tmp513;
frost$core$Int64 $tmp514 = $tmp512.max;
frost$core$Bit $tmp515 = $tmp512.inclusive;
bool $tmp516 = $tmp515.value;
frost$core$Int64 $tmp517 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp518 = $tmp517.value;
frost$core$UInt64 $tmp519 = (frost$core$UInt64) {((uint64_t) $tmp518)};
if ($tmp516) goto block39; else goto block40;
block39:;
int64_t $tmp520 = $tmp513.value;
int64_t $tmp521 = $tmp514.value;
bool $tmp522 = $tmp520 <= $tmp521;
frost$core$Bit $tmp523 = (frost$core$Bit) {$tmp522};
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block36; else goto block37;
block40:;
int64_t $tmp525 = $tmp513.value;
int64_t $tmp526 = $tmp514.value;
bool $tmp527 = $tmp525 < $tmp526;
frost$core$Bit $tmp528 = (frost$core$Bit) {$tmp527};
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp530 = *(&local7);
frost$core$Int64 $tmp531 = *(&local8);
int64_t $tmp532 = $tmp531.value;
$tmp530[$tmp532] = $tmp507;
frost$core$Int64 $tmp533 = *(&local8);
int64_t $tmp534 = $tmp514.value;
int64_t $tmp535 = $tmp533.value;
int64_t $tmp536 = $tmp534 - $tmp535;
frost$core$Int64 $tmp537 = (frost$core$Int64) {$tmp536};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp538 = $tmp537.value;
frost$core$UInt64 $tmp539 = (frost$core$UInt64) {((uint64_t) $tmp538)};
if ($tmp516) goto block43; else goto block44;
block43:;
uint64_t $tmp540 = $tmp539.value;
uint64_t $tmp541 = $tmp519.value;
bool $tmp542 = $tmp540 >= $tmp541;
frost$core$Bit $tmp543 = (frost$core$Bit) {$tmp542};
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block41; else goto block37;
block44:;
uint64_t $tmp545 = $tmp539.value;
uint64_t $tmp546 = $tmp519.value;
bool $tmp547 = $tmp545 > $tmp546;
frost$core$Bit $tmp548 = (frost$core$Bit) {$tmp547};
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block41; else goto block37;
block41:;
int64_t $tmp550 = $tmp533.value;
int64_t $tmp551 = $tmp517.value;
int64_t $tmp552 = $tmp550 + $tmp551;
frost$core$Int64 $tmp553 = (frost$core$Int64) {$tmp552};
*(&local8) = $tmp553;
goto block36;
block37:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp554 = *(&local7);
int64_t $tmp555 = $tmp505.value;
$tmp504[$tmp555] = $tmp554;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:81
frost$core$Int64** $tmp556 = *(&local0);
frost$core$Int64 $tmp557 = (frost$core$Int64) {39u};
int64_t $tmp558 = $tmp557.value;
frost$core$Int64* $tmp559 = $tmp556[$tmp558];
frost$core$Int64 $tmp560 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp561 = (frost$core$Int64) {4u};
int64_t $tmp562 = $tmp560.value;
$tmp559[$tmp562] = $tmp561;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:82
frost$core$Int64** $tmp563 = *(&local0);
frost$core$Int64 $tmp564 = (frost$core$Int64) {39u};
int64_t $tmp565 = $tmp564.value;
frost$core$Int64* $tmp566 = $tmp563[$tmp565];
frost$core$Int64 $tmp567 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp568 = (frost$core$Int64) {2u};
int64_t $tmp569 = $tmp567.value;
$tmp566[$tmp569] = $tmp568;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:83
frost$core$Int64** $tmp570 = *(&local0);
frost$core$Int64 $tmp571 = (frost$core$Int64) {40u};
frost$core$Int64 $tmp572 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp573 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:83:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp574 = $tmp572.value;
frost$core$Int64* $tmp575 = ((frost$core$Int64*) frostAlloc($tmp574 * 8));
*(&local9) = $tmp575;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp576 = (frost$core$Int64) {0u};
frost$core$Bit $tmp577 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp578 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp576, $tmp572, $tmp577);
frost$core$Int64 $tmp579 = $tmp578.min;
*(&local10) = $tmp579;
frost$core$Int64 $tmp580 = $tmp578.max;
frost$core$Bit $tmp581 = $tmp578.inclusive;
bool $tmp582 = $tmp581.value;
frost$core$Int64 $tmp583 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp584 = $tmp583.value;
frost$core$UInt64 $tmp585 = (frost$core$UInt64) {((uint64_t) $tmp584)};
if ($tmp582) goto block50; else goto block51;
block50:;
int64_t $tmp586 = $tmp579.value;
int64_t $tmp587 = $tmp580.value;
bool $tmp588 = $tmp586 <= $tmp587;
frost$core$Bit $tmp589 = (frost$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block47; else goto block48;
block51:;
int64_t $tmp591 = $tmp579.value;
int64_t $tmp592 = $tmp580.value;
bool $tmp593 = $tmp591 < $tmp592;
frost$core$Bit $tmp594 = (frost$core$Bit) {$tmp593};
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp596 = *(&local9);
frost$core$Int64 $tmp597 = *(&local10);
int64_t $tmp598 = $tmp597.value;
$tmp596[$tmp598] = $tmp573;
frost$core$Int64 $tmp599 = *(&local10);
int64_t $tmp600 = $tmp580.value;
int64_t $tmp601 = $tmp599.value;
int64_t $tmp602 = $tmp600 - $tmp601;
frost$core$Int64 $tmp603 = (frost$core$Int64) {$tmp602};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp604 = $tmp603.value;
frost$core$UInt64 $tmp605 = (frost$core$UInt64) {((uint64_t) $tmp604)};
if ($tmp582) goto block54; else goto block55;
block54:;
uint64_t $tmp606 = $tmp605.value;
uint64_t $tmp607 = $tmp585.value;
bool $tmp608 = $tmp606 >= $tmp607;
frost$core$Bit $tmp609 = (frost$core$Bit) {$tmp608};
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block52; else goto block48;
block55:;
uint64_t $tmp611 = $tmp605.value;
uint64_t $tmp612 = $tmp585.value;
bool $tmp613 = $tmp611 > $tmp612;
frost$core$Bit $tmp614 = (frost$core$Bit) {$tmp613};
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block52; else goto block48;
block52:;
int64_t $tmp616 = $tmp599.value;
int64_t $tmp617 = $tmp583.value;
int64_t $tmp618 = $tmp616 + $tmp617;
frost$core$Int64 $tmp619 = (frost$core$Int64) {$tmp618};
*(&local10) = $tmp619;
goto block47;
block48:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp620 = *(&local9);
int64_t $tmp621 = $tmp571.value;
$tmp570[$tmp621] = $tmp620;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:84
frost$core$Int64** $tmp622 = *(&local0);
frost$core$Int64 $tmp623 = (frost$core$Int64) {40u};
int64_t $tmp624 = $tmp623.value;
frost$core$Int64* $tmp625 = $tmp622[$tmp624];
frost$core$Int64 $tmp626 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp627 = (frost$core$Int64) {5u};
int64_t $tmp628 = $tmp626.value;
$tmp625[$tmp628] = $tmp627;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:85
frost$core$Int64** $tmp629 = *(&local0);
frost$core$Int64 $tmp630 = (frost$core$Int64) {40u};
int64_t $tmp631 = $tmp630.value;
frost$core$Int64* $tmp632 = $tmp629[$tmp631];
frost$core$Int64 $tmp633 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp634 = (frost$core$Int64) {2u};
int64_t $tmp635 = $tmp633.value;
$tmp632[$tmp635] = $tmp634;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:86
frost$core$Int64** $tmp636 = *(&local0);
frost$core$Int64 $tmp637 = (frost$core$Int64) {41u};
frost$core$Int64 $tmp638 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp639 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:86:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp640 = $tmp638.value;
frost$core$Int64* $tmp641 = ((frost$core$Int64*) frostAlloc($tmp640 * 8));
*(&local11) = $tmp641;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp642 = (frost$core$Int64) {0u};
frost$core$Bit $tmp643 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp644 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp642, $tmp638, $tmp643);
frost$core$Int64 $tmp645 = $tmp644.min;
*(&local12) = $tmp645;
frost$core$Int64 $tmp646 = $tmp644.max;
frost$core$Bit $tmp647 = $tmp644.inclusive;
bool $tmp648 = $tmp647.value;
frost$core$Int64 $tmp649 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp650 = $tmp649.value;
frost$core$UInt64 $tmp651 = (frost$core$UInt64) {((uint64_t) $tmp650)};
if ($tmp648) goto block61; else goto block62;
block61:;
int64_t $tmp652 = $tmp645.value;
int64_t $tmp653 = $tmp646.value;
bool $tmp654 = $tmp652 <= $tmp653;
frost$core$Bit $tmp655 = (frost$core$Bit) {$tmp654};
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block58; else goto block59;
block62:;
int64_t $tmp657 = $tmp645.value;
int64_t $tmp658 = $tmp646.value;
bool $tmp659 = $tmp657 < $tmp658;
frost$core$Bit $tmp660 = (frost$core$Bit) {$tmp659};
bool $tmp661 = $tmp660.value;
if ($tmp661) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp662 = *(&local11);
frost$core$Int64 $tmp663 = *(&local12);
int64_t $tmp664 = $tmp663.value;
$tmp662[$tmp664] = $tmp639;
frost$core$Int64 $tmp665 = *(&local12);
int64_t $tmp666 = $tmp646.value;
int64_t $tmp667 = $tmp665.value;
int64_t $tmp668 = $tmp666 - $tmp667;
frost$core$Int64 $tmp669 = (frost$core$Int64) {$tmp668};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp670 = $tmp669.value;
frost$core$UInt64 $tmp671 = (frost$core$UInt64) {((uint64_t) $tmp670)};
if ($tmp648) goto block65; else goto block66;
block65:;
uint64_t $tmp672 = $tmp671.value;
uint64_t $tmp673 = $tmp651.value;
bool $tmp674 = $tmp672 >= $tmp673;
frost$core$Bit $tmp675 = (frost$core$Bit) {$tmp674};
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block63; else goto block59;
block66:;
uint64_t $tmp677 = $tmp671.value;
uint64_t $tmp678 = $tmp651.value;
bool $tmp679 = $tmp677 > $tmp678;
frost$core$Bit $tmp680 = (frost$core$Bit) {$tmp679};
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block63; else goto block59;
block63:;
int64_t $tmp682 = $tmp665.value;
int64_t $tmp683 = $tmp649.value;
int64_t $tmp684 = $tmp682 + $tmp683;
frost$core$Int64 $tmp685 = (frost$core$Int64) {$tmp684};
*(&local12) = $tmp685;
goto block58;
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp686 = *(&local11);
int64_t $tmp687 = $tmp637.value;
$tmp636[$tmp687] = $tmp686;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:87
frost$core$Int64** $tmp688 = *(&local0);
frost$core$Int64 $tmp689 = (frost$core$Int64) {41u};
int64_t $tmp690 = $tmp689.value;
frost$core$Int64* $tmp691 = $tmp688[$tmp690];
frost$core$Int64 $tmp692 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp693 = (frost$core$Int64) {6u};
int64_t $tmp694 = $tmp692.value;
$tmp691[$tmp694] = $tmp693;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:88
frost$core$Int64** $tmp695 = *(&local0);
frost$core$Int64 $tmp696 = (frost$core$Int64) {41u};
int64_t $tmp697 = $tmp696.value;
frost$core$Int64* $tmp698 = $tmp695[$tmp697];
frost$core$Int64 $tmp699 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp700 = (frost$core$Int64) {2u};
int64_t $tmp701 = $tmp699.value;
$tmp698[$tmp701] = $tmp700;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:89
frost$core$Int64** $tmp702 = *(&local0);
frost$core$Int64 $tmp703 = (frost$core$Int64) {42u};
frost$core$Int64 $tmp704 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp705 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:89:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp706 = $tmp704.value;
frost$core$Int64* $tmp707 = ((frost$core$Int64*) frostAlloc($tmp706 * 8));
*(&local13) = $tmp707;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp708 = (frost$core$Int64) {0u};
frost$core$Bit $tmp709 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp710 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp708, $tmp704, $tmp709);
frost$core$Int64 $tmp711 = $tmp710.min;
*(&local14) = $tmp711;
frost$core$Int64 $tmp712 = $tmp710.max;
frost$core$Bit $tmp713 = $tmp710.inclusive;
bool $tmp714 = $tmp713.value;
frost$core$Int64 $tmp715 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp716 = $tmp715.value;
frost$core$UInt64 $tmp717 = (frost$core$UInt64) {((uint64_t) $tmp716)};
if ($tmp714) goto block72; else goto block73;
block72:;
int64_t $tmp718 = $tmp711.value;
int64_t $tmp719 = $tmp712.value;
bool $tmp720 = $tmp718 <= $tmp719;
frost$core$Bit $tmp721 = (frost$core$Bit) {$tmp720};
bool $tmp722 = $tmp721.value;
if ($tmp722) goto block69; else goto block70;
block73:;
int64_t $tmp723 = $tmp711.value;
int64_t $tmp724 = $tmp712.value;
bool $tmp725 = $tmp723 < $tmp724;
frost$core$Bit $tmp726 = (frost$core$Bit) {$tmp725};
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp728 = *(&local13);
frost$core$Int64 $tmp729 = *(&local14);
int64_t $tmp730 = $tmp729.value;
$tmp728[$tmp730] = $tmp705;
frost$core$Int64 $tmp731 = *(&local14);
int64_t $tmp732 = $tmp712.value;
int64_t $tmp733 = $tmp731.value;
int64_t $tmp734 = $tmp732 - $tmp733;
frost$core$Int64 $tmp735 = (frost$core$Int64) {$tmp734};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp736 = $tmp735.value;
frost$core$UInt64 $tmp737 = (frost$core$UInt64) {((uint64_t) $tmp736)};
if ($tmp714) goto block76; else goto block77;
block76:;
uint64_t $tmp738 = $tmp737.value;
uint64_t $tmp739 = $tmp717.value;
bool $tmp740 = $tmp738 >= $tmp739;
frost$core$Bit $tmp741 = (frost$core$Bit) {$tmp740};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block74; else goto block70;
block77:;
uint64_t $tmp743 = $tmp737.value;
uint64_t $tmp744 = $tmp717.value;
bool $tmp745 = $tmp743 > $tmp744;
frost$core$Bit $tmp746 = (frost$core$Bit) {$tmp745};
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block74; else goto block70;
block74:;
int64_t $tmp748 = $tmp731.value;
int64_t $tmp749 = $tmp715.value;
int64_t $tmp750 = $tmp748 + $tmp749;
frost$core$Int64 $tmp751 = (frost$core$Int64) {$tmp750};
*(&local14) = $tmp751;
goto block69;
block70:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp752 = *(&local13);
int64_t $tmp753 = $tmp703.value;
$tmp702[$tmp753] = $tmp752;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:90
frost$core$Int64** $tmp754 = *(&local0);
frost$core$Int64 $tmp755 = (frost$core$Int64) {42u};
int64_t $tmp756 = $tmp755.value;
frost$core$Int64* $tmp757 = $tmp754[$tmp756];
frost$core$Int64 $tmp758 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp759 = (frost$core$Int64) {7u};
int64_t $tmp760 = $tmp758.value;
$tmp757[$tmp760] = $tmp759;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:91
frost$core$Int64** $tmp761 = *(&local0);
frost$core$Int64 $tmp762 = (frost$core$Int64) {42u};
int64_t $tmp763 = $tmp762.value;
frost$core$Int64* $tmp764 = $tmp761[$tmp763];
frost$core$Int64 $tmp765 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp766 = (frost$core$Int64) {2u};
int64_t $tmp767 = $tmp765.value;
$tmp764[$tmp767] = $tmp766;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:92
frost$core$Int64** $tmp768 = *(&local0);
frost$core$Int64 $tmp769 = (frost$core$Int64) {43u};
frost$core$Int64 $tmp770 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp771 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:92:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp772 = $tmp770.value;
frost$core$Int64* $tmp773 = ((frost$core$Int64*) frostAlloc($tmp772 * 8));
*(&local15) = $tmp773;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp774 = (frost$core$Int64) {0u};
frost$core$Bit $tmp775 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp776 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp774, $tmp770, $tmp775);
frost$core$Int64 $tmp777 = $tmp776.min;
*(&local16) = $tmp777;
frost$core$Int64 $tmp778 = $tmp776.max;
frost$core$Bit $tmp779 = $tmp776.inclusive;
bool $tmp780 = $tmp779.value;
frost$core$Int64 $tmp781 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp782 = $tmp781.value;
frost$core$UInt64 $tmp783 = (frost$core$UInt64) {((uint64_t) $tmp782)};
if ($tmp780) goto block83; else goto block84;
block83:;
int64_t $tmp784 = $tmp777.value;
int64_t $tmp785 = $tmp778.value;
bool $tmp786 = $tmp784 <= $tmp785;
frost$core$Bit $tmp787 = (frost$core$Bit) {$tmp786};
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block80; else goto block81;
block84:;
int64_t $tmp789 = $tmp777.value;
int64_t $tmp790 = $tmp778.value;
bool $tmp791 = $tmp789 < $tmp790;
frost$core$Bit $tmp792 = (frost$core$Bit) {$tmp791};
bool $tmp793 = $tmp792.value;
if ($tmp793) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp794 = *(&local15);
frost$core$Int64 $tmp795 = *(&local16);
int64_t $tmp796 = $tmp795.value;
$tmp794[$tmp796] = $tmp771;
frost$core$Int64 $tmp797 = *(&local16);
int64_t $tmp798 = $tmp778.value;
int64_t $tmp799 = $tmp797.value;
int64_t $tmp800 = $tmp798 - $tmp799;
frost$core$Int64 $tmp801 = (frost$core$Int64) {$tmp800};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp802 = $tmp801.value;
frost$core$UInt64 $tmp803 = (frost$core$UInt64) {((uint64_t) $tmp802)};
if ($tmp780) goto block87; else goto block88;
block87:;
uint64_t $tmp804 = $tmp803.value;
uint64_t $tmp805 = $tmp783.value;
bool $tmp806 = $tmp804 >= $tmp805;
frost$core$Bit $tmp807 = (frost$core$Bit) {$tmp806};
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block85; else goto block81;
block88:;
uint64_t $tmp809 = $tmp803.value;
uint64_t $tmp810 = $tmp783.value;
bool $tmp811 = $tmp809 > $tmp810;
frost$core$Bit $tmp812 = (frost$core$Bit) {$tmp811};
bool $tmp813 = $tmp812.value;
if ($tmp813) goto block85; else goto block81;
block85:;
int64_t $tmp814 = $tmp797.value;
int64_t $tmp815 = $tmp781.value;
int64_t $tmp816 = $tmp814 + $tmp815;
frost$core$Int64 $tmp817 = (frost$core$Int64) {$tmp816};
*(&local16) = $tmp817;
goto block80;
block81:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp818 = *(&local15);
int64_t $tmp819 = $tmp769.value;
$tmp768[$tmp819] = $tmp818;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:93
frost$core$Int64** $tmp820 = *(&local0);
frost$core$Int64 $tmp821 = (frost$core$Int64) {43u};
int64_t $tmp822 = $tmp821.value;
frost$core$Int64* $tmp823 = $tmp820[$tmp822];
frost$core$Int64 $tmp824 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp825 = (frost$core$Int64) {8u};
int64_t $tmp826 = $tmp824.value;
$tmp823[$tmp826] = $tmp825;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:94
frost$core$Int64** $tmp827 = *(&local0);
frost$core$Int64 $tmp828 = (frost$core$Int64) {43u};
int64_t $tmp829 = $tmp828.value;
frost$core$Int64* $tmp830 = $tmp827[$tmp829];
frost$core$Int64 $tmp831 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp832 = (frost$core$Int64) {2u};
int64_t $tmp833 = $tmp831.value;
$tmp830[$tmp833] = $tmp832;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:95
frost$core$Int64** $tmp834 = *(&local0);
frost$core$Int64 $tmp835 = (frost$core$Int64) {44u};
frost$core$Int64 $tmp836 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp837 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:95:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp838 = $tmp836.value;
frost$core$Int64* $tmp839 = ((frost$core$Int64*) frostAlloc($tmp838 * 8));
*(&local17) = $tmp839;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp840 = (frost$core$Int64) {0u};
frost$core$Bit $tmp841 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp842 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp840, $tmp836, $tmp841);
frost$core$Int64 $tmp843 = $tmp842.min;
*(&local18) = $tmp843;
frost$core$Int64 $tmp844 = $tmp842.max;
frost$core$Bit $tmp845 = $tmp842.inclusive;
bool $tmp846 = $tmp845.value;
frost$core$Int64 $tmp847 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp848 = $tmp847.value;
frost$core$UInt64 $tmp849 = (frost$core$UInt64) {((uint64_t) $tmp848)};
if ($tmp846) goto block94; else goto block95;
block94:;
int64_t $tmp850 = $tmp843.value;
int64_t $tmp851 = $tmp844.value;
bool $tmp852 = $tmp850 <= $tmp851;
frost$core$Bit $tmp853 = (frost$core$Bit) {$tmp852};
bool $tmp854 = $tmp853.value;
if ($tmp854) goto block91; else goto block92;
block95:;
int64_t $tmp855 = $tmp843.value;
int64_t $tmp856 = $tmp844.value;
bool $tmp857 = $tmp855 < $tmp856;
frost$core$Bit $tmp858 = (frost$core$Bit) {$tmp857};
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block91; else goto block92;
block91:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp860 = *(&local17);
frost$core$Int64 $tmp861 = *(&local18);
int64_t $tmp862 = $tmp861.value;
$tmp860[$tmp862] = $tmp837;
frost$core$Int64 $tmp863 = *(&local18);
int64_t $tmp864 = $tmp844.value;
int64_t $tmp865 = $tmp863.value;
int64_t $tmp866 = $tmp864 - $tmp865;
frost$core$Int64 $tmp867 = (frost$core$Int64) {$tmp866};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp868 = $tmp867.value;
frost$core$UInt64 $tmp869 = (frost$core$UInt64) {((uint64_t) $tmp868)};
if ($tmp846) goto block98; else goto block99;
block98:;
uint64_t $tmp870 = $tmp869.value;
uint64_t $tmp871 = $tmp849.value;
bool $tmp872 = $tmp870 >= $tmp871;
frost$core$Bit $tmp873 = (frost$core$Bit) {$tmp872};
bool $tmp874 = $tmp873.value;
if ($tmp874) goto block96; else goto block92;
block99:;
uint64_t $tmp875 = $tmp869.value;
uint64_t $tmp876 = $tmp849.value;
bool $tmp877 = $tmp875 > $tmp876;
frost$core$Bit $tmp878 = (frost$core$Bit) {$tmp877};
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block96; else goto block92;
block96:;
int64_t $tmp880 = $tmp863.value;
int64_t $tmp881 = $tmp847.value;
int64_t $tmp882 = $tmp880 + $tmp881;
frost$core$Int64 $tmp883 = (frost$core$Int64) {$tmp882};
*(&local18) = $tmp883;
goto block91;
block92:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp884 = *(&local17);
int64_t $tmp885 = $tmp835.value;
$tmp834[$tmp885] = $tmp884;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:96
frost$core$Int64** $tmp886 = *(&local0);
frost$core$Int64 $tmp887 = (frost$core$Int64) {44u};
int64_t $tmp888 = $tmp887.value;
frost$core$Int64* $tmp889 = $tmp886[$tmp888];
frost$core$Int64 $tmp890 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp891 = (frost$core$Int64) {9u};
int64_t $tmp892 = $tmp890.value;
$tmp889[$tmp892] = $tmp891;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:97
frost$core$Int64** $tmp893 = *(&local0);
frost$core$Int64 $tmp894 = (frost$core$Int64) {44u};
int64_t $tmp895 = $tmp894.value;
frost$core$Int64* $tmp896 = $tmp893[$tmp895];
frost$core$Int64 $tmp897 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp898 = (frost$core$Int64) {2u};
int64_t $tmp899 = $tmp897.value;
$tmp896[$tmp899] = $tmp898;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:98
frost$core$Int64** $tmp900 = *(&local0);
frost$core$Int64 $tmp901 = (frost$core$Int64) {45u};
frost$core$Int64** $tmp902 = *(&local0);
frost$core$Int64 $tmp903 = (frost$core$Int64) {0u};
int64_t $tmp904 = $tmp903.value;
frost$core$Int64* $tmp905 = $tmp902[$tmp904];
int64_t $tmp906 = $tmp901.value;
$tmp900[$tmp906] = $tmp905;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:99
frost$core$Int64** $tmp907 = *(&local0);
frost$core$Int64 $tmp908 = (frost$core$Int64) {46u};
frost$core$Int64** $tmp909 = *(&local0);
frost$core$Int64 $tmp910 = (frost$core$Int64) {0u};
int64_t $tmp911 = $tmp910.value;
frost$core$Int64* $tmp912 = $tmp909[$tmp911];
int64_t $tmp913 = $tmp908.value;
$tmp907[$tmp913] = $tmp912;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:100
frost$core$Int64** $tmp914 = *(&local0);
frost$core$Int64 $tmp915 = (frost$core$Int64) {47u};
frost$core$Int64 $tmp916 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp917 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:100:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp918 = $tmp916.value;
frost$core$Int64* $tmp919 = ((frost$core$Int64*) frostAlloc($tmp918 * 8));
*(&local19) = $tmp919;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp920 = (frost$core$Int64) {0u};
frost$core$Bit $tmp921 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp922 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp920, $tmp916, $tmp921);
frost$core$Int64 $tmp923 = $tmp922.min;
*(&local20) = $tmp923;
frost$core$Int64 $tmp924 = $tmp922.max;
frost$core$Bit $tmp925 = $tmp922.inclusive;
bool $tmp926 = $tmp925.value;
frost$core$Int64 $tmp927 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp928 = $tmp927.value;
frost$core$UInt64 $tmp929 = (frost$core$UInt64) {((uint64_t) $tmp928)};
if ($tmp926) goto block105; else goto block106;
block105:;
int64_t $tmp930 = $tmp923.value;
int64_t $tmp931 = $tmp924.value;
bool $tmp932 = $tmp930 <= $tmp931;
frost$core$Bit $tmp933 = (frost$core$Bit) {$tmp932};
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block102; else goto block103;
block106:;
int64_t $tmp935 = $tmp923.value;
int64_t $tmp936 = $tmp924.value;
bool $tmp937 = $tmp935 < $tmp936;
frost$core$Bit $tmp938 = (frost$core$Bit) {$tmp937};
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block102; else goto block103;
block102:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp940 = *(&local19);
frost$core$Int64 $tmp941 = *(&local20);
int64_t $tmp942 = $tmp941.value;
$tmp940[$tmp942] = $tmp917;
frost$core$Int64 $tmp943 = *(&local20);
int64_t $tmp944 = $tmp924.value;
int64_t $tmp945 = $tmp943.value;
int64_t $tmp946 = $tmp944 - $tmp945;
frost$core$Int64 $tmp947 = (frost$core$Int64) {$tmp946};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp948 = $tmp947.value;
frost$core$UInt64 $tmp949 = (frost$core$UInt64) {((uint64_t) $tmp948)};
if ($tmp926) goto block109; else goto block110;
block109:;
uint64_t $tmp950 = $tmp949.value;
uint64_t $tmp951 = $tmp929.value;
bool $tmp952 = $tmp950 >= $tmp951;
frost$core$Bit $tmp953 = (frost$core$Bit) {$tmp952};
bool $tmp954 = $tmp953.value;
if ($tmp954) goto block107; else goto block103;
block110:;
uint64_t $tmp955 = $tmp949.value;
uint64_t $tmp956 = $tmp929.value;
bool $tmp957 = $tmp955 > $tmp956;
frost$core$Bit $tmp958 = (frost$core$Bit) {$tmp957};
bool $tmp959 = $tmp958.value;
if ($tmp959) goto block107; else goto block103;
block107:;
int64_t $tmp960 = $tmp943.value;
int64_t $tmp961 = $tmp927.value;
int64_t $tmp962 = $tmp960 + $tmp961;
frost$core$Int64 $tmp963 = (frost$core$Int64) {$tmp962};
*(&local20) = $tmp963;
goto block102;
block103:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp964 = *(&local19);
int64_t $tmp965 = $tmp915.value;
$tmp914[$tmp965] = $tmp964;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:101
frost$core$Int64** $tmp966 = *(&local0);
frost$core$Int64 $tmp967 = (frost$core$Int64) {47u};
int64_t $tmp968 = $tmp967.value;
frost$core$Int64* $tmp969 = $tmp966[$tmp968];
frost$core$Int64 $tmp970 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp971 = (frost$core$Int64) {10u};
int64_t $tmp972 = $tmp970.value;
$tmp969[$tmp972] = $tmp971;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:102
frost$core$Int64** $tmp973 = *(&local0);
frost$core$Int64 $tmp974 = (frost$core$Int64) {47u};
int64_t $tmp975 = $tmp974.value;
frost$core$Int64* $tmp976 = $tmp973[$tmp975];
frost$core$Int64 $tmp977 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp978 = (frost$core$Int64) {2u};
int64_t $tmp979 = $tmp977.value;
$tmp976[$tmp979] = $tmp978;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:103
frost$core$Int64** $tmp980 = *(&local0);
frost$core$Int64 $tmp981 = (frost$core$Int64) {48u};
frost$core$Int64 $tmp982 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp983 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:103:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp984 = $tmp982.value;
frost$core$Int64* $tmp985 = ((frost$core$Int64*) frostAlloc($tmp984 * 8));
*(&local21) = $tmp985;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp986 = (frost$core$Int64) {0u};
frost$core$Bit $tmp987 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp988 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp986, $tmp982, $tmp987);
frost$core$Int64 $tmp989 = $tmp988.min;
*(&local22) = $tmp989;
frost$core$Int64 $tmp990 = $tmp988.max;
frost$core$Bit $tmp991 = $tmp988.inclusive;
bool $tmp992 = $tmp991.value;
frost$core$Int64 $tmp993 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp994 = $tmp993.value;
frost$core$UInt64 $tmp995 = (frost$core$UInt64) {((uint64_t) $tmp994)};
if ($tmp992) goto block116; else goto block117;
block116:;
int64_t $tmp996 = $tmp989.value;
int64_t $tmp997 = $tmp990.value;
bool $tmp998 = $tmp996 <= $tmp997;
frost$core$Bit $tmp999 = (frost$core$Bit) {$tmp998};
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block113; else goto block114;
block117:;
int64_t $tmp1001 = $tmp989.value;
int64_t $tmp1002 = $tmp990.value;
bool $tmp1003 = $tmp1001 < $tmp1002;
frost$core$Bit $tmp1004 = (frost$core$Bit) {$tmp1003};
bool $tmp1005 = $tmp1004.value;
if ($tmp1005) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp1006 = *(&local21);
frost$core$Int64 $tmp1007 = *(&local22);
int64_t $tmp1008 = $tmp1007.value;
$tmp1006[$tmp1008] = $tmp983;
frost$core$Int64 $tmp1009 = *(&local22);
int64_t $tmp1010 = $tmp990.value;
int64_t $tmp1011 = $tmp1009.value;
int64_t $tmp1012 = $tmp1010 - $tmp1011;
frost$core$Int64 $tmp1013 = (frost$core$Int64) {$tmp1012};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1014 = $tmp1013.value;
frost$core$UInt64 $tmp1015 = (frost$core$UInt64) {((uint64_t) $tmp1014)};
if ($tmp992) goto block120; else goto block121;
block120:;
uint64_t $tmp1016 = $tmp1015.value;
uint64_t $tmp1017 = $tmp995.value;
bool $tmp1018 = $tmp1016 >= $tmp1017;
frost$core$Bit $tmp1019 = (frost$core$Bit) {$tmp1018};
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block118; else goto block114;
block121:;
uint64_t $tmp1021 = $tmp1015.value;
uint64_t $tmp1022 = $tmp995.value;
bool $tmp1023 = $tmp1021 > $tmp1022;
frost$core$Bit $tmp1024 = (frost$core$Bit) {$tmp1023};
bool $tmp1025 = $tmp1024.value;
if ($tmp1025) goto block118; else goto block114;
block118:;
int64_t $tmp1026 = $tmp1009.value;
int64_t $tmp1027 = $tmp993.value;
int64_t $tmp1028 = $tmp1026 + $tmp1027;
frost$core$Int64 $tmp1029 = (frost$core$Int64) {$tmp1028};
*(&local22) = $tmp1029;
goto block113;
block114:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp1030 = *(&local21);
int64_t $tmp1031 = $tmp981.value;
$tmp980[$tmp1031] = $tmp1030;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:104
frost$core$Int64** $tmp1032 = *(&local0);
frost$core$Int64 $tmp1033 = (frost$core$Int64) {48u};
int64_t $tmp1034 = $tmp1033.value;
frost$core$Int64* $tmp1035 = $tmp1032[$tmp1034];
frost$core$Int64 $tmp1036 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1037 = (frost$core$Int64) {11u};
int64_t $tmp1038 = $tmp1036.value;
$tmp1035[$tmp1038] = $tmp1037;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:105
frost$core$Int64** $tmp1039 = *(&local0);
frost$core$Int64 $tmp1040 = (frost$core$Int64) {48u};
int64_t $tmp1041 = $tmp1040.value;
frost$core$Int64* $tmp1042 = $tmp1039[$tmp1041];
frost$core$Int64 $tmp1043 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp1044 = (frost$core$Int64) {2u};
int64_t $tmp1045 = $tmp1043.value;
$tmp1042[$tmp1045] = $tmp1044;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:106
frost$core$Int64** $tmp1046 = *(&local0);
frost$core$Int64 $tmp1047 = (frost$core$Int64) {49u};
frost$core$Int64** $tmp1048 = *(&local0);
frost$core$Int64 $tmp1049 = (frost$core$Int64) {48u};
int64_t $tmp1050 = $tmp1049.value;
frost$core$Int64* $tmp1051 = $tmp1048[$tmp1050];
int64_t $tmp1052 = $tmp1047.value;
$tmp1046[$tmp1052] = $tmp1051;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:107
frost$core$Int64** $tmp1053 = *(&local0);
frost$core$Int64 $tmp1054 = (frost$core$Int64) {50u};
frost$core$Int64** $tmp1055 = *(&local0);
frost$core$Int64 $tmp1056 = (frost$core$Int64) {48u};
int64_t $tmp1057 = $tmp1056.value;
frost$core$Int64* $tmp1058 = $tmp1055[$tmp1057];
int64_t $tmp1059 = $tmp1054.value;
$tmp1053[$tmp1059] = $tmp1058;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:108
frost$core$Int64** $tmp1060 = *(&local0);
frost$core$Int64 $tmp1061 = (frost$core$Int64) {51u};
frost$core$Int64** $tmp1062 = *(&local0);
frost$core$Int64 $tmp1063 = (frost$core$Int64) {48u};
int64_t $tmp1064 = $tmp1063.value;
frost$core$Int64* $tmp1065 = $tmp1062[$tmp1064];
int64_t $tmp1066 = $tmp1061.value;
$tmp1060[$tmp1066] = $tmp1065;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:109
frost$core$Int64** $tmp1067 = *(&local0);
frost$core$Int64 $tmp1068 = (frost$core$Int64) {52u};
frost$core$Int64** $tmp1069 = *(&local0);
frost$core$Int64 $tmp1070 = (frost$core$Int64) {48u};
int64_t $tmp1071 = $tmp1070.value;
frost$core$Int64* $tmp1072 = $tmp1069[$tmp1071];
int64_t $tmp1073 = $tmp1068.value;
$tmp1067[$tmp1073] = $tmp1072;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:110
frost$core$Int64** $tmp1074 = *(&local0);
frost$core$Int64 $tmp1075 = (frost$core$Int64) {53u};
frost$core$Int64** $tmp1076 = *(&local0);
frost$core$Int64 $tmp1077 = (frost$core$Int64) {48u};
int64_t $tmp1078 = $tmp1077.value;
frost$core$Int64* $tmp1079 = $tmp1076[$tmp1078];
int64_t $tmp1080 = $tmp1075.value;
$tmp1074[$tmp1080] = $tmp1079;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:111
frost$core$Int64** $tmp1081 = *(&local0);
frost$core$Int64 $tmp1082 = (frost$core$Int64) {54u};
frost$core$Int64** $tmp1083 = *(&local0);
frost$core$Int64 $tmp1084 = (frost$core$Int64) {48u};
int64_t $tmp1085 = $tmp1084.value;
frost$core$Int64* $tmp1086 = $tmp1083[$tmp1085];
int64_t $tmp1087 = $tmp1082.value;
$tmp1081[$tmp1087] = $tmp1086;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:112
frost$core$Int64** $tmp1088 = *(&local0);
frost$core$Int64 $tmp1089 = (frost$core$Int64) {55u};
frost$core$Int64** $tmp1090 = *(&local0);
frost$core$Int64 $tmp1091 = (frost$core$Int64) {48u};
int64_t $tmp1092 = $tmp1091.value;
frost$core$Int64* $tmp1093 = $tmp1090[$tmp1092];
int64_t $tmp1094 = $tmp1089.value;
$tmp1088[$tmp1094] = $tmp1093;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:113
frost$core$Int64** $tmp1095 = *(&local0);
frost$core$Int64 $tmp1096 = (frost$core$Int64) {56u};
frost$core$Int64** $tmp1097 = *(&local0);
frost$core$Int64 $tmp1098 = (frost$core$Int64) {48u};
int64_t $tmp1099 = $tmp1098.value;
frost$core$Int64* $tmp1100 = $tmp1097[$tmp1099];
int64_t $tmp1101 = $tmp1096.value;
$tmp1095[$tmp1101] = $tmp1100;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:114
frost$core$Int64** $tmp1102 = *(&local0);
frost$core$Int64 $tmp1103 = (frost$core$Int64) {57u};
frost$core$Int64** $tmp1104 = *(&local0);
frost$core$Int64 $tmp1105 = (frost$core$Int64) {48u};
int64_t $tmp1106 = $tmp1105.value;
frost$core$Int64* $tmp1107 = $tmp1104[$tmp1106];
int64_t $tmp1108 = $tmp1103.value;
$tmp1102[$tmp1108] = $tmp1107;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:115
frost$core$Int64** $tmp1109 = *(&local0);
frost$core$Int64 $tmp1110 = (frost$core$Int64) {58u};
frost$core$Int64** $tmp1111 = *(&local0);
frost$core$Int64 $tmp1112 = (frost$core$Int64) {0u};
int64_t $tmp1113 = $tmp1112.value;
frost$core$Int64* $tmp1114 = $tmp1111[$tmp1113];
int64_t $tmp1115 = $tmp1110.value;
$tmp1109[$tmp1115] = $tmp1114;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:116
frost$core$Int64** $tmp1116 = *(&local0);
frost$core$Int64 $tmp1117 = (frost$core$Int64) {59u};
frost$core$Int64** $tmp1118 = *(&local0);
frost$core$Int64 $tmp1119 = (frost$core$Int64) {0u};
int64_t $tmp1120 = $tmp1119.value;
frost$core$Int64* $tmp1121 = $tmp1118[$tmp1120];
int64_t $tmp1122 = $tmp1117.value;
$tmp1116[$tmp1122] = $tmp1121;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:117
frost$core$Int64** $tmp1123 = *(&local0);
frost$core$Int64 $tmp1124 = (frost$core$Int64) {60u};
frost$core$Int64** $tmp1125 = *(&local0);
frost$core$Int64 $tmp1126 = (frost$core$Int64) {0u};
int64_t $tmp1127 = $tmp1126.value;
frost$core$Int64* $tmp1128 = $tmp1125[$tmp1127];
int64_t $tmp1129 = $tmp1124.value;
$tmp1123[$tmp1129] = $tmp1128;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:118
frost$core$Int64** $tmp1130 = *(&local0);
frost$core$Int64 $tmp1131 = (frost$core$Int64) {61u};
frost$core$Int64** $tmp1132 = *(&local0);
frost$core$Int64 $tmp1133 = (frost$core$Int64) {0u};
int64_t $tmp1134 = $tmp1133.value;
frost$core$Int64* $tmp1135 = $tmp1132[$tmp1134];
int64_t $tmp1136 = $tmp1131.value;
$tmp1130[$tmp1136] = $tmp1135;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:119
frost$core$Int64** $tmp1137 = *(&local0);
frost$core$Int64 $tmp1138 = (frost$core$Int64) {62u};
frost$core$Int64** $tmp1139 = *(&local0);
frost$core$Int64 $tmp1140 = (frost$core$Int64) {0u};
int64_t $tmp1141 = $tmp1140.value;
frost$core$Int64* $tmp1142 = $tmp1139[$tmp1141];
int64_t $tmp1143 = $tmp1138.value;
$tmp1137[$tmp1143] = $tmp1142;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:120
frost$core$Int64** $tmp1144 = *(&local0);
frost$core$Int64 $tmp1145 = (frost$core$Int64) {63u};
frost$core$Int64 $tmp1146 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp1147 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:120:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp1148 = $tmp1146.value;
frost$core$Int64* $tmp1149 = ((frost$core$Int64*) frostAlloc($tmp1148 * 8));
*(&local23) = $tmp1149;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp1150 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1151 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1152 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1150, $tmp1146, $tmp1151);
frost$core$Int64 $tmp1153 = $tmp1152.min;
*(&local24) = $tmp1153;
frost$core$Int64 $tmp1154 = $tmp1152.max;
frost$core$Bit $tmp1155 = $tmp1152.inclusive;
bool $tmp1156 = $tmp1155.value;
frost$core$Int64 $tmp1157 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1158 = $tmp1157.value;
frost$core$UInt64 $tmp1159 = (frost$core$UInt64) {((uint64_t) $tmp1158)};
if ($tmp1156) goto block127; else goto block128;
block127:;
int64_t $tmp1160 = $tmp1153.value;
int64_t $tmp1161 = $tmp1154.value;
bool $tmp1162 = $tmp1160 <= $tmp1161;
frost$core$Bit $tmp1163 = (frost$core$Bit) {$tmp1162};
bool $tmp1164 = $tmp1163.value;
if ($tmp1164) goto block124; else goto block125;
block128:;
int64_t $tmp1165 = $tmp1153.value;
int64_t $tmp1166 = $tmp1154.value;
bool $tmp1167 = $tmp1165 < $tmp1166;
frost$core$Bit $tmp1168 = (frost$core$Bit) {$tmp1167};
bool $tmp1169 = $tmp1168.value;
if ($tmp1169) goto block124; else goto block125;
block124:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp1170 = *(&local23);
frost$core$Int64 $tmp1171 = *(&local24);
int64_t $tmp1172 = $tmp1171.value;
$tmp1170[$tmp1172] = $tmp1147;
frost$core$Int64 $tmp1173 = *(&local24);
int64_t $tmp1174 = $tmp1154.value;
int64_t $tmp1175 = $tmp1173.value;
int64_t $tmp1176 = $tmp1174 - $tmp1175;
frost$core$Int64 $tmp1177 = (frost$core$Int64) {$tmp1176};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1178 = $tmp1177.value;
frost$core$UInt64 $tmp1179 = (frost$core$UInt64) {((uint64_t) $tmp1178)};
if ($tmp1156) goto block131; else goto block132;
block131:;
uint64_t $tmp1180 = $tmp1179.value;
uint64_t $tmp1181 = $tmp1159.value;
bool $tmp1182 = $tmp1180 >= $tmp1181;
frost$core$Bit $tmp1183 = (frost$core$Bit) {$tmp1182};
bool $tmp1184 = $tmp1183.value;
if ($tmp1184) goto block129; else goto block125;
block132:;
uint64_t $tmp1185 = $tmp1179.value;
uint64_t $tmp1186 = $tmp1159.value;
bool $tmp1187 = $tmp1185 > $tmp1186;
frost$core$Bit $tmp1188 = (frost$core$Bit) {$tmp1187};
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block129; else goto block125;
block129:;
int64_t $tmp1190 = $tmp1173.value;
int64_t $tmp1191 = $tmp1157.value;
int64_t $tmp1192 = $tmp1190 + $tmp1191;
frost$core$Int64 $tmp1193 = (frost$core$Int64) {$tmp1192};
*(&local24) = $tmp1193;
goto block124;
block125:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp1194 = *(&local23);
int64_t $tmp1195 = $tmp1145.value;
$tmp1144[$tmp1195] = $tmp1194;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:121
frost$core$Int64** $tmp1196 = *(&local0);
frost$core$Int64 $tmp1197 = (frost$core$Int64) {63u};
int64_t $tmp1198 = $tmp1197.value;
frost$core$Int64* $tmp1199 = $tmp1196[$tmp1198];
frost$core$Int64 $tmp1200 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1201 = (frost$core$Int64) {12u};
int64_t $tmp1202 = $tmp1200.value;
$tmp1199[$tmp1202] = $tmp1201;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:122
frost$core$Int64** $tmp1203 = *(&local0);
frost$core$Int64 $tmp1204 = (frost$core$Int64) {63u};
int64_t $tmp1205 = $tmp1204.value;
frost$core$Int64* $tmp1206 = $tmp1203[$tmp1205];
frost$core$Int64 $tmp1207 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp1208 = (frost$core$Int64) {2u};
int64_t $tmp1209 = $tmp1207.value;
$tmp1206[$tmp1209] = $tmp1208;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:123
frost$core$Int64** $tmp1210 = *(&local0);
frost$core$Int64 $tmp1211 = (frost$core$Int64) {64u};
frost$core$Int64** $tmp1212 = *(&local0);
frost$core$Int64 $tmp1213 = (frost$core$Int64) {0u};
int64_t $tmp1214 = $tmp1213.value;
frost$core$Int64* $tmp1215 = $tmp1212[$tmp1214];
int64_t $tmp1216 = $tmp1211.value;
$tmp1210[$tmp1216] = $tmp1215;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:124
frost$core$Int64** $tmp1217 = *(&local0);
frost$core$Int64 $tmp1218 = (frost$core$Int64) {65u};
frost$core$Int64** $tmp1219 = *(&local0);
frost$core$Int64 $tmp1220 = (frost$core$Int64) {0u};
int64_t $tmp1221 = $tmp1220.value;
frost$core$Int64* $tmp1222 = $tmp1219[$tmp1221];
int64_t $tmp1223 = $tmp1218.value;
$tmp1217[$tmp1223] = $tmp1222;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:125
frost$core$Int64** $tmp1224 = *(&local0);
frost$core$Int64 $tmp1225 = (frost$core$Int64) {66u};
frost$core$Int64** $tmp1226 = *(&local0);
frost$core$Int64 $tmp1227 = (frost$core$Int64) {0u};
int64_t $tmp1228 = $tmp1227.value;
frost$core$Int64* $tmp1229 = $tmp1226[$tmp1228];
int64_t $tmp1230 = $tmp1225.value;
$tmp1224[$tmp1230] = $tmp1229;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:126
frost$core$Int64** $tmp1231 = *(&local0);
frost$core$Int64 $tmp1232 = (frost$core$Int64) {67u};
frost$core$Int64** $tmp1233 = *(&local0);
frost$core$Int64 $tmp1234 = (frost$core$Int64) {0u};
int64_t $tmp1235 = $tmp1234.value;
frost$core$Int64* $tmp1236 = $tmp1233[$tmp1235];
int64_t $tmp1237 = $tmp1232.value;
$tmp1231[$tmp1237] = $tmp1236;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:127
frost$core$Int64** $tmp1238 = *(&local0);
frost$core$Int64 $tmp1239 = (frost$core$Int64) {68u};
frost$core$Int64** $tmp1240 = *(&local0);
frost$core$Int64 $tmp1241 = (frost$core$Int64) {0u};
int64_t $tmp1242 = $tmp1241.value;
frost$core$Int64* $tmp1243 = $tmp1240[$tmp1242];
int64_t $tmp1244 = $tmp1239.value;
$tmp1238[$tmp1244] = $tmp1243;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:128
frost$core$Int64** $tmp1245 = *(&local0);
frost$core$Int64 $tmp1246 = (frost$core$Int64) {69u};
frost$core$Int64** $tmp1247 = *(&local0);
frost$core$Int64 $tmp1248 = (frost$core$Int64) {0u};
int64_t $tmp1249 = $tmp1248.value;
frost$core$Int64* $tmp1250 = $tmp1247[$tmp1249];
int64_t $tmp1251 = $tmp1246.value;
$tmp1245[$tmp1251] = $tmp1250;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:129
frost$core$Int64** $tmp1252 = *(&local0);
frost$core$Int64 $tmp1253 = (frost$core$Int64) {70u};
frost$core$Int64** $tmp1254 = *(&local0);
frost$core$Int64 $tmp1255 = (frost$core$Int64) {0u};
int64_t $tmp1256 = $tmp1255.value;
frost$core$Int64* $tmp1257 = $tmp1254[$tmp1256];
int64_t $tmp1258 = $tmp1253.value;
$tmp1252[$tmp1258] = $tmp1257;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:130
frost$core$Int64** $tmp1259 = *(&local0);
frost$core$Int64 $tmp1260 = (frost$core$Int64) {71u};
frost$core$Int64** $tmp1261 = *(&local0);
frost$core$Int64 $tmp1262 = (frost$core$Int64) {0u};
int64_t $tmp1263 = $tmp1262.value;
frost$core$Int64* $tmp1264 = $tmp1261[$tmp1263];
int64_t $tmp1265 = $tmp1260.value;
$tmp1259[$tmp1265] = $tmp1264;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:131
frost$core$Int64** $tmp1266 = *(&local0);
frost$core$Int64 $tmp1267 = (frost$core$Int64) {72u};
frost$core$Int64** $tmp1268 = *(&local0);
frost$core$Int64 $tmp1269 = (frost$core$Int64) {0u};
int64_t $tmp1270 = $tmp1269.value;
frost$core$Int64* $tmp1271 = $tmp1268[$tmp1270];
int64_t $tmp1272 = $tmp1267.value;
$tmp1266[$tmp1272] = $tmp1271;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:132
frost$core$Int64** $tmp1273 = *(&local0);
frost$core$Int64 $tmp1274 = (frost$core$Int64) {73u};
frost$core$Int64** $tmp1275 = *(&local0);
frost$core$Int64 $tmp1276 = (frost$core$Int64) {0u};
int64_t $tmp1277 = $tmp1276.value;
frost$core$Int64* $tmp1278 = $tmp1275[$tmp1277];
int64_t $tmp1279 = $tmp1274.value;
$tmp1273[$tmp1279] = $tmp1278;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:133
frost$core$Int64** $tmp1280 = *(&local0);
frost$core$Int64 $tmp1281 = (frost$core$Int64) {74u};
frost$core$Int64** $tmp1282 = *(&local0);
frost$core$Int64 $tmp1283 = (frost$core$Int64) {0u};
int64_t $tmp1284 = $tmp1283.value;
frost$core$Int64* $tmp1285 = $tmp1282[$tmp1284];
int64_t $tmp1286 = $tmp1281.value;
$tmp1280[$tmp1286] = $tmp1285;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:134
frost$core$Int64** $tmp1287 = *(&local0);
frost$core$Int64 $tmp1288 = (frost$core$Int64) {75u};
frost$core$Int64** $tmp1289 = *(&local0);
frost$core$Int64 $tmp1290 = (frost$core$Int64) {0u};
int64_t $tmp1291 = $tmp1290.value;
frost$core$Int64* $tmp1292 = $tmp1289[$tmp1291];
int64_t $tmp1293 = $tmp1288.value;
$tmp1287[$tmp1293] = $tmp1292;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:135
frost$core$Int64** $tmp1294 = *(&local0);
frost$core$Int64 $tmp1295 = (frost$core$Int64) {76u};
frost$core$Int64** $tmp1296 = *(&local0);
frost$core$Int64 $tmp1297 = (frost$core$Int64) {0u};
int64_t $tmp1298 = $tmp1297.value;
frost$core$Int64* $tmp1299 = $tmp1296[$tmp1298];
int64_t $tmp1300 = $tmp1295.value;
$tmp1294[$tmp1300] = $tmp1299;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:136
frost$core$Int64** $tmp1301 = *(&local0);
frost$core$Int64 $tmp1302 = (frost$core$Int64) {77u};
frost$core$Int64** $tmp1303 = *(&local0);
frost$core$Int64 $tmp1304 = (frost$core$Int64) {0u};
int64_t $tmp1305 = $tmp1304.value;
frost$core$Int64* $tmp1306 = $tmp1303[$tmp1305];
int64_t $tmp1307 = $tmp1302.value;
$tmp1301[$tmp1307] = $tmp1306;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:137
frost$core$Int64** $tmp1308 = *(&local0);
frost$core$Int64 $tmp1309 = (frost$core$Int64) {78u};
frost$core$Int64** $tmp1310 = *(&local0);
frost$core$Int64 $tmp1311 = (frost$core$Int64) {0u};
int64_t $tmp1312 = $tmp1311.value;
frost$core$Int64* $tmp1313 = $tmp1310[$tmp1312];
int64_t $tmp1314 = $tmp1309.value;
$tmp1308[$tmp1314] = $tmp1313;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:138
frost$core$Int64** $tmp1315 = *(&local0);
frost$core$Int64 $tmp1316 = (frost$core$Int64) {79u};
frost$core$Int64** $tmp1317 = *(&local0);
frost$core$Int64 $tmp1318 = (frost$core$Int64) {0u};
int64_t $tmp1319 = $tmp1318.value;
frost$core$Int64* $tmp1320 = $tmp1317[$tmp1319];
int64_t $tmp1321 = $tmp1316.value;
$tmp1315[$tmp1321] = $tmp1320;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:139
frost$core$Int64** $tmp1322 = *(&local0);
frost$core$Int64 $tmp1323 = (frost$core$Int64) {80u};
frost$core$Int64** $tmp1324 = *(&local0);
frost$core$Int64 $tmp1325 = (frost$core$Int64) {0u};
int64_t $tmp1326 = $tmp1325.value;
frost$core$Int64* $tmp1327 = $tmp1324[$tmp1326];
int64_t $tmp1328 = $tmp1323.value;
$tmp1322[$tmp1328] = $tmp1327;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:140
frost$core$Int64** $tmp1329 = *(&local0);
frost$core$Int64 $tmp1330 = (frost$core$Int64) {81u};
frost$core$Int64** $tmp1331 = *(&local0);
frost$core$Int64 $tmp1332 = (frost$core$Int64) {0u};
int64_t $tmp1333 = $tmp1332.value;
frost$core$Int64* $tmp1334 = $tmp1331[$tmp1333];
int64_t $tmp1335 = $tmp1330.value;
$tmp1329[$tmp1335] = $tmp1334;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:141
frost$core$Int64** $tmp1336 = *(&local0);
frost$core$Int64 $tmp1337 = (frost$core$Int64) {82u};
frost$core$Int64** $tmp1338 = *(&local0);
frost$core$Int64 $tmp1339 = (frost$core$Int64) {0u};
int64_t $tmp1340 = $tmp1339.value;
frost$core$Int64* $tmp1341 = $tmp1338[$tmp1340];
int64_t $tmp1342 = $tmp1337.value;
$tmp1336[$tmp1342] = $tmp1341;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:142
frost$core$Int64** $tmp1343 = *(&local0);
frost$core$Int64 $tmp1344 = (frost$core$Int64) {83u};
frost$core$Int64** $tmp1345 = *(&local0);
frost$core$Int64 $tmp1346 = (frost$core$Int64) {0u};
int64_t $tmp1347 = $tmp1346.value;
frost$core$Int64* $tmp1348 = $tmp1345[$tmp1347];
int64_t $tmp1349 = $tmp1344.value;
$tmp1343[$tmp1349] = $tmp1348;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:143
frost$core$Int64** $tmp1350 = *(&local0);
frost$core$Int64 $tmp1351 = (frost$core$Int64) {84u};
frost$core$Int64** $tmp1352 = *(&local0);
frost$core$Int64 $tmp1353 = (frost$core$Int64) {0u};
int64_t $tmp1354 = $tmp1353.value;
frost$core$Int64* $tmp1355 = $tmp1352[$tmp1354];
int64_t $tmp1356 = $tmp1351.value;
$tmp1350[$tmp1356] = $tmp1355;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:144
frost$core$Int64** $tmp1357 = *(&local0);
frost$core$Int64 $tmp1358 = (frost$core$Int64) {85u};
frost$core$Int64** $tmp1359 = *(&local0);
frost$core$Int64 $tmp1360 = (frost$core$Int64) {0u};
int64_t $tmp1361 = $tmp1360.value;
frost$core$Int64* $tmp1362 = $tmp1359[$tmp1361];
int64_t $tmp1363 = $tmp1358.value;
$tmp1357[$tmp1363] = $tmp1362;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:145
frost$core$Int64** $tmp1364 = *(&local0);
frost$core$Int64 $tmp1365 = (frost$core$Int64) {86u};
frost$core$Int64** $tmp1366 = *(&local0);
frost$core$Int64 $tmp1367 = (frost$core$Int64) {0u};
int64_t $tmp1368 = $tmp1367.value;
frost$core$Int64* $tmp1369 = $tmp1366[$tmp1368];
int64_t $tmp1370 = $tmp1365.value;
$tmp1364[$tmp1370] = $tmp1369;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:146
frost$core$Int64** $tmp1371 = *(&local0);
frost$core$Int64 $tmp1372 = (frost$core$Int64) {87u};
frost$core$Int64** $tmp1373 = *(&local0);
frost$core$Int64 $tmp1374 = (frost$core$Int64) {0u};
int64_t $tmp1375 = $tmp1374.value;
frost$core$Int64* $tmp1376 = $tmp1373[$tmp1375];
int64_t $tmp1377 = $tmp1372.value;
$tmp1371[$tmp1377] = $tmp1376;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:147
frost$core$Int64** $tmp1378 = *(&local0);
frost$core$Int64 $tmp1379 = (frost$core$Int64) {88u};
frost$core$Int64** $tmp1380 = *(&local0);
frost$core$Int64 $tmp1381 = (frost$core$Int64) {0u};
int64_t $tmp1382 = $tmp1381.value;
frost$core$Int64* $tmp1383 = $tmp1380[$tmp1382];
int64_t $tmp1384 = $tmp1379.value;
$tmp1378[$tmp1384] = $tmp1383;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:148
frost$core$Int64** $tmp1385 = *(&local0);
frost$core$Int64 $tmp1386 = (frost$core$Int64) {89u};
frost$core$Int64** $tmp1387 = *(&local0);
frost$core$Int64 $tmp1388 = (frost$core$Int64) {0u};
int64_t $tmp1389 = $tmp1388.value;
frost$core$Int64* $tmp1390 = $tmp1387[$tmp1389];
int64_t $tmp1391 = $tmp1386.value;
$tmp1385[$tmp1391] = $tmp1390;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:149
frost$core$Int64** $tmp1392 = *(&local0);
frost$core$Int64 $tmp1393 = (frost$core$Int64) {90u};
frost$core$Int64** $tmp1394 = *(&local0);
frost$core$Int64 $tmp1395 = (frost$core$Int64) {0u};
int64_t $tmp1396 = $tmp1395.value;
frost$core$Int64* $tmp1397 = $tmp1394[$tmp1396];
int64_t $tmp1398 = $tmp1393.value;
$tmp1392[$tmp1398] = $tmp1397;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:150
frost$core$Int64** $tmp1399 = *(&local0);
frost$core$Int64 $tmp1400 = (frost$core$Int64) {91u};
frost$core$Int64 $tmp1401 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp1402 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:150:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp1403 = $tmp1401.value;
frost$core$Int64* $tmp1404 = ((frost$core$Int64*) frostAlloc($tmp1403 * 8));
*(&local25) = $tmp1404;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp1405 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1406 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1407 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1405, $tmp1401, $tmp1406);
frost$core$Int64 $tmp1408 = $tmp1407.min;
*(&local26) = $tmp1408;
frost$core$Int64 $tmp1409 = $tmp1407.max;
frost$core$Bit $tmp1410 = $tmp1407.inclusive;
bool $tmp1411 = $tmp1410.value;
frost$core$Int64 $tmp1412 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1413 = $tmp1412.value;
frost$core$UInt64 $tmp1414 = (frost$core$UInt64) {((uint64_t) $tmp1413)};
if ($tmp1411) goto block138; else goto block139;
block138:;
int64_t $tmp1415 = $tmp1408.value;
int64_t $tmp1416 = $tmp1409.value;
bool $tmp1417 = $tmp1415 <= $tmp1416;
frost$core$Bit $tmp1418 = (frost$core$Bit) {$tmp1417};
bool $tmp1419 = $tmp1418.value;
if ($tmp1419) goto block135; else goto block136;
block139:;
int64_t $tmp1420 = $tmp1408.value;
int64_t $tmp1421 = $tmp1409.value;
bool $tmp1422 = $tmp1420 < $tmp1421;
frost$core$Bit $tmp1423 = (frost$core$Bit) {$tmp1422};
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block135; else goto block136;
block135:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp1425 = *(&local25);
frost$core$Int64 $tmp1426 = *(&local26);
int64_t $tmp1427 = $tmp1426.value;
$tmp1425[$tmp1427] = $tmp1402;
frost$core$Int64 $tmp1428 = *(&local26);
int64_t $tmp1429 = $tmp1409.value;
int64_t $tmp1430 = $tmp1428.value;
int64_t $tmp1431 = $tmp1429 - $tmp1430;
frost$core$Int64 $tmp1432 = (frost$core$Int64) {$tmp1431};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1433 = $tmp1432.value;
frost$core$UInt64 $tmp1434 = (frost$core$UInt64) {((uint64_t) $tmp1433)};
if ($tmp1411) goto block142; else goto block143;
block142:;
uint64_t $tmp1435 = $tmp1434.value;
uint64_t $tmp1436 = $tmp1414.value;
bool $tmp1437 = $tmp1435 >= $tmp1436;
frost$core$Bit $tmp1438 = (frost$core$Bit) {$tmp1437};
bool $tmp1439 = $tmp1438.value;
if ($tmp1439) goto block140; else goto block136;
block143:;
uint64_t $tmp1440 = $tmp1434.value;
uint64_t $tmp1441 = $tmp1414.value;
bool $tmp1442 = $tmp1440 > $tmp1441;
frost$core$Bit $tmp1443 = (frost$core$Bit) {$tmp1442};
bool $tmp1444 = $tmp1443.value;
if ($tmp1444) goto block140; else goto block136;
block140:;
int64_t $tmp1445 = $tmp1428.value;
int64_t $tmp1446 = $tmp1412.value;
int64_t $tmp1447 = $tmp1445 + $tmp1446;
frost$core$Int64 $tmp1448 = (frost$core$Int64) {$tmp1447};
*(&local26) = $tmp1448;
goto block135;
block136:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp1449 = *(&local25);
int64_t $tmp1450 = $tmp1400.value;
$tmp1399[$tmp1450] = $tmp1449;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:151
frost$core$Int64** $tmp1451 = *(&local0);
frost$core$Int64 $tmp1452 = (frost$core$Int64) {91u};
int64_t $tmp1453 = $tmp1452.value;
frost$core$Int64* $tmp1454 = $tmp1451[$tmp1453];
frost$core$Int64 $tmp1455 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1456 = (frost$core$Int64) {13u};
int64_t $tmp1457 = $tmp1455.value;
$tmp1454[$tmp1457] = $tmp1456;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:152
frost$core$Int64** $tmp1458 = *(&local0);
frost$core$Int64 $tmp1459 = (frost$core$Int64) {91u};
int64_t $tmp1460 = $tmp1459.value;
frost$core$Int64* $tmp1461 = $tmp1458[$tmp1460];
frost$core$Int64 $tmp1462 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp1463 = (frost$core$Int64) {2u};
int64_t $tmp1464 = $tmp1462.value;
$tmp1461[$tmp1464] = $tmp1463;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:153
frost$core$Int64** $tmp1465 = *(&local0);
frost$core$Int64 $tmp1466 = (frost$core$Int64) {92u};
frost$core$Int64 $tmp1467 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp1468 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:153:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp1469 = $tmp1467.value;
frost$core$Int64* $tmp1470 = ((frost$core$Int64*) frostAlloc($tmp1469 * 8));
*(&local27) = $tmp1470;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp1471 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1472 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1473 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1471, $tmp1467, $tmp1472);
frost$core$Int64 $tmp1474 = $tmp1473.min;
*(&local28) = $tmp1474;
frost$core$Int64 $tmp1475 = $tmp1473.max;
frost$core$Bit $tmp1476 = $tmp1473.inclusive;
bool $tmp1477 = $tmp1476.value;
frost$core$Int64 $tmp1478 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1479 = $tmp1478.value;
frost$core$UInt64 $tmp1480 = (frost$core$UInt64) {((uint64_t) $tmp1479)};
if ($tmp1477) goto block149; else goto block150;
block149:;
int64_t $tmp1481 = $tmp1474.value;
int64_t $tmp1482 = $tmp1475.value;
bool $tmp1483 = $tmp1481 <= $tmp1482;
frost$core$Bit $tmp1484 = (frost$core$Bit) {$tmp1483};
bool $tmp1485 = $tmp1484.value;
if ($tmp1485) goto block146; else goto block147;
block150:;
int64_t $tmp1486 = $tmp1474.value;
int64_t $tmp1487 = $tmp1475.value;
bool $tmp1488 = $tmp1486 < $tmp1487;
frost$core$Bit $tmp1489 = (frost$core$Bit) {$tmp1488};
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp1491 = *(&local27);
frost$core$Int64 $tmp1492 = *(&local28);
int64_t $tmp1493 = $tmp1492.value;
$tmp1491[$tmp1493] = $tmp1468;
frost$core$Int64 $tmp1494 = *(&local28);
int64_t $tmp1495 = $tmp1475.value;
int64_t $tmp1496 = $tmp1494.value;
int64_t $tmp1497 = $tmp1495 - $tmp1496;
frost$core$Int64 $tmp1498 = (frost$core$Int64) {$tmp1497};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1499 = $tmp1498.value;
frost$core$UInt64 $tmp1500 = (frost$core$UInt64) {((uint64_t) $tmp1499)};
if ($tmp1477) goto block153; else goto block154;
block153:;
uint64_t $tmp1501 = $tmp1500.value;
uint64_t $tmp1502 = $tmp1480.value;
bool $tmp1503 = $tmp1501 >= $tmp1502;
frost$core$Bit $tmp1504 = (frost$core$Bit) {$tmp1503};
bool $tmp1505 = $tmp1504.value;
if ($tmp1505) goto block151; else goto block147;
block154:;
uint64_t $tmp1506 = $tmp1500.value;
uint64_t $tmp1507 = $tmp1480.value;
bool $tmp1508 = $tmp1506 > $tmp1507;
frost$core$Bit $tmp1509 = (frost$core$Bit) {$tmp1508};
bool $tmp1510 = $tmp1509.value;
if ($tmp1510) goto block151; else goto block147;
block151:;
int64_t $tmp1511 = $tmp1494.value;
int64_t $tmp1512 = $tmp1478.value;
int64_t $tmp1513 = $tmp1511 + $tmp1512;
frost$core$Int64 $tmp1514 = (frost$core$Int64) {$tmp1513};
*(&local28) = $tmp1514;
goto block146;
block147:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp1515 = *(&local27);
int64_t $tmp1516 = $tmp1466.value;
$tmp1465[$tmp1516] = $tmp1515;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:154
frost$core$Int64** $tmp1517 = *(&local0);
frost$core$Int64 $tmp1518 = (frost$core$Int64) {92u};
int64_t $tmp1519 = $tmp1518.value;
frost$core$Int64* $tmp1520 = $tmp1517[$tmp1519];
frost$core$Int64 $tmp1521 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1522 = (frost$core$Int64) {14u};
int64_t $tmp1523 = $tmp1521.value;
$tmp1520[$tmp1523] = $tmp1522;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:155
frost$core$Int64** $tmp1524 = *(&local0);
frost$core$Int64 $tmp1525 = (frost$core$Int64) {92u};
int64_t $tmp1526 = $tmp1525.value;
frost$core$Int64* $tmp1527 = $tmp1524[$tmp1526];
frost$core$Int64 $tmp1528 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp1529 = (frost$core$Int64) {2u};
int64_t $tmp1530 = $tmp1528.value;
$tmp1527[$tmp1530] = $tmp1529;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:156
frost$core$Int64** $tmp1531 = *(&local0);
frost$core$Int64 $tmp1532 = (frost$core$Int64) {93u};
frost$core$Int64 $tmp1533 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp1534 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:156:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp1535 = $tmp1533.value;
frost$core$Int64* $tmp1536 = ((frost$core$Int64*) frostAlloc($tmp1535 * 8));
*(&local29) = $tmp1536;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp1537 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1538 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1539 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1537, $tmp1533, $tmp1538);
frost$core$Int64 $tmp1540 = $tmp1539.min;
*(&local30) = $tmp1540;
frost$core$Int64 $tmp1541 = $tmp1539.max;
frost$core$Bit $tmp1542 = $tmp1539.inclusive;
bool $tmp1543 = $tmp1542.value;
frost$core$Int64 $tmp1544 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1545 = $tmp1544.value;
frost$core$UInt64 $tmp1546 = (frost$core$UInt64) {((uint64_t) $tmp1545)};
if ($tmp1543) goto block160; else goto block161;
block160:;
int64_t $tmp1547 = $tmp1540.value;
int64_t $tmp1548 = $tmp1541.value;
bool $tmp1549 = $tmp1547 <= $tmp1548;
frost$core$Bit $tmp1550 = (frost$core$Bit) {$tmp1549};
bool $tmp1551 = $tmp1550.value;
if ($tmp1551) goto block157; else goto block158;
block161:;
int64_t $tmp1552 = $tmp1540.value;
int64_t $tmp1553 = $tmp1541.value;
bool $tmp1554 = $tmp1552 < $tmp1553;
frost$core$Bit $tmp1555 = (frost$core$Bit) {$tmp1554};
bool $tmp1556 = $tmp1555.value;
if ($tmp1556) goto block157; else goto block158;
block157:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp1557 = *(&local29);
frost$core$Int64 $tmp1558 = *(&local30);
int64_t $tmp1559 = $tmp1558.value;
$tmp1557[$tmp1559] = $tmp1534;
frost$core$Int64 $tmp1560 = *(&local30);
int64_t $tmp1561 = $tmp1541.value;
int64_t $tmp1562 = $tmp1560.value;
int64_t $tmp1563 = $tmp1561 - $tmp1562;
frost$core$Int64 $tmp1564 = (frost$core$Int64) {$tmp1563};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1565 = $tmp1564.value;
frost$core$UInt64 $tmp1566 = (frost$core$UInt64) {((uint64_t) $tmp1565)};
if ($tmp1543) goto block164; else goto block165;
block164:;
uint64_t $tmp1567 = $tmp1566.value;
uint64_t $tmp1568 = $tmp1546.value;
bool $tmp1569 = $tmp1567 >= $tmp1568;
frost$core$Bit $tmp1570 = (frost$core$Bit) {$tmp1569};
bool $tmp1571 = $tmp1570.value;
if ($tmp1571) goto block162; else goto block158;
block165:;
uint64_t $tmp1572 = $tmp1566.value;
uint64_t $tmp1573 = $tmp1546.value;
bool $tmp1574 = $tmp1572 > $tmp1573;
frost$core$Bit $tmp1575 = (frost$core$Bit) {$tmp1574};
bool $tmp1576 = $tmp1575.value;
if ($tmp1576) goto block162; else goto block158;
block162:;
int64_t $tmp1577 = $tmp1560.value;
int64_t $tmp1578 = $tmp1544.value;
int64_t $tmp1579 = $tmp1577 + $tmp1578;
frost$core$Int64 $tmp1580 = (frost$core$Int64) {$tmp1579};
*(&local30) = $tmp1580;
goto block157;
block158:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp1581 = *(&local29);
int64_t $tmp1582 = $tmp1532.value;
$tmp1531[$tmp1582] = $tmp1581;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:157
frost$core$Int64** $tmp1583 = *(&local0);
frost$core$Int64 $tmp1584 = (frost$core$Int64) {93u};
int64_t $tmp1585 = $tmp1584.value;
frost$core$Int64* $tmp1586 = $tmp1583[$tmp1585];
frost$core$Int64 $tmp1587 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1588 = (frost$core$Int64) {15u};
int64_t $tmp1589 = $tmp1587.value;
$tmp1586[$tmp1589] = $tmp1588;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:158
frost$core$Int64** $tmp1590 = *(&local0);
frost$core$Int64 $tmp1591 = (frost$core$Int64) {93u};
int64_t $tmp1592 = $tmp1591.value;
frost$core$Int64* $tmp1593 = $tmp1590[$tmp1592];
frost$core$Int64 $tmp1594 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp1595 = (frost$core$Int64) {2u};
int64_t $tmp1596 = $tmp1594.value;
$tmp1593[$tmp1596] = $tmp1595;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:159
frost$core$Int64** $tmp1597 = *(&local0);
frost$core$Int64 $tmp1598 = (frost$core$Int64) {94u};
frost$core$Int64 $tmp1599 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp1600 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:159:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp1601 = $tmp1599.value;
frost$core$Int64* $tmp1602 = ((frost$core$Int64*) frostAlloc($tmp1601 * 8));
*(&local31) = $tmp1602;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp1603 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1604 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1605 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1603, $tmp1599, $tmp1604);
frost$core$Int64 $tmp1606 = $tmp1605.min;
*(&local32) = $tmp1606;
frost$core$Int64 $tmp1607 = $tmp1605.max;
frost$core$Bit $tmp1608 = $tmp1605.inclusive;
bool $tmp1609 = $tmp1608.value;
frost$core$Int64 $tmp1610 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1611 = $tmp1610.value;
frost$core$UInt64 $tmp1612 = (frost$core$UInt64) {((uint64_t) $tmp1611)};
if ($tmp1609) goto block171; else goto block172;
block171:;
int64_t $tmp1613 = $tmp1606.value;
int64_t $tmp1614 = $tmp1607.value;
bool $tmp1615 = $tmp1613 <= $tmp1614;
frost$core$Bit $tmp1616 = (frost$core$Bit) {$tmp1615};
bool $tmp1617 = $tmp1616.value;
if ($tmp1617) goto block168; else goto block169;
block172:;
int64_t $tmp1618 = $tmp1606.value;
int64_t $tmp1619 = $tmp1607.value;
bool $tmp1620 = $tmp1618 < $tmp1619;
frost$core$Bit $tmp1621 = (frost$core$Bit) {$tmp1620};
bool $tmp1622 = $tmp1621.value;
if ($tmp1622) goto block168; else goto block169;
block168:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp1623 = *(&local31);
frost$core$Int64 $tmp1624 = *(&local32);
int64_t $tmp1625 = $tmp1624.value;
$tmp1623[$tmp1625] = $tmp1600;
frost$core$Int64 $tmp1626 = *(&local32);
int64_t $tmp1627 = $tmp1607.value;
int64_t $tmp1628 = $tmp1626.value;
int64_t $tmp1629 = $tmp1627 - $tmp1628;
frost$core$Int64 $tmp1630 = (frost$core$Int64) {$tmp1629};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1631 = $tmp1630.value;
frost$core$UInt64 $tmp1632 = (frost$core$UInt64) {((uint64_t) $tmp1631)};
if ($tmp1609) goto block175; else goto block176;
block175:;
uint64_t $tmp1633 = $tmp1632.value;
uint64_t $tmp1634 = $tmp1612.value;
bool $tmp1635 = $tmp1633 >= $tmp1634;
frost$core$Bit $tmp1636 = (frost$core$Bit) {$tmp1635};
bool $tmp1637 = $tmp1636.value;
if ($tmp1637) goto block173; else goto block169;
block176:;
uint64_t $tmp1638 = $tmp1632.value;
uint64_t $tmp1639 = $tmp1612.value;
bool $tmp1640 = $tmp1638 > $tmp1639;
frost$core$Bit $tmp1641 = (frost$core$Bit) {$tmp1640};
bool $tmp1642 = $tmp1641.value;
if ($tmp1642) goto block173; else goto block169;
block173:;
int64_t $tmp1643 = $tmp1626.value;
int64_t $tmp1644 = $tmp1610.value;
int64_t $tmp1645 = $tmp1643 + $tmp1644;
frost$core$Int64 $tmp1646 = (frost$core$Int64) {$tmp1645};
*(&local32) = $tmp1646;
goto block168;
block169:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp1647 = *(&local31);
int64_t $tmp1648 = $tmp1598.value;
$tmp1597[$tmp1648] = $tmp1647;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:160
frost$core$Int64** $tmp1649 = *(&local0);
frost$core$Int64 $tmp1650 = (frost$core$Int64) {94u};
int64_t $tmp1651 = $tmp1650.value;
frost$core$Int64* $tmp1652 = $tmp1649[$tmp1651];
frost$core$Int64 $tmp1653 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1654 = (frost$core$Int64) {16u};
int64_t $tmp1655 = $tmp1653.value;
$tmp1652[$tmp1655] = $tmp1654;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:161
frost$core$Int64** $tmp1656 = *(&local0);
frost$core$Int64 $tmp1657 = (frost$core$Int64) {94u};
int64_t $tmp1658 = $tmp1657.value;
frost$core$Int64* $tmp1659 = $tmp1656[$tmp1658];
frost$core$Int64 $tmp1660 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp1661 = (frost$core$Int64) {2u};
int64_t $tmp1662 = $tmp1660.value;
$tmp1659[$tmp1662] = $tmp1661;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:162
frost$core$Int64** $tmp1663 = *(&local0);
frost$core$Int64 $tmp1664 = (frost$core$Int64) {95u};
frost$core$Int64** $tmp1665 = *(&local0);
frost$core$Int64 $tmp1666 = (frost$core$Int64) {0u};
int64_t $tmp1667 = $tmp1666.value;
frost$core$Int64* $tmp1668 = $tmp1665[$tmp1667];
int64_t $tmp1669 = $tmp1664.value;
$tmp1663[$tmp1669] = $tmp1668;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:163
frost$core$Int64** $tmp1670 = *(&local0);
frost$core$Int64 $tmp1671 = (frost$core$Int64) {96u};
frost$core$Int64 $tmp1672 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp1673 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:163:28
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp1674 = $tmp1672.value;
frost$core$Int64* $tmp1675 = ((frost$core$Int64*) frostAlloc($tmp1674 * 8));
*(&local33) = $tmp1675;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp1676 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1677 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1678 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1676, $tmp1672, $tmp1677);
frost$core$Int64 $tmp1679 = $tmp1678.min;
*(&local34) = $tmp1679;
frost$core$Int64 $tmp1680 = $tmp1678.max;
frost$core$Bit $tmp1681 = $tmp1678.inclusive;
bool $tmp1682 = $tmp1681.value;
frost$core$Int64 $tmp1683 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1684 = $tmp1683.value;
frost$core$UInt64 $tmp1685 = (frost$core$UInt64) {((uint64_t) $tmp1684)};
if ($tmp1682) goto block182; else goto block183;
block182:;
int64_t $tmp1686 = $tmp1679.value;
int64_t $tmp1687 = $tmp1680.value;
bool $tmp1688 = $tmp1686 <= $tmp1687;
frost$core$Bit $tmp1689 = (frost$core$Bit) {$tmp1688};
bool $tmp1690 = $tmp1689.value;
if ($tmp1690) goto block179; else goto block180;
block183:;
int64_t $tmp1691 = $tmp1679.value;
int64_t $tmp1692 = $tmp1680.value;
bool $tmp1693 = $tmp1691 < $tmp1692;
frost$core$Bit $tmp1694 = (frost$core$Bit) {$tmp1693};
bool $tmp1695 = $tmp1694.value;
if ($tmp1695) goto block179; else goto block180;
block179:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp1696 = *(&local33);
frost$core$Int64 $tmp1697 = *(&local34);
int64_t $tmp1698 = $tmp1697.value;
$tmp1696[$tmp1698] = $tmp1673;
frost$core$Int64 $tmp1699 = *(&local34);
int64_t $tmp1700 = $tmp1680.value;
int64_t $tmp1701 = $tmp1699.value;
int64_t $tmp1702 = $tmp1700 - $tmp1701;
frost$core$Int64 $tmp1703 = (frost$core$Int64) {$tmp1702};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1704 = $tmp1703.value;
frost$core$UInt64 $tmp1705 = (frost$core$UInt64) {((uint64_t) $tmp1704)};
if ($tmp1682) goto block186; else goto block187;
block186:;
uint64_t $tmp1706 = $tmp1705.value;
uint64_t $tmp1707 = $tmp1685.value;
bool $tmp1708 = $tmp1706 >= $tmp1707;
frost$core$Bit $tmp1709 = (frost$core$Bit) {$tmp1708};
bool $tmp1710 = $tmp1709.value;
if ($tmp1710) goto block184; else goto block180;
block187:;
uint64_t $tmp1711 = $tmp1705.value;
uint64_t $tmp1712 = $tmp1685.value;
bool $tmp1713 = $tmp1711 > $tmp1712;
frost$core$Bit $tmp1714 = (frost$core$Bit) {$tmp1713};
bool $tmp1715 = $tmp1714.value;
if ($tmp1715) goto block184; else goto block180;
block184:;
int64_t $tmp1716 = $tmp1699.value;
int64_t $tmp1717 = $tmp1683.value;
int64_t $tmp1718 = $tmp1716 + $tmp1717;
frost$core$Int64 $tmp1719 = (frost$core$Int64) {$tmp1718};
*(&local34) = $tmp1719;
goto block179;
block180:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp1720 = *(&local33);
int64_t $tmp1721 = $tmp1671.value;
$tmp1670[$tmp1721] = $tmp1720;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:164
frost$core$Int64** $tmp1722 = *(&local0);
frost$core$Int64 $tmp1723 = (frost$core$Int64) {96u};
int64_t $tmp1724 = $tmp1723.value;
frost$core$Int64* $tmp1725 = $tmp1722[$tmp1724];
frost$core$Int64 $tmp1726 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1727 = (frost$core$Int64) {17u};
int64_t $tmp1728 = $tmp1726.value;
$tmp1725[$tmp1728] = $tmp1727;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:165
frost$core$Int64** $tmp1729 = *(&local0);
frost$core$Int64 $tmp1730 = (frost$core$Int64) {96u};
int64_t $tmp1731 = $tmp1730.value;
frost$core$Int64* $tmp1732 = $tmp1729[$tmp1731];
frost$core$Int64 $tmp1733 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp1734 = (frost$core$Int64) {2u};
int64_t $tmp1735 = $tmp1733.value;
$tmp1732[$tmp1735] = $tmp1734;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:166
frost$core$Int64** $tmp1736 = *(&local0);
frost$core$Int64 $tmp1737 = (frost$core$Int64) {97u};
frost$core$Int64** $tmp1738 = *(&local0);
frost$core$Int64 $tmp1739 = (frost$core$Int64) {0u};
int64_t $tmp1740 = $tmp1739.value;
frost$core$Int64* $tmp1741 = $tmp1738[$tmp1740];
int64_t $tmp1742 = $tmp1737.value;
$tmp1736[$tmp1742] = $tmp1741;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:167
frost$core$Int64** $tmp1743 = *(&local0);
frost$core$Int64 $tmp1744 = (frost$core$Int64) {98u};
frost$core$Int64** $tmp1745 = *(&local0);
frost$core$Int64 $tmp1746 = (frost$core$Int64) {0u};
int64_t $tmp1747 = $tmp1746.value;
frost$core$Int64* $tmp1748 = $tmp1745[$tmp1747];
int64_t $tmp1749 = $tmp1744.value;
$tmp1743[$tmp1749] = $tmp1748;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:168
frost$core$Int64** $tmp1750 = *(&local0);
frost$core$Int64 $tmp1751 = (frost$core$Int64) {99u};
frost$core$Int64** $tmp1752 = *(&local0);
frost$core$Int64 $tmp1753 = (frost$core$Int64) {0u};
int64_t $tmp1754 = $tmp1753.value;
frost$core$Int64* $tmp1755 = $tmp1752[$tmp1754];
int64_t $tmp1756 = $tmp1751.value;
$tmp1750[$tmp1756] = $tmp1755;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:169
frost$core$Int64** $tmp1757 = *(&local0);
frost$core$Int64 $tmp1758 = (frost$core$Int64) {100u};
frost$core$Int64** $tmp1759 = *(&local0);
frost$core$Int64 $tmp1760 = (frost$core$Int64) {0u};
int64_t $tmp1761 = $tmp1760.value;
frost$core$Int64* $tmp1762 = $tmp1759[$tmp1761];
int64_t $tmp1763 = $tmp1758.value;
$tmp1757[$tmp1763] = $tmp1762;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:170
frost$core$Int64** $tmp1764 = *(&local0);
frost$core$Int64 $tmp1765 = (frost$core$Int64) {101u};
frost$core$Int64** $tmp1766 = *(&local0);
frost$core$Int64 $tmp1767 = (frost$core$Int64) {0u};
int64_t $tmp1768 = $tmp1767.value;
frost$core$Int64* $tmp1769 = $tmp1766[$tmp1768];
int64_t $tmp1770 = $tmp1765.value;
$tmp1764[$tmp1770] = $tmp1769;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:171
frost$core$Int64** $tmp1771 = *(&local0);
frost$core$Int64 $tmp1772 = (frost$core$Int64) {102u};
frost$core$Int64** $tmp1773 = *(&local0);
frost$core$Int64 $tmp1774 = (frost$core$Int64) {0u};
int64_t $tmp1775 = $tmp1774.value;
frost$core$Int64* $tmp1776 = $tmp1773[$tmp1775];
int64_t $tmp1777 = $tmp1772.value;
$tmp1771[$tmp1777] = $tmp1776;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:172
frost$core$Int64** $tmp1778 = *(&local0);
frost$core$Int64 $tmp1779 = (frost$core$Int64) {103u};
frost$core$Int64** $tmp1780 = *(&local0);
frost$core$Int64 $tmp1781 = (frost$core$Int64) {0u};
int64_t $tmp1782 = $tmp1781.value;
frost$core$Int64* $tmp1783 = $tmp1780[$tmp1782];
int64_t $tmp1784 = $tmp1779.value;
$tmp1778[$tmp1784] = $tmp1783;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:173
frost$core$Int64** $tmp1785 = *(&local0);
frost$core$Int64 $tmp1786 = (frost$core$Int64) {104u};
frost$core$Int64** $tmp1787 = *(&local0);
frost$core$Int64 $tmp1788 = (frost$core$Int64) {0u};
int64_t $tmp1789 = $tmp1788.value;
frost$core$Int64* $tmp1790 = $tmp1787[$tmp1789];
int64_t $tmp1791 = $tmp1786.value;
$tmp1785[$tmp1791] = $tmp1790;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:174
frost$core$Int64** $tmp1792 = *(&local0);
frost$core$Int64 $tmp1793 = (frost$core$Int64) {105u};
frost$core$Int64** $tmp1794 = *(&local0);
frost$core$Int64 $tmp1795 = (frost$core$Int64) {0u};
int64_t $tmp1796 = $tmp1795.value;
frost$core$Int64* $tmp1797 = $tmp1794[$tmp1796];
int64_t $tmp1798 = $tmp1793.value;
$tmp1792[$tmp1798] = $tmp1797;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:175
frost$core$Int64** $tmp1799 = *(&local0);
frost$core$Int64 $tmp1800 = (frost$core$Int64) {106u};
frost$core$Int64** $tmp1801 = *(&local0);
frost$core$Int64 $tmp1802 = (frost$core$Int64) {0u};
int64_t $tmp1803 = $tmp1802.value;
frost$core$Int64* $tmp1804 = $tmp1801[$tmp1803];
int64_t $tmp1805 = $tmp1800.value;
$tmp1799[$tmp1805] = $tmp1804;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:176
frost$core$Int64** $tmp1806 = *(&local0);
frost$core$Int64 $tmp1807 = (frost$core$Int64) {107u};
frost$core$Int64** $tmp1808 = *(&local0);
frost$core$Int64 $tmp1809 = (frost$core$Int64) {0u};
int64_t $tmp1810 = $tmp1809.value;
frost$core$Int64* $tmp1811 = $tmp1808[$tmp1810];
int64_t $tmp1812 = $tmp1807.value;
$tmp1806[$tmp1812] = $tmp1811;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:177
frost$core$Int64** $tmp1813 = *(&local0);
frost$core$Int64 $tmp1814 = (frost$core$Int64) {108u};
frost$core$Int64** $tmp1815 = *(&local0);
frost$core$Int64 $tmp1816 = (frost$core$Int64) {0u};
int64_t $tmp1817 = $tmp1816.value;
frost$core$Int64* $tmp1818 = $tmp1815[$tmp1817];
int64_t $tmp1819 = $tmp1814.value;
$tmp1813[$tmp1819] = $tmp1818;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:178
frost$core$Int64** $tmp1820 = *(&local0);
frost$core$Int64 $tmp1821 = (frost$core$Int64) {109u};
frost$core$Int64** $tmp1822 = *(&local0);
frost$core$Int64 $tmp1823 = (frost$core$Int64) {0u};
int64_t $tmp1824 = $tmp1823.value;
frost$core$Int64* $tmp1825 = $tmp1822[$tmp1824];
int64_t $tmp1826 = $tmp1821.value;
$tmp1820[$tmp1826] = $tmp1825;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:179
frost$core$Int64** $tmp1827 = *(&local0);
frost$core$Int64 $tmp1828 = (frost$core$Int64) {110u};
frost$core$Int64** $tmp1829 = *(&local0);
frost$core$Int64 $tmp1830 = (frost$core$Int64) {0u};
int64_t $tmp1831 = $tmp1830.value;
frost$core$Int64* $tmp1832 = $tmp1829[$tmp1831];
int64_t $tmp1833 = $tmp1828.value;
$tmp1827[$tmp1833] = $tmp1832;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:180
frost$core$Int64** $tmp1834 = *(&local0);
frost$core$Int64 $tmp1835 = (frost$core$Int64) {111u};
frost$core$Int64** $tmp1836 = *(&local0);
frost$core$Int64 $tmp1837 = (frost$core$Int64) {0u};
int64_t $tmp1838 = $tmp1837.value;
frost$core$Int64* $tmp1839 = $tmp1836[$tmp1838];
int64_t $tmp1840 = $tmp1835.value;
$tmp1834[$tmp1840] = $tmp1839;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:181
frost$core$Int64** $tmp1841 = *(&local0);
frost$core$Int64 $tmp1842 = (frost$core$Int64) {112u};
frost$core$Int64** $tmp1843 = *(&local0);
frost$core$Int64 $tmp1844 = (frost$core$Int64) {0u};
int64_t $tmp1845 = $tmp1844.value;
frost$core$Int64* $tmp1846 = $tmp1843[$tmp1845];
int64_t $tmp1847 = $tmp1842.value;
$tmp1841[$tmp1847] = $tmp1846;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:182
frost$core$Int64** $tmp1848 = *(&local0);
frost$core$Int64 $tmp1849 = (frost$core$Int64) {113u};
frost$core$Int64** $tmp1850 = *(&local0);
frost$core$Int64 $tmp1851 = (frost$core$Int64) {0u};
int64_t $tmp1852 = $tmp1851.value;
frost$core$Int64* $tmp1853 = $tmp1850[$tmp1852];
int64_t $tmp1854 = $tmp1849.value;
$tmp1848[$tmp1854] = $tmp1853;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:183
frost$core$Int64** $tmp1855 = *(&local0);
frost$core$Int64 $tmp1856 = (frost$core$Int64) {114u};
frost$core$Int64** $tmp1857 = *(&local0);
frost$core$Int64 $tmp1858 = (frost$core$Int64) {0u};
int64_t $tmp1859 = $tmp1858.value;
frost$core$Int64* $tmp1860 = $tmp1857[$tmp1859];
int64_t $tmp1861 = $tmp1856.value;
$tmp1855[$tmp1861] = $tmp1860;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:184
frost$core$Int64** $tmp1862 = *(&local0);
frost$core$Int64 $tmp1863 = (frost$core$Int64) {115u};
frost$core$Int64** $tmp1864 = *(&local0);
frost$core$Int64 $tmp1865 = (frost$core$Int64) {0u};
int64_t $tmp1866 = $tmp1865.value;
frost$core$Int64* $tmp1867 = $tmp1864[$tmp1866];
int64_t $tmp1868 = $tmp1863.value;
$tmp1862[$tmp1868] = $tmp1867;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:185
frost$core$Int64** $tmp1869 = *(&local0);
frost$core$Int64 $tmp1870 = (frost$core$Int64) {116u};
frost$core$Int64** $tmp1871 = *(&local0);
frost$core$Int64 $tmp1872 = (frost$core$Int64) {0u};
int64_t $tmp1873 = $tmp1872.value;
frost$core$Int64* $tmp1874 = $tmp1871[$tmp1873];
int64_t $tmp1875 = $tmp1870.value;
$tmp1869[$tmp1875] = $tmp1874;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:186
frost$core$Int64** $tmp1876 = *(&local0);
frost$core$Int64 $tmp1877 = (frost$core$Int64) {117u};
frost$core$Int64** $tmp1878 = *(&local0);
frost$core$Int64 $tmp1879 = (frost$core$Int64) {0u};
int64_t $tmp1880 = $tmp1879.value;
frost$core$Int64* $tmp1881 = $tmp1878[$tmp1880];
int64_t $tmp1882 = $tmp1877.value;
$tmp1876[$tmp1882] = $tmp1881;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:187
frost$core$Int64** $tmp1883 = *(&local0);
frost$core$Int64 $tmp1884 = (frost$core$Int64) {118u};
frost$core$Int64** $tmp1885 = *(&local0);
frost$core$Int64 $tmp1886 = (frost$core$Int64) {0u};
int64_t $tmp1887 = $tmp1886.value;
frost$core$Int64* $tmp1888 = $tmp1885[$tmp1887];
int64_t $tmp1889 = $tmp1884.value;
$tmp1883[$tmp1889] = $tmp1888;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:188
frost$core$Int64** $tmp1890 = *(&local0);
frost$core$Int64 $tmp1891 = (frost$core$Int64) {119u};
frost$core$Int64** $tmp1892 = *(&local0);
frost$core$Int64 $tmp1893 = (frost$core$Int64) {0u};
int64_t $tmp1894 = $tmp1893.value;
frost$core$Int64* $tmp1895 = $tmp1892[$tmp1894];
int64_t $tmp1896 = $tmp1891.value;
$tmp1890[$tmp1896] = $tmp1895;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:189
frost$core$Int64** $tmp1897 = *(&local0);
frost$core$Int64 $tmp1898 = (frost$core$Int64) {120u};
frost$core$Int64** $tmp1899 = *(&local0);
frost$core$Int64 $tmp1900 = (frost$core$Int64) {0u};
int64_t $tmp1901 = $tmp1900.value;
frost$core$Int64* $tmp1902 = $tmp1899[$tmp1901];
int64_t $tmp1903 = $tmp1898.value;
$tmp1897[$tmp1903] = $tmp1902;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:190
frost$core$Int64** $tmp1904 = *(&local0);
frost$core$Int64 $tmp1905 = (frost$core$Int64) {121u};
frost$core$Int64** $tmp1906 = *(&local0);
frost$core$Int64 $tmp1907 = (frost$core$Int64) {0u};
int64_t $tmp1908 = $tmp1907.value;
frost$core$Int64* $tmp1909 = $tmp1906[$tmp1908];
int64_t $tmp1910 = $tmp1905.value;
$tmp1904[$tmp1910] = $tmp1909;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:191
frost$core$Int64** $tmp1911 = *(&local0);
frost$core$Int64 $tmp1912 = (frost$core$Int64) {122u};
frost$core$Int64** $tmp1913 = *(&local0);
frost$core$Int64 $tmp1914 = (frost$core$Int64) {0u};
int64_t $tmp1915 = $tmp1914.value;
frost$core$Int64* $tmp1916 = $tmp1913[$tmp1915];
int64_t $tmp1917 = $tmp1912.value;
$tmp1911[$tmp1917] = $tmp1916;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:192
frost$core$Int64** $tmp1918 = *(&local0);
frost$core$Int64 $tmp1919 = (frost$core$Int64) {123u};
frost$core$Int64 $tmp1920 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp1921 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:192:29
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp1922 = $tmp1920.value;
frost$core$Int64* $tmp1923 = ((frost$core$Int64*) frostAlloc($tmp1922 * 8));
*(&local35) = $tmp1923;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
frost$core$Int64 $tmp1924 = (frost$core$Int64) {0u};
frost$core$Bit $tmp1925 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp1926 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1924, $tmp1920, $tmp1925);
frost$core$Int64 $tmp1927 = $tmp1926.min;
*(&local36) = $tmp1927;
frost$core$Int64 $tmp1928 = $tmp1926.max;
frost$core$Bit $tmp1929 = $tmp1926.inclusive;
bool $tmp1930 = $tmp1929.value;
frost$core$Int64 $tmp1931 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1932 = $tmp1931.value;
frost$core$UInt64 $tmp1933 = (frost$core$UInt64) {((uint64_t) $tmp1932)};
if ($tmp1930) goto block193; else goto block194;
block193:;
int64_t $tmp1934 = $tmp1927.value;
int64_t $tmp1935 = $tmp1928.value;
bool $tmp1936 = $tmp1934 <= $tmp1935;
frost$core$Bit $tmp1937 = (frost$core$Bit) {$tmp1936};
bool $tmp1938 = $tmp1937.value;
if ($tmp1938) goto block190; else goto block191;
block194:;
int64_t $tmp1939 = $tmp1927.value;
int64_t $tmp1940 = $tmp1928.value;
bool $tmp1941 = $tmp1939 < $tmp1940;
frost$core$Bit $tmp1942 = (frost$core$Bit) {$tmp1941};
bool $tmp1943 = $tmp1942.value;
if ($tmp1943) goto block190; else goto block191;
block190:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
frost$core$Int64* $tmp1944 = *(&local35);
frost$core$Int64 $tmp1945 = *(&local36);
int64_t $tmp1946 = $tmp1945.value;
$tmp1944[$tmp1946] = $tmp1921;
frost$core$Int64 $tmp1947 = *(&local36);
int64_t $tmp1948 = $tmp1928.value;
int64_t $tmp1949 = $tmp1947.value;
int64_t $tmp1950 = $tmp1948 - $tmp1949;
frost$core$Int64 $tmp1951 = (frost$core$Int64) {$tmp1950};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp1952 = $tmp1951.value;
frost$core$UInt64 $tmp1953 = (frost$core$UInt64) {((uint64_t) $tmp1952)};
if ($tmp1930) goto block197; else goto block198;
block197:;
uint64_t $tmp1954 = $tmp1953.value;
uint64_t $tmp1955 = $tmp1933.value;
bool $tmp1956 = $tmp1954 >= $tmp1955;
frost$core$Bit $tmp1957 = (frost$core$Bit) {$tmp1956};
bool $tmp1958 = $tmp1957.value;
if ($tmp1958) goto block195; else goto block191;
block198:;
uint64_t $tmp1959 = $tmp1953.value;
uint64_t $tmp1960 = $tmp1933.value;
bool $tmp1961 = $tmp1959 > $tmp1960;
frost$core$Bit $tmp1962 = (frost$core$Bit) {$tmp1961};
bool $tmp1963 = $tmp1962.value;
if ($tmp1963) goto block195; else goto block191;
block195:;
int64_t $tmp1964 = $tmp1947.value;
int64_t $tmp1965 = $tmp1931.value;
int64_t $tmp1966 = $tmp1964 + $tmp1965;
frost$core$Int64 $tmp1967 = (frost$core$Int64) {$tmp1966};
*(&local36) = $tmp1967;
goto block190;
block191:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp1968 = *(&local35);
int64_t $tmp1969 = $tmp1919.value;
$tmp1918[$tmp1969] = $tmp1968;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:193
frost$core$Int64** $tmp1970 = *(&local0);
frost$core$Int64 $tmp1971 = (frost$core$Int64) {123u};
int64_t $tmp1972 = $tmp1971.value;
frost$core$Int64* $tmp1973 = $tmp1970[$tmp1972];
frost$core$Int64 $tmp1974 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp1975 = (frost$core$Int64) {18u};
int64_t $tmp1976 = $tmp1974.value;
$tmp1973[$tmp1976] = $tmp1975;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:194
frost$core$Int64** $tmp1977 = *(&local0);
frost$core$Int64 $tmp1978 = (frost$core$Int64) {123u};
int64_t $tmp1979 = $tmp1978.value;
frost$core$Int64* $tmp1980 = $tmp1977[$tmp1979];
frost$core$Int64 $tmp1981 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp1982 = (frost$core$Int64) {2u};
int64_t $tmp1983 = $tmp1981.value;
$tmp1980[$tmp1983] = $tmp1982;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:195
frost$core$Int64** $tmp1984 = *(&local0);
frost$core$Int64 $tmp1985 = (frost$core$Int64) {124u};
frost$core$Int64** $tmp1986 = *(&local0);
frost$core$Int64 $tmp1987 = (frost$core$Int64) {0u};
int64_t $tmp1988 = $tmp1987.value;
frost$core$Int64* $tmp1989 = $tmp1986[$tmp1988];
int64_t $tmp1990 = $tmp1985.value;
$tmp1984[$tmp1990] = $tmp1989;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:196
frost$core$Int64** $tmp1991 = *(&local0);
frost$core$Int64 $tmp1992 = (frost$core$Int64) {125u};
frost$core$Int64 $tmp1993 = (frost$core$Int64) {20u};
frost$core$Int64 $tmp1994 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.regex.RegexLexer.alloc(count:frost.core.Int64, fill:frost.core.Int64):frost.unsafe.Pointer<frost.core.Int64> from RegexLexer.frost:196:29
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:26
int64_t $tmp1995 = $tmp1993.value;
frost$core$Int64* $tmp1996 = ((frost$core$Int64*) frostAlloc($tmp1995 * 8));
*(&local37) = $tmp1996;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:27
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
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:28
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
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:30
frost$core$Int64* $tmp2041 = *(&local37);
int64_t $tmp2042 = $tmp1992.value;
$tmp1991[$tmp2042] = $tmp2041;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:197
frost$core$Int64** $tmp2043 = *(&local0);
frost$core$Int64 $tmp2044 = (frost$core$Int64) {125u};
int64_t $tmp2045 = $tmp2044.value;
frost$core$Int64* $tmp2046 = $tmp2043[$tmp2045];
frost$core$Int64 $tmp2047 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp2048 = (frost$core$Int64) {19u};
int64_t $tmp2049 = $tmp2047.value;
$tmp2046[$tmp2049] = $tmp2048;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:198
frost$core$Int64** $tmp2050 = *(&local0);
frost$core$Int64 $tmp2051 = (frost$core$Int64) {125u};
int64_t $tmp2052 = $tmp2051.value;
frost$core$Int64* $tmp2053 = $tmp2050[$tmp2052];
frost$core$Int64 $tmp2054 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp2055 = (frost$core$Int64) {2u};
int64_t $tmp2056 = $tmp2054.value;
$tmp2053[$tmp2056] = $tmp2055;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:199
frost$core$Int64** $tmp2057 = *(&local0);
frost$core$Int64 $tmp2058 = (frost$core$Int64) {126u};
frost$core$Int64** $tmp2059 = *(&local0);
frost$core$Int64 $tmp2060 = (frost$core$Int64) {0u};
int64_t $tmp2061 = $tmp2060.value;
frost$core$Int64* $tmp2062 = $tmp2059[$tmp2061];
int64_t $tmp2063 = $tmp2058.value;
$tmp2057[$tmp2063] = $tmp2062;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:200
frost$core$Int64** $tmp2064 = *(&local0);
frost$core$Int64 $tmp2065 = (frost$core$Int64) {127u};
frost$core$Int64** $tmp2066 = *(&local0);
frost$core$Int64 $tmp2067 = (frost$core$Int64) {0u};
int64_t $tmp2068 = $tmp2067.value;
frost$core$Int64* $tmp2069 = $tmp2066[$tmp2068];
int64_t $tmp2070 = $tmp2065.value;
$tmp2064[$tmp2070] = $tmp2069;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:201
frost$core$Int64** $tmp2071 = *(&local0);
frost$core$Int64 $tmp2072 = (frost$core$Int64) {128u};
frost$core$Int64** $tmp2073 = *(&local0);
frost$core$Int64 $tmp2074 = (frost$core$Int64) {0u};
int64_t $tmp2075 = $tmp2074.value;
frost$core$Int64* $tmp2076 = $tmp2073[$tmp2075];
int64_t $tmp2077 = $tmp2072.value;
$tmp2071[$tmp2077] = $tmp2076;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:202
frost$core$Int64** $tmp2078 = *(&local0);
frost$core$Int64 $tmp2079 = (frost$core$Int64) {129u};
frost$core$Int64** $tmp2080 = *(&local0);
frost$core$Int64 $tmp2081 = (frost$core$Int64) {0u};
int64_t $tmp2082 = $tmp2081.value;
frost$core$Int64* $tmp2083 = $tmp2080[$tmp2082];
int64_t $tmp2084 = $tmp2079.value;
$tmp2078[$tmp2084] = $tmp2083;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:203
frost$core$Int64** $tmp2085 = *(&local0);
frost$core$Int64 $tmp2086 = (frost$core$Int64) {130u};
frost$core$Int64** $tmp2087 = *(&local0);
frost$core$Int64 $tmp2088 = (frost$core$Int64) {0u};
int64_t $tmp2089 = $tmp2088.value;
frost$core$Int64* $tmp2090 = $tmp2087[$tmp2089];
int64_t $tmp2091 = $tmp2086.value;
$tmp2085[$tmp2091] = $tmp2090;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:204
frost$core$Int64** $tmp2092 = *(&local0);
frost$core$Int64 $tmp2093 = (frost$core$Int64) {131u};
frost$core$Int64** $tmp2094 = *(&local0);
frost$core$Int64 $tmp2095 = (frost$core$Int64) {0u};
int64_t $tmp2096 = $tmp2095.value;
frost$core$Int64* $tmp2097 = $tmp2094[$tmp2096];
int64_t $tmp2098 = $tmp2093.value;
$tmp2092[$tmp2098] = $tmp2097;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:205
frost$core$Int64** $tmp2099 = *(&local0);
frost$core$Int64 $tmp2100 = (frost$core$Int64) {132u};
frost$core$Int64** $tmp2101 = *(&local0);
frost$core$Int64 $tmp2102 = (frost$core$Int64) {0u};
int64_t $tmp2103 = $tmp2102.value;
frost$core$Int64* $tmp2104 = $tmp2101[$tmp2103];
int64_t $tmp2105 = $tmp2100.value;
$tmp2099[$tmp2105] = $tmp2104;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:206
frost$core$Int64** $tmp2106 = *(&local0);
frost$core$Int64 $tmp2107 = (frost$core$Int64) {133u};
frost$core$Int64** $tmp2108 = *(&local0);
frost$core$Int64 $tmp2109 = (frost$core$Int64) {0u};
int64_t $tmp2110 = $tmp2109.value;
frost$core$Int64* $tmp2111 = $tmp2108[$tmp2110];
int64_t $tmp2112 = $tmp2107.value;
$tmp2106[$tmp2112] = $tmp2111;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:207
frost$core$Int64** $tmp2113 = *(&local0);
frost$core$Int64 $tmp2114 = (frost$core$Int64) {134u};
frost$core$Int64** $tmp2115 = *(&local0);
frost$core$Int64 $tmp2116 = (frost$core$Int64) {0u};
int64_t $tmp2117 = $tmp2116.value;
frost$core$Int64* $tmp2118 = $tmp2115[$tmp2117];
int64_t $tmp2119 = $tmp2114.value;
$tmp2113[$tmp2119] = $tmp2118;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:208
frost$core$Int64** $tmp2120 = *(&local0);
frost$core$Int64 $tmp2121 = (frost$core$Int64) {135u};
frost$core$Int64** $tmp2122 = *(&local0);
frost$core$Int64 $tmp2123 = (frost$core$Int64) {0u};
int64_t $tmp2124 = $tmp2123.value;
frost$core$Int64* $tmp2125 = $tmp2122[$tmp2124];
int64_t $tmp2126 = $tmp2121.value;
$tmp2120[$tmp2126] = $tmp2125;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:209
frost$core$Int64** $tmp2127 = *(&local0);
frost$core$Int64 $tmp2128 = (frost$core$Int64) {136u};
frost$core$Int64** $tmp2129 = *(&local0);
frost$core$Int64 $tmp2130 = (frost$core$Int64) {0u};
int64_t $tmp2131 = $tmp2130.value;
frost$core$Int64* $tmp2132 = $tmp2129[$tmp2131];
int64_t $tmp2133 = $tmp2128.value;
$tmp2127[$tmp2133] = $tmp2132;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:210
frost$core$Int64** $tmp2134 = *(&local0);
frost$core$Int64 $tmp2135 = (frost$core$Int64) {137u};
frost$core$Int64** $tmp2136 = *(&local0);
frost$core$Int64 $tmp2137 = (frost$core$Int64) {0u};
int64_t $tmp2138 = $tmp2137.value;
frost$core$Int64* $tmp2139 = $tmp2136[$tmp2138];
int64_t $tmp2140 = $tmp2135.value;
$tmp2134[$tmp2140] = $tmp2139;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:211
frost$core$Int64** $tmp2141 = *(&local0);
frost$core$Int64 $tmp2142 = (frost$core$Int64) {138u};
frost$core$Int64** $tmp2143 = *(&local0);
frost$core$Int64 $tmp2144 = (frost$core$Int64) {0u};
int64_t $tmp2145 = $tmp2144.value;
frost$core$Int64* $tmp2146 = $tmp2143[$tmp2145];
int64_t $tmp2147 = $tmp2142.value;
$tmp2141[$tmp2147] = $tmp2146;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:212
frost$core$Int64** $tmp2148 = *(&local0);
frost$core$Int64 $tmp2149 = (frost$core$Int64) {139u};
frost$core$Int64** $tmp2150 = *(&local0);
frost$core$Int64 $tmp2151 = (frost$core$Int64) {0u};
int64_t $tmp2152 = $tmp2151.value;
frost$core$Int64* $tmp2153 = $tmp2150[$tmp2152];
int64_t $tmp2154 = $tmp2149.value;
$tmp2148[$tmp2154] = $tmp2153;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:213
frost$core$Int64** $tmp2155 = *(&local0);
frost$core$Int64 $tmp2156 = (frost$core$Int64) {140u};
frost$core$Int64** $tmp2157 = *(&local0);
frost$core$Int64 $tmp2158 = (frost$core$Int64) {0u};
int64_t $tmp2159 = $tmp2158.value;
frost$core$Int64* $tmp2160 = $tmp2157[$tmp2159];
int64_t $tmp2161 = $tmp2156.value;
$tmp2155[$tmp2161] = $tmp2160;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:214
frost$core$Int64** $tmp2162 = *(&local0);
frost$core$Int64 $tmp2163 = (frost$core$Int64) {141u};
frost$core$Int64** $tmp2164 = *(&local0);
frost$core$Int64 $tmp2165 = (frost$core$Int64) {0u};
int64_t $tmp2166 = $tmp2165.value;
frost$core$Int64* $tmp2167 = $tmp2164[$tmp2166];
int64_t $tmp2168 = $tmp2163.value;
$tmp2162[$tmp2168] = $tmp2167;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:215
frost$core$Int64** $tmp2169 = *(&local0);
frost$core$Int64 $tmp2170 = (frost$core$Int64) {142u};
frost$core$Int64** $tmp2171 = *(&local0);
frost$core$Int64 $tmp2172 = (frost$core$Int64) {0u};
int64_t $tmp2173 = $tmp2172.value;
frost$core$Int64* $tmp2174 = $tmp2171[$tmp2173];
int64_t $tmp2175 = $tmp2170.value;
$tmp2169[$tmp2175] = $tmp2174;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:216
frost$core$Int64** $tmp2176 = *(&local0);
frost$core$Int64 $tmp2177 = (frost$core$Int64) {143u};
frost$core$Int64** $tmp2178 = *(&local0);
frost$core$Int64 $tmp2179 = (frost$core$Int64) {0u};
int64_t $tmp2180 = $tmp2179.value;
frost$core$Int64* $tmp2181 = $tmp2178[$tmp2180];
int64_t $tmp2182 = $tmp2177.value;
$tmp2176[$tmp2182] = $tmp2181;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:217
frost$core$Int64** $tmp2183 = *(&local0);
frost$core$Int64 $tmp2184 = (frost$core$Int64) {144u};
frost$core$Int64** $tmp2185 = *(&local0);
frost$core$Int64 $tmp2186 = (frost$core$Int64) {0u};
int64_t $tmp2187 = $tmp2186.value;
frost$core$Int64* $tmp2188 = $tmp2185[$tmp2187];
int64_t $tmp2189 = $tmp2184.value;
$tmp2183[$tmp2189] = $tmp2188;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:218
frost$core$Int64** $tmp2190 = *(&local0);
frost$core$Int64 $tmp2191 = (frost$core$Int64) {145u};
frost$core$Int64** $tmp2192 = *(&local0);
frost$core$Int64 $tmp2193 = (frost$core$Int64) {0u};
int64_t $tmp2194 = $tmp2193.value;
frost$core$Int64* $tmp2195 = $tmp2192[$tmp2194];
int64_t $tmp2196 = $tmp2191.value;
$tmp2190[$tmp2196] = $tmp2195;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:219
frost$core$Int64** $tmp2197 = *(&local0);
frost$core$Int64 $tmp2198 = (frost$core$Int64) {146u};
frost$core$Int64** $tmp2199 = *(&local0);
frost$core$Int64 $tmp2200 = (frost$core$Int64) {0u};
int64_t $tmp2201 = $tmp2200.value;
frost$core$Int64* $tmp2202 = $tmp2199[$tmp2201];
int64_t $tmp2203 = $tmp2198.value;
$tmp2197[$tmp2203] = $tmp2202;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:220
frost$core$Int64** $tmp2204 = *(&local0);
frost$core$Int64 $tmp2205 = (frost$core$Int64) {147u};
frost$core$Int64** $tmp2206 = *(&local0);
frost$core$Int64 $tmp2207 = (frost$core$Int64) {0u};
int64_t $tmp2208 = $tmp2207.value;
frost$core$Int64* $tmp2209 = $tmp2206[$tmp2208];
int64_t $tmp2210 = $tmp2205.value;
$tmp2204[$tmp2210] = $tmp2209;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:221
frost$core$Int64** $tmp2211 = *(&local0);
frost$core$Int64 $tmp2212 = (frost$core$Int64) {148u};
frost$core$Int64** $tmp2213 = *(&local0);
frost$core$Int64 $tmp2214 = (frost$core$Int64) {0u};
int64_t $tmp2215 = $tmp2214.value;
frost$core$Int64* $tmp2216 = $tmp2213[$tmp2215];
int64_t $tmp2217 = $tmp2212.value;
$tmp2211[$tmp2217] = $tmp2216;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:222
frost$core$Int64** $tmp2218 = *(&local0);
frost$core$Int64 $tmp2219 = (frost$core$Int64) {149u};
frost$core$Int64** $tmp2220 = *(&local0);
frost$core$Int64 $tmp2221 = (frost$core$Int64) {0u};
int64_t $tmp2222 = $tmp2221.value;
frost$core$Int64* $tmp2223 = $tmp2220[$tmp2222];
int64_t $tmp2224 = $tmp2219.value;
$tmp2218[$tmp2224] = $tmp2223;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:223
frost$core$Int64** $tmp2225 = *(&local0);
frost$core$Int64 $tmp2226 = (frost$core$Int64) {150u};
frost$core$Int64** $tmp2227 = *(&local0);
frost$core$Int64 $tmp2228 = (frost$core$Int64) {0u};
int64_t $tmp2229 = $tmp2228.value;
frost$core$Int64* $tmp2230 = $tmp2227[$tmp2229];
int64_t $tmp2231 = $tmp2226.value;
$tmp2225[$tmp2231] = $tmp2230;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:224
frost$core$Int64** $tmp2232 = *(&local0);
frost$core$Int64 $tmp2233 = (frost$core$Int64) {151u};
frost$core$Int64** $tmp2234 = *(&local0);
frost$core$Int64 $tmp2235 = (frost$core$Int64) {0u};
int64_t $tmp2236 = $tmp2235.value;
frost$core$Int64* $tmp2237 = $tmp2234[$tmp2236];
int64_t $tmp2238 = $tmp2233.value;
$tmp2232[$tmp2238] = $tmp2237;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:225
frost$core$Int64** $tmp2239 = *(&local0);
frost$core$Int64 $tmp2240 = (frost$core$Int64) {152u};
frost$core$Int64** $tmp2241 = *(&local0);
frost$core$Int64 $tmp2242 = (frost$core$Int64) {0u};
int64_t $tmp2243 = $tmp2242.value;
frost$core$Int64* $tmp2244 = $tmp2241[$tmp2243];
int64_t $tmp2245 = $tmp2240.value;
$tmp2239[$tmp2245] = $tmp2244;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:226
frost$core$Int64** $tmp2246 = *(&local0);
frost$core$Int64 $tmp2247 = (frost$core$Int64) {153u};
frost$core$Int64** $tmp2248 = *(&local0);
frost$core$Int64 $tmp2249 = (frost$core$Int64) {0u};
int64_t $tmp2250 = $tmp2249.value;
frost$core$Int64* $tmp2251 = $tmp2248[$tmp2250];
int64_t $tmp2252 = $tmp2247.value;
$tmp2246[$tmp2252] = $tmp2251;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:227
frost$core$Int64** $tmp2253 = *(&local0);
frost$core$Int64 $tmp2254 = (frost$core$Int64) {154u};
frost$core$Int64** $tmp2255 = *(&local0);
frost$core$Int64 $tmp2256 = (frost$core$Int64) {0u};
int64_t $tmp2257 = $tmp2256.value;
frost$core$Int64* $tmp2258 = $tmp2255[$tmp2257];
int64_t $tmp2259 = $tmp2254.value;
$tmp2253[$tmp2259] = $tmp2258;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:228
frost$core$Int64** $tmp2260 = *(&local0);
frost$core$Int64 $tmp2261 = (frost$core$Int64) {155u};
frost$core$Int64** $tmp2262 = *(&local0);
frost$core$Int64 $tmp2263 = (frost$core$Int64) {0u};
int64_t $tmp2264 = $tmp2263.value;
frost$core$Int64* $tmp2265 = $tmp2262[$tmp2264];
int64_t $tmp2266 = $tmp2261.value;
$tmp2260[$tmp2266] = $tmp2265;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:229
frost$core$Int64** $tmp2267 = *(&local0);
frost$core$Int64 $tmp2268 = (frost$core$Int64) {156u};
frost$core$Int64** $tmp2269 = *(&local0);
frost$core$Int64 $tmp2270 = (frost$core$Int64) {0u};
int64_t $tmp2271 = $tmp2270.value;
frost$core$Int64* $tmp2272 = $tmp2269[$tmp2271];
int64_t $tmp2273 = $tmp2268.value;
$tmp2267[$tmp2273] = $tmp2272;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:230
frost$core$Int64** $tmp2274 = *(&local0);
frost$core$Int64 $tmp2275 = (frost$core$Int64) {157u};
frost$core$Int64** $tmp2276 = *(&local0);
frost$core$Int64 $tmp2277 = (frost$core$Int64) {0u};
int64_t $tmp2278 = $tmp2277.value;
frost$core$Int64* $tmp2279 = $tmp2276[$tmp2278];
int64_t $tmp2280 = $tmp2275.value;
$tmp2274[$tmp2280] = $tmp2279;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:231
frost$core$Int64** $tmp2281 = *(&local0);
frost$core$Int64 $tmp2282 = (frost$core$Int64) {158u};
frost$core$Int64** $tmp2283 = *(&local0);
frost$core$Int64 $tmp2284 = (frost$core$Int64) {0u};
int64_t $tmp2285 = $tmp2284.value;
frost$core$Int64* $tmp2286 = $tmp2283[$tmp2285];
int64_t $tmp2287 = $tmp2282.value;
$tmp2281[$tmp2287] = $tmp2286;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:232
frost$core$Int64** $tmp2288 = *(&local0);
frost$core$Int64 $tmp2289 = (frost$core$Int64) {159u};
frost$core$Int64** $tmp2290 = *(&local0);
frost$core$Int64 $tmp2291 = (frost$core$Int64) {0u};
int64_t $tmp2292 = $tmp2291.value;
frost$core$Int64* $tmp2293 = $tmp2290[$tmp2292];
int64_t $tmp2294 = $tmp2289.value;
$tmp2288[$tmp2294] = $tmp2293;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:233
frost$core$Int64** $tmp2295 = *(&local0);
frost$core$Int64 $tmp2296 = (frost$core$Int64) {160u};
frost$core$Int64** $tmp2297 = *(&local0);
frost$core$Int64 $tmp2298 = (frost$core$Int64) {0u};
int64_t $tmp2299 = $tmp2298.value;
frost$core$Int64* $tmp2300 = $tmp2297[$tmp2299];
int64_t $tmp2301 = $tmp2296.value;
$tmp2295[$tmp2301] = $tmp2300;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:234
frost$core$Int64** $tmp2302 = *(&local0);
frost$core$Int64 $tmp2303 = (frost$core$Int64) {161u};
frost$core$Int64** $tmp2304 = *(&local0);
frost$core$Int64 $tmp2305 = (frost$core$Int64) {0u};
int64_t $tmp2306 = $tmp2305.value;
frost$core$Int64* $tmp2307 = $tmp2304[$tmp2306];
int64_t $tmp2308 = $tmp2303.value;
$tmp2302[$tmp2308] = $tmp2307;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:235
frost$core$Int64** $tmp2309 = *(&local0);
frost$core$Int64 $tmp2310 = (frost$core$Int64) {162u};
frost$core$Int64** $tmp2311 = *(&local0);
frost$core$Int64 $tmp2312 = (frost$core$Int64) {0u};
int64_t $tmp2313 = $tmp2312.value;
frost$core$Int64* $tmp2314 = $tmp2311[$tmp2313];
int64_t $tmp2315 = $tmp2310.value;
$tmp2309[$tmp2315] = $tmp2314;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:236
frost$core$Int64** $tmp2316 = *(&local0);
frost$core$Int64 $tmp2317 = (frost$core$Int64) {163u};
frost$core$Int64** $tmp2318 = *(&local0);
frost$core$Int64 $tmp2319 = (frost$core$Int64) {0u};
int64_t $tmp2320 = $tmp2319.value;
frost$core$Int64* $tmp2321 = $tmp2318[$tmp2320];
int64_t $tmp2322 = $tmp2317.value;
$tmp2316[$tmp2322] = $tmp2321;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:237
frost$core$Int64** $tmp2323 = *(&local0);
frost$core$Int64 $tmp2324 = (frost$core$Int64) {164u};
frost$core$Int64** $tmp2325 = *(&local0);
frost$core$Int64 $tmp2326 = (frost$core$Int64) {0u};
int64_t $tmp2327 = $tmp2326.value;
frost$core$Int64* $tmp2328 = $tmp2325[$tmp2327];
int64_t $tmp2329 = $tmp2324.value;
$tmp2323[$tmp2329] = $tmp2328;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:238
frost$core$Int64** $tmp2330 = *(&local0);
frost$core$Int64 $tmp2331 = (frost$core$Int64) {165u};
frost$core$Int64** $tmp2332 = *(&local0);
frost$core$Int64 $tmp2333 = (frost$core$Int64) {0u};
int64_t $tmp2334 = $tmp2333.value;
frost$core$Int64* $tmp2335 = $tmp2332[$tmp2334];
int64_t $tmp2336 = $tmp2331.value;
$tmp2330[$tmp2336] = $tmp2335;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:239
frost$core$Int64** $tmp2337 = *(&local0);
frost$core$Int64 $tmp2338 = (frost$core$Int64) {166u};
frost$core$Int64** $tmp2339 = *(&local0);
frost$core$Int64 $tmp2340 = (frost$core$Int64) {0u};
int64_t $tmp2341 = $tmp2340.value;
frost$core$Int64* $tmp2342 = $tmp2339[$tmp2341];
int64_t $tmp2343 = $tmp2338.value;
$tmp2337[$tmp2343] = $tmp2342;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:240
frost$core$Int64** $tmp2344 = *(&local0);
frost$core$Int64 $tmp2345 = (frost$core$Int64) {167u};
frost$core$Int64** $tmp2346 = *(&local0);
frost$core$Int64 $tmp2347 = (frost$core$Int64) {0u};
int64_t $tmp2348 = $tmp2347.value;
frost$core$Int64* $tmp2349 = $tmp2346[$tmp2348];
int64_t $tmp2350 = $tmp2345.value;
$tmp2344[$tmp2350] = $tmp2349;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:241
frost$core$Int64** $tmp2351 = *(&local0);
frost$core$Int64 $tmp2352 = (frost$core$Int64) {168u};
frost$core$Int64** $tmp2353 = *(&local0);
frost$core$Int64 $tmp2354 = (frost$core$Int64) {0u};
int64_t $tmp2355 = $tmp2354.value;
frost$core$Int64* $tmp2356 = $tmp2353[$tmp2355];
int64_t $tmp2357 = $tmp2352.value;
$tmp2351[$tmp2357] = $tmp2356;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:242
frost$core$Int64** $tmp2358 = *(&local0);
frost$core$Int64 $tmp2359 = (frost$core$Int64) {169u};
frost$core$Int64** $tmp2360 = *(&local0);
frost$core$Int64 $tmp2361 = (frost$core$Int64) {0u};
int64_t $tmp2362 = $tmp2361.value;
frost$core$Int64* $tmp2363 = $tmp2360[$tmp2362];
int64_t $tmp2364 = $tmp2359.value;
$tmp2358[$tmp2364] = $tmp2363;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:243
frost$core$Int64** $tmp2365 = *(&local0);
frost$core$Int64 $tmp2366 = (frost$core$Int64) {170u};
frost$core$Int64** $tmp2367 = *(&local0);
frost$core$Int64 $tmp2368 = (frost$core$Int64) {0u};
int64_t $tmp2369 = $tmp2368.value;
frost$core$Int64* $tmp2370 = $tmp2367[$tmp2369];
int64_t $tmp2371 = $tmp2366.value;
$tmp2365[$tmp2371] = $tmp2370;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:244
frost$core$Int64** $tmp2372 = *(&local0);
frost$core$Int64 $tmp2373 = (frost$core$Int64) {171u};
frost$core$Int64** $tmp2374 = *(&local0);
frost$core$Int64 $tmp2375 = (frost$core$Int64) {0u};
int64_t $tmp2376 = $tmp2375.value;
frost$core$Int64* $tmp2377 = $tmp2374[$tmp2376];
int64_t $tmp2378 = $tmp2373.value;
$tmp2372[$tmp2378] = $tmp2377;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:245
frost$core$Int64** $tmp2379 = *(&local0);
frost$core$Int64 $tmp2380 = (frost$core$Int64) {172u};
frost$core$Int64** $tmp2381 = *(&local0);
frost$core$Int64 $tmp2382 = (frost$core$Int64) {0u};
int64_t $tmp2383 = $tmp2382.value;
frost$core$Int64* $tmp2384 = $tmp2381[$tmp2383];
int64_t $tmp2385 = $tmp2380.value;
$tmp2379[$tmp2385] = $tmp2384;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:246
frost$core$Int64** $tmp2386 = *(&local0);
frost$core$Int64 $tmp2387 = (frost$core$Int64) {173u};
frost$core$Int64** $tmp2388 = *(&local0);
frost$core$Int64 $tmp2389 = (frost$core$Int64) {0u};
int64_t $tmp2390 = $tmp2389.value;
frost$core$Int64* $tmp2391 = $tmp2388[$tmp2390];
int64_t $tmp2392 = $tmp2387.value;
$tmp2386[$tmp2392] = $tmp2391;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:247
frost$core$Int64** $tmp2393 = *(&local0);
frost$core$Int64 $tmp2394 = (frost$core$Int64) {174u};
frost$core$Int64** $tmp2395 = *(&local0);
frost$core$Int64 $tmp2396 = (frost$core$Int64) {0u};
int64_t $tmp2397 = $tmp2396.value;
frost$core$Int64* $tmp2398 = $tmp2395[$tmp2397];
int64_t $tmp2399 = $tmp2394.value;
$tmp2393[$tmp2399] = $tmp2398;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:248
frost$core$Int64** $tmp2400 = *(&local0);
frost$core$Int64 $tmp2401 = (frost$core$Int64) {175u};
frost$core$Int64** $tmp2402 = *(&local0);
frost$core$Int64 $tmp2403 = (frost$core$Int64) {0u};
int64_t $tmp2404 = $tmp2403.value;
frost$core$Int64* $tmp2405 = $tmp2402[$tmp2404];
int64_t $tmp2406 = $tmp2401.value;
$tmp2400[$tmp2406] = $tmp2405;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:249
frost$core$Int64** $tmp2407 = *(&local0);
frost$core$Int64 $tmp2408 = (frost$core$Int64) {176u};
frost$core$Int64** $tmp2409 = *(&local0);
frost$core$Int64 $tmp2410 = (frost$core$Int64) {0u};
int64_t $tmp2411 = $tmp2410.value;
frost$core$Int64* $tmp2412 = $tmp2409[$tmp2411];
int64_t $tmp2413 = $tmp2408.value;
$tmp2407[$tmp2413] = $tmp2412;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:250
frost$core$Int64** $tmp2414 = *(&local0);
frost$core$Int64 $tmp2415 = (frost$core$Int64) {177u};
frost$core$Int64** $tmp2416 = *(&local0);
frost$core$Int64 $tmp2417 = (frost$core$Int64) {0u};
int64_t $tmp2418 = $tmp2417.value;
frost$core$Int64* $tmp2419 = $tmp2416[$tmp2418];
int64_t $tmp2420 = $tmp2415.value;
$tmp2414[$tmp2420] = $tmp2419;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:251
frost$core$Int64** $tmp2421 = *(&local0);
frost$core$Int64 $tmp2422 = (frost$core$Int64) {178u};
frost$core$Int64** $tmp2423 = *(&local0);
frost$core$Int64 $tmp2424 = (frost$core$Int64) {0u};
int64_t $tmp2425 = $tmp2424.value;
frost$core$Int64* $tmp2426 = $tmp2423[$tmp2425];
int64_t $tmp2427 = $tmp2422.value;
$tmp2421[$tmp2427] = $tmp2426;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:252
frost$core$Int64** $tmp2428 = *(&local0);
frost$core$Int64 $tmp2429 = (frost$core$Int64) {179u};
frost$core$Int64** $tmp2430 = *(&local0);
frost$core$Int64 $tmp2431 = (frost$core$Int64) {0u};
int64_t $tmp2432 = $tmp2431.value;
frost$core$Int64* $tmp2433 = $tmp2430[$tmp2432];
int64_t $tmp2434 = $tmp2429.value;
$tmp2428[$tmp2434] = $tmp2433;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:253
frost$core$Int64** $tmp2435 = *(&local0);
frost$core$Int64 $tmp2436 = (frost$core$Int64) {180u};
frost$core$Int64** $tmp2437 = *(&local0);
frost$core$Int64 $tmp2438 = (frost$core$Int64) {0u};
int64_t $tmp2439 = $tmp2438.value;
frost$core$Int64* $tmp2440 = $tmp2437[$tmp2439];
int64_t $tmp2441 = $tmp2436.value;
$tmp2435[$tmp2441] = $tmp2440;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:254
frost$core$Int64** $tmp2442 = *(&local0);
frost$core$Int64 $tmp2443 = (frost$core$Int64) {181u};
frost$core$Int64** $tmp2444 = *(&local0);
frost$core$Int64 $tmp2445 = (frost$core$Int64) {0u};
int64_t $tmp2446 = $tmp2445.value;
frost$core$Int64* $tmp2447 = $tmp2444[$tmp2446];
int64_t $tmp2448 = $tmp2443.value;
$tmp2442[$tmp2448] = $tmp2447;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:255
frost$core$Int64** $tmp2449 = *(&local0);
frost$core$Int64 $tmp2450 = (frost$core$Int64) {182u};
frost$core$Int64** $tmp2451 = *(&local0);
frost$core$Int64 $tmp2452 = (frost$core$Int64) {0u};
int64_t $tmp2453 = $tmp2452.value;
frost$core$Int64* $tmp2454 = $tmp2451[$tmp2453];
int64_t $tmp2455 = $tmp2450.value;
$tmp2449[$tmp2455] = $tmp2454;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:256
frost$core$Int64** $tmp2456 = *(&local0);
frost$core$Int64 $tmp2457 = (frost$core$Int64) {183u};
frost$core$Int64** $tmp2458 = *(&local0);
frost$core$Int64 $tmp2459 = (frost$core$Int64) {0u};
int64_t $tmp2460 = $tmp2459.value;
frost$core$Int64* $tmp2461 = $tmp2458[$tmp2460];
int64_t $tmp2462 = $tmp2457.value;
$tmp2456[$tmp2462] = $tmp2461;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:257
frost$core$Int64** $tmp2463 = *(&local0);
frost$core$Int64 $tmp2464 = (frost$core$Int64) {184u};
frost$core$Int64** $tmp2465 = *(&local0);
frost$core$Int64 $tmp2466 = (frost$core$Int64) {0u};
int64_t $tmp2467 = $tmp2466.value;
frost$core$Int64* $tmp2468 = $tmp2465[$tmp2467];
int64_t $tmp2469 = $tmp2464.value;
$tmp2463[$tmp2469] = $tmp2468;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:258
frost$core$Int64** $tmp2470 = *(&local0);
frost$core$Int64 $tmp2471 = (frost$core$Int64) {185u};
frost$core$Int64** $tmp2472 = *(&local0);
frost$core$Int64 $tmp2473 = (frost$core$Int64) {0u};
int64_t $tmp2474 = $tmp2473.value;
frost$core$Int64* $tmp2475 = $tmp2472[$tmp2474];
int64_t $tmp2476 = $tmp2471.value;
$tmp2470[$tmp2476] = $tmp2475;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:259
frost$core$Int64** $tmp2477 = *(&local0);
frost$core$Int64 $tmp2478 = (frost$core$Int64) {186u};
frost$core$Int64** $tmp2479 = *(&local0);
frost$core$Int64 $tmp2480 = (frost$core$Int64) {0u};
int64_t $tmp2481 = $tmp2480.value;
frost$core$Int64* $tmp2482 = $tmp2479[$tmp2481];
int64_t $tmp2483 = $tmp2478.value;
$tmp2477[$tmp2483] = $tmp2482;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:260
frost$core$Int64** $tmp2484 = *(&local0);
frost$core$Int64 $tmp2485 = (frost$core$Int64) {187u};
frost$core$Int64** $tmp2486 = *(&local0);
frost$core$Int64 $tmp2487 = (frost$core$Int64) {0u};
int64_t $tmp2488 = $tmp2487.value;
frost$core$Int64* $tmp2489 = $tmp2486[$tmp2488];
int64_t $tmp2490 = $tmp2485.value;
$tmp2484[$tmp2490] = $tmp2489;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:261
frost$core$Int64** $tmp2491 = *(&local0);
frost$core$Int64 $tmp2492 = (frost$core$Int64) {188u};
frost$core$Int64** $tmp2493 = *(&local0);
frost$core$Int64 $tmp2494 = (frost$core$Int64) {0u};
int64_t $tmp2495 = $tmp2494.value;
frost$core$Int64* $tmp2496 = $tmp2493[$tmp2495];
int64_t $tmp2497 = $tmp2492.value;
$tmp2491[$tmp2497] = $tmp2496;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:262
frost$core$Int64** $tmp2498 = *(&local0);
frost$core$Int64 $tmp2499 = (frost$core$Int64) {189u};
frost$core$Int64** $tmp2500 = *(&local0);
frost$core$Int64 $tmp2501 = (frost$core$Int64) {0u};
int64_t $tmp2502 = $tmp2501.value;
frost$core$Int64* $tmp2503 = $tmp2500[$tmp2502];
int64_t $tmp2504 = $tmp2499.value;
$tmp2498[$tmp2504] = $tmp2503;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:263
frost$core$Int64** $tmp2505 = *(&local0);
frost$core$Int64 $tmp2506 = (frost$core$Int64) {190u};
frost$core$Int64** $tmp2507 = *(&local0);
frost$core$Int64 $tmp2508 = (frost$core$Int64) {0u};
int64_t $tmp2509 = $tmp2508.value;
frost$core$Int64* $tmp2510 = $tmp2507[$tmp2509];
int64_t $tmp2511 = $tmp2506.value;
$tmp2505[$tmp2511] = $tmp2510;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:264
frost$core$Int64** $tmp2512 = *(&local0);
frost$core$Int64 $tmp2513 = (frost$core$Int64) {191u};
frost$core$Int64** $tmp2514 = *(&local0);
frost$core$Int64 $tmp2515 = (frost$core$Int64) {0u};
int64_t $tmp2516 = $tmp2515.value;
frost$core$Int64* $tmp2517 = $tmp2514[$tmp2516];
int64_t $tmp2518 = $tmp2513.value;
$tmp2512[$tmp2518] = $tmp2517;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:265
frost$core$Int64** $tmp2519 = *(&local0);
frost$core$Int64 $tmp2520 = (frost$core$Int64) {192u};
frost$core$Int64** $tmp2521 = *(&local0);
frost$core$Int64 $tmp2522 = (frost$core$Int64) {0u};
int64_t $tmp2523 = $tmp2522.value;
frost$core$Int64* $tmp2524 = $tmp2521[$tmp2523];
int64_t $tmp2525 = $tmp2520.value;
$tmp2519[$tmp2525] = $tmp2524;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:266
frost$core$Int64** $tmp2526 = *(&local0);
frost$core$Int64 $tmp2527 = (frost$core$Int64) {193u};
frost$core$Int64** $tmp2528 = *(&local0);
frost$core$Int64 $tmp2529 = (frost$core$Int64) {0u};
int64_t $tmp2530 = $tmp2529.value;
frost$core$Int64* $tmp2531 = $tmp2528[$tmp2530];
int64_t $tmp2532 = $tmp2527.value;
$tmp2526[$tmp2532] = $tmp2531;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:267
frost$core$Int64** $tmp2533 = *(&local0);
frost$core$Int64 $tmp2534 = (frost$core$Int64) {194u};
frost$core$Int64** $tmp2535 = *(&local0);
frost$core$Int64 $tmp2536 = (frost$core$Int64) {0u};
int64_t $tmp2537 = $tmp2536.value;
frost$core$Int64* $tmp2538 = $tmp2535[$tmp2537];
int64_t $tmp2539 = $tmp2534.value;
$tmp2533[$tmp2539] = $tmp2538;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:268
frost$core$Int64** $tmp2540 = *(&local0);
frost$core$Int64 $tmp2541 = (frost$core$Int64) {195u};
frost$core$Int64** $tmp2542 = *(&local0);
frost$core$Int64 $tmp2543 = (frost$core$Int64) {0u};
int64_t $tmp2544 = $tmp2543.value;
frost$core$Int64* $tmp2545 = $tmp2542[$tmp2544];
int64_t $tmp2546 = $tmp2541.value;
$tmp2540[$tmp2546] = $tmp2545;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:269
frost$core$Int64** $tmp2547 = *(&local0);
frost$core$Int64 $tmp2548 = (frost$core$Int64) {196u};
frost$core$Int64** $tmp2549 = *(&local0);
frost$core$Int64 $tmp2550 = (frost$core$Int64) {0u};
int64_t $tmp2551 = $tmp2550.value;
frost$core$Int64* $tmp2552 = $tmp2549[$tmp2551];
int64_t $tmp2553 = $tmp2548.value;
$tmp2547[$tmp2553] = $tmp2552;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:270
frost$core$Int64** $tmp2554 = *(&local0);
frost$core$Int64 $tmp2555 = (frost$core$Int64) {197u};
frost$core$Int64** $tmp2556 = *(&local0);
frost$core$Int64 $tmp2557 = (frost$core$Int64) {0u};
int64_t $tmp2558 = $tmp2557.value;
frost$core$Int64* $tmp2559 = $tmp2556[$tmp2558];
int64_t $tmp2560 = $tmp2555.value;
$tmp2554[$tmp2560] = $tmp2559;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:271
frost$core$Int64** $tmp2561 = *(&local0);
frost$core$Int64 $tmp2562 = (frost$core$Int64) {198u};
frost$core$Int64** $tmp2563 = *(&local0);
frost$core$Int64 $tmp2564 = (frost$core$Int64) {0u};
int64_t $tmp2565 = $tmp2564.value;
frost$core$Int64* $tmp2566 = $tmp2563[$tmp2565];
int64_t $tmp2567 = $tmp2562.value;
$tmp2561[$tmp2567] = $tmp2566;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:272
frost$core$Int64** $tmp2568 = *(&local0);
frost$core$Int64 $tmp2569 = (frost$core$Int64) {199u};
frost$core$Int64** $tmp2570 = *(&local0);
frost$core$Int64 $tmp2571 = (frost$core$Int64) {0u};
int64_t $tmp2572 = $tmp2571.value;
frost$core$Int64* $tmp2573 = $tmp2570[$tmp2572];
int64_t $tmp2574 = $tmp2569.value;
$tmp2568[$tmp2574] = $tmp2573;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:273
frost$core$Int64** $tmp2575 = *(&local0);
frost$core$Int64 $tmp2576 = (frost$core$Int64) {200u};
frost$core$Int64** $tmp2577 = *(&local0);
frost$core$Int64 $tmp2578 = (frost$core$Int64) {0u};
int64_t $tmp2579 = $tmp2578.value;
frost$core$Int64* $tmp2580 = $tmp2577[$tmp2579];
int64_t $tmp2581 = $tmp2576.value;
$tmp2575[$tmp2581] = $tmp2580;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:274
frost$core$Int64** $tmp2582 = *(&local0);
frost$core$Int64 $tmp2583 = (frost$core$Int64) {201u};
frost$core$Int64** $tmp2584 = *(&local0);
frost$core$Int64 $tmp2585 = (frost$core$Int64) {0u};
int64_t $tmp2586 = $tmp2585.value;
frost$core$Int64* $tmp2587 = $tmp2584[$tmp2586];
int64_t $tmp2588 = $tmp2583.value;
$tmp2582[$tmp2588] = $tmp2587;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:275
frost$core$Int64** $tmp2589 = *(&local0);
frost$core$Int64 $tmp2590 = (frost$core$Int64) {202u};
frost$core$Int64** $tmp2591 = *(&local0);
frost$core$Int64 $tmp2592 = (frost$core$Int64) {0u};
int64_t $tmp2593 = $tmp2592.value;
frost$core$Int64* $tmp2594 = $tmp2591[$tmp2593];
int64_t $tmp2595 = $tmp2590.value;
$tmp2589[$tmp2595] = $tmp2594;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:276
frost$core$Int64** $tmp2596 = *(&local0);
frost$core$Int64 $tmp2597 = (frost$core$Int64) {203u};
frost$core$Int64** $tmp2598 = *(&local0);
frost$core$Int64 $tmp2599 = (frost$core$Int64) {0u};
int64_t $tmp2600 = $tmp2599.value;
frost$core$Int64* $tmp2601 = $tmp2598[$tmp2600];
int64_t $tmp2602 = $tmp2597.value;
$tmp2596[$tmp2602] = $tmp2601;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:277
frost$core$Int64** $tmp2603 = *(&local0);
frost$core$Int64 $tmp2604 = (frost$core$Int64) {204u};
frost$core$Int64** $tmp2605 = *(&local0);
frost$core$Int64 $tmp2606 = (frost$core$Int64) {0u};
int64_t $tmp2607 = $tmp2606.value;
frost$core$Int64* $tmp2608 = $tmp2605[$tmp2607];
int64_t $tmp2609 = $tmp2604.value;
$tmp2603[$tmp2609] = $tmp2608;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:278
frost$core$Int64** $tmp2610 = *(&local0);
frost$core$Int64 $tmp2611 = (frost$core$Int64) {205u};
frost$core$Int64** $tmp2612 = *(&local0);
frost$core$Int64 $tmp2613 = (frost$core$Int64) {0u};
int64_t $tmp2614 = $tmp2613.value;
frost$core$Int64* $tmp2615 = $tmp2612[$tmp2614];
int64_t $tmp2616 = $tmp2611.value;
$tmp2610[$tmp2616] = $tmp2615;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:279
frost$core$Int64** $tmp2617 = *(&local0);
frost$core$Int64 $tmp2618 = (frost$core$Int64) {206u};
frost$core$Int64** $tmp2619 = *(&local0);
frost$core$Int64 $tmp2620 = (frost$core$Int64) {0u};
int64_t $tmp2621 = $tmp2620.value;
frost$core$Int64* $tmp2622 = $tmp2619[$tmp2621];
int64_t $tmp2623 = $tmp2618.value;
$tmp2617[$tmp2623] = $tmp2622;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:280
frost$core$Int64** $tmp2624 = *(&local0);
frost$core$Int64 $tmp2625 = (frost$core$Int64) {207u};
frost$core$Int64** $tmp2626 = *(&local0);
frost$core$Int64 $tmp2627 = (frost$core$Int64) {0u};
int64_t $tmp2628 = $tmp2627.value;
frost$core$Int64* $tmp2629 = $tmp2626[$tmp2628];
int64_t $tmp2630 = $tmp2625.value;
$tmp2624[$tmp2630] = $tmp2629;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:281
frost$core$Int64** $tmp2631 = *(&local0);
frost$core$Int64 $tmp2632 = (frost$core$Int64) {208u};
frost$core$Int64** $tmp2633 = *(&local0);
frost$core$Int64 $tmp2634 = (frost$core$Int64) {0u};
int64_t $tmp2635 = $tmp2634.value;
frost$core$Int64* $tmp2636 = $tmp2633[$tmp2635];
int64_t $tmp2637 = $tmp2632.value;
$tmp2631[$tmp2637] = $tmp2636;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:282
frost$core$Int64** $tmp2638 = *(&local0);
frost$core$Int64 $tmp2639 = (frost$core$Int64) {209u};
frost$core$Int64** $tmp2640 = *(&local0);
frost$core$Int64 $tmp2641 = (frost$core$Int64) {0u};
int64_t $tmp2642 = $tmp2641.value;
frost$core$Int64* $tmp2643 = $tmp2640[$tmp2642];
int64_t $tmp2644 = $tmp2639.value;
$tmp2638[$tmp2644] = $tmp2643;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:283
frost$core$Int64** $tmp2645 = *(&local0);
frost$core$Int64 $tmp2646 = (frost$core$Int64) {210u};
frost$core$Int64** $tmp2647 = *(&local0);
frost$core$Int64 $tmp2648 = (frost$core$Int64) {0u};
int64_t $tmp2649 = $tmp2648.value;
frost$core$Int64* $tmp2650 = $tmp2647[$tmp2649];
int64_t $tmp2651 = $tmp2646.value;
$tmp2645[$tmp2651] = $tmp2650;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:284
frost$core$Int64** $tmp2652 = *(&local0);
frost$core$Int64 $tmp2653 = (frost$core$Int64) {211u};
frost$core$Int64** $tmp2654 = *(&local0);
frost$core$Int64 $tmp2655 = (frost$core$Int64) {0u};
int64_t $tmp2656 = $tmp2655.value;
frost$core$Int64* $tmp2657 = $tmp2654[$tmp2656];
int64_t $tmp2658 = $tmp2653.value;
$tmp2652[$tmp2658] = $tmp2657;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:285
frost$core$Int64** $tmp2659 = *(&local0);
frost$core$Int64 $tmp2660 = (frost$core$Int64) {212u};
frost$core$Int64** $tmp2661 = *(&local0);
frost$core$Int64 $tmp2662 = (frost$core$Int64) {0u};
int64_t $tmp2663 = $tmp2662.value;
frost$core$Int64* $tmp2664 = $tmp2661[$tmp2663];
int64_t $tmp2665 = $tmp2660.value;
$tmp2659[$tmp2665] = $tmp2664;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:286
frost$core$Int64** $tmp2666 = *(&local0);
frost$core$Int64 $tmp2667 = (frost$core$Int64) {213u};
frost$core$Int64** $tmp2668 = *(&local0);
frost$core$Int64 $tmp2669 = (frost$core$Int64) {0u};
int64_t $tmp2670 = $tmp2669.value;
frost$core$Int64* $tmp2671 = $tmp2668[$tmp2670];
int64_t $tmp2672 = $tmp2667.value;
$tmp2666[$tmp2672] = $tmp2671;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:287
frost$core$Int64** $tmp2673 = *(&local0);
frost$core$Int64 $tmp2674 = (frost$core$Int64) {214u};
frost$core$Int64** $tmp2675 = *(&local0);
frost$core$Int64 $tmp2676 = (frost$core$Int64) {0u};
int64_t $tmp2677 = $tmp2676.value;
frost$core$Int64* $tmp2678 = $tmp2675[$tmp2677];
int64_t $tmp2679 = $tmp2674.value;
$tmp2673[$tmp2679] = $tmp2678;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:288
frost$core$Int64** $tmp2680 = *(&local0);
frost$core$Int64 $tmp2681 = (frost$core$Int64) {215u};
frost$core$Int64** $tmp2682 = *(&local0);
frost$core$Int64 $tmp2683 = (frost$core$Int64) {0u};
int64_t $tmp2684 = $tmp2683.value;
frost$core$Int64* $tmp2685 = $tmp2682[$tmp2684];
int64_t $tmp2686 = $tmp2681.value;
$tmp2680[$tmp2686] = $tmp2685;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:289
frost$core$Int64** $tmp2687 = *(&local0);
frost$core$Int64 $tmp2688 = (frost$core$Int64) {216u};
frost$core$Int64** $tmp2689 = *(&local0);
frost$core$Int64 $tmp2690 = (frost$core$Int64) {0u};
int64_t $tmp2691 = $tmp2690.value;
frost$core$Int64* $tmp2692 = $tmp2689[$tmp2691];
int64_t $tmp2693 = $tmp2688.value;
$tmp2687[$tmp2693] = $tmp2692;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:290
frost$core$Int64** $tmp2694 = *(&local0);
frost$core$Int64 $tmp2695 = (frost$core$Int64) {217u};
frost$core$Int64** $tmp2696 = *(&local0);
frost$core$Int64 $tmp2697 = (frost$core$Int64) {0u};
int64_t $tmp2698 = $tmp2697.value;
frost$core$Int64* $tmp2699 = $tmp2696[$tmp2698];
int64_t $tmp2700 = $tmp2695.value;
$tmp2694[$tmp2700] = $tmp2699;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:291
frost$core$Int64** $tmp2701 = *(&local0);
frost$core$Int64 $tmp2702 = (frost$core$Int64) {218u};
frost$core$Int64** $tmp2703 = *(&local0);
frost$core$Int64 $tmp2704 = (frost$core$Int64) {0u};
int64_t $tmp2705 = $tmp2704.value;
frost$core$Int64* $tmp2706 = $tmp2703[$tmp2705];
int64_t $tmp2707 = $tmp2702.value;
$tmp2701[$tmp2707] = $tmp2706;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:292
frost$core$Int64** $tmp2708 = *(&local0);
frost$core$Int64 $tmp2709 = (frost$core$Int64) {219u};
frost$core$Int64** $tmp2710 = *(&local0);
frost$core$Int64 $tmp2711 = (frost$core$Int64) {0u};
int64_t $tmp2712 = $tmp2711.value;
frost$core$Int64* $tmp2713 = $tmp2710[$tmp2712];
int64_t $tmp2714 = $tmp2709.value;
$tmp2708[$tmp2714] = $tmp2713;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:293
frost$core$Int64** $tmp2715 = *(&local0);
frost$core$Int64 $tmp2716 = (frost$core$Int64) {220u};
frost$core$Int64** $tmp2717 = *(&local0);
frost$core$Int64 $tmp2718 = (frost$core$Int64) {0u};
int64_t $tmp2719 = $tmp2718.value;
frost$core$Int64* $tmp2720 = $tmp2717[$tmp2719];
int64_t $tmp2721 = $tmp2716.value;
$tmp2715[$tmp2721] = $tmp2720;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:294
frost$core$Int64** $tmp2722 = *(&local0);
frost$core$Int64 $tmp2723 = (frost$core$Int64) {221u};
frost$core$Int64** $tmp2724 = *(&local0);
frost$core$Int64 $tmp2725 = (frost$core$Int64) {0u};
int64_t $tmp2726 = $tmp2725.value;
frost$core$Int64* $tmp2727 = $tmp2724[$tmp2726];
int64_t $tmp2728 = $tmp2723.value;
$tmp2722[$tmp2728] = $tmp2727;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:295
frost$core$Int64** $tmp2729 = *(&local0);
frost$core$Int64 $tmp2730 = (frost$core$Int64) {222u};
frost$core$Int64** $tmp2731 = *(&local0);
frost$core$Int64 $tmp2732 = (frost$core$Int64) {0u};
int64_t $tmp2733 = $tmp2732.value;
frost$core$Int64* $tmp2734 = $tmp2731[$tmp2733];
int64_t $tmp2735 = $tmp2730.value;
$tmp2729[$tmp2735] = $tmp2734;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:296
frost$core$Int64** $tmp2736 = *(&local0);
frost$core$Int64 $tmp2737 = (frost$core$Int64) {223u};
frost$core$Int64** $tmp2738 = *(&local0);
frost$core$Int64 $tmp2739 = (frost$core$Int64) {0u};
int64_t $tmp2740 = $tmp2739.value;
frost$core$Int64* $tmp2741 = $tmp2738[$tmp2740];
int64_t $tmp2742 = $tmp2737.value;
$tmp2736[$tmp2742] = $tmp2741;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:297
frost$core$Int64** $tmp2743 = *(&local0);
frost$core$Int64 $tmp2744 = (frost$core$Int64) {224u};
frost$core$Int64** $tmp2745 = *(&local0);
frost$core$Int64 $tmp2746 = (frost$core$Int64) {0u};
int64_t $tmp2747 = $tmp2746.value;
frost$core$Int64* $tmp2748 = $tmp2745[$tmp2747];
int64_t $tmp2749 = $tmp2744.value;
$tmp2743[$tmp2749] = $tmp2748;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:298
frost$core$Int64** $tmp2750 = *(&local0);
frost$core$Int64 $tmp2751 = (frost$core$Int64) {225u};
frost$core$Int64** $tmp2752 = *(&local0);
frost$core$Int64 $tmp2753 = (frost$core$Int64) {0u};
int64_t $tmp2754 = $tmp2753.value;
frost$core$Int64* $tmp2755 = $tmp2752[$tmp2754];
int64_t $tmp2756 = $tmp2751.value;
$tmp2750[$tmp2756] = $tmp2755;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:299
frost$core$Int64** $tmp2757 = *(&local0);
frost$core$Int64 $tmp2758 = (frost$core$Int64) {226u};
frost$core$Int64** $tmp2759 = *(&local0);
frost$core$Int64 $tmp2760 = (frost$core$Int64) {0u};
int64_t $tmp2761 = $tmp2760.value;
frost$core$Int64* $tmp2762 = $tmp2759[$tmp2761];
int64_t $tmp2763 = $tmp2758.value;
$tmp2757[$tmp2763] = $tmp2762;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:300
frost$core$Int64** $tmp2764 = *(&local0);
frost$core$Int64 $tmp2765 = (frost$core$Int64) {227u};
frost$core$Int64** $tmp2766 = *(&local0);
frost$core$Int64 $tmp2767 = (frost$core$Int64) {0u};
int64_t $tmp2768 = $tmp2767.value;
frost$core$Int64* $tmp2769 = $tmp2766[$tmp2768];
int64_t $tmp2770 = $tmp2765.value;
$tmp2764[$tmp2770] = $tmp2769;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:301
frost$core$Int64** $tmp2771 = *(&local0);
frost$core$Int64 $tmp2772 = (frost$core$Int64) {228u};
frost$core$Int64** $tmp2773 = *(&local0);
frost$core$Int64 $tmp2774 = (frost$core$Int64) {0u};
int64_t $tmp2775 = $tmp2774.value;
frost$core$Int64* $tmp2776 = $tmp2773[$tmp2775];
int64_t $tmp2777 = $tmp2772.value;
$tmp2771[$tmp2777] = $tmp2776;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:302
frost$core$Int64** $tmp2778 = *(&local0);
frost$core$Int64 $tmp2779 = (frost$core$Int64) {229u};
frost$core$Int64** $tmp2780 = *(&local0);
frost$core$Int64 $tmp2781 = (frost$core$Int64) {0u};
int64_t $tmp2782 = $tmp2781.value;
frost$core$Int64* $tmp2783 = $tmp2780[$tmp2782];
int64_t $tmp2784 = $tmp2779.value;
$tmp2778[$tmp2784] = $tmp2783;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:303
frost$core$Int64** $tmp2785 = *(&local0);
frost$core$Int64 $tmp2786 = (frost$core$Int64) {230u};
frost$core$Int64** $tmp2787 = *(&local0);
frost$core$Int64 $tmp2788 = (frost$core$Int64) {0u};
int64_t $tmp2789 = $tmp2788.value;
frost$core$Int64* $tmp2790 = $tmp2787[$tmp2789];
int64_t $tmp2791 = $tmp2786.value;
$tmp2785[$tmp2791] = $tmp2790;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:304
frost$core$Int64** $tmp2792 = *(&local0);
frost$core$Int64 $tmp2793 = (frost$core$Int64) {231u};
frost$core$Int64** $tmp2794 = *(&local0);
frost$core$Int64 $tmp2795 = (frost$core$Int64) {0u};
int64_t $tmp2796 = $tmp2795.value;
frost$core$Int64* $tmp2797 = $tmp2794[$tmp2796];
int64_t $tmp2798 = $tmp2793.value;
$tmp2792[$tmp2798] = $tmp2797;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:305
frost$core$Int64** $tmp2799 = *(&local0);
frost$core$Int64 $tmp2800 = (frost$core$Int64) {232u};
frost$core$Int64** $tmp2801 = *(&local0);
frost$core$Int64 $tmp2802 = (frost$core$Int64) {0u};
int64_t $tmp2803 = $tmp2802.value;
frost$core$Int64* $tmp2804 = $tmp2801[$tmp2803];
int64_t $tmp2805 = $tmp2800.value;
$tmp2799[$tmp2805] = $tmp2804;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:306
frost$core$Int64** $tmp2806 = *(&local0);
frost$core$Int64 $tmp2807 = (frost$core$Int64) {233u};
frost$core$Int64** $tmp2808 = *(&local0);
frost$core$Int64 $tmp2809 = (frost$core$Int64) {0u};
int64_t $tmp2810 = $tmp2809.value;
frost$core$Int64* $tmp2811 = $tmp2808[$tmp2810];
int64_t $tmp2812 = $tmp2807.value;
$tmp2806[$tmp2812] = $tmp2811;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:307
frost$core$Int64** $tmp2813 = *(&local0);
frost$core$Int64 $tmp2814 = (frost$core$Int64) {234u};
frost$core$Int64** $tmp2815 = *(&local0);
frost$core$Int64 $tmp2816 = (frost$core$Int64) {0u};
int64_t $tmp2817 = $tmp2816.value;
frost$core$Int64* $tmp2818 = $tmp2815[$tmp2817];
int64_t $tmp2819 = $tmp2814.value;
$tmp2813[$tmp2819] = $tmp2818;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:308
frost$core$Int64** $tmp2820 = *(&local0);
frost$core$Int64 $tmp2821 = (frost$core$Int64) {235u};
frost$core$Int64** $tmp2822 = *(&local0);
frost$core$Int64 $tmp2823 = (frost$core$Int64) {0u};
int64_t $tmp2824 = $tmp2823.value;
frost$core$Int64* $tmp2825 = $tmp2822[$tmp2824];
int64_t $tmp2826 = $tmp2821.value;
$tmp2820[$tmp2826] = $tmp2825;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:309
frost$core$Int64** $tmp2827 = *(&local0);
frost$core$Int64 $tmp2828 = (frost$core$Int64) {236u};
frost$core$Int64** $tmp2829 = *(&local0);
frost$core$Int64 $tmp2830 = (frost$core$Int64) {0u};
int64_t $tmp2831 = $tmp2830.value;
frost$core$Int64* $tmp2832 = $tmp2829[$tmp2831];
int64_t $tmp2833 = $tmp2828.value;
$tmp2827[$tmp2833] = $tmp2832;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:310
frost$core$Int64** $tmp2834 = *(&local0);
frost$core$Int64 $tmp2835 = (frost$core$Int64) {237u};
frost$core$Int64** $tmp2836 = *(&local0);
frost$core$Int64 $tmp2837 = (frost$core$Int64) {0u};
int64_t $tmp2838 = $tmp2837.value;
frost$core$Int64* $tmp2839 = $tmp2836[$tmp2838];
int64_t $tmp2840 = $tmp2835.value;
$tmp2834[$tmp2840] = $tmp2839;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:311
frost$core$Int64** $tmp2841 = *(&local0);
frost$core$Int64 $tmp2842 = (frost$core$Int64) {238u};
frost$core$Int64** $tmp2843 = *(&local0);
frost$core$Int64 $tmp2844 = (frost$core$Int64) {0u};
int64_t $tmp2845 = $tmp2844.value;
frost$core$Int64* $tmp2846 = $tmp2843[$tmp2845];
int64_t $tmp2847 = $tmp2842.value;
$tmp2841[$tmp2847] = $tmp2846;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:312
frost$core$Int64** $tmp2848 = *(&local0);
frost$core$Int64 $tmp2849 = (frost$core$Int64) {239u};
frost$core$Int64** $tmp2850 = *(&local0);
frost$core$Int64 $tmp2851 = (frost$core$Int64) {0u};
int64_t $tmp2852 = $tmp2851.value;
frost$core$Int64* $tmp2853 = $tmp2850[$tmp2852];
int64_t $tmp2854 = $tmp2849.value;
$tmp2848[$tmp2854] = $tmp2853;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:313
frost$core$Int64** $tmp2855 = *(&local0);
frost$core$Int64 $tmp2856 = (frost$core$Int64) {240u};
frost$core$Int64** $tmp2857 = *(&local0);
frost$core$Int64 $tmp2858 = (frost$core$Int64) {0u};
int64_t $tmp2859 = $tmp2858.value;
frost$core$Int64* $tmp2860 = $tmp2857[$tmp2859];
int64_t $tmp2861 = $tmp2856.value;
$tmp2855[$tmp2861] = $tmp2860;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:314
frost$core$Int64** $tmp2862 = *(&local0);
frost$core$Int64 $tmp2863 = (frost$core$Int64) {241u};
frost$core$Int64** $tmp2864 = *(&local0);
frost$core$Int64 $tmp2865 = (frost$core$Int64) {0u};
int64_t $tmp2866 = $tmp2865.value;
frost$core$Int64* $tmp2867 = $tmp2864[$tmp2866];
int64_t $tmp2868 = $tmp2863.value;
$tmp2862[$tmp2868] = $tmp2867;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:315
frost$core$Int64** $tmp2869 = *(&local0);
frost$core$Int64 $tmp2870 = (frost$core$Int64) {242u};
frost$core$Int64** $tmp2871 = *(&local0);
frost$core$Int64 $tmp2872 = (frost$core$Int64) {0u};
int64_t $tmp2873 = $tmp2872.value;
frost$core$Int64* $tmp2874 = $tmp2871[$tmp2873];
int64_t $tmp2875 = $tmp2870.value;
$tmp2869[$tmp2875] = $tmp2874;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:316
frost$core$Int64** $tmp2876 = *(&local0);
frost$core$Int64 $tmp2877 = (frost$core$Int64) {243u};
frost$core$Int64** $tmp2878 = *(&local0);
frost$core$Int64 $tmp2879 = (frost$core$Int64) {0u};
int64_t $tmp2880 = $tmp2879.value;
frost$core$Int64* $tmp2881 = $tmp2878[$tmp2880];
int64_t $tmp2882 = $tmp2877.value;
$tmp2876[$tmp2882] = $tmp2881;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:317
frost$core$Int64** $tmp2883 = *(&local0);
frost$core$Int64 $tmp2884 = (frost$core$Int64) {244u};
frost$core$Int64** $tmp2885 = *(&local0);
frost$core$Int64 $tmp2886 = (frost$core$Int64) {0u};
int64_t $tmp2887 = $tmp2886.value;
frost$core$Int64* $tmp2888 = $tmp2885[$tmp2887];
int64_t $tmp2889 = $tmp2884.value;
$tmp2883[$tmp2889] = $tmp2888;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:318
frost$core$Int64** $tmp2890 = *(&local0);
frost$core$Int64 $tmp2891 = (frost$core$Int64) {245u};
frost$core$Int64** $tmp2892 = *(&local0);
frost$core$Int64 $tmp2893 = (frost$core$Int64) {0u};
int64_t $tmp2894 = $tmp2893.value;
frost$core$Int64* $tmp2895 = $tmp2892[$tmp2894];
int64_t $tmp2896 = $tmp2891.value;
$tmp2890[$tmp2896] = $tmp2895;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:319
frost$core$Int64** $tmp2897 = *(&local0);
frost$core$Int64 $tmp2898 = (frost$core$Int64) {246u};
frost$core$Int64** $tmp2899 = *(&local0);
frost$core$Int64 $tmp2900 = (frost$core$Int64) {0u};
int64_t $tmp2901 = $tmp2900.value;
frost$core$Int64* $tmp2902 = $tmp2899[$tmp2901];
int64_t $tmp2903 = $tmp2898.value;
$tmp2897[$tmp2903] = $tmp2902;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:320
frost$core$Int64** $tmp2904 = *(&local0);
frost$core$Int64 $tmp2905 = (frost$core$Int64) {247u};
frost$core$Int64** $tmp2906 = *(&local0);
frost$core$Int64 $tmp2907 = (frost$core$Int64) {0u};
int64_t $tmp2908 = $tmp2907.value;
frost$core$Int64* $tmp2909 = $tmp2906[$tmp2908];
int64_t $tmp2910 = $tmp2905.value;
$tmp2904[$tmp2910] = $tmp2909;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:321
frost$core$Int64** $tmp2911 = *(&local0);
frost$core$Int64 $tmp2912 = (frost$core$Int64) {248u};
frost$core$Int64** $tmp2913 = *(&local0);
frost$core$Int64 $tmp2914 = (frost$core$Int64) {0u};
int64_t $tmp2915 = $tmp2914.value;
frost$core$Int64* $tmp2916 = $tmp2913[$tmp2915];
int64_t $tmp2917 = $tmp2912.value;
$tmp2911[$tmp2917] = $tmp2916;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:322
frost$core$Int64** $tmp2918 = *(&local0);
frost$core$Int64 $tmp2919 = (frost$core$Int64) {249u};
frost$core$Int64** $tmp2920 = *(&local0);
frost$core$Int64 $tmp2921 = (frost$core$Int64) {0u};
int64_t $tmp2922 = $tmp2921.value;
frost$core$Int64* $tmp2923 = $tmp2920[$tmp2922];
int64_t $tmp2924 = $tmp2919.value;
$tmp2918[$tmp2924] = $tmp2923;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:323
frost$core$Int64** $tmp2925 = *(&local0);
frost$core$Int64 $tmp2926 = (frost$core$Int64) {250u};
frost$core$Int64** $tmp2927 = *(&local0);
frost$core$Int64 $tmp2928 = (frost$core$Int64) {0u};
int64_t $tmp2929 = $tmp2928.value;
frost$core$Int64* $tmp2930 = $tmp2927[$tmp2929];
int64_t $tmp2931 = $tmp2926.value;
$tmp2925[$tmp2931] = $tmp2930;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:324
frost$core$Int64** $tmp2932 = *(&local0);
frost$core$Int64 $tmp2933 = (frost$core$Int64) {251u};
frost$core$Int64** $tmp2934 = *(&local0);
frost$core$Int64 $tmp2935 = (frost$core$Int64) {0u};
int64_t $tmp2936 = $tmp2935.value;
frost$core$Int64* $tmp2937 = $tmp2934[$tmp2936];
int64_t $tmp2938 = $tmp2933.value;
$tmp2932[$tmp2938] = $tmp2937;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:325
frost$core$Int64** $tmp2939 = *(&local0);
frost$core$Int64 $tmp2940 = (frost$core$Int64) {252u};
frost$core$Int64** $tmp2941 = *(&local0);
frost$core$Int64 $tmp2942 = (frost$core$Int64) {0u};
int64_t $tmp2943 = $tmp2942.value;
frost$core$Int64* $tmp2944 = $tmp2941[$tmp2943];
int64_t $tmp2945 = $tmp2940.value;
$tmp2939[$tmp2945] = $tmp2944;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:326
frost$core$Int64** $tmp2946 = *(&local0);
frost$core$Int64 $tmp2947 = (frost$core$Int64) {253u};
frost$core$Int64** $tmp2948 = *(&local0);
frost$core$Int64 $tmp2949 = (frost$core$Int64) {0u};
int64_t $tmp2950 = $tmp2949.value;
frost$core$Int64* $tmp2951 = $tmp2948[$tmp2950];
int64_t $tmp2952 = $tmp2947.value;
$tmp2946[$tmp2952] = $tmp2951;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:327
frost$core$Int64** $tmp2953 = *(&local0);
frost$core$Int64 $tmp2954 = (frost$core$Int64) {254u};
frost$core$Int64** $tmp2955 = *(&local0);
frost$core$Int64 $tmp2956 = (frost$core$Int64) {0u};
int64_t $tmp2957 = $tmp2956.value;
frost$core$Int64* $tmp2958 = $tmp2955[$tmp2957];
int64_t $tmp2959 = $tmp2954.value;
$tmp2953[$tmp2959] = $tmp2958;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:328
frost$core$Int64** $tmp2960 = *(&local0);
frost$core$Int64 $tmp2961 = (frost$core$Int64) {255u};
frost$core$Int64** $tmp2962 = *(&local0);
frost$core$Int64 $tmp2963 = (frost$core$Int64) {0u};
int64_t $tmp2964 = $tmp2963.value;
frost$core$Int64* $tmp2965 = $tmp2962[$tmp2964];
int64_t $tmp2966 = $tmp2961.value;
$tmp2960[$tmp2966] = $tmp2965;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:329
frost$core$Int64** $tmp2967 = *(&local0);
return $tmp2967;

}
frost$core$Int64* org$frostlang$regex$RegexLexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT() {

frost$core$Int64* local0;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:334
frost$core$Int64 $tmp2968 = (frost$core$Int64) {20u};
int64_t $tmp2969 = $tmp2968.value;
frost$core$Int64* $tmp2970 = ((frost$core$Int64*) frostAlloc($tmp2969 * 8));
*(&local0) = $tmp2970;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:335
frost$core$Int64* $tmp2971 = *(&local0);
frost$core$Int64 $tmp2972 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp2973 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp2974 = $tmp2972.value;
$tmp2971[$tmp2974] = $tmp2973;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:336
frost$core$Int64* $tmp2975 = *(&local0);
frost$core$Int64 $tmp2976 = (frost$core$Int64) {1u};
frost$core$Int64 $tmp2977 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp2978 = $tmp2976.value;
$tmp2975[$tmp2978] = $tmp2977;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:337
frost$core$Int64* $tmp2979 = *(&local0);
frost$core$Int64 $tmp2980 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp2981 = (frost$core$Int64) {3u};
int64_t $tmp2982 = $tmp2980.value;
$tmp2979[$tmp2982] = $tmp2981;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:338
frost$core$Int64* $tmp2983 = *(&local0);
frost$core$Int64 $tmp2984 = (frost$core$Int64) {3u};
frost$core$Int64 $tmp2985 = (frost$core$Int64) {3u};
int64_t $tmp2986 = $tmp2984.value;
$tmp2983[$tmp2986] = $tmp2985;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:339
frost$core$Int64* $tmp2987 = *(&local0);
frost$core$Int64 $tmp2988 = (frost$core$Int64) {4u};
frost$core$Int64 $tmp2989 = (frost$core$Int64) {3u};
int64_t $tmp2990 = $tmp2988.value;
$tmp2987[$tmp2990] = $tmp2989;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:340
frost$core$Int64* $tmp2991 = *(&local0);
frost$core$Int64 $tmp2992 = (frost$core$Int64) {5u};
frost$core$Int64 $tmp2993 = (frost$core$Int64) {8u};
int64_t $tmp2994 = $tmp2992.value;
$tmp2991[$tmp2994] = $tmp2993;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:341
frost$core$Int64* $tmp2995 = *(&local0);
frost$core$Int64 $tmp2996 = (frost$core$Int64) {6u};
frost$core$Int64 $tmp2997 = (frost$core$Int64) {9u};
int64_t $tmp2998 = $tmp2996.value;
$tmp2995[$tmp2998] = $tmp2997;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:342
frost$core$Int64* $tmp2999 = *(&local0);
frost$core$Int64 $tmp3000 = (frost$core$Int64) {7u};
frost$core$Int64 $tmp3001 = (frost$core$Int64) {6u};
int64_t $tmp3002 = $tmp3000.value;
$tmp2999[$tmp3002] = $tmp3001;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:343
frost$core$Int64* $tmp3003 = *(&local0);
frost$core$Int64 $tmp3004 = (frost$core$Int64) {8u};
frost$core$Int64 $tmp3005 = (frost$core$Int64) {5u};
int64_t $tmp3006 = $tmp3004.value;
$tmp3003[$tmp3006] = $tmp3005;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:344
frost$core$Int64* $tmp3007 = *(&local0);
frost$core$Int64 $tmp3008 = (frost$core$Int64) {9u};
frost$core$Int64 $tmp3009 = (frost$core$Int64) {3u};
int64_t $tmp3010 = $tmp3008.value;
$tmp3007[$tmp3010] = $tmp3009;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:345
frost$core$Int64* $tmp3011 = *(&local0);
frost$core$Int64 $tmp3012 = (frost$core$Int64) {10u};
frost$core$Int64 $tmp3013 = (frost$core$Int64) {15u};
int64_t $tmp3014 = $tmp3012.value;
$tmp3011[$tmp3014] = $tmp3013;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:346
frost$core$Int64* $tmp3015 = *(&local0);
frost$core$Int64 $tmp3016 = (frost$core$Int64) {11u};
frost$core$Int64 $tmp3017 = (frost$core$Int64) {3u};
int64_t $tmp3018 = $tmp3016.value;
$tmp3015[$tmp3018] = $tmp3017;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:347
frost$core$Int64* $tmp3019 = *(&local0);
frost$core$Int64 $tmp3020 = (frost$core$Int64) {12u};
frost$core$Int64 $tmp3021 = (frost$core$Int64) {7u};
int64_t $tmp3022 = $tmp3020.value;
$tmp3019[$tmp3022] = $tmp3021;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:348
frost$core$Int64* $tmp3023 = *(&local0);
frost$core$Int64 $tmp3024 = (frost$core$Int64) {13u};
frost$core$Int64 $tmp3025 = (frost$core$Int64) {12u};
int64_t $tmp3026 = $tmp3024.value;
$tmp3023[$tmp3026] = $tmp3025;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:349
frost$core$Int64* $tmp3027 = *(&local0);
frost$core$Int64 $tmp3028 = (frost$core$Int64) {14u};
frost$core$Int64 $tmp3029 = (frost$core$Int64) {3u};
int64_t $tmp3030 = $tmp3028.value;
$tmp3027[$tmp3030] = $tmp3029;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:350
frost$core$Int64* $tmp3031 = *(&local0);
frost$core$Int64 $tmp3032 = (frost$core$Int64) {15u};
frost$core$Int64 $tmp3033 = (frost$core$Int64) {13u};
int64_t $tmp3034 = $tmp3032.value;
$tmp3031[$tmp3034] = $tmp3033;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:351
frost$core$Int64* $tmp3035 = *(&local0);
frost$core$Int64 $tmp3036 = (frost$core$Int64) {16u};
frost$core$Int64 $tmp3037 = (frost$core$Int64) {3u};
int64_t $tmp3038 = $tmp3036.value;
$tmp3035[$tmp3038] = $tmp3037;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:352
frost$core$Int64* $tmp3039 = *(&local0);
frost$core$Int64 $tmp3040 = (frost$core$Int64) {17u};
frost$core$Int64 $tmp3041 = (frost$core$Int64) {3u};
int64_t $tmp3042 = $tmp3040.value;
$tmp3039[$tmp3042] = $tmp3041;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:353
frost$core$Int64* $tmp3043 = *(&local0);
frost$core$Int64 $tmp3044 = (frost$core$Int64) {18u};
frost$core$Int64 $tmp3045 = (frost$core$Int64) {3u};
int64_t $tmp3046 = $tmp3044.value;
$tmp3043[$tmp3046] = $tmp3045;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:354
frost$core$Int64* $tmp3047 = *(&local0);
frost$core$Int64 $tmp3048 = (frost$core$Int64) {19u};
frost$core$Int64 $tmp3049 = (frost$core$Int64) {3u};
int64_t $tmp3050 = $tmp3048.value;
$tmp3047[$tmp3050] = $tmp3049;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:355
frost$core$Int64* $tmp3051 = *(&local0);
return $tmp3051;

}
void org$frostlang$regex$RegexLexer$cleanup(org$frostlang$regex$RegexLexer* param0) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:360
frost$core$Int64*** $tmp3052 = &param0->transitions;
frost$core$Int64** $tmp3053 = *$tmp3052;
frost$core$Int64 $tmp3054 = (frost$core$Int64) {0u};
int64_t $tmp3055 = $tmp3054.value;
frost$core$Int64* $tmp3056 = $tmp3053[$tmp3055];
frostFree($tmp3056);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:361
frost$core$Int64*** $tmp3057 = &param0->transitions;
frost$core$Int64** $tmp3058 = *$tmp3057;
frost$core$Int64 $tmp3059 = (frost$core$Int64) {10u};
int64_t $tmp3060 = $tmp3059.value;
frost$core$Int64* $tmp3061 = $tmp3058[$tmp3060];
frostFree($tmp3061);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:362
frost$core$Int64*** $tmp3062 = &param0->transitions;
frost$core$Int64** $tmp3063 = *$tmp3062;
frost$core$Int64 $tmp3064 = (frost$core$Int64) {36u};
int64_t $tmp3065 = $tmp3064.value;
frost$core$Int64* $tmp3066 = $tmp3063[$tmp3065];
frostFree($tmp3066);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:363
frost$core$Int64*** $tmp3067 = &param0->transitions;
frost$core$Int64** $tmp3068 = *$tmp3067;
frost$core$Int64 $tmp3069 = (frost$core$Int64) {39u};
int64_t $tmp3070 = $tmp3069.value;
frost$core$Int64* $tmp3071 = $tmp3068[$tmp3070];
frostFree($tmp3071);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:364
frost$core$Int64*** $tmp3072 = &param0->transitions;
frost$core$Int64** $tmp3073 = *$tmp3072;
frost$core$Int64 $tmp3074 = (frost$core$Int64) {40u};
int64_t $tmp3075 = $tmp3074.value;
frost$core$Int64* $tmp3076 = $tmp3073[$tmp3075];
frostFree($tmp3076);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:365
frost$core$Int64*** $tmp3077 = &param0->transitions;
frost$core$Int64** $tmp3078 = *$tmp3077;
frost$core$Int64 $tmp3079 = (frost$core$Int64) {41u};
int64_t $tmp3080 = $tmp3079.value;
frost$core$Int64* $tmp3081 = $tmp3078[$tmp3080];
frostFree($tmp3081);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:366
frost$core$Int64*** $tmp3082 = &param0->transitions;
frost$core$Int64** $tmp3083 = *$tmp3082;
frost$core$Int64 $tmp3084 = (frost$core$Int64) {42u};
int64_t $tmp3085 = $tmp3084.value;
frost$core$Int64* $tmp3086 = $tmp3083[$tmp3085];
frostFree($tmp3086);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:367
frost$core$Int64*** $tmp3087 = &param0->transitions;
frost$core$Int64** $tmp3088 = *$tmp3087;
frost$core$Int64 $tmp3089 = (frost$core$Int64) {43u};
int64_t $tmp3090 = $tmp3089.value;
frost$core$Int64* $tmp3091 = $tmp3088[$tmp3090];
frostFree($tmp3091);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:368
frost$core$Int64*** $tmp3092 = &param0->transitions;
frost$core$Int64** $tmp3093 = *$tmp3092;
frost$core$Int64 $tmp3094 = (frost$core$Int64) {44u};
int64_t $tmp3095 = $tmp3094.value;
frost$core$Int64* $tmp3096 = $tmp3093[$tmp3095];
frostFree($tmp3096);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:369
frost$core$Int64*** $tmp3097 = &param0->transitions;
frost$core$Int64** $tmp3098 = *$tmp3097;
frost$core$Int64 $tmp3099 = (frost$core$Int64) {47u};
int64_t $tmp3100 = $tmp3099.value;
frost$core$Int64* $tmp3101 = $tmp3098[$tmp3100];
frostFree($tmp3101);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:370
frost$core$Int64*** $tmp3102 = &param0->transitions;
frost$core$Int64** $tmp3103 = *$tmp3102;
frost$core$Int64 $tmp3104 = (frost$core$Int64) {48u};
int64_t $tmp3105 = $tmp3104.value;
frost$core$Int64* $tmp3106 = $tmp3103[$tmp3105];
frostFree($tmp3106);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:371
frost$core$Int64*** $tmp3107 = &param0->transitions;
frost$core$Int64** $tmp3108 = *$tmp3107;
frost$core$Int64 $tmp3109 = (frost$core$Int64) {63u};
int64_t $tmp3110 = $tmp3109.value;
frost$core$Int64* $tmp3111 = $tmp3108[$tmp3110];
frostFree($tmp3111);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:372
frost$core$Int64*** $tmp3112 = &param0->transitions;
frost$core$Int64** $tmp3113 = *$tmp3112;
frost$core$Int64 $tmp3114 = (frost$core$Int64) {91u};
int64_t $tmp3115 = $tmp3114.value;
frost$core$Int64* $tmp3116 = $tmp3113[$tmp3115];
frostFree($tmp3116);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:373
frost$core$Int64*** $tmp3117 = &param0->transitions;
frost$core$Int64** $tmp3118 = *$tmp3117;
frost$core$Int64 $tmp3119 = (frost$core$Int64) {92u};
int64_t $tmp3120 = $tmp3119.value;
frost$core$Int64* $tmp3121 = $tmp3118[$tmp3120];
frostFree($tmp3121);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:374
frost$core$Int64*** $tmp3122 = &param0->transitions;
frost$core$Int64** $tmp3123 = *$tmp3122;
frost$core$Int64 $tmp3124 = (frost$core$Int64) {93u};
int64_t $tmp3125 = $tmp3124.value;
frost$core$Int64* $tmp3126 = $tmp3123[$tmp3125];
frostFree($tmp3126);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:375
frost$core$Int64*** $tmp3127 = &param0->transitions;
frost$core$Int64** $tmp3128 = *$tmp3127;
frost$core$Int64 $tmp3129 = (frost$core$Int64) {94u};
int64_t $tmp3130 = $tmp3129.value;
frost$core$Int64* $tmp3131 = $tmp3128[$tmp3130];
frostFree($tmp3131);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:376
frost$core$Int64*** $tmp3132 = &param0->transitions;
frost$core$Int64** $tmp3133 = *$tmp3132;
frost$core$Int64 $tmp3134 = (frost$core$Int64) {96u};
int64_t $tmp3135 = $tmp3134.value;
frost$core$Int64* $tmp3136 = $tmp3133[$tmp3135];
frostFree($tmp3136);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:377
frost$core$Int64*** $tmp3137 = &param0->transitions;
frost$core$Int64** $tmp3138 = *$tmp3137;
frost$core$Int64 $tmp3139 = (frost$core$Int64) {123u};
int64_t $tmp3140 = $tmp3139.value;
frost$core$Int64* $tmp3141 = $tmp3138[$tmp3140];
frostFree($tmp3141);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:378
frost$core$Int64*** $tmp3142 = &param0->transitions;
frost$core$Int64** $tmp3143 = *$tmp3142;
frost$core$Int64 $tmp3144 = (frost$core$Int64) {125u};
int64_t $tmp3145 = $tmp3144.value;
frost$core$Int64* $tmp3146 = $tmp3143[$tmp3145];
frostFree($tmp3146);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:379
frost$core$Int64*** $tmp3147 = &param0->transitions;
frost$core$Int64** $tmp3148 = *$tmp3147;
frostFree($tmp3148);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:380
frost$core$Int64** $tmp3149 = &param0->accepts;
frost$core$Int64* $tmp3150 = *$tmp3149;
frostFree($tmp3150);
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:359
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$plex$runtime$DFA** $tmp3151 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp3152 = *$tmp3151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3152));
return;

}
org$frostlang$regex$RegexToken org$frostlang$regex$RegexLexer$next$R$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexLexer* param0) {

org$frostlang$plex$runtime$RawToken local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:384
org$frostlang$plex$runtime$DFA** $tmp3153 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp3154 = *$tmp3153;
org$frostlang$plex$runtime$RawToken $tmp3155 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp3154);
*(&local0) = $tmp3155;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:385
org$frostlang$plex$runtime$RawToken $tmp3156 = *(&local0);
frost$core$Int64 $tmp3157 = $tmp3156.kind;
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexLexer.frost:385:82
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp3158 = &(&local2)->$rawValue;
*$tmp3158 = $tmp3157;
org$frostlang$regex$RegexToken$Kind $tmp3159 = *(&local2);
*(&local1) = $tmp3159;
org$frostlang$regex$RegexToken$Kind $tmp3160 = *(&local1);
org$frostlang$plex$runtime$RawToken $tmp3161 = *(&local0);
frost$core$String$Index $tmp3162 = $tmp3161.start;
org$frostlang$plex$runtime$RawToken $tmp3163 = *(&local0);
frost$core$String$Index $tmp3164 = $tmp3163.end;
frost$core$Int64* $tmp3165 = &param0->file;
frost$core$Int64 $tmp3166 = *$tmp3165;
org$frostlang$plex$runtime$RawToken $tmp3167 = *(&local0);
frost$core$Int64 $tmp3168 = $tmp3167.line;
org$frostlang$plex$runtime$RawToken $tmp3169 = *(&local0);
frost$core$Int64 $tmp3170 = $tmp3169.column;
org$frostlang$frostc$Position $tmp3171 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64$frost$core$Int64($tmp3166, $tmp3168, $tmp3170);
org$frostlang$regex$RegexToken $tmp3172 = org$frostlang$regex$RegexToken$init$org$frostlang$regex$RegexToken$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position($tmp3160, $tmp3162, $tmp3164, $tmp3171);
return $tmp3172;

}
void org$frostlang$regex$RegexLexer$init(org$frostlang$regex$RegexLexer* param0) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:15
frost$core$Int64** $tmp3173 = org$frostlang$regex$RegexLexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT();
frost$core$Int64*** $tmp3174 = &param0->transitions;
*$tmp3174 = $tmp3173;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:17
frost$core$Int64* $tmp3175 = org$frostlang$regex$RegexLexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT();
frost$core$Int64** $tmp3176 = &param0->accepts;
*$tmp3176 = $tmp3175;
return;

}

