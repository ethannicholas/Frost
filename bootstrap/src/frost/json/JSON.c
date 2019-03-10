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
typedef frost$json$JSON* (*$fn235)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn257)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn279)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn303)(frost$json$JSON*, frost$core$String*);
typedef frost$json$JSON* (*$fn327)(frost$json$JSON*, frost$core$String*);
typedef frost$core$String* (*$fn432)(frost$core$Object*);
typedef frost$core$String* (*$fn445)(frost$core$Object*);
typedef frost$core$String* (*$fn471)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn491)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn495)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn500)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn510)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Object* (*$fn520)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$String* (*$fn523)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn557)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn561)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn566)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn575)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, 2387266969933429033, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3632450878405071376, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 6009370177714357805, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s533 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7d", 2, 559936225143567974, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s597 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 6601085983368743140, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 6982142459193693139, NULL };

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
frost$core$Int* $tmp10 = &param0->_length;
frost$core$Int $tmp11 = *$tmp10;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp12 = &(&local1)->value;
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
frost$core$Int $tmp48 = $tmp46.value;
frost$core$Int $tmp49 = $tmp47.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
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
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from JSON.frost:75:66
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp88 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp87);
*(&local9) = $tmp88;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp89 = *(&local9);
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89.nonnull};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp92 = *(&local9);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
int64_t $tmp93 = ((frost$core$Int64) $tmp92.value).value;
frost$core$Int $tmp94 = (frost$core$Int) {$tmp93};
*(&local8) = ((frost$core$Int$nullable) { $tmp94, true });
goto block26;
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1458
*(&local8) = ((frost$core$Int$nullable) { .nonnull = false });
goto block26;
block26:;
frost$core$Int$nullable $tmp95 = *(&local8);
*(&local10) = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:76
frost$core$Int$nullable $tmp96 = *(&local10);
frost$core$Bit $tmp97 = (frost$core$Bit) {!$tmp96.nonnull};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:77
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:79
FROST_ASSERT(40 == sizeof(frost$json$JSON$PathKey));
frost$json$JSON$PathKey* $tmp99 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int64 $tmp100 = (frost$core$Int64) {1u};
frost$core$Int$nullable $tmp101 = *(&local10);
frost$core$String$Index $tmp102 = *(&local7);
frost$core$String$Index $tmp103 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp102);
frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$Int$frost$core$String$Index($tmp99, $tmp100, ((frost$core$Int) $tmp101.value), $tmp103);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
return $tmp99;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:82
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:102
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSON.frost:102:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1205
frost$core$Int $tmp104 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp105 = &(&local1)->value;
*$tmp105 = $tmp104;
frost$core$String$Index $tmp106 = *(&local1);
*(&local0) = $tmp106;
frost$core$String$Index $tmp107 = *(&local0);
*(&local2) = $tmp107;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:103
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSON.frost:103:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int* $tmp108 = &param1->_length;
frost$core$Int $tmp109 = *$tmp108;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:61
frost$core$Int* $tmp110 = &(&local4)->value;
*$tmp110 = $tmp109;
frost$core$String$Index $tmp111 = *(&local4);
*(&local3) = $tmp111;
frost$core$String$Index $tmp112 = *(&local3);
*(&local5) = $tmp112;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:104
*(&local6) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$json$JSON* $tmp113 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local6) = param0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:105
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:106
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:107
frost$core$String$Index $tmp133 = *(&local2);
frost$json$JSON$PathKey* $tmp134 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp133);
frost$core$Int64* $tmp135 = &$tmp134->$rawValue;
frost$core$Int64 $tmp136 = *$tmp135;
frost$core$Int64 $tmp137 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:108:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:109
frost$json$JSON* $tmp148 = *(&local6);
frost$core$Int64* $tmp149 = &$tmp148->$rawValue;
frost$core$Int64 $tmp150 = *$tmp149;
frost$core$Int64 $tmp151 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:110:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:111
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:112
frost$json$JSON* $tmp167 = *(&local6);
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167 == NULL};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:113
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:120
frost$core$String$Index $tmp174 = *(&local8);
*(&local2) = $tmp174;
frost$core$String* $tmp175 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local7) = ((frost$core$String*) NULL);
goto block10;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:117
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
frost$core$Int64 $tmp178 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:122:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:123
frost$json$JSON* $tmp188 = *(&local6);
frost$core$Int64* $tmp189 = &$tmp188->$rawValue;
frost$core$Int64 $tmp190 = *$tmp189;
frost$core$Int64 $tmp191 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:124:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:125
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:131
frost$core$String$Index $tmp208 = *(&local11);
*(&local2) = $tmp208;
goto block10;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:128
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:135
frost$json$JSON* $tmp210 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$json$JSON* $tmp211 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local6) = ((frost$json$JSON*) NULL);
return $tmp210;

}
frost$core$Int64$nullable frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$core$Int64 local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:142
$fn213 $tmp212 = ($fn213) param0->$class->vtable[2];
frost$json$JSON* $tmp214 = $tmp212(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$json$JSON* $tmp215 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local0) = $tmp214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:143
frost$json$JSON* $tmp216 = *(&local0);
frost$core$Bit $tmp217 = (frost$core$Bit) {$tmp216 == NULL};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:144
frost$json$JSON* $tmp219 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:146
frost$json$JSON* $tmp220 = *(&local0);
frost$core$Int64* $tmp221 = &$tmp220->$rawValue;
frost$core$Int64 $tmp222 = *$tmp221;
frost$core$Int64 $tmp223 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:147:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223.value;
bool $tmp226 = $tmp224 == $tmp225;
frost$core$Bit $tmp227 = (frost$core$Bit) {$tmp226};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block4; else goto block5;
block4:;
frost$core$Int64* $tmp229 = (frost$core$Int64*) ($tmp220->$data + 0);
frost$core$Int64 $tmp230 = *$tmp229;
*(&local1) = $tmp230;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:148
frost$core$Int64 $tmp231 = *(&local1);
frost$json$JSON* $tmp232 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { $tmp231, true });
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:151
frost$json$JSON* $tmp233 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
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
$fn235 $tmp234 = ($fn235) param0->$class->vtable[2];
frost$json$JSON* $tmp236 = $tmp234(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$json$JSON* $tmp237 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local0) = $tmp236;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:161
frost$json$JSON* $tmp238 = *(&local0);
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238 == NULL};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:162
frost$json$JSON* $tmp241 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:164
frost$json$JSON* $tmp242 = *(&local0);
frost$core$Int64* $tmp243 = &$tmp242->$rawValue;
frost$core$Int64 $tmp244 = *$tmp243;
frost$core$Int64 $tmp245 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:165:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp246 = $tmp244.value;
int64_t $tmp247 = $tmp245.value;
bool $tmp248 = $tmp246 == $tmp247;
frost$core$Bit $tmp249 = (frost$core$Bit) {$tmp248};
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp251 = (frost$core$Real64*) ($tmp242->$data + 0);
frost$core$Real64 $tmp252 = *$tmp251;
*(&local1) = $tmp252;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:166
frost$core$Real64 $tmp253 = *(&local1);
frost$json$JSON* $tmp254 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { $tmp253, true });
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:169
frost$json$JSON* $tmp255 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
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
$fn257 $tmp256 = ($fn257) param0->$class->vtable[2];
frost$json$JSON* $tmp258 = $tmp256(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$json$JSON* $tmp259 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local0) = $tmp258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:179
frost$json$JSON* $tmp260 = *(&local0);
frost$core$Bit $tmp261 = (frost$core$Bit) {$tmp260 == NULL};
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:180
frost$json$JSON* $tmp263 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:182
frost$json$JSON* $tmp264 = *(&local0);
frost$core$Int64* $tmp265 = &$tmp264->$rawValue;
frost$core$Int64 $tmp266 = *$tmp265;
frost$core$Int64 $tmp267 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:183:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp268 = $tmp266.value;
int64_t $tmp269 = $tmp267.value;
bool $tmp270 = $tmp268 == $tmp269;
frost$core$Bit $tmp271 = (frost$core$Bit) {$tmp270};
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block4; else goto block5;
block4:;
frost$core$Bit* $tmp273 = (frost$core$Bit*) ($tmp264->$data + 0);
frost$core$Bit $tmp274 = *$tmp273;
*(&local1) = $tmp274;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:184
frost$core$Bit $tmp275 = *(&local1);
frost$json$JSON* $tmp276 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { $tmp275, true });
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:187
frost$json$JSON* $tmp277 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
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
$fn279 $tmp278 = ($fn279) param0->$class->vtable[2];
frost$json$JSON* $tmp280 = $tmp278(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$json$JSON* $tmp281 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local0) = $tmp280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:197
frost$json$JSON* $tmp282 = *(&local0);
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282 == NULL};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:198
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp285 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:200
frost$json$JSON* $tmp286 = *(&local0);
frost$core$Int64* $tmp287 = &$tmp286->$rawValue;
frost$core$Int64 $tmp288 = *$tmp287;
frost$core$Int64 $tmp289 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:201:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp290 = $tmp288.value;
int64_t $tmp291 = $tmp289.value;
bool $tmp292 = $tmp290 == $tmp291;
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292};
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block4; else goto block5;
block4:;
frost$core$String** $tmp295 = (frost$core$String**) ($tmp286->$data + 0);
frost$core$String* $tmp296 = *$tmp295;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$String* $tmp297 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local1) = $tmp296;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:202
frost$core$String* $tmp298 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$String* $tmp299 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local1) = ((frost$core$String*) NULL);
frost$json$JSON* $tmp300 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp298;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:205
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp301 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
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
$fn303 $tmp302 = ($fn303) param0->$class->vtable[2];
frost$json$JSON* $tmp304 = $tmp302(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$json$JSON* $tmp305 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local0) = $tmp304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:215
frost$json$JSON* $tmp306 = *(&local0);
frost$core$Bit $tmp307 = (frost$core$Bit) {$tmp306 == NULL};
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:216
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:218
frost$json$JSON* $tmp310 = *(&local0);
frost$core$Int64* $tmp311 = &$tmp310->$rawValue;
frost$core$Int64 $tmp312 = *$tmp311;
frost$core$Int64 $tmp313 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:219:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp314 = $tmp312.value;
int64_t $tmp315 = $tmp313.value;
bool $tmp316 = $tmp314 == $tmp315;
frost$core$Bit $tmp317 = (frost$core$Bit) {$tmp316};
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block4; else goto block5;
block4:;
frost$collections$ListView** $tmp319 = (frost$collections$ListView**) ($tmp310->$data + 0);
frost$collections$ListView* $tmp320 = *$tmp319;
*(&local1) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$collections$ListView* $tmp321 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local1) = $tmp320;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:220
frost$collections$ListView* $tmp322 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$collections$ListView* $tmp323 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local1) = ((frost$collections$ListView*) NULL);
frost$json$JSON* $tmp324 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp322;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:223
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp325 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
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
$fn327 $tmp326 = ($fn327) param0->$class->vtable[2];
frost$json$JSON* $tmp328 = $tmp326(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$json$JSON* $tmp329 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local0) = $tmp328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:233
frost$json$JSON* $tmp330 = *(&local0);
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330 == NULL};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:234
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp333 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:236
frost$json$JSON* $tmp334 = *(&local0);
frost$core$Int64* $tmp335 = &$tmp334->$rawValue;
frost$core$Int64 $tmp336 = *$tmp335;
frost$core$Int64 $tmp337 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:237:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp338 = $tmp336.value;
int64_t $tmp339 = $tmp337.value;
bool $tmp340 = $tmp338 == $tmp339;
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340};
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block4; else goto block5;
block4:;
frost$collections$MapView** $tmp343 = (frost$collections$MapView**) ($tmp334->$data + 0);
frost$collections$MapView* $tmp344 = *$tmp343;
*(&local1) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$collections$MapView* $tmp345 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local1) = $tmp344;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:238
frost$collections$MapView* $tmp346 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$collections$MapView* $tmp347 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local1) = ((frost$collections$MapView*) NULL);
frost$json$JSON* $tmp348 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local0) = ((frost$json$JSON*) NULL);
return $tmp346;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:241
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp349 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block3:;
goto block7;
block7:;

}
frost$core$Int64 frost$json$JSON$get_asInt$R$frost$core$Int64(frost$json$JSON* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:251
frost$core$Int64* $tmp350 = &param0->$rawValue;
frost$core$Int64 $tmp351 = *$tmp350;
frost$core$Int64 $tmp352 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:252:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp353 = $tmp351.value;
int64_t $tmp354 = $tmp352.value;
bool $tmp355 = $tmp353 == $tmp354;
frost$core$Bit $tmp356 = (frost$core$Bit) {$tmp355};
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp358 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp359 = *$tmp358;
*(&local0) = $tmp359;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:253
frost$core$Int64 $tmp360 = *(&local0);
return $tmp360;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:256
frost$core$Int $tmp361 = (frost$core$Int) {256u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s362, $tmp361);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$Real64 frost$json$JSON$get_asReal$R$frost$core$Real64(frost$json$JSON* param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:266
frost$core$Int64* $tmp363 = &param0->$rawValue;
frost$core$Int64 $tmp364 = *$tmp363;
frost$core$Int64 $tmp365 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:267:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365.value;
bool $tmp368 = $tmp366 == $tmp367;
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block2; else goto block3;
block2:;
frost$core$Real64* $tmp371 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp372 = *$tmp371;
*(&local0) = $tmp372;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:268
frost$core$Real64 $tmp373 = *(&local0);
return $tmp373;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:271
frost$core$Int $tmp374 = (frost$core$Int) {271u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s375, $tmp374);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$Bit frost$json$JSON$get_asBit$R$frost$core$Bit(frost$json$JSON* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:281
frost$core$Int64* $tmp376 = &param0->$rawValue;
frost$core$Int64 $tmp377 = *$tmp376;
frost$core$Int64 $tmp378 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:282:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378.value;
bool $tmp381 = $tmp379 == $tmp380;
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp384 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp385 = *$tmp384;
*(&local0) = $tmp385;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:283
frost$core$Bit $tmp386 = *(&local0);
return $tmp386;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:286
frost$core$Int $tmp387 = (frost$core$Int) {286u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s388, $tmp387);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$collections$MapView* frost$json$JSON$get_asMap$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$MapView* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:296
frost$core$Int64* $tmp389 = &param0->$rawValue;
frost$core$Int64 $tmp390 = *$tmp389;
frost$core$Int64 $tmp391 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:297:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp392 = $tmp390.value;
int64_t $tmp393 = $tmp391.value;
bool $tmp394 = $tmp392 == $tmp393;
frost$core$Bit $tmp395 = (frost$core$Bit) {$tmp394};
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block2; else goto block3;
block2:;
frost$collections$MapView** $tmp397 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp398 = *$tmp397;
*(&local0) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$collections$MapView* $tmp399 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local0) = $tmp398;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:298
frost$collections$MapView* $tmp400 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$collections$MapView* $tmp401 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local0) = ((frost$collections$MapView*) NULL);
return $tmp400;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:301
frost$core$Int $tmp402 = (frost$core$Int) {301u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s403, $tmp402);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$collections$ListView* frost$json$JSON$get_asListView$R$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$ListView* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:311
frost$core$Int64* $tmp404 = &param0->$rawValue;
frost$core$Int64 $tmp405 = *$tmp404;
frost$core$Int64 $tmp406 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:312:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp407 = $tmp405.value;
int64_t $tmp408 = $tmp406.value;
bool $tmp409 = $tmp407 == $tmp408;
frost$core$Bit $tmp410 = (frost$core$Bit) {$tmp409};
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block2; else goto block3;
block2:;
frost$collections$ListView** $tmp412 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp413 = *$tmp412;
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$collections$ListView* $tmp414 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local0) = $tmp413;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:313
frost$collections$ListView* $tmp415 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$collections$ListView* $tmp416 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local0) = ((frost$collections$ListView*) NULL);
return $tmp415;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:316
frost$core$Int $tmp417 = (frost$core$Int) {316u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s418, $tmp417);
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
frost$core$Int64* $tmp419 = &param0->$rawValue;
frost$core$Int64 $tmp420 = *$tmp419;
frost$core$Int64 $tmp421 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:327:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp422 = $tmp420.value;
int64_t $tmp423 = $tmp421.value;
bool $tmp424 = $tmp422 == $tmp423;
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp427 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp428 = *$tmp427;
*(&local0) = $tmp428;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:328
frost$core$Int64 $tmp429 = *(&local0);
frost$core$Int64$wrapper* $tmp430;
$tmp430 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp430->value = $tmp429;
$fn432 $tmp431 = ($fn432) ((frost$core$Object*) $tmp430)->$class->vtable[0];
frost$core$String* $tmp433 = $tmp431(((frost$core$Object*) $tmp430));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
return $tmp433;
block3:;
frost$core$Int64 $tmp434 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:330:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp435 = $tmp420.value;
int64_t $tmp436 = $tmp434.value;
bool $tmp437 = $tmp435 == $tmp436;
frost$core$Bit $tmp438 = (frost$core$Bit) {$tmp437};
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block5; else goto block6;
block5:;
frost$core$Real64* $tmp440 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp441 = *$tmp440;
*(&local1) = $tmp441;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:331
frost$core$Real64 $tmp442 = *(&local1);
frost$core$Real64$wrapper* $tmp443;
$tmp443 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp443->value = $tmp442;
$fn445 $tmp444 = ($fn445) ((frost$core$Object*) $tmp443)->$class->vtable[0];
frost$core$String* $tmp446 = $tmp444(((frost$core$Object*) $tmp443));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
return $tmp446;
block6:;
frost$core$Int64 $tmp447 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:333:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp448 = $tmp420.value;
int64_t $tmp449 = $tmp447.value;
bool $tmp450 = $tmp448 == $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block8; else goto block9;
block8:;
frost$core$String** $tmp453 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp454 = *$tmp453;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$String* $tmp455 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local2) = $tmp454;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:334
frost$core$String* $tmp456 = *(&local2);
frost$core$String* $tmp457 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp456, &$s458);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$String* $tmp459 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local2) = ((frost$core$String*) NULL);
return $tmp457;
block9:;
frost$core$Int64 $tmp460 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:336:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp461 = $tmp420.value;
int64_t $tmp462 = $tmp460.value;
bool $tmp463 = $tmp461 == $tmp462;
frost$core$Bit $tmp464 = (frost$core$Bit) {$tmp463};
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block11; else goto block12;
block11:;
frost$core$Bit* $tmp466 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp467 = *$tmp466;
*(&local3) = $tmp467;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:337
frost$core$Bit $tmp468 = *(&local3);
frost$core$Bit$wrapper* $tmp469;
$tmp469 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp469->value = $tmp468;
$fn471 $tmp470 = ($fn471) ((frost$core$Object*) $tmp469)->$class->vtable[0];
frost$core$String* $tmp472 = $tmp470(((frost$core$Object*) $tmp469));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
return $tmp472;
block12:;
frost$core$Int64 $tmp473 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:339:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp474 = $tmp420.value;
int64_t $tmp475 = $tmp473.value;
bool $tmp476 = $tmp474 == $tmp475;
frost$core$Bit $tmp477 = (frost$core$Bit) {$tmp476};
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block14; else goto block15;
block14:;
frost$collections$MapView** $tmp479 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp480 = *$tmp479;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$collections$MapView* $tmp481 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
*(&local4) = $tmp480;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:340
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp482 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp482, &$s483);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$core$MutableString* $tmp484 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local5) = $tmp482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:341
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s485));
frost$core$String* $tmp486 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local6) = &$s487;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:342
frost$collections$MapView* $tmp488 = *(&local4);
ITable* $tmp489 = $tmp488->$class->itable;
while ($tmp489->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp489 = $tmp489->next;
}
$fn491 $tmp490 = $tmp489->methods[4];
frost$collections$Iterator* $tmp492 = $tmp490($tmp488);
goto block17;
block17:;
ITable* $tmp493 = $tmp492->$class->itable;
while ($tmp493->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp493 = $tmp493->next;
}
$fn495 $tmp494 = $tmp493->methods[0];
frost$core$Bit $tmp496 = $tmp494($tmp492);
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block19; else goto block18;
block18:;
*(&local7) = ((frost$core$String*) NULL);
ITable* $tmp498 = $tmp492->$class->itable;
while ($tmp498->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp498 = $tmp498->next;
}
$fn500 $tmp499 = $tmp498->methods[1];
frost$core$Object* $tmp501 = $tmp499($tmp492);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp501)));
frost$core$String* $tmp502 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local7) = ((frost$core$String*) $tmp501);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:343
frost$core$MutableString* $tmp503 = *(&local5);
frost$core$String* $tmp504 = *(&local6);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:343:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$String* $tmp505 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp504, &$s506);
frost$core$String* $tmp507 = *(&local7);
ITable* $tmp508 = ((frost$core$Formattable*) $tmp507)->$class->itable;
while ($tmp508->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp508 = $tmp508->next;
}
$fn510 $tmp509 = $tmp508->methods[0];
frost$core$String* $tmp511 = $tmp509(((frost$core$Formattable*) $tmp507), &$s512);
frost$core$String* $tmp513 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp505, $tmp511);
frost$core$String* $tmp514 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp513, &$s515);
frost$collections$MapView* $tmp516 = *(&local4);
frost$core$String* $tmp517 = *(&local7);
ITable* $tmp518 = $tmp516->$class->itable;
while ($tmp518->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp518 = $tmp518->next;
}
$fn520 $tmp519 = $tmp518->methods[1];
frost$core$Object* $tmp521 = $tmp519($tmp516, ((frost$core$Object*) $tmp517));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:343:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn523 $tmp522 = ($fn523) ((frost$core$Object*) ((frost$json$JSON*) $tmp521))->$class->vtable[0];
frost$core$String* $tmp524 = $tmp522(((frost$core$Object*) ((frost$json$JSON*) $tmp521)));
frost$core$String* $tmp525 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp514, $tmp524);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$String* $tmp526 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp525, &$s527);
frost$core$MutableString$append$frost$core$String($tmp503, $tmp526);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
frost$core$Frost$unref$frost$core$Object$Q($tmp521);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:344
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s528));
frost$core$String* $tmp529 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local6) = &$s530;
frost$core$Frost$unref$frost$core$Object$Q($tmp501);
frost$core$String* $tmp531 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local7) = ((frost$core$String*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:346
frost$core$MutableString* $tmp532 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp532, &$s533);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:347
frost$core$MutableString* $tmp534 = *(&local5);
frost$core$String* $tmp535 = frost$core$MutableString$finish$R$frost$core$String($tmp534);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
frost$core$String* $tmp536 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local6) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp537 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$MapView* $tmp538 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local4) = ((frost$collections$MapView*) NULL);
return $tmp535;
block15:;
frost$core$Int64 $tmp539 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:349:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp540 = $tmp420.value;
int64_t $tmp541 = $tmp539.value;
bool $tmp542 = $tmp540 == $tmp541;
frost$core$Bit $tmp543 = (frost$core$Bit) {$tmp542};
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block22; else goto block23;
block22:;
frost$collections$ListView** $tmp545 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp546 = *$tmp545;
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$collections$ListView* $tmp547 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local8) = $tmp546;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:350
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp548 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp548, &$s549);
*(&local9) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$core$MutableString* $tmp550 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local9) = $tmp548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:351
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s551));
frost$core$String* $tmp552 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local10) = &$s553;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:352
frost$collections$ListView* $tmp554 = *(&local8);
ITable* $tmp555 = ((frost$collections$Iterable*) $tmp554)->$class->itable;
while ($tmp555->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp555 = $tmp555->next;
}
$fn557 $tmp556 = $tmp555->methods[0];
frost$collections$Iterator* $tmp558 = $tmp556(((frost$collections$Iterable*) $tmp554));
goto block25;
block25:;
ITable* $tmp559 = $tmp558->$class->itable;
while ($tmp559->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp559 = $tmp559->next;
}
$fn561 $tmp560 = $tmp559->methods[0];
frost$core$Bit $tmp562 = $tmp560($tmp558);
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block27; else goto block26;
block26:;
*(&local11) = ((frost$json$JSON*) NULL);
ITable* $tmp564 = $tmp558->$class->itable;
while ($tmp564->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp564 = $tmp564->next;
}
$fn566 $tmp565 = $tmp564->methods[1];
frost$core$Object* $tmp567 = $tmp565($tmp558);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp567)));
frost$json$JSON* $tmp568 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local11) = ((frost$json$JSON*) $tmp567);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:353
frost$core$MutableString* $tmp569 = *(&local9);
frost$core$String* $tmp570 = *(&local10);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$String* $tmp571 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp570, &$s572);
frost$json$JSON* $tmp573 = *(&local11);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn575 $tmp574 = ($fn575) ((frost$core$Object*) $tmp573)->$class->vtable[0];
frost$core$String* $tmp576 = $tmp574(((frost$core$Object*) $tmp573));
frost$core$String* $tmp577 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp571, $tmp576);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$String* $tmp578 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp577, &$s579);
frost$core$MutableString$append$frost$core$String($tmp569, $tmp578);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:354
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s580));
frost$core$String* $tmp581 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local10) = &$s582;
frost$core$Frost$unref$frost$core$Object$Q($tmp567);
frost$json$JSON* $tmp583 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local11) = ((frost$json$JSON*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:356
frost$core$MutableString* $tmp584 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp584, &$s585);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:357
frost$core$MutableString* $tmp586 = *(&local9);
frost$core$String* $tmp587 = frost$core$MutableString$finish$R$frost$core$String($tmp586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$String* $tmp588 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local10) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp589 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local9) = ((frost$core$MutableString*) NULL);
frost$collections$ListView* $tmp590 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local8) = ((frost$collections$ListView*) NULL);
return $tmp587;
block23:;
frost$core$Int64 $tmp591 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:359:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp592 = $tmp420.value;
int64_t $tmp593 = $tmp591.value;
bool $tmp594 = $tmp592 == $tmp593;
frost$core$Bit $tmp595 = (frost$core$Bit) {$tmp594};
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:360
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s597));
return &$s598;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:363
frost$core$Int $tmp599 = (frost$core$Int) {363u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s600, $tmp599);
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
frost$core$Int64* $tmp601 = &param0->$rawValue;
frost$core$Int64 $tmp602 = *$tmp601;
frost$core$Int64 $tmp603 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp604 = $tmp602.value;
int64_t $tmp605 = $tmp603.value;
bool $tmp606 = $tmp604 == $tmp605;
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp606};
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp609 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp610 = *$tmp609;
*(&local0) = $tmp610;
goto block1;
block3:;
frost$core$Int64 $tmp611 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp612 = $tmp602.value;
int64_t $tmp613 = $tmp611.value;
bool $tmp614 = $tmp612 == $tmp613;
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block5; else goto block6;
block5:;
frost$core$Real64* $tmp617 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp618 = *$tmp617;
*(&local1) = $tmp618;
goto block1;
block6:;
frost$core$Int64 $tmp619 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp620 = $tmp602.value;
int64_t $tmp621 = $tmp619.value;
bool $tmp622 = $tmp620 == $tmp621;
frost$core$Bit $tmp623 = (frost$core$Bit) {$tmp622};
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block8; else goto block9;
block8:;
frost$core$String** $tmp625 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp626 = *$tmp625;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$String* $tmp627 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local2) = $tmp626;
// <no location>
frost$core$String* $tmp628 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
frost$core$String* $tmp629 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp630 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp631 = $tmp602.value;
int64_t $tmp632 = $tmp630.value;
bool $tmp633 = $tmp631 == $tmp632;
frost$core$Bit $tmp634 = (frost$core$Bit) {$tmp633};
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block11; else goto block12;
block11:;
frost$core$Bit* $tmp636 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp637 = *$tmp636;
*(&local3) = $tmp637;
goto block1;
block12:;
frost$core$Int64 $tmp638 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp639 = $tmp602.value;
int64_t $tmp640 = $tmp638.value;
bool $tmp641 = $tmp639 == $tmp640;
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block14; else goto block15;
block14:;
frost$collections$MapView** $tmp644 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp645 = *$tmp644;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$collections$MapView* $tmp646 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local4) = $tmp645;
// <no location>
frost$collections$MapView* $tmp647 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$collections$MapView* $tmp648 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local4) = ((frost$collections$MapView*) NULL);
goto block1;
block15:;
frost$core$Int64 $tmp649 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp650 = $tmp602.value;
int64_t $tmp651 = $tmp649.value;
bool $tmp652 = $tmp650 == $tmp651;
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block17; else goto block18;
block17:;
frost$collections$ListView** $tmp655 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp656 = *$tmp655;
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$collections$ListView* $tmp657 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
*(&local5) = $tmp656;
// <no location>
frost$collections$ListView* $tmp658 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$collections$ListView* $tmp659 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local5) = ((frost$collections$ListView*) NULL);
goto block1;
block18:;
frost$core$Int64 $tmp660 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp661 = $tmp602.value;
int64_t $tmp662 = $tmp660.value;
bool $tmp663 = $tmp661 == $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block20; else goto block1;
block20:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp666 = &param0->$rawValue;
*$tmp666 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp667 = (frost$core$Int64*) (param0->$data + 0);
*$tmp667 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Real64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Real64 param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp668 = &param0->$rawValue;
*$tmp668 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Real64* $tmp669 = (frost$core$Real64*) (param0->$data + 0);
*$tmp669 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$String(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp670 = &param0->$rawValue;
*$tmp670 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp671 = (frost$core$String**) (param0->$data + 0);
*$tmp671 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Bit(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Bit param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp672 = &param0->$rawValue;
*$tmp672 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Bit* $tmp673 = (frost$core$Bit*) (param0->$data + 0);
*$tmp673 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$MapView* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp674 = &param0->$rawValue;
*$tmp674 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$MapView** $tmp675 = (frost$collections$MapView**) (param0->$data + 0);
*$tmp675 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$ListView* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp676 = &param0->$rawValue;
*$tmp676 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp677 = (frost$collections$ListView**) (param0->$data + 0);
*$tmp677 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp678 = &param0->$rawValue;
*$tmp678 = param1;
return;

}

