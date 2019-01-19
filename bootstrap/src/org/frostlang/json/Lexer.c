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
org$frostlang$json$Lexer$class_type org$frostlang$json$Lexer$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$json$Lexer$cleanup, org$frostlang$json$Lexer$start$frost$core$String, org$frostlang$json$Lexer$next$R$org$frostlang$json$Token} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x4c\x65\x78\x65\x72", 24, -6053151713001485763, NULL };

void org$frostlang$json$Lexer$start$frost$core$String(org$frostlang$json$Lexer* param0, frost$core$String* param1) {

// line 20
org$frostlang$plex$runtime$DFA* $tmp2 = (org$frostlang$plex$runtime$DFA*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$plex$runtime$DFA$class);
frost$core$Int64 $tmp3 = (frost$core$Int64) {31};
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
// unreffing REF($1:org.frostlang.plex.runtime.DFA)
return;

}
frost$core$Int64* org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT(frost$core$Int64 param0, frost$core$Int64 param1) {

frost$core$Int64* local0;
frost$core$Int64 local1;
// line 25
int64_t $tmp11 = param0.value;
frost$core$Int64* $tmp12 = ((frost$core$Int64*) frostAlloc($tmp11 * 8));
*(&local0) = $tmp12;
// line 26
frost$core$Int64 $tmp13 = (frost$core$Int64) {0};
frost$core$Bit $tmp14 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp15 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp13, param0, $tmp14);
frost$core$Int64 $tmp16 = $tmp15.min;
*(&local1) = $tmp16;
frost$core$Int64 $tmp17 = $tmp15.max;
frost$core$Bit $tmp18 = $tmp15.inclusive;
bool $tmp19 = $tmp18.value;
frost$core$Int64 $tmp20 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp21 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp20);
if ($tmp19) goto block4; else goto block5;
block4:;
int64_t $tmp22 = $tmp16.value;
int64_t $tmp23 = $tmp17.value;
bool $tmp24 = $tmp22 <= $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block1; else goto block2;
block5:;
int64_t $tmp27 = $tmp16.value;
int64_t $tmp28 = $tmp17.value;
bool $tmp29 = $tmp27 < $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block1; else goto block2;
block1:;
// line 27
frost$core$Int64* $tmp32 = *(&local0);
frost$core$Int64 $tmp33 = *(&local1);
int64_t $tmp34 = $tmp33.value;
$tmp32[$tmp34] = param1;
goto block3;
block3:;
frost$core$Int64 $tmp35 = *(&local1);
int64_t $tmp36 = $tmp17.value;
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36 - $tmp37;
frost$core$Int64 $tmp39 = (frost$core$Int64) {$tmp38};
frost$core$UInt64 $tmp40 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp39);
if ($tmp19) goto block7; else goto block8;
block7:;
uint64_t $tmp41 = $tmp40.value;
uint64_t $tmp42 = $tmp21.value;
bool $tmp43 = $tmp41 >= $tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block6; else goto block2;
block8:;
uint64_t $tmp46 = $tmp40.value;
uint64_t $tmp47 = $tmp21.value;
bool $tmp48 = $tmp46 > $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block6; else goto block2;
block6:;
int64_t $tmp51 = $tmp35.value;
int64_t $tmp52 = $tmp20.value;
int64_t $tmp53 = $tmp51 + $tmp52;
frost$core$Int64 $tmp54 = (frost$core$Int64) {$tmp53};
*(&local1) = $tmp54;
goto block1;
block2:;
// line 29
frost$core$Int64* $tmp55 = *(&local0);
return $tmp55;

}
frost$core$Int64** org$frostlang$json$Lexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT() {

frost$core$Int64** local0;
// line 34
frost$core$Int64 $tmp56 = (frost$core$Int64) {256};
int64_t $tmp57 = $tmp56.value;
frost$core$Int64** $tmp58 = ((frost$core$Int64**) frostAlloc($tmp57 * 8));
*(&local0) = $tmp58;
// line 35
frost$core$Int64** $tmp59 = *(&local0);
frost$core$Int64 $tmp60 = (frost$core$Int64) {0};
frost$core$Int64 $tmp61 = (frost$core$Int64) {31};
frost$core$Int64 $tmp62 = (frost$core$Int64) {0};
frost$core$Int64* $tmp63 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp61, $tmp62);
int64_t $tmp64 = $tmp60.value;
$tmp59[$tmp64] = $tmp63;
// line 36
frost$core$Int64** $tmp65 = *(&local0);
frost$core$Int64 $tmp66 = (frost$core$Int64) {0};
int64_t $tmp67 = $tmp66.value;
frost$core$Int64* $tmp68 = $tmp65[$tmp67];
frost$core$Int64 $tmp69 = (frost$core$Int64) {3};
frost$core$Int64 $tmp70 = (frost$core$Int64) {3};
int64_t $tmp71 = $tmp69.value;
$tmp68[$tmp71] = $tmp70;
// line 37
frost$core$Int64** $tmp72 = *(&local0);
frost$core$Int64 $tmp73 = (frost$core$Int64) {1};
frost$core$Int64** $tmp74 = *(&local0);
frost$core$Int64 $tmp75 = (frost$core$Int64) {0};
int64_t $tmp76 = $tmp75.value;
frost$core$Int64* $tmp77 = $tmp74[$tmp76];
int64_t $tmp78 = $tmp73.value;
$tmp72[$tmp78] = $tmp77;
// line 38
frost$core$Int64** $tmp79 = *(&local0);
frost$core$Int64 $tmp80 = (frost$core$Int64) {2};
frost$core$Int64** $tmp81 = *(&local0);
frost$core$Int64 $tmp82 = (frost$core$Int64) {0};
int64_t $tmp83 = $tmp82.value;
frost$core$Int64* $tmp84 = $tmp81[$tmp83];
int64_t $tmp85 = $tmp80.value;
$tmp79[$tmp85] = $tmp84;
// line 39
frost$core$Int64** $tmp86 = *(&local0);
frost$core$Int64 $tmp87 = (frost$core$Int64) {3};
frost$core$Int64** $tmp88 = *(&local0);
frost$core$Int64 $tmp89 = (frost$core$Int64) {0};
int64_t $tmp90 = $tmp89.value;
frost$core$Int64* $tmp91 = $tmp88[$tmp90];
int64_t $tmp92 = $tmp87.value;
$tmp86[$tmp92] = $tmp91;
// line 40
frost$core$Int64** $tmp93 = *(&local0);
frost$core$Int64 $tmp94 = (frost$core$Int64) {4};
frost$core$Int64** $tmp95 = *(&local0);
frost$core$Int64 $tmp96 = (frost$core$Int64) {0};
int64_t $tmp97 = $tmp96.value;
frost$core$Int64* $tmp98 = $tmp95[$tmp97];
int64_t $tmp99 = $tmp94.value;
$tmp93[$tmp99] = $tmp98;
// line 41
frost$core$Int64** $tmp100 = *(&local0);
frost$core$Int64 $tmp101 = (frost$core$Int64) {5};
frost$core$Int64** $tmp102 = *(&local0);
frost$core$Int64 $tmp103 = (frost$core$Int64) {0};
int64_t $tmp104 = $tmp103.value;
frost$core$Int64* $tmp105 = $tmp102[$tmp104];
int64_t $tmp106 = $tmp101.value;
$tmp100[$tmp106] = $tmp105;
// line 42
frost$core$Int64** $tmp107 = *(&local0);
frost$core$Int64 $tmp108 = (frost$core$Int64) {6};
frost$core$Int64** $tmp109 = *(&local0);
frost$core$Int64 $tmp110 = (frost$core$Int64) {0};
int64_t $tmp111 = $tmp110.value;
frost$core$Int64* $tmp112 = $tmp109[$tmp111];
int64_t $tmp113 = $tmp108.value;
$tmp107[$tmp113] = $tmp112;
// line 43
frost$core$Int64** $tmp114 = *(&local0);
frost$core$Int64 $tmp115 = (frost$core$Int64) {7};
frost$core$Int64** $tmp116 = *(&local0);
frost$core$Int64 $tmp117 = (frost$core$Int64) {0};
int64_t $tmp118 = $tmp117.value;
frost$core$Int64* $tmp119 = $tmp116[$tmp118];
int64_t $tmp120 = $tmp115.value;
$tmp114[$tmp120] = $tmp119;
// line 44
frost$core$Int64** $tmp121 = *(&local0);
frost$core$Int64 $tmp122 = (frost$core$Int64) {8};
frost$core$Int64** $tmp123 = *(&local0);
frost$core$Int64 $tmp124 = (frost$core$Int64) {0};
int64_t $tmp125 = $tmp124.value;
frost$core$Int64* $tmp126 = $tmp123[$tmp125];
int64_t $tmp127 = $tmp122.value;
$tmp121[$tmp127] = $tmp126;
// line 45
frost$core$Int64** $tmp128 = *(&local0);
frost$core$Int64 $tmp129 = (frost$core$Int64) {9};
frost$core$Int64 $tmp130 = (frost$core$Int64) {31};
frost$core$Int64 $tmp131 = (frost$core$Int64) {0};
frost$core$Int64* $tmp132 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp130, $tmp131);
int64_t $tmp133 = $tmp129.value;
$tmp128[$tmp133] = $tmp132;
// line 46
frost$core$Int64** $tmp134 = *(&local0);
frost$core$Int64 $tmp135 = (frost$core$Int64) {9};
int64_t $tmp136 = $tmp135.value;
frost$core$Int64* $tmp137 = $tmp134[$tmp136];
frost$core$Int64 $tmp138 = (frost$core$Int64) {1};
frost$core$Int64 $tmp139 = (frost$core$Int64) {2};
int64_t $tmp140 = $tmp138.value;
$tmp137[$tmp140] = $tmp139;
// line 47
frost$core$Int64** $tmp141 = *(&local0);
frost$core$Int64 $tmp142 = (frost$core$Int64) {9};
int64_t $tmp143 = $tmp142.value;
frost$core$Int64* $tmp144 = $tmp141[$tmp143];
frost$core$Int64 $tmp145 = (frost$core$Int64) {2};
frost$core$Int64 $tmp146 = (frost$core$Int64) {2};
int64_t $tmp147 = $tmp145.value;
$tmp144[$tmp147] = $tmp146;
// line 48
frost$core$Int64** $tmp148 = *(&local0);
frost$core$Int64 $tmp149 = (frost$core$Int64) {9};
int64_t $tmp150 = $tmp149.value;
frost$core$Int64* $tmp151 = $tmp148[$tmp150];
frost$core$Int64 $tmp152 = (frost$core$Int64) {3};
frost$core$Int64 $tmp153 = (frost$core$Int64) {3};
int64_t $tmp154 = $tmp152.value;
$tmp151[$tmp154] = $tmp153;
// line 49
frost$core$Int64** $tmp155 = *(&local0);
frost$core$Int64 $tmp156 = (frost$core$Int64) {10};
frost$core$Int64** $tmp157 = *(&local0);
frost$core$Int64 $tmp158 = (frost$core$Int64) {9};
int64_t $tmp159 = $tmp158.value;
frost$core$Int64* $tmp160 = $tmp157[$tmp159];
int64_t $tmp161 = $tmp156.value;
$tmp155[$tmp161] = $tmp160;
// line 50
frost$core$Int64** $tmp162 = *(&local0);
frost$core$Int64 $tmp163 = (frost$core$Int64) {11};
frost$core$Int64** $tmp164 = *(&local0);
frost$core$Int64 $tmp165 = (frost$core$Int64) {0};
int64_t $tmp166 = $tmp165.value;
frost$core$Int64* $tmp167 = $tmp164[$tmp166];
int64_t $tmp168 = $tmp163.value;
$tmp162[$tmp168] = $tmp167;
// line 51
frost$core$Int64** $tmp169 = *(&local0);
frost$core$Int64 $tmp170 = (frost$core$Int64) {12};
frost$core$Int64** $tmp171 = *(&local0);
frost$core$Int64 $tmp172 = (frost$core$Int64) {0};
int64_t $tmp173 = $tmp172.value;
frost$core$Int64* $tmp174 = $tmp171[$tmp173];
int64_t $tmp175 = $tmp170.value;
$tmp169[$tmp175] = $tmp174;
// line 52
frost$core$Int64** $tmp176 = *(&local0);
frost$core$Int64 $tmp177 = (frost$core$Int64) {13};
frost$core$Int64** $tmp178 = *(&local0);
frost$core$Int64 $tmp179 = (frost$core$Int64) {9};
int64_t $tmp180 = $tmp179.value;
frost$core$Int64* $tmp181 = $tmp178[$tmp180];
int64_t $tmp182 = $tmp177.value;
$tmp176[$tmp182] = $tmp181;
// line 53
frost$core$Int64** $tmp183 = *(&local0);
frost$core$Int64 $tmp184 = (frost$core$Int64) {14};
frost$core$Int64** $tmp185 = *(&local0);
frost$core$Int64 $tmp186 = (frost$core$Int64) {0};
int64_t $tmp187 = $tmp186.value;
frost$core$Int64* $tmp188 = $tmp185[$tmp187];
int64_t $tmp189 = $tmp184.value;
$tmp183[$tmp189] = $tmp188;
// line 54
frost$core$Int64** $tmp190 = *(&local0);
frost$core$Int64 $tmp191 = (frost$core$Int64) {15};
frost$core$Int64** $tmp192 = *(&local0);
frost$core$Int64 $tmp193 = (frost$core$Int64) {0};
int64_t $tmp194 = $tmp193.value;
frost$core$Int64* $tmp195 = $tmp192[$tmp194];
int64_t $tmp196 = $tmp191.value;
$tmp190[$tmp196] = $tmp195;
// line 55
frost$core$Int64** $tmp197 = *(&local0);
frost$core$Int64 $tmp198 = (frost$core$Int64) {16};
frost$core$Int64** $tmp199 = *(&local0);
frost$core$Int64 $tmp200 = (frost$core$Int64) {0};
int64_t $tmp201 = $tmp200.value;
frost$core$Int64* $tmp202 = $tmp199[$tmp201];
int64_t $tmp203 = $tmp198.value;
$tmp197[$tmp203] = $tmp202;
// line 56
frost$core$Int64** $tmp204 = *(&local0);
frost$core$Int64 $tmp205 = (frost$core$Int64) {17};
frost$core$Int64** $tmp206 = *(&local0);
frost$core$Int64 $tmp207 = (frost$core$Int64) {0};
int64_t $tmp208 = $tmp207.value;
frost$core$Int64* $tmp209 = $tmp206[$tmp208];
int64_t $tmp210 = $tmp205.value;
$tmp204[$tmp210] = $tmp209;
// line 57
frost$core$Int64** $tmp211 = *(&local0);
frost$core$Int64 $tmp212 = (frost$core$Int64) {18};
frost$core$Int64** $tmp213 = *(&local0);
frost$core$Int64 $tmp214 = (frost$core$Int64) {0};
int64_t $tmp215 = $tmp214.value;
frost$core$Int64* $tmp216 = $tmp213[$tmp215];
int64_t $tmp217 = $tmp212.value;
$tmp211[$tmp217] = $tmp216;
// line 58
frost$core$Int64** $tmp218 = *(&local0);
frost$core$Int64 $tmp219 = (frost$core$Int64) {19};
frost$core$Int64** $tmp220 = *(&local0);
frost$core$Int64 $tmp221 = (frost$core$Int64) {0};
int64_t $tmp222 = $tmp221.value;
frost$core$Int64* $tmp223 = $tmp220[$tmp222];
int64_t $tmp224 = $tmp219.value;
$tmp218[$tmp224] = $tmp223;
// line 59
frost$core$Int64** $tmp225 = *(&local0);
frost$core$Int64 $tmp226 = (frost$core$Int64) {20};
frost$core$Int64** $tmp227 = *(&local0);
frost$core$Int64 $tmp228 = (frost$core$Int64) {0};
int64_t $tmp229 = $tmp228.value;
frost$core$Int64* $tmp230 = $tmp227[$tmp229];
int64_t $tmp231 = $tmp226.value;
$tmp225[$tmp231] = $tmp230;
// line 60
frost$core$Int64** $tmp232 = *(&local0);
frost$core$Int64 $tmp233 = (frost$core$Int64) {21};
frost$core$Int64** $tmp234 = *(&local0);
frost$core$Int64 $tmp235 = (frost$core$Int64) {0};
int64_t $tmp236 = $tmp235.value;
frost$core$Int64* $tmp237 = $tmp234[$tmp236];
int64_t $tmp238 = $tmp233.value;
$tmp232[$tmp238] = $tmp237;
// line 61
frost$core$Int64** $tmp239 = *(&local0);
frost$core$Int64 $tmp240 = (frost$core$Int64) {22};
frost$core$Int64** $tmp241 = *(&local0);
frost$core$Int64 $tmp242 = (frost$core$Int64) {0};
int64_t $tmp243 = $tmp242.value;
frost$core$Int64* $tmp244 = $tmp241[$tmp243];
int64_t $tmp245 = $tmp240.value;
$tmp239[$tmp245] = $tmp244;
// line 62
frost$core$Int64** $tmp246 = *(&local0);
frost$core$Int64 $tmp247 = (frost$core$Int64) {23};
frost$core$Int64** $tmp248 = *(&local0);
frost$core$Int64 $tmp249 = (frost$core$Int64) {0};
int64_t $tmp250 = $tmp249.value;
frost$core$Int64* $tmp251 = $tmp248[$tmp250];
int64_t $tmp252 = $tmp247.value;
$tmp246[$tmp252] = $tmp251;
// line 63
frost$core$Int64** $tmp253 = *(&local0);
frost$core$Int64 $tmp254 = (frost$core$Int64) {24};
frost$core$Int64** $tmp255 = *(&local0);
frost$core$Int64 $tmp256 = (frost$core$Int64) {0};
int64_t $tmp257 = $tmp256.value;
frost$core$Int64* $tmp258 = $tmp255[$tmp257];
int64_t $tmp259 = $tmp254.value;
$tmp253[$tmp259] = $tmp258;
// line 64
frost$core$Int64** $tmp260 = *(&local0);
frost$core$Int64 $tmp261 = (frost$core$Int64) {25};
frost$core$Int64** $tmp262 = *(&local0);
frost$core$Int64 $tmp263 = (frost$core$Int64) {0};
int64_t $tmp264 = $tmp263.value;
frost$core$Int64* $tmp265 = $tmp262[$tmp264];
int64_t $tmp266 = $tmp261.value;
$tmp260[$tmp266] = $tmp265;
// line 65
frost$core$Int64** $tmp267 = *(&local0);
frost$core$Int64 $tmp268 = (frost$core$Int64) {26};
frost$core$Int64** $tmp269 = *(&local0);
frost$core$Int64 $tmp270 = (frost$core$Int64) {0};
int64_t $tmp271 = $tmp270.value;
frost$core$Int64* $tmp272 = $tmp269[$tmp271];
int64_t $tmp273 = $tmp268.value;
$tmp267[$tmp273] = $tmp272;
// line 66
frost$core$Int64** $tmp274 = *(&local0);
frost$core$Int64 $tmp275 = (frost$core$Int64) {27};
frost$core$Int64** $tmp276 = *(&local0);
frost$core$Int64 $tmp277 = (frost$core$Int64) {0};
int64_t $tmp278 = $tmp277.value;
frost$core$Int64* $tmp279 = $tmp276[$tmp278];
int64_t $tmp280 = $tmp275.value;
$tmp274[$tmp280] = $tmp279;
// line 67
frost$core$Int64** $tmp281 = *(&local0);
frost$core$Int64 $tmp282 = (frost$core$Int64) {28};
frost$core$Int64** $tmp283 = *(&local0);
frost$core$Int64 $tmp284 = (frost$core$Int64) {0};
int64_t $tmp285 = $tmp284.value;
frost$core$Int64* $tmp286 = $tmp283[$tmp285];
int64_t $tmp287 = $tmp282.value;
$tmp281[$tmp287] = $tmp286;
// line 68
frost$core$Int64** $tmp288 = *(&local0);
frost$core$Int64 $tmp289 = (frost$core$Int64) {29};
frost$core$Int64** $tmp290 = *(&local0);
frost$core$Int64 $tmp291 = (frost$core$Int64) {0};
int64_t $tmp292 = $tmp291.value;
frost$core$Int64* $tmp293 = $tmp290[$tmp292];
int64_t $tmp294 = $tmp289.value;
$tmp288[$tmp294] = $tmp293;
// line 69
frost$core$Int64** $tmp295 = *(&local0);
frost$core$Int64 $tmp296 = (frost$core$Int64) {30};
frost$core$Int64** $tmp297 = *(&local0);
frost$core$Int64 $tmp298 = (frost$core$Int64) {0};
int64_t $tmp299 = $tmp298.value;
frost$core$Int64* $tmp300 = $tmp297[$tmp299];
int64_t $tmp301 = $tmp296.value;
$tmp295[$tmp301] = $tmp300;
// line 70
frost$core$Int64** $tmp302 = *(&local0);
frost$core$Int64 $tmp303 = (frost$core$Int64) {31};
frost$core$Int64** $tmp304 = *(&local0);
frost$core$Int64 $tmp305 = (frost$core$Int64) {0};
int64_t $tmp306 = $tmp305.value;
frost$core$Int64* $tmp307 = $tmp304[$tmp306];
int64_t $tmp308 = $tmp303.value;
$tmp302[$tmp308] = $tmp307;
// line 71
frost$core$Int64** $tmp309 = *(&local0);
frost$core$Int64 $tmp310 = (frost$core$Int64) {32};
frost$core$Int64** $tmp311 = *(&local0);
frost$core$Int64 $tmp312 = (frost$core$Int64) {9};
int64_t $tmp313 = $tmp312.value;
frost$core$Int64* $tmp314 = $tmp311[$tmp313];
int64_t $tmp315 = $tmp310.value;
$tmp309[$tmp315] = $tmp314;
// line 72
frost$core$Int64** $tmp316 = *(&local0);
frost$core$Int64 $tmp317 = (frost$core$Int64) {33};
frost$core$Int64** $tmp318 = *(&local0);
frost$core$Int64 $tmp319 = (frost$core$Int64) {0};
int64_t $tmp320 = $tmp319.value;
frost$core$Int64* $tmp321 = $tmp318[$tmp320];
int64_t $tmp322 = $tmp317.value;
$tmp316[$tmp322] = $tmp321;
// line 73
frost$core$Int64** $tmp323 = *(&local0);
frost$core$Int64 $tmp324 = (frost$core$Int64) {34};
frost$core$Int64 $tmp325 = (frost$core$Int64) {31};
frost$core$Int64 $tmp326 = (frost$core$Int64) {0};
frost$core$Int64* $tmp327 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp325, $tmp326);
int64_t $tmp328 = $tmp324.value;
$tmp323[$tmp328] = $tmp327;
// line 74
frost$core$Int64** $tmp329 = *(&local0);
frost$core$Int64 $tmp330 = (frost$core$Int64) {34};
int64_t $tmp331 = $tmp330.value;
frost$core$Int64* $tmp332 = $tmp329[$tmp331];
frost$core$Int64 $tmp333 = (frost$core$Int64) {1};
frost$core$Int64 $tmp334 = (frost$core$Int64) {3};
int64_t $tmp335 = $tmp333.value;
$tmp332[$tmp335] = $tmp334;
// line 75
frost$core$Int64** $tmp336 = *(&local0);
frost$core$Int64 $tmp337 = (frost$core$Int64) {34};
int64_t $tmp338 = $tmp337.value;
frost$core$Int64* $tmp339 = $tmp336[$tmp338];
frost$core$Int64 $tmp340 = (frost$core$Int64) {3};
frost$core$Int64 $tmp341 = (frost$core$Int64) {4};
int64_t $tmp342 = $tmp340.value;
$tmp339[$tmp342] = $tmp341;
// line 76
frost$core$Int64** $tmp343 = *(&local0);
frost$core$Int64 $tmp344 = (frost$core$Int64) {34};
int64_t $tmp345 = $tmp344.value;
frost$core$Int64* $tmp346 = $tmp343[$tmp345];
frost$core$Int64 $tmp347 = (frost$core$Int64) {5};
frost$core$Int64 $tmp348 = (frost$core$Int64) {3};
int64_t $tmp349 = $tmp347.value;
$tmp346[$tmp349] = $tmp348;
// line 77
frost$core$Int64** $tmp350 = *(&local0);
frost$core$Int64 $tmp351 = (frost$core$Int64) {35};
frost$core$Int64** $tmp352 = *(&local0);
frost$core$Int64 $tmp353 = (frost$core$Int64) {0};
int64_t $tmp354 = $tmp353.value;
frost$core$Int64* $tmp355 = $tmp352[$tmp354];
int64_t $tmp356 = $tmp351.value;
$tmp350[$tmp356] = $tmp355;
// line 78
frost$core$Int64** $tmp357 = *(&local0);
frost$core$Int64 $tmp358 = (frost$core$Int64) {36};
frost$core$Int64** $tmp359 = *(&local0);
frost$core$Int64 $tmp360 = (frost$core$Int64) {0};
int64_t $tmp361 = $tmp360.value;
frost$core$Int64* $tmp362 = $tmp359[$tmp361];
int64_t $tmp363 = $tmp358.value;
$tmp357[$tmp363] = $tmp362;
// line 79
frost$core$Int64** $tmp364 = *(&local0);
frost$core$Int64 $tmp365 = (frost$core$Int64) {37};
frost$core$Int64** $tmp366 = *(&local0);
frost$core$Int64 $tmp367 = (frost$core$Int64) {0};
int64_t $tmp368 = $tmp367.value;
frost$core$Int64* $tmp369 = $tmp366[$tmp368];
int64_t $tmp370 = $tmp365.value;
$tmp364[$tmp370] = $tmp369;
// line 80
frost$core$Int64** $tmp371 = *(&local0);
frost$core$Int64 $tmp372 = (frost$core$Int64) {38};
frost$core$Int64** $tmp373 = *(&local0);
frost$core$Int64 $tmp374 = (frost$core$Int64) {0};
int64_t $tmp375 = $tmp374.value;
frost$core$Int64* $tmp376 = $tmp373[$tmp375];
int64_t $tmp377 = $tmp372.value;
$tmp371[$tmp377] = $tmp376;
// line 81
frost$core$Int64** $tmp378 = *(&local0);
frost$core$Int64 $tmp379 = (frost$core$Int64) {39};
frost$core$Int64** $tmp380 = *(&local0);
frost$core$Int64 $tmp381 = (frost$core$Int64) {0};
int64_t $tmp382 = $tmp381.value;
frost$core$Int64* $tmp383 = $tmp380[$tmp382];
int64_t $tmp384 = $tmp379.value;
$tmp378[$tmp384] = $tmp383;
// line 82
frost$core$Int64** $tmp385 = *(&local0);
frost$core$Int64 $tmp386 = (frost$core$Int64) {40};
frost$core$Int64** $tmp387 = *(&local0);
frost$core$Int64 $tmp388 = (frost$core$Int64) {0};
int64_t $tmp389 = $tmp388.value;
frost$core$Int64* $tmp390 = $tmp387[$tmp389];
int64_t $tmp391 = $tmp386.value;
$tmp385[$tmp391] = $tmp390;
// line 83
frost$core$Int64** $tmp392 = *(&local0);
frost$core$Int64 $tmp393 = (frost$core$Int64) {41};
frost$core$Int64** $tmp394 = *(&local0);
frost$core$Int64 $tmp395 = (frost$core$Int64) {0};
int64_t $tmp396 = $tmp395.value;
frost$core$Int64* $tmp397 = $tmp394[$tmp396];
int64_t $tmp398 = $tmp393.value;
$tmp392[$tmp398] = $tmp397;
// line 84
frost$core$Int64** $tmp399 = *(&local0);
frost$core$Int64 $tmp400 = (frost$core$Int64) {42};
frost$core$Int64** $tmp401 = *(&local0);
frost$core$Int64 $tmp402 = (frost$core$Int64) {0};
int64_t $tmp403 = $tmp402.value;
frost$core$Int64* $tmp404 = $tmp401[$tmp403];
int64_t $tmp405 = $tmp400.value;
$tmp399[$tmp405] = $tmp404;
// line 85
frost$core$Int64** $tmp406 = *(&local0);
frost$core$Int64 $tmp407 = (frost$core$Int64) {43};
frost$core$Int64 $tmp408 = (frost$core$Int64) {31};
frost$core$Int64 $tmp409 = (frost$core$Int64) {0};
frost$core$Int64* $tmp410 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp408, $tmp409);
int64_t $tmp411 = $tmp407.value;
$tmp406[$tmp411] = $tmp410;
// line 86
frost$core$Int64** $tmp412 = *(&local0);
frost$core$Int64 $tmp413 = (frost$core$Int64) {43};
int64_t $tmp414 = $tmp413.value;
frost$core$Int64* $tmp415 = $tmp412[$tmp414];
frost$core$Int64 $tmp416 = (frost$core$Int64) {3};
frost$core$Int64 $tmp417 = (frost$core$Int64) {3};
int64_t $tmp418 = $tmp416.value;
$tmp415[$tmp418] = $tmp417;
// line 87
frost$core$Int64** $tmp419 = *(&local0);
frost$core$Int64 $tmp420 = (frost$core$Int64) {43};
int64_t $tmp421 = $tmp420.value;
frost$core$Int64* $tmp422 = $tmp419[$tmp421];
frost$core$Int64 $tmp423 = (frost$core$Int64) {10};
frost$core$Int64 $tmp424 = (frost$core$Int64) {11};
int64_t $tmp425 = $tmp423.value;
$tmp422[$tmp425] = $tmp424;
// line 88
frost$core$Int64** $tmp426 = *(&local0);
frost$core$Int64 $tmp427 = (frost$core$Int64) {44};
frost$core$Int64 $tmp428 = (frost$core$Int64) {31};
frost$core$Int64 $tmp429 = (frost$core$Int64) {0};
frost$core$Int64* $tmp430 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp428, $tmp429);
int64_t $tmp431 = $tmp427.value;
$tmp426[$tmp431] = $tmp430;
// line 89
frost$core$Int64** $tmp432 = *(&local0);
frost$core$Int64 $tmp433 = (frost$core$Int64) {44};
int64_t $tmp434 = $tmp433.value;
frost$core$Int64* $tmp435 = $tmp432[$tmp434];
frost$core$Int64 $tmp436 = (frost$core$Int64) {1};
frost$core$Int64 $tmp437 = (frost$core$Int64) {6};
int64_t $tmp438 = $tmp436.value;
$tmp435[$tmp438] = $tmp437;
// line 90
frost$core$Int64** $tmp439 = *(&local0);
frost$core$Int64 $tmp440 = (frost$core$Int64) {44};
int64_t $tmp441 = $tmp440.value;
frost$core$Int64* $tmp442 = $tmp439[$tmp441];
frost$core$Int64 $tmp443 = (frost$core$Int64) {3};
frost$core$Int64 $tmp444 = (frost$core$Int64) {3};
int64_t $tmp445 = $tmp443.value;
$tmp442[$tmp445] = $tmp444;
// line 91
frost$core$Int64** $tmp446 = *(&local0);
frost$core$Int64 $tmp447 = (frost$core$Int64) {45};
frost$core$Int64 $tmp448 = (frost$core$Int64) {31};
frost$core$Int64 $tmp449 = (frost$core$Int64) {0};
frost$core$Int64* $tmp450 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp448, $tmp449);
int64_t $tmp451 = $tmp447.value;
$tmp446[$tmp451] = $tmp450;
// line 92
frost$core$Int64** $tmp452 = *(&local0);
frost$core$Int64 $tmp453 = (frost$core$Int64) {45};
int64_t $tmp454 = $tmp453.value;
frost$core$Int64* $tmp455 = $tmp452[$tmp454];
frost$core$Int64 $tmp456 = (frost$core$Int64) {1};
frost$core$Int64 $tmp457 = (frost$core$Int64) {7};
int64_t $tmp458 = $tmp456.value;
$tmp455[$tmp458] = $tmp457;
// line 93
frost$core$Int64** $tmp459 = *(&local0);
frost$core$Int64 $tmp460 = (frost$core$Int64) {45};
int64_t $tmp461 = $tmp460.value;
frost$core$Int64* $tmp462 = $tmp459[$tmp461];
frost$core$Int64 $tmp463 = (frost$core$Int64) {3};
frost$core$Int64 $tmp464 = (frost$core$Int64) {3};
int64_t $tmp465 = $tmp463.value;
$tmp462[$tmp465] = $tmp464;
// line 94
frost$core$Int64** $tmp466 = *(&local0);
frost$core$Int64 $tmp467 = (frost$core$Int64) {45};
int64_t $tmp468 = $tmp467.value;
frost$core$Int64* $tmp469 = $tmp466[$tmp468];
frost$core$Int64 $tmp470 = (frost$core$Int64) {10};
frost$core$Int64 $tmp471 = (frost$core$Int64) {11};
int64_t $tmp472 = $tmp470.value;
$tmp469[$tmp472] = $tmp471;
// line 95
frost$core$Int64** $tmp473 = *(&local0);
frost$core$Int64 $tmp474 = (frost$core$Int64) {46};
frost$core$Int64 $tmp475 = (frost$core$Int64) {31};
frost$core$Int64 $tmp476 = (frost$core$Int64) {0};
frost$core$Int64* $tmp477 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp475, $tmp476);
int64_t $tmp478 = $tmp474.value;
$tmp473[$tmp478] = $tmp477;
// line 96
frost$core$Int64** $tmp479 = *(&local0);
frost$core$Int64 $tmp480 = (frost$core$Int64) {46};
int64_t $tmp481 = $tmp480.value;
frost$core$Int64* $tmp482 = $tmp479[$tmp481];
frost$core$Int64 $tmp483 = (frost$core$Int64) {1};
frost$core$Int64 $tmp484 = (frost$core$Int64) {9};
int64_t $tmp485 = $tmp483.value;
$tmp482[$tmp485] = $tmp484;
// line 97
frost$core$Int64** $tmp486 = *(&local0);
frost$core$Int64 $tmp487 = (frost$core$Int64) {46};
int64_t $tmp488 = $tmp487.value;
frost$core$Int64* $tmp489 = $tmp486[$tmp488];
frost$core$Int64 $tmp490 = (frost$core$Int64) {3};
frost$core$Int64 $tmp491 = (frost$core$Int64) {3};
int64_t $tmp492 = $tmp490.value;
$tmp489[$tmp492] = $tmp491;
// line 98
frost$core$Int64** $tmp493 = *(&local0);
frost$core$Int64 $tmp494 = (frost$core$Int64) {46};
int64_t $tmp495 = $tmp494.value;
frost$core$Int64* $tmp496 = $tmp493[$tmp495];
frost$core$Int64 $tmp497 = (frost$core$Int64) {8};
frost$core$Int64 $tmp498 = (frost$core$Int64) {9};
int64_t $tmp499 = $tmp497.value;
$tmp496[$tmp499] = $tmp498;
// line 99
frost$core$Int64** $tmp500 = *(&local0);
frost$core$Int64 $tmp501 = (frost$core$Int64) {47};
frost$core$Int64** $tmp502 = *(&local0);
frost$core$Int64 $tmp503 = (frost$core$Int64) {0};
int64_t $tmp504 = $tmp503.value;
frost$core$Int64* $tmp505 = $tmp502[$tmp504];
int64_t $tmp506 = $tmp501.value;
$tmp500[$tmp506] = $tmp505;
// line 100
frost$core$Int64** $tmp507 = *(&local0);
frost$core$Int64 $tmp508 = (frost$core$Int64) {48};
frost$core$Int64 $tmp509 = (frost$core$Int64) {31};
frost$core$Int64 $tmp510 = (frost$core$Int64) {0};
frost$core$Int64* $tmp511 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp509, $tmp510);
int64_t $tmp512 = $tmp508.value;
$tmp507[$tmp512] = $tmp511;
// line 101
frost$core$Int64** $tmp513 = *(&local0);
frost$core$Int64 $tmp514 = (frost$core$Int64) {48};
int64_t $tmp515 = $tmp514.value;
frost$core$Int64* $tmp516 = $tmp513[$tmp515];
frost$core$Int64 $tmp517 = (frost$core$Int64) {1};
frost$core$Int64 $tmp518 = (frost$core$Int64) {8};
int64_t $tmp519 = $tmp517.value;
$tmp516[$tmp519] = $tmp518;
// line 102
frost$core$Int64** $tmp520 = *(&local0);
frost$core$Int64 $tmp521 = (frost$core$Int64) {48};
int64_t $tmp522 = $tmp521.value;
frost$core$Int64* $tmp523 = $tmp520[$tmp522];
frost$core$Int64 $tmp524 = (frost$core$Int64) {3};
frost$core$Int64 $tmp525 = (frost$core$Int64) {3};
int64_t $tmp526 = $tmp524.value;
$tmp523[$tmp526] = $tmp525;
// line 103
frost$core$Int64** $tmp527 = *(&local0);
frost$core$Int64 $tmp528 = (frost$core$Int64) {48};
int64_t $tmp529 = $tmp528.value;
frost$core$Int64* $tmp530 = $tmp527[$tmp529];
frost$core$Int64 $tmp531 = (frost$core$Int64) {7};
frost$core$Int64 $tmp532 = (frost$core$Int64) {8};
int64_t $tmp533 = $tmp531.value;
$tmp530[$tmp533] = $tmp532;
// line 104
frost$core$Int64** $tmp534 = *(&local0);
frost$core$Int64 $tmp535 = (frost$core$Int64) {48};
int64_t $tmp536 = $tmp535.value;
frost$core$Int64* $tmp537 = $tmp534[$tmp536];
frost$core$Int64 $tmp538 = (frost$core$Int64) {8};
frost$core$Int64 $tmp539 = (frost$core$Int64) {8};
int64_t $tmp540 = $tmp538.value;
$tmp537[$tmp540] = $tmp539;
// line 105
frost$core$Int64** $tmp541 = *(&local0);
frost$core$Int64 $tmp542 = (frost$core$Int64) {48};
int64_t $tmp543 = $tmp542.value;
frost$core$Int64* $tmp544 = $tmp541[$tmp543];
frost$core$Int64 $tmp545 = (frost$core$Int64) {9};
frost$core$Int64 $tmp546 = (frost$core$Int64) {9};
int64_t $tmp547 = $tmp545.value;
$tmp544[$tmp547] = $tmp546;
// line 106
frost$core$Int64** $tmp548 = *(&local0);
frost$core$Int64 $tmp549 = (frost$core$Int64) {48};
int64_t $tmp550 = $tmp549.value;
frost$core$Int64* $tmp551 = $tmp548[$tmp550];
frost$core$Int64 $tmp552 = (frost$core$Int64) {10};
frost$core$Int64 $tmp553 = (frost$core$Int64) {12};
int64_t $tmp554 = $tmp552.value;
$tmp551[$tmp554] = $tmp553;
// line 107
frost$core$Int64** $tmp555 = *(&local0);
frost$core$Int64 $tmp556 = (frost$core$Int64) {48};
int64_t $tmp557 = $tmp556.value;
frost$core$Int64* $tmp558 = $tmp555[$tmp557];
frost$core$Int64 $tmp559 = (frost$core$Int64) {11};
frost$core$Int64 $tmp560 = (frost$core$Int64) {12};
int64_t $tmp561 = $tmp559.value;
$tmp558[$tmp561] = $tmp560;
// line 108
frost$core$Int64** $tmp562 = *(&local0);
frost$core$Int64 $tmp563 = (frost$core$Int64) {48};
int64_t $tmp564 = $tmp563.value;
frost$core$Int64* $tmp565 = $tmp562[$tmp564];
frost$core$Int64 $tmp566 = (frost$core$Int64) {12};
frost$core$Int64 $tmp567 = (frost$core$Int64) {12};
int64_t $tmp568 = $tmp566.value;
$tmp565[$tmp568] = $tmp567;
// line 109
frost$core$Int64** $tmp569 = *(&local0);
frost$core$Int64 $tmp570 = (frost$core$Int64) {49};
frost$core$Int64** $tmp571 = *(&local0);
frost$core$Int64 $tmp572 = (frost$core$Int64) {48};
int64_t $tmp573 = $tmp572.value;
frost$core$Int64* $tmp574 = $tmp571[$tmp573];
int64_t $tmp575 = $tmp570.value;
$tmp569[$tmp575] = $tmp574;
// line 110
frost$core$Int64** $tmp576 = *(&local0);
frost$core$Int64 $tmp577 = (frost$core$Int64) {50};
frost$core$Int64** $tmp578 = *(&local0);
frost$core$Int64 $tmp579 = (frost$core$Int64) {48};
int64_t $tmp580 = $tmp579.value;
frost$core$Int64* $tmp581 = $tmp578[$tmp580];
int64_t $tmp582 = $tmp577.value;
$tmp576[$tmp582] = $tmp581;
// line 111
frost$core$Int64** $tmp583 = *(&local0);
frost$core$Int64 $tmp584 = (frost$core$Int64) {51};
frost$core$Int64** $tmp585 = *(&local0);
frost$core$Int64 $tmp586 = (frost$core$Int64) {48};
int64_t $tmp587 = $tmp586.value;
frost$core$Int64* $tmp588 = $tmp585[$tmp587];
int64_t $tmp589 = $tmp584.value;
$tmp583[$tmp589] = $tmp588;
// line 112
frost$core$Int64** $tmp590 = *(&local0);
frost$core$Int64 $tmp591 = (frost$core$Int64) {52};
frost$core$Int64** $tmp592 = *(&local0);
frost$core$Int64 $tmp593 = (frost$core$Int64) {48};
int64_t $tmp594 = $tmp593.value;
frost$core$Int64* $tmp595 = $tmp592[$tmp594];
int64_t $tmp596 = $tmp591.value;
$tmp590[$tmp596] = $tmp595;
// line 113
frost$core$Int64** $tmp597 = *(&local0);
frost$core$Int64 $tmp598 = (frost$core$Int64) {53};
frost$core$Int64** $tmp599 = *(&local0);
frost$core$Int64 $tmp600 = (frost$core$Int64) {48};
int64_t $tmp601 = $tmp600.value;
frost$core$Int64* $tmp602 = $tmp599[$tmp601];
int64_t $tmp603 = $tmp598.value;
$tmp597[$tmp603] = $tmp602;
// line 114
frost$core$Int64** $tmp604 = *(&local0);
frost$core$Int64 $tmp605 = (frost$core$Int64) {54};
frost$core$Int64** $tmp606 = *(&local0);
frost$core$Int64 $tmp607 = (frost$core$Int64) {48};
int64_t $tmp608 = $tmp607.value;
frost$core$Int64* $tmp609 = $tmp606[$tmp608];
int64_t $tmp610 = $tmp605.value;
$tmp604[$tmp610] = $tmp609;
// line 115
frost$core$Int64** $tmp611 = *(&local0);
frost$core$Int64 $tmp612 = (frost$core$Int64) {55};
frost$core$Int64** $tmp613 = *(&local0);
frost$core$Int64 $tmp614 = (frost$core$Int64) {48};
int64_t $tmp615 = $tmp614.value;
frost$core$Int64* $tmp616 = $tmp613[$tmp615];
int64_t $tmp617 = $tmp612.value;
$tmp611[$tmp617] = $tmp616;
// line 116
frost$core$Int64** $tmp618 = *(&local0);
frost$core$Int64 $tmp619 = (frost$core$Int64) {56};
frost$core$Int64** $tmp620 = *(&local0);
frost$core$Int64 $tmp621 = (frost$core$Int64) {48};
int64_t $tmp622 = $tmp621.value;
frost$core$Int64* $tmp623 = $tmp620[$tmp622];
int64_t $tmp624 = $tmp619.value;
$tmp618[$tmp624] = $tmp623;
// line 117
frost$core$Int64** $tmp625 = *(&local0);
frost$core$Int64 $tmp626 = (frost$core$Int64) {57};
frost$core$Int64** $tmp627 = *(&local0);
frost$core$Int64 $tmp628 = (frost$core$Int64) {48};
int64_t $tmp629 = $tmp628.value;
frost$core$Int64* $tmp630 = $tmp627[$tmp629];
int64_t $tmp631 = $tmp626.value;
$tmp625[$tmp631] = $tmp630;
// line 118
frost$core$Int64** $tmp632 = *(&local0);
frost$core$Int64 $tmp633 = (frost$core$Int64) {58};
frost$core$Int64 $tmp634 = (frost$core$Int64) {31};
frost$core$Int64 $tmp635 = (frost$core$Int64) {0};
frost$core$Int64* $tmp636 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp634, $tmp635);
int64_t $tmp637 = $tmp633.value;
$tmp632[$tmp637] = $tmp636;
// line 119
frost$core$Int64** $tmp638 = *(&local0);
frost$core$Int64 $tmp639 = (frost$core$Int64) {58};
int64_t $tmp640 = $tmp639.value;
frost$core$Int64* $tmp641 = $tmp638[$tmp640];
frost$core$Int64 $tmp642 = (frost$core$Int64) {1};
frost$core$Int64 $tmp643 = (frost$core$Int64) {13};
int64_t $tmp644 = $tmp642.value;
$tmp641[$tmp644] = $tmp643;
// line 120
frost$core$Int64** $tmp645 = *(&local0);
frost$core$Int64 $tmp646 = (frost$core$Int64) {58};
int64_t $tmp647 = $tmp646.value;
frost$core$Int64* $tmp648 = $tmp645[$tmp647];
frost$core$Int64 $tmp649 = (frost$core$Int64) {3};
frost$core$Int64 $tmp650 = (frost$core$Int64) {3};
int64_t $tmp651 = $tmp649.value;
$tmp648[$tmp651] = $tmp650;
// line 121
frost$core$Int64** $tmp652 = *(&local0);
frost$core$Int64 $tmp653 = (frost$core$Int64) {59};
frost$core$Int64** $tmp654 = *(&local0);
frost$core$Int64 $tmp655 = (frost$core$Int64) {0};
int64_t $tmp656 = $tmp655.value;
frost$core$Int64* $tmp657 = $tmp654[$tmp656];
int64_t $tmp658 = $tmp653.value;
$tmp652[$tmp658] = $tmp657;
// line 122
frost$core$Int64** $tmp659 = *(&local0);
frost$core$Int64 $tmp660 = (frost$core$Int64) {60};
frost$core$Int64** $tmp661 = *(&local0);
frost$core$Int64 $tmp662 = (frost$core$Int64) {0};
int64_t $tmp663 = $tmp662.value;
frost$core$Int64* $tmp664 = $tmp661[$tmp663];
int64_t $tmp665 = $tmp660.value;
$tmp659[$tmp665] = $tmp664;
// line 123
frost$core$Int64** $tmp666 = *(&local0);
frost$core$Int64 $tmp667 = (frost$core$Int64) {61};
frost$core$Int64** $tmp668 = *(&local0);
frost$core$Int64 $tmp669 = (frost$core$Int64) {0};
int64_t $tmp670 = $tmp669.value;
frost$core$Int64* $tmp671 = $tmp668[$tmp670];
int64_t $tmp672 = $tmp667.value;
$tmp666[$tmp672] = $tmp671;
// line 124
frost$core$Int64** $tmp673 = *(&local0);
frost$core$Int64 $tmp674 = (frost$core$Int64) {62};
frost$core$Int64** $tmp675 = *(&local0);
frost$core$Int64 $tmp676 = (frost$core$Int64) {0};
int64_t $tmp677 = $tmp676.value;
frost$core$Int64* $tmp678 = $tmp675[$tmp677];
int64_t $tmp679 = $tmp674.value;
$tmp673[$tmp679] = $tmp678;
// line 125
frost$core$Int64** $tmp680 = *(&local0);
frost$core$Int64 $tmp681 = (frost$core$Int64) {63};
frost$core$Int64** $tmp682 = *(&local0);
frost$core$Int64 $tmp683 = (frost$core$Int64) {0};
int64_t $tmp684 = $tmp683.value;
frost$core$Int64* $tmp685 = $tmp682[$tmp684];
int64_t $tmp686 = $tmp681.value;
$tmp680[$tmp686] = $tmp685;
// line 126
frost$core$Int64** $tmp687 = *(&local0);
frost$core$Int64 $tmp688 = (frost$core$Int64) {64};
frost$core$Int64** $tmp689 = *(&local0);
frost$core$Int64 $tmp690 = (frost$core$Int64) {0};
int64_t $tmp691 = $tmp690.value;
frost$core$Int64* $tmp692 = $tmp689[$tmp691];
int64_t $tmp693 = $tmp688.value;
$tmp687[$tmp693] = $tmp692;
// line 127
frost$core$Int64** $tmp694 = *(&local0);
frost$core$Int64 $tmp695 = (frost$core$Int64) {65};
frost$core$Int64** $tmp696 = *(&local0);
frost$core$Int64 $tmp697 = (frost$core$Int64) {0};
int64_t $tmp698 = $tmp697.value;
frost$core$Int64* $tmp699 = $tmp696[$tmp698];
int64_t $tmp700 = $tmp695.value;
$tmp694[$tmp700] = $tmp699;
// line 128
frost$core$Int64** $tmp701 = *(&local0);
frost$core$Int64 $tmp702 = (frost$core$Int64) {66};
frost$core$Int64** $tmp703 = *(&local0);
frost$core$Int64 $tmp704 = (frost$core$Int64) {0};
int64_t $tmp705 = $tmp704.value;
frost$core$Int64* $tmp706 = $tmp703[$tmp705];
int64_t $tmp707 = $tmp702.value;
$tmp701[$tmp707] = $tmp706;
// line 129
frost$core$Int64** $tmp708 = *(&local0);
frost$core$Int64 $tmp709 = (frost$core$Int64) {67};
frost$core$Int64** $tmp710 = *(&local0);
frost$core$Int64 $tmp711 = (frost$core$Int64) {0};
int64_t $tmp712 = $tmp711.value;
frost$core$Int64* $tmp713 = $tmp710[$tmp712];
int64_t $tmp714 = $tmp709.value;
$tmp708[$tmp714] = $tmp713;
// line 130
frost$core$Int64** $tmp715 = *(&local0);
frost$core$Int64 $tmp716 = (frost$core$Int64) {68};
frost$core$Int64** $tmp717 = *(&local0);
frost$core$Int64 $tmp718 = (frost$core$Int64) {0};
int64_t $tmp719 = $tmp718.value;
frost$core$Int64* $tmp720 = $tmp717[$tmp719];
int64_t $tmp721 = $tmp716.value;
$tmp715[$tmp721] = $tmp720;
// line 131
frost$core$Int64** $tmp722 = *(&local0);
frost$core$Int64 $tmp723 = (frost$core$Int64) {69};
frost$core$Int64 $tmp724 = (frost$core$Int64) {31};
frost$core$Int64 $tmp725 = (frost$core$Int64) {0};
frost$core$Int64* $tmp726 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp724, $tmp725);
int64_t $tmp727 = $tmp723.value;
$tmp722[$tmp727] = $tmp726;
// line 132
frost$core$Int64** $tmp728 = *(&local0);
frost$core$Int64 $tmp729 = (frost$core$Int64) {69};
int64_t $tmp730 = $tmp729.value;
frost$core$Int64* $tmp731 = $tmp728[$tmp730];
frost$core$Int64 $tmp732 = (frost$core$Int64) {3};
frost$core$Int64 $tmp733 = (frost$core$Int64) {3};
int64_t $tmp734 = $tmp732.value;
$tmp731[$tmp734] = $tmp733;
// line 133
frost$core$Int64** $tmp735 = *(&local0);
frost$core$Int64 $tmp736 = (frost$core$Int64) {69};
int64_t $tmp737 = $tmp736.value;
frost$core$Int64* $tmp738 = $tmp735[$tmp737];
frost$core$Int64 $tmp739 = (frost$core$Int64) {9};
frost$core$Int64 $tmp740 = (frost$core$Int64) {10};
int64_t $tmp741 = $tmp739.value;
$tmp738[$tmp741] = $tmp740;
// line 134
frost$core$Int64** $tmp742 = *(&local0);
frost$core$Int64 $tmp743 = (frost$core$Int64) {70};
frost$core$Int64** $tmp744 = *(&local0);
frost$core$Int64 $tmp745 = (frost$core$Int64) {0};
int64_t $tmp746 = $tmp745.value;
frost$core$Int64* $tmp747 = $tmp744[$tmp746];
int64_t $tmp748 = $tmp743.value;
$tmp742[$tmp748] = $tmp747;
// line 135
frost$core$Int64** $tmp749 = *(&local0);
frost$core$Int64 $tmp750 = (frost$core$Int64) {71};
frost$core$Int64** $tmp751 = *(&local0);
frost$core$Int64 $tmp752 = (frost$core$Int64) {0};
int64_t $tmp753 = $tmp752.value;
frost$core$Int64* $tmp754 = $tmp751[$tmp753];
int64_t $tmp755 = $tmp750.value;
$tmp749[$tmp755] = $tmp754;
// line 136
frost$core$Int64** $tmp756 = *(&local0);
frost$core$Int64 $tmp757 = (frost$core$Int64) {72};
frost$core$Int64** $tmp758 = *(&local0);
frost$core$Int64 $tmp759 = (frost$core$Int64) {0};
int64_t $tmp760 = $tmp759.value;
frost$core$Int64* $tmp761 = $tmp758[$tmp760];
int64_t $tmp762 = $tmp757.value;
$tmp756[$tmp762] = $tmp761;
// line 137
frost$core$Int64** $tmp763 = *(&local0);
frost$core$Int64 $tmp764 = (frost$core$Int64) {73};
frost$core$Int64** $tmp765 = *(&local0);
frost$core$Int64 $tmp766 = (frost$core$Int64) {0};
int64_t $tmp767 = $tmp766.value;
frost$core$Int64* $tmp768 = $tmp765[$tmp767];
int64_t $tmp769 = $tmp764.value;
$tmp763[$tmp769] = $tmp768;
// line 138
frost$core$Int64** $tmp770 = *(&local0);
frost$core$Int64 $tmp771 = (frost$core$Int64) {74};
frost$core$Int64** $tmp772 = *(&local0);
frost$core$Int64 $tmp773 = (frost$core$Int64) {0};
int64_t $tmp774 = $tmp773.value;
frost$core$Int64* $tmp775 = $tmp772[$tmp774];
int64_t $tmp776 = $tmp771.value;
$tmp770[$tmp776] = $tmp775;
// line 139
frost$core$Int64** $tmp777 = *(&local0);
frost$core$Int64 $tmp778 = (frost$core$Int64) {75};
frost$core$Int64** $tmp779 = *(&local0);
frost$core$Int64 $tmp780 = (frost$core$Int64) {0};
int64_t $tmp781 = $tmp780.value;
frost$core$Int64* $tmp782 = $tmp779[$tmp781];
int64_t $tmp783 = $tmp778.value;
$tmp777[$tmp783] = $tmp782;
// line 140
frost$core$Int64** $tmp784 = *(&local0);
frost$core$Int64 $tmp785 = (frost$core$Int64) {76};
frost$core$Int64** $tmp786 = *(&local0);
frost$core$Int64 $tmp787 = (frost$core$Int64) {0};
int64_t $tmp788 = $tmp787.value;
frost$core$Int64* $tmp789 = $tmp786[$tmp788];
int64_t $tmp790 = $tmp785.value;
$tmp784[$tmp790] = $tmp789;
// line 141
frost$core$Int64** $tmp791 = *(&local0);
frost$core$Int64 $tmp792 = (frost$core$Int64) {77};
frost$core$Int64** $tmp793 = *(&local0);
frost$core$Int64 $tmp794 = (frost$core$Int64) {0};
int64_t $tmp795 = $tmp794.value;
frost$core$Int64* $tmp796 = $tmp793[$tmp795];
int64_t $tmp797 = $tmp792.value;
$tmp791[$tmp797] = $tmp796;
// line 142
frost$core$Int64** $tmp798 = *(&local0);
frost$core$Int64 $tmp799 = (frost$core$Int64) {78};
frost$core$Int64** $tmp800 = *(&local0);
frost$core$Int64 $tmp801 = (frost$core$Int64) {0};
int64_t $tmp802 = $tmp801.value;
frost$core$Int64* $tmp803 = $tmp800[$tmp802];
int64_t $tmp804 = $tmp799.value;
$tmp798[$tmp804] = $tmp803;
// line 143
frost$core$Int64** $tmp805 = *(&local0);
frost$core$Int64 $tmp806 = (frost$core$Int64) {79};
frost$core$Int64** $tmp807 = *(&local0);
frost$core$Int64 $tmp808 = (frost$core$Int64) {0};
int64_t $tmp809 = $tmp808.value;
frost$core$Int64* $tmp810 = $tmp807[$tmp809];
int64_t $tmp811 = $tmp806.value;
$tmp805[$tmp811] = $tmp810;
// line 144
frost$core$Int64** $tmp812 = *(&local0);
frost$core$Int64 $tmp813 = (frost$core$Int64) {80};
frost$core$Int64** $tmp814 = *(&local0);
frost$core$Int64 $tmp815 = (frost$core$Int64) {0};
int64_t $tmp816 = $tmp815.value;
frost$core$Int64* $tmp817 = $tmp814[$tmp816];
int64_t $tmp818 = $tmp813.value;
$tmp812[$tmp818] = $tmp817;
// line 145
frost$core$Int64** $tmp819 = *(&local0);
frost$core$Int64 $tmp820 = (frost$core$Int64) {81};
frost$core$Int64** $tmp821 = *(&local0);
frost$core$Int64 $tmp822 = (frost$core$Int64) {0};
int64_t $tmp823 = $tmp822.value;
frost$core$Int64* $tmp824 = $tmp821[$tmp823];
int64_t $tmp825 = $tmp820.value;
$tmp819[$tmp825] = $tmp824;
// line 146
frost$core$Int64** $tmp826 = *(&local0);
frost$core$Int64 $tmp827 = (frost$core$Int64) {82};
frost$core$Int64** $tmp828 = *(&local0);
frost$core$Int64 $tmp829 = (frost$core$Int64) {0};
int64_t $tmp830 = $tmp829.value;
frost$core$Int64* $tmp831 = $tmp828[$tmp830];
int64_t $tmp832 = $tmp827.value;
$tmp826[$tmp832] = $tmp831;
// line 147
frost$core$Int64** $tmp833 = *(&local0);
frost$core$Int64 $tmp834 = (frost$core$Int64) {83};
frost$core$Int64** $tmp835 = *(&local0);
frost$core$Int64 $tmp836 = (frost$core$Int64) {0};
int64_t $tmp837 = $tmp836.value;
frost$core$Int64* $tmp838 = $tmp835[$tmp837];
int64_t $tmp839 = $tmp834.value;
$tmp833[$tmp839] = $tmp838;
// line 148
frost$core$Int64** $tmp840 = *(&local0);
frost$core$Int64 $tmp841 = (frost$core$Int64) {84};
frost$core$Int64** $tmp842 = *(&local0);
frost$core$Int64 $tmp843 = (frost$core$Int64) {0};
int64_t $tmp844 = $tmp843.value;
frost$core$Int64* $tmp845 = $tmp842[$tmp844];
int64_t $tmp846 = $tmp841.value;
$tmp840[$tmp846] = $tmp845;
// line 149
frost$core$Int64** $tmp847 = *(&local0);
frost$core$Int64 $tmp848 = (frost$core$Int64) {85};
frost$core$Int64** $tmp849 = *(&local0);
frost$core$Int64 $tmp850 = (frost$core$Int64) {0};
int64_t $tmp851 = $tmp850.value;
frost$core$Int64* $tmp852 = $tmp849[$tmp851];
int64_t $tmp853 = $tmp848.value;
$tmp847[$tmp853] = $tmp852;
// line 150
frost$core$Int64** $tmp854 = *(&local0);
frost$core$Int64 $tmp855 = (frost$core$Int64) {86};
frost$core$Int64** $tmp856 = *(&local0);
frost$core$Int64 $tmp857 = (frost$core$Int64) {0};
int64_t $tmp858 = $tmp857.value;
frost$core$Int64* $tmp859 = $tmp856[$tmp858];
int64_t $tmp860 = $tmp855.value;
$tmp854[$tmp860] = $tmp859;
// line 151
frost$core$Int64** $tmp861 = *(&local0);
frost$core$Int64 $tmp862 = (frost$core$Int64) {87};
frost$core$Int64** $tmp863 = *(&local0);
frost$core$Int64 $tmp864 = (frost$core$Int64) {0};
int64_t $tmp865 = $tmp864.value;
frost$core$Int64* $tmp866 = $tmp863[$tmp865];
int64_t $tmp867 = $tmp862.value;
$tmp861[$tmp867] = $tmp866;
// line 152
frost$core$Int64** $tmp868 = *(&local0);
frost$core$Int64 $tmp869 = (frost$core$Int64) {88};
frost$core$Int64** $tmp870 = *(&local0);
frost$core$Int64 $tmp871 = (frost$core$Int64) {0};
int64_t $tmp872 = $tmp871.value;
frost$core$Int64* $tmp873 = $tmp870[$tmp872];
int64_t $tmp874 = $tmp869.value;
$tmp868[$tmp874] = $tmp873;
// line 153
frost$core$Int64** $tmp875 = *(&local0);
frost$core$Int64 $tmp876 = (frost$core$Int64) {89};
frost$core$Int64** $tmp877 = *(&local0);
frost$core$Int64 $tmp878 = (frost$core$Int64) {0};
int64_t $tmp879 = $tmp878.value;
frost$core$Int64* $tmp880 = $tmp877[$tmp879];
int64_t $tmp881 = $tmp876.value;
$tmp875[$tmp881] = $tmp880;
// line 154
frost$core$Int64** $tmp882 = *(&local0);
frost$core$Int64 $tmp883 = (frost$core$Int64) {90};
frost$core$Int64** $tmp884 = *(&local0);
frost$core$Int64 $tmp885 = (frost$core$Int64) {0};
int64_t $tmp886 = $tmp885.value;
frost$core$Int64* $tmp887 = $tmp884[$tmp886];
int64_t $tmp888 = $tmp883.value;
$tmp882[$tmp888] = $tmp887;
// line 155
frost$core$Int64** $tmp889 = *(&local0);
frost$core$Int64 $tmp890 = (frost$core$Int64) {91};
frost$core$Int64 $tmp891 = (frost$core$Int64) {31};
frost$core$Int64 $tmp892 = (frost$core$Int64) {0};
frost$core$Int64* $tmp893 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp891, $tmp892);
int64_t $tmp894 = $tmp890.value;
$tmp889[$tmp894] = $tmp893;
// line 156
frost$core$Int64** $tmp895 = *(&local0);
frost$core$Int64 $tmp896 = (frost$core$Int64) {91};
int64_t $tmp897 = $tmp896.value;
frost$core$Int64* $tmp898 = $tmp895[$tmp897];
frost$core$Int64 $tmp899 = (frost$core$Int64) {1};
frost$core$Int64 $tmp900 = (frost$core$Int64) {14};
int64_t $tmp901 = $tmp899.value;
$tmp898[$tmp901] = $tmp900;
// line 157
frost$core$Int64** $tmp902 = *(&local0);
frost$core$Int64 $tmp903 = (frost$core$Int64) {91};
int64_t $tmp904 = $tmp903.value;
frost$core$Int64* $tmp905 = $tmp902[$tmp904];
frost$core$Int64 $tmp906 = (frost$core$Int64) {3};
frost$core$Int64 $tmp907 = (frost$core$Int64) {3};
int64_t $tmp908 = $tmp906.value;
$tmp905[$tmp908] = $tmp907;
// line 158
frost$core$Int64** $tmp909 = *(&local0);
frost$core$Int64 $tmp910 = (frost$core$Int64) {92};
frost$core$Int64 $tmp911 = (frost$core$Int64) {31};
frost$core$Int64 $tmp912 = (frost$core$Int64) {0};
frost$core$Int64* $tmp913 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp911, $tmp912);
int64_t $tmp914 = $tmp910.value;
$tmp909[$tmp914] = $tmp913;
// line 159
frost$core$Int64** $tmp915 = *(&local0);
frost$core$Int64 $tmp916 = (frost$core$Int64) {92};
int64_t $tmp917 = $tmp916.value;
frost$core$Int64* $tmp918 = $tmp915[$tmp917];
frost$core$Int64 $tmp919 = (frost$core$Int64) {3};
frost$core$Int64 $tmp920 = (frost$core$Int64) {5};
int64_t $tmp921 = $tmp919.value;
$tmp918[$tmp921] = $tmp920;
// line 160
frost$core$Int64** $tmp922 = *(&local0);
frost$core$Int64 $tmp923 = (frost$core$Int64) {92};
int64_t $tmp924 = $tmp923.value;
frost$core$Int64* $tmp925 = $tmp922[$tmp924];
frost$core$Int64 $tmp926 = (frost$core$Int64) {5};
frost$core$Int64 $tmp927 = (frost$core$Int64) {3};
int64_t $tmp928 = $tmp926.value;
$tmp925[$tmp928] = $tmp927;
// line 161
frost$core$Int64** $tmp929 = *(&local0);
frost$core$Int64 $tmp930 = (frost$core$Int64) {93};
frost$core$Int64 $tmp931 = (frost$core$Int64) {31};
frost$core$Int64 $tmp932 = (frost$core$Int64) {0};
frost$core$Int64* $tmp933 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp931, $tmp932);
int64_t $tmp934 = $tmp930.value;
$tmp929[$tmp934] = $tmp933;
// line 162
frost$core$Int64** $tmp935 = *(&local0);
frost$core$Int64 $tmp936 = (frost$core$Int64) {93};
int64_t $tmp937 = $tmp936.value;
frost$core$Int64* $tmp938 = $tmp935[$tmp937];
frost$core$Int64 $tmp939 = (frost$core$Int64) {1};
frost$core$Int64 $tmp940 = (frost$core$Int64) {15};
int64_t $tmp941 = $tmp939.value;
$tmp938[$tmp941] = $tmp940;
// line 163
frost$core$Int64** $tmp942 = *(&local0);
frost$core$Int64 $tmp943 = (frost$core$Int64) {93};
int64_t $tmp944 = $tmp943.value;
frost$core$Int64* $tmp945 = $tmp942[$tmp944];
frost$core$Int64 $tmp946 = (frost$core$Int64) {3};
frost$core$Int64 $tmp947 = (frost$core$Int64) {3};
int64_t $tmp948 = $tmp946.value;
$tmp945[$tmp948] = $tmp947;
// line 164
frost$core$Int64** $tmp949 = *(&local0);
frost$core$Int64 $tmp950 = (frost$core$Int64) {94};
frost$core$Int64** $tmp951 = *(&local0);
frost$core$Int64 $tmp952 = (frost$core$Int64) {0};
int64_t $tmp953 = $tmp952.value;
frost$core$Int64* $tmp954 = $tmp951[$tmp953];
int64_t $tmp955 = $tmp950.value;
$tmp949[$tmp955] = $tmp954;
// line 165
frost$core$Int64** $tmp956 = *(&local0);
frost$core$Int64 $tmp957 = (frost$core$Int64) {95};
frost$core$Int64** $tmp958 = *(&local0);
frost$core$Int64 $tmp959 = (frost$core$Int64) {0};
int64_t $tmp960 = $tmp959.value;
frost$core$Int64* $tmp961 = $tmp958[$tmp960];
int64_t $tmp962 = $tmp957.value;
$tmp956[$tmp962] = $tmp961;
// line 166
frost$core$Int64** $tmp963 = *(&local0);
frost$core$Int64 $tmp964 = (frost$core$Int64) {96};
frost$core$Int64** $tmp965 = *(&local0);
frost$core$Int64 $tmp966 = (frost$core$Int64) {0};
int64_t $tmp967 = $tmp966.value;
frost$core$Int64* $tmp968 = $tmp965[$tmp967];
int64_t $tmp969 = $tmp964.value;
$tmp963[$tmp969] = $tmp968;
// line 167
frost$core$Int64** $tmp970 = *(&local0);
frost$core$Int64 $tmp971 = (frost$core$Int64) {97};
frost$core$Int64 $tmp972 = (frost$core$Int64) {31};
frost$core$Int64 $tmp973 = (frost$core$Int64) {0};
frost$core$Int64* $tmp974 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp972, $tmp973);
int64_t $tmp975 = $tmp971.value;
$tmp970[$tmp975] = $tmp974;
// line 168
frost$core$Int64** $tmp976 = *(&local0);
frost$core$Int64 $tmp977 = (frost$core$Int64) {97};
int64_t $tmp978 = $tmp977.value;
frost$core$Int64* $tmp979 = $tmp976[$tmp978];
frost$core$Int64 $tmp980 = (frost$core$Int64) {3};
frost$core$Int64 $tmp981 = (frost$core$Int64) {3};
int64_t $tmp982 = $tmp980.value;
$tmp979[$tmp982] = $tmp981;
// line 169
frost$core$Int64** $tmp983 = *(&local0);
frost$core$Int64 $tmp984 = (frost$core$Int64) {97};
int64_t $tmp985 = $tmp984.value;
frost$core$Int64* $tmp986 = $tmp983[$tmp985];
frost$core$Int64 $tmp987 = (frost$core$Int64) {16};
frost$core$Int64 $tmp988 = (frost$core$Int64) {17};
int64_t $tmp989 = $tmp987.value;
$tmp986[$tmp989] = $tmp988;
// line 170
frost$core$Int64** $tmp990 = *(&local0);
frost$core$Int64 $tmp991 = (frost$core$Int64) {98};
frost$core$Int64 $tmp992 = (frost$core$Int64) {31};
frost$core$Int64 $tmp993 = (frost$core$Int64) {0};
frost$core$Int64* $tmp994 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp992, $tmp993);
int64_t $tmp995 = $tmp991.value;
$tmp990[$tmp995] = $tmp994;
// line 171
frost$core$Int64** $tmp996 = *(&local0);
frost$core$Int64 $tmp997 = (frost$core$Int64) {98};
int64_t $tmp998 = $tmp997.value;
frost$core$Int64* $tmp999 = $tmp996[$tmp998];
frost$core$Int64 $tmp1000 = (frost$core$Int64) {3};
frost$core$Int64 $tmp1001 = (frost$core$Int64) {3};
int64_t $tmp1002 = $tmp1000.value;
$tmp999[$tmp1002] = $tmp1001;
// line 172
frost$core$Int64** $tmp1003 = *(&local0);
frost$core$Int64 $tmp1004 = (frost$core$Int64) {98};
int64_t $tmp1005 = $tmp1004.value;
frost$core$Int64* $tmp1006 = $tmp1003[$tmp1005];
frost$core$Int64 $tmp1007 = (frost$core$Int64) {5};
frost$core$Int64 $tmp1008 = (frost$core$Int64) {3};
int64_t $tmp1009 = $tmp1007.value;
$tmp1006[$tmp1009] = $tmp1008;
// line 173
frost$core$Int64** $tmp1010 = *(&local0);
frost$core$Int64 $tmp1011 = (frost$core$Int64) {99};
frost$core$Int64** $tmp1012 = *(&local0);
frost$core$Int64 $tmp1013 = (frost$core$Int64) {0};
int64_t $tmp1014 = $tmp1013.value;
frost$core$Int64* $tmp1015 = $tmp1012[$tmp1014];
int64_t $tmp1016 = $tmp1011.value;
$tmp1010[$tmp1016] = $tmp1015;
// line 174
frost$core$Int64** $tmp1017 = *(&local0);
frost$core$Int64 $tmp1018 = (frost$core$Int64) {100};
frost$core$Int64** $tmp1019 = *(&local0);
frost$core$Int64 $tmp1020 = (frost$core$Int64) {0};
int64_t $tmp1021 = $tmp1020.value;
frost$core$Int64* $tmp1022 = $tmp1019[$tmp1021];
int64_t $tmp1023 = $tmp1018.value;
$tmp1017[$tmp1023] = $tmp1022;
// line 175
frost$core$Int64** $tmp1024 = *(&local0);
frost$core$Int64 $tmp1025 = (frost$core$Int64) {101};
frost$core$Int64 $tmp1026 = (frost$core$Int64) {31};
frost$core$Int64 $tmp1027 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1028 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp1026, $tmp1027);
int64_t $tmp1029 = $tmp1025.value;
$tmp1024[$tmp1029] = $tmp1028;
// line 176
frost$core$Int64** $tmp1030 = *(&local0);
frost$core$Int64 $tmp1031 = (frost$core$Int64) {101};
int64_t $tmp1032 = $tmp1031.value;
frost$core$Int64* $tmp1033 = $tmp1030[$tmp1032];
frost$core$Int64 $tmp1034 = (frost$core$Int64) {3};
frost$core$Int64 $tmp1035 = (frost$core$Int64) {3};
int64_t $tmp1036 = $tmp1034.value;
$tmp1033[$tmp1036] = $tmp1035;
// line 177
frost$core$Int64** $tmp1037 = *(&local0);
frost$core$Int64 $tmp1038 = (frost$core$Int64) {101};
int64_t $tmp1039 = $tmp1038.value;
frost$core$Int64* $tmp1040 = $tmp1037[$tmp1039];
frost$core$Int64 $tmp1041 = (frost$core$Int64) {9};
frost$core$Int64 $tmp1042 = (frost$core$Int64) {10};
int64_t $tmp1043 = $tmp1041.value;
$tmp1040[$tmp1043] = $tmp1042;
// line 178
frost$core$Int64** $tmp1044 = *(&local0);
frost$core$Int64 $tmp1045 = (frost$core$Int64) {101};
int64_t $tmp1046 = $tmp1045.value;
frost$core$Int64* $tmp1047 = $tmp1044[$tmp1046];
frost$core$Int64 $tmp1048 = (frost$core$Int64) {19};
frost$core$Int64 $tmp1049 = (frost$core$Int64) {20};
int64_t $tmp1050 = $tmp1048.value;
$tmp1047[$tmp1050] = $tmp1049;
// line 179
frost$core$Int64** $tmp1051 = *(&local0);
frost$core$Int64 $tmp1052 = (frost$core$Int64) {101};
int64_t $tmp1053 = $tmp1052.value;
frost$core$Int64* $tmp1054 = $tmp1051[$tmp1053];
frost$core$Int64 $tmp1055 = (frost$core$Int64) {27};
frost$core$Int64 $tmp1056 = (frost$core$Int64) {28};
int64_t $tmp1057 = $tmp1055.value;
$tmp1054[$tmp1057] = $tmp1056;
// line 180
frost$core$Int64** $tmp1058 = *(&local0);
frost$core$Int64 $tmp1059 = (frost$core$Int64) {102};
frost$core$Int64 $tmp1060 = (frost$core$Int64) {31};
frost$core$Int64 $tmp1061 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1062 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp1060, $tmp1061);
int64_t $tmp1063 = $tmp1059.value;
$tmp1058[$tmp1063] = $tmp1062;
// line 181
frost$core$Int64** $tmp1064 = *(&local0);
frost$core$Int64 $tmp1065 = (frost$core$Int64) {102};
int64_t $tmp1066 = $tmp1065.value;
frost$core$Int64* $tmp1067 = $tmp1064[$tmp1066];
frost$core$Int64 $tmp1068 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1069 = (frost$core$Int64) {16};
int64_t $tmp1070 = $tmp1068.value;
$tmp1067[$tmp1070] = $tmp1069;
// line 182
frost$core$Int64** $tmp1071 = *(&local0);
frost$core$Int64 $tmp1072 = (frost$core$Int64) {102};
int64_t $tmp1073 = $tmp1072.value;
frost$core$Int64* $tmp1074 = $tmp1071[$tmp1073];
frost$core$Int64 $tmp1075 = (frost$core$Int64) {3};
frost$core$Int64 $tmp1076 = (frost$core$Int64) {3};
int64_t $tmp1077 = $tmp1075.value;
$tmp1074[$tmp1077] = $tmp1076;
// line 183
frost$core$Int64** $tmp1078 = *(&local0);
frost$core$Int64 $tmp1079 = (frost$core$Int64) {102};
int64_t $tmp1080 = $tmp1079.value;
frost$core$Int64* $tmp1081 = $tmp1078[$tmp1080];
frost$core$Int64 $tmp1082 = (frost$core$Int64) {5};
frost$core$Int64 $tmp1083 = (frost$core$Int64) {3};
int64_t $tmp1084 = $tmp1082.value;
$tmp1081[$tmp1084] = $tmp1083;
// line 184
frost$core$Int64** $tmp1085 = *(&local0);
frost$core$Int64 $tmp1086 = (frost$core$Int64) {103};
frost$core$Int64** $tmp1087 = *(&local0);
frost$core$Int64 $tmp1088 = (frost$core$Int64) {0};
int64_t $tmp1089 = $tmp1088.value;
frost$core$Int64* $tmp1090 = $tmp1087[$tmp1089];
int64_t $tmp1091 = $tmp1086.value;
$tmp1085[$tmp1091] = $tmp1090;
// line 185
frost$core$Int64** $tmp1092 = *(&local0);
frost$core$Int64 $tmp1093 = (frost$core$Int64) {104};
frost$core$Int64** $tmp1094 = *(&local0);
frost$core$Int64 $tmp1095 = (frost$core$Int64) {0};
int64_t $tmp1096 = $tmp1095.value;
frost$core$Int64* $tmp1097 = $tmp1094[$tmp1096];
int64_t $tmp1098 = $tmp1093.value;
$tmp1092[$tmp1098] = $tmp1097;
// line 186
frost$core$Int64** $tmp1099 = *(&local0);
frost$core$Int64 $tmp1100 = (frost$core$Int64) {105};
frost$core$Int64** $tmp1101 = *(&local0);
frost$core$Int64 $tmp1102 = (frost$core$Int64) {0};
int64_t $tmp1103 = $tmp1102.value;
frost$core$Int64* $tmp1104 = $tmp1101[$tmp1103];
int64_t $tmp1105 = $tmp1100.value;
$tmp1099[$tmp1105] = $tmp1104;
// line 187
frost$core$Int64** $tmp1106 = *(&local0);
frost$core$Int64 $tmp1107 = (frost$core$Int64) {106};
frost$core$Int64** $tmp1108 = *(&local0);
frost$core$Int64 $tmp1109 = (frost$core$Int64) {0};
int64_t $tmp1110 = $tmp1109.value;
frost$core$Int64* $tmp1111 = $tmp1108[$tmp1110];
int64_t $tmp1112 = $tmp1107.value;
$tmp1106[$tmp1112] = $tmp1111;
// line 188
frost$core$Int64** $tmp1113 = *(&local0);
frost$core$Int64 $tmp1114 = (frost$core$Int64) {107};
frost$core$Int64** $tmp1115 = *(&local0);
frost$core$Int64 $tmp1116 = (frost$core$Int64) {0};
int64_t $tmp1117 = $tmp1116.value;
frost$core$Int64* $tmp1118 = $tmp1115[$tmp1117];
int64_t $tmp1119 = $tmp1114.value;
$tmp1113[$tmp1119] = $tmp1118;
// line 189
frost$core$Int64** $tmp1120 = *(&local0);
frost$core$Int64 $tmp1121 = (frost$core$Int64) {108};
frost$core$Int64 $tmp1122 = (frost$core$Int64) {31};
frost$core$Int64 $tmp1123 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1124 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp1122, $tmp1123);
int64_t $tmp1125 = $tmp1121.value;
$tmp1120[$tmp1125] = $tmp1124;
// line 190
frost$core$Int64** $tmp1126 = *(&local0);
frost$core$Int64 $tmp1127 = (frost$core$Int64) {108};
int64_t $tmp1128 = $tmp1127.value;
frost$core$Int64* $tmp1129 = $tmp1126[$tmp1128];
frost$core$Int64 $tmp1130 = (frost$core$Int64) {3};
frost$core$Int64 $tmp1131 = (frost$core$Int64) {3};
int64_t $tmp1132 = $tmp1130.value;
$tmp1129[$tmp1132] = $tmp1131;
// line 191
frost$core$Int64** $tmp1133 = *(&local0);
frost$core$Int64 $tmp1134 = (frost$core$Int64) {108};
int64_t $tmp1135 = $tmp1134.value;
frost$core$Int64* $tmp1136 = $tmp1133[$tmp1135];
frost$core$Int64 $tmp1137 = (frost$core$Int64) {17};
frost$core$Int64 $tmp1138 = (frost$core$Int64) {18};
int64_t $tmp1139 = $tmp1137.value;
$tmp1136[$tmp1139] = $tmp1138;
// line 192
frost$core$Int64** $tmp1140 = *(&local0);
frost$core$Int64 $tmp1141 = (frost$core$Int64) {108};
int64_t $tmp1142 = $tmp1141.value;
frost$core$Int64* $tmp1143 = $tmp1140[$tmp1142];
frost$core$Int64 $tmp1144 = (frost$core$Int64) {22};
frost$core$Int64 $tmp1145 = (frost$core$Int64) {23};
int64_t $tmp1146 = $tmp1144.value;
$tmp1143[$tmp1146] = $tmp1145;
// line 193
frost$core$Int64** $tmp1147 = *(&local0);
frost$core$Int64 $tmp1148 = (frost$core$Int64) {108};
int64_t $tmp1149 = $tmp1148.value;
frost$core$Int64* $tmp1150 = $tmp1147[$tmp1149];
frost$core$Int64 $tmp1151 = (frost$core$Int64) {23};
frost$core$Int64 $tmp1152 = (frost$core$Int64) {24};
int64_t $tmp1153 = $tmp1151.value;
$tmp1150[$tmp1153] = $tmp1152;
// line 194
frost$core$Int64** $tmp1154 = *(&local0);
frost$core$Int64 $tmp1155 = (frost$core$Int64) {109};
frost$core$Int64** $tmp1156 = *(&local0);
frost$core$Int64 $tmp1157 = (frost$core$Int64) {0};
int64_t $tmp1158 = $tmp1157.value;
frost$core$Int64* $tmp1159 = $tmp1156[$tmp1158];
int64_t $tmp1160 = $tmp1155.value;
$tmp1154[$tmp1160] = $tmp1159;
// line 195
frost$core$Int64** $tmp1161 = *(&local0);
frost$core$Int64 $tmp1162 = (frost$core$Int64) {110};
frost$core$Int64 $tmp1163 = (frost$core$Int64) {31};
frost$core$Int64 $tmp1164 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1165 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp1163, $tmp1164);
int64_t $tmp1166 = $tmp1162.value;
$tmp1161[$tmp1166] = $tmp1165;
// line 196
frost$core$Int64** $tmp1167 = *(&local0);
frost$core$Int64 $tmp1168 = (frost$core$Int64) {110};
int64_t $tmp1169 = $tmp1168.value;
frost$core$Int64* $tmp1170 = $tmp1167[$tmp1169];
frost$core$Int64 $tmp1171 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1172 = (frost$core$Int64) {21};
int64_t $tmp1173 = $tmp1171.value;
$tmp1170[$tmp1173] = $tmp1172;
// line 197
frost$core$Int64** $tmp1174 = *(&local0);
frost$core$Int64 $tmp1175 = (frost$core$Int64) {110};
int64_t $tmp1176 = $tmp1175.value;
frost$core$Int64* $tmp1177 = $tmp1174[$tmp1176];
frost$core$Int64 $tmp1178 = (frost$core$Int64) {3};
frost$core$Int64 $tmp1179 = (frost$core$Int64) {3};
int64_t $tmp1180 = $tmp1178.value;
$tmp1177[$tmp1180] = $tmp1179;
// line 198
frost$core$Int64** $tmp1181 = *(&local0);
frost$core$Int64 $tmp1182 = (frost$core$Int64) {110};
int64_t $tmp1183 = $tmp1182.value;
frost$core$Int64* $tmp1184 = $tmp1181[$tmp1183];
frost$core$Int64 $tmp1185 = (frost$core$Int64) {5};
frost$core$Int64 $tmp1186 = (frost$core$Int64) {3};
int64_t $tmp1187 = $tmp1185.value;
$tmp1184[$tmp1187] = $tmp1186;
// line 199
frost$core$Int64** $tmp1188 = *(&local0);
frost$core$Int64 $tmp1189 = (frost$core$Int64) {111};
frost$core$Int64** $tmp1190 = *(&local0);
frost$core$Int64 $tmp1191 = (frost$core$Int64) {0};
int64_t $tmp1192 = $tmp1191.value;
frost$core$Int64* $tmp1193 = $tmp1190[$tmp1192];
int64_t $tmp1194 = $tmp1189.value;
$tmp1188[$tmp1194] = $tmp1193;
// line 200
frost$core$Int64** $tmp1195 = *(&local0);
frost$core$Int64 $tmp1196 = (frost$core$Int64) {112};
frost$core$Int64** $tmp1197 = *(&local0);
frost$core$Int64 $tmp1198 = (frost$core$Int64) {0};
int64_t $tmp1199 = $tmp1198.value;
frost$core$Int64* $tmp1200 = $tmp1197[$tmp1199];
int64_t $tmp1201 = $tmp1196.value;
$tmp1195[$tmp1201] = $tmp1200;
// line 201
frost$core$Int64** $tmp1202 = *(&local0);
frost$core$Int64 $tmp1203 = (frost$core$Int64) {113};
frost$core$Int64** $tmp1204 = *(&local0);
frost$core$Int64 $tmp1205 = (frost$core$Int64) {0};
int64_t $tmp1206 = $tmp1205.value;
frost$core$Int64* $tmp1207 = $tmp1204[$tmp1206];
int64_t $tmp1208 = $tmp1203.value;
$tmp1202[$tmp1208] = $tmp1207;
// line 202
frost$core$Int64** $tmp1209 = *(&local0);
frost$core$Int64 $tmp1210 = (frost$core$Int64) {114};
frost$core$Int64 $tmp1211 = (frost$core$Int64) {31};
frost$core$Int64 $tmp1212 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1213 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp1211, $tmp1212);
int64_t $tmp1214 = $tmp1210.value;
$tmp1209[$tmp1214] = $tmp1213;
// line 203
frost$core$Int64** $tmp1215 = *(&local0);
frost$core$Int64 $tmp1216 = (frost$core$Int64) {114};
int64_t $tmp1217 = $tmp1216.value;
frost$core$Int64* $tmp1218 = $tmp1215[$tmp1217];
frost$core$Int64 $tmp1219 = (frost$core$Int64) {3};
frost$core$Int64 $tmp1220 = (frost$core$Int64) {3};
int64_t $tmp1221 = $tmp1219.value;
$tmp1218[$tmp1221] = $tmp1220;
// line 204
frost$core$Int64** $tmp1222 = *(&local0);
frost$core$Int64 $tmp1223 = (frost$core$Int64) {114};
int64_t $tmp1224 = $tmp1223.value;
frost$core$Int64* $tmp1225 = $tmp1222[$tmp1224];
frost$core$Int64 $tmp1226 = (frost$core$Int64) {5};
frost$core$Int64 $tmp1227 = (frost$core$Int64) {3};
int64_t $tmp1228 = $tmp1226.value;
$tmp1225[$tmp1228] = $tmp1227;
// line 205
frost$core$Int64** $tmp1229 = *(&local0);
frost$core$Int64 $tmp1230 = (frost$core$Int64) {114};
int64_t $tmp1231 = $tmp1230.value;
frost$core$Int64* $tmp1232 = $tmp1229[$tmp1231];
frost$core$Int64 $tmp1233 = (frost$core$Int64) {25};
frost$core$Int64 $tmp1234 = (frost$core$Int64) {26};
int64_t $tmp1235 = $tmp1233.value;
$tmp1232[$tmp1235] = $tmp1234;
// line 206
frost$core$Int64** $tmp1236 = *(&local0);
frost$core$Int64 $tmp1237 = (frost$core$Int64) {115};
frost$core$Int64 $tmp1238 = (frost$core$Int64) {31};
frost$core$Int64 $tmp1239 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1240 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp1238, $tmp1239);
int64_t $tmp1241 = $tmp1237.value;
$tmp1236[$tmp1241] = $tmp1240;
// line 207
frost$core$Int64** $tmp1242 = *(&local0);
frost$core$Int64 $tmp1243 = (frost$core$Int64) {115};
int64_t $tmp1244 = $tmp1243.value;
frost$core$Int64* $tmp1245 = $tmp1242[$tmp1244];
frost$core$Int64 $tmp1246 = (frost$core$Int64) {3};
frost$core$Int64 $tmp1247 = (frost$core$Int64) {3};
int64_t $tmp1248 = $tmp1246.value;
$tmp1245[$tmp1248] = $tmp1247;
// line 208
frost$core$Int64** $tmp1249 = *(&local0);
frost$core$Int64 $tmp1250 = (frost$core$Int64) {115};
int64_t $tmp1251 = $tmp1250.value;
frost$core$Int64* $tmp1252 = $tmp1249[$tmp1251];
frost$core$Int64 $tmp1253 = (frost$core$Int64) {18};
frost$core$Int64 $tmp1254 = (frost$core$Int64) {19};
int64_t $tmp1255 = $tmp1253.value;
$tmp1252[$tmp1255] = $tmp1254;
// line 209
frost$core$Int64** $tmp1256 = *(&local0);
frost$core$Int64 $tmp1257 = (frost$core$Int64) {116};
frost$core$Int64 $tmp1258 = (frost$core$Int64) {31};
frost$core$Int64 $tmp1259 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1260 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp1258, $tmp1259);
int64_t $tmp1261 = $tmp1257.value;
$tmp1256[$tmp1261] = $tmp1260;
// line 210
frost$core$Int64** $tmp1262 = *(&local0);
frost$core$Int64 $tmp1263 = (frost$core$Int64) {116};
int64_t $tmp1264 = $tmp1263.value;
frost$core$Int64* $tmp1265 = $tmp1262[$tmp1264];
frost$core$Int64 $tmp1266 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1267 = (frost$core$Int64) {25};
int64_t $tmp1268 = $tmp1266.value;
$tmp1265[$tmp1268] = $tmp1267;
// line 211
frost$core$Int64** $tmp1269 = *(&local0);
frost$core$Int64 $tmp1270 = (frost$core$Int64) {116};
int64_t $tmp1271 = $tmp1270.value;
frost$core$Int64* $tmp1272 = $tmp1269[$tmp1271];
frost$core$Int64 $tmp1273 = (frost$core$Int64) {3};
frost$core$Int64 $tmp1274 = (frost$core$Int64) {3};
int64_t $tmp1275 = $tmp1273.value;
$tmp1272[$tmp1275] = $tmp1274;
// line 212
frost$core$Int64** $tmp1276 = *(&local0);
frost$core$Int64 $tmp1277 = (frost$core$Int64) {116};
int64_t $tmp1278 = $tmp1277.value;
frost$core$Int64* $tmp1279 = $tmp1276[$tmp1278];
frost$core$Int64 $tmp1280 = (frost$core$Int64) {5};
frost$core$Int64 $tmp1281 = (frost$core$Int64) {3};
int64_t $tmp1282 = $tmp1280.value;
$tmp1279[$tmp1282] = $tmp1281;
// line 213
frost$core$Int64** $tmp1283 = *(&local0);
frost$core$Int64 $tmp1284 = (frost$core$Int64) {117};
frost$core$Int64 $tmp1285 = (frost$core$Int64) {31};
frost$core$Int64 $tmp1286 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1287 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp1285, $tmp1286);
int64_t $tmp1288 = $tmp1284.value;
$tmp1283[$tmp1288] = $tmp1287;
// line 214
frost$core$Int64** $tmp1289 = *(&local0);
frost$core$Int64 $tmp1290 = (frost$core$Int64) {117};
int64_t $tmp1291 = $tmp1290.value;
frost$core$Int64* $tmp1292 = $tmp1289[$tmp1291];
frost$core$Int64 $tmp1293 = (frost$core$Int64) {3};
frost$core$Int64 $tmp1294 = (frost$core$Int64) {3};
int64_t $tmp1295 = $tmp1293.value;
$tmp1292[$tmp1295] = $tmp1294;
// line 215
frost$core$Int64** $tmp1296 = *(&local0);
frost$core$Int64 $tmp1297 = (frost$core$Int64) {117};
int64_t $tmp1298 = $tmp1297.value;
frost$core$Int64* $tmp1299 = $tmp1296[$tmp1298];
frost$core$Int64 $tmp1300 = (frost$core$Int64) {21};
frost$core$Int64 $tmp1301 = (frost$core$Int64) {22};
int64_t $tmp1302 = $tmp1300.value;
$tmp1299[$tmp1302] = $tmp1301;
// line 216
frost$core$Int64** $tmp1303 = *(&local0);
frost$core$Int64 $tmp1304 = (frost$core$Int64) {117};
int64_t $tmp1305 = $tmp1304.value;
frost$core$Int64* $tmp1306 = $tmp1303[$tmp1305];
frost$core$Int64 $tmp1307 = (frost$core$Int64) {26};
frost$core$Int64 $tmp1308 = (frost$core$Int64) {27};
int64_t $tmp1309 = $tmp1307.value;
$tmp1306[$tmp1309] = $tmp1308;
// line 217
frost$core$Int64** $tmp1310 = *(&local0);
frost$core$Int64 $tmp1311 = (frost$core$Int64) {118};
frost$core$Int64** $tmp1312 = *(&local0);
frost$core$Int64 $tmp1313 = (frost$core$Int64) {0};
int64_t $tmp1314 = $tmp1313.value;
frost$core$Int64* $tmp1315 = $tmp1312[$tmp1314];
int64_t $tmp1316 = $tmp1311.value;
$tmp1310[$tmp1316] = $tmp1315;
// line 218
frost$core$Int64** $tmp1317 = *(&local0);
frost$core$Int64 $tmp1318 = (frost$core$Int64) {119};
frost$core$Int64** $tmp1319 = *(&local0);
frost$core$Int64 $tmp1320 = (frost$core$Int64) {0};
int64_t $tmp1321 = $tmp1320.value;
frost$core$Int64* $tmp1322 = $tmp1319[$tmp1321];
int64_t $tmp1323 = $tmp1318.value;
$tmp1317[$tmp1323] = $tmp1322;
// line 219
frost$core$Int64** $tmp1324 = *(&local0);
frost$core$Int64 $tmp1325 = (frost$core$Int64) {120};
frost$core$Int64** $tmp1326 = *(&local0);
frost$core$Int64 $tmp1327 = (frost$core$Int64) {0};
int64_t $tmp1328 = $tmp1327.value;
frost$core$Int64* $tmp1329 = $tmp1326[$tmp1328];
int64_t $tmp1330 = $tmp1325.value;
$tmp1324[$tmp1330] = $tmp1329;
// line 220
frost$core$Int64** $tmp1331 = *(&local0);
frost$core$Int64 $tmp1332 = (frost$core$Int64) {121};
frost$core$Int64** $tmp1333 = *(&local0);
frost$core$Int64 $tmp1334 = (frost$core$Int64) {0};
int64_t $tmp1335 = $tmp1334.value;
frost$core$Int64* $tmp1336 = $tmp1333[$tmp1335];
int64_t $tmp1337 = $tmp1332.value;
$tmp1331[$tmp1337] = $tmp1336;
// line 221
frost$core$Int64** $tmp1338 = *(&local0);
frost$core$Int64 $tmp1339 = (frost$core$Int64) {122};
frost$core$Int64** $tmp1340 = *(&local0);
frost$core$Int64 $tmp1341 = (frost$core$Int64) {0};
int64_t $tmp1342 = $tmp1341.value;
frost$core$Int64* $tmp1343 = $tmp1340[$tmp1342];
int64_t $tmp1344 = $tmp1339.value;
$tmp1338[$tmp1344] = $tmp1343;
// line 222
frost$core$Int64** $tmp1345 = *(&local0);
frost$core$Int64 $tmp1346 = (frost$core$Int64) {123};
frost$core$Int64 $tmp1347 = (frost$core$Int64) {31};
frost$core$Int64 $tmp1348 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1349 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp1347, $tmp1348);
int64_t $tmp1350 = $tmp1346.value;
$tmp1345[$tmp1350] = $tmp1349;
// line 223
frost$core$Int64** $tmp1351 = *(&local0);
frost$core$Int64 $tmp1352 = (frost$core$Int64) {123};
int64_t $tmp1353 = $tmp1352.value;
frost$core$Int64* $tmp1354 = $tmp1351[$tmp1353];
frost$core$Int64 $tmp1355 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1356 = (frost$core$Int64) {29};
int64_t $tmp1357 = $tmp1355.value;
$tmp1354[$tmp1357] = $tmp1356;
// line 224
frost$core$Int64** $tmp1358 = *(&local0);
frost$core$Int64 $tmp1359 = (frost$core$Int64) {123};
int64_t $tmp1360 = $tmp1359.value;
frost$core$Int64* $tmp1361 = $tmp1358[$tmp1360];
frost$core$Int64 $tmp1362 = (frost$core$Int64) {3};
frost$core$Int64 $tmp1363 = (frost$core$Int64) {3};
int64_t $tmp1364 = $tmp1362.value;
$tmp1361[$tmp1364] = $tmp1363;
// line 225
frost$core$Int64** $tmp1365 = *(&local0);
frost$core$Int64 $tmp1366 = (frost$core$Int64) {124};
frost$core$Int64** $tmp1367 = *(&local0);
frost$core$Int64 $tmp1368 = (frost$core$Int64) {0};
int64_t $tmp1369 = $tmp1368.value;
frost$core$Int64* $tmp1370 = $tmp1367[$tmp1369];
int64_t $tmp1371 = $tmp1366.value;
$tmp1365[$tmp1371] = $tmp1370;
// line 226
frost$core$Int64** $tmp1372 = *(&local0);
frost$core$Int64 $tmp1373 = (frost$core$Int64) {125};
frost$core$Int64 $tmp1374 = (frost$core$Int64) {31};
frost$core$Int64 $tmp1375 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1376 = org$frostlang$json$Lexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp1374, $tmp1375);
int64_t $tmp1377 = $tmp1373.value;
$tmp1372[$tmp1377] = $tmp1376;
// line 227
frost$core$Int64** $tmp1378 = *(&local0);
frost$core$Int64 $tmp1379 = (frost$core$Int64) {125};
int64_t $tmp1380 = $tmp1379.value;
frost$core$Int64* $tmp1381 = $tmp1378[$tmp1380];
frost$core$Int64 $tmp1382 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1383 = (frost$core$Int64) {30};
int64_t $tmp1384 = $tmp1382.value;
$tmp1381[$tmp1384] = $tmp1383;
// line 228
frost$core$Int64** $tmp1385 = *(&local0);
frost$core$Int64 $tmp1386 = (frost$core$Int64) {125};
int64_t $tmp1387 = $tmp1386.value;
frost$core$Int64* $tmp1388 = $tmp1385[$tmp1387];
frost$core$Int64 $tmp1389 = (frost$core$Int64) {3};
frost$core$Int64 $tmp1390 = (frost$core$Int64) {3};
int64_t $tmp1391 = $tmp1389.value;
$tmp1388[$tmp1391] = $tmp1390;
// line 229
frost$core$Int64** $tmp1392 = *(&local0);
frost$core$Int64 $tmp1393 = (frost$core$Int64) {126};
frost$core$Int64** $tmp1394 = *(&local0);
frost$core$Int64 $tmp1395 = (frost$core$Int64) {0};
int64_t $tmp1396 = $tmp1395.value;
frost$core$Int64* $tmp1397 = $tmp1394[$tmp1396];
int64_t $tmp1398 = $tmp1393.value;
$tmp1392[$tmp1398] = $tmp1397;
// line 230
frost$core$Int64** $tmp1399 = *(&local0);
frost$core$Int64 $tmp1400 = (frost$core$Int64) {127};
frost$core$Int64** $tmp1401 = *(&local0);
frost$core$Int64 $tmp1402 = (frost$core$Int64) {0};
int64_t $tmp1403 = $tmp1402.value;
frost$core$Int64* $tmp1404 = $tmp1401[$tmp1403];
int64_t $tmp1405 = $tmp1400.value;
$tmp1399[$tmp1405] = $tmp1404;
// line 231
frost$core$Int64** $tmp1406 = *(&local0);
frost$core$Int64 $tmp1407 = (frost$core$Int64) {128};
frost$core$Int64** $tmp1408 = *(&local0);
frost$core$Int64 $tmp1409 = (frost$core$Int64) {0};
int64_t $tmp1410 = $tmp1409.value;
frost$core$Int64* $tmp1411 = $tmp1408[$tmp1410];
int64_t $tmp1412 = $tmp1407.value;
$tmp1406[$tmp1412] = $tmp1411;
// line 232
frost$core$Int64** $tmp1413 = *(&local0);
frost$core$Int64 $tmp1414 = (frost$core$Int64) {129};
frost$core$Int64** $tmp1415 = *(&local0);
frost$core$Int64 $tmp1416 = (frost$core$Int64) {0};
int64_t $tmp1417 = $tmp1416.value;
frost$core$Int64* $tmp1418 = $tmp1415[$tmp1417];
int64_t $tmp1419 = $tmp1414.value;
$tmp1413[$tmp1419] = $tmp1418;
// line 233
frost$core$Int64** $tmp1420 = *(&local0);
frost$core$Int64 $tmp1421 = (frost$core$Int64) {130};
frost$core$Int64** $tmp1422 = *(&local0);
frost$core$Int64 $tmp1423 = (frost$core$Int64) {0};
int64_t $tmp1424 = $tmp1423.value;
frost$core$Int64* $tmp1425 = $tmp1422[$tmp1424];
int64_t $tmp1426 = $tmp1421.value;
$tmp1420[$tmp1426] = $tmp1425;
// line 234
frost$core$Int64** $tmp1427 = *(&local0);
frost$core$Int64 $tmp1428 = (frost$core$Int64) {131};
frost$core$Int64** $tmp1429 = *(&local0);
frost$core$Int64 $tmp1430 = (frost$core$Int64) {0};
int64_t $tmp1431 = $tmp1430.value;
frost$core$Int64* $tmp1432 = $tmp1429[$tmp1431];
int64_t $tmp1433 = $tmp1428.value;
$tmp1427[$tmp1433] = $tmp1432;
// line 235
frost$core$Int64** $tmp1434 = *(&local0);
frost$core$Int64 $tmp1435 = (frost$core$Int64) {132};
frost$core$Int64** $tmp1436 = *(&local0);
frost$core$Int64 $tmp1437 = (frost$core$Int64) {0};
int64_t $tmp1438 = $tmp1437.value;
frost$core$Int64* $tmp1439 = $tmp1436[$tmp1438];
int64_t $tmp1440 = $tmp1435.value;
$tmp1434[$tmp1440] = $tmp1439;
// line 236
frost$core$Int64** $tmp1441 = *(&local0);
frost$core$Int64 $tmp1442 = (frost$core$Int64) {133};
frost$core$Int64** $tmp1443 = *(&local0);
frost$core$Int64 $tmp1444 = (frost$core$Int64) {0};
int64_t $tmp1445 = $tmp1444.value;
frost$core$Int64* $tmp1446 = $tmp1443[$tmp1445];
int64_t $tmp1447 = $tmp1442.value;
$tmp1441[$tmp1447] = $tmp1446;
// line 237
frost$core$Int64** $tmp1448 = *(&local0);
frost$core$Int64 $tmp1449 = (frost$core$Int64) {134};
frost$core$Int64** $tmp1450 = *(&local0);
frost$core$Int64 $tmp1451 = (frost$core$Int64) {0};
int64_t $tmp1452 = $tmp1451.value;
frost$core$Int64* $tmp1453 = $tmp1450[$tmp1452];
int64_t $tmp1454 = $tmp1449.value;
$tmp1448[$tmp1454] = $tmp1453;
// line 238
frost$core$Int64** $tmp1455 = *(&local0);
frost$core$Int64 $tmp1456 = (frost$core$Int64) {135};
frost$core$Int64** $tmp1457 = *(&local0);
frost$core$Int64 $tmp1458 = (frost$core$Int64) {0};
int64_t $tmp1459 = $tmp1458.value;
frost$core$Int64* $tmp1460 = $tmp1457[$tmp1459];
int64_t $tmp1461 = $tmp1456.value;
$tmp1455[$tmp1461] = $tmp1460;
// line 239
frost$core$Int64** $tmp1462 = *(&local0);
frost$core$Int64 $tmp1463 = (frost$core$Int64) {136};
frost$core$Int64** $tmp1464 = *(&local0);
frost$core$Int64 $tmp1465 = (frost$core$Int64) {0};
int64_t $tmp1466 = $tmp1465.value;
frost$core$Int64* $tmp1467 = $tmp1464[$tmp1466];
int64_t $tmp1468 = $tmp1463.value;
$tmp1462[$tmp1468] = $tmp1467;
// line 240
frost$core$Int64** $tmp1469 = *(&local0);
frost$core$Int64 $tmp1470 = (frost$core$Int64) {137};
frost$core$Int64** $tmp1471 = *(&local0);
frost$core$Int64 $tmp1472 = (frost$core$Int64) {0};
int64_t $tmp1473 = $tmp1472.value;
frost$core$Int64* $tmp1474 = $tmp1471[$tmp1473];
int64_t $tmp1475 = $tmp1470.value;
$tmp1469[$tmp1475] = $tmp1474;
// line 241
frost$core$Int64** $tmp1476 = *(&local0);
frost$core$Int64 $tmp1477 = (frost$core$Int64) {138};
frost$core$Int64** $tmp1478 = *(&local0);
frost$core$Int64 $tmp1479 = (frost$core$Int64) {0};
int64_t $tmp1480 = $tmp1479.value;
frost$core$Int64* $tmp1481 = $tmp1478[$tmp1480];
int64_t $tmp1482 = $tmp1477.value;
$tmp1476[$tmp1482] = $tmp1481;
// line 242
frost$core$Int64** $tmp1483 = *(&local0);
frost$core$Int64 $tmp1484 = (frost$core$Int64) {139};
frost$core$Int64** $tmp1485 = *(&local0);
frost$core$Int64 $tmp1486 = (frost$core$Int64) {0};
int64_t $tmp1487 = $tmp1486.value;
frost$core$Int64* $tmp1488 = $tmp1485[$tmp1487];
int64_t $tmp1489 = $tmp1484.value;
$tmp1483[$tmp1489] = $tmp1488;
// line 243
frost$core$Int64** $tmp1490 = *(&local0);
frost$core$Int64 $tmp1491 = (frost$core$Int64) {140};
frost$core$Int64** $tmp1492 = *(&local0);
frost$core$Int64 $tmp1493 = (frost$core$Int64) {0};
int64_t $tmp1494 = $tmp1493.value;
frost$core$Int64* $tmp1495 = $tmp1492[$tmp1494];
int64_t $tmp1496 = $tmp1491.value;
$tmp1490[$tmp1496] = $tmp1495;
// line 244
frost$core$Int64** $tmp1497 = *(&local0);
frost$core$Int64 $tmp1498 = (frost$core$Int64) {141};
frost$core$Int64** $tmp1499 = *(&local0);
frost$core$Int64 $tmp1500 = (frost$core$Int64) {0};
int64_t $tmp1501 = $tmp1500.value;
frost$core$Int64* $tmp1502 = $tmp1499[$tmp1501];
int64_t $tmp1503 = $tmp1498.value;
$tmp1497[$tmp1503] = $tmp1502;
// line 245
frost$core$Int64** $tmp1504 = *(&local0);
frost$core$Int64 $tmp1505 = (frost$core$Int64) {142};
frost$core$Int64** $tmp1506 = *(&local0);
frost$core$Int64 $tmp1507 = (frost$core$Int64) {0};
int64_t $tmp1508 = $tmp1507.value;
frost$core$Int64* $tmp1509 = $tmp1506[$tmp1508];
int64_t $tmp1510 = $tmp1505.value;
$tmp1504[$tmp1510] = $tmp1509;
// line 246
frost$core$Int64** $tmp1511 = *(&local0);
frost$core$Int64 $tmp1512 = (frost$core$Int64) {143};
frost$core$Int64** $tmp1513 = *(&local0);
frost$core$Int64 $tmp1514 = (frost$core$Int64) {0};
int64_t $tmp1515 = $tmp1514.value;
frost$core$Int64* $tmp1516 = $tmp1513[$tmp1515];
int64_t $tmp1517 = $tmp1512.value;
$tmp1511[$tmp1517] = $tmp1516;
// line 247
frost$core$Int64** $tmp1518 = *(&local0);
frost$core$Int64 $tmp1519 = (frost$core$Int64) {144};
frost$core$Int64** $tmp1520 = *(&local0);
frost$core$Int64 $tmp1521 = (frost$core$Int64) {0};
int64_t $tmp1522 = $tmp1521.value;
frost$core$Int64* $tmp1523 = $tmp1520[$tmp1522];
int64_t $tmp1524 = $tmp1519.value;
$tmp1518[$tmp1524] = $tmp1523;
// line 248
frost$core$Int64** $tmp1525 = *(&local0);
frost$core$Int64 $tmp1526 = (frost$core$Int64) {145};
frost$core$Int64** $tmp1527 = *(&local0);
frost$core$Int64 $tmp1528 = (frost$core$Int64) {0};
int64_t $tmp1529 = $tmp1528.value;
frost$core$Int64* $tmp1530 = $tmp1527[$tmp1529];
int64_t $tmp1531 = $tmp1526.value;
$tmp1525[$tmp1531] = $tmp1530;
// line 249
frost$core$Int64** $tmp1532 = *(&local0);
frost$core$Int64 $tmp1533 = (frost$core$Int64) {146};
frost$core$Int64** $tmp1534 = *(&local0);
frost$core$Int64 $tmp1535 = (frost$core$Int64) {0};
int64_t $tmp1536 = $tmp1535.value;
frost$core$Int64* $tmp1537 = $tmp1534[$tmp1536];
int64_t $tmp1538 = $tmp1533.value;
$tmp1532[$tmp1538] = $tmp1537;
// line 250
frost$core$Int64** $tmp1539 = *(&local0);
frost$core$Int64 $tmp1540 = (frost$core$Int64) {147};
frost$core$Int64** $tmp1541 = *(&local0);
frost$core$Int64 $tmp1542 = (frost$core$Int64) {0};
int64_t $tmp1543 = $tmp1542.value;
frost$core$Int64* $tmp1544 = $tmp1541[$tmp1543];
int64_t $tmp1545 = $tmp1540.value;
$tmp1539[$tmp1545] = $tmp1544;
// line 251
frost$core$Int64** $tmp1546 = *(&local0);
frost$core$Int64 $tmp1547 = (frost$core$Int64) {148};
frost$core$Int64** $tmp1548 = *(&local0);
frost$core$Int64 $tmp1549 = (frost$core$Int64) {0};
int64_t $tmp1550 = $tmp1549.value;
frost$core$Int64* $tmp1551 = $tmp1548[$tmp1550];
int64_t $tmp1552 = $tmp1547.value;
$tmp1546[$tmp1552] = $tmp1551;
// line 252
frost$core$Int64** $tmp1553 = *(&local0);
frost$core$Int64 $tmp1554 = (frost$core$Int64) {149};
frost$core$Int64** $tmp1555 = *(&local0);
frost$core$Int64 $tmp1556 = (frost$core$Int64) {0};
int64_t $tmp1557 = $tmp1556.value;
frost$core$Int64* $tmp1558 = $tmp1555[$tmp1557];
int64_t $tmp1559 = $tmp1554.value;
$tmp1553[$tmp1559] = $tmp1558;
// line 253
frost$core$Int64** $tmp1560 = *(&local0);
frost$core$Int64 $tmp1561 = (frost$core$Int64) {150};
frost$core$Int64** $tmp1562 = *(&local0);
frost$core$Int64 $tmp1563 = (frost$core$Int64) {0};
int64_t $tmp1564 = $tmp1563.value;
frost$core$Int64* $tmp1565 = $tmp1562[$tmp1564];
int64_t $tmp1566 = $tmp1561.value;
$tmp1560[$tmp1566] = $tmp1565;
// line 254
frost$core$Int64** $tmp1567 = *(&local0);
frost$core$Int64 $tmp1568 = (frost$core$Int64) {151};
frost$core$Int64** $tmp1569 = *(&local0);
frost$core$Int64 $tmp1570 = (frost$core$Int64) {0};
int64_t $tmp1571 = $tmp1570.value;
frost$core$Int64* $tmp1572 = $tmp1569[$tmp1571];
int64_t $tmp1573 = $tmp1568.value;
$tmp1567[$tmp1573] = $tmp1572;
// line 255
frost$core$Int64** $tmp1574 = *(&local0);
frost$core$Int64 $tmp1575 = (frost$core$Int64) {152};
frost$core$Int64** $tmp1576 = *(&local0);
frost$core$Int64 $tmp1577 = (frost$core$Int64) {0};
int64_t $tmp1578 = $tmp1577.value;
frost$core$Int64* $tmp1579 = $tmp1576[$tmp1578];
int64_t $tmp1580 = $tmp1575.value;
$tmp1574[$tmp1580] = $tmp1579;
// line 256
frost$core$Int64** $tmp1581 = *(&local0);
frost$core$Int64 $tmp1582 = (frost$core$Int64) {153};
frost$core$Int64** $tmp1583 = *(&local0);
frost$core$Int64 $tmp1584 = (frost$core$Int64) {0};
int64_t $tmp1585 = $tmp1584.value;
frost$core$Int64* $tmp1586 = $tmp1583[$tmp1585];
int64_t $tmp1587 = $tmp1582.value;
$tmp1581[$tmp1587] = $tmp1586;
// line 257
frost$core$Int64** $tmp1588 = *(&local0);
frost$core$Int64 $tmp1589 = (frost$core$Int64) {154};
frost$core$Int64** $tmp1590 = *(&local0);
frost$core$Int64 $tmp1591 = (frost$core$Int64) {0};
int64_t $tmp1592 = $tmp1591.value;
frost$core$Int64* $tmp1593 = $tmp1590[$tmp1592];
int64_t $tmp1594 = $tmp1589.value;
$tmp1588[$tmp1594] = $tmp1593;
// line 258
frost$core$Int64** $tmp1595 = *(&local0);
frost$core$Int64 $tmp1596 = (frost$core$Int64) {155};
frost$core$Int64** $tmp1597 = *(&local0);
frost$core$Int64 $tmp1598 = (frost$core$Int64) {0};
int64_t $tmp1599 = $tmp1598.value;
frost$core$Int64* $tmp1600 = $tmp1597[$tmp1599];
int64_t $tmp1601 = $tmp1596.value;
$tmp1595[$tmp1601] = $tmp1600;
// line 259
frost$core$Int64** $tmp1602 = *(&local0);
frost$core$Int64 $tmp1603 = (frost$core$Int64) {156};
frost$core$Int64** $tmp1604 = *(&local0);
frost$core$Int64 $tmp1605 = (frost$core$Int64) {0};
int64_t $tmp1606 = $tmp1605.value;
frost$core$Int64* $tmp1607 = $tmp1604[$tmp1606];
int64_t $tmp1608 = $tmp1603.value;
$tmp1602[$tmp1608] = $tmp1607;
// line 260
frost$core$Int64** $tmp1609 = *(&local0);
frost$core$Int64 $tmp1610 = (frost$core$Int64) {157};
frost$core$Int64** $tmp1611 = *(&local0);
frost$core$Int64 $tmp1612 = (frost$core$Int64) {0};
int64_t $tmp1613 = $tmp1612.value;
frost$core$Int64* $tmp1614 = $tmp1611[$tmp1613];
int64_t $tmp1615 = $tmp1610.value;
$tmp1609[$tmp1615] = $tmp1614;
// line 261
frost$core$Int64** $tmp1616 = *(&local0);
frost$core$Int64 $tmp1617 = (frost$core$Int64) {158};
frost$core$Int64** $tmp1618 = *(&local0);
frost$core$Int64 $tmp1619 = (frost$core$Int64) {0};
int64_t $tmp1620 = $tmp1619.value;
frost$core$Int64* $tmp1621 = $tmp1618[$tmp1620];
int64_t $tmp1622 = $tmp1617.value;
$tmp1616[$tmp1622] = $tmp1621;
// line 262
frost$core$Int64** $tmp1623 = *(&local0);
frost$core$Int64 $tmp1624 = (frost$core$Int64) {159};
frost$core$Int64** $tmp1625 = *(&local0);
frost$core$Int64 $tmp1626 = (frost$core$Int64) {0};
int64_t $tmp1627 = $tmp1626.value;
frost$core$Int64* $tmp1628 = $tmp1625[$tmp1627];
int64_t $tmp1629 = $tmp1624.value;
$tmp1623[$tmp1629] = $tmp1628;
// line 263
frost$core$Int64** $tmp1630 = *(&local0);
frost$core$Int64 $tmp1631 = (frost$core$Int64) {160};
frost$core$Int64** $tmp1632 = *(&local0);
frost$core$Int64 $tmp1633 = (frost$core$Int64) {0};
int64_t $tmp1634 = $tmp1633.value;
frost$core$Int64* $tmp1635 = $tmp1632[$tmp1634];
int64_t $tmp1636 = $tmp1631.value;
$tmp1630[$tmp1636] = $tmp1635;
// line 264
frost$core$Int64** $tmp1637 = *(&local0);
frost$core$Int64 $tmp1638 = (frost$core$Int64) {161};
frost$core$Int64** $tmp1639 = *(&local0);
frost$core$Int64 $tmp1640 = (frost$core$Int64) {0};
int64_t $tmp1641 = $tmp1640.value;
frost$core$Int64* $tmp1642 = $tmp1639[$tmp1641];
int64_t $tmp1643 = $tmp1638.value;
$tmp1637[$tmp1643] = $tmp1642;
// line 265
frost$core$Int64** $tmp1644 = *(&local0);
frost$core$Int64 $tmp1645 = (frost$core$Int64) {162};
frost$core$Int64** $tmp1646 = *(&local0);
frost$core$Int64 $tmp1647 = (frost$core$Int64) {0};
int64_t $tmp1648 = $tmp1647.value;
frost$core$Int64* $tmp1649 = $tmp1646[$tmp1648];
int64_t $tmp1650 = $tmp1645.value;
$tmp1644[$tmp1650] = $tmp1649;
// line 266
frost$core$Int64** $tmp1651 = *(&local0);
frost$core$Int64 $tmp1652 = (frost$core$Int64) {163};
frost$core$Int64** $tmp1653 = *(&local0);
frost$core$Int64 $tmp1654 = (frost$core$Int64) {0};
int64_t $tmp1655 = $tmp1654.value;
frost$core$Int64* $tmp1656 = $tmp1653[$tmp1655];
int64_t $tmp1657 = $tmp1652.value;
$tmp1651[$tmp1657] = $tmp1656;
// line 267
frost$core$Int64** $tmp1658 = *(&local0);
frost$core$Int64 $tmp1659 = (frost$core$Int64) {164};
frost$core$Int64** $tmp1660 = *(&local0);
frost$core$Int64 $tmp1661 = (frost$core$Int64) {0};
int64_t $tmp1662 = $tmp1661.value;
frost$core$Int64* $tmp1663 = $tmp1660[$tmp1662];
int64_t $tmp1664 = $tmp1659.value;
$tmp1658[$tmp1664] = $tmp1663;
// line 268
frost$core$Int64** $tmp1665 = *(&local0);
frost$core$Int64 $tmp1666 = (frost$core$Int64) {165};
frost$core$Int64** $tmp1667 = *(&local0);
frost$core$Int64 $tmp1668 = (frost$core$Int64) {0};
int64_t $tmp1669 = $tmp1668.value;
frost$core$Int64* $tmp1670 = $tmp1667[$tmp1669];
int64_t $tmp1671 = $tmp1666.value;
$tmp1665[$tmp1671] = $tmp1670;
// line 269
frost$core$Int64** $tmp1672 = *(&local0);
frost$core$Int64 $tmp1673 = (frost$core$Int64) {166};
frost$core$Int64** $tmp1674 = *(&local0);
frost$core$Int64 $tmp1675 = (frost$core$Int64) {0};
int64_t $tmp1676 = $tmp1675.value;
frost$core$Int64* $tmp1677 = $tmp1674[$tmp1676];
int64_t $tmp1678 = $tmp1673.value;
$tmp1672[$tmp1678] = $tmp1677;
// line 270
frost$core$Int64** $tmp1679 = *(&local0);
frost$core$Int64 $tmp1680 = (frost$core$Int64) {167};
frost$core$Int64** $tmp1681 = *(&local0);
frost$core$Int64 $tmp1682 = (frost$core$Int64) {0};
int64_t $tmp1683 = $tmp1682.value;
frost$core$Int64* $tmp1684 = $tmp1681[$tmp1683];
int64_t $tmp1685 = $tmp1680.value;
$tmp1679[$tmp1685] = $tmp1684;
// line 271
frost$core$Int64** $tmp1686 = *(&local0);
frost$core$Int64 $tmp1687 = (frost$core$Int64) {168};
frost$core$Int64** $tmp1688 = *(&local0);
frost$core$Int64 $tmp1689 = (frost$core$Int64) {0};
int64_t $tmp1690 = $tmp1689.value;
frost$core$Int64* $tmp1691 = $tmp1688[$tmp1690];
int64_t $tmp1692 = $tmp1687.value;
$tmp1686[$tmp1692] = $tmp1691;
// line 272
frost$core$Int64** $tmp1693 = *(&local0);
frost$core$Int64 $tmp1694 = (frost$core$Int64) {169};
frost$core$Int64** $tmp1695 = *(&local0);
frost$core$Int64 $tmp1696 = (frost$core$Int64) {0};
int64_t $tmp1697 = $tmp1696.value;
frost$core$Int64* $tmp1698 = $tmp1695[$tmp1697];
int64_t $tmp1699 = $tmp1694.value;
$tmp1693[$tmp1699] = $tmp1698;
// line 273
frost$core$Int64** $tmp1700 = *(&local0);
frost$core$Int64 $tmp1701 = (frost$core$Int64) {170};
frost$core$Int64** $tmp1702 = *(&local0);
frost$core$Int64 $tmp1703 = (frost$core$Int64) {0};
int64_t $tmp1704 = $tmp1703.value;
frost$core$Int64* $tmp1705 = $tmp1702[$tmp1704];
int64_t $tmp1706 = $tmp1701.value;
$tmp1700[$tmp1706] = $tmp1705;
// line 274
frost$core$Int64** $tmp1707 = *(&local0);
frost$core$Int64 $tmp1708 = (frost$core$Int64) {171};
frost$core$Int64** $tmp1709 = *(&local0);
frost$core$Int64 $tmp1710 = (frost$core$Int64) {0};
int64_t $tmp1711 = $tmp1710.value;
frost$core$Int64* $tmp1712 = $tmp1709[$tmp1711];
int64_t $tmp1713 = $tmp1708.value;
$tmp1707[$tmp1713] = $tmp1712;
// line 275
frost$core$Int64** $tmp1714 = *(&local0);
frost$core$Int64 $tmp1715 = (frost$core$Int64) {172};
frost$core$Int64** $tmp1716 = *(&local0);
frost$core$Int64 $tmp1717 = (frost$core$Int64) {0};
int64_t $tmp1718 = $tmp1717.value;
frost$core$Int64* $tmp1719 = $tmp1716[$tmp1718];
int64_t $tmp1720 = $tmp1715.value;
$tmp1714[$tmp1720] = $tmp1719;
// line 276
frost$core$Int64** $tmp1721 = *(&local0);
frost$core$Int64 $tmp1722 = (frost$core$Int64) {173};
frost$core$Int64** $tmp1723 = *(&local0);
frost$core$Int64 $tmp1724 = (frost$core$Int64) {0};
int64_t $tmp1725 = $tmp1724.value;
frost$core$Int64* $tmp1726 = $tmp1723[$tmp1725];
int64_t $tmp1727 = $tmp1722.value;
$tmp1721[$tmp1727] = $tmp1726;
// line 277
frost$core$Int64** $tmp1728 = *(&local0);
frost$core$Int64 $tmp1729 = (frost$core$Int64) {174};
frost$core$Int64** $tmp1730 = *(&local0);
frost$core$Int64 $tmp1731 = (frost$core$Int64) {0};
int64_t $tmp1732 = $tmp1731.value;
frost$core$Int64* $tmp1733 = $tmp1730[$tmp1732];
int64_t $tmp1734 = $tmp1729.value;
$tmp1728[$tmp1734] = $tmp1733;
// line 278
frost$core$Int64** $tmp1735 = *(&local0);
frost$core$Int64 $tmp1736 = (frost$core$Int64) {175};
frost$core$Int64** $tmp1737 = *(&local0);
frost$core$Int64 $tmp1738 = (frost$core$Int64) {0};
int64_t $tmp1739 = $tmp1738.value;
frost$core$Int64* $tmp1740 = $tmp1737[$tmp1739];
int64_t $tmp1741 = $tmp1736.value;
$tmp1735[$tmp1741] = $tmp1740;
// line 279
frost$core$Int64** $tmp1742 = *(&local0);
frost$core$Int64 $tmp1743 = (frost$core$Int64) {176};
frost$core$Int64** $tmp1744 = *(&local0);
frost$core$Int64 $tmp1745 = (frost$core$Int64) {0};
int64_t $tmp1746 = $tmp1745.value;
frost$core$Int64* $tmp1747 = $tmp1744[$tmp1746];
int64_t $tmp1748 = $tmp1743.value;
$tmp1742[$tmp1748] = $tmp1747;
// line 280
frost$core$Int64** $tmp1749 = *(&local0);
frost$core$Int64 $tmp1750 = (frost$core$Int64) {177};
frost$core$Int64** $tmp1751 = *(&local0);
frost$core$Int64 $tmp1752 = (frost$core$Int64) {0};
int64_t $tmp1753 = $tmp1752.value;
frost$core$Int64* $tmp1754 = $tmp1751[$tmp1753];
int64_t $tmp1755 = $tmp1750.value;
$tmp1749[$tmp1755] = $tmp1754;
// line 281
frost$core$Int64** $tmp1756 = *(&local0);
frost$core$Int64 $tmp1757 = (frost$core$Int64) {178};
frost$core$Int64** $tmp1758 = *(&local0);
frost$core$Int64 $tmp1759 = (frost$core$Int64) {0};
int64_t $tmp1760 = $tmp1759.value;
frost$core$Int64* $tmp1761 = $tmp1758[$tmp1760];
int64_t $tmp1762 = $tmp1757.value;
$tmp1756[$tmp1762] = $tmp1761;
// line 282
frost$core$Int64** $tmp1763 = *(&local0);
frost$core$Int64 $tmp1764 = (frost$core$Int64) {179};
frost$core$Int64** $tmp1765 = *(&local0);
frost$core$Int64 $tmp1766 = (frost$core$Int64) {0};
int64_t $tmp1767 = $tmp1766.value;
frost$core$Int64* $tmp1768 = $tmp1765[$tmp1767];
int64_t $tmp1769 = $tmp1764.value;
$tmp1763[$tmp1769] = $tmp1768;
// line 283
frost$core$Int64** $tmp1770 = *(&local0);
frost$core$Int64 $tmp1771 = (frost$core$Int64) {180};
frost$core$Int64** $tmp1772 = *(&local0);
frost$core$Int64 $tmp1773 = (frost$core$Int64) {0};
int64_t $tmp1774 = $tmp1773.value;
frost$core$Int64* $tmp1775 = $tmp1772[$tmp1774];
int64_t $tmp1776 = $tmp1771.value;
$tmp1770[$tmp1776] = $tmp1775;
// line 284
frost$core$Int64** $tmp1777 = *(&local0);
frost$core$Int64 $tmp1778 = (frost$core$Int64) {181};
frost$core$Int64** $tmp1779 = *(&local0);
frost$core$Int64 $tmp1780 = (frost$core$Int64) {0};
int64_t $tmp1781 = $tmp1780.value;
frost$core$Int64* $tmp1782 = $tmp1779[$tmp1781];
int64_t $tmp1783 = $tmp1778.value;
$tmp1777[$tmp1783] = $tmp1782;
// line 285
frost$core$Int64** $tmp1784 = *(&local0);
frost$core$Int64 $tmp1785 = (frost$core$Int64) {182};
frost$core$Int64** $tmp1786 = *(&local0);
frost$core$Int64 $tmp1787 = (frost$core$Int64) {0};
int64_t $tmp1788 = $tmp1787.value;
frost$core$Int64* $tmp1789 = $tmp1786[$tmp1788];
int64_t $tmp1790 = $tmp1785.value;
$tmp1784[$tmp1790] = $tmp1789;
// line 286
frost$core$Int64** $tmp1791 = *(&local0);
frost$core$Int64 $tmp1792 = (frost$core$Int64) {183};
frost$core$Int64** $tmp1793 = *(&local0);
frost$core$Int64 $tmp1794 = (frost$core$Int64) {0};
int64_t $tmp1795 = $tmp1794.value;
frost$core$Int64* $tmp1796 = $tmp1793[$tmp1795];
int64_t $tmp1797 = $tmp1792.value;
$tmp1791[$tmp1797] = $tmp1796;
// line 287
frost$core$Int64** $tmp1798 = *(&local0);
frost$core$Int64 $tmp1799 = (frost$core$Int64) {184};
frost$core$Int64** $tmp1800 = *(&local0);
frost$core$Int64 $tmp1801 = (frost$core$Int64) {0};
int64_t $tmp1802 = $tmp1801.value;
frost$core$Int64* $tmp1803 = $tmp1800[$tmp1802];
int64_t $tmp1804 = $tmp1799.value;
$tmp1798[$tmp1804] = $tmp1803;
// line 288
frost$core$Int64** $tmp1805 = *(&local0);
frost$core$Int64 $tmp1806 = (frost$core$Int64) {185};
frost$core$Int64** $tmp1807 = *(&local0);
frost$core$Int64 $tmp1808 = (frost$core$Int64) {0};
int64_t $tmp1809 = $tmp1808.value;
frost$core$Int64* $tmp1810 = $tmp1807[$tmp1809];
int64_t $tmp1811 = $tmp1806.value;
$tmp1805[$tmp1811] = $tmp1810;
// line 289
frost$core$Int64** $tmp1812 = *(&local0);
frost$core$Int64 $tmp1813 = (frost$core$Int64) {186};
frost$core$Int64** $tmp1814 = *(&local0);
frost$core$Int64 $tmp1815 = (frost$core$Int64) {0};
int64_t $tmp1816 = $tmp1815.value;
frost$core$Int64* $tmp1817 = $tmp1814[$tmp1816];
int64_t $tmp1818 = $tmp1813.value;
$tmp1812[$tmp1818] = $tmp1817;
// line 290
frost$core$Int64** $tmp1819 = *(&local0);
frost$core$Int64 $tmp1820 = (frost$core$Int64) {187};
frost$core$Int64** $tmp1821 = *(&local0);
frost$core$Int64 $tmp1822 = (frost$core$Int64) {0};
int64_t $tmp1823 = $tmp1822.value;
frost$core$Int64* $tmp1824 = $tmp1821[$tmp1823];
int64_t $tmp1825 = $tmp1820.value;
$tmp1819[$tmp1825] = $tmp1824;
// line 291
frost$core$Int64** $tmp1826 = *(&local0);
frost$core$Int64 $tmp1827 = (frost$core$Int64) {188};
frost$core$Int64** $tmp1828 = *(&local0);
frost$core$Int64 $tmp1829 = (frost$core$Int64) {0};
int64_t $tmp1830 = $tmp1829.value;
frost$core$Int64* $tmp1831 = $tmp1828[$tmp1830];
int64_t $tmp1832 = $tmp1827.value;
$tmp1826[$tmp1832] = $tmp1831;
// line 292
frost$core$Int64** $tmp1833 = *(&local0);
frost$core$Int64 $tmp1834 = (frost$core$Int64) {189};
frost$core$Int64** $tmp1835 = *(&local0);
frost$core$Int64 $tmp1836 = (frost$core$Int64) {0};
int64_t $tmp1837 = $tmp1836.value;
frost$core$Int64* $tmp1838 = $tmp1835[$tmp1837];
int64_t $tmp1839 = $tmp1834.value;
$tmp1833[$tmp1839] = $tmp1838;
// line 293
frost$core$Int64** $tmp1840 = *(&local0);
frost$core$Int64 $tmp1841 = (frost$core$Int64) {190};
frost$core$Int64** $tmp1842 = *(&local0);
frost$core$Int64 $tmp1843 = (frost$core$Int64) {0};
int64_t $tmp1844 = $tmp1843.value;
frost$core$Int64* $tmp1845 = $tmp1842[$tmp1844];
int64_t $tmp1846 = $tmp1841.value;
$tmp1840[$tmp1846] = $tmp1845;
// line 294
frost$core$Int64** $tmp1847 = *(&local0);
frost$core$Int64 $tmp1848 = (frost$core$Int64) {191};
frost$core$Int64** $tmp1849 = *(&local0);
frost$core$Int64 $tmp1850 = (frost$core$Int64) {0};
int64_t $tmp1851 = $tmp1850.value;
frost$core$Int64* $tmp1852 = $tmp1849[$tmp1851];
int64_t $tmp1853 = $tmp1848.value;
$tmp1847[$tmp1853] = $tmp1852;
// line 295
frost$core$Int64** $tmp1854 = *(&local0);
frost$core$Int64 $tmp1855 = (frost$core$Int64) {192};
frost$core$Int64** $tmp1856 = *(&local0);
frost$core$Int64 $tmp1857 = (frost$core$Int64) {0};
int64_t $tmp1858 = $tmp1857.value;
frost$core$Int64* $tmp1859 = $tmp1856[$tmp1858];
int64_t $tmp1860 = $tmp1855.value;
$tmp1854[$tmp1860] = $tmp1859;
// line 296
frost$core$Int64** $tmp1861 = *(&local0);
frost$core$Int64 $tmp1862 = (frost$core$Int64) {193};
frost$core$Int64** $tmp1863 = *(&local0);
frost$core$Int64 $tmp1864 = (frost$core$Int64) {0};
int64_t $tmp1865 = $tmp1864.value;
frost$core$Int64* $tmp1866 = $tmp1863[$tmp1865];
int64_t $tmp1867 = $tmp1862.value;
$tmp1861[$tmp1867] = $tmp1866;
// line 297
frost$core$Int64** $tmp1868 = *(&local0);
frost$core$Int64 $tmp1869 = (frost$core$Int64) {194};
frost$core$Int64** $tmp1870 = *(&local0);
frost$core$Int64 $tmp1871 = (frost$core$Int64) {0};
int64_t $tmp1872 = $tmp1871.value;
frost$core$Int64* $tmp1873 = $tmp1870[$tmp1872];
int64_t $tmp1874 = $tmp1869.value;
$tmp1868[$tmp1874] = $tmp1873;
// line 298
frost$core$Int64** $tmp1875 = *(&local0);
frost$core$Int64 $tmp1876 = (frost$core$Int64) {195};
frost$core$Int64** $tmp1877 = *(&local0);
frost$core$Int64 $tmp1878 = (frost$core$Int64) {0};
int64_t $tmp1879 = $tmp1878.value;
frost$core$Int64* $tmp1880 = $tmp1877[$tmp1879];
int64_t $tmp1881 = $tmp1876.value;
$tmp1875[$tmp1881] = $tmp1880;
// line 299
frost$core$Int64** $tmp1882 = *(&local0);
frost$core$Int64 $tmp1883 = (frost$core$Int64) {196};
frost$core$Int64** $tmp1884 = *(&local0);
frost$core$Int64 $tmp1885 = (frost$core$Int64) {0};
int64_t $tmp1886 = $tmp1885.value;
frost$core$Int64* $tmp1887 = $tmp1884[$tmp1886];
int64_t $tmp1888 = $tmp1883.value;
$tmp1882[$tmp1888] = $tmp1887;
// line 300
frost$core$Int64** $tmp1889 = *(&local0);
frost$core$Int64 $tmp1890 = (frost$core$Int64) {197};
frost$core$Int64** $tmp1891 = *(&local0);
frost$core$Int64 $tmp1892 = (frost$core$Int64) {0};
int64_t $tmp1893 = $tmp1892.value;
frost$core$Int64* $tmp1894 = $tmp1891[$tmp1893];
int64_t $tmp1895 = $tmp1890.value;
$tmp1889[$tmp1895] = $tmp1894;
// line 301
frost$core$Int64** $tmp1896 = *(&local0);
frost$core$Int64 $tmp1897 = (frost$core$Int64) {198};
frost$core$Int64** $tmp1898 = *(&local0);
frost$core$Int64 $tmp1899 = (frost$core$Int64) {0};
int64_t $tmp1900 = $tmp1899.value;
frost$core$Int64* $tmp1901 = $tmp1898[$tmp1900];
int64_t $tmp1902 = $tmp1897.value;
$tmp1896[$tmp1902] = $tmp1901;
// line 302
frost$core$Int64** $tmp1903 = *(&local0);
frost$core$Int64 $tmp1904 = (frost$core$Int64) {199};
frost$core$Int64** $tmp1905 = *(&local0);
frost$core$Int64 $tmp1906 = (frost$core$Int64) {0};
int64_t $tmp1907 = $tmp1906.value;
frost$core$Int64* $tmp1908 = $tmp1905[$tmp1907];
int64_t $tmp1909 = $tmp1904.value;
$tmp1903[$tmp1909] = $tmp1908;
// line 303
frost$core$Int64** $tmp1910 = *(&local0);
frost$core$Int64 $tmp1911 = (frost$core$Int64) {200};
frost$core$Int64** $tmp1912 = *(&local0);
frost$core$Int64 $tmp1913 = (frost$core$Int64) {0};
int64_t $tmp1914 = $tmp1913.value;
frost$core$Int64* $tmp1915 = $tmp1912[$tmp1914];
int64_t $tmp1916 = $tmp1911.value;
$tmp1910[$tmp1916] = $tmp1915;
// line 304
frost$core$Int64** $tmp1917 = *(&local0);
frost$core$Int64 $tmp1918 = (frost$core$Int64) {201};
frost$core$Int64** $tmp1919 = *(&local0);
frost$core$Int64 $tmp1920 = (frost$core$Int64) {0};
int64_t $tmp1921 = $tmp1920.value;
frost$core$Int64* $tmp1922 = $tmp1919[$tmp1921];
int64_t $tmp1923 = $tmp1918.value;
$tmp1917[$tmp1923] = $tmp1922;
// line 305
frost$core$Int64** $tmp1924 = *(&local0);
frost$core$Int64 $tmp1925 = (frost$core$Int64) {202};
frost$core$Int64** $tmp1926 = *(&local0);
frost$core$Int64 $tmp1927 = (frost$core$Int64) {0};
int64_t $tmp1928 = $tmp1927.value;
frost$core$Int64* $tmp1929 = $tmp1926[$tmp1928];
int64_t $tmp1930 = $tmp1925.value;
$tmp1924[$tmp1930] = $tmp1929;
// line 306
frost$core$Int64** $tmp1931 = *(&local0);
frost$core$Int64 $tmp1932 = (frost$core$Int64) {203};
frost$core$Int64** $tmp1933 = *(&local0);
frost$core$Int64 $tmp1934 = (frost$core$Int64) {0};
int64_t $tmp1935 = $tmp1934.value;
frost$core$Int64* $tmp1936 = $tmp1933[$tmp1935];
int64_t $tmp1937 = $tmp1932.value;
$tmp1931[$tmp1937] = $tmp1936;
// line 307
frost$core$Int64** $tmp1938 = *(&local0);
frost$core$Int64 $tmp1939 = (frost$core$Int64) {204};
frost$core$Int64** $tmp1940 = *(&local0);
frost$core$Int64 $tmp1941 = (frost$core$Int64) {0};
int64_t $tmp1942 = $tmp1941.value;
frost$core$Int64* $tmp1943 = $tmp1940[$tmp1942];
int64_t $tmp1944 = $tmp1939.value;
$tmp1938[$tmp1944] = $tmp1943;
// line 308
frost$core$Int64** $tmp1945 = *(&local0);
frost$core$Int64 $tmp1946 = (frost$core$Int64) {205};
frost$core$Int64** $tmp1947 = *(&local0);
frost$core$Int64 $tmp1948 = (frost$core$Int64) {0};
int64_t $tmp1949 = $tmp1948.value;
frost$core$Int64* $tmp1950 = $tmp1947[$tmp1949];
int64_t $tmp1951 = $tmp1946.value;
$tmp1945[$tmp1951] = $tmp1950;
// line 309
frost$core$Int64** $tmp1952 = *(&local0);
frost$core$Int64 $tmp1953 = (frost$core$Int64) {206};
frost$core$Int64** $tmp1954 = *(&local0);
frost$core$Int64 $tmp1955 = (frost$core$Int64) {0};
int64_t $tmp1956 = $tmp1955.value;
frost$core$Int64* $tmp1957 = $tmp1954[$tmp1956];
int64_t $tmp1958 = $tmp1953.value;
$tmp1952[$tmp1958] = $tmp1957;
// line 310
frost$core$Int64** $tmp1959 = *(&local0);
frost$core$Int64 $tmp1960 = (frost$core$Int64) {207};
frost$core$Int64** $tmp1961 = *(&local0);
frost$core$Int64 $tmp1962 = (frost$core$Int64) {0};
int64_t $tmp1963 = $tmp1962.value;
frost$core$Int64* $tmp1964 = $tmp1961[$tmp1963];
int64_t $tmp1965 = $tmp1960.value;
$tmp1959[$tmp1965] = $tmp1964;
// line 311
frost$core$Int64** $tmp1966 = *(&local0);
frost$core$Int64 $tmp1967 = (frost$core$Int64) {208};
frost$core$Int64** $tmp1968 = *(&local0);
frost$core$Int64 $tmp1969 = (frost$core$Int64) {0};
int64_t $tmp1970 = $tmp1969.value;
frost$core$Int64* $tmp1971 = $tmp1968[$tmp1970];
int64_t $tmp1972 = $tmp1967.value;
$tmp1966[$tmp1972] = $tmp1971;
// line 312
frost$core$Int64** $tmp1973 = *(&local0);
frost$core$Int64 $tmp1974 = (frost$core$Int64) {209};
frost$core$Int64** $tmp1975 = *(&local0);
frost$core$Int64 $tmp1976 = (frost$core$Int64) {0};
int64_t $tmp1977 = $tmp1976.value;
frost$core$Int64* $tmp1978 = $tmp1975[$tmp1977];
int64_t $tmp1979 = $tmp1974.value;
$tmp1973[$tmp1979] = $tmp1978;
// line 313
frost$core$Int64** $tmp1980 = *(&local0);
frost$core$Int64 $tmp1981 = (frost$core$Int64) {210};
frost$core$Int64** $tmp1982 = *(&local0);
frost$core$Int64 $tmp1983 = (frost$core$Int64) {0};
int64_t $tmp1984 = $tmp1983.value;
frost$core$Int64* $tmp1985 = $tmp1982[$tmp1984];
int64_t $tmp1986 = $tmp1981.value;
$tmp1980[$tmp1986] = $tmp1985;
// line 314
frost$core$Int64** $tmp1987 = *(&local0);
frost$core$Int64 $tmp1988 = (frost$core$Int64) {211};
frost$core$Int64** $tmp1989 = *(&local0);
frost$core$Int64 $tmp1990 = (frost$core$Int64) {0};
int64_t $tmp1991 = $tmp1990.value;
frost$core$Int64* $tmp1992 = $tmp1989[$tmp1991];
int64_t $tmp1993 = $tmp1988.value;
$tmp1987[$tmp1993] = $tmp1992;
// line 315
frost$core$Int64** $tmp1994 = *(&local0);
frost$core$Int64 $tmp1995 = (frost$core$Int64) {212};
frost$core$Int64** $tmp1996 = *(&local0);
frost$core$Int64 $tmp1997 = (frost$core$Int64) {0};
int64_t $tmp1998 = $tmp1997.value;
frost$core$Int64* $tmp1999 = $tmp1996[$tmp1998];
int64_t $tmp2000 = $tmp1995.value;
$tmp1994[$tmp2000] = $tmp1999;
// line 316
frost$core$Int64** $tmp2001 = *(&local0);
frost$core$Int64 $tmp2002 = (frost$core$Int64) {213};
frost$core$Int64** $tmp2003 = *(&local0);
frost$core$Int64 $tmp2004 = (frost$core$Int64) {0};
int64_t $tmp2005 = $tmp2004.value;
frost$core$Int64* $tmp2006 = $tmp2003[$tmp2005];
int64_t $tmp2007 = $tmp2002.value;
$tmp2001[$tmp2007] = $tmp2006;
// line 317
frost$core$Int64** $tmp2008 = *(&local0);
frost$core$Int64 $tmp2009 = (frost$core$Int64) {214};
frost$core$Int64** $tmp2010 = *(&local0);
frost$core$Int64 $tmp2011 = (frost$core$Int64) {0};
int64_t $tmp2012 = $tmp2011.value;
frost$core$Int64* $tmp2013 = $tmp2010[$tmp2012];
int64_t $tmp2014 = $tmp2009.value;
$tmp2008[$tmp2014] = $tmp2013;
// line 318
frost$core$Int64** $tmp2015 = *(&local0);
frost$core$Int64 $tmp2016 = (frost$core$Int64) {215};
frost$core$Int64** $tmp2017 = *(&local0);
frost$core$Int64 $tmp2018 = (frost$core$Int64) {0};
int64_t $tmp2019 = $tmp2018.value;
frost$core$Int64* $tmp2020 = $tmp2017[$tmp2019];
int64_t $tmp2021 = $tmp2016.value;
$tmp2015[$tmp2021] = $tmp2020;
// line 319
frost$core$Int64** $tmp2022 = *(&local0);
frost$core$Int64 $tmp2023 = (frost$core$Int64) {216};
frost$core$Int64** $tmp2024 = *(&local0);
frost$core$Int64 $tmp2025 = (frost$core$Int64) {0};
int64_t $tmp2026 = $tmp2025.value;
frost$core$Int64* $tmp2027 = $tmp2024[$tmp2026];
int64_t $tmp2028 = $tmp2023.value;
$tmp2022[$tmp2028] = $tmp2027;
// line 320
frost$core$Int64** $tmp2029 = *(&local0);
frost$core$Int64 $tmp2030 = (frost$core$Int64) {217};
frost$core$Int64** $tmp2031 = *(&local0);
frost$core$Int64 $tmp2032 = (frost$core$Int64) {0};
int64_t $tmp2033 = $tmp2032.value;
frost$core$Int64* $tmp2034 = $tmp2031[$tmp2033];
int64_t $tmp2035 = $tmp2030.value;
$tmp2029[$tmp2035] = $tmp2034;
// line 321
frost$core$Int64** $tmp2036 = *(&local0);
frost$core$Int64 $tmp2037 = (frost$core$Int64) {218};
frost$core$Int64** $tmp2038 = *(&local0);
frost$core$Int64 $tmp2039 = (frost$core$Int64) {0};
int64_t $tmp2040 = $tmp2039.value;
frost$core$Int64* $tmp2041 = $tmp2038[$tmp2040];
int64_t $tmp2042 = $tmp2037.value;
$tmp2036[$tmp2042] = $tmp2041;
// line 322
frost$core$Int64** $tmp2043 = *(&local0);
frost$core$Int64 $tmp2044 = (frost$core$Int64) {219};
frost$core$Int64** $tmp2045 = *(&local0);
frost$core$Int64 $tmp2046 = (frost$core$Int64) {0};
int64_t $tmp2047 = $tmp2046.value;
frost$core$Int64* $tmp2048 = $tmp2045[$tmp2047];
int64_t $tmp2049 = $tmp2044.value;
$tmp2043[$tmp2049] = $tmp2048;
// line 323
frost$core$Int64** $tmp2050 = *(&local0);
frost$core$Int64 $tmp2051 = (frost$core$Int64) {220};
frost$core$Int64** $tmp2052 = *(&local0);
frost$core$Int64 $tmp2053 = (frost$core$Int64) {0};
int64_t $tmp2054 = $tmp2053.value;
frost$core$Int64* $tmp2055 = $tmp2052[$tmp2054];
int64_t $tmp2056 = $tmp2051.value;
$tmp2050[$tmp2056] = $tmp2055;
// line 324
frost$core$Int64** $tmp2057 = *(&local0);
frost$core$Int64 $tmp2058 = (frost$core$Int64) {221};
frost$core$Int64** $tmp2059 = *(&local0);
frost$core$Int64 $tmp2060 = (frost$core$Int64) {0};
int64_t $tmp2061 = $tmp2060.value;
frost$core$Int64* $tmp2062 = $tmp2059[$tmp2061];
int64_t $tmp2063 = $tmp2058.value;
$tmp2057[$tmp2063] = $tmp2062;
// line 325
frost$core$Int64** $tmp2064 = *(&local0);
frost$core$Int64 $tmp2065 = (frost$core$Int64) {222};
frost$core$Int64** $tmp2066 = *(&local0);
frost$core$Int64 $tmp2067 = (frost$core$Int64) {0};
int64_t $tmp2068 = $tmp2067.value;
frost$core$Int64* $tmp2069 = $tmp2066[$tmp2068];
int64_t $tmp2070 = $tmp2065.value;
$tmp2064[$tmp2070] = $tmp2069;
// line 326
frost$core$Int64** $tmp2071 = *(&local0);
frost$core$Int64 $tmp2072 = (frost$core$Int64) {223};
frost$core$Int64** $tmp2073 = *(&local0);
frost$core$Int64 $tmp2074 = (frost$core$Int64) {0};
int64_t $tmp2075 = $tmp2074.value;
frost$core$Int64* $tmp2076 = $tmp2073[$tmp2075];
int64_t $tmp2077 = $tmp2072.value;
$tmp2071[$tmp2077] = $tmp2076;
// line 327
frost$core$Int64** $tmp2078 = *(&local0);
frost$core$Int64 $tmp2079 = (frost$core$Int64) {224};
frost$core$Int64** $tmp2080 = *(&local0);
frost$core$Int64 $tmp2081 = (frost$core$Int64) {0};
int64_t $tmp2082 = $tmp2081.value;
frost$core$Int64* $tmp2083 = $tmp2080[$tmp2082];
int64_t $tmp2084 = $tmp2079.value;
$tmp2078[$tmp2084] = $tmp2083;
// line 328
frost$core$Int64** $tmp2085 = *(&local0);
frost$core$Int64 $tmp2086 = (frost$core$Int64) {225};
frost$core$Int64** $tmp2087 = *(&local0);
frost$core$Int64 $tmp2088 = (frost$core$Int64) {0};
int64_t $tmp2089 = $tmp2088.value;
frost$core$Int64* $tmp2090 = $tmp2087[$tmp2089];
int64_t $tmp2091 = $tmp2086.value;
$tmp2085[$tmp2091] = $tmp2090;
// line 329
frost$core$Int64** $tmp2092 = *(&local0);
frost$core$Int64 $tmp2093 = (frost$core$Int64) {226};
frost$core$Int64** $tmp2094 = *(&local0);
frost$core$Int64 $tmp2095 = (frost$core$Int64) {0};
int64_t $tmp2096 = $tmp2095.value;
frost$core$Int64* $tmp2097 = $tmp2094[$tmp2096];
int64_t $tmp2098 = $tmp2093.value;
$tmp2092[$tmp2098] = $tmp2097;
// line 330
frost$core$Int64** $tmp2099 = *(&local0);
frost$core$Int64 $tmp2100 = (frost$core$Int64) {227};
frost$core$Int64** $tmp2101 = *(&local0);
frost$core$Int64 $tmp2102 = (frost$core$Int64) {0};
int64_t $tmp2103 = $tmp2102.value;
frost$core$Int64* $tmp2104 = $tmp2101[$tmp2103];
int64_t $tmp2105 = $tmp2100.value;
$tmp2099[$tmp2105] = $tmp2104;
// line 331
frost$core$Int64** $tmp2106 = *(&local0);
frost$core$Int64 $tmp2107 = (frost$core$Int64) {228};
frost$core$Int64** $tmp2108 = *(&local0);
frost$core$Int64 $tmp2109 = (frost$core$Int64) {0};
int64_t $tmp2110 = $tmp2109.value;
frost$core$Int64* $tmp2111 = $tmp2108[$tmp2110];
int64_t $tmp2112 = $tmp2107.value;
$tmp2106[$tmp2112] = $tmp2111;
// line 332
frost$core$Int64** $tmp2113 = *(&local0);
frost$core$Int64 $tmp2114 = (frost$core$Int64) {229};
frost$core$Int64** $tmp2115 = *(&local0);
frost$core$Int64 $tmp2116 = (frost$core$Int64) {0};
int64_t $tmp2117 = $tmp2116.value;
frost$core$Int64* $tmp2118 = $tmp2115[$tmp2117];
int64_t $tmp2119 = $tmp2114.value;
$tmp2113[$tmp2119] = $tmp2118;
// line 333
frost$core$Int64** $tmp2120 = *(&local0);
frost$core$Int64 $tmp2121 = (frost$core$Int64) {230};
frost$core$Int64** $tmp2122 = *(&local0);
frost$core$Int64 $tmp2123 = (frost$core$Int64) {0};
int64_t $tmp2124 = $tmp2123.value;
frost$core$Int64* $tmp2125 = $tmp2122[$tmp2124];
int64_t $tmp2126 = $tmp2121.value;
$tmp2120[$tmp2126] = $tmp2125;
// line 334
frost$core$Int64** $tmp2127 = *(&local0);
frost$core$Int64 $tmp2128 = (frost$core$Int64) {231};
frost$core$Int64** $tmp2129 = *(&local0);
frost$core$Int64 $tmp2130 = (frost$core$Int64) {0};
int64_t $tmp2131 = $tmp2130.value;
frost$core$Int64* $tmp2132 = $tmp2129[$tmp2131];
int64_t $tmp2133 = $tmp2128.value;
$tmp2127[$tmp2133] = $tmp2132;
// line 335
frost$core$Int64** $tmp2134 = *(&local0);
frost$core$Int64 $tmp2135 = (frost$core$Int64) {232};
frost$core$Int64** $tmp2136 = *(&local0);
frost$core$Int64 $tmp2137 = (frost$core$Int64) {0};
int64_t $tmp2138 = $tmp2137.value;
frost$core$Int64* $tmp2139 = $tmp2136[$tmp2138];
int64_t $tmp2140 = $tmp2135.value;
$tmp2134[$tmp2140] = $tmp2139;
// line 336
frost$core$Int64** $tmp2141 = *(&local0);
frost$core$Int64 $tmp2142 = (frost$core$Int64) {233};
frost$core$Int64** $tmp2143 = *(&local0);
frost$core$Int64 $tmp2144 = (frost$core$Int64) {0};
int64_t $tmp2145 = $tmp2144.value;
frost$core$Int64* $tmp2146 = $tmp2143[$tmp2145];
int64_t $tmp2147 = $tmp2142.value;
$tmp2141[$tmp2147] = $tmp2146;
// line 337
frost$core$Int64** $tmp2148 = *(&local0);
frost$core$Int64 $tmp2149 = (frost$core$Int64) {234};
frost$core$Int64** $tmp2150 = *(&local0);
frost$core$Int64 $tmp2151 = (frost$core$Int64) {0};
int64_t $tmp2152 = $tmp2151.value;
frost$core$Int64* $tmp2153 = $tmp2150[$tmp2152];
int64_t $tmp2154 = $tmp2149.value;
$tmp2148[$tmp2154] = $tmp2153;
// line 338
frost$core$Int64** $tmp2155 = *(&local0);
frost$core$Int64 $tmp2156 = (frost$core$Int64) {235};
frost$core$Int64** $tmp2157 = *(&local0);
frost$core$Int64 $tmp2158 = (frost$core$Int64) {0};
int64_t $tmp2159 = $tmp2158.value;
frost$core$Int64* $tmp2160 = $tmp2157[$tmp2159];
int64_t $tmp2161 = $tmp2156.value;
$tmp2155[$tmp2161] = $tmp2160;
// line 339
frost$core$Int64** $tmp2162 = *(&local0);
frost$core$Int64 $tmp2163 = (frost$core$Int64) {236};
frost$core$Int64** $tmp2164 = *(&local0);
frost$core$Int64 $tmp2165 = (frost$core$Int64) {0};
int64_t $tmp2166 = $tmp2165.value;
frost$core$Int64* $tmp2167 = $tmp2164[$tmp2166];
int64_t $tmp2168 = $tmp2163.value;
$tmp2162[$tmp2168] = $tmp2167;
// line 340
frost$core$Int64** $tmp2169 = *(&local0);
frost$core$Int64 $tmp2170 = (frost$core$Int64) {237};
frost$core$Int64** $tmp2171 = *(&local0);
frost$core$Int64 $tmp2172 = (frost$core$Int64) {0};
int64_t $tmp2173 = $tmp2172.value;
frost$core$Int64* $tmp2174 = $tmp2171[$tmp2173];
int64_t $tmp2175 = $tmp2170.value;
$tmp2169[$tmp2175] = $tmp2174;
// line 341
frost$core$Int64** $tmp2176 = *(&local0);
frost$core$Int64 $tmp2177 = (frost$core$Int64) {238};
frost$core$Int64** $tmp2178 = *(&local0);
frost$core$Int64 $tmp2179 = (frost$core$Int64) {0};
int64_t $tmp2180 = $tmp2179.value;
frost$core$Int64* $tmp2181 = $tmp2178[$tmp2180];
int64_t $tmp2182 = $tmp2177.value;
$tmp2176[$tmp2182] = $tmp2181;
// line 342
frost$core$Int64** $tmp2183 = *(&local0);
frost$core$Int64 $tmp2184 = (frost$core$Int64) {239};
frost$core$Int64** $tmp2185 = *(&local0);
frost$core$Int64 $tmp2186 = (frost$core$Int64) {0};
int64_t $tmp2187 = $tmp2186.value;
frost$core$Int64* $tmp2188 = $tmp2185[$tmp2187];
int64_t $tmp2189 = $tmp2184.value;
$tmp2183[$tmp2189] = $tmp2188;
// line 343
frost$core$Int64** $tmp2190 = *(&local0);
frost$core$Int64 $tmp2191 = (frost$core$Int64) {240};
frost$core$Int64** $tmp2192 = *(&local0);
frost$core$Int64 $tmp2193 = (frost$core$Int64) {0};
int64_t $tmp2194 = $tmp2193.value;
frost$core$Int64* $tmp2195 = $tmp2192[$tmp2194];
int64_t $tmp2196 = $tmp2191.value;
$tmp2190[$tmp2196] = $tmp2195;
// line 344
frost$core$Int64** $tmp2197 = *(&local0);
frost$core$Int64 $tmp2198 = (frost$core$Int64) {241};
frost$core$Int64** $tmp2199 = *(&local0);
frost$core$Int64 $tmp2200 = (frost$core$Int64) {0};
int64_t $tmp2201 = $tmp2200.value;
frost$core$Int64* $tmp2202 = $tmp2199[$tmp2201];
int64_t $tmp2203 = $tmp2198.value;
$tmp2197[$tmp2203] = $tmp2202;
// line 345
frost$core$Int64** $tmp2204 = *(&local0);
frost$core$Int64 $tmp2205 = (frost$core$Int64) {242};
frost$core$Int64** $tmp2206 = *(&local0);
frost$core$Int64 $tmp2207 = (frost$core$Int64) {0};
int64_t $tmp2208 = $tmp2207.value;
frost$core$Int64* $tmp2209 = $tmp2206[$tmp2208];
int64_t $tmp2210 = $tmp2205.value;
$tmp2204[$tmp2210] = $tmp2209;
// line 346
frost$core$Int64** $tmp2211 = *(&local0);
frost$core$Int64 $tmp2212 = (frost$core$Int64) {243};
frost$core$Int64** $tmp2213 = *(&local0);
frost$core$Int64 $tmp2214 = (frost$core$Int64) {0};
int64_t $tmp2215 = $tmp2214.value;
frost$core$Int64* $tmp2216 = $tmp2213[$tmp2215];
int64_t $tmp2217 = $tmp2212.value;
$tmp2211[$tmp2217] = $tmp2216;
// line 347
frost$core$Int64** $tmp2218 = *(&local0);
frost$core$Int64 $tmp2219 = (frost$core$Int64) {244};
frost$core$Int64** $tmp2220 = *(&local0);
frost$core$Int64 $tmp2221 = (frost$core$Int64) {0};
int64_t $tmp2222 = $tmp2221.value;
frost$core$Int64* $tmp2223 = $tmp2220[$tmp2222];
int64_t $tmp2224 = $tmp2219.value;
$tmp2218[$tmp2224] = $tmp2223;
// line 348
frost$core$Int64** $tmp2225 = *(&local0);
frost$core$Int64 $tmp2226 = (frost$core$Int64) {245};
frost$core$Int64** $tmp2227 = *(&local0);
frost$core$Int64 $tmp2228 = (frost$core$Int64) {0};
int64_t $tmp2229 = $tmp2228.value;
frost$core$Int64* $tmp2230 = $tmp2227[$tmp2229];
int64_t $tmp2231 = $tmp2226.value;
$tmp2225[$tmp2231] = $tmp2230;
// line 349
frost$core$Int64** $tmp2232 = *(&local0);
frost$core$Int64 $tmp2233 = (frost$core$Int64) {246};
frost$core$Int64** $tmp2234 = *(&local0);
frost$core$Int64 $tmp2235 = (frost$core$Int64) {0};
int64_t $tmp2236 = $tmp2235.value;
frost$core$Int64* $tmp2237 = $tmp2234[$tmp2236];
int64_t $tmp2238 = $tmp2233.value;
$tmp2232[$tmp2238] = $tmp2237;
// line 350
frost$core$Int64** $tmp2239 = *(&local0);
frost$core$Int64 $tmp2240 = (frost$core$Int64) {247};
frost$core$Int64** $tmp2241 = *(&local0);
frost$core$Int64 $tmp2242 = (frost$core$Int64) {0};
int64_t $tmp2243 = $tmp2242.value;
frost$core$Int64* $tmp2244 = $tmp2241[$tmp2243];
int64_t $tmp2245 = $tmp2240.value;
$tmp2239[$tmp2245] = $tmp2244;
// line 351
frost$core$Int64** $tmp2246 = *(&local0);
frost$core$Int64 $tmp2247 = (frost$core$Int64) {248};
frost$core$Int64** $tmp2248 = *(&local0);
frost$core$Int64 $tmp2249 = (frost$core$Int64) {0};
int64_t $tmp2250 = $tmp2249.value;
frost$core$Int64* $tmp2251 = $tmp2248[$tmp2250];
int64_t $tmp2252 = $tmp2247.value;
$tmp2246[$tmp2252] = $tmp2251;
// line 352
frost$core$Int64** $tmp2253 = *(&local0);
frost$core$Int64 $tmp2254 = (frost$core$Int64) {249};
frost$core$Int64** $tmp2255 = *(&local0);
frost$core$Int64 $tmp2256 = (frost$core$Int64) {0};
int64_t $tmp2257 = $tmp2256.value;
frost$core$Int64* $tmp2258 = $tmp2255[$tmp2257];
int64_t $tmp2259 = $tmp2254.value;
$tmp2253[$tmp2259] = $tmp2258;
// line 353
frost$core$Int64** $tmp2260 = *(&local0);
frost$core$Int64 $tmp2261 = (frost$core$Int64) {250};
frost$core$Int64** $tmp2262 = *(&local0);
frost$core$Int64 $tmp2263 = (frost$core$Int64) {0};
int64_t $tmp2264 = $tmp2263.value;
frost$core$Int64* $tmp2265 = $tmp2262[$tmp2264];
int64_t $tmp2266 = $tmp2261.value;
$tmp2260[$tmp2266] = $tmp2265;
// line 354
frost$core$Int64** $tmp2267 = *(&local0);
frost$core$Int64 $tmp2268 = (frost$core$Int64) {251};
frost$core$Int64** $tmp2269 = *(&local0);
frost$core$Int64 $tmp2270 = (frost$core$Int64) {0};
int64_t $tmp2271 = $tmp2270.value;
frost$core$Int64* $tmp2272 = $tmp2269[$tmp2271];
int64_t $tmp2273 = $tmp2268.value;
$tmp2267[$tmp2273] = $tmp2272;
// line 355
frost$core$Int64** $tmp2274 = *(&local0);
frost$core$Int64 $tmp2275 = (frost$core$Int64) {252};
frost$core$Int64** $tmp2276 = *(&local0);
frost$core$Int64 $tmp2277 = (frost$core$Int64) {0};
int64_t $tmp2278 = $tmp2277.value;
frost$core$Int64* $tmp2279 = $tmp2276[$tmp2278];
int64_t $tmp2280 = $tmp2275.value;
$tmp2274[$tmp2280] = $tmp2279;
// line 356
frost$core$Int64** $tmp2281 = *(&local0);
frost$core$Int64 $tmp2282 = (frost$core$Int64) {253};
frost$core$Int64** $tmp2283 = *(&local0);
frost$core$Int64 $tmp2284 = (frost$core$Int64) {0};
int64_t $tmp2285 = $tmp2284.value;
frost$core$Int64* $tmp2286 = $tmp2283[$tmp2285];
int64_t $tmp2287 = $tmp2282.value;
$tmp2281[$tmp2287] = $tmp2286;
// line 357
frost$core$Int64** $tmp2288 = *(&local0);
frost$core$Int64 $tmp2289 = (frost$core$Int64) {254};
frost$core$Int64** $tmp2290 = *(&local0);
frost$core$Int64 $tmp2291 = (frost$core$Int64) {0};
int64_t $tmp2292 = $tmp2291.value;
frost$core$Int64* $tmp2293 = $tmp2290[$tmp2292];
int64_t $tmp2294 = $tmp2289.value;
$tmp2288[$tmp2294] = $tmp2293;
// line 358
frost$core$Int64** $tmp2295 = *(&local0);
frost$core$Int64 $tmp2296 = (frost$core$Int64) {255};
frost$core$Int64** $tmp2297 = *(&local0);
frost$core$Int64 $tmp2298 = (frost$core$Int64) {0};
int64_t $tmp2299 = $tmp2298.value;
frost$core$Int64* $tmp2300 = $tmp2297[$tmp2299];
int64_t $tmp2301 = $tmp2296.value;
$tmp2295[$tmp2301] = $tmp2300;
// line 359
frost$core$Int64** $tmp2302 = *(&local0);
return $tmp2302;

}
frost$core$Int64* org$frostlang$json$Lexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT() {

frost$core$Int64* local0;
// line 364
frost$core$Int64 $tmp2303 = (frost$core$Int64) {31};
int64_t $tmp2304 = $tmp2303.value;
frost$core$Int64* $tmp2305 = ((frost$core$Int64*) frostAlloc($tmp2304 * 8));
*(&local0) = $tmp2305;
// line 365
frost$core$Int64* $tmp2306 = *(&local0);
frost$core$Int64 $tmp2307 = (frost$core$Int64) {0};
frost$core$Int64 $tmp2308 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2309 = $tmp2307.value;
$tmp2306[$tmp2309] = $tmp2308;
// line 366
frost$core$Int64* $tmp2310 = *(&local0);
frost$core$Int64 $tmp2311 = (frost$core$Int64) {1};
frost$core$Int64 $tmp2312 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2313 = $tmp2311.value;
$tmp2310[$tmp2313] = $tmp2312;
// line 367
frost$core$Int64* $tmp2314 = *(&local0);
frost$core$Int64 $tmp2315 = (frost$core$Int64) {2};
frost$core$Int64 $tmp2316 = (frost$core$Int64) {6};
int64_t $tmp2317 = $tmp2315.value;
$tmp2314[$tmp2317] = $tmp2316;
// line 368
frost$core$Int64* $tmp2318 = *(&local0);
frost$core$Int64 $tmp2319 = (frost$core$Int64) {3};
frost$core$Int64 $tmp2320 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2321 = $tmp2319.value;
$tmp2318[$tmp2321] = $tmp2320;
// line 369
frost$core$Int64* $tmp2322 = *(&local0);
frost$core$Int64 $tmp2323 = (frost$core$Int64) {4};
frost$core$Int64 $tmp2324 = (frost$core$Int64) {3};
int64_t $tmp2325 = $tmp2323.value;
$tmp2322[$tmp2325] = $tmp2324;
// line 370
frost$core$Int64* $tmp2326 = *(&local0);
frost$core$Int64 $tmp2327 = (frost$core$Int64) {5};
frost$core$Int64 $tmp2328 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2329 = $tmp2327.value;
$tmp2326[$tmp2329] = $tmp2328;
// line 371
frost$core$Int64* $tmp2330 = *(&local0);
frost$core$Int64 $tmp2331 = (frost$core$Int64) {6};
frost$core$Int64 $tmp2332 = (frost$core$Int64) {14};
int64_t $tmp2333 = $tmp2331.value;
$tmp2330[$tmp2333] = $tmp2332;
// line 372
frost$core$Int64* $tmp2334 = *(&local0);
frost$core$Int64 $tmp2335 = (frost$core$Int64) {7};
frost$core$Int64 $tmp2336 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2337 = $tmp2335.value;
$tmp2334[$tmp2337] = $tmp2336;
// line 373
frost$core$Int64* $tmp2338 = *(&local0);
frost$core$Int64 $tmp2339 = (frost$core$Int64) {8};
frost$core$Int64 $tmp2340 = (frost$core$Int64) {4};
int64_t $tmp2341 = $tmp2339.value;
$tmp2338[$tmp2341] = $tmp2340;
// line 374
frost$core$Int64* $tmp2342 = *(&local0);
frost$core$Int64 $tmp2343 = (frost$core$Int64) {9};
frost$core$Int64 $tmp2344 = (frost$core$Int64) {5};
int64_t $tmp2345 = $tmp2343.value;
$tmp2342[$tmp2345] = $tmp2344;
// line 375
frost$core$Int64* $tmp2346 = *(&local0);
frost$core$Int64 $tmp2347 = (frost$core$Int64) {10};
frost$core$Int64 $tmp2348 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2349 = $tmp2347.value;
$tmp2346[$tmp2349] = $tmp2348;
// line 376
frost$core$Int64* $tmp2350 = *(&local0);
frost$core$Int64 $tmp2351 = (frost$core$Int64) {11};
frost$core$Int64 $tmp2352 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2353 = $tmp2351.value;
$tmp2350[$tmp2353] = $tmp2352;
// line 377
frost$core$Int64* $tmp2354 = *(&local0);
frost$core$Int64 $tmp2355 = (frost$core$Int64) {12};
frost$core$Int64 $tmp2356 = (frost$core$Int64) {5};
int64_t $tmp2357 = $tmp2355.value;
$tmp2354[$tmp2357] = $tmp2356;
// line 378
frost$core$Int64* $tmp2358 = *(&local0);
frost$core$Int64 $tmp2359 = (frost$core$Int64) {13};
frost$core$Int64 $tmp2360 = (frost$core$Int64) {15};
int64_t $tmp2361 = $tmp2359.value;
$tmp2358[$tmp2361] = $tmp2360;
// line 379
frost$core$Int64* $tmp2362 = *(&local0);
frost$core$Int64 $tmp2363 = (frost$core$Int64) {14};
frost$core$Int64 $tmp2364 = (frost$core$Int64) {12};
int64_t $tmp2365 = $tmp2363.value;
$tmp2362[$tmp2365] = $tmp2364;
// line 380
frost$core$Int64* $tmp2366 = *(&local0);
frost$core$Int64 $tmp2367 = (frost$core$Int64) {15};
frost$core$Int64 $tmp2368 = (frost$core$Int64) {13};
int64_t $tmp2369 = $tmp2367.value;
$tmp2366[$tmp2369] = $tmp2368;
// line 381
frost$core$Int64* $tmp2370 = *(&local0);
frost$core$Int64 $tmp2371 = (frost$core$Int64) {16};
frost$core$Int64 $tmp2372 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2373 = $tmp2371.value;
$tmp2370[$tmp2373] = $tmp2372;
// line 382
frost$core$Int64* $tmp2374 = *(&local0);
frost$core$Int64 $tmp2375 = (frost$core$Int64) {17};
frost$core$Int64 $tmp2376 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2377 = $tmp2375.value;
$tmp2374[$tmp2377] = $tmp2376;
// line 383
frost$core$Int64* $tmp2378 = *(&local0);
frost$core$Int64 $tmp2379 = (frost$core$Int64) {18};
frost$core$Int64 $tmp2380 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2381 = $tmp2379.value;
$tmp2378[$tmp2381] = $tmp2380;
// line 384
frost$core$Int64* $tmp2382 = *(&local0);
frost$core$Int64 $tmp2383 = (frost$core$Int64) {19};
frost$core$Int64 $tmp2384 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2385 = $tmp2383.value;
$tmp2382[$tmp2385] = $tmp2384;
// line 385
frost$core$Int64* $tmp2386 = *(&local0);
frost$core$Int64 $tmp2387 = (frost$core$Int64) {20};
frost$core$Int64 $tmp2388 = (frost$core$Int64) {8};
int64_t $tmp2389 = $tmp2387.value;
$tmp2386[$tmp2389] = $tmp2388;
// line 386
frost$core$Int64* $tmp2390 = *(&local0);
frost$core$Int64 $tmp2391 = (frost$core$Int64) {21};
frost$core$Int64 $tmp2392 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2393 = $tmp2391.value;
$tmp2390[$tmp2393] = $tmp2392;
// line 387
frost$core$Int64* $tmp2394 = *(&local0);
frost$core$Int64 $tmp2395 = (frost$core$Int64) {22};
frost$core$Int64 $tmp2396 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2397 = $tmp2395.value;
$tmp2394[$tmp2397] = $tmp2396;
// line 388
frost$core$Int64* $tmp2398 = *(&local0);
frost$core$Int64 $tmp2399 = (frost$core$Int64) {23};
frost$core$Int64 $tmp2400 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2401 = $tmp2399.value;
$tmp2398[$tmp2401] = $tmp2400;
// line 389
frost$core$Int64* $tmp2402 = *(&local0);
frost$core$Int64 $tmp2403 = (frost$core$Int64) {24};
frost$core$Int64 $tmp2404 = (frost$core$Int64) {9};
int64_t $tmp2405 = $tmp2403.value;
$tmp2402[$tmp2405] = $tmp2404;
// line 390
frost$core$Int64* $tmp2406 = *(&local0);
frost$core$Int64 $tmp2407 = (frost$core$Int64) {25};
frost$core$Int64 $tmp2408 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2409 = $tmp2407.value;
$tmp2406[$tmp2409] = $tmp2408;
// line 391
frost$core$Int64* $tmp2410 = *(&local0);
frost$core$Int64 $tmp2411 = (frost$core$Int64) {26};
frost$core$Int64 $tmp2412 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2413 = $tmp2411.value;
$tmp2410[$tmp2413] = $tmp2412;
// line 392
frost$core$Int64* $tmp2414 = *(&local0);
frost$core$Int64 $tmp2415 = (frost$core$Int64) {27};
frost$core$Int64 $tmp2416 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2417 = $tmp2415.value;
$tmp2414[$tmp2417] = $tmp2416;
// line 393
frost$core$Int64* $tmp2418 = *(&local0);
frost$core$Int64 $tmp2419 = (frost$core$Int64) {28};
frost$core$Int64 $tmp2420 = (frost$core$Int64) {7};
int64_t $tmp2421 = $tmp2419.value;
$tmp2418[$tmp2421] = $tmp2420;
// line 394
frost$core$Int64* $tmp2422 = *(&local0);
frost$core$Int64 $tmp2423 = (frost$core$Int64) {29};
frost$core$Int64 $tmp2424 = (frost$core$Int64) {10};
int64_t $tmp2425 = $tmp2423.value;
$tmp2422[$tmp2425] = $tmp2424;
// line 395
frost$core$Int64* $tmp2426 = *(&local0);
frost$core$Int64 $tmp2427 = (frost$core$Int64) {30};
frost$core$Int64 $tmp2428 = (frost$core$Int64) {11};
int64_t $tmp2429 = $tmp2427.value;
$tmp2426[$tmp2429] = $tmp2428;
// line 396
frost$core$Int64* $tmp2430 = *(&local0);
return $tmp2430;

}
void org$frostlang$json$Lexer$cleanup(org$frostlang$json$Lexer* param0) {

// line 401
frost$core$Int64*** $tmp2431 = &param0->transitions;
frost$core$Int64** $tmp2432 = *$tmp2431;
frost$core$Int64 $tmp2433 = (frost$core$Int64) {0};
int64_t $tmp2434 = $tmp2433.value;
frost$core$Int64* $tmp2435 = $tmp2432[$tmp2434];
frostFree($tmp2435);
// line 402
frost$core$Int64*** $tmp2436 = &param0->transitions;
frost$core$Int64** $tmp2437 = *$tmp2436;
frost$core$Int64 $tmp2438 = (frost$core$Int64) {9};
int64_t $tmp2439 = $tmp2438.value;
frost$core$Int64* $tmp2440 = $tmp2437[$tmp2439];
frostFree($tmp2440);
// line 403
frost$core$Int64*** $tmp2441 = &param0->transitions;
frost$core$Int64** $tmp2442 = *$tmp2441;
frost$core$Int64 $tmp2443 = (frost$core$Int64) {34};
int64_t $tmp2444 = $tmp2443.value;
frost$core$Int64* $tmp2445 = $tmp2442[$tmp2444];
frostFree($tmp2445);
// line 404
frost$core$Int64*** $tmp2446 = &param0->transitions;
frost$core$Int64** $tmp2447 = *$tmp2446;
frost$core$Int64 $tmp2448 = (frost$core$Int64) {43};
int64_t $tmp2449 = $tmp2448.value;
frost$core$Int64* $tmp2450 = $tmp2447[$tmp2449];
frostFree($tmp2450);
// line 405
frost$core$Int64*** $tmp2451 = &param0->transitions;
frost$core$Int64** $tmp2452 = *$tmp2451;
frost$core$Int64 $tmp2453 = (frost$core$Int64) {44};
int64_t $tmp2454 = $tmp2453.value;
frost$core$Int64* $tmp2455 = $tmp2452[$tmp2454];
frostFree($tmp2455);
// line 406
frost$core$Int64*** $tmp2456 = &param0->transitions;
frost$core$Int64** $tmp2457 = *$tmp2456;
frost$core$Int64 $tmp2458 = (frost$core$Int64) {45};
int64_t $tmp2459 = $tmp2458.value;
frost$core$Int64* $tmp2460 = $tmp2457[$tmp2459];
frostFree($tmp2460);
// line 407
frost$core$Int64*** $tmp2461 = &param0->transitions;
frost$core$Int64** $tmp2462 = *$tmp2461;
frost$core$Int64 $tmp2463 = (frost$core$Int64) {46};
int64_t $tmp2464 = $tmp2463.value;
frost$core$Int64* $tmp2465 = $tmp2462[$tmp2464];
frostFree($tmp2465);
// line 408
frost$core$Int64*** $tmp2466 = &param0->transitions;
frost$core$Int64** $tmp2467 = *$tmp2466;
frost$core$Int64 $tmp2468 = (frost$core$Int64) {48};
int64_t $tmp2469 = $tmp2468.value;
frost$core$Int64* $tmp2470 = $tmp2467[$tmp2469];
frostFree($tmp2470);
// line 409
frost$core$Int64*** $tmp2471 = &param0->transitions;
frost$core$Int64** $tmp2472 = *$tmp2471;
frost$core$Int64 $tmp2473 = (frost$core$Int64) {58};
int64_t $tmp2474 = $tmp2473.value;
frost$core$Int64* $tmp2475 = $tmp2472[$tmp2474];
frostFree($tmp2475);
// line 410
frost$core$Int64*** $tmp2476 = &param0->transitions;
frost$core$Int64** $tmp2477 = *$tmp2476;
frost$core$Int64 $tmp2478 = (frost$core$Int64) {69};
int64_t $tmp2479 = $tmp2478.value;
frost$core$Int64* $tmp2480 = $tmp2477[$tmp2479];
frostFree($tmp2480);
// line 411
frost$core$Int64*** $tmp2481 = &param0->transitions;
frost$core$Int64** $tmp2482 = *$tmp2481;
frost$core$Int64 $tmp2483 = (frost$core$Int64) {91};
int64_t $tmp2484 = $tmp2483.value;
frost$core$Int64* $tmp2485 = $tmp2482[$tmp2484];
frostFree($tmp2485);
// line 412
frost$core$Int64*** $tmp2486 = &param0->transitions;
frost$core$Int64** $tmp2487 = *$tmp2486;
frost$core$Int64 $tmp2488 = (frost$core$Int64) {92};
int64_t $tmp2489 = $tmp2488.value;
frost$core$Int64* $tmp2490 = $tmp2487[$tmp2489];
frostFree($tmp2490);
// line 413
frost$core$Int64*** $tmp2491 = &param0->transitions;
frost$core$Int64** $tmp2492 = *$tmp2491;
frost$core$Int64 $tmp2493 = (frost$core$Int64) {93};
int64_t $tmp2494 = $tmp2493.value;
frost$core$Int64* $tmp2495 = $tmp2492[$tmp2494];
frostFree($tmp2495);
// line 414
frost$core$Int64*** $tmp2496 = &param0->transitions;
frost$core$Int64** $tmp2497 = *$tmp2496;
frost$core$Int64 $tmp2498 = (frost$core$Int64) {97};
int64_t $tmp2499 = $tmp2498.value;
frost$core$Int64* $tmp2500 = $tmp2497[$tmp2499];
frostFree($tmp2500);
// line 415
frost$core$Int64*** $tmp2501 = &param0->transitions;
frost$core$Int64** $tmp2502 = *$tmp2501;
frost$core$Int64 $tmp2503 = (frost$core$Int64) {98};
int64_t $tmp2504 = $tmp2503.value;
frost$core$Int64* $tmp2505 = $tmp2502[$tmp2504];
frostFree($tmp2505);
// line 416
frost$core$Int64*** $tmp2506 = &param0->transitions;
frost$core$Int64** $tmp2507 = *$tmp2506;
frost$core$Int64 $tmp2508 = (frost$core$Int64) {101};
int64_t $tmp2509 = $tmp2508.value;
frost$core$Int64* $tmp2510 = $tmp2507[$tmp2509];
frostFree($tmp2510);
// line 417
frost$core$Int64*** $tmp2511 = &param0->transitions;
frost$core$Int64** $tmp2512 = *$tmp2511;
frost$core$Int64 $tmp2513 = (frost$core$Int64) {102};
int64_t $tmp2514 = $tmp2513.value;
frost$core$Int64* $tmp2515 = $tmp2512[$tmp2514];
frostFree($tmp2515);
// line 418
frost$core$Int64*** $tmp2516 = &param0->transitions;
frost$core$Int64** $tmp2517 = *$tmp2516;
frost$core$Int64 $tmp2518 = (frost$core$Int64) {108};
int64_t $tmp2519 = $tmp2518.value;
frost$core$Int64* $tmp2520 = $tmp2517[$tmp2519];
frostFree($tmp2520);
// line 419
frost$core$Int64*** $tmp2521 = &param0->transitions;
frost$core$Int64** $tmp2522 = *$tmp2521;
frost$core$Int64 $tmp2523 = (frost$core$Int64) {110};
int64_t $tmp2524 = $tmp2523.value;
frost$core$Int64* $tmp2525 = $tmp2522[$tmp2524];
frostFree($tmp2525);
// line 420
frost$core$Int64*** $tmp2526 = &param0->transitions;
frost$core$Int64** $tmp2527 = *$tmp2526;
frost$core$Int64 $tmp2528 = (frost$core$Int64) {114};
int64_t $tmp2529 = $tmp2528.value;
frost$core$Int64* $tmp2530 = $tmp2527[$tmp2529];
frostFree($tmp2530);
// line 421
frost$core$Int64*** $tmp2531 = &param0->transitions;
frost$core$Int64** $tmp2532 = *$tmp2531;
frost$core$Int64 $tmp2533 = (frost$core$Int64) {115};
int64_t $tmp2534 = $tmp2533.value;
frost$core$Int64* $tmp2535 = $tmp2532[$tmp2534];
frostFree($tmp2535);
// line 422
frost$core$Int64*** $tmp2536 = &param0->transitions;
frost$core$Int64** $tmp2537 = *$tmp2536;
frost$core$Int64 $tmp2538 = (frost$core$Int64) {116};
int64_t $tmp2539 = $tmp2538.value;
frost$core$Int64* $tmp2540 = $tmp2537[$tmp2539];
frostFree($tmp2540);
// line 423
frost$core$Int64*** $tmp2541 = &param0->transitions;
frost$core$Int64** $tmp2542 = *$tmp2541;
frost$core$Int64 $tmp2543 = (frost$core$Int64) {117};
int64_t $tmp2544 = $tmp2543.value;
frost$core$Int64* $tmp2545 = $tmp2542[$tmp2544];
frostFree($tmp2545);
// line 424
frost$core$Int64*** $tmp2546 = &param0->transitions;
frost$core$Int64** $tmp2547 = *$tmp2546;
frost$core$Int64 $tmp2548 = (frost$core$Int64) {123};
int64_t $tmp2549 = $tmp2548.value;
frost$core$Int64* $tmp2550 = $tmp2547[$tmp2549];
frostFree($tmp2550);
// line 425
frost$core$Int64*** $tmp2551 = &param0->transitions;
frost$core$Int64** $tmp2552 = *$tmp2551;
frost$core$Int64 $tmp2553 = (frost$core$Int64) {125};
int64_t $tmp2554 = $tmp2553.value;
frost$core$Int64* $tmp2555 = $tmp2552[$tmp2554];
frostFree($tmp2555);
// line 426
frost$core$Int64*** $tmp2556 = &param0->transitions;
frost$core$Int64** $tmp2557 = *$tmp2556;
frostFree($tmp2557);
// line 427
frost$core$Int64** $tmp2558 = &param0->accepts;
frost$core$Int64* $tmp2559 = *$tmp2558;
frostFree($tmp2559);
// line 400
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$plex$runtime$DFA** $tmp2560 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp2561 = *$tmp2560;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
return;

}
org$frostlang$json$Token org$frostlang$json$Lexer$next$R$org$frostlang$json$Token(org$frostlang$json$Lexer* param0) {

org$frostlang$plex$runtime$RawToken local0;
// line 431
org$frostlang$plex$runtime$DFA** $tmp2562 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp2563 = *$tmp2562;
org$frostlang$plex$runtime$RawToken $tmp2564 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp2563);
*(&local0) = $tmp2564;
// line 432
org$frostlang$plex$runtime$RawToken $tmp2565 = *(&local0);
frost$core$Int64 $tmp2566 = $tmp2565.kind;
org$frostlang$json$Token$Kind $tmp2567 = org$frostlang$json$Token$Kind$init$frost$core$Int64($tmp2566);
org$frostlang$plex$runtime$RawToken $tmp2568 = *(&local0);
frost$core$String$Index $tmp2569 = $tmp2568.start;
org$frostlang$plex$runtime$RawToken $tmp2570 = *(&local0);
frost$core$String$Index $tmp2571 = $tmp2570.end;
org$frostlang$plex$runtime$RawToken $tmp2572 = *(&local0);
frost$core$Int64 $tmp2573 = $tmp2572.line;
org$frostlang$plex$runtime$RawToken $tmp2574 = *(&local0);
frost$core$Int64 $tmp2575 = $tmp2574.column;
org$frostlang$json$Position $tmp2576 = org$frostlang$json$Position$init$frost$core$Int64$frost$core$Int64($tmp2573, $tmp2575);
org$frostlang$json$Token $tmp2577 = org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position($tmp2567, $tmp2569, $tmp2571, $tmp2576);
return $tmp2577;

}
void org$frostlang$json$Lexer$init(org$frostlang$json$Lexer* param0) {

// line 15
frost$core$Int64** $tmp2578 = org$frostlang$json$Lexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT();
frost$core$Int64*** $tmp2579 = &param0->transitions;
*$tmp2579 = $tmp2578;
// line 17
frost$core$Int64* $tmp2580 = org$frostlang$json$Lexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT();
frost$core$Int64** $tmp2581 = &param0->accepts;
*$tmp2581 = $tmp2580;
return;

}

