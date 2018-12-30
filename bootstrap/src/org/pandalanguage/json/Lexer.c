#include "org/pandalanguage/json/Lexer.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/json/Token.h"
#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "org/pandalanguage/json/Token/Kind.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/json/Position.h"


static panda$core$String $s1;
org$pandalanguage$json$Lexer$class_type org$pandalanguage$json$Lexer$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$json$Lexer$cleanup, org$pandalanguage$json$Lexer$start$panda$core$String, org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x4c\x65\x78\x65\x72", 28, 2732806791872433109, NULL };

void org$pandalanguage$json$Lexer$start$panda$core$String(org$pandalanguage$json$Lexer* param0, panda$core$String* param1) {

// line 20
org$pandalanguage$plex$runtime$DFA* $tmp2 = (org$pandalanguage$plex$runtime$DFA*) pandaObjectAlloc(80, (panda$core$Class*) &org$pandalanguage$plex$runtime$DFA$class);
panda$core$Int64 $tmp3 = (panda$core$Int64) {31};
panda$core$Int64*** $tmp4 = &param0->transitions;
panda$core$Int64** $tmp5 = *$tmp4;
panda$core$Int64** $tmp6 = &param0->accepts;
panda$core$Int64* $tmp7 = *$tmp6;
org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp2, param1, $tmp3, $tmp5, $tmp7);
org$pandalanguage$plex$runtime$DFA** $tmp8 = &param0->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
org$pandalanguage$plex$runtime$DFA** $tmp10 = &param0->dfa;
*$tmp10 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
return;

}
panda$core$Int64* org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT(panda$core$Int64 param0, panda$core$Int64 param1) {

panda$core$Int64* local0;
panda$core$Int64 local1;
// line 25
int64_t $tmp11 = param0.value;
panda$core$Int64* $tmp12 = ((panda$core$Int64*) pandaZAlloc($tmp11 * 8));
*(&local0) = $tmp12;
// line 26
panda$core$Int64 $tmp13 = (panda$core$Int64) {0};
panda$core$Bit $tmp14 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp15 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp13, param0, $tmp14);
panda$core$Int64 $tmp16 = $tmp15.min;
*(&local1) = $tmp16;
panda$core$Int64 $tmp17 = $tmp15.max;
panda$core$Bit $tmp18 = $tmp15.inclusive;
bool $tmp19 = $tmp18.value;
panda$core$Int64 $tmp20 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp21 = panda$core$Int64$convert$R$panda$core$UInt64($tmp20);
if ($tmp19) goto block4; else goto block5;
block4:;
int64_t $tmp22 = $tmp16.value;
int64_t $tmp23 = $tmp17.value;
bool $tmp24 = $tmp22 <= $tmp23;
panda$core$Bit $tmp25 = (panda$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block1; else goto block2;
block5:;
int64_t $tmp27 = $tmp16.value;
int64_t $tmp28 = $tmp17.value;
bool $tmp29 = $tmp27 < $tmp28;
panda$core$Bit $tmp30 = (panda$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block1; else goto block2;
block1:;
// line 27
panda$core$Int64* $tmp32 = *(&local0);
panda$core$Int64 $tmp33 = *(&local1);
int64_t $tmp34 = $tmp33.value;
$tmp32[$tmp34] = param1;
goto block3;
block3:;
panda$core$Int64 $tmp35 = *(&local1);
int64_t $tmp36 = $tmp17.value;
int64_t $tmp37 = $tmp35.value;
int64_t $tmp38 = $tmp36 - $tmp37;
panda$core$Int64 $tmp39 = (panda$core$Int64) {$tmp38};
panda$core$UInt64 $tmp40 = panda$core$Int64$convert$R$panda$core$UInt64($tmp39);
if ($tmp19) goto block7; else goto block8;
block7:;
uint64_t $tmp41 = $tmp40.value;
uint64_t $tmp42 = $tmp21.value;
bool $tmp43 = $tmp41 >= $tmp42;
panda$core$Bit $tmp44 = (panda$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block6; else goto block2;
block8:;
uint64_t $tmp46 = $tmp40.value;
uint64_t $tmp47 = $tmp21.value;
bool $tmp48 = $tmp46 > $tmp47;
panda$core$Bit $tmp49 = (panda$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block6; else goto block2;
block6:;
int64_t $tmp51 = $tmp35.value;
int64_t $tmp52 = $tmp20.value;
int64_t $tmp53 = $tmp51 + $tmp52;
panda$core$Int64 $tmp54 = (panda$core$Int64) {$tmp53};
*(&local1) = $tmp54;
goto block1;
block2:;
// line 29
panda$core$Int64* $tmp55 = *(&local0);
return $tmp55;

}
panda$core$Int64** org$pandalanguage$json$Lexer$getTransitions$R$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT() {

panda$core$Int64** local0;
// line 34
panda$core$Int64 $tmp56 = (panda$core$Int64) {256};
int64_t $tmp57 = $tmp56.value;
panda$core$Int64** $tmp58 = ((panda$core$Int64**) pandaZAlloc($tmp57 * 8));
*(&local0) = $tmp58;
// line 35
panda$core$Int64** $tmp59 = *(&local0);
panda$core$Int64 $tmp60 = (panda$core$Int64) {31};
panda$core$Int64 $tmp61 = (panda$core$Int64) {0};
panda$core$Int64* $tmp62 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp60, $tmp61);
panda$core$Int64 $tmp63 = (panda$core$Int64) {0};
int64_t $tmp64 = $tmp63.value;
$tmp59[$tmp64] = $tmp62;
// line 36
panda$core$Int64** $tmp65 = *(&local0);
panda$core$Int64 $tmp66 = (panda$core$Int64) {0};
int64_t $tmp67 = $tmp66.value;
panda$core$Int64* $tmp68 = $tmp65[$tmp67];
panda$core$Int64 $tmp69 = (panda$core$Int64) {3};
panda$core$Int64 $tmp70 = (panda$core$Int64) {3};
int64_t $tmp71 = $tmp70.value;
$tmp68[$tmp71] = $tmp69;
// line 37
panda$core$Int64** $tmp72 = *(&local0);
panda$core$Int64** $tmp73 = *(&local0);
panda$core$Int64 $tmp74 = (panda$core$Int64) {0};
int64_t $tmp75 = $tmp74.value;
panda$core$Int64* $tmp76 = $tmp73[$tmp75];
panda$core$Int64 $tmp77 = (panda$core$Int64) {1};
int64_t $tmp78 = $tmp77.value;
$tmp72[$tmp78] = $tmp76;
// line 38
panda$core$Int64** $tmp79 = *(&local0);
panda$core$Int64** $tmp80 = *(&local0);
panda$core$Int64 $tmp81 = (panda$core$Int64) {0};
int64_t $tmp82 = $tmp81.value;
panda$core$Int64* $tmp83 = $tmp80[$tmp82];
panda$core$Int64 $tmp84 = (panda$core$Int64) {2};
int64_t $tmp85 = $tmp84.value;
$tmp79[$tmp85] = $tmp83;
// line 39
panda$core$Int64** $tmp86 = *(&local0);
panda$core$Int64** $tmp87 = *(&local0);
panda$core$Int64 $tmp88 = (panda$core$Int64) {0};
int64_t $tmp89 = $tmp88.value;
panda$core$Int64* $tmp90 = $tmp87[$tmp89];
panda$core$Int64 $tmp91 = (panda$core$Int64) {3};
int64_t $tmp92 = $tmp91.value;
$tmp86[$tmp92] = $tmp90;
// line 40
panda$core$Int64** $tmp93 = *(&local0);
panda$core$Int64** $tmp94 = *(&local0);
panda$core$Int64 $tmp95 = (panda$core$Int64) {0};
int64_t $tmp96 = $tmp95.value;
panda$core$Int64* $tmp97 = $tmp94[$tmp96];
panda$core$Int64 $tmp98 = (panda$core$Int64) {4};
int64_t $tmp99 = $tmp98.value;
$tmp93[$tmp99] = $tmp97;
// line 41
panda$core$Int64** $tmp100 = *(&local0);
panda$core$Int64** $tmp101 = *(&local0);
panda$core$Int64 $tmp102 = (panda$core$Int64) {0};
int64_t $tmp103 = $tmp102.value;
panda$core$Int64* $tmp104 = $tmp101[$tmp103];
panda$core$Int64 $tmp105 = (panda$core$Int64) {5};
int64_t $tmp106 = $tmp105.value;
$tmp100[$tmp106] = $tmp104;
// line 42
panda$core$Int64** $tmp107 = *(&local0);
panda$core$Int64** $tmp108 = *(&local0);
panda$core$Int64 $tmp109 = (panda$core$Int64) {0};
int64_t $tmp110 = $tmp109.value;
panda$core$Int64* $tmp111 = $tmp108[$tmp110];
panda$core$Int64 $tmp112 = (panda$core$Int64) {6};
int64_t $tmp113 = $tmp112.value;
$tmp107[$tmp113] = $tmp111;
// line 43
panda$core$Int64** $tmp114 = *(&local0);
panda$core$Int64** $tmp115 = *(&local0);
panda$core$Int64 $tmp116 = (panda$core$Int64) {0};
int64_t $tmp117 = $tmp116.value;
panda$core$Int64* $tmp118 = $tmp115[$tmp117];
panda$core$Int64 $tmp119 = (panda$core$Int64) {7};
int64_t $tmp120 = $tmp119.value;
$tmp114[$tmp120] = $tmp118;
// line 44
panda$core$Int64** $tmp121 = *(&local0);
panda$core$Int64** $tmp122 = *(&local0);
panda$core$Int64 $tmp123 = (panda$core$Int64) {0};
int64_t $tmp124 = $tmp123.value;
panda$core$Int64* $tmp125 = $tmp122[$tmp124];
panda$core$Int64 $tmp126 = (panda$core$Int64) {8};
int64_t $tmp127 = $tmp126.value;
$tmp121[$tmp127] = $tmp125;
// line 45
panda$core$Int64** $tmp128 = *(&local0);
panda$core$Int64 $tmp129 = (panda$core$Int64) {31};
panda$core$Int64 $tmp130 = (panda$core$Int64) {0};
panda$core$Int64* $tmp131 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp129, $tmp130);
panda$core$Int64 $tmp132 = (panda$core$Int64) {9};
int64_t $tmp133 = $tmp132.value;
$tmp128[$tmp133] = $tmp131;
// line 46
panda$core$Int64** $tmp134 = *(&local0);
panda$core$Int64 $tmp135 = (panda$core$Int64) {9};
int64_t $tmp136 = $tmp135.value;
panda$core$Int64* $tmp137 = $tmp134[$tmp136];
panda$core$Int64 $tmp138 = (panda$core$Int64) {2};
panda$core$Int64 $tmp139 = (panda$core$Int64) {1};
int64_t $tmp140 = $tmp139.value;
$tmp137[$tmp140] = $tmp138;
// line 47
panda$core$Int64** $tmp141 = *(&local0);
panda$core$Int64 $tmp142 = (panda$core$Int64) {9};
int64_t $tmp143 = $tmp142.value;
panda$core$Int64* $tmp144 = $tmp141[$tmp143];
panda$core$Int64 $tmp145 = (panda$core$Int64) {2};
panda$core$Int64 $tmp146 = (panda$core$Int64) {2};
int64_t $tmp147 = $tmp146.value;
$tmp144[$tmp147] = $tmp145;
// line 48
panda$core$Int64** $tmp148 = *(&local0);
panda$core$Int64 $tmp149 = (panda$core$Int64) {9};
int64_t $tmp150 = $tmp149.value;
panda$core$Int64* $tmp151 = $tmp148[$tmp150];
panda$core$Int64 $tmp152 = (panda$core$Int64) {3};
panda$core$Int64 $tmp153 = (panda$core$Int64) {3};
int64_t $tmp154 = $tmp153.value;
$tmp151[$tmp154] = $tmp152;
// line 49
panda$core$Int64** $tmp155 = *(&local0);
panda$core$Int64** $tmp156 = *(&local0);
panda$core$Int64 $tmp157 = (panda$core$Int64) {9};
int64_t $tmp158 = $tmp157.value;
panda$core$Int64* $tmp159 = $tmp156[$tmp158];
panda$core$Int64 $tmp160 = (panda$core$Int64) {10};
int64_t $tmp161 = $tmp160.value;
$tmp155[$tmp161] = $tmp159;
// line 50
panda$core$Int64** $tmp162 = *(&local0);
panda$core$Int64** $tmp163 = *(&local0);
panda$core$Int64 $tmp164 = (panda$core$Int64) {0};
int64_t $tmp165 = $tmp164.value;
panda$core$Int64* $tmp166 = $tmp163[$tmp165];
panda$core$Int64 $tmp167 = (panda$core$Int64) {11};
int64_t $tmp168 = $tmp167.value;
$tmp162[$tmp168] = $tmp166;
// line 51
panda$core$Int64** $tmp169 = *(&local0);
panda$core$Int64** $tmp170 = *(&local0);
panda$core$Int64 $tmp171 = (panda$core$Int64) {0};
int64_t $tmp172 = $tmp171.value;
panda$core$Int64* $tmp173 = $tmp170[$tmp172];
panda$core$Int64 $tmp174 = (panda$core$Int64) {12};
int64_t $tmp175 = $tmp174.value;
$tmp169[$tmp175] = $tmp173;
// line 52
panda$core$Int64** $tmp176 = *(&local0);
panda$core$Int64** $tmp177 = *(&local0);
panda$core$Int64 $tmp178 = (panda$core$Int64) {9};
int64_t $tmp179 = $tmp178.value;
panda$core$Int64* $tmp180 = $tmp177[$tmp179];
panda$core$Int64 $tmp181 = (panda$core$Int64) {13};
int64_t $tmp182 = $tmp181.value;
$tmp176[$tmp182] = $tmp180;
// line 53
panda$core$Int64** $tmp183 = *(&local0);
panda$core$Int64** $tmp184 = *(&local0);
panda$core$Int64 $tmp185 = (panda$core$Int64) {0};
int64_t $tmp186 = $tmp185.value;
panda$core$Int64* $tmp187 = $tmp184[$tmp186];
panda$core$Int64 $tmp188 = (panda$core$Int64) {14};
int64_t $tmp189 = $tmp188.value;
$tmp183[$tmp189] = $tmp187;
// line 54
panda$core$Int64** $tmp190 = *(&local0);
panda$core$Int64** $tmp191 = *(&local0);
panda$core$Int64 $tmp192 = (panda$core$Int64) {0};
int64_t $tmp193 = $tmp192.value;
panda$core$Int64* $tmp194 = $tmp191[$tmp193];
panda$core$Int64 $tmp195 = (panda$core$Int64) {15};
int64_t $tmp196 = $tmp195.value;
$tmp190[$tmp196] = $tmp194;
// line 55
panda$core$Int64** $tmp197 = *(&local0);
panda$core$Int64** $tmp198 = *(&local0);
panda$core$Int64 $tmp199 = (panda$core$Int64) {0};
int64_t $tmp200 = $tmp199.value;
panda$core$Int64* $tmp201 = $tmp198[$tmp200];
panda$core$Int64 $tmp202 = (panda$core$Int64) {16};
int64_t $tmp203 = $tmp202.value;
$tmp197[$tmp203] = $tmp201;
// line 56
panda$core$Int64** $tmp204 = *(&local0);
panda$core$Int64** $tmp205 = *(&local0);
panda$core$Int64 $tmp206 = (panda$core$Int64) {0};
int64_t $tmp207 = $tmp206.value;
panda$core$Int64* $tmp208 = $tmp205[$tmp207];
panda$core$Int64 $tmp209 = (panda$core$Int64) {17};
int64_t $tmp210 = $tmp209.value;
$tmp204[$tmp210] = $tmp208;
// line 57
panda$core$Int64** $tmp211 = *(&local0);
panda$core$Int64** $tmp212 = *(&local0);
panda$core$Int64 $tmp213 = (panda$core$Int64) {0};
int64_t $tmp214 = $tmp213.value;
panda$core$Int64* $tmp215 = $tmp212[$tmp214];
panda$core$Int64 $tmp216 = (panda$core$Int64) {18};
int64_t $tmp217 = $tmp216.value;
$tmp211[$tmp217] = $tmp215;
// line 58
panda$core$Int64** $tmp218 = *(&local0);
panda$core$Int64** $tmp219 = *(&local0);
panda$core$Int64 $tmp220 = (panda$core$Int64) {0};
int64_t $tmp221 = $tmp220.value;
panda$core$Int64* $tmp222 = $tmp219[$tmp221];
panda$core$Int64 $tmp223 = (panda$core$Int64) {19};
int64_t $tmp224 = $tmp223.value;
$tmp218[$tmp224] = $tmp222;
// line 59
panda$core$Int64** $tmp225 = *(&local0);
panda$core$Int64** $tmp226 = *(&local0);
panda$core$Int64 $tmp227 = (panda$core$Int64) {0};
int64_t $tmp228 = $tmp227.value;
panda$core$Int64* $tmp229 = $tmp226[$tmp228];
panda$core$Int64 $tmp230 = (panda$core$Int64) {20};
int64_t $tmp231 = $tmp230.value;
$tmp225[$tmp231] = $tmp229;
// line 60
panda$core$Int64** $tmp232 = *(&local0);
panda$core$Int64** $tmp233 = *(&local0);
panda$core$Int64 $tmp234 = (panda$core$Int64) {0};
int64_t $tmp235 = $tmp234.value;
panda$core$Int64* $tmp236 = $tmp233[$tmp235];
panda$core$Int64 $tmp237 = (panda$core$Int64) {21};
int64_t $tmp238 = $tmp237.value;
$tmp232[$tmp238] = $tmp236;
// line 61
panda$core$Int64** $tmp239 = *(&local0);
panda$core$Int64** $tmp240 = *(&local0);
panda$core$Int64 $tmp241 = (panda$core$Int64) {0};
int64_t $tmp242 = $tmp241.value;
panda$core$Int64* $tmp243 = $tmp240[$tmp242];
panda$core$Int64 $tmp244 = (panda$core$Int64) {22};
int64_t $tmp245 = $tmp244.value;
$tmp239[$tmp245] = $tmp243;
// line 62
panda$core$Int64** $tmp246 = *(&local0);
panda$core$Int64** $tmp247 = *(&local0);
panda$core$Int64 $tmp248 = (panda$core$Int64) {0};
int64_t $tmp249 = $tmp248.value;
panda$core$Int64* $tmp250 = $tmp247[$tmp249];
panda$core$Int64 $tmp251 = (panda$core$Int64) {23};
int64_t $tmp252 = $tmp251.value;
$tmp246[$tmp252] = $tmp250;
// line 63
panda$core$Int64** $tmp253 = *(&local0);
panda$core$Int64** $tmp254 = *(&local0);
panda$core$Int64 $tmp255 = (panda$core$Int64) {0};
int64_t $tmp256 = $tmp255.value;
panda$core$Int64* $tmp257 = $tmp254[$tmp256];
panda$core$Int64 $tmp258 = (panda$core$Int64) {24};
int64_t $tmp259 = $tmp258.value;
$tmp253[$tmp259] = $tmp257;
// line 64
panda$core$Int64** $tmp260 = *(&local0);
panda$core$Int64** $tmp261 = *(&local0);
panda$core$Int64 $tmp262 = (panda$core$Int64) {0};
int64_t $tmp263 = $tmp262.value;
panda$core$Int64* $tmp264 = $tmp261[$tmp263];
panda$core$Int64 $tmp265 = (panda$core$Int64) {25};
int64_t $tmp266 = $tmp265.value;
$tmp260[$tmp266] = $tmp264;
// line 65
panda$core$Int64** $tmp267 = *(&local0);
panda$core$Int64** $tmp268 = *(&local0);
panda$core$Int64 $tmp269 = (panda$core$Int64) {0};
int64_t $tmp270 = $tmp269.value;
panda$core$Int64* $tmp271 = $tmp268[$tmp270];
panda$core$Int64 $tmp272 = (panda$core$Int64) {26};
int64_t $tmp273 = $tmp272.value;
$tmp267[$tmp273] = $tmp271;
// line 66
panda$core$Int64** $tmp274 = *(&local0);
panda$core$Int64** $tmp275 = *(&local0);
panda$core$Int64 $tmp276 = (panda$core$Int64) {0};
int64_t $tmp277 = $tmp276.value;
panda$core$Int64* $tmp278 = $tmp275[$tmp277];
panda$core$Int64 $tmp279 = (panda$core$Int64) {27};
int64_t $tmp280 = $tmp279.value;
$tmp274[$tmp280] = $tmp278;
// line 67
panda$core$Int64** $tmp281 = *(&local0);
panda$core$Int64** $tmp282 = *(&local0);
panda$core$Int64 $tmp283 = (panda$core$Int64) {0};
int64_t $tmp284 = $tmp283.value;
panda$core$Int64* $tmp285 = $tmp282[$tmp284];
panda$core$Int64 $tmp286 = (panda$core$Int64) {28};
int64_t $tmp287 = $tmp286.value;
$tmp281[$tmp287] = $tmp285;
// line 68
panda$core$Int64** $tmp288 = *(&local0);
panda$core$Int64** $tmp289 = *(&local0);
panda$core$Int64 $tmp290 = (panda$core$Int64) {0};
int64_t $tmp291 = $tmp290.value;
panda$core$Int64* $tmp292 = $tmp289[$tmp291];
panda$core$Int64 $tmp293 = (panda$core$Int64) {29};
int64_t $tmp294 = $tmp293.value;
$tmp288[$tmp294] = $tmp292;
// line 69
panda$core$Int64** $tmp295 = *(&local0);
panda$core$Int64** $tmp296 = *(&local0);
panda$core$Int64 $tmp297 = (panda$core$Int64) {0};
int64_t $tmp298 = $tmp297.value;
panda$core$Int64* $tmp299 = $tmp296[$tmp298];
panda$core$Int64 $tmp300 = (panda$core$Int64) {30};
int64_t $tmp301 = $tmp300.value;
$tmp295[$tmp301] = $tmp299;
// line 70
panda$core$Int64** $tmp302 = *(&local0);
panda$core$Int64** $tmp303 = *(&local0);
panda$core$Int64 $tmp304 = (panda$core$Int64) {0};
int64_t $tmp305 = $tmp304.value;
panda$core$Int64* $tmp306 = $tmp303[$tmp305];
panda$core$Int64 $tmp307 = (panda$core$Int64) {31};
int64_t $tmp308 = $tmp307.value;
$tmp302[$tmp308] = $tmp306;
// line 71
panda$core$Int64** $tmp309 = *(&local0);
panda$core$Int64** $tmp310 = *(&local0);
panda$core$Int64 $tmp311 = (panda$core$Int64) {9};
int64_t $tmp312 = $tmp311.value;
panda$core$Int64* $tmp313 = $tmp310[$tmp312];
panda$core$Int64 $tmp314 = (panda$core$Int64) {32};
int64_t $tmp315 = $tmp314.value;
$tmp309[$tmp315] = $tmp313;
// line 72
panda$core$Int64** $tmp316 = *(&local0);
panda$core$Int64** $tmp317 = *(&local0);
panda$core$Int64 $tmp318 = (panda$core$Int64) {0};
int64_t $tmp319 = $tmp318.value;
panda$core$Int64* $tmp320 = $tmp317[$tmp319];
panda$core$Int64 $tmp321 = (panda$core$Int64) {33};
int64_t $tmp322 = $tmp321.value;
$tmp316[$tmp322] = $tmp320;
// line 73
panda$core$Int64** $tmp323 = *(&local0);
panda$core$Int64 $tmp324 = (panda$core$Int64) {31};
panda$core$Int64 $tmp325 = (panda$core$Int64) {0};
panda$core$Int64* $tmp326 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp324, $tmp325);
panda$core$Int64 $tmp327 = (panda$core$Int64) {34};
int64_t $tmp328 = $tmp327.value;
$tmp323[$tmp328] = $tmp326;
// line 74
panda$core$Int64** $tmp329 = *(&local0);
panda$core$Int64 $tmp330 = (panda$core$Int64) {34};
int64_t $tmp331 = $tmp330.value;
panda$core$Int64* $tmp332 = $tmp329[$tmp331];
panda$core$Int64 $tmp333 = (panda$core$Int64) {3};
panda$core$Int64 $tmp334 = (panda$core$Int64) {1};
int64_t $tmp335 = $tmp334.value;
$tmp332[$tmp335] = $tmp333;
// line 75
panda$core$Int64** $tmp336 = *(&local0);
panda$core$Int64 $tmp337 = (panda$core$Int64) {34};
int64_t $tmp338 = $tmp337.value;
panda$core$Int64* $tmp339 = $tmp336[$tmp338];
panda$core$Int64 $tmp340 = (panda$core$Int64) {4};
panda$core$Int64 $tmp341 = (panda$core$Int64) {3};
int64_t $tmp342 = $tmp341.value;
$tmp339[$tmp342] = $tmp340;
// line 76
panda$core$Int64** $tmp343 = *(&local0);
panda$core$Int64 $tmp344 = (panda$core$Int64) {34};
int64_t $tmp345 = $tmp344.value;
panda$core$Int64* $tmp346 = $tmp343[$tmp345];
panda$core$Int64 $tmp347 = (panda$core$Int64) {3};
panda$core$Int64 $tmp348 = (panda$core$Int64) {5};
int64_t $tmp349 = $tmp348.value;
$tmp346[$tmp349] = $tmp347;
// line 77
panda$core$Int64** $tmp350 = *(&local0);
panda$core$Int64** $tmp351 = *(&local0);
panda$core$Int64 $tmp352 = (panda$core$Int64) {0};
int64_t $tmp353 = $tmp352.value;
panda$core$Int64* $tmp354 = $tmp351[$tmp353];
panda$core$Int64 $tmp355 = (panda$core$Int64) {35};
int64_t $tmp356 = $tmp355.value;
$tmp350[$tmp356] = $tmp354;
// line 78
panda$core$Int64** $tmp357 = *(&local0);
panda$core$Int64** $tmp358 = *(&local0);
panda$core$Int64 $tmp359 = (panda$core$Int64) {0};
int64_t $tmp360 = $tmp359.value;
panda$core$Int64* $tmp361 = $tmp358[$tmp360];
panda$core$Int64 $tmp362 = (panda$core$Int64) {36};
int64_t $tmp363 = $tmp362.value;
$tmp357[$tmp363] = $tmp361;
// line 79
panda$core$Int64** $tmp364 = *(&local0);
panda$core$Int64** $tmp365 = *(&local0);
panda$core$Int64 $tmp366 = (panda$core$Int64) {0};
int64_t $tmp367 = $tmp366.value;
panda$core$Int64* $tmp368 = $tmp365[$tmp367];
panda$core$Int64 $tmp369 = (panda$core$Int64) {37};
int64_t $tmp370 = $tmp369.value;
$tmp364[$tmp370] = $tmp368;
// line 80
panda$core$Int64** $tmp371 = *(&local0);
panda$core$Int64** $tmp372 = *(&local0);
panda$core$Int64 $tmp373 = (panda$core$Int64) {0};
int64_t $tmp374 = $tmp373.value;
panda$core$Int64* $tmp375 = $tmp372[$tmp374];
panda$core$Int64 $tmp376 = (panda$core$Int64) {38};
int64_t $tmp377 = $tmp376.value;
$tmp371[$tmp377] = $tmp375;
// line 81
panda$core$Int64** $tmp378 = *(&local0);
panda$core$Int64** $tmp379 = *(&local0);
panda$core$Int64 $tmp380 = (panda$core$Int64) {0};
int64_t $tmp381 = $tmp380.value;
panda$core$Int64* $tmp382 = $tmp379[$tmp381];
panda$core$Int64 $tmp383 = (panda$core$Int64) {39};
int64_t $tmp384 = $tmp383.value;
$tmp378[$tmp384] = $tmp382;
// line 82
panda$core$Int64** $tmp385 = *(&local0);
panda$core$Int64** $tmp386 = *(&local0);
panda$core$Int64 $tmp387 = (panda$core$Int64) {0};
int64_t $tmp388 = $tmp387.value;
panda$core$Int64* $tmp389 = $tmp386[$tmp388];
panda$core$Int64 $tmp390 = (panda$core$Int64) {40};
int64_t $tmp391 = $tmp390.value;
$tmp385[$tmp391] = $tmp389;
// line 83
panda$core$Int64** $tmp392 = *(&local0);
panda$core$Int64** $tmp393 = *(&local0);
panda$core$Int64 $tmp394 = (panda$core$Int64) {0};
int64_t $tmp395 = $tmp394.value;
panda$core$Int64* $tmp396 = $tmp393[$tmp395];
panda$core$Int64 $tmp397 = (panda$core$Int64) {41};
int64_t $tmp398 = $tmp397.value;
$tmp392[$tmp398] = $tmp396;
// line 84
panda$core$Int64** $tmp399 = *(&local0);
panda$core$Int64** $tmp400 = *(&local0);
panda$core$Int64 $tmp401 = (panda$core$Int64) {0};
int64_t $tmp402 = $tmp401.value;
panda$core$Int64* $tmp403 = $tmp400[$tmp402];
panda$core$Int64 $tmp404 = (panda$core$Int64) {42};
int64_t $tmp405 = $tmp404.value;
$tmp399[$tmp405] = $tmp403;
// line 85
panda$core$Int64** $tmp406 = *(&local0);
panda$core$Int64 $tmp407 = (panda$core$Int64) {31};
panda$core$Int64 $tmp408 = (panda$core$Int64) {0};
panda$core$Int64* $tmp409 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp407, $tmp408);
panda$core$Int64 $tmp410 = (panda$core$Int64) {43};
int64_t $tmp411 = $tmp410.value;
$tmp406[$tmp411] = $tmp409;
// line 86
panda$core$Int64** $tmp412 = *(&local0);
panda$core$Int64 $tmp413 = (panda$core$Int64) {43};
int64_t $tmp414 = $tmp413.value;
panda$core$Int64* $tmp415 = $tmp412[$tmp414];
panda$core$Int64 $tmp416 = (panda$core$Int64) {3};
panda$core$Int64 $tmp417 = (panda$core$Int64) {3};
int64_t $tmp418 = $tmp417.value;
$tmp415[$tmp418] = $tmp416;
// line 87
panda$core$Int64** $tmp419 = *(&local0);
panda$core$Int64 $tmp420 = (panda$core$Int64) {43};
int64_t $tmp421 = $tmp420.value;
panda$core$Int64* $tmp422 = $tmp419[$tmp421];
panda$core$Int64 $tmp423 = (panda$core$Int64) {11};
panda$core$Int64 $tmp424 = (panda$core$Int64) {10};
int64_t $tmp425 = $tmp424.value;
$tmp422[$tmp425] = $tmp423;
// line 88
panda$core$Int64** $tmp426 = *(&local0);
panda$core$Int64 $tmp427 = (panda$core$Int64) {31};
panda$core$Int64 $tmp428 = (panda$core$Int64) {0};
panda$core$Int64* $tmp429 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp427, $tmp428);
panda$core$Int64 $tmp430 = (panda$core$Int64) {44};
int64_t $tmp431 = $tmp430.value;
$tmp426[$tmp431] = $tmp429;
// line 89
panda$core$Int64** $tmp432 = *(&local0);
panda$core$Int64 $tmp433 = (panda$core$Int64) {44};
int64_t $tmp434 = $tmp433.value;
panda$core$Int64* $tmp435 = $tmp432[$tmp434];
panda$core$Int64 $tmp436 = (panda$core$Int64) {6};
panda$core$Int64 $tmp437 = (panda$core$Int64) {1};
int64_t $tmp438 = $tmp437.value;
$tmp435[$tmp438] = $tmp436;
// line 90
panda$core$Int64** $tmp439 = *(&local0);
panda$core$Int64 $tmp440 = (panda$core$Int64) {44};
int64_t $tmp441 = $tmp440.value;
panda$core$Int64* $tmp442 = $tmp439[$tmp441];
panda$core$Int64 $tmp443 = (panda$core$Int64) {3};
panda$core$Int64 $tmp444 = (panda$core$Int64) {3};
int64_t $tmp445 = $tmp444.value;
$tmp442[$tmp445] = $tmp443;
// line 91
panda$core$Int64** $tmp446 = *(&local0);
panda$core$Int64 $tmp447 = (panda$core$Int64) {31};
panda$core$Int64 $tmp448 = (panda$core$Int64) {0};
panda$core$Int64* $tmp449 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp447, $tmp448);
panda$core$Int64 $tmp450 = (panda$core$Int64) {45};
int64_t $tmp451 = $tmp450.value;
$tmp446[$tmp451] = $tmp449;
// line 92
panda$core$Int64** $tmp452 = *(&local0);
panda$core$Int64 $tmp453 = (panda$core$Int64) {45};
int64_t $tmp454 = $tmp453.value;
panda$core$Int64* $tmp455 = $tmp452[$tmp454];
panda$core$Int64 $tmp456 = (panda$core$Int64) {7};
panda$core$Int64 $tmp457 = (panda$core$Int64) {1};
int64_t $tmp458 = $tmp457.value;
$tmp455[$tmp458] = $tmp456;
// line 93
panda$core$Int64** $tmp459 = *(&local0);
panda$core$Int64 $tmp460 = (panda$core$Int64) {45};
int64_t $tmp461 = $tmp460.value;
panda$core$Int64* $tmp462 = $tmp459[$tmp461];
panda$core$Int64 $tmp463 = (panda$core$Int64) {3};
panda$core$Int64 $tmp464 = (panda$core$Int64) {3};
int64_t $tmp465 = $tmp464.value;
$tmp462[$tmp465] = $tmp463;
// line 94
panda$core$Int64** $tmp466 = *(&local0);
panda$core$Int64 $tmp467 = (panda$core$Int64) {45};
int64_t $tmp468 = $tmp467.value;
panda$core$Int64* $tmp469 = $tmp466[$tmp468];
panda$core$Int64 $tmp470 = (panda$core$Int64) {11};
panda$core$Int64 $tmp471 = (panda$core$Int64) {10};
int64_t $tmp472 = $tmp471.value;
$tmp469[$tmp472] = $tmp470;
// line 95
panda$core$Int64** $tmp473 = *(&local0);
panda$core$Int64 $tmp474 = (panda$core$Int64) {31};
panda$core$Int64 $tmp475 = (panda$core$Int64) {0};
panda$core$Int64* $tmp476 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp474, $tmp475);
panda$core$Int64 $tmp477 = (panda$core$Int64) {46};
int64_t $tmp478 = $tmp477.value;
$tmp473[$tmp478] = $tmp476;
// line 96
panda$core$Int64** $tmp479 = *(&local0);
panda$core$Int64 $tmp480 = (panda$core$Int64) {46};
int64_t $tmp481 = $tmp480.value;
panda$core$Int64* $tmp482 = $tmp479[$tmp481];
panda$core$Int64 $tmp483 = (panda$core$Int64) {9};
panda$core$Int64 $tmp484 = (panda$core$Int64) {1};
int64_t $tmp485 = $tmp484.value;
$tmp482[$tmp485] = $tmp483;
// line 97
panda$core$Int64** $tmp486 = *(&local0);
panda$core$Int64 $tmp487 = (panda$core$Int64) {46};
int64_t $tmp488 = $tmp487.value;
panda$core$Int64* $tmp489 = $tmp486[$tmp488];
panda$core$Int64 $tmp490 = (panda$core$Int64) {3};
panda$core$Int64 $tmp491 = (panda$core$Int64) {3};
int64_t $tmp492 = $tmp491.value;
$tmp489[$tmp492] = $tmp490;
// line 98
panda$core$Int64** $tmp493 = *(&local0);
panda$core$Int64 $tmp494 = (panda$core$Int64) {46};
int64_t $tmp495 = $tmp494.value;
panda$core$Int64* $tmp496 = $tmp493[$tmp495];
panda$core$Int64 $tmp497 = (panda$core$Int64) {9};
panda$core$Int64 $tmp498 = (panda$core$Int64) {8};
int64_t $tmp499 = $tmp498.value;
$tmp496[$tmp499] = $tmp497;
// line 99
panda$core$Int64** $tmp500 = *(&local0);
panda$core$Int64** $tmp501 = *(&local0);
panda$core$Int64 $tmp502 = (panda$core$Int64) {0};
int64_t $tmp503 = $tmp502.value;
panda$core$Int64* $tmp504 = $tmp501[$tmp503];
panda$core$Int64 $tmp505 = (panda$core$Int64) {47};
int64_t $tmp506 = $tmp505.value;
$tmp500[$tmp506] = $tmp504;
// line 100
panda$core$Int64** $tmp507 = *(&local0);
panda$core$Int64 $tmp508 = (panda$core$Int64) {31};
panda$core$Int64 $tmp509 = (panda$core$Int64) {0};
panda$core$Int64* $tmp510 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp508, $tmp509);
panda$core$Int64 $tmp511 = (panda$core$Int64) {48};
int64_t $tmp512 = $tmp511.value;
$tmp507[$tmp512] = $tmp510;
// line 101
panda$core$Int64** $tmp513 = *(&local0);
panda$core$Int64 $tmp514 = (panda$core$Int64) {48};
int64_t $tmp515 = $tmp514.value;
panda$core$Int64* $tmp516 = $tmp513[$tmp515];
panda$core$Int64 $tmp517 = (panda$core$Int64) {8};
panda$core$Int64 $tmp518 = (panda$core$Int64) {1};
int64_t $tmp519 = $tmp518.value;
$tmp516[$tmp519] = $tmp517;
// line 102
panda$core$Int64** $tmp520 = *(&local0);
panda$core$Int64 $tmp521 = (panda$core$Int64) {48};
int64_t $tmp522 = $tmp521.value;
panda$core$Int64* $tmp523 = $tmp520[$tmp522];
panda$core$Int64 $tmp524 = (panda$core$Int64) {3};
panda$core$Int64 $tmp525 = (panda$core$Int64) {3};
int64_t $tmp526 = $tmp525.value;
$tmp523[$tmp526] = $tmp524;
// line 103
panda$core$Int64** $tmp527 = *(&local0);
panda$core$Int64 $tmp528 = (panda$core$Int64) {48};
int64_t $tmp529 = $tmp528.value;
panda$core$Int64* $tmp530 = $tmp527[$tmp529];
panda$core$Int64 $tmp531 = (panda$core$Int64) {8};
panda$core$Int64 $tmp532 = (panda$core$Int64) {7};
int64_t $tmp533 = $tmp532.value;
$tmp530[$tmp533] = $tmp531;
// line 104
panda$core$Int64** $tmp534 = *(&local0);
panda$core$Int64 $tmp535 = (panda$core$Int64) {48};
int64_t $tmp536 = $tmp535.value;
panda$core$Int64* $tmp537 = $tmp534[$tmp536];
panda$core$Int64 $tmp538 = (panda$core$Int64) {8};
panda$core$Int64 $tmp539 = (panda$core$Int64) {8};
int64_t $tmp540 = $tmp539.value;
$tmp537[$tmp540] = $tmp538;
// line 105
panda$core$Int64** $tmp541 = *(&local0);
panda$core$Int64 $tmp542 = (panda$core$Int64) {48};
int64_t $tmp543 = $tmp542.value;
panda$core$Int64* $tmp544 = $tmp541[$tmp543];
panda$core$Int64 $tmp545 = (panda$core$Int64) {9};
panda$core$Int64 $tmp546 = (panda$core$Int64) {9};
int64_t $tmp547 = $tmp546.value;
$tmp544[$tmp547] = $tmp545;
// line 106
panda$core$Int64** $tmp548 = *(&local0);
panda$core$Int64 $tmp549 = (panda$core$Int64) {48};
int64_t $tmp550 = $tmp549.value;
panda$core$Int64* $tmp551 = $tmp548[$tmp550];
panda$core$Int64 $tmp552 = (panda$core$Int64) {12};
panda$core$Int64 $tmp553 = (panda$core$Int64) {10};
int64_t $tmp554 = $tmp553.value;
$tmp551[$tmp554] = $tmp552;
// line 107
panda$core$Int64** $tmp555 = *(&local0);
panda$core$Int64 $tmp556 = (panda$core$Int64) {48};
int64_t $tmp557 = $tmp556.value;
panda$core$Int64* $tmp558 = $tmp555[$tmp557];
panda$core$Int64 $tmp559 = (panda$core$Int64) {12};
panda$core$Int64 $tmp560 = (panda$core$Int64) {11};
int64_t $tmp561 = $tmp560.value;
$tmp558[$tmp561] = $tmp559;
// line 108
panda$core$Int64** $tmp562 = *(&local0);
panda$core$Int64 $tmp563 = (panda$core$Int64) {48};
int64_t $tmp564 = $tmp563.value;
panda$core$Int64* $tmp565 = $tmp562[$tmp564];
panda$core$Int64 $tmp566 = (panda$core$Int64) {12};
panda$core$Int64 $tmp567 = (panda$core$Int64) {12};
int64_t $tmp568 = $tmp567.value;
$tmp565[$tmp568] = $tmp566;
// line 109
panda$core$Int64** $tmp569 = *(&local0);
panda$core$Int64** $tmp570 = *(&local0);
panda$core$Int64 $tmp571 = (panda$core$Int64) {48};
int64_t $tmp572 = $tmp571.value;
panda$core$Int64* $tmp573 = $tmp570[$tmp572];
panda$core$Int64 $tmp574 = (panda$core$Int64) {49};
int64_t $tmp575 = $tmp574.value;
$tmp569[$tmp575] = $tmp573;
// line 110
panda$core$Int64** $tmp576 = *(&local0);
panda$core$Int64** $tmp577 = *(&local0);
panda$core$Int64 $tmp578 = (panda$core$Int64) {48};
int64_t $tmp579 = $tmp578.value;
panda$core$Int64* $tmp580 = $tmp577[$tmp579];
panda$core$Int64 $tmp581 = (panda$core$Int64) {50};
int64_t $tmp582 = $tmp581.value;
$tmp576[$tmp582] = $tmp580;
// line 111
panda$core$Int64** $tmp583 = *(&local0);
panda$core$Int64** $tmp584 = *(&local0);
panda$core$Int64 $tmp585 = (panda$core$Int64) {48};
int64_t $tmp586 = $tmp585.value;
panda$core$Int64* $tmp587 = $tmp584[$tmp586];
panda$core$Int64 $tmp588 = (panda$core$Int64) {51};
int64_t $tmp589 = $tmp588.value;
$tmp583[$tmp589] = $tmp587;
// line 112
panda$core$Int64** $tmp590 = *(&local0);
panda$core$Int64** $tmp591 = *(&local0);
panda$core$Int64 $tmp592 = (panda$core$Int64) {48};
int64_t $tmp593 = $tmp592.value;
panda$core$Int64* $tmp594 = $tmp591[$tmp593];
panda$core$Int64 $tmp595 = (panda$core$Int64) {52};
int64_t $tmp596 = $tmp595.value;
$tmp590[$tmp596] = $tmp594;
// line 113
panda$core$Int64** $tmp597 = *(&local0);
panda$core$Int64** $tmp598 = *(&local0);
panda$core$Int64 $tmp599 = (panda$core$Int64) {48};
int64_t $tmp600 = $tmp599.value;
panda$core$Int64* $tmp601 = $tmp598[$tmp600];
panda$core$Int64 $tmp602 = (panda$core$Int64) {53};
int64_t $tmp603 = $tmp602.value;
$tmp597[$tmp603] = $tmp601;
// line 114
panda$core$Int64** $tmp604 = *(&local0);
panda$core$Int64** $tmp605 = *(&local0);
panda$core$Int64 $tmp606 = (panda$core$Int64) {48};
int64_t $tmp607 = $tmp606.value;
panda$core$Int64* $tmp608 = $tmp605[$tmp607];
panda$core$Int64 $tmp609 = (panda$core$Int64) {54};
int64_t $tmp610 = $tmp609.value;
$tmp604[$tmp610] = $tmp608;
// line 115
panda$core$Int64** $tmp611 = *(&local0);
panda$core$Int64** $tmp612 = *(&local0);
panda$core$Int64 $tmp613 = (panda$core$Int64) {48};
int64_t $tmp614 = $tmp613.value;
panda$core$Int64* $tmp615 = $tmp612[$tmp614];
panda$core$Int64 $tmp616 = (panda$core$Int64) {55};
int64_t $tmp617 = $tmp616.value;
$tmp611[$tmp617] = $tmp615;
// line 116
panda$core$Int64** $tmp618 = *(&local0);
panda$core$Int64** $tmp619 = *(&local0);
panda$core$Int64 $tmp620 = (panda$core$Int64) {48};
int64_t $tmp621 = $tmp620.value;
panda$core$Int64* $tmp622 = $tmp619[$tmp621];
panda$core$Int64 $tmp623 = (panda$core$Int64) {56};
int64_t $tmp624 = $tmp623.value;
$tmp618[$tmp624] = $tmp622;
// line 117
panda$core$Int64** $tmp625 = *(&local0);
panda$core$Int64** $tmp626 = *(&local0);
panda$core$Int64 $tmp627 = (panda$core$Int64) {48};
int64_t $tmp628 = $tmp627.value;
panda$core$Int64* $tmp629 = $tmp626[$tmp628];
panda$core$Int64 $tmp630 = (panda$core$Int64) {57};
int64_t $tmp631 = $tmp630.value;
$tmp625[$tmp631] = $tmp629;
// line 118
panda$core$Int64** $tmp632 = *(&local0);
panda$core$Int64 $tmp633 = (panda$core$Int64) {31};
panda$core$Int64 $tmp634 = (panda$core$Int64) {0};
panda$core$Int64* $tmp635 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp633, $tmp634);
panda$core$Int64 $tmp636 = (panda$core$Int64) {58};
int64_t $tmp637 = $tmp636.value;
$tmp632[$tmp637] = $tmp635;
// line 119
panda$core$Int64** $tmp638 = *(&local0);
panda$core$Int64 $tmp639 = (panda$core$Int64) {58};
int64_t $tmp640 = $tmp639.value;
panda$core$Int64* $tmp641 = $tmp638[$tmp640];
panda$core$Int64 $tmp642 = (panda$core$Int64) {13};
panda$core$Int64 $tmp643 = (panda$core$Int64) {1};
int64_t $tmp644 = $tmp643.value;
$tmp641[$tmp644] = $tmp642;
// line 120
panda$core$Int64** $tmp645 = *(&local0);
panda$core$Int64 $tmp646 = (panda$core$Int64) {58};
int64_t $tmp647 = $tmp646.value;
panda$core$Int64* $tmp648 = $tmp645[$tmp647];
panda$core$Int64 $tmp649 = (panda$core$Int64) {3};
panda$core$Int64 $tmp650 = (panda$core$Int64) {3};
int64_t $tmp651 = $tmp650.value;
$tmp648[$tmp651] = $tmp649;
// line 121
panda$core$Int64** $tmp652 = *(&local0);
panda$core$Int64** $tmp653 = *(&local0);
panda$core$Int64 $tmp654 = (panda$core$Int64) {0};
int64_t $tmp655 = $tmp654.value;
panda$core$Int64* $tmp656 = $tmp653[$tmp655];
panda$core$Int64 $tmp657 = (panda$core$Int64) {59};
int64_t $tmp658 = $tmp657.value;
$tmp652[$tmp658] = $tmp656;
// line 122
panda$core$Int64** $tmp659 = *(&local0);
panda$core$Int64** $tmp660 = *(&local0);
panda$core$Int64 $tmp661 = (panda$core$Int64) {0};
int64_t $tmp662 = $tmp661.value;
panda$core$Int64* $tmp663 = $tmp660[$tmp662];
panda$core$Int64 $tmp664 = (panda$core$Int64) {60};
int64_t $tmp665 = $tmp664.value;
$tmp659[$tmp665] = $tmp663;
// line 123
panda$core$Int64** $tmp666 = *(&local0);
panda$core$Int64** $tmp667 = *(&local0);
panda$core$Int64 $tmp668 = (panda$core$Int64) {0};
int64_t $tmp669 = $tmp668.value;
panda$core$Int64* $tmp670 = $tmp667[$tmp669];
panda$core$Int64 $tmp671 = (panda$core$Int64) {61};
int64_t $tmp672 = $tmp671.value;
$tmp666[$tmp672] = $tmp670;
// line 124
panda$core$Int64** $tmp673 = *(&local0);
panda$core$Int64** $tmp674 = *(&local0);
panda$core$Int64 $tmp675 = (panda$core$Int64) {0};
int64_t $tmp676 = $tmp675.value;
panda$core$Int64* $tmp677 = $tmp674[$tmp676];
panda$core$Int64 $tmp678 = (panda$core$Int64) {62};
int64_t $tmp679 = $tmp678.value;
$tmp673[$tmp679] = $tmp677;
// line 125
panda$core$Int64** $tmp680 = *(&local0);
panda$core$Int64** $tmp681 = *(&local0);
panda$core$Int64 $tmp682 = (panda$core$Int64) {0};
int64_t $tmp683 = $tmp682.value;
panda$core$Int64* $tmp684 = $tmp681[$tmp683];
panda$core$Int64 $tmp685 = (panda$core$Int64) {63};
int64_t $tmp686 = $tmp685.value;
$tmp680[$tmp686] = $tmp684;
// line 126
panda$core$Int64** $tmp687 = *(&local0);
panda$core$Int64** $tmp688 = *(&local0);
panda$core$Int64 $tmp689 = (panda$core$Int64) {0};
int64_t $tmp690 = $tmp689.value;
panda$core$Int64* $tmp691 = $tmp688[$tmp690];
panda$core$Int64 $tmp692 = (panda$core$Int64) {64};
int64_t $tmp693 = $tmp692.value;
$tmp687[$tmp693] = $tmp691;
// line 127
panda$core$Int64** $tmp694 = *(&local0);
panda$core$Int64** $tmp695 = *(&local0);
panda$core$Int64 $tmp696 = (panda$core$Int64) {0};
int64_t $tmp697 = $tmp696.value;
panda$core$Int64* $tmp698 = $tmp695[$tmp697];
panda$core$Int64 $tmp699 = (panda$core$Int64) {65};
int64_t $tmp700 = $tmp699.value;
$tmp694[$tmp700] = $tmp698;
// line 128
panda$core$Int64** $tmp701 = *(&local0);
panda$core$Int64** $tmp702 = *(&local0);
panda$core$Int64 $tmp703 = (panda$core$Int64) {0};
int64_t $tmp704 = $tmp703.value;
panda$core$Int64* $tmp705 = $tmp702[$tmp704];
panda$core$Int64 $tmp706 = (panda$core$Int64) {66};
int64_t $tmp707 = $tmp706.value;
$tmp701[$tmp707] = $tmp705;
// line 129
panda$core$Int64** $tmp708 = *(&local0);
panda$core$Int64** $tmp709 = *(&local0);
panda$core$Int64 $tmp710 = (panda$core$Int64) {0};
int64_t $tmp711 = $tmp710.value;
panda$core$Int64* $tmp712 = $tmp709[$tmp711];
panda$core$Int64 $tmp713 = (panda$core$Int64) {67};
int64_t $tmp714 = $tmp713.value;
$tmp708[$tmp714] = $tmp712;
// line 130
panda$core$Int64** $tmp715 = *(&local0);
panda$core$Int64** $tmp716 = *(&local0);
panda$core$Int64 $tmp717 = (panda$core$Int64) {0};
int64_t $tmp718 = $tmp717.value;
panda$core$Int64* $tmp719 = $tmp716[$tmp718];
panda$core$Int64 $tmp720 = (panda$core$Int64) {68};
int64_t $tmp721 = $tmp720.value;
$tmp715[$tmp721] = $tmp719;
// line 131
panda$core$Int64** $tmp722 = *(&local0);
panda$core$Int64 $tmp723 = (panda$core$Int64) {31};
panda$core$Int64 $tmp724 = (panda$core$Int64) {0};
panda$core$Int64* $tmp725 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp723, $tmp724);
panda$core$Int64 $tmp726 = (panda$core$Int64) {69};
int64_t $tmp727 = $tmp726.value;
$tmp722[$tmp727] = $tmp725;
// line 132
panda$core$Int64** $tmp728 = *(&local0);
panda$core$Int64 $tmp729 = (panda$core$Int64) {69};
int64_t $tmp730 = $tmp729.value;
panda$core$Int64* $tmp731 = $tmp728[$tmp730];
panda$core$Int64 $tmp732 = (panda$core$Int64) {3};
panda$core$Int64 $tmp733 = (panda$core$Int64) {3};
int64_t $tmp734 = $tmp733.value;
$tmp731[$tmp734] = $tmp732;
// line 133
panda$core$Int64** $tmp735 = *(&local0);
panda$core$Int64 $tmp736 = (panda$core$Int64) {69};
int64_t $tmp737 = $tmp736.value;
panda$core$Int64* $tmp738 = $tmp735[$tmp737];
panda$core$Int64 $tmp739 = (panda$core$Int64) {10};
panda$core$Int64 $tmp740 = (panda$core$Int64) {9};
int64_t $tmp741 = $tmp740.value;
$tmp738[$tmp741] = $tmp739;
// line 134
panda$core$Int64** $tmp742 = *(&local0);
panda$core$Int64** $tmp743 = *(&local0);
panda$core$Int64 $tmp744 = (panda$core$Int64) {0};
int64_t $tmp745 = $tmp744.value;
panda$core$Int64* $tmp746 = $tmp743[$tmp745];
panda$core$Int64 $tmp747 = (panda$core$Int64) {70};
int64_t $tmp748 = $tmp747.value;
$tmp742[$tmp748] = $tmp746;
// line 135
panda$core$Int64** $tmp749 = *(&local0);
panda$core$Int64** $tmp750 = *(&local0);
panda$core$Int64 $tmp751 = (panda$core$Int64) {0};
int64_t $tmp752 = $tmp751.value;
panda$core$Int64* $tmp753 = $tmp750[$tmp752];
panda$core$Int64 $tmp754 = (panda$core$Int64) {71};
int64_t $tmp755 = $tmp754.value;
$tmp749[$tmp755] = $tmp753;
// line 136
panda$core$Int64** $tmp756 = *(&local0);
panda$core$Int64** $tmp757 = *(&local0);
panda$core$Int64 $tmp758 = (panda$core$Int64) {0};
int64_t $tmp759 = $tmp758.value;
panda$core$Int64* $tmp760 = $tmp757[$tmp759];
panda$core$Int64 $tmp761 = (panda$core$Int64) {72};
int64_t $tmp762 = $tmp761.value;
$tmp756[$tmp762] = $tmp760;
// line 137
panda$core$Int64** $tmp763 = *(&local0);
panda$core$Int64** $tmp764 = *(&local0);
panda$core$Int64 $tmp765 = (panda$core$Int64) {0};
int64_t $tmp766 = $tmp765.value;
panda$core$Int64* $tmp767 = $tmp764[$tmp766];
panda$core$Int64 $tmp768 = (panda$core$Int64) {73};
int64_t $tmp769 = $tmp768.value;
$tmp763[$tmp769] = $tmp767;
// line 138
panda$core$Int64** $tmp770 = *(&local0);
panda$core$Int64** $tmp771 = *(&local0);
panda$core$Int64 $tmp772 = (panda$core$Int64) {0};
int64_t $tmp773 = $tmp772.value;
panda$core$Int64* $tmp774 = $tmp771[$tmp773];
panda$core$Int64 $tmp775 = (panda$core$Int64) {74};
int64_t $tmp776 = $tmp775.value;
$tmp770[$tmp776] = $tmp774;
// line 139
panda$core$Int64** $tmp777 = *(&local0);
panda$core$Int64** $tmp778 = *(&local0);
panda$core$Int64 $tmp779 = (panda$core$Int64) {0};
int64_t $tmp780 = $tmp779.value;
panda$core$Int64* $tmp781 = $tmp778[$tmp780];
panda$core$Int64 $tmp782 = (panda$core$Int64) {75};
int64_t $tmp783 = $tmp782.value;
$tmp777[$tmp783] = $tmp781;
// line 140
panda$core$Int64** $tmp784 = *(&local0);
panda$core$Int64** $tmp785 = *(&local0);
panda$core$Int64 $tmp786 = (panda$core$Int64) {0};
int64_t $tmp787 = $tmp786.value;
panda$core$Int64* $tmp788 = $tmp785[$tmp787];
panda$core$Int64 $tmp789 = (panda$core$Int64) {76};
int64_t $tmp790 = $tmp789.value;
$tmp784[$tmp790] = $tmp788;
// line 141
panda$core$Int64** $tmp791 = *(&local0);
panda$core$Int64** $tmp792 = *(&local0);
panda$core$Int64 $tmp793 = (panda$core$Int64) {0};
int64_t $tmp794 = $tmp793.value;
panda$core$Int64* $tmp795 = $tmp792[$tmp794];
panda$core$Int64 $tmp796 = (panda$core$Int64) {77};
int64_t $tmp797 = $tmp796.value;
$tmp791[$tmp797] = $tmp795;
// line 142
panda$core$Int64** $tmp798 = *(&local0);
panda$core$Int64** $tmp799 = *(&local0);
panda$core$Int64 $tmp800 = (panda$core$Int64) {0};
int64_t $tmp801 = $tmp800.value;
panda$core$Int64* $tmp802 = $tmp799[$tmp801];
panda$core$Int64 $tmp803 = (panda$core$Int64) {78};
int64_t $tmp804 = $tmp803.value;
$tmp798[$tmp804] = $tmp802;
// line 143
panda$core$Int64** $tmp805 = *(&local0);
panda$core$Int64** $tmp806 = *(&local0);
panda$core$Int64 $tmp807 = (panda$core$Int64) {0};
int64_t $tmp808 = $tmp807.value;
panda$core$Int64* $tmp809 = $tmp806[$tmp808];
panda$core$Int64 $tmp810 = (panda$core$Int64) {79};
int64_t $tmp811 = $tmp810.value;
$tmp805[$tmp811] = $tmp809;
// line 144
panda$core$Int64** $tmp812 = *(&local0);
panda$core$Int64** $tmp813 = *(&local0);
panda$core$Int64 $tmp814 = (panda$core$Int64) {0};
int64_t $tmp815 = $tmp814.value;
panda$core$Int64* $tmp816 = $tmp813[$tmp815];
panda$core$Int64 $tmp817 = (panda$core$Int64) {80};
int64_t $tmp818 = $tmp817.value;
$tmp812[$tmp818] = $tmp816;
// line 145
panda$core$Int64** $tmp819 = *(&local0);
panda$core$Int64** $tmp820 = *(&local0);
panda$core$Int64 $tmp821 = (panda$core$Int64) {0};
int64_t $tmp822 = $tmp821.value;
panda$core$Int64* $tmp823 = $tmp820[$tmp822];
panda$core$Int64 $tmp824 = (panda$core$Int64) {81};
int64_t $tmp825 = $tmp824.value;
$tmp819[$tmp825] = $tmp823;
// line 146
panda$core$Int64** $tmp826 = *(&local0);
panda$core$Int64** $tmp827 = *(&local0);
panda$core$Int64 $tmp828 = (panda$core$Int64) {0};
int64_t $tmp829 = $tmp828.value;
panda$core$Int64* $tmp830 = $tmp827[$tmp829];
panda$core$Int64 $tmp831 = (panda$core$Int64) {82};
int64_t $tmp832 = $tmp831.value;
$tmp826[$tmp832] = $tmp830;
// line 147
panda$core$Int64** $tmp833 = *(&local0);
panda$core$Int64** $tmp834 = *(&local0);
panda$core$Int64 $tmp835 = (panda$core$Int64) {0};
int64_t $tmp836 = $tmp835.value;
panda$core$Int64* $tmp837 = $tmp834[$tmp836];
panda$core$Int64 $tmp838 = (panda$core$Int64) {83};
int64_t $tmp839 = $tmp838.value;
$tmp833[$tmp839] = $tmp837;
// line 148
panda$core$Int64** $tmp840 = *(&local0);
panda$core$Int64** $tmp841 = *(&local0);
panda$core$Int64 $tmp842 = (panda$core$Int64) {0};
int64_t $tmp843 = $tmp842.value;
panda$core$Int64* $tmp844 = $tmp841[$tmp843];
panda$core$Int64 $tmp845 = (panda$core$Int64) {84};
int64_t $tmp846 = $tmp845.value;
$tmp840[$tmp846] = $tmp844;
// line 149
panda$core$Int64** $tmp847 = *(&local0);
panda$core$Int64** $tmp848 = *(&local0);
panda$core$Int64 $tmp849 = (panda$core$Int64) {0};
int64_t $tmp850 = $tmp849.value;
panda$core$Int64* $tmp851 = $tmp848[$tmp850];
panda$core$Int64 $tmp852 = (panda$core$Int64) {85};
int64_t $tmp853 = $tmp852.value;
$tmp847[$tmp853] = $tmp851;
// line 150
panda$core$Int64** $tmp854 = *(&local0);
panda$core$Int64** $tmp855 = *(&local0);
panda$core$Int64 $tmp856 = (panda$core$Int64) {0};
int64_t $tmp857 = $tmp856.value;
panda$core$Int64* $tmp858 = $tmp855[$tmp857];
panda$core$Int64 $tmp859 = (panda$core$Int64) {86};
int64_t $tmp860 = $tmp859.value;
$tmp854[$tmp860] = $tmp858;
// line 151
panda$core$Int64** $tmp861 = *(&local0);
panda$core$Int64** $tmp862 = *(&local0);
panda$core$Int64 $tmp863 = (panda$core$Int64) {0};
int64_t $tmp864 = $tmp863.value;
panda$core$Int64* $tmp865 = $tmp862[$tmp864];
panda$core$Int64 $tmp866 = (panda$core$Int64) {87};
int64_t $tmp867 = $tmp866.value;
$tmp861[$tmp867] = $tmp865;
// line 152
panda$core$Int64** $tmp868 = *(&local0);
panda$core$Int64** $tmp869 = *(&local0);
panda$core$Int64 $tmp870 = (panda$core$Int64) {0};
int64_t $tmp871 = $tmp870.value;
panda$core$Int64* $tmp872 = $tmp869[$tmp871];
panda$core$Int64 $tmp873 = (panda$core$Int64) {88};
int64_t $tmp874 = $tmp873.value;
$tmp868[$tmp874] = $tmp872;
// line 153
panda$core$Int64** $tmp875 = *(&local0);
panda$core$Int64** $tmp876 = *(&local0);
panda$core$Int64 $tmp877 = (panda$core$Int64) {0};
int64_t $tmp878 = $tmp877.value;
panda$core$Int64* $tmp879 = $tmp876[$tmp878];
panda$core$Int64 $tmp880 = (panda$core$Int64) {89};
int64_t $tmp881 = $tmp880.value;
$tmp875[$tmp881] = $tmp879;
// line 154
panda$core$Int64** $tmp882 = *(&local0);
panda$core$Int64** $tmp883 = *(&local0);
panda$core$Int64 $tmp884 = (panda$core$Int64) {0};
int64_t $tmp885 = $tmp884.value;
panda$core$Int64* $tmp886 = $tmp883[$tmp885];
panda$core$Int64 $tmp887 = (panda$core$Int64) {90};
int64_t $tmp888 = $tmp887.value;
$tmp882[$tmp888] = $tmp886;
// line 155
panda$core$Int64** $tmp889 = *(&local0);
panda$core$Int64 $tmp890 = (panda$core$Int64) {31};
panda$core$Int64 $tmp891 = (panda$core$Int64) {0};
panda$core$Int64* $tmp892 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp890, $tmp891);
panda$core$Int64 $tmp893 = (panda$core$Int64) {91};
int64_t $tmp894 = $tmp893.value;
$tmp889[$tmp894] = $tmp892;
// line 156
panda$core$Int64** $tmp895 = *(&local0);
panda$core$Int64 $tmp896 = (panda$core$Int64) {91};
int64_t $tmp897 = $tmp896.value;
panda$core$Int64* $tmp898 = $tmp895[$tmp897];
panda$core$Int64 $tmp899 = (panda$core$Int64) {14};
panda$core$Int64 $tmp900 = (panda$core$Int64) {1};
int64_t $tmp901 = $tmp900.value;
$tmp898[$tmp901] = $tmp899;
// line 157
panda$core$Int64** $tmp902 = *(&local0);
panda$core$Int64 $tmp903 = (panda$core$Int64) {91};
int64_t $tmp904 = $tmp903.value;
panda$core$Int64* $tmp905 = $tmp902[$tmp904];
panda$core$Int64 $tmp906 = (panda$core$Int64) {3};
panda$core$Int64 $tmp907 = (panda$core$Int64) {3};
int64_t $tmp908 = $tmp907.value;
$tmp905[$tmp908] = $tmp906;
// line 158
panda$core$Int64** $tmp909 = *(&local0);
panda$core$Int64 $tmp910 = (panda$core$Int64) {31};
panda$core$Int64 $tmp911 = (panda$core$Int64) {0};
panda$core$Int64* $tmp912 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp910, $tmp911);
panda$core$Int64 $tmp913 = (panda$core$Int64) {92};
int64_t $tmp914 = $tmp913.value;
$tmp909[$tmp914] = $tmp912;
// line 159
panda$core$Int64** $tmp915 = *(&local0);
panda$core$Int64 $tmp916 = (panda$core$Int64) {92};
int64_t $tmp917 = $tmp916.value;
panda$core$Int64* $tmp918 = $tmp915[$tmp917];
panda$core$Int64 $tmp919 = (panda$core$Int64) {5};
panda$core$Int64 $tmp920 = (panda$core$Int64) {3};
int64_t $tmp921 = $tmp920.value;
$tmp918[$tmp921] = $tmp919;
// line 160
panda$core$Int64** $tmp922 = *(&local0);
panda$core$Int64 $tmp923 = (panda$core$Int64) {92};
int64_t $tmp924 = $tmp923.value;
panda$core$Int64* $tmp925 = $tmp922[$tmp924];
panda$core$Int64 $tmp926 = (panda$core$Int64) {3};
panda$core$Int64 $tmp927 = (panda$core$Int64) {5};
int64_t $tmp928 = $tmp927.value;
$tmp925[$tmp928] = $tmp926;
// line 161
panda$core$Int64** $tmp929 = *(&local0);
panda$core$Int64 $tmp930 = (panda$core$Int64) {31};
panda$core$Int64 $tmp931 = (panda$core$Int64) {0};
panda$core$Int64* $tmp932 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp930, $tmp931);
panda$core$Int64 $tmp933 = (panda$core$Int64) {93};
int64_t $tmp934 = $tmp933.value;
$tmp929[$tmp934] = $tmp932;
// line 162
panda$core$Int64** $tmp935 = *(&local0);
panda$core$Int64 $tmp936 = (panda$core$Int64) {93};
int64_t $tmp937 = $tmp936.value;
panda$core$Int64* $tmp938 = $tmp935[$tmp937];
panda$core$Int64 $tmp939 = (panda$core$Int64) {15};
panda$core$Int64 $tmp940 = (panda$core$Int64) {1};
int64_t $tmp941 = $tmp940.value;
$tmp938[$tmp941] = $tmp939;
// line 163
panda$core$Int64** $tmp942 = *(&local0);
panda$core$Int64 $tmp943 = (panda$core$Int64) {93};
int64_t $tmp944 = $tmp943.value;
panda$core$Int64* $tmp945 = $tmp942[$tmp944];
panda$core$Int64 $tmp946 = (panda$core$Int64) {3};
panda$core$Int64 $tmp947 = (panda$core$Int64) {3};
int64_t $tmp948 = $tmp947.value;
$tmp945[$tmp948] = $tmp946;
// line 164
panda$core$Int64** $tmp949 = *(&local0);
panda$core$Int64** $tmp950 = *(&local0);
panda$core$Int64 $tmp951 = (panda$core$Int64) {0};
int64_t $tmp952 = $tmp951.value;
panda$core$Int64* $tmp953 = $tmp950[$tmp952];
panda$core$Int64 $tmp954 = (panda$core$Int64) {94};
int64_t $tmp955 = $tmp954.value;
$tmp949[$tmp955] = $tmp953;
// line 165
panda$core$Int64** $tmp956 = *(&local0);
panda$core$Int64** $tmp957 = *(&local0);
panda$core$Int64 $tmp958 = (panda$core$Int64) {0};
int64_t $tmp959 = $tmp958.value;
panda$core$Int64* $tmp960 = $tmp957[$tmp959];
panda$core$Int64 $tmp961 = (panda$core$Int64) {95};
int64_t $tmp962 = $tmp961.value;
$tmp956[$tmp962] = $tmp960;
// line 166
panda$core$Int64** $tmp963 = *(&local0);
panda$core$Int64** $tmp964 = *(&local0);
panda$core$Int64 $tmp965 = (panda$core$Int64) {0};
int64_t $tmp966 = $tmp965.value;
panda$core$Int64* $tmp967 = $tmp964[$tmp966];
panda$core$Int64 $tmp968 = (panda$core$Int64) {96};
int64_t $tmp969 = $tmp968.value;
$tmp963[$tmp969] = $tmp967;
// line 167
panda$core$Int64** $tmp970 = *(&local0);
panda$core$Int64 $tmp971 = (panda$core$Int64) {31};
panda$core$Int64 $tmp972 = (panda$core$Int64) {0};
panda$core$Int64* $tmp973 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp971, $tmp972);
panda$core$Int64 $tmp974 = (panda$core$Int64) {97};
int64_t $tmp975 = $tmp974.value;
$tmp970[$tmp975] = $tmp973;
// line 168
panda$core$Int64** $tmp976 = *(&local0);
panda$core$Int64 $tmp977 = (panda$core$Int64) {97};
int64_t $tmp978 = $tmp977.value;
panda$core$Int64* $tmp979 = $tmp976[$tmp978];
panda$core$Int64 $tmp980 = (panda$core$Int64) {3};
panda$core$Int64 $tmp981 = (panda$core$Int64) {3};
int64_t $tmp982 = $tmp981.value;
$tmp979[$tmp982] = $tmp980;
// line 169
panda$core$Int64** $tmp983 = *(&local0);
panda$core$Int64 $tmp984 = (panda$core$Int64) {97};
int64_t $tmp985 = $tmp984.value;
panda$core$Int64* $tmp986 = $tmp983[$tmp985];
panda$core$Int64 $tmp987 = (panda$core$Int64) {17};
panda$core$Int64 $tmp988 = (panda$core$Int64) {16};
int64_t $tmp989 = $tmp988.value;
$tmp986[$tmp989] = $tmp987;
// line 170
panda$core$Int64** $tmp990 = *(&local0);
panda$core$Int64 $tmp991 = (panda$core$Int64) {31};
panda$core$Int64 $tmp992 = (panda$core$Int64) {0};
panda$core$Int64* $tmp993 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp991, $tmp992);
panda$core$Int64 $tmp994 = (panda$core$Int64) {98};
int64_t $tmp995 = $tmp994.value;
$tmp990[$tmp995] = $tmp993;
// line 171
panda$core$Int64** $tmp996 = *(&local0);
panda$core$Int64 $tmp997 = (panda$core$Int64) {98};
int64_t $tmp998 = $tmp997.value;
panda$core$Int64* $tmp999 = $tmp996[$tmp998];
panda$core$Int64 $tmp1000 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1001 = (panda$core$Int64) {3};
int64_t $tmp1002 = $tmp1001.value;
$tmp999[$tmp1002] = $tmp1000;
// line 172
panda$core$Int64** $tmp1003 = *(&local0);
panda$core$Int64 $tmp1004 = (panda$core$Int64) {98};
int64_t $tmp1005 = $tmp1004.value;
panda$core$Int64* $tmp1006 = $tmp1003[$tmp1005];
panda$core$Int64 $tmp1007 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1008 = (panda$core$Int64) {5};
int64_t $tmp1009 = $tmp1008.value;
$tmp1006[$tmp1009] = $tmp1007;
// line 173
panda$core$Int64** $tmp1010 = *(&local0);
panda$core$Int64** $tmp1011 = *(&local0);
panda$core$Int64 $tmp1012 = (panda$core$Int64) {0};
int64_t $tmp1013 = $tmp1012.value;
panda$core$Int64* $tmp1014 = $tmp1011[$tmp1013];
panda$core$Int64 $tmp1015 = (panda$core$Int64) {99};
int64_t $tmp1016 = $tmp1015.value;
$tmp1010[$tmp1016] = $tmp1014;
// line 174
panda$core$Int64** $tmp1017 = *(&local0);
panda$core$Int64** $tmp1018 = *(&local0);
panda$core$Int64 $tmp1019 = (panda$core$Int64) {0};
int64_t $tmp1020 = $tmp1019.value;
panda$core$Int64* $tmp1021 = $tmp1018[$tmp1020];
panda$core$Int64 $tmp1022 = (panda$core$Int64) {100};
int64_t $tmp1023 = $tmp1022.value;
$tmp1017[$tmp1023] = $tmp1021;
// line 175
panda$core$Int64** $tmp1024 = *(&local0);
panda$core$Int64 $tmp1025 = (panda$core$Int64) {31};
panda$core$Int64 $tmp1026 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1027 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp1025, $tmp1026);
panda$core$Int64 $tmp1028 = (panda$core$Int64) {101};
int64_t $tmp1029 = $tmp1028.value;
$tmp1024[$tmp1029] = $tmp1027;
// line 176
panda$core$Int64** $tmp1030 = *(&local0);
panda$core$Int64 $tmp1031 = (panda$core$Int64) {101};
int64_t $tmp1032 = $tmp1031.value;
panda$core$Int64* $tmp1033 = $tmp1030[$tmp1032];
panda$core$Int64 $tmp1034 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1035 = (panda$core$Int64) {3};
int64_t $tmp1036 = $tmp1035.value;
$tmp1033[$tmp1036] = $tmp1034;
// line 177
panda$core$Int64** $tmp1037 = *(&local0);
panda$core$Int64 $tmp1038 = (panda$core$Int64) {101};
int64_t $tmp1039 = $tmp1038.value;
panda$core$Int64* $tmp1040 = $tmp1037[$tmp1039];
panda$core$Int64 $tmp1041 = (panda$core$Int64) {10};
panda$core$Int64 $tmp1042 = (panda$core$Int64) {9};
int64_t $tmp1043 = $tmp1042.value;
$tmp1040[$tmp1043] = $tmp1041;
// line 178
panda$core$Int64** $tmp1044 = *(&local0);
panda$core$Int64 $tmp1045 = (panda$core$Int64) {101};
int64_t $tmp1046 = $tmp1045.value;
panda$core$Int64* $tmp1047 = $tmp1044[$tmp1046];
panda$core$Int64 $tmp1048 = (panda$core$Int64) {20};
panda$core$Int64 $tmp1049 = (panda$core$Int64) {19};
int64_t $tmp1050 = $tmp1049.value;
$tmp1047[$tmp1050] = $tmp1048;
// line 179
panda$core$Int64** $tmp1051 = *(&local0);
panda$core$Int64 $tmp1052 = (panda$core$Int64) {101};
int64_t $tmp1053 = $tmp1052.value;
panda$core$Int64* $tmp1054 = $tmp1051[$tmp1053];
panda$core$Int64 $tmp1055 = (panda$core$Int64) {28};
panda$core$Int64 $tmp1056 = (panda$core$Int64) {27};
int64_t $tmp1057 = $tmp1056.value;
$tmp1054[$tmp1057] = $tmp1055;
// line 180
panda$core$Int64** $tmp1058 = *(&local0);
panda$core$Int64 $tmp1059 = (panda$core$Int64) {31};
panda$core$Int64 $tmp1060 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1061 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp1059, $tmp1060);
panda$core$Int64 $tmp1062 = (panda$core$Int64) {102};
int64_t $tmp1063 = $tmp1062.value;
$tmp1058[$tmp1063] = $tmp1061;
// line 181
panda$core$Int64** $tmp1064 = *(&local0);
panda$core$Int64 $tmp1065 = (panda$core$Int64) {102};
int64_t $tmp1066 = $tmp1065.value;
panda$core$Int64* $tmp1067 = $tmp1064[$tmp1066];
panda$core$Int64 $tmp1068 = (panda$core$Int64) {16};
panda$core$Int64 $tmp1069 = (panda$core$Int64) {1};
int64_t $tmp1070 = $tmp1069.value;
$tmp1067[$tmp1070] = $tmp1068;
// line 182
panda$core$Int64** $tmp1071 = *(&local0);
panda$core$Int64 $tmp1072 = (panda$core$Int64) {102};
int64_t $tmp1073 = $tmp1072.value;
panda$core$Int64* $tmp1074 = $tmp1071[$tmp1073];
panda$core$Int64 $tmp1075 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1076 = (panda$core$Int64) {3};
int64_t $tmp1077 = $tmp1076.value;
$tmp1074[$tmp1077] = $tmp1075;
// line 183
panda$core$Int64** $tmp1078 = *(&local0);
panda$core$Int64 $tmp1079 = (panda$core$Int64) {102};
int64_t $tmp1080 = $tmp1079.value;
panda$core$Int64* $tmp1081 = $tmp1078[$tmp1080];
panda$core$Int64 $tmp1082 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1083 = (panda$core$Int64) {5};
int64_t $tmp1084 = $tmp1083.value;
$tmp1081[$tmp1084] = $tmp1082;
// line 184
panda$core$Int64** $tmp1085 = *(&local0);
panda$core$Int64** $tmp1086 = *(&local0);
panda$core$Int64 $tmp1087 = (panda$core$Int64) {0};
int64_t $tmp1088 = $tmp1087.value;
panda$core$Int64* $tmp1089 = $tmp1086[$tmp1088];
panda$core$Int64 $tmp1090 = (panda$core$Int64) {103};
int64_t $tmp1091 = $tmp1090.value;
$tmp1085[$tmp1091] = $tmp1089;
// line 185
panda$core$Int64** $tmp1092 = *(&local0);
panda$core$Int64** $tmp1093 = *(&local0);
panda$core$Int64 $tmp1094 = (panda$core$Int64) {0};
int64_t $tmp1095 = $tmp1094.value;
panda$core$Int64* $tmp1096 = $tmp1093[$tmp1095];
panda$core$Int64 $tmp1097 = (panda$core$Int64) {104};
int64_t $tmp1098 = $tmp1097.value;
$tmp1092[$tmp1098] = $tmp1096;
// line 186
panda$core$Int64** $tmp1099 = *(&local0);
panda$core$Int64** $tmp1100 = *(&local0);
panda$core$Int64 $tmp1101 = (panda$core$Int64) {0};
int64_t $tmp1102 = $tmp1101.value;
panda$core$Int64* $tmp1103 = $tmp1100[$tmp1102];
panda$core$Int64 $tmp1104 = (panda$core$Int64) {105};
int64_t $tmp1105 = $tmp1104.value;
$tmp1099[$tmp1105] = $tmp1103;
// line 187
panda$core$Int64** $tmp1106 = *(&local0);
panda$core$Int64** $tmp1107 = *(&local0);
panda$core$Int64 $tmp1108 = (panda$core$Int64) {0};
int64_t $tmp1109 = $tmp1108.value;
panda$core$Int64* $tmp1110 = $tmp1107[$tmp1109];
panda$core$Int64 $tmp1111 = (panda$core$Int64) {106};
int64_t $tmp1112 = $tmp1111.value;
$tmp1106[$tmp1112] = $tmp1110;
// line 188
panda$core$Int64** $tmp1113 = *(&local0);
panda$core$Int64** $tmp1114 = *(&local0);
panda$core$Int64 $tmp1115 = (panda$core$Int64) {0};
int64_t $tmp1116 = $tmp1115.value;
panda$core$Int64* $tmp1117 = $tmp1114[$tmp1116];
panda$core$Int64 $tmp1118 = (panda$core$Int64) {107};
int64_t $tmp1119 = $tmp1118.value;
$tmp1113[$tmp1119] = $tmp1117;
// line 189
panda$core$Int64** $tmp1120 = *(&local0);
panda$core$Int64 $tmp1121 = (panda$core$Int64) {31};
panda$core$Int64 $tmp1122 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1123 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp1121, $tmp1122);
panda$core$Int64 $tmp1124 = (panda$core$Int64) {108};
int64_t $tmp1125 = $tmp1124.value;
$tmp1120[$tmp1125] = $tmp1123;
// line 190
panda$core$Int64** $tmp1126 = *(&local0);
panda$core$Int64 $tmp1127 = (panda$core$Int64) {108};
int64_t $tmp1128 = $tmp1127.value;
panda$core$Int64* $tmp1129 = $tmp1126[$tmp1128];
panda$core$Int64 $tmp1130 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1131 = (panda$core$Int64) {3};
int64_t $tmp1132 = $tmp1131.value;
$tmp1129[$tmp1132] = $tmp1130;
// line 191
panda$core$Int64** $tmp1133 = *(&local0);
panda$core$Int64 $tmp1134 = (panda$core$Int64) {108};
int64_t $tmp1135 = $tmp1134.value;
panda$core$Int64* $tmp1136 = $tmp1133[$tmp1135];
panda$core$Int64 $tmp1137 = (panda$core$Int64) {18};
panda$core$Int64 $tmp1138 = (panda$core$Int64) {17};
int64_t $tmp1139 = $tmp1138.value;
$tmp1136[$tmp1139] = $tmp1137;
// line 192
panda$core$Int64** $tmp1140 = *(&local0);
panda$core$Int64 $tmp1141 = (panda$core$Int64) {108};
int64_t $tmp1142 = $tmp1141.value;
panda$core$Int64* $tmp1143 = $tmp1140[$tmp1142];
panda$core$Int64 $tmp1144 = (panda$core$Int64) {23};
panda$core$Int64 $tmp1145 = (panda$core$Int64) {22};
int64_t $tmp1146 = $tmp1145.value;
$tmp1143[$tmp1146] = $tmp1144;
// line 193
panda$core$Int64** $tmp1147 = *(&local0);
panda$core$Int64 $tmp1148 = (panda$core$Int64) {108};
int64_t $tmp1149 = $tmp1148.value;
panda$core$Int64* $tmp1150 = $tmp1147[$tmp1149];
panda$core$Int64 $tmp1151 = (panda$core$Int64) {24};
panda$core$Int64 $tmp1152 = (panda$core$Int64) {23};
int64_t $tmp1153 = $tmp1152.value;
$tmp1150[$tmp1153] = $tmp1151;
// line 194
panda$core$Int64** $tmp1154 = *(&local0);
panda$core$Int64** $tmp1155 = *(&local0);
panda$core$Int64 $tmp1156 = (panda$core$Int64) {0};
int64_t $tmp1157 = $tmp1156.value;
panda$core$Int64* $tmp1158 = $tmp1155[$tmp1157];
panda$core$Int64 $tmp1159 = (panda$core$Int64) {109};
int64_t $tmp1160 = $tmp1159.value;
$tmp1154[$tmp1160] = $tmp1158;
// line 195
panda$core$Int64** $tmp1161 = *(&local0);
panda$core$Int64 $tmp1162 = (panda$core$Int64) {31};
panda$core$Int64 $tmp1163 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1164 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp1162, $tmp1163);
panda$core$Int64 $tmp1165 = (panda$core$Int64) {110};
int64_t $tmp1166 = $tmp1165.value;
$tmp1161[$tmp1166] = $tmp1164;
// line 196
panda$core$Int64** $tmp1167 = *(&local0);
panda$core$Int64 $tmp1168 = (panda$core$Int64) {110};
int64_t $tmp1169 = $tmp1168.value;
panda$core$Int64* $tmp1170 = $tmp1167[$tmp1169];
panda$core$Int64 $tmp1171 = (panda$core$Int64) {21};
panda$core$Int64 $tmp1172 = (panda$core$Int64) {1};
int64_t $tmp1173 = $tmp1172.value;
$tmp1170[$tmp1173] = $tmp1171;
// line 197
panda$core$Int64** $tmp1174 = *(&local0);
panda$core$Int64 $tmp1175 = (panda$core$Int64) {110};
int64_t $tmp1176 = $tmp1175.value;
panda$core$Int64* $tmp1177 = $tmp1174[$tmp1176];
panda$core$Int64 $tmp1178 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1179 = (panda$core$Int64) {3};
int64_t $tmp1180 = $tmp1179.value;
$tmp1177[$tmp1180] = $tmp1178;
// line 198
panda$core$Int64** $tmp1181 = *(&local0);
panda$core$Int64 $tmp1182 = (panda$core$Int64) {110};
int64_t $tmp1183 = $tmp1182.value;
panda$core$Int64* $tmp1184 = $tmp1181[$tmp1183];
panda$core$Int64 $tmp1185 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1186 = (panda$core$Int64) {5};
int64_t $tmp1187 = $tmp1186.value;
$tmp1184[$tmp1187] = $tmp1185;
// line 199
panda$core$Int64** $tmp1188 = *(&local0);
panda$core$Int64** $tmp1189 = *(&local0);
panda$core$Int64 $tmp1190 = (panda$core$Int64) {0};
int64_t $tmp1191 = $tmp1190.value;
panda$core$Int64* $tmp1192 = $tmp1189[$tmp1191];
panda$core$Int64 $tmp1193 = (panda$core$Int64) {111};
int64_t $tmp1194 = $tmp1193.value;
$tmp1188[$tmp1194] = $tmp1192;
// line 200
panda$core$Int64** $tmp1195 = *(&local0);
panda$core$Int64** $tmp1196 = *(&local0);
panda$core$Int64 $tmp1197 = (panda$core$Int64) {0};
int64_t $tmp1198 = $tmp1197.value;
panda$core$Int64* $tmp1199 = $tmp1196[$tmp1198];
panda$core$Int64 $tmp1200 = (panda$core$Int64) {112};
int64_t $tmp1201 = $tmp1200.value;
$tmp1195[$tmp1201] = $tmp1199;
// line 201
panda$core$Int64** $tmp1202 = *(&local0);
panda$core$Int64** $tmp1203 = *(&local0);
panda$core$Int64 $tmp1204 = (panda$core$Int64) {0};
int64_t $tmp1205 = $tmp1204.value;
panda$core$Int64* $tmp1206 = $tmp1203[$tmp1205];
panda$core$Int64 $tmp1207 = (panda$core$Int64) {113};
int64_t $tmp1208 = $tmp1207.value;
$tmp1202[$tmp1208] = $tmp1206;
// line 202
panda$core$Int64** $tmp1209 = *(&local0);
panda$core$Int64 $tmp1210 = (panda$core$Int64) {31};
panda$core$Int64 $tmp1211 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1212 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp1210, $tmp1211);
panda$core$Int64 $tmp1213 = (panda$core$Int64) {114};
int64_t $tmp1214 = $tmp1213.value;
$tmp1209[$tmp1214] = $tmp1212;
// line 203
panda$core$Int64** $tmp1215 = *(&local0);
panda$core$Int64 $tmp1216 = (panda$core$Int64) {114};
int64_t $tmp1217 = $tmp1216.value;
panda$core$Int64* $tmp1218 = $tmp1215[$tmp1217];
panda$core$Int64 $tmp1219 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1220 = (panda$core$Int64) {3};
int64_t $tmp1221 = $tmp1220.value;
$tmp1218[$tmp1221] = $tmp1219;
// line 204
panda$core$Int64** $tmp1222 = *(&local0);
panda$core$Int64 $tmp1223 = (panda$core$Int64) {114};
int64_t $tmp1224 = $tmp1223.value;
panda$core$Int64* $tmp1225 = $tmp1222[$tmp1224];
panda$core$Int64 $tmp1226 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1227 = (panda$core$Int64) {5};
int64_t $tmp1228 = $tmp1227.value;
$tmp1225[$tmp1228] = $tmp1226;
// line 205
panda$core$Int64** $tmp1229 = *(&local0);
panda$core$Int64 $tmp1230 = (panda$core$Int64) {114};
int64_t $tmp1231 = $tmp1230.value;
panda$core$Int64* $tmp1232 = $tmp1229[$tmp1231];
panda$core$Int64 $tmp1233 = (panda$core$Int64) {26};
panda$core$Int64 $tmp1234 = (panda$core$Int64) {25};
int64_t $tmp1235 = $tmp1234.value;
$tmp1232[$tmp1235] = $tmp1233;
// line 206
panda$core$Int64** $tmp1236 = *(&local0);
panda$core$Int64 $tmp1237 = (panda$core$Int64) {31};
panda$core$Int64 $tmp1238 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1239 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp1237, $tmp1238);
panda$core$Int64 $tmp1240 = (panda$core$Int64) {115};
int64_t $tmp1241 = $tmp1240.value;
$tmp1236[$tmp1241] = $tmp1239;
// line 207
panda$core$Int64** $tmp1242 = *(&local0);
panda$core$Int64 $tmp1243 = (panda$core$Int64) {115};
int64_t $tmp1244 = $tmp1243.value;
panda$core$Int64* $tmp1245 = $tmp1242[$tmp1244];
panda$core$Int64 $tmp1246 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1247 = (panda$core$Int64) {3};
int64_t $tmp1248 = $tmp1247.value;
$tmp1245[$tmp1248] = $tmp1246;
// line 208
panda$core$Int64** $tmp1249 = *(&local0);
panda$core$Int64 $tmp1250 = (panda$core$Int64) {115};
int64_t $tmp1251 = $tmp1250.value;
panda$core$Int64* $tmp1252 = $tmp1249[$tmp1251];
panda$core$Int64 $tmp1253 = (panda$core$Int64) {19};
panda$core$Int64 $tmp1254 = (panda$core$Int64) {18};
int64_t $tmp1255 = $tmp1254.value;
$tmp1252[$tmp1255] = $tmp1253;
// line 209
panda$core$Int64** $tmp1256 = *(&local0);
panda$core$Int64 $tmp1257 = (panda$core$Int64) {31};
panda$core$Int64 $tmp1258 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1259 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp1257, $tmp1258);
panda$core$Int64 $tmp1260 = (panda$core$Int64) {116};
int64_t $tmp1261 = $tmp1260.value;
$tmp1256[$tmp1261] = $tmp1259;
// line 210
panda$core$Int64** $tmp1262 = *(&local0);
panda$core$Int64 $tmp1263 = (panda$core$Int64) {116};
int64_t $tmp1264 = $tmp1263.value;
panda$core$Int64* $tmp1265 = $tmp1262[$tmp1264];
panda$core$Int64 $tmp1266 = (panda$core$Int64) {25};
panda$core$Int64 $tmp1267 = (panda$core$Int64) {1};
int64_t $tmp1268 = $tmp1267.value;
$tmp1265[$tmp1268] = $tmp1266;
// line 211
panda$core$Int64** $tmp1269 = *(&local0);
panda$core$Int64 $tmp1270 = (panda$core$Int64) {116};
int64_t $tmp1271 = $tmp1270.value;
panda$core$Int64* $tmp1272 = $tmp1269[$tmp1271];
panda$core$Int64 $tmp1273 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1274 = (panda$core$Int64) {3};
int64_t $tmp1275 = $tmp1274.value;
$tmp1272[$tmp1275] = $tmp1273;
// line 212
panda$core$Int64** $tmp1276 = *(&local0);
panda$core$Int64 $tmp1277 = (panda$core$Int64) {116};
int64_t $tmp1278 = $tmp1277.value;
panda$core$Int64* $tmp1279 = $tmp1276[$tmp1278];
panda$core$Int64 $tmp1280 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1281 = (panda$core$Int64) {5};
int64_t $tmp1282 = $tmp1281.value;
$tmp1279[$tmp1282] = $tmp1280;
// line 213
panda$core$Int64** $tmp1283 = *(&local0);
panda$core$Int64 $tmp1284 = (panda$core$Int64) {31};
panda$core$Int64 $tmp1285 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1286 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp1284, $tmp1285);
panda$core$Int64 $tmp1287 = (panda$core$Int64) {117};
int64_t $tmp1288 = $tmp1287.value;
$tmp1283[$tmp1288] = $tmp1286;
// line 214
panda$core$Int64** $tmp1289 = *(&local0);
panda$core$Int64 $tmp1290 = (panda$core$Int64) {117};
int64_t $tmp1291 = $tmp1290.value;
panda$core$Int64* $tmp1292 = $tmp1289[$tmp1291];
panda$core$Int64 $tmp1293 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1294 = (panda$core$Int64) {3};
int64_t $tmp1295 = $tmp1294.value;
$tmp1292[$tmp1295] = $tmp1293;
// line 215
panda$core$Int64** $tmp1296 = *(&local0);
panda$core$Int64 $tmp1297 = (panda$core$Int64) {117};
int64_t $tmp1298 = $tmp1297.value;
panda$core$Int64* $tmp1299 = $tmp1296[$tmp1298];
panda$core$Int64 $tmp1300 = (panda$core$Int64) {22};
panda$core$Int64 $tmp1301 = (panda$core$Int64) {21};
int64_t $tmp1302 = $tmp1301.value;
$tmp1299[$tmp1302] = $tmp1300;
// line 216
panda$core$Int64** $tmp1303 = *(&local0);
panda$core$Int64 $tmp1304 = (panda$core$Int64) {117};
int64_t $tmp1305 = $tmp1304.value;
panda$core$Int64* $tmp1306 = $tmp1303[$tmp1305];
panda$core$Int64 $tmp1307 = (panda$core$Int64) {27};
panda$core$Int64 $tmp1308 = (panda$core$Int64) {26};
int64_t $tmp1309 = $tmp1308.value;
$tmp1306[$tmp1309] = $tmp1307;
// line 217
panda$core$Int64** $tmp1310 = *(&local0);
panda$core$Int64** $tmp1311 = *(&local0);
panda$core$Int64 $tmp1312 = (panda$core$Int64) {0};
int64_t $tmp1313 = $tmp1312.value;
panda$core$Int64* $tmp1314 = $tmp1311[$tmp1313];
panda$core$Int64 $tmp1315 = (panda$core$Int64) {118};
int64_t $tmp1316 = $tmp1315.value;
$tmp1310[$tmp1316] = $tmp1314;
// line 218
panda$core$Int64** $tmp1317 = *(&local0);
panda$core$Int64** $tmp1318 = *(&local0);
panda$core$Int64 $tmp1319 = (panda$core$Int64) {0};
int64_t $tmp1320 = $tmp1319.value;
panda$core$Int64* $tmp1321 = $tmp1318[$tmp1320];
panda$core$Int64 $tmp1322 = (panda$core$Int64) {119};
int64_t $tmp1323 = $tmp1322.value;
$tmp1317[$tmp1323] = $tmp1321;
// line 219
panda$core$Int64** $tmp1324 = *(&local0);
panda$core$Int64** $tmp1325 = *(&local0);
panda$core$Int64 $tmp1326 = (panda$core$Int64) {0};
int64_t $tmp1327 = $tmp1326.value;
panda$core$Int64* $tmp1328 = $tmp1325[$tmp1327];
panda$core$Int64 $tmp1329 = (panda$core$Int64) {120};
int64_t $tmp1330 = $tmp1329.value;
$tmp1324[$tmp1330] = $tmp1328;
// line 220
panda$core$Int64** $tmp1331 = *(&local0);
panda$core$Int64** $tmp1332 = *(&local0);
panda$core$Int64 $tmp1333 = (panda$core$Int64) {0};
int64_t $tmp1334 = $tmp1333.value;
panda$core$Int64* $tmp1335 = $tmp1332[$tmp1334];
panda$core$Int64 $tmp1336 = (panda$core$Int64) {121};
int64_t $tmp1337 = $tmp1336.value;
$tmp1331[$tmp1337] = $tmp1335;
// line 221
panda$core$Int64** $tmp1338 = *(&local0);
panda$core$Int64** $tmp1339 = *(&local0);
panda$core$Int64 $tmp1340 = (panda$core$Int64) {0};
int64_t $tmp1341 = $tmp1340.value;
panda$core$Int64* $tmp1342 = $tmp1339[$tmp1341];
panda$core$Int64 $tmp1343 = (panda$core$Int64) {122};
int64_t $tmp1344 = $tmp1343.value;
$tmp1338[$tmp1344] = $tmp1342;
// line 222
panda$core$Int64** $tmp1345 = *(&local0);
panda$core$Int64 $tmp1346 = (panda$core$Int64) {31};
panda$core$Int64 $tmp1347 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1348 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp1346, $tmp1347);
panda$core$Int64 $tmp1349 = (panda$core$Int64) {123};
int64_t $tmp1350 = $tmp1349.value;
$tmp1345[$tmp1350] = $tmp1348;
// line 223
panda$core$Int64** $tmp1351 = *(&local0);
panda$core$Int64 $tmp1352 = (panda$core$Int64) {123};
int64_t $tmp1353 = $tmp1352.value;
panda$core$Int64* $tmp1354 = $tmp1351[$tmp1353];
panda$core$Int64 $tmp1355 = (panda$core$Int64) {29};
panda$core$Int64 $tmp1356 = (panda$core$Int64) {1};
int64_t $tmp1357 = $tmp1356.value;
$tmp1354[$tmp1357] = $tmp1355;
// line 224
panda$core$Int64** $tmp1358 = *(&local0);
panda$core$Int64 $tmp1359 = (panda$core$Int64) {123};
int64_t $tmp1360 = $tmp1359.value;
panda$core$Int64* $tmp1361 = $tmp1358[$tmp1360];
panda$core$Int64 $tmp1362 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1363 = (panda$core$Int64) {3};
int64_t $tmp1364 = $tmp1363.value;
$tmp1361[$tmp1364] = $tmp1362;
// line 225
panda$core$Int64** $tmp1365 = *(&local0);
panda$core$Int64** $tmp1366 = *(&local0);
panda$core$Int64 $tmp1367 = (panda$core$Int64) {0};
int64_t $tmp1368 = $tmp1367.value;
panda$core$Int64* $tmp1369 = $tmp1366[$tmp1368];
panda$core$Int64 $tmp1370 = (panda$core$Int64) {124};
int64_t $tmp1371 = $tmp1370.value;
$tmp1365[$tmp1371] = $tmp1369;
// line 226
panda$core$Int64** $tmp1372 = *(&local0);
panda$core$Int64 $tmp1373 = (panda$core$Int64) {31};
panda$core$Int64 $tmp1374 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1375 = org$pandalanguage$json$Lexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp1373, $tmp1374);
panda$core$Int64 $tmp1376 = (panda$core$Int64) {125};
int64_t $tmp1377 = $tmp1376.value;
$tmp1372[$tmp1377] = $tmp1375;
// line 227
panda$core$Int64** $tmp1378 = *(&local0);
panda$core$Int64 $tmp1379 = (panda$core$Int64) {125};
int64_t $tmp1380 = $tmp1379.value;
panda$core$Int64* $tmp1381 = $tmp1378[$tmp1380];
panda$core$Int64 $tmp1382 = (panda$core$Int64) {30};
panda$core$Int64 $tmp1383 = (panda$core$Int64) {1};
int64_t $tmp1384 = $tmp1383.value;
$tmp1381[$tmp1384] = $tmp1382;
// line 228
panda$core$Int64** $tmp1385 = *(&local0);
panda$core$Int64 $tmp1386 = (panda$core$Int64) {125};
int64_t $tmp1387 = $tmp1386.value;
panda$core$Int64* $tmp1388 = $tmp1385[$tmp1387];
panda$core$Int64 $tmp1389 = (panda$core$Int64) {3};
panda$core$Int64 $tmp1390 = (panda$core$Int64) {3};
int64_t $tmp1391 = $tmp1390.value;
$tmp1388[$tmp1391] = $tmp1389;
// line 229
panda$core$Int64** $tmp1392 = *(&local0);
panda$core$Int64** $tmp1393 = *(&local0);
panda$core$Int64 $tmp1394 = (panda$core$Int64) {0};
int64_t $tmp1395 = $tmp1394.value;
panda$core$Int64* $tmp1396 = $tmp1393[$tmp1395];
panda$core$Int64 $tmp1397 = (panda$core$Int64) {126};
int64_t $tmp1398 = $tmp1397.value;
$tmp1392[$tmp1398] = $tmp1396;
// line 230
panda$core$Int64** $tmp1399 = *(&local0);
panda$core$Int64** $tmp1400 = *(&local0);
panda$core$Int64 $tmp1401 = (panda$core$Int64) {0};
int64_t $tmp1402 = $tmp1401.value;
panda$core$Int64* $tmp1403 = $tmp1400[$tmp1402];
panda$core$Int64 $tmp1404 = (panda$core$Int64) {127};
int64_t $tmp1405 = $tmp1404.value;
$tmp1399[$tmp1405] = $tmp1403;
// line 231
panda$core$Int64** $tmp1406 = *(&local0);
panda$core$Int64** $tmp1407 = *(&local0);
panda$core$Int64 $tmp1408 = (panda$core$Int64) {0};
int64_t $tmp1409 = $tmp1408.value;
panda$core$Int64* $tmp1410 = $tmp1407[$tmp1409];
panda$core$Int64 $tmp1411 = (panda$core$Int64) {128};
int64_t $tmp1412 = $tmp1411.value;
$tmp1406[$tmp1412] = $tmp1410;
// line 232
panda$core$Int64** $tmp1413 = *(&local0);
panda$core$Int64** $tmp1414 = *(&local0);
panda$core$Int64 $tmp1415 = (panda$core$Int64) {0};
int64_t $tmp1416 = $tmp1415.value;
panda$core$Int64* $tmp1417 = $tmp1414[$tmp1416];
panda$core$Int64 $tmp1418 = (panda$core$Int64) {129};
int64_t $tmp1419 = $tmp1418.value;
$tmp1413[$tmp1419] = $tmp1417;
// line 233
panda$core$Int64** $tmp1420 = *(&local0);
panda$core$Int64** $tmp1421 = *(&local0);
panda$core$Int64 $tmp1422 = (panda$core$Int64) {0};
int64_t $tmp1423 = $tmp1422.value;
panda$core$Int64* $tmp1424 = $tmp1421[$tmp1423];
panda$core$Int64 $tmp1425 = (panda$core$Int64) {130};
int64_t $tmp1426 = $tmp1425.value;
$tmp1420[$tmp1426] = $tmp1424;
// line 234
panda$core$Int64** $tmp1427 = *(&local0);
panda$core$Int64** $tmp1428 = *(&local0);
panda$core$Int64 $tmp1429 = (panda$core$Int64) {0};
int64_t $tmp1430 = $tmp1429.value;
panda$core$Int64* $tmp1431 = $tmp1428[$tmp1430];
panda$core$Int64 $tmp1432 = (panda$core$Int64) {131};
int64_t $tmp1433 = $tmp1432.value;
$tmp1427[$tmp1433] = $tmp1431;
// line 235
panda$core$Int64** $tmp1434 = *(&local0);
panda$core$Int64** $tmp1435 = *(&local0);
panda$core$Int64 $tmp1436 = (panda$core$Int64) {0};
int64_t $tmp1437 = $tmp1436.value;
panda$core$Int64* $tmp1438 = $tmp1435[$tmp1437];
panda$core$Int64 $tmp1439 = (panda$core$Int64) {132};
int64_t $tmp1440 = $tmp1439.value;
$tmp1434[$tmp1440] = $tmp1438;
// line 236
panda$core$Int64** $tmp1441 = *(&local0);
panda$core$Int64** $tmp1442 = *(&local0);
panda$core$Int64 $tmp1443 = (panda$core$Int64) {0};
int64_t $tmp1444 = $tmp1443.value;
panda$core$Int64* $tmp1445 = $tmp1442[$tmp1444];
panda$core$Int64 $tmp1446 = (panda$core$Int64) {133};
int64_t $tmp1447 = $tmp1446.value;
$tmp1441[$tmp1447] = $tmp1445;
// line 237
panda$core$Int64** $tmp1448 = *(&local0);
panda$core$Int64** $tmp1449 = *(&local0);
panda$core$Int64 $tmp1450 = (panda$core$Int64) {0};
int64_t $tmp1451 = $tmp1450.value;
panda$core$Int64* $tmp1452 = $tmp1449[$tmp1451];
panda$core$Int64 $tmp1453 = (panda$core$Int64) {134};
int64_t $tmp1454 = $tmp1453.value;
$tmp1448[$tmp1454] = $tmp1452;
// line 238
panda$core$Int64** $tmp1455 = *(&local0);
panda$core$Int64** $tmp1456 = *(&local0);
panda$core$Int64 $tmp1457 = (panda$core$Int64) {0};
int64_t $tmp1458 = $tmp1457.value;
panda$core$Int64* $tmp1459 = $tmp1456[$tmp1458];
panda$core$Int64 $tmp1460 = (panda$core$Int64) {135};
int64_t $tmp1461 = $tmp1460.value;
$tmp1455[$tmp1461] = $tmp1459;
// line 239
panda$core$Int64** $tmp1462 = *(&local0);
panda$core$Int64** $tmp1463 = *(&local0);
panda$core$Int64 $tmp1464 = (panda$core$Int64) {0};
int64_t $tmp1465 = $tmp1464.value;
panda$core$Int64* $tmp1466 = $tmp1463[$tmp1465];
panda$core$Int64 $tmp1467 = (panda$core$Int64) {136};
int64_t $tmp1468 = $tmp1467.value;
$tmp1462[$tmp1468] = $tmp1466;
// line 240
panda$core$Int64** $tmp1469 = *(&local0);
panda$core$Int64** $tmp1470 = *(&local0);
panda$core$Int64 $tmp1471 = (panda$core$Int64) {0};
int64_t $tmp1472 = $tmp1471.value;
panda$core$Int64* $tmp1473 = $tmp1470[$tmp1472];
panda$core$Int64 $tmp1474 = (panda$core$Int64) {137};
int64_t $tmp1475 = $tmp1474.value;
$tmp1469[$tmp1475] = $tmp1473;
// line 241
panda$core$Int64** $tmp1476 = *(&local0);
panda$core$Int64** $tmp1477 = *(&local0);
panda$core$Int64 $tmp1478 = (panda$core$Int64) {0};
int64_t $tmp1479 = $tmp1478.value;
panda$core$Int64* $tmp1480 = $tmp1477[$tmp1479];
panda$core$Int64 $tmp1481 = (panda$core$Int64) {138};
int64_t $tmp1482 = $tmp1481.value;
$tmp1476[$tmp1482] = $tmp1480;
// line 242
panda$core$Int64** $tmp1483 = *(&local0);
panda$core$Int64** $tmp1484 = *(&local0);
panda$core$Int64 $tmp1485 = (panda$core$Int64) {0};
int64_t $tmp1486 = $tmp1485.value;
panda$core$Int64* $tmp1487 = $tmp1484[$tmp1486];
panda$core$Int64 $tmp1488 = (panda$core$Int64) {139};
int64_t $tmp1489 = $tmp1488.value;
$tmp1483[$tmp1489] = $tmp1487;
// line 243
panda$core$Int64** $tmp1490 = *(&local0);
panda$core$Int64** $tmp1491 = *(&local0);
panda$core$Int64 $tmp1492 = (panda$core$Int64) {0};
int64_t $tmp1493 = $tmp1492.value;
panda$core$Int64* $tmp1494 = $tmp1491[$tmp1493];
panda$core$Int64 $tmp1495 = (panda$core$Int64) {140};
int64_t $tmp1496 = $tmp1495.value;
$tmp1490[$tmp1496] = $tmp1494;
// line 244
panda$core$Int64** $tmp1497 = *(&local0);
panda$core$Int64** $tmp1498 = *(&local0);
panda$core$Int64 $tmp1499 = (panda$core$Int64) {0};
int64_t $tmp1500 = $tmp1499.value;
panda$core$Int64* $tmp1501 = $tmp1498[$tmp1500];
panda$core$Int64 $tmp1502 = (panda$core$Int64) {141};
int64_t $tmp1503 = $tmp1502.value;
$tmp1497[$tmp1503] = $tmp1501;
// line 245
panda$core$Int64** $tmp1504 = *(&local0);
panda$core$Int64** $tmp1505 = *(&local0);
panda$core$Int64 $tmp1506 = (panda$core$Int64) {0};
int64_t $tmp1507 = $tmp1506.value;
panda$core$Int64* $tmp1508 = $tmp1505[$tmp1507];
panda$core$Int64 $tmp1509 = (panda$core$Int64) {142};
int64_t $tmp1510 = $tmp1509.value;
$tmp1504[$tmp1510] = $tmp1508;
// line 246
panda$core$Int64** $tmp1511 = *(&local0);
panda$core$Int64** $tmp1512 = *(&local0);
panda$core$Int64 $tmp1513 = (panda$core$Int64) {0};
int64_t $tmp1514 = $tmp1513.value;
panda$core$Int64* $tmp1515 = $tmp1512[$tmp1514];
panda$core$Int64 $tmp1516 = (panda$core$Int64) {143};
int64_t $tmp1517 = $tmp1516.value;
$tmp1511[$tmp1517] = $tmp1515;
// line 247
panda$core$Int64** $tmp1518 = *(&local0);
panda$core$Int64** $tmp1519 = *(&local0);
panda$core$Int64 $tmp1520 = (panda$core$Int64) {0};
int64_t $tmp1521 = $tmp1520.value;
panda$core$Int64* $tmp1522 = $tmp1519[$tmp1521];
panda$core$Int64 $tmp1523 = (panda$core$Int64) {144};
int64_t $tmp1524 = $tmp1523.value;
$tmp1518[$tmp1524] = $tmp1522;
// line 248
panda$core$Int64** $tmp1525 = *(&local0);
panda$core$Int64** $tmp1526 = *(&local0);
panda$core$Int64 $tmp1527 = (panda$core$Int64) {0};
int64_t $tmp1528 = $tmp1527.value;
panda$core$Int64* $tmp1529 = $tmp1526[$tmp1528];
panda$core$Int64 $tmp1530 = (panda$core$Int64) {145};
int64_t $tmp1531 = $tmp1530.value;
$tmp1525[$tmp1531] = $tmp1529;
// line 249
panda$core$Int64** $tmp1532 = *(&local0);
panda$core$Int64** $tmp1533 = *(&local0);
panda$core$Int64 $tmp1534 = (panda$core$Int64) {0};
int64_t $tmp1535 = $tmp1534.value;
panda$core$Int64* $tmp1536 = $tmp1533[$tmp1535];
panda$core$Int64 $tmp1537 = (panda$core$Int64) {146};
int64_t $tmp1538 = $tmp1537.value;
$tmp1532[$tmp1538] = $tmp1536;
// line 250
panda$core$Int64** $tmp1539 = *(&local0);
panda$core$Int64** $tmp1540 = *(&local0);
panda$core$Int64 $tmp1541 = (panda$core$Int64) {0};
int64_t $tmp1542 = $tmp1541.value;
panda$core$Int64* $tmp1543 = $tmp1540[$tmp1542];
panda$core$Int64 $tmp1544 = (panda$core$Int64) {147};
int64_t $tmp1545 = $tmp1544.value;
$tmp1539[$tmp1545] = $tmp1543;
// line 251
panda$core$Int64** $tmp1546 = *(&local0);
panda$core$Int64** $tmp1547 = *(&local0);
panda$core$Int64 $tmp1548 = (panda$core$Int64) {0};
int64_t $tmp1549 = $tmp1548.value;
panda$core$Int64* $tmp1550 = $tmp1547[$tmp1549];
panda$core$Int64 $tmp1551 = (panda$core$Int64) {148};
int64_t $tmp1552 = $tmp1551.value;
$tmp1546[$tmp1552] = $tmp1550;
// line 252
panda$core$Int64** $tmp1553 = *(&local0);
panda$core$Int64** $tmp1554 = *(&local0);
panda$core$Int64 $tmp1555 = (panda$core$Int64) {0};
int64_t $tmp1556 = $tmp1555.value;
panda$core$Int64* $tmp1557 = $tmp1554[$tmp1556];
panda$core$Int64 $tmp1558 = (panda$core$Int64) {149};
int64_t $tmp1559 = $tmp1558.value;
$tmp1553[$tmp1559] = $tmp1557;
// line 253
panda$core$Int64** $tmp1560 = *(&local0);
panda$core$Int64** $tmp1561 = *(&local0);
panda$core$Int64 $tmp1562 = (panda$core$Int64) {0};
int64_t $tmp1563 = $tmp1562.value;
panda$core$Int64* $tmp1564 = $tmp1561[$tmp1563];
panda$core$Int64 $tmp1565 = (panda$core$Int64) {150};
int64_t $tmp1566 = $tmp1565.value;
$tmp1560[$tmp1566] = $tmp1564;
// line 254
panda$core$Int64** $tmp1567 = *(&local0);
panda$core$Int64** $tmp1568 = *(&local0);
panda$core$Int64 $tmp1569 = (panda$core$Int64) {0};
int64_t $tmp1570 = $tmp1569.value;
panda$core$Int64* $tmp1571 = $tmp1568[$tmp1570];
panda$core$Int64 $tmp1572 = (panda$core$Int64) {151};
int64_t $tmp1573 = $tmp1572.value;
$tmp1567[$tmp1573] = $tmp1571;
// line 255
panda$core$Int64** $tmp1574 = *(&local0);
panda$core$Int64** $tmp1575 = *(&local0);
panda$core$Int64 $tmp1576 = (panda$core$Int64) {0};
int64_t $tmp1577 = $tmp1576.value;
panda$core$Int64* $tmp1578 = $tmp1575[$tmp1577];
panda$core$Int64 $tmp1579 = (panda$core$Int64) {152};
int64_t $tmp1580 = $tmp1579.value;
$tmp1574[$tmp1580] = $tmp1578;
// line 256
panda$core$Int64** $tmp1581 = *(&local0);
panda$core$Int64** $tmp1582 = *(&local0);
panda$core$Int64 $tmp1583 = (panda$core$Int64) {0};
int64_t $tmp1584 = $tmp1583.value;
panda$core$Int64* $tmp1585 = $tmp1582[$tmp1584];
panda$core$Int64 $tmp1586 = (panda$core$Int64) {153};
int64_t $tmp1587 = $tmp1586.value;
$tmp1581[$tmp1587] = $tmp1585;
// line 257
panda$core$Int64** $tmp1588 = *(&local0);
panda$core$Int64** $tmp1589 = *(&local0);
panda$core$Int64 $tmp1590 = (panda$core$Int64) {0};
int64_t $tmp1591 = $tmp1590.value;
panda$core$Int64* $tmp1592 = $tmp1589[$tmp1591];
panda$core$Int64 $tmp1593 = (panda$core$Int64) {154};
int64_t $tmp1594 = $tmp1593.value;
$tmp1588[$tmp1594] = $tmp1592;
// line 258
panda$core$Int64** $tmp1595 = *(&local0);
panda$core$Int64** $tmp1596 = *(&local0);
panda$core$Int64 $tmp1597 = (panda$core$Int64) {0};
int64_t $tmp1598 = $tmp1597.value;
panda$core$Int64* $tmp1599 = $tmp1596[$tmp1598];
panda$core$Int64 $tmp1600 = (panda$core$Int64) {155};
int64_t $tmp1601 = $tmp1600.value;
$tmp1595[$tmp1601] = $tmp1599;
// line 259
panda$core$Int64** $tmp1602 = *(&local0);
panda$core$Int64** $tmp1603 = *(&local0);
panda$core$Int64 $tmp1604 = (panda$core$Int64) {0};
int64_t $tmp1605 = $tmp1604.value;
panda$core$Int64* $tmp1606 = $tmp1603[$tmp1605];
panda$core$Int64 $tmp1607 = (panda$core$Int64) {156};
int64_t $tmp1608 = $tmp1607.value;
$tmp1602[$tmp1608] = $tmp1606;
// line 260
panda$core$Int64** $tmp1609 = *(&local0);
panda$core$Int64** $tmp1610 = *(&local0);
panda$core$Int64 $tmp1611 = (panda$core$Int64) {0};
int64_t $tmp1612 = $tmp1611.value;
panda$core$Int64* $tmp1613 = $tmp1610[$tmp1612];
panda$core$Int64 $tmp1614 = (panda$core$Int64) {157};
int64_t $tmp1615 = $tmp1614.value;
$tmp1609[$tmp1615] = $tmp1613;
// line 261
panda$core$Int64** $tmp1616 = *(&local0);
panda$core$Int64** $tmp1617 = *(&local0);
panda$core$Int64 $tmp1618 = (panda$core$Int64) {0};
int64_t $tmp1619 = $tmp1618.value;
panda$core$Int64* $tmp1620 = $tmp1617[$tmp1619];
panda$core$Int64 $tmp1621 = (panda$core$Int64) {158};
int64_t $tmp1622 = $tmp1621.value;
$tmp1616[$tmp1622] = $tmp1620;
// line 262
panda$core$Int64** $tmp1623 = *(&local0);
panda$core$Int64** $tmp1624 = *(&local0);
panda$core$Int64 $tmp1625 = (panda$core$Int64) {0};
int64_t $tmp1626 = $tmp1625.value;
panda$core$Int64* $tmp1627 = $tmp1624[$tmp1626];
panda$core$Int64 $tmp1628 = (panda$core$Int64) {159};
int64_t $tmp1629 = $tmp1628.value;
$tmp1623[$tmp1629] = $tmp1627;
// line 263
panda$core$Int64** $tmp1630 = *(&local0);
panda$core$Int64** $tmp1631 = *(&local0);
panda$core$Int64 $tmp1632 = (panda$core$Int64) {0};
int64_t $tmp1633 = $tmp1632.value;
panda$core$Int64* $tmp1634 = $tmp1631[$tmp1633];
panda$core$Int64 $tmp1635 = (panda$core$Int64) {160};
int64_t $tmp1636 = $tmp1635.value;
$tmp1630[$tmp1636] = $tmp1634;
// line 264
panda$core$Int64** $tmp1637 = *(&local0);
panda$core$Int64** $tmp1638 = *(&local0);
panda$core$Int64 $tmp1639 = (panda$core$Int64) {0};
int64_t $tmp1640 = $tmp1639.value;
panda$core$Int64* $tmp1641 = $tmp1638[$tmp1640];
panda$core$Int64 $tmp1642 = (panda$core$Int64) {161};
int64_t $tmp1643 = $tmp1642.value;
$tmp1637[$tmp1643] = $tmp1641;
// line 265
panda$core$Int64** $tmp1644 = *(&local0);
panda$core$Int64** $tmp1645 = *(&local0);
panda$core$Int64 $tmp1646 = (panda$core$Int64) {0};
int64_t $tmp1647 = $tmp1646.value;
panda$core$Int64* $tmp1648 = $tmp1645[$tmp1647];
panda$core$Int64 $tmp1649 = (panda$core$Int64) {162};
int64_t $tmp1650 = $tmp1649.value;
$tmp1644[$tmp1650] = $tmp1648;
// line 266
panda$core$Int64** $tmp1651 = *(&local0);
panda$core$Int64** $tmp1652 = *(&local0);
panda$core$Int64 $tmp1653 = (panda$core$Int64) {0};
int64_t $tmp1654 = $tmp1653.value;
panda$core$Int64* $tmp1655 = $tmp1652[$tmp1654];
panda$core$Int64 $tmp1656 = (panda$core$Int64) {163};
int64_t $tmp1657 = $tmp1656.value;
$tmp1651[$tmp1657] = $tmp1655;
// line 267
panda$core$Int64** $tmp1658 = *(&local0);
panda$core$Int64** $tmp1659 = *(&local0);
panda$core$Int64 $tmp1660 = (panda$core$Int64) {0};
int64_t $tmp1661 = $tmp1660.value;
panda$core$Int64* $tmp1662 = $tmp1659[$tmp1661];
panda$core$Int64 $tmp1663 = (panda$core$Int64) {164};
int64_t $tmp1664 = $tmp1663.value;
$tmp1658[$tmp1664] = $tmp1662;
// line 268
panda$core$Int64** $tmp1665 = *(&local0);
panda$core$Int64** $tmp1666 = *(&local0);
panda$core$Int64 $tmp1667 = (panda$core$Int64) {0};
int64_t $tmp1668 = $tmp1667.value;
panda$core$Int64* $tmp1669 = $tmp1666[$tmp1668];
panda$core$Int64 $tmp1670 = (panda$core$Int64) {165};
int64_t $tmp1671 = $tmp1670.value;
$tmp1665[$tmp1671] = $tmp1669;
// line 269
panda$core$Int64** $tmp1672 = *(&local0);
panda$core$Int64** $tmp1673 = *(&local0);
panda$core$Int64 $tmp1674 = (panda$core$Int64) {0};
int64_t $tmp1675 = $tmp1674.value;
panda$core$Int64* $tmp1676 = $tmp1673[$tmp1675];
panda$core$Int64 $tmp1677 = (panda$core$Int64) {166};
int64_t $tmp1678 = $tmp1677.value;
$tmp1672[$tmp1678] = $tmp1676;
// line 270
panda$core$Int64** $tmp1679 = *(&local0);
panda$core$Int64** $tmp1680 = *(&local0);
panda$core$Int64 $tmp1681 = (panda$core$Int64) {0};
int64_t $tmp1682 = $tmp1681.value;
panda$core$Int64* $tmp1683 = $tmp1680[$tmp1682];
panda$core$Int64 $tmp1684 = (panda$core$Int64) {167};
int64_t $tmp1685 = $tmp1684.value;
$tmp1679[$tmp1685] = $tmp1683;
// line 271
panda$core$Int64** $tmp1686 = *(&local0);
panda$core$Int64** $tmp1687 = *(&local0);
panda$core$Int64 $tmp1688 = (panda$core$Int64) {0};
int64_t $tmp1689 = $tmp1688.value;
panda$core$Int64* $tmp1690 = $tmp1687[$tmp1689];
panda$core$Int64 $tmp1691 = (panda$core$Int64) {168};
int64_t $tmp1692 = $tmp1691.value;
$tmp1686[$tmp1692] = $tmp1690;
// line 272
panda$core$Int64** $tmp1693 = *(&local0);
panda$core$Int64** $tmp1694 = *(&local0);
panda$core$Int64 $tmp1695 = (panda$core$Int64) {0};
int64_t $tmp1696 = $tmp1695.value;
panda$core$Int64* $tmp1697 = $tmp1694[$tmp1696];
panda$core$Int64 $tmp1698 = (panda$core$Int64) {169};
int64_t $tmp1699 = $tmp1698.value;
$tmp1693[$tmp1699] = $tmp1697;
// line 273
panda$core$Int64** $tmp1700 = *(&local0);
panda$core$Int64** $tmp1701 = *(&local0);
panda$core$Int64 $tmp1702 = (panda$core$Int64) {0};
int64_t $tmp1703 = $tmp1702.value;
panda$core$Int64* $tmp1704 = $tmp1701[$tmp1703];
panda$core$Int64 $tmp1705 = (panda$core$Int64) {170};
int64_t $tmp1706 = $tmp1705.value;
$tmp1700[$tmp1706] = $tmp1704;
// line 274
panda$core$Int64** $tmp1707 = *(&local0);
panda$core$Int64** $tmp1708 = *(&local0);
panda$core$Int64 $tmp1709 = (panda$core$Int64) {0};
int64_t $tmp1710 = $tmp1709.value;
panda$core$Int64* $tmp1711 = $tmp1708[$tmp1710];
panda$core$Int64 $tmp1712 = (panda$core$Int64) {171};
int64_t $tmp1713 = $tmp1712.value;
$tmp1707[$tmp1713] = $tmp1711;
// line 275
panda$core$Int64** $tmp1714 = *(&local0);
panda$core$Int64** $tmp1715 = *(&local0);
panda$core$Int64 $tmp1716 = (panda$core$Int64) {0};
int64_t $tmp1717 = $tmp1716.value;
panda$core$Int64* $tmp1718 = $tmp1715[$tmp1717];
panda$core$Int64 $tmp1719 = (panda$core$Int64) {172};
int64_t $tmp1720 = $tmp1719.value;
$tmp1714[$tmp1720] = $tmp1718;
// line 276
panda$core$Int64** $tmp1721 = *(&local0);
panda$core$Int64** $tmp1722 = *(&local0);
panda$core$Int64 $tmp1723 = (panda$core$Int64) {0};
int64_t $tmp1724 = $tmp1723.value;
panda$core$Int64* $tmp1725 = $tmp1722[$tmp1724];
panda$core$Int64 $tmp1726 = (panda$core$Int64) {173};
int64_t $tmp1727 = $tmp1726.value;
$tmp1721[$tmp1727] = $tmp1725;
// line 277
panda$core$Int64** $tmp1728 = *(&local0);
panda$core$Int64** $tmp1729 = *(&local0);
panda$core$Int64 $tmp1730 = (panda$core$Int64) {0};
int64_t $tmp1731 = $tmp1730.value;
panda$core$Int64* $tmp1732 = $tmp1729[$tmp1731];
panda$core$Int64 $tmp1733 = (panda$core$Int64) {174};
int64_t $tmp1734 = $tmp1733.value;
$tmp1728[$tmp1734] = $tmp1732;
// line 278
panda$core$Int64** $tmp1735 = *(&local0);
panda$core$Int64** $tmp1736 = *(&local0);
panda$core$Int64 $tmp1737 = (panda$core$Int64) {0};
int64_t $tmp1738 = $tmp1737.value;
panda$core$Int64* $tmp1739 = $tmp1736[$tmp1738];
panda$core$Int64 $tmp1740 = (panda$core$Int64) {175};
int64_t $tmp1741 = $tmp1740.value;
$tmp1735[$tmp1741] = $tmp1739;
// line 279
panda$core$Int64** $tmp1742 = *(&local0);
panda$core$Int64** $tmp1743 = *(&local0);
panda$core$Int64 $tmp1744 = (panda$core$Int64) {0};
int64_t $tmp1745 = $tmp1744.value;
panda$core$Int64* $tmp1746 = $tmp1743[$tmp1745];
panda$core$Int64 $tmp1747 = (panda$core$Int64) {176};
int64_t $tmp1748 = $tmp1747.value;
$tmp1742[$tmp1748] = $tmp1746;
// line 280
panda$core$Int64** $tmp1749 = *(&local0);
panda$core$Int64** $tmp1750 = *(&local0);
panda$core$Int64 $tmp1751 = (panda$core$Int64) {0};
int64_t $tmp1752 = $tmp1751.value;
panda$core$Int64* $tmp1753 = $tmp1750[$tmp1752];
panda$core$Int64 $tmp1754 = (panda$core$Int64) {177};
int64_t $tmp1755 = $tmp1754.value;
$tmp1749[$tmp1755] = $tmp1753;
// line 281
panda$core$Int64** $tmp1756 = *(&local0);
panda$core$Int64** $tmp1757 = *(&local0);
panda$core$Int64 $tmp1758 = (panda$core$Int64) {0};
int64_t $tmp1759 = $tmp1758.value;
panda$core$Int64* $tmp1760 = $tmp1757[$tmp1759];
panda$core$Int64 $tmp1761 = (panda$core$Int64) {178};
int64_t $tmp1762 = $tmp1761.value;
$tmp1756[$tmp1762] = $tmp1760;
// line 282
panda$core$Int64** $tmp1763 = *(&local0);
panda$core$Int64** $tmp1764 = *(&local0);
panda$core$Int64 $tmp1765 = (panda$core$Int64) {0};
int64_t $tmp1766 = $tmp1765.value;
panda$core$Int64* $tmp1767 = $tmp1764[$tmp1766];
panda$core$Int64 $tmp1768 = (panda$core$Int64) {179};
int64_t $tmp1769 = $tmp1768.value;
$tmp1763[$tmp1769] = $tmp1767;
// line 283
panda$core$Int64** $tmp1770 = *(&local0);
panda$core$Int64** $tmp1771 = *(&local0);
panda$core$Int64 $tmp1772 = (panda$core$Int64) {0};
int64_t $tmp1773 = $tmp1772.value;
panda$core$Int64* $tmp1774 = $tmp1771[$tmp1773];
panda$core$Int64 $tmp1775 = (panda$core$Int64) {180};
int64_t $tmp1776 = $tmp1775.value;
$tmp1770[$tmp1776] = $tmp1774;
// line 284
panda$core$Int64** $tmp1777 = *(&local0);
panda$core$Int64** $tmp1778 = *(&local0);
panda$core$Int64 $tmp1779 = (panda$core$Int64) {0};
int64_t $tmp1780 = $tmp1779.value;
panda$core$Int64* $tmp1781 = $tmp1778[$tmp1780];
panda$core$Int64 $tmp1782 = (panda$core$Int64) {181};
int64_t $tmp1783 = $tmp1782.value;
$tmp1777[$tmp1783] = $tmp1781;
// line 285
panda$core$Int64** $tmp1784 = *(&local0);
panda$core$Int64** $tmp1785 = *(&local0);
panda$core$Int64 $tmp1786 = (panda$core$Int64) {0};
int64_t $tmp1787 = $tmp1786.value;
panda$core$Int64* $tmp1788 = $tmp1785[$tmp1787];
panda$core$Int64 $tmp1789 = (panda$core$Int64) {182};
int64_t $tmp1790 = $tmp1789.value;
$tmp1784[$tmp1790] = $tmp1788;
// line 286
panda$core$Int64** $tmp1791 = *(&local0);
panda$core$Int64** $tmp1792 = *(&local0);
panda$core$Int64 $tmp1793 = (panda$core$Int64) {0};
int64_t $tmp1794 = $tmp1793.value;
panda$core$Int64* $tmp1795 = $tmp1792[$tmp1794];
panda$core$Int64 $tmp1796 = (panda$core$Int64) {183};
int64_t $tmp1797 = $tmp1796.value;
$tmp1791[$tmp1797] = $tmp1795;
// line 287
panda$core$Int64** $tmp1798 = *(&local0);
panda$core$Int64** $tmp1799 = *(&local0);
panda$core$Int64 $tmp1800 = (panda$core$Int64) {0};
int64_t $tmp1801 = $tmp1800.value;
panda$core$Int64* $tmp1802 = $tmp1799[$tmp1801];
panda$core$Int64 $tmp1803 = (panda$core$Int64) {184};
int64_t $tmp1804 = $tmp1803.value;
$tmp1798[$tmp1804] = $tmp1802;
// line 288
panda$core$Int64** $tmp1805 = *(&local0);
panda$core$Int64** $tmp1806 = *(&local0);
panda$core$Int64 $tmp1807 = (panda$core$Int64) {0};
int64_t $tmp1808 = $tmp1807.value;
panda$core$Int64* $tmp1809 = $tmp1806[$tmp1808];
panda$core$Int64 $tmp1810 = (panda$core$Int64) {185};
int64_t $tmp1811 = $tmp1810.value;
$tmp1805[$tmp1811] = $tmp1809;
// line 289
panda$core$Int64** $tmp1812 = *(&local0);
panda$core$Int64** $tmp1813 = *(&local0);
panda$core$Int64 $tmp1814 = (panda$core$Int64) {0};
int64_t $tmp1815 = $tmp1814.value;
panda$core$Int64* $tmp1816 = $tmp1813[$tmp1815];
panda$core$Int64 $tmp1817 = (panda$core$Int64) {186};
int64_t $tmp1818 = $tmp1817.value;
$tmp1812[$tmp1818] = $tmp1816;
// line 290
panda$core$Int64** $tmp1819 = *(&local0);
panda$core$Int64** $tmp1820 = *(&local0);
panda$core$Int64 $tmp1821 = (panda$core$Int64) {0};
int64_t $tmp1822 = $tmp1821.value;
panda$core$Int64* $tmp1823 = $tmp1820[$tmp1822];
panda$core$Int64 $tmp1824 = (panda$core$Int64) {187};
int64_t $tmp1825 = $tmp1824.value;
$tmp1819[$tmp1825] = $tmp1823;
// line 291
panda$core$Int64** $tmp1826 = *(&local0);
panda$core$Int64** $tmp1827 = *(&local0);
panda$core$Int64 $tmp1828 = (panda$core$Int64) {0};
int64_t $tmp1829 = $tmp1828.value;
panda$core$Int64* $tmp1830 = $tmp1827[$tmp1829];
panda$core$Int64 $tmp1831 = (panda$core$Int64) {188};
int64_t $tmp1832 = $tmp1831.value;
$tmp1826[$tmp1832] = $tmp1830;
// line 292
panda$core$Int64** $tmp1833 = *(&local0);
panda$core$Int64** $tmp1834 = *(&local0);
panda$core$Int64 $tmp1835 = (panda$core$Int64) {0};
int64_t $tmp1836 = $tmp1835.value;
panda$core$Int64* $tmp1837 = $tmp1834[$tmp1836];
panda$core$Int64 $tmp1838 = (panda$core$Int64) {189};
int64_t $tmp1839 = $tmp1838.value;
$tmp1833[$tmp1839] = $tmp1837;
// line 293
panda$core$Int64** $tmp1840 = *(&local0);
panda$core$Int64** $tmp1841 = *(&local0);
panda$core$Int64 $tmp1842 = (panda$core$Int64) {0};
int64_t $tmp1843 = $tmp1842.value;
panda$core$Int64* $tmp1844 = $tmp1841[$tmp1843];
panda$core$Int64 $tmp1845 = (panda$core$Int64) {190};
int64_t $tmp1846 = $tmp1845.value;
$tmp1840[$tmp1846] = $tmp1844;
// line 294
panda$core$Int64** $tmp1847 = *(&local0);
panda$core$Int64** $tmp1848 = *(&local0);
panda$core$Int64 $tmp1849 = (panda$core$Int64) {0};
int64_t $tmp1850 = $tmp1849.value;
panda$core$Int64* $tmp1851 = $tmp1848[$tmp1850];
panda$core$Int64 $tmp1852 = (panda$core$Int64) {191};
int64_t $tmp1853 = $tmp1852.value;
$tmp1847[$tmp1853] = $tmp1851;
// line 295
panda$core$Int64** $tmp1854 = *(&local0);
panda$core$Int64** $tmp1855 = *(&local0);
panda$core$Int64 $tmp1856 = (panda$core$Int64) {0};
int64_t $tmp1857 = $tmp1856.value;
panda$core$Int64* $tmp1858 = $tmp1855[$tmp1857];
panda$core$Int64 $tmp1859 = (panda$core$Int64) {192};
int64_t $tmp1860 = $tmp1859.value;
$tmp1854[$tmp1860] = $tmp1858;
// line 296
panda$core$Int64** $tmp1861 = *(&local0);
panda$core$Int64** $tmp1862 = *(&local0);
panda$core$Int64 $tmp1863 = (panda$core$Int64) {0};
int64_t $tmp1864 = $tmp1863.value;
panda$core$Int64* $tmp1865 = $tmp1862[$tmp1864];
panda$core$Int64 $tmp1866 = (panda$core$Int64) {193};
int64_t $tmp1867 = $tmp1866.value;
$tmp1861[$tmp1867] = $tmp1865;
// line 297
panda$core$Int64** $tmp1868 = *(&local0);
panda$core$Int64** $tmp1869 = *(&local0);
panda$core$Int64 $tmp1870 = (panda$core$Int64) {0};
int64_t $tmp1871 = $tmp1870.value;
panda$core$Int64* $tmp1872 = $tmp1869[$tmp1871];
panda$core$Int64 $tmp1873 = (panda$core$Int64) {194};
int64_t $tmp1874 = $tmp1873.value;
$tmp1868[$tmp1874] = $tmp1872;
// line 298
panda$core$Int64** $tmp1875 = *(&local0);
panda$core$Int64** $tmp1876 = *(&local0);
panda$core$Int64 $tmp1877 = (panda$core$Int64) {0};
int64_t $tmp1878 = $tmp1877.value;
panda$core$Int64* $tmp1879 = $tmp1876[$tmp1878];
panda$core$Int64 $tmp1880 = (panda$core$Int64) {195};
int64_t $tmp1881 = $tmp1880.value;
$tmp1875[$tmp1881] = $tmp1879;
// line 299
panda$core$Int64** $tmp1882 = *(&local0);
panda$core$Int64** $tmp1883 = *(&local0);
panda$core$Int64 $tmp1884 = (panda$core$Int64) {0};
int64_t $tmp1885 = $tmp1884.value;
panda$core$Int64* $tmp1886 = $tmp1883[$tmp1885];
panda$core$Int64 $tmp1887 = (panda$core$Int64) {196};
int64_t $tmp1888 = $tmp1887.value;
$tmp1882[$tmp1888] = $tmp1886;
// line 300
panda$core$Int64** $tmp1889 = *(&local0);
panda$core$Int64** $tmp1890 = *(&local0);
panda$core$Int64 $tmp1891 = (panda$core$Int64) {0};
int64_t $tmp1892 = $tmp1891.value;
panda$core$Int64* $tmp1893 = $tmp1890[$tmp1892];
panda$core$Int64 $tmp1894 = (panda$core$Int64) {197};
int64_t $tmp1895 = $tmp1894.value;
$tmp1889[$tmp1895] = $tmp1893;
// line 301
panda$core$Int64** $tmp1896 = *(&local0);
panda$core$Int64** $tmp1897 = *(&local0);
panda$core$Int64 $tmp1898 = (panda$core$Int64) {0};
int64_t $tmp1899 = $tmp1898.value;
panda$core$Int64* $tmp1900 = $tmp1897[$tmp1899];
panda$core$Int64 $tmp1901 = (panda$core$Int64) {198};
int64_t $tmp1902 = $tmp1901.value;
$tmp1896[$tmp1902] = $tmp1900;
// line 302
panda$core$Int64** $tmp1903 = *(&local0);
panda$core$Int64** $tmp1904 = *(&local0);
panda$core$Int64 $tmp1905 = (panda$core$Int64) {0};
int64_t $tmp1906 = $tmp1905.value;
panda$core$Int64* $tmp1907 = $tmp1904[$tmp1906];
panda$core$Int64 $tmp1908 = (panda$core$Int64) {199};
int64_t $tmp1909 = $tmp1908.value;
$tmp1903[$tmp1909] = $tmp1907;
// line 303
panda$core$Int64** $tmp1910 = *(&local0);
panda$core$Int64** $tmp1911 = *(&local0);
panda$core$Int64 $tmp1912 = (panda$core$Int64) {0};
int64_t $tmp1913 = $tmp1912.value;
panda$core$Int64* $tmp1914 = $tmp1911[$tmp1913];
panda$core$Int64 $tmp1915 = (panda$core$Int64) {200};
int64_t $tmp1916 = $tmp1915.value;
$tmp1910[$tmp1916] = $tmp1914;
// line 304
panda$core$Int64** $tmp1917 = *(&local0);
panda$core$Int64** $tmp1918 = *(&local0);
panda$core$Int64 $tmp1919 = (panda$core$Int64) {0};
int64_t $tmp1920 = $tmp1919.value;
panda$core$Int64* $tmp1921 = $tmp1918[$tmp1920];
panda$core$Int64 $tmp1922 = (panda$core$Int64) {201};
int64_t $tmp1923 = $tmp1922.value;
$tmp1917[$tmp1923] = $tmp1921;
// line 305
panda$core$Int64** $tmp1924 = *(&local0);
panda$core$Int64** $tmp1925 = *(&local0);
panda$core$Int64 $tmp1926 = (panda$core$Int64) {0};
int64_t $tmp1927 = $tmp1926.value;
panda$core$Int64* $tmp1928 = $tmp1925[$tmp1927];
panda$core$Int64 $tmp1929 = (panda$core$Int64) {202};
int64_t $tmp1930 = $tmp1929.value;
$tmp1924[$tmp1930] = $tmp1928;
// line 306
panda$core$Int64** $tmp1931 = *(&local0);
panda$core$Int64** $tmp1932 = *(&local0);
panda$core$Int64 $tmp1933 = (panda$core$Int64) {0};
int64_t $tmp1934 = $tmp1933.value;
panda$core$Int64* $tmp1935 = $tmp1932[$tmp1934];
panda$core$Int64 $tmp1936 = (panda$core$Int64) {203};
int64_t $tmp1937 = $tmp1936.value;
$tmp1931[$tmp1937] = $tmp1935;
// line 307
panda$core$Int64** $tmp1938 = *(&local0);
panda$core$Int64** $tmp1939 = *(&local0);
panda$core$Int64 $tmp1940 = (panda$core$Int64) {0};
int64_t $tmp1941 = $tmp1940.value;
panda$core$Int64* $tmp1942 = $tmp1939[$tmp1941];
panda$core$Int64 $tmp1943 = (panda$core$Int64) {204};
int64_t $tmp1944 = $tmp1943.value;
$tmp1938[$tmp1944] = $tmp1942;
// line 308
panda$core$Int64** $tmp1945 = *(&local0);
panda$core$Int64** $tmp1946 = *(&local0);
panda$core$Int64 $tmp1947 = (panda$core$Int64) {0};
int64_t $tmp1948 = $tmp1947.value;
panda$core$Int64* $tmp1949 = $tmp1946[$tmp1948];
panda$core$Int64 $tmp1950 = (panda$core$Int64) {205};
int64_t $tmp1951 = $tmp1950.value;
$tmp1945[$tmp1951] = $tmp1949;
// line 309
panda$core$Int64** $tmp1952 = *(&local0);
panda$core$Int64** $tmp1953 = *(&local0);
panda$core$Int64 $tmp1954 = (panda$core$Int64) {0};
int64_t $tmp1955 = $tmp1954.value;
panda$core$Int64* $tmp1956 = $tmp1953[$tmp1955];
panda$core$Int64 $tmp1957 = (panda$core$Int64) {206};
int64_t $tmp1958 = $tmp1957.value;
$tmp1952[$tmp1958] = $tmp1956;
// line 310
panda$core$Int64** $tmp1959 = *(&local0);
panda$core$Int64** $tmp1960 = *(&local0);
panda$core$Int64 $tmp1961 = (panda$core$Int64) {0};
int64_t $tmp1962 = $tmp1961.value;
panda$core$Int64* $tmp1963 = $tmp1960[$tmp1962];
panda$core$Int64 $tmp1964 = (panda$core$Int64) {207};
int64_t $tmp1965 = $tmp1964.value;
$tmp1959[$tmp1965] = $tmp1963;
// line 311
panda$core$Int64** $tmp1966 = *(&local0);
panda$core$Int64** $tmp1967 = *(&local0);
panda$core$Int64 $tmp1968 = (panda$core$Int64) {0};
int64_t $tmp1969 = $tmp1968.value;
panda$core$Int64* $tmp1970 = $tmp1967[$tmp1969];
panda$core$Int64 $tmp1971 = (panda$core$Int64) {208};
int64_t $tmp1972 = $tmp1971.value;
$tmp1966[$tmp1972] = $tmp1970;
// line 312
panda$core$Int64** $tmp1973 = *(&local0);
panda$core$Int64** $tmp1974 = *(&local0);
panda$core$Int64 $tmp1975 = (panda$core$Int64) {0};
int64_t $tmp1976 = $tmp1975.value;
panda$core$Int64* $tmp1977 = $tmp1974[$tmp1976];
panda$core$Int64 $tmp1978 = (panda$core$Int64) {209};
int64_t $tmp1979 = $tmp1978.value;
$tmp1973[$tmp1979] = $tmp1977;
// line 313
panda$core$Int64** $tmp1980 = *(&local0);
panda$core$Int64** $tmp1981 = *(&local0);
panda$core$Int64 $tmp1982 = (panda$core$Int64) {0};
int64_t $tmp1983 = $tmp1982.value;
panda$core$Int64* $tmp1984 = $tmp1981[$tmp1983];
panda$core$Int64 $tmp1985 = (panda$core$Int64) {210};
int64_t $tmp1986 = $tmp1985.value;
$tmp1980[$tmp1986] = $tmp1984;
// line 314
panda$core$Int64** $tmp1987 = *(&local0);
panda$core$Int64** $tmp1988 = *(&local0);
panda$core$Int64 $tmp1989 = (panda$core$Int64) {0};
int64_t $tmp1990 = $tmp1989.value;
panda$core$Int64* $tmp1991 = $tmp1988[$tmp1990];
panda$core$Int64 $tmp1992 = (panda$core$Int64) {211};
int64_t $tmp1993 = $tmp1992.value;
$tmp1987[$tmp1993] = $tmp1991;
// line 315
panda$core$Int64** $tmp1994 = *(&local0);
panda$core$Int64** $tmp1995 = *(&local0);
panda$core$Int64 $tmp1996 = (panda$core$Int64) {0};
int64_t $tmp1997 = $tmp1996.value;
panda$core$Int64* $tmp1998 = $tmp1995[$tmp1997];
panda$core$Int64 $tmp1999 = (panda$core$Int64) {212};
int64_t $tmp2000 = $tmp1999.value;
$tmp1994[$tmp2000] = $tmp1998;
// line 316
panda$core$Int64** $tmp2001 = *(&local0);
panda$core$Int64** $tmp2002 = *(&local0);
panda$core$Int64 $tmp2003 = (panda$core$Int64) {0};
int64_t $tmp2004 = $tmp2003.value;
panda$core$Int64* $tmp2005 = $tmp2002[$tmp2004];
panda$core$Int64 $tmp2006 = (panda$core$Int64) {213};
int64_t $tmp2007 = $tmp2006.value;
$tmp2001[$tmp2007] = $tmp2005;
// line 317
panda$core$Int64** $tmp2008 = *(&local0);
panda$core$Int64** $tmp2009 = *(&local0);
panda$core$Int64 $tmp2010 = (panda$core$Int64) {0};
int64_t $tmp2011 = $tmp2010.value;
panda$core$Int64* $tmp2012 = $tmp2009[$tmp2011];
panda$core$Int64 $tmp2013 = (panda$core$Int64) {214};
int64_t $tmp2014 = $tmp2013.value;
$tmp2008[$tmp2014] = $tmp2012;
// line 318
panda$core$Int64** $tmp2015 = *(&local0);
panda$core$Int64** $tmp2016 = *(&local0);
panda$core$Int64 $tmp2017 = (panda$core$Int64) {0};
int64_t $tmp2018 = $tmp2017.value;
panda$core$Int64* $tmp2019 = $tmp2016[$tmp2018];
panda$core$Int64 $tmp2020 = (panda$core$Int64) {215};
int64_t $tmp2021 = $tmp2020.value;
$tmp2015[$tmp2021] = $tmp2019;
// line 319
panda$core$Int64** $tmp2022 = *(&local0);
panda$core$Int64** $tmp2023 = *(&local0);
panda$core$Int64 $tmp2024 = (panda$core$Int64) {0};
int64_t $tmp2025 = $tmp2024.value;
panda$core$Int64* $tmp2026 = $tmp2023[$tmp2025];
panda$core$Int64 $tmp2027 = (panda$core$Int64) {216};
int64_t $tmp2028 = $tmp2027.value;
$tmp2022[$tmp2028] = $tmp2026;
// line 320
panda$core$Int64** $tmp2029 = *(&local0);
panda$core$Int64** $tmp2030 = *(&local0);
panda$core$Int64 $tmp2031 = (panda$core$Int64) {0};
int64_t $tmp2032 = $tmp2031.value;
panda$core$Int64* $tmp2033 = $tmp2030[$tmp2032];
panda$core$Int64 $tmp2034 = (panda$core$Int64) {217};
int64_t $tmp2035 = $tmp2034.value;
$tmp2029[$tmp2035] = $tmp2033;
// line 321
panda$core$Int64** $tmp2036 = *(&local0);
panda$core$Int64** $tmp2037 = *(&local0);
panda$core$Int64 $tmp2038 = (panda$core$Int64) {0};
int64_t $tmp2039 = $tmp2038.value;
panda$core$Int64* $tmp2040 = $tmp2037[$tmp2039];
panda$core$Int64 $tmp2041 = (panda$core$Int64) {218};
int64_t $tmp2042 = $tmp2041.value;
$tmp2036[$tmp2042] = $tmp2040;
// line 322
panda$core$Int64** $tmp2043 = *(&local0);
panda$core$Int64** $tmp2044 = *(&local0);
panda$core$Int64 $tmp2045 = (panda$core$Int64) {0};
int64_t $tmp2046 = $tmp2045.value;
panda$core$Int64* $tmp2047 = $tmp2044[$tmp2046];
panda$core$Int64 $tmp2048 = (panda$core$Int64) {219};
int64_t $tmp2049 = $tmp2048.value;
$tmp2043[$tmp2049] = $tmp2047;
// line 323
panda$core$Int64** $tmp2050 = *(&local0);
panda$core$Int64** $tmp2051 = *(&local0);
panda$core$Int64 $tmp2052 = (panda$core$Int64) {0};
int64_t $tmp2053 = $tmp2052.value;
panda$core$Int64* $tmp2054 = $tmp2051[$tmp2053];
panda$core$Int64 $tmp2055 = (panda$core$Int64) {220};
int64_t $tmp2056 = $tmp2055.value;
$tmp2050[$tmp2056] = $tmp2054;
// line 324
panda$core$Int64** $tmp2057 = *(&local0);
panda$core$Int64** $tmp2058 = *(&local0);
panda$core$Int64 $tmp2059 = (panda$core$Int64) {0};
int64_t $tmp2060 = $tmp2059.value;
panda$core$Int64* $tmp2061 = $tmp2058[$tmp2060];
panda$core$Int64 $tmp2062 = (panda$core$Int64) {221};
int64_t $tmp2063 = $tmp2062.value;
$tmp2057[$tmp2063] = $tmp2061;
// line 325
panda$core$Int64** $tmp2064 = *(&local0);
panda$core$Int64** $tmp2065 = *(&local0);
panda$core$Int64 $tmp2066 = (panda$core$Int64) {0};
int64_t $tmp2067 = $tmp2066.value;
panda$core$Int64* $tmp2068 = $tmp2065[$tmp2067];
panda$core$Int64 $tmp2069 = (panda$core$Int64) {222};
int64_t $tmp2070 = $tmp2069.value;
$tmp2064[$tmp2070] = $tmp2068;
// line 326
panda$core$Int64** $tmp2071 = *(&local0);
panda$core$Int64** $tmp2072 = *(&local0);
panda$core$Int64 $tmp2073 = (panda$core$Int64) {0};
int64_t $tmp2074 = $tmp2073.value;
panda$core$Int64* $tmp2075 = $tmp2072[$tmp2074];
panda$core$Int64 $tmp2076 = (panda$core$Int64) {223};
int64_t $tmp2077 = $tmp2076.value;
$tmp2071[$tmp2077] = $tmp2075;
// line 327
panda$core$Int64** $tmp2078 = *(&local0);
panda$core$Int64** $tmp2079 = *(&local0);
panda$core$Int64 $tmp2080 = (panda$core$Int64) {0};
int64_t $tmp2081 = $tmp2080.value;
panda$core$Int64* $tmp2082 = $tmp2079[$tmp2081];
panda$core$Int64 $tmp2083 = (panda$core$Int64) {224};
int64_t $tmp2084 = $tmp2083.value;
$tmp2078[$tmp2084] = $tmp2082;
// line 328
panda$core$Int64** $tmp2085 = *(&local0);
panda$core$Int64** $tmp2086 = *(&local0);
panda$core$Int64 $tmp2087 = (panda$core$Int64) {0};
int64_t $tmp2088 = $tmp2087.value;
panda$core$Int64* $tmp2089 = $tmp2086[$tmp2088];
panda$core$Int64 $tmp2090 = (panda$core$Int64) {225};
int64_t $tmp2091 = $tmp2090.value;
$tmp2085[$tmp2091] = $tmp2089;
// line 329
panda$core$Int64** $tmp2092 = *(&local0);
panda$core$Int64** $tmp2093 = *(&local0);
panda$core$Int64 $tmp2094 = (panda$core$Int64) {0};
int64_t $tmp2095 = $tmp2094.value;
panda$core$Int64* $tmp2096 = $tmp2093[$tmp2095];
panda$core$Int64 $tmp2097 = (panda$core$Int64) {226};
int64_t $tmp2098 = $tmp2097.value;
$tmp2092[$tmp2098] = $tmp2096;
// line 330
panda$core$Int64** $tmp2099 = *(&local0);
panda$core$Int64** $tmp2100 = *(&local0);
panda$core$Int64 $tmp2101 = (panda$core$Int64) {0};
int64_t $tmp2102 = $tmp2101.value;
panda$core$Int64* $tmp2103 = $tmp2100[$tmp2102];
panda$core$Int64 $tmp2104 = (panda$core$Int64) {227};
int64_t $tmp2105 = $tmp2104.value;
$tmp2099[$tmp2105] = $tmp2103;
// line 331
panda$core$Int64** $tmp2106 = *(&local0);
panda$core$Int64** $tmp2107 = *(&local0);
panda$core$Int64 $tmp2108 = (panda$core$Int64) {0};
int64_t $tmp2109 = $tmp2108.value;
panda$core$Int64* $tmp2110 = $tmp2107[$tmp2109];
panda$core$Int64 $tmp2111 = (panda$core$Int64) {228};
int64_t $tmp2112 = $tmp2111.value;
$tmp2106[$tmp2112] = $tmp2110;
// line 332
panda$core$Int64** $tmp2113 = *(&local0);
panda$core$Int64** $tmp2114 = *(&local0);
panda$core$Int64 $tmp2115 = (panda$core$Int64) {0};
int64_t $tmp2116 = $tmp2115.value;
panda$core$Int64* $tmp2117 = $tmp2114[$tmp2116];
panda$core$Int64 $tmp2118 = (panda$core$Int64) {229};
int64_t $tmp2119 = $tmp2118.value;
$tmp2113[$tmp2119] = $tmp2117;
// line 333
panda$core$Int64** $tmp2120 = *(&local0);
panda$core$Int64** $tmp2121 = *(&local0);
panda$core$Int64 $tmp2122 = (panda$core$Int64) {0};
int64_t $tmp2123 = $tmp2122.value;
panda$core$Int64* $tmp2124 = $tmp2121[$tmp2123];
panda$core$Int64 $tmp2125 = (panda$core$Int64) {230};
int64_t $tmp2126 = $tmp2125.value;
$tmp2120[$tmp2126] = $tmp2124;
// line 334
panda$core$Int64** $tmp2127 = *(&local0);
panda$core$Int64** $tmp2128 = *(&local0);
panda$core$Int64 $tmp2129 = (panda$core$Int64) {0};
int64_t $tmp2130 = $tmp2129.value;
panda$core$Int64* $tmp2131 = $tmp2128[$tmp2130];
panda$core$Int64 $tmp2132 = (panda$core$Int64) {231};
int64_t $tmp2133 = $tmp2132.value;
$tmp2127[$tmp2133] = $tmp2131;
// line 335
panda$core$Int64** $tmp2134 = *(&local0);
panda$core$Int64** $tmp2135 = *(&local0);
panda$core$Int64 $tmp2136 = (panda$core$Int64) {0};
int64_t $tmp2137 = $tmp2136.value;
panda$core$Int64* $tmp2138 = $tmp2135[$tmp2137];
panda$core$Int64 $tmp2139 = (panda$core$Int64) {232};
int64_t $tmp2140 = $tmp2139.value;
$tmp2134[$tmp2140] = $tmp2138;
// line 336
panda$core$Int64** $tmp2141 = *(&local0);
panda$core$Int64** $tmp2142 = *(&local0);
panda$core$Int64 $tmp2143 = (panda$core$Int64) {0};
int64_t $tmp2144 = $tmp2143.value;
panda$core$Int64* $tmp2145 = $tmp2142[$tmp2144];
panda$core$Int64 $tmp2146 = (panda$core$Int64) {233};
int64_t $tmp2147 = $tmp2146.value;
$tmp2141[$tmp2147] = $tmp2145;
// line 337
panda$core$Int64** $tmp2148 = *(&local0);
panda$core$Int64** $tmp2149 = *(&local0);
panda$core$Int64 $tmp2150 = (panda$core$Int64) {0};
int64_t $tmp2151 = $tmp2150.value;
panda$core$Int64* $tmp2152 = $tmp2149[$tmp2151];
panda$core$Int64 $tmp2153 = (panda$core$Int64) {234};
int64_t $tmp2154 = $tmp2153.value;
$tmp2148[$tmp2154] = $tmp2152;
// line 338
panda$core$Int64** $tmp2155 = *(&local0);
panda$core$Int64** $tmp2156 = *(&local0);
panda$core$Int64 $tmp2157 = (panda$core$Int64) {0};
int64_t $tmp2158 = $tmp2157.value;
panda$core$Int64* $tmp2159 = $tmp2156[$tmp2158];
panda$core$Int64 $tmp2160 = (panda$core$Int64) {235};
int64_t $tmp2161 = $tmp2160.value;
$tmp2155[$tmp2161] = $tmp2159;
// line 339
panda$core$Int64** $tmp2162 = *(&local0);
panda$core$Int64** $tmp2163 = *(&local0);
panda$core$Int64 $tmp2164 = (panda$core$Int64) {0};
int64_t $tmp2165 = $tmp2164.value;
panda$core$Int64* $tmp2166 = $tmp2163[$tmp2165];
panda$core$Int64 $tmp2167 = (panda$core$Int64) {236};
int64_t $tmp2168 = $tmp2167.value;
$tmp2162[$tmp2168] = $tmp2166;
// line 340
panda$core$Int64** $tmp2169 = *(&local0);
panda$core$Int64** $tmp2170 = *(&local0);
panda$core$Int64 $tmp2171 = (panda$core$Int64) {0};
int64_t $tmp2172 = $tmp2171.value;
panda$core$Int64* $tmp2173 = $tmp2170[$tmp2172];
panda$core$Int64 $tmp2174 = (panda$core$Int64) {237};
int64_t $tmp2175 = $tmp2174.value;
$tmp2169[$tmp2175] = $tmp2173;
// line 341
panda$core$Int64** $tmp2176 = *(&local0);
panda$core$Int64** $tmp2177 = *(&local0);
panda$core$Int64 $tmp2178 = (panda$core$Int64) {0};
int64_t $tmp2179 = $tmp2178.value;
panda$core$Int64* $tmp2180 = $tmp2177[$tmp2179];
panda$core$Int64 $tmp2181 = (panda$core$Int64) {238};
int64_t $tmp2182 = $tmp2181.value;
$tmp2176[$tmp2182] = $tmp2180;
// line 342
panda$core$Int64** $tmp2183 = *(&local0);
panda$core$Int64** $tmp2184 = *(&local0);
panda$core$Int64 $tmp2185 = (panda$core$Int64) {0};
int64_t $tmp2186 = $tmp2185.value;
panda$core$Int64* $tmp2187 = $tmp2184[$tmp2186];
panda$core$Int64 $tmp2188 = (panda$core$Int64) {239};
int64_t $tmp2189 = $tmp2188.value;
$tmp2183[$tmp2189] = $tmp2187;
// line 343
panda$core$Int64** $tmp2190 = *(&local0);
panda$core$Int64** $tmp2191 = *(&local0);
panda$core$Int64 $tmp2192 = (panda$core$Int64) {0};
int64_t $tmp2193 = $tmp2192.value;
panda$core$Int64* $tmp2194 = $tmp2191[$tmp2193];
panda$core$Int64 $tmp2195 = (panda$core$Int64) {240};
int64_t $tmp2196 = $tmp2195.value;
$tmp2190[$tmp2196] = $tmp2194;
// line 344
panda$core$Int64** $tmp2197 = *(&local0);
panda$core$Int64** $tmp2198 = *(&local0);
panda$core$Int64 $tmp2199 = (panda$core$Int64) {0};
int64_t $tmp2200 = $tmp2199.value;
panda$core$Int64* $tmp2201 = $tmp2198[$tmp2200];
panda$core$Int64 $tmp2202 = (panda$core$Int64) {241};
int64_t $tmp2203 = $tmp2202.value;
$tmp2197[$tmp2203] = $tmp2201;
// line 345
panda$core$Int64** $tmp2204 = *(&local0);
panda$core$Int64** $tmp2205 = *(&local0);
panda$core$Int64 $tmp2206 = (panda$core$Int64) {0};
int64_t $tmp2207 = $tmp2206.value;
panda$core$Int64* $tmp2208 = $tmp2205[$tmp2207];
panda$core$Int64 $tmp2209 = (panda$core$Int64) {242};
int64_t $tmp2210 = $tmp2209.value;
$tmp2204[$tmp2210] = $tmp2208;
// line 346
panda$core$Int64** $tmp2211 = *(&local0);
panda$core$Int64** $tmp2212 = *(&local0);
panda$core$Int64 $tmp2213 = (panda$core$Int64) {0};
int64_t $tmp2214 = $tmp2213.value;
panda$core$Int64* $tmp2215 = $tmp2212[$tmp2214];
panda$core$Int64 $tmp2216 = (panda$core$Int64) {243};
int64_t $tmp2217 = $tmp2216.value;
$tmp2211[$tmp2217] = $tmp2215;
// line 347
panda$core$Int64** $tmp2218 = *(&local0);
panda$core$Int64** $tmp2219 = *(&local0);
panda$core$Int64 $tmp2220 = (panda$core$Int64) {0};
int64_t $tmp2221 = $tmp2220.value;
panda$core$Int64* $tmp2222 = $tmp2219[$tmp2221];
panda$core$Int64 $tmp2223 = (panda$core$Int64) {244};
int64_t $tmp2224 = $tmp2223.value;
$tmp2218[$tmp2224] = $tmp2222;
// line 348
panda$core$Int64** $tmp2225 = *(&local0);
panda$core$Int64** $tmp2226 = *(&local0);
panda$core$Int64 $tmp2227 = (panda$core$Int64) {0};
int64_t $tmp2228 = $tmp2227.value;
panda$core$Int64* $tmp2229 = $tmp2226[$tmp2228];
panda$core$Int64 $tmp2230 = (panda$core$Int64) {245};
int64_t $tmp2231 = $tmp2230.value;
$tmp2225[$tmp2231] = $tmp2229;
// line 349
panda$core$Int64** $tmp2232 = *(&local0);
panda$core$Int64** $tmp2233 = *(&local0);
panda$core$Int64 $tmp2234 = (panda$core$Int64) {0};
int64_t $tmp2235 = $tmp2234.value;
panda$core$Int64* $tmp2236 = $tmp2233[$tmp2235];
panda$core$Int64 $tmp2237 = (panda$core$Int64) {246};
int64_t $tmp2238 = $tmp2237.value;
$tmp2232[$tmp2238] = $tmp2236;
// line 350
panda$core$Int64** $tmp2239 = *(&local0);
panda$core$Int64** $tmp2240 = *(&local0);
panda$core$Int64 $tmp2241 = (panda$core$Int64) {0};
int64_t $tmp2242 = $tmp2241.value;
panda$core$Int64* $tmp2243 = $tmp2240[$tmp2242];
panda$core$Int64 $tmp2244 = (panda$core$Int64) {247};
int64_t $tmp2245 = $tmp2244.value;
$tmp2239[$tmp2245] = $tmp2243;
// line 351
panda$core$Int64** $tmp2246 = *(&local0);
panda$core$Int64** $tmp2247 = *(&local0);
panda$core$Int64 $tmp2248 = (panda$core$Int64) {0};
int64_t $tmp2249 = $tmp2248.value;
panda$core$Int64* $tmp2250 = $tmp2247[$tmp2249];
panda$core$Int64 $tmp2251 = (panda$core$Int64) {248};
int64_t $tmp2252 = $tmp2251.value;
$tmp2246[$tmp2252] = $tmp2250;
// line 352
panda$core$Int64** $tmp2253 = *(&local0);
panda$core$Int64** $tmp2254 = *(&local0);
panda$core$Int64 $tmp2255 = (panda$core$Int64) {0};
int64_t $tmp2256 = $tmp2255.value;
panda$core$Int64* $tmp2257 = $tmp2254[$tmp2256];
panda$core$Int64 $tmp2258 = (panda$core$Int64) {249};
int64_t $tmp2259 = $tmp2258.value;
$tmp2253[$tmp2259] = $tmp2257;
// line 353
panda$core$Int64** $tmp2260 = *(&local0);
panda$core$Int64** $tmp2261 = *(&local0);
panda$core$Int64 $tmp2262 = (panda$core$Int64) {0};
int64_t $tmp2263 = $tmp2262.value;
panda$core$Int64* $tmp2264 = $tmp2261[$tmp2263];
panda$core$Int64 $tmp2265 = (panda$core$Int64) {250};
int64_t $tmp2266 = $tmp2265.value;
$tmp2260[$tmp2266] = $tmp2264;
// line 354
panda$core$Int64** $tmp2267 = *(&local0);
panda$core$Int64** $tmp2268 = *(&local0);
panda$core$Int64 $tmp2269 = (panda$core$Int64) {0};
int64_t $tmp2270 = $tmp2269.value;
panda$core$Int64* $tmp2271 = $tmp2268[$tmp2270];
panda$core$Int64 $tmp2272 = (panda$core$Int64) {251};
int64_t $tmp2273 = $tmp2272.value;
$tmp2267[$tmp2273] = $tmp2271;
// line 355
panda$core$Int64** $tmp2274 = *(&local0);
panda$core$Int64** $tmp2275 = *(&local0);
panda$core$Int64 $tmp2276 = (panda$core$Int64) {0};
int64_t $tmp2277 = $tmp2276.value;
panda$core$Int64* $tmp2278 = $tmp2275[$tmp2277];
panda$core$Int64 $tmp2279 = (panda$core$Int64) {252};
int64_t $tmp2280 = $tmp2279.value;
$tmp2274[$tmp2280] = $tmp2278;
// line 356
panda$core$Int64** $tmp2281 = *(&local0);
panda$core$Int64** $tmp2282 = *(&local0);
panda$core$Int64 $tmp2283 = (panda$core$Int64) {0};
int64_t $tmp2284 = $tmp2283.value;
panda$core$Int64* $tmp2285 = $tmp2282[$tmp2284];
panda$core$Int64 $tmp2286 = (panda$core$Int64) {253};
int64_t $tmp2287 = $tmp2286.value;
$tmp2281[$tmp2287] = $tmp2285;
// line 357
panda$core$Int64** $tmp2288 = *(&local0);
panda$core$Int64** $tmp2289 = *(&local0);
panda$core$Int64 $tmp2290 = (panda$core$Int64) {0};
int64_t $tmp2291 = $tmp2290.value;
panda$core$Int64* $tmp2292 = $tmp2289[$tmp2291];
panda$core$Int64 $tmp2293 = (panda$core$Int64) {254};
int64_t $tmp2294 = $tmp2293.value;
$tmp2288[$tmp2294] = $tmp2292;
// line 358
panda$core$Int64** $tmp2295 = *(&local0);
panda$core$Int64** $tmp2296 = *(&local0);
panda$core$Int64 $tmp2297 = (panda$core$Int64) {0};
int64_t $tmp2298 = $tmp2297.value;
panda$core$Int64* $tmp2299 = $tmp2296[$tmp2298];
panda$core$Int64 $tmp2300 = (panda$core$Int64) {255};
int64_t $tmp2301 = $tmp2300.value;
$tmp2295[$tmp2301] = $tmp2299;
// line 359
panda$core$Int64** $tmp2302 = *(&local0);
return $tmp2302;

}
panda$core$Int64* org$pandalanguage$json$Lexer$getAccepts$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT() {

panda$core$Int64* local0;
// line 364
panda$core$Int64 $tmp2303 = (panda$core$Int64) {31};
int64_t $tmp2304 = $tmp2303.value;
panda$core$Int64* $tmp2305 = ((panda$core$Int64*) pandaZAlloc($tmp2304 * 8));
*(&local0) = $tmp2305;
// line 365
panda$core$Int64* $tmp2306 = *(&local0);
panda$core$Int64 $tmp2307 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2308 = (panda$core$Int64) {0};
int64_t $tmp2309 = $tmp2308.value;
$tmp2306[$tmp2309] = $tmp2307;
// line 366
panda$core$Int64* $tmp2310 = *(&local0);
panda$core$Int64 $tmp2311 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2312 = (panda$core$Int64) {1};
int64_t $tmp2313 = $tmp2312.value;
$tmp2310[$tmp2313] = $tmp2311;
// line 367
panda$core$Int64* $tmp2314 = *(&local0);
panda$core$Int64 $tmp2315 = (panda$core$Int64) {6};
panda$core$Int64 $tmp2316 = (panda$core$Int64) {2};
int64_t $tmp2317 = $tmp2316.value;
$tmp2314[$tmp2317] = $tmp2315;
// line 368
panda$core$Int64* $tmp2318 = *(&local0);
panda$core$Int64 $tmp2319 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2320 = (panda$core$Int64) {3};
int64_t $tmp2321 = $tmp2320.value;
$tmp2318[$tmp2321] = $tmp2319;
// line 369
panda$core$Int64* $tmp2322 = *(&local0);
panda$core$Int64 $tmp2323 = (panda$core$Int64) {3};
panda$core$Int64 $tmp2324 = (panda$core$Int64) {4};
int64_t $tmp2325 = $tmp2324.value;
$tmp2322[$tmp2325] = $tmp2323;
// line 370
panda$core$Int64* $tmp2326 = *(&local0);
panda$core$Int64 $tmp2327 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2328 = (panda$core$Int64) {5};
int64_t $tmp2329 = $tmp2328.value;
$tmp2326[$tmp2329] = $tmp2327;
// line 371
panda$core$Int64* $tmp2330 = *(&local0);
panda$core$Int64 $tmp2331 = (panda$core$Int64) {14};
panda$core$Int64 $tmp2332 = (panda$core$Int64) {6};
int64_t $tmp2333 = $tmp2332.value;
$tmp2330[$tmp2333] = $tmp2331;
// line 372
panda$core$Int64* $tmp2334 = *(&local0);
panda$core$Int64 $tmp2335 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2336 = (panda$core$Int64) {7};
int64_t $tmp2337 = $tmp2336.value;
$tmp2334[$tmp2337] = $tmp2335;
// line 373
panda$core$Int64* $tmp2338 = *(&local0);
panda$core$Int64 $tmp2339 = (panda$core$Int64) {4};
panda$core$Int64 $tmp2340 = (panda$core$Int64) {8};
int64_t $tmp2341 = $tmp2340.value;
$tmp2338[$tmp2341] = $tmp2339;
// line 374
panda$core$Int64* $tmp2342 = *(&local0);
panda$core$Int64 $tmp2343 = (panda$core$Int64) {5};
panda$core$Int64 $tmp2344 = (panda$core$Int64) {9};
int64_t $tmp2345 = $tmp2344.value;
$tmp2342[$tmp2345] = $tmp2343;
// line 375
panda$core$Int64* $tmp2346 = *(&local0);
panda$core$Int64 $tmp2347 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2348 = (panda$core$Int64) {10};
int64_t $tmp2349 = $tmp2348.value;
$tmp2346[$tmp2349] = $tmp2347;
// line 376
panda$core$Int64* $tmp2350 = *(&local0);
panda$core$Int64 $tmp2351 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2352 = (panda$core$Int64) {11};
int64_t $tmp2353 = $tmp2352.value;
$tmp2350[$tmp2353] = $tmp2351;
// line 377
panda$core$Int64* $tmp2354 = *(&local0);
panda$core$Int64 $tmp2355 = (panda$core$Int64) {5};
panda$core$Int64 $tmp2356 = (panda$core$Int64) {12};
int64_t $tmp2357 = $tmp2356.value;
$tmp2354[$tmp2357] = $tmp2355;
// line 378
panda$core$Int64* $tmp2358 = *(&local0);
panda$core$Int64 $tmp2359 = (panda$core$Int64) {15};
panda$core$Int64 $tmp2360 = (panda$core$Int64) {13};
int64_t $tmp2361 = $tmp2360.value;
$tmp2358[$tmp2361] = $tmp2359;
// line 379
panda$core$Int64* $tmp2362 = *(&local0);
panda$core$Int64 $tmp2363 = (panda$core$Int64) {12};
panda$core$Int64 $tmp2364 = (panda$core$Int64) {14};
int64_t $tmp2365 = $tmp2364.value;
$tmp2362[$tmp2365] = $tmp2363;
// line 380
panda$core$Int64* $tmp2366 = *(&local0);
panda$core$Int64 $tmp2367 = (panda$core$Int64) {13};
panda$core$Int64 $tmp2368 = (panda$core$Int64) {15};
int64_t $tmp2369 = $tmp2368.value;
$tmp2366[$tmp2369] = $tmp2367;
// line 381
panda$core$Int64* $tmp2370 = *(&local0);
panda$core$Int64 $tmp2371 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2372 = (panda$core$Int64) {16};
int64_t $tmp2373 = $tmp2372.value;
$tmp2370[$tmp2373] = $tmp2371;
// line 382
panda$core$Int64* $tmp2374 = *(&local0);
panda$core$Int64 $tmp2375 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2376 = (panda$core$Int64) {17};
int64_t $tmp2377 = $tmp2376.value;
$tmp2374[$tmp2377] = $tmp2375;
// line 383
panda$core$Int64* $tmp2378 = *(&local0);
panda$core$Int64 $tmp2379 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2380 = (panda$core$Int64) {18};
int64_t $tmp2381 = $tmp2380.value;
$tmp2378[$tmp2381] = $tmp2379;
// line 384
panda$core$Int64* $tmp2382 = *(&local0);
panda$core$Int64 $tmp2383 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2384 = (panda$core$Int64) {19};
int64_t $tmp2385 = $tmp2384.value;
$tmp2382[$tmp2385] = $tmp2383;
// line 385
panda$core$Int64* $tmp2386 = *(&local0);
panda$core$Int64 $tmp2387 = (panda$core$Int64) {8};
panda$core$Int64 $tmp2388 = (panda$core$Int64) {20};
int64_t $tmp2389 = $tmp2388.value;
$tmp2386[$tmp2389] = $tmp2387;
// line 386
panda$core$Int64* $tmp2390 = *(&local0);
panda$core$Int64 $tmp2391 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2392 = (panda$core$Int64) {21};
int64_t $tmp2393 = $tmp2392.value;
$tmp2390[$tmp2393] = $tmp2391;
// line 387
panda$core$Int64* $tmp2394 = *(&local0);
panda$core$Int64 $tmp2395 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2396 = (panda$core$Int64) {22};
int64_t $tmp2397 = $tmp2396.value;
$tmp2394[$tmp2397] = $tmp2395;
// line 388
panda$core$Int64* $tmp2398 = *(&local0);
panda$core$Int64 $tmp2399 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2400 = (panda$core$Int64) {23};
int64_t $tmp2401 = $tmp2400.value;
$tmp2398[$tmp2401] = $tmp2399;
// line 389
panda$core$Int64* $tmp2402 = *(&local0);
panda$core$Int64 $tmp2403 = (panda$core$Int64) {9};
panda$core$Int64 $tmp2404 = (panda$core$Int64) {24};
int64_t $tmp2405 = $tmp2404.value;
$tmp2402[$tmp2405] = $tmp2403;
// line 390
panda$core$Int64* $tmp2406 = *(&local0);
panda$core$Int64 $tmp2407 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2408 = (panda$core$Int64) {25};
int64_t $tmp2409 = $tmp2408.value;
$tmp2406[$tmp2409] = $tmp2407;
// line 391
panda$core$Int64* $tmp2410 = *(&local0);
panda$core$Int64 $tmp2411 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2412 = (panda$core$Int64) {26};
int64_t $tmp2413 = $tmp2412.value;
$tmp2410[$tmp2413] = $tmp2411;
// line 392
panda$core$Int64* $tmp2414 = *(&local0);
panda$core$Int64 $tmp2415 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2416 = (panda$core$Int64) {27};
int64_t $tmp2417 = $tmp2416.value;
$tmp2414[$tmp2417] = $tmp2415;
// line 393
panda$core$Int64* $tmp2418 = *(&local0);
panda$core$Int64 $tmp2419 = (panda$core$Int64) {7};
panda$core$Int64 $tmp2420 = (panda$core$Int64) {28};
int64_t $tmp2421 = $tmp2420.value;
$tmp2418[$tmp2421] = $tmp2419;
// line 394
panda$core$Int64* $tmp2422 = *(&local0);
panda$core$Int64 $tmp2423 = (panda$core$Int64) {10};
panda$core$Int64 $tmp2424 = (panda$core$Int64) {29};
int64_t $tmp2425 = $tmp2424.value;
$tmp2422[$tmp2425] = $tmp2423;
// line 395
panda$core$Int64* $tmp2426 = *(&local0);
panda$core$Int64 $tmp2427 = (panda$core$Int64) {11};
panda$core$Int64 $tmp2428 = (panda$core$Int64) {30};
int64_t $tmp2429 = $tmp2428.value;
$tmp2426[$tmp2429] = $tmp2427;
// line 396
panda$core$Int64* $tmp2430 = *(&local0);
return $tmp2430;

}
void org$pandalanguage$json$Lexer$cleanup(org$pandalanguage$json$Lexer* param0) {

// line 401
panda$core$Int64*** $tmp2431 = &param0->transitions;
panda$core$Int64** $tmp2432 = *$tmp2431;
panda$core$Int64 $tmp2433 = (panda$core$Int64) {0};
int64_t $tmp2434 = $tmp2433.value;
panda$core$Int64* $tmp2435 = $tmp2432[$tmp2434];
pandaFree($tmp2435);
// line 402
panda$core$Int64*** $tmp2436 = &param0->transitions;
panda$core$Int64** $tmp2437 = *$tmp2436;
panda$core$Int64 $tmp2438 = (panda$core$Int64) {9};
int64_t $tmp2439 = $tmp2438.value;
panda$core$Int64* $tmp2440 = $tmp2437[$tmp2439];
pandaFree($tmp2440);
// line 403
panda$core$Int64*** $tmp2441 = &param0->transitions;
panda$core$Int64** $tmp2442 = *$tmp2441;
panda$core$Int64 $tmp2443 = (panda$core$Int64) {34};
int64_t $tmp2444 = $tmp2443.value;
panda$core$Int64* $tmp2445 = $tmp2442[$tmp2444];
pandaFree($tmp2445);
// line 404
panda$core$Int64*** $tmp2446 = &param0->transitions;
panda$core$Int64** $tmp2447 = *$tmp2446;
panda$core$Int64 $tmp2448 = (panda$core$Int64) {43};
int64_t $tmp2449 = $tmp2448.value;
panda$core$Int64* $tmp2450 = $tmp2447[$tmp2449];
pandaFree($tmp2450);
// line 405
panda$core$Int64*** $tmp2451 = &param0->transitions;
panda$core$Int64** $tmp2452 = *$tmp2451;
panda$core$Int64 $tmp2453 = (panda$core$Int64) {44};
int64_t $tmp2454 = $tmp2453.value;
panda$core$Int64* $tmp2455 = $tmp2452[$tmp2454];
pandaFree($tmp2455);
// line 406
panda$core$Int64*** $tmp2456 = &param0->transitions;
panda$core$Int64** $tmp2457 = *$tmp2456;
panda$core$Int64 $tmp2458 = (panda$core$Int64) {45};
int64_t $tmp2459 = $tmp2458.value;
panda$core$Int64* $tmp2460 = $tmp2457[$tmp2459];
pandaFree($tmp2460);
// line 407
panda$core$Int64*** $tmp2461 = &param0->transitions;
panda$core$Int64** $tmp2462 = *$tmp2461;
panda$core$Int64 $tmp2463 = (panda$core$Int64) {46};
int64_t $tmp2464 = $tmp2463.value;
panda$core$Int64* $tmp2465 = $tmp2462[$tmp2464];
pandaFree($tmp2465);
// line 408
panda$core$Int64*** $tmp2466 = &param0->transitions;
panda$core$Int64** $tmp2467 = *$tmp2466;
panda$core$Int64 $tmp2468 = (panda$core$Int64) {48};
int64_t $tmp2469 = $tmp2468.value;
panda$core$Int64* $tmp2470 = $tmp2467[$tmp2469];
pandaFree($tmp2470);
// line 409
panda$core$Int64*** $tmp2471 = &param0->transitions;
panda$core$Int64** $tmp2472 = *$tmp2471;
panda$core$Int64 $tmp2473 = (panda$core$Int64) {58};
int64_t $tmp2474 = $tmp2473.value;
panda$core$Int64* $tmp2475 = $tmp2472[$tmp2474];
pandaFree($tmp2475);
// line 410
panda$core$Int64*** $tmp2476 = &param0->transitions;
panda$core$Int64** $tmp2477 = *$tmp2476;
panda$core$Int64 $tmp2478 = (panda$core$Int64) {69};
int64_t $tmp2479 = $tmp2478.value;
panda$core$Int64* $tmp2480 = $tmp2477[$tmp2479];
pandaFree($tmp2480);
// line 411
panda$core$Int64*** $tmp2481 = &param0->transitions;
panda$core$Int64** $tmp2482 = *$tmp2481;
panda$core$Int64 $tmp2483 = (panda$core$Int64) {91};
int64_t $tmp2484 = $tmp2483.value;
panda$core$Int64* $tmp2485 = $tmp2482[$tmp2484];
pandaFree($tmp2485);
// line 412
panda$core$Int64*** $tmp2486 = &param0->transitions;
panda$core$Int64** $tmp2487 = *$tmp2486;
panda$core$Int64 $tmp2488 = (panda$core$Int64) {92};
int64_t $tmp2489 = $tmp2488.value;
panda$core$Int64* $tmp2490 = $tmp2487[$tmp2489];
pandaFree($tmp2490);
// line 413
panda$core$Int64*** $tmp2491 = &param0->transitions;
panda$core$Int64** $tmp2492 = *$tmp2491;
panda$core$Int64 $tmp2493 = (panda$core$Int64) {93};
int64_t $tmp2494 = $tmp2493.value;
panda$core$Int64* $tmp2495 = $tmp2492[$tmp2494];
pandaFree($tmp2495);
// line 414
panda$core$Int64*** $tmp2496 = &param0->transitions;
panda$core$Int64** $tmp2497 = *$tmp2496;
panda$core$Int64 $tmp2498 = (panda$core$Int64) {97};
int64_t $tmp2499 = $tmp2498.value;
panda$core$Int64* $tmp2500 = $tmp2497[$tmp2499];
pandaFree($tmp2500);
// line 415
panda$core$Int64*** $tmp2501 = &param0->transitions;
panda$core$Int64** $tmp2502 = *$tmp2501;
panda$core$Int64 $tmp2503 = (panda$core$Int64) {98};
int64_t $tmp2504 = $tmp2503.value;
panda$core$Int64* $tmp2505 = $tmp2502[$tmp2504];
pandaFree($tmp2505);
// line 416
panda$core$Int64*** $tmp2506 = &param0->transitions;
panda$core$Int64** $tmp2507 = *$tmp2506;
panda$core$Int64 $tmp2508 = (panda$core$Int64) {101};
int64_t $tmp2509 = $tmp2508.value;
panda$core$Int64* $tmp2510 = $tmp2507[$tmp2509];
pandaFree($tmp2510);
// line 417
panda$core$Int64*** $tmp2511 = &param0->transitions;
panda$core$Int64** $tmp2512 = *$tmp2511;
panda$core$Int64 $tmp2513 = (panda$core$Int64) {102};
int64_t $tmp2514 = $tmp2513.value;
panda$core$Int64* $tmp2515 = $tmp2512[$tmp2514];
pandaFree($tmp2515);
// line 418
panda$core$Int64*** $tmp2516 = &param0->transitions;
panda$core$Int64** $tmp2517 = *$tmp2516;
panda$core$Int64 $tmp2518 = (panda$core$Int64) {108};
int64_t $tmp2519 = $tmp2518.value;
panda$core$Int64* $tmp2520 = $tmp2517[$tmp2519];
pandaFree($tmp2520);
// line 419
panda$core$Int64*** $tmp2521 = &param0->transitions;
panda$core$Int64** $tmp2522 = *$tmp2521;
panda$core$Int64 $tmp2523 = (panda$core$Int64) {110};
int64_t $tmp2524 = $tmp2523.value;
panda$core$Int64* $tmp2525 = $tmp2522[$tmp2524];
pandaFree($tmp2525);
// line 420
panda$core$Int64*** $tmp2526 = &param0->transitions;
panda$core$Int64** $tmp2527 = *$tmp2526;
panda$core$Int64 $tmp2528 = (panda$core$Int64) {114};
int64_t $tmp2529 = $tmp2528.value;
panda$core$Int64* $tmp2530 = $tmp2527[$tmp2529];
pandaFree($tmp2530);
// line 421
panda$core$Int64*** $tmp2531 = &param0->transitions;
panda$core$Int64** $tmp2532 = *$tmp2531;
panda$core$Int64 $tmp2533 = (panda$core$Int64) {115};
int64_t $tmp2534 = $tmp2533.value;
panda$core$Int64* $tmp2535 = $tmp2532[$tmp2534];
pandaFree($tmp2535);
// line 422
panda$core$Int64*** $tmp2536 = &param0->transitions;
panda$core$Int64** $tmp2537 = *$tmp2536;
panda$core$Int64 $tmp2538 = (panda$core$Int64) {116};
int64_t $tmp2539 = $tmp2538.value;
panda$core$Int64* $tmp2540 = $tmp2537[$tmp2539];
pandaFree($tmp2540);
// line 423
panda$core$Int64*** $tmp2541 = &param0->transitions;
panda$core$Int64** $tmp2542 = *$tmp2541;
panda$core$Int64 $tmp2543 = (panda$core$Int64) {117};
int64_t $tmp2544 = $tmp2543.value;
panda$core$Int64* $tmp2545 = $tmp2542[$tmp2544];
pandaFree($tmp2545);
// line 424
panda$core$Int64*** $tmp2546 = &param0->transitions;
panda$core$Int64** $tmp2547 = *$tmp2546;
panda$core$Int64 $tmp2548 = (panda$core$Int64) {123};
int64_t $tmp2549 = $tmp2548.value;
panda$core$Int64* $tmp2550 = $tmp2547[$tmp2549];
pandaFree($tmp2550);
// line 425
panda$core$Int64*** $tmp2551 = &param0->transitions;
panda$core$Int64** $tmp2552 = *$tmp2551;
panda$core$Int64 $tmp2553 = (panda$core$Int64) {125};
int64_t $tmp2554 = $tmp2553.value;
panda$core$Int64* $tmp2555 = $tmp2552[$tmp2554];
pandaFree($tmp2555);
// line 426
panda$core$Int64*** $tmp2556 = &param0->transitions;
panda$core$Int64** $tmp2557 = *$tmp2556;
pandaFree($tmp2557);
// line 427
panda$core$Int64** $tmp2558 = &param0->accepts;
panda$core$Int64* $tmp2559 = *$tmp2558;
pandaFree($tmp2559);
org$pandalanguage$plex$runtime$DFA** $tmp2560 = &param0->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp2561 = *$tmp2560;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
return;

}
org$pandalanguage$json$Token org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token(org$pandalanguage$json$Lexer* param0) {

org$pandalanguage$plex$runtime$RawToken local0;
// line 431
org$pandalanguage$plex$runtime$DFA** $tmp2562 = &param0->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp2563 = *$tmp2562;
org$pandalanguage$plex$runtime$RawToken $tmp2564 = org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken($tmp2563);
*(&local0) = $tmp2564;
// line 432
org$pandalanguage$plex$runtime$RawToken $tmp2565 = *(&local0);
panda$core$Int64 $tmp2566 = $tmp2565.kind;
org$pandalanguage$json$Token$Kind $tmp2567 = org$pandalanguage$json$Token$Kind$init$panda$core$Int64($tmp2566);
org$pandalanguage$plex$runtime$RawToken $tmp2568 = *(&local0);
panda$core$String$Index $tmp2569 = $tmp2568.start;
org$pandalanguage$plex$runtime$RawToken $tmp2570 = *(&local0);
panda$core$String$Index $tmp2571 = $tmp2570.end;
org$pandalanguage$plex$runtime$RawToken $tmp2572 = *(&local0);
panda$core$Int64 $tmp2573 = $tmp2572.line;
org$pandalanguage$plex$runtime$RawToken $tmp2574 = *(&local0);
panda$core$Int64 $tmp2575 = $tmp2574.column;
org$pandalanguage$json$Position $tmp2576 = org$pandalanguage$json$Position$init$panda$core$Int64$panda$core$Int64($tmp2573, $tmp2575);
org$pandalanguage$json$Token $tmp2577 = org$pandalanguage$json$Token$init$org$pandalanguage$json$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$json$Position($tmp2567, $tmp2569, $tmp2571, $tmp2576);
return $tmp2577;

}
void org$pandalanguage$json$Lexer$init(org$pandalanguage$json$Lexer* param0) {

// line 15
panda$core$Int64** $tmp2578 = org$pandalanguage$json$Lexer$getTransitions$R$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT();
panda$core$Int64*** $tmp2579 = &param0->transitions;
*$tmp2579 = $tmp2578;
// line 17
panda$core$Int64* $tmp2580 = org$pandalanguage$json$Lexer$getAccepts$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT();
panda$core$Int64** $tmp2581 = &param0->accepts;
*$tmp2581 = $tmp2580;
return;

}

