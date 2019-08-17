#include "frost/json/JSON.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/json/JSON/PathKey.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char32.h"
#include "frost/core/Int.h"
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
frost$json$JSON$class_type frost$json$JSON$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$json$JSON$get_asString$R$frost$core$String, frost$json$JSON$cleanup, frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q, frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q, frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q, frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q, frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q, frost$json$JSON$getList$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q, frost$json$JSON$getMap$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q, frost$json$JSON$get_asInt$R$frost$core$Int64, frost$json$JSON$get_asReal$R$frost$core$Real64, frost$json$JSON$get_asBit$R$frost$core$Bit, frost$json$JSON$get_asMap$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT, frost$json$JSON$get_asListView$R$frost$collections$ListView$LTfrost$json$JSON$GT} };

typedef frost$core$Bit (*$fn43)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn120)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn164)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$Object* (*$fn204)(frost$collections$ListView*, frost$core$Int);
typedef frost$json$JSON* (*$fn213)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn236)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn258)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn280)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn304)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn328)(frost$json$JSON*, frost$core$String*);
typedef frost$core$String* (*$fn434)(frost$core$Object*);
typedef frost$core$String* (*$fn447)(frost$core$Object*);
typedef frost$core$String* (*$fn473)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn493)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn497)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn502)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn512)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Object* (*$fn522)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$String* (*$fn525)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn559)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn563)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn568)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn577)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 2387266969933429033, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3632450878405071376, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7d", 2, 559936225143567974, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s555 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s581 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s599 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };

