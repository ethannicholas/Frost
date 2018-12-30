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
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x6f\x6b\x65\x6e\x20", 14, 8535351213971602697, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
panda$core$Bit $tmp49 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp46, $tmp48);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block4; else goto block5;
block4:;
// line 51
panda$core$Char8** $tmp51 = &param0->source;
panda$core$Char8* $tmp52 = *$tmp51;
panda$core$Int64* $tmp53 = &param0->offset;
panda$core$Int64 $tmp54 = *$tmp53;
int64_t $tmp55 = $tmp54.value;
panda$core$Char8 $tmp56 = $tmp52[$tmp55];
*(&local6) = $tmp56;
// line 53
panda$core$Char8 $tmp57 = *(&local6);
panda$core$UInt8 $tmp58 = panda$core$Char8$convert$R$panda$core$UInt8($tmp57);
panda$core$UInt8 $tmp59 = (panda$core$UInt8) {255};
uint8_t $tmp60 = $tmp58.value;
uint8_t $tmp61 = $tmp59.value;
bool $tmp62 = $tmp60 > $tmp61;
panda$core$Bit $tmp63 = (panda$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block6; else goto block7;
block6:;
// line 54
panda$core$Char8 $tmp65 = *(&local6);
panda$core$UInt8 $tmp66 = panda$core$Char8$convert$R$panda$core$UInt8($tmp65);
panda$core$UInt8$wrapper* $tmp67;
$tmp67 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
$tmp67->value = $tmp66;
panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s69, ((panda$core$Object*) $tmp67));
panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp68, &$s71);
panda$io$Console$printLine$panda$core$String($tmp70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// line 55
panda$core$UInt8 $tmp72 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp72);
goto block7;
block7:;
// line 57
panda$core$Int64*** $tmp73 = &param0->transitions;
panda$core$Int64** $tmp74 = *$tmp73;
panda$core$Char8 $tmp75 = *(&local6);
panda$core$Int64 $tmp76 = panda$core$Char8$convert$R$panda$core$Int64($tmp75);
int64_t $tmp77 = $tmp76.value;
panda$core$Int64* $tmp78 = $tmp74[$tmp77];
panda$core$Int64 $tmp79 = *(&local0);
int64_t $tmp80 = $tmp79.value;
panda$core$Int64 $tmp81 = $tmp78[$tmp80];
*(&local0) = $tmp81;
// line 58
panda$core$Int64 $tmp82 = *(&local0);
panda$core$Int64 $tmp83 = (panda$core$Int64) {0};
panda$core$Bit $tmp84 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp82, $tmp83);
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block8; else goto block10;
block8:;
// line 59
panda$core$Int64* $tmp86 = &param0->offset;
panda$core$Int64 $tmp87 = *$tmp86;
panda$core$Int64 $tmp88 = (panda$core$Int64) {1};
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 + $tmp90;
panda$core$Int64 $tmp92 = (panda$core$Int64) {$tmp91};
panda$core$Int64* $tmp93 = &param0->offset;
*$tmp93 = $tmp92;
// line 60
panda$core$Char8 $tmp94 = *(&local6);
panda$core$UInt8 $tmp95 = panda$core$Char8$convert$R$panda$core$UInt8($tmp94);
panda$core$UInt8 $tmp96 = (panda$core$UInt8) {10};
panda$core$Bit $tmp97 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit($tmp95, $tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block12; else goto block13;
block12:;
// line 62
panda$core$Int64* $tmp99 = &param0->line;
panda$core$Int64 $tmp100 = *$tmp99;
panda$core$Int64 $tmp101 = (panda$core$Int64) {1};
int64_t $tmp102 = $tmp100.value;
int64_t $tmp103 = $tmp101.value;
int64_t $tmp104 = $tmp102 + $tmp103;
panda$core$Int64 $tmp105 = (panda$core$Int64) {$tmp104};
panda$core$Int64* $tmp106 = &param0->line;
*$tmp106 = $tmp105;
// line 63
panda$core$Int64 $tmp107 = (panda$core$Int64) {1};
panda$core$Int64* $tmp108 = &param0->column;
*$tmp108 = $tmp107;
goto block11;
block13:;
panda$core$UInt8 $tmp109 = (panda$core$UInt8) {9};
panda$core$Bit $tmp110 = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit($tmp95, $tmp109);
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block14; else goto block15;
block14:;
// line 65
panda$core$Int64* $tmp112 = &param0->column;
panda$core$Int64 $tmp113 = *$tmp112;
panda$core$Int64 $tmp114 = (panda$core$Int64) {4};
panda$core$Int64* $tmp115 = &param0->column;
panda$core$Int64 $tmp116 = *$tmp115;
panda$core$Int64 $tmp117 = (panda$core$Int64) {4};
panda$core$Int64 $tmp118 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp116, $tmp117);
int64_t $tmp119 = $tmp114.value;
int64_t $tmp120 = $tmp118.value;
int64_t $tmp121 = $tmp119 - $tmp120;
panda$core$Int64 $tmp122 = (panda$core$Int64) {$tmp121};
int64_t $tmp123 = $tmp113.value;
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123 + $tmp124;
panda$core$Int64 $tmp126 = (panda$core$Int64) {$tmp125};
panda$core$Int64* $tmp127 = &param0->column;
*$tmp127 = $tmp126;
goto block11;
block15:;
// line 67
panda$core$Int64* $tmp128 = &param0->column;
panda$core$Int64 $tmp129 = *$tmp128;
panda$core$Int64 $tmp130 = (panda$core$Int64) {1};
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
int64_t $tmp133 = $tmp131 + $tmp132;
panda$core$Int64 $tmp134 = (panda$core$Int64) {$tmp133};
panda$core$Int64* $tmp135 = &param0->column;
*$tmp135 = $tmp134;
goto block11;
block11:;
// line 69
panda$core$Int64** $tmp136 = &param0->accepts;
panda$core$Int64* $tmp137 = *$tmp136;
panda$core$Int64 $tmp138 = *(&local0);
int64_t $tmp139 = $tmp138.value;
panda$core$Int64 $tmp140 = $tmp137[$tmp139];
*(&local7) = $tmp140;
// line 70
panda$core$Int64 $tmp141 = *(&local7);
panda$core$Int64 $tmp142 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp143 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp141, $tmp142);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block16; else goto block17;
block16:;
// line 71
panda$core$Int64 $tmp145 = *(&local7);
*(&local1) = $tmp145;
// line 72
panda$core$Int64* $tmp146 = &param0->offset;
panda$core$Int64 $tmp147 = *$tmp146;
*(&local3) = $tmp147;
goto block17;
block17:;
goto block9;
block10:;
// line 1
// line 76
goto block5;
block9:;
goto block3;
block5:;
// line 79
panda$core$Int64 $tmp148 = *(&local3);
panda$core$Int64* $tmp149 = &param0->offset;
*$tmp149 = $tmp148;
// line 80
panda$core$Int64 $tmp150 = *(&local1);
panda$core$Int64 $tmp151 = *(&local2);
panda$core$String$Index $tmp152 = panda$core$String$Index$init$panda$core$Int64($tmp151);
panda$core$Int64 $tmp153 = *(&local3);
panda$core$String$Index $tmp154 = panda$core$String$Index$init$panda$core$Int64($tmp153);
panda$core$Int64 $tmp155 = *(&local4);
panda$core$Int64 $tmp156 = *(&local5);
org$pandalanguage$plex$runtime$RawToken $tmp157 = org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64($tmp150, $tmp152, $tmp154, $tmp155, $tmp156);
return $tmp157;

}
void org$pandalanguage$plex$runtime$DFA$cleanup(org$pandalanguage$plex$runtime$DFA* param0) {

return;

}






