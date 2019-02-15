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
frost$core$String$UTF32Iterator$class_type frost$core$String$UTF32Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$UTF32Iterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$UTF32Iterator$cleanup, frost$core$String$UTF32Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF32Iterator$next$R$frost$core$Char32$shim} };

typedef frost$core$Bit (*$fn20)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -2661654210963896095, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x33\x32\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 88, 2168974927089519619, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };

void frost$core$String$UTF32Iterator$init$frost$core$String(frost$core$String$UTF32Iterator* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:154
frost$core$Int64 $tmp3 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp4 = &param0->index;
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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.stub:47:6
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp22 = $tmp21.value;
bool $tmp23 = !$tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp26 = (frost$core$Int64) {168u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:169
frost$core$Int64* $tmp29 = &param0->index;
frost$core$Int64 $tmp30 = *$tmp29;
frost$core$String** $tmp31 = &param0->str;
frost$core$String* $tmp32 = *$tmp31;
frost$core$Int64* $tmp33 = &$tmp32->_length;
frost$core$Int64 $tmp34 = *$tmp33;
int64_t $tmp35 = $tmp30.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 < $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {169u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s41, $tmp40);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:170
frost$core$String** $tmp42 = &param0->str;
frost$core$String* $tmp43 = *$tmp42;
frost$core$Char8** $tmp44 = &$tmp43->data;
frost$core$Char8* $tmp45 = *$tmp44;
frost$core$Int64* $tmp46 = &param0->index;
frost$core$Int64 $tmp47 = *$tmp46;
int64_t $tmp48 = $tmp47.value;
frost$core$Char8 $tmp49 = $tmp45[$tmp48];
*(&local0) = $tmp49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:171
frost$core$Char8 $tmp50 = *(&local0);
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:171:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp51 = $tmp50.value;
int32_t $tmp52 = ((int32_t) $tmp51) & 255u;
frost$core$Int32 $tmp53 = (frost$core$Int32) {$tmp52};
*(&local1) = $tmp53;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:172
frost$core$Char8 $tmp54 = *(&local0);
uint8_t $tmp55 = $tmp54.value;
int64_t $tmp56 = ((int64_t) $tmp55) & 255u;
bool $tmp57 = $tmp56 < 128u;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:173
frost$core$Int64* $tmp60 = &param0->index;
frost$core$Int64 $tmp61 = *$tmp60;
frost$core$Int64 $tmp62 = (frost$core$Int64) {1u};
int64_t $tmp63 = $tmp61.value;
int64_t $tmp64 = $tmp62.value;
int64_t $tmp65 = $tmp63 + $tmp64;
frost$core$Int64 $tmp66 = (frost$core$Int64) {$tmp65};
frost$core$Int64* $tmp67 = &param0->index;
*$tmp67 = $tmp66;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:174
frost$core$Int32 $tmp68 = *(&local1);
frost$core$Char32 $tmp69 = frost$core$Char32$init$frost$core$Int32($tmp68);
return $tmp69;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:176
frost$core$Char8 $tmp70 = *(&local0);
uint8_t $tmp71 = $tmp70.value;
int64_t $tmp72 = ((int64_t) $tmp71) & 255u;
bool $tmp73 = $tmp72 < 192u;
frost$core$Bit $tmp74 = (frost$core$Bit) {$tmp73};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:177
frost$core$Int64* $tmp76 = &param0->index;
frost$core$Int64 $tmp77 = *$tmp76;
frost$core$Int64 $tmp78 = (frost$core$Int64) {1u};
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79 + $tmp80;
frost$core$Int64 $tmp82 = (frost$core$Int64) {$tmp81};
frost$core$String** $tmp83 = &param0->str;
frost$core$String* $tmp84 = *$tmp83;
frost$core$Int64* $tmp85 = &$tmp84->_length;
frost$core$Int64 $tmp86 = *$tmp85;
int64_t $tmp87 = $tmp82.value;
int64_t $tmp88 = $tmp86.value;
bool $tmp89 = $tmp87 < $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:178
frost$core$Int32 $tmp92 = *(&local1);
frost$core$Int32 $tmp93 = (frost$core$Int32) {1984u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:178:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp94 = $tmp92.value;
int32_t $tmp95 = $tmp93.value;
int32_t $tmp96 = $tmp94 & $tmp95;
frost$core$Int32 $tmp97 = (frost$core$Int32) {$tmp96};
frost$core$String** $tmp98 = &param0->str;
frost$core$String* $tmp99 = *$tmp98;
frost$core$Char8** $tmp100 = &$tmp99->data;
frost$core$Char8* $tmp101 = *$tmp100;
frost$core$Int64* $tmp102 = &param0->index;
frost$core$Int64 $tmp103 = *$tmp102;
frost$core$Int64 $tmp104 = (frost$core$Int64) {1u};
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104.value;
int64_t $tmp107 = $tmp105 + $tmp106;
frost$core$Int64 $tmp108 = (frost$core$Int64) {$tmp107};
int64_t $tmp109 = $tmp108.value;
frost$core$Char8 $tmp110 = $tmp101[$tmp109];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:178:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp111 = $tmp110.value;
int32_t $tmp112 = ((int32_t) $tmp111) & 255u;
frost$core$Int32 $tmp113 = (frost$core$Int32) {$tmp112};
frost$core$Int32 $tmp114 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:178:84
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp115 = $tmp113.value;
int32_t $tmp116 = $tmp114.value;
int32_t $tmp117 = $tmp115 & $tmp116;
frost$core$Int32 $tmp118 = (frost$core$Int32) {$tmp117};
int32_t $tmp119 = $tmp97.value;
int32_t $tmp120 = $tmp118.value;
int32_t $tmp121 = $tmp119 + $tmp120;
frost$core$Int32 $tmp122 = (frost$core$Int32) {$tmp121};
*(&local1) = $tmp122;
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:182
frost$core$Int32 $tmp123 = (frost$core$Int32) {0u};
*(&local1) = $tmp123;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:184
frost$core$Int64* $tmp124 = &param0->index;
frost$core$Int64 $tmp125 = *$tmp124;
frost$core$Int64 $tmp126 = (frost$core$Int64) {2u};
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127 + $tmp128;
frost$core$Int64 $tmp130 = (frost$core$Int64) {$tmp129};
frost$core$Int64* $tmp131 = &param0->index;
*$tmp131 = $tmp130;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:185
frost$core$Int32 $tmp132 = *(&local1);
frost$core$Char32 $tmp133 = frost$core$Char32$init$frost$core$Int32($tmp132);
return $tmp133;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:187
frost$core$Char8 $tmp134 = *(&local0);
uint8_t $tmp135 = $tmp134.value;
int64_t $tmp136 = ((int64_t) $tmp135) & 255u;
bool $tmp137 = $tmp136 < 224u;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:188
frost$core$Int64* $tmp140 = &param0->index;
frost$core$Int64 $tmp141 = *$tmp140;
frost$core$Int64 $tmp142 = (frost$core$Int64) {2u};
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142.value;
int64_t $tmp145 = $tmp143 + $tmp144;
frost$core$Int64 $tmp146 = (frost$core$Int64) {$tmp145};
frost$core$String** $tmp147 = &param0->str;
frost$core$String* $tmp148 = *$tmp147;
frost$core$Int64* $tmp149 = &$tmp148->_length;
frost$core$Int64 $tmp150 = *$tmp149;
int64_t $tmp151 = $tmp146.value;
int64_t $tmp152 = $tmp150.value;
bool $tmp153 = $tmp151 < $tmp152;
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153};
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:189
frost$core$Int32 $tmp156 = *(&local1);
frost$core$Int32 $tmp157 = (frost$core$Int32) {61440u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:189:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp158 = $tmp156.value;
int32_t $tmp159 = $tmp157.value;
int32_t $tmp160 = $tmp158 & $tmp159;
frost$core$Int32 $tmp161 = (frost$core$Int32) {$tmp160};
frost$core$String** $tmp162 = &param0->str;
frost$core$String* $tmp163 = *$tmp162;
frost$core$Char8** $tmp164 = &$tmp163->data;
frost$core$Char8* $tmp165 = *$tmp164;
frost$core$Int64* $tmp166 = &param0->index;
frost$core$Int64 $tmp167 = *$tmp166;
frost$core$Int64 $tmp168 = (frost$core$Int64) {1u};
int64_t $tmp169 = $tmp167.value;
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169 + $tmp170;
frost$core$Int64 $tmp172 = (frost$core$Int64) {$tmp171};
int64_t $tmp173 = $tmp172.value;
frost$core$Char8 $tmp174 = $tmp165[$tmp173];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:189:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp175 = $tmp174.value;
int32_t $tmp176 = ((int32_t) $tmp175) & 255u;
frost$core$Int32 $tmp177 = (frost$core$Int32) {$tmp176};
frost$core$Int32 $tmp178 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:189:84
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp179 = $tmp177.value;
int32_t $tmp180 = $tmp178.value;
int32_t $tmp181 = $tmp179 & $tmp180;
frost$core$Int32 $tmp182 = (frost$core$Int32) {$tmp181};
int32_t $tmp183 = $tmp161.value;
int32_t $tmp184 = $tmp182.value;
int32_t $tmp185 = $tmp183 + $tmp184;
frost$core$Int32 $tmp186 = (frost$core$Int32) {$tmp185};
frost$core$String** $tmp187 = &param0->str;
frost$core$String* $tmp188 = *$tmp187;
frost$core$Char8** $tmp189 = &$tmp188->data;
frost$core$Char8* $tmp190 = *$tmp189;
frost$core$Int64* $tmp191 = &param0->index;
frost$core$Int64 $tmp192 = *$tmp191;
frost$core$Int64 $tmp193 = (frost$core$Int64) {2u};
int64_t $tmp194 = $tmp192.value;
int64_t $tmp195 = $tmp193.value;
int64_t $tmp196 = $tmp194 + $tmp195;
frost$core$Int64 $tmp197 = (frost$core$Int64) {$tmp196};
int64_t $tmp198 = $tmp197.value;
frost$core$Char8 $tmp199 = $tmp190[$tmp198];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:190:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp200 = $tmp199.value;
int32_t $tmp201 = ((int32_t) $tmp200) & 255u;
frost$core$Int32 $tmp202 = (frost$core$Int32) {$tmp201};
frost$core$Int32 $tmp203 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:190:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp204 = $tmp202.value;
int32_t $tmp205 = $tmp203.value;
int32_t $tmp206 = $tmp204 & $tmp205;
frost$core$Int32 $tmp207 = (frost$core$Int32) {$tmp206};
int32_t $tmp208 = $tmp186.value;
int32_t $tmp209 = $tmp207.value;
int32_t $tmp210 = $tmp208 + $tmp209;
frost$core$Int32 $tmp211 = (frost$core$Int32) {$tmp210};
*(&local1) = $tmp211;
goto block20;
block21:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:193
frost$core$Int32 $tmp212 = (frost$core$Int32) {0u};
*(&local1) = $tmp212;
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:195
frost$core$Int64* $tmp213 = &param0->index;
frost$core$Int64 $tmp214 = *$tmp213;
frost$core$Int64 $tmp215 = (frost$core$Int64) {3u};
int64_t $tmp216 = $tmp214.value;
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216 + $tmp217;
frost$core$Int64 $tmp219 = (frost$core$Int64) {$tmp218};
frost$core$Int64* $tmp220 = &param0->index;
*$tmp220 = $tmp219;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:196
frost$core$Int32 $tmp221 = *(&local1);
frost$core$Char32 $tmp222 = frost$core$Char32$init$frost$core$Int32($tmp221);
return $tmp222;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:198
frost$core$Int64* $tmp223 = &param0->index;
frost$core$Int64 $tmp224 = *$tmp223;
frost$core$Int64 $tmp225 = (frost$core$Int64) {3u};
int64_t $tmp226 = $tmp224.value;
int64_t $tmp227 = $tmp225.value;
int64_t $tmp228 = $tmp226 + $tmp227;
frost$core$Int64 $tmp229 = (frost$core$Int64) {$tmp228};
frost$core$String** $tmp230 = &param0->str;
frost$core$String* $tmp231 = *$tmp230;
frost$core$Int64* $tmp232 = &$tmp231->_length;
frost$core$Int64 $tmp233 = *$tmp232;
int64_t $tmp234 = $tmp229.value;
int64_t $tmp235 = $tmp233.value;
bool $tmp236 = $tmp234 < $tmp235;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block27; else goto block29;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:199
frost$core$Int32 $tmp239 = *(&local1);
frost$core$Int32 $tmp240 = (frost$core$Int32) {1835008u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:199:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp241 = $tmp239.value;
int32_t $tmp242 = $tmp240.value;
int32_t $tmp243 = $tmp241 & $tmp242;
frost$core$Int32 $tmp244 = (frost$core$Int32) {$tmp243};
frost$core$String** $tmp245 = &param0->str;
frost$core$String* $tmp246 = *$tmp245;
frost$core$Char8** $tmp247 = &$tmp246->data;
frost$core$Char8* $tmp248 = *$tmp247;
frost$core$Int64* $tmp249 = &param0->index;
frost$core$Int64 $tmp250 = *$tmp249;
frost$core$Int64 $tmp251 = (frost$core$Int64) {1u};
int64_t $tmp252 = $tmp250.value;
int64_t $tmp253 = $tmp251.value;
int64_t $tmp254 = $tmp252 + $tmp253;
frost$core$Int64 $tmp255 = (frost$core$Int64) {$tmp254};
int64_t $tmp256 = $tmp255.value;
frost$core$Char8 $tmp257 = $tmp248[$tmp256];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:199:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp258 = $tmp257.value;
int32_t $tmp259 = ((int32_t) $tmp258) & 255u;
frost$core$Int32 $tmp260 = (frost$core$Int32) {$tmp259};
frost$core$Int32 $tmp261 = (frost$core$Int32) {258048u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:199:79
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp262 = $tmp260.value;
int32_t $tmp263 = $tmp261.value;
int32_t $tmp264 = $tmp262 & $tmp263;
frost$core$Int32 $tmp265 = (frost$core$Int32) {$tmp264};
int32_t $tmp266 = $tmp244.value;
int32_t $tmp267 = $tmp265.value;
int32_t $tmp268 = $tmp266 + $tmp267;
frost$core$Int32 $tmp269 = (frost$core$Int32) {$tmp268};
frost$core$String** $tmp270 = &param0->str;
frost$core$String* $tmp271 = *$tmp270;
frost$core$Char8** $tmp272 = &$tmp271->data;
frost$core$Char8* $tmp273 = *$tmp272;
frost$core$Int64* $tmp274 = &param0->index;
frost$core$Int64 $tmp275 = *$tmp274;
frost$core$Int64 $tmp276 = (frost$core$Int64) {2u};
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276.value;
int64_t $tmp279 = $tmp277 + $tmp278;
frost$core$Int64 $tmp280 = (frost$core$Int64) {$tmp279};
int64_t $tmp281 = $tmp280.value;
frost$core$Char8 $tmp282 = $tmp273[$tmp281];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:200:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp283 = $tmp282.value;
int32_t $tmp284 = ((int32_t) $tmp283) & 255u;
frost$core$Int32 $tmp285 = (frost$core$Int32) {$tmp284};
frost$core$Int32 $tmp286 = (frost$core$Int32) {4032u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:200:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp287 = $tmp285.value;
int32_t $tmp288 = $tmp286.value;
int32_t $tmp289 = $tmp287 & $tmp288;
frost$core$Int32 $tmp290 = (frost$core$Int32) {$tmp289};
int32_t $tmp291 = $tmp269.value;
int32_t $tmp292 = $tmp290.value;
int32_t $tmp293 = $tmp291 + $tmp292;
frost$core$Int32 $tmp294 = (frost$core$Int32) {$tmp293};
frost$core$String** $tmp295 = &param0->str;
frost$core$String* $tmp296 = *$tmp295;
frost$core$Char8** $tmp297 = &$tmp296->data;
frost$core$Char8* $tmp298 = *$tmp297;
frost$core$Int64* $tmp299 = &param0->index;
frost$core$Int64 $tmp300 = *$tmp299;
frost$core$Int64 $tmp301 = (frost$core$Int64) {3u};
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302 + $tmp303;
frost$core$Int64 $tmp305 = (frost$core$Int64) {$tmp304};
int64_t $tmp306 = $tmp305.value;
frost$core$Char8 $tmp307 = $tmp298[$tmp306];
// begin inline call to function frost.core.Char8.get_asInt32():frost.core.Int32 from String.frost:201:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:111
uint8_t $tmp308 = $tmp307.value;
int32_t $tmp309 = ((int32_t) $tmp308) & 255u;
frost$core$Int32 $tmp310 = (frost$core$Int32) {$tmp309};
frost$core$Int32 $tmp311 = (frost$core$Int32) {63u};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int32):frost.core.Int32 from String.frost:201:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:220
int32_t $tmp312 = $tmp310.value;
int32_t $tmp313 = $tmp311.value;
int32_t $tmp314 = $tmp312 & $tmp313;
frost$core$Int32 $tmp315 = (frost$core$Int32) {$tmp314};
int32_t $tmp316 = $tmp294.value;
int32_t $tmp317 = $tmp315.value;
int32_t $tmp318 = $tmp316 + $tmp317;
frost$core$Int32 $tmp319 = (frost$core$Int32) {$tmp318};
*(&local1) = $tmp319;
goto block28;
block29:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:204
frost$core$Int32 $tmp320 = (frost$core$Int32) {0u};
*(&local1) = $tmp320;
goto block28;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:206
frost$core$Int64* $tmp321 = &param0->index;
frost$core$Int64 $tmp322 = *$tmp321;
frost$core$Int64 $tmp323 = (frost$core$Int64) {4u};
int64_t $tmp324 = $tmp322.value;
int64_t $tmp325 = $tmp323.value;
int64_t $tmp326 = $tmp324 + $tmp325;
frost$core$Int64 $tmp327 = (frost$core$Int64) {$tmp326};
frost$core$Int64* $tmp328 = &param0->index;
*$tmp328 = $tmp327;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:207
frost$core$Int32 $tmp329 = *(&local1);
frost$core$Char32 $tmp330 = frost$core$Char32$init$frost$core$Int32($tmp329);
return $tmp330;

}
void frost$core$String$UTF32Iterator$cleanup(frost$core$String$UTF32Iterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:153
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp331 = &param0->str;
frost$core$String* $tmp332 = *$tmp331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
return;

}

