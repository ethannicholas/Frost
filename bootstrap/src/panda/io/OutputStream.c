#include "panda/io/OutputStream.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/UInt16.h"
#include "panda/io/ByteOrder.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/Array.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Char8.h"


static panda$core$String $s1;
panda$io$OutputStream$class_type panda$io$OutputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$OutputStream$cleanup, NULL, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int8, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Int8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Char8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine, panda$io$OutputStream$flush} };

typedef panda$core$Bit (*$fn10)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn15)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn20)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn25)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn28)(panda$io$OutputStream*, panda$core$UInt8);
typedef panda$core$Bit (*$fn37)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn42)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn47)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn52)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn55)(panda$io$OutputStream*, panda$core$UInt16);
typedef panda$core$Bit (*$fn64)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn69)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn74)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn79)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn82)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn85)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn88)(panda$io$OutputStream*, panda$core$UInt16);
typedef void (*$fn91)(panda$io$OutputStream*, panda$core$UInt32);
typedef void (*$fn94)(panda$io$OutputStream*, panda$core$UInt64);
typedef void (*$fn118)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn140)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn142)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn145)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn149)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn154)(panda$collections$Iterator*);
typedef void (*$fn158)(panda$io$OutputStream*, panda$core$UInt8);
typedef panda$collections$Iterator* (*$fn161)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn165)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn170)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn175)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn179)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn184)(panda$collections$Iterator*);
typedef void (*$fn188)(panda$io$OutputStream*, panda$core$Char8);
typedef void (*$fn192)(panda$io$OutputStream*, panda$core$UInt8);
typedef panda$core$String* (*$fn198)(panda$core$Object*);
typedef void (*$fn201)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn203)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn205)(panda$io$OutputStream*);
typedef panda$core$String* (*$fn207)(panda$core$Object*);
typedef void (*$fn210)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn214)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 21, -3689739765115213222, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void panda$io$OutputStream$write$panda$core$UInt16(panda$io$OutputStream* param0, panda$core$UInt16 param1) {

// line 40
panda$io$ByteOrder* $tmp2 = &param0->byteOrder;
panda$io$ByteOrder $tmp3 = *$tmp2;
panda$io$ByteOrder$wrapper* $tmp4;
$tmp4 = (panda$io$ByteOrder$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp4->value = $tmp3;
panda$core$Int64 $tmp5 = (panda$core$Int64) {0};
panda$io$ByteOrder $tmp6 = panda$io$ByteOrder$init$panda$core$Int64($tmp5);
panda$io$ByteOrder$wrapper* $tmp7;
$tmp7 = (panda$io$ByteOrder$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp7->value = $tmp6;
ITable* $tmp8 = ((panda$core$Equatable*) $tmp4)->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
panda$core$Bit $tmp11 = $tmp9(((panda$core$Equatable*) $tmp4), ((panda$core$Equatable*) $tmp7));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp7)));
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block3;
block1:;
// line 41
panda$core$UInt8 $tmp13 = panda$core$UInt16$convert$R$panda$core$UInt8(param1);
$fn15 $tmp14 = ($fn15) param0->$class->vtable[2];
$tmp14(param0, $tmp13);
// line 42
panda$core$UInt16 $tmp16 = (panda$core$UInt16) {8};
panda$core$UInt32 $tmp17 = panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32(param1, $tmp16);
panda$core$UInt8 $tmp18 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp17);
$fn20 $tmp19 = ($fn20) param0->$class->vtable[2];
$tmp19(param0, $tmp18);
goto block2;
block3:;
// line 1
// line 45
panda$core$UInt16 $tmp21 = (panda$core$UInt16) {8};
panda$core$UInt32 $tmp22 = panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32(param1, $tmp21);
panda$core$UInt8 $tmp23 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp22);
$fn25 $tmp24 = ($fn25) param0->$class->vtable[2];
$tmp24(param0, $tmp23);
// line 46
panda$core$UInt8 $tmp26 = panda$core$UInt16$convert$R$panda$core$UInt8(param1);
$fn28 $tmp27 = ($fn28) param0->$class->vtable[2];
$tmp27(param0, $tmp26);
goto block2;
block2:;
return;

}
void panda$io$OutputStream$write$panda$core$UInt32(panda$io$OutputStream* param0, panda$core$UInt32 param1) {

// line 57
panda$io$ByteOrder* $tmp29 = &param0->byteOrder;
panda$io$ByteOrder $tmp30 = *$tmp29;
panda$io$ByteOrder$wrapper* $tmp31;
$tmp31 = (panda$io$ByteOrder$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp31->value = $tmp30;
panda$core$Int64 $tmp32 = (panda$core$Int64) {0};
panda$io$ByteOrder $tmp33 = panda$io$ByteOrder$init$panda$core$Int64($tmp32);
panda$io$ByteOrder$wrapper* $tmp34;
$tmp34 = (panda$io$ByteOrder$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp34->value = $tmp33;
ITable* $tmp35 = ((panda$core$Equatable*) $tmp31)->$class->itable;
while ($tmp35->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[0];
panda$core$Bit $tmp38 = $tmp36(((panda$core$Equatable*) $tmp31), ((panda$core$Equatable*) $tmp34));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp31)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp34)));
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block1; else goto block3;
block1:;
// line 58
panda$core$UInt16 $tmp40 = panda$core$UInt32$convert$R$panda$core$UInt16(param1);
$fn42 $tmp41 = ($fn42) param0->$class->vtable[3];
$tmp41(param0, $tmp40);
// line 59
panda$core$UInt32 $tmp43 = (panda$core$UInt32) {16};
panda$core$UInt32 $tmp44 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(param1, $tmp43);
panda$core$UInt16 $tmp45 = panda$core$UInt32$convert$R$panda$core$UInt16($tmp44);
$fn47 $tmp46 = ($fn47) param0->$class->vtable[3];
$tmp46(param0, $tmp45);
goto block2;
block3:;
// line 1
// line 62
panda$core$UInt32 $tmp48 = (panda$core$UInt32) {16};
panda$core$UInt32 $tmp49 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(param1, $tmp48);
panda$core$UInt16 $tmp50 = panda$core$UInt32$convert$R$panda$core$UInt16($tmp49);
$fn52 $tmp51 = ($fn52) param0->$class->vtable[3];
$tmp51(param0, $tmp50);
// line 63
panda$core$UInt16 $tmp53 = panda$core$UInt32$convert$R$panda$core$UInt16(param1);
$fn55 $tmp54 = ($fn55) param0->$class->vtable[3];
$tmp54(param0, $tmp53);
goto block2;
block2:;
return;

}
void panda$io$OutputStream$write$panda$core$UInt64(panda$io$OutputStream* param0, panda$core$UInt64 param1) {

// line 74
panda$io$ByteOrder* $tmp56 = &param0->byteOrder;
panda$io$ByteOrder $tmp57 = *$tmp56;
panda$io$ByteOrder$wrapper* $tmp58;
$tmp58 = (panda$io$ByteOrder$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp58->value = $tmp57;
panda$core$Int64 $tmp59 = (panda$core$Int64) {0};
panda$io$ByteOrder $tmp60 = panda$io$ByteOrder$init$panda$core$Int64($tmp59);
panda$io$ByteOrder$wrapper* $tmp61;
$tmp61 = (panda$io$ByteOrder$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp61->value = $tmp60;
ITable* $tmp62 = ((panda$core$Equatable*) $tmp58)->$class->itable;
while ($tmp62->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[0];
panda$core$Bit $tmp65 = $tmp63(((panda$core$Equatable*) $tmp58), ((panda$core$Equatable*) $tmp61));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp58)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp61)));
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block1; else goto block3;
block1:;
// line 75
panda$core$UInt32 $tmp67 = panda$core$UInt64$convert$R$panda$core$UInt32(param1);
$fn69 $tmp68 = ($fn69) param0->$class->vtable[4];
$tmp68(param0, $tmp67);
// line 76
panda$core$UInt64 $tmp70 = (panda$core$UInt64) {32};
panda$core$UInt64 $tmp71 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(param1, $tmp70);
panda$core$UInt32 $tmp72 = panda$core$UInt64$convert$R$panda$core$UInt32($tmp71);
$fn74 $tmp73 = ($fn74) param0->$class->vtable[4];
$tmp73(param0, $tmp72);
goto block2;
block3:;
// line 1
// line 79
panda$core$UInt64 $tmp75 = (panda$core$UInt64) {32};
panda$core$UInt64 $tmp76 = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(param1, $tmp75);
panda$core$UInt32 $tmp77 = panda$core$UInt64$convert$R$panda$core$UInt32($tmp76);
$fn79 $tmp78 = ($fn79) param0->$class->vtable[4];
$tmp78(param0, $tmp77);
// line 80
panda$core$UInt32 $tmp80 = panda$core$UInt64$convert$R$panda$core$UInt32(param1);
$fn82 $tmp81 = ($fn82) param0->$class->vtable[4];
$tmp81(param0, $tmp80);
goto block2;
block2:;
return;

}
void panda$io$OutputStream$write$panda$core$Int8(panda$io$OutputStream* param0, panda$core$Int8 param1) {

// line 91
panda$core$UInt8 $tmp83 = panda$core$Int8$convert$R$panda$core$UInt8(param1);
$fn85 $tmp84 = ($fn85) param0->$class->vtable[2];
$tmp84(param0, $tmp83);
return;

}
void panda$io$OutputStream$write$panda$core$Int16(panda$io$OutputStream* param0, panda$core$Int16 param1) {

// line 101
panda$core$UInt16 $tmp86 = panda$core$Int16$convert$R$panda$core$UInt16(param1);
$fn88 $tmp87 = ($fn88) param0->$class->vtable[3];
$tmp87(param0, $tmp86);
return;

}
void panda$io$OutputStream$write$panda$core$Int32(panda$io$OutputStream* param0, panda$core$Int32 param1) {

// line 111
panda$core$UInt32 $tmp89 = panda$core$Int32$convert$R$panda$core$UInt32(param1);
$fn91 $tmp90 = ($fn91) param0->$class->vtable[4];
$tmp90(param0, $tmp89);
return;

}
void panda$io$OutputStream$write$panda$core$Int64(panda$io$OutputStream* param0, panda$core$Int64 param1) {

// line 121
panda$core$UInt64 $tmp92 = panda$core$Int64$convert$R$panda$core$UInt64(param1);
$fn94 $tmp93 = ($fn94) param0->$class->vtable[5];
$tmp93(param0, $tmp92);
return;

}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64(panda$io$OutputStream* param0, panda$core$UInt8* param1, panda$core$Int64 param2) {

panda$core$Int64 local0;
// line 131
panda$core$Int64 $tmp95 = (panda$core$Int64) {0};
panda$core$Bit $tmp96 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp97 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp95, param2, $tmp96);
panda$core$Int64 $tmp98 = $tmp97.min;
*(&local0) = $tmp98;
panda$core$Int64 $tmp99 = $tmp97.max;
panda$core$Bit $tmp100 = $tmp97.inclusive;
bool $tmp101 = $tmp100.value;
panda$core$Int64 $tmp102 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp103 = panda$core$Int64$convert$R$panda$core$UInt64($tmp102);
if ($tmp101) goto block4; else goto block5;
block4:;
int64_t $tmp104 = $tmp98.value;
int64_t $tmp105 = $tmp99.value;
bool $tmp106 = $tmp104 <= $tmp105;
panda$core$Bit $tmp107 = (panda$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block2;
block5:;
int64_t $tmp109 = $tmp98.value;
int64_t $tmp110 = $tmp99.value;
bool $tmp111 = $tmp109 < $tmp110;
panda$core$Bit $tmp112 = (panda$core$Bit) {$tmp111};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block1; else goto block2;
block1:;
// line 132
panda$core$Int64 $tmp114 = *(&local0);
int64_t $tmp115 = $tmp114.value;
panda$core$UInt8 $tmp116 = param1[$tmp115];
$fn118 $tmp117 = ($fn118) param0->$class->vtable[2];
$tmp117(param0, $tmp116);
goto block3;
block3:;
panda$core$Int64 $tmp119 = *(&local0);
int64_t $tmp120 = $tmp99.value;
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120 - $tmp121;
panda$core$Int64 $tmp123 = (panda$core$Int64) {$tmp122};
panda$core$UInt64 $tmp124 = panda$core$Int64$convert$R$panda$core$UInt64($tmp123);
if ($tmp101) goto block7; else goto block8;
block7:;
uint64_t $tmp125 = $tmp124.value;
uint64_t $tmp126 = $tmp103.value;
bool $tmp127 = $tmp125 >= $tmp126;
panda$core$Bit $tmp128 = (panda$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block6; else goto block2;
block8:;
uint64_t $tmp130 = $tmp124.value;
uint64_t $tmp131 = $tmp103.value;
bool $tmp132 = $tmp130 > $tmp131;
panda$core$Bit $tmp133 = (panda$core$Bit) {$tmp132};
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block6; else goto block2;
block6:;
int64_t $tmp135 = $tmp119.value;
int64_t $tmp136 = $tmp102.value;
int64_t $tmp137 = $tmp135 + $tmp136;
panda$core$Int64 $tmp138 = (panda$core$Int64) {$tmp137};
*(&local0) = $tmp138;
goto block1;
block2:;
return;

}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64(panda$io$OutputStream* param0, panda$core$Int8* param1, panda$core$Int64 param2) {

// line 144
$fn140 $tmp139 = ($fn140) param0->$class->vtable[10];
$tmp139(param0, ((panda$core$UInt8*) param1), param2);
return;

}
void panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$io$OutputStream* param0, panda$core$Char8* param1, panda$core$Int64 param2) {

// line 155
$fn142 $tmp141 = ($fn142) param0->$class->vtable[10];
$tmp141(param0, ((panda$core$UInt8*) param1), param2);
return;

}
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64(panda$io$OutputStream* param0, panda$collections$Array* param1, panda$core$Int64 param2) {

panda$core$UInt8 local0;
// line 167
ITable* $tmp143 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp143->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp143 = $tmp143->next;
}
$fn145 $tmp144 = $tmp143->methods[0];
panda$collections$Iterator* $tmp146 = $tmp144(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp147 = $tmp146->$class->itable;
while ($tmp147->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[0];
panda$core$Bit $tmp150 = $tmp148($tmp146);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block3; else goto block2;
block2:;
ITable* $tmp152 = $tmp146->$class->itable;
while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp152 = $tmp152->next;
}
$fn154 $tmp153 = $tmp152->methods[1];
panda$core$Object* $tmp155 = $tmp153($tmp146);
*(&local0) = ((panda$core$UInt8$wrapper*) $tmp155)->value;
// line 168
panda$core$UInt8 $tmp156 = *(&local0);
$fn158 $tmp157 = ($fn158) param0->$class->vtable[2];
$tmp157(param0, $tmp156);
panda$core$Panda$unref$panda$core$Object$Q($tmp155);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
return;

}
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Int8$GT$panda$core$Int64(panda$io$OutputStream* param0, panda$collections$Array* param1, panda$core$Int64 param2) {

panda$core$Int8 local0;
// line 181
ITable* $tmp159 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
panda$collections$Iterator* $tmp162 = $tmp160(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp163 = $tmp162->$class->itable;
while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[0];
panda$core$Bit $tmp166 = $tmp164($tmp162);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block3; else goto block2;
block2:;
ITable* $tmp168 = $tmp162->$class->itable;
while ($tmp168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[1];
panda$core$Object* $tmp171 = $tmp169($tmp162);
*(&local0) = ((panda$core$Int8$wrapper*) $tmp171)->value;
// line 182
panda$core$Int8 $tmp172 = *(&local0);
panda$io$OutputStream$write$panda$core$Int8(param0, $tmp172);
panda$core$Panda$unref$panda$core$Object$Q($tmp171);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
return;

}
void panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Char8$GT$panda$core$Int64(panda$io$OutputStream* param0, panda$collections$Array* param1, panda$core$Int64 param2) {

panda$core$Char8 local0;
// line 195
ITable* $tmp173 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[0];
panda$collections$Iterator* $tmp176 = $tmp174(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp177 = $tmp176->$class->itable;
while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp177 = $tmp177->next;
}
$fn179 $tmp178 = $tmp177->methods[0];
panda$core$Bit $tmp180 = $tmp178($tmp176);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block3; else goto block2;
block2:;
ITable* $tmp182 = $tmp176->$class->itable;
while ($tmp182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[1];
panda$core$Object* $tmp185 = $tmp183($tmp176);
*(&local0) = ((panda$core$Char8$wrapper*) $tmp185)->value;
// line 196
panda$core$Char8 $tmp186 = *(&local0);
$fn188 $tmp187 = ($fn188) param0->$class->vtable[16];
$tmp187(param0, $tmp186);
panda$core$Panda$unref$panda$core$Object$Q($tmp185);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
return;

}
void panda$io$OutputStream$write$panda$core$Char8(panda$io$OutputStream* param0, panda$core$Char8 param1) {

// line 206
uint8_t $tmp189 = param1.value;
panda$core$UInt8 $tmp190 = panda$core$UInt8$init$builtin_uint8($tmp189);
$fn192 $tmp191 = ($fn192) param0->$class->vtable[2];
$tmp191(param0, $tmp190);
return;

}
void panda$io$OutputStream$print$panda$core$String(panda$io$OutputStream* param0, panda$core$String* param1) {

// line 215
panda$core$Char8** $tmp193 = &param1->data;
panda$core$Char8* $tmp194 = *$tmp193;
panda$core$Int64* $tmp195 = &param1->_length;
panda$core$Int64 $tmp196 = *$tmp195;
panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(param0, $tmp194, $tmp196);
return;

}
void panda$io$OutputStream$print$panda$core$Object(panda$io$OutputStream* param0, panda$core$Object* param1) {

// line 225
$fn198 $tmp197 = ($fn198) param1->$class->vtable[0];
panda$core$String* $tmp199 = $tmp197(param1);
$fn201 $tmp200 = ($fn201) param0->$class->vtable[17];
$tmp200(param0, $tmp199);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
return;

}
void panda$io$OutputStream$printLine$panda$core$String(panda$io$OutputStream* param0, panda$core$String* param1) {

// line 234
$fn203 $tmp202 = ($fn203) param0->$class->vtable[17];
$tmp202(param0, param1);
// line 235
$fn205 $tmp204 = ($fn205) param0->$class->vtable[21];
$tmp204(param0);
return;

}
void panda$io$OutputStream$printLine$panda$core$Object(panda$io$OutputStream* param0, panda$core$Object* param1) {

// line 245
$fn207 $tmp206 = ($fn207) param1->$class->vtable[0];
panda$core$String* $tmp208 = $tmp206(param1);
$fn210 $tmp209 = ($fn210) param0->$class->vtable[19];
$tmp209(param0, $tmp208);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
return;

}
void panda$io$OutputStream$printLine(panda$io$OutputStream* param0) {

// line 252
panda$core$String** $tmp211 = &param0->lineEnding;
panda$core$String* $tmp212 = *$tmp211;
$fn214 $tmp213 = ($fn214) param0->$class->vtable[17];
$tmp213(param0, $tmp212);
return;

}
void panda$io$OutputStream$flush(panda$io$OutputStream* param0) {

return;

}
void panda$io$OutputStream$init(panda$io$OutputStream* param0) {

// line 17
panda$core$Int64 $tmp215 = (panda$core$Int64) {0};
panda$io$ByteOrder $tmp216 = panda$io$ByteOrder$init$panda$core$Int64($tmp215);
panda$io$ByteOrder* $tmp217 = &param0->byteOrder;
*$tmp217 = $tmp216;
// line 23
panda$core$String** $tmp218 = &param0->lineEnding;
panda$core$String* $tmp219 = *$tmp218;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s220));
panda$core$String** $tmp221 = &param0->lineEnding;
*$tmp221 = &$s222;
return;

}
void panda$io$OutputStream$cleanup(panda$io$OutputStream* param0) {

panda$core$String** $tmp223 = &param0->lineEnding;
panda$core$String* $tmp224 = *$tmp223;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
return;

}

