#include "panda/io/InputStream.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/UInt16.h"
#include "panda/core/Int16.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt32.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Int64.h"
#include "panda/core/Int8.h"
#include "panda/core/UInt8.h"
#include "panda/io/ByteOrder.h"
#include "panda/core/Equatable.h"
#include "panda/core/Panda.h"
#include "panda/core/Char8.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char32.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream/LineIterator.h"


static panda$core$String $s1;
panda$io$InputStream$class_type panda$io$InputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$InputStream$cleanup, NULL, panda$io$InputStream$read$R$panda$core$UInt16$Q, panda$io$InputStream$read$R$panda$core$UInt32$Q, panda$io$InputStream$read$R$panda$core$UInt64$Q, panda$io$InputStream$read$R$panda$core$Int8$Q, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$Int16$nullable (*$fn3)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn11)(panda$io$InputStream*);
typedef panda$core$Int64$nullable (*$fn19)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn27)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn35)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn41)(panda$io$InputStream*);
typedef panda$core$Bit (*$fn54)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int16$nullable (*$fn83)(panda$io$InputStream*);
typedef panda$core$Int16$nullable (*$fn89)(panda$io$InputStream*);
typedef panda$core$Bit (*$fn102)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int32$nullable (*$fn129)(panda$io$InputStream*);
typedef panda$core$Int32$nullable (*$fn135)(panda$io$InputStream*);
typedef panda$core$Bit (*$fn148)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$UInt8$nullable (*$fn179)(panda$io$InputStream*);
typedef panda$core$UInt8$nullable (*$fn194)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn210)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Int64 (*$fn213)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef panda$core$Char8$nullable (*$fn241)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn304)(panda$io$InputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn322)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -2955417606099851271, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, 1229762652197425650, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, -4313794287938759288, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x70\x61\x6e\x64\x61", 17, -1756706895279743357, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 77, -4095566630427842895, NULL };

