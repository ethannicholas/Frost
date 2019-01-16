#include "panda/io/IndentedOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
panda$io$IndentedOutputStream$class_type panda$io$IndentedOutputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$OutputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$IndentedOutputStream$cleanup, panda$io$IndentedOutputStream$write$panda$core$UInt8, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int8, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$Int64, panda$io$IndentedOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Int8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Char8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine, panda$io$OutputStream$flush, panda$io$OutputStream$close, panda$io$IndentedOutputStream$indentIfNeeded} };

typedef void (*$fn24)(panda$io$OutputStream*, panda$core$UInt8);
typedef void (*$fn51)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn70)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn90)(panda$io$OutputStream*, panda$core$UInt8*, panda$core$Int64);
typedef void (*$fn129)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 29, 1042140495667569485, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };

void panda$io$IndentedOutputStream$init$panda$io$OutputStream(panda$io$IndentedOutputStream* param0, panda$io$OutputStream* param1) {

// line 15
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
panda$core$Int64* $tmp3 = &param0->level;
*$tmp3 = $tmp2;
// line 20
panda$core$Int64 $tmp4 = (panda$core$Int64) {4};
panda$core$Int64* $tmp5 = &param0->indentSize;
*$tmp5 = $tmp4;
// line 23
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s6));
panda$core$String** $tmp7 = &param0->indent;
panda$core$String* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$String** $tmp9 = &param0->indent;
*$tmp9 = &$s10;
// line 26
panda$core$Bit $tmp11 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp12 = &param0->atLineStart;
*$tmp12 = $tmp11;
// line 37
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$OutputStream** $tmp13 = &param0->out;
panda$io$OutputStream* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$io$OutputStream** $tmp15 = &param0->out;
*$tmp15 = param1;
// line 38
panda$io$OutputStream$init(((panda$io$OutputStream*) param0));
return;

}
void panda$io$IndentedOutputStream$write$panda$core$UInt8(panda$io$IndentedOutputStream* param0, panda$core$UInt8 param1) {

// line 43
panda$core$UInt8 $tmp16 = (panda$core$UInt8) {10};
panda$core$Bit $tmp17 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(param1, $tmp16);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block3;
block1:;
// line 44
panda$core$Bit $tmp19 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp20 = &param0->atLineStart;
*$tmp20 = $tmp19;
goto block2;
block3:;
// line 1
// line 47
panda$io$IndentedOutputStream$indentIfNeeded(param0);
goto block2;
block2:;
// line 49
panda$io$OutputStream** $tmp21 = &param0->out;
panda$io$OutputStream* $tmp22 = *$tmp21;
$fn24 $tmp23 = ($fn24) $tmp22->$class->vtable[2];
$tmp23($tmp22, param1);
return;

}
void panda$io$IndentedOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64(panda$io$IndentedOutputStream* param0, panda$core$UInt8* param1, panda$core$Int64 param2) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 54
panda$core$Int64 $tmp25 = (panda$core$Int64) {0};
*(&local0) = $tmp25;
// line 55
panda$core$Int64 $tmp26 = *(&local0);
*(&local1) = $tmp26;
// line 56
goto block1;
block1:;
panda$core$Int64 $tmp27 = *(&local1);
int64_t $tmp28 = $tmp27.value;
int64_t $tmp29 = param2.value;
bool $tmp30 = $tmp28 < $tmp29;
panda$core$Bit $tmp31 = (panda$core$Bit) {$tmp30};
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block2; else goto block3;
block2:;
// line 57
panda$core$Int64 $tmp33 = *(&local1);
int64_t $tmp34 = $tmp33.value;
panda$core$UInt8 $tmp35 = param1[$tmp34];
panda$core$UInt8 $tmp36 = (panda$core$UInt8) {10};
panda$core$Bit $tmp37 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit($tmp35, $tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block4; else goto block6;
block4:;
// line 58
panda$io$OutputStream** $tmp39 = &param0->out;
panda$io$OutputStream* $tmp40 = *$tmp39;
panda$core$Int64 $tmp41 = *(&local0);
int64_t $tmp42 = $tmp41.value;
panda$core$UInt8* $tmp43 = param1 + $tmp42;
panda$core$Int64 $tmp44 = *(&local1);
panda$core$Int64 $tmp45 = *(&local0);
int64_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46 - $tmp47;
panda$core$Int64 $tmp49 = (panda$core$Int64) {$tmp48};
$fn51 $tmp50 = ($fn51) $tmp40->$class->vtable[10];
$tmp50($tmp40, $tmp43, $tmp49);
// line 59
panda$core$Int64 $tmp52 = *(&local1);
*(&local0) = $tmp52;
// line 60
panda$core$Bit $tmp53 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp54 = &param0->atLineStart;
*$tmp54 = $tmp53;
goto block5;
block6:;
// line 62
panda$core$Bit* $tmp55 = &param0->atLineStart;
panda$core$Bit $tmp56 = *$tmp55;
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block7; else goto block8;
block7:;
// line 63
panda$io$OutputStream** $tmp58 = &param0->out;
panda$io$OutputStream* $tmp59 = *$tmp58;
panda$core$Int64 $tmp60 = *(&local0);
int64_t $tmp61 = $tmp60.value;
panda$core$UInt8* $tmp62 = param1 + $tmp61;
panda$core$Int64 $tmp63 = *(&local1);
panda$core$Int64 $tmp64 = *(&local0);
int64_t $tmp65 = $tmp63.value;
int64_t $tmp66 = $tmp64.value;
int64_t $tmp67 = $tmp65 - $tmp66;
panda$core$Int64 $tmp68 = (panda$core$Int64) {$tmp67};
$fn70 $tmp69 = ($fn70) $tmp59->$class->vtable[10];
$tmp69($tmp59, $tmp62, $tmp68);
// line 64
panda$core$Int64 $tmp71 = *(&local1);
*(&local0) = $tmp71;
// line 65
panda$io$IndentedOutputStream$indentIfNeeded(param0);
goto block8;
block8:;
goto block5;
block5:;
// line 67
panda$core$Int64 $tmp72 = *(&local1);
panda$core$Int64 $tmp73 = (panda$core$Int64) {1};
int64_t $tmp74 = $tmp72.value;
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74 + $tmp75;
panda$core$Int64 $tmp77 = (panda$core$Int64) {$tmp76};
*(&local1) = $tmp77;
goto block1;
block3:;
// line 69
panda$io$OutputStream** $tmp78 = &param0->out;
panda$io$OutputStream* $tmp79 = *$tmp78;
panda$core$Int64 $tmp80 = *(&local0);
int64_t $tmp81 = $tmp80.value;
panda$core$UInt8* $tmp82 = param1 + $tmp81;
panda$core$Int64 $tmp83 = *(&local1);
panda$core$Int64 $tmp84 = *(&local0);
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85 - $tmp86;
panda$core$Int64 $tmp88 = (panda$core$Int64) {$tmp87};
$fn90 $tmp89 = ($fn90) $tmp79->$class->vtable[10];
$tmp89($tmp79, $tmp82, $tmp88);
return;

}
void panda$io$IndentedOutputStream$indentIfNeeded(panda$io$IndentedOutputStream* param0) {

// line 74
panda$core$Bit* $tmp91 = &param0->atLineStart;
panda$core$Bit $tmp92 = *$tmp91;
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block1; else goto block2;
block1:;
// line 75
panda$core$Bit $tmp94 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp95 = &param0->atLineStart;
*$tmp95 = $tmp94;
// line 76
panda$core$String** $tmp96 = &param0->indent;
panda$core$String* $tmp97 = *$tmp96;
panda$core$Int64* $tmp98 = &$tmp97->_length;
panda$core$Int64 $tmp99 = *$tmp98;
panda$core$Int64* $tmp100 = &param0->indentSize;
panda$core$Int64 $tmp101 = *$tmp100;
panda$core$Int64* $tmp102 = &param0->level;
panda$core$Int64 $tmp103 = *$tmp102;
int64_t $tmp104 = $tmp101.value;
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104 * $tmp105;
panda$core$Int64 $tmp107 = (panda$core$Int64) {$tmp106};
int64_t $tmp108 = $tmp99.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 != $tmp109;
panda$core$Bit $tmp111 = (panda$core$Bit) {$tmp110};
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block3; else goto block4;
block3:;
// line 77
panda$core$Int64* $tmp113 = &param0->indentSize;
panda$core$Int64 $tmp114 = *$tmp113;
panda$core$Int64* $tmp115 = &param0->level;
panda$core$Int64 $tmp116 = *$tmp115;
int64_t $tmp117 = $tmp114.value;
int64_t $tmp118 = $tmp116.value;
int64_t $tmp119 = $tmp117 * $tmp118;
panda$core$Int64 $tmp120 = (panda$core$Int64) {$tmp119};
panda$core$String* $tmp121 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s122, $tmp120);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
panda$core$String** $tmp123 = &param0->indent;
panda$core$String* $tmp124 = *$tmp123;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
panda$core$String** $tmp125 = &param0->indent;
*$tmp125 = $tmp121;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing REF($37:panda.core.String)
goto block4;
block4:;
// line 79
panda$core$String** $tmp126 = &param0->indent;
panda$core$String* $tmp127 = *$tmp126;
$fn129 $tmp128 = ($fn129) ((panda$io$OutputStream*) param0)->$class->vtable[17];
$tmp128(((panda$io$OutputStream*) param0), $tmp127);
goto block2;
block2:;
return;

}
void panda$io$IndentedOutputStream$cleanup(panda$io$IndentedOutputStream* param0) {

// line 10
panda$io$OutputStream$cleanup(((panda$io$OutputStream*) param0));
panda$core$String** $tmp130 = &param0->indent;
panda$core$String* $tmp131 = *$tmp130;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
panda$io$OutputStream** $tmp132 = &param0->out;
panda$io$OutputStream* $tmp133 = *$tmp132;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
return;

}






