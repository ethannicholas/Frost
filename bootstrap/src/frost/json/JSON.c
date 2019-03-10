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
frost$json$JSON$class_type frost$json$JSON$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$json$JSON$get_asString$R$frost$core$String, frost$json$JSON$cleanup, frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q, frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q, frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q, frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q, frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q, frost$json$JSON$getList$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q, frost$json$JSON$getMap$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q, frost$json$JSON$get_asInt$R$frost$core$Int64, frost$json$JSON$get_asReal$R$frost$core$Real64, frost$json$JSON$get_asBit$R$frost$core$Bit, frost$json$JSON$get_asMap$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT, frost$json$JSON$get_asListView$R$frost$collections$ListView$LTfrost$json$JSON$GT} };

typedef frost$core$Bit (*$fn43)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn113)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn157)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$Object* (*$fn197)(frost$collections$ListView*, frost$core$Int64);
typedef frost$json$JSON* (*$fn206)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn228)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn250)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn272)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn296)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn320)(frost$json$JSON*, frost$core$String*);
typedef frost$core$String* (*$fn425)(frost$core$Object*);
typedef frost$core$String* (*$fn438)(frost$core$Object*);
typedef frost$core$String* (*$fn464)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn484)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn488)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn493)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn503)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Object* (*$fn513)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$String* (*$fn516)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn550)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn554)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn559)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn568)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 2387266969933429033, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3632450878405071376, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7d", 2, 559936225143567974, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };

