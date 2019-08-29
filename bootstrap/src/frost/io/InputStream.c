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
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Char8.h"
#include "frost/core/MutableString.h"
#include "frost/collections/Array.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/MutableString/Index.h"
#include "frost/core/Char32.h"
#include "frost/core/Maybe.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Error.h"
#include "frost/collections/Iterator.h"
#include "frost/io/InputStream/LineIterator.h"


static frost$core$String $s1;
frost$io$InputStream$class_type frost$io$InputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$InputStream$cleanup, NULL, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q} };

typedef frost$core$Int16$nullable (*$fn3)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn12)(frost$io$InputStream*);
typedef frost$core$Int64$nullable (*$fn21)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn30)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn39)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn45)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn60)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int16$nullable (*$fn92)(frost$io$InputStream*);
typedef frost$core$Int16$nullable (*$fn98)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn113)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int32$nullable (*$fn141)(frost$io$InputStream*);
typedef frost$core$Int32$nullable (*$fn147)(frost$io$InputStream*);
typedef frost$core$Bit (*$fn162)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$UInt8$nullable (*$fn194)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn214)(frost$io$InputStream*);
typedef frost$core$Int (*$fn231)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn234)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn246)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn272)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Char8$nullable (*$fn332)(frost$io$InputStream*);
typedef frost$core$Int (*$fn404)(frost$io$InputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn427)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, 3191935231446009407, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, -5598996583363859745, NULL };