frost$json$JSON$PathKey* frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$Char32 local5;
frost$core$String$Index local6;
frost$core$String$Index local7;
frost$core$Int$nullable local8;
frost$core$Int64$nullable local9;
frost$core$Int$nullable local10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:51
frost$core$Char32 $tmp2 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, param1);
frost$core$Int32 $tmp3 = (frost$core$Int32) {47u};
frost$core$Char32 $tmp4 = frost$core$Char32$init$frost$core$Int32($tmp3);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:52:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp5 = $tmp2.value;
int32_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:53
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSON.frost:53:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp10 = &param0->_length;
frost$core$Int $tmp11 = *$tmp10;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp12 = &(&local1)->value;
*$tmp12 = $tmp11;
frost$core$String$Index $tmp13 = *(&local1);
*(&local0) = $tmp13;
frost$core$String$Index $tmp14 = *(&local0);
*(&local2) = $tmp14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:54
frost$core$String$Index $tmp15 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local3) = $tmp15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:55
frost$core$String$Index $tmp16 = *(&local3);
*(&local4) = $tmp16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:56
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:57
frost$core$String$Index $tmp17 = *(&local4);
frost$core$Char32 $tmp18 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp17);
*(&local5) = $tmp18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:58
frost$core$Char32 $tmp19 = *(&local5);
frost$core$Int32 $tmp20 = (frost$core$Int32) {47u};
frost$core$Char32 $tmp21 = frost$core$Char32$init$frost$core$Int32($tmp20);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:58:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp22 = $tmp19.value;
int32_t $tmp23 = $tmp21.value;
bool $tmp24 = $tmp22 == $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block10; else goto block12;
block12:;
frost$core$Char32 $tmp27 = *(&local5);
frost$core$Int32 $tmp28 = (frost$core$Int32) {91u};
frost$core$Char32 $tmp29 = frost$core$Char32$init$frost$core$Int32($tmp28);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:58:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp30 = $tmp27.value;
int32_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 == $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:59
goto block9;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:61
frost$core$String$Index $tmp35 = *(&local4);
frost$core$String$Index $tmp36 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp35);
*(&local4) = $tmp36;
frost$core$String$Index $tmp37 = *(&local4);
frost$core$String$Index$wrapper* $tmp38;
$tmp38 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp38->value = $tmp37;
frost$core$String$Index $tmp39 = *(&local2);
frost$core$String$Index$wrapper* $tmp40;
$tmp40 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp40->value = $tmp39;
ITable* $tmp41 = ((frost$core$Equatable*) $tmp38)->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[1];
frost$core$Bit $tmp44 = $tmp42(((frost$core$Equatable*) $tmp38), ((frost$core$Equatable*) $tmp40));
bool $tmp45 = $tmp44.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp40)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp38)));
if ($tmp45) goto block7; else goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:64
frost$core$String$Index $tmp46 = *(&local3);
frost$core$String$Index $tmp47 = *(&local4);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from JSON.frost:64:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
frost$core$Int $tmp48 = $tmp46.value;
frost$core$Int $tmp49 = $tmp47.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
bool $tmp52 = $tmp50 == $tmp51;
frost$core$Bit $tmp53 = (frost$core$Bit) {$tmp52};
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:67
FROST_ASSERT(40 == sizeof(frost$json$JSON$PathKey));
frost$json$JSON$PathKey* $tmp55 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int $tmp56 = (frost$core$Int) {0u};
frost$core$String$Index $tmp57 = *(&local3);
frost$core$String$Index $tmp58 = *(&local4);
frost$core$Bit $tmp59 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp60 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp57, $tmp58, $tmp59);
frost$core$String* $tmp61 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp60);
frost$core$String$Index $tmp62 = *(&local4);
frost$json$JSON$PathKey$init$frost$core$Int$frost$core$String$frost$core$String$Index($tmp55, $tmp56, $tmp61, $tmp62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
return $tmp55;
block3:;
frost$core$Int32 $tmp63 = (frost$core$Int32) {91u};
frost$core$Char32 $tmp64 = frost$core$Char32$init$frost$core$Int32($tmp63);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:69:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp65 = $tmp2.value;
int32_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:70
frost$core$String$Index $tmp70 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local6) = $tmp70;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:71
frost$core$String$Index $tmp71 = *(&local6);
*(&local7) = $tmp71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:72
goto block22;
block22:;
frost$core$String$Index $tmp72 = *(&local7);
frost$core$Char32 $tmp73 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp72);
frost$core$Int32 $tmp74 = (frost$core$Int32) {93u};
frost$core$Char32 $tmp75 = frost$core$Char32$init$frost$core$Int32($tmp74);
// begin inline call to function frost.core.Char32.!=(other:frost.core.Char32):frost.core.Bit from JSON.frost:72:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:32
int32_t $tmp76 = $tmp73.value;
int32_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 != $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:73
frost$core$String$Index $tmp81 = *(&local7);
frost$core$String$Index $tmp82 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp81);
*(&local7) = $tmp82;
goto block22;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:75
frost$core$String$Index $tmp83 = *(&local6);
frost$core$String$Index $tmp84 = *(&local7);
frost$core$Bit $tmp85 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp86 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp83, $tmp84, $tmp85);
frost$core$String* $tmp87 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp86);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from JSON.frost:75:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp88 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp87);
*(&local9) = $tmp88;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp89 = *(&local9);
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89.nonnull};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp92 = *(&local9);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp93 = ((frost$core$Int64) $tmp92.value).value;
frost$core$Int $tmp94 = (frost$core$Int) {((int64_t) $tmp93)};
*(&local8) = ((frost$core$Int$nullable) { $tmp94, true });
goto block26;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local8) = ((frost$core$Int$nullable) { .nonnull = false });
goto block26;
block26:;
frost$core$Int$nullable $tmp95 = *(&local8);
*(&local10) = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:76
frost$core$Int$nullable $tmp96 = *(&local10);
frost$core$Bit $tmp97 = (frost$core$Bit) {!$tmp96.nonnull};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:77
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:79
FROST_ASSERT(40 == sizeof(frost$json$JSON$PathKey));
frost$json$JSON$PathKey* $tmp99 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int $tmp100 = (frost$core$Int) {1u};
frost$core$Int$nullable $tmp101 = *(&local10);
frost$core$String$Index $tmp102 = *(&local7);
frost$core$String$Index $tmp103 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp102);
frost$json$JSON$PathKey$init$frost$core$Int$frost$core$Int$frost$core$String$Index($tmp99, $tmp100, ((frost$core$Int) $tmp101.value), $tmp103);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
return $tmp99;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:82
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block1:;
goto block32;
block32:;

}
frost$json$JSON* frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$json$JSON* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$String$Index local8;
frost$collections$MapView* local9 = NULL;
frost$core$Int local10;
frost$core$String$Index local11;
frost$collections$ListView* local12 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:102
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSON.frost:102:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp104 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp105 = &(&local1)->value;
*$tmp105 = $tmp104;
frost$core$String$Index $tmp106 = *(&local1);
*(&local0) = $tmp106;
frost$core$String$Index $tmp107 = *(&local0);
*(&local2) = $tmp107;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:103
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSON.frost:103:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp108 = &param1->_length;
frost$core$Int $tmp109 = *$tmp108;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
frost$core$Int* $tmp110 = &(&local4)->value;
*$tmp110 = $tmp109;
frost$core$String$Index $tmp111 = *(&local4);
*(&local3) = $tmp111;
frost$core$String$Index $tmp112 = *(&local3);
*(&local5) = $tmp112;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:104
*(&local6) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$json$JSON* $tmp113 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local6) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:105
goto block5;
block5:;
frost$core$String$Index $tmp114 = *(&local2);
frost$core$String$Index$wrapper* $tmp115;
$tmp115 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp115->value = $tmp114;
frost$core$String$Index $tmp116 = *(&local5);
frost$core$String$Index$wrapper* $tmp117;
$tmp117 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp117->value = $tmp116;
ITable* $tmp118 = ((frost$core$Equatable*) $tmp115)->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
frost$core$Bit $tmp121 = $tmp119(((frost$core$Equatable*) $tmp115), ((frost$core$Equatable*) $tmp117));
bool $tmp122 = $tmp121.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp117)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp115)));
if ($tmp122) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:106
frost$core$String$Index $tmp123 = *(&local2);
frost$json$JSON$PathKey* $tmp124 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp123);
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124 != NULL};
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block8; else goto block9;
block9:;
frost$core$Int $tmp127 = (frost$core$Int) {106u};
frost$core$String* $tmp128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s129, param1);
frost$core$String* $tmp130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp128, &$s131);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s132, $tmp127, $tmp130);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:107
frost$core$String$Index $tmp133 = *(&local2);
frost$json$JSON$PathKey* $tmp134 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp133);
frost$core$Int* $tmp135 = &$tmp134->$rawValue;
frost$core$Int $tmp136 = *$tmp135;
frost$core$Int $tmp137 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:108:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137.value;
bool $tmp140 = $tmp138 == $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block11; else goto block12;
block11:;
frost$core$String** $tmp143 = (frost$core$String**) ($tmp134->$data + 0);
frost$core$String* $tmp144 = *$tmp143;
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$String* $tmp145 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local7) = $tmp144;
frost$core$String$Index* $tmp146 = (frost$core$String$Index*) ($tmp134->$data + 8);
frost$core$String$Index $tmp147 = *$tmp146;
*(&local8) = $tmp147;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:109
frost$json$JSON* $tmp148 = *(&local6);
frost$core$Int* $tmp149 = &$tmp148->$rawValue;
frost$core$Int $tmp150 = *$tmp149;
frost$core$Int $tmp151 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:110:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp152 = $tmp150.value;
int64_t $tmp153 = $tmp151.value;
bool $tmp154 = $tmp152 == $tmp153;
frost$core$Bit $tmp155 = (frost$core$Bit) {$tmp154};
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block15; else goto block16;
block15:;
frost$collections$MapView** $tmp157 = (frost$collections$MapView**) ($tmp148->$data + 0);
frost$collections$MapView* $tmp158 = *$tmp157;
*(&local9) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$collections$MapView* $tmp159 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local9) = $tmp158;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:111
frost$collections$MapView* $tmp160 = *(&local9);
frost$core$String* $tmp161 = *(&local7);
ITable* $tmp162 = $tmp160->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[1];
frost$core$Object* $tmp165 = $tmp163($tmp160, ((frost$core$Object*) $tmp161));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp165)));
frost$json$JSON* $tmp166 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local6) = ((frost$json$JSON*) $tmp165);
frost$core$Frost$unref$frost$core$Object$Q($tmp165);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:112
frost$json$JSON* $tmp167 = *(&local6);
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167 == NULL};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:113
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$collections$MapView* $tmp170 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local9) = ((frost$collections$MapView*) NULL);
frost$core$String* $tmp171 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$json$JSON* $tmp172 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block19:;
frost$collections$MapView* $tmp173 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local9) = ((frost$collections$MapView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:120
frost$core$String$Index $tmp174 = *(&local8);
*(&local2) = $tmp174;
frost$core$String* $tmp175 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local7) = ((frost$core$String*) NULL);
goto block10;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:117
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$String* $tmp176 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$json$JSON* $tmp177 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block12:;
frost$core$Int $tmp178 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:122:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp179 = $tmp136.value;
int64_t $tmp180 = $tmp178.value;
bool $tmp181 = $tmp179 == $tmp180;
frost$core$Bit $tmp182 = (frost$core$Bit) {$tmp181};
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block20; else goto block10;
block20:;
frost$core$Int* $tmp184 = (frost$core$Int*) ($tmp134->$data + 0);
frost$core$Int $tmp185 = *$tmp184;
*(&local10) = $tmp185;
frost$core$String$Index* $tmp186 = (frost$core$String$Index*) ($tmp134->$data + 8);
frost$core$String$Index $tmp187 = *$tmp186;
*(&local11) = $tmp187;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:123
frost$json$JSON* $tmp188 = *(&local6);
frost$core$Int* $tmp189 = &$tmp188->$rawValue;
frost$core$Int $tmp190 = *$tmp189;
frost$core$Int $tmp191 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:124:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp192 = $tmp190.value;
int64_t $tmp193 = $tmp191.value;
bool $tmp194 = $tmp192 == $tmp193;
frost$core$Bit $tmp195 = (frost$core$Bit) {$tmp194};
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block23; else goto block24;
block23:;
frost$collections$ListView** $tmp197 = (frost$collections$ListView**) ($tmp188->$data + 0);
frost$collections$ListView* $tmp198 = *$tmp197;
*(&local12) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$collections$ListView* $tmp199 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local12) = $tmp198;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:125
frost$collections$ListView* $tmp200 = *(&local12);
frost$core$Int $tmp201 = *(&local10);
ITable* $tmp202 = $tmp200->$class->itable;
while ($tmp202->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp202 = $tmp202->next;
}
$fn204 $tmp203 = $tmp202->methods[0];
frost$core$Object* $tmp205 = $tmp203($tmp200, $tmp201);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp205)));
frost$json$JSON* $tmp206 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local6) = ((frost$json$JSON*) $tmp205);
frost$core$Frost$unref$frost$core$Object$Q($tmp205);
frost$collections$ListView* $tmp207 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local12) = ((frost$collections$ListView*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:131
frost$core$String$Index $tmp208 = *(&local11);
*(&local2) = $tmp208;
goto block10;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:128
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$json$JSON* $tmp209 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:135
frost$json$JSON* $tmp210 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$json$JSON* $tmp211 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local6) = ((frost$json$JSON*) NULL);
return $tmp210;

}
frost$core$Int64$nullable frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Int local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:142
$fn213 $tmp212 = ($fn213) param0->$class->vtable[2];
frost$json$JSON* $tmp214 = $tmp212(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$json$JSON* $tmp215 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local0) = $tmp214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:143
frost$json$JSON* $tmp216 = *(&local0);
frost$core$Bit $tmp217 = (frost$core$Bit) {$tmp216 == NULL};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:144
frost$json$JSON* $tmp219 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:146
frost$json$JSON* $tmp220 = *(&local0);
frost$core$Int* $tmp221 = &$tmp220->$rawValue;
frost$core$Int $tmp222 = *$tmp221;
frost$core$Int $tmp223 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:147:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223.value;
bool $tmp226 = $tmp224 == $tmp225;
frost$core$Bit $tmp227 = (frost$core$Bit) {$tmp226};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block4; else goto block5;
block4:;
frost$core$Int* $tmp229 = (frost$core$Int*) ($tmp220->$data + 0);
frost$core$Int $tmp230 = *$tmp229;
*(&local1) = $tmp230;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:148
frost$core$Int $tmp231 = *(&local1);
frost$core$Int64 $tmp232 = frost$core$Int64$init$frost$core$Int($tmp231);
frost$json$JSON* $tmp233 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { $tmp232, true });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:151
frost$json$JSON* $tmp234 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block3:;
goto block7;
block7:;

}
frost$core$Real64$nullable frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Real64 local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:160
$fn236 $tmp235 = ($fn236) param0->$class->vtable[2];
frost$json$JSON* $tmp237 = $tmp235(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$json$JSON* $tmp238 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local0) = $tmp237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:161
frost$json$JSON* $tmp239 = *(&local0);
frost$core$Bit $tmp240 = (frost$core$Bit) {$tmp239 == NULL};
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:162
frost$json$JSON* $tmp242 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:164
frost$json$JSON* $tmp243 = *(&local0);
frost$core$Int* $tmp244 = &$tmp243->$rawValue;
frost$core$Int $tmp245 = *$tmp244;
frost$core$Int $tmp246 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:165:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp247 = $tmp245.value;
int64_t $tmp248 = $tmp246.value;
bool $tmp249 = $tmp247 == $tmp248;
frost$core$Bit $tmp250 = (frost$core$Bit) {$tmp249};
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp252 = (frost$core$Real64*) ($tmp243->$data + 0);
frost$core$Real64 $tmp253 = *$tmp252;
*(&local1) = $tmp253;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:166
frost$core$Real64 $tmp254 = *(&local1);
frost$json$JSON* $tmp255 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { $tmp254, true });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:169
frost$json$JSON* $tmp256 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block3:;
goto block7;
block7:;

}
frost$core$Bit$nullable frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:178
$fn258 $tmp257 = ($fn258) param0->$class->vtable[2];
frost$json$JSON* $tmp259 = $tmp257(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$json$JSON* $tmp260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local0) = $tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:179
frost$json$JSON* $tmp261 = *(&local0);
frost$core$Bit $tmp262 = (frost$core$Bit) {$tmp261 == NULL};
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:180
frost$json$JSON* $tmp264 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:182
frost$json$JSON* $tmp265 = *(&local0);
frost$core$Int* $tmp266 = &$tmp265->$rawValue;
frost$core$Int $tmp267 = *$tmp266;
frost$core$Int $tmp268 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:183:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp269 = $tmp267.value;
int64_t $tmp270 = $tmp268.value;
bool $tmp271 = $tmp269 == $tmp270;
frost$core$Bit $tmp272 = (frost$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block4; else goto block5;
block4:;
frost$core$Bit* $tmp274 = (frost$core$Bit*) ($tmp265->$data + 0);
frost$core$Bit $tmp275 = *$tmp274;
*(&local1) = $tmp275;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:184
frost$core$Bit $tmp276 = *(&local1);
frost$json$JSON* $tmp277 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { $tmp276, true });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:187
frost$json$JSON* $tmp278 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block3:;
goto block7;
block7:;

}
frost$core$String* frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$String* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:196
$fn280 $tmp279 = ($fn280) param0->$class->vtable[2];
frost$json$JSON* $tmp281 = $tmp279(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$json$JSON* $tmp282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local0) = $tmp281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:197
frost$json$JSON* $tmp283 = *(&local0);
frost$core$Bit $tmp284 = (frost$core$Bit) {$tmp283 == NULL};
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:198
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp286 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:200
frost$json$JSON* $tmp287 = *(&local0);
frost$core$Int* $tmp288 = &$tmp287->$rawValue;
frost$core$Int $tmp289 = *$tmp288;
frost$core$Int $tmp290 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:201:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp291 = $tmp289.value;
int64_t $tmp292 = $tmp290.value;
bool $tmp293 = $tmp291 == $tmp292;
frost$core$Bit $tmp294 = (frost$core$Bit) {$tmp293};
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block4; else goto block5;
block4:;
frost$core$String** $tmp296 = (frost$core$String**) ($tmp287->$data + 0);
frost$core$String* $tmp297 = *$tmp296;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$String* $tmp298 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local1) = $tmp297;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:202
frost$core$String* $tmp299 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$String* $tmp300 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
*(&local1) = ((frost$core$String*) NULL);
frost$json$JSON* $tmp301 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp299;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:205
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp302 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block3:;
goto block7;
block7:;

}
frost$collections$ListView* frost$json$JSON$getList$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$ListView* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:214
$fn304 $tmp303 = ($fn304) param0->$class->vtable[2];
frost$json$JSON* $tmp305 = $tmp303(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$json$JSON* $tmp306 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local0) = $tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:215
frost$json$JSON* $tmp307 = *(&local0);
frost$core$Bit $tmp308 = (frost$core$Bit) {$tmp307 == NULL};
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:216
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp310 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:218
frost$json$JSON* $tmp311 = *(&local0);
frost$core$Int* $tmp312 = &$tmp311->$rawValue;
frost$core$Int $tmp313 = *$tmp312;
frost$core$Int $tmp314 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:219:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314.value;
bool $tmp317 = $tmp315 == $tmp316;
frost$core$Bit $tmp318 = (frost$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block4; else goto block5;
block4:;
frost$collections$ListView** $tmp320 = (frost$collections$ListView**) ($tmp311->$data + 0);
frost$collections$ListView* $tmp321 = *$tmp320;
*(&local1) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$collections$ListView* $tmp322 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local1) = $tmp321;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:220
frost$collections$ListView* $tmp323 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$collections$ListView* $tmp324 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local1) = ((frost$collections$ListView*) NULL);
frost$json$JSON* $tmp325 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp323;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:223
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp326 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block3:;
goto block7;
block7:;

}
frost$collections$MapView* frost$json$JSON$getMap$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$MapView* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:232
$fn328 $tmp327 = ($fn328) param0->$class->vtable[2];
frost$json$JSON* $tmp329 = $tmp327(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$json$JSON* $tmp330 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local0) = $tmp329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:233
frost$json$JSON* $tmp331 = *(&local0);
frost$core$Bit $tmp332 = (frost$core$Bit) {$tmp331 == NULL};
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:234
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp334 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:236
frost$json$JSON* $tmp335 = *(&local0);
frost$core$Int* $tmp336 = &$tmp335->$rawValue;
frost$core$Int $tmp337 = *$tmp336;
frost$core$Int $tmp338 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:237:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp339 = $tmp337.value;
int64_t $tmp340 = $tmp338.value;
bool $tmp341 = $tmp339 == $tmp340;
frost$core$Bit $tmp342 = (frost$core$Bit) {$tmp341};
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block4; else goto block5;
block4:;
frost$collections$MapView** $tmp344 = (frost$collections$MapView**) ($tmp335->$data + 0);
frost$collections$MapView* $tmp345 = *$tmp344;
*(&local1) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$collections$MapView* $tmp346 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local1) = $tmp345;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:238
frost$collections$MapView* $tmp347 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$collections$MapView* $tmp348 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local1) = ((frost$collections$MapView*) NULL);
frost$json$JSON* $tmp349 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp347;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:241
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp350 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block3:;
goto block7;
block7:;

}
frost$core$Int64 frost$json$JSON$get_asInt$R$frost$core$Int64(frost$json$JSON* param0) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:251
frost$core$Int* $tmp351 = &param0->$rawValue;
frost$core$Int $tmp352 = *$tmp351;
frost$core$Int $tmp353 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:252:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp354 = $tmp352.value;
int64_t $tmp355 = $tmp353.value;
bool $tmp356 = $tmp354 == $tmp355;
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp356};
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block2; else goto block3;
block2:;
frost$core$Int* $tmp359 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp360 = *$tmp359;
*(&local0) = $tmp360;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:253
frost$core$Int $tmp361 = *(&local0);
frost$core$Int64 $tmp362 = frost$core$Int64$init$frost$core$Int($tmp361);
return $tmp362;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:256
frost$core$Int $tmp363 = (frost$core$Int) {256u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s364, $tmp363);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$Real64 frost$json$JSON$get_asReal$R$frost$core$Real64(frost$json$JSON* param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:266
frost$core$Int* $tmp365 = &param0->$rawValue;
frost$core$Int $tmp366 = *$tmp365;
frost$core$Int $tmp367 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:267:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp368 = $tmp366.value;
int64_t $tmp369 = $tmp367.value;
bool $tmp370 = $tmp368 == $tmp369;
frost$core$Bit $tmp371 = (frost$core$Bit) {$tmp370};
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block2; else goto block3;
block2:;
frost$core$Real64* $tmp373 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp374 = *$tmp373;
*(&local0) = $tmp374;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:268
frost$core$Real64 $tmp375 = *(&local0);
return $tmp375;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:271
frost$core$Int $tmp376 = (frost$core$Int) {271u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s377, $tmp376);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$Bit frost$json$JSON$get_asBit$R$frost$core$Bit(frost$json$JSON* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:281
frost$core$Int* $tmp378 = &param0->$rawValue;
frost$core$Int $tmp379 = *$tmp378;
frost$core$Int $tmp380 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:282:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp381 = $tmp379.value;
int64_t $tmp382 = $tmp380.value;
bool $tmp383 = $tmp381 == $tmp382;
frost$core$Bit $tmp384 = (frost$core$Bit) {$tmp383};
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp386 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp387 = *$tmp386;
*(&local0) = $tmp387;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:283
frost$core$Bit $tmp388 = *(&local0);
return $tmp388;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:286
frost$core$Int $tmp389 = (frost$core$Int) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s390, $tmp389);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$collections$MapView* frost$json$JSON$get_asMap$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$MapView* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:296
frost$core$Int* $tmp391 = &param0->$rawValue;
frost$core$Int $tmp392 = *$tmp391;
frost$core$Int $tmp393 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:297:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp394 = $tmp392.value;
int64_t $tmp395 = $tmp393.value;
bool $tmp396 = $tmp394 == $tmp395;
frost$core$Bit $tmp397 = (frost$core$Bit) {$tmp396};
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block2; else goto block3;
block2:;
frost$collections$MapView** $tmp399 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp400 = *$tmp399;
*(&local0) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$collections$MapView* $tmp401 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local0) = $tmp400;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:298
frost$collections$MapView* $tmp402 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$collections$MapView* $tmp403 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local0) = ((frost$collections$MapView*) NULL);
return $tmp402;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:301
frost$core$Int $tmp404 = (frost$core$Int) {301u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s405, $tmp404);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$collections$ListView* frost$json$JSON$get_asListView$R$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$ListView* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:311
frost$core$Int* $tmp406 = &param0->$rawValue;
frost$core$Int $tmp407 = *$tmp406;
frost$core$Int $tmp408 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:312:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp409 = $tmp407.value;
int64_t $tmp410 = $tmp408.value;
bool $tmp411 = $tmp409 == $tmp410;
frost$core$Bit $tmp412 = (frost$core$Bit) {$tmp411};
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block2; else goto block3;
block2:;
frost$collections$ListView** $tmp414 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp415 = *$tmp414;
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$collections$ListView* $tmp416 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local0) = $tmp415;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:313
frost$collections$ListView* $tmp417 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$collections$ListView* $tmp418 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local0) = ((frost$collections$ListView*) NULL);
return $tmp417;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:316
frost$core$Int $tmp419 = (frost$core$Int) {316u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s420, $tmp419);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$String* frost$json$JSON$get_asString$R$frost$core$String(frost$json$JSON* param0) {

frost$core$Int local0;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:326
frost$core$Int* $tmp421 = &param0->$rawValue;
frost$core$Int $tmp422 = *$tmp421;
frost$core$Int $tmp423 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:327:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp424 = $tmp422.value;
int64_t $tmp425 = $tmp423.value;
bool $tmp426 = $tmp424 == $tmp425;
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block2; else goto block3;
block2:;
frost$core$Int* $tmp429 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp430 = *$tmp429;
*(&local0) = $tmp430;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:328
frost$core$Int $tmp431 = *(&local0);
frost$core$Int$wrapper* $tmp432;
$tmp432 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp432->value = $tmp431;
$fn434 $tmp433 = ($fn434) ((frost$core$Object*) $tmp432)->$class->vtable[0];
frost$core$String* $tmp435 = $tmp433(((frost$core$Object*) $tmp432));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
return $tmp435;
block3:;
frost$core$Int $tmp436 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:330:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp437 = $tmp422.value;
int64_t $tmp438 = $tmp436.value;
bool $tmp439 = $tmp437 == $tmp438;
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block5; else goto block6;
block5:;
frost$core$Real64* $tmp442 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp443 = *$tmp442;
*(&local1) = $tmp443;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:331
frost$core$Real64 $tmp444 = *(&local1);
frost$core$Real64$wrapper* $tmp445;
$tmp445 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp445->value = $tmp444;
$fn447 $tmp446 = ($fn447) ((frost$core$Object*) $tmp445)->$class->vtable[0];
frost$core$String* $tmp448 = $tmp446(((frost$core$Object*) $tmp445));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
return $tmp448;
block6:;
frost$core$Int $tmp449 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:333:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp450 = $tmp422.value;
int64_t $tmp451 = $tmp449.value;
bool $tmp452 = $tmp450 == $tmp451;
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block8; else goto block9;
block8:;
frost$core$String** $tmp455 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp456 = *$tmp455;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
frost$core$String* $tmp457 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local2) = $tmp456;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:334
frost$core$String* $tmp458 = *(&local2);
frost$core$String* $tmp459 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp458, &$s460);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$core$String* $tmp461 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local2) = ((frost$core$String*) NULL);
return $tmp459;
block9:;
frost$core$Int $tmp462 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:336:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp463 = $tmp422.value;
int64_t $tmp464 = $tmp462.value;
bool $tmp465 = $tmp463 == $tmp464;
frost$core$Bit $tmp466 = (frost$core$Bit) {$tmp465};
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block11; else goto block12;
block11:;
frost$core$Bit* $tmp468 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp469 = *$tmp468;
*(&local3) = $tmp469;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:337
frost$core$Bit $tmp470 = *(&local3);
frost$core$Bit$wrapper* $tmp471;
$tmp471 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp471->value = $tmp470;
$fn473 $tmp472 = ($fn473) ((frost$core$Object*) $tmp471)->$class->vtable[0];
frost$core$String* $tmp474 = $tmp472(((frost$core$Object*) $tmp471));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
return $tmp474;
block12:;
frost$core$Int $tmp475 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:339:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp476 = $tmp422.value;
int64_t $tmp477 = $tmp475.value;
bool $tmp478 = $tmp476 == $tmp477;
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block14; else goto block15;
block14:;
frost$collections$MapView** $tmp481 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp482 = *$tmp481;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$collections$MapView* $tmp483 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local4) = $tmp482;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:340
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp484 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp484, &$s485);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$core$MutableString* $tmp486 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local5) = $tmp484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:341
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s487));
frost$core$String* $tmp488 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
*(&local6) = &$s489;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:342
frost$collections$MapView* $tmp490 = *(&local4);
ITable* $tmp491 = $tmp490->$class->itable;
while ($tmp491->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp491 = $tmp491->next;
}
$fn493 $tmp492 = $tmp491->methods[4];
frost$collections$Iterator* $tmp494 = $tmp492($tmp490);
goto block17;
block17:;
ITable* $tmp495 = $tmp494->$class->itable;
while ($tmp495->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp495 = $tmp495->next;
}
$fn497 $tmp496 = $tmp495->methods[0];
frost$core$Bit $tmp498 = $tmp496($tmp494);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block19; else goto block18;
block18:;
*(&local7) = ((frost$core$String*) NULL);
ITable* $tmp500 = $tmp494->$class->itable;
while ($tmp500->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp500 = $tmp500->next;
}
$fn502 $tmp501 = $tmp500->methods[1];
frost$core$Object* $tmp503 = $tmp501($tmp494);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp503)));
frost$core$String* $tmp504 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local7) = ((frost$core$String*) $tmp503);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:343
frost$core$MutableString* $tmp505 = *(&local5);
frost$core$String* $tmp506 = *(&local6);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:343:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
frost$core$String* $tmp507 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp506, &$s508);
frost$core$String* $tmp509 = *(&local7);
ITable* $tmp510 = ((frost$core$Formattable*) $tmp509)->$class->itable;
while ($tmp510->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp510 = $tmp510->next;
}
$fn512 $tmp511 = $tmp510->methods[0];
frost$core$String* $tmp513 = $tmp511(((frost$core$Formattable*) $tmp509), &$s514);
frost$core$String* $tmp515 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp507, $tmp513);
frost$core$String* $tmp516 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp515, &$s517);
frost$collections$MapView* $tmp518 = *(&local4);
frost$core$String* $tmp519 = *(&local7);
ITable* $tmp520 = $tmp518->$class->itable;
while ($tmp520->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp520 = $tmp520->next;
}
$fn522 $tmp521 = $tmp520->methods[1];
frost$core$Object* $tmp523 = $tmp521($tmp518, ((frost$core$Object*) $tmp519));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:343:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn525 $tmp524 = ($fn525) ((frost$core$Object*) ((frost$json$JSON*) $tmp523))->$class->vtable[0];
frost$core$String* $tmp526 = $tmp524(((frost$core$Object*) ((frost$json$JSON*) $tmp523)));
frost$core$String* $tmp527 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp516, $tmp526);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$String* $tmp528 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp527, &$s529);
frost$core$MutableString$append$frost$core$String($tmp505, $tmp528);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$core$Frost$unref$frost$core$Object$Q($tmp523);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:344
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s530));
frost$core$String* $tmp531 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local6) = &$s532;
frost$core$Frost$unref$frost$core$Object$Q($tmp503);
frost$core$String* $tmp533 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
*(&local7) = ((frost$core$String*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:346
frost$core$MutableString* $tmp534 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp534, &$s535);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:347
frost$core$MutableString* $tmp536 = *(&local5);
frost$core$String* $tmp537 = frost$core$MutableString$finish$R$frost$core$String($tmp536);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$String* $tmp538 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local6) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp539 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$MapView* $tmp540 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local4) = ((frost$collections$MapView*) NULL);
return $tmp537;
block15:;
frost$core$Int $tmp541 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:349:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp542 = $tmp422.value;
int64_t $tmp543 = $tmp541.value;
bool $tmp544 = $tmp542 == $tmp543;
frost$core$Bit $tmp545 = (frost$core$Bit) {$tmp544};
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block22; else goto block23;
block22:;
frost$collections$ListView** $tmp547 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp548 = *$tmp547;
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$collections$ListView* $tmp549 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
*(&local8) = $tmp548;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:350
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp550 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp550, &$s551);
*(&local9) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$MutableString* $tmp552 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local9) = $tmp550;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:351
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s553));
frost$core$String* $tmp554 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
*(&local10) = &$s555;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:352
frost$collections$ListView* $tmp556 = *(&local8);
ITable* $tmp557 = ((frost$collections$Iterable*) $tmp556)->$class->itable;
while ($tmp557->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp557 = $tmp557->next;
}
$fn559 $tmp558 = $tmp557->methods[0];
frost$collections$Iterator* $tmp560 = $tmp558(((frost$collections$Iterable*) $tmp556));
goto block25;
block25:;
ITable* $tmp561 = $tmp560->$class->itable;
while ($tmp561->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp561 = $tmp561->next;
}
$fn563 $tmp562 = $tmp561->methods[0];
frost$core$Bit $tmp564 = $tmp562($tmp560);
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block27; else goto block26;
block26:;
*(&local11) = ((frost$json$JSON*) NULL);
ITable* $tmp566 = $tmp560->$class->itable;
while ($tmp566->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp566 = $tmp566->next;
}
$fn568 $tmp567 = $tmp566->methods[1];
frost$core$Object* $tmp569 = $tmp567($tmp560);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp569)));
frost$json$JSON* $tmp570 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
*(&local11) = ((frost$json$JSON*) $tmp569);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:353
frost$core$MutableString* $tmp571 = *(&local9);
frost$core$String* $tmp572 = *(&local10);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
frost$core$String* $tmp573 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp572, &$s574);
frost$json$JSON* $tmp575 = *(&local11);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn577 $tmp576 = ($fn577) ((frost$core$Object*) $tmp575)->$class->vtable[0];
frost$core$String* $tmp578 = $tmp576(((frost$core$Object*) $tmp575));
frost$core$String* $tmp579 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp573, $tmp578);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$String* $tmp580 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp579, &$s581);
frost$core$MutableString$append$frost$core$String($tmp571, $tmp580);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:354
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s582));
frost$core$String* $tmp583 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local10) = &$s584;
frost$core$Frost$unref$frost$core$Object$Q($tmp569);
frost$json$JSON* $tmp585 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local11) = ((frost$json$JSON*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:356
frost$core$MutableString* $tmp586 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp586, &$s587);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:357
frost$core$MutableString* $tmp588 = *(&local9);
frost$core$String* $tmp589 = frost$core$MutableString$finish$R$frost$core$String($tmp588);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$core$String* $tmp590 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local10) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp591 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local9) = ((frost$core$MutableString*) NULL);
frost$collections$ListView* $tmp592 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
*(&local8) = ((frost$collections$ListView*) NULL);
return $tmp589;
block23:;
frost$core$Int $tmp593 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:359:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp594 = $tmp422.value;
int64_t $tmp595 = $tmp593.value;
bool $tmp596 = $tmp594 == $tmp595;
frost$core$Bit $tmp597 = (frost$core$Bit) {$tmp596};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:360
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s599));
return &$s600;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:363
frost$core$Int $tmp601 = (frost$core$Int) {363u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s602, $tmp601);
abort(); // unreachable
block1:;
goto block33;
block33:;

}
void frost$json$JSON$cleanup(frost$json$JSON* param0) {

frost$core$Int local0;
frost$core$Real64 local1;
frost$core$String* local2 = NULL;
frost$core$Bit local3;
frost$collections$MapView* local4 = NULL;
frost$collections$ListView* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp603 = &param0->$rawValue;
frost$core$Int $tmp604 = *$tmp603;
frost$core$Int $tmp605 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp606 = $tmp604.value;
int64_t $tmp607 = $tmp605.value;
bool $tmp608 = $tmp606 == $tmp607;
frost$core$Bit $tmp609 = (frost$core$Bit) {$tmp608};
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block2; else goto block3;
block2:;
frost$core$Int* $tmp611 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp612 = *$tmp611;
*(&local0) = $tmp612;
goto block1;
block3:;
frost$core$Int $tmp613 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp614 = $tmp604.value;
int64_t $tmp615 = $tmp613.value;
bool $tmp616 = $tmp614 == $tmp615;
frost$core$Bit $tmp617 = (frost$core$Bit) {$tmp616};
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block5; else goto block6;
block5:;
frost$core$Real64* $tmp619 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp620 = *$tmp619;
*(&local1) = $tmp620;
goto block1;
block6:;
frost$core$Int $tmp621 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp622 = $tmp604.value;
int64_t $tmp623 = $tmp621.value;
bool $tmp624 = $tmp622 == $tmp623;
frost$core$Bit $tmp625 = (frost$core$Bit) {$tmp624};
bool $tmp626 = $tmp625.value;
if ($tmp626) goto block8; else goto block9;
block8:;
frost$core$String** $tmp627 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp628 = *$tmp627;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
frost$core$String* $tmp629 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local2) = $tmp628;
// <no location>
frost$core$String* $tmp630 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$String* $tmp631 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Int $tmp632 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp633 = $tmp604.value;
int64_t $tmp634 = $tmp632.value;
bool $tmp635 = $tmp633 == $tmp634;
frost$core$Bit $tmp636 = (frost$core$Bit) {$tmp635};
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block11; else goto block12;
block11:;
frost$core$Bit* $tmp638 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp639 = *$tmp638;
*(&local3) = $tmp639;
goto block1;
block12:;
frost$core$Int $tmp640 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp641 = $tmp604.value;
int64_t $tmp642 = $tmp640.value;
bool $tmp643 = $tmp641 == $tmp642;
frost$core$Bit $tmp644 = (frost$core$Bit) {$tmp643};
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block14; else goto block15;
block14:;
frost$collections$MapView** $tmp646 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp647 = *$tmp646;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$collections$MapView* $tmp648 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local4) = $tmp647;
// <no location>
frost$collections$MapView* $tmp649 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$collections$MapView* $tmp650 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local4) = ((frost$collections$MapView*) NULL);
goto block1;
block15:;
frost$core$Int $tmp651 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp652 = $tmp604.value;
int64_t $tmp653 = $tmp651.value;
bool $tmp654 = $tmp652 == $tmp653;
frost$core$Bit $tmp655 = (frost$core$Bit) {$tmp654};
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block17; else goto block18;
block17:;
frost$collections$ListView** $tmp657 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp658 = *$tmp657;
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$collections$ListView* $tmp659 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local5) = $tmp658;
// <no location>
frost$collections$ListView* $tmp660 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$collections$ListView* $tmp661 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local5) = ((frost$collections$ListView*) NULL);
goto block1;
block18:;
frost$core$Int $tmp662 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp663 = $tmp604.value;
int64_t $tmp664 = $tmp662.value;
bool $tmp665 = $tmp663 == $tmp664;
frost$core$Bit $tmp666 = (frost$core$Bit) {$tmp665};
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block20; else goto block1;
block20:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$Int(frost$json$JSON* param0, frost$core$Int param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp668 = &param0->$rawValue;
*$tmp668 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp669 = (frost$core$Int*) (param0->$data + 0);
*$tmp669 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$Real64(frost$json$JSON* param0, frost$core$Int param1, frost$core$Real64 param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp670 = &param0->$rawValue;
*$tmp670 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Real64* $tmp671 = (frost$core$Real64*) (param0->$data + 0);
*$tmp671 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$String(frost$json$JSON* param0, frost$core$Int param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp672 = &param0->$rawValue;
*$tmp672 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp673 = (frost$core$String**) (param0->$data + 0);
*$tmp673 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$core$Bit(frost$json$JSON* param0, frost$core$Int param1, frost$core$Bit param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp674 = &param0->$rawValue;
*$tmp674 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Bit* $tmp675 = (frost$core$Bit*) (param0->$data + 0);
*$tmp675 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int param1, frost$collections$MapView* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp676 = &param0->$rawValue;
*$tmp676 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$MapView** $tmp677 = (frost$collections$MapView**) (param0->$data + 0);
*$tmp677 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int param1, frost$collections$ListView* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp678 = &param0->$rawValue;
*$tmp678 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp679 = (frost$collections$ListView**) (param0->$data + 0);
*$tmp679 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int(frost$json$JSON* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int* $tmp680 = &param0->$rawValue;
*$tmp680 = param1;
return;

}

