#include "frost/io/IndentedOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Error.h"
#include "frost/core/UInt8.h"
#include "frost/core/Int64.h"
#include "frost/core/MutableString.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"


static frost$core$String $s1;
frost$io$IndentedOutputStream$class_type frost$io$IndentedOutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$OutputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$IndentedOutputStream$cleanup, frost$io$IndentedOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q, frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$R$frost$core$Error$Q, frost$io$OutputStream$flush$R$frost$core$Error$Q, frost$io$OutputStream$close$R$frost$core$Error$Q, frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q} };

typedef frost$core$Error* (*$fn28)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn65)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn86)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn109)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn204)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 29, 7285494389777280767, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 93, -6936278265055109166, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };

void frost$io$IndentedOutputStream$init$frost$io$OutputStream(frost$io$IndentedOutputStream* param0, frost$io$OutputStream* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:22
frost$core$Int $tmp2 = (frost$core$Int) {0u};
frost$core$Int* $tmp3 = &param0->level;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:27
frost$core$Int $tmp4 = (frost$core$Int) {4u};
frost$core$Int* $tmp5 = &param0->indentSize;
*$tmp5 = $tmp4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6));
frost$core$String** $tmp7 = &param0->indent;
frost$core$String* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$String** $tmp9 = &param0->indent;
*$tmp9 = &$s10;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:33
frost$core$Bit $tmp11 = (frost$core$Bit) {true};
frost$core$Bit* $tmp12 = &param0->atLineStart;
*$tmp12 = $tmp11;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:44
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$OutputStream** $tmp13 = &param0->out;
frost$io$OutputStream* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$io$OutputStream** $tmp15 = &param0->out;
*$tmp15 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:45
frost$io$OutputStream$init(((frost$io$OutputStream*) param0));
return;

}
frost$core$Error* frost$io$IndentedOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q(frost$io$IndentedOutputStream* param0, frost$core$UInt8 param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:50
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:51
frost$core$UInt8 $tmp16 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from IndentedOutputStream.frost:51:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:643
uint8_t $tmp17 = param1.value;
uint8_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 == $tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:52
frost$core$Bit $tmp22 = (frost$core$Bit) {true};
frost$core$Bit* $tmp23 = &param0->atLineStart;
*$tmp23 = $tmp22;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:55
frost$core$Error* $tmp24 = frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(param0);
if ($tmp24 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local0) = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:57
frost$io$OutputStream** $tmp25 = &param0->out;
frost$io$OutputStream* $tmp26 = *$tmp25;
$fn28 $tmp27 = ($fn28) $tmp26->$class->vtable[2];
frost$core$Error* $tmp29 = $tmp27($tmp26, param1);
if ($tmp29 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local0) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:58
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:61
frost$core$Error* $tmp31 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$Error* $tmp32 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp31;
block2:;
frost$core$Error* $tmp33 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local0) = ((frost$core$Error*) NULL);
goto block11;
block11:;

}
frost$core$Error* frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$IndentedOutputStream* param0, frost$core$UInt8* param1, frost$core$Int param2) {

frost$core$Error* local0 = NULL;
frost$core$Int local1;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:67
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:68
frost$core$Int $tmp34 = (frost$core$Int) {0u};
*(&local1) = $tmp34;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:69
frost$core$Int $tmp35 = *(&local1);
*(&local2) = $tmp35;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:70
goto block3;
block3:;
frost$core$Int $tmp36 = *(&local2);
int64_t $tmp37 = $tmp36.value;
int64_t $tmp38 = param2.value;
bool $tmp39 = $tmp37 < $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:71
frost$core$Int $tmp42 = *(&local2);
frost$core$Int64 $tmp43 = frost$core$Int64$init$frost$core$Int($tmp42);
int64_t $tmp44 = $tmp43.value;
frost$core$UInt8 $tmp45 = param1[$tmp44];
frost$core$UInt8 $tmp46 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from IndentedOutputStream.frost:71:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:643
uint8_t $tmp47 = $tmp45.value;
uint8_t $tmp48 = $tmp46.value;
bool $tmp49 = $tmp47 == $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:72
frost$io$OutputStream** $tmp52 = &param0->out;
frost$io$OutputStream* $tmp53 = *$tmp52;
frost$core$Int $tmp54 = *(&local1);
frost$core$Int64 $tmp55 = frost$core$Int64$init$frost$core$Int($tmp54);
int64_t $tmp56 = $tmp55.value;
frost$core$UInt8* $tmp57 = param1 + $tmp56;
frost$core$Int $tmp58 = *(&local2);
frost$core$Int $tmp59 = *(&local1);
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60 - $tmp61;
frost$core$Int $tmp63 = (frost$core$Int) {$tmp62};
$fn65 $tmp64 = ($fn65) $tmp53->$class->vtable[10];
frost$core$Error* $tmp66 = $tmp64($tmp53, $tmp57, $tmp63);
if ($tmp66 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local0) = $tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:73
frost$core$Int $tmp67 = *(&local2);
*(&local1) = $tmp67;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:74
frost$core$Bit $tmp68 = (frost$core$Bit) {true};
frost$core$Bit* $tmp69 = &param0->atLineStart;
*$tmp69 = $tmp68;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:76
frost$core$Bit* $tmp70 = &param0->atLineStart;
frost$core$Bit $tmp71 = *$tmp70;
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:77
frost$io$OutputStream** $tmp73 = &param0->out;
frost$io$OutputStream* $tmp74 = *$tmp73;
frost$core$Int $tmp75 = *(&local1);
frost$core$Int64 $tmp76 = frost$core$Int64$init$frost$core$Int($tmp75);
int64_t $tmp77 = $tmp76.value;
frost$core$UInt8* $tmp78 = param1 + $tmp77;
frost$core$Int $tmp79 = *(&local2);
frost$core$Int $tmp80 = *(&local1);
int64_t $tmp81 = $tmp79.value;
int64_t $tmp82 = $tmp80.value;
int64_t $tmp83 = $tmp81 - $tmp82;
frost$core$Int $tmp84 = (frost$core$Int) {$tmp83};
$fn86 $tmp85 = ($fn86) $tmp74->$class->vtable[10];
frost$core$Error* $tmp87 = $tmp85($tmp74, $tmp78, $tmp84);
if ($tmp87 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local0) = $tmp87;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:78
frost$core$Int $tmp88 = *(&local2);
*(&local1) = $tmp88;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:79
frost$core$Error* $tmp89 = frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(param0);
if ($tmp89 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local0) = $tmp89;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
goto block1;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
goto block13;
block13:;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:81
frost$core$Int $tmp90 = *(&local2);
frost$core$Int $tmp91 = (frost$core$Int) {1u};
int64_t $tmp92 = $tmp90.value;
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = $tmp92 + $tmp93;
frost$core$Int $tmp95 = (frost$core$Int) {$tmp94};
*(&local2) = $tmp95;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:83
frost$io$OutputStream** $tmp96 = &param0->out;
frost$io$OutputStream* $tmp97 = *$tmp96;
frost$core$Int $tmp98 = *(&local1);
frost$core$Int64 $tmp99 = frost$core$Int64$init$frost$core$Int($tmp98);
int64_t $tmp100 = $tmp99.value;
frost$core$UInt8* $tmp101 = param1 + $tmp100;
frost$core$Int $tmp102 = *(&local2);
frost$core$Int $tmp103 = *(&local1);
int64_t $tmp104 = $tmp102.value;
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104 - $tmp105;
frost$core$Int $tmp107 = (frost$core$Int) {$tmp106};
$fn109 $tmp108 = ($fn109) $tmp97->$class->vtable[10];
frost$core$Error* $tmp110 = $tmp108($tmp97, $tmp101, $tmp107);
if ($tmp110 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local0) = $tmp110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:84
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
frost$core$Error* $tmp111 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:87
frost$core$Error* $tmp112 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Error* $tmp113 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp112;
block2:;
frost$core$Error* $tmp114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local0) = ((frost$core$Error*) NULL);
goto block20;
block20:;

}
frost$core$Error* frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(frost$io$IndentedOutputStream* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:93
frost$core$Bit* $tmp115 = &param0->atLineStart;
frost$core$Bit $tmp116 = *$tmp115;
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:94
frost$core$Bit $tmp118 = (frost$core$Bit) {false};
frost$core$Bit* $tmp119 = &param0->atLineStart;
*$tmp119 = $tmp118;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:95
frost$core$String** $tmp120 = &param0->indent;
frost$core$String* $tmp121 = *$tmp120;
frost$core$Int* $tmp122 = &$tmp121->_length;
frost$core$Int $tmp123 = *$tmp122;
frost$core$Int* $tmp124 = &param0->indentSize;
frost$core$Int $tmp125 = *$tmp124;
frost$core$Int* $tmp126 = &param0->level;
frost$core$Int $tmp127 = *$tmp126;
int64_t $tmp128 = $tmp125.value;
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128 * $tmp129;
frost$core$Int $tmp131 = (frost$core$Int) {$tmp130};
int64_t $tmp132 = $tmp123.value;
int64_t $tmp133 = $tmp131.value;
bool $tmp134 = $tmp132 != $tmp133;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:96
frost$core$Int* $tmp137 = &param0->indentSize;
frost$core$Int $tmp138 = *$tmp137;
frost$core$Int* $tmp139 = &param0->level;
frost$core$Int $tmp140 = *$tmp139;
int64_t $tmp141 = $tmp138.value;
int64_t $tmp142 = $tmp140.value;
int64_t $tmp143 = $tmp141 * $tmp142;
frost$core$Int $tmp144 = (frost$core$Int) {$tmp143};
// begin inline call to function frost.core.String.*(count:frost.core.Int):frost.core.String from IndentedOutputStream.frost:96:31
frost$core$Int $tmp145 = (frost$core$Int) {0u};
int64_t $tmp146 = $tmp144.value;
int64_t $tmp147 = $tmp145.value;
bool $tmp148 = $tmp146 >= $tmp147;
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148};
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block6; else goto block7;
block7:;
frost$core$Int $tmp151 = (frost$core$Int) {567u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s152, $tmp151, &$s153);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:568
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp154 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp154);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$MutableString* $tmp155 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local0) = $tmp154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:569
frost$core$Int $tmp156 = (frost$core$Int) {0u};
frost$core$Bit $tmp157 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp158 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp156, $tmp144, $tmp157);
frost$core$Int $tmp159 = $tmp158.min;
*(&local1) = $tmp159;
frost$core$Int $tmp160 = $tmp158.max;
frost$core$Bit $tmp161 = $tmp158.inclusive;
bool $tmp162 = $tmp161.value;
frost$core$Int $tmp163 = (frost$core$Int) {1u};
if ($tmp162) goto block11; else goto block12;
block11:;
int64_t $tmp164 = $tmp159.value;
int64_t $tmp165 = $tmp160.value;
bool $tmp166 = $tmp164 <= $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block8; else goto block9;
block12:;
int64_t $tmp169 = $tmp159.value;
int64_t $tmp170 = $tmp160.value;
bool $tmp171 = $tmp169 < $tmp170;
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171};
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:570
frost$core$MutableString* $tmp174 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp174, &$s175);
frost$core$Int $tmp176 = *(&local1);
int64_t $tmp177 = $tmp160.value;
int64_t $tmp178 = $tmp176.value;
int64_t $tmp179 = $tmp177 - $tmp178;
frost$core$Int $tmp180 = (frost$core$Int) {$tmp179};
if ($tmp162) goto block14; else goto block15;
block14:;
int64_t $tmp181 = $tmp180.value;
int64_t $tmp182 = $tmp163.value;
bool $tmp183 = $tmp181 >= $tmp182;
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183};
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block13; else goto block9;
block15:;
int64_t $tmp186 = $tmp180.value;
int64_t $tmp187 = $tmp163.value;
bool $tmp188 = $tmp186 > $tmp187;
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block13; else goto block9;
block13:;
int64_t $tmp191 = $tmp176.value;
int64_t $tmp192 = $tmp163.value;
int64_t $tmp193 = $tmp191 + $tmp192;
frost$core$Int $tmp194 = (frost$core$Int) {$tmp193};
*(&local1) = $tmp194;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:572
frost$core$MutableString* $tmp195 = *(&local0);
frost$core$String* $tmp196 = frost$core$MutableString$finish$R$frost$core$String($tmp195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$MutableString* $tmp197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$String** $tmp198 = &param0->indent;
frost$core$String* $tmp199 = *$tmp198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$String** $tmp200 = &param0->indent;
*$tmp200 = $tmp196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:98
frost$core$String** $tmp201 = &param0->indent;
frost$core$String* $tmp202 = *$tmp201;
$fn204 $tmp203 = ($fn204) ((frost$io$OutputStream*) param0)->$class->vtable[17];
frost$core$Error* $tmp205 = $tmp203(((frost$io$OutputStream*) param0), $tmp202);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
return $tmp205;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Error*) NULL)));
return ((frost$core$Error*) NULL);

}
void frost$io$IndentedOutputStream$cleanup(frost$io$IndentedOutputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/IndentedOutputStream.frost:17
frost$io$OutputStream$cleanup(((frost$io$OutputStream*) param0));
frost$core$String** $tmp206 = &param0->indent;
frost$core$String* $tmp207 = *$tmp206;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$io$OutputStream** $tmp208 = &param0->out;
frost$io$OutputStream* $tmp209 = *$tmp208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
return;

}

