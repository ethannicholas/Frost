#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Char32.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Char8.h"
#include "panda/core/Int32.h"

__attribute__((weak)) panda$core$Object* panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim(panda$core$String$UTF32Iterator* p0) {
    panda$core$Char32 result = panda$core$String$UTF32Iterator$next$R$panda$core$Char32(p0);

    panda$core$Char32$wrapper* $tmp2;
    $tmp2 = (panda$core$Char32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Char32$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$core$String$UTF32Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$core$String$UTF32Iterator$class_type panda$core$String$UTF32Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF32Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF32Iterator$cleanup, panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim} };

typedef panda$core$Bit (*$fn19)(panda$core$String$UTF32Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -5037726590576122771, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 88, 4979016066119780571, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };

void panda$core$String$UTF32Iterator$init$panda$core$String(panda$core$String$UTF32Iterator* param0, panda$core$String* param1) {

// line 154
panda$core$Int64 $tmp3 = (panda$core$Int64) {0};
panda$core$Int64* $tmp4 = &param0->index;
*$tmp4 = $tmp3;
// line 159
panda$core$String** $tmp5 = &param0->str;
panda$core$String* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp7 = &param0->str;
*$tmp7 = param1;
return;

}
panda$core$Bit panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF32Iterator* param0) {

// line 164
panda$core$Int64* $tmp8 = &param0->index;
panda$core$Int64 $tmp9 = *$tmp8;
panda$core$String** $tmp10 = &param0->str;
panda$core$String* $tmp11 = *$tmp10;
panda$core$Int64* $tmp12 = &$tmp11->_length;
panda$core$Int64 $tmp13 = *$tmp12;
int64_t $tmp14 = $tmp9.value;
int64_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 >= $tmp15;
panda$core$Bit $tmp17 = (panda$core$Bit) {$tmp16};
return $tmp17;

}
panda$core$Char32 panda$core$String$UTF32Iterator$next$R$panda$core$Char32(panda$core$String$UTF32Iterator* param0) {

panda$core$Char8 local0;
panda$core$Int32 local1;
$fn19 $tmp18 = ($fn19) param0->$class->vtable[2];
panda$core$Bit $tmp20 = $tmp18(param0);
panda$core$Bit $tmp21 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp23 = (panda$core$Int64) {168};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s24, $tmp23, &$s25);
abort(); // unreachable
block1:;
// line 169
panda$core$Int64* $tmp26 = &param0->index;
panda$core$Int64 $tmp27 = *$tmp26;
panda$core$String** $tmp28 = &param0->str;
panda$core$String* $tmp29 = *$tmp28;
panda$core$Int64* $tmp30 = &$tmp29->_length;
panda$core$Int64 $tmp31 = *$tmp30;
int64_t $tmp32 = $tmp27.value;
int64_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 < $tmp33;
panda$core$Bit $tmp35 = (panda$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp37 = (panda$core$Int64) {169};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s38, $tmp37);
abort(); // unreachable
block3:;
// line 170
panda$core$String** $tmp39 = &param0->str;
panda$core$String* $tmp40 = *$tmp39;
panda$core$Char8** $tmp41 = &$tmp40->data;
panda$core$Char8* $tmp42 = *$tmp41;
panda$core$Int64* $tmp43 = &param0->index;
panda$core$Int64 $tmp44 = *$tmp43;
int64_t $tmp45 = $tmp44.value;
panda$core$Char8 $tmp46 = $tmp42[$tmp45];
*(&local0) = $tmp46;
// line 171
panda$core$Char8 $tmp47 = *(&local0);
panda$core$Int32 $tmp48 = panda$core$Char8$convert$R$panda$core$Int32($tmp47);
*(&local1) = $tmp48;
// line 172
panda$core$Char8 $tmp49 = *(&local0);
uint8_t $tmp50 = $tmp49.value;
int64_t $tmp51 = ((int64_t) $tmp50) & 255;
bool $tmp52 = $tmp51 < 128;
panda$core$Bit $tmp53 = panda$core$Bit$init$builtin_bit($tmp52);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block5; else goto block6;
block5:;
// line 173
panda$core$Int64* $tmp55 = &param0->index;
panda$core$Int64 $tmp56 = *$tmp55;
panda$core$Int64 $tmp57 = (panda$core$Int64) {1};
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58 + $tmp59;
panda$core$Int64 $tmp61 = (panda$core$Int64) {$tmp60};
panda$core$Int64* $tmp62 = &param0->index;
*$tmp62 = $tmp61;
// line 174
panda$core$Int32 $tmp63 = *(&local1);
panda$core$Char32 $tmp64 = panda$core$Char32$init$panda$core$Int32($tmp63);
return $tmp64;
block6:;
// line 176
panda$core$Char8 $tmp65 = *(&local0);
uint8_t $tmp66 = $tmp65.value;
int64_t $tmp67 = ((int64_t) $tmp66) & 255;
bool $tmp68 = $tmp67 < 192;
panda$core$Bit $tmp69 = panda$core$Bit$init$builtin_bit($tmp68);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block7; else goto block8;
block7:;
// line 177
panda$core$Int64* $tmp71 = &param0->index;
panda$core$Int64 $tmp72 = *$tmp71;
panda$core$Int64 $tmp73 = (panda$core$Int64) {1};
int64_t $tmp74 = $tmp72.value;
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74 + $tmp75;
panda$core$Int64 $tmp77 = (panda$core$Int64) {$tmp76};
panda$core$String** $tmp78 = &param0->str;
panda$core$String* $tmp79 = *$tmp78;
panda$core$Int64* $tmp80 = &$tmp79->_length;
panda$core$Int64 $tmp81 = *$tmp80;
int64_t $tmp82 = $tmp77.value;
int64_t $tmp83 = $tmp81.value;
bool $tmp84 = $tmp82 < $tmp83;
panda$core$Bit $tmp85 = (panda$core$Bit) {$tmp84};
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block9; else goto block11;
block9:;
// line 178
panda$core$Int32 $tmp87 = *(&local1);
panda$core$Int32 $tmp88 = (panda$core$Int32) {31};
panda$core$Int32 $tmp89 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp87, $tmp88);
panda$core$Int32 $tmp90 = (panda$core$Int32) {6};
panda$core$Int32 $tmp91 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp89, $tmp90);
panda$core$String** $tmp92 = &param0->str;
panda$core$String* $tmp93 = *$tmp92;
panda$core$Char8** $tmp94 = &$tmp93->data;
panda$core$Char8* $tmp95 = *$tmp94;
panda$core$Int64* $tmp96 = &param0->index;
panda$core$Int64 $tmp97 = *$tmp96;
panda$core$Int64 $tmp98 = (panda$core$Int64) {1};
int64_t $tmp99 = $tmp97.value;
int64_t $tmp100 = $tmp98.value;
int64_t $tmp101 = $tmp99 + $tmp100;
panda$core$Int64 $tmp102 = (panda$core$Int64) {$tmp101};
int64_t $tmp103 = $tmp102.value;
panda$core$Char8 $tmp104 = $tmp95[$tmp103];
panda$core$Int32 $tmp105 = panda$core$Char8$convert$R$panda$core$Int32($tmp104);
panda$core$Int32 $tmp106 = (panda$core$Int32) {63};
panda$core$Int32 $tmp107 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp105, $tmp106);
int32_t $tmp108 = $tmp91.value;
int32_t $tmp109 = $tmp107.value;
int32_t $tmp110 = $tmp108 + $tmp109;
panda$core$Int32 $tmp111 = (panda$core$Int32) {$tmp110};
*(&local1) = $tmp111;
goto block10;
block11:;
// line 1
// line 182
panda$core$Int32 $tmp112 = (panda$core$Int32) {0};
*(&local1) = $tmp112;
goto block10;
block10:;
// line 184
panda$core$Int64* $tmp113 = &param0->index;
panda$core$Int64 $tmp114 = *$tmp113;
panda$core$Int64 $tmp115 = (panda$core$Int64) {2};
int64_t $tmp116 = $tmp114.value;
int64_t $tmp117 = $tmp115.value;
int64_t $tmp118 = $tmp116 + $tmp117;
panda$core$Int64 $tmp119 = (panda$core$Int64) {$tmp118};
panda$core$Int64* $tmp120 = &param0->index;
*$tmp120 = $tmp119;
// line 185
panda$core$Int32 $tmp121 = *(&local1);
panda$core$Char32 $tmp122 = panda$core$Char32$init$panda$core$Int32($tmp121);
return $tmp122;
block8:;
// line 187
panda$core$Char8 $tmp123 = *(&local0);
uint8_t $tmp124 = $tmp123.value;
int64_t $tmp125 = ((int64_t) $tmp124) & 255;
bool $tmp126 = $tmp125 < 224;
panda$core$Bit $tmp127 = panda$core$Bit$init$builtin_bit($tmp126);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block12; else goto block13;
block12:;
// line 188
panda$core$Int64* $tmp129 = &param0->index;
panda$core$Int64 $tmp130 = *$tmp129;
panda$core$Int64 $tmp131 = (panda$core$Int64) {2};
int64_t $tmp132 = $tmp130.value;
int64_t $tmp133 = $tmp131.value;
int64_t $tmp134 = $tmp132 + $tmp133;
panda$core$Int64 $tmp135 = (panda$core$Int64) {$tmp134};
panda$core$String** $tmp136 = &param0->str;
panda$core$String* $tmp137 = *$tmp136;
panda$core$Int64* $tmp138 = &$tmp137->_length;
panda$core$Int64 $tmp139 = *$tmp138;
int64_t $tmp140 = $tmp135.value;
int64_t $tmp141 = $tmp139.value;
bool $tmp142 = $tmp140 < $tmp141;
panda$core$Bit $tmp143 = (panda$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block14; else goto block16;
block14:;
// line 189
panda$core$Int32 $tmp145 = *(&local1);
panda$core$Int32 $tmp146 = (panda$core$Int32) {15};
panda$core$Int32 $tmp147 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp145, $tmp146);
panda$core$Int32 $tmp148 = (panda$core$Int32) {12};
panda$core$Int32 $tmp149 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp147, $tmp148);
panda$core$String** $tmp150 = &param0->str;
panda$core$String* $tmp151 = *$tmp150;
panda$core$Char8** $tmp152 = &$tmp151->data;
panda$core$Char8* $tmp153 = *$tmp152;
panda$core$Int64* $tmp154 = &param0->index;
panda$core$Int64 $tmp155 = *$tmp154;
panda$core$Int64 $tmp156 = (panda$core$Int64) {1};
int64_t $tmp157 = $tmp155.value;
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157 + $tmp158;
panda$core$Int64 $tmp160 = (panda$core$Int64) {$tmp159};
int64_t $tmp161 = $tmp160.value;
panda$core$Char8 $tmp162 = $tmp153[$tmp161];
panda$core$Int32 $tmp163 = panda$core$Char8$convert$R$panda$core$Int32($tmp162);
panda$core$Int32 $tmp164 = (panda$core$Int32) {63};
panda$core$Int32 $tmp165 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp163, $tmp164);
panda$core$Int32 $tmp166 = (panda$core$Int32) {6};
panda$core$Int32 $tmp167 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp165, $tmp166);
int32_t $tmp168 = $tmp149.value;
int32_t $tmp169 = $tmp167.value;
int32_t $tmp170 = $tmp168 + $tmp169;
panda$core$Int32 $tmp171 = (panda$core$Int32) {$tmp170};
panda$core$String** $tmp172 = &param0->str;
panda$core$String* $tmp173 = *$tmp172;
panda$core$Char8** $tmp174 = &$tmp173->data;
panda$core$Char8* $tmp175 = *$tmp174;
panda$core$Int64* $tmp176 = &param0->index;
panda$core$Int64 $tmp177 = *$tmp176;
panda$core$Int64 $tmp178 = (panda$core$Int64) {2};
int64_t $tmp179 = $tmp177.value;
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179 + $tmp180;
panda$core$Int64 $tmp182 = (panda$core$Int64) {$tmp181};
int64_t $tmp183 = $tmp182.value;
panda$core$Char8 $tmp184 = $tmp175[$tmp183];
panda$core$Int32 $tmp185 = panda$core$Char8$convert$R$panda$core$Int32($tmp184);
panda$core$Int32 $tmp186 = (panda$core$Int32) {63};
panda$core$Int32 $tmp187 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp185, $tmp186);
int32_t $tmp188 = $tmp171.value;
int32_t $tmp189 = $tmp187.value;
int32_t $tmp190 = $tmp188 + $tmp189;
panda$core$Int32 $tmp191 = (panda$core$Int32) {$tmp190};
*(&local1) = $tmp191;
goto block15;
block16:;
// line 1
// line 193
panda$core$Int32 $tmp192 = (panda$core$Int32) {0};
*(&local1) = $tmp192;
goto block15;
block15:;
// line 195
panda$core$Int64* $tmp193 = &param0->index;
panda$core$Int64 $tmp194 = *$tmp193;
panda$core$Int64 $tmp195 = (panda$core$Int64) {3};
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196 + $tmp197;
panda$core$Int64 $tmp199 = (panda$core$Int64) {$tmp198};
panda$core$Int64* $tmp200 = &param0->index;
*$tmp200 = $tmp199;
// line 196
panda$core$Int32 $tmp201 = *(&local1);
panda$core$Char32 $tmp202 = panda$core$Char32$init$panda$core$Int32($tmp201);
return $tmp202;
block13:;
// line 198
panda$core$Int64* $tmp203 = &param0->index;
panda$core$Int64 $tmp204 = *$tmp203;
panda$core$Int64 $tmp205 = (panda$core$Int64) {3};
int64_t $tmp206 = $tmp204.value;
int64_t $tmp207 = $tmp205.value;
int64_t $tmp208 = $tmp206 + $tmp207;
panda$core$Int64 $tmp209 = (panda$core$Int64) {$tmp208};
panda$core$String** $tmp210 = &param0->str;
panda$core$String* $tmp211 = *$tmp210;
panda$core$Int64* $tmp212 = &$tmp211->_length;
panda$core$Int64 $tmp213 = *$tmp212;
int64_t $tmp214 = $tmp209.value;
int64_t $tmp215 = $tmp213.value;
bool $tmp216 = $tmp214 < $tmp215;
panda$core$Bit $tmp217 = (panda$core$Bit) {$tmp216};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block17; else goto block19;
block17:;
// line 199
panda$core$Int32 $tmp219 = *(&local1);
panda$core$Int32 $tmp220 = (panda$core$Int32) {7};
panda$core$Int32 $tmp221 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp219, $tmp220);
panda$core$Int32 $tmp222 = (panda$core$Int32) {18};
panda$core$Int32 $tmp223 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp221, $tmp222);
panda$core$String** $tmp224 = &param0->str;
panda$core$String* $tmp225 = *$tmp224;
panda$core$Char8** $tmp226 = &$tmp225->data;
panda$core$Char8* $tmp227 = *$tmp226;
panda$core$Int64* $tmp228 = &param0->index;
panda$core$Int64 $tmp229 = *$tmp228;
panda$core$Int64 $tmp230 = (panda$core$Int64) {1};
int64_t $tmp231 = $tmp229.value;
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231 + $tmp232;
panda$core$Int64 $tmp234 = (panda$core$Int64) {$tmp233};
int64_t $tmp235 = $tmp234.value;
panda$core$Char8 $tmp236 = $tmp227[$tmp235];
panda$core$Int32 $tmp237 = panda$core$Char8$convert$R$panda$core$Int32($tmp236);
panda$core$Int32 $tmp238 = (panda$core$Int32) {63};
panda$core$Int32 $tmp239 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp237, $tmp238);
panda$core$Int32 $tmp240 = (panda$core$Int32) {12};
panda$core$Int32 $tmp241 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp239, $tmp240);
int32_t $tmp242 = $tmp223.value;
int32_t $tmp243 = $tmp241.value;
int32_t $tmp244 = $tmp242 + $tmp243;
panda$core$Int32 $tmp245 = (panda$core$Int32) {$tmp244};
panda$core$String** $tmp246 = &param0->str;
panda$core$String* $tmp247 = *$tmp246;
panda$core$Char8** $tmp248 = &$tmp247->data;
panda$core$Char8* $tmp249 = *$tmp248;
panda$core$Int64* $tmp250 = &param0->index;
panda$core$Int64 $tmp251 = *$tmp250;
panda$core$Int64 $tmp252 = (panda$core$Int64) {2};
int64_t $tmp253 = $tmp251.value;
int64_t $tmp254 = $tmp252.value;
int64_t $tmp255 = $tmp253 + $tmp254;
panda$core$Int64 $tmp256 = (panda$core$Int64) {$tmp255};
int64_t $tmp257 = $tmp256.value;
panda$core$Char8 $tmp258 = $tmp249[$tmp257];
panda$core$Int32 $tmp259 = panda$core$Char8$convert$R$panda$core$Int32($tmp258);
panda$core$Int32 $tmp260 = (panda$core$Int32) {63};
panda$core$Int32 $tmp261 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp259, $tmp260);
panda$core$Int32 $tmp262 = (panda$core$Int32) {6};
panda$core$Int32 $tmp263 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp261, $tmp262);
int32_t $tmp264 = $tmp245.value;
int32_t $tmp265 = $tmp263.value;
int32_t $tmp266 = $tmp264 + $tmp265;
panda$core$Int32 $tmp267 = (panda$core$Int32) {$tmp266};
panda$core$String** $tmp268 = &param0->str;
panda$core$String* $tmp269 = *$tmp268;
panda$core$Char8** $tmp270 = &$tmp269->data;
panda$core$Char8* $tmp271 = *$tmp270;
panda$core$Int64* $tmp272 = &param0->index;
panda$core$Int64 $tmp273 = *$tmp272;
panda$core$Int64 $tmp274 = (panda$core$Int64) {3};
int64_t $tmp275 = $tmp273.value;
int64_t $tmp276 = $tmp274.value;
int64_t $tmp277 = $tmp275 + $tmp276;
panda$core$Int64 $tmp278 = (panda$core$Int64) {$tmp277};
int64_t $tmp279 = $tmp278.value;
panda$core$Char8 $tmp280 = $tmp271[$tmp279];
panda$core$Int32 $tmp281 = panda$core$Char8$convert$R$panda$core$Int32($tmp280);
panda$core$Int32 $tmp282 = (panda$core$Int32) {63};
panda$core$Int32 $tmp283 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp281, $tmp282);
int32_t $tmp284 = $tmp267.value;
int32_t $tmp285 = $tmp283.value;
int32_t $tmp286 = $tmp284 + $tmp285;
panda$core$Int32 $tmp287 = (panda$core$Int32) {$tmp286};
*(&local1) = $tmp287;
goto block18;
block19:;
// line 1
// line 204
panda$core$Int32 $tmp288 = (panda$core$Int32) {0};
*(&local1) = $tmp288;
goto block18;
block18:;
// line 206
panda$core$Int64* $tmp289 = &param0->index;
panda$core$Int64 $tmp290 = *$tmp289;
panda$core$Int64 $tmp291 = (panda$core$Int64) {4};
int64_t $tmp292 = $tmp290.value;
int64_t $tmp293 = $tmp291.value;
int64_t $tmp294 = $tmp292 + $tmp293;
panda$core$Int64 $tmp295 = (panda$core$Int64) {$tmp294};
panda$core$Int64* $tmp296 = &param0->index;
*$tmp296 = $tmp295;
// line 207
panda$core$Int32 $tmp297 = *(&local1);
panda$core$Char32 $tmp298 = panda$core$Char32$init$panda$core$Int32($tmp297);
return $tmp298;

}
void panda$core$String$UTF32Iterator$cleanup(panda$core$String$UTF32Iterator* param0) {

// line 153
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$String** $tmp299 = &param0->str;
panda$core$String* $tmp300 = *$tmp299;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
return;

}

