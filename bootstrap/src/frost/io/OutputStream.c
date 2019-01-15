#include "frost/io/OutputStream.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/UInt16.h"
#include "frost/io/ByteOrder.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Char8.h"


static frost$core$String $s1;
frost$io$OutputStream$class_type frost$io$OutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$io$OutputStream$cleanup, NULL, frost$io$OutputStream$write$frost$core$UInt16, frost$io$OutputStream$write$frost$core$UInt32, frost$io$OutputStream$write$frost$core$UInt64, frost$io$OutputStream$write$frost$core$Int8, frost$io$OutputStream$write$frost$core$Int16, frost$io$OutputStream$write$frost$core$Int32, frost$io$OutputStream$write$frost$core$Int64, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$core$Char8, frost$io$OutputStream$print$frost$core$String, frost$io$OutputStream$print$frost$core$Object, frost$io$OutputStream$printLine$frost$core$String, frost$io$OutputStream$printLine$frost$core$Object, frost$io$OutputStream$printLine, frost$io$OutputStream$flush, frost$io$OutputStream$close} };

typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn15)(frost$io$OutputStream*, frost$core$UInt8);
typedef void (*$fn20)(frost$io$OutputStream*, frost$core$UInt8);
typedef void (*$fn25)(frost$io$OutputStream*, frost$core$UInt8);
typedef void (*$fn28)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Bit (*$fn37)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn42)(frost$io$OutputStream*, frost$core$UInt16);
typedef void (*$fn47)(frost$io$OutputStream*, frost$core$UInt16);
typedef void (*$fn52)(frost$io$OutputStream*, frost$core$UInt16);
typedef void (*$fn55)(frost$io$OutputStream*, frost$core$UInt16);
typedef frost$core$Bit (*$fn64)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn69)(frost$io$OutputStream*, frost$core$UInt32);
typedef void (*$fn74)(frost$io$OutputStream*, frost$core$UInt32);
typedef void (*$fn79)(frost$io$OutputStream*, frost$core$UInt32);
typedef void (*$fn82)(frost$io$OutputStream*, frost$core$UInt32);
typedef void (*$fn85)(frost$io$OutputStream*, frost$core$UInt8);
typedef void (*$fn88)(frost$io$OutputStream*, frost$core$UInt16);
typedef void (*$fn91)(frost$io$OutputStream*, frost$core$UInt32);
typedef void (*$fn94)(frost$io$OutputStream*, frost$core$UInt64);
typedef void (*$fn118)(frost$io$OutputStream*, frost$core$UInt8);
typedef void (*$fn140)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef void (*$fn142)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn145)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn149)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn154)(frost$collections$Iterator*);
typedef void (*$fn158)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$collections$Iterator* (*$fn161)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn165)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn170)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn175)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn179)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn184)(frost$collections$Iterator*);
typedef void (*$fn188)(frost$io$OutputStream*, frost$core$Char8);
typedef void (*$fn192)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$String* (*$fn198)(frost$core$Object*);
typedef void (*$fn201)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn203)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn205)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn207)(frost$core$Object*);
typedef void (*$fn210)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn214)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 21, -1851160247464291148, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };

