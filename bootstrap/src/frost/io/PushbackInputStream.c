#include "frost/io/PushbackInputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Int8.h"
#include "frost/collections/ListView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Char8.h"


static frost$core$String $s1;
frost$io$PushbackInputStream$class_type frost$io$PushbackInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$PushbackInputStream$cleanup, frost$io$PushbackInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int64$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q, frost$io$PushbackInputStream$pushback$frost$core$UInt8, frost$io$PushbackInputStream$pushback$frost$core$Int8, frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$UInt8$GT, frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Int8$GT, frost$io$PushbackInputStream$pushback$frost$core$Char8, frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Char8$GT, frost$io$PushbackInputStream$pushback$frost$core$String} };

typedef frost$core$Int64 (*$fn13)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn27)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn41)(frost$collections$CollectionView*);
typedef frost$core$UInt8$nullable (*$fn53)(frost$io$InputStream*);
typedef frost$core$Int64 (*$fn64)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn112)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn151)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn199)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn239)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn287)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x50\x75\x73\x68\x62\x61\x63\x6b\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 28, -1765293573228874696, NULL };

void frost$io$PushbackInputStream$init$frost$io$InputStream(frost$io$PushbackInputStream* param0, frost$io$InputStream* param1) {

// line 21
frost$collections$Array* $tmp2 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$Array** $tmp3 = &param0->pushbackBuffer;
frost$collections$Array* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array** $tmp5 = &param0->pushbackBuffer;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:frost.collections.Array<frost.core.UInt8>)
// line 29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$InputStream** $tmp6 = &param0->source;
frost$io$InputStream* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$io$InputStream** $tmp8 = &param0->source;
*$tmp8 = param1;
// line 30
frost$io$InputStream$init(((frost$io$InputStream*) param0));
return;

}
frost$core$UInt8$nullable frost$io$PushbackInputStream$read$R$frost$core$UInt8$Q(frost$io$PushbackInputStream* param0) {

frost$core$UInt8 local0;
// line 35
frost$collections$Array** $tmp9 = &param0->pushbackBuffer;
frost$collections$Array* $tmp10 = *$tmp9;
ITable* $tmp11 = ((frost$collections$CollectionView*) $tmp10)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$core$Int64 $tmp14 = $tmp12(((frost$collections$CollectionView*) $tmp10));
frost$core$Int64 $tmp15 = (frost$core$Int64) {0};
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 > $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block1:;
// line 36
frost$collections$Array** $tmp21 = &param0->pushbackBuffer;
frost$collections$Array* $tmp22 = *$tmp21;
frost$collections$Array** $tmp23 = &param0->pushbackBuffer;
frost$collections$Array* $tmp24 = *$tmp23;
ITable* $tmp25 = ((frost$collections$CollectionView*) $tmp24)->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
frost$core$Int64 $tmp28 = $tmp26(((frost$collections$CollectionView*) $tmp24));
frost$core$Int64 $tmp29 = (frost$core$Int64) {1};
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30 - $tmp31;
frost$core$Int64 $tmp33 = (frost$core$Int64) {$tmp32};
frost$core$Object* $tmp34 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp22, $tmp33);
*(&local0) = ((frost$core$UInt8$wrapper*) $tmp34)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp34);
// unreffing REF($27:frost.collections.Array.T)
// line 37
frost$collections$Array** $tmp35 = &param0->pushbackBuffer;
frost$collections$Array* $tmp36 = *$tmp35;
frost$collections$Array** $tmp37 = &param0->pushbackBuffer;
frost$collections$Array* $tmp38 = *$tmp37;
ITable* $tmp39 = ((frost$collections$CollectionView*) $tmp38)->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[0];
frost$core$Int64 $tmp42 = $tmp40(((frost$collections$CollectionView*) $tmp38));
frost$core$Int64 $tmp43 = (frost$core$Int64) {1};
int64_t $tmp44 = $tmp42.value;
int64_t $tmp45 = $tmp43.value;
int64_t $tmp46 = $tmp44 - $tmp45;
frost$core$Int64 $tmp47 = (frost$core$Int64) {$tmp46};
frost$core$Object* $tmp48 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp36, $tmp47);
frost$core$Frost$unref$frost$core$Object$Q($tmp48);
// unreffing REF($47:frost.collections.Array.T)
// line 38
frost$core$UInt8 $tmp49 = *(&local0);
return ((frost$core$UInt8$nullable) { $tmp49, true });
block2:;
// line 40
frost$io$InputStream** $tmp50 = &param0->source;
frost$io$InputStream* $tmp51 = *$tmp50;
$fn53 $tmp52 = ($fn53) $tmp51->$class->vtable[2];
frost$core$UInt8$nullable $tmp54 = $tmp52($tmp51);
return $tmp54;

}
void frost$io$PushbackInputStream$pushback$frost$core$UInt8(frost$io$PushbackInputStream* param0, frost$core$UInt8 param1) {

// line 50
frost$collections$Array** $tmp55 = &param0->pushbackBuffer;
frost$collections$Array* $tmp56 = *$tmp55;
frost$core$UInt8$wrapper* $tmp57;
$tmp57 = (frost$core$UInt8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp57->value = param1;
frost$collections$Array$add$frost$collections$Array$T($tmp56, ((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing REF($4:frost.collections.Array.T)
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$Int8(frost$io$PushbackInputStream* param0, frost$core$Int8 param1) {

// line 60
frost$collections$Array** $tmp58 = &param0->pushbackBuffer;
frost$collections$Array* $tmp59 = *$tmp58;
frost$core$UInt8 $tmp60 = frost$core$Int8$convert$R$frost$core$UInt8(param1);
frost$core$UInt8$wrapper* $tmp61;
$tmp61 = (frost$core$UInt8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp61->value = $tmp60;
frost$collections$Array$add$frost$collections$Array$T($tmp59, ((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing REF($5:frost.collections.Array.T)
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$UInt8$GT(frost$io$PushbackInputStream* param0, frost$collections$ListView* param1) {

frost$core$Int64 local0;
// line 69
ITable* $tmp62 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[0];
frost$core$Int64 $tmp65 = $tmp63(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp66 = (frost$core$Int64) {1};
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67 - $tmp68;
frost$core$Int64 $tmp70 = (frost$core$Int64) {$tmp69};
frost$core$Int64 $tmp71 = (frost$core$Int64) {0};
frost$core$Int64 $tmp72 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp73 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp74 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp70, $tmp71, $tmp72, $tmp73);
frost$core$Int64 $tmp75 = $tmp74.start;
*(&local0) = $tmp75;
frost$core$Int64 $tmp76 = $tmp74.end;
frost$core$Int64 $tmp77 = $tmp74.step;
frost$core$UInt64 $tmp78 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp77);
frost$core$Int64 $tmp79 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp77);
frost$core$UInt64 $tmp80 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp79);
frost$core$Bit $tmp81 = $tmp74.inclusive;
bool $tmp82 = $tmp81.value;
frost$core$Int64 $tmp83 = (frost$core$Int64) {0};
int64_t $tmp84 = $tmp77.value;
int64_t $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 >= $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block4; else goto block5;
block4:;
if ($tmp82) goto block6; else goto block7;
block6:;
int64_t $tmp89 = $tmp75.value;
int64_t $tmp90 = $tmp76.value;
bool $tmp91 = $tmp89 <= $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block1; else goto block2;
block7:;
int64_t $tmp94 = $tmp75.value;
int64_t $tmp95 = $tmp76.value;
bool $tmp96 = $tmp94 < $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block1; else goto block2;
block5:;
if ($tmp82) goto block8; else goto block9;
block8:;
int64_t $tmp99 = $tmp75.value;
int64_t $tmp100 = $tmp76.value;
bool $tmp101 = $tmp99 >= $tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block1; else goto block2;
block9:;
int64_t $tmp104 = $tmp75.value;
int64_t $tmp105 = $tmp76.value;
bool $tmp106 = $tmp104 > $tmp105;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block2;
block1:;
// line 70
frost$core$Int64 $tmp109 = *(&local0);
ITable* $tmp110 = param1->$class->itable;
while ($tmp110->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp110 = $tmp110->next;
}
$fn112 $tmp111 = $tmp110->methods[0];
frost$core$Object* $tmp113 = $tmp111(param1, $tmp109);
frost$io$PushbackInputStream$pushback$frost$core$UInt8(param0, ((frost$core$UInt8$wrapper*) $tmp113)->value);
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
// unreffing REF($59:frost.collections.ListView.T)
goto block3;
block3:;
frost$core$Int64 $tmp114 = *(&local0);
if ($tmp88) goto block11; else goto block12;
block11:;
int64_t $tmp115 = $tmp76.value;
int64_t $tmp116 = $tmp114.value;
int64_t $tmp117 = $tmp115 - $tmp116;
frost$core$Int64 $tmp118 = (frost$core$Int64) {$tmp117};
frost$core$UInt64 $tmp119 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp118);
if ($tmp82) goto block13; else goto block14;
block13:;
uint64_t $tmp120 = $tmp119.value;
uint64_t $tmp121 = $tmp78.value;
bool $tmp122 = $tmp120 >= $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block10; else goto block2;
block14:;
uint64_t $tmp125 = $tmp119.value;
uint64_t $tmp126 = $tmp78.value;
bool $tmp127 = $tmp125 > $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block10; else goto block2;
block12:;
int64_t $tmp130 = $tmp114.value;
int64_t $tmp131 = $tmp76.value;
int64_t $tmp132 = $tmp130 - $tmp131;
frost$core$Int64 $tmp133 = (frost$core$Int64) {$tmp132};
frost$core$UInt64 $tmp134 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp133);
if ($tmp82) goto block15; else goto block16;
block15:;
uint64_t $tmp135 = $tmp134.value;
uint64_t $tmp136 = $tmp80.value;
bool $tmp137 = $tmp135 >= $tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block10; else goto block2;
block16:;
uint64_t $tmp140 = $tmp134.value;
uint64_t $tmp141 = $tmp80.value;
bool $tmp142 = $tmp140 > $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block10; else goto block2;
block10:;
int64_t $tmp145 = $tmp114.value;
int64_t $tmp146 = $tmp77.value;
int64_t $tmp147 = $tmp145 + $tmp146;
frost$core$Int64 $tmp148 = (frost$core$Int64) {$tmp147};
*(&local0) = $tmp148;
goto block1;
block2:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Int8$GT(frost$io$PushbackInputStream* param0, frost$collections$ListView* param1) {

frost$core$Int64 local0;
// line 80
ITable* $tmp149 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp149->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp149 = $tmp149->next;
}
$fn151 $tmp150 = $tmp149->methods[0];
frost$core$Int64 $tmp152 = $tmp150(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp153 = (frost$core$Int64) {1};
int64_t $tmp154 = $tmp152.value;
int64_t $tmp155 = $tmp153.value;
int64_t $tmp156 = $tmp154 - $tmp155;
frost$core$Int64 $tmp157 = (frost$core$Int64) {$tmp156};
frost$core$Int64 $tmp158 = (frost$core$Int64) {0};
frost$core$Int64 $tmp159 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp161 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp157, $tmp158, $tmp159, $tmp160);
frost$core$Int64 $tmp162 = $tmp161.start;
*(&local0) = $tmp162;
frost$core$Int64 $tmp163 = $tmp161.end;
frost$core$Int64 $tmp164 = $tmp161.step;
frost$core$UInt64 $tmp165 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp164);
frost$core$Int64 $tmp166 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp164);
frost$core$UInt64 $tmp167 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp166);
frost$core$Bit $tmp168 = $tmp161.inclusive;
bool $tmp169 = $tmp168.value;
frost$core$Int64 $tmp170 = (frost$core$Int64) {0};
int64_t $tmp171 = $tmp164.value;
int64_t $tmp172 = $tmp170.value;
bool $tmp173 = $tmp171 >= $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block4; else goto block5;
block4:;
if ($tmp169) goto block6; else goto block7;
block6:;
int64_t $tmp176 = $tmp162.value;
int64_t $tmp177 = $tmp163.value;
bool $tmp178 = $tmp176 <= $tmp177;
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block1; else goto block2;
block7:;
int64_t $tmp181 = $tmp162.value;
int64_t $tmp182 = $tmp163.value;
bool $tmp183 = $tmp181 < $tmp182;
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183};
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block1; else goto block2;
block5:;
if ($tmp169) goto block8; else goto block9;
block8:;
int64_t $tmp186 = $tmp162.value;
int64_t $tmp187 = $tmp163.value;
bool $tmp188 = $tmp186 >= $tmp187;
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block1; else goto block2;
block9:;
int64_t $tmp191 = $tmp162.value;
int64_t $tmp192 = $tmp163.value;
bool $tmp193 = $tmp191 > $tmp192;
frost$core$Bit $tmp194 = (frost$core$Bit) {$tmp193};
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block1; else goto block2;
block1:;
// line 81
frost$core$Int64 $tmp196 = *(&local0);
ITable* $tmp197 = param1->$class->itable;
while ($tmp197->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp197 = $tmp197->next;
}
$fn199 $tmp198 = $tmp197->methods[0];
frost$core$Object* $tmp200 = $tmp198(param1, $tmp196);
frost$io$PushbackInputStream$pushback$frost$core$Int8(param0, ((frost$core$Int8$wrapper*) $tmp200)->value);
frost$core$Frost$unref$frost$core$Object$Q($tmp200);
// unreffing REF($59:frost.collections.ListView.T)
goto block3;
block3:;
frost$core$Int64 $tmp201 = *(&local0);
if ($tmp175) goto block11; else goto block12;
block11:;
int64_t $tmp202 = $tmp163.value;
int64_t $tmp203 = $tmp201.value;
int64_t $tmp204 = $tmp202 - $tmp203;
frost$core$Int64 $tmp205 = (frost$core$Int64) {$tmp204};
frost$core$UInt64 $tmp206 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp205);
if ($tmp169) goto block13; else goto block14;
block13:;
uint64_t $tmp207 = $tmp206.value;
uint64_t $tmp208 = $tmp165.value;
bool $tmp209 = $tmp207 >= $tmp208;
frost$core$Bit $tmp210 = (frost$core$Bit) {$tmp209};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block10; else goto block2;
block14:;
uint64_t $tmp212 = $tmp206.value;
uint64_t $tmp213 = $tmp165.value;
bool $tmp214 = $tmp212 > $tmp213;
frost$core$Bit $tmp215 = (frost$core$Bit) {$tmp214};
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block10; else goto block2;
block12:;
int64_t $tmp217 = $tmp201.value;
int64_t $tmp218 = $tmp163.value;
int64_t $tmp219 = $tmp217 - $tmp218;
frost$core$Int64 $tmp220 = (frost$core$Int64) {$tmp219};
frost$core$UInt64 $tmp221 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp220);
if ($tmp169) goto block15; else goto block16;
block15:;
uint64_t $tmp222 = $tmp221.value;
uint64_t $tmp223 = $tmp167.value;
bool $tmp224 = $tmp222 >= $tmp223;
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block10; else goto block2;
block16:;
uint64_t $tmp227 = $tmp221.value;
uint64_t $tmp228 = $tmp167.value;
bool $tmp229 = $tmp227 > $tmp228;
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block10; else goto block2;
block10:;
int64_t $tmp232 = $tmp201.value;
int64_t $tmp233 = $tmp164.value;
int64_t $tmp234 = $tmp232 + $tmp233;
frost$core$Int64 $tmp235 = (frost$core$Int64) {$tmp234};
*(&local0) = $tmp235;
goto block1;
block2:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$Char8(frost$io$PushbackInputStream* param0, frost$core$Char8 param1) {

// line 91
frost$core$UInt8 $tmp236 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8(param1);
frost$io$PushbackInputStream$pushback$frost$core$UInt8(param0, $tmp236);
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Char8$GT(frost$io$PushbackInputStream* param0, frost$collections$ListView* param1) {

frost$core$Int64 local0;
// line 100
ITable* $tmp237 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp237->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp237 = $tmp237->next;
}
$fn239 $tmp238 = $tmp237->methods[0];
frost$core$Int64 $tmp240 = $tmp238(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp241 = (frost$core$Int64) {1};
int64_t $tmp242 = $tmp240.value;
int64_t $tmp243 = $tmp241.value;
int64_t $tmp244 = $tmp242 - $tmp243;
frost$core$Int64 $tmp245 = (frost$core$Int64) {$tmp244};
frost$core$Int64 $tmp246 = (frost$core$Int64) {0};
frost$core$Int64 $tmp247 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp248 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp249 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp245, $tmp246, $tmp247, $tmp248);
frost$core$Int64 $tmp250 = $tmp249.start;
*(&local0) = $tmp250;
frost$core$Int64 $tmp251 = $tmp249.end;
frost$core$Int64 $tmp252 = $tmp249.step;
frost$core$UInt64 $tmp253 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp252);
frost$core$Int64 $tmp254 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp252);
frost$core$UInt64 $tmp255 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp254);
frost$core$Bit $tmp256 = $tmp249.inclusive;
bool $tmp257 = $tmp256.value;
frost$core$Int64 $tmp258 = (frost$core$Int64) {0};
int64_t $tmp259 = $tmp252.value;
int64_t $tmp260 = $tmp258.value;
bool $tmp261 = $tmp259 >= $tmp260;
frost$core$Bit $tmp262 = (frost$core$Bit) {$tmp261};
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block4; else goto block5;
block4:;
if ($tmp257) goto block6; else goto block7;
block6:;
int64_t $tmp264 = $tmp250.value;
int64_t $tmp265 = $tmp251.value;
bool $tmp266 = $tmp264 <= $tmp265;
frost$core$Bit $tmp267 = (frost$core$Bit) {$tmp266};
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block1; else goto block2;
block7:;
int64_t $tmp269 = $tmp250.value;
int64_t $tmp270 = $tmp251.value;
bool $tmp271 = $tmp269 < $tmp270;
frost$core$Bit $tmp272 = (frost$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block1; else goto block2;
block5:;
if ($tmp257) goto block8; else goto block9;
block8:;
int64_t $tmp274 = $tmp250.value;
int64_t $tmp275 = $tmp251.value;
bool $tmp276 = $tmp274 >= $tmp275;
frost$core$Bit $tmp277 = (frost$core$Bit) {$tmp276};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block1; else goto block2;
block9:;
int64_t $tmp279 = $tmp250.value;
int64_t $tmp280 = $tmp251.value;
bool $tmp281 = $tmp279 > $tmp280;
frost$core$Bit $tmp282 = (frost$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block1; else goto block2;
block1:;
// line 101
frost$core$Int64 $tmp284 = *(&local0);
ITable* $tmp285 = param1->$class->itable;
while ($tmp285->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp285 = $tmp285->next;
}
$fn287 $tmp286 = $tmp285->methods[0];
frost$core$Object* $tmp288 = $tmp286(param1, $tmp284);
frost$io$PushbackInputStream$pushback$frost$core$Char8(param0, ((frost$core$Char8$wrapper*) $tmp288)->value);
frost$core$Frost$unref$frost$core$Object$Q($tmp288);
// unreffing REF($59:frost.collections.ListView.T)
goto block3;
block3:;
frost$core$Int64 $tmp289 = *(&local0);
if ($tmp263) goto block11; else goto block12;
block11:;
int64_t $tmp290 = $tmp251.value;
int64_t $tmp291 = $tmp289.value;
int64_t $tmp292 = $tmp290 - $tmp291;
frost$core$Int64 $tmp293 = (frost$core$Int64) {$tmp292};
frost$core$UInt64 $tmp294 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp293);
if ($tmp257) goto block13; else goto block14;
block13:;
uint64_t $tmp295 = $tmp294.value;
uint64_t $tmp296 = $tmp253.value;
bool $tmp297 = $tmp295 >= $tmp296;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block10; else goto block2;
block14:;
uint64_t $tmp300 = $tmp294.value;
uint64_t $tmp301 = $tmp253.value;
bool $tmp302 = $tmp300 > $tmp301;
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block10; else goto block2;
block12:;
int64_t $tmp305 = $tmp289.value;
int64_t $tmp306 = $tmp251.value;
int64_t $tmp307 = $tmp305 - $tmp306;
frost$core$Int64 $tmp308 = (frost$core$Int64) {$tmp307};
frost$core$UInt64 $tmp309 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp308);
if ($tmp257) goto block15; else goto block16;
block15:;
uint64_t $tmp310 = $tmp309.value;
uint64_t $tmp311 = $tmp255.value;
bool $tmp312 = $tmp310 >= $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block10; else goto block2;
block16:;
uint64_t $tmp315 = $tmp309.value;
uint64_t $tmp316 = $tmp255.value;
bool $tmp317 = $tmp315 > $tmp316;
frost$core$Bit $tmp318 = (frost$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block10; else goto block2;
block10:;
int64_t $tmp320 = $tmp289.value;
int64_t $tmp321 = $tmp252.value;
int64_t $tmp322 = $tmp320 + $tmp321;
frost$core$Int64 $tmp323 = (frost$core$Int64) {$tmp322};
*(&local0) = $tmp323;
goto block1;
block2:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$String(frost$io$PushbackInputStream* param0, frost$core$String* param1) {

// line 111
frost$collections$ListView* $tmp324 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param1);
frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Char8$GT(param0, $tmp324);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// unreffing REF($1:frost.collections.ListView<frost.core.Char8>)
return;

}
void frost$io$PushbackInputStream$cleanup(frost$io$PushbackInputStream* param0) {

// line 16
frost$io$InputStream$cleanup(((frost$io$InputStream*) param0));
frost$io$InputStream** $tmp325 = &param0->source;
frost$io$InputStream* $tmp326 = *$tmp325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$collections$Array** $tmp327 = &param0->pushbackBuffer;
frost$collections$Array* $tmp328 = *$tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
return;

}

