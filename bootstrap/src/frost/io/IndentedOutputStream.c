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
typedef frost$core$Error* (*$fn61)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Error* (*$fn81)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Error* (*$fn103)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int64);
typedef frost$core$Error* (*$fn152)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 29, 2627971301976642663, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, 8560205828332674625, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x77\x72\x69\x74\x65\x28\x62\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 105, -6280270152336400304, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, 8560205828332674625, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x77\x72\x69\x74\x65\x28\x70\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x2c\x20\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 153, 6877547911975001938, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };

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
// try error check
if ($tmp21 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local0) = $tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($14:frost.core.Error?)
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($14:frost.core.Error?)
goto block4;
block4:;
// line 57
frost$io$OutputStream** $tmp22 = &param0->out;
frost$io$OutputStream* $tmp23 = *$tmp22;
$fn25 $tmp24 = ($fn25) $tmp23->$class->vtable[2];
frost$core$Error* $tmp26 = $tmp24($tmp23, param1);
// try error check
if ($tmp26 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local0) = $tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($33:frost.core.Error?)
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($33:frost.core.Error?)
goto block2;
block1:;
// line 60
frost$core$Error* $tmp27 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Error* $tmp28 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp27;
block2:;
frost$core$Error* $tmp29 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp30 = frost$core$Bit$init$builtin_bit(false);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp32 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s33, $tmp32, &$s34);
abort(); // unreachable
block10:;
abort(); // unreachable

}
frost$core$Error* frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Error$Q(frost$io$IndentedOutputStream* param0, frost$core$UInt8* param1, frost$core$Int64 param2) {

frost$core$Error* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 66
*(&local0) = ((frost$core$Error*) NULL);
// line 67
frost$core$Int64 $tmp35 = (frost$core$Int64) {0};
*(&local1) = $tmp35;
// line 68
frost$core$Int64 $tmp36 = *(&local1);
*(&local2) = $tmp36;
// line 69
goto block3;
block3:;
frost$core$Int64 $tmp37 = *(&local2);
int64_t $tmp38 = $tmp37.value;
int64_t $tmp39 = param2.value;
bool $tmp40 = $tmp38 < $tmp39;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp40};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block4; else goto block5;
block4:;
// line 70
frost$core$Int64 $tmp43 = *(&local2);
int64_t $tmp44 = $tmp43.value;
frost$core$UInt8 $tmp45 = param1[$tmp44];
frost$core$UInt8 $tmp46 = (frost$core$UInt8) {10};
frost$core$Bit $tmp47 = frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit($tmp45, $tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block6; else goto block8;
block6:;
// line 71
frost$io$OutputStream** $tmp49 = &param0->out;
frost$io$OutputStream* $tmp50 = *$tmp49;
frost$core$Int64 $tmp51 = *(&local1);
int64_t $tmp52 = $tmp51.value;
frost$core$UInt8* $tmp53 = param1 + $tmp52;
frost$core$Int64 $tmp54 = *(&local2);
frost$core$Int64 $tmp55 = *(&local1);
int64_t $tmp56 = $tmp54.value;
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56 - $tmp57;
frost$core$Int64 $tmp59 = (frost$core$Int64) {$tmp58};
$fn61 $tmp60 = ($fn61) $tmp50->$class->vtable[10];
frost$core$Error* $tmp62 = $tmp60($tmp50, $tmp53, $tmp59);
// try error check
if ($tmp62 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local0) = $tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing REF($38:frost.core.Error?)
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing REF($38:frost.core.Error?)
// line 72
frost$core$Int64 $tmp63 = *(&local2);
*(&local1) = $tmp63;
// line 73
frost$core$Bit $tmp64 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp65 = &param0->atLineStart;
*$tmp65 = $tmp64;
goto block7;
block8:;
// line 75
frost$core$Bit* $tmp66 = &param0->atLineStart;
frost$core$Bit $tmp67 = *$tmp66;
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block11; else goto block12;
block11:;
// line 76
frost$io$OutputStream** $tmp69 = &param0->out;
frost$io$OutputStream* $tmp70 = *$tmp69;
frost$core$Int64 $tmp71 = *(&local1);
int64_t $tmp72 = $tmp71.value;
frost$core$UInt8* $tmp73 = param1 + $tmp72;
frost$core$Int64 $tmp74 = *(&local2);
frost$core$Int64 $tmp75 = *(&local1);
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76 - $tmp77;
frost$core$Int64 $tmp79 = (frost$core$Int64) {$tmp78};
$fn81 $tmp80 = ($fn81) $tmp70->$class->vtable[10];
frost$core$Error* $tmp82 = $tmp80($tmp70, $tmp73, $tmp79);
// try error check
if ($tmp82 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local0) = $tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($78:frost.core.Error?)
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($78:frost.core.Error?)
// line 77
frost$core$Int64 $tmp83 = *(&local2);
*(&local1) = $tmp83;
// line 78
frost$core$Error* $tmp84 = frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(param0);
// try error check
if ($tmp84 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local0) = $tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing REF($96:frost.core.Error?)
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing REF($96:frost.core.Error?)
goto block12;
block12:;
goto block7;
block7:;
// line 80
frost$core$Int64 $tmp85 = *(&local2);
frost$core$Int64 $tmp86 = (frost$core$Int64) {1};
int64_t $tmp87 = $tmp85.value;
int64_t $tmp88 = $tmp86.value;
int64_t $tmp89 = $tmp87 + $tmp88;
frost$core$Int64 $tmp90 = (frost$core$Int64) {$tmp89};
*(&local2) = $tmp90;
goto block3;
block5:;
// line 82
frost$io$OutputStream** $tmp91 = &param0->out;
frost$io$OutputStream* $tmp92 = *$tmp91;
frost$core$Int64 $tmp93 = *(&local1);
int64_t $tmp94 = $tmp93.value;
frost$core$UInt8* $tmp95 = param1 + $tmp94;
frost$core$Int64 $tmp96 = *(&local2);
frost$core$Int64 $tmp97 = *(&local1);
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97.value;
int64_t $tmp100 = $tmp98 - $tmp99;
frost$core$Int64 $tmp101 = (frost$core$Int64) {$tmp100};
$fn103 $tmp102 = ($fn103) $tmp92->$class->vtable[10];
frost$core$Error* $tmp104 = $tmp102($tmp92, $tmp95, $tmp101);
// try error check
if ($tmp104 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local0) = $tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing REF($134:frost.core.Error?)
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing REF($134:frost.core.Error?)
// line 83
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp105 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// line 86
frost$core$Error* $tmp106 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Error* $tmp107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return $tmp106;
block2:;
frost$core$Error* $tmp108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp109 = frost$core$Bit$init$builtin_bit(false);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp111 = (frost$core$Int64) {65};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s112, $tmp111, &$s113);
abort(); // unreachable
block19:;
abort(); // unreachable

}
frost$core$Error* frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(frost$io$IndentedOutputStream* param0) {

// line 92
frost$core$Bit* $tmp114 = &param0->atLineStart;
frost$core$Bit $tmp115 = *$tmp114;
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block1; else goto block2;
block1:;
// line 93
frost$core$Bit $tmp117 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp118 = &param0->atLineStart;
*$tmp118 = $tmp117;
// line 94
frost$core$String** $tmp119 = &param0->indent;
frost$core$String* $tmp120 = *$tmp119;
frost$core$Int64* $tmp121 = &$tmp120->_length;
frost$core$Int64 $tmp122 = *$tmp121;
frost$core$Int64* $tmp123 = &param0->indentSize;
frost$core$Int64 $tmp124 = *$tmp123;
frost$core$Int64* $tmp125 = &param0->level;
frost$core$Int64 $tmp126 = *$tmp125;
int64_t $tmp127 = $tmp124.value;
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127 * $tmp128;
frost$core$Int64 $tmp130 = (frost$core$Int64) {$tmp129};
int64_t $tmp131 = $tmp122.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 != $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block3; else goto block4;
block3:;
// line 95
frost$core$Int64* $tmp136 = &param0->indentSize;
frost$core$Int64 $tmp137 = *$tmp136;
frost$core$Int64* $tmp138 = &param0->level;
frost$core$Int64 $tmp139 = *$tmp138;
int64_t $tmp140 = $tmp137.value;
int64_t $tmp141 = $tmp139.value;
int64_t $tmp142 = $tmp140 * $tmp141;
frost$core$Int64 $tmp143 = (frost$core$Int64) {$tmp142};
frost$core$String* $tmp144 = frost$core$String$$MUL$frost$core$Int64$R$frost$core$String(&$s145, $tmp143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$String** $tmp146 = &param0->indent;
frost$core$String* $tmp147 = *$tmp146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$String** $tmp148 = &param0->indent;
*$tmp148 = $tmp144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing REF($37:frost.core.String)
goto block4;
block4:;
// line 97
frost$core$String** $tmp149 = &param0->indent;
frost$core$String* $tmp150 = *$tmp149;
$fn152 $tmp151 = ($fn152) ((frost$io$OutputStream*) param0)->$class->vtable[17];
frost$core$Error* $tmp153 = $tmp151(((frost$io$OutputStream*) param0), $tmp150);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing REF($55:frost.core.Error?)
return $tmp153;
block2:;
// line 99
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
void frost$io$IndentedOutputStream$cleanup(frost$io$IndentedOutputStream* param0) {

// line 17
frost$io$OutputStream$cleanup(((frost$io$OutputStream*) param0));
frost$core$String** $tmp154 = &param0->indent;
frost$core$String* $tmp155 = *$tmp154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$io$OutputStream** $tmp156 = &param0->out;
frost$io$OutputStream* $tmp157 = *$tmp156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
return;

}






