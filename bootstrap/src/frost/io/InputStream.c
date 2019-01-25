#include "frost/io/InputStream.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/UInt16.h"
#include "frost/core/Int16.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt32.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int64.h"
#include "frost/core/Int8.h"
#include "frost/core/UInt8.h"
#include "frost/io/ByteOrder.h"
#include "frost/core/Equatable.h"
#include "frost/core/Frost.h"
#include "frost/core/Char8.h"
#include "frost/core/MutableString.h"
#include "frost/collections/Array.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/MutableString/Index.h"
#include "frost/core/Char32.h"
#include "frost/core/Maybe.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Error.h"
#include "frost/collections/Iterator.h"
#include "frost/io/InputStream/LineIterator.h"


static frost$core$String $s1;
frost$io$InputStream$class_type frost$io$InputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$InputStream$cleanup, NULL, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int64$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q} };

typedef frost$core$Int16$nullable (*$fn3)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn11)(frost$io$InputStream*);
typedef frost$core$Int64$nullable (*$fn19)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn27)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn35)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn41)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn54)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int16$nullable (*$fn78)(frost$io$InputStream*);
typedef frost$core$Int16$nullable (*$fn84)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn97)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int32$nullable (*$fn119)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn125)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn138)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$UInt8$nullable (*$fn164)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn179)(frost$io$InputStream*);
typedef frost$core$Int64 (*$fn206)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Int64 (*$fn209)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Int64 (*$fn220)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Int64 (*$fn245)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Char8$nullable (*$fn306)(frost$io$InputStream*);
typedef frost$core$Int64 (*$fn364)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Error* (*$fn382)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -5494188274558096821, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x62\x75\x66\x66\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x2c\x20\x6d\x61\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 144, -3741681415420647689, NULL };