frost$core$UInt16$nullable frost$io$InputStream$read$R$frost$core$UInt16$Q(frost$io$InputStream* param0) {

frost$core$Int16 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:56
$fn3 $tmp2 = ($fn3) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp4 = $tmp2(param0);
*(&local0) = ((frost$core$Int16) $tmp4.value);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:57
frost$core$Int16 $tmp5 = *(&local0);
frost$core$Bit $tmp6 = (frost$core$Bit) {true};
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:58
frost$core$Int16 $tmp8 = *(&local0);
// begin inline call to function frost.core.Int16.get_asUInt16():frost.core.UInt16 from InputStream.frost:58:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int16.frost:1130
int16_t $tmp9 = $tmp8.value;
frost$core$UInt16 $tmp10 = (frost$core$UInt16) {((uint16_t) $tmp9)};
return ((frost$core$UInt16$nullable) { $tmp10, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:60
return ((frost$core$UInt16$nullable) { .nonnull = false });

}
frost$core$UInt32$nullable frost$io$InputStream$read$R$frost$core$UInt32$Q(frost$io$InputStream* param0) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:68
$fn12 $tmp11 = ($fn12) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp13 = $tmp11(param0);
*(&local0) = ((frost$core$Int32) $tmp13.value);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:69
frost$core$Int32 $tmp14 = *(&local0);
frost$core$Bit $tmp15 = (frost$core$Bit) {true};
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:70
frost$core$Int32 $tmp17 = *(&local0);
// begin inline call to function frost.core.Int32.get_asUInt32():frost.core.UInt32 from InputStream.frost:70:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1002
int32_t $tmp18 = $tmp17.value;
frost$core$UInt32 $tmp19 = (frost$core$UInt32) {((uint32_t) $tmp18)};
return ((frost$core$UInt32$nullable) { $tmp19, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:72
return ((frost$core$UInt32$nullable) { .nonnull = false });

}
frost$core$UInt64$nullable frost$io$InputStream$read$R$frost$core$UInt64$Q(frost$io$InputStream* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:80
$fn21 $tmp20 = ($fn21) param0->$class->vtable[9];
frost$core$Int64$nullable $tmp22 = $tmp20(param0);
*(&local0) = ((frost$core$Int64) $tmp22.value);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:81
frost$core$Int64 $tmp23 = *(&local0);
frost$core$Bit $tmp24 = (frost$core$Bit) {true};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:82
frost$core$Int64 $tmp26 = *(&local0);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from InputStream.frost:82:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp27 = $tmp26.value;
frost$core$UInt64 $tmp28 = (frost$core$UInt64) {((uint64_t) $tmp27)};
return ((frost$core$UInt64$nullable) { $tmp28, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:84
return ((frost$core$UInt64$nullable) { .nonnull = false });

}
frost$core$Int8$nullable frost$io$InputStream$read$R$frost$core$Int8$Q(frost$io$InputStream* param0) {

frost$core$UInt8$nullable local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:91
$fn30 $tmp29 = ($fn30) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp31 = $tmp29(param0);
*(&local0) = $tmp31;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:92
frost$core$UInt8$nullable $tmp32 = *(&local0);
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32.nonnull};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:93
frost$core$UInt8$nullable $tmp35 = *(&local0);
// begin inline call to function frost.core.UInt8.get_asInt8():frost.core.Int8 from InputStream.frost:93:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1166
uint8_t $tmp36 = ((frost$core$UInt8) $tmp35.value).value;
frost$core$Int8 $tmp37 = (frost$core$Int8) {((int8_t) $tmp36)};
return ((frost$core$Int8$nullable) { $tmp37, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:95
return ((frost$core$Int8$nullable) { .nonnull = false });

}
frost$core$Int16$nullable frost$io$InputStream$read$R$frost$core$Int16$Q(frost$io$InputStream* param0) {

frost$core$UInt8$nullable local0;
frost$core$UInt8$nullable local1;
frost$io$ByteOrder local2;
frost$io$ByteOrder local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:103
$fn39 $tmp38 = ($fn39) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp40 = $tmp38(param0);
*(&local0) = $tmp40;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:104
frost$core$UInt8$nullable $tmp41 = *(&local0);
frost$core$Bit $tmp42 = (frost$core$Bit) {!$tmp41.nonnull};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:105
return ((frost$core$Int16$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:107
$fn45 $tmp44 = ($fn45) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp46 = $tmp44(param0);
*(&local1) = $tmp46;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:108
frost$core$UInt8$nullable $tmp47 = *(&local1);
frost$core$Bit $tmp48 = (frost$core$Bit) {!$tmp47.nonnull};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:109
return ((frost$core$Int16$nullable) { .nonnull = false });
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:111
frost$io$ByteOrder* $tmp50 = &param0->byteOrder;
frost$io$ByteOrder $tmp51 = *$tmp50;
frost$io$ByteOrder$wrapper* $tmp52;
$tmp52 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp52->value = $tmp51;
frost$core$Int $tmp53 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:111:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp54 = &(&local3)->$rawValue;
*$tmp54 = $tmp53;
frost$io$ByteOrder $tmp55 = *(&local3);
*(&local2) = $tmp55;
frost$io$ByteOrder $tmp56 = *(&local2);
frost$io$ByteOrder$wrapper* $tmp57;
$tmp57 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp57->value = $tmp56;
ITable* $tmp58 = ((frost$core$Equatable*) $tmp52)->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp58 = $tmp58->next;
}
$fn60 $tmp59 = $tmp58->methods[0];
frost$core$Bit $tmp61 = $tmp59(((frost$core$Equatable*) $tmp52), ((frost$core$Equatable*) $tmp57));
bool $tmp62 = $tmp61.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp57)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp52)));
if ($tmp62) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:112
frost$core$UInt8$nullable $tmp63 = *(&local1);
frost$core$UInt8 $tmp64 = (frost$core$UInt8) {8u};
// begin inline call to function frost.core.UInt8.<<(other:frost.core.UInt8):frost.core.UInt32 from InputStream.frost:112:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:596
uint8_t $tmp65 = ((frost$core$UInt8) $tmp63.value).value;
uint8_t $tmp66 = $tmp64.value;
uint32_t $tmp67 = ((uint32_t) $tmp65) << ((uint32_t) $tmp66);
frost$core$UInt32 $tmp68 = (frost$core$UInt32) {$tmp67};
frost$core$UInt8$nullable $tmp69 = *(&local0);
frost$core$UInt32 $tmp70 = frost$core$UInt32$init$frost$core$UInt8(((frost$core$UInt8) $tmp69.value));
uint32_t $tmp71 = $tmp68.value;
uint32_t $tmp72 = $tmp70.value;
uint32_t $tmp73 = $tmp71 + $tmp72;
frost$core$UInt32 $tmp74 = (frost$core$UInt32) {$tmp73};
// begin inline call to function frost.core.UInt32.get_asInt16():frost.core.Int16 from InputStream.frost:112:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:942
uint32_t $tmp75 = $tmp74.value;
frost$core$Int16 $tmp76 = (frost$core$Int16) {((int16_t) $tmp75)};
return ((frost$core$Int16$nullable) { $tmp76, true });
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:115
frost$core$UInt8$nullable $tmp77 = *(&local0);
frost$core$UInt8 $tmp78 = (frost$core$UInt8) {8u};
// begin inline call to function frost.core.UInt8.<<(other:frost.core.UInt8):frost.core.UInt32 from InputStream.frost:115:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:596
uint8_t $tmp79 = ((frost$core$UInt8) $tmp77.value).value;
uint8_t $tmp80 = $tmp78.value;
uint32_t $tmp81 = ((uint32_t) $tmp79) << ((uint32_t) $tmp80);
frost$core$UInt32 $tmp82 = (frost$core$UInt32) {$tmp81};
frost$core$UInt8$nullable $tmp83 = *(&local1);
frost$core$UInt32 $tmp84 = frost$core$UInt32$init$frost$core$UInt8(((frost$core$UInt8) $tmp83.value));
uint32_t $tmp85 = $tmp82.value;
uint32_t $tmp86 = $tmp84.value;
uint32_t $tmp87 = $tmp85 + $tmp86;
frost$core$UInt32 $tmp88 = (frost$core$UInt32) {$tmp87};
// begin inline call to function frost.core.UInt32.get_asInt16():frost.core.Int16 from InputStream.frost:115:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:942
uint32_t $tmp89 = $tmp88.value;
frost$core$Int16 $tmp90 = (frost$core$Int16) {((int16_t) $tmp89)};
return ((frost$core$Int16$nullable) { $tmp90, true });
block6:;
goto block13;
block13:;

}
frost$core$Int32$nullable frost$io$InputStream$read$R$frost$core$Int32$Q(frost$io$InputStream* param0) {

frost$core$Int16$nullable local0;
frost$core$Int16$nullable local1;
frost$io$ByteOrder local2;
frost$io$ByteOrder local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:124
$fn92 $tmp91 = ($fn92) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp93 = $tmp91(param0);
*(&local0) = $tmp93;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:125
frost$core$Int16$nullable $tmp94 = *(&local0);
frost$core$Bit $tmp95 = (frost$core$Bit) {!$tmp94.nonnull};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:126
return ((frost$core$Int32$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:128
$fn98 $tmp97 = ($fn98) param0->$class->vtable[7];
frost$core$Int16$nullable $tmp99 = $tmp97(param0);
*(&local1) = $tmp99;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:129
frost$core$Int16$nullable $tmp100 = *(&local1);
frost$core$Bit $tmp101 = (frost$core$Bit) {!$tmp100.nonnull};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:130
return ((frost$core$Int32$nullable) { .nonnull = false });
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:132
frost$io$ByteOrder* $tmp103 = &param0->byteOrder;
frost$io$ByteOrder $tmp104 = *$tmp103;
frost$io$ByteOrder$wrapper* $tmp105;
$tmp105 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp105->value = $tmp104;
frost$core$Int $tmp106 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:132:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp107 = &(&local3)->$rawValue;
*$tmp107 = $tmp106;
frost$io$ByteOrder $tmp108 = *(&local3);
*(&local2) = $tmp108;
frost$io$ByteOrder $tmp109 = *(&local2);
frost$io$ByteOrder$wrapper* $tmp110;
$tmp110 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp110->value = $tmp109;
ITable* $tmp111 = ((frost$core$Equatable*) $tmp105)->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
frost$core$Bit $tmp114 = $tmp112(((frost$core$Equatable*) $tmp105), ((frost$core$Equatable*) $tmp110));
bool $tmp115 = $tmp114.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp110)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp105)));
if ($tmp115) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:133
frost$core$Int16$nullable $tmp116 = *(&local1);
frost$core$Int16 $tmp117 = (frost$core$Int16) {16u};
// begin inline call to function frost.core.Int16.<<(other:frost.core.Int16):frost.core.Int32 from InputStream.frost:133:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int16.frost:512
int16_t $tmp118 = ((frost$core$Int16) $tmp116.value).value;
int16_t $tmp119 = $tmp117.value;
int32_t $tmp120 = ((int32_t) $tmp118) << ((int32_t) $tmp119);
frost$core$Int32 $tmp121 = (frost$core$Int32) {$tmp120};
frost$core$Int16$nullable $tmp122 = *(&local0);
frost$core$Int32 $tmp123 = frost$core$Int32$init$frost$core$Int16(((frost$core$Int16) $tmp122.value));
int32_t $tmp124 = $tmp121.value;
int32_t $tmp125 = $tmp123.value;
int32_t $tmp126 = $tmp124 + $tmp125;
frost$core$Int32 $tmp127 = (frost$core$Int32) {$tmp126};
return ((frost$core$Int32$nullable) { $tmp127, true });
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:136
frost$core$Int16$nullable $tmp128 = *(&local0);
frost$core$Int16 $tmp129 = (frost$core$Int16) {16u};
// begin inline call to function frost.core.Int16.<<(other:frost.core.Int16):frost.core.Int32 from InputStream.frost:136:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int16.frost:512
int16_t $tmp130 = ((frost$core$Int16) $tmp128.value).value;
int16_t $tmp131 = $tmp129.value;
int32_t $tmp132 = ((int32_t) $tmp130) << ((int32_t) $tmp131);
frost$core$Int32 $tmp133 = (frost$core$Int32) {$tmp132};
frost$core$Int16$nullable $tmp134 = *(&local1);
frost$core$Int32 $tmp135 = frost$core$Int32$init$frost$core$Int16(((frost$core$Int16) $tmp134.value));
int32_t $tmp136 = $tmp133.value;
int32_t $tmp137 = $tmp135.value;
int32_t $tmp138 = $tmp136 + $tmp137;
frost$core$Int32 $tmp139 = (frost$core$Int32) {$tmp138};
return ((frost$core$Int32$nullable) { $tmp139, true });
block6:;
goto block11;
block11:;

}
frost$core$Int64$nullable frost$io$InputStream$read$R$frost$core$Int64$Q(frost$io$InputStream* param0) {

frost$core$Int32$nullable local0;
frost$core$Int32$nullable local1;
frost$io$ByteOrder local2;
frost$io$ByteOrder local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:145
$fn141 $tmp140 = ($fn141) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp142 = $tmp140(param0);
*(&local0) = $tmp142;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:146
frost$core$Int32$nullable $tmp143 = *(&local0);
frost$core$Bit $tmp144 = (frost$core$Bit) {!$tmp143.nonnull};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:147
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:149
$fn147 $tmp146 = ($fn147) param0->$class->vtable[8];
frost$core$Int32$nullable $tmp148 = $tmp146(param0);
*(&local1) = $tmp148;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:150
frost$core$Int32$nullable $tmp149 = *(&local1);
frost$core$Bit $tmp150 = (frost$core$Bit) {!$tmp149.nonnull};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:151
return ((frost$core$Int64$nullable) { .nonnull = false });
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:153
frost$io$ByteOrder* $tmp152 = &param0->byteOrder;
frost$io$ByteOrder $tmp153 = *$tmp152;
frost$io$ByteOrder$wrapper* $tmp154;
$tmp154 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp154->value = $tmp153;
frost$core$Int $tmp155 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:153:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp156 = &(&local3)->$rawValue;
*$tmp156 = $tmp155;
frost$io$ByteOrder $tmp157 = *(&local3);
*(&local2) = $tmp157;
frost$io$ByteOrder $tmp158 = *(&local2);
frost$io$ByteOrder$wrapper* $tmp159;
$tmp159 = (frost$io$ByteOrder$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$ByteOrder$wrapperclass);
$tmp159->value = $tmp158;
ITable* $tmp160 = ((frost$core$Equatable*) $tmp154)->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[0];
frost$core$Bit $tmp163 = $tmp161(((frost$core$Equatable*) $tmp154), ((frost$core$Equatable*) $tmp159));
bool $tmp164 = $tmp163.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp159)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp154)));
if ($tmp164) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:154
frost$core$Int32$nullable $tmp165 = *(&local1);
int32_t $tmp166 = ((frost$core$Int32) $tmp165.value).value;
frost$core$Int64 $tmp167 = (frost$core$Int64) {((int64_t) $tmp166)};
frost$core$Int64 $tmp168 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from InputStream.frost:154:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
int64_t $tmp169 = $tmp167.value;
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169 << $tmp170;
frost$core$Int64 $tmp172 = (frost$core$Int64) {$tmp171};
frost$core$Int32$nullable $tmp173 = *(&local0);
frost$core$Int64 $tmp174 = frost$core$Int64$init$frost$core$Int32(((frost$core$Int32) $tmp173.value));
int64_t $tmp175 = $tmp172.value;
int64_t $tmp176 = $tmp174.value;
int64_t $tmp177 = $tmp175 + $tmp176;
frost$core$Int64 $tmp178 = (frost$core$Int64) {$tmp177};
return ((frost$core$Int64$nullable) { $tmp178, true });
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:157
frost$core$Int32$nullable $tmp179 = *(&local0);
int32_t $tmp180 = ((frost$core$Int32) $tmp179.value).value;
frost$core$Int64 $tmp181 = (frost$core$Int64) {((int64_t) $tmp180)};
frost$core$Int64 $tmp182 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from InputStream.frost:157:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
int64_t $tmp183 = $tmp181.value;
int64_t $tmp184 = $tmp182.value;
int64_t $tmp185 = $tmp183 << $tmp184;
frost$core$Int64 $tmp186 = (frost$core$Int64) {$tmp185};
frost$core$Int32$nullable $tmp187 = *(&local1);
frost$core$Int64 $tmp188 = frost$core$Int64$init$frost$core$Int32(((frost$core$Int32) $tmp187.value));
int64_t $tmp189 = $tmp186.value;
int64_t $tmp190 = $tmp188.value;
int64_t $tmp191 = $tmp189 + $tmp190;
frost$core$Int64 $tmp192 = (frost$core$Int64) {$tmp191};
return ((frost$core$Int64$nullable) { $tmp192, true });
block6:;
goto block11;
block11:;

}
frost$core$Char8$nullable frost$io$InputStream$read$R$frost$core$Char8$Q(frost$io$InputStream* param0) {

frost$core$UInt8$nullable local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:165
$fn194 $tmp193 = ($fn194) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp195 = $tmp193(param0);
*(&local0) = $tmp195;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:166
frost$core$UInt8$nullable $tmp196 = *(&local0);
frost$core$Bit $tmp197 = (frost$core$Bit) {$tmp196.nonnull};
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:167
frost$core$UInt8$nullable $tmp199 = *(&local0);
frost$core$Char8 $tmp200 = frost$core$Char8$init$frost$core$UInt8(((frost$core$UInt8) $tmp199.value));
frost$core$Bit $tmp201 = (frost$core$Bit) {((frost$core$Char8$nullable) { $tmp200, true }).nonnull};
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block3; else goto block4;
block4:;
frost$core$Int $tmp203 = (frost$core$Int) {167u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s204, $tmp203, &$s205);
abort(); // unreachable
block3:;
return ((frost$core$Char8$nullable) { ((frost$core$Char8) ((frost$core$Char8$nullable) { $tmp200, true }).value), true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:169
return ((frost$core$Char8$nullable) { .nonnull = false });

}
frost$core$Int frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int(frost$io$InputStream* param0, frost$core$UInt8* param1, frost$core$Int param2) {

frost$core$Int local0;
frost$core$UInt8$nullable local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:179
frost$core$Int $tmp206 = (frost$core$Int) {0u};
*(&local0) = $tmp206;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:180
goto block1;
block1:;
frost$core$Int $tmp207 = *(&local0);
int64_t $tmp208 = $tmp207.value;
int64_t $tmp209 = param2.value;
bool $tmp210 = $tmp208 < $tmp209;
frost$core$Bit $tmp211 = (frost$core$Bit) {$tmp210};
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:181
$fn214 $tmp213 = ($fn214) param0->$class->vtable[2];
frost$core$UInt8$nullable $tmp215 = $tmp213(param0);
*(&local1) = $tmp215;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:182
frost$core$UInt8$nullable $tmp216 = *(&local1);
frost$core$Bit $tmp217 = (frost$core$Bit) {!$tmp216.nonnull};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:183
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:185
frost$core$Int $tmp219 = *(&local0);
frost$core$Int64 $tmp220 = frost$core$Int64$init$frost$core$Int($tmp219);
frost$core$UInt8$nullable $tmp221 = *(&local1);
int64_t $tmp222 = $tmp220.value;
param1[$tmp222] = ((frost$core$UInt8) $tmp221.value);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:186
frost$core$Int $tmp223 = *(&local0);
frost$core$Int $tmp224 = (frost$core$Int) {1u};
int64_t $tmp225 = $tmp223.value;
int64_t $tmp226 = $tmp224.value;
int64_t $tmp227 = $tmp225 + $tmp226;
frost$core$Int $tmp228 = (frost$core$Int) {$tmp227};
*(&local0) = $tmp228;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:188
frost$core$Int $tmp229 = *(&local0);
return $tmp229;

}
frost$core$Int frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Int(frost$io$InputStream* param0, frost$core$Int8* param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:196
$fn231 $tmp230 = ($fn231) param0->$class->vtable[11];
frost$core$Int $tmp232 = $tmp230(param0, ((frost$core$UInt8*) param1), param2);
return $tmp232;

}
frost$core$Int frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Int(frost$io$InputStream* param0, frost$core$Char8* param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:204
$fn234 $tmp233 = ($fn234) param0->$class->vtable[11];
frost$core$Int $tmp235 = $tmp233(param0, ((frost$core$UInt8*) param1), param2);
return $tmp235;

}
frost$core$String* frost$io$InputStream$readFully$R$frost$core$String(frost$io$InputStream* param0) {

frost$core$Int local0;
frost$core$MutableString* local1 = NULL;
frost$core$UInt8* local2;
frost$core$Int local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:214
frost$core$Int $tmp236 = (frost$core$Int) {2048u};
*(&local0) = $tmp236;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:215
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp237 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp237);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$MutableString* $tmp238 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local1) = $tmp237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:216
frost$core$Int $tmp239 = *(&local0);
frost$core$Int64 $tmp240 = frost$core$Int64$init$frost$core$Int($tmp239);
int64_t $tmp241 = $tmp240.value;
frost$core$UInt8* $tmp242 = ((frost$core$UInt8*) frostAlloc($tmp241 * 1));
*(&local2) = $tmp242;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:217
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:218
frost$core$UInt8* $tmp243 = *(&local2);
frost$core$Int $tmp244 = *(&local0);
$fn246 $tmp245 = ($fn246) param0->$class->vtable[11];
frost$core$Int $tmp247 = $tmp245(param0, $tmp243, $tmp244);
*(&local3) = $tmp247;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:219
frost$core$Int $tmp248 = *(&local3);
frost$core$Int $tmp249 = (frost$core$Int) {0u};
int64_t $tmp250 = $tmp248.value;
int64_t $tmp251 = $tmp249.value;
bool $tmp252 = $tmp250 <= $tmp251;
frost$core$Bit $tmp253 = (frost$core$Bit) {$tmp252};
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:220
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:224
frost$core$UInt8* $tmp255 = *(&local2);
frostFree($tmp255);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:225
frost$core$MutableString* $tmp256 = *(&local1);
frost$core$String* $tmp257 = frost$core$MutableString$finish$R$frost$core$String($tmp256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$MutableString* $tmp258 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp257;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:222
frost$core$MutableString* $tmp259 = *(&local1);
frost$core$UInt8* $tmp260 = *(&local2);
frost$core$Int $tmp261 = *(&local3);
frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp259, ((frost$core$Char8*) $tmp260), $tmp261);
goto block1;

}
frost$collections$Array* frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT(frost$io$InputStream* param0) {

frost$core$Int local0;
frost$collections$Array* local1 = NULL;
frost$core$UInt8* local2;
frost$core$Int local3;
frost$core$Int local4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:235
frost$core$Int $tmp262 = (frost$core$Int) {2048u};
*(&local0) = $tmp262;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:236
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp263 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp263);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$collections$Array* $tmp264 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local1) = $tmp263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:237
frost$core$Int $tmp265 = *(&local0);
frost$core$Int64 $tmp266 = frost$core$Int64$init$frost$core$Int($tmp265);
int64_t $tmp267 = $tmp266.value;
frost$core$UInt8* $tmp268 = ((frost$core$UInt8*) frostAlloc($tmp267 * 1));
*(&local2) = $tmp268;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:238
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:239
frost$core$UInt8* $tmp269 = *(&local2);
frost$core$Int $tmp270 = *(&local0);
$fn272 $tmp271 = ($fn272) param0->$class->vtable[11];
frost$core$Int $tmp273 = $tmp271(param0, $tmp269, $tmp270);
*(&local3) = $tmp273;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:240
frost$core$Int $tmp274 = *(&local3);
frost$core$Int $tmp275 = (frost$core$Int) {0u};
int64_t $tmp276 = $tmp274.value;
int64_t $tmp277 = $tmp275.value;
bool $tmp278 = $tmp276 <= $tmp277;
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278};
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:241
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:248
frost$core$UInt8* $tmp281 = *(&local2);
frostFree($tmp281);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:249
frost$collections$Array* $tmp282 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
frost$collections$Array* $tmp283 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp282;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:244
frost$core$Int $tmp284 = (frost$core$Int) {0u};
frost$core$Int $tmp285 = *(&local3);
frost$core$Bit $tmp286 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp287 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp284, $tmp285, $tmp286);
frost$core$Int $tmp288 = $tmp287.min;
*(&local4) = $tmp288;
frost$core$Int $tmp289 = $tmp287.max;
frost$core$Bit $tmp290 = $tmp287.inclusive;
bool $tmp291 = $tmp290.value;
frost$core$Int $tmp292 = (frost$core$Int) {1u};
if ($tmp291) goto block8; else goto block9;
block8:;
int64_t $tmp293 = $tmp288.value;
int64_t $tmp294 = $tmp289.value;
bool $tmp295 = $tmp293 <= $tmp294;
frost$core$Bit $tmp296 = (frost$core$Bit) {$tmp295};
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block5; else goto block6;
block9:;
int64_t $tmp298 = $tmp288.value;
int64_t $tmp299 = $tmp289.value;
bool $tmp300 = $tmp298 < $tmp299;
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300};
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:245
frost$collections$Array* $tmp303 = *(&local1);
frost$core$UInt8* $tmp304 = *(&local2);
frost$core$Int $tmp305 = *(&local4);
frost$core$Int64 $tmp306 = frost$core$Int64$init$frost$core$Int($tmp305);
int64_t $tmp307 = $tmp306.value;
frost$core$UInt8 $tmp308 = $tmp304[$tmp307];
frost$core$UInt8$wrapper* $tmp309;
$tmp309 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp309->value = $tmp308;
frost$collections$Array$add$frost$collections$Array$T($tmp303, ((frost$core$Object*) $tmp309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$core$Int $tmp310 = *(&local4);
int64_t $tmp311 = $tmp289.value;
int64_t $tmp312 = $tmp310.value;
int64_t $tmp313 = $tmp311 - $tmp312;
frost$core$Int $tmp314 = (frost$core$Int) {$tmp313};
if ($tmp291) goto block11; else goto block12;
block11:;
int64_t $tmp315 = $tmp314.value;
int64_t $tmp316 = $tmp292.value;
bool $tmp317 = $tmp315 >= $tmp316;
frost$core$Bit $tmp318 = (frost$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block10; else goto block6;
block12:;
int64_t $tmp320 = $tmp314.value;
int64_t $tmp321 = $tmp292.value;
bool $tmp322 = $tmp320 > $tmp321;
frost$core$Bit $tmp323 = (frost$core$Bit) {$tmp322};
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block10; else goto block6;
block10:;
int64_t $tmp325 = $tmp310.value;
int64_t $tmp326 = $tmp292.value;
int64_t $tmp327 = $tmp325 + $tmp326;
frost$core$Int $tmp328 = (frost$core$Int) {$tmp327};
*(&local4) = $tmp328;
goto block5;
block6:;
goto block1;

}
frost$core$String* frost$io$InputStream$readLine$R$frost$core$String$Q(frost$io$InputStream* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Char8$nullable local1;
frost$core$MutableString$Index local2;
frost$core$MutableString$Index local3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:258
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp329 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp329);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$MutableString* $tmp330 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local0) = $tmp329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:259
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:260
$fn332 $tmp331 = ($fn332) param0->$class->vtable[10];
frost$core$Char8$nullable $tmp333 = $tmp331(param0);
*(&local1) = $tmp333;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:261
frost$core$Char8$nullable $tmp334 = *(&local1);
frost$core$Bit $tmp335 = (frost$core$Bit) {!$tmp334.nonnull};
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:262
frost$core$MutableString* $tmp337 = *(&local0);
frost$core$Int* $tmp338 = &$tmp337->_length;
frost$core$Int $tmp339 = *$tmp338;
frost$core$Int $tmp340 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from InputStream.frost:262:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp341 = $tmp339.value;
int64_t $tmp342 = $tmp340.value;
bool $tmp343 = $tmp341 == $tmp342;
frost$core$Bit $tmp344 = (frost$core$Bit) {$tmp343};
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:263
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$MutableString* $tmp346 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:265
goto block2;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:267
frost$core$Char8$nullable $tmp347 = *(&local1);
frost$core$UInt8 $tmp348 = (frost$core$UInt8) {10u};
frost$core$Char8 $tmp349 = frost$core$Char8$init$frost$core$UInt8($tmp348);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from InputStream.frost:267:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
uint8_t $tmp350 = ((frost$core$Char8) $tmp347.value).value;
uint8_t $tmp351 = $tmp349.value;
bool $tmp352 = $tmp350 == $tmp351;
frost$core$Bit $tmp353 = (frost$core$Bit) {$tmp352};
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:268
frost$core$MutableString* $tmp355 = *(&local0);
frost$core$Int* $tmp356 = &$tmp355->_length;
frost$core$Int $tmp357 = *$tmp356;
frost$core$Int $tmp358 = (frost$core$Int) {0u};
int64_t $tmp359 = $tmp357.value;
int64_t $tmp360 = $tmp358.value;
bool $tmp361 = $tmp359 > $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block13; else goto block12;
block13:;
frost$core$MutableString* $tmp364 = *(&local0);
frost$core$MutableString* $tmp365 = *(&local0);
frost$core$MutableString* $tmp366 = *(&local0);
// begin inline call to function frost.core.MutableString.get_end():frost.core.MutableString.Index from InputStream.frost:268:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:187
frost$core$Int* $tmp367 = &$tmp366->_length;
frost$core$Int $tmp368 = *$tmp367;
// begin inline call to frost.core.MutableString.Index.init(value:frost.core.Int):frost.core.MutableString.Index from MutableString.frost:187:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:23
frost$core$Int* $tmp369 = &(&local3)->value;
*$tmp369 = $tmp368;
frost$core$MutableString$Index $tmp370 = *(&local3);
*(&local2) = $tmp370;
frost$core$MutableString$Index $tmp371 = *(&local2);
frost$core$MutableString$Index $tmp372 = frost$core$MutableString$previous$frost$core$MutableString$Index$R$frost$core$MutableString$Index($tmp365, $tmp371);
frost$core$Char32 $tmp373 = frost$core$MutableString$$IDX$frost$core$MutableString$Index$R$frost$core$Char32($tmp364, $tmp372);
frost$core$Int32 $tmp374 = (frost$core$Int32) {13u};
frost$core$Char32 $tmp375 = frost$core$Char32$init$frost$core$Int32($tmp374);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from InputStream.frost:268:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp376 = $tmp373.value;
int32_t $tmp377 = $tmp375.value;
bool $tmp378 = $tmp376 == $tmp377;
frost$core$Bit $tmp379 = (frost$core$Bit) {$tmp378};
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:269
frost$core$MutableString* $tmp381 = *(&local0);
frost$core$Int* $tmp382 = &$tmp381->_length;
frost$core$Int $tmp383 = *$tmp382;
frost$core$Int $tmp384 = (frost$core$Int) {1u};
int64_t $tmp385 = $tmp383.value;
int64_t $tmp386 = $tmp384.value;
int64_t $tmp387 = $tmp385 - $tmp386;
frost$core$Int $tmp388 = (frost$core$Int) {$tmp387};
frost$core$Int* $tmp389 = &$tmp381->_length;
*$tmp389 = $tmp388;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:271
goto block2;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:273
frost$core$MutableString* $tmp390 = *(&local0);
frost$core$Char8$nullable $tmp391 = *(&local1);
frost$core$MutableString$append$frost$core$Char8($tmp390, ((frost$core$Char8) $tmp391.value));
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:275
frost$core$MutableString* $tmp392 = *(&local0);
frost$core$String* $tmp393 = frost$core$MutableString$finish$R$frost$core$String($tmp392);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$MutableString* $tmp394 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp393;

}
frost$core$Maybe* frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int$GT(frost$io$InputStream* param0, frost$io$OutputStream* param1) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$UInt8* local2;
frost$core$Int local3;
frost$core$Error* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:284
frost$core$Int $tmp395 = (frost$core$Int) {0u};
*(&local0) = $tmp395;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:285
frost$core$Int $tmp396 = (frost$core$Int) {2048u};
*(&local1) = $tmp396;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:286
frost$core$Int $tmp397 = *(&local1);
frost$core$Int64 $tmp398 = frost$core$Int64$init$frost$core$Int($tmp397);
int64_t $tmp399 = $tmp398.value;
frost$core$UInt8* $tmp400 = ((frost$core$UInt8*) frostAlloc($tmp399 * 1));
*(&local2) = $tmp400;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:287
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:288
frost$core$UInt8* $tmp401 = *(&local2);
frost$core$Int $tmp402 = *(&local1);
$fn404 $tmp403 = ($fn404) param0->$class->vtable[11];
frost$core$Int $tmp405 = $tmp403(param0, $tmp401, $tmp402);
*(&local3) = $tmp405;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:289
frost$core$Int $tmp406 = *(&local3);
frost$core$Int $tmp407 = (frost$core$Int) {0u};
int64_t $tmp408 = $tmp406.value;
int64_t $tmp409 = $tmp407.value;
bool $tmp410 = $tmp408 <= $tmp409;
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:290
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:298
frost$core$UInt8* $tmp413 = *(&local2);
frostFree($tmp413);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:299
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp414 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp415 = (frost$core$Int) {0u};
frost$core$Int $tmp416 = *(&local0);
frost$core$Int$wrapper* $tmp417;
$tmp417 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp417->value = $tmp416;
frost$core$Maybe$init$frost$core$Int$frost$core$Maybe$T($tmp414, $tmp415, ((frost$core$Object*) $tmp417));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
return $tmp414;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:292
frost$core$Int $tmp418 = *(&local0);
frost$core$Int $tmp419 = *(&local3);
int64_t $tmp420 = $tmp418.value;
int64_t $tmp421 = $tmp419.value;
int64_t $tmp422 = $tmp420 + $tmp421;
frost$core$Int $tmp423 = (frost$core$Int) {$tmp422};
*(&local0) = $tmp423;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:293
frost$core$UInt8* $tmp424 = *(&local2);
frost$core$Int $tmp425 = *(&local3);
$fn427 $tmp426 = ($fn427) param1->$class->vtable[10];
frost$core$Error* $tmp428 = $tmp426(param1, $tmp424, $tmp425);
*(&local4) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Error* $tmp429 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local4) = $tmp428;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:294
frost$core$Error* $tmp430 = *(&local4);
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430 != NULL};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:295
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp433 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int $tmp434 = (frost$core$Int) {1u};
frost$core$Error* $tmp435 = *(&local4);
frost$core$Maybe$init$frost$core$Int$frost$core$Error($tmp433, $tmp434, $tmp435);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Error* $tmp436 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
*(&local4) = ((frost$core$Error*) NULL);
return $tmp433;
block6:;
frost$core$Error* $tmp437 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local4) = ((frost$core$Error*) NULL);
goto block1;

}
frost$collections$Iterator* frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT(frost$io$InputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:307
FROST_ASSERT(32 == sizeof(frost$io$InputStream$LineIterator));
frost$io$InputStream$LineIterator* $tmp438 = (frost$io$InputStream$LineIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$io$InputStream$LineIterator$class);
frost$io$InputStream$LineIterator$init$frost$io$InputStream($tmp438, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp438)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
return ((frost$collections$Iterator*) $tmp438);

}
frost$core$Error* frost$io$InputStream$close$R$frost$core$Error$Q(frost$io$InputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:311
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
void frost$io$InputStream$init(frost$io$InputStream* param0) {

frost$io$ByteOrder local0;
frost$io$ByteOrder local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:14
frost$core$Int $tmp439 = (frost$core$Int) {0u};
// begin inline call to frost.io.ByteOrder.init(rv:frost.core.Int):frost.io.ByteOrder from InputStream.frost:14:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/ByteOrder.frost:6
frost$core$Int* $tmp440 = &(&local1)->$rawValue;
*$tmp440 = $tmp439;
frost$io$ByteOrder $tmp441 = *(&local1);
*(&local0) = $tmp441;
frost$io$ByteOrder $tmp442 = *(&local0);
frost$io$ByteOrder* $tmp443 = &param0->byteOrder;
*$tmp443 = $tmp442;
return;

}
void frost$io$InputStream$cleanup(frost$io$InputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

