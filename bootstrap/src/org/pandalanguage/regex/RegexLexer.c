#include "org/pandalanguage/regex/RegexLexer.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/regex/RegexToken.h"
#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "org/pandalanguage/regex/RegexToken/Kind.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/Position.h"


static panda$core$String $s1;
org$pandalanguage$regex$RegexLexer$class_type org$pandalanguage$regex$RegexLexer$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$regex$RegexLexer$cleanup, org$pandalanguage$regex$RegexLexer$start$panda$core$String, org$pandalanguage$regex$RegexLexer$next$R$org$pandalanguage$regex$RegexToken} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x4c\x65\x78\x65\x72", 34, -5515257698570645691, NULL };

void org$pandalanguage$regex$RegexLexer$start$panda$core$String(org$pandalanguage$regex$RegexLexer* param0, panda$core$String* param1) {

// line 20
org$pandalanguage$plex$runtime$DFA* $tmp2 = (org$pandalanguage$plex$runtime$DFA*) pandaObjectAlloc(80, (panda$core$Class*) &org$pandalanguage$plex$runtime$DFA$class);
panda$core$Int64 $tmp3 = (panda$core$Int64) {20};
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
panda$core$Int64* org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT(panda$core$Int64 param0, panda$core$Int64 param1) {

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
panda$core$Int64** org$pandalanguage$regex$RegexLexer$getTransitions$R$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT() {

panda$core$Int64** local0;
// line 34
panda$core$Int64 $tmp56 = (panda$core$Int64) {256};
int64_t $tmp57 = $tmp56.value;
panda$core$Int64** $tmp58 = ((panda$core$Int64**) pandaZAlloc($tmp57 * 8));
*(&local0) = $tmp58;
// line 35
panda$core$Int64** $tmp59 = *(&local0);
panda$core$Int64 $tmp60 = (panda$core$Int64) {20};
panda$core$Int64 $tmp61 = (panda$core$Int64) {0};
panda$core$Int64* $tmp62 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp60, $tmp61);
panda$core$Int64 $tmp63 = (panda$core$Int64) {0};
int64_t $tmp64 = $tmp63.value;
$tmp59[$tmp64] = $tmp62;
// line 36
panda$core$Int64** $tmp65 = *(&local0);
panda$core$Int64 $tmp66 = (panda$core$Int64) {0};
int64_t $tmp67 = $tmp66.value;
panda$core$Int64* $tmp68 = $tmp65[$tmp67];
panda$core$Int64 $tmp69 = (panda$core$Int64) {2};
panda$core$Int64 $tmp70 = (panda$core$Int64) {1};
int64_t $tmp71 = $tmp70.value;
$tmp68[$tmp71] = $tmp69;
// line 37
panda$core$Int64** $tmp72 = *(&local0);
panda$core$Int64 $tmp73 = (panda$core$Int64) {0};
int64_t $tmp74 = $tmp73.value;
panda$core$Int64* $tmp75 = $tmp72[$tmp74];
panda$core$Int64 $tmp76 = (panda$core$Int64) {2};
panda$core$Int64 $tmp77 = (panda$core$Int64) {14};
int64_t $tmp78 = $tmp77.value;
$tmp75[$tmp78] = $tmp76;
// line 38
panda$core$Int64** $tmp79 = *(&local0);
panda$core$Int64** $tmp80 = *(&local0);
panda$core$Int64 $tmp81 = (panda$core$Int64) {0};
int64_t $tmp82 = $tmp81.value;
panda$core$Int64* $tmp83 = $tmp80[$tmp82];
panda$core$Int64 $tmp84 = (panda$core$Int64) {1};
int64_t $tmp85 = $tmp84.value;
$tmp79[$tmp85] = $tmp83;
// line 39
panda$core$Int64** $tmp86 = *(&local0);
panda$core$Int64** $tmp87 = *(&local0);
panda$core$Int64 $tmp88 = (panda$core$Int64) {0};
int64_t $tmp89 = $tmp88.value;
panda$core$Int64* $tmp90 = $tmp87[$tmp89];
panda$core$Int64 $tmp91 = (panda$core$Int64) {2};
int64_t $tmp92 = $tmp91.value;
$tmp86[$tmp92] = $tmp90;
// line 40
panda$core$Int64** $tmp93 = *(&local0);
panda$core$Int64** $tmp94 = *(&local0);
panda$core$Int64 $tmp95 = (panda$core$Int64) {0};
int64_t $tmp96 = $tmp95.value;
panda$core$Int64* $tmp97 = $tmp94[$tmp96];
panda$core$Int64 $tmp98 = (panda$core$Int64) {3};
int64_t $tmp99 = $tmp98.value;
$tmp93[$tmp99] = $tmp97;
// line 41
panda$core$Int64** $tmp100 = *(&local0);
panda$core$Int64** $tmp101 = *(&local0);
panda$core$Int64 $tmp102 = (panda$core$Int64) {0};
int64_t $tmp103 = $tmp102.value;
panda$core$Int64* $tmp104 = $tmp101[$tmp103];
panda$core$Int64 $tmp105 = (panda$core$Int64) {4};
int64_t $tmp106 = $tmp105.value;
$tmp100[$tmp106] = $tmp104;
// line 42
panda$core$Int64** $tmp107 = *(&local0);
panda$core$Int64** $tmp108 = *(&local0);
panda$core$Int64 $tmp109 = (panda$core$Int64) {0};
int64_t $tmp110 = $tmp109.value;
panda$core$Int64* $tmp111 = $tmp108[$tmp110];
panda$core$Int64 $tmp112 = (panda$core$Int64) {5};
int64_t $tmp113 = $tmp112.value;
$tmp107[$tmp113] = $tmp111;
// line 43
panda$core$Int64** $tmp114 = *(&local0);
panda$core$Int64** $tmp115 = *(&local0);
panda$core$Int64 $tmp116 = (panda$core$Int64) {0};
int64_t $tmp117 = $tmp116.value;
panda$core$Int64* $tmp118 = $tmp115[$tmp117];
panda$core$Int64 $tmp119 = (panda$core$Int64) {6};
int64_t $tmp120 = $tmp119.value;
$tmp114[$tmp120] = $tmp118;
// line 44
panda$core$Int64** $tmp121 = *(&local0);
panda$core$Int64** $tmp122 = *(&local0);
panda$core$Int64 $tmp123 = (panda$core$Int64) {0};
int64_t $tmp124 = $tmp123.value;
panda$core$Int64* $tmp125 = $tmp122[$tmp124];
panda$core$Int64 $tmp126 = (panda$core$Int64) {7};
int64_t $tmp127 = $tmp126.value;
$tmp121[$tmp127] = $tmp125;
// line 45
panda$core$Int64** $tmp128 = *(&local0);
panda$core$Int64** $tmp129 = *(&local0);
panda$core$Int64 $tmp130 = (panda$core$Int64) {0};
int64_t $tmp131 = $tmp130.value;
panda$core$Int64* $tmp132 = $tmp129[$tmp131];
panda$core$Int64 $tmp133 = (panda$core$Int64) {8};
int64_t $tmp134 = $tmp133.value;
$tmp128[$tmp134] = $tmp132;
// line 46
panda$core$Int64** $tmp135 = *(&local0);
panda$core$Int64** $tmp136 = *(&local0);
panda$core$Int64 $tmp137 = (panda$core$Int64) {0};
int64_t $tmp138 = $tmp137.value;
panda$core$Int64* $tmp139 = $tmp136[$tmp138];
panda$core$Int64 $tmp140 = (panda$core$Int64) {9};
int64_t $tmp141 = $tmp140.value;
$tmp135[$tmp141] = $tmp139;
// line 47
panda$core$Int64** $tmp142 = *(&local0);
panda$core$Int64 $tmp143 = (panda$core$Int64) {20};
panda$core$Int64 $tmp144 = (panda$core$Int64) {0};
panda$core$Int64* $tmp145 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp143, $tmp144);
panda$core$Int64 $tmp146 = (panda$core$Int64) {10};
int64_t $tmp147 = $tmp146.value;
$tmp142[$tmp147] = $tmp145;
// line 48
panda$core$Int64** $tmp148 = *(&local0);
panda$core$Int64 $tmp149 = (panda$core$Int64) {10};
int64_t $tmp150 = $tmp149.value;
panda$core$Int64* $tmp151 = $tmp148[$tmp150];
panda$core$Int64 $tmp152 = (panda$core$Int64) {2};
panda$core$Int64 $tmp153 = (panda$core$Int64) {1};
int64_t $tmp154 = $tmp153.value;
$tmp151[$tmp154] = $tmp152;
// line 49
panda$core$Int64** $tmp155 = *(&local0);
panda$core$Int64** $tmp156 = *(&local0);
panda$core$Int64 $tmp157 = (panda$core$Int64) {0};
int64_t $tmp158 = $tmp157.value;
panda$core$Int64* $tmp159 = $tmp156[$tmp158];
panda$core$Int64 $tmp160 = (panda$core$Int64) {11};
int64_t $tmp161 = $tmp160.value;
$tmp155[$tmp161] = $tmp159;
// line 50
panda$core$Int64** $tmp162 = *(&local0);
panda$core$Int64** $tmp163 = *(&local0);
panda$core$Int64 $tmp164 = (panda$core$Int64) {0};
int64_t $tmp165 = $tmp164.value;
panda$core$Int64* $tmp166 = $tmp163[$tmp165];
panda$core$Int64 $tmp167 = (panda$core$Int64) {12};
int64_t $tmp168 = $tmp167.value;
$tmp162[$tmp168] = $tmp166;
// line 51
panda$core$Int64** $tmp169 = *(&local0);
panda$core$Int64** $tmp170 = *(&local0);
panda$core$Int64 $tmp171 = (panda$core$Int64) {0};
int64_t $tmp172 = $tmp171.value;
panda$core$Int64* $tmp173 = $tmp170[$tmp172];
panda$core$Int64 $tmp174 = (panda$core$Int64) {13};
int64_t $tmp175 = $tmp174.value;
$tmp169[$tmp175] = $tmp173;
// line 52
panda$core$Int64** $tmp176 = *(&local0);
panda$core$Int64** $tmp177 = *(&local0);
panda$core$Int64 $tmp178 = (panda$core$Int64) {0};
int64_t $tmp179 = $tmp178.value;
panda$core$Int64* $tmp180 = $tmp177[$tmp179];
panda$core$Int64 $tmp181 = (panda$core$Int64) {14};
int64_t $tmp182 = $tmp181.value;
$tmp176[$tmp182] = $tmp180;
// line 53
panda$core$Int64** $tmp183 = *(&local0);
panda$core$Int64** $tmp184 = *(&local0);
panda$core$Int64 $tmp185 = (panda$core$Int64) {0};
int64_t $tmp186 = $tmp185.value;
panda$core$Int64* $tmp187 = $tmp184[$tmp186];
panda$core$Int64 $tmp188 = (panda$core$Int64) {15};
int64_t $tmp189 = $tmp188.value;
$tmp183[$tmp189] = $tmp187;
// line 54
panda$core$Int64** $tmp190 = *(&local0);
panda$core$Int64** $tmp191 = *(&local0);
panda$core$Int64 $tmp192 = (panda$core$Int64) {0};
int64_t $tmp193 = $tmp192.value;
panda$core$Int64* $tmp194 = $tmp191[$tmp193];
panda$core$Int64 $tmp195 = (panda$core$Int64) {16};
int64_t $tmp196 = $tmp195.value;
$tmp190[$tmp196] = $tmp194;
// line 55
panda$core$Int64** $tmp197 = *(&local0);
panda$core$Int64** $tmp198 = *(&local0);
panda$core$Int64 $tmp199 = (panda$core$Int64) {0};
int64_t $tmp200 = $tmp199.value;
panda$core$Int64* $tmp201 = $tmp198[$tmp200];
panda$core$Int64 $tmp202 = (panda$core$Int64) {17};
int64_t $tmp203 = $tmp202.value;
$tmp197[$tmp203] = $tmp201;
// line 56
panda$core$Int64** $tmp204 = *(&local0);
panda$core$Int64** $tmp205 = *(&local0);
panda$core$Int64 $tmp206 = (panda$core$Int64) {0};
int64_t $tmp207 = $tmp206.value;
panda$core$Int64* $tmp208 = $tmp205[$tmp207];
panda$core$Int64 $tmp209 = (panda$core$Int64) {18};
int64_t $tmp210 = $tmp209.value;
$tmp204[$tmp210] = $tmp208;
// line 57
panda$core$Int64** $tmp211 = *(&local0);
panda$core$Int64** $tmp212 = *(&local0);
panda$core$Int64 $tmp213 = (panda$core$Int64) {0};
int64_t $tmp214 = $tmp213.value;
panda$core$Int64* $tmp215 = $tmp212[$tmp214];
panda$core$Int64 $tmp216 = (panda$core$Int64) {19};
int64_t $tmp217 = $tmp216.value;
$tmp211[$tmp217] = $tmp215;
// line 58
panda$core$Int64** $tmp218 = *(&local0);
panda$core$Int64** $tmp219 = *(&local0);
panda$core$Int64 $tmp220 = (panda$core$Int64) {0};
int64_t $tmp221 = $tmp220.value;
panda$core$Int64* $tmp222 = $tmp219[$tmp221];
panda$core$Int64 $tmp223 = (panda$core$Int64) {20};
int64_t $tmp224 = $tmp223.value;
$tmp218[$tmp224] = $tmp222;
// line 59
panda$core$Int64** $tmp225 = *(&local0);
panda$core$Int64** $tmp226 = *(&local0);
panda$core$Int64 $tmp227 = (panda$core$Int64) {0};
int64_t $tmp228 = $tmp227.value;
panda$core$Int64* $tmp229 = $tmp226[$tmp228];
panda$core$Int64 $tmp230 = (panda$core$Int64) {21};
int64_t $tmp231 = $tmp230.value;
$tmp225[$tmp231] = $tmp229;
// line 60
panda$core$Int64** $tmp232 = *(&local0);
panda$core$Int64** $tmp233 = *(&local0);
panda$core$Int64 $tmp234 = (panda$core$Int64) {0};
int64_t $tmp235 = $tmp234.value;
panda$core$Int64* $tmp236 = $tmp233[$tmp235];
panda$core$Int64 $tmp237 = (panda$core$Int64) {22};
int64_t $tmp238 = $tmp237.value;
$tmp232[$tmp238] = $tmp236;
// line 61
panda$core$Int64** $tmp239 = *(&local0);
panda$core$Int64** $tmp240 = *(&local0);
panda$core$Int64 $tmp241 = (panda$core$Int64) {0};
int64_t $tmp242 = $tmp241.value;
panda$core$Int64* $tmp243 = $tmp240[$tmp242];
panda$core$Int64 $tmp244 = (panda$core$Int64) {23};
int64_t $tmp245 = $tmp244.value;
$tmp239[$tmp245] = $tmp243;
// line 62
panda$core$Int64** $tmp246 = *(&local0);
panda$core$Int64** $tmp247 = *(&local0);
panda$core$Int64 $tmp248 = (panda$core$Int64) {0};
int64_t $tmp249 = $tmp248.value;
panda$core$Int64* $tmp250 = $tmp247[$tmp249];
panda$core$Int64 $tmp251 = (panda$core$Int64) {24};
int64_t $tmp252 = $tmp251.value;
$tmp246[$tmp252] = $tmp250;
// line 63
panda$core$Int64** $tmp253 = *(&local0);
panda$core$Int64** $tmp254 = *(&local0);
panda$core$Int64 $tmp255 = (panda$core$Int64) {0};
int64_t $tmp256 = $tmp255.value;
panda$core$Int64* $tmp257 = $tmp254[$tmp256];
panda$core$Int64 $tmp258 = (panda$core$Int64) {25};
int64_t $tmp259 = $tmp258.value;
$tmp253[$tmp259] = $tmp257;
// line 64
panda$core$Int64** $tmp260 = *(&local0);
panda$core$Int64** $tmp261 = *(&local0);
panda$core$Int64 $tmp262 = (panda$core$Int64) {0};
int64_t $tmp263 = $tmp262.value;
panda$core$Int64* $tmp264 = $tmp261[$tmp263];
panda$core$Int64 $tmp265 = (panda$core$Int64) {26};
int64_t $tmp266 = $tmp265.value;
$tmp260[$tmp266] = $tmp264;
// line 65
panda$core$Int64** $tmp267 = *(&local0);
panda$core$Int64** $tmp268 = *(&local0);
panda$core$Int64 $tmp269 = (panda$core$Int64) {0};
int64_t $tmp270 = $tmp269.value;
panda$core$Int64* $tmp271 = $tmp268[$tmp270];
panda$core$Int64 $tmp272 = (panda$core$Int64) {27};
int64_t $tmp273 = $tmp272.value;
$tmp267[$tmp273] = $tmp271;
// line 66
panda$core$Int64** $tmp274 = *(&local0);
panda$core$Int64** $tmp275 = *(&local0);
panda$core$Int64 $tmp276 = (panda$core$Int64) {0};
int64_t $tmp277 = $tmp276.value;
panda$core$Int64* $tmp278 = $tmp275[$tmp277];
panda$core$Int64 $tmp279 = (panda$core$Int64) {28};
int64_t $tmp280 = $tmp279.value;
$tmp274[$tmp280] = $tmp278;
// line 67
panda$core$Int64** $tmp281 = *(&local0);
panda$core$Int64** $tmp282 = *(&local0);
panda$core$Int64 $tmp283 = (panda$core$Int64) {0};
int64_t $tmp284 = $tmp283.value;
panda$core$Int64* $tmp285 = $tmp282[$tmp284];
panda$core$Int64 $tmp286 = (panda$core$Int64) {29};
int64_t $tmp287 = $tmp286.value;
$tmp281[$tmp287] = $tmp285;
// line 68
panda$core$Int64** $tmp288 = *(&local0);
panda$core$Int64** $tmp289 = *(&local0);
panda$core$Int64 $tmp290 = (panda$core$Int64) {0};
int64_t $tmp291 = $tmp290.value;
panda$core$Int64* $tmp292 = $tmp289[$tmp291];
panda$core$Int64 $tmp293 = (panda$core$Int64) {30};
int64_t $tmp294 = $tmp293.value;
$tmp288[$tmp294] = $tmp292;
// line 69
panda$core$Int64** $tmp295 = *(&local0);
panda$core$Int64** $tmp296 = *(&local0);
panda$core$Int64 $tmp297 = (panda$core$Int64) {0};
int64_t $tmp298 = $tmp297.value;
panda$core$Int64* $tmp299 = $tmp296[$tmp298];
panda$core$Int64 $tmp300 = (panda$core$Int64) {31};
int64_t $tmp301 = $tmp300.value;
$tmp295[$tmp301] = $tmp299;
// line 70
panda$core$Int64** $tmp302 = *(&local0);
panda$core$Int64** $tmp303 = *(&local0);
panda$core$Int64 $tmp304 = (panda$core$Int64) {0};
int64_t $tmp305 = $tmp304.value;
panda$core$Int64* $tmp306 = $tmp303[$tmp305];
panda$core$Int64 $tmp307 = (panda$core$Int64) {32};
int64_t $tmp308 = $tmp307.value;
$tmp302[$tmp308] = $tmp306;
// line 71
panda$core$Int64** $tmp309 = *(&local0);
panda$core$Int64** $tmp310 = *(&local0);
panda$core$Int64 $tmp311 = (panda$core$Int64) {0};
int64_t $tmp312 = $tmp311.value;
panda$core$Int64* $tmp313 = $tmp310[$tmp312];
panda$core$Int64 $tmp314 = (panda$core$Int64) {33};
int64_t $tmp315 = $tmp314.value;
$tmp309[$tmp315] = $tmp313;
// line 72
panda$core$Int64** $tmp316 = *(&local0);
panda$core$Int64** $tmp317 = *(&local0);
panda$core$Int64 $tmp318 = (panda$core$Int64) {0};
int64_t $tmp319 = $tmp318.value;
panda$core$Int64* $tmp320 = $tmp317[$tmp319];
panda$core$Int64 $tmp321 = (panda$core$Int64) {34};
int64_t $tmp322 = $tmp321.value;
$tmp316[$tmp322] = $tmp320;
// line 73
panda$core$Int64** $tmp323 = *(&local0);
panda$core$Int64** $tmp324 = *(&local0);
panda$core$Int64 $tmp325 = (panda$core$Int64) {0};
int64_t $tmp326 = $tmp325.value;
panda$core$Int64* $tmp327 = $tmp324[$tmp326];
panda$core$Int64 $tmp328 = (panda$core$Int64) {35};
int64_t $tmp329 = $tmp328.value;
$tmp323[$tmp329] = $tmp327;
// line 74
panda$core$Int64** $tmp330 = *(&local0);
panda$core$Int64 $tmp331 = (panda$core$Int64) {20};
panda$core$Int64 $tmp332 = (panda$core$Int64) {0};
panda$core$Int64* $tmp333 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp331, $tmp332);
panda$core$Int64 $tmp334 = (panda$core$Int64) {36};
int64_t $tmp335 = $tmp334.value;
$tmp330[$tmp335] = $tmp333;
// line 75
panda$core$Int64** $tmp336 = *(&local0);
panda$core$Int64 $tmp337 = (panda$core$Int64) {36};
int64_t $tmp338 = $tmp337.value;
panda$core$Int64* $tmp339 = $tmp336[$tmp338];
panda$core$Int64 $tmp340 = (panda$core$Int64) {3};
panda$core$Int64 $tmp341 = (panda$core$Int64) {1};
int64_t $tmp342 = $tmp341.value;
$tmp339[$tmp342] = $tmp340;
// line 76
panda$core$Int64** $tmp343 = *(&local0);
panda$core$Int64 $tmp344 = (panda$core$Int64) {36};
int64_t $tmp345 = $tmp344.value;
panda$core$Int64* $tmp346 = $tmp343[$tmp345];
panda$core$Int64 $tmp347 = (panda$core$Int64) {2};
panda$core$Int64 $tmp348 = (panda$core$Int64) {14};
int64_t $tmp349 = $tmp348.value;
$tmp346[$tmp349] = $tmp347;
// line 77
panda$core$Int64** $tmp350 = *(&local0);
panda$core$Int64** $tmp351 = *(&local0);
panda$core$Int64 $tmp352 = (panda$core$Int64) {0};
int64_t $tmp353 = $tmp352.value;
panda$core$Int64* $tmp354 = $tmp351[$tmp353];
panda$core$Int64 $tmp355 = (panda$core$Int64) {37};
int64_t $tmp356 = $tmp355.value;
$tmp350[$tmp356] = $tmp354;
// line 78
panda$core$Int64** $tmp357 = *(&local0);
panda$core$Int64** $tmp358 = *(&local0);
panda$core$Int64 $tmp359 = (panda$core$Int64) {0};
int64_t $tmp360 = $tmp359.value;
panda$core$Int64* $tmp361 = $tmp358[$tmp360];
panda$core$Int64 $tmp362 = (panda$core$Int64) {38};
int64_t $tmp363 = $tmp362.value;
$tmp357[$tmp363] = $tmp361;
// line 79
panda$core$Int64** $tmp364 = *(&local0);
panda$core$Int64 $tmp365 = (panda$core$Int64) {20};
panda$core$Int64 $tmp366 = (panda$core$Int64) {0};
panda$core$Int64* $tmp367 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp365, $tmp366);
panda$core$Int64 $tmp368 = (panda$core$Int64) {39};
int64_t $tmp369 = $tmp368.value;
$tmp364[$tmp369] = $tmp367;
// line 80
panda$core$Int64** $tmp370 = *(&local0);
panda$core$Int64 $tmp371 = (panda$core$Int64) {39};
int64_t $tmp372 = $tmp371.value;
panda$core$Int64* $tmp373 = $tmp370[$tmp372];
panda$core$Int64 $tmp374 = (panda$core$Int64) {4};
panda$core$Int64 $tmp375 = (panda$core$Int64) {1};
int64_t $tmp376 = $tmp375.value;
$tmp373[$tmp376] = $tmp374;
// line 81
panda$core$Int64** $tmp377 = *(&local0);
panda$core$Int64 $tmp378 = (panda$core$Int64) {39};
int64_t $tmp379 = $tmp378.value;
panda$core$Int64* $tmp380 = $tmp377[$tmp379];
panda$core$Int64 $tmp381 = (panda$core$Int64) {2};
panda$core$Int64 $tmp382 = (panda$core$Int64) {14};
int64_t $tmp383 = $tmp382.value;
$tmp380[$tmp383] = $tmp381;
// line 82
panda$core$Int64** $tmp384 = *(&local0);
panda$core$Int64 $tmp385 = (panda$core$Int64) {20};
panda$core$Int64 $tmp386 = (panda$core$Int64) {0};
panda$core$Int64* $tmp387 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp385, $tmp386);
panda$core$Int64 $tmp388 = (panda$core$Int64) {40};
int64_t $tmp389 = $tmp388.value;
$tmp384[$tmp389] = $tmp387;
// line 83
panda$core$Int64** $tmp390 = *(&local0);
panda$core$Int64 $tmp391 = (panda$core$Int64) {40};
int64_t $tmp392 = $tmp391.value;
panda$core$Int64* $tmp393 = $tmp390[$tmp392];
panda$core$Int64 $tmp394 = (panda$core$Int64) {5};
panda$core$Int64 $tmp395 = (panda$core$Int64) {1};
int64_t $tmp396 = $tmp395.value;
$tmp393[$tmp396] = $tmp394;
// line 84
panda$core$Int64** $tmp397 = *(&local0);
panda$core$Int64 $tmp398 = (panda$core$Int64) {40};
int64_t $tmp399 = $tmp398.value;
panda$core$Int64* $tmp400 = $tmp397[$tmp399];
panda$core$Int64 $tmp401 = (panda$core$Int64) {2};
panda$core$Int64 $tmp402 = (panda$core$Int64) {14};
int64_t $tmp403 = $tmp402.value;
$tmp400[$tmp403] = $tmp401;
// line 85
panda$core$Int64** $tmp404 = *(&local0);
panda$core$Int64 $tmp405 = (panda$core$Int64) {20};
panda$core$Int64 $tmp406 = (panda$core$Int64) {0};
panda$core$Int64* $tmp407 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp405, $tmp406);
panda$core$Int64 $tmp408 = (panda$core$Int64) {41};
int64_t $tmp409 = $tmp408.value;
$tmp404[$tmp409] = $tmp407;
// line 86
panda$core$Int64** $tmp410 = *(&local0);
panda$core$Int64 $tmp411 = (panda$core$Int64) {41};
int64_t $tmp412 = $tmp411.value;
panda$core$Int64* $tmp413 = $tmp410[$tmp412];
panda$core$Int64 $tmp414 = (panda$core$Int64) {6};
panda$core$Int64 $tmp415 = (panda$core$Int64) {1};
int64_t $tmp416 = $tmp415.value;
$tmp413[$tmp416] = $tmp414;
// line 87
panda$core$Int64** $tmp417 = *(&local0);
panda$core$Int64 $tmp418 = (panda$core$Int64) {41};
int64_t $tmp419 = $tmp418.value;
panda$core$Int64* $tmp420 = $tmp417[$tmp419];
panda$core$Int64 $tmp421 = (panda$core$Int64) {2};
panda$core$Int64 $tmp422 = (panda$core$Int64) {14};
int64_t $tmp423 = $tmp422.value;
$tmp420[$tmp423] = $tmp421;
// line 88
panda$core$Int64** $tmp424 = *(&local0);
panda$core$Int64 $tmp425 = (panda$core$Int64) {20};
panda$core$Int64 $tmp426 = (panda$core$Int64) {0};
panda$core$Int64* $tmp427 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp425, $tmp426);
panda$core$Int64 $tmp428 = (panda$core$Int64) {42};
int64_t $tmp429 = $tmp428.value;
$tmp424[$tmp429] = $tmp427;
// line 89
panda$core$Int64** $tmp430 = *(&local0);
panda$core$Int64 $tmp431 = (panda$core$Int64) {42};
int64_t $tmp432 = $tmp431.value;
panda$core$Int64* $tmp433 = $tmp430[$tmp432];
panda$core$Int64 $tmp434 = (panda$core$Int64) {7};
panda$core$Int64 $tmp435 = (panda$core$Int64) {1};
int64_t $tmp436 = $tmp435.value;
$tmp433[$tmp436] = $tmp434;
// line 90
panda$core$Int64** $tmp437 = *(&local0);
panda$core$Int64 $tmp438 = (panda$core$Int64) {42};
int64_t $tmp439 = $tmp438.value;
panda$core$Int64* $tmp440 = $tmp437[$tmp439];
panda$core$Int64 $tmp441 = (panda$core$Int64) {2};
panda$core$Int64 $tmp442 = (panda$core$Int64) {14};
int64_t $tmp443 = $tmp442.value;
$tmp440[$tmp443] = $tmp441;
// line 91
panda$core$Int64** $tmp444 = *(&local0);
panda$core$Int64 $tmp445 = (panda$core$Int64) {20};
panda$core$Int64 $tmp446 = (panda$core$Int64) {0};
panda$core$Int64* $tmp447 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp445, $tmp446);
panda$core$Int64 $tmp448 = (panda$core$Int64) {43};
int64_t $tmp449 = $tmp448.value;
$tmp444[$tmp449] = $tmp447;
// line 92
panda$core$Int64** $tmp450 = *(&local0);
panda$core$Int64 $tmp451 = (panda$core$Int64) {43};
int64_t $tmp452 = $tmp451.value;
panda$core$Int64* $tmp453 = $tmp450[$tmp452];
panda$core$Int64 $tmp454 = (panda$core$Int64) {8};
panda$core$Int64 $tmp455 = (panda$core$Int64) {1};
int64_t $tmp456 = $tmp455.value;
$tmp453[$tmp456] = $tmp454;
// line 93
panda$core$Int64** $tmp457 = *(&local0);
panda$core$Int64 $tmp458 = (panda$core$Int64) {43};
int64_t $tmp459 = $tmp458.value;
panda$core$Int64* $tmp460 = $tmp457[$tmp459];
panda$core$Int64 $tmp461 = (panda$core$Int64) {2};
panda$core$Int64 $tmp462 = (panda$core$Int64) {14};
int64_t $tmp463 = $tmp462.value;
$tmp460[$tmp463] = $tmp461;
// line 94
panda$core$Int64** $tmp464 = *(&local0);
panda$core$Int64 $tmp465 = (panda$core$Int64) {20};
panda$core$Int64 $tmp466 = (panda$core$Int64) {0};
panda$core$Int64* $tmp467 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp465, $tmp466);
panda$core$Int64 $tmp468 = (panda$core$Int64) {44};
int64_t $tmp469 = $tmp468.value;
$tmp464[$tmp469] = $tmp467;
// line 95
panda$core$Int64** $tmp470 = *(&local0);
panda$core$Int64 $tmp471 = (panda$core$Int64) {44};
int64_t $tmp472 = $tmp471.value;
panda$core$Int64* $tmp473 = $tmp470[$tmp472];
panda$core$Int64 $tmp474 = (panda$core$Int64) {9};
panda$core$Int64 $tmp475 = (panda$core$Int64) {1};
int64_t $tmp476 = $tmp475.value;
$tmp473[$tmp476] = $tmp474;
// line 96
panda$core$Int64** $tmp477 = *(&local0);
panda$core$Int64 $tmp478 = (panda$core$Int64) {44};
int64_t $tmp479 = $tmp478.value;
panda$core$Int64* $tmp480 = $tmp477[$tmp479];
panda$core$Int64 $tmp481 = (panda$core$Int64) {2};
panda$core$Int64 $tmp482 = (panda$core$Int64) {14};
int64_t $tmp483 = $tmp482.value;
$tmp480[$tmp483] = $tmp481;
// line 97
panda$core$Int64** $tmp484 = *(&local0);
panda$core$Int64** $tmp485 = *(&local0);
panda$core$Int64 $tmp486 = (panda$core$Int64) {0};
int64_t $tmp487 = $tmp486.value;
panda$core$Int64* $tmp488 = $tmp485[$tmp487];
panda$core$Int64 $tmp489 = (panda$core$Int64) {45};
int64_t $tmp490 = $tmp489.value;
$tmp484[$tmp490] = $tmp488;
// line 98
panda$core$Int64** $tmp491 = *(&local0);
panda$core$Int64** $tmp492 = *(&local0);
panda$core$Int64 $tmp493 = (panda$core$Int64) {0};
int64_t $tmp494 = $tmp493.value;
panda$core$Int64* $tmp495 = $tmp492[$tmp494];
panda$core$Int64 $tmp496 = (panda$core$Int64) {46};
int64_t $tmp497 = $tmp496.value;
$tmp491[$tmp497] = $tmp495;
// line 99
panda$core$Int64** $tmp498 = *(&local0);
panda$core$Int64 $tmp499 = (panda$core$Int64) {20};
panda$core$Int64 $tmp500 = (panda$core$Int64) {0};
panda$core$Int64* $tmp501 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp499, $tmp500);
panda$core$Int64 $tmp502 = (panda$core$Int64) {47};
int64_t $tmp503 = $tmp502.value;
$tmp498[$tmp503] = $tmp501;
// line 100
panda$core$Int64** $tmp504 = *(&local0);
panda$core$Int64 $tmp505 = (panda$core$Int64) {47};
int64_t $tmp506 = $tmp505.value;
panda$core$Int64* $tmp507 = $tmp504[$tmp506];
panda$core$Int64 $tmp508 = (panda$core$Int64) {10};
panda$core$Int64 $tmp509 = (panda$core$Int64) {1};
int64_t $tmp510 = $tmp509.value;
$tmp507[$tmp510] = $tmp508;
// line 101
panda$core$Int64** $tmp511 = *(&local0);
panda$core$Int64 $tmp512 = (panda$core$Int64) {47};
int64_t $tmp513 = $tmp512.value;
panda$core$Int64* $tmp514 = $tmp511[$tmp513];
panda$core$Int64 $tmp515 = (panda$core$Int64) {2};
panda$core$Int64 $tmp516 = (panda$core$Int64) {14};
int64_t $tmp517 = $tmp516.value;
$tmp514[$tmp517] = $tmp515;
// line 102
panda$core$Int64** $tmp518 = *(&local0);
panda$core$Int64 $tmp519 = (panda$core$Int64) {20};
panda$core$Int64 $tmp520 = (panda$core$Int64) {0};
panda$core$Int64* $tmp521 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp519, $tmp520);
panda$core$Int64 $tmp522 = (panda$core$Int64) {48};
int64_t $tmp523 = $tmp522.value;
$tmp518[$tmp523] = $tmp521;
// line 103
panda$core$Int64** $tmp524 = *(&local0);
panda$core$Int64 $tmp525 = (panda$core$Int64) {48};
int64_t $tmp526 = $tmp525.value;
panda$core$Int64* $tmp527 = $tmp524[$tmp526];
panda$core$Int64 $tmp528 = (panda$core$Int64) {11};
panda$core$Int64 $tmp529 = (panda$core$Int64) {1};
int64_t $tmp530 = $tmp529.value;
$tmp527[$tmp530] = $tmp528;
// line 104
panda$core$Int64** $tmp531 = *(&local0);
panda$core$Int64 $tmp532 = (panda$core$Int64) {48};
int64_t $tmp533 = $tmp532.value;
panda$core$Int64* $tmp534 = $tmp531[$tmp533];
panda$core$Int64 $tmp535 = (panda$core$Int64) {2};
panda$core$Int64 $tmp536 = (panda$core$Int64) {14};
int64_t $tmp537 = $tmp536.value;
$tmp534[$tmp537] = $tmp535;
// line 105
panda$core$Int64** $tmp538 = *(&local0);
panda$core$Int64** $tmp539 = *(&local0);
panda$core$Int64 $tmp540 = (panda$core$Int64) {48};
int64_t $tmp541 = $tmp540.value;
panda$core$Int64* $tmp542 = $tmp539[$tmp541];
panda$core$Int64 $tmp543 = (panda$core$Int64) {49};
int64_t $tmp544 = $tmp543.value;
$tmp538[$tmp544] = $tmp542;
// line 106
panda$core$Int64** $tmp545 = *(&local0);
panda$core$Int64** $tmp546 = *(&local0);
panda$core$Int64 $tmp547 = (panda$core$Int64) {48};
int64_t $tmp548 = $tmp547.value;
panda$core$Int64* $tmp549 = $tmp546[$tmp548];
panda$core$Int64 $tmp550 = (panda$core$Int64) {50};
int64_t $tmp551 = $tmp550.value;
$tmp545[$tmp551] = $tmp549;
// line 107
panda$core$Int64** $tmp552 = *(&local0);
panda$core$Int64** $tmp553 = *(&local0);
panda$core$Int64 $tmp554 = (panda$core$Int64) {48};
int64_t $tmp555 = $tmp554.value;
panda$core$Int64* $tmp556 = $tmp553[$tmp555];
panda$core$Int64 $tmp557 = (panda$core$Int64) {51};
int64_t $tmp558 = $tmp557.value;
$tmp552[$tmp558] = $tmp556;
// line 108
panda$core$Int64** $tmp559 = *(&local0);
panda$core$Int64** $tmp560 = *(&local0);
panda$core$Int64 $tmp561 = (panda$core$Int64) {48};
int64_t $tmp562 = $tmp561.value;
panda$core$Int64* $tmp563 = $tmp560[$tmp562];
panda$core$Int64 $tmp564 = (panda$core$Int64) {52};
int64_t $tmp565 = $tmp564.value;
$tmp559[$tmp565] = $tmp563;
// line 109
panda$core$Int64** $tmp566 = *(&local0);
panda$core$Int64** $tmp567 = *(&local0);
panda$core$Int64 $tmp568 = (panda$core$Int64) {48};
int64_t $tmp569 = $tmp568.value;
panda$core$Int64* $tmp570 = $tmp567[$tmp569];
panda$core$Int64 $tmp571 = (panda$core$Int64) {53};
int64_t $tmp572 = $tmp571.value;
$tmp566[$tmp572] = $tmp570;
// line 110
panda$core$Int64** $tmp573 = *(&local0);
panda$core$Int64** $tmp574 = *(&local0);
panda$core$Int64 $tmp575 = (panda$core$Int64) {48};
int64_t $tmp576 = $tmp575.value;
panda$core$Int64* $tmp577 = $tmp574[$tmp576];
panda$core$Int64 $tmp578 = (panda$core$Int64) {54};
int64_t $tmp579 = $tmp578.value;
$tmp573[$tmp579] = $tmp577;
// line 111
panda$core$Int64** $tmp580 = *(&local0);
panda$core$Int64** $tmp581 = *(&local0);
panda$core$Int64 $tmp582 = (panda$core$Int64) {48};
int64_t $tmp583 = $tmp582.value;
panda$core$Int64* $tmp584 = $tmp581[$tmp583];
panda$core$Int64 $tmp585 = (panda$core$Int64) {55};
int64_t $tmp586 = $tmp585.value;
$tmp580[$tmp586] = $tmp584;
// line 112
panda$core$Int64** $tmp587 = *(&local0);
panda$core$Int64** $tmp588 = *(&local0);
panda$core$Int64 $tmp589 = (panda$core$Int64) {48};
int64_t $tmp590 = $tmp589.value;
panda$core$Int64* $tmp591 = $tmp588[$tmp590];
panda$core$Int64 $tmp592 = (panda$core$Int64) {56};
int64_t $tmp593 = $tmp592.value;
$tmp587[$tmp593] = $tmp591;
// line 113
panda$core$Int64** $tmp594 = *(&local0);
panda$core$Int64** $tmp595 = *(&local0);
panda$core$Int64 $tmp596 = (panda$core$Int64) {48};
int64_t $tmp597 = $tmp596.value;
panda$core$Int64* $tmp598 = $tmp595[$tmp597];
panda$core$Int64 $tmp599 = (panda$core$Int64) {57};
int64_t $tmp600 = $tmp599.value;
$tmp594[$tmp600] = $tmp598;
// line 114
panda$core$Int64** $tmp601 = *(&local0);
panda$core$Int64** $tmp602 = *(&local0);
panda$core$Int64 $tmp603 = (panda$core$Int64) {0};
int64_t $tmp604 = $tmp603.value;
panda$core$Int64* $tmp605 = $tmp602[$tmp604];
panda$core$Int64 $tmp606 = (panda$core$Int64) {58};
int64_t $tmp607 = $tmp606.value;
$tmp601[$tmp607] = $tmp605;
// line 115
panda$core$Int64** $tmp608 = *(&local0);
panda$core$Int64** $tmp609 = *(&local0);
panda$core$Int64 $tmp610 = (panda$core$Int64) {0};
int64_t $tmp611 = $tmp610.value;
panda$core$Int64* $tmp612 = $tmp609[$tmp611];
panda$core$Int64 $tmp613 = (panda$core$Int64) {59};
int64_t $tmp614 = $tmp613.value;
$tmp608[$tmp614] = $tmp612;
// line 116
panda$core$Int64** $tmp615 = *(&local0);
panda$core$Int64** $tmp616 = *(&local0);
panda$core$Int64 $tmp617 = (panda$core$Int64) {0};
int64_t $tmp618 = $tmp617.value;
panda$core$Int64* $tmp619 = $tmp616[$tmp618];
panda$core$Int64 $tmp620 = (panda$core$Int64) {60};
int64_t $tmp621 = $tmp620.value;
$tmp615[$tmp621] = $tmp619;
// line 117
panda$core$Int64** $tmp622 = *(&local0);
panda$core$Int64** $tmp623 = *(&local0);
panda$core$Int64 $tmp624 = (panda$core$Int64) {0};
int64_t $tmp625 = $tmp624.value;
panda$core$Int64* $tmp626 = $tmp623[$tmp625];
panda$core$Int64 $tmp627 = (panda$core$Int64) {61};
int64_t $tmp628 = $tmp627.value;
$tmp622[$tmp628] = $tmp626;
// line 118
panda$core$Int64** $tmp629 = *(&local0);
panda$core$Int64** $tmp630 = *(&local0);
panda$core$Int64 $tmp631 = (panda$core$Int64) {0};
int64_t $tmp632 = $tmp631.value;
panda$core$Int64* $tmp633 = $tmp630[$tmp632];
panda$core$Int64 $tmp634 = (panda$core$Int64) {62};
int64_t $tmp635 = $tmp634.value;
$tmp629[$tmp635] = $tmp633;
// line 119
panda$core$Int64** $tmp636 = *(&local0);
panda$core$Int64 $tmp637 = (panda$core$Int64) {20};
panda$core$Int64 $tmp638 = (panda$core$Int64) {0};
panda$core$Int64* $tmp639 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp637, $tmp638);
panda$core$Int64 $tmp640 = (panda$core$Int64) {63};
int64_t $tmp641 = $tmp640.value;
$tmp636[$tmp641] = $tmp639;
// line 120
panda$core$Int64** $tmp642 = *(&local0);
panda$core$Int64 $tmp643 = (panda$core$Int64) {63};
int64_t $tmp644 = $tmp643.value;
panda$core$Int64* $tmp645 = $tmp642[$tmp644];
panda$core$Int64 $tmp646 = (panda$core$Int64) {12};
panda$core$Int64 $tmp647 = (panda$core$Int64) {1};
int64_t $tmp648 = $tmp647.value;
$tmp645[$tmp648] = $tmp646;
// line 121
panda$core$Int64** $tmp649 = *(&local0);
panda$core$Int64 $tmp650 = (panda$core$Int64) {63};
int64_t $tmp651 = $tmp650.value;
panda$core$Int64* $tmp652 = $tmp649[$tmp651];
panda$core$Int64 $tmp653 = (panda$core$Int64) {2};
panda$core$Int64 $tmp654 = (panda$core$Int64) {14};
int64_t $tmp655 = $tmp654.value;
$tmp652[$tmp655] = $tmp653;
// line 122
panda$core$Int64** $tmp656 = *(&local0);
panda$core$Int64** $tmp657 = *(&local0);
panda$core$Int64 $tmp658 = (panda$core$Int64) {0};
int64_t $tmp659 = $tmp658.value;
panda$core$Int64* $tmp660 = $tmp657[$tmp659];
panda$core$Int64 $tmp661 = (panda$core$Int64) {64};
int64_t $tmp662 = $tmp661.value;
$tmp656[$tmp662] = $tmp660;
// line 123
panda$core$Int64** $tmp663 = *(&local0);
panda$core$Int64** $tmp664 = *(&local0);
panda$core$Int64 $tmp665 = (panda$core$Int64) {0};
int64_t $tmp666 = $tmp665.value;
panda$core$Int64* $tmp667 = $tmp664[$tmp666];
panda$core$Int64 $tmp668 = (panda$core$Int64) {65};
int64_t $tmp669 = $tmp668.value;
$tmp663[$tmp669] = $tmp667;
// line 124
panda$core$Int64** $tmp670 = *(&local0);
panda$core$Int64** $tmp671 = *(&local0);
panda$core$Int64 $tmp672 = (panda$core$Int64) {0};
int64_t $tmp673 = $tmp672.value;
panda$core$Int64* $tmp674 = $tmp671[$tmp673];
panda$core$Int64 $tmp675 = (panda$core$Int64) {66};
int64_t $tmp676 = $tmp675.value;
$tmp670[$tmp676] = $tmp674;
// line 125
panda$core$Int64** $tmp677 = *(&local0);
panda$core$Int64** $tmp678 = *(&local0);
panda$core$Int64 $tmp679 = (panda$core$Int64) {0};
int64_t $tmp680 = $tmp679.value;
panda$core$Int64* $tmp681 = $tmp678[$tmp680];
panda$core$Int64 $tmp682 = (panda$core$Int64) {67};
int64_t $tmp683 = $tmp682.value;
$tmp677[$tmp683] = $tmp681;
// line 126
panda$core$Int64** $tmp684 = *(&local0);
panda$core$Int64** $tmp685 = *(&local0);
panda$core$Int64 $tmp686 = (panda$core$Int64) {0};
int64_t $tmp687 = $tmp686.value;
panda$core$Int64* $tmp688 = $tmp685[$tmp687];
panda$core$Int64 $tmp689 = (panda$core$Int64) {68};
int64_t $tmp690 = $tmp689.value;
$tmp684[$tmp690] = $tmp688;
// line 127
panda$core$Int64** $tmp691 = *(&local0);
panda$core$Int64** $tmp692 = *(&local0);
panda$core$Int64 $tmp693 = (panda$core$Int64) {0};
int64_t $tmp694 = $tmp693.value;
panda$core$Int64* $tmp695 = $tmp692[$tmp694];
panda$core$Int64 $tmp696 = (panda$core$Int64) {69};
int64_t $tmp697 = $tmp696.value;
$tmp691[$tmp697] = $tmp695;
// line 128
panda$core$Int64** $tmp698 = *(&local0);
panda$core$Int64** $tmp699 = *(&local0);
panda$core$Int64 $tmp700 = (panda$core$Int64) {0};
int64_t $tmp701 = $tmp700.value;
panda$core$Int64* $tmp702 = $tmp699[$tmp701];
panda$core$Int64 $tmp703 = (panda$core$Int64) {70};
int64_t $tmp704 = $tmp703.value;
$tmp698[$tmp704] = $tmp702;
// line 129
panda$core$Int64** $tmp705 = *(&local0);
panda$core$Int64** $tmp706 = *(&local0);
panda$core$Int64 $tmp707 = (panda$core$Int64) {0};
int64_t $tmp708 = $tmp707.value;
panda$core$Int64* $tmp709 = $tmp706[$tmp708];
panda$core$Int64 $tmp710 = (panda$core$Int64) {71};
int64_t $tmp711 = $tmp710.value;
$tmp705[$tmp711] = $tmp709;
// line 130
panda$core$Int64** $tmp712 = *(&local0);
panda$core$Int64** $tmp713 = *(&local0);
panda$core$Int64 $tmp714 = (panda$core$Int64) {0};
int64_t $tmp715 = $tmp714.value;
panda$core$Int64* $tmp716 = $tmp713[$tmp715];
panda$core$Int64 $tmp717 = (panda$core$Int64) {72};
int64_t $tmp718 = $tmp717.value;
$tmp712[$tmp718] = $tmp716;
// line 131
panda$core$Int64** $tmp719 = *(&local0);
panda$core$Int64** $tmp720 = *(&local0);
panda$core$Int64 $tmp721 = (panda$core$Int64) {0};
int64_t $tmp722 = $tmp721.value;
panda$core$Int64* $tmp723 = $tmp720[$tmp722];
panda$core$Int64 $tmp724 = (panda$core$Int64) {73};
int64_t $tmp725 = $tmp724.value;
$tmp719[$tmp725] = $tmp723;
// line 132
panda$core$Int64** $tmp726 = *(&local0);
panda$core$Int64** $tmp727 = *(&local0);
panda$core$Int64 $tmp728 = (panda$core$Int64) {0};
int64_t $tmp729 = $tmp728.value;
panda$core$Int64* $tmp730 = $tmp727[$tmp729];
panda$core$Int64 $tmp731 = (panda$core$Int64) {74};
int64_t $tmp732 = $tmp731.value;
$tmp726[$tmp732] = $tmp730;
// line 133
panda$core$Int64** $tmp733 = *(&local0);
panda$core$Int64** $tmp734 = *(&local0);
panda$core$Int64 $tmp735 = (panda$core$Int64) {0};
int64_t $tmp736 = $tmp735.value;
panda$core$Int64* $tmp737 = $tmp734[$tmp736];
panda$core$Int64 $tmp738 = (panda$core$Int64) {75};
int64_t $tmp739 = $tmp738.value;
$tmp733[$tmp739] = $tmp737;
// line 134
panda$core$Int64** $tmp740 = *(&local0);
panda$core$Int64** $tmp741 = *(&local0);
panda$core$Int64 $tmp742 = (panda$core$Int64) {0};
int64_t $tmp743 = $tmp742.value;
panda$core$Int64* $tmp744 = $tmp741[$tmp743];
panda$core$Int64 $tmp745 = (panda$core$Int64) {76};
int64_t $tmp746 = $tmp745.value;
$tmp740[$tmp746] = $tmp744;
// line 135
panda$core$Int64** $tmp747 = *(&local0);
panda$core$Int64** $tmp748 = *(&local0);
panda$core$Int64 $tmp749 = (panda$core$Int64) {0};
int64_t $tmp750 = $tmp749.value;
panda$core$Int64* $tmp751 = $tmp748[$tmp750];
panda$core$Int64 $tmp752 = (panda$core$Int64) {77};
int64_t $tmp753 = $tmp752.value;
$tmp747[$tmp753] = $tmp751;
// line 136
panda$core$Int64** $tmp754 = *(&local0);
panda$core$Int64** $tmp755 = *(&local0);
panda$core$Int64 $tmp756 = (panda$core$Int64) {0};
int64_t $tmp757 = $tmp756.value;
panda$core$Int64* $tmp758 = $tmp755[$tmp757];
panda$core$Int64 $tmp759 = (panda$core$Int64) {78};
int64_t $tmp760 = $tmp759.value;
$tmp754[$tmp760] = $tmp758;
// line 137
panda$core$Int64** $tmp761 = *(&local0);
panda$core$Int64** $tmp762 = *(&local0);
panda$core$Int64 $tmp763 = (panda$core$Int64) {0};
int64_t $tmp764 = $tmp763.value;
panda$core$Int64* $tmp765 = $tmp762[$tmp764];
panda$core$Int64 $tmp766 = (panda$core$Int64) {79};
int64_t $tmp767 = $tmp766.value;
$tmp761[$tmp767] = $tmp765;
// line 138
panda$core$Int64** $tmp768 = *(&local0);
panda$core$Int64** $tmp769 = *(&local0);
panda$core$Int64 $tmp770 = (panda$core$Int64) {0};
int64_t $tmp771 = $tmp770.value;
panda$core$Int64* $tmp772 = $tmp769[$tmp771];
panda$core$Int64 $tmp773 = (panda$core$Int64) {80};
int64_t $tmp774 = $tmp773.value;
$tmp768[$tmp774] = $tmp772;
// line 139
panda$core$Int64** $tmp775 = *(&local0);
panda$core$Int64** $tmp776 = *(&local0);
panda$core$Int64 $tmp777 = (panda$core$Int64) {0};
int64_t $tmp778 = $tmp777.value;
panda$core$Int64* $tmp779 = $tmp776[$tmp778];
panda$core$Int64 $tmp780 = (panda$core$Int64) {81};
int64_t $tmp781 = $tmp780.value;
$tmp775[$tmp781] = $tmp779;
// line 140
panda$core$Int64** $tmp782 = *(&local0);
panda$core$Int64** $tmp783 = *(&local0);
panda$core$Int64 $tmp784 = (panda$core$Int64) {0};
int64_t $tmp785 = $tmp784.value;
panda$core$Int64* $tmp786 = $tmp783[$tmp785];
panda$core$Int64 $tmp787 = (panda$core$Int64) {82};
int64_t $tmp788 = $tmp787.value;
$tmp782[$tmp788] = $tmp786;
// line 141
panda$core$Int64** $tmp789 = *(&local0);
panda$core$Int64** $tmp790 = *(&local0);
panda$core$Int64 $tmp791 = (panda$core$Int64) {0};
int64_t $tmp792 = $tmp791.value;
panda$core$Int64* $tmp793 = $tmp790[$tmp792];
panda$core$Int64 $tmp794 = (panda$core$Int64) {83};
int64_t $tmp795 = $tmp794.value;
$tmp789[$tmp795] = $tmp793;
// line 142
panda$core$Int64** $tmp796 = *(&local0);
panda$core$Int64** $tmp797 = *(&local0);
panda$core$Int64 $tmp798 = (panda$core$Int64) {0};
int64_t $tmp799 = $tmp798.value;
panda$core$Int64* $tmp800 = $tmp797[$tmp799];
panda$core$Int64 $tmp801 = (panda$core$Int64) {84};
int64_t $tmp802 = $tmp801.value;
$tmp796[$tmp802] = $tmp800;
// line 143
panda$core$Int64** $tmp803 = *(&local0);
panda$core$Int64** $tmp804 = *(&local0);
panda$core$Int64 $tmp805 = (panda$core$Int64) {0};
int64_t $tmp806 = $tmp805.value;
panda$core$Int64* $tmp807 = $tmp804[$tmp806];
panda$core$Int64 $tmp808 = (panda$core$Int64) {85};
int64_t $tmp809 = $tmp808.value;
$tmp803[$tmp809] = $tmp807;
// line 144
panda$core$Int64** $tmp810 = *(&local0);
panda$core$Int64** $tmp811 = *(&local0);
panda$core$Int64 $tmp812 = (panda$core$Int64) {0};
int64_t $tmp813 = $tmp812.value;
panda$core$Int64* $tmp814 = $tmp811[$tmp813];
panda$core$Int64 $tmp815 = (panda$core$Int64) {86};
int64_t $tmp816 = $tmp815.value;
$tmp810[$tmp816] = $tmp814;
// line 145
panda$core$Int64** $tmp817 = *(&local0);
panda$core$Int64** $tmp818 = *(&local0);
panda$core$Int64 $tmp819 = (panda$core$Int64) {0};
int64_t $tmp820 = $tmp819.value;
panda$core$Int64* $tmp821 = $tmp818[$tmp820];
panda$core$Int64 $tmp822 = (panda$core$Int64) {87};
int64_t $tmp823 = $tmp822.value;
$tmp817[$tmp823] = $tmp821;
// line 146
panda$core$Int64** $tmp824 = *(&local0);
panda$core$Int64** $tmp825 = *(&local0);
panda$core$Int64 $tmp826 = (panda$core$Int64) {0};
int64_t $tmp827 = $tmp826.value;
panda$core$Int64* $tmp828 = $tmp825[$tmp827];
panda$core$Int64 $tmp829 = (panda$core$Int64) {88};
int64_t $tmp830 = $tmp829.value;
$tmp824[$tmp830] = $tmp828;
// line 147
panda$core$Int64** $tmp831 = *(&local0);
panda$core$Int64** $tmp832 = *(&local0);
panda$core$Int64 $tmp833 = (panda$core$Int64) {0};
int64_t $tmp834 = $tmp833.value;
panda$core$Int64* $tmp835 = $tmp832[$tmp834];
panda$core$Int64 $tmp836 = (panda$core$Int64) {89};
int64_t $tmp837 = $tmp836.value;
$tmp831[$tmp837] = $tmp835;
// line 148
panda$core$Int64** $tmp838 = *(&local0);
panda$core$Int64** $tmp839 = *(&local0);
panda$core$Int64 $tmp840 = (panda$core$Int64) {0};
int64_t $tmp841 = $tmp840.value;
panda$core$Int64* $tmp842 = $tmp839[$tmp841];
panda$core$Int64 $tmp843 = (panda$core$Int64) {90};
int64_t $tmp844 = $tmp843.value;
$tmp838[$tmp844] = $tmp842;
// line 149
panda$core$Int64** $tmp845 = *(&local0);
panda$core$Int64 $tmp846 = (panda$core$Int64) {20};
panda$core$Int64 $tmp847 = (panda$core$Int64) {0};
panda$core$Int64* $tmp848 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp846, $tmp847);
panda$core$Int64 $tmp849 = (panda$core$Int64) {91};
int64_t $tmp850 = $tmp849.value;
$tmp845[$tmp850] = $tmp848;
// line 150
panda$core$Int64** $tmp851 = *(&local0);
panda$core$Int64 $tmp852 = (panda$core$Int64) {91};
int64_t $tmp853 = $tmp852.value;
panda$core$Int64* $tmp854 = $tmp851[$tmp853];
panda$core$Int64 $tmp855 = (panda$core$Int64) {13};
panda$core$Int64 $tmp856 = (panda$core$Int64) {1};
int64_t $tmp857 = $tmp856.value;
$tmp854[$tmp857] = $tmp855;
// line 151
panda$core$Int64** $tmp858 = *(&local0);
panda$core$Int64 $tmp859 = (panda$core$Int64) {91};
int64_t $tmp860 = $tmp859.value;
panda$core$Int64* $tmp861 = $tmp858[$tmp860];
panda$core$Int64 $tmp862 = (panda$core$Int64) {2};
panda$core$Int64 $tmp863 = (panda$core$Int64) {14};
int64_t $tmp864 = $tmp863.value;
$tmp861[$tmp864] = $tmp862;
// line 152
panda$core$Int64** $tmp865 = *(&local0);
panda$core$Int64 $tmp866 = (panda$core$Int64) {20};
panda$core$Int64 $tmp867 = (panda$core$Int64) {0};
panda$core$Int64* $tmp868 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp866, $tmp867);
panda$core$Int64 $tmp869 = (panda$core$Int64) {92};
int64_t $tmp870 = $tmp869.value;
$tmp865[$tmp870] = $tmp868;
// line 153
panda$core$Int64** $tmp871 = *(&local0);
panda$core$Int64 $tmp872 = (panda$core$Int64) {92};
int64_t $tmp873 = $tmp872.value;
panda$core$Int64* $tmp874 = $tmp871[$tmp873];
panda$core$Int64 $tmp875 = (panda$core$Int64) {14};
panda$core$Int64 $tmp876 = (panda$core$Int64) {1};
int64_t $tmp877 = $tmp876.value;
$tmp874[$tmp877] = $tmp875;
// line 154
panda$core$Int64** $tmp878 = *(&local0);
panda$core$Int64 $tmp879 = (panda$core$Int64) {92};
int64_t $tmp880 = $tmp879.value;
panda$core$Int64* $tmp881 = $tmp878[$tmp880];
panda$core$Int64 $tmp882 = (panda$core$Int64) {2};
panda$core$Int64 $tmp883 = (panda$core$Int64) {14};
int64_t $tmp884 = $tmp883.value;
$tmp881[$tmp884] = $tmp882;
// line 155
panda$core$Int64** $tmp885 = *(&local0);
panda$core$Int64 $tmp886 = (panda$core$Int64) {20};
panda$core$Int64 $tmp887 = (panda$core$Int64) {0};
panda$core$Int64* $tmp888 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp886, $tmp887);
panda$core$Int64 $tmp889 = (panda$core$Int64) {93};
int64_t $tmp890 = $tmp889.value;
$tmp885[$tmp890] = $tmp888;
// line 156
panda$core$Int64** $tmp891 = *(&local0);
panda$core$Int64 $tmp892 = (panda$core$Int64) {93};
int64_t $tmp893 = $tmp892.value;
panda$core$Int64* $tmp894 = $tmp891[$tmp893];
panda$core$Int64 $tmp895 = (panda$core$Int64) {15};
panda$core$Int64 $tmp896 = (panda$core$Int64) {1};
int64_t $tmp897 = $tmp896.value;
$tmp894[$tmp897] = $tmp895;
// line 157
panda$core$Int64** $tmp898 = *(&local0);
panda$core$Int64 $tmp899 = (panda$core$Int64) {93};
int64_t $tmp900 = $tmp899.value;
panda$core$Int64* $tmp901 = $tmp898[$tmp900];
panda$core$Int64 $tmp902 = (panda$core$Int64) {2};
panda$core$Int64 $tmp903 = (panda$core$Int64) {14};
int64_t $tmp904 = $tmp903.value;
$tmp901[$tmp904] = $tmp902;
// line 158
panda$core$Int64** $tmp905 = *(&local0);
panda$core$Int64 $tmp906 = (panda$core$Int64) {20};
panda$core$Int64 $tmp907 = (panda$core$Int64) {0};
panda$core$Int64* $tmp908 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp906, $tmp907);
panda$core$Int64 $tmp909 = (panda$core$Int64) {94};
int64_t $tmp910 = $tmp909.value;
$tmp905[$tmp910] = $tmp908;
// line 159
panda$core$Int64** $tmp911 = *(&local0);
panda$core$Int64 $tmp912 = (panda$core$Int64) {94};
int64_t $tmp913 = $tmp912.value;
panda$core$Int64* $tmp914 = $tmp911[$tmp913];
panda$core$Int64 $tmp915 = (panda$core$Int64) {16};
panda$core$Int64 $tmp916 = (panda$core$Int64) {1};
int64_t $tmp917 = $tmp916.value;
$tmp914[$tmp917] = $tmp915;
// line 160
panda$core$Int64** $tmp918 = *(&local0);
panda$core$Int64 $tmp919 = (panda$core$Int64) {94};
int64_t $tmp920 = $tmp919.value;
panda$core$Int64* $tmp921 = $tmp918[$tmp920];
panda$core$Int64 $tmp922 = (panda$core$Int64) {2};
panda$core$Int64 $tmp923 = (panda$core$Int64) {14};
int64_t $tmp924 = $tmp923.value;
$tmp921[$tmp924] = $tmp922;
// line 161
panda$core$Int64** $tmp925 = *(&local0);
panda$core$Int64** $tmp926 = *(&local0);
panda$core$Int64 $tmp927 = (panda$core$Int64) {0};
int64_t $tmp928 = $tmp927.value;
panda$core$Int64* $tmp929 = $tmp926[$tmp928];
panda$core$Int64 $tmp930 = (panda$core$Int64) {95};
int64_t $tmp931 = $tmp930.value;
$tmp925[$tmp931] = $tmp929;
// line 162
panda$core$Int64** $tmp932 = *(&local0);
panda$core$Int64 $tmp933 = (panda$core$Int64) {20};
panda$core$Int64 $tmp934 = (panda$core$Int64) {0};
panda$core$Int64* $tmp935 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp933, $tmp934);
panda$core$Int64 $tmp936 = (panda$core$Int64) {96};
int64_t $tmp937 = $tmp936.value;
$tmp932[$tmp937] = $tmp935;
// line 163
panda$core$Int64** $tmp938 = *(&local0);
panda$core$Int64 $tmp939 = (panda$core$Int64) {96};
int64_t $tmp940 = $tmp939.value;
panda$core$Int64* $tmp941 = $tmp938[$tmp940];
panda$core$Int64 $tmp942 = (panda$core$Int64) {17};
panda$core$Int64 $tmp943 = (panda$core$Int64) {1};
int64_t $tmp944 = $tmp943.value;
$tmp941[$tmp944] = $tmp942;
// line 164
panda$core$Int64** $tmp945 = *(&local0);
panda$core$Int64 $tmp946 = (panda$core$Int64) {96};
int64_t $tmp947 = $tmp946.value;
panda$core$Int64* $tmp948 = $tmp945[$tmp947];
panda$core$Int64 $tmp949 = (panda$core$Int64) {2};
panda$core$Int64 $tmp950 = (panda$core$Int64) {14};
int64_t $tmp951 = $tmp950.value;
$tmp948[$tmp951] = $tmp949;
// line 165
panda$core$Int64** $tmp952 = *(&local0);
panda$core$Int64** $tmp953 = *(&local0);
panda$core$Int64 $tmp954 = (panda$core$Int64) {0};
int64_t $tmp955 = $tmp954.value;
panda$core$Int64* $tmp956 = $tmp953[$tmp955];
panda$core$Int64 $tmp957 = (panda$core$Int64) {97};
int64_t $tmp958 = $tmp957.value;
$tmp952[$tmp958] = $tmp956;
// line 166
panda$core$Int64** $tmp959 = *(&local0);
panda$core$Int64** $tmp960 = *(&local0);
panda$core$Int64 $tmp961 = (panda$core$Int64) {0};
int64_t $tmp962 = $tmp961.value;
panda$core$Int64* $tmp963 = $tmp960[$tmp962];
panda$core$Int64 $tmp964 = (panda$core$Int64) {98};
int64_t $tmp965 = $tmp964.value;
$tmp959[$tmp965] = $tmp963;
// line 167
panda$core$Int64** $tmp966 = *(&local0);
panda$core$Int64** $tmp967 = *(&local0);
panda$core$Int64 $tmp968 = (panda$core$Int64) {0};
int64_t $tmp969 = $tmp968.value;
panda$core$Int64* $tmp970 = $tmp967[$tmp969];
panda$core$Int64 $tmp971 = (panda$core$Int64) {99};
int64_t $tmp972 = $tmp971.value;
$tmp966[$tmp972] = $tmp970;
// line 168
panda$core$Int64** $tmp973 = *(&local0);
panda$core$Int64** $tmp974 = *(&local0);
panda$core$Int64 $tmp975 = (panda$core$Int64) {0};
int64_t $tmp976 = $tmp975.value;
panda$core$Int64* $tmp977 = $tmp974[$tmp976];
panda$core$Int64 $tmp978 = (panda$core$Int64) {100};
int64_t $tmp979 = $tmp978.value;
$tmp973[$tmp979] = $tmp977;
// line 169
panda$core$Int64** $tmp980 = *(&local0);
panda$core$Int64** $tmp981 = *(&local0);
panda$core$Int64 $tmp982 = (panda$core$Int64) {0};
int64_t $tmp983 = $tmp982.value;
panda$core$Int64* $tmp984 = $tmp981[$tmp983];
panda$core$Int64 $tmp985 = (panda$core$Int64) {101};
int64_t $tmp986 = $tmp985.value;
$tmp980[$tmp986] = $tmp984;
// line 170
panda$core$Int64** $tmp987 = *(&local0);
panda$core$Int64** $tmp988 = *(&local0);
panda$core$Int64 $tmp989 = (panda$core$Int64) {0};
int64_t $tmp990 = $tmp989.value;
panda$core$Int64* $tmp991 = $tmp988[$tmp990];
panda$core$Int64 $tmp992 = (panda$core$Int64) {102};
int64_t $tmp993 = $tmp992.value;
$tmp987[$tmp993] = $tmp991;
// line 171
panda$core$Int64** $tmp994 = *(&local0);
panda$core$Int64** $tmp995 = *(&local0);
panda$core$Int64 $tmp996 = (panda$core$Int64) {0};
int64_t $tmp997 = $tmp996.value;
panda$core$Int64* $tmp998 = $tmp995[$tmp997];
panda$core$Int64 $tmp999 = (panda$core$Int64) {103};
int64_t $tmp1000 = $tmp999.value;
$tmp994[$tmp1000] = $tmp998;
// line 172
panda$core$Int64** $tmp1001 = *(&local0);
panda$core$Int64** $tmp1002 = *(&local0);
panda$core$Int64 $tmp1003 = (panda$core$Int64) {0};
int64_t $tmp1004 = $tmp1003.value;
panda$core$Int64* $tmp1005 = $tmp1002[$tmp1004];
panda$core$Int64 $tmp1006 = (panda$core$Int64) {104};
int64_t $tmp1007 = $tmp1006.value;
$tmp1001[$tmp1007] = $tmp1005;
// line 173
panda$core$Int64** $tmp1008 = *(&local0);
panda$core$Int64** $tmp1009 = *(&local0);
panda$core$Int64 $tmp1010 = (panda$core$Int64) {0};
int64_t $tmp1011 = $tmp1010.value;
panda$core$Int64* $tmp1012 = $tmp1009[$tmp1011];
panda$core$Int64 $tmp1013 = (panda$core$Int64) {105};
int64_t $tmp1014 = $tmp1013.value;
$tmp1008[$tmp1014] = $tmp1012;
// line 174
panda$core$Int64** $tmp1015 = *(&local0);
panda$core$Int64** $tmp1016 = *(&local0);
panda$core$Int64 $tmp1017 = (panda$core$Int64) {0};
int64_t $tmp1018 = $tmp1017.value;
panda$core$Int64* $tmp1019 = $tmp1016[$tmp1018];
panda$core$Int64 $tmp1020 = (panda$core$Int64) {106};
int64_t $tmp1021 = $tmp1020.value;
$tmp1015[$tmp1021] = $tmp1019;
// line 175
panda$core$Int64** $tmp1022 = *(&local0);
panda$core$Int64** $tmp1023 = *(&local0);
panda$core$Int64 $tmp1024 = (panda$core$Int64) {0};
int64_t $tmp1025 = $tmp1024.value;
panda$core$Int64* $tmp1026 = $tmp1023[$tmp1025];
panda$core$Int64 $tmp1027 = (panda$core$Int64) {107};
int64_t $tmp1028 = $tmp1027.value;
$tmp1022[$tmp1028] = $tmp1026;
// line 176
panda$core$Int64** $tmp1029 = *(&local0);
panda$core$Int64** $tmp1030 = *(&local0);
panda$core$Int64 $tmp1031 = (panda$core$Int64) {0};
int64_t $tmp1032 = $tmp1031.value;
panda$core$Int64* $tmp1033 = $tmp1030[$tmp1032];
panda$core$Int64 $tmp1034 = (panda$core$Int64) {108};
int64_t $tmp1035 = $tmp1034.value;
$tmp1029[$tmp1035] = $tmp1033;
// line 177
panda$core$Int64** $tmp1036 = *(&local0);
panda$core$Int64** $tmp1037 = *(&local0);
panda$core$Int64 $tmp1038 = (panda$core$Int64) {0};
int64_t $tmp1039 = $tmp1038.value;
panda$core$Int64* $tmp1040 = $tmp1037[$tmp1039];
panda$core$Int64 $tmp1041 = (panda$core$Int64) {109};
int64_t $tmp1042 = $tmp1041.value;
$tmp1036[$tmp1042] = $tmp1040;
// line 178
panda$core$Int64** $tmp1043 = *(&local0);
panda$core$Int64** $tmp1044 = *(&local0);
panda$core$Int64 $tmp1045 = (panda$core$Int64) {0};
int64_t $tmp1046 = $tmp1045.value;
panda$core$Int64* $tmp1047 = $tmp1044[$tmp1046];
panda$core$Int64 $tmp1048 = (panda$core$Int64) {110};
int64_t $tmp1049 = $tmp1048.value;
$tmp1043[$tmp1049] = $tmp1047;
// line 179
panda$core$Int64** $tmp1050 = *(&local0);
panda$core$Int64** $tmp1051 = *(&local0);
panda$core$Int64 $tmp1052 = (panda$core$Int64) {0};
int64_t $tmp1053 = $tmp1052.value;
panda$core$Int64* $tmp1054 = $tmp1051[$tmp1053];
panda$core$Int64 $tmp1055 = (panda$core$Int64) {111};
int64_t $tmp1056 = $tmp1055.value;
$tmp1050[$tmp1056] = $tmp1054;
// line 180
panda$core$Int64** $tmp1057 = *(&local0);
panda$core$Int64** $tmp1058 = *(&local0);
panda$core$Int64 $tmp1059 = (panda$core$Int64) {0};
int64_t $tmp1060 = $tmp1059.value;
panda$core$Int64* $tmp1061 = $tmp1058[$tmp1060];
panda$core$Int64 $tmp1062 = (panda$core$Int64) {112};
int64_t $tmp1063 = $tmp1062.value;
$tmp1057[$tmp1063] = $tmp1061;
// line 181
panda$core$Int64** $tmp1064 = *(&local0);
panda$core$Int64** $tmp1065 = *(&local0);
panda$core$Int64 $tmp1066 = (panda$core$Int64) {0};
int64_t $tmp1067 = $tmp1066.value;
panda$core$Int64* $tmp1068 = $tmp1065[$tmp1067];
panda$core$Int64 $tmp1069 = (panda$core$Int64) {113};
int64_t $tmp1070 = $tmp1069.value;
$tmp1064[$tmp1070] = $tmp1068;
// line 182
panda$core$Int64** $tmp1071 = *(&local0);
panda$core$Int64** $tmp1072 = *(&local0);
panda$core$Int64 $tmp1073 = (panda$core$Int64) {0};
int64_t $tmp1074 = $tmp1073.value;
panda$core$Int64* $tmp1075 = $tmp1072[$tmp1074];
panda$core$Int64 $tmp1076 = (panda$core$Int64) {114};
int64_t $tmp1077 = $tmp1076.value;
$tmp1071[$tmp1077] = $tmp1075;
// line 183
panda$core$Int64** $tmp1078 = *(&local0);
panda$core$Int64** $tmp1079 = *(&local0);
panda$core$Int64 $tmp1080 = (panda$core$Int64) {0};
int64_t $tmp1081 = $tmp1080.value;
panda$core$Int64* $tmp1082 = $tmp1079[$tmp1081];
panda$core$Int64 $tmp1083 = (panda$core$Int64) {115};
int64_t $tmp1084 = $tmp1083.value;
$tmp1078[$tmp1084] = $tmp1082;
// line 184
panda$core$Int64** $tmp1085 = *(&local0);
panda$core$Int64** $tmp1086 = *(&local0);
panda$core$Int64 $tmp1087 = (panda$core$Int64) {0};
int64_t $tmp1088 = $tmp1087.value;
panda$core$Int64* $tmp1089 = $tmp1086[$tmp1088];
panda$core$Int64 $tmp1090 = (panda$core$Int64) {116};
int64_t $tmp1091 = $tmp1090.value;
$tmp1085[$tmp1091] = $tmp1089;
// line 185
panda$core$Int64** $tmp1092 = *(&local0);
panda$core$Int64** $tmp1093 = *(&local0);
panda$core$Int64 $tmp1094 = (panda$core$Int64) {0};
int64_t $tmp1095 = $tmp1094.value;
panda$core$Int64* $tmp1096 = $tmp1093[$tmp1095];
panda$core$Int64 $tmp1097 = (panda$core$Int64) {117};
int64_t $tmp1098 = $tmp1097.value;
$tmp1092[$tmp1098] = $tmp1096;
// line 186
panda$core$Int64** $tmp1099 = *(&local0);
panda$core$Int64** $tmp1100 = *(&local0);
panda$core$Int64 $tmp1101 = (panda$core$Int64) {0};
int64_t $tmp1102 = $tmp1101.value;
panda$core$Int64* $tmp1103 = $tmp1100[$tmp1102];
panda$core$Int64 $tmp1104 = (panda$core$Int64) {118};
int64_t $tmp1105 = $tmp1104.value;
$tmp1099[$tmp1105] = $tmp1103;
// line 187
panda$core$Int64** $tmp1106 = *(&local0);
panda$core$Int64** $tmp1107 = *(&local0);
panda$core$Int64 $tmp1108 = (panda$core$Int64) {0};
int64_t $tmp1109 = $tmp1108.value;
panda$core$Int64* $tmp1110 = $tmp1107[$tmp1109];
panda$core$Int64 $tmp1111 = (panda$core$Int64) {119};
int64_t $tmp1112 = $tmp1111.value;
$tmp1106[$tmp1112] = $tmp1110;
// line 188
panda$core$Int64** $tmp1113 = *(&local0);
panda$core$Int64** $tmp1114 = *(&local0);
panda$core$Int64 $tmp1115 = (panda$core$Int64) {0};
int64_t $tmp1116 = $tmp1115.value;
panda$core$Int64* $tmp1117 = $tmp1114[$tmp1116];
panda$core$Int64 $tmp1118 = (panda$core$Int64) {120};
int64_t $tmp1119 = $tmp1118.value;
$tmp1113[$tmp1119] = $tmp1117;
// line 189
panda$core$Int64** $tmp1120 = *(&local0);
panda$core$Int64** $tmp1121 = *(&local0);
panda$core$Int64 $tmp1122 = (panda$core$Int64) {0};
int64_t $tmp1123 = $tmp1122.value;
panda$core$Int64* $tmp1124 = $tmp1121[$tmp1123];
panda$core$Int64 $tmp1125 = (panda$core$Int64) {121};
int64_t $tmp1126 = $tmp1125.value;
$tmp1120[$tmp1126] = $tmp1124;
// line 190
panda$core$Int64** $tmp1127 = *(&local0);
panda$core$Int64** $tmp1128 = *(&local0);
panda$core$Int64 $tmp1129 = (panda$core$Int64) {0};
int64_t $tmp1130 = $tmp1129.value;
panda$core$Int64* $tmp1131 = $tmp1128[$tmp1130];
panda$core$Int64 $tmp1132 = (panda$core$Int64) {122};
int64_t $tmp1133 = $tmp1132.value;
$tmp1127[$tmp1133] = $tmp1131;
// line 191
panda$core$Int64** $tmp1134 = *(&local0);
panda$core$Int64 $tmp1135 = (panda$core$Int64) {20};
panda$core$Int64 $tmp1136 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1137 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp1135, $tmp1136);
panda$core$Int64 $tmp1138 = (panda$core$Int64) {123};
int64_t $tmp1139 = $tmp1138.value;
$tmp1134[$tmp1139] = $tmp1137;
// line 192
panda$core$Int64** $tmp1140 = *(&local0);
panda$core$Int64 $tmp1141 = (panda$core$Int64) {123};
int64_t $tmp1142 = $tmp1141.value;
panda$core$Int64* $tmp1143 = $tmp1140[$tmp1142];
panda$core$Int64 $tmp1144 = (panda$core$Int64) {18};
panda$core$Int64 $tmp1145 = (panda$core$Int64) {1};
int64_t $tmp1146 = $tmp1145.value;
$tmp1143[$tmp1146] = $tmp1144;
// line 193
panda$core$Int64** $tmp1147 = *(&local0);
panda$core$Int64 $tmp1148 = (panda$core$Int64) {123};
int64_t $tmp1149 = $tmp1148.value;
panda$core$Int64* $tmp1150 = $tmp1147[$tmp1149];
panda$core$Int64 $tmp1151 = (panda$core$Int64) {2};
panda$core$Int64 $tmp1152 = (panda$core$Int64) {14};
int64_t $tmp1153 = $tmp1152.value;
$tmp1150[$tmp1153] = $tmp1151;
// line 194
panda$core$Int64** $tmp1154 = *(&local0);
panda$core$Int64** $tmp1155 = *(&local0);
panda$core$Int64 $tmp1156 = (panda$core$Int64) {0};
int64_t $tmp1157 = $tmp1156.value;
panda$core$Int64* $tmp1158 = $tmp1155[$tmp1157];
panda$core$Int64 $tmp1159 = (panda$core$Int64) {124};
int64_t $tmp1160 = $tmp1159.value;
$tmp1154[$tmp1160] = $tmp1158;
// line 195
panda$core$Int64** $tmp1161 = *(&local0);
panda$core$Int64 $tmp1162 = (panda$core$Int64) {20};
panda$core$Int64 $tmp1163 = (panda$core$Int64) {0};
panda$core$Int64* $tmp1164 = org$pandalanguage$regex$RegexLexer$alloc$panda$core$Int64$panda$core$Int64$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT($tmp1162, $tmp1163);
panda$core$Int64 $tmp1165 = (panda$core$Int64) {125};
int64_t $tmp1166 = $tmp1165.value;
$tmp1161[$tmp1166] = $tmp1164;
// line 196
panda$core$Int64** $tmp1167 = *(&local0);
panda$core$Int64 $tmp1168 = (panda$core$Int64) {125};
int64_t $tmp1169 = $tmp1168.value;
panda$core$Int64* $tmp1170 = $tmp1167[$tmp1169];
panda$core$Int64 $tmp1171 = (panda$core$Int64) {19};
panda$core$Int64 $tmp1172 = (panda$core$Int64) {1};
int64_t $tmp1173 = $tmp1172.value;
$tmp1170[$tmp1173] = $tmp1171;
// line 197
panda$core$Int64** $tmp1174 = *(&local0);
panda$core$Int64 $tmp1175 = (panda$core$Int64) {125};
int64_t $tmp1176 = $tmp1175.value;
panda$core$Int64* $tmp1177 = $tmp1174[$tmp1176];
panda$core$Int64 $tmp1178 = (panda$core$Int64) {2};
panda$core$Int64 $tmp1179 = (panda$core$Int64) {14};
int64_t $tmp1180 = $tmp1179.value;
$tmp1177[$tmp1180] = $tmp1178;
// line 198
panda$core$Int64** $tmp1181 = *(&local0);
panda$core$Int64** $tmp1182 = *(&local0);
panda$core$Int64 $tmp1183 = (panda$core$Int64) {0};
int64_t $tmp1184 = $tmp1183.value;
panda$core$Int64* $tmp1185 = $tmp1182[$tmp1184];
panda$core$Int64 $tmp1186 = (panda$core$Int64) {126};
int64_t $tmp1187 = $tmp1186.value;
$tmp1181[$tmp1187] = $tmp1185;
// line 199
panda$core$Int64** $tmp1188 = *(&local0);
panda$core$Int64** $tmp1189 = *(&local0);
panda$core$Int64 $tmp1190 = (panda$core$Int64) {0};
int64_t $tmp1191 = $tmp1190.value;
panda$core$Int64* $tmp1192 = $tmp1189[$tmp1191];
panda$core$Int64 $tmp1193 = (panda$core$Int64) {127};
int64_t $tmp1194 = $tmp1193.value;
$tmp1188[$tmp1194] = $tmp1192;
// line 200
panda$core$Int64** $tmp1195 = *(&local0);
panda$core$Int64** $tmp1196 = *(&local0);
panda$core$Int64 $tmp1197 = (panda$core$Int64) {0};
int64_t $tmp1198 = $tmp1197.value;
panda$core$Int64* $tmp1199 = $tmp1196[$tmp1198];
panda$core$Int64 $tmp1200 = (panda$core$Int64) {128};
int64_t $tmp1201 = $tmp1200.value;
$tmp1195[$tmp1201] = $tmp1199;
// line 201
panda$core$Int64** $tmp1202 = *(&local0);
panda$core$Int64** $tmp1203 = *(&local0);
panda$core$Int64 $tmp1204 = (panda$core$Int64) {0};
int64_t $tmp1205 = $tmp1204.value;
panda$core$Int64* $tmp1206 = $tmp1203[$tmp1205];
panda$core$Int64 $tmp1207 = (panda$core$Int64) {129};
int64_t $tmp1208 = $tmp1207.value;
$tmp1202[$tmp1208] = $tmp1206;
// line 202
panda$core$Int64** $tmp1209 = *(&local0);
panda$core$Int64** $tmp1210 = *(&local0);
panda$core$Int64 $tmp1211 = (panda$core$Int64) {0};
int64_t $tmp1212 = $tmp1211.value;
panda$core$Int64* $tmp1213 = $tmp1210[$tmp1212];
panda$core$Int64 $tmp1214 = (panda$core$Int64) {130};
int64_t $tmp1215 = $tmp1214.value;
$tmp1209[$tmp1215] = $tmp1213;
// line 203
panda$core$Int64** $tmp1216 = *(&local0);
panda$core$Int64** $tmp1217 = *(&local0);
panda$core$Int64 $tmp1218 = (panda$core$Int64) {0};
int64_t $tmp1219 = $tmp1218.value;
panda$core$Int64* $tmp1220 = $tmp1217[$tmp1219];
panda$core$Int64 $tmp1221 = (panda$core$Int64) {131};
int64_t $tmp1222 = $tmp1221.value;
$tmp1216[$tmp1222] = $tmp1220;
// line 204
panda$core$Int64** $tmp1223 = *(&local0);
panda$core$Int64** $tmp1224 = *(&local0);
panda$core$Int64 $tmp1225 = (panda$core$Int64) {0};
int64_t $tmp1226 = $tmp1225.value;
panda$core$Int64* $tmp1227 = $tmp1224[$tmp1226];
panda$core$Int64 $tmp1228 = (panda$core$Int64) {132};
int64_t $tmp1229 = $tmp1228.value;
$tmp1223[$tmp1229] = $tmp1227;
// line 205
panda$core$Int64** $tmp1230 = *(&local0);
panda$core$Int64** $tmp1231 = *(&local0);
panda$core$Int64 $tmp1232 = (panda$core$Int64) {0};
int64_t $tmp1233 = $tmp1232.value;
panda$core$Int64* $tmp1234 = $tmp1231[$tmp1233];
panda$core$Int64 $tmp1235 = (panda$core$Int64) {133};
int64_t $tmp1236 = $tmp1235.value;
$tmp1230[$tmp1236] = $tmp1234;
// line 206
panda$core$Int64** $tmp1237 = *(&local0);
panda$core$Int64** $tmp1238 = *(&local0);
panda$core$Int64 $tmp1239 = (panda$core$Int64) {0};
int64_t $tmp1240 = $tmp1239.value;
panda$core$Int64* $tmp1241 = $tmp1238[$tmp1240];
panda$core$Int64 $tmp1242 = (panda$core$Int64) {134};
int64_t $tmp1243 = $tmp1242.value;
$tmp1237[$tmp1243] = $tmp1241;
// line 207
panda$core$Int64** $tmp1244 = *(&local0);
panda$core$Int64** $tmp1245 = *(&local0);
panda$core$Int64 $tmp1246 = (panda$core$Int64) {0};
int64_t $tmp1247 = $tmp1246.value;
panda$core$Int64* $tmp1248 = $tmp1245[$tmp1247];
panda$core$Int64 $tmp1249 = (panda$core$Int64) {135};
int64_t $tmp1250 = $tmp1249.value;
$tmp1244[$tmp1250] = $tmp1248;
// line 208
panda$core$Int64** $tmp1251 = *(&local0);
panda$core$Int64** $tmp1252 = *(&local0);
panda$core$Int64 $tmp1253 = (panda$core$Int64) {0};
int64_t $tmp1254 = $tmp1253.value;
panda$core$Int64* $tmp1255 = $tmp1252[$tmp1254];
panda$core$Int64 $tmp1256 = (panda$core$Int64) {136};
int64_t $tmp1257 = $tmp1256.value;
$tmp1251[$tmp1257] = $tmp1255;
// line 209
panda$core$Int64** $tmp1258 = *(&local0);
panda$core$Int64** $tmp1259 = *(&local0);
panda$core$Int64 $tmp1260 = (panda$core$Int64) {0};
int64_t $tmp1261 = $tmp1260.value;
panda$core$Int64* $tmp1262 = $tmp1259[$tmp1261];
panda$core$Int64 $tmp1263 = (panda$core$Int64) {137};
int64_t $tmp1264 = $tmp1263.value;
$tmp1258[$tmp1264] = $tmp1262;
// line 210
panda$core$Int64** $tmp1265 = *(&local0);
panda$core$Int64** $tmp1266 = *(&local0);
panda$core$Int64 $tmp1267 = (panda$core$Int64) {0};
int64_t $tmp1268 = $tmp1267.value;
panda$core$Int64* $tmp1269 = $tmp1266[$tmp1268];
panda$core$Int64 $tmp1270 = (panda$core$Int64) {138};
int64_t $tmp1271 = $tmp1270.value;
$tmp1265[$tmp1271] = $tmp1269;
// line 211
panda$core$Int64** $tmp1272 = *(&local0);
panda$core$Int64** $tmp1273 = *(&local0);
panda$core$Int64 $tmp1274 = (panda$core$Int64) {0};
int64_t $tmp1275 = $tmp1274.value;
panda$core$Int64* $tmp1276 = $tmp1273[$tmp1275];
panda$core$Int64 $tmp1277 = (panda$core$Int64) {139};
int64_t $tmp1278 = $tmp1277.value;
$tmp1272[$tmp1278] = $tmp1276;
// line 212
panda$core$Int64** $tmp1279 = *(&local0);
panda$core$Int64** $tmp1280 = *(&local0);
panda$core$Int64 $tmp1281 = (panda$core$Int64) {0};
int64_t $tmp1282 = $tmp1281.value;
panda$core$Int64* $tmp1283 = $tmp1280[$tmp1282];
panda$core$Int64 $tmp1284 = (panda$core$Int64) {140};
int64_t $tmp1285 = $tmp1284.value;
$tmp1279[$tmp1285] = $tmp1283;
// line 213
panda$core$Int64** $tmp1286 = *(&local0);
panda$core$Int64** $tmp1287 = *(&local0);
panda$core$Int64 $tmp1288 = (panda$core$Int64) {0};
int64_t $tmp1289 = $tmp1288.value;
panda$core$Int64* $tmp1290 = $tmp1287[$tmp1289];
panda$core$Int64 $tmp1291 = (panda$core$Int64) {141};
int64_t $tmp1292 = $tmp1291.value;
$tmp1286[$tmp1292] = $tmp1290;
// line 214
panda$core$Int64** $tmp1293 = *(&local0);
panda$core$Int64** $tmp1294 = *(&local0);
panda$core$Int64 $tmp1295 = (panda$core$Int64) {0};
int64_t $tmp1296 = $tmp1295.value;
panda$core$Int64* $tmp1297 = $tmp1294[$tmp1296];
panda$core$Int64 $tmp1298 = (panda$core$Int64) {142};
int64_t $tmp1299 = $tmp1298.value;
$tmp1293[$tmp1299] = $tmp1297;
// line 215
panda$core$Int64** $tmp1300 = *(&local0);
panda$core$Int64** $tmp1301 = *(&local0);
panda$core$Int64 $tmp1302 = (panda$core$Int64) {0};
int64_t $tmp1303 = $tmp1302.value;
panda$core$Int64* $tmp1304 = $tmp1301[$tmp1303];
panda$core$Int64 $tmp1305 = (panda$core$Int64) {143};
int64_t $tmp1306 = $tmp1305.value;
$tmp1300[$tmp1306] = $tmp1304;
// line 216
panda$core$Int64** $tmp1307 = *(&local0);
panda$core$Int64** $tmp1308 = *(&local0);
panda$core$Int64 $tmp1309 = (panda$core$Int64) {0};
int64_t $tmp1310 = $tmp1309.value;
panda$core$Int64* $tmp1311 = $tmp1308[$tmp1310];
panda$core$Int64 $tmp1312 = (panda$core$Int64) {144};
int64_t $tmp1313 = $tmp1312.value;
$tmp1307[$tmp1313] = $tmp1311;
// line 217
panda$core$Int64** $tmp1314 = *(&local0);
panda$core$Int64** $tmp1315 = *(&local0);
panda$core$Int64 $tmp1316 = (panda$core$Int64) {0};
int64_t $tmp1317 = $tmp1316.value;
panda$core$Int64* $tmp1318 = $tmp1315[$tmp1317];
panda$core$Int64 $tmp1319 = (panda$core$Int64) {145};
int64_t $tmp1320 = $tmp1319.value;
$tmp1314[$tmp1320] = $tmp1318;
// line 218
panda$core$Int64** $tmp1321 = *(&local0);
panda$core$Int64** $tmp1322 = *(&local0);
panda$core$Int64 $tmp1323 = (panda$core$Int64) {0};
int64_t $tmp1324 = $tmp1323.value;
panda$core$Int64* $tmp1325 = $tmp1322[$tmp1324];
panda$core$Int64 $tmp1326 = (panda$core$Int64) {146};
int64_t $tmp1327 = $tmp1326.value;
$tmp1321[$tmp1327] = $tmp1325;
// line 219
panda$core$Int64** $tmp1328 = *(&local0);
panda$core$Int64** $tmp1329 = *(&local0);
panda$core$Int64 $tmp1330 = (panda$core$Int64) {0};
int64_t $tmp1331 = $tmp1330.value;
panda$core$Int64* $tmp1332 = $tmp1329[$tmp1331];
panda$core$Int64 $tmp1333 = (panda$core$Int64) {147};
int64_t $tmp1334 = $tmp1333.value;
$tmp1328[$tmp1334] = $tmp1332;
// line 220
panda$core$Int64** $tmp1335 = *(&local0);
panda$core$Int64** $tmp1336 = *(&local0);
panda$core$Int64 $tmp1337 = (panda$core$Int64) {0};
int64_t $tmp1338 = $tmp1337.value;
panda$core$Int64* $tmp1339 = $tmp1336[$tmp1338];
panda$core$Int64 $tmp1340 = (panda$core$Int64) {148};
int64_t $tmp1341 = $tmp1340.value;
$tmp1335[$tmp1341] = $tmp1339;
// line 221
panda$core$Int64** $tmp1342 = *(&local0);
panda$core$Int64** $tmp1343 = *(&local0);
panda$core$Int64 $tmp1344 = (panda$core$Int64) {0};
int64_t $tmp1345 = $tmp1344.value;
panda$core$Int64* $tmp1346 = $tmp1343[$tmp1345];
panda$core$Int64 $tmp1347 = (panda$core$Int64) {149};
int64_t $tmp1348 = $tmp1347.value;
$tmp1342[$tmp1348] = $tmp1346;
// line 222
panda$core$Int64** $tmp1349 = *(&local0);
panda$core$Int64** $tmp1350 = *(&local0);
panda$core$Int64 $tmp1351 = (panda$core$Int64) {0};
int64_t $tmp1352 = $tmp1351.value;
panda$core$Int64* $tmp1353 = $tmp1350[$tmp1352];
panda$core$Int64 $tmp1354 = (panda$core$Int64) {150};
int64_t $tmp1355 = $tmp1354.value;
$tmp1349[$tmp1355] = $tmp1353;
// line 223
panda$core$Int64** $tmp1356 = *(&local0);
panda$core$Int64** $tmp1357 = *(&local0);
panda$core$Int64 $tmp1358 = (panda$core$Int64) {0};
int64_t $tmp1359 = $tmp1358.value;
panda$core$Int64* $tmp1360 = $tmp1357[$tmp1359];
panda$core$Int64 $tmp1361 = (panda$core$Int64) {151};
int64_t $tmp1362 = $tmp1361.value;
$tmp1356[$tmp1362] = $tmp1360;
// line 224
panda$core$Int64** $tmp1363 = *(&local0);
panda$core$Int64** $tmp1364 = *(&local0);
panda$core$Int64 $tmp1365 = (panda$core$Int64) {0};
int64_t $tmp1366 = $tmp1365.value;
panda$core$Int64* $tmp1367 = $tmp1364[$tmp1366];
panda$core$Int64 $tmp1368 = (panda$core$Int64) {152};
int64_t $tmp1369 = $tmp1368.value;
$tmp1363[$tmp1369] = $tmp1367;
// line 225
panda$core$Int64** $tmp1370 = *(&local0);
panda$core$Int64** $tmp1371 = *(&local0);
panda$core$Int64 $tmp1372 = (panda$core$Int64) {0};
int64_t $tmp1373 = $tmp1372.value;
panda$core$Int64* $tmp1374 = $tmp1371[$tmp1373];
panda$core$Int64 $tmp1375 = (panda$core$Int64) {153};
int64_t $tmp1376 = $tmp1375.value;
$tmp1370[$tmp1376] = $tmp1374;
// line 226
panda$core$Int64** $tmp1377 = *(&local0);
panda$core$Int64** $tmp1378 = *(&local0);
panda$core$Int64 $tmp1379 = (panda$core$Int64) {0};
int64_t $tmp1380 = $tmp1379.value;
panda$core$Int64* $tmp1381 = $tmp1378[$tmp1380];
panda$core$Int64 $tmp1382 = (panda$core$Int64) {154};
int64_t $tmp1383 = $tmp1382.value;
$tmp1377[$tmp1383] = $tmp1381;
// line 227
panda$core$Int64** $tmp1384 = *(&local0);
panda$core$Int64** $tmp1385 = *(&local0);
panda$core$Int64 $tmp1386 = (panda$core$Int64) {0};
int64_t $tmp1387 = $tmp1386.value;
panda$core$Int64* $tmp1388 = $tmp1385[$tmp1387];
panda$core$Int64 $tmp1389 = (panda$core$Int64) {155};
int64_t $tmp1390 = $tmp1389.value;
$tmp1384[$tmp1390] = $tmp1388;
// line 228
panda$core$Int64** $tmp1391 = *(&local0);
panda$core$Int64** $tmp1392 = *(&local0);
panda$core$Int64 $tmp1393 = (panda$core$Int64) {0};
int64_t $tmp1394 = $tmp1393.value;
panda$core$Int64* $tmp1395 = $tmp1392[$tmp1394];
panda$core$Int64 $tmp1396 = (panda$core$Int64) {156};
int64_t $tmp1397 = $tmp1396.value;
$tmp1391[$tmp1397] = $tmp1395;
// line 229
panda$core$Int64** $tmp1398 = *(&local0);
panda$core$Int64** $tmp1399 = *(&local0);
panda$core$Int64 $tmp1400 = (panda$core$Int64) {0};
int64_t $tmp1401 = $tmp1400.value;
panda$core$Int64* $tmp1402 = $tmp1399[$tmp1401];
panda$core$Int64 $tmp1403 = (panda$core$Int64) {157};
int64_t $tmp1404 = $tmp1403.value;
$tmp1398[$tmp1404] = $tmp1402;
// line 230
panda$core$Int64** $tmp1405 = *(&local0);
panda$core$Int64** $tmp1406 = *(&local0);
panda$core$Int64 $tmp1407 = (panda$core$Int64) {0};
int64_t $tmp1408 = $tmp1407.value;
panda$core$Int64* $tmp1409 = $tmp1406[$tmp1408];
panda$core$Int64 $tmp1410 = (panda$core$Int64) {158};
int64_t $tmp1411 = $tmp1410.value;
$tmp1405[$tmp1411] = $tmp1409;
// line 231
panda$core$Int64** $tmp1412 = *(&local0);
panda$core$Int64** $tmp1413 = *(&local0);
panda$core$Int64 $tmp1414 = (panda$core$Int64) {0};
int64_t $tmp1415 = $tmp1414.value;
panda$core$Int64* $tmp1416 = $tmp1413[$tmp1415];
panda$core$Int64 $tmp1417 = (panda$core$Int64) {159};
int64_t $tmp1418 = $tmp1417.value;
$tmp1412[$tmp1418] = $tmp1416;
// line 232
panda$core$Int64** $tmp1419 = *(&local0);
panda$core$Int64** $tmp1420 = *(&local0);
panda$core$Int64 $tmp1421 = (panda$core$Int64) {0};
int64_t $tmp1422 = $tmp1421.value;
panda$core$Int64* $tmp1423 = $tmp1420[$tmp1422];
panda$core$Int64 $tmp1424 = (panda$core$Int64) {160};
int64_t $tmp1425 = $tmp1424.value;
$tmp1419[$tmp1425] = $tmp1423;
// line 233
panda$core$Int64** $tmp1426 = *(&local0);
panda$core$Int64** $tmp1427 = *(&local0);
panda$core$Int64 $tmp1428 = (panda$core$Int64) {0};
int64_t $tmp1429 = $tmp1428.value;
panda$core$Int64* $tmp1430 = $tmp1427[$tmp1429];
panda$core$Int64 $tmp1431 = (panda$core$Int64) {161};
int64_t $tmp1432 = $tmp1431.value;
$tmp1426[$tmp1432] = $tmp1430;
// line 234
panda$core$Int64** $tmp1433 = *(&local0);
panda$core$Int64** $tmp1434 = *(&local0);
panda$core$Int64 $tmp1435 = (panda$core$Int64) {0};
int64_t $tmp1436 = $tmp1435.value;
panda$core$Int64* $tmp1437 = $tmp1434[$tmp1436];
panda$core$Int64 $tmp1438 = (panda$core$Int64) {162};
int64_t $tmp1439 = $tmp1438.value;
$tmp1433[$tmp1439] = $tmp1437;
// line 235
panda$core$Int64** $tmp1440 = *(&local0);
panda$core$Int64** $tmp1441 = *(&local0);
panda$core$Int64 $tmp1442 = (panda$core$Int64) {0};
int64_t $tmp1443 = $tmp1442.value;
panda$core$Int64* $tmp1444 = $tmp1441[$tmp1443];
panda$core$Int64 $tmp1445 = (panda$core$Int64) {163};
int64_t $tmp1446 = $tmp1445.value;
$tmp1440[$tmp1446] = $tmp1444;
// line 236
panda$core$Int64** $tmp1447 = *(&local0);
panda$core$Int64** $tmp1448 = *(&local0);
panda$core$Int64 $tmp1449 = (panda$core$Int64) {0};
int64_t $tmp1450 = $tmp1449.value;
panda$core$Int64* $tmp1451 = $tmp1448[$tmp1450];
panda$core$Int64 $tmp1452 = (panda$core$Int64) {164};
int64_t $tmp1453 = $tmp1452.value;
$tmp1447[$tmp1453] = $tmp1451;
// line 237
panda$core$Int64** $tmp1454 = *(&local0);
panda$core$Int64** $tmp1455 = *(&local0);
panda$core$Int64 $tmp1456 = (panda$core$Int64) {0};
int64_t $tmp1457 = $tmp1456.value;
panda$core$Int64* $tmp1458 = $tmp1455[$tmp1457];
panda$core$Int64 $tmp1459 = (panda$core$Int64) {165};
int64_t $tmp1460 = $tmp1459.value;
$tmp1454[$tmp1460] = $tmp1458;
// line 238
panda$core$Int64** $tmp1461 = *(&local0);
panda$core$Int64** $tmp1462 = *(&local0);
panda$core$Int64 $tmp1463 = (panda$core$Int64) {0};
int64_t $tmp1464 = $tmp1463.value;
panda$core$Int64* $tmp1465 = $tmp1462[$tmp1464];
panda$core$Int64 $tmp1466 = (panda$core$Int64) {166};
int64_t $tmp1467 = $tmp1466.value;
$tmp1461[$tmp1467] = $tmp1465;
// line 239
panda$core$Int64** $tmp1468 = *(&local0);
panda$core$Int64** $tmp1469 = *(&local0);
panda$core$Int64 $tmp1470 = (panda$core$Int64) {0};
int64_t $tmp1471 = $tmp1470.value;
panda$core$Int64* $tmp1472 = $tmp1469[$tmp1471];
panda$core$Int64 $tmp1473 = (panda$core$Int64) {167};
int64_t $tmp1474 = $tmp1473.value;
$tmp1468[$tmp1474] = $tmp1472;
// line 240
panda$core$Int64** $tmp1475 = *(&local0);
panda$core$Int64** $tmp1476 = *(&local0);
panda$core$Int64 $tmp1477 = (panda$core$Int64) {0};
int64_t $tmp1478 = $tmp1477.value;
panda$core$Int64* $tmp1479 = $tmp1476[$tmp1478];
panda$core$Int64 $tmp1480 = (panda$core$Int64) {168};
int64_t $tmp1481 = $tmp1480.value;
$tmp1475[$tmp1481] = $tmp1479;
// line 241
panda$core$Int64** $tmp1482 = *(&local0);
panda$core$Int64** $tmp1483 = *(&local0);
panda$core$Int64 $tmp1484 = (panda$core$Int64) {0};
int64_t $tmp1485 = $tmp1484.value;
panda$core$Int64* $tmp1486 = $tmp1483[$tmp1485];
panda$core$Int64 $tmp1487 = (panda$core$Int64) {169};
int64_t $tmp1488 = $tmp1487.value;
$tmp1482[$tmp1488] = $tmp1486;
// line 242
panda$core$Int64** $tmp1489 = *(&local0);
panda$core$Int64** $tmp1490 = *(&local0);
panda$core$Int64 $tmp1491 = (panda$core$Int64) {0};
int64_t $tmp1492 = $tmp1491.value;
panda$core$Int64* $tmp1493 = $tmp1490[$tmp1492];
panda$core$Int64 $tmp1494 = (panda$core$Int64) {170};
int64_t $tmp1495 = $tmp1494.value;
$tmp1489[$tmp1495] = $tmp1493;
// line 243
panda$core$Int64** $tmp1496 = *(&local0);
panda$core$Int64** $tmp1497 = *(&local0);
panda$core$Int64 $tmp1498 = (panda$core$Int64) {0};
int64_t $tmp1499 = $tmp1498.value;
panda$core$Int64* $tmp1500 = $tmp1497[$tmp1499];
panda$core$Int64 $tmp1501 = (panda$core$Int64) {171};
int64_t $tmp1502 = $tmp1501.value;
$tmp1496[$tmp1502] = $tmp1500;
// line 244
panda$core$Int64** $tmp1503 = *(&local0);
panda$core$Int64** $tmp1504 = *(&local0);
panda$core$Int64 $tmp1505 = (panda$core$Int64) {0};
int64_t $tmp1506 = $tmp1505.value;
panda$core$Int64* $tmp1507 = $tmp1504[$tmp1506];
panda$core$Int64 $tmp1508 = (panda$core$Int64) {172};
int64_t $tmp1509 = $tmp1508.value;
$tmp1503[$tmp1509] = $tmp1507;
// line 245
panda$core$Int64** $tmp1510 = *(&local0);
panda$core$Int64** $tmp1511 = *(&local0);
panda$core$Int64 $tmp1512 = (panda$core$Int64) {0};
int64_t $tmp1513 = $tmp1512.value;
panda$core$Int64* $tmp1514 = $tmp1511[$tmp1513];
panda$core$Int64 $tmp1515 = (panda$core$Int64) {173};
int64_t $tmp1516 = $tmp1515.value;
$tmp1510[$tmp1516] = $tmp1514;
// line 246
panda$core$Int64** $tmp1517 = *(&local0);
panda$core$Int64** $tmp1518 = *(&local0);
panda$core$Int64 $tmp1519 = (panda$core$Int64) {0};
int64_t $tmp1520 = $tmp1519.value;
panda$core$Int64* $tmp1521 = $tmp1518[$tmp1520];
panda$core$Int64 $tmp1522 = (panda$core$Int64) {174};
int64_t $tmp1523 = $tmp1522.value;
$tmp1517[$tmp1523] = $tmp1521;
// line 247
panda$core$Int64** $tmp1524 = *(&local0);
panda$core$Int64** $tmp1525 = *(&local0);
panda$core$Int64 $tmp1526 = (panda$core$Int64) {0};
int64_t $tmp1527 = $tmp1526.value;
panda$core$Int64* $tmp1528 = $tmp1525[$tmp1527];
panda$core$Int64 $tmp1529 = (panda$core$Int64) {175};
int64_t $tmp1530 = $tmp1529.value;
$tmp1524[$tmp1530] = $tmp1528;
// line 248
panda$core$Int64** $tmp1531 = *(&local0);
panda$core$Int64** $tmp1532 = *(&local0);
panda$core$Int64 $tmp1533 = (panda$core$Int64) {0};
int64_t $tmp1534 = $tmp1533.value;
panda$core$Int64* $tmp1535 = $tmp1532[$tmp1534];
panda$core$Int64 $tmp1536 = (panda$core$Int64) {176};
int64_t $tmp1537 = $tmp1536.value;
$tmp1531[$tmp1537] = $tmp1535;
// line 249
panda$core$Int64** $tmp1538 = *(&local0);
panda$core$Int64** $tmp1539 = *(&local0);
panda$core$Int64 $tmp1540 = (panda$core$Int64) {0};
int64_t $tmp1541 = $tmp1540.value;
panda$core$Int64* $tmp1542 = $tmp1539[$tmp1541];
panda$core$Int64 $tmp1543 = (panda$core$Int64) {177};
int64_t $tmp1544 = $tmp1543.value;
$tmp1538[$tmp1544] = $tmp1542;
// line 250
panda$core$Int64** $tmp1545 = *(&local0);
panda$core$Int64** $tmp1546 = *(&local0);
panda$core$Int64 $tmp1547 = (panda$core$Int64) {0};
int64_t $tmp1548 = $tmp1547.value;
panda$core$Int64* $tmp1549 = $tmp1546[$tmp1548];
panda$core$Int64 $tmp1550 = (panda$core$Int64) {178};
int64_t $tmp1551 = $tmp1550.value;
$tmp1545[$tmp1551] = $tmp1549;
// line 251
panda$core$Int64** $tmp1552 = *(&local0);
panda$core$Int64** $tmp1553 = *(&local0);
panda$core$Int64 $tmp1554 = (panda$core$Int64) {0};
int64_t $tmp1555 = $tmp1554.value;
panda$core$Int64* $tmp1556 = $tmp1553[$tmp1555];
panda$core$Int64 $tmp1557 = (panda$core$Int64) {179};
int64_t $tmp1558 = $tmp1557.value;
$tmp1552[$tmp1558] = $tmp1556;
// line 252
panda$core$Int64** $tmp1559 = *(&local0);
panda$core$Int64** $tmp1560 = *(&local0);
panda$core$Int64 $tmp1561 = (panda$core$Int64) {0};
int64_t $tmp1562 = $tmp1561.value;
panda$core$Int64* $tmp1563 = $tmp1560[$tmp1562];
panda$core$Int64 $tmp1564 = (panda$core$Int64) {180};
int64_t $tmp1565 = $tmp1564.value;
$tmp1559[$tmp1565] = $tmp1563;
// line 253
panda$core$Int64** $tmp1566 = *(&local0);
panda$core$Int64** $tmp1567 = *(&local0);
panda$core$Int64 $tmp1568 = (panda$core$Int64) {0};
int64_t $tmp1569 = $tmp1568.value;
panda$core$Int64* $tmp1570 = $tmp1567[$tmp1569];
panda$core$Int64 $tmp1571 = (panda$core$Int64) {181};
int64_t $tmp1572 = $tmp1571.value;
$tmp1566[$tmp1572] = $tmp1570;
// line 254
panda$core$Int64** $tmp1573 = *(&local0);
panda$core$Int64** $tmp1574 = *(&local0);
panda$core$Int64 $tmp1575 = (panda$core$Int64) {0};
int64_t $tmp1576 = $tmp1575.value;
panda$core$Int64* $tmp1577 = $tmp1574[$tmp1576];
panda$core$Int64 $tmp1578 = (panda$core$Int64) {182};
int64_t $tmp1579 = $tmp1578.value;
$tmp1573[$tmp1579] = $tmp1577;
// line 255
panda$core$Int64** $tmp1580 = *(&local0);
panda$core$Int64** $tmp1581 = *(&local0);
panda$core$Int64 $tmp1582 = (panda$core$Int64) {0};
int64_t $tmp1583 = $tmp1582.value;
panda$core$Int64* $tmp1584 = $tmp1581[$tmp1583];
panda$core$Int64 $tmp1585 = (panda$core$Int64) {183};
int64_t $tmp1586 = $tmp1585.value;
$tmp1580[$tmp1586] = $tmp1584;
// line 256
panda$core$Int64** $tmp1587 = *(&local0);
panda$core$Int64** $tmp1588 = *(&local0);
panda$core$Int64 $tmp1589 = (panda$core$Int64) {0};
int64_t $tmp1590 = $tmp1589.value;
panda$core$Int64* $tmp1591 = $tmp1588[$tmp1590];
panda$core$Int64 $tmp1592 = (panda$core$Int64) {184};
int64_t $tmp1593 = $tmp1592.value;
$tmp1587[$tmp1593] = $tmp1591;
// line 257
panda$core$Int64** $tmp1594 = *(&local0);
panda$core$Int64** $tmp1595 = *(&local0);
panda$core$Int64 $tmp1596 = (panda$core$Int64) {0};
int64_t $tmp1597 = $tmp1596.value;
panda$core$Int64* $tmp1598 = $tmp1595[$tmp1597];
panda$core$Int64 $tmp1599 = (panda$core$Int64) {185};
int64_t $tmp1600 = $tmp1599.value;
$tmp1594[$tmp1600] = $tmp1598;
// line 258
panda$core$Int64** $tmp1601 = *(&local0);
panda$core$Int64** $tmp1602 = *(&local0);
panda$core$Int64 $tmp1603 = (panda$core$Int64) {0};
int64_t $tmp1604 = $tmp1603.value;
panda$core$Int64* $tmp1605 = $tmp1602[$tmp1604];
panda$core$Int64 $tmp1606 = (panda$core$Int64) {186};
int64_t $tmp1607 = $tmp1606.value;
$tmp1601[$tmp1607] = $tmp1605;
// line 259
panda$core$Int64** $tmp1608 = *(&local0);
panda$core$Int64** $tmp1609 = *(&local0);
panda$core$Int64 $tmp1610 = (panda$core$Int64) {0};
int64_t $tmp1611 = $tmp1610.value;
panda$core$Int64* $tmp1612 = $tmp1609[$tmp1611];
panda$core$Int64 $tmp1613 = (panda$core$Int64) {187};
int64_t $tmp1614 = $tmp1613.value;
$tmp1608[$tmp1614] = $tmp1612;
// line 260
panda$core$Int64** $tmp1615 = *(&local0);
panda$core$Int64** $tmp1616 = *(&local0);
panda$core$Int64 $tmp1617 = (panda$core$Int64) {0};
int64_t $tmp1618 = $tmp1617.value;
panda$core$Int64* $tmp1619 = $tmp1616[$tmp1618];
panda$core$Int64 $tmp1620 = (panda$core$Int64) {188};
int64_t $tmp1621 = $tmp1620.value;
$tmp1615[$tmp1621] = $tmp1619;
// line 261
panda$core$Int64** $tmp1622 = *(&local0);
panda$core$Int64** $tmp1623 = *(&local0);
panda$core$Int64 $tmp1624 = (panda$core$Int64) {0};
int64_t $tmp1625 = $tmp1624.value;
panda$core$Int64* $tmp1626 = $tmp1623[$tmp1625];
panda$core$Int64 $tmp1627 = (panda$core$Int64) {189};
int64_t $tmp1628 = $tmp1627.value;
$tmp1622[$tmp1628] = $tmp1626;
// line 262
panda$core$Int64** $tmp1629 = *(&local0);
panda$core$Int64** $tmp1630 = *(&local0);
panda$core$Int64 $tmp1631 = (panda$core$Int64) {0};
int64_t $tmp1632 = $tmp1631.value;
panda$core$Int64* $tmp1633 = $tmp1630[$tmp1632];
panda$core$Int64 $tmp1634 = (panda$core$Int64) {190};
int64_t $tmp1635 = $tmp1634.value;
$tmp1629[$tmp1635] = $tmp1633;
// line 263
panda$core$Int64** $tmp1636 = *(&local0);
panda$core$Int64** $tmp1637 = *(&local0);
panda$core$Int64 $tmp1638 = (panda$core$Int64) {0};
int64_t $tmp1639 = $tmp1638.value;
panda$core$Int64* $tmp1640 = $tmp1637[$tmp1639];
panda$core$Int64 $tmp1641 = (panda$core$Int64) {191};
int64_t $tmp1642 = $tmp1641.value;
$tmp1636[$tmp1642] = $tmp1640;
// line 264
panda$core$Int64** $tmp1643 = *(&local0);
panda$core$Int64** $tmp1644 = *(&local0);
panda$core$Int64 $tmp1645 = (panda$core$Int64) {0};
int64_t $tmp1646 = $tmp1645.value;
panda$core$Int64* $tmp1647 = $tmp1644[$tmp1646];
panda$core$Int64 $tmp1648 = (panda$core$Int64) {192};
int64_t $tmp1649 = $tmp1648.value;
$tmp1643[$tmp1649] = $tmp1647;
// line 265
panda$core$Int64** $tmp1650 = *(&local0);
panda$core$Int64** $tmp1651 = *(&local0);
panda$core$Int64 $tmp1652 = (panda$core$Int64) {0};
int64_t $tmp1653 = $tmp1652.value;
panda$core$Int64* $tmp1654 = $tmp1651[$tmp1653];
panda$core$Int64 $tmp1655 = (panda$core$Int64) {193};
int64_t $tmp1656 = $tmp1655.value;
$tmp1650[$tmp1656] = $tmp1654;
// line 266
panda$core$Int64** $tmp1657 = *(&local0);
panda$core$Int64** $tmp1658 = *(&local0);
panda$core$Int64 $tmp1659 = (panda$core$Int64) {0};
int64_t $tmp1660 = $tmp1659.value;
panda$core$Int64* $tmp1661 = $tmp1658[$tmp1660];
panda$core$Int64 $tmp1662 = (panda$core$Int64) {194};
int64_t $tmp1663 = $tmp1662.value;
$tmp1657[$tmp1663] = $tmp1661;
// line 267
panda$core$Int64** $tmp1664 = *(&local0);
panda$core$Int64** $tmp1665 = *(&local0);
panda$core$Int64 $tmp1666 = (panda$core$Int64) {0};
int64_t $tmp1667 = $tmp1666.value;
panda$core$Int64* $tmp1668 = $tmp1665[$tmp1667];
panda$core$Int64 $tmp1669 = (panda$core$Int64) {195};
int64_t $tmp1670 = $tmp1669.value;
$tmp1664[$tmp1670] = $tmp1668;
// line 268
panda$core$Int64** $tmp1671 = *(&local0);
panda$core$Int64** $tmp1672 = *(&local0);
panda$core$Int64 $tmp1673 = (panda$core$Int64) {0};
int64_t $tmp1674 = $tmp1673.value;
panda$core$Int64* $tmp1675 = $tmp1672[$tmp1674];
panda$core$Int64 $tmp1676 = (panda$core$Int64) {196};
int64_t $tmp1677 = $tmp1676.value;
$tmp1671[$tmp1677] = $tmp1675;
// line 269
panda$core$Int64** $tmp1678 = *(&local0);
panda$core$Int64** $tmp1679 = *(&local0);
panda$core$Int64 $tmp1680 = (panda$core$Int64) {0};
int64_t $tmp1681 = $tmp1680.value;
panda$core$Int64* $tmp1682 = $tmp1679[$tmp1681];
panda$core$Int64 $tmp1683 = (panda$core$Int64) {197};
int64_t $tmp1684 = $tmp1683.value;
$tmp1678[$tmp1684] = $tmp1682;
// line 270
panda$core$Int64** $tmp1685 = *(&local0);
panda$core$Int64** $tmp1686 = *(&local0);
panda$core$Int64 $tmp1687 = (panda$core$Int64) {0};
int64_t $tmp1688 = $tmp1687.value;
panda$core$Int64* $tmp1689 = $tmp1686[$tmp1688];
panda$core$Int64 $tmp1690 = (panda$core$Int64) {198};
int64_t $tmp1691 = $tmp1690.value;
$tmp1685[$tmp1691] = $tmp1689;
// line 271
panda$core$Int64** $tmp1692 = *(&local0);
panda$core$Int64** $tmp1693 = *(&local0);
panda$core$Int64 $tmp1694 = (panda$core$Int64) {0};
int64_t $tmp1695 = $tmp1694.value;
panda$core$Int64* $tmp1696 = $tmp1693[$tmp1695];
panda$core$Int64 $tmp1697 = (panda$core$Int64) {199};
int64_t $tmp1698 = $tmp1697.value;
$tmp1692[$tmp1698] = $tmp1696;
// line 272
panda$core$Int64** $tmp1699 = *(&local0);
panda$core$Int64** $tmp1700 = *(&local0);
panda$core$Int64 $tmp1701 = (panda$core$Int64) {0};
int64_t $tmp1702 = $tmp1701.value;
panda$core$Int64* $tmp1703 = $tmp1700[$tmp1702];
panda$core$Int64 $tmp1704 = (panda$core$Int64) {200};
int64_t $tmp1705 = $tmp1704.value;
$tmp1699[$tmp1705] = $tmp1703;
// line 273
panda$core$Int64** $tmp1706 = *(&local0);
panda$core$Int64** $tmp1707 = *(&local0);
panda$core$Int64 $tmp1708 = (panda$core$Int64) {0};
int64_t $tmp1709 = $tmp1708.value;
panda$core$Int64* $tmp1710 = $tmp1707[$tmp1709];
panda$core$Int64 $tmp1711 = (panda$core$Int64) {201};
int64_t $tmp1712 = $tmp1711.value;
$tmp1706[$tmp1712] = $tmp1710;
// line 274
panda$core$Int64** $tmp1713 = *(&local0);
panda$core$Int64** $tmp1714 = *(&local0);
panda$core$Int64 $tmp1715 = (panda$core$Int64) {0};
int64_t $tmp1716 = $tmp1715.value;
panda$core$Int64* $tmp1717 = $tmp1714[$tmp1716];
panda$core$Int64 $tmp1718 = (panda$core$Int64) {202};
int64_t $tmp1719 = $tmp1718.value;
$tmp1713[$tmp1719] = $tmp1717;
// line 275
panda$core$Int64** $tmp1720 = *(&local0);
panda$core$Int64** $tmp1721 = *(&local0);
panda$core$Int64 $tmp1722 = (panda$core$Int64) {0};
int64_t $tmp1723 = $tmp1722.value;
panda$core$Int64* $tmp1724 = $tmp1721[$tmp1723];
panda$core$Int64 $tmp1725 = (panda$core$Int64) {203};
int64_t $tmp1726 = $tmp1725.value;
$tmp1720[$tmp1726] = $tmp1724;
// line 276
panda$core$Int64** $tmp1727 = *(&local0);
panda$core$Int64** $tmp1728 = *(&local0);
panda$core$Int64 $tmp1729 = (panda$core$Int64) {0};
int64_t $tmp1730 = $tmp1729.value;
panda$core$Int64* $tmp1731 = $tmp1728[$tmp1730];
panda$core$Int64 $tmp1732 = (panda$core$Int64) {204};
int64_t $tmp1733 = $tmp1732.value;
$tmp1727[$tmp1733] = $tmp1731;
// line 277
panda$core$Int64** $tmp1734 = *(&local0);
panda$core$Int64** $tmp1735 = *(&local0);
panda$core$Int64 $tmp1736 = (panda$core$Int64) {0};
int64_t $tmp1737 = $tmp1736.value;
panda$core$Int64* $tmp1738 = $tmp1735[$tmp1737];
panda$core$Int64 $tmp1739 = (panda$core$Int64) {205};
int64_t $tmp1740 = $tmp1739.value;
$tmp1734[$tmp1740] = $tmp1738;
// line 278
panda$core$Int64** $tmp1741 = *(&local0);
panda$core$Int64** $tmp1742 = *(&local0);
panda$core$Int64 $tmp1743 = (panda$core$Int64) {0};
int64_t $tmp1744 = $tmp1743.value;
panda$core$Int64* $tmp1745 = $tmp1742[$tmp1744];
panda$core$Int64 $tmp1746 = (panda$core$Int64) {206};
int64_t $tmp1747 = $tmp1746.value;
$tmp1741[$tmp1747] = $tmp1745;
// line 279
panda$core$Int64** $tmp1748 = *(&local0);
panda$core$Int64** $tmp1749 = *(&local0);
panda$core$Int64 $tmp1750 = (panda$core$Int64) {0};
int64_t $tmp1751 = $tmp1750.value;
panda$core$Int64* $tmp1752 = $tmp1749[$tmp1751];
panda$core$Int64 $tmp1753 = (panda$core$Int64) {207};
int64_t $tmp1754 = $tmp1753.value;
$tmp1748[$tmp1754] = $tmp1752;
// line 280
panda$core$Int64** $tmp1755 = *(&local0);
panda$core$Int64** $tmp1756 = *(&local0);
panda$core$Int64 $tmp1757 = (panda$core$Int64) {0};
int64_t $tmp1758 = $tmp1757.value;
panda$core$Int64* $tmp1759 = $tmp1756[$tmp1758];
panda$core$Int64 $tmp1760 = (panda$core$Int64) {208};
int64_t $tmp1761 = $tmp1760.value;
$tmp1755[$tmp1761] = $tmp1759;
// line 281
panda$core$Int64** $tmp1762 = *(&local0);
panda$core$Int64** $tmp1763 = *(&local0);
panda$core$Int64 $tmp1764 = (panda$core$Int64) {0};
int64_t $tmp1765 = $tmp1764.value;
panda$core$Int64* $tmp1766 = $tmp1763[$tmp1765];
panda$core$Int64 $tmp1767 = (panda$core$Int64) {209};
int64_t $tmp1768 = $tmp1767.value;
$tmp1762[$tmp1768] = $tmp1766;
// line 282
panda$core$Int64** $tmp1769 = *(&local0);
panda$core$Int64** $tmp1770 = *(&local0);
panda$core$Int64 $tmp1771 = (panda$core$Int64) {0};
int64_t $tmp1772 = $tmp1771.value;
panda$core$Int64* $tmp1773 = $tmp1770[$tmp1772];
panda$core$Int64 $tmp1774 = (panda$core$Int64) {210};
int64_t $tmp1775 = $tmp1774.value;
$tmp1769[$tmp1775] = $tmp1773;
// line 283
panda$core$Int64** $tmp1776 = *(&local0);
panda$core$Int64** $tmp1777 = *(&local0);
panda$core$Int64 $tmp1778 = (panda$core$Int64) {0};
int64_t $tmp1779 = $tmp1778.value;
panda$core$Int64* $tmp1780 = $tmp1777[$tmp1779];
panda$core$Int64 $tmp1781 = (panda$core$Int64) {211};
int64_t $tmp1782 = $tmp1781.value;
$tmp1776[$tmp1782] = $tmp1780;
// line 284
panda$core$Int64** $tmp1783 = *(&local0);
panda$core$Int64** $tmp1784 = *(&local0);
panda$core$Int64 $tmp1785 = (panda$core$Int64) {0};
int64_t $tmp1786 = $tmp1785.value;
panda$core$Int64* $tmp1787 = $tmp1784[$tmp1786];
panda$core$Int64 $tmp1788 = (panda$core$Int64) {212};
int64_t $tmp1789 = $tmp1788.value;
$tmp1783[$tmp1789] = $tmp1787;
// line 285
panda$core$Int64** $tmp1790 = *(&local0);
panda$core$Int64** $tmp1791 = *(&local0);
panda$core$Int64 $tmp1792 = (panda$core$Int64) {0};
int64_t $tmp1793 = $tmp1792.value;
panda$core$Int64* $tmp1794 = $tmp1791[$tmp1793];
panda$core$Int64 $tmp1795 = (panda$core$Int64) {213};
int64_t $tmp1796 = $tmp1795.value;
$tmp1790[$tmp1796] = $tmp1794;
// line 286
panda$core$Int64** $tmp1797 = *(&local0);
panda$core$Int64** $tmp1798 = *(&local0);
panda$core$Int64 $tmp1799 = (panda$core$Int64) {0};
int64_t $tmp1800 = $tmp1799.value;
panda$core$Int64* $tmp1801 = $tmp1798[$tmp1800];
panda$core$Int64 $tmp1802 = (panda$core$Int64) {214};
int64_t $tmp1803 = $tmp1802.value;
$tmp1797[$tmp1803] = $tmp1801;
// line 287
panda$core$Int64** $tmp1804 = *(&local0);
panda$core$Int64** $tmp1805 = *(&local0);
panda$core$Int64 $tmp1806 = (panda$core$Int64) {0};
int64_t $tmp1807 = $tmp1806.value;
panda$core$Int64* $tmp1808 = $tmp1805[$tmp1807];
panda$core$Int64 $tmp1809 = (panda$core$Int64) {215};
int64_t $tmp1810 = $tmp1809.value;
$tmp1804[$tmp1810] = $tmp1808;
// line 288
panda$core$Int64** $tmp1811 = *(&local0);
panda$core$Int64** $tmp1812 = *(&local0);
panda$core$Int64 $tmp1813 = (panda$core$Int64) {0};
int64_t $tmp1814 = $tmp1813.value;
panda$core$Int64* $tmp1815 = $tmp1812[$tmp1814];
panda$core$Int64 $tmp1816 = (panda$core$Int64) {216};
int64_t $tmp1817 = $tmp1816.value;
$tmp1811[$tmp1817] = $tmp1815;
// line 289
panda$core$Int64** $tmp1818 = *(&local0);
panda$core$Int64** $tmp1819 = *(&local0);
panda$core$Int64 $tmp1820 = (panda$core$Int64) {0};
int64_t $tmp1821 = $tmp1820.value;
panda$core$Int64* $tmp1822 = $tmp1819[$tmp1821];
panda$core$Int64 $tmp1823 = (panda$core$Int64) {217};
int64_t $tmp1824 = $tmp1823.value;
$tmp1818[$tmp1824] = $tmp1822;
// line 290
panda$core$Int64** $tmp1825 = *(&local0);
panda$core$Int64** $tmp1826 = *(&local0);
panda$core$Int64 $tmp1827 = (panda$core$Int64) {0};
int64_t $tmp1828 = $tmp1827.value;
panda$core$Int64* $tmp1829 = $tmp1826[$tmp1828];
panda$core$Int64 $tmp1830 = (panda$core$Int64) {218};
int64_t $tmp1831 = $tmp1830.value;
$tmp1825[$tmp1831] = $tmp1829;
// line 291
panda$core$Int64** $tmp1832 = *(&local0);
panda$core$Int64** $tmp1833 = *(&local0);
panda$core$Int64 $tmp1834 = (panda$core$Int64) {0};
int64_t $tmp1835 = $tmp1834.value;
panda$core$Int64* $tmp1836 = $tmp1833[$tmp1835];
panda$core$Int64 $tmp1837 = (panda$core$Int64) {219};
int64_t $tmp1838 = $tmp1837.value;
$tmp1832[$tmp1838] = $tmp1836;
// line 292
panda$core$Int64** $tmp1839 = *(&local0);
panda$core$Int64** $tmp1840 = *(&local0);
panda$core$Int64 $tmp1841 = (panda$core$Int64) {0};
int64_t $tmp1842 = $tmp1841.value;
panda$core$Int64* $tmp1843 = $tmp1840[$tmp1842];
panda$core$Int64 $tmp1844 = (panda$core$Int64) {220};
int64_t $tmp1845 = $tmp1844.value;
$tmp1839[$tmp1845] = $tmp1843;
// line 293
panda$core$Int64** $tmp1846 = *(&local0);
panda$core$Int64** $tmp1847 = *(&local0);
panda$core$Int64 $tmp1848 = (panda$core$Int64) {0};
int64_t $tmp1849 = $tmp1848.value;
panda$core$Int64* $tmp1850 = $tmp1847[$tmp1849];
panda$core$Int64 $tmp1851 = (panda$core$Int64) {221};
int64_t $tmp1852 = $tmp1851.value;
$tmp1846[$tmp1852] = $tmp1850;
// line 294
panda$core$Int64** $tmp1853 = *(&local0);
panda$core$Int64** $tmp1854 = *(&local0);
panda$core$Int64 $tmp1855 = (panda$core$Int64) {0};
int64_t $tmp1856 = $tmp1855.value;
panda$core$Int64* $tmp1857 = $tmp1854[$tmp1856];
panda$core$Int64 $tmp1858 = (panda$core$Int64) {222};
int64_t $tmp1859 = $tmp1858.value;
$tmp1853[$tmp1859] = $tmp1857;
// line 295
panda$core$Int64** $tmp1860 = *(&local0);
panda$core$Int64** $tmp1861 = *(&local0);
panda$core$Int64 $tmp1862 = (panda$core$Int64) {0};
int64_t $tmp1863 = $tmp1862.value;
panda$core$Int64* $tmp1864 = $tmp1861[$tmp1863];
panda$core$Int64 $tmp1865 = (panda$core$Int64) {223};
int64_t $tmp1866 = $tmp1865.value;
$tmp1860[$tmp1866] = $tmp1864;
// line 296
panda$core$Int64** $tmp1867 = *(&local0);
panda$core$Int64** $tmp1868 = *(&local0);
panda$core$Int64 $tmp1869 = (panda$core$Int64) {0};
int64_t $tmp1870 = $tmp1869.value;
panda$core$Int64* $tmp1871 = $tmp1868[$tmp1870];
panda$core$Int64 $tmp1872 = (panda$core$Int64) {224};
int64_t $tmp1873 = $tmp1872.value;
$tmp1867[$tmp1873] = $tmp1871;
// line 297
panda$core$Int64** $tmp1874 = *(&local0);
panda$core$Int64** $tmp1875 = *(&local0);
panda$core$Int64 $tmp1876 = (panda$core$Int64) {0};
int64_t $tmp1877 = $tmp1876.value;
panda$core$Int64* $tmp1878 = $tmp1875[$tmp1877];
panda$core$Int64 $tmp1879 = (panda$core$Int64) {225};
int64_t $tmp1880 = $tmp1879.value;
$tmp1874[$tmp1880] = $tmp1878;
// line 298
panda$core$Int64** $tmp1881 = *(&local0);
panda$core$Int64** $tmp1882 = *(&local0);
panda$core$Int64 $tmp1883 = (panda$core$Int64) {0};
int64_t $tmp1884 = $tmp1883.value;
panda$core$Int64* $tmp1885 = $tmp1882[$tmp1884];
panda$core$Int64 $tmp1886 = (panda$core$Int64) {226};
int64_t $tmp1887 = $tmp1886.value;
$tmp1881[$tmp1887] = $tmp1885;
// line 299
panda$core$Int64** $tmp1888 = *(&local0);
panda$core$Int64** $tmp1889 = *(&local0);
panda$core$Int64 $tmp1890 = (panda$core$Int64) {0};
int64_t $tmp1891 = $tmp1890.value;
panda$core$Int64* $tmp1892 = $tmp1889[$tmp1891];
panda$core$Int64 $tmp1893 = (panda$core$Int64) {227};
int64_t $tmp1894 = $tmp1893.value;
$tmp1888[$tmp1894] = $tmp1892;
// line 300
panda$core$Int64** $tmp1895 = *(&local0);
panda$core$Int64** $tmp1896 = *(&local0);
panda$core$Int64 $tmp1897 = (panda$core$Int64) {0};
int64_t $tmp1898 = $tmp1897.value;
panda$core$Int64* $tmp1899 = $tmp1896[$tmp1898];
panda$core$Int64 $tmp1900 = (panda$core$Int64) {228};
int64_t $tmp1901 = $tmp1900.value;
$tmp1895[$tmp1901] = $tmp1899;
// line 301
panda$core$Int64** $tmp1902 = *(&local0);
panda$core$Int64** $tmp1903 = *(&local0);
panda$core$Int64 $tmp1904 = (panda$core$Int64) {0};
int64_t $tmp1905 = $tmp1904.value;
panda$core$Int64* $tmp1906 = $tmp1903[$tmp1905];
panda$core$Int64 $tmp1907 = (panda$core$Int64) {229};
int64_t $tmp1908 = $tmp1907.value;
$tmp1902[$tmp1908] = $tmp1906;
// line 302
panda$core$Int64** $tmp1909 = *(&local0);
panda$core$Int64** $tmp1910 = *(&local0);
panda$core$Int64 $tmp1911 = (panda$core$Int64) {0};
int64_t $tmp1912 = $tmp1911.value;
panda$core$Int64* $tmp1913 = $tmp1910[$tmp1912];
panda$core$Int64 $tmp1914 = (panda$core$Int64) {230};
int64_t $tmp1915 = $tmp1914.value;
$tmp1909[$tmp1915] = $tmp1913;
// line 303
panda$core$Int64** $tmp1916 = *(&local0);
panda$core$Int64** $tmp1917 = *(&local0);
panda$core$Int64 $tmp1918 = (panda$core$Int64) {0};
int64_t $tmp1919 = $tmp1918.value;
panda$core$Int64* $tmp1920 = $tmp1917[$tmp1919];
panda$core$Int64 $tmp1921 = (panda$core$Int64) {231};
int64_t $tmp1922 = $tmp1921.value;
$tmp1916[$tmp1922] = $tmp1920;
// line 304
panda$core$Int64** $tmp1923 = *(&local0);
panda$core$Int64** $tmp1924 = *(&local0);
panda$core$Int64 $tmp1925 = (panda$core$Int64) {0};
int64_t $tmp1926 = $tmp1925.value;
panda$core$Int64* $tmp1927 = $tmp1924[$tmp1926];
panda$core$Int64 $tmp1928 = (panda$core$Int64) {232};
int64_t $tmp1929 = $tmp1928.value;
$tmp1923[$tmp1929] = $tmp1927;
// line 305
panda$core$Int64** $tmp1930 = *(&local0);
panda$core$Int64** $tmp1931 = *(&local0);
panda$core$Int64 $tmp1932 = (panda$core$Int64) {0};
int64_t $tmp1933 = $tmp1932.value;
panda$core$Int64* $tmp1934 = $tmp1931[$tmp1933];
panda$core$Int64 $tmp1935 = (panda$core$Int64) {233};
int64_t $tmp1936 = $tmp1935.value;
$tmp1930[$tmp1936] = $tmp1934;
// line 306
panda$core$Int64** $tmp1937 = *(&local0);
panda$core$Int64** $tmp1938 = *(&local0);
panda$core$Int64 $tmp1939 = (panda$core$Int64) {0};
int64_t $tmp1940 = $tmp1939.value;
panda$core$Int64* $tmp1941 = $tmp1938[$tmp1940];
panda$core$Int64 $tmp1942 = (panda$core$Int64) {234};
int64_t $tmp1943 = $tmp1942.value;
$tmp1937[$tmp1943] = $tmp1941;
// line 307
panda$core$Int64** $tmp1944 = *(&local0);
panda$core$Int64** $tmp1945 = *(&local0);
panda$core$Int64 $tmp1946 = (panda$core$Int64) {0};
int64_t $tmp1947 = $tmp1946.value;
panda$core$Int64* $tmp1948 = $tmp1945[$tmp1947];
panda$core$Int64 $tmp1949 = (panda$core$Int64) {235};
int64_t $tmp1950 = $tmp1949.value;
$tmp1944[$tmp1950] = $tmp1948;
// line 308
panda$core$Int64** $tmp1951 = *(&local0);
panda$core$Int64** $tmp1952 = *(&local0);
panda$core$Int64 $tmp1953 = (panda$core$Int64) {0};
int64_t $tmp1954 = $tmp1953.value;
panda$core$Int64* $tmp1955 = $tmp1952[$tmp1954];
panda$core$Int64 $tmp1956 = (panda$core$Int64) {236};
int64_t $tmp1957 = $tmp1956.value;
$tmp1951[$tmp1957] = $tmp1955;
// line 309
panda$core$Int64** $tmp1958 = *(&local0);
panda$core$Int64** $tmp1959 = *(&local0);
panda$core$Int64 $tmp1960 = (panda$core$Int64) {0};
int64_t $tmp1961 = $tmp1960.value;
panda$core$Int64* $tmp1962 = $tmp1959[$tmp1961];
panda$core$Int64 $tmp1963 = (panda$core$Int64) {237};
int64_t $tmp1964 = $tmp1963.value;
$tmp1958[$tmp1964] = $tmp1962;
// line 310
panda$core$Int64** $tmp1965 = *(&local0);
panda$core$Int64** $tmp1966 = *(&local0);
panda$core$Int64 $tmp1967 = (panda$core$Int64) {0};
int64_t $tmp1968 = $tmp1967.value;
panda$core$Int64* $tmp1969 = $tmp1966[$tmp1968];
panda$core$Int64 $tmp1970 = (panda$core$Int64) {238};
int64_t $tmp1971 = $tmp1970.value;
$tmp1965[$tmp1971] = $tmp1969;
// line 311
panda$core$Int64** $tmp1972 = *(&local0);
panda$core$Int64** $tmp1973 = *(&local0);
panda$core$Int64 $tmp1974 = (panda$core$Int64) {0};
int64_t $tmp1975 = $tmp1974.value;
panda$core$Int64* $tmp1976 = $tmp1973[$tmp1975];
panda$core$Int64 $tmp1977 = (panda$core$Int64) {239};
int64_t $tmp1978 = $tmp1977.value;
$tmp1972[$tmp1978] = $tmp1976;
// line 312
panda$core$Int64** $tmp1979 = *(&local0);
panda$core$Int64** $tmp1980 = *(&local0);
panda$core$Int64 $tmp1981 = (panda$core$Int64) {0};
int64_t $tmp1982 = $tmp1981.value;
panda$core$Int64* $tmp1983 = $tmp1980[$tmp1982];
panda$core$Int64 $tmp1984 = (panda$core$Int64) {240};
int64_t $tmp1985 = $tmp1984.value;
$tmp1979[$tmp1985] = $tmp1983;
// line 313
panda$core$Int64** $tmp1986 = *(&local0);
panda$core$Int64** $tmp1987 = *(&local0);
panda$core$Int64 $tmp1988 = (panda$core$Int64) {0};
int64_t $tmp1989 = $tmp1988.value;
panda$core$Int64* $tmp1990 = $tmp1987[$tmp1989];
panda$core$Int64 $tmp1991 = (panda$core$Int64) {241};
int64_t $tmp1992 = $tmp1991.value;
$tmp1986[$tmp1992] = $tmp1990;
// line 314
panda$core$Int64** $tmp1993 = *(&local0);
panda$core$Int64** $tmp1994 = *(&local0);
panda$core$Int64 $tmp1995 = (panda$core$Int64) {0};
int64_t $tmp1996 = $tmp1995.value;
panda$core$Int64* $tmp1997 = $tmp1994[$tmp1996];
panda$core$Int64 $tmp1998 = (panda$core$Int64) {242};
int64_t $tmp1999 = $tmp1998.value;
$tmp1993[$tmp1999] = $tmp1997;
// line 315
panda$core$Int64** $tmp2000 = *(&local0);
panda$core$Int64** $tmp2001 = *(&local0);
panda$core$Int64 $tmp2002 = (panda$core$Int64) {0};
int64_t $tmp2003 = $tmp2002.value;
panda$core$Int64* $tmp2004 = $tmp2001[$tmp2003];
panda$core$Int64 $tmp2005 = (panda$core$Int64) {243};
int64_t $tmp2006 = $tmp2005.value;
$tmp2000[$tmp2006] = $tmp2004;
// line 316
panda$core$Int64** $tmp2007 = *(&local0);
panda$core$Int64** $tmp2008 = *(&local0);
panda$core$Int64 $tmp2009 = (panda$core$Int64) {0};
int64_t $tmp2010 = $tmp2009.value;
panda$core$Int64* $tmp2011 = $tmp2008[$tmp2010];
panda$core$Int64 $tmp2012 = (panda$core$Int64) {244};
int64_t $tmp2013 = $tmp2012.value;
$tmp2007[$tmp2013] = $tmp2011;
// line 317
panda$core$Int64** $tmp2014 = *(&local0);
panda$core$Int64** $tmp2015 = *(&local0);
panda$core$Int64 $tmp2016 = (panda$core$Int64) {0};
int64_t $tmp2017 = $tmp2016.value;
panda$core$Int64* $tmp2018 = $tmp2015[$tmp2017];
panda$core$Int64 $tmp2019 = (panda$core$Int64) {245};
int64_t $tmp2020 = $tmp2019.value;
$tmp2014[$tmp2020] = $tmp2018;
// line 318
panda$core$Int64** $tmp2021 = *(&local0);
panda$core$Int64** $tmp2022 = *(&local0);
panda$core$Int64 $tmp2023 = (panda$core$Int64) {0};
int64_t $tmp2024 = $tmp2023.value;
panda$core$Int64* $tmp2025 = $tmp2022[$tmp2024];
panda$core$Int64 $tmp2026 = (panda$core$Int64) {246};
int64_t $tmp2027 = $tmp2026.value;
$tmp2021[$tmp2027] = $tmp2025;
// line 319
panda$core$Int64** $tmp2028 = *(&local0);
panda$core$Int64** $tmp2029 = *(&local0);
panda$core$Int64 $tmp2030 = (panda$core$Int64) {0};
int64_t $tmp2031 = $tmp2030.value;
panda$core$Int64* $tmp2032 = $tmp2029[$tmp2031];
panda$core$Int64 $tmp2033 = (panda$core$Int64) {247};
int64_t $tmp2034 = $tmp2033.value;
$tmp2028[$tmp2034] = $tmp2032;
// line 320
panda$core$Int64** $tmp2035 = *(&local0);
panda$core$Int64** $tmp2036 = *(&local0);
panda$core$Int64 $tmp2037 = (panda$core$Int64) {0};
int64_t $tmp2038 = $tmp2037.value;
panda$core$Int64* $tmp2039 = $tmp2036[$tmp2038];
panda$core$Int64 $tmp2040 = (panda$core$Int64) {248};
int64_t $tmp2041 = $tmp2040.value;
$tmp2035[$tmp2041] = $tmp2039;
// line 321
panda$core$Int64** $tmp2042 = *(&local0);
panda$core$Int64** $tmp2043 = *(&local0);
panda$core$Int64 $tmp2044 = (panda$core$Int64) {0};
int64_t $tmp2045 = $tmp2044.value;
panda$core$Int64* $tmp2046 = $tmp2043[$tmp2045];
panda$core$Int64 $tmp2047 = (panda$core$Int64) {249};
int64_t $tmp2048 = $tmp2047.value;
$tmp2042[$tmp2048] = $tmp2046;
// line 322
panda$core$Int64** $tmp2049 = *(&local0);
panda$core$Int64** $tmp2050 = *(&local0);
panda$core$Int64 $tmp2051 = (panda$core$Int64) {0};
int64_t $tmp2052 = $tmp2051.value;
panda$core$Int64* $tmp2053 = $tmp2050[$tmp2052];
panda$core$Int64 $tmp2054 = (panda$core$Int64) {250};
int64_t $tmp2055 = $tmp2054.value;
$tmp2049[$tmp2055] = $tmp2053;
// line 323
panda$core$Int64** $tmp2056 = *(&local0);
panda$core$Int64** $tmp2057 = *(&local0);
panda$core$Int64 $tmp2058 = (panda$core$Int64) {0};
int64_t $tmp2059 = $tmp2058.value;
panda$core$Int64* $tmp2060 = $tmp2057[$tmp2059];
panda$core$Int64 $tmp2061 = (panda$core$Int64) {251};
int64_t $tmp2062 = $tmp2061.value;
$tmp2056[$tmp2062] = $tmp2060;
// line 324
panda$core$Int64** $tmp2063 = *(&local0);
panda$core$Int64** $tmp2064 = *(&local0);
panda$core$Int64 $tmp2065 = (panda$core$Int64) {0};
int64_t $tmp2066 = $tmp2065.value;
panda$core$Int64* $tmp2067 = $tmp2064[$tmp2066];
panda$core$Int64 $tmp2068 = (panda$core$Int64) {252};
int64_t $tmp2069 = $tmp2068.value;
$tmp2063[$tmp2069] = $tmp2067;
// line 325
panda$core$Int64** $tmp2070 = *(&local0);
panda$core$Int64** $tmp2071 = *(&local0);
panda$core$Int64 $tmp2072 = (panda$core$Int64) {0};
int64_t $tmp2073 = $tmp2072.value;
panda$core$Int64* $tmp2074 = $tmp2071[$tmp2073];
panda$core$Int64 $tmp2075 = (panda$core$Int64) {253};
int64_t $tmp2076 = $tmp2075.value;
$tmp2070[$tmp2076] = $tmp2074;
// line 326
panda$core$Int64** $tmp2077 = *(&local0);
panda$core$Int64** $tmp2078 = *(&local0);
panda$core$Int64 $tmp2079 = (panda$core$Int64) {0};
int64_t $tmp2080 = $tmp2079.value;
panda$core$Int64* $tmp2081 = $tmp2078[$tmp2080];
panda$core$Int64 $tmp2082 = (panda$core$Int64) {254};
int64_t $tmp2083 = $tmp2082.value;
$tmp2077[$tmp2083] = $tmp2081;
// line 327
panda$core$Int64** $tmp2084 = *(&local0);
panda$core$Int64** $tmp2085 = *(&local0);
panda$core$Int64 $tmp2086 = (panda$core$Int64) {0};
int64_t $tmp2087 = $tmp2086.value;
panda$core$Int64* $tmp2088 = $tmp2085[$tmp2087];
panda$core$Int64 $tmp2089 = (panda$core$Int64) {255};
int64_t $tmp2090 = $tmp2089.value;
$tmp2084[$tmp2090] = $tmp2088;
// line 328
panda$core$Int64** $tmp2091 = *(&local0);
return $tmp2091;

}
panda$core$Int64* org$pandalanguage$regex$RegexLexer$getAccepts$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT() {

panda$core$Int64* local0;
// line 333
panda$core$Int64 $tmp2092 = (panda$core$Int64) {20};
int64_t $tmp2093 = $tmp2092.value;
panda$core$Int64* $tmp2094 = ((panda$core$Int64*) pandaZAlloc($tmp2093 * 8));
*(&local0) = $tmp2094;
// line 334
panda$core$Int64* $tmp2095 = *(&local0);
panda$core$Int64 $tmp2096 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2097 = (panda$core$Int64) {0};
int64_t $tmp2098 = $tmp2097.value;
$tmp2095[$tmp2098] = $tmp2096;
// line 335
panda$core$Int64* $tmp2099 = *(&local0);
panda$core$Int64 $tmp2100 = (panda$core$Int64) {18446744073709551615};
panda$core$Int64 $tmp2101 = (panda$core$Int64) {1};
int64_t $tmp2102 = $tmp2101.value;
$tmp2099[$tmp2102] = $tmp2100;
// line 336
panda$core$Int64* $tmp2103 = *(&local0);
panda$core$Int64 $tmp2104 = (panda$core$Int64) {3};
panda$core$Int64 $tmp2105 = (panda$core$Int64) {2};
int64_t $tmp2106 = $tmp2105.value;
$tmp2103[$tmp2106] = $tmp2104;
// line 337
panda$core$Int64* $tmp2107 = *(&local0);
panda$core$Int64 $tmp2108 = (panda$core$Int64) {3};
panda$core$Int64 $tmp2109 = (panda$core$Int64) {3};
int64_t $tmp2110 = $tmp2109.value;
$tmp2107[$tmp2110] = $tmp2108;
// line 338
panda$core$Int64* $tmp2111 = *(&local0);
panda$core$Int64 $tmp2112 = (panda$core$Int64) {3};
panda$core$Int64 $tmp2113 = (panda$core$Int64) {4};
int64_t $tmp2114 = $tmp2113.value;
$tmp2111[$tmp2114] = $tmp2112;
// line 339
panda$core$Int64* $tmp2115 = *(&local0);
panda$core$Int64 $tmp2116 = (panda$core$Int64) {8};
panda$core$Int64 $tmp2117 = (panda$core$Int64) {5};
int64_t $tmp2118 = $tmp2117.value;
$tmp2115[$tmp2118] = $tmp2116;
// line 340
panda$core$Int64* $tmp2119 = *(&local0);
panda$core$Int64 $tmp2120 = (panda$core$Int64) {9};
panda$core$Int64 $tmp2121 = (panda$core$Int64) {6};
int64_t $tmp2122 = $tmp2121.value;
$tmp2119[$tmp2122] = $tmp2120;
// line 341
panda$core$Int64* $tmp2123 = *(&local0);
panda$core$Int64 $tmp2124 = (panda$core$Int64) {6};
panda$core$Int64 $tmp2125 = (panda$core$Int64) {7};
int64_t $tmp2126 = $tmp2125.value;
$tmp2123[$tmp2126] = $tmp2124;
// line 342
panda$core$Int64* $tmp2127 = *(&local0);
panda$core$Int64 $tmp2128 = (panda$core$Int64) {5};
panda$core$Int64 $tmp2129 = (panda$core$Int64) {8};
int64_t $tmp2130 = $tmp2129.value;
$tmp2127[$tmp2130] = $tmp2128;
// line 343
panda$core$Int64* $tmp2131 = *(&local0);
panda$core$Int64 $tmp2132 = (panda$core$Int64) {3};
panda$core$Int64 $tmp2133 = (panda$core$Int64) {9};
int64_t $tmp2134 = $tmp2133.value;
$tmp2131[$tmp2134] = $tmp2132;
// line 344
panda$core$Int64* $tmp2135 = *(&local0);
panda$core$Int64 $tmp2136 = (panda$core$Int64) {15};
panda$core$Int64 $tmp2137 = (panda$core$Int64) {10};
int64_t $tmp2138 = $tmp2137.value;
$tmp2135[$tmp2138] = $tmp2136;
// line 345
panda$core$Int64* $tmp2139 = *(&local0);
panda$core$Int64 $tmp2140 = (panda$core$Int64) {3};
panda$core$Int64 $tmp2141 = (panda$core$Int64) {11};
int64_t $tmp2142 = $tmp2141.value;
$tmp2139[$tmp2142] = $tmp2140;
// line 346
panda$core$Int64* $tmp2143 = *(&local0);
panda$core$Int64 $tmp2144 = (panda$core$Int64) {7};
panda$core$Int64 $tmp2145 = (panda$core$Int64) {12};
int64_t $tmp2146 = $tmp2145.value;
$tmp2143[$tmp2146] = $tmp2144;
// line 347
panda$core$Int64* $tmp2147 = *(&local0);
panda$core$Int64 $tmp2148 = (panda$core$Int64) {12};
panda$core$Int64 $tmp2149 = (panda$core$Int64) {13};
int64_t $tmp2150 = $tmp2149.value;
$tmp2147[$tmp2150] = $tmp2148;
// line 348
panda$core$Int64* $tmp2151 = *(&local0);
panda$core$Int64 $tmp2152 = (panda$core$Int64) {3};
panda$core$Int64 $tmp2153 = (panda$core$Int64) {14};
int64_t $tmp2154 = $tmp2153.value;
$tmp2151[$tmp2154] = $tmp2152;
// line 349
panda$core$Int64* $tmp2155 = *(&local0);
panda$core$Int64 $tmp2156 = (panda$core$Int64) {13};
panda$core$Int64 $tmp2157 = (panda$core$Int64) {15};
int64_t $tmp2158 = $tmp2157.value;
$tmp2155[$tmp2158] = $tmp2156;
// line 350
panda$core$Int64* $tmp2159 = *(&local0);
panda$core$Int64 $tmp2160 = (panda$core$Int64) {3};
panda$core$Int64 $tmp2161 = (panda$core$Int64) {16};
int64_t $tmp2162 = $tmp2161.value;
$tmp2159[$tmp2162] = $tmp2160;
// line 351
panda$core$Int64* $tmp2163 = *(&local0);
panda$core$Int64 $tmp2164 = (panda$core$Int64) {3};
panda$core$Int64 $tmp2165 = (panda$core$Int64) {17};
int64_t $tmp2166 = $tmp2165.value;
$tmp2163[$tmp2166] = $tmp2164;
// line 352
panda$core$Int64* $tmp2167 = *(&local0);
panda$core$Int64 $tmp2168 = (panda$core$Int64) {3};
panda$core$Int64 $tmp2169 = (panda$core$Int64) {18};
int64_t $tmp2170 = $tmp2169.value;
$tmp2167[$tmp2170] = $tmp2168;
// line 353
panda$core$Int64* $tmp2171 = *(&local0);
panda$core$Int64 $tmp2172 = (panda$core$Int64) {3};
panda$core$Int64 $tmp2173 = (panda$core$Int64) {19};
int64_t $tmp2174 = $tmp2173.value;
$tmp2171[$tmp2174] = $tmp2172;
// line 354
panda$core$Int64* $tmp2175 = *(&local0);
return $tmp2175;

}
void org$pandalanguage$regex$RegexLexer$cleanup(org$pandalanguage$regex$RegexLexer* param0) {

// line 359
panda$core$Int64*** $tmp2176 = &param0->transitions;
panda$core$Int64** $tmp2177 = *$tmp2176;
panda$core$Int64 $tmp2178 = (panda$core$Int64) {0};
int64_t $tmp2179 = $tmp2178.value;
panda$core$Int64* $tmp2180 = $tmp2177[$tmp2179];
pandaFree($tmp2180);
// line 360
panda$core$Int64*** $tmp2181 = &param0->transitions;
panda$core$Int64** $tmp2182 = *$tmp2181;
panda$core$Int64 $tmp2183 = (panda$core$Int64) {10};
int64_t $tmp2184 = $tmp2183.value;
panda$core$Int64* $tmp2185 = $tmp2182[$tmp2184];
pandaFree($tmp2185);
// line 361
panda$core$Int64*** $tmp2186 = &param0->transitions;
panda$core$Int64** $tmp2187 = *$tmp2186;
panda$core$Int64 $tmp2188 = (panda$core$Int64) {36};
int64_t $tmp2189 = $tmp2188.value;
panda$core$Int64* $tmp2190 = $tmp2187[$tmp2189];
pandaFree($tmp2190);
// line 362
panda$core$Int64*** $tmp2191 = &param0->transitions;
panda$core$Int64** $tmp2192 = *$tmp2191;
panda$core$Int64 $tmp2193 = (panda$core$Int64) {39};
int64_t $tmp2194 = $tmp2193.value;
panda$core$Int64* $tmp2195 = $tmp2192[$tmp2194];
pandaFree($tmp2195);
// line 363
panda$core$Int64*** $tmp2196 = &param0->transitions;
panda$core$Int64** $tmp2197 = *$tmp2196;
panda$core$Int64 $tmp2198 = (panda$core$Int64) {40};
int64_t $tmp2199 = $tmp2198.value;
panda$core$Int64* $tmp2200 = $tmp2197[$tmp2199];
pandaFree($tmp2200);
// line 364
panda$core$Int64*** $tmp2201 = &param0->transitions;
panda$core$Int64** $tmp2202 = *$tmp2201;
panda$core$Int64 $tmp2203 = (panda$core$Int64) {41};
int64_t $tmp2204 = $tmp2203.value;
panda$core$Int64* $tmp2205 = $tmp2202[$tmp2204];
pandaFree($tmp2205);
// line 365
panda$core$Int64*** $tmp2206 = &param0->transitions;
panda$core$Int64** $tmp2207 = *$tmp2206;
panda$core$Int64 $tmp2208 = (panda$core$Int64) {42};
int64_t $tmp2209 = $tmp2208.value;
panda$core$Int64* $tmp2210 = $tmp2207[$tmp2209];
pandaFree($tmp2210);
// line 366
panda$core$Int64*** $tmp2211 = &param0->transitions;
panda$core$Int64** $tmp2212 = *$tmp2211;
panda$core$Int64 $tmp2213 = (panda$core$Int64) {43};
int64_t $tmp2214 = $tmp2213.value;
panda$core$Int64* $tmp2215 = $tmp2212[$tmp2214];
pandaFree($tmp2215);
// line 367
panda$core$Int64*** $tmp2216 = &param0->transitions;
panda$core$Int64** $tmp2217 = *$tmp2216;
panda$core$Int64 $tmp2218 = (panda$core$Int64) {44};
int64_t $tmp2219 = $tmp2218.value;
panda$core$Int64* $tmp2220 = $tmp2217[$tmp2219];
pandaFree($tmp2220);
// line 368
panda$core$Int64*** $tmp2221 = &param0->transitions;
panda$core$Int64** $tmp2222 = *$tmp2221;
panda$core$Int64 $tmp2223 = (panda$core$Int64) {47};
int64_t $tmp2224 = $tmp2223.value;
panda$core$Int64* $tmp2225 = $tmp2222[$tmp2224];
pandaFree($tmp2225);
// line 369
panda$core$Int64*** $tmp2226 = &param0->transitions;
panda$core$Int64** $tmp2227 = *$tmp2226;
panda$core$Int64 $tmp2228 = (panda$core$Int64) {48};
int64_t $tmp2229 = $tmp2228.value;
panda$core$Int64* $tmp2230 = $tmp2227[$tmp2229];
pandaFree($tmp2230);
// line 370
panda$core$Int64*** $tmp2231 = &param0->transitions;
panda$core$Int64** $tmp2232 = *$tmp2231;
panda$core$Int64 $tmp2233 = (panda$core$Int64) {63};
int64_t $tmp2234 = $tmp2233.value;
panda$core$Int64* $tmp2235 = $tmp2232[$tmp2234];
pandaFree($tmp2235);
// line 371
panda$core$Int64*** $tmp2236 = &param0->transitions;
panda$core$Int64** $tmp2237 = *$tmp2236;
panda$core$Int64 $tmp2238 = (panda$core$Int64) {91};
int64_t $tmp2239 = $tmp2238.value;
panda$core$Int64* $tmp2240 = $tmp2237[$tmp2239];
pandaFree($tmp2240);
// line 372
panda$core$Int64*** $tmp2241 = &param0->transitions;
panda$core$Int64** $tmp2242 = *$tmp2241;
panda$core$Int64 $tmp2243 = (panda$core$Int64) {92};
int64_t $tmp2244 = $tmp2243.value;
panda$core$Int64* $tmp2245 = $tmp2242[$tmp2244];
pandaFree($tmp2245);
// line 373
panda$core$Int64*** $tmp2246 = &param0->transitions;
panda$core$Int64** $tmp2247 = *$tmp2246;
panda$core$Int64 $tmp2248 = (panda$core$Int64) {93};
int64_t $tmp2249 = $tmp2248.value;
panda$core$Int64* $tmp2250 = $tmp2247[$tmp2249];
pandaFree($tmp2250);
// line 374
panda$core$Int64*** $tmp2251 = &param0->transitions;
panda$core$Int64** $tmp2252 = *$tmp2251;
panda$core$Int64 $tmp2253 = (panda$core$Int64) {94};
int64_t $tmp2254 = $tmp2253.value;
panda$core$Int64* $tmp2255 = $tmp2252[$tmp2254];
pandaFree($tmp2255);
// line 375
panda$core$Int64*** $tmp2256 = &param0->transitions;
panda$core$Int64** $tmp2257 = *$tmp2256;
panda$core$Int64 $tmp2258 = (panda$core$Int64) {96};
int64_t $tmp2259 = $tmp2258.value;
panda$core$Int64* $tmp2260 = $tmp2257[$tmp2259];
pandaFree($tmp2260);
// line 376
panda$core$Int64*** $tmp2261 = &param0->transitions;
panda$core$Int64** $tmp2262 = *$tmp2261;
panda$core$Int64 $tmp2263 = (panda$core$Int64) {123};
int64_t $tmp2264 = $tmp2263.value;
panda$core$Int64* $tmp2265 = $tmp2262[$tmp2264];
pandaFree($tmp2265);
// line 377
panda$core$Int64*** $tmp2266 = &param0->transitions;
panda$core$Int64** $tmp2267 = *$tmp2266;
panda$core$Int64 $tmp2268 = (panda$core$Int64) {125};
int64_t $tmp2269 = $tmp2268.value;
panda$core$Int64* $tmp2270 = $tmp2267[$tmp2269];
pandaFree($tmp2270);
// line 378
panda$core$Int64*** $tmp2271 = &param0->transitions;
panda$core$Int64** $tmp2272 = *$tmp2271;
pandaFree($tmp2272);
// line 379
panda$core$Int64** $tmp2273 = &param0->accepts;
panda$core$Int64* $tmp2274 = *$tmp2273;
pandaFree($tmp2274);
org$pandalanguage$plex$runtime$DFA** $tmp2275 = &param0->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp2276 = *$tmp2275;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
return;

}
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexLexer$next$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexLexer* param0) {

org$pandalanguage$plex$runtime$RawToken local0;
// line 383
org$pandalanguage$plex$runtime$DFA** $tmp2277 = &param0->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp2278 = *$tmp2277;
org$pandalanguage$plex$runtime$RawToken $tmp2279 = org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken($tmp2278);
*(&local0) = $tmp2279;
// line 384
org$pandalanguage$plex$runtime$RawToken $tmp2280 = *(&local0);
panda$core$Int64 $tmp2281 = $tmp2280.kind;
org$pandalanguage$regex$RegexToken$Kind $tmp2282 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp2281);
org$pandalanguage$plex$runtime$RawToken $tmp2283 = *(&local0);
panda$core$String$Index $tmp2284 = $tmp2283.start;
org$pandalanguage$plex$runtime$RawToken $tmp2285 = *(&local0);
panda$core$String$Index $tmp2286 = $tmp2285.end;
org$pandalanguage$plex$runtime$RawToken $tmp2287 = *(&local0);
panda$core$Int64 $tmp2288 = $tmp2287.line;
org$pandalanguage$plex$runtime$RawToken $tmp2289 = *(&local0);
panda$core$Int64 $tmp2290 = $tmp2289.column;
org$pandalanguage$pandac$Position $tmp2291 = org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64($tmp2288, $tmp2290);
org$pandalanguage$regex$RegexToken $tmp2292 = org$pandalanguage$regex$RegexToken$init$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position($tmp2282, $tmp2284, $tmp2286, $tmp2291);
return $tmp2292;

}
void org$pandalanguage$regex$RegexLexer$init(org$pandalanguage$regex$RegexLexer* param0) {

// line 15
panda$core$Int64** $tmp2293 = org$pandalanguage$regex$RegexLexer$getTransitions$R$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT();
panda$core$Int64*** $tmp2294 = &param0->transitions;
*$tmp2294 = $tmp2293;
// line 17
panda$core$Int64* $tmp2295 = org$pandalanguage$regex$RegexLexer$getAccepts$R$panda$unsafe$Pointer$LTpanda$core$Int64$GT();
panda$core$Int64** $tmp2296 = &param0->accepts;
*$tmp2296 = $tmp2295;
return;

}

