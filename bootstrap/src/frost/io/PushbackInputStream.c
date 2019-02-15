#include "frost/io/PushbackInputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Int8.h"
#include "frost/collections/ListView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Char8.h"
#include "frost/core/String/UTF8List.h"


static frost$core$String $s1;
frost$io$PushbackInputStream$class_type frost$io$PushbackInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$PushbackInputStream$cleanup, frost$io$PushbackInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int64$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q, frost$io$PushbackInputStream$pushback$frost$core$UInt8, frost$io$PushbackInputStream$pushback$frost$core$Int8, frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$UInt8$GT, frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Int8$GT, frost$io$PushbackInputStream$pushback$frost$core$Char8, frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Char8$GT, frost$io$PushbackInputStream$pushback$frost$core$String} };

typedef frost$core$Int64 (*$fn13)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn27)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn42)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn62)(frost$collections$CollectionView*);
typedef frost$core$UInt8$nullable (*$fn74)(frost$io$InputStream*);
typedef frost$core$Int64 (*$fn86)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn138)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn182)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn234)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn285)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn337)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn384)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn436)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x50\x75\x73\x68\x62\x61\x63\x6b\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 28, 8789994324960517746, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };

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
frost$core$Int64 $tmp14 = $tmp12(((frost$collections$CollectionView*) $tmp10));
frost$core$Int64 $tmp15 = (frost$core$Int64) {0u};
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
frost$core$Int64 $tmp28 = $tmp26(((frost$collections$CollectionView*) $tmp24));
frost$core$Int64 $tmp29 = (frost$core$Int64) {1u};
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
int64_t $tmp32 = $tmp30 - $tmp31;
frost$core$Int64 $tmp33 = (frost$core$Int64) {$tmp32};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from PushbackInputStream.frost:36:41
frost$core$Int64 $tmp34 = (frost$core$Int64) {0u};
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
frost$core$Int64 $tmp43 = $tmp41(((frost$collections$CollectionView*) $tmp22));
int64_t $tmp44 = $tmp33.value;
int64_t $tmp45 = $tmp43.value;
bool $tmp46 = $tmp44 < $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp49 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s50, $tmp49, &$s51);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp52 = &$tmp22->data;
frost$core$Object** $tmp53 = *$tmp52;
int64_t $tmp54 = $tmp33.value;
frost$core$Object* $tmp55 = $tmp53[$tmp54];
frost$core$Frost$ref$frost$core$Object$Q($tmp55);
*(&local0) = ((frost$core$UInt8$wrapper*) $tmp55)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp55);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:37
frost$collections$Array** $tmp56 = &param0->pushbackBuffer;
frost$collections$Array* $tmp57 = *$tmp56;
frost$collections$Array** $tmp58 = &param0->pushbackBuffer;
frost$collections$Array* $tmp59 = *$tmp58;
ITable* $tmp60 = ((frost$collections$CollectionView*) $tmp59)->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[0];
frost$core$Int64 $tmp63 = $tmp61(((frost$collections$CollectionView*) $tmp59));
frost$core$Int64 $tmp64 = (frost$core$Int64) {1u};
int64_t $tmp65 = $tmp63.value;
int64_t $tmp66 = $tmp64.value;
int64_t $tmp67 = $tmp65 - $tmp66;
frost$core$Int64 $tmp68 = (frost$core$Int64) {$tmp67};
frost$core$Object* $tmp69 = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T($tmp57, $tmp68);
frost$core$Frost$unref$frost$core$Object$Q($tmp69);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:38
frost$core$UInt8 $tmp70 = *(&local0);
return ((frost$core$UInt8$nullable) { $tmp70, true });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:40
frost$io$InputStream** $tmp71 = &param0->source;
frost$io$InputStream* $tmp72 = *$tmp71;
$fn74 $tmp73 = ($fn74) $tmp72->$class->vtable[2];
frost$core$UInt8$nullable $tmp75 = $tmp73($tmp72);
return $tmp75;

}
void frost$io$PushbackInputStream$pushback$frost$core$UInt8(frost$io$PushbackInputStream* param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
frost$collections$Array** $tmp76 = &param0->pushbackBuffer;
frost$collections$Array* $tmp77 = *$tmp76;
frost$core$UInt8$wrapper* $tmp78;
$tmp78 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp78->value = param1;
frost$collections$Array$add$frost$collections$Array$T($tmp77, ((frost$core$Object*) $tmp78));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$Int8(frost$io$PushbackInputStream* param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:60
frost$collections$Array** $tmp79 = &param0->pushbackBuffer;
frost$collections$Array* $tmp80 = *$tmp79;
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:60:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int8.stub:823
int8_t $tmp81 = param1.value;
frost$core$UInt8 $tmp82 = (frost$core$UInt8) {((uint8_t) $tmp81)};
frost$core$UInt8$wrapper* $tmp83;
$tmp83 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp83->value = $tmp82;
frost$collections$Array$add$frost$collections$Array$T($tmp80, ((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$UInt8$GT(frost$io$PushbackInputStream* param0, frost$collections$ListView* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:69
ITable* $tmp84 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp84 = $tmp84->next;
}
$fn86 $tmp85 = $tmp84->methods[0];
frost$core$Int64 $tmp87 = $tmp85(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp88 = (frost$core$Int64) {1u};
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 - $tmp90;
frost$core$Int64 $tmp92 = (frost$core$Int64) {$tmp91};
frost$core$Int64 $tmp93 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp94 = (frost$core$Int64) {18446744073709551615u};
frost$core$Bit $tmp95 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp96 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp92, $tmp93, $tmp94, $tmp95);
frost$core$Int64 $tmp97 = $tmp96.start;
*(&local0) = $tmp97;
frost$core$Int64 $tmp98 = $tmp96.end;
frost$core$Int64 $tmp99 = $tmp96.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp100 = $tmp99.value;
frost$core$UInt64 $tmp101 = (frost$core$UInt64) {((uint64_t) $tmp100)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from PushbackInputStream.frost:69:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp102 = $tmp99.value;
int64_t $tmp103 = -$tmp102;
frost$core$Int64 $tmp104 = (frost$core$Int64) {$tmp103};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp105 = $tmp104.value;
frost$core$UInt64 $tmp106 = (frost$core$UInt64) {((uint64_t) $tmp105)};
frost$core$Bit $tmp107 = $tmp96.inclusive;
bool $tmp108 = $tmp107.value;
frost$core$Int64 $tmp109 = (frost$core$Int64) {0u};
int64_t $tmp110 = $tmp99.value;
int64_t $tmp111 = $tmp109.value;
bool $tmp112 = $tmp110 >= $tmp111;
frost$core$Bit $tmp113 = (frost$core$Bit) {$tmp112};
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block7; else goto block8;
block7:;
if ($tmp108) goto block9; else goto block10;
block9:;
int64_t $tmp115 = $tmp97.value;
int64_t $tmp116 = $tmp98.value;
bool $tmp117 = $tmp115 <= $tmp116;
frost$core$Bit $tmp118 = (frost$core$Bit) {$tmp117};
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block4; else goto block5;
block10:;
int64_t $tmp120 = $tmp97.value;
int64_t $tmp121 = $tmp98.value;
bool $tmp122 = $tmp120 < $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block4; else goto block5;
block8:;
if ($tmp108) goto block11; else goto block12;
block11:;
int64_t $tmp125 = $tmp97.value;
int64_t $tmp126 = $tmp98.value;
bool $tmp127 = $tmp125 >= $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block4; else goto block5;
block12:;
int64_t $tmp130 = $tmp97.value;
int64_t $tmp131 = $tmp98.value;
bool $tmp132 = $tmp130 > $tmp131;
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132};
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:70
frost$core$Int64 $tmp135 = *(&local0);
ITable* $tmp136 = param1->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[0];
frost$core$Object* $tmp139 = $tmp137(param1, $tmp135);
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.UInt8) from PushbackInputStream.frost:70:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
frost$collections$Array** $tmp140 = &param0->pushbackBuffer;
frost$collections$Array* $tmp141 = *$tmp140;
frost$core$UInt8$wrapper* $tmp142;
$tmp142 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp142->value = ((frost$core$UInt8$wrapper*) $tmp139)->value;
frost$collections$Array$add$frost$collections$Array$T($tmp141, ((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q($tmp139);
frost$core$Int64 $tmp143 = *(&local0);
if ($tmp114) goto block15; else goto block16;
block15:;
int64_t $tmp144 = $tmp98.value;
int64_t $tmp145 = $tmp143.value;
int64_t $tmp146 = $tmp144 - $tmp145;
frost$core$Int64 $tmp147 = (frost$core$Int64) {$tmp146};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp148 = $tmp147.value;
frost$core$UInt64 $tmp149 = (frost$core$UInt64) {((uint64_t) $tmp148)};
if ($tmp108) goto block18; else goto block19;
block18:;
uint64_t $tmp150 = $tmp149.value;
uint64_t $tmp151 = $tmp101.value;
bool $tmp152 = $tmp150 >= $tmp151;
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152};
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block14; else goto block5;
block19:;
uint64_t $tmp155 = $tmp149.value;
uint64_t $tmp156 = $tmp101.value;
bool $tmp157 = $tmp155 > $tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block14; else goto block5;
block16:;
int64_t $tmp160 = $tmp143.value;
int64_t $tmp161 = $tmp98.value;
int64_t $tmp162 = $tmp160 - $tmp161;
frost$core$Int64 $tmp163 = (frost$core$Int64) {$tmp162};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp164 = $tmp163.value;
frost$core$UInt64 $tmp165 = (frost$core$UInt64) {((uint64_t) $tmp164)};
if ($tmp108) goto block21; else goto block22;
block21:;
uint64_t $tmp166 = $tmp165.value;
uint64_t $tmp167 = $tmp106.value;
bool $tmp168 = $tmp166 >= $tmp167;
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block14; else goto block5;
block22:;
uint64_t $tmp171 = $tmp165.value;
uint64_t $tmp172 = $tmp106.value;
bool $tmp173 = $tmp171 > $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block14; else goto block5;
block14:;
int64_t $tmp176 = $tmp143.value;
int64_t $tmp177 = $tmp99.value;
int64_t $tmp178 = $tmp176 + $tmp177;
frost$core$Int64 $tmp179 = (frost$core$Int64) {$tmp178};
*(&local0) = $tmp179;
goto block4;
block5:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Int8$GT(frost$io$PushbackInputStream* param0, frost$collections$ListView* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:80
ITable* $tmp180 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp180->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[0];
frost$core$Int64 $tmp183 = $tmp181(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp184 = (frost$core$Int64) {1u};
int64_t $tmp185 = $tmp183.value;
int64_t $tmp186 = $tmp184.value;
int64_t $tmp187 = $tmp185 - $tmp186;
frost$core$Int64 $tmp188 = (frost$core$Int64) {$tmp187};
frost$core$Int64 $tmp189 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp190 = (frost$core$Int64) {18446744073709551615u};
frost$core$Bit $tmp191 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp192 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp188, $tmp189, $tmp190, $tmp191);
frost$core$Int64 $tmp193 = $tmp192.start;
*(&local0) = $tmp193;
frost$core$Int64 $tmp194 = $tmp192.end;
frost$core$Int64 $tmp195 = $tmp192.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp196 = $tmp195.value;
frost$core$UInt64 $tmp197 = (frost$core$UInt64) {((uint64_t) $tmp196)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from PushbackInputStream.frost:80:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp198 = $tmp195.value;
int64_t $tmp199 = -$tmp198;
frost$core$Int64 $tmp200 = (frost$core$Int64) {$tmp199};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp201 = $tmp200.value;
frost$core$UInt64 $tmp202 = (frost$core$UInt64) {((uint64_t) $tmp201)};
frost$core$Bit $tmp203 = $tmp192.inclusive;
bool $tmp204 = $tmp203.value;
frost$core$Int64 $tmp205 = (frost$core$Int64) {0u};
int64_t $tmp206 = $tmp195.value;
int64_t $tmp207 = $tmp205.value;
bool $tmp208 = $tmp206 >= $tmp207;
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block7; else goto block8;
block7:;
if ($tmp204) goto block9; else goto block10;
block9:;
int64_t $tmp211 = $tmp193.value;
int64_t $tmp212 = $tmp194.value;
bool $tmp213 = $tmp211 <= $tmp212;
frost$core$Bit $tmp214 = (frost$core$Bit) {$tmp213};
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block4; else goto block5;
block10:;
int64_t $tmp216 = $tmp193.value;
int64_t $tmp217 = $tmp194.value;
bool $tmp218 = $tmp216 < $tmp217;
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block4; else goto block5;
block8:;
if ($tmp204) goto block11; else goto block12;
block11:;
int64_t $tmp221 = $tmp193.value;
int64_t $tmp222 = $tmp194.value;
bool $tmp223 = $tmp221 >= $tmp222;
frost$core$Bit $tmp224 = (frost$core$Bit) {$tmp223};
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block4; else goto block5;
block12:;
int64_t $tmp226 = $tmp193.value;
int64_t $tmp227 = $tmp194.value;
bool $tmp228 = $tmp226 > $tmp227;
frost$core$Bit $tmp229 = (frost$core$Bit) {$tmp228};
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:81
frost$core$Int64 $tmp231 = *(&local0);
ITable* $tmp232 = param1->$class->itable;
while ($tmp232->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp232 = $tmp232->next;
}
$fn234 $tmp233 = $tmp232->methods[0];
frost$core$Object* $tmp235 = $tmp233(param1, $tmp231);
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.Int8) from PushbackInputStream.frost:81:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:60
frost$collections$Array** $tmp236 = &param0->pushbackBuffer;
frost$collections$Array* $tmp237 = *$tmp236;
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:60:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int8.stub:823
int8_t $tmp238 = ((frost$core$Int8$wrapper*) $tmp235)->value.value;
frost$core$UInt8 $tmp239 = (frost$core$UInt8) {((uint8_t) $tmp238)};
frost$core$UInt8$wrapper* $tmp240;
$tmp240 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp240->value = $tmp239;
frost$collections$Array$add$frost$collections$Array$T($tmp237, ((frost$core$Object*) $tmp240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$core$Frost$unref$frost$core$Object$Q($tmp235);
frost$core$Int64 $tmp241 = *(&local0);
if ($tmp210) goto block16; else goto block17;
block16:;
int64_t $tmp242 = $tmp194.value;
int64_t $tmp243 = $tmp241.value;
int64_t $tmp244 = $tmp242 - $tmp243;
frost$core$Int64 $tmp245 = (frost$core$Int64) {$tmp244};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp246 = $tmp245.value;
frost$core$UInt64 $tmp247 = (frost$core$UInt64) {((uint64_t) $tmp246)};
if ($tmp204) goto block19; else goto block20;
block19:;
uint64_t $tmp248 = $tmp247.value;
uint64_t $tmp249 = $tmp197.value;
bool $tmp250 = $tmp248 >= $tmp249;
frost$core$Bit $tmp251 = (frost$core$Bit) {$tmp250};
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block15; else goto block5;
block20:;
uint64_t $tmp253 = $tmp247.value;
uint64_t $tmp254 = $tmp197.value;
bool $tmp255 = $tmp253 > $tmp254;
frost$core$Bit $tmp256 = (frost$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block15; else goto block5;
block17:;
int64_t $tmp258 = $tmp241.value;
int64_t $tmp259 = $tmp194.value;
int64_t $tmp260 = $tmp258 - $tmp259;
frost$core$Int64 $tmp261 = (frost$core$Int64) {$tmp260};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp262 = $tmp261.value;
frost$core$UInt64 $tmp263 = (frost$core$UInt64) {((uint64_t) $tmp262)};
if ($tmp204) goto block22; else goto block23;
block22:;
uint64_t $tmp264 = $tmp263.value;
uint64_t $tmp265 = $tmp202.value;
bool $tmp266 = $tmp264 >= $tmp265;
frost$core$Bit $tmp267 = (frost$core$Bit) {$tmp266};
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block15; else goto block5;
block23:;
uint64_t $tmp269 = $tmp263.value;
uint64_t $tmp270 = $tmp202.value;
bool $tmp271 = $tmp269 > $tmp270;
frost$core$Bit $tmp272 = (frost$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block15; else goto block5;
block15:;
int64_t $tmp274 = $tmp241.value;
int64_t $tmp275 = $tmp195.value;
int64_t $tmp276 = $tmp274 + $tmp275;
frost$core$Int64 $tmp277 = (frost$core$Int64) {$tmp276};
*(&local0) = $tmp277;
goto block4;
block5:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$Char8(frost$io$PushbackInputStream* param0, frost$core$Char8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:91
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:91:19
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Char8.stub:98
uint8_t $tmp278 = param1.value;
frost$core$UInt8 $tmp279 = (frost$core$UInt8) {$tmp278};
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.UInt8) from PushbackInputStream.frost:91:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
frost$collections$Array** $tmp280 = &param0->pushbackBuffer;
frost$collections$Array* $tmp281 = *$tmp280;
frost$core$UInt8$wrapper* $tmp282;
$tmp282 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp282->value = $tmp279;
frost$collections$Array$add$frost$collections$Array$T($tmp281, ((frost$core$Object*) $tmp282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Char8$GT(frost$io$PushbackInputStream* param0, frost$collections$ListView* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:100
ITable* $tmp283 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp283->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp283 = $tmp283->next;
}
$fn285 $tmp284 = $tmp283->methods[0];
frost$core$Int64 $tmp286 = $tmp284(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp287 = (frost$core$Int64) {1u};
int64_t $tmp288 = $tmp286.value;
int64_t $tmp289 = $tmp287.value;
int64_t $tmp290 = $tmp288 - $tmp289;
frost$core$Int64 $tmp291 = (frost$core$Int64) {$tmp290};
frost$core$Int64 $tmp292 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp293 = (frost$core$Int64) {18446744073709551615u};
frost$core$Bit $tmp294 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp295 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp291, $tmp292, $tmp293, $tmp294);
frost$core$Int64 $tmp296 = $tmp295.start;
*(&local0) = $tmp296;
frost$core$Int64 $tmp297 = $tmp295.end;
frost$core$Int64 $tmp298 = $tmp295.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp299 = $tmp298.value;
frost$core$UInt64 $tmp300 = (frost$core$UInt64) {((uint64_t) $tmp299)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from PushbackInputStream.frost:100:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp301 = $tmp298.value;
int64_t $tmp302 = -$tmp301;
frost$core$Int64 $tmp303 = (frost$core$Int64) {$tmp302};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp304 = $tmp303.value;
frost$core$UInt64 $tmp305 = (frost$core$UInt64) {((uint64_t) $tmp304)};
frost$core$Bit $tmp306 = $tmp295.inclusive;
bool $tmp307 = $tmp306.value;
frost$core$Int64 $tmp308 = (frost$core$Int64) {0u};
int64_t $tmp309 = $tmp298.value;
int64_t $tmp310 = $tmp308.value;
bool $tmp311 = $tmp309 >= $tmp310;
frost$core$Bit $tmp312 = (frost$core$Bit) {$tmp311};
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block7; else goto block8;
block7:;
if ($tmp307) goto block9; else goto block10;
block9:;
int64_t $tmp314 = $tmp296.value;
int64_t $tmp315 = $tmp297.value;
bool $tmp316 = $tmp314 <= $tmp315;
frost$core$Bit $tmp317 = (frost$core$Bit) {$tmp316};
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block4; else goto block5;
block10:;
int64_t $tmp319 = $tmp296.value;
int64_t $tmp320 = $tmp297.value;
bool $tmp321 = $tmp319 < $tmp320;
frost$core$Bit $tmp322 = (frost$core$Bit) {$tmp321};
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block4; else goto block5;
block8:;
if ($tmp307) goto block11; else goto block12;
block11:;
int64_t $tmp324 = $tmp296.value;
int64_t $tmp325 = $tmp297.value;
bool $tmp326 = $tmp324 >= $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block4; else goto block5;
block12:;
int64_t $tmp329 = $tmp296.value;
int64_t $tmp330 = $tmp297.value;
bool $tmp331 = $tmp329 > $tmp330;
frost$core$Bit $tmp332 = (frost$core$Bit) {$tmp331};
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:101
frost$core$Int64 $tmp334 = *(&local0);
ITable* $tmp335 = param1->$class->itable;
while ($tmp335->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp335 = $tmp335->next;
}
$fn337 $tmp336 = $tmp335->methods[0];
frost$core$Object* $tmp338 = $tmp336(param1, $tmp334);
// begin inline call to method frost.io.PushbackInputStream.pushback(c:frost.core.Char8) from PushbackInputStream.frost:101:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:91
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:91:19
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Char8.stub:98
uint8_t $tmp339 = ((frost$core$Char8$wrapper*) $tmp338)->value.value;
frost$core$UInt8 $tmp340 = (frost$core$UInt8) {$tmp339};
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.UInt8) from PushbackInputStream.frost:91:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
frost$collections$Array** $tmp341 = &param0->pushbackBuffer;
frost$collections$Array* $tmp342 = *$tmp341;
frost$core$UInt8$wrapper* $tmp343;
$tmp343 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp343->value = $tmp340;
frost$collections$Array$add$frost$collections$Array$T($tmp342, ((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q($tmp338);
frost$core$Int64 $tmp344 = *(&local0);
if ($tmp313) goto block17; else goto block18;
block17:;
int64_t $tmp345 = $tmp297.value;
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345 - $tmp346;
frost$core$Int64 $tmp348 = (frost$core$Int64) {$tmp347};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp349 = $tmp348.value;
frost$core$UInt64 $tmp350 = (frost$core$UInt64) {((uint64_t) $tmp349)};
if ($tmp307) goto block20; else goto block21;
block20:;
uint64_t $tmp351 = $tmp350.value;
uint64_t $tmp352 = $tmp300.value;
bool $tmp353 = $tmp351 >= $tmp352;
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block16; else goto block5;
block21:;
uint64_t $tmp356 = $tmp350.value;
uint64_t $tmp357 = $tmp300.value;
bool $tmp358 = $tmp356 > $tmp357;
frost$core$Bit $tmp359 = (frost$core$Bit) {$tmp358};
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block16; else goto block5;
block18:;
int64_t $tmp361 = $tmp344.value;
int64_t $tmp362 = $tmp297.value;
int64_t $tmp363 = $tmp361 - $tmp362;
frost$core$Int64 $tmp364 = (frost$core$Int64) {$tmp363};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp365 = $tmp364.value;
frost$core$UInt64 $tmp366 = (frost$core$UInt64) {((uint64_t) $tmp365)};
if ($tmp307) goto block23; else goto block24;
block23:;
uint64_t $tmp367 = $tmp366.value;
uint64_t $tmp368 = $tmp305.value;
bool $tmp369 = $tmp367 >= $tmp368;
frost$core$Bit $tmp370 = (frost$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block16; else goto block5;
block24:;
uint64_t $tmp372 = $tmp366.value;
uint64_t $tmp373 = $tmp305.value;
bool $tmp374 = $tmp372 > $tmp373;
frost$core$Bit $tmp375 = (frost$core$Bit) {$tmp374};
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block16; else goto block5;
block16:;
int64_t $tmp377 = $tmp344.value;
int64_t $tmp378 = $tmp298.value;
int64_t $tmp379 = $tmp377 + $tmp378;
frost$core$Int64 $tmp380 = (frost$core$Int64) {$tmp379};
*(&local0) = $tmp380;
goto block4;
block5:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$String(frost$io$PushbackInputStream* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:111
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from PushbackInputStream.frost:111:19
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:125
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
frost$core$String$UTF8List* $tmp381 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp381, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp381)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// begin inline call to method frost.io.PushbackInputStream.pushback(c:frost.collections.ListView<frost.core.Char8>) from PushbackInputStream.frost:111:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:100
ITable* $tmp382 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp381))->$class->itable;
while ($tmp382->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp382 = $tmp382->next;
}
$fn384 $tmp383 = $tmp382->methods[0];
frost$core$Int64 $tmp385 = $tmp383(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp381)));
frost$core$Int64 $tmp386 = (frost$core$Int64) {1u};
int64_t $tmp387 = $tmp385.value;
int64_t $tmp388 = $tmp386.value;
int64_t $tmp389 = $tmp387 - $tmp388;
frost$core$Int64 $tmp390 = (frost$core$Int64) {$tmp389};
frost$core$Int64 $tmp391 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp392 = (frost$core$Int64) {18446744073709551615u};
frost$core$Bit $tmp393 = (frost$core$Bit) {true};
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp394 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp390, $tmp391, $tmp392, $tmp393);
frost$core$Int64 $tmp395 = $tmp394.start;
*(&local0) = $tmp395;
frost$core$Int64 $tmp396 = $tmp394.end;
frost$core$Int64 $tmp397 = $tmp394.step;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp398 = $tmp397.value;
frost$core$UInt64 $tmp399 = (frost$core$UInt64) {((uint64_t) $tmp398)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from PushbackInputStream.frost:100:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:49
int64_t $tmp400 = $tmp397.value;
int64_t $tmp401 = -$tmp400;
frost$core$Int64 $tmp402 = (frost$core$Int64) {$tmp401};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp403 = $tmp402.value;
frost$core$UInt64 $tmp404 = (frost$core$UInt64) {((uint64_t) $tmp403)};
frost$core$Bit $tmp405 = $tmp394.inclusive;
bool $tmp406 = $tmp405.value;
frost$core$Int64 $tmp407 = (frost$core$Int64) {0u};
int64_t $tmp408 = $tmp397.value;
int64_t $tmp409 = $tmp407.value;
bool $tmp410 = $tmp408 >= $tmp409;
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block9; else goto block10;
block9:;
if ($tmp406) goto block11; else goto block12;
block11:;
int64_t $tmp413 = $tmp395.value;
int64_t $tmp414 = $tmp396.value;
bool $tmp415 = $tmp413 <= $tmp414;
frost$core$Bit $tmp416 = (frost$core$Bit) {$tmp415};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block6; else goto block7;
block12:;
int64_t $tmp418 = $tmp395.value;
int64_t $tmp419 = $tmp396.value;
bool $tmp420 = $tmp418 < $tmp419;
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp420};
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block6; else goto block7;
block10:;
if ($tmp406) goto block13; else goto block14;
block13:;
int64_t $tmp423 = $tmp395.value;
int64_t $tmp424 = $tmp396.value;
bool $tmp425 = $tmp423 >= $tmp424;
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block6; else goto block7;
block14:;
int64_t $tmp428 = $tmp395.value;
int64_t $tmp429 = $tmp396.value;
bool $tmp430 = $tmp428 > $tmp429;
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:101
frost$core$Int64 $tmp433 = *(&local0);
ITable* $tmp434 = ((frost$collections$ListView*) $tmp381)->$class->itable;
while ($tmp434->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp434 = $tmp434->next;
}
$fn436 $tmp435 = $tmp434->methods[0];
frost$core$Object* $tmp437 = $tmp435(((frost$collections$ListView*) $tmp381), $tmp433);
// begin inline call to method frost.io.PushbackInputStream.pushback(c:frost.core.Char8) from PushbackInputStream.frost:101:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:91
frost$core$UInt8 $tmp438 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8(((frost$core$Char8$wrapper*) $tmp437)->value);
frost$io$PushbackInputStream$pushback$frost$core$UInt8(param0, $tmp438);
frost$core$Frost$unref$frost$core$Object$Q($tmp437);
frost$core$Int64 $tmp439 = *(&local0);
if ($tmp412) goto block17; else goto block18;
block17:;
int64_t $tmp440 = $tmp396.value;
int64_t $tmp441 = $tmp439.value;
int64_t $tmp442 = $tmp440 - $tmp441;
frost$core$Int64 $tmp443 = (frost$core$Int64) {$tmp442};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp444 = $tmp443.value;
frost$core$UInt64 $tmp445 = (frost$core$UInt64) {((uint64_t) $tmp444)};
if ($tmp406) goto block20; else goto block21;
block20:;
uint64_t $tmp446 = $tmp445.value;
uint64_t $tmp447 = $tmp399.value;
bool $tmp448 = $tmp446 >= $tmp447;
frost$core$Bit $tmp449 = (frost$core$Bit) {$tmp448};
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block16; else goto block7;
block21:;
uint64_t $tmp451 = $tmp445.value;
uint64_t $tmp452 = $tmp399.value;
bool $tmp453 = $tmp451 > $tmp452;
frost$core$Bit $tmp454 = (frost$core$Bit) {$tmp453};
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block16; else goto block7;
block18:;
int64_t $tmp456 = $tmp439.value;
int64_t $tmp457 = $tmp396.value;
int64_t $tmp458 = $tmp456 - $tmp457;
frost$core$Int64 $tmp459 = (frost$core$Int64) {$tmp458};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp460 = $tmp459.value;
frost$core$UInt64 $tmp461 = (frost$core$UInt64) {((uint64_t) $tmp460)};
if ($tmp406) goto block23; else goto block24;
block23:;
uint64_t $tmp462 = $tmp461.value;
uint64_t $tmp463 = $tmp404.value;
bool $tmp464 = $tmp462 >= $tmp463;
frost$core$Bit $tmp465 = (frost$core$Bit) {$tmp464};
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block16; else goto block7;
block24:;
uint64_t $tmp467 = $tmp461.value;
uint64_t $tmp468 = $tmp404.value;
bool $tmp469 = $tmp467 > $tmp468;
frost$core$Bit $tmp470 = (frost$core$Bit) {$tmp469};
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block16; else goto block7;
block16:;
int64_t $tmp472 = $tmp439.value;
int64_t $tmp473 = $tmp397.value;
int64_t $tmp474 = $tmp472 + $tmp473;
frost$core$Int64 $tmp475 = (frost$core$Int64) {$tmp474};
*(&local0) = $tmp475;
goto block6;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp381)));
return;

}
void frost$io$PushbackInputStream$cleanup(frost$io$PushbackInputStream* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:16
frost$io$InputStream$cleanup(((frost$io$InputStream*) param0));
frost$io$InputStream** $tmp476 = &param0->source;
frost$io$InputStream* $tmp477 = *$tmp476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$collections$Array** $tmp478 = &param0->pushbackBuffer;
frost$collections$Array* $tmp479 = *$tmp478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
return;

}

