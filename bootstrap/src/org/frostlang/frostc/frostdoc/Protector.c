#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/MutableString.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/math/Random.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char32.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Protector$class_type org$frostlang$frostc$frostdoc$Protector$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Protector$cleanup, org$frostlang$frostc$frostdoc$Protector$encode$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$Protector$randomToken$R$frost$core$String} };

typedef frost$core$String* (*$fn10)(org$frostlang$frostc$frostdoc$Protector*);
typedef frost$core$Int64 (*$fn60)(frost$math$Random*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x50\x72\x6f\x74\x65\x63\x74\x6f\x72", 39, -8110201973131289544, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, 8332415192204060750, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, 8332415192204060750, NULL };

frost$core$String* org$frostlang$frostc$frostdoc$Protector$encode$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Protector* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:59
frost$collections$HashMap** $tmp2 = &param0->encodeMap;
frost$collections$HashMap* $tmp3 = *$tmp2;
frost$core$Object* $tmp4 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3, ((frost$collections$Key*) param1));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp4)));
frost$core$String* $tmp5 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
*(&local0) = ((frost$core$String*) $tmp4);
frost$core$Frost$unref$frost$core$Object$Q($tmp4);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:60
frost$core$String* $tmp6 = *(&local0);
frost$core$Bit $tmp7 = frost$core$Bit$init$builtin_bit($tmp6 == NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:61
$fn10 $tmp9 = ($fn10) param0->$class->vtable[4];
frost$core$String* $tmp11 = $tmp9(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$String* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = $tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:62
frost$collections$HashMap** $tmp13 = &param0->encodeMap;
frost$collections$HashMap* $tmp14 = *$tmp13;
frost$core$String* $tmp15 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp14, ((frost$collections$Key*) param1), ((frost$core$Object*) $tmp15));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:63
frost$collections$HashMap** $tmp16 = &param0->decodeMap;
frost$collections$HashMap* $tmp17 = *$tmp16;
frost$core$String* $tmp18 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp17, ((frost$collections$Key*) $tmp18), ((frost$core$Object*) param1));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:65
frost$core$String* $tmp19 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$String* $tmp20 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
*(&local0) = ((frost$core$String*) NULL);
return $tmp19;

}
frost$core$String* org$frostlang$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$Protector* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:69
frost$collections$HashMap** $tmp21 = &param0->decodeMap;
frost$collections$HashMap* $tmp22 = *$tmp21;
frost$core$Object* $tmp23 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp22, ((frost$collections$Key*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp23)));
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
return ((frost$core$String*) $tmp23);

}
frost$core$String* org$frostlang$frostc$frostdoc$Protector$randomToken$R$frost$core$String(org$frostlang$frostc$frostdoc$Protector* param0) {

frost$core$Int64 local0;
frost$core$String* local1 = NULL;
frost$core$MutableString* local2 = NULL;
frost$core$Int64 local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:73
frost$core$Int64 $tmp24 = (frost$core$Int64) {20};
*(&local0) = $tmp24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:74
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s25));
frost$core$String* $tmp26 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local1) = &$s27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:75
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp28 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp28);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$MutableString* $tmp29 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local2) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:76
frost$core$Int64 $tmp30 = (frost$core$Int64) {0};
frost$core$Int64 $tmp31 = *(&local0);
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp33 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp30, $tmp31, $tmp32);
frost$core$Int64 $tmp34 = $tmp33.min;
*(&local3) = $tmp34;
frost$core$Int64 $tmp35 = $tmp33.max;
frost$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
frost$core$Int64 $tmp38 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp39 = $tmp38.value;
frost$core$UInt64 $tmp40 = (frost$core$UInt64) {((uint64_t) $tmp39)};
if ($tmp37) goto block5; else goto block6;
block5:;
int64_t $tmp41 = $tmp34.value;
int64_t $tmp42 = $tmp35.value;
bool $tmp43 = $tmp41 <= $tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block2; else goto block3;
block6:;
int64_t $tmp46 = $tmp34.value;
int64_t $tmp47 = $tmp35.value;
bool $tmp48 = $tmp46 < $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:77
frost$core$MutableString* $tmp51 = *(&local2);
frost$core$String* $tmp52 = *(&local1);
frost$math$Random** $tmp53 = &param0->random;
frost$math$Random* $tmp54 = *$tmp53;
frost$core$String* $tmp55 = *(&local1);
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int64 from Markdown.frost:77:59
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:142
frost$core$Int64* $tmp56 = &$tmp55->_length;
frost$core$Int64 $tmp57 = *$tmp56;
ITable* $tmp58 = $tmp54->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp58 = $tmp58->next;
}
$fn60 $tmp59 = $tmp58->methods[3];
frost$core$Int64 $tmp61 = $tmp59($tmp54, $tmp57);
// begin inline call to function frost.core.String.[](index:frost.core.Int64):frost.core.Char32 from Markdown.frost:77:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:190
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.stub:190:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:283
frost$core$Int64 $tmp62 = (frost$core$Int64) {0};
frost$core$String$Index $tmp63 = frost$core$String$Index$init$frost$core$Int64($tmp62);
frost$core$String$Index $tmp64 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index($tmp52, $tmp63, $tmp61);
frost$core$Char32 $tmp65 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32($tmp52, $tmp64);
frost$core$MutableString$append$frost$core$Char32($tmp51, $tmp65);
frost$core$Int64 $tmp66 = *(&local3);
int64_t $tmp67 = $tmp35.value;
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67 - $tmp68;
frost$core$Int64 $tmp70 = (frost$core$Int64) {$tmp69};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp71 = $tmp70.value;
frost$core$UInt64 $tmp72 = (frost$core$UInt64) {((uint64_t) $tmp71)};
if ($tmp37) goto block12; else goto block13;
block12:;
uint64_t $tmp73 = $tmp72.value;
uint64_t $tmp74 = $tmp40.value;
bool $tmp75 = $tmp73 >= $tmp74;
frost$core$Bit $tmp76 = (frost$core$Bit) {$tmp75};
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block10; else goto block3;
block13:;
uint64_t $tmp78 = $tmp72.value;
uint64_t $tmp79 = $tmp40.value;
bool $tmp80 = $tmp78 > $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block10; else goto block3;
block10:;
int64_t $tmp83 = $tmp66.value;
int64_t $tmp84 = $tmp38.value;
int64_t $tmp85 = $tmp83 + $tmp84;
frost$core$Int64 $tmp86 = (frost$core$Int64) {$tmp85};
*(&local3) = $tmp86;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:79
frost$core$MutableString* $tmp87 = *(&local2);
frost$core$String* $tmp88 = frost$core$MutableString$finish$R$frost$core$String($tmp87);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$MutableString* $tmp89 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp90 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
*(&local1) = ((frost$core$String*) NULL);
return $tmp88;

}
void org$frostlang$frostc$frostdoc$Protector$init(org$frostlang$frostc$frostdoc$Protector* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:52
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp91 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp91);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$collections$HashMap** $tmp92 = &param0->encodeMap;
frost$collections$HashMap* $tmp93 = *$tmp92;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$collections$HashMap** $tmp94 = &param0->encodeMap;
*$tmp94 = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:54
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp95 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$collections$HashMap** $tmp96 = &param0->decodeMap;
frost$collections$HashMap* $tmp97 = *$tmp96;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$collections$HashMap** $tmp98 = &param0->decodeMap;
*$tmp98 = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:56
frost$math$Random* $tmp99 = frost$math$Random$default$R$frost$math$Random();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$math$Random** $tmp100 = &param0->random;
frost$math$Random* $tmp101 = *$tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$math$Random** $tmp102 = &param0->random;
*$tmp102 = $tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
return;

}
void org$frostlang$frostc$frostdoc$Protector$cleanup(org$frostlang$frostc$frostdoc$Protector* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:47
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp103 = &param0->encodeMap;
frost$collections$HashMap* $tmp104 = *$tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$collections$HashMap** $tmp105 = &param0->decodeMap;
frost$collections$HashMap* $tmp106 = *$tmp105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$math$Random** $tmp107 = &param0->random;
frost$math$Random* $tmp108 = *$tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
return;

}