frost$json$JSON$PathKey* frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$Char32 local5;
frost$core$String$Index local6;
frost$core$String$Index local7;
frost$core$Int64$nullable local8;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:51
frost$core$Char32 $tmp2 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, param1);
frost$core$Int32 $tmp3 = (frost$core$Int32) {47u};
frost$core$Char32 $tmp4 = frost$core$Char32$init$frost$core$Int32($tmp3);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:52:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp5 = $tmp2.value;
int32_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:53
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSON.frost:53:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp10 = &param0->_length;
frost$core$Int64 $tmp11 = *$tmp10;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp12 = &(&local1)->value;
*$tmp12 = $tmp11;
frost$core$String$Index $tmp13 = *(&local1);
*(&local0) = $tmp13;
frost$core$String$Index $tmp14 = *(&local0);
*(&local2) = $tmp14;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:54
frost$core$String$Index $tmp15 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local3) = $tmp15;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:55
frost$core$String$Index $tmp16 = *(&local3);
*(&local4) = $tmp16;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:56
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:57
frost$core$String$Index $tmp17 = *(&local4);
frost$core$Char32 $tmp18 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp17);
*(&local5) = $tmp18;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:58
frost$core$Char32 $tmp19 = *(&local5);
frost$core$Int32 $tmp20 = (frost$core$Int32) {47u};
frost$core$Char32 $tmp21 = frost$core$Char32$init$frost$core$Int32($tmp20);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:58:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp30 = $tmp27.value;
int32_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 == $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:59
goto block9;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:61
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:64
frost$core$String$Index $tmp46 = *(&local3);
frost$core$String$Index $tmp47 = *(&local4);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from JSON.frost:64:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:66
frost$core$Int64 $tmp48 = $tmp46.value;
frost$core$Int64 $tmp49 = $tmp47.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
bool $tmp52 = $tmp50 == $tmp51;
frost$core$Bit $tmp53 = (frost$core$Bit) {$tmp52};
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:67
FROST_ASSERT(40 == sizeof(frost$json$JSON$PathKey));
frost$json$JSON$PathKey* $tmp55 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int64 $tmp56 = (frost$core$Int64) {0u};
frost$core$String$Index $tmp57 = *(&local3);
frost$core$String$Index $tmp58 = *(&local4);
frost$core$Bit $tmp59 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp60 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp57, $tmp58, $tmp59);
frost$core$String* $tmp61 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp60);
frost$core$String$Index $tmp62 = *(&local4);
frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$String$frost$core$String$Index($tmp55, $tmp56, $tmp61, $tmp62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
return $tmp55;
block3:;
frost$core$Int32 $tmp63 = (frost$core$Int32) {91u};
frost$core$Char32 $tmp64 = frost$core$Char32$init$frost$core$Int32($tmp63);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:69:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:27
int32_t $tmp65 = $tmp2.value;
int32_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:70
frost$core$String$Index $tmp70 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local6) = $tmp70;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:71
frost$core$String$Index $tmp71 = *(&local6);
*(&local7) = $tmp71;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:72
goto block22;
block22:;
frost$core$String$Index $tmp72 = *(&local7);
frost$core$Char32 $tmp73 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp72);
frost$core$Int32 $tmp74 = (frost$core$Int32) {93u};
frost$core$Char32 $tmp75 = frost$core$Char32$init$frost$core$Int32($tmp74);
// begin inline call to function frost.core.Char32.!=(other:frost.core.Char32):frost.core.Bit from JSON.frost:72:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Char32.frost:32
int32_t $tmp76 = $tmp73.value;
int32_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 != $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:73
frost$core$String$Index $tmp81 = *(&local7);
frost$core$String$Index $tmp82 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp81);
*(&local7) = $tmp82;
goto block22;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:75
frost$core$String$Index $tmp83 = *(&local6);
frost$core$String$Index $tmp84 = *(&local7);
frost$core$Bit $tmp85 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp86 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp83, $tmp84, $tmp85);
frost$core$String* $tmp87 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp86);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int64? from JSON.frost:75:66
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp88 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp87);
*(&local8) = $tmp88;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:76
frost$core$Int64$nullable $tmp89 = *(&local8);
frost$core$Bit $tmp90 = (frost$core$Bit) {!$tmp89.nonnull};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:77
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:79
FROST_ASSERT(40 == sizeof(frost$json$JSON$PathKey));
frost$json$JSON$PathKey* $tmp92 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int64 $tmp93 = (frost$core$Int64) {1u};
frost$core$Int64$nullable $tmp94 = *(&local8);
frost$core$String$Index $tmp95 = *(&local7);
frost$core$String$Index $tmp96 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp95);
frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$Int64$frost$core$String$Index($tmp92, $tmp93, ((frost$core$Int64) $tmp94.value), $tmp96);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
return $tmp92;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:82
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block1:;
goto block29;
block29:;

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
frost$core$Int64 local10;
frost$core$String$Index local11;
frost$collections$ListView* local12 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:102
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSON.frost:102:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int64 $tmp97 = (frost$core$Int64) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp98 = &(&local1)->value;
*$tmp98 = $tmp97;
frost$core$String$Index $tmp99 = *(&local1);
*(&local0) = $tmp99;
frost$core$String$Index $tmp100 = *(&local0);
*(&local2) = $tmp100;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:103
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSON.frost:103:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp101 = &param1->_length;
frost$core$Int64 $tmp102 = *$tmp101;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int64* $tmp103 = &(&local4)->value;
*$tmp103 = $tmp102;
frost$core$String$Index $tmp104 = *(&local4);
*(&local3) = $tmp104;
frost$core$String$Index $tmp105 = *(&local3);
*(&local5) = $tmp105;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:104
*(&local6) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$json$JSON* $tmp106 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local6) = param0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:105
goto block5;
block5:;
frost$core$String$Index $tmp107 = *(&local2);
frost$core$String$Index$wrapper* $tmp108;
$tmp108 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp108->value = $tmp107;
frost$core$String$Index $tmp109 = *(&local5);
frost$core$String$Index$wrapper* $tmp110;
$tmp110 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp110->value = $tmp109;
ITable* $tmp111 = ((frost$core$Equatable*) $tmp108)->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[1];
frost$core$Bit $tmp114 = $tmp112(((frost$core$Equatable*) $tmp108), ((frost$core$Equatable*) $tmp110));
bool $tmp115 = $tmp114.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp110)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp108)));
if ($tmp115) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:106
frost$core$String$Index $tmp116 = *(&local2);
frost$json$JSON$PathKey* $tmp117 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp116);
frost$core$Bit $tmp118 = (frost$core$Bit) {$tmp117 != NULL};
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp120 = (frost$core$Int64) {106u};
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s122, param1);
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp121, &$s124);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s125, $tmp120, $tmp123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:107
frost$core$String$Index $tmp126 = *(&local2);
frost$json$JSON$PathKey* $tmp127 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp126);
frost$core$Int64* $tmp128 = &$tmp127->$rawValue;
frost$core$Int64 $tmp129 = *$tmp128;
frost$core$Int64 $tmp130 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:108:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 == $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block11; else goto block12;
block11:;
frost$core$String** $tmp136 = (frost$core$String**) ($tmp127->$data + 0);
frost$core$String* $tmp137 = *$tmp136;
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$String* $tmp138 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local7) = $tmp137;
frost$core$String$Index* $tmp139 = (frost$core$String$Index*) ($tmp127->$data + 8);
frost$core$String$Index $tmp140 = *$tmp139;
*(&local8) = $tmp140;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:109
frost$json$JSON* $tmp141 = *(&local6);
frost$core$Int64* $tmp142 = &$tmp141->$rawValue;
frost$core$Int64 $tmp143 = *$tmp142;
frost$core$Int64 $tmp144 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:110:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp145 = $tmp143.value;
int64_t $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 == $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block15; else goto block16;
block15:;
frost$collections$MapView** $tmp150 = (frost$collections$MapView**) ($tmp141->$data + 0);
frost$collections$MapView* $tmp151 = *$tmp150;
*(&local9) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$collections$MapView* $tmp152 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local9) = $tmp151;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:111
frost$collections$MapView* $tmp153 = *(&local9);
frost$core$String* $tmp154 = *(&local7);
ITable* $tmp155 = $tmp153->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[1];
frost$core$Object* $tmp158 = $tmp156($tmp153, ((frost$core$Object*) $tmp154));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp158)));
frost$json$JSON* $tmp159 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local6) = ((frost$json$JSON*) $tmp158);
frost$core$Frost$unref$frost$core$Object$Q($tmp158);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:112
frost$json$JSON* $tmp160 = *(&local6);
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160 == NULL};
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:113
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$collections$MapView* $tmp163 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local9) = ((frost$collections$MapView*) NULL);
frost$core$String* $tmp164 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$json$JSON* $tmp165 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block19:;
frost$collections$MapView* $tmp166 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local9) = ((frost$collections$MapView*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:120
frost$core$String$Index $tmp167 = *(&local8);
*(&local2) = $tmp167;
frost$core$String* $tmp168 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local7) = ((frost$core$String*) NULL);
goto block10;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:117
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$String* $tmp169 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$json$JSON* $tmp170 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block12:;
frost$core$Int64 $tmp171 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:122:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp172 = $tmp129.value;
int64_t $tmp173 = $tmp171.value;
bool $tmp174 = $tmp172 == $tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block20; else goto block10;
block20:;
frost$core$Int64* $tmp177 = (frost$core$Int64*) ($tmp127->$data + 0);
frost$core$Int64 $tmp178 = *$tmp177;
*(&local10) = $tmp178;
frost$core$String$Index* $tmp179 = (frost$core$String$Index*) ($tmp127->$data + 8);
frost$core$String$Index $tmp180 = *$tmp179;
*(&local11) = $tmp180;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:123
frost$json$JSON* $tmp181 = *(&local6);
frost$core$Int64* $tmp182 = &$tmp181->$rawValue;
frost$core$Int64 $tmp183 = *$tmp182;
frost$core$Int64 $tmp184 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:124:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp185 = $tmp183.value;
int64_t $tmp186 = $tmp184.value;
bool $tmp187 = $tmp185 == $tmp186;
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block23; else goto block24;
block23:;
frost$collections$ListView** $tmp190 = (frost$collections$ListView**) ($tmp181->$data + 0);
frost$collections$ListView* $tmp191 = *$tmp190;
*(&local12) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$collections$ListView* $tmp192 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local12) = $tmp191;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:125
frost$collections$ListView* $tmp193 = *(&local12);
frost$core$Int64 $tmp194 = *(&local10);
ITable* $tmp195 = $tmp193->$class->itable;
while ($tmp195->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp195 = $tmp195->next;
}
$fn197 $tmp196 = $tmp195->methods[0];
frost$core$Object* $tmp198 = $tmp196($tmp193, $tmp194);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp198)));
frost$json$JSON* $tmp199 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local6) = ((frost$json$JSON*) $tmp198);
frost$core$Frost$unref$frost$core$Object$Q($tmp198);
frost$collections$ListView* $tmp200 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local12) = ((frost$collections$ListView*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:131
frost$core$String$Index $tmp201 = *(&local11);
*(&local2) = $tmp201;
goto block10;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:128
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) NULL)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$json$JSON* $tmp202 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local6) = ((frost$json$JSON*) NULL);
return ((frost$json$JSON*) NULL);
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:135
frost$json$JSON* $tmp203 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$json$JSON* $tmp204 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local6) = ((frost$json$JSON*) NULL);
return $tmp203;

}
frost$core$Int64$nullable frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:142
$fn206 $tmp205 = ($fn206) param0->$class->vtable[2];
frost$json$JSON* $tmp207 = $tmp205(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$json$JSON* $tmp208 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local0) = $tmp207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:143
frost$json$JSON* $tmp209 = *(&local0);
frost$core$Bit $tmp210 = (frost$core$Bit) {$tmp209 == NULL};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:144
frost$json$JSON* $tmp212 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:146
frost$json$JSON* $tmp213 = *(&local0);
frost$core$Int64* $tmp214 = &$tmp213->$rawValue;
frost$core$Int64 $tmp215 = *$tmp214;
frost$core$Int64 $tmp216 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:147:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216.value;
bool $tmp219 = $tmp217 == $tmp218;
frost$core$Bit $tmp220 = (frost$core$Bit) {$tmp219};
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block4; else goto block5;
block4:;
frost$core$Int64* $tmp222 = (frost$core$Int64*) ($tmp213->$data + 0);
frost$core$Int64 $tmp223 = *$tmp222;
*(&local1) = $tmp223;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:148
frost$core$Int64 $tmp224 = *(&local1);
frost$json$JSON* $tmp225 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { $tmp224, true });
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:151
frost$json$JSON* $tmp226 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block3:;
goto block7;
block7:;

}
frost$core$Real64$nullable frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Real64 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:160
$fn228 $tmp227 = ($fn228) param0->$class->vtable[2];
frost$json$JSON* $tmp229 = $tmp227(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$json$JSON* $tmp230 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local0) = $tmp229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:161
frost$json$JSON* $tmp231 = *(&local0);
frost$core$Bit $tmp232 = (frost$core$Bit) {$tmp231 == NULL};
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:162
frost$json$JSON* $tmp234 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:164
frost$json$JSON* $tmp235 = *(&local0);
frost$core$Int64* $tmp236 = &$tmp235->$rawValue;
frost$core$Int64 $tmp237 = *$tmp236;
frost$core$Int64 $tmp238 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:165:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp239 = $tmp237.value;
int64_t $tmp240 = $tmp238.value;
bool $tmp241 = $tmp239 == $tmp240;
frost$core$Bit $tmp242 = (frost$core$Bit) {$tmp241};
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp244 = (frost$core$Real64*) ($tmp235->$data + 0);
frost$core$Real64 $tmp245 = *$tmp244;
*(&local1) = $tmp245;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:166
frost$core$Real64 $tmp246 = *(&local1);
frost$json$JSON* $tmp247 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { $tmp246, true });
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:169
frost$json$JSON* $tmp248 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block3:;
goto block7;
block7:;

}
frost$core$Bit$nullable frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Bit local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:178
$fn250 $tmp249 = ($fn250) param0->$class->vtable[2];
frost$json$JSON* $tmp251 = $tmp249(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$json$JSON* $tmp252 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local0) = $tmp251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:179
frost$json$JSON* $tmp253 = *(&local0);
frost$core$Bit $tmp254 = (frost$core$Bit) {$tmp253 == NULL};
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:180
frost$json$JSON* $tmp256 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:182
frost$json$JSON* $tmp257 = *(&local0);
frost$core$Int64* $tmp258 = &$tmp257->$rawValue;
frost$core$Int64 $tmp259 = *$tmp258;
frost$core$Int64 $tmp260 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:183:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp261 = $tmp259.value;
int64_t $tmp262 = $tmp260.value;
bool $tmp263 = $tmp261 == $tmp262;
frost$core$Bit $tmp264 = (frost$core$Bit) {$tmp263};
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block4; else goto block5;
block4:;
frost$core$Bit* $tmp266 = (frost$core$Bit*) ($tmp257->$data + 0);
frost$core$Bit $tmp267 = *$tmp266;
*(&local1) = $tmp267;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:184
frost$core$Bit $tmp268 = *(&local1);
frost$json$JSON* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { $tmp268, true });
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:187
frost$json$JSON* $tmp270 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block3:;
goto block7;
block7:;

}
frost$core$String* frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$String* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:196
$fn272 $tmp271 = ($fn272) param0->$class->vtable[2];
frost$json$JSON* $tmp273 = $tmp271(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$json$JSON* $tmp274 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local0) = $tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:197
frost$json$JSON* $tmp275 = *(&local0);
frost$core$Bit $tmp276 = (frost$core$Bit) {$tmp275 == NULL};
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:198
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp278 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:200
frost$json$JSON* $tmp279 = *(&local0);
frost$core$Int64* $tmp280 = &$tmp279->$rawValue;
frost$core$Int64 $tmp281 = *$tmp280;
frost$core$Int64 $tmp282 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:201:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp283 = $tmp281.value;
int64_t $tmp284 = $tmp282.value;
bool $tmp285 = $tmp283 == $tmp284;
frost$core$Bit $tmp286 = (frost$core$Bit) {$tmp285};
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block4; else goto block5;
block4:;
frost$core$String** $tmp288 = (frost$core$String**) ($tmp279->$data + 0);
frost$core$String* $tmp289 = *$tmp288;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$String* $tmp290 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local1) = $tmp289;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:202
frost$core$String* $tmp291 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$String* $tmp292 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local1) = ((frost$core$String*) NULL);
frost$json$JSON* $tmp293 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp291;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:205
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp294 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block3:;
goto block7;
block7:;

}
frost$collections$ListView* frost$json$JSON$getList$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$ListView* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:214
$fn296 $tmp295 = ($fn296) param0->$class->vtable[2];
frost$json$JSON* $tmp297 = $tmp295(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$json$JSON* $tmp298 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local0) = $tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:215
frost$json$JSON* $tmp299 = *(&local0);
frost$core$Bit $tmp300 = (frost$core$Bit) {$tmp299 == NULL};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:216
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp302 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:218
frost$json$JSON* $tmp303 = *(&local0);
frost$core$Int64* $tmp304 = &$tmp303->$rawValue;
frost$core$Int64 $tmp305 = *$tmp304;
frost$core$Int64 $tmp306 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:219:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp307 = $tmp305.value;
int64_t $tmp308 = $tmp306.value;
bool $tmp309 = $tmp307 == $tmp308;
frost$core$Bit $tmp310 = (frost$core$Bit) {$tmp309};
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block4; else goto block5;
block4:;
frost$collections$ListView** $tmp312 = (frost$collections$ListView**) ($tmp303->$data + 0);
frost$collections$ListView* $tmp313 = *$tmp312;
*(&local1) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$collections$ListView* $tmp314 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local1) = $tmp313;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:220
frost$collections$ListView* $tmp315 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$collections$ListView* $tmp316 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local1) = ((frost$collections$ListView*) NULL);
frost$json$JSON* $tmp317 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp315;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:223
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp318 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block3:;
goto block7;
block7:;

}
frost$collections$MapView* frost$json$JSON$getMap$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$MapView* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:232
$fn320 $tmp319 = ($fn320) param0->$class->vtable[2];
frost$json$JSON* $tmp321 = $tmp319(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$json$JSON* $tmp322 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local0) = $tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:233
frost$json$JSON* $tmp323 = *(&local0);
frost$core$Bit $tmp324 = (frost$core$Bit) {$tmp323 == NULL};
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:234
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp326 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:236
frost$json$JSON* $tmp327 = *(&local0);
frost$core$Int64* $tmp328 = &$tmp327->$rawValue;
frost$core$Int64 $tmp329 = *$tmp328;
frost$core$Int64 $tmp330 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:237:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp331 = $tmp329.value;
int64_t $tmp332 = $tmp330.value;
bool $tmp333 = $tmp331 == $tmp332;
frost$core$Bit $tmp334 = (frost$core$Bit) {$tmp333};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block4; else goto block5;
block4:;
frost$collections$MapView** $tmp336 = (frost$collections$MapView**) ($tmp327->$data + 0);
frost$collections$MapView* $tmp337 = *$tmp336;
*(&local1) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$collections$MapView* $tmp338 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
*(&local1) = $tmp337;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:238
frost$collections$MapView* $tmp339 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$collections$MapView* $tmp340 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local1) = ((frost$collections$MapView*) NULL);
frost$json$JSON* $tmp341 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp339;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:241
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp342 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block3:;
goto block7;
block7:;

}
frost$core$Int64 frost$json$JSON$get_asInt$R$frost$core$Int64(frost$json$JSON* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:251
frost$core$Int64* $tmp343 = &param0->$rawValue;
frost$core$Int64 $tmp344 = *$tmp343;
frost$core$Int64 $tmp345 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:252:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345.value;
bool $tmp348 = $tmp346 == $tmp347;
frost$core$Bit $tmp349 = (frost$core$Bit) {$tmp348};
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp351 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp352 = *$tmp351;
*(&local0) = $tmp352;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:253
frost$core$Int64 $tmp353 = *(&local0);
return $tmp353;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:256
frost$core$Int64 $tmp354 = (frost$core$Int64) {256u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s355, $tmp354);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$Real64 frost$json$JSON$get_asReal$R$frost$core$Real64(frost$json$JSON* param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:266
frost$core$Int64* $tmp356 = &param0->$rawValue;
frost$core$Int64 $tmp357 = *$tmp356;
frost$core$Int64 $tmp358 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:267:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp359 = $tmp357.value;
int64_t $tmp360 = $tmp358.value;
bool $tmp361 = $tmp359 == $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block2; else goto block3;
block2:;
frost$core$Real64* $tmp364 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp365 = *$tmp364;
*(&local0) = $tmp365;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:268
frost$core$Real64 $tmp366 = *(&local0);
return $tmp366;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:271
frost$core$Int64 $tmp367 = (frost$core$Int64) {271u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s368, $tmp367);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$Bit frost$json$JSON$get_asBit$R$frost$core$Bit(frost$json$JSON* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:281
frost$core$Int64* $tmp369 = &param0->$rawValue;
frost$core$Int64 $tmp370 = *$tmp369;
frost$core$Int64 $tmp371 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:282:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp372 = $tmp370.value;
int64_t $tmp373 = $tmp371.value;
bool $tmp374 = $tmp372 == $tmp373;
frost$core$Bit $tmp375 = (frost$core$Bit) {$tmp374};
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp377 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp378 = *$tmp377;
*(&local0) = $tmp378;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:283
frost$core$Bit $tmp379 = *(&local0);
return $tmp379;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:286
frost$core$Int64 $tmp380 = (frost$core$Int64) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s381, $tmp380);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$collections$MapView* frost$json$JSON$get_asMap$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$MapView* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:296
frost$core$Int64* $tmp382 = &param0->$rawValue;
frost$core$Int64 $tmp383 = *$tmp382;
frost$core$Int64 $tmp384 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:297:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp385 = $tmp383.value;
int64_t $tmp386 = $tmp384.value;
bool $tmp387 = $tmp385 == $tmp386;
frost$core$Bit $tmp388 = (frost$core$Bit) {$tmp387};
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block2; else goto block3;
block2:;
frost$collections$MapView** $tmp390 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp391 = *$tmp390;
*(&local0) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$collections$MapView* $tmp392 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local0) = $tmp391;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:298
frost$collections$MapView* $tmp393 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$collections$MapView* $tmp394 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local0) = ((frost$collections$MapView*) NULL);
return $tmp393;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:301
frost$core$Int64 $tmp395 = (frost$core$Int64) {301u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s396, $tmp395);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$collections$ListView* frost$json$JSON$get_asListView$R$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$ListView* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:311
frost$core$Int64* $tmp397 = &param0->$rawValue;
frost$core$Int64 $tmp398 = *$tmp397;
frost$core$Int64 $tmp399 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:312:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp400 = $tmp398.value;
int64_t $tmp401 = $tmp399.value;
bool $tmp402 = $tmp400 == $tmp401;
frost$core$Bit $tmp403 = (frost$core$Bit) {$tmp402};
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block2; else goto block3;
block2:;
frost$collections$ListView** $tmp405 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp406 = *$tmp405;
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$collections$ListView* $tmp407 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
*(&local0) = $tmp406;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:313
frost$collections$ListView* $tmp408 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$collections$ListView* $tmp409 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local0) = ((frost$collections$ListView*) NULL);
return $tmp408;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:316
frost$core$Int64 $tmp410 = (frost$core$Int64) {316u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s411, $tmp410);
abort(); // unreachable
block1:;
goto block5;
block5:;

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:326
frost$core$Int64* $tmp412 = &param0->$rawValue;
frost$core$Int64 $tmp413 = *$tmp412;
frost$core$Int64 $tmp414 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:327:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp415 = $tmp413.value;
int64_t $tmp416 = $tmp414.value;
bool $tmp417 = $tmp415 == $tmp416;
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417};
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp420 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp421 = *$tmp420;
*(&local0) = $tmp421;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:328
frost$core$Int64 $tmp422 = *(&local0);
frost$core$Int64$wrapper* $tmp423;
$tmp423 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp423->value = $tmp422;
$fn425 $tmp424 = ($fn425) ((frost$core$Object*) $tmp423)->$class->vtable[0];
frost$core$String* $tmp426 = $tmp424(((frost$core$Object*) $tmp423));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
return $tmp426;
block3:;
frost$core$Int64 $tmp427 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:330:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp428 = $tmp413.value;
int64_t $tmp429 = $tmp427.value;
bool $tmp430 = $tmp428 == $tmp429;
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block5; else goto block6;
block5:;
frost$core$Real64* $tmp433 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp434 = *$tmp433;
*(&local1) = $tmp434;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:331
frost$core$Real64 $tmp435 = *(&local1);
frost$core$Real64$wrapper* $tmp436;
$tmp436 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp436->value = $tmp435;
$fn438 $tmp437 = ($fn438) ((frost$core$Object*) $tmp436)->$class->vtable[0];
frost$core$String* $tmp439 = $tmp437(((frost$core$Object*) $tmp436));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
return $tmp439;
block6:;
frost$core$Int64 $tmp440 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:333:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp441 = $tmp413.value;
int64_t $tmp442 = $tmp440.value;
bool $tmp443 = $tmp441 == $tmp442;
frost$core$Bit $tmp444 = (frost$core$Bit) {$tmp443};
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block8; else goto block9;
block8:;
frost$core$String** $tmp446 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp447 = *$tmp446;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$String* $tmp448 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
*(&local2) = $tmp447;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:334
frost$core$String* $tmp449 = *(&local2);
frost$core$String* $tmp450 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp449, &$s451);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$String* $tmp452 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local2) = ((frost$core$String*) NULL);
return $tmp450;
block9:;
frost$core$Int64 $tmp453 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:336:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp454 = $tmp413.value;
int64_t $tmp455 = $tmp453.value;
bool $tmp456 = $tmp454 == $tmp455;
frost$core$Bit $tmp457 = (frost$core$Bit) {$tmp456};
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block11; else goto block12;
block11:;
frost$core$Bit* $tmp459 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp460 = *$tmp459;
*(&local3) = $tmp460;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:337
frost$core$Bit $tmp461 = *(&local3);
frost$core$Bit$wrapper* $tmp462;
$tmp462 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp462->value = $tmp461;
$fn464 $tmp463 = ($fn464) ((frost$core$Object*) $tmp462)->$class->vtable[0];
frost$core$String* $tmp465 = $tmp463(((frost$core$Object*) $tmp462));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
return $tmp465;
block12:;
frost$core$Int64 $tmp466 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:339:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp467 = $tmp413.value;
int64_t $tmp468 = $tmp466.value;
bool $tmp469 = $tmp467 == $tmp468;
frost$core$Bit $tmp470 = (frost$core$Bit) {$tmp469};
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block14; else goto block15;
block14:;
frost$collections$MapView** $tmp472 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp473 = *$tmp472;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$collections$MapView* $tmp474 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local4) = $tmp473;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:340
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp475 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp475, &$s476);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$MutableString* $tmp477 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local5) = $tmp475;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:341
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s478));
frost$core$String* $tmp479 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
*(&local6) = &$s480;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:342
frost$collections$MapView* $tmp481 = *(&local4);
ITable* $tmp482 = $tmp481->$class->itable;
while ($tmp482->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp482 = $tmp482->next;
}
$fn484 $tmp483 = $tmp482->methods[4];
frost$collections$Iterator* $tmp485 = $tmp483($tmp481);
goto block17;
block17:;
ITable* $tmp486 = $tmp485->$class->itable;
while ($tmp486->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp486 = $tmp486->next;
}
$fn488 $tmp487 = $tmp486->methods[0];
frost$core$Bit $tmp489 = $tmp487($tmp485);
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block19; else goto block18;
block18:;
*(&local7) = ((frost$core$String*) NULL);
ITable* $tmp491 = $tmp485->$class->itable;
while ($tmp491->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp491 = $tmp491->next;
}
$fn493 $tmp492 = $tmp491->methods[1];
frost$core$Object* $tmp494 = $tmp492($tmp485);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp494)));
frost$core$String* $tmp495 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
*(&local7) = ((frost$core$String*) $tmp494);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:343
frost$core$MutableString* $tmp496 = *(&local5);
frost$core$String* $tmp497 = *(&local6);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:343:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$String* $tmp498 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp497, &$s499);
frost$core$String* $tmp500 = *(&local7);
ITable* $tmp501 = ((frost$core$Formattable*) $tmp500)->$class->itable;
while ($tmp501->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp501 = $tmp501->next;
}
$fn503 $tmp502 = $tmp501->methods[0];
frost$core$String* $tmp504 = $tmp502(((frost$core$Formattable*) $tmp500), &$s505);
frost$core$String* $tmp506 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp498, $tmp504);
frost$core$String* $tmp507 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp506, &$s508);
frost$collections$MapView* $tmp509 = *(&local4);
frost$core$String* $tmp510 = *(&local7);
ITable* $tmp511 = $tmp509->$class->itable;
while ($tmp511->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp511 = $tmp511->next;
}
$fn513 $tmp512 = $tmp511->methods[1];
frost$core$Object* $tmp514 = $tmp512($tmp509, ((frost$core$Object*) $tmp510));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:343:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn516 $tmp515 = ($fn516) ((frost$core$Object*) ((frost$json$JSON*) $tmp514))->$class->vtable[0];
frost$core$String* $tmp517 = $tmp515(((frost$core$Object*) ((frost$json$JSON*) $tmp514)));
frost$core$String* $tmp518 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp507, $tmp517);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
frost$core$String* $tmp519 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp518, &$s520);
frost$core$MutableString$append$frost$core$String($tmp496, $tmp519);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
frost$core$Frost$unref$frost$core$Object$Q($tmp514);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:344
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s521));
frost$core$String* $tmp522 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local6) = &$s523;
frost$core$Frost$unref$frost$core$Object$Q($tmp494);
frost$core$String* $tmp524 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local7) = ((frost$core$String*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:346
frost$core$MutableString* $tmp525 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp525, &$s526);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:347
frost$core$MutableString* $tmp527 = *(&local5);
frost$core$String* $tmp528 = frost$core$MutableString$finish$R$frost$core$String($tmp527);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$String* $tmp529 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local6) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp530 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$MapView* $tmp531 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local4) = ((frost$collections$MapView*) NULL);
return $tmp528;
block15:;
frost$core$Int64 $tmp532 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:349:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp533 = $tmp413.value;
int64_t $tmp534 = $tmp532.value;
bool $tmp535 = $tmp533 == $tmp534;
frost$core$Bit $tmp536 = (frost$core$Bit) {$tmp535};
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block22; else goto block23;
block22:;
frost$collections$ListView** $tmp538 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp539 = *$tmp538;
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
frost$collections$ListView* $tmp540 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local8) = $tmp539;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:350
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp541 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp541, &$s542);
*(&local9) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
frost$core$MutableString* $tmp543 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
*(&local9) = $tmp541;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:351
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s544));
frost$core$String* $tmp545 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local10) = &$s546;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:352
frost$collections$ListView* $tmp547 = *(&local8);
ITable* $tmp548 = ((frost$collections$Iterable*) $tmp547)->$class->itable;
while ($tmp548->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp548 = $tmp548->next;
}
$fn550 $tmp549 = $tmp548->methods[0];
frost$collections$Iterator* $tmp551 = $tmp549(((frost$collections$Iterable*) $tmp547));
goto block25;
block25:;
ITable* $tmp552 = $tmp551->$class->itable;
while ($tmp552->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp552 = $tmp552->next;
}
$fn554 $tmp553 = $tmp552->methods[0];
frost$core$Bit $tmp555 = $tmp553($tmp551);
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block27; else goto block26;
block26:;
*(&local11) = ((frost$json$JSON*) NULL);
ITable* $tmp557 = $tmp551->$class->itable;
while ($tmp557->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp557 = $tmp557->next;
}
$fn559 $tmp558 = $tmp557->methods[1];
frost$core$Object* $tmp560 = $tmp558($tmp551);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp560)));
frost$json$JSON* $tmp561 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local11) = ((frost$json$JSON*) $tmp560);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:353
frost$core$MutableString* $tmp562 = *(&local9);
frost$core$String* $tmp563 = *(&local10);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
frost$core$String* $tmp564 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp563, &$s565);
frost$json$JSON* $tmp566 = *(&local11);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn568 $tmp567 = ($fn568) ((frost$core$Object*) $tmp566)->$class->vtable[0];
frost$core$String* $tmp569 = $tmp567(((frost$core$Object*) $tmp566));
frost$core$String* $tmp570 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp564, $tmp569);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
frost$core$String* $tmp571 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp570, &$s572);
frost$core$MutableString$append$frost$core$String($tmp562, $tmp571);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:354
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s573));
frost$core$String* $tmp574 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local10) = &$s575;
frost$core$Frost$unref$frost$core$Object$Q($tmp560);
frost$json$JSON* $tmp576 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local11) = ((frost$json$JSON*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:356
frost$core$MutableString* $tmp577 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp577, &$s578);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:357
frost$core$MutableString* $tmp579 = *(&local9);
frost$core$String* $tmp580 = frost$core$MutableString$finish$R$frost$core$String($tmp579);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
frost$core$String* $tmp581 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local10) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp582 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local9) = ((frost$core$MutableString*) NULL);
frost$collections$ListView* $tmp583 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local8) = ((frost$collections$ListView*) NULL);
return $tmp580;
block23:;
frost$core$Int64 $tmp584 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:359:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp585 = $tmp413.value;
int64_t $tmp586 = $tmp584.value;
bool $tmp587 = $tmp585 == $tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:360
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s590));
return &$s591;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:363
frost$core$Int64 $tmp592 = (frost$core$Int64) {363u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s593, $tmp592);
abort(); // unreachable
block1:;
goto block33;
block33:;

}
void frost$json$JSON$cleanup(frost$json$JSON* param0) {

frost$core$Int64 local0;
frost$core$Real64 local1;
frost$core$String* local2 = NULL;
frost$core$Bit local3;
frost$collections$MapView* local4 = NULL;
frost$collections$ListView* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp594 = &param0->$rawValue;
frost$core$Int64 $tmp595 = *$tmp594;
frost$core$Int64 $tmp596 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp597 = $tmp595.value;
int64_t $tmp598 = $tmp596.value;
bool $tmp599 = $tmp597 == $tmp598;
frost$core$Bit $tmp600 = (frost$core$Bit) {$tmp599};
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp602 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp603 = *$tmp602;
*(&local0) = $tmp603;
goto block1;
block3:;
frost$core$Int64 $tmp604 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp605 = $tmp595.value;
int64_t $tmp606 = $tmp604.value;
bool $tmp607 = $tmp605 == $tmp606;
frost$core$Bit $tmp608 = (frost$core$Bit) {$tmp607};
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block5; else goto block6;
block5:;
frost$core$Real64* $tmp610 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp611 = *$tmp610;
*(&local1) = $tmp611;
goto block1;
block6:;
frost$core$Int64 $tmp612 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp613 = $tmp595.value;
int64_t $tmp614 = $tmp612.value;
bool $tmp615 = $tmp613 == $tmp614;
frost$core$Bit $tmp616 = (frost$core$Bit) {$tmp615};
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block8; else goto block9;
block8:;
frost$core$String** $tmp618 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp619 = *$tmp618;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$String* $tmp620 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
*(&local2) = $tmp619;
// <no location>
frost$core$String* $tmp621 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$String* $tmp622 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp623 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp624 = $tmp595.value;
int64_t $tmp625 = $tmp623.value;
bool $tmp626 = $tmp624 == $tmp625;
frost$core$Bit $tmp627 = (frost$core$Bit) {$tmp626};
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block11; else goto block12;
block11:;
frost$core$Bit* $tmp629 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp630 = *$tmp629;
*(&local3) = $tmp630;
goto block1;
block12:;
frost$core$Int64 $tmp631 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp632 = $tmp595.value;
int64_t $tmp633 = $tmp631.value;
bool $tmp634 = $tmp632 == $tmp633;
frost$core$Bit $tmp635 = (frost$core$Bit) {$tmp634};
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block14; else goto block15;
block14:;
frost$collections$MapView** $tmp637 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp638 = *$tmp637;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$collections$MapView* $tmp639 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local4) = $tmp638;
// <no location>
frost$collections$MapView* $tmp640 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$collections$MapView* $tmp641 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local4) = ((frost$collections$MapView*) NULL);
goto block1;
block15:;
frost$core$Int64 $tmp642 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp643 = $tmp595.value;
int64_t $tmp644 = $tmp642.value;
bool $tmp645 = $tmp643 == $tmp644;
frost$core$Bit $tmp646 = (frost$core$Bit) {$tmp645};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block17; else goto block18;
block17:;
frost$collections$ListView** $tmp648 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp649 = *$tmp648;
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$collections$ListView* $tmp650 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local5) = $tmp649;
// <no location>
frost$collections$ListView* $tmp651 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$collections$ListView* $tmp652 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local5) = ((frost$collections$ListView*) NULL);
goto block1;
block18:;
frost$core$Int64 $tmp653 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp654 = $tmp595.value;
int64_t $tmp655 = $tmp653.value;
bool $tmp656 = $tmp654 == $tmp655;
frost$core$Bit $tmp657 = (frost$core$Bit) {$tmp656};
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block20; else goto block1;
block20:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp659 = &param0->$rawValue;
*$tmp659 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp660 = (frost$core$Int64*) (param0->$data + 0);
*$tmp660 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Real64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Real64 param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp661 = &param0->$rawValue;
*$tmp661 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Real64* $tmp662 = (frost$core$Real64*) (param0->$data + 0);
*$tmp662 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$String(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp663 = &param0->$rawValue;
*$tmp663 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp664 = (frost$core$String**) (param0->$data + 0);
*$tmp664 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Bit(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Bit param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp665 = &param0->$rawValue;
*$tmp665 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Bit* $tmp666 = (frost$core$Bit*) (param0->$data + 0);
*$tmp666 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$MapView* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp667 = &param0->$rawValue;
*$tmp667 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$MapView** $tmp668 = (frost$collections$MapView**) (param0->$data + 0);
*$tmp668 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$ListView* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp669 = &param0->$rawValue;
*$tmp669 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp670 = (frost$collections$ListView**) (param0->$data + 0);
*$tmp670 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp671 = &param0->$rawValue;
*$tmp671 = param1;
return;

}

