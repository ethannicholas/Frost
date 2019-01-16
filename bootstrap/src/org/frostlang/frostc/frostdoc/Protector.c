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
org$frostlang$frostc$frostdoc$Protector$class_type org$frostlang$frostc$frostdoc$Protector$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$frostdoc$Protector$cleanup, org$frostlang$frostc$frostdoc$Protector$encode$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$Protector$randomToken$R$frost$core$String} };

typedef frost$core$String* (*$fn10)(org$frostlang$frostc$frostdoc$Protector*);
typedef frost$core$Int64 (*$fn73)(frost$math$Random*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x50\x72\x6f\x74\x65\x63\x74\x6f\x72", 39, -8110201973131289544, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, 8332415192204060750, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, 8332415192204060750, NULL };

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
// unreffing REF($5:frost.collections.HashMap.V?)
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
// unreffing REF($25:frost.core.String)
// line 62
frost$collections$HashMap** $tmp13 = &param0->encodeMap;
frost$collections$HashMap* $tmp14 = *$tmp13;
frost$core$String* $tmp15 = *(&local0);
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit($tmp15 != NULL);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp18 = (frost$core$Int64) {62};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s19, $tmp18, &$s20);
abort(); // unreachable
block3:;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp14, ((frost$collections$Key*) param1), ((frost$core$Object*) $tmp15));
// line 63
frost$collections$HashMap** $tmp21 = &param0->decodeMap;
frost$collections$HashMap* $tmp22 = *$tmp21;
frost$core$String* $tmp23 = *(&local0);
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit($tmp23 != NULL);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp26 = (frost$core$Int64) {63};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable
block5:;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp22, ((frost$collections$Key*) $tmp23), ((frost$core$Object*) param1));
goto block2;
block2:;
// line 65
frost$core$String* $tmp29 = *(&local0);
frost$core$Bit $tmp30 = frost$core$Bit$init$builtin_bit($tmp29 != NULL);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp32 = (frost$core$Int64) {65};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s33, $tmp32, &$s34);
abort(); // unreachable
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$String* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing result
*(&local0) = ((frost$core$String*) NULL);
return $tmp29;

}
frost$core$String* org$frostlang$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$Protector* param0, frost$core$String* param1) {

// line 69
frost$collections$HashMap** $tmp36 = &param0->decodeMap;
frost$collections$HashMap* $tmp37 = *$tmp36;
frost$core$Object* $tmp38 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp37, ((frost$collections$Key*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp38)));
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
// unreffing REF($5:frost.collections.HashMap.V?)
return ((frost$core$String*) $tmp38);

}
frost$core$String* org$frostlang$frostc$frostdoc$Protector$randomToken$R$frost$core$String(org$frostlang$frostc$frostdoc$Protector* param0) {

frost$core$Int64 local0;
frost$core$String* local1 = NULL;
frost$core$MutableString* local2 = NULL;
frost$core$Int64 local3;
// line 73
frost$core$Int64 $tmp39 = (frost$core$Int64) {20};
*(&local0) = $tmp39;
// line 74
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s40));
frost$core$String* $tmp41 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local1) = &$s42;
// line 75
frost$core$MutableString* $tmp43 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp43);
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$MutableString* $tmp44 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local2) = $tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing REF($12:frost.core.MutableString)
// line 76
frost$core$Int64 $tmp45 = (frost$core$Int64) {0};
frost$core$Int64 $tmp46 = *(&local0);
frost$core$Bit $tmp47 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp48 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp45, $tmp46, $tmp47);
frost$core$Int64 $tmp49 = $tmp48.min;
*(&local3) = $tmp49;
frost$core$Int64 $tmp50 = $tmp48.max;
frost$core$Bit $tmp51 = $tmp48.inclusive;
bool $tmp52 = $tmp51.value;
frost$core$Int64 $tmp53 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp54 = frost$core$Int64$convert$R$frost$core$UInt64($tmp53);
if ($tmp52) goto block4; else goto block5;
block4:;
int64_t $tmp55 = $tmp49.value;
int64_t $tmp56 = $tmp50.value;
bool $tmp57 = $tmp55 <= $tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block1; else goto block2;
block5:;
int64_t $tmp60 = $tmp49.value;
int64_t $tmp61 = $tmp50.value;
bool $tmp62 = $tmp60 < $tmp61;
frost$core$Bit $tmp63 = (frost$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block1; else goto block2;
block1:;
// line 77
frost$core$MutableString* $tmp65 = *(&local2);
frost$core$String* $tmp66 = *(&local1);
frost$math$Random** $tmp67 = &param0->random;
frost$math$Random* $tmp68 = *$tmp67;
frost$core$String* $tmp69 = *(&local1);
frost$core$Int64 $tmp70 = frost$core$String$get_byteLength$R$frost$core$Int64($tmp69);
ITable* $tmp71 = $tmp68->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[3];
frost$core$Int64 $tmp74 = $tmp72($tmp68, $tmp70);
frost$core$Char32 $tmp75 = frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32($tmp66, $tmp74);
frost$core$MutableString$append$frost$core$Char32($tmp65, $tmp75);
goto block3;
block3:;
frost$core$Int64 $tmp76 = *(&local3);
int64_t $tmp77 = $tmp50.value;
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77 - $tmp78;
frost$core$Int64 $tmp80 = (frost$core$Int64) {$tmp79};
frost$core$UInt64 $tmp81 = frost$core$Int64$convert$R$frost$core$UInt64($tmp80);
if ($tmp52) goto block7; else goto block8;
block7:;
uint64_t $tmp82 = $tmp81.value;
uint64_t $tmp83 = $tmp54.value;
bool $tmp84 = $tmp82 >= $tmp83;
frost$core$Bit $tmp85 = (frost$core$Bit) {$tmp84};
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block6; else goto block2;
block8:;
uint64_t $tmp87 = $tmp81.value;
uint64_t $tmp88 = $tmp54.value;
bool $tmp89 = $tmp87 > $tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block6; else goto block2;
block6:;
int64_t $tmp92 = $tmp76.value;
int64_t $tmp93 = $tmp53.value;
int64_t $tmp94 = $tmp92 + $tmp93;
frost$core$Int64 $tmp95 = (frost$core$Int64) {$tmp94};
*(&local3) = $tmp95;
goto block1;
block2:;
// line 79
frost$core$MutableString* $tmp96 = *(&local2);
frost$core$String* $tmp97 = frost$core$MutableString$finish$R$frost$core$String($tmp96);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing REF($88:frost.core.String)
frost$core$MutableString* $tmp98 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// unreffing result
*(&local2) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp99 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// unreffing SAFE_CHARS
*(&local1) = ((frost$core$String*) NULL);
return $tmp97;

}
void org$frostlang$frostc$frostdoc$Protector$init(org$frostlang$frostc$frostdoc$Protector* param0) {

// line 52
frost$collections$HashMap* $tmp100 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$collections$HashMap** $tmp101 = &param0->encodeMap;
frost$collections$HashMap* $tmp102 = *$tmp101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$collections$HashMap** $tmp103 = &param0->encodeMap;
*$tmp103 = $tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing REF($1:frost.collections.HashMap<frost.core.String, frost.core.String>)
// line 54
frost$collections$HashMap* $tmp104 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp104);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$collections$HashMap** $tmp105 = &param0->decodeMap;
frost$collections$HashMap* $tmp106 = *$tmp105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$collections$HashMap** $tmp107 = &param0->decodeMap;
*$tmp107 = $tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing REF($16:frost.collections.HashMap<frost.core.String, frost.core.String>)
// line 56
frost$math$Random* $tmp108 = frost$math$Random$default$R$frost$math$Random();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$math$Random** $tmp109 = &param0->random;
frost$math$Random* $tmp110 = *$tmp109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$math$Random** $tmp111 = &param0->random;
*$tmp111 = $tmp108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($31:frost.math.Random)
return;

}
void org$frostlang$frostc$frostdoc$Protector$cleanup(org$frostlang$frostc$frostdoc$Protector* param0) {

// line 47
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp112 = &param0->encodeMap;
frost$collections$HashMap* $tmp113 = *$tmp112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$collections$HashMap** $tmp114 = &param0->decodeMap;
frost$collections$HashMap* $tmp115 = *$tmp114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$math$Random** $tmp116 = &param0->random;
frost$math$Random* $tmp117 = *$tmp116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
return;

}

