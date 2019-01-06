#include "panda/io/PushbackInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt8.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Int8.h"
#include "panda/collections/ListView.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char8.h"


static panda$core$String $s1;
panda$io$PushbackInputStream$class_type panda$io$PushbackInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$PushbackInputStream$cleanup, panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$R$panda$core$UInt16$Q, panda$io$InputStream$read$R$panda$core$UInt32$Q, panda$io$InputStream$read$R$panda$core$UInt64$Q, panda$io$InputStream$read$R$panda$core$Int8$Q, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$InputStream$close, panda$io$PushbackInputStream$pushback$panda$core$UInt8, panda$io$PushbackInputStream$pushback$panda$core$Int8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT, panda$io$PushbackInputStream$pushback$panda$core$Char8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT, panda$io$PushbackInputStream$pushback$panda$core$String} };

typedef panda$core$Int64 (*$fn13)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn27)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn41)(panda$collections$CollectionView*);
typedef panda$core$UInt8$nullable (*$fn53)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn64)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn112)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn151)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn199)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn239)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn287)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x50\x75\x73\x68\x62\x61\x63\x6b\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 28, -1415712807475310042, NULL };

void panda$io$PushbackInputStream$init$panda$io$InputStream(panda$io$PushbackInputStream* param0, panda$io$InputStream* param1) {

// line 14
panda$collections$Array* $tmp2 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$collections$Array** $tmp3 = &param0->pushbackBuffer;
panda$collections$Array* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$collections$Array** $tmp5 = &param0->pushbackBuffer;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.collections.Array<panda.core.UInt8>)
// line 22
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$InputStream** $tmp6 = &param0->source;
panda$io$InputStream* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$io$InputStream** $tmp8 = &param0->source;
*$tmp8 = param1;
// line 23
panda$io$InputStream$init(((panda$io$InputStream*) param0));
return;

}
panda$core$UInt8$nullable panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q(panda$io$PushbackInputStream* param0) {

panda$core$UInt8 local0;
// line 28
panda$collections$Array** $tmp9 = &param0->pushbackBuffer;
panda$collections$Array* $tmp10 = *$tmp9;
ITable* $tmp11 = ((panda$collections$CollectionView*) $tmp10)->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
panda$core$Int64 $tmp14 = $tmp12(((panda$collections$CollectionView*) $tmp10));
panda$core$Int64 $tmp15 = (panda$core$Int64) {0};
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 > $tmp17;
panda$core$Bit $tmp19 = (panda$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block1:;
// line 29
panda$collections$Array** $tmp21 = &param0->pushbackBuffer;
panda$collections$Array* $tmp22 = *$tmp21;
panda$collections$Array** $tmp23 = &param0->pushbackBuffer;
panda$collections$Array* $tmp24 = *$tmp23;
ITable* $tmp25 = ((panda$collections$CollectionView*) $tmp24)->$class->itable;
while ($tmp25->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
panda$core$Int64 $tmp28 = $tmp26(((panda$collections$CollectionView*) $tmp24));
panda$core$Int64 $tmp29 = (panda$core$Int64) {1};
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30 - $tmp31;
panda$core$Int64 $tmp33 = (panda$core$Int64) {$tmp32};
panda$core$Object* $tmp34 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp22, $tmp33);
*(&local0) = ((panda$core$UInt8$wrapper*) $tmp34)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp34);
// unreffing REF($27:panda.collections.Array.T)
// line 30
panda$collections$Array** $tmp35 = &param0->pushbackBuffer;
panda$collections$Array* $tmp36 = *$tmp35;
panda$collections$Array** $tmp37 = &param0->pushbackBuffer;
panda$collections$Array* $tmp38 = *$tmp37;
ITable* $tmp39 = ((panda$collections$CollectionView*) $tmp38)->$class->itable;
while ($tmp39->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[0];
panda$core$Int64 $tmp42 = $tmp40(((panda$collections$CollectionView*) $tmp38));
panda$core$Int64 $tmp43 = (panda$core$Int64) {1};
int64_t $tmp44 = $tmp42.value;
int64_t $tmp45 = $tmp43.value;
int64_t $tmp46 = $tmp44 - $tmp45;
panda$core$Int64 $tmp47 = (panda$core$Int64) {$tmp46};
panda$core$Object* $tmp48 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T($tmp36, $tmp47);
panda$core$Panda$unref$panda$core$Object$Q($tmp48);
// unreffing REF($47:panda.collections.Array.T)
// line 31
panda$core$UInt8 $tmp49 = *(&local0);
return ((panda$core$UInt8$nullable) { $tmp49, true });
block2:;
// line 33
panda$io$InputStream** $tmp50 = &param0->source;
panda$io$InputStream* $tmp51 = *$tmp50;
$fn53 $tmp52 = ($fn53) $tmp51->$class->vtable[2];
panda$core$UInt8$nullable $tmp54 = $tmp52($tmp51);
return $tmp54;

}
void panda$io$PushbackInputStream$pushback$panda$core$UInt8(panda$io$PushbackInputStream* param0, panda$core$UInt8 param1) {

// line 43
panda$collections$Array** $tmp55 = &param0->pushbackBuffer;
panda$collections$Array* $tmp56 = *$tmp55;
panda$core$UInt8$wrapper* $tmp57;
$tmp57 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
$tmp57->value = param1;
panda$collections$Array$add$panda$collections$Array$T($tmp56, ((panda$core$Object*) $tmp57));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
// unreffing REF($4:panda.collections.Array.T)
return;

}
void panda$io$PushbackInputStream$pushback$panda$core$Int8(panda$io$PushbackInputStream* param0, panda$core$Int8 param1) {

// line 53
panda$collections$Array** $tmp58 = &param0->pushbackBuffer;
panda$collections$Array* $tmp59 = *$tmp58;
panda$core$UInt8 $tmp60 = panda$core$Int8$convert$R$panda$core$UInt8(param1);
panda$core$UInt8$wrapper* $tmp61;
$tmp61 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
$tmp61->value = $tmp60;
panda$collections$Array$add$panda$collections$Array$T($tmp59, ((panda$core$Object*) $tmp61));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing REF($5:panda.collections.Array.T)
return;

}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$io$PushbackInputStream* param0, panda$collections$ListView* param1) {

panda$core$Int64 local0;
// line 62
ITable* $tmp62 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp62->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[0];
panda$core$Int64 $tmp65 = $tmp63(((panda$collections$CollectionView*) param1));
panda$core$Int64 $tmp66 = (panda$core$Int64) {1};
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67 - $tmp68;
panda$core$Int64 $tmp70 = (panda$core$Int64) {$tmp69};
panda$core$Int64 $tmp71 = (panda$core$Int64) {0};
panda$core$Int64 $tmp72 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp73 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp74 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp70, $tmp71, $tmp72, $tmp73);
panda$core$Int64 $tmp75 = $tmp74.start;
*(&local0) = $tmp75;
panda$core$Int64 $tmp76 = $tmp74.end;
panda$core$Int64 $tmp77 = $tmp74.step;
panda$core$UInt64 $tmp78 = panda$core$Int64$convert$R$panda$core$UInt64($tmp77);
panda$core$Int64 $tmp79 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp77);
panda$core$UInt64 $tmp80 = panda$core$Int64$convert$R$panda$core$UInt64($tmp79);
panda$core$Bit $tmp81 = $tmp74.inclusive;
bool $tmp82 = $tmp81.value;
panda$core$Int64 $tmp83 = (panda$core$Int64) {0};
int64_t $tmp84 = $tmp77.value;
int64_t $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 >= $tmp85;
panda$core$Bit $tmp87 = (panda$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block4; else goto block5;
block4:;
if ($tmp82) goto block6; else goto block7;
block6:;
int64_t $tmp89 = $tmp75.value;
int64_t $tmp90 = $tmp76.value;
bool $tmp91 = $tmp89 <= $tmp90;
panda$core$Bit $tmp92 = (panda$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block1; else goto block2;
block7:;
int64_t $tmp94 = $tmp75.value;
int64_t $tmp95 = $tmp76.value;
bool $tmp96 = $tmp94 < $tmp95;
panda$core$Bit $tmp97 = (panda$core$Bit) {$tmp96};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block1; else goto block2;
block5:;
if ($tmp82) goto block8; else goto block9;
block8:;
int64_t $tmp99 = $tmp75.value;
int64_t $tmp100 = $tmp76.value;
bool $tmp101 = $tmp99 >= $tmp100;
panda$core$Bit $tmp102 = (panda$core$Bit) {$tmp101};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block1; else goto block2;
block9:;
int64_t $tmp104 = $tmp75.value;
int64_t $tmp105 = $tmp76.value;
bool $tmp106 = $tmp104 > $tmp105;
panda$core$Bit $tmp107 = (panda$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block2;
block1:;
// line 63
panda$core$Int64 $tmp109 = *(&local0);
ITable* $tmp110 = param1->$class->itable;
while ($tmp110->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp110 = $tmp110->next;
}
$fn112 $tmp111 = $tmp110->methods[0];
panda$core$Object* $tmp113 = $tmp111(param1, $tmp109);
panda$io$PushbackInputStream$pushback$panda$core$UInt8(param0, ((panda$core$UInt8$wrapper*) $tmp113)->value);
panda$core$Panda$unref$panda$core$Object$Q($tmp113);
// unreffing REF($59:panda.collections.ListView.T)
goto block3;
block3:;
panda$core$Int64 $tmp114 = *(&local0);
if ($tmp88) goto block11; else goto block12;
block11:;
int64_t $tmp115 = $tmp76.value;
int64_t $tmp116 = $tmp114.value;
int64_t $tmp117 = $tmp115 - $tmp116;
panda$core$Int64 $tmp118 = (panda$core$Int64) {$tmp117};
panda$core$UInt64 $tmp119 = panda$core$Int64$convert$R$panda$core$UInt64($tmp118);
if ($tmp82) goto block13; else goto block14;
block13:;
uint64_t $tmp120 = $tmp119.value;
uint64_t $tmp121 = $tmp78.value;
bool $tmp122 = $tmp120 >= $tmp121;
panda$core$Bit $tmp123 = (panda$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block10; else goto block2;
block14:;
uint64_t $tmp125 = $tmp119.value;
uint64_t $tmp126 = $tmp78.value;
bool $tmp127 = $tmp125 > $tmp126;
panda$core$Bit $tmp128 = (panda$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block10; else goto block2;
block12:;
int64_t $tmp130 = $tmp114.value;
int64_t $tmp131 = $tmp76.value;
int64_t $tmp132 = $tmp130 - $tmp131;
panda$core$Int64 $tmp133 = (panda$core$Int64) {$tmp132};
panda$core$UInt64 $tmp134 = panda$core$Int64$convert$R$panda$core$UInt64($tmp133);
if ($tmp82) goto block15; else goto block16;
block15:;
uint64_t $tmp135 = $tmp134.value;
uint64_t $tmp136 = $tmp80.value;
bool $tmp137 = $tmp135 >= $tmp136;
panda$core$Bit $tmp138 = (panda$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block10; else goto block2;
block16:;
uint64_t $tmp140 = $tmp134.value;
uint64_t $tmp141 = $tmp80.value;
bool $tmp142 = $tmp140 > $tmp141;
panda$core$Bit $tmp143 = (panda$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block10; else goto block2;
block10:;
int64_t $tmp145 = $tmp114.value;
int64_t $tmp146 = $tmp77.value;
int64_t $tmp147 = $tmp145 + $tmp146;
panda$core$Int64 $tmp148 = (panda$core$Int64) {$tmp147};
*(&local0) = $tmp148;
goto block1;
block2:;
return;

}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT(panda$io$PushbackInputStream* param0, panda$collections$ListView* param1) {

panda$core$Int64 local0;
// line 73
ITable* $tmp149 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp149->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp149 = $tmp149->next;
}
$fn151 $tmp150 = $tmp149->methods[0];
panda$core$Int64 $tmp152 = $tmp150(((panda$collections$CollectionView*) param1));
panda$core$Int64 $tmp153 = (panda$core$Int64) {1};
int64_t $tmp154 = $tmp152.value;
int64_t $tmp155 = $tmp153.value;
int64_t $tmp156 = $tmp154 - $tmp155;
panda$core$Int64 $tmp157 = (panda$core$Int64) {$tmp156};
panda$core$Int64 $tmp158 = (panda$core$Int64) {0};
panda$core$Int64 $tmp159 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp160 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp161 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp157, $tmp158, $tmp159, $tmp160);
panda$core$Int64 $tmp162 = $tmp161.start;
*(&local0) = $tmp162;
panda$core$Int64 $tmp163 = $tmp161.end;
panda$core$Int64 $tmp164 = $tmp161.step;
panda$core$UInt64 $tmp165 = panda$core$Int64$convert$R$panda$core$UInt64($tmp164);
panda$core$Int64 $tmp166 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp164);
panda$core$UInt64 $tmp167 = panda$core$Int64$convert$R$panda$core$UInt64($tmp166);
panda$core$Bit $tmp168 = $tmp161.inclusive;
bool $tmp169 = $tmp168.value;
panda$core$Int64 $tmp170 = (panda$core$Int64) {0};
int64_t $tmp171 = $tmp164.value;
int64_t $tmp172 = $tmp170.value;
bool $tmp173 = $tmp171 >= $tmp172;
panda$core$Bit $tmp174 = (panda$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block4; else goto block5;
block4:;
if ($tmp169) goto block6; else goto block7;
block6:;
int64_t $tmp176 = $tmp162.value;
int64_t $tmp177 = $tmp163.value;
bool $tmp178 = $tmp176 <= $tmp177;
panda$core$Bit $tmp179 = (panda$core$Bit) {$tmp178};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block1; else goto block2;
block7:;
int64_t $tmp181 = $tmp162.value;
int64_t $tmp182 = $tmp163.value;
bool $tmp183 = $tmp181 < $tmp182;
panda$core$Bit $tmp184 = (panda$core$Bit) {$tmp183};
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block1; else goto block2;
block5:;
if ($tmp169) goto block8; else goto block9;
block8:;
int64_t $tmp186 = $tmp162.value;
int64_t $tmp187 = $tmp163.value;
bool $tmp188 = $tmp186 >= $tmp187;
panda$core$Bit $tmp189 = (panda$core$Bit) {$tmp188};
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block1; else goto block2;
block9:;
int64_t $tmp191 = $tmp162.value;
int64_t $tmp192 = $tmp163.value;
bool $tmp193 = $tmp191 > $tmp192;
panda$core$Bit $tmp194 = (panda$core$Bit) {$tmp193};
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block1; else goto block2;
block1:;
// line 74
panda$core$Int64 $tmp196 = *(&local0);
ITable* $tmp197 = param1->$class->itable;
while ($tmp197->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp197 = $tmp197->next;
}
$fn199 $tmp198 = $tmp197->methods[0];
panda$core$Object* $tmp200 = $tmp198(param1, $tmp196);
panda$io$PushbackInputStream$pushback$panda$core$Int8(param0, ((panda$core$Int8$wrapper*) $tmp200)->value);
panda$core$Panda$unref$panda$core$Object$Q($tmp200);
// unreffing REF($59:panda.collections.ListView.T)
goto block3;
block3:;
panda$core$Int64 $tmp201 = *(&local0);
if ($tmp175) goto block11; else goto block12;
block11:;
int64_t $tmp202 = $tmp163.value;
int64_t $tmp203 = $tmp201.value;
int64_t $tmp204 = $tmp202 - $tmp203;
panda$core$Int64 $tmp205 = (panda$core$Int64) {$tmp204};
panda$core$UInt64 $tmp206 = panda$core$Int64$convert$R$panda$core$UInt64($tmp205);
if ($tmp169) goto block13; else goto block14;
block13:;
uint64_t $tmp207 = $tmp206.value;
uint64_t $tmp208 = $tmp165.value;
bool $tmp209 = $tmp207 >= $tmp208;
panda$core$Bit $tmp210 = (panda$core$Bit) {$tmp209};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block10; else goto block2;
block14:;
uint64_t $tmp212 = $tmp206.value;
uint64_t $tmp213 = $tmp165.value;
bool $tmp214 = $tmp212 > $tmp213;
panda$core$Bit $tmp215 = (panda$core$Bit) {$tmp214};
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block10; else goto block2;
block12:;
int64_t $tmp217 = $tmp201.value;
int64_t $tmp218 = $tmp163.value;
int64_t $tmp219 = $tmp217 - $tmp218;
panda$core$Int64 $tmp220 = (panda$core$Int64) {$tmp219};
panda$core$UInt64 $tmp221 = panda$core$Int64$convert$R$panda$core$UInt64($tmp220);
if ($tmp169) goto block15; else goto block16;
block15:;
uint64_t $tmp222 = $tmp221.value;
uint64_t $tmp223 = $tmp167.value;
bool $tmp224 = $tmp222 >= $tmp223;
panda$core$Bit $tmp225 = (panda$core$Bit) {$tmp224};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block10; else goto block2;
block16:;
uint64_t $tmp227 = $tmp221.value;
uint64_t $tmp228 = $tmp167.value;
bool $tmp229 = $tmp227 > $tmp228;
panda$core$Bit $tmp230 = (panda$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block10; else goto block2;
block10:;
int64_t $tmp232 = $tmp201.value;
int64_t $tmp233 = $tmp164.value;
int64_t $tmp234 = $tmp232 + $tmp233;
panda$core$Int64 $tmp235 = (panda$core$Int64) {$tmp234};
*(&local0) = $tmp235;
goto block1;
block2:;
return;

}
void panda$io$PushbackInputStream$pushback$panda$core$Char8(panda$io$PushbackInputStream* param0, panda$core$Char8 param1) {

// line 84
panda$core$UInt8 $tmp236 = panda$core$Char8$convert$R$panda$core$UInt8(param1);
panda$io$PushbackInputStream$pushback$panda$core$UInt8(param0, $tmp236);
return;

}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(panda$io$PushbackInputStream* param0, panda$collections$ListView* param1) {

panda$core$Int64 local0;
// line 93
ITable* $tmp237 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp237->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp237 = $tmp237->next;
}
$fn239 $tmp238 = $tmp237->methods[0];
panda$core$Int64 $tmp240 = $tmp238(((panda$collections$CollectionView*) param1));
panda$core$Int64 $tmp241 = (panda$core$Int64) {1};
int64_t $tmp242 = $tmp240.value;
int64_t $tmp243 = $tmp241.value;
int64_t $tmp244 = $tmp242 - $tmp243;
panda$core$Int64 $tmp245 = (panda$core$Int64) {$tmp244};
panda$core$Int64 $tmp246 = (panda$core$Int64) {0};
panda$core$Int64 $tmp247 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp248 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp249 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp245, $tmp246, $tmp247, $tmp248);
panda$core$Int64 $tmp250 = $tmp249.start;
*(&local0) = $tmp250;
panda$core$Int64 $tmp251 = $tmp249.end;
panda$core$Int64 $tmp252 = $tmp249.step;
panda$core$UInt64 $tmp253 = panda$core$Int64$convert$R$panda$core$UInt64($tmp252);
panda$core$Int64 $tmp254 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp252);
panda$core$UInt64 $tmp255 = panda$core$Int64$convert$R$panda$core$UInt64($tmp254);
panda$core$Bit $tmp256 = $tmp249.inclusive;
bool $tmp257 = $tmp256.value;
panda$core$Int64 $tmp258 = (panda$core$Int64) {0};
int64_t $tmp259 = $tmp252.value;
int64_t $tmp260 = $tmp258.value;
bool $tmp261 = $tmp259 >= $tmp260;
panda$core$Bit $tmp262 = (panda$core$Bit) {$tmp261};
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block4; else goto block5;
block4:;
if ($tmp257) goto block6; else goto block7;
block6:;
int64_t $tmp264 = $tmp250.value;
int64_t $tmp265 = $tmp251.value;
bool $tmp266 = $tmp264 <= $tmp265;
panda$core$Bit $tmp267 = (panda$core$Bit) {$tmp266};
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block1; else goto block2;
block7:;
int64_t $tmp269 = $tmp250.value;
int64_t $tmp270 = $tmp251.value;
bool $tmp271 = $tmp269 < $tmp270;
panda$core$Bit $tmp272 = (panda$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block1; else goto block2;
block5:;
if ($tmp257) goto block8; else goto block9;
block8:;
int64_t $tmp274 = $tmp250.value;
int64_t $tmp275 = $tmp251.value;
bool $tmp276 = $tmp274 >= $tmp275;
panda$core$Bit $tmp277 = (panda$core$Bit) {$tmp276};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block1; else goto block2;
block9:;
int64_t $tmp279 = $tmp250.value;
int64_t $tmp280 = $tmp251.value;
bool $tmp281 = $tmp279 > $tmp280;
panda$core$Bit $tmp282 = (panda$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block1; else goto block2;
block1:;
// line 94
panda$core$Int64 $tmp284 = *(&local0);
ITable* $tmp285 = param1->$class->itable;
while ($tmp285->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp285 = $tmp285->next;
}
$fn287 $tmp286 = $tmp285->methods[0];
panda$core$Object* $tmp288 = $tmp286(param1, $tmp284);
panda$io$PushbackInputStream$pushback$panda$core$Char8(param0, ((panda$core$Char8$wrapper*) $tmp288)->value);
panda$core$Panda$unref$panda$core$Object$Q($tmp288);
// unreffing REF($59:panda.collections.ListView.T)
goto block3;
block3:;
panda$core$Int64 $tmp289 = *(&local0);
if ($tmp263) goto block11; else goto block12;
block11:;
int64_t $tmp290 = $tmp251.value;
int64_t $tmp291 = $tmp289.value;
int64_t $tmp292 = $tmp290 - $tmp291;
panda$core$Int64 $tmp293 = (panda$core$Int64) {$tmp292};
panda$core$UInt64 $tmp294 = panda$core$Int64$convert$R$panda$core$UInt64($tmp293);
if ($tmp257) goto block13; else goto block14;
block13:;
uint64_t $tmp295 = $tmp294.value;
uint64_t $tmp296 = $tmp253.value;
bool $tmp297 = $tmp295 >= $tmp296;
panda$core$Bit $tmp298 = (panda$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block10; else goto block2;
block14:;
uint64_t $tmp300 = $tmp294.value;
uint64_t $tmp301 = $tmp253.value;
bool $tmp302 = $tmp300 > $tmp301;
panda$core$Bit $tmp303 = (panda$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block10; else goto block2;
block12:;
int64_t $tmp305 = $tmp289.value;
int64_t $tmp306 = $tmp251.value;
int64_t $tmp307 = $tmp305 - $tmp306;
panda$core$Int64 $tmp308 = (panda$core$Int64) {$tmp307};
panda$core$UInt64 $tmp309 = panda$core$Int64$convert$R$panda$core$UInt64($tmp308);
if ($tmp257) goto block15; else goto block16;
block15:;
uint64_t $tmp310 = $tmp309.value;
uint64_t $tmp311 = $tmp255.value;
bool $tmp312 = $tmp310 >= $tmp311;
panda$core$Bit $tmp313 = (panda$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block10; else goto block2;
block16:;
uint64_t $tmp315 = $tmp309.value;
uint64_t $tmp316 = $tmp255.value;
bool $tmp317 = $tmp315 > $tmp316;
panda$core$Bit $tmp318 = (panda$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block10; else goto block2;
block10:;
int64_t $tmp320 = $tmp289.value;
int64_t $tmp321 = $tmp252.value;
int64_t $tmp322 = $tmp320 + $tmp321;
panda$core$Int64 $tmp323 = (panda$core$Int64) {$tmp322};
*(&local0) = $tmp323;
goto block1;
block2:;
return;

}
void panda$io$PushbackInputStream$pushback$panda$core$String(panda$io$PushbackInputStream* param0, panda$core$String* param1) {

// line 104
panda$collections$ListView* $tmp324 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(param1);
panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(param0, $tmp324);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
// unreffing REF($1:panda.collections.ListView<panda.core.Char8>)
return;

}
void panda$io$PushbackInputStream$cleanup(panda$io$PushbackInputStream* param0) {

// line 9
panda$io$InputStream$cleanup(((panda$io$InputStream*) param0));
panda$io$InputStream** $tmp325 = &param0->source;
panda$io$InputStream* $tmp326 = *$tmp325;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
panda$collections$Array** $tmp327 = &param0->pushbackBuffer;
panda$collections$Array* $tmp328 = *$tmp327;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
return;

}

