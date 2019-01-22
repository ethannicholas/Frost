#include "frost/json/JSON.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/json/JSON/PathKey.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char32.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Int32.h"
#include "frost/core/Equatable.h"
#include "frost/core/Frost.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "frost/collections/MapView.h"
#include "frost/collections/ListView.h"
#include "frost/core/Real64.h"
#include "frost/core/MutableString.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Formattable.h"
#include "frost/collections/Iterable.h"


static frost$core$String $s1;
frost$json$JSON$class_type frost$json$JSON$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$json$JSON$get_asString$R$frost$core$String, frost$json$JSON$cleanup, frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q, frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q, frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q, frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q, frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q, frost$json$JSON$getArray$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q, frost$json$JSON$getObject$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q, frost$json$JSON$asInt$R$frost$core$Int64, frost$json$JSON$asReal$R$frost$core$Real64, frost$json$JSON$asString$R$frost$core$String, frost$json$JSON$asBit$R$frost$core$Bit, frost$json$JSON$asObject$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT, frost$json$JSON$asArray$R$frost$collections$ListView$LTfrost$json$JSON$GT} };

typedef frost$core$Bit (*$fn31)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn83)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn121)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$Object* (*$fn155)(frost$collections$ListView*, frost$core$Int64);
typedef frost$json$JSON* (*$fn164)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn183)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn202)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn221)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn242)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn263)(frost$json$JSON*, frost$core$String*);
typedef frost$core$String* (*$fn371)(frost$core$Object*);
typedef frost$core$String* (*$fn381)(frost$core$Object*);
typedef frost$core$String* (*$fn401)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn418)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn422)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn427)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn438)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Object* (*$fn448)(frost$collections$MapView*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn479)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn483)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn488)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, -3431816289963872625, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3401700107860536954, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s519 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };

