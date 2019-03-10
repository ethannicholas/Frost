#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "org/frostlang/plex/runtime/RawToken.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char8.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt8.h"
#include "frost/core/Frost.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"


static frost$core$String $s1;
org$frostlang$plex$runtime$DFA$class_type org$frostlang$plex$runtime$DFA$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$plex$runtime$DFA$cleanup, org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken} };

typedef frost$core$String* (*$fn83)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x44\x46\x41", 30, 7628876479569963457, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 7507302848059021343, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$plex$runtime$DFA$init$frost$core$Int$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int$GT(org$frostlang$plex$runtime$DFA* param0, frost$core$Int param1, frost$core$Int** param2, frost$core$Int* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:27
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int$GT(param0, &$s2, param1, param2, param3);
return;

}
void org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int$GT(org$frostlang$plex$runtime$DFA* param0, frost$core$String* param1, frost$core$Int param2, frost$core$Int** param3, frost$core$Int* param4) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:22
frost$core$Int $tmp3 = (frost$core$Int) {1u};
frost$core$Int* $tmp4 = &param0->line;
*$tmp4 = $tmp3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:24
frost$core$Int $tmp5 = (frost$core$Int) {1u};
frost$core$Int* $tmp6 = &param0->column;
*$tmp6 = $tmp5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:32
frost$core$Char8** $tmp7 = &param1->data;
frost$core$Char8* $tmp8 = *$tmp7;
frost$core$Char8** $tmp9 = &param0->source;
*$tmp9 = $tmp8;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:33
frost$core$Int $tmp10 = (frost$core$Int) {0u};
frost$core$Int* $tmp11 = &param0->offset;
*$tmp11 = $tmp10;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:34
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from DFA.frost:34:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:492
frost$core$Int* $tmp12 = &param1->_length;
frost$core$Int $tmp13 = *$tmp12;
frost$core$Int* $tmp14 = &param0->sourceEnd;
*$tmp14 = $tmp13;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:35
frost$core$Int* $tmp15 = &param0->stateCount;
*$tmp15 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:36
frost$core$Int*** $tmp16 = &param0->transitions;
*$tmp16 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:37
frost$core$Int** $tmp17 = &param0->accepts;
*$tmp17 = param4;
return;

}
org$frostlang$plex$runtime$RawToken org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken(org$frostlang$plex$runtime$DFA* param0) {

frost$core$Int local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$Int local5;
frost$core$Int local6;
frost$core$Int local7;
frost$core$Int local8;
frost$core$Int local9;
frost$core$Char8 local10;
frost$core$Int local11;
frost$core$String$Index local12;
frost$core$String$Index local13;
frost$core$String$Index local14;
frost$core$String$Index local15;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:41
frost$core$Int $tmp18 = (frost$core$Int) {1u};
*(&local0) = $tmp18;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:42
frost$core$Int* $tmp19 = &param0->offset;
frost$core$Int $tmp20 = *$tmp19;
frost$core$Int* $tmp21 = &param0->sourceEnd;
frost$core$Int $tmp22 = *$tmp21;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from DFA.frost:42:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp23 = $tmp20.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:43
frost$core$Int $tmp28 = (frost$core$Int) {0u};
frost$core$Int* $tmp29 = &param0->offset;
frost$core$Int $tmp30 = *$tmp29;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from DFA.frost:43:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp31 = &(&local2)->value;
*$tmp31 = $tmp30;
frost$core$String$Index $tmp32 = *(&local2);
*(&local1) = $tmp32;
frost$core$String$Index $tmp33 = *(&local1);
frost$core$Int* $tmp34 = &param0->offset;
frost$core$Int $tmp35 = *$tmp34;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from DFA.frost:43:66
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp36 = &(&local4)->value;
*$tmp36 = $tmp35;
frost$core$String$Index $tmp37 = *(&local4);
*(&local3) = $tmp37;
frost$core$String$Index $tmp38 = *(&local3);
frost$core$Int* $tmp39 = &param0->line;
frost$core$Int $tmp40 = *$tmp39;
frost$core$Int* $tmp41 = &param0->column;
frost$core$Int $tmp42 = *$tmp41;
org$frostlang$plex$runtime$RawToken $tmp43 = org$frostlang$plex$runtime$RawToken$init$frost$core$Int$frost$core$String$Index$frost$core$String$Index$frost$core$Int$frost$core$Int($tmp28, $tmp33, $tmp38, $tmp40, $tmp42);
return $tmp43;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:45
frost$core$Int $tmp44 = (frost$core$Int) {18446744073709551615u};
*(&local5) = $tmp44;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:46
frost$core$Int* $tmp45 = &param0->offset;
frost$core$Int $tmp46 = *$tmp45;
*(&local6) = $tmp46;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:47
frost$core$Int* $tmp47 = &param0->offset;
frost$core$Int $tmp48 = *$tmp47;
*(&local7) = $tmp48;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:48
frost$core$Int* $tmp49 = &param0->line;
frost$core$Int $tmp50 = *$tmp49;
*(&local8) = $tmp50;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:49
frost$core$Int* $tmp51 = &param0->column;
frost$core$Int $tmp52 = *$tmp51;
*(&local9) = $tmp52;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:50
goto block6;
block6:;
frost$core$Int* $tmp53 = &param0->offset;
frost$core$Int $tmp54 = *$tmp53;
frost$core$Int* $tmp55 = &param0->sourceEnd;
frost$core$Int $tmp56 = *$tmp55;
int64_t $tmp57 = $tmp54.value;
int64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 != $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:51
frost$core$Char8** $tmp62 = &param0->source;
frost$core$Char8* $tmp63 = *$tmp62;
frost$core$Int* $tmp64 = &param0->offset;
frost$core$Int $tmp65 = *$tmp64;
frost$core$Int64 $tmp66 = frost$core$Int64$init$frost$core$Int($tmp65);
int64_t $tmp67 = $tmp66.value;
frost$core$Char8 $tmp68 = $tmp63[$tmp67];
*(&local10) = $tmp68;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:52
frost$core$Char8 $tmp69 = *(&local10);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from DFA.frost:52:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:126
uint8_t $tmp70 = $tmp69.value;
frost$core$UInt8 $tmp71 = (frost$core$UInt8) {$tmp70};
frost$core$UInt8 $tmp72 = (frost$core$UInt8) {255u};
uint8_t $tmp73 = $tmp71.value;
uint8_t $tmp74 = $tmp72.value;
bool $tmp75 = $tmp73 > $tmp74;
frost$core$Bit $tmp76 = (frost$core$Bit) {$tmp75};
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:53
frost$core$Char8 $tmp78 = *(&local10);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from DFA.frost:53:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:126
uint8_t $tmp79 = $tmp78.value;
frost$core$UInt8 $tmp80 = (frost$core$UInt8) {$tmp79};
frost$core$UInt8$wrapper* $tmp81;
$tmp81 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp81->value = $tmp80;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from DFA.frost:53:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn83 $tmp82 = ($fn83) ((frost$core$Object*) $tmp81)->$class->vtable[0];
frost$core$String* $tmp84 = $tmp82(((frost$core$Object*) $tmp81));
frost$core$String* $tmp85 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s86, $tmp84);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$String* $tmp87 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp85, &$s88);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from DFA.frost:53:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp87);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:54
frost$core$Int $tmp90 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp90);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:56
frost$core$Int*** $tmp91 = &param0->transitions;
frost$core$Int** $tmp92 = *$tmp91;
frost$core$Char8 $tmp93 = *(&local10);
// begin inline call to function frost.core.Char8.get_asInt():frost.core.Int from DFA.frost:56:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:101
uint8_t $tmp94 = $tmp93.value;
frost$core$Int $tmp95 = (frost$core$Int) {((int64_t) $tmp94)};
frost$core$Int64 $tmp96 = frost$core$Int64$init$frost$core$Int($tmp95);
int64_t $tmp97 = $tmp96.value;
frost$core$Int* $tmp98 = $tmp92[$tmp97];
frost$core$Int $tmp99 = *(&local0);
frost$core$Int64 $tmp100 = frost$core$Int64$init$frost$core$Int($tmp99);
int64_t $tmp101 = $tmp100.value;
frost$core$Int $tmp102 = $tmp98[$tmp101];
*(&local0) = $tmp102;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:57
frost$core$Int $tmp103 = *(&local0);
frost$core$Int $tmp104 = (frost$core$Int) {0u};
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 != $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block17; else goto block19;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:58
frost$core$Int* $tmp110 = &param0->offset;
frost$core$Int $tmp111 = *$tmp110;
frost$core$Int $tmp112 = (frost$core$Int) {1u};
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113 + $tmp114;
frost$core$Int $tmp116 = (frost$core$Int) {$tmp115};
frost$core$Int* $tmp117 = &param0->offset;
*$tmp117 = $tmp116;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:59
frost$core$Char8 $tmp118 = *(&local10);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from DFA.frost:59:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:126
uint8_t $tmp119 = $tmp118.value;
frost$core$UInt8 $tmp120 = (frost$core$UInt8) {$tmp119};
frost$core$UInt8 $tmp121 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from DFA.frost:60:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:643
uint8_t $tmp122 = $tmp120.value;
uint8_t $tmp123 = $tmp121.value;
bool $tmp124 = $tmp122 == $tmp123;
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124};
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:61
frost$core$Int* $tmp127 = &param0->line;
frost$core$Int $tmp128 = *$tmp127;
frost$core$Int $tmp129 = (frost$core$Int) {1u};
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130 + $tmp131;
frost$core$Int $tmp133 = (frost$core$Int) {$tmp132};
frost$core$Int* $tmp134 = &param0->line;
*$tmp134 = $tmp133;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:62
frost$core$Int $tmp135 = (frost$core$Int) {1u};
frost$core$Int* $tmp136 = &param0->column;
*$tmp136 = $tmp135;
goto block21;
block23:;
frost$core$UInt8 $tmp137 = (frost$core$UInt8) {9u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from DFA.frost:64:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:643
uint8_t $tmp138 = $tmp120.value;
uint8_t $tmp139 = $tmp137.value;
bool $tmp140 = $tmp138 == $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:65
frost$core$Int* $tmp143 = &param0->column;
frost$core$Int $tmp144 = *$tmp143;
frost$core$Int $tmp145 = (frost$core$Int) {4u};
frost$core$Int* $tmp146 = &param0->column;
frost$core$Int $tmp147 = *$tmp146;
frost$core$Int $tmp148 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from DFA.frost:65:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:198
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149 % $tmp150;
frost$core$Int $tmp152 = (frost$core$Int) {$tmp151};
int64_t $tmp153 = $tmp145.value;
int64_t $tmp154 = $tmp152.value;
int64_t $tmp155 = $tmp153 - $tmp154;
frost$core$Int $tmp156 = (frost$core$Int) {$tmp155};
int64_t $tmp157 = $tmp144.value;
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157 + $tmp158;
frost$core$Int $tmp160 = (frost$core$Int) {$tmp159};
frost$core$Int* $tmp161 = &param0->column;
*$tmp161 = $tmp160;
goto block21;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:68
frost$core$Int* $tmp162 = &param0->column;
frost$core$Int $tmp163 = *$tmp162;
frost$core$Int $tmp164 = (frost$core$Int) {1u};
int64_t $tmp165 = $tmp163.value;
int64_t $tmp166 = $tmp164.value;
int64_t $tmp167 = $tmp165 + $tmp166;
frost$core$Int $tmp168 = (frost$core$Int) {$tmp167};
frost$core$Int* $tmp169 = &param0->column;
*$tmp169 = $tmp168;
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:71
frost$core$Int** $tmp170 = &param0->accepts;
frost$core$Int* $tmp171 = *$tmp170;
frost$core$Int $tmp172 = *(&local0);
frost$core$Int64 $tmp173 = frost$core$Int64$init$frost$core$Int($tmp172);
int64_t $tmp174 = $tmp173.value;
frost$core$Int $tmp175 = $tmp171[$tmp174];
*(&local11) = $tmp175;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:72
frost$core$Int $tmp176 = *(&local11);
frost$core$Int $tmp177 = (frost$core$Int) {18446744073709551615u};
int64_t $tmp178 = $tmp176.value;
int64_t $tmp179 = $tmp177.value;
bool $tmp180 = $tmp178 != $tmp179;
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:73
frost$core$Int $tmp183 = *(&local11);
*(&local5) = $tmp183;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:74
frost$core$Int* $tmp184 = &param0->offset;
frost$core$Int $tmp185 = *$tmp184;
*(&local7) = $tmp185;
goto block30;
block30:;
goto block6;
block19:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:78
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:81
frost$core$Int $tmp186 = *(&local7);
frost$core$Int* $tmp187 = &param0->offset;
*$tmp187 = $tmp186;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:82
frost$core$Int $tmp188 = *(&local5);
frost$core$Int $tmp189 = *(&local6);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from DFA.frost:82:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp190 = &(&local13)->value;
*$tmp190 = $tmp189;
frost$core$String$Index $tmp191 = *(&local13);
*(&local12) = $tmp191;
frost$core$String$Index $tmp192 = *(&local12);
frost$core$Int $tmp193 = *(&local7);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from DFA.frost:82:64
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp194 = &(&local15)->value;
*$tmp194 = $tmp193;
frost$core$String$Index $tmp195 = *(&local15);
*(&local14) = $tmp195;
frost$core$String$Index $tmp196 = *(&local14);
frost$core$Int $tmp197 = *(&local8);
frost$core$Int $tmp198 = *(&local9);
org$frostlang$plex$runtime$RawToken $tmp199 = org$frostlang$plex$runtime$RawToken$init$frost$core$Int$frost$core$String$Index$frost$core$String$Index$frost$core$Int$frost$core$Int($tmp188, $tmp192, $tmp196, $tmp197, $tmp198);
return $tmp199;

}
void org$frostlang$plex$runtime$DFA$cleanup(org$frostlang$plex$runtime$DFA* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






