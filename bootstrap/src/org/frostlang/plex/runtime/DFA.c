#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int64.h"
#include "org/frostlang/plex/runtime/RawToken.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char8.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt8.h"
#include "frost/core/Frost.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"


static frost$core$String $s1;
org$frostlang$plex$runtime$DFA$class_type org$frostlang$plex$runtime$DFA$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$plex$runtime$DFA$cleanup, org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken} };

typedef frost$core$String* (*$fn82)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x44\x46\x41", 30, 7628876479569963457, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 7507302848059021343, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$plex$runtime$DFA$init$frost$core$Int64$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int64$GT(org$frostlang$plex$runtime$DFA* param0, frost$core$Int64 param1, frost$core$Int64** param2, frost$core$Int64* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:27
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int64$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int64$GT(param0, &$s2, param1, param2, param3);
return;

}
void org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int64$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int64$GT(org$frostlang$plex$runtime$DFA* param0, frost$core$String* param1, frost$core$Int64 param2, frost$core$Int64** param3, frost$core$Int64* param4) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:22
frost$core$Int64 $tmp3 = (frost$core$Int64) {1u};
frost$core$Int64* $tmp4 = &param0->line;
*$tmp4 = $tmp3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:24
frost$core$Int64 $tmp5 = (frost$core$Int64) {1u};
frost$core$Int64* $tmp6 = &param0->column;
*$tmp6 = $tmp5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:32
frost$core$Char8** $tmp7 = &param1->data;
frost$core$Char8* $tmp8 = *$tmp7;
frost$core$Char8** $tmp9 = &param0->source;
*$tmp9 = $tmp8;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:33
frost$core$Int64 $tmp10 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp11 = &param0->offset;
*$tmp11 = $tmp10;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:34
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int64 from DFA.frost:34:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:492
frost$core$Int64* $tmp12 = &param1->_length;
frost$core$Int64 $tmp13 = *$tmp12;
frost$core$Int64* $tmp14 = &param0->sourceEnd;
*$tmp14 = $tmp13;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:35
frost$core$Int64* $tmp15 = &param0->stateCount;
*$tmp15 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:36
frost$core$Int64*** $tmp16 = &param0->transitions;
*$tmp16 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:37
frost$core$Int64** $tmp17 = &param0->accepts;
*$tmp17 = param4;
return;

}
org$frostlang$plex$runtime$RawToken org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken(org$frostlang$plex$runtime$DFA* param0) {

frost$core$Int64 local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$Int64 local5;
frost$core$Int64 local6;
frost$core$Int64 local7;
frost$core$Int64 local8;
frost$core$Int64 local9;
frost$core$Char8 local10;
frost$core$Int64 local11;
frost$core$String$Index local12;
frost$core$String$Index local13;
frost$core$String$Index local14;
frost$core$String$Index local15;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:41
frost$core$Int64 $tmp18 = (frost$core$Int64) {1u};
*(&local0) = $tmp18;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:42
frost$core$Int64* $tmp19 = &param0->offset;
frost$core$Int64 $tmp20 = *$tmp19;
frost$core$Int64* $tmp21 = &param0->sourceEnd;
frost$core$Int64 $tmp22 = *$tmp21;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from DFA.frost:42:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp23 = $tmp20.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:43
frost$core$Int64 $tmp28 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp29 = &param0->offset;
frost$core$Int64 $tmp30 = *$tmp29;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from DFA.frost:43:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp31 = &(&local2)->value;
*$tmp31 = $tmp30;
frost$core$String$Index $tmp32 = *(&local2);
*(&local1) = $tmp32;
frost$core$String$Index $tmp33 = *(&local1);
frost$core$Int64* $tmp34 = &param0->offset;
frost$core$Int64 $tmp35 = *$tmp34;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from DFA.frost:43:66
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp36 = &(&local4)->value;
*$tmp36 = $tmp35;
frost$core$String$Index $tmp37 = *(&local4);
*(&local3) = $tmp37;
frost$core$String$Index $tmp38 = *(&local3);
frost$core$Int64* $tmp39 = &param0->line;
frost$core$Int64 $tmp40 = *$tmp39;
frost$core$Int64* $tmp41 = &param0->column;
frost$core$Int64 $tmp42 = *$tmp41;
org$frostlang$plex$runtime$RawToken $tmp43 = org$frostlang$plex$runtime$RawToken$init$frost$core$Int64$frost$core$String$Index$frost$core$String$Index$frost$core$Int64$frost$core$Int64($tmp28, $tmp33, $tmp38, $tmp40, $tmp42);
return $tmp43;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:45
frost$core$Int64 $tmp44 = (frost$core$Int64) {18446744073709551615u};
*(&local5) = $tmp44;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:46
frost$core$Int64* $tmp45 = &param0->offset;
frost$core$Int64 $tmp46 = *$tmp45;
*(&local6) = $tmp46;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:47
frost$core$Int64* $tmp47 = &param0->offset;
frost$core$Int64 $tmp48 = *$tmp47;
*(&local7) = $tmp48;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:48
frost$core$Int64* $tmp49 = &param0->line;
frost$core$Int64 $tmp50 = *$tmp49;
*(&local8) = $tmp50;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:49
frost$core$Int64* $tmp51 = &param0->column;
frost$core$Int64 $tmp52 = *$tmp51;
*(&local9) = $tmp52;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:50
goto block6;
block6:;
frost$core$Int64* $tmp53 = &param0->offset;
frost$core$Int64 $tmp54 = *$tmp53;
frost$core$Int64* $tmp55 = &param0->sourceEnd;
frost$core$Int64 $tmp56 = *$tmp55;
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
frost$core$Int64* $tmp64 = &param0->offset;
frost$core$Int64 $tmp65 = *$tmp64;
int64_t $tmp66 = $tmp65.value;
frost$core$Char8 $tmp67 = $tmp63[$tmp66];
*(&local10) = $tmp67;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:52
frost$core$Char8 $tmp68 = *(&local10);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from DFA.frost:52:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:126
uint8_t $tmp69 = $tmp68.value;
frost$core$UInt8 $tmp70 = (frost$core$UInt8) {$tmp69};
frost$core$UInt8 $tmp71 = (frost$core$UInt8) {255u};
uint8_t $tmp72 = $tmp70.value;
uint8_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 > $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:53
frost$core$Char8 $tmp77 = *(&local10);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from DFA.frost:53:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:126
uint8_t $tmp78 = $tmp77.value;
frost$core$UInt8 $tmp79 = (frost$core$UInt8) {$tmp78};
frost$core$UInt8$wrapper* $tmp80;
$tmp80 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp80->value = $tmp79;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from DFA.frost:53:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn82 $tmp81 = ($fn82) ((frost$core$Object*) $tmp80)->$class->vtable[0];
frost$core$String* $tmp83 = $tmp81(((frost$core$Object*) $tmp80));
frost$core$String* $tmp84 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s85, $tmp83);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$String* $tmp86 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp84, &$s87);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from DFA.frost:53:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp86);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:54
frost$core$Int64 $tmp89 = (frost$core$Int64) {1u};
frost$core$System$exit$frost$core$Int64($tmp89);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:56
frost$core$Int64*** $tmp90 = &param0->transitions;
frost$core$Int64** $tmp91 = *$tmp90;
frost$core$Char8 $tmp92 = *(&local10);
// begin inline call to function frost.core.Char8.get_asInt():frost.core.Int64 from DFA.frost:56:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:101
// begin inline call to function frost.core.Char8.get_asInt64():frost.core.Int64 from Char8.frost:101:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:121
uint8_t $tmp93 = $tmp92.value;
int64_t $tmp94 = ((int64_t) $tmp93) & 255u;
frost$core$Int64 $tmp95 = (frost$core$Int64) {$tmp94};
int64_t $tmp96 = $tmp95.value;
frost$core$Int64* $tmp97 = $tmp91[$tmp96];
frost$core$Int64 $tmp98 = *(&local0);
int64_t $tmp99 = $tmp98.value;
frost$core$Int64 $tmp100 = $tmp97[$tmp99];
*(&local0) = $tmp100;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:57
frost$core$Int64 $tmp101 = *(&local0);
frost$core$Int64 $tmp102 = (frost$core$Int64) {0u};
int64_t $tmp103 = $tmp101.value;
int64_t $tmp104 = $tmp102.value;
bool $tmp105 = $tmp103 != $tmp104;
frost$core$Bit $tmp106 = (frost$core$Bit) {$tmp105};
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:58
frost$core$Int64* $tmp108 = &param0->offset;
frost$core$Int64 $tmp109 = *$tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {1u};
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110.value;
int64_t $tmp113 = $tmp111 + $tmp112;
frost$core$Int64 $tmp114 = (frost$core$Int64) {$tmp113};
frost$core$Int64* $tmp115 = &param0->offset;
*$tmp115 = $tmp114;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:59
frost$core$Char8 $tmp116 = *(&local10);
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from DFA.frost:59:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char8.frost:126
uint8_t $tmp117 = $tmp116.value;
frost$core$UInt8 $tmp118 = (frost$core$UInt8) {$tmp117};
frost$core$UInt8 $tmp119 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from DFA.frost:60:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:541
uint8_t $tmp120 = $tmp118.value;
uint8_t $tmp121 = $tmp119.value;
bool $tmp122 = $tmp120 == $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:61
frost$core$Int64* $tmp125 = &param0->line;
frost$core$Int64 $tmp126 = *$tmp125;
frost$core$Int64 $tmp127 = (frost$core$Int64) {1u};
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128 + $tmp129;
frost$core$Int64 $tmp131 = (frost$core$Int64) {$tmp130};
frost$core$Int64* $tmp132 = &param0->line;
*$tmp132 = $tmp131;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:62
frost$core$Int64 $tmp133 = (frost$core$Int64) {1u};
frost$core$Int64* $tmp134 = &param0->column;
*$tmp134 = $tmp133;
goto block22;
block24:;
frost$core$UInt8 $tmp135 = (frost$core$UInt8) {9u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from DFA.frost:64:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt8.frost:541
uint8_t $tmp136 = $tmp118.value;
uint8_t $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 == $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:65
frost$core$Int64* $tmp141 = &param0->column;
frost$core$Int64 $tmp142 = *$tmp141;
frost$core$Int64 $tmp143 = (frost$core$Int64) {4u};
frost$core$Int64* $tmp144 = &param0->column;
frost$core$Int64 $tmp145 = *$tmp144;
frost$core$Int64 $tmp146 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from DFA.frost:65:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:102
int64_t $tmp147 = $tmp145.value;
int64_t $tmp148 = $tmp146.value;
int64_t $tmp149 = $tmp147 % $tmp148;
frost$core$Int64 $tmp150 = (frost$core$Int64) {$tmp149};
int64_t $tmp151 = $tmp143.value;
int64_t $tmp152 = $tmp150.value;
int64_t $tmp153 = $tmp151 - $tmp152;
frost$core$Int64 $tmp154 = (frost$core$Int64) {$tmp153};
int64_t $tmp155 = $tmp142.value;
int64_t $tmp156 = $tmp154.value;
int64_t $tmp157 = $tmp155 + $tmp156;
frost$core$Int64 $tmp158 = (frost$core$Int64) {$tmp157};
frost$core$Int64* $tmp159 = &param0->column;
*$tmp159 = $tmp158;
goto block22;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:68
frost$core$Int64* $tmp160 = &param0->column;
frost$core$Int64 $tmp161 = *$tmp160;
frost$core$Int64 $tmp162 = (frost$core$Int64) {1u};
int64_t $tmp163 = $tmp161.value;
int64_t $tmp164 = $tmp162.value;
int64_t $tmp165 = $tmp163 + $tmp164;
frost$core$Int64 $tmp166 = (frost$core$Int64) {$tmp165};
frost$core$Int64* $tmp167 = &param0->column;
*$tmp167 = $tmp166;
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:71
frost$core$Int64** $tmp168 = &param0->accepts;
frost$core$Int64* $tmp169 = *$tmp168;
frost$core$Int64 $tmp170 = *(&local0);
int64_t $tmp171 = $tmp170.value;
frost$core$Int64 $tmp172 = $tmp169[$tmp171];
*(&local11) = $tmp172;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:72
frost$core$Int64 $tmp173 = *(&local11);
frost$core$Int64 $tmp174 = (frost$core$Int64) {18446744073709551615u};
int64_t $tmp175 = $tmp173.value;
int64_t $tmp176 = $tmp174.value;
bool $tmp177 = $tmp175 != $tmp176;
frost$core$Bit $tmp178 = (frost$core$Bit) {$tmp177};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:73
frost$core$Int64 $tmp180 = *(&local11);
*(&local5) = $tmp180;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:74
frost$core$Int64* $tmp181 = &param0->offset;
frost$core$Int64 $tmp182 = *$tmp181;
*(&local7) = $tmp182;
goto block31;
block31:;
goto block6;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:78
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:81
frost$core$Int64 $tmp183 = *(&local7);
frost$core$Int64* $tmp184 = &param0->offset;
*$tmp184 = $tmp183;
// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:82
frost$core$Int64 $tmp185 = *(&local5);
frost$core$Int64 $tmp186 = *(&local6);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from DFA.frost:82:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp187 = &(&local13)->value;
*$tmp187 = $tmp186;
frost$core$String$Index $tmp188 = *(&local13);
*(&local12) = $tmp188;
frost$core$String$Index $tmp189 = *(&local12);
frost$core$Int64 $tmp190 = *(&local7);
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from DFA.frost:82:64
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp191 = &(&local15)->value;
*$tmp191 = $tmp190;
frost$core$String$Index $tmp192 = *(&local15);
*(&local14) = $tmp192;
frost$core$String$Index $tmp193 = *(&local14);
frost$core$Int64 $tmp194 = *(&local8);
frost$core$Int64 $tmp195 = *(&local9);
org$frostlang$plex$runtime$RawToken $tmp196 = org$frostlang$plex$runtime$RawToken$init$frost$core$Int64$frost$core$String$Index$frost$core$String$Index$frost$core$Int64$frost$core$Int64($tmp185, $tmp189, $tmp193, $tmp194, $tmp195);
return $tmp196;

}
void org$frostlang$plex$runtime$DFA$cleanup(org$frostlang$plex$runtime$DFA* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/org/frostlang/plex/runtime/DFA.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