void frost$io$OutputStream$write$frost$core$UInt16(frost$io$OutputStream* param0, frost$core$UInt16 param1) {

// line 40
frost$io$ByteOrder* $tmp2 = &param0->byteOrder;
frost$io$ByteOrder $tmp3 = *$tmp2;
frost$io$ByteOrder$wrapper* $tmp4;
$tmp4 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int64 $tmp5 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp6 = frost$io$ByteOrder$init$frost$core$Int64($tmp5);
frost$io$ByteOrder$wrapper* $tmp7;
$tmp7 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp7->value = $tmp6;
ITable* $tmp8 = ((frost$core$Equatable*) $tmp4)->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Bit $tmp11 = $tmp9(((frost$core$Equatable*) $tmp4), ((frost$core$Equatable*) $tmp7));
bool $tmp12 = $tmp11.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp7)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
// unreffing REF($3:frost.core.Equatable<frost.io.ByteOrder>)
if ($tmp12) goto block1; else goto block3;
block1:;
// line 41
frost$core$UInt8 $tmp13 = frost$core$UInt16$convert$R$frost$core$UInt8(param1);
$fn15 $tmp14 = ($fn15) param0->$class->vtable[2];
$tmp14(param0, $tmp13);
// line 42
frost$core$UInt16 $tmp16 = (frost$core$UInt16) {8};
frost$core$UInt32 $tmp17 = frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32(param1, $tmp16);
frost$core$UInt8 $tmp18 = frost$core$UInt32$convert$R$frost$core$UInt8($tmp17);
$fn20 $tmp19 = ($fn20) param0->$class->vtable[2];
$tmp19(param0, $tmp18);
goto block2;
block3:;
// line 1
// line 45
frost$core$UInt16 $tmp21 = (frost$core$UInt16) {8};
frost$core$UInt32 $tmp22 = frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32(param1, $tmp21);
frost$core$UInt8 $tmp23 = frost$core$UInt32$convert$R$frost$core$UInt8($tmp22);
$fn25 $tmp24 = ($fn25) param0->$class->vtable[2];
$tmp24(param0, $tmp23);
// line 46
frost$core$UInt8 $tmp26 = frost$core$UInt16$convert$R$frost$core$UInt8(param1);
$fn28 $tmp27 = ($fn28) param0->$class->vtable[2];
$tmp27(param0, $tmp26);
goto block2;
block2:;
return;

}
void frost$io$OutputStream$write$frost$core$UInt32(frost$io$OutputStream* param0, frost$core$UInt32 param1) {

// line 57
frost$io$ByteOrder* $tmp29 = &param0->byteOrder;
frost$io$ByteOrder $tmp30 = *$tmp29;
frost$io$ByteOrder$wrapper* $tmp31;
$tmp31 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp31->value = $tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp33 = frost$io$ByteOrder$init$frost$core$Int64($tmp32);
frost$io$ByteOrder$wrapper* $tmp34;
$tmp34 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp34->value = $tmp33;
ITable* $tmp35 = ((frost$core$Equatable*) $tmp31)->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[0];
frost$core$Bit $tmp38 = $tmp36(((frost$core$Equatable*) $tmp31), ((frost$core$Equatable*) $tmp34));
bool $tmp39 = $tmp38.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp34)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp31)));
// unreffing REF($3:frost.core.Equatable<frost.io.ByteOrder>)
if ($tmp39) goto block1; else goto block3;
block1:;
// line 58
frost$core$UInt16 $tmp40 = frost$core$UInt32$convert$R$frost$core$UInt16(param1);
$fn42 $tmp41 = ($fn42) param0->$class->vtable[3];
$tmp41(param0, $tmp40);
// line 59
frost$core$UInt32 $tmp43 = (frost$core$UInt32) {16};
frost$core$UInt32 $tmp44 = frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(param1, $tmp43);
frost$core$UInt16 $tmp45 = frost$core$UInt32$convert$R$frost$core$UInt16($tmp44);
$fn47 $tmp46 = ($fn47) param0->$class->vtable[3];
$tmp46(param0, $tmp45);
goto block2;
block3:;
// line 1
// line 62
frost$core$UInt32 $tmp48 = (frost$core$UInt32) {16};
frost$core$UInt32 $tmp49 = frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(param1, $tmp48);
frost$core$UInt16 $tmp50 = frost$core$UInt32$convert$R$frost$core$UInt16($tmp49);
$fn52 $tmp51 = ($fn52) param0->$class->vtable[3];
$tmp51(param0, $tmp50);
// line 63
frost$core$UInt16 $tmp53 = frost$core$UInt32$convert$R$frost$core$UInt16(param1);
$fn55 $tmp54 = ($fn55) param0->$class->vtable[3];
$tmp54(param0, $tmp53);
goto block2;
block2:;
return;

}
void frost$io$OutputStream$write$frost$core$UInt64(frost$io$OutputStream* param0, frost$core$UInt64 param1) {

// line 74
frost$io$ByteOrder* $tmp56 = &param0->byteOrder;
frost$io$ByteOrder $tmp57 = *$tmp56;
frost$io$ByteOrder$wrapper* $tmp58;
$tmp58 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp58->value = $tmp57;
frost$core$Int64 $tmp59 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp60 = frost$io$ByteOrder$init$frost$core$Int64($tmp59);
frost$io$ByteOrder$wrapper* $tmp61;
$tmp61 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp61->value = $tmp60;
ITable* $tmp62 = ((frost$core$Equatable*) $tmp58)->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[0];
frost$core$Bit $tmp65 = $tmp63(((frost$core$Equatable*) $tmp58), ((frost$core$Equatable*) $tmp61));
bool $tmp66 = $tmp65.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp61)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp58)));
// unreffing REF($3:frost.core.Equatable<frost.io.ByteOrder>)
if ($tmp66) goto block1; else goto block3;
block1:;
// line 75
frost$core$UInt32 $tmp67 = frost$core$UInt64$convert$R$frost$core$UInt32(param1);
$fn69 $tmp68 = ($fn69) param0->$class->vtable[4];
$tmp68(param0, $tmp67);
// line 76
frost$core$UInt64 $tmp70 = (frost$core$UInt64) {32};
frost$core$UInt64 $tmp71 = frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(param1, $tmp70);
frost$core$UInt32 $tmp72 = frost$core$UInt64$convert$R$frost$core$UInt32($tmp71);
$fn74 $tmp73 = ($fn74) param0->$class->vtable[4];
$tmp73(param0, $tmp72);
goto block2;
block3:;
// line 1
// line 79
frost$core$UInt64 $tmp75 = (frost$core$UInt64) {32};
frost$core$UInt64 $tmp76 = frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(param1, $tmp75);
frost$core$UInt32 $tmp77 = frost$core$UInt64$convert$R$frost$core$UInt32($tmp76);
$fn79 $tmp78 = ($fn79) param0->$class->vtable[4];
$tmp78(param0, $tmp77);
// line 80
frost$core$UInt32 $tmp80 = frost$core$UInt64$convert$R$frost$core$UInt32(param1);
$fn82 $tmp81 = ($fn82) param0->$class->vtable[4];
$tmp81(param0, $tmp80);
goto block2;
block2:;
return;

}
void frost$io$OutputStream$write$frost$core$Int8(frost$io$OutputStream* param0, frost$core$Int8 param1) {

// line 91
frost$core$UInt8 $tmp83 = frost$core$Int8$convert$R$frost$core$UInt8(param1);
$fn85 $tmp84 = ($fn85) param0->$class->vtable[2];
$tmp84(param0, $tmp83);
return;

}
void frost$io$OutputStream$write$frost$core$Int16(frost$io$OutputStream* param0, frost$core$Int16 param1) {

// line 101
frost$core$UInt16 $tmp86 = frost$core$Int16$convert$R$frost$core$UInt16(param1);
$fn88 $tmp87 = ($fn88) param0->$class->vtable[3];
$tmp87(param0, $tmp86);
return;

}
void frost$io$OutputStream$write$frost$core$Int32(frost$io$OutputStream* param0, frost$core$Int32 param1) {

// line 111
frost$core$UInt32 $tmp89 = frost$core$Int32$convert$R$frost$core$UInt32(param1);
$fn91 $tmp90 = ($fn91) param0->$class->vtable[4];
$tmp90(param0, $tmp89);
return;

}
void frost$io$OutputStream$write$frost$core$Int64(frost$io$OutputStream* param0, frost$core$Int64 param1) {

// line 121
frost$core$UInt64 $tmp92 = frost$core$Int64$convert$R$frost$core$UInt64(param1);
$fn94 $tmp93 = ($fn94) param0->$class->vtable[5];
$tmp93(param0, $tmp92);
return;

}
void frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64(frost$io$OutputStream* param0, frost$core$UInt8* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
// line 131
frost$core$Int64 $tmp95 = (frost$core$Int64) {0};
frost$core$Bit $tmp96 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp97 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp95, param2, $tmp96);
frost$core$Int64 $tmp98 = $tmp97.min;
*(&local0) = $tmp98;
frost$core$Int64 $tmp99 = $tmp97.max;
frost$core$Bit $tmp100 = $tmp97.inclusive;
bool $tmp101 = $tmp100.value;
frost$core$Int64 $tmp102 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp103 = frost$core$Int64$convert$R$frost$core$UInt64($tmp102);
if ($tmp101) goto block4; else goto block5;
block4:;
int64_t $tmp104 = $tmp98.value;
int64_t $tmp105 = $tmp99.value;
bool $tmp106 = $tmp104 <= $tmp105;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block2;
block5:;
int64_t $tmp109 = $tmp98.value;
int64_t $tmp110 = $tmp99.value;
bool $tmp111 = $tmp109 < $tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block1; else goto block2;
block1:;
// line 132
frost$core$Int64 $tmp114 = *(&local0);
int64_t $tmp115 = $tmp114.value;
frost$core$UInt8 $tmp116 = param1[$tmp115];
$fn118 $tmp117 = ($fn118) param0->$class->vtable[2];
$tmp117(param0, $tmp116);
goto block3;
block3:;
frost$core$Int64 $tmp119 = *(&local0);
int64_t $tmp120 = $tmp99.value;
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120 - $tmp121;
frost$core$Int64 $tmp123 = (frost$core$Int64) {$tmp122};
frost$core$UInt64 $tmp124 = frost$core$Int64$convert$R$frost$core$UInt64($tmp123);
if ($tmp101) goto block7; else goto block8;
block7:;
uint64_t $tmp125 = $tmp124.value;
uint64_t $tmp126 = $tmp103.value;
bool $tmp127 = $tmp125 >= $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block6; else goto block2;
block8:;
uint64_t $tmp130 = $tmp124.value;
uint64_t $tmp131 = $tmp103.value;
bool $tmp132 = $tmp130 > $tmp131;
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132};
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block6; else goto block2;
block6:;
int64_t $tmp135 = $tmp119.value;
int64_t $tmp136 = $tmp102.value;
int64_t $tmp137 = $tmp135 + $tmp136;
frost$core$Int64 $tmp138 = (frost$core$Int64) {$tmp137};
*(&local0) = $tmp138;
goto block1;
block2:;
return;

}
void frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64(frost$io$OutputStream* param0, frost$core$Int8* param1, frost$core$Int64 param2) {

// line 144
$fn140 $tmp139 = ($fn140) param0->$class->vtable[10];
$tmp139(param0, ((frost$core$UInt8*) param1), param2);
return;

}
void frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64(frost$io$OutputStream* param0, frost$core$Char8* param1, frost$core$Int64 param2) {

// line 155
$fn142 $tmp141 = ($fn142) param0->$class->vtable[10];
$tmp141(param0, ((frost$core$UInt8*) param1), param2);
return;

}
void frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int64(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int64 param2) {

frost$core$UInt8 local0;
// line 167
ITable* $tmp143 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp143->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp143 = $tmp143->next;
}
$fn145 $tmp144 = $tmp143->methods[0];
frost$collections$Iterator* $tmp146 = $tmp144(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp147 = $tmp146->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[0];
frost$core$Bit $tmp150 = $tmp148($tmp146);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block3; else goto block2;
block2:;
ITable* $tmp152 = $tmp146->$class->itable;
while ($tmp152->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp152 = $tmp152->next;
}
$fn154 $tmp153 = $tmp152->methods[1];
frost$core$Object* $tmp155 = $tmp153($tmp146);
*(&local0) = ((frost$core$UInt8$wrapper*) $tmp155)->value;
// line 168
frost$core$UInt8 $tmp156 = *(&local0);
$fn158 $tmp157 = ($fn158) param0->$class->vtable[2];
$tmp157(param0, $tmp156);
frost$core$Frost$unref$frost$core$Object$Q($tmp155);
// unreffing REF($14:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing REF($4:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int64(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int64 param2) {

frost$core$Int8 local0;
// line 181
ITable* $tmp159 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
frost$collections$Iterator* $tmp162 = $tmp160(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp163 = $tmp162->$class->itable;
while ($tmp163->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[0];
frost$core$Bit $tmp166 = $tmp164($tmp162);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block3; else goto block2;
block2:;
ITable* $tmp168 = $tmp162->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[1];
frost$core$Object* $tmp171 = $tmp169($tmp162);
*(&local0) = ((frost$core$Int8$wrapper*) $tmp171)->value;
// line 182
frost$core$Int8 $tmp172 = *(&local0);
frost$io$OutputStream$write$frost$core$Int8(param0, $tmp172);
frost$core$Frost$unref$frost$core$Object$Q($tmp171);
// unreffing REF($14:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing REF($4:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int64(frost$io$OutputStream* param0, frost$collections$Array* param1, frost$core$Int64 param2) {

frost$core$Char8 local0;
// line 195
ITable* $tmp173 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp173->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[0];
frost$collections$Iterator* $tmp176 = $tmp174(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp177 = $tmp176->$class->itable;
while ($tmp177->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp177 = $tmp177->next;
}
$fn179 $tmp178 = $tmp177->methods[0];
frost$core$Bit $tmp180 = $tmp178($tmp176);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block3; else goto block2;
block2:;
ITable* $tmp182 = $tmp176->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[1];
frost$core$Object* $tmp185 = $tmp183($tmp176);
*(&local0) = ((frost$core$Char8$wrapper*) $tmp185)->value;
// line 196
frost$core$Char8 $tmp186 = *(&local0);
$fn188 $tmp187 = ($fn188) param0->$class->vtable[16];
$tmp187(param0, $tmp186);
frost$core$Frost$unref$frost$core$Object$Q($tmp185);
// unreffing REF($14:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// unreffing REF($4:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void frost$io$OutputStream$write$frost$core$Char8(frost$io$OutputStream* param0, frost$core$Char8 param1) {

// line 206
uint8_t $tmp189 = param1.value;
frost$core$UInt8 $tmp190 = frost$core$UInt8$init$builtin_uint8($tmp189);
$fn192 $tmp191 = ($fn192) param0->$class->vtable[2];
$tmp191(param0, $tmp190);
return;

}
void frost$io$OutputStream$print$frost$core$String(frost$io$OutputStream* param0, frost$core$String* param1) {

// line 215
frost$core$Char8** $tmp193 = &param1->data;
frost$core$Char8* $tmp194 = *$tmp193;
frost$core$Int64* $tmp195 = &param1->_length;
frost$core$Int64 $tmp196 = *$tmp195;
frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64(param0, $tmp194, $tmp196);
return;

}
void frost$io$OutputStream$print$frost$core$Object(frost$io$OutputStream* param0, frost$core$Object* param1) {

// line 225
$fn198 $tmp197 = ($fn198) param1->$class->vtable[0];
frost$core$String* $tmp199 = $tmp197(param1);
$fn201 $tmp200 = ($fn201) param0->$class->vtable[17];
$tmp200(param0, $tmp199);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
// unreffing REF($2:frost.core.String)
return;

}
void frost$io$OutputStream$printLine$frost$core$String(frost$io$OutputStream* param0, frost$core$String* param1) {

// line 234
$fn203 $tmp202 = ($fn203) param0->$class->vtable[17];
$tmp202(param0, param1);
// line 235
$fn205 $tmp204 = ($fn205) param0->$class->vtable[21];
$tmp204(param0);
return;

}
void frost$io$OutputStream$printLine$frost$core$Object(frost$io$OutputStream* param0, frost$core$Object* param1) {

// line 245
$fn207 $tmp206 = ($fn207) param1->$class->vtable[0];
frost$core$String* $tmp208 = $tmp206(param1);
$fn210 $tmp209 = ($fn210) param0->$class->vtable[19];
$tmp209(param0, $tmp208);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// unreffing REF($2:frost.core.String)
return;

}
void frost$io$OutputStream$printLine(frost$io$OutputStream* param0) {

// line 252
frost$core$String** $tmp211 = &param0->lineEnding;
frost$core$String* $tmp212 = *$tmp211;
$fn214 $tmp213 = ($fn214) param0->$class->vtable[17];
$tmp213(param0, $tmp212);
return;

}
void frost$io$OutputStream$flush(frost$io$OutputStream* param0) {

return;

}
void frost$io$OutputStream$close(frost$io$OutputStream* param0) {

return;

}
void frost$io$OutputStream$init(frost$io$OutputStream* param0) {

// line 17
frost$core$Int64 $tmp215 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp216 = frost$io$ByteOrder$init$frost$core$Int64($tmp215);
frost$io$ByteOrder* $tmp217 = &param0->byteOrder;
*$tmp217 = $tmp216;
// line 23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s218));
frost$core$String** $tmp219 = &param0->lineEnding;
frost$core$String* $tmp220 = *$tmp219;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$String** $tmp221 = &param0->lineEnding;
*$tmp221 = &$s222;
return;

}
void frost$io$OutputStream$cleanup(frost$io$OutputStream* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$String** $tmp223 = &param0->lineEnding;
frost$core$String* $tmp224 = *$tmp223;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
return;

}

