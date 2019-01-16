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
org$frostlang$regex$RegexLexer$class_type org$frostlang$regex$RegexLexer$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$regex$RegexLexer$cleanup, org$frostlang$regex$RegexLexer$start$frost$core$String, org$frostlang$regex$RegexLexer$next$R$org$frostlang$regex$RegexToken} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x4c\x65\x78\x65\x72", 30, -602420720171066643, NULL };

void org$frostlang$regex$RegexLexer$start$frost$core$String(org$frostlang$regex$RegexLexer* param0, frost$core$String* param1) {

// line 20
org$frostlang$plex$runtime$DFA* $tmp2 = (org$frostlang$plex$runtime$DFA*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$plex$runtime$DFA$class);
frost$core$Int64 $tmp3 = (frost$core$Int64) {20};
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
frost$core$Int64* org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT(frost$core$Int64 param0, frost$core$Int64 param1) {

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
frost$core$UInt64 $tmp21 = frost$core$Int64$convert$R$frost$core$UInt64($tmp20);
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
frost$core$UInt64 $tmp40 = frost$core$Int64$convert$R$frost$core$UInt64($tmp39);
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
frost$core$Int64** org$frostlang$regex$RegexLexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT() {

frost$core$Int64** local0;
// line 34
frost$core$Int64 $tmp56 = (frost$core$Int64) {256};
int64_t $tmp57 = $tmp56.value;
frost$core$Int64** $tmp58 = ((frost$core$Int64**) frostAlloc($tmp57 * 8));
*(&local0) = $tmp58;
// line 35
frost$core$Int64** $tmp59 = *(&local0);
frost$core$Int64 $tmp60 = (frost$core$Int64) {0};
frost$core$Int64 $tmp61 = (frost$core$Int64) {20};
frost$core$Int64 $tmp62 = (frost$core$Int64) {0};
frost$core$Int64* $tmp63 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp61, $tmp62);
int64_t $tmp64 = $tmp60.value;
$tmp59[$tmp64] = $tmp63;
// line 36
frost$core$Int64** $tmp65 = *(&local0);
frost$core$Int64 $tmp66 = (frost$core$Int64) {0};
int64_t $tmp67 = $tmp66.value;
frost$core$Int64* $tmp68 = $tmp65[$tmp67];
frost$core$Int64 $tmp69 = (frost$core$Int64) {1};
frost$core$Int64 $tmp70 = (frost$core$Int64) {2};
int64_t $tmp71 = $tmp69.value;
$tmp68[$tmp71] = $tmp70;
// line 37
frost$core$Int64** $tmp72 = *(&local0);
frost$core$Int64 $tmp73 = (frost$core$Int64) {0};
int64_t $tmp74 = $tmp73.value;
frost$core$Int64* $tmp75 = $tmp72[$tmp74];
frost$core$Int64 $tmp76 = (frost$core$Int64) {14};
frost$core$Int64 $tmp77 = (frost$core$Int64) {2};
int64_t $tmp78 = $tmp76.value;
$tmp75[$tmp78] = $tmp77;
// line 38
frost$core$Int64** $tmp79 = *(&local0);
frost$core$Int64 $tmp80 = (frost$core$Int64) {1};
frost$core$Int64** $tmp81 = *(&local0);
frost$core$Int64 $tmp82 = (frost$core$Int64) {0};
int64_t $tmp83 = $tmp82.value;
frost$core$Int64* $tmp84 = $tmp81[$tmp83];
int64_t $tmp85 = $tmp80.value;
$tmp79[$tmp85] = $tmp84;
// line 39
frost$core$Int64** $tmp86 = *(&local0);
frost$core$Int64 $tmp87 = (frost$core$Int64) {2};
frost$core$Int64** $tmp88 = *(&local0);
frost$core$Int64 $tmp89 = (frost$core$Int64) {0};
int64_t $tmp90 = $tmp89.value;
frost$core$Int64* $tmp91 = $tmp88[$tmp90];
int64_t $tmp92 = $tmp87.value;
$tmp86[$tmp92] = $tmp91;
// line 40
frost$core$Int64** $tmp93 = *(&local0);
frost$core$Int64 $tmp94 = (frost$core$Int64) {3};
frost$core$Int64** $tmp95 = *(&local0);
frost$core$Int64 $tmp96 = (frost$core$Int64) {0};
int64_t $tmp97 = $tmp96.value;
frost$core$Int64* $tmp98 = $tmp95[$tmp97];
int64_t $tmp99 = $tmp94.value;
$tmp93[$tmp99] = $tmp98;
// line 41
frost$core$Int64** $tmp100 = *(&local0);
frost$core$Int64 $tmp101 = (frost$core$Int64) {4};
frost$core$Int64** $tmp102 = *(&local0);
frost$core$Int64 $tmp103 = (frost$core$Int64) {0};
int64_t $tmp104 = $tmp103.value;
frost$core$Int64* $tmp105 = $tmp102[$tmp104];
int64_t $tmp106 = $tmp101.value;
$tmp100[$tmp106] = $tmp105;
// line 42
frost$core$Int64** $tmp107 = *(&local0);
frost$core$Int64 $tmp108 = (frost$core$Int64) {5};
frost$core$Int64** $tmp109 = *(&local0);
frost$core$Int64 $tmp110 = (frost$core$Int64) {0};
int64_t $tmp111 = $tmp110.value;
frost$core$Int64* $tmp112 = $tmp109[$tmp111];
int64_t $tmp113 = $tmp108.value;
$tmp107[$tmp113] = $tmp112;
// line 43
frost$core$Int64** $tmp114 = *(&local0);
frost$core$Int64 $tmp115 = (frost$core$Int64) {6};
frost$core$Int64** $tmp116 = *(&local0);
frost$core$Int64 $tmp117 = (frost$core$Int64) {0};
int64_t $tmp118 = $tmp117.value;
frost$core$Int64* $tmp119 = $tmp116[$tmp118];
int64_t $tmp120 = $tmp115.value;
$tmp114[$tmp120] = $tmp119;
// line 44
frost$core$Int64** $tmp121 = *(&local0);
frost$core$Int64 $tmp122 = (frost$core$Int64) {7};
frost$core$Int64** $tmp123 = *(&local0);
frost$core$Int64 $tmp124 = (frost$core$Int64) {0};
int64_t $tmp125 = $tmp124.value;
frost$core$Int64* $tmp126 = $tmp123[$tmp125];
int64_t $tmp127 = $tmp122.value;
$tmp121[$tmp127] = $tmp126;
// line 45
frost$core$Int64** $tmp128 = *(&local0);
frost$core$Int64 $tmp129 = (frost$core$Int64) {8};
frost$core$Int64** $tmp130 = *(&local0);
frost$core$Int64 $tmp131 = (frost$core$Int64) {0};
int64_t $tmp132 = $tmp131.value;
frost$core$Int64* $tmp133 = $tmp130[$tmp132];
int64_t $tmp134 = $tmp129.value;
$tmp128[$tmp134] = $tmp133;
// line 46
frost$core$Int64** $tmp135 = *(&local0);
frost$core$Int64 $tmp136 = (frost$core$Int64) {9};
frost$core$Int64** $tmp137 = *(&local0);
frost$core$Int64 $tmp138 = (frost$core$Int64) {0};
int64_t $tmp139 = $tmp138.value;
frost$core$Int64* $tmp140 = $tmp137[$tmp139];
int64_t $tmp141 = $tmp136.value;
$tmp135[$tmp141] = $tmp140;
// line 47
frost$core$Int64** $tmp142 = *(&local0);
frost$core$Int64 $tmp143 = (frost$core$Int64) {10};
frost$core$Int64 $tmp144 = (frost$core$Int64) {20};
frost$core$Int64 $tmp145 = (frost$core$Int64) {0};
frost$core$Int64* $tmp146 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp144, $tmp145);
int64_t $tmp147 = $tmp143.value;
$tmp142[$tmp147] = $tmp146;
// line 48
frost$core$Int64** $tmp148 = *(&local0);
frost$core$Int64 $tmp149 = (frost$core$Int64) {10};
int64_t $tmp150 = $tmp149.value;
frost$core$Int64* $tmp151 = $tmp148[$tmp150];
frost$core$Int64 $tmp152 = (frost$core$Int64) {1};
frost$core$Int64 $tmp153 = (frost$core$Int64) {2};
int64_t $tmp154 = $tmp152.value;
$tmp151[$tmp154] = $tmp153;
// line 49
frost$core$Int64** $tmp155 = *(&local0);
frost$core$Int64 $tmp156 = (frost$core$Int64) {11};
frost$core$Int64** $tmp157 = *(&local0);
frost$core$Int64 $tmp158 = (frost$core$Int64) {0};
int64_t $tmp159 = $tmp158.value;
frost$core$Int64* $tmp160 = $tmp157[$tmp159];
int64_t $tmp161 = $tmp156.value;
$tmp155[$tmp161] = $tmp160;
// line 50
frost$core$Int64** $tmp162 = *(&local0);
frost$core$Int64 $tmp163 = (frost$core$Int64) {12};
frost$core$Int64** $tmp164 = *(&local0);
frost$core$Int64 $tmp165 = (frost$core$Int64) {0};
int64_t $tmp166 = $tmp165.value;
frost$core$Int64* $tmp167 = $tmp164[$tmp166];
int64_t $tmp168 = $tmp163.value;
$tmp162[$tmp168] = $tmp167;
// line 51
frost$core$Int64** $tmp169 = *(&local0);
frost$core$Int64 $tmp170 = (frost$core$Int64) {13};
frost$core$Int64** $tmp171 = *(&local0);
frost$core$Int64 $tmp172 = (frost$core$Int64) {0};
int64_t $tmp173 = $tmp172.value;
frost$core$Int64* $tmp174 = $tmp171[$tmp173];
int64_t $tmp175 = $tmp170.value;
$tmp169[$tmp175] = $tmp174;
// line 52
frost$core$Int64** $tmp176 = *(&local0);
frost$core$Int64 $tmp177 = (frost$core$Int64) {14};
frost$core$Int64** $tmp178 = *(&local0);
frost$core$Int64 $tmp179 = (frost$core$Int64) {0};
int64_t $tmp180 = $tmp179.value;
frost$core$Int64* $tmp181 = $tmp178[$tmp180];
int64_t $tmp182 = $tmp177.value;
$tmp176[$tmp182] = $tmp181;
// line 53
frost$core$Int64** $tmp183 = *(&local0);
frost$core$Int64 $tmp184 = (frost$core$Int64) {15};
frost$core$Int64** $tmp185 = *(&local0);
frost$core$Int64 $tmp186 = (frost$core$Int64) {0};
int64_t $tmp187 = $tmp186.value;
frost$core$Int64* $tmp188 = $tmp185[$tmp187];
int64_t $tmp189 = $tmp184.value;
$tmp183[$tmp189] = $tmp188;
// line 54
frost$core$Int64** $tmp190 = *(&local0);
frost$core$Int64 $tmp191 = (frost$core$Int64) {16};
frost$core$Int64** $tmp192 = *(&local0);
frost$core$Int64 $tmp193 = (frost$core$Int64) {0};
int64_t $tmp194 = $tmp193.value;
frost$core$Int64* $tmp195 = $tmp192[$tmp194];
int64_t $tmp196 = $tmp191.value;
$tmp190[$tmp196] = $tmp195;
// line 55
frost$core$Int64** $tmp197 = *(&local0);
frost$core$Int64 $tmp198 = (frost$core$Int64) {17};
frost$core$Int64** $tmp199 = *(&local0);
frost$core$Int64 $tmp200 = (frost$core$Int64) {0};
int64_t $tmp201 = $tmp200.value;
frost$core$Int64* $tmp202 = $tmp199[$tmp201];
int64_t $tmp203 = $tmp198.value;
$tmp197[$tmp203] = $tmp202;
// line 56
frost$core$Int64** $tmp204 = *(&local0);
frost$core$Int64 $tmp205 = (frost$core$Int64) {18};
frost$core$Int64** $tmp206 = *(&local0);
frost$core$Int64 $tmp207 = (frost$core$Int64) {0};
int64_t $tmp208 = $tmp207.value;
frost$core$Int64* $tmp209 = $tmp206[$tmp208];
int64_t $tmp210 = $tmp205.value;
$tmp204[$tmp210] = $tmp209;
// line 57
frost$core$Int64** $tmp211 = *(&local0);
frost$core$Int64 $tmp212 = (frost$core$Int64) {19};
frost$core$Int64** $tmp213 = *(&local0);
frost$core$Int64 $tmp214 = (frost$core$Int64) {0};
int64_t $tmp215 = $tmp214.value;
frost$core$Int64* $tmp216 = $tmp213[$tmp215];
int64_t $tmp217 = $tmp212.value;
$tmp211[$tmp217] = $tmp216;
// line 58
frost$core$Int64** $tmp218 = *(&local0);
frost$core$Int64 $tmp219 = (frost$core$Int64) {20};
frost$core$Int64** $tmp220 = *(&local0);
frost$core$Int64 $tmp221 = (frost$core$Int64) {0};
int64_t $tmp222 = $tmp221.value;
frost$core$Int64* $tmp223 = $tmp220[$tmp222];
int64_t $tmp224 = $tmp219.value;
$tmp218[$tmp224] = $tmp223;
// line 59
frost$core$Int64** $tmp225 = *(&local0);
frost$core$Int64 $tmp226 = (frost$core$Int64) {21};
frost$core$Int64** $tmp227 = *(&local0);
frost$core$Int64 $tmp228 = (frost$core$Int64) {0};
int64_t $tmp229 = $tmp228.value;
frost$core$Int64* $tmp230 = $tmp227[$tmp229];
int64_t $tmp231 = $tmp226.value;
$tmp225[$tmp231] = $tmp230;
// line 60
frost$core$Int64** $tmp232 = *(&local0);
frost$core$Int64 $tmp233 = (frost$core$Int64) {22};
frost$core$Int64** $tmp234 = *(&local0);
frost$core$Int64 $tmp235 = (frost$core$Int64) {0};
int64_t $tmp236 = $tmp235.value;
frost$core$Int64* $tmp237 = $tmp234[$tmp236];
int64_t $tmp238 = $tmp233.value;
$tmp232[$tmp238] = $tmp237;
// line 61
frost$core$Int64** $tmp239 = *(&local0);
frost$core$Int64 $tmp240 = (frost$core$Int64) {23};
frost$core$Int64** $tmp241 = *(&local0);
frost$core$Int64 $tmp242 = (frost$core$Int64) {0};
int64_t $tmp243 = $tmp242.value;
frost$core$Int64* $tmp244 = $tmp241[$tmp243];
int64_t $tmp245 = $tmp240.value;
$tmp239[$tmp245] = $tmp244;
// line 62
frost$core$Int64** $tmp246 = *(&local0);
frost$core$Int64 $tmp247 = (frost$core$Int64) {24};
frost$core$Int64** $tmp248 = *(&local0);
frost$core$Int64 $tmp249 = (frost$core$Int64) {0};
int64_t $tmp250 = $tmp249.value;
frost$core$Int64* $tmp251 = $tmp248[$tmp250];
int64_t $tmp252 = $tmp247.value;
$tmp246[$tmp252] = $tmp251;
// line 63
frost$core$Int64** $tmp253 = *(&local0);
frost$core$Int64 $tmp254 = (frost$core$Int64) {25};
frost$core$Int64** $tmp255 = *(&local0);
frost$core$Int64 $tmp256 = (frost$core$Int64) {0};
int64_t $tmp257 = $tmp256.value;
frost$core$Int64* $tmp258 = $tmp255[$tmp257];
int64_t $tmp259 = $tmp254.value;
$tmp253[$tmp259] = $tmp258;
// line 64
frost$core$Int64** $tmp260 = *(&local0);
frost$core$Int64 $tmp261 = (frost$core$Int64) {26};
frost$core$Int64** $tmp262 = *(&local0);
frost$core$Int64 $tmp263 = (frost$core$Int64) {0};
int64_t $tmp264 = $tmp263.value;
frost$core$Int64* $tmp265 = $tmp262[$tmp264];
int64_t $tmp266 = $tmp261.value;
$tmp260[$tmp266] = $tmp265;
// line 65
frost$core$Int64** $tmp267 = *(&local0);
frost$core$Int64 $tmp268 = (frost$core$Int64) {27};
frost$core$Int64** $tmp269 = *(&local0);
frost$core$Int64 $tmp270 = (frost$core$Int64) {0};
int64_t $tmp271 = $tmp270.value;
frost$core$Int64* $tmp272 = $tmp269[$tmp271];
int64_t $tmp273 = $tmp268.value;
$tmp267[$tmp273] = $tmp272;
// line 66
frost$core$Int64** $tmp274 = *(&local0);
frost$core$Int64 $tmp275 = (frost$core$Int64) {28};
frost$core$Int64** $tmp276 = *(&local0);
frost$core$Int64 $tmp277 = (frost$core$Int64) {0};
int64_t $tmp278 = $tmp277.value;
frost$core$Int64* $tmp279 = $tmp276[$tmp278];
int64_t $tmp280 = $tmp275.value;
$tmp274[$tmp280] = $tmp279;
// line 67
frost$core$Int64** $tmp281 = *(&local0);
frost$core$Int64 $tmp282 = (frost$core$Int64) {29};
frost$core$Int64** $tmp283 = *(&local0);
frost$core$Int64 $tmp284 = (frost$core$Int64) {0};
int64_t $tmp285 = $tmp284.value;
frost$core$Int64* $tmp286 = $tmp283[$tmp285];
int64_t $tmp287 = $tmp282.value;
$tmp281[$tmp287] = $tmp286;
// line 68
frost$core$Int64** $tmp288 = *(&local0);
frost$core$Int64 $tmp289 = (frost$core$Int64) {30};
frost$core$Int64** $tmp290 = *(&local0);
frost$core$Int64 $tmp291 = (frost$core$Int64) {0};
int64_t $tmp292 = $tmp291.value;
frost$core$Int64* $tmp293 = $tmp290[$tmp292];
int64_t $tmp294 = $tmp289.value;
$tmp288[$tmp294] = $tmp293;
// line 69
frost$core$Int64** $tmp295 = *(&local0);
frost$core$Int64 $tmp296 = (frost$core$Int64) {31};
frost$core$Int64** $tmp297 = *(&local0);
frost$core$Int64 $tmp298 = (frost$core$Int64) {0};
int64_t $tmp299 = $tmp298.value;
frost$core$Int64* $tmp300 = $tmp297[$tmp299];
int64_t $tmp301 = $tmp296.value;
$tmp295[$tmp301] = $tmp300;
// line 70
frost$core$Int64** $tmp302 = *(&local0);
frost$core$Int64 $tmp303 = (frost$core$Int64) {32};
frost$core$Int64** $tmp304 = *(&local0);
frost$core$Int64 $tmp305 = (frost$core$Int64) {0};
int64_t $tmp306 = $tmp305.value;
frost$core$Int64* $tmp307 = $tmp304[$tmp306];
int64_t $tmp308 = $tmp303.value;
$tmp302[$tmp308] = $tmp307;
// line 71
frost$core$Int64** $tmp309 = *(&local0);
frost$core$Int64 $tmp310 = (frost$core$Int64) {33};
frost$core$Int64** $tmp311 = *(&local0);
frost$core$Int64 $tmp312 = (frost$core$Int64) {0};
int64_t $tmp313 = $tmp312.value;
frost$core$Int64* $tmp314 = $tmp311[$tmp313];
int64_t $tmp315 = $tmp310.value;
$tmp309[$tmp315] = $tmp314;
// line 72
frost$core$Int64** $tmp316 = *(&local0);
frost$core$Int64 $tmp317 = (frost$core$Int64) {34};
frost$core$Int64** $tmp318 = *(&local0);
frost$core$Int64 $tmp319 = (frost$core$Int64) {0};
int64_t $tmp320 = $tmp319.value;
frost$core$Int64* $tmp321 = $tmp318[$tmp320];
int64_t $tmp322 = $tmp317.value;
$tmp316[$tmp322] = $tmp321;
// line 73
frost$core$Int64** $tmp323 = *(&local0);
frost$core$Int64 $tmp324 = (frost$core$Int64) {35};
frost$core$Int64** $tmp325 = *(&local0);
frost$core$Int64 $tmp326 = (frost$core$Int64) {0};
int64_t $tmp327 = $tmp326.value;
frost$core$Int64* $tmp328 = $tmp325[$tmp327];
int64_t $tmp329 = $tmp324.value;
$tmp323[$tmp329] = $tmp328;
// line 74
frost$core$Int64** $tmp330 = *(&local0);
frost$core$Int64 $tmp331 = (frost$core$Int64) {36};
frost$core$Int64 $tmp332 = (frost$core$Int64) {20};
frost$core$Int64 $tmp333 = (frost$core$Int64) {0};
frost$core$Int64* $tmp334 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp332, $tmp333);
int64_t $tmp335 = $tmp331.value;
$tmp330[$tmp335] = $tmp334;
// line 75
frost$core$Int64** $tmp336 = *(&local0);
frost$core$Int64 $tmp337 = (frost$core$Int64) {36};
int64_t $tmp338 = $tmp337.value;
frost$core$Int64* $tmp339 = $tmp336[$tmp338];
frost$core$Int64 $tmp340 = (frost$core$Int64) {1};
frost$core$Int64 $tmp341 = (frost$core$Int64) {3};
int64_t $tmp342 = $tmp340.value;
$tmp339[$tmp342] = $tmp341;
// line 76
frost$core$Int64** $tmp343 = *(&local0);
frost$core$Int64 $tmp344 = (frost$core$Int64) {36};
int64_t $tmp345 = $tmp344.value;
frost$core$Int64* $tmp346 = $tmp343[$tmp345];
frost$core$Int64 $tmp347 = (frost$core$Int64) {14};
frost$core$Int64 $tmp348 = (frost$core$Int64) {2};
int64_t $tmp349 = $tmp347.value;
$tmp346[$tmp349] = $tmp348;
// line 77
frost$core$Int64** $tmp350 = *(&local0);
frost$core$Int64 $tmp351 = (frost$core$Int64) {37};
frost$core$Int64** $tmp352 = *(&local0);
frost$core$Int64 $tmp353 = (frost$core$Int64) {0};
int64_t $tmp354 = $tmp353.value;
frost$core$Int64* $tmp355 = $tmp352[$tmp354];
int64_t $tmp356 = $tmp351.value;
$tmp350[$tmp356] = $tmp355;
// line 78
frost$core$Int64** $tmp357 = *(&local0);
frost$core$Int64 $tmp358 = (frost$core$Int64) {38};
frost$core$Int64** $tmp359 = *(&local0);
frost$core$Int64 $tmp360 = (frost$core$Int64) {0};
int64_t $tmp361 = $tmp360.value;
frost$core$Int64* $tmp362 = $tmp359[$tmp361];
int64_t $tmp363 = $tmp358.value;
$tmp357[$tmp363] = $tmp362;
// line 79
frost$core$Int64** $tmp364 = *(&local0);
frost$core$Int64 $tmp365 = (frost$core$Int64) {39};
frost$core$Int64 $tmp366 = (frost$core$Int64) {20};
frost$core$Int64 $tmp367 = (frost$core$Int64) {0};
frost$core$Int64* $tmp368 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp366, $tmp367);
int64_t $tmp369 = $tmp365.value;
$tmp364[$tmp369] = $tmp368;
// line 80
frost$core$Int64** $tmp370 = *(&local0);
frost$core$Int64 $tmp371 = (frost$core$Int64) {39};
int64_t $tmp372 = $tmp371.value;
frost$core$Int64* $tmp373 = $tmp370[$tmp372];
frost$core$Int64 $tmp374 = (frost$core$Int64) {1};
frost$core$Int64 $tmp375 = (frost$core$Int64) {4};
int64_t $tmp376 = $tmp374.value;
$tmp373[$tmp376] = $tmp375;
// line 81
frost$core$Int64** $tmp377 = *(&local0);
frost$core$Int64 $tmp378 = (frost$core$Int64) {39};
int64_t $tmp379 = $tmp378.value;
frost$core$Int64* $tmp380 = $tmp377[$tmp379];
frost$core$Int64 $tmp381 = (frost$core$Int64) {14};
frost$core$Int64 $tmp382 = (frost$core$Int64) {2};
int64_t $tmp383 = $tmp381.value;
$tmp380[$tmp383] = $tmp382;
// line 82
frost$core$Int64** $tmp384 = *(&local0);
frost$core$Int64 $tmp385 = (frost$core$Int64) {40};
frost$core$Int64 $tmp386 = (frost$core$Int64) {20};
frost$core$Int64 $tmp387 = (frost$core$Int64) {0};
frost$core$Int64* $tmp388 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp386, $tmp387);
int64_t $tmp389 = $tmp385.value;
$tmp384[$tmp389] = $tmp388;
// line 83
frost$core$Int64** $tmp390 = *(&local0);
frost$core$Int64 $tmp391 = (frost$core$Int64) {40};
int64_t $tmp392 = $tmp391.value;
frost$core$Int64* $tmp393 = $tmp390[$tmp392];
frost$core$Int64 $tmp394 = (frost$core$Int64) {1};
frost$core$Int64 $tmp395 = (frost$core$Int64) {5};
int64_t $tmp396 = $tmp394.value;
$tmp393[$tmp396] = $tmp395;
// line 84
frost$core$Int64** $tmp397 = *(&local0);
frost$core$Int64 $tmp398 = (frost$core$Int64) {40};
int64_t $tmp399 = $tmp398.value;
frost$core$Int64* $tmp400 = $tmp397[$tmp399];
frost$core$Int64 $tmp401 = (frost$core$Int64) {14};
frost$core$Int64 $tmp402 = (frost$core$Int64) {2};
int64_t $tmp403 = $tmp401.value;
$tmp400[$tmp403] = $tmp402;
// line 85
frost$core$Int64** $tmp404 = *(&local0);
frost$core$Int64 $tmp405 = (frost$core$Int64) {41};
frost$core$Int64 $tmp406 = (frost$core$Int64) {20};
frost$core$Int64 $tmp407 = (frost$core$Int64) {0};
frost$core$Int64* $tmp408 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp406, $tmp407);
int64_t $tmp409 = $tmp405.value;
$tmp404[$tmp409] = $tmp408;
// line 86
frost$core$Int64** $tmp410 = *(&local0);
frost$core$Int64 $tmp411 = (frost$core$Int64) {41};
int64_t $tmp412 = $tmp411.value;
frost$core$Int64* $tmp413 = $tmp410[$tmp412];
frost$core$Int64 $tmp414 = (frost$core$Int64) {1};
frost$core$Int64 $tmp415 = (frost$core$Int64) {6};
int64_t $tmp416 = $tmp414.value;
$tmp413[$tmp416] = $tmp415;
// line 87
frost$core$Int64** $tmp417 = *(&local0);
frost$core$Int64 $tmp418 = (frost$core$Int64) {41};
int64_t $tmp419 = $tmp418.value;
frost$core$Int64* $tmp420 = $tmp417[$tmp419];
frost$core$Int64 $tmp421 = (frost$core$Int64) {14};
frost$core$Int64 $tmp422 = (frost$core$Int64) {2};
int64_t $tmp423 = $tmp421.value;
$tmp420[$tmp423] = $tmp422;
// line 88
frost$core$Int64** $tmp424 = *(&local0);
frost$core$Int64 $tmp425 = (frost$core$Int64) {42};
frost$core$Int64 $tmp426 = (frost$core$Int64) {20};
frost$core$Int64 $tmp427 = (frost$core$Int64) {0};
frost$core$Int64* $tmp428 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp426, $tmp427);
int64_t $tmp429 = $tmp425.value;
$tmp424[$tmp429] = $tmp428;
// line 89
frost$core$Int64** $tmp430 = *(&local0);
frost$core$Int64 $tmp431 = (frost$core$Int64) {42};
int64_t $tmp432 = $tmp431.value;
frost$core$Int64* $tmp433 = $tmp430[$tmp432];
frost$core$Int64 $tmp434 = (frost$core$Int64) {1};
frost$core$Int64 $tmp435 = (frost$core$Int64) {7};
int64_t $tmp436 = $tmp434.value;
$tmp433[$tmp436] = $tmp435;
// line 90
frost$core$Int64** $tmp437 = *(&local0);
frost$core$Int64 $tmp438 = (frost$core$Int64) {42};
int64_t $tmp439 = $tmp438.value;
frost$core$Int64* $tmp440 = $tmp437[$tmp439];
frost$core$Int64 $tmp441 = (frost$core$Int64) {14};
frost$core$Int64 $tmp442 = (frost$core$Int64) {2};
int64_t $tmp443 = $tmp441.value;
$tmp440[$tmp443] = $tmp442;
// line 91
frost$core$Int64** $tmp444 = *(&local0);
frost$core$Int64 $tmp445 = (frost$core$Int64) {43};
frost$core$Int64 $tmp446 = (frost$core$Int64) {20};
frost$core$Int64 $tmp447 = (frost$core$Int64) {0};
frost$core$Int64* $tmp448 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp446, $tmp447);
int64_t $tmp449 = $tmp445.value;
$tmp444[$tmp449] = $tmp448;
// line 92
frost$core$Int64** $tmp450 = *(&local0);
frost$core$Int64 $tmp451 = (frost$core$Int64) {43};
int64_t $tmp452 = $tmp451.value;
frost$core$Int64* $tmp453 = $tmp450[$tmp452];
frost$core$Int64 $tmp454 = (frost$core$Int64) {1};
frost$core$Int64 $tmp455 = (frost$core$Int64) {8};
int64_t $tmp456 = $tmp454.value;
$tmp453[$tmp456] = $tmp455;
// line 93
frost$core$Int64** $tmp457 = *(&local0);
frost$core$Int64 $tmp458 = (frost$core$Int64) {43};
int64_t $tmp459 = $tmp458.value;
frost$core$Int64* $tmp460 = $tmp457[$tmp459];
frost$core$Int64 $tmp461 = (frost$core$Int64) {14};
frost$core$Int64 $tmp462 = (frost$core$Int64) {2};
int64_t $tmp463 = $tmp461.value;
$tmp460[$tmp463] = $tmp462;
// line 94
frost$core$Int64** $tmp464 = *(&local0);
frost$core$Int64 $tmp465 = (frost$core$Int64) {44};
frost$core$Int64 $tmp466 = (frost$core$Int64) {20};
frost$core$Int64 $tmp467 = (frost$core$Int64) {0};
frost$core$Int64* $tmp468 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp466, $tmp467);
int64_t $tmp469 = $tmp465.value;
$tmp464[$tmp469] = $tmp468;
// line 95
frost$core$Int64** $tmp470 = *(&local0);
frost$core$Int64 $tmp471 = (frost$core$Int64) {44};
int64_t $tmp472 = $tmp471.value;
frost$core$Int64* $tmp473 = $tmp470[$tmp472];
frost$core$Int64 $tmp474 = (frost$core$Int64) {1};
frost$core$Int64 $tmp475 = (frost$core$Int64) {9};
int64_t $tmp476 = $tmp474.value;
$tmp473[$tmp476] = $tmp475;
// line 96
frost$core$Int64** $tmp477 = *(&local0);
frost$core$Int64 $tmp478 = (frost$core$Int64) {44};
int64_t $tmp479 = $tmp478.value;
frost$core$Int64* $tmp480 = $tmp477[$tmp479];
frost$core$Int64 $tmp481 = (frost$core$Int64) {14};
frost$core$Int64 $tmp482 = (frost$core$Int64) {2};
int64_t $tmp483 = $tmp481.value;
$tmp480[$tmp483] = $tmp482;
// line 97
frost$core$Int64** $tmp484 = *(&local0);
frost$core$Int64 $tmp485 = (frost$core$Int64) {45};
frost$core$Int64** $tmp486 = *(&local0);
frost$core$Int64 $tmp487 = (frost$core$Int64) {0};
int64_t $tmp488 = $tmp487.value;
frost$core$Int64* $tmp489 = $tmp486[$tmp488];
int64_t $tmp490 = $tmp485.value;
$tmp484[$tmp490] = $tmp489;
// line 98
frost$core$Int64** $tmp491 = *(&local0);
frost$core$Int64 $tmp492 = (frost$core$Int64) {46};
frost$core$Int64** $tmp493 = *(&local0);
frost$core$Int64 $tmp494 = (frost$core$Int64) {0};
int64_t $tmp495 = $tmp494.value;
frost$core$Int64* $tmp496 = $tmp493[$tmp495];
int64_t $tmp497 = $tmp492.value;
$tmp491[$tmp497] = $tmp496;
// line 99
frost$core$Int64** $tmp498 = *(&local0);
frost$core$Int64 $tmp499 = (frost$core$Int64) {47};
frost$core$Int64 $tmp500 = (frost$core$Int64) {20};
frost$core$Int64 $tmp501 = (frost$core$Int64) {0};
frost$core$Int64* $tmp502 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp500, $tmp501);
int64_t $tmp503 = $tmp499.value;
$tmp498[$tmp503] = $tmp502;
// line 100
frost$core$Int64** $tmp504 = *(&local0);
frost$core$Int64 $tmp505 = (frost$core$Int64) {47};
int64_t $tmp506 = $tmp505.value;
frost$core$Int64* $tmp507 = $tmp504[$tmp506];
frost$core$Int64 $tmp508 = (frost$core$Int64) {1};
frost$core$Int64 $tmp509 = (frost$core$Int64) {10};
int64_t $tmp510 = $tmp508.value;
$tmp507[$tmp510] = $tmp509;
// line 101
frost$core$Int64** $tmp511 = *(&local0);
frost$core$Int64 $tmp512 = (frost$core$Int64) {47};
int64_t $tmp513 = $tmp512.value;
frost$core$Int64* $tmp514 = $tmp511[$tmp513];
frost$core$Int64 $tmp515 = (frost$core$Int64) {14};
frost$core$Int64 $tmp516 = (frost$core$Int64) {2};
int64_t $tmp517 = $tmp515.value;
$tmp514[$tmp517] = $tmp516;
// line 102
frost$core$Int64** $tmp518 = *(&local0);
frost$core$Int64 $tmp519 = (frost$core$Int64) {48};
frost$core$Int64 $tmp520 = (frost$core$Int64) {20};
frost$core$Int64 $tmp521 = (frost$core$Int64) {0};
frost$core$Int64* $tmp522 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp520, $tmp521);
int64_t $tmp523 = $tmp519.value;
$tmp518[$tmp523] = $tmp522;
// line 103
frost$core$Int64** $tmp524 = *(&local0);
frost$core$Int64 $tmp525 = (frost$core$Int64) {48};
int64_t $tmp526 = $tmp525.value;
frost$core$Int64* $tmp527 = $tmp524[$tmp526];
frost$core$Int64 $tmp528 = (frost$core$Int64) {1};
frost$core$Int64 $tmp529 = (frost$core$Int64) {11};
int64_t $tmp530 = $tmp528.value;
$tmp527[$tmp530] = $tmp529;
// line 104
frost$core$Int64** $tmp531 = *(&local0);
frost$core$Int64 $tmp532 = (frost$core$Int64) {48};
int64_t $tmp533 = $tmp532.value;
frost$core$Int64* $tmp534 = $tmp531[$tmp533];
frost$core$Int64 $tmp535 = (frost$core$Int64) {14};
frost$core$Int64 $tmp536 = (frost$core$Int64) {2};
int64_t $tmp537 = $tmp535.value;
$tmp534[$tmp537] = $tmp536;
// line 105
frost$core$Int64** $tmp538 = *(&local0);
frost$core$Int64 $tmp539 = (frost$core$Int64) {49};
frost$core$Int64** $tmp540 = *(&local0);
frost$core$Int64 $tmp541 = (frost$core$Int64) {48};
int64_t $tmp542 = $tmp541.value;
frost$core$Int64* $tmp543 = $tmp540[$tmp542];
int64_t $tmp544 = $tmp539.value;
$tmp538[$tmp544] = $tmp543;
// line 106
frost$core$Int64** $tmp545 = *(&local0);
frost$core$Int64 $tmp546 = (frost$core$Int64) {50};
frost$core$Int64** $tmp547 = *(&local0);
frost$core$Int64 $tmp548 = (frost$core$Int64) {48};
int64_t $tmp549 = $tmp548.value;
frost$core$Int64* $tmp550 = $tmp547[$tmp549];
int64_t $tmp551 = $tmp546.value;
$tmp545[$tmp551] = $tmp550;
// line 107
frost$core$Int64** $tmp552 = *(&local0);
frost$core$Int64 $tmp553 = (frost$core$Int64) {51};
frost$core$Int64** $tmp554 = *(&local0);
frost$core$Int64 $tmp555 = (frost$core$Int64) {48};
int64_t $tmp556 = $tmp555.value;
frost$core$Int64* $tmp557 = $tmp554[$tmp556];
int64_t $tmp558 = $tmp553.value;
$tmp552[$tmp558] = $tmp557;
// line 108
frost$core$Int64** $tmp559 = *(&local0);
frost$core$Int64 $tmp560 = (frost$core$Int64) {52};
frost$core$Int64** $tmp561 = *(&local0);
frost$core$Int64 $tmp562 = (frost$core$Int64) {48};
int64_t $tmp563 = $tmp562.value;
frost$core$Int64* $tmp564 = $tmp561[$tmp563];
int64_t $tmp565 = $tmp560.value;
$tmp559[$tmp565] = $tmp564;
// line 109
frost$core$Int64** $tmp566 = *(&local0);
frost$core$Int64 $tmp567 = (frost$core$Int64) {53};
frost$core$Int64** $tmp568 = *(&local0);
frost$core$Int64 $tmp569 = (frost$core$Int64) {48};
int64_t $tmp570 = $tmp569.value;
frost$core$Int64* $tmp571 = $tmp568[$tmp570];
int64_t $tmp572 = $tmp567.value;
$tmp566[$tmp572] = $tmp571;
// line 110
frost$core$Int64** $tmp573 = *(&local0);
frost$core$Int64 $tmp574 = (frost$core$Int64) {54};
frost$core$Int64** $tmp575 = *(&local0);
frost$core$Int64 $tmp576 = (frost$core$Int64) {48};
int64_t $tmp577 = $tmp576.value;
frost$core$Int64* $tmp578 = $tmp575[$tmp577];
int64_t $tmp579 = $tmp574.value;
$tmp573[$tmp579] = $tmp578;
// line 111
frost$core$Int64** $tmp580 = *(&local0);
frost$core$Int64 $tmp581 = (frost$core$Int64) {55};
frost$core$Int64** $tmp582 = *(&local0);
frost$core$Int64 $tmp583 = (frost$core$Int64) {48};
int64_t $tmp584 = $tmp583.value;
frost$core$Int64* $tmp585 = $tmp582[$tmp584];
int64_t $tmp586 = $tmp581.value;
$tmp580[$tmp586] = $tmp585;
// line 112
frost$core$Int64** $tmp587 = *(&local0);
frost$core$Int64 $tmp588 = (frost$core$Int64) {56};
frost$core$Int64** $tmp589 = *(&local0);
frost$core$Int64 $tmp590 = (frost$core$Int64) {48};
int64_t $tmp591 = $tmp590.value;
frost$core$Int64* $tmp592 = $tmp589[$tmp591];
int64_t $tmp593 = $tmp588.value;
$tmp587[$tmp593] = $tmp592;
// line 113
frost$core$Int64** $tmp594 = *(&local0);
frost$core$Int64 $tmp595 = (frost$core$Int64) {57};
frost$core$Int64** $tmp596 = *(&local0);
frost$core$Int64 $tmp597 = (frost$core$Int64) {48};
int64_t $tmp598 = $tmp597.value;
frost$core$Int64* $tmp599 = $tmp596[$tmp598];
int64_t $tmp600 = $tmp595.value;
$tmp594[$tmp600] = $tmp599;
// line 114
frost$core$Int64** $tmp601 = *(&local0);
frost$core$Int64 $tmp602 = (frost$core$Int64) {58};
frost$core$Int64** $tmp603 = *(&local0);
frost$core$Int64 $tmp604 = (frost$core$Int64) {0};
int64_t $tmp605 = $tmp604.value;
frost$core$Int64* $tmp606 = $tmp603[$tmp605];
int64_t $tmp607 = $tmp602.value;
$tmp601[$tmp607] = $tmp606;
// line 115
frost$core$Int64** $tmp608 = *(&local0);
frost$core$Int64 $tmp609 = (frost$core$Int64) {59};
frost$core$Int64** $tmp610 = *(&local0);
frost$core$Int64 $tmp611 = (frost$core$Int64) {0};
int64_t $tmp612 = $tmp611.value;
frost$core$Int64* $tmp613 = $tmp610[$tmp612];
int64_t $tmp614 = $tmp609.value;
$tmp608[$tmp614] = $tmp613;
// line 116
frost$core$Int64** $tmp615 = *(&local0);
frost$core$Int64 $tmp616 = (frost$core$Int64) {60};
frost$core$Int64** $tmp617 = *(&local0);
frost$core$Int64 $tmp618 = (frost$core$Int64) {0};
int64_t $tmp619 = $tmp618.value;
frost$core$Int64* $tmp620 = $tmp617[$tmp619];
int64_t $tmp621 = $tmp616.value;
$tmp615[$tmp621] = $tmp620;
// line 117
frost$core$Int64** $tmp622 = *(&local0);
frost$core$Int64 $tmp623 = (frost$core$Int64) {61};
frost$core$Int64** $tmp624 = *(&local0);
frost$core$Int64 $tmp625 = (frost$core$Int64) {0};
int64_t $tmp626 = $tmp625.value;
frost$core$Int64* $tmp627 = $tmp624[$tmp626];
int64_t $tmp628 = $tmp623.value;
$tmp622[$tmp628] = $tmp627;
// line 118
frost$core$Int64** $tmp629 = *(&local0);
frost$core$Int64 $tmp630 = (frost$core$Int64) {62};
frost$core$Int64** $tmp631 = *(&local0);
frost$core$Int64 $tmp632 = (frost$core$Int64) {0};
int64_t $tmp633 = $tmp632.value;
frost$core$Int64* $tmp634 = $tmp631[$tmp633];
int64_t $tmp635 = $tmp630.value;
$tmp629[$tmp635] = $tmp634;
// line 119
frost$core$Int64** $tmp636 = *(&local0);
frost$core$Int64 $tmp637 = (frost$core$Int64) {63};
frost$core$Int64 $tmp638 = (frost$core$Int64) {20};
frost$core$Int64 $tmp639 = (frost$core$Int64) {0};
frost$core$Int64* $tmp640 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp638, $tmp639);
int64_t $tmp641 = $tmp637.value;
$tmp636[$tmp641] = $tmp640;
// line 120
frost$core$Int64** $tmp642 = *(&local0);
frost$core$Int64 $tmp643 = (frost$core$Int64) {63};
int64_t $tmp644 = $tmp643.value;
frost$core$Int64* $tmp645 = $tmp642[$tmp644];
frost$core$Int64 $tmp646 = (frost$core$Int64) {1};
frost$core$Int64 $tmp647 = (frost$core$Int64) {12};
int64_t $tmp648 = $tmp646.value;
$tmp645[$tmp648] = $tmp647;
// line 121
frost$core$Int64** $tmp649 = *(&local0);
frost$core$Int64 $tmp650 = (frost$core$Int64) {63};
int64_t $tmp651 = $tmp650.value;
frost$core$Int64* $tmp652 = $tmp649[$tmp651];
frost$core$Int64 $tmp653 = (frost$core$Int64) {14};
frost$core$Int64 $tmp654 = (frost$core$Int64) {2};
int64_t $tmp655 = $tmp653.value;
$tmp652[$tmp655] = $tmp654;
// line 122
frost$core$Int64** $tmp656 = *(&local0);
frost$core$Int64 $tmp657 = (frost$core$Int64) {64};
frost$core$Int64** $tmp658 = *(&local0);
frost$core$Int64 $tmp659 = (frost$core$Int64) {0};
int64_t $tmp660 = $tmp659.value;
frost$core$Int64* $tmp661 = $tmp658[$tmp660];
int64_t $tmp662 = $tmp657.value;
$tmp656[$tmp662] = $tmp661;
// line 123
frost$core$Int64** $tmp663 = *(&local0);
frost$core$Int64 $tmp664 = (frost$core$Int64) {65};
frost$core$Int64** $tmp665 = *(&local0);
frost$core$Int64 $tmp666 = (frost$core$Int64) {0};
int64_t $tmp667 = $tmp666.value;
frost$core$Int64* $tmp668 = $tmp665[$tmp667];
int64_t $tmp669 = $tmp664.value;
$tmp663[$tmp669] = $tmp668;
// line 124
frost$core$Int64** $tmp670 = *(&local0);
frost$core$Int64 $tmp671 = (frost$core$Int64) {66};
frost$core$Int64** $tmp672 = *(&local0);
frost$core$Int64 $tmp673 = (frost$core$Int64) {0};
int64_t $tmp674 = $tmp673.value;
frost$core$Int64* $tmp675 = $tmp672[$tmp674];
int64_t $tmp676 = $tmp671.value;
$tmp670[$tmp676] = $tmp675;
// line 125
frost$core$Int64** $tmp677 = *(&local0);
frost$core$Int64 $tmp678 = (frost$core$Int64) {67};
frost$core$Int64** $tmp679 = *(&local0);
frost$core$Int64 $tmp680 = (frost$core$Int64) {0};
int64_t $tmp681 = $tmp680.value;
frost$core$Int64* $tmp682 = $tmp679[$tmp681];
int64_t $tmp683 = $tmp678.value;
$tmp677[$tmp683] = $tmp682;
// line 126
frost$core$Int64** $tmp684 = *(&local0);
frost$core$Int64 $tmp685 = (frost$core$Int64) {68};
frost$core$Int64** $tmp686 = *(&local0);
frost$core$Int64 $tmp687 = (frost$core$Int64) {0};
int64_t $tmp688 = $tmp687.value;
frost$core$Int64* $tmp689 = $tmp686[$tmp688];
int64_t $tmp690 = $tmp685.value;
$tmp684[$tmp690] = $tmp689;
// line 127
frost$core$Int64** $tmp691 = *(&local0);
frost$core$Int64 $tmp692 = (frost$core$Int64) {69};
frost$core$Int64** $tmp693 = *(&local0);
frost$core$Int64 $tmp694 = (frost$core$Int64) {0};
int64_t $tmp695 = $tmp694.value;
frost$core$Int64* $tmp696 = $tmp693[$tmp695];
int64_t $tmp697 = $tmp692.value;
$tmp691[$tmp697] = $tmp696;
// line 128
frost$core$Int64** $tmp698 = *(&local0);
frost$core$Int64 $tmp699 = (frost$core$Int64) {70};
frost$core$Int64** $tmp700 = *(&local0);
frost$core$Int64 $tmp701 = (frost$core$Int64) {0};
int64_t $tmp702 = $tmp701.value;
frost$core$Int64* $tmp703 = $tmp700[$tmp702];
int64_t $tmp704 = $tmp699.value;
$tmp698[$tmp704] = $tmp703;
// line 129
frost$core$Int64** $tmp705 = *(&local0);
frost$core$Int64 $tmp706 = (frost$core$Int64) {71};
frost$core$Int64** $tmp707 = *(&local0);
frost$core$Int64 $tmp708 = (frost$core$Int64) {0};
int64_t $tmp709 = $tmp708.value;
frost$core$Int64* $tmp710 = $tmp707[$tmp709];
int64_t $tmp711 = $tmp706.value;
$tmp705[$tmp711] = $tmp710;
// line 130
frost$core$Int64** $tmp712 = *(&local0);
frost$core$Int64 $tmp713 = (frost$core$Int64) {72};
frost$core$Int64** $tmp714 = *(&local0);
frost$core$Int64 $tmp715 = (frost$core$Int64) {0};
int64_t $tmp716 = $tmp715.value;
frost$core$Int64* $tmp717 = $tmp714[$tmp716];
int64_t $tmp718 = $tmp713.value;
$tmp712[$tmp718] = $tmp717;
// line 131
frost$core$Int64** $tmp719 = *(&local0);
frost$core$Int64 $tmp720 = (frost$core$Int64) {73};
frost$core$Int64** $tmp721 = *(&local0);
frost$core$Int64 $tmp722 = (frost$core$Int64) {0};
int64_t $tmp723 = $tmp722.value;
frost$core$Int64* $tmp724 = $tmp721[$tmp723];
int64_t $tmp725 = $tmp720.value;
$tmp719[$tmp725] = $tmp724;
// line 132
frost$core$Int64** $tmp726 = *(&local0);
frost$core$Int64 $tmp727 = (frost$core$Int64) {74};
frost$core$Int64** $tmp728 = *(&local0);
frost$core$Int64 $tmp729 = (frost$core$Int64) {0};
int64_t $tmp730 = $tmp729.value;
frost$core$Int64* $tmp731 = $tmp728[$tmp730];
int64_t $tmp732 = $tmp727.value;
$tmp726[$tmp732] = $tmp731;
// line 133
frost$core$Int64** $tmp733 = *(&local0);
frost$core$Int64 $tmp734 = (frost$core$Int64) {75};
frost$core$Int64** $tmp735 = *(&local0);
frost$core$Int64 $tmp736 = (frost$core$Int64) {0};
int64_t $tmp737 = $tmp736.value;
frost$core$Int64* $tmp738 = $tmp735[$tmp737];
int64_t $tmp739 = $tmp734.value;
$tmp733[$tmp739] = $tmp738;
// line 134
frost$core$Int64** $tmp740 = *(&local0);
frost$core$Int64 $tmp741 = (frost$core$Int64) {76};
frost$core$Int64** $tmp742 = *(&local0);
frost$core$Int64 $tmp743 = (frost$core$Int64) {0};
int64_t $tmp744 = $tmp743.value;
frost$core$Int64* $tmp745 = $tmp742[$tmp744];
int64_t $tmp746 = $tmp741.value;
$tmp740[$tmp746] = $tmp745;
// line 135
frost$core$Int64** $tmp747 = *(&local0);
frost$core$Int64 $tmp748 = (frost$core$Int64) {77};
frost$core$Int64** $tmp749 = *(&local0);
frost$core$Int64 $tmp750 = (frost$core$Int64) {0};
int64_t $tmp751 = $tmp750.value;
frost$core$Int64* $tmp752 = $tmp749[$tmp751];
int64_t $tmp753 = $tmp748.value;
$tmp747[$tmp753] = $tmp752;
// line 136
frost$core$Int64** $tmp754 = *(&local0);
frost$core$Int64 $tmp755 = (frost$core$Int64) {78};
frost$core$Int64** $tmp756 = *(&local0);
frost$core$Int64 $tmp757 = (frost$core$Int64) {0};
int64_t $tmp758 = $tmp757.value;
frost$core$Int64* $tmp759 = $tmp756[$tmp758];
int64_t $tmp760 = $tmp755.value;
$tmp754[$tmp760] = $tmp759;
// line 137
frost$core$Int64** $tmp761 = *(&local0);
frost$core$Int64 $tmp762 = (frost$core$Int64) {79};
frost$core$Int64** $tmp763 = *(&local0);
frost$core$Int64 $tmp764 = (frost$core$Int64) {0};
int64_t $tmp765 = $tmp764.value;
frost$core$Int64* $tmp766 = $tmp763[$tmp765];
int64_t $tmp767 = $tmp762.value;
$tmp761[$tmp767] = $tmp766;
// line 138
frost$core$Int64** $tmp768 = *(&local0);
frost$core$Int64 $tmp769 = (frost$core$Int64) {80};
frost$core$Int64** $tmp770 = *(&local0);
frost$core$Int64 $tmp771 = (frost$core$Int64) {0};
int64_t $tmp772 = $tmp771.value;
frost$core$Int64* $tmp773 = $tmp770[$tmp772];
int64_t $tmp774 = $tmp769.value;
$tmp768[$tmp774] = $tmp773;
// line 139
frost$core$Int64** $tmp775 = *(&local0);
frost$core$Int64 $tmp776 = (frost$core$Int64) {81};
frost$core$Int64** $tmp777 = *(&local0);
frost$core$Int64 $tmp778 = (frost$core$Int64) {0};
int64_t $tmp779 = $tmp778.value;
frost$core$Int64* $tmp780 = $tmp777[$tmp779];
int64_t $tmp781 = $tmp776.value;
$tmp775[$tmp781] = $tmp780;
// line 140
frost$core$Int64** $tmp782 = *(&local0);
frost$core$Int64 $tmp783 = (frost$core$Int64) {82};
frost$core$Int64** $tmp784 = *(&local0);
frost$core$Int64 $tmp785 = (frost$core$Int64) {0};
int64_t $tmp786 = $tmp785.value;
frost$core$Int64* $tmp787 = $tmp784[$tmp786];
int64_t $tmp788 = $tmp783.value;
$tmp782[$tmp788] = $tmp787;
// line 141
frost$core$Int64** $tmp789 = *(&local0);
frost$core$Int64 $tmp790 = (frost$core$Int64) {83};
frost$core$Int64** $tmp791 = *(&local0);
frost$core$Int64 $tmp792 = (frost$core$Int64) {0};
int64_t $tmp793 = $tmp792.value;
frost$core$Int64* $tmp794 = $tmp791[$tmp793];
int64_t $tmp795 = $tmp790.value;
$tmp789[$tmp795] = $tmp794;
// line 142
frost$core$Int64** $tmp796 = *(&local0);
frost$core$Int64 $tmp797 = (frost$core$Int64) {84};
frost$core$Int64** $tmp798 = *(&local0);
frost$core$Int64 $tmp799 = (frost$core$Int64) {0};
int64_t $tmp800 = $tmp799.value;
frost$core$Int64* $tmp801 = $tmp798[$tmp800];
int64_t $tmp802 = $tmp797.value;
$tmp796[$tmp802] = $tmp801;
// line 143
frost$core$Int64** $tmp803 = *(&local0);
frost$core$Int64 $tmp804 = (frost$core$Int64) {85};
frost$core$Int64** $tmp805 = *(&local0);
frost$core$Int64 $tmp806 = (frost$core$Int64) {0};
int64_t $tmp807 = $tmp806.value;
frost$core$Int64* $tmp808 = $tmp805[$tmp807];
int64_t $tmp809 = $tmp804.value;
$tmp803[$tmp809] = $tmp808;
// line 144
frost$core$Int64** $tmp810 = *(&local0);
frost$core$Int64 $tmp811 = (frost$core$Int64) {86};
frost$core$Int64** $tmp812 = *(&local0);
frost$core$Int64 $tmp813 = (frost$core$Int64) {0};
int64_t $tmp814 = $tmp813.value;
frost$core$Int64* $tmp815 = $tmp812[$tmp814];
int64_t $tmp816 = $tmp811.value;
$tmp810[$tmp816] = $tmp815;
// line 145
frost$core$Int64** $tmp817 = *(&local0);
frost$core$Int64 $tmp818 = (frost$core$Int64) {87};
frost$core$Int64** $tmp819 = *(&local0);
frost$core$Int64 $tmp820 = (frost$core$Int64) {0};
int64_t $tmp821 = $tmp820.value;
frost$core$Int64* $tmp822 = $tmp819[$tmp821];
int64_t $tmp823 = $tmp818.value;
$tmp817[$tmp823] = $tmp822;
// line 146
frost$core$Int64** $tmp824 = *(&local0);
frost$core$Int64 $tmp825 = (frost$core$Int64) {88};
frost$core$Int64** $tmp826 = *(&local0);
frost$core$Int64 $tmp827 = (frost$core$Int64) {0};
int64_t $tmp828 = $tmp827.value;
frost$core$Int64* $tmp829 = $tmp826[$tmp828];
int64_t $tmp830 = $tmp825.value;
$tmp824[$tmp830] = $tmp829;
// line 147
frost$core$Int64** $tmp831 = *(&local0);
frost$core$Int64 $tmp832 = (frost$core$Int64) {89};
frost$core$Int64** $tmp833 = *(&local0);
frost$core$Int64 $tmp834 = (frost$core$Int64) {0};
int64_t $tmp835 = $tmp834.value;
frost$core$Int64* $tmp836 = $tmp833[$tmp835];
int64_t $tmp837 = $tmp832.value;
$tmp831[$tmp837] = $tmp836;
// line 148
frost$core$Int64** $tmp838 = *(&local0);
frost$core$Int64 $tmp839 = (frost$core$Int64) {90};
frost$core$Int64** $tmp840 = *(&local0);
frost$core$Int64 $tmp841 = (frost$core$Int64) {0};
int64_t $tmp842 = $tmp841.value;
frost$core$Int64* $tmp843 = $tmp840[$tmp842];
int64_t $tmp844 = $tmp839.value;
$tmp838[$tmp844] = $tmp843;
// line 149
frost$core$Int64** $tmp845 = *(&local0);
frost$core$Int64 $tmp846 = (frost$core$Int64) {91};
frost$core$Int64 $tmp847 = (frost$core$Int64) {20};
frost$core$Int64 $tmp848 = (frost$core$Int64) {0};
frost$core$Int64* $tmp849 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp847, $tmp848);
int64_t $tmp850 = $tmp846.value;
$tmp845[$tmp850] = $tmp849;
// line 150
frost$core$Int64** $tmp851 = *(&local0);
frost$core$Int64 $tmp852 = (frost$core$Int64) {91};
int64_t $tmp853 = $tmp852.value;
frost$core$Int64* $tmp854 = $tmp851[$tmp853];
frost$core$Int64 $tmp855 = (frost$core$Int64) {1};
frost$core$Int64 $tmp856 = (frost$core$Int64) {13};
int64_t $tmp857 = $tmp855.value;
$tmp854[$tmp857] = $tmp856;
// line 151
frost$core$Int64** $tmp858 = *(&local0);
frost$core$Int64 $tmp859 = (frost$core$Int64) {91};
int64_t $tmp860 = $tmp859.value;
frost$core$Int64* $tmp861 = $tmp858[$tmp860];
frost$core$Int64 $tmp862 = (frost$core$Int64) {14};
frost$core$Int64 $tmp863 = (frost$core$Int64) {2};
int64_t $tmp864 = $tmp862.value;
$tmp861[$tmp864] = $tmp863;
// line 152
frost$core$Int64** $tmp865 = *(&local0);
frost$core$Int64 $tmp866 = (frost$core$Int64) {92};
frost$core$Int64 $tmp867 = (frost$core$Int64) {20};
frost$core$Int64 $tmp868 = (frost$core$Int64) {0};
frost$core$Int64* $tmp869 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp867, $tmp868);
int64_t $tmp870 = $tmp866.value;
$tmp865[$tmp870] = $tmp869;
// line 153
frost$core$Int64** $tmp871 = *(&local0);
frost$core$Int64 $tmp872 = (frost$core$Int64) {92};
int64_t $tmp873 = $tmp872.value;
frost$core$Int64* $tmp874 = $tmp871[$tmp873];
frost$core$Int64 $tmp875 = (frost$core$Int64) {1};
frost$core$Int64 $tmp876 = (frost$core$Int64) {14};
int64_t $tmp877 = $tmp875.value;
$tmp874[$tmp877] = $tmp876;
// line 154
frost$core$Int64** $tmp878 = *(&local0);
frost$core$Int64 $tmp879 = (frost$core$Int64) {92};
int64_t $tmp880 = $tmp879.value;
frost$core$Int64* $tmp881 = $tmp878[$tmp880];
frost$core$Int64 $tmp882 = (frost$core$Int64) {14};
frost$core$Int64 $tmp883 = (frost$core$Int64) {2};
int64_t $tmp884 = $tmp882.value;
$tmp881[$tmp884] = $tmp883;
// line 155
frost$core$Int64** $tmp885 = *(&local0);
frost$core$Int64 $tmp886 = (frost$core$Int64) {93};
frost$core$Int64 $tmp887 = (frost$core$Int64) {20};
frost$core$Int64 $tmp888 = (frost$core$Int64) {0};
frost$core$Int64* $tmp889 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp887, $tmp888);
int64_t $tmp890 = $tmp886.value;
$tmp885[$tmp890] = $tmp889;
// line 156
frost$core$Int64** $tmp891 = *(&local0);
frost$core$Int64 $tmp892 = (frost$core$Int64) {93};
int64_t $tmp893 = $tmp892.value;
frost$core$Int64* $tmp894 = $tmp891[$tmp893];
frost$core$Int64 $tmp895 = (frost$core$Int64) {1};
frost$core$Int64 $tmp896 = (frost$core$Int64) {15};
int64_t $tmp897 = $tmp895.value;
$tmp894[$tmp897] = $tmp896;
// line 157
frost$core$Int64** $tmp898 = *(&local0);
frost$core$Int64 $tmp899 = (frost$core$Int64) {93};
int64_t $tmp900 = $tmp899.value;
frost$core$Int64* $tmp901 = $tmp898[$tmp900];
frost$core$Int64 $tmp902 = (frost$core$Int64) {14};
frost$core$Int64 $tmp903 = (frost$core$Int64) {2};
int64_t $tmp904 = $tmp902.value;
$tmp901[$tmp904] = $tmp903;
// line 158
frost$core$Int64** $tmp905 = *(&local0);
frost$core$Int64 $tmp906 = (frost$core$Int64) {94};
frost$core$Int64 $tmp907 = (frost$core$Int64) {20};
frost$core$Int64 $tmp908 = (frost$core$Int64) {0};
frost$core$Int64* $tmp909 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp907, $tmp908);
int64_t $tmp910 = $tmp906.value;
$tmp905[$tmp910] = $tmp909;
// line 159
frost$core$Int64** $tmp911 = *(&local0);
frost$core$Int64 $tmp912 = (frost$core$Int64) {94};
int64_t $tmp913 = $tmp912.value;
frost$core$Int64* $tmp914 = $tmp911[$tmp913];
frost$core$Int64 $tmp915 = (frost$core$Int64) {1};
frost$core$Int64 $tmp916 = (frost$core$Int64) {16};
int64_t $tmp917 = $tmp915.value;
$tmp914[$tmp917] = $tmp916;
// line 160
frost$core$Int64** $tmp918 = *(&local0);
frost$core$Int64 $tmp919 = (frost$core$Int64) {94};
int64_t $tmp920 = $tmp919.value;
frost$core$Int64* $tmp921 = $tmp918[$tmp920];
frost$core$Int64 $tmp922 = (frost$core$Int64) {14};
frost$core$Int64 $tmp923 = (frost$core$Int64) {2};
int64_t $tmp924 = $tmp922.value;
$tmp921[$tmp924] = $tmp923;
// line 161
frost$core$Int64** $tmp925 = *(&local0);
frost$core$Int64 $tmp926 = (frost$core$Int64) {95};
frost$core$Int64** $tmp927 = *(&local0);
frost$core$Int64 $tmp928 = (frost$core$Int64) {0};
int64_t $tmp929 = $tmp928.value;
frost$core$Int64* $tmp930 = $tmp927[$tmp929];
int64_t $tmp931 = $tmp926.value;
$tmp925[$tmp931] = $tmp930;
// line 162
frost$core$Int64** $tmp932 = *(&local0);
frost$core$Int64 $tmp933 = (frost$core$Int64) {96};
frost$core$Int64 $tmp934 = (frost$core$Int64) {20};
frost$core$Int64 $tmp935 = (frost$core$Int64) {0};
frost$core$Int64* $tmp936 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp934, $tmp935);
int64_t $tmp937 = $tmp933.value;
$tmp932[$tmp937] = $tmp936;
// line 163
frost$core$Int64** $tmp938 = *(&local0);
frost$core$Int64 $tmp939 = (frost$core$Int64) {96};
int64_t $tmp940 = $tmp939.value;
frost$core$Int64* $tmp941 = $tmp938[$tmp940];
frost$core$Int64 $tmp942 = (frost$core$Int64) {1};
frost$core$Int64 $tmp943 = (frost$core$Int64) {17};
int64_t $tmp944 = $tmp942.value;
$tmp941[$tmp944] = $tmp943;
// line 164
frost$core$Int64** $tmp945 = *(&local0);
frost$core$Int64 $tmp946 = (frost$core$Int64) {96};
int64_t $tmp947 = $tmp946.value;
frost$core$Int64* $tmp948 = $tmp945[$tmp947];
frost$core$Int64 $tmp949 = (frost$core$Int64) {14};
frost$core$Int64 $tmp950 = (frost$core$Int64) {2};
int64_t $tmp951 = $tmp949.value;
$tmp948[$tmp951] = $tmp950;
// line 165
frost$core$Int64** $tmp952 = *(&local0);
frost$core$Int64 $tmp953 = (frost$core$Int64) {97};
frost$core$Int64** $tmp954 = *(&local0);
frost$core$Int64 $tmp955 = (frost$core$Int64) {0};
int64_t $tmp956 = $tmp955.value;
frost$core$Int64* $tmp957 = $tmp954[$tmp956];
int64_t $tmp958 = $tmp953.value;
$tmp952[$tmp958] = $tmp957;
// line 166
frost$core$Int64** $tmp959 = *(&local0);
frost$core$Int64 $tmp960 = (frost$core$Int64) {98};
frost$core$Int64** $tmp961 = *(&local0);
frost$core$Int64 $tmp962 = (frost$core$Int64) {0};
int64_t $tmp963 = $tmp962.value;
frost$core$Int64* $tmp964 = $tmp961[$tmp963];
int64_t $tmp965 = $tmp960.value;
$tmp959[$tmp965] = $tmp964;
// line 167
frost$core$Int64** $tmp966 = *(&local0);
frost$core$Int64 $tmp967 = (frost$core$Int64) {99};
frost$core$Int64** $tmp968 = *(&local0);
frost$core$Int64 $tmp969 = (frost$core$Int64) {0};
int64_t $tmp970 = $tmp969.value;
frost$core$Int64* $tmp971 = $tmp968[$tmp970];
int64_t $tmp972 = $tmp967.value;
$tmp966[$tmp972] = $tmp971;
// line 168
frost$core$Int64** $tmp973 = *(&local0);
frost$core$Int64 $tmp974 = (frost$core$Int64) {100};
frost$core$Int64** $tmp975 = *(&local0);
frost$core$Int64 $tmp976 = (frost$core$Int64) {0};
int64_t $tmp977 = $tmp976.value;
frost$core$Int64* $tmp978 = $tmp975[$tmp977];
int64_t $tmp979 = $tmp974.value;
$tmp973[$tmp979] = $tmp978;
// line 169
frost$core$Int64** $tmp980 = *(&local0);
frost$core$Int64 $tmp981 = (frost$core$Int64) {101};
frost$core$Int64** $tmp982 = *(&local0);
frost$core$Int64 $tmp983 = (frost$core$Int64) {0};
int64_t $tmp984 = $tmp983.value;
frost$core$Int64* $tmp985 = $tmp982[$tmp984];
int64_t $tmp986 = $tmp981.value;
$tmp980[$tmp986] = $tmp985;
// line 170
frost$core$Int64** $tmp987 = *(&local0);
frost$core$Int64 $tmp988 = (frost$core$Int64) {102};
frost$core$Int64** $tmp989 = *(&local0);
frost$core$Int64 $tmp990 = (frost$core$Int64) {0};
int64_t $tmp991 = $tmp990.value;
frost$core$Int64* $tmp992 = $tmp989[$tmp991];
int64_t $tmp993 = $tmp988.value;
$tmp987[$tmp993] = $tmp992;
// line 171
frost$core$Int64** $tmp994 = *(&local0);
frost$core$Int64 $tmp995 = (frost$core$Int64) {103};
frost$core$Int64** $tmp996 = *(&local0);
frost$core$Int64 $tmp997 = (frost$core$Int64) {0};
int64_t $tmp998 = $tmp997.value;
frost$core$Int64* $tmp999 = $tmp996[$tmp998];
int64_t $tmp1000 = $tmp995.value;
$tmp994[$tmp1000] = $tmp999;
// line 172
frost$core$Int64** $tmp1001 = *(&local0);
frost$core$Int64 $tmp1002 = (frost$core$Int64) {104};
frost$core$Int64** $tmp1003 = *(&local0);
frost$core$Int64 $tmp1004 = (frost$core$Int64) {0};
int64_t $tmp1005 = $tmp1004.value;
frost$core$Int64* $tmp1006 = $tmp1003[$tmp1005];
int64_t $tmp1007 = $tmp1002.value;
$tmp1001[$tmp1007] = $tmp1006;
// line 173
frost$core$Int64** $tmp1008 = *(&local0);
frost$core$Int64 $tmp1009 = (frost$core$Int64) {105};
frost$core$Int64** $tmp1010 = *(&local0);
frost$core$Int64 $tmp1011 = (frost$core$Int64) {0};
int64_t $tmp1012 = $tmp1011.value;
frost$core$Int64* $tmp1013 = $tmp1010[$tmp1012];
int64_t $tmp1014 = $tmp1009.value;
$tmp1008[$tmp1014] = $tmp1013;
// line 174
frost$core$Int64** $tmp1015 = *(&local0);
frost$core$Int64 $tmp1016 = (frost$core$Int64) {106};
frost$core$Int64** $tmp1017 = *(&local0);
frost$core$Int64 $tmp1018 = (frost$core$Int64) {0};
int64_t $tmp1019 = $tmp1018.value;
frost$core$Int64* $tmp1020 = $tmp1017[$tmp1019];
int64_t $tmp1021 = $tmp1016.value;
$tmp1015[$tmp1021] = $tmp1020;
// line 175
frost$core$Int64** $tmp1022 = *(&local0);
frost$core$Int64 $tmp1023 = (frost$core$Int64) {107};
frost$core$Int64** $tmp1024 = *(&local0);
frost$core$Int64 $tmp1025 = (frost$core$Int64) {0};
int64_t $tmp1026 = $tmp1025.value;
frost$core$Int64* $tmp1027 = $tmp1024[$tmp1026];
int64_t $tmp1028 = $tmp1023.value;
$tmp1022[$tmp1028] = $tmp1027;
// line 176
frost$core$Int64** $tmp1029 = *(&local0);
frost$core$Int64 $tmp1030 = (frost$core$Int64) {108};
frost$core$Int64** $tmp1031 = *(&local0);
frost$core$Int64 $tmp1032 = (frost$core$Int64) {0};
int64_t $tmp1033 = $tmp1032.value;
frost$core$Int64* $tmp1034 = $tmp1031[$tmp1033];
int64_t $tmp1035 = $tmp1030.value;
$tmp1029[$tmp1035] = $tmp1034;
// line 177
frost$core$Int64** $tmp1036 = *(&local0);
frost$core$Int64 $tmp1037 = (frost$core$Int64) {109};
frost$core$Int64** $tmp1038 = *(&local0);
frost$core$Int64 $tmp1039 = (frost$core$Int64) {0};
int64_t $tmp1040 = $tmp1039.value;
frost$core$Int64* $tmp1041 = $tmp1038[$tmp1040];
int64_t $tmp1042 = $tmp1037.value;
$tmp1036[$tmp1042] = $tmp1041;
// line 178
frost$core$Int64** $tmp1043 = *(&local0);
frost$core$Int64 $tmp1044 = (frost$core$Int64) {110};
frost$core$Int64** $tmp1045 = *(&local0);
frost$core$Int64 $tmp1046 = (frost$core$Int64) {0};
int64_t $tmp1047 = $tmp1046.value;
frost$core$Int64* $tmp1048 = $tmp1045[$tmp1047];
int64_t $tmp1049 = $tmp1044.value;
$tmp1043[$tmp1049] = $tmp1048;
// line 179
frost$core$Int64** $tmp1050 = *(&local0);
frost$core$Int64 $tmp1051 = (frost$core$Int64) {111};
frost$core$Int64** $tmp1052 = *(&local0);
frost$core$Int64 $tmp1053 = (frost$core$Int64) {0};
int64_t $tmp1054 = $tmp1053.value;
frost$core$Int64* $tmp1055 = $tmp1052[$tmp1054];
int64_t $tmp1056 = $tmp1051.value;
$tmp1050[$tmp1056] = $tmp1055;
// line 180
frost$core$Int64** $tmp1057 = *(&local0);
frost$core$Int64 $tmp1058 = (frost$core$Int64) {112};
frost$core$Int64** $tmp1059 = *(&local0);
frost$core$Int64 $tmp1060 = (frost$core$Int64) {0};
int64_t $tmp1061 = $tmp1060.value;
frost$core$Int64* $tmp1062 = $tmp1059[$tmp1061];
int64_t $tmp1063 = $tmp1058.value;
$tmp1057[$tmp1063] = $tmp1062;
// line 181
frost$core$Int64** $tmp1064 = *(&local0);
frost$core$Int64 $tmp1065 = (frost$core$Int64) {113};
frost$core$Int64** $tmp1066 = *(&local0);
frost$core$Int64 $tmp1067 = (frost$core$Int64) {0};
int64_t $tmp1068 = $tmp1067.value;
frost$core$Int64* $tmp1069 = $tmp1066[$tmp1068];
int64_t $tmp1070 = $tmp1065.value;
$tmp1064[$tmp1070] = $tmp1069;
// line 182
frost$core$Int64** $tmp1071 = *(&local0);
frost$core$Int64 $tmp1072 = (frost$core$Int64) {114};
frost$core$Int64** $tmp1073 = *(&local0);
frost$core$Int64 $tmp1074 = (frost$core$Int64) {0};
int64_t $tmp1075 = $tmp1074.value;
frost$core$Int64* $tmp1076 = $tmp1073[$tmp1075];
int64_t $tmp1077 = $tmp1072.value;
$tmp1071[$tmp1077] = $tmp1076;
// line 183
frost$core$Int64** $tmp1078 = *(&local0);
frost$core$Int64 $tmp1079 = (frost$core$Int64) {115};
frost$core$Int64** $tmp1080 = *(&local0);
frost$core$Int64 $tmp1081 = (frost$core$Int64) {0};
int64_t $tmp1082 = $tmp1081.value;
frost$core$Int64* $tmp1083 = $tmp1080[$tmp1082];
int64_t $tmp1084 = $tmp1079.value;
$tmp1078[$tmp1084] = $tmp1083;
// line 184
frost$core$Int64** $tmp1085 = *(&local0);
frost$core$Int64 $tmp1086 = (frost$core$Int64) {116};
frost$core$Int64** $tmp1087 = *(&local0);
frost$core$Int64 $tmp1088 = (frost$core$Int64) {0};
int64_t $tmp1089 = $tmp1088.value;
frost$core$Int64* $tmp1090 = $tmp1087[$tmp1089];
int64_t $tmp1091 = $tmp1086.value;
$tmp1085[$tmp1091] = $tmp1090;
// line 185
frost$core$Int64** $tmp1092 = *(&local0);
frost$core$Int64 $tmp1093 = (frost$core$Int64) {117};
frost$core$Int64** $tmp1094 = *(&local0);
frost$core$Int64 $tmp1095 = (frost$core$Int64) {0};
int64_t $tmp1096 = $tmp1095.value;
frost$core$Int64* $tmp1097 = $tmp1094[$tmp1096];
int64_t $tmp1098 = $tmp1093.value;
$tmp1092[$tmp1098] = $tmp1097;
// line 186
frost$core$Int64** $tmp1099 = *(&local0);
frost$core$Int64 $tmp1100 = (frost$core$Int64) {118};
frost$core$Int64** $tmp1101 = *(&local0);
frost$core$Int64 $tmp1102 = (frost$core$Int64) {0};
int64_t $tmp1103 = $tmp1102.value;
frost$core$Int64* $tmp1104 = $tmp1101[$tmp1103];
int64_t $tmp1105 = $tmp1100.value;
$tmp1099[$tmp1105] = $tmp1104;
// line 187
frost$core$Int64** $tmp1106 = *(&local0);
frost$core$Int64 $tmp1107 = (frost$core$Int64) {119};
frost$core$Int64** $tmp1108 = *(&local0);
frost$core$Int64 $tmp1109 = (frost$core$Int64) {0};
int64_t $tmp1110 = $tmp1109.value;
frost$core$Int64* $tmp1111 = $tmp1108[$tmp1110];
int64_t $tmp1112 = $tmp1107.value;
$tmp1106[$tmp1112] = $tmp1111;
// line 188
frost$core$Int64** $tmp1113 = *(&local0);
frost$core$Int64 $tmp1114 = (frost$core$Int64) {120};
frost$core$Int64** $tmp1115 = *(&local0);
frost$core$Int64 $tmp1116 = (frost$core$Int64) {0};
int64_t $tmp1117 = $tmp1116.value;
frost$core$Int64* $tmp1118 = $tmp1115[$tmp1117];
int64_t $tmp1119 = $tmp1114.value;
$tmp1113[$tmp1119] = $tmp1118;
// line 189
frost$core$Int64** $tmp1120 = *(&local0);
frost$core$Int64 $tmp1121 = (frost$core$Int64) {121};
frost$core$Int64** $tmp1122 = *(&local0);
frost$core$Int64 $tmp1123 = (frost$core$Int64) {0};
int64_t $tmp1124 = $tmp1123.value;
frost$core$Int64* $tmp1125 = $tmp1122[$tmp1124];
int64_t $tmp1126 = $tmp1121.value;
$tmp1120[$tmp1126] = $tmp1125;
// line 190
frost$core$Int64** $tmp1127 = *(&local0);
frost$core$Int64 $tmp1128 = (frost$core$Int64) {122};
frost$core$Int64** $tmp1129 = *(&local0);
frost$core$Int64 $tmp1130 = (frost$core$Int64) {0};
int64_t $tmp1131 = $tmp1130.value;
frost$core$Int64* $tmp1132 = $tmp1129[$tmp1131];
int64_t $tmp1133 = $tmp1128.value;
$tmp1127[$tmp1133] = $tmp1132;
// line 191
frost$core$Int64** $tmp1134 = *(&local0);
frost$core$Int64 $tmp1135 = (frost$core$Int64) {123};
frost$core$Int64 $tmp1136 = (frost$core$Int64) {20};
frost$core$Int64 $tmp1137 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1138 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp1136, $tmp1137);
int64_t $tmp1139 = $tmp1135.value;
$tmp1134[$tmp1139] = $tmp1138;
// line 192
frost$core$Int64** $tmp1140 = *(&local0);
frost$core$Int64 $tmp1141 = (frost$core$Int64) {123};
int64_t $tmp1142 = $tmp1141.value;
frost$core$Int64* $tmp1143 = $tmp1140[$tmp1142];
frost$core$Int64 $tmp1144 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1145 = (frost$core$Int64) {18};
int64_t $tmp1146 = $tmp1144.value;
$tmp1143[$tmp1146] = $tmp1145;
// line 193
frost$core$Int64** $tmp1147 = *(&local0);
frost$core$Int64 $tmp1148 = (frost$core$Int64) {123};
int64_t $tmp1149 = $tmp1148.value;
frost$core$Int64* $tmp1150 = $tmp1147[$tmp1149];
frost$core$Int64 $tmp1151 = (frost$core$Int64) {14};
frost$core$Int64 $tmp1152 = (frost$core$Int64) {2};
int64_t $tmp1153 = $tmp1151.value;
$tmp1150[$tmp1153] = $tmp1152;
// line 194
frost$core$Int64** $tmp1154 = *(&local0);
frost$core$Int64 $tmp1155 = (frost$core$Int64) {124};
frost$core$Int64** $tmp1156 = *(&local0);
frost$core$Int64 $tmp1157 = (frost$core$Int64) {0};
int64_t $tmp1158 = $tmp1157.value;
frost$core$Int64* $tmp1159 = $tmp1156[$tmp1158];
int64_t $tmp1160 = $tmp1155.value;
$tmp1154[$tmp1160] = $tmp1159;
// line 195
frost$core$Int64** $tmp1161 = *(&local0);
frost$core$Int64 $tmp1162 = (frost$core$Int64) {125};
frost$core$Int64 $tmp1163 = (frost$core$Int64) {20};
frost$core$Int64 $tmp1164 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1165 = org$frostlang$regex$RegexLexer$alloc$frost$core$Int64$frost$core$Int64$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp1163, $tmp1164);
int64_t $tmp1166 = $tmp1162.value;
$tmp1161[$tmp1166] = $tmp1165;
// line 196
frost$core$Int64** $tmp1167 = *(&local0);
frost$core$Int64 $tmp1168 = (frost$core$Int64) {125};
int64_t $tmp1169 = $tmp1168.value;
frost$core$Int64* $tmp1170 = $tmp1167[$tmp1169];
frost$core$Int64 $tmp1171 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1172 = (frost$core$Int64) {19};
int64_t $tmp1173 = $tmp1171.value;
$tmp1170[$tmp1173] = $tmp1172;
// line 197
frost$core$Int64** $tmp1174 = *(&local0);
frost$core$Int64 $tmp1175 = (frost$core$Int64) {125};
int64_t $tmp1176 = $tmp1175.value;
frost$core$Int64* $tmp1177 = $tmp1174[$tmp1176];
frost$core$Int64 $tmp1178 = (frost$core$Int64) {14};
frost$core$Int64 $tmp1179 = (frost$core$Int64) {2};
int64_t $tmp1180 = $tmp1178.value;
$tmp1177[$tmp1180] = $tmp1179;
// line 198
frost$core$Int64** $tmp1181 = *(&local0);
frost$core$Int64 $tmp1182 = (frost$core$Int64) {126};
frost$core$Int64** $tmp1183 = *(&local0);
frost$core$Int64 $tmp1184 = (frost$core$Int64) {0};
int64_t $tmp1185 = $tmp1184.value;
frost$core$Int64* $tmp1186 = $tmp1183[$tmp1185];
int64_t $tmp1187 = $tmp1182.value;
$tmp1181[$tmp1187] = $tmp1186;
// line 199
frost$core$Int64** $tmp1188 = *(&local0);
frost$core$Int64 $tmp1189 = (frost$core$Int64) {127};
frost$core$Int64** $tmp1190 = *(&local0);
frost$core$Int64 $tmp1191 = (frost$core$Int64) {0};
int64_t $tmp1192 = $tmp1191.value;
frost$core$Int64* $tmp1193 = $tmp1190[$tmp1192];
int64_t $tmp1194 = $tmp1189.value;
$tmp1188[$tmp1194] = $tmp1193;
// line 200
frost$core$Int64** $tmp1195 = *(&local0);
frost$core$Int64 $tmp1196 = (frost$core$Int64) {128};
frost$core$Int64** $tmp1197 = *(&local0);
frost$core$Int64 $tmp1198 = (frost$core$Int64) {0};
int64_t $tmp1199 = $tmp1198.value;
frost$core$Int64* $tmp1200 = $tmp1197[$tmp1199];
int64_t $tmp1201 = $tmp1196.value;
$tmp1195[$tmp1201] = $tmp1200;
// line 201
frost$core$Int64** $tmp1202 = *(&local0);
frost$core$Int64 $tmp1203 = (frost$core$Int64) {129};
frost$core$Int64** $tmp1204 = *(&local0);
frost$core$Int64 $tmp1205 = (frost$core$Int64) {0};
int64_t $tmp1206 = $tmp1205.value;
frost$core$Int64* $tmp1207 = $tmp1204[$tmp1206];
int64_t $tmp1208 = $tmp1203.value;
$tmp1202[$tmp1208] = $tmp1207;
// line 202
frost$core$Int64** $tmp1209 = *(&local0);
frost$core$Int64 $tmp1210 = (frost$core$Int64) {130};
frost$core$Int64** $tmp1211 = *(&local0);
frost$core$Int64 $tmp1212 = (frost$core$Int64) {0};
int64_t $tmp1213 = $tmp1212.value;
frost$core$Int64* $tmp1214 = $tmp1211[$tmp1213];
int64_t $tmp1215 = $tmp1210.value;
$tmp1209[$tmp1215] = $tmp1214;
// line 203
frost$core$Int64** $tmp1216 = *(&local0);
frost$core$Int64 $tmp1217 = (frost$core$Int64) {131};
frost$core$Int64** $tmp1218 = *(&local0);
frost$core$Int64 $tmp1219 = (frost$core$Int64) {0};
int64_t $tmp1220 = $tmp1219.value;
frost$core$Int64* $tmp1221 = $tmp1218[$tmp1220];
int64_t $tmp1222 = $tmp1217.value;
$tmp1216[$tmp1222] = $tmp1221;
// line 204
frost$core$Int64** $tmp1223 = *(&local0);
frost$core$Int64 $tmp1224 = (frost$core$Int64) {132};
frost$core$Int64** $tmp1225 = *(&local0);
frost$core$Int64 $tmp1226 = (frost$core$Int64) {0};
int64_t $tmp1227 = $tmp1226.value;
frost$core$Int64* $tmp1228 = $tmp1225[$tmp1227];
int64_t $tmp1229 = $tmp1224.value;
$tmp1223[$tmp1229] = $tmp1228;
// line 205
frost$core$Int64** $tmp1230 = *(&local0);
frost$core$Int64 $tmp1231 = (frost$core$Int64) {133};
frost$core$Int64** $tmp1232 = *(&local0);
frost$core$Int64 $tmp1233 = (frost$core$Int64) {0};
int64_t $tmp1234 = $tmp1233.value;
frost$core$Int64* $tmp1235 = $tmp1232[$tmp1234];
int64_t $tmp1236 = $tmp1231.value;
$tmp1230[$tmp1236] = $tmp1235;
// line 206
frost$core$Int64** $tmp1237 = *(&local0);
frost$core$Int64 $tmp1238 = (frost$core$Int64) {134};
frost$core$Int64** $tmp1239 = *(&local0);
frost$core$Int64 $tmp1240 = (frost$core$Int64) {0};
int64_t $tmp1241 = $tmp1240.value;
frost$core$Int64* $tmp1242 = $tmp1239[$tmp1241];
int64_t $tmp1243 = $tmp1238.value;
$tmp1237[$tmp1243] = $tmp1242;
// line 207
frost$core$Int64** $tmp1244 = *(&local0);
frost$core$Int64 $tmp1245 = (frost$core$Int64) {135};
frost$core$Int64** $tmp1246 = *(&local0);
frost$core$Int64 $tmp1247 = (frost$core$Int64) {0};
int64_t $tmp1248 = $tmp1247.value;
frost$core$Int64* $tmp1249 = $tmp1246[$tmp1248];
int64_t $tmp1250 = $tmp1245.value;
$tmp1244[$tmp1250] = $tmp1249;
// line 208
frost$core$Int64** $tmp1251 = *(&local0);
frost$core$Int64 $tmp1252 = (frost$core$Int64) {136};
frost$core$Int64** $tmp1253 = *(&local0);
frost$core$Int64 $tmp1254 = (frost$core$Int64) {0};
int64_t $tmp1255 = $tmp1254.value;
frost$core$Int64* $tmp1256 = $tmp1253[$tmp1255];
int64_t $tmp1257 = $tmp1252.value;
$tmp1251[$tmp1257] = $tmp1256;
// line 209
frost$core$Int64** $tmp1258 = *(&local0);
frost$core$Int64 $tmp1259 = (frost$core$Int64) {137};
frost$core$Int64** $tmp1260 = *(&local0);
frost$core$Int64 $tmp1261 = (frost$core$Int64) {0};
int64_t $tmp1262 = $tmp1261.value;
frost$core$Int64* $tmp1263 = $tmp1260[$tmp1262];
int64_t $tmp1264 = $tmp1259.value;
$tmp1258[$tmp1264] = $tmp1263;
// line 210
frost$core$Int64** $tmp1265 = *(&local0);
frost$core$Int64 $tmp1266 = (frost$core$Int64) {138};
frost$core$Int64** $tmp1267 = *(&local0);
frost$core$Int64 $tmp1268 = (frost$core$Int64) {0};
int64_t $tmp1269 = $tmp1268.value;
frost$core$Int64* $tmp1270 = $tmp1267[$tmp1269];
int64_t $tmp1271 = $tmp1266.value;
$tmp1265[$tmp1271] = $tmp1270;
// line 211
frost$core$Int64** $tmp1272 = *(&local0);
frost$core$Int64 $tmp1273 = (frost$core$Int64) {139};
frost$core$Int64** $tmp1274 = *(&local0);
frost$core$Int64 $tmp1275 = (frost$core$Int64) {0};
int64_t $tmp1276 = $tmp1275.value;
frost$core$Int64* $tmp1277 = $tmp1274[$tmp1276];
int64_t $tmp1278 = $tmp1273.value;
$tmp1272[$tmp1278] = $tmp1277;
// line 212
frost$core$Int64** $tmp1279 = *(&local0);
frost$core$Int64 $tmp1280 = (frost$core$Int64) {140};
frost$core$Int64** $tmp1281 = *(&local0);
frost$core$Int64 $tmp1282 = (frost$core$Int64) {0};
int64_t $tmp1283 = $tmp1282.value;
frost$core$Int64* $tmp1284 = $tmp1281[$tmp1283];
int64_t $tmp1285 = $tmp1280.value;
$tmp1279[$tmp1285] = $tmp1284;
// line 213
frost$core$Int64** $tmp1286 = *(&local0);
frost$core$Int64 $tmp1287 = (frost$core$Int64) {141};
frost$core$Int64** $tmp1288 = *(&local0);
frost$core$Int64 $tmp1289 = (frost$core$Int64) {0};
int64_t $tmp1290 = $tmp1289.value;
frost$core$Int64* $tmp1291 = $tmp1288[$tmp1290];
int64_t $tmp1292 = $tmp1287.value;
$tmp1286[$tmp1292] = $tmp1291;
// line 214
frost$core$Int64** $tmp1293 = *(&local0);
frost$core$Int64 $tmp1294 = (frost$core$Int64) {142};
frost$core$Int64** $tmp1295 = *(&local0);
frost$core$Int64 $tmp1296 = (frost$core$Int64) {0};
int64_t $tmp1297 = $tmp1296.value;
frost$core$Int64* $tmp1298 = $tmp1295[$tmp1297];
int64_t $tmp1299 = $tmp1294.value;
$tmp1293[$tmp1299] = $tmp1298;
// line 215
frost$core$Int64** $tmp1300 = *(&local0);
frost$core$Int64 $tmp1301 = (frost$core$Int64) {143};
frost$core$Int64** $tmp1302 = *(&local0);
frost$core$Int64 $tmp1303 = (frost$core$Int64) {0};
int64_t $tmp1304 = $tmp1303.value;
frost$core$Int64* $tmp1305 = $tmp1302[$tmp1304];
int64_t $tmp1306 = $tmp1301.value;
$tmp1300[$tmp1306] = $tmp1305;
// line 216
frost$core$Int64** $tmp1307 = *(&local0);
frost$core$Int64 $tmp1308 = (frost$core$Int64) {144};
frost$core$Int64** $tmp1309 = *(&local0);
frost$core$Int64 $tmp1310 = (frost$core$Int64) {0};
int64_t $tmp1311 = $tmp1310.value;
frost$core$Int64* $tmp1312 = $tmp1309[$tmp1311];
int64_t $tmp1313 = $tmp1308.value;
$tmp1307[$tmp1313] = $tmp1312;
// line 217
frost$core$Int64** $tmp1314 = *(&local0);
frost$core$Int64 $tmp1315 = (frost$core$Int64) {145};
frost$core$Int64** $tmp1316 = *(&local0);
frost$core$Int64 $tmp1317 = (frost$core$Int64) {0};
int64_t $tmp1318 = $tmp1317.value;
frost$core$Int64* $tmp1319 = $tmp1316[$tmp1318];
int64_t $tmp1320 = $tmp1315.value;
$tmp1314[$tmp1320] = $tmp1319;
// line 218
frost$core$Int64** $tmp1321 = *(&local0);
frost$core$Int64 $tmp1322 = (frost$core$Int64) {146};
frost$core$Int64** $tmp1323 = *(&local0);
frost$core$Int64 $tmp1324 = (frost$core$Int64) {0};
int64_t $tmp1325 = $tmp1324.value;
frost$core$Int64* $tmp1326 = $tmp1323[$tmp1325];
int64_t $tmp1327 = $tmp1322.value;
$tmp1321[$tmp1327] = $tmp1326;
// line 219
frost$core$Int64** $tmp1328 = *(&local0);
frost$core$Int64 $tmp1329 = (frost$core$Int64) {147};
frost$core$Int64** $tmp1330 = *(&local0);
frost$core$Int64 $tmp1331 = (frost$core$Int64) {0};
int64_t $tmp1332 = $tmp1331.value;
frost$core$Int64* $tmp1333 = $tmp1330[$tmp1332];
int64_t $tmp1334 = $tmp1329.value;
$tmp1328[$tmp1334] = $tmp1333;
// line 220
frost$core$Int64** $tmp1335 = *(&local0);
frost$core$Int64 $tmp1336 = (frost$core$Int64) {148};
frost$core$Int64** $tmp1337 = *(&local0);
frost$core$Int64 $tmp1338 = (frost$core$Int64) {0};
int64_t $tmp1339 = $tmp1338.value;
frost$core$Int64* $tmp1340 = $tmp1337[$tmp1339];
int64_t $tmp1341 = $tmp1336.value;
$tmp1335[$tmp1341] = $tmp1340;
// line 221
frost$core$Int64** $tmp1342 = *(&local0);
frost$core$Int64 $tmp1343 = (frost$core$Int64) {149};
frost$core$Int64** $tmp1344 = *(&local0);
frost$core$Int64 $tmp1345 = (frost$core$Int64) {0};
int64_t $tmp1346 = $tmp1345.value;
frost$core$Int64* $tmp1347 = $tmp1344[$tmp1346];
int64_t $tmp1348 = $tmp1343.value;
$tmp1342[$tmp1348] = $tmp1347;
// line 222
frost$core$Int64** $tmp1349 = *(&local0);
frost$core$Int64 $tmp1350 = (frost$core$Int64) {150};
frost$core$Int64** $tmp1351 = *(&local0);
frost$core$Int64 $tmp1352 = (frost$core$Int64) {0};
int64_t $tmp1353 = $tmp1352.value;
frost$core$Int64* $tmp1354 = $tmp1351[$tmp1353];
int64_t $tmp1355 = $tmp1350.value;
$tmp1349[$tmp1355] = $tmp1354;
// line 223
frost$core$Int64** $tmp1356 = *(&local0);
frost$core$Int64 $tmp1357 = (frost$core$Int64) {151};
frost$core$Int64** $tmp1358 = *(&local0);
frost$core$Int64 $tmp1359 = (frost$core$Int64) {0};
int64_t $tmp1360 = $tmp1359.value;
frost$core$Int64* $tmp1361 = $tmp1358[$tmp1360];
int64_t $tmp1362 = $tmp1357.value;
$tmp1356[$tmp1362] = $tmp1361;
// line 224
frost$core$Int64** $tmp1363 = *(&local0);
frost$core$Int64 $tmp1364 = (frost$core$Int64) {152};
frost$core$Int64** $tmp1365 = *(&local0);
frost$core$Int64 $tmp1366 = (frost$core$Int64) {0};
int64_t $tmp1367 = $tmp1366.value;
frost$core$Int64* $tmp1368 = $tmp1365[$tmp1367];
int64_t $tmp1369 = $tmp1364.value;
$tmp1363[$tmp1369] = $tmp1368;
// line 225
frost$core$Int64** $tmp1370 = *(&local0);
frost$core$Int64 $tmp1371 = (frost$core$Int64) {153};
frost$core$Int64** $tmp1372 = *(&local0);
frost$core$Int64 $tmp1373 = (frost$core$Int64) {0};
int64_t $tmp1374 = $tmp1373.value;
frost$core$Int64* $tmp1375 = $tmp1372[$tmp1374];
int64_t $tmp1376 = $tmp1371.value;
$tmp1370[$tmp1376] = $tmp1375;
// line 226
frost$core$Int64** $tmp1377 = *(&local0);
frost$core$Int64 $tmp1378 = (frost$core$Int64) {154};
frost$core$Int64** $tmp1379 = *(&local0);
frost$core$Int64 $tmp1380 = (frost$core$Int64) {0};
int64_t $tmp1381 = $tmp1380.value;
frost$core$Int64* $tmp1382 = $tmp1379[$tmp1381];
int64_t $tmp1383 = $tmp1378.value;
$tmp1377[$tmp1383] = $tmp1382;
// line 227
frost$core$Int64** $tmp1384 = *(&local0);
frost$core$Int64 $tmp1385 = (frost$core$Int64) {155};
frost$core$Int64** $tmp1386 = *(&local0);
frost$core$Int64 $tmp1387 = (frost$core$Int64) {0};
int64_t $tmp1388 = $tmp1387.value;
frost$core$Int64* $tmp1389 = $tmp1386[$tmp1388];
int64_t $tmp1390 = $tmp1385.value;
$tmp1384[$tmp1390] = $tmp1389;
// line 228
frost$core$Int64** $tmp1391 = *(&local0);
frost$core$Int64 $tmp1392 = (frost$core$Int64) {156};
frost$core$Int64** $tmp1393 = *(&local0);
frost$core$Int64 $tmp1394 = (frost$core$Int64) {0};
int64_t $tmp1395 = $tmp1394.value;
frost$core$Int64* $tmp1396 = $tmp1393[$tmp1395];
int64_t $tmp1397 = $tmp1392.value;
$tmp1391[$tmp1397] = $tmp1396;
// line 229
frost$core$Int64** $tmp1398 = *(&local0);
frost$core$Int64 $tmp1399 = (frost$core$Int64) {157};
frost$core$Int64** $tmp1400 = *(&local0);
frost$core$Int64 $tmp1401 = (frost$core$Int64) {0};
int64_t $tmp1402 = $tmp1401.value;
frost$core$Int64* $tmp1403 = $tmp1400[$tmp1402];
int64_t $tmp1404 = $tmp1399.value;
$tmp1398[$tmp1404] = $tmp1403;
// line 230
frost$core$Int64** $tmp1405 = *(&local0);
frost$core$Int64 $tmp1406 = (frost$core$Int64) {158};
frost$core$Int64** $tmp1407 = *(&local0);
frost$core$Int64 $tmp1408 = (frost$core$Int64) {0};
int64_t $tmp1409 = $tmp1408.value;
frost$core$Int64* $tmp1410 = $tmp1407[$tmp1409];
int64_t $tmp1411 = $tmp1406.value;
$tmp1405[$tmp1411] = $tmp1410;
// line 231
frost$core$Int64** $tmp1412 = *(&local0);
frost$core$Int64 $tmp1413 = (frost$core$Int64) {159};
frost$core$Int64** $tmp1414 = *(&local0);
frost$core$Int64 $tmp1415 = (frost$core$Int64) {0};
int64_t $tmp1416 = $tmp1415.value;
frost$core$Int64* $tmp1417 = $tmp1414[$tmp1416];
int64_t $tmp1418 = $tmp1413.value;
$tmp1412[$tmp1418] = $tmp1417;
// line 232
frost$core$Int64** $tmp1419 = *(&local0);
frost$core$Int64 $tmp1420 = (frost$core$Int64) {160};
frost$core$Int64** $tmp1421 = *(&local0);
frost$core$Int64 $tmp1422 = (frost$core$Int64) {0};
int64_t $tmp1423 = $tmp1422.value;
frost$core$Int64* $tmp1424 = $tmp1421[$tmp1423];
int64_t $tmp1425 = $tmp1420.value;
$tmp1419[$tmp1425] = $tmp1424;
// line 233
frost$core$Int64** $tmp1426 = *(&local0);
frost$core$Int64 $tmp1427 = (frost$core$Int64) {161};
frost$core$Int64** $tmp1428 = *(&local0);
frost$core$Int64 $tmp1429 = (frost$core$Int64) {0};
int64_t $tmp1430 = $tmp1429.value;
frost$core$Int64* $tmp1431 = $tmp1428[$tmp1430];
int64_t $tmp1432 = $tmp1427.value;
$tmp1426[$tmp1432] = $tmp1431;
// line 234
frost$core$Int64** $tmp1433 = *(&local0);
frost$core$Int64 $tmp1434 = (frost$core$Int64) {162};
frost$core$Int64** $tmp1435 = *(&local0);
frost$core$Int64 $tmp1436 = (frost$core$Int64) {0};
int64_t $tmp1437 = $tmp1436.value;
frost$core$Int64* $tmp1438 = $tmp1435[$tmp1437];
int64_t $tmp1439 = $tmp1434.value;
$tmp1433[$tmp1439] = $tmp1438;
// line 235
frost$core$Int64** $tmp1440 = *(&local0);
frost$core$Int64 $tmp1441 = (frost$core$Int64) {163};
frost$core$Int64** $tmp1442 = *(&local0);
frost$core$Int64 $tmp1443 = (frost$core$Int64) {0};
int64_t $tmp1444 = $tmp1443.value;
frost$core$Int64* $tmp1445 = $tmp1442[$tmp1444];
int64_t $tmp1446 = $tmp1441.value;
$tmp1440[$tmp1446] = $tmp1445;
// line 236
frost$core$Int64** $tmp1447 = *(&local0);
frost$core$Int64 $tmp1448 = (frost$core$Int64) {164};
frost$core$Int64** $tmp1449 = *(&local0);
frost$core$Int64 $tmp1450 = (frost$core$Int64) {0};
int64_t $tmp1451 = $tmp1450.value;
frost$core$Int64* $tmp1452 = $tmp1449[$tmp1451];
int64_t $tmp1453 = $tmp1448.value;
$tmp1447[$tmp1453] = $tmp1452;
// line 237
frost$core$Int64** $tmp1454 = *(&local0);
frost$core$Int64 $tmp1455 = (frost$core$Int64) {165};
frost$core$Int64** $tmp1456 = *(&local0);
frost$core$Int64 $tmp1457 = (frost$core$Int64) {0};
int64_t $tmp1458 = $tmp1457.value;
frost$core$Int64* $tmp1459 = $tmp1456[$tmp1458];
int64_t $tmp1460 = $tmp1455.value;
$tmp1454[$tmp1460] = $tmp1459;
// line 238
frost$core$Int64** $tmp1461 = *(&local0);
frost$core$Int64 $tmp1462 = (frost$core$Int64) {166};
frost$core$Int64** $tmp1463 = *(&local0);
frost$core$Int64 $tmp1464 = (frost$core$Int64) {0};
int64_t $tmp1465 = $tmp1464.value;
frost$core$Int64* $tmp1466 = $tmp1463[$tmp1465];
int64_t $tmp1467 = $tmp1462.value;
$tmp1461[$tmp1467] = $tmp1466;
// line 239
frost$core$Int64** $tmp1468 = *(&local0);
frost$core$Int64 $tmp1469 = (frost$core$Int64) {167};
frost$core$Int64** $tmp1470 = *(&local0);
frost$core$Int64 $tmp1471 = (frost$core$Int64) {0};
int64_t $tmp1472 = $tmp1471.value;
frost$core$Int64* $tmp1473 = $tmp1470[$tmp1472];
int64_t $tmp1474 = $tmp1469.value;
$tmp1468[$tmp1474] = $tmp1473;
// line 240
frost$core$Int64** $tmp1475 = *(&local0);
frost$core$Int64 $tmp1476 = (frost$core$Int64) {168};
frost$core$Int64** $tmp1477 = *(&local0);
frost$core$Int64 $tmp1478 = (frost$core$Int64) {0};
int64_t $tmp1479 = $tmp1478.value;
frost$core$Int64* $tmp1480 = $tmp1477[$tmp1479];
int64_t $tmp1481 = $tmp1476.value;
$tmp1475[$tmp1481] = $tmp1480;
// line 241
frost$core$Int64** $tmp1482 = *(&local0);
frost$core$Int64 $tmp1483 = (frost$core$Int64) {169};
frost$core$Int64** $tmp1484 = *(&local0);
frost$core$Int64 $tmp1485 = (frost$core$Int64) {0};
int64_t $tmp1486 = $tmp1485.value;
frost$core$Int64* $tmp1487 = $tmp1484[$tmp1486];
int64_t $tmp1488 = $tmp1483.value;
$tmp1482[$tmp1488] = $tmp1487;
// line 242
frost$core$Int64** $tmp1489 = *(&local0);
frost$core$Int64 $tmp1490 = (frost$core$Int64) {170};
frost$core$Int64** $tmp1491 = *(&local0);
frost$core$Int64 $tmp1492 = (frost$core$Int64) {0};
int64_t $tmp1493 = $tmp1492.value;
frost$core$Int64* $tmp1494 = $tmp1491[$tmp1493];
int64_t $tmp1495 = $tmp1490.value;
$tmp1489[$tmp1495] = $tmp1494;
// line 243
frost$core$Int64** $tmp1496 = *(&local0);
frost$core$Int64 $tmp1497 = (frost$core$Int64) {171};
frost$core$Int64** $tmp1498 = *(&local0);
frost$core$Int64 $tmp1499 = (frost$core$Int64) {0};
int64_t $tmp1500 = $tmp1499.value;
frost$core$Int64* $tmp1501 = $tmp1498[$tmp1500];
int64_t $tmp1502 = $tmp1497.value;
$tmp1496[$tmp1502] = $tmp1501;
// line 244
frost$core$Int64** $tmp1503 = *(&local0);
frost$core$Int64 $tmp1504 = (frost$core$Int64) {172};
frost$core$Int64** $tmp1505 = *(&local0);
frost$core$Int64 $tmp1506 = (frost$core$Int64) {0};
int64_t $tmp1507 = $tmp1506.value;
frost$core$Int64* $tmp1508 = $tmp1505[$tmp1507];
int64_t $tmp1509 = $tmp1504.value;
$tmp1503[$tmp1509] = $tmp1508;
// line 245
frost$core$Int64** $tmp1510 = *(&local0);
frost$core$Int64 $tmp1511 = (frost$core$Int64) {173};
frost$core$Int64** $tmp1512 = *(&local0);
frost$core$Int64 $tmp1513 = (frost$core$Int64) {0};
int64_t $tmp1514 = $tmp1513.value;
frost$core$Int64* $tmp1515 = $tmp1512[$tmp1514];
int64_t $tmp1516 = $tmp1511.value;
$tmp1510[$tmp1516] = $tmp1515;
// line 246
frost$core$Int64** $tmp1517 = *(&local0);
frost$core$Int64 $tmp1518 = (frost$core$Int64) {174};
frost$core$Int64** $tmp1519 = *(&local0);
frost$core$Int64 $tmp1520 = (frost$core$Int64) {0};
int64_t $tmp1521 = $tmp1520.value;
frost$core$Int64* $tmp1522 = $tmp1519[$tmp1521];
int64_t $tmp1523 = $tmp1518.value;
$tmp1517[$tmp1523] = $tmp1522;
// line 247
frost$core$Int64** $tmp1524 = *(&local0);
frost$core$Int64 $tmp1525 = (frost$core$Int64) {175};
frost$core$Int64** $tmp1526 = *(&local0);
frost$core$Int64 $tmp1527 = (frost$core$Int64) {0};
int64_t $tmp1528 = $tmp1527.value;
frost$core$Int64* $tmp1529 = $tmp1526[$tmp1528];
int64_t $tmp1530 = $tmp1525.value;
$tmp1524[$tmp1530] = $tmp1529;
// line 248
frost$core$Int64** $tmp1531 = *(&local0);
frost$core$Int64 $tmp1532 = (frost$core$Int64) {176};
frost$core$Int64** $tmp1533 = *(&local0);
frost$core$Int64 $tmp1534 = (frost$core$Int64) {0};
int64_t $tmp1535 = $tmp1534.value;
frost$core$Int64* $tmp1536 = $tmp1533[$tmp1535];
int64_t $tmp1537 = $tmp1532.value;
$tmp1531[$tmp1537] = $tmp1536;
// line 249
frost$core$Int64** $tmp1538 = *(&local0);
frost$core$Int64 $tmp1539 = (frost$core$Int64) {177};
frost$core$Int64** $tmp1540 = *(&local0);
frost$core$Int64 $tmp1541 = (frost$core$Int64) {0};
int64_t $tmp1542 = $tmp1541.value;
frost$core$Int64* $tmp1543 = $tmp1540[$tmp1542];
int64_t $tmp1544 = $tmp1539.value;
$tmp1538[$tmp1544] = $tmp1543;
// line 250
frost$core$Int64** $tmp1545 = *(&local0);
frost$core$Int64 $tmp1546 = (frost$core$Int64) {178};
frost$core$Int64** $tmp1547 = *(&local0);
frost$core$Int64 $tmp1548 = (frost$core$Int64) {0};
int64_t $tmp1549 = $tmp1548.value;
frost$core$Int64* $tmp1550 = $tmp1547[$tmp1549];
int64_t $tmp1551 = $tmp1546.value;
$tmp1545[$tmp1551] = $tmp1550;
// line 251
frost$core$Int64** $tmp1552 = *(&local0);
frost$core$Int64 $tmp1553 = (frost$core$Int64) {179};
frost$core$Int64** $tmp1554 = *(&local0);
frost$core$Int64 $tmp1555 = (frost$core$Int64) {0};
int64_t $tmp1556 = $tmp1555.value;
frost$core$Int64* $tmp1557 = $tmp1554[$tmp1556];
int64_t $tmp1558 = $tmp1553.value;
$tmp1552[$tmp1558] = $tmp1557;
// line 252
frost$core$Int64** $tmp1559 = *(&local0);
frost$core$Int64 $tmp1560 = (frost$core$Int64) {180};
frost$core$Int64** $tmp1561 = *(&local0);
frost$core$Int64 $tmp1562 = (frost$core$Int64) {0};
int64_t $tmp1563 = $tmp1562.value;
frost$core$Int64* $tmp1564 = $tmp1561[$tmp1563];
int64_t $tmp1565 = $tmp1560.value;
$tmp1559[$tmp1565] = $tmp1564;
// line 253
frost$core$Int64** $tmp1566 = *(&local0);
frost$core$Int64 $tmp1567 = (frost$core$Int64) {181};
frost$core$Int64** $tmp1568 = *(&local0);
frost$core$Int64 $tmp1569 = (frost$core$Int64) {0};
int64_t $tmp1570 = $tmp1569.value;
frost$core$Int64* $tmp1571 = $tmp1568[$tmp1570];
int64_t $tmp1572 = $tmp1567.value;
$tmp1566[$tmp1572] = $tmp1571;
// line 254
frost$core$Int64** $tmp1573 = *(&local0);
frost$core$Int64 $tmp1574 = (frost$core$Int64) {182};
frost$core$Int64** $tmp1575 = *(&local0);
frost$core$Int64 $tmp1576 = (frost$core$Int64) {0};
int64_t $tmp1577 = $tmp1576.value;
frost$core$Int64* $tmp1578 = $tmp1575[$tmp1577];
int64_t $tmp1579 = $tmp1574.value;
$tmp1573[$tmp1579] = $tmp1578;
// line 255
frost$core$Int64** $tmp1580 = *(&local0);
frost$core$Int64 $tmp1581 = (frost$core$Int64) {183};
frost$core$Int64** $tmp1582 = *(&local0);
frost$core$Int64 $tmp1583 = (frost$core$Int64) {0};
int64_t $tmp1584 = $tmp1583.value;
frost$core$Int64* $tmp1585 = $tmp1582[$tmp1584];
int64_t $tmp1586 = $tmp1581.value;
$tmp1580[$tmp1586] = $tmp1585;
// line 256
frost$core$Int64** $tmp1587 = *(&local0);
frost$core$Int64 $tmp1588 = (frost$core$Int64) {184};
frost$core$Int64** $tmp1589 = *(&local0);
frost$core$Int64 $tmp1590 = (frost$core$Int64) {0};
int64_t $tmp1591 = $tmp1590.value;
frost$core$Int64* $tmp1592 = $tmp1589[$tmp1591];
int64_t $tmp1593 = $tmp1588.value;
$tmp1587[$tmp1593] = $tmp1592;
// line 257
frost$core$Int64** $tmp1594 = *(&local0);
frost$core$Int64 $tmp1595 = (frost$core$Int64) {185};
frost$core$Int64** $tmp1596 = *(&local0);
frost$core$Int64 $tmp1597 = (frost$core$Int64) {0};
int64_t $tmp1598 = $tmp1597.value;
frost$core$Int64* $tmp1599 = $tmp1596[$tmp1598];
int64_t $tmp1600 = $tmp1595.value;
$tmp1594[$tmp1600] = $tmp1599;
// line 258
frost$core$Int64** $tmp1601 = *(&local0);
frost$core$Int64 $tmp1602 = (frost$core$Int64) {186};
frost$core$Int64** $tmp1603 = *(&local0);
frost$core$Int64 $tmp1604 = (frost$core$Int64) {0};
int64_t $tmp1605 = $tmp1604.value;
frost$core$Int64* $tmp1606 = $tmp1603[$tmp1605];
int64_t $tmp1607 = $tmp1602.value;
$tmp1601[$tmp1607] = $tmp1606;
// line 259
frost$core$Int64** $tmp1608 = *(&local0);
frost$core$Int64 $tmp1609 = (frost$core$Int64) {187};
frost$core$Int64** $tmp1610 = *(&local0);
frost$core$Int64 $tmp1611 = (frost$core$Int64) {0};
int64_t $tmp1612 = $tmp1611.value;
frost$core$Int64* $tmp1613 = $tmp1610[$tmp1612];
int64_t $tmp1614 = $tmp1609.value;
$tmp1608[$tmp1614] = $tmp1613;
// line 260
frost$core$Int64** $tmp1615 = *(&local0);
frost$core$Int64 $tmp1616 = (frost$core$Int64) {188};
frost$core$Int64** $tmp1617 = *(&local0);
frost$core$Int64 $tmp1618 = (frost$core$Int64) {0};
int64_t $tmp1619 = $tmp1618.value;
frost$core$Int64* $tmp1620 = $tmp1617[$tmp1619];
int64_t $tmp1621 = $tmp1616.value;
$tmp1615[$tmp1621] = $tmp1620;
// line 261
frost$core$Int64** $tmp1622 = *(&local0);
frost$core$Int64 $tmp1623 = (frost$core$Int64) {189};
frost$core$Int64** $tmp1624 = *(&local0);
frost$core$Int64 $tmp1625 = (frost$core$Int64) {0};
int64_t $tmp1626 = $tmp1625.value;
frost$core$Int64* $tmp1627 = $tmp1624[$tmp1626];
int64_t $tmp1628 = $tmp1623.value;
$tmp1622[$tmp1628] = $tmp1627;
// line 262
frost$core$Int64** $tmp1629 = *(&local0);
frost$core$Int64 $tmp1630 = (frost$core$Int64) {190};
frost$core$Int64** $tmp1631 = *(&local0);
frost$core$Int64 $tmp1632 = (frost$core$Int64) {0};
int64_t $tmp1633 = $tmp1632.value;
frost$core$Int64* $tmp1634 = $tmp1631[$tmp1633];
int64_t $tmp1635 = $tmp1630.value;
$tmp1629[$tmp1635] = $tmp1634;
// line 263
frost$core$Int64** $tmp1636 = *(&local0);
frost$core$Int64 $tmp1637 = (frost$core$Int64) {191};
frost$core$Int64** $tmp1638 = *(&local0);
frost$core$Int64 $tmp1639 = (frost$core$Int64) {0};
int64_t $tmp1640 = $tmp1639.value;
frost$core$Int64* $tmp1641 = $tmp1638[$tmp1640];
int64_t $tmp1642 = $tmp1637.value;
$tmp1636[$tmp1642] = $tmp1641;
// line 264
frost$core$Int64** $tmp1643 = *(&local0);
frost$core$Int64 $tmp1644 = (frost$core$Int64) {192};
frost$core$Int64** $tmp1645 = *(&local0);
frost$core$Int64 $tmp1646 = (frost$core$Int64) {0};
int64_t $tmp1647 = $tmp1646.value;
frost$core$Int64* $tmp1648 = $tmp1645[$tmp1647];
int64_t $tmp1649 = $tmp1644.value;
$tmp1643[$tmp1649] = $tmp1648;
// line 265
frost$core$Int64** $tmp1650 = *(&local0);
frost$core$Int64 $tmp1651 = (frost$core$Int64) {193};
frost$core$Int64** $tmp1652 = *(&local0);
frost$core$Int64 $tmp1653 = (frost$core$Int64) {0};
int64_t $tmp1654 = $tmp1653.value;
frost$core$Int64* $tmp1655 = $tmp1652[$tmp1654];
int64_t $tmp1656 = $tmp1651.value;
$tmp1650[$tmp1656] = $tmp1655;
// line 266
frost$core$Int64** $tmp1657 = *(&local0);
frost$core$Int64 $tmp1658 = (frost$core$Int64) {194};
frost$core$Int64** $tmp1659 = *(&local0);
frost$core$Int64 $tmp1660 = (frost$core$Int64) {0};
int64_t $tmp1661 = $tmp1660.value;
frost$core$Int64* $tmp1662 = $tmp1659[$tmp1661];
int64_t $tmp1663 = $tmp1658.value;
$tmp1657[$tmp1663] = $tmp1662;
// line 267
frost$core$Int64** $tmp1664 = *(&local0);
frost$core$Int64 $tmp1665 = (frost$core$Int64) {195};
frost$core$Int64** $tmp1666 = *(&local0);
frost$core$Int64 $tmp1667 = (frost$core$Int64) {0};
int64_t $tmp1668 = $tmp1667.value;
frost$core$Int64* $tmp1669 = $tmp1666[$tmp1668];
int64_t $tmp1670 = $tmp1665.value;
$tmp1664[$tmp1670] = $tmp1669;
// line 268
frost$core$Int64** $tmp1671 = *(&local0);
frost$core$Int64 $tmp1672 = (frost$core$Int64) {196};
frost$core$Int64** $tmp1673 = *(&local0);
frost$core$Int64 $tmp1674 = (frost$core$Int64) {0};
int64_t $tmp1675 = $tmp1674.value;
frost$core$Int64* $tmp1676 = $tmp1673[$tmp1675];
int64_t $tmp1677 = $tmp1672.value;
$tmp1671[$tmp1677] = $tmp1676;
// line 269
frost$core$Int64** $tmp1678 = *(&local0);
frost$core$Int64 $tmp1679 = (frost$core$Int64) {197};
frost$core$Int64** $tmp1680 = *(&local0);
frost$core$Int64 $tmp1681 = (frost$core$Int64) {0};
int64_t $tmp1682 = $tmp1681.value;
frost$core$Int64* $tmp1683 = $tmp1680[$tmp1682];
int64_t $tmp1684 = $tmp1679.value;
$tmp1678[$tmp1684] = $tmp1683;
// line 270
frost$core$Int64** $tmp1685 = *(&local0);
frost$core$Int64 $tmp1686 = (frost$core$Int64) {198};
frost$core$Int64** $tmp1687 = *(&local0);
frost$core$Int64 $tmp1688 = (frost$core$Int64) {0};
int64_t $tmp1689 = $tmp1688.value;
frost$core$Int64* $tmp1690 = $tmp1687[$tmp1689];
int64_t $tmp1691 = $tmp1686.value;
$tmp1685[$tmp1691] = $tmp1690;
// line 271
frost$core$Int64** $tmp1692 = *(&local0);
frost$core$Int64 $tmp1693 = (frost$core$Int64) {199};
frost$core$Int64** $tmp1694 = *(&local0);
frost$core$Int64 $tmp1695 = (frost$core$Int64) {0};
int64_t $tmp1696 = $tmp1695.value;
frost$core$Int64* $tmp1697 = $tmp1694[$tmp1696];
int64_t $tmp1698 = $tmp1693.value;
$tmp1692[$tmp1698] = $tmp1697;
// line 272
frost$core$Int64** $tmp1699 = *(&local0);
frost$core$Int64 $tmp1700 = (frost$core$Int64) {200};
frost$core$Int64** $tmp1701 = *(&local0);
frost$core$Int64 $tmp1702 = (frost$core$Int64) {0};
int64_t $tmp1703 = $tmp1702.value;
frost$core$Int64* $tmp1704 = $tmp1701[$tmp1703];
int64_t $tmp1705 = $tmp1700.value;
$tmp1699[$tmp1705] = $tmp1704;
// line 273
frost$core$Int64** $tmp1706 = *(&local0);
frost$core$Int64 $tmp1707 = (frost$core$Int64) {201};
frost$core$Int64** $tmp1708 = *(&local0);
frost$core$Int64 $tmp1709 = (frost$core$Int64) {0};
int64_t $tmp1710 = $tmp1709.value;
frost$core$Int64* $tmp1711 = $tmp1708[$tmp1710];
int64_t $tmp1712 = $tmp1707.value;
$tmp1706[$tmp1712] = $tmp1711;
// line 274
frost$core$Int64** $tmp1713 = *(&local0);
frost$core$Int64 $tmp1714 = (frost$core$Int64) {202};
frost$core$Int64** $tmp1715 = *(&local0);
frost$core$Int64 $tmp1716 = (frost$core$Int64) {0};
int64_t $tmp1717 = $tmp1716.value;
frost$core$Int64* $tmp1718 = $tmp1715[$tmp1717];
int64_t $tmp1719 = $tmp1714.value;
$tmp1713[$tmp1719] = $tmp1718;
// line 275
frost$core$Int64** $tmp1720 = *(&local0);
frost$core$Int64 $tmp1721 = (frost$core$Int64) {203};
frost$core$Int64** $tmp1722 = *(&local0);
frost$core$Int64 $tmp1723 = (frost$core$Int64) {0};
int64_t $tmp1724 = $tmp1723.value;
frost$core$Int64* $tmp1725 = $tmp1722[$tmp1724];
int64_t $tmp1726 = $tmp1721.value;
$tmp1720[$tmp1726] = $tmp1725;
// line 276
frost$core$Int64** $tmp1727 = *(&local0);
frost$core$Int64 $tmp1728 = (frost$core$Int64) {204};
frost$core$Int64** $tmp1729 = *(&local0);
frost$core$Int64 $tmp1730 = (frost$core$Int64) {0};
int64_t $tmp1731 = $tmp1730.value;
frost$core$Int64* $tmp1732 = $tmp1729[$tmp1731];
int64_t $tmp1733 = $tmp1728.value;
$tmp1727[$tmp1733] = $tmp1732;
// line 277
frost$core$Int64** $tmp1734 = *(&local0);
frost$core$Int64 $tmp1735 = (frost$core$Int64) {205};
frost$core$Int64** $tmp1736 = *(&local0);
frost$core$Int64 $tmp1737 = (frost$core$Int64) {0};
int64_t $tmp1738 = $tmp1737.value;
frost$core$Int64* $tmp1739 = $tmp1736[$tmp1738];
int64_t $tmp1740 = $tmp1735.value;
$tmp1734[$tmp1740] = $tmp1739;
// line 278
frost$core$Int64** $tmp1741 = *(&local0);
frost$core$Int64 $tmp1742 = (frost$core$Int64) {206};
frost$core$Int64** $tmp1743 = *(&local0);
frost$core$Int64 $tmp1744 = (frost$core$Int64) {0};
int64_t $tmp1745 = $tmp1744.value;
frost$core$Int64* $tmp1746 = $tmp1743[$tmp1745];
int64_t $tmp1747 = $tmp1742.value;
$tmp1741[$tmp1747] = $tmp1746;
// line 279
frost$core$Int64** $tmp1748 = *(&local0);
frost$core$Int64 $tmp1749 = (frost$core$Int64) {207};
frost$core$Int64** $tmp1750 = *(&local0);
frost$core$Int64 $tmp1751 = (frost$core$Int64) {0};
int64_t $tmp1752 = $tmp1751.value;
frost$core$Int64* $tmp1753 = $tmp1750[$tmp1752];
int64_t $tmp1754 = $tmp1749.value;
$tmp1748[$tmp1754] = $tmp1753;
// line 280
frost$core$Int64** $tmp1755 = *(&local0);
frost$core$Int64 $tmp1756 = (frost$core$Int64) {208};
frost$core$Int64** $tmp1757 = *(&local0);
frost$core$Int64 $tmp1758 = (frost$core$Int64) {0};
int64_t $tmp1759 = $tmp1758.value;
frost$core$Int64* $tmp1760 = $tmp1757[$tmp1759];
int64_t $tmp1761 = $tmp1756.value;
$tmp1755[$tmp1761] = $tmp1760;
// line 281
frost$core$Int64** $tmp1762 = *(&local0);
frost$core$Int64 $tmp1763 = (frost$core$Int64) {209};
frost$core$Int64** $tmp1764 = *(&local0);
frost$core$Int64 $tmp1765 = (frost$core$Int64) {0};
int64_t $tmp1766 = $tmp1765.value;
frost$core$Int64* $tmp1767 = $tmp1764[$tmp1766];
int64_t $tmp1768 = $tmp1763.value;
$tmp1762[$tmp1768] = $tmp1767;
// line 282
frost$core$Int64** $tmp1769 = *(&local0);
frost$core$Int64 $tmp1770 = (frost$core$Int64) {210};
frost$core$Int64** $tmp1771 = *(&local0);
frost$core$Int64 $tmp1772 = (frost$core$Int64) {0};
int64_t $tmp1773 = $tmp1772.value;
frost$core$Int64* $tmp1774 = $tmp1771[$tmp1773];
int64_t $tmp1775 = $tmp1770.value;
$tmp1769[$tmp1775] = $tmp1774;
// line 283
frost$core$Int64** $tmp1776 = *(&local0);
frost$core$Int64 $tmp1777 = (frost$core$Int64) {211};
frost$core$Int64** $tmp1778 = *(&local0);
frost$core$Int64 $tmp1779 = (frost$core$Int64) {0};
int64_t $tmp1780 = $tmp1779.value;
frost$core$Int64* $tmp1781 = $tmp1778[$tmp1780];
int64_t $tmp1782 = $tmp1777.value;
$tmp1776[$tmp1782] = $tmp1781;
// line 284
frost$core$Int64** $tmp1783 = *(&local0);
frost$core$Int64 $tmp1784 = (frost$core$Int64) {212};
frost$core$Int64** $tmp1785 = *(&local0);
frost$core$Int64 $tmp1786 = (frost$core$Int64) {0};
int64_t $tmp1787 = $tmp1786.value;
frost$core$Int64* $tmp1788 = $tmp1785[$tmp1787];
int64_t $tmp1789 = $tmp1784.value;
$tmp1783[$tmp1789] = $tmp1788;
// line 285
frost$core$Int64** $tmp1790 = *(&local0);
frost$core$Int64 $tmp1791 = (frost$core$Int64) {213};
frost$core$Int64** $tmp1792 = *(&local0);
frost$core$Int64 $tmp1793 = (frost$core$Int64) {0};
int64_t $tmp1794 = $tmp1793.value;
frost$core$Int64* $tmp1795 = $tmp1792[$tmp1794];
int64_t $tmp1796 = $tmp1791.value;
$tmp1790[$tmp1796] = $tmp1795;
// line 286
frost$core$Int64** $tmp1797 = *(&local0);
frost$core$Int64 $tmp1798 = (frost$core$Int64) {214};
frost$core$Int64** $tmp1799 = *(&local0);
frost$core$Int64 $tmp1800 = (frost$core$Int64) {0};
int64_t $tmp1801 = $tmp1800.value;
frost$core$Int64* $tmp1802 = $tmp1799[$tmp1801];
int64_t $tmp1803 = $tmp1798.value;
$tmp1797[$tmp1803] = $tmp1802;
// line 287
frost$core$Int64** $tmp1804 = *(&local0);
frost$core$Int64 $tmp1805 = (frost$core$Int64) {215};
frost$core$Int64** $tmp1806 = *(&local0);
frost$core$Int64 $tmp1807 = (frost$core$Int64) {0};
int64_t $tmp1808 = $tmp1807.value;
frost$core$Int64* $tmp1809 = $tmp1806[$tmp1808];
int64_t $tmp1810 = $tmp1805.value;
$tmp1804[$tmp1810] = $tmp1809;
// line 288
frost$core$Int64** $tmp1811 = *(&local0);
frost$core$Int64 $tmp1812 = (frost$core$Int64) {216};
frost$core$Int64** $tmp1813 = *(&local0);
frost$core$Int64 $tmp1814 = (frost$core$Int64) {0};
int64_t $tmp1815 = $tmp1814.value;
frost$core$Int64* $tmp1816 = $tmp1813[$tmp1815];
int64_t $tmp1817 = $tmp1812.value;
$tmp1811[$tmp1817] = $tmp1816;
// line 289
frost$core$Int64** $tmp1818 = *(&local0);
frost$core$Int64 $tmp1819 = (frost$core$Int64) {217};
frost$core$Int64** $tmp1820 = *(&local0);
frost$core$Int64 $tmp1821 = (frost$core$Int64) {0};
int64_t $tmp1822 = $tmp1821.value;
frost$core$Int64* $tmp1823 = $tmp1820[$tmp1822];
int64_t $tmp1824 = $tmp1819.value;
$tmp1818[$tmp1824] = $tmp1823;
// line 290
frost$core$Int64** $tmp1825 = *(&local0);
frost$core$Int64 $tmp1826 = (frost$core$Int64) {218};
frost$core$Int64** $tmp1827 = *(&local0);
frost$core$Int64 $tmp1828 = (frost$core$Int64) {0};
int64_t $tmp1829 = $tmp1828.value;
frost$core$Int64* $tmp1830 = $tmp1827[$tmp1829];
int64_t $tmp1831 = $tmp1826.value;
$tmp1825[$tmp1831] = $tmp1830;
// line 291
frost$core$Int64** $tmp1832 = *(&local0);
frost$core$Int64 $tmp1833 = (frost$core$Int64) {219};
frost$core$Int64** $tmp1834 = *(&local0);
frost$core$Int64 $tmp1835 = (frost$core$Int64) {0};
int64_t $tmp1836 = $tmp1835.value;
frost$core$Int64* $tmp1837 = $tmp1834[$tmp1836];
int64_t $tmp1838 = $tmp1833.value;
$tmp1832[$tmp1838] = $tmp1837;
// line 292
frost$core$Int64** $tmp1839 = *(&local0);
frost$core$Int64 $tmp1840 = (frost$core$Int64) {220};
frost$core$Int64** $tmp1841 = *(&local0);
frost$core$Int64 $tmp1842 = (frost$core$Int64) {0};
int64_t $tmp1843 = $tmp1842.value;
frost$core$Int64* $tmp1844 = $tmp1841[$tmp1843];
int64_t $tmp1845 = $tmp1840.value;
$tmp1839[$tmp1845] = $tmp1844;
// line 293
frost$core$Int64** $tmp1846 = *(&local0);
frost$core$Int64 $tmp1847 = (frost$core$Int64) {221};
frost$core$Int64** $tmp1848 = *(&local0);
frost$core$Int64 $tmp1849 = (frost$core$Int64) {0};
int64_t $tmp1850 = $tmp1849.value;
frost$core$Int64* $tmp1851 = $tmp1848[$tmp1850];
int64_t $tmp1852 = $tmp1847.value;
$tmp1846[$tmp1852] = $tmp1851;
// line 294
frost$core$Int64** $tmp1853 = *(&local0);
frost$core$Int64 $tmp1854 = (frost$core$Int64) {222};
frost$core$Int64** $tmp1855 = *(&local0);
frost$core$Int64 $tmp1856 = (frost$core$Int64) {0};
int64_t $tmp1857 = $tmp1856.value;
frost$core$Int64* $tmp1858 = $tmp1855[$tmp1857];
int64_t $tmp1859 = $tmp1854.value;
$tmp1853[$tmp1859] = $tmp1858;
// line 295
frost$core$Int64** $tmp1860 = *(&local0);
frost$core$Int64 $tmp1861 = (frost$core$Int64) {223};
frost$core$Int64** $tmp1862 = *(&local0);
frost$core$Int64 $tmp1863 = (frost$core$Int64) {0};
int64_t $tmp1864 = $tmp1863.value;
frost$core$Int64* $tmp1865 = $tmp1862[$tmp1864];
int64_t $tmp1866 = $tmp1861.value;
$tmp1860[$tmp1866] = $tmp1865;
// line 296
frost$core$Int64** $tmp1867 = *(&local0);
frost$core$Int64 $tmp1868 = (frost$core$Int64) {224};
frost$core$Int64** $tmp1869 = *(&local0);
frost$core$Int64 $tmp1870 = (frost$core$Int64) {0};
int64_t $tmp1871 = $tmp1870.value;
frost$core$Int64* $tmp1872 = $tmp1869[$tmp1871];
int64_t $tmp1873 = $tmp1868.value;
$tmp1867[$tmp1873] = $tmp1872;
// line 297
frost$core$Int64** $tmp1874 = *(&local0);
frost$core$Int64 $tmp1875 = (frost$core$Int64) {225};
frost$core$Int64** $tmp1876 = *(&local0);
frost$core$Int64 $tmp1877 = (frost$core$Int64) {0};
int64_t $tmp1878 = $tmp1877.value;
frost$core$Int64* $tmp1879 = $tmp1876[$tmp1878];
int64_t $tmp1880 = $tmp1875.value;
$tmp1874[$tmp1880] = $tmp1879;
// line 298
frost$core$Int64** $tmp1881 = *(&local0);
frost$core$Int64 $tmp1882 = (frost$core$Int64) {226};
frost$core$Int64** $tmp1883 = *(&local0);
frost$core$Int64 $tmp1884 = (frost$core$Int64) {0};
int64_t $tmp1885 = $tmp1884.value;
frost$core$Int64* $tmp1886 = $tmp1883[$tmp1885];
int64_t $tmp1887 = $tmp1882.value;
$tmp1881[$tmp1887] = $tmp1886;
// line 299
frost$core$Int64** $tmp1888 = *(&local0);
frost$core$Int64 $tmp1889 = (frost$core$Int64) {227};
frost$core$Int64** $tmp1890 = *(&local0);
frost$core$Int64 $tmp1891 = (frost$core$Int64) {0};
int64_t $tmp1892 = $tmp1891.value;
frost$core$Int64* $tmp1893 = $tmp1890[$tmp1892];
int64_t $tmp1894 = $tmp1889.value;
$tmp1888[$tmp1894] = $tmp1893;
// line 300
frost$core$Int64** $tmp1895 = *(&local0);
frost$core$Int64 $tmp1896 = (frost$core$Int64) {228};
frost$core$Int64** $tmp1897 = *(&local0);
frost$core$Int64 $tmp1898 = (frost$core$Int64) {0};
int64_t $tmp1899 = $tmp1898.value;
frost$core$Int64* $tmp1900 = $tmp1897[$tmp1899];
int64_t $tmp1901 = $tmp1896.value;
$tmp1895[$tmp1901] = $tmp1900;
// line 301
frost$core$Int64** $tmp1902 = *(&local0);
frost$core$Int64 $tmp1903 = (frost$core$Int64) {229};
frost$core$Int64** $tmp1904 = *(&local0);
frost$core$Int64 $tmp1905 = (frost$core$Int64) {0};
int64_t $tmp1906 = $tmp1905.value;
frost$core$Int64* $tmp1907 = $tmp1904[$tmp1906];
int64_t $tmp1908 = $tmp1903.value;
$tmp1902[$tmp1908] = $tmp1907;
// line 302
frost$core$Int64** $tmp1909 = *(&local0);
frost$core$Int64 $tmp1910 = (frost$core$Int64) {230};
frost$core$Int64** $tmp1911 = *(&local0);
frost$core$Int64 $tmp1912 = (frost$core$Int64) {0};
int64_t $tmp1913 = $tmp1912.value;
frost$core$Int64* $tmp1914 = $tmp1911[$tmp1913];
int64_t $tmp1915 = $tmp1910.value;
$tmp1909[$tmp1915] = $tmp1914;
// line 303
frost$core$Int64** $tmp1916 = *(&local0);
frost$core$Int64 $tmp1917 = (frost$core$Int64) {231};
frost$core$Int64** $tmp1918 = *(&local0);
frost$core$Int64 $tmp1919 = (frost$core$Int64) {0};
int64_t $tmp1920 = $tmp1919.value;
frost$core$Int64* $tmp1921 = $tmp1918[$tmp1920];
int64_t $tmp1922 = $tmp1917.value;
$tmp1916[$tmp1922] = $tmp1921;
// line 304
frost$core$Int64** $tmp1923 = *(&local0);
frost$core$Int64 $tmp1924 = (frost$core$Int64) {232};
frost$core$Int64** $tmp1925 = *(&local0);
frost$core$Int64 $tmp1926 = (frost$core$Int64) {0};
int64_t $tmp1927 = $tmp1926.value;
frost$core$Int64* $tmp1928 = $tmp1925[$tmp1927];
int64_t $tmp1929 = $tmp1924.value;
$tmp1923[$tmp1929] = $tmp1928;
// line 305
frost$core$Int64** $tmp1930 = *(&local0);
frost$core$Int64 $tmp1931 = (frost$core$Int64) {233};
frost$core$Int64** $tmp1932 = *(&local0);
frost$core$Int64 $tmp1933 = (frost$core$Int64) {0};
int64_t $tmp1934 = $tmp1933.value;
frost$core$Int64* $tmp1935 = $tmp1932[$tmp1934];
int64_t $tmp1936 = $tmp1931.value;
$tmp1930[$tmp1936] = $tmp1935;
// line 306
frost$core$Int64** $tmp1937 = *(&local0);
frost$core$Int64 $tmp1938 = (frost$core$Int64) {234};
frost$core$Int64** $tmp1939 = *(&local0);
frost$core$Int64 $tmp1940 = (frost$core$Int64) {0};
int64_t $tmp1941 = $tmp1940.value;
frost$core$Int64* $tmp1942 = $tmp1939[$tmp1941];
int64_t $tmp1943 = $tmp1938.value;
$tmp1937[$tmp1943] = $tmp1942;
// line 307
frost$core$Int64** $tmp1944 = *(&local0);
frost$core$Int64 $tmp1945 = (frost$core$Int64) {235};
frost$core$Int64** $tmp1946 = *(&local0);
frost$core$Int64 $tmp1947 = (frost$core$Int64) {0};
int64_t $tmp1948 = $tmp1947.value;
frost$core$Int64* $tmp1949 = $tmp1946[$tmp1948];
int64_t $tmp1950 = $tmp1945.value;
$tmp1944[$tmp1950] = $tmp1949;
// line 308
frost$core$Int64** $tmp1951 = *(&local0);
frost$core$Int64 $tmp1952 = (frost$core$Int64) {236};
frost$core$Int64** $tmp1953 = *(&local0);
frost$core$Int64 $tmp1954 = (frost$core$Int64) {0};
int64_t $tmp1955 = $tmp1954.value;
frost$core$Int64* $tmp1956 = $tmp1953[$tmp1955];
int64_t $tmp1957 = $tmp1952.value;
$tmp1951[$tmp1957] = $tmp1956;
// line 309
frost$core$Int64** $tmp1958 = *(&local0);
frost$core$Int64 $tmp1959 = (frost$core$Int64) {237};
frost$core$Int64** $tmp1960 = *(&local0);
frost$core$Int64 $tmp1961 = (frost$core$Int64) {0};
int64_t $tmp1962 = $tmp1961.value;
frost$core$Int64* $tmp1963 = $tmp1960[$tmp1962];
int64_t $tmp1964 = $tmp1959.value;
$tmp1958[$tmp1964] = $tmp1963;
// line 310
frost$core$Int64** $tmp1965 = *(&local0);
frost$core$Int64 $tmp1966 = (frost$core$Int64) {238};
frost$core$Int64** $tmp1967 = *(&local0);
frost$core$Int64 $tmp1968 = (frost$core$Int64) {0};
int64_t $tmp1969 = $tmp1968.value;
frost$core$Int64* $tmp1970 = $tmp1967[$tmp1969];
int64_t $tmp1971 = $tmp1966.value;
$tmp1965[$tmp1971] = $tmp1970;
// line 311
frost$core$Int64** $tmp1972 = *(&local0);
frost$core$Int64 $tmp1973 = (frost$core$Int64) {239};
frost$core$Int64** $tmp1974 = *(&local0);
frost$core$Int64 $tmp1975 = (frost$core$Int64) {0};
int64_t $tmp1976 = $tmp1975.value;
frost$core$Int64* $tmp1977 = $tmp1974[$tmp1976];
int64_t $tmp1978 = $tmp1973.value;
$tmp1972[$tmp1978] = $tmp1977;
// line 312
frost$core$Int64** $tmp1979 = *(&local0);
frost$core$Int64 $tmp1980 = (frost$core$Int64) {240};
frost$core$Int64** $tmp1981 = *(&local0);
frost$core$Int64 $tmp1982 = (frost$core$Int64) {0};
int64_t $tmp1983 = $tmp1982.value;
frost$core$Int64* $tmp1984 = $tmp1981[$tmp1983];
int64_t $tmp1985 = $tmp1980.value;
$tmp1979[$tmp1985] = $tmp1984;
// line 313
frost$core$Int64** $tmp1986 = *(&local0);
frost$core$Int64 $tmp1987 = (frost$core$Int64) {241};
frost$core$Int64** $tmp1988 = *(&local0);
frost$core$Int64 $tmp1989 = (frost$core$Int64) {0};
int64_t $tmp1990 = $tmp1989.value;
frost$core$Int64* $tmp1991 = $tmp1988[$tmp1990];
int64_t $tmp1992 = $tmp1987.value;
$tmp1986[$tmp1992] = $tmp1991;
// line 314
frost$core$Int64** $tmp1993 = *(&local0);
frost$core$Int64 $tmp1994 = (frost$core$Int64) {242};
frost$core$Int64** $tmp1995 = *(&local0);
frost$core$Int64 $tmp1996 = (frost$core$Int64) {0};
int64_t $tmp1997 = $tmp1996.value;
frost$core$Int64* $tmp1998 = $tmp1995[$tmp1997];
int64_t $tmp1999 = $tmp1994.value;
$tmp1993[$tmp1999] = $tmp1998;
// line 315
frost$core$Int64** $tmp2000 = *(&local0);
frost$core$Int64 $tmp2001 = (frost$core$Int64) {243};
frost$core$Int64** $tmp2002 = *(&local0);
frost$core$Int64 $tmp2003 = (frost$core$Int64) {0};
int64_t $tmp2004 = $tmp2003.value;
frost$core$Int64* $tmp2005 = $tmp2002[$tmp2004];
int64_t $tmp2006 = $tmp2001.value;
$tmp2000[$tmp2006] = $tmp2005;
// line 316
frost$core$Int64** $tmp2007 = *(&local0);
frost$core$Int64 $tmp2008 = (frost$core$Int64) {244};
frost$core$Int64** $tmp2009 = *(&local0);
frost$core$Int64 $tmp2010 = (frost$core$Int64) {0};
int64_t $tmp2011 = $tmp2010.value;
frost$core$Int64* $tmp2012 = $tmp2009[$tmp2011];
int64_t $tmp2013 = $tmp2008.value;
$tmp2007[$tmp2013] = $tmp2012;
// line 317
frost$core$Int64** $tmp2014 = *(&local0);
frost$core$Int64 $tmp2015 = (frost$core$Int64) {245};
frost$core$Int64** $tmp2016 = *(&local0);
frost$core$Int64 $tmp2017 = (frost$core$Int64) {0};
int64_t $tmp2018 = $tmp2017.value;
frost$core$Int64* $tmp2019 = $tmp2016[$tmp2018];
int64_t $tmp2020 = $tmp2015.value;
$tmp2014[$tmp2020] = $tmp2019;
// line 318
frost$core$Int64** $tmp2021 = *(&local0);
frost$core$Int64 $tmp2022 = (frost$core$Int64) {246};
frost$core$Int64** $tmp2023 = *(&local0);
frost$core$Int64 $tmp2024 = (frost$core$Int64) {0};
int64_t $tmp2025 = $tmp2024.value;
frost$core$Int64* $tmp2026 = $tmp2023[$tmp2025];
int64_t $tmp2027 = $tmp2022.value;
$tmp2021[$tmp2027] = $tmp2026;
// line 319
frost$core$Int64** $tmp2028 = *(&local0);
frost$core$Int64 $tmp2029 = (frost$core$Int64) {247};
frost$core$Int64** $tmp2030 = *(&local0);
frost$core$Int64 $tmp2031 = (frost$core$Int64) {0};
int64_t $tmp2032 = $tmp2031.value;
frost$core$Int64* $tmp2033 = $tmp2030[$tmp2032];
int64_t $tmp2034 = $tmp2029.value;
$tmp2028[$tmp2034] = $tmp2033;
// line 320
frost$core$Int64** $tmp2035 = *(&local0);
frost$core$Int64 $tmp2036 = (frost$core$Int64) {248};
frost$core$Int64** $tmp2037 = *(&local0);
frost$core$Int64 $tmp2038 = (frost$core$Int64) {0};
int64_t $tmp2039 = $tmp2038.value;
frost$core$Int64* $tmp2040 = $tmp2037[$tmp2039];
int64_t $tmp2041 = $tmp2036.value;
$tmp2035[$tmp2041] = $tmp2040;
// line 321
frost$core$Int64** $tmp2042 = *(&local0);
frost$core$Int64 $tmp2043 = (frost$core$Int64) {249};
frost$core$Int64** $tmp2044 = *(&local0);
frost$core$Int64 $tmp2045 = (frost$core$Int64) {0};
int64_t $tmp2046 = $tmp2045.value;
frost$core$Int64* $tmp2047 = $tmp2044[$tmp2046];
int64_t $tmp2048 = $tmp2043.value;
$tmp2042[$tmp2048] = $tmp2047;
// line 322
frost$core$Int64** $tmp2049 = *(&local0);
frost$core$Int64 $tmp2050 = (frost$core$Int64) {250};
frost$core$Int64** $tmp2051 = *(&local0);
frost$core$Int64 $tmp2052 = (frost$core$Int64) {0};
int64_t $tmp2053 = $tmp2052.value;
frost$core$Int64* $tmp2054 = $tmp2051[$tmp2053];
int64_t $tmp2055 = $tmp2050.value;
$tmp2049[$tmp2055] = $tmp2054;
// line 323
frost$core$Int64** $tmp2056 = *(&local0);
frost$core$Int64 $tmp2057 = (frost$core$Int64) {251};
frost$core$Int64** $tmp2058 = *(&local0);
frost$core$Int64 $tmp2059 = (frost$core$Int64) {0};
int64_t $tmp2060 = $tmp2059.value;
frost$core$Int64* $tmp2061 = $tmp2058[$tmp2060];
int64_t $tmp2062 = $tmp2057.value;
$tmp2056[$tmp2062] = $tmp2061;
// line 324
frost$core$Int64** $tmp2063 = *(&local0);
frost$core$Int64 $tmp2064 = (frost$core$Int64) {252};
frost$core$Int64** $tmp2065 = *(&local0);
frost$core$Int64 $tmp2066 = (frost$core$Int64) {0};
int64_t $tmp2067 = $tmp2066.value;
frost$core$Int64* $tmp2068 = $tmp2065[$tmp2067];
int64_t $tmp2069 = $tmp2064.value;
$tmp2063[$tmp2069] = $tmp2068;
// line 325
frost$core$Int64** $tmp2070 = *(&local0);
frost$core$Int64 $tmp2071 = (frost$core$Int64) {253};
frost$core$Int64** $tmp2072 = *(&local0);
frost$core$Int64 $tmp2073 = (frost$core$Int64) {0};
int64_t $tmp2074 = $tmp2073.value;
frost$core$Int64* $tmp2075 = $tmp2072[$tmp2074];
int64_t $tmp2076 = $tmp2071.value;
$tmp2070[$tmp2076] = $tmp2075;
// line 326
frost$core$Int64** $tmp2077 = *(&local0);
frost$core$Int64 $tmp2078 = (frost$core$Int64) {254};
frost$core$Int64** $tmp2079 = *(&local0);
frost$core$Int64 $tmp2080 = (frost$core$Int64) {0};
int64_t $tmp2081 = $tmp2080.value;
frost$core$Int64* $tmp2082 = $tmp2079[$tmp2081];
int64_t $tmp2083 = $tmp2078.value;
$tmp2077[$tmp2083] = $tmp2082;
// line 327
frost$core$Int64** $tmp2084 = *(&local0);
frost$core$Int64 $tmp2085 = (frost$core$Int64) {255};
frost$core$Int64** $tmp2086 = *(&local0);
frost$core$Int64 $tmp2087 = (frost$core$Int64) {0};
int64_t $tmp2088 = $tmp2087.value;
frost$core$Int64* $tmp2089 = $tmp2086[$tmp2088];
int64_t $tmp2090 = $tmp2085.value;
$tmp2084[$tmp2090] = $tmp2089;
// line 328
frost$core$Int64** $tmp2091 = *(&local0);
return $tmp2091;

}
frost$core$Int64* org$frostlang$regex$RegexLexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT() {

frost$core$Int64* local0;
// line 333
frost$core$Int64 $tmp2092 = (frost$core$Int64) {20};
int64_t $tmp2093 = $tmp2092.value;
frost$core$Int64* $tmp2094 = ((frost$core$Int64*) frostAlloc($tmp2093 * 8));
*(&local0) = $tmp2094;
// line 334
frost$core$Int64* $tmp2095 = *(&local0);
frost$core$Int64 $tmp2096 = (frost$core$Int64) {0};
frost$core$Int64 $tmp2097 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2098 = $tmp2096.value;
$tmp2095[$tmp2098] = $tmp2097;
// line 335
frost$core$Int64* $tmp2099 = *(&local0);
frost$core$Int64 $tmp2100 = (frost$core$Int64) {1};
frost$core$Int64 $tmp2101 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2102 = $tmp2100.value;
$tmp2099[$tmp2102] = $tmp2101;
// line 336
frost$core$Int64* $tmp2103 = *(&local0);
frost$core$Int64 $tmp2104 = (frost$core$Int64) {2};
frost$core$Int64 $tmp2105 = (frost$core$Int64) {3};
int64_t $tmp2106 = $tmp2104.value;
$tmp2103[$tmp2106] = $tmp2105;
// line 337
frost$core$Int64* $tmp2107 = *(&local0);
frost$core$Int64 $tmp2108 = (frost$core$Int64) {3};
frost$core$Int64 $tmp2109 = (frost$core$Int64) {3};
int64_t $tmp2110 = $tmp2108.value;
$tmp2107[$tmp2110] = $tmp2109;
// line 338
frost$core$Int64* $tmp2111 = *(&local0);
frost$core$Int64 $tmp2112 = (frost$core$Int64) {4};
frost$core$Int64 $tmp2113 = (frost$core$Int64) {3};
int64_t $tmp2114 = $tmp2112.value;
$tmp2111[$tmp2114] = $tmp2113;
// line 339
frost$core$Int64* $tmp2115 = *(&local0);
frost$core$Int64 $tmp2116 = (frost$core$Int64) {5};
frost$core$Int64 $tmp2117 = (frost$core$Int64) {8};
int64_t $tmp2118 = $tmp2116.value;
$tmp2115[$tmp2118] = $tmp2117;
// line 340
frost$core$Int64* $tmp2119 = *(&local0);
frost$core$Int64 $tmp2120 = (frost$core$Int64) {6};
frost$core$Int64 $tmp2121 = (frost$core$Int64) {9};
int64_t $tmp2122 = $tmp2120.value;
$tmp2119[$tmp2122] = $tmp2121;
// line 341
frost$core$Int64* $tmp2123 = *(&local0);
frost$core$Int64 $tmp2124 = (frost$core$Int64) {7};
frost$core$Int64 $tmp2125 = (frost$core$Int64) {6};
int64_t $tmp2126 = $tmp2124.value;
$tmp2123[$tmp2126] = $tmp2125;
// line 342
frost$core$Int64* $tmp2127 = *(&local0);
frost$core$Int64 $tmp2128 = (frost$core$Int64) {8};
frost$core$Int64 $tmp2129 = (frost$core$Int64) {5};
int64_t $tmp2130 = $tmp2128.value;
$tmp2127[$tmp2130] = $tmp2129;
// line 343
frost$core$Int64* $tmp2131 = *(&local0);
frost$core$Int64 $tmp2132 = (frost$core$Int64) {9};
frost$core$Int64 $tmp2133 = (frost$core$Int64) {3};
int64_t $tmp2134 = $tmp2132.value;
$tmp2131[$tmp2134] = $tmp2133;
// line 344
frost$core$Int64* $tmp2135 = *(&local0);
frost$core$Int64 $tmp2136 = (frost$core$Int64) {10};
frost$core$Int64 $tmp2137 = (frost$core$Int64) {15};
int64_t $tmp2138 = $tmp2136.value;
$tmp2135[$tmp2138] = $tmp2137;
// line 345
frost$core$Int64* $tmp2139 = *(&local0);
frost$core$Int64 $tmp2140 = (frost$core$Int64) {11};
frost$core$Int64 $tmp2141 = (frost$core$Int64) {3};
int64_t $tmp2142 = $tmp2140.value;
$tmp2139[$tmp2142] = $tmp2141;
// line 346
frost$core$Int64* $tmp2143 = *(&local0);
frost$core$Int64 $tmp2144 = (frost$core$Int64) {12};
frost$core$Int64 $tmp2145 = (frost$core$Int64) {7};
int64_t $tmp2146 = $tmp2144.value;
$tmp2143[$tmp2146] = $tmp2145;
// line 347
frost$core$Int64* $tmp2147 = *(&local0);
frost$core$Int64 $tmp2148 = (frost$core$Int64) {13};
frost$core$Int64 $tmp2149 = (frost$core$Int64) {12};
int64_t $tmp2150 = $tmp2148.value;
$tmp2147[$tmp2150] = $tmp2149;
// line 348
frost$core$Int64* $tmp2151 = *(&local0);
frost$core$Int64 $tmp2152 = (frost$core$Int64) {14};
frost$core$Int64 $tmp2153 = (frost$core$Int64) {3};
int64_t $tmp2154 = $tmp2152.value;
$tmp2151[$tmp2154] = $tmp2153;
// line 349
frost$core$Int64* $tmp2155 = *(&local0);
frost$core$Int64 $tmp2156 = (frost$core$Int64) {15};
frost$core$Int64 $tmp2157 = (frost$core$Int64) {13};
int64_t $tmp2158 = $tmp2156.value;
$tmp2155[$tmp2158] = $tmp2157;
// line 350
frost$core$Int64* $tmp2159 = *(&local0);
frost$core$Int64 $tmp2160 = (frost$core$Int64) {16};
frost$core$Int64 $tmp2161 = (frost$core$Int64) {3};
int64_t $tmp2162 = $tmp2160.value;
$tmp2159[$tmp2162] = $tmp2161;
// line 351
frost$core$Int64* $tmp2163 = *(&local0);
frost$core$Int64 $tmp2164 = (frost$core$Int64) {17};
frost$core$Int64 $tmp2165 = (frost$core$Int64) {3};
int64_t $tmp2166 = $tmp2164.value;
$tmp2163[$tmp2166] = $tmp2165;
// line 352
frost$core$Int64* $tmp2167 = *(&local0);
frost$core$Int64 $tmp2168 = (frost$core$Int64) {18};
frost$core$Int64 $tmp2169 = (frost$core$Int64) {3};
int64_t $tmp2170 = $tmp2168.value;
$tmp2167[$tmp2170] = $tmp2169;
// line 353
frost$core$Int64* $tmp2171 = *(&local0);
frost$core$Int64 $tmp2172 = (frost$core$Int64) {19};
frost$core$Int64 $tmp2173 = (frost$core$Int64) {3};
int64_t $tmp2174 = $tmp2172.value;
$tmp2171[$tmp2174] = $tmp2173;
// line 354
frost$core$Int64* $tmp2175 = *(&local0);
return $tmp2175;

}
void org$frostlang$regex$RegexLexer$cleanup(org$frostlang$regex$RegexLexer* param0) {

// line 359
frost$core$Int64*** $tmp2176 = &param0->transitions;
frost$core$Int64** $tmp2177 = *$tmp2176;
frost$core$Int64 $tmp2178 = (frost$core$Int64) {0};
int64_t $tmp2179 = $tmp2178.value;
frost$core$Int64* $tmp2180 = $tmp2177[$tmp2179];
frostFree($tmp2180);
// line 360
frost$core$Int64*** $tmp2181 = &param0->transitions;
frost$core$Int64** $tmp2182 = *$tmp2181;
frost$core$Int64 $tmp2183 = (frost$core$Int64) {10};
int64_t $tmp2184 = $tmp2183.value;
frost$core$Int64* $tmp2185 = $tmp2182[$tmp2184];
frostFree($tmp2185);
// line 361
frost$core$Int64*** $tmp2186 = &param0->transitions;
frost$core$Int64** $tmp2187 = *$tmp2186;
frost$core$Int64 $tmp2188 = (frost$core$Int64) {36};
int64_t $tmp2189 = $tmp2188.value;
frost$core$Int64* $tmp2190 = $tmp2187[$tmp2189];
frostFree($tmp2190);
// line 362
frost$core$Int64*** $tmp2191 = &param0->transitions;
frost$core$Int64** $tmp2192 = *$tmp2191;
frost$core$Int64 $tmp2193 = (frost$core$Int64) {39};
int64_t $tmp2194 = $tmp2193.value;
frost$core$Int64* $tmp2195 = $tmp2192[$tmp2194];
frostFree($tmp2195);
// line 363
frost$core$Int64*** $tmp2196 = &param0->transitions;
frost$core$Int64** $tmp2197 = *$tmp2196;
frost$core$Int64 $tmp2198 = (frost$core$Int64) {40};
int64_t $tmp2199 = $tmp2198.value;
frost$core$Int64* $tmp2200 = $tmp2197[$tmp2199];
frostFree($tmp2200);
// line 364
frost$core$Int64*** $tmp2201 = &param0->transitions;
frost$core$Int64** $tmp2202 = *$tmp2201;
frost$core$Int64 $tmp2203 = (frost$core$Int64) {41};
int64_t $tmp2204 = $tmp2203.value;
frost$core$Int64* $tmp2205 = $tmp2202[$tmp2204];
frostFree($tmp2205);
// line 365
frost$core$Int64*** $tmp2206 = &param0->transitions;
frost$core$Int64** $tmp2207 = *$tmp2206;
frost$core$Int64 $tmp2208 = (frost$core$Int64) {42};
int64_t $tmp2209 = $tmp2208.value;
frost$core$Int64* $tmp2210 = $tmp2207[$tmp2209];
frostFree($tmp2210);
// line 366
frost$core$Int64*** $tmp2211 = &param0->transitions;
frost$core$Int64** $tmp2212 = *$tmp2211;
frost$core$Int64 $tmp2213 = (frost$core$Int64) {43};
int64_t $tmp2214 = $tmp2213.value;
frost$core$Int64* $tmp2215 = $tmp2212[$tmp2214];
frostFree($tmp2215);
// line 367
frost$core$Int64*** $tmp2216 = &param0->transitions;
frost$core$Int64** $tmp2217 = *$tmp2216;
frost$core$Int64 $tmp2218 = (frost$core$Int64) {44};
int64_t $tmp2219 = $tmp2218.value;
frost$core$Int64* $tmp2220 = $tmp2217[$tmp2219];
frostFree($tmp2220);
// line 368
frost$core$Int64*** $tmp2221 = &param0->transitions;
frost$core$Int64** $tmp2222 = *$tmp2221;
frost$core$Int64 $tmp2223 = (frost$core$Int64) {47};
int64_t $tmp2224 = $tmp2223.value;
frost$core$Int64* $tmp2225 = $tmp2222[$tmp2224];
frostFree($tmp2225);
// line 369
frost$core$Int64*** $tmp2226 = &param0->transitions;
frost$core$Int64** $tmp2227 = *$tmp2226;
frost$core$Int64 $tmp2228 = (frost$core$Int64) {48};
int64_t $tmp2229 = $tmp2228.value;
frost$core$Int64* $tmp2230 = $tmp2227[$tmp2229];
frostFree($tmp2230);
// line 370
frost$core$Int64*** $tmp2231 = &param0->transitions;
frost$core$Int64** $tmp2232 = *$tmp2231;
frost$core$Int64 $tmp2233 = (frost$core$Int64) {63};
int64_t $tmp2234 = $tmp2233.value;
frost$core$Int64* $tmp2235 = $tmp2232[$tmp2234];
frostFree($tmp2235);
// line 371
frost$core$Int64*** $tmp2236 = &param0->transitions;
frost$core$Int64** $tmp2237 = *$tmp2236;
frost$core$Int64 $tmp2238 = (frost$core$Int64) {91};
int64_t $tmp2239 = $tmp2238.value;
frost$core$Int64* $tmp2240 = $tmp2237[$tmp2239];
frostFree($tmp2240);
// line 372
frost$core$Int64*** $tmp2241 = &param0->transitions;
frost$core$Int64** $tmp2242 = *$tmp2241;
frost$core$Int64 $tmp2243 = (frost$core$Int64) {92};
int64_t $tmp2244 = $tmp2243.value;
frost$core$Int64* $tmp2245 = $tmp2242[$tmp2244];
frostFree($tmp2245);
// line 373
frost$core$Int64*** $tmp2246 = &param0->transitions;
frost$core$Int64** $tmp2247 = *$tmp2246;
frost$core$Int64 $tmp2248 = (frost$core$Int64) {93};
int64_t $tmp2249 = $tmp2248.value;
frost$core$Int64* $tmp2250 = $tmp2247[$tmp2249];
frostFree($tmp2250);
// line 374
frost$core$Int64*** $tmp2251 = &param0->transitions;
frost$core$Int64** $tmp2252 = *$tmp2251;
frost$core$Int64 $tmp2253 = (frost$core$Int64) {94};
int64_t $tmp2254 = $tmp2253.value;
frost$core$Int64* $tmp2255 = $tmp2252[$tmp2254];
frostFree($tmp2255);
// line 375
frost$core$Int64*** $tmp2256 = &param0->transitions;
frost$core$Int64** $tmp2257 = *$tmp2256;
frost$core$Int64 $tmp2258 = (frost$core$Int64) {96};
int64_t $tmp2259 = $tmp2258.value;
frost$core$Int64* $tmp2260 = $tmp2257[$tmp2259];
frostFree($tmp2260);
// line 376
frost$core$Int64*** $tmp2261 = &param0->transitions;
frost$core$Int64** $tmp2262 = *$tmp2261;
frost$core$Int64 $tmp2263 = (frost$core$Int64) {123};
int64_t $tmp2264 = $tmp2263.value;
frost$core$Int64* $tmp2265 = $tmp2262[$tmp2264];
frostFree($tmp2265);
// line 377
frost$core$Int64*** $tmp2266 = &param0->transitions;
frost$core$Int64** $tmp2267 = *$tmp2266;
frost$core$Int64 $tmp2268 = (frost$core$Int64) {125};
int64_t $tmp2269 = $tmp2268.value;
frost$core$Int64* $tmp2270 = $tmp2267[$tmp2269];
frostFree($tmp2270);
// line 378
frost$core$Int64*** $tmp2271 = &param0->transitions;
frost$core$Int64** $tmp2272 = *$tmp2271;
frostFree($tmp2272);
// line 379
frost$core$Int64** $tmp2273 = &param0->accepts;
frost$core$Int64* $tmp2274 = *$tmp2273;
frostFree($tmp2274);
// line 358
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$plex$runtime$DFA** $tmp2275 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp2276 = *$tmp2275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
return;

}
org$frostlang$regex$RegexToken org$frostlang$regex$RegexLexer$next$R$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexLexer* param0) {

org$frostlang$plex$runtime$RawToken local0;
// line 383
org$frostlang$plex$runtime$DFA** $tmp2277 = &param0->dfa;
org$frostlang$plex$runtime$DFA* $tmp2278 = *$tmp2277;
org$frostlang$plex$runtime$RawToken $tmp2279 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp2278);
*(&local0) = $tmp2279;
// line 384
org$frostlang$plex$runtime$RawToken $tmp2280 = *(&local0);
frost$core$Int64 $tmp2281 = $tmp2280.kind;
org$frostlang$regex$RegexToken$Kind $tmp2282 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp2281);
org$frostlang$plex$runtime$RawToken $tmp2283 = *(&local0);
frost$core$String$Index $tmp2284 = $tmp2283.start;
org$frostlang$plex$runtime$RawToken $tmp2285 = *(&local0);
frost$core$String$Index $tmp2286 = $tmp2285.end;
org$frostlang$plex$runtime$RawToken $tmp2287 = *(&local0);
frost$core$Int64 $tmp2288 = $tmp2287.line;
org$frostlang$plex$runtime$RawToken $tmp2289 = *(&local0);
frost$core$Int64 $tmp2290 = $tmp2289.column;
org$frostlang$frostc$Position $tmp2291 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64($tmp2288, $tmp2290);
org$frostlang$regex$RegexToken $tmp2292 = org$frostlang$regex$RegexToken$init$org$frostlang$regex$RegexToken$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position($tmp2282, $tmp2284, $tmp2286, $tmp2291);
return $tmp2292;

}
void org$frostlang$regex$RegexLexer$init(org$frostlang$regex$RegexLexer* param0) {

// line 15
frost$core$Int64** $tmp2293 = org$frostlang$regex$RegexLexer$getTransitions$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT();
frost$core$Int64*** $tmp2294 = &param0->transitions;
*$tmp2294 = $tmp2293;
// line 17
frost$core$Int64* $tmp2295 = org$frostlang$regex$RegexLexer$getAccepts$R$frost$unsafe$Pointer$LTfrost$core$Int64$GT();
frost$core$Int64** $tmp2296 = &param0->accepts;
*$tmp2296 = $tmp2295;
return;

}