frost$core$UInt16$nullable frost$io$InputStream$read$R$frost$core$UInt16$Q(frost$io$InputStream* param0) {

frost$core$Int16 local0;
// line 56
$fn3 $tmp2 = ($fn3) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp4 = $tmp2(param0);
*(&local0) = ((frost$core$Int16) $tmp4.value);
// line 57
frost$core$Int16 $tmp5 = *(&local0);
frost$core$Bit $tmp6 = frost$core$Bit$init$builtin_bit(true);
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// line 58
frost$core$Int16 $tmp8 = *(&local0);
frost$core$UInt16 $tmp9 = frost$core$Int16$get_asUInt16$R$frost$core$UInt16($tmp8);
return ((frost$core$UInt16$nullable) { $tmp9, true });
block2:;
// line 60
return ((frost$core$UInt16$nullable) { .nonnull = false });

}
frost$core$UInt32$nullable frost$io$InputStream$read$R$frost$core$UInt32$Q(frost$io$InputStream* param0) {

frost$core$Int32 local0;
// line 68
$fn11 $tmp10 = ($fn11) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp12 = $tmp10(param0);
*(&local0) = ((frost$core$Int32) $tmp12.value);
// line 69
frost$core$Int32 $tmp13 = *(&local0);
frost$core$Bit $tmp14 = frost$core$Bit$init$builtin_bit(true);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block1; else goto block2;
block1:;
// line 70
frost$core$Int32 $tmp16 = *(&local0);
frost$core$UInt32 $tmp17 = frost$core$Int32$get_asUInt32$R$frost$core$UInt32($tmp16);
return ((frost$core$UInt32$nullable) { $tmp17, true });
block2:;
// line 72
return ((frost$core$UInt32$nullable) { .nonnull = false });

}
frost$core$UInt64$nullable frost$io$InputStream$read$R$frost$core$UInt64$Q(frost$io$InputStream* param0) {

frost$core$Int64 local0;
// line 80
$fn19 $tmp18 = ($fn19) param0->$class->vtable[9];
frost$core$Int64$nullable $tmp20 = $tmp18(param0);
*(&local0) = ((frost$core$Int64) $tmp20.value);
// line 81
frost$core$Int64 $tmp21 = *(&local0);
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit(true);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block2;
block1:;
// line 82
frost$core$Int64 $tmp24 = *(&local0);
frost$core$UInt64 $tmp25 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp24);
return ((frost$core$UInt64$nullable) { $tmp25, true });
block2:;
// line 84
return ((frost$core$UInt64$nullable) { .nonnull = false });

}
frost$core$Int8$nullable frost$io$InputStream$read$R$frost$core$Int8$Q(frost$io$InputStream* param0) {

frost$core$UInt8$nullable local0;
// line 91
$fn27 $tmp26 = ($fn27) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp28 = $tmp26(param0);
*(&local0) = $tmp28;
// line 92
frost$core$UInt8$nullable $tmp29 = *(&local0);
frost$core$Bit $tmp30 = frost$core$Bit$init$builtin_bit($tmp29.nonnull);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block1; else goto block2;
block1:;
// line 93
frost$core$UInt8$nullable $tmp32 = *(&local0);
frost$core$Int8 $tmp33 = frost$core$UInt8$get_asInt8$R$frost$core$Int8(((frost$core$UInt8) $tmp32.value));
return ((frost$core$Int8$nullable) { $tmp33, true });
block2:;
// line 95
return ((frost$core$Int8$nullable) { .nonnull = false });

}
frost$core$Int16$nullable frost$io$InputStream$read$R$frost$core$Int16$Q(frost$io$InputStream* param0) {

frost$core$UInt8$nullable local0;
frost$core$UInt8$nullable local1;
// line 103
$fn35 $tmp34 = ($fn35) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp36 = $tmp34(param0);
*(&local0) = $tmp36;
// line 104
frost$core$UInt8$nullable $tmp37 = *(&local0);
frost$core$Bit $tmp38 = frost$core$Bit$init$builtin_bit(!$tmp37.nonnull);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block1; else goto block2;
block1:;
// line 105
return ((frost$core$Int16$nullable) { .nonnull = false });
block2:;
// line 107
$fn41 $tmp40 = ($fn41) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp42 = $tmp40(param0);
*(&local1) = $tmp42;
// line 108
frost$core$UInt8$nullable $tmp43 = *(&local1);
frost$core$Bit $tmp44 = frost$core$Bit$init$builtin_bit(!$tmp43.nonnull);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block3; else goto block4;
block3:;
// line 109
return ((frost$core$Int16$nullable) { .nonnull = false });
block4:;
// line 111
frost$io$ByteOrder* $tmp46 = &param0->byteOrder;
frost$io$ByteOrder $tmp47 = *$tmp46;
frost$io$ByteOrder$wrapper* $tmp48;
$tmp48 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp48->value = $tmp47;
frost$core$Int64 $tmp49 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp50 = frost$io$ByteOrder$init$frost$core$Int64($tmp49);
frost$io$ByteOrder$wrapper* $tmp51;
$tmp51 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp51->value = $tmp50;
ITable* $tmp52 = ((frost$core$Equatable*) $tmp48)->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[0];
frost$core$Bit $tmp55 = $tmp53(((frost$core$Equatable*) $tmp48), ((frost$core$Equatable*) $tmp51));
bool $tmp56 = $tmp55.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp51)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp48)));
if ($tmp56) goto block5; else goto block7;
block5:;
// line 112
frost$core$UInt8$nullable $tmp57 = *(&local1);
frost$core$UInt8 $tmp58 = (frost$core$UInt8) {8};
frost$core$UInt32 $tmp59 = frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8) $tmp57.value), $tmp58);
frost$core$UInt8$nullable $tmp60 = *(&local0);
frost$core$UInt32 $tmp61 = frost$core$UInt32$init$frost$core$UInt8(((frost$core$UInt8) $tmp60.value));
uint32_t $tmp62 = $tmp59.value;
uint32_t $tmp63 = $tmp61.value;
uint32_t $tmp64 = $tmp62 + $tmp63;
frost$core$UInt32 $tmp65 = (frost$core$UInt32) {$tmp64};
frost$core$Int16 $tmp66 = frost$core$UInt32$get_asInt16$R$frost$core$Int16($tmp65);
return ((frost$core$Int16$nullable) { $tmp66, true });
block7:;
// line 1
// line 115
frost$core$UInt8$nullable $tmp67 = *(&local0);
frost$core$UInt8 $tmp68 = (frost$core$UInt8) {8};
frost$core$UInt32 $tmp69 = frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8) $tmp67.value), $tmp68);
frost$core$UInt8$nullable $tmp70 = *(&local1);
frost$core$UInt32 $tmp71 = frost$core$UInt32$init$frost$core$UInt8(((frost$core$UInt8) $tmp70.value));
uint32_t $tmp72 = $tmp69.value;
uint32_t $tmp73 = $tmp71.value;
uint32_t $tmp74 = $tmp72 + $tmp73;
frost$core$UInt32 $tmp75 = (frost$core$UInt32) {$tmp74};
frost$core$Int16 $tmp76 = frost$core$UInt32$get_asInt16$R$frost$core$Int16($tmp75);
return ((frost$core$Int16$nullable) { $tmp76, true });
block6:;
goto block8;
block8:;

}
frost$core$Int32$nullable frost$io$InputStream$read$R$frost$core$Int32$Q(frost$io$InputStream* param0) {

frost$core$Int16$nullable local0;
frost$core$Int16$nullable local1;
// line 124
$fn78 $tmp77 = ($fn78) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp79 = $tmp77(param0);
*(&local0) = $tmp79;
// line 125
frost$core$Int16$nullable $tmp80 = *(&local0);
frost$core$Bit $tmp81 = frost$core$Bit$init$builtin_bit(!$tmp80.nonnull);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block1; else goto block2;
block1:;
// line 126
return ((frost$core$Int32$nullable) { .nonnull = false });
block2:;
// line 128
$fn84 $tmp83 = ($fn84) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp85 = $tmp83(param0);
*(&local1) = $tmp85;
// line 129
frost$core$Int16$nullable $tmp86 = *(&local1);
frost$core$Bit $tmp87 = frost$core$Bit$init$builtin_bit(!$tmp86.nonnull);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block3; else goto block4;
block3:;
// line 130
return ((frost$core$Int32$nullable) { .nonnull = false });
block4:;
// line 132
frost$io$ByteOrder* $tmp89 = &param0->byteOrder;
frost$io$ByteOrder $tmp90 = *$tmp89;
frost$io$ByteOrder$wrapper* $tmp91;
$tmp91 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp91->value = $tmp90;
frost$core$Int64 $tmp92 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp93 = frost$io$ByteOrder$init$frost$core$Int64($tmp92);
frost$io$ByteOrder$wrapper* $tmp94;
$tmp94 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp94->value = $tmp93;
ITable* $tmp95 = ((frost$core$Equatable*) $tmp91)->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
frost$core$Bit $tmp98 = $tmp96(((frost$core$Equatable*) $tmp91), ((frost$core$Equatable*) $tmp94));
bool $tmp99 = $tmp98.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp94)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp91)));
if ($tmp99) goto block5; else goto block7;
block5:;
// line 133
frost$core$Int16$nullable $tmp100 = *(&local1);
frost$core$Int16 $tmp101 = (frost$core$Int16) {16};
frost$core$Int32 $tmp102 = frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16) $tmp100.value), $tmp101);
frost$core$Int16$nullable $tmp103 = *(&local0);
frost$core$Int32 $tmp104 = frost$core$Int32$init$frost$core$Int16(((frost$core$Int16) $tmp103.value));
int32_t $tmp105 = $tmp102.value;
int32_t $tmp106 = $tmp104.value;
int32_t $tmp107 = $tmp105 + $tmp106;
frost$core$Int32 $tmp108 = (frost$core$Int32) {$tmp107};
return ((frost$core$Int32$nullable) { $tmp108, true });
block7:;
// line 1
// line 136
frost$core$Int16$nullable $tmp109 = *(&local0);
frost$core$Int16 $tmp110 = (frost$core$Int16) {16};
frost$core$Int32 $tmp111 = frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16) $tmp109.value), $tmp110);
frost$core$Int16$nullable $tmp112 = *(&local1);
frost$core$Int32 $tmp113 = frost$core$Int32$init$frost$core$Int16(((frost$core$Int16) $tmp112.value));
int32_t $tmp114 = $tmp111.value;
int32_t $tmp115 = $tmp113.value;
int32_t $tmp116 = $tmp114 + $tmp115;
frost$core$Int32 $tmp117 = (frost$core$Int32) {$tmp116};
return ((frost$core$Int32$nullable) { $tmp117, true });
block6:;
goto block8;
block8:;

}
frost$core$Int64$nullable frost$io$InputStream$read$R$frost$core$Int64$Q(frost$io$InputStream* param0) {

frost$core$Int32$nullable local0;
frost$core$Int32$nullable local1;
// line 145
$fn119 $tmp118 = ($fn119) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp120 = $tmp118(param0);
*(&local0) = $tmp120;
// line 146
frost$core$Int32$nullable $tmp121 = *(&local0);
frost$core$Bit $tmp122 = frost$core$Bit$init$builtin_bit(!$tmp121.nonnull);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block1; else goto block2;
block1:;
// line 147
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 149
$fn125 $tmp124 = ($fn125) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp126 = $tmp124(param0);
*(&local1) = $tmp126;
// line 150
frost$core$Int32$nullable $tmp127 = *(&local1);
frost$core$Bit $tmp128 = frost$core$Bit$init$builtin_bit(!$tmp127.nonnull);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block3; else goto block4;
block3:;
// line 151
return ((frost$core$Int64$nullable) { .nonnull = false });
block4:;
// line 153
frost$io$ByteOrder* $tmp130 = &param0->byteOrder;
frost$io$ByteOrder $tmp131 = *$tmp130;
frost$io$ByteOrder$wrapper* $tmp132;
$tmp132 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp132->value = $tmp131;
frost$core$Int64 $tmp133 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp134 = frost$io$ByteOrder$init$frost$core$Int64($tmp133);
frost$io$ByteOrder$wrapper* $tmp135;
$tmp135 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp135->value = $tmp134;
ITable* $tmp136 = ((frost$core$Equatable*) $tmp132)->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[0];
frost$core$Bit $tmp139 = $tmp137(((frost$core$Equatable*) $tmp132), ((frost$core$Equatable*) $tmp135));
bool $tmp140 = $tmp139.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp135)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp132)));
if ($tmp140) goto block5; else goto block7;
block5:;
// line 154
frost$core$Int32$nullable $tmp141 = *(&local1);
int32_t $tmp142 = ((frost$core$Int32) $tmp141.value).value;
frost$core$Int64 $tmp143 = (frost$core$Int64) {((int64_t) $tmp142)};
frost$core$Int64 $tmp144 = (frost$core$Int64) {32};
frost$core$Int64 $tmp145 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp143, $tmp144);
frost$core$Int32$nullable $tmp146 = *(&local0);
frost$core$Int64 $tmp147 = frost$core$Int64$init$frost$core$Int32(((frost$core$Int32) $tmp146.value));
int64_t $tmp148 = $tmp145.value;
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148 + $tmp149;
frost$core$Int64 $tmp151 = (frost$core$Int64) {$tmp150};
return ((frost$core$Int64$nullable) { $tmp151, true });
block7:;
// line 1
// line 157
frost$core$Int32$nullable $tmp152 = *(&local0);
int32_t $tmp153 = ((frost$core$Int32) $tmp152.value).value;
frost$core$Int64 $tmp154 = (frost$core$Int64) {((int64_t) $tmp153)};
frost$core$Int64 $tmp155 = (frost$core$Int64) {32};
frost$core$Int64 $tmp156 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp154, $tmp155);
frost$core$Int32$nullable $tmp157 = *(&local1);
frost$core$Int64 $tmp158 = frost$core$Int64$init$frost$core$Int32(((frost$core$Int32) $tmp157.value));
int64_t $tmp159 = $tmp156.value;
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159 + $tmp160;
frost$core$Int64 $tmp162 = (frost$core$Int64) {$tmp161};
return ((frost$core$Int64$nullable) { $tmp162, true });
block6:;
goto block8;
block8:;

}
frost$core$Char8$nullable frost$io$InputStream$read$R$frost$core$Char8$Q(frost$io$InputStream* param0) {

frost$core$UInt8$nullable local0;
// line 165
$fn164 $tmp163 = ($fn164) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp165 = $tmp163(param0);
*(&local0) = $tmp165;
// line 166
frost$core$UInt8$nullable $tmp166 = *(&local0);
frost$core$Bit $tmp167 = frost$core$Bit$init$builtin_bit($tmp166.nonnull);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block1; else goto block2;
block1:;
// line 167
frost$core$UInt8$nullable $tmp169 = *(&local0);
frost$core$Char8 $tmp170 = frost$core$Char8$init$frost$core$UInt8(((frost$core$UInt8) $tmp169.value));
return ((frost$core$Char8$nullable) { ((frost$core$Char8) ((frost$core$Char8$nullable) { $tmp170, true }).value), true });
block2:;
// line 169
return ((frost$core$Char8$nullable) { .nonnull = false });

}
frost$core$Int64 frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$InputStream* param0, frost$core$UInt8* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$UInt8$nullable local2;
// line 179
frost$core$Int64 $tmp171 = (frost$core$Int64) {0};
*(&local1) = $tmp171;
// line 180
goto block4;
block4:;
frost$core$Int64 $tmp172 = *(&local1);
int64_t $tmp173 = $tmp172.value;
int64_t $tmp174 = param2.value;
bool $tmp175 = $tmp173 < $tmp174;
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175};
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block5; else goto block6;
block5:;
// line 181
$fn179 $tmp178 = ($fn179) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp180 = $tmp178(param0);
*(&local2) = $tmp180;
// line 182
frost$core$UInt8$nullable $tmp181 = *(&local2);
frost$core$Bit $tmp182 = frost$core$Bit$init$builtin_bit(!$tmp181.nonnull);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block7; else goto block8;
block7:;
// line 183
goto block6;
block8:;
// line 185
frost$core$Int64 $tmp184 = *(&local1);
frost$core$UInt8$nullable $tmp185 = *(&local2);
int64_t $tmp186 = $tmp184.value;
param1[$tmp186] = ((frost$core$UInt8) $tmp185.value);
// line 186
frost$core$Int64 $tmp187 = *(&local1);
frost$core$Int64 $tmp188 = (frost$core$Int64) {1};
int64_t $tmp189 = $tmp187.value;
int64_t $tmp190 = $tmp188.value;
int64_t $tmp191 = $tmp189 + $tmp190;
frost$core$Int64 $tmp192 = (frost$core$Int64) {$tmp191};
*(&local1) = $tmp192;
goto block4;
block6:;
// line 188
frost$core$Int64 $tmp193 = *(&local1);
*(&local0) = $tmp193;
goto block1;
block1:;
frost$core$Int64 $tmp194 = *(&local0);
frost$core$Int64 $tmp195 = (frost$core$Int64) {0};
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195.value;
bool $tmp198 = $tmp196 >= $tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block2; else goto block3;
block2:;
frost$core$Int64 $tmp201 = *(&local0);
return $tmp201;
block3:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {178};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s203, $tmp202, &$s204);
abort(); // unreachable

}
frost$core$Int64 frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$InputStream* param0, frost$core$Int8* param1, frost$core$Int64 param2) {

// line 196
$fn206 $tmp205 = ($fn206) param0->$class->vtable[11];
frost$core$Int64 $tmp207 = $tmp205(param0, ((frost$core$UInt8*) param1), param2);
return $tmp207;

}
frost$core$Int64 frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$InputStream* param0, frost$core$Char8* param1, frost$core$Int64 param2) {

// line 204
$fn209 $tmp208 = ($fn209) param0->$class->vtable[11];
frost$core$Int64 $tmp210 = $tmp208(param0, ((frost$core$UInt8*) param1), param2);
return $tmp210;

}
frost$core$String* frost$io$InputStream$readFully$R$frost$core$String(frost$io$InputStream* param0) {

frost$core$Int64 local0;
frost$core$MutableString* local1 = NULL;
frost$core$UInt8* local2;
frost$core$Int64 local3;
// line 214
frost$core$Int64 $tmp211 = (frost$core$Int64) {2048};
*(&local0) = $tmp211;
// line 215
frost$core$MutableString* $tmp212 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp212);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$MutableString* $tmp213 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local1) = $tmp212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// line 216
frost$core$Int64 $tmp214 = *(&local0);
int64_t $tmp215 = $tmp214.value;
frost$core$UInt8* $tmp216 = ((frost$core$UInt8*) frostAlloc($tmp215 * 1));
*(&local2) = $tmp216;
// line 217
goto block1;
block1:;
// line 218
frost$core$UInt8* $tmp217 = *(&local2);
frost$core$Int64 $tmp218 = *(&local0);
$fn220 $tmp219 = ($fn220) param0->$class->vtable[11];
frost$core$Int64 $tmp221 = $tmp219(param0, $tmp217, $tmp218);
*(&local3) = $tmp221;
// line 219
frost$core$Int64 $tmp222 = *(&local3);
frost$core$Int64 $tmp223 = (frost$core$Int64) {0};
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223.value;
bool $tmp226 = $tmp224 <= $tmp225;
frost$core$Bit $tmp227 = (frost$core$Bit) {$tmp226};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block3; else goto block4;
block3:;
// line 220
goto block2;
block4:;
// line 222
frost$core$MutableString* $tmp229 = *(&local1);
frost$core$UInt8* $tmp230 = *(&local2);
frost$core$Int64 $tmp231 = *(&local3);
frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp229, ((frost$core$Char8*) $tmp230), $tmp231);
goto block1;
block2:;
// line 224
frost$core$UInt8* $tmp232 = *(&local2);
frostFree($tmp232);
// line 225
frost$core$MutableString* $tmp233 = *(&local1);
frost$core$String* $tmp234 = frost$core$MutableString$finish$R$frost$core$String($tmp233);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$MutableString* $tmp235 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp234;

}
frost$collections$Array* frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT(frost$io$InputStream* param0) {

frost$core$Int64 local0;
frost$collections$Array* local1 = NULL;
frost$core$UInt8* local2;
frost$core$Int64 local3;
frost$core$Int64 local4;
// line 234
frost$core$Int64 $tmp236 = (frost$core$Int64) {2048};
*(&local0) = $tmp236;
// line 235
frost$collections$Array* $tmp237 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp237);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$collections$Array* $tmp238 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local1) = $tmp237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// line 236
frost$core$Int64 $tmp239 = *(&local0);
int64_t $tmp240 = $tmp239.value;
frost$core$UInt8* $tmp241 = ((frost$core$UInt8*) frostAlloc($tmp240 * 1));
*(&local2) = $tmp241;
// line 237
goto block1;
block1:;
// line 238
frost$core$UInt8* $tmp242 = *(&local2);
frost$core$Int64 $tmp243 = *(&local0);
$fn245 $tmp244 = ($fn245) param0->$class->vtable[11];
frost$core$Int64 $tmp246 = $tmp244(param0, $tmp242, $tmp243);
*(&local3) = $tmp246;
// line 239
frost$core$Int64 $tmp247 = *(&local3);
frost$core$Int64 $tmp248 = (frost$core$Int64) {0};
int64_t $tmp249 = $tmp247.value;
int64_t $tmp250 = $tmp248.value;
bool $tmp251 = $tmp249 <= $tmp250;
frost$core$Bit $tmp252 = (frost$core$Bit) {$tmp251};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block3; else goto block4;
block3:;
// line 240
goto block2;
block4:;
// line 243
frost$core$Int64 $tmp254 = (frost$core$Int64) {0};
frost$core$Int64 $tmp255 = *(&local3);
frost$core$Bit $tmp256 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp257 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp254, $tmp255, $tmp256);
frost$core$Int64 $tmp258 = $tmp257.min;
*(&local4) = $tmp258;
frost$core$Int64 $tmp259 = $tmp257.max;
frost$core$Bit $tmp260 = $tmp257.inclusive;
bool $tmp261 = $tmp260.value;
frost$core$Int64 $tmp262 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp263 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp262);
if ($tmp261) goto block8; else goto block9;
block8:;
int64_t $tmp264 = $tmp258.value;
int64_t $tmp265 = $tmp259.value;
bool $tmp266 = $tmp264 <= $tmp265;
frost$core$Bit $tmp267 = (frost$core$Bit) {$tmp266};
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block5; else goto block6;
block9:;
int64_t $tmp269 = $tmp258.value;
int64_t $tmp270 = $tmp259.value;
bool $tmp271 = $tmp269 < $tmp270;
frost$core$Bit $tmp272 = (frost$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block5; else goto block6;
block5:;
// line 244
frost$collections$Array* $tmp274 = *(&local1);
frost$core$UInt8* $tmp275 = *(&local2);
frost$core$Int64 $tmp276 = *(&local4);
int64_t $tmp277 = $tmp276.value;
frost$core$UInt8 $tmp278 = $tmp275[$tmp277];
frost$core$UInt8$wrapper* $tmp279;
$tmp279 = (frost$core$UInt8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp279->value = $tmp278;
frost$collections$Array$add$frost$collections$Array$T($tmp274, ((frost$core$Object*) $tmp279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
goto block7;
block7:;
frost$core$Int64 $tmp280 = *(&local4);
int64_t $tmp281 = $tmp259.value;
int64_t $tmp282 = $tmp280.value;
int64_t $tmp283 = $tmp281 - $tmp282;
frost$core$Int64 $tmp284 = (frost$core$Int64) {$tmp283};
frost$core$UInt64 $tmp285 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp284);
if ($tmp261) goto block11; else goto block12;
block11:;
uint64_t $tmp286 = $tmp285.value;
uint64_t $tmp287 = $tmp263.value;
bool $tmp288 = $tmp286 >= $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block10; else goto block6;
block12:;
uint64_t $tmp291 = $tmp285.value;
uint64_t $tmp292 = $tmp263.value;
bool $tmp293 = $tmp291 > $tmp292;
frost$core$Bit $tmp294 = (frost$core$Bit) {$tmp293};
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block10; else goto block6;
block10:;
int64_t $tmp296 = $tmp280.value;
int64_t $tmp297 = $tmp262.value;
int64_t $tmp298 = $tmp296 + $tmp297;
frost$core$Int64 $tmp299 = (frost$core$Int64) {$tmp298};
*(&local4) = $tmp299;
goto block5;
block6:;
goto block1;
block2:;
// line 247
frost$core$UInt8* $tmp300 = *(&local2);
frostFree($tmp300);
// line 248
frost$collections$Array* $tmp301 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$collections$Array* $tmp302 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp301;

}
frost$core$String* frost$io$InputStream$readLine$R$frost$core$String$Q(frost$io$InputStream* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Char8$nullable local1;
// line 257
frost$core$MutableString* $tmp303 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp303);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$MutableString* $tmp304 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local0) = $tmp303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// line 258
goto block1;
block1:;
// line 259
$fn306 $tmp305 = ($fn306) param0->$class->vtable[10];
frost$core$Char8$nullable $tmp307 = $tmp305(param0);
*(&local1) = $tmp307;
// line 260
frost$core$Char8$nullable $tmp308 = *(&local1);
frost$core$Bit $tmp309 = frost$core$Bit$init$builtin_bit(!$tmp308.nonnull);
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block3; else goto block4;
block3:;
// line 261
frost$core$MutableString* $tmp311 = *(&local0);
frost$core$Int64* $tmp312 = &$tmp311->_length;
frost$core$Int64 $tmp313 = *$tmp312;
frost$core$Int64 $tmp314 = (frost$core$Int64) {0};
frost$core$Bit $tmp315 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp313, $tmp314);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block5; else goto block6;
block5:;
// line 262
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp317 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block6:;
// line 264
goto block2;
block4:;
// line 266
frost$core$Char8$nullable $tmp318 = *(&local1);
frost$core$UInt8 $tmp319 = (frost$core$UInt8) {10};
frost$core$Char8 $tmp320 = frost$core$Char8$init$frost$core$UInt8($tmp319);
frost$core$Bit $tmp321 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8) $tmp318.value), $tmp320);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block7; else goto block8;
block7:;
// line 267
frost$core$MutableString* $tmp323 = *(&local0);
frost$core$Int64* $tmp324 = &$tmp323->_length;
frost$core$Int64 $tmp325 = *$tmp324;
frost$core$Int64 $tmp326 = (frost$core$Int64) {0};
int64_t $tmp327 = $tmp325.value;
int64_t $tmp328 = $tmp326.value;
bool $tmp329 = $tmp327 > $tmp328;
frost$core$Bit $tmp330 = (frost$core$Bit) {$tmp329};
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block11; else goto block10;
block11:;
frost$core$MutableString* $tmp332 = *(&local0);
frost$core$MutableString* $tmp333 = *(&local0);
frost$core$MutableString* $tmp334 = *(&local0);
frost$core$MutableString$Index $tmp335 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index($tmp334);
frost$core$MutableString$Index $tmp336 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index($tmp333, $tmp335);
frost$core$Char32 $tmp337 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32($tmp332, $tmp336);
frost$core$Int32 $tmp338 = (frost$core$Int32) {13};
frost$core$Char32 $tmp339 = frost$core$Char32$init$frost$core$Int32($tmp338);
frost$core$Bit $tmp340 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp337, $tmp339);
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block9; else goto block10;
block9:;
// line 268
frost$core$MutableString* $tmp342 = *(&local0);
frost$core$Int64* $tmp343 = &$tmp342->_length;
frost$core$Int64 $tmp344 = *$tmp343;
frost$core$Int64 $tmp345 = (frost$core$Int64) {1};
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345.value;
int64_t $tmp348 = $tmp346 - $tmp347;
frost$core$Int64 $tmp349 = (frost$core$Int64) {$tmp348};
frost$core$Int64* $tmp350 = &$tmp342->_length;
*$tmp350 = $tmp349;
goto block10;
block10:;
// line 270
goto block2;
block8:;
// line 272
frost$core$MutableString* $tmp351 = *(&local0);
frost$core$Char8$nullable $tmp352 = *(&local1);
frost$core$MutableString$append$frost$core$Char8($tmp351, ((frost$core$Char8) $tmp352.value));
goto block1;
block2:;
// line 274
frost$core$MutableString* $tmp353 = *(&local0);
frost$core$String* $tmp354 = frost$core$MutableString$finish$R$frost$core$String($tmp353);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$MutableString* $tmp355 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp354;

}
frost$core$Maybe* frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int64$GT(frost$io$InputStream* param0, frost$io$OutputStream* param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$UInt8* local2;
frost$core$Int64 local3;
frost$core$Error* local4 = NULL;
// line 283
frost$core$Int64 $tmp356 = (frost$core$Int64) {0};
*(&local0) = $tmp356;
// line 284
frost$core$Int64 $tmp357 = (frost$core$Int64) {2048};
*(&local1) = $tmp357;
// line 285
frost$core$Int64 $tmp358 = *(&local1);
int64_t $tmp359 = $tmp358.value;
frost$core$UInt8* $tmp360 = ((frost$core$UInt8*) frostAlloc($tmp359 * 1));
*(&local2) = $tmp360;
// line 286
goto block1;
block1:;
// line 287
frost$core$UInt8* $tmp361 = *(&local2);
frost$core$Int64 $tmp362 = *(&local1);
$fn364 $tmp363 = ($fn364) param0->$class->vtable[11];
frost$core$Int64 $tmp365 = $tmp363(param0, $tmp361, $tmp362);
*(&local3) = $tmp365;
// line 288
frost$core$Int64 $tmp366 = *(&local3);
frost$core$Int64 $tmp367 = (frost$core$Int64) {0};
int64_t $tmp368 = $tmp366.value;
int64_t $tmp369 = $tmp367.value;
bool $tmp370 = $tmp368 <= $tmp369;
frost$core$Bit $tmp371 = (frost$core$Bit) {$tmp370};
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block3; else goto block4;
block3:;
// line 289
goto block2;
block4:;
// line 291
frost$core$Int64 $tmp373 = *(&local0);
frost$core$Int64 $tmp374 = *(&local3);
int64_t $tmp375 = $tmp373.value;
int64_t $tmp376 = $tmp374.value;
int64_t $tmp377 = $tmp375 + $tmp376;
frost$core$Int64 $tmp378 = (frost$core$Int64) {$tmp377};
*(&local0) = $tmp378;
// line 292
frost$core$UInt8* $tmp379 = *(&local2);
frost$core$Int64 $tmp380 = *(&local3);
$fn382 $tmp381 = ($fn382) param1->$class->vtable[10];
frost$core$Error* $tmp383 = $tmp381(param1, $tmp379, $tmp380);
*(&local4) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Error* $tmp384 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local4) = $tmp383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
// line 293
frost$core$Error* $tmp385 = *(&local4);
frost$core$Bit $tmp386 = frost$core$Bit$init$builtin_bit($tmp385 != NULL);
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block5; else goto block6;
block5:;
// line 294
frost$core$Maybe* $tmp388 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp389 = (frost$core$Int64) {1};
frost$core$Error* $tmp390 = *(&local4);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp388, $tmp389, $tmp390);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Error* $tmp391 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local4) = ((frost$core$Error*) NULL);
return $tmp388;
block6:;
frost$core$Error* $tmp392 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local4) = ((frost$core$Error*) NULL);
goto block1;
block2:;
// line 297
frost$core$UInt8* $tmp393 = *(&local2);
frostFree($tmp393);
// line 298
frost$core$Maybe* $tmp394 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp395 = (frost$core$Int64) {0};
frost$core$Int64 $tmp396 = *(&local0);
frost$core$Int64$wrapper* $tmp397;
$tmp397 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp397->value = $tmp396;
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp394, $tmp395, ((frost$core$Object*) $tmp397));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
return $tmp394;

}
frost$collections$Iterator* frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT(frost$io$InputStream* param0) {

// line 306
frost$io$InputStream$LineIterator* $tmp398 = (frost$io$InputStream$LineIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$io$InputStream$LineIterator$class);
frost$io$InputStream$LineIterator$init$frost$io$InputStream($tmp398, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp398)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
return ((frost$collections$Iterator*) $tmp398);

}
frost$core$Error* frost$io$InputStream$close$R$frost$core$Error$Q(frost$io$InputStream* param0) {

// line 310
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
void frost$io$InputStream$init(frost$io$InputStream* param0) {

// line 14
frost$core$Int64 $tmp399 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp400 = frost$io$ByteOrder$init$frost$core$Int64($tmp399);
frost$io$ByteOrder* $tmp401 = &param0->byteOrder;
*$tmp401 = $tmp400;
return;

}
void frost$io$InputStream$cleanup(frost$io$InputStream* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

