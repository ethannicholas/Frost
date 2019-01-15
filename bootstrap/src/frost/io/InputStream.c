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
#include "frost/io/OutputStream.h"
#include "frost/collections/Iterator.h"
#include "frost/io/InputStream/LineIterator.h"


static frost$core$String $s1;
frost$io$InputStream$class_type frost$io$InputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$io$InputStream$cleanup, NULL, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Int64, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close} };

typedef frost$core$Int16$nullable (*$fn3)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn11)(frost$io$InputStream*);
typedef frost$core$Int64$nullable (*$fn19)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn27)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn35)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn41)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn54)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int16$nullable (*$fn83)(frost$io$InputStream*);
typedef frost$core$Int16$nullable (*$fn89)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn102)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int32$nullable (*$fn129)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn135)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn148)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$UInt8$nullable (*$fn179)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn194)(frost$io$InputStream*);
typedef frost$core$Int64 (*$fn210)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Int64 (*$fn213)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Int64 (*$fn224)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Int64 (*$fn249)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Char8$nullable (*$fn310)(frost$io$InputStream*);
typedef frost$core$Int64 (*$fn369)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int64);
typedef void (*$fn387)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -5494188274558096821, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 5988084942103078614, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 444528001966893676, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 662755659477810069, NULL };

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
frost$core$UInt16 $tmp9 = frost$core$Int16$convert$R$frost$core$UInt16($tmp8);
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
frost$core$UInt32 $tmp17 = frost$core$Int32$convert$R$frost$core$UInt32($tmp16);
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
frost$core$UInt64 $tmp25 = frost$core$Int64$convert$R$frost$core$UInt64($tmp24);
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
frost$core$Int8 $tmp33 = frost$core$UInt8$convert$R$frost$core$Int8(((frost$core$UInt8) $tmp32.value));
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
// unreffing REF($31:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp48)));
// unreffing REF($27:frost.core.Equatable<frost.io.ByteOrder>)
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
frost$core$Int16 $tmp66 = frost$core$UInt32$convert$R$frost$core$Int16($tmp65);
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
frost$core$Int16 $tmp76 = frost$core$UInt32$convert$R$frost$core$Int16($tmp75);
return ((frost$core$Int16$nullable) { $tmp76, true });
block6:;
frost$core$Bit $tmp77 = frost$core$Bit$init$builtin_bit(false);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp79 = (frost$core$Int64) {102};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s80, $tmp79, &$s81);
abort(); // unreachable
block8:;
abort(); // unreachable

}
frost$core$Int32$nullable frost$io$InputStream$read$R$frost$core$Int32$Q(frost$io$InputStream* param0) {

frost$core$Int16$nullable local0;
frost$core$Int16$nullable local1;
// line 124
$fn83 $tmp82 = ($fn83) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp84 = $tmp82(param0);
*(&local0) = $tmp84;
// line 125
frost$core$Int16$nullable $tmp85 = *(&local0);
frost$core$Bit $tmp86 = frost$core$Bit$init$builtin_bit(!$tmp85.nonnull);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block1; else goto block2;
block1:;
// line 126
return ((frost$core$Int32$nullable) { .nonnull = false });
block2:;
// line 128
$fn89 $tmp88 = ($fn89) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp90 = $tmp88(param0);
*(&local1) = $tmp90;
// line 129
frost$core$Int16$nullable $tmp91 = *(&local1);
frost$core$Bit $tmp92 = frost$core$Bit$init$builtin_bit(!$tmp91.nonnull);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block3; else goto block4;
block3:;
// line 130
return ((frost$core$Int32$nullable) { .nonnull = false });
block4:;
// line 132
frost$io$ByteOrder* $tmp94 = &param0->byteOrder;
frost$io$ByteOrder $tmp95 = *$tmp94;
frost$io$ByteOrder$wrapper* $tmp96;
$tmp96 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp96->value = $tmp95;
frost$core$Int64 $tmp97 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp98 = frost$io$ByteOrder$init$frost$core$Int64($tmp97);
frost$io$ByteOrder$wrapper* $tmp99;
$tmp99 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp99->value = $tmp98;
ITable* $tmp100 = ((frost$core$Equatable*) $tmp96)->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[0];
frost$core$Bit $tmp103 = $tmp101(((frost$core$Equatable*) $tmp96), ((frost$core$Equatable*) $tmp99));
bool $tmp104 = $tmp103.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp99)));
// unreffing REF($31:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp96)));
// unreffing REF($27:frost.core.Equatable<frost.io.ByteOrder>)
if ($tmp104) goto block5; else goto block7;
block5:;
// line 133
frost$core$Int16$nullable $tmp105 = *(&local1);
frost$core$Int16 $tmp106 = (frost$core$Int16) {16};
frost$core$Int32 $tmp107 = frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16) $tmp105.value), $tmp106);
frost$core$Int16$nullable $tmp108 = *(&local0);
frost$core$Int32 $tmp109 = frost$core$Int32$init$frost$core$Int16(((frost$core$Int16) $tmp108.value));
int32_t $tmp110 = $tmp107.value;
int32_t $tmp111 = $tmp109.value;
int32_t $tmp112 = $tmp110 + $tmp111;
frost$core$Int32 $tmp113 = (frost$core$Int32) {$tmp112};
return ((frost$core$Int32$nullable) { $tmp113, true });
block7:;
// line 1
// line 136
frost$core$Int16$nullable $tmp114 = *(&local0);
frost$core$Int16 $tmp115 = (frost$core$Int16) {16};
frost$core$Int32 $tmp116 = frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16) $tmp114.value), $tmp115);
frost$core$Int16$nullable $tmp117 = *(&local1);
frost$core$Int32 $tmp118 = frost$core$Int32$init$frost$core$Int16(((frost$core$Int16) $tmp117.value));
int32_t $tmp119 = $tmp116.value;
int32_t $tmp120 = $tmp118.value;
int32_t $tmp121 = $tmp119 + $tmp120;
frost$core$Int32 $tmp122 = (frost$core$Int32) {$tmp121};
return ((frost$core$Int32$nullable) { $tmp122, true });
block6:;
frost$core$Bit $tmp123 = frost$core$Bit$init$builtin_bit(false);
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp125 = (frost$core$Int64) {123};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s126, $tmp125, &$s127);
abort(); // unreachable
block8:;
abort(); // unreachable

}
frost$core$Int64$nullable frost$io$InputStream$read$R$frost$core$Int64$Q(frost$io$InputStream* param0) {

frost$core$Int32$nullable local0;
frost$core$Int32$nullable local1;
// line 145
$fn129 $tmp128 = ($fn129) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp130 = $tmp128(param0);
*(&local0) = $tmp130;
// line 146
frost$core$Int32$nullable $tmp131 = *(&local0);
frost$core$Bit $tmp132 = frost$core$Bit$init$builtin_bit(!$tmp131.nonnull);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block1; else goto block2;
block1:;
// line 147
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 149
$fn135 $tmp134 = ($fn135) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp136 = $tmp134(param0);
*(&local1) = $tmp136;
// line 150
frost$core$Int32$nullable $tmp137 = *(&local1);
frost$core$Bit $tmp138 = frost$core$Bit$init$builtin_bit(!$tmp137.nonnull);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block3; else goto block4;
block3:;
// line 151
return ((frost$core$Int64$nullable) { .nonnull = false });
block4:;
// line 153
frost$io$ByteOrder* $tmp140 = &param0->byteOrder;
frost$io$ByteOrder $tmp141 = *$tmp140;
frost$io$ByteOrder$wrapper* $tmp142;
$tmp142 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp142->value = $tmp141;
frost$core$Int64 $tmp143 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp144 = frost$io$ByteOrder$init$frost$core$Int64($tmp143);
frost$io$ByteOrder$wrapper* $tmp145;
$tmp145 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp145->value = $tmp144;
ITable* $tmp146 = ((frost$core$Equatable*) $tmp142)->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
frost$core$Bit $tmp149 = $tmp147(((frost$core$Equatable*) $tmp142), ((frost$core$Equatable*) $tmp145));
bool $tmp150 = $tmp149.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp145)));
// unreffing REF($31:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp142)));
// unreffing REF($27:frost.core.Equatable<frost.io.ByteOrder>)
if ($tmp150) goto block5; else goto block7;
block5:;
// line 154
frost$core$Int32$nullable $tmp151 = *(&local1);
int32_t $tmp152 = ((frost$core$Int32) $tmp151.value).value;
frost$core$Int64 $tmp153 = (frost$core$Int64) {((int64_t) $tmp152)};
frost$core$Int64 $tmp154 = (frost$core$Int64) {32};
frost$core$Int64 $tmp155 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp153, $tmp154);
frost$core$Int32$nullable $tmp156 = *(&local0);
frost$core$Int64 $tmp157 = frost$core$Int64$init$frost$core$Int32(((frost$core$Int32) $tmp156.value));
int64_t $tmp158 = $tmp155.value;
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158 + $tmp159;
frost$core$Int64 $tmp161 = (frost$core$Int64) {$tmp160};
return ((frost$core$Int64$nullable) { $tmp161, true });
block7:;
// line 1
// line 157
frost$core$Int32$nullable $tmp162 = *(&local0);
int32_t $tmp163 = ((frost$core$Int32) $tmp162.value).value;
frost$core$Int64 $tmp164 = (frost$core$Int64) {((int64_t) $tmp163)};
frost$core$Int64 $tmp165 = (frost$core$Int64) {32};
frost$core$Int64 $tmp166 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp164, $tmp165);
frost$core$Int32$nullable $tmp167 = *(&local1);
frost$core$Int64 $tmp168 = frost$core$Int64$init$frost$core$Int32(((frost$core$Int32) $tmp167.value));
int64_t $tmp169 = $tmp166.value;
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169 + $tmp170;
frost$core$Int64 $tmp172 = (frost$core$Int64) {$tmp171};
return ((frost$core$Int64$nullable) { $tmp172, true });
block6:;
frost$core$Bit $tmp173 = frost$core$Bit$init$builtin_bit(false);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp175 = (frost$core$Int64) {144};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s176, $tmp175, &$s177);
abort(); // unreachable
block8:;
abort(); // unreachable

}
frost$core$Char8$nullable frost$io$InputStream$read$R$frost$core$Char8$Q(frost$io$InputStream* param0) {

frost$core$UInt8$nullable local0;
// line 165
$fn179 $tmp178 = ($fn179) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp180 = $tmp178(param0);
*(&local0) = $tmp180;
// line 166
frost$core$UInt8$nullable $tmp181 = *(&local0);
frost$core$Bit $tmp182 = frost$core$Bit$init$builtin_bit($tmp181.nonnull);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block1; else goto block2;
block1:;
// line 167
frost$core$UInt8$nullable $tmp184 = *(&local0);
frost$core$Char8 $tmp185 = frost$core$Char8$init$frost$core$UInt8(((frost$core$UInt8) $tmp184.value));
return ((frost$core$Char8$nullable) { ((frost$core$Char8) ((frost$core$Char8$nullable) { $tmp185, true }).value), true });
block2:;
// line 169
return ((frost$core$Char8$nullable) { .nonnull = false });

}
frost$core$Int64 frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$InputStream* param0, frost$core$UInt8* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
frost$core$UInt8$nullable local1;
// line 179
frost$core$Int64 $tmp186 = (frost$core$Int64) {0};
*(&local0) = $tmp186;
// line 180
goto block1;
block1:;
frost$core$Int64 $tmp187 = *(&local0);
int64_t $tmp188 = $tmp187.value;
int64_t $tmp189 = param2.value;
bool $tmp190 = $tmp188 < $tmp189;
frost$core$Bit $tmp191 = (frost$core$Bit) {$tmp190};
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block2; else goto block3;
block2:;
// line 181
$fn194 $tmp193 = ($fn194) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp195 = $tmp193(param0);
*(&local1) = $tmp195;
// line 182
frost$core$UInt8$nullable $tmp196 = *(&local1);
frost$core$Bit $tmp197 = frost$core$Bit$init$builtin_bit(!$tmp196.nonnull);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block4; else goto block5;
block4:;
// line 183
goto block3;
block5:;
// line 185
frost$core$Int64 $tmp199 = *(&local0);
frost$core$UInt8$nullable $tmp200 = *(&local1);
int64_t $tmp201 = $tmp199.value;
param1[$tmp201] = ((frost$core$UInt8) $tmp200.value);
// line 186
frost$core$Int64 $tmp202 = *(&local0);
frost$core$Int64 $tmp203 = (frost$core$Int64) {1};
int64_t $tmp204 = $tmp202.value;
int64_t $tmp205 = $tmp203.value;
int64_t $tmp206 = $tmp204 + $tmp205;
frost$core$Int64 $tmp207 = (frost$core$Int64) {$tmp206};
*(&local0) = $tmp207;
goto block1;
block3:;
// line 188
frost$core$Int64 $tmp208 = *(&local0);
return $tmp208;

}
frost$core$Int64 frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$InputStream* param0, frost$core$Int8* param1, frost$core$Int64 param2) {

// line 196
$fn210 $tmp209 = ($fn210) param0->$class->vtable[11];
frost$core$Int64 $tmp211 = $tmp209(param0, ((frost$core$UInt8*) param1), param2);
return $tmp211;

}
frost$core$Int64 frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$InputStream* param0, frost$core$Char8* param1, frost$core$Int64 param2) {

// line 204
$fn213 $tmp212 = ($fn213) param0->$class->vtable[11];
frost$core$Int64 $tmp214 = $tmp212(param0, ((frost$core$UInt8*) param1), param2);
return $tmp214;

}
frost$core$String* frost$io$InputStream$readFully$R$frost$core$String(frost$io$InputStream* param0) {

frost$core$Int64 local0;
frost$core$MutableString* local1 = NULL;
frost$core$UInt8* local2;
frost$core$Int64 local3;
// line 214
frost$core$Int64 $tmp215 = (frost$core$Int64) {2048};
*(&local0) = $tmp215;
// line 215
frost$core$MutableString* $tmp216 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp216);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$MutableString* $tmp217 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local1) = $tmp216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// unreffing REF($4:frost.core.MutableString)
// line 216
frost$core$Int64 $tmp218 = *(&local0);
int64_t $tmp219 = $tmp218.value;
frost$core$UInt8* $tmp220 = ((frost$core$UInt8*) frostZAlloc($tmp219 * 1));
*(&local2) = $tmp220;
// line 217
goto block1;
block1:;
// line 218
frost$core$UInt8* $tmp221 = *(&local2);
frost$core$Int64 $tmp222 = *(&local0);
$fn224 $tmp223 = ($fn224) param0->$class->vtable[11];
frost$core$Int64 $tmp225 = $tmp223(param0, $tmp221, $tmp222);
*(&local3) = $tmp225;
// line 219
frost$core$Int64 $tmp226 = *(&local3);
frost$core$Int64 $tmp227 = (frost$core$Int64) {0};
int64_t $tmp228 = $tmp226.value;
int64_t $tmp229 = $tmp227.value;
bool $tmp230 = $tmp228 <= $tmp229;
frost$core$Bit $tmp231 = (frost$core$Bit) {$tmp230};
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block3; else goto block4;
block3:;
// line 220
goto block2;
block4:;
// line 222
frost$core$MutableString* $tmp233 = *(&local1);
frost$core$UInt8* $tmp234 = *(&local2);
frost$core$Int64 $tmp235 = *(&local3);
frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp233, ((frost$core$Char8*) $tmp234), $tmp235);
goto block1;
block2:;
// line 224
frost$core$UInt8* $tmp236 = *(&local2);
frostFree($tmp236);
// line 225
frost$core$MutableString* $tmp237 = *(&local1);
frost$core$String* $tmp238 = frost$core$MutableString$finish$R$frost$core$String($tmp237);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing REF($52:frost.core.String)
frost$core$MutableString* $tmp239 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing result
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp238;

}
frost$collections$Array* frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT(frost$io$InputStream* param0) {

frost$core$Int64 local0;
frost$collections$Array* local1 = NULL;
frost$core$UInt8* local2;
frost$core$Int64 local3;
frost$core$Int64 local4;
// line 234
frost$core$Int64 $tmp240 = (frost$core$Int64) {2048};
*(&local0) = $tmp240;
// line 235
frost$collections$Array* $tmp241 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp241);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$collections$Array* $tmp242 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local1) = $tmp241;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// unreffing REF($4:frost.collections.Array<frost.core.UInt8>)
// line 236
frost$core$Int64 $tmp243 = *(&local0);
int64_t $tmp244 = $tmp243.value;
frost$core$UInt8* $tmp245 = ((frost$core$UInt8*) frostZAlloc($tmp244 * 1));
*(&local2) = $tmp245;
// line 237
goto block1;
block1:;
// line 238
frost$core$UInt8* $tmp246 = *(&local2);
frost$core$Int64 $tmp247 = *(&local0);
$fn249 $tmp248 = ($fn249) param0->$class->vtable[11];
frost$core$Int64 $tmp250 = $tmp248(param0, $tmp246, $tmp247);
*(&local3) = $tmp250;
// line 239
frost$core$Int64 $tmp251 = *(&local3);
frost$core$Int64 $tmp252 = (frost$core$Int64) {0};
int64_t $tmp253 = $tmp251.value;
int64_t $tmp254 = $tmp252.value;
bool $tmp255 = $tmp253 <= $tmp254;
frost$core$Bit $tmp256 = (frost$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block3; else goto block4;
block3:;
// line 240
goto block2;
block4:;
// line 243
frost$core$Int64 $tmp258 = (frost$core$Int64) {0};
frost$core$Int64 $tmp259 = *(&local3);
frost$core$Bit $tmp260 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp261 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp258, $tmp259, $tmp260);
frost$core$Int64 $tmp262 = $tmp261.min;
*(&local4) = $tmp262;
frost$core$Int64 $tmp263 = $tmp261.max;
frost$core$Bit $tmp264 = $tmp261.inclusive;
bool $tmp265 = $tmp264.value;
frost$core$Int64 $tmp266 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp267 = frost$core$Int64$convert$R$frost$core$UInt64($tmp266);
if ($tmp265) goto block8; else goto block9;
block8:;
int64_t $tmp268 = $tmp262.value;
int64_t $tmp269 = $tmp263.value;
bool $tmp270 = $tmp268 <= $tmp269;
frost$core$Bit $tmp271 = (frost$core$Bit) {$tmp270};
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block5; else goto block6;
block9:;
int64_t $tmp273 = $tmp262.value;
int64_t $tmp274 = $tmp263.value;
bool $tmp275 = $tmp273 < $tmp274;
frost$core$Bit $tmp276 = (frost$core$Bit) {$tmp275};
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block5; else goto block6;
block5:;
// line 244
frost$collections$Array* $tmp278 = *(&local1);
frost$core$UInt8* $tmp279 = *(&local2);
frost$core$Int64 $tmp280 = *(&local4);
int64_t $tmp281 = $tmp280.value;
frost$core$UInt8 $tmp282 = $tmp279[$tmp281];
frost$core$UInt8$wrapper* $tmp283;
$tmp283 = (frost$core$UInt8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp283->value = $tmp282;
frost$collections$Array$add$frost$collections$Array$T($tmp278, ((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// unreffing REF($73:frost.collections.Array.T)
goto block7;
block7:;
frost$core$Int64 $tmp284 = *(&local4);
int64_t $tmp285 = $tmp263.value;
int64_t $tmp286 = $tmp284.value;
int64_t $tmp287 = $tmp285 - $tmp286;
frost$core$Int64 $tmp288 = (frost$core$Int64) {$tmp287};
frost$core$UInt64 $tmp289 = frost$core$Int64$convert$R$frost$core$UInt64($tmp288);
if ($tmp265) goto block11; else goto block12;
block11:;
uint64_t $tmp290 = $tmp289.value;
uint64_t $tmp291 = $tmp267.value;
bool $tmp292 = $tmp290 >= $tmp291;
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292};
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block10; else goto block6;
block12:;
uint64_t $tmp295 = $tmp289.value;
uint64_t $tmp296 = $tmp267.value;
bool $tmp297 = $tmp295 > $tmp296;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block10; else goto block6;
block10:;
int64_t $tmp300 = $tmp284.value;
int64_t $tmp301 = $tmp266.value;
int64_t $tmp302 = $tmp300 + $tmp301;
frost$core$Int64 $tmp303 = (frost$core$Int64) {$tmp302};
*(&local4) = $tmp303;
goto block5;
block6:;
goto block1;
block2:;
// line 247
frost$core$UInt8* $tmp304 = *(&local2);
frostFree($tmp304);
// line 248
frost$collections$Array* $tmp305 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$collections$Array* $tmp306 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp305;

}
frost$core$String* frost$io$InputStream$readLine$R$frost$core$String$Q(frost$io$InputStream* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Char8$nullable local1;
frost$core$Bit local2;
// line 256
frost$core$MutableString* $tmp307 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp307);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$MutableString* $tmp308 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local0) = $tmp307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// unreffing REF($1:frost.core.MutableString)
// line 257
goto block1;
block1:;
// line 258
$fn310 $tmp309 = ($fn310) param0->$class->vtable[10];
frost$core$Char8$nullable $tmp311 = $tmp309(param0);
*(&local1) = $tmp311;
// line 259
frost$core$Char8$nullable $tmp312 = *(&local1);
frost$core$Bit $tmp313 = frost$core$Bit$init$builtin_bit(!$tmp312.nonnull);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block3; else goto block4;
block3:;
// line 260
frost$core$MutableString* $tmp315 = *(&local0);
frost$core$Int64* $tmp316 = &$tmp315->_length;
frost$core$Int64 $tmp317 = *$tmp316;
frost$core$Int64 $tmp318 = (frost$core$Int64) {0};
frost$core$Bit $tmp319 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp317, $tmp318);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block5; else goto block6;
block5:;
// line 261
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp321 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block6:;
// line 263
goto block2;
block4:;
// line 265
frost$core$Char8$nullable $tmp322 = *(&local1);
frost$core$UInt8 $tmp323 = (frost$core$UInt8) {10};
frost$core$Char8 $tmp324 = frost$core$Char8$init$frost$core$UInt8($tmp323);
frost$core$Bit $tmp325 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit(((frost$core$Char8) $tmp322.value), $tmp324);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block7; else goto block8;
block7:;
// line 266
frost$core$MutableString* $tmp327 = *(&local0);
frost$core$Int64* $tmp328 = &$tmp327->_length;
frost$core$Int64 $tmp329 = *$tmp328;
frost$core$Int64 $tmp330 = (frost$core$Int64) {0};
int64_t $tmp331 = $tmp329.value;
int64_t $tmp332 = $tmp330.value;
bool $tmp333 = $tmp331 > $tmp332;
frost$core$Bit $tmp334 = (frost$core$Bit) {$tmp333};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block11; else goto block12;
block11:;
frost$core$MutableString* $tmp336 = *(&local0);
frost$core$MutableString* $tmp337 = *(&local0);
frost$core$MutableString* $tmp338 = *(&local0);
frost$core$MutableString$Index $tmp339 = frost$core$MutableString$get_end$R$frost$core$MutableString$Index($tmp338);
frost$core$MutableString$Index $tmp340 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index($tmp337, $tmp339);
frost$core$Char32 $tmp341 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32($tmp336, $tmp340);
frost$core$Int32 $tmp342 = (frost$core$Int32) {13};
frost$core$Char32 $tmp343 = frost$core$Char32$init$frost$core$Int32($tmp342);
frost$core$Bit $tmp344 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp341, $tmp343);
*(&local2) = $tmp344;
goto block13;
block12:;
*(&local2) = $tmp334;
goto block13;
block13:;
frost$core$Bit $tmp345 = *(&local2);
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block9; else goto block10;
block9:;
// line 267
frost$core$MutableString* $tmp347 = *(&local0);
frost$core$Int64* $tmp348 = &$tmp347->_length;
frost$core$Int64 $tmp349 = *$tmp348;
frost$core$Int64 $tmp350 = (frost$core$Int64) {1};
int64_t $tmp351 = $tmp349.value;
int64_t $tmp352 = $tmp350.value;
int64_t $tmp353 = $tmp351 - $tmp352;
frost$core$Int64 $tmp354 = (frost$core$Int64) {$tmp353};
frost$core$Int64* $tmp355 = &$tmp347->_length;
*$tmp355 = $tmp354;
goto block10;
block10:;
// line 269
goto block2;
block8:;
// line 271
frost$core$MutableString* $tmp356 = *(&local0);
frost$core$Char8$nullable $tmp357 = *(&local1);
frost$core$MutableString$append$frost$core$Char8($tmp356, ((frost$core$Char8) $tmp357.value));
goto block1;
block2:;
// line 273
frost$core$MutableString* $tmp358 = *(&local0);
frost$core$String* $tmp359 = frost$core$MutableString$finish$R$frost$core$String($tmp358);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// unreffing REF($101:frost.core.String)
frost$core$MutableString* $tmp360 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp359;

}
frost$core$Int64 frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Int64(frost$io$InputStream* param0, frost$io$OutputStream* param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$UInt8* local2;
frost$core$Int64 local3;
// line 281
frost$core$Int64 $tmp361 = (frost$core$Int64) {0};
*(&local0) = $tmp361;
// line 282
frost$core$Int64 $tmp362 = (frost$core$Int64) {2048};
*(&local1) = $tmp362;
// line 283
frost$core$Int64 $tmp363 = *(&local1);
int64_t $tmp364 = $tmp363.value;
frost$core$UInt8* $tmp365 = ((frost$core$UInt8*) frostZAlloc($tmp364 * 1));
*(&local2) = $tmp365;
// line 284
goto block1;
block1:;
// line 285
frost$core$UInt8* $tmp366 = *(&local2);
frost$core$Int64 $tmp367 = *(&local1);
$fn369 $tmp368 = ($fn369) param0->$class->vtable[11];
frost$core$Int64 $tmp370 = $tmp368(param0, $tmp366, $tmp367);
*(&local3) = $tmp370;
// line 286
frost$core$Int64 $tmp371 = *(&local3);
frost$core$Int64 $tmp372 = (frost$core$Int64) {0};
int64_t $tmp373 = $tmp371.value;
int64_t $tmp374 = $tmp372.value;
bool $tmp375 = $tmp373 <= $tmp374;
frost$core$Bit $tmp376 = (frost$core$Bit) {$tmp375};
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block3; else goto block4;
block3:;
// line 287
goto block2;
block4:;
// line 289
frost$core$Int64 $tmp378 = *(&local0);
frost$core$Int64 $tmp379 = *(&local3);
int64_t $tmp380 = $tmp378.value;
int64_t $tmp381 = $tmp379.value;
int64_t $tmp382 = $tmp380 + $tmp381;
frost$core$Int64 $tmp383 = (frost$core$Int64) {$tmp382};
*(&local0) = $tmp383;
// line 290
frost$core$UInt8* $tmp384 = *(&local2);
frost$core$Int64 $tmp385 = *(&local3);
$fn387 $tmp386 = ($fn387) param1->$class->vtable[10];
$tmp386(param1, $tmp384, $tmp385);
goto block1;
block2:;
// line 292
frost$core$UInt8* $tmp388 = *(&local2);
frostFree($tmp388);
// line 293
frost$core$Int64 $tmp389 = *(&local0);
return $tmp389;

}
frost$collections$Iterator* frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT(frost$io$InputStream* param0) {

// line 300
frost$io$InputStream$LineIterator* $tmp390 = (frost$io$InputStream$LineIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$io$InputStream$LineIterator$class);
frost$io$InputStream$LineIterator$init$frost$io$InputStream($tmp390, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp390)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// unreffing REF($1:frost.io.InputStream.LineIterator)
return ((frost$collections$Iterator*) $tmp390);

}
void frost$io$InputStream$close(frost$io$InputStream* param0) {

return;

}
void frost$io$InputStream$init(frost$io$InputStream* param0) {

// line 14
frost$core$Int64 $tmp391 = (frost$core$Int64) {0};
frost$io$ByteOrder $tmp392 = frost$io$ByteOrder$init$frost$core$Int64($tmp391);
frost$io$ByteOrder* $tmp393 = &param0->byteOrder;
*$tmp393 = $tmp392;
return;

}
void frost$io$InputStream$cleanup(frost$io$InputStream* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

