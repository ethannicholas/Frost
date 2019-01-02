#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/Char8.h"
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"
#include "panda/core/UInt8.h"
#include "panda/io/Console.h"
#include "panda/core/Panda.h"
#include "panda/core/System.h"


static panda$core$String $s1;
org$pandalanguage$plex$runtime$DFA$class_type org$pandalanguage$plex$runtime$DFA$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$plex$runtime$DFA$cleanup, org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x44\x46\x41", 34, 6704091602165994609, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 8535351213971602697, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$plex$runtime$DFA$init$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* param0, panda$core$Int64 param1, panda$core$Int64** param2, panda$core$Int64* param3) {

// line 27
org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(param0, &$s2, param1, param2, param3);
return;

}
void org$pandalanguage$plex$runtime$DFA$init$panda$core$String$panda$core$Int64$panda$unsafe$Pointer$LTpanda$unsafe$Pointer$LTpanda$core$Int64$GT$GT$panda$unsafe$Pointer$LTpanda$core$Int64$GT(org$pandalanguage$plex$runtime$DFA* param0, panda$core$String* param1, panda$core$Int64 param2, panda$core$Int64** param3, panda$core$Int64* param4) {

// line 22
panda$core$Int64 $tmp3 = (panda$core$Int64) {1};
panda$core$Int64* $tmp4 = &param0->line;
*$tmp4 = $tmp3;
// line 24
panda$core$Int64 $tmp5 = (panda$core$Int64) {1};
panda$core$Int64* $tmp6 = &param0->column;
*$tmp6 = $tmp5;
// line 32
panda$core$Char8** $tmp7 = &param1->data;
panda$core$Char8* $tmp8 = *$tmp7;
panda$core$Char8** $tmp9 = &param0->source;
*$tmp9 = $tmp8;
// line 33
panda$core$Int64 $tmp10 = (panda$core$Int64) {0};
panda$core$Int64* $tmp11 = &param0->offset;
*$tmp11 = $tmp10;
// line 34
panda$core$Int64 $tmp12 = panda$core$String$get_byteLength$R$panda$core$Int64(param1);
panda$core$Int64* $tmp13 = &param0->sourceEnd;
*$tmp13 = $tmp12;
// line 35
panda$core$Int64* $tmp14 = &param0->stateCount;
*$tmp14 = param2;
// line 36
panda$core$Int64*** $tmp15 = &param0->transitions;
*$tmp15 = param3;
// line 37
panda$core$Int64** $tmp16 = &param0->accepts;
*$tmp16 = param4;
return;

}
org$pandalanguage$plex$runtime$RawToken org$pandalanguage$plex$runtime$DFA$next$R$org$pandalanguage$plex$runtime$RawToken(org$pandalanguage$plex$runtime$DFA* param0) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Int64 local4;
panda$core$Int64 local5;
panda$core$Char8 local6;
panda$core$Int64 local7;
// line 41
panda$core$Int64 $tmp17 = (panda$core$Int64) {1};
*(&local0) = $tmp17;
// line 42
panda$core$Int64* $tmp18 = &param0->offset;
panda$core$Int64 $tmp19 = *$tmp18;
panda$core$Int64* $tmp20 = &param0->sourceEnd;
panda$core$Int64 $tmp21 = *$tmp20;
panda$core$Bit $tmp22 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp19, $tmp21);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block2;
block1:;
// line 43
panda$core$Int64 $tmp24 = (panda$core$Int64) {0};
panda$core$Int64* $tmp25 = &param0->offset;
panda$core$Int64 $tmp26 = *$tmp25;
panda$core$String$Index $tmp27 = panda$core$String$Index$init$panda$core$Int64($tmp26);
panda$core$Int64* $tmp28 = &param0->offset;
panda$core$Int64 $tmp29 = *$tmp28;
panda$core$String$Index $tmp30 = panda$core$String$Index$init$panda$core$Int64($tmp29);
panda$core$Int64* $tmp31 = &param0->line;
panda$core$Int64 $tmp32 = *$tmp31;
panda$core$Int64* $tmp33 = &param0->column;
panda$core$Int64 $tmp34 = *$tmp33;
org$pandalanguage$plex$runtime$RawToken $tmp35 = org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64($tmp24, $tmp27, $tmp30, $tmp32, $tmp34);
return $tmp35;
block2:;
// line 45
panda$core$Int64 $tmp36 = (panda$core$Int64) {18446744073709551615};
*(&local1) = $tmp36;
// line 46
panda$core$Int64* $tmp37 = &param0->offset;
panda$core$Int64 $tmp38 = *$tmp37;
*(&local2) = $tmp38;
// line 47
panda$core$Int64* $tmp39 = &param0->offset;
panda$core$Int64 $tmp40 = *$tmp39;
*(&local3) = $tmp40;
// line 48
panda$core$Int64* $tmp41 = &param0->line;
panda$core$Int64 $tmp42 = *$tmp41;
*(&local4) = $tmp42;
// line 49
panda$core$Int64* $tmp43 = &param0->column;
panda$core$Int64 $tmp44 = *$tmp43;
*(&local5) = $tmp44;
// line 50
goto block3;
block3:;
panda$core$Int64* $tmp45 = &param0->offset;
panda$core$Int64 $tmp46 = *$tmp45;
panda$core$Int64* $tmp47 = &param0->sourceEnd;
panda$core$Int64 $tmp48 = *$tmp47;
int64_t $tmp49 = $tmp46.value;
int64_t $tmp50 = $tmp48.value;
bool $tmp51 = $tmp49 != $tmp50;
panda$core$Bit $tmp52 = (panda$core$Bit) {$tmp51};
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block4; else goto block5;
block4:;
// line 51
panda$core$Char8** $tmp54 = &param0->source;
panda$core$Char8* $tmp55 = *$tmp54;
panda$core$Int64* $tmp56 = &param0->offset;
panda$core$Int64 $tmp57 = *$tmp56;
int64_t $tmp58 = $tmp57.value;
panda$core$Char8 $tmp59 = $tmp55[$tmp58];
*(&local6) = $tmp59;
// line 53
panda$core$Char8 $tmp60 = *(&local6);
panda$core$UInt8 $tmp61 = panda$core$Char8$convert$R$panda$core$UInt8($tmp60);
panda$core$UInt8 $tmp62 = (panda$core$UInt8) {255};
uint8_t $tmp63 = $tmp61.value;
uint8_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 > $tmp64;
panda$core$Bit $tmp66 = (panda$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block6; else goto block7;
block6:;
// line 54
panda$core$Char8 $tmp68 = *(&local6);
panda$core$UInt8 $tmp69 = panda$core$Char8$convert$R$panda$core$UInt8($tmp68);
panda$core$UInt8$wrapper* $tmp70;
$tmp70 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
$tmp70->value = $tmp69;
panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s72, ((panda$core$Object*) $tmp70));
panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp71, &$s74);
panda$io$Console$printLine$panda$core$String($tmp73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// line 55
panda$core$UInt8 $tmp75 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp75);
goto block7;
block7:;
// line 57
panda$core$Int64*** $tmp76 = &param0->transitions;
panda$core$Int64** $tmp77 = *$tmp76;
panda$core$Char8 $tmp78 = *(&local6);
panda$core$Int64 $tmp79 = panda$core$Char8$convert$R$panda$core$Int64($tmp78);
int64_t $tmp80 = $tmp79.value;
panda$core$Int64* $tmp81 = $tmp77[$tmp80];
panda$core$Int64 $tmp82 = *(&local0);
int64_t $tmp83 = $tmp82.value;
panda$core$Int64 $tmp84 = $tmp81[$tmp83];
*(&local0) = $tmp84;
// line 58
panda$core$Int64 $tmp85 = *(&local0);
panda$core$Int64 $tmp86 = (panda$core$Int64) {0};
int64_t $tmp87 = $tmp85.value;
int64_t $tmp88 = $tmp86.value;
bool $tmp89 = $tmp87 != $tmp88;
panda$core$Bit $tmp90 = (panda$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block8; else goto block10;
block8:;
// line 59
panda$core$Int64* $tmp92 = &param0->offset;
panda$core$Int64 $tmp93 = *$tmp92;
panda$core$Int64 $tmp94 = (panda$core$Int64) {1};
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95 + $tmp96;
panda$core$Int64 $tmp98 = (panda$core$Int64) {$tmp97};
panda$core$Int64* $tmp99 = &param0->offset;
*$tmp99 = $tmp98;
// line 60
panda$core$Char8 $tmp100 = *(&local6);
panda$core$UInt8 $tmp101 = panda$core$Char8$convert$R$panda$core$UInt8($tmp100);
panda$core$UInt8 $tmp102 = (panda$core$UInt8) {10};
panda$core$Bit $tmp103 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit($tmp101, $tmp102);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block12; else goto block13;
block12:;
// line 62
panda$core$Int64* $tmp105 = &param0->line;
panda$core$Int64 $tmp106 = *$tmp105;
panda$core$Int64 $tmp107 = (panda$core$Int64) {1};
int64_t $tmp108 = $tmp106.value;
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108 + $tmp109;
panda$core$Int64 $tmp111 = (panda$core$Int64) {$tmp110};
panda$core$Int64* $tmp112 = &param0->line;
*$tmp112 = $tmp111;
// line 63
panda$core$Int64 $tmp113 = (panda$core$Int64) {1};
panda$core$Int64* $tmp114 = &param0->column;
*$tmp114 = $tmp113;
goto block11;
block13:;
panda$core$UInt8 $tmp115 = (panda$core$UInt8) {9};
panda$core$Bit $tmp116 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit($tmp101, $tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block14; else goto block15;
block14:;
// line 66
panda$core$Int64* $tmp118 = &param0->column;
panda$core$Int64 $tmp119 = *$tmp118;
panda$core$Int64 $tmp120 = (panda$core$Int64) {4};
panda$core$Int64* $tmp121 = &param0->column;
panda$core$Int64 $tmp122 = *$tmp121;
panda$core$Int64 $tmp123 = (panda$core$Int64) {4};
panda$core$Int64 $tmp124 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp122, $tmp123);
int64_t $tmp125 = $tmp120.value;
int64_t $tmp126 = $tmp124.value;
int64_t $tmp127 = $tmp125 - $tmp126;
panda$core$Int64 $tmp128 = (panda$core$Int64) {$tmp127};
int64_t $tmp129 = $tmp119.value;
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129 + $tmp130;
panda$core$Int64 $tmp132 = (panda$core$Int64) {$tmp131};
panda$core$Int64* $tmp133 = &param0->column;
*$tmp133 = $tmp132;
goto block11;
block15:;
// line 69
panda$core$Int64* $tmp134 = &param0->column;
panda$core$Int64 $tmp135 = *$tmp134;
panda$core$Int64 $tmp136 = (panda$core$Int64) {1};
int64_t $tmp137 = $tmp135.value;
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137 + $tmp138;
panda$core$Int64 $tmp140 = (panda$core$Int64) {$tmp139};
panda$core$Int64* $tmp141 = &param0->column;
*$tmp141 = $tmp140;
goto block11;
block11:;
// line 72
panda$core$Int64** $tmp142 = &param0->accepts;
panda$core$Int64* $tmp143 = *$tmp142;
panda$core$Int64 $tmp144 = *(&local0);
int64_t $tmp145 = $tmp144.value;
panda$core$Int64 $tmp146 = $tmp143[$tmp145];
*(&local7) = $tmp146;
// line 73
panda$core$Int64 $tmp147 = *(&local7);
panda$core$Int64 $tmp148 = (panda$core$Int64) {18446744073709551615};
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 != $tmp150;
panda$core$Bit $tmp152 = (panda$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block16; else goto block17;
block16:;
// line 74
panda$core$Int64 $tmp154 = *(&local7);
*(&local1) = $tmp154;
// line 75
panda$core$Int64* $tmp155 = &param0->offset;
panda$core$Int64 $tmp156 = *$tmp155;
*(&local3) = $tmp156;
goto block17;
block17:;
goto block9;
block10:;
// line 1
// line 79
goto block5;
block9:;
goto block3;
block5:;
// line 82
panda$core$Int64 $tmp157 = *(&local3);
panda$core$Int64* $tmp158 = &param0->offset;
*$tmp158 = $tmp157;
// line 83
panda$core$Int64 $tmp159 = *(&local1);
panda$core$Int64 $tmp160 = *(&local2);
panda$core$String$Index $tmp161 = panda$core$String$Index$init$panda$core$Int64($tmp160);
panda$core$Int64 $tmp162 = *(&local3);
panda$core$String$Index $tmp163 = panda$core$String$Index$init$panda$core$Int64($tmp162);
panda$core$Int64 $tmp164 = *(&local4);
panda$core$Int64 $tmp165 = *(&local5);
org$pandalanguage$plex$runtime$RawToken $tmp166 = org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64($tmp159, $tmp161, $tmp163, $tmp164, $tmp165);
return $tmp166;

}
void org$pandalanguage$plex$runtime$DFA$cleanup(org$pandalanguage$plex$runtime$DFA* param0) {

return;

}






