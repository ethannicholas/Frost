#include "frost/io/IndentedOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt8.h"


static frost$core$String $s1;
frost$io$IndentedOutputStream$class_type frost$io$IndentedOutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$io$OutputStream$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$io$IndentedOutputStream$cleanup, frost$io$IndentedOutputStream$write$frost$core$UInt8, frost$io$OutputStream$write$frost$core$UInt16, frost$io$OutputStream$write$frost$core$UInt32, frost$io$OutputStream$write$frost$core$UInt64, frost$io$OutputStream$write$frost$core$Int8, frost$io$OutputStream$write$frost$core$Int16, frost$io$OutputStream$write$frost$core$Int32, frost$io$OutputStream$write$frost$core$Int64, frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$core$Char8, frost$io$OutputStream$print$frost$core$String, frost$io$OutputStream$print$frost$core$Object, frost$io$OutputStream$printLine$frost$core$String, frost$io$OutputStream$printLine$frost$core$Object, frost$io$OutputStream$printLine, frost$io$OutputStream$flush, frost$io$OutputStream$close, frost$io$IndentedOutputStream$indentIfNeeded} };

typedef void (*$fn24)(frost$io$OutputStream*, frost$core$UInt8);
typedef void (*$fn51)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef void (*$fn70)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef void (*$fn90)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef void (*$fn129)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 29, 2627971301976642663, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };

