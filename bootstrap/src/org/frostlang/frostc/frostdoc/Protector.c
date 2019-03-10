#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/MutableString.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/math/Random.h"
#include "frost/core/Int64.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char32.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Protector$class_type org$frostlang$frostc$frostdoc$Protector$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Protector$cleanup, org$frostlang$frostc$frostdoc$Protector$encode$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$Protector$randomToken$R$frost$core$String} };

typedef frost$core$String* (*$fn10)(org$frostlang$frostc$frostdoc$Protector*);
typedef frost$core$Int64 (*$fn59)(frost$math$Random*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x50\x72\x6f\x74\x65\x63\x74\x6f\x72", 39, 8376201690720760444, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, -6663281110466647188, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, -6663281110466647188, NULL };

frost$core$String* org$frostlang$frostc$frostdoc$Protector$encode$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Protector* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:59
frost$collections$HashMap** $tmp2 = &param0->encodeMap;
frost$collections$HashMap* $tmp3 = *$tmp2;
frost$core$Object* $tmp4 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3, ((frost$collections$Key*) param1));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp4)));
frost$core$String* $tmp5 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
*(&local0) = ((frost$core$String*) $tmp4);
frost$core$Frost$unref$frost$core$Object$Q($tmp4);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:60
frost$core$String* $tmp6 = *(&local0);
frost$core$Bit $tmp7 = (frost$core$Bit) {$tmp6 == NULL};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:61
$fn10 $tmp9 = ($fn10) param0->$class->vtable[4];
frost$core$String* $tmp11 = $tmp9(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$String* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = $tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:62
frost$collections$HashMap** $tmp13 = &param0->encodeMap;
frost$collections$HashMap* $tmp14 = *$tmp13;
frost$core$String* $tmp15 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp14, ((frost$collections$Key*) param1), ((frost$core$Object*) $tmp15));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:63
frost$collections$HashMap** $tmp16 = &param0->decodeMap;
frost$collections$HashMap* $tmp17 = *$tmp16;
frost$core$String* $tmp18 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp17, ((frost$collections$Key*) $tmp18), ((frost$core$Object*) param1));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:65
frost$core$String* $tmp19 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$String* $tmp20 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
*(&local0) = ((frost$core$String*) NULL);
return $tmp19;

}
frost$core$String* org$frostlang$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$Protector* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:69
frost$collections$HashMap** $tmp21 = &param0->decodeMap;
frost$collections$HashMap* $tmp22 = *$tmp21;
frost$core$Object* $tmp23 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp22, ((frost$collections$Key*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp23)));
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
return ((frost$core$String*) $tmp23);

}
frost$core$String* org$frostlang$frostc$frostdoc$Protector$randomToken$R$frost$core$String(org$frostlang$frostc$frostdoc$Protector* param0) {

frost$core$Int local0;
frost$core$String* local1 = NULL;
frost$core$MutableString* local2 = NULL;
frost$core$Int local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:73
frost$core$Int $tmp24 = (frost$core$Int) {20u};
*(&local0) = $tmp24;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:74
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s25));
frost$core$String* $tmp26 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local1) = &$s27;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:75
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp28 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp28);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$MutableString* $tmp29 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local2) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:76
frost$core$Int $tmp30 = (frost$core$Int) {0u};
frost$core$Int $tmp31 = *(&local0);
frost$core$Bit $tmp32 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp33 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp30, $tmp31, $tmp32);
frost$core$Int $tmp34 = $tmp33.min;
*(&local3) = $tmp34;
frost$core$Int $tmp35 = $tmp33.max;
frost$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
frost$core$Int $tmp38 = (frost$core$Int) {1u};
if ($tmp37) goto block4; else goto block5;
block4:;
int64_t $tmp39 = $tmp34.value;
int64_t $tmp40 = $tmp35.value;
bool $tmp41 = $tmp39 <= $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block5:;
int64_t $tmp44 = $tmp34.value;
int64_t $tmp45 = $tmp35.value;
bool $tmp46 = $tmp44 < $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:77
frost$core$MutableString* $tmp49 = *(&local2);
frost$core$String* $tmp50 = *(&local1);
frost$math$Random** $tmp51 = &param0->random;
frost$math$Random* $tmp52 = *$tmp51;
frost$core$String* $tmp53 = *(&local1);
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from Markdown.frost:77:59
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:492
frost$core$Int* $tmp54 = &$tmp53->_length;
frost$core$Int $tmp55 = *$tmp54;
frost$core$Int64 $tmp56 = frost$core$Int64$init$frost$core$Int($tmp55);
ITable* $tmp57 = $tmp52->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[3];
frost$core$Int64 $tmp60 = $tmp58($tmp52, $tmp56);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Markdown.frost:77:71
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp61 = $tmp60.value;
frost$core$Int $tmp62 = (frost$core$Int) {$tmp61};
// begin inline call to function frost.core.String.[](index:frost.core.Int):frost.core.Char32 from Markdown.frost:77:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:675
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:675:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int $tmp63 = (frost$core$Int) {0u};
frost$core$String$Index $tmp64 = frost$core$String$Index$init$frost$core$Int($tmp63);
frost$core$String$Index $tmp65 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index($tmp50, $tmp64, $tmp62);
frost$core$Char32 $tmp66 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32($tmp50, $tmp65);
frost$core$MutableString$append$frost$core$Char32($tmp49, $tmp66);
frost$core$Int $tmp67 = *(&local3);
int64_t $tmp68 = $tmp35.value;
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68 - $tmp69;
frost$core$Int $tmp71 = (frost$core$Int) {$tmp70};
if ($tmp37) goto block11; else goto block12;
block11:;
int64_t $tmp72 = $tmp71.value;
int64_t $tmp73 = $tmp38.value;
bool $tmp74 = $tmp72 >= $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block10; else goto block2;
block12:;
int64_t $tmp77 = $tmp71.value;
int64_t $tmp78 = $tmp38.value;
bool $tmp79 = $tmp77 > $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block10; else goto block2;
block10:;
int64_t $tmp82 = $tmp67.value;
int64_t $tmp83 = $tmp38.value;
int64_t $tmp84 = $tmp82 + $tmp83;
frost$core$Int $tmp85 = (frost$core$Int) {$tmp84};
*(&local3) = $tmp85;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:79
frost$core$MutableString* $tmp86 = *(&local2);
frost$core$String* $tmp87 = frost$core$MutableString$finish$R$frost$core$String($tmp86);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$MutableString* $tmp88 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp89 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local1) = ((frost$core$String*) NULL);
return $tmp87;

}
void org$frostlang$frostc$frostdoc$Protector$init(org$frostlang$frostc$frostdoc$Protector* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:52
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp90 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp90);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$collections$HashMap** $tmp91 = &param0->encodeMap;
frost$collections$HashMap* $tmp92 = *$tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$collections$HashMap** $tmp93 = &param0->encodeMap;
*$tmp93 = $tmp90;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:54
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp94 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp94);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$collections$HashMap** $tmp95 = &param0->decodeMap;
frost$collections$HashMap* $tmp96 = *$tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$collections$HashMap** $tmp97 = &param0->decodeMap;
*$tmp97 = $tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:56
frost$math$Random* $tmp98 = frost$math$Random$default$R$frost$math$Random();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$math$Random** $tmp99 = &param0->random;
frost$math$Random* $tmp100 = *$tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$math$Random** $tmp101 = &param0->random;
*$tmp101 = $tmp98;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
return;

}
void org$frostlang$frostc$frostdoc$Protector$cleanup(org$frostlang$frostc$frostdoc$Protector* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:47
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp102 = &param0->encodeMap;
frost$collections$HashMap* $tmp103 = *$tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$collections$HashMap** $tmp104 = &param0->decodeMap;
frost$collections$HashMap* $tmp105 = *$tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$math$Random** $tmp106 = &param0->random;
frost$math$Random* $tmp107 = *$tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
return;

}