frost$json$JSON$PathKey* frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$Char32 local3;
frost$core$Bit local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$Int64$nullable local7;
// line 52
frost$core$Char32 $tmp2 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, param1);
frost$core$Int32 $tmp3 = (frost$core$Int32) {47};
frost$core$Char32 $tmp4 = frost$core$Char32$init$frost$core$Int32($tmp3);
frost$core$Bit $tmp5 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp2, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
// line 54
frost$core$String$Index $tmp7 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local0) = $tmp7;
// line 55
frost$core$String$Index $tmp8 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local1) = $tmp8;
// line 56
frost$core$String$Index $tmp9 = *(&local1);
*(&local2) = $tmp9;
// line 57
goto block4;
block4:;
// line 58
frost$core$String$Index $tmp10 = *(&local2);
frost$core$Char32 $tmp11 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp10);
*(&local3) = $tmp11;
// line 59
frost$core$Char32 $tmp12 = *(&local3);
frost$core$Int32 $tmp13 = (frost$core$Int32) {47};
frost$core$Char32 $tmp14 = frost$core$Char32$init$frost$core$Int32($tmp13);
frost$core$Bit $tmp15 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp12, $tmp14);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block9; else goto block10;
block9:;
*(&local4) = $tmp15;
goto block11;
block10:;
frost$core$Char32 $tmp17 = *(&local3);
frost$core$Int32 $tmp18 = (frost$core$Int32) {91};
frost$core$Char32 $tmp19 = frost$core$Char32$init$frost$core$Int32($tmp18);
frost$core$Bit $tmp20 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp17, $tmp19);
*(&local4) = $tmp20;
goto block11;
block11:;
frost$core$Bit $tmp21 = *(&local4);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block7; else goto block8;
block7:;
// line 60
goto block6;
block8:;
// line 62
frost$core$String$Index $tmp23 = *(&local2);
frost$core$String$Index $tmp24 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp23);
*(&local2) = $tmp24;
goto block5;
block5:;
frost$core$String$Index $tmp25 = *(&local2);
frost$core$String$Index$wrapper* $tmp26;
$tmp26 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp26->value = $tmp25;
frost$core$String$Index $tmp27 = *(&local0);
frost$core$String$Index$wrapper* $tmp28;
$tmp28 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp28->value = $tmp27;
ITable* $tmp29 = ((frost$core$Equatable*) $tmp26)->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp29 = $tmp29->next;
}
$fn31 $tmp30 = $tmp29->methods[1];
frost$core$Bit $tmp32 = $tmp30(((frost$core$Equatable*) $tmp26), ((frost$core$Equatable*) $tmp28));
bool $tmp33 = $tmp32.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp28)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp26)));
if ($tmp33) goto block4; else goto block6;
block6:;
// line 65
frost$core$String$Index $tmp34 = *(&local1);
frost$core$String$Index $tmp35 = *(&local2);
frost$core$Bit $tmp36 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp34, $tmp35);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block12; else goto block13;
block12:;
// line 66
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block13:;
// line 68
frost$json$JSON$PathKey* $tmp38 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int64 $tmp39 = (frost$core$Int64) {0};
frost$core$String$Index $tmp40 = *(&local1);
frost$core$String$Index $tmp41 = *(&local2);
frost$core$Bit $tmp42 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp43 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp40, $tmp41, $tmp42);
frost$core$String* $tmp44 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp43);
frost$core$String$Index $tmp45 = *(&local2);
frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$String$frost$core$String$Index($tmp38, $tmp39, $tmp44, $tmp45);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
return $tmp38;
block3:;
frost$core$Int32 $tmp46 = (frost$core$Int32) {91};
frost$core$Char32 $tmp47 = frost$core$Char32$init$frost$core$Int32($tmp46);
frost$core$Bit $tmp48 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp2, $tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block14; else goto block15;
block14:;
// line 71
frost$core$String$Index $tmp50 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local5) = $tmp50;
// line 72
frost$core$String$Index $tmp51 = *(&local5);
*(&local6) = $tmp51;
// line 73
goto block16;
block16:;
frost$core$String$Index $tmp52 = *(&local6);
frost$core$Char32 $tmp53 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp52);
frost$core$Int32 $tmp54 = (frost$core$Int32) {93};
frost$core$Char32 $tmp55 = frost$core$Char32$init$frost$core$Int32($tmp54);
frost$core$Bit $tmp56 = frost$core$Char32$$NEQ$frost$core$Char32$R$frost$core$Bit($tmp53, $tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block17; else goto block18;
block17:;
// line 74
frost$core$String$Index $tmp58 = *(&local6);
frost$core$String$Index $tmp59 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp58);
*(&local6) = $tmp59;
goto block16;
block18:;
// line 76
frost$core$String$Index $tmp60 = *(&local5);
frost$core$String$Index $tmp61 = *(&local6);
frost$core$Bit $tmp62 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp63 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp60, $tmp61, $tmp62);
frost$core$String* $tmp64 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp63);
frost$core$Int64$nullable $tmp65 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp64);
*(&local7) = $tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// line 77
frost$core$Int64$nullable $tmp66 = *(&local7);
frost$core$Bit $tmp67 = frost$core$Bit$init$builtin_bit(!$tmp66.nonnull);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block19; else goto block20;
block19:;
// line 78
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block20:;
// line 80
frost$json$JSON$PathKey* $tmp69 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int64 $tmp70 = (frost$core$Int64) {1};
frost$core$Int64$nullable $tmp71 = *(&local7);
frost$core$String$Index $tmp72 = *(&local6);
frost$core$String$Index $tmp73 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp72);
frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$Int64$frost$core$String$Index($tmp69, $tmp70, ((frost$core$Int64) $tmp71.value), $tmp73);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
return $tmp69;
block15:;
// line 83
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block1:;
goto block21;
block21:;

}
frost$json$JSON* frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$json$JSON* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String$Index local4;
frost$collections$MapView* local5 = NULL;
frost$core$Int64 local6;
frost$core$String$Index local7;
frost$collections$ListView* local8 = NULL;
// line 103
frost$core$String$Index $tmp74 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local0) = $tmp74;
// line 104
frost$core$String$Index $tmp75 = frost$core$String$get_end$R$frost$core$String$Index(param1);
*(&local1) = $tmp75;
// line 105
*(&local2) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$json$JSON* $tmp76 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local2) = param0;
// line 106
goto block1;
block1:;
frost$core$String$Index $tmp77 = *(&local0);
frost$core$String$Index$wrapper* $tmp78;
$tmp78 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp78->value = $tmp77;
frost$core$String$Index $tmp79 = *(&local1);
frost$core$String$Index$wrapper* $tmp80;
$tmp80 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp80->value = $tmp79;
ITable* $tmp81 = ((frost$core$Equatable*) $tmp78)->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[1];
frost$core$Bit $tmp84 = $tmp82(((frost$core$Equatable*) $tmp78), ((frost$core$Equatable*) $tmp80));
bool $tmp85 = $tmp84.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp80)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp78)));
if ($tmp85) goto block2; else goto block3;
block2:;
// line 107
frost$core$String$Index $tmp86 = *(&local0);
frost$json$JSON$PathKey* $tmp87 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp86);
frost$core$Bit $tmp88 = frost$core$Bit$init$builtin_bit($tmp87 != NULL);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp90 = (frost$core$Int64) {107};
frost$core$String* $tmp91 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s92, param1);
frost$core$String* $tmp93 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp91, &$s94);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s95, $tmp90, $tmp93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// line 108
frost$core$String$Index $tmp96 = *(&local0);
frost$json$JSON$PathKey* $tmp97 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp96);
frost$core$Int64* $tmp98 = &$tmp97->$rawValue;
frost$core$Int64 $tmp99 = *$tmp98;
frost$core$Int64 $tmp100 = (frost$core$Int64) {0};
frost$core$Bit $tmp101 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp99, $tmp100);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block7; else goto block8;
block7:;
frost$core$String** $tmp103 = (frost$core$String**) ($tmp97->$data + 0);
frost$core$String* $tmp104 = *$tmp103;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$String* $tmp105 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local3) = $tmp104;
frost$core$String$Index* $tmp106 = (frost$core$String$Index*) ($tmp97->$data + 8);
frost$core$String$Index $tmp107 = *$tmp106;
*(&local4) = $tmp107;
// line 110
frost$json$JSON* $tmp108 = *(&local2);
frost$core$Int64* $tmp109 = &$tmp108->$rawValue;
frost$core$Int64 $tmp110 = *$tmp109;
frost$core$Int64 $tmp111 = (frost$core$Int64) {4};
frost$core$Bit $tmp112 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp110, $tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block10; else goto block11;
block10:;
frost$collections$MapView** $tmp114 = (frost$collections$MapView**) ($tmp108->$data + 0);
frost$collections$MapView* $tmp115 = *$tmp114;
*(&local5) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$collections$MapView* $tmp116 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local5) = $tmp115;
// line 112
frost$collections$MapView* $tmp117 = *(&local5);
frost$core$String* $tmp118 = *(&local3);
ITable* $tmp119 = $tmp117->$class->itable;
while ($tmp119->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp119 = $tmp119->next;
}
$fn121 $tmp120 = $tmp119->methods[1];
frost$core$Object* $tmp122 = $tmp120($tmp117, ((frost$core$Object*) $tmp118));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp122)));
frost$json$JSON* $tmp123 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local2) = ((frost$json$JSON*) $tmp122);
frost$core$Frost$unref$frost$core$Object$Q($tmp122);
// line 113
frost$json$JSON* $tmp124 = *(&local2);
frost$core$Bit $tmp125 = frost$core$Bit$init$builtin_bit($tmp124 == NULL);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block12; else goto block13;
block12:;
// line 114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$collections$MapView* $tmp127 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local5) = ((frost$collections$MapView*) NULL);
frost$core$String* $tmp128 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$json$JSON* $tmp129 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local2) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block13:;
frost$collections$MapView* $tmp130 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local5) = ((frost$collections$MapView*) NULL);
goto block9;
block11:;
// line 118
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$String* $tmp131 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$json$JSON* $tmp132 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local2) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block9:;
// line 121
frost$core$String$Index $tmp133 = *(&local4);
*(&local0) = $tmp133;
frost$core$String* $tmp134 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block8:;
frost$core$Int64 $tmp135 = (frost$core$Int64) {1};
frost$core$Bit $tmp136 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp99, $tmp135);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block14; else goto block6;
block14:;
frost$core$Int64* $tmp138 = (frost$core$Int64*) ($tmp97->$data + 0);
frost$core$Int64 $tmp139 = *$tmp138;
*(&local6) = $tmp139;
frost$core$String$Index* $tmp140 = (frost$core$String$Index*) ($tmp97->$data + 8);
frost$core$String$Index $tmp141 = *$tmp140;
*(&local7) = $tmp141;
// line 124
frost$json$JSON* $tmp142 = *(&local2);
frost$core$Int64* $tmp143 = &$tmp142->$rawValue;
frost$core$Int64 $tmp144 = *$tmp143;
frost$core$Int64 $tmp145 = (frost$core$Int64) {5};
frost$core$Bit $tmp146 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp144, $tmp145);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block16; else goto block17;
block16:;
frost$collections$ListView** $tmp148 = (frost$collections$ListView**) ($tmp142->$data + 0);
frost$collections$ListView* $tmp149 = *$tmp148;
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$collections$ListView* $tmp150 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local8) = $tmp149;
// line 126
frost$collections$ListView* $tmp151 = *(&local8);
frost$core$Int64 $tmp152 = *(&local6);
ITable* $tmp153 = $tmp151->$class->itable;
while ($tmp153->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp153 = $tmp153->next;
}
$fn155 $tmp154 = $tmp153->methods[0];
frost$core$Object* $tmp156 = $tmp154($tmp151, $tmp152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp156)));
frost$json$JSON* $tmp157 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local2) = ((frost$json$JSON*) $tmp156);
frost$core$Frost$unref$frost$core$Object$Q($tmp156);
frost$collections$ListView* $tmp158 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local8) = ((frost$collections$ListView*) NULL);
goto block15;
block17:;
// line 129
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$json$JSON* $tmp159 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local2) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block15:;
// line 132
frost$core$String$Index $tmp160 = *(&local7);
*(&local0) = $tmp160;
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
goto block1;
block3:;
// line 136
frost$json$JSON* $tmp161 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
frost$json$JSON* $tmp162 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local2) = ((frost$json$JSON*) NULL);
return $tmp161;

}
frost$core$Int64$nullable frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Int64 local1;
// line 143
$fn164 $tmp163 = ($fn164) param0->$class->vtable[2];
frost$json$JSON* $tmp165 = $tmp163(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$json$JSON* $tmp166 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local0) = $tmp165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
// line 144
frost$json$JSON* $tmp167 = *(&local0);
frost$core$Bit $tmp168 = frost$core$Bit$init$builtin_bit($tmp167 == NULL);
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block1; else goto block2;
block1:;
// line 145
frost$json$JSON* $tmp170 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 147
frost$json$JSON* $tmp171 = *(&local0);
frost$core$Int64* $tmp172 = &$tmp171->$rawValue;
frost$core$Int64 $tmp173 = *$tmp172;
frost$core$Int64 $tmp174 = (frost$core$Int64) {0};
frost$core$Bit $tmp175 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp173, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block4; else goto block5;
block4:;
frost$core$Int64* $tmp177 = (frost$core$Int64*) ($tmp171->$data + 0);
frost$core$Int64 $tmp178 = *$tmp177;
*(&local1) = $tmp178;
// line 149
frost$core$Int64 $tmp179 = *(&local1);
frost$json$JSON* $tmp180 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { $tmp179, true });
block5:;
// line 152
frost$json$JSON* $tmp181 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block3:;
goto block6;
block6:;

}
frost$core$Real64$nullable frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Real64 local1;
// line 161
$fn183 $tmp182 = ($fn183) param0->$class->vtable[2];
frost$json$JSON* $tmp184 = $tmp182(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$json$JSON* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local0) = $tmp184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// line 162
frost$json$JSON* $tmp186 = *(&local0);
frost$core$Bit $tmp187 = frost$core$Bit$init$builtin_bit($tmp186 == NULL);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block1; else goto block2;
block1:;
// line 163
frost$json$JSON* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block2:;
// line 165
frost$json$JSON* $tmp190 = *(&local0);
frost$core$Int64* $tmp191 = &$tmp190->$rawValue;
frost$core$Int64 $tmp192 = *$tmp191;
frost$core$Int64 $tmp193 = (frost$core$Int64) {1};
frost$core$Bit $tmp194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp192, $tmp193);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp196 = (frost$core$Real64*) ($tmp190->$data + 0);
frost$core$Real64 $tmp197 = *$tmp196;
*(&local1) = $tmp197;
// line 167
frost$core$Real64 $tmp198 = *(&local1);
frost$json$JSON* $tmp199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { $tmp198, true });
block5:;
// line 170
frost$json$JSON* $tmp200 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block3:;
goto block6;
block6:;

}
frost$core$Bit$nullable frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Bit local1;
// line 179
$fn202 $tmp201 = ($fn202) param0->$class->vtable[2];
frost$json$JSON* $tmp203 = $tmp201(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$json$JSON* $tmp204 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local0) = $tmp203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// line 180
frost$json$JSON* $tmp205 = *(&local0);
frost$core$Bit $tmp206 = frost$core$Bit$init$builtin_bit($tmp205 == NULL);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block1; else goto block2;
block1:;
// line 181
frost$json$JSON* $tmp208 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block2:;
// line 183
frost$json$JSON* $tmp209 = *(&local0);
frost$core$Int64* $tmp210 = &$tmp209->$rawValue;
frost$core$Int64 $tmp211 = *$tmp210;
frost$core$Int64 $tmp212 = (frost$core$Int64) {3};
frost$core$Bit $tmp213 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp211, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block4; else goto block5;
block4:;
frost$core$Bit* $tmp215 = (frost$core$Bit*) ($tmp209->$data + 0);
frost$core$Bit $tmp216 = *$tmp215;
*(&local1) = $tmp216;
// line 185
frost$core$Bit $tmp217 = *(&local1);
frost$json$JSON* $tmp218 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { $tmp217, true });
block5:;
// line 188
frost$json$JSON* $tmp219 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block3:;
goto block6;
block6:;

}
frost$core$String* frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$String* local1 = NULL;
// line 197
$fn221 $tmp220 = ($fn221) param0->$class->vtable[2];
frost$json$JSON* $tmp222 = $tmp220(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$json$JSON* $tmp223 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local0) = $tmp222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// line 198
frost$json$JSON* $tmp224 = *(&local0);
frost$core$Bit $tmp225 = frost$core$Bit$init$builtin_bit($tmp224 == NULL);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block1; else goto block2;
block1:;
// line 199
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp227 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block2:;
// line 201
frost$json$JSON* $tmp228 = *(&local0);
frost$core$Int64* $tmp229 = &$tmp228->$rawValue;
frost$core$Int64 $tmp230 = *$tmp229;
frost$core$Int64 $tmp231 = (frost$core$Int64) {2};
frost$core$Bit $tmp232 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp230, $tmp231);
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block4; else goto block5;
block4:;
frost$core$String** $tmp234 = (frost$core$String**) ($tmp228->$data + 0);
frost$core$String* $tmp235 = *$tmp234;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$String* $tmp236 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local1) = $tmp235;
// line 203
frost$core$String* $tmp237 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$String* $tmp238 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local1) = ((frost$core$String*) NULL);
frost$json$JSON* $tmp239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp237;
block5:;
// line 206
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp240 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block3:;
goto block6;
block6:;

}
frost$collections$ListView* frost$json$JSON$getArray$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$ListView* local1 = NULL;
// line 215
$fn242 $tmp241 = ($fn242) param0->$class->vtable[2];
frost$json$JSON* $tmp243 = $tmp241(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$json$JSON* $tmp244 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local0) = $tmp243;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// line 216
frost$json$JSON* $tmp245 = *(&local0);
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit($tmp245 == NULL);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block1; else goto block2;
block1:;
// line 217
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp248 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block2:;
// line 219
frost$json$JSON* $tmp249 = *(&local0);
frost$core$Int64* $tmp250 = &$tmp249->$rawValue;
frost$core$Int64 $tmp251 = *$tmp250;
frost$core$Int64 $tmp252 = (frost$core$Int64) {5};
frost$core$Bit $tmp253 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp251, $tmp252);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block4; else goto block5;
block4:;
frost$collections$ListView** $tmp255 = (frost$collections$ListView**) ($tmp249->$data + 0);
frost$collections$ListView* $tmp256 = *$tmp255;
*(&local1) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$collections$ListView* $tmp257 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local1) = $tmp256;
// line 221
frost$collections$ListView* $tmp258 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$collections$ListView* $tmp259 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local1) = ((frost$collections$ListView*) NULL);
frost$json$JSON* $tmp260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp258;
block5:;
// line 224
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block3:;
goto block6;
block6:;

}
frost$collections$MapView* frost$json$JSON$getObject$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$MapView* local1 = NULL;
// line 233
$fn263 $tmp262 = ($fn263) param0->$class->vtable[2];
frost$json$JSON* $tmp264 = $tmp262(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$json$JSON* $tmp265 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local0) = $tmp264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// line 234
frost$json$JSON* $tmp266 = *(&local0);
frost$core$Bit $tmp267 = frost$core$Bit$init$builtin_bit($tmp266 == NULL);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block1; else goto block2;
block1:;
// line 235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block2:;
// line 237
frost$json$JSON* $tmp270 = *(&local0);
frost$core$Int64* $tmp271 = &$tmp270->$rawValue;
frost$core$Int64 $tmp272 = *$tmp271;
frost$core$Int64 $tmp273 = (frost$core$Int64) {4};
frost$core$Bit $tmp274 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp272, $tmp273);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block4; else goto block5;
block4:;
frost$collections$MapView** $tmp276 = (frost$collections$MapView**) ($tmp270->$data + 0);
frost$collections$MapView* $tmp277 = *$tmp276;
*(&local1) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$collections$MapView* $tmp278 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local1) = $tmp277;
// line 239
frost$collections$MapView* $tmp279 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$collections$MapView* $tmp280 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local1) = ((frost$collections$MapView*) NULL);
frost$json$JSON* $tmp281 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp279;
block5:;
// line 242
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block3:;
goto block6;
block6:;

}
frost$core$Int64 frost$json$JSON$asInt$R$frost$core$Int64(frost$json$JSON* param0) {

frost$core$Int64 local0;
// line 251
frost$core$Int64* $tmp283 = &param0->$rawValue;
frost$core$Int64 $tmp284 = *$tmp283;
frost$core$Int64 $tmp285 = (frost$core$Int64) {0};
frost$core$Bit $tmp286 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp285);
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp288 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp289 = *$tmp288;
*(&local0) = $tmp289;
// line 253
frost$core$Int64 $tmp290 = *(&local0);
return $tmp290;
block3:;
// line 256
frost$core$Bit $tmp291 = frost$core$Bit$init$builtin_bit(false);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp293 = (frost$core$Int64) {256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s294, $tmp293);
abort(); // unreachable
block4:;
// line 257
goto block6;
block6:;
goto block6;
block7:;
goto block1;
block1:;
goto block8;
block8:;

}
frost$core$Real64 frost$json$JSON$asReal$R$frost$core$Real64(frost$json$JSON* param0) {

frost$core$Real64 local0;
// line 266
frost$core$Int64* $tmp295 = &param0->$rawValue;
frost$core$Int64 $tmp296 = *$tmp295;
frost$core$Int64 $tmp297 = (frost$core$Int64) {1};
frost$core$Bit $tmp298 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp296, $tmp297);
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block2; else goto block3;
block2:;
frost$core$Real64* $tmp300 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp301 = *$tmp300;
*(&local0) = $tmp301;
// line 268
frost$core$Real64 $tmp302 = *(&local0);
return $tmp302;
block3:;
// line 271
frost$core$Bit $tmp303 = frost$core$Bit$init$builtin_bit(false);
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp305 = (frost$core$Int64) {271};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s306, $tmp305);
abort(); // unreachable
block4:;
// line 272
goto block6;
block6:;
goto block6;
block7:;
goto block1;
block1:;
goto block8;
block8:;

}
frost$core$String* frost$json$JSON$asString$R$frost$core$String(frost$json$JSON* param0) {

frost$core$String* local0 = NULL;
// line 281
frost$core$Int64* $tmp307 = &param0->$rawValue;
frost$core$Int64 $tmp308 = *$tmp307;
frost$core$Int64 $tmp309 = (frost$core$Int64) {2};
frost$core$Bit $tmp310 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp308, $tmp309);
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block2; else goto block3;
block2:;
frost$core$String** $tmp312 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp313 = *$tmp312;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$String* $tmp314 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local0) = $tmp313;
// line 283
frost$core$String* $tmp315 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$String* $tmp316 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local0) = ((frost$core$String*) NULL);
return $tmp315;
block3:;
// line 286
frost$core$Bit $tmp317 = frost$core$Bit$init$builtin_bit(false);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp319 = (frost$core$Int64) {286};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s320, $tmp319);
abort(); // unreachable
block4:;
// line 287
goto block6;
block6:;
goto block6;
block7:;
goto block1;
block1:;
goto block8;
block8:;

}
frost$core$Bit frost$json$JSON$asBit$R$frost$core$Bit(frost$json$JSON* param0) {

frost$core$Bit local0;
// line 296
frost$core$Int64* $tmp321 = &param0->$rawValue;
frost$core$Int64 $tmp322 = *$tmp321;
frost$core$Int64 $tmp323 = (frost$core$Int64) {3};
frost$core$Bit $tmp324 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp322, $tmp323);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp326 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp327 = *$tmp326;
*(&local0) = $tmp327;
// line 298
frost$core$Bit $tmp328 = *(&local0);
return $tmp328;
block3:;
// line 301
frost$core$Bit $tmp329 = frost$core$Bit$init$builtin_bit(false);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp331 = (frost$core$Int64) {301};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s332, $tmp331);
abort(); // unreachable
block4:;
// line 302
goto block6;
block6:;
goto block6;
block7:;
goto block1;
block1:;
goto block8;
block8:;

}
frost$collections$MapView* frost$json$JSON$asObject$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$MapView* local0 = NULL;
// line 311
frost$core$Int64* $tmp333 = &param0->$rawValue;
frost$core$Int64 $tmp334 = *$tmp333;
frost$core$Int64 $tmp335 = (frost$core$Int64) {4};
frost$core$Bit $tmp336 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp335);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block2; else goto block3;
block2:;
frost$collections$MapView** $tmp338 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp339 = *$tmp338;
*(&local0) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$collections$MapView* $tmp340 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local0) = $tmp339;
// line 313
frost$collections$MapView* $tmp341 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$collections$MapView* $tmp342 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local0) = ((frost$collections$MapView*) NULL);
return $tmp341;
block3:;
// line 316
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit(false);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp345 = (frost$core$Int64) {316};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s346, $tmp345);
abort(); // unreachable
block4:;
// line 317
goto block6;
block6:;
goto block6;
block7:;
goto block1;
block1:;
goto block8;
block8:;

}
frost$collections$ListView* frost$json$JSON$asArray$R$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$ListView* local0 = NULL;
// line 326
frost$core$Int64* $tmp347 = &param0->$rawValue;
frost$core$Int64 $tmp348 = *$tmp347;
frost$core$Int64 $tmp349 = (frost$core$Int64) {5};
frost$core$Bit $tmp350 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp348, $tmp349);
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block2; else goto block3;
block2:;
frost$collections$ListView** $tmp352 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp353 = *$tmp352;
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$collections$ListView* $tmp354 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local0) = $tmp353;
// line 328
frost$collections$ListView* $tmp355 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$collections$ListView* $tmp356 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local0) = ((frost$collections$ListView*) NULL);
return $tmp355;
block3:;
// line 331
frost$core$Bit $tmp357 = frost$core$Bit$init$builtin_bit(false);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp359 = (frost$core$Int64) {331};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s360, $tmp359);
abort(); // unreachable
block4:;
// line 332
goto block6;
block6:;
goto block6;
block7:;
goto block1;
block1:;
goto block8;
block8:;

}
frost$core$String* frost$json$JSON$get_asString$R$frost$core$String(frost$json$JSON* param0) {

frost$core$Int64 local0;
frost$core$Real64 local1;
frost$core$String* local2 = NULL;
frost$core$Bit local3;
frost$collections$MapView* local4 = NULL;
frost$core$MutableString* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
frost$collections$ListView* local8 = NULL;
frost$core$MutableString* local9 = NULL;
frost$core$String* local10 = NULL;
frost$json$JSON* local11 = NULL;
// line 342
frost$core$Int64* $tmp361 = &param0->$rawValue;
frost$core$Int64 $tmp362 = *$tmp361;
frost$core$Int64 $tmp363 = (frost$core$Int64) {0};
frost$core$Bit $tmp364 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp362, $tmp363);
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp366 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp367 = *$tmp366;
*(&local0) = $tmp367;
// line 344
frost$core$Int64 $tmp368 = *(&local0);
frost$core$Int64$wrapper* $tmp369;
$tmp369 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp369->value = $tmp368;
$fn371 $tmp370 = ($fn371) ((frost$core$Object*) $tmp369)->$class->vtable[0];
frost$core$String* $tmp372 = $tmp370(((frost$core$Object*) $tmp369));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
return $tmp372;
block3:;
frost$core$Int64 $tmp373 = (frost$core$Int64) {1};
frost$core$Bit $tmp374 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp362, $tmp373);
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp376 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp377 = *$tmp376;
*(&local1) = $tmp377;
// line 347
frost$core$Real64 $tmp378 = *(&local1);
frost$core$Real64$wrapper* $tmp379;
$tmp379 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp379->value = $tmp378;
$fn381 $tmp380 = ($fn381) ((frost$core$Object*) $tmp379)->$class->vtable[0];
frost$core$String* $tmp382 = $tmp380(((frost$core$Object*) $tmp379));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
return $tmp382;
block5:;
frost$core$Int64 $tmp383 = (frost$core$Int64) {2};
frost$core$Bit $tmp384 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp362, $tmp383);
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block6; else goto block7;
block6:;
frost$core$String** $tmp386 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp387 = *$tmp386;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$String* $tmp388 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local2) = $tmp387;
// line 350
frost$core$String* $tmp389 = *(&local2);
frost$core$String* $tmp390 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp389, &$s391);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$String* $tmp392 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local2) = ((frost$core$String*) NULL);
return $tmp390;
block7:;
frost$core$Int64 $tmp393 = (frost$core$Int64) {3};
frost$core$Bit $tmp394 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp362, $tmp393);
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block8; else goto block9;
block8:;
frost$core$Bit* $tmp396 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp397 = *$tmp396;
*(&local3) = $tmp397;
// line 353
frost$core$Bit $tmp398 = *(&local3);
frost$core$Bit$wrapper* $tmp399;
$tmp399 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp399->value = $tmp398;
$fn401 $tmp400 = ($fn401) ((frost$core$Object*) $tmp399)->$class->vtable[0];
frost$core$String* $tmp402 = $tmp400(((frost$core$Object*) $tmp399));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
return $tmp402;
block9:;
frost$core$Int64 $tmp403 = (frost$core$Int64) {4};
frost$core$Bit $tmp404 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp362, $tmp403);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block10; else goto block11;
block10:;
frost$collections$MapView** $tmp406 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp407 = *$tmp406;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$collections$MapView* $tmp408 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local4) = $tmp407;
// line 356
frost$core$MutableString* $tmp409 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp409, &$s410);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$MutableString* $tmp411 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local5) = $tmp409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// line 357
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s412));
frost$core$String* $tmp413 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local6) = &$s414;
// line 358
frost$collections$MapView* $tmp415 = *(&local4);
ITable* $tmp416 = $tmp415->$class->itable;
while ($tmp416->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp416 = $tmp416->next;
}
$fn418 $tmp417 = $tmp416->methods[3];
frost$collections$Iterator* $tmp419 = $tmp417($tmp415);
goto block12;
block12:;
ITable* $tmp420 = $tmp419->$class->itable;
while ($tmp420->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp420 = $tmp420->next;
}
$fn422 $tmp421 = $tmp420->methods[0];
frost$core$Bit $tmp423 = $tmp421($tmp419);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block14; else goto block13;
block13:;
*(&local7) = ((frost$core$String*) NULL);
ITable* $tmp425 = $tmp419->$class->itable;
while ($tmp425->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp425 = $tmp425->next;
}
$fn427 $tmp426 = $tmp425->methods[1];
frost$core$Object* $tmp428 = $tmp426($tmp419);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp428)));
frost$core$String* $tmp429 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local7) = ((frost$core$String*) $tmp428);
// line 359
frost$core$MutableString* $tmp430 = *(&local5);
frost$core$String* $tmp431 = *(&local6);
frost$core$String* $tmp432 = frost$core$String$get_asString$R$frost$core$String($tmp431);
frost$core$String* $tmp433 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp432, &$s434);
frost$core$String* $tmp435 = *(&local7);
ITable* $tmp436 = ((frost$core$Formattable*) $tmp435)->$class->itable;
while ($tmp436->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp436 = $tmp436->next;
}
$fn438 $tmp437 = $tmp436->methods[0];
frost$core$String* $tmp439 = $tmp437(((frost$core$Formattable*) $tmp435), &$s440);
frost$core$String* $tmp441 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp433, $tmp439);
frost$core$String* $tmp442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp441, &$s443);
frost$collections$MapView* $tmp444 = *(&local4);
frost$core$String* $tmp445 = *(&local7);
ITable* $tmp446 = $tmp444->$class->itable;
while ($tmp446->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp446 = $tmp446->next;
}
$fn448 $tmp447 = $tmp446->methods[1];
frost$core$Object* $tmp449 = $tmp447($tmp444, ((frost$core$Object*) $tmp445));
frost$core$String* $tmp450 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp442, ((frost$core$Object*) ((frost$json$JSON*) $tmp449)));
frost$core$String* $tmp451 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp450, &$s452);
frost$core$MutableString$append$frost$core$String($tmp430, $tmp451);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$Frost$unref$frost$core$Object$Q($tmp449);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// line 360
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s453));
frost$core$String* $tmp454 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local6) = &$s455;
frost$core$Frost$unref$frost$core$Object$Q($tmp428);
frost$core$String* $tmp456 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local7) = ((frost$core$String*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// line 362
frost$core$MutableString* $tmp457 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp457, &$s458);
// line 363
frost$core$MutableString* $tmp459 = *(&local5);
frost$core$String* $tmp460 = frost$core$MutableString$finish$R$frost$core$String($tmp459);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$String* $tmp461 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local6) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp462 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$MapView* $tmp463 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local4) = ((frost$collections$MapView*) NULL);
return $tmp460;
block11:;
frost$core$Int64 $tmp464 = (frost$core$Int64) {5};
frost$core$Bit $tmp465 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp362, $tmp464);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block15; else goto block16;
block15:;
frost$collections$ListView** $tmp467 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp468 = *$tmp467;
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
frost$collections$ListView* $tmp469 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local8) = $tmp468;
// line 366
frost$core$MutableString* $tmp470 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp470, &$s471);
*(&local9) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$core$MutableString* $tmp472 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local9) = $tmp470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
// line 367
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s473));
frost$core$String* $tmp474 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local10) = &$s475;
// line 368
frost$collections$ListView* $tmp476 = *(&local8);
ITable* $tmp477 = ((frost$collections$Iterable*) $tmp476)->$class->itable;
while ($tmp477->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp477 = $tmp477->next;
}
$fn479 $tmp478 = $tmp477->methods[0];
frost$collections$Iterator* $tmp480 = $tmp478(((frost$collections$Iterable*) $tmp476));
goto block17;
block17:;
ITable* $tmp481 = $tmp480->$class->itable;
while ($tmp481->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp481 = $tmp481->next;
}
$fn483 $tmp482 = $tmp481->methods[0];
frost$core$Bit $tmp484 = $tmp482($tmp480);
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block19; else goto block18;
block18:;
*(&local11) = ((frost$json$JSON*) NULL);
ITable* $tmp486 = $tmp480->$class->itable;
while ($tmp486->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp486 = $tmp486->next;
}
$fn488 $tmp487 = $tmp486->methods[1];
frost$core$Object* $tmp489 = $tmp487($tmp480);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp489)));
frost$json$JSON* $tmp490 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local11) = ((frost$json$JSON*) $tmp489);
// line 369
frost$core$MutableString* $tmp491 = *(&local9);
frost$core$String* $tmp492 = *(&local10);
frost$core$String* $tmp493 = frost$core$String$get_asString$R$frost$core$String($tmp492);
frost$core$String* $tmp494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp493, &$s495);
frost$json$JSON* $tmp496 = *(&local11);
frost$core$String* $tmp497 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp494, ((frost$core$Object*) $tmp496));
frost$core$String* $tmp498 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp497, &$s499);
frost$core$MutableString$append$frost$core$String($tmp491, $tmp498);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
// line 370
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s500));
frost$core$String* $tmp501 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local10) = &$s502;
frost$core$Frost$unref$frost$core$Object$Q($tmp489);
frost$json$JSON* $tmp503 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local11) = ((frost$json$JSON*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// line 372
frost$core$MutableString* $tmp504 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp504, &$s505);
// line 373
frost$core$MutableString* $tmp506 = *(&local9);
frost$core$String* $tmp507 = frost$core$MutableString$finish$R$frost$core$String($tmp506);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$String* $tmp508 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local10) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp509 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local9) = ((frost$core$MutableString*) NULL);
frost$collections$ListView* $tmp510 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local8) = ((frost$collections$ListView*) NULL);
return $tmp507;
block16:;
frost$core$Int64 $tmp511 = (frost$core$Int64) {6};
frost$core$Bit $tmp512 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp362, $tmp511);
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block20; else goto block21;
block20:;
// line 376
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s514));
return &$s515;
block21:;
// line 379
frost$core$Bit $tmp516 = frost$core$Bit$init$builtin_bit(false);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp518 = (frost$core$Int64) {379};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s519, $tmp518);
abort(); // unreachable
block22:;
// line 380
goto block24;
block24:;
goto block24;
block25:;
goto block1;
block1:;
goto block26;
block26:;

}
void frost$json$JSON$cleanup(frost$json$JSON* param0) {

frost$core$Int64 local0;
frost$core$Real64 local1;
frost$core$String* local2 = NULL;
frost$core$Bit local3;
frost$collections$MapView* local4 = NULL;
frost$collections$ListView* local5 = NULL;
// line 6
frost$core$Int64* $tmp520 = &param0->$rawValue;
frost$core$Int64 $tmp521 = *$tmp520;
frost$core$Int64 $tmp522 = (frost$core$Int64) {0};
frost$core$Bit $tmp523 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp521, $tmp522);
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp525 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp526 = *$tmp525;
*(&local0) = $tmp526;
goto block1;
block3:;
frost$core$Int64 $tmp527 = (frost$core$Int64) {1};
frost$core$Bit $tmp528 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp521, $tmp527);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp530 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp531 = *$tmp530;
*(&local1) = $tmp531;
goto block1;
block5:;
frost$core$Int64 $tmp532 = (frost$core$Int64) {2};
frost$core$Bit $tmp533 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp521, $tmp532);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block6; else goto block7;
block6:;
frost$core$String** $tmp535 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp536 = *$tmp535;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$core$String* $tmp537 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local2) = $tmp536;
// line 1
frost$core$String* $tmp538 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
frost$core$String* $tmp539 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp540 = (frost$core$Int64) {3};
frost$core$Bit $tmp541 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp521, $tmp540);
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block8; else goto block9;
block8:;
frost$core$Bit* $tmp543 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp544 = *$tmp543;
*(&local3) = $tmp544;
goto block1;
block9:;
frost$core$Int64 $tmp545 = (frost$core$Int64) {4};
frost$core$Bit $tmp546 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp521, $tmp545);
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block10; else goto block11;
block10:;
frost$collections$MapView** $tmp548 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp549 = *$tmp548;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$collections$MapView* $tmp550 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local4) = $tmp549;
// line 1
frost$collections$MapView* $tmp551 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$collections$MapView* $tmp552 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local4) = ((frost$collections$MapView*) NULL);
goto block1;
block11:;
frost$core$Int64 $tmp553 = (frost$core$Int64) {5};
frost$core$Bit $tmp554 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp521, $tmp553);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block12; else goto block13;
block12:;
frost$collections$ListView** $tmp556 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp557 = *$tmp556;
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$collections$ListView* $tmp558 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local5) = $tmp557;
// line 1
frost$collections$ListView* $tmp559 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
frost$collections$ListView* $tmp560 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local5) = ((frost$collections$ListView*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp561 = (frost$core$Int64) {6};
frost$core$Bit $tmp562 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp521, $tmp561);
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block14; else goto block1;
block14:;
goto block1;
block1:;
// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

// line 6
frost$core$Int64* $tmp564 = &param0->$rawValue;
*$tmp564 = param1;
// line 6
frost$core$Int64* $tmp565 = (frost$core$Int64*) (param0->$data + 0);
*$tmp565 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Real64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Real64 param2) {

// line 6
frost$core$Int64* $tmp566 = &param0->$rawValue;
*$tmp566 = param1;
// line 6
frost$core$Real64* $tmp567 = (frost$core$Real64*) (param0->$data + 0);
*$tmp567 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$String(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 6
frost$core$Int64* $tmp568 = &param0->$rawValue;
*$tmp568 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp569 = (frost$core$String**) (param0->$data + 0);
*$tmp569 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Bit(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Bit param2) {

// line 6
frost$core$Int64* $tmp570 = &param0->$rawValue;
*$tmp570 = param1;
// line 6
frost$core$Bit* $tmp571 = (frost$core$Bit*) (param0->$data + 0);
*$tmp571 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$MapView* param2) {

// line 6
frost$core$Int64* $tmp572 = &param0->$rawValue;
*$tmp572 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$MapView** $tmp573 = (frost$collections$MapView**) (param0->$data + 0);
*$tmp573 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$ListView* param2) {

// line 6
frost$core$Int64* $tmp574 = &param0->$rawValue;
*$tmp574 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp575 = (frost$collections$ListView**) (param0->$data + 0);
*$tmp575 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1) {

// line 6
frost$core$Int64* $tmp576 = &param0->$rawValue;
*$tmp576 = param1;
return;

}