void frost$io$IndentedOutputStream$init$frost$io$OutputStream(frost$io$IndentedOutputStream* param0, frost$io$OutputStream* param1) {

// line 15
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->level;
*$tmp3 = $tmp2;
// line 20
frost$core$Int64 $tmp4 = (frost$core$Int64) {4};
frost$core$Int64* $tmp5 = &param0->indentSize;
*$tmp5 = $tmp4;
// line 23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6));
frost$core$String** $tmp7 = &param0->indent;
frost$core$String* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$String** $tmp9 = &param0->indent;
*$tmp9 = &$s10;
// line 26
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp12 = &param0->atLineStart;
*$tmp12 = $tmp11;
// line 37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$OutputStream** $tmp13 = &param0->out;
frost$io$OutputStream* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$io$OutputStream** $tmp15 = &param0->out;
*$tmp15 = param1;
// line 38
frost$io$OutputStream$init(((frost$io$OutputStream*) param0));
return;

}
void frost$io$IndentedOutputStream$write$frost$core$UInt8(frost$io$IndentedOutputStream* param0, frost$core$UInt8 param1) {

// line 43
frost$core$UInt8 $tmp16 = (frost$core$UInt8) {10};
frost$core$Bit $tmp17 = frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit(param1, $tmp16);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block3;
block1:;
// line 44
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp20 = &param0->atLineStart;
*$tmp20 = $tmp19;
goto block2;
block3:;
// line 1
// line 47
frost$io$IndentedOutputStream$indentIfNeeded(param0);
goto block2;
block2:;
// line 49
frost$io$OutputStream** $tmp21 = &param0->out;
frost$io$OutputStream* $tmp22 = *$tmp21;
$fn24 $tmp23 = ($fn24) $tmp22->$class->vtable[2];
$tmp23($tmp22, param1);
return;

}
void frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64(frost$io$IndentedOutputStream* param0, frost$core$UInt8* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 54
frost$core$Int64 $tmp25 = (frost$core$Int64) {0};
*(&local0) = $tmp25;
// line 55
frost$core$Int64 $tmp26 = *(&local0);
*(&local1) = $tmp26;
// line 56
goto block1;
block1:;
frost$core$Int64 $tmp27 = *(&local1);
int64_t $tmp28 = $tmp27.value;
int64_t $tmp29 = param2.value;
bool $tmp30 = $tmp28 < $tmp29;
frost$core$Bit $tmp31 = (frost$core$Bit) {$tmp30};
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block2; else goto block3;
block2:;
// line 57
frost$core$Int64 $tmp33 = *(&local1);
int64_t $tmp34 = $tmp33.value;
frost$core$UInt8 $tmp35 = param1[$tmp34];
frost$core$UInt8 $tmp36 = (frost$core$UInt8) {10};
frost$core$Bit $tmp37 = frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit($tmp35, $tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block4; else goto block6;
block4:;
// line 58
frost$io$OutputStream** $tmp39 = &param0->out;
frost$io$OutputStream* $tmp40 = *$tmp39;
frost$core$Int64 $tmp41 = *(&local0);
int64_t $tmp42 = $tmp41.value;
frost$core$UInt8* $tmp43 = param1 + $tmp42;
frost$core$Int64 $tmp44 = *(&local1);
frost$core$Int64 $tmp45 = *(&local0);
int64_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45.value;
int64_t $tmp48 = $tmp46 - $tmp47;
frost$core$Int64 $tmp49 = (frost$core$Int64) {$tmp48};
$fn51 $tmp50 = ($fn51) $tmp40->$class->vtable[10];
$tmp50($tmp40, $tmp43, $tmp49);
// line 59
frost$core$Int64 $tmp52 = *(&local1);
*(&local0) = $tmp52;
// line 60
frost$core$Bit $tmp53 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp54 = &param0->atLineStart;
*$tmp54 = $tmp53;
goto block5;
block6:;
// line 62
frost$core$Bit* $tmp55 = &param0->atLineStart;
frost$core$Bit $tmp56 = *$tmp55;
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block7; else goto block8;
block7:;
// line 63
frost$io$OutputStream** $tmp58 = &param0->out;
frost$io$OutputStream* $tmp59 = *$tmp58;
frost$core$Int64 $tmp60 = *(&local0);
int64_t $tmp61 = $tmp60.value;
frost$core$UInt8* $tmp62 = param1 + $tmp61;
frost$core$Int64 $tmp63 = *(&local1);
frost$core$Int64 $tmp64 = *(&local0);
int64_t $tmp65 = $tmp63.value;
int64_t $tmp66 = $tmp64.value;
int64_t $tmp67 = $tmp65 - $tmp66;
frost$core$Int64 $tmp68 = (frost$core$Int64) {$tmp67};
$fn70 $tmp69 = ($fn70) $tmp59->$class->vtable[10];
$tmp69($tmp59, $tmp62, $tmp68);
// line 64
frost$core$Int64 $tmp71 = *(&local1);
*(&local0) = $tmp71;
// line 65
frost$io$IndentedOutputStream$indentIfNeeded(param0);
goto block8;
block8:;
goto block5;
block5:;
// line 67
frost$core$Int64 $tmp72 = *(&local1);
frost$core$Int64 $tmp73 = (frost$core$Int64) {1};
int64_t $tmp74 = $tmp72.value;
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74 + $tmp75;
frost$core$Int64 $tmp77 = (frost$core$Int64) {$tmp76};
*(&local1) = $tmp77;
goto block1;
block3:;
// line 69
frost$io$OutputStream** $tmp78 = &param0->out;
frost$io$OutputStream* $tmp79 = *$tmp78;
frost$core$Int64 $tmp80 = *(&local0);
int64_t $tmp81 = $tmp80.value;
frost$core$UInt8* $tmp82 = param1 + $tmp81;
frost$core$Int64 $tmp83 = *(&local1);
frost$core$Int64 $tmp84 = *(&local0);
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85 - $tmp86;
frost$core$Int64 $tmp88 = (frost$core$Int64) {$tmp87};
$fn90 $tmp89 = ($fn90) $tmp79->$class->vtable[10];
$tmp89($tmp79, $tmp82, $tmp88);
return;

}
void frost$io$IndentedOutputStream$indentIfNeeded(frost$io$IndentedOutputStream* param0) {

// line 74
frost$core$Bit* $tmp91 = &param0->atLineStart;
frost$core$Bit $tmp92 = *$tmp91;
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block1; else goto block2;
block1:;
// line 75
frost$core$Bit $tmp94 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp95 = &param0->atLineStart;
*$tmp95 = $tmp94;
// line 76
frost$core$String** $tmp96 = &param0->indent;
frost$core$String* $tmp97 = *$tmp96;
frost$core$Int64* $tmp98 = &$tmp97->_length;
frost$core$Int64 $tmp99 = *$tmp98;
frost$core$Int64* $tmp100 = &param0->indentSize;
frost$core$Int64 $tmp101 = *$tmp100;
frost$core$Int64* $tmp102 = &param0->level;
frost$core$Int64 $tmp103 = *$tmp102;
int64_t $tmp104 = $tmp101.value;
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104 * $tmp105;
frost$core$Int64 $tmp107 = (frost$core$Int64) {$tmp106};
int64_t $tmp108 = $tmp99.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 != $tmp109;
frost$core$Bit $tmp111 = (frost$core$Bit) {$tmp110};
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block3; else goto block4;
block3:;
// line 77
frost$core$Int64* $tmp113 = &param0->indentSize;
frost$core$Int64 $tmp114 = *$tmp113;
frost$core$Int64* $tmp115 = &param0->level;
frost$core$Int64 $tmp116 = *$tmp115;
int64_t $tmp117 = $tmp114.value;
int64_t $tmp118 = $tmp116.value;
int64_t $tmp119 = $tmp117 * $tmp118;
frost$core$Int64 $tmp120 = (frost$core$Int64) {$tmp119};
frost$core$String* $tmp121 = frost$core$String$$MUL$frost$core$Int64$R$frost$core$String(&$s122, $tmp120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$String** $tmp123 = &param0->indent;
frost$core$String* $tmp124 = *$tmp123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$String** $tmp125 = &param0->indent;
*$tmp125 = $tmp121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($37:frost.core.String)
goto block4;
block4:;
// line 79
frost$core$String** $tmp126 = &param0->indent;
frost$core$String* $tmp127 = *$tmp126;
$fn129 $tmp128 = ($fn129) ((frost$io$OutputStream*) param0)->$class->vtable[17];
$tmp128(((frost$io$OutputStream*) param0), $tmp127);
goto block2;
block2:;
return;

}
void frost$io$IndentedOutputStream$cleanup(frost$io$IndentedOutputStream* param0) {

// line 10
frost$io$OutputStream$cleanup(((frost$io$OutputStream*) param0));
frost$core$String** $tmp130 = &param0->indent;
frost$core$String* $tmp131 = *$tmp130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$io$OutputStream** $tmp132 = &param0->out;
frost$io$OutputStream* $tmp133 = *$tmp132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
return;

}






