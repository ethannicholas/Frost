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
#include "frost/core/Char32.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Protector$class_type org$frostlang$frostc$frostdoc$Protector$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Protector$cleanup, org$frostlang$frostc$frostdoc$Protector$encode$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$Protector$randomToken$R$frost$core$String} };

typedef frost$core$String* (*$fn10)(org$frostlang$frostc$frostdoc$Protector*);
typedef frost$core$Int64 (*$fn58)(frost$math$Random*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x50\x72\x6f\x74\x65\x63\x74\x6f\x72", 39, -8110201973131289544, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, 8332415192204060750, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, 8332415192204060750, NULL };

frost$core$String* org$frostlang$frostc$frostdoc$Protector$encode$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Protector* param0, frost$core$String* param1) {

frost$core$String* local0 = NULL;
// line 59
frost$collections$HashMap** $tmp2 = &param0->encodeMap;
frost$collections$HashMap* $tmp3 = *$tmp2;
frost$core$Object* $tmp4 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3, ((frost$collections$Key*) param1));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp4)));
frost$core$String* $tmp5 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
*(&local0) = ((frost$core$String*) $tmp4);
frost$core$Frost$unref$frost$core$Object$Q($tmp4);
// line 60
frost$core$String* $tmp6 = *(&local0);
frost$core$Bit $tmp7 = frost$core$Bit$init$builtin_bit($tmp6 == NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// line 61
$fn10 $tmp9 = ($fn10) param0->$class->vtable[4];
frost$core$String* $tmp11 = $tmp9(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$String* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = $tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
// line 62
frost$collections$HashMap** $tmp13 = &param0->encodeMap;
frost$collections$HashMap* $tmp14 = *$tmp13;
frost$core$String* $tmp15 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp14, ((frost$collections$Key*) param1), ((frost$core$Object*) $tmp15));
// line 63
frost$collections$HashMap** $tmp16 = &param0->decodeMap;
frost$collections$HashMap* $tmp17 = *$tmp16;
frost$core$String* $tmp18 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp17, ((frost$collections$Key*) $tmp18), ((frost$core$Object*) param1));
goto block2;
block2:;
// line 65
frost$core$String* $tmp19 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$String* $tmp20 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
*(&local0) = ((frost$core$String*) NULL);
return $tmp19;

}
frost$core$String* org$frostlang$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$Protector* param0, frost$core$String* param1) {

// line 69
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
// line 73
frost$core$Int64 $tmp24 = (frost$core$Int64) {20};
*(&local0) = $tmp24;
// line 74
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s25));
frost$core$String* $tmp26 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local1) = &$s27;
// line 75
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp28 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp28);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$MutableString* $tmp29 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local2) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// line 76
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
frost$core$UInt64 $tmp39 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp38);
if ($tmp37) goto block4; else goto block5;
block4:;
int64_t $tmp40 = $tmp34.value;
int64_t $tmp41 = $tmp35.value;
bool $tmp42 = $tmp40 <= $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block1; else goto block2;
block5:;
int64_t $tmp45 = $tmp34.value;
int64_t $tmp46 = $tmp35.value;
bool $tmp47 = $tmp45 < $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block1; else goto block2;
block1:;
// line 77
frost$core$MutableString* $tmp50 = *(&local2);
frost$core$String* $tmp51 = *(&local1);
frost$math$Random** $tmp52 = &param0->random;
frost$math$Random* $tmp53 = *$tmp52;
frost$core$String* $tmp54 = *(&local1);
frost$core$Int64 $tmp55 = frost$core$String$get_byteLength$R$frost$core$Int64($tmp54);
ITable* $tmp56 = $tmp53->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp56 = $tmp56->next;
}
$fn58 $tmp57 = $tmp56->methods[3];
frost$core$Int64 $tmp59 = $tmp57($tmp53, $tmp55);
frost$core$Char32 $tmp60 = frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32($tmp51, $tmp59);
frost$core$MutableString$append$frost$core$Char32($tmp50, $tmp60);
goto block3;
block3:;
frost$core$Int64 $tmp61 = *(&local3);
int64_t $tmp62 = $tmp35.value;
int64_t $tmp63 = $tmp61.value;
int64_t $tmp64 = $tmp62 - $tmp63;
frost$core$Int64 $tmp65 = (frost$core$Int64) {$tmp64};
frost$core$UInt64 $tmp66 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp65);
if ($tmp37) goto block7; else goto block8;
block7:;
uint64_t $tmp67 = $tmp66.value;
uint64_t $tmp68 = $tmp39.value;
bool $tmp69 = $tmp67 >= $tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block6; else goto block2;
block8:;
uint64_t $tmp72 = $tmp66.value;
uint64_t $tmp73 = $tmp39.value;
bool $tmp74 = $tmp72 > $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block6; else goto block2;
block6:;
int64_t $tmp77 = $tmp61.value;
int64_t $tmp78 = $tmp38.value;
int64_t $tmp79 = $tmp77 + $tmp78;
frost$core$Int64 $tmp80 = (frost$core$Int64) {$tmp79};
*(&local3) = $tmp80;
goto block1;
block2:;
// line 79
frost$core$MutableString* $tmp81 = *(&local2);
frost$core$String* $tmp82 = frost$core$MutableString$finish$R$frost$core$String($tmp81);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$MutableString* $tmp83 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp84 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local1) = ((frost$core$String*) NULL);
return $tmp82;

}
void org$frostlang$frostc$frostdoc$Protector$init(org$frostlang$frostc$frostdoc$Protector* param0) {

// line 52
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp85 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp85);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$collections$HashMap** $tmp86 = &param0->encodeMap;
frost$collections$HashMap* $tmp87 = *$tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$collections$HashMap** $tmp88 = &param0->encodeMap;
*$tmp88 = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// line 54
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp89 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp89);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$collections$HashMap** $tmp90 = &param0->decodeMap;
frost$collections$HashMap* $tmp91 = *$tmp90;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$collections$HashMap** $tmp92 = &param0->decodeMap;
*$tmp92 = $tmp89;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// line 56
frost$math$Random* $tmp93 = frost$math$Random$default$R$frost$math$Random();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$math$Random** $tmp94 = &param0->random;
frost$math$Random* $tmp95 = *$tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$math$Random** $tmp96 = &param0->random;
*$tmp96 = $tmp93;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
return;

}
void org$frostlang$frostc$frostdoc$Protector$cleanup(org$frostlang$frostc$frostdoc$Protector* param0) {

// line 47
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp97 = &param0->encodeMap;
frost$collections$HashMap* $tmp98 = *$tmp97;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$collections$HashMap** $tmp99 = &param0->decodeMap;
frost$collections$HashMap* $tmp100 = *$tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$math$Random** $tmp101 = &param0->random;
frost$math$Random* $tmp102 = *$tmp101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
return;

}

