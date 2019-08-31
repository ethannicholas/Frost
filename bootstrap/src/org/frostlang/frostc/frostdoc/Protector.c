#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/MutableString.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/math/Random.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char32.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Protector$class_type org$frostlang$frostc$frostdoc$Protector$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Protector$cleanup, org$frostlang$frostc$frostdoc$Protector$encode$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$Protector$randomToken$R$frost$core$String} };

typedef frost$core$String* (*$fn10)(org$frostlang$frostc$frostdoc$Protector*);
typedef frost$core$Int (*$fn73)(frost$math$Random*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x50\x72\x6f\x74\x65\x63\x74\x6f\x72", 39, 8376201690720760444, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, -6663281110466647188, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, -6663281110466647188, NULL };

frost$core$String* org$frostlang$frostc$frostdoc$Protector$encode$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Protector* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:59
frost$collections$HashMap** $tmp2 = &param0->encodeMap;
frost$collections$HashMap* $tmp3 = *$tmp2;
frost$core$Object* $tmp4 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3, ((frost$collections$HashKey*) param1));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp4)));
frost$core$String* $tmp5 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
*(&local0) = ((frost$core$String*) $tmp4);
frost$core$Frost$unref$frost$core$Object$Q($tmp4);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:60
frost$core$String* $tmp6 = *(&local0);
frost$core$Bit $tmp7 = (frost$core$Bit) {$tmp6 == NULL};
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
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15 != NULL};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block4;
block4:;
frost$core$Int $tmp18 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, $tmp18, &$s20);
abort(); // unreachable
block3:;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp14, ((frost$collections$HashKey*) param1), ((frost$core$Object*) $tmp15));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:63
frost$collections$HashMap** $tmp21 = &param0->decodeMap;
frost$collections$HashMap* $tmp22 = *$tmp21;
frost$core$String* $tmp23 = *(&local0);
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23 != NULL};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block5; else goto block6;
block6:;
frost$core$Int $tmp26 = (frost$core$Int) {63u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block5:;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp22, ((frost$collections$HashKey*) $tmp23), ((frost$core$Object*) param1));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:65
frost$core$String* $tmp29 = *(&local0);
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29 != NULL};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block7; else goto block8;
block8:;
frost$core$Int $tmp32 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s33, $tmp32, &$s34);
abort(); // unreachable
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$String* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local0) = ((frost$core$String*) NULL);
return $tmp29;

}
frost$core$String* org$frostlang$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$Protector* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:69
frost$collections$HashMap** $tmp36 = &param0->decodeMap;
frost$collections$HashMap* $tmp37 = *$tmp36;
frost$core$Object* $tmp38 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp37, ((frost$collections$HashKey*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp38)));
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
return ((frost$core$String*) $tmp38);

}
frost$core$String* org$frostlang$frostc$frostdoc$Protector$randomToken$R$frost$core$String(org$frostlang$frostc$frostdoc$Protector* param0) {

frost$core$Int local0;
frost$core$String* local1 = NULL;
frost$core$MutableString* local2 = NULL;
frost$core$Int local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:73
frost$core$Int $tmp39 = (frost$core$Int) {20u};
*(&local0) = $tmp39;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:74
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s40));
frost$core$String* $tmp41 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local1) = &$s42;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:75
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp43 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp43);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$MutableString* $tmp44 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local2) = $tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:76
frost$core$Int $tmp45 = (frost$core$Int) {0u};
frost$core$Int $tmp46 = *(&local0);
frost$core$Bit $tmp47 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp48 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp45, $tmp46, $tmp47);
frost$core$Int $tmp49 = $tmp48.min;
*(&local3) = $tmp49;
frost$core$Int $tmp50 = $tmp48.max;
frost$core$Bit $tmp51 = $tmp48.inclusive;
bool $tmp52 = $tmp51.value;
frost$core$Int $tmp53 = (frost$core$Int) {1u};
if ($tmp52) goto block4; else goto block5;
block4:;
int64_t $tmp54 = $tmp49.value;
int64_t $tmp55 = $tmp50.value;
bool $tmp56 = $tmp54 <= $tmp55;
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56};
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block1; else goto block2;
block5:;
int64_t $tmp59 = $tmp49.value;
int64_t $tmp60 = $tmp50.value;
bool $tmp61 = $tmp59 < $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:77
frost$core$MutableString* $tmp64 = *(&local2);
frost$core$String* $tmp65 = *(&local1);
frost$math$Random** $tmp66 = &param0->random;
frost$math$Random* $tmp67 = *$tmp66;
frost$core$String* $tmp68 = *(&local1);
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from Markdown.frost:77:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
frost$core$Int* $tmp69 = &$tmp68->_length;
frost$core$Int $tmp70 = *$tmp69;
ITable* $tmp71 = $tmp67->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[3];
frost$core$Int $tmp74 = $tmp72($tmp67, $tmp70);
// begin inline call to function frost.core.String.[](index:frost.core.Int):frost.core.Char32 from Markdown.frost:77:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:675
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:675:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp75 = (frost$core$Int) {0u};
frost$core$String$Index $tmp76 = frost$core$String$Index$init$frost$core$Int($tmp75);
frost$core$String$Index $tmp77 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index($tmp65, $tmp76, $tmp74);
frost$core$Char32 $tmp78 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32($tmp65, $tmp77);
frost$core$MutableString$append$frost$core$Char32($tmp64, $tmp78);
frost$core$Int $tmp79 = *(&local3);
int64_t $tmp80 = $tmp50.value;
int64_t $tmp81 = $tmp79.value;
int64_t $tmp82 = $tmp80 - $tmp81;
frost$core$Int $tmp83 = (frost$core$Int) {$tmp82};
if ($tmp52) goto block10; else goto block11;
block10:;
int64_t $tmp84 = $tmp83.value;
int64_t $tmp85 = $tmp53.value;
bool $tmp86 = $tmp84 >= $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block9; else goto block2;
block11:;
int64_t $tmp89 = $tmp83.value;
int64_t $tmp90 = $tmp53.value;
bool $tmp91 = $tmp89 > $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block9; else goto block2;
block9:;
int64_t $tmp94 = $tmp79.value;
int64_t $tmp95 = $tmp53.value;
int64_t $tmp96 = $tmp94 + $tmp95;
frost$core$Int $tmp97 = (frost$core$Int) {$tmp96};
*(&local3) = $tmp97;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:79
frost$core$MutableString* $tmp98 = *(&local2);
frost$core$String* $tmp99 = frost$core$MutableString$finish$R$frost$core$String($tmp98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$MutableString* $tmp100 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp101 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local1) = ((frost$core$String*) NULL);
return $tmp99;

}
void org$frostlang$frostc$frostdoc$Protector$init(org$frostlang$frostc$frostdoc$Protector* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:52
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp102 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$collections$HashMap** $tmp103 = &param0->encodeMap;
frost$collections$HashMap* $tmp104 = *$tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$collections$HashMap** $tmp105 = &param0->encodeMap;
*$tmp105 = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:54
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp106 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp106);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$collections$HashMap** $tmp107 = &param0->decodeMap;
frost$collections$HashMap* $tmp108 = *$tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$collections$HashMap** $tmp109 = &param0->decodeMap;
*$tmp109 = $tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:56
frost$math$Random* $tmp110 = frost$math$Random$default$R$frost$math$Random();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$math$Random** $tmp111 = &param0->random;
frost$math$Random* $tmp112 = *$tmp111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$math$Random** $tmp113 = &param0->random;
*$tmp113 = $tmp110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
return;

}
void org$frostlang$frostc$frostdoc$Protector$cleanup(org$frostlang$frostc$frostdoc$Protector* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:47
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp114 = &param0->encodeMap;
frost$collections$HashMap* $tmp115 = *$tmp114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$collections$HashMap** $tmp116 = &param0->decodeMap;
frost$collections$HashMap* $tmp117 = *$tmp116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$math$Random** $tmp118 = &param0->random;
frost$math$Random* $tmp119 = *$tmp118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
return;

}

