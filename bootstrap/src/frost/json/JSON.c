#include "frost/json/JSON.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/json/JSON/PathKey.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char32.h"
#include "frost/core/Int64.h"
#include "frost/core/Int32.h"
#include "frost/core/Bit.h"
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

typedef frost$core$Bit (*$fn30)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn82)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn120)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$Object* (*$fn154)(frost$collections$ListView*, frost$core$Int64);
typedef frost$json$JSON* (*$fn163)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn182)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn201)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn220)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn241)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn262)(frost$json$JSON*, frost$core$String*);
typedef frost$core$String* (*$fn358)(frost$core$Object*);
typedef frost$core$String* (*$fn368)(frost$core$Object*);
typedef frost$core$String* (*$fn388)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn405)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn409)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn414)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn425)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Object* (*$fn435)(frost$collections$MapView*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn466)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn470)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn475)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, -3431816289963872625, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3401700107860536954, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };

frost$json$JSON$PathKey* frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$Char32 local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$Int64$nullable local6;
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
if ($tmp16) goto block7; else goto block9;
block9:;
frost$core$Char32 $tmp17 = *(&local3);
frost$core$Int32 $tmp18 = (frost$core$Int32) {91};
frost$core$Char32 $tmp19 = frost$core$Char32$init$frost$core$Int32($tmp18);
frost$core$Bit $tmp20 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp17, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
// line 60
goto block6;
block8:;
// line 62
frost$core$String$Index $tmp22 = *(&local2);
frost$core$String$Index $tmp23 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp22);
*(&local2) = $tmp23;
goto block5;
block5:;
frost$core$String$Index $tmp24 = *(&local2);
frost$core$String$Index$wrapper* $tmp25;
$tmp25 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp25->value = $tmp24;
frost$core$String$Index $tmp26 = *(&local0);
frost$core$String$Index$wrapper* $tmp27;
$tmp27 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp27->value = $tmp26;
ITable* $tmp28 = ((frost$core$Equatable*) $tmp25)->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp28 = $tmp28->next;
}
$fn30 $tmp29 = $tmp28->methods[1];
frost$core$Bit $tmp31 = $tmp29(((frost$core$Equatable*) $tmp25), ((frost$core$Equatable*) $tmp27));
bool $tmp32 = $tmp31.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp27)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp25)));
if ($tmp32) goto block4; else goto block6;
block6:;
// line 65
frost$core$String$Index $tmp33 = *(&local1);
frost$core$String$Index $tmp34 = *(&local2);
frost$core$Bit $tmp35 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp33, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block10; else goto block11;
block10:;
// line 66
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block11:;
// line 68
frost$json$JSON$PathKey* $tmp37 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int64 $tmp38 = (frost$core$Int64) {0};
frost$core$String$Index $tmp39 = *(&local1);
frost$core$String$Index $tmp40 = *(&local2);
frost$core$Bit $tmp41 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp42 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp39, $tmp40, $tmp41);
frost$core$String* $tmp43 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp42);
frost$core$String$Index $tmp44 = *(&local2);
frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$String$frost$core$String$Index($tmp37, $tmp38, $tmp43, $tmp44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
return $tmp37;
block3:;
frost$core$Int32 $tmp45 = (frost$core$Int32) {91};
frost$core$Char32 $tmp46 = frost$core$Char32$init$frost$core$Int32($tmp45);
frost$core$Bit $tmp47 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp2, $tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block12; else goto block13;
block12:;
// line 71
frost$core$String$Index $tmp49 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local4) = $tmp49;
// line 72
frost$core$String$Index $tmp50 = *(&local4);
*(&local5) = $tmp50;
// line 73
goto block14;
block14:;
frost$core$String$Index $tmp51 = *(&local5);
frost$core$Char32 $tmp52 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp51);
frost$core$Int32 $tmp53 = (frost$core$Int32) {93};
frost$core$Char32 $tmp54 = frost$core$Char32$init$frost$core$Int32($tmp53);
frost$core$Bit $tmp55 = frost$core$Char32$$NEQ$frost$core$Char32$R$frost$core$Bit($tmp52, $tmp54);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block15; else goto block16;
block15:;
// line 74
frost$core$String$Index $tmp57 = *(&local5);
frost$core$String$Index $tmp58 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp57);
*(&local5) = $tmp58;
goto block14;
block16:;
// line 76
frost$core$String$Index $tmp59 = *(&local4);
frost$core$String$Index $tmp60 = *(&local5);
frost$core$Bit $tmp61 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp62 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp59, $tmp60, $tmp61);
frost$core$String* $tmp63 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp62);
frost$core$Int64$nullable $tmp64 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp63);
*(&local6) = $tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// line 77
frost$core$Int64$nullable $tmp65 = *(&local6);
frost$core$Bit $tmp66 = frost$core$Bit$init$builtin_bit(!$tmp65.nonnull);
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block17; else goto block18;
block17:;
// line 78
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block18:;
// line 80
frost$json$JSON$PathKey* $tmp68 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int64 $tmp69 = (frost$core$Int64) {1};
frost$core$Int64$nullable $tmp70 = *(&local6);
frost$core$String$Index $tmp71 = *(&local5);
frost$core$String$Index $tmp72 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp71);
frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$Int64$frost$core$String$Index($tmp68, $tmp69, ((frost$core$Int64) $tmp70.value), $tmp72);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
return $tmp68;
block13:;
// line 83
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block1:;
goto block19;
block19:;

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
frost$core$String$Index $tmp73 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local0) = $tmp73;
// line 104
frost$core$String$Index $tmp74 = frost$core$String$get_end$R$frost$core$String$Index(param1);
*(&local1) = $tmp74;
// line 105
*(&local2) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$json$JSON* $tmp75 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local2) = param0;
// line 106
goto block1;
block1:;
frost$core$String$Index $tmp76 = *(&local0);
frost$core$String$Index$wrapper* $tmp77;
$tmp77 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp77->value = $tmp76;
frost$core$String$Index $tmp78 = *(&local1);
frost$core$String$Index$wrapper* $tmp79;
$tmp79 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp79->value = $tmp78;
ITable* $tmp80 = ((frost$core$Equatable*) $tmp77)->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[1];
frost$core$Bit $tmp83 = $tmp81(((frost$core$Equatable*) $tmp77), ((frost$core$Equatable*) $tmp79));
bool $tmp84 = $tmp83.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp79)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp77)));
if ($tmp84) goto block2; else goto block3;
block2:;
// line 107
frost$core$String$Index $tmp85 = *(&local0);
frost$json$JSON$PathKey* $tmp86 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp85);
frost$core$Bit $tmp87 = frost$core$Bit$init$builtin_bit($tmp86 != NULL);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp89 = (frost$core$Int64) {107};
frost$core$String* $tmp90 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s91, param1);
frost$core$String* $tmp92 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp90, &$s93);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s94, $tmp89, $tmp92);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// line 108
frost$core$String$Index $tmp95 = *(&local0);
frost$json$JSON$PathKey* $tmp96 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp95);
frost$core$Int64* $tmp97 = &$tmp96->$rawValue;
frost$core$Int64 $tmp98 = *$tmp97;
frost$core$Int64 $tmp99 = (frost$core$Int64) {0};
frost$core$Bit $tmp100 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp98, $tmp99);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block7; else goto block8;
block7:;
frost$core$String** $tmp102 = (frost$core$String**) ($tmp96->$data + 0);
frost$core$String* $tmp103 = *$tmp102;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$String* $tmp104 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local3) = $tmp103;
frost$core$String$Index* $tmp105 = (frost$core$String$Index*) ($tmp96->$data + 8);
frost$core$String$Index $tmp106 = *$tmp105;
*(&local4) = $tmp106;
// line 110
frost$json$JSON* $tmp107 = *(&local2);
frost$core$Int64* $tmp108 = &$tmp107->$rawValue;
frost$core$Int64 $tmp109 = *$tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {4};
frost$core$Bit $tmp111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp109, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block10; else goto block11;
block10:;
frost$collections$MapView** $tmp113 = (frost$collections$MapView**) ($tmp107->$data + 0);
frost$collections$MapView* $tmp114 = *$tmp113;
*(&local5) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$collections$MapView* $tmp115 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local5) = $tmp114;
// line 112
frost$collections$MapView* $tmp116 = *(&local5);
frost$core$String* $tmp117 = *(&local3);
ITable* $tmp118 = $tmp116->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
frost$core$Object* $tmp121 = $tmp119($tmp116, ((frost$core$Object*) $tmp117));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp121)));
frost$json$JSON* $tmp122 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local2) = ((frost$json$JSON*) $tmp121);
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
// line 113
frost$json$JSON* $tmp123 = *(&local2);
frost$core$Bit $tmp124 = frost$core$Bit$init$builtin_bit($tmp123 == NULL);
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block12; else goto block13;
block12:;
// line 114
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$collections$MapView* $tmp126 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local5) = ((frost$collections$MapView*) NULL);
frost$core$String* $tmp127 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$json$JSON* $tmp128 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local2) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block13:;
frost$collections$MapView* $tmp129 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local5) = ((frost$collections$MapView*) NULL);
goto block9;
block11:;
// line 118
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$String* $tmp130 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$json$JSON* $tmp131 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local2) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block9:;
// line 121
frost$core$String$Index $tmp132 = *(&local4);
*(&local0) = $tmp132;
frost$core$String* $tmp133 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block8:;
frost$core$Int64 $tmp134 = (frost$core$Int64) {1};
frost$core$Bit $tmp135 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp98, $tmp134);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block14; else goto block6;
block14:;
frost$core$Int64* $tmp137 = (frost$core$Int64*) ($tmp96->$data + 0);
frost$core$Int64 $tmp138 = *$tmp137;
*(&local6) = $tmp138;
frost$core$String$Index* $tmp139 = (frost$core$String$Index*) ($tmp96->$data + 8);
frost$core$String$Index $tmp140 = *$tmp139;
*(&local7) = $tmp140;
// line 124
frost$json$JSON* $tmp141 = *(&local2);
frost$core$Int64* $tmp142 = &$tmp141->$rawValue;
frost$core$Int64 $tmp143 = *$tmp142;
frost$core$Int64 $tmp144 = (frost$core$Int64) {5};
frost$core$Bit $tmp145 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp143, $tmp144);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block16; else goto block17;
block16:;
frost$collections$ListView** $tmp147 = (frost$collections$ListView**) ($tmp141->$data + 0);
frost$collections$ListView* $tmp148 = *$tmp147;
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$collections$ListView* $tmp149 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local8) = $tmp148;
// line 126
frost$collections$ListView* $tmp150 = *(&local8);
frost$core$Int64 $tmp151 = *(&local6);
ITable* $tmp152 = $tmp150->$class->itable;
while ($tmp152->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp152 = $tmp152->next;
}
$fn154 $tmp153 = $tmp152->methods[0];
frost$core$Object* $tmp155 = $tmp153($tmp150, $tmp151);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp155)));
frost$json$JSON* $tmp156 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local2) = ((frost$json$JSON*) $tmp155);
frost$core$Frost$unref$frost$core$Object$Q($tmp155);
frost$collections$ListView* $tmp157 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local8) = ((frost$collections$ListView*) NULL);
goto block15;
block17:;
// line 129
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$json$JSON* $tmp158 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local2) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block15:;
// line 132
frost$core$String$Index $tmp159 = *(&local7);
*(&local0) = $tmp159;
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
goto block1;
block3:;
// line 136
frost$json$JSON* $tmp160 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$json$JSON* $tmp161 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local2) = ((frost$json$JSON*) NULL);
return $tmp160;

}
frost$core$Int64$nullable frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Int64 local1;
// line 143
$fn163 $tmp162 = ($fn163) param0->$class->vtable[2];
frost$json$JSON* $tmp164 = $tmp162(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$json$JSON* $tmp165 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local0) = $tmp164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
// line 144
frost$json$JSON* $tmp166 = *(&local0);
frost$core$Bit $tmp167 = frost$core$Bit$init$builtin_bit($tmp166 == NULL);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block1; else goto block2;
block1:;
// line 145
frost$json$JSON* $tmp169 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 147
frost$json$JSON* $tmp170 = *(&local0);
frost$core$Int64* $tmp171 = &$tmp170->$rawValue;
frost$core$Int64 $tmp172 = *$tmp171;
frost$core$Int64 $tmp173 = (frost$core$Int64) {0};
frost$core$Bit $tmp174 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp172, $tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block4; else goto block5;
block4:;
frost$core$Int64* $tmp176 = (frost$core$Int64*) ($tmp170->$data + 0);
frost$core$Int64 $tmp177 = *$tmp176;
*(&local1) = $tmp177;
// line 149
frost$core$Int64 $tmp178 = *(&local1);
frost$json$JSON* $tmp179 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { $tmp178, true });
block5:;
// line 152
frost$json$JSON* $tmp180 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
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
$fn182 $tmp181 = ($fn182) param0->$class->vtable[2];
frost$json$JSON* $tmp183 = $tmp181(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$json$JSON* $tmp184 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local0) = $tmp183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// line 162
frost$json$JSON* $tmp185 = *(&local0);
frost$core$Bit $tmp186 = frost$core$Bit$init$builtin_bit($tmp185 == NULL);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block1; else goto block2;
block1:;
// line 163
frost$json$JSON* $tmp188 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block2:;
// line 165
frost$json$JSON* $tmp189 = *(&local0);
frost$core$Int64* $tmp190 = &$tmp189->$rawValue;
frost$core$Int64 $tmp191 = *$tmp190;
frost$core$Int64 $tmp192 = (frost$core$Int64) {1};
frost$core$Bit $tmp193 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp191, $tmp192);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp195 = (frost$core$Real64*) ($tmp189->$data + 0);
frost$core$Real64 $tmp196 = *$tmp195;
*(&local1) = $tmp196;
// line 167
frost$core$Real64 $tmp197 = *(&local1);
frost$json$JSON* $tmp198 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { $tmp197, true });
block5:;
// line 170
frost$json$JSON* $tmp199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
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
$fn201 $tmp200 = ($fn201) param0->$class->vtable[2];
frost$json$JSON* $tmp202 = $tmp200(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$json$JSON* $tmp203 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local0) = $tmp202;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// line 180
frost$json$JSON* $tmp204 = *(&local0);
frost$core$Bit $tmp205 = frost$core$Bit$init$builtin_bit($tmp204 == NULL);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block1; else goto block2;
block1:;
// line 181
frost$json$JSON* $tmp207 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block2:;
// line 183
frost$json$JSON* $tmp208 = *(&local0);
frost$core$Int64* $tmp209 = &$tmp208->$rawValue;
frost$core$Int64 $tmp210 = *$tmp209;
frost$core$Int64 $tmp211 = (frost$core$Int64) {3};
frost$core$Bit $tmp212 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp211);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block4; else goto block5;
block4:;
frost$core$Bit* $tmp214 = (frost$core$Bit*) ($tmp208->$data + 0);
frost$core$Bit $tmp215 = *$tmp214;
*(&local1) = $tmp215;
// line 185
frost$core$Bit $tmp216 = *(&local1);
frost$json$JSON* $tmp217 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { $tmp216, true });
block5:;
// line 188
frost$json$JSON* $tmp218 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
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
$fn220 $tmp219 = ($fn220) param0->$class->vtable[2];
frost$json$JSON* $tmp221 = $tmp219(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$json$JSON* $tmp222 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local0) = $tmp221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// line 198
frost$json$JSON* $tmp223 = *(&local0);
frost$core$Bit $tmp224 = frost$core$Bit$init$builtin_bit($tmp223 == NULL);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block1; else goto block2;
block1:;
// line 199
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp226 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block2:;
// line 201
frost$json$JSON* $tmp227 = *(&local0);
frost$core$Int64* $tmp228 = &$tmp227->$rawValue;
frost$core$Int64 $tmp229 = *$tmp228;
frost$core$Int64 $tmp230 = (frost$core$Int64) {2};
frost$core$Bit $tmp231 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp229, $tmp230);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block4; else goto block5;
block4:;
frost$core$String** $tmp233 = (frost$core$String**) ($tmp227->$data + 0);
frost$core$String* $tmp234 = *$tmp233;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$String* $tmp235 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local1) = $tmp234;
// line 203
frost$core$String* $tmp236 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$String* $tmp237 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local1) = ((frost$core$String*) NULL);
frost$json$JSON* $tmp238 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp236;
block5:;
// line 206
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
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
$fn241 $tmp240 = ($fn241) param0->$class->vtable[2];
frost$json$JSON* $tmp242 = $tmp240(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$json$JSON* $tmp243 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local0) = $tmp242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// line 216
frost$json$JSON* $tmp244 = *(&local0);
frost$core$Bit $tmp245 = frost$core$Bit$init$builtin_bit($tmp244 == NULL);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block1; else goto block2;
block1:;
// line 217
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp247 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block2:;
// line 219
frost$json$JSON* $tmp248 = *(&local0);
frost$core$Int64* $tmp249 = &$tmp248->$rawValue;
frost$core$Int64 $tmp250 = *$tmp249;
frost$core$Int64 $tmp251 = (frost$core$Int64) {5};
frost$core$Bit $tmp252 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp250, $tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block4; else goto block5;
block4:;
frost$collections$ListView** $tmp254 = (frost$collections$ListView**) ($tmp248->$data + 0);
frost$collections$ListView* $tmp255 = *$tmp254;
*(&local1) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$collections$ListView* $tmp256 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local1) = $tmp255;
// line 221
frost$collections$ListView* $tmp257 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$collections$ListView* $tmp258 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local1) = ((frost$collections$ListView*) NULL);
frost$json$JSON* $tmp259 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp257;
block5:;
// line 224
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
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
$fn262 $tmp261 = ($fn262) param0->$class->vtable[2];
frost$json$JSON* $tmp263 = $tmp261(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$json$JSON* $tmp264 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local0) = $tmp263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// line 234
frost$json$JSON* $tmp265 = *(&local0);
frost$core$Bit $tmp266 = frost$core$Bit$init$builtin_bit($tmp265 == NULL);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block1; else goto block2;
block1:;
// line 235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp268 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block2:;
// line 237
frost$json$JSON* $tmp269 = *(&local0);
frost$core$Int64* $tmp270 = &$tmp269->$rawValue;
frost$core$Int64 $tmp271 = *$tmp270;
frost$core$Int64 $tmp272 = (frost$core$Int64) {4};
frost$core$Bit $tmp273 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp271, $tmp272);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block4; else goto block5;
block4:;
frost$collections$MapView** $tmp275 = (frost$collections$MapView**) ($tmp269->$data + 0);
frost$collections$MapView* $tmp276 = *$tmp275;
*(&local1) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$collections$MapView* $tmp277 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local1) = $tmp276;
// line 239
frost$collections$MapView* $tmp278 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$collections$MapView* $tmp279 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local1) = ((frost$collections$MapView*) NULL);
frost$json$JSON* $tmp280 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp278;
block5:;
// line 242
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp281 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block3:;
goto block6;
block6:;

}
frost$core$Int64 frost$json$JSON$asInt$R$frost$core$Int64(frost$json$JSON* param0) {

frost$core$Int64 local0;
// line 251
frost$core$Int64* $tmp282 = &param0->$rawValue;
frost$core$Int64 $tmp283 = *$tmp282;
frost$core$Int64 $tmp284 = (frost$core$Int64) {0};
frost$core$Bit $tmp285 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp283, $tmp284);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp287 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp288 = *$tmp287;
*(&local0) = $tmp288;
// line 253
frost$core$Int64 $tmp289 = *(&local0);
return $tmp289;
block3:;
// line 256
frost$core$Int64 $tmp290 = (frost$core$Int64) {256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s291, $tmp290);
abort(); // unreachable
block1:;
goto block4;
block4:;

}
frost$core$Real64 frost$json$JSON$asReal$R$frost$core$Real64(frost$json$JSON* param0) {

frost$core$Real64 local0;
// line 265
frost$core$Int64* $tmp292 = &param0->$rawValue;
frost$core$Int64 $tmp293 = *$tmp292;
frost$core$Int64 $tmp294 = (frost$core$Int64) {1};
frost$core$Bit $tmp295 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp293, $tmp294);
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block2; else goto block3;
block2:;
frost$core$Real64* $tmp297 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp298 = *$tmp297;
*(&local0) = $tmp298;
// line 267
frost$core$Real64 $tmp299 = *(&local0);
return $tmp299;
block3:;
// line 270
frost$core$Int64 $tmp300 = (frost$core$Int64) {270};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s301, $tmp300);
abort(); // unreachable
block1:;
goto block4;
block4:;

}
frost$core$String* frost$json$JSON$asString$R$frost$core$String(frost$json$JSON* param0) {

frost$core$String* local0 = NULL;
// line 279
frost$core$Int64* $tmp302 = &param0->$rawValue;
frost$core$Int64 $tmp303 = *$tmp302;
frost$core$Int64 $tmp304 = (frost$core$Int64) {2};
frost$core$Bit $tmp305 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp303, $tmp304);
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block2; else goto block3;
block2:;
frost$core$String** $tmp307 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp308 = *$tmp307;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$core$String* $tmp309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local0) = $tmp308;
// line 281
frost$core$String* $tmp310 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
frost$core$String* $tmp311 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local0) = ((frost$core$String*) NULL);
return $tmp310;
block3:;
// line 284
frost$core$Int64 $tmp312 = (frost$core$Int64) {284};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s313, $tmp312);
abort(); // unreachable
block1:;
goto block4;
block4:;

}
frost$core$Bit frost$json$JSON$asBit$R$frost$core$Bit(frost$json$JSON* param0) {

frost$core$Bit local0;
// line 293
frost$core$Int64* $tmp314 = &param0->$rawValue;
frost$core$Int64 $tmp315 = *$tmp314;
frost$core$Int64 $tmp316 = (frost$core$Int64) {3};
frost$core$Bit $tmp317 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp315, $tmp316);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp319 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp320 = *$tmp319;
*(&local0) = $tmp320;
// line 295
frost$core$Bit $tmp321 = *(&local0);
return $tmp321;
block3:;
// line 298
frost$core$Int64 $tmp322 = (frost$core$Int64) {298};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s323, $tmp322);
abort(); // unreachable
block1:;
goto block4;
block4:;

}
frost$collections$MapView* frost$json$JSON$asObject$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$MapView* local0 = NULL;
// line 307
frost$core$Int64* $tmp324 = &param0->$rawValue;
frost$core$Int64 $tmp325 = *$tmp324;
frost$core$Int64 $tmp326 = (frost$core$Int64) {4};
frost$core$Bit $tmp327 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp325, $tmp326);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block2; else goto block3;
block2:;
frost$collections$MapView** $tmp329 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp330 = *$tmp329;
*(&local0) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$collections$MapView* $tmp331 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local0) = $tmp330;
// line 309
frost$collections$MapView* $tmp332 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$collections$MapView* $tmp333 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local0) = ((frost$collections$MapView*) NULL);
return $tmp332;
block3:;
// line 312
frost$core$Int64 $tmp334 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s335, $tmp334);
abort(); // unreachable
block1:;
goto block4;
block4:;

}
frost$collections$ListView* frost$json$JSON$asArray$R$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$ListView* local0 = NULL;
// line 321
frost$core$Int64* $tmp336 = &param0->$rawValue;
frost$core$Int64 $tmp337 = *$tmp336;
frost$core$Int64 $tmp338 = (frost$core$Int64) {5};
frost$core$Bit $tmp339 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp337, $tmp338);
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block2; else goto block3;
block2:;
frost$collections$ListView** $tmp341 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp342 = *$tmp341;
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$collections$ListView* $tmp343 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local0) = $tmp342;
// line 323
frost$collections$ListView* $tmp344 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$collections$ListView* $tmp345 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local0) = ((frost$collections$ListView*) NULL);
return $tmp344;
block3:;
// line 326
frost$core$Int64 $tmp346 = (frost$core$Int64) {326};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s347, $tmp346);
abort(); // unreachable
block1:;
goto block4;
block4:;

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
// line 336
frost$core$Int64* $tmp348 = &param0->$rawValue;
frost$core$Int64 $tmp349 = *$tmp348;
frost$core$Int64 $tmp350 = (frost$core$Int64) {0};
frost$core$Bit $tmp351 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp349, $tmp350);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp353 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp354 = *$tmp353;
*(&local0) = $tmp354;
// line 338
frost$core$Int64 $tmp355 = *(&local0);
frost$core$Int64$wrapper* $tmp356;
$tmp356 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp356->value = $tmp355;
$fn358 $tmp357 = ($fn358) ((frost$core$Object*) $tmp356)->$class->vtable[0];
frost$core$String* $tmp359 = $tmp357(((frost$core$Object*) $tmp356));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
return $tmp359;
block3:;
frost$core$Int64 $tmp360 = (frost$core$Int64) {1};
frost$core$Bit $tmp361 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp349, $tmp360);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp363 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp364 = *$tmp363;
*(&local1) = $tmp364;
// line 341
frost$core$Real64 $tmp365 = *(&local1);
frost$core$Real64$wrapper* $tmp366;
$tmp366 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp366->value = $tmp365;
$fn368 $tmp367 = ($fn368) ((frost$core$Object*) $tmp366)->$class->vtable[0];
frost$core$String* $tmp369 = $tmp367(((frost$core$Object*) $tmp366));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
return $tmp369;
block5:;
frost$core$Int64 $tmp370 = (frost$core$Int64) {2};
frost$core$Bit $tmp371 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp349, $tmp370);
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block6; else goto block7;
block6:;
frost$core$String** $tmp373 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp374 = *$tmp373;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$String* $tmp375 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local2) = $tmp374;
// line 344
frost$core$String* $tmp376 = *(&local2);
frost$core$String* $tmp377 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp376, &$s378);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$String* $tmp379 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local2) = ((frost$core$String*) NULL);
return $tmp377;
block7:;
frost$core$Int64 $tmp380 = (frost$core$Int64) {3};
frost$core$Bit $tmp381 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp349, $tmp380);
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block8; else goto block9;
block8:;
frost$core$Bit* $tmp383 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp384 = *$tmp383;
*(&local3) = $tmp384;
// line 347
frost$core$Bit $tmp385 = *(&local3);
frost$core$Bit$wrapper* $tmp386;
$tmp386 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp386->value = $tmp385;
$fn388 $tmp387 = ($fn388) ((frost$core$Object*) $tmp386)->$class->vtable[0];
frost$core$String* $tmp389 = $tmp387(((frost$core$Object*) $tmp386));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
return $tmp389;
block9:;
frost$core$Int64 $tmp390 = (frost$core$Int64) {4};
frost$core$Bit $tmp391 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp349, $tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block10; else goto block11;
block10:;
frost$collections$MapView** $tmp393 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp394 = *$tmp393;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
frost$collections$MapView* $tmp395 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local4) = $tmp394;
// line 350
frost$core$MutableString* $tmp396 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp396, &$s397);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$MutableString* $tmp398 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local5) = $tmp396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// line 351
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s399));
frost$core$String* $tmp400 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local6) = &$s401;
// line 352
frost$collections$MapView* $tmp402 = *(&local4);
ITable* $tmp403 = $tmp402->$class->itable;
while ($tmp403->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp403 = $tmp403->next;
}
$fn405 $tmp404 = $tmp403->methods[3];
frost$collections$Iterator* $tmp406 = $tmp404($tmp402);
goto block12;
block12:;
ITable* $tmp407 = $tmp406->$class->itable;
while ($tmp407->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp407 = $tmp407->next;
}
$fn409 $tmp408 = $tmp407->methods[0];
frost$core$Bit $tmp410 = $tmp408($tmp406);
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block14; else goto block13;
block13:;
*(&local7) = ((frost$core$String*) NULL);
ITable* $tmp412 = $tmp406->$class->itable;
while ($tmp412->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp412 = $tmp412->next;
}
$fn414 $tmp413 = $tmp412->methods[1];
frost$core$Object* $tmp415 = $tmp413($tmp406);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp415)));
frost$core$String* $tmp416 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local7) = ((frost$core$String*) $tmp415);
// line 353
frost$core$MutableString* $tmp417 = *(&local5);
frost$core$String* $tmp418 = *(&local6);
frost$core$String* $tmp419 = frost$core$String$get_asString$R$frost$core$String($tmp418);
frost$core$String* $tmp420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp419, &$s421);
frost$core$String* $tmp422 = *(&local7);
ITable* $tmp423 = ((frost$core$Formattable*) $tmp422)->$class->itable;
while ($tmp423->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp423 = $tmp423->next;
}
$fn425 $tmp424 = $tmp423->methods[0];
frost$core$String* $tmp426 = $tmp424(((frost$core$Formattable*) $tmp422), &$s427);
frost$core$String* $tmp428 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp420, $tmp426);
frost$core$String* $tmp429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp428, &$s430);
frost$collections$MapView* $tmp431 = *(&local4);
frost$core$String* $tmp432 = *(&local7);
ITable* $tmp433 = $tmp431->$class->itable;
while ($tmp433->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp433 = $tmp433->next;
}
$fn435 $tmp434 = $tmp433->methods[1];
frost$core$Object* $tmp436 = $tmp434($tmp431, ((frost$core$Object*) $tmp432));
frost$core$String* $tmp437 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp429, ((frost$core$Object*) ((frost$json$JSON*) $tmp436)));
frost$core$String* $tmp438 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp437, &$s439);
frost$core$MutableString$append$frost$core$String($tmp417, $tmp438);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q($tmp436);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// line 354
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s440));
frost$core$String* $tmp441 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local6) = &$s442;
frost$core$Frost$unref$frost$core$Object$Q($tmp415);
frost$core$String* $tmp443 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local7) = ((frost$core$String*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// line 356
frost$core$MutableString* $tmp444 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp444, &$s445);
// line 357
frost$core$MutableString* $tmp446 = *(&local5);
frost$core$String* $tmp447 = frost$core$MutableString$finish$R$frost$core$String($tmp446);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$String* $tmp448 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
*(&local6) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp449 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$MapView* $tmp450 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local4) = ((frost$collections$MapView*) NULL);
return $tmp447;
block11:;
frost$core$Int64 $tmp451 = (frost$core$Int64) {5};
frost$core$Bit $tmp452 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp349, $tmp451);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block15; else goto block16;
block15:;
frost$collections$ListView** $tmp454 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp455 = *$tmp454;
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
frost$collections$ListView* $tmp456 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local8) = $tmp455;
// line 360
frost$core$MutableString* $tmp457 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp457, &$s458);
*(&local9) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$MutableString* $tmp459 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local9) = $tmp457;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// line 361
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s460));
frost$core$String* $tmp461 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local10) = &$s462;
// line 362
frost$collections$ListView* $tmp463 = *(&local8);
ITable* $tmp464 = ((frost$collections$Iterable*) $tmp463)->$class->itable;
while ($tmp464->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp464 = $tmp464->next;
}
$fn466 $tmp465 = $tmp464->methods[0];
frost$collections$Iterator* $tmp467 = $tmp465(((frost$collections$Iterable*) $tmp463));
goto block17;
block17:;
ITable* $tmp468 = $tmp467->$class->itable;
while ($tmp468->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp468 = $tmp468->next;
}
$fn470 $tmp469 = $tmp468->methods[0];
frost$core$Bit $tmp471 = $tmp469($tmp467);
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block19; else goto block18;
block18:;
*(&local11) = ((frost$json$JSON*) NULL);
ITable* $tmp473 = $tmp467->$class->itable;
while ($tmp473->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp473 = $tmp473->next;
}
$fn475 $tmp474 = $tmp473->methods[1];
frost$core$Object* $tmp476 = $tmp474($tmp467);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp476)));
frost$json$JSON* $tmp477 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local11) = ((frost$json$JSON*) $tmp476);
// line 363
frost$core$MutableString* $tmp478 = *(&local9);
frost$core$String* $tmp479 = *(&local10);
frost$core$String* $tmp480 = frost$core$String$get_asString$R$frost$core$String($tmp479);
frost$core$String* $tmp481 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp480, &$s482);
frost$json$JSON* $tmp483 = *(&local11);
frost$core$String* $tmp484 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp481, ((frost$core$Object*) $tmp483));
frost$core$String* $tmp485 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp484, &$s486);
frost$core$MutableString$append$frost$core$String($tmp478, $tmp485);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// line 364
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s487));
frost$core$String* $tmp488 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
*(&local10) = &$s489;
frost$core$Frost$unref$frost$core$Object$Q($tmp476);
frost$json$JSON* $tmp490 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local11) = ((frost$json$JSON*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
// line 366
frost$core$MutableString* $tmp491 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp491, &$s492);
// line 367
frost$core$MutableString* $tmp493 = *(&local9);
frost$core$String* $tmp494 = frost$core$MutableString$finish$R$frost$core$String($tmp493);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$String* $tmp495 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
*(&local10) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp496 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local9) = ((frost$core$MutableString*) NULL);
frost$collections$ListView* $tmp497 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local8) = ((frost$collections$ListView*) NULL);
return $tmp494;
block16:;
frost$core$Int64 $tmp498 = (frost$core$Int64) {6};
frost$core$Bit $tmp499 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp349, $tmp498);
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block20; else goto block21;
block20:;
// line 370
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s501));
return &$s502;
block21:;
// line 373
frost$core$Int64 $tmp503 = (frost$core$Int64) {373};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s504, $tmp503);
abort(); // unreachable
block1:;
goto block22;
block22:;

}
void frost$json$JSON$cleanup(frost$json$JSON* param0) {

frost$core$Int64 local0;
frost$core$Real64 local1;
frost$core$String* local2 = NULL;
frost$core$Bit local3;
frost$collections$MapView* local4 = NULL;
frost$collections$ListView* local5 = NULL;
// line 6
frost$core$Int64* $tmp505 = &param0->$rawValue;
frost$core$Int64 $tmp506 = *$tmp505;
frost$core$Int64 $tmp507 = (frost$core$Int64) {0};
frost$core$Bit $tmp508 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp506, $tmp507);
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp510 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp511 = *$tmp510;
*(&local0) = $tmp511;
goto block1;
block3:;
frost$core$Int64 $tmp512 = (frost$core$Int64) {1};
frost$core$Bit $tmp513 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp506, $tmp512);
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp515 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp516 = *$tmp515;
*(&local1) = $tmp516;
goto block1;
block5:;
frost$core$Int64 $tmp517 = (frost$core$Int64) {2};
frost$core$Bit $tmp518 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp506, $tmp517);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block6; else goto block7;
block6:;
frost$core$String** $tmp520 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp521 = *$tmp520;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$core$String* $tmp522 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local2) = $tmp521;
// line 1
frost$core$String* $tmp523 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$core$String* $tmp524 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp525 = (frost$core$Int64) {3};
frost$core$Bit $tmp526 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp506, $tmp525);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block8; else goto block9;
block8:;
frost$core$Bit* $tmp528 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp529 = *$tmp528;
*(&local3) = $tmp529;
goto block1;
block9:;
frost$core$Int64 $tmp530 = (frost$core$Int64) {4};
frost$core$Bit $tmp531 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp506, $tmp530);
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block10; else goto block11;
block10:;
frost$collections$MapView** $tmp533 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp534 = *$tmp533;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$collections$MapView* $tmp535 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local4) = $tmp534;
// line 1
frost$collections$MapView* $tmp536 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$collections$MapView* $tmp537 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local4) = ((frost$collections$MapView*) NULL);
goto block1;
block11:;
frost$core$Int64 $tmp538 = (frost$core$Int64) {5};
frost$core$Bit $tmp539 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp506, $tmp538);
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block12; else goto block13;
block12:;
frost$collections$ListView** $tmp541 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp542 = *$tmp541;
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$collections$ListView* $tmp543 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
*(&local5) = $tmp542;
// line 1
frost$collections$ListView* $tmp544 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
frost$collections$ListView* $tmp545 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local5) = ((frost$collections$ListView*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp546 = (frost$core$Int64) {6};
frost$core$Bit $tmp547 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp506, $tmp546);
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block14; else goto block1;
block14:;
goto block1;
block1:;
// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

// line 6
frost$core$Int64* $tmp549 = &param0->$rawValue;
*$tmp549 = param1;
// line 6
frost$core$Int64* $tmp550 = (frost$core$Int64*) (param0->$data + 0);
*$tmp550 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Real64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Real64 param2) {

// line 6
frost$core$Int64* $tmp551 = &param0->$rawValue;
*$tmp551 = param1;
// line 6
frost$core$Real64* $tmp552 = (frost$core$Real64*) (param0->$data + 0);
*$tmp552 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$String(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$String* param2) {

// line 6
frost$core$Int64* $tmp553 = &param0->$rawValue;
*$tmp553 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp554 = (frost$core$String**) (param0->$data + 0);
*$tmp554 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Bit(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Bit param2) {

// line 6
frost$core$Int64* $tmp555 = &param0->$rawValue;
*$tmp555 = param1;
// line 6
frost$core$Bit* $tmp556 = (frost$core$Bit*) (param0->$data + 0);
*$tmp556 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$MapView* param2) {

// line 6
frost$core$Int64* $tmp557 = &param0->$rawValue;
*$tmp557 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$MapView** $tmp558 = (frost$collections$MapView**) (param0->$data + 0);
*$tmp558 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$ListView* param2) {

// line 6
frost$core$Int64* $tmp559 = &param0->$rawValue;
*$tmp559 = param1;
// line 6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp560 = (frost$collections$ListView**) (param0->$data + 0);
*$tmp560 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1) {

// line 6
frost$core$Int64* $tmp561 = &param0->$rawValue;
*$tmp561 = param1;
return;

}

