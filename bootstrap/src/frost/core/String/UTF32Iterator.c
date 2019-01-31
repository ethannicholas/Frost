#include "frost/core/String/UTF32Iterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Char32.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Char8.h"
#include "frost/core/Int32.h"

__attribute__((weak)) frost$core$Object* frost$core$String$UTF32Iterator$next$R$frost$core$Char32$shim(frost$core$String$UTF32Iterator* p0) {
    frost$core$Char32 result = frost$core$String$UTF32Iterator$next$R$frost$core$Char32(p0);

    frost$core$Char32$wrapper* $tmp2;
    $tmp2 = (frost$core$Char32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Char32$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$core$String$UTF32Iterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF32Iterator$next$R$frost$core$Char32$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$core$String$UTF32Iterator$class_type frost$core$String$UTF32Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$UTF32Iterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$UTF32Iterator$cleanup, frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF32Iterator$next$R$frost$core$Char32$shim} };

typedef frost$core$Bit (*$fn20)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -5772224074997401225, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 88, -7799978064406987001, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };

void frost$core$String$UTF32Iterator$init$frost$core$String(frost$core$String$UTF32Iterator* param0, frost$core$String* param1) {

// line 154
frost$core$Int64 $tmp3 = (frost$core$Int64) {0};
frost$core$Int64* $tmp4 = &param0->index;
*$tmp4 = $tmp3;
// line 159
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp5 = &param0->str;
frost$core$String* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$String** $tmp7 = &param0->str;
*$tmp7 = param1;
return;

}
frost$core$Bit frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit(frost$core$String$UTF32Iterator* param0) {

// line 164
frost$core$Int64* $tmp8 = &param0->index;
frost$core$Int64 $tmp9 = *$tmp8;
frost$core$String** $tmp10 = &param0->str;
frost$core$String* $tmp11 = *$tmp10;
frost$core$Int64* $tmp12 = &$tmp11->_length;
frost$core$Int64 $tmp13 = *$tmp12;
int64_t $tmp14 = $tmp9.value;
int64_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 >= $tmp15;
frost$core$Bit $tmp17 = (frost$core$Bit) {$tmp16};
return $tmp17;

}
frost$core$Char32 frost$core$String$UTF32Iterator$next$R$frost$core$Char32(frost$core$String$UTF32Iterator* param0) {

frost$core$Char8 local0;
frost$core$Int32 local1;
ITable* $tmp18 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
$fn20 $tmp19 = $tmp18->methods[0];
frost$core$Bit $tmp21 = $tmp19(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp22 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp21);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp24 = (frost$core$Int64) {168};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s25, $tmp24, &$s26);
abort(); // unreachable
block1:;
// line 169
frost$core$Int64* $tmp27 = &param0->index;
frost$core$Int64 $tmp28 = *$tmp27;
frost$core$String** $tmp29 = &param0->str;
frost$core$String* $tmp30 = *$tmp29;
frost$core$Int64* $tmp31 = &$tmp30->_length;
frost$core$Int64 $tmp32 = *$tmp31;
int64_t $tmp33 = $tmp28.value;
int64_t $tmp34 = $tmp32.value;
bool $tmp35 = $tmp33 < $tmp34;
frost$core$Bit $tmp36 = (frost$core$Bit) {$tmp35};
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp38 = (frost$core$Int64) {169};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s39, $tmp38);
abort(); // unreachable
block3:;
// line 170
frost$core$String** $tmp40 = &param0->str;
frost$core$String* $tmp41 = *$tmp40;
frost$core$Char8** $tmp42 = &$tmp41->data;
frost$core$Char8* $tmp43 = *$tmp42;
frost$core$Int64* $tmp44 = &param0->index;
frost$core$Int64 $tmp45 = *$tmp44;
int64_t $tmp46 = $tmp45.value;
frost$core$Char8 $tmp47 = $tmp43[$tmp46];
*(&local0) = $tmp47;
// line 171
frost$core$Char8 $tmp48 = *(&local0);
frost$core$Int32 $tmp49 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp48);
*(&local1) = $tmp49;
// line 172
frost$core$Char8 $tmp50 = *(&local0);
uint8_t $tmp51 = $tmp50.value;
int64_t $tmp52 = ((int64_t) $tmp51) & 255;
bool $tmp53 = $tmp52 < 128;
frost$core$Bit $tmp54 = frost$core$Bit$init$builtin_bit($tmp53);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block5; else goto block6;
block5:;
// line 173
frost$core$Int64* $tmp56 = &param0->index;
frost$core$Int64 $tmp57 = *$tmp56;
frost$core$Int64 $tmp58 = (frost$core$Int64) {1};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 + $tmp60;
frost$core$Int64 $tmp62 = (frost$core$Int64) {$tmp61};
frost$core$Int64* $tmp63 = &param0->index;
*$tmp63 = $tmp62;
// line 174
frost$core$Int32 $tmp64 = *(&local1);
frost$core$Char32 $tmp65 = frost$core$Char32$init$frost$core$Int32($tmp64);
return $tmp65;
block6:;
// line 176
frost$core$Char8 $tmp66 = *(&local0);
uint8_t $tmp67 = $tmp66.value;
int64_t $tmp68 = ((int64_t) $tmp67) & 255;
bool $tmp69 = $tmp68 < 192;
frost$core$Bit $tmp70 = frost$core$Bit$init$builtin_bit($tmp69);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block7; else goto block8;
block7:;
// line 177
frost$core$Int64* $tmp72 = &param0->index;
frost$core$Int64 $tmp73 = *$tmp72;
frost$core$Int64 $tmp74 = (frost$core$Int64) {1};
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75 + $tmp76;
frost$core$Int64 $tmp78 = (frost$core$Int64) {$tmp77};
frost$core$String** $tmp79 = &param0->str;
frost$core$String* $tmp80 = *$tmp79;
frost$core$Int64* $tmp81 = &$tmp80->_length;
frost$core$Int64 $tmp82 = *$tmp81;
int64_t $tmp83 = $tmp78.value;
int64_t $tmp84 = $tmp82.value;
bool $tmp85 = $tmp83 < $tmp84;
frost$core$Bit $tmp86 = (frost$core$Bit) {$tmp85};
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block9; else goto block11;
block9:;
// line 178
frost$core$Int32 $tmp88 = *(&local1);
frost$core$Int32 $tmp89 = (frost$core$Int32) {31};
frost$core$Int32 $tmp90 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp88, $tmp89);
frost$core$Int32 $tmp91 = (frost$core$Int32) {6};
frost$core$Int32 $tmp92 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp90, $tmp91);
frost$core$String** $tmp93 = &param0->str;
frost$core$String* $tmp94 = *$tmp93;
frost$core$Char8** $tmp95 = &$tmp94->data;
frost$core$Char8* $tmp96 = *$tmp95;
frost$core$Int64* $tmp97 = &param0->index;
frost$core$Int64 $tmp98 = *$tmp97;
frost$core$Int64 $tmp99 = (frost$core$Int64) {1};
int64_t $tmp100 = $tmp98.value;
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100 + $tmp101;
frost$core$Int64 $tmp103 = (frost$core$Int64) {$tmp102};
int64_t $tmp104 = $tmp103.value;
frost$core$Char8 $tmp105 = $tmp96[$tmp104];
frost$core$Int32 $tmp106 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp105);
frost$core$Int32 $tmp107 = (frost$core$Int32) {63};
frost$core$Int32 $tmp108 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp106, $tmp107);
int32_t $tmp109 = $tmp92.value;
int32_t $tmp110 = $tmp108.value;
int32_t $tmp111 = $tmp109 + $tmp110;
frost$core$Int32 $tmp112 = (frost$core$Int32) {$tmp111};
*(&local1) = $tmp112;
goto block10;
block11:;
// line 1
// line 182
frost$core$Int32 $tmp113 = (frost$core$Int32) {0};
*(&local1) = $tmp113;
goto block10;
block10:;
// line 184
frost$core$Int64* $tmp114 = &param0->index;
frost$core$Int64 $tmp115 = *$tmp114;
frost$core$Int64 $tmp116 = (frost$core$Int64) {2};
int64_t $tmp117 = $tmp115.value;
int64_t $tmp118 = $tmp116.value;
int64_t $tmp119 = $tmp117 + $tmp118;
frost$core$Int64 $tmp120 = (frost$core$Int64) {$tmp119};
frost$core$Int64* $tmp121 = &param0->index;
*$tmp121 = $tmp120;
// line 185
frost$core$Int32 $tmp122 = *(&local1);
frost$core$Char32 $tmp123 = frost$core$Char32$init$frost$core$Int32($tmp122);
return $tmp123;
block8:;
// line 187
frost$core$Char8 $tmp124 = *(&local0);
uint8_t $tmp125 = $tmp124.value;
int64_t $tmp126 = ((int64_t) $tmp125) & 255;
bool $tmp127 = $tmp126 < 224;
frost$core$Bit $tmp128 = frost$core$Bit$init$builtin_bit($tmp127);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block12; else goto block13;
block12:;
// line 188
frost$core$Int64* $tmp130 = &param0->index;
frost$core$Int64 $tmp131 = *$tmp130;
frost$core$Int64 $tmp132 = (frost$core$Int64) {2};
int64_t $tmp133 = $tmp131.value;
int64_t $tmp134 = $tmp132.value;
int64_t $tmp135 = $tmp133 + $tmp134;
frost$core$Int64 $tmp136 = (frost$core$Int64) {$tmp135};
frost$core$String** $tmp137 = &param0->str;
frost$core$String* $tmp138 = *$tmp137;
frost$core$Int64* $tmp139 = &$tmp138->_length;
frost$core$Int64 $tmp140 = *$tmp139;
int64_t $tmp141 = $tmp136.value;
int64_t $tmp142 = $tmp140.value;
bool $tmp143 = $tmp141 < $tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block14; else goto block16;
block14:;
// line 189
frost$core$Int32 $tmp146 = *(&local1);
frost$core$Int32 $tmp147 = (frost$core$Int32) {15};
frost$core$Int32 $tmp148 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp146, $tmp147);
frost$core$Int32 $tmp149 = (frost$core$Int32) {12};
frost$core$Int32 $tmp150 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp148, $tmp149);
frost$core$String** $tmp151 = &param0->str;
frost$core$String* $tmp152 = *$tmp151;
frost$core$Char8** $tmp153 = &$tmp152->data;
frost$core$Char8* $tmp154 = *$tmp153;
frost$core$Int64* $tmp155 = &param0->index;
frost$core$Int64 $tmp156 = *$tmp155;
frost$core$Int64 $tmp157 = (frost$core$Int64) {1};
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158 + $tmp159;
frost$core$Int64 $tmp161 = (frost$core$Int64) {$tmp160};
int64_t $tmp162 = $tmp161.value;
frost$core$Char8 $tmp163 = $tmp154[$tmp162];
frost$core$Int32 $tmp164 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp163);
frost$core$Int32 $tmp165 = (frost$core$Int32) {63};
frost$core$Int32 $tmp166 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp164, $tmp165);
frost$core$Int32 $tmp167 = (frost$core$Int32) {6};
frost$core$Int32 $tmp168 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp166, $tmp167);
int32_t $tmp169 = $tmp150.value;
int32_t $tmp170 = $tmp168.value;
int32_t $tmp171 = $tmp169 + $tmp170;
frost$core$Int32 $tmp172 = (frost$core$Int32) {$tmp171};
frost$core$String** $tmp173 = &param0->str;
frost$core$String* $tmp174 = *$tmp173;
frost$core$Char8** $tmp175 = &$tmp174->data;
frost$core$Char8* $tmp176 = *$tmp175;
frost$core$Int64* $tmp177 = &param0->index;
frost$core$Int64 $tmp178 = *$tmp177;
frost$core$Int64 $tmp179 = (frost$core$Int64) {2};
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180 + $tmp181;
frost$core$Int64 $tmp183 = (frost$core$Int64) {$tmp182};
int64_t $tmp184 = $tmp183.value;
frost$core$Char8 $tmp185 = $tmp176[$tmp184];
frost$core$Int32 $tmp186 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp185);
frost$core$Int32 $tmp187 = (frost$core$Int32) {63};
frost$core$Int32 $tmp188 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp186, $tmp187);
int32_t $tmp189 = $tmp172.value;
int32_t $tmp190 = $tmp188.value;
int32_t $tmp191 = $tmp189 + $tmp190;
frost$core$Int32 $tmp192 = (frost$core$Int32) {$tmp191};
*(&local1) = $tmp192;
goto block15;
block16:;
// line 1
// line 193
frost$core$Int32 $tmp193 = (frost$core$Int32) {0};
*(&local1) = $tmp193;
goto block15;
block15:;
// line 195
frost$core$Int64* $tmp194 = &param0->index;
frost$core$Int64 $tmp195 = *$tmp194;
frost$core$Int64 $tmp196 = (frost$core$Int64) {3};
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196.value;
int64_t $tmp199 = $tmp197 + $tmp198;
frost$core$Int64 $tmp200 = (frost$core$Int64) {$tmp199};
frost$core$Int64* $tmp201 = &param0->index;
*$tmp201 = $tmp200;
// line 196
frost$core$Int32 $tmp202 = *(&local1);
frost$core$Char32 $tmp203 = frost$core$Char32$init$frost$core$Int32($tmp202);
return $tmp203;
block13:;
// line 198
frost$core$Int64* $tmp204 = &param0->index;
frost$core$Int64 $tmp205 = *$tmp204;
frost$core$Int64 $tmp206 = (frost$core$Int64) {3};
int64_t $tmp207 = $tmp205.value;
int64_t $tmp208 = $tmp206.value;
int64_t $tmp209 = $tmp207 + $tmp208;
frost$core$Int64 $tmp210 = (frost$core$Int64) {$tmp209};
frost$core$String** $tmp211 = &param0->str;
frost$core$String* $tmp212 = *$tmp211;
frost$core$Int64* $tmp213 = &$tmp212->_length;
frost$core$Int64 $tmp214 = *$tmp213;
int64_t $tmp215 = $tmp210.value;
int64_t $tmp216 = $tmp214.value;
bool $tmp217 = $tmp215 < $tmp216;
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block17; else goto block19;
block17:;
// line 199
frost$core$Int32 $tmp220 = *(&local1);
frost$core$Int32 $tmp221 = (frost$core$Int32) {7};
frost$core$Int32 $tmp222 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp220, $tmp221);
frost$core$Int32 $tmp223 = (frost$core$Int32) {18};
frost$core$Int32 $tmp224 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp222, $tmp223);
frost$core$String** $tmp225 = &param0->str;
frost$core$String* $tmp226 = *$tmp225;
frost$core$Char8** $tmp227 = &$tmp226->data;
frost$core$Char8* $tmp228 = *$tmp227;
frost$core$Int64* $tmp229 = &param0->index;
frost$core$Int64 $tmp230 = *$tmp229;
frost$core$Int64 $tmp231 = (frost$core$Int64) {1};
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231.value;
int64_t $tmp234 = $tmp232 + $tmp233;
frost$core$Int64 $tmp235 = (frost$core$Int64) {$tmp234};
int64_t $tmp236 = $tmp235.value;
frost$core$Char8 $tmp237 = $tmp228[$tmp236];
frost$core$Int32 $tmp238 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp237);
frost$core$Int32 $tmp239 = (frost$core$Int32) {63};
frost$core$Int32 $tmp240 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp238, $tmp239);
frost$core$Int32 $tmp241 = (frost$core$Int32) {12};
frost$core$Int32 $tmp242 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp240, $tmp241);
int32_t $tmp243 = $tmp224.value;
int32_t $tmp244 = $tmp242.value;
int32_t $tmp245 = $tmp243 + $tmp244;
frost$core$Int32 $tmp246 = (frost$core$Int32) {$tmp245};
frost$core$String** $tmp247 = &param0->str;
frost$core$String* $tmp248 = *$tmp247;
frost$core$Char8** $tmp249 = &$tmp248->data;
frost$core$Char8* $tmp250 = *$tmp249;
frost$core$Int64* $tmp251 = &param0->index;
frost$core$Int64 $tmp252 = *$tmp251;
frost$core$Int64 $tmp253 = (frost$core$Int64) {2};
int64_t $tmp254 = $tmp252.value;
int64_t $tmp255 = $tmp253.value;
int64_t $tmp256 = $tmp254 + $tmp255;
frost$core$Int64 $tmp257 = (frost$core$Int64) {$tmp256};
int64_t $tmp258 = $tmp257.value;
frost$core$Char8 $tmp259 = $tmp250[$tmp258];
frost$core$Int32 $tmp260 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp259);
frost$core$Int32 $tmp261 = (frost$core$Int32) {63};
frost$core$Int32 $tmp262 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp260, $tmp261);
frost$core$Int32 $tmp263 = (frost$core$Int32) {6};
frost$core$Int32 $tmp264 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp262, $tmp263);
int32_t $tmp265 = $tmp246.value;
int32_t $tmp266 = $tmp264.value;
int32_t $tmp267 = $tmp265 + $tmp266;
frost$core$Int32 $tmp268 = (frost$core$Int32) {$tmp267};
frost$core$String** $tmp269 = &param0->str;
frost$core$String* $tmp270 = *$tmp269;
frost$core$Char8** $tmp271 = &$tmp270->data;
frost$core$Char8* $tmp272 = *$tmp271;
frost$core$Int64* $tmp273 = &param0->index;
frost$core$Int64 $tmp274 = *$tmp273;
frost$core$Int64 $tmp275 = (frost$core$Int64) {3};
int64_t $tmp276 = $tmp274.value;
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276 + $tmp277;
frost$core$Int64 $tmp279 = (frost$core$Int64) {$tmp278};
int64_t $tmp280 = $tmp279.value;
frost$core$Char8 $tmp281 = $tmp272[$tmp280];
frost$core$Int32 $tmp282 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp281);
frost$core$Int32 $tmp283 = (frost$core$Int32) {63};
frost$core$Int32 $tmp284 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp282, $tmp283);
int32_t $tmp285 = $tmp268.value;
int32_t $tmp286 = $tmp284.value;
int32_t $tmp287 = $tmp285 + $tmp286;
frost$core$Int32 $tmp288 = (frost$core$Int32) {$tmp287};
*(&local1) = $tmp288;
goto block18;
block19:;
// line 1
// line 204
frost$core$Int32 $tmp289 = (frost$core$Int32) {0};
*(&local1) = $tmp289;
goto block18;
block18:;
// line 206
frost$core$Int64* $tmp290 = &param0->index;
frost$core$Int64 $tmp291 = *$tmp290;
frost$core$Int64 $tmp292 = (frost$core$Int64) {4};
int64_t $tmp293 = $tmp291.value;
int64_t $tmp294 = $tmp292.value;
int64_t $tmp295 = $tmp293 + $tmp294;
frost$core$Int64 $tmp296 = (frost$core$Int64) {$tmp295};
frost$core$Int64* $tmp297 = &param0->index;
*$tmp297 = $tmp296;
// line 207
frost$core$Int32 $tmp298 = *(&local1);
frost$core$Char32 $tmp299 = frost$core$Char32$init$frost$core$Int32($tmp298);
return $tmp299;

}
void frost$core$String$UTF32Iterator$cleanup(frost$core$String$UTF32Iterator* param0) {

// line 153
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp300 = &param0->str;
frost$core$String* $tmp301 = *$tmp300;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
return;

}