panda$core$UInt16$nullable panda$io$InputStream$read$R$panda$core$UInt16$Q(panda$io$InputStream* param0) {

panda$core$Int16 local0;
// line 56
$fn3 $tmp2 = ($fn3) param0->$class->vtable[7];
panda$core$Int16$nullable $tmp4 = $tmp2(param0);
*(&local0) = ((panda$core$Int16) $tmp4.value);
// line 57
panda$core$Int16 $tmp5 = *(&local0);
panda$core$Bit $tmp6 = panda$core$Bit$init$builtin_bit(true);
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block2;
block1:;
// line 58
panda$core$Int16 $tmp8 = *(&local0);
panda$core$UInt16 $tmp9 = panda$core$Int16$convert$R$panda$core$UInt16($tmp8);
return ((panda$core$UInt16$nullable) { $tmp9, true });
block2:;
// line 60
return ((panda$core$UInt16$nullable) { .nonnull = false });

}
panda$core$UInt32$nullable panda$io$InputStream$read$R$panda$core$UInt32$Q(panda$io$InputStream* param0) {

panda$core$Int32 local0;
// line 68
$fn11 $tmp10 = ($fn11) param0->$class->vtable[8];
panda$core$Int32$nullable $tmp12 = $tmp10(param0);
*(&local0) = ((panda$core$Int32) $tmp12.value);
// line 69
panda$core$Int32 $tmp13 = *(&local0);
panda$core$Bit $tmp14 = panda$core$Bit$init$builtin_bit(true);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block1; else goto block2;
block1:;
// line 70
panda$core$Int32 $tmp16 = *(&local0);
panda$core$UInt32 $tmp17 = panda$core$Int32$convert$R$panda$core$UInt32($tmp16);
return ((panda$core$UInt32$nullable) { $tmp17, true });
block2:;
// line 72
return ((panda$core$UInt32$nullable) { .nonnull = false });

}
panda$core$UInt64$nullable panda$io$InputStream$read$R$panda$core$UInt64$Q(panda$io$InputStream* param0) {

panda$core$Int64 local0;
// line 80
$fn19 $tmp18 = ($fn19) param0->$class->vtable[9];
panda$core$Int64$nullable $tmp20 = $tmp18(param0);
*(&local0) = ((panda$core$Int64) $tmp20.value);
// line 81
panda$core$Int64 $tmp21 = *(&local0);
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit(true);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block2;
block1:;
// line 82
panda$core$Int64 $tmp24 = *(&local0);
panda$core$UInt64 $tmp25 = panda$core$Int64$convert$R$panda$core$UInt64($tmp24);
return ((panda$core$UInt64$nullable) { $tmp25, true });
block2:;
// line 84
return ((panda$core$UInt64$nullable) { .nonnull = false });

}
panda$core$Int8$nullable panda$io$InputStream$read$R$panda$core$Int8$Q(panda$io$InputStream* param0) {

panda$core$UInt8$nullable local0;
// line 91
$fn27 $tmp26 = ($fn27) param0->$class->vtable[2];
panda$core$UInt8$nullable $tmp28 = $tmp26(param0);
*(&local0) = $tmp28;
// line 92
panda$core$UInt8$nullable $tmp29 = *(&local0);
panda$core$Bit $tmp30 = panda$core$Bit$init$builtin_bit($tmp29.nonnull);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block1; else goto block2;
block1:;
// line 93
panda$core$UInt8$nullable $tmp32 = *(&local0);
panda$core$Int8 $tmp33 = panda$core$UInt8$convert$R$panda$core$Int8(((panda$core$UInt8) $tmp32.value));
return ((panda$core$Int8$nullable) { $tmp33, true });
block2:;
// line 95
return ((panda$core$Int8$nullable) { .nonnull = false });

}
panda$core$Int16$nullable panda$io$InputStream$read$R$panda$core$Int16$Q(panda$io$InputStream* param0) {

panda$core$UInt8$nullable local0;
panda$core$UInt8$nullable local1;
// line 103
$fn35 $tmp34 = ($fn35) param0->$class->vtable[2];
panda$core$UInt8$nullable $tmp36 = $tmp34(param0);
*(&local0) = $tmp36;
// line 104
panda$core$UInt8$nullable $tmp37 = *(&local0);
panda$core$Bit $tmp38 = panda$core$Bit$init$builtin_bit(!$tmp37.nonnull);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block1; else goto block2;
block1:;
// line 105
return ((panda$core$Int16$nullable) { .nonnull = false });
block2:;
// line 107
$fn41 $tmp40 = ($fn41) param0->$class->vtable[2];
panda$core$UInt8$nullable $tmp42 = $tmp40(param0);
*(&local1) = $tmp42;
// line 108
panda$core$UInt8$nullable $tmp43 = *(&local1);
panda$core$Bit $tmp44 = panda$core$Bit$init$builtin_bit(!$tmp43.nonnull);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block3; else goto block4;
block3:;
// line 109
return ((panda$core$Int16$nullable) { .nonnull = false });
block4:;
// line 111
panda$io$ByteOrder* $tmp46 = &param0->byteOrder;
panda$io$ByteOrder $tmp47 = *$tmp46;
panda$io$ByteOrder$wrapper* $tmp48;
$tmp48 = (panda$io$ByteOrder$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp48->value = $tmp47;
panda$core$Int64 $tmp49 = (panda$core$Int64) {0};
panda$io$ByteOrder $tmp50 = panda$io$ByteOrder$init$panda$core$Int64($tmp49);
panda$io$ByteOrder$wrapper* $tmp51;
$tmp51 = (panda$io$ByteOrder$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp51->value = $tmp50;
ITable* $tmp52 = ((panda$core$Equatable*) $tmp48)->$class->itable;
while ($tmp52->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[0];
panda$core$Bit $tmp55 = $tmp53(((panda$core$Equatable*) $tmp48), ((panda$core$Equatable*) $tmp51));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp48)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp51)));
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block5; else goto block7;
block5:;
// line 112
panda$core$UInt8$nullable $tmp57 = *(&local1);
panda$core$UInt8 $tmp58 = (panda$core$UInt8) {8};
panda$core$UInt32 $tmp59 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) $tmp57.value), $tmp58);
panda$core$UInt8$nullable $tmp60 = *(&local0);
panda$core$UInt32 $tmp61 = panda$core$UInt32$init$panda$core$UInt8(((panda$core$UInt8) $tmp60.value));
uint32_t $tmp62 = $tmp59.value;
uint32_t $tmp63 = $tmp61.value;
uint32_t $tmp64 = $tmp62 + $tmp63;
panda$core$UInt32 $tmp65 = (panda$core$UInt32) {$tmp64};
panda$core$Int16 $tmp66 = panda$core$UInt32$convert$R$panda$core$Int16($tmp65);
return ((panda$core$Int16$nullable) { $tmp66, true });
block7:;
// line 1
// line 115
panda$core$UInt8$nullable $tmp67 = *(&local0);
panda$core$UInt8 $tmp68 = (panda$core$UInt8) {8};
panda$core$UInt32 $tmp69 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) $tmp67.value), $tmp68);
panda$core$UInt8$nullable $tmp70 = *(&local1);
panda$core$UInt32 $tmp71 = panda$core$UInt32$init$panda$core$UInt8(((panda$core$UInt8) $tmp70.value));
uint32_t $tmp72 = $tmp69.value;
uint32_t $tmp73 = $tmp71.value;
uint32_t $tmp74 = $tmp72 + $tmp73;
panda$core$UInt32 $tmp75 = (panda$core$UInt32) {$tmp74};
panda$core$Int16 $tmp76 = panda$core$UInt32$convert$R$panda$core$Int16($tmp75);
return ((panda$core$Int16$nullable) { $tmp76, true });
block6:;
panda$core$Bit $tmp77 = panda$core$Bit$init$builtin_bit(false);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp79 = (panda$core$Int64) {102};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s80, $tmp79, &$s81);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$core$Int32$nullable panda$io$InputStream$read$R$panda$core$Int32$Q(panda$io$InputStream* param0) {

panda$core$Int16$nullable local0;
panda$core$Int16$nullable local1;
// line 124
$fn83 $tmp82 = ($fn83) param0->$class->vtable[7];
panda$core$Int16$nullable $tmp84 = $tmp82(param0);
*(&local0) = $tmp84;
// line 125
panda$core$Int16$nullable $tmp85 = *(&local0);
panda$core$Bit $tmp86 = panda$core$Bit$init$builtin_bit(!$tmp85.nonnull);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block1; else goto block2;
block1:;
// line 126
return ((panda$core$Int32$nullable) { .nonnull = false });
block2:;
// line 128
$fn89 $tmp88 = ($fn89) param0->$class->vtable[7];
panda$core$Int16$nullable $tmp90 = $tmp88(param0);
*(&local1) = $tmp90;
// line 129
panda$core$Int16$nullable $tmp91 = *(&local1);
panda$core$Bit $tmp92 = panda$core$Bit$init$builtin_bit(!$tmp91.nonnull);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block3; else goto block4;
block3:;
// line 130
return ((panda$core$Int32$nullable) { .nonnull = false });
block4:;
// line 132
panda$io$ByteOrder* $tmp94 = &param0->byteOrder;
panda$io$ByteOrder $tmp95 = *$tmp94;
panda$io$ByteOrder$wrapper* $tmp96;
$tmp96 = (panda$io$ByteOrder$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp96->value = $tmp95;
panda$core$Int64 $tmp97 = (panda$core$Int64) {0};
panda$io$ByteOrder $tmp98 = panda$io$ByteOrder$init$panda$core$Int64($tmp97);
panda$io$ByteOrder$wrapper* $tmp99;
$tmp99 = (panda$io$ByteOrder$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp99->value = $tmp98;
ITable* $tmp100 = ((panda$core$Equatable*) $tmp96)->$class->itable;
while ($tmp100->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[0];
panda$core$Bit $tmp103 = $tmp101(((panda$core$Equatable*) $tmp96), ((panda$core$Equatable*) $tmp99));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp96)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp99)));
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block5; else goto block7;
block5:;
// line 133
panda$core$Int16$nullable $tmp105 = *(&local1);
panda$core$Int16 $tmp106 = (panda$core$Int16) {16};
panda$core$Int32 $tmp107 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) $tmp105.value), $tmp106);
panda$core$Int16$nullable $tmp108 = *(&local0);
panda$core$Int32 $tmp109 = panda$core$Int32$init$panda$core$Int16(((panda$core$Int16) $tmp108.value));
int32_t $tmp110 = $tmp107.value;
int32_t $tmp111 = $tmp109.value;
int32_t $tmp112 = $tmp110 + $tmp111;
panda$core$Int32 $tmp113 = (panda$core$Int32) {$tmp112};
return ((panda$core$Int32$nullable) { $tmp113, true });
block7:;
// line 1
// line 136
panda$core$Int16$nullable $tmp114 = *(&local0);
panda$core$Int16 $tmp115 = (panda$core$Int16) {16};
panda$core$Int32 $tmp116 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) $tmp114.value), $tmp115);
panda$core$Int16$nullable $tmp117 = *(&local1);
panda$core$Int32 $tmp118 = panda$core$Int32$init$panda$core$Int16(((panda$core$Int16) $tmp117.value));
int32_t $tmp119 = $tmp116.value;
int32_t $tmp120 = $tmp118.value;
int32_t $tmp121 = $tmp119 + $tmp120;
panda$core$Int32 $tmp122 = (panda$core$Int32) {$tmp121};
return ((panda$core$Int32$nullable) { $tmp122, true });
block6:;
panda$core$Bit $tmp123 = panda$core$Bit$init$builtin_bit(false);
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp125 = (panda$core$Int64) {123};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s126, $tmp125, &$s127);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$core$Int64$nullable panda$io$InputStream$read$R$panda$core$Int64$Q(panda$io$InputStream* param0) {

panda$core$Int32$nullable local0;
panda$core$Int32$nullable local1;
// line 145
$fn129 $tmp128 = ($fn129) param0->$class->vtable[8];
panda$core$Int32$nullable $tmp130 = $tmp128(param0);
*(&local0) = $tmp130;
// line 146
panda$core$Int32$nullable $tmp131 = *(&local0);
panda$core$Bit $tmp132 = panda$core$Bit$init$builtin_bit(!$tmp131.nonnull);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block1; else goto block2;
block1:;
// line 147
return ((panda$core$Int64$nullable) { .nonnull = false });
block2:;
// line 149
$fn135 $tmp134 = ($fn135) param0->$class->vtable[8];
panda$core$Int32$nullable $tmp136 = $tmp134(param0);
*(&local1) = $tmp136;
// line 150
panda$core$Int32$nullable $tmp137 = *(&local1);
panda$core$Bit $tmp138 = panda$core$Bit$init$builtin_bit(!$tmp137.nonnull);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block3; else goto block4;
block3:;
// line 151
return ((panda$core$Int64$nullable) { .nonnull = false });
block4:;
// line 153
panda$io$ByteOrder* $tmp140 = &param0->byteOrder;
panda$io$ByteOrder $tmp141 = *$tmp140;
panda$io$ByteOrder$wrapper* $tmp142;
$tmp142 = (panda$io$ByteOrder$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp142->value = $tmp141;
panda$core$Int64 $tmp143 = (panda$core$Int64) {0};
panda$io$ByteOrder $tmp144 = panda$io$ByteOrder$init$panda$core$Int64($tmp143);
panda$io$ByteOrder$wrapper* $tmp145;
$tmp145 = (panda$io$ByteOrder$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$ByteOrder$wrapperclass);
$tmp145->value = $tmp144;
ITable* $tmp146 = ((panda$core$Equatable*) $tmp142)->$class->itable;
while ($tmp146->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
panda$core$Bit $tmp149 = $tmp147(((panda$core$Equatable*) $tmp142), ((panda$core$Equatable*) $tmp145));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp142)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp145)));
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block5; else goto block7;
block5:;
// line 154
panda$core$Int32$nullable $tmp151 = *(&local1);
int32_t $tmp152 = ((panda$core$Int32) $tmp151.value).value;
panda$core$Int64 $tmp153 = (panda$core$Int64) {((int64_t) $tmp152)};
panda$core$Int64 $tmp154 = (panda$core$Int64) {32};
panda$core$Int64 $tmp155 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp153, $tmp154);
panda$core$Int32$nullable $tmp156 = *(&local0);
panda$core$Int64 $tmp157 = panda$core$Int64$init$panda$core$Int32(((panda$core$Int32) $tmp156.value));
int64_t $tmp158 = $tmp155.value;
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158 + $tmp159;
panda$core$Int64 $tmp161 = (panda$core$Int64) {$tmp160};
return ((panda$core$Int64$nullable) { $tmp161, true });
block7:;
// line 1
// line 157
panda$core$Int32$nullable $tmp162 = *(&local0);
int32_t $tmp163 = ((panda$core$Int32) $tmp162.value).value;
panda$core$Int64 $tmp164 = (panda$core$Int64) {((int64_t) $tmp163)};
panda$core$Int64 $tmp165 = (panda$core$Int64) {32};
panda$core$Int64 $tmp166 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp164, $tmp165);
panda$core$Int32$nullable $tmp167 = *(&local1);
panda$core$Int64 $tmp168 = panda$core$Int64$init$panda$core$Int32(((panda$core$Int32) $tmp167.value));
int64_t $tmp169 = $tmp166.value;
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169 + $tmp170;
panda$core$Int64 $tmp172 = (panda$core$Int64) {$tmp171};
return ((panda$core$Int64$nullable) { $tmp172, true });
block6:;
panda$core$Bit $tmp173 = panda$core$Bit$init$builtin_bit(false);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp175 = (panda$core$Int64) {144};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s176, $tmp175, &$s177);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$core$Char8$nullable panda$io$InputStream$read$R$panda$core$Char8$Q(panda$io$InputStream* param0) {

panda$core$UInt8$nullable local0;
// line 165
$fn179 $tmp178 = ($fn179) param0->$class->vtable[2];
panda$core$UInt8$nullable $tmp180 = $tmp178(param0);
*(&local0) = $tmp180;
// line 166
panda$core$UInt8$nullable $tmp181 = *(&local0);
panda$core$Bit $tmp182 = panda$core$Bit$init$builtin_bit($tmp181.nonnull);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block1; else goto block2;
block1:;
// line 167
panda$core$UInt8$nullable $tmp184 = *(&local0);
panda$core$Char8 $tmp185 = panda$core$Char8$init$panda$core$UInt8(((panda$core$UInt8) $tmp184.value));
return ((panda$core$Char8$nullable) { ((panda$core$Char8) ((panda$core$Char8$nullable) { $tmp185, true }).value), true });
block2:;
// line 169
return ((panda$core$Char8$nullable) { .nonnull = false });

}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* param0, panda$core$UInt8* param1, panda$core$Int64 param2) {

panda$core$Int64 local0;
panda$core$UInt8$nullable local1;
// line 179
panda$core$Int64 $tmp186 = (panda$core$Int64) {0};
*(&local0) = $tmp186;
// line 180
goto block1;
block1:;
panda$core$Int64 $tmp187 = *(&local0);
int64_t $tmp188 = $tmp187.value;
int64_t $tmp189 = param2.value;
bool $tmp190 = $tmp188 < $tmp189;
panda$core$Bit $tmp191 = (panda$core$Bit) {$tmp190};
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block2; else goto block3;
block2:;
// line 181
$fn194 $tmp193 = ($fn194) param0->$class->vtable[2];
panda$core$UInt8$nullable $tmp195 = $tmp193(param0);
*(&local1) = $tmp195;
// line 182
panda$core$UInt8$nullable $tmp196 = *(&local1);
panda$core$Bit $tmp197 = panda$core$Bit$init$builtin_bit(!$tmp196.nonnull);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block4; else goto block5;
block4:;
// line 183
goto block3;
block5:;
// line 185
panda$core$Int64 $tmp199 = *(&local0);
panda$core$UInt8$nullable $tmp200 = *(&local1);
int64_t $tmp201 = $tmp199.value;
param1[$tmp201] = ((panda$core$UInt8) $tmp200.value);
// line 186
panda$core$Int64 $tmp202 = *(&local0);
panda$core$Int64 $tmp203 = (panda$core$Int64) {1};
int64_t $tmp204 = $tmp202.value;
int64_t $tmp205 = $tmp203.value;
int64_t $tmp206 = $tmp204 + $tmp205;
panda$core$Int64 $tmp207 = (panda$core$Int64) {$tmp206};
*(&local0) = $tmp207;
goto block1;
block3:;
// line 188
panda$core$Int64 $tmp208 = *(&local0);
return $tmp208;

}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* param0, panda$core$Int8* param1, panda$core$Int64 param2) {

// line 196
$fn210 $tmp209 = ($fn210) param0->$class->vtable[11];
panda$core$Int64 $tmp211 = $tmp209(param0, ((panda$core$UInt8*) param1), param2);
return $tmp211;

}
panda$core$Int64 panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$InputStream* param0, panda$core$Char8* param1, panda$core$Int64 param2) {

// line 204
$fn213 $tmp212 = ($fn213) param0->$class->vtable[11];
panda$core$Int64 $tmp214 = $tmp212(param0, ((panda$core$UInt8*) param1), param2);
return $tmp214;

}
panda$core$String* panda$io$InputStream$readFully$R$panda$core$String(panda$io$InputStream* param0) {

panda$core$Int64 local0;
panda$core$MutableString* local1 = NULL;
panda$core$Int8* local2;
panda$core$Int64 local3;
// line 213
panda$core$Int64 $tmp215 = (panda$core$Int64) {2048};
*(&local0) = $tmp215;
// line 214
panda$core$MutableString* $tmp216 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp216);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp217 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
*(&local1) = $tmp216;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
// line 215
panda$core$Int64 $tmp218 = *(&local0);
int64_t $tmp219 = $tmp218.value;
panda$core$Int8* $tmp220 = ((panda$core$Int8*) pandaZAlloc($tmp219 * 1));
*(&local2) = $tmp220;
// line 216
goto block1;
block1:;
// line 217
panda$core$Int8* $tmp221 = *(&local2);
panda$core$Int64 $tmp222 = *(&local0);
panda$core$Int64 $tmp223 = panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64(param0, $tmp221, $tmp222);
*(&local3) = $tmp223;
// line 218
panda$core$Int64 $tmp224 = *(&local3);
panda$core$Int64 $tmp225 = (panda$core$Int64) {0};
int64_t $tmp226 = $tmp224.value;
int64_t $tmp227 = $tmp225.value;
bool $tmp228 = $tmp226 <= $tmp227;
panda$core$Bit $tmp229 = (panda$core$Bit) {$tmp228};
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block3; else goto block4;
block3:;
// line 219
goto block2;
block4:;
// line 221
panda$core$MutableString* $tmp231 = *(&local1);
panda$core$Int8* $tmp232 = *(&local2);
panda$core$Int64 $tmp233 = *(&local3);
panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp231, ((panda$core$Char8*) $tmp232), $tmp233);
goto block1;
block2:;
// line 223
panda$core$Int8* $tmp234 = *(&local2);
pandaFree($tmp234);
// line 224
panda$core$MutableString* $tmp235 = *(&local1);
panda$core$String* $tmp236 = panda$core$MutableString$finish$R$panda$core$String($tmp235);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
panda$core$MutableString* $tmp237 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp236;

}
panda$core$String* panda$io$InputStream$readLine$R$panda$core$String$Q(panda$io$InputStream* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$Char8$nullable local1;
panda$core$Bit local2;
// line 232
panda$core$MutableString* $tmp238 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp238);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp239 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
*(&local0) = $tmp238;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// line 233
goto block1;
block1:;
// line 234
$fn241 $tmp240 = ($fn241) param0->$class->vtable[10];
panda$core$Char8$nullable $tmp242 = $tmp240(param0);
*(&local1) = $tmp242;
// line 235
panda$core$Char8$nullable $tmp243 = *(&local1);
panda$core$Bit $tmp244 = panda$core$Bit$init$builtin_bit(!$tmp243.nonnull);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block3; else goto block4;
block3:;
// line 236
panda$core$MutableString* $tmp246 = *(&local0);
panda$core$Int64* $tmp247 = &$tmp246->_length;
panda$core$Int64 $tmp248 = *$tmp247;
panda$core$Int64 $tmp249 = (panda$core$Int64) {0};
panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp248, $tmp249);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block5; else goto block6;
block5:;
// line 237
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp252 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block6:;
// line 239
goto block2;
block4:;
// line 241
panda$core$Char8$nullable $tmp253 = *(&local1);
panda$core$UInt8 $tmp254 = (panda$core$UInt8) {10};
panda$core$Char8 $tmp255 = panda$core$Char8$init$panda$core$UInt8($tmp254);
panda$core$Bit $tmp256 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp253.value), $tmp255);
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block7; else goto block8;
block7:;
// line 242
panda$core$MutableString* $tmp258 = *(&local0);
panda$core$Int64* $tmp259 = &$tmp258->_length;
panda$core$Int64 $tmp260 = *$tmp259;
panda$core$Int64 $tmp261 = (panda$core$Int64) {0};
int64_t $tmp262 = $tmp260.value;
int64_t $tmp263 = $tmp261.value;
bool $tmp264 = $tmp262 > $tmp263;
panda$core$Bit $tmp265 = (panda$core$Bit) {$tmp264};
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block9; else goto block10;
block9:;
panda$core$MutableString* $tmp267 = *(&local0);
panda$core$MutableString* $tmp268 = *(&local0);
panda$core$Int64* $tmp269 = &$tmp268->_length;
panda$core$Int64 $tmp270 = *$tmp269;
panda$core$Int64 $tmp271 = (panda$core$Int64) {1};
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271.value;
int64_t $tmp274 = $tmp272 - $tmp273;
panda$core$Int64 $tmp275 = (panda$core$Int64) {$tmp274};
panda$core$Char32 $tmp276 = panda$core$MutableString$$IDX$panda$core$Int64$R$panda$core$Char32($tmp267, $tmp275);
panda$core$Int32 $tmp277 = (panda$core$Int32) {13};
panda$core$Char32 $tmp278 = panda$core$Char32$init$panda$core$Int32($tmp277);
panda$core$Bit $tmp279 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($tmp276, $tmp278);
*(&local2) = $tmp279;
goto block11;
block10:;
*(&local2) = $tmp265;
goto block11;
block11:;
panda$core$Bit $tmp280 = *(&local2);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block12; else goto block13;
block12:;
// line 243
panda$core$MutableString* $tmp282 = *(&local0);
panda$core$Int64* $tmp283 = &$tmp282->_length;
panda$core$Int64 $tmp284 = *$tmp283;
panda$core$Int64 $tmp285 = (panda$core$Int64) {1};
int64_t $tmp286 = $tmp284.value;
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286 - $tmp287;
panda$core$Int64 $tmp289 = (panda$core$Int64) {$tmp288};
panda$core$Int64* $tmp290 = &$tmp282->_length;
*$tmp290 = $tmp289;
goto block13;
block13:;
// line 245
goto block2;
block8:;
// line 247
panda$core$MutableString* $tmp291 = *(&local0);
panda$core$Char8$nullable $tmp292 = *(&local1);
panda$core$MutableString$append$panda$core$Char8($tmp291, ((panda$core$Char8) $tmp292.value));
goto block1;
block2:;
// line 249
panda$core$MutableString* $tmp293 = *(&local0);
panda$core$String* $tmp294 = panda$core$MutableString$finish$R$panda$core$String($tmp293);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
panda$core$MutableString* $tmp295 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp294;

}
panda$core$Int64 panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64(panda$io$InputStream* param0, panda$io$OutputStream* param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$UInt8* local2;
panda$core$Int64 local3;
// line 257
panda$core$Int64 $tmp296 = (panda$core$Int64) {0};
*(&local0) = $tmp296;
// line 258
panda$core$Int64 $tmp297 = (panda$core$Int64) {2048};
*(&local1) = $tmp297;
// line 259
panda$core$Int64 $tmp298 = *(&local1);
int64_t $tmp299 = $tmp298.value;
panda$core$UInt8* $tmp300 = ((panda$core$UInt8*) pandaZAlloc($tmp299 * 1));
*(&local2) = $tmp300;
// line 260
goto block1;
block1:;
// line 261
panda$core$UInt8* $tmp301 = *(&local2);
panda$core$Int64 $tmp302 = *(&local1);
$fn304 $tmp303 = ($fn304) param0->$class->vtable[11];
panda$core$Int64 $tmp305 = $tmp303(param0, $tmp301, $tmp302);
*(&local3) = $tmp305;
// line 262
panda$core$Int64 $tmp306 = *(&local3);
panda$core$Int64 $tmp307 = (panda$core$Int64) {0};
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307.value;
bool $tmp310 = $tmp308 <= $tmp309;
panda$core$Bit $tmp311 = (panda$core$Bit) {$tmp310};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block3; else goto block4;
block3:;
// line 263
goto block2;
block4:;
// line 265
panda$core$Int64 $tmp313 = *(&local0);
panda$core$Int64 $tmp314 = *(&local3);
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315 + $tmp316;
panda$core$Int64 $tmp318 = (panda$core$Int64) {$tmp317};
*(&local0) = $tmp318;
// line 266
panda$core$UInt8* $tmp319 = *(&local2);
panda$core$Int64 $tmp320 = *(&local3);
$fn322 $tmp321 = ($fn322) param1->$class->vtable[10];
$tmp321(param1, $tmp319, $tmp320);
goto block1;
block2:;
// line 268
panda$core$UInt8* $tmp323 = *(&local2);
pandaFree($tmp323);
// line 269
panda$core$Int64 $tmp324 = *(&local0);
return $tmp324;

}
panda$collections$Iterator* panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(panda$io$InputStream* param0) {

// line 276
panda$io$InputStream$LineIterator* $tmp325 = (panda$io$InputStream$LineIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$io$InputStream$LineIterator$class);
panda$io$InputStream$LineIterator$init$panda$io$InputStream($tmp325, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp325)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
return ((panda$collections$Iterator*) $tmp325);

}
void panda$io$InputStream$init(panda$io$InputStream* param0) {

// line 14
panda$core$Int64 $tmp326 = (panda$core$Int64) {0};
panda$io$ByteOrder $tmp327 = panda$io$ByteOrder$init$panda$core$Int64($tmp326);
panda$io$ByteOrder* $tmp328 = &param0->byteOrder;
*$tmp328 = $tmp327;
return;

}
void panda$io$InputStream$cleanup(panda$io$InputStream* param0) {

return;

}

