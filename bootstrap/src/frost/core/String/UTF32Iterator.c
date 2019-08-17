#include "frost/core/String/UTF32Iterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Char32.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Char8.h"
#include "frost/core/Int32.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Object* frost$core$String$UTF32Iterator$next$R$frost$core$Char32$shim(frost$core$String$UTF32Iterator* p0) {
    frost$core$Char32 result = frost$core$String$UTF32Iterator$next$R$frost$core$Char32(p0);

    frost$core$Char32$wrapper* $tmp2;
    $tmp2 = (frost$core$Char32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Char32$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$core$String$UTF32Iterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF32Iterator$next$R$frost$core$Char32$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$core$String$UTF32Iterator$class_type frost$core$String$UTF32Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$UTF32Iterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$UTF32Iterator$cleanup, frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF32Iterator$next$R$frost$core$Char32$shim} };

typedef frost$core$Bit (*$fn20)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -2661654210963896095, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 88, 2168974927089519619, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };

void frost$core$String$UTF32Iterator$init$frost$core$String(frost$core$String$UTF32Iterator* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:154
frost$core$Int $tmp3 = (frost$core$Int) {0u};
frost$core$Int* $tmp4 = &param0->index;
*$tmp4 = $tmp3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:159
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp5 = &param0->str;
frost$core$String* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$String** $tmp7 = &param0->str;
*$tmp7 = param1;
return;

}
frost$core$Bit frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit(frost$core$String$UTF32Iterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:164
frost$core$Int* $tmp8 = &param0->index;
frost$core$Int $tmp9 = *$tmp8;
frost$core$String** $tmp10 = &param0->str;
frost$core$String* $tmp11 = *$tmp10;
frost$core$Int* $tmp12 = &$tmp11->_length;
frost$core$Int $tmp13 = *$tmp12;
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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp22 = $tmp21.value;
bool $tmp23 = !$tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block2:;
frost$core$Int $tmp26 = (frost$core$Int) {168u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:169
frost$core$Int* $tmp29 = &param0->index;
frost$core$Int $tmp30 = *$tmp29;
frost$core$String** $tmp31 = &param0->str;
frost$core$String* $tmp32 = *$tmp31;
frost$core$Int* $tmp33 = &$tmp32->_length;
frost$core$Int $tmp34 = *$tmp33;
int64_t $tmp35 = $tmp30.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 < $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block4; else goto block5;
block5:;
frost$core$Int $tmp40 = (frost$core$Int) {169u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s41, $tmp40);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:170
frost$core$String** $tmp42 = &param0->str;
frost$core$String* $tmp43 = *$tmp42;
frost$core$Char8** $tmp44 = &$tmp43->data;
frost$core$Char8* $tmp45 = *$tmp44;
frost$core$Int* $tmp46 = &param0->index;
frost$core$Int $tmp47 = *$tmp46;
frost$core$Int64 $tmp48 = frost$core$Int64$init$frost$core$Int($tmp47);
int64_t $tmp49 = $tmp48.value;
frost$core$Char8 $tmp50 = $tmp45[$tmp49];
*(&local0) = $tmp50;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:171
frost$core$Char8 $tmp51 = *(&local0);
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:171:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp52 = $tmp51.value;
int32_t $tmp53 = ((int32_t) $tmp52) & 255u;
frost$core$Int32 $tmp54 = (frost$core$Int32) {$tmp53};
*(&local1) = $tmp54;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:172
frost$core$Char8 $tmp55 = *(&local0);
uint8_t $tmp56 = $tmp55.value;
int64_t $tmp57 = ((int64_t) $tmp56) & 255u;
bool $tmp58 = $tmp57 < 128u;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:173
frost$core$Int* $tmp61 = &param0->index;
frost$core$Int $tmp62 = *$tmp61;
frost$core$Int $tmp63 = (frost$core$Int) {1u};
int64_t $tmp64 = $tmp62.value;
int64_t $tmp65 = $tmp63.value;
int64_t $tmp66 = $tmp64 + $tmp65;
frost$core$Int $tmp67 = (frost$core$Int) {$tmp66};
frost$core$Int* $tmp68 = &param0->index;
*$tmp68 = $tmp67;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:174
frost$core$Int32 $tmp69 = *(&local1);
frost$core$Char32 $tmp70 = frost$core$Char32$init$frost$core$Int32($tmp69);
return $tmp70;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:176
frost$core$Char8 $tmp71 = *(&local0);
uint8_t $tmp72 = $tmp71.value;
int64_t $tmp73 = ((int64_t) $tmp72) & 255u;
bool $tmp74 = $tmp73 < 192u;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:177
frost$core$Int* $tmp77 = &param0->index;
frost$core$Int $tmp78 = *$tmp77;
frost$core$Int $tmp79 = (frost$core$Int) {1u};
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79.value;
int64_t $tmp82 = $tmp80 + $tmp81;
frost$core$Int $tmp83 = (frost$core$Int) {$tmp82};
frost$core$String** $tmp84 = &param0->str;
frost$core$String* $tmp85 = *$tmp84;
frost$core$Int* $tmp86 = &$tmp85->_length;
frost$core$Int $tmp87 = *$tmp86;
int64_t $tmp88 = $tmp83.value;
int64_t $tmp89 = $tmp87.value;
bool $tmp90 = $tmp88 < $tmp89;
frost$core$Bit $tmp91 = (frost$core$Bit) {$tmp90};
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:178
frost$core$Int32 $tmp93 = *(&local1);
frost$core$Int32 $tmp94 = (frost$core$Int32) {1984u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:178:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp95 = $tmp93.value;
int32_t $tmp96 = $tmp94.value;
int32_t $tmp97 = $tmp95 & $tmp96;
frost$core$Int32 $tmp98 = (frost$core$Int32) {$tmp97};
frost$core$String** $tmp99 = &param0->str;
frost$core$String* $tmp100 = *$tmp99;
frost$core$Char8** $tmp101 = &$tmp100->data;
frost$core$Char8* $tmp102 = *$tmp101;
frost$core$Int* $tmp103 = &param0->index;
frost$core$Int $tmp104 = *$tmp103;
frost$core$Int64 $tmp105 = frost$core$Int64$init$frost$core$Int($tmp104);
frost$core$Int64 $tmp106 = (frost$core$Int64) {1u};
int64_t $tmp107 = $tmp105.value;
int64_t $tmp108 = $tmp106.value;
int64_t $tmp109 = $tmp107 + $tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {$tmp109};
int64_t $tmp111 = $tmp110.value;
frost$core$Char8 $tmp112 = $tmp102[$tmp111];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:178:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp113 = $tmp112.value;
int32_t $tmp114 = ((int32_t) $tmp113) & 255u;
frost$core$Int32 $tmp115 = (frost$core$Int32) {$tmp114};
frost$core$Int32 $tmp116 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:178:84
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp117 = $tmp115.value;
int32_t $tmp118 = $tmp116.value;
int32_t $tmp119 = $tmp117 & $tmp118;
frost$core$Int32 $tmp120 = (frost$core$Int32) {$tmp119};
int32_t $tmp121 = $tmp98.value;
int32_t $tmp122 = $tmp120.value;
int32_t $tmp123 = $tmp121 + $tmp122;
frost$core$Int32 $tmp124 = (frost$core$Int32) {$tmp123};
*(&local1) = $tmp124;
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:182
frost$core$Int32 $tmp125 = (frost$core$Int32) {0u};
*(&local1) = $tmp125;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:184
frost$core$Int* $tmp126 = &param0->index;
frost$core$Int $tmp127 = *$tmp126;
frost$core$Int $tmp128 = (frost$core$Int) {2u};
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129 + $tmp130;
frost$core$Int $tmp132 = (frost$core$Int) {$tmp131};
frost$core$Int* $tmp133 = &param0->index;
*$tmp133 = $tmp132;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:185
frost$core$Int32 $tmp134 = *(&local1);
frost$core$Char32 $tmp135 = frost$core$Char32$init$frost$core$Int32($tmp134);
return $tmp135;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:187
frost$core$Char8 $tmp136 = *(&local0);
uint8_t $tmp137 = $tmp136.value;
int64_t $tmp138 = ((int64_t) $tmp137) & 255u;
bool $tmp139 = $tmp138 < 224u;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:188
frost$core$Int* $tmp142 = &param0->index;
frost$core$Int $tmp143 = *$tmp142;
frost$core$Int $tmp144 = (frost$core$Int) {2u};
int64_t $tmp145 = $tmp143.value;
int64_t $tmp146 = $tmp144.value;
int64_t $tmp147 = $tmp145 + $tmp146;
frost$core$Int $tmp148 = (frost$core$Int) {$tmp147};
frost$core$String** $tmp149 = &param0->str;
frost$core$String* $tmp150 = *$tmp149;
frost$core$Int* $tmp151 = &$tmp150->_length;
frost$core$Int $tmp152 = *$tmp151;
int64_t $tmp153 = $tmp148.value;
int64_t $tmp154 = $tmp152.value;
bool $tmp155 = $tmp153 < $tmp154;
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:189
frost$core$Int32 $tmp158 = *(&local1);
frost$core$Int32 $tmp159 = (frost$core$Int32) {61440u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:189:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp160 = $tmp158.value;
int32_t $tmp161 = $tmp159.value;
int32_t $tmp162 = $tmp160 & $tmp161;
frost$core$Int32 $tmp163 = (frost$core$Int32) {$tmp162};
frost$core$String** $tmp164 = &param0->str;
frost$core$String* $tmp165 = *$tmp164;
frost$core$Char8** $tmp166 = &$tmp165->data;
frost$core$Char8* $tmp167 = *$tmp166;
frost$core$Int* $tmp168 = &param0->index;
frost$core$Int $tmp169 = *$tmp168;
frost$core$Int64 $tmp170 = frost$core$Int64$init$frost$core$Int($tmp169);
frost$core$Int64 $tmp171 = (frost$core$Int64) {1u};
int64_t $tmp172 = $tmp170.value;
int64_t $tmp173 = $tmp171.value;
int64_t $tmp174 = $tmp172 + $tmp173;
frost$core$Int64 $tmp175 = (frost$core$Int64) {$tmp174};
int64_t $tmp176 = $tmp175.value;
frost$core$Char8 $tmp177 = $tmp167[$tmp176];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:189:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp178 = $tmp177.value;
int32_t $tmp179 = ((int32_t) $tmp178) & 255u;
frost$core$Int32 $tmp180 = (frost$core$Int32) {$tmp179};
frost$core$Int32 $tmp181 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:189:84
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp182 = $tmp180.value;
int32_t $tmp183 = $tmp181.value;
int32_t $tmp184 = $tmp182 & $tmp183;
frost$core$Int32 $tmp185 = (frost$core$Int32) {$tmp184};
int32_t $tmp186 = $tmp163.value;
int32_t $tmp187 = $tmp185.value;
int32_t $tmp188 = $tmp186 + $tmp187;
frost$core$Int32 $tmp189 = (frost$core$Int32) {$tmp188};
frost$core$String** $tmp190 = &param0->str;
frost$core$String* $tmp191 = *$tmp190;
frost$core$Char8** $tmp192 = &$tmp191->data;
frost$core$Char8* $tmp193 = *$tmp192;
frost$core$Int* $tmp194 = &param0->index;
frost$core$Int $tmp195 = *$tmp194;
frost$core$Int64 $tmp196 = frost$core$Int64$init$frost$core$Int($tmp195);
frost$core$Int64 $tmp197 = (frost$core$Int64) {2u};
int64_t $tmp198 = $tmp196.value;
int64_t $tmp199 = $tmp197.value;
int64_t $tmp200 = $tmp198 + $tmp199;
frost$core$Int64 $tmp201 = (frost$core$Int64) {$tmp200};
int64_t $tmp202 = $tmp201.value;
frost$core$Char8 $tmp203 = $tmp193[$tmp202];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:190:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp204 = $tmp203.value;
int32_t $tmp205 = ((int32_t) $tmp204) & 255u;
frost$core$Int32 $tmp206 = (frost$core$Int32) {$tmp205};
frost$core$Int32 $tmp207 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:190:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp208 = $tmp206.value;
int32_t $tmp209 = $tmp207.value;
int32_t $tmp210 = $tmp208 & $tmp209;
frost$core$Int32 $tmp211 = (frost$core$Int32) {$tmp210};
int32_t $tmp212 = $tmp189.value;
int32_t $tmp213 = $tmp211.value;
int32_t $tmp214 = $tmp212 + $tmp213;
frost$core$Int32 $tmp215 = (frost$core$Int32) {$tmp214};
*(&local1) = $tmp215;
goto block20;
block21:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:193
frost$core$Int32 $tmp216 = (frost$core$Int32) {0u};
*(&local1) = $tmp216;
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:195
frost$core$Int* $tmp217 = &param0->index;
frost$core$Int $tmp218 = *$tmp217;
frost$core$Int $tmp219 = (frost$core$Int) {3u};
int64_t $tmp220 = $tmp218.value;
int64_t $tmp221 = $tmp219.value;
int64_t $tmp222 = $tmp220 + $tmp221;
frost$core$Int $tmp223 = (frost$core$Int) {$tmp222};
frost$core$Int* $tmp224 = &param0->index;
*$tmp224 = $tmp223;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:196
frost$core$Int32 $tmp225 = *(&local1);
frost$core$Char32 $tmp226 = frost$core$Char32$init$frost$core$Int32($tmp225);
return $tmp226;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:198
frost$core$Int* $tmp227 = &param0->index;
frost$core$Int $tmp228 = *$tmp227;
frost$core$Int $tmp229 = (frost$core$Int) {3u};
int64_t $tmp230 = $tmp228.value;
int64_t $tmp231 = $tmp229.value;
int64_t $tmp232 = $tmp230 + $tmp231;
frost$core$Int $tmp233 = (frost$core$Int) {$tmp232};
frost$core$String** $tmp234 = &param0->str;
frost$core$String* $tmp235 = *$tmp234;
frost$core$Int* $tmp236 = &$tmp235->_length;
frost$core$Int $tmp237 = *$tmp236;
int64_t $tmp238 = $tmp233.value;
int64_t $tmp239 = $tmp237.value;
bool $tmp240 = $tmp238 < $tmp239;
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block27; else goto block29;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:199
frost$core$Int32 $tmp243 = *(&local1);
frost$core$Int32 $tmp244 = (frost$core$Int32) {1835008u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:199:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp245 = $tmp243.value;
int32_t $tmp246 = $tmp244.value;
int32_t $tmp247 = $tmp245 & $tmp246;
frost$core$Int32 $tmp248 = (frost$core$Int32) {$tmp247};
frost$core$String** $tmp249 = &param0->str;
frost$core$String* $tmp250 = *$tmp249;
frost$core$Char8** $tmp251 = &$tmp250->data;
frost$core$Char8* $tmp252 = *$tmp251;
frost$core$Int* $tmp253 = &param0->index;
frost$core$Int $tmp254 = *$tmp253;
frost$core$Int64 $tmp255 = frost$core$Int64$init$frost$core$Int($tmp254);
frost$core$Int64 $tmp256 = (frost$core$Int64) {1u};
int64_t $tmp257 = $tmp255.value;
int64_t $tmp258 = $tmp256.value;
int64_t $tmp259 = $tmp257 + $tmp258;
frost$core$Int64 $tmp260 = (frost$core$Int64) {$tmp259};
int64_t $tmp261 = $tmp260.value;
frost$core$Char8 $tmp262 = $tmp252[$tmp261];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:199:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp263 = $tmp262.value;
int32_t $tmp264 = ((int32_t) $tmp263) & 255u;
frost$core$Int32 $tmp265 = (frost$core$Int32) {$tmp264};
frost$core$Int32 $tmp266 = (frost$core$Int32) {258048u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:199:79
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp267 = $tmp265.value;
int32_t $tmp268 = $tmp266.value;
int32_t $tmp269 = $tmp267 & $tmp268;
frost$core$Int32 $tmp270 = (frost$core$Int32) {$tmp269};
int32_t $tmp271 = $tmp248.value;
int32_t $tmp272 = $tmp270.value;
int32_t $tmp273 = $tmp271 + $tmp272;
frost$core$Int32 $tmp274 = (frost$core$Int32) {$tmp273};
frost$core$String** $tmp275 = &param0->str;
frost$core$String* $tmp276 = *$tmp275;
frost$core$Char8** $tmp277 = &$tmp276->data;
frost$core$Char8* $tmp278 = *$tmp277;
frost$core$Int* $tmp279 = &param0->index;
frost$core$Int $tmp280 = *$tmp279;
frost$core$Int64 $tmp281 = frost$core$Int64$init$frost$core$Int($tmp280);
frost$core$Int64 $tmp282 = (frost$core$Int64) {2u};
int64_t $tmp283 = $tmp281.value;
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283 + $tmp284;
frost$core$Int64 $tmp286 = (frost$core$Int64) {$tmp285};
int64_t $tmp287 = $tmp286.value;
frost$core$Char8 $tmp288 = $tmp278[$tmp287];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:200:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp289 = $tmp288.value;
int32_t $tmp290 = ((int32_t) $tmp289) & 255u;
frost$core$Int32 $tmp291 = (frost$core$Int32) {$tmp290};
frost$core$Int32 $tmp292 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:200:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp293 = $tmp291.value;
int32_t $tmp294 = $tmp292.value;
int32_t $tmp295 = $tmp293 & $tmp294;
frost$core$Int32 $tmp296 = (frost$core$Int32) {$tmp295};
int32_t $tmp297 = $tmp274.value;
int32_t $tmp298 = $tmp296.value;
int32_t $tmp299 = $tmp297 + $tmp298;
frost$core$Int32 $tmp300 = (frost$core$Int32) {$tmp299};
frost$core$String** $tmp301 = &param0->str;
frost$core$String* $tmp302 = *$tmp301;
frost$core$Char8** $tmp303 = &$tmp302->data;
frost$core$Char8* $tmp304 = *$tmp303;
frost$core$Int* $tmp305 = &param0->index;
frost$core$Int $tmp306 = *$tmp305;
frost$core$Int64 $tmp307 = frost$core$Int64$init$frost$core$Int($tmp306);
frost$core$Int64 $tmp308 = (frost$core$Int64) {3u};
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308.value;
int64_t $tmp311 = $tmp309 + $tmp310;
frost$core$Int64 $tmp312 = (frost$core$Int64) {$tmp311};
int64_t $tmp313 = $tmp312.value;
frost$core$Char8 $tmp314 = $tmp304[$tmp313];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:201:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:116
uint8_t $tmp315 = $tmp314.value;
int32_t $tmp316 = ((int32_t) $tmp315) & 255u;
frost$core$Int32 $tmp317 = (frost$core$Int32) {$tmp316};
frost$core$Int32 $tmp318 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:201:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp319 = $tmp317.value;
int32_t $tmp320 = $tmp318.value;
int32_t $tmp321 = $tmp319 & $tmp320;
frost$core$Int32 $tmp322 = (frost$core$Int32) {$tmp321};
int32_t $tmp323 = $tmp300.value;
int32_t $tmp324 = $tmp322.value;
int32_t $tmp325 = $tmp323 + $tmp324;
frost$core$Int32 $tmp326 = (frost$core$Int32) {$tmp325};
*(&local1) = $tmp326;
goto block28;
block29:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:204
frost$core$Int32 $tmp327 = (frost$core$Int32) {0u};
*(&local1) = $tmp327;
goto block28;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:206
frost$core$Int* $tmp328 = &param0->index;
frost$core$Int $tmp329 = *$tmp328;
frost$core$Int $tmp330 = (frost$core$Int) {4u};
int64_t $tmp331 = $tmp329.value;
int64_t $tmp332 = $tmp330.value;
int64_t $tmp333 = $tmp331 + $tmp332;
frost$core$Int $tmp334 = (frost$core$Int) {$tmp333};
frost$core$Int* $tmp335 = &param0->index;
*$tmp335 = $tmp334;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:207
frost$core$Int32 $tmp336 = *(&local1);
frost$core$Char32 $tmp337 = frost$core$Char32$init$frost$core$Int32($tmp336);
return $tmp337;

}
void frost$core$String$UTF32Iterator$cleanup(frost$core$String$UTF32Iterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:153
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp338 = &param0->str;
frost$core$String* $tmp339 = *$tmp338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
return;

}

