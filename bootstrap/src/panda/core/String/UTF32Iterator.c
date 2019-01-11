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

struct { panda$core$Class* cl; ITable* next; void* methods[11]; } panda$core$String$UTF32Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
panda$core$String$UTF32Iterator$class_type panda$core$String$UTF32Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$core$String$UTF32Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$String$UTF32Iterator$cleanup, panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit, panda$core$String$UTF32Iterator$next$R$panda$core$Char32$shim} };

typedef panda$core$Bit (*$fn20)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -5037726590576122771, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 88, 4979016066119780571, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 12, -7878295537817775382, NULL };

void panda$core$String$UTF32Iterator$init$panda$core$String(panda$core$String$UTF32Iterator* param0, panda$core$String* param1) {

// line 154
panda$core$Int64 $tmp3 = (panda$core$Int64) {0};
panda$core$Int64* $tmp4 = &param0->index;
*$tmp4 = $tmp3;
// line 159
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$String** $tmp5 = &param0->str;
panda$core$String* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
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
ITable* $tmp18 = ((panda$collections$Iterator*) param0)->$class->itable;
while ($tmp18->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
$fn20 $tmp19 = $tmp18->methods[0];
panda$core$Bit $tmp21 = $tmp19(((panda$collections$Iterator*) param0));
panda$core$Bit $tmp22 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp21);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp24 = (panda$core$Int64) {168};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s25, $tmp24, &$s26);
abort(); // unreachable
block1:;
// line 169
panda$core$Int64* $tmp27 = &param0->index;
panda$core$Int64 $tmp28 = *$tmp27;
panda$core$String** $tmp29 = &param0->str;
panda$core$String* $tmp30 = *$tmp29;
panda$core$Int64* $tmp31 = &$tmp30->_length;
panda$core$Int64 $tmp32 = *$tmp31;
int64_t $tmp33 = $tmp28.value;
int64_t $tmp34 = $tmp32.value;
bool $tmp35 = $tmp33 < $tmp34;
panda$core$Bit $tmp36 = (panda$core$Bit) {$tmp35};
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp38 = (panda$core$Int64) {169};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s39, $tmp38);
abort(); // unreachable
block3:;
// line 170
panda$core$String** $tmp40 = &param0->str;
panda$core$String* $tmp41 = *$tmp40;
panda$core$Char8** $tmp42 = &$tmp41->data;
panda$core$Char8* $tmp43 = *$tmp42;
panda$core$Int64* $tmp44 = &param0->index;
panda$core$Int64 $tmp45 = *$tmp44;
int64_t $tmp46 = $tmp45.value;
panda$core$Char8 $tmp47 = $tmp43[$tmp46];
*(&local0) = $tmp47;
// line 171
panda$core$Char8 $tmp48 = *(&local0);
panda$core$Int32 $tmp49 = panda$core$Char8$convert$R$panda$core$Int32($tmp48);
*(&local1) = $tmp49;
// line 172
panda$core$Char8 $tmp50 = *(&local0);
uint8_t $tmp51 = $tmp50.value;
int64_t $tmp52 = ((int64_t) $tmp51) & 255;
bool $tmp53 = $tmp52 < 128;
panda$core$Bit $tmp54 = panda$core$Bit$init$builtin_bit($tmp53);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block5; else goto block6;
block5:;
// line 173
panda$core$Int64* $tmp56 = &param0->index;
panda$core$Int64 $tmp57 = *$tmp56;
panda$core$Int64 $tmp58 = (panda$core$Int64) {1};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 + $tmp60;
panda$core$Int64 $tmp62 = (panda$core$Int64) {$tmp61};
panda$core$Int64* $tmp63 = &param0->index;
*$tmp63 = $tmp62;
// line 174
panda$core$Int32 $tmp64 = *(&local1);
panda$core$Char32 $tmp65 = panda$core$Char32$init$panda$core$Int32($tmp64);
return $tmp65;
block6:;
// line 176
panda$core$Char8 $tmp66 = *(&local0);
uint8_t $tmp67 = $tmp66.value;
int64_t $tmp68 = ((int64_t) $tmp67) & 255;
bool $tmp69 = $tmp68 < 192;
panda$core$Bit $tmp70 = panda$core$Bit$init$builtin_bit($tmp69);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block7; else goto block8;
block7:;
// line 177
panda$core$Int64* $tmp72 = &param0->index;
panda$core$Int64 $tmp73 = *$tmp72;
panda$core$Int64 $tmp74 = (panda$core$Int64) {1};
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75 + $tmp76;
panda$core$Int64 $tmp78 = (panda$core$Int64) {$tmp77};
panda$core$String** $tmp79 = &param0->str;
panda$core$String* $tmp80 = *$tmp79;
panda$core$Int64* $tmp81 = &$tmp80->_length;
panda$core$Int64 $tmp82 = *$tmp81;
int64_t $tmp83 = $tmp78.value;
int64_t $tmp84 = $tmp82.value;
bool $tmp85 = $tmp83 < $tmp84;
panda$core$Bit $tmp86 = (panda$core$Bit) {$tmp85};
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block9; else goto block11;
block9:;
// line 178
panda$core$Int32 $tmp88 = *(&local1);
panda$core$Int32 $tmp89 = (panda$core$Int32) {31};
panda$core$Int32 $tmp90 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp88, $tmp89);
panda$core$Int32 $tmp91 = (panda$core$Int32) {6};
panda$core$Int32 $tmp92 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp90, $tmp91);
panda$core$String** $tmp93 = &param0->str;
panda$core$String* $tmp94 = *$tmp93;
panda$core$Char8** $tmp95 = &$tmp94->data;
panda$core$Char8* $tmp96 = *$tmp95;
panda$core$Int64* $tmp97 = &param0->index;
panda$core$Int64 $tmp98 = *$tmp97;
panda$core$Int64 $tmp99 = (panda$core$Int64) {1};
int64_t $tmp100 = $tmp98.value;
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100 + $tmp101;
panda$core$Int64 $tmp103 = (panda$core$Int64) {$tmp102};
int64_t $tmp104 = $tmp103.value;
panda$core$Char8 $tmp105 = $tmp96[$tmp104];
panda$core$Int32 $tmp106 = panda$core$Char8$convert$R$panda$core$Int32($tmp105);
panda$core$Int32 $tmp107 = (panda$core$Int32) {63};
panda$core$Int32 $tmp108 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp106, $tmp107);
int32_t $tmp109 = $tmp92.value;
int32_t $tmp110 = $tmp108.value;
int32_t $tmp111 = $tmp109 + $tmp110;
panda$core$Int32 $tmp112 = (panda$core$Int32) {$tmp111};
*(&local1) = $tmp112;
goto block10;
block11:;
// line 1
// line 182
panda$core$Int32 $tmp113 = (panda$core$Int32) {0};
*(&local1) = $tmp113;
goto block10;
block10:;
// line 184
panda$core$Int64* $tmp114 = &param0->index;
panda$core$Int64 $tmp115 = *$tmp114;
panda$core$Int64 $tmp116 = (panda$core$Int64) {2};
int64_t $tmp117 = $tmp115.value;
int64_t $tmp118 = $tmp116.value;
int64_t $tmp119 = $tmp117 + $tmp118;
panda$core$Int64 $tmp120 = (panda$core$Int64) {$tmp119};
panda$core$Int64* $tmp121 = &param0->index;
*$tmp121 = $tmp120;
// line 185
panda$core$Int32 $tmp122 = *(&local1);
panda$core$Char32 $tmp123 = panda$core$Char32$init$panda$core$Int32($tmp122);
return $tmp123;
block8:;
// line 187
panda$core$Char8 $tmp124 = *(&local0);
uint8_t $tmp125 = $tmp124.value;
int64_t $tmp126 = ((int64_t) $tmp125) & 255;
bool $tmp127 = $tmp126 < 224;
panda$core$Bit $tmp128 = panda$core$Bit$init$builtin_bit($tmp127);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block12; else goto block13;
block12:;
// line 188
panda$core$Int64* $tmp130 = &param0->index;
panda$core$Int64 $tmp131 = *$tmp130;
panda$core$Int64 $tmp132 = (panda$core$Int64) {2};
int64_t $tmp133 = $tmp131.value;
int64_t $tmp134 = $tmp132.value;
int64_t $tmp135 = $tmp133 + $tmp134;
panda$core$Int64 $tmp136 = (panda$core$Int64) {$tmp135};
panda$core$String** $tmp137 = &param0->str;
panda$core$String* $tmp138 = *$tmp137;
panda$core$Int64* $tmp139 = &$tmp138->_length;
panda$core$Int64 $tmp140 = *$tmp139;
int64_t $tmp141 = $tmp136.value;
int64_t $tmp142 = $tmp140.value;
bool $tmp143 = $tmp141 < $tmp142;
panda$core$Bit $tmp144 = (panda$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block14; else goto block16;
block14:;
// line 189
panda$core$Int32 $tmp146 = *(&local1);
panda$core$Int32 $tmp147 = (panda$core$Int32) {15};
panda$core$Int32 $tmp148 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp146, $tmp147);
panda$core$Int32 $tmp149 = (panda$core$Int32) {12};
panda$core$Int32 $tmp150 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp148, $tmp149);
panda$core$String** $tmp151 = &param0->str;
panda$core$String* $tmp152 = *$tmp151;
panda$core$Char8** $tmp153 = &$tmp152->data;
panda$core$Char8* $tmp154 = *$tmp153;
panda$core$Int64* $tmp155 = &param0->index;
panda$core$Int64 $tmp156 = *$tmp155;
panda$core$Int64 $tmp157 = (panda$core$Int64) {1};
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158 + $tmp159;
panda$core$Int64 $tmp161 = (panda$core$Int64) {$tmp160};
int64_t $tmp162 = $tmp161.value;
panda$core$Char8 $tmp163 = $tmp154[$tmp162];
panda$core$Int32 $tmp164 = panda$core$Char8$convert$R$panda$core$Int32($tmp163);
panda$core$Int32 $tmp165 = (panda$core$Int32) {63};
panda$core$Int32 $tmp166 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp164, $tmp165);
panda$core$Int32 $tmp167 = (panda$core$Int32) {6};
panda$core$Int32 $tmp168 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp166, $tmp167);
int32_t $tmp169 = $tmp150.value;
int32_t $tmp170 = $tmp168.value;
int32_t $tmp171 = $tmp169 + $tmp170;
panda$core$Int32 $tmp172 = (panda$core$Int32) {$tmp171};
panda$core$String** $tmp173 = &param0->str;
panda$core$String* $tmp174 = *$tmp173;
panda$core$Char8** $tmp175 = &$tmp174->data;
panda$core$Char8* $tmp176 = *$tmp175;
panda$core$Int64* $tmp177 = &param0->index;
panda$core$Int64 $tmp178 = *$tmp177;
panda$core$Int64 $tmp179 = (panda$core$Int64) {2};
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180 + $tmp181;
panda$core$Int64 $tmp183 = (panda$core$Int64) {$tmp182};
int64_t $tmp184 = $tmp183.value;
panda$core$Char8 $tmp185 = $tmp176[$tmp184];
panda$core$Int32 $tmp186 = panda$core$Char8$convert$R$panda$core$Int32($tmp185);
panda$core$Int32 $tmp187 = (panda$core$Int32) {63};
panda$core$Int32 $tmp188 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp186, $tmp187);
int32_t $tmp189 = $tmp172.value;
int32_t $tmp190 = $tmp188.value;
int32_t $tmp191 = $tmp189 + $tmp190;
panda$core$Int32 $tmp192 = (panda$core$Int32) {$tmp191};
*(&local1) = $tmp192;
goto block15;
block16:;
// line 1
// line 193
panda$core$Int32 $tmp193 = (panda$core$Int32) {0};
*(&local1) = $tmp193;
goto block15;
block15:;
// line 195
panda$core$Int64* $tmp194 = &param0->index;
panda$core$Int64 $tmp195 = *$tmp194;
panda$core$Int64 $tmp196 = (panda$core$Int64) {3};
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196.value;
int64_t $tmp199 = $tmp197 + $tmp198;
panda$core$Int64 $tmp200 = (panda$core$Int64) {$tmp199};
panda$core$Int64* $tmp201 = &param0->index;
*$tmp201 = $tmp200;
// line 196
panda$core$Int32 $tmp202 = *(&local1);
panda$core$Char32 $tmp203 = panda$core$Char32$init$panda$core$Int32($tmp202);
return $tmp203;
block13:;
// line 198
panda$core$Int64* $tmp204 = &param0->index;
panda$core$Int64 $tmp205 = *$tmp204;
panda$core$Int64 $tmp206 = (panda$core$Int64) {3};
int64_t $tmp207 = $tmp205.value;
int64_t $tmp208 = $tmp206.value;
int64_t $tmp209 = $tmp207 + $tmp208;
panda$core$Int64 $tmp210 = (panda$core$Int64) {$tmp209};
panda$core$String** $tmp211 = &param0->str;
panda$core$String* $tmp212 = *$tmp211;
panda$core$Int64* $tmp213 = &$tmp212->_length;
panda$core$Int64 $tmp214 = *$tmp213;
int64_t $tmp215 = $tmp210.value;
int64_t $tmp216 = $tmp214.value;
bool $tmp217 = $tmp215 < $tmp216;
panda$core$Bit $tmp218 = (panda$core$Bit) {$tmp217};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block17; else goto block19;
block17:;
// line 199
panda$core$Int32 $tmp220 = *(&local1);
panda$core$Int32 $tmp221 = (panda$core$Int32) {7};
panda$core$Int32 $tmp222 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp220, $tmp221);
panda$core$Int32 $tmp223 = (panda$core$Int32) {18};
panda$core$Int32 $tmp224 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp222, $tmp223);
panda$core$String** $tmp225 = &param0->str;
panda$core$String* $tmp226 = *$tmp225;
panda$core$Char8** $tmp227 = &$tmp226->data;
panda$core$Char8* $tmp228 = *$tmp227;
panda$core$Int64* $tmp229 = &param0->index;
panda$core$Int64 $tmp230 = *$tmp229;
panda$core$Int64 $tmp231 = (panda$core$Int64) {1};
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231.value;
int64_t $tmp234 = $tmp232 + $tmp233;
panda$core$Int64 $tmp235 = (panda$core$Int64) {$tmp234};
int64_t $tmp236 = $tmp235.value;
panda$core$Char8 $tmp237 = $tmp228[$tmp236];
panda$core$Int32 $tmp238 = panda$core$Char8$convert$R$panda$core$Int32($tmp237);
panda$core$Int32 $tmp239 = (panda$core$Int32) {63};
panda$core$Int32 $tmp240 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp238, $tmp239);
panda$core$Int32 $tmp241 = (panda$core$Int32) {12};
panda$core$Int32 $tmp242 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp240, $tmp241);
int32_t $tmp243 = $tmp224.value;
int32_t $tmp244 = $tmp242.value;
int32_t $tmp245 = $tmp243 + $tmp244;
panda$core$Int32 $tmp246 = (panda$core$Int32) {$tmp245};
panda$core$String** $tmp247 = &param0->str;
panda$core$String* $tmp248 = *$tmp247;
panda$core$Char8** $tmp249 = &$tmp248->data;
panda$core$Char8* $tmp250 = *$tmp249;
panda$core$Int64* $tmp251 = &param0->index;
panda$core$Int64 $tmp252 = *$tmp251;
panda$core$Int64 $tmp253 = (panda$core$Int64) {2};
int64_t $tmp254 = $tmp252.value;
int64_t $tmp255 = $tmp253.value;
int64_t $tmp256 = $tmp254 + $tmp255;
panda$core$Int64 $tmp257 = (panda$core$Int64) {$tmp256};
int64_t $tmp258 = $tmp257.value;
panda$core$Char8 $tmp259 = $tmp250[$tmp258];
panda$core$Int32 $tmp260 = panda$core$Char8$convert$R$panda$core$Int32($tmp259);
panda$core$Int32 $tmp261 = (panda$core$Int32) {63};
panda$core$Int32 $tmp262 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp260, $tmp261);
panda$core$Int32 $tmp263 = (panda$core$Int32) {6};
panda$core$Int32 $tmp264 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp262, $tmp263);
int32_t $tmp265 = $tmp246.value;
int32_t $tmp266 = $tmp264.value;
int32_t $tmp267 = $tmp265 + $tmp266;
panda$core$Int32 $tmp268 = (panda$core$Int32) {$tmp267};
panda$core$String** $tmp269 = &param0->str;
panda$core$String* $tmp270 = *$tmp269;
panda$core$Char8** $tmp271 = &$tmp270->data;
panda$core$Char8* $tmp272 = *$tmp271;
panda$core$Int64* $tmp273 = &param0->index;
panda$core$Int64 $tmp274 = *$tmp273;
panda$core$Int64 $tmp275 = (panda$core$Int64) {3};
int64_t $tmp276 = $tmp274.value;
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276 + $tmp277;
panda$core$Int64 $tmp279 = (panda$core$Int64) {$tmp278};
int64_t $tmp280 = $tmp279.value;
panda$core$Char8 $tmp281 = $tmp272[$tmp280];
panda$core$Int32 $tmp282 = panda$core$Char8$convert$R$panda$core$Int32($tmp281);
panda$core$Int32 $tmp283 = (panda$core$Int32) {63};
panda$core$Int32 $tmp284 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp282, $tmp283);
int32_t $tmp285 = $tmp268.value;
int32_t $tmp286 = $tmp284.value;
int32_t $tmp287 = $tmp285 + $tmp286;
panda$core$Int32 $tmp288 = (panda$core$Int32) {$tmp287};
*(&local1) = $tmp288;
goto block18;
block19:;
// line 1
// line 204
panda$core$Int32 $tmp289 = (panda$core$Int32) {0};
*(&local1) = $tmp289;
goto block18;
block18:;
// line 206
panda$core$Int64* $tmp290 = &param0->index;
panda$core$Int64 $tmp291 = *$tmp290;
panda$core$Int64 $tmp292 = (panda$core$Int64) {4};
int64_t $tmp293 = $tmp291.value;
int64_t $tmp294 = $tmp292.value;
int64_t $tmp295 = $tmp293 + $tmp294;
panda$core$Int64 $tmp296 = (panda$core$Int64) {$tmp295};
panda$core$Int64* $tmp297 = &param0->index;
*$tmp297 = $tmp296;
// line 207
panda$core$Int32 $tmp298 = *(&local1);
panda$core$Char32 $tmp299 = panda$core$Char32$init$panda$core$Int32($tmp298);
return $tmp299;

}
void panda$core$String$UTF32Iterator$cleanup(panda$core$String$UTF32Iterator* param0) {

// line 153
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$String** $tmp300 = &param0->str;
panda$core$String* $tmp301 = *$tmp300;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
return;

}

