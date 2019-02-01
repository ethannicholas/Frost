#include "frost/core/Frost.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Maybe.h"
#include "frost/core/Int64.h"
#include "frost/core/Error.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "frost/collections/MapView.h"
#include "frost/collections/Iterator.h"
#include "frost/io/Console.h"
#include "frost/core/Weak.h"
#include "frost/collections/IdentityMap.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/io/OutputStream.h"
#include "frost/core/System.h"
#include "frost/core/UInt64.h"
#include "frost/core/Char32.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt8.h"
#include "frost/core/Char8.h"
#include "frost/core/String/Index.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/collections/ListView.h"
#include "frost/core/Comparable.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/collections/List.h"
#include "frost/collections/ListWriter.h"
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
frost$core$Frost$class_type frost$core$Frost$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Frost$cleanup, frost$core$Frost$countAllocation$frost$core$Class, frost$core$Frost$countDeallocation$frost$core$Class, frost$core$Frost$dumpReport, frost$core$Frost$countTrace$frost$core$String} };

typedef frost$collections$Iterator* (*$fn87)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn96)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn127)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn131)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn136)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn195)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn199)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn204)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn225)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn241)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn314)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn424)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Object* (*$fn503)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn611)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn616)(frost$collections$ListView*, frost$core$Int64);
typedef void (*$fn620)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef void (*$fn624)(frost$collections$ListWriter*, frost$core$Int64, frost$core$Object*);
typedef frost$core$Object* (*$fn647)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn677)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn685)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn687)(frost$core$Object*, frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -7013691163086253143, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 768544994797342119, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2f\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 31, 768544994797342119, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, -87923020846717013, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2f\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 38, -87923020846717013, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x27", 26, -833928138110598455, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x72\x6f\x73\x74\x2e\x66\x72\x6f\x73\x74", 11, -3660250246602200665, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67", 21, 8772831143845743696, NULL };

void frost$core$Frost$init(frost$core$Frost* param0) {

// line 14
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp2 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$HashMap** $tmp3 = &param0->allocations;
frost$collections$HashMap* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$HashMap** $tmp5 = &param0->allocations;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 16
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp6 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$HashMap** $tmp7 = &param0->traces;
frost$collections$HashMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$HashMap** $tmp9 = &param0->traces;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
frost$core$Maybe* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$Object* param0) {

// line 24
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp10 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
frost$core$Maybe$init$frost$core$Int64$frost$core$Maybe$T($tmp10, $tmp11, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
return $tmp10;

}
frost$core$Maybe* frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$String* param0) {

// line 30
FROST_ASSERT(32 == sizeof(frost$core$Maybe));
frost$core$Maybe* $tmp12 = (frost$core$Maybe*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Maybe$class);
frost$core$Int64 $tmp13 = (frost$core$Int64) {1};
FROST_ASSERT(24 == sizeof(frost$core$Error));
frost$core$Error* $tmp14 = (frost$core$Error*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Error$class);
frost$core$Error$init$frost$core$String($tmp14, param0);
frost$core$Maybe$init$frost$core$Int64$frost$core$Error($tmp12, $tmp13, $tmp14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
return $tmp12;

}
frost$core$String* frost$core$Frost$allocationName$frost$core$Class$R$frost$core$String(frost$core$Class* param0) {

// line 36
frost$core$String** $tmp15 = &param0->name;
frost$core$String* $tmp16 = *$tmp15;
frost$core$Bit $tmp17 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp16, &$s18);
bool $tmp19 = $tmp17.value;
if ($tmp19) goto block1; else goto block3;
block3:;
frost$core$String** $tmp20 = &param0->name;
frost$core$String* $tmp21 = *$tmp20;
frost$core$Bit $tmp22 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp21, &$s23);
bool $tmp24 = $tmp22.value;
if ($tmp24) goto block1; else goto block2;
block1:;
// line 37
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s25));
return &$s26;
block2:;
// line 39
frost$core$String** $tmp27 = &param0->name;
frost$core$String* $tmp28 = *$tmp27;
frost$core$Bit $tmp29 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp28, &$s30);
bool $tmp31 = $tmp29.value;
if ($tmp31) goto block4; else goto block6;
block6:;
frost$core$String** $tmp32 = &param0->name;
frost$core$String* $tmp33 = *$tmp32;
frost$core$Bit $tmp34 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp33, &$s35);
bool $tmp36 = $tmp34.value;
if ($tmp36) goto block4; else goto block5;
block4:;
// line 40
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s37));
return &$s38;
block5:;
// line 42
frost$core$String** $tmp39 = &param0->name;
frost$core$String* $tmp40 = *$tmp39;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
return $tmp40;

}
void frost$core$Frost$countAllocation$frost$core$Class(frost$core$Frost* param0, frost$core$Class* param1) {

frost$core$String* local0 = NULL;
frost$core$Int64$nullable local1;
// line 46
frost$core$String* $tmp41 = frost$core$Frost$allocationName$frost$core$Class$R$frost$core$String(param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$String* $tmp42 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local0) = $tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// line 47
frost$collections$HashMap** $tmp43 = &param0->allocations;
frost$collections$HashMap* $tmp44 = *$tmp43;
frost$core$String* $tmp45 = *(&local0);
frost$core$Object* $tmp46 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp44, ((frost$collections$Key*) $tmp45));
*(&local1) = ($tmp46 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp46)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp46);
// line 48
frost$core$Int64$nullable $tmp47 = *(&local1);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit(!$tmp47.nonnull);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block1; else goto block2;
block1:;
// line 49
frost$core$Int64 $tmp50 = (frost$core$Int64) {0};
*(&local1) = ((frost$core$Int64$nullable) { $tmp50, true });
goto block2;
block2:;
// line 51
frost$collections$HashMap** $tmp51 = &param0->allocations;
frost$collections$HashMap* $tmp52 = *$tmp51;
frost$core$String* $tmp53 = *(&local0);
frost$core$Int64$nullable $tmp54 = *(&local1);
frost$core$Int64 $tmp55 = (frost$core$Int64) {1};
int64_t $tmp56 = ((frost$core$Int64) $tmp54.value).value;
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56 + $tmp57;
frost$core$Int64 $tmp59 = (frost$core$Int64) {$tmp58};
frost$core$Int64$wrapper* $tmp60;
$tmp60 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp60->value = $tmp59;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp52, ((frost$collections$Key*) $tmp53), ((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$String* $tmp61 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void frost$core$Frost$countDeallocation$frost$core$Class(frost$core$Frost* param0, frost$core$Class* param1) {

frost$core$String* local0 = NULL;
frost$core$Int64$nullable local1;
// line 55
frost$core$String* $tmp62 = frost$core$Frost$allocationName$frost$core$Class$R$frost$core$String(param1);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$String* $tmp63 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local0) = $tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// line 56
frost$collections$HashMap** $tmp64 = &param0->allocations;
frost$collections$HashMap* $tmp65 = *$tmp64;
frost$core$String* $tmp66 = *(&local0);
frost$core$Object* $tmp67 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp65, ((frost$collections$Key*) $tmp66));
*(&local1) = ($tmp67 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp67)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp67);
// line 57
frost$core$Int64$nullable $tmp68 = *(&local1);
frost$core$Bit $tmp69 = frost$core$Bit$init$builtin_bit(!$tmp68.nonnull);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block1; else goto block2;
block1:;
// line 58
frost$core$Int64 $tmp71 = (frost$core$Int64) {0};
*(&local1) = ((frost$core$Int64$nullable) { $tmp71, true });
goto block2;
block2:;
// line 60
frost$collections$HashMap** $tmp72 = &param0->allocations;
frost$collections$HashMap* $tmp73 = *$tmp72;
frost$core$String* $tmp74 = *(&local0);
frost$core$Int64$nullable $tmp75 = *(&local1);
frost$core$Int64 $tmp76 = (frost$core$Int64) {1};
int64_t $tmp77 = ((frost$core$Int64) $tmp75.value).value;
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77 - $tmp78;
frost$core$Int64 $tmp80 = (frost$core$Int64) {$tmp79};
frost$core$Int64$wrapper* $tmp81;
$tmp81 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp81->value = $tmp80;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp73, ((frost$collections$Key*) $tmp74), ((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$String* $tmp82 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void frost$core$Frost$dumpReport(frost$core$Frost* param0) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
// line 64
frost$collections$HashMap** $tmp83 = &param0->allocations;
frost$collections$HashMap* $tmp84 = *$tmp83;
ITable* $tmp85 = ((frost$collections$MapView*) $tmp84)->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[3];
frost$collections$Iterator* $tmp88 = $tmp86(((frost$collections$MapView*) $tmp84));
goto block1;
block1:;
ITable* $tmp89 = $tmp88->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
frost$core$Bit $tmp92 = $tmp90($tmp88);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$String*) NULL);
ITable* $tmp94 = $tmp88->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[1];
frost$core$Object* $tmp97 = $tmp95($tmp88);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp97)));
frost$core$String* $tmp98 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local0) = ((frost$core$String*) $tmp97);
// line 65
frost$collections$HashMap** $tmp99 = &param0->allocations;
frost$collections$HashMap* $tmp100 = *$tmp99;
frost$core$String* $tmp101 = *(&local0);
frost$core$Object* $tmp102 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp100, ((frost$collections$Key*) $tmp101));
frost$core$Int64 $tmp103 = (frost$core$Int64) {0};
int64_t $tmp104 = ((frost$core$Int64) ($tmp102 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp102)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).value).value;
int64_t $tmp105 = $tmp103.value;
bool $tmp106 = $tmp104 != $tmp105;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp102);
if ($tmp108) goto block4; else goto block5;
block4:;
// line 66
frost$core$String* $tmp109 = *(&local0);
frost$core$String* $tmp110 = frost$core$String$get_asString$R$frost$core$String($tmp109);
frost$core$String* $tmp111 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp110, &$s112);
frost$collections$HashMap** $tmp113 = &param0->allocations;
frost$collections$HashMap* $tmp114 = *$tmp113;
frost$core$String* $tmp115 = *(&local0);
frost$core$Object* $tmp116 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp114, ((frost$collections$Key*) $tmp115));
frost$core$Object* $tmp117;
if (($tmp116 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp116)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    frost$core$Int64$wrapper* $tmp118;
    $tmp118 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp118->value = ((frost$core$Int64) ($tmp116 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp116)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp117 = ((frost$core$Object*) $tmp118);
}
else {
    $tmp117 = NULL;
}
frost$core$String* $tmp119 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp111, $tmp117);
frost$core$String* $tmp120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp119, &$s121);
frost$io$Console$printLine$frost$core$String($tmp120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
frost$core$Frost$unref$frost$core$Object$Q($tmp116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp97);
frost$core$String* $tmp122 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// line 69
frost$collections$HashMap** $tmp123 = &param0->traces;
frost$collections$HashMap* $tmp124 = *$tmp123;
ITable* $tmp125 = ((frost$collections$MapView*) $tmp124)->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp125 = $tmp125->next;
}
$fn127 $tmp126 = $tmp125->methods[3];
frost$collections$Iterator* $tmp128 = $tmp126(((frost$collections$MapView*) $tmp124));
goto block6;
block6:;
ITable* $tmp129 = $tmp128->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp129 = $tmp129->next;
}
$fn131 $tmp130 = $tmp129->methods[0];
frost$core$Bit $tmp132 = $tmp130($tmp128);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block8; else goto block7;
block7:;
*(&local1) = ((frost$core$String*) NULL);
ITable* $tmp134 = $tmp128->$class->itable;
while ($tmp134->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp134 = $tmp134->next;
}
$fn136 $tmp135 = $tmp134->methods[1];
frost$core$Object* $tmp137 = $tmp135($tmp128);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp137)));
frost$core$String* $tmp138 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local1) = ((frost$core$String*) $tmp137);
// line 70
frost$core$String* $tmp139 = *(&local1);
frost$core$String* $tmp140 = frost$core$String$get_asString$R$frost$core$String($tmp139);
frost$core$String* $tmp141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp140, &$s142);
frost$collections$HashMap** $tmp143 = &param0->traces;
frost$collections$HashMap* $tmp144 = *$tmp143;
frost$core$String* $tmp145 = *(&local1);
frost$core$Object* $tmp146 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp144, ((frost$collections$Key*) $tmp145));
frost$core$Object* $tmp147;
if (($tmp146 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp146)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).nonnull) {
    frost$core$Int64$wrapper* $tmp148;
    $tmp148 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp148->value = ((frost$core$Int64) ($tmp146 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp146)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 }).value);
    $tmp147 = ((frost$core$Object*) $tmp148);
}
else {
    $tmp147 = NULL;
}
frost$core$String* $tmp149 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp141, $tmp147);
frost$core$String* $tmp150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp149, &$s151);
frost$io$Console$printLine$frost$core$String($tmp150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q($tmp147);
frost$core$Frost$unref$frost$core$Object$Q($tmp146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q($tmp137);
frost$core$String* $tmp152 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local1) = ((frost$core$String*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
return;

}
void frost$core$Frost$countTrace$frost$core$String(frost$core$Frost* param0, frost$core$String* param1) {

frost$core$Int64$nullable local0;
// line 87
frost$collections$HashMap** $tmp153 = &param0->traces;
frost$collections$HashMap* $tmp154 = *$tmp153;
frost$core$Object* $tmp155 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp154, ((frost$collections$Key*) param1));
*(&local0) = ($tmp155 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) $tmp155)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
frost$core$Frost$unref$frost$core$Object$Q($tmp155);
// line 88
frost$core$Int64$nullable $tmp156 = *(&local0);
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit(!$tmp156.nonnull);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block1; else goto block2;
block1:;
// line 89
frost$core$Int64 $tmp159 = (frost$core$Int64) {0};
*(&local0) = ((frost$core$Int64$nullable) { $tmp159, true });
goto block2;
block2:;
// line 91
frost$collections$HashMap** $tmp160 = &param0->traces;
frost$collections$HashMap* $tmp161 = *$tmp160;
frost$core$Int64$nullable $tmp162 = *(&local0);
frost$core$Int64 $tmp163 = (frost$core$Int64) {1};
int64_t $tmp164 = ((frost$core$Int64) $tmp162.value).value;
int64_t $tmp165 = $tmp163.value;
int64_t $tmp166 = $tmp164 + $tmp165;
frost$core$Int64 $tmp167 = (frost$core$Int64) {$tmp166};
frost$core$Int64$wrapper* $tmp168;
$tmp168 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp168->value = $tmp167;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp161, ((frost$collections$Key*) param1), ((frost$core$Object*) $tmp168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
return;

}
void frost$core$Frost$_addWeakReference$frost$core$Weak$LTfrost$core$Object$GT$frost$collections$IdentityMap$LTfrost$core$Object$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Weak* param0, frost$collections$IdentityMap* param1) {

frost$core$Object* local0 = NULL;
frost$collections$Array* local1 = NULL;
// line 100
frost$core$Object* $tmp169 = frost$core$Weak$get$R$frost$core$Weak$T(param0);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp169);
frost$core$Object* $tmp170 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp170);
*(&local0) = $tmp169;
frost$core$Frost$unref$frost$core$Object$Q($tmp169);
// line 101
frost$core$Object* $tmp171 = *(&local0);
frost$core$Object* $tmp172 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(param1, $tmp171);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) $tmp172)));
frost$collections$Array* $tmp173 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local1) = ((frost$collections$Array*) $tmp172);
frost$core$Frost$unref$frost$core$Object$Q($tmp172);
// line 102
frost$collections$Array* $tmp174 = *(&local1);
frost$core$Bit $tmp175 = frost$core$Bit$init$builtin_bit($tmp174 == NULL);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block1; else goto block2;
block1:;
// line 103
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp177 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$collections$Array* $tmp178 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local1) = $tmp177;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// line 104
frost$core$Object* $tmp179 = *(&local0);
frost$collections$Array* $tmp180 = *(&local1);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(param1, $tmp179, ((frost$core$Object*) $tmp180));
// line 105
frost$core$Object* $tmp181 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
goto block2;
block2:;
// line 107
frost$collections$Array* $tmp182 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp182, ((frost$core$Object*) param0));
frost$collections$Array* $tmp183 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Object* $tmp184 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
*(&local0) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$weakReferentDestroyed$frost$core$Object$frost$collections$IdentityMap$LTfrost$core$Object$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Object* param0, frost$collections$IdentityMap* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Weak* local1 = NULL;
// line 112
frost$core$Frost$ref$frost$core$Object$Q(param0);
// line 113
frost$core$Object* $tmp185 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(param1, param0);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) $tmp185)));
frost$collections$Array* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local0) = ((frost$collections$Array*) $tmp185);
frost$core$Frost$unref$frost$core$Object$Q($tmp185);
// line 114
frost$collections$Array* $tmp187 = *(&local0);
frost$core$Bit $tmp188 = frost$core$Bit$init$builtin_bit($tmp187 != NULL);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp190 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s191, $tmp190);
abort(); // unreachable
block1:;
// line 115
frost$collections$Array* $tmp192 = *(&local0);
ITable* $tmp193 = ((frost$collections$Iterable*) $tmp192)->$class->itable;
while ($tmp193->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[0];
frost$collections$Iterator* $tmp196 = $tmp194(((frost$collections$Iterable*) $tmp192));
goto block3;
block3:;
ITable* $tmp197 = $tmp196->$class->itable;
while ($tmp197->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp197 = $tmp197->next;
}
$fn199 $tmp198 = $tmp197->methods[0];
frost$core$Bit $tmp200 = $tmp198($tmp196);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block5; else goto block4;
block4:;
*(&local1) = ((frost$core$Weak*) NULL);
ITable* $tmp202 = $tmp196->$class->itable;
while ($tmp202->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp202 = $tmp202->next;
}
$fn204 $tmp203 = $tmp202->methods[1];
frost$core$Object* $tmp205 = $tmp203($tmp196);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Weak*) $tmp205)));
frost$core$Weak* $tmp206 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local1) = ((frost$core$Weak*) $tmp205);
// line 116
frost$core$Weak* $tmp207 = *(&local1);
frost$core$Bit $tmp208 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp209 = &$tmp207->_valid;
*$tmp209 = $tmp208;
// line 117
frost$core$Weak* $tmp210 = *(&local1);
frost$core$Object** $tmp211 = &$tmp210->value;
*$tmp211 = ((frost$core$Object*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp205);
frost$core$Weak* $tmp212 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local1) = ((frost$core$Weak*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// line 119
frost$collections$IdentityMap$remove$frost$collections$IdentityMap$K(param1, param0);
frost$collections$Array* $tmp213 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
frost$collections$IdentityMap* frost$core$Frost$createWeakReferenceMap$R$frost$collections$IdentityMap$LTfrost$core$Object$Cfrost$collections$Array$LTfrost$core$Object$GT$GT() {

// line 124
FROST_ASSERT(56 == sizeof(frost$collections$IdentityMap));
frost$collections$IdentityMap* $tmp214 = (frost$collections$IdentityMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init($tmp214);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
return $tmp214;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$Error* local0 = NULL;
// line 141
*(&local0) = ((frost$core$Error*) NULL);
// line 142
frost$io$OutputStream* $tmp215 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s217, param0);
frost$core$String* $tmp218 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp216, &$s219);
frost$core$Int64$wrapper* $tmp220;
$tmp220 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp220->value = param1;
frost$core$String* $tmp221 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp218, ((frost$core$Object*) $tmp220));
frost$core$String* $tmp222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp221, &$s223);
$fn225 $tmp224 = ($fn225) $tmp215->$class->vtable[19];
frost$core$Error* $tmp226 = $tmp224($tmp215, $tmp222);
if ($tmp226 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local0) = $tmp226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
goto block2;
block1:;
goto block2;
block2:;
frost$core$Error* $tmp227 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local0) = ((frost$core$Error*) NULL);
// line 146
frost$core$System$crash();
return;

}
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$String* param2) {

frost$core$Error* local0 = NULL;
// line 151
*(&local0) = ((frost$core$Error*) NULL);
// line 152
frost$io$OutputStream* $tmp228 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$String* $tmp229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s230, param0);
frost$core$String* $tmp231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp229, &$s232);
frost$core$Int64$wrapper* $tmp233;
$tmp233 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp233->value = param1;
frost$core$String* $tmp234 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp231, ((frost$core$Object*) $tmp233));
frost$core$String* $tmp235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp234, &$s236);
frost$core$String* $tmp237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp235, param2);
frost$core$String* $tmp238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp237, &$s239);
$fn241 $tmp240 = ($fn241) $tmp228->$class->vtable[19];
frost$core$Error* $tmp242 = $tmp240($tmp228, $tmp238);
if ($tmp242 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local0) = $tmp242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
goto block2;
block1:;
goto block2;
block2:;
frost$core$Error* $tmp243 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local0) = ((frost$core$Error*) NULL);
// line 156
frost$core$System$crash();
return;

}
frost$core$UInt64$nullable frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q(frost$core$Char32 param0) {

// line 161
frost$core$Int32 $tmp244 = (frost$core$Int32) {48};
frost$core$Char32 $tmp245 = frost$core$Char32$init$frost$core$Int32($tmp244);
frost$core$Bit $tmp246 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp245);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block3; else goto block2;
block3:;
frost$core$Int32 $tmp248 = (frost$core$Int32) {57};
frost$core$Char32 $tmp249 = frost$core$Char32$init$frost$core$Int32($tmp248);
frost$core$Bit $tmp250 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp249);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block1; else goto block2;
block1:;
// line 162
frost$core$UInt64 $tmp252 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp253 = (frost$core$UInt8) {48};
frost$core$Char8 $tmp254 = frost$core$Char8$init$frost$core$UInt8($tmp253);
frost$core$UInt64 $tmp255 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp254);
uint64_t $tmp256 = $tmp252.value;
uint64_t $tmp257 = $tmp255.value;
uint64_t $tmp258 = $tmp256 - $tmp257;
frost$core$UInt64 $tmp259 = (frost$core$UInt64) {$tmp258};
return ((frost$core$UInt64$nullable) { $tmp259, true });
block2:;
// line 164
frost$core$Int32 $tmp260 = (frost$core$Int32) {65};
frost$core$Char32 $tmp261 = frost$core$Char32$init$frost$core$Int32($tmp260);
frost$core$Bit $tmp262 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp261);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block6; else goto block5;
block6:;
frost$core$Int32 $tmp264 = (frost$core$Int32) {90};
frost$core$Char32 $tmp265 = frost$core$Char32$init$frost$core$Int32($tmp264);
frost$core$Bit $tmp266 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp265);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block4; else goto block5;
block4:;
// line 165
frost$core$UInt64 $tmp268 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp269 = (frost$core$UInt8) {65};
frost$core$Char8 $tmp270 = frost$core$Char8$init$frost$core$UInt8($tmp269);
frost$core$UInt64 $tmp271 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp270);
uint64_t $tmp272 = $tmp268.value;
uint64_t $tmp273 = $tmp271.value;
uint64_t $tmp274 = $tmp272 - $tmp273;
frost$core$UInt64 $tmp275 = (frost$core$UInt64) {$tmp274};
frost$core$UInt64 $tmp276 = (frost$core$UInt64) {10};
uint64_t $tmp277 = $tmp275.value;
uint64_t $tmp278 = $tmp276.value;
uint64_t $tmp279 = $tmp277 + $tmp278;
frost$core$UInt64 $tmp280 = (frost$core$UInt64) {$tmp279};
return ((frost$core$UInt64$nullable) { $tmp280, true });
block5:;
// line 167
frost$core$Int32 $tmp281 = (frost$core$Int32) {97};
frost$core$Char32 $tmp282 = frost$core$Char32$init$frost$core$Int32($tmp281);
frost$core$Bit $tmp283 = frost$core$Char32$$GE$frost$core$Char32$R$frost$core$Bit(param0, $tmp282);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block9; else goto block8;
block9:;
frost$core$Int32 $tmp285 = (frost$core$Int32) {122};
frost$core$Char32 $tmp286 = frost$core$Char32$init$frost$core$Int32($tmp285);
frost$core$Bit $tmp287 = frost$core$Char32$$LE$frost$core$Char32$R$frost$core$Bit(param0, $tmp286);
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block7; else goto block8;
block7:;
// line 168
frost$core$UInt64 $tmp289 = frost$core$Char32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt8 $tmp290 = (frost$core$UInt8) {97};
frost$core$Char8 $tmp291 = frost$core$Char8$init$frost$core$UInt8($tmp290);
frost$core$UInt64 $tmp292 = frost$core$Char8$get_asUInt64$R$frost$core$UInt64($tmp291);
uint64_t $tmp293 = $tmp289.value;
uint64_t $tmp294 = $tmp292.value;
uint64_t $tmp295 = $tmp293 - $tmp294;
frost$core$UInt64 $tmp296 = (frost$core$UInt64) {$tmp295};
frost$core$UInt64 $tmp297 = (frost$core$UInt64) {10};
uint64_t $tmp298 = $tmp296.value;
uint64_t $tmp299 = $tmp297.value;
uint64_t $tmp300 = $tmp298 + $tmp299;
frost$core$UInt64 $tmp301 = (frost$core$UInt64) {$tmp300};
return ((frost$core$UInt64$nullable) { $tmp301, true });
block8:;
// line 170
return ((frost$core$UInt64$nullable) { .nonnull = false });

}
frost$core$UInt64$nullable frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64 local0;
frost$core$UInt64 local1;
frost$core$String$Index local2;
frost$core$UInt64$nullable local3;
// line 178
frost$core$Bit $tmp302 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param0, &$s303);
bool $tmp304 = $tmp302.value;
if ($tmp304) goto block1; else goto block2;
block1:;
// line 179
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 181
frost$core$UInt64 $tmp305 = (frost$core$UInt64) {0};
*(&local0) = $tmp305;
// line 182
frost$core$UInt64 $tmp306 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64(param1);
*(&local1) = $tmp306;
// line 183
frost$core$String$Index $tmp307 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp307;
// line 184
goto block3;
block3:;
frost$core$String$Index $tmp308 = *(&local2);
frost$core$String$Index$wrapper* $tmp309;
$tmp309 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp309->value = $tmp308;
frost$core$String$Index $tmp310 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp311;
$tmp311 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp311->value = $tmp310;
ITable* $tmp312 = ((frost$core$Equatable*) $tmp309)->$class->itable;
while ($tmp312->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp312 = $tmp312->next;
}
$fn314 $tmp313 = $tmp312->methods[1];
frost$core$Bit $tmp315 = $tmp313(((frost$core$Equatable*) $tmp309), ((frost$core$Equatable*) $tmp311));
bool $tmp316 = $tmp315.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp311)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp309)));
if ($tmp316) goto block4; else goto block5;
block4:;
// line 185
frost$core$String$Index $tmp317 = *(&local2);
frost$core$Char32 $tmp318 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp317);
frost$core$UInt64$nullable $tmp319 = frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q($tmp318);
*(&local3) = $tmp319;
// line 186
frost$core$UInt64$nullable $tmp320 = *(&local3);
frost$core$Bit $tmp321 = frost$core$Bit$init$builtin_bit(!$tmp320.nonnull);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block6; else goto block8;
block8:;
frost$core$UInt64$nullable $tmp323 = *(&local3);
frost$core$UInt64 $tmp324 = *(&local1);
uint64_t $tmp325 = ((frost$core$UInt64) $tmp323.value).value;
uint64_t $tmp326 = $tmp324.value;
bool $tmp327 = $tmp325 >= $tmp326;
frost$core$Bit $tmp328 = (frost$core$Bit) {$tmp327};
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block6; else goto block7;
block6:;
// line 187
return ((frost$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 189
frost$core$UInt64 $tmp330 = *(&local0);
frost$core$UInt64 $tmp331 = *(&local1);
uint64_t $tmp332 = $tmp330.value;
uint64_t $tmp333 = $tmp331.value;
uint64_t $tmp334 = $tmp332 * $tmp333;
frost$core$UInt64 $tmp335 = (frost$core$UInt64) {$tmp334};
frost$core$UInt64$nullable $tmp336 = *(&local3);
uint64_t $tmp337 = $tmp335.value;
uint64_t $tmp338 = ((frost$core$UInt64) $tmp336.value).value;
uint64_t $tmp339 = $tmp337 + $tmp338;
frost$core$UInt64 $tmp340 = (frost$core$UInt64) {$tmp339};
*(&local0) = $tmp340;
// line 190
frost$core$String$Index $tmp341 = *(&local2);
frost$core$String$Index $tmp342 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp341);
*(&local2) = $tmp342;
goto block3;
block5:;
// line 192
frost$core$UInt64 $tmp343 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp343, true });

}
frost$core$String* frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$Int64$nullable local1;
frost$core$Char32 local2;
// line 218
frost$core$Int64 $tmp344 = frost$core$String$get_length$R$frost$core$Int64(param1);
frost$core$Int64 $tmp345 = (frost$core$Int64) {2};
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345.value;
bool $tmp348 = $tmp346 >= $tmp347;
frost$core$Bit $tmp349 = (frost$core$Bit) {$tmp348};
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp351 = (frost$core$Int64) {218};
frost$core$String* $tmp352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s353, param1);
frost$core$String* $tmp354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp352, &$s355);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s356, $tmp351, $tmp354);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
abort(); // unreachable
block1:;
// line 219
frost$core$String$Index $tmp357 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index $tmp358 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp357);
*(&local0) = $tmp358;
// line 220
frost$core$String$Index $tmp359 = *(&local0);
frost$core$Char32 $tmp360 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp359);
frost$core$Int32 $tmp361 = (frost$core$Int32) {60};
frost$core$Char32 $tmp362 = frost$core$Char32$init$frost$core$Int32($tmp361);
frost$core$Bit $tmp363 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp360, $tmp362);
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp365 = (frost$core$Int32) {94};
frost$core$Char32 $tmp366 = frost$core$Char32$init$frost$core$Int32($tmp365);
frost$core$Bit $tmp367 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp360, $tmp366);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block4; else goto block6;
block6:;
frost$core$Int32 $tmp369 = (frost$core$Int32) {62};
frost$core$Char32 $tmp370 = frost$core$Char32$init$frost$core$Int32($tmp369);
frost$core$Bit $tmp371 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp360, $tmp370);
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block4; else goto block7;
block4:;
goto block3;
block7:;
// line 225
frost$core$String$Index $tmp373 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local0) = $tmp373;
goto block3;
block3:;
// line 228
frost$core$String$Index $tmp374 = *(&local0);
frost$core$String$Index $tmp375 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp374);
frost$core$Bit $tmp376 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp377 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp375, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp376);
frost$core$String* $tmp378 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp377);
frost$core$Int64$nullable $tmp379 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp378);
*(&local1) = $tmp379;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// line 229
// line 230
frost$core$String$Index $tmp380 = *(&local0);
frost$core$String$Index $tmp381 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Bit $tmp382 = frost$core$String$Index$$EQ$frost$core$String$Index$R$frost$core$Bit($tmp380, $tmp381);
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block8; else goto block10;
block8:;
// line 231
frost$core$Int32 $tmp384 = (frost$core$Int32) {32};
frost$core$Char32 $tmp385 = frost$core$Char32$init$frost$core$Int32($tmp384);
*(&local2) = $tmp385;
goto block9;
block10:;
// line 1
// line 234
frost$core$String$Index $tmp386 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$Char32 $tmp387 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp386);
*(&local2) = $tmp387;
goto block9;
block9:;
// line 236
frost$core$String$Index $tmp388 = *(&local0);
frost$core$Char32 $tmp389 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp388);
frost$core$Int32 $tmp390 = (frost$core$Int32) {60};
frost$core$Char32 $tmp391 = frost$core$Char32$init$frost$core$Int32($tmp390);
frost$core$Bit $tmp392 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp389, $tmp391);
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block12; else goto block13;
block12:;
// line 237
frost$core$Int64$nullable $tmp394 = *(&local1);
frost$core$Char32 $tmp395 = *(&local2);
frost$core$String* $tmp396 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp394.value), $tmp395);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
return $tmp396;
block13:;
frost$core$Int32 $tmp397 = (frost$core$Int32) {94};
frost$core$Char32 $tmp398 = frost$core$Char32$init$frost$core$Int32($tmp397);
frost$core$Bit $tmp399 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp389, $tmp398);
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block14; else goto block15;
block14:;
// line 238
frost$core$Int64$nullable $tmp401 = *(&local1);
frost$core$Char32 $tmp402 = *(&local2);
frost$core$String* $tmp403 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp401.value), $tmp402);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
return $tmp403;
block15:;
frost$core$Int32 $tmp404 = (frost$core$Int32) {62};
frost$core$Char32 $tmp405 = frost$core$Char32$init$frost$core$Int32($tmp404);
frost$core$Bit $tmp406 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp389, $tmp405);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block16; else goto block17;
block16:;
// line 239
frost$core$Int64$nullable $tmp408 = *(&local1);
frost$core$Char32 $tmp409 = *(&local2);
frost$core$String* $tmp410 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, ((frost$core$Int64) $tmp408.value), $tmp409);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
return $tmp410;
block17:;
// line 240
frost$core$Int64 $tmp411 = (frost$core$Int64) {240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s412, $tmp411);
abort(); // unreachable
block11:;
goto block18;
block18:;

}
frost$core$String* frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(frost$core$Bit param0, frost$core$UInt64 param1, frost$core$UInt64 param2, frost$core$String* param3) {

frost$core$String$Index local0;
frost$core$UInt64 local1;
frost$collections$ListView* local2 = NULL;
frost$core$UInt64 local3;
frost$core$Int64 local4;
frost$core$Char8* local5;
frost$core$Int64 local6;
frost$core$Int64 local7;
frost$core$Int64 local8;
// line 254
frost$core$String$Index $tmp413 = frost$core$String$get_start$R$frost$core$String$Index(param3);
*(&local0) = $tmp413;
// line 255
frost$core$UInt64 $tmp414 = (frost$core$UInt64) {10};
*(&local1) = $tmp414;
// line 256
frost$collections$ListView* $tmp415 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s416);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$collections$ListView* $tmp417 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local2) = $tmp415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// line 257
frost$core$String$Index $tmp418 = *(&local0);
frost$core$String$Index$wrapper* $tmp419;
$tmp419 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp419->value = $tmp418;
frost$core$String$Index $tmp420 = frost$core$String$get_end$R$frost$core$String$Index(param3);
frost$core$String$Index$wrapper* $tmp421;
$tmp421 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp421->value = $tmp420;
ITable* $tmp422 = ((frost$core$Comparable*) $tmp419)->$class->itable;
while ($tmp422->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp422 = $tmp422->next;
}
$fn424 $tmp423 = $tmp422->methods[1];
frost$core$Bit $tmp425 = $tmp423(((frost$core$Comparable*) $tmp419), ((frost$core$Comparable*) $tmp421));
bool $tmp426 = $tmp425.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp421)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp419)));
if ($tmp426) goto block1; else goto block2;
block1:;
// line 258
frost$core$String$Index $tmp427 = *(&local0);
frost$core$Char32 $tmp428 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param3, $tmp427);
frost$core$Int32 $tmp429 = (frost$core$Int32) {98};
frost$core$Char32 $tmp430 = frost$core$Char32$init$frost$core$Int32($tmp429);
frost$core$Bit $tmp431 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp428, $tmp430);
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block4; else goto block5;
block5:;
frost$core$Int32 $tmp433 = (frost$core$Int32) {66};
frost$core$Char32 $tmp434 = frost$core$Char32$init$frost$core$Int32($tmp433);
frost$core$Bit $tmp435 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp428, $tmp434);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block4; else goto block6;
block4:;
// line 260
frost$core$UInt64 $tmp437 = (frost$core$UInt64) {2};
*(&local1) = $tmp437;
goto block3;
block6:;
frost$core$Int32 $tmp438 = (frost$core$Int32) {111};
frost$core$Char32 $tmp439 = frost$core$Char32$init$frost$core$Int32($tmp438);
frost$core$Bit $tmp440 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp428, $tmp439);
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block7; else goto block8;
block8:;
frost$core$Int32 $tmp442 = (frost$core$Int32) {79};
frost$core$Char32 $tmp443 = frost$core$Char32$init$frost$core$Int32($tmp442);
frost$core$Bit $tmp444 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp428, $tmp443);
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block7; else goto block9;
block7:;
// line 263
frost$core$UInt64 $tmp446 = (frost$core$UInt64) {8};
*(&local1) = $tmp446;
goto block3;
block9:;
frost$core$Int32 $tmp447 = (frost$core$Int32) {100};
frost$core$Char32 $tmp448 = frost$core$Char32$init$frost$core$Int32($tmp447);
frost$core$Bit $tmp449 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp428, $tmp448);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block10; else goto block11;
block11:;
frost$core$Int32 $tmp451 = (frost$core$Int32) {68};
frost$core$Char32 $tmp452 = frost$core$Char32$init$frost$core$Int32($tmp451);
frost$core$Bit $tmp453 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp428, $tmp452);
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block10; else goto block12;
block10:;
// line 266
frost$core$UInt64 $tmp455 = (frost$core$UInt64) {10};
*(&local1) = $tmp455;
goto block3;
block12:;
frost$core$Int32 $tmp456 = (frost$core$Int32) {120};
frost$core$Char32 $tmp457 = frost$core$Char32$init$frost$core$Int32($tmp456);
frost$core$Bit $tmp458 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp428, $tmp457);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block13; else goto block14;
block13:;
// line 269
frost$core$UInt64 $tmp460 = (frost$core$UInt64) {16};
*(&local1) = $tmp460;
goto block3;
block14:;
frost$core$Int32 $tmp461 = (frost$core$Int32) {88};
frost$core$Char32 $tmp462 = frost$core$Char32$init$frost$core$Int32($tmp461);
frost$core$Bit $tmp463 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp428, $tmp462);
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block15; else goto block16;
block15:;
// line 272
frost$core$UInt64 $tmp465 = (frost$core$UInt64) {16};
*(&local1) = $tmp465;
// line 273
frost$collections$ListView* $tmp466 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(&$s467);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$collections$ListView* $tmp468 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local2) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
goto block3;
block16:;
// line 276
frost$core$Int64 $tmp469 = (frost$core$Int64) {276};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s470, $tmp469, &$s471);
abort(); // unreachable
block3:;
goto block2;
block2:;
// line 280
// line 281
bool $tmp472 = param0.value;
if ($tmp472) goto block20; else goto block19;
block20:;
frost$core$UInt64 $tmp473 = *(&local1);
frost$core$UInt64 $tmp474 = (frost$core$UInt64) {10};
uint64_t $tmp475 = $tmp473.value;
uint64_t $tmp476 = $tmp474.value;
bool $tmp477 = $tmp475 != $tmp476;
frost$core$Bit $tmp478 = (frost$core$Bit) {$tmp477};
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block17; else goto block19;
block17:;
// line 282
frost$core$Int64 $tmp480 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(param1);
frost$core$Int64 $tmp481 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp480);
frost$core$UInt64 $tmp482 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp481);
frost$core$UInt64 $tmp483 = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64($tmp482, param2);
*(&local3) = $tmp483;
goto block18;
block19:;
// line 1
// line 285
*(&local3) = param1;
goto block18;
block18:;
// line 287
frost$core$Int64 $tmp484 = (frost$core$Int64) {64};
*(&local4) = $tmp484;
// line 288
frost$core$Int64 $tmp485 = *(&local4);
int64_t $tmp486 = $tmp485.value;
frost$core$Char8* $tmp487 = ((frost$core$Char8*) frostAlloc($tmp486 * 1));
*(&local5) = $tmp487;
// line 289
frost$core$Int64 $tmp488 = *(&local4);
frost$core$Int64 $tmp489 = (frost$core$Int64) {1};
int64_t $tmp490 = $tmp488.value;
int64_t $tmp491 = $tmp489.value;
int64_t $tmp492 = $tmp490 - $tmp491;
frost$core$Int64 $tmp493 = (frost$core$Int64) {$tmp492};
*(&local6) = $tmp493;
// line 290
goto block21;
block21:;
// line 291
frost$core$Char8* $tmp494 = *(&local5);
frost$core$Int64 $tmp495 = *(&local6);
frost$collections$ListView* $tmp496 = *(&local2);
frost$core$UInt64 $tmp497 = *(&local3);
frost$core$UInt64 $tmp498 = *(&local1);
frost$core$UInt64 $tmp499 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp497, $tmp498);
frost$core$Int64 $tmp500 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp499);
ITable* $tmp501 = $tmp496->$class->itable;
while ($tmp501->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp501 = $tmp501->next;
}
$fn503 $tmp502 = $tmp501->methods[0];
frost$core$Object* $tmp504 = $tmp502($tmp496, $tmp500);
int64_t $tmp505 = $tmp495.value;
$tmp494[$tmp505] = ((frost$core$Char8$wrapper*) $tmp504)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp504);
// line 292
frost$core$UInt64 $tmp506 = *(&local3);
frost$core$UInt64 $tmp507 = *(&local1);
uint64_t $tmp508 = $tmp506.value;
uint64_t $tmp509 = $tmp507.value;
uint64_t $tmp510 = $tmp508 / $tmp509;
frost$core$UInt64 $tmp511 = (frost$core$UInt64) {$tmp510};
*(&local3) = $tmp511;
// line 293
frost$core$Int64 $tmp512 = *(&local6);
frost$core$Int64 $tmp513 = (frost$core$Int64) {1};
int64_t $tmp514 = $tmp512.value;
int64_t $tmp515 = $tmp513.value;
int64_t $tmp516 = $tmp514 - $tmp515;
frost$core$Int64 $tmp517 = (frost$core$Int64) {$tmp516};
*(&local6) = $tmp517;
goto block22;
block22:;
frost$core$UInt64 $tmp518 = *(&local3);
frost$core$UInt64 $tmp519 = (frost$core$UInt64) {0};
uint64_t $tmp520 = $tmp518.value;
uint64_t $tmp521 = $tmp519.value;
bool $tmp522 = $tmp520 > $tmp521;
frost$core$Bit $tmp523 = (frost$core$Bit) {$tmp522};
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block21; else goto block23;
block23:;
// line 296
bool $tmp525 = param0.value;
if ($tmp525) goto block26; else goto block25;
block26:;
frost$core$UInt64 $tmp526 = *(&local1);
frost$core$UInt64 $tmp527 = (frost$core$UInt64) {10};
frost$core$Bit $tmp528 = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit($tmp526, $tmp527);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block24; else goto block25;
block24:;
// line 297
frost$core$Char8* $tmp530 = *(&local5);
frost$core$Int64 $tmp531 = *(&local6);
frost$core$UInt8 $tmp532 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp533 = frost$core$Char8$init$frost$core$UInt8($tmp532);
int64_t $tmp534 = $tmp531.value;
$tmp530[$tmp534] = $tmp533;
// line 298
frost$core$Int64 $tmp535 = *(&local6);
frost$core$Int64 $tmp536 = (frost$core$Int64) {1};
int64_t $tmp537 = $tmp535.value;
int64_t $tmp538 = $tmp536.value;
int64_t $tmp539 = $tmp537 - $tmp538;
frost$core$Int64 $tmp540 = (frost$core$Int64) {$tmp539};
*(&local6) = $tmp540;
goto block25;
block25:;
// line 300
frost$core$Int64 $tmp541 = *(&local6);
frost$core$Int64 $tmp542 = (frost$core$Int64) {1};
int64_t $tmp543 = $tmp541.value;
int64_t $tmp544 = $tmp542.value;
int64_t $tmp545 = $tmp543 + $tmp544;
frost$core$Int64 $tmp546 = (frost$core$Int64) {$tmp545};
*(&local6) = $tmp546;
// line 301
frost$core$Int64 $tmp547 = *(&local4);
frost$core$Int64 $tmp548 = *(&local6);
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 - $tmp550;
frost$core$Int64 $tmp552 = (frost$core$Int64) {$tmp551};
*(&local7) = $tmp552;
// line 302
frost$core$Int64 $tmp553 = (frost$core$Int64) {0};
frost$core$Int64 $tmp554 = *(&local7);
frost$core$Bit $tmp555 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp556 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp553, $tmp554, $tmp555);
frost$core$Int64 $tmp557 = $tmp556.min;
*(&local8) = $tmp557;
frost$core$Int64 $tmp558 = $tmp556.max;
frost$core$Bit $tmp559 = $tmp556.inclusive;
bool $tmp560 = $tmp559.value;
frost$core$Int64 $tmp561 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp562 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp561);
if ($tmp560) goto block30; else goto block31;
block30:;
int64_t $tmp563 = $tmp557.value;
int64_t $tmp564 = $tmp558.value;
bool $tmp565 = $tmp563 <= $tmp564;
frost$core$Bit $tmp566 = (frost$core$Bit) {$tmp565};
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block27; else goto block28;
block31:;
int64_t $tmp568 = $tmp557.value;
int64_t $tmp569 = $tmp558.value;
bool $tmp570 = $tmp568 < $tmp569;
frost$core$Bit $tmp571 = (frost$core$Bit) {$tmp570};
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block27; else goto block28;
block27:;
// line 303
frost$core$Char8* $tmp573 = *(&local5);
frost$core$Int64 $tmp574 = *(&local8);
frost$core$Char8* $tmp575 = *(&local5);
frost$core$Int64 $tmp576 = *(&local8);
frost$core$Int64 $tmp577 = *(&local6);
int64_t $tmp578 = $tmp576.value;
int64_t $tmp579 = $tmp577.value;
int64_t $tmp580 = $tmp578 + $tmp579;
frost$core$Int64 $tmp581 = (frost$core$Int64) {$tmp580};
int64_t $tmp582 = $tmp581.value;
frost$core$Char8 $tmp583 = $tmp575[$tmp582];
int64_t $tmp584 = $tmp574.value;
$tmp573[$tmp584] = $tmp583;
goto block29;
block29:;
frost$core$Int64 $tmp585 = *(&local8);
int64_t $tmp586 = $tmp558.value;
int64_t $tmp587 = $tmp585.value;
int64_t $tmp588 = $tmp586 - $tmp587;
frost$core$Int64 $tmp589 = (frost$core$Int64) {$tmp588};
frost$core$UInt64 $tmp590 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp589);
if ($tmp560) goto block33; else goto block34;
block33:;
uint64_t $tmp591 = $tmp590.value;
uint64_t $tmp592 = $tmp562.value;
bool $tmp593 = $tmp591 >= $tmp592;
frost$core$Bit $tmp594 = (frost$core$Bit) {$tmp593};
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block32; else goto block28;
block34:;
uint64_t $tmp596 = $tmp590.value;
uint64_t $tmp597 = $tmp562.value;
bool $tmp598 = $tmp596 > $tmp597;
frost$core$Bit $tmp599 = (frost$core$Bit) {$tmp598};
bool $tmp600 = $tmp599.value;
if ($tmp600) goto block32; else goto block28;
block32:;
int64_t $tmp601 = $tmp585.value;
int64_t $tmp602 = $tmp561.value;
int64_t $tmp603 = $tmp601 + $tmp602;
frost$core$Int64 $tmp604 = (frost$core$Int64) {$tmp603};
*(&local8) = $tmp604;
goto block27;
block28:;
// line 305
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp605 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp606 = *(&local5);
frost$core$Int64 $tmp607 = *(&local7);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp605, $tmp606, $tmp607);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
frost$collections$ListView* $tmp608 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local2) = ((frost$collections$ListView*) NULL);
return $tmp605;

}
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2) {

frost$core$Object* local0 = NULL;
// line 327
ITable* $tmp609 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp609->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp609 = $tmp609->next;
}
$fn611 $tmp610 = $tmp609->methods[0];
frost$core$Object* $tmp612 = $tmp610(((frost$collections$ListView*) param0), param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp612);
frost$core$Object* $tmp613 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp613);
*(&local0) = $tmp612;
frost$core$Frost$unref$frost$core$Object$Q($tmp612);
// line 328
ITable* $tmp614 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp614->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp614 = $tmp614->next;
}
$fn616 $tmp615 = $tmp614->methods[0];
frost$core$Object* $tmp617 = $tmp615(((frost$collections$ListView*) param0), param2);
ITable* $tmp618 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp618->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp618 = $tmp618->next;
}
$fn620 $tmp619 = $tmp618->methods[0];
$tmp619(((frost$collections$ListWriter*) param0), param1, $tmp617);
frost$core$Frost$unref$frost$core$Object$Q($tmp617);
// line 329
frost$core$Object* $tmp621 = *(&local0);
ITable* $tmp622 = ((frost$collections$ListWriter*) param0)->$class->itable;
while ($tmp622->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp622 = $tmp622->next;
}
$fn624 $tmp623 = $tmp622->methods[0];
$tmp623(((frost$collections$ListWriter*) param0), param2, $tmp621);
frost$core$Object* $tmp625 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp625);
*(&local0) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* param0, frost$core$Int64 param1, frost$core$Int64 param2, frost$core$MutableMethod* param3) {

frost$core$Int64 local0;
frost$core$Object* local1 = NULL;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Bit local4;
// line 336
int64_t $tmp626 = param1.value;
int64_t $tmp627 = param2.value;
bool $tmp628 = $tmp626 >= $tmp627;
frost$core$Bit $tmp629 = (frost$core$Bit) {$tmp628};
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block1; else goto block2;
block1:;
// line 337
return;
block2:;
// line 339
int64_t $tmp631 = param2.value;
int64_t $tmp632 = param1.value;
int64_t $tmp633 = $tmp631 - $tmp632;
frost$core$Int64 $tmp634 = (frost$core$Int64) {$tmp633};
frost$core$Int64 $tmp635 = (frost$core$Int64) {2};
int64_t $tmp636 = $tmp634.value;
int64_t $tmp637 = $tmp635.value;
int64_t $tmp638 = $tmp636 / $tmp637;
frost$core$Int64 $tmp639 = (frost$core$Int64) {$tmp638};
int64_t $tmp640 = param1.value;
int64_t $tmp641 = $tmp639.value;
int64_t $tmp642 = $tmp640 + $tmp641;
frost$core$Int64 $tmp643 = (frost$core$Int64) {$tmp642};
*(&local0) = $tmp643;
// line 340
frost$core$Int64 $tmp644 = *(&local0);
ITable* $tmp645 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp645->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp645 = $tmp645->next;
}
$fn647 $tmp646 = $tmp645->methods[0];
frost$core$Object* $tmp648 = $tmp646(((frost$collections$ListView*) param0), $tmp644);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp648);
frost$core$Object* $tmp649 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp649);
*(&local1) = $tmp648;
frost$core$Frost$unref$frost$core$Object$Q($tmp648);
// line 341
frost$core$Int64 $tmp650 = *(&local0);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, param2, $tmp650);
// line 342
*(&local2) = param1;
// line 343
frost$core$Int64 $tmp651 = (frost$core$Int64) {1};
int64_t $tmp652 = param2.value;
int64_t $tmp653 = $tmp651.value;
int64_t $tmp654 = $tmp652 - $tmp653;
frost$core$Int64 $tmp655 = (frost$core$Int64) {$tmp654};
frost$core$Bit $tmp656 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp657 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp655, $tmp656);
frost$core$Int64 $tmp658 = $tmp657.min;
*(&local3) = $tmp658;
frost$core$Int64 $tmp659 = $tmp657.max;
frost$core$Bit $tmp660 = $tmp657.inclusive;
bool $tmp661 = $tmp660.value;
frost$core$Int64 $tmp662 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp663 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp662);
if ($tmp661) goto block6; else goto block7;
block6:;
int64_t $tmp664 = $tmp658.value;
int64_t $tmp665 = $tmp659.value;
bool $tmp666 = $tmp664 <= $tmp665;
frost$core$Bit $tmp667 = (frost$core$Bit) {$tmp666};
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block3; else goto block4;
block7:;
int64_t $tmp669 = $tmp658.value;
int64_t $tmp670 = $tmp659.value;
bool $tmp671 = $tmp669 < $tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block3; else goto block4;
block3:;
// line 344
frost$core$Int64 $tmp674 = *(&local3);
ITable* $tmp675 = ((frost$collections$ListView*) param0)->$class->itable;
while ($tmp675->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp675 = $tmp675->next;
}
$fn677 $tmp676 = $tmp675->methods[0];
frost$core$Object* $tmp678 = $tmp676(((frost$collections$ListView*) param0), $tmp674);
frost$core$Object* $tmp679 = *(&local1);
frost$core$Int8** $tmp680 = &param3->pointer;
frost$core$Int8* $tmp681 = *$tmp680;
frost$core$Object** $tmp682 = &param3->target;
frost$core$Object* $tmp683 = *$tmp682;
bool $tmp684 = $tmp683 != ((frost$core$Object*) NULL);
if ($tmp684) goto block10; else goto block11;
block11:;
frost$core$Bit $tmp686 = (($fn685) $tmp681)($tmp678, $tmp679);
*(&local4) = $tmp686;
goto block12;
block10:;
frost$core$Bit $tmp688 = (($fn687) $tmp681)($tmp683, $tmp678, $tmp679);
*(&local4) = $tmp688;
goto block12;
block12:;
frost$core$Bit $tmp689 = *(&local4);
frost$core$Bit $tmp690 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp689);
bool $tmp691 = $tmp690.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp678);
if ($tmp691) goto block8; else goto block9;
block8:;
// line 345
frost$core$Int64 $tmp692 = *(&local3);
frost$core$Int64 $tmp693 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp692, $tmp693);
// line 346
frost$core$Int64 $tmp694 = *(&local2);
frost$core$Int64 $tmp695 = (frost$core$Int64) {1};
int64_t $tmp696 = $tmp694.value;
int64_t $tmp697 = $tmp695.value;
int64_t $tmp698 = $tmp696 + $tmp697;
frost$core$Int64 $tmp699 = (frost$core$Int64) {$tmp698};
*(&local2) = $tmp699;
goto block9;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp700 = *(&local3);
int64_t $tmp701 = $tmp659.value;
int64_t $tmp702 = $tmp700.value;
int64_t $tmp703 = $tmp701 - $tmp702;
frost$core$Int64 $tmp704 = (frost$core$Int64) {$tmp703};
frost$core$UInt64 $tmp705 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp704);
if ($tmp661) goto block14; else goto block15;
block14:;
uint64_t $tmp706 = $tmp705.value;
uint64_t $tmp707 = $tmp663.value;
bool $tmp708 = $tmp706 >= $tmp707;
frost$core$Bit $tmp709 = (frost$core$Bit) {$tmp708};
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block13; else goto block4;
block15:;
uint64_t $tmp711 = $tmp705.value;
uint64_t $tmp712 = $tmp663.value;
bool $tmp713 = $tmp711 > $tmp712;
frost$core$Bit $tmp714 = (frost$core$Bit) {$tmp713};
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block13; else goto block4;
block13:;
int64_t $tmp716 = $tmp700.value;
int64_t $tmp717 = $tmp662.value;
int64_t $tmp718 = $tmp716 + $tmp717;
frost$core$Int64 $tmp719 = (frost$core$Int64) {$tmp718};
*(&local3) = $tmp719;
goto block3;
block4:;
// line 349
frost$core$Int64 $tmp720 = *(&local2);
frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(param0, $tmp720, param2);
// line 350
frost$core$Int64 $tmp721 = *(&local2);
frost$core$Int64 $tmp722 = (frost$core$Int64) {1};
int64_t $tmp723 = $tmp721.value;
int64_t $tmp724 = $tmp722.value;
int64_t $tmp725 = $tmp723 - $tmp724;
frost$core$Int64 $tmp726 = (frost$core$Int64) {$tmp725};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, param1, $tmp726, param3);
// line 351
frost$core$Int64 $tmp727 = *(&local2);
frost$core$Int64 $tmp728 = (frost$core$Int64) {1};
int64_t $tmp729 = $tmp727.value;
int64_t $tmp730 = $tmp728.value;
int64_t $tmp731 = $tmp729 + $tmp730;
frost$core$Int64 $tmp732 = (frost$core$Int64) {$tmp731};
frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(param0, $tmp732, param2, param3);
frost$core$Object* $tmp733 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp733);
*(&local1) = ((frost$core$Object*) NULL);
return;

}
void frost$core$Frost$cleanup(frost$core$Frost* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp734 = &param0->allocations;
frost$collections$HashMap* $tmp735 = *$tmp734;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$collections$HashMap** $tmp736 = &param0->traces;
frost$collections$HashMap* $tmp737 = *$tmp736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
return;

}

