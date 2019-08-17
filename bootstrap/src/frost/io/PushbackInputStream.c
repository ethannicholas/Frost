#include "frost/io/PushbackInputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Int8.h"
#include "frost/collections/ListView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Char8.h"
#include "frost/core/String/UTF8List.h"


static frost$core$String $s1;
frost$io$PushbackInputStream$class_type frost$io$PushbackInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$PushbackInputStream$cleanup, frost$io$PushbackInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q, frost$io$PushbackInputStream$pushback$frost$core$UInt8, frost$io$PushbackInputStream$pushback$frost$core$Int8, frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$UInt8$GT, frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Int8$GT, frost$io$PushbackInputStream$pushback$frost$core$Char8, frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Char8$GT, frost$io$PushbackInputStream$pushback$frost$core$String} };

typedef frost$core$Int (*$fn13)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn27)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn42)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn63)(frost$collections$CollectionView*);
typedef frost$core$UInt8$nullable (*$fn75)(frost$io$InputStream*);
typedef frost$core$Int (*$fn87)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn135)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn175)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn223)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn270)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn318)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn361)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn409)(frost$collections$ListView*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x50\x75\x73\x68\x62\x61\x63\x6b\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 28, 8789994324960517746, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

void frost$io$PushbackInputStream$init$frost$io$InputStream(frost$io$PushbackInputStream* param0, frost$io$InputStream* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:21
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$Array** $tmp3 = &param0->pushbackBuffer;
frost$collections$Array* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array** $tmp5 = &param0->pushbackBuffer;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$InputStream** $tmp6 = &param0->source;
frost$io$InputStream* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$io$InputStream** $tmp8 = &param0->source;
*$tmp8 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:30
frost$io$InputStream$init(((frost$io$InputStream*) param0));
return;

}
frost$core$UInt8$nullable frost$io$PushbackInputStream$read$R$frost$core$UInt8$Q(frost$io$PushbackInputStream* param0) {

frost$core$UInt8 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:35
frost$collections$Array** $tmp9 = &param0->pushbackBuffer;
frost$collections$Array* $tmp10 = *$tmp9;
ITable* $tmp11 = ((frost$collections$CollectionView*) $tmp10)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$core$Int $tmp14 = $tmp12(((frost$collections$CollectionView*) $tmp10));
frost$core$Int $tmp15 = (frost$core$Int) {0u};
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 > $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:36
frost$collections$Array** $tmp21 = &param0->pushbackBuffer;
frost$collections$Array* $tmp22 = *$tmp21;
frost$collections$Array** $tmp23 = &param0->pushbackBuffer;
frost$collections$Array* $tmp24 = *$tmp23;
ITable* $tmp25 = ((frost$collections$CollectionView*) $tmp24)->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
frost$core$Int $tmp28 = $tmp26(((frost$collections$CollectionView*) $tmp24));
frost$core$Int $tmp29 = (frost$core$Int) {1u};
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30 - $tmp31;
frost$core$Int $tmp33 = (frost$core$Int) {$tmp32};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from PushbackInputStream.frost:36:41
frost$core$Int $tmp34 = (frost$core$Int) {0u};
int64_t $tmp35 = $tmp33.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 >= $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block6; else goto block5;
block6:;
ITable* $tmp40 = ((frost$collections$CollectionView*) $tmp22)->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp40 = $tmp40->next;
}
$fn42 $tmp41 = $tmp40->methods[0];
frost$core$Int $tmp43 = $tmp41(((frost$collections$CollectionView*) $tmp22));
int64_t $tmp44 = $tmp33.value;
int64_t $tmp45 = $tmp43.value;
bool $tmp46 = $tmp44 < $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block4; else goto block5;
block5:;
frost$core$Int $tmp49 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, $tmp49, &$s51);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp52 = &$tmp22->data;
frost$core$Object** $tmp53 = *$tmp52;
frost$core$Int64 $tmp54 = frost$core$Int64$init$frost$core$Int($tmp33);
int64_t $tmp55 = $tmp54.value;
frost$core$Object* $tmp56 = $tmp53[$tmp55];
frost$core$Frost$ref$frost$core$Object$Q($tmp56);
*(&local0) = ((frost$core$UInt8$wrapper*) $tmp56)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp56);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:37
frost$collections$Array** $tmp57 = &param0->pushbackBuffer;
frost$collections$Array* $tmp58 = *$tmp57;
frost$collections$Array** $tmp59 = &param0->pushbackBuffer;
frost$collections$Array* $tmp60 = *$tmp59;
ITable* $tmp61 = ((frost$collections$CollectionView*) $tmp60)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[0];
frost$core$Int $tmp64 = $tmp62(((frost$collections$CollectionView*) $tmp60));
frost$core$Int $tmp65 = (frost$core$Int) {1u};
int64_t $tmp66 = $tmp64.value;
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66 - $tmp67;
frost$core$Int $tmp69 = (frost$core$Int) {$tmp68};
frost$core$Object* $tmp70 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp58, $tmp69);
frost$core$Frost$unref$frost$core$Object$Q($tmp70);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:38
frost$core$UInt8 $tmp71 = *(&local0);
return ((frost$core$UInt8$nullable) { $tmp71, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:40
frost$io$InputStream** $tmp72 = &param0->source;
frost$io$InputStream* $tmp73 = *$tmp72;
$fn75 $tmp74 = ($fn75) $tmp73->$class->vtable[2];
frost$core$UInt8$nullable $tmp76 = $tmp74($tmp73);
return $tmp76;

}
void frost$io$PushbackInputStream$pushback$frost$core$UInt8(frost$io$PushbackInputStream* param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
frost$collections$Array** $tmp77 = &param0->pushbackBuffer;
frost$collections$Array* $tmp78 = *$tmp77;
frost$core$UInt8$wrapper* $tmp79;
$tmp79 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp79->value = param1;
frost$collections$Array$add$frost$collections$Array$T($tmp78, ((frost$core$Object*) $tmp79));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$Int8(frost$io$PushbackInputStream* param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:60
frost$collections$Array** $tmp80 = &param0->pushbackBuffer;
frost$collections$Array* $tmp81 = *$tmp80;
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:60:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1208
int8_t $tmp82 = param1.value;
frost$core$UInt8 $tmp83 = (frost$core$UInt8) {((uint8_t) $tmp82)};
frost$core$UInt8$wrapper* $tmp84;
$tmp84 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp84->value = $tmp83;
frost$collections$Array$add$frost$collections$Array$T($tmp81, ((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$UInt8$GT(frost$io$PushbackInputStream* param0, frost$collections$ListView* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:69
ITable* $tmp85 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[0];
frost$core$Int $tmp88 = $tmp86(((frost$collections$CollectionView*) param1));
frost$core$Int $tmp89 = (frost$core$Int) {1u};
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89.value;
int64_t $tmp92 = $tmp90 - $tmp91;
frost$core$Int $tmp93 = (frost$core$Int) {$tmp92};
frost$core$Int $tmp94 = (frost$core$Int) {0u};
frost$core$Int $tmp95 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp96 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp97 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp93, $tmp94, $tmp95, $tmp96);
frost$core$Int $tmp98 = $tmp97.start;
*(&local0) = $tmp98;
frost$core$Int $tmp99 = $tmp97.end;
frost$core$Int $tmp100 = $tmp97.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from PushbackInputStream.frost:69:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp101 = $tmp100.value;
int64_t $tmp102 = -$tmp101;
frost$core$Int $tmp103 = (frost$core$Int) {$tmp102};
frost$core$Bit $tmp104 = $tmp97.inclusive;
bool $tmp105 = $tmp104.value;
frost$core$Int $tmp106 = (frost$core$Int) {0u};
int64_t $tmp107 = $tmp100.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 >= $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block5; else goto block6;
block5:;
if ($tmp105) goto block7; else goto block8;
block7:;
int64_t $tmp112 = $tmp98.value;
int64_t $tmp113 = $tmp99.value;
bool $tmp114 = $tmp112 <= $tmp113;
frost$core$Bit $tmp115 = (frost$core$Bit) {$tmp114};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block2; else goto block3;
block8:;
int64_t $tmp117 = $tmp98.value;
int64_t $tmp118 = $tmp99.value;
bool $tmp119 = $tmp117 < $tmp118;
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119};
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block2; else goto block3;
block6:;
if ($tmp105) goto block9; else goto block10;
block9:;
int64_t $tmp122 = $tmp98.value;
int64_t $tmp123 = $tmp99.value;
bool $tmp124 = $tmp122 >= $tmp123;
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124};
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block2; else goto block3;
block10:;
int64_t $tmp127 = $tmp98.value;
int64_t $tmp128 = $tmp99.value;
bool $tmp129 = $tmp127 > $tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:70
frost$core$Int $tmp132 = *(&local0);
ITable* $tmp133 = param1->$class->itable;
while ($tmp133->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp133 = $tmp133->next;
}
$fn135 $tmp134 = $tmp133->methods[0];
frost$core$Object* $tmp136 = $tmp134(param1, $tmp132);
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.UInt8) from PushbackInputStream.frost:70:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
frost$collections$Array** $tmp137 = &param0->pushbackBuffer;
frost$collections$Array* $tmp138 = *$tmp137;
frost$core$UInt8$wrapper* $tmp139;
$tmp139 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp139->value = ((frost$core$UInt8$wrapper*) $tmp136)->value;
frost$collections$Array$add$frost$collections$Array$T($tmp138, ((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q($tmp136);
frost$core$Int $tmp140 = *(&local0);
if ($tmp111) goto block13; else goto block14;
block13:;
int64_t $tmp141 = $tmp99.value;
int64_t $tmp142 = $tmp140.value;
int64_t $tmp143 = $tmp141 - $tmp142;
frost$core$Int $tmp144 = (frost$core$Int) {$tmp143};
if ($tmp105) goto block15; else goto block16;
block15:;
int64_t $tmp145 = $tmp144.value;
int64_t $tmp146 = $tmp100.value;
bool $tmp147 = $tmp145 >= $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block12; else goto block3;
block16:;
int64_t $tmp150 = $tmp144.value;
int64_t $tmp151 = $tmp100.value;
bool $tmp152 = $tmp150 > $tmp151;
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152};
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block12; else goto block3;
block14:;
int64_t $tmp155 = $tmp140.value;
int64_t $tmp156 = $tmp99.value;
int64_t $tmp157 = $tmp155 - $tmp156;
frost$core$Int $tmp158 = (frost$core$Int) {$tmp157};
if ($tmp105) goto block17; else goto block18;
block17:;
int64_t $tmp159 = $tmp158.value;
int64_t $tmp160 = $tmp103.value;
bool $tmp161 = $tmp159 >= $tmp160;
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block12; else goto block3;
block18:;
int64_t $tmp164 = $tmp158.value;
int64_t $tmp165 = $tmp103.value;
bool $tmp166 = $tmp164 > $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block12; else goto block3;
block12:;
int64_t $tmp169 = $tmp140.value;
int64_t $tmp170 = $tmp100.value;
int64_t $tmp171 = $tmp169 + $tmp170;
frost$core$Int $tmp172 = (frost$core$Int) {$tmp171};
*(&local0) = $tmp172;
goto block2;
block3:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Int8$GT(frost$io$PushbackInputStream* param0, frost$collections$ListView* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:80
ITable* $tmp173 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp173->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[0];
frost$core$Int $tmp176 = $tmp174(((frost$collections$CollectionView*) param1));
frost$core$Int $tmp177 = (frost$core$Int) {1u};
int64_t $tmp178 = $tmp176.value;
int64_t $tmp179 = $tmp177.value;
int64_t $tmp180 = $tmp178 - $tmp179;
frost$core$Int $tmp181 = (frost$core$Int) {$tmp180};
frost$core$Int $tmp182 = (frost$core$Int) {0u};
frost$core$Int $tmp183 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp184 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp185 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp181, $tmp182, $tmp183, $tmp184);
frost$core$Int $tmp186 = $tmp185.start;
*(&local0) = $tmp186;
frost$core$Int $tmp187 = $tmp185.end;
frost$core$Int $tmp188 = $tmp185.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from PushbackInputStream.frost:80:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp189 = $tmp188.value;
int64_t $tmp190 = -$tmp189;
frost$core$Int $tmp191 = (frost$core$Int) {$tmp190};
frost$core$Bit $tmp192 = $tmp185.inclusive;
bool $tmp193 = $tmp192.value;
frost$core$Int $tmp194 = (frost$core$Int) {0u};
int64_t $tmp195 = $tmp188.value;
int64_t $tmp196 = $tmp194.value;
bool $tmp197 = $tmp195 >= $tmp196;
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block5; else goto block6;
block5:;
if ($tmp193) goto block7; else goto block8;
block7:;
int64_t $tmp200 = $tmp186.value;
int64_t $tmp201 = $tmp187.value;
bool $tmp202 = $tmp200 <= $tmp201;
frost$core$Bit $tmp203 = (frost$core$Bit) {$tmp202};
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block2; else goto block3;
block8:;
int64_t $tmp205 = $tmp186.value;
int64_t $tmp206 = $tmp187.value;
bool $tmp207 = $tmp205 < $tmp206;
frost$core$Bit $tmp208 = (frost$core$Bit) {$tmp207};
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block2; else goto block3;
block6:;
if ($tmp193) goto block9; else goto block10;
block9:;
int64_t $tmp210 = $tmp186.value;
int64_t $tmp211 = $tmp187.value;
bool $tmp212 = $tmp210 >= $tmp211;
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212};
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block2; else goto block3;
block10:;
int64_t $tmp215 = $tmp186.value;
int64_t $tmp216 = $tmp187.value;
bool $tmp217 = $tmp215 > $tmp216;
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:81
frost$core$Int $tmp220 = *(&local0);
ITable* $tmp221 = param1->$class->itable;
while ($tmp221->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp221 = $tmp221->next;
}
$fn223 $tmp222 = $tmp221->methods[0];
frost$core$Object* $tmp224 = $tmp222(param1, $tmp220);
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.Int8) from PushbackInputStream.frost:81:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:60
frost$collections$Array** $tmp225 = &param0->pushbackBuffer;
frost$collections$Array* $tmp226 = *$tmp225;
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:60:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1208
int8_t $tmp227 = ((frost$core$Int8$wrapper*) $tmp224)->value.value;
frost$core$UInt8 $tmp228 = (frost$core$UInt8) {((uint8_t) $tmp227)};
frost$core$UInt8$wrapper* $tmp229;
$tmp229 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp229->value = $tmp228;
frost$collections$Array$add$frost$collections$Array$T($tmp226, ((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q($tmp224);
frost$core$Int $tmp230 = *(&local0);
if ($tmp199) goto block14; else goto block15;
block14:;
int64_t $tmp231 = $tmp187.value;
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231 - $tmp232;
frost$core$Int $tmp234 = (frost$core$Int) {$tmp233};
if ($tmp193) goto block16; else goto block17;
block16:;
int64_t $tmp235 = $tmp234.value;
int64_t $tmp236 = $tmp188.value;
bool $tmp237 = $tmp235 >= $tmp236;
frost$core$Bit $tmp238 = (frost$core$Bit) {$tmp237};
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block13; else goto block3;
block17:;
int64_t $tmp240 = $tmp234.value;
int64_t $tmp241 = $tmp188.value;
bool $tmp242 = $tmp240 > $tmp241;
frost$core$Bit $tmp243 = (frost$core$Bit) {$tmp242};
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block13; else goto block3;
block15:;
int64_t $tmp245 = $tmp230.value;
int64_t $tmp246 = $tmp187.value;
int64_t $tmp247 = $tmp245 - $tmp246;
frost$core$Int $tmp248 = (frost$core$Int) {$tmp247};
if ($tmp193) goto block18; else goto block19;
block18:;
int64_t $tmp249 = $tmp248.value;
int64_t $tmp250 = $tmp191.value;
bool $tmp251 = $tmp249 >= $tmp250;
frost$core$Bit $tmp252 = (frost$core$Bit) {$tmp251};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block13; else goto block3;
block19:;
int64_t $tmp254 = $tmp248.value;
int64_t $tmp255 = $tmp191.value;
bool $tmp256 = $tmp254 > $tmp255;
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block13; else goto block3;
block13:;
int64_t $tmp259 = $tmp230.value;
int64_t $tmp260 = $tmp188.value;
int64_t $tmp261 = $tmp259 + $tmp260;
frost$core$Int $tmp262 = (frost$core$Int) {$tmp261};
*(&local0) = $tmp262;
goto block2;
block3:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$Char8(frost$io$PushbackInputStream* param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:91
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:91:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
uint8_t $tmp263 = param1.value;
frost$core$UInt8 $tmp264 = (frost$core$UInt8) {$tmp263};
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.UInt8) from PushbackInputStream.frost:91:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
frost$collections$Array** $tmp265 = &param0->pushbackBuffer;
frost$collections$Array* $tmp266 = *$tmp265;
frost$core$UInt8$wrapper* $tmp267;
$tmp267 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp267->value = $tmp264;
frost$collections$Array$add$frost$collections$Array$T($tmp266, ((frost$core$Object*) $tmp267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Char8$GT(frost$io$PushbackInputStream* param0, frost$collections$ListView* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:100
ITable* $tmp268 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp268->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp268 = $tmp268->next;
}
$fn270 $tmp269 = $tmp268->methods[0];
frost$core$Int $tmp271 = $tmp269(((frost$collections$CollectionView*) param1));
frost$core$Int $tmp272 = (frost$core$Int) {1u};
int64_t $tmp273 = $tmp271.value;
int64_t $tmp274 = $tmp272.value;
int64_t $tmp275 = $tmp273 - $tmp274;
frost$core$Int $tmp276 = (frost$core$Int) {$tmp275};
frost$core$Int $tmp277 = (frost$core$Int) {0u};
frost$core$Int $tmp278 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp279 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp280 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp276, $tmp277, $tmp278, $tmp279);
frost$core$Int $tmp281 = $tmp280.start;
*(&local0) = $tmp281;
frost$core$Int $tmp282 = $tmp280.end;
frost$core$Int $tmp283 = $tmp280.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from PushbackInputStream.frost:100:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp284 = $tmp283.value;
int64_t $tmp285 = -$tmp284;
frost$core$Int $tmp286 = (frost$core$Int) {$tmp285};
frost$core$Bit $tmp287 = $tmp280.inclusive;
bool $tmp288 = $tmp287.value;
frost$core$Int $tmp289 = (frost$core$Int) {0u};
int64_t $tmp290 = $tmp283.value;
int64_t $tmp291 = $tmp289.value;
bool $tmp292 = $tmp290 >= $tmp291;
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292};
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block5; else goto block6;
block5:;
if ($tmp288) goto block7; else goto block8;
block7:;
int64_t $tmp295 = $tmp281.value;
int64_t $tmp296 = $tmp282.value;
bool $tmp297 = $tmp295 <= $tmp296;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block2; else goto block3;
block8:;
int64_t $tmp300 = $tmp281.value;
int64_t $tmp301 = $tmp282.value;
bool $tmp302 = $tmp300 < $tmp301;
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block2; else goto block3;
block6:;
if ($tmp288) goto block9; else goto block10;
block9:;
int64_t $tmp305 = $tmp281.value;
int64_t $tmp306 = $tmp282.value;
bool $tmp307 = $tmp305 >= $tmp306;
frost$core$Bit $tmp308 = (frost$core$Bit) {$tmp307};
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block2; else goto block3;
block10:;
int64_t $tmp310 = $tmp281.value;
int64_t $tmp311 = $tmp282.value;
bool $tmp312 = $tmp310 > $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:101
frost$core$Int $tmp315 = *(&local0);
ITable* $tmp316 = param1->$class->itable;
while ($tmp316->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp316 = $tmp316->next;
}
$fn318 $tmp317 = $tmp316->methods[0];
frost$core$Object* $tmp319 = $tmp317(param1, $tmp315);
// begin inline call to method frost.io.PushbackInputStream.pushback(c:frost.core.Char8) from PushbackInputStream.frost:101:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:91
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:91:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
uint8_t $tmp320 = ((frost$core$Char8$wrapper*) $tmp319)->value.value;
frost$core$UInt8 $tmp321 = (frost$core$UInt8) {$tmp320};
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.UInt8) from PushbackInputStream.frost:91:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
frost$collections$Array** $tmp322 = &param0->pushbackBuffer;
frost$collections$Array* $tmp323 = *$tmp322;
frost$core$UInt8$wrapper* $tmp324;
$tmp324 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp324->value = $tmp321;
frost$collections$Array$add$frost$collections$Array$T($tmp323, ((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$Frost$unref$frost$core$Object$Q($tmp319);
frost$core$Int $tmp325 = *(&local0);
if ($tmp294) goto block15; else goto block16;
block15:;
int64_t $tmp326 = $tmp282.value;
int64_t $tmp327 = $tmp325.value;
int64_t $tmp328 = $tmp326 - $tmp327;
frost$core$Int $tmp329 = (frost$core$Int) {$tmp328};
if ($tmp288) goto block17; else goto block18;
block17:;
int64_t $tmp330 = $tmp329.value;
int64_t $tmp331 = $tmp283.value;
bool $tmp332 = $tmp330 >= $tmp331;
frost$core$Bit $tmp333 = (frost$core$Bit) {$tmp332};
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block14; else goto block3;
block18:;
int64_t $tmp335 = $tmp329.value;
int64_t $tmp336 = $tmp283.value;
bool $tmp337 = $tmp335 > $tmp336;
frost$core$Bit $tmp338 = (frost$core$Bit) {$tmp337};
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block14; else goto block3;
block16:;
int64_t $tmp340 = $tmp325.value;
int64_t $tmp341 = $tmp282.value;
int64_t $tmp342 = $tmp340 - $tmp341;
frost$core$Int $tmp343 = (frost$core$Int) {$tmp342};
if ($tmp288) goto block19; else goto block20;
block19:;
int64_t $tmp344 = $tmp343.value;
int64_t $tmp345 = $tmp286.value;
bool $tmp346 = $tmp344 >= $tmp345;
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block14; else goto block3;
block20:;
int64_t $tmp349 = $tmp343.value;
int64_t $tmp350 = $tmp286.value;
bool $tmp351 = $tmp349 > $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block14; else goto block3;
block14:;
int64_t $tmp354 = $tmp325.value;
int64_t $tmp355 = $tmp283.value;
int64_t $tmp356 = $tmp354 + $tmp355;
frost$core$Int $tmp357 = (frost$core$Int) {$tmp356};
*(&local0) = $tmp357;
goto block2;
block3:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$String(frost$io$PushbackInputStream* param0, frost$core$String* param1) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:111
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from PushbackInputStream.frost:111:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp358 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp358, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp358)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// begin inline call to method frost.io.PushbackInputStream.pushback(c:frost.collections.ListView<frost.core.Char8>) from PushbackInputStream.frost:111:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:100
ITable* $tmp359 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp358))->$class->itable;
while ($tmp359->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp359 = $tmp359->next;
}
$fn361 $tmp360 = $tmp359->methods[0];
frost$core$Int $tmp362 = $tmp360(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp358)));
frost$core$Int $tmp363 = (frost$core$Int) {1u};
int64_t $tmp364 = $tmp362.value;
int64_t $tmp365 = $tmp363.value;
int64_t $tmp366 = $tmp364 - $tmp365;
frost$core$Int $tmp367 = (frost$core$Int) {$tmp366};
frost$core$Int $tmp368 = (frost$core$Int) {0u};
frost$core$Int $tmp369 = (frost$core$Int) {18446744073709551615u};
frost$core$Bit $tmp370 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT $tmp371 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit($tmp367, $tmp368, $tmp369, $tmp370);
frost$core$Int $tmp372 = $tmp371.start;
*(&local0) = $tmp372;
frost$core$Int $tmp373 = $tmp371.end;
frost$core$Int $tmp374 = $tmp371.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from PushbackInputStream.frost:100:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp375 = $tmp374.value;
int64_t $tmp376 = -$tmp375;
frost$core$Int $tmp377 = (frost$core$Int) {$tmp376};
frost$core$Bit $tmp378 = $tmp371.inclusive;
bool $tmp379 = $tmp378.value;
frost$core$Int $tmp380 = (frost$core$Int) {0u};
int64_t $tmp381 = $tmp374.value;
int64_t $tmp382 = $tmp380.value;
bool $tmp383 = $tmp381 >= $tmp382;
frost$core$Bit $tmp384 = (frost$core$Bit) {$tmp383};
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block7; else goto block8;
block7:;
if ($tmp379) goto block9; else goto block10;
block9:;
int64_t $tmp386 = $tmp372.value;
int64_t $tmp387 = $tmp373.value;
bool $tmp388 = $tmp386 <= $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block4; else goto block5;
block10:;
int64_t $tmp391 = $tmp372.value;
int64_t $tmp392 = $tmp373.value;
bool $tmp393 = $tmp391 < $tmp392;
frost$core$Bit $tmp394 = (frost$core$Bit) {$tmp393};
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block4; else goto block5;
block8:;
if ($tmp379) goto block11; else goto block12;
block11:;
int64_t $tmp396 = $tmp372.value;
int64_t $tmp397 = $tmp373.value;
bool $tmp398 = $tmp396 >= $tmp397;
frost$core$Bit $tmp399 = (frost$core$Bit) {$tmp398};
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block4; else goto block5;
block12:;
int64_t $tmp401 = $tmp372.value;
int64_t $tmp402 = $tmp373.value;
bool $tmp403 = $tmp401 > $tmp402;
frost$core$Bit $tmp404 = (frost$core$Bit) {$tmp403};
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:101
frost$core$Int $tmp406 = *(&local0);
ITable* $tmp407 = ((frost$collections$ListView*) $tmp358)->$class->itable;
while ($tmp407->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp407 = $tmp407->next;
}
$fn409 $tmp408 = $tmp407->methods[0];
frost$core$Object* $tmp410 = $tmp408(((frost$collections$ListView*) $tmp358), $tmp406);
// begin inline call to method frost.io.PushbackInputStream.pushback(c:frost.core.Char8) from PushbackInputStream.frost:101:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:91
frost$core$UInt8 $tmp411 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8(((frost$core$Char8$wrapper*) $tmp410)->value);
frost$io$PushbackInputStream$pushback$frost$core$UInt8(param0, $tmp411);
frost$core$Frost$unref$frost$core$Object$Q($tmp410);
frost$core$Int $tmp412 = *(&local0);
if ($tmp385) goto block15; else goto block16;
block15:;
int64_t $tmp413 = $tmp373.value;
int64_t $tmp414 = $tmp412.value;
int64_t $tmp415 = $tmp413 - $tmp414;
frost$core$Int $tmp416 = (frost$core$Int) {$tmp415};
if ($tmp379) goto block17; else goto block18;
block17:;
int64_t $tmp417 = $tmp416.value;
int64_t $tmp418 = $tmp374.value;
bool $tmp419 = $tmp417 >= $tmp418;
frost$core$Bit $tmp420 = (frost$core$Bit) {$tmp419};
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block14; else goto block5;
block18:;
int64_t $tmp422 = $tmp416.value;
int64_t $tmp423 = $tmp374.value;
bool $tmp424 = $tmp422 > $tmp423;
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block14; else goto block5;
block16:;
int64_t $tmp427 = $tmp412.value;
int64_t $tmp428 = $tmp373.value;
int64_t $tmp429 = $tmp427 - $tmp428;
frost$core$Int $tmp430 = (frost$core$Int) {$tmp429};
if ($tmp379) goto block19; else goto block20;
block19:;
int64_t $tmp431 = $tmp430.value;
int64_t $tmp432 = $tmp377.value;
bool $tmp433 = $tmp431 >= $tmp432;
frost$core$Bit $tmp434 = (frost$core$Bit) {$tmp433};
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block14; else goto block5;
block20:;
int64_t $tmp436 = $tmp430.value;
int64_t $tmp437 = $tmp377.value;
bool $tmp438 = $tmp436 > $tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block14; else goto block5;
block14:;
int64_t $tmp441 = $tmp412.value;
int64_t $tmp442 = $tmp374.value;
int64_t $tmp443 = $tmp441 + $tmp442;
frost$core$Int $tmp444 = (frost$core$Int) {$tmp443};
*(&local0) = $tmp444;
goto block4;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp358)));
return;

}
void frost$io$PushbackInputStream$cleanup(frost$io$PushbackInputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:16
frost$io$InputStream$cleanup(((frost$io$InputStream*) param0));
frost$io$InputStream** $tmp445 = &param0->source;
frost$io$InputStream* $tmp446 = *$tmp445;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$collections$Array** $tmp447 = &param0->pushbackBuffer;
frost$collections$Array* $tmp448 = *$tmp447;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
return;

}

