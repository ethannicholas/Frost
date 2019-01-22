#include "frost/io/IndentedOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Error.h"
#include "frost/core/UInt8.h"


static frost$core$String $s1;
frost$io$IndentedOutputStream$class_type frost$io$IndentedOutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$io$OutputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$IndentedOutputStream$cleanup, frost$io$IndentedOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q, frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$R$frost$core$Error$Q, frost$io$OutputStream$flush$R$frost$core$Error$Q, frost$io$OutputStream$close$R$frost$core$Error$Q, frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q} };

typedef frost$core$Error* (*$fn25)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn57)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Error* (*$fn77)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Error* (*$fn99)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Error* (*$fn143)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 29, 2627971301976642663, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };

void frost$io$IndentedOutputStream$init$frost$io$OutputStream(frost$io$IndentedOutputStream* param0, frost$io$OutputStream* param1) {

// line 22
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->level;
*$tmp3 = $tmp2;
// line 27
frost$core$Int64 $tmp4 = (frost$core$Int64) {4};
frost$core$Int64* $tmp5 = &param0->indentSize;
*$tmp5 = $tmp4;
// line 30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6));
frost$core$String** $tmp7 = &param0->indent;
frost$core$String* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$String** $tmp9 = &param0->indent;
*$tmp9 = &$s10;
// line 33
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp12 = &param0->atLineStart;
*$tmp12 = $tmp11;
// line 44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$OutputStream** $tmp13 = &param0->out;
frost$io$OutputStream* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$io$OutputStream** $tmp15 = &param0->out;
*$tmp15 = param1;
// line 45
frost$io$OutputStream$init(((frost$io$OutputStream*) param0));
return;

}
frost$core$Error* frost$io$IndentedOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q(frost$io$IndentedOutputStream* param0, frost$core$UInt8 param1) {

frost$core$Error* local0 = NULL;
// line 50
*(&local0) = ((frost$core$Error*) NULL);
// line 51
frost$core$UInt8 $tmp16 = (frost$core$UInt8) {10};
frost$core$Bit $tmp17 = frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit(param1, $tmp16);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block3; else goto block5;
block3:;
// line 52
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp20 = &param0->atLineStart;
*$tmp20 = $tmp19;
goto block4;
block5:;
// line 1
// line 55
frost$core$Error* $tmp21 = frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(param0);
if ($tmp21 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local0) = $tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
goto block4;
block4:;
// line 57
frost$io$OutputStream** $tmp22 = &param0->out;
frost$io$OutputStream* $tmp23 = *$tmp22;
$fn25 $tmp24 = ($fn25) $tmp23->$class->vtable[2];
frost$core$Error* $tmp26 = $tmp24($tmp23, param1);
if ($tmp26 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local0) = $tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// line 58
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp27 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 61
frost$core$Error* $tmp28 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Error* $tmp29 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp28;
block2:;
frost$core$Error* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local0) = ((frost$core$Error*) NULL);
goto block10;
block10:;

}
frost$core$Error* frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$IndentedOutputStream* param0, frost$core$UInt8* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 67
*(&local0) = ((frost$core$Error*) NULL);
// line 68
frost$core$Int64 $tmp31 = (frost$core$Int64) {0};
*(&local1) = $tmp31;
// line 69
frost$core$Int64 $tmp32 = *(&local1);
*(&local2) = $tmp32;
// line 70
goto block3;
block3:;
frost$core$Int64 $tmp33 = *(&local2);
int64_t $tmp34 = $tmp33.value;
int64_t $tmp35 = param2.value;
bool $tmp36 = $tmp34 < $tmp35;
frost$core$Bit $tmp37 = (frost$core$Bit) {$tmp36};
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block4; else goto block5;
block4:;
// line 71
frost$core$Int64 $tmp39 = *(&local2);
int64_t $tmp40 = $tmp39.value;
frost$core$UInt8 $tmp41 = param1[$tmp40];
frost$core$UInt8 $tmp42 = (frost$core$UInt8) {10};
frost$core$Bit $tmp43 = frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit($tmp41, $tmp42);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block6; else goto block8;
block6:;
// line 72
frost$io$OutputStream** $tmp45 = &param0->out;
frost$io$OutputStream* $tmp46 = *$tmp45;
frost$core$Int64 $tmp47 = *(&local1);
int64_t $tmp48 = $tmp47.value;
frost$core$UInt8* $tmp49 = param1 + $tmp48;
frost$core$Int64 $tmp50 = *(&local2);
frost$core$Int64 $tmp51 = *(&local1);
int64_t $tmp52 = $tmp50.value;
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52 - $tmp53;
frost$core$Int64 $tmp55 = (frost$core$Int64) {$tmp54};
$fn57 $tmp56 = ($fn57) $tmp46->$class->vtable[10];
frost$core$Error* $tmp58 = $tmp56($tmp46, $tmp49, $tmp55);
if ($tmp58 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local0) = $tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// line 73
frost$core$Int64 $tmp59 = *(&local2);
*(&local1) = $tmp59;
// line 74
frost$core$Bit $tmp60 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp61 = &param0->atLineStart;
*$tmp61 = $tmp60;
goto block7;
block8:;
// line 76
frost$core$Bit* $tmp62 = &param0->atLineStart;
frost$core$Bit $tmp63 = *$tmp62;
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block11; else goto block12;
block11:;
// line 77
frost$io$OutputStream** $tmp65 = &param0->out;
frost$io$OutputStream* $tmp66 = *$tmp65;
frost$core$Int64 $tmp67 = *(&local1);
int64_t $tmp68 = $tmp67.value;
frost$core$UInt8* $tmp69 = param1 + $tmp68;
frost$core$Int64 $tmp70 = *(&local2);
frost$core$Int64 $tmp71 = *(&local1);
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71.value;
int64_t $tmp74 = $tmp72 - $tmp73;
frost$core$Int64 $tmp75 = (frost$core$Int64) {$tmp74};
$fn77 $tmp76 = ($fn77) $tmp66->$class->vtable[10];
frost$core$Error* $tmp78 = $tmp76($tmp66, $tmp69, $tmp75);
if ($tmp78 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local0) = $tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// line 78
frost$core$Int64 $tmp79 = *(&local2);
*(&local1) = $tmp79;
// line 79
frost$core$Error* $tmp80 = frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(param0);
if ($tmp80 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local0) = $tmp80;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
goto block12;
block12:;
goto block7;
block7:;
// line 81
frost$core$Int64 $tmp81 = *(&local2);
frost$core$Int64 $tmp82 = (frost$core$Int64) {1};
int64_t $tmp83 = $tmp81.value;
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83 + $tmp84;
frost$core$Int64 $tmp86 = (frost$core$Int64) {$tmp85};
*(&local2) = $tmp86;
goto block3;
block5:;
// line 83
frost$io$OutputStream** $tmp87 = &param0->out;
frost$io$OutputStream* $tmp88 = *$tmp87;
frost$core$Int64 $tmp89 = *(&local1);
int64_t $tmp90 = $tmp89.value;
frost$core$UInt8* $tmp91 = param1 + $tmp90;
frost$core$Int64 $tmp92 = *(&local2);
frost$core$Int64 $tmp93 = *(&local1);
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94 - $tmp95;
frost$core$Int64 $tmp97 = (frost$core$Int64) {$tmp96};
$fn99 $tmp98 = ($fn99) $tmp88->$class->vtable[10];
frost$core$Error* $tmp100 = $tmp98($tmp88, $tmp91, $tmp97);
if ($tmp100 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local0) = $tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// line 84
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp101 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 87
frost$core$Error* $tmp102 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Error* $tmp103 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp102;
block2:;
frost$core$Error* $tmp104 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local0) = ((frost$core$Error*) NULL);
goto block19;
block19:;

}
frost$core$Error* frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(frost$io$IndentedOutputStream* param0) {

// line 93
frost$core$Bit* $tmp105 = &param0->atLineStart;
frost$core$Bit $tmp106 = *$tmp105;
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block1; else goto block2;
block1:;
// line 94
frost$core$Bit $tmp108 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp109 = &param0->atLineStart;
*$tmp109 = $tmp108;
// line 95
frost$core$String** $tmp110 = &param0->indent;
frost$core$String* $tmp111 = *$tmp110;
frost$core$Int64* $tmp112 = &$tmp111->_length;
frost$core$Int64 $tmp113 = *$tmp112;
frost$core$Int64* $tmp114 = &param0->indentSize;
frost$core$Int64 $tmp115 = *$tmp114;
frost$core$Int64* $tmp116 = &param0->level;
frost$core$Int64 $tmp117 = *$tmp116;
int64_t $tmp118 = $tmp115.value;
int64_t $tmp119 = $tmp117.value;
int64_t $tmp120 = $tmp118 * $tmp119;
frost$core$Int64 $tmp121 = (frost$core$Int64) {$tmp120};
int64_t $tmp122 = $tmp113.value;
int64_t $tmp123 = $tmp121.value;
bool $tmp124 = $tmp122 != $tmp123;
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124};
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block3; else goto block4;
block3:;
// line 96
frost$core$Int64* $tmp127 = &param0->indentSize;
frost$core$Int64 $tmp128 = *$tmp127;
frost$core$Int64* $tmp129 = &param0->level;
frost$core$Int64 $tmp130 = *$tmp129;
int64_t $tmp131 = $tmp128.value;
int64_t $tmp132 = $tmp130.value;
int64_t $tmp133 = $tmp131 * $tmp132;
frost$core$Int64 $tmp134 = (frost$core$Int64) {$tmp133};
frost$core$String* $tmp135 = frost$core$String$$MUL$frost$core$Int64$R$frost$core$String(&$s136, $tmp134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$String** $tmp137 = &param0->indent;
frost$core$String* $tmp138 = *$tmp137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$String** $tmp139 = &param0->indent;
*$tmp139 = $tmp135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
goto block4;
block4:;
// line 98
frost$core$String** $tmp140 = &param0->indent;
frost$core$String* $tmp141 = *$tmp140;
$fn143 $tmp142 = ($fn143) ((frost$io$OutputStream*) param0)->$class->vtable[17];
frost$core$Error* $tmp144 = $tmp142(((frost$io$OutputStream*) param0), $tmp141);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
return $tmp144;
block2:;
// line 100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
void frost$io$IndentedOutputStream$cleanup(frost$io$IndentedOutputStream* param0) {

// line 17
frost$io$OutputStream$cleanup(((frost$io$OutputStream*) param0));
frost$core$String** $tmp145 = &param0->indent;
frost$core$String* $tmp146 = *$tmp145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$io$OutputStream** $tmp147 = &param0->out;
frost$io$OutputStream* $tmp148 = *$tmp147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
return;

}






