#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int64.h"
#include "org/frostlang/plex/runtime/RawToken.h"
#include "frost/core/Char8.h"
#include "frost/core/Bit.h"
#include "frost/core/String/Index.h"
#include "frost/core/UInt8.h"
#include "frost/io/Console.h"
#include "frost/core/Frost.h"
#include "frost/core/System.h"


static frost$core$String $s1;
org$frostlang$plex$runtime$DFA$class_type org$frostlang$plex$runtime$DFA$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$plex$runtime$DFA$cleanup, org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x44\x46\x41", 30, -6829815493143977959, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 8535351213971602697, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

void org$frostlang$plex$runtime$DFA$init$frost$core$Int64$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int64$GT(org$frostlang$plex$runtime$DFA* param0, frost$core$Int64 param1, frost$core$Int64** param2, frost$core$Int64* param3) {

// line 27
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int64$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int64$GT(param0, &$s2, param1, param2, param3);
return;

}
void org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int64$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int64$GT(org$frostlang$plex$runtime$DFA* param0, frost$core$String* param1, frost$core$Int64 param2, frost$core$Int64** param3, frost$core$Int64* param4) {

// line 22
frost$core$Int64 $tmp3 = (frost$core$Int64) {1};
frost$core$Int64* $tmp4 = &param0->line;
*$tmp4 = $tmp3;
// line 24
frost$core$Int64 $tmp5 = (frost$core$Int64) {1};
frost$core$Int64* $tmp6 = &param0->column;
*$tmp6 = $tmp5;
// line 32
frost$core$Char8** $tmp7 = &param1->data;
frost$core$Char8* $tmp8 = *$tmp7;
frost$core$Char8** $tmp9 = &param0->source;
*$tmp9 = $tmp8;
// line 33
frost$core$Int64 $tmp10 = (frost$core$Int64) {0};
frost$core$Int64* $tmp11 = &param0->offset;
*$tmp11 = $tmp10;
// line 34
frost$core$Int64 $tmp12 = frost$core$String$get_byteLength$R$frost$core$Int64(param1);
frost$core$Int64* $tmp13 = &param0->sourceEnd;
*$tmp13 = $tmp12;
// line 35
frost$core$Int64* $tmp14 = &param0->stateCount;
*$tmp14 = param2;
// line 36
frost$core$Int64*** $tmp15 = &param0->transitions;
*$tmp15 = param3;
// line 37
frost$core$Int64** $tmp16 = &param0->accepts;
*$tmp16 = param4;
return;

}
org$frostlang$plex$runtime$RawToken org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken(org$frostlang$plex$runtime$DFA* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
frost$core$Char8 local6;
frost$core$Int64 local7;
// line 41
frost$core$Int64 $tmp17 = (frost$core$Int64) {1};
*(&local0) = $tmp17;
// line 42
frost$core$Int64* $tmp18 = &param0->offset;
frost$core$Int64 $tmp19 = *$tmp18;
frost$core$Int64* $tmp20 = &param0->sourceEnd;
frost$core$Int64 $tmp21 = *$tmp20;
frost$core$Bit $tmp22 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp19, $tmp21);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block2;
block1:;
// line 43
frost$core$Int64 $tmp24 = (frost$core$Int64) {0};
frost$core$Int64* $tmp25 = &param0->offset;
frost$core$Int64 $tmp26 = *$tmp25;
frost$core$String$Index $tmp27 = frost$core$String$Index$init$frost$core$Int64($tmp26);
frost$core$Int64* $tmp28 = &param0->offset;
frost$core$Int64 $tmp29 = *$tmp28;
frost$core$String$Index $tmp30 = frost$core$String$Index$init$frost$core$Int64($tmp29);
frost$core$Int64* $tmp31 = &param0->line;
frost$core$Int64 $tmp32 = *$tmp31;
frost$core$Int64* $tmp33 = &param0->column;
frost$core$Int64 $tmp34 = *$tmp33;
org$frostlang$plex$runtime$RawToken $tmp35 = org$frostlang$plex$runtime$RawToken$init$frost$core$Int64$frost$core$String$Index$frost$core$String$Index$frost$core$Int64$frost$core$Int64($tmp24, $tmp27, $tmp30, $tmp32, $tmp34);
return $tmp35;
block2:;
// line 45
frost$core$Int64 $tmp36 = (frost$core$Int64) {18446744073709551615};
*(&local1) = $tmp36;
// line 46
frost$core$Int64* $tmp37 = &param0->offset;
frost$core$Int64 $tmp38 = *$tmp37;
*(&local2) = $tmp38;
// line 47
frost$core$Int64* $tmp39 = &param0->offset;
frost$core$Int64 $tmp40 = *$tmp39;
*(&local3) = $tmp40;
// line 48
frost$core$Int64* $tmp41 = &param0->line;
frost$core$Int64 $tmp42 = *$tmp41;
*(&local4) = $tmp42;
// line 49
frost$core$Int64* $tmp43 = &param0->column;
frost$core$Int64 $tmp44 = *$tmp43;
*(&local5) = $tmp44;
// line 50
goto block3;
block3:;
frost$core$Int64* $tmp45 = &param0->offset;
frost$core$Int64 $tmp46 = *$tmp45;
frost$core$Int64* $tmp47 = &param0->sourceEnd;
frost$core$Int64 $tmp48 = *$tmp47;
int64_t $tmp49 = $tmp46.value;
int64_t $tmp50 = $tmp48.value;
bool $tmp51 = $tmp49 != $tmp50;
frost$core$Bit $tmp52 = (frost$core$Bit) {$tmp51};
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block4; else goto block5;
block4:;
// line 51
frost$core$Char8** $tmp54 = &param0->source;
frost$core$Char8* $tmp55 = *$tmp54;
frost$core$Int64* $tmp56 = &param0->offset;
frost$core$Int64 $tmp57 = *$tmp56;
int64_t $tmp58 = $tmp57.value;
frost$core$Char8 $tmp59 = $tmp55[$tmp58];
*(&local6) = $tmp59;
// line 52
frost$core$Char8 $tmp60 = *(&local6);
frost$core$UInt8 $tmp61 = frost$core$Char8$convert$R$frost$core$UInt8($tmp60);
frost$core$UInt8 $tmp62 = (frost$core$UInt8) {255};
uint8_t $tmp63 = $tmp61.value;
uint8_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 > $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block6; else goto block7;
block6:;
// line 53
frost$core$Char8 $tmp68 = *(&local6);
frost$core$UInt8 $tmp69 = frost$core$Char8$convert$R$frost$core$UInt8($tmp68);
frost$core$UInt8$wrapper* $tmp70;
$tmp70 = (frost$core$UInt8$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp70->value = $tmp69;
frost$core$String* $tmp71 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s72, ((frost$core$Object*) $tmp70));
frost$core$String* $tmp73 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp71, &$s74);
frost$io$Console$printLine$frost$core$String($tmp73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing REF($79:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($78:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing REF($77:frost.core.Object)
// line 54
frost$core$UInt8 $tmp75 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp75);
goto block7;
block7:;
// line 56
frost$core$Int64*** $tmp76 = &param0->transitions;
frost$core$Int64** $tmp77 = *$tmp76;
frost$core$Char8 $tmp78 = *(&local6);
frost$core$Int64 $tmp79 = frost$core$Char8$convert$R$frost$core$Int64($tmp78);
int64_t $tmp80 = $tmp79.value;
frost$core$Int64* $tmp81 = $tmp77[$tmp80];
frost$core$Int64 $tmp82 = *(&local0);
int64_t $tmp83 = $tmp82.value;
frost$core$Int64 $tmp84 = $tmp81[$tmp83];
*(&local0) = $tmp84;
// line 57
frost$core$Int64 $tmp85 = *(&local0);
frost$core$Int64 $tmp86 = (frost$core$Int64) {0};
int64_t $tmp87 = $tmp85.value;
int64_t $tmp88 = $tmp86.value;
bool $tmp89 = $tmp87 != $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block8; else goto block10;
block8:;
// line 58
frost$core$Int64* $tmp92 = &param0->offset;
frost$core$Int64 $tmp93 = *$tmp92;
frost$core$Int64 $tmp94 = (frost$core$Int64) {1};
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95 + $tmp96;
frost$core$Int64 $tmp98 = (frost$core$Int64) {$tmp97};
frost$core$Int64* $tmp99 = &param0->offset;
*$tmp99 = $tmp98;
// line 59
frost$core$Char8 $tmp100 = *(&local6);
frost$core$UInt8 $tmp101 = frost$core$Char8$convert$R$frost$core$UInt8($tmp100);
frost$core$UInt8 $tmp102 = (frost$core$UInt8) {10};
frost$core$Bit $tmp103 = frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit($tmp101, $tmp102);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block12; else goto block13;
block12:;
// line 61
frost$core$Int64* $tmp105 = &param0->line;
frost$core$Int64 $tmp106 = *$tmp105;
frost$core$Int64 $tmp107 = (frost$core$Int64) {1};
int64_t $tmp108 = $tmp106.value;
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108 + $tmp109;
frost$core$Int64 $tmp111 = (frost$core$Int64) {$tmp110};
frost$core$Int64* $tmp112 = &param0->line;
*$tmp112 = $tmp111;
// line 62
frost$core$Int64 $tmp113 = (frost$core$Int64) {1};
frost$core$Int64* $tmp114 = &param0->column;
*$tmp114 = $tmp113;
goto block11;
block13:;
frost$core$UInt8 $tmp115 = (frost$core$UInt8) {9};
frost$core$Bit $tmp116 = frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit($tmp101, $tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block14; else goto block15;
block14:;
// line 65
frost$core$Int64* $tmp118 = &param0->column;
frost$core$Int64 $tmp119 = *$tmp118;
frost$core$Int64 $tmp120 = (frost$core$Int64) {4};
frost$core$Int64* $tmp121 = &param0->column;
frost$core$Int64 $tmp122 = *$tmp121;
frost$core$Int64 $tmp123 = (frost$core$Int64) {4};
frost$core$Int64 $tmp124 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp122, $tmp123);
int64_t $tmp125 = $tmp120.value;
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125 - $tmp126;
frost$core$Int64 $tmp128 = (frost$core$Int64) {$tmp127};
int64_t $tmp129 = $tmp119.value;
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129 + $tmp130;
frost$core$Int64 $tmp132 = (frost$core$Int64) {$tmp131};
frost$core$Int64* $tmp133 = &param0->column;
*$tmp133 = $tmp132;
goto block11;
block15:;
// line 68
frost$core$Int64* $tmp134 = &param0->column;
frost$core$Int64 $tmp135 = *$tmp134;
frost$core$Int64 $tmp136 = (frost$core$Int64) {1};
int64_t $tmp137 = $tmp135.value;
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137 + $tmp138;
frost$core$Int64 $tmp140 = (frost$core$Int64) {$tmp139};
frost$core$Int64* $tmp141 = &param0->column;
*$tmp141 = $tmp140;
goto block11;
block11:;
// line 71
frost$core$Int64** $tmp142 = &param0->accepts;
frost$core$Int64* $tmp143 = *$tmp142;
frost$core$Int64 $tmp144 = *(&local0);
int64_t $tmp145 = $tmp144.value;
frost$core$Int64 $tmp146 = $tmp143[$tmp145];
*(&local7) = $tmp146;
// line 72
frost$core$Int64 $tmp147 = *(&local7);
frost$core$Int64 $tmp148 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 != $tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block16; else goto block17;
block16:;
// line 73
frost$core$Int64 $tmp154 = *(&local7);
*(&local1) = $tmp154;
// line 74
frost$core$Int64* $tmp155 = &param0->offset;
frost$core$Int64 $tmp156 = *$tmp155;
*(&local3) = $tmp156;
goto block17;
block17:;
goto block9;
block10:;
// line 1
// line 78
goto block5;
block9:;
goto block3;
block5:;
// line 81
frost$core$Int64 $tmp157 = *(&local3);
frost$core$Int64* $tmp158 = &param0->offset;
*$tmp158 = $tmp157;
// line 82
frost$core$Int64 $tmp159 = *(&local1);
frost$core$Int64 $tmp160 = *(&local2);
frost$core$String$Index $tmp161 = frost$core$String$Index$init$frost$core$Int64($tmp160);
frost$core$Int64 $tmp162 = *(&local3);
frost$core$String$Index $tmp163 = frost$core$String$Index$init$frost$core$Int64($tmp162);
frost$core$Int64 $tmp164 = *(&local4);
frost$core$Int64 $tmp165 = *(&local5);
org$frostlang$plex$runtime$RawToken $tmp166 = org$frostlang$plex$runtime$RawToken$init$frost$core$Int64$frost$core$String$Index$frost$core$String$Index$frost$core$Int64$frost$core$Int64($tmp159, $tmp161, $tmp163, $tmp164, $tmp165);
return $tmp166;

}
void org$frostlang$plex$runtime$DFA$cleanup(org$frostlang$plex$runtime$DFA* param0) {

// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






