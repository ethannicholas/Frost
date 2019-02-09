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
frost$json$JSON$class_type frost$json$JSON$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$json$JSON$get_asString$R$frost$core$String, frost$json$JSON$cleanup, frost$json$JSON$get$frost$core$String$R$frost$json$JSON$Q, frost$json$JSON$getInt$frost$core$String$R$frost$core$Int64$Q, frost$json$JSON$getReal$frost$core$String$R$frost$core$Real64$Q, frost$json$JSON$getBit$frost$core$String$R$frost$core$Bit$Q, frost$json$JSON$getString$frost$core$String$R$frost$core$String$Q, frost$json$JSON$getArray$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q, frost$json$JSON$getObject$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q, frost$json$JSON$asInt$R$frost$core$Int64, frost$json$JSON$asReal$R$frost$core$Real64, frost$json$JSON$asString$R$frost$core$String, frost$json$JSON$asBit$R$frost$core$Bit, frost$json$JSON$asObject$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT, frost$json$JSON$asArray$R$frost$collections$ListView$LTfrost$json$JSON$GT} };

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
typedef frost$core$String* (*$fn440)(frost$core$Object*);
typedef frost$core$String* (*$fn453)(frost$core$Object*);
typedef frost$core$String* (*$fn479)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn499)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn503)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn508)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn518)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Object* (*$fn528)(frost$collections$MapView*, frost$core$Object*);
typedef frost$core$String* (*$fn531)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn565)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn569)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn574)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn583)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e", 15, -3431816289963872625, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x4a\x53\x4f\x4e\x20\x70\x61\x74\x68\x20\x27", 19, -3401700107860536954, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7d", 2, 13558, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s588 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s605 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s606 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4a\x53\x4f\x4e\x2e\x66\x72\x6f\x73\x74", 10, 7834806210389722559, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:52
frost$core$Char32 $tmp2 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, param1);
frost$core$Int32 $tmp3 = (frost$core$Int32) {47};
frost$core$Char32 $tmp4 = frost$core$Char32$init$frost$core$Int32($tmp3);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:53:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp5 = $tmp2.value;
int32_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:54
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSON.frost:54:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:287
frost$core$Int64* $tmp10 = &param0->_length;
frost$core$Int64 $tmp11 = *$tmp10;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.stub:287:14
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
frost$core$Int64* $tmp12 = &(&local1)->value;
*$tmp12 = $tmp11;
frost$core$String$Index $tmp13 = *(&local1);
*(&local0) = $tmp13;
frost$core$String$Index $tmp14 = *(&local0);
*(&local2) = $tmp14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:55
frost$core$String$Index $tmp15 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local3) = $tmp15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:56
frost$core$String$Index $tmp16 = *(&local3);
*(&local4) = $tmp16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:57
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:58
frost$core$String$Index $tmp17 = *(&local4);
frost$core$Char32 $tmp18 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp17);
*(&local5) = $tmp18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:59
frost$core$Char32 $tmp19 = *(&local5);
frost$core$Int32 $tmp20 = (frost$core$Int32) {47};
frost$core$Char32 $tmp21 = frost$core$Char32$init$frost$core$Int32($tmp20);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:59:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp22 = $tmp19.value;
int32_t $tmp23 = $tmp21.value;
bool $tmp24 = $tmp22 == $tmp23;
frost$core$Bit $tmp25 = frost$core$Bit$init$builtin_bit($tmp24);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block10; else goto block12;
block12:;
frost$core$Char32 $tmp27 = *(&local5);
frost$core$Int32 $tmp28 = (frost$core$Int32) {91};
frost$core$Char32 $tmp29 = frost$core$Char32$init$frost$core$Int32($tmp28);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:59:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp30 = $tmp27.value;
int32_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 == $tmp31;
frost$core$Bit $tmp33 = frost$core$Bit$init$builtin_bit($tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:60
goto block9;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:62
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:65
frost$core$String$Index $tmp46 = *(&local3);
frost$core$String$Index $tmp47 = *(&local4);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from JSON.frost:65:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:15
frost$core$Int64 $tmp48 = $tmp46.value;
frost$core$Int64 $tmp49 = $tmp47.value;
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from String.stub:15:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49.value;
bool $tmp52 = $tmp50 == $tmp51;
frost$core$Bit $tmp53 = frost$core$Bit$init$builtin_bit($tmp52);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:66
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:68
FROST_ASSERT(40 == sizeof(frost$json$JSON$PathKey));
frost$json$JSON$PathKey* $tmp55 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int64 $tmp56 = (frost$core$Int64) {0};
frost$core$String$Index $tmp57 = *(&local3);
frost$core$String$Index $tmp58 = *(&local4);
frost$core$Bit $tmp59 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp60 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp57, $tmp58, $tmp59);
frost$core$String* $tmp61 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp60);
frost$core$String$Index $tmp62 = *(&local4);
frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$String$frost$core$String$Index($tmp55, $tmp56, $tmp61, $tmp62);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
return $tmp55;
block3:;
frost$core$Int32 $tmp63 = (frost$core$Int32) {91};
frost$core$Char32 $tmp64 = frost$core$Char32$init$frost$core$Int32($tmp63);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from JSON.frost:70:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp65 = $tmp2.value;
int32_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = frost$core$Bit$init$builtin_bit($tmp67);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:71
frost$core$String$Index $tmp70 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, param1);
*(&local6) = $tmp70;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:72
frost$core$String$Index $tmp71 = *(&local6);
*(&local7) = $tmp71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:73
goto block22;
block22:;
frost$core$String$Index $tmp72 = *(&local7);
frost$core$Char32 $tmp73 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp72);
frost$core$Int32 $tmp74 = (frost$core$Int32) {93};
frost$core$Char32 $tmp75 = frost$core$Char32$init$frost$core$Int32($tmp74);
// begin inline call to function frost.core.Char32.!=(other:frost.core.Char32):frost.core.Bit from JSON.frost:73:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:32
int32_t $tmp76 = $tmp73.value;
int32_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 != $tmp77;
frost$core$Bit $tmp79 = frost$core$Bit$init$builtin_bit($tmp78);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:74
frost$core$String$Index $tmp81 = *(&local7);
frost$core$String$Index $tmp82 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp81);
*(&local7) = $tmp82;
goto block22;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:76
frost$core$String$Index $tmp83 = *(&local6);
frost$core$String$Index $tmp84 = *(&local7);
frost$core$Bit $tmp85 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp86 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp83, $tmp84, $tmp85);
frost$core$String* $tmp87 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp86);
frost$core$Int64$nullable $tmp88 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp87);
*(&local8) = $tmp88;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:77
frost$core$Int64$nullable $tmp89 = *(&local8);
frost$core$Bit $tmp90 = frost$core$Bit$init$builtin_bit(!$tmp89.nonnull);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:78
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:80
FROST_ASSERT(40 == sizeof(frost$json$JSON$PathKey));
frost$json$JSON$PathKey* $tmp92 = (frost$json$JSON$PathKey*) frostObjectAlloc(40, (frost$core$Class*) &frost$json$JSON$PathKey$class);
frost$core$Int64 $tmp93 = (frost$core$Int64) {1};
frost$core$Int64$nullable $tmp94 = *(&local8);
frost$core$String$Index $tmp95 = *(&local7);
frost$core$String$Index $tmp96 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp95);
frost$json$JSON$PathKey$init$frost$core$Int64$frost$core$Int64$frost$core$String$Index($tmp92, $tmp93, ((frost$core$Int64) $tmp94.value), $tmp96);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
return $tmp92;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:83
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON$PathKey*) NULL)));
return ((frost$json$JSON$PathKey*) NULL);
block1:;
goto block28;
block28:;

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:103
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from JSON.frost:103:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:283
frost$core$Int64 $tmp97 = (frost$core$Int64) {0};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.stub:283:14
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
frost$core$Int64* $tmp98 = &(&local1)->value;
*$tmp98 = $tmp97;
frost$core$String$Index $tmp99 = *(&local1);
*(&local0) = $tmp99;
frost$core$String$Index $tmp100 = *(&local0);
*(&local2) = $tmp100;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:104
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from JSON.frost:104:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:287
frost$core$Int64* $tmp101 = &param1->_length;
frost$core$Int64 $tmp102 = *$tmp101;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int64):frost.core.String.Index from String.stub:287:14
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:10
frost$core$Int64* $tmp103 = &(&local4)->value;
*$tmp103 = $tmp102;
frost$core$String$Index $tmp104 = *(&local4);
*(&local3) = $tmp104;
frost$core$String$Index $tmp105 = *(&local3);
*(&local5) = $tmp105;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:105
*(&local6) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$json$JSON* $tmp106 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local6) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:106
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:107
frost$core$String$Index $tmp116 = *(&local2);
frost$json$JSON$PathKey* $tmp117 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp116);
frost$core$Bit $tmp118 = frost$core$Bit$init$builtin_bit($tmp117 != NULL);
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp120 = (frost$core$Int64) {107};
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s122, param1);
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp121, &$s124);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s125, $tmp120, $tmp123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:108
frost$core$String$Index $tmp126 = *(&local2);
frost$json$JSON$PathKey* $tmp127 = frost$json$JSON$nextPathKey$frost$core$String$frost$core$String$Index$R$frost$json$JSON$PathKey$Q(param1, $tmp126);
frost$core$Int64* $tmp128 = &$tmp127->$rawValue;
frost$core$Int64 $tmp129 = *$tmp128;
frost$core$Int64 $tmp130 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:109:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 == $tmp132;
frost$core$Bit $tmp134 = frost$core$Bit$init$builtin_bit($tmp133);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:110
frost$json$JSON* $tmp141 = *(&local6);
frost$core$Int64* $tmp142 = &$tmp141->$rawValue;
frost$core$Int64 $tmp143 = *$tmp142;
frost$core$Int64 $tmp144 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:111:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp145 = $tmp143.value;
int64_t $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 == $tmp146;
frost$core$Bit $tmp148 = frost$core$Bit$init$builtin_bit($tmp147);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:112
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:113
frost$json$JSON* $tmp160 = *(&local6);
frost$core$Bit $tmp161 = frost$core$Bit$init$builtin_bit($tmp160 == NULL);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:114
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:121
frost$core$String$Index $tmp167 = *(&local8);
*(&local2) = $tmp167;
frost$core$String* $tmp168 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local7) = ((frost$core$String*) NULL);
goto block10;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:118
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
frost$core$Int64 $tmp171 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:123:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp172 = $tmp129.value;
int64_t $tmp173 = $tmp171.value;
bool $tmp174 = $tmp172 == $tmp173;
frost$core$Bit $tmp175 = frost$core$Bit$init$builtin_bit($tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block20; else goto block10;
block20:;
frost$core$Int64* $tmp177 = (frost$core$Int64*) ($tmp127->$data + 0);
frost$core$Int64 $tmp178 = *$tmp177;
*(&local10) = $tmp178;
frost$core$String$Index* $tmp179 = (frost$core$String$Index*) ($tmp127->$data + 8);
frost$core$String$Index $tmp180 = *$tmp179;
*(&local11) = $tmp180;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:124
frost$json$JSON* $tmp181 = *(&local6);
frost$core$Int64* $tmp182 = &$tmp181->$rawValue;
frost$core$Int64 $tmp183 = *$tmp182;
frost$core$Int64 $tmp184 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:125:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp185 = $tmp183.value;
int64_t $tmp186 = $tmp184.value;
bool $tmp187 = $tmp185 == $tmp186;
frost$core$Bit $tmp188 = frost$core$Bit$init$builtin_bit($tmp187);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:126
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:132
frost$core$String$Index $tmp201 = *(&local11);
*(&local2) = $tmp201;
goto block10;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:129
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:136
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:143
$fn206 $tmp205 = ($fn206) param0->$class->vtable[2];
frost$json$JSON* $tmp207 = $tmp205(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$json$JSON* $tmp208 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local0) = $tmp207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:144
frost$json$JSON* $tmp209 = *(&local0);
frost$core$Bit $tmp210 = frost$core$Bit$init$builtin_bit($tmp209 == NULL);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:145
frost$json$JSON* $tmp212 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:147
frost$json$JSON* $tmp213 = *(&local0);
frost$core$Int64* $tmp214 = &$tmp213->$rawValue;
frost$core$Int64 $tmp215 = *$tmp214;
frost$core$Int64 $tmp216 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:148:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216.value;
bool $tmp219 = $tmp217 == $tmp218;
frost$core$Bit $tmp220 = frost$core$Bit$init$builtin_bit($tmp219);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block4; else goto block5;
block4:;
frost$core$Int64* $tmp222 = (frost$core$Int64*) ($tmp213->$data + 0);
frost$core$Int64 $tmp223 = *$tmp222;
*(&local1) = $tmp223;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:149
frost$core$Int64 $tmp224 = *(&local1);
frost$json$JSON* $tmp225 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Int64$nullable) { $tmp224, true });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:152
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:161
$fn228 $tmp227 = ($fn228) param0->$class->vtable[2];
frost$json$JSON* $tmp229 = $tmp227(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$json$JSON* $tmp230 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local0) = $tmp229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:162
frost$json$JSON* $tmp231 = *(&local0);
frost$core$Bit $tmp232 = frost$core$Bit$init$builtin_bit($tmp231 == NULL);
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:163
frost$json$JSON* $tmp234 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:165
frost$json$JSON* $tmp235 = *(&local0);
frost$core$Int64* $tmp236 = &$tmp235->$rawValue;
frost$core$Int64 $tmp237 = *$tmp236;
frost$core$Int64 $tmp238 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:166:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp239 = $tmp237.value;
int64_t $tmp240 = $tmp238.value;
bool $tmp241 = $tmp239 == $tmp240;
frost$core$Bit $tmp242 = frost$core$Bit$init$builtin_bit($tmp241);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block4; else goto block5;
block4:;
frost$core$Real64* $tmp244 = (frost$core$Real64*) ($tmp235->$data + 0);
frost$core$Real64 $tmp245 = *$tmp244;
*(&local1) = $tmp245;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:167
frost$core$Real64 $tmp246 = *(&local1);
frost$json$JSON* $tmp247 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Real64$nullable) { $tmp246, true });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:170
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:179
$fn250 $tmp249 = ($fn250) param0->$class->vtable[2];
frost$json$JSON* $tmp251 = $tmp249(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$json$JSON* $tmp252 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local0) = $tmp251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:180
frost$json$JSON* $tmp253 = *(&local0);
frost$core$Bit $tmp254 = frost$core$Bit$init$builtin_bit($tmp253 == NULL);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:181
frost$json$JSON* $tmp256 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:183
frost$json$JSON* $tmp257 = *(&local0);
frost$core$Int64* $tmp258 = &$tmp257->$rawValue;
frost$core$Int64 $tmp259 = *$tmp258;
frost$core$Int64 $tmp260 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:184:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp261 = $tmp259.value;
int64_t $tmp262 = $tmp260.value;
bool $tmp263 = $tmp261 == $tmp262;
frost$core$Bit $tmp264 = frost$core$Bit$init$builtin_bit($tmp263);
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block4; else goto block5;
block4:;
frost$core$Bit* $tmp266 = (frost$core$Bit*) ($tmp257->$data + 0);
frost$core$Bit $tmp267 = *$tmp266;
*(&local1) = $tmp267;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:185
frost$core$Bit $tmp268 = *(&local1);
frost$json$JSON* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$Bit$nullable) { $tmp268, true });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:188
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:197
$fn272 $tmp271 = ($fn272) param0->$class->vtable[2];
frost$json$JSON* $tmp273 = $tmp271(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$json$JSON* $tmp274 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local0) = $tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:198
frost$json$JSON* $tmp275 = *(&local0);
frost$core$Bit $tmp276 = frost$core$Bit$init$builtin_bit($tmp275 == NULL);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:199
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp278 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:201
frost$json$JSON* $tmp279 = *(&local0);
frost$core$Int64* $tmp280 = &$tmp279->$rawValue;
frost$core$Int64 $tmp281 = *$tmp280;
frost$core$Int64 $tmp282 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:202:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp283 = $tmp281.value;
int64_t $tmp284 = $tmp282.value;
bool $tmp285 = $tmp283 == $tmp284;
frost$core$Bit $tmp286 = frost$core$Bit$init$builtin_bit($tmp285);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:203
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:206
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$json$JSON* $tmp294 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$core$String*) NULL);
block3:;
goto block7;
block7:;

}
frost$collections$ListView* frost$json$JSON$getArray$frost$core$String$R$frost$collections$ListView$LTfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$ListView* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:215
$fn296 $tmp295 = ($fn296) param0->$class->vtable[2];
frost$json$JSON* $tmp297 = $tmp295(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$json$JSON* $tmp298 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local0) = $tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:216
frost$json$JSON* $tmp299 = *(&local0);
frost$core$Bit $tmp300 = frost$core$Bit$init$builtin_bit($tmp299 == NULL);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:217
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp302 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:219
frost$json$JSON* $tmp303 = *(&local0);
frost$core$Int64* $tmp304 = &$tmp303->$rawValue;
frost$core$Int64 $tmp305 = *$tmp304;
frost$core$Int64 $tmp306 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:220:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp307 = $tmp305.value;
int64_t $tmp308 = $tmp306.value;
bool $tmp309 = $tmp307 == $tmp308;
frost$core$Bit $tmp310 = frost$core$Bit$init$builtin_bit($tmp309);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:221
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:224
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$json$JSON* $tmp318 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$ListView*) NULL);
block3:;
goto block7;
block7:;

}
frost$collections$MapView* frost$json$JSON$getObject$frost$core$String$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT$Q(frost$json$JSON* param0, frost$core$String* param1) {

frost$json$JSON* local0 = NULL;
frost$collections$MapView* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:233
$fn320 $tmp319 = ($fn320) param0->$class->vtable[2];
frost$json$JSON* $tmp321 = $tmp319(param0, param1);
*(&local0) = ((frost$json$JSON*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$json$JSON* $tmp322 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local0) = $tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:234
frost$json$JSON* $tmp323 = *(&local0);
frost$core$Bit $tmp324 = frost$core$Bit$init$builtin_bit($tmp323 == NULL);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp326 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:237
frost$json$JSON* $tmp327 = *(&local0);
frost$core$Int64* $tmp328 = &$tmp327->$rawValue;
frost$core$Int64 $tmp329 = *$tmp328;
frost$core$Int64 $tmp330 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:238:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp331 = $tmp329.value;
int64_t $tmp332 = $tmp330.value;
bool $tmp333 = $tmp331 == $tmp332;
frost$core$Bit $tmp334 = frost$core$Bit$init$builtin_bit($tmp333);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:239
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:242
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) NULL)));
frost$json$JSON* $tmp342 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local0) = ((frost$json$JSON*) NULL);
return ((frost$collections$MapView*) NULL);
block3:;
goto block7;
block7:;

}
frost$core$Int64 frost$json$JSON$asInt$R$frost$core$Int64(frost$json$JSON* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:251
frost$core$Int64* $tmp343 = &param0->$rawValue;
frost$core$Int64 $tmp344 = *$tmp343;
frost$core$Int64 $tmp345 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:252:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345.value;
bool $tmp348 = $tmp346 == $tmp347;
frost$core$Bit $tmp349 = frost$core$Bit$init$builtin_bit($tmp348);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp351 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp352 = *$tmp351;
*(&local0) = $tmp352;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:253
frost$core$Int64 $tmp353 = *(&local0);
return $tmp353;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:256
frost$core$Int64 $tmp354 = (frost$core$Int64) {256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s355, $tmp354);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$Real64 frost$json$JSON$asReal$R$frost$core$Real64(frost$json$JSON* param0) {

frost$core$Real64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:265
frost$core$Int64* $tmp356 = &param0->$rawValue;
frost$core$Int64 $tmp357 = *$tmp356;
frost$core$Int64 $tmp358 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:266:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp359 = $tmp357.value;
int64_t $tmp360 = $tmp358.value;
bool $tmp361 = $tmp359 == $tmp360;
frost$core$Bit $tmp362 = frost$core$Bit$init$builtin_bit($tmp361);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block2; else goto block3;
block2:;
frost$core$Real64* $tmp364 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp365 = *$tmp364;
*(&local0) = $tmp365;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:267
frost$core$Real64 $tmp366 = *(&local0);
return $tmp366;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:270
frost$core$Int64 $tmp367 = (frost$core$Int64) {270};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s368, $tmp367);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$String* frost$json$JSON$asString$R$frost$core$String(frost$json$JSON* param0) {

frost$core$String* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:279
frost$core$Int64* $tmp369 = &param0->$rawValue;
frost$core$Int64 $tmp370 = *$tmp369;
frost$core$Int64 $tmp371 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:280:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp372 = $tmp370.value;
int64_t $tmp373 = $tmp371.value;
bool $tmp374 = $tmp372 == $tmp373;
frost$core$Bit $tmp375 = frost$core$Bit$init$builtin_bit($tmp374);
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block2; else goto block3;
block2:;
frost$core$String** $tmp377 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp378 = *$tmp377;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$String* $tmp379 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local0) = $tmp378;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:281
frost$core$String* $tmp380 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$String* $tmp381 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local0) = ((frost$core$String*) NULL);
return $tmp380;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:284
frost$core$Int64 $tmp382 = (frost$core$Int64) {284};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s383, $tmp382);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$core$Bit frost$json$JSON$asBit$R$frost$core$Bit(frost$json$JSON* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:293
frost$core$Int64* $tmp384 = &param0->$rawValue;
frost$core$Int64 $tmp385 = *$tmp384;
frost$core$Int64 $tmp386 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:294:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp387 = $tmp385.value;
int64_t $tmp388 = $tmp386.value;
bool $tmp389 = $tmp387 == $tmp388;
frost$core$Bit $tmp390 = frost$core$Bit$init$builtin_bit($tmp389);
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp392 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp393 = *$tmp392;
*(&local0) = $tmp393;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:295
frost$core$Bit $tmp394 = *(&local0);
return $tmp394;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:298
frost$core$Int64 $tmp395 = (frost$core$Int64) {298};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s396, $tmp395);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$collections$MapView* frost$json$JSON$asObject$R$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$MapView* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:307
frost$core$Int64* $tmp397 = &param0->$rawValue;
frost$core$Int64 $tmp398 = *$tmp397;
frost$core$Int64 $tmp399 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:308:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp400 = $tmp398.value;
int64_t $tmp401 = $tmp399.value;
bool $tmp402 = $tmp400 == $tmp401;
frost$core$Bit $tmp403 = frost$core$Bit$init$builtin_bit($tmp402);
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block2; else goto block3;
block2:;
frost$collections$MapView** $tmp405 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp406 = *$tmp405;
*(&local0) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$collections$MapView* $tmp407 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
*(&local0) = $tmp406;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:309
frost$collections$MapView* $tmp408 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$collections$MapView* $tmp409 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local0) = ((frost$collections$MapView*) NULL);
return $tmp408;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:312
frost$core$Int64 $tmp410 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s411, $tmp410);
abort(); // unreachable
block1:;
goto block5;
block5:;

}
frost$collections$ListView* frost$json$JSON$asArray$R$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0) {

frost$collections$ListView* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:321
frost$core$Int64* $tmp412 = &param0->$rawValue;
frost$core$Int64 $tmp413 = *$tmp412;
frost$core$Int64 $tmp414 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:322:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp415 = $tmp413.value;
int64_t $tmp416 = $tmp414.value;
bool $tmp417 = $tmp415 == $tmp416;
frost$core$Bit $tmp418 = frost$core$Bit$init$builtin_bit($tmp417);
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block2; else goto block3;
block2:;
frost$collections$ListView** $tmp420 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp421 = *$tmp420;
*(&local0) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
frost$collections$ListView* $tmp422 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local0) = $tmp421;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:323
frost$collections$ListView* $tmp423 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$collections$ListView* $tmp424 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local0) = ((frost$collections$ListView*) NULL);
return $tmp423;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:326
frost$core$Int64 $tmp425 = (frost$core$Int64) {326};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s426, $tmp425);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:336
frost$core$Int64* $tmp427 = &param0->$rawValue;
frost$core$Int64 $tmp428 = *$tmp427;
frost$core$Int64 $tmp429 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:337:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp430 = $tmp428.value;
int64_t $tmp431 = $tmp429.value;
bool $tmp432 = $tmp430 == $tmp431;
frost$core$Bit $tmp433 = frost$core$Bit$init$builtin_bit($tmp432);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp435 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp436 = *$tmp435;
*(&local0) = $tmp436;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:338
frost$core$Int64 $tmp437 = *(&local0);
frost$core$Int64$wrapper* $tmp438;
$tmp438 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp438->value = $tmp437;
$fn440 $tmp439 = ($fn440) ((frost$core$Object*) $tmp438)->$class->vtable[0];
frost$core$String* $tmp441 = $tmp439(((frost$core$Object*) $tmp438));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
return $tmp441;
block3:;
frost$core$Int64 $tmp442 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:340:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp443 = $tmp428.value;
int64_t $tmp444 = $tmp442.value;
bool $tmp445 = $tmp443 == $tmp444;
frost$core$Bit $tmp446 = frost$core$Bit$init$builtin_bit($tmp445);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block5; else goto block6;
block5:;
frost$core$Real64* $tmp448 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp449 = *$tmp448;
*(&local1) = $tmp449;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:341
frost$core$Real64 $tmp450 = *(&local1);
frost$core$Real64$wrapper* $tmp451;
$tmp451 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp451->value = $tmp450;
$fn453 $tmp452 = ($fn453) ((frost$core$Object*) $tmp451)->$class->vtable[0];
frost$core$String* $tmp454 = $tmp452(((frost$core$Object*) $tmp451));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
return $tmp454;
block6:;
frost$core$Int64 $tmp455 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:343:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp456 = $tmp428.value;
int64_t $tmp457 = $tmp455.value;
bool $tmp458 = $tmp456 == $tmp457;
frost$core$Bit $tmp459 = frost$core$Bit$init$builtin_bit($tmp458);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block8; else goto block9;
block8:;
frost$core$String** $tmp461 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp462 = *$tmp461;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$String* $tmp463 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local2) = $tmp462;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:344
frost$core$String* $tmp464 = *(&local2);
frost$core$String* $tmp465 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp464, &$s466);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$String* $tmp467 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local2) = ((frost$core$String*) NULL);
return $tmp465;
block9:;
frost$core$Int64 $tmp468 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:346:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp469 = $tmp428.value;
int64_t $tmp470 = $tmp468.value;
bool $tmp471 = $tmp469 == $tmp470;
frost$core$Bit $tmp472 = frost$core$Bit$init$builtin_bit($tmp471);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block11; else goto block12;
block11:;
frost$core$Bit* $tmp474 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp475 = *$tmp474;
*(&local3) = $tmp475;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:347
frost$core$Bit $tmp476 = *(&local3);
frost$core$Bit$wrapper* $tmp477;
$tmp477 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp477->value = $tmp476;
$fn479 $tmp478 = ($fn479) ((frost$core$Object*) $tmp477)->$class->vtable[0];
frost$core$String* $tmp480 = $tmp478(((frost$core$Object*) $tmp477));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
return $tmp480;
block12:;
frost$core$Int64 $tmp481 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:349:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp482 = $tmp428.value;
int64_t $tmp483 = $tmp481.value;
bool $tmp484 = $tmp482 == $tmp483;
frost$core$Bit $tmp485 = frost$core$Bit$init$builtin_bit($tmp484);
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block14; else goto block15;
block14:;
frost$collections$MapView** $tmp487 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp488 = *$tmp487;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$collections$MapView* $tmp489 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
*(&local4) = $tmp488;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:350
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp490 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp490, &$s491);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$MutableString* $tmp492 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local5) = $tmp490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:351
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s493));
frost$core$String* $tmp494 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local6) = &$s495;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:352
frost$collections$MapView* $tmp496 = *(&local4);
ITable* $tmp497 = $tmp496->$class->itable;
while ($tmp497->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp497 = $tmp497->next;
}
$fn499 $tmp498 = $tmp497->methods[4];
frost$collections$Iterator* $tmp500 = $tmp498($tmp496);
goto block17;
block17:;
ITable* $tmp501 = $tmp500->$class->itable;
while ($tmp501->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp501 = $tmp501->next;
}
$fn503 $tmp502 = $tmp501->methods[0];
frost$core$Bit $tmp504 = $tmp502($tmp500);
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block19; else goto block18;
block18:;
*(&local7) = ((frost$core$String*) NULL);
ITable* $tmp506 = $tmp500->$class->itable;
while ($tmp506->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp506 = $tmp506->next;
}
$fn508 $tmp507 = $tmp506->methods[1];
frost$core$Object* $tmp509 = $tmp507($tmp500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp509)));
frost$core$String* $tmp510 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local7) = ((frost$core$String*) $tmp509);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:353
frost$core$MutableString* $tmp511 = *(&local5);
frost$core$String* $tmp512 = *(&local6);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
frost$core$String* $tmp513 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp512, &$s514);
frost$core$String* $tmp515 = *(&local7);
ITable* $tmp516 = ((frost$core$Formattable*) $tmp515)->$class->itable;
while ($tmp516->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp516 = $tmp516->next;
}
$fn518 $tmp517 = $tmp516->methods[0];
frost$core$String* $tmp519 = $tmp517(((frost$core$Formattable*) $tmp515), &$s520);
frost$core$String* $tmp521 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp513, $tmp519);
frost$core$String* $tmp522 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp521, &$s523);
frost$collections$MapView* $tmp524 = *(&local4);
frost$core$String* $tmp525 = *(&local7);
ITable* $tmp526 = $tmp524->$class->itable;
while ($tmp526->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp526 = $tmp526->next;
}
$fn528 $tmp527 = $tmp526->methods[1];
frost$core$Object* $tmp529 = $tmp527($tmp524, ((frost$core$Object*) $tmp525));
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:353:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn531 $tmp530 = ($fn531) ((frost$core$Object*) ((frost$json$JSON*) $tmp529))->$class->vtable[0];
frost$core$String* $tmp532 = $tmp530(((frost$core$Object*) ((frost$json$JSON*) $tmp529)));
frost$core$String* $tmp533 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp522, $tmp532);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
frost$core$String* $tmp534 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp533, &$s535);
frost$core$MutableString$append$frost$core$String($tmp511, $tmp534);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$Frost$unref$frost$core$Object$Q($tmp529);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:354
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s536));
frost$core$String* $tmp537 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local6) = &$s538;
frost$core$Frost$unref$frost$core$Object$Q($tmp509);
frost$core$String* $tmp539 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local7) = ((frost$core$String*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:356
frost$core$MutableString* $tmp540 = *(&local5);
frost$core$MutableString$append$frost$core$String($tmp540, &$s541);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:357
frost$core$MutableString* $tmp542 = *(&local5);
frost$core$String* $tmp543 = frost$core$MutableString$finish$R$frost$core$String($tmp542);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
frost$core$String* $tmp544 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
*(&local6) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp545 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$MapView* $tmp546 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local4) = ((frost$collections$MapView*) NULL);
return $tmp543;
block15:;
frost$core$Int64 $tmp547 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:359:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp548 = $tmp428.value;
int64_t $tmp549 = $tmp547.value;
bool $tmp550 = $tmp548 == $tmp549;
frost$core$Bit $tmp551 = frost$core$Bit$init$builtin_bit($tmp550);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block22; else goto block23;
block22:;
frost$collections$ListView** $tmp553 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp554 = *$tmp553;
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$collections$ListView* $tmp555 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local8) = $tmp554;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:360
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp556 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp556, &$s557);
*(&local9) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$MutableString* $tmp558 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local9) = $tmp556;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:361
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s559));
frost$core$String* $tmp560 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local10) = &$s561;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:362
frost$collections$ListView* $tmp562 = *(&local8);
ITable* $tmp563 = ((frost$collections$Iterable*) $tmp562)->$class->itable;
while ($tmp563->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp563 = $tmp563->next;
}
$fn565 $tmp564 = $tmp563->methods[0];
frost$collections$Iterator* $tmp566 = $tmp564(((frost$collections$Iterable*) $tmp562));
goto block25;
block25:;
ITable* $tmp567 = $tmp566->$class->itable;
while ($tmp567->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp567 = $tmp567->next;
}
$fn569 $tmp568 = $tmp567->methods[0];
frost$core$Bit $tmp570 = $tmp568($tmp566);
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block27; else goto block26;
block26:;
*(&local11) = ((frost$json$JSON*) NULL);
ITable* $tmp572 = $tmp566->$class->itable;
while ($tmp572->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp572 = $tmp572->next;
}
$fn574 $tmp573 = $tmp572->methods[1];
frost$core$Object* $tmp575 = $tmp573($tmp566);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$json$JSON*) $tmp575)));
frost$json$JSON* $tmp576 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local11) = ((frost$json$JSON*) $tmp575);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:363
frost$core$MutableString* $tmp577 = *(&local9);
frost$core$String* $tmp578 = *(&local10);
// begin inline call to function frost.core.String.get_asString():frost.core.String from JSON.frost:363:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$String* $tmp579 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp578, &$s580);
frost$json$JSON* $tmp581 = *(&local11);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from JSON.frost:363:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn583 $tmp582 = ($fn583) ((frost$core$Object*) $tmp581)->$class->vtable[0];
frost$core$String* $tmp584 = $tmp582(((frost$core$Object*) $tmp581));
frost$core$String* $tmp585 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp579, $tmp584);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$core$String* $tmp586 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp585, &$s587);
frost$core$MutableString$append$frost$core$String($tmp577, $tmp586);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:364
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s588));
frost$core$String* $tmp589 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local10) = &$s590;
frost$core$Frost$unref$frost$core$Object$Q($tmp575);
frost$json$JSON* $tmp591 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local11) = ((frost$json$JSON*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:366
frost$core$MutableString* $tmp592 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp592, &$s593);
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:367
frost$core$MutableString* $tmp594 = *(&local9);
frost$core$String* $tmp595 = frost$core$MutableString$finish$R$frost$core$String($tmp594);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$String* $tmp596 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local10) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp597 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local9) = ((frost$core$MutableString*) NULL);
frost$collections$ListView* $tmp598 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local8) = ((frost$collections$ListView*) NULL);
return $tmp595;
block23:;
frost$core$Int64 $tmp599 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:369:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp600 = $tmp428.value;
int64_t $tmp601 = $tmp599.value;
bool $tmp602 = $tmp600 == $tmp601;
frost$core$Bit $tmp603 = frost$core$Bit$init$builtin_bit($tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:370
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s605));
return &$s606;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:373
frost$core$Int64 $tmp607 = (frost$core$Int64) {373};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s608, $tmp607);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp609 = &param0->$rawValue;
frost$core$Int64 $tmp610 = *$tmp609;
frost$core$Int64 $tmp611 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp612 = $tmp610.value;
int64_t $tmp613 = $tmp611.value;
bool $tmp614 = $tmp612 == $tmp613;
frost$core$Bit $tmp615 = frost$core$Bit$init$builtin_bit($tmp614);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp617 = (frost$core$Int64*) (param0->$data + 0);
frost$core$Int64 $tmp618 = *$tmp617;
*(&local0) = $tmp618;
goto block1;
block3:;
frost$core$Int64 $tmp619 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp620 = $tmp610.value;
int64_t $tmp621 = $tmp619.value;
bool $tmp622 = $tmp620 == $tmp621;
frost$core$Bit $tmp623 = frost$core$Bit$init$builtin_bit($tmp622);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block5; else goto block6;
block5:;
frost$core$Real64* $tmp625 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp626 = *$tmp625;
*(&local1) = $tmp626;
goto block1;
block6:;
frost$core$Int64 $tmp627 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp628 = $tmp610.value;
int64_t $tmp629 = $tmp627.value;
bool $tmp630 = $tmp628 == $tmp629;
frost$core$Bit $tmp631 = frost$core$Bit$init$builtin_bit($tmp630);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block8; else goto block9;
block8:;
frost$core$String** $tmp633 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp634 = *$tmp633;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
frost$core$String* $tmp635 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local2) = $tmp634;
// <no location>
frost$core$String* $tmp636 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$String* $tmp637 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp638 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp639 = $tmp610.value;
int64_t $tmp640 = $tmp638.value;
bool $tmp641 = $tmp639 == $tmp640;
frost$core$Bit $tmp642 = frost$core$Bit$init$builtin_bit($tmp641);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block11; else goto block12;
block11:;
frost$core$Bit* $tmp644 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp645 = *$tmp644;
*(&local3) = $tmp645;
goto block1;
block12:;
frost$core$Int64 $tmp646 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp647 = $tmp610.value;
int64_t $tmp648 = $tmp646.value;
bool $tmp649 = $tmp647 == $tmp648;
frost$core$Bit $tmp650 = frost$core$Bit$init$builtin_bit($tmp649);
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block14; else goto block15;
block14:;
frost$collections$MapView** $tmp652 = (frost$collections$MapView**) (param0->$data + 0);
frost$collections$MapView* $tmp653 = *$tmp652;
*(&local4) = ((frost$collections$MapView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$collections$MapView* $tmp654 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local4) = $tmp653;
// <no location>
frost$collections$MapView* $tmp655 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$collections$MapView* $tmp656 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local4) = ((frost$collections$MapView*) NULL);
goto block1;
block15:;
frost$core$Int64 $tmp657 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp658 = $tmp610.value;
int64_t $tmp659 = $tmp657.value;
bool $tmp660 = $tmp658 == $tmp659;
frost$core$Bit $tmp661 = frost$core$Bit$init$builtin_bit($tmp660);
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block17; else goto block18;
block17:;
frost$collections$ListView** $tmp663 = (frost$collections$ListView**) (param0->$data + 0);
frost$collections$ListView* $tmp664 = *$tmp663;
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
frost$collections$ListView* $tmp665 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local5) = $tmp664;
// <no location>
frost$collections$ListView* $tmp666 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$collections$ListView* $tmp667 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local5) = ((frost$collections$ListView*) NULL);
goto block1;
block18:;
frost$core$Int64 $tmp668 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from JSON.frost:6:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp669 = $tmp610.value;
int64_t $tmp670 = $tmp668.value;
bool $tmp671 = $tmp669 == $tmp670;
frost$core$Bit $tmp672 = frost$core$Bit$init$builtin_bit($tmp671);
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block20; else goto block1;
block20:;
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp674 = &param0->$rawValue;
*$tmp674 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp675 = (frost$core$Int64*) (param0->$data + 0);
*$tmp675 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Real64(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Real64 param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp676 = &param0->$rawValue;
*$tmp676 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Real64* $tmp677 = (frost$core$Real64*) (param0->$data + 0);
*$tmp677 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$String(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp678 = &param0->$rawValue;
*$tmp678 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp679 = (frost$core$String**) (param0->$data + 0);
*$tmp679 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$core$Bit(frost$json$JSON* param0, frost$core$Int64 param1, frost$core$Bit param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp680 = &param0->$rawValue;
*$tmp680 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Bit* $tmp681 = (frost$core$Bit*) (param0->$data + 0);
*$tmp681 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$MapView$LTfrost$core$String$Cfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$MapView* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp682 = &param0->$rawValue;
*$tmp682 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$MapView** $tmp683 = (frost$collections$MapView**) (param0->$data + 0);
*$tmp683 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64$frost$collections$ListView$LTfrost$json$JSON$GT(frost$json$JSON* param0, frost$core$Int64 param1, frost$collections$ListView* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp684 = &param0->$rawValue;
*$tmp684 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$collections$ListView** $tmp685 = (frost$collections$ListView**) (param0->$data + 0);
*$tmp685 = param2;
return;

}
void frost$json$JSON$init$frost$core$Int64(frost$json$JSON* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/json/JSON.frost:6
frost$core$Int64* $tmp686 = &param0->$rawValue;
*$tmp686 = param1;
return;

}

